#pragma once
#include "FPU.h"
struct CPU
{
	CPU()
	{
		const size_t stack_size = 1 << 20;
		stack = (uint8_t *)malloc32(stack_size);
		esp = (int32_t)(intptr_t)stack + stack_size;

		flags.setWord(0x0202);
	}
	~CPU()
	{
		free32(stack);
	}

	uint8_t *stack;

	union { int32_t eax = 0; int16_t  ax; struct { int8_t al; int8_t ah; }; };
	union { int32_t ebx = 0; int16_t  bx; struct { int8_t bl; int8_t bh; }; };
	union { int32_t ecx = 0; int16_t  cx; struct { int8_t cl; int8_t ch; }; };
	union { int32_t edx = 0; int16_t  dx; struct { int8_t dl; int8_t dh; }; };
	union { int32_t esp = 0; int16_t  sp; };
	union { int32_t ebp = 0; int16_t  bp; };
	union { int32_t esi = 0; int16_t  si; };
	union { int32_t edi = 0; int16_t  di; };

	int16_t cs = 0, ds = 0, es = 0, fs = 0, gs = 0, ss = 0;

	struct Flags
	{
		FnInl(uint16_t) getWord()
		{
			return ((uint16_t)getHi() << 8) | (uint16_t)getLo();
		}
		FnInl(void) setWord(uint16_t word)
		{
			setHi(word >> 8);
			setLo(word & 0xFF);
		}

		FnInl(uint8_t) getLo()
		{
			uint8_t lo = 0;
			lo |= (uint8_t)cf << 0;
			lo |= (uint8_t)u1 << 1;
			lo |= (uint8_t)pf << 2;
			lo |= (uint8_t)u2 << 3;
			lo |= (uint8_t)af << 4;
			lo |= (uint8_t)u3 << 5;
			lo |= (uint8_t)zf << 6;
			lo |= (uint8_t)sf << 7;
			return lo;
		}
		FnInl(void) setLo(uint8_t lo)
		{
			cf = (lo >> 0) & 1;
			u1 = (lo >> 1) & 1;
			pf = (lo >> 2) & 1;
			u2 = (lo >> 3) & 1;
			af = (lo >> 4) & 1;
			u3 = (lo >> 5) & 1;
			zf = (lo >> 6) & 1;
			sf = (lo >> 7) & 1;
		}

		FnInl(uint8_t) getHi()
		{
			uint8_t hi = 0;
			hi |= (uint8_t)u4 << 0;
			hi |= (uint8_t)u5 << 1;
			hi |= (uint8_t)df << 2;
			hi |= (uint8_t)of << 3;
			hi |= (uint8_t)u6 << 4;
			return hi;
		}
		FnInl(void) setHi(uint8_t hi)
		{
			u4 = (hi >> 0) & 1;
			u5 = (hi >> 1) & 1;
			df = (hi >> 2) & 1;
			of = (hi >> 3) & 1;
			u6 = (hi >> 4) & 1;
		}

		/* lo */
		bool cf;
		bool u1; //1
		bool pf;
		bool u2;
		bool af;
		bool u3;
		bool zf;
		bool sf;
		/* hi */
		bool u4;
		bool u5; //1
		bool df;
		bool of;
		bool u6;
	} flags;

	FPU fpu;
};
