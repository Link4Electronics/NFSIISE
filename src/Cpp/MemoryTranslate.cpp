// SPDX-License-Identifier: MIT
#include "MemoryTranslate.h"
#include "BSS.h"
#include "DATA.h"

#if defined(__aarch64__) || defined(__arm__)

/* Linear x86↔host translation using the struct-layout identity:
   struct offset == x86 VA - x86_base.  O(1), no table lookup needed. */

#define DATA_X86_BASE 0x401010U
#define BSS_X86_BASE  0x4E5010U

static struct {
	uintptr_t bss_base;
	size_t    bss_size;
	uintptr_t data_base;
	size_t    data_size;
} s_trans;

extern "C" void init_translation(uintptr_t bss_base, size_t bss_size,
                                 uintptr_t data_base, size_t data_size)
{
	s_trans.bss_base  = bss_base;
	s_trans.bss_size  = bss_size;
	s_trans.data_base = data_base;
	s_trans.data_size = data_size;
}

#define MAX_POOL_RANGES 16
static struct { uint32_t x86_base; uintptr_t host_base; size_t size; } s_pool[MAX_POOL_RANGES];
static int s_npool = 0;

extern "C" void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size)
{
	if (s_npool >= MAX_POOL_RANGES) return;
	s_pool[s_npool].x86_base  = x86_base;
	s_pool[s_npool].host_base = host_base;
	s_pool[s_npool].size      = size;
	s_npool++;
}

extern "C" uintptr_t translate_x86_addr(uint32_t x86_addr)
{
	uintptr_t host = (uintptr_t)x86_addr;

	/* Pool ranges — check FIRST because pool x86 VAs may numerically
	   overlap with the data/BSS host range on ARM64 (data segment spans
	   to ~0x1b52000; pool starts at 0x01B9E000). */
	for (int i = 0; i < s_npool; i++) {
		uint32_t end = s_pool[i].x86_base + (uint32_t)s_pool[i].size;
		if (x86_addr >= s_pool[i].x86_base && x86_addr < end)
			return s_pool[i].host_base + (x86_addr - s_pool[i].x86_base);
	}

	/* If the address already falls inside the BSS or DATA host range,
	   it was derived from &_bss.some_field or &_data.some_field, so
	   return it unchanged — no x86→host translation needed. */
	if (host >= s_trans.bss_base  && host - s_trans.bss_base  < s_trans.bss_size)
		return host;
	if (host >= s_trans.data_base && host - s_trans.data_base < s_trans.data_size)
		return host;

	/* DATA range — struct fields */
	if (x86_addr >= DATA_X86_BASE && x86_addr - DATA_X86_BASE < s_trans.data_size)
		return s_trans.data_base + (x86_addr - DATA_X86_BASE);

	/* BSS range — struct fields */
	if (x86_addr >= BSS_X86_BASE && x86_addr - BSS_X86_BASE < s_trans.bss_size)
		return s_trans.bss_base  + (x86_addr - BSS_X86_BASE);

	/* Code, stack, or other identity-mapped addresses. */
	return (uintptr_t)x86_addr;
}

extern "C" uint32_t translate_host_to_x86(const void *host_addr)
{
	uintptr_t h = (uintptr_t)host_addr;

	if (h >= s_trans.data_base && h - s_trans.data_base < s_trans.data_size)
		return DATA_X86_BASE + (uint32_t)(h - s_trans.data_base);

	if (h >= s_trans.bss_base && h - s_trans.bss_base < s_trans.bss_size)
		return BSS_X86_BASE + (uint32_t)(h - s_trans.bss_base);

	/* Pool ranges */
	for (int i = 0; i < s_npool; i++) {
		uintptr_t end = s_pool[i].host_base + s_pool[i].size;
		if (h >= s_pool[i].host_base && h < end)
			return s_pool[i].x86_base + (uint32_t)(h - s_pool[i].host_base);
	}

	/* Code, stack, or other identity-mapped addresses. */
	return (uint32_t)h;
}
#else

# if defined(__powerpc64__) || defined(__PPC64__)

static struct {
	uintptr_t bss_base;
	size_t    bss_size;
	uintptr_t data_base;
	size_t    data_size;
} s_trans;

#define MAX_POOL_RANGES 16
static struct { uint32_t x86_base; uintptr_t host_base; size_t size; } s_pool[MAX_POOL_RANGES];
static int s_npool = 0;

void init_translation(uintptr_t bss_base, size_t bss_size,
                      uintptr_t data_base, size_t data_size)
{
	s_trans.bss_base  = bss_base;
	s_trans.bss_size  = bss_size;
	s_trans.data_base = data_base;
	s_trans.data_size = data_size;
	s_npool = 0;
}

void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size)
{
	if (s_npool >= MAX_POOL_RANGES) return;
	s_pool[s_npool].x86_base  = x86_base;
	s_pool[s_npool].host_base = host_base;
	s_pool[s_npool].size      = size;
	s_npool++;
}

uintptr_t translate_x86_addr(uint32_t x86_addr)
{
	uintptr_t host = (uintptr_t)x86_addr;

	/* If the address already falls inside the BSS or DATA host range,
	   it was derived from &_bss.some_field or &_data.some_field, so
	   return it unchanged — no x86→host translation needed. */
	if (host >= s_trans.bss_base  && host - s_trans.bss_base  < s_trans.bss_size)
		return host;
	if (host >= s_trans.data_base && host - s_trans.data_base < s_trans.data_size)
		return host;

	/* Pool addresses — x86 virtual → host translation. */
	for (int i = 0; i < s_npool; i++) {
		uint32_t end = s_pool[i].x86_base + (uint32_t)s_pool[i].size;
		if (x86_addr >= s_pool[i].x86_base && x86_addr < end) {
			uint32_t offset = x86_addr - s_pool[i].x86_base;
			return s_pool[i].host_base + offset;
		}
	}

	/* Genuine x86 virtual BSS / DATA addresses — translate to host. */
	if (x86_addr >= 0x4E5010 && x86_addr - 0x4E5010 < s_trans.bss_size)
		return s_trans.bss_base + (x86_addr - 0x4E5010);

	if (x86_addr >= 0x401010 && x86_addr - 0x401010 < s_trans.data_size)
		return s_trans.data_base + (x86_addr - 0x401010);

	return host;
}

uint32_t translate_host_to_x86(const void *host_addr)
{
	uintptr_t h = (uintptr_t)host_addr;

	if (h >= s_trans.data_base && h - s_trans.data_base < s_trans.data_size)
		return 0x401010 + (uint32_t)(h - s_trans.data_base);

	if (h >= s_trans.bss_base && h - s_trans.bss_base < s_trans.bss_size)
		return 0x4E5010 + (uint32_t)(h - s_trans.bss_base);

	return (uint32_t)h;
}

#endif /* __powerpc64__ || __PPC64__ */
#endif /* __aarch64__ || __arm__ else */
