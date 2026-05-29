#pragma once
#include <byteswap.h>

#include <type_traits>
#include <algorithm>
#include <utility>
#include <limits>
#include <new>

#include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cmath>

#if defined(__x86_64__) || defined(__aarch64__) || defined(__powerpc64__) || defined(__PPC64__) || defined(__LP64__)
#define HOST_64BIT
extern "C" void *malloc32(size_t size);
extern "C" void free32(void *p);
#else
static inline void *malloc32(size_t size) { return malloc(size); }
static inline void free32(void *p) { free(p); }
#endif

/* PTR32: zero-extend a 32-bit game address to a host pointer on 64-bit. */
#if defined(HOST_64BIT)
#define PTR32(type, val)  ((type *)(uintptr_t)(uint32_t)(int32_t)(val))
#define PTR32_RET(val)    ((int32_t)(intptr_t)(val))
#else
#define PTR32(type, val)  ((type *)(intptr_t)(val))
#define PTR32_RET(val)    ((int32_t)(val))
#endif

using namespace std;

// ------  Byte-order detection and helpers  --------------------------------
#ifndef __ORDER_LITTLE_ENDIAN__
#define __ORDER_LITTLE_ENDIAN__ 1234
#endif
#ifndef __ORDER_BIG_ENDIAN__
#define __ORDER_BIG_ENDIAN__ 4321
#endif

#if defined(__BYTE_ORDER__)
#define HOST_BYTE_ORDER __BYTE_ORDER__
#elif defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && defined(__BIG_ENDIAN)
#define HOST_BYTE_ORDER __BYTE_ORDER
#elif defined(BYTE_ORDER) && defined(LITTLE_ENDIAN) && defined(BIG_ENDIAN)
#define HOST_BYTE_ORDER BYTE_ORDER
#else
#error "Cannot detect host byte order!"
#endif

#if HOST_BYTE_ORDER == __ORDER_BIG_ENDIAN__
#ifndef HOST_BIG_ENDIAN
#define HOST_BIG_ENDIAN
#endif
/* Swap little-endian game/file data to host byte order */
#ifndef le16toh
#define le16toh(x) ((uint16_t)bswap_16((uint16_t)(x)))
#endif
#ifndef le32toh
#define le32toh(x) ((uint32_t)bswap_32((uint32_t)(x)))
#endif
#ifndef le64toh
#define le64toh(x) ((uint64_t)bswap_64((uint64_t)(x)))
#endif
#ifndef htole16
#define htole16(x) le16toh(x)
#endif
#ifndef htole32
#define htole32(x) le32toh(x)
#endif
#ifndef htole64
#define htole64(x) le64toh(x)
#endif
#define LE_READ16(p)  le16toh(*(const uint16_t *)(p))
#define LE_READ32(p)  le32toh(*(const uint32_t *)(p))
#define LE_WRITE16(p, v) (*(uint16_t *)(p) = htole16(v))
#define LE_WRITE32(p, v) (*(uint32_t *)(p) = htole32(v))
#else
#ifndef le16toh
#define le16toh(x) (x)
#endif
#ifndef le32toh
#define le32toh(x) (x)
#endif
#ifndef le64toh
#define le64toh(x) (x)
#endif
#ifndef htole16
#define htole16(x) (x)
#endif
#ifndef htole32
#define htole32(x) (x)
#endif
#ifndef htole64
#define htole64(x) (x)
#endif
#define LE_READ16(p)  (*(const uint16_t *)(p))
#define LE_READ32(p)  (*(const uint32_t *)(p))
#define LE_WRITE16(p, v) (*(uint16_t *)(p) = (v))
#define LE_WRITE32(p, v) (*(uint32_t *)(p) = (v))
#endif

#if !defined(__WORDSIZE) || (__WORDSIZE != 32)
//#error "This game is compatible only with 32-bit CPUs!"
#endif
#if defined(i386) || defined(__i386__) || defined(__i386) || defined(_M_IX86)
	#define CPU_X86
#endif
#ifdef CPU_X86
	#define MAYBE_VOLATILE
#else
	#define MAYBE_VOLATILE volatile // Prevent unaligned memory access by e.g. VFP
#endif

#define ASSERT_SIZE(size,val) \
	static_assert(sizeof(val) == size, "Size of the argument doesn't match!")

#define ASSERT_SIZES(val1,val2) \
	static_assert(sizeof(val1) == sizeof(val2), "Both arguments must have the same size!")

#define SIGNED(val) \
	(make_signed_t<decay_t<decltype(val)>>)val
#define SIGNED_REF(val) \
	(make_signed_t<decay_t<decltype(val)>> &)val

#define UNSIGNED(val) \
	(make_unsigned_t<decay_t<decltype(val)>>)val
#define UNSIGNED_REF(val) \
	(make_unsigned_t<decay_t<decltype(val)>> &)val

#define GET_TYPE(val) \
	decay_t<decltype(val)>

#define Fn(type) \
	__attribute__((__noinline__)) type

#ifdef NDEBUG
	#define FnInl(type) \
		__attribute__((__always_inline__)) type
#else
	#define FnInl(type) \
		Fn(type)
#endif

#define packed \
	__attribute__((__packed__))
