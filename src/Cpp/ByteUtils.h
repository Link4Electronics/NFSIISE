// SPDX-License-Identifier: MIT
#ifndef BYTEUTILS_H
#define BYTEUTILS_H

#include <stdint.h>

/* LE read helpers for PPC64 big-endian.
 * On BE hosts, GCC optimises byte-at-a-time volatile reads into lwbrx
 * (word load) which faults on unaligned pointers.  We use explicit lbz
 * inline assembly in separate asm blocks so the compiler CANNOT merge
 * the four loads into a single word load.  Each block is volatile and
 * clobbers memory, forcing re-evaluation.
 *
 * On little-endian hosts we fall back to direct access. */

#if defined(__powerpc64__) || defined(__PPC64__)

/* NOTE: Use "b" constraint for address to exclude r0.  On PPC64, r0 as
 * base register means "zero address", not the value in r0. */

static inline uint32_t read32le(const void *p) {
	unsigned long a = (unsigned long)p;
	int b0, b1, b2, b3;
	__asm__ volatile("lbz %0,0(%1)" : "=r"(b0) : "b"(a) : "memory");
	__asm__ volatile("lbz %0,1(%1)" : "=r"(b1) : "b"(a) : "memory");
	__asm__ volatile("lbz %0,2(%1)" : "=r"(b2) : "b"(a) : "memory");
	__asm__ volatile("lbz %0,3(%1)" : "=r"(b3) : "b"(a) : "memory");
	return (uint32_t)b0 | ((uint32_t)b1 << 8)
	     | ((uint32_t)b2 << 16) | ((uint32_t)b3 << 24);
}

static inline uint16_t read16le(const void *p) {
	unsigned long a = (unsigned long)p;
	int b0, b1;
	__asm__ volatile("lbz %0,0(%1)" : "=r"(b0) : "b"(a) : "memory");
	__asm__ volatile("lbz %0,1(%1)" : "=r"(b1) : "b"(a) : "memory");
	return (uint16_t)(b0 | (b1 << 8));
}

static inline void write32le(void *p, uint32_t v) {
	unsigned long a = (unsigned long)p;
	__asm__ volatile("stb %0,0(%1)" : : "r"(v & 0xFF), "b"(a) : "memory");
	__asm__ volatile("stb %0,1(%1)" : : "r"((v >> 8) & 0xFF), "b"(a) : "memory");
	__asm__ volatile("stb %0,2(%1)" : : "r"((v >> 16) & 0xFF), "b"(a) : "memory");
	__asm__ volatile("stb %0,3(%1)" : : "r"((v >> 24) & 0xFF), "b"(a) : "memory");
}

static inline void write16le(void *p, uint16_t v) {
	unsigned long a = (unsigned long)p;
	__asm__ volatile("stb %0,0(%1)" : : "r"(v & 0xFF), "b"(a) : "memory");
	__asm__ volatile("stb %0,1(%1)" : : "r"((v >> 8) & 0xFF), "b"(a) : "memory");
}

#else  /* Little-endian host — native read is already LE. */

static inline uint32_t read32le(const void *p) {
	const unsigned char *b = (const unsigned char *)p;
	return (uint32_t)b[0] | ((uint32_t)b[1] << 8)
	     | ((uint32_t)b[2] << 16) | ((uint32_t)b[3] << 24);
}

static inline uint16_t read16le(const void *p) {
	const unsigned char *b = (const unsigned char *)p;
	return (uint16_t)(b[0] | (b[1] << 8));
}

static inline void write32le(void *p, uint32_t v) {
	unsigned char *b = (unsigned char *)p;
	b[0] = v & 0xFF;
	b[1] = (v >> 8) & 0xFF;
	b[2] = (v >> 16) & 0xFF;
	b[3] = (v >> 24) & 0xFF;
}

static inline void write16le(void *p, uint16_t v) {
	unsigned char *b = (unsigned char *)p;
	b[0] = v & 0xFF;
	b[1] = (v >> 8) & 0xFF;
}

#endif

#endif /* BYTEUTILS_H */
