// SPDX-License-Identifier: MIT
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include "MemoryTranslate.h"
#include "BSS.h"
#include "DATA.h"

static struct {
	uintptr_t bss_base;
	size_t    bss_size;
	uintptr_t data_base;
	size_t    data_size;
} s_trans;

#if defined(__powerpc64__) || defined(__PPC64__)

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

#elif defined(__aarch64__)

/* ARM64: pool is identity-mapped via MAP_FIXED, no pool translation needed.
   Only BSS/DATA x86 VAs (0x4E5010+ / 0x401010+) need host-address translation. */

void init_translation(uintptr_t bss_base, size_t bss_size,
                      uintptr_t data_base, size_t data_size)
{
	s_trans.bss_base  = bss_base;
	s_trans.bss_size  = bss_size;
	s_trans.data_base = data_base;
	s_trans.data_size = data_size;
}

void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size)
{
	/* No-op — pool is identity-mapped on ARM64. */
}

uintptr_t translate_x86_addr(uint32_t x86_addr)
{
	/* x86 virtual BSS/DATA addresses → host. */
	if (x86_addr >= 0x4E5010 && x86_addr - 0x4E5010 < s_trans.bss_size)
		return s_trans.bss_base + (x86_addr - 0x4E5010);

	if (x86_addr >= 0x401010 && x86_addr - 0x401010 < s_trans.data_size)
		return s_trans.data_base + (x86_addr - 0x401010);

	/* Everything else (pool, code) is identity-mapped. */
	return (uintptr_t)x86_addr;
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

#endif /* __powerpc64__ / __PPC64__ / __aarch64__ */
