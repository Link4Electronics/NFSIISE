// SPDX-License-Identifier: MIT
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

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)

/* All non-x86-64 platforms: pool is identity-mapped via MAP_FIXED, no pool
   translation needed.  Only BSS/DATA x86 VAs (0x4E5010+/0x401010+) need
   host-address translation.  (PPC64BE retains byte-swapping in Application.h
   but the address mapping is identity just like ARM64.) */

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
	/* No-op — pool is identity-mapped on all platforms. */
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

uintptr_t translate_truncated_addr(uint32_t truncated)
{
	uintptr_t t = (uintptr_t)truncated;

	if (s_trans.bss_size) {
		uintptr_t bss_trunc = (uint32_t)s_trans.bss_base;
		if (t >= bss_trunc && t - bss_trunc < s_trans.bss_size)
			return s_trans.bss_base + (t - bss_trunc);
	}

	if (s_trans.data_size) {
		uintptr_t data_trunc = (uint32_t)s_trans.data_base;
		if (t >= data_trunc && t - data_trunc < s_trans.data_size)
			return s_trans.data_base + (t - data_trunc);
	}

	return t;
}

#endif /* __powerpc64__ / __PPC64__ / __aarch64__ */
