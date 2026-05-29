# Project Context

NFSIISE — Need for Speed II SE emulator. Reimplements Win32/x86 APIs on top of SDL2.
Targets x86_64, PPC64 big-endian, and PPC64LE.

## PPC64 Issues & Fixes

### Layout
- Code: 0x10000000+
- DATA: 0x401010+
- BSS:  0x4E5010+
- Pool: 0x20000000+ (identity-mapped via MAP_FIXED on PPC64; assumed to succeed)

### Key types

```c
// BSS.h / DATA.h macros give HOST pointers (not x86 virtual addresses):
#define dword_4D4C44 ((int8_t *)&_data.dword_4D4C44)  // host address
#define dword_5637A0 ((int8_t *)&_bss.dword_5637A0)    // host address into pool
```

On x86_64 `&_bss.field` happens to equal the x86 virtual address (due to pool
mapping at the expected address). On PPC64 they differ.

### Fixed: SDLTimer crash (`read32le(p=0x0)` at `Timer.c:41`)

**Root cause (initial BE attempt):** Commit d55c9c7 changed Timer.c macros from
`*dword_XXXX` (native dereference) to `read32le(&dword_XXXX)` — intended to
byte-swap LE-stored DATA values on BE.  But `&dword_XXXX` is the ADDRESS OF THE
EXTERN POINTER VARIABLE (where the host address is stored), NOT the address of
the DATA field.  Reading 4 LE bytes there gives the low 32 bits of the host
address — which is the wrong value on ALL platforms:

- On x86_64 LE: gives part of the DataLayout host address (e.g. 0x5555XXXX),
  neither the value at the DATA field → passed to SetEvent_wrap as an Event
  pointer → SIGSEGV at PC 0x1 in the sound thread from memory corruption
- On PPC64 BE: gives the high 32 bits of a BE pointer (zero for pool addresses
  < 4 GB) → returns 0 → NULL → segfault in timer thread
- On PPC64LE: gives the low 32 bits of the host address (same as x86_64, wrong
  value, but might accidentally work if low bits match the expected address)

**Fix:** `read32le(dword_XXXX)` — reads 4 LE bytes AT the DATA field address
(through the pointer stored in the extern variable).  On LE hosts this is
equivalent to `*dword_XXXX`.  On BE hosts it byte-swaps the LE-stored bytes.

This is now a single unguarded set of macros — no `#if` needed:
```c
#define dword_4DDA70 ((Event *)(uintptr_t)read32le(dword_4DDA70))
#define dword_5637CC ((Event *)(uintptr_t)read32le(dword_5637CC))
#define dword_5637D8 ((Event *)(uintptr_t)read32le(dword_5637D8))
#define dword_4DB1B0 read32le(dword_4DB1B0)
#define dword_5637A0 read32le(dword_5637A0)
```

See `src/Timer.c` lines 13–22.

**Correctness on all platforms:**
- x86_64 LE: `read32le` → byte-at-a-time read (same as `*(uint32_t *)`)
- PPC64 BE: `read32le` → PPC64 lbz inline asm, byte-swaps to host order
- PPC64LE: `read32le` → same as x86_64

The Event handles stored in DATA fields are pool addresses (identity-mapped on
all platforms), so `(Event *)(uintptr_t)value` is always valid.

### Remaining: `push32(dword_XXXX)` truncation (systemic)

**Crash:** `_sub_422380` → `to32i(12)` at `Methods_02.cpp:16800`.
Caused by `push32(dword_4D4C44)` at `Methods_02.cpp:16954`.

**Root cause:** `push32` in `Application.h:314` does:
```cpp
to32i(esp) = (int32_t)(intptr_t)val;
```
The `dword_4D4C44` macro expands to `(int8_t *)&_data.dword_4D4C44` which is
a 64-bit HOST address on PPC64. `(int32_t)(intptr_t)val` truncates it to
32 bits, losing upper bits. `DirectInputCreateA_wrap` then writes the DI
interface pointer to the *truncated* address instead of the real DataLayout
field → `dword_4D4C44` stays zero → later crash.

On x86_64, `&_data.dword_4D4C44` happens to have the low 32 bits equal to
the x86 virtual address (due to identity mapping), so the truncation
accidentally works.  On PPC64 (both BE and LE), the host address differs
from the x86 address, so the truncation gives a wrong value.

**Scope:** Systemic. Any `push32(macro)` / `push32(symbol)` where the macro
represents a host pointer (BSS.h/DATA.h) and the intent is to pass an x86
virtual address will be wrong on PPC64. This affects countless call sites
across the codebase.

**Required fix (not yet done):** One of:
- Change macros (`BSS.h` / `DATA.h`) to return x86 virtual addresses
  (e.g. `uint32_t`) instead of host pointers; let `to32i`/read32/write32
  translate via `translate_x86_addr`.
- Or wrap every `push32(macro)` with a host→x86 conversion when the macro
  is used as an address argument (not a value).
- Or guarantee identity mapping (pool + binary at same addresses).

### MemoryTranslate.cpp (helper, not a root fix)

`translate_x86_addr(uint32_t x86_addr)` translates x86 virtual addresses to
host addresses. Added BSS/DATA host-range identity checks before the pool
lookup — safe but not needed for current crashes.

## Testing flow

1. Build: standard x86_64 build (not ppc64). Use `make -f Makefile.ppc64` (or
   equivalent) for PPC64 cross-build.
2. The game binary is PPC64-native (not x86 emulated). The "emulator" name is
   misleading — it reimplements Win32 APIs natively and uses a data-driven
   approach to load x86 layout constants.

## Key files
- `src/Timer.c` — PPC64 BE timer thread fix
- `src/Cpp/MemoryTranslate.cpp` — x86→host address translation
- `src/Cpp/MemoryTranslate.h` — declarations
- `src/Cpp/Application.h` — `push32` definition (line ~314)
- `src/Cpp/Methods_02.cpp` — crash site (~line 16800) and `push32` call (~line 16954)
- `src/Cpp/DATA.h` — DATA field macro definitions (e.g. `dword_4D4C44`)
- `src/Cpp/BSS.h` — BSS field macro definitions (e.g. `dword_5637A0`)
- `src/DInput.c` — `DirectInputCreateA_wrap` (~line 1022)

## PPC64LE Porting Notes

### `#if` guards
- `__powerpc64__` is defined on **both** PPC64 BE and PPC64LE (Linux).
- `__PPC64__` is AIX convention — not defined on Linux. Only use
  `__powerpc64__` (which covers both BE and LE).
- To differentiate LE vs BE on Linux, check endianness macros:
  ```c
  #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
  // PPC64LE-specific
  #endif
  ```

### Timer.c fix correctness on LE
The `read32le(dword_XXXX)` approach is correct on all platforms:
- `read32le(dword_XXXX)` reads 4 LE bytes at the host address — the data IS stored
  as LE in the pool, so this gives the correct value on any host endianness.
- No `#if` guards needed — works on x86_64, PPC64 BE, and PPC64LE.

### `push32` truncation (same on LE & BE)
**This is the blocking bug on both.** It's a **pointer-width** issue, not
endianness:
```cpp
to32i(esp) = (int32_t)(intptr_t)val;  // truncates 64-bit host addr on
                                       // both LE and BE
```
Debugging on PPC64LE will reproduce the same crash at `to32i(12)` and any fix
applies equally to BE.

### Makefile
If building on PPC64LE natively, the Makefile likely needs `-m64` or
`-mcpu=powerpc64le` flags. Look for `Makefile.ppc64` and adapt as needed
(or just use `make` if the PPC64LE toolchain defaults to 64-bit).

### Debug tips for real hardware
- Run under GDB and get a backtrace of the `to32i(12)` crash in `_sub_422380`.
- The key question: what address does `push32(dword_4D4C44)` actually push?
  Add a temporary print like:
  ```cpp
  fprintf(stderr, "push32(dword_4D4C44)=0x%08" PRIx32 "\n", (int32_t)(intptr_t)(int8_t *)&_data.dword_4D4C44);
  ```
  If the pushed address is not 0x004D4C44, that confirms the
  host-address-truncation theory.
