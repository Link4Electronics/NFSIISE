#pragma once
#include "config.h"
struct FPU
{
	static constexpr uint16_t C0 = 0b0000000100000000;
	static constexpr uint16_t C2 = 0b0000010000000000;
	static constexpr uint16_t C3 = 0b0100000000000000;

	FPU()
	{
		init();
	}

	FnInl(void) init()
	{
		control.word = 0x037F;
		status.flags = 0x0000;
	}

	FnInl(void) store(double &val)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		if ((uintptr_t)&val % 4 == 0) {
			val = st(0);
		} else {
			double tmp = st(0);
			__builtin_memcpy(&val, &tmp, sizeof(double));
		}
#else
		val = st(0);
#endif
	}
	FnInl(void) store(float &val)
	{
#if defined(__powerpc64__) || defined(__PPC64__)
		if ((uintptr_t)&val % 4 == 0) {
			val = st(0);
		} else {
			float tmp = st(0);
			__builtin_memcpy(&val, &tmp, sizeof(float));
		}
#else
		val = st(0);
#endif
	}

	FnInl(double &) st(const int32_t idx)
	{
		return regs[(status.top + idx) & 0x7];
	}

	FnInl(void) push(const double val)
	{
		status.top = (status.top - 1) & 0x7;
		regs[status.top] = val;
	}
	FnInl(void) pop()
	{
		status.top = (status.top + 1) & 0x7;
	}

	FnInl(void) compare(const double val1, const double val2)
	{
		if (val1 == val2)
		{
			status.flags = C3;
		}
		else if (val1 > val2)
		{
			status.flags = 0x0000;
		}
		else if (val1 < val2)
		{
			status.flags = C0;
		}
		else
		{
			status.flags = C3 | C2 | C0;
		}
	}

	double regs[8]; //Real x87 has 80-bit (long double) registers

	struct
	{
		uint16_t word;
	} control;

	struct
	{
		uint16_t flags; //Doesn't contain "top" value, because it's not needed here
		uint16_t top;
	} status;
};
