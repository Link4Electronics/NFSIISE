// SPDX-License-Identifier: MIT

#include "Wrapper.h"
#include "Version"
#include <SDL3/SDL.h>
#include <signal.h>
#include <ucontext.h>
#include <sys/stat.h>
#ifdef WIN32
	#include <windows.h>
#else
	#include <sched.h>
#endif
#include <sys/mman.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include "Cpp/ByteUtils.h"

#if defined(HOST_64BIT)
#if !defined(MAP_FIXED_NOREPLACE) && defined(MAP_FIXED)
/* Fallback: same numeric value on all Linux arches since 4.17 */
#define MAP_FIXED_NOREPLACE 0x100000
#endif

/* -----  Low-4GB heap  ------------------------------------------------- */

#if defined(__aarch64__) || defined(__powerpc64__) || defined(__PPC64__)
/*
 * ARM64/PPC64 lack MAP_32BIT.  Instead of probing fixed slots (which
 * exhaust quickly) we carve from a single large MAP_FIXED pool and
 * maintain a free list so free+reuse works.
 *
 * Block layout (same for both allocated and freed blocks):
 *   +0  size_t alloc_size            - total block size including header
 *   +8  [user data]  (when allocated)
 *        next pointer (when on free list, stored in the first 8 bytes of
 *        what was user data)
 *
 * free32 therefore still reads alloc_size at *(p - 8), matching the
 * original slot-based format.
 */
#define POOL_SIZE  (258UL * 1024 * 1024)   /* 258 MB per pool chunk */
#define POOL_ALIGN 16

/* add_pool_range: no-op on all platforms (pool is identity-mapped). */
#include "Cpp/MemoryTranslate.h"

static void *pool_freelist = NULL;  /* linked through the first pointer-sized
                                       slot of each freed block */
static void  *pool_cur     = NULL;
static size_t pool_left    = 0;
static pthread_mutex_t pool_mtx = PTHREAD_MUTEX_INITIALIZER;

/* Track all successfully mapped pool chunks so that free32/malloc32 can
   reject stale pointers that leaked in from the original x86 game data. */
#define MAX_POOL_CHUNKS 12
static void  *pool_chunks[MAX_POOL_CHUNKS];
static size_t pool_chunk_sz[MAX_POOL_CHUNKS];
static int pool_nchunks = 0;

/* Bitmask tracking which pool_chunks entries have been used by the bump
   allocator (via pool_preallocate or pool_grow fallback).  pool_grow
   will only switch to a chunk whose bit is NOT set, preventing the
   cycling-back-to-exhausted-chunk problem that would otherwise let
   new allocations silently overwrite already-allocated memory. */
static uint16_t pool_bump_mask = 0;

/* Return 1 when ptr falls inside one of our known pool chunks. */
static int in_pool(const void *ptr)
{
	for (int i = 0; i < pool_nchunks; i++)
		if ((const char *)ptr >= (const char *)pool_chunks[i] &&
		    (const char *)ptr <  (const char *)pool_chunks[i] + pool_chunk_sz[i])
			return 1;
	return 0;
}

static int add_pool_chunk(void *base)
{
	if (pool_nchunks >= MAX_POOL_CHUNKS) return 0;
	pool_chunks[pool_nchunks++] = base;
	return 1;
}

/* Pool chunks below this must be sized to not overlap the code segment. */
#define POOL_LOW_MAX 0x10000000U

/* _end linker symbol — marks the end of the binary's BSS.  The lowest
   pool chunk starts at the next page boundary after _end so that x86
   VAs just above the data segment are covered. */
extern char _end[];

static int pool_grow(void)
{
	static long page_size = 0;
	if (!page_size) page_size = sysconf(_SC_PAGE_SIZE);
	/* Compute the page-aligned start just above the binary's data/BSS.
	   If _end is above POOL_LOW_MAX (binary has large BSS), use a
	   fixed low address that is safely past our BSS end but still
	   below the mid chunk. */
	uintptr_t low_start = ((uintptr_t)_end + page_size - 1) & ~(uintptr_t)(page_size - 1);
	if (low_start >= POOL_LOW_MAX || low_start + POOL_SIZE >= 0x20000000U)
		low_start = 0x18000000;  /* fixed: safely past 0x11a51948 BSS end */

	/* Non-overlapping identity pool ranges.  Each range must end
	   before (or at) the next range's start, otherwise MAP_FIXED_
	   NOREPLACE fails with EEXIST.  Together the ranges cover the
	   full game heap VA space up to 0x80000000 (2 GB). */
	const uintptr_t addrs[] = {
		low_start,   /* low:  [low_start, 0x20000000)   384–512 MB */
		0x20000000,  /* mid:  [0x20000000, 0x40000000)     512 MB */
		0x40000000,  /* high: [0x40000000, 0x80000000)       1 GB */
	};
	for (int i = 0; i < (int)(sizeof addrs / sizeof addrs[0]); i++) {
		int skip = 0;
		for (int j = 0; j < pool_nchunks; j++)
			if ((uintptr_t)pool_chunks[j] == addrs[i]) { skip = 1; break; }
		if (skip) continue;
		/* Size to the next addrs entry (or a large default for the
		   last entry) so ranges never overlap. */
		size_t sz;
		if (i < (int)(sizeof addrs / sizeof addrs[0]) - 1)
			sz = (size_t)(addrs[i+1] - addrs[i]);
		else
			sz = POOL_SIZE * 4 + page_size;  /* last chunk: ~1 GB + guard page */
		void *p;

		p = mmap((void *)addrs[i], sz,
			       PROT_READ | PROT_WRITE,
			       MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE,
			       -1, 0);
		if (p != MAP_FAILED) {
			goto mapped_ok;
		}
		/* Address occupied or unavailable — skip it and try the
		   next slot.  Never fall back to plain MAP_FIXED (which
		   can crash on PPC64 with 64 KB pages when replacing
		   existing mappings). */
		continue;

mapped_ok:
		pool_cur  = p;
		pool_left = sz;
		pool_chunk_sz[pool_nchunks] = sz;
		add_pool_chunk(p);
		add_pool_range((uint32_t)addrs[i], (uintptr_t)p, sz);
		return 1;
	}

	/* All addrs[] entries already tracked — try switching to a pre-allocated
	   chunk that hasn't been used for bump allocation yet.  Without this
	   fallback the game exhausts the bump space in the largest chunk and
	   then malloc32 returns NULL because pool_grow can't find any "new"
	   addresses (they were all added to pool_chunks during
	   pool_preallocate). */
	for (int i = 0; i < pool_nchunks; i++) {
		if (pool_bump_mask & (uint16_t)(1 << i))
			continue;
		pool_bump_mask |= (uint16_t)(1 << i);
		pool_cur  = pool_chunks[i];
		pool_left = pool_chunk_sz[i];
		return 1;
	}
	return 0;
}

/* Pre-allocate all pool chunks so that x86 heap addresses (used
   directly by the BE address-translation path) are always backed
   by mapped memory.  Safe to call early (pool is still empty). */
void pool_preallocate(void)
{
	pthread_mutex_lock(&pool_mtx);
	while (pool_grow()) {
		/* keep going until pool_grow returns 0 (no more slots) */
	}
	/* Use the largest chunk for bump allocation so that subsequent
	   malloc32 calls don't exhaust a small low-range chunk first. */
	{
		int best = 0;
		for (int i = 1; i < pool_nchunks; i++)
			if (pool_chunk_sz[i] > pool_chunk_sz[best])
				best = i;
		pool_cur  = pool_chunks[best];
		pool_left = pool_chunk_sz[best];
		pool_bump_mask = (uint16_t)(1 << best);
	}
	/* pool chunks are tracked in pool_chunks/pool_chunk_sz */
	/* Targeted fallback for embedded x86 VAs not covered by pool_grow.
	   When pool_grow succeeds for 0x02000000 but failed for 0x01B9E000,
	   the gap [0x01B9E000,0x02000000) needs separate mapping. */
	{
		static const uint32_t low_addrs[] = { 0x01B9E000 };
		for (int i = 0; i < (int)(sizeof low_addrs / sizeof low_addrs[0]); i++) {
			uint32_t upper = POOL_LOW_MAX;
			for (int j = 0; j < pool_nchunks; j++) {
				uintptr_t ca = (uintptr_t)pool_chunks[j];
				if (ca > low_addrs[i] && ca < upper)
					upper = (uint32_t)ca;
			}
			size_t sz = upper - low_addrs[i];
			if (sz == 0) continue;
			void *p = mmap((void *)(uintptr_t)low_addrs[i], sz,
				       PROT_READ | PROT_WRITE,
				       MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE,
				       -1, 0);
			if (p == MAP_FAILED) continue;
			add_pool_chunk(p);
			add_pool_range(low_addrs[i], (uintptr_t)p, sz);
		}
	}
	pthread_mutex_unlock(&pool_mtx);
}

void *malloc32(size_t size)
{
	/* Total needed: sizeof(size_t) header + user size. */
	size_t need = size + sizeof(size_t);
	if (need < POOL_ALIGN) need = POOL_ALIGN;
	need = (need + POOL_ALIGN - 1) & ~(size_t)(POOL_ALIGN - 1);

	pthread_mutex_lock(&pool_mtx);

	/* Walk the free list.  Each entry's header (at block+0) stores
	 * alloc_size; the *next* pointer lives at block+sizeof(size_t)
	 * (i.e. where the first 8 bytes of user data would be).
	 * Entries outside our pool (stale x86 32-bit addresses from
	 * free_wrap) are unlinked and skipped. */
	void **pp = (void **)&pool_freelist;
	while (*pp) {
		void   *blk   = *pp;
		if (!in_pool(blk)) {
			*pp = *(void **)((char *)blk + sizeof(size_t));
			continue;
		}
		size_t  bsize = *(size_t *)blk;
		if (bsize >= need) {
			*pp = *(void **)((char *)blk + sizeof(size_t));
			/* Re-store need so free32 sees the correct size. */
			*(size_t *)blk = need;
			pthread_mutex_unlock(&pool_mtx);
			return (void *)((char *)blk + sizeof(size_t));
		}
		pp = (void **)((char *)blk + sizeof(size_t));
	}

	/* Bump-allocate from the current pool chunk. */
	if (pool_left < need) {
		if (!pool_grow()) {
			pthread_mutex_unlock(&pool_mtx);
			return NULL;
		}
	}
	void *blk = pool_cur;
	pool_cur  = (char *)pool_cur + need;
	pool_left -= need;
	*(size_t *)blk = need;

	pthread_mutex_unlock(&pool_mtx);
	return (void *)((char *)blk + sizeof(size_t));
}

void free32(void *p)
{
	if (!p) return;
	/* Ignore pointers outside our pool — they are stale x86 32-bit
	 * addresses from game data that reached us through free_wrap. */
	if (!in_pool(p)) return;
	pthread_mutex_lock(&pool_mtx);
	/* Block base is at p - sizeof(size_t).  first 8 bytes = alloc_size,
	 * next 8 bytes = free-list pointer (overwrites old user data). */
	void *blk = (void *)((char *)p - sizeof(size_t));
	*(void **)((char *)blk + sizeof(size_t)) = pool_freelist;
	pool_freelist = blk;
	pthread_mutex_unlock(&pool_mtx);
}

/* Allocate the x86 emulated stack from the pool.  The pool is always in
   the low 4 GB (MAP_FIXED guarantees this) and easily fits a 1 MB stack
   alongside BSS data.  The stack grows downward from the top of the
   allocated block, never colliding with the bump allocator. */
uint32_t wrapper_get_stack_top(void)
{
	static uint32_t top = 0;
	if (top) return top;
	void *p = malloc32(0x100000);
	if (!p) return 0;
	top = (uint32_t)(uintptr_t)p + 0x100000;
	return top;
}

#else  /* x86_64 (uses MAP_32BIT / mmap_low) */
/* -----  MAP_32BIT approach (x86_64)  ------------------------------------ */

static void *mmap_low(size_t size)
{
	void *p;

#if defined(MAP_32BIT)
	p = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
	if (p != MAP_FAILED) return p;
#endif

	uintptr_t addr;
	for (addr = 0x70000000; addr >= 0x10000000; addr -= 0x10000000)
	{
		int flags = MAP_PRIVATE | MAP_ANONYMOUS;

#if defined(MAP_FIXED_NOREPLACE)
		p = mmap((void *)addr, size, PROT_READ | PROT_WRITE,
			 flags | MAP_FIXED_NOREPLACE, -1, 0);
		if (p != MAP_FAILED) return p;
		{ int e = errno;
		if (e == EEXIST) continue;		/* address taken, try next */
		if (e != EINVAL) return MAP_FAILED;	/* real error */
		} /* EINVAL → flag not supported; fall through to MAP_FIXED. */
#endif
		/* MAP_FIXED: force exact address (safe on ARM64 — low 4GB is empty). */
		p = mmap((void *)addr, size, PROT_READ | PROT_WRITE,
			 flags | MAP_FIXED, -1, 0);
		if (p != MAP_FAILED) return p;
		if (errno == ENOMEM) return MAP_FAILED;	/* out of memory, stop */
	}
	return MAP_FAILED;
}

void *malloc32(size_t size) {
	/* Allocate in low 4GB, storing the size in a header so free32 can
	   madvise the correct range. */
	size_t alloc_size = size + sizeof(size_t);
	void *p = mmap_low(alloc_size);
	if (p == MAP_FAILED) return NULL;
	*(size_t *)p = alloc_size;
	return (void *)((uintptr_t)p + sizeof(size_t));
}

void free32(void *p) {
	if (!p) return;
	void *real_p = (void *)((uintptr_t)p - sizeof(size_t));
	size_t size = *(size_t *)real_p;
	/* MADV_DONTNEED keeps the mapping (avoids SIGSEGV on use-after-free in
	   game code) but tells the kernel to discard the physical pages. */
	madvise(real_p, size, MADV_DONTNEED);
}

/* Allocate the x86 emulated stack from the low 4GB. */
uint32_t wrapper_get_stack_top(void)
{
	static uint32_t top = 0;
	if (top) return top;
	void *p = malloc32(0x100000);
	if (!p) return 0;
	top = (uint32_t)(uintptr_t)p + 0x100000;
	return top;
}

#endif  /* pool-based allocator */
#endif  /* HOST_64BIT */

static const char title[] = "Need For Speed II SE";

typedef void (*ProcedureType)(MAYBE_THIS_SINGLE);
static ProcedureType atExitProcedures[10];
static uint32_t atExitProcedureCount;
REALIGN STDCALL void WrapperAtExit(ProcedureType proc)
{
	if (atExitProcedureCount < 10)
		atExitProcedures[atExitProcedureCount++] = proc;
}

Uint32 watchdogTimer(void *userdata, SDL_TimerID timerID, Uint32 interval)
{
	(void)userdata; (void)timerID;
	exit(0);
}

SDL_Window *sdlWin = NULL;
float dpr = 1.0f;

#ifdef OPENGL1X
void SetBrightness(float val)
{
	SDL_SetWindowBrightness(sdlWin, val);
}
#endif

static char *settingsDir = NULL;

#ifndef WIN32
static
#endif
BOOL useOnlyOneCPU = false;

#ifndef WIN32
char *serialPort[4] = {NULL};
SDL_Mutex *event_mutex;
SDL_Condition *event_cond;
#endif
void exit_func(void)
{
	SDL_TimerID timerID;
	uint32_t i;

#ifndef WIN32
	signal(SIGINT, SIG_DFL);
	signal(SIGTERM, SIG_DFL);
#endif

	for (i = 0; i < atExitProcedureCount; ++i)
	{
		timerID = SDL_AddTimer(2500, watchdogTimer, NULL);
#ifdef NFS_CPP
		extern void *main_game_thread;
		atExitProcedures[i](main_game_thread);
#else
		atExitProcedures[i]();
#endif
		SDL_RemoveTimer(timerID);
	}
	atExitProcedureCount = 0;

#ifndef WIN32
	for (i = 0; i < 4; ++i)
	{
		free(serialPort[i]);
		serialPort[i] = NULL;
	}
#endif

	i = 250;
	while (sdlWin && i--)
		SDL_Delay(10);

#if !defined(WIN32) && 0 // Disabled, because currently causes deadlock on Linux
	SDL_DestroyCondition(event_cond);
	event_cond = NULL;
	SDL_DestroyMutex(event_mutex);
	event_mutex = NULL;
#endif

	free(settingsDir);
	settingsDir = NULL;
}

#ifndef WIN32
	#include <sys/stat.h>
#endif
#include <unistd.h>
#include <fcntl.h>

static char *createSettingsDirPath(const char *subdir, const char *fn)
{
	char *pth = (char *)malloc(strlen(settingsDir) + strlen(subdir) + 1 + strlen(fn) + 1);
	sprintf(pth, "%s%s/%s", settingsDir, subdir, fn);
	return pth;
}
char *convertFilePath(const char *srcPth, BOOL convToLower)
{
	char *tmpFileName = NULL;
	uint32_t i;
	if (settingsDir)
	{
		if (!strncasecmp(srcPth, ".\\fedata\\pc\\config\\", 19))
			tmpFileName = createSettingsDirPath("config", srcPth + 19);
		else if (!strncasecmp(srcPth, ".\\fedata\\pc\\save\\", 17))
			tmpFileName = createSettingsDirPath("save", srcPth + 17);
		else if (!strncasecmp(srcPth, ".\\gamedata\\tmptrk\\", 18))
			tmpFileName = createSettingsDirPath("tmptrk", srcPth + 18);
		else if (!strcasecmp(srcPth, "replay.rpy"))
			tmpFileName = createSettingsDirPath("tmptrk", srcPth);
		else if (!strncasecmp(srcPth, ".\\fedata\\pc\\stats\\", 18))
		{
			i = strlen(srcPth) - 4;
			if (i > 0 && !strcasecmp(srcPth + i, ".stf"))
			{
				if (!strncasecmp(srcPth, ".\\fedata\\pc\\stats\\prh\\", 22))
					tmpFileName = createSettingsDirPath("stats/prh", srcPth + 22);
				else
					tmpFileName = createSettingsDirPath("stats", srcPth + 18);
			}
		}
	}
	if (!tmpFileName)
	{
		tmpFileName = strdup(srcPth);
#ifndef WIN32
		for (i = 0; tmpFileName[i]; ++i)
		{
			if (tmpFileName[i] == '\\')
				tmpFileName[i] = '/';
			else if (convToLower)
				tmpFileName[i] = tolower(tmpFileName[i]);
		}
#endif
	}
	return tmpFileName;
}

static inline void mkdir_wrap(const char *path, uint32_t mode)
{
#ifdef WIN32
	CreateDirectoryA(path, NULL);
#else
	mkdir(path, mode);
#endif
}

static void checkGameDirs()
{
	struct stat st;
	uint32_t i;

	if (stat("gamedata", &st) != 0 || !S_ISDIR(st.st_mode) || stat("fedata/pc", &st) != 0 || !S_ISDIR(st.st_mode))
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title,
			"Can't find \"gamedata\" and/or \"fedata\" directories!"
#ifndef WIN32
			"\nMake sure that all files and directories have small letters!"
#endif
			, NULL
		);
		exit(-1);
	}

	const char *const files[] = {
		"install.win",
		"text.eng",
		"text.fre",
		"text.ger",
		"text.ita",
		"text.spa",
		"text.swe",
	};
	for (i = 0; i < sizeof(files) / sizeof(*files); ++i)
	{
		if (stat(files[i], &st) != 0 || !S_ISREG(st.st_mode))
		{
			char text[32];
			snprintf(text, sizeof(text), "Missing %s file!", files[i]);
			SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, text, NULL);
			exit(-1);
		}
	}
}

#if defined(__aarch64__)
#define MC_PC(ctx)  (((ucontext_t *)(ctx))->uc_mcontext.pc)
#elif defined(__x86_64__)
#define MC_PC(ctx)  (((ucontext_t *)(ctx))->uc_mcontext.gregs[REG_RIP])
#elif defined(__powerpc__) || defined(__powerpc64__) || defined(__PPC__)
#define MC_PC(ctx)  (((ucontext_t *)(ctx))->uc_mcontext.gp_regs[PT_NIP])
#else
#define MC_PC(ctx)  ((void*)0)
#endif

static void sigsegv_handler(int sig, siginfo_t *info, void *ucontext)
{
	fprintf(stderr, "SIGSEGV at PC %p fault %p\n",
		(void *)MC_PC(ucontext), info->si_addr);
	fflush(stderr);
	signal(SIGSEGV, SIG_DFL);
	raise(SIGSEGV);
}

static void signal_handler(int sig)
{
#ifndef WIN32
	if (sig == SIGPIPE)
		return;
#endif

	if (sig == SIGINT || sig == SIGTERM)
	{
		exit_func();
		exit(0);
		return;
	}

	extern BOOL contextError;
#ifndef OPENGL1X
	extern BOOL shaderError;
	extern BOOL framebufferError;
#endif // OPENGL1X
	if (contextError)
	{
#ifndef WIN32
		SDL_SetWindowFullscreen(sdlWin, false);
#endif
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, "Can't create context!", NULL);
	}
#ifndef OPENGL1X
	else if (shaderError)
	{
#ifndef WIN32
		SDL_SetWindowFullscreen(sdlWin, false);
#endif
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, "Error loading shaders, see console output!", NULL);
	}
	else if (framebufferError)
	{
#ifndef WIN32
		SDL_SetWindowFullscreen(sdlWin, false);
#endif
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, "Can't create framebuffer!", NULL);
	}
#endif // OPENGL1X
	else
	{
		fprintf(stderr, "Application closed with a signal: %d\n", sig);
		fflush(stderr);
	}

	signal(sig, SIG_DFL);
	raise(sig);
}

static BOOL startInFullScreen = true;

int32_t joystickAxes[2][12] = {{0, 1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0}, {0, 1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0}};
int32_t initialWinWidth = 640, initialWinHeight = 480, winWidth, winHeight, vSync = 1;
BOOL joystickApplyDeadzone = false, joystickDisableAxesInMenu = false;
int32_t joystickEscButton[2] = {-1, -1}, joystickResetButton[2] = {-1, -1}, joystickDPadButtons[2][4] = {{-1, -1, -1, -1}, {-1, -1, -1, -1}};
BOOL linearSoundInterpolation = false, keepAspectRatio = true, linearFiltering = true;
uint32_t fullScreenFlag = SDL_WINDOW_FULLSCREEN, broadcast = 0xFFFFFFFF;
uint16_t PORT1 = 1030, PORT2 = 1029;
#ifndef OPENGL1X
BOOL fixedFramebufferSize = false;
BOOL framebufferLinearFiltering = true;
#endif

static void initializeSDL2()
{
#ifdef NFS_CPP
	extern const char *binaryGameVersion;
	#define binaryGameVersion (*binaryGameVersion)
#else
	extern const char binaryGameVersion;
#endif
	printf("%s\n  Wrapper v%s\n  Game    v%s\n  OpenGL  ", title, WRAPPER_VERSION, &binaryGameVersion);
#if defined(OPENGL1X)
	puts("1");
#elif defined(GLES2)
	puts("ES 2");
#else
	puts("2");
#endif
	fflush(stdout);

#ifdef WIN32
	SDL_SetHint(SDL_HINT_JOYSTICK_THREAD, "1");
#endif
#ifdef __ANDROID__
	SDL_SetHint(SDL_HINT_ORIENTATIONS, "LandscapeLeft");
	SDL_SetHint(SDL_HINT_ANDROID_TRAP_BACK_BUTTON, "1");
	SDL_SetHint(SDL_HINT_ENABLE_SCREEN_KEYBOARD, "0");
	SDL_SetHint(SDL_HINT_ANDROID_BLOCK_ON_PAUSE, "0");
	SDL_SetHint(SDL_HINT_ANDROID_BLOCK_ON_PAUSE_PAUSEAUDIO, "0");
#endif
	SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
	SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");

	if (!SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS))
		fprintf(stderr, "SDL init failed: %s\n", SDL_GetError());
}

#ifdef SWAP_WINDOW_AND_GL_THREAD
REALIGN
#endif
void WrapperInit(void)
{
#ifndef SWAP_WINDOW_AND_GL_THREAD
	initializeSDL2();
#endif

#ifdef OPENGL1X
	uint32_t msaa = 0;
#endif
	FILE *f = NULL;

	SDL_SetJoystickEventsEnabled(false);
	SDL_HideCursor();

#ifdef __ANDROID__
	if (!SDL_AndroidRequestPermission("android.permission.READ_EXTERNAL_STORAGE"))
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, "No permissions to read the external storage.", NULL);
		exit(-1);
	}
	chdir("/sdcard/NFSIISE");
#endif

#if defined(WIN32)
	const char *homeDir = getenv("AppData");
#elif defined(__ANDROID__)
	const char *homeDir = SDL_AndroidGetInternalStoragePath();
#else
	const char *homeDir = getenv("HOME");
#endif
	if (homeDir && *homeDir)
	{
		static const char subdirsToCreate[5][10] = {
			"config",
			"save",
			"stats",
			"stats/prh",
			"tmptrk"
		};
		char *buffer = malloc(strlen(homeDir) + 100);
		uint32_t pos, i;

		/* Creating ~/.nfs2se directory and subdirectories */
		strcpy(buffer, homeDir);
#ifdef __APPLE__
		strcat(buffer, "/Library/Application Support/nfs2se/");
#else
		strcat(buffer, "/.nfs2se/");
#endif

		mkdir_wrap(buffer, 0755);
		pos = strlen(buffer);
		for (i = 0; i < 5; ++i)
		{
			strcpy(buffer + pos, subdirsToCreate[i]);
			mkdir_wrap(buffer, 0755);
		}

#ifdef __ANDROID__
		buffer[pos] = '\0';
		settingsDir = buffer;
#else
		/* Checking for nfs2se.conf and copying it at first time to home dir */
		strcpy(buffer + pos, "nfs2se.conf");
		FILE *fSrc = fopen("nfs2se.conf.template", "r");
		if (fSrc)
		{
			FILE *fDst = fopen(buffer, "r");
			if (!fDst && (fDst = fopen(buffer, "w")))
			{
				char *buffer2 = (char *)malloc(1024);
				uint32_t bread;
				do
				{
					bread = fread(buffer2, 1, 1024, fSrc);
					fwrite(buffer2, 1, bread, fDst);
				} while (bread == 1024);
				free(buffer2);
			}
			fclose(fDst);
			fclose(fSrc);
		}

		/* Open the config file */
		if ((f = fopen(buffer, "r")))
		{
			buffer[pos] = '\0';
			settingsDir = buffer;
		}
		else
		{
			free(buffer);
		}
#endif
	}

#ifndef WIN32
	event_mutex = SDL_CreateMutex();
	event_cond = SDL_CreateCondition();

	signal(SIGILL, signal_handler);
	signal(SIGBUS, signal_handler);
	signal(SIGFPE, signal_handler);
	signal(SIGUSR1, signal_handler);
	{ struct sigaction sa = { .sa_sigaction = sigsegv_handler, .sa_flags = SA_SIGINFO }; sigaction(SIGSEGV, &sa, NULL); }
	signal(SIGUSR2, signal_handler);
	signal(SIGPIPE, signal_handler);
	signal(SIGALRM, signal_handler);
#endif

	signal(SIGINT, signal_handler);
	signal(SIGABRT, signal_handler);
	signal(SIGTERM, signal_handler);

	if (!f)
		f = fopen("nfs2se.conf", "r");
	if (!f)
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_WARNING, title, "Cannot open configuration file \"nfs2se.conf\"\n", NULL);
	}
	else
	{
		BOOL canParseNextLine = true;
		char line[128];
		while (fgets(line, sizeof line, f))
		{
			uint32_t nPos = strlen(line) - 1;
			if (line[nPos] != '\n')
			{
				canParseNextLine = false;
				continue;
			}
			if (line[0] == '\0' || line[0] == ' ' || line[0] == '#')
				continue;
			if (!canParseNextLine)
			{
				canParseNextLine = true;
				continue;
			}
			line[nPos] = '\0';
			if (!strncasecmp("UseOnlyOneCPU=", line, 14))
				useOnlyOneCPU = !!atoi(line + 14);
			else if (!strncasecmp("StartInFullScreen=", line, 18))
				startInFullScreen = !!atoi(line + 18);
			else if (!strncasecmp("VSync=", line, 6))
				vSync = atoi(line + 6);
#ifdef OPENGL1X
			else if (!strncasecmp("MSAA=", line, 5))
			{
				msaa = atoi(line + 5);
				if (msaa > 16 || (msaa & (msaa - 1)))
					msaa = 0;
			}
#endif
			else if (!strncasecmp("FixedRenderingSize=", line, 19))
			{
				int val = atoi(line + 19);
				if (val == 1 || val == 2)
				{
#ifdef OPENGL1X
					fullScreenFlag = SDL_WINDOW_FULLSCREEN;
#else
					fixedFramebufferSize = true;
					if (val == 2)
						framebufferLinearFiltering = false;
#endif
				}
			}
			else if (!strncasecmp("WindowSize=", line, 11))
				sscanf(line + 11, "%dx%d", &initialWinWidth, &initialWinHeight);
			else if (!strncasecmp("KeepAspectRatio=", line, 16))
				sscanf(line + 16, "%d", &keepAspectRatio);
			else if (!strncasecmp("LinearTextureFiltering=", line, 23))
				sscanf(line + 23, "%d", &linearFiltering);
			else if (!strncasecmp("JoystickApplyDeadzone=", line, 22))
				joystickApplyDeadzone = !!atoi(line + 22);
			else if (!strncasecmp("JoystickDisableAxesInMenu=", line, 26))
				joystickDisableAxesInMenu = !!atoi(line + 26);
			else if (!strncasecmp("Joystick0Axes2=", line, 15))
				sscanf(line + 15, "%d,%d,%d,%d,%d,%d:%d,%d,%d,%d,%d,%d", joystickAxes[0]+0, joystickAxes[0]+1, joystickAxes[0]+2, joystickAxes[0]+3, joystickAxes[0]+4, joystickAxes[0]+5, joystickAxes[0]+6, joystickAxes[0]+7, joystickAxes[0]+8, joystickAxes[0]+9, joystickAxes[0]+10, joystickAxes[0]+11);
			else if (!strncasecmp("Joystick1Axes2=", line, 15))
				sscanf(line + 15, "%d,%d,%d,%d,%d,%d:%d,%d,%d,%d,%d,%d", joystickAxes[1]+0, joystickAxes[1]+1, joystickAxes[1]+2, joystickAxes[1]+3, joystickAxes[1]+4, joystickAxes[1]+5, joystickAxes[1]+6, joystickAxes[1]+7, joystickAxes[1]+8, joystickAxes[1]+9, joystickAxes[1]+10, joystickAxes[1]+11);
			else if (!strncasecmp("Joystick0EscButton=", line, 19))
				sscanf(line + 19, "%d", &joystickEscButton[0]);
			else if (!strncasecmp("Joystick1EscButton=", line, 19))
				sscanf(line + 19, "%d", &joystickEscButton[1]);
			else if (!strncasecmp("Joystick0ResetButton=", line, 21))
				sscanf(line + 21, "%d", &joystickResetButton[0]);
			else if (!strncasecmp("Joystick1ResetButton=", line, 21))
				sscanf(line + 21, "%d", &joystickResetButton[1]);
			else if (!strncasecmp("Joystick0DPadButtons=", line, 21))
				sscanf(line + 21, "%d,%d,%d,%d", &joystickDPadButtons[0][0], &joystickDPadButtons[0][1], &joystickDPadButtons[0][2], &joystickDPadButtons[0][3]);
			else if (!strncasecmp("Joystick1DPadButtons=", line, 21))
				sscanf(line + 21, "%d,%d,%d,%d", &joystickDPadButtons[1][0], &joystickDPadButtons[1][1], &joystickDPadButtons[1][2], &joystickDPadButtons[1][3]);
			else if (!strncasecmp("LinearSoundInterpolation=", line, 25))
				linearSoundInterpolation = !!atoi(line + 25);
			else if (!strncasecmp("Port1=", line, 6))
				PORT1 = atoi(line + 6);
			else if (!strncasecmp("Port2=", line, 6))
				PORT2 = atoi(line + 6);
			else if (!strncasecmp("Bcast=", line, 6))
			{
				uint32_t a, b, c, d;
				if (sscanf(line + 6, "%d.%d.%d.%d", &a, &b, &c, &d) && a <= 0xFF && b <= 0xFF && c <= 0xFF && d <= 0xFF)
					broadcast = d << 24 | c << 16 | b << 8 | a;
			}
#ifndef WIN32
			else if (!strncasecmp("LinuxCOM1=", line, 10))
				serialPort[0] = strdup(line + 10);
			else if (!strncasecmp("LinuxCOM2=", line, 10))
				serialPort[1] = strdup(line + 10);
			else if (!strncasecmp("LinuxCOM3=", line, 10))
				serialPort[2] = strdup(line + 10);
			else if (!strncasecmp("LinuxCOM4=", line, 10))
				serialPort[3] = strdup(line + 10);
#endif
#if defined(__ANDROID__) && defined(SDL_HINT_ACCELEROMETER_AS_JOYSTICK)
			else if (!strncasecmp("AccelerometerAsJoystick=", line, 24))
				SDL_SetHint(SDL_HINT_ACCELEROMETER_AS_JOYSTICK, line + 24);
#endif
		}
		fclose(f);
	}

#ifndef OPENGL1X
# ifdef GLES2
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
# endif
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#else
	if (msaa)
	{
		SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, msaa == 1 ? 0 : 1);
		SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, msaa);
	}
#endif
#ifndef WIN32
	uint32_t i;
	for (i = 0; i < 4; ++i)
	{
		if (!serialPort[i])
		{
			char tmp[11];
			sprintf(tmp, "/dev/ttyS%d", i);
			serialPort[i] = strdup(tmp);
		}
	}
#endif

	if (useOnlyOneCPU)
	{
#if defined WIN32
		SetThreadAffinityMask(GetCurrentThread(), 1);
#elif !defined(linux)
		#warning "TODO: thread affinity"
#else
		cpu_set_t set;
		CPU_ZERO(&set);
		CPU_SET(0, &set);
		if (sched_setaffinity(0, sizeof set, &set))
			perror("sched_setaffinity");
#endif
	}
}

#ifdef SWAP_WINDOW_AND_GL_THREAD
REALIGN STDCALL void WrapperStartInThread(SDL_ThreadFunction mainCodeInSeparateThread)
{
	initializeSDL2();
	SDL_DetachThread(SDL_CreateThread(mainCodeInSeparateThread, NULL, NULL));
}
#endif

extern WindowProc wndProc;

REALIGN STDCALL SDL_Window *WrapperCreateWindow(WindowProc windowProc)
{
#ifndef __ANDROID__
	static const uint32_t palette[8] = {0xFF000000, 0xFF000080, 0xFF0000FF, 0xFFC0C0C0, 0xFF00FFFF, 0xFFFFFFFF, 0x00000000, 0xFF008080};
	static const uint8_t compressed_icon[372] =
	{
		0x90, 0x00, 0x12, 0x22, 0x33, 0x83, 0x34, 0x86, 0x44, 0x45, 0x82, 0x55,
		0x51, 0x83, 0x00, 0x11, 0x83, 0x22, 0x24, 0x42, 0x01, 0x12, 0x82, 0x22,
		0x12, 0x44, 0x10, 0x82, 0x66, 0x60, 0x12, 0x83, 0x22, 0x24, 0x41, 0x01,
		0x84, 0x22, 0x44, 0x06, 0x82, 0x66, 0x60, 0x12, 0x83, 0x22, 0x24, 0x31,
		0x01, 0x84, 0x22, 0x43, 0x06, 0x82, 0x66, 0x60, 0x84, 0x22, 0x34, 0x20,
		0x02, 0x83, 0x22, 0x23, 0x42, 0x06, 0x82, 0x66, 0x60, 0x84, 0x22, 0x34,
		0x10, 0x02, 0x83, 0x22, 0x23, 0x41, 0x83, 0x66, 0x01, 0x84, 0x22, 0x44,
		0x10, 0x12, 0x83, 0x22, 0x24, 0x40, 0x83, 0x66, 0x01, 0x84, 0x22, 0x43,
		0x00, 0x12, 0x83, 0x22, 0x24, 0x20, 0x83, 0x66, 0x84, 0x00, 0x22, 0x42,
		0x88, 0x00, 0x66, 0x00, 0x73, 0x82, 0x55, 0x43, 0x70, 0x21, 0x00, 0x74,
		0x44, 0x45, 0x83, 0x55, 0x47, 0x60, 0x73, 0x84, 0x44, 0x53, 0x70, 0x00,
		0x74, 0x85, 0x44, 0x70, 0x07, 0x82, 0x44, 0x30, 0x00, 0x34, 0x44, 0x47,
		0x00, 0x34, 0x44, 0x84, 0x33, 0x06, 0x07, 0x44, 0x43, 0x82, 0x00, 0x07,
		0x82, 0x44, 0x07, 0x34, 0x44, 0x70, 0x83, 0x00, 0x66, 0x07, 0x34, 0x44,
		0x43, 0x37, 0x83, 0x00, 0x07, 0x82, 0x44, 0x84, 0x00, 0x06, 0x60, 0x73,
		0x34, 0x82, 0x44, 0x43, 0x70, 0x00, 0x07, 0x44, 0x45, 0x83, 0x55, 0x44,
		0x30, 0x66, 0x07, 0x77, 0x33, 0x82, 0x44, 0x43, 0x00, 0x03, 0x85, 0x44,
		0x43, 0x06, 0x84, 0x00, 0x07, 0x34, 0x44, 0x30, 0x73, 0x44, 0x43, 0x84,
		0x00, 0x66, 0x34, 0x44, 0x47, 0x82, 0x00, 0x03, 0x44, 0x30, 0x74, 0x44,
		0x40, 0x84, 0x00, 0x66, 0x74, 0x82, 0x44, 0x37, 0x77, 0x34, 0x44, 0x70,
		0x34, 0x85, 0x44, 0x43, 0x06, 0x07, 0x34, 0x84, 0x44, 0x43, 0x07, 0x34,
		0x85, 0x44, 0x30, 0x66, 0x60, 0x77, 0x34, 0x82, 0x44, 0x33, 0x70, 0x07,
		0x86, 0x33, 0x70, 0x82, 0x66, 0x85, 0x00, 0x01, 0x87, 0x00, 0x06, 0x82,
		0x66, 0x02, 0x84, 0x22, 0x42, 0x00, 0x84, 0x22, 0x24, 0x20, 0x83, 0x66,
		0x02, 0x84, 0x22, 0x42, 0x01, 0x84, 0x22, 0x24, 0x10, 0x82, 0x66, 0x60,
		0x12, 0x83, 0x22, 0x23, 0x41, 0x01, 0x84, 0x22, 0x34, 0x06, 0x82, 0x66,
		0x60, 0x84, 0x22, 0x23, 0x41, 0x02, 0x84, 0x22, 0x34, 0x06, 0x82, 0x66,
		0x60, 0x84, 0x22, 0x24, 0x30, 0x02, 0x84, 0x22, 0x43, 0x06, 0x82, 0x66,
		0x60, 0x84, 0x22, 0x24, 0x20, 0x02, 0x84, 0x22, 0x42, 0x06, 0x82, 0x66,
		0x01, 0x84, 0x22, 0x24, 0x10, 0x01, 0x84, 0x22, 0x41, 0x83, 0x00, 0x14,
		0x82, 0x54, 0x85, 0x44, 0x84, 0x43, 0x33, 0x82, 0x22, 0x20, 0x90, 0x00
	};

	uint32_t *icon, i, j;
#endif

	checkGameDirs();

	int windowFlags = SDL_WINDOW_OPENGL | SDL_WINDOW_HIGH_PIXEL_DENSITY | (startInFullScreen ? fullScreenFlag : 0);
	if (fullScreenFlag == SDL_WINDOW_FULLSCREEN)
		windowFlags |= SDL_WINDOW_RESIZABLE;
	sdlWin = SDL_CreateWindow(title, initialWinWidth, initialWinHeight, windowFlags);
	if (!sdlWin)
	{
		const char errorText[] = "Cannot create window: %s\nCheck the OpenGL drivers and the game settings!";
		const char *error = SDL_GetError();
		size_t bufferSize = strlen(error) + sizeof(errorText) - 2;
		char *buffer = (char *)malloc(bufferSize);
		snprintf(buffer, bufferSize, errorText, error);
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, buffer, NULL);
		free(buffer);
		exit(-1);
	}

	SDL_GetWindowSize(sdlWin, &winWidth, &winHeight);

#ifndef __ANDROID__
	uint8_t *icon_bytes = (uint8_t *)malloc(32 * 32 * 4);
	for (i = 0, j = 0; i < sizeof compressed_icon; ++i)
	{
		uint32_t c, pix;
		if (compressed_icon[i] & 0x80)
			c = compressed_icon[i++] & 0x7F;
		else
			c = 1;
		while (c--)
		{
			pix = palette[compressed_icon[i] >> 4];
			icon_bytes[j++] = pix & 0xFF;         /* R */
			icon_bytes[j++] = (pix >> 8) & 0xFF;  /* G */
			icon_bytes[j++] = (pix >> 16) & 0xFF; /* B */
			icon_bytes[j++] = (pix >> 24) & 0xFF; /* A */
			pix = palette[compressed_icon[i] & 0x0F];
			icon_bytes[j++] = pix & 0xFF;
			icon_bytes[j++] = (pix >> 8) & 0xFF;
			icon_bytes[j++] = (pix >> 16) & 0xFF;
			icon_bytes[j++] = (pix >> 24) & 0xFF;
		}
	}
	SDL_Surface *icon_surface = SDL_CreateSurface(32, 32, SDL_PIXELFORMAT_RGBA8888);
	if (SDL_MUSTLOCK(icon_surface)) SDL_LockSurface(icon_surface);
	memcpy(icon_surface->pixels, icon_bytes, 32 * 32 * 4);
	if (SDL_MUSTLOCK(icon_surface)) SDL_UnlockSurface(icon_surface);
	SDL_Surface *icon_converted = SDL_ConvertSurface(icon_surface, SDL_PIXELFORMAT_RGBA32);
	SDL_DestroySurface(icon_surface);
	SDL_SetWindowIcon(sdlWin, icon_converted);
	SDL_DestroySurface(icon_converted);

	free(icon_bytes);
#endif

	wndProc = windowProc;

	return sdlWin;
}

REALIGN int32_t SDL_NumJoysticks_wrap(void)
{
	return 2;
}

#ifdef NFS_CPP
int main(int argc, char *argv[])
{
	void nfs2seEntrypoint();
	struct stat st;

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__) || defined(__arm__)
	pool_preallocate();
#endif

	char *slash = strrchr(argv[0], '/');
	if (slash)
	{
		*slash = '\0';
		chdir(argv[0]);
		*slash = '/';
	}
	/* If data not found next to binary, check $HOME/.nfs2se (AppImage/portable). */
	if ((stat("gamedata", &st) != 0 || !S_ISDIR(st.st_mode)) &&
	    (stat("fedata/pc", &st) != 0 || !S_ISDIR(st.st_mode)))
	{
		const char *home = getenv("HOME");
		if (home)
		{
			char *path = malloc(strlen(home) + 20);
			sprintf(path, "%s/.nfs2se", home);
			if (stat(path, &st) == 0 && S_ISDIR(st.st_mode))
			{
				chdir(path);
			}
			free(path);
		}
	}
	nfs2seEntrypoint();
	return 0;
}
#endif

/* Wrapper for functions called from Assembly code for stack realignment */

#include <stdarg.h>
#include <time.h>

REALIGN uint32_t SDL_GetTicks_wrap(void)
{
	return SDL_GetTicks();
}
REALIGN void SDL_Delay_wrap(uint32_t ms)
{
	SDL_Delay(ms ? ms : 1);
}

REALIGN int32_t vsprintf_wrap(char *s, const char *fmt, void *arg)
{
#if defined(HOST_64BIT)
	/* On x86_64/ARM64, variadic calling convention differs from x86_32.
	 * The game stores variadic args as 32-bit values on its simulated stack,
	 * but 64-bit va_list expects 64-bit slots.
	 * We reimplement vsprintf here, reading 32-bit args from the game stack
	 * and formatting into the destination buffer. */
	typedef uint32_t *args32_ptr_t;
	args32_ptr_t ap = (args32_ptr_t)arg;
	char buf[2048];
	int bi = 0, fi = 0;
	while (fmt[fi] && bi < (int)sizeof(buf) - 1) {
		if (fmt[fi] != '%') {
			buf[bi++] = fmt[fi++];
			continue;
		}
		int pi = fi;
		/* collect %...[flags][width][.precision][length]specifier */
		char fmt_spec[64];
		int si = 0;
		fmt_spec[si++] = fmt[fi++]; /* '%' */
		/* flags */
		while (fmt[fi] == '-' || fmt[fi] == '+' || fmt[fi] == ' ' || fmt[fi] == '#' || fmt[fi] == '0')
			fmt_spec[si++] = fmt[fi++];
		/* width */
		if (fmt[fi] == '*') {
			fmt_spec[si++] = '*';
			fi++;
		} else {
			while (fmt[fi] >= '0' && fmt[fi] <= '9')
				fmt_spec[si++] = fmt[fi++];
		}
		/* precision */
		if (fmt[fi] == '.') {
			fmt_spec[si++] = '.';
			fi++;
			if (fmt[fi] == '*') {
				fmt_spec[si++] = '*';
				fi++;
			} else {
				while (fmt[fi] >= '0' && fmt[fi] <= '9')
					fmt_spec[si++] = fmt[fi++];
			}
		}
		/* length modifier */
		if (fmt[fi] == 'h' || fmt[fi] == 'l' || fmt[fi] == 'L' || fmt[fi] == 'z' || fmt[fi] == 't' || fmt[fi] == 'j') {
			fmt_spec[si++] = fmt[fi++];
			if (fmt[fi] == 'h' || fmt[fi] == 'l')
				fmt_spec[si++] = fmt[fi++];
		}
		/* conversion specifier */
		if (fmt[fi] == '\0') break;
		char conv = fmt[fi];
		fmt_spec[si++] = conv;
		fmt_spec[si] = '\0';
		fi++;

		if (conv == '%') {
			buf[bi++] = '%';
			continue;
		}

		/* read 32-bit width arg if '*' was used */
		int width_val = 0, prec_val = -1;
		int got_star;
		got_star = 0;
		for (int k = 0; fmt_spec[k]; k++) {
			if (fmt_spec[k] == '*') {
				if (!got_star) {
					got_star = 1;
					width_val = (int)(int32_t)read32le(ap++);
				} else {
					prec_val = (int)(int32_t)read32le(ap++);
				}
			}
		}

		/* read the actual variadic arg from game stack */
		char arg_buf[256];

		if (conv == 's' || conv == 'p') {
			uint32_t addr32 = read32le(ap++);
			void *ptr = (void *)(uintptr_t)addr32;
			snprintf(arg_buf, sizeof(arg_buf), fmt_spec, ptr);
		} else if (conv == 'c') {
			int ch = (int)(int32_t)read32le(ap++) & 0xFF;
			snprintf(arg_buf, sizeof(arg_buf), fmt_spec, ch);
		} else if (conv == 'n') {
			/* %n writes output count, skip */
		} else if (conv == 'f' || conv == 'F' || conv == 'e' || conv == 'E' ||
			   conv == 'g' || conv == 'G' || conv == 'a' || conv == 'A') {
			/* double: 8 bytes on the stack (pushed as two 32-bit halves) */
			uint32_t lo = read32le(ap++);
			uint32_t hi = read32le(ap++);
			double val;
			uint64_t tmp = (uint64_t)hi << 32 | lo;
			memcpy(&val, &tmp, 8);
			snprintf(arg_buf, sizeof(arg_buf), fmt_spec, val);
		} else {
			/* integer types: d, i, u, o, x, X */
			int val = (int)(int32_t)read32le(ap++);
			snprintf(arg_buf, sizeof(arg_buf), fmt_spec, val);
		}

		for (int j = 0; arg_buf[j] && bi < (int)sizeof(buf) - 1; j++)
			buf[bi++] = arg_buf[j];
	}
	buf[bi] = '\0';
	strcpy(s, buf);
	return bi;
#else
	return vsprintf(s, fmt, (va_list)arg);
#endif
}
REALIGN int32_t fscanf_wrap(FILE *f, const char *fmt, ...)
{
	int ret;
	va_list arg;
	va_start(arg, fmt);
	ret = vfscanf(f, fmt, arg);
	va_end(arg);
	return ret;
}
REALIGN int32_t fclose_wrap(FILE *f)
{
	return fclose(f);
}
REALIGN void *calloc_wrap(size_t num, size_t size)
{
#if defined(HOST_64BIT) && !defined(__aarch64__) && !defined(__powerpc64__) && !defined(__PPC64__)
	void *p = mmap_low(num * size);
	if (p == MAP_FAILED) return NULL;
	memset(p, 0, num * size);
	return p;
#elif defined(HOST_64BIT)
	void *p = malloc32(num * size);
	if (p) memset(p, 0, num * size);
	return p;
#else
	return calloc(num, size);
#endif
}
REALIGN void *malloc_wrap(size_t num)
{
#if defined(HOST_64BIT) && !defined(__aarch64__) && !defined(__powerpc64__) && !defined(__PPC64__)
	void *p = mmap_low(num);
	return (p == MAP_FAILED) ? NULL : p;
#elif defined(HOST_64BIT)
	return malloc32(num);
#else
	return malloc(num);
#endif
}
REALIGN void free_wrap(void *ptr)
{
#if defined(HOST_64BIT)
	// On x86_64 with MAP_32BIT we can't munmap (don't know the size).
	// On ARM64/PPC64 the pool allocator tracks every block, so free properly.
#if defined(__aarch64__) || defined(__powerpc64__) || defined(__PPC64__)
	free32(ptr);
#else
	(void)ptr;
#endif
#else
	free(ptr);
#endif
}
REALIGN time_t time_wrap(time_t *timer)
{
	return time(timer);
}
