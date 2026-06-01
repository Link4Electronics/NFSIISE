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

### Remaining issue: game spins on LeaveCriticalSection_wrap

After the crash fixes, the game reaches the render loop (`__4248D0: entry` fires with pool addresses) but appears to spin on `LeaveCriticalSection_wrap(0x40d01478)` in a tight loop. This may indicate a missing audio/display sync or a different blocking path. The game runs without crashing but also without progressing past the spin.

### Key debug prints still active (essential for diagnosis):
- `Methods_03.cpp:3218` — `__4248D0: entry` shows `dword_4EB57C/4EB578/4EB56C` each render
- `Methods_03.cpp:3309` — `__424970` shows surface creation results
- `Methods_10.cpp:2454` — `__4844D4: entry` shows heap allocation: `ecx`, `dword_563F00`, `esi`
- `Methods_09.cpp:12716` — null funcptr skip notification (rare trigger)

All other debug prints have been removed for production cleanliness.

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
