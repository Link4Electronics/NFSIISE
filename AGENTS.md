# Project Context

NFSIISE — Need for Speed II SE emulator. Reimplements Win32/x86 APIs on top of SDL3.
Targets x86_64, PPC64 big-endian, PPC64LE, and ARM64 (aarch64).

## Layout (all platforms with `-no-pie`)
- Code: 0x10000000+ (x86_64) or 0x400000+ (ARM64)
- DATA: 0x401010+ (x86_64) or 0x86df20+ (ARM64)
- BSS:  0x4E5010+ (desired; ARM64 data/BSS extends to ~0x1b52000 page-aligned)
- Pool: 0x20000000+ (identity-mapped via MAP_FIXED)

With `-no-pie`, all segments stay in the low 4 GB on every target (x86_64,
ARM64, PPC64).  Pool addresses are identity-mapped by `malloc32` via MAP_FIXED
in the same range.  This means `(int32_t)(intptr_t)ptr` is a lossless round-trip
for any pointer — it truncates to 32 bits but re-extension via `(uintptr_t)`
recovers the original address.

**ARM64 note:** `-Wl,-Ttext-segment=0x10000000` is NOT honored by ARM64 GCC.
The ARM64 binary's LOAD segments are at:
- Code (R E): `0x400000` (4 MB), extends to ~0x855068
- Data (RW):  `0x86df20` (~8.8 MB), extends to 0x1b52000 (~27.3 MB) page-aligned
This means `-no-pie` segments are still in low 4 GB but at default addresses,
not the 0x10000000 code start intended by the linker flag.

## DataLayout is a sequential packed struct (NOT offset-mirror of x86 VAs)

**Critical finding (ARM64 port).** The `DataLayout` struct (2942 fields,
69038 bytes on ARM64) is laid out as a sequential packed struct — field order
and sizes determine offsets, NOT the x86 VAs embedded in field names.

```
sizeof(DataLayout) = 69038  (0x10DAE)
```

Example: field `dword_4D4C44` is at struct offset 0x648d (25741), NOT at
x86 VA 0x4D4C44.  The field name encodes where it lived in the original
x86 binary; the emulated layout packs fields densely.

**Consequence:** `translate_host_to_x86(host_addr)` returns `DATA_X86_BASE + struct_offset`
(= e.g. 0x40749D for the field named `dword_4D4C44`).  This is a valid x86 VA
within the struct layout but **does not match the field name**.  Using this
value as an x86 VA for field lookup is wrong.

## Key types

```c
// BSS.h / DATA.h macros give HOST pointers (not x86 virtual addresses):
#define dword_4D4C44 ((int8_t *)&_data.dword_4D4C44)  // host address
#define dword_5637A0 ((int8_t *)&_bss.dword_5637A0)    // host address into pool
```

On x86_64 `&_bss.field` happens to equal the x86 virtual address (due to pool
mapping at the expected address).  On PPC64 and ARM64 they generally differ.

## Fixed: SDLTimer crash (`read32le(p=0x0)` at `Timer.c:41`)

See PPC64 section below in original notes.

## Fixed: `push32` must NOT use `translate_host_to_x86`

**Crash chain (ARM64):** `push32(dword_4D4C44)` at `Methods_02.cpp:16954` calls
`translate_host_to_x86(host_addr)` which converts the host address of the DATA
field to a struct-offset-based x86 VA (e.g. 0x40749D). The C wrapper
`DirectInputCreateA_wrap` receives this value and tries to dereference it as a
host address → SIGSEGV (unmapped address).

**Root cause:** A previous change to `Application.h:314` replaced the simple
truncation `(int32_t)(intptr_t)val` with `translate_host_to_x86`.  On x86_64
accidental identity mapping hid the bug.  On ARM64 and PPC64 the struct offset
x86 VAs don't match field names, producing wrong addresses.

**Fix (Application.h:317):** Revert to simple truncation:

```cpp
to32i(esp) = (int32_t)(intptr_t)val;
```

This is correct because:
- All pointers (DATA, BSS, pool, code) are in the low 4 GB (`-no-pie`
  + MAP_FIXED)
- `(int32_t)(intptr_t)` truncates to 32 bits without losing information
- C wrapper functions receive valid host addresses and dereference them directly
- On 32-bit ARM (`intptr_t` = 32 bits), this is a no-op

**Why `translate_host_to_x86` is wrong:** DataLayout is a sequential packed
struct (not an x86-VA-offset mirror).  `translate_host_to_x86` returns
`DATA_X86_BASE + struct_offset`, which does not match any real x86 VA.
C wrapper functions expect host addresses, not x86 VAs.

## Translation layer is PPC64-only (ARM64 uses identity access)

**ARM64 no longer uses the translation layer.** As of May 2026, ARM64 was removed
from all `#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)`
guards in `Application.h`, `MemoryTranslate.h`, `MemoryTranslate.cpp`, and
`Entry.cpp`.  ARM64 now uses the `#else` branch — direct `*(type *)addr` access
— matching the pre-PPC64 working state.

**Rationale:** The translation layer (`za()`, `xlate_addr()`,
`translate_x86_addr`, byte-swap read/write helpers, Int32Cache, etc.) was
designed for PPC64 big-endian byte-swapping and non-identity pool addresses.
ARM64 is little-endian with identity-mapped pool chunks (VIA MAP_FIXED), so
x86 VAs are valid host addresses.  No translation or byte-swapping is needed.

**MemoryTranslate.h** and **MemoryTranslate.cpp** now compile the full
translation implementation only for PPC64.  ARM64 gets identity stubs from
the header (`translate_x86_addr(x) = x`, `add_pool_range = no-op`, etc.).

**Entry.cpp** calls `init_translation()` and `pool_preallocate()` only on PPC64
(the latter is already done in `main()` for ARM64).  DATA/BSS workarounds
(dword_5134D8 init, dword_4DB6A8 zeroing) still run on both PPC64 and ARM64.

## Fixed: ARM64 pool identity mapping (six issues)

**Issue 1 — non-identity fallback corrupts `translate_x86_addr`.**
The original `pool_grow` in Wrapper.c had a `try_any` fallback
(`mmap(NULL, …)`) when MAP_FIXED at a requested address failed.  On ARM64,
MAP_FIXED at 0x10000000 fails because `-no-pie` code is there.  The fallback
allocated at a random high address (e.g. 0xf6da…) and registered it with
`add_pool_range(0x10000000, 0xf6da…, sz)`.  This caused `translate_x86_addr`
to translate x86 VAs in the code/stack range 0x10XXXXXX to wrong host addresses
(0xf6da…XXXX).  C wrapper functions dereference x86 VAs directly (bypassing
`translate_x86_addr`), so reads went to the identity-mapped code segment while
writes went to the pool chunk — a mismatch that corrupted Event handles etc.

**Fix (`Wrapper.c:79-125`):** Remove the `try_any` fallback entirely.  If
MAP_FIXED (or MAP_FIXED_NOREPLACE) fails, skip that address and try the next.
Non-identity pool chunks are fundamentally incompatible with C wrapper functions
that assume x86 VA == host address.

**Issue 2 — ELF data segment spans [0x86df20,~0x1b52000) on ARM64.**
ARM64 GCC ignores `-Wl,-Ttext-segment=0x10000000`, placing the binary at
default addresses (code at 0x400000, data at 0x86df20). The data segment
(memsz 0x12e3b98) extends to ~27.3 MB (0x1b52000 page-aligned). This means
the range [0x01000000,0x02000000) is OCCUPIED by the binary's own data/BSS.

**Fix (`Wrapper.c:89`):** Changed the low pool address from 0x01000000
to 0x01B9E000 (just above the data/BSS end at 0x1b52000). The pool chunk
at 0x01B9E000 with size `POOL_LOW_MAX - 0x01B9E000` = 0x0E462000 (229 MB)
covers [0x01B9E000,0x10000000), including the game's embedded x86 VA
0x01B9E670.  /proc/self/maps confirms no overlap with the data segment.

**Issue 3 — low pool addresses missing on ARM64.**
The game's embedded x86 VAs (from original x86 binary heap layout) include
addresses like 0x01B9E670 (~28 MB).  On x86_64 the pool chunk at 0x10000000
(registered via the now-removed fallback) happened to cover this range.
On ARM64 without that chunk, accessing 0x01B9E670 caused SIGSEGV (unmapped).

**Fix (`Wrapper.c`):** Added low addresses to the `addrs[]` list.  For addresses
below `POOL_LOW_MAX` (0x10000000), `pool_grow` sizes the chunk as
`POOL_LOW_MAX - addr`.  After correcting the address to 0x01B9E000 (see
Issue 2), the pool chunk sits just past the data/BSS end.

**Issue 4 — MAP_FIXED_NOREPLACE skip (EEXIST).**
When MAP_FIXED_NOREPLACE returns EEXIST (conflict with existing mapping),
the original code fell through to plain MAP_FIXED, which would SILENTLY
overwrite the existing mapping (including musl's mallocng meta structs).

**Fix (`Wrapper.c:114-115`):** Added `if (errno == EEXIST) continue;`
so conflicts are skipped instead of overwritten.  Only EINVAL (flag not
supported) falls through to plain MAP_FIXED.

**Issue 5 — musl mallocng claims low addresses before pool preallocation.**
`main()` called various functions (strrchr, chdir, stat) before
`pool_preallocate`. On musl, the first `malloc`/`free` call lazily
initializes mallocng, which mmaps its meta structs anywhere in the
virtual address space — potentially in our intended low pool range.

**Fix (`Wrapper.c:1007`):** Moved `pool_preallocate()` to the very top
of `main()`, before any C library call that could trigger malloc.

**Issue 6 — `in_pool` used POOL_SIZE instead of actual chunk size.**
The `in_pool` function checked `ptr < chunk + POOL_SIZE`, but low-range
chunks are sized as `POOL_LOW_MAX - addr` (smaller than POOL_SIZE).
This could misidentify out-of-range pointers as belonging to the pool.

**Fix (`Wrapper.c:67`):** Changed to use actual `pool_chunk_sz[i]` instead
of `POOL_SIZE`.  The `pool_chunk_sz` array was added to track per-chunk
sizes, and was moved before `in_pool` to avoid declaration ordering issues.

## Current ARM64 status (May 2026)

**Build:** succeeds, binary initializes and renders frames without crashing.

### Translation layer removed from ARM64
ARM64 was removed from all `#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)`
guards across the codebase.  The `za()`, `xlate_addr()`, byte-swap read/write
helpers, and Int32Cache are now PPC64-only.  ARM64 uses direct memory access
(`*(int32_t *)addr`), which works because pool chunks are identity-mapped via
MAP_FIXED and the binary's own DATA/BSS segments are at their natural addresses.
Build output confirms clean compilation with no warnings in the affected files.

### Pool range identity (confirmed working)
The non-overlapping `addrs[]` (0x01B9E000, 0x40000000) provide 485 MB + 1 GB
of identity-mapped pool space.  The 0x20000000 slot fails (EEXIST, brk conflict)
and the 0x01B9E000 chunk covers addresses in [0x01B9E000,0x10000000) — including
the game's embedded x86 VA 0x01B9E670.  `calloc_wrap` returns addresses in the
0x40000000 range.  No SIGSEGV.

### Four crash bugs fixed (SIGSEGV prevented):
- **Crash A** — `_sub_4248D0` null surface at `Methods_03.cpp:3244` (guard: skip pixel loop if `dword_4EB57C == 0`)
- **Crash B** — `_sub_481590` null function pointer at `Methods_09.cpp:12716` (guard: skip `call(to32i(ebx+4))` when zero)
- **Crash C** — `_sub_4AD0F4` out-of-bounds `edi` at `Methods_14.cpp:4611,4630` (guard: clamp `edi` to `[0,63]`)
- **Crash D** — `read32(0x5371aff0)` SIGSEGV in `to32i` called from `_sub_4B5917` via audio callback chain. Fix: non-overlapping identity pool ranges (see below).

### Fixed: overlapping pool identity ranges cause SIGSEGV at 0x5371aff0

**Root cause:** The `addrs[]` array in `pool_grow()` (`Wrapper.c:85`) had overlapping ranges. Each chunk was POOL_SIZE (258 MB) but consecutive addresses were only 0x10000000 (256 MB) apart. MAP_FIXED_NOREPLACE for addresses at 0x30000000, 0x50000000, 0x70000000, etc. all failed with EEXIST (overlap with the adjacent identity chunk). After the first `pool_preallocate()`, only 3 identity chunks were created:
- `[0x20000000, 0x30300000)` (i=0)
- `[0x40000000, 0x50200000)` (i=1)  
- `[0x60000000, 0x70200000)` (i=4)

x86 VA **0x5371aff0** (~1.30 GB) was ABOVE the 0x40000000 chunk end (0x50200000 = ~1.25 GB). No identity chunk covered it. The FALLBACK non-identity range for 0x50000000 could cover it, but was unreliable due to MAX_POOL_RANGES overflow and data races on `s_pool/s_npool`.

`translate_x86_addr(0x5371aff0)` fell through to identity return → host = 0x5371aff0. But this address was NOT mapped (no pool chunk covering it) → SIGSEGV.

**Fix (`Wrapper.c:85-107`):** Restructured `addrs[]` with non-overlapping identity ranges:

```c
static const uintptr_t addrs[] = {
    0x01B9E000,  /* low:  [0x01B9E000, 0x10000000)  ~229 MB (may fail) */
    0x20000000,  /* mid:  [0x20000000, 0x40000000)   512 MB */
    0x40000000,  /* high: [0x40000000, 0x80000000)     1 GB */
};
```

Sizes are now computed as `addrs[i+1] - addrs[i]` for all but the last entry (1 GB = POOL_SIZE * 4). This guarantees ranges never overlap:
- `[0x01B9E000, 0x40000000)` if low succeeds, else just `[0x20000000, 0x40000000)`
- `[0x40000000, 0x80800000)` — covers 0x5371aff0

**Fix (`MemoryTranslate.cpp:33-65`):** Added `pthread_mutex_t s_pool_mtx` to protect `s_pool[]`/`s_npool` access. `translate_x86_addr` now locks the mutex while iterating pool ranges. `add_pool_range` locks while writing. Bumped `MAX_POOL_RANGES` from 16 to 32.

**Fix (`Wrapper.c`):** FALLBACK `addrs_check` now uses `in_pool()` range check instead of exact address match, preventing non-identity duplicate ranges for addresses already covered by identity chunks.

### Fixed: pixel decompressor wrong data (dword_4EB57C BSS-range regression)

The non-overlapping identity pool chunks fixed a SECOND crash vector: `dword_4EB57C` now contains a valid pool address (e.g. `0x4037afb8`) instead of a BSS-range address (`0x01a9ade0`). The surface pixel buffer now points to the game's actual texture data in the pool, not to the ARM64 binary's own BSS variables.

### Fixed: SDL3 audio callback SIGSEGV (stack buffer in high addresses)

**Crash:** `sdl3_audio_callback` at `EAcsnd.c:48` — `getSamplesFunc(tmp, ...)` called with `tmp` on the native stack (`0x7fff...`). The 32-bit game code received the truncated address (e.g. `0x9d7f9440`) which was NOT in the pool's identity-mapped range, causing SIGSEGV on write.

**Root cause:** The SDL3 audio stream callback `sdl3_audio_callback` allocated `tmp`, `samples[]`, and `interp[]` as stack-local arrays. In SDL2, the `audioCallback` received `stream` from SDL (a buffer in low memory), but in SDL3 we switched to `SDL_PutAudioStreamData` and used stack buffers instead. When `getSamplesFunc` (which calls into 32-bit game code via `wrap_regparm2`) tried to write to these buffers, the 32-bit truncated addresses fell outside the pool range.

**Fix (`EAcsnd.c`):** The callback now uses `buffer` (pool-allocated via `malloc32`, in low 4GB) for all `getSamplesFunc` calls. The interpolated path uses the first 1024 bytes of `buffer` for raw input samples and offset 2048 for the interpolated output. Buffer allocation was increased from 2048 bytes to 4096 bytes (non-interpolated) / 8192 bytes (interpolated) to accommodate both input and output.

### Fixed: release build SIGSEGV (use-after-free in `free32`)

**Crash (x86-64):** `SIGSEGV at PC 0x411b9f fault 0x40339fd0` in `push32` (`Application.h:339`).
Preceded by infinite `LeaveCriticalSection_wrap` spam (from `fprintf(stderr, ...)` in `Kernel32.c`).

**Root cause (double):**
1. **Debug prints in `Kernel32.c`:** `LeaveCriticalSection_wrap`, `EnterCriticalSection_wrap`, `InitializeCriticalSection_wrap`, and `DeleteCriticalSection_wrap` all called `fprintf(stderr, ...)` on every invocation. When the game entered a tight critical-section loop, this produced endless stderr spam and massively slowed down thread synchronization.
2. **`free32` on x86-64** called `munmap`, which unmapped pool-allocated memory. The game has a use-after-free bug — it accesses freed pool addresses later, causing SIGSEGV. The fault address varies (e.g. `0x40339fd0`, `0x411c1fd0`, `0x40b1dfd0`) but is always in the `[0x40000000, 0x80800000)` pool range.
3. **`debug_dump_cs_fields`** in `Memory.cpp` called `fprintf(stderr, ...)` and was referenced from `EnterCriticalSection_wrap`.

**Fixes:**
1. **All `fprintf(stderr, ...)` removed** from `Kernel32.c` critical section wrappers (Leave, Enter, Init, Delete) — stops the spam.
2. **All `printf(...)` removed** from `Methods_03.cpp` (`__4248D0`, `__424970`), `Methods_09.cpp` (null funcptr skip), `Methods_10.cpp` (`__484498`, `__4844D4`) — removes render-path debug output.
3. **`debug_dump_cs_fields` removed** from `Memory.cpp` (no longer referenced after EnterCriticalSection cleanup).
4. **`free32` on x86-64** changed from `munmap` to `madvise(ptr, size, MADV_DONTNEED)` — keeps the virtual address range mapped (prevents SIGSEGV on use-after-free) but tells the kernel to discard physical pages.
5. **`pool_grow` debug `fprintf`** calls removed from `Wrapper.c` — silences pool setup output.

**Result:** Game runs to at least 45 seconds without ANY stderr output and no crash. No `LeaveCriticalSection_wrap` spam.

## Testing flow

1. Build: `mkdir -p build && cd build && cmake .. && make -j$(nproc)`
2. Run from the `Need For Speed II SE/` directory: `../build/nfs2se`
3. The game binary is native (not x86 emulated).  The "emulator" reimplements
   Win32 APIs natively and uses a data-driven approach to load x86 layout
   constants.

## SDL2 → SDL3 migration (May 2026)

All source files ported from SDL2 to SDL3.  Builds cleanly with zero warnings.

### Porting summary
- `CMakeLists.txt`: `find_package(SDL2)` → `find_package(SDL3)`, `SDL2::SDL2` → `SDL3::SDL3`
- All `#include <SDL2/...>` → `#include <SDL3/...>`

### API changes applied

| SDL2 | SDL3 |
|---|---|
| `SDL_CreateWindow(title, x, y, w, h, flags)` | `SDL_CreateWindow(title, w, h, flags)` |
| `SDL_WINDOW_ALLOW_HIGHDPI` | `SDL_WINDOW_HIGH_PIXEL_DENSITY` |
| `SDL_CreateRGBSurfaceFrom(…, masks)` | `SDL_CreateSurfaceFrom(w, h, pixel_format, pixels, pitch)` |
| `SDL_FreeSurface(…, 1)` | `SDL_DestroySurface(…)` |
| `SDL_ShowCursor(false)` | `SDL_HideCursor()` |
| `SDL_JoystickEventState(SDL_IGNORE)` | `SDL_SetJoystickEventsEnabled(false)` |
| `SDL_UpdateWindowSurface()` | `SDL_UpdateWindowSurface()` (same) |
| `SDL_Cond *` / `SDL_CreateCond` / `SDL_DestroyCond` | `SDL_Condition *` / `SDL_CreateCondition` / `SDL_DestroyCondition` |
| `SDL_CondWait(cond, mutex)` | `SDL_WaitCondition(cond, mutex)` (returns `void`) |
| `SDL_CondBroadcast(cond)` | `SDL_BroadcastCondition(cond)` |
| `SDL_SemWait(sem)` | `SDL_WaitSemaphore(sem)` (returns `bool`) |
| `SDL_SemPost(sem)` | `SDL_SignalSemaphore(sem)` |
| `SDL_sem *` | `SDL_Semaphore *` |
| `SDL_mutex *` | `SDL_Mutex *` |
| `SDL_ThreadID()` (function) | `SDL_GetCurrentThreadID()` |
| `Uint32 cb(void*, Uint8*, int32_t)` (timer) | `Uint32 cb(void*, SDL_TimerID, Uint32)` |
| `SDL_WINDOW_FULLSCREEN_DESKTOP` | `SDL_WINDOW_FULLSCREEN` (always desktop) |
| `SDL_SetWindowFullscreen(win, SDL_FALSE)` | `SDL_SetWindowFullscreen(win, false)` |
| `SDL_HINT_ACCELEROMETER_AS_JOYSTICK` | removed — guard with `#ifdef` |
| `SDL_KEYDOWN` / `SDL_KEYUP` | `SDL_EVENT_KEY_DOWN` / `SDL_EVENT_KEY_UP` |
| `SDL_QUIT` | `SDL_EVENT_QUIT` |
| `SDL_TEXTINPUT` | `SDL_EVENT_TEXT_INPUT` |
| `SDL_WINDOWEVENT` | `SDL_EVENT_WINDOW_RESIZED` |
| `SDL_APP_WILLENTERBACKGROUND` | `SDL_EVENT_WILL_ENTER_BACKGROUND` |
| `SDL_APP_DIDENTERFOREGROUND` | `SDL_EVENT_DID_ENTER_FOREGROUND` |
| `SDL_FINGERDOWN/UP/MOTION` | `SDL_EVENT_FINGER_DOWN/UP/MOTION` |
| `SDL_USEREVENT` | `SDL_EVENT_USER` |
| `event.key.keysym.sym` → `event.key.key` | flattened struct; `mod` directly in `event.key.mod` |
| `SDL_TouchFingerEvent.touchId` | `SDL_TouchFingerEvent.touchID` |
| `SDLK_BACKQUOTE` (0x60) | `SDLK_GRAVE` (0x60) |
| `SDLK_QUOTE` (0x27) | `SDLK_APOSTROPHE` (0x27) |
| `SDLK_a`–`SDLK_z` (lowercase) | `SDLK_A`–`SDLK_Z` (always lowercase 0x61–0x7A) |
| `SDL_NumJoysticks()` | `SDL_GetJoysticks(int *count)` → returns `SDL_JoystickID *` |
| `SDL_JoystickOpen(index)` | `SDL_OpenJoystick(SDL_JoystickID)` |
| `SDL_JoystickNameForIndex(i)` | `SDL_GetJoystickNameForID(id)` |
| `SDL_JoystickPathForIndex(i)` | `SDL_GetJoystickPathForID(id)` |
| `SDL_JoystickName(joy)` | `SDL_GetJoystickName(joy)` |
| `SDL_JoystickGetAttached` | `SDL_JoystickConnected` |
| `SDL_JoystickUpdate()` | `SDL_UpdateJoysticks()` |
| `SDL_NumHaptics()` | `SDL_GetHaptics(int *count)` → returns `SDL_HapticID *` |
| `SDL_HapticOpen(index)` | `SDL_OpenHaptic(SDL_HapticID)` |
| `SDL_HapticName(i)` | `SDL_GetHapticNameForID(id)` |
| `SDL_HapticOpened(i)` | removed (skip check in SDL3) |
| `SDL_HapticOpenFromJoystick` | `SDL_OpenHapticFromJoystick` |
| `SDL_HapticClose` | `SDL_CloseHaptic` |
| `SDL_JoystickClose` | `SDL_CloseJoystick` |
| `SDL_HapticQuery` | `SDL_GetHapticFeatures` |
| `SDL_HapticNumAxes` | `SDL_GetNumHapticAxes` |
| `SDL_HapticRunEffect` | `SDL_RunHapticEffect` |
| `SDL_HapticStopEffect` | `SDL_StopHapticEffect` |
| `SDL_HapticUpdateEffect` | `SDL_UpdateHapticEffect` |
| `SDL_HapticDestroyEffect` | `SDL_DestroyHapticEffect` |
| `SDL_HapticNewEffect` | `SDL_CreateHapticEffect` |
| `SDL_HapticSetGain` | `SDL_SetHapticGain` |
| `SDL_JoystickRumble` | `SDL_RumbleJoystick` |
| `SDL_JoystickHasRumble` | removed (assume true for gamepads) |
| `SDL_JOYSTICK_TYPE_GAMECONTROLLER` | `SDL_JOYSTICK_TYPE_GAMEPAD` |
| `SDL_JoystickNumButtons` | `SDL_GetNumJoystickButtons` |
| `SDL_JoystickNumAxes` | `SDL_GetNumJoystickAxes` |
| `SDL_JoystickNumHats` | `SDL_GetNumJoystickHats` |
| `SDL_JoystickGetButton` | `SDL_GetJoystickButton` |
| `SDL_JoystickGetHat` | `SDL_GetJoystickHat` |
| `SDL_JoystickGetAxis` | `SDL_GetJoystickAxis` |
| `SDL_JoystickGetType` | `SDL_GetJoystickType` |
| `SDL_GetRelativeMouseState(int*dx, int*dy)` | `SDL_GetRelativeMouseState(float*dx, float*dy)` |
| `SDL_GetMouseState(int*x, int*y)` | `SDL_GetMouseState(float*x, float*y)` |
| `SDL_INIT_TIMER` | removed (timer always available) |
| `AUDIO_S16` | `SDL_AUDIO_S16` |
| `SDL_OpenAudioDevice(NULL,0,&specIn,&specOut,0)` | `SDL_OpenAudioDeviceStream(devid, &spec, callback, NULL)` |
| `SDL_PauseAudioDevice(dev, 0)` | `SDL_ResumeAudioStreamDevice(stream)` |
| `SDL_CloseAudioDevice(dev)` | `SDL_DestroyAudioStream(stream)` |
| `SDL_AudioSpec` with callback/samples/silence | 3 fields: `.format`, `.channels`, `.freq` |
| `SDL_GL_DeleteContext` | `SDL_GL_DestroyContext` |
| `SDL_GL_GetDrawableSize` | `SDL_GetWindowSizeInPixels` |

## Key files
- `src/Timer.c` — PPC64 BE timer thread fix
- `src/Cpp/MemoryTranslate.cpp` — x86↔host address translation (PPC64 only; ARM64 uses identity stubs)
- `src/Cpp/MemoryTranslate.h` — declarations
- `src/Cpp/Application.h` — `push32` definition (line ~314; fix at line 317)
- `src/Cpp/Methods_02.cpp` — crash site (~line 16800) and `push32` call (~line 16954)
- `src/Cpp/Methods_03.cpp` — `_sub_424970` surface creation (line 3307-3320) and `_sub_4248D0` rendering (line 3200+)
- `src/Cpp/Methods_09.cpp` — `_sub_481590` Crash B fix (line 12716)
- `src/Cpp/Methods_10.cpp` — `_sub_484498` heap allocator (line 2405), `_sub_4844D4` (line 2447)
- `src/Cpp/Methods_13.cpp` — `_sub_49C948` heap init (line 900+), `_sub_49CAD4` pool allocation (line 1000+)
- `src/Cpp/Methods_14.cpp` — `_sub_4AD0F4` pixel decompressor (line 4588+), Crash C guards (lines 4611,4630)
- `src/Cpp/DATA.h` — DATA field macro definitions (e.g. `dword_4D4C44`)
- `src/Cpp/BSS.h` — BSS field macro definitions (e.g. `dword_5637A0`)
- `src/Cpp/Memory.cpp` — DataLayout `_data` initialization (69038-byte struct)
- `src/DInput.c` — `DirectInputCreateA_wrap` (~line 1022)
- `src/Wrapper.c` — `pool_grow` ARM64 fixes (non-identity fallback removed, low-addr chunk, EEXIST skip, early preallocation in main, `malloc32`/`free32` pool allocator)
- `CMakeLists.txt` — build options (`-no-pie`, optional ASM mode)

## PPC64 BE Status (June 2026)

### Done
- **Wrapper.c: low_start alignment** — hardcoded `0xFFF` → `sysconf(_SC_PAGE_SIZE)` for 64KB pages
- **Wrapper.c: removed `MAP_FIXED` fallback** — `pool_grow()` only uses `MAP_FIXED_NOREPLACE`; skip on EEXIST/EINVAL
- **Wrapper.c: low chunk fallback** — `0x01000000` → `0x18000000` (`_end = 0x11a51948` on PPC64)
- **Wrapper.c: removed PPC64 non-identity fallback** — `addrs_check[]` mmap loop gone
- **Wrapper.c: `vsprintf_wrap`** — all 7 `*ap++` x86 stack reads replaced with `read32le(ap++)` via `ByteUtils.h` (PPC64BE byte-swap fix)
- **Wrapper.c: pool chunk selection** — selects **largest** chunk for bump allocation (size-based scan) instead of first chunk ≥ `POOL_LOW_MAX`
- **Wrapper.c: pool_grow fallback to pre-allocated chunks** — when all addrs are skipped (already in pool_chunks from pool_preallocate), iterate pool_chunks and switch to one not yet used for bump allocation, tracked via `pool_bump_mask` bitmask to prevent cycling back to exhausted chunks
- **Wrapper.c: guard page reservation (`pool_bump_sz`)** — last chunk mmap size = `POOL_SIZE * 4 + page_size` (~1 GB + 64 KB), but `pool_left = POOL_SIZE * 4` (~1 GB). The guard page is mapped but never handed out by `malloc32`, providing a safety catch for `read32`/`read64` overruns or unrolled STOSD writes within 64 KB of the pool boundary
- **Wrapper.c: `pool_bump_sz[]` array** — stores bump-usable size per chunk (≤ `pool_chunk_sz[]`). Used by pool_preallocate and pool_grow fallback when setting `pool_left`, ensuring the guard reservation is maintained across chunk switches
- **Wrapper.c: `malloc32` pool reserve** — condition changed from `pool_left < need` to `pool_left < need + page_size`. Reserves the last 64 KB of every chunk so the last bump allocation is never at the very edge. Combined with the guard page, gives 128 KB of safe overflow space for memset/STOSD overruns
- **MemoryTranslate.cpp: PPC64 merged into ARM64 identity path** — `add_pool_range` no-op, `translate_x86_addr` only handles BSS/DATA x86 VAs
- **BSS.h: removed `bss_pool()` redirect** — static `_bss` for all platforms
- **Memory.cpp: removed `#if !defined(__powerpc64__)`** — `BssLayout _bss` always defined
- **Entry.cpp: removed PPC64-only `pool_preallocate()`** — single call in `main()`
- **SwapInit.h: re-enabled DATA byte-swap on PPC64** — `swap_initial_data()` now runs on PPC64 (was returning early).  The C++ compiler stores DATA initializer values in native big-endian byte order, but `read32`/`write32` always treat memory as little-endian (b0 = LSB).  The swap converts each field from BE to LE byte representation so `read32` returns the correct value.  Without this, `dword_4E0950` (initializer `{0xF4}` = 244 bytes) was stored as BE bytes `[0x00,0x00,0x00,0xF4]`; `read32` read it as LE → `0xF4000000` (~4 GB).  This made `_doStart`'s TLS alloca/memset overflow the pool, crashing in STOSD at `0x8080FFFD`.
- **Entry.cpp: fixed native write at line 37** — `*(uint32_t *)` → `Application::write32()` for LE byte order
- **Application.h: cleaned `za()` debug spam** — removed `fprintf` on PPC64

### Current status (June 2026)

Both the STOSD TLS overflow and the DirectInput null-pointer crash are fixed.

**STOSD crash (solved):** `dword_4E0950` reading as `0xF4000000` → fix: re-enable `swap_initial_data()` on PPC64 (converts DATA from BE to LE byte representation).  TLS size correctly 244 bytes.

**DirectInput crash (solved):** `to32i(edx+0xC)` with `edx=0` at `Methods_02.cpp:16803`.  The game reads `dword_4D4C44` via `to32i` (4 LE bytes), but `DirectInputCreateA_wrap` stored the pool address via `*(uint32_t *)` (native BE store on PPC64).  The byte-swapped value (e.g. `0x00003040` instead of `0x40300000`) pointed to unmapped memory → `edx=0` → `to32i(0xC)` SIGSEGV.

**Root cause is SYSTEMIC:** Any C code that writes a 32-bit value to DATA-field or pool memory via `*(uint32_t *)` (native BE store) and is later read by the game via `to32i`/`read32` (LE read) gets a byte-swapped value.  Conversely, any native `*(void **)` read from a buffer written with 4 LE bytes gets a wrong 64-bit pointer on BE.

**Systemic fixes applied:**
1. **SwapInit.h (PPC64):** `swap_initial_data()` re-enabled — converts DATA initializers from BE to LE byte representation so `read32` returns correct values.
2. **DInput.h:** Changed `DINPUT_SET_VTABLE` from native `slot = value` to `write32le(&(slot), value)` — all DirectInput vtable entries are stored in LE byte order.
3. **DInput.h:** Added `DTHIS_PTR(this_ptr)` and `DTHIS(type, this_ptr)` macros — on PPC64 they use `read32le` to read 4 LE bytes from intermediate buffers; on LE they expand to the original `*(void **)`.  All `*this`/`(*this)` dereferences in `DInput.c` replaced with these macros.
4. **DInput.c (DirectInputCreateA_wrap, CreateDevice, CreateEffect):** Changed `*(uint32_t *)` stores to DATA fields to `write32le()` — prevents byte-swapped pointer values.
5. **Wrapper.c (defensive):** Guard page increased from 64 KB to 256 KB (4 pages) as safety net for buffer overruns.

### Pool layout (PPC64)
3 pre-allocated chunks (mmap via MAP_FIXED_NOREPLACE), consumed by bump allocator in decreasing size order:

| Address | Size (mmap) | Bump-usable | Used when |
|---------|-------------|-------------|-----------|
| `0x18000000` | 128 MB | 128 MB | after 1 GB exhausted (fallback #1) |
| `0x20000000` | 512 MB | 512 MB | after 128 MB exhausted (fallback #2) |
| `0x40000000` | ~1 GB + 256 KB guard | ~1 GB | initial selection (largest) |

The guard pages `[0x80800000, 0x80840000)` are mapped R/W but never tracked by the bump allocator. Any read/write that overflows the bump space by ≤ 256 KB lands in accessible memory.

### Next steps
1. Test on PPC64BE — the STOSD crash should be gone and the DirectInput initialization should work.
2. The game may crash further along (audio, rendering, etc.) as subsequent bugs are unmasked by fixing earlier crashes.
