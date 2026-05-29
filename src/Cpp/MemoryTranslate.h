// SPDX-License-Identifier: MIT
#ifndef MEMORYTRANSLATE_H
#define MEMORYTRANSLATE_H

#include <stdint.h>
#include <stddef.h>

#if defined(__powerpc64__) || defined(__PPC64__)

#ifdef __cplusplus
extern "C" {
#endif

void init_translation(uintptr_t bss_base, size_t bss_size,
                      uintptr_t data_base, size_t data_size);

/* Register a pool chunk.  x86_base is the virtual address the game expects;
   host_base is where it was actually mapped (may differ when MAP_FIXED fails). */
void add_pool_range(uint32_t x86_base, uintptr_t host_base, size_t size);

uintptr_t translate_x86_addr(uint32_t x86_addr);

#ifdef __cplusplus
}
#endif

#endif /* __powerpc64__ || __PPC64__ */

#endif /* MEMORYTRANSLATE_H */
