#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"

Fn(void) Game::_sub_477C40()
{
	push32(edx);
	edx = 1; //mov
	test(eax, eax);
	if (jz())
		goto loc_477C56;
	eax = 0x1A; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	pop32(edx);
	return;
loc_477C56:
	eax = 0x18; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_477C70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_557960), (int32_t)0);
	if (jz())
		goto loc_477CA8;
	xor_(edx, edx);
loc_477C81:
	eax = to32i(dword_5128D0+edx); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_477C9D;
	eax = edx; //mov
	add(eax, (int32_t)(intptr_t)dword_5128D0);
	esp -= 4; _sub_477E20(); esp += 4; //call
loc_477C9D:
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x160);
	if (jnz())
		goto loc_477C81;
loc_477CA8:
	ecx = 0x103; //mov
	esi = 0x4804; //mov
	edi = 0x5004; //mov
	ebp = 0x4B04; //mov
	eax = 0x4D04; //mov
	edx = 0x1C04; //mov
	xor_(ebx, ebx);
	to32i(dword_512948) = ecx; //mov
	to32i(dword_51294C) = ebx; //mov
	to32i(dword_512934) = esi; //mov
	to32i(dword_512938) = edi; //mov
	to32i(dword_51293C) = ebp; //mov
	to32i(dword_512940) = eax; //mov
	to32i(dword_512944) = edx; //mov
	ecx = 0xF03; //mov
	ebx = 0x3B03; //mov
	esi = 0x3C03; //mov
	edi = 0x3D03; //mov
	ebp = 0x3E03; //mov
	eax = 0x3F03; //mov
	edx = 0x4003; //mov
	to32i(dword_512950) = ecx; //mov
	to32i(dword_51295C) = ebx; //mov
	to32i(dword_512958) = esi; //mov
	to32i(dword_512964) = edi; //mov
	to32i(dword_512968) = ebp; //mov
	to32i(dword_512978) = eax; //mov
	to32i(dword_51297C) = edx; //mov
	ecx = 0x4103; //mov
	ebx = 0x4203; //mov
	esi = 0x4303; //mov
	edi = 0x4403; //mov
	eax = to32i(dword_512214); //mov
	xor_(ebp, ebp);
	to32i(dword_512974) = ecx; //mov
	to32i(dword_512988) = ebx; //mov
	to32i(dword_512984) = esi; //mov
	to32i(dword_512954) = edi; //mov
	to32i(dword_512930) = ebp; //mov
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_477DED;
	ecx = 0xFFFFFFFF; //mov
	xor_(edx, edx);
loc_477D86:
	add(edx, (int32_t)4);
	to32i(dword_55791C+edx) = ecx; //mov
	cmp(edx, (int32_t)0x40);
	if (jnz())
		goto loc_477D86;
	eax = to32i(dword_51298C); //mov
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_477DD1;
	edx = eax; //mov
	sar(edx, (int32_t)0x18);
	cmp(edx, (int32_t)0x10);
	if (jge())
		goto loc_477DD1;
	ecx = eax; //mov
	sar(ecx, (int32_t)8);
	eax = 1; //mov
	and_(ecx, (int32_t)0x1F);
	shl(eax, cl);
	ebx = to32i(dword_557920+edx*4); //mov
	eax = ~eax;
	and_(ebx, eax);
	to32i(dword_557920+edx*4) = ebx; //mov
loc_477DD1:
	eax = to32i(dword_512994); //mov
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_477DED;
	edx = eax; //mov
	sar(edx, (int32_t)0x18);
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_477DF4;
loc_477DED:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_477DF4:
	ecx = eax; //mov
	sar(ecx, (int32_t)8);
	eax = 1; //mov
	and_(ecx, (int32_t)0x1F);
	shl(eax, cl);
	esi = to32i(dword_557920+edx*4); //mov
	eax = ~eax;
	and_(esi, eax);
	to32i(dword_557920+edx*4) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_477E20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+0xC) = eax; //mov
	ebx = to32i(esp+0xC); //mov
	esi = to32i(esp+0xC); //mov
	ecx = to32i(dword_557960); //mov
	eax = to32i(eax); //mov
	xor_(edi, edi);
	sar(eax, (int32_t)0x1C);
	add(ecx, (int32_t)4);
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+0xC); //mov
	ebx = to32i(ebx); //mov
	esi = to32i(esi); //mov
	eax = to32i(eax); //mov
	sar(ebx, (int32_t)8);
	sar(eax, (int32_t)0x18);
	edx = to32i(esp+8); //mov
	and_(eax, (int32_t)7);
	shl(edx, (int32_t)0x1C);
	to32i(esp+4) = eax; //mov
	shl(eax, (int32_t)0x18);
	and_(esi, (int32_t)0xFF00);
	add(edx, eax);
	and_(ebx, (int32_t)0xFF00);
	to32i(esp) = edx; //mov
loc_477E7B:
	eax = to32i(dword_557960); //mov
	cmp(edi, to32i(eax));
	if (jge())
		goto loc_478007;
	ebp = to32i(esp+8); //mov
	cmp(ebp, to32i(ecx));
	if (jz())
		goto loc_477E96;
loc_477E90:
	add(ecx, (int32_t)0x14);
	inc(edi);
	goto loc_477E7B;
loc_477E96:
	edx = to32i(esp+4); //mov
	cmp(edx, to32i(ecx+4));
	if (jnz())
		goto loc_477E90;
	eax = (int32_t)(intptr_t)(ebx-0x8000); //lea
	ebp = (int32_t)(intptr_t)(esi-0x8000); //lea
	cmp(ebx, esi);
	if (jge())
		goto loc_477F7E;
	cmp(ebx, (int32_t)0x8000);
	if (jge())
		goto loc_477F4A;
	ebp = to32i(ecx+0xC); //mov
	edx = to32i(ecx+0x10); //mov
	sub(edx, ebp);
	ebp = edx; //mov
	sar(ebp, (int32_t)1);
	edx = ebx; //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	edx = esi; //mov
	imul32(edx, ebp);
	ebx = to32i(ecx+0xC); //mov
	add(ebx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	esi = to32i(ecx+0xC); //mov
loc_477EF7:
	add(esi, eax);
loc_477EF9:
	sar(ebx, (int32_t)8);
	sar(esi, (int32_t)8);
	test(ebx, ebx);
	if (jl())
		goto loc_477FF9;
	cmp(ebx, (int32_t)0xFF);
	if (jle())
		goto loc_477F14;
	ebx = 0xFF; //mov
loc_477F14:
	test(esi, esi);
	if (jl())
		goto loc_478000;
	cmp(esi, (int32_t)0xFF);
	if (jle())
		goto loc_477F29;
	esi = 0xFF; //mov
loc_477F29:
	eax = ebx; //mov
	edx = to32i(esp); //mov
	shl(eax, (int32_t)0x10);
	add(edx, eax);
	eax = esi; //mov
	shl(eax, (int32_t)8);
	add(eax, edx);
	edx = to32i(esp+0xC); //mov
	inc(eax);
	to32i(edx) = eax; //mov
	add(ecx, (int32_t)0x14);
	inc(edi);
	goto loc_477E7B;
loc_477F4A:
	ebx = to32i(ecx+8); //mov
	esi = to32i(ecx+0x10); //mov
	sub(esi, ebx);
	imul32(eax, esi);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	edx = ebp; //mov
	imul32(edx, esi);
	add(ebx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	esi = to32i(ecx+8); //mov
	goto loc_477EF7;
loc_477F7E:
	cmp(ebx, (int32_t)0x8000);
	if (jle())
		goto loc_477FC3;
	esi = to32i(ecx+0xC); //mov
	ebp = to32i(ecx+0x10); //mov
	sub(ebp, esi);
	edx = ebx; //mov
	sar(ebp, (int32_t)1);
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	esi = to32i(ecx+0x10); //mov
	sub(esi, eax);
	edx = esi; //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	ebx = to32i(ecx+0x10); //mov
	sub(ebx, eax);
	goto loc_477EF9;
loc_477FC3:
	ebx = to32i(ecx+8); //mov
	esi = to32i(ecx+0xC); //mov
	sub(esi, ebx);
	imul32(eax, esi);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	edx = ebp; //mov
	imul32(edx, esi);
	sub(ebx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xF);
	sbb(eax, edx);
	sar(eax, (int32_t)0xF);
	esi = to32i(ecx+8); //mov
	sub(esi, eax);
	goto loc_477EF9;
loc_477FF9:
	xor_(ebx, ebx);
	goto loc_477F14;
loc_478000:
	xor_(esi, esi);
	goto loc_477F29;
loc_478007:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_478020()
{
	push32(edx);
	edx = to32i(dword_557960); //mov
	test(edx, edx);
	if (jnz())
		goto loc_47802D;
	pop32(edx);
	return;
loc_47802D:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_478040()
{
	push32(edx);
	eax = (int32_t)(intptr_t)aJoycal_cfg; //mov
	xor_(edx, edx);
	esp -= 4; _sub_486F50(); esp += 4; //call
	to32i(dword_557960) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_478060()
{
	push32(edx);
	push32(ecx);
	esp -= 4; _sub_421F10(); esp += 4; //call
	eax = SDL_NumJoysticks_wrap();
	cmp(eax, (int32_t)0x10);
	if (jb())
		goto loc_4780AB;
	eax = 0x10; //mov
loc_478078:
	edx = 0xFFFFFFFF; //mov
	to32i(dword_557964) = eax; //mov
	xor_(eax, eax);
	pop32(ecx);
loc_478085:
	add(eax, (int32_t)4);
	to32i(dword_55791C+eax) = edx; //mov
	cmp(eax, (int32_t)0x40);
	if (jnz())
		goto loc_478085;
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)dword_557520; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to8i(byte_55796C) = 0xFF; //mov
	pop32(edx);
	return;
loc_4780AB:
	eax = SDL_NumJoysticks_wrap();
	goto loc_478078;
}
Fn(void) Game::_sub_4780C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	eax = to32i(dword_512E0C); //mov
	edx = to32i(dword_512E10); //mov
	ecx = to32i(dword_512E14); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E18); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E1C); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E20); //mov
	or_(eax, esi);
	ebp = to32i(dword_512E24); //mov
	or_(eax, edi);
	edx = to32i(dword_512E28); //mov
	or_(eax, ebp);
	ecx = to32i(dword_512E2C); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E30); //mov
	or_(eax, ecx);
	or_(eax, ebx);
	esp -= 4; _sub_404D40(); esp += 4; //call
	test(al, (int8_t)3);
	if (jz())
		goto loc_478128;
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478128:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_478140()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_511E40); //mov
	cmp(ecx, to32i(dword_51220C));
	if (jle())
		goto loc_47817D;
	edx = to32i(eax+0x2B8); //mov
loc_478156:
	ecx = 0x23D70; //mov
	test(edx, edx);
	if (jle())
		goto loc_478185;
	eax = edx; //mov
loc_478161:
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	return;
loc_47817D:
	edx = to32i(eax+0x3A0); //mov
	goto loc_478156;
loc_478185:
	eax = edx; //mov
	neg(eax);
	goto loc_478161;
}
Fn(void) Game::_sub_478190()
{
	push32(ebx);
	cmp(to16i(word_4D991C), (int16_t)0);
	if (jnz())
		goto loc_4781A6;
	xor_(ebx, ebx);
	to16i(word_4D991C) = bx; //mov
	pop32(ebx);
	return;
loc_4781A6:
	eax = to32i(dword_557982); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_422980(); esp += 4; //call
	xor_(ebx, ebx);
	to16i(word_4D991C) = bx; //mov
	pop32(ebx);
}
Fn(void) Game::_sub_4781C0()
{
	push32(ecx);
	cmp(to32i(dword_4D9910), (int32_t)0);
	if (jnz())
		goto loc_4781E0;
loc_4781CA:
	xor_(ecx, ecx);
	to32i(dword_4D9914) = ecx; //mov
	to32i(dword_4D9918) = ecx; //mov
	to32i(dword_4D9910) = ecx; //mov
	pop32(ecx);
	return;
loc_4781E0:
	eax = to32i(dword_55797E+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_422980(); esp += 4; //call
	goto loc_4781CA;
}
Fn(void) Game::_sub_4781F0()
{
	push32(esi);
	esi = to32i(dword_511E60); //mov
	cmp(esi, to32i(dword_4D9920));
	if (jge())
		goto loc_478201;
	pop32(esi);
	return;
loc_478201:
	push32(ecx);
	push32(0);
	ecx = to32i(edx); //mov
	push32(0);
	sar(ecx, (int32_t)3);
	push32(ebx);
	esi = to32i(dword_511E60); //mov
	push32(0);
	add(esi, ecx);
	ebx = eax; //mov
	to32i(dword_4D9920) = esi; //mov
	esi = to32i(dword_55797E); //mov
	ecx = edx; //mov
	sar(esi, (int32_t)0x10);
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4225C0(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
}
Fn(void) Game::_sub_478240()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	edx = 0x2710; //mov
	ecx = 0xC8; //mov
	xor_(ah, ah);
	xor_(esi, esi);
	to8i(esp) = ah; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+0x34) = ecx; //mov
	to32i(esp+0x38) = edx; //mov
	dl = 2; //mov
	to32i(esp+0x40) = esi; //mov
	to8i(esp+0x3C) = dl; //mov
	dh = 0xFF; //mov
	xor_(eax, eax);
	to8i(esp+0x3D) = dh; //mov
	edx = esp; //mov
	to32i(esp+0x44) = esi; //mov
	esp -= 4; _sub_422A34(); esp += 4; //call
	test(ax, ax);
	if (jge())
		goto loc_478292;
loc_478287:
	xor_(eax, eax);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478292:
	bl = 3; //mov
	ebp = 0x2710; //mov
	ecx = 0x72E4; //mov
	edx = esp; //mov
	to16i(dword_55797E+2) = ax; //mov
	to32i(esp+8) = esi; //mov
	to32i(esp+0xC) = esi; //mov
	to8i(esp) = bl; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp+0x10) = ecx; //mov
	ebx = 0xFFFFFF; //mov
	xor_(eax, eax);
	to32i(esp+0x34) = ebx; //mov
	esp -= 4; _sub_422A34(); esp += 4; //call
	test(ax, ax);
	if (jl())
		goto loc_478287;
	bh = 9; //mov
	to16i(dword_557982) = ax; //mov
	to32i(esp+4) = esi; //mov
	to32i(esp+0xC) = ebp; //mov
	to32i(esp+8) = ebp; //mov
	to32i(esp+0x14) = ebp; //mov
	edx = ebp; //mov
	to32i(esp+0x10) = ebp; //mov
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x24) = ebp; //mov
	to32i(esp+0x20) = ebp; //mov
	to32i(esp+0x2C) = ebp; //mov
	to32i(esp+0x28) = ebp; //mov
	xor_(edx, ebp);
	eax = ebp; //mov
	to32i(esp+0x30) = edx; //mov
	xor_(eax, ebp);
	edx = esp; //mov
	to8i(esp) = bh; //mov
	esp -= 4; _sub_422A34(); esp += 4; //call
	test(ax, ax);
	if (jl())
		goto loc_478287;
	to16i(dword_557982+2) = ax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_478340()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47834A;
	return;
loc_47834A:
	push32(ecx);
	eax = 0x10; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_422E90(); esp += 4; //call
	to32i(dword_4D98EC) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_478360()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = eax; //mov
	cmp(to32i(dword_4D98F0), (int32_t)0);
	if (jz())
		goto loc_47845B;
	cmp(eax, to32i(dword_4D990C));
	if (jnz())
		goto loc_47845B;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_47839A;
	cmp(to32i(dword_522794), (int32_t)2);
	if (jnz())
		goto loc_478465;
loc_47839A:
	cmp(to32i(ecx+0x15C), (int32_t)0);
	if (jl())
		goto loc_478471;
	xor_(eax, eax);
	dx = to16i(ecx+0x14C); //mov
	to32i(dword_4D9900) = eax; //mov
	test(dx, dx);
	if (jnz())
		goto loc_478487;
	cmp(to32i(dword_4D98FC), (int32_t)0);
	if (jz())
		goto loc_478413;
	esi = 0x244; //mov
	ebx = 0x2710; //mov
	to32i(esp+0x18) = esi; //mov
	to32i(esp) = ebx; //mov
	edi = to32i(dword_511E60); //mov
	test(di, (int16_t)1);
	if (jz())
		goto loc_47849E;
	to32i(esp+0x1C) = 0x14; //mov
loc_4783F1:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_4781F0(); esp += 4; //call
	edx = 2; //mov
	xor_(ebx, ebx);
	to32i(dword_4D9930) = edx; //mov
	to32i(dword_4D98FC) = ebx; //mov
loc_478413:
	esi = to32i(dword_4D9908); //mov
	test(esi, esi);
	if (jz())
		goto loc_47842F;
	edi = (int32_t)(intptr_t)(esi-1); //lea
	to32i(dword_4D9908) = edi; //mov
	test(edi, edi);
	if (jnz())
		goto loc_47842F;
	esp -= 4; _sub_4781C0(); esp += 4; //call
loc_47842F:
	cmp(to32i(dword_4D98FC), (int32_t)0);
	if (jnz())
		goto loc_478448;
	cmp(to32i(dword_4D9900), (int32_t)0);
	if (jnz())
		goto loc_478448;
	eax = ecx; //mov
	esp -= 4; _sub_47855C(); esp += 4; //call
loc_478448:
	ebx = to32i(dword_4D9930); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4784AB;
	esi = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(dword_4D9930) = esi; //mov
loc_47845B:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478465:
	esp -= 4; _sub_4781C0(); esp += 4; //call
	esp -= 4; _sub_478190(); esp += 4; //call
	goto loc_47845B;
loc_478471:
	esp -= 4; _sub_4781C0(); esp += 4; //call
	esp -= 4; _sub_478190(); esp += 4; //call
	to32i(dword_4D9900) = 1; //mov
	goto loc_47845B;
loc_478487:
	esp -= 4; _sub_4781C0(); esp += 4; //call
	ebp = 1; //mov
	esp -= 4; _sub_478190(); esp += 4; //call
	to32i(dword_4D98FC) = ebp; //mov
	goto loc_47845B;
loc_47849E:
	to32i(esp+0x1C) = 0x154; //mov
	goto loc_4783F1;
loc_4784AB:
	eax = ecx; //mov
	edi = 5; //mov
	esp -= 4; _sub_47895C(); esp += 4; //call
	to32i(dword_4D9930) = edi; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4784D0()
{
	cmp(to32i(dword_4D98F0), (int32_t)0);
	if (jz())
		goto loc_47850C;
	cmp(eax, to32i(dword_4D990C));
	if (jnz())
		goto loc_47850C;
	cmp(to32i(dword_4D9900), (int32_t)0);
	if (jnz())
		goto loc_47850C;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_4784FC;
	cmp(to32i(dword_522794), (int32_t)2);
	if (jnz())
		goto loc_478502;
loc_4784FC:
	eax = 1; //mov
	return;
loc_478502:
	esp -= 4; _sub_4781C0(); esp += 4; //call
	esp -= 4; _sub_478190(); esp += 4; //call
loc_47850C:
	xor_(eax, eax);
}
Fn(void) Game::_sub_47855C()
{
	static const void *const off_478520[] = {
		&&loc_47859D,
		&&loc_4787A0,
		&&loc_4786A3,
		&&loc_478820,
		&&loc_478724,
		&&loc_4785A2,
		&&loc_47889D,
		&&loc_47859D,
		&&loc_47859D,
		&&loc_47859D,
		&&loc_478820,
		&&loc_47889D,
		&&loc_478724,
		&&loc_47859D,
		&&loc_47859D,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x20);
	and_(esp, (int32_t)0xFFFFFFF8);
	edx = eax; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_4785B7;
	cmp(eax, (int32_t)5);
	if (jge())
		goto loc_4785BE;
	esi = 0x9C4; //mov
	edi = 5; //mov
loc_478585:
	eax = to32i(edx+0x184); //mov
	to32i(dword_4D98F4) = eax; //mov
	dec(eax);
	cmp(eax, (int32_t)0xE);
	if (ja())
		goto loc_47859D;
	goto *off_478520[eax];
loc_47859D:
	esp -= 4; _sub_4781C0(); esp += 4; //call
loc_4785A2:
	to32i(dword_4D9918) = esi; //mov
	to32i(dword_4D9914) = edi; //mov
loc_4785AE:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4785B7:
	esp -= 4; _sub_4781C0(); esp += 4; //call
	goto loc_4785AE;
loc_4785BE:
	cmp(eax, (int32_t)0xA);
	if (jge())
		goto loc_4785CF;
	esi = 0xBB8; //mov
	edi = 6; //mov
	goto loc_478585;
loc_4785CF:
	cmp(eax, (int32_t)0xF);
	if (jge())
		goto loc_4785E0;
	esi = 0xDAC; //mov
	edi = 7; //mov
	goto loc_478585;
loc_4785E0:
	cmp(eax, (int32_t)0x14);
	if (jge())
		goto loc_4785F1;
	esi = 0xFA0; //mov
	edi = 8; //mov
	goto loc_478585;
loc_4785F1:
	cmp(eax, (int32_t)0x1E);
	if (jge())
		goto loc_478602;
	esi = 0x1194; //mov
	edi = 9; //mov
	goto loc_478585;
loc_478602:
	cmp(eax, (int32_t)0x28);
	if (jge())
		goto loc_478616;
	esi = 0x1388; //mov
	edi = 0xA; //mov
	goto loc_478585;
loc_478616:
	cmp(eax, (int32_t)0x3C);
	if (jge())
		goto loc_47862A;
	esi = 0x1194; //mov
	edi = 0xB; //mov
	goto loc_478585;
loc_47862A:
	cmp(eax, (int32_t)0x50);
	if (jge())
		goto loc_47863E;
	esi = 0xFA0; //mov
	edi = 0xC; //mov
	goto loc_478585;
loc_47863E:
	cmp(eax, (int32_t)0x64);
	if (jge())
		goto loc_478652;
	esi = 0xFA0; //mov
	edi = 0xD; //mov
	goto loc_478585;
loc_478652:
	cmp(eax, (int32_t)0x8C);
	if (jge())
		goto loc_478668;
	esi = 0xDAC; //mov
	edi = 0xE; //mov
	goto loc_478585;
loc_478668:
	cmp(eax, (int32_t)0x6A4);
	if (jge())
		goto loc_47867E;
	esi = 0xDAC; //mov
	edi = 0xF; //mov
	goto loc_478585;
loc_47867E:
	cmp(eax, (int32_t)0xC8);
	if (jge())
		goto loc_478694;
	esi = 0xDAC; //mov
	edi = 0x10; //mov
	goto loc_478585;
loc_478694:
	esi = 0xBB8; //mov
	edi = 0x11; //mov
	goto loc_478585;
loc_4786A3:
	ecx = to32i(dword_4D9910); //mov
	sub(edi, (int32_t)2);
	sub(esi, (int32_t)0x3E8);
	test(ecx, ecx);
	if (jz())
		goto loc_4786CA;
	cmp(edi, to32i(dword_4D9914));
	if (jnz())
		goto loc_4786CA;
	cmp(esi, to32i(dword_4D9918));
	if (jz())
		goto loc_4785A2;
loc_4786CA:
	xor_(edx, edx);
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = edx; //mov
	fild(to64i(esp+0x18));
	fdivr(to64f(dbl_4CE850));
	eax = esp; //mov
	push32(edx);
	to32i(esp+4) = esi; //mov
	xor_(ecx, ecx);
	push32(edx);
	xor_(ebx, ebx);
	to32i(esp+0xC) = edx; //mov
	push32(eax);
	to32i(esp+0x14) = edx; //mov
	eax = to32i(dword_55797E+2); //mov
	push32(edx);
	edx = 1; //mov
	fadd(to64f(dbl_4CE858));
	sar(eax, (int32_t)0x10);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	goto loc_4785A2;
loc_478724:
	eax = to32i(dword_4D9910); //mov
	dec(edi);
	sub(esi, (int32_t)0x5DC);
	test(eax, eax);
	if (jz())
		goto loc_478748;
	cmp(edi, to32i(dword_4D9914));
	if (jnz())
		goto loc_478748;
	cmp(esi, to32i(dword_4D9918));
	if (jz())
		goto loc_4785A2;
loc_478748:
	xor_(ebx, ebx);
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = ebx; //mov
	fild(to64i(esp+0x18));
	fdivr(to64f(dbl_4CE850));
	eax = esp; //mov
	push32(ebx);
	edx = 1; //mov
	to32i(esp+4) = esi; //mov
	push32(ebx);
	xor_(ecx, ecx);
	to32i(esp+0xC) = ebx; //mov
	push32(eax);
	to32i(esp+0x14) = ebx; //mov
	eax = to32i(dword_55797E+2); //mov
	push32(ebx);
	fadd(to64f(dbl_4CE858));
	sar(eax, (int32_t)0x10);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	goto loc_4785A2;
loc_4787A0:
	edx = to32i(dword_4D9910); //mov
	inc(edi);
	sub(esi, (int32_t)0x1F4);
	test(edx, edx);
	if (jz())
		goto loc_4787C5;
	cmp(edi, to32i(dword_4D9914));
	if (jnz())
		goto loc_4787C5;
	cmp(esi, to32i(dword_4D9918));
	if (jz())
		goto loc_4785A2;
loc_4787C5:
	xor_(eax, eax);
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = eax; //mov
	fild(to64i(esp+0x18));
	fdivr(to64f(dbl_4CE850));
	edx = 1; //mov
	to32i(esp) = esi; //mov
	push32(eax);
	to32i(esp+8) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ecx, ecx);
	push32(eax);
	xor_(ebx, ebx);
	eax = to32i(dword_55797E+2); //mov
	push32(ecx);
	fadd(to64f(dbl_4CE858));
	sar(eax, (int32_t)0x10);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	goto loc_4785A2;
loc_478820:
	ebx = to32i(dword_4D9910); //mov
	inc(edi);
	add(esi, (int32_t)0x3E8);
	test(ebx, ebx);
	if (jz())
		goto loc_478845;
	cmp(edi, to32i(dword_4D9914));
	if (jnz())
		goto loc_478845;
	cmp(esi, to32i(dword_4D9918));
	if (jz())
		goto loc_4785A2;
loc_478845:
	xor_(ecx, ecx);
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = ecx; //mov
	fild(to64i(esp+0x18));
	fdivr(to64f(dbl_4CE850));
	eax = esp; //mov
	push32(ecx);
	edx = 1; //mov
	to32i(esp+4) = esi; //mov
	push32(ecx);
	xor_(ebx, ebx);
	to32i(esp+0xC) = ecx; //mov
	push32(eax);
	to32i(esp+0x14) = ecx; //mov
	eax = to32i(dword_55797E+2); //mov
	push32(ecx);
	fadd(to64f(dbl_4CE858));
	sar(eax, (int32_t)0x10);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	goto loc_4785A2;
loc_47889D:
	edx = to32i(dword_4D9910); //mov
	sub(edi, (int32_t)5);
	add(esi, (int32_t)0x7D0);
	test(edx, edx);
	if (jz())
		goto loc_4788C4;
	cmp(edi, to32i(dword_4D9914));
	if (jnz())
		goto loc_4788C4;
	cmp(esi, to32i(dword_4D9918));
	if (jz())
		goto loc_4785A2;
loc_4788C4:
	xor_(eax, eax);
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = eax; //mov
	fild(to64i(esp+0x18));
	fdivr(to64f(dbl_4CE850));
	edx = 1; //mov
	to32i(esp) = esi; //mov
	push32(eax);
	to32i(esp+8) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ecx, ecx);
	push32(eax);
	xor_(ebx, ebx);
	eax = to32i(dword_55797E+2); //mov
	push32(ecx);
	fadd(to64f(dbl_4CE858));
	sar(eax, (int32_t)0x10);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	goto loc_4785A2;
}
Fn(void) Game::_sub_47895C()
{
	static const void *const off_478920[] = {
		&&loc_478A3F,
		&&loc_478A3F,
		&&loc_478AD4,
		&&loc_478A3F,
		&&loc_478AE6,
		&&loc_478A3F,
		&&loc_478A3F,
		&&loc_478AFF,
		&&loc_478AF8,
		&&loc_478A3F,
		&&loc_478A3F,
		&&loc_478A3F,
		&&loc_478AE6,
		&&loc_478A3F,
		&&loc_478AF8,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	edx = eax; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	and_(al, (int8_t)0xF8);
	ebp = eax; //mov
	eax = to32i(edx+0x664); //mov
	and_(al, (int8_t)0xF8);
	shl(eax, (int32_t)7);
	ecx = to32i(dword_4D992C); //mov
	neg(eax);
	add(eax, ecx);
	sar(eax, (int32_t)1);
	and_(al, (int8_t)0xF8);
	cmp(eax, (int32_t)0xFFFFD8F0);
	if (jge())
		goto loc_478995;
	eax = 0xFFFFD8F0; //mov
loc_478995:
	cmp(eax, (int32_t)0x2710);
	if (jle())
		goto loc_4789A1;
	eax = 0x2710; //mov
loc_4789A1:
	ebx = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_4789A9;
	xor_(ebx, eax);
loc_4789A9:
	to32i(dword_4D992C) = ebx; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_478AC4;
	edi = ebx; //mov
loc_4789B9:
	eax = to32i(edx+0x668); //mov
	sar(eax, (int32_t)1);
	esi = to32i(dword_4D9928); //mov
	neg(eax);
	add(eax, esi);
	sar(eax, (int32_t)1);
	cmp(eax, (int32_t)0xFFFFFF9C);
	if (jge())
		goto loc_4789D7;
	eax = 0xFFFFFF9C; //mov
loc_4789D7:
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_4789E1;
	eax = 0x64; //mov
loc_4789E1:
	esi = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_4789E9;
	xor_(esi, eax);
loc_4789E9:
	cl = to8i(dword_4D9904); //mov
	sar(ebp, cl);
	and_(ebp, (int32_t)0xFFFFFFF8);
	ecx = ebp; //mov
	shr(ecx, (int32_t)2);
	add(ecx, esi);
	shr(ecx, (int32_t)1);
	to32i(dword_4D9928) = esi; //mov
	cmp(ecx, (int32_t)0x64);
	if (jle())
		goto loc_478A0D;
	ecx = 0x64; //mov
loc_478A0D:
	ebp = to32i(edx+0x324); //mov
	eax = ecx; //mov
	cmp(ebp, (int32_t)0x10000);
	if (jle())
		goto loc_478A20;
	eax = (int32_t)(intptr_t)(ecx-0xA); //lea
loc_478A20:
	test(eax, eax);
	if (jl())
		goto loc_478ACD;
	edx = eax; //mov
loc_478A2A:
	ecx = to32i(dword_4D98F4); //mov
	dec(ecx);
	eax = edx; //mov
	cmp(ecx, (int32_t)0xE);
	if (ja())
		goto loc_478A3F;
	goto *off_478920[ecx];
loc_478A3F:
	edx = eax; //mov
	to32i(esp+0x18) = ebx; //mov
	to32i(esp+0x1C) = edi; //mov
	to32i(esp+0x20) = edi; //mov
	shl(eax, (int32_t)2);
	to32i(esp+0x24) = edi; //mov
	sub(eax, edx);
	to32i(esp+0x28) = edi; //mov
	shl(eax, (int32_t)3);
	xor_(ecx, ecx);
	add(eax, edx);
	xor_(ebx, ebx);
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
	to32i(esp+4) = eax; //mov
	to32i(esp+8) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x10) = eax; //mov
	sub(edx, esi);
	xor_(eax, eax);
	shl(edx, (int32_t)3);
	to32i(esp+0x14) = eax; //mov
	push32(eax);
	to32i(esp+0x30) = eax; //mov
	add(esi, edx);
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	shl(esi, (int32_t)2);
	push32(eax);
	xor_(edx, edx);
	eax = to32i(dword_557982); //mov
	push32(edx);
	edx = 1; //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x10) = esi; //mov
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to16i(word_4D991C) = 1; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478AC4:
	edi = ebx; //mov
	neg(edi);
	goto loc_4789B9;
loc_478ACD:
	xor_(edx, edx);
	goto loc_478A2A;
loc_478AD4:
	eax = (int32_t)(intptr_t)(edx-0xA); //lea
	test(eax, eax);
	if (jge())
		goto loc_478A3F;
	xor_(eax, eax);
	goto loc_478A3F;
loc_478AE6:
	sub(eax, (int32_t)0x14);
	test(eax, eax);
	if (jge())
		goto loc_478A3F;
	xor_(eax, eax);
	goto loc_478A3F;
loc_478AF8:
	sub(eax, (int32_t)0x1E);
	test(eax, eax);
	if (jl())
		goto loc_478B06;
loc_478AFF:
	neg(eax);
	goto loc_478A3F;
loc_478B06:
	xor_(eax, eax);
	neg(eax);
	goto loc_478A3F;
}
Fn(void) Game::_sub_478B10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	edx = eax; //mov
	bl = to8i(byte_4D9924); //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_478B60;
	cmp(to8i(byte_4D9924), (int8_t)0x64);
	if (jz())
		goto loc_478B6A;
	ecx = to32i(edx+0x2B8); //mov
	cmp(ecx, (int32_t)0x1999);
	if (jl())
		goto loc_478B60;
	al = to8i(edx+0x2DA); //mov
	to8i(byte_4D9924) = al; //mov
	cmp(al, (int8_t)2);
	if (jnb())
		goto loc_478BD0;
	cmp(al, (int8_t)1);
	if (jz())
		goto loc_478B60;
	cmp(ecx, (int32_t)0x10000);
	if (jg())
		goto loc_478B77;
loc_478B60:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478B6A:
	al = to8i(edx+0x2DA); //mov
	to8i(byte_4D9924) = al; //mov
	goto loc_478B60;
loc_478B77:
	ebx = 0x20; //mov
	esi = 0x1388; //mov
	eax = 0x9C40; //mov
	edx = 1; //mov
	xor_(edi, edi);
	xor_(ecx, ecx);
	to32i(dword_4D9908) = ebx; //mov
	push32(edi);
	to32i(esp+4) = esi; //mov
	to32i(esp+0x10) = eax; //mov
	push32(edi);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	to32i(esp+0xC) = edi; //mov
	push32(eax);
	xor_(ebx, ebx);
	eax = to32i(dword_55797E+2); //mov
	push32(edi);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x18) = edi; //mov
	esp -= 4; _sub_4225C0(); esp += 4; //call
	to32i(dword_4D9910) = 1; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478BD0:
	cmp(bl, al);
	if (jbe())
		goto loc_478C14;
	to32i(esp+0x18) = 0xB5; //mov
loc_478BDC:
	edi = to32i(edx+0x2F0); //mov
	cmp(edi, (int32_t)0x7D0);
	if (jge())
		goto loc_478C1E;
	edx = 0x64; //mov
	eax = 0x1068; //mov
	to32i(esp+0x1C) = edx; //mov
	to32i(esp) = eax; //mov
loc_478BFB:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_4781F0(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478C14:
	to32i(esp+0x18) = 1; //mov
	goto loc_478BDC;
loc_478C1E:
	cmp(edi, (int32_t)0xBB8);
	if (jge())
		goto loc_478C39;
	ebp = 0x96; //mov
	edi = 0x1450; //mov
	to32i(esp+0x1C) = ebp; //mov
	to32i(esp) = edi; //mov
	goto loc_478BFB;
loc_478C39:
	cmp(edi, (int32_t)0xFA0);
	if (jge())
		goto loc_478C54;
	esi = 0xC8; //mov
	ebx = 0x1838; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp) = ebx; //mov
	goto loc_478BFB;
loc_478C54:
	ecx = 0xFA; //mov
	edx = 0x1C20; //mov
	to32i(esp+0x1C) = ecx; //mov
	to32i(esp) = edx; //mov
	goto loc_478BFB;
}
Fn(void) Game::_sub_478C70()
{
	sub(esp, (int32_t)0x20);
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_478C80;
	add(esp, (int32_t)0x20);
	return;
loc_478C80:
	push32(edx);
	push32(ecx);
	push32(ebx);
	edx = 0x1F40; //mov
	ecx = 0x5A; //mov
	ebx = 0x10E; //mov
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x28) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	to32i(esp+0x24) = ecx; //mov
	esp -= 4; _sub_4781F0(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	add(esp, (int32_t)0x20);
}
Fn(void) Game::_sub_478CC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = eax; //mov
	ebx = edx; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_478CDC;
loc_478CD4:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478CDC:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edx = to32i(edx+eax*4+0xC); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ecx+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x14); //mov
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edx = to32i(edx+eax*4+0xD); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ecx+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x14); //mov
	add(esi, eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	edx = to32i(edx+eax+0xE); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(ecx+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	test(eax, eax);
	if (jl())
		goto loc_478DA3;
loc_478D63:
	test(ebx, ebx);
	if (jle())
		goto loc_478DAB;
	to32i(esp+0x1C) = 0x5A; //mov
loc_478D6F:
	eax = ecx; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	cmp(eax, (int32_t)0x28);
	if (jle())
		goto loc_478DCF;
	ebx = 0xC8; //mov
	ecx = 0x2710; //mov
	to32i(esp+0x18) = ebx; //mov
	to32i(esp) = ecx; //mov
loc_478D8C:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_4781F0(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_478DA3:
	test(ebx, ebx);
	if (jz())
		goto loc_478D63;
	neg(ebx);
	goto loc_478D63;
loc_478DAB:
	if (jge())
		goto loc_478DB7;
	to32i(esp+0x1C) = 0x10E; //mov
	goto loc_478D6F;
loc_478DB7:
	eax = ecx; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	cmp(eax, (int32_t)5);
	if (jle())
		goto loc_478CD4;
	xor_(edx, edx);
	to32i(esp+0x1C) = edx; //mov
	goto loc_478D6F;
loc_478DCF:
	eax = ecx; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	cmp(eax, (int32_t)0x14);
	if (jle())
		goto loc_478DEE;
	edx = 0x12C; //mov
	eax = 0x2328; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp) = eax; //mov
	goto loc_478D8C;
loc_478DEE:
	push32(edi);
	ebp = 0x190; //mov
	edi = 0x1B58; //mov
	to32i(esp+0x1C) = ebp; //mov
	to32i(esp+4) = edi; //mov
	pop32(edi);
	goto loc_478D8C;
}
Fn(void) Game::_sub_478E10()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebx = to32i(esp+0x40); //mov
	ecx = edx; //mov
	esi = to32i(dword_51220C); //mov
	cmp(esi, to32i(eax+0x1E8));
	if (jnz())
		goto loc_478EEC;
	edx = eax; //mov
loc_478E31:
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_478EF3;
loc_478E3E:
	push32(edi);
	cmp(ebx, (int32_t)0x2000);
	if (jge())
		goto loc_478F03;
	ecx = 0x1F40; //mov
	eax = 0x28A; //mov
loc_478E55:
	to32i(esp+4) = ecx; //mov
	to32i(esp+0x1C) = eax; //mov
loc_478E5D:
	ebx = to32i(dword_4D98F8); //mov
	esi = to32i(dword_4D98F8); //mov
	eax = to32i(edx+0x9C); //mov
	ebp = to32i(edx+0x9C); //mov
	edi = eax; //mov
	add(ebx, eax);
	eax = to32i(edx+0x170); //mov
	sub(edi, esi);
	cmp(eax, ebp);
	if (jle())
		goto loc_478F6F;
	ecx = 1; //mov
loc_478E8E:
	eax = to32i(edx+0x178); //mov
	cmp(eax, to32i(edx+0xA4));
	if (jle())
		goto loc_478F76;
	eax = 1; //mov
loc_478EA5:
	ebp = to32i(edx+0x170); //mov
	esi = eax; //mov
	cmp(ebx, ebp);
	if (jge())
		goto loc_478F7D;
loc_478EB5:
	eax = 1; //mov
loc_478EBA:
	test(esi, esi);
	if (jz())
		goto loc_478FA4;
	test(eax, eax);
	if (jz())
		goto loc_478F8C;
	xor_(eax, eax);
loc_478ECC:
	to32i(esp+0x20) = eax; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	edx = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	esp -= 4; _sub_4781F0(); esp += 4; //call
	pop32(edi);
loc_478EE2:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	esp += 0x10; return;
loc_478EEC:
	edx = ecx; //mov
	goto loc_478E31;
loc_478EF3:
	eax = ecx; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_478EE2;
	goto loc_478E3E;
loc_478F03:
	cmp(ebx, (int32_t)0x5000);
	if (jge())
		goto loc_478F22;
	ebp = 0x2134; //mov
	edi = 0x1F4; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp+0x1C) = edi; //mov
	goto loc_478E5D;
loc_478F22:
	cmp(ebx, (int32_t)0x10000);
	if (jge())
		goto loc_478F41;
	esi = 0x2328; //mov
	ebx = 0x190; //mov
	to32i(esp+4) = esi; //mov
	to32i(esp+0x1C) = ebx; //mov
	goto loc_478E5D;
loc_478F41:
	cmp(ebx, (int32_t)0x100000);
	if (jge())
		goto loc_478F58;
	ecx = 0x251C; //mov
	eax = 0x15E; //mov
	goto loc_478E55;
loc_478F58:
	ebp = 0x2710; //mov
	edi = 0x15E; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp+0x1C) = edi; //mov
	goto loc_478E5D;
loc_478F6F:
	xor_(ecx, ecx);
	goto loc_478E8E;
loc_478F76:
	xor_(eax, eax);
	goto loc_478EA5;
loc_478F7D:
	cmp(edi, ebp);
	if (jg())
		goto loc_478EB5;
	xor_(eax, eax);
	goto loc_478EBA;
loc_478F8C:
	test(ecx, ecx);
	if (jz())
		goto loc_478F9A;
	eax = 0x2D; //mov
	goto loc_478ECC;
loc_478F9A:
	eax = 0x13B; //mov
	goto loc_478ECC;
loc_478FA4:
	test(eax, eax);
	if (jz())
		goto loc_478FB2;
	eax = 0xB4; //mov
	goto loc_478ECC;
loc_478FB2:
	test(ecx, ecx);
	if (jz())
		goto loc_478FC0;
	eax = 0x87; //mov
	goto loc_478ECC;
loc_478FC0:
	eax = 0xE1; //mov
	goto loc_478ECC;
}
Fn(void) Game::_sub_478FD0()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x20);
	esi = eax; //mov
	edi = edx; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_478FEA;
loc_478FE4:
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(esi);
	return;
loc_478FEA:
	eax = esi; //mov
	esp -= 4; _sub_478140(); esp += 4; //call
	ebx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_478FE4;
	esi = 0x258; //mov
	sar(eax, (int32_t)1);
	sub(esi, eax);
	to32i(esp+0x18) = esi; //mov
	cmp(esi, (int32_t)0xC8);
	if (jnb())
		goto loc_479014;
	to32i(esp+0x18) = 0xC8; //mov
loc_479014:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, (int32_t)0x2134);
	to32i(esp) = eax; //mov
	cmp(eax, (int32_t)0x2710);
	if (jle())
		goto loc_47902F;
	to32i(esp) = 0x2710; //mov
loc_47902F:
	test(edx, edx);
	if (jle())
		goto loc_47906F;
	to32i(esp+0x1C) = 0x1E; //mov
loc_47903B:
	test(edi, edi);
	if (jnz())
		goto loc_47905A;
	eax = 0x1964; //mov
	shl(ebx, (int32_t)2);
	sub(eax, ebx);
	ebx = to32i(esp+0x18); //mov
	sub(ebx, (int32_t)0x15E);
	to32i(esp) = eax; //mov
	to32i(esp+0x18) = ebx; //mov
loc_47905A:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_4781F0(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(esi);
	return;
loc_47906F:
	to32i(esp+0x1C) = 0x14A; //mov
	goto loc_47903B;
}
Fn(void) Game::_sub_479080()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47908A;
	return;
loc_47908A:
	push32(ecx);
	esp -= 4; _sub_4781C0(); esp += 4; //call
	xor_(ecx, ecx);
	esp -= 4; _sub_478190(); esp += 4; //call
	to32i(dword_5579E4) = ecx; //mov
	to32i(dword_4D9920) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4790E0()
{
	static const void *const off_4790B0[] = {
		&&loc_47914A,
		&&loc_47914A,
		&&loc_479190,
		&&loc_479190,
		&&loc_479190,
		&&loc_479190,
		&&loc_47914A,
		&&loc_47914A,
		&&loc_479190,
		&&loc_479190,
		&&loc_47914A,
		&&loc_479190,
	};
	push32(ebx);
	push32(ebp);
	esp -= 4; _sub_4791B4(); esp += 4; //call
	ebx = to32i(dword_511D08+eax*4); //mov
	esp -= 4; _sub_4780C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_479185;
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jz())
		goto loc_479185;
	cmp(to8i(dword_512ED4), (int8_t)0);
	if (jz())
		goto loc_479185;
	push32(edx);
	push32(ecx);
	edx = to32i(ebx+0x108); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	to32i(dword_4D98F8) = eax; //mov
	eax = to32i(ebx+0x21C); //mov
	ecx = 1; //mov
	eax = to32i(eax); //mov
	to32i(dword_4D98F0) = ecx; //mov
	cmp(eax, (int32_t)0xB);
	if (ja())
		goto loc_479190;
	goto *off_4790B0[eax];
loc_47914A:
	push32(edi);
	xor_(edi, edi);
	to32i(dword_4D9904) = edi; //mov
	pop32(edi);
loc_479154:
	esp -= 4; _sub_4791B4(); esp += 4; //call
	ecx = 0xA; //mov
	eax = to32i(dword_511D08+eax*4); //mov
	edx = (int32_t)(intptr_t)sub_478360; //mov
	to32i(dword_4D990C) = eax; //mov
	ebx = eax; //mov
	eax = to32i(dword_540F54); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	esp -= 4; _sub_479080(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
	pop32(ebp);
	pop32(ebx);
	return;
loc_479185:
	xor_(ebp, ebp);
	to32i(dword_4D98F0) = ebp; //mov
	pop32(ebp);
	pop32(ebx);
	return;
loc_479190:
	to32i(dword_4D9904) = 1; //mov
	goto loc_479154;
}
Fn(void) Game::_sub_4791B4()
{
	static const void *const off_4791A0[] = {
		&&loc_4791CA,
		&&loc_4791D6,
		&&loc_4791CA,
		&&loc_4791CA,
		&&loc_4791CA,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	eax = to32i(dword_512208); //mov
	xor_(ebx, ebx);
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_4791D0;
	goto *off_4791A0[eax];
loc_4791CA:
	ebx = to32i(dword_51220C); //mov
loc_4791D0:
	eax = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4791D6:
	xor_(edx, edx);
	xor_(eax, eax);
loc_4791DA:
	ecx = to32i(off_4D201C+edx); //mov
	ecx = to32i(ecx); //mov
	and_(ecx, (int32_t)0xFF);
	cmp(ecx, (int32_t)3);
	if (jnz())
		goto loc_4791F8;
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)0x14);
	if (jge())
		goto loc_4791D0;
	goto loc_4791DA;
loc_4791F8:
	cmp(eax, (int32_t)9);
	if (jle())
		goto loc_47920F;
	ecx = 1; //mov
	ebx = ecx; //mov
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)0x14);
	if (jge())
		goto loc_4791D0;
	goto loc_4791DA;
loc_47920F:
	xor_(ecx, ecx);
	ebx = ecx; //mov
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)0x14);
	if (jge())
		goto loc_4791D0;
	goto loc_4791DA;
}
Fn(void) Game::_sub_479220()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47922A;
	return;
loc_47922A:
	eax = 0x10; //mov
	_sub_422E90(); return; //jmp
}
Fn(void) Game::_sub_479240()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47924A;
	return;
loc_47924A:
	eax = 0x10; //mov
	_sub_422EF0(); return; //jmp
}
Fn(void) Game::_sub_479260()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47926A;
	return;
loc_47926A:
	esp -= 4; _sub_479080(); esp += 4; //call
	eax = 0x10; //mov
	esp -= 4; _sub_422F60(); esp += 4; //call
	_sub_479220(); return; //jmp
}
Fn(void) Game::_sub_479280()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_47928A;
	return;
loc_47928A:
	eax = 0x10; //mov
	_sub_422F60(); return; //jmp
}
Fn(void) Game::_sub_4792A0()
{
	cmp(to32i(dword_4D98EC), (int32_t)0);
	if (jnz())
		goto loc_4792AA;
	return;
loc_4792AA:
	eax = 0x10; //mov
	_sub_422FC0(); return; //jmp
}
Fn(void) Game::_sub_4792C0()
{
	push32(edx);
	edx = eax; //mov
	eax = 0x10; //mov
	esp -= 4; _sub_422D60(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4792D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	to8i(esp) = 0xFF; //mov
	eax = to32i(dword_55797E+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4228F0(); esp += 4; //call
	push32(0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = to32i(dword_55797E+2); //mov
	push32(0);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4225C0(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_479310()
{
	push32(edx);
	edx = eax; //mov
	eax = 0x10; //mov
	esp -= 4; _sub_422D60(); esp += 4; //call
	cmp(to16i(word_4D991E), (int16_t)0);
	if (jz())
		goto loc_479329;
	pop32(edx);
	return;
loc_479329:
	eax = to32i(dword_55797E+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4229B0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_479340()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0x20);
	edx = 0xFFFFFF; //mov
	ecx = 0x1388; //mov
	edi = 0x72E4; //mov
	xor_(ebx, ebx);
	xor_(ah, ah);
	to32i(esp+0x18) = edx; //mov
	to32i(esp) = ecx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+0xC) = edi; //mov
	dx = to16i(word_4D991E); //mov
	to8i(esp+0x1C) = ah; //mov
	test(dx, dx);
	if (jz())
		goto loc_4793AB;
	al = 3; //mov
loc_47937F:
	push32(0);
	edx = (int32_t)(intptr_t)(esp+0x20); //lea
	ecx = (int32_t)(intptr_t)(esp+0x1C); //lea
	push32(edx);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ebx, ebx);
	push32(edx);
	edx = al; //movsx
	eax = to32i(dword_55797E+2); //mov
	push32(0);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4225C0(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4793AB:
	al = 1; //mov
	goto loc_47937F;
}
Fn(void) Game::_sub_4793B0()
{
	push32(edx);
	eax = to32i(dword_5637F4); //mov
	edx = to32i(dword_4D98EC); //mov
	test(edx, edx);
	if (jz())
		goto loc_4793C7;
	eax = 2; //mov
	pop32(edx);
	return;
loc_4793C7:
	esp -= 4; _sub_442240(); esp += 4; //call
	esp -= 4; _sub_423020(); esp += 4; //call
	to32i(dword_4D98EC) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_47942A;
	esp -= 4; _sub_478240(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_479433;
	push32(ebx);
	esp -= 4; _sub_4421F0(); esp += 4; //call
	eax = 0x10; //mov
	dl = to8i(dword_512ED4); //mov
	esp -= 4; _sub_422D60(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_421BD0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_479422;
	edx = (int32_t)(intptr_t)aMicrosoft; //mov
	add(eax, (int32_t)9);
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_479422;
	to16i(word_4D991E) = 1; //mov
loc_479422:
	eax = 2; //mov
	pop32(ebx);
	pop32(edx);
	return;
loc_47942A:
	esp -= 4; _sub_4421F0(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
	return;
loc_479433:
	esp -= 4; _sub_4421F0(); esp += 4; //call
	to32i(dword_4D98EC) = edx; //mov
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_479510()
{
	static const void *const off_4794F0[] = {
		&&loc_479592,
		&&loc_479642,
		&&loc_47966F,
		&&loc_47969B,
	};
	static const void *const off_479500[] = {
		&&loc_4796D7,
		&&loc_47971A,
		&&loc_479742,
		&&loc_479769,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x70);
	ebp = esi; //mov
	edi = (int32_t)(intptr_t)(esp+0x58); //lea
	esi = (int32_t)(intptr_t)dword_479480; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x48); //lea
	esi = (int32_t)(intptr_t)dword_479490; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = (int32_t)(intptr_t)dword_4794A0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 9; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4794C4; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_46FD80(); esp += 4; //call
	ecx = 0x15; //mov
	xor_(eax, eax);
	esp -= 4; _sub_479840(); esp += 4; //call
	xor_(esi, esi);
	xor_(edi, edi);
loc_47956B:
	edx = to32i(dword_5227A0); //mov
	cmp(esi, edx);
	if (jnz())
		goto loc_479791;
	ebx = to32i(dword_5227A4); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4796C8;
	cmp(edx, (int32_t)3);
	if (ja())
		goto loc_4795C8;
	goto *off_4794F0[edi/4];
loc_479592:
	ecx = 0x14; //mov
	edx = 0xFFFFFFE1; //mov
	eax = 4; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_479840(); esp += 4; //call
	edx = to32i(dword_522790); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_47962F;
	ecx = 0x14; //mov
	eax = 9; //mov
	ebx = edx; //mov
loc_4795C3:
	esp -= 4; _sub_479840(); esp += 4; //call
loc_4795C8:
	inc(esi);
	add(edi, (int32_t)4);
	cmp(esi, (int32_t)4);
	if (jl())
		goto loc_47956B;
	ecx = to32i(dword_4D955C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_479613;
	edx = to32i(dword_540F48); //mov
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)3);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x88);
	if (jle())
		goto loc_4797F6;
	edx = 0x88; //mov
loc_479602:
	ecx = 0x14; //mov
	eax = 0x24; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_479840(); esp += 4; //call
loc_479613:
	esi = (int32_t)(intptr_t)(esp+0x68); //lea
	edi = ebp; //mov
	esp -= 4; _sub_46FCF0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x68); //lea
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47962F:
	ecx = 0x14; //mov
	ebx = 1; //mov
	eax = 5; //mov
	edx = ebx; //mov
	goto loc_4795C3;
loc_479642:
	ecx = 0x14; //mov
	eax = 4; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_479840(); esp += 4; //call
	ebx = 1; //mov
	eax = to32i(dword_522794); //mov
	ecx = 0x14; //mov
	edx = ebx; //mov
	eax = to32i(esp+eax*4+0x58); //mov
	goto loc_4795C3;
loc_47966F:
	ecx = 0x14; //mov
	edx = 0x1F; //mov
	eax = 4; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_479840(); esp += 4; //call
	ecx = 0x14; //mov
	ebx = 1; //mov
	eax = 6; //mov
	edx = ebx; //mov
	goto loc_4795C3;
loc_47969B:
	ecx = 0x14; //mov
	eax = 2; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_479840(); esp += 4; //call
	ebx = 1; //mov
	eax = to32i(dword_52279C); //mov
	ecx = 0x14; //mov
	edx = ebx; //mov
	eax = to32i(esp+eax*4+0x24); //mov
	goto loc_4795C3;
loc_4796C8:
	cmp(edx, (int32_t)3);
	if (ja())
		goto loc_4795C8;
	goto *off_479500[edi/4];
loc_4796D7:
	ecx = 0x14; //mov
	edx = 0xFFFFFFE1; //mov
	eax = 3; //mov
	esp -= 4; _sub_479840(); esp += 4; //call
	cmp(to32i(dword_522790), (int32_t)1);
	if (jnz())
		goto loc_479707;
	ecx = 0x14; //mov
	eax = 9; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_4795C3;
loc_479707:
	ecx = 0x14; //mov
	eax = 5; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_4795C3;
loc_47971A:
	ecx = 0x14; //mov
	eax = 3; //mov
	xor_(edx, edx);
	esp -= 4; _sub_479840(); esp += 4; //call
	ecx = 0x14; //mov
	eax = to32i(dword_522794); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = to32i(esp+eax*4+0x58); //mov
	goto loc_4795C3;
loc_479742:
	ecx = 0x14; //mov
	edx = 0x1F; //mov
	eax = 3; //mov
	esp -= 4; _sub_479840(); esp += 4; //call
	ecx = 0x14; //mov
	eax = 6; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_4795C3;
loc_479769:
	ecx = 0x14; //mov
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_479840(); esp += 4; //call
	ecx = 0x14; //mov
	eax = to32i(dword_52279C); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = to32i(esp+eax*4+0x24); //mov
	goto loc_4795C3;
loc_479791:
	cmp(esi, (int32_t)1);
	if (jnb())
		goto loc_4797BE;
	test(esi, esi);
	if (jnz())
		goto loc_4795C8;
	cmp(to32i(dword_522790), (int32_t)1);
	if (jnz())
		goto loc_4795C8;
	ecx = 0x14; //mov
	eax = 8; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_4795C3;
loc_4797BE:
	if (jbe())
		goto loc_4797DF;
	cmp(esi, (int32_t)3);
	if (jnz())
		goto loc_4795C8;
	ecx = 0x14; //mov
	eax = to32i(dword_52279C); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = to32i(esp+eax*4); //mov
	goto loc_4795C3;
loc_4797DF:
	ecx = 0x14; //mov
	eax = to32i(dword_522794); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = to32i(esp+eax*4+0x48); //mov
	goto loc_4795C3;
loc_4797F6:
	edx = eax; //mov
	goto loc_479602;
}
Fn(void) Game::_sub_479800()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = esi; //mov
	esp -= 4; _sub_46FD80(); esp += 4; //call
	ecx = 0x15; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esi = esp; //mov
	esp -= 4; _sub_479840(); esp += 4; //call
	edi = ebp; //mov
	esp -= 4; _sub_46FCF0(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_479840()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	edx = 0x24; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47985F;
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	return;
loc_47985F:
	eax = to32i(esp); //mov
	to32i(eax+4) = ecx; //mov
	eax = to32i(esp); //mov
	edx = edi; //mov
	to32i(eax+0x20) = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = to32i(dword_4D9958+eax*8); //mov
	ecx = to32i(esp); //mov
	add(edx, esi);
	to32i(ecx+8) = edx; //mov
	edx = to32i(dword_4D995C+eax*8); //mov
	ecx = to32i(esp); //mov
	add(edx, ebx);
	to32i(ecx+0xC) = edx; //mov
	edx = to32i(esp); //mov
	ecx = to32i(dword_4D9950+eax*8); //mov
	to32i(edx+0x10) = ecx; //mov
	edx = to32i(esp); //mov
	ecx = to32i(dword_4D9954+eax*8); //mov
	to32i(edx+0x14) = ecx; //mov
	edx = to32i(esp); //mov
	ecx = to32i(dword_4D9948+eax*8); //mov
	to32i(edx+0x18) = ecx; //mov
	edx = to32i(dword_4D994C+eax*8); //mov
	eax = to32i(esp); //mov
	to32i(eax+0x1C) = edx; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4798E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x3C);
	to32i(esp+0xC) = esi; //mov
	esp -= 4; _sub_44B2A0(); esp += 4; //call
	edx = 0x35; //mov
	ecx = 0x44; //mov
	ebx = to32i(dword_5118A0); //mov
	to32i(esp+0x24) = edx; //mov
	edx = to32i(eax+0x14); //mov
	to32i(esp+0x30) = ecx; //mov
	shl(edx, (int32_t)7);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_4DA110) = eax; //mov
	eax = to32i(ecx+0x9C); //mov
	sar(eax, (int32_t)0x13);
	to32i(esp+0x20) = eax; //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xA4); //mov
	neg(ebx);
	sar(eax, (int32_t)0x13);
	to32i(esp+0x20) = ebx; //mov
	to32i(esp+0x1C) = eax; //mov
	esi = eax; //mov
	eax = ecx; //mov
	neg(esi);
	esp -= 4; _sub_47A0F0(); esp += 4; //call
	eax = to32i(dword_55E300); //mov
	to32i(esp+0x1C) = esi; //mov
	ecx = (int32_t)(intptr_t)(eax+0x100); //lea
	shl(ch, (int8_t)7);
	sbb(edx, edx);
	add(ch, ch);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	ebx = eax; //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(dword_55E300); //mov
	esi = to32i(esp+0x20); //mov
	shl(ah, (int8_t)7);
	sbb(edx, edx);
	add(ah, ah);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	add(esi, to32i(dword_4D9D10));
	to32i(esp+0x2C) = eax; //mov
	imul32(eax, esi);
	edi = 0x7E; //mov
	edx = (int32_t)(intptr_t)dword_4D9D10; //mov
	to32i(esp+0x34) = edi; //mov
	add(edx, (int32_t)4);
	edi = to32i(esp+0x1C); //mov
	to32i(esp+0x38) = edx; //mov
	add(edi, to32i(dword_4D9F10));
	imul32(ebx, edi);
	ebp = (int32_t)(intptr_t)dword_4D9F10; //mov
	ecx = (int32_t)(intptr_t)dword_55E44C; //mov
	add(ebp, (int32_t)4);
	edx = to32i(dword_512228); //mov
	sub(eax, ebx);
	xor_(edx, to32i(dword_51222C));
	sar(eax, (int32_t)0x10);
	test(edx, edx);
	if (jz())
		goto loc_479D4F;
	edx = 0x35; //mov
	sub(edx, eax);
	eax = edx; //mov
loc_479A00:
	imul32(edi, to32i(esp+0x2C));
	to32i(esp+0x14) = eax; //mov
	imul32(esi, to32i(esp+0x28));
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	edx = to32i(dword_512228); //mov
	sar(eax, (int32_t)0x10);
	test(edx, edx);
	if (jz())
		goto loc_479D57;
	add(eax, to32i(esp+0x30));
loc_479A26:
	ebx = (int32_t)(intptr_t)dword_4DA114; //mov
	to32i(esp+0x18) = eax; //mov
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)dword_4DA118; //mov
loc_479A36:
	edi = to32i(esp+0x14); //mov
	si = to8i(ebx); //movsx
	inc(ebx);
	add(edi, esi);
	inc(eax);
	to16i(ecx+8) = di; //mov
	edi = to32i(esp+0x18); //mov
	si = to8i(eax-1); //movsx
	add(ecx, (int32_t)0x14);
	add(edi, esi);
	inc(edx);
	to16i(ecx-0xA) = di; //mov
	cmp(edx, (int32_t)4);
	if (jl())
		goto loc_479A36;
	sub(ecx, (int32_t)0x50);
loc_479A61:
	eax = to32i(esp+0x38); //mov
	edx = to32i(esp+0x20); //mov
	esi = (int32_t)(intptr_t)(eax+4); //lea
	edi = to32i(eax); //mov
	eax = ebp; //mov
	ebx = to32i(esp+0x1C); //mov
	to32i(esp+0x38) = esi; //mov
	esi = to32i(eax); //mov
	add(edx, edi);
	add(ebx, esi);
	esi = to32i(esp+0x2C); //mov
	imul32(esi, edx);
	edi = to32i(dword_51222C); //mov
	xor_(edi, to32i(dword_512228));
	eax = to32i(esp+0x28); //mov
	imul32(eax, ebx);
	sub(esi, eax);
	add(ebp, (int32_t)4);
	sar(esi, (int32_t)0x10);
	test(edi, edi);
	if (jz())
		goto loc_479D64;
	eax = to32i(esp+0x24); //mov
	sub(eax, esi);
	esi = eax; //mov
loc_479AB0:
	eax = to32i(esp+0x2C); //mov
	imul32(eax, ebx);
	imul32(edx, to32i(esp+0x28));
	add(eax, edx);
	edi = to32i(dword_512228); //mov
	sar(eax, (int32_t)0x10);
	test(edi, edi);
	if (jz())
		goto loc_479D6D;
	add(eax, to32i(esp+0x30));
loc_479AD3:
	edx = (int32_t)(intptr_t)dword_4DA114; //mov
	ebx = (int32_t)(intptr_t)dword_4DA118; //mov
	to32i(esp+8) = eax; //mov
	xor_(eax, eax);
loc_479AE3:
	di = to8i(edx); //movsx
	add(edi, esi);
	inc(ebx);
	to16i(ecx+0xC) = di; //mov
	inc(edx);
	di = to8i(ebx-1); //movsx
	add(ecx, (int32_t)0x14);
	add(edi, to32i(esp+8));
	inc(eax);
	to16i(ecx-6) = di; //mov
	cmp(eax, (int32_t)4);
	if (jl())
		goto loc_479AE3;
	ebx = (int32_t)(intptr_t)dword_4DA118; //mov
	edx = (int32_t)(intptr_t)dword_4DA114; //mov
	xor_(eax, eax);
loc_479B11:
	di = to8i(edx); //movsx
	add(edi, esi);
	inc(ebx);
	to16i(ecx+8) = di; //mov
	inc(edx);
	di = to8i(ebx-1); //movsx
	add(ecx, (int32_t)0x14);
	add(edi, to32i(esp+8));
	inc(eax);
	to16i(ecx-0xA) = di; //mov
	cmp(eax, (int32_t)4);
	if (jl())
		goto loc_479B11;
	ebx = to32i(esp+0x34); //mov
	dec(ebx);
	sub(ecx, (int32_t)0x50);
	to32i(esp+0x34) = ebx; //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_479A61;
	ebx = to32i(esp+0x20); //mov
	edi = to32i(dword_4D9D10); //mov
	eax = to32i(esp+0x2C); //mov
	add(ebx, edi);
	imul32(eax, ebx);
	edx = to32i(esp+0x1C); //mov
	ebp = to32i(dword_4D9F10); //mov
	esi = to32i(dword_51222C); //mov
	edi = to32i(dword_512228); //mov
	add(edx, ebp);
	xor_(edi, esi);
	esi = to32i(esp+0x28); //mov
	imul32(esi, edx);
	sub(eax, esi);
	sar(eax, (int32_t)0x10);
	test(edi, edi);
	if (jz())
		goto loc_479D7A;
	esi = to32i(esp+0x24); //mov
	sub(esi, eax);
loc_479B8F:
	imul32(edx, to32i(esp+0x2C));
	eax = to32i(esp+0x28); //mov
	imul32(eax, ebx);
	add(eax, edx);
	ebp = to32i(dword_512228); //mov
	sar(eax, (int32_t)0x10);
	test(ebp, ebp);
	if (jz())
		goto loc_479D85;
	add(eax, to32i(esp+0x30));
loc_479BB2:
	ebx = (int32_t)(intptr_t)dword_4DA114; //mov
	edx = (int32_t)(intptr_t)dword_4DA118; //mov
	to32i(esp+8) = eax; //mov
	xor_(eax, eax);
loc_479BC2:
	di = to8i(ebx); //movsx
	add(edi, esi);
	inc(edx);
	to16i(ecx+0xC) = di; //mov
	inc(ebx);
	di = to8i(edx-1); //movsx
	add(ecx, (int32_t)0x14);
	add(edi, to32i(esp+8));
	inc(eax);
	to16i(ecx-6) = di; //mov
	cmp(eax, (int32_t)4);
	if (jl())
		goto loc_479BC2;
	ebx = to32i(esp+0x20); //mov
	eax = to32i(dword_5118A4); //mov
	ebp = to32i(esp+0x1C); //mov
	esi = to32i(dword_4D9D10); //mov
	edx = to32i(eax+0xF); //mov
	edi = to32i(eax+0x11); //mov
	add(ebx, esi);
	sar(edx, (int32_t)0x18);
	eax = to32i(dword_4D9F10); //mov
	shl(edx, (int32_t)9);
	add(ebp, eax);
	sar(edx, (int32_t)0xD);
	eax = to32i(esp+0x2C); //mov
	add(ebx, edx);
	imul32(eax, ebx);
	sar(edi, (int32_t)0x18);
	shl(edi, (int32_t)9);
	sar(edi, (int32_t)0xD);
	to32i(esp+0x10) = edx; //mov
	add(ebp, edi);
	edx = to32i(esp+0x28); //mov
	imul32(edx, ebp);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	imul32(ebx, to32i(esp+0x28));
	edx = to32i(esp+0x2C); //mov
	imul32(edx, ebp);
	add(edx, ebx);
	esi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = to32i(dword_51222C); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(dword_512228); //mov
	xor_(eax, ebx);
	if (jz())
		goto loc_479D92;
	eax = to32i(esp+0x24); //mov
	sub(eax, esi);
loc_479C77:
	esi = to32i(dword_512228); //mov
	to16i(ecx+8) = ax; //mov
	test(esi, esi);
	if (jz())
		goto loc_479D9D;
	eax = to32i(esp+0x30); //mov
	add(eax, to32i(esp+8));
loc_479C91:
	to16i(ecx+0xA) = ax; //mov
	ebp = to32i(esp+0x20); //mov
	ebx = to32i(dword_4D9D10); //mov
	esi = to32i(esp+0x10); //mov
	add(ebp, ebx);
	edx = to32i(esp+0x2C); //mov
	sub(ebp, esi);
	imul32(edx, ebp);
	eax = to32i(dword_4D9F10); //mov
	ebx = to32i(esp+0x1C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x28); //mov
	sub(ebx, edi);
	imul32(eax, ebx);
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	imul32(ebp, to32i(esp+0x28));
	edx = to32i(esp+0x2C); //mov
	imul32(edx, ebx);
	add(edx, ebp);
	esi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = to32i(dword_51222C); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(dword_512228); //mov
	xor_(eax, ebx);
	if (jz())
		goto loc_479DAA;
	eax = to32i(esp+0x24); //mov
	sub(eax, esi);
loc_479D0B:
	esi = to32i(dword_512228); //mov
	to16i(ecx+0xC) = ax; //mov
	test(esi, esi);
	if (jz())
		goto loc_479DB5;
	eax = to32i(esp+0x30); //mov
	add(eax, to32i(esp+8));
loc_479D25:
	edx = (int32_t)(intptr_t)dword_560C4C; //mov
	edi = to32i(esp+0xC); //mov
	esi = esp; //mov
	to16i(ecx+0xE) = ax; //mov
	eax = (int32_t)(intptr_t)dword_55E44C; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = eax; //mov
	movsd();
	movsd();
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x3C);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_479D4F:
	add(eax, (int32_t)0x35);
	goto loc_479A00;
loc_479D57:
	edx = to32i(esp+0x30); //mov
	sub(edx, eax);
	eax = edx; //mov
	goto loc_479A26;
loc_479D64:
	add(esi, to32i(esp+0x24));
	goto loc_479AB0;
loc_479D6D:
	edx = to32i(esp+0x30); //mov
	sub(edx, eax);
	eax = edx; //mov
	goto loc_479AD3;
loc_479D7A:
	esi = to32i(esp+0x24); //mov
	add(esi, eax);
	goto loc_479B8F;
loc_479D85:
	edx = to32i(esp+0x30); //mov
	sub(edx, eax);
	eax = edx; //mov
	goto loc_479BB2;
loc_479D92:
	eax = to32i(esp+0x24); //mov
	add(eax, esi);
	goto loc_479C77;
loc_479D9D:
	eax = to32i(esp+0x30); //mov
	sub(eax, to32i(esp+8));
	goto loc_479C91;
loc_479DAA:
	eax = to32i(esp+0x24); //mov
	add(eax, esi);
	goto loc_479D0B;
loc_479DB5:
	eax = to32i(esp+0x30); //mov
	sub(eax, to32i(esp+8));
	goto loc_479D25;
}
Fn(void) Game::_sub_479DD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebx = to32i(dword_55E434); //mov
	to32i(esp+0x14) = esi; //mov
	edx = eax; //mov
	ecx = 0x35; //mov
	esi = 0x44; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	to32i(esp+0xC) = ecx; //mov
	add(eax, ebx);
	ecx = (int32_t)(intptr_t)dword_55BF60; //mov
	shl(eax, (int32_t)3);
	to32i(esp+0x10) = esi; //mov
	add(ecx, eax);
	eax = edx; //mov
	to32i(esp) = ecx; //mov
	esp -= 4; _sub_44B2A0(); esp += 4; //call
	edx = to32i(eax+0x9C); //mov
	to32i(esp+0x24) = eax; //mov
	sar(edx, (int32_t)0x13);
	eax = to32i(eax+0xA4); //mov
	to32i(esp+0x20) = edx; //mov
	edi = edx; //mov
	sar(eax, (int32_t)0x13);
	neg(edi);
	to32i(esp+0x1C) = eax; //mov
	ebp = eax; //mov
	eax = to32i(dword_55E300); //mov
	to32i(esp+0x20) = edi; //mov
	neg(ebp);
	ecx = (int32_t)(intptr_t)(eax+0x100); //lea
	shl(ch, (int8_t)7);
	sbb(edx, edx);
	add(ch, ch);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	to32i(esp+0x30) = eax; //mov
	eax = to32i(dword_55E300); //mov
	to32i(esp+0x1C) = ebp; //mov
	shl(ah, (int8_t)7);
	sbb(edx, edx);
	add(ah, ah);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	ebx = to32i(dword_55E434); //mov
	edx = to32i(dword_51222C); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(dword_512228); //mov
	xor_(ecx, ecx);
	xor_(eax, edx);
	to32i(esp+0x28) = ecx; //mov
	to32i(esp+0x18) = eax; //mov
	xor_(edx, edx);
loc_479EB2:
	esi = to32i(dword_511E44); //mov
	eax = (int32_t)(intptr_t)(ebx+1); //lea
	cmp(ecx, esi);
	if (jge())
		goto loc_47A011;
	edi = to32i(esp+0x24); //mov
	cmp(edi, to32i(dword_511CC8+edx));
	if (jz())
		goto loc_47A004;
	cmp(ebx, (int32_t)0x77);
	if (jl())
		goto loc_479EDA;
	xor_(eax, eax);
loc_479EDA:
	imul32(eax, 0x28);
	esi = (int32_t)(intptr_t)dword_55BF60; //mov
	add(esi, eax);
	imul32(eax, ebx, 0x28);
	ebp = 0x1E; //mov
	to32i(dword_55BF60+eax) = esi; //mov
	esi = to32i(dword_511CC8+edx); //mov
	to32i(dword_55BF64+eax) = ebp; //mov
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_479FDF;
	edi = 9; //mov
loc_479F10:
	to32i(dword_55BF74+eax) = edi; //mov
	to32i(dword_55BF70+eax) = edi; //mov
	esi = to32i(esi+0x60C); //mov
	esi = to32i(dword_560C6C+esi*4); //mov
	to32i(dword_55BF84+eax) = esi; //mov
	eax = to32i(dword_511CC8+edx); //mov
	edi = to32i(eax+0x9C); //mov
	esi = to32i(esp+0x20); //mov
	sar(edi, (int32_t)0x13);
	add(edi, esi);
	esi = to32i(esp+0x2C); //mov
	imul32(esi, edi);
	eax = to32i(eax+0xA4); //mov
	ebp = to32i(esp+0x1C); //mov
	sar(eax, (int32_t)0x13);
	add(eax, ebp);
	to32i(esp+8) = esi; //mov
	esi = to32i(esp+0x30); //mov
	imul32(esi, eax);
	ebp = to32i(esp+8); //mov
	sub(ebp, esi);
	esi = ebp; //mov
	imul32(edi, to32i(esp+0x30));
	imul32(eax, to32i(esp+0x2C));
	add(edi, eax);
	imul32(eax, ebx, 0x28);
	to32i(dword_55BF80+eax) = (int32_t)(intptr_t)dword_5588C8; //mov
	xor_(ebp, ebp);
	to32i(dword_55BF78+eax) = ebp; //mov
	ebp = 0x2C; //mov
	sar(esi, (int32_t)0x10);
	to32i(dword_55BF7C+eax) = ebp; //mov
	eax = to32i(esp+0x18); //mov
	sar(edi, (int32_t)0x10);
	test(eax, eax);
	if (jz())
		goto loc_479FE9;
	eax = 0x35; //mov
	sub(eax, esi);
	esi = (int32_t)(intptr_t)(eax-4); //lea
loc_479FB1:
	imul32(eax, ebx, 0x28);
	to32i(dword_55BF68+eax) = esi; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_479FEE;
	eax = (int32_t)(intptr_t)(edi+0x40); //lea
loc_479FC6:
	imul32(esi, ebx, 0x28);
	to32i(dword_55BF6C+esi) = eax; //mov
	cmp(ebx, (int32_t)0x77);
	if (jl())
		goto loc_479FFA;
	xor_(ebx, ebx);
	inc(ecx);
	add(edx, (int32_t)4);
	goto loc_479EB2;
loc_479FDF:
	edi = 6; //mov
	goto loc_479F10;
loc_479FE9:
	add(esi, (int32_t)0x31);
	goto loc_479FB1;
loc_479FEE:
	eax = 0x44; //mov
	sub(eax, edi);
	sub(eax, (int32_t)4);
	goto loc_479FC6;
loc_479FFA:
	inc(ebx);
	inc(ecx);
	add(edx, (int32_t)4);
	goto loc_479EB2;
loc_47A004:
	to32i(esp+0x28) = ecx; //mov
	inc(ecx);
	add(edx, (int32_t)4);
	goto loc_479EB2;
loc_47A011:
	edx = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(edx, ebx);
	xor_(edi, edi);
	ecx = (int32_t)(intptr_t)dword_5588C8; //mov
	to32i(dword_55BF60+edx*8) = edi; //mov
	ebp = 0x1E; //mov
	to32i(dword_55BF80+edx*8) = ecx; //mov
	ecx = to32i(esp+0xC); //mov
	to32i(dword_55BF64+edx*8) = ebp; //mov
	sub(ecx, (int32_t)4);
	esi = 9; //mov
	to32i(dword_55BF68+edx*8) = ecx; //mov
	ecx = to32i(esp+0x10); //mov
	to32i(dword_55BF70+edx*8) = esi; //mov
	sub(ecx, (int32_t)4);
	to32i(dword_55BF6C+edx*8) = ecx; //mov
	to32i(dword_55BF7C+edx*8) = 0x2C; //mov
	ecx = to32i(esp+0x28); //mov
	to32i(dword_55BF74+edx*8) = esi; //mov
	ecx = to32i(dword_511CC8+ecx*4); //mov
	to32i(dword_55BF78+edx*8) = edi; //mov
	ecx = to32i(ecx+0x60C); //mov
	ecx = to32i(dword_560C6C+ecx*4); //mov
	to32i(dword_55BF84+edx*8) = ecx; //mov
	cmp(ebx, (int32_t)0x77);
	if (jl())
		goto loc_47A0A2;
	xor_(eax, eax);
loc_47A0A2:
	ebx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_47A0DD;
	esi = (int32_t)(intptr_t)(eax-1); //lea
loc_47A0AB:
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(eax, esi);
	edx = (int32_t)(intptr_t)dword_55BF60; //mov
	shl(eax, (int32_t)3);
	edi = to32i(esp+0x14); //mov
	add(edx, eax);
	esi = esp; //mov
	to32i(esp+4) = edx; //mov
	movsd();
	movsd();
	eax = to32i(esp+0x14); //mov
	to32i(dword_55E434) = ebx; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47A0DD:
	esi = 0x77; //mov
	goto loc_47A0AB;
}
Fn(void) Game::_sub_47A0F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	edx = to32i(dword_5118A0); //mov
	eax = to32i(eax+0x14); //mov
	xor_(esi, esi);
	xor_(ebx, ebx);
	to32i(esp) = edx; //mov
	xor_(edx, edx);
loc_47A10D:
	imul32(edi, eax, 0x24);
	ecx = to32i(dword_5118A4); //mov
	add(ecx, edi);
	edi = to32i(ecx+0xC); //mov
	ecx = to32i(ecx+0xE); //mov
	inc(eax);
	sar(ecx, (int32_t)0x18);
	sar(edi, (int32_t)0x18);
	shl(ecx, (int32_t)9);
	shl(edi, (int32_t)9);
	add(ebx, ecx);
	ecx = to32i(esp); //mov
	add(esi, edi);
	cmp(eax, ecx);
	if (jge())
		goto loc_47A17B;
loc_47A136:
	inc(edx);
	cmp(edx, (int32_t)0x20);
	if (jl())
		goto loc_47A10D;
	edx = esi; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)5);
	sar(eax, (int32_t)5);
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	ebx = to32i(ebp+0x288); //mov
	edx = eax; //mov
	cmp(ebx, (int32_t)0x94);
	if (jl())
		goto loc_47A16C;
	add(eax, (int32_t)0x200);
	cmp(eax, (int32_t)0x200);
	if (jl())
		goto loc_47A16C;
	sub(eax, (int32_t)0x400);
loc_47A16C:
	to32i(dword_55E300) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47A17B:
	xor_(eax, eax);
	goto loc_47A136;
}
Fn(void) Game::_sub_47A180()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ebp = esi; //mov
	edi = esp; //mov
	push32(dword_557D14);
	ecx = 0x87; //mov
	esi = (int32_t)(intptr_t)dword_55BF50; //mov
	ebx = 0x6C; //mov
	xor_(edx, edx);
	movsd();
	movsd();
	xor_(eax, eax);
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_47A220(); esp += 4; //call
	edx = to32i(esp+4); //mov
	push32(edx);
	ecx = to32i(esp+4); //mov
	push32(ecx);
	ebx = to32i(esp+0x14); //mov
	esi = to32i(esp+0x10); //mov
	push32(ebx);
	edx = 5; //mov
	ecx = 0x7F; //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = 0x61; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	push32(dword_557D00);
	esi = (int32_t)(intptr_t)(esp+0x14); //lea
	eax = edx; //mov
	esp -= 4; _sub_47A220(); esp += 4; //call
	edi = to32i(esp+0x14); //mov
	push32(edi);
	eax = to32i(esp+0x14); //mov
	push32(eax);
	edx = to32i(esp+0x14); //mov
	push32(edx);
	ecx = to32i(esp+0x14); //mov
	push32(ecx);
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = ebp; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+8); //lea
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47A220()
{
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = esi; //mov
	esi = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(eax+4) = 0x18; //mov
	to16i(eax+8) = 0; //mov
	to32i(eax) = 0; //mov
	to32i(esp) = eax; //mov
	to16i(eax+0xA) = si; //mov
	edi = ebp; //mov
	to16i(eax+0xC) = dx; //mov
	add(esi, ebx);
	add(edx, ecx);
	to16i(eax+0xE) = si; //mov
	esi = esp; //mov
	to32i(esp+4) = eax; //mov
	to16i(eax+0x10) = dx; //mov
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	esp += 4; return;
}
Fn(void) Game::_sub_47A270()
{
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	push32(ecx);
	push32(ebx);
	ah = 0xFF; //mov
	dl = 0x40; //mov
	ecx = (int32_t)(intptr_t)dword_55E44C; //mov
	ebp = 4; //mov
	xor_(edi, edi);
	to8i(esp+0xC) = ah; //mov
	to8i(esp+0x10) = dl; //mov
	dh = 0xE0; //mov
	to32i(esp+8) = edi; //mov
	to8i(esp+0x14) = dh; //mov
	to8i(esp+0x18) = dl; //mov
loc_47A29F:
	esi = to32i(esp+8); //mov
	xor_(ebx, ebx);
loc_47A2A5:
	edx = to32i(dword_5118A0); //mov
	imul32(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	imul32(eax, 0x24);
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	edx = to32i(eax); //mov
	sar(edx, (int32_t)0x13);
	to32i(dword_4D9D10+esi) = edx; //mov
	eax = to32i(eax+8); //mov
	sar(eax, (int32_t)0x13);
	to32i(dword_4D9F10+esi) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x50); //lea
	add(ecx, (int32_t)0x14);
	to32i(ecx-0x10) = 0x12; //mov
	to8i(ecx-4) = 0xFF; //mov
	to8i(ecx-3) = 0xE0; //mov
	to8i(ecx-2) = 0xE0; //mov
	to8i(ecx-1) = 0xE0; //mov
	inc(ebx);
	to32i(ecx-0x14) = eax; //mov
	cmp(ebx, (int32_t)4);
	if (jl())
		goto loc_47A2A5;
	ebx = to32i(esp+8); //mov
	add(ebx, ebp);
	inc(edi);
	to32i(esp+8) = ebx; //mov
	cmp(edi, (int32_t)0x80);
	if (jl())
		goto loc_47A29F;
	al = to8i(esp+0xC); //mov
	to32i(ecx+4) = 0x12; //mov
	to8i(ecx+0x10) = al; //mov
	al = to8i(esp+0x10); //mov
	to8i(ecx+0x11) = al; //mov
	al = to8i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)dword_55E44C; //mov
	to8i(ecx+0x12) = al; //mov
	al = to8i(esp+0x18); //mov
	add(edx, (int32_t)0x14);
	to8i(ecx+0x13) = al; //mov
	eax = 0x27B0; //mov
	pop32(ebx);
	pop32(ecx);
loc_47A348:
	to32i(dword_55E44C+eax) = edx; //mov
	add(eax, (int32_t)0x14);
	add(edx, (int32_t)0x14);
	cmp(eax, (int32_t)0x27EC);
	if (jnz())
		goto loc_47A348;
	edx = (int32_t)(intptr_t)dword_55E44C; //mov
	eax = 0x27B0; //mov
	add(edx, (int32_t)0x14);
loc_47A368:
	to32i(dword_55E44C+eax) = edx; //mov
	add(eax, (int32_t)0x14);
	add(edx, (int32_t)0x14);
	cmp(eax, (int32_t)0x27EC);
	if (jnz())
		goto loc_47A368;
	xor_(edi, edi);
	esi = (int32_t)(intptr_t)dword_560C4C; //mov
	to32i(dword_560C4C) = edi; //mov
	to32i(dword_560C38) = esi; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_47A3A0()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	esi = to32i(dword_51201C); //mov
	cmp(esi, (int32_t)1);
	if (jnb())
		goto loc_47A3CD;
	test(esi, esi);
	if (jnz())
		goto loc_47A3E6;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_55BF58; //mov
loc_47A3BD:
	movsd();
	movsd();
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
	return;
loc_47A3CD:
	if (jbe())
		goto loc_47A3DD;
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_47A3E6;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_558C88; //mov
	goto loc_47A3BD;
loc_47A3DD:
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_55BF38; //mov
	goto loc_47A3BD;
loc_47A3E6:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_47A418()
{
	static const void *const off_47A400[] = {
		&&loc_47A553,
		&&loc_47AC54,
		&&loc_47AC85,
		&&loc_47ACB6,
		&&loc_47ACE6,
		&&loc_47AD15,
	};
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x3C);
	to32i(esp+0x30) = esi; //mov
	ebp = edx; //mov
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_47AC3A;
	test(eax, eax);
	if (jle())
		goto loc_47AC3A;
	edi = 0xF1; //mov
loc_47A43E:
	add(ebp, ebp);
	esi = (int32_t)(intptr_t)(ebp*8+0); //lea
	sub(esi, ebp);
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(esp+0x38) = eax; //mov
	cmp(eax, (int32_t)0xE);
	if (jle())
		goto loc_47AC41;
	to32i(esp+0x38) = 0xE; //mov
loc_47A467:
	edx = (int32_t)(intptr_t)dword_558C98; //mov
	push32(0x52);
	eax = to32i(dword_4D9934); //mov
	ebp = to32i(dword_4D9938); //mov
	esi = (int32_t)(intptr_t)(eax*8+0); //lea
	push32(0x55);
	add(esi, eax);
	eax = (int32_t)(intptr_t)dword_55D220; //mov
	shl(esi, (int32_t)2);
	push32(0x52);
	add(eax, esi);
	esi = (int32_t)(intptr_t)(ebp*4+0); //lea
	push32(0xFF);
	sub(esi, ebp);
	to32i(esp+0x28) = eax; //mov
	shl(esi, (int32_t)2);
	eax = (int32_t)(intptr_t)dword_55AA98; //mov
	sub(esi, ebp);
	ebp = (int32_t)(intptr_t)(edi+0x39); //lea
	shl(esi, (int32_t)2);
	push32(ebp);
	ebx = 0x35; //mov
	add(eax, esi);
	push32(0xA);
	to32i(esp+0x28) = eax; //mov
	esi = (int32_t)(intptr_t)(edi+0x20); //lea
	eax = to32i(dword_4D993C); //mov
	push32(ebp);
	ecx = esi; //mov
	shl(eax, (int32_t)6);
	push32(0x35);
	add(edx, eax);
	eax = 0xA; //mov
	to32i(esp+0x28) = edx; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x52);
	push32(0x55);
	push32(0x52);
	push32(0xFF);
	push32(esi);
	push32(0x20);
	ebx = 0x69; //mov
	eax = (int32_t)(intptr_t)(edi+8); //lea
	push32(esi);
	to32i(esp+0x44) = eax; //mov
	ecx = eax; //mov
	push32(0x69);
	edx = eax; //mov
	eax = 0x20; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x52);
	push32(0x55);
	push32(0x52);
	push32(0xFF);
	eax = (int32_t)(intptr_t)(edi+0x12); //lea
	push32(eax);
	push32(0x69);
	push32(eax);
	ecx = to32i(esp+0x44); //mov
	ebx = 0xB0; //mov
	push32(0xB0);
	edx = ecx; //mov
	eax = 0x69; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	al = (int32_t)(intptr_t)byte_4D9CE2[eax]; //mov
	cmp(al, (int8_t)5);
	if (ja())
		goto loc_47A553;
	and_(eax, (int32_t)0xFF);
	goto *off_47A400[eax];
loc_47A553:
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)6);
	if (jbe())
		goto loc_47AA8C;
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	eax = (int32_t)(intptr_t)(edi+0x24); //lea
	push32(eax);
	push32(0x20);
	ebp = (int32_t)(intptr_t)(edi+0x20); //lea
	ebx = 0x2D; //mov
	push32(ebp);
	esi = (int32_t)(intptr_t)(edi+0x1A); //lea
	ecx = ebp; //mov
	push32(0x20);
	edx = esi; //mov
	eax = 0x27; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)7);
	if (jbe())
		goto loc_47AA8C;
	push32(0);
	push32(0xA2);
	push32(0xD1);
	push32(0xFF);
	eax = (int32_t)(intptr_t)(edi+0xE); //lea
	push32(eax);
	push32(0x2E);
	push32(0);
	push32(0xA2);
	push32(0xD1);
	push32(0xFF);
	push32(ebp);
	push32(0x3D);
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0x2D);
	ecx = 0xDE; //mov
	push32(0);
	ebx = 0xFF; //mov
	edx = esi; //mov
	push32(0xAE);
	to32i(esp+0x7C) = eax; //mov
	eax = 0x27; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)8);
	if (jbe())
		goto loc_47AA8C;
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	push32(ebp);
	push32(0x4C);
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	eax = (int32_t)(intptr_t)(edi+0xB); //lea
	push32(eax);
	push32(0x39);
	push32(0);
	push32(0xA2);
	push32(0xD1);
	push32(0xFF);
	ecx = to32i(esp+0x6C); //mov
	push32(ecx);
	push32(0x2E);
	ebx = 0xFF; //mov
	push32(0);
	edx = ebp; //mov
	to32i(esp+0x80) = eax; //mov
	push32(0xA2);
	eax = 0x3D; //mov
	ecx = 0xD1; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)9);
	if (jbe())
		goto loc_47AA8C;
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	esi = (int32_t)(intptr_t)(edi+8); //lea
	push32(esi);
	push32(0x48);
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	push32(ebp);
	push32(0x56);
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	push32(ebp);
	push32(0x4C);
	push32(0);
	ecx = 0xC5; //mov
	ebx = 0xFF; //mov
	push32(0x96);
	edx = to32i(esp+0x84); //mov
	eax = 0x39; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)0xA);
	if (jbe())
		goto loc_47AA8C;
	push32(4);
	push32(0x91);
	push32(0xC1);
	push32(0xFF);
	push32(ebp);
	push32(0x5B);
	push32(4);
	push32(0x91);
	push32(0xC1);
	push32(0xFF);
	push32(esi);
	push32(0x57);
	push32(0);
	push32(0x96);
	push32(0xC5);
	push32(0xFF);
	push32(esi);
	push32(0x48);
	push32(0);
	ecx = 0xC5; //mov
	ebx = 0xFF; //mov
	push32(0x96);
	eax = 0x56; //mov
	edx = ebp; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)0xB);
	if (jbe())
		goto loc_47AA8C;
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(esi);
	push32(0x64);
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(ebp);
	push32(0x64);
	push32(4);
	push32(0x91);
	push32(0xC1);
	push32(0xFF);
	push32(ebp);
	push32(0x5B);
	push32(4);
	ecx = 0xC1; //mov
	ebx = 0xFF; //mov
	push32(0x91);
	eax = 0x57; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)0xC);
	if (jbe())
		goto loc_47AA8C;
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(ebp);
	push32(0x69);
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(esi);
	push32(0x69);
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(esi);
	push32(0x64);
	push32(8);
	ecx = 0xBD; //mov
	ebx = 0xFF; //mov
	push32(0x8C);
	eax = 0x64; //mov
	edx = ebp; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	push32(0xC);
	push32(0x87);
	push32(0xB9);
	push32(0xFF);
	push32(esi);
	push32(0x6E);
	push32(0xC);
	push32(0x87);
	push32(0xB9);
	push32(0xFF);
	ebp = (int32_t)(intptr_t)(edi+0x12); //lea
	push32(ebp);
	push32(0x6E);
	push32(8);
	push32(0x8C);
	push32(0xBD);
	push32(0xFF);
	push32(ebp);
	push32(0x69);
	push32(8);
	ecx = 0xBD; //mov
	ebx = 0xFF; //mov
	push32(0x8C);
	eax = 0x69; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9D00[eax], (int8_t)0xF);
	if (jbe())
		goto loc_47AA8C;
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(ebp);
	push32(0x79);
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(esi);
	push32(0x7E);
	push32(0xC);
	push32(0x87);
	push32(0xB9);
	push32(0xFF);
	push32(esi);
	push32(0x6E);
	push32(0xC);
	ecx = 0xB9; //mov
	ebx = 0xFF; //mov
	push32(0x87);
	eax = 0x6E; //mov
	edx = ebp; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9D00[eax], (int8_t)0x10);
	if (jbe())
		goto loc_47AA8C;
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(esi);
	push32(0x8C);
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(ebp);
	push32(0x86);
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(ebp);
	push32(0x79);
	push32(0x10);
	ecx = 0xB5; //mov
	ebx = 0xFF; //mov
	push32(0x82);
	eax = 0x7E; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9D00[eax], (int8_t)0x11);
	if (jbe())
		goto loc_47AA8C;
	push32(0x3A);
	push32(0x3D);
	push32(0xC5);
	push32(0xFF);
	push32(ebp);
	push32(0x8C);
	push32(0x3A);
	push32(0x3D);
	push32(0xC5);
	push32(0xFF);
	push32(esi);
	push32(0x95);
	push32(0x10);
	push32(0x82);
	push32(0xB5);
	push32(0xFF);
	push32(esi);
	push32(0x8C);
	push32(0x10);
	ecx = 0xB5; //mov
	ebx = 0xFF; //mov
	push32(0x82);
	eax = 0x86; //mov
	edx = ebp; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	push32(0x10);
	push32(0x10);
	push32(0x94);
	push32(0xFF);
	push32(ebp);
	push32(0x93);
	push32(0x10);
	push32(0x10);
	push32(0x94);
	push32(0xFF);
	push32(esi);
	push32(0x9C);
	push32(0x3A);
	push32(0x3D);
	push32(0xC5);
	push32(0xFF);
	push32(esi);
	push32(0x95);
	push32(0x3A);
	ecx = 0xC5; //mov
	ebx = 0xFF; //mov
	push32(0x3D);
	eax = 0x8C; //mov
	edx = ebp; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9D00[eax], (int8_t)0x12);
	if (jbe())
		goto loc_47AA8C;
	push32(0x10);
	push32(0x10);
	push32(0x94);
	push32(0xFF);
	push32(esi);
	push32(0xAF);
	push32(0x10);
	push32(0x10);
	push32(0x94);
	push32(0xFF);
	push32(ebp);
	push32(0xAF);
	push32(0x10);
	push32(0x10);
	push32(0x94);
	push32(0xFF);
	push32(ebp);
	push32(0x93);
	push32(0x10);
	ecx = 0x94; //mov
	ebx = 0xFF; //mov
	push32(0x10);
	eax = 0x9C; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D040(); esp += 4; //call
loc_47AA8C:
	push32(0x1A);
	push32(0x2B);
	push32(0x35);
	ebx = 0xA; //mov
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	push32(0);
	eax = 0x14; //mov
	ecx = (int32_t)(intptr_t)(edi+0x20); //lea
	esp -= 4; _sub_47D290(); esp += 4; //call
	push32(0x18);
	push32(0x49);
	push32(0x4F);
	ebx = 0x20; //mov
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	push32(0);
	eax = 0x14; //mov
	ecx = (int32_t)(intptr_t)(edi+8); //lea
	esp -= 4; _sub_47D290(); esp += 4; //call
	push32(0xC);
	push32(0x47);
	push32(0x67);
	ebx = 0x69; //mov
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	push32(0);
	eax = 0x14; //mov
	ecx = (int32_t)(intptr_t)(edi+7); //lea
	esp -= 4; _sub_47D290(); esp += 4; //call
	push32(0x20);
	push32(0x20);
	push32(0x73);
	ebx = 3; //mov
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	push32(0);
	eax = 0x14; //mov
	ecx = (int32_t)(intptr_t)(edi+2); //lea
	esp -= 4; _sub_47D290(); esp += 4; //call
	ebx = to32i(dword_4D9934); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_47AD44;
	edi = (int32_t)(intptr_t)(ebx-1); //lea
loc_47AB19:
	esi = (int32_t)(intptr_t)(edi*8+0); //lea
	add(esi, edi);
	xor_(edi, edi);
	ebp = to32i(dword_4D9938); //mov
	to32i(dword_55D220+esi*4) = edi; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_47AD4E;
	edi = (int32_t)(intptr_t)(ebp-1); //lea
loc_47AB3C:
	esi = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(esi, edi);
	shl(esi, (int32_t)2);
	sub(esi, edi);
	xor_(eax, eax);
	edx = to32i(dword_4D9934); //mov
	to32i(dword_55AA98+esi*4) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_47AD58;
	eax = (int32_t)(intptr_t)(edx-1); //lea
loc_47AB64:
	esi = (int32_t)(intptr_t)(eax*8+0); //lea
	add(esi, eax);
	eax = (int32_t)(intptr_t)dword_55D220; //mov
	shl(esi, (int32_t)2);
	add(eax, esi);
	ecx = to32i(dword_4D9938); //mov
	to32i(esp+0x1C) = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_47AD62;
	edi = (int32_t)(intptr_t)(ecx-1); //lea
loc_47AB8C:
	esi = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(esi, edi);
	shl(esi, (int32_t)2);
	sub(esi, edi);
	eax = (int32_t)(intptr_t)dword_55AA98; //mov
	shl(esi, (int32_t)2);
	add(eax, esi);
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0x38); //mov
	cmp(byte_4D9CF1[eax], (int8_t)7);
	if (jbe())
		goto loc_47AD80;
	eax = to32i(dword_4D993C); //mov
	test(eax, eax);
	if (jle())
		goto loc_47AD6C;
	dec(eax);
loc_47ABC7:
	shl(eax, (int32_t)6);
	xor_(edx, edx);
	ecx = to32i(dword_4D993C); //mov
	to32i(dword_558C98+eax) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_47AD76;
	eax = (int32_t)(intptr_t)(ecx-1); //lea
loc_47ABE3:
	edx = (int32_t)(intptr_t)dword_558C98; //mov
	ebx = to32i(esp+0x1C); //mov
	esi = to32i(esp+0x18); //mov
	push32(ebx);
	shl(eax, (int32_t)6);
	push32(esi);
	add(edx, eax);
	push32(edx);
	ebp = to32i(esp+0x14); //mov
	push32(ebp);
	esi = (int32_t)(intptr_t)(esp+0x30); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	push32(eax);
	to32i(esp+0x10) = edx; //mov
	edx = to32i(esp+0x24); //mov
	push32(edx);
	ecx = to32i(esp+0x1C); //mov
	push32(ecx);
	ebx = to32i(esp+0x1C); //mov
	push32(ebx);
loc_47AC1E:
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edi = to32i(esp+0x30); //mov
	esi = esp; //mov
	movsd();
	movsd();
	eax = to32i(esp+0x30); //mov
	add(esp, (int32_t)0x3C);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_47AC3A:
	xor_(edi, edi);
	goto loc_47A43E;
loc_47AC41:
	test(eax, eax);
	if (jge())
		goto loc_47A467;
	xor_(esi, esi);
	to32i(esp+0x38) = esi; //mov
	goto loc_47A467;
loc_47AC54:
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0xA);
	push32(ebp);
	ebx = 0x1E; //mov
	ecx = (int32_t)(intptr_t)(edi+0x32); //lea
	push32(0x1E);
	eax = 0xA; //mov
	edx = (int32_t)(intptr_t)(edi+0x30); //lea
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	goto loc_47A553;
loc_47AC85:
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0xA);
	push32(ebp);
	ebx = 0x22; //mov
	ecx = (int32_t)(intptr_t)(edi+0x2D); //lea
	push32(0x22);
	eax = 0xA; //mov
	edx = (int32_t)(intptr_t)(edi+0x24); //lea
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	goto loc_47A553;
loc_47ACB6:
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0xA);
	push32(ebp);
	ebx = 0x29; //mov
	eax = 0x1A; //mov
	push32(0x29);
	ecx = (int32_t)(intptr_t)(edi+0x27); //lea
	edx = esi; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	goto loc_47A553;
loc_47ACE6:
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0xA);
	push32(ebp);
	ebx = 0x2E; //mov
	eax = 0xA; //mov
	push32(0x35);
	ecx = esi; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	goto loc_47A553;
loc_47AD15:
	push32(0);
	push32(0xAE);
	push32(0xDE);
	push32(0xFF);
	push32(ebp);
	push32(0xA);
	push32(ebp);
	ebx = 0x35; //mov
	eax = 0xA; //mov
	push32(0x35);
	ecx = esi; //mov
	edx = esi; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	goto loc_47A553;
loc_47AD44:
	edi = 0x77; //mov
	goto loc_47AB19;
loc_47AD4E:
	edi = 0x77; //mov
	goto loc_47AB3C;
loc_47AD58:
	eax = 0x77; //mov
	goto loc_47AB64;
loc_47AD62:
	edi = 0x77; //mov
	goto loc_47AB8C;
loc_47AD6C:
	eax = 0x77; //mov
	goto loc_47ABC7;
loc_47AD76:
	eax = 0x77; //mov
	goto loc_47ABE3;
loc_47AD80:
	ebx = to32i(esp+0x1C); //mov
	push32(ebx);
	esi = to32i(esp+0x1C); //mov
	push32(esi);
	edi = to32i(esp+0x1C); //mov
	push32(edi);
	ebp = to32i(esp+0x1C); //mov
	push32(ebp);
	goto loc_47AC1E;
}
Fn(void) Game::_sub_47ADA0()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	esi = esp; //mov
	edi = edx; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_47ADC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0x88);
	ecx = esi; //mov
	edx = to32i(dword_511FF4); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_47AE12;
	cmp(to8i(byte_511FF8), (int8_t)0);
	if (jnz())
		goto loc_47AE20;
	ebx = 0xD; //mov
	esi = (int32_t)(intptr_t)(esp+0x80); //lea
	eax = edx; //mov
loc_47ADEE:
	xor_(edx, edx);
	esp -= 4; _sub_459970(); esp += 4; //call
	esp -= 4; _sub_47AE50(); esp += 4; //call
loc_47ADFA:
	esi = (int32_t)(intptr_t)(esp+0x80); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0x88);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47AE12:
	esi = (int32_t)(intptr_t)(esp+0x80); //lea
	esp -= 4; _sub_46FE50(); esp += 4; //call
	goto loc_47ADFA;
loc_47AE20:
	push32(byte_511FF8);
	eax = edx; //mov
	esp -= 4; _sub_459970(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	ebx = 0xD; //mov
	esi = (int32_t)(intptr_t)(esp+0x8C); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(dword_511FF4); //mov
	goto loc_47ADEE;
}
Fn(void) Game::_sub_47AE50()
{
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	to32i(esp+0x14) = esi; //mov
	to32i(esp+0x20) = eax; //mov
	to32i(esp+0x18) = ebx; //mov
	cmp(to32i(dword_51201C+edx*4), (int32_t)1);
	if (jnz())
		goto loc_47AE7D;
	cmp(ebx, (int32_t)8);
	if (jz())
		goto loc_47AF27;
	cmp(ebx, (int32_t)7);
	if (jz())
		goto loc_47AF27;
loc_47AE7D:
	eax = to32i(esp+0x20); //mov
	esp -= 4; _sub_47B110(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47AF27;
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_47AF40;
	shl(edx, (int32_t)4);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	add(eax, (int32_t)(intptr_t)dword_557C18);
loc_47AEAC:
	edx = to32i(esp+0x18); //mov
	ebp = to32i(eax+edx*8); //mov
	to32i(esp+0x10) = eax; //mov
	test(ebp, ebp);
	if (jl())
		goto loc_47AF27;
	cmp(edx, (int32_t)9);
	if (jnz())
		goto loc_47AF4A;
	ebx = 0x62; //mov
loc_47AEC9:
	push32(ecx);
	edx = to32i(esp+0x1C); //mov
	cmp(edx, (int32_t)9);
	if (jl())
		goto loc_47B0C9;
	edx = to32i(esp+0x24); //mov
	xor_(ebp, ebp);
	xor_(esi, esi);
loc_47AEDF:
	edi = to32i(esp+0x24); //mov
	sub(ecx, ecx);
	dec(ecx);
	xor_(eax, eax);
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	ecx = ~ecx;
	dec(ecx);
	cmp(ebp, ecx);
	if (jnb())
		goto loc_47AF59;
	cmp(esi, ebx);
	if (jge())
		goto loc_47AF59;
	xor_(eax, eax);
	al = to8i(edx); //mov
	esp -= 4; _sub_47B150(); esp += 4; //call
	and_(eax, (int32_t)0xFF);
	eax = to32i(dword_558880+eax*4); //mov
	test(eax, eax);
	if (jz())
		goto loc_47AF54;
	eax = to32i(eax); //mov
	ecx = to32i(eax+6); //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x14);
	add(ecx, eax);
	add(esi, ecx);
loc_47AF23:
	inc(ebp);
	inc(edx);
	goto loc_47AEDF;
loc_47AF27:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	edi = to32i(esp+0x14); //mov
	esi = esp; //mov
	movsd();
	movsd();
	eax = to32i(esp+0x14); //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	return;
loc_47AF40:
	eax = (int32_t)(intptr_t)dword_557BA8; //mov
	goto loc_47AEAC;
loc_47AF4A:
	ebx = 0x280; //mov
	goto loc_47AEC9;
loc_47AF54:
	add(esi, (int32_t)0xA);
	goto loc_47AF23;
loc_47AF59:
	cmp(esi, ebx);
	if (jl())
		goto loc_47AF93;
	eax = to32i(esp+0x24); //mov
	al = to8i(eax+ebp); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _toupper_(); esp += 4; //call
	eax = to32i(dword_558880+eax*4); //mov
	test(eax, eax);
	if (jz())
		goto loc_47B0C1;
	eax = to32i(eax); //mov
	edx = to32i(eax+6); //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x14);
	add(eax, edx);
	sub(esi, eax);
loc_47AF92:
	dec(ebp);
loc_47AF93:
	eax = to32i(esp+0x1C); //mov
	ebx = to32i(esp+0x14); //mov
	shl(eax, (int32_t)3);
	add(eax, ebx);
	sar(esi, (int32_t)1);
	edi = to32i(eax); //mov
	dec(ebp);
	add(esi, edi);
loc_47AFA7:
	eax = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x14); //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	eax = to32i(eax+4); //mov
	edx = to32i(dword_4D9934); //mov
	to32i(esp+0x20) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_55D220; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	to32i(esp+0xC) = edx; //mov
	test(ebp, ebp);
	if (jl())
		goto loc_47B05F;
	eax = to32i(esp+0x24); //mov
	add(eax, ebp);
	to32i(esp+0x28) = eax; //mov
loc_47AFEA:
	edx = to32i(esp+0x28); //mov
	xor_(eax, eax);
	al = to8i(edx); //mov
	esp -= 4; _sub_47B150(); esp += 4; //call
	and_(eax, (int32_t)0xFF);
	edi = to32i(dword_558880+eax*4); //mov
	test(edi, edi);
	if (jz())
		goto loc_47B0EE;
	eax = to32i(edi); //mov
	edx = to32i(eax+6); //mov
	sar(edx, (int32_t)0x10);
	sub(esi, edx);
	edx = to32i(eax+4); //mov
	sar(edx, (int32_t)0x10);
	push32(edx);
	edx = to32i(eax+2); //mov
	ecx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x10);
	shl(ecx, (int32_t)4);
	push32(edx);
	sar(ecx, (int32_t)0x14);
	eax = to32i(esp+0x28); //mov
	push32(0);
	ebx = esi; //mov
	add(ecx, eax);
	push32(0);
	eax = 0x15; //mov
	edx = edi; //mov
	esp -= 4; _sub_47D290(); esp += 4; //call
	eax = to32i(edi); //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	sub(esi, eax);
loc_47B051:
	ecx = to32i(esp+0x28); //mov
	dec(ecx);
	dec(ebp);
	to32i(esp+0x28) = ecx; //mov
	test(ebp, ebp);
	if (jge())
		goto loc_47AFEA;
loc_47B05F:
	ebx = to32i(dword_4D9934); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_47B0F6;
	edx = (int32_t)(intptr_t)(ebx-1); //lea
loc_47B070:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	xor_(esi, esi);
	edi = to32i(dword_4D9934); //mov
	to32i(dword_55D220+eax*4) = esi; //mov
	test(edi, edi);
	if (jle())
		goto loc_47B100;
	eax = (int32_t)(intptr_t)(edi-1); //lea
loc_47B08F:
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_55D220; //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(esp+4); //lea
	add(edx, eax);
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp+0x10) = edx; //mov
	movsd();
	movsd();
	pop32(ecx);
	edi = to32i(esp+0x14); //mov
	esi = esp; //mov
	movsd();
	movsd();
	eax = to32i(esp+0x14); //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	return;
loc_47B0C1:
	sub(esi, (int32_t)0xA);
	goto loc_47AF92;
loc_47B0C9:
	ecx = to32i(esp+0x14); //mov
	esi = (int32_t)(intptr_t)(edx*8+0); //lea
	add(esi, ecx);
	edi = to32i(esp+0x24); //mov
	esi = to32i(esi); //mov
	sub(ecx, ecx);
	dec(ecx);
	xor_(eax, eax);
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	ecx = ~ecx;
	dec(ecx);
	ebp = (int32_t)(intptr_t)(ecx-1); //lea
	goto loc_47AFA7;
loc_47B0EE:
	sub(esi, (int32_t)0xA);
	goto loc_47B051;
loc_47B0F6:
	edx = 0x77; //mov
	goto loc_47B070;
loc_47B100:
	eax = 0x77; //mov
	goto loc_47B08F;
}
Fn(void) Game::_sub_47B110()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ebx = eax; //mov
	edi = eax; //mov
	sub(ecx, ecx);
	dec(ecx);
	xor_(eax, eax);
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	ecx = ~ecx;
	dec(ecx);
	edx = ecx; //mov
	esi = ecx; //mov
	ecx = 1; //mov
	test(edx, edx);
	if (jz())
		goto loc_47B145;
	xor_(eax, eax);
	test(edx, edx);
	if (jle())
		goto loc_47B145;
	edx = ebx; //mov
loc_47B138:
	cmp(to8i(edx), (int8_t)0x20);
	if (jz())
		goto loc_47B13F;
	xor_(ecx, ecx);
loc_47B13F:
	inc(eax);
	inc(edx);
	cmp(eax, esi);
	if (jl())
		goto loc_47B138;
loc_47B145:
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47B150()
{
	ah = al; //mov
	cmp(al, (int8_t)0xE4);
	if (jnb())
		goto loc_47B176;
	cmp(al, (int8_t)0x60);
	if (jnb())
		goto loc_47B1E4;
	cmp(al, (int8_t)0x5D);
	if (jnb())
		goto loc_47B216;
	cmp(al, (int8_t)0x5B);
	if (jnz())
		goto loc_47B16C;
loc_47B16A:
	al = 0x28; //mov
loc_47B16C:
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B176:
	if (jbe())
		goto loc_47B244;
	cmp(al, (int8_t)0xF1);
	if (jnb())
		goto loc_47B194;
	cmp(al, (int8_t)0xE9);
	if (jnb())
		goto loc_47B1CE;
	cmp(al, (int8_t)0xE7);
	if (jnz())
		goto loc_47B16C;
	al = 0xC7; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B194:
	if (jbe())
		goto loc_47B25C;
	cmp(al, (int8_t)0xF6);
	if (jnb())
		goto loc_47B1AE;
	cmp(al, (int8_t)0xF3);
	if (jnz())
		goto loc_47B16C;
	al = 0xD3; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B1AE:
	if (jbe())
		goto loc_47B268;
	cmp(al, (int8_t)0xFA);
	if (jb())
		goto loc_47B16C;
	if (jbe())
		goto loc_47B274;
	cmp(al, (int8_t)0xFC);
	if (jnz())
		goto loc_47B16C;
	al = 0xDC; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B1CE:
	if (jbe())
		goto loc_47B250;
	cmp(al, (int8_t)0xED);
	if (jnz())
		goto loc_47B16C;
	al = 0xCD; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B1E4:
	if (jbe())
		goto loc_47B220;
	cmp(al, (int8_t)0x7C);
	if (jnb())
		goto loc_47B1FC;
	cmp(al, (int8_t)0x7B);
	if (jz())
		goto loc_47B16A;
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B1FC:
	if (jbe())
		goto loc_47B238;
	cmp(al, (int8_t)0x7D);
	if (jbe())
		goto loc_47B22C;
	cmp(al, (int8_t)0xE1);
	if (jnz())
		goto loc_47B16C;
	al = 0xC1; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B216:
	if (jbe())
		goto loc_47B22C;
	cmp(al, (int8_t)0x5E);
	if (jnz())
		goto loc_47B16C;
loc_47B220:
	al = 0x91; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B22C:
	al = 0x29; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B238:
	al = 0x49; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B244:
	al = 0xC4; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B250:
	al = 0xC9; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B25C:
	al = 0xD1; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B268:
	al = 0xD6; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
loc_47B274:
	al = 0xDA; //mov
	and_(eax, (int32_t)0xFF);
	_toupper_(); return; //jmp
}
Fn(void) Game::_sub_47B2F0()
{
	static const void *const off_47B280[] = {
		&&loc_47B41F,
		&&loc_47B4DA,
		&&loc_47B4F1,
		&&loc_47B508,
		&&loc_47B522,
		&&loc_47B53C,
		&&loc_47B556,
		&&loc_47B570,
		&&loc_47B587,
		&&loc_47B59E,
	};
	static const void *const off_47B2A8[] = {
		&&loc_47B5DD,
		&&loc_47B5F4,
		&&loc_47B60B,
		&&loc_47B625,
		&&loc_47B63F,
		&&loc_47B659,
		&&loc_47B673,
		&&loc_47B68D,
	};
	static const void *const off_47B2C8[] = {
		&&loc_47B6C3,
		&&loc_47B6DA,
		&&loc_47B6F1,
		&&loc_47B708,
		&&loc_47B71F,
		&&loc_47B736,
		&&loc_47B74D,
		&&loc_47B764,
		&&loc_47B77E,
		&&loc_47B798,
	};
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x24) = edx; //mov
	to32i(esp+0x30) = ebx; //mov
	cmp(ebx, (int32_t)0xB);
	if (jz())
		goto loc_47B4BA;
	cmp(to32i(dword_51201C+edx*4), (int32_t)1);
	if (jnz())
		goto loc_47B322;
	cmp(ebx, (int32_t)2);
	if (jle())
		goto loc_47B4C5;
loc_47B322:
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_47B4D0;
	eax = to32i(esp+0x24); //mov
	shl(eax, (int32_t)4);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	add(eax, (int32_t)(intptr_t)dword_557C18);
loc_47B342:
	ebp = to32i(esp+0x30); //mov
	shl(ebp, (int32_t)3);
	add(ebp, eax);
	edi = to32i(ebp+0); //mov
	test(edi, edi);
	if (jl())
		goto loc_47B4C5;
	edx = to32i(dword_4D9934); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	esi = edi; //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_55D220; //mov
	shl(eax, (int32_t)2);
	ebp = to32i(ebp+4); //mov
	add(edx, eax);
	xor_(eax, eax);
	edi = to32i(esp+0x2C); //mov
	to32i(esp+0x28) = eax; //mov
	sub(ecx, ecx);
	dec(ecx);
	xor_(eax, eax);
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	ecx = ~ecx;
	dec(ecx);
	edi = (int32_t)(intptr_t)(ecx-1); //lea
	to32i(esp) = edx; //mov
	test(edi, edi);
	if (jl())
		goto loc_47B44D;
	eax = to32i(esp+0x24); //mov
	edx = to32i(esp+0x30); //mov
	shl(eax, (int32_t)4);
	shl(edx, (int32_t)5);
	add(edx, eax);
	to32i(esp+0x20) = edx; //mov
loc_47B3AA:
	eax = to32i(esp+0x2C); //mov
	add(eax, edi);
	dl = to8i(eax); //mov
	cmp(dl, (int8_t)0x27);
	if (jnz())
		goto loc_47B3BD;
	cmp(dl, to8i(eax-1));
	if (jnz())
		goto loc_47B3BD;
	dec(edi);
loc_47B3BD:
	eax = to32i(esp+0x2C); //mov
	add(eax, edi);
	to32i(esp+0x18) = eax; //mov
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x20); //mov
	dl = to8i(edx); //mov
	ecx = (int32_t)(intptr_t)(esp+0x10); //lea
	byte_5579E8[edi+eax] = dl; //mov
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	edx = to32i(esp+0x18); //mov
	push32(eax);
	xor_(eax, eax);
	ebx = to32i(esp+0x28); //mov
	al = to8i(edx); //mov
	edx = to32i(esp+0x34); //mov
	esp -= 4; _sub_47C1A0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47B43E;
	eax = to32i(esp+0x30); //mov
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_47B5B8;
	eax = to32i(esp+0x18); //mov
	al = to8i(eax); //mov
	sub(al, (int8_t)0x30);
	cmp(al, (int8_t)9);
	if (ja())
		goto loc_47B43A;
	and_(eax, (int32_t)0xFF);
	goto *off_47B280[eax];
loc_47B41F:
	push32(0x18);
	push32(0x1E);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x2B);
loc_47B431:
	ecx = ebp; //mov
	ebx = esi; //mov
	esp -= 4; _sub_47D290(); esp += 4; //call
loc_47B43A:
	inc(to32i(esp+0x28));
loc_47B43E:
	edx = to32i(esp+0x14); //mov
	dec(edi);
	sub(esi, edx);
	test(edi, edi);
	if (jge())
		goto loc_47B3AA;
loc_47B44D:
	cmp(to32i(esp+0x28), (int32_t)0);
	if (jz())
		goto loc_47B4C5;
	ebx = to32i(dword_4D9934); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_47B7B2;
	eax = (int32_t)(intptr_t)(ebx-1); //lea
loc_47B465:
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	xor_(esi, esi);
	edi = to32i(dword_4D9934); //mov
	to32i(dword_55D220+eax*4) = esi; //mov
	test(edi, edi);
	if (jle())
		goto loc_47B7BC;
	edx = (int32_t)(intptr_t)(edi-1); //lea
loc_47B486:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = (int32_t)(intptr_t)dword_55D220; //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(esp+8); //lea
	add(edx, eax);
	esi = esp; //mov
	to32i(esp+4) = edx; //mov
	movsd();
	movsd();
loc_47B4A5:
	edi = to32i(esp+0x1C); //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x1C); //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_47B4BA:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47AE50(); esp += 4; //call
	goto loc_47B4A5;
loc_47B4C5:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_46FE50(); esp += 4; //call
	goto loc_47B4A5;
loc_47B4D0:
	eax = (int32_t)(intptr_t)dword_557BA8; //mov
	goto loc_47B342;
loc_47B4DA:
	push32(0x18);
	push32(0x1D);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x48);
	goto loc_47B431;
loc_47B4F1:
	push32(0x18);
	push32(0x1E);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x65);
	goto loc_47B431;
loc_47B508:
	push32(0x18);
	push32(0x1E);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x82);
	goto loc_47B431;
loc_47B522:
	push32(0x18);
	push32(0x1E);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xA0);
	goto loc_47B431;
loc_47B53C:
	push32(0x18);
	push32(0x1E);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xBD);
	goto loc_47B431;
loc_47B556:
	push32(0x18);
	push32(0x1D);
	push32(0x2F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xDA);
	goto loc_47B431;
loc_47B570:
	push32(0x18);
	push32(0x1D);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x49);
	goto loc_47B431;
loc_47B587:
	push32(0x18);
	push32(0x1E);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x66);
	goto loc_47B431;
loc_47B59E:
	push32(0x18);
	push32(0x1E);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x83);
	goto loc_47B431;
loc_47B5B8:
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_47B6A7;
	eax = to32i(esp+0x18); //mov
	al = to8i(eax); //mov
	sub(al, (int8_t)0x30);
	cmp(al, (int8_t)7);
	if (ja())
		goto loc_47B43A;
	and_(eax, (int32_t)0xFF);
	goto *off_47B2A8[eax];
loc_47B5DD:
	push32(0x18);
	push32(0xE);
	push32(0x5F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x57);
	goto loc_47B431;
loc_47B5F4:
	push32(0x18);
	push32(0xE);
	push32(0x5F);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x49);
	goto loc_47B431;
loc_47B60B:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xA0);
	goto loc_47B431;
loc_47B625:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xAE);
	goto loc_47B431;
loc_47B63F:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xBC);
	goto loc_47B431;
loc_47B659:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xCA);
	goto loc_47B431;
loc_47B673:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xD8);
	goto loc_47B431;
loc_47B68D:
	push32(0x18);
	push32(0xE);
	push32(0x47);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0xE6);
	goto loc_47B431;
loc_47B6A7:
	eax = to32i(esp+0x18); //mov
	al = to8i(eax); //mov
	sub(al, (int8_t)0x30);
	cmp(al, (int8_t)9);
	if (ja())
		goto loc_47B43A;
	and_(eax, (int32_t)0xFF);
	goto *off_47B2C8[eax];
loc_47B6C3:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x30);
	goto loc_47B431;
loc_47B6DA:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x3C);
	goto loc_47B431;
loc_47B6F1:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x48);
	goto loc_47B431;
loc_47B708:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x54);
	goto loc_47B431;
loc_47B71F:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x60);
	goto loc_47B431;
loc_47B736:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x6C);
	goto loc_47B431;
loc_47B74D:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x78);
	goto loc_47B431;
loc_47B764:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x84);
	goto loc_47B431;
loc_47B77E:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x90);
	goto loc_47B431;
loc_47B798:
	push32(0x1A);
	push32(0xC);
	push32(0x15);
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	eax = 0x14; //mov
	push32(0x9C);
	goto loc_47B431;
loc_47B7B2:
	eax = 0x77; //mov
	goto loc_47B465;
loc_47B7BC:
	edx = 0x77; //mov
	goto loc_47B486;
}
Fn(void) Game::_sub_47B7D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	edx = esi; //mov
	ebx = to32i(dword_511FD4); //mov
	ecx = to32i(dword_512010); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_47B7F3;
	eax = to32i(dword_512014); //mov
	add(eax, eax);
	add(ecx, eax);
loc_47B7F3:
	xor_(eax, eax);
	esi = esp; //mov
	esp -= 4; _sub_459100(); esp += 4; //call
	eax = 1; //mov
	esp -= 4; _sub_477640(); esp += 4; //call
	cmp(to32i(dword_55E440), (int32_t)0);
	if (jnz())
		goto loc_47B849;
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jl())
		goto loc_47B849;
	ebp = 1; //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	to32i(dword_55E440) = ebp; //mov
	esp -= 4; _sub_479800(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	edi = to32i(esp+0xC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
loc_47B849:
	cmp(to32i(dword_512054), (int32_t)0);
	if (jz())
		goto loc_47B883;
	xor_(eax, eax);
	esp -= 4; _sub_44B6E0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47B883;
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47BB90(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	edi = to32i(esp+0xC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
loc_47B883:
	test(ecx, ecx);
	if (jz())
		goto loc_47B90F;
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_47B91D;
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47C090(); esp += 4; //call
loc_47B8A1:
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	edi = to32i(esp+0xC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_458BC0(); esp += 4; //call
	ebp = to32i(esp+0xC); //mov
	push32(ebp);
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)(esp+0x20); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = esp; //mov
	eax = to32i(dword_511FEC); //mov
	to32i(dword_55E42C) = ecx; //mov
	to32i(dword_55E444) = eax; //mov
loc_47B8FA:
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47B90F:
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esi = esp; //mov
	to32i(dword_55E42C) = ecx; //mov
	goto loc_47B8FA;
loc_47B91D:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47A3A0(); esp += 4; //call
	goto loc_47B8A1;
}
Fn(void) Game::_sub_47B930()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = to32i(dword_540F48); //mov
	cmp(edx, (int32_t)0x220);
	if (jge())
		goto loc_47B9AD;
	cmp(edx, (int32_t)0x120);
	if (jle())
		goto loc_47B9AD;
	edx = 3; //mov
	esi = (uint8_t)to8i(byte_4D5A0C); //movzx
	sub(edx, esi);
	esi = edx; //mov
	test(edx, edx);
	if (jl())
		goto loc_47B9AD;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47B9B2;
	test(eax, eax);
	if (jz())
		goto loc_47B9B2;
	ecx = 0x20; //mov
	eax = 0xFA; //mov
	ebx = edx; //mov
	edx = 0x168; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
	ecx = 0x20; //mov
	edx = 0x168; //mov
	eax = 0x140; //mov
	ebx = esi; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
	ecx = 0x20; //mov
	edx = 0x168; //mov
	eax = 0x186; //mov
	ebx = esi; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
loc_47B9AD:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47B9B2:
	ecx = 0x20; //mov
	eax = 0xFA; //mov
	ebx = edx; //mov
	edx = 0x78; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
	ecx = 0x20; //mov
	edx = 0x78; //mov
	eax = 0x140; //mov
	ebx = esi; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
	ecx = 0x20; //mov
	edx = 0x78; //mov
	eax = 0x186; //mov
	ebx = esi; //mov
	esp -= 4; _sub_47BA00(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47BA00()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xDC);
	ebp = eax; //mov
	to32i(esp+0xD8) = edx; //mov
	edi = (int32_t)(intptr_t)(esp+0xB0); //lea
	esi = (int32_t)(intptr_t)dword_479450; //mov
	edx = (int32_t)(intptr_t)dword_5588C8; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(esp+0x80) = ecx; //mov
	edi = (int32_t)(intptr_t)(esp+0xC0); //lea
	esi = (int32_t)(intptr_t)dword_479460; //mov
	to32i(esp+0x88) = ecx; //mov
	to32i(esp+0x90) = ecx; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(esp+0x94) = ecx; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	esi = (int32_t)(intptr_t)dword_479470; //mov
	to32i(esp+0x9C) = ecx; //mov
	to32i(esp+0xD4) = edx; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	ebx = to32i(esp+ebx*4+0xB0); //mov
	esi = ecx; //mov
	xor_(edx, edx);
	neg(esi);
	xor_(ecx, ecx);
	to32i(esp+0x80) = esi; //mov
	eax = esi; //mov
	to32i(esp+0x84) = esi; //mov
	to32i(esp+0x8C) = esi; //mov
	to32i(esp+0x98) = esi; //mov
	xor_(eax, esi);
loc_47BAA0:
	fild(to32i(esp+ecx+0x80));
	fild(to32i(esp+ecx+0x84));
	fld(to32f(esp+edx+0xC0));
	fld(to32f(esp+edx+0xA0));
	esi = to32i(esp+0xD8); //mov
	to32i(esp+0xD0) = ebp; //mov
	add(eax, (int32_t)0x20);
	add(edx, (int32_t)4);
	add(ecx, (int32_t)8);
	to32i(esp+eax-0x10) = ebx; //mov
	xor_(edi, edi);
	fxch_st(1);
	fstp(to32f(esp+eax-8));
	fstp(to32f(esp+eax-4));
	fild(to32i(esp+0xD0));
	to32i(esp+eax-0x18) = edi; //mov
	to32i(esp+0xD0) = esi; //mov
	to32i(esp+eax-0xC) = edi; //mov
	esi = 0x3F7FFF00; //mov
	fstp(to32f(esp+eax-0x20));
	to32i(esp+eax-0x14) = esi; //mov
	fild(to32i(esp+0xD0));
	fstp(to32f(esp+eax-0x1C));
	fxch_st(1);
	fadd(to32f(esp+eax-0x20));
	fxch_st(1);
	fadd(to32f(esp+eax-0x1C));
	fxch_st(1);
	fstp(to32f(esp+eax-0x20));
	fstp(to32f(esp+eax-0x1C));
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_47BAA0;
	eax = to32i(esp+0xD4); //mov
	ebp = to32i(dword_4D4EB0); //mov
	cmp(ebp, to32i(eax+0x14));
	if (jnz())
		goto loc_47BB66;
loc_47BB42:
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)0xDC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_47BB66:
	eax = to32i(esp+0xD4); //mov
	eax = to32i(eax+0x14); //mov
	to32i(dword_4D4EB0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	edx = to32i(eax+0x14); //mov
	push32(edx);
	push32(1);
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_47BB42;
}
Fn(void) Game::_sub_47BB90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = esi; //mov
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	push32(0x10);
	edx = to32i(dword_4D9938); //mov
	push32(0x10);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	push32(0x10);
	ecx = 0x24; //mov
	sub(eax, edx);
	push32(0xFF);
	shl(eax, (int32_t)2);
	push32(0x28);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)dword_55AA98; //mov
	push32(0x1E6);
	shl(eax, (int32_t)2);
	push32(0x28);
	ebx = 0x280; //mov
	add(edx, eax);
	push32(0x27C);
	eax = 0x1E2; //mov
	to32i(esp+0x20) = edx; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x10);
	push32(0x10);
	push32(0x10);
	push32(0xFF);
	push32(0x6E);
	push32(0x27C);
	push32(0x72);
	ecx = 0x24; //mov
	ebx = 0x280; //mov
	push32(0x280);
	edx = 0x28; //mov
	eax = 0x27C; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x10);
	push32(0x10);
	push32(0x10);
	push32(0xFF);
	push32(0x72);
	push32(0x1E2);
	push32(0x72);
	ecx = 0x6E; //mov
	ebx = 0x27C; //mov
	push32(0x280);
	eax = 0x1E6; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x10);
	push32(0x10);
	push32(0x10);
	push32(0xFF);
	push32(0x72);
	push32(0x1E2);
	push32(0x6E);
	ecx = 0x28; //mov
	ebx = 0x1E6; //mov
	push32(0x1E6);
	edx = 0x24; //mov
	eax = 0x1E2; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x2F);
	push32(0x2F);
	push32(0x2F);
	push32(0xFF);
	push32(0x28);
	push32(0x1E6);
	push32(0x28);
	ecx = 0x25; //mov
	ebx = 0x27F; //mov
	push32(0x27C);
	eax = 0x1E3; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x2F);
	push32(0x2F);
	push32(0x2F);
	push32(0xFF);
	push32(0x6E);
	push32(0x27C);
	push32(0x71);
	ecx = 0x25; //mov
	ebx = 0x27F; //mov
	push32(0x27F);
	edx = 0x28; //mov
	eax = 0x27C; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x70);
	push32(0x70);
	push32(0x70);
	push32(0xFF);
	push32(0x71);
	push32(0x1E3);
	push32(0x71);
	ecx = 0x6E; //mov
	ebx = 0x27C; //mov
	push32(0x27F);
	eax = 0x1E6; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	push32(0x70);
	push32(0x70);
	push32(0x70);
	push32(0xFF);
	push32(0x71);
	push32(0x1E3);
	push32(0x6E);
	ecx = 0x28; //mov
	ebx = 0x1E6; //mov
	push32(0x1E6);
	edx = 0x25; //mov
	eax = 0x1E3; //mov
	esp -= 4; _sub_47D1A0(); esp += 4; //call
	edx = to32i(dword_4D9938); //mov
	test(edx, edx);
	if (jle())
		goto loc_47BDA3;
	dec(edx);
loc_47BD52:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	xor_(ecx, ecx);
	ebx = to32i(dword_4D9938); //mov
	to32i(dword_55AA98+eax*4) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_47BDAA;
	edx = (int32_t)(intptr_t)(ebx-1); //lea
loc_47BD76:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)dword_55AA98; //mov
	shl(eax, (int32_t)2);
	esi = esp; //mov
	add(edx, eax);
	edi = ebp; //mov
	to32i(esp+4) = edx; //mov
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47BDA3:
	edx = 0x77; //mov
	goto loc_47BD52;
loc_47BDAA:
	edx = 0x77; //mov
	goto loc_47BD76;
}
Fn(void) Game::_sub_47BDC0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	to32i(esp+8) = edx; //mov
	to32i(esp) = ebx; //mov
	ah = to8i(eax); //mov
	ecx = edx; //mov
	test(ah, ah);
	if (jz())
		goto loc_47BE65;
	xor_(ebp, ebp);
loc_47BDDE:
	al = to8i(edi); //mov
	ah = al; //mov
	xor_(edx, edx);
	cmp(al, (int8_t)0x7B);
	if (jnb())
		goto loc_47BE6D;
	cmp(al, (int8_t)0x3D);
	if (jnb())
		goto loc_47BF4B;
	cmp(al, (int8_t)0x2C);
	if (jnb())
		goto loc_47BFA2;
	cmp(al, (int8_t)0xA);
	if (jnb())
		goto loc_47BFD1;
loc_47BE04:
	and_(eax, (int32_t)0xFF);
	esp -= 4; _toupper_(); esp += 4; //call
	esi = to32i(dword_558880+eax*4); //mov
	test(esi, esi);
	if (jz())
		goto loc_47BFFD;
	eax = to32i(esi); //mov
	eax = to32i(eax+2); //mov
	ebx = to32i(dword_55E438); //mov
	sar(eax, (int32_t)0x10);
	sub(ebx, eax);
	eax = ebx; //mov
	sar(eax, (int32_t)1);
	add(ecx, eax);
	add(edx, to32i(esp));
	to32i(esp+4) = ebx; //mov
	ebx = (int32_t)(intptr_t)(edx+ebp); //lea
	eax = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47C020(); esp += 4; //call
	eax = to32i(esi); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	add(ecx, eax);
	eax = to32i(esp+4); //mov
	inc(eax);
	sar(eax, (int32_t)1);
	add(ecx, eax);
	dl = to8i(edi+1); //mov
	inc(edi);
	test(dl, dl);
	if (jnz())
		goto loc_47BDDE;
loc_47BE65:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_47BE6D:
	if (ja())
		goto loc_47BE73;
loc_47BE6F:
	al = 0x28; //mov
	goto loc_47BE04;
loc_47BE73:
	cmp(al, (int8_t)0xE7);
	if (jnb())
		goto loc_47BE93;
	cmp(al, (int8_t)0xBF);
	if (jnb())
		goto loc_47BEFF;
	cmp(al, (int8_t)0x7D);
	if (jnb())
		goto loc_47BF33;
	edx = 1; //mov
	al = 0x49; //mov
	goto loc_47BE04;
loc_47BE93:
	if (ja())
		goto loc_47BE9C;
	al = 0xC7; //mov
	goto loc_47BE04;
loc_47BE9C:
	cmp(al, (int8_t)0xF3);
	if (jnb())
		goto loc_47BEB3;
	cmp(al, (int8_t)0xED);
	if (jnb())
		goto loc_47BEE7;
	cmp(al, (int8_t)0xE9);
	if (jnz())
		goto loc_47BE04;
	al = 0xC9; //mov
	goto loc_47BE04;
loc_47BEB3:
	if (ja())
		goto loc_47BEBC;
	al = 0xD3; //mov
	goto loc_47BE04;
loc_47BEBC:
	cmp(al, (int8_t)0xFA);
	if (jnb())
		goto loc_47BECF;
	cmp(al, (int8_t)0xF6);
	if (jnz())
		goto loc_47BE04;
	al = 0xD6; //mov
	goto loc_47BE04;
loc_47BECF:
	if (ja())
		goto loc_47BED8;
	al = 0xDA; //mov
	goto loc_47BE04;
loc_47BED8:
	cmp(al, (int8_t)0xFC);
	if (jnz())
		goto loc_47BE04;
	al = 0xDC; //mov
	goto loc_47BE04;
loc_47BEE7:
	if (ja())
		goto loc_47BEF0;
	al = 0xCD; //mov
	goto loc_47BE04;
loc_47BEF0:
	cmp(al, (int8_t)0xF1);
	if (jnz())
		goto loc_47BE04;
	al = 0xD1; //mov
	goto loc_47BE04;
loc_47BEFF:
	if (ja())
		goto loc_47BF08;
	al = 0xA8; //mov
	goto loc_47BE04;
loc_47BF08:
	cmp(al, (int8_t)0xE4);
	if (jnb())
		goto loc_47BF1B;
	cmp(al, (int8_t)0xE1);
	if (jnz())
		goto loc_47BE04;
	al = 0xC1; //mov
	goto loc_47BE04;
loc_47BF1B:
	if (ja())
		goto loc_47BF24;
	al = 0xC4; //mov
	goto loc_47BE04;
loc_47BF24:
	cmp(al, (int8_t)0xE5);
	if (jnz())
		goto loc_47BE04;
	al = 0xC5; //mov
	goto loc_47BE04;
loc_47BF33:
	if (ja())
		goto loc_47BF3C;
loc_47BF35:
	al = 0x29; //mov
	goto loc_47BE04;
loc_47BF3C:
	cmp(al, (int8_t)0xA1);
	if (jnz())
		goto loc_47BE04;
	al = 0xAD; //mov
	goto loc_47BE04;
loc_47BF4B:
	if (ja())
		goto loc_47BF57;
	edx = 3; //mov
	goto loc_47BE04;
loc_47BF57:
	cmp(al, (int8_t)0x5E);
	if (jnb())
		goto loc_47BF71;
	cmp(al, (int8_t)0x5B);
	if (jnb())
		goto loc_47BF93;
	cmp(al, (int8_t)0x49);
	if (jnz())
		goto loc_47BE04;
loc_47BF67:
	edx = 1; //mov
	goto loc_47BE04;
loc_47BF71:
	if (ja())
		goto loc_47BF7A;
loc_47BF73:
	al = 0x91; //mov
	goto loc_47BE04;
loc_47BF7A:
	cmp(al, (int8_t)0x60);
	if (jnb())
		goto loc_47BF88;
	edx = 6; //mov
	goto loc_47BE04;
loc_47BF88:
	if (jbe())
		goto loc_47BF73;
	cmp(al, (int8_t)0x69);
	if (jz())
		goto loc_47BF67;
	goto loc_47BE04;
loc_47BF93:
	if (jbe())
		goto loc_47BE6F;
	cmp(al, (int8_t)0x5D);
	if (jz())
		goto loc_47BF35;
	goto loc_47BE04;
loc_47BFA2:
	if (ja())
		goto loc_47BFAE;
	edx = 1; //mov
	goto loc_47BE04;
loc_47BFAE:
	cmp(al, (int8_t)0x2E);
	if (jnb())
		goto loc_47BFBC;
	edx = 2; //mov
	goto loc_47BE04;
loc_47BFBC:
	if (ja())
		goto loc_47BFC8;
	edx = 1; //mov
	goto loc_47BE04;
loc_47BFC8:
	cmp(al, (int8_t)0x31);
	if (jz())
		goto loc_47BF67;
	goto loc_47BE04;
loc_47BFD1:
	if (ja())
		goto loc_47BFE9;
	ecx = to32i(esp+8); //mov
	al = 0x20; //mov
	ebx = to32i(dword_55E438); //mov
	add(ebp, (int32_t)0xF);
	sub(ecx, ebx);
	goto loc_47BE04;
loc_47BFE9:
	cmp(al, (int8_t)0x27);
	if (jnz())
		goto loc_47BE04;
	edx = 0xFFFFFFFC; //mov
	al = 0x2C; //mov
	goto loc_47BE04;
loc_47BFFD:
	add(ecx, to32i(dword_55E438));
	dl = to8i(edi+1); //mov
	inc(edi);
	test(dl, dl);
	if (jnz())
		goto loc_47BDDE;
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_47C020()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x28);
	ecx = eax; //mov
	edi = 0x15; //mov
	to32i(esp+0x20) = eax; //mov
	xor_(esi, esi);
	to32i(esp+8) = edx; //mov
	to32i(esp) = esi; //mov
	to32i(esp+4) = edi; //mov
	eax = to32i(eax); //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)4);
	sar(eax, (int32_t)0x14);
	add(ebx, eax);
	to32i(esp+0xC) = ebx; //mov
	eax = to32i(ecx); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ecx); //mov
	eax = to32i(eax+4); //mov
	edx = 0xFFFFF7F7; //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x14) = eax; //mov
	eax = esp; //mov
	to32i(esp+0x24) = edx; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	add(esp, (int32_t)0x28);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_47C090()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	cmp(to32i(dword_512010), (int32_t)0);
	if (jz())
		goto loc_47C0FD;
	esi = to32i(dword_51201C); //mov
	cmp(esi, (int32_t)1);
	if (jnb())
		goto loc_47C0E4;
	test(esi, esi);
	if (jnz())
		goto loc_47C0BB;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_558C90; //mov
loc_47C0B9:
	movsd();
	movsd();
loc_47C0BB:
	cmp(to32i(dword_512014), (int32_t)0);
	if (jz())
		goto loc_47C0D3;
	esi = to32i(dword_512020); //mov
	cmp(esi, (int32_t)1);
	if (jnb())
		goto loc_47C106;
	test(esi, esi);
	if (jz())
		goto loc_47C130;
loc_47C0D3:
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47C0E4:
	if (ja())
		goto loc_47C0EF;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_55BF48; //mov
	goto loc_47C0B9;
loc_47C0EF:
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_47C0BB;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_55BF40; //mov
	goto loc_47C0B9;
loc_47C0FD:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	goto loc_47C0BB;
loc_47C106:
	if (jbe())
		goto loc_47C161;
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_47C0D3;
	esi = to32i(dword_557D2C); //mov
	push32(esi);
	edi = to32i(dword_557D28); //mov
	push32(edi);
	ebp = to32i(esp+0xC); //mov
	push32(ebp);
	eax = to32i(esp+0xC); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	goto loc_47C0D3;
loc_47C130:
	ebp = to32i(dword_557CFC); //mov
	push32(ebp);
	eax = to32i(dword_557CF8); //mov
	push32(eax);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47C161:
	ecx = to32i(dword_558C84); //mov
	push32(ecx);
	ebx = to32i(dword_558C80); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	edi = to32i(esp+0xC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47C1A0()
{
	push32(esi);
	esi = edx; //mov
	edx = to32i(esp+8); //mov
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_47C1E3;
	al = 0x2D; //mov
loc_47C1AD:
	sub(al, (int8_t)0x2D);
	cmp(al, (int8_t)0xE);
	if (ja())
		goto loc_47C1F3;
	cmp(esi, (int32_t)4);
	if (jnz())
		goto loc_47C205;
	and_(eax, (int32_t)0xFF);
	eax = to32i(dword_4D9CC1+eax); //mov
	sar(eax, (int32_t)0x18);
	add(eax, (int32_t)0x21);
loc_47C1C9:
	to32i(ecx) = eax; //mov
	to32i(edx) = 0x1D; //mov
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_47C2A3;
	eax = 1; //mov
	pop32(esi);
	esp += 4; return;
loc_47C1E3:
	cmp(al, (int8_t)0x2C);
	if (jnz())
		goto loc_47C1EB;
	al = 0x2E; //mov
	goto loc_47C1AD;
loc_47C1EB:
	cmp(al, (int8_t)0x27);
	if (jnz())
		goto loc_47C1AD;
	al = 0x3B; //mov
	goto loc_47C1AD;
loc_47C1F3:
	to32i(ecx) = 0xFFFFFF81; //mov
	xor_(eax, eax);
	to32i(edx) = 0; //mov
	pop32(esi);
	esp += 4; return;
loc_47C205:
	cmp(esi, (int32_t)3);
	if (jnz())
		goto loc_47C214;
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)0x29);
	goto loc_47C1C9;
loc_47C214:
	cmp(to32i(dword_51201C+ebx*4), (int32_t)0);
	if (jz())
		goto loc_47C24A;
	and_(eax, (int32_t)0xFF);
	ebx = to32i(dword_4D9CC1+eax); //mov
	sar(ebx, (int32_t)0x18);
	add(ebx, (int32_t)0x16);
	to32i(ecx) = ebx; //mov
	eax = to32i(dword_4D9CD0+eax); //mov
	sar(eax, (int32_t)0x18);
	to32i(edx) = eax; //mov
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_47C2A3;
	eax = 1; //mov
	pop32(esi);
	esp += 4; return;
loc_47C24A:
	test(esi, esi);
	if (jnz())
		goto loc_47C27A;
	and_(eax, (int32_t)0xFF);
	ebx = to32i(dword_4D9CC1+eax); //mov
	sar(ebx, (int32_t)0x18);
	add(ebx, (int32_t)0xB);
	to32i(ecx) = ebx; //mov
	eax = to32i(dword_4D9CD0+eax); //mov
	sar(eax, (int32_t)0x18);
	to32i(edx) = eax; //mov
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_47C2A3;
	eax = 1; //mov
	pop32(esi);
	esp += 4; return;
loc_47C27A:
	and_(eax, (int32_t)0xFF);
	ebx = to32i(dword_4D9CC1+eax); //mov
	sar(ebx, (int32_t)0x18);
	to32i(ecx) = ebx; //mov
	eax = to32i(dword_4D9CD0+eax); //mov
	sar(eax, (int32_t)0x18);
	to32i(edx) = eax; //mov
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_47C2A3;
	eax = 1; //mov
	pop32(esi);
	esp += 4; return;
loc_47C2A3:
	xor_(eax, eax);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_47C2B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	eax = to32i(dword_55E3C0); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	edx = to32i(dword_55E3C4); //mov
	test(edx, edx);
	if (jnz())
		goto loc_47C3BC;
loc_47C2CE:
	ecx = to32i(dword_560DD0); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47C2E7;
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560DD0) = ebx; //mov
loc_47C2E7:
	esi = to32i(dword_560C60); //mov
	test(esi, esi);
	if (jz())
		goto loc_47C300;
	eax = esi; //mov
	xor_(edi, edi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560C60) = edi; //mov
loc_47C300:
	ebp = to32i(dword_560C68); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_47C318;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_560C68) = eax; //mov
loc_47C318:
	edx = to32i(dword_560DDC); //mov
	test(edx, edx);
	if (jz())
		goto loc_47C331;
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560DDC) = ecx; //mov
loc_47C331:
	ebx = to32i(dword_55E448); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_47C34A;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_55E448) = esi; //mov
loc_47C34A:
	edi = to32i(dword_560DD8); //mov
	test(edi, edi);
	if (jz())
		goto loc_47C363;
	eax = edi; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560DD8) = ebp; //mov
loc_47C363:
	eax = to32i(dword_560DD4); //mov
	test(eax, eax);
	if (jz())
		goto loc_47C379;
	xor_(edx, edx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560DD4) = edx; //mov
loc_47C379:
	ecx = to32i(dword_560C64); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47C392;
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_560C64) = ebx; //mov
loc_47C392:
	esi = to32i(dword_55E304); //mov
	test(esi, esi);
	if (jz())
		goto loc_47C3AB;
	eax = esi; //mov
	xor_(edi, edi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_55E304) = edi; //mov
loc_47C3AB:
	ebp = to32i(dword_55E43C); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_47C3C8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47C3BC:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_47C2CE;
loc_47C3C8:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_55E43C) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47C3E0()
{
	to32i(dword_4EC648) = 1; //mov
}
Fn(void) Game::_sub_47C3F0()
{
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x128);
	esi = eax; //mov
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_47CD30(); esp += 4; //call
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_47C69D;
	cmp(to32i(dword_512214), (int32_t)2);
	if (jl())
		goto loc_47C618;
	eax = (int32_t)(intptr_t)aR_2; //mov
loc_47C422:
	push32(eax);
	push32(aSplitS_msk);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = to32i(dword_4D9940); //mov
	add(esp, (int32_t)0xC);
	test(eax, eax);
	if (jnz())
		goto loc_47C622;
loc_47C442:
	xor_(ecx, ecx);
	xor_(esi, esi);
loc_47C446:
	eax = to32i(dword_55E3C0); //mov
	edx = esi; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_49D76C(); esp += 4; //call
	inc(esi);
	to32i(dword_55E304+ecx) = eax; //mov
	cmp(esi, (int32_t)0x2D);
	if (jl())
		goto loc_47C446;
	xor_(edi, edi);
	to32i(dword_55E3C4) = edi; //mov
loc_47C46C:
	esi = 5; //mov
	xor_(ebp, ebp);
loc_47C473:
	push32(esi);
	imul32(ecx, esi, 0x1C);
	imul32(edi, esi, 0x1C);
	eax = 0x40; //mov
	push32(aHdDa);
	to32i(dword_4D9944) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x10C); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x110); //lea
	ebx = ebp; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(dword_55E430); //mov
	add(ecx, (int32_t)(intptr_t)dword_558820);
	esp -= 4; _sub_4352C0(); esp += 4; //call
	to32i(dword_4D9944) = ebp; //mov
	add(edi, (int32_t)(intptr_t)dword_558820);
loc_47C4BE:
	inc(esi);
	add(edi, (int32_t)0x1C);
	cmp(esi, (int32_t)8);
	if (jl())
		goto loc_47C985;
	ebp = 0xB4; //mov
	xor_(edi, edi);
	xor_(esi, esi);
loc_47C4D4:
	eax = (int32_t)(intptr_t)(esp+0x12C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x124); //lea
	ebx = (int32_t)(intptr_t)(esp+0x128); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x124); //lea
	eax = esi; //mov
	esp -= 4; _sub_458670(); esp += 4; //call
	cmp(ebp, to32i(esp+0x124));
	if (jge())
		goto loc_47C508;
	to32i(esp+0x124) = ebp; //mov
loc_47C508:
	eax = (int32_t)(intptr_t)(esp+0x11C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x114); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x11C); //lea
	ebx = to32i(esp+0x128); //mov
	push32(eax);
	edx = to32i(esp+0x130); //mov
	eax = to32i(esp+0x128); //mov
	esp -= 4; _sub_457FA8(); esp += 4; //call
	eax = to32i(esp+0x114); //mov
	edx = to32i(esp+0x118); //mov
	shl(eax, (int32_t)0x10);
	shl(edx, (int32_t)8);
	or_(eax, (int32_t)0xFF000000);
	or_(eax, edx);
	edx = to32i(esp+0x11C); //mov
	add(edi, (int32_t)4);
	or_(eax, edx);
	inc(esi);
	to32i(dword_560C68+edi) = eax; //mov
	cmp(esi, (int32_t)0x59);
	if (jl())
		goto loc_47C4D4;
	esi = (int32_t)(intptr_t)dword_558900; //mov
	edi = 0x20; //mov
	xor_(ecx, ecx);
	xor_(ebp, ebp);
	to32i(dword_55E438) = ecx; //mov
loc_47C584:
	push32(edi);
	push32(aF03d);
	eax = (int32_t)(intptr_t)(esp+0x10C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0x104); //lea
	eax = to32i(dword_51206C); //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47CA1B;
	eax = (int32_t)(intptr_t)dword_557D30; //mov
	edx = (int32_t)(intptr_t)(esp+0x104); //lea
	add(eax, ebp);
	xor_(ebx, ebx);
	ecx = eax; //mov
	to32i(esi) = eax; //mov
	eax = to32i(dword_51206C); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	eax = to32i(dword_557D30+ebp); //mov
	eax = to32i(eax+2); //mov
	ebx = to32i(dword_55E438); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, ebx);
	if (jle())
		goto loc_47C5EC;
	to32i(dword_55E438) = eax; //mov
loc_47C5EC:
	add(ebp, (int32_t)0x1C);
loc_47C5EF:
	inc(edi);
	add(esi, (int32_t)4);
	cmp(edi, (int32_t)0xFF);
	if (jle())
		goto loc_47CA0A;
loc_47C5FF:
	pop32(ebx);
	pop32(ecx);
loc_47C601:
	cmp(edi, (int32_t)0xFF);
	if (jg())
		goto loc_47CA22;
	to32i(esi) = 0; //mov
	add(esi, (int32_t)4);
	goto loc_47C601;
loc_47C618:
	eax = (int32_t)(intptr_t)dword_4CE924; //mov
	goto loc_47C422;
loc_47C622:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	ecx = (int32_t)(intptr_t)(esp+0x110); //lea
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	xor_(ebx, ebx);
	eax = to32i(dword_4D9940); //mov
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47C442;
	edx = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	ecx = 0x2EA; //mov
	eax = (int32_t)(intptr_t)aHuddata1; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = to32i(esp+0x110); //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(esp+0x10C); //mov
	ecx = to32i(dword_4D9940); //mov
	to32i(dword_55E3C0) = eax; //mov
	edx = eax; //mov
	add(ecx, ebx);
	ebx = to32i(esp+0x110); //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47C442;
loc_47C69D:
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_47C8B3;
	cmp(to32i(dword_512214), (int32_t)2);
	if (jl())
		goto loc_47C739;
	eax = (int32_t)(intptr_t)aR_2; //mov
loc_47C6B8:
	push32(eax);
	push32(aHudS_msk);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	edx = to32i(dword_4D9940); //mov
	add(esp, (int32_t)0xC);
	test(edx, edx);
	if (jnz())
		goto loc_47C743;
loc_47C6D5:
	xor_(ebx, ebx);
	xor_(ecx, ecx);
loc_47C6D9:
	eax = to32i(dword_55E3C0); //mov
	edx = ecx; //mov
	add(ebx, (int32_t)4);
	esp -= 4; _sub_49D76C(); esp += 4; //call
	inc(ecx);
	to32i(dword_55E304+ebx) = eax; //mov
	cmp(ecx, (int32_t)0x1E);
	if (jl())
		goto loc_47C6D9;
	push32(esi);
	push32(aDsh02d_msk);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	edi = to32i(dword_4D9940); //mov
	add(esp, (int32_t)0xC);
	test(edi, edi);
	if (jnz())
		goto loc_47C7BB;
loc_47C715:
	xor_(ecx, ecx);
	xor_(esi, esi);
loc_47C719:
	eax = to32i(dword_55E3C4); //mov
	edx = esi; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_49D76C(); esp += 4; //call
	inc(esi);
	to32i(dword_55E3C4+ecx) = eax; //mov
	cmp(esi, (int32_t)0x19);
	if (jl())
		goto loc_47C719;
	goto loc_47C46C;
loc_47C739:
	eax = (int32_t)(intptr_t)dword_4CE924; //mov
	goto loc_47C6B8;
loc_47C743:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	ecx = (int32_t)(intptr_t)(esp+0x110); //lea
	xor_(ebx, ebx);
	push32(eax);
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47C6D5;
	ecx = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	ebx = 0x30D; //mov
	edx = to32i(esp+0x110); //mov
	eax = (int32_t)(intptr_t)aHuddata2; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edi = to32i(esp+0x10C); //mov
	ebx = to32i(esp+0x110); //mov
	ecx = to32i(dword_4D9940); //mov
	to32i(dword_55E3C0) = eax; //mov
	add(ecx, edi);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47C6D5;
loc_47C7BB:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	ecx = (int32_t)(intptr_t)(esp+0x110); //lea
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	xor_(ebx, ebx);
	eax = edi; //mov
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47C82F;
	ecx = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	ebx = 0x328; //mov
	edx = to32i(esp+0x110); //mov
	eax = (int32_t)(intptr_t)aHuddash; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = to32i(esp+0x10C); //mov
	ebx = to32i(esp+0x110); //mov
	ecx = to32i(dword_4D9940); //mov
	to32i(dword_55E3C4) = eax; //mov
	add(ecx, esi);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47C715;
loc_47C82F:
	push32(aDsh00_msk);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	ecx = (int32_t)(intptr_t)(esp+0x10C); //lea
	edx = (int32_t)(intptr_t)(esp+8); //lea
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	xor_(ebx, ebx);
	push32(eax);
	eax = to32i(dword_4D9940); //mov
	ebp = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	eax = 0x32F; //mov
	edx = to32i(esp+0x110); //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = eax; //mov
	eax = (int32_t)(intptr_t)aHuddash; //mov
	to32i(dword_4DB1D8) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(esp+0x10C); //mov
	ebx = to32i(esp+0x110); //mov
	ecx = to32i(dword_4D9940); //mov
	to32i(dword_55E3C4) = eax; //mov
	add(ecx, edx);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47C715;
loc_47C8B3:
	cmp(to32i(dword_512214), (int32_t)2);
	if (jl())
		goto loc_47C90A;
	eax = (int32_t)(intptr_t)aR_2; //mov
loc_47C8C1:
	push32(eax);
	push32(aHudS_msk);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	ebx = to32i(dword_4D9940); //mov
	add(esp, (int32_t)0xC);
	test(ebx, ebx);
	if (jnz())
		goto loc_47C911;
loc_47C8DE:
	xor_(ebx, ebx);
	xor_(ecx, ecx);
loc_47C8E2:
	eax = to32i(dword_55E3C0); //mov
	edx = ecx; //mov
	add(ebx, (int32_t)4);
	esp -= 4; _sub_49D76C(); esp += 4; //call
	inc(ecx);
	to32i(dword_55E304+ebx) = eax; //mov
	cmp(ecx, (int32_t)0x1E);
	if (jl())
		goto loc_47C8E2;
	xor_(esi, esi);
	to32i(dword_55E3C4) = esi; //mov
	goto loc_47C46C;
loc_47C90A:
	eax = (int32_t)(intptr_t)dword_4CE924; //mov
	goto loc_47C8C1;
loc_47C911:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	ecx = (int32_t)(intptr_t)(esp+0x110); //lea
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	eax = ebx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47C8DE;
	esi = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	edi = 0x35A; //mov
	edx = to32i(esp+0x110); //mov
	eax = (int32_t)(intptr_t)aHuddata3; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebp = to32i(esp+0x10C); //mov
	ebx = to32i(esp+0x110); //mov
	ecx = to32i(dword_4D9940); //mov
	to32i(dword_55E3C0) = eax; //mov
	add(ecx, ebp);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47C8DE;
loc_47C985:
	cmp(esi, (int32_t)5);
	if (jz())
		goto loc_47C473;
	cmp(esi, (int32_t)6);
	if (jnz())
		goto loc_47C9DA;
	ecx = to32i(dword_512234); //mov
	push32(ecx);
	edx = 0x100; //mov
	push32(aTpgD);
	eax = (int32_t)(intptr_t)(esp+0x10C); //lea
	ebx = ebp; //mov
	push32(eax);
	to32i(dword_4D9944) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x110); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	ecx = edi; //mov
	eax = to32i(dword_55E430); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	to32i(dword_4D9944) = ebp; //mov
	goto loc_47C4BE;
loc_47C9DA:
	push32(esi);
	push32(aHudD);
	eax = (int32_t)(intptr_t)(esp+0x10C); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x110); //lea
	ecx = edi; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	ebx = ebp; //mov
	eax = to32i(dword_55E430); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	goto loc_47C4BE;
loc_47CA0A:
	cmp(ebp, (int32_t)0xAF0);
	if (jl())
		goto loc_47C584;
	goto loc_47C5FF;
loc_47CA1B:
	to32i(esi) = eax; //mov
	goto loc_47C5EF;
loc_47CA22:
	push32(aBack0_rlf);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_55BF58; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aBack1_rlf);
	to32i(dword_560DD0) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_55BF38; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aBack2_rlf);
	to32i(dword_560C60) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_558C88; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aMapbkg_rlf);
	to32i(dword_560C68) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_55BF50; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aTop0_rlf);
	to32i(dword_560DDC) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_558C90; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	to32i(dword_55E448) = eax; //mov
	push32(aTop1_rlf);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_55BF48; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aTop2_rlf);
	to32i(dword_560DD4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_55BF40; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aBottom0_rlf);
	to32i(dword_560DD8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_557CF8; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aBottom1_rlf);
	to32i(dword_560C64) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_558C80; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	push32(aBottom2_rlf);
	to32i(dword_55E304) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)dword_557D28; //mov
	eax = esp; //mov
	esp -= 4; _sub_47CBF0(); esp += 4; //call
	to32i(dword_55E43C) = eax; //mov
	add(esp, (int32_t)0x128);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_47CB90()
{
	push32(edx);
	edx = to32i(dword_4D9940); //mov
	test(edx, edx);
	if (jnz())
		goto loc_47CB9D;
	pop32(edx);
	return;
loc_47CB9D:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D9940) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_47CBB0()
{
	push32(edx);
	sub(esp, (int32_t)0xFC);
	edx = to32i(dword_51349C); //mov
	push32(edx);
	push32(aShuddata_viv);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F50(); esp += 4; //call
	to32i(dword_4D9940) = eax; //mov
	add(esp, (int32_t)0xFC);
	pop32(edx);
}
Fn(void) Game::_sub_47CBF0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = edx; //mov
	cmp(to32i(dword_4D9940), (int32_t)0);
	if (jnz())
		goto loc_47CC2E;
loc_47CC03:
	eax = esi; //mov
loc_47CC05:
	edx = to32i(esp+4); //mov
	add(edx, esi);
	cmp(eax, edx);
	if (jnb())
		goto loc_47CD0A;
	edx = to32i(eax+4); //mov
	cmp(edx, (int32_t)0x1D);
	if (jnb())
		goto loc_47CC99;
	cmp(edx, (int32_t)0x12);
	if (jnb())
		goto loc_47CCD3;
loc_47CC28:
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CC2E:
	push32(0);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(edx);
	edx = to32i(dword_4D9940); //mov
	xor_(ebx, ebx);
	to32i(esp+0x10) = edx; //mov
	edx = eax; //mov
	eax = to32i(esp+0x10); //mov
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47CC03;
	ecx = (int32_t)(intptr_t)aCNfs2seGamePcH; //mov
	ebx = 0x272; //mov
	edx = to32i(esp+4); //mov
	eax = (int32_t)(intptr_t)aFacetlst; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(esp); //mov
	ebx = to32i(esp+4); //mov
	ecx = to32i(dword_4D9940); //mov
	esi = eax; //mov
	add(ecx, edx);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_47CC03;
loc_47CC99:
	if (ja())
		goto loc_47CCA9;
	edx = (int32_t)(intptr_t)(eax+0x2C); //lea
	to32i(eax) = edx; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CCA9:
	cmp(edx, (int32_t)0x1E);
	if (ja())
		goto loc_47CCBC;
	edx = (int32_t)(intptr_t)(eax+0x28); //lea
	to32i(eax) = edx; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CCBC:
	cmp(edx, (int32_t)0x21);
	if (jnz())
		goto loc_47CC28;
	edx = (int32_t)(intptr_t)(eax+0x40); //lea
	to32i(eax) = edx; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CCD3:
	if (ja())
		goto loc_47CCE3;
	edx = (int32_t)(intptr_t)(eax+0x14); //lea
	to32i(eax) = edx; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CCE3:
	cmp(edx, (int32_t)0x14);
	if (jnz())
		goto loc_47CC28;
	edx = (int32_t)(intptr_t)(eax+0x24); //lea
	ebx = to32i(eax+0x20); //mov
	to32i(eax) = edx; //mov
	imul32(edx, ebx, 0x1C);
	edi = (int32_t)(intptr_t)dword_558820; //mov
	add(edi, edx);
	to32i(eax+0x20) = edi; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	goto loc_47CC05;
loc_47CD0A:
	to32i(edi) = 0; //mov
	to32i(ebp+0) = esi; //mov
	eax = esi; //mov
	to32i(ebp+4) = edi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47CD30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = 0x10; //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	to32i(dword_55E440) = edx; //mov
	to32i(dword_55E444) = edx; //mov
	to32i(dword_55E42C) = edx; //mov
	xor_(bl, bl);
loc_47CD51:
	eax = ecx; //mov
	edx = esi; //mov
	shl(eax, (int32_t)5);
loc_47CD58:
	inc(eax);
	byte_5579F7[eax] = bl; //mov
	(dword_5579E4+3)[eax] = bl; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_47CD58;
	inc(ecx);
	add(esi, (int32_t)0x20);
	cmp(ecx, (int32_t)0xE);
	if (jl())
		goto loc_47CD51;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47CD80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	eax = (int32_t)(intptr_t)dword_557BA8; //mov
	ecx = 0x13E; //mov
	xor_(edx, edx);
	esi = 0x45; //mov
	esp -= 4; _sub_47CF20(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_557C18; //mov
	xor_(edx, edx);
	ebp = 0x135; //mov
	esp -= 4; _sub_47CF20(); esp += 4; //call
	edx = 0xF1; //mov
	eax = (int32_t)(intptr_t)dword_557C88; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_47CF20(); esp += 4; //call
	edx = 0x214; //mov
	eax = to32i(dword_51206C); //mov
	to32i(dword_557BD4) = ecx; //mov
	to32i(dword_557C40) = ebx; //mov
	to32i(dword_557C44) = esi; //mov
	to32i(dword_557CB0) = ebx; //mov
	to32i(dword_557BD0) = edx; //mov
	edx = (int32_t)(intptr_t)aHud2; //mov
	to32i(dword_557CB4) = ebp; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_49E584(); esp += 4; //call
	ecx = to32i(edx+0xC); //mov
	ebx = to32i(eax); //mov
	shl(ecx, (int32_t)0x14);
	edx = to32i(edx+0xC); //mov
	sar(ecx, (int32_t)0x14);
	shl(edx, (int32_t)4);
	add(ebx, ecx);
	sar(edx, (int32_t)0x14);
	to32i(dword_557C08) = ebx; //mov
	ebx = to32i(eax+4); //mov
	add(ebx, edx);
	to32i(dword_557C0C) = ebx; //mov
	ebx = to32i(eax+8); //mov
	eax = to32i(eax+0xC); //mov
	add(eax, edx);
	to32i(dword_557C04) = eax; //mov
	eax = to32i(dword_557C08); //mov
	add(ecx, ebx);
	to32i(dword_557C78) = eax; //mov
	eax = to32i(dword_557C0C); //mov
	to32i(dword_557C00) = ecx; //mov
	edx = (int32_t)(intptr_t)(eax-0xF0); //lea
	to32i(dword_557C70) = ecx; //mov
	to32i(dword_557C7C) = edx; //mov
	to32i(dword_557CEC) = eax; //mov
	edx = to32i(dword_557C04); //mov
	eax = to32i(dword_557C70); //mov
	ecx = (int32_t)(intptr_t)(edx-0xF0); //lea
	to32i(dword_557CE0) = eax; //mov
	eax = to32i(dword_51206C); //mov
	to32i(dword_557C74) = ecx; //mov
	to32i(dword_557CE4) = edx; //mov
	ecx = to32i(dword_557C78); //mov
	edx = (int32_t)(intptr_t)aHud3; //mov
	to32i(dword_557CE8) = ecx; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_49E584(); esp += 4; //call
	ebx = to32i(edx+0xC); //mov
	ecx = to32i(eax); //mov
	shl(ebx, (int32_t)0x14);
	edx = to32i(edx+0xC); //mov
	eax = to32i(eax+4); //mov
	shl(edx, (int32_t)4);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	add(ecx, ebx);
	ebx = 0x1D4; //mov
	to32i(dword_557BF0) = ecx; //mov
	add(eax, edx);
	ecx = 0x140; //mov
	to32i(dword_557BF4) = eax; //mov
	to32i(dword_557C14) = ebx; //mov
	to32i(dword_557C84) = ebx; //mov
	xor_(edx, edx);
	eax = 0xFFFFFFFF; //mov
	to32i(dword_557C10) = ecx; //mov
	to32i(dword_557C80) = ecx; //mov
	to32i(dword_557CF0) = ecx; //mov
	to32i(dword_55E42C) = edx; //mov
	to32i(dword_557C60) = eax; //mov
	to32i(dword_557CD0) = eax; //mov
	eax = 0x24C; //mov
	to32i(dword_55E440) = edx; //mov
	to32i(dword_557CF4) = eax; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47CF20()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)aHud0; //mov
	eax = to32i(dword_51206C); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_49E584(); esp += 4; //call
	edi = to32i(edx+0xC); //mov
	shl(edi, (int32_t)0x14);
	esi = to32i(eax); //mov
	sar(edi, (int32_t)0x14);
	add(esi, edi);
	to32i(ecx+0x18) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	edi = to32i(eax+4); //mov
	sar(esi, (int32_t)0x14);
	add(esi, edi);
	add(esi, ebx);
	to32i(ecx+0x1C) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+8); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx+0x20) = edi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	ebp = to32i(eax+0xC); //mov
	sar(esi, (int32_t)0x14);
	add(esi, ebp);
	add(esi, ebx);
	to32i(ecx+0x24) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+0x10); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx) = edi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	edi = to32i(eax+0x14); //mov
	sar(esi, (int32_t)0x14);
	add(esi, edi);
	add(esi, ebx);
	to32i(ecx+4) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+0x18); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx+0x40) = edi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	ebp = to32i(eax+0x1C); //mov
	sar(esi, (int32_t)0x14);
	add(esi, ebp);
	add(esi, ebx);
	to32i(ecx+0x44) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+0x20); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx+0x10) = edi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	edi = to32i(eax+0x24); //mov
	sar(esi, (int32_t)0x14);
	add(esi, edi);
	add(esi, ebx);
	to32i(ecx+0x14) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+0x28); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx+0x38) = edi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)4);
	ebp = to32i(eax+0x2C); //mov
	sar(esi, (int32_t)0x14);
	add(esi, ebp);
	add(esi, ebx);
	to32i(ecx+0x3C) = esi; //mov
	esi = to32i(edx+0xC); //mov
	shl(esi, (int32_t)0x14);
	edi = to32i(eax+0x30); //mov
	sar(esi, (int32_t)0x14);
	add(edi, esi);
	to32i(ecx+8) = edi; //mov
	edx = to32i(edx+0xC); //mov
	shl(edx, (int32_t)4);
	esi = to32i(eax+0x34); //mov
	sar(edx, (int32_t)0x14);
	add(edx, esi);
	add(edx, ebx);
	to32i(ecx+0xC) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47D040()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(dword_4D993C); //mov
	edi = eax; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D17C;
	xor_(eax, eax);
loc_47D056:
	ebp = (int32_t)(intptr_t)dword_558C98; //mov
	shl(eax, (int32_t)6);
	add(ebp, eax);
	eax = esi; //mov
	shl(eax, (int32_t)6);
	to32i(dword_558C98+eax) = ebp; //mov
	to32i(dword_558CA0+eax) = edi; //mov
	to32i(dword_558CA4+eax) = edx; //mov
	byte_558CC0[eax] = bl; //mov
	byte_558CC1[eax] = cl; //mov
	ebp = 0x21; //mov
	edx = to32i(esp+0x18); //mov
	to32i(dword_558C9C+eax) = ebp; //mov
	ecx = 0x3F800000; //mov
	to32i(dword_558CA8+eax) = edx; //mov
	to32i(dword_558CD4+eax) = ecx; //mov
	edx = to32i(esp+0x1C); //mov
	to32i(dword_558CAC+eax) = edx; //mov
	edx = to32i(esp+0x30); //mov
	to32i(dword_558CB0+eax) = edx; //mov
	edx = to32i(esp+0x34); //mov
	to32i(dword_558CB4+eax) = edx; //mov
	edx = to32i(esp+0x48); //mov
	to32i(dword_558CB8+eax) = edx; //mov
	edx = to32i(esp+0x4C); //mov
	to32i(dword_558CBC+eax) = edx; //mov
	dl = to8i(esp+0x10); //mov
	byte_558CC2[eax] = dl; //mov
	dl = to8i(esp+0x14); //mov
	byte_558CC3[eax] = dl; //mov
	dl = to8i(esp+0x20); //mov
	byte_558CC4[eax] = dl; //mov
	dl = to8i(esp+0x24); //mov
	byte_558CC5[eax] = dl; //mov
	dl = to8i(esp+0x28); //mov
	byte_558CC6[eax] = dl; //mov
	dl = to8i(esp+0x2C); //mov
	byte_558CC7[eax] = dl; //mov
	dl = to8i(esp+0x38); //mov
	byte_558CC8[eax] = dl; //mov
	dl = to8i(esp+0x3C); //mov
	byte_558CC9[eax] = dl; //mov
	dl = to8i(esp+0x40); //mov
	byte_558CCA[eax] = dl; //mov
	dl = to8i(esp+0x44); //mov
	byte_558CCB[eax] = dl; //mov
	dl = to8i(esp+0x50); //mov
	byte_558CCC[eax] = dl; //mov
	dl = to8i(esp+0x54); //mov
	byte_558CCD[eax] = dl; //mov
	dl = to8i(esp+0x58); //mov
	byte_558CCE[eax] = dl; //mov
	dl = to8i(esp+0x5C); //mov
	byte_558CCF[eax] = dl; //mov
	xor_(edx, edx);
	to32i(dword_558CD0+eax) = edx; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D184;
	xor_(esi, esi);
	to32i(dword_4D993C) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x50; return;
loc_47D17C:
	eax = (int32_t)(intptr_t)(esi+1); //lea
	goto loc_47D056;
loc_47D184:
	inc(esi);
	to32i(dword_4D993C) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x50; return;
}
Fn(void) Game::_sub_47D1A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(dword_4D9938); //mov
	edi = eax; //mov
	ebp = edx; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D277;
	xor_(edx, edx);
loc_47D1B8:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)dword_55AA98; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)2);
	sub(eax, esi);
	to32i(dword_55AA98+eax*4) = edx; //mov
	to32i(dword_55AAA0+eax*4) = edi; //mov
	to32i(dword_55AAA4+eax*4) = ebp; //mov
	to32i(dword_55AAA8+eax*4) = ebx; //mov
	to32i(dword_55AAAC+eax*4) = ecx; //mov
	to32i(dword_55AA9C+eax*4) = 0x1D; //mov
	edx = to32i(esp+0x10); //mov
	to32i(dword_55AAB0+eax*4) = edx; //mov
	edx = to32i(esp+0x14); //mov
	to32i(dword_55AAB4+eax*4) = edx; //mov
	edx = to32i(esp+0x18); //mov
	to32i(dword_55AAB8+eax*4) = edx; //mov
	edx = to32i(esp+0x1C); //mov
	to32i(dword_55AABC+eax*4) = edx; //mov
	dl = to8i(esp+0x20); //mov
	byte_55AAC0[eax*4] = dl; //mov
	dl = to8i(esp+0x24); //mov
	byte_55AAC1[eax*4] = dl; //mov
	dl = to8i(esp+0x28); //mov
	byte_55AAC2[eax*4] = dl; //mov
	dl = to8i(esp+0x2C); //mov
	byte_55AAC3[eax*4] = dl; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D27F;
	xor_(esi, esi);
	to32i(dword_4D9938) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x20; return;
loc_47D277:
	edx = (int32_t)(intptr_t)(esi+1); //lea
	goto loc_47D1B8;
loc_47D27F:
	inc(esi);
	to32i(dword_4D9938) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x20; return;
}
Fn(void) Game::_sub_47D290()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(dword_4D9934); //mov
	edi = edx; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D329;
	xor_(edx, edx);
loc_47D2A6:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	ebp = (int32_t)(intptr_t)dword_55D220; //mov
	shl(eax, (int32_t)2);
	add(ebp, eax);
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	edx = 0x14; //mov
	to32i(dword_55D220+eax*4) = ebp; //mov
	to32i(dword_55D224+eax*4) = edx; //mov
	to32i(dword_55D240+eax*4) = edi; //mov
	to32i(dword_55D228+eax*4) = ebx; //mov
	to32i(dword_55D22C+eax*4) = ecx; //mov
	edx = to32i(esp+0x18); //mov
	to32i(dword_55D230+eax*4) = edx; //mov
	edx = to32i(esp+0x1C); //mov
	to32i(dword_55D234+eax*4) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(dword_55D238+eax*4) = edx; //mov
	edx = to32i(esp+0x14); //mov
	to32i(dword_55D23C+eax*4) = edx; //mov
	cmp(esi, (int32_t)0x77);
	if (jl())
		goto loc_47D331;
	xor_(esi, esi);
	to32i(dword_4D9934) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_47D329:
	edx = (int32_t)(intptr_t)(esi+1); //lea
	goto loc_47D2A6;
loc_47D331:
	inc(esi);
	to32i(dword_4D9934) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_47D400()
{
	esp -= 4; _sub_484B3C(); esp += 4; //call
	to32i(dword_4DA1B4) = eax; //mov
}
Fn(void) Game::_sub_47D410()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x118);
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x100); //lea
	esi = (int32_t)(intptr_t)off_47D3E0; //mov
	edx = to32i(dword_51221C); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	push32(edx);
	ecx = to32i(dword_513498); //mov
	push32(ecx);
	push32(aSload_qfs);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	ebx = to32i(dword_512234); //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4289F0(); esp += 4; //call
	esp -= 4; _sub_4287C0(); esp += 4; //call
	eax = ecx; //mov
	edx = to32i(esp+ebx*4+0x100); //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_483460(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_47D4A8;
	add(esp, (int32_t)0x118);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47D4A8:
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x118);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47D4C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	edx = ebx; //mov
	esi = 0x42380000; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	push32(0);
	add(eax, edx);
	edx = 0x1B4; //mov
	shl(eax, (int32_t)3);
	to32i(dword_4DA164) = esi; //mov
	sub(edx, eax);
	to32i(dword_4DA184) = esi; //mov
	to32i(esp+4) = edx; //mov
	edx = (int32_t)(intptr_t)(ebx-1); //lea
	push32(1);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	fild(to32i(esp+8));
	add(eax, edx);
	edx = 0x1B4; //mov
	shl(eax, (int32_t)3);
	fstp(to32f(flt_4DA128));
	sub(edx, eax);
	fld(to32f(flt_4DA128));
	to32i(esp+8) = edx; //mov
	fstp(to32f(flt_4DA188));
	fild(to32i(esp+8));
	edx = 0x42000000; //mov
	fst(to32f(flt_4DA148));
	fstp(to32f(flt_4DA168));
	to32i(dword_4DA124) = edx; //mov
	to32i(dword_4DA144) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4DA1A4);
	push32(dword_4DA124);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	push32(dword_4DA1A4);
	push32(dword_4DA124);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	test(ebx, ebx);
	if (jle())
		goto loc_47D5B0;
	cmp(ebx, (int32_t)0xB);
	if (jl())
		goto loc_47D5B8;
loc_47D5B0:
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47D5B8:
	al = bl; //mov
	add(al, (int8_t)4);
	edx = al; //movsx
	eax = 0x1400; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47D5E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1B8);
	to32i(esp+0x1B4) = eax; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x194); //lea
	esi = (int32_t)(intptr_t)off_47D350; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esp+0x170); //lea
	esi = (int32_t)(intptr_t)off_47D380; //mov
	edx = to32i(esp+0x1B4); //mov
	eax = to32i(dword_512234); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(ebx, ebx);
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0x100); //lea
	esi = (int32_t)(intptr_t)off_47D3A4; //mov
	xor_(ebp, ebp);
	to32i(esp+0x1B0) = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(dword_51221C); //mov
	edi = 8; //mov
	xor_(esi, esi);
	test(dx, dx);
	if (jz())
		goto loc_47D675;
loc_47D654:
	cmp(to32i(dword_512214), (int32_t)0);
	if (jz())
		goto loc_47D67F;
	cmp(to16i(esp+0x1B4), (int16_t)0);
	if (jle())
		goto loc_47D67F;
loc_47D668:
	add(esp, (int32_t)0x1B8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47D675:
	xor_(edx, edx);
	to32i(dword_4DA11C) = edx; //mov
	goto loc_47D654;
loc_47D67F:
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jge())
		goto loc_47D6AD;
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_47D6AD;
	edx = to32i(dword_51220C); //mov
	cmp(to16i(dword_512F98+2+edx*2), (int16_t)0x24);
	if (jnz())
		goto loc_47D6AD;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jz())
		goto loc_47D668;
loc_47D6AD:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47D6DE;
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jge())
		goto loc_47D6DE;
	xor_(edx, edx);
	dl = to8i(byte_512DBD); //mov
	ecx = to32i(dword_512270); //mov
	add(edx, (int32_t)0xC);
	cmp(edx, ecx);
	if (jle())
		goto loc_47D668;
	cmp(edx, to32i(dword_5122B0));
	if (jle())
		goto loc_47D668;
loc_47D6DE:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jge())
		goto loc_47D70B;
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jge())
		goto loc_47D70B;
	xor_(edx, edx);
	dl = to8i(byte_512DBD); //mov
	ecx = to32i(dword_512270); //mov
	add(edx, (int32_t)0xC);
	cmp(edx, ecx);
	if (jle())
		goto loc_47D668;
loc_47D70B:
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jge())
		goto loc_47D723;
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_47D668;
loc_47D723:
	test(eax, eax);
	if (jl())
		goto loc_47D8A3;
	cmp(eax, (int32_t)8);
	if (jg())
		goto loc_47D8A3;
loc_47D734:
	shl(eax, (int32_t)2);
	to32i(esp+0x1AC) = eax; //mov
loc_47D73E:
	test(ebp, ebp);
	if (jnz())
		goto loc_47D8AA;
loc_47D746:
	ebp = to32i(dword_512208); //mov
	inc(ebx);
	cmp(ebp, (int32_t)1);
	if (jnz())
		goto loc_47D97F;
	eax = to32i(dword_5121F8); //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_47D97F;
	cmp(eax, to32i(dword_512264));
	if (jle())
		goto loc_47D97F;
	xor_(eax, eax);
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_47D972;
loc_47D780:
	si = (uint8_t)to8i(byte_512DBF); //movzx
loc_47D788:
	cmp(si, (int16_t)3);
	if (jnz())
		goto loc_47DA25;
loc_47D792:
	edi = 7; //mov
loc_47D797:
	cmp(si, (int16_t)0xC);
	if (jge())
		goto loc_47DA34;
	cl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	dl = cl; //mov
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	ebp = di; //movsx
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	inc(cl);
	to8i(byte_50B480) = cl; //mov
	inc(edx);
loc_47D7CA:
	cmp(si, (int16_t)3);
	if (jnz())
		goto loc_47DA3E;
loc_47D7D4:
	cmp(dx, (int16_t)7);
	if (jle())
		goto loc_47DA48;
	eax = dx; //movsx
	push32(eax);
	eax = si; //movsx
	push32(eax);
	ecx = (int32_t)(intptr_t)aCNfs2seGamePcL; //mov
	ebp = 0x99; //mov
	push32(aBadSlidePickCa);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = ebp; //mov
loc_47D801:
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)0xC);
loc_47D809:
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jz())
		goto loc_47DAA1;
	ebp = (uint8_t)to8i(byte_512DBD); //movzx
	eax = si; //movsx
	add(ebp, (int32_t)0xC);
	cmp(eax, ebp);
	if (jge())
		goto loc_47DAA1;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_47DAA1;
	shl(eax, (int32_t)2);
	cmp(dx, (int16_t)1);
	if (jz())
		goto loc_47DA7F;
	edx = dx; //movsx
	push32(edx);
	ecx = to32i(esp+eax+0x104); //mov
	push32(ecx);
	push32(aSD_3);
	eax = (int32_t)(intptr_t)(esp+0x148); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_47D868:
	eax = (int32_t)(intptr_t)(esp+0x13C); //lea
	push32(eax);
	ebp = to32i(dword_5134D0); //mov
	push32(ebp);
	push32(aSsldS_qfs);
loc_47D87C:
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = esp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488058(); esp += 4; //call
	ebp = eax; //mov
	cmp(bx, (int16_t)0x14);
	if (jg())
		goto loc_47D668;
	goto loc_47D73E;
loc_47D8A3:
	xor_(eax, eax);
	goto loc_47D734;
loc_47D8AA:
	if (jz())
		goto loc_47D746;
	esp -= 4; _sub_4287C0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	esp -= 4; _sub_4287C0(); esp += 4; //call
	edx = (int32_t)(intptr_t)aBack_3; //mov
	eax = ebp; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_482EA8(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_483460(); esp += 4; //call
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jnz())
		goto loc_47DAC0;
loc_47D8F2:
	edx = to32i(esp+0x1B0); //mov
	eax = ebp; //mov
	edx = to32i(esp+edx*4+0x194); //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_483460(); esp += 4; //call
loc_47D91E:
	esp -= 4; _sub_428770(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	test(ebp, ebp);
	if (jz())
		goto loc_47D933;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_47D933:
	ecx = to32i(esp+0x1B4); //mov
	test(cx, cx);
	if (jnz())
		goto loc_47DAE7;
loc_47D943:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_47D668;
	eax = to32i(dword_51221C); //mov
	edi = 1; //mov
	esp -= 4; _sub_476A00(); esp += 4; //call
	to32i(dword_4DA11C) = edi; //mov
	add(esp, (int32_t)0x1B8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47D972:
	si = (uint8_t)to8i(byte_512DDA); //movzx
	goto loc_47D788;
loc_47D97F:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47D9CE;
	cmp(to16i(esp+0x1B4), (int16_t)1);
	if (jnz())
		goto loc_47D9CE;
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512DBD); //mov
	dl = to8i(byte_512DDA); //mov
	add(eax, (int32_t)0xC);
	si = (uint8_t)to8i(byte_512DDA); //movzx
	cmp(edx, eax);
	if (jl())
		goto loc_47D788;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	cmp(edx, eax);
	if (jge())
		goto loc_47D788;
	si = (uint8_t)dl; //movzx
	goto loc_47D788;
loc_47D9CE:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47D780;
	cmp(to16i(esp+0x1B4), (int16_t)0);
	if (jnz())
		goto loc_47D780;
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512DBD); //mov
	dl = to8i(byte_512DBF); //mov
	add(eax, (int32_t)0xC);
	si = (uint8_t)to8i(byte_512DBF); //movzx
	cmp(edx, eax);
	if (jl())
		goto loc_47D788;
	xor_(edx, edx);
	dl = to8i(byte_512DDA); //mov
	cmp(edx, eax);
	if (jge())
		goto loc_47D788;
	si = (uint8_t)dl; //movzx
	goto loc_47D788;
loc_47DA25:
	cmp(si, (int16_t)5);
	if (jz())
		goto loc_47D792;
	goto loc_47D797;
loc_47DA34:
	edx = 1; //mov
	goto loc_47D7CA;
loc_47DA3E:
	cmp(si, (int16_t)5);
	if (jz())
		goto loc_47D7D4;
loc_47DA48:
	cmp(dx, (int16_t)1);
	if (jl())
		goto loc_47DA58;
	cmp(dx, (int16_t)8);
	if (jle())
		goto loc_47D809;
loc_47DA58:
	to32i(dword_4DB1DC) = 0x9D; //mov
	eax = dx; //movsx
	push32(eax);
	eax = si; //movsx
	push32(eax);
	ebp = (int32_t)(intptr_t)aCNfs2seGamePcL; //mov
	push32(aBadSlidePickCa);
	to32i(dword_4DB1D8) = ebp; //mov
	goto loc_47D801;
loc_47DA7F:
	edx = to32i(esp+eax+0x100); //mov
	push32(edx);
	push32(aS_2);
	eax = (int32_t)(intptr_t)(esp+0x144); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_47D868;
loc_47DAA1:
	eax = to32i(esp+0x1AC); //mov
	ebp = to32i(esp+eax+0x170); //mov
	push32(ebp);
	eax = to32i(dword_513498); //mov
	push32(eax);
	push32(aSSload_qfs);
	goto loc_47D87C;
loc_47DAC0:
	xor_(eax, eax);
	al = to8i(byte_512DBD); //mov
	edx = si; //movsx
	add(eax, (int32_t)0xC);
	cmp(edx, eax);
	if (jge())
		goto loc_47D8F2;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_47D8F2;
	goto loc_47D91E;
loc_47DAE7:
	cmp(to32i(dword_4DA11C), (int32_t)0);
	if (jnz())
		goto loc_47DAFA;
	cmp(cx, (int16_t)2);
	if (jz())
		goto loc_47D943;
loc_47DAFA:
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_47D943;
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jnz())
		goto loc_47DB2F;
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_47DB2F;
	eax = to32i(dword_51220C); //mov
	cmp(to16i(dword_512F98+2+eax*2), (int16_t)0x24);
	if (jz())
		goto loc_47D943;
loc_47DB2F:
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jnz())
		goto loc_47DB67;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47DB67;
	xor_(eax, eax);
	al = to8i(byte_512DBD); //mov
	edx = to32i(dword_512270); //mov
	add(eax, (int32_t)0xC);
	cmp(eax, edx);
	if (jle())
		goto loc_47D943;
	cmp(eax, to32i(dword_5122B0));
	if (jle())
		goto loc_47D943;
loc_47DB67:
	cmp(to16i(esp+0x1B4), (int16_t)2);
	if (jnz())
		goto loc_47D668;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jge())
		goto loc_47D668;
	xor_(eax, eax);
	al = to8i(byte_512DBD); //mov
	esi = to32i(dword_512270); //mov
	add(eax, (int32_t)0xC);
	cmp(eax, esi);
	if (jle())
		goto loc_47D943;
	add(esp, (int32_t)0x1B8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47DBF0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	edx = to32i(dword_56297C); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	esi = (int32_t)(intptr_t)dword_562988; //mov
	add(eax, edx);
	ecx = 0x1D; //mov
	add(esi, eax);
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	edx = to32i(dword_56297C); //mov
	inc(edx);
	esi = 6; //mov
	to32i(dword_56297C) = edx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	dec(to32i(dword_562984));
	to32i(dword_56297C) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_47DC50()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	ebx = edx; //mov
	edx = to32i(dword_562980); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)dword_562988; //mov
	add(eax, edx);
	add(edi, eax);
	push32(edi);
loc_47DC74:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47DC8C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47DC74;
loc_47DC8C:
	pop32(edi);
	edx = to32i(dword_562980); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)dword_562988; //mov
	add(eax, edx);
	ecx = 0x14; //mov
	add(edi, eax);
	esi = ebx; //mov
	add(edi, (int32_t)9);
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	edx = to32i(dword_562980); //mov
	inc(edx);
	ebx = 6; //mov
	to32i(dword_562980) = edx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	inc(to32i(dword_562984));
	to32i(dword_562980) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47DCF0()
{
	cmp(to32i(dword_562984), (int32_t)0);
	if (jz())
		goto loc_47DCFC;
	xor_(eax, eax);
	return;
loc_47DCFC:
	eax = 1; //mov
}
Fn(void) Game::_sub_47DD10()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_56297C) = edx; //mov
	to32i(dword_562980) = edx; //mov
	to32i(dword_562984) = edx; //mov
	to32i(dword_562A70) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_47DD30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	xor_(ecx, ecx);
	xor_(edi, edi);
loc_47DD3B:
	edx = to32i(dword_5627F4+ecx); //mov
	cmp(edi, edx);
	if (jnz())
		goto loc_47DDA4;
loc_47DD45:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0x1C);
	if (jl())
		goto loc_47DD3B;
	ebx = to32i(dword_5627F4); //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	test(ebx, ebx);
	if (jz())
		goto loc_47DD6D;
loc_47DD5B:
	add(ecx, (int32_t)4);
	inc(eax);
	cmp(ecx, (int32_t)0x1C);
	if (jge())
		goto loc_47DDB6;
	cmp(to32i(dword_5627F4+ecx), (int32_t)0);
	if (jnz())
		goto loc_47DD5B;
loc_47DD6D:
	ebx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_562810);
	edi = eax; //mov
	to32i(dword_5627F4+ecx) = eax; //mov
	ecx = 0x14; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47DDA4:
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	ebx = edx; //mov
	edx = esi; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47DD45;
loc_47DDB6:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47DDC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	ecx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = to32i(dword_4DA1C8); //mov
	cmp(to8i(ecx+eax*4+0xF), (int8_t)0);
	if (jnz())
		goto loc_47DDF6;
	xor_(ecx, ecx);
loc_47DDE4:
	edx = to32i(dword_5627F4+ecx); //mov
	test(edx, edx);
	if (jnz())
		goto loc_47DDFB;
loc_47DDEE:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0x1C);
	if (jnz())
		goto loc_47DDE4;
loc_47DDF6:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47DDFB:
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	ebx = edx; //mov
	edx = esi; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47DDEE;
	xor_(ebx, ebx);
	to32i(dword_5627F4+ecx) = ebx; //mov
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0x1C);
	if (jnz())
		goto loc_47DDE4;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47DE30()
{
	push32(edx);
	xor_(eax, eax);
loc_47DE33:
	add(eax, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_5627F0+eax) = edx; //mov
	cmp(eax, (int32_t)0x1C);
	if (jnz())
		goto loc_47DE33;
	pop32(edx);
}
Fn(void) Game::_sub_47DE50()
{
	sub(esp, (int32_t)0xC);
	cmp(to32i(dword_4DA1B8), (int32_t)0);
	if (jnz())
		goto loc_47DE65;
	cmp(to32i(dword_562A70), (int32_t)7);
	if (jl())
		goto loc_47DE6B;
loc_47DE65:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	return;
loc_47DE6B:
	eax = edx; //mov
	esp -= 4; _sub_47DD30(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47DE7F;
	eax = 1; //mov
	add(esp, (int32_t)0xC);
	return;
loc_47DE7F:
	push32(esi);
	esi = to32i(dword_562A70); //mov
	inc(esi);
	push32(esi);
	push32(aPD);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	to32i(dword_562A70) = esi; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_47DC50(); esp += 4; //call
	eax = 1; //mov
	pop32(esi);
	add(esp, (int32_t)0xC);
}
Fn(void) Game::_sub_47DEC0()
{
	cmp(to32i(dword_4DA1B8), (int32_t)0);
	if (jnz())
		goto loc_47DED4;
	ebx = to32i(dword_562A70); //mov
	cmp(ebx, (int32_t)7);
	if (jl())
		goto loc_47DED7;
loc_47DED4:
	xor_(eax, eax);
	return;
loc_47DED7:
	push32(esi);
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	eax = (int32_t)(intptr_t)(edx+0x48); //lea
	to32i(dword_562A70) = esi; //mov
	esp -= 4; _sub_47DC50(); esp += 4; //call
	eax = 1; //mov
	pop32(esi);
}
Fn(void) Game::_sub_47DEF0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp+4) = eax; //mov
	to32i(esp) = edx; //mov
	ebp = ecx; //mov
	cmp(to16i(word_4DA1D0), (int16_t)0x14);
	if (jge())
		goto loc_47DFD6;
	xor_(edi, edi);
	xor_(esi, esi);
loc_47DF11:
	eax = to32i(dword_4DA1CC+2); //mov
	sar(eax, (int32_t)0x10);
	cmp(esi, eax);
	if (jl())
		goto loc_47DFA7;
	edi = to32i(dword_4DA1D4); //mov
	shl(eax, (int32_t)6);
	esi = to32i(esp); //mov
	add(edi, eax);
	edx = to32i(esp); //mov
	push32(edi);
loc_47DF33:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47DF4B;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47DF33;
loc_47DF4B:
	pop32(edi);
	xor_(eax, eax);
loc_47DF4E:
	edi = to32i(dword_4DA1CC+2); //mov
	sar(edi, (int32_t)0x10);
	ebx = to32i(dword_4DA1D4); //mov
	shl(edi, (int32_t)6);
	inc(eax);
	add(ebx, edi);
	edi = to32i(edx+0x20); //mov
	add(edx, (int32_t)4);
	to32i(ebx+eax*4+0x18) = edi; //mov
	cmp(eax, (int32_t)4);
	if (jl())
		goto loc_47DF4E;
	ecx = 0x14; //mov
	edi = (int32_t)(intptr_t)(ebx+0x2C); //lea
	esi = ebp; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	bx = to16i(word_4DA1D0); //mov
	inc(ebx);
	eax = 1; //mov
	to16i(word_4DA1D0) = bx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_47DFA7:
	ebx = to32i(dword_4DA1D4); //mov
	eax = to32i(esp+4); //mov
	add(ebx, edi);
	edx = ebp; //mov
	add(ebx, (int32_t)0x2C);
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47DFCA;
	inc(esi);
	add(edi, (int32_t)0x40);
	goto loc_47DF11;
loc_47DFCA:
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_47DFD6:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_47DFE0()
{
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(to32i(dword_4DA1C8), (int32_t)0);
	if (jz())
		goto loc_47DFFF;
	cmp(to32i(dword_4DA1C0), (int32_t)0xA);
	if (jl())
		goto loc_47E004;
loc_47DFFF:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	return;
loc_47E004:
	edx = (int32_t)(intptr_t)aDirectplay; //mov
	eax = esi; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E0F8;
	edx = (int32_t)(intptr_t)aUdp; //mov
	eax = esi; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E0BF;
	esi = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	edx = to32i(dword_4DA1C8); //mov
	shl(eax, (int32_t)2);
	ebx = 0xF; //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)aDirectplayIpx; //mov
loc_47E050:
	esp -= 4; _strncpy_(); esp += 4; //call
loc_47E055:
	eax = to32i(dword_4DA1C0); //mov
	esi = (int32_t)(intptr_t)(eax*8+0); //lea
	add(esi, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(esi, (int32_t)2);
	add(eax, esi);
	ecx = 0x10; //mov
	add(eax, (int32_t)0x10);
	esi = edi; //mov
	edi = eax; //mov
	to8i(eax-2) = 0; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	ebx = to32i(dword_4DA1C0); //mov
	to8i(edx+eax+0xF) = 1; //mov
	eax = 1; //mov
	add(ebx, eax);
	to32i(dword_4DA1C0) = ebx; //mov
	pop32(edi);
	pop32(esi);
	return;
loc_47E0BF:
	edx = (int32_t)(intptr_t)aTcp; //mov
	eax = esi; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E055;
	esi = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	edx = to32i(dword_4DA1C8); //mov
	shl(eax, (int32_t)2);
	ebx = 0xF; //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)aDirectplayTcp; //mov
	goto loc_47E050;
loc_47E0F8:
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	ebx = 0xF; //mov
	add(eax, edx);
	edx = esi; //mov
	goto loc_47E050;
}
Fn(void) Game::_sub_47E120()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	ecx = ebx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGamePcN; //mov
	xor_(eax, eax);
	ebx = 0x431; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = (int32_t)(intptr_t)aServicelist; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = 0x20; //mov
	edx = 0x168; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4DA1C8) = eax; //mov
	to32i(dword_562A74) = ebp; //mov
	ebx = esi; //mov
	edx = edi; //mov
	eax = (int32_t)(intptr_t)sub_47DFE0; //mov
	to32i(dword_4DA1C0) = ebp; //mov
	esp -= 4; _sub_48B02C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E1AE;
	cmp(to32i(dword_4DA1CC), (int32_t)0);
	if (jnz())
		goto loc_47E1B3;
loc_47E189:
	eax = to32i(dword_4DA1C0); //mov
	to32i(dword_562A74) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_47E1A9;
	eax = to32i(dword_4DA1C8); //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4DA1C8) = esi; //mov
loc_47E1A9:
	eax = to32i(dword_4DA1C8); //mov
loc_47E1AE:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_47E1B3:
	ecx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	ebx = 0xF; //mov
	add(ecx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(ecx, (int32_t)2);
	edx = (int32_t)(intptr_t)aTcp; //mov
	add(eax, ecx);
	esp -= 4; _strncpy_(); esp += 4; //call
	ecx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	edi = to32i(dword_4DA1C8); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	add(edi, (int32_t)0x10);
	esi = (int32_t)(intptr_t)dword_4DA1F0; //mov
	ecx = 0x10; //mov
	to8i(edi-2) = 0; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	ecx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = to32i(dword_4DA1C8); //mov
	to8i(ecx+eax*4+0xF) = 0; //mov
	inc(to32i(dword_4DA1C0));
	goto loc_47E189;
}
Fn(void) Game::_sub_47E240()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edx = dx; //movsx
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	ebx = (int32_t)(intptr_t)dword_5130A0; //mov
	shl(eax, (int32_t)3);
	edx = to32i(dword_4DABCC); //mov
	add(ebx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ecx = 0x3E8; //mov
	to32i(ebx+0x24) = eax; //mov
	to32i(dword_4DBABC) = ecx; //mov
	to32i(ebx+0x28) = eax; //mov
	ecx = 0x14; //mov
	to32i(ebx+0x2C) = eax; //mov
	eax = ebx; //mov
	edi = (int32_t)(intptr_t)(ebx+0x30); //lea
	esp -= 4; _sub_464010(); esp += 4; //call
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47E2B0()
{
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto locret_47E351;
	push32(esi);
	push32(edx);
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_47E31F;
	xor_(edx, edx);
loc_47E2CB:
	cmp(to32i(dword_5130B0+edx), (int32_t)0);
	if (jz())
		goto loc_47E2E0;
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	add(eax, edx);
	esp -= 4; _sub_47E530(); esp += 4; //call
loc_47E2E0:
	add(edx, (int32_t)0x68);
	cmp(edx, (int32_t)0x2D8);
	if (jnz())
		goto loc_47E2CB;
	cmp(to32i(dword_4DA1D8), (int32_t)0);
	if (jz())
		goto loc_47E31F;
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_4DA1C8); //mov
	cmp(to8i(edx+eax*4+0xF), (int8_t)0);
	if (jz())
		goto loc_47E31F;
	edx = 1; //mov
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	esp -= 4; _sub_48B274(); esp += 4; //call
loc_47E31F:
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	cmp(to8i(edx+eax+0xF), (int8_t)0);
	if (jz())
		goto loc_47E347;
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	esp -= 4; _sub_48B28C(); esp += 4; //call
loc_47E347:
	xor_(esi, esi);
	to32i(dword_4DA1D8) = esi; //mov
	pop32(edx);
	pop32(esi);
locret_47E351:
	return;
}
Fn(void) Game::_sub_47E360()
{
	push32(edx);
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_47E3AD;
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_47E3AD;
	cmp(to32i(dword_4DA1D8), (int32_t)0);
	if (jz())
		goto loc_47E3AD;
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto loc_47E3AD;
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_4DA1C8); //mov
	cmp(to8i(edx+eax*4+0xF), (int8_t)0);
	if (jnz())
		goto loc_47E3AF;
	push32(ecx);
	xor_(ecx, ecx);
	to32i(dword_4DA1D8) = ecx; //mov
	pop32(ecx);
loc_47E3AD:
	pop32(edx);
	return;
loc_47E3AF:
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	xor_(edx, edx);
	esp -= 4; _sub_48B274(); esp += 4; //call
	push32(ecx);
	xor_(ecx, ecx);
	to32i(dword_4DA1D8) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_47E3D0()
{
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto locret_47E41E;
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto locret_47E41E;
	cmp(to32i(dword_4DA1D8), (int32_t)0);
	if (jnz())
		goto locret_47E41E;
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto locret_47E41E;
	push32(edx);
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_4DA1C8); //mov
	cmp(to8i(edx+eax*4+0xF), (int8_t)0);
	if (jnz())
		goto loc_47E41F;
	to32i(dword_4DA1D8) = 1; //mov
	pop32(edx);
locret_47E41E:
	return;
loc_47E41F:
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	esp -= 4; _sub_48B280(); esp += 4; //call
	to32i(dword_4DA1D8) = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_47E440()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0x10; //mov
	edi = (int32_t)(intptr_t)word_513448; //mov
	esi = (int32_t)(intptr_t)(edx+2); //lea
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_47E470()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0x14);
	edx = eax; //mov
	cmp(to32i(dword_4DA1D8), (int32_t)0);
	if (jnz())
		goto loc_47E489;
	cmp(eax, (int32_t)7);
	if (jg())
		goto loc_47E489;
	test(eax, eax);
	if (jge())
		goto loc_47E48F;
loc_47E489:
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(edx);
	return;
loc_47E48F:
	eax = to32i(dword_4DA1DC); //mov
	edi = (int32_t)(intptr_t)(edx+edx); //lea
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to16i(word_513448+edi), (int16_t)0);
	if (jnz())
		goto loc_47E517;
	push32(esi);
	push32(ecx);
	push32(ebx);
	ecx = 2; //mov
	esi = (int32_t)(intptr_t)word_513448; //mov
	eax = to32i(dword_513080+edx*4); //mov
	ebx = 0x12; //mov
	add(eax, (int32_t)0x30);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_47DDC0(); esp += 4; //call
	eax = to32i(dword_4DA1DC); //mov
	to16i(word_513448+edi) = cx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	ah = 9; //mov
	ecx = 0x10; //mov
	edi = (int32_t)(intptr_t)(esp+0xE); //lea
	to8i(esp+0xC) = ah; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	esi = 1; //mov
	xor_(eax, eax);
	to16i(word_513424) = si; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(edx);
	return;
loc_47E517:
	eax = to32i(dword_4DA1DC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_47E530()
{
	push32(edx);
	edx = eax; //mov
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jnz())
		goto loc_47E53B;
	pop32(edx);
	return;
loc_47E53B:
	push32(ebx);
	esp -= 4; _sub_48A308(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	add(edx, (int32_t)0x30);
	esp -= 4; _sub_48B2C0(); esp += 4; //call
	ebx = to32i(dword_562A70); //mov
	edx = 1; //mov
	dec(ebx);
	to16i(word_513424) = dx; //mov
	to32i(dword_562A70) = ebx; //mov
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_47E570()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	ebx = 1; //mov
	cmp(ebx, to32i(dword_512264));
	if (jge())
		goto loc_47E5FA;
	ecx = 4; //mov
	ebp = (int32_t)(intptr_t)aCNfs2seGamePcN; //mov
	edx = 2; //mov
loc_47E595:
	cmp(to16i(word_513448+edx), (int16_t)2);
	if (jnz())
		goto loc_47E5E9;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jz())
		goto loc_47E600;
loc_47E5A8:
	to32i(dword_4DB1DC) = 0x2E6; //mov
	eax = to32i(word_513456); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	esi = to32i(dword_51220C); //mov
	push32(esi);
	push32(aBugDropdeadpla);
	to32i(dword_4DB1D8) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)0xC);
loc_47E5D5:
	eax = to32i(dword_513080+ecx); //mov
	esp -= 4; _sub_47E530(); esp += 4; //call
	to16i(word_513448+edx) = 1; //mov
loc_47E5E9:
	esi = to32i(dword_512264); //mov
	add(edx, (int32_t)2);
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, esi);
	if (jl())
		goto loc_47E595;
loc_47E5FA:
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47E600:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_47E5A8;
	goto loc_47E5D5;
}
Fn(void) Game::_sub_47E610()
{
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	xor_(edx, edx);
	ah = to8i(byte_51345E); //mov
	to16i(esp+0x20) = dx; //mov
	cmp(ah, (int8_t)3);
	if (jnz())
		goto loc_47E712;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_47E71A;
	push32(edi);
	push32(esi);
	push32(ecx);
	push32(ebx);
	xor_(ecx, ecx);
loc_47E63F:
	eax = dx; //movsx
	imul32(eax, 0x68);
	ebx = to32i(dword_5130A4+eax); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_47E66B;
	cmp(ebx, to32i(dword_5130B0+eax));
	if (jz())
		goto loc_47E66B;
	add(eax, (int32_t)(intptr_t)dword_5130A0);
	esi = 1; //mov
	esp -= 4; _sub_47E530(); esp += 4; //call
	to16i(esp+0x30) = si; //mov
loc_47E66B:
	inc(edx);
	cmp(dx, (int16_t)7);
	if (jl())
		goto loc_47E63F;
	ebp = (int32_t)(intptr_t)aCNfs2seGamePcN; //mov
loc_47E677:
	esp -= 4; _sub_47DCF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E77D;
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_47DBF0(); esp += 4; //call
	xor_(edx, edx);
loc_47E68F:
	eax = dx; //movsx
	imul32(ecx, eax, 0x68);
	cmp(to32i(dword_5130A4+ecx), (int32_t)0);
	if (jnz())
		goto loc_47E721;
	edi = (int32_t)(intptr_t)dword_513378; //mov
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	add(edi, eax);
	push32(edi);
loc_47E6B1:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47E6C9;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47E6B1;
loc_47E6C9:
	pop32(edi);
loc_47E6CA:
	eax = to32i(dword_5637F4); //mov
	ecx = (int32_t)(intptr_t)dword_56289C; //mov
	add(eax, (int32_t)0x280);
	edx = dx; //movsx
	to32i(dword_4DA1BC) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x19); //lea
	ebx = 7; //mov
	esp -= 4; _sub_47E240(); esp += 4; //call
	edx = 0x64; //mov
	esp -= 4; _sub_48B2CC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E754;
	dec(to32i(dword_562A70));
	to32i(dword_4DA1BC) = 0xFFFFFFF; //mov
	goto loc_47E677;
loc_47E712:
	xor_(eax, eax);
loc_47E714:
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edx);
	return;
loc_47E71A:
	esp -= 4; _sub_463B80(); esp += 4; //call
	goto loc_47E714;
loc_47E721:
	cmp(dx, (int16_t)7);
	if (jnz())
		goto loc_47E744;
	eax = 0x2BB; //mov
	push32(aBugAddnewplaye);
	to32i(dword_4DB1D8) = ebp; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_47E744:
	inc(edx);
	cmp(dx, (int16_t)8);
	if (jl())
		goto loc_47E68F;
	goto loc_47E6CA;
loc_47E754:
	edx = 1; //mov
	bx = to16i(dword_513408+2); //mov
	add(ebx, edx);
	to16i(esp+0x30) = dx; //mov
	to16i(dword_513408+2) = bx; //mov
	to32i(dword_4DA1BC) = 0xFFFFFFF; //mov
	goto loc_47E677;
loc_47E77D:
	edi = to32i(esp+0x30); //mov
	ax = to16i(word_513424); //mov
	or_(di, ax);
	to16i(esp+0x30) = di; //mov
	if (jz())
		goto loc_47E796;
	esp -= 4; _sub_463C50(); esp += 4; //call
loc_47E796:
	eax = to32i(esp+0x2E); //mov
	sar(eax, (int32_t)0x10);
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edx);
}
Fn(void) Game::_sub_47E7B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebp = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	esi = (int32_t)(intptr_t)byte_47DBBD; //mov
	movsd();
	movsd();
	movsw();
	ecx = 0xA; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)byte_47DBC7; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = to32i(dword_4DA1C4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47E823;
loc_47E7DF:
	ecx = 1; //mov
	ebx = 0x27; //mov
	edx = 0x30F; //mov
	eax = esp; //mov
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E876;
	ecx = (int32_t)(intptr_t)dword_5628B8; //mov
	ebx = 0x406; //mov
	edx = esp; //mov
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	esp -= 4; _sub_48B2FC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E87F;
	eax = 0x303; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	goto loc_47E7DF;
loc_47E823:
	push32(edx);
	eax = (int32_t)(intptr_t)(esp+0x2C); //lea
	edx = to32i(dword_4DA1C0); //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	ebx = (int32_t)(intptr_t)dword_4DA1E0; //mov
	add(eax, edx);
	push32(ecx);
	ecx = (int32_t)(intptr_t)(eax+0x10); //lea
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	esp -= 4; _sub_48B0B4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E86A;
	to32i(dword_4DA1C4) = 1; //mov
	goto loc_47E7DF;
loc_47E86A:
	eax = 0x303; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(eax, eax);
loc_47E876:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47E87F:
	ecx = 0x14; //mov
	esi = (int32_t)(intptr_t)dword_5628B8; //mov
	edi = ebp; //mov
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	eax = 1; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47E8B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	al = to8i(byte_47DBBC); //mov
	edx = 0xFFFFFFFE; //mov
	to8i(esp) = al; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_464030(); esp += 4; //call
	to16i(dword_51340C) = dx; //mov
	xor_(ah, ah);
	dl = 3; //mov
	to8i(byte_5133C0) = ah; //mov
	eax = 0x304; //mov
	to8i(byte_51345E) = dl; //mov
	edx = 0x307; //mov
	to16i(word_513458) = bx; //mov
	esp -= 4; _sub_4023D0(); esp += 4; //call
	ebx = to32i(dword_4DA1C0); //mov
	ecx = eax; //mov
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(eax, ebx);
	ebx = to32i(dword_4DA1C8); //mov
	cmp(to8i(ebx+eax*4+0xF), (int8_t)0);
	if (jz())
		goto loc_47E944;
	ebx = esp; //mov
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	edx = edi; //mov
	esp -= 4; _sub_48B244(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_47E9B2;
	xor_(ecx, ecx);
loc_47E938:
	cmp(ecx, to32i(dword_562940));
	if (jz())
		goto loc_47E9E2;
loc_47E944:
	esp -= 4; _sub_463EA0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5628B8; //mov
	ecx = (int32_t)(intptr_t)dword_56289C; //mov
	xor_(edx, edx);
	ebx = 7; //mov
	esp -= 4; _sub_47E240(); esp += 4; //call
	edx = 0x64; //mov
	esp -= 4; _sub_48B2CC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47EA4D;
	edx = 0x303; //mov
	eax = esi; //mov
	ecx = 1; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
	to16i(word_51345A) = cx; //mov
	esp -= 4; _sub_47E2B0(); esp += 4; //call
	xor_(esi, esi);
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	to16i(word_51345A) = si; //mov
loc_47E99C:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EA24;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_47E99C;
loc_47E9B2:
	edx = 0x303; //mov
	eax = ecx; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
loc_47E9BE:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E9D0;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E9BE;
loc_47E9D0:
	xor_(eax, eax);
	esp -= 4; _sub_464030(); esp += 4; //call
loc_47E9D7:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47E9E2:
	esp -= 4; _sub_463E70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47E938;
	edx = 0x303; //mov
	eax = esi; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
	esp -= 4; _sub_47E2B0(); esp += 4; //call
loc_47EA00:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E9D0;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EA00;
	xor_(eax, eax);
	esp -= 4; _sub_464030(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47EA24:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47EA36;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EA24;
loc_47EA36:
	esp -= 4; _sub_40EA70(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_464030(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47EA4D:
	xor_(ecx, ecx);
loc_47EA4F:
	cmp(cx, to16i(word_513424));
	if (jnz())
		goto loc_47EAAC;
	esp -= 4; _sub_463E70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EA4F;
	edx = 0x303; //mov
	eax = esi; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
	eax = 1; //mov
	xor_(edx, edx);
	to16i(word_51345A) = ax; //mov
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	to16i(word_51345A) = dx; //mov
	esp -= 4; _sub_463E40(); esp += 4; //call
loc_47EA8B:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47E9D7;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EA8B;
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47EAAC:
	al = to8i(byte_51341E); //mov
	xor_(edx, edx);
	to8i(byte_51345F) = al; //mov
	esp -= 4; _sub_421430(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47EAE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	ebx = 1; //mov
	edi = (int32_t)(intptr_t)byte_5133C1; //mov
	al = to8i(byte_47DBBB); //mov
	xor_(dl, dl);
	to8i(esp+0xC) = al; //mov
	esp -= 4; _sub_47DE30(); esp += 4; //call
	eax = 1; //mov
	xor_(esi, esi);
	esp -= 4; _sub_464030(); esp += 4; //call
	ah = 3; //mov
	to8i(byte_5133C0) = dl; //mov
	to16i(dword_513408+2) = bx; //mov
	to16i(dword_51340C+2) = si; //mov
	to8i(byte_51345E) = ah; //mov
	xor_(dh, dh);
	esi = ecx; //mov
	to16i(dword_51340C) = dx; //mov
	push32(edi);
loc_47EB39:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47EB51;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47EB39;
loc_47EB51:
	pop32(edi);
	edi = 0xFFFFFFFF; //mov
	eax = ebx; //mov
loc_47EB59:
	edx = ax; //movsx
	inc(eax);
	to16i(dword_51340C+2+edx*2) = di; //mov
	cmp(ax, (int16_t)8);
	if (jl())
		goto loc_47EB59;
	edi = (int32_t)(intptr_t)dword_562948; //mov
	esi = ecx; //mov
	esp -= 4; _sub_47DD10(); esp += 4; //call
	push32(edi);
loc_47EB78:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47EB90;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47EB78;
loc_47EB90:
	pop32(edi);
	cmp(to8i(byte_51345F), (int8_t)0);
	if (jz())
		goto loc_47EC49;
	to32i(dword_562978) = 8; //mov
loc_47EBA8:
	cmp(to32i(dword_4DA1C4), (int32_t)0);
	if (jnz())
		goto loc_47EC71;
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_4DA1C8); //mov
	cmp(to8i(edx+eax*4+0xF), (int8_t)0);
	if (jz())
		goto loc_47EC58;
	xor_(eax, eax);
	xor_(edx, edx);
loc_47EBD9:
	push32(ecx);
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(ecx);
	ecx = to32i(dword_4DA1C0); //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = to32i(dword_4DA1C8); //mov
	shl(eax, (int32_t)2);
	ebx = (int32_t)(intptr_t)dword_4DA1E0; //mov
	add(ecx, eax);
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	add(ecx, (int32_t)0x10);
	esp -= 4; _sub_48B0B4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47EC67;
	eax = 0x303; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = 0x100; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
loc_47EC24:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47EC36;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EC24;
loc_47EC36:
	xor_(eax, eax);
	esp -= 4; _sub_464030(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47EC49:
	to32i(dword_562978) = 2; //mov
	goto loc_47EBA8;
loc_47EC58:
	eax = 0x406; //mov
	edx = (int32_t)(intptr_t)sub_47DE50; //mov
	goto loc_47EBD9;
loc_47EC67:
	to32i(dword_4DA1C4) = 1; //mov
loc_47EC71:
	esp -= 4; _sub_463EA0(); esp += 4; //call
	esp -= 4; _sub_421430(); esp += 4; //call
	edx = to32i(dword_4DA1C0); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	cmp(to8i(edx+eax+0xF), (int8_t)0);
	if (jz())
		goto loc_47ED18;
	ebp = 0x20; //mov
	ecx = (int32_t)(intptr_t)sub_47DEC0; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = (int32_t)(intptr_t)dword_562948; //mov
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	to32i(dword_4DABE8) = ebp; //mov
	esp -= 4; _sub_48B25C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47ED11;
	to32i(dword_4DABE8) = eax; //mov
	eax = 0x303; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = 0x100; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	esp -= 4; _sub_48A2B4(); esp += 4; //call
loc_47ECE2:
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47ECF4;
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47ECE2;
loc_47ECF4:
	esp -= 4; _sub_421420(); esp += 4; //call
	esp -= 4; _sub_40EA70(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_464030(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47ED11:
	xor_(eax, eax);
	to32i(dword_4DABE8) = eax; //mov
loc_47ED18:
	edx = 1; //mov
	eax = edx; //mov
	to32i(dword_4DA1D8) = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47ED30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x68);
	ebp = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x40); //lea
	al = to8i(byte_47DBBA); //mov
	esi = (int32_t)(intptr_t)dword_47DBB0; //mov
	ecx = to32i(dword_4DA1C4); //mov
	xor_(ebx, ebx);
	to8i(esp+0x64) = al; //mov
	to16i(word_4DA1D0) = bx; //mov
	movsd();
	movsd();
	movsw();
	test(ecx, ecx);
	if (jnz())
		goto loc_47EDAA;
	push32(edx);
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	edx = to32i(dword_4DA1C0); //mov
	push32(eax);
	ebx = (int32_t)(intptr_t)dword_4DA1E0; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	push32(ecx);
	add(eax, edx);
	ecx = to32i(dword_4DA1C8); //mov
	shl(eax, (int32_t)2);
	xor_(edx, edx);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	add(ecx, (int32_t)0x10);
	esp -= 4; _sub_48B0B4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EF12;
	to32i(dword_4DA1C4) = 1; //mov
loc_47EDAA:
	esi = (int32_t)(intptr_t)dword_5622F4; //mov
	ecx = (int32_t)(intptr_t)(esp+0x64); //lea
	edx = (int32_t)(intptr_t)sub_47DEF0; //mov
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	ebx = ebp; //mov
	to32i(dword_4DA1D4) = esi; //mov
	esp -= 4; _sub_48B238(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47EF12;
	cmp(to16i(word_4DA1D0), (int16_t)1);
	if (jle())
		goto loc_47EF12;
	eax = to32i(dword_4DA1CC+2); //mov
	xor_(edi, edi);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x5C) = edi; //mov
	to32i(esp+0x60) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_47EF12;
	to32i(esp+0x58) = edi; //mov
loc_47EDFE:
	ebp = to32i(esp+0x5C); //mov
	edi = to32i(esp+0x58); //mov
	esi = to32i(dword_4DA1D4); //mov
	edx = to32i(esp+0x60); //mov
	add(esi, edi);
	edi = (int32_t)(intptr_t)(esp+0x4C); //lea
	ecx = ebp; //mov
	push32(edi);
loc_47EE19:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47EE31;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47EE19;
loc_47EE31:
	pop32(edi);
	cmp(ebp, edx);
	if (jge())
		goto loc_47EE84;
	ebx = ebp; //mov
	shl(ebx, (int32_t)6);
loc_47EE3B:
	edx = to32i(dword_4DA1D4); //mov
	eax = (int32_t)(intptr_t)(esp+0x4C); //lea
	add(edx, ebx);
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_47EE78;
	esi = to32i(dword_4DA1D4); //mov
	edi = (int32_t)(intptr_t)(esp+0x4C); //lea
	add(esi, ebx);
	ebp = ecx; //mov
	push32(edi);
loc_47EE5F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47EE77;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47EE5F;
loc_47EE77:
	pop32(edi);
loc_47EE78:
	esi = to32i(esp+0x60); //mov
	inc(ecx);
	add(ebx, (int32_t)0x40);
	cmp(ecx, esi);
	if (jl())
		goto loc_47EE3B;
loc_47EE84:
	cmp(ebp, to32i(esp+0x5C));
	if (jz())
		goto loc_47EEF2;
	eax = to32i(esp+0x58); //mov
	ecx = 0x40; //mov
	esi = to32i(dword_4DA1D4); //mov
	edi = esp; //mov
	add(esi, eax);
	shl(ebp, (int32_t)6);
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	eax = to32i(dword_4DA1D4); //mov
	edi = to32i(esp+0x58); //mov
	esi = (int32_t)(intptr_t)(eax+ebp); //lea
	ecx = 0x40; //mov
	add(edi, eax);
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
	ecx = 0x40; //mov
	edi = to32i(dword_4DA1D4); //mov
	esi = esp; //mov
	add(edi, ebp);
	push32(edi);
	eax = ecx; //mov
	shr(ecx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cl = al; //mov
	and_(cl, (int8_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	pop32(edi);
loc_47EEF2:
	eax = to32i(esp+0x58); //mov
	edx = to32i(esp+0x5C); //mov
	ecx = to32i(esp+0x60); //mov
	add(eax, (int32_t)0x40);
	inc(edx);
	to32i(esp+0x58) = eax; //mov
	to32i(esp+0x5C) = edx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_47EDFE;
loc_47EF12:
	esi = (int32_t)(intptr_t)word_4DA1D0; //mov
	eax = esi; //mov
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47EF30()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = to32i(dword_4DA1C0); //mov
	ecx = eax; //mov
	cmp(to32i(dword_4DA1DC), (int32_t)0);
	if (jz())
		goto loc_47EFFB;
loc_47EF49:
	cmp(to32i(dword_4DA1C4), (int32_t)0);
	if (jz())
		goto loc_47EF64;
	xor_(edi, edi);
	eax = (int32_t)(intptr_t)dword_56289C; //mov
	to32i(dword_4DA1C4) = edi; //mov
	esp -= 4; _sub_48B1FC(); esp += 4; //call
loc_47EF64:
	cmp(to32i(dword_4DA1C8), (int32_t)0);
	if (jnz())
		goto loc_47EFA3;
	push32(ebx);
	to8i(byte_51345F) = 1; //mov
	eax = (int32_t)(intptr_t)aUdp; //mov
	ebx = 8; //mov
	esp -= 4; _sub_41D1E0(); esp += 4; //call
	eax = (int32_t)(intptr_t)aTcpGather; //mov
	edx = 0x64; //mov
	esp -= 4; _sub_41DD10(); esp += 4; //call
	to32i(dword_4DA1CC) = eax; //mov
	eax = 0x2580; //mov
	esp -= 4; _sub_47E120(); esp += 4; //call
	pop32(ebx);
loc_47EFA3:
	eax = to32i(dword_4DA1C8); //mov
	esi = to32i(dword_4DA1C0); //mov
	test(eax, eax);
	if (jz())
		goto loc_47EFF0;
	edx = to32i(dword_562A74); //mov
	inc(esi);
	cmp(esi, edx);
	if (jl())
		goto loc_47EFBF;
	xor_(esi, esi);
loc_47EFBF:
	test(ecx, ecx);
	if (jz())
		goto loc_47EFDD;
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	edx = to32i(dword_4DA1C8); //mov
	add(eax, esi);
	al = to8i(edx+eax*4+0xF); //mov
	and_(eax, (int32_t)0xFF);
	to32i(ecx) = eax; //mov
loc_47EFDD:
	edx = (int32_t)(intptr_t)(esi*8+0); //lea
	add(edx, esi);
	eax = to32i(dword_4DA1C8); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
loc_47EFF0:
	to32i(dword_4DA1C0) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_47EFFB:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DA1DC) = eax; //mov
	goto loc_47EF49;
}
Fn(void) Game::_sub_47F010()
{
	push32(ecx);
	push32(edx);
	ecx = (int32_t)(intptr_t)sub_47F030; //mov
	edx = (int32_t)(intptr_t)nullsub_46; //mov
	to32i(off_4DB214) = ecx; //mov
	to32i(off_4DB210) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_47F030()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_47F03B;
	pop32(ecx);
	return;
loc_47F03B:
	esp -= 4; _sub_484DA8(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_nullsub_46()
{
	return;
}
Fn(void) Game::_sub_47F060()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = 0x10; //mov
	ecx = (int32_t)(intptr_t)aCNfs2seGamePcP; //mov
	ebx = 0x25A; //mov
	eax = (int32_t)(intptr_t)aRemaptable; //mov
	to32i(dword_5630E0) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	edx = 0x2E000; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_5630E4) = eax; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47F0A0()
{
	eax = (int32_t)(intptr_t)dword_562AD8; //mov
}
Fn(void) Game::_sub_47F0B0()
{
	push32(ecx);
	push32(esi);
	esi = to32i(dword_5630E8); //mov
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	shl(eax, (int32_t)2);
	ecx = (int32_t)(intptr_t)(edx+esi); //lea
	add(eax, (int32_t)(intptr_t)dword_562A78);
	cmp(ecx, (int32_t)0xFF);
	if (jle())
		goto loc_47F0D9;
	edx = 0xFF; //mov
	sub(edx, esi);
loc_47F0D9:
	and_(ebx, (int32_t)1);
	to32i(eax+8) = 0; //mov
	add(esi, edx);
	to32i(eax+4) = edx; //mov
	to32i(dword_5630E8) = esi; //mov
	to32i(eax) = ebx; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_47F100()
{
	push32(edx);
	xor_(eax, eax);
loc_47F103:
	add(eax, (int32_t)0xC);
	xor_(edx, edx);
	to32i(dword_562A70+eax) = edx; //mov
	cmp(eax, (int32_t)0x60);
	if (jnz())
		goto loc_47F103;
	to32i(dword_5630E8) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_47F120()
{
	push32(edx);
	edx = 0x300; //mov
	eax = (int32_t)(intptr_t)dword_562AD8; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = 0x300; //mov
	eax = (int32_t)(intptr_t)dword_562DD8; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_5630D8) = edx; //mov
	to32i(dword_5630DC) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_47F150()
{
	eax = to32i(dword_5630E4); //mov
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_47F160()
{
	push32(ebx);
	push32(edx);
	esp -= 4; _sub_4586A0(); esp += 4; //call
	esp -= 4; _sub_47F120(); esp += 4; //call
	esp -= 4; _sub_47F060(); esp += 4; //call
	esp -= 4; _sub_47F100(); esp += 4; //call
	edx = 0x1A; //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	esp -= 4; _sub_47F0B0(); esp += 4; //call
	edx = 0x78; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_47F0B0(); esp += 4; //call
	ebx = 1; //mov
	edx = 0x6C; //mov
	eax = 2; //mov
	esp -= 4; _sub_47F0B0(); esp += 4; //call
	eax = 3; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_47F0B0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_47F1C0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	ebp = edx; //mov
	esp -= 4; _sub_49E4F0(); esp += 4; //call
	ecx = eax; //mov
loc_47F1D0:
	dec(ecx);
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_47F1E0;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47F1E0:
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49E4F4(); esp += 4; //call
	edx = to32i(eax); //mov
	and_(edx, (int32_t)0xFF);
	esi = eax; //mov
	cmp(edx, (int32_t)0x24);
	if (jnz())
		goto loc_47F252;
loc_47F1F8:
	edx = ebp; //mov
	eax = (int32_t)(intptr_t)(esi+0x10); //lea
	edi = (int32_t)(intptr_t)(ebp+0x300); //lea
loc_47F203:
	ebx = eax; //mov
	inc(eax);
	bl = to8i(ebx); //mov
	ecx = eax; //mov
	to8i(edx) = bl; //mov
	bl = to8i(ecx); //mov
	inc(eax);
	to8i(edx+1) = bl; //mov
	ebx = eax; //mov
	add(edx, (int32_t)3);
	bl = to8i(ebx); //mov
	inc(eax);
	to8i(edx-1) = bl; //mov
	cmp(edx, edi);
	if (jnz())
		goto loc_47F203;
	eax = to32i(esi); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)0x22);
	if (jnz())
		goto loc_47F244;
	eax = ebp; //mov
	edx = (int32_t)(intptr_t)(ebp+0x300); //lea
loc_47F235:
	bl = to8i(eax); //mov
	inc(eax);
	shl(bl, (int8_t)2);
	to8i(eax-1) = bl; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_47F235;
loc_47F244:
	ebx = to32i(esi+6); //mov
	sar(ebx, (int32_t)0x10);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47F252:
	cmp(edx, (int32_t)0x22);
	if (jz())
		goto loc_47F1F8;
	cmp(edx, (int32_t)0x2A);
	if (jnz())
		goto loc_47F1D0;
	edx = ebp; //mov
	add(eax, (int32_t)0x10);
	edi = (int32_t)(intptr_t)(ebp+0x300); //lea
loc_47F26B:
	ecx = eax; //mov
	bl = to8i(ecx); //mov
	inc(eax);
	to8i(edx+2) = bl; //mov
	ebx = eax; //mov
	bl = to8i(ebx); //mov
	inc(eax);
	to8i(edx+1) = bl; //mov
	ebx = eax; //mov
	add(edx, (int32_t)3);
	bl = to8i(ebx); //mov
	add(eax, (int32_t)2);
	to8i(edx-3) = bl; //mov
	cmp(edx, edi);
	if (jnz())
		goto loc_47F26B;
	ebx = to32i(esi+6); //mov
	sar(ebx, (int32_t)0x10);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47F2A0()
{
	eax = to32i(dword_5630FC); //mov
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_47F2B0()
{
	eax = to32i(dword_5630FC); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	_sub_47F2C0(); return; //jmp
}
Fn(void) Game::_sub_47F2C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)aCNfs2seGamePcS; //mov
	ecx = 0x11B; //mov
	eax = (int32_t)(intptr_t)aSkidmark; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x6800; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_5630FC) = eax; //mov
	to32i(dword_563100) = ebx; //mov
	to32i(dword_5630F8) = ebx; //mov
	to32i(eax+0xC) = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47F310()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	ebp = eax; //mov
	eax = to32i(dword_563100); //mov
	xor_(edx, edx);
	to32i(esp+0x30) = eax; //mov
	to32i(esp+0x34) = edx; //mov
	to32i(esp+0x38) = edx; //mov
	eax = ebp; //mov
	edx = to32i(esp+0x30); //mov
	add(eax, (int32_t)0x44);
	edi = (int32_t)(intptr_t)(edx*4+0); //lea
	to32i(esp+0x2C) = eax; //mov
	sub(edi, edx);
	eax = ebp; //mov
	shl(edi, (int32_t)2);
	add(eax, (int32_t)8);
	add(edi, edx);
	to32i(esp+0x28) = eax; //mov
	shl(edi, (int32_t)5);
loc_47F355:
	ebx = to32i(esp+0x30); //mov
	dec(ebx);
	sub(edi, (int32_t)0x1A0);
	to32i(esp+0x30) = ebx; //mov
	cmp(edi, (int32_t)0xFFFFFE60);
	if (jnz())
		goto loc_47F3A6;
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x38); //mov
	to32i(esp+0x1C) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_47F386;
	to32i(eax) = 0; //mov
loc_47F386:
	push32(1);
	push32(0x60000);
	edx = to32i(esp+0x24); //mov
	push32(edx);
	ecx = to32i(esp+0x24); //mov
	push32(ecx);
	esp -= 4; _sub_471280(); esp += 4; //call
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47F3A6:
	esi = to32i(dword_5630FC); //mov
	ebx = 0x320000; //mov
	add(esi, edi);
	edx = to32i(esp+0x28); //mov
	eax = esi; //mov
	esp -= 4; _sub_470E70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47F355;
	eax = to32i(esi+0xC); //mov
	shl(eax, (int32_t)2);
	edx = to32i(ebp+8); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(esi); //mov
	sub(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(esi+4); //mov
	ecx = to32i(ebp+0xC); //mov
	sub(eax, ecx);
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+8); //mov
	ebx = to32i(ebp+0x10); //mov
	edx = to32i(esp+0x2C); //mov
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp+8) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	imul32(edx, to32i(esp+0x3C), 0x30);
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47F355;
	edx = to32i(esp+0x20); //mov
	ebx = to32i(esp+0x3C); //mov
	eax = to32i(esp+0x2C); //mov
	push32(edx);
	ecx = (int32_t)(intptr_t)(esi+0x10); //lea
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_47F520(); esp += 4; //call
	ecx = to32i(esi+0xC); //mov
	edx = 5; //mov
	eax = ecx; //mov
	add(esi, (int32_t)0x190);
loc_47F441:
	dec(ecx);
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_47F355;
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47F46D;
	eax = to32i(esp+0x20); //mov
	add(eax, (int32_t)0xC0);
	inc(esi);
	to32i(esp+0x20) = eax; //mov
	goto loc_47F441;
loc_47F46D:
	cmp(to32i(esp+0x34), (int32_t)0);
	if (jnz())
		goto loc_47F50B;
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x34) = eax; //mov
loc_47F480:
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x38) = eax; //mov
	to32i(eax+4) = 0xA; //mov
	xor_(eax, eax);
	al = to8i(esi); //mov
	edx = to32i(dword_500D10+eax*4); //mov
	eax = to32i(esp+0x24); //mov
	to32i(eax+0x1C) = edx; //mov
	eax = to32i(esp+0x24); //mov
	to32i(eax+0x20) = 0x8FFFFFFF; //mov
	eax = to32i(esp+0x24); //mov
	to16i(eax+0xA) = 1; //mov
	eax = to32i(esp+0x24); //mov
	to16i(eax+8) = 3; //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x24); //mov
	add(edx, (int32_t)0x30);
	to32i(eax+0xC) = edx; //mov
	edx = to32i(esp+0x24); //mov
	eax = to32i(esp+0x20); //mov
	to32i(edx+0x10) = eax; //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x24); //mov
	add(edx, (int32_t)0x90);
	to32i(eax+0x14) = edx; //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x24); //mov
	add(edx, (int32_t)0x60);
	to32i(eax+0x18) = edx; //mov
	eax = to32i(esp+0x20); //mov
	add(eax, (int32_t)0xC0);
	inc(esi);
	to32i(esp+0x20) = eax; //mov
	goto loc_47F441;
loc_47F50B:
	edx = to32i(esp+0x38); //mov
	eax = to32i(esp+0x24); //mov
	to32i(edx) = eax; //mov
	goto loc_47F480;
}
Fn(void) Game::_sub_47F520()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	ebp = to32i(esp+0x48); //mov
	to32i(esp+0x28) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x1C) = ebx; //mov
	eax = (int32_t)(intptr_t)(ebp+0x10); //lea
	to32i(esp+0x30) = ecx; //mov
	to32i(esp+0x2C) = eax; //mov
loc_47F541:
	edx = to32i(esp+0x1C); //mov
	dec(edx);
	to32i(esp+0x1C) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_47F558;
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_47F558:
	eax = to32i(esp+0x30); //mov
	eax = to16i(eax); //movsx
	shl(eax, (int32_t)8);
	to32i(esp+0xC) = eax; //mov
	eax = to32i(esp+0x30); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)8);
	add(eax, (int32_t)0x1800);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(esp+0x30); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	ebx = esp; //mov
	shl(eax, (int32_t)8);
	edx = to32i(esp+0x28); //mov
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	ebx = to32i(esp); //mov
	add(ebx, to32i(eax));
	eax = to32i(esp+0x18); //mov
	to32i(esp) = ebx; //mov
	esi = to32i(esp+4); //mov
	add(esi, to32i(eax+4));
	eax = to32i(esp+0x18); //mov
	to32i(esp+4) = esi; //mov
	edi = to32i(esp+8); //mov
	eax = to32i(eax+8); //mov
	add(edi, eax);
	to32i(esp+8) = edi; //mov
	to32i(ebp+0) = ebx; //mov
	eax = to32i(esp+4); //mov
	to32i(ebp+4) = eax; //mov
	eax = to32i(esp+8); //mov
	to16i(ebp+0xC) = 0; //mov
	to32i(ebp+8) = eax; //mov
	eax = to32i(esp+8); //mov
	esi = to32i(esp+0x2C); //mov
	test(eax, eax);
	if (jnz())
		goto loc_47F5F2;
	to32i(esp+8) = 1; //mov
loc_47F5F2:
	eax = to32i(esp+8); //mov
	to32i(esp+0x34) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	fild(to32i(esp+0x34));
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	fstp(to32f(esp+0x20));
	ebx = to32i(eax); //mov
	ecx = ebx; //mov
	shr(ebx, (int32_t)0xF);
	and_(ecx, (int32_t)0xFF800000);
	and_(ebx, (int32_t)0xFF);
	fld(to32f(eax));
	ebx = to32i(dword_4F19E4+ebx*4); //mov
	sub(ebx, ecx);
	to32i(dword_4F1E14) = ebx; //mov
	fmul(to32f(dword_4F1E14));
	fsubr(to32f(flt_4D52AC));
	fmul(to32f(dword_4F1E14));
	fld_st(0);
	fmul(to32f(eax));
	fsubr(to32f(flt_4D52AC));
	fmulp_st(1, 0);
	fstp(to32f(edx));
	ecx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(esi+0x14); //lea
	fld(to32f(dword_4D5294));
	fmul(to32f(ecx));
	fld(to32f(flt_4D5298));
	fmul(to32f(ecx));
	fld(to32f(flt_4D52B0));
	fmul(to32f(ecx));
	fild(to32i(eax+4));
	fild(to32i(eax));
	fxch_st(1);
	fmulp_st(3, 0);
	fmulp_st(3, 0);
	fld(to32f(flt_4D52A0));
	faddp_st(2, 0);
	fld(to32f(flt_4D529C));
	faddp_st(3, 0);
	fstp(to32f(ebx+0xC));
	fstp(to32f(ebx+4));
	fstp(to32f(ebx));
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_47F6FC;
	cmp(eax, ecx);
	if (jge())
		goto loc_47F6FC;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_47F6D0;
	cmp(eax, ecx);
	if (jl())
		goto loc_47F6D0;
	cmp(eax, edx);
	if (jle())
		goto loc_47F6D4;
	or_(ebx, (int32_t)4);
	goto loc_47F6D4;
loc_47F6D0:
	or_(ebx, (int32_t)8);
loc_47F6D4:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_47F6F7;
	cmp(eax, ecx);
	if (jl())
		goto loc_47F6F7;
	cmp(eax, edx);
	if (jle())
		goto loc_47F701;
	or_(ebx, (int32_t)2);
	goto loc_47F701;
loc_47F6F7:
	or_(ebx, (int32_t)1);
	goto loc_47F701;
loc_47F6FC:
	ebx = 0x10; //mov
loc_47F701:
	to8i(edi) = bl; //mov
	cmp(to32i(esp+8), (int32_t)0);
	if (jl())
		goto loc_47F72E;
	xor_(eax, eax);
loc_47F70C:
	add(ebp, (int32_t)0x30);
	ebx = to32i(esp+0x2C); //mov
	esi = to32i(esp+0x30); //mov
	to16i(ebp-0x22) = ax; //mov
	add(ebx, (int32_t)0x30);
	add(esi, (int32_t)6);
	to32i(esp+0x2C) = ebx; //mov
	to32i(esp+0x30) = esi; //mov
	goto loc_47F541;
loc_47F72E:
	eax = 1; //mov
	goto loc_47F70C;
}
Fn(void) Game::_sub_47F740()
{
	push32(ebp);
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_47F803;
	push32(edi);
	push32(esi);
	eax = to32i(dword_5630F8); //mov
	ebp = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ebp, eax);
	shl(ebp, (int32_t)2);
	add(ebp, eax);
	eax = to32i(dword_5630FC); //mov
	shl(ebp, (int32_t)5);
	add(ebp, eax);
	esi = to32i(ebp+0xC); //mov
	xor_(edx, edx);
	cmp(esi, (int32_t)0x10);
	if (jnz())
		goto loc_47F807;
loc_47F779:
	edx = to32i(dword_563100); //mov
	cmp(edx, (int32_t)0x40);
	if (jge())
		goto loc_47F88F;
	to32i(dword_5630F8) = edx; //mov
	eax = (int32_t)(intptr_t)(edx+1); //lea
	to32i(dword_563100) = eax; //mov
loc_47F796:
	eax = to32i(dword_5630F8); //mov
	ebp = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ebp, eax);
	shl(ebp, (int32_t)2);
	add(ebp, eax);
	eax = to32i(dword_5630FC); //mov
	shl(ebp, (int32_t)5);
	add(ebp, eax);
	to32i(ebp+0xC) = 0; //mov
loc_47F7BA:
	edi = ebp; //mov
	esi = ecx; //mov
	movsd();
	movsd();
	movsd();
loc_47F7C1:
	edx = to32i(ebp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	edx = (int32_t)(intptr_t)(ebp+0x10); //lea
	add(eax, edx);
	edx = ebp; //mov
	esp -= 4; _sub_47F8D0(); esp += 4; //call
	cmp(to32i(esp+0x10), (int32_t)2);
	if (jnz())
		goto loc_47F8B5;
	esp -= 4; _sub_488074(); esp += 4; //call
	dl = al; //mov
	and_(dl, (int8_t)1);
	eax = to32i(ebp+0xC); //mov
	add(dl, (int8_t)2);
	to8i(eax+ebp+0x190) = dl; //mov
	inc(to32i(ebp+0xC));
	pop32(esi);
	pop32(edi);
loc_47F803:
	pop32(ebp);
	esp += 4; return;
loc_47F807:
	edi = to32i(ecx); //mov
	eax = to32i(ebp+0); //mov
	sub(eax, edi);
	test(eax, eax);
	if (jle())
		goto loc_47F81E;
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F82C;
	goto loc_47F779;
loc_47F81E:
	neg(eax);
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F82C;
	goto loc_47F779;
loc_47F82C:
	esi = to32i(ecx+4); //mov
	eax = to32i(ebp+4); //mov
	sub(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_47F844;
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F852;
	goto loc_47F779;
loc_47F844:
	neg(eax);
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F852;
	goto loc_47F779;
loc_47F852:
	edi = to32i(ecx+8); //mov
	eax = to32i(ebp+8); //mov
	sub(eax, edi);
	test(eax, eax);
	if (jle())
		goto loc_47F86A;
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F878;
	goto loc_47F779;
loc_47F86A:
	neg(eax);
	cmp(eax, (int32_t)0x400000);
	if (jl())
		goto loc_47F878;
	goto loc_47F779;
loc_47F878:
	test(edx, edx);
	if (jnz())
		goto loc_47F779;
	cmp(to32i(ebp+0xC), (int32_t)0);
	if (jz())
		goto loc_47F7BA;
	goto loc_47F7C1;
loc_47F88F:
	esi = to32i(dword_5630F8); //mov
	cmp(esi, (int32_t)0x3F);
	if (jge())
		goto loc_47F8A8;
	ebp = (int32_t)(intptr_t)(esi+1); //lea
	to32i(dword_5630F8) = ebp; //mov
	goto loc_47F796;
loc_47F8A8:
	xor_(edi, edi);
	to32i(dword_5630F8) = edi; //mov
	goto loc_47F796;
loc_47F8B5:
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = to32i(ebp+0xC); //mov
	and_(al, (int8_t)1);
	to8i(edx+ebp+0x190) = al; //mov
	inc(to32i(ebp+0xC));
	pop32(esi);
	pop32(edi);
	pop32(ebp);
	esp += 4; return;
}
Fn(void) Game::_sub_47F8D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ecx; //mov
	ecx = to32i(ecx); //mov
	edx = to32i(ebx); //mov
	eax = to32i(ebp+8); //mov
	sub(ecx, edx);
	edx = to32i(ebx+8); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	ecx = (int32_t)(intptr_t)(eax+0x100); //lea
	shl(ch, (int8_t)7);
	sbb(edx, edx);
	add(ch, ch);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	edx = eax; //mov
	eax = 0x4CCC; //mov
	neg(edx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp) = eax; //mov
	eax = to32i(esp+4); //mov
	shl(ah, (int8_t)7);
	sbb(edx, edx);
	add(ah, ah);
	sbb(ecx, ecx);
	xor_(eax, ecx);
	and_(eax, (int32_t)0xFF);
	sub(eax, ecx);
	eax = to32i(dword_4DB6B4+eax*4); //mov
	xor_(eax, edx);
	sub(eax, edx);
	edx = eax; //mov
	eax = 0x4CCC; //mov
	ecx = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx); //mov
	add(edx, ecx);
	sub(edx, to32i(edi));
	sar(edx, (int32_t)8);
	to16i(esi) = dx; //mov
	edx = to32i(ebx+4); //mov
	sub(edx, to32i(edi+4));
	sar(edx, (int32_t)8);
	to16i(esi+2) = dx; //mov
	sar(eax, (int32_t)1);
	edx = to32i(ebx+8); //mov
	ecx = to32i(edi+8); //mov
	add(edx, eax);
	sub(edx, ecx);
	sar(edx, (int32_t)8);
	to16i(esi+4) = dx; //mov
	ecx = to32i(esp); //mov
	edx = to32i(ebx); //mov
	sub(edx, ecx);
	sub(edx, to32i(edi));
	sar(edx, (int32_t)8);
	to16i(esi+6) = dx; //mov
	edx = to32i(ebx+4); //mov
	sub(edx, to32i(edi+4));
	sar(edx, (int32_t)8);
	to16i(esi+8) = dx; //mov
	edx = to32i(ebx+8); //mov
	ebx = to32i(edi+8); //mov
	sub(edx, eax);
	sub(edx, ebx);
	sar(edx, (int32_t)8);
	to16i(esi+0xA) = dx; //mov
	ecx = to32i(esp); //mov
	edx = to32i(ebp+0); //mov
	ebx = to32i(edi); //mov
	sub(edx, ecx);
	sub(edx, ebx);
	sar(edx, (int32_t)8);
	to16i(esi+0xC) = dx; //mov
	edx = to32i(ebp+4); //mov
	sub(edx, to32i(edi+4));
	sar(edx, (int32_t)8);
	to16i(esi+0xE) = dx; //mov
	edx = to32i(ebp+8); //mov
	ebx = to32i(edi+8); //mov
	sub(edx, eax);
	sub(edx, ebx);
	sar(edx, (int32_t)8);
	to16i(esi+0x10) = dx; //mov
	ecx = to32i(esp); //mov
	edx = to32i(ebp+0); //mov
	ebx = to32i(edi); //mov
	add(edx, ecx);
	sub(edx, ebx);
	sar(edx, (int32_t)8);
	to16i(esi+0x12) = dx; //mov
	edx = to32i(ebp+4); //mov
	sub(edx, to32i(edi+4));
	sar(edx, (int32_t)8);
	to16i(esi+0x14) = dx; //mov
	ebx = to32i(ebp+8); //mov
	ebp = to32i(edi+8); //mov
	add(eax, ebx);
	sub(eax, ebp);
	sar(eax, (int32_t)8);
	to16i(esi+0x16) = ax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_47FA30()
{
	eax = to32i(dword_4D9684); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_563108); //mov
	eax = to32i(eax); //mov
	add(eax, edx);
}
Fn(void) Game::_sub_47FA50()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	cmp(eax, to32i(dword_5451E0));
	if (jz())
		goto loc_47FA72;
loc_47FA72:
	eax = to32i(dword_5451E0); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	xor_(ecx, ecx);
	esi = to32i(dword_4D9684); //mov
	to32i(dword_4DAB04) = ecx; //mov
	to32i(dword_5451E0) = ecx; //mov
	test(esi, esi);
	if (jz())
		goto loc_47FAA1;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D9684) = ecx; //mov
loc_47FAA1:
	ebp = to32i(dword_4D9688); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_47FAB9;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D9688) = eax; //mov
loc_47FAB9:
	edx = to32i(dword_4D968C); //mov
	test(edx, edx);
	if (jnz())
		goto loc_47FAC8;
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_47FAC8:
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D968C) = ecx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_47FAE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	ecx = (int32_t)(intptr_t)dword_5451E0; //mov
	ebx = 0x800; //mov
	edx = 0x801; //mov
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47FB20;
	edx = (int32_t)(intptr_t)aCNfs2seGameP_0; //mov
	ecx = 0x71; //mov
	push32(aErrorCouldNotA);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_47FB20:
	eax = to32i(dword_5451E0); //mov
	edx = (int32_t)(intptr_t)dword_5451C0; //mov
	esp -= 4; _sub_459AC0(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_563108) = eax; //mov
	to32i(dword_563104) = ebx; //mov
	ebx = 0x20; //mov
	eax = to32i(dword_5451E0); //mov
	esp -= 4; _sub_47FCA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47FC79;
	ebx = 4; //mov
	edx = (int32_t)(intptr_t)aTrac; //mov
	eax = (int32_t)(intptr_t)dword_5451C0; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47FC79;
	cmp(to32i(dword_5451C4), (int32_t)0x16);
	if (jnz())
		goto loc_47FC79;
	edi = (int32_t)(intptr_t)aCNfs2seGameP_0; //mov
	ebp = 0x82; //mov
	eax = (int32_t)(intptr_t)aStmchunkf; //mov
	edx = to32i(dword_5451D8); //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edi; //mov
	shl(edx, (int32_t)2);
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(dword_5451D8); //mov
	ecx = to32i(dword_5451E0); //mov
	to32i(dword_4D9684) = eax; //mov
	edx = eax; //mov
	shl(ebx, (int32_t)2);
	eax = ecx; //mov
	esp -= 4; _sub_47FCA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47FC79;
	to32i(dword_4DB1DC) = 0x87; //mov
	edx = to32i(dword_5451DC); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aStmcenter; //mov
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(dword_5451DC); //mov
	edx = eax; //mov
	to32i(dword_4D9688) = eax; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_5451E0); //mov
	esp -= 4; _sub_47FCA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47FC79;
	ebx = 0x8C; //mov
	eax = (int32_t)(intptr_t)aStmmetai; //mov
	edx = to32i(dword_5451DC); //mov
	to32i(dword_4DB1DC) = ebx; //mov
	add(edx, edx);
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(dword_5451DC); //mov
	ecx = to32i(dword_5451E0); //mov
	to32i(dword_4D968C) = eax; //mov
	edx = eax; //mov
	eax = ecx; //mov
	add(ebx, ebx);
	esp -= 4; _sub_47FCA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47FC79;
	eax = to32i(dword_5451E0); //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47FC79:
	push32(esi);
	eax = to32i(dword_5451E0); //mov
	xor_(esi, esi);
	esp -= 4; _sub_459B80(); esp += 4; //call
	to32i(dword_5451E0) = esi; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_47FCA0()
{
	push32(ecx);
	push32(esi);
	ecx = ebx; //mov
	eax = to32i(dword_563108); //mov
	add(eax, to32i(dword_563104));
	ebx = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	esi = to32i(dword_563104); //mov
	add(esi, ecx);
	eax = ecx; //mov
	to32i(dword_563104) = esi; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_47FCD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	to32i(esp+0x18) = eax; //mov
	ebp = edx; //mov
	esi = ebx; //mov
	edi = ecx; //mov
	cmp(to32i(dword_4D9538), (int32_t)0);
	if (jz())
		goto loc_47FF1B;
	cmp(to8i(eax+0x20), (int8_t)0);
	if (jz())
		goto loc_47FF1B;
	cmp(to32i(eax+0x1C), (int32_t)0);
	if (jz())
		goto loc_47FF1B;
	ecx = 1; //mov
loc_47FD06:
	edx = to32i(esp+0x18); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	shl(edx, (int32_t)4);
	to32i(esp+0x10) = ecx; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48008D;
	test(ecx, ecx);
	if (jz())
		goto loc_47FD62;
	eax = to32i(esp+0x18); //mov
	cmp(to8i(eax+0x20), (int8_t)2);
	if (jnz())
		goto loc_47FF22;
	eax = 1; //mov
loc_47FD46:
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x1C); //mov
	push32(ebx);
	edx = to32i(eax+0x14); //mov
	ecx = to32i(eax+0x1C); //mov
	ebx = to32i(eax); //mov
	push32(edx);
	eax = esi; //mov
	edx = edi; //mov
	esp -= 4; _sub_4800B0(); esp += 4; //call
loc_47FD62:
	ecx = to32i(esp+8); //mov
	ebx = to32i(esp+0x18); //mov
	edx = to32i(esp+0x34); //mov
	push32(ecx);
	ecx = to32i(esp+0x1C); //mov
	eax = ebp; //mov
	ebx = to32i(ebx); //mov
	ecx = to32i(ecx+0x14); //mov
	esp -= 4; _sub_480330(); esp += 4; //call
	edx = to32i(esp+0x18); //mov
	edx = to32i(edx+4); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	shl(edx, (int32_t)2);
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48008D;
	eax = to32i(esp+0x18); //mov
	xor_(edx, edx);
	eax = to32i(eax+4); //mov
	eax = to32i(esp+0x18); //mov
	xor_(ebx, ebx);
	esi = to32i(eax+4); //mov
	to32i(esp+0x20) = ebx; //mov
	test(esi, esi);
	if (jle())
		goto loc_47FEDC;
	esi = 0x24; //mov
	to32i(esp+0x1C) = ebx; //mov
	xor_(edi, edi);
loc_47FDD1:
	ebx = to32i(esp+0x18); //mov
	eax = to32i(esp+0xC); //mov
	ebp = to32i(esp+0x1C); //mov
	ebx = to32i(ebx+0x18); //mov
	add(eax, ebp);
	ebp = to32i(esp+0xC); //mov
	add(ebx, edi);
	xor_(ecx, ecx);
	add(ebp, esi);
	cl = to8i(ebx); //mov
	to32i(eax) = ebp; //mov
	ebp = (uint16_t)to16i(ebx+2); //movzx
	edx = (int32_t)(intptr_t)(ebx+4); //lea
	add(ebp, to32i(esp+0x3C));
	bl = to8i(ebx+1); //mov
	and_(ebx, (int32_t)0xFF);
	add(ebp, ebx);
	ebx = to32i(esp+0x10); //mov
	to32i(esp+0x14) = ebp; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_47FFE3;
	to32i(eax+0x20) = 0; //mov
	test(cl, (int8_t)1);
	if (jz())
		goto loc_47FF63;
	to32i(eax+4) = 0x1F; //mov
	test(cl, (int8_t)4);
	if (jz())
		goto loc_47FF29;
	xor_(ebx, ebx);
loc_47FE38:
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+1); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx); //mov
loc_47FE6A:
	and_(edx, (int32_t)0xFF);
	imul32(edx, 0x30);
	ebx = to32i(esp+8); //mov
	add(ebx, edx);
	to32i(eax+0x18) = ebx; //mov
	test(cl, (int8_t)0x10);
	if (jz())
		goto loc_480078;
	edx = 2; //mov
loc_47FE8A:
	imul32(ecx, to32i(esp+0x14), 0x1C);
	to16i(eax+0xA) = dx; //mov
	edx = to32i(dword_4D97AC); //mov
	add(edx, ecx);
	cmp(to32i(edx), (int32_t)0);
	if (jz())
		goto loc_480082;
loc_47FEA4:
	to32i(eax+0x1C) = edx; //mov
	edx = to32i(dword_56312A); //mov
	sar(edx, (int32_t)0x10);
	to32i(eax+0x20) = edx; //mov
	ebp = to32i(esp+0x1C); //mov
	eax = to32i(esp+0x20); //mov
	edx = to32i(esp+0x18); //mov
	add(esi, (int32_t)0x24);
	add(edi, (int32_t)0xC);
	add(ebp, (int32_t)0x24);
	inc(eax);
	ecx = to32i(edx+4); //mov
	to32i(esp+0x1C) = ebp; //mov
	to32i(esp+0x20) = eax; //mov
	cmp(eax, ecx);
	if (jl())
		goto loc_47FDD1;
loc_47FEDC:
	edx = to32i(esp+0x38); //mov
	eax = to32i(esp+0xC); //mov
	ecx = to32i(esp+0x18); //mov
	to32i(dword_54522C+edx*8) = eax; //mov
	ecx = to32i(ecx+4); //mov
	dec(ecx);
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ebx = to32i(esp+0xC); //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	to32i(dword_545230+edx*8) = eax; //mov
	to32i(eax) = 0; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_47FF1B:
	xor_(ecx, ecx);
	goto loc_47FD06;
loc_47FF22:
	xor_(eax, eax);
	goto loc_47FD46;
loc_47FF29:
	xor_(ebx, ebx);
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+1); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx+2); //mov
	goto loc_47FE6A;
loc_47FF63:
	to32i(eax+4) = 0x20; //mov
	test(cl, (int8_t)4);
	if (jz())
		goto loc_47FFA9;
	xor_(ebx, ebx);
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+3); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx+1); //mov
	goto loc_47FE6A;
loc_47FFA9:
	xor_(ebx, ebx);
loc_47FFAB:
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+1); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx+3); //mov
	goto loc_47FE6A;
loc_47FFE3:
	test(cl, (int8_t)1);
	if (jz())
		goto loc_480030;
	to32i(eax+4) = 0xC; //mov
	test(cl, (int8_t)4);
	if (jnz())
		goto loc_47FE38;
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+1); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx+2); //mov
	goto loc_47FE6A;
loc_480030:
	to32i(eax+4) = 8; //mov
	test(cl, (int8_t)4);
	if (jz())
		goto loc_47FFAB;
	bl = to8i(edx); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0xC) = ebp; //mov
	bl = to8i(edx+3); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	xor_(ebx, ebx);
	to32i(eax+0x10) = ebp; //mov
	bl = to8i(edx+2); //mov
	imul32(ebx, 0x30);
	ebp = to32i(esp+8); //mov
	add(ebp, ebx);
	to32i(eax+0x14) = ebp; //mov
	dl = to8i(edx+1); //mov
	goto loc_47FE6A;
loc_480078:
	edx = 3; //mov
	goto loc_47FE8A;
loc_480082:
	edx = to32i(dword_500F40); //mov
	goto loc_47FEA4;
loc_48008D:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = to32i(esp+0x38); //mov
	edi = (int32_t)(intptr_t)(dword_54522C+esi*8); //lea
	esi = esp; //mov
	movsd();
	movsd();
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4800B0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	edi = to32i(esp+0x40); //mov
	to32i(esp+0x18) = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x1C) = ebx; //mov
	esi = ecx; //mov
	ecx = to32i(esp+0x44); //mov
	eax = to32i(dword_4D953C); //mov
	sar(eax, (int32_t)0x18);
	ebx = to32i(dword_56310C); //mov
	and_(eax, (int32_t)0xFF);
	add(ebx, eax);
	sar(ebx, (int32_t)1);
	and_(ebx, (int32_t)0xFF);
	cmp(eax, ebx);
	if (jge())
		goto loc_48016A;
loc_4800EF:
	shl(eax, (int32_t)0x18);
	to32i(esp+0x20) = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_480161;
	xor_(edx, edx);
	ebx = to32i(esp+0x1C); //mov
	to32i(esp+0x24) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_480161;
loc_480108:
	ebx = to32i(esi+4); //mov
	eax = to32i(esi); //mov
	edx = to32i(esi+8); //mov
	or_(eax, ebx);
	or_(eax, edx);
	if (jnz())
		goto loc_48016E;
	ebx = to32i(dword_56310C); //mov
	eax = to32i(esp+0x20); //mov
	shl(ebx, (int32_t)0x10);
	or_(ebx, eax);
	eax = to32i(dword_56310C); //mov
	shl(eax, (int32_t)8);
	to32i(ecx+0x28) = 0; //mov
	or_(ebx, eax);
	eax = to32i(dword_56310C); //mov
	to32i(ecx+0x2C) = 0; //mov
loc_480142:
	or_(ebx, eax);
	to32i(ecx+0x20) = ebx; //mov
	eax = to32i(esp+0x24); //mov
	edx = to32i(esp+0x1C); //mov
	add(esi, (int32_t)0xC);
	add(edi, (int32_t)6);
	inc(eax);
	add(ecx, (int32_t)0x30);
	to32i(esp+0x24) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_480108;
loc_480161:
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_48016A:
	eax = ebx; //mov
	goto loc_4800EF;
loc_48016E:
	eax = to16i(edi); //movsx
	ebx = to32i(ebp+0); //mov
	shl(eax, (int32_t)8);
	add(ebx, eax);
	to32i(esp+0xC) = ebx; //mov
	eax = to32i(edi); //mov
	sar(eax, (int32_t)0x10);
	ebx = to32i(ebp+4); //mov
	shl(eax, (int32_t)8);
	add(ebx, eax);
	to32i(esp+0x10) = ebx; //mov
	eax = to32i(edi+2); //mov
	sar(eax, (int32_t)0x10);
	ebx = to32i(ebp+8); //mov
	shl(eax, (int32_t)8);
	add(ebx, eax);
	edx = to32i(esp+0x18); //mov
	to32i(esp+0x14) = ebx; //mov
	eax = esi; //mov
	ebx = esp; //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	test(edx, edx);
	if (jnz())
		goto loc_480274;
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jnz())
		goto loc_480274;
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jnz())
		goto loc_480274;
	ebx = 0x10000; //mov
	to32i(esp+0x14) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
loc_4801DC:
	eax = to32i(esp+0xC); //mov
	esp -= 4; _sub_4A0580(); esp += 4; //call
	ebx = eax; //mov
	eax = to32i(esp); //mov
	neg(eax);
	esp -= 4; _sub_4A0580(); esp += 4; //call
	add(ebx, eax);
	edx = to32i(esp+0x48); //mov
	shl(ebx, (int32_t)9);
	test(edx, edx);
	if (jnz())
		goto loc_480294;
	edx = to32i(esp+4); //mov
	cmp(edx, (int32_t)0x8000);
	if (jg())
		goto loc_48028B;
loc_480212:
	xor_(eax, eax);
loc_480214:
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x28) = ebx; //mov
	fld(to32f(flt_4CF458));
	fild(to32i(esp+0x2C));
	fmul_st(0, 1);
	fild(to32i(esp+0x28));
	fmulp_st(2, 0);
	fstp(to32f(ecx+0x2C));
	fstp(to32f(ecx+0x28));
	eax = to32i(esp+4); //mov
	add(eax, (int32_t)0x10000);
	ebx = to32i(dword_56310C); //mov
	sar(eax, (int32_t)1);
	imul32(eax, ebx);
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFF);
	if (jge())
		goto loc_480256;
	test(eax, eax);
	if (jl())
		goto loc_4802A5;
loc_480256:
	cmp(eax, (int32_t)0xFF);
	if (jge())
		goto loc_4802A9;
loc_48025D:
	ebx = eax; //mov
	edx = to32i(esp+0x20); //mov
	shl(ebx, (int32_t)0x10);
	or_(edx, ebx);
	ebx = eax; //mov
	shl(ebx, (int32_t)8);
	or_(ebx, edx);
	goto loc_480142;
loc_480274:
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_45E990(); esp += 4; //call
	goto loc_4801DC;
loc_48028B:
	eax = (int32_t)(intptr_t)(edx+edx-0x10000); //lea
	goto loc_480214;
loc_480294:
	eax = to32i(esp+4); //mov
	test(eax, eax);
	if (jg())
		goto loc_480214;
	goto loc_480212;
loc_4802A5:
	xor_(eax, eax);
	goto loc_48025D;
loc_4802A9:
	eax = 0xFF; //mov
	goto loc_48025D;
}
Fn(void) Game::_sub_4802B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(ch, ah);
	sar(ax, (int16_t)4);
	edx = eax; //mov
	xor_(dh, ah);
	sar(ax, (int16_t)3);
	ebx = eax; //mov
	xor_(bh, ah);
	and_(dl, (int8_t)7);
	and_(bl, (int8_t)7);
	sar(ax, (int16_t)3);
	add(edx, ebx);
	ebx = eax; //mov
	xor_(bh, ah);
	sar(ax, (int16_t)3);
	and_(bl, (int8_t)7);
	xor_(ah, ah);
	add(edx, ebx);
	and_(al, (int8_t)7);
	add(edx, eax);
	shr(dx, (int16_t)2);
	eax = edx; //mov
	ebx = edx; //mov
	shl(eax, (int32_t)4);
	shl(ebx, (int32_t)7);
	or_(ebx, eax);
	eax = edx; //mov
	shl(eax, (int32_t)0xA);
	or_(ebx, eax);
	eax = edx; //mov
	shl(eax, (int32_t)0xD);
	and_(cl, (int8_t)0xF);
	or_(eax, ebx);
	or_(ecx, eax);
	xor_(eax, eax);
	ax = dx; //mov
	edx = eax; //mov
	shl(edx, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, edx);
	add(eax, (int32_t)0x32);
	to16i(dword_56312A+2) = cx; //mov
	to32i(dword_56310C) = eax; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_480330()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	ebp = to32i(esp+0x48); //mov
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x28) = ebx; //mov
	eax = (int32_t)(intptr_t)(ebp+0x10); //lea
	to32i(esp+0x30) = ecx; //mov
	to32i(esp+0x2C) = eax; //mov
loc_480351:
	edx = to32i(esp+0x28); //mov
	dec(edx);
	to32i(esp+0x28) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_480368;
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_480368:
	eax = to32i(esp+0x30); //mov
	eax = to16i(eax); //movsx
	shl(eax, (int32_t)8);
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x30); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)8);
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x30); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	shl(eax, (int32_t)8);
	edx = to32i(esp+0x24); //mov
	to32i(esp+8) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	ebx = to32i(esp+0xC); //mov
	add(ebx, to32i(eax));
	eax = to32i(esp+0x18); //mov
	to32i(esp+0xC) = ebx; //mov
	esi = to32i(esp+0x10); //mov
	add(esi, to32i(eax+4));
	eax = to32i(esp+0x18); //mov
	to32i(esp+0x10) = esi; //mov
	edi = to32i(esp+0x14); //mov
	eax = to32i(eax+8); //mov
	add(edi, eax);
	to32i(esp+0x14) = edi; //mov
	to32i(ebp+0) = ebx; //mov
	eax = to32i(esp+0x10); //mov
	to32i(ebp+4) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to16i(ebp+0xC) = 0; //mov
	to32i(ebp+8) = eax; //mov
	eax = to32i(esp+0x14); //mov
	esi = to32i(esp+0x2C); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4803FE;
	to32i(esp+0x14) = 1; //mov
loc_4803FE:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x20); //lea
	to32i(esp+0x34) = eax; //mov
	add(ebp, (int32_t)0x30);
	fild(to32i(esp+0x34));
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	fstp(to32f(esp+0x1C));
	ebx = to32i(eax); //mov
	ecx = ebx; //mov
	shr(ebx, (int32_t)0xF);
	and_(ecx, (int32_t)0xFF800000);
	and_(ebx, (int32_t)0xFF);
	fld(to32f(eax));
	ebx = to32i(dword_4F19E4+ebx*4); //mov
	sub(ebx, ecx);
	to32i(dword_4F1E14) = ebx; //mov
	fmul(to32f(dword_4F1E14));
	fsubr(to32f(flt_4D52AC));
	fmul(to32f(dword_4F1E14));
	fld_st(0);
	fmul(to32f(eax));
	fsubr(to32f(flt_4D52AC));
	fmulp_st(1, 0);
	fstp(to32f(edx));
	ecx = (int32_t)(intptr_t)(esp+0x20); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(esi+0x14); //lea
	fld(to32f(dword_4D5294));
	fmul(to32f(ecx));
	fld(to32f(flt_4D5298));
	fmul(to32f(ecx));
	fld(to32f(flt_4D52B0));
	fmul(to32f(ecx));
	fild(to32i(eax+4));
	fild(to32i(eax));
	fxch_st(1);
	fmulp_st(3, 0);
	fmulp_st(3, 0);
	fld(to32f(flt_4D52A0));
	faddp_st(2, 0);
	fld(to32f(flt_4D529C));
	faddp_st(3, 0);
	fstp(to32f(ebx+0xC));
	fstp(to32f(ebx+4));
	fstp(to32f(ebx));
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_48050D;
	cmp(eax, ecx);
	if (jge())
		goto loc_48050D;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4804E1;
	cmp(eax, ecx);
	if (jl())
		goto loc_4804E1;
	cmp(eax, edx);
	if (jle())
		goto loc_4804E5;
	or_(ebx, (int32_t)4);
	goto loc_4804E5;
loc_4804E1:
	or_(ebx, (int32_t)8);
loc_4804E5:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_480508;
	cmp(eax, ecx);
	if (jl())
		goto loc_480508;
	cmp(eax, edx);
	if (jle())
		goto loc_480512;
	or_(ebx, (int32_t)2);
	goto loc_480512;
loc_480508:
	or_(ebx, (int32_t)1);
	goto loc_480512;
loc_48050D:
	ebx = 0x10; //mov
loc_480512:
	to8i(edi) = bl; //mov
	ecx = to32i(esp+0x2C); //mov
	ebx = to32i(esp+0x30); //mov
	ax = to16i(ebp-0xC); //mov
	add(ecx, (int32_t)0x30);
	xor_(ah, ah);
	add(ebx, (int32_t)6);
	and_(al, (int8_t)0x10);
	to32i(esp+0x2C) = ecx; //mov
	to32i(esp+0x30) = ebx; //mov
	to16i(ebp-0x22) = ax; //mov
	goto loc_480351;
}
Fn(void) Game::_sub_480540()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ebp = to32i(esp+0x3C); //mov
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x24) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
	eax = (int32_t)(intptr_t)(ebp+0x10); //lea
	to32i(esp+0x1C) = ecx; //mov
	to32i(esp+0x20) = eax; //mov
loc_480561:
	edx = to32i(esp+0x10); //mov
	dec(edx);
	to32i(esp+0x10) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_480578;
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_480578:
	ebx = esp; //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x1C); //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	ebx = to32i(esp); //mov
	add(ebx, to32i(eax));
	eax = to32i(esp+0x24); //mov
	to32i(esp) = ebx; //mov
	esi = to32i(esp+4); //mov
	add(esi, to32i(eax+4));
	eax = to32i(esp+0x24); //mov
	to32i(esp+4) = esi; //mov
	edi = to32i(esp+8); //mov
	eax = to32i(eax+8); //mov
	add(edi, eax);
	to32i(esp+8) = edi; //mov
	to32i(ebp+0) = ebx; //mov
	eax = to32i(esp+4); //mov
	to32i(ebp+4) = eax; //mov
	eax = to32i(esp+8); //mov
	to16i(ebp+0xC) = 0; //mov
	to32i(ebp+8) = eax; //mov
	eax = to32i(esp+8); //mov
	esi = to32i(esp+0x20); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4805DE;
	to32i(esp+8) = 1; //mov
loc_4805DE:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	to32i(esp+0x28) = eax; //mov
	add(ebp, (int32_t)0x30);
	fild(to32i(esp+0x28));
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	fstp(to32f(esp+0x14));
	ebx = to32i(eax); //mov
	ecx = ebx; //mov
	shr(ebx, (int32_t)0xF);
	and_(ecx, (int32_t)0xFF800000);
	and_(ebx, (int32_t)0xFF);
	fld(to32f(eax));
	ebx = to32i(dword_4F19E4+ebx*4); //mov
	sub(ebx, ecx);
	to32i(dword_4F1E14) = ebx; //mov
	fmul(to32f(dword_4F1E14));
	fsubr(to32f(flt_4D52AC));
	fmul(to32f(dword_4F1E14));
	fld_st(0);
	fmul(to32f(eax));
	fsubr(to32f(flt_4D52AC));
	fmulp_st(1, 0);
	fstp(to32f(edx));
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(esi+0x14); //lea
	fld(to32f(dword_4D5294));
	fmul(to32f(ecx));
	fld(to32f(flt_4D5298));
	fmul(to32f(ecx));
	fld(to32f(flt_4D52B0));
	fmul(to32f(ecx));
	fild(to32i(eax+4));
	fild(to32i(eax));
	fxch_st(1);
	fmulp_st(3, 0);
	fmulp_st(3, 0);
	fld(to32f(flt_4D52A0));
	faddp_st(2, 0);
	fld(to32f(flt_4D529C));
	faddp_st(3, 0);
	fstp(to32f(ebx+0xC));
	fstp(to32f(ebx+4));
	fstp(to32f(ebx));
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4806EB;
	cmp(eax, ecx);
	if (jge())
		goto loc_4806EB;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4806BF;
	cmp(eax, ecx);
	if (jl())
		goto loc_4806BF;
	cmp(eax, edx);
	if (jle())
		goto loc_4806C3;
	or_(ebx, (int32_t)4);
	goto loc_4806C3;
loc_4806BF:
	or_(ebx, (int32_t)8);
loc_4806C3:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4806E6;
	cmp(eax, ecx);
	if (jl())
		goto loc_4806E6;
	cmp(eax, edx);
	if (jle())
		goto loc_4806F0;
	or_(ebx, (int32_t)2);
	goto loc_4806F0;
loc_4806E6:
	or_(ebx, (int32_t)1);
	goto loc_4806F0;
loc_4806EB:
	ebx = 0x10; //mov
loc_4806F0:
	to8i(edi) = bl; //mov
	ecx = to32i(esp+0x20); //mov
	ebx = to32i(esp+0x1C); //mov
	ax = to16i(ebp-0xC); //mov
	add(ecx, (int32_t)0x30);
	xor_(ah, ah);
	add(ebx, (int32_t)0xC);
	and_(al, (int8_t)0x10);
	to32i(esp+0x20) = ecx; //mov
	to32i(esp+0x1C) = ebx; //mov
	to16i(ebp-0x22) = ax; //mov
	goto loc_480561;
}
Fn(void) Game::_sub_480720()
{
	_sub_49EAC8(); return; //jmp
}
Fn(void) Game::_sub_480730()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	esi = eax; //mov
	edx = to32i(eax); //mov
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_480760;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_480784;
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	cmp(eax, (int32_t)5);
	if (jnz())
		goto loc_4807CC;
loc_480757:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_480760:
	push32(edx);
	edx = to32i(eax+0x6C); //mov
	add(edx, (int32_t)0x28);
	eax = to32i(eax+0x68); //mov
	push32(edx);
	add(eax, (int32_t)0x1E6);
	push32(eax);
	push32(0x5A);
	ecx = 0x46; //mov
	ebx = 0x96; //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	goto loc_480757;
loc_480784:
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_42A270(); esp += 4; //call
	push32(0);
	ebp = to32i(esp+8); //mov
	eax = to32i(esp+4); //mov
	ecx = to32i(esp+0x10); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(esp+0xC); //mov
	push32(ebp);
	sar(edx, (int32_t)1);
	push32(eax);
	eax = ebp; //mov
	add(ecx, ecx);
	sub(eax, edx);
	push32(0x5A);
	edx = eax; //mov
	eax = to32i(esp+0x10); //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	goto loc_480757;
loc_4807CC:
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	xor_(eax, eax);
	esp -= 4; _sub_42A270(); esp += 4; //call
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_480804;
	eax = to32i(esp+0x1C); //mov
	edx = eax; //mov
	ecx = 0xC; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	sub(to32i(esp+0x14), eax);
loc_480804:
	push32(edi);
	push32(0);
	esi = to32i(esp+0x1C); //mov
	push32(esi);
	edi = to32i(esp+0x1C); //mov
	push32(edi);
	ecx = to32i(esp+0x2C); //mov
	ebx = to32i(esp+0x28); //mov
	push32(0x5A);
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	pop32(edi);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_480830()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x20);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_48088E;
	push32(edi);
	push32(esi);
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	ecx = (int32_t)(intptr_t)(esp+0x10); //lea
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(edx);
	eax = to32i(eax+4); //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_42A270(); esp += 4; //call
	push32(0);
	esi = to32i(esp+0x10); //mov
	edi = to32i(esp+0xC); //mov
	ecx = to32i(esp+0x18); //mov
	edx = to32i(esp+0x18); //mov
	ebx = to32i(esp+0x14); //mov
	push32(esi);
	sar(edx, (int32_t)1);
	eax = esi; //mov
	push32(edi);
	add(ecx, ecx);
	sub(eax, edx);
	push32(0x78);
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x20);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48088E:
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	xor_(eax, eax);
	esp -= 4; _sub_42A270(); esp += 4; //call
	push32(0);
	ecx = to32i(esp+0x18); //mov
	push32(ecx);
	ebx = to32i(esp+0x18); //mov
	push32(ebx);
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x1C); //mov
	push32(0x78);
	ecx = to32i(esp+0x2C); //mov
	ebx = to32i(esp+0x28); //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4808D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	esi = to32i(esp+0x2C); //mov
	to32i(esp+0x10) = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x14) = ebx; //mov
	edi = ecx; //mov
	esp -= 4; _sub_4A05A0(); esp += 4; //call
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, esi);
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	to32i(esp) = eax; //mov
	edx = eax; //mov
	eax = esi; //mov
	to32i(esp+0x18) = edi; //mov
	esp -= 4; _sub_4A0704(); esp += 4; //call
	push32(0x3B0355AD);
	fild(to32i(esp+0x1C));
	push32(0x3F800000);
	eax = to32i(esp+0x3C); //mov
	fstp(to32f(esp+0xC));
	to32i(esp+0x20) = eax; //mov
	fld(to32f(esp+0xC));
	fild(to32i(esp+0x20));
	fstp(to32f(esp+0x10));
	fadd(to32f(esp+0x10));
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x24) = eax; //mov
	fstp(to32f(esp));
	fild(to32i(esp+0x24));
	eax = to32i(esp+0x3C); //mov
	fstp(to32f(esp+0x18));
	to32i(esp+0x24) = eax; //mov
	fld(to32f(esp+0x18));
	fild(to32i(esp+0x24));
	fstp(to32f(esp+0x24));
	fadd(to32f(esp+0x24));
	sub(esp, (int32_t)4);
	fstp(to32f(esp));
	push32(to32i(esp+0x18));
	push32(to32i(esp+0x2C));
	edx = to32i(esp+0x50); //mov
	esp -= 4; _sub_433A40(); esp += 4; //call
	push32(edx);
	eax = to32i(esp+4); //mov
	push32(to32i(esp+8));
	to32i(esp+0x20) = eax; //mov
	push32(to32i(esp+0x14));
	fild(to32i(esp+0x24));
	sub(esp, (int32_t)4);
	to32i(esp+0x28) = esi; //mov
	fstp(to32f(esp));
	fild(to32i(esp+0x28));
	sub(esp, (int32_t)4);
	to32i(esp+0x2C) = ebp; //mov
	fstp(to32f(esp));
	fild(to32i(esp+0x2C));
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x30) = eax; //mov
	fstp(to32f(esp));
	fild(to32i(esp+0x30));
	sub(esp, (int32_t)4);
	fstp(to32f(esp));
	esp -= 4; _sub_433910(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_4809F0()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_4DAB08) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_480A00()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_4DAB08) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_480BA0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	cmp(to32i(dword_563D54), (int32_t)0);
	if (jnz())
		goto loc_480BF4;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_480BF4:
	push32(ebx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x466; //mov
	esp -= 4; _sub_4821E0(); esp += 4; //call
	cmp(to32i(dword_563D54), (int32_t)0);
	if (jz())
		goto loc_480C3C;
	xor_(edx, edx);
loc_480C24:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(edx, to32i(dword_563D54));
	if (jnz())
		goto loc_480C24;
loc_480C3C:
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_480C60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	ebp = eax; //mov
	to32i(esp+0x3C) = edx; //mov
	cmp(to32i(dword_4DAB38), (int32_t)0);
	if (jnz())
		goto loc_480C80;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DAB38) = eax; //mov
loc_480C80:
	ah = to8i(byte_5635E0); //mov
	test(ah, ah);
	if (jnz())
		goto loc_480F6B;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	ecx = 0x20; //mov
	dl = 1; //mov
	to32i(dword_5635C8) = eax; //mov
	xor_(esi, esi);
	to32i(dword_5635D0) = ecx; //mov
	to32i(dword_5635C4) = esi; //mov
	to32i(dword_5635CC) = esi; //mov
	to8i(byte_5635E0) = dl; //mov
	push32(sub_481CC0);
	push32(7);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_481C60);
	push32(8);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_481BB0);
	push32(2);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_4818B0);
	push32(0x100);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_481860);
	push32(0x101);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_4819D0);
	push32(0x102);
	esp -= 4; _sub_482270(); esp += 4; //call
	push32(sub_481BE0);
	push32(0x466);
	esp -= 4; _sub_482270(); esp += 4; //call
loc_480EDC:
	eax = 1; //mov
	to8i(byte_563D5D) = bl; //mov
	to32i(dword_563D74) = eax; //mov
#ifdef SWAP_WINDOW_AND_GL_THREAD
	to8i(canRunWindowThread) = al; //mov
#else
	ecx = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	ebx = 1; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)sub_481080; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_480F63;
#endif
	xor_(edx, edx);
loc_480F1C:
	ebx = to32i(dword_4DAB14); //mov
	cmp(edx, ebx);
	if (jnz())
		goto loc_480F97;
	eax = ebx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_480F1C;
loc_480F63:
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_480F6B:
	cmp(to32i(dword_563D54), (int32_t)0);
	if (jz())
		goto loc_480EDC;
	xor_(eax, eax);
	al = to8i(byte_563D5D); //mov
	cmp(ebx, eax);
	if (jz())
		goto loc_480EDC;
	eax = 1; //mov
	goto loc_480F63;
loc_480F97:
	push32(1);
	push32(2);
	push32(1);
	esp -= 4; _sub_497318(); esp += 4; //call
	cmp(to32i(dword_563D54), (int32_t)0);
	if (jz())
		goto loc_480FA5;
	esp -= 4; _sub_480BA0(); esp += 4; //call
loc_480FA5:
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	edx = to32i(dword_4DAB14); //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	cmp(to32i(dword_4DAB14), (int32_t)0);
	if (jz())
		goto loc_480FD8;
	xor_(edx, edx);
loc_480FBF:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(edx, to32i(dword_4DAB14));
	if (jnz())
		goto loc_480FBF;
loc_480FD8:
	eax = to32i(dword_563D54); //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_481080()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x2C);
	eax = (int32_t)(intptr_t)dword_563900; //mov
	esp -= 4; _sub_481290(); esp += 4; //call
	ebx = eax; //mov
	esi = eax; //mov
	esp -= 4; _sub_489E0C(); esp += 4; //call
	to32i(dword_4DAB14) = eax; //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	eax = to32i(dword_4DAB14); //mov
	xor_(edx, edx);
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_563D54) = ebx; //mov
	to32i(dword_4DAB18) = edx; //mov
	to32i(dword_4DAB14) = edx; //mov
	cmp(esi, to32i(dword_563D54));
	if (jnz())
		goto loc_48120E;
loc_48110F:
	push32(0);
	push32(0);
	push32(0);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	eax = GetMessageA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jz())
		goto loc_48125C;
	eax = to32i(dword_4DAB38); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = esp; //mov
	push32(eax);
	eax = DispatchMessageA_wrap((int32_t)(intptr_t)this, to32i(esp + 0)); esp += 4;
	eax = to32i(dword_4DAB38); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_48119F:
	cmp(to32i(dword_4DAB18), (int32_t)0);
	if (jz())
		goto loc_481202;
	xor_(ebx, ebx);
	edi = to32i(dword_563900); //mov
	to32i(dword_4DAB18) = ebx; //mov
	test(edi, edi);
	if (jz())
		goto loc_4811E1;
	cmp(to32i(dword_563910), (int32_t)0);
	if (jz())
		goto loc_4811E1;
	eax = (int32_t)(intptr_t)dword_563900; //mov
	esp -= 4; _sub_491964(); esp += 4; //call
loc_4811E1:
	eax = to32i(dword_563D54); //mov
	push32(eax);
	eax = DestroyWindow_wrap(to32i(esp + 0)); esp += 4;
loc_481202:
	cmp(esi, to32i(dword_563D54));
	if (jz())
		goto loc_48110F;
loc_48120E:
	add(esp, (int32_t)0x2C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48125C:
	ebx = 0xA; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)sub_4821A0; //mov
	esp -= 4; _sub_483DD0(); esp += 4; //call
	goto loc_48119F;
}
Fn(void) Game::_sub_481290()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	to32i(eax+0x464) = 0; //mov
	to32i(eax+0x468) = 0; //mov
	push32(sub_481590);
	eax = WrapperCreateWindow(to32i(esp + 0)); esp += 4;
	esi = eax; //mov
	esp -= 4; _sub_497244(); esp += 4; //call
	eax = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_481590()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x10);
	esi = to32i(ebp+0x18); //mov
	ecx = (int32_t)(intptr_t)dword_563900; //mov
	push32(sub_4823D0);
	edx = (int32_t)(intptr_t)dword_5631B0; //mov
	eax = (int32_t)(intptr_t)(ebp-0x10); //lea
	ebx = to32i(dword_4DAB10); //mov
	to32i(ebp-0x10) = esi; //mov
	xor_(edi, edi);
	to32i(ebp-4) = ecx; //mov
	ecx = 8; //mov
	to32i(ebp-8) = edi; //mov
	esp -= 4; _sub_4A0796(); esp += 4; //call
	ebx = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48163B;
	eax = (int32_t)(intptr_t)(ebp-8); //lea
	push32(eax);
	edi = to32i(ebp+0x20); //mov
	push32(edi);
	eax = to32i(ebp+0x1C); //mov
	push32(eax);
	push32(esi);
	edx = to32i(ebp+0x14); //mov
	push32(edx);
	ecx = to32i(ebp-4); //mov
	push32(ecx);
	call(to32i(ebx+4));
	edi = eax; //mov
loc_48163B:
	test(edi, edi);
	if (jz())
		goto loc_481675;
	eax = to32i(ebp-8); //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x10; return;
loc_481675:
	ebx = to32i(ebp+0x20); //mov
	push32(ebx);
	edi = to32i(ebp+0x1C); //mov
	push32(edi);
	push32(esi);
	eax = to32i(ebp+0x14); //mov
	push32(eax);
	eax = DefWindowProcA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x10; return;
}
Fn(void) Game::_sub_481860()
{
	cmp(to32i(esp+4), (int32_t)0);
	if (jz())
		goto loc_4818A1;
	eax = to32i(esp+0x14); //mov
	shr(eax, (int32_t)0x10);
	ecx = to32i(dword_4DAB40); //mov
	and_(eax, (int32_t)0x7F);
	test(ecx, ecx);
	if (jz())
		goto loc_481885;
	edx = ecx; //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
loc_481885:
	xor_(dl, dl);
	byte_4DB2F4[eax] = dl; //mov
loc_4818A1:
	xor_(eax, eax);
	esp += 0x18; return;
}
Fn(void) Game::_sub_4818B0()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	edi = to32i(esp+0x20); //mov
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_481973;
	esi = edi; //mov
	ecx = to32i(dword_5635D0); //mov
	and_(esi, (int32_t)0xFFFF);
	cmp(esi, ecx);
	if (jle())
		goto loc_4818D6;
	esi = ecx; //mov
loc_4818D6:
	eax = edi; //mov
	shr(eax, (int32_t)0x10);
	and_(eax, (int32_t)0x7F);
	ebx = to32i(dword_4DAB40); //mov
	to32i(dword_5635DC) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4818FB;
	add(eax, ebx);
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	to32i(dword_5635DC) = eax; //mov
loc_4818FB:
	eax = to32i(dword_5635DC); //mov
	byte_4DB2F4[eax] = 1; //mov
	shr(edi, (int32_t)0x18);
	ebx = to32i(dword_5635D8); //mov
	and_(edi, (int32_t)1);
	test(ebx, ebx);
	if (jz())
		goto loc_48197E;
	ecx = edi; //mov
	xor_(edi, edi);
loc_481948:
	dec(esi);
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_481973;
	edx = to32i(dword_5635DC); //mov
	ebx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_4820E0(); esp += 4; //call
	goto loc_481948;
loc_481973:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x18; return;
loc_48197E:
	edx = to32i(esp+0x1C); //mov
	eax = to32i(esp+0x18); //mov
	esp -= 4; _sub_481D80(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4819A8;
loc_481991:
	dec(esi);
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_481973;
	edx = to32i(dword_5635DC); //mov
	ebx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4820E0(); esp += 4; //call
	goto loc_481991;
loc_4819A8:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x18; return;
}
Fn(void) Game::_sub_4819D0()
{
	push32(edi);
	push32(ebp);
	ebp = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	cmp(to32i(esp+0xC), (int32_t)0);
	if (jz())
		goto loc_481A30;
	push32(esi);
	push32(ebx);
	ecx = edi; //mov
	ebx = to32i(dword_5635D0); //mov
	and_(ecx, (int32_t)0xFFFF);
	cmp(ecx, ebx);
	if (jg())
		goto loc_481A16;
loc_4819F5:
	esi = edi; //mov
	shr(esi, (int32_t)0x18);
	shr(edi, (int32_t)0x10);
	and_(esi, (int32_t)1);
	and_(edi, (int32_t)0x7F);
loc_481A03:
	dec(ecx);
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_481A1A;
	ebx = esi; //mov
	edx = edi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4820E0(); esp += 4; //call
	goto loc_481A03;
loc_481A16:
	ecx = ebx; //mov
	goto loc_4819F5;
loc_481A1A:
	pop32(ebx);
	pop32(esi);
loc_481A30:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	esp += 0x18; return;
}
Fn(void) Game::_sub_481BB0()
{
	eax = to32i(esp+4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_481BBD;
	xor_(eax, eax);
	esp += 0x18; return;
loc_481BBD:
	to32i(eax+0x454) = 0; //mov
	xor_(eax, eax);
	esp += 0x18; return;
}
Fn(void) Game::_sub_481BE0()
{
	cmp(to32i(esp+4), (int32_t)0);
	if (jnz())
		goto loc_481BEF;
	eax = 1; //mov
	esp += 0x18; return;
loc_481BEF:
	ecx = 1; //mov
	to32i(dword_4DAB18) = ecx; //mov
	eax = 1; //mov
	esp += 0x18; return;
}
Fn(void) Game::_sub_481C60()
{
	edx = to32i(esp+8); //mov
	cmp(edx, to32i(dword_563D54));
	if (jz())
		goto loc_481C71;
	xor_(eax, eax);
	esp += 0x18; return;
loc_481C71:
	ecx = to32i(dword_5635D4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_481C97;
	xor_(eax, eax);
	call(to32i(dword_5635D4));
loc_481C97:
	edx = 0x80; //mov
	eax = (int32_t)(intptr_t)byte_4DB2F4; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(eax, eax);
	esp += 0x18; return;
}
Fn(void) Game::_sub_481CC0()
{
	edx = to32i(esp+4); //mov
	test(edx, edx);
	if (jz())
		goto loc_481D2D;
	ecx = to32i(esp+8); //mov
	cmp(ecx, to32i(dword_563D54));
	if (jnz())
		goto loc_481D2D;
	cmp(to32i(dword_5635D4), (int32_t)0);
	if (jnz())
		goto loc_481D32;
loc_481CDD:
	cmp(to8i(edx+0x45D), (int8_t)0);
	if (jz())
		goto loc_481CEF;
loc_481CEF:
	cmp(to32i(dword_563D74), (int32_t)0);
	if (jnz())
		goto loc_481D2D;
	push32(edi);
	edi = 1; //mov
	to32i(dword_563D74) = edi; //mov
	pop32(edi);
loc_481D2D:
	xor_(eax, eax);
	esp += 0x18; return;
loc_481D32:
	eax = 1; //mov
	call(to32i(dword_5635D4));
	goto loc_481CDD;
}
Fn(void) Game::_sub_481D80()
{
	cmp(eax, (int32_t)0x104);
	if (jnz())
		goto loc_481DB4;
loc_481D87:
	cmp(edx, (int32_t)0x65);
	if (jnb())
		goto loc_481DC0;
	cmp(edx, (int32_t)0x28);
	if (jnb())
		goto loc_481E5E;
	cmp(edx, (int32_t)0x24);
	if (jnb())
		goto loc_481EAF;
	cmp(edx, (int32_t)0x22);
	if (jnb())
		goto loc_481EC0;
	cmp(edx, (int32_t)0x21);
	if (jnz())
		goto loc_481DBB;
	edx = 0x4900; //mov
	eax = edx; //mov
	return;
loc_481DB4:
	cmp(eax, (int32_t)0x100);
	if (jz())
		goto loc_481D87;
loc_481DBB:
	xor_(edx, edx);
	eax = edx; //mov
	return;
loc_481DC0:
	if (jbe())
		goto loc_481F12;
	cmp(edx, (int32_t)0x73);
	if (jnb())
		goto loc_481DE7;
	cmp(edx, (int32_t)0x69);
	if (jnb())
		goto loc_481E34;
	cmp(edx, (int32_t)0x67);
	if (jb())
		goto loc_481F1A;
	if (ja())
		goto loc_481F22;
	edx = 0x51; //mov
	eax = edx; //mov
	return;
loc_481DE7:
	if (jbe())
		goto loc_481F3A;
	cmp(edx, (int32_t)0x77);
	if (jnb())
		goto loc_481E09;
	cmp(edx, (int32_t)0x75);
	if (jb())
		goto loc_481F42;
	if (ja())
		goto loc_481F4A;
	edx = 0x4000; //mov
	eax = edx; //mov
	return;
loc_481E09:
	if (jbe())
		goto loc_481F52;
	cmp(edx, (int32_t)0x79);
	if (jb())
		goto loc_481F5A;
	if (jbe())
		goto loc_481F62;
	cmp(edx, (int32_t)0x7A);
	if (jbe())
		goto loc_481F6A;
	cmp(edx, (int32_t)0x7B);
	if (jnz())
		goto loc_481DBB;
	edx = 0x8800; //mov
	eax = edx; //mov
	return;
loc_481E34:
	if (jbe())
		goto loc_481F2A;
	cmp(edx, (int32_t)0x71);
	if (jnb())
		goto loc_481E50;
	cmp(edx, (int32_t)0x70);
	if (jnz())
		goto loc_481DBB;
	edx = 0x3B00; //mov
	eax = edx; //mov
	return;
loc_481E50:
	if (ja())
		goto loc_481F32;
	edx = 0x3C00; //mov
	eax = edx; //mov
	return;
loc_481E5E:
	if (jbe())
		goto loc_481EEA;
	cmp(edx, (int32_t)0x61);
	if (jnb())
		goto loc_481E7F;
	cmp(edx, (int32_t)0x2E);
	if (jnb())
		goto loc_481E9C;
	cmp(edx, (int32_t)0x2D);
	if (jnz())
		goto loc_481DBB;
	edx = 0x5200; //mov
	eax = edx; //mov
	return;
loc_481E7F:
	if (jbe())
		goto loc_481EFA;
	cmp(edx, (int32_t)0x63);
	if (jb())
		goto loc_481F02;
	if (ja())
		goto loc_481F0A;
	edx = 0x47; //mov
	eax = edx; //mov
	return;
loc_481E9C:
	if (jbe())
		goto loc_481EF2;
	cmp(edx, (int32_t)0x60);
	if (jnz())
		goto loc_481DBB;
	edx = 0x5200; //mov
	eax = edx; //mov
	return;
loc_481EAF:
	if (jbe())
		goto loc_481ED2;
	cmp(edx, (int32_t)0x26);
	if (jb())
		goto loc_481EDA;
	if (ja())
		goto loc_481EE2;
	edx = 0x4800; //mov
	eax = edx; //mov
	return;
loc_481EC0:
	if (ja())
		goto loc_481ECA;
	edx = 0x5100; //mov
	eax = edx; //mov
	return;
loc_481ECA:
	edx = 0x4F00; //mov
	eax = edx; //mov
	return;
loc_481ED2:
	edx = 0x4700; //mov
	eax = edx; //mov
	return;
loc_481EDA:
	edx = 0x4B00; //mov
	eax = edx; //mov
	return;
loc_481EE2:
	edx = 0x4D00; //mov
	eax = edx; //mov
	return;
loc_481EEA:
	edx = 0x5000; //mov
	eax = edx; //mov
	return;
loc_481EF2:
	edx = 0x5300; //mov
	eax = edx; //mov
	return;
loc_481EFA:
	edx = 0x5A; //mov
	eax = edx; //mov
	return;
loc_481F02:
	edx = 0x58; //mov
	eax = edx; //mov
	return;
loc_481F0A:
	edx = 0x41; //mov
	eax = edx; //mov
	return;
loc_481F12:
	edx = 0x4C00; //mov
	eax = edx; //mov
	return;
loc_481F1A:
	edx = 0x44; //mov
	eax = edx; //mov
	return;
loc_481F22:
	edx = 0x57; //mov
	eax = edx; //mov
	return;
loc_481F2A:
	edx = 0x45; //mov
	eax = edx; //mov
	return;
loc_481F32:
	edx = 0x3D00; //mov
	eax = edx; //mov
	return;
loc_481F3A:
	edx = 0x3E00; //mov
	eax = edx; //mov
	return;
loc_481F42:
	edx = 0x3F00; //mov
	eax = edx; //mov
	return;
loc_481F4A:
	edx = 0x4100; //mov
	eax = edx; //mov
	return;
loc_481F52:
	edx = 0x4200; //mov
	eax = edx; //mov
	return;
loc_481F5A:
	edx = 0x4300; //mov
	eax = edx; //mov
	return;
loc_481F62:
	edx = 0x4400; //mov
	eax = edx; //mov
	return;
loc_481F6A:
	edx = 0x8700; //mov
	eax = edx; //mov
}
Fn(void) Game::_sub_482030()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = to32i(dword_5635C4); //mov
	eax = to32i(dword_5635C8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(ecx, ecx);
	esi = to32i(dword_5635C4); //mov
	edx = to32i(dword_5635CC); //mov
	xor_(ebx, ebx);
	cmp(esi, edx);
	if (jz())
		goto loc_4820AF;
loc_48205C:
	test(ecx, ecx);
	if (jnz())
		goto loc_4820AF;
	to32i(dword_5635C4) = esi; //mov
	eax = to32i(dword_563130+esi*4); //mov
	xor_(ebx, ebx);
	ecx = eax; //mov
	to32i(esp) = eax; //mov
	sar(ecx, (int32_t)0x10);
	bl = to8i(esp+1); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48208D;
	xor_(edx, edx);
	eax = ebx; //mov
	dl = to8i(esp); //mov
	esp -= 4; _sub_486D80(); esp += 4; //call
	ecx = eax; //mov
loc_48208D:
	esi = to32i(dword_5635C4); //mov
	edx = (int32_t)(intptr_t)(esi+1); //lea
	esi = to32i(dword_5635D0); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edi = to32i(dword_5635CC); //mov
	esi = edx; //mov
	cmp(edx, edi);
	if (jnz())
		goto loc_48205C;
loc_4820AF:
	eax = to32i(dword_5635C8); //mov
	to32i(dword_5635C4) = esi; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	shl(eax, (int32_t)0x10);
	esi = to32i(dword_5635C4); //mov
	or_(eax, ecx);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4820E0()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	eax = to32i(dword_5635C8); //mov
	edx = to32i(dword_5635CC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	to16i(dword_563130+2+edx*4) = si; //mov
	(dword_563130+1)[edx*4] = cl; //mov
	dword_563130[edx*4] = bl; //mov
	edx = to32i(dword_5635CC); //mov
	inc(edx);
	ecx = to32i(dword_5635D0); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	eax = to32i(dword_5635C4); //mov
	to32i(dword_5635CC) = edx; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_482143;
	edx = to32i(dword_5635C4); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_5635C4) = edx; //mov
loc_482143:
	eax = to32i(dword_5635C8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4821A0()
{
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_4821A0; //mov
	esp -= 4; _sub_483E64(); esp += 4; //call
	_ExitProcess0();
}
Fn(void) Game::_sub_4821D0()
{
	to32i(dword_5635D4) = eax; //mov
}
Fn(void) Game::_sub_4821E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = ebx; //mov
	xor_(ebx, ebx);
	ebp = to32i(dword_563D54); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_482261;
	push32(edx);
	push32(edi);
	push32(esi);
	push32(ebp);
	eax = PostMessageA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jnz())
		goto loc_482227;
	eax = GetLastError_wrap();
	ebx = eax; //mov
loc_482227:
	test(ebx, ebx);
	if (jz())
		goto loc_482247;
	eax = ebx; //mov
	and_(eax, (int32_t)0xFFFF);
loc_482247:
	test(ebx, ebx);
	if (jnz())
		goto loc_482261;
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_482261:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_482270()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	edi = to32i(esp+0x1C); //mov
	edx = to32i(dword_4DAB38); //mov
	xor_(esi, esi);
	test(edx, edx);
	if (jnz())
		goto loc_482290;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DAB38) = eax; //mov
loc_482290:
	ecx = 8; //mov
	eax = to32i(dword_4DAB38); //mov
	edx = (int32_t)(intptr_t)dword_5631B0; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	push32(sub_4823D0);
	ebx = to32i(dword_4DAB10); //mov
	to32i(esp+4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4A0796(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48230D;
	test(edi, edi);
	if (jnz())
		goto loc_482308;
	ecx = (int32_t)(intptr_t)sub_4823D0; //mov
	ebx = 8; //mov
	edx = to32i(dword_4DAB10); //mov
	to32i(eax) = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_5631B0; //mov
	esp -= 4; _sub_4A087C(); esp += 4; //call
	dec(to32i(dword_4DAB10));
loc_4822EE:
	esi = 1; //mov
loc_4822F3:
	eax = to32i(dword_4DAB38); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_482308:
	to32i(eax+4) = edi; //mov
	goto loc_4822EE;
loc_48230D:
	test(edi, edi);
	if (jz())
		goto loc_4822F3;
	ecx = to32i(dword_4DAB10); //mov
	cmp(ecx, (int32_t)0x80);
	if (jnb())
		goto loc_4822F3;
	edx = to32i(esp+0x18); //mov
	eax = (int32_t)(intptr_t)dword_5631B0; //mov
	ebx = (int32_t)(intptr_t)(ecx+1); //lea
	to32i(dword_5631B4+ecx*8) = edi; //mov
	to32i(dword_4DAB10) = ebx; //mov
	to32i(dword_5631B0+ecx*8) = edx; //mov
	ecx = (int32_t)(intptr_t)sub_4823D0; //mov
	edx = ebx; //mov
	ebx = 8; //mov
	esi = 1; //mov
	esp -= 4; _sub_4A087C(); esp += 4; //call
	goto loc_4822F3;
}
Fn(void) Game::_sub_482360()
{
	push32(ebx);
	push32(esi);
	sub(esp, (int32_t)8);
	edx = to32i(dword_4DAB38); //mov
	xor_(esi, esi);
	test(edx, edx);
	if (jnz())
		goto loc_48237B;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DAB38) = eax; //mov
loc_48237B:
	ecx = 8; //mov
	eax = to32i(dword_4DAB38); //mov
	edx = (int32_t)(intptr_t)dword_5631B0; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	push32(sub_4823D0);
	ebx = to32i(dword_4DAB10); //mov
	to32i(esp+4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4A0796(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4823B2;
	esi = to32i(eax+4); //mov
loc_4823B2:
	eax = to32i(dword_4DAB38); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ebx);
	esp += 4; return;
}
Fn(void) Game::_sub_4823D0()
{
	push32(ecx);
	ecx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	pop32(ecx);
}
Fn(void) Game::_sub_4823E0()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebx = edx; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_4823FE;
loc_4823F2:
	eax = esp; //mov
	call(to32i(dword_4DD788));
	test(eax, eax);
	if (jnz())
		goto loc_482406;
loc_4823FE:
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
	return;
loc_482406:
	esp -= 4; _sub_486724(); esp += 4; //call
	inc(edx);
	test(eax, eax);
	if (jz())
		goto loc_482418;
	eax = to32i(eax+5); //mov
	sar(eax, (int32_t)0x18);
	add(ecx, eax);
loc_482418:
	cmp(edx, ebx);
	if (jl())
		goto loc_4823F2;
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_482424()
{
	push32(edx);
	edx = 0x100; //mov
	esp -= 4; _sub_4823E0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_482474()
{
	push32(ecx);
	ecx = ebx; //mov
	push32(1);
	ebx = to32i(dword_4DAB84); //mov
	esp -= 4; _sub_492650(); esp += 4; //call
	eax = to32i(eax); //mov
	pop32(ecx);
}
Fn(void) Game::_unknown_libname_4()
{
	push32(edx);
	edx = 1; //mov
	eax = (int32_t)(intptr_t)dword_4DB278; //mov
	esp -= 4; _sub_4824CC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4824BC()
{
	push32(edx);
	edx = 1; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4824CC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4824CC()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ebp = 1; //mov
	goto loc_482522;
loc_4824F5:
	ebp = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_48255C;
	test(ebp, ebp);
	if (jnz())
		goto loc_482536;
	cmp(to32i(dword_4DABE4), (int32_t)0);
	if (jz())
		goto loc_48253D;
loc_482508:
	ecx = 0xE; //mov
	esi = to32i(dword_4DABE4); //mov
loc_482513:
	edi = (int32_t)(intptr_t)dword_4DB240; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_482522:
	esp -= 4; _sub_49AE1C(); esp += 4; //call
	goto loc_4824F5;
loc_482536:
	ecx = 0xE; //mov
	goto loc_482513;
loc_48253D:
	edx = 8; //mov
	ecx = to32i(dword_4DABE8); //mov
	ebx = to32i(dword_4DAB84); //mov
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(dword_4DABE4) = eax; //mov
	goto loc_482508;
loc_48255C:
	edx = 0x38; //mov
	eax = (int32_t)(intptr_t)dword_4DB240; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	al = to8i(byte_4DB294); //mov
	to8i(byte_4DB25C) = al; //mov
	al = to8i(byte_4DB295); //mov
	to8i(byte_4DB25D) = al; //mov
	al = to8i(byte_4DB296); //mov
	to8i(byte_4DB25E) = al; //mov
	eax = to32i(dword_4DB2A8); //mov
	to32i(dword_4DB270) = eax; //mov
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48259C()
{
	push32(edx);
	xor_(edx, edx);
	esp -= 4; _sub_4824CC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4825A8()
{
	push32(edx);
	edx = 1; //mov
	esp -= 4; _sub_4824CC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4825D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	eax = edx; //mov
	ecx = eax; //mov
	shr(ecx, (int32_t)0x10);
	and_(ecx, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)dword_570E60; //mov
	to32i(esp+4) = ecx; //mov
	ecx = eax; //mov
	ebx = 0x1869F; //mov
	shr(ecx, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	and_(ecx, (int32_t)0xFF);
	to32i(esp) = eax; //mov
	to32i(esp+8) = ecx; //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	to32i(esp+0xC) = ecx; //mov
loc_482612:
	add(edx, (int32_t)4);
	esi = (uint8_t)to8i(edx-2); //movzx
	edi = (uint8_t)to8i(edx-3); //movzx
	cl = (int32_t)(intptr_t)byte_4DAC64[eax]; //mov
	ebp = (uint8_t)to8i(edx-4); //movzx
	test(cl, cl);
	if (jz())
		goto loc_482656;
	ecx = to32i(esp+8); //mov
	sub(ecx, edi);
	edi = ecx; //mov
	imul32(edi, ecx);
	ecx = to32i(esp+4); //mov
	sub(ecx, esi);
	imul32(ecx, ecx);
	esi = (int32_t)(intptr_t)(edi+ecx); //lea
	ecx = to32i(esp); //mov
	sub(ecx, ebp);
	imul32(ecx, ecx);
	add(ecx, esi);
	cmp(ecx, ebx);
	if (jge())
		goto loc_482656;
	ebx = ecx; //mov
	to32i(esp+0xC) = eax; //mov
loc_482656:
	inc(eax);
	cmp(eax, (int32_t)0x100);
	if (jl())
		goto loc_482612;
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48266C()
{
	push32(ebx);
	push32(edx);
	ebx = eax; //mov
	ah = to8i(byte_4DB25C); //mov
	cmp(ah, (int8_t)8);
	if (jbe())
		goto loc_482697;
	cmp(ah, (int8_t)0xF);
	if (jz())
		goto loc_4826DE;
	cmp(ah, (int8_t)0x10);
	if (jz())
		goto loc_48270C;
	cmp(ah, (int8_t)0x18);
	if (jb())
		goto loc_482731;
	eax = ebx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_482697:
	push32(ecx);
	ecx = to32i(dword_4DAC60); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4826C9;
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF80000);
	shr(ebx, (int32_t)9);
	edx = eax; //mov
	shr(eax, (int32_t)3);
	and_(edx, (int32_t)0xF800);
	shr(edx, (int32_t)6);
	and_(eax, (int32_t)0x1F);
	add(eax, ebx);
	add(eax, edx);
	xor_(ebx, ebx);
	bl = to8i(ecx+eax); //mov
	goto loc_4826D8;
loc_4826C9:
	edx = ebx; //mov
	eax = (int32_t)(intptr_t)(dword_570E60); //lea
	esp -= 4; _sub_4825D0(); esp += 4; //call
	ebx = eax; //mov
loc_4826D8:
	pop32(ecx);
	eax = ebx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_4826DE:
	or_(ebx, ebx);
	if (jz())
		goto loc_482707;
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF80000);
	shr(ebx, (int32_t)9);
	edx = eax; //mov
	shr(eax, (int32_t)3);
	and_(edx, (int32_t)0xF800);
	shr(edx, (int32_t)6);
	and_(eax, (int32_t)0x1F);
	add(ebx, eax);
	ebx = (int32_t)(intptr_t)(ebx+edx+0x8000); //lea
loc_482707:
	eax = ebx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_48270C:
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF80000);
	shr(ebx, (int32_t)8);
	edx = eax; //mov
	shr(eax, (int32_t)3);
	and_(edx, (int32_t)0xFC00);
	shr(edx, (int32_t)5);
	and_(eax, (int32_t)0x1F);
	add(ebx, eax);
	add(ebx, edx);
	eax = ebx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_482731:
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_482740()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = to32i(dword_4DB258); //mov
	edx = to32i(dword_4DB250); //mov
	ebx = to32i(dword_4DB24C); //mov
	push32(eax);
	eax = to32i(dword_4DB254); //mov
	esi = ebx; //mov
	sub(eax, ebx);
	sub(ecx, edx);
	ebx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
