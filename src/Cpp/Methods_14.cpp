#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_4A6874()
{
	cmp(eax, (int32_t)0x20);
	if (jl())
		goto locret_4A688B;
	cmp(eax, (int32_t)0x7F);
	if (jg())
		goto locret_4A688B;
	ax = to16i(word_4DDD14+eax*2); //mov
	and_(eax, (int32_t)0xFFFF);
locret_4A688B:
	return;
}
Fn(void) Game::_sub_4A688C()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(eax); //mov
	xor_(ah, ah);
	al = to8i(edx); //mov
	inc(edx);
	test(al, (int8_t)0x80);
	if (jz())
		goto loc_4A68B1;
	push32(ebx);
	xor_(bh, bh);
	shl(eax, (int32_t)8);
	bl = to8i(edx); //mov
	inc(edx);
	or_(eax, ebx);
	pop32(ebx);
	to32i(ecx) = edx; //mov
	and_(eax, (int32_t)0xFFFF);
	pop32(edx);
	pop32(ecx);
	return;
loc_4A68B1:
	and_(eax, (int32_t)0xFFFF);
	esp -= 4; _sub_4A6874(); esp += 4; //call
	to32i(ecx) = edx; //mov
	and_(eax, (int32_t)0xFFFF);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A68D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ebx = eax; //mov
	esi = to32i(dword_4DB24C); //mov
	xor_(ecx, ecx);
	cmp(eax, esi);
	if (jl())
		goto loc_4A6930;
	cmp(eax, to32i(dword_4DB254));
	if (jge())
		goto loc_4A6930;
	cmp(edx, to32i(dword_4DB250));
	if (jl())
		goto loc_4A6930;
	cmp(edx, to32i(dword_4DB258));
	if (jge())
		goto loc_4A6930;
	eax = to32i(dword_4DB26C); //mov
	esi = to32i(dword_4DB270); //mov
	edx = to32i(eax+edx*4); //mov
	edi = to32i(esi+ebx*4); //mov
	eax = to32i(dword_4DB260); //mov
	add(edx, edi);
	add(edx, eax);
	al = to8i(byte_4DB25C); //mov
	cmp(al, (int8_t)0xF);
	if (jnb())
		goto loc_4A6937;
	cmp(al, (int8_t)4);
	if (jb())
		goto loc_4A6930;
	if (ja())
		goto loc_4A6952;
	test(bl, (int8_t)1);
	if (jz())
		goto loc_4A695A;
	cl = to8i(edx); //mov
	sar(ecx, (int32_t)4);
	and_(ecx, (int32_t)0xF);
loc_4A6930:
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A6937:
	if (jbe())
		goto loc_4A6941;
	cmp(al, (int8_t)0x18);
	if (jnb())
		goto loc_4A6948;
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_4A6930;
loc_4A6941:
	xor_(ecx, ecx);
	cx = to16i(edx); //mov
	goto loc_4A6930;
loc_4A6948:
	if (jbe())
		goto loc_4A6966;
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_4A6930;
	ecx = to32i(edx); //mov
	goto loc_4A6930;
loc_4A6952:
	cmp(al, (int8_t)8);
	if (jnz())
		goto loc_4A6930;
	cl = to8i(edx); //mov
	goto loc_4A6930;
loc_4A695A:
	cl = to8i(edx); //mov
	and_(ecx, (int32_t)0xF);
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A6966:
	ecx = 3; //mov
	eax = edx; //mov
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = eax; //mov
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A6988()
{
	push32(ecx);
	push32(esi);
	test(edx, (int32_t)2);
	if (jz())
		goto loc_4A69B5;
	cmp(ebx, (int32_t)1);
	if (jl())
		goto loc_4A69B5;
	cx = to16i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0xFFC0);
	shr(ecx, (int32_t)1);
	and_(esi, (int32_t)0x1F);
	or_(ecx, esi);
	sub(ebx, (int32_t)1);
	to16i(edx) = cx; //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
loc_4A69B5:
	sub(ebx, (int32_t)2);
	if (js())
		goto loc_4A69DB;
loc_4A69BA:
	ecx = to32i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0xFFC0FFC0);
	shr(ecx, (int32_t)1);
	and_(esi, (int32_t)0x1F001F);
	or_(ecx, esi);
	sub(ebx, (int32_t)2);
	to32i(edx) = ecx; //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	if (jns())
		goto loc_4A69BA;
loc_4A69DB:
	add(ebx, (int32_t)1);
	if (js())
		goto loc_4A6A00;
loc_4A69E0:
	cx = to16i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0xFFC0);
	shr(ecx, (int32_t)1);
	and_(esi, (int32_t)0x1F);
	or_(ecx, esi);
	sub(ebx, (int32_t)1);
	to16i(edx) = cx; //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	if (jns())
		goto loc_4A69E0;
loc_4A6A00:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6A03()
{
	push32(ecx);
	push32(esi);
	test(edx, (int32_t)2);
	if (jz())
		goto loc_4A6A30;
	cmp(ebx, (int32_t)1);
	if (jl())
		goto loc_4A6A30;
	cx = to16i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0x7FE0);
	add(ecx, ecx);
	and_(esi, (int32_t)0x1F);
	or_(ecx, esi);
	sub(ebx, (int32_t)1);
	to16i(edx) = cx; //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
loc_4A6A30:
	sub(ebx, (int32_t)2);
	if (js())
		goto loc_4A6A56;
loc_4A6A35:
	ecx = to32i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0x7FE07FE0);
	add(ecx, ecx);
	and_(esi, (int32_t)0x1F001F);
	or_(ecx, esi);
	sub(ebx, (int32_t)2);
	to32i(edx) = ecx; //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	if (jns())
		goto loc_4A6A35;
loc_4A6A56:
	add(ebx, (int32_t)1);
	if (js())
		goto loc_4A6A7B;
loc_4A6A5B:
	cx = to16i(eax); //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	esi = ecx; //mov
	and_(ecx, (int32_t)0x7FE0);
	add(ecx, ecx);
	and_(esi, (int32_t)0x1F);
	or_(ecx, esi);
	sub(ebx, (int32_t)1);
	to16i(edx) = cx; //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	if (jns())
		goto loc_4A6A5B;
loc_4A6A7B:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6A7E()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = to32i(off_4DD044); //mov
	xor_(ecx, ecx);
loc_4A6A89:
	cl = to8i(eax); //mov
	sub(ebx, (int32_t)1);
	eax = (int32_t)(intptr_t)(eax+1); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	esi = to32i(edi+ecx*4); //mov
	to32i(edx-4) = esi; //mov
	if (jg())
		goto loc_4A6A89;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6AA0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	xor_(edx, edx);
	sub(ebp, (int32_t)4);
	test(edi, (int32_t)2);
	if (jnz())
		goto loc_4A6B0B;
	cmp(ebp, (int32_t)0);
	if (js())
		goto loc_4A6B0B;
	al = to8i(esi+1); //mov
	bl = to8i(esi); //mov
	cl = to8i(esi+3); //mov
	dl = to8i(esi+2); //mov
loc_4A6ACD:
	eax = to32i(dword_56EF38+2+eax*2); //mov
	esi = (int32_t)(intptr_t)(esi+4); //lea
	ecx = to32i(dword_56EF38+2+ecx*2); //mov
	edi = (int32_t)(intptr_t)(edi+8); //lea
	ax = to16i(word_56EF3C+ebx*2); //mov
	bl = to8i(esi); //mov
	cx = to16i(word_56EF3C+edx*2); //mov
	dl = to8i(esi+2); //mov
	to32i(edi-8) = eax; //mov
	to32i(edi-4) = ecx; //mov
	eax = ebx; //mov
	ecx = edx; //mov
	al = to8i(esi+1); //mov
	sub(ebp, (int32_t)4);
	cl = to8i(esi+3); //mov
	if (jns())
		goto loc_4A6ACD;
loc_4A6B0B:
	add(ebp, (int32_t)3);
	if (js())
		goto loc_4A6B28;
loc_4A6B10:
	dl = to8i(esi); //mov
	esi = (int32_t)(intptr_t)(esi+1); //lea
	ax = to16i(word_56EF3C+edx*2); //mov
	to16i(edi) = ax; //mov
	edi = (int32_t)(intptr_t)(edi+2); //lea
	sub(ebp, (int32_t)1);
	if (jns())
		goto loc_4A6B10;
loc_4A6B28:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6B2D()
{
	push32(ecx);
	push32(esi);
	esi = (int32_t)(intptr_t)(eax-1); //lea
	sub(ebx, (int32_t)4);
	if (js())
		goto loc_4A6B76;
loc_4A6B37:
	eax = to32i(esi); //mov
	ecx = to32i(esi+3); //mov
	eax = bswap_32(eax);
	ecx = bswap_32(ecx);
	or_(eax, (int32_t)0xFF000000);
	or_(ecx, (int32_t)0xFF000000);
	to32i(edx) = eax; //mov
	to32i(edx+4) = ecx; //mov
	eax = to32i(esi+6); //mov
	ecx = to32i(esi+9); //mov
	eax = bswap_32(eax);
	ecx = bswap_32(ecx);
	or_(eax, (int32_t)0xFF000000);
	or_(ecx, (int32_t)0xFF000000);
	to32i(edx+8) = eax; //mov
	to32i(edx+0xC) = ecx; //mov
	sub(ebx, (int32_t)4);
	esi = (int32_t)(intptr_t)(esi+0xC); //lea
	edx = (int32_t)(intptr_t)(edx+0x10); //lea
	if (jns())
		goto loc_4A6B37;
loc_4A6B76:
	add(ebx, (int32_t)3);
	if (js())
		goto loc_4A6B91;
loc_4A6B7B:
	eax = to32i(esi); //mov
	eax = bswap_32(eax);
	or_(eax, (int32_t)0xFF000000);
	to32i(edx) = eax; //mov
	sub(ebx, (int32_t)1);
	esi = (int32_t)(intptr_t)(esi+3); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	if (jns())
		goto loc_4A6B7B;
loc_4A6B91:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6B94()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(ebx, (int32_t)2);
	if (js())
		goto loc_4A6BCB;
loc_4A6B9C:
	ecx = to32i(eax); //mov
	edi = ecx; //mov
	and_(edi, (int32_t)0x7C007C00);
	shr(edi, (int32_t)0xA);
	esi = ecx; //mov
	and_(esi, (int32_t)0x83E083E0);
	or_(edi, esi);
	and_(ecx, (int32_t)0x1F001F);
	shl(ecx, (int32_t)0xA);
	or_(edi, ecx);
	to32i(edx) = edi; //mov
	sub(ebx, (int32_t)2);
	eax = (int32_t)(intptr_t)(eax+4); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	if (jns())
		goto loc_4A6B9C;
loc_4A6BCB:
	add(ebx, (int32_t)1);
	if (js())
		goto loc_4A6C01;
loc_4A6BD0:
	cx = to16i(eax); //mov
	edi = ecx; //mov
	and_(edi, (int32_t)0x7C007C00);
	shr(edi, (int32_t)0xA);
	esi = ecx; //mov
	and_(esi, (int32_t)0x83E083E0);
	or_(edi, esi);
	and_(ecx, (int32_t)0x1F001F);
	shl(ecx, (int32_t)0xA);
	or_(edi, ecx);
	to16i(edx) = di; //mov
	sub(ebx, (int32_t)1);
	eax = (int32_t)(intptr_t)(eax+2); //lea
	edx = (int32_t)(intptr_t)(edx+2); //lea
	if (jns())
		goto loc_4A6BD0;
loc_4A6C01:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6C05()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	sub(ebp, (int32_t)4);
	test(edi, (int32_t)2);
	if (jnz())
		goto loc_4A6C6E;
	cmp(ebp, (int32_t)0);
	if (js())
		goto loc_4A6C6E;
	al = to8i(esi); //mov
	bl = to8i(esi+1); //mov
loc_4A6C2A:
	ecx = eax; //mov
	shr(ecx, (int32_t)4);
	edx = to32i(dword_56EF38+2+ecx*2); //mov
	esi = (int32_t)(intptr_t)(esi+2); //lea
	ecx = ebx; //mov
	shr(ecx, (int32_t)4);
	ecx = to32i(dword_56EF38+2+ecx*2); //mov
	edi = (int32_t)(intptr_t)(edi+8); //lea
	and_(eax, (int32_t)0xF);
	dx = to16i(word_56EF3C+eax*2); //mov
	al = to8i(esi); //mov
	and_(ebx, (int32_t)0xF);
	cx = to16i(word_56EF3C+ebx*2); //mov
	bl = to8i(esi+1); //mov
	to32i(edi-8) = edx; //mov
	to32i(edi-4) = ecx; //mov
	sub(ebp, (int32_t)4);
	if (jns())
		goto loc_4A6C2A;
loc_4A6C6E:
	add(ebp, (int32_t)2);
	if (js())
		goto loc_4A6C9A;
loc_4A6C73:
	ecx = eax; //mov
	shr(ecx, (int32_t)4);
	edx = to32i(dword_56EF38+2+ecx*2); //mov
	esi = (int32_t)(intptr_t)(esi+1); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	and_(eax, (int32_t)0xF);
	dx = to16i(word_56EF3C+eax*2); //mov
	al = to8i(esi); //mov
	to32i(edi-4) = edx; //mov
	sub(ebp, (int32_t)2);
	if (jns())
		goto loc_4A6C73;
loc_4A6C9A:
	add(ebp, (int32_t)1);
	if (js())
		goto loc_4A6CAD;
	and_(eax, (int32_t)0xF);
	dx = to16i(word_56EF3C+eax*2); //mov
	to16i(edi) = dx; //mov
loc_4A6CAD:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4A6EA8()
{
	push32(ecx);
	pushf();
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x20);
	pushf();
	pop32(eax);
	ecx = eax; //mov
	xor_(eax, (int32_t)0x200000);
	push32(eax);
	popf();
	pushf();
	pop32(eax);
	xor_(eax, ecx);
	esp = ebp; //mov
	pop32(ebp);
	popf();
	pop32(ecx);
}
Fn(void) Game::_sub_4A6EC5()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(eax);
	eax = edx; //mov
	cpuid();
	pop32(esi);
	to32i(esi) = eax; //mov
	to32i(esi+4) = ebx; //mov
	to32i(esi+8) = edx; //mov
	to32i(esi+0xC) = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A6EE1()
{
	push32(ebx);
	push32(edx);
	xor_(eax, eax);
	sahf();
	eax = 5; //mov
	ebx = 2; //mov
	div8(bl);
	lahf();
	cmp(ah, (int8_t)2);
	eax = 0; //mov
	if (jnz())
		goto loc_4A6F02;
	eax = 1; //mov
loc_4A6F02:
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_strncat_()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	esi = edx; //mov
	ecx = 0xFFFFFFFF; //mov
	edi = ebp; //mov
	xor_(al, al);
	push16(es);
	if (!ecx) //jecxz
		goto loc_4A6F22;
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
		goto loc_4A6F22;
	dec(edi);
	goto loc_4A6F24;
loc_4A6F22:
	edi = ecx; //mov
loc_4A6F24:
	pop16(es);
	eax = edi; //mov
loc_4A6F29:
	test(ebx, ebx);
	if (jz())
		goto loc_4A6F3A;
	dl = to8i(esi); //mov
	to8i(eax) = dl; //mov
	test(dl, dl);
	if (jz())
		goto loc_4A6F3A;
	inc(eax);
	inc(esi);
	dec(ebx);
	goto loc_4A6F29;
loc_4A6F3A:
	to8i(eax) = 0; //mov
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_nullsub_50()
{
	return;
}
Fn(void) Game::_sub_4A6F54()
{
	push32(ebp);
	eax = to32i(dword_4DABAC); //mov
	to32i(dword_4DDEE4) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4A6F65;
	pop32(ebp);
	return;
loc_4A6F65:
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	ecx = (int32_t)(intptr_t)sub_4B634C; //mov
	ebx = (int32_t)(intptr_t)sub_4B644C; //mov
	esi = (int32_t)(intptr_t)sub_4B651C; //mov
	edi = (int32_t)(intptr_t)sub_4B6610; //mov
	ebp = (int32_t)(intptr_t)sub_4B66F0; //mov
	eax = (int32_t)(intptr_t)sub_4B6724; //mov
	edx = (int32_t)(intptr_t)sub_4B67D4; //mov
	to32i(off_4DDE8C) = ecx; //mov
	to32i(off_4DDE90) = ebx; //mov
	to32i(off_4DDE94) = esi; //mov
	to32i(off_4DDE98) = edi; //mov
	to32i(off_4DDEBC) = ebp; //mov
	to32i(off_4DDEC0) = eax; //mov
	to32i(off_4DDEC4) = edx; //mov
	ecx = (int32_t)(intptr_t)sub_4B6804; //mov
	ebx = (int32_t)(intptr_t)sub_4B6884; //mov
	esi = (int32_t)(intptr_t)sub_4B6BE8; //mov
	edi = (int32_t)(intptr_t)sub_4B6FDC; //mov
	ebp = (int32_t)(intptr_t)sub_4B7350; //mov
	eax = (int32_t)(intptr_t)sub_4B7794; //mov
	to32i(off_4DDEC8) = ecx; //mov
	to32i(off_4DDECC) = ebx; //mov
	to32i(off_4DDEAC) = esi; //mov
	to32i(off_4DDEB0) = edi; //mov
	to32i(off_4DDEB4) = ebp; //mov
	to32i(off_4DDEB8) = eax; //mov
	to32i(off_4DDE9C) = esi; //mov
	to32i(off_4DDEA0) = edi; //mov
	to32i(off_4DDEA4) = ebp; //mov
	to32i(off_4DDEA8) = eax; //mov
	edi = (int32_t)(intptr_t)sub_4B77D4; //mov
	xor_(ebp, ebp);
	to32i(off_4DDED0) = edi; //mov
	to32i(dword_4DDEE0) = ebp; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	pop32(ebp);
}
Fn(void) Game::_sub_4A7028()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebx = to32i(off_4DDED4); //mov
	esi = to32i(off_4DDEDC); //mov
	edi = to32i(off_4DDED8); //mov
	ecx = eax; //mov
	ebp = edx; //mov
	esp -= 4; _sub_4B77E0(); esp += 4; //call
	esp -= 4; _sub_4B7890(); esp += 4; //call
	esp -= 4; _sub_4B79D0(); esp += 4; //call
	esp -= 4; _sub_4B7A80(); esp += 4; //call
	edi = to32i(off_4DDED8); //mov
	esi = to32i(off_4DDEDC); //mov
loc_4A7066:
	ebx = to32i(off_4DDED4); //mov
	to32i(esp) = 8; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	test(edx, edx);
	if (jnz())
		goto loc_4A7099;
loc_4A7081:
	to32i(esp) = 8; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	test(edx, edx);
	if (jz())
		goto loc_4A70A2;
	inc(edi);
	goto loc_4A7081;
loc_4A7099:
	inc(ebx);
	to32i(off_4DDED4) = ebx; //mov
	goto loc_4A7066;
loc_4A70A2:
	to32i(esp) = 8; //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	to32i(off_4DDED4) = ebx; //mov
	to32i(off_4DDEDC) = esi; //mov
	to32i(off_4DDED8) = edi; //mov
	test(edx, edx);
	if (jz())
		goto loc_4A70CC;
	inc(esi);
	goto loc_4A70A2;
loc_4A70CC:
	esp -= 4; _sub_4A6F54(); esp += 4; //call
	to32i(dword_5AF5E0) = ebp; //mov
	test(cl, (int8_t)8);
	if (jz())
		goto loc_4A7185;
	edx = 0x400; //mov
	edi = to32i(off_4DDED8); //mov
	esi = to32i(off_4DDEDC); //mov
	eax = to32i(off_4DDEC8); //mov
	ebx = to32i(off_4DDED4); //mov
loc_4A70FC:
	to32i(dword_5AF5E4) = eax; //mov
	to32i(dword_5AF5E8) = edx; //mov
loc_4A7107:
	test(ch, (int8_t)0x20);
	if (jz())
		goto loc_4A71FC;
	to32i(dword_5AF5EC) = 0xAC44; //mov
loc_4A711A:
	xor_(eax, eax);
	to32i(off_4DDEDC) = esi; //mov
	to32i(off_4DDED8) = edi; //mov
loc_4A7128:
	add(eax, (int32_t)0xDE4);
	xor_(dl, dl);
	byte_5A09B8[eax] = dl; //mov
	cmp(eax, (int32_t)0xDE40);
	if (jnz())
		goto loc_4A7128;
	push32(0x200);
	push32(ebx);
	to32i(off_4DDED4) = ebx; //mov
	call(to32i(off_4DDECC));
	add(esp, (int32_t)8);
	push32(0x200);
	eax = 0x1F4; //mov
	push32(dword_4DE2E8);
	to32i(dword_5AF5DC) = eax; //mov
	call(to32i(off_4DDECC));
	ebx = to32i(off_4DDED4); //mov
	add(esp, (int32_t)8);
	xor_(eax, eax);
	to32i(off_4DDED4) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A7185:
	edi = to32i(off_4DDED8); //mov
	esi = to32i(off_4DDEDC); //mov
	ebx = to32i(off_4DDED4); //mov
	test(cl, (int8_t)2);
	if (jz())
		goto loc_4A71B5;
	eax = to32i(off_4DDEC0); //mov
	to32i(dword_5AF5E4) = eax; //mov
	to32i(dword_5AF5E8) = 0x200; //mov
	goto loc_4A7107;
loc_4A71B5:
	test(cl, (int8_t)4);
	if (jz())
		goto loc_4A71D4;
	eax = to32i(off_4DDEC4); //mov
	ebp = 0x200; //mov
	to32i(dword_5AF5E4) = eax; //mov
	to32i(dword_5AF5E8) = ebp; //mov
	goto loc_4A7107;
loc_4A71D4:
	test(cl, (int8_t)1);
	if (jz())
		goto loc_4A71E8;
	eax = to32i(off_4DDEBC); //mov
	edx = 0x100; //mov
	goto loc_4A70FC;
loc_4A71E8:
	eax = 0xFFFFFFF8; //mov
	to32i(off_4DDED4) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A71FC:
	test(ch, (int8_t)0x10);
	if (jz())
		goto loc_4A7210;
	to32i(dword_5AF5EC) = 0x7D00; //mov
	goto loc_4A711A;
loc_4A7210:
	test(ch, (int8_t)8);
	if (jz())
		goto loc_4A7224;
	to32i(dword_5AF5EC) = 0x5622; //mov
	goto loc_4A711A;
loc_4A7224:
	test(ch, (int8_t)4);
	if (jz())
		goto loc_4A7238;
	to32i(dword_5AF5EC) = 0x3E80; //mov
	goto loc_4A711A;
loc_4A7238:
	test(ch, (int8_t)2);
	if (jz())
		goto loc_4A724C;
	to32i(dword_5AF5EC) = 0x2B11; //mov
	goto loc_4A711A;
loc_4A724C:
	test(ch, (int8_t)1);
	if (jz())
		goto loc_4A7260;
	to32i(dword_5AF5EC) = 0x1F40; //mov
	goto loc_4A711A;
loc_4A7260:
	eax = 0xFFFFFFF8; //mov
	to32i(off_4DDEDC) = esi; //mov
	to32i(off_4DDED8) = edi; //mov
	to32i(off_4DDED4) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A734C()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = to32i(esp+0x30); //mov
	shl(eax, (int32_t)2);
	esi = (int32_t)(intptr_t)(eax*8+0); //lea
	sub(esi, eax);
	eax = esi; //mov
	shl(esi, (int32_t)7);
	sub(esi, eax);
	add(esi, (int32_t)(intptr_t)dword_5A179C);
	to8i(esi) = 0; //mov
	eax = (int32_t)(intptr_t)(esi+0xC); //lea
	to8i(esi+9) = 0xFF; //mov
	to32i(esi+0xD60) = eax; //mov
	test(dl, (int8_t)4);
	if (jnz())
		goto loc_4A73DD;
	test(dl, (int8_t)8);
	if (jz())
		goto loc_4A7407;
	eax = to32i(off_4DDE98); //mov
	to32i(esp) = eax; //mov
	eax = 9; //mov
	cmp(edi, (int32_t)0x19);
	if (jg())
		goto loc_4A73FF;
	edi = to32i(off_4DDEA8); //mov
loc_4A73A5:
	test(ebx, ebx);
	if (jnz())
		goto loc_4A7469;
loc_4A73AD:
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_4A74D6;
	cmp(to32i(esp+0x20), (int32_t)0);
	if (jle())
		goto loc_4A73BF;
loc_4A73BD:
	add(eax, ecx);
loc_4A73BF:
	shl(eax, (int32_t)2);
	cmp(to32i(dword_4DDE14+eax), (int32_t)0);
	if (jnz())
		goto loc_4A74ED;
loc_4A73CF:
	eax = 0xFFFFFFF2; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x24; return;
loc_4A73DD:
	eax = to32i(off_4DDE94); //mov
	to32i(esp) = eax; //mov
	eax = 6; //mov
	cmp(edi, (int32_t)0x19);
	if (jg())
		goto loc_4A73F7;
	edi = to32i(off_4DDEA4); //mov
	goto loc_4A73A5;
loc_4A73F7:
	edi = to32i(off_4DDEB4); //mov
	goto loc_4A73A5;
loc_4A73FF:
	edi = to32i(off_4DDEB8); //mov
	goto loc_4A73A5;
loc_4A7407:
	test(dl, (int8_t)1);
	if (jz())
		goto loc_4A742E;
	eax = to32i(off_4DDE8C); //mov
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	cmp(edi, (int32_t)0x19);
	if (jg())
		goto loc_4A7423;
	edi = to32i(off_4DDE9C); //mov
	goto loc_4A73A5;
loc_4A7423:
	edi = to32i(off_4DDEAC); //mov
	goto loc_4A73A5;
loc_4A742E:
	test(dl, (int8_t)2);
	if (jz())
		goto loc_4A745B;
	eax = to32i(off_4DDE90); //mov
	to32i(esp) = eax; //mov
	eax = 3; //mov
	cmp(edi, (int32_t)0x19);
	if (jg())
		goto loc_4A7450;
	edi = to32i(off_4DDEA0); //mov
	goto loc_4A73A5;
loc_4A7450:
	edi = to32i(off_4DDEB0); //mov
	goto loc_4A73A5;
loc_4A745B:
	eax = 0xFFFFFFF1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x24; return;
loc_4A7469:
	cmp(ebx, (int32_t)7);
	if (jnz())
		goto loc_4A749A;
	test(dl, (int8_t)4);
	if (jz())
		goto loc_4A747D;
	eax = 0xC; //mov
	goto loc_4A73AD;
loc_4A747D:
	test(dl, (int8_t)8);
	if (jz())
		goto loc_4A748C;
	eax = 0xF; //mov
	goto loc_4A73AD;
loc_4A748C:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x24; return;
loc_4A749A:
	cmp(ebx, (int32_t)9);
	if (jnz())
		goto loc_4A74AE;
loc_4A749F:
	test(dl, (int8_t)4);
	if (jz())
		goto loc_4A748C;
	eax = 0x1B; //mov
	goto loc_4A73AD;
loc_4A74AE:
	cmp(ebx, (int32_t)8);
	if (jz())
		goto loc_4A749F;
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_4A745B;
	test(dl, (int8_t)4);
	if (jz())
		goto loc_4A74C7;
	eax = 0x12; //mov
	goto loc_4A73AD;
loc_4A74C7:
	test(dl, (int8_t)8);
	if (jz())
		goto loc_4A748C;
	eax = 0x15; //mov
	goto loc_4A73AD;
loc_4A74D6:
	cmp(ecx, (int32_t)2);
	if (jz())
		goto loc_4A73BD;
	eax = 0xFFFFFFF2; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x24; return;
loc_4A74ED:
	ebp = eax; //mov
	eax = (int32_t)(intptr_t)(esi+0xDAC); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDA8); //lea
	ebx = to32i(esp+0x24); //mov
	push32(eax);
	ecx = to32i(esp+0x24); //mov
	edx = to32i(esp+0x1C); //mov
	push32(ebx);
	eax = to32i(esi+0xD60); //mov
	ebx = to32i(esp+0x24); //mov
	call(to32i(dword_4DDE14+ebp));
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_4A73CF;
	eax = (int32_t)(intptr_t)(esi+0xDBC); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDC0); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xD90); //lea
	push32(eax);
	call(to32i(esp+0xC));
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esi+0xDDC); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDE0); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDC4); //lea
	push32(eax);
	call(to32i(esp+0xC));
	add(esp, (int32_t)0xC);
	test(edi, edi);
	if (jz())
		goto loc_4A73CF;
	eax = (int32_t)(intptr_t)(esi+0xDB8); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDB4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xDB0); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0xD64); //lea
	push32(eax);
	call(edi);
	add(esp, (int32_t)0x10);
	cmp(to32i(esp+0x2C), (int32_t)0x80000);
	if (jbe())
		goto loc_4A7597;
	to32i(esp+0x2C) = 0x80000; //mov
loc_4A7597:
	ecx = to32i(esp+0x2C); //mov
	push32(ecx);
	eax = (int32_t)(intptr_t)(esi+0xD64); //lea
	push32(eax);
	call(to32i(esi+0xDB0));
	add(esp, (int32_t)8);
	al = to8i(esp+0x24); //mov
	to8i(esi+1) = al; //mov
	al = to8i(esp+0x28); //mov
	to8i(esi+2) = al; //mov
	al = to8i(esp+0x24); //mov
	to8i(esi+4) = al; //mov
	al = to8i(esp+0x28); //mov
	to8i(esi+5) = al; //mov
	al = to8i(esp+0x34); //mov
	to8i(esi+3) = al; //mov
	eax = esi; //mov
	ebx = to32i(esp+0x28); //mov
	esp -= 4; _sub_4A7800(); esp += 4; //call
	push32(ebx);
	edi = to32i(esp+0x28); //mov
	push32(edi);
	eax = (int32_t)(intptr_t)(esi+0xD90); //lea
	push32(eax);
	call(to32i(esi+0xDBC));
	add(esp, (int32_t)0xC);
	to8i(esi) = 1; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x24; return;
}
Fn(void) Game::_sub_4A7600()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	ebp = edx; //mov
	add(eax, (int32_t)0xDC4);
	to32i(esp) = eax; //mov
	eax = esi; //mov
	add(eax, (int32_t)0xD90);
	to32i(esp+0xC) = eax; //mov
	eax = esi; //mov
	add(eax, (int32_t)0xD64);
	xor_(edi, edi);
	to32i(esp+8) = eax; //mov
loc_4A762C:
	al = to8i(esi+1); //mov
	cmp(al, to8i(esi+4));
	if (jz())
		goto loc_4A7705;
loc_4A7638:
	test(ebp, ebp);
	if (jz())
		goto loc_4A7711;
	al = to8i(esi+1); //mov
	dh = to8i(esi+4); //mov
	dec(ebp);
	cmp(al, dh);
	if (jnz())
		goto loc_4A771C;
loc_4A764F:
	al = to8i(esi+2); //mov
	cmp(al, to8i(esi+5));
	if (jz())
		goto loc_4A765D;
	al = to8i(esi+7); //mov
	add(to8i(esi+2), al);
loc_4A765D:
	eax = to8i(esi+2); //movsx
	push32(eax);
	eax = to8i(esi+1); //movsx
	push32(eax);
	edx = to32i(esp+0x14); //mov
	push32(edx);
	call(to32i(esi+0xDBC));
	add(esp, (int32_t)0xC);
	push32(1);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	call(to32i(esi+0xDB4));
	ecx = to32i(off_4DDED8); //mov
	add(esp, (int32_t)8);
	add(ecx, (int32_t)0x10);
	to32i(esp+4) = ecx; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(esi+0xD60); //mov
	edx = eax; //mov
	eax = ecx; //mov
	call(to32i(esi+0xDA8));
	test(eax, eax);
	if (jl())
		goto loc_4A7711;
	eax = to32i(off_4DDEDC); //mov
	ecx = to32i(esp+4); //mov
	to32i(esp+4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(ecx);
	push32(1);
	ebx = to32i(esp+0x14); //mov
	push32(ebx);
	call(to32i(esi+0xDB8));
	cl = to8i(dword_4DDEE0); //mov
	eax = edi; //mov
	shl(eax, cl);
	ecx = to32i(off_4DDED4); //mov
	shl(eax, (int32_t)2);
	add(esp, (int32_t)0x10);
	add(eax, ecx);
	push32(eax);
	eax = to32i(esp+8); //mov
	push32(eax);
	push32(1);
	edx = to32i(esp+0x18); //mov
	push32(edx);
	call(to32i(esi+0xDC0));
	ch = to8i(esi+8); //mov
	add(esp, (int32_t)0x10);
	test(ch, ch);
	if (jnz())
		goto loc_4A7727;
	inc(edi);
	goto loc_4A762C;
loc_4A7705:
	al = to8i(esi+2); //mov
	cmp(al, to8i(esi+5));
	if (jnz())
		goto loc_4A7638;
loc_4A7711:
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A771C:
	al = to8i(esi+6); //mov
	add(to8i(esi+1), al);
	goto loc_4A764F;
loc_4A7727:
	cl = to8i(dword_4DDEE0); //mov
	eax = edi; //mov
	shl(eax, cl);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4DE2E8);
	push32(eax);
	ecx = to32i(esp+8); //mov
	push32(ecx);
	push32(1);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	call(to32i(esi+0xDE0));
	add(esp, (int32_t)0x10);
	inc(edi);
	goto loc_4A762C;
}
Fn(void) Game::_sub_4A7758()
{
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)7);
	edi = (int32_t)(intptr_t)dword_5A179C; //mov
	sub(eax, edx);
	add(edi, eax);
	cmp(to8i(edi), (int8_t)0);
	if (jnz())
		goto loc_4A7783;
	eax = 0xFFFFFFFF; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	return;
loc_4A7783:
	push32(ecx);
	push32(ebx);
	eax = esi; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_4A7850(); esp += 4; //call
	edx = 0x100; //mov
	eax = edi; //mov
	esp -= 4; _sub_4A7600(); esp += 4; //call
	call(to32i(off_4DDED0));
	eax = esi; //mov
	to8i(edi) = 0; //mov
	call(to32i(dword_5AF5E0));
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(edi);
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_4A77B8()
{
	push32(ecx);
	ecx = edx; //mov
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	add(eax, (int32_t)(intptr_t)dword_5A179C);
	cmp(to8i(eax), (int8_t)0);
	if (jz())
		goto loc_4A77F8;
	cmp(ecx, (int32_t)0x80000);
	if (jbe())
		goto loc_4A77E3;
	ecx = 0x80000; //mov
loc_4A77E3:
	push32(ecx);
	edx = (int32_t)(intptr_t)(eax+0xD64); //lea
	push32(edx);
	call(to32i(eax+0xDB0));
	add(esp, (int32_t)8);
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_4A77F8:
	eax = 0xFFFFFFFF; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4A7800()
{
	push32(edx);
	dl = to8i(eax+3); //mov
	test(dl, dl);
	if (jnz())
		goto loc_4A780D;
	to8i(eax+8) = dl; //mov
	pop32(edx);
	return;
loc_4A780D:
	push32(ecx);
	edx = to32i(eax+1); //mov
	ecx = to32i(eax+2); //mov
	sar(edx, (int32_t)0x18);
	sar(ecx, (int32_t)0x18);
	add(edx, ecx);
	sar(edx, (int32_t)1);
	to8i(eax+8) = dl; //mov
	ecx = to32i(eax+5); //mov
	edx = to32i(eax); //mov
	sar(ecx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	imul32(edx, ecx);
	sar(edx, (int32_t)7);
	to8i(eax+8) = dl; //mov
	edx = to32i(eax+5); //mov
	sar(edx, (int32_t)0x18);
	push32(edx);
	push32(edx);
	edx = (int32_t)(intptr_t)(eax+0xDC4); //lea
	push32(edx);
	call(to32i(eax+0xDDC));
	add(esp, (int32_t)0xC);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4A7850()
{
	push32(ecx);
	ecx = edx; //mov
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	add(eax, (int32_t)(intptr_t)dword_5A179C);
	cmp(to8i(eax), (int8_t)0);
	if (jz())
		goto loc_4A7895;
	to8i(eax+4) = cl; //mov
	edx = to8i(eax+1); //movsx
	to8i(eax+5) = bl; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_4A789C;
	to8i(eax+6) = 0xFF; //mov
loc_4A7880:
	edx = to8i(eax+2); //movsx
	cmp(edx, ebx);
	if (jge())
		goto loc_4A78A2;
	to8i(eax+7) = 1; //mov
	esp -= 4; _sub_4A7800(); esp += 4; //call
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_4A7895:
	eax = 0xFFFFFFFF; //mov
	pop32(ecx);
	return;
loc_4A789C:
	to8i(eax+6) = 1; //mov
	goto loc_4A7880;
loc_4A78A2:
	to8i(eax+7) = 0xFF; //mov
	esp -= 4; _sub_4A7800(); esp += 4; //call
	xor_(eax, eax);
	pop32(ecx);
}
Fn(void) Game::_sub_4A78B0()
{
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	add(eax, (int32_t)(intptr_t)dword_5A179C);
	cmp(to8i(eax), (int8_t)0);
	if (jnz())
		goto loc_4A78D1;
	eax = 0xFFFFFFFF; //mov
	return;
loc_4A78D1:
	to8i(eax+3) = bl; //mov
	esp -= 4; _sub_4A7800(); esp += 4; //call
	xor_(eax, eax);
}
Fn(void) Game::_sub_4A7914()
{
	push32(ebx);
	push32(esi);
	sub(esp, (int32_t)4);
	esi = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x18); //mov
	call(to32i(off_4DDED0));
	ecx = to32i(esp+0x10); //mov
	shl(ecx, (int32_t)2);
	add(ecx, ebx);
	cmp(ebx, ecx);
	if (jnb())
		goto loc_4A7954;
loc_4A7934:
	eax = to32i(esi); //mov
	edx = to16i(esi); //movsx
	sar(eax, (int32_t)0x10);
	add(eax, edx);
	add(esi, (int32_t)4);
	to32i(esp) = eax; //mov
	add(ebx, (int32_t)4);
	fild(to32i(esp));
	fstp(to32f(ebx-4));
	cmp(ebx, ecx);
	if (jb())
		goto loc_4A7934;
loc_4A7954:
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4A795C()
{
	push32(ebx);
	push32(esi);
	sub(esp, (int32_t)0x10);
	esi = to32i(esp+0x20); //mov
	ebx = to32i(esp+0x24); //mov
	call(to32i(off_4DDED0));
	ecx = to32i(esp+0x1C); //mov
	shl(ecx, (int32_t)2);
	add(ecx, esi);
	cmp(esi, ecx);
	if (jnb())
		goto loc_4A7A10;
loc_4A7980:
	fild(to16i(ebx));
	fadd(to32f(esi));
	fstp(to32f(esp+8));
	fild(to16i(ebx+2));
	fadd(to32f(esi));
	fstp(to32f(esp+0xC));
	fld(to32f(esp+8));
	fld_st(0);
	fld(to64f(dbl_4D1484));
	fxch_st(1);
	fadd_st(0, 1);
	add(esi, (int32_t)4);
	fstp_st(2);
	fxch_st(1);
	fstp(to32f(esp+8));
	fld(to32f(esp+0xC));
	fadd_st(1, 0);
	eax = to32i(esp+8); //mov
	fxch_st(1);
	fstp_st(1);
	fstp(to32f(esp+0xC));
	edx = to32i(esp+0xC); //mov
	and_(eax, (int32_t)0xFFFFF);
	and_(edx, (int32_t)0xFFFFF);
	cmp(eax, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4A7A1D;
	cmp(eax, (int32_t)0xF8000);
	if (jnb())
		goto loc_4A7A1D;
	cmp(eax, (int32_t)0x80000);
	if (jnb())
		goto loc_4A7A16;
	to16i(ebx) = 0x7FFF; //mov
loc_4A79E7:
	cmp(edx, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4A7A2A;
	cmp(edx, (int32_t)0xF8000);
	if (jnb())
		goto loc_4A7A2A;
	cmp(edx, (int32_t)0x80000);
	if (jnb())
		goto loc_4A7A22;
	to16i(ebx+2) = 0x7FFF; //mov
loc_4A7A05:
	add(ebx, (int32_t)4);
	cmp(esi, ecx);
	if (jb())
		goto loc_4A7980;
loc_4A7A10:
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(ebx);
	return;
loc_4A7A16:
	to16i(ebx) = 0x8000; //mov
	goto loc_4A79E7;
loc_4A7A1D:
	to16i(ebx) = ax; //mov
	goto loc_4A79E7;
loc_4A7A22:
	to16i(ebx+2) = 0x8000; //mov
	goto loc_4A7A05;
loc_4A7A2A:
	to16i(ebx+2) = dx; //mov
	add(ebx, (int32_t)4);
	cmp(esi, ecx);
	if (jb())
		goto loc_4A7980;
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4A7A40()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x64);
	to32i(esp+0x4C) = eax; //mov
	to32i(esp+0x54) = edx; //mov
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)dword_5A179C; //mov
	to32i(esp+0x50) = edx; //mov
	to32i(esp+0x60) = edx; //mov
loc_4A7A5F:
	ah = to8i(esi); //mov
	edi = esi; //mov
	test(ah, ah);
	if (jnz())
		goto loc_4A7B26;
loc_4A7A6B:
	ebp = to32i(esp+0x60); //mov
	inc(ebp);
	add(esi, (int32_t)0xDE4);
	to32i(esp+0x60) = ebp; //mov
	cmp(ebp, (int32_t)0x10);
	if (jl())
		goto loc_4A7A5F;
loc_4A7A7F:
	cmp(to32i(esp+0x50), (int32_t)0);
	if (jz())
		goto loc_4A7C22;
	xor_(esi, esi);
	to32i(dword_5AF5DC) = esi; //mov
loc_4A7A92:
	ebx = to32i(esp+0x54); //mov
	edi = to32i(dword_4DDEE4); //mov
	add(ebx, ebx);
	test(edi, edi);
	if (jz())
		goto loc_4A7C40;
	push32(dword_4DDEE8);
	push32(dword_4DE2E8);
	esi = to32i(esp+0x5C); //mov
	push32(esi);
	esp -= 4; _sub_4A7914(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(ebx);
	push32(dword_4DE2E8);
	call(to32i(off_4DDECC));
	add(esp, (int32_t)8);
	push32(dword_4DDEE8);
	push32(esi);
	esp -= 4; _sub_4B7AD0(); esp += 4; //call
	add(esp, (int32_t)8);
	ebp = to32i(off_4DDED4); //mov
	push32(ebp);
	push32(dword_4DDEE8);
	push32(esi);
	esp -= 4; _sub_4A795C(); esp += 4; //call
	add(esp, (int32_t)0xC);
loc_4A7AEF:
	edx = to32i(esp+0x4C); //mov
	push32(edx);
	ecx = to32i(off_4DDED4); //mov
	push32(ecx);
	ebx = to32i(esp+0x5C); //mov
	push32(ebx);
	call(to32i(dword_5AF5E4));
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(ebx+ebx); //lea
	push32(eax);
	esi = to32i(off_4DDED4); //mov
	push32(esi);
	call(to32i(off_4DDECC));
	add(esp, (int32_t)8);
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A7B26:
	edx = to32i(esp+0x54); //mov
	eax = esi; //mov
	ebp = to32i(esp+0x54); //mov
	esp -= 4; _sub_4A7600(); esp += 4; //call
	to32i(esp+0x5C) = eax; //mov
	sub(ebp, eax);
	if (jz())
		goto loc_4A7A7F;
	push32(ebp);
	eax = (int32_t)(intptr_t)(esi+0xD64); //lea
	push32(eax);
	to32i(esp+0x60) = eax; //mov
	call(to32i(edi+0xDB4));
	ecx = to32i(off_4DDED8); //mov
	add(esp, (int32_t)8);
	add(ecx, (int32_t)0x10);
	to32i(esp+0x40) = ecx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x40); //lea
	ecx = to32i(esi+0xD60); //mov
	edx = eax; //mov
	eax = ecx; //mov
	call(to32i(edi+0xDA8));
	test(eax, eax);
	if (jl())
		goto loc_4A7C14;
	ecx = to32i(off_4DDEDC); //mov
	eax = to32i(esp+0x40); //mov
	to32i(esp+0x40) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x40); //lea
	push32(ecx);
	push32(eax);
	push32(ebp);
	edx = to32i(esp+0x64); //mov
	push32(edx);
	call(to32i(edi+0xDB8));
	add(esp, (int32_t)0x10);
	cl = to8i(dword_4DDEE0); //mov
	eax = to32i(esp+0x5C); //mov
	shl(eax, cl);
	ecx = to32i(off_4DDED4); //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	push32(eax);
	ecx = to32i(esp+0x44); //mov
	push32(ecx);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esi+0xD90); //lea
	push32(eax);
	call(to32i(edi+0xDC0));
	dl = to8i(esi+8); //mov
	add(esp, (int32_t)0x10);
	test(dl, dl);
	if (jz())
		goto loc_4A7A6B;
	eax = to32i(esp+0x5C); //mov
	cl = to8i(dword_4DDEE0); //mov
	shl(eax, cl);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4DE2E8);
	push32(eax);
	ebx = to32i(esp+0x44); //mov
	push32(ebx);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esi+0xDC4); //lea
	push32(eax);
	call(to32i(edi+0xDE0));
	edi = 1; //mov
	add(esp, (int32_t)0x10);
	to32i(esp+0x50) = edi; //mov
	goto loc_4A7A6B;
loc_4A7C14:
	eax = to32i(esp+0x60); //mov
	esp -= 4; _sub_4A7758(); esp += 4; //call
	goto loc_4A7A6B;
loc_4A7C22:
	ecx = to32i(dword_5AF5DC); //mov
	inc(ecx);
	to32i(dword_5AF5DC) = ecx; //mov
	cmp(ecx, (int32_t)0x1F4);
	if (jl())
		goto loc_4A7A92;
	goto loc_4A7AEF;
loc_4A7C40:
	push32(dword_4DDEE8);
	push32(dword_4DE2E8);
	ebp = to32i(esp+0x5C); //mov
	push32(ebp);
	esp -= 4; _sub_4B7CA0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(ebx);
	push32(dword_4DE2E8);
	call(to32i(off_4DDECC));
	add(esp, (int32_t)8);
	push32(dword_4DDEE8);
	push32(ebp);
	esp -= 4; _sub_4B7AD0(); esp += 4; //call
	add(esp, (int32_t)8);
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x4C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sub_4B4FB8(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(0x7F);
	push32(0x7F);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	call(to32i(esp+0x50));
	add(esp, (int32_t)0xC);
	edx = to32i(off_4DDED4); //mov
	push32(edx);
	push32(dword_4DDEE8);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	call(to32i(esp+0x58));
	add(esp, (int32_t)0x10);
	goto loc_4A7AEF;
}
Fn(void) Game::_sub_4A7CBC()
{
	push32(ebx);
	push32(ecx);
	ecx = edx; //mov
	ebx = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_4A7CEE;
loc_4A7CC6:
	cmp(ecx, (int32_t)0x100);
	if (jle())
		goto loc_4A7CF1;
	eax = 0x100; //mov
loc_4A7CD3:
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4A7A40(); esp += 4; //call
	edx = to32i(dword_5AF5E8); //mov
	sub(ecx, (int32_t)0x100);
	add(ebx, edx);
	test(ecx, ecx);
	if (jg())
		goto loc_4A7CC6;
loc_4A7CEE:
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A7CF1:
	eax = ecx; //mov
	goto loc_4A7CD3;
}
Fn(void) Game::_sub_4A7D00()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp+4) = eax; //mov
	fild(to32i(esp+4));
	fmul(to32f(esp+0x20));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
loc_4A7D1C:
	ecx = 2; //mov
	cmp(ecx, to32i(esp));
	if (jg())
		goto loc_4A7D37;
	esi = to32i(esp); //mov
loc_4A7D29:
	eax = to32i(esp); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	test(edx, edx);
	if (jnz())
		goto loc_4A7D46;
loc_4A7D37:
	edi = to32i(esp); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_4A7D4D;
	ebp = (int32_t)(intptr_t)(edi+1); //lea
	to32i(esp) = ebp; //mov
	goto loc_4A7D1C;
loc_4A7D46:
	inc(ecx);
	cmp(ecx, esi);
	if (jle())
		goto loc_4A7D29;
	goto loc_4A7D37;
loc_4A7D4D:
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	esp += 4; return;
}
Fn(void) Game::_sub_4A7D5C()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	to32i(esp+8) = 0x3DCCCCCD; //mov
	cmp(eax, (int32_t)0x5622);
	if (jg())
		goto loc_4A7E0D;
	xor_(edx, edx);
loc_4A7D79:
	add(edx, (int32_t)4);
	xor_(ecx, ecx);
	to32i(dword_5AF5FC+edx) = ecx; //mov
	cmp(edx, (int32_t)0x5910);
	if (jnz())
		goto loc_4A7D79;
	push32(ebx);
	ecx = (int32_t)(intptr_t)dword_5AF600; //mov
	xor_(edx, edx);
loc_4A7D94:
	add(edx, (int32_t)4);
	push32(to32i(esp+0xC));
	eax = esi; //mov
	to32i(dword_5B4F2C+edx) = ecx; //mov
	esp -= 4; _sub_4A7D00(); esp += 4; //call
	fld(to32f(flt_4DEAF4+edx));
	fld1();
	fsubrp_st(1, 0);
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	fstp(to32f(flt_4DEB04+edx));
	fld(to32f(esp+0xC));
	fld_st(0);
	fmul(to64f(dbl_4D148C));
	eax = to32i(dword_5B4F2C+edx); //mov
	add(ecx, ebx);
	sub(ebx, (int32_t)4);
	to32i(dword_5B4F0C+edx) = eax; //mov
	add(ebx, eax);
	to32i(dword_5B4F1C+edx) = eax; //mov
	to32i(dword_5B4F4C+edx) = ebx; //mov
	to32i(dword_5AF5EC+edx) = ebx; //mov
	xor_(ebx, ebx);
	fstp_st(1);
	to32i(dword_5B4F3C+edx) = ebx; //mov
	fstp(to32f(esp+0xC));
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_4A7D94;
	xor_(eax, eax);
	pop32(ebx);
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_4A7E0D:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A7E20()
{
	push32(ecx);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	eax = ebx; //mov
	to32i(esp+4) = ecx; //mov
	esp -= 4; _sub_4B7CD0(); esp += 4; //call
	fild(to32i(esp+4));
	fmulp_st(1, 0);
	to32i(esp+4) = edx; //mov
	fild(to32i(esp+4));
	fdivp_st(1, 0);
	fmul(to32f(flt_4D1494));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	add(esp, (int32_t)8);
	pop32(ecx);
}
Fn(void) Game::_sub_4A7E60()
{
	to32i(ebx) = edx; //mov
	to32i(ecx) = edx; //mov
	cmp(eax, (int32_t)0x40);
	if (jz())
		goto locret_4A7E73;
	if (jge())
		goto loc_4A7E74;
	imul32(eax, edx);
	sar(eax, (int32_t)6);
	to32i(ecx) = eax; //mov
locret_4A7E73:
	return;
loc_4A7E74:
	ecx = 0x7F; //mov
	sub(ecx, eax);
	eax = ecx; //mov
	imul32(eax, edx);
	sar(eax, (int32_t)6);
	to32i(ebx) = eax; //mov
}
Fn(void) Game::_sub_4A7E90()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = edx; //mov
	xor_(ecx, ecx);
loc_4A7E97:
	dec(edx);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4A7EA9;
	xor_(ebx, ebx);
	shl(ecx, (int32_t)8);
	bl = to8i(eax); //mov
	inc(eax);
	add(ecx, ebx);
	goto loc_4A7E97;
loc_4A7EA9:
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_4A7EB3;
	cmp(ecx, (int32_t)0x7F);
	if (jg())
		goto loc_4A7ED9;
loc_4A7EB3:
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_4A7EC0;
	cmp(ecx, (int32_t)0x7FFF);
	if (jg())
		goto loc_4A7EE1;
loc_4A7EC0:
	cmp(esi, (int32_t)3);
	if (jnz())
		goto loc_4A7ED3;
	cmp(ecx, (int32_t)0x7FFFFF);
	if (jle())
		goto loc_4A7ED3;
	sub(ecx, (int32_t)0x1000000);
loc_4A7ED3:
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A7ED9:
	sub(ecx, (int32_t)0x100);
	goto loc_4A7ED3;
loc_4A7EE1:
	sub(ecx, (int32_t)0x10000);
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A7EF0()
{
	to32i(eax) = 1; //mov
	to32i(eax+0x90) = 0; //mov
	to32i(eax+0x6C) = 0xF; //mov
}
Fn(void) Game::_sub_4A7F08()
{
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0x7F; //mov
	to32i(eax+0xC) = 0; //mov
	to32i(eax+0x10) = 0x7F; //mov
	to32i(eax+0x14) = 0xFFFFFFFF; //mov
	to32i(eax+0x18) = 0; //mov
	to32i(eax+0x1C) = 0x3C; //mov
	to32i(eax+0x20) = 0xFFFFFFFF; //mov
	to32i(eax+0x24) = 1; //mov
	to32i(eax+0x28) = 0; //mov
	to32i(eax+0x2C) = 1; //mov
	to32i(eax+0x30) = 0x40; //mov
	to32i(eax+0x34) = 0; //mov
	to32i(eax+0x38) = 0x7F; //mov
	to32i(eax+0x3C) = 0; //mov
	to32i(eax+0x40) = 0; //mov
	to32i(eax+0x44) = 0; //mov
	to32i(eax+0x48) = 0; //mov
	to32i(eax+0x4C) = 0; //mov
	to32i(eax+0x54) = 0; //mov
	to32i(eax+0x5C) = 0; //mov
	to32i(eax+0x64) = (int32_t)(intptr_t)dword_4DEB28; //mov
	to32i(eax+0x70) = 0x7F; //mov
	to32i(eax+0x74) = 0; //mov
	to32i(eax+0x78) = 0; //mov
	to32i(eax+0x7C) = 0; //mov
	to32i(eax+0x80) = 0; //mov
	to32i(eax+0x84) = 0; //mov
	to32i(eax+0x8C) = 0; //mov
	to32i(eax+0x88) = 0; //mov
	to32i(eax+0x94) = 1; //mov
	eax = edx; //mov
	add(edx, (int32_t)0x98);
loc_4A7FF8:
	to32i(eax) = 0; //mov
	add(eax, (int32_t)4);
	cmp(eax, edx);
	if (jnz())
		goto loc_4A7FF8;
}
Fn(void) Game::_sub_4A8008()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(eax+0x48), (int32_t)0);
	if (jnz())
		goto loc_4A8065;
loc_4A8013:
	esi = to32i(eax+0x54); //mov
	test(esi, esi);
	if (jz())
		goto loc_4A8023;
	ecx = to32i(edx+0x54); //mov
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	to32i(eax+0x54) = edi; //mov
loc_4A8023:
	ebp = to32i(eax+0x5C); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4A8033;
	ecx = to32i(edx+0x5C); //mov
	ebx = (int32_t)(intptr_t)(ecx+ebp); //lea
	to32i(eax+0x5C) = ebx; //mov
loc_4A8033:
	esi = to32i(eax+0x64); //mov
	test(esi, esi);
	if (jz())
		goto loc_4A8043;
	ecx = to32i(edx+0x64); //mov
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	to32i(eax+0x64) = edi; //mov
loc_4A8043:
	ebp = to32i(eax+0x74); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4A8053;
	ecx = to32i(edx+0x74); //mov
	ebx = (int32_t)(intptr_t)(ecx+ebp); //lea
	to32i(eax+0x74) = ebx; //mov
loc_4A8053:
	esi = to32i(eax+0x80); //mov
	test(esi, esi);
	if (jnz())
		goto loc_4A806D;
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A8065:
	ecx = to32i(edx+0x48); //mov
	add(to32i(eax+0x48), ecx);
	goto loc_4A8013;
loc_4A806D:
	edx = to32i(edx+0x80); //mov
	edi = (int32_t)(intptr_t)(esi+edx); //lea
	to32i(eax+0x80) = edi; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A8084()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	bh = to8i(byte_4DEB30); //mov
	xor_(ecx, ecx);
loc_4A808F:
	inc(bh);
	if (jz())
		goto loc_4A80BD;
loc_4A8093:
	eax = (int32_t)(intptr_t)dword_59BFB0; //mov
	edx = ecx; //mov
loc_4A809A:
	cmp(cl, to8i(eax+0xC));
	if (jz())
		goto loc_4A80A6;
	bl = to8i(eax+0x3B); //mov
	cmp(bl, bh);
	if (jz())
		goto loc_4A808F;
loc_4A80A6:
	inc(edx);
	add(eax, (int32_t)0x60);
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_4A809A;
	xor_(eax, eax);
	al = bh; //mov
	to8i(byte_4DEB30) = bh; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A80BD:
	inc(bh);
	goto loc_4A8093;
}
Fn(void) Game::_sub_4A80C4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	to32i(esp) = eax; //mov
	to32i(esp+4) = edx; //mov
	edi = ebx; //mov
	esi = ecx; //mov
	edx = to32i(esp+0x2C); //mov
	eax = to32i(ebx+4); //mov
	sar(eax, (int32_t)0x18);
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebx+5); //mov
	sar(eax, (int32_t)0x18);
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebx+6); //mov
	sar(eax, (int32_t)0x18);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebx+7); //mov
	sar(eax, (int32_t)0x18);
	to32i(esp+8) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A8008(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4A843E;
	test(edx, edx);
	if (jl())
		goto loc_4A844B;
	cmp(edx, (int32_t)0x7F);
	if (jg())
		goto loc_4A844B;
loc_4A8126:
	eax = to32i(esp+0x18); //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A8459;
	to32i(esp+0x18) = 0x40; //mov
loc_4A813B:
	ebp = to32i(esp+8); //mov
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A8474;
	to32i(esp+8) = 0x7F; //mov
loc_4A8150:
	eax = to32i(esi+0x30); //mov
	ebx = to32i(esi+0x34); //mov
	to32i(esp+0x14) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A816F;
	eax = ebx; //mov
	ebp = to32i(esp+0x14); //mov
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	add(ebp, eax);
	to32i(esp+0x14) = ebp; //mov
loc_4A816F:
	eax = to32i(esp+0x14); //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A848F;
	to32i(esp+0x14) = 0x7F; //mov
loc_4A8184:
	ebp = to32i(esi+0x94); //mov
	cmp(ebp, (int32_t)1);
	if (jz())
		goto loc_4A81A0;
	eax = to32i(esp+0x18); //mov
	sub(eax, (int32_t)0x40);
	imul32(eax, ebp);
	add(eax, (int32_t)0x40);
	to32i(esp+0x18) = eax; //mov
loc_4A81A0:
	eax = to32i(esp+0x14); //mov
	add(eax, to32i(esp+0x18));
	sub(eax, (int32_t)0x40);
	to32i(esp+0x18) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A84A2;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A81C4;
	to32i(esp+0x18) = 0x7F; //mov
loc_4A81C4:
	ecx = to32i(esp+0x10); //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A84AD;
	to32i(esp+0x10) = 0x40; //mov
loc_4A81D9:
	ecx = (int32_t)(intptr_t)dword_5B4F60; //mov
	ebx = to32i(esi+0x18); //mov
	edx = to32i(esi+0x2C); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_4A53BC(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A8435;
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	shl(ecx, (int32_t)5);
	add(ecx, (int32_t)(intptr_t)dword_59BFB0);
	al = to8i(esi+0x94); //mov
	to8i(ecx+0x37) = al; //mov
	ax = to16i(esi+0x40); //mov
	to16i(ecx+0x10) = ax; //mov
	edx = to32i(esp+0x30); //mov
	ax = to16i(esi+0x1C); //mov
	sub(eax, edx);
	imul32(eax, 0x64);
	bx = to16i(ecx+0x10); //mov
	sub(ebx, eax);
	to16i(ecx+0x10) = bx; //mov
	cmp(to32i(esi+0x90), (int32_t)0);
	if (jz())
		goto loc_4A8245;
	eax = to32i(esp+0x38); //mov
	edx = ebx; //mov
	add(edx, eax);
	to16i(ecx+0x10) = dx; //mov
loc_4A8245:
	ebx = to32i(esi+0x44); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A8257;
	eax = ebx; //mov
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	add(to16i(ecx+0x10), ax);
loc_4A8257:
	eax = to32i(esi+0x48); //mov
	to32i(ecx+0x4C) = eax; //mov
	eax = to32i(esi+0x54); //mov
	to32i(ecx+0x50) = eax; //mov
	eax = to32i(esi+0x5C); //mov
	to32i(ecx+0x54) = eax; //mov
	eax = to32i(ecx+0x50); //mov
	test(eax, eax);
	if (jz())
		goto loc_4A827B;
	add(eax, to32i(esp+0x18));
	eax = to8i(eax); //movsx
	to32i(esp+0x18) = eax; //mov
loc_4A827B:
	al = to8i(esi); //mov
	to8i(ecx+0xD) = al; //mov
	eax = to32i(esp+0xC); //mov
	to32i(ecx+0x18) = 0; //mov
	shl(eax, (int32_t)0x10);
	to32i(ecx+0x20) = eax; //mov
	ebx = to32i(esi+0x3C); //mov
	edx = to32i(esi+0x38); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4A82A4;
	eax = ebx; //mov
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	add(edx, eax);
loc_4A82A4:
	cmp(edx, (int32_t)0x7F);
	if (jle())
		goto loc_4A84C8;
	edx = 0x7F; //mov
loc_4A82B2:
	imul32(edx, to32i(esp+0x34));
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to8i(ecx+0x30) = al; //mov
	al = to8i(esp+0x14); //mov
	to8i(ecx+0x32) = al; //mov
	al = to8i(esp+0x18); //mov
	to8i(ecx+0xF) = al; //mov
	ax = to16i(esi+0x28); //mov
	imul32(eax, 0x64);
	to16i(ecx+0x42) = ax; //mov
	al = to8i(esp+0x10); //mov
	to8i(ecx+0x33) = al; //mov
	eax = to32i(esi+0x64); //mov
	to32i(ecx+0x48) = eax; //mov
	eax = to32i(esi+0x70); //mov
	shl(eax, (int32_t)0x10);
	to8i(ecx+0x35) = 0; //mov
	to32i(ecx+0x28) = eax; //mov
	al = to8i(esi+0x24); //mov
	to8i(ecx+0x34) = al; //mov
	al = to8i(esi+0x20); //mov
	to8i(ecx+0x36) = al; //mov
	eax = to32i(ecx+0x48); //mov
	eax = to32i(eax); //mov
	to32i(ecx+0x2C) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A84DB;
loc_4A8315:
	eax = to32i(ecx+0x48); //mov
	edx = to32i(eax+4); //mov
	ebx = to32i(ecx+0x28); //mov
	shl(edx, (int32_t)0x10);
	sub(edx, ebx);
	eax = edx; //mov
	ebx = to32i(ecx+0x2C); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(ecx+0x24) = eax; //mov
	eax = to32i(esi+0x74); //mov
	to32i(ecx+0x58) = eax; //mov
	eax = to32i(esi+0x80); //mov
	to32i(ecx+0x5C) = eax; //mov
	al = to8i(esi+0x78); //mov
	to8i(ecx+0x3C) = al; //mov
	al = to8i(esi+0x84); //mov
	to8i(ecx+0x3D) = al; //mov
	ax = to16i(esi+0x88); //mov
	to16i(ecx+0x40) = ax; //mov
	cmp(to32i(esi+0x7C), (int32_t)0);
	if (jz())
		goto loc_4A84E7;
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = to32i(esi+0x78); //mov
	xor_(edx, edx);
	div32(ebx);
	to8i(ecx+0x3E) = dl; //mov
loc_4A8372:
	cmp(to32i(esi+0x8C), (int32_t)0);
	if (jz())
		goto loc_4A84F0;
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = to32i(esi+0x84); //mov
	xor_(edx, edx);
	div32(ebx);
	to8i(ecx+0x3F) = dl; //mov
loc_4A8391:
	eax = ebp; //mov
	esp -= 4; _sub_4B0D30(); esp += 4; //call
	al = to8i(esi+0x6C); //mov
	to8i(ecx+0xB) = al; //mov
	al = to8i(esi+0x4C); //mov
	to8i(ecx+0x38) = al; //mov
	al = to8i(esp+8); //mov
	to8i(ecx+0x39) = al; //mov
	al = to8i(edi+4); //mov
	to8i(ecx+0xA) = al; //mov
	ax = to16i(edi); //mov
	to16i(ecx+8) = ax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	cmp(to8i(edi+0xB), (int8_t)0);
	if (jz())
		goto loc_4A84F9;
	xor_(eax, eax);
loc_4A83CB:
	push32(eax);
	eax = to32i(edi+0xC); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	xor_(eax, eax);
	ax = to16i(edi+0xC); //mov
	push32(eax);
	eax = to32i(ecx+0x35); //mov
	edi = to32i(dword_59BFA4); //mov
	sar(eax, (int32_t)0x18);
	imul32(eax, edi);
	edx = to32i(ecx+0x36); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx, eax);
	ebx = 0x3F01; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	push32(eax);
	eax = to32i(ecx+0x10); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(ecx+0x2E); //mov
	sar(eax, (int32_t)0x18);
	edx = to32i(esp+0x14); //mov
	push32(eax);
	eax = to32i(esp+0x30); //mov
	ebx = to32i(esi); //mov
	push32(eax);
	xor_(eax, eax);
	ecx = ebp; //mov
	al = to8i(edx+2); //mov
	edx = to32i(esp+0x20); //mov
	esp -= 4; _sub_488F38(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4A8503;
	eax = to32i(dword_5B4F60); //mov
loc_4A8435:
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A843E:
	to32i(esp+0xC) = 0x7F; //mov
	goto loc_4A8126;
loc_4A844B:
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A8459:
	test(eax, eax);
	if (jl())
		goto loc_4A8466;
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4A813B;
loc_4A8466:
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A8474:
	test(ebp, ebp);
	if (jl())
		goto loc_4A8481;
	cmp(ebp, (int32_t)0x7F);
	if (jle())
		goto loc_4A8150;
loc_4A8481:
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A848F:
	test(eax, eax);
	if (jge())
		goto loc_4A8184;
	xor_(ecx, ecx);
	to32i(esp+0x14) = ecx; //mov
	goto loc_4A8184;
loc_4A84A2:
	xor_(edx, edx);
	to32i(esp+0x18) = edx; //mov
	goto loc_4A81C4;
loc_4A84AD:
	test(ecx, ecx);
	if (jl())
		goto loc_4A84BA;
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_4A81D9;
loc_4A84BA:
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4A84C8:
	cmp(edx, (int32_t)0xFFFFFF80);
	if (jge())
		goto loc_4A82B2;
	edx = 0xFFFFFF80; //mov
	goto loc_4A82B2;
loc_4A84DB:
	to32i(ecx+0x2C) = 0x7FFFFFFF; //mov
	goto loc_4A8315;
loc_4A84E7:
	to8i(ecx+0x3E) = 0; //mov
	goto loc_4A8372;
loc_4A84F0:
	to8i(ecx+0x3F) = 0; //mov
	goto loc_4A8391;
loc_4A84F9:
	eax = 1; //mov
	goto loc_4A83CB;
loc_4A8503:
	eax = ebp; //mov
	edx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_4A5678(); esp += 4; //call
	to32i(dword_5B4F60) = edx; //mov
	eax = to32i(dword_5B4F60); //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_4A8524()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x198);
	to32i(esp+0x180) = eax; //mov
	to32i(esp+0x17C) = edx; //mov
	xor_(edx, edx);
	ecx = 0xFFFFFFF7; //mov
	to32i(esp+0x188) = edx; //mov
	to32i(esp+0x170) = ecx; //mov
	to32i(esp+0x18C) = edx; //mov
	to32i(esp+0x190) = edx; //mov
	to32i(esp+0x174) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_4A8657;
	cmp(to16i(eax), (int16_t)0x5450);
	if (jnz())
		goto loc_4A8634;
	ebp = to32i(esp+0x17C); //mov
	edi = to32i(esp+0x17C); //mov
	ebp = to32i(ebp+3); //mov
	edi = to32i(edi+2); //mov
	sar(ebp, (int32_t)0x18);
	sar(edi, (int32_t)0x18);
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A863B;
	ebp = 0x7F; //mov
loc_4A85A2:
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4A864A;
	edi = 0x3C; //mov
loc_4A85B0:
	eax = to32i(esp+0x180); //mov
	test(to8i(eax+3), (int8_t)2);
	if (jz())
		goto loc_4A8668;
	esi = (int32_t)(intptr_t)(eax+8); //lea
loc_4A85C4:
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	edx = esp; //mov
	esp -= 4; _sub_4A7EF0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_4A7F08(); esp += 4; //call
	esp -= 4; _sub_4A5360(); esp += 4; //call
	esp -= 4; _sub_4A8084(); esp += 4; //call
	to32i(esp+0x178) = eax; //mov
	eax = to32i(esp+0x18C); //mov
	shl(eax, (int32_t)2);
	to32i(esp+0x194) = eax; //mov
loc_4A8600:
	eax = to32i(esp+0x18C); //mov
	inc(eax);
	dh = to8i(esi); //mov
	to32i(esp+0x184) = eax; //mov
	cmp(dh, (int8_t)0xFF);
	if (jz())
		goto loc_4A87A3;
	xor_(ebx, ebx);
	bl = dh; //mov
	eax = (int32_t)(intptr_t)(esi+1); //lea
	cmp(ebx, (int32_t)0xFD);
	if (jnz())
		goto loc_4A8670;
	esi = eax; //mov
	to32i(esp+0x188) = eax; //mov
	goto loc_4A8600;
loc_4A8634:
	eax = 0xFFFFFFF9; //mov
	goto loc_4A865C;
loc_4A863B:
	test(ebp, ebp);
	if (jl())
		goto loc_4A8657;
	cmp(ebp, (int32_t)0x7F);
	if (jle())
		goto loc_4A85A2;
	goto loc_4A8657;
loc_4A864A:
	test(edi, edi);
	if (jl())
		goto loc_4A8657;
	cmp(edi, (int32_t)0x7F);
	if (jle())
		goto loc_4A85B0;
loc_4A8657:
	eax = 0xFFFFFFF8; //mov
loc_4A865C:
	add(esp, (int32_t)0x198);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A8668:
	esi = (int32_t)(intptr_t)(eax+4); //lea
	goto loc_4A85C4;
loc_4A8670:
	cmp(ebx, (int32_t)0xFE);
	if (jnz())
		goto loc_4A872D;
	cmp(ebp, to32i(esp+0x9C));
	if (jge())
		goto loc_4A8699;
loc_4A8685:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_4A7F08(); esp += 4; //call
	inc(esi);
	goto loc_4A8600;
loc_4A8699:
	cmp(ebp, to32i(esp+0xA0));
	if (jg())
		goto loc_4A8685;
	cmp(edi, to32i(esp+0xA4));
	if (jl())
		goto loc_4A8685;
	cmp(edi, to32i(esp+0xA8));
	if (jg())
		goto loc_4A8685;
	edx = to32i(esp+0x174); //mov
	push32(edx);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(edi);
	ecx = (int32_t)(intptr_t)(esp+0xA4); //lea
	ebx = to32i(esp+0x188); //mov
	push32(eax);
	edx = to32i(esp+0x198); //mov
	eax = to32i(esp+0x190); //mov
	esp -= 4; _sub_4A80C4(); esp += 4; //call
	to32i(esp+0x170) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A882D;
	edx = to32i(esp+0x194); //mov
	ecx = (int32_t)(intptr_t)(edx+4); //lea
	to32i(esp+edx+0x130) = eax; //mov
	eax = to32i(esp+0x184); //mov
	to32i(esp+0x194) = ecx; //mov
	to32i(esp+0x18C) = eax; //mov
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_4A7F08(); esp += 4; //call
	inc(esi);
	goto loc_4A8600;
loc_4A872D:
	esi = eax; //mov
	cmp(ebx, (int32_t)0xFC);
	if (jz())
		goto loc_4A8600;
	xor_(ecx, ecx);
	cl = to8i(eax); //mov
	cmp(ecx, (int32_t)0xFF);
	if (jnz())
		goto loc_4A875B;
	esi = (int32_t)(intptr_t)(eax+1); //lea
	edx = 4; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	ecx = eax; //mov
	add(esi, (int32_t)3);
loc_4A875B:
	inc(esi);
	cmp(ebx, (int32_t)0x26);
	if (jl())
		goto loc_4A8768;
loc_4A8761:
	add(esi, ecx);
	goto loc_4A8600;
loc_4A8768:
	test(ecx, ecx);
	if (jl())
		goto loc_4A8761;
	cmp(ecx, (int32_t)4);
	if (jg())
		goto loc_4A8761;
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+ebx*4+0x98) = eax; //mov
	to32i(esp+ebx*4) = esi; //mov
	cmp(ebx, (int32_t)0x24);
	if (jnz())
		goto loc_4A8761;
	eax = to32i(esp+0x128); //mov
	esp -= 4; _sub_4B3E80(); esp += 4; //call
	to32i(esp+0x174) = eax; //mov
	add(esi, ecx);
	goto loc_4A8600;
loc_4A87A3:
	cmp(ebp, to32i(esp+0x9C));
	if (jl())
		goto loc_4A8822;
	cmp(ebp, to32i(esp+0xA0));
	if (jg())
		goto loc_4A8822;
	cmp(edi, to32i(esp+0xA4));
	if (jl())
		goto loc_4A8822;
	cmp(edi, to32i(esp+0xA8));
	if (jg())
		goto loc_4A8822;
	esi = to32i(esp+0x174); //mov
	push32(esi);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(edi);
	ecx = (int32_t)(intptr_t)(esp+0xA4); //lea
	ebx = to32i(esp+0x188); //mov
	push32(eax);
	edx = to32i(esp+0x198); //mov
	eax = to32i(esp+0x190); //mov
	esp -= 4; _sub_4A80C4(); esp += 4; //call
	to32i(esp+0x170) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4A882D;
	edx = to32i(esp+0x194); //mov
	to32i(esp+edx+0x130) = eax; //mov
	eax = to32i(esp+0x184); //mov
	to32i(esp+0x18C) = eax; //mov
loc_4A8822:
	edi = to32i(esp+0x18C); //mov
	test(edi, edi);
	if (jnz())
		goto loc_4A886F;
loc_4A882D:
	ebx = to32i(esp+0x18C); //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	test(ebx, ebx);
	if (jle())
		goto loc_4A885C;
	edx = (int32_t)(intptr_t)(ebx*4+0); //lea
	xor_(ecx, ecx);
loc_4A8846:
	eax = to32i(esp+ecx+0x130); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_489840(); esp += 4; //call
	cmp(ecx, edx);
	if (jl())
		goto loc_4A8846;
loc_4A885C:
	eax = to32i(esp+0x170); //mov
	add(esp, (int32_t)0x198);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A886F:
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_4A88B3;
	eax = to32i(esp+0x130); //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4A889B;
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	to8i(eax+0x3B) = 0; //mov
	to8i(eax+0x3A) = 0; //mov
loc_4A889B:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = to32i(esp+0x170); //mov
	add(esp, (int32_t)0x198);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A88B3:
	test(edi, edi);
	if (jle())
		goto loc_4A88F6;
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	xor_(ecx, ecx);
loc_4A88C0:
	eax = to32i(esp+ecx+0x130); //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4A88EF;
	imul32(eax, 0x60);
	ebx = (int32_t)(intptr_t)dword_59BFB0; //mov
	add(ebx, eax);
	al = to8i(esp+0x178); //mov
	to8i(ebx+0x3A) = 0; //mov
	to32i(esp+0x190) = ebx; //mov
	to8i(ebx+0x3B) = al; //mov
loc_4A88EF:
	add(ecx, (int32_t)4);
	cmp(ecx, edx);
	if (jl())
		goto loc_4A88C0;
loc_4A88F6:
	eax = to32i(esp+0x190); //mov
	to8i(eax+0x3A) = 1; //mov
	goto loc_4A889B;
}
Fn(void) Game::_sub_4A89B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	test(to8i(eax+3), (int8_t)2);
	if (jz())
		goto loc_4A89F5;
	ecx = (int32_t)(intptr_t)(edi+8); //lea
loc_4A89C1:
	dl = to8i(ecx); //mov
	cmp(dl, (int8_t)0xFF);
	if (jz())
		goto loc_4A8A18;
	xor_(ebx, ebx);
	bl = dl; //mov
	cmp(ebx, (int32_t)0xFD);
	if (jz())
		goto loc_4A89FA;
loc_4A89D4:
	inc(ecx);
	cmp(ebx, (int32_t)0xFE);
	if (jz())
		goto loc_4A89C1;
	cmp(ebx, (int32_t)0xFC);
	if (jz())
		goto loc_4A89C1;
	xor_(eax, eax);
	al = to8i(ecx); //mov
	cmp(eax, (int32_t)0xFF);
	if (jz())
		goto loc_4A8A06;
loc_4A89F0:
	inc(ecx);
	add(ecx, eax);
	goto loc_4A89C1;
loc_4A89F5:
	ecx = (int32_t)(intptr_t)(edi+4); //lea
	goto loc_4A89C1;
loc_4A89FA:
	inc(ecx);
	edx = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_488B30(); esp += 4; //call
	goto loc_4A89D4;
loc_4A8A06:
	inc(ecx);
	edx = 4; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	add(ecx, (int32_t)3);
	goto loc_4A89F0;
loc_4A8A18:
	dh = to8i(edi+3); //mov
	and_(dh, (int8_t)0xFE);
	xor_(eax, eax);
	to8i(edi+3) = dh; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A8A30()
{
	push32(esi);
	push32(edi);
	esi = ebx; //mov
	edi = ecx; //mov
	esp -= 4; _sub_4B7D50(); esp += 4; //call
	edx = to32i(esi); //mov
	test(edx, edx);
	if (jl())
		goto loc_4A8A4A;
	ebx = to32i(edi); //mov
	test(ebx, ebx);
	if (jl())
		goto loc_4A8A58;
	pop32(edi);
	pop32(esi);
	return;
loc_4A8A4A:
	imul32(eax, edx, -1);
	to32i(esi) = eax; //mov
	ebx = to32i(edi); //mov
	test(ebx, ebx);
	if (jl())
		goto loc_4A8A58;
	pop32(edi);
	pop32(esi);
	return;
loc_4A8A58:
	imul32(eax, ebx, -1);
	to32i(edi) = eax; //mov
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4A8A60()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = to32i(esp+0x18); //mov
	to32i(esp) = eax; //mov
	edi = ebx; //mov
	esi = ecx; //mov
	esp -= 4; _sub_4B7D50(); esp += 4; //call
	edx = to32i(esp+0x14); //mov
	test(edx, edx);
	if (jl())
		goto loc_4A8B15;
loc_4A8A82:
	ecx = to32i(esp+0x14); //mov
	test(ecx, ecx);
	if (jl())
		goto loc_4A8B2F;
	test(ebp, ebp);
	if (jl())
		goto loc_4A8B2F;
	cmp(ebp, ecx);
	if (jle())
		goto loc_4A8B25;
loc_4A8A9E:
	eax = 2; //mov
loc_4A8AA3:
	ecx = to32i(esp); //mov
	xor_(edx, edx);
	cmp(ecx, (int32_t)0x4000);
	if (jl())
		goto loc_4A8B79;
	cmp(ecx, (int32_t)0xC000);
	if (jge())
		goto loc_4A8B79;
	ecx = to32i(edi); //mov
	cmp(ecx, to32i(esi));
	if (jge())
		goto loc_4A8B6F;
	ecx = 3; //mov
loc_4A8ACF:
	cmp(eax, (int32_t)2);
	if (jg())
		goto loc_4A8AE7;
	edx = 2; //mov
	cmp(ecx, (int32_t)3);
	if (jnz())
		goto loc_4A8AE7;
	cmp(eax, edx);
loc_4A8AE0:
	if (jnz())
		goto loc_4A8AE7;
	edx = 1; //mov
loc_4A8AE7:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jl())
		goto loc_4A8BA9;
loc_4A8AF2:
	test(ebp, ebp);
	if (jl())
		goto loc_4A8BB5;
loc_4A8AFA:
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_4A8BC1;
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_4A8BD1;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4A8B15:
	test(ebp, ebp);
	if (jge())
		goto loc_4A8A82;
	cmp(ebp, edx);
	if (jle())
		goto loc_4A8A9E;
loc_4A8B25:
	eax = 1; //mov
	goto loc_4A8AA3;
loc_4A8B2F:
	ebx = to32i(esp+0x14); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4A8B4D;
	eax = ebx; //mov
loc_4A8B39:
	test(ebp, ebp);
	if (jle())
		goto loc_4A8B53;
	edx = ebp; //mov
	cmp(eax, edx);
	if (jle())
		goto loc_4A8B65;
	eax = 4; //mov
	goto loc_4A8AA3;
loc_4A8B4D:
	eax = ebx; //mov
	neg(eax);
	goto loc_4A8B39;
loc_4A8B53:
	edx = ebp; //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_4A8B65;
	eax = 4; //mov
	goto loc_4A8AA3;
loc_4A8B65:
	eax = 3; //mov
	goto loc_4A8AA3;
loc_4A8B6F:
	ecx = 4; //mov
	goto loc_4A8ACF;
loc_4A8B79:
	ecx = to32i(edi); //mov
	cmp(ecx, to32i(esi));
	if (jge())
		goto loc_4A8BA2;
	ecx = 2; //mov
loc_4A8B84:
	cmp(eax, (int32_t)3);
	if (jl())
		goto loc_4A8AE7;
	edx = 2; //mov
	cmp(ecx, edx);
	if (jnz())
		goto loc_4A8AE7;
	cmp(eax, (int32_t)3);
	goto loc_4A8AE0;
loc_4A8BA2:
	ecx = 1; //mov
	goto loc_4A8B84;
loc_4A8BA9:
	ecx = to32i(edi); //mov
	imul32(eax, ecx, -1);
	to32i(edi) = eax; //mov
	goto loc_4A8AF2;
loc_4A8BB5:
	ebx = to32i(esi); //mov
	imul32(eax, ebx, -1);
	to32i(esi) = eax; //mov
	goto loc_4A8AFA;
loc_4A8BC1:
	ebp = to32i(edi); //mov
	imul32(eax, ebp, -1);
	to32i(edi) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4A8BD1:
	edi = to32i(esi); //mov
	imul32(eax, edi, -1);
	to32i(esi) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_4A8BF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	shl(ecx, (int32_t)5);
	add(ecx, (int32_t)(intptr_t)dword_59BFB0);
	eax = to32i(ecx+0x20); //mov
	edx = to32i(ecx+0x2D); //mov
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x18);
	imul32(eax, edx);
	edx = to32i(ecx+0x28); //mov
	sar(edx, (int32_t)0x10);
	imul32(eax, edx);
	edx = to32i(dword_59C608+2); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx, eax);
	ebx = 0x1F417F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(ecx+0x58); //mov
	to8i(ecx+0x31) = al; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4A8C4A;
	ebx = to32i(ecx+0x4C); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4A8C79;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A8C4A:
	xor_(edx, edx);
	eax = to32i(ecx+0x58); //mov
	dl = to8i(ecx+0x3E); //mov
	edx = to8i(edx+eax); //movsx
	eax = to32i(ecx+0x2E); //mov
	sar(eax, (int32_t)0x18);
	imul32(edx, eax);
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to8i(ecx+0x31) = al; //mov
	ebx = to32i(ecx+0x4C); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4A8C79;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4A8C79:
	eax = to32i(ecx+0x2E); //mov
	edx = ebx; //mov
	sar(eax, (int32_t)0x18);
	al = to8i(edx+eax); //mov
	to8i(ecx+0x31) = al; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4A8C8C()
{
	to32i(dword_4DEB3C) = eax; //mov
	to32i(dword_4DEB38) = edx; //mov
}
Fn(void) Game::_sub_4A8F65()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(esp+0x18); //mov
	edi = to32i(esp+0x14); //mov
	ecx = to32i(esp+0x1C); //mov
	edx = to32i(dword_4DEB38); //mov
	add(esi, to32i(dword_4DEB3C));
	add(edi, to32i(dword_4DB260));
	ebx = to32i(edx+0xC); //mov
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jg())
		goto loc_4A90BD;
	sub(ecx, (int32_t)0x10);
	if (jl())
		goto loc_4A9039;
	test(edi, (int32_t)3);
	if (jnz())
		goto loc_4A908E;
loc_4A8FAC:
	ebp = to32i(edx+8); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	al = to8i(ebp+esi+0); //mov
	shl(eax, (int32_t)0x10);
	ebp = to32i(edx); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x1C); //mov
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx+0x18); //mov
	to32i(edi) = eax; //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x14); //mov
	al = to8i(ebp+esi+0); //mov
	shl(eax, (int32_t)0x10);
	ebp = to32i(edx+0x10); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x2C); //mov
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx+0x28); //mov
	to32i(edi+4) = eax; //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x24); //mov
	al = to8i(ebp+esi+0); //mov
	shl(eax, (int32_t)0x10);
	ebp = to32i(edx+0x20); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x3C); //mov
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx+0x38); //mov
	to32i(edi+8) = eax; //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x34); //mov
	al = to8i(ebp+esi+0); //mov
	shl(eax, (int32_t)0x10);
	ebp = to32i(edx+0x30); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x4C); //mov
	al = to8i(ebp+esi+0); //mov
	edx = (int32_t)(intptr_t)(edx+0x40); //lea
	to32i(edi+0xC) = eax; //mov
	sub(ecx, (int32_t)0x10);
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	if (jns())
		goto loc_4A8FAC;
loc_4A9039:
	add(ecx, (int32_t)0xC);
	if (js())
		goto loc_4A906F;
	test(edi, (int32_t)3);
	if (jnz())
		goto loc_4A906F;
loc_4A9046:
	ebp = to32i(edx+8); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	al = to8i(ebp+esi+0); //mov
	shl(eax, (int32_t)0x10);
	ebp = to32i(edx); //mov
	ah = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x1C); //mov
	al = to8i(ebp+esi+0); //mov
	edx = (int32_t)(intptr_t)(edx+0x10); //lea
	to32i(edi) = eax; //mov
	sub(ecx, (int32_t)4);
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jns())
		goto loc_4A9046;
loc_4A906F:
	add(ecx, (int32_t)3);
	if (js())
		goto loc_4A9089;
	ebx = to32i(edx); //mov
loc_4A9076:
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	to8i(edi) = al; //mov
	sub(ecx, (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+1); //lea
	if (jns())
		goto loc_4A9076;
loc_4A9089:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4A908E:
	add(ecx, (int32_t)0x10);
	ebx = to32i(edx); //mov
loc_4A9093:
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	to8i(edi) = al; //mov
	edi = (int32_t)(intptr_t)(edi+1); //lea
	edx = (int32_t)(intptr_t)(edx+4); //lea
	ecx = (int32_t)(intptr_t)(ecx-1); //lea
	test(edi, (int32_t)3);
	if (jnz())
		goto loc_4A9093;
	ebx = to32i(edx+0xC); //mov
	sub(ecx, (int32_t)0x10);
	if (jns())
		goto loc_4A8FAC;
	goto loc_4A9039;
loc_4A90BD:
	ebx = to32i(edx); //mov
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jg())
		goto loc_4A90E4;
	sub(ecx, (int32_t)1);
	if (js())
		goto loc_4A9089;
loc_4A90CD:
	ax = to16i(esi+ebx*2); //mov
	ebx = to32i(edx+4); //mov
	to16i(edi) = ax; //mov
	sub(ecx, (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+2); //lea
	if (jns())
		goto loc_4A90CD;
	goto loc_4A9089;
loc_4A90E4:
	sub(ecx, (int32_t)1);
	if (js())
		goto loc_4A9089;
loc_4A90E9:
	eax = to32i(esi+ebx*4); //mov
	ebx = to32i(edx+4); //mov
	to32i(edi) = eax; //mov
	sub(ecx, (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jns())
		goto loc_4A90E9;
	goto loc_4A9089;
}
Fn(void) Game::_sub_4A90FE()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(esp+0x18); //mov
	edi = to32i(esp+0x14); //mov
	ebp = to32i(esp+0x1C); //mov
	edx = to32i(dword_4DEB38); //mov
	add(esi, to32i(dword_4DEB3C));
	add(edi, to32i(dword_4DB260));
	ebx = to32i(edx); //mov
	sub(ebp, (int32_t)1);
	if (js())
		goto loc_4A9147;
	xor_(eax, eax);
	xor_(ecx, ecx);
loc_4A912B:
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	cx = to16i(word_56EF3C+eax*2); //mov
	sub(ebp, (int32_t)1);
	to16i(edi) = cx; //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+2); //lea
	if (jns())
		goto loc_4A912B;
loc_4A9147:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4A9240()
{
	//MMX
}
Fn(void) Game::_sub_4A951A()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(esp+0x18); //mov
	edi = to32i(esp+0x14); //mov
	edx = to32i(dword_4DEB38); //mov
	add(esi, to32i(dword_4DEB3C));
	add(edi, to32i(dword_4DB260));
	ebx = to32i(edx); //mov
	xor_(eax, eax);
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jg())
		goto loc_4A9646;
	test(edi, (int32_t)3);
	if (jz())
		goto loc_4A9572;
loc_4A9551:
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	to8i(edi) = al; //mov
	sub(to32i(esp+0x1C), (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+1); //lea
	if (js())
		goto loc_4A9641;
	test(edi, (int32_t)3);
	if (jnz())
		goto loc_4A9551;
loc_4A9572:
	ebx = to32i(edx+0xC); //mov
	sub(to32i(esp+0x1C), (int32_t)8);
	if (jl())
		goto loc_4A95E3;
loc_4A957C:
	ebp = to32i(edx+8); //mov
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x1C); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	or_(ecx, eax);
	ebp = to32i(edx+0x18); //mov
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x14); //mov
	to32i(edi) = ecx; //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx+0x10); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x2C); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	or_(ecx, eax);
	sub(to32i(esp+0x1C), (int32_t)8);
	edx = (int32_t)(intptr_t)(edx+0x20); //lea
	to32i(edi+4) = ecx; //mov
	edi = (int32_t)(intptr_t)(edi+8); //lea
	if (jns())
		goto loc_4A957C;
loc_4A95E3:
	add(to32i(esp+0x1C), (int32_t)4);
	if (js())
		goto loc_4A9623;
loc_4A95EA:
	ebp = to32i(edx+8); //mov
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	ebp = to32i(edx); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+0x1C); //mov
	or_(ecx, eax);
	shl(ecx, (int32_t)8);
	al = to8i(ebp+esi+0); //mov
	or_(ecx, eax);
	to32i(edi) = ecx; //mov
	sub(to32i(esp+0x1C), (int32_t)4);
	edx = (int32_t)(intptr_t)(edx+0x10); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jns())
		goto loc_4A95EA;
loc_4A9623:
	add(to32i(esp+0x1C), (int32_t)3);
	if (js())
		goto loc_4A9641;
	ebx = to32i(edx); //mov
loc_4A962C:
	al = to8i(ebx+esi); //mov
	ebx = to32i(edx+4); //mov
	to8i(edi) = al; //mov
	sub(to32i(esp+0x1C), (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+1); //lea
	if (jns())
		goto loc_4A962C;
loc_4A9641:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4A9646:
	xor_(eax, eax);
	ebx = to32i(edx); //mov
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jg())
		goto loc_4A9673;
	sub(to32i(esp+0x1C), (int32_t)1);
	if (js())
		goto loc_4A9641;
loc_4A965A:
	ax = to16i(esi+ebx*2); //mov
	ebx = to32i(edx+4); //mov
	to16i(edi) = ax; //mov
	sub(to32i(esp+0x1C), (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+2); //lea
	if (jns())
		goto loc_4A965A;
	goto loc_4A9641;
loc_4A9673:
	sub(to32i(esp+0x1C), (int32_t)1);
	if (js())
		goto loc_4A9641;
loc_4A967A:
	eax = to32i(esi+ebx*4); //mov
	ebx = to32i(edx+4); //mov
	to32i(edi) = eax; //mov
	sub(to32i(esp+0x1C), (int32_t)1);
	edx = (int32_t)(intptr_t)(edx+4); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jns())
		goto loc_4A967A;
	goto loc_4A9641;
}
Fn(void) Game::_sub_4A96A0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)0x7B);
	if (jnz())
		goto loc_4A96B9;
	eax = to32i(edx+2); //mov
	sar(eax, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	return;
loc_4A96B9:
	eax = edx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	ecx = eax; //mov
	cmp(eax, (int32_t)0xF);
	if (jnz())
		goto loc_4A96D2;
	ecx = 0x10; //mov
loc_4A96D2:
	push32(ebx);
	ebx = to32i(edx+2); //mov
	sar(ebx, (int32_t)0x10);
	imul32(ecx, ebx);
	eax = to32i(edx); //mov
	and_(eax, (int32_t)0xF0);
	cmp(eax, (int32_t)0x40);
	if (jnz())
		goto loc_4A96F4;
	eax = (int32_t)(intptr_t)(ecx+0xF); //lea
	and_(al, (int8_t)0xF0);
	sar(eax, (int32_t)3);
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
	return;
loc_4A96F4:
	eax = (int32_t)(intptr_t)(ecx+7); //lea
	and_(al, (int8_t)0xF8);
	sar(eax, (int32_t)3);
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4A9700()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = to32i(esp+0x24); //mov
	esi = eax; //mov
	ebp = ecx; //mov
	eax = to32i(esp+0x20); //mov
	inc(edi);
	sar(edi, (int32_t)1);
	test(edi, edi);
	if (jle())
		goto loc_4A9774;
	ecx = (int32_t)(intptr_t)(eax-1); //lea
	test(eax, ecx);
	if (jz())
		goto loc_4A977D;
loc_4A9720:
	ecx = ebx; //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, eax);
	to32i(esp+4) = ecx; //mov
	ecx = edx; //mov
	sar(ecx, (int32_t)0x10);
	to32i(esp) = ecx; //mov
	ecx = to32i(esp+4); //mov
	add(ecx, to32i(esp));
	to32i(esi) = ecx; //mov
	ecx = to32i(esp+0x1C); //mov
	add(ebx, ecx);
	ecx = ebx; //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, eax);
	add(edx, ebp);
	to32i(esp) = ecx; //mov
	ecx = edx; //mov
	sar(ecx, (int32_t)0x10);
	to32i(esp+4) = ecx; //mov
	ecx = to32i(esp); //mov
	add(esi, (int32_t)8);
	add(ecx, to32i(esp+4));
	to32i(esi-4) = ecx; //mov
	ecx = to32i(esp+0x1C); //mov
	add(edx, ebp);
	add(ebx, ecx);
	dec(edi);
	if (jnz())
		goto loc_4A9720;
loc_4A9774:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4A977D:
	esp -= 4; _sub_4AD9F0(); esp += 4; //call
	to32i(esp+8) = eax; //mov
loc_4A9786:
	eax = ebx; //mov
	sar(eax, (int32_t)0x10);
	cl = to8i(esp+8); //mov
	shl(eax, cl);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	ecx = to32i(esp); //mov
	sar(eax, (int32_t)0x10);
	add(ecx, eax);
	eax = to32i(esp+0x1C); //mov
	add(ebx, eax);
	eax = ebx; //mov
	to32i(esi) = ecx; //mov
	sar(eax, (int32_t)0x10);
	cl = to8i(esp+8); //mov
	shl(eax, cl);
	add(edx, ebp);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	ecx = to32i(esp); //mov
	sar(eax, (int32_t)0x10);
	add(esi, (int32_t)8);
	add(ecx, eax);
	to32i(esi-4) = ecx; //mov
	ecx = to32i(esp+0x1C); //mov
	add(edx, ebp);
	add(ebx, ecx);
	dec(edi);
	if (jnz())
		goto loc_4A9786;
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4A9CF0()
{
	eax = to32i(lpTlsValue); //mov
}
Fn(void) Game::_free_()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = free_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4AB61D()
{
	push32(ecx);
	test(eax, (int32_t)7);
	if (jnz())
		goto loc_4AB6A4;
loc_4AB625:
	sub(ebx, (int32_t)0x20);
	if (js())
		goto loc_4AB64F;
loc_4AB62A:
	fild(to64i(edx));
	fild(to64i(edx+8));
	fxch_st(1);
	fistp(to64i(eax));
	fistp(to64i(eax+8));
	fild(to64i(edx+0x10));
	fild(to64i(edx+0x18));
	fxch_st(1);
	fistp(to64i(eax+0x10));
	fistp(to64i(eax+0x18));
	edx = (int32_t)(intptr_t)(edx+0x20); //lea
	eax = (int32_t)(intptr_t)(eax+0x20); //lea
	sub(ebx, (int32_t)0x20);
	if (jns())
		goto loc_4AB62A;
loc_4AB64F:
	add(ebx, (int32_t)0x18);
	if (js())
		goto loc_4AB663;
loc_4AB654:
	fild(to64i(edx));
	fistp(to64i(eax));
	edx = (int32_t)(intptr_t)(edx+8); //lea
	eax = (int32_t)(intptr_t)(eax+8); //lea
	sub(ebx, (int32_t)8);
	if (jns())
		goto loc_4AB654;
loc_4AB663:
	add(ebx, (int32_t)8);
	if (jnz())
		goto loc_4AB66A;
	pop32(ecx);
	return;
loc_4AB66A:
	cmp(ebx, (int32_t)4);
	if (jb())
		goto loc_4AB67C;
	ecx = to32i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	to32i(eax) = ecx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	sub(ebx, (int32_t)4);
loc_4AB67C:
	cmp(ebx, (int32_t)2);
	if (jb())
		goto loc_4AB690;
	cx = to16i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	to16i(eax) = cx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	sub(ebx, (int32_t)2);
loc_4AB690:
	cmp(ebx, (int32_t)1);
	if (jb())
		goto loc_4AB6A2;
	cl = to8i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+1); //lea
	to8i(eax) = cl; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	sub(ebx, (int32_t)1);
loc_4AB6A2:
	pop32(ecx);
	return;
loc_4AB6A4:
	test(eax, (int32_t)1);
	if (jz())
		goto loc_4AB6BD;
	cmp(ebx, (int32_t)1);
	if (jl())
		goto loc_4AB6BD;
	cl = to8i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+1); //lea
	to8i(eax) = cl; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	sub(ebx, (int32_t)1);
loc_4AB6BD:
	test(eax, (int32_t)2);
	if (jz())
		goto loc_4AB6D8;
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_4AB6D8;
	cx = to16i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+2); //lea
	to16i(eax) = cx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	sub(ebx, (int32_t)2);
loc_4AB6D8:
	test(eax, (int32_t)4);
	if (jz())
		goto loc_4AB6F1;
	cmp(ebx, (int32_t)4);
	if (jl())
		goto loc_4AB6F1;
	ecx = to32i(edx); //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	to32i(eax) = ecx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	sub(ebx, (int32_t)4);
loc_4AB6F1:
	goto loc_4AB625;
}
Fn(void) Game::_sub_4AB6F9()
{
	//MMX
}
Fn(void) Game::_sub_4AC810()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ecx; //mov
	ecx = to32i(esp+0x14); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4AC82A;
	ecx = to32i(dword_4DAB84); //mov
loc_4AC82A:
	test(ecx, ecx);
	if (jnz())
		goto loc_4AC833;
	ecx = 8; //mov
loc_4AC833:
	eax = (int32_t)(intptr_t)(ecx+1); //lea
	and_(al, (int8_t)0xFE);
	edx = 0x38; //mov
	to32i(esp) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(esi) = 0x57494E44; //mov
	to8i(esi+0x1E) = 0xFF; //mov
	to32i(esi+0x28) = ebp; //mov
	to32i(esi+4) = edi; //mov
	to32i(esi+8) = ebx; //mov
	to32i(esi+0x14) = edi; //mov
	to32i(esi+0x18) = ebx; //mov
	eax = ecx; //mov
	to8i(esi+0x1C) = cl; //mov
	esp -= 4; _sub_4ACB80(); esp += 4; //call
	edx = ebp; //mov
	to8i(esi+0x1D) = al; //mov
	eax = to32i(esp+0x18); //mov
	ecx = ebx; //mov
	to32i(esi+0x20) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	xor_(ebx, ebx);
	to32i(esi+0x34) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_49B174(); esp += 4; //call
	ebx = 3; //mov
	edx = to32i(esp); //mov
	ecx = edi; //mov
	to32i(esi+0x2C) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_49B174(); esp += 4; //call
	to32i(esi+0x30) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4AC934()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4AC943;
	esi = (int32_t)(intptr_t)dword_4DB240; //mov
loc_4AC943:
	ecx = to32i(esi+0x28); //mov
	to32i(esi+0x20) = ebx; //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_4AC96D;
	ebx = to32i(esi+0x2C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4AC95B;
	eax = ebx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_4AC95B:
	ecx = to32i(esi+8); //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	to32i(esi+0x28) = edx; //mov
	esp -= 4; _sub_49B174(); esp += 4; //call
	to32i(esi+0x2C) = eax; //mov
loc_4AC96D:
	eax = to32i(esi+0xC); //mov
	edi = to32i(esi+4); //mov
	cmp(eax, edi);
	if (jle())
		goto loc_4AC97A;
	to32i(esi+0xC) = edi; //mov
loc_4AC97A:
	eax = to32i(esi+0x10); //mov
	ebp = to32i(esi+8); //mov
	cmp(eax, ebp);
	if (jle())
		goto loc_4AC987;
	to32i(esi+0x10) = ebp; //mov
loc_4AC987:
	eax = to32i(esi+0x14); //mov
	edx = to32i(esi+4); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_4AC9AA;
	to32i(esi+0x14) = edx; //mov
loc_4AC994:
	eax = to32i(esi+0x18); //mov
	ebx = to32i(esi+8); //mov
	cmp(eax, ebx);
	if (jg())
		goto loc_4AC9B6;
	edi = to32i(esi+0x10); //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4AC9BE;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4AC9AA:
	ecx = to32i(esi+0xC); //mov
	cmp(eax, ecx);
	if (jge())
		goto loc_4AC994;
	to32i(esi+0x14) = ecx; //mov
	goto loc_4AC994;
loc_4AC9B6:
	to32i(esi+0x18) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4AC9BE:
	to32i(esi+0x18) = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4AC9C8()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(eax+0x2C); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4AC9FD;
loc_4AC9D4:
	ebx = to32i(edx+0x30); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4AC9E9;
	eax = ebx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
	to32i(edx+0x30) = 0; //mov
loc_4AC9E9:
	cmp(edx, (int32_t)(intptr_t)dword_4DB278);
	if (jz())
		goto loc_4AC9F9;
	cmp(edx, (int32_t)(intptr_t)dword_4DB2B0);
	if (jnz())
		goto loc_4ACA0D;
loc_4AC9F9:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4AC9FD:
	eax = ecx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
	to32i(edx+0x2C) = 0; //mov
	goto loc_4AC9D4;
loc_4ACA0D:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::___STOSB()
{
	or_(ecx, ecx);
	if (jz())
		goto locret_4ACB00;
loc_4ACAD6:
	test(al, (int8_t)3);
	if (jz())
		goto loc_4ACAE3;
	to8i(eax) = dl; //mov
	inc(eax);
	ror(edx, (int32_t)8);
	dec(ecx);
	if (jnz())
		goto loc_4ACAD6;
loc_4ACAE3:
	push32(ecx);
	shr(ecx, (int32_t)2);
	esp -= 4; ___STOSD(); esp += 4; //call
	pop32(ecx);
	and_(ecx, (int32_t)3);
	if (jz())
		goto locret_4ACB00;
	to8i(eax) = dl; //mov
	dec(ecx);
	if (jz())
		goto locret_4ACB00;
	to8i(eax+1) = dh; //mov
	dec(ecx);
	if (jz())
		goto locret_4ACB00;
	to8i(eax+2) = dl; //mov
locret_4ACB00:
	return;
}
Fn(void) Game::___STOSD()
{
	or_(ecx, ecx);
	if (jz())
		goto locret_4ACB72;
loc_4ACB0B:
	test(al, (int8_t)0x1F);
	if (jz())
		goto loc_4ACB17;
	to32i(eax) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	dec(ecx);
	if (jnz())
		goto loc_4ACB0B;
loc_4ACB17:
	push32(ecx);
	shr(ecx, (int32_t)2);
	if (jz())
		goto loc_4ACB57;
	dec(ecx);
	if (jz())
		goto loc_4ACB49;
loc_4ACB20:
	to32i(eax) = edx; //mov
	to32i(eax+4) = edx; //mov
	dec(ecx);
	to32i(eax+8) = edx; //mov
	to32i(eax+0xC) = edx; //mov
	if (jz())
		goto loc_4ACB46;
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0x14) = edx; //mov
	dec(ecx);
	to32i(eax+0x18) = edx; //mov
	to32i(eax+0x1C) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+0x20); //lea
	if (jnz())
		goto loc_4ACB20;
	eax = (int32_t)(intptr_t)(eax-0x10); //lea
loc_4ACB46:
	eax = (int32_t)(intptr_t)(eax+0x10); //lea
loc_4ACB49:
	to32i(eax) = edx; //mov
	to32i(eax+4) = edx; //mov
	to32i(eax+8) = edx; //mov
	to32i(eax+0xC) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+0x10); //lea
loc_4ACB57:
	pop32(ecx);
	and_(ecx, (int32_t)3);
	if (jz())
		goto locret_4ACB72;
	to32i(eax) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	dec(ecx);
	if (jz())
		goto locret_4ACB72;
	to32i(eax) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	dec(ecx);
	if (jz())
		goto locret_4ACB72;
	to32i(eax) = edx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
locret_4ACB72:
	return;
}
Fn(void) Game::_sub_4ACB80()
{
	push32(edx);
	xor_(edx, edx);
	cmp(eax, (int32_t)0xF);
	if (jnb())
		goto loc_4ACB9B;
	cmp(eax, (int32_t)4);
	if (jnb())
		goto loc_4ACBC0;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4ACB97;
	edx = 0x79; //mov
loc_4ACB97:
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACB9B:
	if (jbe())
		goto loc_4ACBD9;
	cmp(eax, (int32_t)0x18);
	if (jnb())
		goto loc_4ACBB0;
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_4ACB97;
	edx = 0x78; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACBB0:
	if (jbe())
		goto loc_4ACBE2;
	cmp(eax, (int32_t)0x20);
	if (jnz())
		goto loc_4ACB97;
	edx = 0x7D; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACBC0:
	if (jbe())
		goto loc_4ACBD0;
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_4ACB97;
	edx = 0x7B; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACBD0:
	edx = 0x7A; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACBD9:
	edx = 0x7E; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_4ACBE2:
	edx = 0x7F; //mov
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4ACBEC()
{
	ebx = to32i(esi+0x14); //mov
	eax = to32i(esi+0xC); //mov
	ecx = to32i(esi+4); //mov
	edx = to32i(esi+0x1C); //mov
	or_(ecx, ebx);
	or_(edx, eax);
	edi = to32i(esi+8); //mov
	ebp = to32i(esi+0x18); //mov
	or_(edx, ecx);
	or_(edi, ebp);
	ecx = to32i(esi+0x10); //mov
	or_(edx, edi);
	or_(edx, ecx);
	if (jz())
		goto loc_4ACD23;
	ecx = to32i(esi+4); //mov
	edx = to32i(esi+0x1C); //mov
	edi = (int32_t)(intptr_t)(ebx+eax); //lea
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	to32i(dbl_4E28A8) = ebx; //mov
	to32i(dbl_4E28A8+4) = ecx; //mov
	ebp = (int32_t)(intptr_t)(eax+edi); //lea
	sub(eax, edi);
	fild(to32i(dbl_4E28A8));
	fild(to32i(dbl_4E28A8+4));
	fld_st(0);
	fmul(to32f(flt_4E28C0));
	fxch_st(2);
	fadd_st(1, 0);
	fmul(to32f(flt_4E28BC));
	fxch_st(1);
	fmul(to32f(flt_4E28C4));
	imul32(to32i(dword_4E28B8));
	fadd_st(1, 0);
	fsubp_st(2, 0);
	fadd(to32f(flt_4E28C8));
	fxch_st(1);
	fadd(to32f(flt_4E28C8));
	eax = to32i(esi+8); //mov
	ebx = to32i(esi+0x18); //mov
	shl(edx, (int32_t)1);
	fstp(to64f(dbl_4E28B0));
	fstp(to64f(dbl_4E28A8));
	ecx = to32i(dbl_4E28A8); //mov
	edi = to32i(dbl_4E28B0); //mov
	add(ecx, edx);
	add(edx, edi);
	add(edi, ebp);
	to32i(dbl_4E28A8+4) = ecx; //mov
	to32i(dbl_4E28B0) = edx; //mov
	to32i(dbl_4E28B0+4) = edi; //mov
	ecx = to32i(esi); //mov
	edx = to32i(esi+0x10); //mov
	esi = (int32_t)(intptr_t)(eax+ebx); //lea
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	imul32(to32i(dword_4E28B8));
	shl(edx, (int32_t)1);
	edi = to32i(dword_4E28A4); //mov
	add(esi, edx);
	ebp = to32i(dbl_4E28A8+4); //mov
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	edx = (int32_t)(intptr_t)(ebx+esi); //lea
	sub(ebx, esi);
	esi = (int32_t)(intptr_t)(ecx+ebp); //lea
	sub(ecx, ebp);
	ebp = to32i(dbl_4E28A8); //mov
	to32i(edi+0x48) = esi; //mov
	esi = to32i(dbl_4E28B0); //mov
	to32i(edi+0xB4) = ecx; //mov
	ecx = (int32_t)(intptr_t)(ebx+ebp); //lea
	sub(ebx, ebp);
	ebp = to32i(dbl_4E28B0+4); //mov
	to32i(edi+0x6C) = ecx; //mov
	to32i(edi+0x90) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+esi); //lea
	sub(eax, esi);
	ecx = (int32_t)(intptr_t)(edx+ebp); //lea
	sub(edx, ebp);
	to32i(edi) = ecx; //mov
	to32i(edi+0x24) = ebx; //mov
	to32i(edi+0xD8) = eax; //mov
	to32i(edi+0xFC) = edx; //mov
	return;
loc_4ACD23:
	eax = to32i(esi); //mov
	edi = to32i(dword_4E28A4); //mov
	to32i(edi) = eax; //mov
	to32i(edi+0x24) = eax; //mov
	to32i(edi+0x48) = eax; //mov
	to32i(edi+0x6C) = eax; //mov
	to32i(edi+0x90) = eax; //mov
	to32i(edi+0xB4) = eax; //mov
	to32i(edi+0xD8) = eax; //mov
	to32i(edi+0xFC) = eax; //mov
}
Fn(void) Game::_sub_4ACD4F()
{
	ebx = to32i(esi+0x14); //mov
	eax = to32i(esi+0xC); //mov
	ecx = to32i(esi+4); //mov
	edx = to32i(esi+0x1C); //mov
	edi = (int32_t)(intptr_t)(ebx+eax); //lea
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	to32i(dbl_4E28A8) = ebx; //mov
	to32i(dbl_4E28A8+4) = ecx; //mov
	ebp = (int32_t)(intptr_t)(eax+edi); //lea
	sub(eax, edi);
	fild(to32i(dbl_4E28A8));
	fild(to32i(dbl_4E28A8+4));
	fld_st(0);
	fmul(to32f(flt_4E28C0));
	fxch_st(2);
	fadd_st(1, 0);
	fmul(to32f(flt_4E28BC));
	fxch_st(1);
	fmul(to32f(flt_4E28C4));
	imul32(to32i(dword_4E28B8));
	fadd_st(1, 0);
	fsubp_st(2, 0);
	fadd(to32f(flt_4E28C8));
	fxch_st(1);
	fadd(to32f(flt_4E28C8));
	eax = to32i(esi+8); //mov
	ebx = to32i(esi+0x18); //mov
	shl(edx, (int32_t)1);
	fstp(to64f(dbl_4E28B0));
	fstp(to64f(dbl_4E28A8));
	ecx = to32i(dbl_4E28A8); //mov
	edi = to32i(dbl_4E28B0); //mov
	add(ecx, edx);
	add(edx, edi);
	add(edi, ebp);
	to32i(dbl_4E28A8+4) = ecx; //mov
	to32i(dbl_4E28B0) = edx; //mov
	to32i(dbl_4E28B0+4) = edi; //mov
	ecx = to32i(esi); //mov
	edx = to32i(esi+0x10); //mov
	esi = (int32_t)(intptr_t)(eax+ebx); //lea
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	imul32(to32i(dword_4E28B8));
	shl(edx, (int32_t)1);
	edi = to32i(dword_4E28A4); //mov
	add(esi, edx);
	ebp = to32i(dbl_4E28A8+4); //mov
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	sub(ecx, edx);
	edx = (int32_t)(intptr_t)(ebx+esi); //lea
	sub(ebx, esi);
	esi = (int32_t)(intptr_t)(ecx+ebp); //lea
	sub(ecx, ebp);
	ebp = to32i(dbl_4E28A8); //mov
	to32i(edi+8) = esi; //mov
	esi = to32i(dbl_4E28B0); //mov
	to32i(edi+0x14) = ecx; //mov
	ecx = (int32_t)(intptr_t)(ebx+ebp); //lea
	sub(ebx, ebp);
	ebp = to32i(dbl_4E28B0+4); //mov
	to32i(edi+0xC) = ecx; //mov
	to32i(edi+0x10) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+esi); //lea
	sub(eax, esi);
	ecx = (int32_t)(intptr_t)(edx+ebp); //lea
	sub(edx, ebp);
	to32i(edi) = ecx; //mov
	to32i(edi+4) = ebx; //mov
	to32i(edi+0x18) = eax; //mov
	to32i(edi+0x1C) = edx; //mov
}
Fn(void) Game::_sub_4ACE59()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	push32(eax);
	shl(edx, (int32_t)2);
	to32i(dword_4E28A0) = edx; //mov
	esi = (int32_t)(intptr_t)dword_4E29EC; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28CC; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2A0C; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28D0; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2A2C; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28D4; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2A4C; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28D8; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2A6C; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28DC; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2A8C; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28E0; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2AAC; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28E4; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4E2ACC; //mov
	to32i(dword_4E28A4) = (int32_t)(intptr_t)dword_4E28E8; //mov
	esp -= 4; _sub_4ACBEC(); esp += 4; //call
	pop32(eax);
	esi = (int32_t)(intptr_t)dword_4E28CC; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E28F0; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E2914; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E2938; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E295C; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E2980; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E29A4; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	eax = to32i(dword_4E28A4); //mov
	edx = to32i(dword_4E28A0); //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_4E29C8; //mov
	to32i(dword_4E28A4) = eax; //mov
	esp -= 4; _sub_4ACD4F(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4ACFE4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	xor_(ebx, ebx);
	esi = eax; //mov
	bx = to16i(eax); //mov
	edi = edx; //mov
	shl(ebx, (int32_t)0x10);
	ebp = 0x10; //mov
	add(esi, (int32_t)2);
	eax = ebx; //mov
loc_4ACFFE:
	shr(eax, (int32_t)0x16);
	cmp(eax, (int32_t)0x1FF);
	if (jz())
		goto loc_4AD0EA;
	to16i(edi) = ax; //mov
	add(edi, (int32_t)2);
	shl(ebx, (int32_t)0xA);
	sub(ebp, (int32_t)0xA);
	cmp(ebp, (int32_t)0x10);
	if (jge())
		goto loc_4AD033;
	xor_(eax, eax);
	ecx = 0x10; //mov
	ax = to16i(esi); //mov
	sub(ecx, ebp);
	shl(eax, cl);
	add(esi, (int32_t)2);
	or_(ebx, eax);
	add(ebp, (int32_t)0x10);
loc_4AD033:
	edx = ebx; //mov
loc_4AD035:
	shr(edx, (int32_t)0x13);
	eax = to32i(dword_56475C+edx*4); //mov
	test(eax, (int32_t)0x200000);
	if (jz())
		goto loc_4AD0A7;
	test(eax, (int32_t)0x10000);
	if (jz())
		goto loc_4AD07A;
	shl(ebx, (int32_t)6);
	sub(ebp, (int32_t)6);
	cmp(ebp, (int32_t)0x10);
	if (jge())
		goto loc_4AD06E;
	xor_(eax, eax);
	ecx = 0x10; //mov
	ax = to16i(esi); //mov
	sub(ecx, ebp);
	shl(eax, cl);
	add(esi, (int32_t)2);
	or_(ebx, eax);
	add(ebp, (int32_t)0x10);
loc_4AD06E:
	eax = ebx; //mov
	shr(eax, (int32_t)0x10);
	or_(eax, (int32_t)0x100000);
	goto loc_4AD0A7;
loc_4AD07A:
	shl(ebx, (int32_t)8);
	sub(ebp, (int32_t)8);
	cmp(ebp, (int32_t)0x10);
	if (jge())
		goto loc_4AD09B;
	xor_(eax, eax);
	ecx = 0x10; //mov
	ax = to16i(esi); //mov
	sub(ecx, ebp);
	shl(eax, cl);
	add(esi, (int32_t)2);
	or_(ebx, eax);
	add(ebp, (int32_t)0x10);
loc_4AD09B:
	edx = ebx; //mov
	shr(edx, (int32_t)0x17);
	eax = to32i(dword_56C75C+edx*4); //mov
loc_4AD0A7:
	to16i(edi) = ax; //mov
	ecx = eax; //mov
	shr(ecx, (int32_t)0x10);
	add(edi, (int32_t)2);
	shl(ebx, cl);
	sub(ebp, ecx);
	cmp(ebp, (int32_t)0x10);
	if (jge())
		goto loc_4AD0D1;
	xor_(edx, edx);
	ecx = 0x10; //mov
	dx = to16i(esi); //mov
	sub(ecx, ebp);
	shl(edx, cl);
	add(esi, (int32_t)2);
	or_(ebx, edx);
	add(ebp, (int32_t)0x10);
loc_4AD0D1:
	and_(eax, (int32_t)0xFFFF);
	edx = ebx; //mov
	cmp(eax, (int32_t)0xFE00);
	if (jnz())
		goto loc_4AD035;
	eax = ebx; //mov
	goto loc_4ACFFE;
loc_4AD0EA:
	to16i(edi) = 0xFE00; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4AD0F4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	xor_(eax, eax);
	ax = to16i(esi); //mov
	xor_(ebx, ebx);
	shl(eax, (int32_t)0x16);
	ecx = 1; //mov
	sar(eax, (int32_t)0x16);
	edi = 0x3F; //mov
	imul32(to32i(dword_56CF5C));
	to32i(dword_4E29EC) = eax; //mov
	xor_(ebp, ebp);
loc_4AD120:
	xor_(eax, eax);
	ax = to16i(esi+ecx*2); //mov
	inc(ecx);
	cmp(eax, (int32_t)0xFE00);
	if (jz())
		goto loc_4AD164;
	edx = eax; //mov
	bl = (int32_t)(intptr_t)byte_4DEF20[edi]; //mov
	shr(edx, (int32_t)0xA);
	if (jz())
		goto loc_4AD14D;
loc_4AD13B:
	dec(edi);
	dec(edx);
	to32i(dword_4E29EC+ebx*4) = ebp; //mov
	bl = (int32_t)(intptr_t)byte_4DEF20[edi]; //mov
	if (jnz())
		goto loc_4AD13B;
loc_4AD14D:
	shl(eax, (int32_t)0x16);
	sar(eax, (int32_t)0x16);
	dec(edi);
	imul32(to32i(dword_56CF5C+ebx*4));
	to32i(dword_4E29EC+ebx*4) = eax; //mov
	goto loc_4AD120;
loc_4AD164:
	bl = (int32_t)(intptr_t)byte_4DEF20[edi]; //mov
loc_4AD16A:
	dec(edi);
	if (js())
		goto loc_4AD17D;
	to32i(dword_4E29EC+ebx*4) = ebp; //mov
	bl = (int32_t)(intptr_t)byte_4DEF20[edi]; //mov
	goto loc_4AD16A;
loc_4AD17D:
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4AD186()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	xor_(edx, edx);
	al = to8i(esi+2); //mov
	bl = to8i(edi+0x102); //mov
	cl = to8i(esi+6); //mov
	dl = to8i(edi+2); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0xA); //mov
	bl = to8i(edi+0x106); //mov
	cl = to8i(esi+0xE); //mov
	dl = to8i(edi+6); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+4) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x12); //mov
	bl = to8i(edi+0x10A); //mov
	cl = to8i(esi+0x16); //mov
	dl = to8i(edi+0xA); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+8) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x1A); //mov
	bl = to8i(edi+0x10E); //mov
	cl = to8i(esi+0x1E); //mov
	dl = to8i(edi+0xE); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0xC) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x22); //mov
	bl = to8i(edi+0x112); //mov
	cl = to8i(esi+0x26); //mov
	dl = to8i(edi+0x12); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0x10) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x2A); //mov
	bl = to8i(edi+0x116); //mov
	cl = to8i(esi+0x2E); //mov
	dl = to8i(edi+0x16); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0x14) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x32); //mov
	bl = to8i(edi+0x11A); //mov
	cl = to8i(esi+0x36); //mov
	dl = to8i(edi+0x1A); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0x18) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+0x3A); //mov
	bl = to8i(edi+0x11E); //mov
	cl = to8i(esi+0x3E); //mov
	dl = to8i(edi+0x1E); //mov
	al = (int32_t)(intptr_t)byte_56D05C[eax]; //mov
	bl = (int32_t)(intptr_t)byte_56D05C[ebx]; //mov
	shl(eax, (int32_t)8);
	cl = (int32_t)(intptr_t)byte_56D05C[ecx]; //mov
	shl(ebx, (int32_t)8);
	dl = (int32_t)(intptr_t)byte_56D05C[edx]; //mov
	or_(eax, ecx);
	or_(ebx, edx);
	shl(eax, (int32_t)0x10);
	or_(eax, ebx);
	xor_(ebx, ebx);
	to32i(ebp+0x1C) = eax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4AD390()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	to32i(esp) = ebx; //mov
	ebp = ecx; //mov
	esp -= 4; _sub_49D180(); esp += 4; //call
	edx = 0x205; //mov
	goto loc_4AD3BB;
loc_4AD3BB:
	ecx = esi; //mov
	eax = edi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4AD3DC;
	to32i(esi) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4AD3DC:
	push32(0);
	ebx = to32i(esp+0x18); //mov
	ecx = ebp; //mov
	eax = to32i(esi); //mov
	xor_(edx, edx);
	esp -= 4; _sub_45A420(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4AD408;
	eax = to32i(esp); //mov
	to32i(eax) = 0; //mov
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4AD408:
	eax = to32i(esi); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	to32i(esi) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_4AD420()
{
	push32(esi);
	push32(1);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	esp -= 4; _sub_4AD390(); esp += 4; //call
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4AD44C()
{
	_sub_459B80(); return; //jmp
}
Fn(void) Game::_sub_4AD454()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	to32i(esp+8) = edx; //mov
	ebp = ebx; //mov
	to32i(esp+4) = ecx; //mov
	xor_(edi, edi);
	ebx = esp; //mov
	push32(edi);
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_45A420(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4AD481;
loc_4AD478:
	eax = edi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4AD481:
	ebx = to32i(esp); //mov
	imul32(ebx, ebp);
	edx = to32i(esp+8); //mov
	eax = esi; //mov
	esp -= 4; _sub_45A070(); esp += 4; //call
	edx = to32i(esp+4); //mov
	edi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4AD478;
	test(eax, eax);
	if (jnz())
		goto loc_4AD478;
	eax = edi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4AD4AC()
{
	push32(ecx);
	ecx = 1; //mov
	esp -= 4; _sub_4AD454(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4AD4DC()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_459D60(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_459CB0(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4AD510()
{
	push32(ecx);
	ecx = (int32_t)(intptr_t)(eax+0xC); //lea
	eax = to32i(eax+0xC); //mov
	add(eax, ecx);
	to8i(edx) = 0; //mov
	cl = to8i(eax+0x2D); //mov
	to8i(edx+1) = cl; //mov
	cl = to8i(eax+0x2F); //mov
	to8i(edx+2) = cl; //mov
	cl = to8i(eax+0x2E); //mov
	to8i(edx+3) = cl; //mov
	ax = to16i(eax+0x32); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(edx+4) = eax; //mov
	xor_(eax, eax);
	pop32(ecx);
}
Fn(void) Game::_sub_4AD540()
{
	push32(ecx);
	push32(edi);
	edi = edx; //mov
	cmp(to32i(eax), (int32_t)0x6C544150);
	if (jz())
		goto loc_4AD591;
	test(to8i(eax+3), (int8_t)2);
	if (jz())
		goto loc_4AD59B;
	ecx = (int32_t)(intptr_t)(eax+8); //lea
loc_4AD555:
	push32(esi);
	push32(ebx);
	to8i(edi) = 0; //mov
	to8i(edi+1) = 0; //mov
	to8i(edi+2) = 0; //mov
	to8i(edi+3) = 0; //mov
	to32i(edi+4) = 0; //mov
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jz())
		goto loc_4AD58A;
loc_4AD572:
	bh = to8i(ecx); //mov
	cmp(bh, (int8_t)0xFE);
	if (jz())
		goto loc_4AD58A;
	esi = (uint8_t)bh; //movzx
	inc(ecx);
	cmp(esi, (int32_t)0xFD);
	if (jnz())
		goto loc_4AD5A0;
loc_4AD585:
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
loc_4AD58A:
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD591:
	edx = edi; //mov
	esp -= 4; _sub_4AD510(); esp += 4; //call
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD59B:
	ecx = (int32_t)(intptr_t)(eax+4); //lea
	goto loc_4AD555;
loc_4AD5A0:
	cmp(esi, (int32_t)0xFC);
	if (jz())
		goto loc_4AD585;
	xor_(ebx, ebx);
	bl = to8i(ecx); //mov
	cmp(ebx, (int32_t)0xFF);
	if (jnz())
		goto loc_4AD5C6;
	inc(ecx);
	edx = 4; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	ebx = eax; //mov
	add(ecx, (int32_t)3);
loc_4AD5C6:
	inc(ecx);
	cmp(esi, (int32_t)0x82);
	if (jnb())
		goto loc_4AD5E2;
	cmp(esi, (int32_t)0x13);
	if (jnb())
		goto loc_4AD606;
loc_4AD5D4:
	add(ecx, ebx);
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD5E2:
	if (jbe())
		goto loc_4AD64B;
	cmp(esi, (int32_t)0x83);
	if (jbe())
		goto loc_4AD669;
	cmp(esi, (int32_t)0x84);
	if (jnz())
		goto loc_4AD5D4;
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(edi+4) = eax; //mov
	goto loc_4AD5D4;
loc_4AD606:
	if (jbe())
		goto loc_4AD62E;
	cmp(esi, (int32_t)0x81);
	if (jnz())
		goto loc_4AD5D4;
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to8i(edi+1) = al; //mov
	add(ecx, ebx);
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD62E:
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to8i(edi) = al; //mov
	add(ecx, ebx);
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD64B:
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to8i(edi+3) = al; //mov
	add(ecx, ebx);
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_4AD669:
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to8i(edi+2) = al; //mov
	add(ecx, ebx);
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4AD572;
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
}
Fn(void) Game::_sub_4AD690()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp) = ecx; //mov
	esi = to32i(esp+8); //mov
	edi = to32i(esp); //mov
	ebx = to32i(eax); //mov
	ecx = to32i(edx); //mov
	edx = to32i(dword_4DB24C); //mov
	esi = to32i(esi); //mov
	edi = to32i(edi); //mov
	cmp(ebx, edx);
	if (jl())
		goto loc_4AD6F8;
	cmp(ebx, to32i(dword_4DB254));
	if (jge())
		goto loc_4AD6F8;
	cmp(ecx, to32i(dword_4DB250));
	if (jl())
		goto loc_4AD6F8;
	cmp(ecx, to32i(dword_4DB258));
	if (jge())
		goto loc_4AD6F8;
	cmp(esi, to32i(dword_4DB24C));
	if (jl())
		goto loc_4AD6F8;
	cmp(esi, to32i(dword_4DB254));
	if (jge())
		goto loc_4AD6F8;
	cmp(edi, to32i(dword_4DB250));
	if (jl())
		goto loc_4AD6F8;
	cmp(edi, to32i(dword_4DB258));
	if (jl())
		goto loc_4AD858;
loc_4AD6F8:
	edx = to32i(dword_4DB254); //mov
	cmp(ebx, edx);
	if (jl())
		goto loc_4AD70A;
	cmp(esi, edx);
	if (jge())
		goto loc_4AD864;
loc_4AD70A:
	edx = to32i(dword_4DB24C); //mov
	cmp(ebx, edx);
	if (jge())
		goto loc_4AD71C;
	cmp(esi, edx);
	if (jl())
		goto loc_4AD864;
loc_4AD71C:
	edx = to32i(dword_4DB258); //mov
	cmp(ecx, edx);
	if (jl())
		goto loc_4AD72E;
	cmp(edi, edx);
	if (jge())
		goto loc_4AD864;
loc_4AD72E:
	edx = to32i(dword_4DB250); //mov
	cmp(ecx, edx);
	if (jge())
		goto loc_4AD740;
	cmp(edi, edx);
	if (jl())
		goto loc_4AD864;
loc_4AD740:
	cmp(ebx, esi);
	if (jle())
		goto loc_4AD750;
	eax = ebx; //mov
	ebx = esi; //mov
	esi = eax; //mov
	eax = ecx; //mov
	ecx = edi; //mov
	edi = eax; //mov
loc_4AD750:
	edx = to32i(dword_4DB24C); //mov
	cmp(ebx, edx);
	if (jge())
		goto loc_4AD77E;
	cmp(ebx, esi);
	if (jz())
		goto loc_4AD77E;
	eax = edx; //mov
	edx = edi; //mov
	sub(eax, ebx);
	sub(edx, ecx);
	imul32(edx, eax);
	eax = esi; //mov
	sub(eax, ebx);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = to32i(dword_4DB24C); //mov
	add(ecx, eax);
loc_4AD77E:
	edx = to32i(dword_4DB254); //mov
	cmp(esi, edx);
	if (jl())
		goto loc_4AD7AA;
	cmp(ebx, esi);
	if (jz())
		goto loc_4AD7AA;
	eax = edx; //mov
	edx = edi; //mov
	sub(eax, ebx);
	sub(edx, ecx);
	imul32(edx, eax);
	sub(esi, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	esi = to32i(dword_4DB254); //mov
	edi = (int32_t)(intptr_t)(eax+ecx); //lea
	dec(esi);
loc_4AD7AA:
	cmp(ecx, edi);
	if (jle())
		goto loc_4AD7BA;
	eax = ebx; //mov
	ebx = esi; //mov
	esi = eax; //mov
	eax = ecx; //mov
	ecx = edi; //mov
	edi = eax; //mov
loc_4AD7BA:
	eax = to32i(dword_4DB250); //mov
	cmp(ecx, eax);
	if (jge())
		goto loc_4AD7E5;
	cmp(ecx, edi);
	if (jz())
		goto loc_4AD7E5;
	edx = esi; //mov
	sub(eax, ecx);
	sub(edx, ebx);
	imul32(edx, eax);
	eax = edi; //mov
	sub(eax, ecx);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = to32i(dword_4DB250); //mov
	add(ebx, eax);
loc_4AD7E5:
	edx = to32i(dword_4DB258); //mov
	cmp(edi, edx);
	if (jl())
		goto loc_4AD80D;
	cmp(ecx, edi);
	if (jz())
		goto loc_4AD80D;
	sub(edx, ecx);
	sub(esi, ebx);
	imul32(edx, esi);
	sub(edi, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edi = to32i(dword_4DB258); //mov
	esi = (int32_t)(intptr_t)(eax+ebx); //lea
	dec(edi);
loc_4AD80D:
	eax = to32i(esp+8); //mov
	to32i(ebp+0) = ebx; //mov
	to32i(eax) = esi; //mov
	eax = to32i(esp+4); //mov
	to32i(eax) = ecx; //mov
	eax = to32i(esp); //mov
	ebp = to32i(dword_4DB24C); //mov
	to32i(eax) = edi; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_4AD864;
	eax = to32i(dword_4DB254); //mov
	cmp(ebx, eax);
	if (jge())
		goto loc_4AD864;
	edx = to32i(dword_4DB250); //mov
	cmp(ecx, edx);
	if (jl())
		goto loc_4AD864;
	ebx = to32i(dword_4DB258); //mov
	cmp(ecx, ebx);
	if (jge())
		goto loc_4AD864;
	cmp(esi, ebp);
	if (jl())
		goto loc_4AD864;
	cmp(esi, eax);
	if (jge())
		goto loc_4AD864;
	cmp(edi, edx);
	if (jl())
		goto loc_4AD864;
	cmp(edi, ebx);
	if (jge())
		goto loc_4AD864;
loc_4AD858:
	eax = 1; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4AD864:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4AD870()
{
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ecx = edx; //mov
	edx = ebx; //mov
	cmp(eax, to32i(dword_4DB24C));
	if (jl())
		goto loc_4AD8E0;
	cmp(eax, to32i(dword_4DB254));
	if (jge())
		goto loc_4AD8E0;
	cmp(ecx, to32i(dword_4DB250));
	if (jl())
		goto loc_4AD8E0;
	cmp(ecx, to32i(dword_4DB258));
	if (jge())
		goto loc_4AD8E0;
	eax = to32i(dword_4DB26C); //mov
	shl(ecx, (int32_t)2);
	add(ecx, eax);
	ebx = to32i(dword_4DB270); //mov
	eax = to32i(esp); //mov
	ecx = to32i(ecx); //mov
	esi = to32i(ebx+eax*4); //mov
	eax = to32i(dword_4DB260); //mov
	add(ecx, esi);
	add(ecx, eax);
	al = to8i(byte_4DB25C); //mov
	cmp(al, (int8_t)0xF);
	if (jnb())
		goto loc_4AD8E6;
	cmp(al, (int8_t)4);
	if (jb())
		goto loc_4AD8E0;
	if (ja())
		goto loc_4AD8FF;
	test(to8i(esp), (int8_t)1);
	if (jz())
		goto loc_4AD907;
	dh = to8i(ecx); //mov
	and_(dh, (int8_t)0xF);
	al = dl; //mov
	shl(al, (int8_t)4);
	or_(dh, al);
	to8i(ecx) = dh; //mov
loc_4AD8E0:
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ecx);
	return;
loc_4AD8E6:
	if (jbe())
		goto loc_4AD8F0;
	cmp(al, (int8_t)0x18);
	if (jnb())
		goto loc_4AD8F5;
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_4AD8E0;
loc_4AD8F0:
	to16i(ecx) = dx; //mov
	goto loc_4AD8E0;
loc_4AD8F5:
	if (jbe())
		goto loc_4AD915;
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_4AD8E0;
	to32i(ecx) = edx; //mov
	goto loc_4AD8E0;
loc_4AD8FF:
	cmp(al, (int8_t)8);
	if (jnz())
		goto loc_4AD8E0;
	to8i(ecx) = dl; //mov
	goto loc_4AD8E0;
loc_4AD907:
	al = to8i(ecx); //mov
	and_(al, (int8_t)0xF0);
	or_(al, dl);
	to8i(ecx) = al; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ecx);
	return;
loc_4AD915:
	ebx = 3; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::___setbits_()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	ebx = 0x20; //mov
	xor_(edx, edx);
	esp -= 4; _memset_(); esp += 4; //call
	goto loc_4AD95B;
loc_4AD93C:
	xor_(eax, eax);
	al = dl; //mov
	sar(eax, (int32_t)3);
	and_(dl, (int8_t)7);
	and_(edx, (int32_t)0xFF);
	dl = (int32_t)(intptr_t)byte_4D1FA4[edx]; //mov
	dh = to8i(esi+eax); //mov
	or_(dh, dl);
	inc(ecx);
	to8i(esi+eax) = dh; //mov
loc_4AD95B:
	dl = to8i(ecx); //mov
	test(dl, dl);
	if (jnz())
		goto loc_4AD93C;
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_modf_()
{
	push32(eax);
	fld(to64f(esp+8));
	fld_st(0);
	esp -= 4; ___CHP(); esp += 4; //call
	fsub_st(1, 0);
	eax = to32i(esp+0x10); //mov
	fstp(to64f(eax));
	pop32(eax);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4AD9F0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(edx, edx);
	test(eax, eax);
	if (jl())
		goto loc_4ADA39;
loc_4AD9FA:
	test(eax, eax);
	if (jz())
		goto loc_4ADA3D;
	cmp(eax, (int32_t)0x10000);
	if (jl())
		goto loc_4ADA0B;
	sar(eax, (int32_t)0x10);
	add(edx, (int32_t)0x10);
loc_4ADA0B:
	cmp(eax, (int32_t)0x100);
	if (jl())
		goto loc_4ADA18;
	sar(eax, (int32_t)8);
	add(edx, (int32_t)8);
loc_4ADA18:
	cmp(eax, (int32_t)0x10);
	if (jl())
		goto loc_4ADA23;
	sar(eax, (int32_t)4);
	add(edx, (int32_t)4);
loc_4ADA23:
	cmp(eax, (int32_t)4);
	if (jl())
		goto loc_4ADA2E;
	sar(eax, (int32_t)2);
	add(edx, (int32_t)2);
loc_4ADA2E:
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_4ADA34;
	inc(edx);
loc_4ADA34:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4ADA39:
	eax = ~eax;
	goto loc_4AD9FA;
loc_4ADA3D:
	edx = 0x3F; //mov
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4ADAC0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	eax = ebx; //mov
	xor_(esi, esi);
	test(edi, edi);
	if (jle())
		goto loc_4ADB36;
	ebp = 0x3F; //mov
	ebx = edx; //mov
	ecx = eax; //mov
loc_4ADAD7:
	cmp(esi, (int32_t)0xFF);
	if (jnz())
		goto loc_4ADB3B;
	xor_(eax, eax);
loc_4ADAE1:
	xor_(edx, edx);
	to8i(ecx+3) = al; //mov
	dl = to8i(ebx); //mov
	imul32(edx, 0xFF);
	add(edx, (int32_t)0x20);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	to8i(ecx+2) = al; //mov
	xor_(eax, eax);
	al = to8i(ebx+1); //mov
	imul32(eax, 0xFF);
	edx = (int32_t)(intptr_t)(eax+0x20); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	to8i(ecx+1) = al; //mov
	xor_(eax, eax);
	al = to8i(ebx+2); //mov
	imul32(eax, 0xFF);
	edx = (int32_t)(intptr_t)(eax+0x20); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	add(ecx, (int32_t)4);
	add(ebx, (int32_t)3);
	inc(esi);
	to8i(ecx-4) = al; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_4ADAD7;
loc_4ADB36:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4ADB3B:
	eax = 0xFF; //mov
	goto loc_4ADAE1;
}
Fn(void) Game::_sub_4ADBB4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	xor_(ecx, ecx);
	test(eax, eax);
	if (jle())
		goto loc_4ADBF5;
	eax = ebx; //mov
loc_4ADBC4:
	cmp(ecx, (int32_t)0xFF);
	if (jz())
		goto loc_4ADBFC;
	to32i(esp) = 0xFF; //mov
loc_4ADBD3:
	bl = to8i(esp); //mov
	to8i(eax+3) = bl; //mov
	bl = to8i(edx); //mov
	to8i(eax+2) = bl; //mov
	bl = to8i(edx+1); //mov
	add(edx, (int32_t)3);
	to8i(eax+1) = bl; //mov
	add(eax, (int32_t)4);
	bl = to8i(edx-1); //mov
	inc(ecx);
	to8i(eax-4) = bl; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_4ADBC4;
loc_4ADBF5:
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4ADBFC:
	xor_(edi, edi);
	to32i(esp) = edi; //mov
	goto loc_4ADBD3;
}
Fn(void) Game::_sub_4B09C0()
{
	cmp(to32i(dword_4DF37C), (int32_t)0);
	if (jz())
		goto loc_4B09CA;
	return;
loc_4B09CA:
	push32(edx);
	push32(ecx);
	edx = 0xB4; //mov
	eax = (int32_t)(intptr_t)dword_4DD6E8; //mov
	ecx = 1; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_4B09F4; //mov
	to32i(dword_4DF37C) = ecx; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4B09F4()
{
	cmp(to32i(dword_4DF37C), (int32_t)0);
	if (jnz())
		goto loc_4B09FE;
	return;
loc_4B09FE:
	push32(edx);
	push32(ecx);
	esp -= 4; _sub_4A63B0(); esp += 4; //call
	edx = 0xB4; //mov
	eax = (int32_t)(intptr_t)dword_4DD6E8; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(dword_4DF37C) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4B0A20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(0);
	eax = GetKeyboardType_wrap(to32i(esp + 0)); esp += 4;
	push32(1);
	ebx = eax; //mov
	eax = GetKeyboardType_wrap(to32i(esp + 0)); esp += 4;
	cmp(ebx, (int32_t)7);
	if (jnz())
		goto loc_4B0A4A;
	cmp(eax, (int32_t)0xD01);
	if (jl())
		goto loc_4B0A4A;
	cmp(eax, (int32_t)0xD04);
	if (jle())
		goto loc_4B0A50;
loc_4B0A4A:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B0A50:
	edx = (int32_t)(intptr_t)dword_4DFBF0; //mov
	eax = 1; //mov
	to32i(dword_4DAB40) = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_fn_init()
{
	push32(edx);
	edx = (int32_t)(intptr_t)sub_4BB6F4; //mov
	eax = 0x10; //mov
	esp -= 4; _sub_4A67F8(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_4BB528; //mov
	eax = 0x18; //mov
	esp -= 4; _sub_4A67F8(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4B0AA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_4844D0(); esp += 4; //call
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_484DA4(); esp += 4; //call
	xor_(edx, edx);
	cmp(eax, (int32_t)0xC);
	if (jge())
		goto loc_4B0AC0;
loc_4B0ABA:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B0AC0:
	add(eax, ecx);
	ecx = 4; //mov
	sub(eax, (int32_t)0xC);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = 4; //mov
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)aCrcf; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(ebx, eax);
	if (jnz())
		goto loc_4B0ABA;
	edx = 1; //mov
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B0B04()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = eax; //mov
	esp -= 4; _sub_4844D0(); esp += 4; //call
	ebx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_484DA4(); esp += 4; //call
	edi = eax; //mov
	eax = edx; //mov
	esi = 1; //mov
	esp -= 4; _sub_4B0AA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4B0B33;
loc_4B0B2B:
	eax = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B0B33:
	eax = (int32_t)(intptr_t)(ebx+edi); //lea
	ecx = 4; //mov
	sub(eax, (int32_t)4);
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = (int32_t)(intptr_t)(edi-0xC); //lea
	ecx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48EBE0(); esp += 4; //call
	cmp(ecx, eax);
	if (jz())
		goto loc_4B0B2B;
	xor_(esi, esi);
	eax = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B0B68()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4B0B75;
loc_4B0B70:
	eax = esi; //mov
	pop32(edi);
	pop32(esi);
	return;
loc_4B0B75:
	esp -= 4; _sub_4B0AA0(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4B0BA2;
	cmp(to32i(dword_4DFC74), (int32_t)0);
	if (jz())
		goto loc_4B0B70;
	eax = esi; //mov
	esp -= 4; _sub_484DA4(); esp += 4; //call
loc_4B0B90:
	test(edi, edi);
	if (jnz())
		goto loc_4B0B70;
	eax = esi; //mov
	esp -= 4; _sub_484928(); esp += 4; //call
	xor_(esi, esi);
	eax = esi; //mov
	pop32(edi);
	pop32(esi);
	return;
loc_4B0BA2:
	eax = esi; //mov
	esp -= 4; _sub_4B0B04(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4B0B90;
	eax = esi; //mov
	esp -= 4; _sub_484DA4(); esp += 4; //call
	sub(eax, to32i(dword_4DFC70));
	ebx = ecx; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_488128(); esp += 4; //call
	goto loc_4B0B90;
}
Fn(void) Game::_sub_4B0BCC()
{
	to32i(dword_4DDD50) = (int32_t)(intptr_t)sub_4B0B68; //mov
}
Fn(void) Game::_sub_4B0BE0()
{
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	ebp = edx; //mov
	ecx = ebx; //mov
	ah = to8i(byte_4DDA74); //mov
	xor_(edx, edx);
	test(ah, ah);
	if (jz())
		goto loc_4B0C0D;
	cmp(ebp, (int32_t)1);
	if (jge())
		goto loc_4B0C01;
	test(ebp, ebp);
	if (jge())
		goto loc_4B0C14;
loc_4B0C01:
	eax = 0xFFFFFFF8; //mov
loc_4B0C06:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B0C0D:
	eax = 0xFFFFFFF6; //mov
	goto loc_4B0C06;
loc_4B0C14:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4B0CD3;
	cmp(ebx, (int32_t)0x7F);
	if (jg())
		goto loc_4B0CD3;
	test(ebx, ebx);
	if (jl())
		goto loc_4B0CD3;
	push32(edi);
	shl(eax, (int32_t)2);
	sub(eax, esi);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	xor_(ebx, ebx);
	bl = to8i(eax+0x3B); //mov
	to32i(esp+8) = ebx; //mov
	ebx = ebp; //mov
	edi = to32i(esp+8); //mov
	shl(ebx, (int32_t)4);
	test(edi, edi);
	if (jz())
		goto loc_4B0CE4;
	esi = (int32_t)(intptr_t)dword_59BFB0; //mov
	to32i(esp+4) = ebx; //mov
	xor_(edi, edi);
loc_4B0C6E:
	xor_(eax, eax);
	ebx = to32i(esp+8); //mov
	al = to8i(esi+0x3B); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_4B0CBB;
	cmp(to8i(esi+0xC), (int8_t)1);
	if (jnz())
		goto loc_4B0CBB;
	cmp(to32i(esi), (int32_t)0);
	if (jl())
		goto loc_4B0CBB;
	eax = (int32_t)(intptr_t)(esi+ebp); //lea
	edx = to32i(eax+0x35); //mov
	sar(edx, (int32_t)0x18);
	imul32(edx, ecx);
	to8i(eax+0x39) = cl; //mov
	eax = to32i(esp+4); //mov
	imul32(edx, to32i(dword_59BFA4+eax));
	ecx = 0x3F01; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = eax; //mov
	ebx = eax; //mov
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_48934C(); esp += 4; //call
	edx = eax; //mov
loc_4B0CBB:
	inc(edi);
	add(esi, (int32_t)0x60);
	cmp(edi, (int32_t)0x10);
	if (jl())
		goto loc_4B0C6E;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edi);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B0CD3:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = 0xFFFFFFF8; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B0CE4:
	to8i(eax+ebp+0x39) = cl; //mov
	eax = to32i(eax+ebp+0x35); //mov
	sar(eax, (int32_t)0x18);
	imul32(eax, ecx);
	edx = to32i(dword_59BFA4+ebx); //mov
	imul32(edx, eax);
	ecx = 0x3F01; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = eax; //mov
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_48934C(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edi);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4B0D30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)dword_59BFB0);
	edx = to32i(eax+0xE); //mov
	bx = to16i(eax+0x42); //mov
	sar(edx, (int32_t)0x10);
	test(bx, bx);
	if (jz())
		goto loc_4B0D75;
	ecx = to32i(eax+0x54); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4B0D9E;
	xor_(ecx, ecx);
	ebx = to32i(eax+0x54); //mov
	cl = to8i(eax+0x33); //mov
	ecx = to8i(ecx+ebx); //movsx
loc_4B0D64:
	ebx = to32i(eax+0x40); //mov
	sub(ecx, (int32_t)0x40);
	sar(ebx, (int32_t)0x10);
	imul32(ecx, ebx);
	sar(ecx, (int32_t)6);
	add(edx, ecx);
loc_4B0D75:
	ebx = to32i(eax+0x5C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4B0D96;
	xor_(ecx, ecx);
	cl = to8i(eax+0x3F); //mov
	ecx = to8i(ecx+ebx); //movsx
	ebx = to32i(eax+0x3E); //mov
	sub(ecx, (int32_t)0x40);
	sar(ebx, (int32_t)0x10);
	imul32(ecx, ebx);
	sar(ecx, (int32_t)6);
	add(edx, ecx);
loc_4B0D96:
	to16i(eax+0x12) = dx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B0D9E:
	cl = to8i(eax+0x33); //mov
	goto loc_4B0D64;
}
Fn(void) Game::_sub_4B0E94()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = to32i(esp+0x20); //mov
	ecx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x1C); //mov
	ebx = 0x20; //mov
	xor_(edx, edx);
loc_4B0EAC:
	esi = ecx; //mov
	dec(ebx);
	add(eax, eax);
	shr(esi, (int32_t)0x1F);
	add(edx, edx);
	add(eax, esi);
	add(ecx, ecx);
	cmp(eax, edi);
	if (jb())
		goto loc_4B0EC1;
	inc(edx);
	sub(eax, edi);
loc_4B0EC1:
	test(ebx, ebx);
	if (jnz())
		goto loc_4B0EAC;
	eax = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4B1218()
{
	push32(ebx);
	push32(ecx);
	push32(edi);
	sub(esp, (int32_t)8);
	ebx = esi; //mov
	cmp(edx, (int32_t)0x20);
	if (jge())
		goto loc_4B124E;
	test(edx, edx);
	if (jz())
		goto loc_4B125C;
	cl = dl; //mov
	esi = eax; //mov
	shl(esi, cl);
	ecx = 0x20; //mov
	sub(ecx, edx);
	sar(eax, cl);
	to32i(esp) = esi; //mov
loc_4B123B:
	to32i(esp+4) = eax; //mov
	esi = esp; //mov
	edi = ebx; //mov
	movsd();
	movsd();
	eax = ebx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B124E:
	xor_(ecx, ecx);
	sub(edx, (int32_t)0x20);
	to32i(esp) = ecx; //mov
	cl = dl; //mov
	shl(eax, cl);
	goto loc_4B123B;
loc_4B125C:
	to32i(esp) = eax; //mov
	sar(eax, (int32_t)0x1F);
	to32i(esp+4) = eax; //mov
	esi = esp; //mov
	edi = ebx; //mov
	movsd();
	movsd();
	eax = ebx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B12D0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x544);
	to32i(esp+0x4C4) = edx; //mov
	to32i(esp+0x4D4) = edx; //mov
	xor_(edx, edx);
	to32i(esp+0x4CC) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_4B2530;
	xor_(ecx, ecx);
	cl = to8i(eax); //mov
	dl = to8i(eax+1); //mov
	shl(ecx, (int32_t)8);
	or_(edx, ecx);
	add(eax, (int32_t)2);
	to32i(esp+0x534) = edx; //mov
	esi = edx; //mov
	xor_(edx, edx);
	to32i(esp+0x530) = eax; //mov
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	xor_(edi, edi);
	shl(eax, (int32_t)8);
	ecx = to32i(esp+0x530); //mov
	or_(edx, eax);
	shl(esi, (int32_t)0x10);
	to32i(esp+0x534) = edx; //mov
	edx = to32i(esp+0x530); //mov
	xor_(eax, eax);
	add(ecx, (int32_t)2);
	al = to8i(edx+1); //mov
	edx = to32i(esp+0x534); //mov
	shr(esi, (int32_t)0x10);
	shl(edx, (int32_t)8);
	to32i(esp+0x4C8) = esi; //mov
	or_(eax, edx);
	to32i(esp+0x530) = ecx; //mov
	to32i(esp+0x534) = eax; //mov
	esi = eax; //mov
	ah = to8i(esp+0x4C9); //mov
	shl(esi, (int32_t)0x10);
	test(ah, (int8_t)1);
	if (jnz())
		goto loc_4B156B;
loc_4B1383:
	dl = to8i(esp+0x4C9); //mov
	ebp = esi; //mov
	sub(edi, (int32_t)8);
	and_(dl, (int8_t)0xFE);
	shr(ebp, (int32_t)0x18);
	shl(esi, (int32_t)8);
	to8i(esp+0x4C9) = dl; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B15E0;
loc_4B13A7:
	eax = esi; //mov
	sub(edi, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	shl(esi, (int32_t)0x10);
	to32i(esp+0x4CC) = eax; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B163E;
loc_4B13C1:
	eax = ebp; //mov
	ecx = to32i(esp+0x4CC); //mov
	shl(eax, (int32_t)0x10);
	or_(ecx, eax);
	to32i(esp+0x4CC) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4B169C;
loc_4B13DE:
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	ebx = (int32_t)(intptr_t)(esp+0x200); //lea
	to32i(esp+0x500) = eax; //mov
loc_4B13F3:
	eax = esi; //mov
	shr(eax, (int32_t)0x18);
	al = to8i(ebx+eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	test(edi, edi);
	if (jl())
		goto loc_4B14D8;
loc_4B140A:
	edx = esi; //mov
	ecx = to32i(esp+0x500); //mov
	shr(edx, (int32_t)0x18);
	add(edx, ecx);
	ah = to8i(edx); //mov
	cl = al; //mov
	edx = to32i(esp+0x4D4); //mov
	shl(esi, cl);
	to8i(edx) = ah; //mov
	edx = esi; //mov
	ebp = to32i(esp+0x4D4); //mov
	shr(edx, (int32_t)0x18);
	inc(ebp);
	eax = (int32_t)(intptr_t)(ebx+edx); //lea
	to32i(esp+0x4D4) = ebp; //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	test(edi, edi);
	if (jl())
		goto loc_4B14D8;
	add(edx, to32i(esp+0x500));
	ah = to8i(edx); //mov
	cl = al; //mov
	shl(esi, cl);
	edx = esi; //mov
	inc(ebp);
	shr(edx, (int32_t)0x18);
	to8i(ebp-1) = ah; //mov
	eax = (int32_t)(intptr_t)(ebx+edx); //lea
	to32i(esp+0x4D4) = ebp; //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	test(edi, edi);
	if (jl())
		goto loc_4B14D8;
	add(edx, to32i(esp+0x500));
	ah = to8i(edx); //mov
	cl = al; //mov
	shl(esi, cl);
	edx = esi; //mov
	inc(ebp);
	shr(edx, (int32_t)0x18);
	to8i(ebp-1) = ah; //mov
	eax = (int32_t)(intptr_t)(ebx+edx); //lea
	to32i(esp+0x4D4) = ebp; //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	test(edi, edi);
	if (jl())
		goto loc_4B14D8;
	add(edx, to32i(esp+0x500));
	ah = to8i(edx); //mov
	cl = al; //mov
	shl(esi, cl);
	to8i(ebp+0) = ah; //mov
	eax = esi; //mov
	inc(ebp);
	shr(eax, (int32_t)0x18);
	to32i(esp+0x4D4) = ebp; //mov
	al = to8i(ebx+eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	test(edi, edi);
	if (jge())
		goto loc_4B140A;
loc_4B14D8:
	add(edi, (int32_t)0x10);
	test(edi, edi);
	if (jl())
		goto loc_4B2025;
	eax = to32i(esp+0x500); //mov
	shr(esi, (int32_t)0x18);
	edx = to32i(esp+0x4D4); //mov
	al = to8i(esi+eax); //mov
	to8i(edx) = al; //mov
	edx = to32i(esp+0x530); //mov
	xor_(eax, eax);
	al = to8i(edx); //mov
	edx = to32i(esp+0x534); //mov
	shl(edx, (int32_t)8);
	or_(eax, edx);
	to32i(esp+0x534) = eax; //mov
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	ecx = 0x10; //mov
	shl(eax, (int32_t)8);
	sub(ecx, edi);
	or_(edx, eax);
	eax = to32i(esp+0x4D4); //mov
	to32i(esp+0x534) = edx; //mov
	edx = to32i(esp+0x530); //mov
	inc(eax);
	esi = to32i(esp+0x534); //mov
	to32i(esp+0x4D4) = eax; //mov
	add(edx, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = edx; //mov
	goto loc_4B13F3;
loc_4B156B:
	eax = to32i(esp+0x534); //mov
	xor_(edx, edx);
	shl(eax, (int32_t)8);
	dl = to8i(ecx); //mov
	or_(edx, eax);
	to32i(esp+0x534) = edx; //mov
	xor_(eax, eax);
	shl(edx, (int32_t)8);
	al = to8i(ecx+1); //mov
	or_(eax, edx);
	esi = (int32_t)(intptr_t)(ecx+2); //lea
	to32i(esp+0x534) = eax; //mov
	xor_(edx, edx);
	shl(eax, (int32_t)8);
	dl = to8i(esi); //mov
	to32i(esp+0x530) = esi; //mov
	or_(edx, eax);
	edi = esi; //mov
	to32i(esp+0x534) = edx; //mov
	add(edi, (int32_t)2);
	eax = to32i(esp+0x534); //mov
	xor_(edx, edx);
	shl(eax, (int32_t)8);
	dl = to8i(esi+1); //mov
	to32i(esp+0x530) = edi; //mov
	or_(edx, eax);
	edi = 8; //mov
	esi = edx; //mov
	to32i(esp+0x534) = edx; //mov
	shl(esi, (int32_t)8);
	goto loc_4B1383;
loc_4B15E0:
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	xor_(edx, edx);
	ecx = edi; //mov
	dl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	neg(ecx);
	shl(eax, (int32_t)8);
	add(edi, (int32_t)0x10);
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	esi = edx; //mov
	add(eax, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = eax; //mov
	goto loc_4B13A7;
loc_4B163E:
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(edx, eax);
	to32i(esp+0x534) = edx; //mov
	edx = to32i(esp+0x530); //mov
	xor_(eax, eax);
	ecx = edi; //mov
	al = to8i(edx+1); //mov
	edx = to32i(esp+0x534); //mov
	neg(ecx);
	shl(edx, (int32_t)8);
	add(edi, (int32_t)0x10);
	or_(eax, edx);
	edx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = eax; //mov
	esi = eax; //mov
	add(edx, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = edx; //mov
	goto loc_4B13C1;
loc_4B169C:
	eax = esi; //mov
	sub(edi, (int32_t)8);
	shr(eax, (int32_t)0x18);
	shl(esi, (int32_t)8);
	to8i(esp+0x540) = al; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B1A9A;
loc_4B16B6:
	eax = 1; //mov
	edx = 0xF; //mov
	xor_(ebp, ebp);
	ecx = 4; //mov
	to32i(esp+0x4E4) = ebp; //mov
	to32i(esp+0x4D8) = eax; //mov
	to32i(esp+0x518) = edx; //mov
	to32i(esp+0x51C) = ecx; //mov
loc_4B16E3:
	add(ebp, ebp);
	ebx = to32i(esp+0x4E4); //mov
	eax = ebp; //mov
	edx = to32i(esp+0x51C); //mov
	sub(eax, ebx);
	to32i(esp+edx+0x480) = eax; //mov
	test(esi, esi);
	if (jl())
		goto loc_4B1AF8;
	eax = esi; //mov
	shr(eax, (int32_t)0x10);
	test(eax, eax);
	if (jz())
		goto loc_4B1BD1;
	eax = 2; //mov
loc_4B1718:
	add(esi, esi);
	inc(eax);
	test(esi, esi);
	if (jge())
		goto loc_4B1718;
	edx = (int32_t)(intptr_t)(eax-1); //lea
	sub(edi, edx);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B1B6E;
loc_4B172E:
	edx = to32i(esp+0x534); //mov
	shl(edx, (int32_t)8);
	to32i(esp+0x510) = edx; //mov
	edx = to32i(esp+0x530); //mov
	add(edx, (int32_t)2);
	to32i(esp+0x528) = edx; //mov
	cmp(eax, (int32_t)0x10);
	if (jle())
		goto loc_4B1D1E;
	ecx = 0x20; //mov
	ebx = (int32_t)(intptr_t)(eax-0x10); //lea
	edx = esi; //mov
	sub(ecx, ebx);
	shr(edx, cl);
	cl = bl; //mov
	sub(edi, ebx);
	shl(esi, cl);
	test(edi, edi);
	if (jl())
		goto loc_4B1C4E;
loc_4B1775:
	ebx = esi; //mov
	sub(edi, (int32_t)0x10);
	shr(ebx, (int32_t)0x10);
	shl(esi, (int32_t)0x10);
	test(edi, edi);
	if (jl())
		goto loc_4B1CA6;
loc_4B1788:
	shl(edx, (int32_t)0x10);
	cl = al; //mov
	eax = 1; //mov
	or_(edx, ebx);
loc_4B1794:
	shl(eax, cl);
	add(edx, eax);
loc_4B1798:
	sub(edx, (int32_t)4);
	eax = to32i(esp+0x51C); //mov
	ebx = to32i(esp+0x4E4); //mov
	add(ebp, edx);
	xor_(ecx, ecx);
	add(ebx, edx);
	to32i(esp+eax+0x400) = edx; //mov
	to32i(esp+0x4E4) = ebx; //mov
	test(edx, edx);
	if (jz())
		goto loc_4B17D4;
	cl = to8i(esp+0x518); //mov
	eax = ebp; //mov
	shl(eax, cl);
	ecx = eax; //mov
	and_(ecx, (int32_t)0xFFFF);
loc_4B17D4:
	eax = to32i(esp+0x51C); //mov
	to32i(esp+eax+0x440) = ecx; //mov
	eax = to32i(esp+0x518); //mov
	dec(eax);
	ebx = to32i(esp+0x51C); //mov
	to32i(esp+0x518) = eax; //mov
	eax = to32i(esp+0x4D8); //mov
	add(ebx, (int32_t)4);
	inc(eax);
	to32i(esp+0x51C) = ebx; //mov
	to32i(esp+0x4D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4B16E3;
	test(ecx, ecx);
	if (jnz())
		goto loc_4B16E3;
	dec(eax);
	edx = 0xFFFFFFFF; //mov
	to32i(esp+0x4DC) = eax; //mov
	to32i(esp+eax*4+0x440) = edx; //mov
	edx = 0x10; //mov
	eax = esp; //mov
loc_4B183C:
	add(eax, (int32_t)0x10);
	to32i(eax-0x10) = ecx; //mov
	to32i(eax-0xC) = ecx; //mov
	to32i(eax-8) = ecx; //mov
	to32i(eax-4) = ecx; //mov
	dec(edx);
	if (jnz())
		goto loc_4B183C;
	al = 0xFF; //mov
	ebx = to32i(esp+0x4E4); //mov
	to32i(esp+0x4E0) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4B1962;
loc_4B1866:
	test(esi, esi);
	if (jl())
		goto loc_4B1D9E;
	edx = esi; //mov
	shr(edx, (int32_t)0x10);
	test(edx, edx);
	if (jz())
		goto loc_4B1E72;
	edx = 2; //mov
loc_4B1880:
	add(esi, esi);
	inc(edx);
	test(esi, esi);
	if (jge())
		goto loc_4B1880;
	ecx = (int32_t)(intptr_t)(edx-1); //lea
	sub(edi, ecx);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B1E14;
loc_4B1896:
	ecx = to32i(esp+0x530); //mov
	ebp = to32i(esp+0x534); //mov
	add(ecx, (int32_t)2);
	shl(ebp, (int32_t)8);
	to32i(esp+0x52C) = ecx; //mov
	cmp(edx, (int32_t)0x10);
	if (jle())
		goto loc_4B1F89;
	ecx = (int32_t)(intptr_t)(edx-0x10); //lea
	to32i(esp+0x50C) = ecx; //mov
	ecx = 0x20; //mov
	sub(ecx, to32i(esp+0x50C));
	ebx = esi; //mov
	shr(ebx, cl);
	cl = to8i(esp+0x50C); //mov
	shl(esi, cl);
	sub(edi, to32i(esp+0x50C));
	test(edi, edi);
	if (jl())
		goto loc_4B1EEF;
loc_4B18EC:
	ecx = esi; //mov
	sub(edi, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	shl(esi, (int32_t)0x10);
	to32i(esp+0x4E8) = ecx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B1F2F;
loc_4B1906:
	ecx = to32i(esp+0x4E8); //mov
	shl(ebx, (int32_t)0x10);
	or_(ebx, ecx);
loc_4B1912:
	cl = dl; //mov
	edx = 1; //mov
	shl(edx, cl);
	add(ebx, edx);
loc_4B191D:
	sub(ebx, (int32_t)4);
	inc(ebx);
	xor_(ecx, ecx);
loc_4B1923:
	inc(al);
	xor_(edx, edx);
	dl = al; //mov
	cmp(cl, to8i(esp+edx));
	if (jnz())
		goto loc_4B192F;
	dec(ebx);
loc_4B192F:
	test(ebx, ebx);
	if (jnz())
		goto loc_4B1923;
	xor_(edx, edx);
	dl = al; //mov
	to8i(esp+edx) = 1; //mov
	edx = to32i(esp+0x4E0); //mov
	ecx = to32i(esp+0x4E4); //mov
	ebp = (int32_t)(intptr_t)(edx+1); //lea
	to8i(esp+edx+0x300) = al; //mov
	to32i(esp+0x4E0) = ebp; //mov
	cmp(ebp, ecx);
	if (jl())
		goto loc_4B1866;
loc_4B1962:
	ecx = 0x10; //mov
	edx = (int32_t)(intptr_t)(esp+0x200); //lea
	ebx = 0x40404040; //mov
loc_4B1973:
	add(edx, (int32_t)0x10);
	to32i(edx-0x10) = ebx; //mov
	to32i(edx-0xC) = ebx; //mov
	to32i(edx-8) = ebx; //mov
	to32i(edx-4) = ebx; //mov
	dec(ecx);
	if (jnz())
		goto loc_4B1973;
	eax = (int32_t)(intptr_t)(esp+0x300); //lea
	ebx = (int32_t)(intptr_t)(esp+0x100); //lea
	edx = (int32_t)(intptr_t)(esp+0x200); //lea
	to32i(esp+0x4FC) = eax; //mov
	eax = 1; //mov
	ecx = to32i(esp+0x4DC); //mov
	to32i(esp+0x4EC) = eax; //mov
	cmp(ecx, eax);
	if (jl())
		goto loc_4B13DE;
	eax = 4; //mov
	ecx = 7; //mov
	to32i(esp+0x520) = eax; //mov
	to32i(esp+0x524) = ecx; //mov
loc_4B19D4:
	eax = to32i(esp+0x520); //mov
	eax = to32i(esp+eax+0x400); //mov
	ebp = to32i(esp+0x4EC); //mov
	to32i(esp+0x4F0) = eax; //mov
	cmp(ebp, (int32_t)9);
	if (jge())
		goto loc_4B13DE;
	cl = to8i(esp+0x524); //mov
	ebp = 1; //mov
	shl(ebp, cl);
loc_4B1A07:
	eax = to32i(esp+0x4F0); //mov
	dec(eax);
	to32i(esp+0x4F0) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4B1FE2;
	ecx = to32i(esp+0x4FC); //mov
	xor_(eax, eax);
	al = to8i(ecx); //mov
	inc(ecx);
	to32i(esp+0x4F4) = eax; //mov
	eax = to32i(esp+0x4EC); //mov
	to32i(esp+0x4FC) = ecx; //mov
	to32i(esp+0x4F8) = eax; //mov
	xor_(eax, eax);
	ecx = to32i(esp+0x4F4); //mov
	al = to8i(esp+0x540); //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_4B1A74;
	eax = to32i(esp+0x4EC); //mov
	to32i(esp+0x4D0) = eax; //mov
	to32i(esp+0x4F8) = 0x60; //mov
loc_4B1A74:
	xor_(eax, eax);
	test(ebp, ebp);
	if (jle())
		goto loc_4B1A07;
loc_4B1A7A:
	inc(ebx);
	cl = to8i(esp+0x4F4); //mov
	inc(edx);
	to8i(ebx-1) = cl; //mov
	cl = to8i(esp+0x4F8); //mov
	inc(eax);
	to8i(edx-1) = cl; //mov
	cmp(eax, ebp);
	if (jl())
		goto loc_4B1A7A;
	goto loc_4B1A07;
loc_4B1A9A:
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	ebx = to32i(esp+0x530); //mov
	shl(eax, (int32_t)8);
	ecx = edi; //mov
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	xor_(edx, edx);
	neg(ecx);
	dl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	add(ebx, (int32_t)2);
	shl(eax, (int32_t)8);
	add(edi, (int32_t)0x10);
	or_(edx, eax);
	to32i(esp+0x530) = ebx; //mov
	esi = edx; //mov
	to32i(esp+0x534) = edx; //mov
	shl(esi, cl);
	goto loc_4B16B6;
loc_4B1AF8:
	edx = esi; //mov
	sub(edi, (int32_t)3);
	shr(edx, (int32_t)0x1D);
	shl(esi, (int32_t)3);
	test(edi, edi);
	if (jge())
		goto loc_4B1798;
	eax = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(ecx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ecx; //mov
	xor_(ecx, ecx);
	cl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(ecx, eax);
	to32i(esp+0x534) = ecx; //mov
	eax = to32i(esp+0x530); //mov
	esi = to32i(esp+0x534); //mov
	ecx = edi; //mov
	add(eax, (int32_t)2);
	neg(ecx);
	to32i(esp+0x530) = eax; //mov
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B1798;
loc_4B1B6E:
	edx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(edx); //mov
	edx = to32i(esp+0x534); //mov
	shl(edx, (int32_t)8);
	or_(ecx, edx);
	edx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ecx; //mov
	xor_(ecx, ecx);
	cl = to8i(edx+1); //mov
	edx = to32i(esp+0x534); //mov
	ebx = to32i(esp+0x530); //mov
	shl(edx, (int32_t)8);
	add(ebx, (int32_t)2);
	or_(ecx, edx);
	to32i(esp+0x530) = ebx; //mov
	to32i(esp+0x534) = ecx; //mov
	ecx = edi; //mov
	esi = to32i(esp+0x534); //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B172E;
loc_4B1BD1:
	eax = 2; //mov
loc_4B1BD6:
	edx = esi; //mov
	inc(eax);
	dec(edi);
	shr(edx, (int32_t)0x1F);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B1BEC;
	test(edx, edx);
	if (jz())
		goto loc_4B1BD6;
	goto loc_4B172E;
loc_4B1BEC:
	ebx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(ebx); //mov
	ebx = to32i(esp+0x534); //mov
	shl(ebx, (int32_t)8);
	or_(ecx, ebx);
	to32i(esp+0x534) = ecx; //mov
	ecx = to32i(esp+0x530); //mov
	xor_(ebx, ebx);
	bl = to8i(ecx+1); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(ebx, ecx);
	ecx = edi; //mov
	esi = ebx; //mov
	neg(ecx);
	shl(esi, cl);
	ecx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ebx; //mov
	add(ecx, (int32_t)2);
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	test(edx, edx);
	if (jz())
		goto loc_4B1BD6;
	goto loc_4B172E;
loc_4B1C4E:
	ebx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(ebx); //mov
	ebx = to32i(esp+0x510); //mov
	or_(ebx, ecx);
	ecx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ebx; //mov
	xor_(ebx, ebx);
	bl = to8i(ecx+1); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(ebx, ecx);
	ecx = edi; //mov
	esi = ebx; //mov
	neg(ecx);
	to32i(esp+0x534) = ebx; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x528); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B1775;
loc_4B1CA6:
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	to32i(esp+0x50C) = ecx; //mov
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x50C); //mov
	shl(ecx, (int32_t)8);
	or_(esi, ecx);
	to32i(esp+0x534) = esi; //mov
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi+1); //mov
	to32i(esp+0x50C) = ecx; //mov
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x50C); //mov
	shl(ecx, (int32_t)8);
	or_(esi, ecx);
	ecx = edi; //mov
	neg(ecx);
	to32i(esp+0x534) = esi; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x530); //mov
	add(ecx, (int32_t)2);
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B1788;
loc_4B1D1E:
	ecx = 0x20; //mov
	edx = esi; //mov
	sub(ecx, eax);
	shr(edx, cl);
	cl = al; //mov
	sub(edi, eax);
	shl(esi, cl);
	test(edi, edi);
	if (jl())
		goto loc_4B1D3F;
	cl = al; //mov
	eax = 1; //mov
	goto loc_4B1794;
loc_4B1D3F:
	ebx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(ebx); //mov
	ebx = to32i(esp+0x510); //mov
	or_(ebx, ecx);
	ecx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ebx; //mov
	xor_(ebx, ebx);
	bl = to8i(ecx+1); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(ebx, ecx);
	ecx = edi; //mov
	esi = ebx; //mov
	neg(ecx);
	to32i(esp+0x534) = ebx; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x528); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	cl = al; //mov
	eax = 1; //mov
	goto loc_4B1794;
loc_4B1D9E:
	ebx = esi; //mov
	sub(edi, (int32_t)3);
	shr(ebx, (int32_t)0x1D);
	shl(esi, (int32_t)3);
	test(edi, edi);
	if (jge())
		goto loc_4B191D;
	edx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(edx); //mov
	edx = to32i(esp+0x534); //mov
	shl(edx, (int32_t)8);
	or_(ecx, edx);
	edx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ecx; //mov
	xor_(ecx, ecx);
	cl = to8i(edx+1); //mov
	edx = to32i(esp+0x534); //mov
	ebp = to32i(esp+0x530); //mov
	shl(edx, (int32_t)8);
	add(ebp, (int32_t)2);
	or_(ecx, edx);
	to32i(esp+0x530) = ebp; //mov
	to32i(esp+0x534) = ecx; //mov
	ecx = edi; //mov
	esi = to32i(esp+0x534); //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B191D;
loc_4B1E14:
	ebx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(ebx); //mov
	ebx = to32i(esp+0x534); //mov
	shl(ebx, (int32_t)8);
	or_(ecx, ebx);
	to32i(esp+0x534) = ecx; //mov
	ecx = to32i(esp+0x530); //mov
	xor_(ebx, ebx);
	bl = to8i(ecx+1); //mov
	ecx = to32i(esp+0x534); //mov
	ebp = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	add(ebp, (int32_t)2);
	or_(ebx, ecx);
	to32i(esp+0x530) = ebp; //mov
	to32i(esp+0x534) = ebx; //mov
	ecx = edi; //mov
	esi = ebx; //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B1896;
loc_4B1E72:
	edx = 2; //mov
loc_4B1E77:
	ebp = esi; //mov
	inc(edx);
	dec(edi);
	shr(ebp, (int32_t)0x1F);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B1E8D;
	test(ebp, ebp);
	if (jz())
		goto loc_4B1E77;
	goto loc_4B1896;
loc_4B1E8D:
	ecx = to32i(esp+0x530); //mov
	xor_(ebx, ebx);
	bl = to8i(ecx); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(ebx, ecx);
	ecx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ebx; //mov
	xor_(ebx, ebx);
	bl = to8i(ecx+1); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(ebx, ecx);
	to32i(esp+0x534) = ebx; //mov
	ecx = edi; //mov
	esi = ebx; //mov
	ebx = to32i(esp+0x530); //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	add(ebx, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = ebx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4B1E77;
	goto loc_4B1896;
loc_4B1EEF:
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	or_(ecx, ebp);
	esi = (uint8_t)to8i(esi+1); //movzx
	to32i(esp+0x534) = ecx; //mov
	shl(ecx, (int32_t)8);
	or_(esi, ecx);
	ecx = edi; //mov
	neg(ecx);
	to32i(esp+0x534) = esi; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x52C); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B18EC;
loc_4B1F2F:
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi); //movzx
	or_(esi, ecx);
	ebp = to32i(esp+0x530); //mov
	to32i(esp+0x534) = esi; //mov
	add(ebp, (int32_t)2);
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi+1); //movzx
	to32i(esp+0x530) = ebp; //mov
	or_(esi, ecx);
	ecx = edi; //mov
	to32i(esp+0x534) = esi; //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B1906;
loc_4B1F89:
	ecx = 0x20; //mov
	ebx = esi; //mov
	sub(ecx, edx);
	shr(ebx, cl);
	cl = dl; //mov
	sub(edi, edx);
	shl(esi, cl);
	test(edi, edi);
	if (jge())
		goto loc_4B1912;
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	or_(ecx, ebp);
	esi = (uint8_t)to8i(esi+1); //movzx
	to32i(esp+0x534) = ecx; //mov
	shl(ecx, (int32_t)8);
	or_(esi, ecx);
	ecx = edi; //mov
	neg(ecx);
	to32i(esp+0x534) = esi; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x52C); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B1912;
loc_4B1FE2:
	ebp = to32i(esp+0x520); //mov
	eax = to32i(esp+0x524); //mov
	ecx = to32i(esp+0x4EC); //mov
	add(ebp, (int32_t)4);
	dec(eax);
	inc(ecx);
	to32i(esp+0x520) = ebp; //mov
	to32i(esp+0x524) = eax; //mov
	ebp = to32i(esp+0x4DC); //mov
	to32i(esp+0x4EC) = ecx; //mov
	cmp(ecx, ebp);
	if (jle())
		goto loc_4B19D4;
	goto loc_4B13DE;
loc_4B2025:
	sub(edi, (int32_t)0x10);
	add(edi, eax);
	cmp(eax, (int32_t)0x60);
	if (jz())
		goto loc_4B2097;
	eax = 8; //mov
	edx = esi; //mov
	ecx = 0x20; //mov
	shr(edx, (int32_t)0x10);
loc_4B203E:
	ebp = to32i(esp+ecx+0x444); //mov
	add(ecx, (int32_t)4);
	inc(eax);
	cmp(edx, ebp);
	if (jnb())
		goto loc_4B203E;
loc_4B204D:
	ecx = 0x20; //mov
	edx = esi; //mov
	sub(ecx, eax);
	shr(edx, cl);
	cl = al; //mov
	sub(edi, eax);
	shl(esi, cl);
	ecx = to32i(esp+eax*4+0x480); //mov
	eax = edx; //mov
	sub(eax, ecx);
	dl = to8i(esp+0x540); //mov
	al = to8i(esp+eax+0x300); //mov
	cmp(al, dl);
	if (jz())
		goto loc_4B20A0;
	test(edi, edi);
	if (jl())
		goto loc_4B20A0;
	edx = to32i(esp+0x4D4); //mov
	to8i(edx) = al; //mov
	eax = (int32_t)(intptr_t)(edx+1); //lea
	to32i(esp+0x4D4) = eax; //mov
	goto loc_4B13F3;
loc_4B2097:
	eax = to32i(esp+0x4D0); //mov
	goto loc_4B204D;
loc_4B20A0:
	test(edi, edi);
	if (jl())
		goto loc_4B20C5;
loc_4B20A4:
	cmp(al, to8i(esp+0x540));
	if (jz())
		goto loc_4B2128;
	edx = to32i(esp+0x4D4); //mov
	ebp = (int32_t)(intptr_t)(edx+1); //lea
	to8i(edx) = al; //mov
	to32i(esp+0x4D4) = ebp; //mov
	goto loc_4B13F3;
loc_4B20C5:
	edx = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(edx); //mov
	edx = to32i(esp+0x534); //mov
	shl(edx, (int32_t)8);
	or_(ecx, edx);
	edx = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ecx; //mov
	xor_(ecx, ecx);
	cl = to8i(edx+1); //mov
	edx = to32i(esp+0x534); //mov
	ebp = to32i(esp+0x530); //mov
	shl(edx, (int32_t)8);
	add(ebp, (int32_t)2);
	or_(ecx, edx);
	to32i(esp+0x530) = ebp; //mov
	to32i(esp+0x534) = ecx; //mov
	ecx = edi; //mov
	esi = to32i(esp+0x534); //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B20A4;
loc_4B2128:
	edx = to32i(esp+0x4D4); //mov
	test(esi, esi);
	if (jl())
		goto loc_4B222E;
	eax = esi; //mov
	shr(eax, (int32_t)0x10);
	test(eax, eax);
	if (jz())
		goto loc_4B230D;
	eax = 2; //mov
loc_4B2149:
	add(esi, esi);
	inc(eax);
	test(esi, esi);
	if (jge())
		goto loc_4B2149;
	ecx = (int32_t)(intptr_t)(eax-1); //lea
	sub(edi, ecx);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B22B9;
loc_4B215F:
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	to32i(esp+0x514) = ecx; //mov
	ecx = to32i(esp+0x530); //mov
	add(ecx, (int32_t)2);
	to32i(esp+0x4C0) = ecx; //mov
	cmp(eax, (int32_t)0x10);
	if (jle())
		goto loc_4B2450;
	ecx = (int32_t)(intptr_t)(eax-0x10); //lea
	to32i(esp+0x50C) = ecx; //mov
	ecx = 0x20; //mov
	sub(ecx, to32i(esp+0x50C));
	ebp = esi; //mov
	shr(ebp, cl);
	cl = to8i(esp+0x50C); //mov
	shl(esi, cl);
	sub(edi, to32i(esp+0x50C));
	to32i(esp+0x504) = ebp; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B2399;
loc_4B21C3:
	ecx = esi; //mov
	sub(edi, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	shl(esi, (int32_t)0x10);
	to32i(esp+0x508) = ecx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B23EE;
loc_4B21DD:
	ecx = to32i(esp+0x504); //mov
	ebp = to32i(esp+0x508); //mov
	shl(ecx, (int32_t)0x10);
	or_(ebp, ecx);
	cl = al; //mov
	eax = 1; //mov
	shl(eax, cl);
	add(eax, ebp);
loc_4B21FB:
	sub(eax, (int32_t)4);
	to32i(esp+0x504) = eax; //mov
loc_4B2205:
	ebp = to32i(esp+0x504); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4B24DB;
	cl = to8i(edx-1); //mov
	eax = (int32_t)(intptr_t)(edx+ebp); //lea
loc_4B221A:
	inc(edx);
	to8i(edx-1) = cl; //mov
	cmp(edx, eax);
	if (jb())
		goto loc_4B221A;
	to32i(esp+0x4D4) = edx; //mov
	goto loc_4B13F3;
loc_4B222E:
	eax = esi; //mov
	sub(edi, (int32_t)3);
	shr(eax, (int32_t)0x1D);
	shl(esi, (int32_t)3);
	to32i(esp+0x504) = eax; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B224E;
	sub(to32i(esp+0x504), (int32_t)4);
	goto loc_4B2205;
loc_4B224E:
	ecx = to32i(esp+0x530); //mov
	xor_(eax, eax);
	al = to8i(ecx); //mov
	ecx = to32i(esp+0x534); //mov
	shl(ecx, (int32_t)8);
	or_(eax, ecx);
	to32i(esp+0x534) = eax; //mov
	eax = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(ecx, eax);
	to32i(esp+0x534) = ecx; //mov
	eax = to32i(esp+0x530); //mov
	esi = to32i(esp+0x534); //mov
	ecx = edi; //mov
	add(eax, (int32_t)2);
	neg(ecx);
	to32i(esp+0x530) = eax; //mov
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	sub(to32i(esp+0x504), (int32_t)4);
	goto loc_4B2205;
loc_4B22B9:
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	esi = to32i(esp+0x534); //mov
	ebp = to32i(esp+0x530); //mov
	shl(esi, (int32_t)8);
	add(ebp, (int32_t)2);
	or_(ecx, esi);
	esi = to32i(esp+0x530); //mov
	to32i(esp+0x534) = ecx; //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi+1); //movzx
	to32i(esp+0x530) = ebp; //mov
	or_(esi, ecx);
	ecx = edi; //mov
	to32i(esp+0x534) = esi; //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B215F;
loc_4B230D:
	eax = 2; //mov
	xor_(ebp, ebp);
loc_4B2314:
	ecx = esi; //mov
	inc(eax);
	dec(edi);
	shr(ecx, (int32_t)0x1F);
	add(esi, esi);
	to32i(esp+0x538) = ecx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B2336;
	cmp(ebp, to32i(esp+0x538));
	if (jz())
		goto loc_4B2314;
	goto loc_4B215F;
loc_4B2336:
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi); //movzx
	or_(esi, ecx);
	to32i(esp+0x534) = esi; //mov
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi+1); //movzx
	or_(esi, ecx);
	ecx = edi; //mov
	neg(ecx);
	to32i(esp+0x534) = esi; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x530); //mov
	add(ecx, (int32_t)2);
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	cmp(ebp, to32i(esp+0x538));
	if (jz())
		goto loc_4B2314;
	goto loc_4B215F;
loc_4B2399:
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	esi = to32i(esp+0x514); //mov
	or_(esi, ecx);
	to32i(esp+0x534) = esi; //mov
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi+1); //movzx
	or_(esi, ecx);
	ecx = edi; //mov
	neg(ecx);
	to32i(esp+0x534) = esi; //mov
	shl(esi, cl);
	ecx = to32i(esp+0x4C0); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B21C3;
loc_4B23EE:
	ecx = to32i(esp+0x534); //mov
	esi = to32i(esp+0x530); //mov
	shl(ecx, (int32_t)8);
	esi = (uint8_t)to8i(esi); //movzx
	or_(esi, ecx);
	to32i(esp+0x534) = esi; //mov
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi+1); //mov
	esi = to32i(esp+0x534); //mov
	ebp = to32i(esp+0x530); //mov
	shl(esi, (int32_t)8);
	add(ebp, (int32_t)2);
	or_(ecx, esi);
	to32i(esp+0x530) = ebp; //mov
	to32i(esp+0x534) = ecx; //mov
	ecx = edi; //mov
	esi = to32i(esp+0x534); //mov
	neg(ecx);
	add(edi, (int32_t)0x10);
	shl(esi, cl);
	goto loc_4B21DD;
loc_4B2450:
	ecx = 0x20; //mov
	ebp = esi; //mov
	sub(ecx, eax);
	sub(edi, eax);
	shr(ebp, cl);
	cl = al; //mov
	to32i(esp+0x504) = ebp; //mov
	shl(esi, cl);
	test(edi, edi);
	if (jl())
		goto loc_4B2481;
loc_4B246C:
	cl = al; //mov
	eax = 1; //mov
	shl(eax, cl);
	add(eax, to32i(esp+0x504));
	goto loc_4B21FB;
loc_4B2481:
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	esi = to32i(esp+0x514); //mov
	or_(esi, ecx);
	to32i(esp+0x534) = esi; //mov
	esi = to32i(esp+0x530); //mov
	xor_(ecx, ecx);
	cl = to8i(esi+1); //mov
	esi = to32i(esp+0x534); //mov
	shl(esi, (int32_t)8);
	or_(ecx, esi);
	to32i(esp+0x534) = ecx; //mov
	ecx = edi; //mov
	esi = to32i(esp+0x534); //mov
	neg(ecx);
	shl(esi, cl);
	ecx = to32i(esp+0x4C0); //mov
	add(edi, (int32_t)0x10);
	to32i(esp+0x530) = ecx; //mov
	goto loc_4B246C;
loc_4B24DB:
	ebp = esi; //mov
	dec(edi);
	shr(ebp, (int32_t)0x1F);
	add(esi, esi);
	test(edi, edi);
	if (jl())
		goto loc_4B2542;
loc_4B24E7:
	test(ebp, ebp);
	if (jz())
		goto loc_4B25A0;
	edi = to32i(esp+0x4C4); //mov
	ebx = to32i(esp+0x4CC); //mov
	esi = to32i(esp+0x4C8); //mov
	add(edi, ebx);
	cmp(esi, (int32_t)0x32FB);
	if (jnz())
		goto loc_4B2630;
	eax = to32i(esp+0x4C4); //mov
	ebx = edi; //mov
	xor_(ecx, ecx);
	cmp(edi, eax);
	if (jbe())
		goto loc_4B2530;
loc_4B2521:
	xor_(edx, edx);
	dl = to8i(eax); //mov
	inc(eax);
	add(ecx, edx);
	to8i(eax-1) = cl; //mov
	cmp(eax, ebx);
	if (jb())
		goto loc_4B2521;
loc_4B2530:
	eax = to32i(esp+0x4CC); //mov
	add(esp, (int32_t)0x544);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B2542:
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	xor_(edx, edx);
	ecx = edi; //mov
	dl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	neg(ecx);
	shl(eax, (int32_t)8);
	add(edi, (int32_t)0x10);
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	esi = edx; //mov
	add(eax, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = eax; //mov
	goto loc_4B24E7;
loc_4B25A0:
	eax = esi; //mov
	sub(edi, (int32_t)8);
	shr(eax, (int32_t)0x18);
	shl(esi, (int32_t)8);
	to8i(esp+0x53C) = al; //mov
	test(edi, edi);
	if (jl())
		goto loc_4B25D5;
loc_4B25B6:
	edx = to32i(esp+0x4D4); //mov
	al = to8i(esp+0x53C); //mov
	ecx = (int32_t)(intptr_t)(edx+1); //lea
	to8i(edx) = al; //mov
	to32i(esp+0x4D4) = ecx; //mov
	goto loc_4B13F3;
loc_4B25D5:
	eax = to32i(esp+0x530); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp+0x530); //mov
	to32i(esp+0x534) = edx; //mov
	xor_(edx, edx);
	dl = to8i(eax+1); //mov
	eax = to32i(esp+0x534); //mov
	shl(eax, (int32_t)8);
	ecx = edi; //mov
	or_(edx, eax);
	neg(ecx);
	to32i(esp+0x534) = edx; //mov
	esi = edx; //mov
	edx = to32i(esp+0x530); //mov
	add(edi, (int32_t)0x10);
	add(edx, (int32_t)2);
	shl(esi, cl);
	to32i(esp+0x530) = edx; //mov
	goto loc_4B25B6;
loc_4B2630:
	cmp(esi, (int32_t)0x34FB);
	if (jnz())
		goto loc_4B2530;
	eax = to32i(esp+0x4C4); //mov
	esi = edi; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	cmp(edi, eax);
	if (jbe())
		goto loc_4B2530;
loc_4B2651:
	xor_(ebx, ebx);
	bl = to8i(eax); //mov
	add(ecx, ebx);
	inc(eax);
	add(edx, ecx);
	to8i(eax-1) = dl; //mov
	cmp(eax, esi);
	if (jb())
		goto loc_4B2651;
	eax = to32i(esp+0x4CC); //mov
	add(esp, (int32_t)0x544);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4B2690()
{
	static const void *const off_4B2680[] = {
		&&loc_4B271D,
		&&loc_4B277F,
		&&loc_4B278B,
		&&loc_4B27B2,
	};
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	xor_(ah, ah);
	ecx = 2; //mov
	to8i(esp+0x10) = ah; //mov
	eax = ebp; //mov
	to32i(esp+0xC) = edx; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+2); //lea
	cmp(edx, (int32_t)0x4B31);
	if (jz())
		goto loc_4B2763;
	ecx = 3; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	add(ebp, (int32_t)5);
loc_4B26E2:
	to32i(esp+8) = eax; //mov
	to32i(esp) = ebp; //mov
	eax = to32i(esp+8); //mov
	to32i(esp+4) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_4B2756;
loc_4B26F5:
	eax = to32i(esp); //mov
	al = to8i(eax); //mov
	ah = al; //mov
	and_(ah, (int8_t)0x3F);
	ebp = (uint8_t)ah; //movzx
	ebx = to32i(esp); //mov
	and_(eax, (int32_t)0xFF);
	inc(ebx);
	sar(eax, (int32_t)6);
	to32i(esp) = ebx; //mov
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_4B274F;
	goto *off_4B2680[eax];
loc_4B271D:
	edi = to32i(esp+0xC); //mov
	ecx = ebp; //mov
	esi = ebx; //mov
	edx = to32i(esp+8); //mov
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
	eax = to32i(esp+0xC); //mov
	edi = (int32_t)(intptr_t)(ebx+ebp); //lea
	sub(edx, ebp);
	to32i(esp) = edi; //mov
	add(eax, ebp);
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = eax; //mov
loc_4B274F:
	cmp(to32i(esp+8), (int32_t)0);
	if (jg())
		goto loc_4B26F5;
loc_4B2756:
	eax = to32i(esp+4); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B2763:
	ecx = 2; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	add(ebp, (int32_t)4);
	goto loc_4B26E2;
loc_4B277F:
	al = to8i(ebx); //mov
	ecx = (int32_t)(intptr_t)(ebx+1); //lea
	to8i(esp+0x10) = al; //mov
	to32i(esp) = ecx; //mov
loc_4B278B:
	eax = to32i(esp+0xC); //mov
	xor_(edx, edx);
	ebx = ebp; //mov
	dl = to8i(esp+0x10); //mov
	esi = to32i(esp+8); //mov
	esp -= 4; _memset_(); esp += 4; //call
	ebx = to32i(esp+0xC); //mov
	sub(esi, ebp);
	add(ebx, ebp);
	to32i(esp+8) = esi; //mov
	to32i(esp+0xC) = ebx; //mov
	goto loc_4B274F;
loc_4B27B2:
	edx = to32i(esp+0xC); //mov
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	ah = to8i(ebx); //mov
	to32i(esp) = esi; //mov
	edi = (int32_t)(intptr_t)(edx+1); //lea
	to8i(edx) = ah; //mov
	edx = to32i(esp+8); //mov
	and_(ah, (int8_t)0xF0);
	to32i(esp+0xC) = edi; //mov
	sub(edx, ebp);
	dec(ebp);
	to32i(esp+8) = edx; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4B274F;
loc_4B27DD:
	edx = to32i(esp); //mov
	al = to8i(edx); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	dl = al; //mov
	cl = ah; //mov
	sar(edx, (int32_t)4);
	or_(edx, ecx);
	ecx = to32i(esp+0xC); //mov
	ebx = to32i(esp+0xC); //mov
	dec(ebp);
	to8i(ecx) = dl; //mov
	ecx = to32i(esp); //mov
	inc(ebx);
	inc(ecx);
	to32i(esp+0xC) = ebx; //mov
	to32i(esp) = ecx; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4B2818;
	and_(al, (int8_t)0xF);
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	dec(ebp);
	or_(al, ah);
	to32i(esp+0xC) = esi; //mov
	to8i(ebx) = al; //mov
loc_4B2818:
	test(ebp, ebp);
	if (jg())
		goto loc_4B27DD;
	goto loc_4B274F;
}
Fn(void) Game::_sub_4B2824()
{
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)4);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = ebx; //mov
	ebx = eax; //mov
	edi = edx; //mov
	to32i(ebp-4) = 0; //mov
	or_(ebx, ebx);
	if (jz())
		goto loc_4B291A;
	ax = to16i(ebx); //mov
	ebx = (int32_t)(intptr_t)(ebx+2); //lea
	and_(al, (int8_t)1);
	if (jz())
		goto loc_4B284F;
	ebx = (int32_t)(intptr_t)(ebx+3); //lea
loc_4B284F:
	xor_(eax, eax);
	al = to8i(ebx); //mov
	shl(eax, (int32_t)0x10);
	ah = to8i(ebx+1); //mov
	al = to8i(ebx+2); //mov
	ebx = (int32_t)(intptr_t)(ebx+3); //lea
	to32i(ebp-4) = eax; //mov
	cmp(ecx, (int32_t)0);
	if (jz())
		goto loc_4B291A;
	xor_(ecx, ecx);
	goto loc_4B28B5;
loc_4B2870:
	esi = (int32_t)(intptr_t)(ebx+2); //lea
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	ebx = esi; //mov
	ch = dl; //mov
	cl = dh; //mov
	and_(edx, (int32_t)0x1C);
	shr(ch, (int8_t)5);
	shr(edx, (int32_t)2);
	neg(ecx);
	esi = (int32_t)(intptr_t)(edi+ecx-1); //lea
	ecx = (int32_t)(intptr_t)(edx+3); //lea
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	or_(cl, to8i(ebx));
	edx = to32i(ebx); //mov
	if (js())
		goto loc_4B28BB;
loc_4B2895:
	and_(ecx, (int32_t)3);
	if (jnz())
		goto loc_4B2870;
	ebx = (int32_t)(intptr_t)(ebx+2); //lea
	ch = dl; //mov
	cl = dh; //mov
	and_(edx, (int32_t)0x1C);
	shr(ch, (int8_t)5);
	shr(edx, (int32_t)2);
	neg(ecx);
	esi = (int32_t)(intptr_t)(edi+ecx-1); //lea
	ecx = (int32_t)(intptr_t)(edx+3); //lea
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
loc_4B28B5:
	or_(cl, to8i(ebx));
	edx = to32i(ebx); //mov
	if (jns())
		goto loc_4B2895;
loc_4B28BB:
	add(cl, cl);
	if (js())
		goto loc_4B28F0;
	cl = dh; //mov
	esi = (int32_t)(intptr_t)(ebx+3); //lea
	shr(ecx, (int32_t)6);
	and_(ecx, (int32_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	ebx = esi; //mov
	ecx = edx; //mov
	shr(ecx, (int32_t)0x10);
	ch = dh; //mov
	and_(ch, (int8_t)0x3F);
	neg(ecx);
	esi = (int32_t)(intptr_t)(edi+ecx-1); //lea
	and_(edx, (int32_t)0x3F);
	ecx = (int32_t)(intptr_t)(edx+4); //lea
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	or_(cl, to8i(ebx));
	edx = to32i(ebx); //mov
	if (jns())
		goto loc_4B2895;
	goto loc_4B28BB;
loc_4B28F0:
	add(cl, cl);
	if (jns())
		goto loc_4B2924;
	cmp(dl, (int8_t)0xFC);
	if (jnb())
		goto loc_4B2910;
	and_(edx, (int32_t)0x1F);
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	ecx = (int32_t)(intptr_t)(edx+1); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ebx = esi; //mov
	or_(cl, to8i(esi));
	edx = to32i(esi); //mov
	if (jns())
		goto loc_4B2895;
	goto loc_4B28BB;
loc_4B2910:
	ecx = edx; //mov
	esi = (int32_t)(intptr_t)(ebx+1); //lea
	and_(ecx, (int32_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
loc_4B291A:
	eax = to32i(ebp-4); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	esp = ebp; //mov
	pop32(ebp);
	return;
loc_4B2924:
	ecx = edx; //mov
	esi = (int32_t)(intptr_t)(ebx+4); //lea
	and_(ecx, (int32_t)3);
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	ebx = esi; //mov
	ecx = edx; //mov
	eax = edx; //mov
	and_(ecx, (int32_t)0x10);
	shr(eax, (int32_t)8);
	shl(ecx, (int32_t)0xC);
	cl = ah; //mov
	ch = al; //mov
	neg(ecx);
	esi = (int32_t)(intptr_t)(edi+ecx-1); //lea
	rol(edx, (int32_t)8);
	shr(dh, (int8_t)2);
	and_(edx, (int32_t)0x3FF);
	cmp(ecx, (int32_t)0xFFFFFFFC);
	if (jge())
		goto loc_4B297C;
	ecx = (int32_t)(intptr_t)(edx+5); //lea
	edx = (int32_t)(intptr_t)(edx+5); //lea
	shr(ecx, (int32_t)2);
	and_(edx, (int32_t)3);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = edx; //mov
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	or_(cl, to8i(ebx));
	edx = to32i(ebx); //mov
	if (jns())
		goto loc_4B2895;
	goto loc_4B28BB;
loc_4B297C:
	ecx = (int32_t)(intptr_t)(edx+5); //lea
	while (ecx) //rep
	{
		movsb();
		--ecx;
	};
	or_(cl, to8i(ebx));
	edx = to32i(ebx); //mov
	if (jns())
		goto loc_4B2895;
	goto loc_4B28BB;
}
Fn(void) Game::_sub_4B2990()
{
	push32(ecx);
	push32(edx);
loc_4B2992:
	xor_(edx, edx);
	ecx = to32i(dword_5B9450); //mov
	dl = al; //mov
	cmp(to8i(ecx+edx), (int8_t)0);
	if (jnz())
		goto loc_4B29B5;
	edx = to32i(dword_5B9440); //mov
	inc(edx);
	to8i(edx-1) = al; //mov
	to32i(dword_5B9440) = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4B29B5:
	eax = to32i(dword_5B9444); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_4B2990(); esp += 4; //call
	eax = to32i(dword_5B944C); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	goto loc_4B2992;
}
Fn(void) Game::_sub_4B29D8()
{
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x304);
	to32i(dword_5B9440) = edx; //mov
	xor_(edx, edx);
	to32i(esp+0x300) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x200); //lea
	to32i(dword_5B9450) = edx; //mov
	edx = esp; //mov
	to32i(dword_5B9444) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	ecx = eax; //mov
	to32i(dword_5B944C) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_4B2B61;
	xor_(edx, edx);
	ecx = (int32_t)(intptr_t)(eax+1); //lea
	dl = to8i(eax); //mov
	xor_(eax, eax);
	shl(edx, (int32_t)8);
	al = to8i(ecx); //mov
	add(edx, eax);
	inc(ecx);
	cmp(edx, (int32_t)0x47FB);
	if (jz())
		goto loc_4B2B09;
loc_4B2A39:
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(ecx); //mov
	dl = to8i(ecx+1); //mov
	to32i(esp+0x300) = eax; //mov
	shl(eax, (int32_t)8);
	add(eax, edx);
	to32i(esp+0x300) = eax; //mov
	inc(ecx);
	edx = to32i(esp+0x300); //mov
	xor_(eax, eax);
	shl(edx, (int32_t)8);
	al = to8i(ecx+1); //mov
	inc(ecx);
	add(edx, eax);
	inc(ecx);
	to32i(esp+0x300) = edx; //mov
	xor_(edx, edx);
loc_4B2A72:
	eax = to32i(dword_5B9450); //mov
	esi = (int32_t)(intptr_t)(eax+edx); //lea
	inc(edx);
	to8i(esi) = 0; //mov
	cmp(edx, (int32_t)0x100);
	if (jl())
		goto loc_4B2A72;
	push32(edi);
	push32(ebx);
	inc(ecx);
	xor_(edx, edx);
	dl = to8i(ecx-1); //mov
	inc(ecx);
	to8i(edx+eax) = 1; //mov
	ebp = (uint8_t)to8i(ecx-1); //movzx
	xor_(eax, eax);
	test(ebp, ebp);
	if (jle())
		goto loc_4B2AD4;
loc_4B2A9D:
	xor_(edx, edx);
	ebx = to32i(dword_5B9444); //mov
	dl = to8i(ecx); //mov
	esi = (int32_t)(intptr_t)(ecx+1); //lea
	edi = (int32_t)(intptr_t)(ebx+edx); //lea
	ecx = (int32_t)(intptr_t)(esi+1); //lea
	bl = to8i(esi); //mov
	esi = ecx; //mov
	to8i(edi) = bl; //mov
	edi = to32i(dword_5B944C); //mov
	bl = to8i(esi); //mov
	to8i(edx+edi) = bl; //mov
	ebx = to32i(dword_5B9450); //mov
	inc(eax);
	inc(ecx);
	to8i(edx+ebx) = 0xFF; //mov
	cmp(eax, ebp);
	if (jl())
		goto loc_4B2A9D;
loc_4B2AD4:
	to32i(dword_5B9448) = ecx; //mov
	pop32(ebx);
	pop32(edi);
loc_4B2ADC:
	ecx = to32i(dword_5B9448); //mov
	xor_(edx, edx);
	eax = to32i(dword_5B9450); //mov
	dl = to8i(ecx); //mov
	al = to8i(edx+eax); //mov
	inc(ecx);
	test(al, al);
	if (jnz())
		goto loc_4B2B11;
	eax = to32i(dword_5B9440); //mov
	inc(eax);
	to32i(dword_5B9448) = ecx; //mov
	to8i(eax-1) = dl; //mov
	to32i(dword_5B9440) = eax; //mov
	goto loc_4B2ADC;
loc_4B2B09:
	add(ecx, (int32_t)3);
	goto loc_4B2A39;
loc_4B2B11:
	to32i(dword_5B9448) = ecx; //mov
	if (jl())
		goto loc_4B2B38;
	xor_(edx, edx);
	dl = to8i(ecx); //mov
	inc(ecx);
	test(edx, edx);
	if (jz())
		goto loc_4B2B61;
	eax = to32i(dword_5B9440); //mov
	inc(eax);
	to32i(dword_5B9448) = ecx; //mov
	to8i(eax-1) = dl; //mov
	to32i(dword_5B9440) = eax; //mov
	goto loc_4B2ADC;
loc_4B2B38:
	eax = to32i(dword_5B9444); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_4B2990(); esp += 4; //call
	eax = to32i(dword_5B944C); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_4B2990(); esp += 4; //call
	goto loc_4B2ADC;
loc_4B2B61:
	eax = to32i(esp+0x300); //mov
	to32i(dword_5B9448) = ecx; //mov
	add(esp, (int32_t)0x304);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_stackavail_()
{
	push32(edx);
	call(to32i(off_4DED58));
	edx = eax; //mov
	eax = esp; //mov
	sub(eax, to32i(edx));
	pop32(edx);
}
Fn(void) Game::_sub_4B2D3C()
{
	push32(eax);
	push32(ebx);
	eax = to32i(esp+0xC); //mov
	ebx = 0xFFFFFFFC; //mov
loc_4B2D47:
	to32i(esp+ebx) = ebx; //mov
	sub(ebx, (int32_t)0x1000);
	sub(eax, (int32_t)0x1000);
	if (jg())
		goto loc_4B2D47;
	pop32(ebx);
	pop32(eax);
	esp += 4; return;
}
Fn(void) Game::_start()
{
#ifdef SWAP_WINDOW_AND_GL_THREAD
	push32(doStart);
	call(WrapperStartInThread);
theLoop:
	cmp(to8i(canRunWindowThread), (int8_t)0);
	if (jnz())
		goto runWindowThread;
	push32(1);
	eax = SDL_Delay_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	goto theLoop;
runWindowThread:
	esp -= 4; _sub_481080(); esp += 4; //call
	to8i(canRunWindowThread) = 0; //mov
	goto theLoop;
#else
	_doStart(); return; //jmp
#endif
}
Fn(void) Game::_doStart()
{
	eax = WrapperInit();
	sub(esp, (int32_t)8);
	eax = to32i(dword_4E0950); //mov
	add(eax, (int32_t)3);
	and_(al, (int8_t)0xFC);
	xor_(edx, edx);
	sub(esp, eax);
	ecx = esp; //mov
	ebx = to32i(dword_4E0950); //mov
	eax = ecx; //mov
	esp -= 4; _memset_(); esp += 4; //call
	eax = to32i(dword_4E0950); //mov
	to32i(ecx+0xF0) = eax; //mov
	to32i(lpTlsValue) = ecx; //mov
	_sub_4BB81E(); return; //jmp
}
Fn(void) Game::_sub_4B2FD0()
{
	push32(edx);
	edx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_4B2FE3;
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_4B2FE3:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4B300F;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)5);
	eax = to32i(dword_59BFDE+eax); //mov
	sar(eax, (int32_t)0x18);
	pop32(edx);
	return;
loc_4B300F:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = 0xFFFFFFF8; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4B3E80()
{
	push32(edx);
	edx = eax; //mov
	cmp(eax, (int32_t)0x10000);
	if (jg())
		goto loc_4B3EA5;
	test(eax, eax);
	if (jl())
		goto loc_4B3EAC;
loc_4B3E8E:
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7FFF);
	sub(eax, (int32_t)0x4000);
	imul32(eax, edx);
	sar(eax, (int32_t)0xE);
	pop32(edx);
	return;
loc_4B3EA5:
	edx = 0x10000; //mov
	goto loc_4B3E8E;
loc_4B3EAC:
	xor_(edx, eax);
	goto loc_4B3E8E;
}
Fn(void) Game::_sub_4B3EE0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	edi = eax; //mov
	esi = edx; //mov
	ecx = ebx; //mov
	cmp(eax, to32i(dword_4DB24C));
	if (jl())
		goto loc_4B3F3E;
	cmp(eax, to32i(dword_4DB254));
	if (jge())
		goto loc_4B3F3E;
	cmp(esi, to32i(dword_4DB250));
	if (jl())
		goto loc_4B3F3E;
	cmp(esi, to32i(dword_4DB258));
	if (jge())
		goto loc_4B3F3E;
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jnz())
		goto loc_4B3F1F;
	cmp(to8i(byte_4DB25E), (int8_t)0);
	if (jz())
		goto loc_4B3F46;
loc_4B3F1F:
	ebx = ecx; //mov
	shr(ebx, (int32_t)0x18);
	and_(ebx, (int32_t)0xFF);
	cmp(ebx, (int32_t)0xFF);
	if (jz())
		goto loc_4B3FE4;
	test(ebx, ebx);
	if (jnz())
		goto loc_4B3FFE;
loc_4B3F3E:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B3F46:
	ebx = esi; //mov
	eax = edi; //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	ebx = ecx; //mov
	esi = eax; //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4B3FD9;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4B3FB6;
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
loc_4B3FB6:
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
loc_4B3FD9:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B3FE4:
	eax = ecx; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = esi; //mov
	ebx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B3FFE:
	eax = ecx; //mov
	shr(eax, (int32_t)0x10);
	and_(eax, (int32_t)0xFF);
	to32i(esp) = eax; //mov
	eax = ecx; //mov
	shr(eax, (int32_t)8);
	and_(ecx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF);
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = eax; //mov
	ecx = ebx; //mov
	eax = 0x10000; //mov
	shl(ecx, (int32_t)8);
	sub(eax, ecx);
	edx = esi; //mov
	ecx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4A68D0(); esp += 4; //call
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x18);
	and_(edx, (int32_t)0xFF);
	to32i(esp+0x14) = edx; //mov
	edx = eax; //mov
	ebp = eax; //mov
	sar(edx, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	and_(edx, (int32_t)0xFF);
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x10) = edx; //mov
	edx = 0xFF; //mov
	eax = 0xFF; //mov
	sub(edx, ebx);
	sub(eax, to32i(esp+0x14));
	imul32(edx, eax);
	ebx = 0xFF; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = ebx; //mov
	sar(ebp, (int32_t)0x10);
	sub(edx, eax);
	and_(ebp, (int32_t)0xFF);
	to32i(esp+0x14) = edx; //mov
	eax = ebp; //mov
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, to32i(esp));
	cmp(eax, ebx);
	if (jle())
		goto loc_4B4128;
	eax = ebx; //mov
loc_4B40B3:
	ebx = eax; //mov
	edx = ecx; //mov
	eax = to32i(esp+0x10); //mov
	ebp = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebp);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4B4140;
	eax = 0xFF; //mov
loc_4B40D7:
	ebp = eax; //mov
	edx = ecx; //mov
	eax = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, to32i(esp+4));
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4B4154;
	eax = 0xFF; //mov
loc_4B40F9:
	edx = to32i(esp+0x14); //mov
	ecx = ebx; //mov
	shl(edx, (int32_t)0x18);
	shl(ecx, (int32_t)0x10);
	or_(edx, ecx);
	ecx = ebp; //mov
	shl(ecx, (int32_t)8);
	or_(edx, ecx);
	or_(eax, edx);
	esp -= 4; _sub_48266C(); esp += 4; //call
	ebx = eax; //mov
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4B4128:
	edx = ecx; //mov
	eax = ebp; //mov
	ebx = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	goto loc_4B40B3;
loc_4B4140:
	eax = to32i(esp+0x10); //mov
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebp);
	goto loc_4B40D7;
loc_4B4154:
	eax = to32i(esp+0xC); //mov
	edx = ecx; //mov
	ecx = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	goto loc_4B40F9;
}
Fn(void) Game::_sub_4B416C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jle())
		goto loc_4B4276;
	xor_(ebx, ebx);
	xor_(edx, edx);
	ebp = to32i(esp+0x14); //mov
	esi = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	ecx = to32i(esp+0x20); //mov
	cmp(ecx, (int32_t)1);
	if (jl())
		goto loc_4B4276;
	shr(ecx, (int32_t)1);
	to32i(esp+0x20) = ecx; //mov
	if (jb())
		goto loc_4B41F9;
loc_4B41A0:
	ecx = to32i(esp+0x20); //mov
loc_4B41A4:
	bh = to8i(esi+1); //mov
	dh = to8i(esi+1); //mov
	bl = to8i(edi+2); //mov
	dl = to8i(edi+3); //mov
	shr(bh, (int8_t)4);
	and_(dh, (int8_t)0xF);
	al = to8i(ebp+ebx+0); //mov
	ah = to8i(ebp+edx+0); //mov
	shl(eax, (int32_t)0x10);
	bh = to8i(esi); //mov
	dh = to8i(esi); //mov
	bl = to8i(edi); //mov
	dl = to8i(edi+1); //mov
	shr(bh, (int8_t)4);
	and_(dh, (int8_t)0xF);
	al = to8i(ebp+ebx+0); //mov
	ah = to8i(ebp+edx+0); //mov
	sub(ecx, (int32_t)1);
	to32i(edi) = eax; //mov
	esi = (int32_t)(intptr_t)(esi+2); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jg())
		goto loc_4B41A4;
	add(esi, to32i(esp+0x28));
	add(edi, to32i(esp+0x2C));
	sub(to32i(esp+0x24), (int32_t)1);
	if (jnz())
		goto loc_4B41A0;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B41F9:
	add(to32i(esp+0x28), (int32_t)1);
	add(to32i(esp+0x2C), (int32_t)2);
loc_4B4203:
	ecx = to32i(esp+0x20); //mov
	cmp(ecx, (int32_t)0);
	if (jz())
		goto loc_4B424D;
loc_4B420C:
	bh = to8i(esi+1); //mov
	dh = to8i(esi+1); //mov
	bl = to8i(edi+2); //mov
	dl = to8i(edi+3); //mov
	shr(bh, (int8_t)4);
	and_(dh, (int8_t)0xF);
	al = to8i(ebp+ebx+0); //mov
	ah = to8i(ebp+edx+0); //mov
	shl(eax, (int32_t)0x10);
	bh = to8i(esi); //mov
	dh = to8i(esi); //mov
	bl = to8i(edi); //mov
	dl = to8i(edi+1); //mov
	shr(bh, (int8_t)4);
	and_(dh, (int8_t)0xF);
	al = to8i(ebp+ebx+0); //mov
	ah = to8i(ebp+edx+0); //mov
	sub(ecx, (int32_t)1);
	to32i(edi) = eax; //mov
	esi = (int32_t)(intptr_t)(esi+2); //lea
	edi = (int32_t)(intptr_t)(edi+4); //lea
	if (jg())
		goto loc_4B420C;
loc_4B424D:
	bh = to8i(esi); //mov
	bl = to8i(edi); //mov
	dl = to8i(edi+1); //mov
	dh = bh; //mov
	shr(bh, (int8_t)4);
	and_(dh, (int8_t)0xF);
	al = to8i(ebp+ebx+0); //mov
	ah = to8i(ebp+edx+0); //mov
	to16i(edi) = ax; //mov
	add(esi, to32i(esp+0x28));
	add(edi, to32i(esp+0x2C));
	sub(to32i(esp+0x24), (int32_t)1);
	if (jnz())
		goto loc_4B4203;
loc_4B4276:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B4FB8()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0xC) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B4FD6; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B4FD6()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	ecx = to32i(esi+8); //mov
	eax = to32i(ebp+0xC); //mov
	ebx = to32i(ebp+0x10); //mov
	fild(to32i(ebp+0xC));
	fild(to32i(ebp+0x10));
	fxch_st(1);
	fmul(to32f(flt_4E0518));
	fxch_st(1);
	fmul(to32f(flt_4E0518));
	fxch_st(1);
	fstp(to32f(esi));
	fstp(to32f(esi+4));
	cmp(eax, (int32_t)0);
	if (jz())
		goto loc_4B5022;
	cmp(ebx, (int32_t)0);
	if (jz())
		goto loc_4B5058;
	cmp(eax, (int32_t)0x7F);
	if (jz())
		goto loc_4B5029;
	cmp(ebx, (int32_t)0x7F);
	if (jz())
		goto loc_4B5048;
	to32i(ecx) = (int32_t)(intptr_t)sub_4B5066; //mov
	goto loc_4B5060;
loc_4B5022:
	cmp(ebx, (int32_t)0);
	if (jz())
		goto loc_4B5030;
	goto loc_4B5050;
loc_4B5029:
	cmp(ebx, (int32_t)0x7F);
	if (jz())
		goto loc_4B5038;
	goto loc_4B5040;
loc_4B5030:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B5369; //mov
	goto loc_4B5060;
loc_4B5038:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B50F6; //mov
	goto loc_4B5060;
loc_4B5040:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B52E3; //mov
	goto loc_4B5060;
loc_4B5048:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B525E; //mov
	goto loc_4B5060;
loc_4B5050:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B51E1; //mov
	goto loc_4B5060;
loc_4B5058:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B5165; //mov
	goto loc_4B5060;
loc_4B5060:
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B5066()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B50C5;
	sub(ecx, (int32_t)1);
loc_4B5083:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi));
	fmul_st(0, 3);
	fld(to32f(edi+4));
	fmul_st(0, 3);
	fld(to32f(edi+4));
	fmul_st(0, 5);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B5083;
	add(ecx, (int32_t)1);
loc_4B50C5:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B50EF;
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi));
	fmul_st(0, 3);
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B50C5;
loc_4B50EF:
	fstp_st(0);
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B50F6()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B5140;
	sub(ecx, (int32_t)1);
loc_4B510E:
	fld(to32f(ebp+0));
	fadd(to32f(edi));
	fld(to32f(ebp+4));
	fadd(to32f(edi));
	fld(to32f(ebp+8));
	fadd(to32f(edi+4));
	fld(to32f(ebp+0xC));
	fadd(to32f(edi+4));
	fxch_st(3);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+8));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B510E;
	add(ecx, (int32_t)1);
loc_4B5140:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5162;
	fld(to32f(ebp+0));
	fadd(to32f(edi));
	fld(to32f(ebp+4));
	fadd(to32f(edi));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B5140;
loc_4B5162:
	popa();
	leave();
}
Fn(void) Game::_sub_4B5165()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)3);
	if (jle())
		goto loc_4B51C2;
	sub(ecx, (int32_t)3);
loc_4B517F:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fmul_st(0, 2);
	fld(to32f(edi+8));
	fmul_st(0, 3);
	fld(to32f(edi+0xC));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+8));
	fxch_st(1);
	fadd(to32f(ebp+0x10));
	fxch_st(3);
	fadd(to32f(ebp+0x18));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+8));
	fstp(to32f(ebp+0x18));
	fstp(to32f(ebp+0x10));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x20);
	sub(ecx, (int32_t)4);
	if (jg())
		goto loc_4B517F;
	add(ecx, (int32_t)3);
loc_4B51C2:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B51DC;
	fld(to32f(edi));
	fmul_st(0, 1);
	fadd(to32f(ebp+0));
	fstp(to32f(ebp+0));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B51C2;
loc_4B51DC:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B51E1()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)3);
	if (jle())
		goto loc_4B523F;
	sub(ecx, (int32_t)3);
loc_4B51FC:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fmul_st(0, 2);
	fld(to32f(edi+8));
	fmul_st(0, 3);
	fld(to32f(edi+0xC));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+4));
	fxch_st(2);
	fadd(to32f(ebp+0xC));
	fxch_st(1);
	fadd(to32f(ebp+0x14));
	fxch_st(3);
	fadd(to32f(ebp+0x1C));
	fxch_st(2);
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+0x1C));
	fstp(to32f(ebp+0x14));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x20);
	sub(ecx, (int32_t)4);
	if (jg())
		goto loc_4B51FC;
	add(ecx, (int32_t)3);
loc_4B523F:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5259;
	fld(to32f(edi));
	fmul_st(0, 1);
	fadd(to32f(ebp+4));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B523F;
loc_4B5259:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B525E()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B52B6;
	sub(ecx, (int32_t)1);
loc_4B5278:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi));
	fld(to32f(edi+4));
	fmul_st(0, 3);
	fld(to32f(edi+4));
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B5278;
	add(ecx, (int32_t)1);
loc_4B52B6:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B52DE;
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi));
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B52B6;
loc_4B52DE:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B52E3()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B533C;
	sub(ecx, (int32_t)1);
loc_4B52FE:
	fld(to32f(edi));
	fld(to32f(edi));
	fmul_st(0, 2);
	fld(to32f(edi+4));
	fld(to32f(edi+4));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B52FE;
	add(ecx, (int32_t)1);
loc_4B533C:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5364;
	fld(to32f(edi));
	fld(to32f(edi));
	fmul_st(0, 2);
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B533C;
loc_4B5364:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B5369()
{
	push32(ebp);
	ebp = esp; //mov
	leave();
}
Fn(void) Game::_sub_4B5370()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0xC) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B538E; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B538E()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	ecx = to32i(esi+8); //mov
	eax = to32i(ebp+0xC); //mov
	ebx = to32i(ebp+0x10); //mov
	fild(to32i(ebp+0xC));
	fild(to32i(ebp+0x10));
	fxch_st(1);
	fmul(to32f(flt_4E051C));
	fxch_st(1);
	fmul(to32f(flt_4E051C));
	fxch_st(1);
	fstp(to32f(esi));
	fstp(to32f(esi+4));
	cmp(eax, (int32_t)0);
	if (jz())
		goto loc_4B53DA;
	cmp(ebx, (int32_t)0);
	if (jz())
		goto loc_4B5410;
	cmp(eax, (int32_t)0x7F);
	if (jz())
		goto loc_4B53E1;
	cmp(ebx, (int32_t)0x7F);
	if (jz())
		goto loc_4B5400;
	to32i(ecx) = (int32_t)(intptr_t)sub_4B541E; //mov
	goto loc_4B5418;
loc_4B53DA:
	cmp(ebx, (int32_t)0);
	if (jz())
		goto loc_4B53E8;
	goto loc_4B5408;
loc_4B53E1:
	cmp(ebx, (int32_t)0x7F);
	if (jz())
		goto loc_4B53F0;
	goto loc_4B53F8;
loc_4B53E8:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B572B; //mov
	goto loc_4B5418;
loc_4B53F0:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B54B0; //mov
	goto loc_4B5418;
loc_4B53F8:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B56A3; //mov
	goto loc_4B5418;
loc_4B5400:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B561C; //mov
	goto loc_4B5418;
loc_4B5408:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B559D; //mov
	goto loc_4B5418;
loc_4B5410:
	to32i(ecx) = (int32_t)(intptr_t)sub_4B5521; //mov
	goto loc_4B5418;
loc_4B5418:
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B541E()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B547E;
	sub(ecx, (int32_t)1);
loc_4B543B:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fmul_st(0, 3);
	fld(to32f(edi+8));
	fmul_st(0, 3);
	fld(to32f(edi+0xC));
	fmul_st(0, 5);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B543B;
	add(ecx, (int32_t)1);
loc_4B547E:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B54A9;
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fmul_st(0, 3);
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)4);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B547E;
loc_4B54A9:
	fstp_st(0);
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B54B0()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B54FB;
	sub(ecx, (int32_t)1);
loc_4B54C8:
	fld(to32f(ebp+0));
	fadd(to32f(edi));
	fld(to32f(ebp+4));
	fadd(to32f(edi+4));
	fld(to32f(ebp+8));
	fadd(to32f(edi+8));
	fld(to32f(ebp+0xC));
	fadd(to32f(edi+0xC));
	fxch_st(3);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+8));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B54C8;
	add(ecx, (int32_t)1);
loc_4B54FB:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B551E;
	fld(to32f(ebp+0));
	fadd(to32f(edi));
	fld(to32f(ebp+4));
	fadd(to32f(edi+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B54FB;
loc_4B551E:
	popa();
	leave();
}
Fn(void) Game::_sub_4B5521()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)3);
	if (jle())
		goto loc_4B557E;
	sub(ecx, (int32_t)3);
loc_4B553B:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+8));
	fmul_st(0, 2);
	fld(to32f(edi+0x10));
	fmul_st(0, 3);
	fld(to32f(edi+0x18));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+8));
	fxch_st(1);
	fadd(to32f(ebp+0x10));
	fxch_st(3);
	fadd(to32f(ebp+0x18));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+8));
	fstp(to32f(ebp+0x18));
	fstp(to32f(ebp+0x10));
	add(edi, (int32_t)0x20);
	add(ebp, (int32_t)0x20);
	sub(ecx, (int32_t)4);
	if (jg())
		goto loc_4B553B;
	add(ecx, (int32_t)3);
loc_4B557E:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5598;
	fld(to32f(edi));
	fmul_st(0, 1);
	fadd(to32f(ebp+0));
	fstp(to32f(ebp+0));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B557E;
loc_4B5598:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B559D()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)3);
	if (jle())
		goto loc_4B55FC;
	sub(ecx, (int32_t)3);
loc_4B55B8:
	fld(to32f(edi+4));
	fmul_st(0, 1);
	fld(to32f(edi+0xC));
	fmul_st(0, 2);
	fld(to32f(edi+0x14));
	fmul_st(0, 3);
	fld(to32f(edi+0x1C));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+4));
	fxch_st(2);
	fadd(to32f(ebp+0xC));
	fxch_st(1);
	fadd(to32f(ebp+0x14));
	fxch_st(3);
	fadd(to32f(ebp+0x1C));
	fxch_st(2);
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+0x1C));
	fstp(to32f(ebp+0x14));
	add(edi, (int32_t)0x20);
	add(ebp, (int32_t)0x20);
	sub(ecx, (int32_t)4);
	if (jg())
		goto loc_4B55B8;
	add(ecx, (int32_t)3);
loc_4B55FC:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5617;
	fld(to32f(edi+4));
	fmul_st(0, 1);
	fadd(to32f(ebp+4));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B55FC;
loc_4B5617:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B561C()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B5675;
	sub(ecx, (int32_t)1);
loc_4B5636:
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fld(to32f(edi+8));
	fmul_st(0, 3);
	fld(to32f(edi+0xC));
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B5636;
	add(ecx, (int32_t)1);
loc_4B5675:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B569E;
	fld(to32f(edi));
	fmul_st(0, 1);
	fld(to32f(edi+4));
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B5675;
loc_4B569E:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B56A3()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	fld(to32f(esi+4));
	ebp = to32i(ebp+0x14); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4B56FD;
	sub(ecx, (int32_t)1);
loc_4B56BE:
	fld(to32f(edi));
	fld(to32f(edi+4));
	fmul_st(0, 2);
	fld(to32f(edi+8));
	fld(to32f(edi+0xC));
	fmul_st(0, 4);
	fxch_st(3);
	fadd(to32f(ebp+0));
	fxch_st(2);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fadd(to32f(ebp+8));
	fxch_st(3);
	fadd(to32f(ebp+0xC));
	fxch_st(2);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4B56BE;
	add(ecx, (int32_t)1);
loc_4B56FD:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B5726;
	fld(to32f(edi));
	fld(to32f(edi+4));
	fmul_st(0, 2);
	fxch_st(1);
	fadd(to32f(ebp+0));
	fxch_st(1);
	fadd(to32f(ebp+4));
	fxch_st(1);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+4));
	add(edi, (int32_t)8);
	add(ebp, (int32_t)8);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B56FD;
loc_4B5726:
	fstp_st(0);
	popa();
	leave();
}
Fn(void) Game::_sub_4B572B()
{
	push32(ebp);
	ebp = esp; //mov
	leave();
}
Fn(void) Game::_sub_4B5730()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	to32i(esi) = 0; //mov
	to32i(esi+0xC) = 0; //mov
	eax = to32i(ebp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5770; //mov
	to32i(esi+0x10) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5785; //mov
	to32i(esi+0x14) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B57CB; //mov
	to32i(esi+0x18) = eax; //mov
	pop32(esi);
	eax = 0; //mov
	leave();
}
Fn(void) Game::_sub_4B5770()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+4) = eax; //mov
	pop32(esi);
	eax = 0; //mov
	leave();
}
Fn(void) Game::_sub_4B5785()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	cmp(to32i(esi+4), (int32_t)0x10000);
	if (jl())
		goto loc_4B579D;
	if (jg())
		goto loc_4B57B5;
	pop32(esi);
	eax = to32i(ebp+0xC); //mov
	leave();
	return;
loc_4B579D:
	push32(edx);
	edx = to32i(ebp+0xC); //mov
	eax = to32i(esi+4); //mov
	dec(edx);
	imul32(eax, edx);
	add(eax, to32i(esi));
	pop32(edx);
	shr(eax, (int32_t)0x10);
	inc(eax);
	sub(eax, to32i(esi+0xC));
	pop32(esi);
	leave();
	return;
loc_4B57B5:
	push32(edx);
	eax = to32i(esi+4); //mov
	edx = to32i(ebp+0xC); //mov
	imul32(eax, edx);
	add(eax, to32i(esi));
	pop32(edx);
	shr(eax, (int32_t)0x10);
	sub(eax, to32i(esi+0xC));
	pop32(esi);
	leave();
}
Fn(void) Game::_sub_4B57CB()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	cmp(to32i(esi+4), (int32_t)0x10000);
	if (jnz())
		goto loc_4B57EA;
	push32(eax);
	push32(ebx);
	eax = to32i(ebp+0x14); //mov
	ebx = to32i(ebp+0x10); //mov
	to32i(eax) = ebx; //mov
	pop32(ebx);
	pop32(eax);
	pop32(esi);
	leave();
	return;
loc_4B57EA:
	pusha();
	edx = to32i(esi); //mov
	eax = to32i(ebp+0x14); //mov
	ebx = to32i(esi+4); //mov
	ecx = to32i(ebp+0xC); //mov
	shl(edx, (int32_t)0x10);
	edi = to32i(eax); //mov
	shl(ecx, (int32_t)2);
	eax = to32i(esi+8); //mov
	add(ecx, edi);
	to32i(dword_4E0520) = eax; //mov
	eax = to32i(esi+0xC); //mov
	esi = to32i(ebp+0x10); //mov
	push32(ebp);
	shr(esi, (int32_t)2);
	ebp = ebx; //mov
	shr(ebx, (int32_t)0x10);
	shl(ebp, (int32_t)0x10);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4B583B;
	push32(esi);
	esi = 0; //mov
loc_4B5825:
	eax = to32i(dword_4E0520); //mov
	to32i(edi) = eax; //mov
	add(edx, ebp);
	adc(esi, ebx);
	add(edi, (int32_t)4);
	cmp(esi, (int32_t)0);
	if (jz())
		goto loc_4B5825;
	pop32(esi);
loc_4B583B:
	eax = to32i(esi*4+0); //mov
	to32i(edi) = eax; //mov
	add(edx, ebp);
	adc(esi, ebx);
	add(edi, (int32_t)4);
	cmp(edi, ecx);
	if (jl())
		goto loc_4B583B;
	shr(edx, (int32_t)0x10);
	pop32(ebp);
	esi = to32i(ebp+8); //mov
	to32i(esi) = edx; //mov
	cmp(ebx, to32i(esi+4));
	if (jl())
		goto loc_4B586E;
	eax = to32i(edi-4); //mov
	to32i(esi+0xC) = 1; //mov
	to32i(esi+8) = eax; //mov
	popa();
	pop32(esi);
	leave();
	return;
loc_4B586E:
	to32i(esi+0xC) = 0; //mov
	popa();
	pop32(esi);
	leave();
}
Fn(void) Game::_sub_4B587C()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	to32i(esi) = 0; //mov
	to32i(esi+0x10) = 0; //mov
	eax = to32i(ebp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B58BC; //mov
	to32i(esi+0x14) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B58D1; //mov
	to32i(esi+0x18) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5917; //mov
	to32i(esi+0x1C) = eax; //mov
	pop32(esi);
	eax = 0; //mov
	leave();
}
Fn(void) Game::_sub_4B58BC()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+4) = eax; //mov
	pop32(esi);
	eax = 0; //mov
	leave();
}
Fn(void) Game::_sub_4B58D1()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	cmp(to32i(esi+4), (int32_t)0x10000);
	if (jl())
		goto loc_4B58E9;
	if (jg())
		goto loc_4B5901;
	pop32(esi);
	eax = to32i(ebp+0xC); //mov
	leave();
	return;
loc_4B58E9:
	push32(edx);
	edx = to32i(ebp+0xC); //mov
	eax = to32i(esi+4); //mov
	dec(edx);
	imul32(eax, edx);
	add(eax, to32i(esi));
	pop32(edx);
	shr(eax, (int32_t)0x10);
	inc(eax);
	sub(eax, to32i(esi+0x10));
	pop32(esi);
	leave();
	return;
loc_4B5901:
	push32(edx);
	eax = to32i(esi+4); //mov
	edx = to32i(ebp+0xC); //mov
	imul32(eax, edx);
	add(eax, to32i(esi));
	pop32(edx);
	shr(eax, (int32_t)0x10);
	sub(eax, to32i(esi+0x10));
	pop32(esi);
	leave();
}
Fn(void) Game::_sub_4B5917()
{
	push32(ebp);
	ebp = esp; //mov
	push32(esi);
	esi = to32i(ebp+8); //mov
	cmp(to32i(esi+4), (int32_t)0x10000);
	if (jnz())
		goto loc_4B5936;
	push32(eax);
	push32(ebx);
	eax = to32i(ebp+0x14); //mov
	ebx = to32i(ebp+0x10); //mov
	to32i(eax) = ebx; //mov
	pop32(ebx);
	pop32(eax);
	pop32(esi);
	leave();
	return;
loc_4B5936:
	pusha();
	edx = to32i(esi); //mov
	eax = to32i(ebp+0x14); //mov
	ebx = to32i(esi+4); //mov
	ecx = to32i(ebp+0xC); //mov
	shl(edx, (int32_t)0x10);
	edi = to32i(eax); //mov
	shl(ecx, (int32_t)3);
	eax = to32i(esi+8); //mov
	add(ecx, edi);
	to32i(dword_4E0528) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(dword_4E052C) = eax; //mov
	eax = to32i(esi+0x10); //mov
	esi = to32i(ebp+0x10); //mov
	push32(ebp);
	shr(esi, (int32_t)3);
	ebp = ebx; //mov
	shr(ebx, (int32_t)0x10);
	shl(ebp, (int32_t)0x10);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4B5995;
	push32(esi);
	esi = 0; //mov
loc_4B5979:
	eax = to32i(dword_4E0528); //mov
	to32i(edi) = eax; //mov
	eax = to32i(dword_4E052C); //mov
	to32i(edi+4) = eax; //mov
	add(edx, ebp);
	adc(esi, ebx);
	add(edi, (int32_t)8);
	cmp(esi, (int32_t)0);
	if (jz())
		goto loc_4B5979;
	pop32(esi);
loc_4B5995:
	to32i(dword_4E0524) = esp; //mov
loc_4B599C:
	eax = to32i(esi*8+0); //mov
	esp = to32i(esi*8+4); //mov
	to32i(edi) = eax; //mov
	to32i(edi+4) = esp; //mov
	add(edx, ebp);
	adc(esi, ebx);
	add(edi, (int32_t)8);
	cmp(edi, ecx);
	if (jl())
		goto loc_4B599C;
	esp = to32i(dword_4E0524); //mov
	shr(edx, (int32_t)0x10);
	pop32(ebp);
	esi = to32i(ebp+8); //mov
	to32i(esi) = edx; //mov
	cmp(ebx, to32i(esi+4));
	if (jl())
		goto loc_4B59E5;
	eax = to32i(edi-8); //mov
	to32i(esi+0x10) = 1; //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(edi-4); //mov
	to32i(esi+0xC) = eax; //mov
	popa();
	pop32(esi);
	leave();
	return;
loc_4B59E5:
	to32i(esi+0x10) = 0; //mov
	popa();
	pop32(esi);
	leave();
}
Fn(void) Game::_sub_4B59F0()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0x14); //mov
	ebx = to32i(edx+8); //mov
	dec(eax);
	imul32(eax, ebx);
	add(eax, to32i(edx+4));
	shr(eax, (int32_t)0x10);
	ebx = to32i(edx+0x13); //mov
	inc(eax);
	sar(ebx, (int32_t)0x18);
	esi = eax; //mov
	add(eax, ebx);
	bl = to8i(edx+0x15); //mov
	ecx = edx; //mov
	test(bl, bl);
	if (jnz())
		goto loc_4B5A1D;
	inc(eax);
loc_4B5A1D:
	edi = to32i(esp+0x14); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx, edi);
	add(edx, to32i(ecx+4));
	shr(edx, (int32_t)0x10);
	sub(edx, esi);
	to8i(ecx+0x16) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5A38()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B5A40()
{
	push32(ebx);
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0xC); //mov
	ebx = to32i(edx+8); //mov
	dec(eax);
	imul32(eax, ebx);
	add(eax, to32i(edx+4));
	ecx = edx; //mov
	shr(eax, (int32_t)0x10);
	bl = to8i(edx+0x15); //mov
	inc(eax);
	test(bl, bl);
	if (jnz())
		goto loc_4B5A61;
	inc(eax);
loc_4B5A61:
	edx = to32i(ecx+0x11); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5A6C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	eax = to32i(esp+0x28); //mov
	edi = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x30); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x15); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B5AFB;
loc_4B5A8A:
	ebp = to32i(esp+0x34); //mov
	dec(edi);
	ebp = to32i(ebp+0); //mov
	test(edi, edi);
	if (jg())
		goto loc_4B5B05;
loc_4B5A96:
	xor_(edx, edx);
	eax = to32i(ebx+4); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = eax; //mov
	fild(to64i(esp));
	fmul(to64f(dbl_4D1818));
	fld_st(0);
	fld1();
	fsubrp_st(1, 0);
	eax = to32i(ebx); //mov
	fld(to32f(esi+eax*4+4));
	fmulp_st(2, 0);
	fmul(to32f(esi+eax*4));
	faddp_st(1, 0);
	fstp(to32f(ebp+edi*4+0));
	eax = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	fld(to32f(esi+eax*4+4));
	eax = to32i(ebx+8); //mov
	fstp(to32f(ebx+0x10));
	add(ecx, eax);
	esi = to32i(ebx); //mov
	eax = ecx; //mov
	to32i(ebx+4) = ecx; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(esi, eax);
	eax = to32i(ebx+0x13); //mov
	to32i(ebx) = esi; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0x15) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5AFB:
	esi = (int32_t)(intptr_t)(edx-4); //lea
	edx = to32i(eax+0x10); //mov
	to32i(esi) = edx; //mov
	goto loc_4B5A8A;
loc_4B5B05:
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBDB4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp+0x10); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B5A96;
}
Fn(void) Game::_sub_4B5B40()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B5B4C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	eax = to32i(esp+0x28); //mov
	edi = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x30); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x15); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B5C33;
loc_4B5B6E:
	cmp(to8i(ebx+0x14), (int8_t)0);
	if (jz())
		goto loc_4B5B7D;
	eax = to32i(ebx+0xC); //mov
	to32i(esi-4) = eax; //mov
	sub(esi, (int32_t)4);
loc_4B5B7D:
	ebp = to32i(esp+0x34); //mov
	to32i(ebx) = 0; //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jz())
		goto loc_4B5BC0;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBDB4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp+0x10); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B5BC0:
	xor_(edx, edx);
	eax = to32i(ebx+4); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = eax; //mov
	fild(to64i(esp));
	fmul(to64f(dbl_4D1820));
	fld_st(0);
	fld1();
	fsubrp_st(1, 0);
	eax = to32i(ebx); //mov
	fld(to32f(esi+eax*4+4));
	fmulp_st(2, 0);
	fmul(to32f(esi+eax*4));
	faddp_st(1, 0);
	fstp(to32f(ebp+edi*4+0));
	eax = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	edi = to32i(ebx); //mov
	fld(to32f(esi+eax*4+4));
	eax = to32i(ebx+8); //mov
	ebp = to32i(ebx+8); //mov
	add(ecx, eax);
	fstp(to32f(ebx+0x10));
	eax = ecx; //mov
	to32i(ebx+4) = ecx; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edi, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = edi; //mov
	cmp(eax, ebp);
	if (jb())
		goto loc_4B5C40;
	eax = to32i(ebx); //mov
	to8i(ebx+0x14) = 1; //mov
	edx = to32i(esi+eax*4); //mov
	to32i(ebx+0xC) = edx; //mov
	to8i(ebx+0x15) = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5C33:
	esi = (int32_t)(intptr_t)(edx-4); //lea
	edx = to32i(eax+0x10); //mov
	to32i(esi) = edx; //mov
	goto loc_4B5B6E;
loc_4B5C40:
	to8i(ebx+0x14) = 0; //mov
	to8i(ebx+0x15) = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5C50()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B5C93;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B5C93;
loc_4B5C6F:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B5CC5;
	if (jbe())
		goto loc_4B5CDC;
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B59F0; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5A6C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5C93:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B5C6F;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B5CAA;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B5C6F;
loc_4B5CAA:
	to8i(eax+0x14) = 0; //mov
	to8i(eax+0x15) = 0; //mov
	to8i(eax+0x16) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B5C6F;
loc_4B5CC5:
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B5A40; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5B4C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5CDC:
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B5A38; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5B40; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5CF4()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0x14) = 0; //mov
	to32i(eax+0x10) = 0; //mov
	to8i(eax+0x15) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x16) = 1; //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x1C) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x20) = edx; //mov
	eax = to32i(eax+0x18); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5C50; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B5D40()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0x14); //mov
	ebx = to32i(edx+8); //mov
	dec(eax);
	imul32(eax, ebx);
	add(eax, to32i(edx+4));
	shr(eax, (int32_t)0x10);
	ebx = to32i(edx+0x1B); //mov
	inc(eax);
	sar(ebx, (int32_t)0x18);
	esi = eax; //mov
	add(eax, ebx);
	bl = to8i(edx+0x1D); //mov
	ecx = edx; //mov
	test(bl, bl);
	if (jnz())
		goto loc_4B5D6D;
	inc(eax);
loc_4B5D6D:
	edi = to32i(esp+0x14); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx, edi);
	add(edx, to32i(ecx+4));
	shr(edx, (int32_t)0x10);
	sub(edx, esi);
	to8i(ecx+0x1E) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5D88()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B5D90()
{
	push32(ebx);
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0xC); //mov
	ebx = to32i(edx+8); //mov
	dec(eax);
	imul32(eax, ebx);
	add(eax, to32i(edx+4));
	ecx = edx; //mov
	shr(eax, (int32_t)0x10);
	bl = to8i(edx+0x1D); //mov
	inc(eax);
	test(bl, bl);
	if (jnz())
		goto loc_4B5DB1;
	inc(eax);
loc_4B5DB1:
	edx = to32i(ecx+0x19); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B5DBC()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	eax = to32i(esp+0x28); //mov
	edi = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x30); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x1D); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B5E76;
loc_4B5DDE:
	ebp = to32i(esp+0x34); //mov
	dec(edi);
	ebp = to32i(ebp+0); //mov
	test(edi, edi);
	if (jg())
		goto loc_4B5E8B;
loc_4B5DEE:
	xor_(edx, edx);
	eax = to32i(ebx+4); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = eax; //mov
	fild(to64i(esp));
	fmul(to64f(dbl_4D1828));
	fld_st(0);
	fld1();
	fsubrp_st(1, 0);
	eax = to32i(ebx); //mov
	fld(to32f(esi+eax*8+8));
	fmul_st(0, 2);
	fld(to32f(esi+eax*8));
	fmul_st(0, 2);
	faddp_st(1, 0);
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	fstp(to32f(eax+ebp));
	edi = to32i(ebx); //mov
	fmul(to32f(esi+edi*8+4));
	fld(to32f(esi+edi*8+0xC));
	fmulp_st(2, 0);
	faddp_st(1, 0);
	fstp(to32f(eax+ebp+4));
	eax = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	fld(to32f(esi+eax*8+8));
	eax = to32i(ebx); //mov
	fstp(to32f(ebx+0x14));
	fld(to32f(esi+eax*8+0xC));
	eax = to32i(ebx+8); //mov
	fstp(to32f(ebx+0x18));
	add(ecx, eax);
	esi = to32i(ebx); //mov
	eax = ecx; //mov
	to32i(ebx+4) = ecx; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(esi, eax);
	eax = to32i(ebx+0x1B); //mov
	to32i(ebx) = esi; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0x1D) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5E76:
	esi = (int32_t)(intptr_t)(edx-4); //lea
	edx = to32i(eax+0x18); //mov
	to32i(esi) = edx; //mov
	sub(esi, (int32_t)4);
	edx = to32i(eax+0x14); //mov
	to32i(esi) = edx; //mov
	goto loc_4B5DDE;
loc_4B5E8B:
	edx = to32i(ebx+8); //mov
	ecx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(ecx, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	push32(ecx);
	shl(eax, (int32_t)0x10);
	push32(edx);
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBEA4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp+0x10); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B5DEE;
}
Fn(void) Game::_sub_4B5EC4()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B5ED0()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	eax = to32i(esp+0x28); //mov
	edi = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x30); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x1D); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B5FE4;
loc_4B5EF2:
	cmp(to8i(ebx+0x1C), (int8_t)0);
	if (jz())
		goto loc_4B5F0A;
	eax = to32i(ebx+0x10); //mov
	to32i(esi-4) = eax; //mov
	sub(esi, (int32_t)4);
	eax = to32i(ebx+0xC); //mov
	to32i(esi-4) = eax; //mov
	sub(esi, (int32_t)4);
loc_4B5F0A:
	ebp = to32i(esp+0x34); //mov
	to32i(ebx) = 0; //mov
	dec(edi);
	ebp = to32i(ebp+0); //mov
	test(edi, edi);
	if (jle())
		goto loc_4B5F4F;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBEA4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp+0x10); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B5F4F:
	xor_(edx, edx);
	eax = to32i(ebx+4); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = eax; //mov
	fild(to64i(esp));
	fmul(to64f(dbl_4D1830));
	edx = to32i(ebx); //mov
	fld_st(0);
	fld1();
	fsubrp_st(1, 0);
	eax = edx; //mov
	fld(to32f(esi+eax*8+8));
	fmul_st(0, 2);
	fld(to32f(esi+eax*8));
	fmul_st(0, 2);
	faddp_st(1, 0);
	fstp(to32f(ebp+edi*8+0));
	fmul(to32f(esi+edx*8+4));
	fld(to32f(esi+edx*8+0xC));
	fmulp_st(2, 0);
	faddp_st(1, 0);
	fstp(to32f(ebp+edi*8+4));
	fld(to32f(esi+edx*8+8));
	eax = to32i(ebx+8); //mov
	ecx = to32i(ebx+4); //mov
	edi = to32i(ebx); //mov
	ebp = to32i(ebx+8); //mov
	fstp(to32f(ebx+0x14));
	fld(to32f(esi+edx*8+0xC));
	add(ecx, eax);
	fstp(to32f(ebx+0x18));
	eax = ecx; //mov
	to32i(ebx+4) = ecx; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edi, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = edi; //mov
	cmp(eax, ebp);
	if (jb())
		goto loc_4B5FF9;
	eax = to32i(ebx); //mov
	to8i(ebx+0x1C) = 1; //mov
	fld(to32f(esi+eax*8));
	eax = to32i(ebx); //mov
	fstp(to32f(ebx+0xC));
	edx = to32i(esi+eax*8+4); //mov
	to32i(ebx+0x10) = edx; //mov
	to8i(ebx+0x1D) = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B5FE4:
	esi = (int32_t)(intptr_t)(edx-4); //lea
	edx = to32i(eax+0x18); //mov
	to32i(esi) = edx; //mov
	sub(esi, (int32_t)4);
	edx = to32i(eax+0x14); //mov
	to32i(esi) = edx; //mov
	goto loc_4B5EF2;
loc_4B5FF9:
	to8i(ebx+0x1C) = 0; //mov
	to8i(ebx+0x1D) = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B600C()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B604F;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B604F;
loc_4B602B:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B6081;
	if (jbe())
		goto loc_4B6098;
	edx = to32i(eax+0x24); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B5D40; //mov
	eax = to32i(eax+0x28); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5DBC; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B604F:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B602B;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B6066;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B602B;
loc_4B6066:
	to8i(eax+0x1C) = 0; //mov
	to8i(eax+0x1D) = 0; //mov
	to8i(eax+0x1E) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B602B;
loc_4B6081:
	edx = to32i(eax+0x24); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B5D90; //mov
	eax = to32i(eax+0x28); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5ED0; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6098:
	edx = to32i(eax+0x24); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B5D88; //mov
	eax = to32i(eax+0x28); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B5EC4; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B60B0()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0x1C) = 0; //mov
	to8i(eax+0x1D) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x1E) = 0; //mov
	to32i(eax+0x20) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x24) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x28) = edx; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B600C; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B60F0()
{
	push32(ebx);
	sub(esp, (int32_t)8);
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x10); //mov
	shl(ebx, (int32_t)3);
	edx = to32i(esp+0x18); //mov
	add(ebx, ecx);
	eax = ecx; //mov
	cmp(ecx, ebx);
	if (jnb())
		goto loc_4B614C;
loc_4B610B:
	fld(to32f(eax+4));
	fadd(to32f(eax));
	fld_st(0);
	fmul(to64f(dbl_4D1838));
	fst_st(1);
	fadd(to64f(dbl_4D1840));
	fstp_st(1);
	fstp(to32f(eax));
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFFFFF);
	add(eax, (int32_t)8);
	cmp(ecx, (int32_t)0x7F);
	if (jbe())
		goto loc_4B6156;
	cmp(ecx, (int32_t)0xFFF80);
	if (jnb())
		goto loc_4B6156;
	cmp(ecx, (int32_t)0x80000);
	if (jnb())
		goto loc_4B6151;
	to8i(edx) = 0xFF; //mov
loc_4B6147:
	inc(edx);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B610B;
loc_4B614C:
	add(esp, (int32_t)8);
	pop32(ebx);
	return;
loc_4B6151:
	to8i(edx) = 0; //mov
	goto loc_4B6147;
loc_4B6156:
	add(cl, (int8_t)0x80);
	to8i(edx) = cl; //mov
	inc(edx);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B610B;
	add(esp, (int32_t)8);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6170()
{
	push32(ebx);
	sub(esp, (int32_t)8);
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x10); //mov
	shl(ebx, (int32_t)3);
	edx = to32i(esp+0x18); //mov
	add(ebx, ecx);
	eax = ecx; //mov
	cmp(ecx, ebx);
	if (jnb())
		goto loc_4B61C4;
loc_4B618B:
	fld(to32f(eax));
	fld_st(0);
	fadd(to64f(dbl_4D1848));
	fstp_st(1);
	fstp(to32f(eax));
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFFFFF);
	add(eax, (int32_t)4);
	cmp(ecx, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4B61CE;
	cmp(ecx, (int32_t)0xF8000);
	if (jnb())
		goto loc_4B61CE;
	cmp(ecx, (int32_t)0x80000);
	if (jnb())
		goto loc_4B61C9;
	to8i(edx) = 0xFF; //mov
loc_4B61BF:
	inc(edx);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B618B;
loc_4B61C4:
	add(esp, (int32_t)8);
	pop32(ebx);
	return;
loc_4B61C9:
	to8i(edx) = 0; //mov
	goto loc_4B61BF;
loc_4B61CE:
	shr(ecx, (int32_t)8);
	and_(ecx, (int32_t)0xFF);
	add(ecx, (int32_t)0x80);
	to8i(edx) = cl; //mov
	inc(edx);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B618B;
	add(esp, (int32_t)8);
	pop32(ebx);
}
Fn(void) Game::_sub_4B61F0()
{
	push32(ebx);
	sub(esp, (int32_t)8);
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x10); //mov
	shl(ebx, (int32_t)3);
	edx = to32i(esp+0x18); //mov
	add(ebx, ecx);
	eax = ecx; //mov
	cmp(ecx, ebx);
	if (jnb())
		goto loc_4B6253;
loc_4B620B:
	fld(to32f(eax+4));
	fadd(to32f(eax));
	fld_st(0);
	fmul(to64f(dbl_4D1850));
	fst_st(1);
	fadd(to64f(dbl_4D1858));
	fstp_st(1);
	fstp(to32f(eax));
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFFFFF);
	add(eax, (int32_t)8);
	cmp(ecx, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4B625F;
	cmp(ecx, (int32_t)0xF8000);
	if (jnb())
		goto loc_4B625F;
	cmp(ecx, (int32_t)0x80000);
	if (jnb())
		goto loc_4B6258;
	to16i(edx) = 0x7FFF; //mov
loc_4B624C:
	add(edx, (int32_t)2);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B620B;
loc_4B6253:
	add(esp, (int32_t)8);
	pop32(ebx);
	return;
loc_4B6258:
	to16i(edx) = 0x8000; //mov
	goto loc_4B624C;
loc_4B625F:
	to16i(edx) = cx; //mov
	add(edx, (int32_t)2);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B620B;
	add(esp, (int32_t)8);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6270()
{
	push32(ebx);
	sub(esp, (int32_t)8);
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x10); //mov
	shl(ebx, (int32_t)3);
	edx = to32i(esp+0x18); //mov
	add(ebx, ecx);
	eax = ecx; //mov
	cmp(ecx, ebx);
	if (jnb())
		goto loc_4B62C8;
loc_4B628B:
	fld(to32f(eax));
	fld_st(0);
	fadd(to64f(dbl_4D1860));
	fstp_st(1);
	fstp(to32f(eax));
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFFFFF);
	add(eax, (int32_t)4);
	cmp(ecx, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4B62D4;
	cmp(ecx, (int32_t)0xF8000);
	if (jnb())
		goto loc_4B62D4;
	cmp(ecx, (int32_t)0x80000);
	if (jnb())
		goto loc_4B62CD;
	to16i(edx) = 0x7FFF; //mov
loc_4B62C1:
	add(edx, (int32_t)2);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B628B;
loc_4B62C8:
	add(esp, (int32_t)8);
	pop32(ebx);
	return;
loc_4B62CD:
	to16i(edx) = 0x8000; //mov
	goto loc_4B62C1;
loc_4B62D4:
	to16i(edx) = cx; //mov
	add(edx, (int32_t)2);
	cmp(eax, ebx);
	if (jb())
		goto loc_4B628B;
	add(esp, (int32_t)8);
	pop32(ebx);
}
Fn(void) Game::_sub_4B62E4()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ecx);
	push32(edi);
	edi = to32i(ebp+8); //mov
	ecx = to32i(ebp+0xC); //mov
	eax = 0; //mov
	cmp(ecx, (int32_t)0xF);
	if (jle())
		goto loc_4B6337;
	sub(ecx, (int32_t)0xF);
loc_4B62FD:
	to32i(edi) = eax; //mov
	to32i(edi+4) = eax; //mov
	to32i(edi+8) = eax; //mov
	to32i(edi+0xC) = eax; //mov
	to32i(edi+0x10) = eax; //mov
	to32i(edi+0x14) = eax; //mov
	to32i(edi+0x18) = eax; //mov
	to32i(edi+0x1C) = eax; //mov
	to32i(edi+0x20) = eax; //mov
	to32i(edi+0x24) = eax; //mov
	to32i(edi+0x28) = eax; //mov
	to32i(edi+0x2C) = eax; //mov
	to32i(edi+0x30) = eax; //mov
	to32i(edi+0x34) = eax; //mov
	to32i(edi+0x38) = eax; //mov
	to32i(edi+0x3C) = eax; //mov
	add(edi, (int32_t)0x40);
	sub(ecx, (int32_t)0x10);
	if (jg())
		goto loc_4B62FD;
	add(ecx, (int32_t)0xF);
loc_4B6337:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4B6346;
	to32i(edi) = eax; //mov
	add(edi, (int32_t)4);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B6337;
loc_4B6346:
	pop32(edi);
	pop32(ecx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B634C()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+0x10) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B63A9; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0x14) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6370; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6370()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0xC); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi) = eax; //mov
	to32i(esi+4) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0x10); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi+8) = eax; //mov
	to32i(esi+0xC) = eax; //mov
	pop32(esi);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B63A9()
{
	//MMX
}
Fn(void) Game::_sub_4B644C()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+8) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6493; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0xC) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6470; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6470()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0x10); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0xC); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi) = eax; //mov
	to32i(esi+4) = eax; //mov
	pop32(esi);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6493()
{
	//MMX
}
Fn(void) Game::_sub_4B651C()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+0x10) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6579; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0x14) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6540; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6540()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0xC); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi) = eax; //mov
	to32i(esi+4) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0x10); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi+8) = eax; //mov
	to32i(esi+0xC) = eax; //mov
	pop32(esi);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6579()
{
	//MMX
}
Fn(void) Game::_sub_4B6610()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	to32i(esi+8) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6657; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esi+0xC) = eax; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6634; //mov
	pop32(esi);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6634()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(esi);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0x10); //mov
	shl(eax, (int32_t)0x18);
	ebx = to32i(ebp+0xC); //mov
	ax = bx; //mov
	shl(ax, (int16_t)8);
	to32i(esi) = eax; //mov
	to32i(esi+4) = eax; //mov
	pop32(esi);
	pop32(ebx);
	pop32(eax);
	leave();
}
Fn(void) Game::_sub_4B6657()
{
	//MMX
}
Fn(void) Game::_sub_4B66F0()
{
	//MMX
}
Fn(void) Game::_sub_4B6724()
{
	//MMX
}
