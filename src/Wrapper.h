// SPDX-License-Identifier: MIT

#ifndef WRAPPER_H
#define WRAPPER_H

#if !defined(WIN32) && !defined(_GNU_SOURCE)
	#define _GNU_SOURCE
#endif

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef NOT_COMPILING
	#define STDCALL
	#define REGPARM

	#define MAYBE_THIS_SINGLE void
	#define MAYBE_THIS
#elif !defined(NFS_CPP) && (defined(__i386) || defined(__i386__))
	#define STDCALL __attribute__((stdcall))
	#define REGPARM __attribute__((regparm(2))) //First two arguments are compatible with Watcom fastcall

	#define MAYBE_THIS_SINGLE void
	#define MAYBE_THIS
#elif !defined(NFS_CPP) && (defined(__x86_64__) || defined(__amd64__) || defined(__aarch64__) || defined(__powerpc64__) || defined(__PPC64__))
	#define STDCALL
	#define REGPARM

	#define MAYBE_THIS_SINGLE void *this
	#define MAYBE_THIS void *this,

	#define NFS_CPP
#else
	#define STDCALL
	#define REGPARM

	#define MAYBE_THIS_SINGLE void *this
	#define MAYBE_THIS void *this,

	#ifndef NFS_CPP
		#define NFS_CPP
	#endif
#endif

#if !defined(NFS_CPP) && defined(STACK_REALIGN)
	#define REALIGN __attribute__((force_align_arg_pointer))
#else
	#define REALIGN
#endif

#define MAX_PATH 260

#define BOOL int32_t
#define false 0
#define true 1

typedef uint32_t (STDCALL *WindowProc)(MAYBE_THIS void *hWnd, uint32_t uMsg, uint32_t wParam, uint32_t lParam);

char *convertFilePath(const char *srcPth, BOOL convToLower);

#if defined(__x86_64__) || defined(__aarch64__) || defined(__powerpc64__) || defined(__PPC64__) || defined(__LP64__)
#define HOST_64BIT
void *malloc32(size_t size);
void free32(void *p);
void pool_preallocate(void);
#else
static inline void *malloc32(size_t size) { return malloc(size); }
static inline void free32(void *p) { free(p); }
#endif

/* ------  Big-endian host detection  ------------------------------------ */
#if !defined(__ORDER_LITTLE_ENDIAN__)
#define __ORDER_LITTLE_ENDIAN__ 1234
#endif
#if !defined(__ORDER_BIG_ENDIAN__)
#define __ORDER_BIG_ENDIAN__ 4321
#endif

#if defined(__BYTE_ORDER__)
#define HOST_BYTE_ORDER __BYTE_ORDER__
#elif defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && defined(__BIG_ENDIAN)
#define HOST_BYTE_ORDER __BYTE_ORDER
#elif defined(BYTE_ORDER) && defined(LITTLE_ENDIAN) && defined(BIG_ENDIAN)
#define HOST_BYTE_ORDER BYTE_ORDER
#elif defined(__BIG_ENDIAN__)
#define HOST_BYTE_ORDER __ORDER_BIG_ENDIAN__
#elif defined(__LITTLE_ENDIAN__)
#define HOST_BYTE_ORDER __ORDER_LITTLE_ENDIAN__
#endif

#if defined(HOST_BYTE_ORDER) && (HOST_BYTE_ORDER == __ORDER_BIG_ENDIAN__)
#ifndef HOST_BIG_ENDIAN
#define HOST_BIG_ENDIAN
#endif
#endif

#endif // WRAPPER_H
