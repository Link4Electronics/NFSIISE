#pragma once
#include <unistd.h>
#include <stdio.h>
#include "CPU.h"
#include "MemoryTranslate.h"
struct Application : public CPU
{
	/* AF and PF flags are ignored */

	/* All x86 data is little-endian in memory (both BSS/DATA and pool
	   chunks).  These helpers always read/write LE, regardless of host
	   endianness, so that the same accessor code works for all memory.
	   Byte-at-a-time access avoids PPC64 alignment faults. */
	/* Read each byte via a separate volatile access to prevent GCC from
	   merging byte reads into a word-sized load (lwz/lwbrx) that faults
	   on unaligned PPC64 pointers.  Memory contains x86 LE data; the
	   helpers assemble bytes in LE order regardless of host endianness.

	   To be absolutely certain GCC does not optimise the byte accesses,
	   each load uses its own volatile cast so the compiler has no
	   opportunity to merge them. */
	static FnInl(uint32_t) read8(const void *p) {
		return ((volatile const unsigned char *)p)[0];
	}
	static FnInl(void) write8(void *p, uint32_t v) {
		((volatile unsigned char *)p)[0] = (unsigned char)v;
	}
	static FnInl(uint16_t) read16(const void *p) {
		unsigned char b0 = ((volatile const unsigned char *)p)[0];
		unsigned char b1 = ((volatile const unsigned char *)p)[1];
		return (uint16_t)b1 << 8 | b0;
	}
	static FnInl(uint32_t) read32(const void *p) {
		unsigned char b0 = ((volatile const unsigned char *)p)[0];
		unsigned char b1 = ((volatile const unsigned char *)p)[1];
		unsigned char b2 = ((volatile const unsigned char *)p)[2];
		unsigned char b3 = ((volatile const unsigned char *)p)[3];
		return (uint32_t)b3 << 24 | (uint32_t)b2 << 16
		     | (uint32_t)b1 << 8 | b0;
	}
	static FnInl(uint64_t) read64(const void *p) {
		unsigned char b0 = ((volatile const unsigned char *)p)[0];
		unsigned char b1 = ((volatile const unsigned char *)p)[1];
		unsigned char b2 = ((volatile const unsigned char *)p)[2];
		unsigned char b3 = ((volatile const unsigned char *)p)[3];
		unsigned char b4 = ((volatile const unsigned char *)p)[4];
		unsigned char b5 = ((volatile const unsigned char *)p)[5];
		unsigned char b6 = ((volatile const unsigned char *)p)[6];
		unsigned char b7 = ((volatile const unsigned char *)p)[7];
		return (uint64_t)b7 << 56 | (uint64_t)b6 << 48
		     | (uint64_t)b5 << 40 | (uint64_t)b4 << 32
		     | (uint64_t)b3 << 24 | (uint64_t)b2 << 16
		     | (uint64_t)b1 << 8 | b0;
	}
	static FnInl(void) write16(void *p, uint16_t v) {
		((volatile unsigned char *)p)[1] = (unsigned char)(v >> 8);
		((volatile unsigned char *)p)[0] = (unsigned char)v;
	}
	static FnInl(void) write32(void *p, uint32_t v) {
		((volatile unsigned char *)p)[3] = (unsigned char)(v >> 24);
		((volatile unsigned char *)p)[2] = (unsigned char)(v >> 16);
		((volatile unsigned char *)p)[1] = (unsigned char)(v >> 8);
		((volatile unsigned char *)p)[0] = (unsigned char)v;
	}
	static FnInl(void) write64(void *p, uint64_t v) {
		((volatile unsigned char *)p)[7] = (unsigned char)(v >> 56);
		((volatile unsigned char *)p)[6] = (unsigned char)(v >> 48);
		((volatile unsigned char *)p)[5] = (unsigned char)(v >> 40);
		((volatile unsigned char *)p)[4] = (unsigned char)(v >> 32);
		((volatile unsigned char *)p)[3] = (unsigned char)(v >> 24);
		((volatile unsigned char *)p)[2] = (unsigned char)(v >> 16);
		((volatile unsigned char *)p)[1] = (unsigned char)(v >> 8);
		((volatile unsigned char *)p)[0] = (unsigned char)v;
	}

#if defined(__powerpc64__) || defined(__PPC64__)

	/* Zero-extend a possibly-negative int32 to uintptr_t so that
	   addresses >= 0x80000000U are not sign-extended to kernel space.
	   Also translate x86 virtual addresses to host pointers.  Pool
	   and code addresses are identity-mapped — only BSS/DATA x86 VAs
	   need actual translation. */
	template<typename T>
	static FnInl(uintptr_t) za(const T a)
	{
		return translate_x86_addr((uint32_t)(intptr_t)a);
	}

	struct Int32Cache { int32_t val; const void *addr; };
	static Int32Cache &t32ic() { thread_local Int32Cache c{}; return c; }
	static void flush(int32_t &val) {
		Int32Cache &c = t32ic();
		if (&val == &c.val && c.addr) {
			write32((void *)c.addr, (uint32_t)c.val);
			c.addr = nullptr;
		}
	}
	struct Int64Cache { int64_t val; const void *addr; };
	static Int64Cache &t64ic() { thread_local Int64Cache c{}; return c; }
	static void flush(int64_t &val) {
		Int64Cache &c = t64ic();
		if (&val == &c.val && c.addr) {
			write64((void *)c.addr, (uint64_t)c.val);
			c.addr = nullptr;
		}
	}
	struct Int16Cache { int16_t val; const void *addr; };
	static Int16Cache &t16ic() { thread_local Int16Cache c{}; return c; }
	static void flush(int16_t &val) {
		Int16Cache &c = t16ic();
		if (&val == &c.val && c.addr) {
			write16((void *)c.addr, (uint16_t)c.val);
			c.addr = nullptr;
		}
	}
	struct DoubleCache { double val; const void *addr; };
	static DoubleCache &t64c() { thread_local DoubleCache c{}; return c; }
	static void flush(double &val) {
		DoubleCache &c = t64c();
		if (&val == &c.val && c.addr) {
			uint64_t native;
			__builtin_memcpy(&native, &c.val, sizeof(double));
			write64((void *)c.addr, native);
			c.addr = nullptr;
		}
	}
	struct FloatCache { float val; const void *addr; };
	static FloatCache &t32c() { thread_local FloatCache c{}; return c; }
	static void flush(float &val) {
		FloatCache &c = t32c();
		if (&val == &c.val && c.addr) {
			uint32_t native;
			__builtin_memcpy(&native, &c.val, sizeof(float));
			write32((void *)c.addr, native);
			c.addr = nullptr;
		}
	}
#elif defined(__aarch64__)

	/* ARM64: translate x86 VAs to host addresses via translate_x86_addr,
	   then access memory directly (no byte-swap, no cache — ARM64 is
	   little-endian and handles unaligned access fine). */
	template<typename T>
	static FnInl(uintptr_t) za(const T a)
	{
		return translate_x86_addr((uint32_t)(intptr_t)a);
	}

#endif

	template<typename T>
	static FnInl(uintptr_t) xlate_addr(const T addr) {
		return std::is_pointer<T>::value
			? (uintptr_t)(const void *)addr
			: za(addr);
	}
	template<typename T>
	static FnInl(double &) to64f(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		uintptr_t ua = xlate_addr(addr);
		DoubleCache &c = t64c();
		if (c.addr && c.addr != (const void *)ua)
			flush(c.val);
		if (c.addr != (const void *)ua) {
			c.addr = (const void *)ua;
			uint64_t v = read64(c.addr);
			__builtin_memcpy(&c.val, &v, sizeof(double));
		}
		return c.val;
#elif defined(__aarch64__)
		return *(double *)xlate_addr(addr);
#else
		return *(double *)addr;
#endif
	}
	template<typename T>
	static FnInl(float &) to32f(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		uintptr_t ua = xlate_addr(addr);
		FloatCache &c = t32c();
		if (c.addr && c.addr != (const void *)ua)
			flush(c.val);
		if (c.addr != (const void *)ua) {
			c.addr = (const void *)ua;
			uint32_t v = read32(c.addr);
			__builtin_memcpy(&c.val, &v, sizeof(float));
		}
		return c.val;
#elif defined(__aarch64__)
		return *(float *)xlate_addr(addr);
#else
		return *(float *)addr;
#endif
	}
	template<typename T>
	static FnInl(int64_t &) to64i(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		uintptr_t ua = xlate_addr(addr);
		Int64Cache &c = t64ic();
		if (c.addr && c.addr != (const void *)ua)
			flush(c.val);
		if (c.addr != (const void *)ua) {
			c.addr = (const void *)ua;
			c.val = (int64_t)read64(c.addr);
		}
		return c.val;
#elif defined(__aarch64__)
		return *(int64_t *)xlate_addr(addr);
#else
		return *(int64_t *)addr;
#endif
	}
	template<typename T>
	static FnInl(int32_t &) to32i(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		uintptr_t ua = xlate_addr(addr);
		Int32Cache &c = t32ic();
		if (c.addr && c.addr != (const void *)ua)
			flush(c.val);
		if (c.addr != (const void *)ua) {
			c.addr = (const void *)ua;
			c.val = (int32_t)read32(c.addr);
		}
		return c.val;
#elif defined(__aarch64__)
		return *(int32_t *)xlate_addr(addr);
#else
		return *(int32_t *)addr;
#endif
	}
	template<typename T>
	static FnInl(int16_t &) to16i(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		uintptr_t ua = xlate_addr(addr);
		Int16Cache &c = t16ic();
		if (c.addr && c.addr != (const void *)ua)
			flush(c.val);
		if (c.addr != (const void *)ua) {
			c.addr = (const void *)ua;
			c.val = (int16_t)read16(c.addr);
		}
		return c.val;
#elif defined(__aarch64__)
		return *(int16_t *)xlate_addr(addr);
#else
		return *(int16_t *)addr;
#endif
	}

	template<typename T>
	static FnInl(bool) getMSB(const T val)
	{
		return val & numeric_limits<make_signed_t<T>>::min();
	}

	template<typename T>
	static FnInl(int8_t &) to8i(const T addr)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		return *(int8_t *)za(addr);
#elif defined(__aarch64__)
		return *(int8_t *)xlate_addr(addr);
#else
		return *(int8_t *)addr;
#endif
	}

	FnInl(int64_t) getEdxEax()
	{
		return ((uint64_t)UNSIGNED(edx) << 32) | (uint64_t)UNSIGNED(eax);
	}

	FnInl(bool) ja()
	{
		return !flags.cf && !flags.zf;
	}
	FnInl(bool) jb()
	{
		return flags.cf;
	}
	FnInl(bool) jbe()
	{
		return flags.cf || flags.zf;
	}
	FnInl(bool) jg()
	{
		return !flags.zf && (flags.sf == flags.of);
	}
	FnInl(bool) jge()
	{
		return flags.sf == flags.of;
	}
	FnInl(bool) jl()
	{
		return flags.sf != flags.of;
	}
	FnInl(bool) jle()
	{
		return flags.zf || (flags.sf != flags.of);
	}
	FnInl(bool) jnb()
	{
		return !flags.cf;
	}
	FnInl(bool) jns()
	{
		return !flags.sf;
	}
	FnInl(bool) jnz()
	{
		return !flags.zf;
	}
	FnInl(bool) js()
	{
		return flags.sf;
	}
	FnInl(bool) jz()
	{
		return flags.zf;
	}

	template<typename T>
	FnInl(void) call(const T addr)
	{
		esp -= 4;
		((void(*)(void *))(uintptr_t)addr)(this);
		esp += 4;
	}

	template<typename T>
	FnInl(void) set_ZF_SF_flags(const T val)
	{
		flags.zf = !val;
		flags.sf = getMSB(val);
	}
	FnInl(void) clr_CF_OF_flags()
	{
		flags.of = flags.cf = 0;
	}

	template<typename T>
	FnInl(void) push32(const T val)
	{
		esp -= 4;
		/* Truncate host pointer to 32-bit x86 VA.  All addresses (code,
		   DATA, BSS, pool) are in the low 4 GB on all platforms thanks
		   to -no-pie and MAP_FIXED pool allocation, so simple truncation
		   preserves the correct host address.  translate_host_to_x86 is
		   NOT used here because the DataLayout struct is sequential —
		   struct offsets don't match x86 VAs from field names. */
		to32i(esp) = (int32_t)(intptr_t)val;
	}
	template<typename T>
	FnInl(void) push16(const T val)
	{
		ASSERT_SIZE(2, val);
		esp -= 4;
		to32i(esp) = UNSIGNED(val);
	}

	template<typename T>
	FnInl(void) pop32(T &val)
	{
		ASSERT_SIZE(4, val);
		val = to32i(esp);
		esp += 4;
	}
	template<typename T>
	FnInl(void) pop16(T &val)
	{
		ASSERT_SIZE(2, val);
		val = to32i(esp);
		esp += 4;
	}

	FnInl(void) pusha()
	{
		const int32_t tmp = esp;
		push32(eax);
		push32(ecx);
		push32(edx);
		push32(ebx);
		push32(tmp);
		push32(ebp);
		push32(esi);
		push32(edi);
	}
	FnInl(void) popa()
	{
		int32_t tmp;
		pop32(edi);
		pop32(esi);
		pop32(ebp);
		pop32(tmp);
		pop32(ebx);
		pop32(edx);
		pop32(ecx);
		pop32(eax);
		esp = tmp;
	}

	FnInl(void) pushf()
	{
		push16(flags.getWord());
	}
	FnInl(void) popf()
	{
		uint16_t word;
		pop16(word);
		flags.setWord(word);
	}

	FnInl(void) leave()
	{
		esp = ebp;
		pop32(ebp);
	}

	FnInl(void) sahf()
	{
		flags.setLo((ah & 0xD7) | 0x02);
	}
	FnInl(void) lahf()
	{
		ah = (flags.getLo() & 0xD7) | 0x02;
	}

	FnInl(void) setnbe(int8_t &val) //seta
	{
		val = (!flags.cf && !flags.zf);
	}

	template<bool cf, typename T1, typename T2>
	Fn(T1) addHelper(const T1 val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		const T1 val = val1 + val2;
		set_ZF_SF_flags(val);
		flags.of = (getMSB(val1) != getMSB(val)) && (getMSB(val1) == getMSB(val2));
		if (cf) //if constexpr
			flags.cf = UNSIGNED(val) < UNSIGNED(val1);
		return val;
	}
	template<bool cf, typename T1, typename T2>
	Fn(T1) subHelper(const T1 val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		const T1 val = val1 - val2;
		set_ZF_SF_flags(val);
		flags.of = (getMSB(val1) != getMSB(val)) && (getMSB(val1) != getMSB(val2));
		if (cf) //if constexpr
			flags.cf = UNSIGNED(val1) < UNSIGNED(val2);
		return val;
	}

	template<typename T1, typename T2>
	FnInl(void) add(T1 &val1, const T2 val2)
	{
		val1 = addHelper<true>(val1, val2);
	}
	template<typename T1, typename T2>
	FnInl(void) sub(T1 &val1, const T2 val2)
	{
		val1 = subHelper<true>(val1, val2);
	}

	template<typename T>
	FnInl(void) inc(T &val)
	{
		val = addHelper<false>(val, (GET_TYPE(val))1);
	}
	template<typename T>
	FnInl(void) dec(T &val)
	{
		val = subHelper<false>(val, (GET_TYPE(val))1);
	}

	template<typename T1, typename T2>
	FnInl(void) adc(T1 &val1, const T2 val2)
	{
		val1 = addHelper<true>(val1, val2 + (T2)flags.cf);
	}
	template<typename T1, typename T2>
	FnInl(void) sbb(T1 &val1, const T2 val2)
	{
		val1 = subHelper<true>(val1, val2 + (T2)flags.cf);
	}

	template<typename T1, typename T2>
	FnInl(void) and_(T1 &val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		val1 &= val2;
		set_ZF_SF_flags(val1);
		clr_CF_OF_flags();
	}
	template<typename T1, typename T2>
	FnInl(void) or_(T1 &val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		val1 |= val2;
		set_ZF_SF_flags(val1);
		clr_CF_OF_flags();
	}
	template<typename T1, typename T2>
	FnInl(void) xor_(T1 &val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		val1 ^= val2;
		set_ZF_SF_flags(val1);
		clr_CF_OF_flags();
	}

	template<typename T1, typename T2>
	FnInl(void) cmp(const T1 val1, const T2 val2)
	{
		subHelper<true>(val1, val2);
	}
	template<typename T1, typename T2>
	FnInl(void) test(const T1 val1, const T2 val2)
	{
		ASSERT_SIZES(val1, val2);
		const T1 val = val1 & val2;
		set_ZF_SF_flags(val);
		clr_CF_OF_flags();
	}

	FnInl(void) div8(const uint8_t val)
	{
		const uint8_t quotient  = UNSIGNED(ax) / val;
		const uint8_t remainder = UNSIGNED(ax) % val;
		ah = remainder;
		al = quotient;
	} //flags undefined, no exceptions
	FnInl(void) div32(const uint32_t val)
	{
		const uint64_t edx_eax = getEdxEax();
		eax = edx_eax / val;
		edx = edx_eax % val;
	} //flags undefined, no exceptions
	FnInl(void) idiv32(const int32_t val)
	{
		const int64_t edx_eax = getEdxEax();
		eax = edx_eax / val;
		edx = edx_eax % val;
	} //flags undefined, no exceptions

	//TODO: OF and CF flags in mul (probably are not needed)
	FnInl(void) mul32(const uint32_t val)
	{
		const uint64_t edx_eax = (uint64_t)UNSIGNED(eax) * (uint64_t)val;
		eax = edx_eax;
		edx = edx_eax >> 32;
	}
	FnInl(void) imul32(const int32_t val)
	{
		const uint64_t edx_eax = (int64_t)eax * (int64_t)val;
		eax = edx_eax;
		edx = edx_eax >> 32;
	}
	FnInl(void) imul32(int32_t &val1, const int32_t val2)
	{
		val1 *= val2;
	}
	FnInl(void) imul32(int32_t &val1, const int32_t val2, const int32_t val3)
	{
		val1 = val2 * val3;
	}
	FnInl(void) imul16(int16_t &val1, const int16_t val2)
	{
		val1 *= val2;
	}

	template<typename T1, typename T2>
	FnInl(void) shr(T1 &val1, const T2 val2)
	{
		if (val2 == 1)
			flags.of = getMSB(val1);
		flags.cf = ((UNSIGNED(val1)) >> (val2 - 1)) & 1;
		UNSIGNED_REF(val1) >>= val2;
		set_ZF_SF_flags(val1);
	}
	template<typename T1, typename T2>
	FnInl(void) sar(T1 &val1, const T2 val2)
	{
		if (val2 == 1)
			flags.of = 0;
		flags.cf = ((SIGNED(val1)) >> (val2 - 1)) & 1;
		SIGNED_REF(val1) >>= val2;
		set_ZF_SF_flags(val1);
	}
	template<typename T1, typename T2>
	FnInl(void) shl(T1 &val1, const T2 val2)
	{
		flags.cf =  (UNSIGNED(val1) >> ((sizeof(val1) << 3) - val2)) & 1;
		val1 <<= val2;
		if (val2 == 1)
			flags.of = (flags.cf != getMSB(val1));
		set_ZF_SF_flags(val1);
	}

	template<typename T1, typename T2>
	FnInl(void) rol(T1 &val1, const T2 val2)
	{
		val1 = (val1 << val2) | (UNSIGNED(val1) >> ((sizeof val1 << 3) - val2));
	} //TODO: OF, CF, ZF, SF but not needed
	template<typename T1, typename T2>
	FnInl(void) ror(T1 &val1, const T2 val2)
	{
		val1 = (UNSIGNED_REF(val1) >> val2) | (val1 << ((sizeof val1 << 3) - val2));
	} //TODO: OF, CF, ZF, SF but not needed

	template<typename T>
	FnInl(void) neg(T &val)
	{
//		flags.cf = !!val; //probably not needed
		val = -val;
	} //TODO: OF, ZF, SF but probably not needed

	template<typename T1, typename T2, typename T3>
	FnInl(void) shrd(T1 &val1, const T2 val2, const T3 cnt)
	{
		ASSERT_SIZES(val1, val2);
		val1 = (UNSIGNED(val1) >> cnt) | (val2 << ((sizeof val1 << 3) - cnt));
	} //TODO: CF, OF, ZF, SF, but not needed

	template<typename T>
	FnInl(void) bsr(T &val1, const uint32_t val2)
	{
		if (val2)
		{
			val1 = 0x1F - __builtin_clz(val2);
			flags.zf = 0;
		}
		else
		{
			flags.zf = 1;
		}
	}

	/* DF flag is ignored */

	FnInl(void) movsb()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		write8((void *)za(edi), read8((const void *)za(esi)));
#elif defined(__aarch64__)
		*(int8_t *)xlate_addr(edi) = *(int8_t *)xlate_addr(esi);
#else
		*(int8_t *)edi = *(int8_t *)esi;
#endif
		esi += 1;
		edi += 1;
	}
	FnInl(void) movsw()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		write16((void *)za(edi), read16((const void *)za(esi)));
#elif defined(__aarch64__)
		*(int16_t *)xlate_addr(edi) = *(int16_t *)xlate_addr(esi);
#else
		*(int16_t *)edi = *(int16_t *)esi;
#endif
		esi += 2;
		edi += 2;
	}
	FnInl(void) movsd()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		write32((void *)za(edi), read32((const void *)za(esi)));
#elif defined(__aarch64__)
		*(int32_t *)xlate_addr(edi) = *(int32_t *)xlate_addr(esi);
#else
		*(int32_t *)edi = *(int32_t *)esi;
#endif
		esi += 4;
		edi += 4;
	}

	FnInl(void) stosb()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		write8((void *)za(edi), (unsigned char)al);
#elif defined(__aarch64__)
		*(int8_t *)xlate_addr(edi) = al;
#else
		*(int8_t *)edi = al;
#endif
		edi += 1;
	}
	FnInl(void) stosd()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		write32((void *)za(edi), (uint32_t)eax);
#elif defined(__aarch64__)
		*(int32_t *)xlate_addr(edi) = eax;
#else
		*(int32_t *)edi = eax;
#endif
		edi += 4;
	}

	FnInl(void) scasb()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		const int8_t val = al - (int8_t)read8((const void *)za(edi));
#elif defined(__aarch64__)
		const int8_t val = al - *(int8_t *)xlate_addr(edi);
#else
		const int8_t val = al - *(int8_t *)edi;
#endif
		set_ZF_SF_flags(val);
		edi += 1;
	} //TODO: OF, CF, but not needed

	FnInl(void) cmpsb()
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		const int8_t v_esi = (int8_t)read8((const void *)za(esi));
		const int8_t v_edi = (int8_t)read8((const void *)za(edi));
		cmp(v_esi, v_edi);
#elif defined(__aarch64__)
		cmp(*(int8_t *)xlate_addr(esi), *(int8_t *)xlate_addr(edi));
#else
		cmp(*(int8_t *)esi, *(int8_t *)edi);
#endif
		esi += 1;
		edi += 1;
	}

	FnInl(void) cpuid()
	{
		//Should not be called
	}

	/* FPU */

	FnInl(void) finit()
	{
		fpu.init();
	}

	FnInl(void) fnstsw(int16_t &val)
	{
		val = fpu.status.flags;
	}

	FnInl(void) fstcw(int16_t &val)
	{
		val = fpu.control.word;
	}
	FnInl(void) fldcw(const int16_t val)
	{
		fpu.control.word = val;
	}

	FnInl(void) fldz()
	{
		fpu.push(0.0);
	}
	FnInl(void) fld1()
	{
		fpu.push(1.0);
	}

	FnInl(void) fchs()
	{
		fpu.st(0) = -fpu.st(0);
	}

	FnInl(void) frndint()
	{
		//This game uses "control.rc == 3" which does the same as casting to integer,
		//so make this method NO-OP.
	}

	FnInl(void) fcompp()
	{
		fpu.compare(fpu.st(0), fpu.st(1));
		fpu.pop();
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fild(const T &val)
	{
		static_assert(!is_floating_point<decay_t<decltype(val)>>::value, "FILD requires integer!");
		alignas(max<size_t>(sizeof(T), 4)) MAYBE_VOLATILE const auto valAligned = val;
		assert((uintptr_t)&valAligned % 4 == 0);
		fpu.push(valAligned);
	}
	template<typename T>
	FnInl(void) fld(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FLD requires floating-point!");
		fpu.push(val);
	}
	FnInl(void) fld_st(const int32_t num)
	{
		fpu.push(fpu.st(num));
	}

	template<typename T>
	FnInl(void) fistp(T &val)
	{
		static_assert(!is_floating_point<GET_TYPE(val)>::value, "FISTP requires integer!");
		val = fpu.st(0);
#if defined(__powerpc64__) || defined(__PPC64__)
		flush(val);
#endif
		fpu.pop();
	}
	template<typename T>
	FnInl(void) fstp(T &val)
	{
		fpu.store(val);
#if defined(__powerpc64__) || defined(__PPC64__)
		flush(val);
#endif
		fpu.pop();
	}
	FnInl(void) fstp_st(const int32_t num)
	{
		fpu.st(num) = fpu.st(0);
		fpu.pop();
	}
	template<typename T>
	FnInl(void) fst(T &val)
	{
		fpu.store(val);
#if defined(__powerpc64__) || defined(__PPC64__)
		flush(val);
#endif
	}
	FnInl(void) fst_st(const int32_t num)
	{
		fpu.st(num) = fpu.st(0);
	}

	FnInl(void) fsqrt()
	{
		fpu.st(0) = sqrt(fpu.st(0));
	}
	FnInl(void) fcos()
	{
		fpu.st(0) = cos(fpu.st(0));
	}
	FnInl(void) fptan()
	{
		fpu.st(0) = tan(fpu.st(0));
		fpu.push(1.0);
	}

	FnInl(void) fxch_st(const int32_t num)
	{
		swap(fpu.st(0), fpu.st(num));
	}

	template<typename T>
	FnInl(void) fcomp(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FCOMP requires floating-point!");
		fpu.compare(fpu.st(0), val);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fadd(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FADD requires floating-point!");
		fpu.st(0) += val;
	}
	FnInl(void) fadd_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) += fpu.st(num2);
	}
	FnInl(void) faddp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) += fpu.st(num2);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fsub(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FSUB requires floating-point!");
		fpu.st(0) -= val;
	}
	FnInl(void) fsub_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) -= fpu.st(num2);
	}
	FnInl(void) fsubp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) -= fpu.st(num2);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fsubr(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FSUBR requires floating-point!");
		fpu.st(0) = val - fpu.st(0);
	}
	FnInl(void) fsubrp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) = fpu.st(num2) - fpu.st(num1);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fmul(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FMUL requires floating-point!");
		fpu.st(0) *= val;
	}
	FnInl(void) fmul_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) *= fpu.st(num2);
	}
	FnInl(void) fmulp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) *= fpu.st(num2);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fdiv(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FDIV requires floating-point!");
		fpu.st(0) /= val;
	}
	FnInl(void) fdiv_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) /= fpu.st(num2);
	}
	FnInl(void) fdivp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) /= fpu.st(num2);
		fpu.pop();
	}

	template<typename T>
	FnInl(void) fdivr(const T val)
	{
		static_assert(is_floating_point<decltype(val)>::value, "FDIVR requires floating-point!");
		fpu.st(0) = val / fpu.st(0);
	}
	FnInl(void) fdivrp_st(const int32_t num1, const int32_t num2)
	{
		fpu.st(num1) = fpu.st(num2) / fpu.st(num1);
		fpu.pop();
	}
};
