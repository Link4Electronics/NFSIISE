#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_43F830()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = eax; //mov
	ebx = to32i(eax+0x1F4); //mov
	and_(ebx, (int32_t)8);
	edx = ebx; //mov
	esp -= 4; _sub_43F9C0(); esp += 4; //call
	edx = ebx; //mov
	eax = ecx; //mov
	edi = esp; //mov
	esp -= 4; _sub_43F9E0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(ecx+0x118); //lea
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)(ecx+0xDC); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(esp); //mov
	eax = to32i(ecx+0x3CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ecx+0x3CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ecx+0x3CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	ebx = to32i(ecx+0x39C); //mov
	to32i(esp+8) = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43F998;
	eax = ebx; //mov
loc_43F8C6:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	esi = to32i(ecx+0x39C); //mov
	to32i(esp+0xC) = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_43F9A1;
	eax = esi; //mov
loc_43F8E8:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	edi = to32i(ecx+0x39C); //mov
	to32i(esp+0x10) = eax; //mov
	test(edi, edi);
	if (jle())
		goto loc_43F9AA;
	eax = edi; //mov
loc_43F90A:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(esp); //mov
	ebx = eax; //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0xC); //mov
	add(eax, ebp);
	edx = to32i(esp+4); //mov
	to32i(ecx+0xA8) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(ecx+0xE8) = 0; //mov
	add(eax, edx);
	to32i(ecx+0xAC) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(ecx+0xEC) = 0; //mov
	add(eax, ebx);
	to32i(ecx+0xB0) = eax; //mov
	eax = to32i(ecx+0x3A0); //mov
	to32i(ecx+0x2B8) = eax; //mov
	ah = to8i(ecx+0x3A9); //mov
	to32i(ecx+0xF0) = 0; //mov
	test(ah, (int8_t)0x10);
	if (jz())
		goto loc_43F9B3;
	edx = 1; //mov
loc_43F97F:
	ebx = to32i(dword_512228); //mov
	eax = ecx; //mov
	xor_(edx, ebx);
	esp -= 4; _sub_4627F0(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F998:
	eax = ebx; //mov
	neg(eax);
	goto loc_43F8C6;
loc_43F9A1:
	eax = esi; //mov
	neg(eax);
	goto loc_43F8E8;
loc_43F9AA:
	eax = edi; //mov
	neg(eax);
	goto loc_43F90A;
loc_43F9B3:
	xor_(edx, edx);
	goto loc_43F97F;
}
Fn(void) Game::_sub_43F9C0()
{
	push32(ecx);
	ecx = to32i(eax+0x3AC); //mov
	edx = to32i(eax+0x548); //mov
	sub(edx, ecx);
	shl(edx, (int32_t)3);
	to32i(eax+0x3CC) = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_43F9E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esp -= 4; _sub_43FB80(); esp += 4; //call
	esi = eax; //mov
	ebx = to32i(ecx+0x398); //mov
	edi = to32i(ecx+0x39C); //mov
	eax = ecx; //mov
	sub(ebx, edi);
	esp -= 4; _sub_43FD50(); esp += 4; //call
	ebx = eax; //mov
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43FA76;
	eax = 1; //mov
loc_43FA13:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43FAC9;
	edx = to32i(ecx+0x39C); //mov
	cmp(edx, to32i(ecx+0x398));
	if (jl())
		goto loc_43FA7A;
	edx = to32i(dword_50AD10); //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0x39C); //mov
	to32i(ecx+0x2AC) = esi; //mov
	sub(ebx, eax);
	to32i(ecx+0x39C) = ebx; //mov
	esi = to32i(ecx+0x398); //mov
	eax = to32i(ecx+0x39C); //mov
	to8i(ecx+0x2D8) = 0; //mov
	cmp(eax, esi);
	if (jle())
		goto loc_43FABB;
loc_43FA6A:
	to32i(ecx+0x39C) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FA76:
	xor_(eax, eax);
	goto loc_43FA13;
loc_43FA7A:
	edx = to32i(dword_50AD10); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ecx+0x39C); //mov
	to8i(ecx+0x2D8) = 0xFF; //mov
	add(edi, eax);
	to32i(ecx+0x39C) = edi; //mov
	ebp = to32i(ecx+0x398); //mov
	eax = to32i(ecx+0x39C); //mov
	to32i(ecx+0x2AC) = ebx; //mov
	cmp(eax, ebp);
	if (jle())
		goto loc_43FA6A;
	eax = ebp; //mov
	goto loc_43FA6A;
loc_43FABB:
	eax = esi; //mov
	to32i(ecx+0x39C) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FAC9:
	edx = to32i(ecx+0x39C); //mov
	cmp(edx, to32i(ecx+0x398));
	if (jg())
		goto loc_43FB26;
	edx = to32i(dword_50AD10); //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0x39C); //mov
	to32i(ecx+0x2AC) = esi; //mov
	add(ebx, eax);
	to32i(ecx+0x39C) = ebx; //mov
	esi = to32i(ecx+0x398); //mov
	eax = to32i(ecx+0x39C); //mov
	to8i(ecx+0x2D8) = 0; //mov
	cmp(eax, esi);
	if (jle())
		goto loc_43FA6A;
	eax = esi; //mov
	to32i(ecx+0x39C) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FB26:
	edx = to32i(dword_50AD10); //mov
	to8i(ecx+0x2D8) = 0xFF; //mov
	eax = ebx; //mov
	to32i(ecx+0x2AC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ecx+0x39C); //mov
	sub(edi, eax);
	ebp = to32i(ecx+0x398); //mov
	to32i(ecx+0x39C) = edi; //mov
	cmp(edi, ebp);
	if (jle())
		goto loc_43FB6B;
	edx = edi; //mov
	to32i(ecx+0x39C) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FB6B:
	edx = ebp; //mov
	to32i(ecx+0x39C) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43FB80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43FBAD;
	eax = 0xFFFFFFFF; //mov
loc_43FB96:
	ebx = to32i(ecx+0x3B8); //mov
	esi = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43FBB4;
loc_43FBA2:
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FBAD:
	eax = 1; //mov
	goto loc_43FB96;
loc_43FBB4:
	eax = to32i(ecx+0x21C); //mov
	edi = to32i(eax); //mov
	cmp(edi, (int32_t)0xF);
	if (jge())
		goto loc_43FC27;
	ebp = to32i(dword_50AD04); //mov
	ebx = to32i(dword_4D5F74+edi*4); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_43FC03;
	edx = to32i(dword_512200); //mov
	eax = to32i(ecx+0x1E8); //mov
	shl(edx, (int32_t)2);
	eax = to32i(dword_5126B0+eax*4); //mov
	edx = to32i(dword_4D57F8+edx+eax*8); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, to32i(ecx+0x39C));
	if (jl())
		goto loc_43FBA2;
loc_43FC03:
	eax = ebx; //mov
	edx = to32i(ecx+0x558); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ecx+0x39C); //mov
	cmp(eax, edi);
	if (jl())
		goto loc_43FBA2;
	cmp(ebx, edi);
	if (jl())
		goto loc_43FBA2;
loc_43FC27:
	ebx = to32i(ecx+0x39C); //mov
	sar(ebx, (int32_t)0x10);
	test(ebx, ebx);
	if (jle())
		goto loc_43FCC9;
loc_43FC38:
	cmp(ebx, (int32_t)0x6F);
	if (jge())
		goto loc_43FCD0;
	test(ebx, ebx);
	if (jle())
		goto loc_43FCDA;
loc_43FC49:
	ebx = to32i(ecx+ebx*2+0x406); //mov
	sar(ebx, (int32_t)0x10);
	ah = to8i(ecx+0x1F4); //mov
	shl(ebx, (int32_t)8);
	test(ah, (int8_t)8);
	if (jnz())
		goto loc_43FCE1;
loc_43FC65:
	cmp(to32i(dword_512200), (int32_t)0);
	if (jnz())
		goto loc_43FC88;
	cmp(to16i(ecx+6), (int16_t)0x64);
	if (jbe())
		goto loc_43FC88;
	edx = 0xC000; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
loc_43FC88:
	cmp(to32i(ecx+0x53C), (int32_t)0);
	if (jle())
		goto loc_43FCA4;
	edx = 0x14CCC; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
loc_43FCA4:
	xor_(eax, eax);
	push32(ebx);
	al = to8i(ecx+0x8C); //mov
	push32(eax);
	eax = to32i(ecx); //mov
	push32(eax);
	push32(aAiCaXDDD);
	push32(3);
	add(esp, (int32_t)0x14);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FCC9:
	neg(ebx);
	goto loc_43FC38;
loc_43FCD0:
	ebx = 0x6F; //mov
	goto loc_43FC49;
loc_43FCDA:
	xor_(ebx, ebx);
	goto loc_43FC49;
loc_43FCE1:
	eax = to32i(dword_50AC90); //mov
	imul32(esi, to32i(eax+0x39C));
	cmp(esi, (int32_t)0x20000);
	if (jge())
		goto loc_43FD03;
	cmp(to16i(eax+0x14E), (int16_t)0);
	if (jnz())
		goto loc_43FC65;
loc_43FD03:
	eax = to32i(dword_50AC90); //mov
	cmp(to16i(eax+0x14E), (int16_t)0);
	if (jnz())
		goto loc_43FC65;
	cmp(to32i(dword_512210), (int32_t)0);
	if (jnz())
		goto loc_43FD40;
	edx = 1; //mov
loc_43FD24:
	eax = ecx; //mov
	esp -= 4; _sub_4389F0(); esp += 4; //call
	edx = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	goto loc_43FC65;
loc_43FD40:
	xor_(edx, edx);
	goto loc_43FD24;
}
Fn(void) Game::_sub_43FD50()
{
	push32(ecx);
	ecx = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_43FD77;
	eax = 0xF0000; //mov
loc_43FD5C:
	cmp(to32i(dword_512204), (int32_t)0);
	if (jz())
		goto loc_43FD67;
	add(eax, eax);
loc_43FD67:
	ebx = to32i(ecx+0x558); //mov
	cmp(ebx, (int32_t)0x10000);
	if (jg())
		goto loc_43FD7E;
	pop32(ecx);
	return;
loc_43FD77:
	eax = 0xC0000; //mov
	goto loc_43FD5C;
loc_43FD7E:
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43FD90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(eax+0x3B8), (int32_t)0);
	if (jle())
		goto loc_43FDD4;
	eax = to32i(dword_50AD0C); //mov
	esi = to32i(ecx+0x3B8); //mov
	sub(esi, eax);
	eax = 0xBB8; //mov
	to32i(ecx+0x3B8) = esi; //mov
loc_43FDB9:
	ebp = to32i(ecx+0x2F0); //mov
	cmp(eax, ebp);
	if (jg())
		goto loc_43FEA8;
	if (jl())
		goto loc_43FEC7;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FDD4:
	ebx = to32i(eax+0x39C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43FE1A;
	esi = ebx; //mov
loc_43FDE0:
	ebx = (int32_t)(intptr_t)(ecx+0x2DA); //lea
	xor_(ebp, ebp);
loc_43FDE8:
	xor_(eax, eax);
	al = to8i(ebx); //mov
	eax = to32i(ecx+eax*4+0x3D0); //mov
	cmp(esi, eax);
	if (jle())
		goto loc_43FE20;
	eax = 1; //mov
loc_43FDFC:
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_43FE24;
loc_43FE02:
	test(edi, edi);
	if (jnz())
		goto loc_43FE7D;
	dec(to8i(ebx));
	eax = to32i(ecx+0x3B4); //mov
	to32i(ecx+0x3B8) = eax; //mov
	goto loc_43FDE8;
loc_43FE1A:
	esi = ebx; //mov
	neg(esi);
	goto loc_43FDE0;
loc_43FE20:
	eax = ebp; //mov
	goto loc_43FDFC;
loc_43FE24:
	xor_(edx, edx);
	eax = ecx; //mov
	dl = to8i(ebx); //mov
	esp -= 4; _sub_440260(); esp += 4; //call
	cmp(esi, eax);
	if (jl())
		goto loc_43FE02;
loc_43FE33:
	xor_(edx, edx);
	eax = ecx; //mov
	dl = to8i(ebx); //mov
	esp -= 4; _sub_440260(); esp += 4; //call
	sub(esi, eax);
	dh = to8i(ebx); //mov
	eax = esi; //mov
	test(dh, dh);
	if (jnz())
		goto loc_43FEA1;
	xor_(esi, esi);
loc_43FE4A:
	xor_(edx, edx);
	dl = to8i(ebx); //mov
	edi = to32i(ecx+0x3BC); //mov
	edx = to32i(ecx+edx*4+0x3EC); //mov
	sub(edi, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	sar(eax, (int32_t)0x10);
	goto loc_43FDB9;
loc_43FE7D:
	xor_(eax, eax);
	al = to8i(ebx); //mov
	cmp(ebp, to32i(ecx+eax*4+0x3D4));
	if (jz())
		goto loc_43FE33;
	dl = al; //mov
	inc(dl);
	to8i(ebx) = dl; //mov
	eax = to32i(ecx+0x3B4); //mov
	to32i(ecx+0x3B8) = eax; //mov
	goto loc_43FDE8;
loc_43FEA1:
	esi = 0xBB80000; //mov
	goto loc_43FE4A;
loc_43FEA8:
	sub(eax, ebp);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edi = (int32_t)(intptr_t)(eax+ebp); //lea
	to32i(ecx+0x2F0) = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43FEC7:
	edx = ebp; //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	ebx = ebp; //mov
	sub(ebx, eax);
	to32i(ecx+0x2F0) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43FEF0()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebx = to32i(esp+0x28); //mov
	ecx = eax; //mov
	eax = edx; //mov
	cmp(edx, (int32_t)0xF0000);
	if (jl())
		goto loc_43FF16;
	cmp(to32i(ecx+0x2B8), (int32_t)0x140000);
	if (jg())
		goto loc_44011C;
loc_43FF16:
	push32(esi);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	or_(ebx, (int32_t)0x40000);
	sub(eax, edx);
	to32i(ecx+0x164) = 0; //mov
	add(eax, eax);
	edx = to32i(ecx+0x1A0); //mov
	to32i(ecx+0x160) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(ecx+0x168) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	test(edx, edx);
	if (jle())
		goto loc_44014A;
	esi = edx; //mov
loc_43FF89:
	ebx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	sub(eax, ebx);
	shl(eax, (int32_t)2);
	add(eax, ebx);
	cmp(esi, to32i(dword_511D98+eax*4));
	if (jle())
		goto loc_4401B1;
	push32(edi);
	test(edx, edx);
	if (jl())
		goto loc_440153;
loc_43FFB3:
	eax = to32i(ecx+0x2B8); //mov
	test(eax, eax);
	if (jle())
		goto loc_440176;
	edx = eax; //mov
loc_43FFC3:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	cmp(eax, (int32_t)0xC000);
	if (jle())
		goto loc_44017F;
	ebx = 0xC000; //mov
loc_43FFE0:
	eax = to32i(esp+0x24); //mov
	esi = to32i(ecx+0xDC); //mov
	edx = ebx; //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	add(edx, eax);
	to32i(esp+8) = edx; //mov
	eax = to32i(esp+0x28); //mov
	edi = to32i(ecx+0xE0); //mov
	edx = ebx; //mov
	sub(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE0); //mov
	add(edx, eax);
	to32i(esp+0xC) = edx; //mov
	eax = to32i(esp+0x2C); //mov
	ebp = to32i(ecx+0xE4); //mov
	edx = ebx; //mov
	sub(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	to32i(esp+0x10) = edx; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	pop32(edi);
loc_440056:
	eax = to32i(esp+4); //mov
	to32i(ecx+0xDC) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(ecx+0xE0) = eax; //mov
	eax = to32i(esp+0xC); //mov
	to32i(ecx+0xE4) = eax; //mov
	edx = eax; //mov
	eax = to32i(ecx+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(ecx+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	sub(ebx, eax);
	eax = to32i(ecx+0xD8); //mov
	to32i(ecx+0xC4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE4); //mov
	eax = to32i(ecx+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE0); //mov
	sub(ebx, eax);
	eax = to32i(ecx+0xD0); //mov
	to32i(ecx+0xC8) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xDC); //mov
	eax = to32i(ecx+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	to32i(ecx+0xCC) = ebx; //mov
	pop32(esi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	esp += 0x10; return;
loc_44011C:
	edx = eax; //mov
	or_(ebx, (int32_t)0x40000);
	shl(eax, (int32_t)2);
	to32i(ecx+0x164) = 0; //mov
	sub(eax, edx);
	to32i(ecx+0x168) = ebx; //mov
	add(eax, eax);
	to32i(ecx+0x160) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	esp += 0x10; return;
loc_44014A:
	esi = edx; //mov
	neg(esi);
	goto loc_43FF89;
loc_440153:
	edi = to32i(esp+0x28); //mov
	ebp = to32i(esp+0x2C); //mov
	esi = to32i(esp+0x24); //mov
	neg(edi);
	neg(ebp);
	neg(esi);
	to32i(esp+0x28) = edi; //mov
	to32i(esp+0x2C) = ebp; //mov
	to32i(esp+0x24) = esi; //mov
	goto loc_43FFB3;
loc_440176:
	edx = eax; //mov
	neg(edx);
	goto loc_43FFC3;
loc_44017F:
	edx = to32i(ecx+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_4401AD;
loc_440189:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	ebx = eax; //mov
	cmp(eax, (int32_t)0x3333);
	if (jg())
		goto loc_43FFE0;
	ebx = 0x3333; //mov
	goto loc_43FFE0;
loc_4401AD:
	neg(edx);
	goto loc_440189;
loc_4401B1:
	ah = to8i(ecx+0x2D7); //mov
	xor_(ebx, ebx);
	cmp(ah, (int8_t)0x32);
	if (jbe())
		goto loc_4401C4;
	ebx = to32i(ecx+0x2E4); //mov
loc_4401C4:
	eax = to32i(ecx+0xC4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	imul32(eax, ebx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	edx = to32i(ecx+0xDC); //mov
	add(edx, eax);
	to32i(esp+4) = edx; //mov
	eax = to32i(ecx+0xC8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	imul32(eax, ebx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	edx = to32i(ecx+0xE0); //mov
	add(edx, eax);
	to32i(esp+8) = edx; //mov
	eax = to32i(ecx+0xCC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	imul32(eax, ebx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	edx = to32i(ecx+0xE4); //mov
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to32i(esp+0xC) = edx; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	goto loc_440056;
}
Fn(void) Game::_sub_440260()
{
	test(edx, edx);
	if (jle())
		goto loc_44026C;
	eax = to32i(eax+edx*4+0x3CC); //mov
	return;
loc_44026C:
	xor_(eax, eax);
}
Fn(void) Game::_sub_440270()
{
	push32(ecx);
	ecx = edx; //mov
	edx = ebx; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_4402D4;
	test(to8i(eax+0x1F4), (int8_t)8);
	if (jz())
		goto loc_4402B6;
	eax = to32i(eax+0x1E8); //mov
	eax = to32i(dword_50A9D8+eax*4); //mov
	ebx = to32i(eax+0xBC); //mov
	neg(ebx);
	eax = to32i(eax+0xC0); //mov
loc_4402A2:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, ebx);
	if (jle())
		goto loc_4402C6;
	test(ecx, ecx);
	if (jle())
		goto loc_4402C2;
	pop32(ecx);
	return;
loc_4402B6:
	eax = 0x4000; //mov
	ebx = 0x33333; //mov
	goto loc_4402A2;
loc_4402C2:
	neg(eax);
	pop32(ecx);
	return;
loc_4402C6:
	test(ecx, ecx);
	if (jle())
		goto loc_4402CE;
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_4402CE:
	neg(ebx);
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_4402D4:
	test(to8i(eax+0x1F4), (int8_t)8);
	if (jz())
		goto loc_44030A;
	eax = to32i(eax+0x1E8); //mov
	eax = to32i(dword_50A9D8+eax*4); //mov
	ebx = to32i(eax+0xBC); //mov
	eax = to32i(eax+0xC0); //mov
loc_4402F6:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_440316;
	test(ecx, ecx);
	if (jle())
		goto loc_4402C2;
	pop32(ecx);
	return;
loc_44030A:
	eax = 0x4000; //mov
	ebx = 0x33333; //mov
	goto loc_4402F6;
loc_440316:
	test(ecx, ecx);
	if (jle())
		goto loc_44031E;
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_44031E:
	neg(ebx);
	eax = ebx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_440370()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = to32i(eax+0x21C); //mov
	ebx = to32i(ebx); //mov
	cmp(ebx, (int32_t)0xF);
	if (jge())
		goto loc_4403B9;
	ecx = edx; //mov
	shl(ebx, (int32_t)3);
	esi = (int32_t)(intptr_t)(edx+0xE0); //lea
loc_44038B:
	eax = to16i(ecx); //movsx
	edx = to32i(dword_512204); //mov
	shl(eax, (int32_t)8);
	test(edx, edx);
	if (jz())
		goto loc_4403BD;
	edx = to32i(dword_4D58DC+ebx); //mov
loc_4403A1:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, (int32_t)2);
	sar(eax, (int32_t)8);
	to16i(ecx-2) = ax; //mov
	cmp(ecx, esi);
	if (jnz())
		goto loc_44038B;
loc_4403B9:
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4403BD:
	edx = to32i(dword_4D58D8+ebx); //mov
	goto loc_4403A1;
}
Fn(void) Game::_sub_4403F0()
{
	push32(edx);
	edx = to32i(dword_4D5794); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4403FD;
	pop32(edx);
	return;
loc_4403FD:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D5794) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_440410()
{
	esp -= 4; _sub_4403F0(); esp += 4; //call
	push32(edx);
	edx = to32i(dword_4D5798); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4403DD;
	pop32(edx);
	return;
loc_4403DD:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D5798) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_440420()
{
	cmp(to32i(dword_512204), (int32_t)0);
	if (jnz())
		goto loc_440435;
	xor_(eax, eax);
	to32i(dword_50AD14) = eax; //mov
	_sub_4404D0(); return; //jmp
loc_440435:
	eax = 1; //mov
	to32i(dword_50AD14) = eax; //mov
	_sub_4404D0(); return; //jmp
}
Fn(void) Game::_sub_440450()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ebx = to32i(dword_5118A0); //mov
	esi = to32i(dword_4D5794); //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_440480;
loc_440466:
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	eax = esi; //mov
	inc(ecx);
	to8i(edx+eax) = 0x32; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_440466;
loc_440480:
	to32i(dword_4D5794) = esi; //mov
	to32i(dword_5118A0) = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4404A0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = to32i(dword_5118A0); //mov
	esi = to32i(dword_4D5798); //mov
	xor_(eax, eax);
	test(ecx, ecx);
	if (jle())
		goto loc_4404C0;
	edx = esi; //mov
loc_4404B7:
	to8i(edx+eax) = 0; //mov
	inc(eax);
	cmp(eax, ecx);
	if (jl())
		goto loc_4404B7;
loc_4404C0:
	to32i(dword_4D5798) = esi; //mov
	to32i(dword_5118A0) = ecx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4404D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x88);
	sub(ebp, (int32_t)0x86);
	edx = to32i(dword_50AD14); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	esi = (int32_t)(intptr_t)dword_4D579C; //mov
	add(eax, edx);
	edi = (int32_t)(intptr_t)(ebp+0x7E); //lea
	add(esi, eax);
	push32(edi);
loc_4404FE:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_440516;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4404FE;
loc_440516:
	pop32(edi);
	eax = (int32_t)(intptr_t)(ebp+0x7E); //lea
	esp -= 4; _sub_463830(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ebp+0x7E); //lea
	edx = to32i(dword_512228); //mov
	push32(eax);
	test(edx, edx);
	if (jz())
		goto loc_44063A;
	eax = (int32_t)(intptr_t)aB; //mov
loc_440536:
	push32(eax);
	ecx = to32i(dword_51221C); //mov
	push32(ecx);
	ebx = to32i(dword_51348C); //mov
	push32(ebx);
	push32(aStr02dS_S);
	eax = (int32_t)(intptr_t)(ebp-2); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	edx = to32i(dword_50AD14); //mov
	esi = (int32_t)(intptr_t)word_4D57A6; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(esp, (int32_t)0x18);
	add(eax, edx);
	edi = (int32_t)(intptr_t)(ebp+0x7E); //lea
	add(esi, eax);
	push32(edi);
loc_440570:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_440588;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_440570;
loc_440588:
	pop32(edi);
	eax = (int32_t)(intptr_t)(ebp+0x7E); //lea
	esp -= 4; _sub_463830(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ebp+0x7E); //lea
	esi = to32i(dword_512228); //mov
	push32(eax);
	test(esi, esi);
	if (jz())
		goto loc_440644;
	eax = (int32_t)(intptr_t)aB; //mov
loc_4405A8:
	push32(eax);
	edi = to32i(dword_51221C); //mov
	push32(edi);
	eax = to32i(dword_51348C); //mov
	push32(eax);
	push32(aStr02dS_S);
	eax = (int32_t)(intptr_t)(ebp+0x3E); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x18);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(ebp-2); //lea
	esp -= 4; _sub_49D984(); esp += 4; //call
	to32i(dword_4D5794) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_44064E;
loc_4405DA:
	eax = (int32_t)(intptr_t)(ebp+0x3E); //lea
	xor_(edx, edx);
	esp -= 4; _sub_49D984(); esp += 4; //call
	to32i(dword_4D5798) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_440692;
loc_4405F1:
	cmp(to32i(dword_4D5794), (int32_t)0);
	if (jnz())
		goto loc_440620;
	to32i(dword_4DB1D8) = (int32_t)(intptr_t)aCNfs2seGameCom; //mov
	eax = (int32_t)(intptr_t)(ebp-2); //lea
	push32(eax);
	edx = 0x16D; //mov
	push32(aErrorCannotOpe);
	to32i(dword_4DB1DC) = edx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
loc_440620:
	cmp(to32i(dword_4D5798), (int32_t)0);
	if (jz())
		goto loc_4406C9;
	esp = (int32_t)(intptr_t)(ebp+0x86); //lea
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44063A:
	eax = (int32_t)(intptr_t)dword_4CBA68; //mov
	goto loc_440536;
loc_440644:
	eax = (int32_t)(intptr_t)dword_4CBA68; //mov
	goto loc_4405A8;
loc_44064E:
	edx = (int32_t)(intptr_t)aCNfs2seGameCom; //mov
	eax = to32i(dword_5118A0); //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(eax, eax);
	ecx = 0x11B; //mov
	edx = (int32_t)(intptr_t)(eax+2); //lea
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aSpeedsBuffer; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D5794) = eax; //mov
	esp -= 4; _sub_440450(); esp += 4; //call
	goto loc_4405DA;
loc_440692:
	ebx = (int32_t)(intptr_t)aCNfs2seGameCom; //mov
	esi = 0x133; //mov
	eax = (int32_t)(intptr_t)aSpdLine; //mov
	edx = to32i(dword_5118A0); //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D5798) = eax; //mov
	esp -= 4; _sub_4404A0(); esp += 4; //call
	goto loc_4405F1;
loc_4406C9:
	eax = (int32_t)(intptr_t)(ebp+0x3E); //lea
	push32(eax);
	ebx = (int32_t)(intptr_t)aCNfs2seGameCom; //mov
	esi = 0x16E; //mov
	push32(aErrorCannotOpe);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	esp = (int32_t)(intptr_t)(ebp+0x86); //lea
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_440700()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(0x190);
	push32(0x10000);
	push32(0x10000);
	ecx = 1; //mov
	ebx = 0x1F4; //mov
	push32(1);
	eax = (int32_t)(intptr_t)dword_50AD18; //mov
	xor_(edx, edx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0x10000);
	push32(0x10000);
	ebx = 0x514; //mov
	edx = 4; //mov
	push32(0xFFFFFFFF);
	eax = (int32_t)(intptr_t)dword_50AD50; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0x10A3D);
	push32(0x10000);
	ebx = 0x190; //mov
	edx = 0xC; //mov
	push32(1);
	eax = (int32_t)(intptr_t)dword_50AD6C; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0x10000);
	push32(0x10000);
	ebx = 0x320; //mov
	edx = 8; //mov
	push32(1);
	eax = (int32_t)(intptr_t)dword_50AD88; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0xFAE1);
	push32(0xF0A3);
	ebx = 0x190; //mov
	edx = 0xC; //mov
	push32(1);
	eax = (int32_t)(intptr_t)dword_50ADA4; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0x10000);
	push32(0x10000);
	ecx = 1; //mov
	ebx = 0x1194; //mov
	push32(1);
	edx = 3; //mov
	eax = (int32_t)(intptr_t)dword_50ADC0; //mov
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0xF851);
	push32(0xF333);
	ebx = 0x1194; //mov
	edx = 3; //mov
	push32(1);
	eax = (int32_t)(intptr_t)dword_50ADDC; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_440850(); esp += 4; //call
	push32(0x190);
	push32(0x10000);
	push32(0x10000);
	ecx = 1; //mov
	ebx = 0x1194; //mov
	push32(1);
	edx = 3; //mov
	eax = (int32_t)(intptr_t)dword_50ADF8; //mov
	esp -= 4; _sub_440850(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_440850()
{
	test(to8i(byte_512219), (int8_t)4);
	if (jz())
		goto loc_440888;
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0xF; //mov
loc_440866:
	edx = to32i(esp+4); //mov
	to32i(eax+8) = ecx; //mov
	to32i(eax+0xC) = edx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x14) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x18) = edx; //mov
	esp += 0x10; return;
loc_440888:
	to32i(eax+4) = ebx; //mov
	to32i(eax) = edx; //mov
	goto loc_440866;
}
Fn(void) Game::_sub_440890()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	cmp(to32i(dword_50AE14+eax*8), (int32_t)0);
	if (jnz())
		goto loc_4408A6;
	xor_(eax, eax);
	pop32(edx);
	return;
loc_4408A6:
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4408B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = ebx; //mov
	esp -= 4; _sub_440890(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_4408CC;
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4408CC:
	eax = edi; //mov
	shl(eax, (int32_t)2);
	sub(eax, edi);
	edi = (int32_t)(intptr_t)(eax*8+0); //lea
	ebx = to32i(dword_540F48); //mov
	push32(esi);
	ecx = to32i(dword_50AE18+edi); //mov
	ebp = to32i(dword_50AE20+edi); //mov
	eax = to32i(dword_50AE14+edi); //mov
	sub(ebx, ecx);
	ecx = edx; //mov
	edx = ebp; //mov
	esp -= 4; _sub_440AB0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44094E;
	test(dword_50AE24[edi], (int8_t)1);
	if (jz())
		goto loc_440944;
	edx = to32i(esi+0x18); //mov
	eax = to32i(esi+0xC); //mov
	to32i(esi+0xC) = edx; //mov
	ebx = eax; //mov
	to32i(esi+0x18) = eax; //mov
	neg(ebx);
	to32i(esi+0x18) = ebx; //mov
	edx = to32i(esi+0x1C); //mov
	eax = to32i(esi+0x10); //mov
	to32i(esi+0x10) = edx; //mov
	edi = eax; //mov
	to32i(esi+0x1C) = eax; //mov
	neg(edi);
	to32i(esi+0x1C) = edi; //mov
	edx = to32i(esi+0x20); //mov
	eax = to32i(esi+0x14); //mov
	to32i(esi+0x14) = edx; //mov
	ebp = eax; //mov
	to32i(esi+0x20) = eax; //mov
	neg(ebp);
	to32i(esi+0x20) = ebp; //mov
loc_440944:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_44094E:
	eax = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	to32i(dword_50AE18+edi) = eax; //mov
	to32i(dword_50AE14+edi) = edx; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_440970()
{
	push32(esi);
	sub(esp, (int32_t)4);
	esi = to32i(esp+0xC); //mov
	to32i(esp) = ebx; //mov
	push32(esi);
	ebx = to32i(dword_5637F4); //mov
	eax = to32i(dword_50B114+eax*4); //mov
	esp -= 4; _sub_4409F0(); esp += 4; //call
	test(to8i(esp), (int8_t)1);
	if (jnz())
		goto loc_4409A0;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	esp += 4; return;
loc_4409A0:
	edx = to32i(esi+0x18); //mov
	eax = to32i(esi+0xC); //mov
	to32i(esi+0xC) = edx; //mov
	edx = eax; //mov
	to32i(esi+0x18) = eax; //mov
	neg(edx);
	to32i(esi+0x18) = edx; //mov
	eax = to32i(esi+0x10); //mov
	edx = to32i(esi+0x1C); //mov
	ecx = eax; //mov
	to32i(esi+0x10) = edx; //mov
	neg(ecx);
	to32i(esi+0x1C) = eax; //mov
	to32i(esi+0x1C) = ecx; //mov
	edx = to32i(esi+0x20); //mov
	eax = to32i(esi+0x14); //mov
	to32i(esi+0x14) = edx; //mov
	ebx = eax; //mov
	to32i(esi+0x20) = eax; //mov
	neg(ebx);
	to32i(esi+0x20) = ebx; //mov
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4409F0()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	ebx = (int32_t)(intptr_t)(eax+8); //lea
	ax = to16i(eax+4); //mov
	and_(eax, (int32_t)0xFFFF);
	edx = (int32_t)(intptr_t)(eax-1); //lea
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, ebx);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(eax+0xC); //lea
	movsd();
	movsd();
	edi = ecx; //mov
	esi = eax; //mov
	edx = to32i(esp+0x14); //mov
	eax = esp; //mov
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_46C4A0(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_440A40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esi = edx; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	ecx = (int32_t)(intptr_t)(edx*8+0); //lea
	edx = to32i(dword_540F48); //mov
	edi = to32i(dword_50AE18+ecx); //mov
	ecx = to32i(dword_50AE14+ecx); //mov
	sub(edx, edi);
	di = to16i(ecx+6); //mov
	cmp(di, (int16_t)1);
	if (jb())
		goto loc_440AA6;
	cmp(di, (int16_t)0x190);
	if (ja())
		goto loc_440AA6;
	xor_(edi, edi);
	di = to16i(ecx+6); //mov
loc_440A82:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	xor_(edi, edi);
	edx = eax; //mov
	di = to16i(ecx+4); //mov
	sar(edx, (int32_t)0x1F);
	dec(edi);
	idiv32(edi);
	to32i(esi) = edx; //mov
	xor_(edx, edx);
	dx = to16i(ecx+4); //mov
	dec(edx);
	to32i(ebx) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_440AA6:
	edi = 6; //mov
	goto loc_440A82;
}
Fn(void) Game::_sub_440AB0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x3C);
	esi = eax; //mov
	to32i(esp+0x34) = edx; //mov
	ebp = ecx; //mov
	add(eax, (int32_t)8);
	dx = to16i(esi+6); //mov
	to32i(esp+0x38) = eax; //mov
	cmp(dx, (int16_t)1);
	if (jb())
		goto loc_440B05;
	cmp(dx, (int16_t)0x190);
	if (ja())
		goto loc_440B05;
	xor_(edi, edi);
	di = dx; //mov
loc_440ADB:
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edx = to32i(esp+0x34); //mov
	ecx = eax; //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_440B0C;
	xor_(eax, eax);
	ax = to16i(esi+4); //mov
	dec(eax);
	cmp(ecx, eax);
	if (jl())
		goto loc_440B0C;
	xor_(eax, eax);
	add(esp, (int32_t)0x3C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_440B05:
	edi = 6; //mov
	goto loc_440ADB;
loc_440B0C:
	si = to16i(esi+4); //mov
	and_(esi, (int32_t)0xFFFF);
	eax = ecx; //mov
	edx = ecx; //mov
	dec(esi);
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	ecx = edx; //mov
	eax = (int32_t)(intptr_t)(edx+1); //lea
	to32i(esp+0x30) = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	shl(edx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	ebx = eax; //mov
	eax = ecx; //mov
	shl(ecx, (int32_t)2);
	add(ecx, eax);
	eax = to32i(esp+0x38); //mov
	shl(ecx, (int32_t)2);
	edx = to32i(esp+0x30); //mov
	add(eax, ecx);
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	esi = (int32_t)(intptr_t)(eax+0xC); //lea
	add(ecx, edx);
	edx = to32i(esp+0x38); //mov
	shl(ecx, (int32_t)2);
	movsd();
	movsd();
	add(edx, ecx);
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(edx+0xC); //lea
	movsd();
	movsd();
	edi = esp; //mov
	esi = eax; //mov
	push32(ebp);
	ecx = (int32_t)(intptr_t)(esp+0x10); //lea
	movsd();
	movsd();
	movsd();
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esi = edx; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x20); //lea
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	push32(ebx);
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_46C590(); esp += 4; //call
	edx = to32i(esp+0x4C); //mov
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	esp -= 4; _sub_46C4A0(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x3C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_440BC0()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	cmp(to32i(dword_50AE14+eax), (int32_t)0);
	if (jnz())
		goto loc_440BDB;
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	return;
loc_440BDB:
	push32(ecx);
	push32(ebx);
	ebx = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
	to32i(dword_50AE18+eax) = ebx; //mov
	to32i(dword_50AE1C+eax) = ecx; //mov
	to32i(dword_50AE14+eax) = ecx; //mov
	eax = 1; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_440C00()
{
	push32(esi);
	esi = edx; //mov
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	to32i(dword_50AE20+eax*8) = esi; //mov
	to32i(dword_50AE24+eax*8) = ebx; //mov
	to32i(dword_50AE28+eax*8) = ecx; //mov
	pop32(esi);
}
Fn(void) Game::_sub_440C30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	esp -= 4; _sub_440CB0(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_440C6A;
	cmp(ecx, (int32_t)0x20);
	if (jge())
		goto loc_440C65;
	shl(eax, (int32_t)2);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	shl(eax, (int32_t)3);
	ecx = to32i(dword_50B114+ebx); //mov
	to32i(dword_50AE14+eax) = ecx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_440C6E;
loc_440C65:
	eax = 0xFFFFFFFF; //mov
loc_440C6A:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_440C6E:
	push32(edi);
	push32(esi);
	ecx = to32i(dword_540F48); //mov
	ebx = 2; //mov
	to32i(dword_50AE18+eax) = ecx; //mov
	esi = 1; //mov
	to32i(dword_50AE20+eax) = ebx; //mov
	xor_(edi, edi);
	to32i(dword_50AE24+eax) = esi; //mov
	to32i(dword_50AE28+eax) = edi; //mov
	eax = edx; //mov
	pop32(esi);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_440CB0()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_50AE14); //mov
	xor_(eax, eax);
	xor_(edx, edx);
	test(ecx, ecx);
	if (jz())
		goto loc_440CD4;
loc_440CC0:
	add(eax, (int32_t)0x18);
	inc(edx);
	cmp(eax, (int32_t)0x300);
	if (jge())
		goto loc_440CD4;
	cmp(to32i(dword_50AE14+eax), (int32_t)0);
	if (jnz())
		goto loc_440CC0;
loc_440CD4:
	cmp(edx, (int32_t)0x20);
	if (jnz())
		goto loc_440CE1;
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_440CE1:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_440CF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
loc_440CF5:
	ecx = to32i(dword_50B114+edx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_440D0B;
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x1C);
	if (jnz())
		goto loc_440CF5;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_440D0B:
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_50B114+edx) = ebx; //mov
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x1C);
	if (jnz())
		goto loc_440CF5;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_440D30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x100);
	esi = eax; //mov
	esp -= 4; _sub_440DC0(); esp += 4; //call
	xor_(ecx, ecx);
loc_440D43:
	add(ecx, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_50B110+ecx) = edx; //mov
	cmp(ecx, (int32_t)0x1C);
	if (jnz())
		goto loc_440D43;
	push32(edx);
	push32(esi);
	push32(aS02da_can);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_440D6B:
	eax = esp; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_440D83;
	eax = ecx; //mov
	add(esp, (int32_t)0x100);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_440D83:
	eax = esp; //mov
	xor_(edx, edx);
	inc(ecx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	push32(ecx);
	push32(esi);
	push32(aS02d_can);
	to32i(dword_50B114+ebx) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	add(ebx, (int32_t)4);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	cmp(ecx, (int32_t)7);
	if (jl())
		goto loc_440D6B;
	eax = ecx; //mov
	add(esp, (int32_t)0x100);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_440DC0()
{
	push32(ecx);
	push32(edx);
	ecx = 0xFFFFFFFF; //mov
	xor_(eax, eax);
loc_440DC9:
	add(eax, (int32_t)0x18);
	xor_(edx, edx);
	to32i(dword_50AE00+eax) = ecx; //mov
	to32i(dword_50AE04+eax) = edx; //mov
	to32i(dword_50ADFC+eax) = edx; //mov
	cmp(eax, (int32_t)0x300);
	if (jnz())
		goto loc_440DC9;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_440DF0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	eax = to32i(edx); //mov
	edx = to32i(ecx); //mov
	ebx = to32i(ecx+4); //mov
	sub(eax, edx);
	edx = to32i(edi+4); //mov
	sub(edx, ebx);
	ebx = to32i(edi+8); //mov
	edi = to32i(ecx+8); //mov
	to32i(esp) = eax; //mov
	sub(ebx, edi);
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = ebx; //mov
	test(eax, eax);
	if (jle())
		goto loc_440EDD;
loc_440E26:
	edi = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_440EE4;
loc_440E30:
	eax = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_440EEB;
loc_440E3A:
	cmp(edi, ebx);
	if (jle())
		goto loc_440EF2;
	sar(ebx, (int32_t)2);
loc_440E45:
	add(ebx, edi);
	cmp(eax, ebx);
	if (jle())
		goto loc_440EFA;
	sar(ebx, (int32_t)2);
loc_440E52:
	add(ebx, eax);
	eax = to32i(esp); //mov
	edx = to32i(ecx+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0x10); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x14); //mov
	add(ebp, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x24); //mov
	add(ebp, eax);
	eax = to32i(esp); //mov
	to32i(esp+0xC) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0x28); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x2C); //mov
	add(ebp, eax);
	eax = to32i(esp+8); //mov
	edi = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebp, eax);
	test(ebx, ebx);
	if (jnz())
		goto loc_440F02;
	to32i(esi+4) = ebx; //mov
	to32i(esi) = ebx; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_440EDD:
	neg(eax);
	goto loc_440E26;
loc_440EE4:
	neg(edx);
	goto loc_440E30;
loc_440EEB:
	neg(ebx);
	goto loc_440E3A;
loc_440EF2:
	sar(edi, (int32_t)2);
	goto loc_440E45;
loc_440EFA:
	sar(eax, (int32_t)2);
	goto loc_440E52;
loc_440F02:
	eax = to32i(esp+0xC); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	cmp(eax, (int32_t)0x10000);
	if (jle())
		goto loc_440F60;
	to32i(esi) = 0x10000; //mov
loc_440F28:
	ebx = edi; //mov
	eax = ebp; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	cmp(eax, (int32_t)0x10000);
	if (jg())
		goto loc_440F73;
	cmp(eax, (int32_t)0xFFFF0000);
	if (jge())
		goto loc_440F84;
	to32i(esi+4) = 0xFFFF0000; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_440F60:
	cmp(eax, (int32_t)0xFFFF0000);
	if (jge())
		goto loc_440F6F;
	to32i(esi) = 0xFFFF0000; //mov
	goto loc_440F28;
loc_440F6F:
	to32i(esi) = eax; //mov
	goto loc_440F28;
loc_440F73:
	to32i(esi+4) = 0x10000; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_440F84:
	to32i(esi+4) = eax; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_440FA0()
{
	push32(esi);
	push32(ebp);
	shl(eax, (int32_t)3);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	sub(esi, eax);
	add(esi, (int32_t)(intptr_t)dword_50B130);
	cmp(ebx, to32i(esi+0xC));
	if (jnz())
		goto loc_44103A;
	add(esi, (int32_t)0xC);
loc_440FBE:
	push32(edi);
	push32(ecx);
	ecx = to32i(edx); //mov
	eax = to32i(ebx+0x9C); //mov
	edi = to32i(edx+4); //mov
	sub(eax, ecx);
	ebp = to32i(edx+8); //mov
	ecx = eax; //mov
	eax = to32i(ebx+0xA0); //mov
	ebx = to32i(ebx+0xA4); //mov
	sub(eax, edi);
	sub(ebx, ebp);
	test(ecx, ecx);
	if (jle())
		goto loc_44105C;
loc_440FEA:
	test(eax, eax);
	if (jle())
		goto loc_441060;
loc_440FF2:
	edx = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_441064;
loc_440FFC:
	cmp(ecx, ebx);
	if (jle())
		goto loc_441068;
	sar(ebx, (int32_t)2);
loc_441007:
	add(ebx, ecx);
	cmp(edx, ebx);
	if (jle())
		goto loc_44106D;
	sar(ebx, (int32_t)2);
loc_441010:
	add(edx, ebx);
	eax = to32i(esi+4); //mov
	ebp = edx; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_441072;
	edx = to32i(esi+8); //mov
	edi = to32i(esi+0xC); //mov
loc_441022:
	to32i(esi+0xC) = edi; //mov
	to32i(esi+8) = edx; //mov
	eax = to32i(dword_540F48); //mov
	to32i(esi+4) = ebp; //mov
	to32i(esi+0x10) = eax; //mov
	eax = edx; //mov
	pop32(ecx);
	pop32(edi);
	pop32(ebp);
	pop32(esi);
	return;
loc_44103A:
	cmp(ebx, to32i(esi+0x30));
	if (jnz())
		goto loc_441047;
	add(esi, (int32_t)0x30);
	goto loc_440FBE;
loc_441047:
	cmp(ebx, to32i(esi+0x54));
	if (jnz())
		goto loc_441054;
	add(esi, (int32_t)0x54);
	goto loc_440FBE;
loc_441054:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(esi);
	return;
loc_44105C:
	neg(ecx);
	goto loc_440FEA;
loc_441060:
	neg(eax);
	goto loc_440FF2;
loc_441064:
	neg(ebx);
	goto loc_440FFC;
loc_441068:
	sar(ecx, (int32_t)2);
	goto loc_441007;
loc_44106D:
	sar(edx, (int32_t)2);
	goto loc_441010;
loc_441072:
	edi = edx; //mov
	sub(edi, eax);
	shl(edi, (int32_t)5);
	eax = 0x1160000; //mov
	ebx = (int32_t)(intptr_t)(edi+0x1160000); //lea
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = eax; //mov
	goto loc_441022;
}
Fn(void) Game::_sub_4410A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp+4) = ebx; //mov
	ebp = ecx; //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)dword_50B130; //mov
	add(edx, eax);
	to32i(esp) = edx; //mov
	eax = esi; //mov
	ebx = to32i(esp); //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	edx = to32i(dword_540F48); //mov
	sub(edx, to32i(ebx+4));
	ecx = eax; //mov
	cmp(edx, (int32_t)8);
	if (jge())
		goto loc_4410E6;
	cmp(eax, to32i(ebx));
	if (jz())
		goto loc_4411B5;
loc_4410E6:
	edx = to32i(esp); //mov
	eax = to32i(dword_540F48); //mov
	esi = to32i(edx); //mov
	to32i(edx+4) = eax; //mov
	cmp(ecx, esi);
	if (jz())
		goto loc_44110E;
	to32i(edx+0x10) = 0xFFFFFFFF; //mov
	to32i(edx+0x34) = 0xFFFFFFFF; //mov
	to32i(edx+0x58) = 0xFFFFFFFF; //mov
	to32i(edx) = ecx; //mov
loc_44110E:
	eax = to32i(esp+0x20); //mov
	to32i(eax) = 0; //mov
	eax = to32i(eax); //mov
	to32i(ebp+0) = eax; //mov
	eax = 0x7FFFFFFF; //mov
	to32i(esp+8) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	ebx = to32i(dword_511E3C); //mov
	eax = to32i(eax+0xC); //mov
	xor_(ecx, ecx);
	to32i(edx) = eax; //mov
	edx = (int32_t)(intptr_t)dword_511B48; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_441164;
loc_441147:
	eax = to32i(edx); //mov
	cmp(to8i(eax+0x8C), (int8_t)0);
	if (jz())
		goto loc_4411C9;
loc_441156:
	esi = to32i(dword_511E3C); //mov
	inc(ecx);
	add(edx, (int32_t)4);
	cmp(ecx, esi);
	if (jl())
		goto loc_441147;
loc_441164:
	edi = to32i(ebp+0); //mov
	test(edi, edi);
	if (jz())
		goto loc_441292;
	edx = to32i(esp); //mov
	cmp(edi, to32i(edx+0x54));
	if (jnz())
		goto loc_441292;
	eax = to32i(esp+0x20); //mov
	ebx = to32i(edx+0x30); //mov
	cmp(ebx, to32i(eax));
	if (jz())
		goto loc_441197;
	eax = to32i(esp); //mov
	edx = to32i(esp+0x20); //mov
	add(eax, (int32_t)0x30);
	edx = to32i(edx); //mov
	esp -= 4; _sub_441C30(); esp += 4; //call
loc_441197:
	eax = to32i(esp+0x20); //mov
	eax = to32i(eax); //mov
loc_44119D:
	to32i(ebp+0) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(eax+0x54); //mov
	to32i(edx) = eax; //mov
loc_4411AC:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4411B5:
	eax = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	eax = to32i(eax+0xC); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+0x30); //mov
	goto loc_44119D;
loc_4411C9:
	eax = to32i(esp+4); //mov
	esi = to32i(eax); //mov
	test(esi, esi);
	if (jz())
		goto loc_4411DF;
	cmp(ecx, to32i(esi+0x1E8));
	if (jz())
		goto loc_441156;
loc_4411DF:
	eax = to32i(edx); //mov
	test(to8i(eax+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_441156;
	ebx = to32i(edi); //mov
	esi = to32i(eax+0x9C); //mov
	sub(esi, ebx);
	ebx = to32i(eax+0xA0); //mov
	eax = to32i(eax+0xA4); //mov
	sub(ebx, to32i(edi+4));
	sub(eax, to32i(edi+8));
	test(esi, esi);
	if (jle())
		goto loc_441264;
loc_44120E:
	test(ebx, ebx);
	if (jle())
		goto loc_441268;
loc_441212:
	test(eax, eax);
	if (jle())
		goto loc_44126C;
loc_441216:
	cmp(esi, eax);
	if (jle())
		goto loc_441270;
	sar(eax, (int32_t)2);
loc_44121D:
	add(eax, esi);
	cmp(eax, (int32_t)0x4B0000);
	if (jge())
		goto loc_441156;
	cmp(ebx, eax);
	if (jle())
		goto loc_441275;
	sar(eax, (int32_t)2);
loc_441231:
	add(eax, ebx);
	cmp(eax, (int32_t)0x4B0000);
	if (jge())
		goto loc_441156;
	esi = to32i(esp+8); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_44127A;
	ebx = to32i(esp+0x20); //mov
	ebx = to32i(ebx); //mov
	to32i(esp+8) = eax; //mov
	to32i(ebp+0) = ebx; //mov
	ebx = to32i(esp+0x20); //mov
	eax = to32i(edx); //mov
	to32i(esp+0xC) = esi; //mov
	to32i(ebx) = eax; //mov
	goto loc_441156;
loc_441264:
	neg(esi);
	goto loc_44120E;
loc_441268:
	neg(ebx);
	goto loc_441212;
loc_44126C:
	neg(eax);
	goto loc_441216;
loc_441270:
	sar(esi, (int32_t)2);
	goto loc_44121D;
loc_441275:
	sar(ebx, (int32_t)2);
	goto loc_441231;
loc_44127A:
	cmp(eax, to32i(esp+0xC));
	if (jge())
		goto loc_441156;
	to32i(esp+0xC) = eax; //mov
	eax = to32i(edx); //mov
	to32i(ebp+0) = eax; //mov
	goto loc_441156;
loc_441292:
	eax = to32i(esp+0x20); //mov
	ebx = to32i(eax); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4412D6;
	edx = to32i(esp); //mov
	cmp(ebx, to32i(edx+0x30));
	if (jnz())
		goto loc_4412D6;
	ecx = to32i(edx+0x54); //mov
	eax = to32i(ebp+0); //mov
	cmp(eax, ecx);
	if (jz())
		goto loc_4412BB;
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_441C30(); esp += 4; //call
loc_4412BB:
	edx = to32i(esp+0x20); //mov
	eax = to32i(ebp+0); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+0x30); //mov
	to32i(ebp+0) = eax; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4412D6:
	edx = to32i(esp); //mov
	eax = to32i(ebp+0); //mov
	cmp(eax, to32i(edx+0x30));
	if (jz())
		goto loc_4412EE;
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(eax, (int32_t)0x30);
	esp -= 4; _sub_441C30(); esp += 4; //call
loc_4412EE:
	edx = to32i(esp); //mov
	eax = to32i(esp+0x20); //mov
	ebp = to32i(edx+0x54); //mov
	cmp(ebp, to32i(eax));
	if (jz())
		goto loc_4411AC;
	eax = to32i(esp); //mov
	edx = to32i(esp+0x20); //mov
	add(eax, (int32_t)0x54);
	edx = to32i(edx); //mov
	esp -= 4; _sub_441C30(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_441320()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x20);
	to32i(ebp-0x18) = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	to32i(ebp-0xC) = ecx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_44133C;
loc_441336:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_44133C:
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_440FA0(); esp += 4; //call
	to32i(ebp-0x14) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_441516;
	ebx = (int32_t)(intptr_t)(ebp-0x20); //lea
	edx = (int32_t)(intptr_t)(ecx+0x9C); //lea
	eax = esi; //mov
	esp -= 4; _sub_440DF0(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(ebp-0x18); //mov
	shl(eax, (int32_t)3);
	ecx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, ecx);
	add(eax, (int32_t)(intptr_t)dword_50B130);
	cmp(edi, (int32_t)4);
	if (jnz())
		goto loc_441569;
	add(eax, (int32_t)0x30);
loc_441380:
	to32i(ebp-0x10) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(ebp-4) = eax; //mov
	imul32(eax, eax);
	to32i(ebp-4) = eax; //mov
	cmp(eax, (int32_t)0x15F9);
	if (jge())
		goto loc_441571;
	ebx = eax; //mov
loc_4413A6:
	eax = to32i(ebp-0xC); //mov
	eax = to32i(eax+0x2F0); //mov
	cmp(eax, (int32_t)0x1770);
	if (jle())
		goto loc_4413BB;
	eax = 0x1770; //mov
loc_4413BB:
	edx = to32i(ebp-0xC); //mov
	test(to8i(edx+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_44157B;
	edx = to32i(ebp-0x14); //mov
	shl(edx, (int32_t)6);
loc_4413D1:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ecx = eax; //mov
	eax = to32i(ebp-0x10); //mov
	sub(ecx, (int32_t)0xA);
	to32i(eax+0x1C) = edi; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_4415A6;
loc_4413F1:
	cmp(to32i(ebp-0x14), (int32_t)0);
	if (jle())
		goto loc_44143D;
	eax = to32i(ebp-0x10); //mov
	edx = to32i(eax+0xC); //mov
	to32i(eax+0x18) = ecx; //mov
	shl(edx, (int32_t)2);
	to32i(eax+0x14) = ebx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = ecx; //mov
	edx = to32i(ebp-0xC); //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(ebp-0x20); //lea
	ch = to8i(edx+0x1F4); //mov
	push32(eax);
	eax = to32i(ebp-4); //mov
	test(ch, (int8_t)0x10);
	if (jz())
		goto loc_4415AD;
	edx = 1; //mov
loc_441434:
	ecx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_442580(); esp += 4; //call
loc_44143D:
	cmp(edi, (int32_t)4);
	if (jnz())
		goto loc_4415B4;
	eax = 0x10; //mov
loc_44144B:
	edi = to32i(ebp-0xC); //mov
	edi = to32i(edi+0x590); //mov
	dec(edi);
	to32i(ebp-8) = eax; //mov
	test(edi, edi);
	if (jl())
		goto loc_4414AA;
	esi = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(esi, edi);
	edx = to32i(ebp-0xC); //mov
	shl(esi, (int32_t)3);
	add(esi, edx);
loc_44146D:
	cmp(to32i(esi+0x598), (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_4415BE;
	eax = (int32_t)(intptr_t)(ebp-0x20); //lea
	ecx = to32i(esi+0x5A4); //mov
	ebx = to32i(esi+0x59D); //mov
	edx = to32i(esi+0x599); //mov
	push32(eax);
	eax = to32i(ebp-4); //mov
	sar(ebx, (int32_t)0x18);
	push32(eax);
	sar(edx, (int32_t)0x18);
	eax = to32i(ebp-8); //mov
loc_44149D:
	esp -= 4; _sub_4424F0(); esp += 4; //call
	dec(edi);
	sub(esi, (int32_t)0x18);
	test(edi, edi);
	if (jge())
		goto loc_44146D;
loc_4414AA:
	eax = to32i(ebp-0xC); //mov
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jz())
		goto loc_441626;
	cmp(to8i(eax+0x2DD), (int8_t)0);
	if (jz())
		goto loc_4415FF;
	cmp(to8i(eax+0x318), (int8_t)0);
	if (jnz())
		goto loc_4415FF;
	cmp(to32i(eax+0x31C), (int32_t)0);
	if (jnz())
		goto loc_4415FF;
	edi = to32i(ebp-0xC); //mov
	eax = to32i(dword_50B228); //mov
	cmp(eax, edi);
	if (jz())
		goto loc_4415E8;
	test(eax, eax);
	if (jnz())
		goto loc_441336;
	ecx = to32i(ebp-4); //mov
	ebx = to32i(ebp-0x14); //mov
	edx = (int32_t)(intptr_t)(ebp-0x20); //lea
	eax = to32i(ebp-0x10); //mov
	esp -= 4; _sub_4416B0(); esp += 4; //call
	to32i(dword_50B228) = edi; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_441516:
	edx = to32i(ecx+0x590); //mov
	dec(edx);
	test(edx, edx);
	if (jl())
		goto loc_441336;
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(esi, edx);
	shl(esi, (int32_t)3);
	add(esi, ecx);
loc_441533:
	cmp(to32i(esi+0x5A4), (int32_t)0);
	if (jnz())
		goto loc_441554;
	cmp(to32i(esi+0x598), (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_441554;
	cmp(edi, (int32_t)4);
	if (jnz())
		goto loc_441562;
	eax = 0x10; //mov
loc_44154F:
	esp -= 4; _sub_4447D0(); esp += 4; //call
loc_441554:
	dec(edx);
	sub(esi, (int32_t)0x18);
	test(edx, edx);
	if (jl())
		goto loc_441336;
	goto loc_441533;
loc_441562:
	eax = 0x11; //mov
	goto loc_44154F;
loc_441569:
	add(eax, (int32_t)0x54);
	goto loc_441380;
loc_441571:
	ebx = 0x15F9; //mov
	goto loc_4413A6;
loc_44157B:
	edx = to32i(edx+0x2EC); //mov
	ecx = to32i(edx+0xF0); //mov
	edx = eax; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	add(ecx, (int32_t)0x7D0);
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(ebp-0x14); //mov
	imul32(edx, eax);
	goto loc_4413D1;
loc_4415A6:
	xor_(ecx, ecx);
	goto loc_4413F1;
loc_4415AD:
	xor_(edx, edx);
	goto loc_441434;
loc_4415B4:
	eax = 0x11; //mov
	goto loc_44144B;
loc_4415BE:
	eax = (int32_t)(intptr_t)(ebp-0x20); //lea
	ebx = to32i(ebp-4); //mov
	ecx = to32i(esi+0x5A4); //mov
	edx = to32i(esi+0x599); //mov
	push32(eax);
	sar(edx, (int32_t)0x18);
	push32(ebx);
	ebx = to32i(esi+0x59D); //mov
	eax = 0xFFFFFFFF; //mov
	sar(ebx, (int32_t)0x18);
	goto loc_44149D;
loc_4415E8:
	ecx = to32i(ebp-4); //mov
	ebx = to32i(ebp-0x14); //mov
	edx = (int32_t)(intptr_t)(ebp-0x20); //lea
	eax = to32i(ebp-0x10); //mov
	esp -= 4; _sub_4416B0(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4415FF:
	ebx = to32i(ebp-0xC); //mov
	cmp(ebx, to32i(dword_50B228));
	if (jnz())
		goto loc_441336;
	eax = 0x13; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4447D0(); esp += 4; //call
	to32i(dword_50B228) = esi; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_441626:
	edi = to32i(ebp-0xC); //mov
	cmp(edi, to32i(dword_50B228));
	if (jnz())
		goto loc_441336;
	eax = to32i(dword_50B230); //mov
	test(eax, eax);
	if (jle())
		goto loc_441680;
	ebx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(dword_50B230) = ebx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4415E8;
	eax = 0x13; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	edi = to32i(dword_50B224); //mov
	dec(edi);
	to32i(dword_50B224) = edi; //mov
	if (jz())
		goto loc_441674;
	eax = to32i(dword_50B220); //mov
	to32i(dword_50B230) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_441674:
	to32i(dword_50B228) = ebx; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_441680:
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(dword_50B230) = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_441336;
	eax = to32i(dword_50B22C); //mov
	to32i(dword_50B230) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4416B0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ecx; //mov
	ecx = to32i(eax); //mov
	ecx = to32i(ecx+0x21C); //mov
	ecx = to32i(ecx); //mov
	xor_(edx, edx);
	dl = (int32_t)(intptr_t)byte_4D5980[ecx]; //mov
	imul32(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_44175C;
	ebx = 0x7F; //mov
loc_4416EB:
	eax = to32i(esi); //mov
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_441764;
	cmp(ecx, (int32_t)0xF);
	if (jz())
		goto loc_44170E;
	cmp(ecx, (int32_t)0x10);
	if (jz())
		goto loc_44170E;
	cmp(ecx, (int32_t)0x1A);
	if (jz())
		goto loc_44170E;
	cmp(ecx, (int32_t)0x1C);
	if (jnz())
		goto loc_44176B;
loc_44170E:
	esi = 0xB; //mov
loc_441713:
	edx = 0x15F9; //mov
	sub(edx, ebp);
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x15F9; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = eax; //mov
	eax = to32i(edi); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	ebp = to32i(edi+4); //mov
	add(eax, (int32_t)0x40);
	edx = ebp; //mov
	esp -= 4; _sub_442250(); esp += 4; //call
	push32(eax);
	edx = esi; //mov
	eax = 0x13; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_44175C:
	test(eax, eax);
	if (jge())
		goto loc_4416EB;
	xor_(ebx, eax);
	goto loc_4416EB;
loc_441764:
	esi = 1; //mov
	goto loc_441713;
loc_44176B:
	esi = 0xA; //mov
	goto loc_441713;
}
Fn(void) Game::_sub_441780()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x1C) = edx; //mov
	to32i(esp+0x20) = ebx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_44197A;
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jnz())
		goto loc_441982;
	to32i(ebx+0x288) = 0; //mov
loc_4417B2:
	ebx = to32i(esp+0x20); //mov
	edx = to32i(esp+0x1C); //mov
	eax = to32i(esp+0x24); //mov
	esp -= 4; _sub_440FA0(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_441A8D;
	edx = to32i(esp+0x20); //mov
	ebx = esp; //mov
	eax = to32i(esp+0x1C); //mov
	add(edx, (int32_t)0x9C);
	esp -= 4; _sub_440DF0(); esp += 4; //call
	ebx = to32i(dword_512208); //mov
	edx = eax; //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_441803;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jnz())
		goto loc_441ADB;
	to32i(esp) = 0x10000; //mov
loc_441803:
	eax = to32i(esp+0x24); //mov
	shl(eax, (int32_t)3);
	ecx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, ecx);
	add(eax, (int32_t)(intptr_t)dword_50B130);
	add(eax, (int32_t)0xC);
	to32i(esp+0x14) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x28) = eax; //mov
	imul32(eax, eax);
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x20); //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(eax+0x2EC); //mov
	edx = to32i(edx+0x2F0); //mov
	ecx = to32i(eax+0xF0); //mov
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	add(ecx, (int32_t)0x7D0);
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esp+0x10); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ecx = esp; //mov
	edx = to32i(esp+0x28); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x20); //mov
	ebp = to32i(esp+0x20); //mov
	esp -= 4; _sub_442710(); esp += 4; //call
	ebp = to32i(ebp+0x590); //mov
	dec(ebp);
	test(ebp, ebp);
	if (jl())
		goto loc_4418FC;
	eax = to32i(esp+0x20); //mov
	esi = (int32_t)(intptr_t)(ebp*4+0); //lea
	ecx = to32i(esp+0x20); //mov
	sub(esi, ebp);
	add(eax, (int32_t)0x170);
	shl(esi, (int32_t)3);
	to32i(esp+0x18) = eax; //mov
	add(esi, ecx);
loc_4418B6:
	ebx = to32i(esi+0x598); //mov
	cmp(ebx, (int32_t)6);
	if (jnz())
		goto loc_441AEE;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jz())
		goto loc_441AE7;
	edi = 7; //mov
loc_4418D5:
	ecx = to32i(esi+0x594); //mov
	cmp(ecx, (int32_t)5);
	if (jnz())
		goto loc_441B04;
loc_4418E4:
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_441B0D;
	eax = edi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
loc_4418F4:
	dec(ebp);
	sub(esi, (int32_t)0x18);
	test(ebp, ebp);
	if (jge())
		goto loc_4418B6;
loc_4418FC:
	eax = to32i(esp+0x20); //mov
	cmp(to8i(eax+0x2DD), (int8_t)0);
	if (jz())
		goto loc_441B91;
	cmp(to8i(eax+0x318), (int8_t)0);
	if (jnz())
		goto loc_441B91;
	cmp(to32i(eax+0x31C), (int32_t)0);
	if (jnz())
		goto loc_441B91;
	edx = to32i(esp+0x10); //mov
	shl(edx, (int32_t)6);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_441956;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jnz())
		goto loc_441B85;
	to32i(esp) = 0x10000; //mov
loc_441956:
	esi = to32i(esp+0x20); //mov
	ecx = esp; //mov
	edx = to32i(esp+0x28); //mov
	esi = to32i(esi+0x1E8); //mov
	ebx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_442460(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	to32i(eax+0x20) = 1; //mov
loc_44197A:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_441982:
	edx = to32i(ebx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	edx = to32i(edx+eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ebx+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x14); //mov
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	edx = to32i(edx+eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ebx+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x14); //mov
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edx = to32i(edx+eax*4+0xE); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ebx+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(dword_512228); //mov
	add(eax, ecx);
	test(ebx, ebx);
	if (jnz())
		goto loc_441A15;
	test(eax, eax);
	if (jl())
		goto loc_441A22;
loc_441A15:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_441A7A;
	test(eax, eax);
	if (jle())
		goto loc_441A7A;
loc_441A22:
	eax = to32i(esp+0x20); //mov
	cmp(to16i(eax+0x14C), (int16_t)0);
	if (jnz())
		goto loc_4417B2;
	cmp(to32i(eax+0x58C), (int32_t)0);
	if (jnz())
		goto loc_4417B2;
	ebp = to32i(eax+0x288); //mov
	inc(ebp);
	to32i(eax+0x288) = ebp; //mov
	cmp(ebp, (int32_t)0x40);
	if (jl())
		goto loc_4417B2;
	cmp(ebp, (int32_t)0x94);
	if (jge())
		goto loc_4417B2;
	test(to8i(eax+0x288), (int8_t)0x1F);
	if (jnz())
		goto loc_4417B2;
	esp -= 4; _sub_4423A0(); esp += 4; //call
	goto loc_4417B2;
loc_441A7A:
	eax = to32i(esp+0x20); //mov
	to32i(eax+0x288) = 0; //mov
	goto loc_4417B2;
loc_441A8D:
	edx = to32i(esp+0x20); //mov
	edx = to32i(edx+0x590); //mov
	dec(edx);
	test(edx, edx);
	if (jl())
		goto loc_44197A;
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(esi, edx);
	ebx = to32i(esp+0x20); //mov
	shl(esi, (int32_t)3);
	add(esi, ebx);
loc_441AB2:
	cmp(to32i(esi+0x5A4), (int32_t)0);
	if (jnz())
		goto loc_441ACD;
	ebp = to32i(esi+0x598); //mov
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_441ACD;
	eax = ebp; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
loc_441ACD:
	dec(edx);
	sub(esi, (int32_t)0x18);
	test(edx, edx);
	if (jl())
		goto loc_44197A;
	goto loc_441AB2;
loc_441ADB:
	to32i(esp) = 0xFFFF0000; //mov
	goto loc_441803;
loc_441AE7:
	edi = ebx; //mov
	goto loc_4418D5;
loc_441AEE:
	cmp(ebx, (int32_t)8);
	if (jnz())
		goto loc_441AE7;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jz())
		goto loc_441AE7;
	edi = 9; //mov
	goto loc_4418D5;
loc_441B04:
	cmp(ecx, (int32_t)3);
	if (jz())
		goto loc_4418E4;
loc_441B0D:
	test(edi, edi);
	if (jge())
		goto loc_441B59;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_441B59;
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x1C); //mov
	ecx = to32i(esp+0x28); //mov
	esp -= 4; _sub_440DF0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+8); //lea
	ebx = to32i(esi+0x59D); //mov
	edx = to32i(esi+0x599); //mov
	push32(eax);
	sar(ebx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	push32(ecx);
	eax = edi; //mov
	ecx = to32i(esi+0x5A4); //mov
	esp -= 4; _sub_444830(); esp += 4; //call
	goto loc_4418F4;
loc_441B59:
	eax = esp; //mov
	edx = to32i(esp+0x28); //mov
	ecx = to32i(esi+0x5A4); //mov
	ebx = to32i(esi+0x59D); //mov
	push32(eax);
	sar(ebx, (int32_t)0x18);
	push32(edx);
	edx = to32i(esi+0x599); //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_444830(); esp += 4; //call
	goto loc_4418F4;
loc_441B85:
	to32i(esp) = 0xFFFF0000; //mov
	goto loc_441956;
loc_441B91:
	eax = to32i(esp+0x14); //mov
	cmp(to32i(eax+0x20), (int32_t)0);
	if (jz())
		goto loc_44197A;
	eax = to32i(esp+0x20); //mov
	eax = to32i(eax+0x1E8); //mov
	esp -= 4; _sub_442430(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	to32i(eax+0x20) = 1; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_441BD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	edx = to32i(dword_50B228); //mov
	test(edx, edx);
	if (jnz())
		goto loc_441C21;
	eax = (int32_t)(intptr_t)dword_50B130; //mov
loc_441BE6:
	cmp(esi, to32i(eax+0x30));
	if (jz())
		goto loc_441BF0;
	cmp(esi, to32i(eax+0x54));
	if (jnz())
		goto loc_441C18;
loc_441BF0:
	to32i(dword_50B230) = ebx; //mov
	to32i(dword_50B22C) = ebx; //mov
	to32i(dword_50B220) = ecx; //mov
	ebp = ecx; //mov
	to32i(dword_50B224) = edi; //mov
	neg(ebp);
	to32i(dword_50B228) = esi; //mov
	to32i(dword_50B220) = ebp; //mov
loc_441C18:
	inc(edx);
	add(eax, (int32_t)0x78);
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_441BE6;
loc_441C21:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_441C30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	ebx = to32i(eax); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_441C72;
	esi = to32i(dword_50B228); //mov
	cmp(ebx, esi);
	if (jnz())
		goto loc_441C72;
	eax = 0x13; //mov
	xor_(edi, edi);
	xor_(ebx, esi);
	to32i(dword_50B230) = edi; //mov
	to32i(dword_50B22C) = edi; //mov
	to32i(dword_50B220) = edi; //mov
	to32i(dword_50B224) = ebx; //mov
	to32i(dword_50B228) = edi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
loc_441C72:
	edi = to32i(ecx+0x1C); //mov
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jg())
		goto loc_441C86;
	eax = ecx; //mov
	esp -= 4; _sub_441D90(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_441C86:
	eax = edi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	cmp(to32i(ecx+0x1C), (int32_t)4);
	if (jnz())
		goto loc_441CA9;
	eax = 0x10; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_441D90(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_441CA9:
	eax = 0x11; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_441D90(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_441CC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = (int32_t)(intptr_t)dword_50B130; //mov
	ah = 4; //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	to32i(dword_50B230) = edx; //mov
	to32i(dword_50B22C) = edx; //mov
	to32i(dword_50B220) = edx; //mov
	to32i(dword_50B224) = edx; //mov
	to32i(dword_50B228) = edx; //mov
	ebp = (int32_t)(intptr_t)(ecx+0x54); //lea
	to32i(esp) = edx; //mov
	edi = (int32_t)(intptr_t)(ecx+0x30); //lea
	to8i(byte_4D5A0C) = ah; //mov
	esi = (int32_t)(intptr_t)(ecx+0xC); //lea
loc_441D04:
	eax = esi; //mov
	to32i(ecx) = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	to32i(ecx+4) = 0; //mov
	esp -= 4; _sub_441D90(); esp += 4; //call
	eax = edi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_441D90(); esp += 4; //call
	eax = ebp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_441D90(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_441D77;
	test(ebx, ebx);
	if (jnz())
		goto loc_441D52;
	edx = to32i(dword_511E40); //mov
	eax = to32i(dword_51220C); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_441D52;
	eax = to32i(dword_511D08+eax*4); //mov
loc_441D4F:
	to32i(ecx+0xC) = eax; //mov
loc_441D52:
	eax = to32i(esp); //mov
	inc(ebx);
	add(ebp, (int32_t)0x78);
	add(edi, (int32_t)0x78);
	add(esi, (int32_t)0x78);
	add(eax, (int32_t)4);
	add(ecx, (int32_t)0x78);
	to32i(esp) = eax; //mov
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_441D04;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_441D77:
	cmp(ebx, to32i(dword_511E40));
	if (jge())
		goto loc_441D52;
	eax = to32i(esp); //mov
	eax = to32i(dword_511D08+eax); //mov
	goto loc_441D4F;
}
Fn(void) Game::_sub_441D90()
{
	to32i(eax+4) = 0xFFFFFFFF; //mov
	to32i(eax+8) = 0xFFFFFFFF; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0x20) = 0; //mov
	to32i(eax+0x14) = 0x15F9; //mov
	to32i(eax+0x18) = 0; //mov
	to32i(eax+0x1C) = 0xFFFFFFFF; //mov
	to32i(eax) = edx; //mov
}
Fn(void) Game::_sub_441DD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x6C);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_441E47;
	cmp(to32i(dword_4D9550), (int32_t)0);
	if (jnz())
		goto loc_441EB7;
	edx = esp; //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_44B710(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x64); //lea
	ebx = (int32_t)(intptr_t)(esp+0x68); //lea
	push32(edx);
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4410A0(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	edx = esp; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441780(); esp += 4; //call
	ecx = to32i(esp+0x60); //mov
	ebx = esp; //mov
	edx = 4; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441320(); esp += 4; //call
	ecx = to32i(esp+0x64); //mov
	ebx = esp; //mov
	edx = 5; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441320(); esp += 4; //call
	add(esp, (int32_t)0x6C);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_441E47:
	edx = esp; //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_44B710(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x64); //lea
	ebx = (int32_t)(intptr_t)(esp+0x68); //lea
	push32(edx);
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4410A0(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	edx = esp; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441780(); esp += 4; //call
	edx = esp; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_44B710(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x64); //lea
	ebx = (int32_t)(intptr_t)(esp+0x68); //lea
	push32(edx);
	eax = 1; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4410A0(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	edx = esp; //mov
	eax = 1; //mov
	esp -= 4; _sub_441780(); esp += 4; //call
	add(esp, (int32_t)0x6C);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_441EB7:
	edx = (int32_t)(intptr_t)(esp+0x64); //lea
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	ebx = (int32_t)(intptr_t)(esp+0x68); //lea
	push32(edx);
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)dword_5222E4; //mov
	esp -= 4; _sub_4410A0(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	edx = (int32_t)(intptr_t)dword_5222E4; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441780(); esp += 4; //call
	ecx = to32i(esp+0x60); //mov
	ebx = (int32_t)(intptr_t)dword_5222E4; //mov
	edx = 4; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441320(); esp += 4; //call
	ecx = to32i(esp+0x64); //mov
	ebx = (int32_t)(intptr_t)dword_5222E4; //mov
	edx = 5; //mov
	xor_(eax, eax);
	esp -= 4; _sub_441320(); esp += 4; //call
	add(esp, (int32_t)0x6C);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_442010()
{
	push32(edx);
	cmp(to8i(byte_4D5A19), (int8_t)0);
	if (jz())
		goto loc_442036;
	xor_(edx, edx);
	eax = to32i(dword_4D5A30); //mov
	to32i(dword_4D5A30) = edx; //mov
	xor_(dh, dh);
	to32i(dword_4D5A34) = eax; //mov
	to8i(byte_4D5A19) = dh; //mov
	pop32(edx);
	return;
loc_442036:
	eax = to32i(dword_4D5A34); //mov
	dl = 1; //mov
	to32i(dword_4D5A30) = eax; //mov
	to8i(byte_4D5A19) = dl; //mov
	pop32(edx);
}
Fn(void) Game::_sub_442050()
{
	push32(edx);
	cmp(to8i(byte_4D5A18), (int8_t)0);
	if (jz())
		goto loc_44206B;
	xor_(eax, eax);
	xor_(dh, dh);
	esp -= 4; _sub_489800(); esp += 4; //call
	to8i(byte_4D5A18) = dh; //mov
	pop32(edx);
	return;
loc_44206B:
	eax = to32i(dword_4D5A2C); //mov
	dl = 1; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	to8i(byte_4D5A18) = dl; //mov
	pop32(edx);
}
Fn(void) Game::_sub_442080()
{
	eax = 4; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 5; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 6; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 7; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 8; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 9; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0xC; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0xD; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0xE; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0xF; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x10; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x11; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x13; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x15; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x16; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = 0x17; //mov
	_sub_4447D0(); return; //jmp
}
Fn(void) Game::_sub_442130()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(0xFFFFFFFF);
	ecx = 0xFFFFFFFF; //mov
	ebx = 0x14; //mov
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_49DB40(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_442160()
{
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_49DB20(); esp += 4; //call
	xor_(edx, edx);
loc_442174:
	eax = edx; //mov
	inc(edx);
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	cmp(edx, (int32_t)0x80);
	if (jl())
		goto loc_442174;
	cmp(to8i(byte_4D5A48), (int8_t)0);
	if (jnz())
		goto loc_442194;
	esp -= 4; _sub_446390(); esp += 4; //call
	pop32(edx);
	return;
loc_442194:
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	esp -= 4; _sub_446390(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4421B0()
{
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_49DB20(); esp += 4; //call
	xor_(edx, edx);
loc_4421C4:
	eax = edx; //mov
	inc(edx);
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	cmp(edx, (int32_t)0x80);
	if (jl())
		goto loc_4421C4;
	cmp(to8i(byte_4D5A48), (int8_t)0);
	if (jnz())
		goto loc_4421DF;
	pop32(edx);
	return;
loc_4421DF:
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4421F0()
{
	push32(edx);
	eax = 0x7F; //mov
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_489800(); esp += 4; //call
	eax = 0x64; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_442220()
{
	eax = 0x7F; //mov
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	cmp(to8i(byte_4D5A18), (int8_t)0);
	if (jnz())
		goto loc_442234;
	return;
loc_442234:
	eax = to32i(dword_4D5A2C); //mov
	_sub_489800(); return; //jmp
}
Fn(void) Game::_sub_442240()
{
	xor_(eax, eax);
	_sub_49DAB0(); return; //jmp
}
Fn(void) Game::_sub_442250()
{
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_442266;
	test(edx, edx);
	if (jle())
		goto loc_442268;
	shl(eax, (int32_t)8);
	sub(eax, (int32_t)0x3FFE);
loc_442266:
	eax = ax; //cwde
	return;
loc_442268:
	edx = 0x7F; //mov
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(edx+0x80); //lea
	shl(eax, (int32_t)8);
	sub(eax, (int32_t)0x3FFE);
	eax = ax; //cwde
}
Fn(void) Game::_sub_442280()
{
	push32(esi);
	sub(esp, (int32_t)0x14);
	to32i(esp+0x10) = eax; //mov
	esi = edx; //mov
	edx = ecx; //mov
	eax = esp; //mov
	esp -= 4; _sub_485380(); esp += 4; //call
	al = to8i(esp+0x10); //mov
	ecx = to32i(dword_50B440); //mov
	to8i(esp+4) = al; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp) = esi; //mov
	cmp(eax, ecx);
	if (jz())
		goto loc_4422B4;
	cmp(eax, to32i(dword_50B434));
	if (jnz())
		goto loc_442305;
loc_4422B4:
	imul32(edx, to32i(dword_4D5A30));
	esi = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
loc_4422C7:
	to8i(esp+8) = al; //mov
	al = to8i(esp+0x1C); //mov
	esi = to32i(dword_4D96B0); //mov
	to8i(esp+9) = al; //mov
	test(esi, esi);
	if (jz())
		goto loc_44233A;
	dh = 1; //mov
	eax = to32i(dword_4D5A44); //mov
	to8i(esp+0xB) = dh; //mov
	test(eax, eax);
	if (jz())
		goto loc_442331;
	to16i(esp+0xC) = bx; //mov
loc_4422F1:
	eax = esp; //mov
	esp -= 4; _sub_4853C0(); esp += 4; //call
	inc(to32i(dword_4D5A40));
	add(esp, (int32_t)0x14);
	pop32(esi);
	esp += 4; return;
loc_442305:
	cmp(eax, to32i(dword_50B458));
	if (jz())
		goto loc_4422B4;
	cmp(eax, to32i(dword_50B464));
	if (jz())
		goto loc_4422B4;
	imul32(edx, to32i(dword_4D5A30));
	esi = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	to32i(dword_50B47C) = eax; //mov
	sar(eax, (int32_t)1);
	goto loc_4422C7;
loc_442331:
	xor_(edx, edx);
	to16i(esp+0xC) = dx; //mov
	goto loc_4422F1;
loc_44233A:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jz())
		goto loc_44234C;
	eax = 0x7F; //mov
	sub(eax, ebx);
	ebx = eax; //mov
loc_44234C:
	xor_(ah, ah);
	to8i(esp+0xB) = ah; //mov
	cmp(ebx, (int32_t)0x7F);
	if (jle())
		goto loc_44237D;
	ebx = 0x7F; //mov
loc_44235C:
	cmp(to32i(dword_4D5A44), (int32_t)0);
	if (jz())
		goto loc_442385;
	to8i(esp+7) = bl; //mov
	eax = esp; //mov
	esp -= 4; _sub_4853C0(); esp += 4; //call
	inc(to32i(dword_4D5A40));
	add(esp, (int32_t)0x14);
	pop32(esi);
	esp += 4; return;
loc_44237D:
	test(ebx, ebx);
	if (jge())
		goto loc_44235C;
	xor_(ebx, ebx);
	goto loc_44235C;
loc_442385:
	to8i(esp+7) = 0x40; //mov
	eax = esp; //mov
	esp -= 4; _sub_4853C0(); esp += 4; //call
	inc(to32i(dword_4D5A40));
	add(esp, (int32_t)0x14);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4423A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4423C8;
	push32(0x40);
	ecx = 0x7F; //mov
	edx = 5; //mov
	eax = to32i(dword_50B428); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_442280(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4423C8:
	push32(0x40);
	ecx = 0x7F; //mov
	ebx = 0x40; //mov
	edx = 5; //mov
	eax = to32i(dword_50B428); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4423F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = edx; //mov
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_442415;
	push32(0x40);
	esi = to32i(dword_50B410); //mov
	edx = eax; //mov
	xor_(ebx, ebx);
	eax = esi; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_442415:
	push32(0x40);
	ebx = 0x40; //mov
	esi = to32i(dword_50B410); //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_442430()
{
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto locret_442450;
	test(eax, eax);
	if (jz())
		goto loc_442451;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_442451;
	eax = 0xD; //mov
	_sub_4447D0(); return; //jmp
locret_442450:
	return;
loc_442451:
	eax = 0xC; //mov
	_sub_4447D0(); return; //jmp
}
Fn(void) Game::_sub_442460()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = ecx; //mov
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_4424CF;
	cmp(edx, (int32_t)0x15F9);
	if (jge())
		goto loc_4424D3;
	eax = 0x15F9; //mov
	sub(eax, edx);
	ecx = eax; //mov
	shl(ecx, (int32_t)7);
	sub(ecx, eax);
	ebp = 0x15F9; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	ecx = eax; //mov
loc_442496:
	eax = to32i(esi); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	add(eax, (int32_t)0x40);
	edx = to32i(esi+4); //mov
	esp -= 4; _sub_442250(); esp += 4; //call
	edx = eax; //mov
	test(edi, edi);
	if (jz())
		goto loc_4424D7;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4424D7;
	push32(eax);
	edx = 3; //mov
	eax = 0xD; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
loc_4424CF:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4424D3:
	xor_(ecx, ecx);
	goto loc_442496;
loc_4424D7:
	push32(edx);
	eax = 0xC; //mov
	edx = 3; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4424F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = to32i(esp+0x14); //mov
	esi = eax; //mov
	to8i(esp) = dl; //mov
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_44253D;
	cmp(edi, (int32_t)0x15F9);
	if (jge())
		goto loc_44252E;
	edx = 0x15F9; //mov
	sub(edx, edi);
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	ebp = 0x15F9; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	test(eax, eax);
	if (jnz())
		goto loc_44254F;
loc_44252E:
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44254F;
	cmp(to32i(dword_50B234+esi*8), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_442546;
loc_44253D:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_442546:
	eax = esi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	goto loc_44253D;
loc_44254F:
	ebp = to32i(esp+0x18); //mov
	edx = to32i(esp-3); //mov
	sar(ecx, (int32_t)4);
	push32(ebp);
	ebx = bl; //movsx
	eax = esi; //mov
	push32(edi);
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_444830(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_442580()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = to32i(esp+0x10); //mov
	esi = eax; //mov
	edi = edx; //mov
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_442665;
	cmp(ecx, (int32_t)0x15F9);
	if (jge())
		goto loc_44266B;
	edx = 0x15F9; //mov
	sub(edx, ecx);
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x15F9; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = eax; //mov
loc_4425C0:
	eax = to32i(ebp+0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	add(eax, (int32_t)0x40);
	edx = to32i(ebp+4); //mov
	esp -= 4; _sub_442250(); esp += 4; //call
	ebp = eax; //mov
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_442672;
	eax = 0x7F; //mov
loc_4425EB:
	ecx = to32i(esp+0x14); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_442679;
	edx = ecx; //mov
loc_4425F9:
	to32i(dword_50B484) = edx; //mov
	cmp(edx, (int32_t)0x28);
	if (jle())
		goto loc_44260E;
	to32i(dword_50B484) = 0x28; //mov
loc_44260E:
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_442628;
	edx = to32i(dword_50B484); //mov
	imul32(edx, eax);
	ecx = 0x28; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
loc_442628:
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_44264A;
	cmp(esi, (int32_t)4);
	if (jnz())
		goto loc_44268D;
	ecx = to32i(dword_4D5BEC); //mov
	edx = eax; //mov
	sub(edx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_442682;
loc_442640:
	cmp(edx, (int32_t)0x10);
	if (jle())
		goto loc_442686;
	eax = to32i(dword_4D5BEC); //mov
loc_44264A:
	test(eax, eax);
	if (jnz())
		goto loc_4426C4;
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4426C4;
	cmp(to32i(dword_50B234+esi*8), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4426B7;
loc_442665:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_44266B:
	xor_(ecx, ecx);
	goto loc_4425C0;
loc_442672:
	eax = ecx; //mov
	goto loc_4425EB;
loc_442679:
	edx = ecx; //mov
	neg(edx);
	goto loc_4425F9;
loc_442682:
	neg(edx);
	goto loc_442640;
loc_442686:
	to32i(dword_4D5BEC) = eax; //mov
	goto loc_44264A;
loc_44268D:
	cmp(esi, (int32_t)5);
	if (jnz())
		goto loc_44264A;
	ecx = to32i(dword_4D5BF0); //mov
	edx = eax; //mov
	sub(edx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_4426AC;
loc_4426A0:
	cmp(edx, (int32_t)0x10);
	if (jle())
		goto loc_4426B0;
	eax = to32i(dword_4D5BF0); //mov
	goto loc_44264A;
loc_4426AC:
	neg(edx);
	goto loc_4426A0;
loc_4426B0:
	to32i(dword_4D5BF0) = eax; //mov
	goto loc_44264A;
loc_4426B7:
	eax = esi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4426C4:
	push32(ebp);
	ecx = eax; //mov
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_442710()
{
	static const void *const off_4426E0[] = {
		&&loc_442891,
		&&loc_4428B1,
		&&loc_44379F,
		&&loc_4428B1,
		&&loc_4428B1,
		&&loc_44379F,
		&&loc_4428B1,
		&&loc_4428B1,
		&&loc_442891,
		&&loc_443771,
		&&loc_443771,
		&&loc_442891,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x70);
	esi = eax; //mov
	to32i(ebp-0x1C) = edx; //mov
	to32i(ebp-0x38) = ebx; //mov
	to32i(ebp-0x58) = ecx; //mov
	esp -= 4; _sub_445B10(); esp += 4; //call
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_4436B0;
	ecx = to32i(ebp-0x1C); //mov
	cmp(ecx, (int32_t)0x2BF2);
	if (jl())
		goto loc_4436B6;
	xor_(ebx, ebx);
	to32i(ebp-0x44) = ebx; //mov
loc_442749:
	eax = to32i(esi+0x2B8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	test(eax, eax);
	if (jle())
		goto loc_4436D8;
loc_442764:
	add(eax, eax);
	ebx = eax; //mov
	to32i(ebp-0xC) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_442775;
	ebx = 0x7F; //mov
loc_442775:
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	to32i(ebp-0x20) = eax; //mov
	eax = 8; //mov
	edx = to32i(ebp-0x20); //mov
	sub(eax, edx);
	to32i(ebp-0x20) = eax; //mov
	cmp(eax, (int32_t)3);
	if (jge())
		goto loc_4427A0;
	to32i(ebp-0x20) = 3; //mov
loc_4427A0:
	eax = to32i(ebp-0x38); //mov
	edx = 0x40; //mov
	to32i(ebp-0x18) = eax; //mov
	to32i(ebp-0x28) = edx; //mov
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_4436DF;
	to32i(ebp-0x18) = 0x64; //mov
loc_4427BE:
	eax = to32i(esi+0x184); //mov
	to32i(ebp-0x24) = eax; //mov
	eax = to32i(esi+0x14); //mov
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ecx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(ecx, (int32_t)2);
	add(eax, ecx);
	xor_(edx, edx);
	dl = to8i(eax+0x1E); //mov
	sar(edx, (int32_t)4);
	and_(edx, (int32_t)0xF);
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_4436F1;
loc_4427F1:
	eax = 1; //mov
loc_4427F6:
	to32i(ebp-0x3C) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_443705;
	cmp(to8i(byte_4D5A48), (int8_t)0);
	if (jnz())
		goto loc_442827;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_442827;
	edx = 0x7F; //mov
	xor_(eax, eax);
	cl = 1; //mov
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	to8i(byte_4D5A48) = cl; //mov
loc_442827:
	eax = to32i(ebp-0xC); //mov
	ecx = 0x5E; //mov
	add(eax, (int32_t)0x14);
	to32i(ebp-0x28) = ecx; //mov
	to32i(ebp-0xC) = eax; //mov
loc_442838:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_443760;
	al = 1; //mov
	edi = to32i(dword_4D96B0); //mov
	to8i(ebp-8) = al; //mov
	test(edi, edi);
	if (jz())
		goto loc_44373F;
	cmp(to32i(esi+0x1E8), (int32_t)0);
	if (jz())
		goto loc_443735;
	edi = 0xA3E2; //mov
loc_44286A:
	cmp(to32i(esi+0x1E8), (int32_t)0);
	if (jz())
		goto loc_443756;
	eax = 0x17; //mov
loc_44287C:
	to32i(ebp-0x10) = eax; //mov
loc_44287F:
	eax = to32i(ebp-0x24); //mov
	sub(eax, (int32_t)2);
	cmp(eax, (int32_t)0xB);
	if (ja())
		goto loc_4428B1;
	goto *off_4426E0[eax];
loc_442891:
	eax = to32i(ebp-0xC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ebx = to32i(ebp-0xC); //mov
	add(ebx, eax);
	eax = 0x18; //mov
	to32i(ebp-0xC) = ebx; //mov
	to32i(ebp-0x28) = eax; //mov
loc_4428B1:
	edx = to32i(dword_51221C); //mov
	test(edx, edx);
	if (jnz())
		goto loc_443887;
loc_4428BF:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_443895;
	eax = to32i(esi+0x1E8); //mov
loc_4428D2:
	to32i(ebp-0x14) = eax; //mov
	eax = to32i(ebp-0x14); //mov
	eax = to32i(dword_4D52F4+eax*4); //mov
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_4428E9;
	eax = 0x64; //mov
loc_4428E9:
	edx = to32i(ebp-0x14); //mov
	cmp(to32i(dword_4D52F4+edx*4), (int32_t)0);
	if (jz())
		goto loc_4438B6;
	cmp(byte_50B314[edx], (int8_t)0);
	if (jnz())
		goto loc_4438B6;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_44389C;
	ebx = edi; //mov
loc_442913:
	edx = eax; //mov
	shl(edx, (int32_t)7);
	sub(edx, eax);
	eax = to32i(ebp-0x14); //mov
	shl(eax, (int32_t)2);
	ecx = 0x64; //mov
	to32i(ebp-0x40) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = eax; //mov
	push32(0x40);
	edx = 4; //mov
	eax = to32i(dword_50B470); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	edx = to32i(ebp-0x40); //mov
	to32i(dword_50B31C+edx) = eax; //mov
	eax = to32i(ebp-0x14); //mov
	byte_50B314[eax] = 1; //mov
loc_44295C:
	cmp(to32i(ebp-0x3C), (int32_t)0);
	if (jz())
		goto loc_443941;
loc_442966:
	eax = to32i(ebp-0x14); //mov
	xor_(edx, edx);
	eax = to32i(dword_50B31C+eax*4); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
loc_442977:
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B38C[eax], (int8_t)3);
	if (jnz())
		goto loc_4429ED;
	cmp(to32i(ebp-0x3C), (int32_t)0);
	if (jz())
		goto loc_4429ED;
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_4429ED;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5A);
	if (jbe())
		goto loc_4429ED;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443953;
	ebx = edi; //mov
loc_4429B4:
	edx = to32i(dword_4D96B0); //mov
	test(edx, edx);
	if (jz())
		goto loc_443980;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	ecx = 0x6E; //mov
	xor_(edx, edx);
loc_4429D5:
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	eax = to32i(dword_50B44C); //mov
	ecx = edx; //mov
	edx = 3; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_4429ED:
	ecx = to32i(esi+0x228); //mov
	cmp(ecx, (int32_t)0x230);
	if (jl())
		goto loc_4439BE;
	cmp(ecx, (int32_t)0x6E0);
	if (jg())
		goto loc_4439BE;
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_4439BE;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jnz())
		goto loc_4439BE;
	xor_(ecx, ecx);
	edx = 1; //mov
	to32i(dword_50B40C) = ecx; //mov
	to32i(dword_50B2F4+eax*4) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = to32i(esi+0x1E8); //mov
	and_(eax, (int32_t)0x7F);
	ebx = to32i(dword_4D96B0); //mov
	to32i(dword_50B33C+edx*4) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_443996;
	ecx = 0xFFFF; //mov
loc_442A67:
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	to32i(dword_50B408) = edx; //mov
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4439AA;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_4439A0;
loc_442A8D:
	eax = edi; //mov
loc_442A8F:
	ebx = to32i(esi+0x1E8); //mov
	edx = 4; //mov
	push32(eax);
	ebx = to32i(dword_50B2F4+ebx*4); //mov
	eax = to32i(ebp-0x10); //mov
	ecx = ebx; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	byte_50B314[eax] = 1; //mov
loc_442AB9:
	edx = to32i(esi+0x228); //mov
	cmp(edx, (int32_t)0x32F);
	if (jl())
		goto loc_443A3C;
	cmp(edx, (int32_t)0x47E);
	if (jg())
		goto loc_443A3C;
	cmp(to32i(dword_51221C), (int32_t)2);
	if (jnz())
		goto loc_443A3C;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jnz())
		goto loc_443A3C;
	to32i(dword_50B2F4+eax*4) = 1; //mov
	xor_(eax, eax);
	to32i(dword_50B40C) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esi+0x1E8); //mov
	and_(edx, (int32_t)0x7F);
	to32i(dword_50B33C+eax*4) = edx; //mov
	edx = to32i(dword_4D96B0); //mov
	test(edx, edx);
	if (jz())
		goto loc_443A14;
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
loc_442B35:
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	to32i(dword_50B408) = edx; //mov
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443A28;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443A1E;
loc_442B59:
	eax = edi; //mov
loc_442B5B:
	ebx = to32i(esi+0x1E8); //mov
	push32(eax);
	xor_(edx, edx);
	ebx = to32i(dword_50B2F4+ebx*4); //mov
	eax = to32i(ebp-0x10); //mov
	ecx = ebx; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	byte_50B314[eax] = 1; //mov
loc_442B82:
	ebx = to32i(esi+0x228); //mov
	cmp(ebx, (int32_t)0x244);
	if (jl())
		goto loc_443AB8;
	cmp(ebx, (int32_t)0x2EE);
	if (jg())
		goto loc_443AB8;
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_443AB8;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jnz())
		goto loc_443AB8;
	xor_(ecx, ecx);
	edx = 1; //mov
	to32i(dword_50B40C) = ecx; //mov
	to32i(dword_50B2F4+eax*4) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = to32i(esi+0x1E8); //mov
	and_(eax, (int32_t)0x7F);
	ebx = to32i(dword_4D96B0); //mov
	to32i(dword_50B33C+edx*4) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_443A90;
	ecx = 0xFFFF; //mov
loc_442BFC:
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	to32i(dword_50B408) = edx; //mov
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443AA4;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443A9A;
loc_442C22:
	eax = edi; //mov
loc_442C24:
	ebx = to32i(esi+0x1E8); //mov
	push32(eax);
	xor_(edx, edx);
	ebx = to32i(dword_50B2F4+ebx*4); //mov
	eax = to32i(ebp-0x10); //mov
	ecx = ebx; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	byte_50B314[eax] = 1; //mov
loc_442C4B:
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jz())
		goto loc_442CA5;
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_443B0E;
loc_442C69:
	xor_(al, al);
	to8i(ebp-4) = al; //mov
loc_442C6E:
	cmp(to32i(ebp-0x3C), (int32_t)0);
	if (jz())
		goto loc_443B20;
	eax = to32i(ebp-0x10); //mov
	xor_(edx, edx);
	eax = to32i(dword_50B234+eax*8); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	xor_(ecx, ecx);
	to32i(dword_50B2F4+eax*4) = ecx; //mov
	eax = to32i(esi+0x1E8); //mov
	to32i(dword_50B33C+eax*4) = ecx; //mov
loc_442CA5:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_443CB5;
	eax = to32i(esi+0x1E8); //mov
	to32i(ebp-0x6C) = eax; //mov
loc_442CBB:
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_443D46;
	ebx = to32i(esi+0x228); //mov
	cmp(ebx, (int32_t)0x596);
	if (jle())
		goto loc_443D46;
	cmp(ebx, (int32_t)0x5D4);
	if (jge())
		goto loc_443D46;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5F);
	if (jbe())
		goto loc_442D52;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443CBF;
	ecx = edi; //mov
loc_442D05:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443CF6;
	push32(0x40);
	ebx = 0x7F; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ebx);
	to32i(ebp-0x48) = ecx; //mov
	ecx = 0x64; //mov
	ebx = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_443CEC;
	edx = 5; //mov
loc_442D43:
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x48); //mov
loc_442D4D:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_442D52:
	eax = to32i(ebp-0x6C); //mov
	byte_4D5A0F[eax] = 1; //mov
loc_442D5C:
	eax = to32i(esi+0x228); //mov
	cmp(eax, (int32_t)0x2BC);
	if (jle())
		goto loc_442E67;
	cmp(eax, (int32_t)0x3D4);
	if (jge())
		goto loc_442E67;
	cmp(to32i(dword_51221C), (int32_t)3);
	if (jnz())
		goto loc_442E67;
	ecx = 0x1F40; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x1F3B);
	if (jbe())
		goto loc_442DF7;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443D69;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	ecx = 0x28; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	ch = to8i(ebp-8); //mov
	ebx = (int32_t)(intptr_t)(edx+0x32); //lea
	test(ch, ch);
	if (jz())
		goto loc_443D56;
	edx = edi; //mov
loc_442DCF:
	ecx = 0x64; //mov
	to32i(ebp-0x50) = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	edx = 1; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x50); //mov
loc_442DF2:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_442DF7:
	ecx = 0xC8; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0xB4);
	if (jbe())
		goto loc_442E67;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443DFB;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_443DD5;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443DBE;
loc_442E34:
	ebx = 0x41C0; //mov
loc_442E39:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	ah = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(ah, ah);
	if (jz())
		goto loc_442E58;
loc_442E56:
	ebx = edi; //mov
loc_442E58:
	edx = 4; //mov
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_442E67:
	cmp(to32i(dword_51221C), (int32_t)3);
	if (jnz())
		goto loc_442EE0;
	eax = to32i(esi+0x228); //mov
	cmp(eax, (int32_t)0x3D4);
	if (jle())
		goto loc_442EE0;
	cmp(eax, (int32_t)0x62C);
	if (jge())
		goto loc_442EE0;
	ecx = 0xFA0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0xF96);
	if (jbe())
		goto loc_442EE0;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443E75;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	dh = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(dh, dh);
	if (jz())
		goto loc_443E62;
	edx = edi; //mov
loc_442ECD:
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = edx; //mov
	edx = 3; //mov
loc_442EDB:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_442EE0:
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_442F74;
	eax = to32i(esi+0x228); //mov
	cmp(eax, (int32_t)0x244);
	if (jle())
		goto loc_442F74;
	cmp(eax, (int32_t)0x2F8);
	if (jge())
		goto loc_442F74;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x61);
	if (jbe())
		goto loc_442F74;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443EDC;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	ch = to8i(ebp-8); //mov
	to32i(ebp-0x60) = eax; //mov
	test(ch, ch);
	if (jz())
		goto loc_443EBF;
	edx = edi; //mov
loc_442F49:
	ecx = 0x64; //mov
	ebx = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_443ED2;
	edx = 1; //mov
loc_442F67:
	ecx = to32i(ebp-0x60); //mov
	eax = to32i(dword_50B44C); //mov
loc_442F6F:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_442F74:
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_443007;
	eax = to32i(esi+0x228); //mov
	test(eax, eax);
	if (jle())
		goto loc_443F43;
	cmp(eax, (int32_t)0x12C);
	if (jge())
		goto loc_443F43;
loc_442F9A:
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5F);
	if (jbe())
		goto loc_443007;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443F90;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_443F6F;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443F58;
loc_442FD4:
	ebx = 0x3FFE; //mov
loc_442FD9:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	ah = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(ah, ah);
	if (jz())
		goto loc_442FF8;
loc_442FF6:
	ebx = edi; //mov
loc_442FF8:
	edx = 3; //mov
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_443007:
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_4430AE;
	ebx = to32i(esi+0x228); //mov
	cmp(ebx, (int32_t)0x523);
	if (jle())
		goto loc_4430AE;
	cmp(ebx, (int32_t)0x541);
	if (jge())
		goto loc_4430AE;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5A);
	if (jbe())
		goto loc_4430AE;
	edx = to32i(esi+0x228); //mov
	cmp(edx, (int32_t)0x532);
	if (jle())
		goto loc_443FF2;
	eax = (int32_t)(intptr_t)(edx-0x532); //lea
loc_44305D:
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	eax = 0x7F; //mov
	add(ecx, ecx);
	sub(eax, ecx);
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_443FFE;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_443083;
	ecx = 0x7F; //mov
loc_443083:
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_444005;
	ebx = edi; //mov
loc_44308F:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	edx = 5; //mov
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_4430AE:
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B38C[eax], (int8_t)3);
	if (jnz())
		goto loc_44313B;
	cmp(to32i(dword_51221C), (int32_t)8);
	if (jnz())
		goto loc_44313B;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x61);
	if (jbe())
		goto loc_44313B;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_44404F;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	ch = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(ch, ch);
	if (jz())
		goto loc_444032;
	edx = edi; //mov
loc_44310D:
	ecx = 0x64; //mov
	to32i(ebp-0x64) = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_444045;
	edx = 1; //mov
loc_44312C:
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x64); //mov
loc_443136:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_44313B:
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B38C[eax], (int8_t)4);
	if (jnz())
		goto loc_4431A6;
	cmp(to32i(dword_51221C), (int32_t)8);
	if (jnz())
		goto loc_4431A6;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x61);
	if (jbe())
		goto loc_4431A6;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4440C9;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	cl = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(cl, cl);
	if (jz())
		goto loc_4440B6;
	edx = edi; //mov
loc_443196:
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = edx; //mov
loc_44319F:
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
loc_4431A6:
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B38C[eax], (int8_t)5);
	if (jnz())
		goto loc_443223;
	cmp(to32i(dword_51221C), (int32_t)8);
	if (jnz())
		goto loc_443223;
	cmp(to32i(esi+0x228), (int32_t)0x5AA);
	if (jge())
		goto loc_443223;
	ecx = 0xC8; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0xC5);
	if (jbe())
		goto loc_443223;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_444119;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	ah = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(ah, ah);
	if (jz())
		goto loc_444106;
	edx = edi; //mov
loc_443210:
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = edx; //mov
	edx = 3; //mov
loc_44321E:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_443223:
	cmp(to32i(dword_51221C), (int32_t)0);
	if (jnz())
		goto loc_4432BD;
	edx = to32i(esi+0x228); //mov
	cmp(edx, (int32_t)0x4CE);
	if (jle())
		goto loc_4432BD;
	cmp(edx, (int32_t)0x4F6);
	if (jge())
		goto loc_4432BD;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x61);
	if (jbe())
		goto loc_4432BD;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_44419D;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_444177;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_444160;
loc_443284:
	ebx = 0x41C0; //mov
loc_443289:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dh = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dh, dh);
	if (jz())
		goto loc_4432A8;
loc_4432A6:
	ebx = edi; //mov
loc_4432A8:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)1);
	edx = (int32_t)(intptr_t)(eax+2); //lea
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_4432BD:
	cmp(to32i(dword_51221C), (int32_t)0);
	if (jnz())
		goto loc_443345;
	ebx = to32i(esi+0x228); //mov
	cmp(ebx, (int32_t)0x235);
	if (jle())
		goto loc_443345;
	cmp(ebx, (int32_t)0x258);
	if (jge())
		goto loc_443345;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5A);
	if (jbe())
		goto loc_443345;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_44421A;
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	cl = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(cl, cl);
	if (jz())
		goto loc_444207;
	edx = edi; //mov
loc_443326:
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = to32i(dword_50B44C); //mov
	and_(eax, (int32_t)1);
	to32i(ebp-0x70) = ecx; //mov
	ecx = ebx; //mov
	ebx = edx; //mov
	edx = eax; //mov
	eax = to32i(ebp-0x70); //mov
loc_443340:
	esp -= 4; _sub_442280(); esp += 4; //call
loc_443345:
	cmp(to32i(dword_51221C), (int32_t)6);
	if (jnz())
		goto loc_4433DB;
	ebx = to32i(esi+0x228); //mov
	cmp(ebx, (int32_t)0x17C);
	if (jle())
		goto loc_4433DB;
	cmp(ebx, (int32_t)0x2BC);
	if (jge())
		goto loc_4433DB;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5F);
	if (jbe())
		goto loc_4433DB;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4442A6;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_444285;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44426E;
loc_4433A6:
	eax = 0x3FFE; //mov
loc_4433AB:
	ebx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	ah = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(ah, ah);
	if (jz())
		goto loc_4433CC;
loc_4433CA:
	ebx = edi; //mov
loc_4433CC:
	edx = 1; //mov
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_4433DB:
	cmp(to32i(dword_51221C), (int32_t)6);
	if (jnz())
		goto loc_443471;
	edx = to32i(esi+0x228); //mov
	cmp(edx, (int32_t)0x488);
	if (jle())
		goto loc_443471;
	cmp(edx, (int32_t)0x50A);
	if (jge())
		goto loc_443471;
	ecx = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x5F);
	if (jbe())
		goto loc_443471;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_444349;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_444328;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_444311;
loc_44343C:
	eax = 0xC002; //mov
loc_443441:
	ebx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dh = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dh, dh);
	if (jz())
		goto loc_443462;
loc_443460:
	ebx = edi; //mov
loc_443462:
	edx = 1; //mov
	eax = to32i(dword_50B44C); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_443471:
	cmp(to32i(ebp-0x1C), (int32_t)4);
	if (jle())
		goto loc_443496;
	eax = to32i(ebp-0xC); //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	add(ecx, ecx);
	ebx = 0xA; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(ebp-0xC) = eax; //mov
loc_443496:
	ebx = to32i(ebp-0x1C); //mov
	cmp(ebx, (int32_t)4);
	if (jge())
		goto loc_4443B0;
	ebx = 2; //mov
loc_4434A7:
	eax = to32i(ebp-0xC); //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4434B4;
	eax = 0x7F; //mov
loc_4434B4:
	ecx = to32i(esi+0x1E8); //mov
	xor_(edx, edx);
	shl(ecx, (int32_t)2);
	dl = to8i(esi+0x2D7); //mov
	edi = to32i(dword_50B364+ecx); //mov
	to32i(ebp-0x2C) = eax; //mov
	cmp(edx, edi);
	if (jl())
		goto loc_4443C9;
	sub(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
loc_4434E1:
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	to32i(dword_50B364+ecx) = edx; //mov
	eax = to32i(esi+0x1E8); //mov
	eax = to32i(dword_50B364+eax*4); //mov
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_443503;
	eax = 0xFF; //mov
loc_443503:
	sar(eax, (int32_t)1);
	xor_(edx, edx);
	dl = (int32_t)(intptr_t)byte_4D5B49[eax]; //mov
	to32i(ebp-0x34) = edx; //mov
	edx = 0x80; //mov
	sub(edx, eax);
	al = (int32_t)(intptr_t)byte_4D5B49[edx]; //mov
	ecx = to32i(ebp-0x44); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(dword_512214); //mov
	to32i(ebp-0x30) = eax; //mov
	cmp(edi, (int32_t)2);
	if (jl())
		goto loc_4443DD;
	edx = to32i(ebp-0x58); //mov
	eax = to32i(ebp-0x58); //mov
	edx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	edi = (int32_t)(intptr_t)(eax+0x40); //lea
loc_44354F:
	edx = to32i(ebp-0x18); //mov
	add(edx, (int32_t)0x28);
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	ecx = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_443571;
	ecx = 0x7F; //mov
loc_443571:
	eax = to32i(ebp-0x30); //mov
	imul32(eax, ecx);
	sar(eax, (int32_t)7);
	to32i(ebp-0x30) = eax; //mov
	eax = to32i(ebp-0x34); //mov
	imul32(eax, ecx);
	sar(eax, (int32_t)7);
	to32i(ebp-0x34) = eax; //mov
	imul32(ecx, to32i(ebp-0x2C));
	sar(ecx, (int32_t)7);
	edx = to32i(dword_512208); //mov
	to32i(ebp-0x2C) = ecx; //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4435BA;
	cmp(to32i(dword_4D5A44), (int32_t)0);
	if (jz())
		goto loc_4443F1;
	cmp(to32i(esi+0x1E8), (int32_t)0);
	if (jz())
		goto loc_4443E7;
	xor_(edi, edi);
loc_4435BA:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4443FB;
	cmp(to32i(esi+0x1E8), (int32_t)0);
	if (jz())
		goto loc_4443FB;
	edx = to32i(ebp-0x2C); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = to32i(dword_50B47C); //mov
	sar(eax, cl);
	sar(edx, (int32_t)1);
	add(edx, eax);
	eax = to32i(dword_50B28C); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x28); //mov
	eax = to32i(dword_50B28C); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B28C); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	edx = to32i(ebp-0x34); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = eax; //mov
	sar(eax, (int32_t)1);
	sar(edx, cl);
	add(edx, eax);
	eax = to32i(dword_50B23C); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x18); //mov
	eax = to32i(dword_50B23C); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B23C); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	edx = to32i(ebp-0x30); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = eax; //mov
	sar(eax, (int32_t)1);
	sar(edx, cl);
	add(edx, eax);
	eax = to32i(dword_50B24C); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x18); //mov
	eax = to32i(dword_50B24C); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B24C); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
loc_4436B0:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4436B6:
	eax = 0x2BF2; //mov
	sub(eax, ecx);
	edx = eax; //mov
	shl(edx, (int32_t)7);
	sub(edx, eax);
	ecx = 0x2BF2; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(ebp-0x44) = eax; //mov
	goto loc_442749;
loc_4436D8:
	neg(eax);
	goto loc_442764;
loc_4436DF:
	test(eax, eax);
	if (jge())
		goto loc_4427BE;
	xor_(edx, edx);
	to32i(ebp-0x18) = edx; //mov
	goto loc_4427BE;
loc_4436F1:
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jz())
		goto loc_4427F1;
	xor_(eax, eax);
	goto loc_4427F6;
loc_443705:
	cmp(to8i(byte_4D5A48), (int8_t)0);
	if (jz())
		goto loc_442838;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_442838;
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	xor_(dl, dl);
	to8i(byte_4D5A48) = dl; //mov
	goto loc_442838;
loc_443735:
	edi = 0x3FFE; //mov
	goto loc_44286A;
loc_44373F:
	cmp(to32i(esi+0x1E8), (int32_t)0);
	if (jnz())
		goto loc_44286A;
	edi = 0x7F; //mov
	goto loc_44286A;
loc_443756:
	eax = 0x12; //mov
	goto loc_44287C;
loc_443760:
	xor_(ch, ch);
	to8i(ebp-8) = ch; //mov
	to32i(ebp-0x10) = 0x12; //mov
	goto loc_44287F;
loc_443771:
	eax = to32i(ebp-0xC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ecx = 0x18; //mov
	edx = to32i(ebp-0xC); //mov
	to32i(ebp-0x28) = ecx; //mov
	add(edx, eax);
	eax = to32i(dword_51221C); //mov
	to32i(ebp-0xC) = edx; //mov
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_4428B1;
loc_44379F:
	ah = to8i(byte_4D5BE8); //mov
	xor_(edx, edx);
	inc(ah);
	ecx = to32i(ebp-0x20); //mov
	dl = ah; //mov
	to8i(byte_4D5BE8) = ah; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_4D5BE8) = dl; //mov
	test(dl, dl);
	if (jnz())
		goto loc_4428B1;
	cmp(to32i(esi+0x15C), (int32_t)0x3333);
	if (jge())
		goto loc_4428B1;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_44382A;
	edx = to32i(ebp-0x24); //mov
	cmp(edx, (int32_t)7);
	if (jnz())
		goto loc_44381A;
loc_4437EA:
	eax = 0x28; //mov
loc_4437EF:
	push32(eax);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	bl = to8i(ebp-8); //mov
	ecx = eax; //mov
	test(bl, bl);
	if (jz())
		goto loc_443826;
	ebx = edi; //mov
loc_443806:
	edx = 0x1D; //mov
	eax = to32i(dword_50B428); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	goto loc_4428B1;
loc_44381A:
	cmp(edx, (int32_t)0xC);
	if (jz())
		goto loc_4437EA;
	eax = 0x40; //mov
	goto loc_4437EF;
loc_443826:
	xor_(ebx, ebx);
	goto loc_443806;
loc_44382A:
	ecx = to32i(ebp-0x24); //mov
	cmp(ecx, (int32_t)7);
	if (jnz())
		goto loc_443862;
loc_443832:
	eax = 0x28; //mov
loc_443837:
	push32(eax);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	dh = to8i(ebp-8); //mov
	ecx = eax; //mov
	test(dh, dh);
	if (jz())
		goto loc_44386E;
	ebx = edi; //mov
	edx = 0x1D; //mov
	eax = to32i(dword_50B428); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	goto loc_4428B1;
loc_443862:
	cmp(ecx, (int32_t)0xC);
	if (jz())
		goto loc_443832;
	eax = 0x40; //mov
	goto loc_443837;
loc_44386E:
	ebx = 0x40; //mov
	edx = 0x1D; //mov
	eax = to32i(dword_50B428); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	goto loc_4428B1;
loc_443887:
	cmp(edx, (int32_t)3);
	if (jz())
		goto loc_4428BF;
	goto loc_442977;
loc_443895:
	xor_(eax, eax);
	goto loc_4428D2;
loc_44389C:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4438AC;
	xor_(ebx, ebx);
	goto loc_442913;
loc_4438AC:
	ebx = 0x40; //mov
	goto loc_442913;
loc_4438B6:
	edx = to32i(ebp-0x14); //mov
	shl(edx, (int32_t)2);
	cmp(to32i(dword_4D52F4+edx), (int32_t)0);
	if (jnz())
		goto loc_4438D1;
	ecx = to32i(ebp-0x14); //mov
	cmp(byte_50B314[ecx], (int8_t)0);
	if (jnz())
		goto loc_44391D;
loc_4438D1:
	ecx = to32i(ebp-0x14); //mov
	shl(ecx, (int32_t)2);
	cmp(to32i(dword_4D52F4+ecx), (int32_t)0);
	if (jz())
		goto loc_44295C;
	edx = to32i(ebp-0x14); //mov
	cmp(byte_50B314[edx], (int8_t)0);
	if (jz())
		goto loc_44295C;
	edx = to32i(dword_4D5A30); //mov
	imul32(edx, eax);
	ebx = 0x64; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ecx = to32i(dword_50B31C+ecx); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	goto loc_44295C;
loc_44391D:
	ebx = 0xFFFFFFFF; //mov
	eax = to32i(dword_50B31C+edx); //mov
	edx = 5; //mov
	esp -= 4; _sub_486080(); esp += 4; //call
	eax = ecx; //mov
	xor_(cl, cl);
	byte_50B314[eax] = cl; //mov
	goto loc_44295C;
loc_443941:
	cmp(to8i(byte_4D5A19), (int8_t)0);
	if (jz())
		goto loc_442966;
	goto loc_442977;
loc_443953:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443971;
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	ebx = edx; //mov
	goto loc_4429B4;
loc_443971:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	goto loc_4429B4;
loc_443980:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	ecx = 0x6E; //mov
	goto loc_4429D5;
loc_443996:
	ecx = 0x7F; //mov
	goto loc_442A67;
loc_4439A0:
	eax = to32i(dword_50B40C); //mov
	goto loc_442A8F;
loc_4439AA:
	cmp(to8i(ebp-8), (int8_t)0);
	if (jnz())
		goto loc_442A8D;
	eax = to32i(dword_50B40C); //mov
	goto loc_442A8F;
loc_4439BE:
	edx = to32i(esi+0x228); //mov
	cmp(edx, (int32_t)0x230);
	if (jge())
		goto loc_443A07;
loc_4439CC:
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_442AB9;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jz())
		goto loc_442AB9;
	eax = to32i(ebp-0x10); //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	xor_(dl, dl);
	byte_50B314[eax] = dl; //mov
	goto loc_442AB9;
loc_443A07:
	cmp(edx, (int32_t)0x6E0);
	if (jg())
		goto loc_4439CC;
	goto loc_442AB9;
loc_443A14:
	ecx = 0x7F; //mov
	goto loc_442B35;
loc_443A1E:
	eax = to32i(dword_50B40C); //mov
	goto loc_442B5B;
loc_443A28:
	cmp(to8i(ebp-8), (int8_t)0);
	if (jnz())
		goto loc_442B59;
	eax = to32i(dword_50B40C); //mov
	goto loc_442B5B;
loc_443A3C:
	eax = to32i(esi+0x228); //mov
	cmp(eax, (int32_t)0x32F);
	if (jge())
		goto loc_443A84;
loc_443A49:
	cmp(to32i(dword_51221C), (int32_t)2);
	if (jnz())
		goto loc_442B82;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jz())
		goto loc_442B82;
	eax = to32i(ebp-0x10); //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	xor_(dl, dl);
	byte_50B314[eax] = dl; //mov
	goto loc_442B82;
loc_443A84:
	cmp(eax, (int32_t)0x47E);
	if (jg())
		goto loc_443A49;
	goto loc_442B82;
loc_443A90:
	ecx = 0x7F; //mov
	goto loc_442BFC;
loc_443A9A:
	eax = to32i(dword_50B40C); //mov
	goto loc_442C24;
loc_443AA4:
	cmp(to8i(ebp-8), (int8_t)0);
	if (jnz())
		goto loc_442C22;
	eax = to32i(dword_50B40C); //mov
	goto loc_442C24;
loc_443AB8:
	ecx = to32i(esi+0x228); //mov
	cmp(ecx, (int32_t)0x244);
	if (jge())
		goto loc_443B01;
loc_443AC6:
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_442C4B;
	eax = to32i(esi+0x1E8); //mov
	cmp(byte_50B314[eax], (int8_t)0);
	if (jz())
		goto loc_442C4B;
	eax = to32i(ebp-0x10); //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	eax = to32i(esi+0x1E8); //mov
	xor_(dl, dl);
	byte_50B314[eax] = dl; //mov
	goto loc_442C4B;
loc_443B01:
	cmp(ecx, (int32_t)0x2EE);
	if (jg())
		goto loc_443AC6;
	goto loc_442C4B;
loc_443B0E:
	cmp(edx, (int32_t)4);
	if (jz())
		goto loc_442C69;
	to8i(ebp-4) = 4; //mov
	goto loc_442C6E;
loc_443B20:
	eax = to32i(esi+0x1E8); //mov
	edx = to32i(dword_50B2F4+eax*4); //mov
	cmp(edx, to32i(dword_50B33C+eax*4));
	if (jz())
		goto loc_443C9B;
	ebx = to32i(dword_50B408); //mov
	eax = to32i(dword_50B40C); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_443C1E;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443C01;
	cmp(eax, ebx);
	if (jge())
		goto loc_443BE9;
	ebx = (int32_t)(intptr_t)(eax+0x80); //lea
	to32i(dword_50B40C) = ebx; //mov
loc_443B6E:
	eax = to32i(dword_50B40C); //mov
	test(eax, eax);
	if (jl())
		goto loc_443BF7;
	cmp(eax, (int32_t)0xFFFF);
	if (jle())
		goto loc_443B8C;
	to32i(dword_50B40C) = 0xFFFF; //mov
loc_443B8C:
	ecx = to32i(esi+0x1E8); //mov
	shl(ecx, (int32_t)2);
	eax = to32i(dword_50B2F4+ecx); //mov
	cmp(eax, to32i(dword_50B33C+ecx));
	if (jge())
		goto loc_443C52;
	inc(eax);
	to32i(dword_50B2F4+ecx) = eax; //mov
loc_443BAE:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443C6A;
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443C60;
	eax = edi; //mov
loc_443BC7:
	ebx = to32i(esi+0x1E8); //mov
	xor_(edx, edx);
	push32(eax);
	dl = to8i(ebp-4); //mov
	ebx = to32i(dword_50B2F4+ebx*4); //mov
	eax = to32i(ebp-0x10); //mov
	ecx = ebx; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	goto loc_442CA5;
loc_443BE9:
	ecx = (int32_t)(intptr_t)(eax-0x80); //lea
	to32i(dword_50B40C) = ecx; //mov
	goto loc_443B6E;
loc_443BF7:
	xor_(ebx, ebx);
	to32i(dword_50B40C) = ebx; //mov
	goto loc_443B8C;
loc_443C01:
	cmp(eax, ebx);
	if (jge())
		goto loc_443C10;
	inc(eax);
	to32i(dword_50B40C) = eax; //mov
	goto loc_443B8C;
loc_443C10:
	ebx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(dword_50B40C) = ebx; //mov
	goto loc_443B8C;
loc_443C1E:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443C40;
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	to32i(dword_50B408) = edx; //mov
	goto loc_443B8C;
loc_443C40:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	to32i(dword_50B408) = eax; //mov
	goto loc_443B8C;
loc_443C52:
	ebx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(dword_50B2F4+ecx) = ebx; //mov
	goto loc_443BAE;
loc_443C60:
	eax = to32i(dword_50B40C); //mov
	goto loc_443BC7;
loc_443C6A:
	cmp(to8i(ebp-8), (int8_t)0);
	if (jz())
		goto loc_443C94;
	eax = edi; //mov
loc_443C72:
	ebx = to32i(esi+0x1E8); //mov
	xor_(edx, edx);
	push32(eax);
	dl = to8i(ebp-4); //mov
	ebx = to32i(dword_50B2F4+ebx*4); //mov
	eax = to32i(ebp-0x10); //mov
	ecx = ebx; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	goto loc_442CA5;
loc_443C94:
	eax = to32i(dword_50B40C); //mov
	goto loc_443C72;
loc_443C9B:
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = to32i(esi+0x1E8); //mov
	and_(eax, (int32_t)0x7F);
	to32i(dword_50B33C+edx*4) = eax; //mov
	goto loc_442CA5;
loc_443CB5:
	xor_(edx, edx);
	to32i(ebp-0x6C) = edx; //mov
	goto loc_442CBB;
loc_443CBF:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_443CDD;
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	ecx = edx; //mov
	goto loc_442D05;
loc_443CDD:
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x7F);
	goto loc_442D05;
loc_443CEC:
	edx = 6; //mov
	goto loc_442D43;
loc_443CF6:
	push32(0x40);
	ebx = 0x7F; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ebx);
	to32i(ebp-0x5C) = ecx; //mov
	ecx = 0x64; //mov
	ebx = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_443D32;
	edx = 5; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x5C); //mov
	goto loc_442D4D;
loc_443D32:
	edx = 6; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x5C); //mov
	goto loc_442D4D;
loc_443D46:
	eax = to32i(ebp-0x6C); //mov
	xor_(dh, dh);
	byte_4D5A0F[eax] = dh; //mov
	goto loc_442D5C;
loc_443D56:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_442DCF;
loc_443D69:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	ecx = 0x28; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	add(edx, (int32_t)0x32);
	cl = to8i(ebp-8); //mov
	to32i(ebp-0x54) = edx; //mov
	test(cl, cl);
	if (jz())
		goto loc_443DB4;
	eax = edi; //mov
loc_443D8F:
	ecx = 0x64; //mov
	ebx = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	edx = 1; //mov
	ecx = to32i(ebp-0x54); //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_442DF2;
loc_443DB4:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	goto loc_443D8F;
loc_443DBE:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_442E34;
	ebx = 0xC002; //mov
	goto loc_442E39;
loc_443DD5:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443DE8;
loc_443DDE:
	ebx = 0xC002; //mov
	goto loc_442E39;
loc_443DE8:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443DDE;
	ebx = 0x3FFE; //mov
	goto loc_442E39;
loc_443DFB:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_443E45;
	eax = to32i(dword_512228); //mov
	test(eax, eax);
	if (jz())
		goto loc_443E3A;
loc_443E0D:
	eax = 0x7F; //mov
loc_443E12:
	ebx = eax; //mov
loc_443E14:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	al = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(al, al);
	if (jz())
		goto loc_442E58;
	goto loc_442E56;
loc_443E3A:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443E0D;
	goto loc_443E12;
loc_443E45:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443E52;
loc_443E4E:
	xor_(ebx, ebx);
	goto loc_443E14;
loc_443E52:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443E4E;
	ebx = 0x7F; //mov
	goto loc_443E14;
loc_443E62:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_442ECD;
loc_443E75:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dl = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dl, dl);
	if (jz())
		goto loc_443EA6;
	ebx = edi; //mov
	edx = 3; //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_442EDB;
loc_443EA6:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	edx = 3; //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_442EDB;
loc_443EBF:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_442F49;
loc_443ED2:
	edx = 2; //mov
	goto loc_442F67;
loc_443EDC:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	cl = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(cl, cl);
	if (jz())
		goto loc_443F25;
	eax = edi; //mov
loc_443EFB:
	ecx = 0x64; //mov
	to32i(ebp-0x4C) = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_443F2F;
	edx = 1; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x4C); //mov
	goto loc_442F6F;
loc_443F25:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	goto loc_443EFB;
loc_443F2F:
	edx = 2; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x4C); //mov
	goto loc_442F6F;
loc_443F43:
	cmp(to32i(esi+0x228), (int32_t)0x708);
	if (jg())
		goto loc_442F9A;
	goto loc_443007;
loc_443F58:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_442FD4;
	ebx = 0xC002; //mov
	goto loc_442FD9;
loc_443F6F:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443F82;
loc_443F78:
	ebx = 0xC002; //mov
	goto loc_442FD9;
loc_443F82:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443F78;
	goto loc_442FD4;
loc_443F90:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_443FDA;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443FCF;
loc_443FA2:
	eax = 0x7F; //mov
loc_443FA7:
	ebx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	al = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(al, al);
	if (jz())
		goto loc_442FF8;
	goto loc_442FF6;
loc_443FCF:
	eax = to32i(dword_51222C); //mov
	test(eax, eax);
	if (jnz())
		goto loc_443FA2;
	goto loc_443FA7;
loc_443FDA:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_443FE7;
loc_443FE3:
	xor_(eax, eax);
	goto loc_443FA7;
loc_443FE7:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443FE3;
	goto loc_443FA2;
loc_443FF2:
	eax = 0x532; //mov
	sub(eax, edx);
	goto loc_44305D;
loc_443FFE:
	xor_(ecx, eax);
	goto loc_443083;
loc_444005:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_444023;
	ebx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ebx);
	ebx = edx; //mov
	goto loc_44308F;
loc_444023:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	goto loc_44308F;
loc_444032:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_44310D;
loc_444045:
	edx = 2; //mov
	goto loc_44312C;
loc_44404F:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x3F);
	cl = to8i(ebp-8); //mov
	add(ebx, (int32_t)0x40);
	test(cl, cl);
	if (jz())
		goto loc_444098;
	eax = edi; //mov
loc_44406E:
	ecx = 0x64; //mov
	to32i(ebp-0x68) = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_4440A2;
	edx = 1; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x68); //mov
	goto loc_443136;
loc_444098:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	goto loc_44406E;
loc_4440A2:
	edx = 2; //mov
	eax = to32i(dword_50B44C); //mov
	ecx = ebx; //mov
	ebx = to32i(ebp-0x68); //mov
	goto loc_443136;
loc_4440B6:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_443196;
loc_4440C9:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dh = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dh, dh);
	if (jz())
		goto loc_4440F2;
	ebx = edi; //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_44319F;
loc_4440F2:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	eax = to32i(dword_50B44C); //mov
	goto loc_44319F;
loc_444106:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_443210;
loc_444119:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	al = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(al, al);
	if (jz())
		goto loc_444147;
	ebx = edi; //mov
	edx = 3; //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_44321E;
loc_444147:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	edx = 3; //mov
	eax = to32i(dword_50B44C); //mov
	goto loc_44321E;
loc_444160:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_443284;
	ebx = 0xC002; //mov
	goto loc_443289;
loc_444177:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44418A;
loc_444180:
	ebx = 0xC002; //mov
	goto loc_443289;
loc_44418A:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_444180;
	ebx = 0x3FFE; //mov
	goto loc_443289;
loc_44419D:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_4441E6;
	ebx = to32i(dword_512228); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4441DB;
loc_4441B0:
	ebx = 0x7F; //mov
loc_4441B5:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dl = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dl, dl);
	if (jz())
		goto loc_4432A8;
	goto loc_4432A6;
loc_4441DB:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_4441B0;
	goto loc_4441B5;
loc_4441E6:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_4441F5;
loc_4441EF:
	xor_(eax, eax);
	ebx = eax; //mov
	goto loc_4441B5;
loc_4441F5:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_4441EF;
	eax = 0x7F; //mov
	ebx = eax; //mov
	goto loc_4441B5;
loc_444207:
	ecx = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	goto loc_443326;
loc_44421A:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3F);
	add(eax, (int32_t)0x40);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	bl = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(bl, bl);
	if (jz())
		goto loc_444250;
	ebx = edi; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_50B44C); //mov
	and_(edx, (int32_t)1);
	goto loc_443340;
loc_444250:
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = eax; //mov
	and_(ebx, (int32_t)0x7F);
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_50B44C); //mov
	and_(edx, (int32_t)1);
	goto loc_443340;
loc_44426E:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_4433A6;
	eax = 0xC002; //mov
	goto loc_4433AB;
loc_444285:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_444298;
loc_44428E:
	eax = 0xC002; //mov
	goto loc_4433AB;
loc_444298:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_44428E;
	goto loc_4433A6;
loc_4442A6:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_4442F0;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_4442E3;
loc_4442B8:
	ebx = 0x7F; //mov
loc_4442BD:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	al = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(al, al);
	if (jz())
		goto loc_4433CC;
	goto loc_4433CA;
loc_4442E3:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_4442B8;
	xor_(ebx, ebx);
	goto loc_4442BD;
loc_4442F0:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_4442FF;
loc_4442F9:
	xor_(eax, eax);
	ebx = eax; //mov
	goto loc_4442BD;
loc_4442FF:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_4442F9;
	eax = 0x7F; //mov
	ebx = eax; //mov
	goto loc_4442BD;
loc_444311:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_44343C;
	eax = 0x3FFE; //mov
	goto loc_443441;
loc_444328:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44433B;
loc_444331:
	eax = 0x3FFE; //mov
	goto loc_443441;
loc_44433B:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_444331;
	goto loc_44343C;
loc_444349:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_444395;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_444385;
loc_44435B:
	xor_(eax, eax);
loc_44435D:
	ebx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	push32(eax);
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0x3F);
	dl = to8i(ebp-8); //mov
	add(ecx, (int32_t)0x40);
	test(dl, dl);
	if (jz())
		goto loc_443462;
	goto loc_443460;
loc_444385:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_44435B;
	eax = 0x7F; //mov
	goto loc_44435D;
loc_444395:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_4443A5;
loc_44439E:
	eax = 0x7F; //mov
	goto loc_44435D;
loc_4443A5:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_44439E;
	goto loc_44435B;
loc_4443B0:
	cmp(ebx, (int32_t)0x23);
	if (jge())
		goto loc_4443BF;
	ebx = 3; //mov
	goto loc_4434A7;
loc_4443BF:
	ebx = 6; //mov
	goto loc_4434A7;
loc_4443C9:
	sub(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	goto loc_4434E1;
loc_4443DD:
	edi = 0x40; //mov
	goto loc_44354F;
loc_4443E7:
	edi = 0x7F; //mov
	goto loc_4435BA;
loc_4443F1:
	edi = 0x40; //mov
	goto loc_4435BA;
loc_4443FB:
	edx = to32i(ebp-0x2C); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = to32i(dword_50B47C); //mov
	sar(eax, cl);
	sar(edx, (int32_t)1);
	add(edx, eax);
	eax = to32i(dword_50B284); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x28); //mov
	eax = to32i(dword_50B284); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B284); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	edx = to32i(ebp-0x34); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = to32i(dword_50B47C); //mov
	sar(eax, cl);
	sar(edx, (int32_t)1);
	add(edx, eax);
	eax = to32i(dword_50B234); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x18); //mov
	eax = to32i(dword_50B234); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B234); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	edx = to32i(ebp-0x30); //mov
	imul32(edx, to32i(dword_4D5A30));
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_50B47C) = eax; //mov
	cl = bl; //mov
	edx = eax; //mov
	sar(eax, (int32_t)1);
	sar(edx, cl);
	add(edx, eax);
	eax = to32i(dword_50B244); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = to32i(ebp-0x18); //mov
	eax = to32i(dword_50B244); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	eax = to32i(dword_50B244); //mov
	edx = edi; //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_444520()
{
	static const void *const off_4444F0[] = {
		&&loc_44461B,
		&&loc_444639,
		&&loc_444625,
		&&loc_444639,
		&&loc_444639,
		&&loc_444639,
		&&loc_444639,
		&&loc_444639,
		&&loc_444639,
		&&loc_444639,
		&&loc_44462F,
		&&loc_44462F,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = to32i(esp+0x14); //mov
	esi = eax; //mov
	ebp = edx; //mov
	edx = ecx; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_4445D4;
loc_444538:
	cmp(ebx, (int32_t)0x7F);
	if (jle())
		goto loc_444542;
	ebx = 0x7F; //mov
loc_444542:
	test(edx, edx);
	if (jl())
		goto loc_4445DB;
loc_44454A:
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_444554;
	edx = 0x7F; //mov
loc_444554:
	cmp(esi, (int32_t)0xE);
	if (jnz())
		goto loc_4445E2;
loc_44455D:
	eax = to32i(dword_50B44C); //mov
loc_444562:
	to32i(esp) = eax; //mov
	cmp(esi, (int32_t)0x14);
	if (jz())
		goto loc_44465A;
	cmp(esi, (int32_t)0xF);
	if (jz())
		goto loc_44465A;
	cmp(esi, (int32_t)0x16);
	if (jz())
		goto loc_44465A;
	ecx = (int32_t)(intptr_t)(esi*8+0); //lea
	cmp(ebp, to32i(dword_50B238+ecx));
	if (jz())
		goto loc_44468F;
	eax = to32i(dword_50B234+ecx); //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4445AE;
	cmp(esi, (int32_t)3);
	if (jle())
		goto loc_4445AE;
	esp -= 4; _sub_489840(); esp += 4; //call
	dec(to32i(dword_4D5A40));
loc_4445AE:
	eax = to32i(esp); //mov
	push32(ebx);
	ecx = edx; //mov
	ebx = edi; //mov
	edx = ebp; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	to32i(dword_50B234+esi*8) = eax; //mov
	to32i(dword_50B238+esi*8) = ebp; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4445D4:
	xor_(ebx, ebx);
	goto loc_444538;
loc_4445DB:
	xor_(edx, edx);
	goto loc_44454A;
loc_4445E2:
	cmp(esi, (int32_t)0xF);
	if (jz())
		goto loc_44455D;
	cmp(esi, (int32_t)0x12);
	if (jz())
		goto loc_44455D;
	cmp(esi, (int32_t)0x15);
	if (jz())
		goto loc_44455D;
	cmp(esi, (int32_t)0x16);
	if (jz())
		goto loc_44455D;
	cmp(esi, (int32_t)0x17);
	if (jz())
		goto loc_44455D;
	cmp(ebp, (int32_t)0xB);
	if (ja())
		goto loc_444639;
	goto *off_4444F0[ebp];
loc_44461B:
	eax = to32i(dword_50B41C); //mov
	goto loc_444562;
loc_444625:
	eax = to32i(dword_50B410); //mov
	goto loc_444562;
loc_44462F:
	eax = to32i(dword_50B428); //mov
	goto loc_444562;
loc_444639:
	al = (int32_t)(intptr_t)byte_4D59A8[esi*4]; //mov
	and_(eax, (int32_t)0xFF);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	eax = to32i(dword_50B410+ecx*4); //mov
	goto loc_444562;
loc_44465A:
	push32(0x40);
	eax = to32i(esp+4); //mov
	ecx = edx; //mov
	ebx = edi; //mov
	edx = ebp; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	ebx = to32i(dword_4D5A40); //mov
	to32i(dword_50B234+esi*8) = eax; //mov
	dec(ebx);
	to32i(dword_50B238+esi*8) = ebp; //mov
	to32i(dword_4D5A40) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_44468F:
	imul32(edx, to32i(dword_4D5A30));
	ebp = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	edx = eax; //mov
	to32i(dword_50B47C) = eax; //mov
	sar(edx, (int32_t)1);
	eax = to32i(dword_50B234+ecx); //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	edx = ebx; //mov
	eax = to32i(dword_50B234+ecx); //mov
	esp -= 4; _sub_49E0F4(); esp += 4; //call
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_444704;
	ebx = to32i(dword_4D5A44); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4446EE;
	edx = edi; //mov
	eax = to32i(dword_50B234+ecx); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_49E130(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4446EE:
	eax = to32i(dword_50B234+ecx); //mov
	xor_(edx, edx);
	esp -= 4; _sub_49E130(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_444704:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jz())
		goto loc_444713;
	eax = ebp; //mov
	sub(eax, edi);
	edi = eax; //mov
loc_444713:
	cmp(edi, (int32_t)0x7F);
	if (jle())
		goto loc_444744;
	edi = 0x7F; //mov
loc_44471D:
	ecx = to32i(dword_4D5A44); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	test(ecx, ecx);
	if (jz())
		goto loc_44474C;
	edx = edi; //mov
	eax = to32i(dword_50B234+eax); //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_444744:
	test(edi, edi);
	if (jge())
		goto loc_44471D;
	xor_(edi, edi);
	goto loc_44471D;
loc_44474C:
	edx = 0x40; //mov
	eax = to32i(dword_50B234+eax); //mov
	esp -= 4; _sub_49E200(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_444770()
{
	push32(esi);
	push32(edi);
	edi = to32i(esp+0x10); //mov
	esi = eax; //mov
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4447B9;
	eax = to32i(dword_4D96B0); //mov
	test(eax, eax);
	if (jz())
		goto loc_4447AD;
	cmp(edi, (int32_t)0x20);
	if (jnz())
		goto loc_4447A6;
	eax = 0xC002; //mov
loc_444794:
	if (jnz())
		goto loc_444799;
	add(esi, (int32_t)7);
loc_444799:
	push32(eax);
	eax = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4447A6:
	eax = 0x3FFE; //mov
	goto loc_444794;
loc_4447AD:
	cmp(edi, (int32_t)0x20);
	if (jz())
		goto loc_444794;
	eax = 0x7F; //mov
	goto loc_444794;
loc_4447B9:
	eax = to32i(esp+0xC); //mov
	push32(eax);
	eax = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_4447D0()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_4447F3;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4447F3;
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	ebx = to32i(dword_50B234+ecx); //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4447F7;
loc_4447F3:
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4447F7:
	push32(esi);
	push32(edx);
	edx = 5; //mov
	eax = ebx; //mov
	ebx = 0xFFFFFFFF; //mov
	esi = 0xFFFFFFFF; //mov
	esp -= 4; _sub_486080(); esp += 4; //call
	ebp = to32i(dword_4D5A40); //mov
	to32i(dword_50B234+ecx) = esi; //mov
	dec(ebp);
	to32i(dword_50B238+ecx) = esi; //mov
	to32i(dword_4D5A40) = ebp; //mov
	pop32(edx);
	pop32(esi);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_444830()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x14);
	esi = to32i(ebp+0x10); //mov
	edi = eax; //mov
	to8i(ebp-4) = dl; //mov
	to8i(ebp-8) = bl; //mov
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jz())
		goto loc_44494A;
	add(esi, esi);
	cmp(esi, (int32_t)0x15F9);
	if (jge())
		goto loc_444952;
	eax = 0x15F9; //mov
	sub(eax, esi);
	edx = eax; //mov
	shl(edx, (int32_t)7);
	sub(edx, eax);
	ebx = 0x15F9; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = eax; //mov
loc_44487A:
	ebx = to32i(dword_512208); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_444899;
	eax = to32i(ebp+0x14); //mov
	cmp(to32i(eax), (int32_t)0x10000);
	if (jnz())
		goto loc_444959;
	xor_(eax, eax);
	to32i(ebp-0x10) = eax; //mov
loc_444899:
	edx = to32i(ebp+0x14); //mov
	eax = to32i(ebp+0x14); //mov
	edx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	edx = to32i(ebp+0x14); //mov
	add(eax, (int32_t)0x40);
	edx = to32i(edx+4); //mov
	esp -= 4; _sub_442250(); esp += 4; //call
	to32i(ebp-0xC) = eax; //mov
	test(edi, edi);
	if (jl())
		goto loc_444961;
	test(ecx, ecx);
	if (jle())
		goto loc_444B16;
	ebx = to32i(ebp-0xB); //mov
	edx = to32i(ebp-7); //mov
	eax = edi; //mov
	sar(ebx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_444BF0(); esp += 4; //call
	to32i(ebp-0x14) = eax; //mov
	ebx = ecx; //mov
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_444F40(); esp += 4; //call
	ebx = eax; //mov
	cmp(edi, (int32_t)6);
	if (jnz())
		goto loc_444B25;
loc_4448FB:
	edx = ecx; //mov
	shl(edx, (int32_t)7);
	sub(edx, ecx);
	ecx = 0xA0000; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_444918;
	eax = 0x7F; //mov
loc_444918:
	edx = esi; //mov
	imul32(edx, eax);
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = eax; //mov
loc_44492B:
	cmp(to32i(ebp-0x14), (int32_t)0x2C);
	if (jnz())
		goto loc_44493A;
	sub(ebx, (int32_t)0x3C);
	test(ebx, ebx);
	if (jge())
		goto loc_44493A;
	xor_(ebx, ebx);
loc_44493A:
	ecx = to32i(ebp-0xC); //mov
	edx = to32i(ebp-0x14); //mov
	push32(ecx);
	eax = edi; //mov
	ecx = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
loc_44494A:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_444952:
	xor_(esi, esi);
	goto loc_44487A;
loc_444959:
	to32i(ebp-0x10) = ebx; //mov
	goto loc_444899;
loc_444961:
	edx = ecx; //mov
	shl(edx, (int32_t)7);
	sub(edx, ecx);
	ecx = 0xA0000; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_44497E;
	eax = 0x7F; //mov
loc_44497E:
	ebx = to32i(ebp-0xB); //mov
	edx = to32i(ebp-7); //mov
	sar(ebx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	ecx = eax; //mov
	esp -= 4; _sub_444C90(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_4449F3;
loc_444998:
	cmp(edx, (int32_t)0x1F);
	if (jnz())
		goto loc_444A04;
	edx = esi; //mov
	imul32(edx, ecx);
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edi = (int32_t)(intptr_t)(eax+eax); //lea
	cmp(edi, ecx);
	if (jle())
		goto loc_4449B7;
	edi = ecx; //mov
loc_4449B7:
	ebx = to32i(ebp-0xC); //mov
	edx = 0x1F; //mov
	eax = 0x14; //mov
	ecx = esi; //mov
	push32(ebx);
	ebx = 0x40; //mov
	esi = to32i(ebp-0xC); //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	ebx = 0x40; //mov
	edx = 0x23; //mov
	push32(esi);
	eax = 0x14; //mov
	ecx = edi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4449F3:
	xor_(eax, eax);
	esp -= 4; _sub_44B660(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44494A;
	goto loc_444998;
loc_444A04:
	cmp(edx, (int32_t)4);
	if (jz())
		goto loc_444AA9;
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_444AEF;
	cmp(to8i(ebp-8), (int8_t)0xA);
	if (jnz())
		goto loc_444AEF;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_444AD9;
	cmp(to8i(byte_4D5A0F), (int8_t)1);
	if (jnz())
		goto loc_444AC6;
	cmp(to32i(ebp-0x10), (int32_t)0);
	if (jnz())
		goto loc_444AC6;
loc_444A48:
	eax = to32i(ebp-0xC); //mov
	push32(eax);
	edi = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(edi);
	ebx = 0x40; //mov
	ecx = esi; //mov
	cmp(edx, (int32_t)0x32);
	if (jbe())
		goto loc_444B0C;
	edx = 5; //mov
loc_444A6F:
	eax = 0xF; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	edx = to32i(ebp-0xC); //mov
	ecx = 3; //mov
	push32(edx);
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = 0x40; //mov
	edx = 0x1D; //mov
	ecx = eax; //mov
	eax = 0x14; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_444AA9:
	ecx = to32i(ebp-0xC); //mov
	ebx = 0x40; //mov
	push32(ecx);
	eax = 0xF; //mov
	ecx = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_444AC6:
	cmp(to8i(byte_4D5A10), (int8_t)1);
	if (jnz())
		goto loc_444AD9;
	cmp(to32i(ebp-0x10), (int32_t)1);
	if (jz())
		goto loc_444A48;
loc_444AD9:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_444AEF;
	cmp(to8i(byte_4D5A0F), (int8_t)1);
	if (jz())
		goto loc_444A48;
loc_444AEF:
	edi = to32i(ebp-0xC); //mov
	ebx = 0x40; //mov
	push32(edi);
	eax = 0x14; //mov
	ecx = esi; //mov
	esp -= 4; _sub_444520(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_444B0C:
	edx = 6; //mov
	goto loc_444A6F;
loc_444B16:
	eax = edi; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_444B25:
	cmp(edi, (int32_t)7);
	if (jz())
		goto loc_4448FB;
	goto loc_44492B;
}
Fn(void) Game::_sub_444B40()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = edx; //mov
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_444BA8;
	ecx = to32i(dword_4D96B0); //mov
	bl = 1; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_444B99;
	test(eax, eax);
	if (jz())
		goto loc_444B92;
	edi = 0xA3E2; //mov
loc_444B64:
	test(esi, esi);
	if (jl())
		goto loc_444BAC;
	ecx = 0x77; //mov
loc_444B6D:
	test(bl, bl);
	if (jz())
		goto loc_444BC9;
	eax = edi; //mov
loc_444B73:
	push32(0x40);
	edi = to32i(dword_50B470); //mov
	ebx = eax; //mov
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_444B92:
	edi = 0x3FFE; //mov
	goto loc_444B64;
loc_444B99:
	test(eax, eax);
	if (jz())
		goto loc_444BA1;
	xor_(edi, edi);
	goto loc_444B64;
loc_444BA1:
	edi = 0x7F; //mov
	goto loc_444B64;
loc_444BA8:
	xor_(bl, bl);
	goto loc_444B64;
loc_444BAC:
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = 0x1E; //mov
	esi = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	and_(esi, (int32_t)3);
	ecx = (int32_t)(intptr_t)(edx+0x5A); //lea
	goto loc_444B6D;
loc_444BC9:
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_444BE4;
	edi = 0xFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(edi);
	eax = edx; //mov
	goto loc_444B73;
loc_444BE4:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	goto loc_444B73;
}
Fn(void) Game::_sub_444BF0()
{
	eax = 0x2C; //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_444C03;
	test(bl, bl);
	if (jnz())
		goto loc_444C03;
	eax = 0x2A; //mov
loc_444C03:
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_444C12;
	cmp(bl, (int8_t)8);
	if (jnz())
		goto loc_444C12;
	eax = 0x2B; //mov
loc_444C12:
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_444C21;
	cmp(bl, (int8_t)9);
	if (jnz())
		goto loc_444C21;
	eax = 0x2C; //mov
loc_444C21:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444C2F;
	test(bl, bl);
	if (jnz())
		goto loc_444C4E;
loc_444C2A:
	eax = 0x28; //mov
loc_444C2F:
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_444C3E;
	cmp(bl, (int8_t)3);
	if (jnz())
		goto loc_444C3E;
	eax = 0x29; //mov
loc_444C3E:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto locret_444C4D;
	cmp(bl, (int8_t)9);
	if (jnz())
		goto locret_444C4D;
	eax = 0x2C; //mov
locret_444C4D:
	return;
loc_444C4E:
	cmp(bl, (int8_t)3);
	if (jz())
		goto loc_444C2A;
	cmp(bl, (int8_t)8);
	if (jz())
		goto loc_444C2A;
	goto loc_444C2F;
}
Fn(void) Game::_sub_444C90()
{
	static const void *const off_444C60[] = {
		&&loc_444D58,
		&&loc_444D62,
		&&loc_444D1C,
		&&loc_444D6C,
	};
	static const void *const off_444C70[] = {
		&&loc_444DC3,
		&&loc_444CA2,
		&&loc_444EF5,
		&&loc_444CA2,
		&&loc_444EC7,
		&&loc_444CA2,
		&&loc_444CA2,
		&&loc_444EDE,
	};
	push32(ecx);
	ecx = eax; //mov
	eax = 0x1D; //mov
	cmp(dl, (int8_t)7);
	if (jnz())
		goto loc_444CC4;
	eax = 2; //mov
loc_444CA2:
	cmp(bl, (int8_t)0xA);
	if (jnz())
		goto loc_444F0C;
loc_444CAB:
	cmp(to32i(dword_51221C), (int32_t)8);
	if (jnz())
		goto loc_444F27;
	eax = 4; //mov
loc_444CBD:
	to32i(dword_4D5BE4) = eax; //mov
	pop32(ecx);
	return;
loc_444CC4:
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_444CD4;
	test(bl, bl);
	if (jnz())
		goto loc_444CD4;
	eax = 0x1F; //mov
	goto loc_444CA2;
loc_444CD4:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444CE5;
	cmp(bl, (int8_t)0xA);
	if (jnz())
		goto loc_444CE5;
	eax = 0x1E; //mov
	goto loc_444CA2;
loc_444CE5:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444CF6;
	cmp(bl, (int8_t)0xB);
	if (jnz())
		goto loc_444CF6;
	eax = 0x1D; //mov
	goto loc_444CA2;
loc_444CF6:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444D26;
	cmp(bl, (int8_t)4);
	if (jnz())
		goto loc_444D26;
	cmp(ecx, (int32_t)0x6E);
	if (jle())
		goto loc_444D0C;
	eax = 0x21; //mov
	goto loc_444CA2;
loc_444D0C:
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, dl);
	if (jz())
		goto loc_444D1C;
	eax = 0x1E; //mov
	goto loc_444CA2;
loc_444D1C:
	eax = 0x20; //mov
	goto loc_444CA2;
loc_444D26:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444D30;
	cmp(bl, (int8_t)0xC);
	if (jz())
		goto loc_444D44;
loc_444D30:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444D76;
	cmp(bl, (int8_t)5);
	if (jnz())
		goto loc_444D76;
	eax = 0x1D; //mov
	goto loc_444CA2;
loc_444D44:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)3);
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_444D58;
	goto *off_444C60[eax];
loc_444D58:
	eax = 0x23; //mov
	goto loc_444CA2;
loc_444D62:
	eax = 0x22; //mov
	goto loc_444CA2;
loc_444D6C:
	eax = 0x25; //mov
	goto loc_444CA2;
loc_444D76:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_444DD2;
	test(bl, bl);
	if (jnz())
		goto loc_444DCD;
loc_444D7F:
	cmp(ecx, (int32_t)0x50);
	if (jle())
		goto loc_444E0A;
	eax = 0x21; //mov
loc_444D8D:
	ecx = to32i(dword_4D5BE4); //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_444CA2;
	cmp(ecx, (int32_t)0x21);
	if (jz())
		goto loc_444CA2;
	cmp(ecx, (int32_t)0x20);
	if (jnb())
		goto loc_444E42;
	cmp(ecx, (int32_t)0x1D);
	if (jnz())
		goto loc_444CA2;
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444D1C;
loc_444DC3:
	eax = 0x22; //mov
	goto loc_444CA2;
loc_444DCD:
	cmp(bl, (int8_t)3);
	if (jz())
		goto loc_444D7F;
loc_444DD2:
	cmp(ecx, (int32_t)0x5A);
	if (jle())
		goto loc_444E7B;
	eax = 0x21; //mov
loc_444DE0:
	edx = to32i(dword_4D5BE4); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_444CA2;
	cmp(edx, (int32_t)0x21);
	if (jz())
		goto loc_444CA2;
	ecx = (int32_t)(intptr_t)(edx-0x1E); //lea
	cmp(ecx, (int32_t)7);
	if (ja())
		goto loc_444CA2;
	goto *off_444C70[ecx];
loc_444E0A:
	if (jg())
		goto loc_444E1B;
	cmp(ecx, (int32_t)0x16);
	if (jle())
		goto loc_444E1B;
	eax = 0x22; //mov
	goto loc_444D8D;
loc_444E1B:
	cmp(ecx, (int32_t)0x16);
	if (jg())
		goto loc_444E2F;
	cmp(ecx, (int32_t)0x10);
	if (jle())
		goto loc_444E2F;
	eax = 0x20; //mov
	goto loc_444D8D;
loc_444E2F:
	cmp(ecx, (int32_t)0x10);
	if (jg())
		goto loc_444D8D;
	eax = 0x1D; //mov
	goto loc_444D8D;
loc_444E42:
	if (jbe())
		goto loc_444E64;
	cmp(ecx, (int32_t)0x22);
	if (jnz())
		goto loc_444CA2;
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444D1C;
	eax = 0x1D; //mov
	goto loc_444CA2;
loc_444E64:
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444DC3;
	eax = 0x1D; //mov
	goto loc_444CA2;
loc_444E7B:
	if (jg())
		goto loc_444E8C;
	cmp(ecx, (int32_t)0x46);
	if (jle())
		goto loc_444E8C;
	eax = 0x20; //mov
	goto loc_444DE0;
loc_444E8C:
	cmp(ecx, (int32_t)0x46);
	if (jg())
		goto loc_444EA0;
	cmp(ecx, (int32_t)0x32);
	if (jle())
		goto loc_444EA0;
	eax = 0x25; //mov
	goto loc_444DE0;
loc_444EA0:
	cmp(ecx, (int32_t)0x32);
	if (jg())
		goto loc_444EB4;
	cmp(ecx, (int32_t)0x19);
	if (jle())
		goto loc_444EB4;
	eax = 0x22; //mov
	goto loc_444DE0;
loc_444EB4:
	cmp(ecx, (int32_t)0x19);
	if (jg())
		goto loc_444DE0;
	eax = 0x1E; //mov
	goto loc_444DE0;
loc_444EC7:
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444D6C;
	eax = 0x1E; //mov
	goto loc_444CA2;
loc_444EDE:
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444DC3;
	eax = 0x1E; //mov
	goto loc_444CA2;
loc_444EF5:
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)1);
	if (jz())
		goto loc_444DC3;
	eax = 0x25; //mov
	goto loc_444CA2;
loc_444F0C:
	cmp(bl, (int8_t)0xB);
	if (jz())
		goto loc_444CAB;
	cmp(bl, (int8_t)4);
	if (jz())
		goto loc_444CAB;
	cmp(bl, (int8_t)0xC);
	if (jz())
		goto loc_444CAB;
loc_444F27:
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_444CBD;
	pop32(ecx);
}
Fn(void) Game::_sub_444F40()
{
	push32(ecx);
	ecx = eax; //mov
	eax = ebx; //mov
	cmp(ecx, (int32_t)6);
	if (jnz())
		goto loc_444F6B;
loc_444F4A:
	ecx = eax; //mov
	shl(ecx, (int32_t)7);
	sub(ecx, eax);
	ebx = 0xA0000; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_444F69;
	eax = 0x7F; //mov
loc_444F69:
	pop32(ecx);
	return;
loc_444F6B:
	cmp(ecx, (int32_t)7);
	if (jz())
		goto loc_444F4A;
	cmp(edx, to32i(dword_50B238+ecx*8));
	if (jz())
		goto loc_444F9E;
	edx = eax; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	ebx = 0xA0000; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_444F96;
	eax = 0x7F; //mov
loc_444F96:
	byte_4D5BCA[ecx] = al; //mov
	pop32(ecx);
	return;
loc_444F9E:
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4D5BCA[ecx]; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_444FB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_50B234), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_445043;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_4450FB;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4450F4;
	esi = 0xC000; //mov
loc_444FE2:
	push32(0x40);
	eax = to32i(dword_50B410); //mov
	ebx = esi; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	ebp = 1; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(edi, edi);
	push32(0x40);
	edx = 1; //mov
	to32i(dword_50B234) = eax; //mov
	ebx = esi; //mov
	xor_(ecx, ecx);
	eax = to32i(dword_50B410); //mov
	to32i(dword_50B238) = edi; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	push32(0x40);
	to32i(dword_50B244) = eax; //mov
	ebx = esi; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	eax = to32i(dword_50B428); //mov
	to32i(dword_50B248) = ebp; //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	to32i(dword_50B284) = eax; //mov
	to32i(dword_50B288) = edi; //mov
loc_445043:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4450ED;
	cmp(to32i(dword_50B23C), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4450ED;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jnz())
		goto loc_445115;
	push32(0x40);
	ebx = 0x7F; //mov
loc_445071:
	eax = to32i(dword_50B41C); //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
	edi = to32i(dword_4D96B0); //mov
	xor_(esi, esi);
	to32i(dword_50B23C) = eax; //mov
	to32i(dword_50B240) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_445121;
	push32(0x40);
	ebx = 0x3FFF; //mov
loc_4450A1:
	edx = 1; //mov
	eax = to32i(dword_50B41C); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_442280(); esp += 4; //call
	ebp = 1; //mov
	to32i(dword_50B24C) = eax; //mov
	eax = to32i(dword_4D96B0); //mov
	to32i(dword_50B250) = ebp; //mov
	test(eax, eax);
	if (jz())
		goto loc_44512D;
	push32(0x40);
	ebx = 0x3FFF; //mov
loc_4450D2:
	eax = to32i(dword_50B428); //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_50B28C) = eax; //mov
	to32i(dword_50B290) = edx; //mov
loc_4450ED:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4450F4:
	xor_(esi, esi);
	goto loc_444FE2;
loc_4450FB:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_44510B;
	xor_(esi, esi);
	goto loc_444FE2;
loc_44510B:
	esi = 0x40; //mov
	goto loc_444FE2;
loc_445115:
	push32(0x40);
	ebx = 0x3FFF; //mov
	goto loc_445071;
loc_445121:
	push32(0x40);
	ebx = 0x7F; //mov
	goto loc_4450A1;
loc_44512D:
	push32(0x40);
	ebx = 0x7F; //mov
	goto loc_4450D2;
}
Fn(void) Game::_sub_445140()
{
	push32(edx);
	edx = 0xFFFFFFFF; //mov
	xor_(eax, eax);
loc_445148:
	add(eax, (int32_t)8);
	to32i(dword_50B230+eax) = edx; //mov
	to32i(dword_50B22C+eax) = edx; //mov
	cmp(eax, (int32_t)0xC0);
	if (jnz())
		goto loc_445148;
	pop32(edx);
}
Fn(void) Game::_sub_4451C0()
{
	static const void *const off_445160[] = {
		&&loc_445388,
		&&loc_44584F,
		&&loc_445859,
		&&loc_445863,
		&&loc_44586D,
		&&loc_445388,
	};
	static const void *const off_445178[] = {
		&&loc_4453F0,
		&&loc_445877,
		&&loc_445881,
		&&loc_44588B,
		&&loc_445895,
		&&loc_4453F0,
	};
	static const void *const off_445190[] = {
		&&loc_445498,
		&&loc_44589F,
		&&loc_4458D6,
		&&loc_44590D,
		&&loc_445944,
		&&loc_445498,
	};
	static const void *const off_4451A8[] = {
		&&loc_445516,
		&&loc_44597B,
		&&loc_4459B2,
		&&loc_4459E9,
		&&loc_445A20,
		&&loc_445516,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x154);
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0x64); //lea
	esi = (int32_t)(intptr_t)off_441F20; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0x118); //lea
	esi = (int32_t)(intptr_t)off_441F5C; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	esi = (int32_t)(intptr_t)off_441F98; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0xDC); //lea
	esi = (int32_t)(intptr_t)off_441FD4; //mov
	edx = to32i(dword_512208); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4456BA;
	edx = to32i(dword_512270); //mov
	cmp(edx, (int32_t)0xF);
	if (jle())
		goto loc_445605;
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_44523B:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445253;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44523B;
loc_445253:
	pop32(edi);
	cmp(edx, (int32_t)0x2B);
	if (jnz())
		goto loc_4455B0;
	esi = (int32_t)(intptr_t)aStrex; //mov
loc_445262:
	edi = esp; //mov
loc_445264:
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_44526D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445285;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44526D;
loc_445285:
	pop32(edi);
	eax = esp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4760F0(); esp += 4; //call
	edx = to32i(dword_5122B0); //mov
	cmp(edx, (int32_t)0xF);
	if (jle())
		goto loc_44568A;
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_4452A7:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4452BF;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4452A7;
loc_4452BF:
	pop32(edi);
	cmp(edx, (int32_t)0x2B);
	if (jnz())
		goto loc_445635;
	esi = (int32_t)(intptr_t)aStrex; //mov
loc_4452CE:
	edi = esp; //mov
loc_4452D0:
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4452D9:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4452F1;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4452D9;
loc_4452F1:
	pop32(edi);
	edx = 1; //mov
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_445307:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44531F;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445307;
loc_44531F:
	pop32(edi);
	esi = (int32_t)(intptr_t)aGen; //mov
	edi = esp; //mov
	edx = 2; //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445335:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44534D;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445335;
loc_44534D:
	pop32(edi);
	eax = esp; //mov
	edi = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_44535E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445376;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44535E;
loc_445376:
	pop32(edi);
	eax = to32i(dword_512234); //mov
	cmp(eax, (int32_t)5);
	if (ja())
		goto loc_4453B1;
	goto *off_445160[eax];
loc_445388:
	esi = (int32_t)(intptr_t)aCnteng; //mov
loc_44538D:
	edi = esp; //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445398:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4453B0;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445398;
loc_4453B0:
	pop32(edi);
loc_4453B1:
	edx = 3; //mov
	eax = esp; //mov
	edi = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_4453C6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4453DE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4453C6;
loc_4453DE:
	pop32(edi);
	eax = to32i(dword_512234); //mov
	cmp(eax, (int32_t)5);
	if (ja())
		goto loc_445419;
	goto *off_445178[eax];
loc_4453F0:
	esi = (int32_t)(intptr_t)aSpcheng; //mov
loc_4453F5:
	edi = esp; //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445400:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445418;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445400;
loc_445418:
	pop32(edi);
loc_445419:
	edx = 4; //mov
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	ebx = to32i(dword_51221C); //mov
	push32(ebx);
	esi = to32i(dword_5134A4); //mov
	push32(esi);
	push32(aStramb02d);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	edx = 5; //mov
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	edx = to32i(dword_51220C); //mov
	shl(edx, (int32_t)6);
	edx = to32i(dword_512270+edx); //mov
	cmp(edx, (int32_t)0xF);
	if (jge())
		goto loc_4454CF;
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_44546E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445486;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44546E;
loc_445486:
	pop32(edi);
	eax = to32i(dword_512234); //mov
	cmp(eax, (int32_t)5);
	if (ja())
		goto loc_4454C3;
	goto *off_445190[eax];
loc_445498:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
loc_4454A1:
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4454AA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4454C2;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4454AA;
loc_4454C2:
	pop32(edi);
loc_4454C3:
	edx = 6; //mov
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
loc_4454CF:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_44554D;
	edx = to32i(dword_5122B0); //mov
	cmp(edx, (int32_t)0xF);
	if (jge())
		goto loc_44554D;
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_4454EC:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445504;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4454EC;
loc_445504:
	pop32(edi);
	eax = to32i(dword_512234); //mov
	cmp(eax, (int32_t)5);
	if (ja())
		goto loc_445541;
	goto *off_4451A8[eax];
loc_445516:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
loc_44551F:
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445528:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445540;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445528;
loc_445540:
	pop32(edi);
loc_445541:
	edx = 7; //mov
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
loc_44554D:
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_445556:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44556E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445556;
loc_44556E:
	pop32(edi);
	esi = (int32_t)(intptr_t)aRain; //mov
	edi = esp; //mov
	edx = 8; //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445584:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44559C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445584;
loc_44559C:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	add(esp, (int32_t)0x154);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4455B0:
	cmp(edx, (int32_t)0x28);
	if (jge())
		goto loc_4455E7;
	cmp(edx, (int32_t)0x12);
	if (jz())
		goto loc_4455F1;
	cmp(edx, (int32_t)0x1D);
	if (jz())
		goto loc_4455F1;
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_4455F1;
	cmp(edx, (int32_t)0x14);
	if (jz())
		goto loc_4455DD;
	cmp(edx, (int32_t)0x25);
	if (jz())
		goto loc_4455DD;
	cmp(edx, (int32_t)0x15);
	if (jz())
		goto loc_4455DD;
	cmp(edx, (int32_t)0x1F);
	if (jz())
		goto loc_4455DD;
	cmp(edx, (int32_t)0x21);
	if (jnz())
		goto loc_4455FB;
loc_4455DD:
	esi = (int32_t)(intptr_t)aStruck; //mov
	goto loc_445262;
loc_4455E7:
	esi = (int32_t)(intptr_t)aScrate; //mov
	goto loc_445262;
loc_4455F1:
	esi = (int32_t)(intptr_t)aSputt; //mov
	goto loc_445262;
loc_4455FB:
	esi = (int32_t)(intptr_t)aSlimo; //mov
	goto loc_445262;
loc_445605:
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_44560E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445626;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44560E;
loc_445626:
	pop32(edi);
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xA0); //mov
	goto loc_445264;
loc_445635:
	cmp(edx, (int32_t)0x28);
	if (jge())
		goto loc_44566C;
	cmp(edx, (int32_t)0x12);
	if (jz())
		goto loc_445676;
	cmp(edx, (int32_t)0x1D);
	if (jz())
		goto loc_445676;
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_445676;
	cmp(edx, (int32_t)0x14);
	if (jz())
		goto loc_445662;
	cmp(edx, (int32_t)0x25);
	if (jz())
		goto loc_445662;
	cmp(edx, (int32_t)0x15);
	if (jz())
		goto loc_445662;
	cmp(edx, (int32_t)0x1F);
	if (jz())
		goto loc_445662;
	cmp(edx, (int32_t)0x21);
	if (jnz())
		goto loc_445680;
loc_445662:
	esi = (int32_t)(intptr_t)aStruck; //mov
	goto loc_4452CE;
loc_44566C:
	esi = (int32_t)(intptr_t)aScrate; //mov
	goto loc_4452CE;
loc_445676:
	esi = (int32_t)(intptr_t)aSputt; //mov
	goto loc_4452CE;
loc_445680:
	esi = (int32_t)(intptr_t)aSlimo; //mov
	goto loc_4452CE;
loc_44568A:
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_445693:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4456AB;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445693;
loc_4456AB:
	pop32(edi);
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xA0); //mov
	goto loc_4452D0;
loc_4456BA:
	edx = to32i(dword_51220C); //mov
	shl(edx, (int32_t)6);
	edx = to32i(dword_512270+edx); //mov
	cmp(edx, (int32_t)0xF);
	if (jle())
		goto loc_4457D6;
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_4456DB:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4456F3;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4456DB;
loc_4456F3:
	pop32(edi);
	cmp(edx, (int32_t)0x2B);
	if (jnz())
		goto loc_445781;
	esi = (int32_t)(intptr_t)aTrex; //mov
loc_445702:
	edi = esp; //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_44570D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445725;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44570D;
loc_445725:
	pop32(edi);
loc_445726:
	eax = esp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4760F0(); esp += 4; //call
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jnz())
		goto loc_445848;
	eax = 1; //mov
loc_445741:
	shl(eax, (int32_t)6);
	edx = to32i(dword_512270+eax); //mov
	cmp(edx, (int32_t)0xF);
	if (jl())
		goto loc_445751;
	xor_(edx, edx);
loc_445751:
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_44575A:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445772;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44575A;
loc_445772:
	pop32(edi);
	edi = esp; //mov
	esi = to32i(esp+edx*4+0x118); //mov
	goto loc_4452D0;
loc_445781:
	cmp(edx, (int32_t)0x28);
	if (jge())
		goto loc_4457B8;
	cmp(edx, (int32_t)0x12);
	if (jz())
		goto loc_4457C2;
	cmp(edx, (int32_t)0x1D);
	if (jz())
		goto loc_4457C2;
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_4457C2;
	cmp(edx, (int32_t)0x14);
	if (jz())
		goto loc_4457AE;
	cmp(edx, (int32_t)0x25);
	if (jz())
		goto loc_4457AE;
	cmp(edx, (int32_t)0x15);
	if (jz())
		goto loc_4457AE;
	cmp(edx, (int32_t)0x1F);
	if (jz())
		goto loc_4457AE;
	cmp(edx, (int32_t)0x21);
	if (jnz())
		goto loc_4457CC;
loc_4457AE:
	esi = (int32_t)(intptr_t)aTruck; //mov
	goto loc_445702;
loc_4457B8:
	esi = (int32_t)(intptr_t)aCrate; //mov
	goto loc_445702;
loc_4457C2:
	esi = (int32_t)(intptr_t)aPutt; //mov
	goto loc_445702;
loc_4457CC:
	esi = (int32_t)(intptr_t)aLimo; //mov
	goto loc_445702;
loc_4457D6:
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_4457DF:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4457F7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4457DF;
loc_4457F7:
	pop32(edi);
	edi = esp; //mov
	esi = to32i(esp+edx*4+0x64); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445807:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44581F;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445807;
loc_44581F:
	pop32(edi);
	edi = (int32_t)(intptr_t)dword_50B3FC; //mov
	esi = to32i(esp+edx*4+0x64); //mov
	push32(edi);
loc_44582A:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445842;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44582A;
loc_445842:
	pop32(edi);
	goto loc_445726;
loc_445848:
	xor_(eax, eax);
	goto loc_445741;
loc_44584F:
	esi = (int32_t)(intptr_t)aCntger; //mov
	goto loc_44538D;
loc_445859:
	esi = (int32_t)(intptr_t)aCntfrn; //mov
	goto loc_44538D;
loc_445863:
	esi = (int32_t)(intptr_t)aCntspn; //mov
	goto loc_44538D;
loc_44586D:
	esi = (int32_t)(intptr_t)aCntitl; //mov
	goto loc_44538D;
loc_445877:
	esi = (int32_t)(intptr_t)aSpchger; //mov
	goto loc_4453F5;
loc_445881:
	esi = (int32_t)(intptr_t)aSpchfrn; //mov
	goto loc_4453F5;
loc_44588B:
	esi = (int32_t)(intptr_t)aSpchspn; //mov
	goto loc_4453F5;
loc_445895:
	esi = (int32_t)(intptr_t)aSpchitl; //mov
	goto loc_4453F5;
loc_44589F:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4458B1:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4458C9;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4458B1;
loc_4458C9:
	pop32(edi);
	esi = (int32_t)(intptr_t)aG; //mov
	edi = esp; //mov
	goto loc_4454A1;
loc_4458D6:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4458E8:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445900;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4458E8;
loc_445900:
	pop32(edi);
	esi = (int32_t)(intptr_t)asc_4CBDB4; //mov
	edi = esp; //mov
	goto loc_4454A1;
loc_44590D:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_44591F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445937;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44591F;
loc_445937:
	pop32(edi);
	esi = (int32_t)(intptr_t)aS_1; //mov
	edi = esp; //mov
	goto loc_4454A1;
loc_445944:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445956:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44596E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445956;
loc_44596E:
	pop32(edi);
	esi = (int32_t)(intptr_t)aI; //mov
	edi = esp; //mov
	goto loc_4454A1;
loc_44597B:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_44598D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4459A5;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44598D;
loc_4459A5:
	pop32(edi);
	esi = (int32_t)(intptr_t)aG; //mov
	edi = esp; //mov
	goto loc_44551F;
loc_4459B2:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4459C4:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4459DC;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4459C4;
loc_4459DC:
	pop32(edi);
	esi = (int32_t)(intptr_t)asc_4CBDB4; //mov
	edi = esp; //mov
	goto loc_44551F;
loc_4459E9:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_4459FB:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445A13;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4459FB;
loc_445A13:
	pop32(edi);
	esi = (int32_t)(intptr_t)aS_1; //mov
	edi = esp; //mov
	goto loc_44551F;
loc_445A20:
	edi = esp; //mov
	esi = to32i(esp+edx*4+0xDC); //mov
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445A32:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445A4A;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445A32;
loc_445A4A:
	pop32(edi);
	esi = (int32_t)(intptr_t)aI; //mov
	edi = esp; //mov
	goto loc_44551F;
}
Fn(void) Game::_sub_445A60()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x64);
	edi = esp; //mov
	esi = to32i(dword_5134A4); //mov
	push32(edi);
loc_445A70:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445A88;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445A70;
loc_445A88:
	pop32(edi);
	esi = (int32_t)(intptr_t)aFesfx; //mov
	edi = esp; //mov
	xor_(edx, edx);
	push32(edi);
	sub(ecx, ecx);
	dec(ecx);
	al = 0; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	dec(edi);
loc_445A9B:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_445AB3;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_445A9B;
loc_445AB3:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_4760F0(); esp += 4; //call
	add(esp, (int32_t)0x64);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_445B10()
{
	static const void *const off_445AD0[] = {
		&&loc_445DD5,
		&&loc_4460AF,
		&&loc_4460C3,
		&&loc_4460D7,
		&&loc_4460E4,
		&&loc_4460E4,
		&&loc_4460E4,
		&&loc_4460E4,
	};
	static const void *const off_445AF0[] = {
		&&loc_4460A8,
		&&loc_446101,
		&&loc_446115,
		&&loc_446129,
		&&loc_445DE2,
		&&loc_445DE2,
		&&loc_445DE2,
		&&loc_446132,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	al = to8i(eax+0x1E8); //mov
	to8i(ebp-4) = al; //mov
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	edi = to32i(dword_511B48+eax*4); //mov
	edx = to32i(esi+0x24); //mov
	edi = to32i(edi+0x278); //mov
	test(edx, edx);
	if (jz())
		goto loc_445ECC;
	al = to8i(edx+3); //mov
	and_(eax, (int32_t)0xFF);
loc_445B4B:
	dl = al; //mov
	eax = to32i(esi+0x1E8); //mov
	ecx = to32i(dword_512208); //mov
	byte_50B38C[eax] = dl; //mov
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_445ED3;
	eax = to32i(dword_51220C); //mov
loc_445B6D:
	shl(eax, (int32_t)6);
	eax = to32i(dword_512270+eax); //mov
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_445C24;
	xor_(edx, edx);
	dl = to8i(ebp-4); //mov
	dl = (int32_t)(intptr_t)byte_50B3B4[edx]; //mov
	and_(edx, (int32_t)0xFF);
	ecx = to32i(esi+0x1F8); //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_445EEA;
	cmp(ecx, to32i(dword_5121FC));
	if (jnz())
		goto loc_445EEA;
	cmp(eax, (int32_t)0xF);
	if (jge())
		goto loc_445EEA;
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_445EEA;
	cmp(to32i(dword_512268), (int32_t)0);
	if (jz())
		goto loc_445EDD;
loc_445BCD:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_445F88;
	dl = to8i(ebp-4); //mov
loc_445BDD:
	ecx = 0x7F; //mov
	push32(0x40);
	ebx = to32i(dword_4D96B0); //mov
	to32i(ebp-8) = ecx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_445F8F;
	xor_(ebx, ebx);
loc_445BF7:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)1);
	to32i(ebp-0xC) = eax; //mov
	xor_(eax, eax);
	al = dl; //mov
	edx = (int32_t)(intptr_t)(eax+6); //lea
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ecx = to32i(ebp-8); //mov
	edx = to32i(ebp-0xC); //mov
	eax = to32i(dword_50B410+eax*4); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
loc_445C24:
	eax = to32i(dword_5121FC); //mov
	edx = to32i(esi+0x1F8); //mov
	dec(eax);
	cmp(eax, edx);
	if (jnz())
		goto loc_445C7B;
	xor_(eax, edx);
	al = to8i(ebp-4); //mov
	xor_(edx, edx);
	ecx = to32i(esi+0x1F8); //mov
	dl = (int32_t)(intptr_t)byte_50B3B4[eax]; //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_445C7B;
	cmp(byte_50B35C[eax], (int8_t)0);
	if (jnz())
		goto loc_44604E;
	ecx = 0x7F; //mov
	ebx = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(ebx, ebx);
	if (jz())
		goto loc_446044;
	xor_(ebx, ebx);
loc_445C6F:
	eax = to32i(dword_50B440); //mov
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
loc_445C7B:
	xor_(ebx, ebx);
	bl = to8i(ebp-4); //mov
	cmp(byte_50B35C[ebx], (int8_t)0);
	if (jz())
		goto loc_445CA1;
	eax = to32i(dword_50B394+ebx*4); //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_445CA1;
	xor_(ch, ch);
	byte_50B35C[ebx] = ch; //mov
loc_445CA1:
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	cmp(byte_50B384[eax], (int8_t)0);
	if (jz())
		goto loc_445CE7;
	cmp(byte_50B35C[eax], (int8_t)0);
	if (jnz())
		goto loc_445CE7;
	ecx = 0x7F; //mov
	eax = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(eax, eax);
	if (jz())
		goto loc_44605A;
	xor_(ebx, ebx);
loc_445CCE:
	eax = to32i(dword_50B440); //mov
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	xor_(bl, bl);
	byte_50B384[eax] = bl; //mov
loc_445CE7:
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	xor_(edx, edx);
	ecx = to32i(esi+0x1F8); //mov
	dl = (int32_t)(intptr_t)byte_50B3B4[eax]; //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_445D40;
	test(dl, dl);
	if (jnz())
		goto loc_445D1C;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_540F48); //mov
	ebx = to32i(dword_50B3BC+edx); //mov
	sub(eax, ebx);
	to32i(dword_50B3DC+edx) = eax; //mov
loc_445D1C:
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	dl = to8i(esi+0x1F8); //mov
	byte_50B3B4[eax] = dl; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(esi+0x234); //mov
	to32i(dword_50B3BC+edx) = eax; //mov
loc_445D40:
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jz())
		goto loc_445EC3;
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_445EC3;
	cmp(to32i(dword_4D5A2C), (int32_t)0);
	if (jz())
		goto loc_445EC3;
	cmp(to8i(byte_4D96A4), (int8_t)0);
	if (jnz())
		goto loc_445EC3;
	cmp(to32i(dword_4D5A38), (int32_t)0);
	if (jz())
		goto loc_445EC3;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_445D93;
	cmp(edi, (int32_t)2);
	if (jz())
		goto loc_445EC3;
loc_445D93:
	eax = to32i(dword_5121FC); //mov
	edx = to32i(esi+0x1F8); //mov
	dec(eax);
	cmp(eax, edx);
	if (jnz())
		goto loc_446064;
loc_445DA7:
	bl = 0x64; //mov
loc_445DA9:
	eax = to32i(dword_512268); //mov
	test(eax, eax);
	if (jbe())
		goto loc_445DE4;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_446139;
	cmp(edi, eax);
	if (jnz())
		goto loc_4460EB;
	eax = to32i(esi+0x1F8); //mov
	cmp(eax, (int32_t)7);
	if (ja())
		goto loc_445DE4;
	goto *off_445AD0[eax];
loc_445DD5:
	cmp(to32i(dword_5121FC), (int32_t)2);
	if (jnz())
		goto loc_4460A8;
loc_445DE2:
	bl = 0x32; //mov
loc_445DE4:
	eax = to32i(esi+0x2B8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	test(eax, eax);
	if (jle())
		goto loc_44617B;
loc_445DFF:
	ecx = to32i(dword_51221C); //mov
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	cmp(ecx, (int32_t)5);
	if (jnz())
		goto loc_446182;
loc_445E11:
	eax = 0x23; //mov
loc_445E16:
	cmp(edx, eax);
	if (jge())
		goto loc_445E1C;
	xor_(bl, bl);
loc_445E1C:
	cmp(bl, to8i(byte_4D5A05));
	if (jz())
		goto loc_445E33;
	xor_(eax, eax);
	al = bl; //mov
	esp -= 4; _sub_49DF4C(); esp += 4; //call
	to8i(byte_4D5A05) = bl; //mov
loc_445E33:
	cmp(to32i(esi+0x58C), (int32_t)0);
	if (jz())
		goto loc_44619E;
	cmp(to8i(byte_4D5BE2), (int8_t)0);
	if (jnz())
		goto loc_44619E;
	edx = 1; //mov
	bl = 1; //mov
	eax = edx; //mov
	to8i(byte_4D5BE2) = bl; //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_4D5A04); //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
loc_445E6F:
	eax = esi; //mov
	esp -= 4; _sub_449700(); esp += 4; //call
	edi = to32i(dword_51221C); //mov
	bl = al; //mov
	cmp(edi, (int32_t)7);
	if (jnz())
		goto loc_4461DB;
	cmp(to8i(byte_4D5A04), (int8_t)2);
	if (jnz())
		goto loc_4461DB;
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_4461C5;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_4461C5;
loc_445EAE:
	eax = to32i(esi+0x1E8); //mov
	dl = (int32_t)(intptr_t)byte_50B38C[eax]; //mov
	cmp(dl, (int8_t)3);
	if (jz())
		goto loc_446234;
loc_445EC3:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_445ECC:
	xor_(eax, eax);
	goto loc_445B4B;
loc_445ED3:
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	goto loc_445B6D;
loc_445EDD:
	cmp(to32i(dword_512208), (int32_t)0);
	if (jnz())
		goto loc_445BCD;
loc_445EEA:
	xor_(edx, edx);
	dl = to8i(ebp-4); //mov
	xor_(ecx, ecx);
	ebx = to32i(esi+0x1F8); //mov
	cl = (int32_t)(intptr_t)byte_50B3B4[edx]; //mov
	cmp(ecx, ebx);
	if (jz())
		goto loc_445F9D;
	test(ebx, ebx);
	if (jle())
		goto loc_445F9D;
	cmp(eax, (int32_t)0xF);
	if (jge())
		goto loc_445F9D;
	eax = to32i(dword_540F48); //mov
	ebx = to32i(dword_50B3BC+edx*4); //mov
	edx = to32i(dword_4D5A14); //mov
	sub(eax, ebx);
	cmp(eax, edx);
	if (jge())
		goto loc_445F99;
loc_445F2E:
	ecx = 0x7F; //mov
	ebx = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(ebx, ebx);
	if (jz())
		goto loc_446033;
	xor_(ebx, ebx);
loc_445F45:
	edx = 2; //mov
	eax = to32i(dword_50B440); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(ecx, ecx);
	cl = to8i(ebp-4); //mov
	edx = to32i(dword_540F48); //mov
	to32i(dword_50B394+ecx*4) = eax; //mov
	eax = to32i(dword_50B3BC+ecx*4); //mov
	sub(edx, eax);
	to32i(dword_4D5A14) = edx; //mov
	to32i(dword_50B3DC+ecx*4) = edx; //mov
	byte_50B35C[ecx] = 1; //mov
	goto loc_445C24;
loc_445F88:
	xor_(dl, dl);
	goto loc_445BDD;
loc_445F8F:
	ebx = 0x40; //mov
	goto loc_445BF7;
loc_445F99:
	test(edx, edx);
	if (jz())
		goto loc_445F2E;
loc_445F9D:
	xor_(eax, eax);
	al = to8i(ebp-4); //mov
	xor_(edx, edx);
	ebx = to32i(esi+0x1F8); //mov
	dl = (int32_t)(intptr_t)byte_50B3B4[eax]; //mov
	cmp(edx, ebx);
	if (jz())
		goto loc_445C24;
	cmp(ebx, (int32_t)1);
	if (jle())
		goto loc_445C24;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_540F48); //mov
	ecx = to32i(dword_50B3BC+edx); //mov
	ebx = to32i(dword_50B3DC+edx); //mov
	sub(eax, ecx);
	cmp(eax, ebx);
	if (jge())
		goto loc_445C24;
	ecx = 0x7F; //mov
	eax = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(eax, eax);
	if (jz())
		goto loc_44603D;
	xor_(ebx, ebx);
loc_445FF5:
	edx = 1; //mov
	eax = to32i(dword_50B440); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(edx, edx);
	dl = to8i(ebp-4); //mov
	ebx = to32i(dword_540F48); //mov
	ecx = to32i(dword_50B3BC+edx*4); //mov
	to32i(dword_50B394+edx*4) = eax; //mov
	sub(ebx, ecx);
	ah = 1; //mov
	to32i(dword_50B3DC+edx*4) = ebx; //mov
	byte_50B35C[edx] = ah; //mov
	goto loc_445C24;
loc_446033:
	ebx = 0x40; //mov
	goto loc_445F45;
loc_44603D:
	ebx = 0x40; //mov
	goto loc_445FF5;
loc_446044:
	ebx = 0x40; //mov
	goto loc_445C6F;
loc_44604E:
	byte_50B384[eax] = 1; //mov
	goto loc_445C7B;
loc_44605A:
	ebx = 0x40; //mov
	goto loc_445CCE;
loc_446064:
	cmp(edx, (int32_t)5);
	if (jle())
		goto loc_446076;
	cmp(to32i(dword_5121FC), (int32_t)8);
	if (jz())
		goto loc_445DA7;
loc_446076:
	cmp(to32i(esi+0x1F8), (int32_t)0);
	if (jnz())
		goto loc_44608F;
	cmp(to32i(dword_5121FC), (int32_t)2);
	if (jz())
		goto loc_44608F;
loc_446088:
	xor_(bl, bl);
	goto loc_445DA9;
loc_44608F:
	cmp(to32i(esi+0x1F8), (int32_t)1);
	if (jnz())
		goto loc_4460A1;
	cmp(to32i(dword_5121FC), (int32_t)8);
	if (jz())
		goto loc_446088;
loc_4460A1:
	bl = 0x32; //mov
	goto loc_445DA9;
loc_4460A8:
	xor_(bl, bl);
	goto loc_445DE4;
loc_4460AF:
	cmp(to32i(dword_5121FC), (int32_t)2);
	if (jnz())
		goto loc_445DE2;
	bl = 0x64; //mov
	goto loc_445DE4;
loc_4460C3:
	cmp(to32i(dword_5121FC), (int32_t)4);
	if (jnz())
		goto loc_445DE2;
	bl = 0x64; //mov
	goto loc_445DE4;
loc_4460D7:
	cmp(to32i(dword_5121FC), (int32_t)4);
	if (jnz())
		goto loc_445DE2;
loc_4460E4:
	bl = 0x64; //mov
	goto loc_445DE4;
loc_4460EB:
	eax = to32i(esi+0x1F8); //mov
	cmp(eax, (int32_t)7);
	if (ja())
		goto loc_445DE4;
	goto *off_445AF0[eax];
loc_446101:
	cmp(to32i(dword_5121FC), (int32_t)2);
	if (jz())
		goto loc_445DE2;
	xor_(bl, bl);
	goto loc_445DE4;
loc_446115:
	cmp(to32i(dword_5121FC), (int32_t)4);
	if (jz())
		goto loc_445DE2;
loc_446122:
	xor_(bl, bl);
	goto loc_445DE4;
loc_446129:
	cmp(to32i(dword_5121FC), (int32_t)4);
	if (jnz())
		goto loc_446122;
loc_446132:
	bl = 0x64; //mov
	goto loc_445DE4;
loc_446139:
	cmp(edi, (int32_t)2);
	if (jge())
		goto loc_446156;
	cmp(bl, (int8_t)0x64);
	if (jz())
		goto loc_446156;
	add(bl, (int8_t)0x64);
	cmp(bl, (int8_t)0x64);
	if (jbe())
		goto loc_445DE4;
	bl = 0x64; //mov
	goto loc_445DE4;
loc_446156:
	cmp(edi, (int32_t)4);
	if (jge())
		goto loc_445DE4;
	cmp(edi, (int32_t)2);
	if (jl())
		goto loc_445DE4;
	add(bl, (int8_t)0x32);
	cmp(bl, (int8_t)0x64);
	if (jbe())
		goto loc_445DE4;
	bl = 0x64; //mov
	goto loc_445DE4;
loc_44617B:
	neg(eax);
	goto loc_445DFF;
loc_446182:
	cmp(ecx, (int32_t)6);
	if (jz())
		goto loc_445E11;
	cmp(ecx, (int32_t)7);
	if (jz())
		goto loc_445E11;
	eax = 0x32; //mov
	goto loc_445E16;
loc_44619E:
	cmp(to32i(esi+0x58C), (int32_t)0);
	if (jnz())
		goto loc_445E6F;
	cmp(to8i(byte_4D5BE2), (int8_t)0);
	if (jz())
		goto loc_445E6F;
	xor_(dh, dh);
	to8i(byte_4D5BE2) = dh; //mov
	goto loc_445E6F;
loc_4461C5:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jz())
		goto loc_4461DB;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_445EAE;
loc_4461DB:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_44624E;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_44624E;
loc_4461ED:
	cl = to8i(byte_4D5A04); //mov
	cmp(bl, cl);
	if (jbe())
		goto loc_4462B1;
	xor_(eax, eax);
	xor_(edx, edx);
	al = cl; //mov
	dl = bl; //mov
	sub(edx, eax);
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4462B1;
loc_44620E:
	cmp(bl, to8i(byte_4D5A04));
	if (jz())
		goto loc_445EC3;
	xor_(eax, eax);
	xor_(edx, edx);
	al = bl; //mov
	to8i(byte_4D5A04) = bl; //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_446234:
	xor_(eax, eax);
	to8i(byte_4D5A04) = dl; //mov
	al = dl; //mov
	xor_(edx, edx);
	esp -= 4; _sub_49DF64(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44624E:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jz())
		goto loc_446260;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_4461ED;
loc_446260:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jz())
		goto loc_4462CA;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_4462CA;
loc_446272:
	ch = to8i(byte_4D5A04); //mov
	cmp(bl, ch);
	if (jnb())
		goto loc_4462E9;
	xor_(eax, eax);
	xor_(edx, edx);
	al = bl; //mov
	dl = ch; //mov
	sub(edx, eax);
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4462E9;
loc_44628B:
	cmp(bl, to8i(byte_4D5A04));
	if (jz())
		goto loc_445EC3;
	xor_(eax, eax);
	xor_(edx, edx);
	al = bl; //mov
	to8i(byte_4D5A04) = bl; //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4462B1:
	xor_(edx, edx);
	xor_(eax, eax);
	dl = to8i(byte_4D5A04); //mov
	al = bl; //mov
	sub(edx, eax);
	cmp(edx, (int32_t)1);
	if (jg())
		goto loc_44620E;
	goto loc_446260;
loc_4462CA:
	cmp(to32i(esi+0x288), (int32_t)0);
	if (jnz())
		goto loc_445EC3;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_446272;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4462E9:
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_4D5A04); //mov
	dl = bl; //mov
	sub(edx, eax);
	cmp(edx, (int32_t)1);
	if (jg())
		goto loc_44628B;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_446310()
{
	push32(edx);
	edx = 0x7F; //mov
loc_446316:
	xor_(eax, eax);
loc_446318:
	inc(eax);
	cmp(eax, (int32_t)0x2FFFD);
	if (jl())
		goto loc_446318;
	eax = edx; //mov
	dec(edx);
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	test(edx, edx);
	if (jge())
		goto loc_446316;
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jnz())
		goto loc_446363;
loc_446335:
	cmp(to8i(byte_4D5A48), (int8_t)0);
	if (jnz())
		goto loc_446379;
loc_44633E:
	esp -= 4; _sub_4762E0(); esp += 4; //call
	eax = 0x7F; //mov
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	eax = to32i(dword_4D5A34); //mov
	to32i(dword_4D5A30) = eax; //mov
	eax = to32i(dword_4D5A3C); //mov
	to32i(dword_4D5A20) = eax; //mov
	pop32(edx);
	return;
loc_446363:
	esp -= 4; _sub_49DB20(); esp += 4; //call
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_486404(); esp += 4; //call
	esp -= 4; _sub_476210(); esp += 4; //call
	goto loc_446335;
loc_446379:
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	goto loc_44633E;
}
Fn(void) Game::_sub_446390()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ah = to8i(byte_50B480); //mov
	inc(ah);
	edx = to32i(dword_4D5A1C); //mov
	to8i(byte_50B480) = ah; //mov
	test(edx, edx);
	if (jnz())
		goto loc_446429;
loc_4463AF:
	xor_(edx, edx);
	xor_(eax, eax);
	ebx = 0x200; //mov
	xor_(ecx, ecx);
loc_4463BA:
	inc(eax);
	add(edx, (int32_t)4);
	byte_50B383[eax] = cl; //mov
	byte_50B35B[eax] = cl; //mov
	byte_50B3B3[eax] = cl; //mov
	to32i(dword_50B3D8+edx) = ecx; //mov
	to32i(dword_50B360+edx) = ecx; //mov
	to32i(dword_50B3B8+edx) = ebx; //mov
	byte_50B313[eax] = cl; //mov
	cmp(eax, (int32_t)8);
	if (jl())
		goto loc_4463BA;
	cl = 2; //mov
	xor_(dh, dh);
	eax = to32i(dword_512DB4); //mov
	to8i(byte_4D5A0D) = dh; //mov
	to8i(byte_4D5A0E) = dh; //mov
	to32i(dword_4D5A14) = eax; //mov
	to8i(byte_4D5A04) = cl; //mov
	to8i(byte_4D5A05) = dh; //mov
	al = 1; //mov
	to8i(byte_4D5A48) = dh; //mov
	to8i(byte_4D5A18) = al; //mov
	to8i(byte_4D5A19) = al; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_446429:
	to8i(byte_4D5A0C) = 4; //mov
	esp -= 4; _sub_445140(); esp += 4; //call
	esp -= 4; _sub_444FB0(); esp += 4; //call
	goto loc_4463AF;
}
Fn(void) Game::_sub_446440()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_49E380(); esp += 4; //call
	esp -= 4; _sub_49E3E0(); esp += 4; //call
	ebx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_446462;
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49C618(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_446462:
	push32(esi);
	push32(ecx);
	edx = (int32_t)(intptr_t)aCNfs2seGameC_3; //mov
	esi = 0xE21; //mov
	push32(aNfs2_loadfilea);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(esi);
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49C618(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4464C0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x3C);
	edi = edx; //mov
	esi = ebx; //mov
	edx = to32i(ecx); //mov
	ebx = to32i(eax+8); //mov
	sub(edx, ebx);
	to32i(esp+0x30) = edx; //mov
	edx = to32i(ecx+4); //mov
	ebp = to32i(eax+0xC); //mov
	sub(edx, ebp);
	to32i(esp+0x34) = edx; //mov
	ecx = to32i(ecx+8); //mov
	edx = to32i(eax+0x10); //mov
	sub(ecx, edx);
	to32i(esp+0x38) = ecx; //mov
	ecx = (int32_t)(intptr_t)(eax+0x44); //lea
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	edx = ecx; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	ebx = esp; //mov
	edx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	ecx = to32i(esp+0x50); //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = esp; //mov
	push32(ecx);
	ebx = esi; //mov
	ecx = to32i(esp+0x50); //mov
	esp -= 4; _sub_480330(); esp += 4; //call
	add(esp, (int32_t)0x3C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_446530()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	edi = edx; //mov
	esi = to32i(ebx); //mov
	edx = to32i(eax+8); //mov
	sub(esi, edx);
	to32i(esp) = esi; //mov
	esi = to32i(ebx+4); //mov
	ebp = to32i(eax+0xC); //mov
	sub(esi, ebp);
	to32i(esp+4) = esi; //mov
	ebx = to32i(ebx+8); //mov
	edx = to32i(eax+0x10); //mov
	esi = (int32_t)(intptr_t)(eax+0x44); //lea
	sub(ebx, edx);
	eax = esp; //mov
	to32i(esp+8) = ebx; //mov
	edx = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	ebx = to32i(esp+0x28); //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(ebx);
	eax = esi; //mov
	ebx = edi; //mov
	esp -= 4; _sub_480330(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_446590()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_5117A0); //mov
	inc(ecx);
	ebx = 3; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_5117A0) = edx; //mov
	esp -= 4; _sub_4465C0(); esp += 4; //call
	ecx = to32i(dword_5117A0); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4465C0()
{
	push32(edx);
	eax = to32i(dword_5117A0); //mov
	edx = to32i(dword_512208); //mov
	shl(eax, (int32_t)2);
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_446641;
	edx = to32i(dword_4D5C44+eax); //mov
	eax = 0x1B80000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5117A0); //mov
	to32i(dword_50E108) = eax; //mov
	to32i(dword_50E048) = eax; //mov
	eax = 0x3C0000; //mov
	edx = to32i(dword_4D5C44+edx*4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5117A0); //mov
	to32i(dword_50E10C) = eax; //mov
	to32i(dword_50E04C) = eax; //mov
	eax = 0x5C0000; //mov
	edx = to32i(dword_4D5C44+edx*4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_50E110) = eax; //mov
	to32i(dword_50E050) = eax; //mov
	pop32(edx);
	return;
loc_446641:
	edx = to32i(dword_4D5C44+eax); //mov
	eax = 0x1F40000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5117A0); //mov
	to32i(dword_50E048) = eax; //mov
	eax = 0x6E0000; //mov
	edx = to32i(dword_4D5C44+edx*4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5117A0); //mov
	to32i(dword_50E04C) = eax; //mov
	eax = 0x960000; //mov
	edx = to32i(dword_4D5C44+edx*4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_50E050) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4466A0()
{
	eax = to32i(dword_5117A0); //mov
}
Fn(void) Game::_sub_4466B0()
{
	to32i(dword_5117A0) = eax; //mov
}
Fn(void) Game::_sub_4466C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x6C);
	edi = eax; //mov
	esi = edx; //mov
	ecx = ebx; //mov
	edx = 0x4000; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	edx = edi; //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	neg(edx);
	esp -= 4; _sub_49E780(); esp += 4; //call
	eax = esp; //mov
	edx = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_49E780(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = ecx; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	ebx = ecx; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	add(esp, (int32_t)0x6C);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_446720()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	esi = eax; //mov
	ebp = edx; //mov
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = ebx; //mov
	neg(eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	eax = ebp; //mov
	edx = esi; //mov
	neg(eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_49E780(); esp += 4; //call
	eax = esp; //mov
	edx = ebx; //mov
	esp -= 4; _sub_49E780(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = ecx; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	ebx = ecx; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_446790()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = to32i(eax+4); //mov
	ecx = to16i(eax); //movsx
	sar(edx, (int32_t)0x10);
	sub(edx, ecx);
	ebx = to32i(eax+8); //mov
	ecx = edx; //mov
	edx = to32i(eax+2); //mov
	sar(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	sub(ebx, edx);
	eax = ecx; //mov
	edx = ebx; //mov
	esp -= 4; _sub_49E630(); esp += 4; //call
	sub(eax, (int32_t)0x4000);
	sar(eax, (int32_t)8);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4467D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	edx = to32i(edx+0x78); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_51180C); //mov
	eax = to32i(edx+eax*8+0x478); //mov
	add(eax, (int32_t)8);
	edx = to32i(ecx+0xA8); //mov
	to32i(esp+4) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_446924;
loc_446812:
	esi = to32i(ecx+0xB0); //mov
	test(esi, esi);
	if (jle())
		goto loc_44692B;
	eax = esi; //mov
loc_446822:
	edi = (int32_t)(intptr_t)(eax+edx); //lea
	ah = to8i(ecx+0x1F4); //mov
	sar(edi, (int32_t)0x10);
	test(ah, (int8_t)2);
	if (jz())
		goto loc_446934;
	xor_(ebp, ebp);
loc_446839:
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, ebx);
	edx = to32i(esp+4); //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	xor_(eax, eax);
	ax = to16i(edx+0xE); //mov
	to32i(esp) = eax; //mov
	esi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	sub(eax, esi);
	esi = (int32_t)(intptr_t)byte_5114A0; //mov
	add(esi, eax);
	cmp(to8i(edx+0x13), (int8_t)2);
	if (jnz())
		goto loc_446959;
	eax = to8i(esi); //movsx
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_446959;
	cmp(edi, ebp);
	if (jl())
		goto loc_446959;
	cmp(edi, (int32_t)0x19);
	if (jge())
		goto loc_44693E;
	eax = 2; //mov
loc_44688F:
	esp -= 4; _sub_440C30(); esp += 4; //call
	to32i(esp) = eax; //mov
	dx = to16i(edx+0xE); //mov
	and_(edx, (int32_t)0xFFFF);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	dl = to8i(esp); //mov
	byte_5114A0[eax] = dl; //mov
	cmp(to8i(esi), (int8_t)0);
	if (jl())
		goto loc_446948;
	edx = to32i(ecx+0xB0); //mov
	eax = to32i(ecx+0xA8); //mov
	sar(edx, (int32_t)8);
	sar(eax, (int32_t)8);
	esp -= 4; _sub_49E630(); esp += 4; //call
	sar(eax, (int32_t)8);
	ecx = al; //movsx
	to8i(esi+1) = al; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, ebx);
	edx = to32i(esp+4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dx = to16i(eax+0xE); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	xor_(ebx, ebx);
	eax = to32i(byte_51149D+eax); //mov
	edx = 2; //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_440C00(); esp += 4; //call
	to8i(esi+2) = 0; //mov
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_446924:
	neg(edx);
	goto loc_446812;
loc_44692B:
	eax = esi; //mov
	neg(eax);
	goto loc_446822;
loc_446934:
	ebp = 0xB; //mov
	goto loc_446839;
loc_44693E:
	eax = 3; //mov
	goto loc_44688F;
loc_446948:
	to8i(esi) = 0xFE; //mov
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_446959:
	eax = to8i(esi); //movsx
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44696C;
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44696C:
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_446980()
{
	push32(edx);
	dl = 0xFF; //mov
	xor_(eax, eax);
loc_446985:
	add(eax, (int32_t)3);
	byte_51149D[eax] = dl; //mov
	xor_(dh, dh);
	byte_51149E[eax] = dh; //mov
	byte_51149F[eax] = dh; //mov
	cmp(eax, (int32_t)0x300);
	if (jnz())
		goto loc_446985;
	pop32(edx);
}
Fn(void) Game::_sub_4469B0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(edx, edx);
	to32i(dword_5117D4) = edx; //mov
	to32i(dword_5117C8) = edx; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4469CE;
	pop32(edx);
	pop32(ecx);
	return;
loc_4469CE:
	push32(edi);
	push32(esi);
	push32(ebx);
	eax = ecx; //mov
	esp -= 4; _sub_458800(); esp += 4; //call
	ecx = eax; //mov
	edi = eax; //mov
	esp -= 4; _sub_458700(); esp += 4; //call
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_458780(); esp += 4; //call
	cmp(eax, (int32_t)0x16800);
	if (jle())
		goto loc_446A71;
	eax = ecx; //mov
	esp -= 4; _sub_458780(); esp += 4; //call
loc_4469FC:
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aPersist; //mov
	esp -= 4; _sub_4471C0(); esp += 4; //call
	to32i(dword_5117A4) = eax; //mov
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_458730(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_446A64;
	eax = edi; //mov
	esp -= 4; _sub_458700(); esp += 4; //call
	xor_(ebx, ebx);
	esi = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_446A64;
loc_446A29:
	eax = to32i(dword_5117A4); //mov
	edx = ebx; //mov
	esp -= 4; _sub_4586C0(); esp += 4; //call
	ecx = eax; //mov
	ax = to16i(eax+4); //mov
	cmp(ax, (int16_t)7);
	if (jnb())
		goto loc_446A78;
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_446A5F;
	edx = (int32_t)(intptr_t)dword_50E2A0; //mov
	eax = ecx; //mov
	esp -= 4; _sub_446F50(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_50FBA0; //mov
	eax = ecx; //mov
	esp -= 4; _sub_446F50(); esp += 4; //call
loc_446A5F:
	inc(ebx);
	cmp(ebx, esi);
	if (jl())
		goto loc_446A29;
loc_446A64:
	eax = edi; //mov
	esp -= 4; _sub_4587B0(); esp += 4; //call
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	return;
loc_446A71:
	eax = 0x16800; //mov
	goto loc_4469FC;
loc_446A78:
	if (ja())
		goto loc_446A82;
	to32i(dword_5117C8) = ecx; //mov
	goto loc_446A5F;
loc_446A82:
	cmp(ax, (int16_t)8);
	if (ja())
		goto loc_446A90;
	to32i(dword_5117D4) = ecx; //mov
	goto loc_446A5F;
loc_446A90:
	cmp(ax, (int16_t)0xF);
	if (jnz())
		goto loc_446A5F;
	eax = ecx; //mov
	esp -= 4; _sub_44B080(); esp += 4; //call
	goto loc_446A5F;
}
Fn(void) Game::_sub_446AA0()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(dword_5117AC); //mov
	ebx = to32i(eax+0x90); //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_446AD5;
	cmp(edx, to32i(eax+0xB4));
	if (jl())
		goto loc_446AFF;
	edx = to32i(eax+0x94); //mov
	dec(edx);
	cmp(ecx, edx);
	if (jl())
		goto loc_446AFF;
	to32i(eax+0x90) = ecx; //mov
loc_446ACD:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_446AD5:
	cmp(ecx, ebx);
	if (jnz())
		goto loc_446AFF;
	ecx = to32i(eax+0xB4); //mov
	add(ecx, (int32_t)0x1F4);
	cmp(edx, ecx);
	if (jl())
		goto loc_446ACD;
	to32i(eax+0x90) = 0xFFFFFFFF; //mov
	to32i(eax+0x94) = 0xFFFFFFFF; //mov
	goto loc_446ACD;
loc_446AFF:
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_446B20()
{
	static const void *const off_446B10[] = {
		&&loc_446B8C,
		&&loc_446B8C,
		&&loc_446B8C,
		&&loc_446C6E,
	};
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	edx = to32i(dword_50DF9C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)6);
	add(eax, (int32_t)(intptr_t)dword_50DFA0);
	to32i(eax+0x90) = 0xFFFFFFFF; //mov
	to32i(eax+0x94) = 0xFFFFFFFF; //mov
	to32i(eax+0xB4) = 0; //mov
	to32i(eax+0x84) = 1; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0xBC) = edx; //mov
	to32i(eax) = edi; //mov
	to32i(eax+0x98) = ebx; //mov
	to32i(eax+0x9C) = ecx; //mov
	cmp(esi, (int32_t)3);
	if (ja())
		goto loc_446BEC;
	goto *off_446B10[esi];
loc_446B8C:
	to32i(eax+0xA4) = 0x1F40000; //mov
	to32i(eax+0xA8) = 0x1F40000; //mov
	to32i(eax+0xAC) = 0x6E0000; //mov
	to32i(eax+0xB0) = 0x960000; //mov
	to32i(eax+0xB4) = 0x7D0; //mov
	to32i(eax+0xB8) = 0x2A; //mov
loc_446BC8:
	edx = to32i(eax+0x98); //mov
	to32i(eax+0xA0) = 0xFFFB0000; //mov
	to32i(edx+0x1C) = 0; //mov
	eax = to32i(eax+0x98); //mov
	to32i(eax+0x20) = 0; //mov
loc_446BEC:
	eax = to32i(dword_50DF9C); //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(dword_50DF9C) = edx; //mov
	pop32(edi);
	pop32(esi);
	return;
loc_446C6E:
	to32i(eax+0xA4) = 0x960000; //mov
	to32i(eax+0xA8) = 0x640000; //mov
	to32i(eax+0xAC) = 0x280000; //mov
	to32i(eax+0xB0) = (int32_t)(intptr_t)dword_500000; //mov
	to32i(eax+0xB4) = 0xFA; //mov
	to32i(eax+0xB8) = 6; //mov
	goto loc_446BC8;
}
Fn(void) Game::_sub_446CB0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	ecx = (int32_t)(intptr_t)dword_50DFA0; //mov
	shl(eax, (int32_t)6);
	edx = to32i(dword_5222DC); //mov
	add(ecx, eax);
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_446CFB;
loc_446CCE:
	edx = to32i(ecx+0xBC); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_50E2A0; //mov
	shl(eax, (int32_t)8);
	add(edx, eax);
	to32i(dword_5117FC) = edx; //mov
	to32i(dword_5117AC) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_446CFB:
	eax = to32i(dword_50DFB0); //mov
	to32i(ecx+0x10) = eax; //mov
	goto loc_446CCE;
}
Fn(void) Game::_sub_446D10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = 0x1234; //mov
	ebx = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	to32i(dword_50DF9C) = ecx; //mov
	to32i(dword_50DF98) = edx; //mov
loc_446D2D:
	add(eax, (int32_t)0xC0);
	to32i(dword_50DEE0+eax) = ebx; //mov
	cmp(eax, (int32_t)0x300);
	if (jnz())
		goto loc_446D2D;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_446D50()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x5C);
	to32i(esp+0x38) = edx; //mov
	to32i(esp+0x58) = ebx; //mov
	edi = to32i(esp+0x58); //mov
	ecx = to32i(esp+0x38); //mov
	xor_(edx, edx);
	ebx = to32i(ebx+0x18); //mov
	to32i(esp+0x50) = edx; //mov
	to32i(edi+0x14) = ebx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_446E84;
	to32i(esp+0x3C) = eax; //mov
loc_446D7F:
	ebp = to32i(esp+0x3C); //mov
	xor_(eax, eax);
	xor_(edx, edx);
	to32i(esp+0x4C) = eax; //mov
	to32i(esp+0x48) = edx; //mov
	eax = to32i(esp+0x3C); //mov
	ebp = to32i(ebp+0); //mov
	to32i(esp+0x40) = eax; //mov
	to32i(esp+0x54) = eax; //mov
	to32i(esp+0x44) = eax; //mov
loc_446DA2:
	eax = to32i(esp+0x58); //mov
	imul32(ebx, to32i(eax+0x14), 0x1C);
	eax = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)(eax+ebx); //lea
	xor_(ebx, ebx);
	esi = to32i(esp+0x4C); //mov
	bx = to16i(ebp+0); //mov
	add(ebx, esi);
	imul32(ebx, 0x1C);
	dl = to8i(ebp+3); //mov
	add(eax, ebx);
	test(dl, (int8_t)0x5E);
	if (jz())
		goto loc_446F32;
	test(dl, (int8_t)0x50);
	if (jz())
		goto loc_446EC7;
	test(dl, (int8_t)0xE);
	if (jz())
		goto loc_446EC7;
	test(dl, (int8_t)0x10);
	if (jz())
		goto loc_446E8C;
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	xor_(edx, edx);
loc_446DEE:
	esp -= 4; _sub_4351C4(); esp += 4; //call
loc_446DF3:
	al = to8i(ebp+3); //mov
	test(al, (int8_t)2);
	if (jz())
		goto loc_446EA3;
	ebx = esp; //mov
	edx = 2; //mov
loc_446E05:
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
loc_446E09:
	esp -= 4; _sub_4351C4(); esp += 4; //call
loc_446E0E:
	cmp(to32i(esp+0x4C), (int32_t)0);
	if (jnz())
		goto loc_446E1C;
	eax = to32i(esp+0x54); //mov
	to32i(eax+4) = edi; //mov
loc_446E1C:
	edi = to32i(esp+0x40); //mov
	edx = to32i(esp+0x48); //mov
	ecx = 7; //mov
	edi = to32i(edi+4); //mov
	esi = esp; //mov
	add(edi, edx);
	eax = to32i(esp+0x58); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	inc(to32i(eax+0x14));
loc_446E39:
	esi = to32i(esp+0x4C); //mov
	ebx = to32i(esp+0x48); //mov
	inc(esi);
	add(ebx, (int32_t)0x1C);
	to32i(esp+0x4C) = esi; //mov
	to32i(esp+0x48) = ebx; //mov
	cmp(esi, (int32_t)1);
	if (jl())
		goto loc_446DA2;
	eax = to32i(ebp+4); //mov
	sar(eax, (int32_t)0x18);
	cmp(eax, esi);
	if (jg())
		goto loc_446DA2;
	ebx = to32i(esp+0x3C); //mov
	esi = to32i(esp+0x50); //mov
	edi = to32i(esp+0x38); //mov
	add(ebx, (int32_t)8);
	inc(esi);
	to32i(esp+0x3C) = ebx; //mov
	to32i(esp+0x50) = esi; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_446D7F;
loc_446E84:
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_446E8C:
	test(dl, (int8_t)0x40);
	if (jz())
		goto loc_446DF3;
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	edx = 1; //mov
	goto loc_446DEE;
loc_446EA3:
	test(al, (int8_t)4);
	if (jnz())
		goto loc_446EBB;
	test(al, (int8_t)8);
	if (jz())
		goto loc_446E0E;
	ebx = esp; //mov
	edx = 4; //mov
	goto loc_446E05;
loc_446EBB:
	ebx = esp; //mov
	edx = 3; //mov
	goto loc_446E05;
loc_446EC7:
	bh = to8i(ebp+3); //mov
	test(bh, (int8_t)0x50);
	if (jz())
		goto loc_446EF2;
	test(bh, (int8_t)0x10);
	if (jnz())
		goto loc_446EE9;
	test(bh, (int8_t)0x40);
	if (jz())
		goto loc_446E0E;
	ebx = esp; //mov
	edx = 1; //mov
	goto loc_446E09;
loc_446EE9:
	ebx = esp; //mov
	xor_(edx, edx);
	goto loc_446E09;
loc_446EF2:
	test(bh, (int8_t)0xE);
	if (jz())
		goto loc_446E0E;
	test(bh, (int8_t)2);
	if (jnz())
		goto loc_446F1A;
	test(bh, (int8_t)4);
	if (jnz())
		goto loc_446F26;
	test(bh, (int8_t)8);
	if (jz())
		goto loc_446E0E;
	ebx = esp; //mov
	edx = 4; //mov
	goto loc_446E09;
loc_446F1A:
	ebx = esp; //mov
	edx = 2; //mov
	goto loc_446E09;
loc_446F26:
	ebx = esp; //mov
	edx = 3; //mov
	goto loc_446E09;
loc_446F32:
	test(esi, esi);
	if (jnz())
		goto loc_446E39;
	ebx = to32i(esp+0x44); //mov
	to32i(ebx+4) = eax; //mov
	goto loc_446E39;
}
Fn(void) Game::_sub_446F50()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = to32i(dword_511800); //mov
	ecx = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_446F80;
	xor_(ebx, ebx);
	esi = (int32_t)(intptr_t)(eax+8); //lea
	bx = to16i(eax+6); //mov
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_446F80;
	eax = esi; //mov
loc_446F70:
	inc(edx);
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)8);
	add(eax, (int32_t)0xA);
	cmp(edx, ebx);
	if (jl())
		goto loc_446F70;
loc_446F80:
	to32i(dword_511800) = ebx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_446F90()
{
	push32(edx);
	edx = to32i(dword_5117E0); //mov
	test(edx, edx);
	if (jnz())
		goto loc_446FA7;
	eax = to32i(dword_5117E8); //mov
	esp -= 4; _sub_42E8F0(); esp += 4; //call
	pop32(edx);
	return;
loc_446FA7:
	push32(ecx);
	push32(ebx);
	eax = edx; //mov
	esp -= 4; _sub_49E4F0(); esp += 4; //call
	xor_(ecx, ecx);
	push32(0);
	ebx = to32i(dword_5117D0); //mov
	edx = to32i(dword_5117E8); //mov
	to32i(dword_5117E4) = eax; //mov
	eax = to32i(dword_5117E0); //mov
	esp -= 4; _sub_4470C0(); esp += 4; //call
	ebx = (int32_t)(intptr_t)dword_5117D8; //mov
	eax = to32i(dword_5117E4); //mov
	edx = to32i(dword_511800); //mov
	to32i(dword_5117EC) = eax; //mov
	to32i(dword_5117F0) = eax; //mov
	eax = (int32_t)(intptr_t)dword_50E2A0; //mov
	esp -= 4; _sub_446D50(); esp += 4; //call
	ebx = (int32_t)(intptr_t)dword_5117D8; //mov
	eax = to32i(dword_5117E4); //mov
	edx = to32i(dword_511800); //mov
	to32i(dword_5117EC) = eax; //mov
	eax = (int32_t)(intptr_t)dword_50FBA0; //mov
	esp -= 4; _sub_446D50(); esp += 4; //call
	eax = to32i(dword_5117E0); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_5117E0) = ecx; //mov
	pop32(ebx);
	pop32(ecx);
	eax = to32i(dword_5117E8); //mov
	esp -= 4; _sub_42E8F0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_447040()
{
	push32(ebx);
	push32(edx);
	eax = to32i(dword_51221C); //mov
	edx = to32i(dword_51222C); //mov
	to32i(dword_5117B0) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_447089;
	eax = (int32_t)(intptr_t)a0m_qfs; //mov
	xor_(edx, edx);
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_5117E0) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_447073;
loc_447070:
	pop32(edx);
	pop32(ebx);
	return;
loc_447073:
	edx = eax; //mov
	xor_(ebx, ebx);
	eax = 1; //mov
	to32i(dword_5117D0) = eax; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_447089:
	eax = (int32_t)(intptr_t)a0_qfs; //mov
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_5117E0) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_447070;
	edx = eax; //mov
	xor_(ebx, ebx);
	eax = 1; //mov
	to32i(dword_5117D0) = eax; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4470C0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x144);
	esi = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x140) = ebx; //mov
	edx = 0xFFFFFFFF; //mov
	xor_(eax, eax);
loc_4470DB:
	add(eax, (int32_t)4);
	to32i(esp+eax-4) = edx; //mov
	cmp(eax, (int32_t)0x140);
	if (jnz())
		goto loc_4470DB;
	ecx = 1; //mov
	xor_(edi, edi);
	to32i(dword_4D5C40) = ecx; //mov
loc_4470F6:
	eax = esi; //mov
	esp -= 4; _sub_49E4F0(); esp += 4; //call
	cmp(edi, eax);
	if (jl())
		goto loc_44713F;
	edx = (int32_t)(intptr_t)aPal; //mov
	eax = esi; //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_44711A;
	esp -= 4; _sub_49E520(); esp += 4; //call
	edi = eax; //mov
loc_44711A:
	test(edi, edi);
	if (jnz())
		goto loc_44714B;
loc_44711E:
	xor_(edi, edi);
loc_447120:
	eax = esi; //mov
	esp -= 4; _sub_49E4F0(); esp += 4; //call
	cmp(edi, eax);
	if (jl())
		goto loc_447156;
	xor_(ebx, ebx);
	to32i(dword_4D5C40) = ebx; //mov
	add(esp, (int32_t)0x144);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_44713F:
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_49E4F4(); esp += 4; //call
	inc(edi);
	goto loc_4470F6;
loc_44714B:
	add(edi, (int32_t)0x10);
	to32i(off_4DA200) = edi; //mov
	goto loc_44711E;
loc_447156:
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_49E4F4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_447166;
	inc(edi);
	goto loc_447120;
loc_447166:
	ebx = to32i(esp+0x140); //mov
	ecx = ebp; //mov
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4352C0(); esp += 4; //call
	add(ebp, (int32_t)0x1C);
	inc(edi);
	goto loc_447120;
}
Fn(void) Game::_sub_447180()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	to32i(eax) = 0xFFFFFFFF; //mov
	to32i(eax+0x18) = 0; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	xor_(ebx, ebx);
	add(edx, eax);
	eax = (int32_t)(intptr_t)aArtres; //mov
	shl(edx, (int32_t)2);
	esp -= 4; _sub_4471C0(); esp += 4; //call
	to32i(ecx+0xC) = 0; //mov
	to32i(ecx+0x10) = eax; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4471C0()
{
	push32(ecx);
	ecx = to32i(dword_4D5C3C); //mov
	add(ecx, edx);
	eax = edx; //mov
	to32i(dword_4D5C3C) = ecx; //mov
	esp -= 4; _sub_49E3E0(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4471E0;
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_4471E0:
	push32(esi);
	push32(edx);
	ebx = (int32_t)(intptr_t)aCNfs2seGameC_3; //mov
	esi = 0x92E; //mov
	push32(aMallocReturned);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(esi);
	eax = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_447210()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	esi = ebx; //mov
	ebx = esp; //mov
	edi = (int32_t)(intptr_t)(edx+8); //lea
	add(eax, (int32_t)8);
	edx = edi; //mov
	esp -= 4; _sub_440DF0(); esp += 4; //call
	ecx = eax; //mov
	sar(ecx, (int32_t)0xC);
	imul32(ecx, ecx);
	sar(ecx, (int32_t)0xA);
	test(ecx, ecx);
	if (jz())
		goto loc_4472AA;
	eax = 0x10000; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x7F);
	if (jge())
		goto loc_4472A3;
loc_44724B:
	ecx = eax; //mov
loc_44724D:
	eax = to32i(esp); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x40);
	esp -= 4; _sub_442250(); esp += 4; //call
	ebx = eax; //mov
	eax = 0x23; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	cmp(to16i(edi+0xE), (int16_t)1);
	if (jnz())
		goto loc_4472DE;
	edx = to32i(dword_4EC64C); //mov
	and_(edx, (int32_t)0x3F);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	cmp(eax, to32i(dword_4D5C38));
	if (jz())
		goto loc_4472B1;
loc_44729A:
	eax = esi; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4472A3:
	eax = 0x7F; //mov
	goto loc_44724B;
loc_4472AA:
	ecx = 0x7F; //mov
	goto loc_44724D;
loc_4472B1:
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax); //mov
	push32(edx);
	eax = 0xF; //mov
	push32(ebx);
	xor_(edx, edx);
	ebx = 0x40; //mov
	dx = to16i(edi+0xC); //mov
	esp -= 4; _sub_444770(); esp += 4; //call
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)7);
	to32i(dword_4D5C38) = eax; //mov
	goto loc_44729A;
loc_4472DE:
	test(esi, esi);
	if (jnz())
		goto loc_44729A;
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax); //mov
	push32(edx);
	eax = 0xE; //mov
	push32(ebx);
	xor_(edx, edx);
	ebx = 0x40; //mov
	dx = to16i(edi+0xC); //mov
	esi = 1; //mov
	esp -= 4; _sub_444770(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_447310()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = to32i(dword_51180C); //mov
	to32i(esp) = eax; //mov
	ebx = edx; //mov
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ecx, eax);
	shl(ecx, (int32_t)2);
	sub(ecx, eax);
	shl(ecx, (int32_t)3);
	eax = (int32_t)(intptr_t)(esi+ecx); //lea
	edx = 4; //mov
	eax = to32i(eax+0x450); //mov
	xor_(edi, edi);
	esp -= 4; _sub_475080(); esp += 4; //call
	esi = to32i(dword_51180C); //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	di = to16i(eax+6); //mov
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_44738E;
	to32i(esp+8) = ecx; //mov
	sub(ebx, (int32_t)0x12);
	ebp = to32i(esp+8); //mov
	to32i(esp+4) = ebx; //mov
loc_44736B:
	ecx = to32i(esp+4); //mov
	add(ecx, eax);
	ecx = (int32_t)(intptr_t)(eax+eax); //lea
	ebx = (int32_t)(intptr_t)(esi+ebp); //lea
	add(edx, (int32_t)2);
	add(ebx, ecx);
	cx = to16i(edx-2); //mov
	inc(eax);
	to16i(ebx+0x49C) = cx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_44736B;
loc_44738E:
	cmp(edi, (int32_t)0x64);
	if (jge())
		goto loc_4473C4;
	eax = to32i(esp); //mov
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ecx, eax);
	shl(ecx, (int32_t)2);
	sub(ecx, eax);
	shl(ecx, (int32_t)3);
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	edx = (int32_t)(intptr_t)(esi+ecx); //lea
loc_4473AD:
	add(eax, (int32_t)2);
	to16i(edx+eax+0x49A) = 0xFFFF; //mov
	cmp(eax, (int32_t)0xC8);
	if (jl())
		goto loc_4473AD;
loc_4473C4:
	to32i(dword_51180C) = esi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4473E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xA8);
	esi = to32i(esp+0xB8); //mov
	ebp = eax; //mov
	to32i(esp+0x80) = edx; //mov
	to32i(esp+0x84) = ebx; //mov
	to32i(esp+0x7C) = ecx; //mov
	ebx = to32i(esp+0xBC); //mov
	add(esi, (int32_t)8);
	eax = to32i(edx); //mov
	xor_(ecx, ecx);
	to32i(esp+0x60) = eax; //mov
	xor_(eax, eax);
	xor_(edx, edx);
	ax = to16i(esi-2); //mov
	to32i(esp+0x94) = edx; //mov
	to32i(esp+0xA0) = eax; //mov
	eax = (int32_t)(intptr_t)(ebx+8); //lea
loc_44742F:
	xor_(edi, edi);
	di = to16i(ebx+6); //mov
	cmp(ecx, edi);
	if (jl())
		goto loc_4474CC;
	edx = to32i(esp+0x7C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	to32i(esp+0x88) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+8); //lea
	to32i(esp+0x90) = eax; //mov
	eax = to32i(esp+0xC0); //mov
	sar(eax, (int32_t)0xC);
	to32i(esp+0x8C) = eax; //mov
loc_447474:
	eax = to32i(esp+0xA0); //mov
	dec(eax);
	to32i(esp+0xA0) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_447845;
	eax = to32i(esp+0x8C); //mov
	imul32(eax, eax);
	sar(eax, (int32_t)6);
	xor_(ecx, ecx);
	to32i(esp+0x98) = eax; //mov
	ah = to8i(esi+2); //mov
	to32i(esp+0x9C) = ecx; //mov
	cmp(ah, (int8_t)3);
	if (jz())
		goto loc_4474DF;
	cmp(ah, (int8_t)4);
	if (jz())
		goto loc_447562;
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_44777F;
	xor_(eax, eax);
	ax = to16i(esi); //mov
	add(esi, eax);
	goto loc_447474;
loc_4474CC:
	to32i(dword_50B4B0+edx) = eax; //mov
	add(edx, (int32_t)4);
	edi = to32i(eax); //mov
	inc(ecx);
	add(eax, edi);
	goto loc_44742F;
loc_4474DF:
	eax = esp; //mov
	ecx = (int32_t)(intptr_t)(esp+0x48); //lea
	edx = 1; //mov
	push32(eax);
	ebx = to32i(dword_540F48); //mov
	eax = esi; //mov
	esp -= 4; _sub_440AB0(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(esi+3); //mov
	edi = to32i(dword_50B4B0+eax*4); //mov
	xor_(eax, eax);
	ecx = (int32_t)(intptr_t)(esp+0x48); //lea
	ax = to16i(edi+4); //mov
	edx = esp; //mov
	esp -= 4; _sub_4496C0(); esp += 4; //call
	to32i(esp+0x78) = eax; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(edi+8); //lea
	xor_(ebx, ebx);
	push32(eax);
	bx = to16i(edi+4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4464C0(); esp += 4; //call
	cmp(to32i(esp+0xC0), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44762C;
	edx = to32i(esp+0x90); //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_4495E0(); esp += 4; //call
	cmp(eax, to32i(esp+0x98));
	if (jl())
		goto loc_44762C;
	xor_(eax, eax);
	ax = to16i(esi); //mov
	add(esi, eax);
	goto loc_447474;
loc_447562:
	xor_(eax, eax);
	al = to8i(esi+3); //mov
	edi = to32i(dword_50B4B0+eax*4); //mov
	xor_(eax, eax);
	ax = to16i(edi+4); //mov
	edx = to32i(esp+0x88); //mov
	esp -= 4; _sub_4496C0(); esp += 4; //call
	to32i(esp+0x68) = eax; //mov
	to32i(esp+0x78) = eax; //mov
	eax = to32i(dword_51180C); //mov
	add(eax, edx);
	eax = to32i(eax+0x478); //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	eax = to32i(esi+4); //mov
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esi+8); //mov
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(esp+0x50) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x10); //mov
	imul32(eax, 0x14);
	to32i(esp+0x9C) = 1; //mov
	ax = to16i(edx+eax+0xE); //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = (int32_t)(intptr_t)byte_5114A0; //mov
	eax = (int32_t)(intptr_t)(eax+eax*2); //lea
	add(ecx, eax);
	edx = (int32_t)(intptr_t)(edi+8); //lea
	eax = to8i(ecx); //movsx
	to32i(esp+0xA4) = edx; //mov
	cmp(eax, (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_44769F;
	eax = edx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_446790(); esp += 4; //call
	edx = to8i(ecx+1); //movsx
	to8i(ecx+2) = al; //mov
	eax = al; //movsx
	shl(edx, (int32_t)8);
	shl(eax, (int32_t)8);
	ecx = to32i(esp+0x68); //mov
	esp -= 4; _sub_4466C0(); esp += 4; //call
	ebx = to32i(esp+0xA4); //mov
	push32(ecx);
	edx = (int32_t)(intptr_t)(esp+0x28); //lea
	eax = ebp; //mov
	push32(ebx);
	xor_(ebx, ebx);
	ecx = (int32_t)(intptr_t)(esp+0x50); //lea
loc_447623:
	bx = to16i(edi+4); //mov
	esp -= 4; _sub_4464C0(); esp += 4; //call
loc_44762C:
	xor_(edx, edx);
	dx = to16i(edi+6); //mov
	imul32(edx, 0x24);
	eax = (int32_t)(intptr_t)(esp+0x64); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_447474;
	xor_(edx, edx);
	dx = to16i(edi+4); //mov
	imul32(edx, 6);
	ecx = to32i(esp+0x9C); //mov
	push32(ecx);
	ebx = to32i(esp+0x68); //mov
	eax = (int32_t)(intptr_t)(edi+8); //lea
	push32(0);
	add(edx, eax);
	xor_(eax, eax);
	ecx = to32i(esp+0x80); //mov
	ax = to16i(edi+6); //mov
	call(to32i(dword_5117CC));
	test(eax, eax);
	if (jnz())
		goto loc_447804;
loc_44767D:
	xor_(eax, eax);
	edx = to32i(esp+0x94); //mov
	ax = to16i(edi+6); //mov
	add(edx, eax);
	xor_(eax, eax);
	ax = to16i(esi); //mov
	to32i(esp+0x94) = edx; //mov
	add(esi, eax);
	goto loc_447474;
loc_44769F:
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4476C5;
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_4408B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4476E7;
	eax = to8i(ecx); //movsx
	esp -= 4; _sub_440BC0(); esp += 4; //call
	to8i(ecx) = 0xFE; //mov
	goto loc_447474;
loc_4476C5:
	edx = to32i(esp+0x68); //mov
	ecx = to32i(esp+0xA4); //mov
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	push32(edx);
	xor_(edx, edx);
	eax = ebp; //mov
	dx = to16i(edi+4); //mov
	esp -= 4; _sub_446530(); esp += 4; //call
	goto loc_44762C;
loc_4476E7:
	eax = to32i(esp+0xA4); //mov
	esp -= 4; _sub_446790(); esp += 4; //call
	to8i(ecx+2) = al; //mov
	eax = to32i(esp+0x54); //mov
	ebx = to32i(esp+0x48); //mov
	edx = to32i(esp+0x4C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x58); //mov
	to32i(esp+0x48) = ebx; //mov
	ebx = to32i(esp+0x50); //mov
	add(edx, eax);
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x4C) = edx; //mov
	add(ebx, eax);
	edx = (int32_t)(intptr_t)(esp+0x6C); //lea
	to32i(esp+0x50) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x70); //lea
	eax = to8i(ecx); //movsx
	esp -= 4; _sub_440A40(); esp += 4; //call
	edx = to32i(esp+0x6C); //mov
	ebx = to8i(ecx+1); //movsx
	eax = to8i(ecx+2); //movsx
	ecx = to32i(esp+0x70); //mov
	shl(eax, (int32_t)8);
	shl(edx, (int32_t)0x10);
	to32i(esp+0x74) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	shl(ebx, (int32_t)8);
	ecx = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = to32i(esp+0x74); //mov
	esp -= 4; _sub_446720(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	eax = to32i(esp+0xA4); //mov
	push32(ebx);
	ecx = (int32_t)(intptr_t)(esp+0x4C); //lea
	edx = (int32_t)(intptr_t)(esp+0x28); //lea
	push32(eax);
	xor_(ebx, ebx);
	eax = ebp; //mov
	goto loc_447623;
loc_44777F:
	eax = to32i(esi+4); //mov
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esi+8); //mov
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(esp+0x50) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+3); //mov
	edi = to32i(dword_50B4B0+eax*4); //mov
	xor_(eax, eax);
	ax = to16i(edi+4); //mov
	esp -= 4; _sub_4496C0(); esp += 4; //call
	to32i(esp+0x78) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_447474;
	cmp(to32i(esp+0xC0), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4477E6;
	edx = to32i(esp+0x90); //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_4495E0(); esp += 4; //call
	cmp(eax, to32i(esp+0x98));
	if (jl())
		goto loc_4477E6;
	xor_(eax, eax);
	ax = to16i(esi); //mov
	add(esi, eax);
	goto loc_447474;
loc_4477E6:
	ecx = to32i(esp+0x78); //mov
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	eax = ebp; //mov
	xor_(edx, edx);
	push32(ecx);
	dx = to16i(edi+4); //mov
	ecx = (int32_t)(intptr_t)(edi+8); //lea
	esp -= 4; _sub_446530(); esp += 4; //call
	goto loc_44762C;
loc_447804:
	imul32(edx, eax, 0x24);
	eax = (int32_t)(intptr_t)(esp+0x64); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	ebx = to32i(esp+0x60); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_44783D;
	edx = to32i(esp+0x84); //mov
	eax = to32i(esp+0x64); //mov
	to32i(edx) = eax; //mov
loc_447825:
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	sub(to32i(esp+0x60), (int32_t)0x24);
	goto loc_44767D;
loc_44783D:
	eax = to32i(esp+0x64); //mov
	to32i(ebx) = eax; //mov
	goto loc_447825;
loc_447845:
	edx = to32i(esp+0x80); //mov
	eax = to32i(esp+0x60); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x94); //mov
	add(esp, (int32_t)0xA8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_447870()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x164);
	edi = eax; //mov
	to32i(esp+0x114) = edx; //mov
	to32i(esp+0x110) = ebx; //mov
	esp -= 4; _sub_4493C0(); esp += 4; //call
	to32i(esp+0x120) = eax; //mov
	xor_(eax, eax);
loc_447898:
	add(eax, (int32_t)4);
	xor_(edx, edx);
	to32i(esp+eax+0xCC) = edx; //mov
	to32i(esp+eax+0xBC) = edx; //mov
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_447898;
	eax = to32i(esp+0x114); //mov
	to32i(esp+0x128) = edx; //mov
	to32i(esp+0x13C) = edx; //mov
	to32i(esp+0x15C) = edx; //mov
	xor_(ebp, ebp);
loc_4478CE:
	ecx = to32i(dword_5117AC); //mov
	cmp(edx, to32i(ecx+0xB8));
	if (jge())
		goto loc_447907;
	ebx = to16i(eax); //movsx
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4478EA;
loc_4478E4:
	inc(edx);
	add(eax, (int32_t)2);
	goto loc_4478CE;
loc_4478EA:
	esi = to32i(dword_51180C); //mov
	add(esi, ebx);
	bl = to8i(ecx); //mov
	or_(bl, (int8_t)2);
	bh = to8i(esi+0x320); //mov
	or_(bh, bl);
	to8i(esi+0x320) = bh; //mov
	goto loc_4478E4;
loc_447907:
	xor_(esi, esi);
	eax = to32i(esp+0x120); //mov
	to32i(esp+0x144) = esi; //mov
	test(eax, eax);
	if (jle())
		goto loc_447967;
	eax = (int32_t)(intptr_t)(edi+8); //lea
	to32i(esp+0x12C) = eax; //mov
	eax = (int32_t)(intptr_t)(edi+0x38); //lea
	to32i(esp+0x118) = eax; //mov
	eax = (int32_t)(intptr_t)(edi+0x44); //lea
	to32i(esp+0x11C) = eax; //mov
	eax = to32i(esp+0x114); //mov
	to32i(esp+0x140) = eax; //mov
loc_447947:
	eax = to32i(esp+0x13C); //mov
	edx = ebp; //mov
	esi = (int32_t)(intptr_t)(eax+1); //lea
	esp -= 4; _sub_446AA0(); esp += 4; //call
	to32i(esp+0x13C) = esi; //mov
	test(eax, eax);
	if (jz())
		goto loc_4479ED;
loc_447967:
	cmp(to32i(dword_5117C8), (int32_t)0);
	if (jnz())
		goto loc_447FDF;
loc_447974:
	edx = to32i(esp+0x110); //mov
	xor_(ebp, ebp);
	xor_(ecx, ecx);
loc_44797F:
	edi = to32i(esp+ebp+0xC0); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_44802F;
	to32i(edx) = edi; //mov
	eax = to32i(esp+ebp+0xD0); //mov
	to32i(eax) = ecx; //mov
	eax = to32i(esp+ebp+0xD0); //mov
	to32i(edx+4) = eax; //mov
loc_4479A3:
	add(ebp, (int32_t)4);
	add(edx, (int32_t)8);
	cmp(ebp, (int32_t)0x10);
	if (jnz())
		goto loc_44797F;
	edx = 1; //mov
	eax = to32i(esp+0x128); //mov
	edx = 2; //mov
	eax = to32i(esp+0x15C); //mov
	eax = 0x23; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_486550(); esp += 4; //call
	to32i(dword_4D5C2C) = ebp; //mov
	add(esp, (int32_t)0x164);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4479ED:
	eax = to32i(esp+0x140); //mov
	eax = to16i(eax); //movsx
	to32i(esp+0x158) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_447A37;
loc_447A03:
	edx = to32i(esp+0x140); //mov
	ecx = to32i(esp+0x144); //mov
	ebx = to32i(esp+0x120); //mov
	add(edx, (int32_t)2);
	inc(ecx);
	to32i(esp+0x140) = edx; //mov
	to32i(esp+0x144) = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_447947;
	goto loc_447967;
loc_447A37:
	edx = to32i(dword_51180C); //mov
	esi = to32i(edx+eax*2+0xC6); //mov
	sar(esi, (int32_t)0x10);
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_447A03;
	ebx = (int32_t)(intptr_t)(esp+0xE0); //lea
	edx = to32i(esp+0x158); //mov
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_4751F0(); esp += 4; //call
	edx = to32i(esp+0x12C); //mov
	eax = (int32_t)(intptr_t)(esp+0xE0); //lea
	esp -= 4; _sub_4495E0(); esp += 4; //call
	edx = to32i(dword_5117AC); //mov
	edx = to32i(edx+0xA8); //mov
	sar(edx, (int32_t)0xC);
	imul32(edx, edx);
	sar(edx, (int32_t)6);
	to32i(esp+0x108) = eax; //mov
	cmp(eax, edx);
	if (jg())
		goto loc_447A03;
	eax = esp; //mov
	push32(eax);
	imul32(eax, esi, 0x118);
	edx = to32i(dword_51180C); //mov
	eax = to32i(edx+eax+0x450); //mov
	ebx = 4; //mov
	esp -= 4; _sub_475030(); esp += 4; //call
	edx = to32i(esp+0x11C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x120); //mov
	esp -= 4; _sub_480540(); esp += 4; //call
	eax = to32i(esp); //mov
	cmp(eax, to32i(esp+8));
	if (jle())
		goto loc_447B01;
	eax = to32i(esp+0x30); //mov
	cmp(eax, to32i(esp+0x38));
	if (jle())
		goto loc_447B01;
	eax = to32i(esp+0x60); //mov
	cmp(eax, to32i(esp+0x68));
	if (jle())
		goto loc_447B01;
	eax = to32i(esp+0x90); //mov
	cmp(eax, to32i(esp+0x98));
	if (jg())
		goto loc_447A03;
loc_447B01:
	eax = to32i(esp); //mov
	ecx = to32i(esp+8); //mov
	neg(eax);
	cmp(eax, ecx);
	if (jle())
		goto loc_447B42;
	eax = to32i(esp+0x30); //mov
	ebx = to32i(esp+0x38); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jle())
		goto loc_447B42;
	eax = to32i(esp+0x60); //mov
	edx = to32i(esp+0x68); //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_447B42;
	eax = to32i(esp+0x90); //mov
	ecx = to32i(esp+0x98); //mov
	neg(eax);
	cmp(eax, ecx);
	if (jg())
		goto loc_447A03;
loc_447B42:
	edx = to32i(esp+0x108); //mov
	eax = edi; //mov
	esp -= 4; _sub_449670(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_4D5BFC; //mov
	shl(eax, (int32_t)4);
	add(edx, eax);
	eax = to32i(edx+4); //mov
	to32i(esp+0x10C) = edx; //mov
	to32i(esp+0x160) = eax; //mov
	eax = to32i(edx+0xC); //mov
	edx = to32i(esp+0x158); //mov
	to32i(dword_5117CC) = eax; //mov
	eax = to32i(dword_511808); //mov
	inc(edx);
	ebx = (int32_t)(intptr_t)(esp+0xEC); //lea
	cmp(edx, eax);
	if (jle())
		goto loc_447B8D;
	xor_(edx, edx);
loc_447B8D:
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_4751F0(); esp += 4; //call
	edx = to32i(esp+0x12C); //mov
	eax = (int32_t)(intptr_t)(esp+0xEC); //lea
	esp -= 4; _sub_4495E0(); esp += 4; //call
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_449670(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_4D5BFC; //mov
	shl(eax, (int32_t)4);
	add(edx, eax);
	to32i(esp+0x124) = edx; //mov
	cmp(to32i(esp+0x160), (int32_t)0);
	if (jz())
		goto loc_447BE3;
	ecx = to32i(esp+0x158); //mov
	eax = to32i(dword_51180C); //mov
	add(eax, ecx);
	or_(to8i(eax+0x320), (int8_t)1);
loc_447BE3:
	imul32(edx, esi, 0x118);
	eax = to32i(dword_51180C); //mov
	add(eax, edx);
	eax = to32i(eax+0x454); //mov
	to32i(esp+0x150) = eax; //mov
	eax = to32i(esp+0x10C); //mov
	to32i(esp+0x14C) = edx; //mov
	eax = to32i(eax); //mov
	edx = to32i(esp+0x150); //mov
	add(eax, eax);
	add(eax, edx);
	ax = to16i(eax+4); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(esp+0x130) = eax; //mov
	xor_(eax, eax);
	ax = to16i(edx+4); //mov
	to32i(esp+0x148) = eax; //mov
	eax = to32i(esp+0x130); //mov
	ecx = to32i(esp+0x148); //mov
	add(eax, ecx);
	esp -= 4; _sub_4496C0(); esp += 4; //call
	to32i(esp+0x154) = eax; //mov
	to32i(esp+0x134) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_447A03;
	eax = to32i(esp+0x160); //mov
	add(eax, eax);
	add(edx, eax);
	to32i(esp+0x138) = edx; //mov
	eax = to32i(esp+0x138); //mov
	xor_(edx, edx);
	dx = to16i(eax+0xC); //mov
	imul32(edx, 0x24);
	eax = (int32_t)(intptr_t)(esp+0x104); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_447A03;
	eax = to32i(esp+0x10C); //mov
	eax = to32i(eax+8); //mov
	edx = ecx; //mov
	esp -= 4; _sub_480A00(); esp += 4; //call
	imul32(eax, ecx, 0x30);
	add(eax, to32i(esp+0x154));
	imul32(ecx, edx, 6);
	ebx = to32i(esp+0x14C); //mov
	push32(eax);
	eax = to32i(dword_51180C); //mov
	add(eax, ebx);
	eax = to32i(eax+0x454); //mov
	ebx = (int32_t)(intptr_t)(esp+0xE4); //lea
	esp -= 4; _sub_475130(); esp += 4; //call
	edx = to32i(esp+0x134); //mov
	add(ecx, eax);
	eax = edi; //mov
	esp -= 4; _sub_446530(); esp += 4; //call
	eax = to32i(esp+0x124); //mov
	eax = to32i(eax+8); //mov
	ebx = to32i(esp+0x14C); //mov
	esp -= 4; _sub_480A00(); esp += 4; //call
	eax = to32i(dword_51180C); //mov
	ecx = to32i(esp+0x154); //mov
	add(eax, ebx);
	edx = to32i(esp+0x148); //mov
	push32(ecx);
	eax = to32i(eax+0x454); //mov
	ebx = (int32_t)(intptr_t)(esp+0xF0); //lea
	esp -= 4; _sub_475130(); esp += 4; //call
	ecx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_446530(); esp += 4; //call
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	edx = to32i(esp+0x14C); //mov
	eax = to32i(dword_51180C); //mov
	ecx = to32i(esp+0x138); //mov
	add(edx, eax);
	eax = to32i(esp+0x160); //mov
	push32(0);
	ebx = to32i(esp+0x104); //mov
	edx = to32i(edx+eax*4+0x484); //mov
	xor_(eax, eax);
	push32(0);
	ax = to16i(ecx+0xC); //mov
	ecx = to32i(esp+0x15C); //mov
	call(to32i(dword_5117CC));
	test(eax, eax);
	if (jz())
		goto loc_447DC6;
	imul32(edx, eax, 0x24);
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	cmp(to32i(esp+0xD0), (int32_t)0);
	if (jnz())
		goto loc_447FBC;
	eax = to32i(esp+0x100); //mov
	to32i(esp+0xC0) = eax; //mov
loc_447DAD:
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+0xD0); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	sub(to32i(esp+0xD0), (int32_t)0x24);
loc_447DC6:
	ecx = to32i(esp+0x160); //mov
	ebx = to32i(esp+0x150); //mov
	add(ecx, ecx);
	add(ecx, ebx);
	xor_(eax, eax);
	edx = to32i(esp+0x128); //mov
	ax = to16i(ecx+0xC); //mov
	add(edx, eax);
	add(ebp, eax);
	eax = to32i(esp+0x10C); //mov
	to32i(esp+0x128) = edx; //mov
	eax = to32i(eax+8); //mov
	edx = 0x24; //mov
	esp -= 4; _sub_480A00(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	imul32(edx, esi, 0x118);
	eax = to32i(dword_51180C); //mov
	add(eax, edx);
	edx = to32i(esp+0x160); //mov
	push32(0);
	ebx = to32i(esp+0x104); //mov
	edx = to32i(eax+edx*4+0x488); //mov
	xor_(eax, eax);
	push32(0);
	ax = to16i(ecx+0xE); //mov
	ecx = to32i(esp+0x13C); //mov
	call(to32i(dword_5117CC));
	test(eax, eax);
	if (jz())
		goto loc_447E92;
	imul32(edx, eax, 0x24);
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	ecx = to32i(esp+0xD4); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_447FD1;
	eax = to32i(esp+0x100); //mov
	to32i(esp+0xC4) = eax; //mov
loc_447E79:
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+0xD4); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	sub(to32i(esp+0xD4), (int32_t)0x24);
loc_447E92:
	cmp(to32i(esp+0x160), (int32_t)4);
	if (jnz())
		goto loc_447ED4;
	imul32(eax, esi, 0x118);
	push32(edi);
	edx = to32i(esp+0x138); //mov
	push32(edx);
	edx = to32i(dword_51180C); //mov
	eax = to32i(edx+eax+0x454); //mov
	ebx = (int32_t)(intptr_t)(esp+0xF4); //lea
	esp -= 4; _sub_475130(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0xE8); //lea
	ecx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_448420(); esp += 4; //call
loc_447ED4:
	imul32(eax, esi, 0x118);
	edx = to32i(dword_51180C); //mov
	add(eax, edx);
	ecx = to32i(eax+0x460); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_447F1F;
	push32(0xFFFFFFFF);
	ebx = to32i(eax+0x45C); //mov
	push32(ebx);
	edx = (int32_t)(intptr_t)(esp+0xDC); //lea
	eax = edi; //mov
	push32(ecx);
	ebx = (int32_t)(intptr_t)(esp+0xD0); //lea
	ecx = esi; //mov
	esp -= 4; _sub_4473E0(); esp += 4; //call
	ecx = to32i(esp+0x15C); //mov
	add(ecx, eax);
	add(ebp, eax);
	to32i(esp+0x15C) = ecx; //mov
loc_447F1F:
	imul32(edx, esi, 0x118);
	eax = to32i(dword_51180C); //mov
	add(eax, edx);
	ebx = to32i(eax+0x464); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_447F69;
	push32(0xFFFFFFFF);
	edx = to32i(eax+0x45C); //mov
	push32(edx);
	ecx = esi; //mov
	eax = edi; //mov
	push32(ebx);
	edx = (int32_t)(intptr_t)(esp+0xE8); //lea
	ebx = (int32_t)(intptr_t)(esp+0xD8); //lea
	esp -= 4; _sub_4473E0(); esp += 4; //call
	ebx = to32i(esp+0x15C); //mov
	add(ebx, eax);
	add(ebp, eax);
	to32i(esp+0x15C) = ebx; //mov
loc_447F69:
	imul32(edx, esi, 0x118);
	eax = to32i(dword_51180C); //mov
	add(eax, edx);
	edx = to32i(eax+0x468); //mov
	test(edx, edx);
	if (jz())
		goto loc_447A03;
	push32(0xFFFFFFFF);
	ecx = to32i(eax+0x45C); //mov
	push32(ecx);
	ebx = (int32_t)(intptr_t)(esp+0xC8); //lea
	eax = edi; //mov
	push32(edx);
	ecx = esi; //mov
	edx = (int32_t)(intptr_t)(esp+0xDC); //lea
	esi = to32i(esp+0x168); //mov
	esp -= 4; _sub_4473E0(); esp += 4; //call
	add(esi, eax);
	add(ebp, eax);
	to32i(esp+0x15C) = esi; //mov
	goto loc_447A03;
loc_447FBC:
	edx = to32i(esp+0xD0); //mov
	eax = to32i(esp+0x100); //mov
	to32i(edx) = eax; //mov
	goto loc_447DAD;
loc_447FD1:
	eax = to32i(esp+0x100); //mov
	to32i(ecx) = eax; //mov
	goto loc_447E79;
loc_447FDF:
	eax = 0xB; //mov
	esp -= 4; _sub_480A00(); esp += 4; //call
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax+0xA4); //mov
	push32(edx);
	ecx = to32i(dword_5117D4); //mov
	ebx = to32i(dword_5117C8); //mov
	push32(ecx);
	eax = edi; //mov
	edx = (int32_t)(intptr_t)(esp+0xE0); //lea
	push32(ebx);
	xor_(ecx, ecx);
	ebx = (int32_t)(intptr_t)(esp+0xD4); //lea
	esi = to32i(esp+0x168); //mov
	esp -= 4; _sub_4473E0(); esp += 4; //call
	add(esi, eax);
	to32i(esp+0x15C) = esi; //mov
	goto loc_447974;
loc_44802F:
	esi = (int32_t)(intptr_t)(esp+0xF8); //lea
	edi = edx; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0xF8); //lea
	movsd();
	movsd();
	goto loc_4479A3;
}
Fn(void) Game::_sub_448050()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_448064;
loc_44805D:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_448064:
	edx = to32i(eax+4); //mov
	esp -= 4; _sub_448AD0(); esp += 4; //call
	edx = to32i(dword_5117AC); //mov
	edx = to32i(edx+0x8C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_51180C); //mov
	shl(eax, (int32_t)3);
	add(edx, (int32_t)0x450);
	add(eax, edx);
	ebp = (int32_t)(intptr_t)(eax+0x4C); //lea
	xor_(ecx, ecx);
	esi = ebp; //mov
	add(ebp, (int32_t)0xC8);
loc_4480A4:
	eax = to16i(esi); //movsx
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4480CE;
loc_4480AC:
	add(esi, (int32_t)2);
	cmp(esi, ebp);
	if (jnz())
		goto loc_4480A4;
	test(ecx, ecx);
	if (jnz())
		goto loc_44805D;
	cmp(to32i(edi+4), (int32_t)0);
	if (jnz())
		goto loc_448106;
	eax = 0xE; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4480CE:
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	eax = to32i(dword_51180C); //mov
	edx = to32i(edx+eax+0xC6); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4480AC;
	imul32(edx, 0x118);
	add(eax, edx);
	ebx = to32i(eax+0x47C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4480AC;
	edx = ebx; //mov
	eax = edi; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_447210(); esp += 4; //call
	or_(ecx, eax);
	goto loc_4480AC;
loc_448106:
	eax = 0x15; //mov
	esp -= 4; _sub_4447D0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_448120()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = eax; //mov
	esp -= 4; _sub_45BFE0(); esp += 4; //call
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4481A0(); esp += 4; //call
	push32(0);
	push32(0);
	edx = to32i(esp+0xC); //mov
	push32(edx);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	esp -= 4; _sub_471280(); esp += 4; //call
	push32(0);
	push32(0x60000);
	ebx = to32i(esp+0x14); //mov
	push32(ebx);
	esi = to32i(esp+0x14); //mov
	push32(esi);
	esp -= 4; _sub_471280(); esp += 4; //call
	push32(0);
	push32(0xA0000);
	edi = to32i(esp+0x24); //mov
	push32(edi);
	ebp = to32i(esp+0x24); //mov
	push32(ebp);
	esp -= 4; _sub_471280(); esp += 4; //call
	push32(0);
	eax = to32i(dword_5117BC); //mov
	push32(eax);
	edx = to32i(esp+0x1C); //mov
	push32(edx);
	ecx = to32i(esp+0x1C); //mov
	push32(ecx);
	esp -= 4; _sub_471280(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4481A0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	ebx = edx; //mov
	eax = to32i(eax); //mov
	test(eax, eax);
	if (jbe())
		goto loc_448229;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4481C0;
	edx = eax; //mov
	eax = ecx; //mov
loc_4481BB:
	esp -= 4; _sub_448AD0(); esp += 4; //call
loc_4481C0:
	cmp(to32i(dword_51221C), (int32_t)3);
	if (jnz())
		goto loc_4481E8;
	eax = to32i(dword_5117AC); //mov
	esi = to32i(eax+0x88); //mov
	cmp(esi, (int32_t)0x32);
	if (jle())
		goto loc_448230;
	cmp(esi, (int32_t)0x64);
	if (jge())
		goto loc_448230;
	to32i(dword_5117BC) = 0xFFF00000; //mov
loc_4481E8:
	edx = to32i(dword_5117AC); //mov
	edx = to32i(edx+0x8C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = to32i(dword_51180C); //mov
	add(eax, (int32_t)0x450);
	add(edx, eax);
	add(edx, (int32_t)0x4C);
	eax = ecx; //mov
	esp -= 4; _sub_447870(); esp += 4; //call
	esp -= 4; _sub_4809F0(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_448229:
	eax = ecx; //mov
	edx = to32i(ecx+4); //mov
	goto loc_4481BB;
loc_448230:
	xor_(ebp, ebp);
	to32i(dword_5117BC) = ebp; //mov
	goto loc_4481E8;
}
Fn(void) Game::_sub_448240()
{
	esp -= 4; _sub_448B80(); esp += 4; //call
	cmp(to32i(dword_5117B8), (int32_t)0xFFFFFFFF);
	if (jle())
	{
		_sub_448B50();
		return;
	}
	cmp(to32i(dword_5117B4), (int32_t)0);
	if (jz())
	{
		_sub_448B50();
		return;
	}
	esp -= 4; _sub_448BD0(); esp += 4; //call
	_sub_448B50(); return; //jmp
}
Fn(void) Game::_sub_448270()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	esi = edx; //mov
	edi = ecx; //mov
	xor_(edx, edx);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+4) = edx; //mov
	test(eax, eax);
	if (jle())
		goto loc_448315;
loc_448290:
	edx = (int32_t)(intptr_t)(esi+4); //lea
	xor_(ecx, ecx);
	cl = to8i(edx+1); //mov
	imul32(ecx, 0x30);
	eax = (int32_t)(intptr_t)(edi+ecx); //lea
	xor_(ecx, ecx);
	to32i(ebx+0xC) = eax; //mov
	cl = to8i(edx); //mov
	imul32(ecx, 0x30);
	eax = (int32_t)(intptr_t)(edi+ecx); //lea
	xor_(ecx, ecx);
	to32i(ebx+0x10) = eax; //mov
	cl = to8i(edx+3); //mov
	imul32(ecx, 0x30);
	eax = (int32_t)(intptr_t)(edi+ecx); //lea
	to32i(ebx+0x14) = eax; //mov
	dl = to8i(edx+2); //mov
	and_(edx, (int32_t)0xFF);
	imul32(edx, 0x30);
	eax = (int32_t)(intptr_t)(edi+edx); //lea
	to32i(ebx+0x18) = eax; //mov
	ecx = to32i(ebx+0x10); //mov
	edx = to32i(ebx+0xC); //mov
	ebp = (uint8_t)to8i(ecx+0x24); //movzx
	xor_(eax, eax);
	ecx = to32i(ebx+0x14); //mov
	al = to8i(edx+0x24); //mov
	cl = to8i(ecx+0x24); //mov
	and_(ebp, eax);
	and_(ecx, (int32_t)0xFF);
	and_(ebp, ecx);
	ecx = to32i(ebx+0x18); //mov
	cl = to8i(ecx+0x24); //mov
	and_(ecx, (int32_t)0xFF);
	test(ebp, ecx);
	if (jz())
		goto loc_448322;
loc_4482FD:
	add(esi, (int32_t)8);
loc_448300:
	eax = to32i(esp+0xC); //mov
	inc(eax);
	edx = to32i(esp+8); //mov
	to32i(esp+0xC) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_448290;
loc_448315:
	eax = to32i(esp+4); //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_448322:
	ecx = to32i(dword_5117AC); //mov
	edx = to32i(edx+8); //mov
	cmp(edx, to32i(ecx+0xA4));
	if (jg())
		goto loc_4482FD;
	eax = (int32_t)(intptr_t)(ebx+0x24); //lea
	xor_(edx, edx);
	to32i(ebx) = eax; //mov
	dx = to16i(esi); //mov
	ecx = (int32_t)(intptr_t)(edx*8+0); //lea
	edx = to32i(dword_5117FC); //mov
	add(edx, ecx);
	ecx = to32i(edx); //mov
	ebp = to32i(edx+4); //mov
	cl = to8i(ecx+2); //mov
	to32i(ebx+0x1C) = ebp; //mov
	ebp = (uint16_t)to16i(esi+2); //movzx
	to32i(ebx+4) = 8; //mov
	eax = to32i(esp+0x20); //mov
	to16i(ebx+0xA) = 1; //mov
	to16i(ebx+8) = ax; //mov
	eax = to32i(esp+0x24); //mov
	to32i(ebx+0x20) = ebp; //mov
	test(eax, eax);
	if (jz())
		goto loc_448382;
	to32i(ebx+0x20) = 0xFFFFFFFF; //mov
loc_448382:
	test(cl, cl);
	if (jz())
		goto loc_4483EA;
	test(cl, (int8_t)4);
	if (jz())
		goto loc_4483D3;
	ebp = to32i(edx); //mov
	xor_(eax, eax);
	al = to8i(ebp+8); //mov
	to32i(esp) = eax; //mov
	eax = to32i(dword_540F48); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	ebp = to32i(ebp+4); //mov
	edx = eax; //mov
	sar(ebp, (int32_t)0x18);
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	imul32(edx, 0x1C);
	to32i(esp) = edx; //mov
	xor_(edx, edx);
	ebp = to32i(dword_5117FC); //mov
	dx = to16i(esi); //mov
	eax = to32i(esp); //mov
	edx = to32i(ebp+edx*8+4); //mov
	to32i(ebx+0x20) = 0xFFFFFFFF; //mov
	add(eax, edx);
	to32i(ebx+0x1C) = eax; //mov
loc_4483D3:
	test(cl, (int8_t)0x20);
	if (jz())
		goto loc_4483DF;
	to32i(ebx+4) = 9; //mov
loc_4483DF:
	test(cl, (int8_t)0x10);
	if (jz())
		goto loc_4483FE;
	to16i(ebx+0xA) = 2; //mov
loc_4483EA:
	edx = to32i(esp+4); //mov
	add(esi, (int32_t)8);
	inc(edx);
	add(ebx, (int32_t)0x24);
	to32i(esp+4) = edx; //mov
	goto loc_448300;
loc_4483FE:
	test(cl, (int8_t)0x40);
	if (jz())
		goto loc_4483EA;
	to16i(ebx+0xA) = 0; //mov
	edx = to32i(esp+4); //mov
	add(esi, (int32_t)8);
	inc(edx);
	add(ebx, (int32_t)0x24);
	to32i(esp+4) = edx; //mov
	goto loc_448300;
}
Fn(void) Game::_sub_448420()
{
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x30) = edx; //mov
	to32i(esp+0x34) = ecx; //mov
	ecx = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x2C); //mov
	shl(ecx, (int32_t)3);
	add(ecx, edx);
	shl(ecx, (int32_t)2);
	sub(ecx, edx);
	eax = to32i(dword_51180C); //mov
	shl(ecx, (int32_t)3);
	edx = 9; //mov
	eax = to32i(ecx+eax+0x450); //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_44846E;
loc_448466:
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(esi);
	esp += 8; return;
loc_44846E:
	xor_(eax, eax);
	ax = to16i(edx+6); //mov
	shl(eax, (int32_t)2);
	esp -= 4; _sub_4496C0(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_448466;
	push32(edi);
	eax = to32i(dword_51180C); //mov
	eax = to32i(ecx+eax+0x450); //mov
	esp -= 4; _sub_475060(); esp += 4; //call
	to32i(esp+0x24) = eax; //mov
	eax = to32i(dword_51180C); //mov
	add(edx, (int32_t)8);
	eax = to32i(ecx+eax+0x454); //mov
	to32i(esp+0x10) = edx; //mov
	ax = to16i(eax+4); //mov
	edx = to32i(esp+0x34); //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = to32i(ebx); //mov
	to32i(esp+4) = eax; //mov
	edi = to32i(edx); //mov
	ebp = to32i(edx+4); //mov
	eax = to32i(ebx+4); //mov
	sub(ecx, edi);
	edx = eax; //mov
	eax = to32i(ebx+8); //mov
	ebx = to32i(esp+0x34); //mov
	sar(ecx, (int32_t)8);
	edi = to32i(ebx+8); //mov
	ebx = eax; //mov
	eax = cx; //movsx
	ecx = eax; //mov
	sar(ecx, (int32_t)9);
	sub(edx, ebp);
	add(eax, ecx);
	sar(edx, (int32_t)8);
	to32i(esp+0x40) = eax; //mov
	eax = dx; //movsx
	edx = eax; //mov
	sar(edx, (int32_t)9);
	sub(ebx, edi);
	add(eax, edx);
	sar(ebx, (int32_t)8);
	to32i(esp+0x44) = eax; //mov
	eax = bx; //movsx
	edx = eax; //mov
	sar(edx, (int32_t)9);
	add(eax, edx);
	to32i(esp+0x48) = eax; //mov
	xor_(edx, edx);
loc_44850F:
	ecx = to32i(esp+0x14); //mov
	xor_(eax, eax);
	ax = to16i(ecx+6); //mov
	shl(eax, (int32_t)2);
	cmp(edx, eax);
	if (jl())
		goto loc_4485A0;
	ecx = (int32_t)(intptr_t)word_50CC90; //mov
	ebx = to32i(esp+0x34); //mov
	push32(esi);
	edx = eax; //mov
	eax = to32i(esp+0x70); //mov
	esp -= 4; _sub_446530(); esp += 4; //call
	eax = to32i(esp+0x30); //mov
	ecx = to32i(esp+0x30); //mov
	shl(eax, (int32_t)3);
	add(eax, ecx);
	xor_(edi, edi);
	shl(eax, (int32_t)2);
	edx = to32i(dword_51180C); //mov
	sub(eax, ecx);
	to32i(esp+0x1C) = edi; //mov
	ebx = to32i(esp+0x14); //mov
	eax = to32i(edx+eax*8+0x494); //mov
	add(ebx, (int32_t)8);
	to32i(esp+0x18) = eax; //mov
loc_448569:
	edx = to32i(esp+0x14); //mov
	xor_(eax, eax);
	ax = to16i(edx+6); //mov
	dec(eax);
	cmp(edi, eax);
	if (jge())
		goto loc_448AAA;
	imul32(eax, to32i(esp+0x1C), 0x1C);
loc_448581:
	ecx = to32i(esp+0x14); //mov
	xor_(edx, edx);
	dx = to16i(ecx+6); //mov
	dec(edx);
	cmp(edi, edx);
	if (jl())
		goto loc_448966;
loc_448594:
	add(ebx, (int32_t)4);
	add(esi, (int32_t)0xC0);
	inc(edi);
	goto loc_448569;
loc_4485A0:
	ecx = to32i(esp+0x10); //mov
	xor_(eax, eax);
	al = to8i(ecx+1); //mov
	add(eax, to32i(esp+0x24));
	imul32(eax, 0x24);
	ecx = to32i(dword_5118A4); //mov
	ebx = to32i(esp+0x10); //mov
	add(ecx, eax);
	xor_(eax, eax);
	al = to8i(ebx); //mov
	to32i(esp+0x20) = eax; //mov
	imul32(eax, 6);
	ebx = to32i(ecx+0xC); //mov
	sar(ebx, (int32_t)0x18);
	sar(ebx, (int32_t)1);
	to32i(esp+0x28) = ebx; //mov
	bl = to8i(esp+0x28); //mov
	ebp = (int32_t)(intptr_t)(ecx+0x12); //lea
	to8i(esp+0x3C) = bl; //mov
	ebx = to32i(ecx+0xD); //mov
	ecx = to32i(ecx+0xE); //mov
	sar(ecx, (int32_t)0x18);
	sar(ecx, (int32_t)1);
	to32i(esp+0xC) = ecx; //mov
	ecx = (int32_t)(intptr_t)(edx+1); //lea
	imul32(ecx, 6);
	sar(ebx, (int32_t)0x18);
	sar(ebx, (int32_t)1);
	to32i(esp+8) = ebx; //mov
	bl = to8i(esp+8); //mov
	to8i(esp+0x3D) = bl; //mov
	bl = to8i(esp+0xC); //mov
	to8i(esp+0x3E) = bl; //mov
	imul32(ebx, edx, 6);
	add(eax, to32i(esp+0x38));
	edi = to32i(esp+0x20); //mov
	cmp(edi, to32i(esp+4));
	if (jge())
		goto loc_44881F;
	di = to16i(eax); //mov
	add(edi, to32i(esp+0x40));
	to32i(esp+0x54) = edi; //mov
	di = to8i(esp+0x28); //movsx
	to32i(esp+0x58) = edi; //mov
	edi = to32i(esp+0x54); //mov
	sub(edi, to32i(esp+0x58));
	to16i(word_50CC90+ebx) = di; //mov
	di = to16i(eax+2); //mov
	add(edi, (int32_t)0x10);
	add(edi, to32i(esp+0x44));
	to32i(esp+0x50) = edi; //mov
	di = to8i(esp+8); //movsx
	to32i(esp+0x54) = edi; //mov
	edi = to32i(esp+0x50); //mov
	sub(edi, to32i(esp+0x54));
	to16i(word_50CC92+ebx) = di; //mov
	di = to16i(eax+4); //mov
	add(edi, to32i(esp+0x48));
	to32i(esp+0x4C) = edi; //mov
	di = to8i(esp+0xC); //movsx
	to32i(esp+0x50) = edi; //mov
	edi = to32i(esp+0x4C); //mov
	sub(edi, to32i(esp+0x50));
	to16i(word_50CC94+ebx) = di; //mov
	edi = to32i(esp+0x40); //mov
	bx = to16i(eax); //mov
	add(ebx, edi);
	to32i(esp+0x4C) = ebx; //mov
	edi = to32i(esp+0x4C); //mov
	bx = to8i(ebp+0); //movsx
	add(ebx, edi);
	edi = to32i(esp+0x58); //mov
	sub(ebx, edi);
	to16i(word_50CC90+ecx) = bx; //mov
	bx = to16i(eax+2); //mov
	edi = to32i(esp+0x44); //mov
	add(ebx, (int32_t)0x10);
	add(edi, ebx);
	bx = to8i(ebp+1); //movsx
	add(ebx, edi);
	edi = to32i(esp+0x54); //mov
	sub(ebx, edi);
	to16i(word_50CC92+ecx) = bx; //mov
	ebx = to32i(esp+0x48); //mov
	ax = to16i(eax+4); //mov
	add(eax, ebx);
	bx = to8i(ebp+2); //movsx
	edi = to32i(esp+0x50); //mov
	add(eax, ebx);
	sub(eax, edi);
loc_4486EF:
	to16i(word_50CC94+ecx) = ax; //mov
	ebp = (int32_t)(intptr_t)(edx+3); //lea
	imul32(ebp, 6);
	add(to32i(esp+0x10), (int32_t)4);
	ecx = to32i(esp+0x10); //mov
	xor_(eax, eax);
	al = to8i(ecx+1); //mov
	add(eax, to32i(esp+0x24));
	imul32(eax, 0x24);
	ecx = to32i(dword_5118A4); //mov
	ebx = to32i(esp+0x10); //mov
	add(ecx, eax);
	xor_(eax, eax);
	add(edx, (int32_t)2);
	al = to8i(ebx); //mov
	imul32(ebx, edx, 6);
	to32i(esp+0x2C) = eax; //mov
	imul32(eax, 6);
	add(eax, to32i(esp+0x38));
	edi = to32i(esp+0x2C); //mov
	add(ecx, (int32_t)0x12);
	cmp(edi, to32i(esp+4));
	if (jge())
		goto loc_4488C2;
	di = to16i(eax); //mov
	add(edi, to32i(esp+0x40));
	to32i(esp+0x4C) = edi; //mov
	di = to8i(esp+0x3C); //movsx
	to32i(esp+0x54) = edi; //mov
	edi = to32i(esp+0x4C); //mov
	add(edi, to32i(esp+0x54));
	to16i(word_50CC90+ebx) = di; //mov
	di = to16i(eax+2); //mov
	add(edi, (int32_t)0x10);
	add(edi, to32i(esp+0x44));
	to32i(esp+0x50) = edi; //mov
	di = to8i(esp+0x3D); //movsx
	to32i(esp+0x4C) = edi; //mov
	edi = to32i(esp+0x50); //mov
	add(edi, to32i(esp+0x4C));
	to16i(word_50CC92+ebx) = di; //mov
	di = to16i(eax+4); //mov
	add(edi, to32i(esp+0x48));
	to32i(esp+0x58) = edi; //mov
	di = to8i(esp+0x3E); //movsx
	to32i(esp+0x50) = edi; //mov
	edi = to32i(esp+0x58); //mov
	add(edi, to32i(esp+0x50));
	to16i(word_50CC94+ebx) = di; //mov
	edi = to32i(esp+0x40); //mov
	bx = to16i(eax); //mov
	add(ebx, edi);
	to32i(esp+0x58) = ebx; //mov
	edi = to32i(esp+0x58); //mov
	bx = to8i(ecx); //movsx
	add(ebx, edi);
	edi = to32i(esp+0x54); //mov
	add(ebx, edi);
	to16i(word_50CC90+ebp) = bx; //mov
	bx = to16i(eax+2); //mov
	edi = to32i(esp+0x44); //mov
	add(ebx, (int32_t)0x10);
	add(edi, ebx);
	bx = to8i(ecx+1); //movsx
	add(ebx, edi);
	edi = to32i(esp+0x4C); //mov
	add(ebx, edi);
	to16i(word_50CC92+ebp) = bx; //mov
	ebx = to32i(esp+0x48); //mov
	ax = to16i(eax+4); //mov
	add(eax, ebx);
	bx = to8i(ecx+2); //movsx
	ecx = to32i(esp+0x50); //mov
	add(eax, ebx);
	add(eax, ecx);
	to16i(word_50CC94+ebp) = ax; //mov
	add(edx, (int32_t)2);
	goto loc_44850F;
loc_44881F:
	di = to8i(esp+0x28); //movsx
	to32i(esp+0x58) = edi; //mov
	di = to16i(eax); //mov
	sub(edi, to32i(esp+0x58));
	to16i(word_50CC90+ebx) = di; //mov
	di = to16i(eax+2); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x50) = edi; //mov
	di = to8i(esp+8); //movsx
	to32i(esp+0x54) = edi; //mov
	edi = to32i(esp+0x50); //mov
	sub(edi, to32i(esp+0x54));
	to16i(word_50CC92+ebx) = di; //mov
	di = to8i(esp+0xC); //movsx
	to32i(esp+0x50) = edi; //mov
	di = to16i(eax+4); //mov
	sub(edi, to32i(esp+0x50));
	to16i(word_50CC94+ebx) = di; //mov
	bx = to8i(ebp+0); //movsx
	add(bx, to16i(eax));
	edi = to32i(esp+0x58); //mov
	sub(ebx, edi);
	to16i(word_50CC90+ecx) = bx; //mov
	bx = to16i(eax+2); //mov
	add(ebx, (int32_t)0x10);
	to32i(esp+0x4C) = ebx; //mov
	edi = to32i(esp+0x4C); //mov
	bx = to8i(ebp+1); //movsx
	add(ebx, edi);
	edi = to32i(esp+0x54); //mov
	sub(ebx, edi);
	to16i(word_50CC92+ecx) = bx; //mov
	bx = to8i(ebp+2); //movsx
	ax = to16i(eax+4); //mov
	add(eax, ebx);
	ebx = to32i(esp+0x50); //mov
	sub(eax, ebx);
	goto loc_4486EF;
loc_4488C2:
	di = to8i(esp+0x3C); //movsx
	to32i(esp+0x4C) = edi; //mov
	di = to16i(eax); //mov
	add(edi, to32i(esp+0x4C));
	to16i(word_50CC90+ebx) = di; //mov
	di = to16i(eax+2); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x50) = edi; //mov
	di = to8i(esp+0x3D); //movsx
	to32i(esp+0x54) = edi; //mov
	edi = to32i(esp+0x50); //mov
	add(edi, to32i(esp+0x54));
	to16i(word_50CC92+ebx) = di; //mov
	di = to8i(esp+0x3E); //movsx
	to32i(esp+0x50) = edi; //mov
	di = to16i(eax+4); //mov
	add(edi, to32i(esp+0x50));
	to16i(word_50CC94+ebx) = di; //mov
	bx = to8i(ecx); //movsx
	add(bx, to16i(eax));
	edi = to32i(esp+0x4C); //mov
	add(ebx, edi);
	to16i(word_50CC90+ebp) = bx; //mov
	bx = to16i(eax+2); //mov
	di = to8i(ecx+1); //movsx
	add(ebx, (int32_t)0x10);
	add(ebx, edi);
	edi = to32i(esp+0x54); //mov
	add(ebx, edi);
	to16i(word_50CC92+ebp) = bx; //mov
	bx = to8i(ecx+2); //movsx
	cx = to16i(eax+4); //mov
	edi = to32i(esp+0x50); //mov
	add(ebx, ecx);
	add(ebx, edi);
	to16i(word_50CC94+ebp) = bx; //mov
	add(edx, (int32_t)2);
	goto loc_44850F;
loc_448966:
	cmp(to8i(ebx+2), (int8_t)0xFF);
	if (jz())
		goto loc_448594;
	xor_(edx, edx);
	dl = to8i(ebx+2); //mov
	to32i(dword_50B6B0+eax) = edx; //mov
	xor_(edx, edx);
	dl = to8i(ebx); //mov
	imul32(edx, 6);
	add(edx, to32i(esp+0x38));
	ecx = to32i(edx+2); //mov
	sar(ecx, (int32_t)0x10);
	edx = to16i(edx); //movsx
	add(edx, ecx);
	to32i(dword_50B6B8+eax) = edx; //mov
	xor_(edx, edx);
	dl = to8i(ebx+3); //mov
	ebp = to32i(esp+0x18); //mov
	shl(edx, (int32_t)3);
	add(edx, ebp);
	dx = to16i(edx+2); //mov
	and_(edx, (int32_t)0xFFFF);
	ebp = edx; //mov
	ecx = edx; //mov
	sar(ebp, (int32_t)0xA);
	sar(ecx, (int32_t)0xD);
	and_(ebp, (int32_t)7);
	and_(ecx, (int32_t)7);
	add(ecx, ebp);
	ebp = edx; //mov
	sar(ebp, (int32_t)7);
	sar(edx, (int32_t)4);
	and_(ebp, (int32_t)7);
	and_(edx, (int32_t)7);
	add(ecx, ebp);
	add(ecx, edx);
	xor_(edx, edx);
	dl = to8i(ebx+7); //mov
	ebp = to32i(esp+0x18); //mov
	shl(edx, (int32_t)3);
	add(edx, ebp);
	sar(ecx, (int32_t)2);
	dx = to16i(edx+2); //mov
	and_(edx, (int32_t)0xFFFF);
	ebp = edx; //mov
	sar(ebp, (int32_t)0xD);
	and_(ebp, (int32_t)7);
	to32i(esp+0x2C) = ebp; //mov
	ebp = edx; //mov
	sar(ebp, (int32_t)0xA);
	and_(ebp, (int32_t)7);
	to32i(esp+0x20) = ebp; //mov
	ebp = to32i(esp+0x2C); //mov
	add(ebp, to32i(esp+0x20));
	to32i(esp+0x20) = ebp; //mov
	ebp = edx; //mov
	sar(ebp, (int32_t)7);
	add(ecx, ecx);
	and_(ebp, (int32_t)7);
	add(ecx, (int32_t)2);
	to32i(esp+0x2C) = ebp; //mov
	ebp = to32i(esp+0x20); //mov
	sar(edx, (int32_t)4);
	add(ebp, to32i(esp+0x2C));
	and_(edx, (int32_t)7);
	add(edx, ebp);
	ebp = ecx; //mov
	sar(edx, (int32_t)2);
	sar(ebp, (int32_t)1);
	sar(ecx, (int32_t)3);
	add(edx, edx);
	sub(ebp, ecx);
	add(edx, (int32_t)2);
	ecx = ebp; //mov
	ebp = edx; //mov
	sar(ebp, (int32_t)1);
	sar(edx, (int32_t)3);
	sub(ebp, edx);
	edx = ebp; //mov
	shl(ebp, (int32_t)0xD);
	shl(edx, (int32_t)0xA);
	or_(ebp, edx);
	edx = ecx; //mov
	shl(edx, (int32_t)7);
	shl(ecx, (int32_t)4);
	or_(edx, ebp);
	add(eax, (int32_t)0x1C);
	or_(edx, ecx);
	to32i(dword_50B698+eax) = edx; //mov
	edx = (int32_t)(intptr_t)(esi+0x30); //lea
	to32i(dword_50B6A0+eax) = edx; //mov
	to32i(dword_50B6A4+eax) = esi; //mov
	edx = (int32_t)(intptr_t)(esi+0x60); //lea
	inc(edi);
	to32i(dword_50B6A8+eax) = edx; //mov
	edx = (int32_t)(intptr_t)(esi+0x90); //lea
	add(ebx, (int32_t)4);
	to32i(dword_50B6AC+eax) = edx; //mov
	edx = to32i(esp+0x1C); //mov
	inc(edx);
	add(esi, (int32_t)0xC0);
	to32i(esp+0x1C) = edx; //mov
	goto loc_448581;
loc_448AAA:
	edx = (int32_t)(intptr_t)dword_50B6B0; //mov
	eax = to32i(esp+0x1C); //mov
	esp -= 4; _sub_45BDB0(); esp += 4; //call
	pop32(edi);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_448AD0()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_446CB0(); esp += 4; //call
	edx = to32i(dword_5117AC); //mov
	ebx = 1; //mov
	eax = to32i(edx+0x10); //mov
	add(edx, (int32_t)4);
	to32i(dword_5117C4) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax+0x88); //mov
	ecx = to32i(eax+0x78); //mov
	cmp(edx, ecx);
	if (jnz())
		goto loc_448B1C;
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax+0x7C); //mov
	to32i(eax+0x8C) = edx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_448B1C:
	to32i(eax+0x88) = ecx; //mov
	edx = to32i(eax+0x90); //mov
	to32i(eax+0x90) = 0xFFFFFFFF; //mov
	to32i(eax+0x94) = edx; //mov
	eax = to32i(dword_5117AC); //mov
	edx = to32i(eax+0x7C); //mov
	to32i(eax+0x8C) = edx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_448B50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_51180C); //mov
	edx = ecx; //mov
	xor_(eax, eax);
loc_448B5D:
	bl = to8i(edx+eax+0x320); //mov
	inc(eax);
	and_(bl, (int8_t)0x8C);
	to8i(edx+eax+0x31F) = bl; //mov
	cmp(eax, (int32_t)0x12C);
	if (jl())
		goto loc_448B5D;
	to32i(dword_51180C) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_448B80()
{
	push32(ebx);
	push32(edx);
	xor_(eax, eax);
loc_448B84:
	edx = to32i(dword_51180C); //mov
	add(edx, eax);
	bl = to8i(edx+0x320); //mov
	test(bl, (int8_t)2);
	if (jz())
		goto loc_448B9C;
	test(bl, (int8_t)4);
	if (jz())
		goto loc_448BA7;
loc_448B9C:
	inc(eax);
	cmp(eax, (int32_t)0x12C);
	if (jl())
		goto loc_448B84;
	pop32(edx);
	pop32(ebx);
	return;
loc_448BA7:
	esp -= 4; _sub_448FF0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_448BB0()
{
	edx = 0xC; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_448BBF;
	return;
loc_448BBF:
	add(eax, (int32_t)8);
	xor_(edx, edx);
}
Fn(void) Game::_sub_448BD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	eax = to32i(dword_5117B4); //mov
	ax = to16i(eax+4); //mov
	and_(eax, (int32_t)0xFFFF);
	xor_(edx, edx);
	to32i(esp+4) = eax; //mov
	to32i(esp+0x10) = edx; //mov
	test(eax, eax);
	if (jle())
		goto loc_448C32;
loc_448BF5:
	edx = to32i(esp+0x10); //mov
	eax = to32i(dword_5117B4); //mov
	esp -= 4; _sub_475190(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+8) = eax; //mov
	esp -= 4; _sub_475040(); esp += 4; //call
	ebx = eax; //mov
	esi = eax; //mov
	eax = to32i(dword_51180C); //mov
	test(to8i(ebx+eax+0x320), (int8_t)4);
	if (jz())
		goto loc_448C4F;
loc_448C21:
	ebx = to32i(esp+0x10); //mov
	inc(ebx);
	esi = to32i(esp+4); //mov
	to32i(esp+0x10) = ebx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_448BF5;
loc_448C32:
	xor_(ebx, ebx);
	ecx = 0xFFFFFFFF; //mov
	to32i(dword_5117B4) = ebx; //mov
	to32i(dword_5117B8) = ecx; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_448C4F:
	esp -= 4; _sub_448EC0(); esp += 4; //call
	edi = eax; //mov
	to32i(esp+0xC) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_448C21;
	imul32(ecx, edi, 0x118);
	eax = to32i(dword_51180C); //mov
	to32i(ecx+eax+0x450) = edx; //mov
	eax = edx; //mov
	esp -= 4; _sub_475140(); esp += 4; //call
	ebp = to32i(dword_51180C); //mov
	add(ebp, ecx);
	to32i(ebp+0x454) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475060(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x564) = eax; //mov
	eax = to32i(ecx+edx+0x450); //mov
	edx = 8; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x45C) = eax; //mov
	eax = to32i(ecx+edx+0x450); //mov
	edx = 7; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	add(edx, ecx);
	to32i(edx+0x460) = eax; //mov
	eax = to32i(edx+0x450); //mov
	edx = 0x13; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x464) = eax; //mov
	eax = to32i(ecx+edx+0x450); //mov
	edx = 0x12; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_51180C); //mov
	to32i(ecx+eax+0x468) = edx; //mov
	edx = 0x11; //mov
	eax = to32i(ecx+eax+0x450); //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_51180C); //mov
	to32i(ecx+eax+0x47C) = edx; //mov
	edx = 0xA; //mov
	eax = to32i(ecx+eax+0x450); //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_51180C); //mov
	to32i(ecx+eax+0x480) = edx; //mov
	edx = 5; //mov
	eax = to32i(ecx+eax+0x450); //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x474) = eax; //mov
	eax = to32i(ecx+edx+0x450); //mov
	edx = 0xD; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	add(edx, ecx);
	to32i(edx+0x470) = eax; //mov
	eax = to32i(edx+0x450); //mov
	edx = 6; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x46C) = eax; //mov
	eax = to32i(ecx+edx+0x450); //mov
	edx = 0xB; //mov
	esp -= 4; _sub_475080(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	to32i(ecx+edx+0x478) = eax; //mov
	edx = to32i(ecx+edx+0x454); //mov
	eax = edx; //mov
	esp -= 4; _sub_4750F0(); esp += 4; //call
	to32i(esp) = eax; //mov
	eax = to32i(dword_51180C); //mov
	ebp = to32i(esp); //mov
	to32i(ecx+eax+0x484) = ebp; //mov
	ebp = (uint16_t)to16i(edx+0xC); //movzx
	shl(ebp, (int32_t)3);
	to32i(esp) = ebp; //mov
	ebp = to32i(ecx+eax+0x484); //mov
	add(ebp, to32i(esp));
	to32i(ecx+eax+0x488) = ebp; //mov
	ebp = (uint16_t)to16i(edx+0xE); //movzx
	shl(ebp, (int32_t)3);
	to32i(esp) = ebp; //mov
	ebp = to32i(ecx+eax+0x488); //mov
	add(ebp, to32i(esp));
	to32i(ecx+eax+0x48C) = ebp; //mov
	ebp = (uint16_t)to16i(edx+0x10); //movzx
	shl(ebp, (int32_t)3);
	to32i(esp) = ebp; //mov
	ebp = to32i(ecx+eax+0x48C); //mov
	add(ebp, to32i(esp));
	to32i(ecx+eax+0x490) = ebp; //mov
	ebp = (uint16_t)to16i(edx+0x12); //movzx
	shl(ebp, (int32_t)3);
	to32i(esp) = ebp; //mov
	ebp = to32i(ecx+eax+0x490); //mov
	add(ebp, to32i(esp));
	to32i(ecx+eax+0x494) = ebp; //mov
	dx = to16i(edx+0x14); //mov
	and_(edx, (int32_t)0xFFFF);
	shl(edx, (int32_t)3);
	add(edx, ebp);
	to32i(ecx+eax+0x498) = edx; //mov
	ecx = to32i(esp+0xC); //mov
	to16i(eax+edi*2) = bx; //mov
	edx = to32i(dword_5117B8); //mov
	to16i(eax+ebx*2+0xC8) = cx; //mov
	cmp(ebx, edx);
	if (jnz())
		goto loc_448E8D;
	or_(to8i(ebx+eax+0x320), (int8_t)1);
loc_448E8D:
	eax = to32i(dword_51180C); //mov
	or_(to8i(esi+eax+0x320), (int8_t)6);
	eax = to32i(esp+0xC); //mov
	edx = esi; //mov
	esp -= 4; _sub_447310(); esp += 4; //call
	eax = to32i(esp+8); //mov
	edx = esi; //mov
	esp -= 4; _sub_448BB0(); esp += 4; //call
	goto loc_448C21;
}
Fn(void) Game::_sub_448EC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = to32i(dword_51180C); //mov
	xor_(eax, eax);
	xor_(edi, edi);
loc_448ED3:
	edx = esi; //mov
	edx = to16i(edx+eax); //movsx
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_448F5D;
	add(eax, (int32_t)2);
	inc(edi);
	cmp(eax, (int32_t)0xC8);
	if (jl())
		goto loc_448ED3;
	edx = esi; //mov
	xor_(eax, eax);
	xor_(edi, edi);
loc_448EF3:
	ecx = (int32_t)(intptr_t)(esi+eax); //lea
	ebp = to16i(ecx); //movsx
	to32i(esp) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esi+ebp); //lea
	bl = to8i(ecx+0x320); //mov
	test(bl, (int8_t)4);
	if (jz())
		goto loc_448F0F;
	test(bl, (int8_t)2);
	if (jz())
		goto loc_448F61;
loc_448F0F:
	add(eax, (int32_t)2);
	inc(edi);
	cmp(eax, (int32_t)0xC8);
	if (jl())
		goto loc_448EF3;
	edx = esi; //mov
	xor_(eax, eax);
	xor_(edi, edi);
loc_448F20:
	ecx = (int32_t)(intptr_t)(esi+eax); //lea
	ebp = to16i(ecx); //movsx
	to32i(esp+4) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esi+ebp); //lea
	bl = to8i(ecx+0x320); //mov
	test(bl, (int8_t)4);
	if (jz())
		goto loc_448F3D;
	test(bl, (int8_t)1);
	if (jz())
		goto loc_448F9A;
loc_448F3D:
	add(eax, (int32_t)2);
	inc(edi);
	cmp(eax, (int32_t)0xC8);
	if (jl())
		goto loc_448F20;
	eax = 0xFFFFFFFF; //mov
loc_448F4D:
	to32i(dword_51180C) = esi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_448F5D:
	eax = edi; //mov
	goto loc_448F4D;
loc_448F61:
	al = bl; //mov
	and_(al, (int8_t)0xFA);
	to8i(ecx+0x320) = al; //mov
	eax = to32i(esp); //mov
	to16i(edx+ebp*2+0xC8) = 0xFFFF; //mov
	to16i(eax) = 0xFFFF; //mov
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	add(eax, edi);
	shl(eax, (int32_t)2);
	sub(eax, edi);
	to32i(edx+eax*8+0x450) = 0; //mov
	eax = edi; //mov
	goto loc_448F4D;
loc_448F9A:
	al = bl; //mov
	and_(al, (int8_t)0xFB);
	to8i(ecx+0x320) = al; //mov
	eax = to32i(esp+4); //mov
	to16i(edx+ebp*2+0xC8) = 0xFFFF; //mov
	to16i(eax) = 0xFFFF; //mov
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	add(eax, edi);
	shl(eax, (int32_t)2);
	sub(eax, edi);
	to32i(edx+eax*8+0x450) = 0; //mov
	eax = edi; //mov
	to32i(dword_51180C) = esi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_448FF0()
{
	push32(esi);
	esi = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44901E;
	cmp(to32i(dword_5117B8), (int32_t)0xFFFFFFFF);
	if (jg())
		goto loc_44901E;
	test(eax, eax);
	if (jl())
		goto loc_44900D;
	cmp(eax, to32i(dword_511808));
	if (jle())
		goto loc_449025;
loc_44900D:
	xor_(esi, esi);
loc_44900F:
	eax = to32i(dword_51180C); //mov
	test(to8i(esi+eax+0x320), (int8_t)4);
	if (jz())
		goto loc_449033;
loc_44901E:
	eax = 0xFFFFFFFF; //mov
	pop32(esi);
	return;
loc_449025:
	cmp(to32i(dword_5117C0), (int32_t)0x1234);
	if (jnz())
		goto loc_44900D;
	goto loc_44900F;
loc_449033:
	push32(edi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	eax = esi; //mov
	ebx = to32i(dword_5117B4); //mov
	esp -= 4; _sub_475150(); esp += 4; //call
	xor_(ecx, ecx);
	edi = to32i(dword_511804); //mov
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_47FA30(); esp += 4; //call
	to32i(dword_5117B4) = eax; //mov
	to32i(dword_5117B8) = esi; //mov
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_449070()
{
	push32(edx);
	edx = eax; //mov
	cmp(to32i(dword_5117B8), (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_449081;
	esp -= 4; _sub_448BD0(); esp += 4; //call
loc_449081:
	eax = edx; //mov
	esp -= 4; _sub_448FF0(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_449094;
	eax = 1; //mov
	pop32(edx);
	return;
loc_449094:
	esp -= 4; _sub_448BD0(); esp += 4; //call
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4490A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
	ecx = to32i(dword_5117E0); //mov
	to32i(dword_5117C0) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4490BC;
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4490BC:
	eax = to32i(dword_51180C); //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	eax = to32i(dword_5117A8); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_47FA50(); esp += 4; //call
	esp -= 4; _sub_4752D0(); esp += 4; //call
	esp -= 4; _sub_446D10(); esp += 4; //call
	ebx = to32i(dword_5117A4); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_449106;
	esp -= 4; _sub_440CF0(); esp += 4; //call
	eax = to32i(dword_5117E8); //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_449106:
	eax = ebx; //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	esp -= 4; _sub_440CF0(); esp += 4; //call
	eax = to32i(dword_5117E8); //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_449120()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0x70);
	ecx = 0x1234; //mov
	xor_(edx, edx);
	ebx = 0xFFFFFFFF; //mov
	to32i(dword_51180C) = edx; //mov
	to32i(dword_5117C0) = ecx; //mov
	to32i(dword_5117B8) = ebx; //mov
	esp -= 4; _sub_446980(); esp += 4; //call
	edi = to32i(dword_51221C); //mov
	to32i(dword_5117BC) = edx; //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_449165;
	to32i(dword_5117BC) = 0xFFF40000; //mov
loc_449165:
	eax = (int32_t)(intptr_t)dword_4CBFB8; //mov
	edx = 0x320; //mov
	esp -= 4; _sub_449610(); esp += 4; //call
	esp -= 4; _sub_440D30(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5117D8; //mov
	esp -= 4; _sub_447180(); esp += 4; //call
	esp -= 4; _sub_446D10(); esp += 4; //call
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_449214;
	ecx = (int32_t)(intptr_t)dword_50E2A0; //mov
	ebx = (int32_t)(intptr_t)dword_50DF50; //mov
	edx = 0x10; //mov
	esp -= 4; _sub_446B20(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_50FBA0; //mov
	ebx = (int32_t)(intptr_t)dword_50DF74; //mov
	edx = 0x20; //mov
	eax = 2; //mov
loc_4491BE:
	esp -= 4; _sub_446B20(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_446CB0(); esp += 4; //call
	esp -= 4; _sub_4465C0(); esp += 4; //call
	eax = (int32_t)(intptr_t)a_col; //mov
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_4469B0(); esp += 4; //call
	esp -= 4; _sub_446F90(); esp += 4; //call
	esp -= 4; _sub_4752F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_449243;
loc_4491EC:
	esp -= 4; _sub_449410(); esp += 4; //call
	eax = 5; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_449070(); esp += 4; //call
	eax = to32i(dword_5117B0); //mov
	esp -= 4; _sub_42CD64(); esp += 4; //call
	add(esp, (int32_t)0x70);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_449214:
	ecx = (int32_t)(intptr_t)dword_50E2A0; //mov
	ebx = (int32_t)(intptr_t)dword_50DF50; //mov
	edx = 0x10; //mov
	xor_(eax, eax);
	esp -= 4; _sub_446B20(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_50FBA0; //mov
	ebx = (int32_t)(intptr_t)dword_50DF74; //mov
	edx = 0x10; //mov
	eax = 3; //mov
	goto loc_4491BE;
loc_449243:
	push32(esi);
	eax = (int32_t)(intptr_t)a_trk; //mov
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_49E380(); esp += 4; //call
	edx = to32i(dword_513484); //mov
	push32(edx);
	push32(aSmain_trk);
	edi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)a_trk; //mov
	xor_(edx, edx);
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_446440(); esp += 4; //call
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_488570(); esp += 4; //call
	goto loc_449292;
loc_449292:
	ecx = (int32_t)(intptr_t)(esp+0x70); //lea
	ebx = (int32_t)(intptr_t)(esp+0x6C); //lea
	edx = (int32_t)(intptr_t)(esp+0x68); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4877C4(); esp += 4; //call
	eax = to32i(esp+0x68); //mov
	ebx = edi; //mov
	edx = esi; //mov
	esp -= 4; _sub_487960(); esp += 4; //call
	ebx = 0x113000; //mov
	eax = to32i(esp+0x68); //mov
	edx = esi; //mov
	sub(ebx, edi);
	esp -= 4; _sub_487960(); esp += 4; //call
	eax = to32i(esp+0x68); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_47FAE0(); esp += 4; //call
	to32i(dword_511804) = eax; //mov
	eax = (int32_t)(intptr_t)a_trk; //mov
	esp -= 4; _sub_449640(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_475270(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_475240(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	esp -= 4; _sub_475210(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_475210(); esp += 4; //call
	eax = to32i(dword_511804); //mov
	edx = 0x71B0; //mov
	esp -= 4; _sub_4752A0(); esp += 4; //call
	dec(eax);
	xor_(ebx, ebx);
	to32i(dword_511808) = eax; //mov
	eax = to32i(dword_511804); //mov
	to32i(dword_5117B4) = ecx; //mov
	esp -= 4; _sub_475210(); esp += 4; //call
	eax = (int32_t)(intptr_t)aChunklist; //mov
	esp -= 4; _sub_4471C0(); esp += 4; //call
	to32i(dword_51180C) = eax; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	pop32(esi);
loc_449353:
	ecx = to32i(dword_51180C); //mov
	ebx = (int32_t)(intptr_t)(edx+ecx); //lea
	to32i(ebx+0x450) = 0; //mov
	to16i(ecx+eax) = 0xFFFF; //mov
	add(eax, (int32_t)2);
	add(edx, (int32_t)0x118);
	cmp(eax, (int32_t)0xC8);
	if (jnz())
		goto loc_449353;
	xor_(edx, edx);
	xor_(eax, eax);
loc_449380:
	ecx = to32i(dword_51180C); //mov
	ebx = (int32_t)(intptr_t)(edx+ecx); //lea
	inc(eax);
	to16i(ebx+0xC8) = 0xFFFF; //mov
	add(edx, (int32_t)2);
	to8i(ecx+eax+0x31F) = 0; //mov
	cmp(eax, (int32_t)0x12C);
	if (jl())
		goto loc_449380;
	goto loc_4491EC;
}
Fn(void) Game::_sub_4493C0()
{
	push32(edx);
	add(eax, (int32_t)0x14);
	esp -= 4; _sub_449490(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4493E5;
	push32(ecx);
	ecx = to32i(dword_5117C4); //mov
	eax = to32i(dword_5117A8); //mov
	add(eax, ecx);
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	pop32(ecx);
	pop32(edx);
	return;
loc_4493E5:
	edx = to32i(dword_5118A0); //mov
	eax = to32i(dword_5117C4); //mov
	add(eax, edx);
	edx = to32i(dword_5117A8); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_449410()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_5117A8); //mov
	eax = (int32_t)(intptr_t)a_dis; //mov
	xor_(edx, edx);
	esp -= 4; _sub_449640(); esp += 4; //call
	esp -= 4; _sub_486F50(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_449438;
loc_44942F:
	to32i(dword_5117A8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_449438:
	push32(ebx);
	edx = (int32_t)(intptr_t)aCNfs2seGameC_3; //mov
	ebx = 0x1D0; //mov
	eax = (int32_t)(intptr_t)aBwdistfront; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	edx = to32i(dword_5118A0); //mov
	xor_(ebx, ebx);
	shl(edx, (int32_t)3);
	to32i(dword_5117A8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ecx = eax; //mov
	xor_(eax, eax);
	pop32(ebx);
loc_44946F:
	edx = to32i(dword_5118A0); //mov
	add(edx, edx);
	cmp(eax, edx);
	if (jge())
		goto loc_44942F;
	edx = ecx; //mov
	to8i(edx+eax) = 0x64; //mov
	inc(eax);
	goto loc_44946F;
}
Fn(void) Game::_sub_449490()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	edx = to32i(dword_5117C4); //mov
	esi = (int32_t)(intptr_t)(eax+0x18); //lea
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	edi = esp; //mov
	add(eax, edx);
	movsd();
	movsd();
	movsd();
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0xC) = edx; //mov
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(eax+0xE); //mov
	shl(edx, (int32_t)9);
	sar(eax, (int32_t)0x18);
	to32i(esp+0x10) = edx; //mov
	shl(eax, (int32_t)9);
	edx = to32i(esp+0xC); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ecx = eax; //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ecx, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_44952B;
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_44952B:
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449540()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	to32i(dword_5117B8) = 0xFFFFFFFF; //mov
	esp -= 4; _sub_446980(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_446CB0(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
loc_44955D:
	ecx = to32i(dword_51180C); //mov
	ebx = (int32_t)(intptr_t)(edx+ecx); //lea
	to32i(ebx+0x450) = 0; //mov
	to16i(ecx+eax) = 0xFFFF; //mov
	add(eax, (int32_t)2);
	add(edx, (int32_t)0x118);
	cmp(eax, (int32_t)0xC8);
	if (jnz())
		goto loc_44955D;
	xor_(edx, edx);
	xor_(eax, eax);
loc_44958A:
	ecx = to32i(dword_51180C); //mov
	ebx = (int32_t)(intptr_t)(edx+ecx); //lea
	inc(eax);
	to16i(ebx+0xC8) = 0xFFFF; //mov
	add(edx, (int32_t)2);
	to8i(ecx+eax+0x31F) = 0; //mov
	cmp(eax, (int32_t)0x12C);
	if (jl())
		goto loc_44958A;
	eax = to32i(dword_511808); //mov
	sub(eax, (int32_t)8);
	esp -= 4; _sub_449070(); esp += 4; //call
	eax = to32i(dword_511808); //mov
	esp -= 4; _sub_449070(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_449070(); esp += 4; //call
	eax = 8; //mov
	esp -= 4; _sub_449070(); esp += 4; //call
	esp -= 4; _sub_440DC0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4495E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	ebx = to32i(ecx+8); //mov
	eax = to32i(edx+8); //mov
	sub(eax, ebx);
	ebx = eax; //mov
	sar(ebx, (int32_t)0xC);
	imul32(ebx, ebx);
	esi = to32i(ecx); //mov
	eax = to32i(edx); //mov
	sub(eax, esi);
	sar(eax, (int32_t)0xC);
	imul32(eax, eax);
	sar(ebx, (int32_t)6);
	sar(eax, (int32_t)6);
	add(eax, ebx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_449610()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	edx = to32i(dword_5117B0); //mov
	push32(edx);
	ecx = to32i(dword_513488); //mov
	push32(ecx);
	push32(aStr02dS);
	push32(dword_511850);
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_511850; //mov
	add(esp, (int32_t)0x14);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449640()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	edx = to32i(dword_5117B0); //mov
	push32(edx);
	ecx = to32i(dword_513480); //mov
	push32(ecx);
	push32(aStr02dS);
	push32(dword_511810);
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_511810; //mov
	add(esp, (int32_t)0x14);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449670()
{
	push32(ecx);
	cmp(to32i(eax), (int32_t)1);
	if (jz())
		goto loc_4496A9;
	ecx = to32i(dword_5117AC); //mov
	eax = to32i(ecx+0xB0); //mov
	sar(eax, (int32_t)0xC);
	imul32(eax, eax);
	sar(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_4496A9;
	eax = to32i(ecx+0xAC); //mov
	sar(eax, (int32_t)0xC);
	imul32(eax, eax);
	sar(eax, (int32_t)6);
	cmp(edx, eax);
	if (jle())
		goto loc_4496AD;
	eax = 1; //mov
	pop32(ecx);
	return;
loc_4496A9:
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_4496AD:
	eax = 2; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4496C0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	eax = esp; //mov
	shl(edx, (int32_t)4);
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	edx = to32i(dword_4D5C2C); //mov
	add(edx, ecx);
	eax = to32i(esp); //mov
	to32i(dword_4D5C2C) = edx; //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449700()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = eax; //mov
	ebx = to32i(eax+0xA8); //mov
	ecx = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4497D4;
	eax = ebx; //mov
loc_44971A:
	esi = to32i(ecx+0xB0); //mov
	test(esi, esi);
	if (jle())
		goto loc_4497DD;
	ebx = esi; //mov
loc_44972A:
	add(ebx, eax);
	sar(ebx, (int32_t)0x10);
	eax = ebx; //mov
	cmp(ebx, (int32_t)0x64);
	if (jle())
		goto loc_4497E6;
	eax = 0x64; //mov
loc_44973F:
	edi = to32i(edx+0x288); //mov
	test(edi, edi);
	if (jz())
		goto loc_4497F9;
loc_44974D:
	neg(eax);
loc_44974F:
	test(eax, eax);
	if (jl())
		goto loc_449811;
	edi = to32i(ecx+0x14); //mov
	ebp = to32i(dword_5118A0); //mov
	add(eax, edi);
	cmp(eax, ebp);
	if (jl())
		goto loc_449768;
	sub(eax, ebp);
loc_449768:
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	eax = to32i(dword_5118A4); //mov
	shl(ecx, (int32_t)2);
	ax = to16i(ecx+eax+0x16); //mov
	ebx = to32i(dword_51180C); //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = to32i(ebx+eax*2+0xC6); //mov
	sar(ecx, (int32_t)0x10);
	test(ecx, ecx);
	if (jl())
		goto loc_449827;
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	shl(eax, (int32_t)3);
	add(ebx, eax);
	eax = to32i(ebx+0x46C); //mov
	ecx = (int32_t)(intptr_t)(eax+8); //lea
	esi = to32i(ebx+0x564); //mov
	eax = edx; //mov
	sub(eax, esi);
	al = to8i(ecx+eax*8+3); //mov
	and_(eax, (int32_t)0xFF);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4497D4:
	eax = ebx; //mov
	neg(eax);
	goto loc_44971A;
loc_4497DD:
	ebx = esi; //mov
	neg(ebx);
	goto loc_44972A;
loc_4497E6:
	cmp(ebx, (int32_t)0xFFFFFF9C);
	if (jge())
		goto loc_44973F;
	eax = 0xFFFFFF9C; //mov
	goto loc_44973F;
loc_4497F9:
	if (jnz())
		goto loc_44974F;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_44974D;
	goto loc_44974F;
loc_449811:
	add(eax, to32i(ecx+0x14));
	test(eax, eax);
	if (jge())
		goto loc_449768;
	add(eax, to32i(dword_5118A0));
	goto loc_449768;
loc_449827:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_449830()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	ebx = to32i(dword_5117C4); //mov
	esi = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(esi, ebx);
	eax = to32i(dword_5118A4); //mov
	shl(esi, (int32_t)2);
	edx = to32i(esi+eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ecx+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	eax = to32i(dword_5118A4); //mov
	edx = to32i(esi+eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ecx+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5118A4); //mov
	add(edi, eax);
	edx = to32i(edx+esi+0xE); //mov
	eax = to32i(ecx+0x34); //mov
	sar(edx, (int32_t)0x18);
	xor_(ebp, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512228); //mov
	add(eax, edi);
	test(edx, edx);
	if (jnz())
		goto loc_4498AF;
	test(eax, eax);
	if (jl())
		goto loc_4498C0;
loc_4498AF:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_449931;
	test(eax, eax);
	if (jle())
		goto loc_449931;
loc_4498C0:
	eax = 0xFFFFFFFE; //mov
	add(eax, ebx);
	test(eax, eax);
	if (jl())
		goto loc_44994A;
loc_4498CF:
	ebx = to32i(dword_51221C); //mov
	edx = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4498FB;
	shl(eax, (int32_t)3);
	ebx = (int32_t)(intptr_t)(edx+eax); //lea
	eax = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1E); //mov
	sar(ebx, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_449955;
loc_4498FB:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1E); //mov
	sar(edx, (int32_t)4);
	and_(edx, (int32_t)0xF);
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_449A02;
loc_449922:
	eax = 1; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_449931:
	test(ebp, ebp);
	if (jnz())
		goto loc_4498C0;
	eax = 2; //mov
	edi = to32i(dword_5118A0); //mov
	add(eax, ebx);
	cmp(eax, edi);
	if (jl())
		goto loc_4498CF;
	sub(eax, edi);
	goto loc_4498CF;
loc_44994A:
	add(eax, to32i(dword_5118A0));
	goto loc_4498CF;
loc_449955:
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jz())
		goto loc_4498FB;
	cmp(edx, (int32_t)0x4D0);
	if (jle())
		goto loc_4498FB;
	cmp(edx, (int32_t)0x4F6);
	if (jge())
		goto loc_4498FB;
	ebx = edx; //mov
	shl(ebx, (int32_t)3);
	add(ebx, edx);
	eax = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	edx = to32i(ecx+8); //mov
	sub(edx, to32i(ebx+eax));
	edi = to32i(ebx+eax+4); //mov
	to32i(esp) = edx; //mov
	edx = to32i(ecx+0xC); //mov
	sub(edx, edi);
	ebp = to32i(ebx+eax+8); //mov
	to32i(esp+4) = edx; //mov
	edx = to32i(ecx+0x10); //mov
	sub(edx, ebp);
	to32i(esp+8) = edx; //mov
	edx = to32i(ebx+eax+0xF); //mov
	eax = to32i(esp); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = to32i(dword_5118A4); //mov
	edx = to32i(ebx+eax+0x10); //mov
	eax = to32i(esp+4); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(dword_5118A4); //mov
	edx = to32i(ebx+eax+0x11); //mov
	eax = to32i(esp+8); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	test(eax, eax);
	if (jl())
		goto loc_449922;
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_449A02:
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jz())
		goto loc_449922;
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_449A20()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_44B2C0(); esp += 4; //call
	ecx = to32i(eax+0x288); //mov
	edx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_449A75;
	eax = 0xFFFFFFF8; //mov
	add(eax, edx);
	test(eax, eax);
	if (jl())
		goto loc_449A8E;
loc_449A3F:
	edx = eax; //mov
loc_449A41:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1E); //mov
	sar(edx, (int32_t)4);
	and_(edx, (int32_t)0xF);
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_449A6D;
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_449A96;
loc_449A6D:
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_449A75:
	push32(ebx);
	eax = 8; //mov
	ebx = to32i(dword_5118A0); //mov
	add(eax, edx);
	cmp(eax, ebx);
	if (jl())
		goto loc_449A89;
	sub(eax, ebx);
loc_449A89:
	edx = eax; //mov
	pop32(ebx);
	goto loc_449A41;
loc_449A8E:
	add(eax, to32i(dword_5118A0));
	goto loc_449A3F;
loc_449A96:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449AA0()
{
	push32(edx);
	edx = to32i(eax+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1E); //mov
	sar(edx, (int32_t)4);
	and_(edx, (int32_t)0xF);
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_449AD0;
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_449AD7;
loc_449AD0:
	eax = 1; //mov
	pop32(edx);
	return;
loc_449AD7:
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_449AE0()
{
	test(edx, edx);
	if (jz())
		goto loc_449AEA;
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jz())
		goto loc_449AFC;
loc_449AEA:
	push32(ecx);
	ecx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_449B09;
	al = to8i(ecx+1); //mov
	and_(eax, (int32_t)0xFF);
	pop32(ecx);
	return;
loc_449AFC:
	to32i(eax+0x7C) = 0xFFFFFFFF; //mov
	eax = 1; //mov
	return;
loc_449B09:
	eax = 1; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_449B10()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	ebp = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	eax = to32i(dword_511890); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	test(eax, eax);
	if (jl())
		goto loc_449C9F;
	ebx = to32i(ecx+0xC); //mov
	esi = to32i(dword_5118A0); //mov
	add(eax, ebx);
	cmp(eax, esi);
	if (jl())
		goto loc_449B46;
	sub(eax, esi);
loc_449B46:
	ecx = eax; //mov
	edx = ecx; //mov
	neg(edx);
	ebx = to32i(dword_511890); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	test(edx, edx);
	if (jl())
		goto loc_449CB5;
	edi = to32i(dword_5118A0); //mov
	cmp(eax, edi);
	if (jl())
		goto loc_449B70;
	sub(eax, edi);
loc_449B70:
	ebx = eax; //mov
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ecx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(ecx, (int32_t)2);
	add(eax, ecx);
	edi = esp; //mov
	esi = eax; //mov
	movsd();
	movsd();
	movsd();
	cmp(to32i(esp+0xC), (int32_t)0);
	if (jz())
		goto loc_449CC8;
	edx = to32i(eax+0xF); //mov
	edi = (uint8_t)to8i(eax+0x21); //movzx
	sar(edx, (int32_t)0x18);
	shl(edi, (int32_t)0xF);
	al = to8i(eax+0x1F); //mov
	shl(edx, (int32_t)9);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, edi);
	esi = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	eax = to32i(dword_5118A4); //mov
	to32i(esp) = esi; //mov
	edx = to32i(ecx+eax+0x10); //mov
	edi = (uint8_t)to8i(ecx+eax+0x21); //movzx
	sar(edx, (int32_t)0x18);
	shl(edi, (int32_t)0xF);
	al = to8i(ecx+eax+0x1F); //mov
	shl(edx, (int32_t)9);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, edi);
	edi = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(edi, eax);
	eax = to32i(dword_5118A4); //mov
	to32i(esp+4) = edi; //mov
	edx = to32i(ecx+eax+0x11); //mov
	esi = (uint8_t)to8i(ecx+eax+0x21); //movzx
	sar(edx, (int32_t)0x18);
	shl(esi, (int32_t)0xF);
	al = to8i(ecx+eax+0x1F); //mov
	shl(edx, (int32_t)9);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(esp+8), eax);
loc_449C32:
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+9); //mov
	sar(edx, (int32_t)0x18);
	ecx = to32i(dword_511894); //mov
	shl(edx, (int32_t)9);
	imul32(edx, ecx);
	esi = to32i(esp); //mov
	add(esi, edx);
	edx = to32i(eax+0xA); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	imul32(edx, ecx);
	eax = to32i(eax+0xB); //mov
	to32i(esp) = esi; //mov
	sar(eax, (int32_t)0x18);
	esi = ecx; //mov
	shl(eax, (int32_t)9);
	imul32(eax, esi);
	edi = to32i(esp+8); //mov
	ecx = to32i(esp+4); //mov
	esi = esp; //mov
	add(edi, eax);
	add(ecx, edx);
	to32i(esp+8) = edi; //mov
	edi = ebp; //mov
	to32i(esp+4) = ecx; //mov
	eax = ebx; //mov
	movsd();
	movsd();
	movsd();
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_449C9F:
	add(eax, to32i(ecx+0xC));
	test(eax, eax);
	if (jge())
		goto loc_449B46;
	add(eax, to32i(dword_5118A0));
	goto loc_449B46;
loc_449CB5:
	test(eax, eax);
	if (jge())
		goto loc_449B70;
	add(eax, to32i(dword_5118A0));
	goto loc_449B70;
loc_449CC8:
	edx = to32i(eax+0xF); //mov
	esi = (uint8_t)to8i(eax+0x1F); //movzx
	sar(edx, (int32_t)0x18);
	sar(esi, (int32_t)4);
	al = to8i(eax+0x20); //mov
	shl(edx, (int32_t)9);
	and_(esi, (int32_t)0xF);
	and_(eax, (int32_t)0xFF);
	shl(eax, (int32_t)0xF);
	imul32(eax, esi);
	edi = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(edi, eax);
	eax = to32i(dword_5118A4); //mov
	to32i(esp) = edi; //mov
	edx = to32i(ecx+eax+0x10); //mov
	esi = (uint8_t)to8i(ecx+eax+0x1F); //movzx
	sar(edx, (int32_t)0x18);
	sar(esi, (int32_t)4);
	al = to8i(ecx+eax+0x20); //mov
	shl(edx, (int32_t)9);
	and_(esi, (int32_t)0xF);
	and_(eax, (int32_t)0xFF);
	shl(eax, (int32_t)0xF);
	imul32(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	sub(edx, eax);
	eax = to32i(dword_5118A4); //mov
	add(ecx, eax);
	xor_(eax, eax);
	al = to8i(ecx+0x1F); //mov
	esi = eax; //mov
	xor_(eax, eax);
	sar(esi, (int32_t)4);
	al = to8i(ecx+0x20); //mov
	and_(esi, (int32_t)0xF);
	shl(eax, (int32_t)0xF);
	imul32(eax, esi);
	to32i(esp+4) = edx; //mov
	edx = to32i(ecx+0x11); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	ecx = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+8) = ecx; //mov
	goto loc_449C32;
}
Fn(void) Game::_sub_449D80()
{
	to32i(dword_511890) = edx; //mov
	to32i(dword_511894) = eax; //mov
}
Fn(void) Game::_sub_449D90()
{
	push32(esi);
	push32(ebp);
	esi = edx; //mov
	ebp = ecx; //mov
	ecx = to32i(dword_51180C); //mov
	eax = to32i(eax+0x74); //mov
	edx = to32i(ecx+eax*2+0xC6); //mov
	sar(edx, (int32_t)0x10);
	test(edx, edx);
	if (jl())
		goto loc_449DD6;
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, ecx);
	edx = to32i(eax+0x478); //mov
	test(edx, edx);
	if (jz())
		goto loc_449E03;
	eax = edx; //mov
	xor_(edx, edx);
	dx = to16i(eax+6); //mov
	cmp(esi, edx);
	if (jl())
		goto loc_449DDE;
loc_449DD6:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(esi);
	return;
loc_449DDE:
	push32(edi);
	edx = (int32_t)(intptr_t)(eax+8); //lea
	eax = esi; //mov
	shl(eax, (int32_t)2);
	add(eax, esi);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edi = ebx; //mov
	esi = eax; //mov
	movsd();
	movsd();
	movsd();
	ax = to16i(eax+0xC); //mov
	to16i(ebp+0) = ax; //mov
	xor_(eax, eax);
	pop32(edi);
	pop32(ebp);
	pop32(esi);
	return;
loc_449E03:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_449E10()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_51180C); //mov
	eax = to32i(eax+0x74); //mov
	edx = to32i(ecx+eax*2+0xC6); //mov
	sar(edx, (int32_t)0x10);
	test(edx, edx);
	if (jl())
		goto loc_449E52;
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, ecx);
	edx = to32i(eax+0x478); //mov
	test(edx, edx);
	if (jz())
		goto loc_449E52;
	ax = to16i(edx+6); //mov
	and_(eax, (int32_t)0xFFFF);
	pop32(edx);
	pop32(ecx);
	return;
loc_449E52:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_449E60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x84);
	to32i(esp+0x1C) = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x34) = ebx; //mov
	edi = edx; //mov
	to32i(edx+0x14) = 0; //mov
	esi = eax; //mov
	to32i(edx+0x10) = 0; //mov
	movsd();
	movsd();
	movsd();
	to16i(edx+0x6E) = 1; //mov
	xor_(edx, edx);
	to32i(esp+0x20) = edx; //mov
	to32i(esp+0x28) = edx; //mov
loc_449E99:
	eax = ebp; //mov
	esp -= 4; _sub_44ADA0(); esp += 4; //call
	eax = to32i(ebp+0x74); //mov
	esp -= 4; _sub_4751D0(); esp += 4; //call
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+0x74); //mov
	ebx = to32i(dword_511808); //mov
	inc(eax);
	cmp(eax, ebx);
	if (jle())
		goto loc_449EBC;
	xor_(eax, eax);
loc_449EBC:
	edx = to32i(esp+0x1C); //mov
	ecx = to32i(esp+0x24); //mov
	esp -= 4; _sub_4751D0(); esp += 4; //call
	edx = to32i(edx); //mov
	esi = to32i(ecx); //mov
	sub(edx, esi);
	sar(edx, (int32_t)8);
	to16i(esp+0x80) = dx; //mov
	edx = to32i(esp+0x1C); //mov
	edi = to32i(ecx+8); //mov
	edx = to32i(edx+8); //mov
	sub(edx, edi);
	sar(edx, (int32_t)8);
	to16i(esp+0x7C) = dx; //mov
	edx = to32i(eax); //mov
	sub(edx, esi);
	sar(edx, (int32_t)8);
	to16i(esp) = dx; //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(eax+8); //mov
	sub(eax, to32i(ecx+8));
	sar(eax, (int32_t)8);
	to16i(esp+4) = ax; //mov
	imul32(eax, to32i(ebp+0x78), 0x118);
	edx = to32i(dword_51180C); //mov
	eax = to32i(edx+eax+0x454); //mov
	esp -= 4; _sub_475130(); esp += 4; //call
	esi = eax; //mov
	imul32(edx, to32i(ebp+0x78), 0x118);
	eax = to32i(dword_51180C); //mov
	edi = to32i(edx+eax+0x454); //mov
	di = to16i(edi+4); //mov
	edx = 0x7FFFFFFF; //mov
	and_(edi, (int32_t)0xFFFF);
	ecx = to32i(ebp+0x70); //mov
	to32i(esp+0x38) = edx; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_44A295;
	eax = ecx; //mov
loc_449F59:
	edx = to32i(ebp+0x1C); //mov
	dl = to8i(edx+2); //mov
	and_(edx, (int32_t)0xFF);
	dec(edx);
	cmp(eax, edx);
	if (jge())
		goto loc_44A2A3;
	ebx = to32i(ebp+0x70); //mov
	test(ebx, ebx);
	if (jl())
		goto loc_44A29C;
	eax = ebx; //mov
loc_449F7B:
	edx = to32i(ebp+0x1C); //mov
	xor_(ecx, ecx);
	cl = to8i(edx+2); //mov
	sub(ecx, eax);
	ebx = to32i(ebp+0x78); //mov
	to32i(esp+8) = ecx; //mov
	imul32(ecx, ebx, 0x118);
	to32i(esp+0xC) = eax; //mov
	ebx = to32i(dword_51180C); //mov
	dx = to16i(edx); //mov
	add(ecx, ebx);
	and_(edx, (int32_t)0xFFFF);
	ecx = to32i(ecx+0x494); //mov
	shl(edx, (int32_t)3);
	add(ecx, edx);
	shl(eax, (int32_t)3);
	to32i(ebp+0x10) = ecx; //mov
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	ebx = esi; //mov
	ecx = edi; //mov
	eax = ebp; //mov
	to32i(ebp+0x10) = edx; //mov
	edx = esp; //mov
	esp -= 4; _sub_44AAD0(); esp += 4; //call
	xor_(ecx, ecx);
	ebx = to32i(esp+8); //mov
	to32i(esp+0x78) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44A0A2;
loc_449FDD:
	eax = to32i(ebp+0x54); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	to32i(esp+0x58) = eax; //mov
	edx = eax; //mov
	eax = to32i(ebp+0x5E); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	to32i(esp+0x6C) = eax; //mov
	eax = to32i(esp+0x7A); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(ebp+0x5A); //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)0x10);
	ebx = eax; //mov
	sar(ecx, (int32_t)2);
	sub(ebx, to32i(esp+0x6C));
	sub(edx, ecx);
	imul32(ebx, edx);
	edx = to32i(ebp+0x58); //mov
	sar(edx, (int32_t)0x10);
	to32i(esp+0x14) = ebx; //mov
	sar(edx, (int32_t)2);
	ebx = to32i(esp+0x6C); //mov
	to32i(esp+0x50) = edx; //mov
	sub(edx, ebx);
	to32i(esp+0x10) = edx; //mov
	edx = to32i(esp+0x7E); //mov
	sar(edx, (int32_t)0x10);
	sar(edx, (int32_t)2);
	ebx = edx; //mov
	sub(ebx, ecx);
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	sub(ebx, to32i(esp+0x10));
	test(ebx, ebx);
	if (jle())
		goto loc_44A2AA;
loc_44A059:
	edx = to32i(esp+0x7A); //mov
	eax = to32i(ebp+0x52); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(edx, eax);
	eax = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_44A43C;
loc_44A072:
	ecx = to32i(esp+0x7E); //mov
	eax = to32i(ebp+0x4E); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(ecx, eax);
	eax = ecx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_44A443;
loc_44A08B:
	add(eax, edx);
	cmp(to32i(esp+0x34), (int32_t)0);
	if (jz())
		goto loc_44A44A;
	cmp(eax, to32i(esp+0x38));
	if (jle())
		goto loc_44A44A;
loc_44A0A2:
	cmp(to32i(ebp+0x70), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44A0B4;
	eax = to32i(esp+0xC); //mov
	add(eax, to32i(esp+0x78));
	dec(eax);
	to32i(ebp+0x70) = eax; //mov
loc_44A0B4:
	eax = to32i(esp+0xC); //mov
	ecx = 0x7FFFFFFF; //mov
	dec(eax);
	to32i(esp+0x3C) = ecx; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_44A0CC;
	eax = 0xFFFFFFFF; //mov
loc_44A0CC:
	to32i(esp+0x2C) = eax; //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	ebx = to32i(ebp+0x78); //mov
	to32i(esp+0x30) = edx; //mov
	imul32(edx, ebx, 0x118);
	ecx = to32i(dword_51180C); //mov
	add(edx, ecx);
	ecx = to32i(ebp+0x1C); //mov
	cx = to16i(ecx); //mov
	and_(ecx, (int32_t)0xFFFF);
	shl(eax, (int32_t)3);
	edx = to32i(edx+0x494); //mov
	shl(ecx, (int32_t)3);
	ebx = esi; //mov
	add(edx, ecx);
	ecx = edi; //mov
	to32i(ebp+0x10) = edx; //mov
	add(edx, eax);
	eax = ebp; //mov
	to32i(ebp+0x10) = edx; //mov
	edx = esp; //mov
	esp -= 4; _sub_44AAD0(); esp += 4; //call
	xor_(ecx, ecx);
	ebx = to32i(esp+0x30); //mov
	to32i(esp+0x74) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44A1EA;
loc_44A129:
	eax = to32i(ebp+0x54); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	to32i(esp+0x44) = eax; //mov
	eax = to32i(ebp+0x5A); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	ecx = to32i(esp+0x44); //mov
	to32i(esp+0x70) = eax; //mov
	sub(ecx, eax);
	eax = to32i(ebp+0x5E); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	to32i(esp+0x40) = eax; //mov
	eax = to32i(esp+0x7A); //mov
	sar(eax, (int32_t)0x10);
	sar(eax, (int32_t)2);
	ebx = to32i(esp+0x40); //mov
	edx = eax; //mov
	sub(edx, ebx);
	imul32(ecx, edx);
	edx = to32i(ebp+0x58); //mov
	sar(edx, (int32_t)0x10);
	sar(edx, (int32_t)2);
	to32i(esp+0x10) = ecx; //mov
	to32i(esp+0x4C) = edx; //mov
	ecx = edx; //mov
	edx = to32i(esp+0x7E); //mov
	sar(edx, (int32_t)0x10);
	sar(edx, (int32_t)2);
	sub(ecx, ebx);
	ebx = edx; //mov
	sub(ebx, to32i(esp+0x70));
	imul32(ecx, ebx);
	ebx = to32i(esp+0x10); //mov
	sub(ebx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_44A47E;
loc_44A1A1:
	eax = to32i(esp+0x7A); //mov
	edx = to32i(ebp+0x52); //mov
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_44A5BA;
	edx = eax; //mov
loc_44A1BA:
	ecx = to32i(esp+0x7E); //mov
	eax = to32i(ebp+0x4E); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(ecx, eax);
	eax = ecx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_44A5C3;
loc_44A1D3:
	add(eax, edx);
	cmp(to32i(esp+0x34), (int32_t)0);
	if (jz())
		goto loc_44A5CA;
	cmp(eax, to32i(esp+0x3C));
	if (jle())
		goto loc_44A5CA;
loc_44A1EA:
	eax = to32i(esp+0x28); //mov
	ebx = to32i(dword_4D5C50+eax); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44A5FE;
	eax = ebx; //mov
loc_44A1FE:
	edx = to32i(esp+0x28); //mov
	cmp(to32i(dword_4D5C50+edx), (int32_t)0);
	if (jle())
		goto loc_44A607;
loc_44A20F:
	dec(eax);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A22F;
	ecx = to32i(ebp+0xC); //mov
	inc(ecx);
	ebx = to32i(dword_5118A0); //mov
	to32i(ebp+0xC) = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_44A20F;
	to32i(ebp+0xC) = 0; //mov
	goto loc_44A20F;
loc_44A22F:
	eax = to32i(esp+0x28); //mov
	edi = to32i(esp+0x28); //mov
	esi = to32i(esp+0x20); //mov
	eax = to32i(dword_4D5C50+eax); //mov
	add(edi, (int32_t)4);
	add(esi, eax);
	to32i(esp+0x28) = edi; //mov
	to32i(esp+0x20) = esi; //mov
	cmp(edi, (int32_t)0x20);
	if (jl())
		goto loc_449E99;
	eax = esi; //mov
	neg(eax);
	test(eax, eax);
	if (jle())
		goto loc_44A62E;
loc_44A263:
	edx = to32i(esp+0x20); //mov
	neg(edx);
	test(edx, edx);
	if (jle())
		goto loc_44A635;
loc_44A271:
	dec(eax);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A658;
	esi = to32i(ebp+0xC); //mov
	inc(esi);
	edi = to32i(dword_5118A0); //mov
	to32i(ebp+0xC) = esi; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_44A271;
	to32i(ebp+0xC) = 0; //mov
	goto loc_44A271;
loc_44A295:
	xor_(eax, eax);
	goto loc_449F59;
loc_44A29C:
	xor_(eax, eax);
	goto loc_449F7B;
loc_44A2A3:
	eax = edx; //mov
	goto loc_449F7B;
loc_44A2AA:
	ebx = to32i(ebp+0x4E); //mov
	sar(ebx, (int32_t)0x10);
	sar(ebx, (int32_t)2);
	to32i(esp+0x68) = ebx; //mov
	sub(ebx, to32i(esp+0x58));
	to32i(esp+0x14) = ebx; //mov
	ebx = eax; //mov
	sub(ebx, to32i(esp+0x50));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x14) = ebx; //mov
	ebx = to32i(ebp+0x52); //mov
	sar(ebx, (int32_t)0x10);
	sar(ebx, (int32_t)2);
	to32i(esp+0x64) = ebx; //mov
	sub(ebx, to32i(esp+0x50));
	to32i(esp+0x10) = ebx; //mov
	ebx = edx; //mov
	sub(ebx, to32i(esp+0x58));
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	sub(ebx, to32i(esp+0x10));
	test(ebx, ebx);
	if (jg())
		goto loc_44A059;
	ebx = to32i(ebp+0x60); //mov
	sar(ebx, (int32_t)0x10);
	sar(ebx, (int32_t)2);
	sub(ecx, ebx);
	to32i(esp+0x14) = ecx; //mov
	ecx = to32i(ebp+0x64); //mov
	to32i(esp+0x5C) = ebx; //mov
	sar(ecx, (int32_t)0x10);
	ebx = eax; //mov
	sar(ecx, (int32_t)2);
	sub(ebx, ecx);
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x14) = ebx; //mov
	ebx = to32i(esp+0x6C); //mov
	sub(ebx, ecx);
	to32i(esp+0x10) = ebx; //mov
	ebx = edx; //mov
	sub(ebx, to32i(esp+0x5C));
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	sub(ebx, to32i(esp+0x10));
	test(ebx, ebx);
	if (jg())
		goto loc_44A059;
	ebx = to32i(esp+0x5C); //mov
	sub(ebx, to32i(esp+0x68));
	to32i(esp+0x10) = ebx; //mov
	sub(eax, to32i(esp+0x64));
	imul32(eax, to32i(esp+0x10));
	sub(ecx, to32i(esp+0x64));
	sub(edx, to32i(esp+0x68));
	imul32(edx, ecx);
	sub(eax, edx);
	test(eax, eax);
	if (jg())
		goto loc_44A059;
	imul32(edx, to32i(ebp+0x78), 0x118);
	eax = to32i(dword_51180C); //mov
	edx = to32i(edx+eax+0x474); //mov
	add(edx, (int32_t)8);
	to32i(ebp+0x14) = edx; //mov
	edx = to32i(ebp+0x1C); //mov
	dx = to16i(edx); //mov
	ecx = to32i(esp+0xC); //mov
	and_(edx, (int32_t)0xFFFF);
	ebx = to32i(esp+0x78); //mov
	add(edx, ecx);
	add(edx, ebx);
	ecx = to32i(ebp+0x14); //mov
	add(edx, edx);
	add(ecx, edx);
	to32i(ebp+0x14) = ecx; //mov
	cmp(to8i(ecx+1), (int8_t)0xE);
	if (jz())
		goto loc_44A059;
	edx = to32i(esp+0xC); //mov
	add(edx, to32i(esp+0x78));
loc_44A3DB:
	ecx = to32i(ebp+0x78); //mov
	to32i(ebp+0x70) = edx; //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(edx, ecx);
	shl(edx, (int32_t)2);
	sub(edx, ecx);
	to32i(ebp+0x68) = 2; //mov
	eax = to32i(eax+edx*8+0x470); //mov
	add(eax, (int32_t)8);
	edx = to32i(ebp+0x14); //mov
	to32i(ebp+0x18) = eax; //mov
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	ebx = to32i(esp+0x18); //mov
	sub(eax, edx);
	esi = to32i(ebp+0x18); //mov
	shl(eax, (int32_t)2);
	edx = to32i(esp+0x24); //mov
	add(esi, eax);
	eax = ebp; //mov
	to32i(ebp+0x18) = esi; //mov
	esp -= 4; _sub_44ABA0(); esp += 4; //call
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_44A43C:
	neg(edx);
	goto loc_44A072;
loc_44A443:
	neg(eax);
	goto loc_44A08B;
loc_44A44A:
	edx = esp; //mov
	to32i(esp+0x38) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	ecx = edi; //mov
	add(eax, (int32_t)8);
	ebx = esi; //mov
	to32i(ebp+0x10) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44AA50(); esp += 4; //call
	edx = to32i(esp+0x78); //mov
	inc(edx);
	ecx = to32i(esp+8); //mov
	to32i(esp+0x78) = edx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_449FDD;
	goto loc_44A0A2;
loc_44A47E:
	ecx = to32i(ebp+0x4E); //mov
	sar(ecx, (int32_t)0x10);
	sar(ecx, (int32_t)2);
	ebx = to32i(esp+0x44); //mov
	to32i(esp+0x48) = ecx; //mov
	sub(ecx, ebx);
	ebx = to32i(esp+0x4C); //mov
	to32i(esp+0x10) = ecx; //mov
	ecx = eax; //mov
	sub(ecx, ebx);
	ebx = to32i(esp+0x10); //mov
	imul32(ebx, ecx);
	ecx = to32i(ebp+0x52); //mov
	sar(ecx, (int32_t)0x10);
	sar(ecx, (int32_t)2);
	to32i(esp+0x14) = ebx; //mov
	ebx = ecx; //mov
	sub(ebx, to32i(esp+0x4C));
	to32i(esp+0x10) = ebx; //mov
	ebx = edx; //mov
	sub(ebx, to32i(esp+0x44));
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	sub(ebx, to32i(esp+0x10));
	test(ebx, ebx);
	if (jg())
		goto loc_44A1A1;
	ebx = to32i(ebp+0x60); //mov
	sar(ebx, (int32_t)0x10);
	sar(ebx, (int32_t)2);
	to32i(esp+0x54) = ebx; //mov
	ebx = to32i(esp+0x70); //mov
	sub(ebx, to32i(esp+0x54));
	to32i(esp+0x14) = ebx; //mov
	ebx = to32i(ebp+0x64); //mov
	sar(ebx, (int32_t)0x10);
	sar(ebx, (int32_t)2);
	to32i(esp+0x60) = ebx; //mov
	ebx = eax; //mov
	sub(ebx, to32i(esp+0x60));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	imul32(ebx, to32i(esp+0x10));
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+0x40); //mov
	sub(ebx, to32i(esp+0x60));
	to32i(esp+0x14) = ebx; //mov
	ebx = edx; //mov
	sub(ebx, to32i(esp+0x54));
	imul32(ebx, to32i(esp+0x14));
	to32i(esp+0x14) = ebx; //mov
	ebx = to32i(esp+0x10); //mov
	sub(ebx, to32i(esp+0x14));
	test(ebx, ebx);
	if (jg())
		goto loc_44A1A1;
	ebx = to32i(esp+0x54); //mov
	sub(ebx, to32i(esp+0x48));
	sub(eax, ecx);
	imul32(ebx, eax);
	eax = to32i(esp+0x60); //mov
	sub(eax, ecx);
	sub(edx, to32i(esp+0x48));
	imul32(eax, edx);
	edx = ebx; //mov
	sub(edx, eax);
	test(edx, edx);
	if (jg())
		goto loc_44A1A1;
	imul32(edx, to32i(ebp+0x78), 0x118);
	eax = to32i(dword_51180C); //mov
	edx = to32i(edx+eax+0x474); //mov
	add(edx, (int32_t)8);
	to32i(ebp+0x14) = edx; //mov
	edx = to32i(ebp+0x1C); //mov
	dx = to16i(edx); //mov
	ecx = to32i(esp+0x2C); //mov
	and_(edx, (int32_t)0xFFFF);
	ebx = to32i(esp+0x74); //mov
	add(edx, ecx);
	sub(edx, ebx);
	ecx = to32i(ebp+0x14); //mov
	add(edx, edx);
	add(ecx, edx);
	to32i(ebp+0x14) = ecx; //mov
	cmp(to8i(ecx+1), (int8_t)0xE);
	if (jz())
		goto loc_44A1A1;
	edx = to32i(esp+0x2C); //mov
	sub(edx, to32i(esp+0x74));
	goto loc_44A3DB;
loc_44A5BA:
	edx = eax; //mov
	neg(edx);
	goto loc_44A1BA;
loc_44A5C3:
	neg(eax);
	goto loc_44A1D3;
loc_44A5CA:
	edx = esp; //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	ecx = edi; //mov
	sub(eax, (int32_t)8);
	ebx = esi; //mov
	to32i(ebp+0x10) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44A9D0(); esp += 4; //call
	edx = to32i(esp+0x74); //mov
	inc(edx);
	ecx = to32i(esp+0x30); //mov
	to32i(esp+0x74) = edx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_44A129;
	goto loc_44A1EA;
loc_44A5FE:
	eax = ebx; //mov
	neg(eax);
	goto loc_44A1FE;
loc_44A607:
	ecx = 0xFFFFFFFF; //mov
loc_44A60C:
	dec(eax);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A22F;
	edi = to32i(ebp+0xC); //mov
	add(edi, ecx);
	to32i(ebp+0xC) = edi; //mov
	test(edi, edi);
	if (jge())
		goto loc_44A60C;
	edx = to32i(dword_5118A0); //mov
	dec(edx);
	to32i(ebp+0xC) = edx; //mov
	goto loc_44A60C;
loc_44A62E:
	eax = esi; //mov
	goto loc_44A263;
loc_44A635:
	ecx = 0xFFFFFFFF; //mov
loc_44A63A:
	dec(eax);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A658;
	edx = to32i(ebp+0xC); //mov
	add(edx, ecx);
	to32i(ebp+0xC) = edx; //mov
	test(edx, edx);
	if (jge())
		goto loc_44A63A;
	edx = to32i(dword_5118A0); //mov
	dec(edx);
	to32i(ebp+0xC) = edx; //mov
	goto loc_44A63A;
loc_44A658:
	eax = ebp; //mov
	esp -= 4; _sub_44ADA0(); esp += 4; //call
	to32i(ebp+0x10) = 0; //mov
	to32i(ebp+0x14) = 0; //mov
	to32i(ebp+0x68) = 1; //mov
	to32i(ebp+0x70) = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_44A690()
{
	to32i(edx+0x1C) = 0; //mov
	to32i(edx+0x10) = 0; //mov
	to32i(edx+0x14) = 0; //mov
	to32i(edx+0x18) = 0; //mov
	to16i(edx+0x6C) = 0; //mov
	to16i(edx+0x6E) = 0; //mov
	to32i(edx+0x68) = 1; //mov
	to32i(edx+0x70) = 0xFFFFFFFF; //mov
	to32i(edx+0xC) = eax; //mov
}
Fn(void) Game::_sub_44A6D0()
{
	push32(ecx);
	ecx = edx; //mov
	to32i(edx+0x7C) = ebx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_44A700;
	esp -= 4; _sub_44A720(); esp += 4; //call
	edx = to32i(dword_51180C); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x74); //mov
	or_(to8i(edx+eax+0x320), (int8_t)0x42);
	add(edx, to32i(ecx+0x74));
	or_(to8i(edx+0x320), (int8_t)1);
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_44A700:
	to32i(edx+0x68) = 1; //mov
	to32i(edx+0x70) = 0xFFFFFFFF; //mov
	to32i(edx+0x1C) = ebx; //mov
	to32i(edx+0x10) = ebx; //mov
	to32i(edx+0x14) = ebx; //mov
	esp -= 4; _sub_44AF60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_44A720()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x94);
	to32i(esp+0x90) = eax; //mov
	ebp = edx; //mov
	eax = to32i(edx+0xC); //mov
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(esp+0x90); //mov
	esp -= 4; _sub_44AF60(); esp += 4; //call
	eax = ebp; //mov
	ebx = 1; //mov
	esp -= 4; _sub_44A960(); esp += 4; //call
	edx = ebp; //mov
	eax = to32i(esp+0x90); //mov
	esp -= 4; _sub_449E60(); esp += 4; //call
	cmp(to32i(ebp+0x10), (int32_t)0);
	if (jnz())
		goto loc_44A865;
	eax = to32i(ebp+0x1C); //mov
	edx = to32i(eax+2); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A857;
loc_44A780:
	ecx = 0x20; //mov
	edi = esp; //mov
	esi = ebp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(ebp+0x1C); //mov
	eax = to32i(eax+2); //mov
	ebx = 0xFFFFFFFF; //mov
	sar(eax, (int32_t)0x10);
	ecx = ebx; //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_44A7BE;
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(esp+0x90); //mov
	esp -= 4; _sub_4495E0(); esp += 4; //call
	ecx = eax; //mov
loc_44A7BE:
	eax = to32i(ebp+0x1C); //mov
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A7EB;
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(esp+0x90); //mov
	esp -= 4; _sub_4495E0(); esp += 4; //call
	ebx = eax; //mov
loc_44A7EB:
	cmp(ecx, ebx);
	if (jnb())
		goto loc_44A8D6;
	eax = to32i(ebp+0x1C); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	edx = ebp; //mov
	to32i(ebp+0xC) = eax; //mov
	eax = to32i(esp+0x90); //mov
	ebx = 1; //mov
	esp -= 4; _sub_44AF60(); esp += 4; //call
	eax = to32i(esp+0x90); //mov
	edx = ebp; //mov
	esp -= 4; _sub_449E60(); esp += 4; //call
	cmp(to32i(ebp+0x70), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44A90D;
loc_44A82A:
	eax = to32i(esp+0x8C); //mov
	ebx = to32i(ebp+0xC); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_44A924;
	eax = 1; //mov
loc_44A841:
	to16i(ebp+0x6C) = ax; //mov
	eax = to32i(ebp+0x6A); //mov
	sar(eax, (int32_t)0x10);
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44A857:
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_44A780;
loc_44A865:
	cmp(to32i(ebp+0x10), (int32_t)0);
	if (jnz())
		goto loc_44A82A;
	edx = to32i(ebp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	ecx = to32i(esp+0x90); //mov
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edi = to32i(ecx); //mov
	eax = to32i(edx+eax*4); //mov
	sub(eax, edi);
	sar(eax, (int32_t)3);
	ecx = (int32_t)(intptr_t)(edi+eax); //lea
	to32i(esp+0x80) = ecx; //mov
	ecx = to32i(ebp+0xC); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	eax = to32i(edx+eax*4+8); //mov
	edx = to32i(esp+0x90); //mov
	ecx = to32i(edx+8); //mov
	sub(eax, ecx);
	sar(eax, (int32_t)3);
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	to32i(esp+0x88) = edx; //mov
	edx = ebp; //mov
	esp -= 4; _sub_449E60(); esp += 4; //call
	goto loc_44A82A;
loc_44A8D6:
	eax = to32i(ebp+0x1C); //mov
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)0x10);
	edx = ebp; //mov
	to32i(ebp+0xC) = eax; //mov
	eax = to32i(esp+0x90); //mov
	ebx = 1; //mov
	esp -= 4; _sub_44AF60(); esp += 4; //call
	eax = to32i(esp+0x90); //mov
	edx = ebp; //mov
	esp -= 4; _sub_449E60(); esp += 4; //call
	cmp(to32i(ebp+0x70), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44A82A;
loc_44A90D:
	ecx = 0x20; //mov
	esi = esp; //mov
	edi = ebp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(ebp+0x1C) = 0; //mov
	goto loc_44A865;
loc_44A924:
	xor_(eax, ebx);
	goto loc_44A841;
}
Fn(void) Game::_sub_44A930()
{
	push32(ecx);
	ecx = eax; //mov
	edx = to32i(eax+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ax = to16i(edx+eax*4+0x16); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(ecx+0x74) = eax; //mov
	eax = 1; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_44A960()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_51180C); //mov
	ecx = to32i(edx+0x74); //mov
	add(eax, ecx);
	test(to8i(eax+0x320), (int8_t)4);
	if (jz())
		goto loc_44A9C0;
loc_44A978:
	ecx = to32i(edx+0xC); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = to32i(dword_5118A4); //mov
	ax = to16i(ecx+eax*4+0x16); //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = eax; //mov
	to32i(edx+0x74) = eax; //mov
	eax = to32i(dword_51180C); //mov
	ecx = to32i(eax+ecx*2+0xC6); //mov
	ebx = to32i(edx+0x74); //mov
	sar(ecx, (int32_t)0x10);
	add(eax, ebx);
	to32i(edx+0x78) = ecx; //mov
	or_(to8i(eax+0x320), (int8_t)0x42);
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44A9C0:
	eax = ecx; //mov
	esp -= 4; _sub_449070(); esp += 4; //call
	goto loc_44A978;
}
Fn(void) Game::_sub_44A9D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	to32i(esp) = ecx; //mov
	add(eax, (int32_t)0x50);
	esi = (int32_t)(intptr_t)(eax+6); //lea
	edi = eax; //mov
	ecx = to32i(eax-0x40); //mov
	movsd();
	movsw();
	edi = (int32_t)(intptr_t)(eax+0x12); //lea
	esi = (int32_t)(intptr_t)(eax+0xC); //lea
	movsd();
	movsw();
	edi = (uint8_t)to8i(ecx+5); //movzx
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(edx, edi);
	add(edx, edx);
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	cmp(edi, to32i(esp));
	if (jge())
		goto loc_44AA48;
	di = to16i(ebp+0); //mov
	dx = to16i(esi); //mov
	add(edx, edi);
	to16i(eax+6) = dx; //mov
	dx = to16i(esi+4); //mov
	si = to16i(ebp+4); //mov
	add(edx, esi);
	to16i(eax+0xA) = dx; //mov
loc_44AA24:
	cl = to8i(ecx+6); //mov
	and_(ecx, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(eax+0xC); //lea
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	movsd();
	movsw();
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_44AA48:
	edi = (int32_t)(intptr_t)(eax+6); //lea
	movsd();
	movsw();
	goto loc_44AA24;
}
Fn(void) Game::_sub_44AA50()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	to32i(esp) = ecx; //mov
	add(eax, (int32_t)0x50);
	edi = (int32_t)(intptr_t)(eax+6); //lea
	esi = eax; //mov
	ecx = to32i(eax-0x40); //mov
	movsd();
	movsw();
	edi = (int32_t)(intptr_t)(eax+0xC); //lea
	esi = (int32_t)(intptr_t)(eax+0x12); //lea
	movsd();
	movsw();
	edi = (uint8_t)to8i(ecx+4); //movzx
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(edx, edi);
	add(edx, edx);
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	cmp(edi, to32i(esp));
	if (jge())
		goto loc_44AAC7;
	di = to16i(ebp+0); //mov
	dx = to16i(esi); //mov
	add(edx, edi);
	to16i(eax) = dx; //mov
	dx = to16i(esi+4); //mov
	si = to16i(ebp+4); //mov
	add(edx, esi);
	to16i(eax+4) = dx; //mov
loc_44AAA3:
	cl = to8i(ecx+7); //mov
	and_(ecx, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(eax+0x12); //lea
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	movsd();
	movsw();
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_44AAC7:
	edi = eax; //mov
	movsd();
	movsw();
	goto loc_44AAA3;
}
Fn(void) Game::_sub_44AAD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = edx; //mov
	to32i(esp) = ecx; //mov
	ecx = to32i(eax+0x10); //mov
	ebp = (uint8_t)to8i(ecx+4); //movzx
	edx = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(edx, ebp);
	edi = to32i(esp); //mov
	add(edx, edx);
	add(eax, (int32_t)0x50);
	add(edx, ebx);
	cmp(ebp, edi);
	if (jge())
		goto loc_44AB7F;
	di = to16i(edx); //mov
	to32i(esp+4) = edi; //mov
	di = to16i(esi); //mov
	add(to32i(esp+4), edi);
	edi = to32i(esp+4); //mov
	to16i(eax) = di; //mov
	dx = to16i(edx+4); //mov
	di = to16i(esi+4); //mov
	add(edx, edi);
	to16i(eax+4) = dx; //mov
	edi = (uint8_t)to8i(ecx+5); //movzx
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(edx, edi);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(ebx+edx); //lea
	dx = to16i(edi); //mov
	add(dx, to16i(esi));
	to16i(eax+6) = dx; //mov
	dx = to16i(edi+4); //mov
	di = to16i(esi+4); //mov
	add(edx, edi);
	to16i(eax+0xA) = dx; //mov
loc_44AB4A:
	xor_(edx, edx);
	dl = to8i(ecx+6); //mov
	esi = edx; //mov
	shl(edx, (int32_t)2);
	sub(edx, esi);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(eax+0xC); //lea
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	xor_(edx, edx);
	movsd();
	movsw();
	dl = to8i(ecx+7); //mov
	ecx = edx; //mov
	shl(edx, (int32_t)2);
	sub(edx, ecx);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(eax+0x12); //lea
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	movsd();
	movsw();
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_44AB7F:
	edi = eax; //mov
	esi = edx; //mov
	movsd();
	movsw();
	esi = (uint8_t)to8i(ecx+5); //movzx
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(edx, esi);
	add(edx, edx);
	edi = (int32_t)(intptr_t)(eax+6); //lea
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	movsd();
	movsw();
	goto loc_44AB4A;
}
Fn(void) Game::_sub_44ABA0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x10); //mov
	edx = to32i(ecx+0x78); //mov
	to32i(esp+0xC) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_51180C); //mov
	eax = to32i(edx+eax*8+0x454); //mov
	esp -= 4; _sub_475130(); esp += 4; //call
	edx = to32i(ecx+0x78); //mov
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_51180C); //mov
	edi = to32i(edx+eax*8+0x454); //mov
	di = to16i(edi+4); //mov
	ebp = to32i(esp+0xC); //mov
	xor_(edx, edx);
	and_(edi, (int32_t)0xFFFF);
	dl = to8i(ebp+4); //mov
	eax = esi; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_44AC12;
	eax = ebx; //mov
loc_44AC12:
	to32i(esp+4) = edx; //mov
	ebp = to32i(esp+4); //mov
	shl(edx, (int32_t)2);
	sub(edx, ebp);
	ebp = to32i(esp+8); //mov
	add(edx, edx);
	add(ebp, edx);
	edx = to16i(ebp+0); //movsx
	shl(edx, (int32_t)8);
	to32i(esp) = edx; //mov
	to32i(esp+4) = ebp; //mov
	ebp = to32i(esp); //mov
	edx = to32i(eax); //mov
	add(edx, ebp);
	to32i(ecx+0x20) = edx; //mov
	edx = to32i(esp+4); //mov
	edx = to32i(edx); //mov
	sar(edx, (int32_t)0x10);
	shl(edx, (int32_t)8);
	to32i(esp) = edx; //mov
	ebp = to32i(esp); //mov
	edx = to32i(eax+4); //mov
	add(edx, ebp);
	to32i(ecx+0x24) = edx; //mov
	edx = to32i(esp+4); //mov
	edx = to32i(edx+2); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(edx, (int32_t)8);
	ebp = to32i(esp+0xC); //mov
	add(eax, edx);
	xor_(edx, edx);
	to32i(ecx+0x28) = eax; //mov
	dl = to8i(ebp+5); //mov
	eax = esi; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_44AC7F;
	eax = ebx; //mov
loc_44AC7F:
	to32i(esp+4) = edx; //mov
	ebp = to32i(esp+4); //mov
	shl(edx, (int32_t)2);
	sub(edx, ebp);
	ebp = to32i(esp+8); //mov
	add(edx, edx);
	add(ebp, edx);
	edx = to16i(ebp+0); //movsx
	shl(edx, (int32_t)8);
	to32i(esp) = edx; //mov
	to32i(esp+4) = ebp; //mov
	ebp = to32i(esp); //mov
	edx = to32i(eax); //mov
	add(edx, ebp);
	to32i(ecx+0x2C) = edx; //mov
	edx = to32i(esp+4); //mov
	edx = to32i(edx); //mov
	sar(edx, (int32_t)0x10);
	shl(edx, (int32_t)8);
	to32i(esp) = edx; //mov
	ebp = to32i(esp); //mov
	edx = to32i(eax+4); //mov
	add(edx, ebp);
	to32i(ecx+0x30) = edx; //mov
	edx = to32i(esp+4); //mov
	edx = to32i(edx+2); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(edx, (int32_t)8);
	ebp = to32i(esp+0xC); //mov
	add(eax, edx);
	xor_(edx, edx);
	to32i(ecx+0x34) = eax; //mov
	dl = to8i(ebp+6); //mov
	eax = esi; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_44ACEC;
	eax = ebx; //mov
loc_44ACEC:
	to32i(esp+4) = edx; //mov
	ebp = to32i(esp+4); //mov
	shl(edx, (int32_t)2);
	sub(edx, ebp);
	ebp = to32i(esp+8); //mov
	add(edx, edx);
	add(ebp, edx);
	edx = to16i(ebp+0); //movsx
	shl(edx, (int32_t)8);
	to32i(esp+4) = edx; //mov
	to32i(esp) = ebp; //mov
	ebp = to32i(esp+4); //mov
	edx = to32i(eax); //mov
	add(edx, ebp);
	to32i(ecx+0x38) = edx; //mov
	edx = to32i(esp); //mov
	edx = to32i(edx); //mov
	sar(edx, (int32_t)0x10);
	shl(edx, (int32_t)8);
	to32i(esp+4) = edx; //mov
	ebp = to32i(esp+4); //mov
	edx = to32i(eax+4); //mov
	add(edx, ebp);
	to32i(ecx+0x3C) = edx; //mov
	edx = to32i(esp); //mov
	edx = to32i(edx+2); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(edx, (int32_t)8);
	add(eax, edx);
	to32i(ecx+0x40) = eax; //mov
	eax = esi; //mov
	esi = to32i(esp+0xC); //mov
	xor_(edx, edx);
	dl = to8i(esi+7); //mov
	cmp(edx, edi);
	if (jge())
		goto loc_44AD5A;
	eax = ebx; //mov
loc_44AD5A:
	ebx = edx; //mov
	shl(edx, (int32_t)2);
	sub(edx, ebx);
	ebx = to32i(esp+8); //mov
	add(edx, edx);
	add(ebx, edx);
	esi = to16i(ebx); //movsx
	edx = to32i(eax); //mov
	shl(esi, (int32_t)8);
	add(edx, esi);
	to32i(ecx+0x44) = edx; //mov
	esi = to32i(ebx); //mov
	sar(esi, (int32_t)0x10);
	edx = to32i(eax+4); //mov
	shl(esi, (int32_t)8);
	add(edx, esi);
	to32i(ecx+0x48) = edx; //mov
	edx = to32i(ebx+2); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(edx, (int32_t)8);
	add(eax, edx);
	to32i(ecx+0x4C) = eax; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_44ADA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = eax; //mov
	ecx = to32i(eax+0xC); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ecx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(ecx, (int32_t)2);
	ax = to16i(ecx+eax+0x16); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(edx+0x74) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_44A960(); esp += 4; //call
	ecx = to32i(edx+0x78); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	ecx = to32i(dword_51180C); //mov
	shl(eax, (int32_t)3);
	add(ecx, eax);
	eax = to32i(ecx+0x46C); //mov
	ebx = (int32_t)(intptr_t)(eax+8); //lea
	esi = to32i(ecx+0x564); //mov
	eax = to32i(edx+0xC); //mov
	sub(eax, esi);
	shl(eax, (int32_t)3);
	add(ebx, eax);
	to32i(edx+0x1C) = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44AE10()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebx = eax; //mov
	to32i(esp+0xC) = edx; //mov
	eax = to32i(dword_5118A0); //mov
	edi = to32i(dword_5118A4); //mov
	dec(eax);
	ecx = to32i(edx+0xC); //mov
	to32i(esp+0x14) = eax; //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44AEA1;
	esi = (int32_t)(intptr_t)(eax+1); //lea
	dec(eax);
	to32i(esp+0x10) = eax; //mov
loc_44AE3E:
	ebp = to32i(esp+0x14); //mov
	to32i(esp+0x18) = ecx; //mov
	cmp(ecx, ebp);
	if (jl())
		goto loc_44AEB1;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	imul32(edx, 0x24);
loc_44AE56:
	eax = to32i(edx+edi); //mov
	to32i(esp) = eax; //mov
	eax = to32i(edx+edi+8); //mov
	to32i(esp+8) = eax; //mov
	eax = esp; //mov
	edx = ebx; //mov
	esp -= 4; _sub_44B0B0(); esp += 4; //call
	ebp = eax; //mov
	to32i(esp+0x1C) = eax; //mov
	edx = (int32_t)(intptr_t)(ecx+1); //lea
	cmp(ecx, to32i(esp+0x10));
	if (jge())
		goto loc_44AEB6;
	imul32(edx, 0x24);
	eax = to32i(edx+edi); //mov
	to32i(esp) = eax; //mov
	eax = to32i(edx+edi+8); //mov
	to32i(esp+8) = eax; //mov
	edx = ebx; //mov
	eax = esp; //mov
	esp -= 4; _sub_44B0B0(); esp += 4; //call
	cmp(eax, ebp);
	if (jge())
		goto loc_44AEE9;
	inc(ecx);
loc_44AE9B:
	cmp(ecx, to32i(esp+0x18));
	if (jnz())
		goto loc_44AE3E;
loc_44AEA1:
	eax = to32i(esp+0xC); //mov
	to32i(eax+0xC) = ecx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44AEB1:
	imul32(edx, ecx, 0x24);
	goto loc_44AE56;
loc_44AEB6:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	imul32(edx, 0x24);
	eax = to32i(edx+edi); //mov
	to32i(esp) = eax; //mov
	eax = to32i(edx+edi+8); //mov
	to32i(esp+8) = eax; //mov
	edx = ebx; //mov
	eax = esp; //mov
	esp -= 4; _sub_44B0B0(); esp += 4; //call
	cmp(eax, ebp);
	if (jge())
		goto loc_44AEE9;
	inc(ecx);
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	ecx = edx; //mov
	goto loc_44AE9B;
loc_44AEE9:
	test(ecx, ecx);
	if (jg())
		goto loc_44AF2C;
	add(ecx, esi);
	edx = (int32_t)(intptr_t)(ecx-1); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	imul32(edx, 0x24);
	eax = to32i(edx+edi); //mov
	to32i(esp) = eax; //mov
	eax = to32i(edx+edi+8); //mov
	to32i(esp+8) = eax; //mov
	edx = ebx; //mov
	eax = esp; //mov
	esp -= 4; _sub_44B0B0(); esp += 4; //call
	cmp(eax, to32i(esp+0x1C));
	if (jge())
		goto loc_44AF1A;
	dec(ecx);
loc_44AF1A:
	add(ecx, esi);
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	ecx = edx; //mov
	goto loc_44AE9B;
loc_44AF2C:
	eax = (int32_t)(intptr_t)(ecx-1); //lea
	imul32(eax, 0x24);
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = to32i(edx); //mov
	to32i(esp) = eax; //mov
	eax = to32i(edx+8); //mov
	to32i(esp+8) = eax; //mov
	edx = ebx; //mov
	eax = esp; //mov
	ebp = to32i(esp+0x1C); //mov
	esp -= 4; _sub_44B0B0(); esp += 4; //call
	cmp(eax, ebp);
	if (jge())
		goto loc_44AE9B;
	dec(ecx);
	goto loc_44AE9B;
}
Fn(void) Game::_sub_44AF60()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	ecx = edx; //mov
	esi = to32i(edx+0xC); //mov
	esp -= 4; _sub_44AE10(); esp += 4; //call
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = ebx; //mov
	esp -= 4; _sub_4495E0(); esp += 4; //call
	cmp(eax, (int32_t)0x10000);
	if (jg())
		goto loc_44AFCB;
loc_44AF94:
	eax = to32i(ecx+0xC); //mov
	ebx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ebx, eax);
	eax = to32i(dword_5118A4); //mov
	ax = to16i(eax+ebx*4+0x16); //mov
	and_(eax, (int32_t)0xFFFF);
	edx = to32i(ecx+0xC); //mov
	to32i(ecx+0x74) = eax; //mov
	cmp(esi, edx);
	if (jz())
		goto loc_44AFFD;
	eax = 1; //mov
	to16i(ecx+0x6C) = ax; //mov
	to16i(ecx+0x6E) = ax; //mov
	eax = ax; //cwde
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44AFCB:
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = ebx; //mov
	esp -= 4; _sub_4495E0(); esp += 4; //call
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_44B010(); esp += 4; //call
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_44AE10(); esp += 4; //call
	goto loc_44AF94;
loc_44AFFD:
	xor_(eax, eax);
	to16i(ecx+0x6C) = ax; //mov
	to16i(ecx+0x6E) = ax; //mov
	eax = ax; //cwde
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44B010()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	ebp = 0xFFFFFFFF; //mov
	edi = 0x7FFFFFFF; //mov
	eax = to32i(dword_5118A0); //mov
	xor_(ecx, ecx);
	to32i(esp+4) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_44B05F;
	xor_(ebx, ebx);
loc_44B038:
	eax = to32i(dword_5118A4); //mov
	edx = esi; //mov
	add(eax, ebx);
	esp -= 4; _sub_4495E0(); esp += 4; //call
	cmp(eax, edi);
	if (jge())
		goto loc_44B04E;
	edi = eax; //mov
	ebp = ecx; //mov
loc_44B04E:
	eax = to32i(esp+4); //mov
	add(ecx, (int32_t)8);
	add(ebx, (int32_t)0x120);
	cmp(ecx, eax);
	if (jl())
		goto loc_44B038;
loc_44B05F:
	eax = to32i(esp); //mov
	to32i(eax+0xC) = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44B080()
{
	push32(edx);
	to32i(dword_511898) = eax; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	to32i(dword_51189C) = edx; //mov
	to32i(dword_5118A4) = edx; //mov
	ax = to16i(eax+6); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_5118A0) = eax; //mov
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_44B0B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	ebx = to32i(ecx+8); //mov
	eax = to32i(edx+8); //mov
	sub(eax, ebx);
	ebx = eax; //mov
	sar(ebx, (int32_t)9);
	imul32(ebx, ebx);
	esi = to32i(ecx); //mov
	eax = to32i(edx); //mov
	sub(eax, esi);
	sar(eax, (int32_t)9);
	imul32(eax, eax);
	add(eax, ebx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44B240()
{
	to32i(edx+4) = 0; //mov
	to32i(edx+8) = 0; //mov
	to32i(edx+0xC) = 0; //mov
	to32i(edx+0x10) = 0x10000; //mov
	to32i(edx+0x14) = 0; //mov
	to32i(edx+0x18) = 0; //mov
	to32i(edx+0x1C) = 0; //mov
	to32i(edx+0x20) = 0x10000; //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_44B280()
{
	push32(ecx);
	ecx = edx; //mov
	and_(eax, (int32_t)1);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	to32i(dword_4D5CC4+eax) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_44B2A0()
{
	push32(edx);
	and_(eax, (int32_t)1);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C78+eax); //mov
	pop32(edx);
}
Fn(void) Game::_sub_44B2C0()
{
	push32(edx);
	and_(eax, (int32_t)1);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	pop32(edx);
}
Fn(void) Game::_sub_44B2E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	and_(edx, (int32_t)1);
	ebx = to32i(dword_4D5C74+eax); //mov
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0xB);
	if (jz())
		goto loc_44B504;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_44B3EA;
	cmp(byte_4D5C7C[eax], (int8_t)0xC);
	if (jnz())
		goto loc_44B3EA;
	test(edx, edx);
	if (jnz())
		goto loc_44B509;
	eax = 1; //mov
loc_44B335:
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	eax = edx; //mov
	shl(eax, (int32_t)4);
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	shl(esi, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C74+esi); //mov
	to32i(dword_4D5C74+ecx) = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_44B510;
	ecx = 1; //mov
loc_44B363:
	esi = ecx; //mov
	eax = edx; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)4);
	add(esi, ecx);
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	shl(esi, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C78+esi); //mov
	to32i(dword_4D5C78+ecx) = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_44B517;
	ecx = 1; //mov
loc_44B391:
	push32(edi);
	eax = edx; //mov
	esi = ecx; //mov
	shl(eax, (int32_t)4);
	shl(esi, (int32_t)4);
	add(eax, edx);
	add(esi, ecx);
	shl(eax, (int32_t)4);
	shl(esi, (int32_t)4);
	edi = (int32_t)(intptr_t)(dword_4D5C84+eax); //lea
	esi = (int32_t)(intptr_t)(dword_4D5C84+esi); //lea
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jnz())
		goto loc_44B51E;
	ecx = 1; //mov
loc_44B3C2:
	esi = ecx; //mov
	eax = edx; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)4);
	add(esi, ecx);
	add(eax, edx);
	ecx = 9; //mov
	shl(eax, (int32_t)4);
	shl(esi, (int32_t)4);
	edi = (int32_t)(intptr_t)(dword_4D5C9C+eax); //lea
	esi = (int32_t)(intptr_t)(dword_4D5C9C+esi); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
loc_44B3EA:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_44B525;
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0xC);
	if (jnz())
		goto loc_44B525;
	byte_4D5C7C[eax] = 1; //mov
loc_44B415:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)9);
	if (jl())
		goto loc_44B42F;
	byte_4D5C7C[eax] = 1; //mov
loc_44B42F:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_44B452;
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B452;
	eax = edx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B452:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B475;
	esp -= 4; _sub_42A360(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44B475;
	eax = edx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B475:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B48F;
	eax = edx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B48F:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B4B4;
	eax = to32i(ebx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xC);
	if (jl())
		goto loc_44B4B4;
	eax = edx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B4B4:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)6);
	if (jnz())
		goto loc_44B4CE;
	eax = edx; //mov
	esp -= 4; _sub_44D460(); esp += 4; //call
loc_44B4CE:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	ebx = 0x32; //mov
	shl(eax, (int32_t)4);
	esi = to32i(dword_512208); //mov
	to32i(dword_4D5D70+eax) = ebx; //mov
	cmp(esi, (int32_t)1);
	if (jz())
		goto loc_44B504;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_44B504;
	cmp(byte_4D5C7C[eax], (int8_t)3);
	if (jle())
		goto loc_44B58F;
loc_44B504:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44B509:
	xor_(eax, eax);
	goto loc_44B335;
loc_44B510:
	xor_(ecx, ecx);
	goto loc_44B363;
loc_44B517:
	xor_(ecx, ecx);
	goto loc_44B391;
loc_44B51E:
	xor_(ecx, ecx);
	goto loc_44B3C2;
loc_44B525:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_44B56B;
	eax = to32i(dword_511D08+edx*4); //mov
	test(to8i(eax+0x1F4), (int8_t)1);
	if (jz())
		goto loc_44B56B;
	cmp(to32i(eax+0x280), (int32_t)2);
	if (jnz())
		goto loc_44B56B;
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	ecx = to32i(dword_4D5C78+1+eax); //mov
	sar(ecx, (int32_t)0x18);
	cl = (int32_t)(intptr_t)byte_5118CC[ecx]; //mov
	byte_4D5C7C[eax] = cl; //mov
	goto loc_44B415;
loc_44B56B:
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	ecx = to32i(dword_4D5C78+1+eax); //mov
	sar(ecx, (int32_t)0x18);
	cl = (int32_t)(intptr_t)byte_5118D9[ecx]; //mov
	byte_4D5C7C[eax] = cl; //mov
	goto loc_44B415;
loc_44B58F:
	eax = to32i(dword_4D5C78+1+eax); //mov
	sar(eax, (int32_t)0x18);
	to32i(dword_511FF0) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44B5B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	ebx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	xor_(ebx, ecx);
	shl(eax, (int32_t)4);
	and_(ecx, (int32_t)1);
	esi = to32i(dword_4D5C74+eax); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	edi = to32i(dword_512208); //mov
	shl(eax, (int32_t)4);
	to32i(dword_4D965C) = ebx; //mov
	byte_4D5C7C[eax] = dl; //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_44B5F7;
	test(dl, dl);
	if (jnz())
		goto loc_44B5F7;
	eax = ecx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B5F7:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B61A;
	esp -= 4; _sub_42A360(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44B61A;
	eax = ecx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_44B61A:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)0);
	if (jnz())
		goto loc_44B638;
	eax = to32i(esi+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xC);
	if (jge())
		goto loc_44B651;
loc_44B638:
	eax = ecx; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	to32i(dword_4D5D70+ecx) = 0x32; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44B651:
	eax = ecx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
	goto loc_44B638;
}
Fn(void) Game::_sub_44B660()
{
	push32(ebx);
	push32(edx);
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	and_(eax, (int32_t)1);
	ebx = to32i(dword_4D5C74+edx); //mov
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	cmp(byte_4D5C7C[edx], (int8_t)0);
	if (jnz())
		goto loc_44B692;
	cmp(to32i(dword_5128C8+eax*4), (int32_t)0);
	if (jnz())
		goto loc_44B69B;
loc_44B692:
	cmp(to32i(ebx+0x17C), (int32_t)0);
	if (jle())
		goto loc_44B6A3;
loc_44B69B:
	eax = 9; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_44B6A3:
	cmp(to32i(ebx+0x2E8), (int32_t)0);
	if (jnz())
		goto loc_44B69B;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_44B69B;
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C78+1+eax); //mov
	sar(eax, (int32_t)0x18);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_44B6E0()
{
	static const void *const off_44B6D0[] = {
		&&loc_44B701,
		&&loc_44B701,
		&&loc_44B701,
		&&loc_44B701,
	};
	and_(eax, (int32_t)1);
	cmp(to32i(dword_5128C8+eax*4), (int32_t)0);
	if (jz())
		goto loc_44B6F0;
loc_44B6ED:
	xor_(eax, eax);
	return;
loc_44B6F0:
	esp -= 4; _sub_44B660(); esp += 4; //call
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_44B6ED;
	goto *off_44B6D0[eax];
loc_44B701:
	eax = 1; //mov
}
Fn(void) Game::_sub_44B710()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	ebp = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	and_(ecx, (int32_t)1);
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D68+eax), (int32_t)0);
	if (jnz())
		goto loc_44B80C;
	edi = ebp; //mov
	esi = (int32_t)(intptr_t)(dword_4D5C84+eax); //lea
	movsd();
	movsd();
	movsd();
loc_44B744:
	esi = ecx; //mov
	shl(esi, (int32_t)4);
	add(esi, ecx);
	edx = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(esi, (int32_t)4);
	ebx = 1; //mov
	add(edx, esi);
	eax = ebp; //mov
	add(edx, (int32_t)0x54);
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	cmp(to32i(dword_4D5D68+esi), (int32_t)0);
	if (jz())
		goto loc_44B785;
	ah = (int32_t)(intptr_t)byte_4D5C7C[esi]; //mov
	test(ah, ah);
	if (jz())
		goto loc_44B785;
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_44B785;
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44BD40(); esp += 4; //call
loc_44B785:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D78+eax), (int32_t)0);
	if (jz())
		goto loc_44B7A1;
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44B9B0(); esp += 4; //call
loc_44B7A1:
	cmp(to32i(esp+0xC), (int32_t)1);
	if (jz())
		goto loc_44B81A;
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	edi = (int32_t)(intptr_t)(ebp+0xC); //lea
	shl(eax, (int32_t)4);
	ecx = 9; //mov
	esi = (int32_t)(intptr_t)(dword_4D5C9C+eax); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_44B7C2:
	ecx = (int32_t)(intptr_t)(ebp+0x3C); //lea
	eax = (int32_t)(intptr_t)(ebp+0xC); //lea
	edx = ecx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	eax = to32i(ebp+0); //mov
	to32i(esp) = eax; //mov
	neg(eax);
	to32i(esp) = eax; //mov
	eax = to32i(ebp+4); //mov
	edx = eax; //mov
	to32i(esp+4) = eax; //mov
	neg(edx);
	to32i(esp+4) = edx; //mov
	eax = to32i(ebp+8); //mov
	edx = ecx; //mov
	ebx = eax; //mov
	to32i(esp+8) = eax; //mov
	neg(ebx);
	eax = esp; //mov
	to32i(esp+8) = ebx; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x30); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_44B80C:
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44BF30(); esp += 4; //call
	goto loc_44B744;
loc_44B81A:
	edx = (int32_t)(intptr_t)(ebp+0xC); //lea
	eax = ecx; //mov
	esp -= 4; _sub_44EE20(); esp += 4; //call
	goto loc_44B7C2;
}
Fn(void) Game::_sub_44B830()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	ecx = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x54) = ebx; //mov
	and_(ecx, (int32_t)1);
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D74+eax), (int32_t)0);
	if (jnz())
		goto loc_44B946;
loc_44B859:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D68+eax), (int32_t)0);
	if (jz())
		goto loc_44B952;
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44BF30(); esp += 4; //call
loc_44B879:
	esi = ecx; //mov
	shl(esi, (int32_t)4);
	add(esi, ecx);
	edx = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(esi, (int32_t)4);
	ebx = 1; //mov
	add(edx, esi);
	eax = ebp; //mov
	add(edx, (int32_t)0x54);
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	cmp(to32i(dword_4D5D68+esi), (int32_t)0);
	if (jz())
		goto loc_44B8BA;
	ah = (int32_t)(intptr_t)byte_4D5C7C[esi]; //mov
	test(ah, ah);
	if (jz())
		goto loc_44B8BA;
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_44B8BA;
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44BD40(); esp += 4; //call
loc_44B8BA:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D78+eax), (int32_t)0);
	if (jz())
		goto loc_44B8D6;
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44B9B0(); esp += 4; //call
loc_44B8D6:
	cmp(to32i(esp+0x54), (int32_t)1);
	if (jnz())
		goto loc_44B962;
	edx = (int32_t)(intptr_t)(ebp+0xC); //lea
	eax = ecx; //mov
	esp -= 4; _sub_44EE20(); esp += 4; //call
loc_44B8EB:
	cmp(to32i(dword_51222C), (int32_t)0);
	if (jnz())
		goto loc_44B981;
loc_44B8F8:
	ecx = (int32_t)(intptr_t)(ebp+0x3C); //lea
	eax = (int32_t)(intptr_t)(ebp+0xC); //lea
	edx = ecx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	eax = to32i(ebp+0); //mov
	edi = eax; //mov
	to32i(esp+0x48) = eax; //mov
	neg(edi);
	to32i(esp+0x48) = edi; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+0x4C) = eax; //mov
	neg(eax);
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(ebp+8); //mov
	ebx = (int32_t)(intptr_t)(ebp+0x30); //lea
	edx = eax; //mov
	to32i(esp+0x50) = eax; //mov
	neg(edx);
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	to32i(esp+0x50) = edx; //mov
	edx = ecx; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_44B946:
	eax = ecx; //mov
	esp -= 4; _sub_44C780(); esp += 4; //call
	goto loc_44B859;
loc_44B952:
	edi = ebp; //mov
	esi = (int32_t)(intptr_t)(dword_4D5C84+eax); //lea
	movsd();
	movsd();
	movsd();
	goto loc_44B879;
loc_44B962:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	edi = (int32_t)(intptr_t)(ebp+0xC); //lea
	shl(eax, (int32_t)4);
	ecx = 9; //mov
	esi = (int32_t)(intptr_t)(dword_4D5C9C+eax); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	goto loc_44B8EB;
loc_44B981:
	edx = esp; //mov
	eax = 0xFFFF0000; //mov
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	ecx = 9; //mov
	esp -= 4; _sub_44B240(); esp += 4; //call
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(ebp+0xC); //lea
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_49E840(); esp += 4; //call
	edi = (int32_t)(intptr_t)(ebp+0xC); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	goto loc_44B8F8;
}
Fn(void) Game::_sub_44B9B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	to32i(esp+0x14) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_44B230; //mov
	movsd();
	movsd();
	movsd();
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	ecx = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(esi, (int32_t)4);
	add(ecx, esi);
	eax = to32i(dword_4D5C78+esi); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x28); //lea
	add(eax, (int32_t)0x9C);
	ebp = (int32_t)(intptr_t)(ecx+0x34); //lea
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	add(ecx, (int32_t)0x40);
	cmp(eax, (int32_t)0x960000);
	if (jg())
		goto loc_44BBE0;
	eax = to32i(dword_4D5C78+esi); //mov
	edx = to32i(esp+0x18); //mov
	eax = to32i(eax+0x9C); //mov
	edi = to32i(edx); //mov
	sub(eax, edi);
	to32i(ecx) = eax; //mov
	eax = to32i(dword_4D5C78+esi); //mov
	edi = to32i(edx+4); //mov
	eax = to32i(eax+0xA0); //mov
	sub(eax, edi);
	to32i(ecx+4) = eax; //mov
	eax = to32i(dword_4D5C78+esi); //mov
	edi = to32i(edx+8); //mov
	eax = to32i(eax+0xA4); //mov
	sub(eax, edi);
	to32i(ecx+8) = eax; //mov
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jnz())
		goto loc_44BA4F;
	eax = to32i(dword_4D5CC4+esi); //mov
	to32i(esp) = eax; //mov
loc_44BA4F:
	eax = ecx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = to32i(esp); //mov
	edx = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+8); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_44BBE9;
	eax = to32i(esp); //mov
	edx = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+8); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
loc_44BACC:
	cmp(eax, (int32_t)0xFD70);
	if (jle())
		goto loc_44BADA;
	edi = esp; //mov
	esi = ebp; //mov
	movsd();
	movsd();
	movsd();
loc_44BADA:
	eax = to32i(esp+4); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	to32i(ebx) = esi; //mov
	eax = to32i(esp+8); //mov
	edx = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+8); //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	to32i(ebx+4) = esi; //mov
	eax = to32i(esp); //mov
	edx = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	eax = ebx; //mov
	to32i(ebx+8) = esi; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(ebx+8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx+4); //mov
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	to32i(ebp+0) = esi; //mov
	edx = to32i(ebx); //mov
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	to32i(ebp+4) = esi; //mov
	edx = to32i(ebx+4); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(esi, eax);
	to32i(ebp+8) = esi; //mov
	edx = to32i(esp+0x14); //mov
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	edx = to32i(dword_4D5CC0+eax); //mov
	test(edx, edx);
	if (jnz())
		goto loc_44BC27;
loc_44BBE0:
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44BBE9:
	eax = to32i(esp); //mov
	edx = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+8); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	neg(eax);
	goto loc_44BACC;
loc_44BC27:
	ebx = (int32_t)(intptr_t)(esp+0x10); //lea
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_49EA20(); esp += 4; //call
	esi = to32i(ebp+0); //mov
	edx = to32i(esp+0x10); //mov
	eax = esi; //mov
	ebx = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	edi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(edi, eax);
	to32i(ebp+0) = edi; //mov
	eax = esi; //mov
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	esi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	to32i(ecx) = esi; //mov
	esi = to32i(ebp+4); //mov
	edx = to32i(esp+0x10); //mov
	eax = esi; //mov
	ebx = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	edi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(edi, eax);
	to32i(ebp+4) = edi; //mov
	eax = esi; //mov
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	esi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	to32i(ecx+4) = esi; //mov
	esi = to32i(ebp+8); //mov
	edx = to32i(esp+0x10); //mov
	eax = esi; //mov
	ebx = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	edi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(edi, eax);
	to32i(ebp+8) = edi; //mov
	eax = esi; //mov
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	esi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	to32i(ecx+8) = esi; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44BD40()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	esi = eax; //mov
	to32i(esp+0x30) = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, esi);
	ecx = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(eax, (int32_t)4);
	add(ecx, eax);
	xor_(ebp, ebp);
	edx = to32i(ecx+0x64); //mov
	add(ecx, (int32_t)0x54);
	test(edx, edx);
	if (jz())
		goto loc_44BE2B;
	eax = to32i(ecx+0x18); //mov
	eax = to16i(eax); //movsx
	add(eax, eax);
loc_44BD74:
	to32i(esp+0xC) = eax; //mov
	cmp(to32i(ecx+0x10), (int32_t)0);
	if (jz())
		goto loc_44BE4C;
	eax = to32i(ecx+0x18); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_44BD8C:
	to32i(esp+0x10) = eax; //mov
	cmp(to32i(ecx+0x10), (int32_t)0);
	if (jz())
		goto loc_44BE6F;
	eax = to32i(ecx+0x18); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_44BDA5:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp+0x14) = eax; //mov
	ebx = (int32_t)(intptr_t)(ecx+0x20); //lea
	eax = to32i(esp+0x30); //mov
	esp -= 4; _sub_462EF0(); esp += 4; //call
	edx = to32i(esp+0x30); //mov
	add(eax, (int32_t)0x10000);
	cmp(eax, to32i(edx+4));
	if (jle())
		goto loc_44BDCA;
	to32i(edx+4) = eax; //mov
loc_44BDCA:
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_449AE0(); esp += 4; //call
	test(al, (int8_t)0x3F);
	if (jnz())
		goto loc_44BE23;
	push32(edi);
	eax = esi; //mov
	shl(eax, (int32_t)4);
	add(eax, esi);
	shl(eax, (int32_t)4);
	esi = to32i(dword_4D5C74+eax); //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)(esi+0x9C); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(esp+0xA); //mov
	edi = (int32_t)(intptr_t)(esp+0x1C); //lea
	add(edx, (int32_t)3);
	esi = to32i(esp+0x34); //mov
	to16i(esp+0xA) = dx; //mov
loc_44BE0C:
	movsd();
	movsd();
	movsd();
	eax = ebp; //mov
	inc(ebp);
	cmp(eax, (int32_t)0xA);
	if (jl())
		goto loc_44BE90;
loc_44BE17:
	edi = to32i(esp+0x34); //mov
	esi = (int32_t)(intptr_t)(esp+0x1C); //lea
	movsd();
	movsd();
	movsd();
	pop32(edi);
loc_44BE23:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44BE2B:
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+9); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_44BD74;
loc_44BE4C:
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	eax = to32i(edx+eax+0xA); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_44BD8C;
loc_44BE6F:
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+0xB); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_44BDA5;
loc_44BE90:
	edx = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	cmp(eax, (int32_t)0x28F);
	if (jle())
		goto loc_44BE17;
	edx = to32i(esp+4); //mov
	esi = to32i(esp+0x1C); //mov
	add(edx, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edi = to32i(esp+0x20); //mov
	edx = to32i(esp+8); //mov
	add(edx, edi);
	to32i(esp+0x28) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0xC); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0x24); //mov
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = 1; //mov
	to32i(esp+0x30) = eax; //mov
	edx = ecx; //mov
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_449AE0(); esp += 4; //call
	test(al, (int8_t)0x3F);
	if (jnz())
		goto loc_44BF1A;
	edi = (int32_t)(intptr_t)(esp+0x1C); //lea
	esi = (int32_t)(intptr_t)(esp+0x28); //lea
	goto loc_44BE0C;
loc_44BF1A:
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)(esp+0x28); //lea
	goto loc_44BE0C;
}
Fn(void) Game::_sub_44BF30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x94);
	to32i(esp+0x78) = eax; //mov
	edi = edx; //mov
	xor_(edx, edx);
	to32i(esp+0x84) = edx; //mov
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(eax, (int32_t)4);
	add(edx, eax);
	ebp = (int32_t)(intptr_t)(edx+0x10); //lea
	eax = to32i(dword_4D5C74+eax); //mov
	add(edx, (int32_t)0x54);
	eax = to32i(eax+0x14); //mov
	to32i(edx+0xC) = eax; //mov
	eax = ebp; //mov
	to32i(esp+0x6C) = edx; //mov
	esp -= 4; _sub_44AF60(); esp += 4; //call
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax+0xC); //mov
	to32i(esp+0x90) = eax; //mov
	to32i(esp+0x7C) = eax; //mov
	edx = to32i(esp+0x90); //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	shl(eax, (int32_t)2);
	to32i(esp+0x74) = eax; //mov
	edx = to32i(esp+0x74); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dx = to16i(eax+0x1C); //mov
	shl(edx, (int32_t)8);
	to32i(esp+0x8C) = edx; //mov
	xor_(edx, edx);
	dx = to16i(eax+0x1A); //mov
	shl(edx, (int32_t)8);
	to32i(esp+0x88) = edx; //mov
	edx = to32i(eax+0xF); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x24) = edx; //mov
	edx = to32i(eax+0x10); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x28) = edx; //mov
	edx = to32i(eax+0x11); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x2C) = edx; //mov
	edx = to32i(ebp+0); //mov
	to32i(esp+0x90) = edx; //mov
	edx = to32i(eax); //mov
	sub(to32i(esp+0x90), edx);
	edx = to32i(esp+0x90); //mov
	to32i(esp+0x60) = edx; //mov
	edx = to32i(ebp+4); //mov
	to32i(esp+0x90) = edx; //mov
	edx = to32i(eax+4); //mov
	sub(to32i(esp+0x90), edx);
	edx = to32i(esp+0x90); //mov
	to32i(esp+0x64) = edx; //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(eax+8); //mov
	sub(edx, eax);
	eax = to32i(esp+0x60); //mov
	to32i(esp+0x68) = edx; //mov
	edx = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	to32i(esp+0x90) = eax; //mov
	eax = to32i(esp+0x64); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	add(edx, eax);
	eax = to32i(esp+0x68); //mov
	to32i(esp+0x90) = edx; //mov
	edx = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	add(edx, eax);
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
	to32i(esp+0x80) = edx; //mov
	eax = edx; //mov
	edx = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(esp+0x30); //lea
	sub(eax, edx);
	ecx = (int32_t)(intptr_t)(esp+0x3C); //lea
	cmp(eax, (int32_t)0x60000);
	if (jg())
		goto loc_44C45B;
	eax = to32i(esp+0x80); //mov
	edx = to32i(esp+0x88); //mov
	neg(eax);
	sub(eax, edx);
	cmp(eax, (int32_t)0x60000);
	if (jg())
		goto loc_44C45B;
	edx = to32i(esp+0x74); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	test(to8i(eax+0x1E), (int8_t)0xF);
	if (jz())
		goto loc_44C3FF;
	edx = to32i(esp+0x80); //mov
	add(edx, (int32_t)0x28000);
	sub(edx, to32i(esp+0x8C));
	test(edx, edx);
	if (jle())
		goto loc_44C3FF;
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x3C) = edx; //mov
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x40) = edx; //mov
	eax = to32i(eax+0xE); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	to32i(esp+0x44) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(esp+0x2C); //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x44); //mov
	to32i(esp+0x30) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x34) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	to32i(esp+0x38) = ecx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(esp+0x44); //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x38); //mov
	to32i(esp+0x24) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x30); //mov
	to32i(esp+0x28) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x34); //mov
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esp; //mov
	sub(ecx, eax);
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	to32i(esp+0x2C) = ecx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	cmp(eax, (int32_t)0x38000);
	if (jge())
		goto loc_44C295;
	ebx = to32i(esp+0x48); //mov
	ecx = (int32_t)(intptr_t)(eax+0x38000); //lea
	edx = 1; //mov
	to32i(esp+0x8C) = ecx; //mov
	add(ebx, (int32_t)0x38000);
	to32i(esp+0x84) = edx; //mov
	to32i(esp+0x48) = ebx; //mov
loc_44C295:
	eax = to32i(esp+0x48); //mov
	ebx = to32i(esp+0x48); //mov
	ecx = to32i(esp+0x8C); //mov
	xor_(edx, edx);
	to32i(esp+0x54) = eax; //mov
	esi = eax; //mov
	to32i(esp+0x5C) = edx; //mov
	add(ebx, (int32_t)0x38000);
	eax = 0x30000; //mov
	neg(esi);
	sub(ebx, ecx);
	to32i(esp+0x58) = eax; //mov
	to32i(esp+0x54) = esi; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jle())
		goto loc_44C45B;
	eax = 0x10000; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esp+0x8C); //mov
	add(edx, (int32_t)0xFFFE8000);
	sub(edx, eax);
	eax = edx; //mov
	edx = to32i(esp+0x48); //mov
	sub(edx, eax);
	ebx = to32i(esp+0x48); //mov
	eax = edx; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = esi; //mov
	ecx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x30000; //mov
	esi = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	xor_(edx, edx);
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	add(edx, esi);
	to32i(esp+0x60) = edx; //mov
	edx = to32i(esp+0x4C); //mov
	add(edx, ebx);
	to32i(esp+0x64) = edx; //mov
	edx = to32i(esp+0x50); //mov
	add(edx, eax);
	ebx = to32i(esp+0x84); //mov
	to32i(esp+0x68) = edx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_44C381;
	add(to32i(esp+0x60), (int32_t)0xFFFC8000);
loc_44C381:
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	ebx = edi; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	edx = to32i(esp+0x7C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	ebp = to32i(edi); //mov
	edx = to32i(eax); //mov
	add(ebp, edx);
	to32i(edi) = ebp; //mov
	ecx = to32i(edi+4); //mov
	edx = to32i(eax+4); //mov
	add(ecx, edx);
	to32i(edi+4) = ecx; //mov
	ebx = to32i(edi+8); //mov
	eax = to32i(eax+8); //mov
	edx = to32i(esp+0x78); //mov
	add(ebx, eax);
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	to32i(edi+8) = ebx; //mov
	cmp(byte_4D5C7C[eax], (int8_t)0xC);
	if (jz())
		goto loc_44C3E9;
loc_44C3DD:
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44C3E9:
	to32i(dword_4D5D78+eax) = 1; //mov
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44C3FF:
	eax = to32i(esp+0x7C); //mov
	to32i(esp+0x90) = eax; //mov
	edx = to32i(esp+0x90); //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	shl(eax, (int32_t)2);
	to32i(esp+0x70) = eax; //mov
	edx = to32i(esp+0x70); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1E); //mov
	sar(edx, (int32_t)4);
	to32i(esp+0x90) = edx; //mov
	test(to8i(esp+0x90), (int8_t)0xF);
	if (jz())
		goto loc_44C45B;
	edx = to32i(esp+0x80); //mov
	neg(edx);
	add(edx, (int32_t)0x28000);
	sub(edx, to32i(esp+0x88));
	test(edx, edx);
	if (jg())
		goto loc_44C46C;
loc_44C45B:
	esi = ebp; //mov
	movsd();
	movsd();
	movsd();
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44C46C:
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x3C) = edx; //mov
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x40) = edx; //mov
	eax = to32i(eax+0xE); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	to32i(esp+0x44) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(esi+8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(esi+4); //mov
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	to32i(ebx) = edx; //mov
	edx = to32i(esi); //mov
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(esi+8); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	to32i(ebx+4) = edx; //mov
	edx = to32i(esi+4); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(esi); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	eax = ebx; //mov
	to32i(ebx+8) = edx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(ecx+8); //mov
	eax = to32i(ebx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(ebx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	to32i(esi) = edx; //mov
	edx = to32i(ecx); //mov
	eax = to32i(ebx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(ecx+8); //mov
	eax = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	to32i(esi+4) = edx; //mov
	edx = to32i(ecx+4); //mov
	eax = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x90) = eax; //mov
	edx = to32i(ecx); //mov
	eax = to32i(ebx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x90); //mov
	sub(edx, eax);
	to32i(esi+8) = edx; //mov
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	ecx = to32i(esp+0x88); //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	cmp(ecx, (int32_t)0x38000);
	if (jge())
		goto loc_44C618;
	eax = to32i(esp+0x48); //mov
	esi = (int32_t)(intptr_t)(ecx+0x38000); //lea
	ebx = 1; //mov
	to32i(esp+0x88) = esi; //mov
	add(eax, (int32_t)0xFFFC8000);
	to32i(esp+0x84) = ebx; //mov
	to32i(esp+0x48) = eax; //mov
loc_44C618:
	eax = to32i(esp+0x48); //mov
	esi = to32i(esp+0x88); //mov
	xor_(ebx, ebx);
	edx = eax; //mov
	to32i(esp+0x54) = eax; //mov
	neg(edx);
	to32i(esp+0x5C) = ebx; //mov
	to32i(esp+0x54) = edx; //mov
	ebx = (int32_t)(intptr_t)(edx+0x38000); //lea
	ecx = 0x30000; //mov
	sub(ebx, esi);
	to32i(esp+0x58) = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jle())
		goto loc_44C45B;
	eax = 0x10000; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = (int32_t)(intptr_t)(esi-0x18000); //lea
	ebx = to32i(esp+0x48); //mov
	sub(edx, eax);
	neg(ebx);
	eax = edx; //mov
	edx = ebx; //mov
	sub(edx, eax);
	eax = edx; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esp+0x54); //mov
	ecx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x30000; //mov
	ebx = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	xor_(edx, edx);
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	add(edx, ebx);
	to32i(esp+0x60) = edx; //mov
	edx = to32i(esp+0x4C); //mov
	add(edx, esi);
	to32i(esp+0x64) = edx; //mov
	edx = to32i(esp+0x50); //mov
	add(edx, eax);
	ebp = to32i(esp+0x84); //mov
	to32i(esp+0x68) = edx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_44C6FB;
	add(to32i(esp+0x60), (int32_t)0x38000);
loc_44C6FB:
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	ebx = edi; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	edx = to32i(esp+0x7C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	ecx = to32i(edi); //mov
	edx = to32i(eax); //mov
	add(ecx, edx);
	to32i(edi) = ecx; //mov
	ebx = to32i(edi+4); //mov
	edx = to32i(eax+4); //mov
	add(ebx, edx);
	to32i(edi+4) = ebx; //mov
	esi = to32i(edi+8); //mov
	eax = to32i(eax+8); //mov
	edx = to32i(esp+0x78); //mov
	add(esi, eax);
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	to32i(edi+8) = esi; //mov
	cmp(byte_4D5C7C[eax], (int8_t)0xC);
	if (jnz())
		goto loc_44C3DD;
	to32i(dword_4D5D78+eax) = 1; //mov
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44C780()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x6C);
	ecx = eax; //mov
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	ebx = to32i(dword_4D5D74+edx); //mov
	eax = to32i(dword_4D5C74+edx); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_44C82C;
	ebx = to32i(eax+0x664); //mov
	edx = to32i(eax+0x668); //mov
	add(ebx, ebx);
loc_44C7B7:
	cmp(to32i(eax+0x304), (int32_t)0x3C0000);
	if (jle())
		goto loc_44C7CE;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
loc_44C7CE:
	esi = ecx; //mov
	shl(esi, (int32_t)4);
	add(esi, ecx);
	eax = esp; //mov
	shl(esi, (int32_t)4);
	esp -= 4; _sub_49E7E0(); esp += 4; //call
	edx = to32i(dword_4D5CC0+esi); //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	add(edx, ebx);
	esp -= 4; _sub_49E720(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = esp; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_4D5C74; //mov
	ebx = esp; //mov
	add(edx, esi);
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	add(edx, (int32_t)0x28);
	ecx = 9; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	edi = (int32_t)(intptr_t)(dword_4D5C9C+esi); //lea
	esi = esp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	add(esp, (int32_t)0x6C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44C82C:
	edx = to32i(eax+0x668); //mov
	ebx = to32i(eax+0x664); //mov
	sar(edx, (int32_t)1);
	goto loc_44C7B7;
}
