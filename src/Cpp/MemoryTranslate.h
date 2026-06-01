// SPDX-License-Identifier: MIT
#ifndef MEMORYTRANSLATE_H
#define MEMORYTRANSLATE_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)

void init_translation(uintptr_t bss_base, size_t bss_size,
                      uintptr_t data_base, size_t data_size);

/* Register a pool chunk for non-identity mappings (PPC64).  On ARM64
   pool chunks are identity-mapped via MAP_FIXED so this is a no‑op. */
void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size);

uintptr_t translate_x86_addr(uint32_t x86_addr);

/* Reverse translation: given a host pointer, return the x86 virtual address.
   Needed for push32().  On ARM64 the identity stub works for pool/code but
   DATA/BSS struct fields need the linear layout mapping. */
uint32_t translate_host_to_x86(const void *host_addr);

#else
/* x86_64 / fallback: host addresses ARE x86 VAs, so everything is identity. */
static inline void init_translation(uintptr_t bss_base, size_t bss_size,
                                    uintptr_t data_base, size_t data_size) {}
static inline void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size) {}
static inline uintptr_t translate_x86_addr(uint32_t x86_addr) { return x86_addr; }
static inline uint32_t  translate_host_to_x86(const void *host_addr) { return (uint32_t)(uintptr_t)host_addr; }

#endif /* need_translation */

#ifdef __cplusplus
}
#endif

#endif /* MEMORYTRANSLATE_H */
