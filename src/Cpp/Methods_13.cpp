#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_ExitProcess0()
{
	push32(0);
	eax = ExitProcess_wrap(to32i(esp + 0));
}
Fn(void) Game::_ExitProcess1()
{
	push32(1);
	eax = ExitProcess_wrap(to32i(esp + 0));
}
Fn(void) Game::_sub_49ADB0()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	push32(edx);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_497A20(); esp += 4; //call
	to32i(dword_56F340) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49ADE3;
	edx = to32i(eax); //mov
	to32i(ebx+0x20) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(dword_56F344) = ebx; //mov
	to32i(ebx+0x28) = eax; //mov
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_49ADE3:
	to32i(dword_56F344) = eax; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49ADEC()
{
	cmp(to32i(dword_56F344), (int32_t)0);
	if (jz())
		goto loc_49B0BC;
	push32(edx);
	push32(ecx);
	push32(ebx);
	ecx = to32i(dword_56F340); //mov
	push32(ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_497A84(); esp += 4; //call
	to32i(dword_56F340) = ebx; //mov
	to32i(dword_56F344) = ebx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	return;
loc_49B0BC:
	push32(ecx);
	push32(edx);
	edx = to32i(dword_56F340); //mov
	push32(edx);
	esp -= 4; _sub_497A84(); esp += 4; //call
	xor_(ecx, ecx);
	eax = to32i(dword_4DB26C); //mov
	to32i(dword_56F340) = ecx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
	eax = to32i(dword_4DB270); //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_49AE1C()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	cmp(to32i(dword_56F340), (int32_t)0);
	if (jnz())
		goto loc_49AE5D;
loc_49AE2A:
	test(ebx, ebx);
	if (jz())
		goto loc_49AE54;
	ah = to8i(ebx+0x1E); //mov
	test(ah, ah);
	if (jz())
		goto loc_49AE4D;
	cmp(ah, (int8_t)0xFF);
	if (jnz())
		goto loc_49AE64;
loc_49AE4D:
	esi = to32i(ebx+0x34); //mov
	test(esi, esi);
	if (jnz())
		goto loc_49AE73;
loc_49AE54:
	eax = 1; //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_49AE5D:
	esp -= 4; _sub_49ADEC(); esp += 4; //call
	goto loc_49AE2A;
loc_49AE64:
	xor_(edx, edx);
	dl = ah; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49ADB0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_49AE73:
	eax = (int32_t)(intptr_t)dword_563900; //mov
	edx = esi; //mov
	esp -= 4; _sub_491C08(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_49AE90()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to32i(esp+0x14) = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	cmp(eax, (int32_t)0xFF);
	if (jz())
		goto loc_49AEB2;
	test(eax, eax);
	if (jnz())
		goto loc_49AEEF;
loc_49AEAA:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49AEB2:
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = edi; //mov
	esp -= 4; _sub_4921D0(); esp += 4; //call
	push32(edi);
	edi = to32i(esp+0x14); //mov
	ebp = to32i(esp+0xC); //mov
	push32(edi);
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0xC); //mov
	push32(ebp);
	edx = to32i(esp+0xC); //mov
	eax = esi; //mov
	esp -= 4; _sub_4AC810(); esp += 4; //call
	goto loc_49AEAA;
loc_49AEEF:
	push32(eax);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_497A20(); esp += 4; //call
	edx = to32i(eax); //mov
	to32i(ebx+0x20) = edx; //mov
	edx = to32i(eax+4); //mov
	push32(eax);
	to32i(ebx+0x28) = edx; //mov
	esp -= 4; _sub_497A84(); esp += 4; //call
	to32i(ebx) = 0x57494E44; //mov
	eax = to32i(dword_4DAB7C); //mov
	to32i(ebx+0xC) = 0; //mov
	to32i(ebx+4) = eax; //mov
	eax = to32i(dword_4DAB80); //mov
	to32i(ebx+8) = eax; //mov
	eax = to32i(dword_4DAB7C); //mov
	to32i(ebx+0x14) = eax; //mov
	eax = to32i(dword_4DAB80); //mov
	to32i(ebx+0x18) = eax; //mov
	al = to8i(dword_4DAB84); //mov
	to8i(ebx+0x1C) = al; //mov
	al = to8i(esp+0x14); //mov
	to8i(ebx+0x1E) = al; //mov
	eax = to32i(dword_4DAB84); //mov
	to32i(ebx+0x10) = 0; //mov
	esp -= 4; _sub_4ACB80(); esp += 4; //call
	to8i(ebx+0x1D) = al; //mov
	ecx = to32i(dword_4DAB80); //mov
	edx = to32i(ebx+0x28); //mov
	to32i(ebx+0x34) = edi; //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	esp -= 4; _sub_49B174(); esp += 4; //call
	ebx = 3; //mov
	ecx = to32i(dword_4DAB7C); //mov
	edx = to32i(dword_4DAB84); //mov
	to32i(esi+0x2C) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_49B174(); esp += 4; //call
	to32i(esi+0x30) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49AFA0()
{
	test(eax, eax);
	if (jnz())
		goto loc_49AFA9;
	eax = 0x280; //mov
loc_49AFA9:
	test(edx, edx);
	if (jnz())
		goto loc_49AFB2;
	edx = 0x1E0; //mov
loc_49AFB2:
	test(ebx, ebx);
	if (jnz())
		goto loc_49AFBB;
	ebx = 0x10; //mov
loc_49AFBB:
	to32i(dword_4DAB84) = ebx; //mov
	ebx = to32i(dword_4DAB94); //mov
	to32i(dword_4DAB7C) = eax; //mov
	sub(eax, ebx);
	to32i(dword_4DAB9C) = eax; //mov
	eax = to32i(dword_4DAB98); //mov
	to32i(dword_4DAB80) = edx; //mov
	sub(edx, eax);
	to32i(dword_4DABA0) = edx; //mov
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jz())
	{
		_sub_49B0F0();
		return;
	}
}
Fn(void) Game::_sub_49B0F0()
{
	push32(ebx);
	push32(edx);
	cmp(to32i(dword_4DD314), (int32_t)0);
	if (jz())
		goto loc_49B127;
loc_49B0FB:
	edx = to32i(dword_4DD310); //mov
	eax = to32i(dword_4DD314); //mov
	shl(edx, (int32_t)2);
	ebx = (int32_t)(intptr_t)(eax+edx); //lea
	edx = to32i(dword_4DD310); //mov
	to32i(eax+4) = 0; //mov
	sub(edx, (int32_t)2);
	to32i(dword_56F348) = ebx; //mov
	to32i(eax) = edx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_49B127:
	eax = (int32_t)(intptr_t)aRowtbl; //mov
	edx = to32i(dword_4DD310); //mov
	ebx = to32i(dword_4DABE8); //mov
	shl(edx, (int32_t)2);
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4DD314) = eax; //mov
	goto loc_49B0FB;
}
Fn(void) Game::_sub_49B174()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	to32i(esp+4) = ebx; //mov
	edi = ecx; //mov
	eax = to32i(dword_4DD314); //mov
	edx = to32i(dword_56F348); //mov
	xor_(ebx, ebx);
	cmp(eax, edx);
	if (jnb())
		goto loc_49B1CB;
	cl = to8i(esp+4); //mov
	edx = to32i(esp); //mov
	sar(edx, cl);
	add(edx, esi);
loc_49B1A1:
	ecx = to32i(eax); //mov
	cmp(ecx, edi);
	if (jl())
		goto loc_49B1BB;
	cmp(to32i(eax+4), (int32_t)0);
	if (jbe())
		goto loc_49B225;
	cmp(esi, to32i(eax+8));
	if (jnz())
		goto loc_49B1BB;
	cmp(edx, to32i(eax+0xC));
	if (jz())
		goto loc_49B219;
loc_49B1BB:
	shl(ecx, (int32_t)2);
	add(ecx, (int32_t)8);
	add(eax, ecx);
	cmp(eax, to32i(dword_56F348));
	if (jb())
		goto loc_49B1A1;
loc_49B1CB:
	test(ebx, ebx);
	if (jz())
		goto loc_49B242;
	edx = (int32_t)(intptr_t)(edi+8); //lea
	eax = to32i(ebx); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_49B22D;
	edi = eax; //mov
loc_49B1DE:
	add(ebx, (int32_t)4);
	to32i(ebx-4) = edi; //mov
	xor_(eax, eax);
	to32i(ebx) = 1; //mov
	add(ebx, (int32_t)4);
	test(edi, edi);
	if (jle())
		goto loc_49B210;
	edx = ebx; //mov
loc_49B1F5:
	cl = to8i(esp+4); //mov
	ebp = esi; //mov
	add(edx, (int32_t)4);
	inc(eax);
	sar(ebp, cl);
	ecx = to32i(esp); //mov
	to32i(edx-4) = ebp; //mov
	add(esi, ecx);
	cmp(eax, edi);
	if (jl())
		goto loc_49B1F5;
loc_49B210:
	eax = ebx; //mov
loc_49B212:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_49B219:
	edx = to32i(eax+4); //mov
	add(eax, (int32_t)8);
	inc(edx);
	to32i(eax-4) = edx; //mov
	goto loc_49B212;
loc_49B225:
	test(ebx, ebx);
	if (jnz())
		goto loc_49B1BB;
	ebx = eax; //mov
	goto loc_49B1BB;
loc_49B22D:
	edx = eax; //mov
	sub(edx, edi);
	to32i(ebx+edi*4+0xC) = 0; //mov
	sub(edx, (int32_t)2);
	to32i(ebx+edi*4+8) = edx; //mov
	goto loc_49B1DE;
loc_49B242:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_49B24C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	ecx = (int32_t)(intptr_t)(eax-8); //lea
	edx = to32i(ecx+4); //mov
	dec(edx);
	to32i(ecx+4) = edx; //mov
	test(edx, edx);
	if (jbe())
		goto loc_49B267;
loc_49B261:
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49B267:
	eax = to32i(dword_4DD314); //mov
	xor_(ebx, ebx);
	cmp(eax, ecx);
	if (jnb())
		goto loc_49B284;
loc_49B272:
	edx = to32i(eax); //mov
	add(edx, (int32_t)2);
	shl(edx, (int32_t)2);
	ebx = eax; //mov
	add(eax, edx);
	cmp(eax, ecx);
	if (jb())
		goto loc_49B272;
loc_49B284:
	edx = to32i(eax); //mov
	add(edx, (int32_t)2);
	shl(edx, (int32_t)2);
	esi = to32i(dword_56F348); //mov
	add(edx, eax);
	cmp(edx, esi);
	if (jnb())
		goto loc_49B29E;
	cmp(to32i(edx+4), (int32_t)0);
	if (jbe())
		goto loc_49B2B9;
loc_49B29E:
	test(ebx, ebx);
	if (jz())
		goto loc_49B261;
	cmp(to32i(ebx+4), (int32_t)0);
	if (ja())
		goto loc_49B261;
	eax = to32i(eax); //mov
	ecx = to32i(ebx); //mov
	add(eax, (int32_t)2);
	add(ecx, eax);
	to32i(ebx) = ecx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49B2B9:
	edx = to32i(edx); //mov
	ebp = to32i(eax); //mov
	add(edx, (int32_t)2);
	add(ebp, edx);
	to32i(eax) = ebp; //mov
	goto loc_49B29E;
}
Fn(void) Game::_sub_49B2E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	dl = to8i(byte_4DB25C); //mov
	cmp(dl, (int8_t)0xF);
	if (jb())
		goto loc_49B37A;
	if (ja())
		goto loc_49B32B;
	test(ah, (int8_t)0x80);
	if (jz())
		goto loc_49B372;
	edx = 0xFF; //mov
loc_49B302:
	ebx = eax; //mov
	ecx = eax; //mov
	shl(edx, (int32_t)0x18);
	sar(ebx, (int32_t)0xA);
	sar(ecx, (int32_t)5);
	and_(eax, (int32_t)0x1F);
	and_(ebx, (int32_t)0x1F);
	and_(ecx, (int32_t)0x1F);
	shl(ebx, (int32_t)0x13);
	shl(ecx, (int32_t)0xB);
	or_(edx, ebx);
	shl(eax, (int32_t)3);
	or_(edx, ecx);
	or_(eax, edx);
loc_49B327:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49B32B:
	cmp(dl, (int8_t)0x18);
	if (jnb())
		goto loc_49B367;
	cmp(dl, (int8_t)0x10);
	if (jnz())
		goto loc_49B37A;
	test(eax, eax);
	if (jz())
		goto loc_49B376;
	edx = 0xFF; //mov
loc_49B33E:
	ecx = eax; //mov
	ebx = eax; //mov
	shl(edx, (int32_t)0x18);
	sar(ecx, (int32_t)0xB);
	sar(ebx, (int32_t)5);
	and_(eax, (int32_t)0x1F);
	and_(ecx, (int32_t)0x1F);
	and_(ebx, (int32_t)0x3F);
	shl(ecx, (int32_t)0x13);
	shl(ebx, (int32_t)0xA);
	or_(edx, ecx);
	shl(eax, (int32_t)3);
	or_(edx, ebx);
	or_(eax, edx);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49B367:
	if (jbe())
		goto loc_49B327;
	cmp(dl, (int8_t)0x20);
	if (jnz())
		goto loc_49B37A;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49B372:
	xor_(edx, edx);
	goto loc_49B302;
loc_49B376:
	xor_(edx, edx);
	goto loc_49B33E;
loc_49B37A:
	eax = to32i(dword_570E60+eax*4); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49C110()
{
	push32(edx);
	edx = to32i(dword_4DD394); //mov
	test(edx, edx);
	if (jnz())
		goto loc_49C14D;
	push32(ecx);
	push32(ebx);
	ecx = 4; //mov
	to32i(dword_56FD80) = edx; //mov
loc_49C128:
	edx = 1; //mov
	ebx = ecx; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	div32(ebx);
	inc(eax);
	to32i(dword_56FD7C+ecx) = eax; //mov
	cmp(ecx, (int32_t)0x1000);
	if (jnz())
		goto loc_49C128;
	inc(to32i(dword_4DD394));
	pop32(ebx);
	pop32(ecx);
loc_49C14D:
	pop32(edx);
}
Fn(void) Game::_sub_49C150()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	and_(esi, (int32_t)0x3F);
	imul32(esi, 0x6487E);
	sar(eax, (int32_t)6);
	ebx = eax; //mov
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
	edi = eax; //mov
	eax = ebx; //mov
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
	sar(eax, (int32_t)2);
	sar(esi, (int32_t)9);
	imul32(eax, esi);
	sar(eax, (int32_t)0x15);
	add(eax, edi);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49C1C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	and_(esi, (int32_t)0x3F);
	imul32(esi, 0x6487E);
	sar(eax, (int32_t)6);
	ebx = eax; //mov
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
	edi = eax; //mov
	eax = ebx; //mov
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
	neg(eax);
	sar(eax, (int32_t)2);
	sar(esi, (int32_t)9);
	imul32(eax, esi);
	sar(eax, (int32_t)0x15);
	add(eax, edi);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49C264()
{
	sub(esp, (int32_t)4);
	fld(to32f(eax));
	fmul_st(0, 0);
	fld(to32f(eax+4));
	fmul_st(0, 0);
	faddp_st(1, 0);
	fld(to32f(eax+8));
	fmul_st(0, 0);
	faddp_st(1, 0);
	fsqrt();
	add(esp, (int32_t)4);
}
Fn(void) Game::_sub_49C2C4()
{
	push32(eax);
	fld(to32f(esp+8));
	fmul(to64f(dbl_4D0D94));
	fcos();
	pop32(eax);
	esp += 4; return;
}
Fn(void) Game::_sub_49C46C()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = ebx; //mov
	eax = edx; //mov
	test(esi, esi);
	if (jle())
		goto loc_49C4D4;
loc_49C478:
	ebx = ecx; //mov
	edx = edi; //mov
	fld(to32f(eax));
	fmul(to32f(edx));
	fld(to32f(eax));
	fmul(to32f(edx+4));
	fld(to32f(eax));
	fmul(to32f(edx+8));
	fxch_st(2);
	fld(to32f(eax+4));
	fmul(to32f(edx+0xC));
	fld(to32f(eax+4));
	fmul(to32f(edx+0x10));
	fld(to32f(eax+4));
	fmul(to32f(edx+0x14));
	fxch_st(2);
	faddp_st(3, 0);
	faddp_st(3, 0);
	faddp_st(3, 0);
	fld(to32f(eax+8));
	fmul(to32f(edx+0x18));
	fld(to32f(eax+8));
	fmul(to32f(edx+0x1C));
	fld(to32f(eax+8));
	fmul(to32f(edx+0x20));
	fxch_st(2);
	faddp_st(3, 0);
	faddp_st(3, 0);
	faddp_st(3, 0);
	eax = (int32_t)(intptr_t)(eax+0xC); //lea
	fstp(to32f(ebx));
	fstp(to32f(ebx+4));
	fstp(to32f(ebx+8));
	add(ecx, (int32_t)0xC);
	dec(esi);
	if (jnz())
		goto loc_49C478;
loc_49C4D4:
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_49C580()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	esi = edx; //mov
	esp -= 4; _sub_4A4618(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49C5C1;
	eax = 0x190; //mov
	ecx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4A5124(); esp += 4; //call
	push32(ebx);
	eax = edi; //mov
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_487668(); esp += 4; //call
	edx = to32i(esp); //mov
	test(edx, edx);
	if (jnz())
		goto loc_49C5DA;
	xor_(eax, eax);
loc_49C5BA:
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49C5C1:
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = ecx; //mov
	goto loc_49C5BA;
loc_49C5DA:
	ecx = 0x1C2; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(eax, (int32_t)0x190);
	esp -= 4; _sub_4A5124(); esp += 4; //call
	edx = esi; //mov
	ebx = to32i(esp); //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(dword_4DABEC) = eax; //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49C618()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_49C580(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_49C628()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_49C580(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_49C890()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = to32i(dword_4DD3A8); //mov
	ecx = eax; //mov
	cmp(to32i(dword_4DD3AC), (int32_t)0);
	if (jz())
		goto loc_49C911;
loc_49C8AB:
	edi = to32i(dword_4DD3AC); //mov
	esi = to32i(dword_4DD3A8); //mov
	cmp(edx, edi);
	if (jle())
		goto loc_49C8BD;
	edx = edi; //mov
loc_49C8BD:
	cmp(edx, esi);
	if (jl())
		goto loc_49C904;
	ebx = (int32_t)(intptr_t)(ecx+esi); //lea
	eax = (int32_t)(intptr_t)(esi-1); //lea
	edi = eax; //mov
	dec(ebx);
	edi = ~edi;
	and_(ebx, edi);
	edi = ebx; //mov
	sub(edi, ecx);
	sub(edx, edi);
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	xor_(edi, edi);
	to32i(esp) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_49C904;
loc_49C8E6:
	edx = ebx; //mov
	xor_(eax, eax);
	cmp(ebx, ecx);
	if (jb())
		goto loc_49C8FA;
loc_49C8EE:
	inc(eax);
	sub(edx, esi);
	cmp(eax, (int32_t)0x20);
	if (jge())
		goto loc_49C8FA;
	cmp(edx, ecx);
	if (jnb())
		goto loc_49C8EE;
loc_49C8FA:
	eax = to32i(esp); //mov
	inc(edi);
	add(ebx, esi);
	cmp(edi, eax);
	if (jl())
		goto loc_49C8E6;
loc_49C904:
	to32i(dword_4DD3A8) = esi; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49C911:
	esp -= 4; _sub_4A47D4(); esp += 4; //call
	to32i(dword_4DD3AC) = eax; //mov
	goto loc_49C8AB;
}
Fn(void) Game::_sub_49C948()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	edi = eax; //mov
	esi = edx; //mov
	esp -= 4; _sub_4A40A0(); esp += 4; //call
	to32i(dword_563F00) = eax; //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	cmp(to32i(dword_4DD3A8), (int32_t)0);
	if (jz())
		goto loc_49CA4A;
loc_49C96F:
	esp -= 4; _sub_4A47B0(); esp += 4; //call
	sub(eax, ebx);
	and_(al, (int8_t)0xF0);
	to32i(esp+0x24) = eax; //mov
	test(esi, esi);
	if (jnz())
		goto loc_49CA62;
loc_49C984:
	xor_(ebx, ebx);
	to32i(dword_4DB1F8) = ebx; //mov
	xor_(ecx, ecx);
loc_49C98E:
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_49CAD4(); esp += 4; //call
	to32i(dword_4DB1F8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49C9BA;
	esi = to32i(esp+0x24); //mov
	cmp(esi, (int32_t)0x80000);
	if (jl())
		goto loc_49CA42;
	ebp = (int32_t)(intptr_t)(esi-0x80000); //lea
	to32i(esp+0x24) = ebp; //mov
loc_49C9BA:
	eax = to32i(dword_4DB1F8); //mov
	cmp(ecx, eax);
	if (jz())
		goto loc_49C98E;
	esi = eax; //mov
	eax = to32i(esp+0x24); //mov
	ebp = (int32_t)(intptr_t)(edi*4+0); //lea
	add(eax, esi);
	edx = edi; //mov
	to32i(dword_4DB1F4) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_484D40(); esp += 4; //call
	push32(0);
	add(ebp, edi);
	push32(0);
	shl(ebp, (int32_t)3);
	eax = (int32_t)(intptr_t)aMb_ram; //mov
	push32(0x10);
	ecx = to32i(dword_4DB1F4); //mov
	ebx = to32i(dword_4DB1F8); //mov
	push32(0x10);
	xor_(edx, edx);
	add(ebx, ebp);
	esp -= 4; _sub_48438C(); esp += 4; //call
	push32(0);
	push32(0);
	push32(0x1000);
	edx = 0x300; //mov
	eax = (int32_t)(intptr_t)aMb_vmm; //mov
	push32(0x1000);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_48438C(); esp += 4; //call
	ecx = to32i(dword_4DB1F4); //mov
	edx = to32i(dword_4DB1F8); //mov
	eax = to32i(dword_563F00); //mov
	sub(ecx, edx);
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	eax = ecx; //mov
loc_49CA42:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49CA4A:
	eax = esp; //mov
	push32(eax);
	eax = GetSystemInfo_wrap(to32i(esp)); esp += 4;
	eax = to32i(esp+4); //mov
	to32i(dword_4DD3A8) = eax; //mov
	goto loc_49C96F;
loc_49CA62:
	cmp(esi, eax);
	if (jge())
		goto loc_49C984;
	and_(si, (int16_t)0xFFF0);
	to32i(esp+0x24) = esi; //mov
	goto loc_49C984;
}
Fn(void) Game::_sub_49CABC()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_49C948(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_49CAD4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x24);
	ebx = eax; //mov
	edx = to32i(dword_4DD3A8); //mov
	xor_(esi, esi);
	test(edx, edx);
	if (jz())
		goto loc_49CB21;
loc_49CAEC:
	ecx = to32i(dword_4DD3A8); //mov
	edx = to32i(ebx); //mov
	add(edx, ecx);
	dec(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(eax, ecx);
	to32i(ebx) = eax; //mov
	add(eax, esi);
	push32(1);
	push32(eax);
	eax = calloc_wrap(to32i(esp + 0), to32i(esp + 4));
	add(esp, (int32_t)8);
	add(esp, (int32_t)0x24);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49CB21:
	eax = esp; //mov
	push32(eax);
	eax = GetSystemInfo_wrap(to32i(esp)); esp += 4;
	eax = to32i(esp+4); //mov
	to32i(dword_4DD3A8) = eax; //mov
	goto loc_49CAEC;
}
Fn(void) Game::_sub_49D020()
{
	push32(ebx);
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_489A88(); esp += 4; //call
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jnz())
		goto loc_49D051;
	ebx = to32i(dword_4DAB84); //mov
	edx = to32i(dword_4DAB80); //mov
	eax = to32i(dword_4DAB7C); //mov
	esp -= 4; _sub_428C60(); esp += 4; //call
loc_49D051:
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jnz())
		goto loc_49D069;
	pop32(edx);
	pop32(ebx);
	return;
loc_49D069:
	ebx = (int32_t)(intptr_t)dword_4DF07C; //mov
	edx = 0x100; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4A02E8(); esp += 4; //call
	eax = to32i(dword_4DABCC); //mov
	esp -= 4; _sub_483C18(); esp += 4; //call
	esp -= 4; _sub_4879D0(); esp += 4; //call
	esp -= 4; _sub_4B09C0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4DF380; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = eax; //mov
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_486560(); esp += 4; //call
	cmp(to32i(dword_4DAB60), (int32_t)0);
	if (jnz())
		goto loc_49D0C6;
	esp -= 4; _sub_423080(); esp += 4; //call
loc_49D0C6:
	push32(ecx);
	esp -= 4; _sub_486EE8(); esp += 4; //call
	esp -= 4; _sub_4B0A20(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_4A1080; //mov
	esp -= 4; _sub_4A1080(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_486E44; //mov
	edx = 0x14; //mov
	esp -= 4; _sub_486E54(); esp += 4; //call
	esp -= 4; _fn_init(); esp += 4; //call
	esp -= 4; _sub_4B0BCC(); esp += 4; //call
	eax = 0x1E; //mov
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	esp -= 4; _sub_4A0704(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_4A05A0(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_49D180()
{
	cmp(to8i(eax+1), (int8_t)0x3A);
	if (jz())
		goto loc_49D18C;
	eax = 0xFFFFFFFF; //mov
	return;
loc_49D18C:
	push32(edx);
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)(eax-0x61); //lea
	cmp(edx, (int32_t)0x1A);
	sbb(edx, edx);
	and_(edx, (int32_t)0x20);
	sub(eax, edx);
	sub(eax, (int32_t)0x41);
	pop32(edx);
}
Fn(void) Game::_strstr_()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebx = edx; //mov
	cmp(to8i(edx), (int8_t)0);
	if (jnz())
		goto loc_49D219;
loc_49D212:
	eax = esi; //mov
	goto loc_49D2B6;
loc_49D219:
	cmp(to8i(edx+1), (int8_t)0);
	if (jnz())
		goto loc_49D23B;
	dl = to8i(ebx); //mov
loc_49D221:
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_49D239;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49D237;
	inc(esi);
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_49D239;
	inc(esi);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_49D221;
loc_49D237:
	sub(esi, esi);
loc_49D239:
	goto loc_49D212;
loc_49D23B:
	ecx = 0xFFFFFFFF; //mov
	edi = esi; //mov
	xor_(al, al);
	push16(es);
	if (!ecx) //jecxz
		goto loc_49D250;
	edx = ds; //mov
	es = dx; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	if (jnz())
		goto loc_49D250;
	dec(edi);
	goto loc_49D252;
loc_49D250:
	edi = ecx; //mov
loc_49D252:
	pop16(es);
	to32i(esp) = edi; //mov
	edi = ebx; //mov
	push16(es);
	eax = ds; //mov
	es = ax; //mov
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
	pop16(es);
	ebp = ecx; //mov
loc_49D26C:
	ecx = to32i(esp); //mov
	sub(ecx, esi);
	cmp(ecx, ebp);
	if (jb())
		goto loc_49D2B4;
	edi = esi; //mov
	al = to8i(ebx); //mov
	push16(es);
	if (!ecx) //jecxz
		goto loc_49D285;
	edx = ds; //mov
	es = dx; //mov
	while (ecx) //repne
	{
		scasb();
		--ecx;
		if (flags.zf)
			break;
	};
	if (jnz())
		goto loc_49D285;
	dec(edi);
	goto loc_49D287;
loc_49D285:
	edi = ecx; //mov
loc_49D287:
	pop16(es);
	edx = edi; //mov
	test(edi, edi);
	if (jz())
		goto loc_49D2B4;
	ecx = ebp; //mov
	edi = ebx; //mov
	esi = edx; //mov
	push16(es);
	eax = ds; //mov
	es = ax; //mov
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_49D2A6;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_49D2A6:
	pop16(es);
	test(eax, eax);
	if (jnz())
		goto loc_49D2AF;
	eax = edx; //mov
	goto loc_49D2B6;
loc_49D2AF:
	esi = (int32_t)(intptr_t)(edx+1); //lea
	goto loc_49D26C;
loc_49D2B4:
	xor_(eax, eax);
loc_49D2B6:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49D2C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	edx = esp; //mov
	sar(eax, (int32_t)6);
	and_(ecx, (int32_t)0x3F);
	esp -= 4; _sub_49EA20(); esp += 4; //call
	imul32(eax, ecx, 0x6487E);
	ecx = to32i(esp+4); //mov
	sar(eax, (int32_t)9);
	sar(ecx, (int32_t)2);
	imul32(ecx, eax);
	edx = to32i(esp); //mov
	sar(ecx, (int32_t)0x15);
	add(edx, ecx);
	to32i(edi) = edx; //mov
	edx = to32i(esp); //mov
	ecx = eax; //mov
	sar(edx, (int32_t)2);
	imul32(ecx, edx);
	eax = to32i(esp+4); //mov
	sar(ecx, (int32_t)0x15);
	sub(eax, ecx);
	to32i(esi) = eax; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49D320()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	xor_(edx, edx);
	test(eax, eax);
	if (jnz())
		goto loc_49D32F;
loc_49D32A:
	eax = edx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D32F:
	ecx = 2; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0xC0FB);
	if (jnz())
		goto loc_49D354;
	edx = 1; //mov
	eax = edx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D354:
	ecx = 4; //mov
	eax = ebx; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0x42494746);
	if (jnz())
		goto loc_49D32A;
	edx = 2; //mov
	eax = edx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49D37C()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_49D320(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jb())
		goto loc_49D390;
	if (jbe())
		goto loc_49D394;
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_49D3B0;
loc_49D390:
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_49D394:
	eax = (int32_t)(intptr_t)(ecx+2); //lea
	ecx = 2; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	add(eax, (int32_t)4);
	pop32(ecx);
	return;
loc_49D3B0:
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	ecx = 4; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	pop32(ecx);
}
Fn(void) Game::_sub_49D3CC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	ebp = edx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp) = ecx; //mov
	ecx = to32i(esp+0x24); //mov
	xor_(edx, edx);
	to32i(esp+0xC) = edx; //mov
	edx = ecx; //mov
	ebx = edi; //mov
	esp -= 4; _sub_49D37C(); esp += 4; //call
	edx = ecx; //mov
	add(ebx, eax);
	eax = edi; //mov
	to32i(esp+8) = ebx; //mov
	esp -= 4; _sub_49D320(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jnb())
		goto loc_49D42B;
loc_49D404:
	edi = to32i(esp); //mov
	test(edi, edi);
	if (jz())
		goto loc_49D411;
	to32i(edi) = 0; //mov
loc_49D411:
	ebp = to32i(esp+0x20); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_49D420;
	to32i(ebp+0) = 0; //mov
loc_49D420:
	xor_(eax, eax);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_49D42B:
	if (ja())
		goto loc_49D4A8;
	esi = to32i(esp+8); //mov
	ebx = (int32_t)(intptr_t)(edi+6); //lea
	cmp(ebx, esi);
	if (jnb())
		goto loc_49D404;
loc_49D43C:
	test(ebp, ebp);
	if (jnz())
		goto loc_49D524;
loc_49D444:
	test(ebp, ebp);
	if (jnz())
		goto loc_49D5A4;
	eax = to32i(esp+0xC); //mov
	cmp(eax, to32i(esp+4));
	if (jnz())
		goto loc_49D5A4;
loc_49D45A:
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_49D47B;
	ecx = 3; //mov
	eax = ebx; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = to32i(esp); //mov
	to32i(ecx) = eax; //mov
loc_49D47B:
	esi = to32i(esp+0x20); //mov
	test(esi, esi);
	if (jz())
		goto loc_49D49C;
	ecx = 3; //mov
	eax = (int32_t)(intptr_t)(ebx+3); //lea
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi) = eax; //mov
loc_49D49C:
	eax = (int32_t)(intptr_t)(ebx+6); //lea
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_49D4A8:
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_49D404;
	ecx = to32i(esp+8); //mov
	ebx = (int32_t)(intptr_t)(edi+0x10); //lea
	cmp(ebx, ecx);
	if (jnb())
		goto loc_49D404;
loc_49D4C0:
	test(ebp, ebp);
	if (jnz())
		goto loc_49D5E6;
	eax = to32i(esp+0xC); //mov
	cmp(eax, to32i(esp+4));
	if (jnz())
		goto loc_49D5E6;
loc_49D4D6:
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_49D4F7;
	ecx = 4; //mov
	eax = ebx; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = to32i(esp); //mov
	to32i(ecx) = eax; //mov
loc_49D4F7:
	esi = to32i(esp+0x20); //mov
	test(esi, esi);
	if (jz())
		goto loc_49D518;
	ecx = 4; //mov
	eax = (int32_t)(intptr_t)(ebx+4); //lea
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi) = eax; //mov
loc_49D518:
	eax = (int32_t)(intptr_t)(ebx+8); //lea
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_49D524:
	edx = to32i(esp+8); //mov
	esi = ebp; //mov
	edi = ebx; //mov
	esi = to32i(esi); //mov
	or_(esi, (int32_t)0x20202020);
loc_49D534:
	cmp(edi, edx);
	if (jge())
		goto loc_49D59D;
	eax = to32i(edi+6); //mov
	or_(eax, (int32_t)0x20202020);
	cmp(eax, esi);
	if (jz())
		goto loc_49D59D;
	eax = to32i(edi+0xA); //mov
	edi = (int32_t)(intptr_t)(edi+0xE); //lea
	sub(eax, (int32_t)0x1010101);
	and_(eax, (int32_t)0x80808080);
	if (jnz())
		goto loc_49D578;
	eax = to32i(edi); //mov
	edi = (int32_t)(intptr_t)(edi+4); //lea
	sub(eax, (int32_t)0x1010101);
	and_(eax, (int32_t)0x80808080);
	if (jnz())
		goto loc_49D578;
loc_49D567:
	eax = to32i(edi); //mov
	edi = (int32_t)(intptr_t)(edi+4); //lea
	sub(eax, (int32_t)0x1010101);
	and_(eax, (int32_t)0x80808080);
	if (jz())
		goto loc_49D567;
loc_49D578:
	al = to8i(edi-4); //mov
	edi = (int32_t)(intptr_t)(edi-3); //lea
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49D534;
	al = to8i(edi); //mov
	edi = (int32_t)(intptr_t)(edi+1); //lea
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49D534;
	al = to8i(edi); //mov
	edi = (int32_t)(intptr_t)(edi+1); //lea
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49D534;
	al = to8i(edi); //mov
	edi = (int32_t)(intptr_t)(edi+1); //lea
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49D534;
loc_49D59D:
	ebx = edi; //mov
	goto loc_49D444;
loc_49D5A4:
	test(ebp, ebp);
	if (jz())
		goto loc_49D5BA;
	eax = (int32_t)(intptr_t)(ebx+6); //lea
	edx = ebp; //mov
	esp -= 4; _stricmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49D45A;
loc_49D5BA:
	edi = (int32_t)(intptr_t)(ebx+6); //lea
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
	edi = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	add(ebx, ecx);
	inc(edi);
	add(ebx, (int32_t)7);
	to32i(esp+0xC) = edi; //mov
	cmp(ebx, eax);
	if (jb())
		goto loc_49D43C;
	goto loc_49D404;
loc_49D5E6:
	test(ebp, ebp);
	if (jz())
		goto loc_49D5FC;
	eax = (int32_t)(intptr_t)(ebx+8); //lea
	edx = ebp; //mov
	esp -= 4; _stricmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49D4D6;
loc_49D5FC:
	edi = (int32_t)(intptr_t)(ebx+8); //lea
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
	edi = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	add(ebx, ecx);
	inc(edi);
	add(ebx, (int32_t)9);
	to32i(esp+0xC) = edi; //mov
	cmp(ebx, eax);
	if (jb())
		goto loc_49D4C0;
	goto loc_49D404;
}
Fn(void) Game::_sub_49D628()
{
	push32(ecx);
	sub(esp, (int32_t)4);
	push32(ebx);
	push32(dword_570D88);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ebx, ebx);
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(ecx);
}
Fn(void) Game::_sub_49D664()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esp -= 4; _sub_49D628(); esp += 4; //call
	xor_(esi, esi);
	test(eax, eax);
	if (jz())
		goto loc_49D676;
	esi = (int32_t)(intptr_t)(ecx+eax); //lea
loc_49D676:
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49D67C()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_49D664(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_49D76C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	push32(0);
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(dword_570D88);
	ebx = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49D791;
	eax = to32i(esp); //mov
	add(eax, esi);
loc_49D791:
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49D7E0()
{
	static const void *const off_49D829[] = {
		&&loc_49D850,
		&&loc_49D849,
		&&loc_49D853,
		&&loc_49D85D,
		&&loc_49D865,
		&&loc_49D86A,
		&&loc_49D872,
		&&loc_49D87A,
	};
	push32(ebx);
	push32(ecx);
	xor_(ebx, ebx);
	ecx = edx; //mov
	edx = eax; //mov
	or_(ecx, ecx);
	if (jge())
		goto loc_49D7F1;
	or_(ebx, (int32_t)8);
	neg(ecx);
loc_49D7F1:
	or_(edx, edx);
	if (jge())
		goto loc_49D7FA;
	or_(ebx, (int32_t)0x10);
	neg(edx);
loc_49D7FA:
	cmp(edx, ecx);
	if (jl())
		goto loc_49D805;
	if (jz())
		goto loc_49D81D;
	swap(edx, ecx);
	or_(ebx, (int32_t)4);
loc_49D805:
	xor_(eax, eax);
	div32(ecx);
	shr(eax, (int32_t)0x18);
	adc(eax, (int32_t)0);
	eax = (uint8_t)byte_4DFC78[eax]; //movzx
	goto *off_49D829[ebx/4];
loc_49D81D:
	eax = 0x80; //mov
	goto *off_49D829[ebx/4];
loc_49D849:
	neg(eax);
	add(eax, (int32_t)0x100);
loc_49D850:
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D853:
	neg(eax);
	add(eax, (int32_t)0x200);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D85D:
	add(eax, (int32_t)0x100);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D865:
	neg(eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D86A:
	sub(eax, (int32_t)0x100);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D872:
	sub(eax, (int32_t)0x200);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49D87A:
	neg(eax);
	sub(eax, (int32_t)0x100);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49D890()
{
	push32(ecx);
	cmp(eax, edx);
	if (jnz())
		goto loc_49D8BB;
	ecx = to32i(eax+4); //mov
	edx = to32i(edx+0xC); //mov
	to32i(eax+0xC) = ecx; //mov
	to32i(eax+4) = edx; //mov
	ecx = to32i(eax+8); //mov
	edx = to32i(eax+0x18); //mov
	to32i(eax+0x18) = ecx; //mov
	to32i(eax+8) = edx; //mov
	ecx = to32i(eax+0x14); //mov
	edx = to32i(eax+0x1C); //mov
	to32i(eax+0x1C) = ecx; //mov
	to32i(eax+0x14) = edx; //mov
	pop32(ecx);
	return;
loc_49D8BB:
	ecx = to32i(eax); //mov
	to32i(edx) = ecx; //mov
	ecx = to32i(eax+0xC); //mov
	to32i(edx+4) = ecx; //mov
	ecx = to32i(eax+0x18); //mov
	to32i(edx+8) = ecx; //mov
	ecx = to32i(eax+4); //mov
	to32i(edx+0xC) = ecx; //mov
	ecx = to32i(eax+0x10); //mov
	to32i(edx+0x10) = ecx; //mov
	ecx = to32i(eax+0x1C); //mov
	to32i(edx+0x14) = ecx; //mov
	ecx = to32i(eax+8); //mov
	to32i(edx+0x18) = ecx; //mov
	ecx = to32i(eax+0x14); //mov
	to32i(edx+0x1C) = ecx; //mov
	eax = to32i(eax+0x20); //mov
	to32i(edx+0x20) = eax; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_49D984()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_49D990(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_49D990()
{
	esp -= 4; _sub_49D9B8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_49D99B;
	eax = to32i(eax); //mov
locret_49D99B:
	return;
}
Fn(void) Game::_sub_49D9B8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	edi = ebx; //mov
	xor_(edx, edx);
	to32i(esp+8) = edx; //mov
	esp -= 4; _sub_4A4624(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49D9F3;
loc_49D9DA:
	cmp(to32i(dword_4DDD50), (int32_t)0);
	if (jnz())
		goto loc_49DA88;
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49D9F3:
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	edx = esp; //mov
	push32(ebx);
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_487854(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49D9DA;
	esp -= 4; _sub_49E9A4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49DA54;
	test(ebp, ebp);
	if (jz())
		goto loc_49DA4A;
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_49DA4A;
	ebx = to32i(esp+0xC); //mov
	edx = to32i(esp+8); //mov
	ecx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_4844D4(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49DA4A;
	ebx = to32i(esp+8); //mov
	esp -= 4; _sub_4844D0(); esp += 4; //call
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_49DA4A:
	eax = to32i(esp); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	goto loc_49D9DA;
loc_49DA54:
	ebx = to32i(esp+0xC); //mov
	ecx = edi; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4844D4(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49DA4A;
	esp -= 4; _sub_4844D0(); esp += 4; //call
	ebx = edi; //mov
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_49E8F0(); esp += 4; //call
	eax = to32i(esp); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	goto loc_49D9DA;
loc_49DA88:
	ebx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x10); //mov
	ecx = edi; //mov
	edx = esi; //mov
	call(to32i(dword_4DDD50));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49DAB0()
{
	push32(edx);
	edx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49DACC;
	test(edx, edx);
	if (jl())
		goto loc_49DAC5;
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_49DAD3;
loc_49DAC5:
	eax = 0xFFFFFFF8; //mov
	pop32(edx);
	return;
loc_49DACC:
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_49DAD3:
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	ebx = (int32_t)(intptr_t)dword_59BFB0; //mov
	to8i(byte_59C60D) = dl; //mov
	xor_(ecx, ecx);
loc_49DAE7:
	cmp(to8i(ebx+0xC), (int8_t)1);
	if (jnz())
		goto loc_49DB06;
	cmp(to32i(ebx), (int32_t)0);
	if (jl())
		goto loc_49DB06;
	eax = ecx; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	edx = to32i(ebx+0x2E); //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4894A4(); esp += 4; //call
loc_49DB06:
	inc(ecx);
	add(ebx, (int32_t)0x60);
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_49DAE7;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_49DB20()
{
	push32(edx);
	xor_(edx, edx);
loc_49DB23:
	eax = to32i(dword_59BFB0+edx); //mov
	add(edx, (int32_t)0x60);
	esp -= 4; _sub_489840(); esp += 4; //call
	cmp(edx, (int32_t)0x600);
	if (jnz())
		goto loc_49DB23;
	pop32(edx);
}
Fn(void) Game::_sub_49DB40()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ebp = edx; //mov
	edi = ebx; //mov
	ebx = ecx; //mov
	ecx = to32i(esp+0x10); //mov
	test(eax, eax);
	if (jl())
		goto loc_49DB58;
	cmp(eax, (int32_t)1);
	if (jl())
		goto loc_49DB63;
loc_49DB58:
	eax = 0xFFFFFFF8; //mov
loc_49DB5D:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_49DB63:
	shl(eax, (int32_t)4);
	add(eax, (int32_t)(intptr_t)dword_59BFA0);
	to32i(eax) = edi; //mov
	to32i(eax+8) = ebx; //mov
	edx = edi; //mov
	to32i(eax+0xC) = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_488B24(); esp += 4; //call
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49DB9E;
	test(eax, eax);
	if (jl())
		goto loc_49DB5D;
loc_49DB89:
	test(edi, edi);
	if (jnz())
		goto loc_49DB8F;
	xor_(ebp, ebp);
loc_49DB8F:
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_49DBA8(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_49DB9E:
	test(eax, eax);
	if (jge())
		goto loc_49DB89;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_49DBA8()
{
	push32(edi);
	edi = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49DBBD;
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_49DBBD;
	test(edx, edx);
	if (jl())
		goto loc_49DBBD;
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_49DBC4;
loc_49DBBD:
	eax = 0xFFFFFFF8; //mov
loc_49DBC2:
	pop32(edi);
	return;
loc_49DBC4:
	shl(eax, (int32_t)4);
	to32i(dword_59BFA4+eax) = edx; //mov
	eax = edi; //mov
	esp -= 4; _sub_488B30(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_49DBC2;
	push32(esi);
	push32(ecx);
	push32(ebx);
	esi = edi; //mov
	xor_(ecx, ecx);
loc_49DBDF:
	imul32(eax, ecx, 0x60);
	edx = edi; //mov
	ebx = to32i(dword_59BFE6+esi); //mov
	add(esi, (int32_t)0x60);
	sar(ebx, (int32_t)0x18);
	eax = to32i(dword_59BFB0+eax); //mov
	inc(ecx);
	esp -= 4; _sub_4B0BE0(); esp += 4; //call
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_49DBDF;
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_49DC10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to16i(dword_4DD448), (int16_t)0);
	if (jl())
		goto loc_49DCE4;
	eax = to16i(word_4DD3B8); //movsx
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = to32i(dword_4DD454); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(dword_4DD450); //mov
	al = to8i(eax+7); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, edx);
	edx = to16i(dword_4DD448); //movsx
	add(eax, edx);
	edx = to32i(dword_4DD3C0); //mov
	al = to8i(edx+eax); //mov
	xor_(ah, ah);
	to16i(word_4DD3B8) = ax; //mov
	eax = to32i(dword_4DD44C); //mov
	to32i(dword_4DD448) = eax; //mov
	to16i(dword_4DD44C) = 0xFFFF; //mov
	xor_(ecx, ecx);
	to16i(dword_4DD44C+2) = cx; //mov
loc_49DC84:
	inc(to32i(dword_4DD3BC));
	eax = to16i(word_4DD3B8); //movsx
	shl(eax, (int32_t)2);
	edx = to32i(dword_4DD3C4); //mov
	ecx = 4; //mov
	add(eax, edx);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)dword_4DD3C8; //mov
	esp -= 4; _sub_4959EC(); esp += 4; //call
	eax = to16i(word_4DD3B8); //movsx
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = to32i(dword_4DD454); //mov
	cmp(to8i(edx+eax+1), (int8_t)0);
	if (jbe())
		goto loc_49DD78;
loc_49DCDE:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49DCE4:
	xor_(edx, edx);
	xor_(eax, eax);
loc_49DCE8:
	ecx = to16i(word_4DD3B8); //movsx
	imul32(ecx, 0x1C);
	ebx = to32i(dword_4DD454); //mov
	cl = to8i(ecx+ebx+1); //mov
	and_(ecx, (int32_t)0xFF);
	cmp(edx, ecx);
	if (jge())
		goto loc_49DC84;
	ecx = to16i(word_4DD3B8); //movsx
	imul32(ecx, 0x1C);
	ebx = to32i(dword_4DD454); //mov
	add(ecx, ebx);
	bl = to8i(byte_4DD3BA); //mov
	cmp(bl, to8i(ecx+eax+4));
	if (jge())
		goto loc_49DD2E;
loc_49DD28:
	add(eax, (int32_t)3);
	inc(edx);
	goto loc_49DCE8;
loc_49DD2E:
	ebx = to16i(word_4DD3B8); //movsx
	imul32(ebx, 0x1C);
	ecx = to32i(dword_4DD454); //mov
	add(ecx, ebx);
	bl = to8i(byte_4DD3BA); //mov
	cmp(bl, to8i(ecx+eax+5));
	if (jg())
		goto loc_49DD28;
	edx = to16i(word_4DD3B8); //movsx
	shl(edx, (int32_t)2);
	ecx = edx; //mov
	shl(edx, (int32_t)3);
	sub(edx, ecx);
	ecx = edx; //mov
	edx = to32i(dword_4DD454); //mov
	add(edx, ecx);
	al = to8i(edx+eax+6); //mov
	xor_(ah, ah);
	to16i(word_4DD3B8) = ax; //mov
	goto loc_49DC84;
loc_49DD78:
	cmp(to16i(dword_4DD448), (int16_t)0);
	if (jge())
		goto loc_49DCDE;
	xor_(ecx, ecx);
	to32i(dword_4DDA80) = ecx; //mov
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49DD94()
{
	push32(edx);
	esp -= 4; _sub_496090(); esp += 4; //call
	cmp(eax, to32i(dword_4DD3BC));
	if (jge())
		goto loc_49DDA4;
loc_49DDA2:
	pop32(edx);
	return;
loc_49DDA4:
	xor_(edx, edx);
	dx = to16i(word_4DD3B6); //mov
	esp -= 4; _sub_495C28(); esp += 4; //call
	cmp(eax, edx);
	if (jge())
		goto loc_49DDA2;
	esp -= 4; _sub_49DC10(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_49DDC0()
{
	test(eax, eax);
	if (jnz())
		goto loc_49DDCA;
	ax = to16i(word_4DD3B4); //mov
loc_49DDCA:
	to16i(word_4DD3B6) = ax; //mov
}
Fn(void) Game::_sub_49DDD4()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49DDFF;
	cmp(to32i(dword_4DD450), (int32_t)0);
	if (jnz())
		goto loc_49DE05;
	to32i(dword_4DD450) = eax; //mov
	cmp(to32i(eax), (int32_t)0x78444650);
	if (jnz())
		goto loc_49DE0B;
	cmp(to8i(eax+4), (int8_t)0);
	if (jz())
		goto loc_49DE11;
	eax = 0xFFFFFFF5; //mov
	return;
loc_49DDFF:
	eax = 0xFFFFFFF6; //mov
	return;
loc_49DE05:
	eax = 0xFFFFFFFF; //mov
	return;
loc_49DE0B:
	eax = 0xFFFFFFF9; //mov
	return;
loc_49DE11:
	push32(edx);
	push32(ecx);
	push32(ebx);
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	xor_(ecx, ecx);
	to32i(dword_4DD454) = edx; //mov
	cl = to8i(eax+6); //mov
	shl(ecx, (int32_t)2);
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	sub(edx, ecx);
	ecx = edx; //mov
	edx = to32i(dword_4DD454); //mov
	add(edx, ecx);
	to32i(dword_4DD3C0) = edx; //mov
	xor_(edx, edx);
	dl = to8i(eax+0xB); //mov
	al = to8i(eax+7); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, edx);
	edx = to32i(dword_4DD3C0); //mov
	ebx = (int32_t)(intptr_t)sub_49DFEC; //mov
	add(edx, eax);
	to32i(dword_4DDAA0) = ebx; //mov
	to32i(dword_4DD3C4) = edx; //mov
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_49DE70()
{
	push32(ecx);
	sub(esp, (int32_t)0x10);
	ecx = edx; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49DF3F;
	to32i(dword_4DD458) = eax; //mov
	to16i(word_4DD3B4) = bx; //mov
	to16i(word_4DD3B6) = bx; //mov
	edx = 0xFFFFFFFF; //mov
	xor_(eax, eax);
loc_49DE9D:
	add(eax, (int32_t)4);
	to16i(word_4DD444+eax) = dx; //mov
	xor_(ebx, ebx);
	to16i(word_4DD446+eax) = bx; //mov
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_49DE9D;
	push32(edi);
	push32(esi);
	xor_(dh, dh);
	to8i(byte_4DD3BA) = dh; //mov
	eax = to32i(dword_4DD450); //mov
	al = to8i(eax+5); //mov
	xor_(ah, ah);
	to16i(word_4DD3B8) = ax; //mov
	esp -= 4; _sub_496090(); esp += 4; //call
	to32i(dword_4DD3BC) = eax; //mov
	edi = (int32_t)(intptr_t)dword_4DD3C8; //mov
	esi = ecx; //mov
	push32(edi);
loc_49DEE1:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_49DEF9;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_49DEE1;
loc_49DEF9:
	pop32(edi);
	inc(to32i(dword_4DD3BC));
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_485380(); esp += 4; //call
	eax = to32i(dword_4DD458); //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4958D0(); esp += 4; //call
	eax = ecx; //mov
	xor_(edx, edx);
	ebx = (int32_t)(intptr_t)sub_49DDC0; //mov
	esp -= 4; _sub_4959EC(); esp += 4; //call
	ecx = (int32_t)(intptr_t)sub_49DD94; //mov
	to32i(dword_4DCFE0) = ebx; //mov
	xor_(eax, eax);
	to32i(dword_4DDA80) = ecx; //mov
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x10);
	pop32(ecx);
	return;
loc_49DF3F:
	eax = 0xFFFFFFF6; //mov
	add(esp, (int32_t)0x10);
	pop32(ecx);
}
Fn(void) Game::_sub_49DF4C()
{
	test(eax, eax);
	if (jl())
		goto loc_49DF55;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_49DF5B;
loc_49DF55:
	eax = 0xFFFFFFF8; //mov
	return;
loc_49DF5B:
	to8i(byte_4DD3BA) = al; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_49DF64()
{
	push32(ecx);
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49DFA5;
	test(eax, eax);
	if (jl())
		goto loc_49DFAC;
	ecx = to32i(dword_4DD450); //mov
	cl = to8i(ecx+7); //mov
	and_(ecx, (int32_t)0xFF);
	cmp(eax, ecx);
	if (jge())
		goto loc_49DFAC;
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_49DFB3;
	cmp(to16i(dword_4DD448+2), (int16_t)1);
	if (jnz())
		goto loc_49DFD8;
	to16i(dword_4DD44C) = ax; //mov
	to16i(dword_4DD44C+2) = dx; //mov
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_49DFA5:
	eax = 0xFFFFFFF6; //mov
	pop32(ecx);
	return;
loc_49DFAC:
	eax = 0xFFFFFFF8; //mov
	pop32(ecx);
	return;
loc_49DFB3:
	push32(esi);
	to16i(dword_4DD448) = ax; //mov
	to16i(dword_4DD448+2) = dx; //mov
	to16i(dword_4DD44C) = 0xFFFF; //mov
	xor_(esi, esi);
	to16i(dword_4DD44C+2) = si; //mov
	pop32(esi);
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_49DFD8:
	to16i(dword_4DD448) = ax; //mov
	to16i(dword_4DD448+2) = dx; //mov
	xor_(eax, eax);
	pop32(ecx);
}
Fn(void) Game::_sub_49DFEC()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_49DFFB;
	eax = 0xFFFFFFF6; //mov
	return;
loc_49DFFB:
	push32(edx);
	esp -= 4; _sub_495990(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_4DDA80) = edx; //mov
	to32i(dword_4DD450) = edx; //mov
	to32i(dword_4DCFE0) = edx; //mov
	to32i(dword_4DDAA0) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_49E020()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = edx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49E08F;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	shl(edx, (int32_t)5);
	add(edx, (int32_t)(intptr_t)dword_59BFB0);
	esi = (uint8_t)to8i(edx+0x3B); //movzx
	test(esi, esi);
	if (jz())
		goto loc_49E0B9;
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	ebp = to32i(esp); //mov
	xor_(ebx, ebx);
loc_49E05D:
	xor_(edx, edx);
	dl = to8i(ecx+0x3B); //mov
	cmp(edx, esi);
	if (jnz())
		goto loc_49E07A;
	cmp(to8i(ecx+0xC), (int8_t)1);
	if (jnz())
		goto loc_49E07A;
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_49E07A;
	xor_(edx, esi);
	dl = to8i(ecx+0x33); //mov
	cmp(edx, ebp);
	if (jnz())
		goto loc_49E096;
loc_49E07A:
	inc(ebx);
	add(ecx, (int32_t)0x60);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_49E05D;
loc_49E083:
	xor_(edx, edx);
loc_49E085:
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49E08F:
	edx = 0xFFFFFFF8; //mov
	goto loc_49E085;
loc_49E096:
	cmp(to16i(ecx+0x42), (int16_t)0);
	if (jz())
		goto loc_49E07A;
	al = to8i(esp); //mov
	to8i(ecx+0x33) = al; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4B0D30(); esp += 4; //call
	edx = to32i(ecx+0x10); //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_489690(); esp += 4; //call
	goto loc_49E07A;
loc_49E0B9:
	xor_(eax, eax);
	ebx = to32i(esp); //mov
	al = to8i(edx+0x33); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_49E083;
	cmp(to16i(edx+0x42), (int16_t)0);
	if (jz())
		goto loc_49E083;
	al = to8i(esp); //mov
	to8i(edx+0x33) = al; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4B0D30(); esp += 4; //call
	edx = to32i(edx+0x10); //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_489690(); esp += 4; //call
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E0F4()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49E110;
	test(edx, edx);
	if (jl())
		goto loc_49E109;
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_49E117;
loc_49E109:
	eax = 0xFFFFFFF8; //mov
	pop32(ecx);
	return;
loc_49E110:
	eax = 0xFFFFFFF6; //mov
	pop32(ecx);
	return;
loc_49E117:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_49E020(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_49E130()
{
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	ah = to8i(byte_4DDA74); //mov
	xor_(edx, edx);
	test(ah, ah);
	if (jnz())
		goto loc_49E154;
	eax = 0xFFFFFFF6; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_49E154:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	and_(edi, (int32_t)0xFFFF);
	eax = ecx; //mov
	and_(ebp, (int32_t)0xFFFF);
	esp -= 4; _sub_4A576C(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49E1D2;
	push32(esi);
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	al = to8i(eax+0x3B); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+4) = eax; //mov
	if (jz())
		goto loc_49E1E3;
	esi = (int32_t)(intptr_t)dword_59BFB0; //mov
	xor_(ecx, ecx);
loc_49E195:
	xor_(eax, eax);
	ebx = to32i(esp+4); //mov
	al = to8i(esi+0x3B); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_49E1BA;
	cmp(to8i(esi+0xC), (int8_t)1);
	if (jnz())
		goto loc_49E1BA;
	cmp(to32i(esi), (int32_t)0);
	if (jl())
		goto loc_49E1BA;
	ebx = ebp; //mov
	edx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_489404(); esp += 4; //call
	edx = eax; //mov
loc_49E1BA:
	inc(ecx);
	add(esi, (int32_t)0x60);
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_49E195;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(esi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_49E1D2:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_49E1E3:
	ebx = ebp; //mov
	edx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_489404(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(esi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
}
Fn(void) Game::_sub_49E200()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	to32i(esp+4) = edx; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49E22A;
	cmp(edx, (int32_t)0x7F);
	if (jg())
		goto loc_49E21D;
	test(edx, edx);
	if (jge())
		goto loc_49E231;
loc_49E21D:
	edx = 0xFFFFFFF8; //mov
loc_49E222:
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(ecx);
	return;
loc_49E22A:
	edx = 0xFFFFFFF6; //mov
	goto loc_49E222;
loc_49E231:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49E2E9;
	push32(edi);
	push32(esi);
	push32(ebx);
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	edi = (uint8_t)to8i(eax+0x3B); //movzx
	sub(edx, (int32_t)0x40);
	test(edi, edi);
	if (jz())
		goto loc_49E303;
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	to32i(esp+0xC) = edx; //mov
	xor_(ebx, ebx);
	xor_(ebp, ebp);
loc_49E273:
	xor_(eax, eax);
	al = to8i(ecx+0x3B); //mov
	esi = ecx; //mov
	cmp(eax, edi);
	if (jnz())
		goto loc_49E2CE;
	cmp(to8i(ecx+0xC), (int8_t)1);
	if (jnz())
		goto loc_49E2CE;
	cmp(ebp, to32i(ecx));
	if (jg())
		goto loc_49E2CE;
	ah = to8i(ecx+0x37); //mov
	edx = to32i(esp+0x10); //mov
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_49E2A4;
	edx = to32i(ecx+0x34); //mov
	eax = to32i(esp+0xC); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx, eax);
	add(edx, (int32_t)0x40);
loc_49E2A4:
	eax = to32i(esi+0x2F); //mov
	sar(eax, (int32_t)0x18);
	add(edx, eax);
	sub(edx, (int32_t)0x40);
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_49E2FB;
	edx = 0x7F; //mov
loc_49E2B9:
	eax = to32i(esi+0x50); //mov
	cmp(ebp, eax);
	if (jz())
		goto loc_49E2C4;
	edx = to8i(edx+eax); //movsx
loc_49E2C4:
	eax = ebx; //mov
	to8i(esi+0xF) = dl; //mov
	esp -= 4; _sub_489354(); esp += 4; //call
loc_49E2CE:
	inc(ebx);
	add(ecx, (int32_t)0x60);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_49E273;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(edx, edx);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(ecx);
	return;
loc_49E2E9:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	edx = 0xFFFFFFF8; //mov
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(ecx);
	return;
loc_49E2FB:
	test(edx, edx);
	if (jge())
		goto loc_49E2B9;
	edx = ebp; //mov
	goto loc_49E2B9;
loc_49E303:
	cmp(to8i(eax+0x37), (int8_t)1);
	if (jz())
		goto loc_49E319;
	ebx = to32i(eax+0x34); //mov
	sar(ebx, (int32_t)0x18);
	imul32(edx, ebx);
	add(edx, (int32_t)0x40);
	to32i(esp+0x10) = edx; //mov
loc_49E319:
	edx = to32i(eax+0x2F); //mov
	esi = to32i(esp+0x10); //mov
	sar(edx, (int32_t)0x18);
	add(edx, esi);
	sub(edx, (int32_t)0x40);
	to32i(esp+0x10) = edx; //mov
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_49E372;
	to32i(esp+0x10) = 0x7F; //mov
loc_49E339:
	esi = to32i(eax+0x50); //mov
	test(esi, esi);
	if (jz())
		goto loc_49E34E;
	edi = to32i(esp+0x10); //mov
	edx = (int32_t)(intptr_t)(esi+edi); //lea
	edx = to8i(edx); //movsx
	to32i(esp+0x10) = edx; //mov
loc_49E34E:
	dl = to8i(esp+0x10); //mov
	to8i(eax+0xF) = dl; //mov
	edx = to32i(esp+0x10); //mov
	eax = ecx; //mov
	esp -= 4; _sub_489354(); esp += 4; //call
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(edx, edx);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(ecx);
	return;
loc_49E372:
	test(edx, edx);
	if (jge())
		goto loc_49E339;
	xor_(edx, edx);
	to32i(esp+0x10) = edx; //mov
	goto loc_49E339;
}
Fn(void) Game::_sub_49E380()
{
	push32(edx);
	edx = 1; //mov
	esp -= 4; _sub_49E39C(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_49E39C()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)0xC);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	push32(edx);
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_487668(); esp += 4; //call
	edx = to32i(esp); //mov
	test(edx, edx);
	if (jnz())
		goto loc_49E3C4;
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49E3C4:
	eax = edx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E3E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	test(eax, eax);
	if (jg())
		goto loc_49E3F1;
	xor_(eax, eax);
loc_49E3EC:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49E3F1:
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	ebx = 0x300; //mov
	eax = (int32_t)(intptr_t)aGalloc; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49E3EC;
	ebx = 4; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aGmem; //mov
	add(ecx, (int32_t)8);
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)aGend; //mov
	edx = (int32_t)(intptr_t)(ecx+esi); //lea
	to32i(ecx-4) = esi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(dword_4DD45C); //mov
	inc(edx);
	eax = ecx; //mov
	to32i(dword_4DD45C) = edx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E448()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = eax; //mov
	ecx = 4; //mov
	edi = (int32_t)(intptr_t)aGmem; //mov
	esi = (int32_t)(intptr_t)(eax-8); //lea
	ebx = to32i(eax-4); //mov
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_49E46B;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_49E46B:
	xor_(ebp, ebp);
	test(eax, eax);
	if (jnz())
		goto loc_49E4C8;
	test(ebx, ebx);
	if (jle())
		goto loc_49E4C8;
	cmp(ebx, (int32_t)0x2000000);
	if (jge())
		goto loc_49E4C8;
	ecx = 4; //mov
	edi = (int32_t)(intptr_t)aGend; //mov
	esi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_49E495;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_49E495:
	test(eax, eax);
	if (jnz())
		goto loc_49E4C8;
	ebp = 1; //mov
loc_49E49E:
	ebx = 4; //mov
	ecx = (int32_t)(intptr_t)(edx-8); //lea
	eax = (int32_t)(intptr_t)aGfre; //mov
	edx = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	dec(to32i(dword_4DD45C));
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49E4C8:
	test(ebp, ebp);
	if (jnz())
		goto loc_49E49E;
	ecx = 4; //mov
	edi = (int32_t)(intptr_t)aGfre; //mov
	esi = (int32_t)(intptr_t)(edx-8); //lea
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_49E4E4;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_49E4E4:
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E4F0()
{
	eax = to32i(eax+8); //mov
}
Fn(void) Game::_sub_49E4F4()
{
	cmp(edx, to32i(eax+8));
	if (jnb())
		goto loc_49E4FE;
	add(eax, to32i(eax+edx*8+0x14));
	return;
loc_49E4FE:
	xor_(eax, eax);
}
Fn(void) Game::_sub_49E520()
{
	push32(edx);
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49E52B;
loc_49E527:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_49E52B:
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	test(edx, edx);
	if (jz())
		goto loc_49E527;
loc_49E53A:
	eax = to32i(edx); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)0x22);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x24);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x23);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x29);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x2A);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x2C);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x2D);
	if (jz())
		goto loc_49E57E;
	cmp(eax, (int32_t)0x2E);
	if (jz())
		goto loc_49E57E;
	eax = to32i(edx); //mov
	sar(eax, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_49E574;
	add(eax, edx);
loc_49E574:
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49E53A;
	xor_(eax, eax);
	pop32(edx);
	return;
loc_49E57E:
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_49E584()
{
	push32(edx);
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49E58F;
loc_49E58B:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_49E58F:
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	test(edx, edx);
	if (jz())
		goto loc_49E58B;
loc_49E59E:
	eax = to32i(edx); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)0x7C);
	if (jz())
		goto loc_49E5BF;
	eax = to32i(edx); //mov
	sar(eax, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_49E5B5;
	add(eax, edx);
loc_49E5B5:
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49E59E;
	xor_(eax, eax);
	pop32(edx);
	return;
loc_49E5BF:
	eax = (int32_t)(intptr_t)(edx+8); //lea
	pop32(edx);
}
Fn(void) Game::_sub_49E630()
{
	static const void *const off_49E610[] = {
		&&loc_49E654,
		&&loc_49E6CE,
		&&loc_49E6DB,
		&&loc_49E6D0,
		&&loc_49E6E8,
		&&loc_49E6F0,
		&&loc_49E6FB,
		&&loc_49E706,
	};
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)8);
	xor_(ecx, ecx);
	test(edx, edx);
	if (jl())
		goto loc_49E65A;
loc_49E63B:
	test(eax, eax);
	if (jl())
		goto loc_49E663;
loc_49E63F:
	cmp(eax, edx);
	if (jnz())
		goto loc_49E66A;
	eax = 0x2000; //mov
	cmp(ecx, (int32_t)7);
	if (ja())
		goto loc_49E654;
	goto *off_49E610[ecx];
loc_49E654:
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E65A:
	ecx = 2; //mov
	neg(edx);
	goto loc_49E63B;
loc_49E663:
	or_(cl, (int8_t)4);
	neg(eax);
	goto loc_49E63F;
loc_49E66A:
	cmp(edx, eax);
	if (jge())
		goto loc_49E677;
	esi = eax; //mov
	or_(cl, (int8_t)1);
	eax = edx; //mov
	edx = esi; //mov
loc_49E677:
	push32(ebx);
	push32(edx);
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edx = 0x20; //mov
	esp -= 4; _sub_4B1218(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	push32(edx);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esp -= 4; _sub_4B0E94(); esp += 4; //call
	esi = eax; //mov
	shr(eax, (int32_t)0x18);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	shr(esi, (int32_t)8);
	eax = to32i(dword_4DFD7C+edx); //mov
	edx = to32i(dword_4DFD80+edx); //mov
	and_(esi, (int32_t)0xFFFF);
	sub(edx, eax);
	imul32(edx, esi);
	shr(edx, (int32_t)0x10);
	add(eax, edx);
	pop32(ebx);
	cmp(ecx, (int32_t)7);
	if (ja())
		goto loc_49E654;
	goto *off_49E610[ecx];
loc_49E6CE:
	neg(eax);
loc_49E6D0:
	add(eax, (int32_t)0x4000);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E6DB:
	neg(eax);
	add(eax, (int32_t)0x8000);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E6E8:
	neg(eax);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E6F0:
	sub(eax, (int32_t)0x4000);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E6FB:
	add(eax, (int32_t)0xFFFF8000);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E706:
	neg(eax);
	sub(eax, (int32_t)0x4000);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49E720()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	eax = edx; //mov
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_49D2C0(); esp += 4; //call
	to32i(ecx) = 0x10000; //mov
	to32i(ecx+4) = 0; //mov
	to32i(ecx+8) = 0; //mov
	to32i(ecx+0xC) = 0; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x10) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x14) = eax; //mov
	eax = to32i(esp+4); //mov
	edx = eax; //mov
	to32i(ecx+0x1C) = eax; //mov
	neg(edx);
	to32i(ecx+0x1C) = edx; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x20) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E780()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	eax = edx; //mov
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_49D2C0(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(ecx+4) = 0; //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(ecx+0xC) = 0; //mov
	to32i(ecx+0x10) = 0x10000; //mov
	to32i(ecx+0x14) = 0; //mov
	edx = eax; //mov
	to32i(ecx+8) = eax; //mov
	neg(edx);
	to32i(ecx+8) = edx; //mov
	eax = to32i(esp+4); //mov
	to32i(ecx+0x1C) = 0; //mov
	to32i(ecx+0x18) = eax; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x20) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E7E0()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	eax = edx; //mov
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_49D2C0(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(ecx+8) = 0; //mov
	to32i(ecx+4) = eax; //mov
	eax = to32i(esp+4); //mov
	edx = eax; //mov
	to32i(ecx+0xC) = eax; //mov
	neg(edx);
	to32i(ecx+0xC) = edx; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x14) = 0; //mov
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x1C) = 0; //mov
	to32i(ecx+0x20) = 0x10000; //mov
	to32i(ecx+0x10) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49E840()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	to32i(esp+0x28) = edx; //mov
	to32i(esp+0x24) = ebx; //mov
	ebp = to32i(esp+0x28); //mov
	xor_(edx, edx);
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x30) = edx; //mov
	add(ebp, (int32_t)0xC);
loc_49E860:
	esi = to32i(esp+0x2C); //mov
	edi = to32i(esp+0x30); //mov
	ecx = to32i(esp+0x28); //mov
	shl(edi, (int32_t)2);
loc_49E86F:
	edx = to32i(ecx); //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xC); //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x18); //mov
	add(ebx, eax);
	eax = to32i(esi+8); //mov
	add(edi, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	add(ecx, (int32_t)4);
	to32i(esp+edi-4) = ebx; //mov
	cmp(ecx, ebp);
	if (jnz())
		goto loc_49E86F;
	ecx = to32i(esp+0x2C); //mov
	ebx = to32i(esp+0x30); //mov
	add(ecx, (int32_t)0xC);
	add(ebx, (int32_t)3);
	to32i(esp+0x2C) = ecx; //mov
	to32i(esp+0x30) = ebx; //mov
	cmp(ebx, (int32_t)9);
	if (jl())
		goto loc_49E860;
	ebx = 0x24; //mov
	edx = to32i(esp+0x24); //mov
	eax = esp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49E8F0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	ecx = 3; //mov
	esi = eax; //mov
	add(eax, (int32_t)2);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = eax; //mov
	ah = to8i(edi+1); //mov
	xor_(ebx, ebx);
	cmp(ah, (int8_t)0xFB);
	if (jnz())
		goto loc_49E932;
loc_49E91A:
	al = to8i(esi); //mov
	and_(al, (int8_t)0xFE);
	cmp(al, (int8_t)0x32);
	if (jnb())
		goto loc_49E939;
	cmp(al, (int8_t)0x10);
	if (jb())
		goto loc_49E92C;
	if (jbe())
		goto loc_49E964;
	cmp(al, (int8_t)0x30);
	if (jz())
		goto loc_49E943;
loc_49E92C:
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E932:
	cmp(ah, (int8_t)0x32);
	if (jz())
		goto loc_49E91A;
	goto loc_49E92C;
loc_49E939:
	if (jbe())
		goto loc_49E943;
	cmp(al, (int8_t)0x46);
	if (jnb())
		goto loc_49E953;
	cmp(al, (int8_t)0x34);
	if (jnz())
		goto loc_49E92C;
loc_49E943:
	ebx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4B12D0(); esp += 4; //call
	ebx = eax; //mov
	goto loc_49E92C;
loc_49E953:
	if (jbe())
		goto loc_49E978;
	cmp(al, (int8_t)0x4A);
	if (jnz())
		goto loc_49E92C;
	eax = esi; //mov
	esp -= 4; _sub_4B2690(); esp += 4; //call
	ebx = ecx; //mov
	goto loc_49E92C;
loc_49E964:
	ebx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4B2824(); esp += 4; //call
	ebx = eax; //mov
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49E978:
	eax = esi; //mov
	esp -= 4; _sub_4B29D8(); esp += 4; //call
	ebx = eax; //mov
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49E9A4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = eax; //mov
	ecx = 3; //mov
	esi = eax; //mov
	add(eax, (int32_t)2);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = eax; //mov
	ah = to8i(edx+1); //mov
	xor_(ebx, ebx);
	cmp(ah, (int8_t)0xFB);
	if (jnz())
		goto loc_49E9E8;
loc_49E9CF:
	al = to8i(esi); //mov
	and_(al, (int8_t)0xFE);
	cmp(al, (int8_t)0x34);
	if (jnb())
		goto loc_49E9EF;
	cmp(al, (int8_t)0x30);
	if (jnb())
		goto loc_49E9FF;
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_49E9E1;
loc_49E9DF:
	ebx = ecx; //mov
loc_49E9E1:
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49E9E8:
	cmp(ah, (int8_t)0x32);
	if (jz())
		goto loc_49E9CF;
	goto loc_49E9E1;
loc_49E9EF:
	if (jbe())
		goto loc_49E9DF;
	cmp(al, (int8_t)0x4A);
	if (jnb())
		goto loc_49E9FB;
	cmp(al, (int8_t)0x46);
	if (jz())
		goto loc_49E9DF;
	goto loc_49E9E1;
loc_49E9FB:
	if (jbe())
		goto loc_49E9DF;
	goto loc_49E9E1;
loc_49E9FF:
	if (jbe())
		goto loc_49E9DF;
	cmp(al, (int8_t)0x32);
	if (jz())
		goto loc_49E9DF;
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49EA20()
{
	static const void *const off_49EA10[] = {
		&&loc_49EA3B,
		&&loc_49EA57,
		&&loc_49EA79,
		&&loc_49EAA5,
	};
	push32(ecx);
	push32(ebp);
	ecx = eax; //mov
	sar(ecx, (int32_t)8);
	and_(ecx, (int32_t)3);
	and_(eax, (int32_t)0xFF);
	cmp(ecx, (int32_t)3);
	if (ja())
		goto loc_49EA54;
	goto *off_49EA10[ecx];
loc_49EA3B:
	ecx = to32i(dword_4DB6B4+eax*4); //mov
	to32i(edx) = ecx; //mov
	edx = 0x100; //mov
	sub(edx, eax);
	eax = to32i(dword_4DB6B4+edx*4); //mov
	to32i(ebx) = eax; //mov
loc_49EA54:
	pop32(ebp);
	pop32(ecx);
	return;
loc_49EA57:
	ecx = 0x100; //mov
	sub(ecx, eax);
	ecx = to32i(dword_4DB6B4+ecx*4); //mov
	to32i(edx) = ecx; //mov
	eax = to32i(dword_4DB6B4+eax*4); //mov
	ebp = eax; //mov
	to32i(ebx) = eax; //mov
	neg(ebp);
	to32i(ebx) = ebp; //mov
	pop32(ebp);
	pop32(ecx);
	return;
loc_49EA79:
	push32(edi);
	push32(esi);
	ecx = to32i(dword_4DB6B4+eax*4); //mov
	esi = ecx; //mov
	to32i(edx) = ecx; //mov
	neg(esi);
	to32i(edx) = esi; //mov
	edx = 0x100; //mov
	sub(edx, eax);
	eax = to32i(dword_4DB6B4+edx*4); //mov
	edi = eax; //mov
	to32i(ebx) = eax; //mov
	neg(edi);
	to32i(ebx) = edi; //mov
	pop32(esi);
	pop32(edi);
	pop32(ebp);
	pop32(ecx);
	return;
loc_49EAA5:
	ecx = 0x100; //mov
	sub(ecx, eax);
	ecx = to32i(dword_4DB6B4+ecx*4); //mov
	to32i(edx) = ecx; //mov
	neg(ecx);
	to32i(edx) = ecx; //mov
	eax = to32i(dword_4DB6B4+eax*4); //mov
	to32i(ebx) = eax; //mov
	pop32(ebp);
	pop32(ecx);
}
Fn(void) Game::_sub_49EAC8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(esi); //mov
	imul32(to32i(edi));
	ebp = eax; //mov
	eax = to32i(esi+4); //mov
	ecx = edx; //mov
	imul32(to32i(edi+0xC));
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	adc(ecx, edx);
	imul32(to32i(edi+0x18));
	add(eax, ebp);
	adc(edx, ecx);
	shrd(eax, edx, 0x10);
	to32i(ebx) = eax; //mov
	eax = to32i(esi); //mov
	imul32(to32i(edi+4));
	ebp = eax; //mov
	eax = to32i(esi+4); //mov
	ecx = edx; //mov
	imul32(to32i(edi+0x10));
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	adc(ecx, edx);
	imul32(to32i(edi+0x1C));
	add(eax, ebp);
	adc(edx, ecx);
	shrd(eax, edx, 0x10);
	to32i(ebx+4) = eax; //mov
	eax = to32i(esi); //mov
	imul32(to32i(edi+8));
	ebp = eax; //mov
	eax = to32i(esi+4); //mov
	ecx = edx; //mov
	imul32(to32i(edi+0x14));
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	adc(ecx, edx);
	imul32(to32i(edi+0x20));
	add(eax, ebp);
	adc(edx, ecx);
	shrd(eax, edx, 0x10);
	to32i(ebx+8) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49EB40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = ebx; //mov
	ecx = edx; //mov
	esi = (int32_t)(intptr_t)(eax+0x24); //lea
loc_49EB4D:
	add(ebx, (int32_t)4);
	edx = to32i(eax); //mov
	ebp = to32i(ecx); //mov
	add(ecx, (int32_t)4);
	add(edx, ebp);
	add(eax, (int32_t)4);
	to32i(ebx-4) = edx; //mov
	cmp(eax, esi);
	if (jnz())
		goto loc_49EB4D;
	eax = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49EB6C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = ebx; //mov
	ecx = edx; //mov
	esi = (int32_t)(intptr_t)(eax+0x24); //lea
loc_49EB79:
	add(ebx, (int32_t)4);
	edx = to32i(eax); //mov
	ebp = to32i(ecx); //mov
	add(ecx, (int32_t)4);
	sub(edx, ebp);
	add(eax, (int32_t)4);
	to32i(ebx-4) = edx; //mov
	cmp(eax, esi);
	if (jnz())
		goto loc_49EB79;
	eax = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49EB98()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = edx; //mov
	ebp = ebx; //mov
	ecx = eax; //mov
	edi = (int32_t)(intptr_t)(eax+0x24); //lea
loc_49EBA5:
	edx = esi; //mov
	eax = to32i(ecx); //mov
	add(ebx, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, (int32_t)4);
	to32i(ebx-4) = eax; //mov
	cmp(ecx, edi);
	if (jnz())
		goto loc_49EBA5;
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49EBC8()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xBC);
	to32i(esp+0xB8) = eax; //mov
	xor_(edx, edx);
	to32i(esp+0xB4) = edx; //mov
loc_49EBE4:
	edx = (int32_t)(intptr_t)(esp+0x48); //lea
	eax = to32i(esp+0xB8); //mov
	ebx = (int32_t)(intptr_t)(esp+0x90); //lea
	ecx = 9; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp+0xB8); //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	edi = esp; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x6C); //lea
	edx = (int32_t)(intptr_t)dword_4DD460; //mov
	eax = (int32_t)(intptr_t)(esp+0x90); //lea
	esi = (int32_t)(intptr_t)dword_4DD460; //mov
	esp -= 4; _sub_49EB6C(); esp += 4; //call
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = esp; //mov
	ebp = 4; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_49EC40:
	ebx = (int32_t)(intptr_t)(esp+0x48); //lea
	edx = (int32_t)(intptr_t)(esp+0x6C); //lea
	eax = esp; //mov
	ecx = 9; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_49E840(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x90); //lea
	eax = esp; //mov
	edx = to32i(dword_4DD484+ebp); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_49EB98(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = (int32_t)(intptr_t)(esp+0x90); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	add(ebp, (int32_t)4);
	esp -= 4; _sub_49EB40(); esp += 4; //call
	cmp(ebp, (int32_t)0x10);
	if (jnz())
		goto loc_49EC40;
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esp+0x48); //lea
	esi = to32i(esp+0xB8); //mov
	ebx = to32i(esp+0xB8); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	ecx = to32i(esp+0xB4); //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	inc(ecx);
	esp -= 4; _sub_49E840(); esp += 4; //call
	to32i(esp+0xB4) = ecx; //mov
	cmp(ecx, (int32_t)4);
	if (jl())
		goto loc_49EBE4;
	add(esp, (int32_t)0xBC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_initrandnext_()
{
	call(to32i(off_4DED58));
	add(eax, (int32_t)0xC);
}
Fn(void) Game::_rand_()
{
	push32(edx);
	esp -= 4; _initrandnext_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49EED1;
	imul32(edx, to32i(eax), 0x41C64E6D);
	add(edx, (int32_t)0x3039);
	to32i(eax) = edx; //mov
	eax = edx; //mov
	shr(eax, (int32_t)0x10);
	and_(eax, (int32_t)0x7FFF);
loc_49EED1:
	pop32(edx);
}
Fn(void) Game::_stricmp_()
{
	push32(ebx);
	ebx = eax; //mov
loc_49F136:
	al = to8i(ebx); //mov
	ah = to8i(edx); //mov
	cmp(al, (int8_t)0x41);
	if (jb())
		goto loc_49F144;
	cmp(al, (int8_t)0x5A);
	if (ja())
		goto loc_49F144;
	add(al, (int8_t)0x20);
loc_49F144:
	cmp(ah, (int8_t)0x41);
	if (jb())
		goto loc_49F151;
	cmp(ah, (int8_t)0x5A);
	if (ja())
		goto loc_49F151;
	add(ah, (int8_t)0x20);
loc_49F151:
	cmp(al, ah);
	if (jnz())
		goto loc_49F15D;
	test(ah, ah);
	if (jz())
		goto loc_49F15D;
	inc(ebx);
	inc(edx);
	goto loc_49F136;
loc_49F15D:
	xor_(edx, edx);
	dl = al; //mov
	al = ah; //mov
	and_(eax, (int32_t)0xFF);
	sub(edx, eax);
	eax = edx; //mov
	pop32(ebx);
}
Fn(void) Game::_sub_49F978()
{
	push32(edx);
	edx = to32i(dword_4DAC60); //mov
	test(edx, edx);
	if (jnz())
		goto loc_49F985;
	pop32(edx);
	return;
loc_49F985:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4DAC60) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_unknown_libname_3()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
loc_49FB17:
	dl = to8i(eax); //mov
	inc(dl);
	and_(edx, (int32_t)0xFF);
	test(_IsTable[edx], (int8_t)2);
	if (jz())
		goto loc_49FB2D;
	inc(eax);
	goto loc_49FB17;
loc_49FB2D:
	cl = to8i(eax); //mov
	cmp(cl, (int8_t)0x2B);
	if (jz())
		goto loc_49FB39;
	cmp(cl, (int8_t)0x2D);
	if (jnz())
		goto loc_49FB3A;
loc_49FB39:
	inc(eax);
loc_49FB3A:
	xor_(ebx, ebx);
loc_49FB3C:
	dl = to8i(eax); //mov
	inc(dl);
	and_(edx, (int32_t)0xFF);
	test(_IsTable[edx], (int8_t)0x20);
	if (jz())
		goto loc_49FB5E;
	imul32(ebx, 0xA);
	xor_(edx, edx);
	dl = to8i(eax); //mov
	add(ebx, edx);
	inc(eax);
	sub(ebx, (int32_t)0x30);
	goto loc_49FB3C;
loc_49FB5E:
	cmp(cl, (int8_t)0x2D);
	if (jnz())
		goto loc_49FB65;
	neg(ebx);
loc_49FB65:
	eax = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49FB70()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = eax; //mov
	to32i(dword_570E38) = edx; //mov
	to32i(eax+0x30) = 0; //mov
	eax = to32i(eax+0x34); //mov
	esp -= 4; _sub_48FF9C(); esp += 4; //call
	eax = to32i(esi+0x34); //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49FBA1;
	eax = to32i(edi+0x30); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FBA1:
	edx = to32i(esi+0x48); //mov
	ecx = to32i(esi+0x44); //mov
	ebx = to32i(esi+0x40); //mov
	push32(edx);
	eax = to32i(esi+0x34); //mov
	edx = to32i(esi+0x3C); //mov
	esp -= 4; _sub_4901BC(); esp += 4; //call
	eax = to32i(esi+0x34); //mov
	esp -= 4; _sub_48FD00(); esp += 4; //call
	eax = to32i(esi+0x34); //mov
	esp -= 4; _sub_48FD20(); esp += 4; //call
	eax = to32i(esi+0x34); //mov
	esp -= 4; _sub_48F590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49FBE1;
	to32i(esi+0x30) = 1; //mov
	eax = to32i(edi+0x30); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FBE1:
	eax = to32i(esi+0x34); //mov
	esp -= 4; _sub_48FD40(); esp += 4; //call
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49FBF0()
{
	to32i(eax+0x30) = 0; //mov
	eax = 1; //mov
}
Fn(void) Game::_sub_49FC00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ebx = to32i(dword_570E38); //mov
	ecx = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_49FC18;
loc_49FC11:
	eax = to32i(ecx+0x30); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FC18:
	eax = to32i(eax+0x34); //mov
	esp -= 4; _sub_490308(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49FC11;
	eax = edx; //mov
	call(to32i(dword_570E38));
	eax = to32i(ecx+0x30); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49FC34()
{
	eax = to32i(eax+0x34); //mov
	_sub_49035C(); return; //jmp
}
Fn(void) Game::_sub_49FC3C()
{
	eax = to32i(eax+0x34); //mov
	_sub_490308(); return; //jmp
}
Fn(void) Game::_sub_49FC44()
{
	push32(ecx);
	ecx = eax; //mov
	eax = ebx; //mov
	ebx = edx; //mov
	ecx = to32i(ecx+0x34); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_490478(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49FC61;
	eax = edx; //mov
	pop32(ecx);
	return;
loc_49FC61:
	neg(edx);
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_49FC68()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	edx = ebx; //mov
	ecx = to32i(ecx+0x34); //mov
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_490008(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_49FC80()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_49FCE5;
	cmp(to32i(eax+0x24), (int32_t)0);
	if (jnz())
		goto loc_49FCA6;
	edx = to32i(dword_4DABCC); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	to32i(esi+0x24) = eax; //mov
loc_49FCA6:
	push32(edi);
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jnz())
		goto loc_49FCC2;
	edx = to32i(dword_4DABCC); //mov
	edi = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esi+0x28) = eax; //mov
loc_49FCC2:
	cmp(to32i(esi+0x2C), (int32_t)0);
	if (jnz())
		goto loc_49FCDD;
	edx = to32i(dword_4DABCC); //mov
	edi = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esi+0x2C) = eax; //mov
loc_49FCDD:
	to32i(esi+8) = 3; //mov
	pop32(edi);
loc_49FCE5:
	edx = (int32_t)(intptr_t)dword_4D4BC8; //mov
	push32(ebx);
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)off_4DD5B8; //mov
	esp -= 4; _sub_48A188(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49FD00()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	ecx = edx; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49FD14;
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FD14:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_59C600) = eax; //mov
	esp -= 4; _sub_49FDE8(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_49FE2C(); esp += 4; //call
	edx = ecx; //mov
	esp -= 4; _sub_488B34(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49FD44;
	dl = 1; //mov
	xor_(eax, eax);
	to8i(byte_4DDA74) = dl; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FD44:
	esp -= 4; _sub_488BA4(); esp += 4; //call
	eax = ecx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_49FDE8()
{
	push32(edx);
	xor_(eax, eax);
loc_49FDEB:
	add(eax, (int32_t)0x60);
	xor_(dl, dl);
	dword_59BF5C[eax] = dl; //mov
	cmp(eax, (int32_t)0x600);
	if (jnz())
		goto loc_49FDEB;
	xor_(eax, eax);
loc_49FDFF:
	add(eax, (int32_t)8);
	xor_(edx, edx);
	to32i(dword_59C5A8+eax) = edx; //mov
	to32i(dword_59C5AC+eax) = edx; //mov
	cmp(eax, (int32_t)0x50);
	if (jnz())
		goto loc_49FDFF;
	to32i(dword_59C608) = edx; //mov
	to32i(dword_59C604) = edx; //mov
	to8i(byte_59C60D) = 0x7F; //mov
	pop32(edx);
}
Fn(void) Game::_sub_49FE2C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_48883C(); esp += 4; //call
	edx = eax; //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_49FE8B;
loc_49FE3F:
	and_(eax, edx);
	ecx = eax; //mov
	edx = eax; //mov
	esi = eax; //mov
	and_(ecx, (int32_t)0xFF);
	and_(edx, (int32_t)0xFF00);
	and_(esi, (int32_t)0xFF0000);
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_49FE60;
	xor_(esi, esi);
loc_49FE60:
	test(ecx, ecx);
	if (jz())
		goto loc_49FE8F;
	test(edx, edx);
	if (jz())
		goto loc_49FE8F;
	test(cl, (int8_t)8);
	if (jz())
		goto loc_49FE95;
	eax = 8; //mov
loc_49FE72:
	test(dh, (int8_t)8);
	if (jz())
		goto loc_49FEB4;
	or_(ah, (int8_t)8);
loc_49FE7A:
	test(esi, (int32_t)0x20000);
	if (jz())
		goto loc_49FE87;
	or_(eax, (int32_t)0x20000);
loc_49FE87:
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FE8B:
	eax = ebx; //mov
	goto loc_49FE3F;
loc_49FE8F:
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_49FE95:
	test(cl, (int8_t)2);
	if (jz())
		goto loc_49FEA1;
	eax = 2; //mov
	goto loc_49FE72;
loc_49FEA1:
	test(cl, (int8_t)4);
	if (jz())
		goto loc_49FEAD;
	eax = 4; //mov
	goto loc_49FE72;
loc_49FEAD:
	eax = 1; //mov
	goto loc_49FE72;
loc_49FEB4:
	test(dh, (int8_t)0x10);
	if (jz())
		goto loc_49FEBE;
	or_(ah, (int8_t)0x10);
	goto loc_49FE7A;
loc_49FEBE:
	test(dh, (int8_t)4);
	if (jz())
		goto loc_49FEC8;
	or_(ah, (int8_t)4);
	goto loc_49FE7A;
loc_49FEC8:
	test(dh, (int8_t)0x20);
	if (jz())
		goto loc_49FED2;
	or_(ah, (int8_t)0x20);
	goto loc_49FE7A;
loc_49FED2:
	test(dh, (int8_t)2);
	if (jz())
		goto loc_49FEDC;
	or_(ah, (int8_t)2);
	goto loc_49FE7A;
loc_49FEDC:
	or_(ah, (int8_t)1);
	goto loc_49FE7A;
}
Fn(void) Game::_sub_49FEF0()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_49FEFF;
	eax = 0xFFFFFFF6; //mov
	return;
loc_49FEFF:
	push32(edx);
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_4B2FD0(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49FF14;
	eax = edx; //mov
	pop32(edx);
	return;
loc_49FF14:
	edx = to8i(byte_4DCEDE); //movsx
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4A0170()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x80);
	ebp = eax; //mov
	to32i(esp+0x7C) = edx; //mov
	esi = ebx; //mov
	inc(to32i(dword_4DABD8));
	test(eax, eax);
	if (jnz())
		goto loc_4A0191;
	ebp = (int32_t)(intptr_t)dword_563900; //mov
loc_4A0191:
	cmp(to32i(dword_4DAB5C), (int32_t)7);
	if (jnz())
		goto loc_4A02C3;
	cmp(to32i(ebp+0x1C), (int32_t)8);
	if (jg())
		goto loc_4A02C3;
	eax = to32i(esp+0x7C); //mov
	add(eax, esi);
	dec(eax);
	edi = to32i(ebp+0x43C); //mov
	to32i(esp+0x78) = eax; //mov
	test(edi, edi);
	if (jz())
		goto loc_4A02CE;
	eax = 1; //mov
loc_4A01C6:
	to32i(esp+0x70) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	edx = (int32_t)(intptr_t)(ebp+0x30); //lea
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	ebx = (int32_t)(intptr_t)(edx+eax); //lea
	add(eax, (int32_t)(intptr_t)dword_570E60);
	test(esi, esi);
	if (jle())
		goto loc_4A020C;
	edx = ebx; //mov
loc_4A01E4:
	xor_(ebx, ebx);
	bl = to8i(eax+1); //mov
	edi = (uint8_t)to8i(eax+2); //movzx
	shl(ebx, (int32_t)8);
	or_(edi, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax); //mov
	add(edx, (int32_t)4);
	shl(ebx, (int32_t)0x10);
	add(eax, (int32_t)4);
	or_(ebx, edi);
	inc(ecx);
	to32i(edx-4) = ebx; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_4A01E4;
loc_4A020C:
	eax = to32i(ebp+0x42E); //mov
	edx = to32i(esp+0x7C); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jle())
		goto loc_4A0228;
	eax = to32i(esp+0x7C); //mov
	to16i(ebp+0x430) = ax; //mov
loc_4A0228:
	eax = to32i(ebp+0x430); //mov
	ecx = to32i(esp+0x78); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4A0244;
	eax = to32i(esp+0x78); //mov
	to16i(ebp+0x432) = ax; //mov
loc_4A0244:
	cmp(to32i(esp+0x70), (int32_t)0);
	if (jz())
		goto loc_4A0257;
	eax = esp; //mov
	esp -= 4; _sub_4A4030(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_4A0257:
	eax = ebp; //mov
	esp -= 4; _sub_491AF0(); esp += 4; //call
	cmp(to8i(ebp+0x45D), (int8_t)0);
	if (jnz())
		goto loc_4A02BC;
	eax = to32i(esp+0x7C); //mov
	edx = (int32_t)(intptr_t)(ebp+0x30); //lea
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	add(edx, eax);
	add(eax, (int32_t)(intptr_t)dword_570E60);
	test(esi, esi);
	if (jle())
		goto loc_4A02BC;
loc_4A027E:
	bl = to8i(edx); //mov
	to8i(eax+2) = bl; //mov
	ebx = to32i(edx); //mov
	shr(ebx, (int32_t)8);
	and_(ebx, (int32_t)0xFF);
	to32i(esp+0x74) = ebx; //mov
	bl = to8i(esp+0x74); //mov
	to8i(eax+1) = bl; //mov
	ebx = to32i(edx); //mov
	shr(ebx, (int32_t)0x10);
	and_(ebx, (int32_t)0xFF);
	add(eax, (int32_t)4);
	to32i(esp+0x74) = ebx; //mov
	add(edx, (int32_t)4);
	bl = to8i(esp+0x74); //mov
	inc(ecx);
	to8i(eax-4) = bl; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_4A027E;
loc_4A02BC:
	cmp(to32i(esp+0x70), (int32_t)0);
	if (jnz())
		goto loc_4A02D5;
loc_4A02C3:
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4A02CE:
	xor_(eax, eax);
	goto loc_4A01C6;
loc_4A02D5:
	eax = esp; //mov
	esp -= 4; _sub_4A4054(); esp += 4; //call
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A02E8()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	eax = ebx; //mov
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
	ebx = ecx; //mov
	add(edx, (int32_t)(intptr_t)dword_570E60);
	esp -= 4; _sub_4A6B2D(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_563900; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4A0170(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A03E0()
{
	push32(ecx);
	push32(esi);
	esi = edx; //mov
	ecx = (int32_t)(intptr_t)dword_570E60; //mov
	shl(eax, (int32_t)2);
	xor_(edx, edx);
	add(ecx, eax);
	test(esi, esi);
	if (jle())
		goto loc_4A0414;
	eax = ecx; //mov
loc_4A03F6:
	inc(ebx);
	cl = to8i(eax+2); //mov
	to8i(ebx-1) = cl; //mov
	inc(ebx);
	cl = to8i(eax+1); //mov
	add(eax, (int32_t)4);
	to8i(ebx-1) = cl; //mov
	inc(ebx);
	cl = to8i(eax-4); //mov
	inc(edx);
	to8i(ebx-1) = cl; //mov
	cmp(edx, esi);
	if (jl())
		goto loc_4A03F6;
loc_4A0414:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A04E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	test(eax, eax);
	if (jl())
		goto loc_4A050C;
	xor_(ebx, ebx);
loc_4A04E9:
	edx = eax; //mov
	sar(edx, (int32_t)7);
	cmp(eax, (int32_t)0xFA00);
	if (jg())
		goto loc_4A0515;
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_4A04FA;
	inc(edx);
loc_4A04FA:
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E01A4[edx]; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A0508;
	neg(eax);
loc_4A0508:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A050C:
	ebx = 1; //mov
	neg(eax);
	goto loc_4A04E9;
loc_4A0515:
	cmp(eax, (int32_t)0x10000);
	if (jl())
		goto loc_4A052B;
	eax = 0x100; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A0508;
	neg(eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A052B:
	ecx = eax; //mov
	and_(ecx, (int32_t)0x7F);
	cmp(edx, (int32_t)0x1FF);
	if (jnz())
		goto loc_4A0558;
	xor_(eax, eax);
	edx = 0x100; //mov
	al = to8i(byte_4E03A3); //mov
	sub(edx, eax);
	imul32(edx, ecx);
	sar(edx, (int32_t)7);
	add(eax, edx);
	test(ebx, ebx);
	if (jz())
		goto loc_4A0508;
	neg(eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A0558:
	push32(esi);
	xor_(eax, eax);
	esi = (uint8_t)byte_4E01A5[edx]; //movzx
	al = (int32_t)(intptr_t)byte_4E01A4[edx]; //mov
	sub(esi, eax);
	imul32(ecx, esi);
	sar(ecx, (int32_t)7);
	add(eax, ecx);
	pop32(esi);
	test(ebx, ebx);
	if (jz())
		goto loc_4A0508;
	neg(eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A0580()
{
	push32(edx);
	edx = 0x100; //mov
	esp -= 4; _sub_4A04E0(); esp += 4; //call
	sub(edx, eax);
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4A05A0()
{
	push32(ecx);
	ecx = to32i(dword_4DAC0C); //mov
	to32i(dword_4DAC14) = eax; //mov
	add(eax, ecx);
	to32i(dword_4DAC1C) = eax; //mov
	eax = to32i(dword_4DAC10); //mov
	to32i(dword_4DAC18) = edx; //mov
	add(edx, eax);
	to32i(dword_4DAC20) = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4A05C8()
{
	push32(esi);
	push32(ebp);
	esi = edx; //mov
	to32i(dword_4DAC34) = edx; //mov
	sar(ebx, (int32_t)1);
	edx = to32i(dword_4DAC14); //mov
	to32i(dword_4DAC30) = eax; //mov
	add(edx, ebx);
	sar(ecx, (int32_t)1);
	to32i(dword_4DAC1C) = edx; //mov
	edx = to32i(dword_4DAC18); //mov
	to32i(dword_4DAC0C) = ebx; //mov
	add(edx, ecx);
	to32i(dword_4DAC10) = ecx; //mov
	to32i(dword_4DAC20) = edx; //mov
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
	ebx = to32i(dword_4DAC0C); //mov
	imul32(ebx, eax);
	eax = to32i(dword_4DAC30); //mov
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
	ecx = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4DAC24) = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_4A06CF;
	eax = to32i(dword_4DAC34); //mov
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
	edx = to32i(dword_4DAC10); //mov
	ebx = eax; //mov
	imul32(ebx, edx);
	eax = to32i(dword_4DAC34); //mov
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
	neg(ebx);
	ecx = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4DAC28) = eax; //mov
	pop32(ebp);
	pop32(esi);
	return;
loc_4A06CF:
	edx = to32i(dword_4DAC38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(dword_4DAC10); //mov
	neg(ebp);
	to32i(dword_4DAC28) = eax; //mov
	eax = ebp; //mov
	to32i(dword_4DAC28) = ebp; //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	to32i(dword_4DAC34) = eax; //mov
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_4A0704()
{
	push32(esi);
	push32(edi);
	edi = eax; //mov
	shl(edx, (int32_t)0xA);
	esi = 0x168; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edx = edi; //mov
	esi = eax; //mov
	shl(edx, (int32_t)0xA);
	edi = 0x168; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edx = esi; //mov
	esp -= 4; _sub_4A05C8(); esp += 4; //call
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A0796()
{
	push32(esi);
	push32(edi);
	push16(es);
	push16(fs);
	push16(gs);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)8);
	edi = eax; //mov
	esi = ecx; //mov
	eax = ebx; //mov
	ebx = to32i(ebp+0x1C); //mov
	to32i(ebp-8) = ebx; //mov
	test(eax, eax);
	if (jz())
		goto locret_4A0800;
	dec(eax);
	imul32(eax, ecx);
	ebx = edx; //mov
	add(edx, eax);
	to32i(ebp-4) = edx; //mov
loc_4A07BC:
	cmp(ebx, to32i(ebp-4));
	if (jnb())
		goto loc_4A07ED;
	eax = to32i(ebp-4); //mov
	xor_(edx, edx);
	sub(eax, ebx);
	div32(esi);
	shr(eax, (int32_t)1);
	imul32(eax, esi);
	ecx = (int32_t)(intptr_t)(ebx+eax); //lea
	edx = ecx; //mov
	eax = edi; //mov
	call(to32i(ebp-8));
	test(eax, eax);
	if (jnz())
		goto loc_4A07E1;
	eax = ecx; //mov
	goto locret_4A0800;
loc_4A07E1:
	if (jge())
		goto loc_4A07E8;
	to32i(ebp-4) = ecx; //mov
	goto loc_4A07BC;
loc_4A07E8:
	ebx = (int32_t)(intptr_t)(ecx+esi); //lea
	goto loc_4A07BC;
loc_4A07ED:
	if (jnz())
		goto loc_4A07FE;
	edx = ebx; //mov
	eax = edi; //mov
	call(to32i(ebp-8));
	test(eax, eax);
	if (jnz())
		goto loc_4A07FE;
	eax = ebx; //mov
	goto locret_4A0800;
loc_4A07FE:
	xor_(eax, eax);
locret_4A0800:
	leave();
	pop16(gs);
	pop16(fs);
	pop16(es);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4A080B()
{
	push32(esi);
	push32(edi);
	push16(es);
	push16(fs);
	push16(gs);
	edi = eax; //mov
	esi = edx; //mov
	call(ecx);
	test(eax, eax);
	if (jle())
		goto loc_4A0838;
	edx = ebx; //mov
	eax = edi; //mov
	call(ecx);
	test(eax, eax);
	if (jle())
		goto loc_4A0834;
	edx = ebx; //mov
	eax = esi; //mov
	call(ecx);
	test(eax, eax);
	if (jg())
		goto loc_4A084C;
loc_4A0830:
	eax = ebx; //mov
	goto loc_4A084E;
loc_4A0834:
	eax = edi; //mov
	goto loc_4A084E;
loc_4A0838:
	edx = ebx; //mov
	eax = edi; //mov
	call(ecx);
	test(eax, eax);
	if (jge())
		goto loc_4A0834;
	edx = ebx; //mov
	eax = esi; //mov
	call(ecx);
	test(eax, eax);
	if (jg())
		goto loc_4A0830;
loc_4A084C:
	eax = esi; //mov
loc_4A084E:
	pop16(gs);
	pop16(fs);
	pop16(es);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A0856()
{
	push16(es);
	push16(ds);
	pop16(es);
	edx = (uint8_t)cl; //movzx
	shr(ecx, (int32_t)2);
	if (jz())
		goto loc_4A086C;
loc_4A0861:
	eax = to32i(edi); //mov
	swap(eax, to32i(esi));
	stosd();
	add(esi, (int32_t)4);
	dec(ecx);
	if (jnz())
		goto loc_4A0861;
loc_4A086C:
	and_(dl, (int8_t)3);
	if (jz())
		goto loc_4A087A;
loc_4A0871:
	al = to8i(edi); //mov
	swap(al, to8i(esi));
	stosb();
	inc(esi);
	dec(edx);
	if (jnz())
		goto loc_4A0871;
loc_4A087A:
	pop16(es);
}
Fn(void) Game::_sub_4A087C()
{
	push32(esi);
	push32(edi);
	push16(es);
	push16(fs);
	push16(gs);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x14C);
	push32(edx);
	push32(ebx);
	to32i(ebp-4) = eax; //mov
	or_(eax, ebx);
	to32i(ebp-0x18) = ecx; //mov
	test(al, (int8_t)3);
	if (jz())
		goto loc_4A089C;
	eax = 2; //mov
	goto loc_4A08A5;
loc_4A089C:
	cmp(ebx, (int32_t)4);
	setnbe(al);
	eax = (uint8_t)al; //movzx
loc_4A08A5:
	to32i(ebp-0x24) = eax; //mov
	imul32(eax, to32i(ebp-0x154), 3);
	to32i(ebp-0x3C) = eax; //mov
	eax = to32i(ebp-0x154); //mov
	add(eax, eax);
	to32i(ebp-0x1C) = 0; //mov
	to32i(ebp-0x44) = eax; //mov
loc_4A08C4:
	cmp(to32i(ebp-0x150), (int32_t)1);
	if (jbe())
		goto loc_4A0959;
	cmp(to32i(ebp-0x150), (int32_t)0x10);
	if (jnb())
		goto loc_4A0985;
	eax = to32i(ebp-0x3C); //mov
	to32i(ebp-0x20) = eax; //mov
	eax = to32i(ebp-0x150); //mov
	imul32(eax, to32i(ebp-0x154));
	edx = to32i(ebp-4); //mov
	add(edx, eax);
	to32i(ebp-0x40) = edx; //mov
	goto loc_4A0953;
loc_4A08FB:
	eax = to32i(ebp-4); //mov
	add(eax, to32i(ebp-0x20));
	to32i(ebp-0x2C) = eax; //mov
	goto loc_4A0945;
loc_4A0906:
	ebx = eax; //mov
	goto loc_4A092A;
loc_4A090A:
	cmp(to32i(ebp-0x24), (int32_t)0);
	if (jz())
		goto loc_4A091F;
	ecx = to32i(ebp-0x154); //mov
	esi = ebx; //mov
	esp -= 4; _sub_4A0856(); esp += 4; //call
	goto loc_4A0927;
loc_4A091F:
	edx = to32i(edi); //mov
	eax = to32i(ebx); //mov
	to32i(ebx) = edx; //mov
	to32i(edi) = eax; //mov
loc_4A0927:
	sub(ebx, to32i(ebp-0x20));
loc_4A092A:
	cmp(ebx, to32i(ebp-4));
	if (jbe())
		goto loc_4A093F;
	edi = ebx; //mov
	sub(edi, to32i(ebp-0x20));
	edx = ebx; //mov
	eax = edi; //mov
	call(to32i(ebp-0x18));
	test(eax, eax);
	if (jg())
		goto loc_4A090A;
loc_4A093F:
	eax = to32i(ebp-0x20); //mov
	add(to32i(ebp-0x2C), eax);
loc_4A0945:
	eax = to32i(ebp-0x2C); //mov
	cmp(eax, to32i(ebp-0x40));
	if (jb())
		goto loc_4A0906;
	eax = to32i(ebp-0x44); //mov
	sub(to32i(ebp-0x20), eax);
loc_4A0953:
	cmp(to32i(ebp-0x20), (int32_t)0);
	if (jg())
		goto loc_4A08FB;
loc_4A0959:
	cmp(to32i(ebp-0x1C), (int32_t)0);
	if (jz())
		goto locret_4A0CA1;
	dec(to32i(ebp-0x1C));
	eax = to32i(ebp-0x1C); //mov
	edx = to32i(ebp+eax*4-0x14C); //mov
	eax = to32i(ebp+eax*4-0xCC); //mov
	to32i(ebp-4) = edx; //mov
	to32i(ebp-0x150) = eax; //mov
	goto loc_4A08C4;
loc_4A0985:
	eax = to32i(ebp-0x150); //mov
	shr(eax, (int32_t)1);
	imul32(eax, to32i(ebp-0x154));
	edi = to32i(ebp-4); //mov
	add(edi, eax);
	cmp(to32i(ebp-0x150), (int32_t)0x1D);
	if (jbe())
		goto loc_4A0A39;
	eax = to32i(ebp-4); //mov
	to32i(ebp-0x38) = eax; //mov
	eax = to32i(ebp-0x150); //mov
	dec(eax);
	imul32(eax, to32i(ebp-0x154));
	esi = to32i(ebp-4); //mov
	add(esi, eax);
	cmp(to32i(ebp-0x150), (int32_t)0x2A);
	if (jbe())
		goto loc_4A0A28;
	eax = to32i(ebp-0x150); //mov
	edx = to32i(ebp-0x154); //mov
	shr(eax, (int32_t)3);
	imul32(edx, eax);
	ebx = to32i(ebp-4); //mov
	to32i(ebp-0x28) = edx; //mov
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	ecx = to32i(ebp-0x18); //mov
	edx = to32i(ebp-4); //mov
	to32i(ebp-0x48) = eax; //mov
	add(ebx, eax);
	eax = to32i(ebp-4); //mov
	add(edx, to32i(ebp-0x28));
	esp -= 4; _sub_4A080B(); esp += 4; //call
	ebx = to32i(ebp-0x28); //mov
	ecx = to32i(ebp-0x18); //mov
	to32i(ebp-0x38) = eax; //mov
	edx = edi; //mov
	eax = edi; //mov
	add(ebx, edi);
	sub(eax, to32i(ebp-0x28));
	esp -= 4; _sub_4A080B(); esp += 4; //call
	ecx = to32i(ebp-0x18); //mov
	edi = eax; //mov
	edx = esi; //mov
	ebx = esi; //mov
	eax = esi; //mov
	sub(edx, to32i(ebp-0x28));
	sub(eax, to32i(ebp-0x48));
	esp -= 4; _sub_4A080B(); esp += 4; //call
	esi = eax; //mov
loc_4A0A28:
	ecx = to32i(ebp-0x18); //mov
	eax = to32i(ebp-0x38); //mov
	ebx = esi; //mov
	edx = edi; //mov
	esp -= 4; _sub_4A080B(); esp += 4; //call
	edi = eax; //mov
loc_4A0A39:
	cmp(to32i(ebp-0x24), (int32_t)0);
	if (jz())
		goto loc_4A0A63;
	eax = to32i(ebp-4); //mov
	to32i(ebp-0x30) = eax; //mov
	if (jz())
		goto loc_4A0A56;
	ecx = to32i(ebp-0x154); //mov
	esi = eax; //mov
	esp -= 4; _sub_4A0856(); esp += 4; //call
	goto loc_4A0A6E;
loc_4A0A56:
	ebx = to32i(ebp-4); //mov
	edx = to32i(eax); //mov
	eax = to32i(edi); //mov
	to32i(ebx) = eax; //mov
	to32i(edi) = edx; //mov
	goto loc_4A0A6E;
loc_4A0A63:
	eax = (int32_t)(intptr_t)(ebp-0x4C); //lea
	to32i(ebp-0x30) = eax; //mov
	eax = to32i(edi); //mov
	to32i(ebp-0x4C) = eax; //mov
loc_4A0A6E:
	eax = to32i(ebp-0x150); //mov
	dec(eax);
	imul32(eax, to32i(ebp-0x154));
	ebx = to32i(ebp-4); //mov
	to32i(ebp-0x14) = ebx; //mov
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(ebp-0x150); //mov
	to32i(ebp-0x10) = edx; //mov
	to32i(ebp-8) = edx; //mov
	to32i(ebp-0xC) = eax; //mov
loc_4A0A94:
	cmp(to32i(ebp-0xC), (int32_t)0);
	if (jz())
		goto loc_4A0AE2;
	edx = to32i(ebp-0x30); //mov
	eax = ebx; //mov
	call(to32i(ebp-0x18));
	test(eax, eax);
	if (jg())
		goto loc_4A0AE2;
	if (jnz())
		goto loc_4A0AD7;
	cmp(to32i(ebp-0x24), (int32_t)0);
	if (jz())
		goto loc_4A0AC0;
	ecx = to32i(ebp-0x154); //mov
	esi = to32i(ebp-0x14); //mov
	edi = ebx; //mov
	esp -= 4; _sub_4A0856(); esp += 4; //call
	goto loc_4A0ACE;
loc_4A0AC0:
	edx = to32i(ebp-0x14); //mov
	ecx = to32i(ebp-0x14); //mov
	eax = to32i(ebx); //mov
	edx = to32i(edx); //mov
	to32i(ecx) = eax; //mov
	to32i(ebx) = edx; //mov
loc_4A0ACE:
	eax = to32i(ebp-0x154); //mov
	add(to32i(ebp-0x14), eax);
loc_4A0AD7:
	dec(to32i(ebp-0xC));
	add(ebx, to32i(ebp-0x154));
	goto loc_4A0A94;
loc_4A0AE2:
	cmp(to32i(ebp-0xC), (int32_t)0);
	if (jz())
		goto loc_4A0B3B;
	edx = to32i(ebp-0x30); //mov
	eax = to32i(ebp-8); //mov
	call(to32i(ebp-0x18));
	test(eax, eax);
	if (jl())
		goto loc_4A0B3B;
	if (jnz())
		goto loc_4A0B2D;
	cmp(to32i(ebp-0x24), (int32_t)0);
	if (jz())
		goto loc_4A0B10;
	ecx = to32i(ebp-0x154); //mov
	edi = to32i(ebp-0x10); //mov
	esi = to32i(ebp-8); //mov
	esp -= 4; _sub_4A0856(); esp += 4; //call
	goto loc_4A0B24;
loc_4A0B10:
	eax = to32i(ebp-0x10); //mov
	edx = to32i(ebp-8); //mov
	ecx = to32i(ebp-8); //mov
	eax = to32i(eax); //mov
	edx = to32i(edx); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(ebp-0x10); //mov
	to32i(eax) = edx; //mov
loc_4A0B24:
	eax = to32i(ebp-0x154); //mov
	sub(to32i(ebp-0x10), eax);
loc_4A0B2D:
	eax = to32i(ebp-0x154); //mov
	dec(to32i(ebp-0xC));
	sub(to32i(ebp-8), eax);
	goto loc_4A0AE2;
loc_4A0B3B:
	cmp(to32i(ebp-0xC), (int32_t)0);
	if (jz())
		goto loc_4A0B83;
	cmp(to32i(ebp-0x24), (int32_t)0);
	if (jz())
		goto loc_4A0B59;
	ecx = to32i(ebp-0x154); //mov
	edi = to32i(ebp-8); //mov
	esi = ebx; //mov
	esp -= 4; _sub_4A0856(); esp += 4; //call
	goto loc_4A0B67;
loc_4A0B59:
	eax = to32i(ebp-8); //mov
	eax = to32i(eax); //mov
	edx = to32i(ebx); //mov
	to32i(ebx) = eax; //mov
	eax = to32i(ebp-8); //mov
	to32i(eax) = edx; //mov
loc_4A0B67:
	add(ebx, to32i(ebp-0x154));
	dec(to32i(ebp-0xC));
	if (jz())
		goto loc_4A0B83;
	eax = to32i(ebp-0x154); //mov
	dec(to32i(ebp-0xC));
	sub(to32i(ebp-8), eax);
	goto loc_4A0A94;
loc_4A0B83:
	eax = to32i(ebp-0x150); //mov
	imul32(eax, to32i(ebp-0x154));
	edx = to32i(ebp-4); //mov
	ecx = ebx; //mov
	add(edx, eax);
	eax = to32i(ebp-0x14); //mov
	sub(ecx, to32i(ebp-0x14));
	sub(eax, to32i(ebp-4));
	to32i(ebp-0x34) = edx; //mov
	cmp(eax, ecx);
	if (jge())
		goto loc_4A0BA9;
	ecx = eax; //mov
loc_4A0BA9:
	test(ecx, ecx);
	if (jbe())
		goto loc_4A0BD9;
	edi = ebx; //mov
	esi = to32i(ebp-4); //mov
	sub(edi, ecx);
	push16(es);
	push16(ds);
	pop16(es);
	edx = (uint8_t)cl; //movzx
	shr(ecx, (int32_t)2);
	if (jz())
		goto loc_4A0BCA;
loc_4A0BBF:
	eax = to32i(edi); //mov
	swap(eax, to32i(esi));
	stosd();
	add(esi, (int32_t)4);
	dec(ecx);
	if (jnz())
		goto loc_4A0BBF;
loc_4A0BCA:
	and_(dl, (int8_t)3);
	if (jz())
		goto loc_4A0BD8;
loc_4A0BCF:
	al = to8i(edi); //mov
	swap(al, to8i(esi));
	stosb();
	inc(esi);
	dec(edx);
	if (jnz())
		goto loc_4A0BCF;
loc_4A0BD8:
	pop16(es);
loc_4A0BD9:
	eax = to32i(ebp-0x34); //mov
	ecx = to32i(ebp-0x10); //mov
	sub(eax, to32i(ebp-0x10));
	sub(ecx, to32i(ebp-8));
	sub(eax, to32i(ebp-0x154));
	cmp(ecx, eax);
	if (jb())
		goto loc_4A0BF1;
	ecx = eax; //mov
loc_4A0BF1:
	test(ecx, ecx);
	if (jbe())
		goto loc_4A0C21;
	edi = to32i(ebp-0x34); //mov
	esi = ebx; //mov
	sub(edi, ecx);
	push16(es);
	push16(ds);
	pop16(es);
	edx = (uint8_t)cl; //movzx
	shr(ecx, (int32_t)2);
	if (jz())
		goto loc_4A0C12;
loc_4A0C07:
	eax = to32i(edi); //mov
	swap(eax, to32i(esi));
	stosd();
	add(esi, (int32_t)4);
	dec(ecx);
	if (jnz())
		goto loc_4A0C07;
loc_4A0C12:
	and_(dl, (int8_t)3);
	if (jz())
		goto loc_4A0C20;
loc_4A0C17:
	al = to8i(edi); //mov
	swap(al, to8i(esi));
	stosb();
	inc(esi);
	dec(edx);
	if (jnz())
		goto loc_4A0C17;
loc_4A0C20:
	pop16(es);
loc_4A0C21:
	edi = to32i(ebp-0x10); //mov
	ecx = to32i(ebp-0x34); //mov
	esi = ebx; //mov
	ebx = to32i(ebp-0x1C); //mov
	sub(esi, to32i(ebp-0x14));
	sub(edi, to32i(ebp-8));
	shl(ebx, (int32_t)2);
	sub(ecx, edi);
	cmp(edi, esi);
	if (jb())
		goto loc_4A0C5F;
	eax = edi; //mov
	xor_(edx, edx);
	div32(to32i(ebp-0x154));
	xor_(edx, edx);
	to32i(ebx+ebp-0xCC) = eax; //mov
	eax = esi; //mov
	div32(to32i(ebp-0x154));
	to32i(ebx+ebp-0x14C) = ecx; //mov
	goto loc_4A0C93;
loc_4A0C5F:
	cmp(esi, to32i(ebp-0x154));
	if (jbe())
		goto loc_4A0959;
	eax = to32i(ebp-4); //mov
	xor_(edx, edx);
	to32i(ebx+ebp-0x14C) = eax; //mov
	eax = esi; //mov
	div32(to32i(ebp-0x154));
	xor_(edx, edx);
	to32i(ebx+ebp-0xCC) = eax; //mov
	eax = edi; //mov
	div32(to32i(ebp-0x154));
	to32i(ebp-4) = ecx; //mov
loc_4A0C93:
	to32i(ebp-0x150) = eax; //mov
	inc(to32i(ebp-0x1C));
	goto loc_4A08C4;
locret_4A0CA1:
	leave();
	pop16(gs);
	pop16(fs);
	pop16(es);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A1080()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_4A1090()
{
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)0x1400);
	esi = edx; //mov
	ecx = ebx; //mov
	edx = esp; //mov
	call(to32i(dword_571264));
	eax = esp; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	call(to32i(dword_571260));
	add(esp, (int32_t)0x1400);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A10BC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	esi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x24) = ebx; //mov
	edi = ecx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	ebp = (uint8_t)to8i(byte_4DB25D); //movzx
	eax = to32i(ecx+0x18); //mov
	xor_(edx, edx);
	ebx = to32i(ecx+0x20); //mov
	to32i(esp+8) = edx; //mov
	to32i(esp+0x10) = eax; //mov
	to32i(dword_571264) = edx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A10FC;
	ebp = ebx; //mov
loc_4A10FC:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jnz())
		goto loc_4A1143;
	eax = to32i(esi); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, ebp);
	if (jz())
		goto loc_4A1143;
	cmp(to32i(edi+0x1C), (int32_t)2);
	if (jz())
		goto loc_4A137C;
	ebx = 1; //mov
loc_4A111D:
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_499FDC(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4A1383;
	cmp(to32i(edi+0x1C), (int32_t)2);
	if (jz())
		goto loc_4A1143;
	to32i(dword_571264) = eax; //mov
	xor_(eax, eax);
	to32i(esp+0x10) = eax; //mov
loc_4A1143:
	ecx = (int32_t)(intptr_t)(esi+0x10); //lea
	ebp = to32i(esi+2); //mov
	eax = esi; //mov
	edx = to32i(esi+4); //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	inc(eax);
	and_(al, (int8_t)0xFE);
	sar(ebp, (int32_t)0x10);
	ebx = eax; //mov
	eax = ebp; //mov
	imul32(eax, ebx);
	sar(eax, (int32_t)3);
	to32i(esp+4) = eax; //mov
	eax = esi; //mov
	esi = to32i(esp+4); //mov
	esp -= 4; _sub_4A96A0(); esp += 4; //call
	sub(eax, esi);
	esi = to32i(esp+0x24); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(dword_4DB250); //mov
	sub(eax, esi);
	sar(edx, (int32_t)0x10);
	test(eax, eax);
	if (jle())
		goto loc_4A11A5;
	esi = to32i(esp+4); //mov
	imul32(esi, eax);
	add(ecx, esi);
	esi = to32i(esp+0x24); //mov
	add(esi, eax);
	sub(edx, eax);
	to32i(esp+0x24) = esi; //mov
loc_4A11A5:
	eax = to32i(esp+0x24); //mov
	esi = to32i(dword_4DB258); //mov
	add(eax, edx);
	sub(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_4A11B9;
	sub(edx, eax);
loc_4A11B9:
	esi = to32i(esp+0xC); //mov
	eax = to32i(dword_4DB24C); //mov
	sub(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_4A11E8;
	esi = eax; //mov
	imul32(esi, ebx);
	sar(esi, (int32_t)3);
	to32i(esp) = esi; //mov
	add(ecx, esi);
	esi = to32i(esp+0xC); //mov
	sub(ebp, eax);
	add(esi, eax);
	eax = to32i(esp); //mov
	to32i(esp+0xC) = esi; //mov
	add(to32i(esp+0x20), eax);
loc_4A11E8:
	eax = to32i(esp+0xC); //mov
	esi = to32i(dword_4DB254); //mov
	add(eax, ebp);
	sub(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_4A1208;
	esi = eax; //mov
	imul32(esi, ebx);
	sar(esi, (int32_t)3);
	sub(ebp, eax);
	add(to32i(esp+0x20), esi);
loc_4A1208:
	test(ebp, ebp);
	if (jle())
		goto loc_4A1369;
	test(edx, edx);
	if (jle())
		goto loc_4A1369;
	imul32(ebx, ebp);
	eax = to32i(dword_4DB260); //mov
	to32i(esp+0x34) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_4DB25C); //mov
	inc(eax);
	and_(al, (int8_t)0xFE);
	imul32(eax, ebp);
	sar(ebx, (int32_t)3);
	sar(eax, (int32_t)3);
	to32i(esp+0x18) = ebx; //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp+0x24); //mov
	ebx = to32i(dword_4DB26C); //mov
	shl(eax, (int32_t)2);
	add(ebx, eax);
	eax = to32i(esp+0xC); //mov
	esi = to32i(dword_4DB270); //mov
	shl(eax, (int32_t)2);
	add(eax, esi);
	esi = to32i(ebx); //mov
	ebx = to32i(eax); //mov
	eax = to32i(dword_4DB268); //mov
	add(esi, ebx);
	ebx = to32i(esp+0x1C); //mov
	sub(eax, ebx);
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x28) = edx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A13C4;
	al = to8i(byte_4DB25C); //mov
	cmp(al, (int8_t)0xF);
	if (jnb())
		goto loc_4A13CD;
	cmp(al, (int8_t)4);
	if (jnb())
		goto loc_4A1415;
loc_4A1297:
	cmp(to32i(dword_571264), (int32_t)0);
	if (jnz())
		goto loc_4A1436;
loc_4A12A4:
	eax = to32i(esp+0x1C); //mov
	add(eax, to32i(esp+0x14));
	edx = to32i(esp+0x20); //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esp+0x18); //mov
	add(eax, edx);
	to32i(esp+0x2C) = eax; //mov
loc_4A12BE:
	edi = to32i(esp+0x28); //mov
	test(edi, edi);
	if (jz())
		goto loc_4A1320;
	edx = to32i(esp+0x24); //mov
	eax = to32i(dword_4DB274); //mov
	ebx = edi; //mov
	add(edx, edi);
	sub(ebx, edi);
	to32i(esp+0x24) = edx; //mov
	to32i(esp+0x28) = ebx; //mov
	test(eax, eax);
	if (jz())
		goto loc_4A1465;
	xor_(ebx, ebx);
	to32i(esp+0x3C) = ebx; //mov
loc_4A12EB:
	edx = to32i(esp+0x34); //mov
	ebx = ebp; //mov
	eax = ecx; //mov
	add(edx, esi);
	call(to32i(esp+0x38));
	ebx = to32i(esp+0x30); //mov
	eax = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x3C); //mov
	add(esi, ebx);
	add(ecx, eax);
	add(edx, ebp);
	ebx = to32i(dword_4DABE0); //mov
	to32i(esp+0x3C) = edx; //mov
	cmp(edx, ebx);
	if (jg())
		goto loc_4A144D;
loc_4A131D:
	dec(edi);
	if (jnz())
		goto loc_4A12EB;
loc_4A1320:
	edx = to32i(esp+0x28); //mov
	test(edx, edx);
	if (jz())
		goto loc_4A135E;
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	eax = ecx; //mov
	edx = to32i(esp+0x34); //mov
	to32i(esp+0x28) = ebx; //mov
	ebx = ebp; //mov
	add(edx, esi);
	edi = to32i(esp+0x1C); //mov
	call(to32i(esp+0x38));
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x20); //mov
	add(esi, edi);
	edi = to32i(esp+0x24); //mov
	add(ecx, eax);
	add(esi, edx);
	inc(edi);
	add(ecx, ebx);
	to32i(esp+0x24) = edi; //mov
loc_4A135E:
	cmp(to32i(esp+0x28), (int32_t)0);
	if (jg())
		goto loc_4A12BE;
loc_4A1369:
	edx = to32i(esp+8); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A14C5;
loc_4A1375:
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4A137C:
	xor_(ebx, ebx);
	goto loc_4A111D;
loc_4A1383:
	cmp(to32i(edi+0x1C), (int32_t)2);
	if (jz())
		goto loc_4A13AA;
	ecx = 1; //mov
loc_4A138E:
	ebx = to32i(edi+0x1C); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_4A13AE;
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_49A118(); esp += 4; //call
	to32i(esp+8) = eax; //mov
	esi = eax; //mov
	goto loc_4A1143;
loc_4A13AA:
	xor_(ecx, ecx);
	goto loc_4A138E;
loc_4A13AE:
	xor_(ebx, ebx);
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_49A118(); esp += 4; //call
	to32i(esp+8) = eax; //mov
	esi = eax; //mov
	goto loc_4A1143;
loc_4A13C4:
	to32i(esp+0x38) = eax; //mov
	goto loc_4A12A4;
loc_4A13CD:
	if (ja())
		goto loc_4A13DB;
	eax = to32i(edi+8); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A13DB:
	cmp(al, (int8_t)0x18);
	if (jnb())
		goto loc_4A13F3;
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_4A1297;
	eax = to32i(edi+0xC); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A13F3:
	if (ja())
		goto loc_4A1401;
	eax = to32i(edi+0x10); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A1401:
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_4A1297;
	eax = to32i(edi+0x14); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A1415:
	if (ja())
		goto loc_4A1422;
	eax = to32i(edi); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A1422:
	cmp(al, (int8_t)8);
	if (jnz())
		goto loc_4A1297;
	eax = to32i(edi+4); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_4A1297;
loc_4A1436:
	eax = to32i(esp+0x38); //mov
	ebx = (int32_t)(intptr_t)sub_4A1090; //mov
	to32i(dword_571260) = eax; //mov
	to32i(esp+0x38) = ebx; //mov
	goto loc_4A12A4;
loc_4A144D:
	xor_(eax, eax);
	to32i(esp+0x3C) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4A1375;
	goto loc_4A131D;
loc_4A1465:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jz())
		goto loc_4A148E;
loc_4A146C:
	edx = to32i(esp+0x34); //mov
	ebx = ebp; //mov
	eax = ecx; //mov
	add(edx, esi);
	call(to32i(esp+0x38));
	eax = to32i(esp+0x30); //mov
	edx = to32i(esp+0x2C); //mov
	add(esi, eax);
	add(ecx, edx);
	dec(edi);
	if (jnz())
		goto loc_4A146C;
	goto loc_4A1320;
loc_4A148E:
	cmp(to32i(esp+0x20), (int32_t)0);
	if (jnz())
		goto loc_4A146C;
	cmp(to32i(esp+0x38), (int32_t)(intptr_t)sub_4A1090);
	if (jz())
		goto loc_4A146C;
	ebx = ebp; //mov
	imul32(ebx, edi);
	edx = to32i(esp+0x34); //mov
	eax = ecx; //mov
	add(edx, esi);
	call(to32i(esp+0x38));
	eax = to32i(esp+0x1C); //mov
	imul32(eax, edi);
	imul32(edi, to32i(esp+0x18));
	add(esi, eax);
	add(ecx, edi);
	goto loc_4A1320;
loc_4A14C5:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A14D4()
{
	swap(eax, edx);
	_sub_4A14D5(); return; //jmp
}
Fn(void) Game::_sub_4A14D5()
{
	push32(ecx);
	test(eax, (int32_t)3);
	if (jnz())
		goto loc_4A157A;
loc_4A14E1:
	sub(ebx, (int32_t)0x20);
	if (js())
		goto loc_4A151F;
loc_4A14E6:
	ecx = to32i(edx); //mov
	to32i(eax) = ecx; //mov
	ecx = to32i(edx+4); //mov
	to32i(eax+4) = ecx; //mov
	ecx = to32i(edx+8); //mov
	to32i(eax+8) = ecx; //mov
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0xC) = ecx; //mov
	ecx = to32i(edx+0x10); //mov
	to32i(eax+0x10) = ecx; //mov
	ecx = to32i(edx+0x14); //mov
	to32i(eax+0x14) = ecx; //mov
	ecx = to32i(edx+0x18); //mov
	to32i(eax+0x18) = ecx; //mov
	ecx = to32i(edx+0x1C); //mov
	to32i(eax+0x1C) = ecx; //mov
	edx = (int32_t)(intptr_t)(edx+0x20); //lea
	eax = (int32_t)(intptr_t)(eax+0x20); //lea
	sub(ebx, (int32_t)0x20);
	if (jns())
		goto loc_4A14E6;
loc_4A151F:
	add(ebx, (int32_t)0x18);
	if (js())
		goto loc_4A1539;
loc_4A1524:
	ecx = to32i(edx); //mov
	to32i(eax) = ecx; //mov
	ecx = to32i(edx+4); //mov
	to32i(eax+4) = ecx; //mov
	edx = (int32_t)(intptr_t)(edx+8); //lea
	eax = (int32_t)(intptr_t)(eax+8); //lea
	sub(ebx, (int32_t)8);
	if (jns())
		goto loc_4A1524;
loc_4A1539:
	add(ebx, (int32_t)8);
	if (jnz())
		goto loc_4A1540;
	pop32(ecx);
	return;
loc_4A1540:
	cmp(ebx, (int32_t)4);
	if (jb())
		goto loc_4A1552;
	ecx = to32i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	to32i(eax) = ecx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	sub(ebx, (int32_t)4);
loc_4A1552:
	cmp(ebx, (int32_t)2);
	if (jb())
		goto loc_4A1566;
	cx = to16i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	to16i(eax) = cx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	sub(ebx, (int32_t)2);
loc_4A1566:
	cmp(ebx, (int32_t)1);
	if (jb())
		goto loc_4A1578;
	cl = to8i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+1); //lea
	to8i(eax) = cl; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	sub(ebx, (int32_t)1);
loc_4A1578:
	pop32(ecx);
	return;
loc_4A157A:
	test(eax, (int32_t)1);
	if (jz())
		goto loc_4A1593;
	cmp(ebx, (int32_t)1);
	if (jl())
		goto loc_4A1593;
	cl = to8i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+1); //lea
	to8i(eax) = cl; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	sub(ebx, (int32_t)1);
loc_4A1593:
	test(eax, (int32_t)2);
	if (jz())
		goto loc_4A15AE;
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_4A15AE;
	cx = to16i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	to16i(eax) = cx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	sub(ebx, (int32_t)2);
loc_4A15AE:
	test(eax, (int32_t)4);
	if (jz())
		goto loc_4A15C7;
	cmp(ebx, (int32_t)4);
	if (jl())
		goto loc_4A15C7;
	ecx = to32i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	to32i(eax) = ecx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	sub(ebx, (int32_t)4);
loc_4A15C7:
	goto loc_4A14E1;
}
Fn(void) Game::_sub_4A3DB0()
{
	push32(ecx);
	push32(edx);
	eax = SDL_GetTicks_wrap();
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A3DBC()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(ebp);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	edx = to32i(dword_59BF94); //mov
	to32i(dword_4DDA70) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4A3E27;
loc_4A3DD4:
	eax = to32i(dword_4DDA70); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	ebx = to32i(dword_59BF94); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A3E1E;
	eax = ebx; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	esi = to32i(dword_59BF60); //mov
	xor_(edx, edx);
	test(esi, esi);
	if (jz())
		goto loc_4A3E14;
loc_4A3DFB:
	eax = edx; //mov
	add(edx, (int32_t)4);
	call(to32i(dword_59BF60+eax));
	cmp(edx, (int32_t)0x20);
	if (jge())
		goto loc_4A3E14;
	cmp(to32i(dword_59BF60+edx), (int32_t)0);
	if (jnz())
		goto loc_4A3DFB;
loc_4A3E14:
	eax = to32i(dword_59BF94); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_4A3E1E:
	cmp(to32i(dword_59BF94), (int32_t)0);
	if (jnz())
		goto loc_4A3DD4;
loc_4A3E27:
	eax = to32i(dword_4DDA70); //mov
	xor_(ebp, ebp);
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_4DDA70) = ebp; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A3E40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = to32i(dword_59BF94); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A3E51;
loc_4A3E4D:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A3E51:
	eax = edx; //mov
	ecx = edx; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)dword_59BF80; //mov
	edx = to32i(dword_4DDA70); //mov
	to32i(dword_59BF94) = ebx; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_59BF80; //mov
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A3E4D;
	xor_(edx, edx);
loc_4A3E90:
	cmp(edx, to32i(dword_4DDA70));
	if (jz())
		goto loc_4A3E4D;
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_4A3E90;
}
Fn(void) Game::_sub_4A3EA4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	eax = (int32_t)(intptr_t)sub_4A3E40; //mov
	ecx = 0xFFFFFFFF; //mov
	ebx = 2; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_59BF94) = eax; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(dword_59BF80);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)sub_4A3DBC; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A3EF5;
	eax = to32i(dword_59BF94); //mov
	xor_(edx, edx);
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(dword_59BF94) = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A3EF5:
	eax = to32i(dword_59BF94); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A3F04()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	edx = to32i(dword_59BF94); //mov
	ecx = 0xFFFFFFFF; //mov
	test(edx, edx);
	if (jz())
		goto loc_4A3F5E;
loc_4A3F18:
	eax = to32i(dword_59BF94); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
loc_4A3F26:
	cmp(to32i(dword_59BF60+edx), (int32_t)0);
	if (jnz())
		goto loc_4A3F33;
	test(ecx, ecx);
	if (jl())
		goto loc_4A3F65;
loc_4A3F33:
	cmp(ebx, to32i(dword_59BF60+edx));
	if (jz())
		goto loc_4A3F50;
loc_4A3F3B:
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)8);
	if (jl())
		goto loc_4A3F26;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4A3F50;
	to32i(dword_59BF60+ecx*4) = ebx; //mov
loc_4A3F50:
	eax = to32i(dword_59BF94); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A3F5E:
	esp -= 4; _sub_4A3EA4(); esp += 4; //call
	goto loc_4A3F18;
loc_4A3F65:
	ecx = eax; //mov
	goto loc_4A3F3B;
}
Fn(void) Game::_sub_4A3F6C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(dword_59BF94); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A3F81;
loc_4A3F7C:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A3F81:
	eax = edx; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ebx = to32i(dword_59BF60); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	cmp(ecx, ebx);
	if (jz())
		goto loc_4A3FA7;
loc_4A3F96:
	add(eax, (int32_t)4);
	inc(edx);
	cmp(eax, (int32_t)0x20);
	if (jge())
		goto loc_4A3FA7;
	cmp(ecx, to32i(dword_59BF60+eax));
	if (jnz())
		goto loc_4A3F96;
loc_4A3FA7:
	cmp(edx, (int32_t)8);
	if (jge())
		goto loc_4A3FDC;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	cmp(ecx, to32i(dword_59BF60+eax));
	if (jnz())
		goto loc_4A3FDC;
	cmp(edx, (int32_t)7);
	if (jge())
		goto loc_4A3FD4;
loc_4A3FC0:
	add(eax, (int32_t)4);
	edx = to32i(dword_59BF60+eax); //mov
	to32i(dword_59BF5C+eax) = edx; //mov
	cmp(eax, (int32_t)0x1C);
	if (jl())
		goto loc_4A3FC0;
loc_4A3FD4:
	xor_(ebp, ebp);
	to32i(dword_59BF7C) = ebp; //mov
loc_4A3FDC:
	eax = to32i(dword_59BF94); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edx = to32i(dword_59BF60); //mov
	xor_(eax, eax);
	test(edx, edx);
loc_4A3FF0:
	if (jnz())
		goto loc_4A3F7C;
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x20);
	if (jge())
		goto loc_4A4003;
	cmp(to32i(dword_59BF60+eax), (int32_t)0);
	goto loc_4A3FF0;
loc_4A4003:
	esp -= 4; _sub_4A3E40(); esp += 4; //call
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4030()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0xE; //mov
	esi = (int32_t)(intptr_t)dword_4DB240; //mov
	edi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xE; //mov
	esi = (int32_t)(intptr_t)dword_4DB278; //mov
	edi = (int32_t)(intptr_t)(eax+0x38); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A4054()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	ecx = 0xE; //mov
	edi = (int32_t)(intptr_t)dword_4DB278; //mov
	esp -= 4; _sub_48259C(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esi+0x38); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_vsprintf_()
{
	push32(ecx);
	push32(ebx);
	push32(edx);
	push32(eax);
	eax = vsprintf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	add(esp, (int32_t)0xC);
	pop32(ecx);
}
Fn(void) Game::_sub_4A40A0()
{
	cmp(to32i(dword_59BF98), (int32_t)0);
	if (jz())
		goto loc_4A40AF;
	eax = (int32_t)(intptr_t)dword_59BF98; //mov
	return;
loc_4A40AF:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_59BF98) = eax; //mov
	eax = (int32_t)(intptr_t)dword_59BF98; //mov
}
Fn(void) Game::_sub_4A40C0()
{
	eax = to32i(eax); //mov
	_sub_489F48(); return; //jmp
}
Fn(void) Game::_sub_4A40C8()
{
	eax = to32i(eax); //mov
	_sub_489F60(); return; //jmp
}
Fn(void) Game::_sub_4A40D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	bl = to8i(eax); //mov
	edx = eax; //mov
	test(bl, bl);
	if (jz())
		goto loc_4A40ED;
loc_4A40DB:
	cl = to8i(eax); //mov
	cmp(cl, (int8_t)0x5C);
	if (jnz())
		goto loc_4A40F3;
loc_4A40E2:
	edx = (int32_t)(intptr_t)(eax+1); //lea
	bh = to8i(eax+1); //mov
	inc(eax);
	test(bh, bh);
	if (jnz())
		goto loc_4A40DB;
loc_4A40ED:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A40F3:
	cmp(cl, (int8_t)0x3A);
	if (jz())
		goto loc_4A40E2;
	cmp(cl, (int8_t)0x2F);
	if (jz())
		goto loc_4A40E2;
	bh = to8i(eax+1); //mov
	inc(eax);
	test(bh, bh);
	if (jnz())
		goto loc_4A40DB;
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4110()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	or_(to8i(edx+0x19), (int8_t)0x40);
	ebx = 4; //mov
	ecx = to32i(edx+0x14); //mov
	eax = to32i(edx); //mov
	edx = 0x42454E44; //mov
	add(eax, ecx);
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4248()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = edx; //mov
	xor_(edx, edx);
	ecx = to32i(eax+0x24); //mov
	to32i(esp+4) = edx; //mov
	esi = ecx; //mov
	edx = to32i(eax); //mov
loc_4A4261:
	xor_(ebp, ebp);
loc_4A4263:
	eax = to32i(ecx); //mov
	ebx = to32i(ecx+0x10); //mov
	add(ebx, eax);
	cmp(ebx, edx);
	if (jnb())
		goto loc_4A4289;
	ebp = edx; //mov
	esi = ecx; //mov
	edx = ebx; //mov
	sub(ebp, ebx);
loc_4A4276:
	test(ebp, ebp);
	if (jz())
		goto loc_4A4294;
loc_4A427A:
	cmp(esi, edi);
	if (jz())
		goto loc_4A4294;
	test(to8i(esi+0x18), (int8_t)0x18);
	if (jnz())
		goto loc_4A42A1;
	esi = to32i(esi+0x24); //mov
	goto loc_4A427A;
loc_4A4289:
	cmp(ecx, edi);
	if (jz())
		goto loc_4A4276;
	edx = eax; //mov
	ecx = to32i(ecx+0x24); //mov
	goto loc_4A4263;
loc_4A4294:
	eax = to32i(esp+4); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A42A1:
	eax = to32i(esi); //mov
	ebx = to32i(esi+0x10); //mov
	add(ebx, eax);
	to32i(esp) = ebx; //mov
	ebx = (int32_t)(intptr_t)(edx+ebp); //lea
	to32i(esp+8) = ebx; //mov
	cmp(edx, to32i(esp));
	if (jz())
		goto loc_4A42C9;
	edx = to32i(esi+0x10); //mov
	cmp(ebp, edx);
	if (jge())
		goto loc_4A42ED;
	edx = to32i(ecx); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_4A4294;
	ecx = to32i(ecx+0x24); //mov
	goto loc_4A4261;
loc_4A42C9:
	ebp = to32i(esp+8); //mov
	edx = to32i(esi+0x10); //mov
	sub(ebp, edx);
	ebx = edx; //mov
	edx = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 1; //mov
	edx = ebp; //mov
	to32i(esi) = ebp; //mov
	to32i(esp+4) = ebx; //mov
	goto loc_4A4261;
loc_4A42ED:
	ebp = to32i(esp+8); //mov
	sub(ebp, edx);
	ebx = edx; //mov
	edx = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	edx = to32i(esi+0x20); //mov
	to32i(esi) = ebp; //mov
	to32i(eax+0x20) = edx; //mov
	eax = to32i(esi+0x24); //mov
	to32i(edx+0x24) = eax; //mov
	eax = to32i(ecx+0x20); //mov
	to32i(esi+0x20) = eax; //mov
	to32i(esi+0x24) = ecx; //mov
	eax = to32i(ecx+0x20); //mov
	to32i(eax+0x24) = esi; //mov
	ebp = 1; //mov
	to32i(ecx+0x20) = esi; //mov
	to32i(esp+4) = ebp; //mov
	edx = to32i(esi); //mov
	goto loc_4A4261;
}
Fn(void) Game::_sub_4A4358()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ebp = edx; //mov
	edi = to32i(eax); //mov
	edx = to32i(eax+0x10); //mov
	ecx = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esi = ecx; //mov
loc_4A436D:
	add(edi, edx);
loc_4A436F:
	edx = to32i(ecx); //mov
	xor_(eax, eax);
	cmp(edi, edx);
loc_4A4375:
	if (jb())
		goto loc_4A438E;
	cmp(ecx, ebp);
	if (jnz())
		goto loc_4A4396;
loc_4A437B:
	test(eax, eax);
	if (jz())
		goto loc_4A43A4;
loc_4A437F:
	cmp(esi, ebp);
	if (jz())
		goto loc_4A43A4;
	test(to8i(esi+0x18), (int8_t)0x18);
	if (jnz())
		goto loc_4A43AC;
	esi = to32i(esi+0x20); //mov
	goto loc_4A437F;
loc_4A438E:
	eax = to32i(ecx); //mov
	esi = ecx; //mov
	sub(eax, edi);
	goto loc_4A437B;
loc_4A4396:
	edi = to32i(ecx); //mov
	edx = to32i(ecx+0x10); //mov
	ecx = to32i(ecx+0x20); //mov
	add(edi, edx);
	cmp(edi, to32i(ecx));
	goto loc_4A4375;
loc_4A43A4:
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A43AC:
	cmp(esi, ecx);
	if (jz())
		goto loc_4A43C5;
	edx = to32i(esi+0x10); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_4A43DF;
	edi = to32i(ecx); //mov
	add(edi, to32i(ecx+0x10));
	cmp(ecx, ebp);
	if (jz())
		goto loc_4A43A4;
	ecx = to32i(ecx+0x20); //mov
	goto loc_4A436F;
loc_4A43C5:
	edx = edi; //mov
	eax = to32i(ecx); //mov
	ebx = to32i(ecx+0x10); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = to32i(ecx+0x10); //mov
	to32i(ecx) = edi; //mov
	add(edi, ebx);
	ebx = 1; //mov
	goto loc_4A436F;
loc_4A43DF:
	ebx = edx; //mov
	eax = to32i(esi); //mov
	edx = edi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	ebx = to32i(esi+0x20); //mov
	to32i(esi) = edi; //mov
	to32i(eax+0x20) = ebx; //mov
	eax = to32i(esi+0x24); //mov
	to32i(ebx+0x24) = eax; //mov
	to32i(esi+0x20) = ecx; //mov
	eax = to32i(ecx+0x24); //mov
	to32i(esi+0x24) = eax; //mov
	to32i(eax+0x20) = esi; //mov
	to32i(ecx+0x24) = esi; //mov
	edx = to32i(esi+0x10); //mov
	ebx = 1; //mov
	goto loc_4A436D;
}
Fn(void) Game::_sub_4A4474()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	and_(edx, (int32_t)0xF00);
	sar(edx, (int32_t)8);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edi = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	add(edi, eax);
	eax = ecx; //mov
	esp -= 4; _sub_4A40D0(); esp += 4; //call
	ecx = to32i(edi); //mov
	edx = to32i(edi+4); //mov
	esi = eax; //mov
	cmp(ecx, edx);
	if (jz())
		goto loc_4A44C9;
loc_4A44A8:
	ebx = 0xC; //mov
	edx = (int32_t)(intptr_t)(ecx+4); //lea
	eax = esi; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A44C1;
	test(to8i(ecx+0x18), (int8_t)8);
	if (jnz())
		goto loc_4A44D0;
loc_4A44C1:
	ecx = to32i(ecx+0x20); //mov
	cmp(ecx, to32i(edi+4));
	if (jnz())
		goto loc_4A44A8;
loc_4A44C9:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A44D0:
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4508()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edx = eax; //mov
	ebx = eax; //mov
	and_(ebx, (int32_t)0xF00);
	sar(ebx, (int32_t)8);
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	add(ebx, eax);
	cmp(to32i(ebx+0x10), (int32_t)0);
	if (jz())
		goto loc_4A45BF;
	edi = edx; //mov
	esi = to32i(ebx); //mov
	xor_(ebp, ebp);
	and_(edi, (int32_t)7);
	esi = to32i(esi+0x20); //mov
	xor_(edx, edx);
loc_4A4549:
	test(to8i(esi+0x18), (int8_t)8);
	if (jz())
		goto loc_4A4571;
	eax = to32i(esi+0x18); //mov
	and_(eax, (int32_t)7);
	cmp(eax, edi);
	if (jbe())
		goto loc_4A45C8;
loc_4A455D:
	eax = to32i(dword_4DB200); //mov
	ebp = esi; //mov
	edx = to32i(esi+0x1C); //mov
	edi = to32i(esi+0x18); //mov
	sub(eax, edx);
	and_(edi, (int32_t)7);
	edx = eax; //mov
loc_4A4571:
	esi = to32i(esi+0x20); //mov
	ecx = to32i(ebx+4); //mov
	cmp(esi, ecx);
	if (jnz())
		goto loc_4A4549;
	test(ebp, ebp);
	if (jz())
		goto loc_4A45B3;
	edx = ecx; //mov
	xor_(eax, eax);
loc_4A4583:
	inc(eax);
	bl = to8i(edx+4); //mov
	inc(edx);
	to8i(esp+eax-1) = bl; //mov
	cmp(eax, (int32_t)0xC);
	if (jl())
		goto loc_4A4583;
	xor_(dl, dl);
	to8i(esp+0xC) = dl; //mov
loc_4A4597:
	eax = esp; //mov
	ebx = to32i(esi+0x18); //mov
	edx = to32i(ebp+0x14); //mov
	xor_(ecx, ecx);
	or_(bl, (int8_t)8);
	esp -= 4; _sub_484510(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4A45D8;
	test(edx, edx);
	if (jnz())
		goto loc_4A45F3;
loc_4A45B3:
	xor_(eax, eax);
loc_4A45B5:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A45BF:
	eax = edx; //mov
	esp -= 4; _sub_484A00(); esp += 4; //call
	goto loc_4A45B5;
loc_4A45C8:
	if (jnz())
		goto loc_4A4571;
	eax = to32i(dword_4DB200); //mov
	sub(eax, to32i(esi+0x1C));
	cmp(eax, edx);
	if (jnb())
		goto loc_4A455D;
	goto loc_4A4571;
loc_4A45D8:
	eax = edi; //mov
	esp -= 4; _sub_4A4508(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A4597;
	test(edx, edx);
	if (jnz())
		goto loc_4A45F3;
	xor_(eax, eax);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A45F3:
	ebx = to32i(ebp+0x14); //mov
	edx = to32i(edx); //mov
	eax = to32i(ebp+0); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_484948(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4618()
{
	esp -= 4; _sub_4A4624(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_4A4623;
	eax = to32i(eax); //mov
locret_4A4623:
	return;
}
Fn(void) Game::_sub_4A4624()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4A4474(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A466F;
	ebx = to32i(off_4DB1EC); //mov
	ebx = to32i(ebx+0x10); //mov
loc_4A4641:
	edx = ebx; //mov
	eax = edi; //mov
	esp -= 4; _sub_4A4474(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A46B1;
	and_(ebx, (int32_t)0xF00);
	sar(ebx, (int32_t)8);
	imul32(ebx, 0x18);
	add(ebx, (int32_t)(intptr_t)dword_563D80);
	ebx = to32i(ebx+0x10); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4A4641;
loc_4A4669:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A466F:
	ah = to8i(eax+0x18); //mov
	and_(ah, (int8_t)0xF7);
	to8i(esi+0x18) = ah; //mov
	test(ah, (int8_t)0x10);
	if (jz())
		goto loc_4A4681;
	eax = esi; //mov
	goto loc_4A4669;
loc_4A4681:
	eax = edi; //mov
	ebx = to32i(esi+0x18); //mov
	edx = to32i(esi+0x14); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_484510(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A469A;
	eax = esi; //mov
	goto loc_4A4669;
loc_4A469A:
	ebx = to32i(esi+0x14); //mov
	edx = to32i(eax); //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_484928(); esp += 4; //call
	eax = edi; //mov
	goto loc_4A4669;
loc_4A46B1:
	and_(to8i(eax+0x18), (int8_t)0xF7);
	xor_(ecx, ecx);
	ebx = to32i(eax+0x18); //mov
	edx = to32i(eax+0x14); //mov
	eax = edi; //mov
	esp -= 4; _sub_484510(); esp += 4; //call
	edi = eax; //mov
	ebx = to32i(esi+0x14); //mov
	edx = to32i(eax); //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A47B0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x20);
	eax = esp; //mov
	edx = 0x20; //mov
	push32(eax);
	to32i(esp+4) = edx; //mov
	eax = GlobalMemoryStatus_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(esp+0x14); //mov
	and_(eax, (int32_t)0x7FFFFFFF);
	add(esp, (int32_t)0x20);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A47D4()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x20);
	eax = esp; //mov
	edx = 0x20; //mov
	push32(eax);
	to32i(esp+4) = edx; //mov
	eax = GlobalMemoryStatus_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0x20);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A48C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = edx; //mov
	ecx = to32i(dword_59C5B0+eax*8); //mov
	edx = 0xFFFFFFFF; //mov
	edi = 0x80; //mov
	cmp(to8i(ecx+4), (int8_t)1);
	if (jb())
		goto loc_4A48E3;
	xor_(edi, edi);
	di = to16i(ecx+6); //mov
loc_4A48E3:
	esp -= 4; _sub_486314(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A4939;
	test(esi, esi);
	if (jl())
		goto loc_4A4939;
	cmp(esi, edi);
	if (jge())
		goto loc_4A4939;
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(eax, ecx);
	cmp(to8i(ecx+4), (int8_t)2);
	if (jb())
		goto loc_4A4943;
	ebp = ecx; //mov
	eax = to32i(eax+0xC); //mov
loc_4A4908:
	test(eax, eax);
	if (jz())
		goto loc_4A4939;
	cmp(to32i(eax), (int32_t)0x6C544150);
	if (jnz())
		goto loc_4A4948;
	esp -= 4; _sub_4A4968(); esp += 4; //call
loc_4A4919:
	edx = eax; //mov
loc_4A491B:
	test(edx, edx);
	if (jl())
		goto loc_4A4932;
	ah = to8i(ecx+4); //mov
	shl(esi, (int32_t)2);
	cmp(ah, (int8_t)2);
	if (jb())
		goto loc_4A4958;
	to32i(esi+ebp+0xC) = 0; //mov
loc_4A4932:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4A4939:
	eax = 0xFFFFFFF8; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4A4943:
	eax = to32i(eax+8); //mov
	goto loc_4A4908;
loc_4A4948:
	cmp(to16i(eax), (int16_t)0x5450);
	if (jnz())
		goto loc_4A491B;
	edx = ebx; //mov
	esp -= 4; _sub_4A89B0(); esp += 4; //call
	goto loc_4A4919;
loc_4A4958:
	to32i(ecx+esi+8) = 0; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A4968()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(eax, eax);
	al = to8i(ebx+7); //mov
	cmp(edx, eax);
	if (jl())
		goto loc_4A4980;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A4980:
	eax = to32i(ebx+0xC); //mov
	add(eax, ecx);
	add(eax, (int32_t)0x28);
	inc(edx);
	esp -= 4; _sub_488B30(); esp += 4; //call
	add(ecx, (int32_t)0x44);
	xor_(eax, eax);
	al = to8i(ebx+7); //mov
	cmp(edx, eax);
	if (jl())
		goto loc_4A4980;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4AD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)0xC00);
	esi = eax; //mov
	ecx = edx; //mov
	edx = (int32_t)(intptr_t)dword_59BFB0; //mov
	ebx = (int32_t)(intptr_t)(edx+0x600); //lea
loc_4A4AE8:
	eax = to32i(edx+7); //mov
	sar(eax, (int32_t)0x18);
	cmp(eax, esi);
	if (jnz())
		goto loc_4A4B03;
	xor_(eax, esi);
	ax = to16i(edx+8); //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_4A4B03;
	eax = to32i(edx); //mov
	esp -= 4; _sub_489840(); esp += 4; //call
loc_4A4B03:
	add(edx, (int32_t)0x60);
	cmp(edx, ebx);
	if (jnz())
		goto loc_4A4AE8;
	xor_(edx, ebx);
	ebx = 0xFFFFFFFF; //mov
loc_4A4B11:
	add(edx, (int32_t)0xC);
	to32i(esp+edx-0xC) = ebx; //mov
	cmp(edx, (int32_t)0xC00);
	if (jnz())
		goto loc_4A4B11;
	ebx = esp; //mov
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A48C0(); esp += 4; //call
	add(esp, (int32_t)0xC00);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A4C20()
{
	cmp(to32i(eax), (int32_t)0x6C544150);
	if (jz())
		goto loc_4A4B40;
	cmp(to16i(eax), (int16_t)0x5450);
	if (jz())
		goto loc_4A8904;
	eax = 0xFFFFFFFF; //mov
	return;
loc_4A4B40:
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	ebp = edx; //mov
	to32i(esp+4) = ebx; //mov
	edx = 0xFFFFFFFF; //mov
	ah = to8i(eax+5); //mov
	to32i(esp) = edx; //mov
	test(ah, ah);
	if (jnz())
		goto loc_4A4BCA;
	push32(edi);
	push32(esi);
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	ebx = to32i(ecx+0xC); //mov
	xor_(esi, esi);
	add(ebx, eax);
	xor_(edi, edi);
	to32i(ecx+0xC) = ebx; //mov
loc_4A4B71:
	xor_(eax, eax);
	al = to8i(ecx+7); //mov
	cmp(esi, eax);
	if (jge())
		goto loc_4A4BD7;
	eax = to32i(ecx+0xC); //mov
	add(eax, edi);
	cmp(to32i(eax+0x18), (int32_t)0);
	if (jz())
		goto loc_4A4B8B;
	edx = (int32_t)(intptr_t)(eax+0x18); //lea
	add(to32i(eax+0x18), edx);
loc_4A4B8B:
	cmp(to32i(eax+0x1C), (int32_t)0);
	if (jz())
		goto loc_4A4B97;
	edx = (int32_t)(intptr_t)(eax+0x1C); //lea
	add(to32i(eax+0x1C), edx);
loc_4A4B97:
	cmp(to32i(eax+0x20), (int32_t)0);
	if (jz())
		goto loc_4A4BA3;
	edx = (int32_t)(intptr_t)(eax+0x20); //lea
	add(to32i(eax+0x20), edx);
loc_4A4BA3:
	edx = (int32_t)(intptr_t)(eax+0x24); //lea
	ebx = to32i(eax+0x24); //mov
	add(eax, (int32_t)0x28);
	add(ebx, edx);
	edx = ebp; //mov
	to32i(eax-4) = ebx; //mov
	ebx = to32i(esp+0xC); //mov
	esp -= 4; _sub_488CE0(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A4BD2;
	add(edi, (int32_t)0x44);
	inc(esi);
	goto loc_4A4B71;
loc_4A4BCA:
	eax = edx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(ecx);
	return;
loc_4A4BD2:
	dec(esi);
	to32i(esp+8) = esi; //mov
loc_4A4BD7:
	esi = to32i(esp+8); //mov
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_4A4C10;
	test(esi, esi);
	if (jl())
		goto loc_4A4C04;
	eax = esi; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	xor_(edx, edx);
	shl(esi, (int32_t)2);
loc_4A4BF0:
	eax = to32i(ecx+0xC); //mov
	add(eax, edx);
	add(eax, (int32_t)0x28);
	add(edx, (int32_t)0x44);
	esp -= 4; _sub_488B30(); esp += 4; //call
	cmp(edx, esi);
	if (jle())
		goto loc_4A4BF0;
loc_4A4C04:
	eax = to32i(esp+0x10); //mov
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(ecx);
	return;
loc_4A4C10:
	to8i(ecx+5) = 1; //mov
	eax = to32i(esp+0x10); //mov
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(ecx);
	return;
loc_4A8904:
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebp = edx; //mov
	edi = ebx; //mov
	dx = to16i(eax); //mov
	ebx = 0xFFFFFFFF; //mov
	cmp(dx, (int16_t)0x5450);
	if (jnz())
		goto loc_4A8971;
	dl = to8i(eax+3); //mov
	test(dl, (int8_t)1);
	if (jnz())
		goto loc_4A897C;
	push32(esi);
	push32(ecx);
	test(dl, (int8_t)2);
	if (jz())
		goto loc_4A8980;
	ecx = (int32_t)(intptr_t)(eax+8); //lea
loc_4A8931:
	al = to8i(ecx); //mov
	cmp(al, (int8_t)0xFF);
	if (jz())
		goto loc_4A8997;
	esi = (uint8_t)al; //movzx
	cmp(esi, (int32_t)0xFD);
	if (jnz())
		goto loc_4A8950;
	inc(ecx);
	ebx = edi; //mov
	edx = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4892B0(); esp += 4; //call
	ebx = eax; //mov
loc_4A8950:
	inc(ecx);
	cmp(esi, (int32_t)0xFE);
	if (jz())
		goto loc_4A8931;
	cmp(esi, (int32_t)0xFC);
	if (jz())
		goto loc_4A8931;
	xor_(eax, eax);
	al = to8i(ecx); //mov
	cmp(eax, (int32_t)0xFF);
	if (jz())
		goto loc_4A8985;
loc_4A896C:
	inc(ecx);
	add(ecx, eax);
	goto loc_4A8931;
loc_4A8971:
	eax = 0xFFFFFFF9; //mov
loc_4A8976:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	return;
loc_4A897C:
	eax = ebx; //mov
	goto loc_4A8976;
loc_4A8980:
	ecx = (int32_t)(intptr_t)(eax+4); //lea
	goto loc_4A8931;
loc_4A8985:
	inc(ecx);
	edx = 4; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	add(ecx, (int32_t)3);
	goto loc_4A896C;
loc_4A8997:
	test(ebx, ebx);
	if (jl())
		goto loc_4A89A3;
	eax = to32i(esp+8); //mov
	or_(to8i(eax+3), (int8_t)1);
loc_4A89A3:
	eax = ebx; //mov
	pop32(ecx);
	pop32(esi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
}
Fn(void) Game::_sub_4A4C40()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	to32i(esp) = edx; //mov
	ebp = ecx; //mov
	xor_(esi, esi);
	test(eax, eax);
	if (jz())
		goto loc_4A4C99;
	cmp(to32i(eax), (int32_t)0x6C544150);
	if (jnz())
		goto loc_4A4CA7;
	cmp(to8i(eax+4), (int8_t)1);
	if (jnz())
		goto loc_4A4CAE;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A4CB5;
	ebp = 0x7F; //mov
loc_4A4C6B:
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A4CC0;
	ebx = 0x3C; //mov
loc_4A4C75:
	xor_(eax, eax);
	xor_(edx, edx);
loc_4A4C79:
	xor_(ecx, ecx);
	cl = to8i(edi+7); //mov
	cmp(eax, ecx);
	if (jge())
		goto loc_4A4CE6;
	esi = to32i(edi+0xC); //mov
	add(esi, edx);
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	cmp(ebp, ecx);
	if (jge())
		goto loc_4A4CCB;
loc_4A4C93:
	add(edx, (int32_t)0x44);
	inc(eax);
	goto loc_4A4C79;
loc_4A4C99:
	eax = 0xFFFFFFF8; //mov
loc_4A4C9E:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4CA7:
	eax = 0xFFFFFFF9; //mov
	goto loc_4A4C9E;
loc_4A4CAE:
	eax = 0xFFFFFFF5; //mov
	goto loc_4A4C9E;
loc_4A4CB5:
	test(ecx, ecx);
	if (jl())
		goto loc_4A4C99;
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_4A4C6B;
	goto loc_4A4C99;
loc_4A4CC0:
	test(ebx, ebx);
	if (jl())
		goto loc_4A4C99;
	cmp(ebx, (int32_t)0x7F);
	if (jle())
		goto loc_4A4C75;
	goto loc_4A4C99;
loc_4A4CCB:
	xor_(ecx, ecx);
	cl = to8i(esi+1); //mov
	cmp(ebp, ecx);
	if (jg())
		goto loc_4A4C93;
	xor_(ecx, ecx);
	cl = to8i(esi+2); //mov
	cmp(ebx, ecx);
	if (jl())
		goto loc_4A4C93;
	xor_(ecx, ecx);
	cl = to8i(esi+3); //mov
	cmp(ebx, ecx);
	if (jg())
		goto loc_4A4C93;
loc_4A4CE6:
	xor_(edx, edx);
	dl = to8i(edi+7); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_4A4F75;
	eax = to32i(esp+0x24); //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A4F83;
	to32i(esp+0x24) = 0x7F; //mov
loc_4A4D08:
	edx = to32i(esp+0x20); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A4FA2;
	to32i(esp+0x20) = 0x40; //mov
loc_4A4D1D:
	xor_(edx, edx);
	xor_(eax, eax);
	dl = to8i(edi+0xA); //mov
	al = to8i(esi+0x10); //mov
	add(eax, edx);
	sub(eax, (int32_t)0x40);
	dl = to8i(esi+0x11); //mov
	to32i(esp+0xC) = eax; //mov
	test(dl, dl);
	if (jz())
		goto loc_4A4D4C;
	eax = to32i(esi+0xE); //mov
	sar(eax, (int32_t)0x18);
	ecx = to32i(esp+0xC); //mov
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	add(ecx, eax);
	to32i(esp+0xC) = ecx; //mov
loc_4A4D4C:
	eax = to32i(esp+0xC); //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A4FC1;
	to32i(esp+0xC) = 0x7F; //mov
loc_4A4D61:
	eax = to32i(esp+0xC); //mov
	add(eax, to32i(esp+0x20));
	sub(eax, (int32_t)0x40);
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A4FD4;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A4D85;
	to32i(esp+0x20) = 0x7F; //mov
loc_4A4D85:
	eax = to32i(esi+0x1C); //mov
	test(eax, eax);
	if (jz())
		goto loc_4A4D97;
	add(eax, to32i(esp+0x20));
	eax = to8i(eax); //movsx
	to32i(esp+0x20) = eax; //mov
loc_4A4D97:
	cmp(to32i(esp+0x28), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A4DA7;
	xor_(eax, eax);
	al = to8i(esi+0xC); //mov
	to32i(esp+0x28) = eax; //mov
loc_4A4DA7:
	eax = to32i(edi+6); //mov
	edx = to32i(esi+0x12); //mov
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(esi+9); //mov
	sub(edx, ebx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	ebx = to32i(esp+8); //mov
	shl(eax, (int32_t)2);
	sub(ebx, eax);
	dx = to16i(esi+0x16); //mov
	to32i(esp+8) = ebx; //mov
	test(dx, dx);
	if (jz())
		goto loc_4A4DF6;
	eax = to32i(esi+0x14); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(esp+8) = edx; //mov
loc_4A4DF6:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_59C610; //mov
	eax = to32i(esi+4); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	bl = to8i(esi+8); //mov
	dl = to8i(esi+0xF); //mov
	esp -= 4; _sub_4A53BC(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+4) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A4FDF;
	shl(eax, (int32_t)2);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_59BFB0; //mov
	shl(eax, (int32_t)5);
	add(ebx, eax);
	eax = to32i(esi+0x18); //mov
	to32i(ebx+0x4C) = eax; //mov
	eax = to32i(esi+0x1C); //mov
	to32i(ebx+0x50) = eax; //mov
	eax = to32i(esi+0x20); //mov
	to32i(ebx+0x54) = eax; //mov
	al = to8i(edi+6); //mov
	to8i(ebx+0xD) = al; //mov
	eax = to32i(esp+0x24); //mov
	to32i(ebx+0x18) = 0; //mov
	shl(eax, (int32_t)0x10);
	to32i(ebx+0x20) = eax; //mov
	eax = to32i(edi+8); //mov
	edx = to32i(esi+0xF); //mov
	sar(eax, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	imul32(edx, eax);
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = eax; //mov
	eax = to32i(esi+0x10); //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	add(edx, eax);
	cmp(edx, ecx);
	if (jle())
		goto loc_4A4FEF;
	edx = ecx; //mov
loc_4A4E8C:
	imul32(edx, ebp);
	ebp = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	to8i(ebx+0x30) = al; //mov
	al = to8i(esp+0xC); //mov
	to8i(ebx+0x32) = al; //mov
	al = to8i(esp+0x20); //mov
	to8i(ebx+0xF) = al; //mov
	eax = to32i(esp+8); //mov
	to16i(ebx+0x10) = ax; //mov
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	imul32(eax, 0x64);
	to16i(ebx+0x42) = ax; //mov
	al = to8i(esp+0x28); //mov
	to8i(ebx+0x33) = al; //mov
	eax = to32i(esp+4); //mov
	esp -= 4; _sub_4B0D30(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	to32i(ebx+0x48) = eax; //mov
	eax = to32i(ebx+0x48); //mov
	to32i(ebx+0x24) = 0; //mov
	eax = to32i(eax); //mov
	to32i(ebx+0x2C) = eax; //mov
	eax = to32i(ebx+0x48); //mov
	eax = to32i(eax+4); //mov
	shl(eax, (int32_t)0x10);
	to8i(ebx+0x35) = 0; //mov
	to32i(ebx+0x28) = eax; //mov
	al = to8i(esi+0xA); //mov
	to8i(ebx+0x34) = al; //mov
	al = to8i(esi+0xB); //mov
	to8i(ebx+0x36) = al; //mov
	al = to8i(esp); //mov
	xor_(edx, edx);
	to8i(ebx+0xA) = al; //mov
	eax = to32i(esp+4); //mov
	to8i(ebx+0xB) = 0xF; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	ecx = to32i(dword_59BFA4); //mov
	dl = to8i(esi+0xE); //mov
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	push32(eax);
	eax = to32i(ebx+0x10); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x24); //mov
	push32(eax);
	eax = to32i(ebx+0x2E); //mov
	xor_(edx, edx);
	sar(eax, (int32_t)0x18);
	dl = to8i(edi+6); //mov
	push32(eax);
	ebx = to32i(esp+0x10); //mov
	eax = (int32_t)(intptr_t)(esi+0x28); //lea
	esp -= 4; _sub_488CFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jge())
		goto loc_4A4F62;
	eax = to32i(esp+4); //mov
	esp -= 4; _sub_4A5678(); esp += 4; //call
	to32i(dword_59C610) = edx; //mov
loc_4A4F62:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = to32i(dword_59C610); //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4F75:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4F83:
	test(eax, eax);
	if (jl())
		goto loc_4A4C99;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A4D08;
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4FA2:
	test(edx, edx);
	if (jl())
		goto loc_4A4C99;
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_4A4D1D;
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4FC1:
	test(eax, eax);
	if (jge())
		goto loc_4A4D61;
	xor_(ecx, ecx);
	to32i(esp+0xC) = ecx; //mov
	goto loc_4A4D61;
loc_4A4FD4:
	xor_(ecx, ecx);
	to32i(esp+0x20) = ecx; //mov
	goto loc_4A4D85;
loc_4A4FDF:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A4FEF:
	test(edx, edx);
	if (jge())
		goto loc_4A4E8C;
	xor_(edx, edx);
	goto loc_4A4E8C;
}
Fn(void) Game::_sub_4A5000()
{
	test(eax, eax);
	if (jz())
		goto loc_4A501D;
	cmp(to32i(eax), (int32_t)0x6C544150);
	if (jz())
		goto loc_4A5023;
	cmp(to16i(eax), (int16_t)0x5450);
	if (jz())
	{
		_sub_4A8524();
		return;
	}
	eax = 0xFFFFFFF9; //mov
	return;
loc_4A501D:
	eax = 0xFFFFFFF8; //mov
	return;
loc_4A5023:
	push32(ecx);
	push32(ebx);
	ecx = to32i(edx+6); //mov
	sar(ecx, (int32_t)0x18);
	push32(ecx);
	ecx = to32i(edx+5); //mov
	sar(ecx, (int32_t)0x18);
	push32(ecx);
	ecx = to32i(edx+4); //mov
	ebx = to32i(edx+2); //mov
	sar(ecx, (int32_t)0x18);
	sar(ebx, (int32_t)0x18);
	push32(ecx);
	ecx = to32i(edx+3); //mov
	edx = to32i(edx+1); //mov
	sar(ecx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4A4C40(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A5060()
{
	to32i(dword_59C614) = eax; //mov
}
Fn(void) Game::_sub_4A5068()
{
	push32(edx);
	push32(edi);
	edx = eax; //mov
	cmp(to32i(dword_4DDAA8), (int32_t)0);
	if (jz())
		goto loc_4A5091;
loc_4A5075:
	cmp(to32i(dword_59C614), (int32_t)0);
	if (jz())
		goto loc_4A509D;
	xor_(edi, edi);
	eax = edx; //mov
	to32i(dword_4DDAA4) = edi; //mov
	call(to32i(dword_59C614));
	pop32(edi);
	pop32(edx);
	return;
loc_4A5091:
	esp -= 4; _sub_489E0C(); esp += 4; //call
	to32i(dword_4DDAA8) = eax; //mov
	goto loc_4A5075;
loc_4A509D:
	push32(esi);
	esi = 1; //mov
	edx = to32i(dword_4DDAA8); //mov
	xor_(eax, eax);
	to32i(dword_4DDAA4) = esi; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	pop32(esi);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_4A50F8()
{
	push32(edx);
	edx = to32i(dword_4DDAA8); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A5105;
	pop32(edx);
	return;
loc_4A5105:
	push32(ecx);
	ecx = 1; //mov
	xor_(eax, eax);
	to32i(dword_4DDAA4) = ecx; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4A5124()
{
	cmp(to32i(dword_59C614), (int32_t)0);
	if (jz())
		goto locret_4A5136;
	cmp(to32i(dword_4DABCC), (int32_t)0);
	if (jnz())
		goto loc_4A5137;
locret_4A5136:
	return;
loc_4A5137:
	esp -= 4; _sub_4A5068(); esp += 4; //call
	_sub_4A513C(); return; //jmp
}
Fn(void) Game::_sub_4A513C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4A50DA;
	ebx = 0x3E8; //mov
	xor_(ecx, ecx);
loc_4A5153:
	cmp(ecx, to32i(dword_4DDAA8));
	if (jz())
		goto loc_4A5169;
	edi = to32i(dword_4DDAA4); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_4A50BA;
loc_4A5169:
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A50BA:
	eax = edi; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	edx = ebx; //mov
	ebp = to32i(dword_4DABCC); //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_4A5153;
loc_4A50DA:
	edx = to32i(dword_4DDAA8); //mov
	test(edx, edx);
	if (jz())
		goto loc_4A5169;
	eax = edx; //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A5170()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	inc(to32i(dword_4DDAB4));
	inc(to32i(dword_59C608));
	cmp(to32i(dword_4DDA84), (int32_t)0);
	if (jnz())
		goto loc_4A52B8;
loc_4A5194:
	cmp(to32i(dword_4DDA78), (int32_t)0);
	if (jz())
		goto loc_4A51A3;
	call(to32i(dword_4DDA78));
loc_4A51A3:
	cmp(to32i(dword_4DDA7C), (int32_t)0);
	if (jnz())
		goto loc_4A52C3;
loc_4A51B0:
	esi = (int32_t)(intptr_t)dword_59BFB0; //mov
	xor_(ebx, ebx);
loc_4A51B7:
	ah = to8i(esi+0xC); //mov
	ecx = esi; //mov
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_4A527F;
	cmp(to32i(esi), (int32_t)0);
	if (jl())
		goto loc_4A527F;
	cmp(to32i(esi+0x5C), (int32_t)0);
	if (jz())
		goto loc_4A51F9;
	dl = to8i(esi+0x3F); //mov
	inc(dl);
	to8i(esi+0x3F) = dl; //mov
	cmp(dl, to8i(esi+0x3D));
	if (jb())
		goto loc_4A51E5;
	to8i(esi+0x3F) = 0; //mov
loc_4A51E5:
	eax = ebx; //mov
	esp -= 4; _sub_4B0D30(); esp += 4; //call
	edx = to32i(ecx+0x10); //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_489690(); esp += 4; //call
loc_4A51F9:
	edx = to32i(ecx+0x58); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jz())
		goto loc_4A521A;
	al = to8i(ecx+0x3E); //mov
	inc(al);
	to8i(ecx+0x3E) = al; //mov
	ah = to8i(ecx+0x3C); //mov
	edi = 1; //mov
	cmp(al, ah);
	if (jb())
		goto loc_4A521A;
	to8i(ecx+0x3E) = 0; //mov
loc_4A521A:
	ebp = to32i(ecx+0x18); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4A5252;
	edx = to32i(ecx+0x20); //mov
	edi = 1; //mov
	add(edx, ebp);
	ebp = to32i(ecx+0x18); //mov
	to32i(ecx+0x20) = edx; //mov
	test(ebp, ebp);
	if (jl())
		goto loc_4A52CE;
	eax = edx; //mov
	edx = to32i(ecx+0x1C); //mov
	cmp(eax, edx);
	if (jl())
		goto loc_4A524C;
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x20) = edx; //mov
loc_4A524C:
	cmp(to32i(ecx+0x20), (int32_t)0);
	if (jl())
		goto loc_4A5278;
loc_4A5252:
	edx = to32i(ecx+0x24); //mov
	test(edx, edx);
	if (jz())
		goto loc_4A5261;
	add(to32i(ecx+0x28), edx);
	edi = 1; //mov
loc_4A5261:
	cmp(to32i(ecx+0x2C), (int32_t)0);
	if (jnz())
		goto loc_4A5317;
	dl = to8i(ecx+0x35); //mov
	inc(dl);
	to8i(ecx+0x35) = dl; //mov
	cmp(dl, to8i(ecx+0x34));
	if (jl())
		goto loc_4A52E8;
loc_4A5278:
	eax = to32i(ecx); //mov
	esp -= 4; _sub_489840(); esp += 4; //call
loc_4A527F:
	inc(ebx);
	add(esi, (int32_t)0x60);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_4A51B7;
	cmp(to32i(dword_4DDA80), (int32_t)0);
	if (jz())
		goto loc_4A52AB;
	ecx = 3; //mov
	eax = to32i(dword_59C608); //mov
	xor_(edx, edx);
	div32(ecx);
	test(edx, edx);
	if (jz())
		goto loc_4A534D;
loc_4A52AB:
	dec(to32i(dword_4DDAB4));
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A52B8:
	call(to32i(dword_4DDA84));
	goto loc_4A5194;
loc_4A52C3:
	call(to32i(dword_4DDA7C));
	goto loc_4A51B0;
loc_4A52CE:
	ebp = to32i(ecx+0x1C); //mov
	cmp(edx, ebp);
	if (jg())
		goto loc_4A524C;
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x20) = ebp; //mov
	goto loc_4A524C;
loc_4A52E8:
	eax = to32i(ecx+0x32); //mov
	sar(eax, (int32_t)0x18);
	edx = to32i(ecx+0x48); //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	edx = to32i(eax); //mov
	to32i(ecx+0x2C) = edx; //mov
	test(edx, edx);
	if (jl())
		goto loc_4A5344;
loc_4A52FF:
	edx = to32i(eax+4); //mov
	ebp = to32i(ecx+0x28); //mov
	shl(edx, (int32_t)0x10);
	sub(edx, ebp);
	eax = edx; //mov
	ebp = to32i(ecx+0x2C); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	to32i(ecx+0x24) = eax; //mov
loc_4A5317:
	dec(to32i(ecx+0x2C));
	test(edi, edi);
	if (jz())
		goto loc_4A527F;
	eax = ebx; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_4A527F;
	edx = to32i(ecx+0x2E); //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4894A4(); esp += 4; //call
	goto loc_4A527F;
loc_4A5344:
	to32i(ecx+0x2C) = 0x7FFFFFFF; //mov
	goto loc_4A52FF;
loc_4A534D:
	call(to32i(dword_4DDA80));
	dec(to32i(dword_4DDAB4));
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A5360()
{
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	inc(to32i(dword_4DDAB8));
}
Fn(void) Game::_sub_4A5374()
{
	dec(to32i(dword_4DDAB8));
	eax = to32i(dword_59C600); //mov
	_sub_489F60(); return; //jmp
}
Fn(void) Game::_sub_4A5390()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	ecx = edx; //mov
	xor_(eax, eax);
	test(edx, edx);
	if (jle())
		goto loc_4A53AE;
loc_4A539C:
	edx = to32i(dword_59C614+1+eax); //mov
	sar(edx, (int32_t)0x18);
	cmp(edx, ebx);
	if (jz())
		goto loc_4A53B3;
	inc(eax);
	cmp(eax, ecx);
	if (jl())
		goto loc_4A539C;
loc_4A53AE:
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A53B3:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A53BC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	to32i(esp+0x1C) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+8) = ecx; //mov
	edx = 0xFFFFFFF7; //mov
	ebx = to32i(esp+0x18); //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	to32i(esp+0xC) = edx; //mov
	to32i(esp) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4A53FC;
	dl = 0xFF; //mov
	esi = to32i(esp+0x18); //mov
loc_4A53F0:
	inc(eax);
	(dword_59C614+3)[eax] = dl; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4A53F0;
loc_4A53FC:
	edi = to32i(dword_4DDABC); //mov
	add(edi, (int32_t)0x20);
	to32i(dword_4DDABC) = edi; //mov
	test(edi, edi);
	if (jl())
		goto loc_4A543A;
loc_4A540F:
	edi = to32i(esp+0x18); //mov
	xor_(ebx, ebx);
	xor_(esi, esi);
loc_4A5417:
	eax = to32i(dword_4DDA70+2); //mov
	sar(eax, (int32_t)0x18);
	cmp(ebx, eax);
	if (jge())
		goto loc_4A546D;
	eax = 1; //mov
	cl = bl; //mov
	edx = to32i(esp+0x1C); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jnz())
		goto loc_4A5443;
loc_4A5434:
	add(esi, (int32_t)0x60);
	inc(ebx);
	goto loc_4A5417;
loc_4A543A:
	xor_(eax, eax);
	to32i(dword_4DDABC) = eax; //mov
	goto loc_4A540F;
loc_4A5443:
	cmp(dword_59BFBC[esi], (int8_t)0);
	if (jnz())
		goto loc_4A5434;
	edx = to32i(esp); //mov
	eax = ebx; //mov
	esp -= 4; _sub_4A5390(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A5434;
	eax = to32i(esp); //mov
	ecx = (int32_t)(intptr_t)(eax+1); //lea
	byte_59C618[eax] = bl; //mov
	to32i(esp) = ecx; //mov
	cmp(ecx, edi);
	if (jl())
		goto loc_4A5434;
loc_4A546D:
	eax = to32i(esp); //mov
	ebp = to32i(esp+0x18); //mov
	to32i(esp+0x14) = eax; //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_4A5514;
loc_4A5480:
	edi = 0x66; //mov
	ebp = 0x7FFFFFFF; //mov
	esi = (int32_t)(intptr_t)dword_59BFB0; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+4) = ecx; //mov
loc_4A5497:
	eax = to32i(dword_4DDA70+2); //mov
	sar(eax, (int32_t)0x18);
	cmp(ebx, eax);
	if (jge())
		goto loc_4A54EB;
	eax = 1; //mov
	cl = bl; //mov
	edx = to32i(esp+0x1C); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jnz())
		goto loc_4A54BA;
loc_4A54B4:
	add(esi, (int32_t)0x60);
	inc(ebx);
	goto loc_4A5497;
loc_4A54BA:
	edx = to32i(esp); //mov
	eax = ebx; //mov
	esp -= 4; _sub_4A5390(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4A54B4;
	al = to8i(esi+0xE); //mov
	cmp(eax, edi);
	if (jge())
		goto loc_4A54DA;
	edi = eax; //mov
	to32i(esp+4) = ebx; //mov
	ebp = to32i(esi+0x14); //mov
	goto loc_4A54B4;
loc_4A54DA:
	if (jnz())
		goto loc_4A54B4;
	ecx = to32i(esi+0x14); //mov
	cmp(ebp, ecx);
	if (jle())
		goto loc_4A54B4;
	ebp = ecx; //mov
	to32i(esp+4) = ebx; //mov
	goto loc_4A54B4;
loc_4A54EB:
	cmp(edi, to32i(esp+0x10));
	if (jg())
		goto loc_4A55D7;
	al = to8i(esp+4); //mov
	ebx = to32i(esp); //mov
	edi = to32i(esp+0x18); //mov
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	byte_59C618[ebx] = al; //mov
	to32i(esp) = esi; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_4A55D7;
loc_4A5514:
	eax = to32i(esp); //mov
	cmp(eax, to32i(esp+0x18));
	if (jnz())
		goto loc_4A55CC;
	ebx = to32i(dword_59C614+1); //mov
	eax = to32i(dword_4DDABC); //mov
	sar(ebx, (int32_t)0x18);
	or_(eax, ebx);
	ebx = to32i(esp+8); //mov
	to32i(ebx) = eax; //mov
	ebx = to32i(dword_59C614+1); //mov
	edi = to32i(dword_4DDABC); //mov
	sar(ebx, (int32_t)0x18);
	or_(edi, ebx);
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	esi = to32i(esp); //mov
	sub(eax, ebx);
	to32i(esp+0xC) = ebx; //mov
	shl(eax, (int32_t)5);
	xor_(ebx, ebx);
	to32i(dword_59BFB0+eax) = edi; //mov
	test(esi, esi);
	if (jle())
		goto loc_4A561F;
loc_4A556B:
	eax = to32i(dword_59C614+1+ebx); //mov
	sar(eax, (int32_t)0x18);
	imul32(eax, 0x60);
	edi = (int32_t)(intptr_t)dword_59BFB0; //mov
	add(edi, eax);
	cl = to8i(edi+0xC); //mov
	esi = to32i(edi); //mov
	cmp(cl, (int8_t)1);
	if (jnz())
		goto loc_4A5602;
	test(esi, esi);
	if (jl())
		goto loc_4A55F1;
loc_4A5590:
	eax = esi; //mov
	esp -= 4; _sub_489840(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_4A5602;
	dec(ebx);
	test(ebx, ebx);
	if (jl())
		goto loc_4A55C4;
	xor_(edx, edx);
loc_4A55AA:
	eax = to32i(dword_59C614+1+ebx); //mov
	sar(eax, (int32_t)0x18);
	imul32(eax, 0x60);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	dec(ebx);
	to8i(eax+0xC) = dl; //mov
	test(ebx, ebx);
	if (jge())
		goto loc_4A55AA;
loc_4A55C4:
	to32i(esp+0xC) = 0xFFFFFFF7; //mov
loc_4A55CC:
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4A55D7:
	eax = to32i(esp+0x14); //mov
	inc(eax);
	edx = to32i(esp+0x18); //mov
	to32i(esp+0x14) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_4A5480;
	goto loc_4A5514;
loc_4A55F1:
	eax = to32i(edi+0x41); //mov
	sar(eax, (int32_t)0x18);
	imul32(eax, 0x60);
	esi = to32i(dword_59BFB0+eax); //mov
	goto loc_4A5590;
loc_4A5602:
	eax = to32i(dword_59C608); //mov
	to8i(edi+0xC) = 1; //mov
	to32i(edi+0x14) = eax; //mov
	al = to8i(esp+0x10); //mov
	inc(ebx);
	to8i(edi+0xE) = al; //mov
	cmp(ebx, to32i(esp));
	if (jl())
		goto loc_4A556B;
loc_4A561F:
	eax = 1; //mov
	cmp(eax, to32i(esp));
	if (jge())
		goto loc_4A55CC;
	ecx = to32i(esp); //mov
loc_4A562C:
	ebx = to32i(dword_59C614+1); //mov
	sar(ebx, (int32_t)0x18);
	imul32(ebx, 0x60);
	dl = (int32_t)(intptr_t)byte_59C618[eax]; //mov
	(dword_59BFB0+3)[ebx+eax] = dl; //mov
	ebx = to32i(dword_59C614+1+eax); //mov
	sar(ebx, (int32_t)0x18);
	imul32(ebx, 0x60);
	to32i(dword_59BFB0+ebx) = 0xFFFFFFFF; //mov
	dl = to8i(byte_59C618); //mov
	inc(eax);
	byte_59BFF4[ebx] = dl; //mov
	cmp(eax, ecx);
	if (jl())
		goto loc_4A562C;
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A5678()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	esi = 0xFFFFFFFF; //mov
	sub(edx, eax);
	eax = (int32_t)(intptr_t)dword_59BFB0; //mov
	shl(edx, (int32_t)5);
	xor_(ecx, ecx);
	bl = to8i(edx+eax+0x3B); //mov
	edi = (uint8_t)to8i(edx+eax+0x3B); //movzx
	test(bl, bl);
	if (jz())
		goto loc_4A575D;
	xor_(edx, edx);
loc_4A56AB:
	xor_(ebx, ebx);
	bl = to8i(eax+0x3B); //mov
	cmp(ebx, edi);
	if (jnz())
		goto loc_4A56C9;
	cmp(to32i(eax), (int32_t)0);
	if (jl())
		goto loc_4A56C9;
	cmp(to8i(eax+0xC), (int8_t)0);
	if (jz())
		goto loc_4A56C9;
	bh = to8i(eax+0x3A); //mov
	inc(ecx);
	test(bh, bh);
	if (jz())
		goto loc_4A56C9;
	esi = edx; //mov
loc_4A56C9:
	inc(edx);
	add(eax, (int32_t)0x60);
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_4A56AB;
	ebx = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(ebx, ebp);
	shl(ebx, (int32_t)5);
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_4A5728;
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)5);
	cmp(dword_59BFBC[eax], (int8_t)2);
	if (jnz())
		goto loc_4A5701;
	cmp(ebp, esi);
	if (jz())
		goto loc_4A5701;
	cmp(ecx, (int32_t)2);
	if (jz())
		goto loc_4A5732;
loc_4A5701:
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)5);
	cmp(dword_59BFBC[eax], (int8_t)1);
	if (jnz())
		goto loc_4A5742;
	cmp(ebp, esi);
	if (jnz())
		goto loc_4A5742;
	dword_59BFBC[eax] = 2; //mov
loc_4A5721:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A5728:
	xor_(al, al);
	dword_59BFBC[ebx] = al; //mov
	goto loc_4A5721;
loc_4A5732:
	xor_(cl, cl);
	dword_59BFBC[ebx] = cl; //mov
	dword_59BFBC[eax] = cl; //mov
	goto loc_4A5721;
loc_4A5742:
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(eax, ebp);
	shl(eax, (int32_t)5);
	xor_(bl, bl);
	dword_59BFBC[eax] = bl; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A575D:
	xor_(bh, bh);
	dword_59BFBC[edx] = bh; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A576C()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = eax; //mov
	and_(edx, (int32_t)0x1F);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	cmp(to8i(eax+0xC), (int8_t)0);
	if (jz())
		goto loc_4A5790;
	cmp(ecx, to32i(eax));
	if (jz())
		goto loc_4A5795;
loc_4A5790:
	edx = 0xFFFFFFF8; //mov
loc_4A5795:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A5830()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	esi = to32i(esp+0x50); //mov
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	eax = to32i(esp+0x44); //mov
	imul32(eax, esi);
	edx = ecx; //mov
	add(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x1F);
	add(ebx, eax);
	eax = ecx; //mov
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edi = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(esp+0x48); //mov
	inc(eax);
	sar(eax, (int32_t)1);
	to32i(esp+0x10) = eax; //mov
	ah = to8i(byte_4DB25E); //mov
	ebp = to32i(dword_4DD774); //mov
	test(ah, ah);
	if (jnz())
		goto loc_4A5C00;
	eax = to32i(esp+0x24); //mov
	cmp(eax, to32i(dword_4DB24C));
	if (jl())
		goto loc_4A5C00;
	cmp(eax, to32i(dword_4DB254));
	if (jge())
		goto loc_4A5C00;
	eax = to32i(esp+0x18); //mov
	cmp(eax, to32i(dword_4DB250));
	if (jl())
		goto loc_4A5C00;
	cmp(eax, to32i(dword_4DB258));
	if (jge())
		goto loc_4A5C00;
	eax = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x48); //mov
	ebx = to32i(dword_4DB24C); //mov
	add(eax, ecx);
	cmp(eax, ebx);
	if (jl())
		goto loc_4A5C00;
	cmp(eax, to32i(dword_4DB254));
	if (jge())
		goto loc_4A5C00;
	eax = to32i(esp+0x18); //mov
	ecx = to32i(esp+0x4C); //mov
	ebx = to32i(dword_4DB250); //mov
	add(eax, ecx);
	cmp(eax, ebx);
	if (jl())
		goto loc_4A5C00;
	cmp(eax, to32i(dword_4DB258));
	if (jge())
		goto loc_4A5C00;
	ecx = to32i(esp+0x10); //mov
	eax = esi; //mov
	dl = to8i(byte_4DB25C); //mov
	sub(eax, ecx);
	cmp(dl, (int8_t)0x10);
	if (jnz())
		goto loc_4A5A77;
	to32i(esp) = eax; //mov
loc_4A5915:
	ebx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x24); //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	esi = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x2C) = eax; //mov
loc_4A593F:
	xor_(eax, eax);
	al = to8i(edi); //mov
	shr(eax, (int32_t)4);
	ebx = to32i(ebp+eax*4+0); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4A59BD;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4A599A;
	ax = to16i(esi); //mov
	ecx = ebx; //mov
	edx = eax; //mov
	xor_(ecx, (int32_t)0xFFFFFFFF);
	shl(eax, (int32_t)0x10);
	al = dl; //mov
	and_(edx, (int32_t)0x7E0);
	shl(edx, (int32_t)8);
	and_(eax, (int32_t)0xF800001F);
	shr(ecx, (int32_t)0x18);
	add(eax, edx);
	mul32(ecx);
	shl(edx, (int32_t)0x10);
	ecx = eax; //mov
	shr(ecx, (int32_t)5);
	add(ebx, edx);
	shr(eax, (int32_t)0xB);
	and_(ecx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	add(ebx, ecx);
	add(ebx, eax);
loc_4A599A:
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
	to16i(esi) = bx; //mov
loc_4A59BD:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	xor_(eax, eax);
	al = to8i(edi); //mov
	and_(eax, (int32_t)0xF);
	ebx = to32i(ebp+eax*4+0); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4A5A3E;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4A5A1B;
	ax = to16i(esi); //mov
	ecx = ebx; //mov
	edx = eax; //mov
	xor_(ecx, (int32_t)0xFFFFFFFF);
	shl(eax, (int32_t)0x10);
	al = dl; //mov
	and_(edx, (int32_t)0x7E0);
	shl(edx, (int32_t)8);
	and_(eax, (int32_t)0xF800001F);
	shr(ecx, (int32_t)0x18);
	add(eax, edx);
	mul32(ecx);
	shl(edx, (int32_t)0x10);
	ecx = eax; //mov
	shr(ecx, (int32_t)5);
	add(ebx, edx);
	shr(eax, (int32_t)0xB);
	and_(ecx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	add(ebx, ecx);
	add(ebx, eax);
loc_4A5A1B:
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
	to16i(esi) = bx; //mov
loc_4A5A3E:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	ebx = to32i(esp+0x2C); //mov
	inc(edi);
	dec(ebx);
	to32i(esp+0x2C) = ebx; //mov
	if (jnz())
		goto loc_4A593F;
	edx = to32i(esp); //mov
	ecx = to32i(esp+0x18); //mov
	ebx = to32i(esp+0x4C); //mov
	inc(ecx);
	add(edi, edx);
	to32i(esp+0x18) = ecx; //mov
	dec(ebx);
	to32i(esp+0x4C) = ebx; //mov
	if (jnz())
		goto loc_4A5915;
loc_4A5A6E:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A5A77:
	cmp(dl, (int8_t)0xF);
	if (jnz())
		goto loc_4A5BF7;
	to32i(esp+8) = eax; //mov
loc_4A5A84:
	ebx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x24); //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	esi = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x30) = eax; //mov
loc_4A5AAE:
	xor_(eax, eax);
	al = to8i(edi); //mov
	shr(eax, (int32_t)4);
	shl(eax, (int32_t)2);
	ebx = (int32_t)(intptr_t)(eax+ebp); //lea
	ebx = to32i(ebx); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4A5B38;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4A5B15;
	ax = to16i(esi); //mov
	ecx = eax; //mov
	and_(eax, (int32_t)0x7C00);
	shl(eax, (int32_t)0x11);
	edx = ecx; //mov
	and_(edx, (int32_t)0x3E0);
	shl(edx, (int32_t)9);
	add(eax, edx);
	and_(ecx, (int32_t)0x1F);
	add(eax, ecx);
	ecx = ebx; //mov
	shr(ecx, (int32_t)0x18);
	xor_(ecx, (int32_t)0xFF);
	mul32(ecx);
	shl(edx, (int32_t)0x10);
	add(ebx, edx);
	edx = eax; //mov
	shr(edx, (int32_t)5);
	and_(edx, (int32_t)0xFF);
	add(ebx, edx);
	shr(eax, (int32_t)0xB);
	and_(eax, (int32_t)0xFF00);
	add(ebx, eax);
loc_4A5B15:
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF80000);
	shr(ebx, (int32_t)9);
	edx = eax; //mov
	shr(eax, (int32_t)3);
	and_(edx, (int32_t)0xF800);
	shr(edx, (int32_t)6);
	and_(eax, (int32_t)0x1F);
	add(ebx, eax);
	add(ebx, edx);
	to16i(esi) = bx; //mov
loc_4A5B38:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	xor_(eax, eax);
	al = to8i(edi); //mov
	and_(eax, (int32_t)0xF);
	ebx = to32i(ebp+eax*4+0); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4A5BC1;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4A5B9E;
	ax = to16i(esi); //mov
	ecx = eax; //mov
	and_(eax, (int32_t)0x7C00);
	shl(eax, (int32_t)0x11);
	edx = ecx; //mov
	and_(edx, (int32_t)0x3E0);
	shl(edx, (int32_t)9);
	add(eax, edx);
	and_(ecx, (int32_t)0x1F);
	add(eax, ecx);
	ecx = ebx; //mov
	shr(ecx, (int32_t)0x18);
	xor_(ecx, (int32_t)0xFF);
	mul32(ecx);
	shl(edx, (int32_t)0x10);
	add(ebx, edx);
	edx = eax; //mov
	shr(edx, (int32_t)5);
	and_(edx, (int32_t)0xFF);
	add(ebx, edx);
	shr(eax, (int32_t)0xB);
	and_(eax, (int32_t)0xFF00);
	add(ebx, eax);
loc_4A5B9E:
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF80000);
	shr(ebx, (int32_t)9);
	edx = eax; //mov
	shr(eax, (int32_t)3);
	and_(edx, (int32_t)0xF800);
	shr(edx, (int32_t)6);
	and_(eax, (int32_t)0x1F);
	add(ebx, eax);
	add(ebx, edx);
	to16i(esi) = bx; //mov
loc_4A5BC1:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	ecx = to32i(esp+0x30); //mov
	inc(edi);
	dec(ecx);
	to32i(esp+0x30) = ecx; //mov
	if (jnz())
		goto loc_4A5AAE;
	esi = to32i(esp+8); //mov
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x4C); //mov
	inc(eax);
	add(edi, esi);
	to32i(esp+0x18) = eax; //mov
	dec(edx);
	to32i(esp+0x4C) = edx; //mov
	if (jz())
		goto loc_4A5A6E;
	goto loc_4A5A84;
loc_4A5BF7:
	cmp(dl, (int8_t)8);
	if (jz())
		goto loc_4A5C9C;
loc_4A5C00:
	ebx = to32i(esp+0x4C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4A5A6E;
	eax = to32i(esp+0x18); //mov
	ecx = to32i(esp+0x10); //mov
	to32i(esp+0x14) = eax; //mov
	sub(esi, ecx);
	add(eax, ebx);
	to32i(esp+4) = esi; //mov
	to32i(esp+0xC) = eax; //mov
loc_4A5C24:
	esi = to32i(esp+0x48); //mov
	xor_(ecx, ecx);
	test(esi, esi);
	if (jle())
		goto loc_4A5C7F;
	eax = to32i(esp+0x14); //mov
	esi = to32i(esp+0x24); //mov
	to32i(esp+0x20) = eax; //mov
	to32i(esp+0x1C) = eax; //mov
	inc(esi);
loc_4A5C3F:
	xor_(ebx, ebx);
	bl = to8i(edi); //mov
	inc(edi);
	eax = ebx; //mov
	and_(ebx, (int32_t)0xF);
	sar(eax, (int32_t)4);
	to32i(esp+0x28) = ebx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A5CE7;
loc_4A5C58:
	edx = to32i(esp+0x28); //mov
	test(edx, edx);
	if (jz())
		goto loc_4A5C71;
	eax = edx; //mov
	edx = to32i(esp+0x20); //mov
	ebx = to32i(ebp+eax*4+0); //mov
	eax = esi; //mov
	esp -= 4; _sub_4B3EE0(); esp += 4; //call
loc_4A5C71:
	eax = to32i(esp+0x48); //mov
	add(ecx, (int32_t)2);
	add(esi, (int32_t)2);
	cmp(ecx, eax);
	if (jl())
		goto loc_4A5C3F;
loc_4A5C7F:
	ebx = to32i(esp+4); //mov
	esi = to32i(esp+0x14); //mov
	edx = to32i(esp+0xC); //mov
	inc(esi);
	add(edi, ebx);
	to32i(esp+0x14) = esi; //mov
	cmp(esi, edx);
	if (jge())
		goto loc_4A5A6E;
	goto loc_4A5C24;
loc_4A5C9C:
	ebx = to32i(dword_4DB268); //mov
	add(ecx, ecx);
	sub(ebx, ecx);
	push32(ebx);
	push32(eax);
	esi = to32i(esp+0x54); //mov
	push32(esi);
	eax = to32i(esp+0x1C); //mov
	push32(eax);
	eax = to32i(esp+0x28); //mov
	ecx = to32i(dword_4DB26C); //mov
	shl(eax, (int32_t)2);
	add(ecx, eax);
	eax = to32i(dword_4DB260); //mov
	edx = to32i(ecx); //mov
	ecx = to32i(esp+0x34); //mov
	add(eax, edx);
	add(eax, ecx);
	push32(eax);
	push32(edi);
	add(ebp, (int32_t)0x40);
	push32(ebp);
	esp -= 4; _sub_4B416C(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A5CE7:
	ebx = to32i(ebp+eax*4+0); //mov
	eax = to32i(esp+0x24); //mov
	edx = to32i(esp+0x1C); //mov
	add(eax, ecx);
	esp -= 4; _sub_4B3EE0(); esp += 4; //call
	goto loc_4A5C58;
}
Fn(void) Game::_sub_4A5D00()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebp = to32i(esp+0x38); //mov
	edi = to32i(esp+0x3C); //mov
	to32i(esp+0x1C) = eax; //mov
	esi = edx; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4A5DCA;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+8) = edi; //mov
	to32i(esp) = eax; //mov
	imul32(eax, edi, 0);
	imul32(edi, to32i(esp+0x30));
	add(ebx, (int32_t)0x10);
	to32i(esp+0x10) = esi; //mov
	add(eax, ebx);
	add(esi, ebp);
	add(eax, edi);
	to32i(esp+4) = esi; //mov
	to32i(esp+0xC) = eax; //mov
loc_4A5D4B:
	edi = to32i(esp+0xC); //mov
	ecx = to32i(esp); //mov
	ebx = to32i(esp+0x34); //mov
	add(edi, ecx);
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_4A5DAB;
	eax = to32i(esp+0x10); //mov
	esi = to32i(esp+0x1C); //mov
	to32i(esp+0x18) = eax; //mov
	to32i(esp+0x14) = eax; //mov
	inc(esi);
loc_4A5D6F:
	ebp = (uint8_t)to8i(edi); //movzx
	ebx = ebp; //mov
	inc(edi);
	sar(ebx, (int32_t)4);
	and_(ebp, (int32_t)0xF);
	test(ebx, ebx);
	if (jnz())
		goto loc_4A5DD3;
loc_4A5D7F:
	test(ebp, ebp);
	if (jz())
		goto loc_4A5D9D;
	ebx = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(ebx, (int32_t)(intptr_t)dword_4DD71C);
	edx = to32i(esp+0x18); //mov
	eax = esi; //mov
	ebx = to32i(ebx); //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
loc_4A5D9D:
	ebp = to32i(esp+0x34); //mov
	add(ecx, (int32_t)2);
	add(esi, (int32_t)2);
	cmp(ecx, ebp);
	if (jl())
		goto loc_4A5D6F;
loc_4A5DAB:
	eax = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	ecx = to32i(esp+0x10); //mov
	ebx = to32i(esp+4); //mov
	add(edx, eax);
	inc(ecx);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_4A5D4B;
loc_4A5DCA:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A5DD3:
	shl(ebx, (int32_t)2);
	eax = to32i(esp+0x1C); //mov
	add(ebx, (int32_t)(intptr_t)dword_4DD71C);
	edx = to32i(esp+0x14); //mov
	add(eax, ecx);
	ebx = to32i(ebx); //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
	goto loc_4A5D7F;
}
Fn(void) Game::_sub_4A5DF0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	esi = eax; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+0xC) = ecx; //mov
	ebx = to32i(esp+0x40); //mov
	al = to8i(byte_4DB25C); //mov
	cmp(al, (int8_t)0x10);
	if (jnb())
		goto loc_4A5F8D;
	cmp(al, (int8_t)8);
	if (jb())
		goto loc_4A5FC5;
	if (ja())
		goto loc_4A5FB7;
	edi = (int32_t)(intptr_t)sub_4A63EC; //mov
loc_4A5E24:
	test(edi, edi);
	if (jz())
		goto loc_4A5FC5;
	ebp = to32i(dword_4DB24C); //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	to32i(esp+0x18) = ecx; //mov
	cmp(esi, ebp);
	if (jge())
		goto loc_4A5E42;
	eax = ebp; //mov
	sub(eax, esi);
loc_4A5E42:
	ecx = to32i(dword_4DB250); //mov
	cmp(edx, ecx);
	if (jge())
		goto loc_4A5E52;
	sub(ecx, edx);
	to32i(esp+0x18) = ecx; //mov
loc_4A5E52:
	ebp = to32i(dword_4DB254); //mov
	ecx = (int32_t)(intptr_t)(esi+ebx); //lea
	cmp(ecx, ebp);
	if (jle())
		goto loc_4A5E63;
	ebx = ebp; //mov
	sub(ebx, esi);
loc_4A5E63:
	ecx = to32i(esp+0x44); //mov
	ebp = to32i(dword_4DB258); //mov
	add(ecx, edx);
	cmp(ecx, ebp);
	if (jle())
		goto loc_4A5E7B;
	ecx = ebp; //mov
	sub(ecx, edx);
	to32i(esp+0x44) = ecx; //mov
loc_4A5E7B:
	test(ebx, ebx);
	if (jl())
		goto loc_4A5FC5;
	cmp(to32i(esp+0x44), (int32_t)0);
	if (jl())
		goto loc_4A5FC5;
	cmp(eax, ebx);
	if (jge())
		goto loc_4A5FC5;
	ecx = to32i(esp+0x18); //mov
	cmp(ecx, to32i(esp+0x44));
	if (jge())
		goto loc_4A5FC5;
	ebp = to32i(esp+0x3C); //mov
	add(ebp, to32i(esp+0x18));
	imul32(ebp, to32i(esp+0x48));
	to32i(esp) = ebp; //mov
	ebp = to32i(esp+8); //mov
	add(ebp, (int32_t)0x10);
	ecx = eax; //mov
	add(ebp, to32i(esp));
	and_(cl, (int8_t)0xF8);
	to32i(esp) = ebp; //mov
	ebp = to32i(esp+0xC); //mov
	add(ebp, ecx);
	sar(ebp, (int32_t)3);
	to32i(esp+4) = ebp; //mov
	ebp = to32i(esp); //mov
	add(ebp, to32i(esp+4));
	to32i(esp+0x1C) = ebp; //mov
	add(edx, to32i(esp+0x18));
	ebp = to32i(dword_4DB26C); //mov
	shl(edx, (int32_t)2);
	add(edx, ebp);
	ebp = to32i(dword_4DB260); //mov
	add(ebp, to32i(edx));
	edx = to32i(dword_4DB270); //mov
	add(esi, ecx);
	edx = to32i(edx+4); //mov
	imul32(edx, esi);
	sub(ebx, ecx);
	add(ebp, edx);
	edx = ebx; //mov
	sar(edx, (int32_t)3);
	ecx = ebx; //mov
	to32i(esp+0x14) = edx; //mov
	shl(edx, (int32_t)3);
	to32i(esp+0x10) = ebx; //mov
	sub(ecx, edx);
	and_(eax, (int32_t)7);
	to32i(esp+0x10) = ecx; //mov
	cl = al; //mov
	eax = 0xFF; //mov
	sar(eax, cl);
	cl = 8; //mov
	to8i(esp+0x24) = al; //mov
	sub(cl, to8i(esp+0x10));
	al = 0xFF; //mov
	shl(al, cl);
	to8i(esp+0x20) = al; //mov
loc_4A5F3D:
	eax = to32i(esp+0x18); //mov
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	esi = to32i(esp+0x44); //mov
	to32i(esp+0x18) = ebx; //mov
	cmp(eax, esi);
	if (jge())
		goto loc_4A5FC5;
	esi = to32i(esp+0x14); //mov
	al = to8i(esp+0x24); //mov
	ecx = to32i(esp+0x1C); //mov
	ebx = ebp; //mov
	to8i(esp+0x28) = al; //mov
	test(esi, esi);
	if (jnz())
		goto loc_4A5FCE;
loc_4A5F6A:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jnz())
		goto loc_4A6006;
loc_4A5F75:
	eax = to32i(esp+0x48); //mov
	ecx = to32i(esp+0x1C); //mov
	ebx = to32i(dword_4DB268); //mov
	add(ecx, eax);
	add(ebp, ebx);
	to32i(esp+0x1C) = ecx; //mov
	goto loc_4A5F3D;
loc_4A5F8D:
	if (ja())
		goto loc_4A5F99;
	edi = (int32_t)(intptr_t)sub_4A6430; //mov
	goto loc_4A5E24;
loc_4A5F99:
	cmp(al, (int8_t)0x18);
	if (jb())
		goto loc_4A5FC5;
	if (ja())
		goto loc_4A5FA9;
	edi = (int32_t)(intptr_t)sub_4A6480; //mov
	goto loc_4A5E24;
loc_4A5FA9:
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_4A5FC5;
	edi = (int32_t)(intptr_t)sub_4A6510; //mov
	goto loc_4A5E24;
loc_4A5FB7:
	cmp(al, (int8_t)0xF);
	if (jnz())
		goto loc_4A5FC5;
	edi = (int32_t)(intptr_t)sub_4A6430; //mov
	goto loc_4A5E24;
loc_4A5FC5:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A5FCE:
	bl = to8i(esp+0x24); //mov
	al = to8i(ecx); //mov
	edx = to32i(dword_4DD714); //mov
	and_(al, bl);
	and_(eax, (int32_t)0xFF);
	ebx = ebp; //mov
	call(edi);
	ebx = eax; //mov
	al = 0xFF; //mov
	inc(ecx);
	to8i(esp+0x28) = al; //mov
loc_4A5FEE:
	dec(esi);
	if (jz())
		goto loc_4A5F6A;
	xor_(eax, eax);
	edx = to32i(dword_4DD714); //mov
	al = to8i(ecx); //mov
	inc(ecx);
	call(edi);
	ebx = eax; //mov
	goto loc_4A5FEE;
loc_4A6006:
	al = to8i(ecx); //mov
	ah = to8i(esp+0x28); //mov
	cl = to8i(esp+0x20); //mov
	and_(al, ah);
	edx = to32i(dword_4DD714); //mov
	and_(al, cl);
	and_(eax, (int32_t)0xFF);
	call(edi);
	goto loc_4A5F75;
}
Fn(void) Game::_sub_4A6028()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x330);
	to32i(esp+0x300) = eax; //mov
	to32i(esp+0x30C) = edx; //mov
	xor_(edx, edx);
	xor_(eax, eax);
loc_4A6045:
	add(edx, (int32_t)3);
	ecx = to32i(dword_570E60+eax); //mov
	ebx = to32i(dword_570E60+eax); //mov
	shr(ecx, (int32_t)0x10);
	shr(ebx, (int32_t)8);
	to8i(esp+edx-3) = cl; //mov
	to8i(esp+edx-2) = bl; //mov
	bl = (int32_t)(intptr_t)dword_570E60[eax]; //mov
	add(eax, (int32_t)4);
	to8i(esp+edx-1) = bl; //mov
	cmp(eax, (int32_t)0x400);
	if (jnz())
		goto loc_4A6045;
	eax = to32i(esp+0x300); //mov
	xor_(edi, edi);
	add(eax, (int32_t)0x40);
	to32i(esp+0x304) = edi; //mov
	to32i(esp+0x308) = eax; //mov
loc_4A6090:
	edx = to32i(esp+0x304); //mov
	xor_(eax, eax);
	al = to8i(esp+edx); //mov
	to32i(esp+0x318) = eax; //mov
	xor_(eax, eax);
	al = to8i(esp+edx+1); //mov
	to32i(esp+0x310) = eax; //mov
	xor_(eax, eax);
	ecx = to32i(esp+0x300); //mov
	al = to8i(esp+edx+2); //mov
	xor_(esi, esi);
	to32i(esp+0x314) = eax; //mov
loc_4A60C6:
	xor_(edx, edx);
	dl = to8i(ecx+3); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A611A;
	eax = edi; //mov
loc_4A60D1:
	edx = esi; //mov
	ebx = to32i(esp+0x30C); //mov
	or_(edx, edi);
	ebp = to32i(esp+0x308); //mov
	add(edx, ebx);
	add(ecx, (int32_t)4);
	add(esi, (int32_t)0x100);
	to8i(edx) = al; //mov
	cmp(ecx, ebp);
	if (jnz())
		goto loc_4A60C6;
	eax = to32i(esp+0x304); //mov
	add(eax, (int32_t)3);
	inc(edi);
	to32i(esp+0x304) = eax; //mov
	cmp(edi, (int32_t)0x100);
	if (jl())
		goto loc_4A6090;
	add(esp, (int32_t)0x330);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A611A:
	ebx = 0xFF; //mov
	to32i(esp+0x324) = edx; //mov
	sub(ebx, edx);
	edx = to32i(esp+0x318); //mov
	imul32(edx, ebx);
	xor_(eax, eax);
	al = to8i(ecx+2); //mov
	to32i(esp+0x31C) = eax; //mov
	xor_(eax, eax);
	al = to8i(ecx); //mov
	to32i(esp+0x32C) = 0xFF; //mov
	to32i(esp+0x320) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x32C));
	add(eax, to32i(esp+0x31C));
	ebp = (uint8_t)to8i(ecx+1); //movzx
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4A6177;
	eax = 0xFF; //mov
loc_4A6177:
	edx = to32i(esp+0x310); //mov
	imul32(edx, ebx);
	to32i(esp+0x32C) = 0xFF; //mov
	to32i(esp+0x328) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x32C));
	add(eax, ebp);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4A61AD;
	eax = 0xFF; //mov
loc_4A61AD:
	edx = to32i(esp+0x314); //mov
	imul32(edx, ebx);
	ebp = eax; //mov
	ebx = 0xFF; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esp+0x320); //mov
	add(edx, eax);
	cmp(edx, ebx);
	if (jle())
		goto loc_4A61D4;
	edx = ebx; //mov
loc_4A61D4:
	eax = to32i(esp+0x324); //mov
	ebx = to32i(esp+0x328); //mov
	shl(eax, (int32_t)0x18);
	shl(ebx, (int32_t)0x10);
	shl(ebp, (int32_t)8);
	or_(eax, ebx);
	or_(eax, ebp);
	or_(eax, edx);
	esp -= 4; _sub_48266C(); esp += 4; //call
	goto loc_4A60D1;
}
Fn(void) Game::_sub_4A61FC()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	edx = to32i(dword_4DD774); //mov
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	edi = eax; //mov
	ebx = eax; //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp) = eax; //mov
	imul32(ebp, eax, 0);
	shr(ebx, (int32_t)8);
	and_(ebx, (int32_t)0xFF);
	to32i(esp+0x10) = ebx; //mov
	imul32(ebx, 0);
	shr(edi, (int32_t)0x10);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xC) = edi; //mov
	imul32(edi, 0);
	to32i(esp+8) = edx; //mov
	ecx = edx; //mov
	eax = (int32_t)(intptr_t)(edx+0x40); //lea
	xor_(esi, esi);
	to32i(esp+4) = eax; //mov
loc_4A624E:
	to32i(esp+0x14) = 0xF; //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x14));
	to32i(esp+0x14) = 0xF; //mov
	edx = edi; //mov
	to8i(ecx+3) = al; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x14));
	to32i(esp+0x14) = 0xF; //mov
	edx = ebx; //mov
	to8i(ecx+2) = al; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x14));
	to32i(esp+0x14) = 0xF; //mov
	edx = ebp; //mov
	to8i(ecx+1) = al; //mov
	eax = ebp; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x14));
	add(ecx, (int32_t)4);
	add(esi, (int32_t)0xFF);
	edx = to32i(esp); //mov
	to8i(ecx-4) = al; //mov
	eax = to32i(esp+0x10); //mov
	add(ebp, edx);
	edx = to32i(esp+0xC); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	add(edi, edx);
	cmp(ecx, eax);
	if (jnz())
		goto loc_4A624E;
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jbe())
		goto loc_4A62DB;
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A62DB:
	edx = to32i(dword_4DD774); //mov
	eax = to32i(esp+8); //mov
	add(edx, (int32_t)0x40);
	esp -= 4; _sub_4A6028(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A62F8()
{
	cmp(to32i(dword_4DD774), (int32_t)0);
	if (jnz())
		goto loc_4A631A;
	push32(ecx);
	ecx = 0x1040; //mov
	eax = ecx; //mov
	to32i(dword_4DD778) = ecx; //mov
	esp -= 4; _sub_49E3E0(); esp += 4; //call
	to32i(dword_4DD774) = eax; //mov
	pop32(ecx);
loc_4A631A:
	esp -= 4; _sub_4A6354(); esp += 4; //call
	cmp(to32i(dword_4DD6FC), (int32_t)1);
	if (jz())
		goto loc_4A633C;
	cmp(to32i(dword_4DD700), (int32_t)0);
	if (jz())
		goto loc_4A6347;
	to32i(dword_4DD77C) = (int32_t)(intptr_t)sub_4A5830; //mov
	return;
loc_4A633C:
	to32i(dword_4DD77C) = (int32_t)(intptr_t)sub_4A5DF0; //mov
	return;
loc_4A6347:
	to32i(dword_4DD77C) = (int32_t)(intptr_t)sub_4A5D00; //mov
}
Fn(void) Game::_sub_4A6354()
{
	push32(ebx);
	push32(edx);
	cmp(to32i(dword_4DD798), (int32_t)0);
	if (jnz())
		goto loc_4A6374;
	cmp(to32i(dword_4DD700), (int32_t)0);
	if (jz())
		goto loc_4A6371;
	cmp(to32i(dword_4DD6FC), (int32_t)4);
	if (jz())
		goto loc_4A63A2;
loc_4A6371:
	pop32(edx);
	pop32(ebx);
	return;
loc_4A6374:
	ebx = 0x40; //mov
	eax = (int32_t)(intptr_t)dword_4DD71C; //mov
	edx = to32i(dword_4DD774); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (ja())
		goto loc_4A6371;
	eax = to32i(dword_4DD774); //mov
	edx = (int32_t)(intptr_t)(eax+0x40); //lea
	esp -= 4; _sub_4A6028(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_4A63A2:
	eax = to32i(dword_4DD714); //mov
	esp -= 4; _sub_4A61FC(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A63B0()
{
	push32(edx);
	push32(esi);
	edx = to32i(dword_4DD774); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A63C7;
	xor_(esi, esi);
	to32i(dword_4DD77C) = esi; //mov
	pop32(esi);
	pop32(edx);
	return;
loc_4A63C7:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_49E448(); esp += 4; //call
	to32i(dword_4DD774) = ecx; //mov
	to32i(dword_4DD778) = ecx; //mov
	pop32(ecx);
	xor_(esi, esi);
	to32i(dword_4DD77C) = esi; //mov
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_4A63EC()
{
	test(al, (int8_t)0x80);
	if (jnz())
		goto loc_4A6422;
loc_4A63F0:
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_4A63F7;
	to8i(ebx+1) = dl; //mov
loc_4A63F7:
	test(al, (int8_t)0x20);
	if (jz())
		goto loc_4A63FE;
	to8i(ebx+2) = dl; //mov
loc_4A63FE:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_4A6405;
	to8i(ebx+3) = dl; //mov
loc_4A6405:
	test(al, (int8_t)8);
	if (jz())
		goto loc_4A640C;
	to8i(ebx+4) = dl; //mov
loc_4A640C:
	test(al, (int8_t)4);
	if (jz())
		goto loc_4A6413;
	to8i(ebx+5) = dl; //mov
loc_4A6413:
	test(al, (int8_t)2);
	if (jz())
		goto loc_4A641A;
	to8i(ebx+6) = dl; //mov
loc_4A641A:
	test(al, (int8_t)1);
	if (jnz())
		goto loc_4A6426;
	eax = (int32_t)(intptr_t)(ebx+8); //lea
	return;
loc_4A6422:
	to8i(ebx) = dl; //mov
	goto loc_4A63F0;
loc_4A6426:
	to8i(ebx+7) = dl; //mov
	eax = (int32_t)(intptr_t)(ebx+8); //lea
}
Fn(void) Game::_sub_4A6430()
{
	push32(ecx);
	ecx = ebx; //mov
	test(al, (int8_t)0x80);
	if (jnz())
		goto loc_4A6470;
loc_4A6437:
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_4A643F;
	to16i(ecx+2) = dx; //mov
loc_4A643F:
	test(al, (int8_t)0x20);
	if (jz())
		goto loc_4A6447;
	to16i(ecx+4) = dx; //mov
loc_4A6447:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_4A644F;
	to16i(ecx+6) = dx; //mov
loc_4A644F:
	test(al, (int8_t)8);
	if (jz())
		goto loc_4A6457;
	to16i(ecx+8) = dx; //mov
loc_4A6457:
	test(al, (int8_t)4);
	if (jz())
		goto loc_4A645F;
	to16i(ecx+0xA) = dx; //mov
loc_4A645F:
	test(al, (int8_t)2);
	if (jz())
		goto loc_4A6467;
	to16i(ecx+0xC) = dx; //mov
loc_4A6467:
	test(al, (int8_t)1);
	if (jnz())
		goto loc_4A6475;
	eax = (int32_t)(intptr_t)(ecx+0x10); //lea
	pop32(ecx);
	return;
loc_4A6470:
	to16i(ebx) = dx; //mov
	goto loc_4A6437;
loc_4A6475:
	to16i(ecx+0xE) = dx; //mov
	eax = (int32_t)(intptr_t)(ecx+0x10); //lea
	pop32(ecx);
}
Fn(void) Game::_sub_4A6480()
{
	push32(ecx);
	sub(esp, (int32_t)4);
	to32i(esp) = edx; //mov
	ecx = to32i(esp); //mov
	sar(ecx, (int32_t)8);
	sar(edx, (int32_t)0x10);
	ah = cl; //mov
	dh = to8i(esp); //mov
	test(al, (int8_t)0x80);
	if (jnz())
		goto loc_4A64F3;
loc_4A6499:
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_4A64A6;
	to8i(ebx+3) = dl; //mov
	to8i(ebx+4) = ah; //mov
	to8i(ebx+5) = dh; //mov
loc_4A64A6:
	test(al, (int8_t)0x20);
	if (jz())
		goto loc_4A64B3;
	to8i(ebx+6) = dl; //mov
	to8i(ebx+7) = ah; //mov
	to8i(ebx+8) = dh; //mov
loc_4A64B3:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_4A64C0;
	to8i(ebx+9) = dl; //mov
	to8i(ebx+0xA) = ah; //mov
	to8i(ebx+0xB) = dh; //mov
loc_4A64C0:
	test(al, (int8_t)8);
	if (jz())
		goto loc_4A64CD;
	to8i(ebx+0xC) = dl; //mov
	to8i(ebx+0xD) = ah; //mov
	to8i(ebx+0xE) = dh; //mov
loc_4A64CD:
	test(al, (int8_t)4);
	if (jz())
		goto loc_4A64DA;
	to8i(ebx+0xF) = dl; //mov
	to8i(ebx+0x10) = ah; //mov
	to8i(ebx+0x11) = dh; //mov
loc_4A64DA:
	test(al, (int8_t)2);
	if (jz())
		goto loc_4A64E7;
	to8i(ebx+0x12) = dl; //mov
	to8i(ebx+0x13) = ah; //mov
	to8i(ebx+0x14) = dh; //mov
loc_4A64E7:
	test(al, (int8_t)1);
	if (jnz())
		goto loc_4A64FD;
	eax = (int32_t)(intptr_t)(ebx+0x18); //lea
	add(esp, (int32_t)4);
	pop32(ecx);
	return;
loc_4A64F3:
	to8i(ebx) = dl; //mov
	to8i(ebx+1) = cl; //mov
	to8i(ebx+2) = dh; //mov
	goto loc_4A6499;
loc_4A64FD:
	to8i(ebx+0x15) = dl; //mov
	to8i(ebx+0x16) = ah; //mov
	to8i(ebx+0x17) = dh; //mov
	eax = (int32_t)(intptr_t)(ebx+0x18); //lea
	add(esp, (int32_t)4);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6510()
{
	push32(ecx);
	ecx = ebx; //mov
	test(al, (int8_t)0x80);
	if (jnz())
		goto loc_4A654A;
loc_4A6517:
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_4A651E;
	to32i(ecx+4) = edx; //mov
loc_4A651E:
	test(al, (int8_t)0x20);
	if (jz())
		goto loc_4A6525;
	to32i(ecx+8) = edx; //mov
loc_4A6525:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_4A652C;
	to32i(ecx+0xC) = edx; //mov
loc_4A652C:
	test(al, (int8_t)8);
	if (jz())
		goto loc_4A6533;
	to32i(ecx+0x10) = edx; //mov
loc_4A6533:
	test(al, (int8_t)4);
	if (jz())
		goto loc_4A653A;
	to32i(ecx+0x14) = edx; //mov
loc_4A653A:
	test(al, (int8_t)2);
	if (jz())
		goto loc_4A6541;
	to32i(ecx+0x18) = edx; //mov
loc_4A6541:
	test(al, (int8_t)1);
	if (jnz())
		goto loc_4A654E;
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	pop32(ecx);
	return;
loc_4A654A:
	to32i(ebx) = edx; //mov
	goto loc_4A6517;
loc_4A654E:
	to32i(ecx+0x1C) = edx; //mov
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	pop32(ecx);
}
Fn(void) Game::_malloc_()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = malloc_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A66EC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = ebx; //mov
	edi = to32i(dword_563F28); //mov
	xor_(ecx, ecx);
	test(edx, (int32_t)3);
	if (jz())
		goto loc_4A6722;
	sub(ebp, (int32_t)1);
	if (js())
		goto loc_4A671F;
loc_4A6707:
	cl = to8i(eax); //mov
	cmp(cl, (int8_t)0xFF);
	if (jz())
		goto loc_4A671F;
	ebx = to32i(edi+ecx*4); //mov
	to16i(edx) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	edx = (int32_t)(intptr_t)(edx+2); //lea
	sub(ebp, (int32_t)1);
	if (jns())
		goto loc_4A6707;
loc_4A671F:
	add(ebp, (int32_t)1);
loc_4A6722:
	sub(ebp, (int32_t)2);
	if (js())
		goto loc_4A6780;
loc_4A6727:
	cl = to8i(eax); //mov
	cmp(cl, (int8_t)0xFF);
	if (jz())
		goto loc_4A6756;
	ebx = to32i(edi+ecx*4); //mov
	cl = to8i(eax+1); //mov
	cmp(cl, (int8_t)0xFF);
	if (jz())
		goto loc_4A6772;
	esi = to32i(edi+ecx*4); //mov
	and_(ebx, (int32_t)0xFFFF);
	shl(esi, (int32_t)0x10);
	or_(ebx, esi);
	to32i(edx) = ebx; //mov
loc_4A6749:
	eax = (int32_t)(intptr_t)(eax+2); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	sub(ebp, (int32_t)2);
	if (jns())
		goto loc_4A6727;
	goto loc_4A6780;
loc_4A6756:
	cl = to8i(eax+1); //mov
	cmp(cl, (int8_t)0xFF);
	if (jz())
		goto loc_4A6749;
	ebx = to32i(edi+ecx*4); //mov
	to16i(edx+2) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	sub(ebp, (int32_t)2);
	if (jns())
		goto loc_4A6727;
	goto loc_4A6780;
loc_4A6772:
	to16i(edx) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	sub(ebp, (int32_t)2);
	if (jns())
		goto loc_4A6727;
loc_4A6780:
	add(ebp, (int32_t)2);
	sub(ebp, (int32_t)1);
	if (js())
		goto loc_4A67A0;
loc_4A6788:
	cl = to8i(eax); //mov
	cmp(cl, (int8_t)0xFF);
	if (jz())
		goto loc_4A67A0;
	ebx = to32i(edi+ecx*4); //mov
	to16i(edx) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	edx = (int32_t)(intptr_t)(edx+2); //lea
	sub(ebp, (int32_t)1);
	if (jns())
		goto loc_4A6788;
loc_4A67A0:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A67F8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	eax = edi; //mov
	ecx = 0x40; //mov
	edx = (int32_t)(intptr_t)dword_4DDC4E; //mov
loc_4A680B:
	cmp(to32i(edx), eax);
	if (jz())
		goto loc_4A6821;
	cmp(to16i(edx), (int16_t)0);
	if (jz())
		goto loc_4A681F;
	add(edx, (int32_t)4);
	dec(ecx);
	if (jnz())
		goto loc_4A680B;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4A681F:
	to32i(edx) = eax; //mov
loc_4A6821:
	eax = 0x41; //mov
	sub(eax, ecx);
	edx = esi; //mov
	or_(dl, dl);
	if (jz())
		goto loc_4A683D;
	cmp(edx, (int32_t)0x7F);
	if (jg())
		goto loc_4A6839;
	byte_4DDB44[edx] = al; //mov
loc_4A6839:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4A683D:
	edx = (uint8_t)dh; //movzx
	cmp(edx, (int32_t)0x84);
	if (jg())
		goto loc_4A6839;
	byte_4DDBC4[edx] = al; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6860()
{
	push32(ecx);
	push32(edx);
	edx = to32i(eax); //mov
	inc(edx);
	xor_(ecx, ecx);
	cl = to8i(edx-1); //mov
	to32i(eax) = edx; //mov
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
