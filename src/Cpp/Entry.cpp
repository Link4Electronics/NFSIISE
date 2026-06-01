#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <sys/mman.h>
#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "SwapInit.h"
#include "MemoryTranslate.h"

extern "C" void pool_preallocate(void);
extern "C" uint32_t wrapper_get_stack_top(void);

void *main_game_thread, *audio_game_thread;

extern "C" void nfs2seEntrypoint()
{
	swap_initial_data();

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)
	/* Initialise the x86-to-host address translator with the
	   BSS/DATA section bounds. */
	init_translation(
		(uintptr_t)&_bss,  sizeof(_bss),
		(uintptr_t)&_data, sizeof(_data));
#endif

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__) || defined(__arm__)
	/* Initialize BSS pointer fields that were never written by game code
	   (the original x86 binary had these in initialized data, not BSS).
	   dword_5134D8 is a wchar string pointer used in _sub_4242F0 (wcscpy).
	   Without initialization, it stays NULL and causes SIGSEGV. */
	{
		uint16_t *empty = (uint16_t *)malloc32(4);
		if (empty) {
			empty[0] = 0; /* null wchar L"" */
			/* Use write32 for LE byte order (consistent with read32/write32 in
			   Application.h).  Raw native write would store in host BE order,
			   causing a double-swap mismatch when read32 reads it as LE. */
			Application::write32((void *)&_bss.dword_5134D8, (uint32_t)(intptr_t)empty);
		}
	}
#endif

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__) || defined(__arm__)
	/* Zero DATA variables that store relative x86 addresses instead of
	   absolute ones, forcing the runtime initialisation path. */
	#undef dword_4DB6A8
	memset(&_data.dword_4DB6A8, 0, sizeof(_data.dword_4DB6A8));
	#define dword_4DB6A8 ((int8_t *)&_data.dword_4DB6A8)
#endif

#if defined(__powerpc64__) || defined(__PPC64__)
	/* Identity-map DATA and BSS at their truncated (low 32-bit) host
	   addresses.  On PPC64 the kernel may load the binary above 4 GB,
	   so the 32-bit truncation of a host pointer to &_data / &_bss
	   does NOT correspond to any mapped memory.  push32() truncates
	   host pointers to 32 bits when pushing onto the x86 stack —
	   without this mapping the truncated address is invalid and
	   crashes any wrapper function that dereferences it (e.g.
	   CreateDevice reading rguid from push32(dword_4E27D8)).

	   Use MAP_FIXED_NOREPLACE (not MAP_FIXED) to avoid silently
	   overwriting critical existing mappings (ld.so, libc, etc.)
	   which causes jump-to-0x0 crashes when the PLT/GOT is corrupted.
	   If the target address is occupied, skip the identity mapping
	   — translate_truncated_addr() in the wrapper functions will
	   convert truncated addresses back to full 64-bit host pointers. */
	{
		uintptr_t h = (uintptr_t)&_data;
		uintptr_t target = (uintptr_t)(uint32_t)h;
		long ps = sysconf(_SC_PAGE_SIZE);
		uintptr_t pg = target & ~(uintptr_t)(ps - 1);
		size_t off = target - pg;
		size_t sz = (sizeof(DataLayout) + off + ps - 1) & ~(size_t)(ps - 1);
		void *m = mmap((void*)pg, sz,
		               PROT_READ|PROT_WRITE,
		               MAP_FIXED_NOREPLACE|MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
		if (m != MAP_FAILED)
			memcpy((void*)((uintptr_t)m + off), (void*)h, sizeof(DataLayout));
		else
			fprintf(stderr, "nfs2se: DATA identity map at 0x%lx failed "
			        "(errno %d).  translate_truncated_addr will handle it.\n",
			        (unsigned long)pg, errno);
	}
	{
		uintptr_t h = (uintptr_t)&_bss;
		uintptr_t target = (uintptr_t)(uint32_t)h;
		long ps = sysconf(_SC_PAGE_SIZE);
		uintptr_t pg = target & ~(uintptr_t)(ps - 1);
		size_t off = target - pg;
		size_t sz = (sizeof(BssLayout) + off + ps - 1) & ~(size_t)(ps - 1);
		void *m = mmap((void*)pg, sz,
		               PROT_READ|PROT_WRITE,
		               MAP_FIXED_NOREPLACE|MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
		if (m != MAP_FAILED)
			memcpy((void*)((uintptr_t)m + off), (void*)h, sizeof(BssLayout));
		else
			fprintf(stderr, "nfs2se: BSS identity map at 0x%lx failed "
			        "(errno %d).  translate_truncated_addr will handle it.\n",
			        (unsigned long)pg, errno);
	}
#endif

	Game *game = (Game *)malloc32(sizeof(Game));
	Game *audio = (Game *)malloc32(sizeof(Game));
	new (game) Game();
	new (audio) Game();
	main_game_thread = game;
	audio_game_thread = audio;

	game->esp = wrapper_get_stack_top();
	game->_start();
}

/* External functions */

#undef sub_41B250
extern "C" void sub_41B250(Game &game, int32_t arg1, int32_t arg2)
{
	game.eax = arg1;
	game.edx = arg2;
	game._sub_41B250();
}

extern "C" void wrap_regparm2(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1)
{
	game.eax = arg0;
	game.edx = arg1;
	func(game);
}

extern "C" int32_t wrap_stdcall2_ret(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1)
{
	game.push32(arg1);
	game.push32(arg0);
	game.esp -= 4;
	func(game);
	game.esp += 4;
	return game.eax;
}
extern "C" void wrap_stdcall4(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3)
{
	game.push32(arg3);
	game.push32(arg2);
	game.push32(arg1);
	game.push32(arg0);
	game.esp -= 4;
	func(game);
	game.esp += 4;
}

/* DInput */

#define WrapFunction1Arg(func_name) \
	extern "C" int32_t func_name(uint32_t arg0); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(uint32_t *)(game.esp + 4)); \
		game.esp += 4; \
	}
#define WrapFunction2Arg(func_name) \
	extern "C" int32_t func_name(uint32_t arg0, uint32_t arg1); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(uint32_t *)(game.esp + 4), *(uint32_t *)(game.esp + 8)); \
		game.esp += 8; \
	}
#define WrapFunction3Arg(func_name) \
	extern "C" int32_t func_name(uint32_t arg0, uint32_t arg1, uint32_t arg2); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(uint32_t *)(game.esp + 4), *(uint32_t *)(game.esp + 8), *(uint32_t *)(game.esp + 12)); \
		game.esp += 12; \
	}
#define WrapFunction4Arg(func_name) \
	extern "C" int32_t func_name(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(uint32_t *)(game.esp + 4), *(uint32_t *)(game.esp + 8), *(uint32_t *)(game.esp + 12), *(uint32_t *)(game.esp + 16)); \
		game.esp += 16; \
	}
#define WrapFunction5Arg(func_name) \
	extern "C" int32_t func_name(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(uint32_t *)(game.esp + 4), *(uint32_t *)(game.esp + 8), *(uint32_t *)(game.esp + 12), *(uint32_t *)(game.esp + 16), *(uint32_t *)(game.esp + 20)); \
		game.esp += 20; \
	}

WrapFunction5Arg(EnumDevices)
WrapFunction4Arg(CreateDevice)
WrapFunction1Arg(Release)

WrapFunction3Arg(QueryInterface)

WrapFunction2Arg(GetCapabilities)
WrapFunction3Arg(SetProperty)
WrapFunction1Arg(Acquire)
WrapFunction1Arg(Unacquire)
WrapFunction3Arg(GetDeviceState)
WrapFunction5Arg(GetDeviceData)
WrapFunction2Arg(SetDataFormat)
WrapFunction2Arg(SetEventNotification)
WrapFunction3Arg(SetCooperativeLevel)
WrapFunction4Arg(GetObjectInfo)
WrapFunction5Arg(CreateEffect)
WrapFunction2Arg(SendForceFeedbackCommand)
WrapFunction1Arg(Poll)

WrapFunction3Arg(SetParameters)
WrapFunction3Arg(Start)
WrapFunction1Arg(Stop)
WrapFunction1Arg(Download)
WrapFunction1Arg(Unload)

/* External variables (as pointers) */

#undef dword_4DDA70
#undef dword_5637CC
#undef dword_5637D8
#undef dword_4DB1B0
#undef dword_5637A0
void **dword_4DDA70 = (void **)&_data.dword_4DDA70, **dword_5637CC = (void **)&_bss.dword_5637CC, **dword_5637D8 = (void **)&_bss.dword_5637D8;
void *dword_4DB1B0 = (void *)&_data.dword_4DB1B0, *dword_5637A0 = (void *)&_bss.dword_5637A0;

#undef dword_557540
void *dword_557540 = (void *)&_bss.dword_557540;

#undef mousePositionX
#undef mousePositionY
void *mousePositionX = (void *)&_bss.mousePositionX;
void *mousePositionY = (void *)&_bss.mousePositionY;

#undef inControlAssignMode
void *inControlAssignMode = (void *)&_data.inControlAssignMode;

#undef binaryGameVersion
void *binaryGameVersion = (void *)&_data.binaryGameVersion;
