# Project Context

NFSIISE — Need for Speed II SE emulator. Reimplements Win32/x86 APIs on top of SDL2.
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

## MemoryTranslate.cpp (ARM64 pool support added)

`MemoryTranslate.cpp` now has pool range tracking on ARM64 (matching PPC64).
The identity fallthrough for pool/code addresses works on all `-no-pie` builds,
but explicit pool range support is needed if MAP_FIXED ever fails (address
already taken) and the pool is placed at a different host address.

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

**Build:** succeeds, binary runs, but pixel data is corrupted.

### Three crash bugs fixed (SIGSEGV prevented):
- **Crash A** — `_sub_4248D0` null surface at `Methods_03.cpp:3244` (guard: skip pixel loop if `dword_4EB57C == 0`)
- **Crash B** — `_sub_481590` null function pointer at `Methods_09.cpp:12716` (guard: skip `call(to32i(ebx+4))` when zero)
- **Crash C** — `_sub_4AD0F4` out-of-bounds `edi` at `Methods_14.cpp:4611,4630` (guard: clamp `edi` to `[0,63]`)

### Remaining issue: pixel decompressor gets wrong data

`_sub_4AD0F4` receives a surface address from `dword_4EB57C`. On ARM64 this is `0x01a9ade0` (BSS range) instead of a pool address (`0x20XXXXXX`). The address is WITHIN the `_bss` struct (the BSS identity check passes), but the data there is the ARM64 binary's own BSS variables, not the game's texture data.

**Root cause hypothesis:** The surface pixel buffer at `dword_4EB57C` is freed by `_sub_424890` but the BSS field is NOT zeroed. A subsequent allocation (from `calloc_wrap` / `malloc32`) reuses the freed pool memory. Meanwhile `dword_4EB57C` still contains the old pool address. Some code path overwrites `dword_4EB57C` with a BSS-range address before the next render.

**Alternate hypothesis:** The second `_sub_484498()` call during `_sub_424970` (line 3316) returns 0 (allocation failure) on ARM64 because the heap's slot type lookup returns a wrong slot. The slot type is derived from `ebx = dword_4DABE8`; the `(ebx & 0xF00) >> 8` index might not match any registered heap slot.

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

## Key files
- `src/Timer.c` — PPC64 BE timer thread fix
- `src/Cpp/MemoryTranslate.cpp` — x86↔host address translation (ARM64: pool ranges added)
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
