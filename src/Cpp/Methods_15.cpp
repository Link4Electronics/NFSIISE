#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_4B67D4()
{
	//MMX
}
Fn(void) Game::_sub_4B6804()
{
	//MMX
}
Fn(void) Game::_sub_4B6884()
{
	//MMX
}
Fn(void) Game::_sub_4B68E0()
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
	ebx = to32i(edx+0xD); //mov
	inc(eax);
	sar(ebx, (int32_t)0x18);
	esi = eax; //mov
	add(eax, ebx);
	bl = to8i(edx+0xF); //mov
	ecx = edx; //mov
	test(bl, bl);
	if (jnz())
		goto loc_4B690D;
	inc(eax);
loc_4B690D:
	edi = to32i(esp+0x14); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx, edi);
	add(edx, to32i(ecx+4));
	shr(edx, (int32_t)0x10);
	sub(edx, esi);
	to8i(ecx+0x10) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6928()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B6930()
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
	bl = to8i(edx+0xF); //mov
	inc(eax);
	test(bl, bl);
	if (jnz())
		goto loc_4B6951;
	inc(eax);
loc_4B6951:
	edx = to32i(ecx+0xB); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B695C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0xF); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B69EC;
loc_4B697A:
	ebp = to32i(esp+0x24); //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jnz())
		goto loc_4B69F6;
loc_4B6984:
	eax = to32i(ebx); //mov
	edx = 0xFFFF; //mov
	ecx = to32i(ebx+4); //mov
	eax = to8i(esi+eax); //movsx
	sub(edx, ecx);
	shl(eax, (int32_t)8);
	imul32(eax, edx);
	edx = to32i(ebx); //mov
	edx = to8i(edx+esi+1); //movsx
	shl(edx, (int32_t)8);
	imul32(edx, ecx);
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(eax, edx);
	sar(eax, (int32_t)8);
	to8i(edi+ebp) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax+1); //mov
	to8i(ebx+0xD) = al; //mov
	esi = to32i(ebx+4); //mov
	add(esi, to32i(ebx+8));
	edi = to32i(ebx); //mov
	eax = esi; //mov
	to32i(ebx+4) = esi; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edi, eax);
	eax = to32i(ebx+0xD); //mov
	to32i(ebx) = edi; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0xF) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B69EC:
	esi = (int32_t)(intptr_t)(edx-1); //lea
	al = to8i(eax+0xD); //mov
	to8i(esi) = al; //mov
	goto loc_4B697A;
loc_4B69F6:
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBF34(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B6984;
}
Fn(void) Game::_sub_4B6A30()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B6A3C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0xF); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B6B25;
loc_4B6A5E:
	cmp(to8i(ebx+0xE), (int8_t)0);
	if (jz())
		goto loc_4B6A6A;
	dec(esi);
	al = to8i(ebx+0xC); //mov
	to8i(esi) = al; //mov
loc_4B6A6A:
	ebp = to32i(esp+0x24); //mov
	to32i(ebx) = 0; //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jz())
		goto loc_4B6AAC;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBF34(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B6AAC:
	eax = to32i(ebx); //mov
	eax = to8i(esi+eax); //movsx
	ecx = to32i(ebx+4); //mov
	edx = eax; //mov
	eax = 0xFFFF; //mov
	shl(edx, (int32_t)8);
	sub(eax, ecx);
	imul32(eax, edx);
	edx = to32i(ebx); //mov
	edx = to8i(edx+esi+1); //movsx
	shl(edx, (int32_t)8);
	imul32(edx, ecx);
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(eax, edx);
	sar(eax, (int32_t)8);
	to8i(edi+ebp) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax+1); //mov
	to8i(ebx+0xD) = al; //mov
	edi = to32i(ebx+4); //mov
	eax = to32i(ebx+8); //mov
	ebp = to32i(ebx); //mov
	add(edi, eax);
	edx = to32i(ebx+8); //mov
	eax = edi; //mov
	to32i(ebx+4) = edi; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(ebp, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = ebp; //mov
	cmp(eax, edx);
	if (jb())
		goto loc_4B6B32;
	add(esi, to32i(ebx));
	to8i(ebx+0xE) = 1; //mov
	al = to8i(esi); //mov
	to8i(ebx+0xC) = al; //mov
	to8i(ebx+0xF) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6B25:
	esi = (int32_t)(intptr_t)(edx-1); //lea
	al = to8i(eax+0xD); //mov
	to8i(esi) = al; //mov
	goto loc_4B6A5E;
loc_4B6B32:
	to8i(ebx+0xE) = 0; //mov
	to8i(ebx+0xF) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6B44()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B6B87;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B6B87;
loc_4B6B63:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B6BB9;
	if (jbe())
		goto loc_4B6BD0;
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B68E0; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B695C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6B87:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B6B63;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B6B9E;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B6B63;
loc_4B6B9E:
	to8i(eax+0xE) = 0; //mov
	to8i(eax+0xF) = 0; //mov
	to8i(eax+0x10) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B6B63;
loc_4B6BB9:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B6930; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6A3C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6BD0:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B6928; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6A30; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6BE8()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0xE) = 0; //mov
	to8i(eax+0xD) = 0; //mov
	to8i(eax+0xF) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x10) = 1; //mov
	to32i(eax+0x14) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x1C) = edx; //mov
	eax = to32i(eax+0x14); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6B44; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B6C30()
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
	ebx = to32i(edx+0xF); //mov
	inc(eax);
	sar(ebx, (int32_t)0x18);
	esi = eax; //mov
	add(eax, ebx);
	bl = to8i(edx+0x11); //mov
	ecx = edx; //mov
	test(bl, bl);
	if (jnz())
		goto loc_4B6C5D;
	inc(eax);
loc_4B6C5D:
	edi = to32i(esp+0x14); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx, edi);
	add(edx, to32i(ecx+4));
	shr(edx, (int32_t)0x10);
	sub(edx, esi);
	to8i(ecx+0x12) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6C78()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B6C80()
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
	bl = to8i(edx+0x11); //mov
	inc(eax);
	test(bl, bl);
	if (jnz())
		goto loc_4B6CA1;
	inc(eax);
loc_4B6CA1:
	edx = to32i(ecx+0xD); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6CAC()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	eax = to32i(esp+0x1C); //mov
	edi = to32i(esp+0x20); //mov
	edx = to32i(esp+0x24); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x11); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B6D87;
loc_4B6CCE:
	ebp = to32i(esp+0x28); //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jnz())
		goto loc_4B6D9A;
loc_4B6CDC:
	edx = to32i(ebx); //mov
	eax = to8i(esi+edx*2); //movsx
	shl(eax, (int32_t)8);
	ecx = to32i(ebx+4); //mov
	to32i(esp+4) = eax; //mov
	eax = 0xFFFF; //mov
	sub(eax, ecx);
	imul32(eax, to32i(esp+4));
	edx = to8i(esi+edx*2+2); //movsx
	shl(edx, (int32_t)8);
	imul32(edx, to32i(ebx+4));
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(edi, edi);
	add(eax, edx);
	add(ebp, edi);
	sar(eax, (int32_t)8);
	to8i(ebp+0) = al; //mov
	edi = to32i(ebx); //mov
	eax = 0xFFFF; //mov
	ecx = to32i(ebx+4); //mov
	edx = to8i(esi+edi*2+1); //movsx
	sub(eax, ecx);
	shl(edx, (int32_t)8);
	imul32(eax, edx);
	edx = to32i(esi+edi*2); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)8);
	imul32(edx, ecx);
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(eax, edx);
	sar(eax, (int32_t)8);
	to8i(ebp+1) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax*2+2); //mov
	to8i(ebx+0xE) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax*2+3); //mov
	to8i(ebx+0xF) = al; //mov
	ebp = to32i(ebx+4); //mov
	add(ebp, to32i(ebx+8));
	edx = to32i(ebx); //mov
	eax = ebp; //mov
	to32i(ebx+4) = ebp; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edx, eax);
	eax = to32i(ebx+0xF); //mov
	to32i(ebx) = edx; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0x11) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6D87:
	esi = (int32_t)(intptr_t)(edx-1); //lea
	dl = to8i(eax+0xF); //mov
	to8i(esi) = dl; //mov
	dec(esi);
	al = to8i(eax+0xE); //mov
	to8i(esi) = al; //mov
	goto loc_4B6CCE;
loc_4B6D9A:
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBFB4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B6CDC;
}
Fn(void) Game::_sub_4B6DD4()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B6DE0()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x11); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B6F12;
loc_4B6E02:
	cmp(to8i(ebx+0x10), (int8_t)0);
	if (jz())
		goto loc_4B6E14;
	dec(esi);
	al = to8i(ebx+0xD); //mov
	to8i(esi) = al; //mov
	dec(esi);
	al = to8i(ebx+0xC); //mov
	to8i(esi) = al; //mov
loc_4B6E14:
	ebp = to32i(esp+0x24); //mov
	to32i(ebx) = 0; //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jz())
		goto loc_4B6E56;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BBFB4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B6E56:
	edx = to32i(ebx); //mov
	ecx = 0xFFFF; //mov
	eax = to8i(esi+edx*2); //movsx
	sub(ecx, to32i(ebx+4));
	shl(eax, (int32_t)8);
	imul32(eax, ecx);
	edx = to8i(esi+edx*2+2); //movsx
	shl(edx, (int32_t)8);
	imul32(edx, to32i(ebx+4));
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(edi, edi);
	add(eax, edx);
	add(ebp, edi);
	sar(eax, (int32_t)8);
	to8i(ebp+0) = al; //mov
	edi = to32i(ebx); //mov
	eax = 0xFFFF; //mov
	ecx = to32i(ebx+4); //mov
	edx = to8i(esi+edi*2+1); //movsx
	sub(eax, ecx);
	shl(edx, (int32_t)8);
	imul32(eax, edx);
	edx = to32i(esi+edi*2); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)8);
	imul32(edx, ecx);
	shr(eax, (int32_t)0x10);
	shr(edx, (int32_t)0x10);
	add(eax, edx);
	sar(eax, (int32_t)8);
	to8i(ebp+1) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax*2+2); //mov
	to8i(ebx+0xE) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax*2+3); //mov
	to8i(ebx+0xF) = al; //mov
	ebp = to32i(ebx+4); //mov
	eax = to32i(ebx+8); //mov
	edx = to32i(ebx); //mov
	add(ebp, eax);
	ecx = to32i(ebx+8); //mov
	eax = ebp; //mov
	to32i(ebx+4) = ebp; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edx, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = edx; //mov
	cmp(eax, ecx);
	if (jb())
		goto loc_4B6F25;
	eax = to32i(ebx); //mov
	to8i(ebx+0x10) = 1; //mov
	al = to8i(esi+eax*2); //mov
	to8i(ebx+0xC) = al; //mov
	eax = to32i(ebx); //mov
	al = to8i(esi+eax*2+1); //mov
	to8i(ebx+0xD) = al; //mov
	to8i(ebx+0x11) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6F12:
	esi = (int32_t)(intptr_t)(edx-1); //lea
	dl = to8i(eax+0xF); //mov
	to8i(esi) = dl; //mov
	dec(esi);
	al = to8i(eax+0xE); //mov
	to8i(esi) = al; //mov
	goto loc_4B6E02;
loc_4B6F25:
	to8i(ebx+0x10) = 0; //mov
	to8i(ebx+0x11) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6F38()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B6F7B;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B6F7B;
loc_4B6F57:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B6FAD;
	if (jbe())
		goto loc_4B6FC4;
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B6C30; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6CAC; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6F7B:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B6F57;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B6F92;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B6F57;
loc_4B6F92:
	to8i(eax+0x10) = 0; //mov
	to8i(eax+0x11) = 0; //mov
	to8i(eax+0x12) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B6F57;
loc_4B6FAD:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B6C80; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6DE0; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B6FC4:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B6C78; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6DD4; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B6FDC()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0x10) = 0; //mov
	to8i(eax+0x11) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x12) = 0; //mov
	to32i(eax+0x14) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x1C) = edx; //mov
	eax = to32i(eax+0x14); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B6F38; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B7020()
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
	ebx = to32i(edx+0xF); //mov
	inc(eax);
	sar(ebx, (int32_t)0x18);
	esi = eax; //mov
	add(eax, ebx);
	bl = to8i(edx+0x11); //mov
	ecx = edx; //mov
	test(bl, bl);
	if (jnz())
		goto loc_4B704D;
	inc(eax);
loc_4B704D:
	edi = to32i(esp+0x14); //mov
	edx = to32i(ecx+8); //mov
	imul32(edx, edi);
	add(edx, to32i(ecx+4));
	shr(edx, (int32_t)0x10);
	sub(edx, esi);
	to8i(ecx+0x12) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7068()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B7070()
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
	bl = to8i(edx+0x11); //mov
	inc(eax);
	test(bl, bl);
	if (jnz())
		goto loc_4B7091;
	inc(eax);
loc_4B7091:
	edx = to32i(ecx+0xD); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B709C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x11); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B713F;
loc_4B70BE:
	ebp = to32i(esp+0x24); //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jnz())
		goto loc_4B714E;
loc_4B70CC:
	eax = to32i(ebx); //mov
	edx = 0xFFFF; //mov
	ecx = to32i(ebx+4); //mov
	eax = to16i(esi+eax*2); //movsx
	sub(edx, ecx);
	imul32(eax, edx);
	shr(eax, (int32_t)0x10);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	to16i(eax+ebp) = dx; //mov
	edx = to32i(ebx); //mov
	edx = to32i(esi+edx*2); //mov
	edi = to32i(ebx+4); //mov
	sar(edx, (int32_t)0x10);
	imul32(edi, edx);
	shr(edi, (int32_t)0x10);
	edx = to16i(eax+ebp); //movsx
	add(edx, edi);
	to16i(eax+ebp) = dx; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*2+2); //mov
	to16i(ebx+0xE) = ax; //mov
	ebp = to32i(ebx+4); //mov
	add(ebp, to32i(ebx+8));
	edx = to32i(ebx); //mov
	eax = ebp; //mov
	to32i(ebx+4) = ebp; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edx, eax);
	eax = to32i(ebx+0xF); //mov
	to32i(ebx) = edx; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0x11) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B713F:
	esi = (int32_t)(intptr_t)(edx-2); //lea
	ax = to16i(eax+0xE); //mov
	to16i(esi) = ax; //mov
	goto loc_4B70BE;
loc_4B714E:
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BC054(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B70CC;
}
Fn(void) Game::_sub_4B7188()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B7194()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x11); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B728B;
loc_4B71B6:
	cmp(to8i(ebx+0x10), (int8_t)0);
	if (jz())
		goto loc_4B71C6;
	sub(esi, (int32_t)2);
	ax = to16i(ebx+0xC); //mov
	to16i(esi) = ax; //mov
loc_4B71C6:
	ebp = to32i(esp+0x24); //mov
	to32i(ebx) = 0; //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jz())
		goto loc_4B7208;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BC054(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B7208:
	eax = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	edx = to16i(esi+eax*2); //movsx
	eax = 0xFFFF; //mov
	sub(eax, ecx);
	imul32(eax, edx);
	edx = (int32_t)(intptr_t)(edi+edi); //lea
	shr(eax, (int32_t)0x10);
	to16i(edx+ebp) = ax; //mov
	eax = to32i(ebx); //mov
	eax = to32i(esi+eax*2); //mov
	edi = to32i(ebx+4); //mov
	sar(eax, (int32_t)0x10);
	imul32(edi, eax);
	shr(edi, (int32_t)0x10);
	eax = to16i(edx+ebp); //movsx
	add(eax, edi);
	to16i(edx+ebp) = ax; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*2+2); //mov
	to16i(ebx+0xE) = ax; //mov
	ebp = to32i(ebx+4); //mov
	eax = to32i(ebx+8); //mov
	edx = to32i(ebx); //mov
	add(ebp, eax);
	ecx = to32i(ebx+8); //mov
	eax = ebp; //mov
	to32i(ebx+4) = ebp; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edx, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = edx; //mov
	cmp(eax, ecx);
	if (jb())
		goto loc_4B729A;
	eax = to32i(ebx); //mov
	to8i(ebx+0x10) = 1; //mov
	ax = to16i(esi+eax*2); //mov
	to16i(ebx+0xC) = ax; //mov
	to8i(ebx+0x11) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B728B:
	esi = (int32_t)(intptr_t)(edx-2); //lea
	ax = to16i(eax+0xE); //mov
	to16i(esi) = ax; //mov
	goto loc_4B71B6;
loc_4B729A:
	to8i(ebx+0x10) = 0; //mov
	to8i(ebx+0x11) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B72AC()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B72EF;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B72EF;
loc_4B72CB:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B7321;
	if (jbe())
		goto loc_4B7338;
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B7020; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B709C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B72EF:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B72CB;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B7306;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B72CB;
loc_4B7306:
	to8i(eax+0x10) = 0; //mov
	to8i(eax+0x11) = 0; //mov
	to8i(eax+0x12) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B72CB;
loc_4B7321:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B7070; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B7194; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B7338:
	edx = to32i(eax+0x18); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B7068; //mov
	eax = to32i(eax+0x1C); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B7188; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7350()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0x10) = 0; //mov
	to16i(eax+0xE) = 0; //mov
	to8i(eax+0x11) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x12) = 1; //mov
	to32i(eax+0x14) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x1C) = edx; //mov
	eax = to32i(eax+0x14); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B72AC; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B73A0()
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
		goto loc_4B73CD;
	inc(eax);
loc_4B73CD:
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
Fn(void) Game::_sub_4B73E8()
{
	eax = to32i(esp+8); //mov
}
Fn(void) Game::_sub_4B73F0()
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
		goto loc_4B7411;
	inc(eax);
loc_4B7411:
	edx = to32i(ecx+0x11); //mov
	sar(edx, (int32_t)0x18);
	sub(eax, edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B741C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x15); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B750F;
loc_4B743E:
	ebp = to32i(esp+0x24); //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jnz())
		goto loc_4B7528;
loc_4B744C:
	eax = to32i(ebx); //mov
	edx = 0xFFFF; //mov
	ecx = to32i(ebx+4); //mov
	eax = to16i(esi+eax*4); //movsx
	sub(edx, ecx);
	imul32(eax, edx);
	shr(eax, (int32_t)0x10);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	to16i(eax+ebp) = dx; //mov
	edx = to32i(ebx); //mov
	edx = to32i(esi+edx*4+2); //mov
	ecx = edx; //mov
	edi = to32i(ebx+4); //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, edi);
	edx = to16i(eax+ebp); //movsx
	shr(ecx, (int32_t)0x10);
	add(edx, ecx);
	to16i(eax+ebp) = dx; //mov
	edx = to32i(ebx); //mov
	ecx = 0xFFFF; //mov
	edi = to32i(ebx+4); //mov
	edx = to32i(esi+edx*4); //mov
	sub(ecx, edi);
	sar(edx, (int32_t)0x10);
	imul32(edx, ecx);
	shr(edx, (int32_t)0x10);
	to16i(eax+ebp+2) = dx; //mov
	edx = to32i(ebx); //mov
	edx = to32i(esi+edx*4+4); //mov
	edi = edx; //mov
	ecx = to32i(ebx+4); //mov
	sar(edi, (int32_t)0x10);
	imul32(edi, ecx);
	edx = to32i(eax+ebp); //mov
	sar(edx, (int32_t)0x10);
	shr(edi, (int32_t)0x10);
	add(edx, edi);
	to16i(eax+ebp+2) = dx; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*4+4); //mov
	to16i(ebx+0x10) = ax; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*4+6); //mov
	to16i(ebx+0x12) = ax; //mov
	esi = to32i(ebx+4); //mov
	add(esi, to32i(ebx+8));
	edi = to32i(ebx); //mov
	eax = esi; //mov
	to32i(ebx+4) = esi; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edi, eax);
	eax = to32i(ebx+0x13); //mov
	to32i(ebx) = edi; //mov
	sar(eax, (int32_t)0x18);
	to8i(ebx+0x15) = 1; //mov
	to32i(ebx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B750F:
	esi = (int32_t)(intptr_t)(edx-2); //lea
	dx = to16i(eax+0x12); //mov
	to16i(esi) = dx; //mov
	sub(esi, (int32_t)2);
	ax = to16i(eax+0x10); //mov
	to16i(esi) = ax; //mov
	goto loc_4B743E;
loc_4B7528:
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BC0D4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
	goto loc_4B744C;
}
Fn(void) Game::_sub_4B7560()
{
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = eax; //mov
}
Fn(void) Game::_sub_4B756C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x20); //mov
	ebx = eax; //mov
	cl = to8i(eax+0x15); //mov
	esi = edx; //mov
	test(cl, cl);
	if (jnz())
		goto loc_4B76C6;
loc_4B758E:
	cmp(to8i(ebx+0x14), (int8_t)0);
	if (jz())
		goto loc_4B75A8;
	sub(esi, (int32_t)2);
	ax = to16i(ebx+0xE); //mov
	to16i(esi) = ax; //mov
	sub(esi, (int32_t)2);
	ax = to16i(ebx+0xC); //mov
	to16i(esi) = ax; //mov
loc_4B75A8:
	ebp = to32i(esp+0x24); //mov
	to32i(ebx) = 0; //mov
	ebp = to32i(ebp+0); //mov
	dec(edi);
	if (jz())
		goto loc_4B75EA;
	ecx = to32i(ebx+8); //mov
	edx = to32i(ebx+8); //mov
	eax = to32i(ebx+4); //mov
	shl(edx, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	push32(edx);
	shl(eax, (int32_t)0x10);
	push32(ecx);
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebx);
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4BC0D4(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	eax = to32i(esp); //mov
	shr(eax, (int32_t)0x10);
	to32i(ebx+4) = eax; //mov
loc_4B75EA:
	eax = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	edx = to16i(esi+eax*4); //movsx
	eax = 0xFFFF; //mov
	sub(eax, ecx);
	imul32(eax, edx);
	shr(eax, (int32_t)0x10);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	to16i(eax+ebp) = dx; //mov
	edx = to32i(ebx); //mov
	edx = to32i(esi+edx*4+2); //mov
	edi = to32i(ebx+4); //mov
	sar(edx, (int32_t)0x10);
	imul32(edx, edi);
	shr(edx, (int32_t)0x10);
	edi = to16i(eax+ebp); //movsx
	add(edi, edx);
	to16i(eax+ebp) = di; //mov
	edx = to32i(ebx); //mov
	ecx = to32i(ebx+4); //mov
	edi = to32i(esi+edx*4); //mov
	edx = 0xFFFF; //mov
	sar(edi, (int32_t)0x10);
	sub(edx, ecx);
	imul32(edi, edx);
	shr(edi, (int32_t)0x10);
	to16i(eax+ebp+2) = di; //mov
	edx = to32i(ebx); //mov
	edx = to32i(esi+edx*4+4); //mov
	edi = to32i(ebx+4); //mov
	sar(edx, (int32_t)0x10);
	imul32(edx, edi);
	edi = to32i(eax+ebp); //mov
	shr(edx, (int32_t)0x10);
	sar(edi, (int32_t)0x10);
	add(edi, edx);
	to16i(eax+ebp+2) = di; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*4+4); //mov
	to16i(ebx+0x10) = ax; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*4+6); //mov
	to16i(ebx+0x12) = ax; //mov
	ebp = to32i(ebx+4); //mov
	eax = to32i(ebx+8); //mov
	edx = to32i(ebx); //mov
	add(ebp, eax);
	ecx = to32i(ebx+8); //mov
	eax = ebp; //mov
	to32i(ebx+4) = ebp; //mov
	shr(eax, (int32_t)0x10);
	to16i(ebx+6) = 0; //mov
	add(edx, eax);
	eax = to32i(ebx+4); //mov
	to32i(ebx) = edx; //mov
	cmp(eax, ecx);
	if (jb())
		goto loc_4B76DF;
	eax = to32i(ebx); //mov
	to8i(ebx+0x14) = 1; //mov
	ax = to16i(esi+eax*4); //mov
	to16i(ebx+0xC) = ax; //mov
	eax = to32i(ebx); //mov
	ax = to16i(esi+eax*4+2); //mov
	to16i(ebx+0xE) = ax; //mov
	to8i(ebx+0x15) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B76C6:
	esi = (int32_t)(intptr_t)(edx-2); //lea
	dx = to16i(eax+0x12); //mov
	to16i(esi) = dx; //mov
	sub(esi, (int32_t)2);
	ax = to16i(eax+0x10); //mov
	to16i(esi) = ax; //mov
	goto loc_4B758E;
loc_4B76DF:
	to8i(ebx+0x14) = 0; //mov
	to8i(ebx+0x15) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B76F0()
{
	push32(ebx);
	push32(esi);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ebx = to32i(ecx+8); //mov
	eax = ecx; //mov
	cmp(ebx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B7733;
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_4B7733;
loc_4B770F:
	to32i(eax+8) = edx; //mov
	cmp(edx, (int32_t)0x10000);
	if (jb())
		goto loc_4B7765;
	if (jbe())
		goto loc_4B777C;
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B73A0; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B741C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B7733:
	esi = to32i(eax+8); //mov
	cmp(edx, esi);
	if (jz())
		goto loc_4B770F;
	cmp(esi, (int32_t)0x10000);
	if (jbe())
		goto loc_4B774A;
	cmp(edx, (int32_t)0x10000);
	if (ja())
		goto loc_4B770F;
loc_4B774A:
	to8i(eax+0x14) = 0; //mov
	to8i(eax+0x15) = 0; //mov
	to8i(eax+0x16) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = 0; //mov
	goto loc_4B770F;
loc_4B7765:
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B73F0; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B756C; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
	return;
loc_4B777C:
	edx = to32i(eax+0x1C); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4B73E8; //mov
	eax = to32i(eax+0x20); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B7560; //mov
	xor_(eax, eax);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7794()
{
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	to32i(eax+4) = 0; //mov
	to8i(eax+0x14) = 0; //mov
	to8i(eax+0x15) = 0; //mov
	edx = to32i(esp+8); //mov
	to8i(eax+0x16) = 0; //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(eax+0x1C) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to32i(eax+0x20) = edx; //mov
	eax = to32i(eax+0x18); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4B76F0; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4B77D4()
{
	return;
}
Fn(void) Game::_sub_4B77E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jz())
		goto loc_4B783A;
	edx = (int32_t)(intptr_t)sub_4BC170; //mov
	ecx = (int32_t)(intptr_t)sub_4BC190; //mov
	ebx = (int32_t)(intptr_t)sub_4BC1C0; //mov
	esi = (int32_t)(intptr_t)sub_4BC1E0; //mov
	edi = (int32_t)(intptr_t)sub_4BC200; //mov
	ebp = (int32_t)(intptr_t)sub_4BC230; //mov
	to32i(dword_4DDE14) = edx; //mov
	to32i(dword_4DDE18) = ecx; //mov
	to32i(dword_4DDE1C) = ebx; //mov
	to32i(dword_4DDE20) = esi; //mov
	to32i(dword_4DDE24) = edi; //mov
	to32i(dword_4DDE28) = ebp; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B783A:
	esp -= 4; _sub_4BC250(); esp += 4; //call
	ecx = (int32_t)(intptr_t)sub_4BC280; //mov
	ebx = (int32_t)(intptr_t)sub_4BC2A0; //mov
	esi = (int32_t)(intptr_t)sub_4BC2D0; //mov
	edi = (int32_t)(intptr_t)sub_4BC2F0; //mov
	ebp = (int32_t)(intptr_t)sub_4BC310; //mov
	eax = (int32_t)(intptr_t)sub_4BC340; //mov
	to32i(dword_4DDE14) = ecx; //mov
	to32i(dword_4DDE18) = ebx; //mov
	to32i(dword_4DDE1C) = esi; //mov
	to32i(dword_4DDE20) = edi; //mov
	to32i(dword_4DDE24) = ebp; //mov
	to32i(dword_4DDE28) = eax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7890()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jz())
		goto loc_4B78EA;
	push32(edx);
	edx = (int32_t)(intptr_t)sub_4BC360; //mov
	ecx = (int32_t)(intptr_t)sub_4BC380; //mov
	ebx = (int32_t)(intptr_t)sub_4BC3B0; //mov
	esi = (int32_t)(intptr_t)sub_4BC3D0; //mov
	edi = (int32_t)(intptr_t)sub_4BC3F0; //mov
	ebp = (int32_t)(intptr_t)sub_4BC420; //mov
	to32i(dword_4DDE2C) = edx; //mov
	to32i(dword_4DDE30) = ecx; //mov
	to32i(dword_4DDE34) = ebx; //mov
	to32i(dword_4DDE38) = esi; //mov
	to32i(dword_4DDE3C) = edi; //mov
	to32i(dword_4DDE40) = ebp; //mov
	pop32(edx);
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B78EA:
	ecx = (int32_t)(intptr_t)sub_4BC440; //mov
	ebx = (int32_t)(intptr_t)sub_4BC460; //mov
	esi = (int32_t)(intptr_t)sub_4BC490; //mov
	edi = (int32_t)(intptr_t)sub_4BC4B0; //mov
	ebp = (int32_t)(intptr_t)sub_4BC4D0; //mov
	eax = (int32_t)(intptr_t)sub_4BC500; //mov
	to32i(dword_4DDE2C) = ecx; //mov
	to32i(dword_4DDE30) = ebx; //mov
	to32i(dword_4DDE34) = esi; //mov
	to32i(dword_4DDE38) = edi; //mov
	to32i(dword_4DDE3C) = ebp; //mov
	to32i(dword_4DDE40) = eax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7940()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = 0x40; //mov
	xor_(ebx, ebx);
loc_4B794E:
	eax = ebx; //mov
	edi = ebp; //mov
	cl = bl; //mov
	xor_(edx, edx);
	shl(eax, (int32_t)6);
loc_4B7959:
	esi = edx; //mov
	sar(esi, (int32_t)0x10);
	sar(esi, cl);
	add(eax, (int32_t)4);
	to32i(esp) = esi; //mov
	add(edx, (int32_t)0x10000000);
	fild(to32i(esp));
	fstp(to32f(flt_5B9460+eax));
	cmp(eax, edi);
	if (jnz())
		goto loc_4B7959;
	inc(ebx);
	add(ebp, (int32_t)0x40);
	cmp(ebx, (int32_t)0xD);
	if (jl())
		goto loc_4B794E;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B798C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = 0x40; //mov
	xor_(ebx, ebx);
loc_4B7997:
	eax = ebx; //mov
	edi = ebp; //mov
	cl = bl; //mov
	xor_(edx, edx);
	shl(eax, (int32_t)6);
loc_4B79A2:
	esi = edx; //mov
	sar(esi, (int32_t)0x10);
	sar(esi, cl);
	add(eax, (int32_t)4);
	shl(esi, (int32_t)8);
	add(edx, (int32_t)0x10000000);
	to32i(dword_5B9860+eax) = esi; //mov
	cmp(eax, edi);
	if (jnz())
		goto loc_4B79A2;
	inc(ebx);
	add(ebp, (int32_t)0x40);
	cmp(ebx, (int32_t)0xD);
	if (jl())
		goto loc_4B7997;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4B79D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jz())
		goto loc_4B7A2F;
	esp -= 4; _sub_4B798C(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_4BC6A8; //mov
	ecx = (int32_t)(intptr_t)sub_4BCAF8; //mov
	ebx = (int32_t)(intptr_t)sub_4BCD40; //mov
	esi = (int32_t)(intptr_t)sub_4BCF54; //mov
	edi = (int32_t)(intptr_t)sub_4BD458; //mov
	ebp = (int32_t)(intptr_t)sub_4BD66C; //mov
	to32i(dword_4DDE44) = edx; //mov
	to32i(dword_4DDE48) = ecx; //mov
	to32i(dword_4DDE4C) = ebx; //mov
	to32i(dword_4DDE50) = esi; //mov
	to32i(dword_4DDE54) = edi; //mov
	to32i(dword_4DDE58) = ebp; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4B7A2F:
	esp -= 4; _sub_4B7940(); esp += 4; //call
	ecx = (int32_t)(intptr_t)sub_4BD848; //mov
	ebx = (int32_t)(intptr_t)sub_4BDC7C; //mov
	esi = (int32_t)(intptr_t)sub_4BDE94; //mov
	edi = (int32_t)(intptr_t)sub_4BE088; //mov
	ebp = (int32_t)(intptr_t)sub_4BE564; //mov
	eax = (int32_t)(intptr_t)sub_4BE770; //mov
	to32i(dword_4DDE44) = ecx; //mov
	to32i(dword_4DDE48) = ebx; //mov
	to32i(dword_4DDE4C) = esi; //mov
	to32i(dword_4DDE50) = edi; //mov
	to32i(dword_4DDE54) = ebp; //mov
	to32i(dword_4DDE58) = eax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B7A80()
{
	push32(edi);
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jz())
		goto loc_4B7AA9;
	edi = (int32_t)(intptr_t)sub_4BE944; //mov
	eax = (int32_t)(intptr_t)sub_4BEB18; //mov
	to32i(dword_4DDE74) = edi; //mov
	to32i(dword_4DDE80) = edi; //mov
	to32i(dword_4DDE88) = eax; //mov
	xor_(eax, eax);
	pop32(edi);
	return;
loc_4B7AA9:
	push32(esi);
	push32(ecx);
	ecx = (int32_t)(intptr_t)sub_4BECB8; //mov
	esi = (int32_t)(intptr_t)sub_4BEEC0; //mov
	to32i(dword_4DDE74) = ecx; //mov
	to32i(dword_4DDE80) = ecx; //mov
	to32i(dword_4DDE88) = esi; //mov
	pop32(ecx);
	pop32(esi);
	xor_(eax, eax);
	pop32(edi);
}
Fn(void) Game::_sub_4B7AD0()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	ecx = to32i(ebp+8); //mov
	edi = to32i(ebp+0xC); //mov
	edx = to32i(dword_5B4F50); //mov
	eax = to32i(dword_5AF5F0); //mov
	ebx = to32i(dword_5B4F10); //mov
	add(eax, (int32_t)4);
	add(ebx, (int32_t)4);
loc_4B7AF1:
	cmp(eax, edx);
	if (jl())
		goto loc_4B7AFA;
	eax = to32i(dword_5B4F20); //mov
loc_4B7AFA:
	cmp(ebx, edx);
	if (jl())
		goto loc_4B7B04;
	ebx = to32i(dword_5B4F20); //mov
loc_4B7B04:
	fld(to32f(edi));
	fadd(to32f(flt_5B4F40));
	fld(to32f(ebx));
	to32i(dword_5AF5F0) = eax; //mov
	to32i(dword_5B4F10) = ebx; //mov
	fmul(to32f(flt_4DEB18));
	fxch_st(1);
	fst(to32f(eax));
	fmul(to32f(flt_4DEB18));
	fxch_st(1);
	fstp(to32f(flt_5B4F40));
	fsubr(to32f(ebx));
	edx = to32i(dword_5B4F54); //mov
	eax = to32i(dword_5AF5F4); //mov
	ebx = to32i(dword_5B4F14); //mov
	add(eax, (int32_t)4);
	add(ebx, (int32_t)4);
	cmp(eax, edx);
	if (jl())
		goto loc_4B7B53;
	eax = to32i(dword_5B4F24); //mov
loc_4B7B53:
	cmp(ebx, edx);
	if (jl())
		goto loc_4B7B5D;
	ebx = to32i(dword_5B4F24); //mov
loc_4B7B5D:
	fadd(to32f(flt_5B4F44));
	fld(to32f(ebx));
	to32i(dword_5AF5F4) = eax; //mov
	to32i(dword_5B4F14) = ebx; //mov
	fmul(to32f(flt_4DEB1C));
	fxch_st(1);
	fst(to32f(eax));
	fmul(to32f(flt_4DEB1C));
	fxch_st(1);
	fstp(to32f(flt_5B4F44));
	fsubr(to32f(ebx));
	fld(to32f(flt_4DEAEC));
	fmul(to32f(flt_4DEAFC));
	fxch_st(1);
	fmul(to32f(flt_4DEB0C));
	eax = to32i(dword_5AF5F8); //mov
	ebx = to32i(dword_5B4F18); //mov
	edx = to32i(dword_5B4F58); //mov
	faddp_st(1, 0);
	add(eax, (int32_t)4);
	add(ebx, (int32_t)4);
	cmp(eax, edx);
	if (jl())
		goto loc_4B7BC0;
	eax = to32i(dword_5B4F28); //mov
loc_4B7BC0:
	cmp(ebx, edx);
	if (jl())
		goto loc_4B7BCA;
	ebx = to32i(dword_5B4F28); //mov
loc_4B7BCA:
	fst(to32f(flt_4DEAEC));
	fadd(to32f(flt_5B4F48));
	fld(to32f(ebx));
	to32i(dword_5AF5F8) = eax; //mov
	to32i(dword_5B4F18) = ebx; //mov
	fmul(to32f(flt_4DEB20));
	fxch_st(1);
	fst(to32f(eax));
	fmul(to32f(flt_4DEB20));
	fxch_st(1);
	fstp(to32f(flt_5B4F48));
	fsubr(to32f(ebx));
	edx = to32i(dword_5B4F5C); //mov
	eax = to32i(dword_5AF5FC); //mov
	ebx = to32i(dword_5B4F1C); //mov
	add(eax, (int32_t)4);
	add(ebx, (int32_t)4);
	cmp(eax, edx);
	if (jl())
		goto loc_4B7C1D;
	eax = to32i(dword_5B4F2C); //mov
loc_4B7C1D:
	cmp(ebx, edx);
	if (jl())
		goto loc_4B7C27;
	ebx = to32i(dword_5B4F2C); //mov
loc_4B7C27:
	fadd(to32f(dword_5B4F4C));
	fld(to32f(ebx));
	to32i(dword_5AF5FC) = eax; //mov
	to32i(dword_5B4F1C) = ebx; //mov
	fmul(to32f(flt_4DEB24));
	fxch_st(1);
	fst(to32f(eax));
	fmul(to32f(flt_4DEB24));
	fxch_st(1);
	fstp(to32f(dword_5B4F4C));
	fsubr(to32f(ebx));
	fld(to32f(flt_4DEAF4));
	fmul(to32f(flt_4DEB04));
	fxch_st(1);
	fmul(to32f(flt_4DEB14));
	edx = to32i(dword_5B4F50); //mov
	eax = to32i(dword_5AF5F0); //mov
	ebx = to32i(dword_5B4F10); //mov
	faddp_st(1, 0);
	add(eax, (int32_t)4);
	add(ebx, (int32_t)4);
	add(edi, (int32_t)4);
	fst(to32f(flt_4DEAF4));
	fstp(to32f(edi-4));
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4B7AF1;
	popa();
	leave();
}
Fn(void) Game::_sub_4B7CA0()
{
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0xC); //mov
	ecx = to32i(esp+4); //mov
	shl(ecx, (int32_t)2);
	add(ecx, eax);
	cmp(eax, ecx);
	if (jnb())
		goto locret_4B7CC8;
loc_4B7CB5:
	fld(to32f(edx));
	add(eax, (int32_t)4);
	fadd(to32f(edx+4));
	add(edx, (int32_t)8);
	fstp(to32f(eax-4));
	cmp(eax, ecx);
	if (jb())
		goto loc_4B7CB5;
locret_4B7CC8:
	return;
}
Fn(void) Game::_sub_4B7CD0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	to32i(esp) = 0x3F800000; //mov
	test(eax, eax);
	if (jle())
		goto loc_4B7D0F;
	edx = 1; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_4B7CF8;
	xor_(ecx, ecx);
loc_4B7CEB:
	test(edx, eax);
	if (jnz())
		goto loc_4B7D01;
loc_4B7CEF:
	add(edx, edx);
	add(ecx, (int32_t)4);
	cmp(edx, eax);
	if (jle())
		goto loc_4B7CEB;
loc_4B7CF8:
	fld(to32f(esp));
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	return;
loc_4B7D01:
	fld(to32f(esp));
	fmul(to32f(flt_4E0578+ecx));
	fstp(to32f(esp));
	goto loc_4B7CEF;
loc_4B7D0F:
	imul32(eax, -1);
	edx = 1; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_4B7CF8;
	xor_(ecx, ecx);
loc_4B7D1D:
	test(edx, eax);
	if (jnz())
		goto loc_4B7D2C;
	add(edx, edx);
	add(ecx, (int32_t)4);
	cmp(edx, eax);
	if (jg())
		goto loc_4B7CF8;
	goto loc_4B7D1D;
loc_4B7D2C:
	fld(to32f(esp));
	fdiv(to32f(flt_4E0578+ecx));
	fstp(to32f(esp));
	add(edx, edx);
	add(ecx, (int32_t)4);
	cmp(edx, eax);
	if (jg())
		goto loc_4B7CF8;
	goto loc_4B7D1D;
}
Fn(void) Game::_sub_4B7D50()
{
	push32(esi);
	push32(edi);
	edi = edx; //mov
	esi = ecx; //mov
	sar(eax, (int32_t)6);
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
	ecx = 0x10000; //mov
	sub(ecx, eax);
	edx = eax; //mov
	eax = ecx; //mov
	imul32(eax, edi);
	shr(eax, (int32_t)0x10);
	to32i(ebx) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jg())
		goto loc_4B7DA4;
loc_4B7D8E:
	add(edx, (int32_t)0x10000);
	imul32(edi, edx);
	shr(edi, (int32_t)0x10);
	to32i(esi) = edi; //mov
	cmp(edi, (int32_t)0x7F);
	if (jg())
		goto loc_4B7DAC;
	pop32(edi);
	pop32(esi);
	return;
loc_4B7DA4:
	to32i(ebx) = 0x7F; //mov
	goto loc_4B7D8E;
loc_4B7DAC:
	to32i(esi) = 0x7F; //mov
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4B83A9()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	eax = GetCurrentThreadId_wrap();
	edx = to32i(ebx+8); //mov
	esi = eax; //mov
	cmp(eax, edx);
	if (jz())
		goto loc_4B8402;
	cmp(to32i(ebx+4), (int32_t)0);
	if (jnz())
		goto loc_4B83F5;
	eax = (int32_t)(intptr_t)dword_5B9D94; //mov
	esp -= 4; _sub_4B83A9(); esp += 4; //call
	cmp(to32i(ebx+4), (int32_t)0);
	if (jnz())
		goto loc_4B83EB;
	push32(eax);
	to32i(ebx) = eax; //mov
	eax = InitializeCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	to32i(ebx+4) = 1; //mov
loc_4B83EB:
	eax = (int32_t)(intptr_t)dword_5B9D94; //mov
	esp -= 4; _sub_4B840F(); esp += 4; //call
loc_4B83F5:
	eax = to32i(ebx); //mov
	push32(eax);
	eax = EnterCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	to32i(ebx+8) = esi; //mov
loc_4B8402:
	inc(to32i(ebx+0xC));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4B840F()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = to32i(eax+0xC); //mov
	test(edx, edx);
	if (jbe())
		goto loc_4B8431;
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(eax+0xC) = ebx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4B8431;
	esi = to32i(eax); //mov
	push32(esi);
	to32i(eax+8) = ebx; //mov
	eax = LeaveCriticalSection_wrap(to32i(esp + 0)); esp += 4;
loc_4B8431:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4BB2C0()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = to32i(ecx+0x20); //mov
	esp -= 4; _sub_4850B0(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4BB2D4()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = to32i(ecx+0x20); //mov
	esp -= 4; _sub_483460(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4BB2EC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x140);
	edi = to32i(esp+0x154); //mov
	to32i(esp+0x12C) = eax; //mov
	to32i(esp+0x13C) = edx; //mov
	ebp = ebx; //mov
	to32i(esp+0x138) = ecx; //mov
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_4A1080(); esp += 4; //call
	to32i(esp+0x130) = eax; //mov
	xor_(eax, eax);
	edx = to32i(esp+0x150); //mov
	esp -= 4; _sub_4A1080(); esp += 4; //call
	eax = to32i(esp+0x138); //mov
	ecx = to32i(dword_4DABE8); //mov
	ebx = to32i(dword_4DAB84); //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	esi = eax; //mov
	to32i(esp+0x134) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xB4); //lea
	esp -= 4; _sub_4A4030(); esp += 4; //call
	eax = esp; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4DF380; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = to32i(esp+0x150); //mov
	add(eax, ebp);
	ecx = to32i(esp+0x138); //mov
	to32i(esp+0x124) = eax; //mov
	push32(eax);
	eax = to32i(esp+0x140); //mov
	edx = to32i(esp+0x140); //mov
	add(eax, ecx);
	ebx = ebp; //mov
	to32i(esp+0x12C) = eax; //mov
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)dword_4DB278; //mov
	esp -= 4; _sub_4C0B80(); esp += 4; //call
	call(to32i(off_4DAC40));
	eax = esi; //mov
	edx = to32i(esp+0x13C); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	ebx = ebp; //mov
	eax = esi; //mov
	ecx = to32i(esp+0x150); //mov
	esp -= 4; _sub_4BB2C0(); esp += 4; //call
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = 0xFF000000; //mov
	ebx = to32i(esp+0x138); //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = ebp; //mov
	eax = to32i(esp+0x140); //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	eax = 0xFFAA0000; //mov
	ecx = to32i(esp+0x124); //mov
	ebx = to32i(esp+0x128); //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = (int32_t)(intptr_t)(ebp+4); //lea
	push32(eax);
	sub(ecx, (int32_t)4);
	eax = to32i(esp+0x140); //mov
	sub(ebx, (int32_t)5);
	add(eax, (int32_t)4);
	esp -= 4; _sub_4C0BE0(); esp += 4; //call
	eax = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_486560(); esp += 4; //call
	eax = to32i(esp+0x12C); //mov
	edx = (int32_t)(intptr_t)(ebp+9); //lea
	esp -= 4; _sub_4C0CDC(); esp += 4; //call
	call(to32i(off_4DAC44));
	eax = (int32_t)(intptr_t)dword_4DB278; //mov
	esp -= 4; _sub_4C0D30(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_4BB45C:
	call(to32i(off_4DAC48));
	test(eax, edi);
	if (jnz())
		goto loc_4BB45C;
loc_4BB466:
	esp -= 4; _sub_486E38(); esp += 4; //call
	edx = eax; //mov
	ecx = eax; //mov
	call(to32i(off_4DAC48));
	esi = eax; //mov
	and_(esi, edi);
	test(edx, edx);
	if (jz())
		goto loc_4BB518;
loc_4BB481:
	or_(cl, (int8_t)0x20);
	and_(esi, (int32_t)1);
	cmp(ecx, (int32_t)0x79);
	if (jnz())
		goto loc_4BB491;
	esi = 1; //mov
loc_4BB491:
	eax = to32i(esp+0x150); //mov
	ecx = to32i(esp+0x13C); //mov
	ebx = to32i(esp+0x138); //mov
	edx = to32i(esp+0x13C); //mov
	add(eax, ebp);
	add(ecx, ebx);
	push32(eax);
	ebx = ebp; //mov
	eax = (int32_t)(intptr_t)dword_4DB278; //mov
	esp -= 4; _sub_4C0B80(); esp += 4; //call
	call(to32i(off_4DAC3C));
	edx = to32i(esp+0x13C); //mov
	eax = to32i(esp+0x134); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_4BB2D4(); esp += 4; //call
	call(to32i(off_4DAC44));
	eax = esp; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xB4); //lea
	esp -= 4; _sub_4A4054(); esp += 4; //call
	eax = to32i(esp+0x134); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = to32i(esp+0x130); //mov
	esp -= 4; _sub_4A1080(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0x140);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4BB518:
	test(esi, esi);
	if (jnz())
		goto loc_4BB481;
	goto loc_4BB466;
}
Fn(void) Game::_sub_4BB528()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jz())
		goto loc_4BB544;
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4BB581;
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_4BB544:
	eax = to32i(dword_4DAB80); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = (int32_t)(intptr_t)(eax-8); //lea
	eax = to32i(dword_4DAB7C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	push32(7);
	push32(0x18);
	edx = (int32_t)(intptr_t)(eax-0x50); //lea
	ecx = 0xA0; //mov
	eax = (int32_t)(intptr_t)aExitYN; //mov
	esp -= 4; _sub_4BB2EC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4BB597;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4BB581:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_4BB544;
loc_4BB597:
	_ExitProcess0();
}
Fn(void) Game::_sub_4BB6F4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	eax = to32i(dword_4DAB80); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = (int32_t)(intptr_t)(eax-8); //lea
	eax = to32i(dword_4DAB7C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	push32(1);
	push32(0x18);
	edx = (int32_t)(intptr_t)(eax-0x90); //lea
	ecx = 0x120; //mov
	eax = (int32_t)(intptr_t)aPausePressAnyK; //mov
	esp -= 4; _sub_4BB2EC(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4BB81E()
{
	ebp = esp; //mov
	edx = to32i(dword_4DDAEC); //mov
	add(edx, (int32_t)3);
	and_(dl, (int8_t)0xFC);
	esp -= 4; _stackavail_(); esp += 4; //call
	cmp(edx, eax);
	if (jnb())
		goto loc_4BB84D;
	push32(edx);
	esp -= 4; _sub_4B2D3C(); esp += 4; //call
	eax = to32i(dword_4DDAEC); //mov
	add(eax, (int32_t)3);
	and_(al, (int8_t)0xFC);
	sub(esp, eax);
	eax = esp; //mov
	goto loc_4BB84F;
loc_4BB84D:
	xor_(eax, eax);
loc_4BB84F:
	edx = to32i(dword_4DDAEC); //mov
	add(eax, edx);
	to32i(dword_4DDAF0) = eax; //mov
	esp -= 4; _main_(); esp += 4; //call
	push32(eax);
	eax = ExitProcess_wrap(to32i(esp + 0));
}
Fn(void) Game::_sub_4BBDB4()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	push32(ebp);
	ecx = to32i(ebp+8); //mov
	esi = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	eax = to32i(ebp+0x1C); //mov
	edx = to32i(ebp+0x20); //mov
	ebx = to32i(ebp+0x18); //mov
	ebx = to32i(ebx); //mov
	to32i(dword_4E09DC) = ebx; //mov
	ebp = to32i(ebp+0x14); //mov
	ebp = to32i(ebp+0); //mov
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_4BBE58;
	sub(ecx, (int32_t)1);
loc_4BBDE1:
	fild(to32i(dword_4E09DC+2));
	fld(to32f(esi+ebp*4));
	fld(to32f(esi+ebp*4+4));
	add(edi, (int32_t)8);
	add(ebx, edx);
	adc(ebp, eax);
	to32i(dword_4E09DC) = ebx; //mov
	fild(to32i(dword_4E09DC+2));
	fld(to32f(esi+ebp*4));
	fld(to32f(esi+ebp*4+4));
	fxch_st(5);
	fmul(to32f(flt_4E09D8));
	fld(to32f(flt_4E09D4));
	fxch_st(3);
	fmul(to32f(flt_4E09D8));
	fxch_st(1);
	fsub_st(3, 0);
	fld(to32f(flt_4E09D4));
	fxch_st(2);
	fsub_st(2, 0);
	fxch_st(4);
	fmulp_st(6, 0);
	add(ebx, edx);
	fmulp_st(4, 0);
	fmulp_st(1, 0);
	fxch_st(1);
	fmulp_st(4, 0);
	fxch_st(2);
	faddp_st(1, 0);
	fxch_st(1);
	faddp_st(2, 0);
	adc(ebp, eax);
	to32i(dword_4E09DC) = ebx; //mov
	fstp(to32f(edi-8));
	fstp(to32f(edi-4));
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4BBDE1;
	add(ecx, (int32_t)1);
loc_4BBE58:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4BBE93;
	fild(to32i(dword_4E09DC+2));
	fld(to32f(flt_4E09D4));
	fxch_st(1);
	fmul(to32f(flt_4E09D8));
	fsub_st(1, 0);
	fmul(to32f(esi+ebp*4+4));
	fxch_st(1);
	fmul(to32f(esi+ebp*4));
	faddp_st(1, 0);
	add(ebx, edx);
	adc(ebp, eax);
	add(edi, (int32_t)4);
	to32i(dword_4E09DC) = ebx; //mov
	fstp(to32f(edi-4));
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4BBE58;
loc_4BBE93:
	ecx = ebp; //mov
	pop32(ebp);
	edx = to32i(ebp+0x18); //mov
	to32i(edx) = ebx; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = ecx; //mov
	popa();
	leave();
}
Fn(void) Game::_sub_4BBEA4()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	push32(ebp);
	ecx = to32i(ebp+8); //mov
	esi = to32i(ebp+0xC); //mov
	edi = to32i(ebp+0x10); //mov
	eax = to32i(ebp+0x1C); //mov
	edx = to32i(ebp+0x20); //mov
	ebx = to32i(ebp+0x18); //mov
	ebx = to32i(ebx); //mov
	to32i(dword_4E09EC) = ebx; //mov
	ebp = to32i(ebp+0x14); //mov
	ebp = to32i(ebp+0); //mov
	goto loc_4BBED1;
loc_4BBECB:
	fstp(to32f(edi-8));
	fstp(to32f(edi-4));
loc_4BBED1:
	fild(to32i(dword_4E09EC+2));
	fld(to32f(flt_4E09E4));
	fld(to32f(esi+ebp*8));
	fxch_st(2);
	fmul(to32f(flt_4E09E8));
	fld(to32f(esi+ebp*8+4));
	fld(to32f(esi+ebp*8+8));
	fxch_st(2);
	fsub_st(3, 0);
	fmul_st(2, 0);
	fld(to32f(esi+ebp*8+0xC));
	fxch_st(4);
	fmul_st(5, 0);
	add(edi, (int32_t)8);
	add(ebx, edx);
	fmulp_st(2, 0);
	adc(ebp, eax);
	to32i(dword_4E09EC) = ebx; //mov
	fmulp_st(3, 0);
	fxch_st(3);
	faddp_st(1, 0);
	fxch_st(1);
	faddp_st(2, 0);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4BBECB;
	fstp(to32f(edi-8));
	fstp(to32f(edi-4));
	ecx = ebp; //mov
	pop32(ebp);
	edx = to32i(ebp+0x18); //mov
	to32i(edx) = ebx; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = ecx; //mov
	popa();
	leave();
}
Fn(void) Game::_sub_4BBF34()
{
	//MMX
}
Fn(void) Game::_sub_4BBFB4()
{
	//MMX
}
Fn(void) Game::_sub_4BC054()
{
	//MMX
}
Fn(void) Game::_sub_4BC0D4()
{
	//MMX
}
Fn(void) Game::_sub_4BC170()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	ecx = 1; //mov
	esp -= 4; _sub_4C1C38(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC190()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(1);
	esp -= 4; _sub_4C1D04(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC1C0()
{
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	to32i(edx) = 0; //mov
	edx = 1; //mov
	esp -= 4; _sub_4C1E5C(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC1E0()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	ecx = 2; //mov
	esp -= 4; _sub_4C1C38(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC200()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(2);
	esp -= 4; _sub_4C1D04(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC230()
{
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	to32i(edx) = 0; //mov
	edx = 2; //mov
	esp -= 4; _sub_4C1E5C(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC250()
{
	sub(esp, (int32_t)4);
	eax = 0xFFFFFF80; //mov
	fld(to64f(dbl_4D1D6C));
loc_4BC25E:
	to32i(esp) = eax; //mov
	xor_(edx, edx);
	fild(to32i(esp));
	fmul_st(0, 1);
	dl = al; //mov
	inc(eax);
	fstp(to32f(dword_5BA4E4+edx*4));
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4BC25E;
	fstp_st(0);
	add(esp, (int32_t)4);
}
Fn(void) Game::_sub_4BC280()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	push32(0);
	xor_(ecx, ecx);
	esp -= 4; _sub_4C1F6C(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC2A0()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(0);
	push32(0);
	esp -= 4; _sub_4C2040(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC2D0()
{
	ecx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	xor_(ebx, ebx);
	to32i(edx) = 0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4C21CC(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC2F0()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	push32(1);
	xor_(ecx, ecx);
	esp -= 4; _sub_4C1F6C(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC310()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(1);
	push32(0);
	esp -= 4; _sub_4C2040(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC340()
{
	ecx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	ebx = 1; //mov
	to32i(edx) = 0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4C21CC(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC360()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	ecx = 2; //mov
	esp -= 4; _sub_4C1C38(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC380()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(2);
	esp -= 4; _sub_4C1D04(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC3B0()
{
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	to32i(edx) = 0; //mov
	edx = 2; //mov
	esp -= 4; _sub_4C1E5C(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC3D0()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	ecx = 4; //mov
	esp -= 4; _sub_4C1C38(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC3F0()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(4);
	esp -= 4; _sub_4C1D04(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC420()
{
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	to32i(edx) = 0; //mov
	edx = 4; //mov
	esp -= 4; _sub_4C1E5C(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC440()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	push32(0);
	ecx = 1; //mov
	esp -= 4; _sub_4C1F6C(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC460()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(0);
	push32(1);
	esp -= 4; _sub_4C2040(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC490()
{
	ecx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	xor_(ebx, ebx);
	to32i(edx) = 0; //mov
	edx = 1; //mov
	esp -= 4; _sub_4C21CC(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC4B0()
{
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	esi = to32i(esp+0x10); //mov
	push32(esi);
	push32(1);
	ecx = 1; //mov
	esp -= 4; _sub_4C1F6C(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC4D0()
{
	push32(esi);
	ebx = ecx; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	esi = to32i(esp+0xC); //mov
	push32(esi);
	push32(1);
	push32(1);
	esp -= 4; _sub_4C2040(); esp += 4; //call
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC500()
{
	ecx = to32i(esp+8); //mov
	edx = to32i(esp+0xC); //mov
	ebx = 1; //mov
	to32i(edx) = 0; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4C21CC(); esp += 4; //call
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC520()
{
	eax = to32i(eax+0x18); //mov
}
Fn(void) Game::_sub_4BC524()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	eax = ebx; //mov
	edx = to32i(edi+0x18); //mov
	ecx = to32i(edi+0x14); //mov
	ebx = edi; //mov
	cmp(edx, ecx);
	if (jge())
		goto loc_4BC578;
	eax = to32i(eax); //mov
	to32i(edi+0xC) = eax; //mov
	eax = to32i(edi+0x1A); //mov
	sar(eax, (int32_t)0x10);
	cmp(esi, eax);
	if (jle())
		goto loc_4BC582;
	ebp = 2; //mov
	edx = edi; //mov
	xor_(eax, eax);
loc_4BC552:
	edi = to32i(ebx+0x1A); //mov
	sar(edi, (int32_t)0x10);
	cmp(eax, edi);
	if (jge())
		goto loc_4BC5D8;
	edi = to32i(ebx+0xC); //mov
	cx = to16i(edx+0x1E); //mov
	to16i(edi) = cx; //mov
	edi = to32i(ebx+0xC); //mov
	add(edx, (int32_t)2);
	add(edi, ebp);
	inc(eax);
	to32i(ebx+0xC) = edi; //mov
	goto loc_4BC552;
loc_4BC578:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC582:
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_4BC5A8;
	edx = edi; //mov
loc_4BC58A:
	edi = to32i(ebx+0xC); //mov
	cx = to16i(edx+0x1E); //mov
	to16i(edi) = cx; //mov
	ecx = to32i(ebx+0xC); //mov
	add(edx, (int32_t)2);
	add(ecx, (int32_t)2);
	inc(eax);
	to32i(ebx+0xC) = ecx; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4BC58A;
loc_4BC5A8:
	esi = ebx; //mov
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	xor_(edi, edi);
	add(edx, ebx);
loc_4BC5B1:
	ecx = to32i(ebx+0x1A); //mov
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4BC5CD;
	add(esi, (int32_t)2);
	inc(edi);
	cx = to16i(edx+0x1E); //mov
	add(edx, (int32_t)2);
	inc(eax);
	to16i(esi+0x1C) = cx; //mov
	goto loc_4BC5B1;
loc_4BC5CD:
	xor_(eax, eax);
	to16i(ebx+0x1C) = di; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC5D8:
	ebp = to32i(ebx+0x14); //mov
	sub(esi, edi);
	sub(ebp, to32i(ebx+0x18));
	test(ebp, ebp);
	if (jl())
		goto loc_4BC663;
loc_4BC5E8:
	cmp(esi, ebp);
	if (jge())
		goto loc_4BC667;
	edi = esi; //mov
loc_4BC5F2:
	edx = to32i(ebx+0x18); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(ebx+0x10); //mov
	to32i(ebx) = edi; //mov
	add(edx, eax);
	push32(ebx);
	to32i(ebx+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	add(to32i(ebx+0x18), edi);
	eax = to32i(ebx); //mov
	edx = to32i(ebx+0x18); //mov
	sub(edx, eax);
	add(esp, (int32_t)4);
	to32i(ebx+0x18) = edx; //mov
	cmp(ebp, edi);
	if (jnz())
		goto loc_4BC66B;
	eax = edx; //mov
	ecx = to32i(ebx+0x14); //mov
	sub(esi, edi);
	sub(eax, ecx);
	sub(esi, eax);
	test(esi, esi);
	if (jle())
		goto loc_4BC65C;
	xor_(edx, edx);
loc_4BC646:
	eax = to32i(ebx+0xC); //mov
	to16i(eax) = dx; //mov
	ebp = to32i(ebx+0xC); //mov
	add(ebp, (int32_t)2);
	dec(esi);
	to32i(ebx+0xC) = ebp; //mov
	test(esi, esi);
	if (jg())
		goto loc_4BC646;
loc_4BC65C:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC663:
	xor_(ebp, ebp);
	goto loc_4BC5E8;
loc_4BC667:
	edi = ebp; //mov
	goto loc_4BC5F2;
loc_4BC66B:
	edi = to32i(ebx); //mov
	xor_(eax, eax);
	test(edi, edi);
	if (jl())
		goto loc_4BC67E;
	to16i(ebx+0x1C) = ax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC67E:
	edx = ebx; //mov
	esi = (int32_t)(intptr_t)(edi+edi); //lea
loc_4BC683:
	add(esi, (int32_t)2);
	ecx = to32i(ebx+0xC); //mov
	inc(edi);
	add(edx, (int32_t)2);
	cx = to16i(ecx+esi-2); //mov
	inc(eax);
	to16i(edx+0x1C) = cx; //mov
	test(esi, esi);
	if (jl())
		goto loc_4BC683;
	to16i(ebx+0x1C) = ax; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BC6A8()
{
	to32i(eax+0x18) = 0; //mov
	to16i(eax+0x1C) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0x14) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BC524; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BC520; //mov
	eax = 0x54; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BC6F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = ecx; //mov
	edi = ebx; //mov
	edx = to32i(ecx); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_4BC709;
	edi = eax; //mov
loc_4BC709:
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_4BC728;
	ecx = to32i(esp+4); //mov
loc_4BC713:
	add(edx, (int32_t)2);
	bx = to16i(ecx); //mov
	add(ecx, (int32_t)2);
	inc(eax);
	to16i(edx-2) = bx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4BC713;
loc_4BC728:
	cmp(eax, ebp);
	if (jge())
		goto loc_4BC748;
	ecx = to32i(esp+4); //mov
	ebx = (int32_t)(intptr_t)(eax+eax); //lea
	add(ebx, ecx);
loc_4BC735:
	add(ecx, (int32_t)2);
	si = to16i(ebx); //mov
	add(ebx, (int32_t)2);
	inc(eax);
	to16i(ecx-2) = si; //mov
	cmp(eax, ebp);
	if (jl())
		goto loc_4BC735;
loc_4BC748:
	eax = to32i(esp); //mov
	to32i(eax) = edx; //mov
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BC758()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x44);
	edi = edx; //mov
	edx = to32i(ebx); //mov
	esi = eax; //mov
	to32i(eax+0xC) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BC7C1;
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	to32i(esp+0x3C) = edx; //mov
	ebp = (int32_t)(intptr_t)(eax+0x26); //lea
loc_4BC776:
	cmp(to16i(esi+0x24), (int16_t)0);
	if (jnz())
		goto loc_4BC7D9;
	eax = to32i(esi+0x18); //mov
	ecx = to32i(esi+0x20); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, ecx);
	if (jge())
		goto loc_4BC7FA;
	imul32(edx, to32i(esi+0x18), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x10); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	edx = to32i(esi+0x18); //mov
	sub(edi, (int32_t)0x1C);
	add(edx, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x18) = edx; //mov
loc_4BC7BD:
	test(edi, edi);
	if (jg())
		goto loc_4BC776;
loc_4BC7C1:
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	add(to32i(esi+0xC), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BC90E;
	xor_(eax, eax);
	add(esp, (int32_t)0x44);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC7D9:
	ecx = to32i(esp+0x3C); //mov
	ebx = edi; //mov
	eax = to32i(esi+0x22); //mov
	edx = ebp; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4BC6F0(); esp += 4; //call
	bx = to16i(esi+0x24); //mov
	sub(ebx, eax);
	sub(edi, eax);
	to16i(esi+0x24) = bx; //mov
	goto loc_4BC7BD;
loc_4BC7FA:
	imul32(edx, to32i(esi+0x18), 0xF);
	eax = to32i(esi+0xC); //mov
	ecx = 0x1C; //mov
	to32i(esp+0x38) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(esi) = 0x1C; //mov
	edx = to32i(esi+0x10); //mov
	to32i(esi+0xC) = ebp; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	add(to32i(esi+0x18), (int32_t)0x1C);
	bx = to16i(esi+0x20); //mov
	ax = to16i(esi+0x18); //mov
	edx = 0x1C; //mov
	sub(eax, ebx);
	sub(edx, eax);
	ax = to16i(esi+0x94); //mov
	to16i(esi+0x24) = dx; //mov
	to16i(esi+6) = ax; //mov
	ax = to16i(esi+0x96); //mov
	ecx = edx; //mov
	to16i(esi+4) = ax; //mov
	inc(ecx);
	eax = to32i(esi+0x1C); //mov
	to16i(esi+0x24) = cx; //mov
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(eax, ecx);
	to32i(esi+0x18) = eax; //mov
	eax = to32i(esi+0x1C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(esp, (int32_t)4);
	test(edx, edx);
	if (jz())
		goto loc_4BC902;
	to32i(esi) = ecx; //mov
	imul32(edx, to32i(esi+0x18), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x10); //mov
	add(edx, eax);
	eax = esp; //mov
	to32i(esi+8) = edx; //mov
	push32(esi);
	to32i(esi+0xC) = eax; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	ebx = to32i(esi+0x18); //mov
	add(ebx, (int32_t)0x1C);
	edx = to32i(esi+0x1C); //mov
	eax = ebx; //mov
	add(esp, (int32_t)4);
	sub(eax, edx);
	to32i(esp+0x40) = eax; //mov
	eax = 0x1C; //mov
	ecx = to32i(esp+0x40); //mov
	sub(eax, ecx);
	edx = esp; //mov
	add(eax, eax);
	to32i(esi+0x18) = ebx; //mov
	add(edx, eax);
	xor_(eax, eax);
	test(ecx, ecx);
	if (jle())
		goto loc_4BC902;
loc_4BC8DB:
	ecx = to32i(esi+0x22); //mov
	sar(ecx, (int32_t)0x10);
	add(ecx, ecx);
	ebx = (int32_t)(intptr_t)(esi+ecx); //lea
	cx = to16i(edx); //mov
	to16i(ebx+0x26) = cx; //mov
	bx = to16i(esi+0x24); //mov
	inc(ebx);
	inc(eax);
	to16i(esi+0x24) = bx; //mov
	ebx = to32i(esp+0x40); //mov
	add(edx, (int32_t)2);
	cmp(eax, ebx);
	if (jl())
		goto loc_4BC8DB;
loc_4BC902:
	eax = to32i(esp+0x38); //mov
	to32i(esi+0xC) = eax; //mov
	goto loc_4BC7BD;
loc_4BC90E:
	eax = to32i(esi+0x22); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
	ecx = to32i(esi+0xC); //mov
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	ax = to16i(ecx); //mov
	to16i(edx+0x26) = ax; //mov
	add(to32i(esi+0xC), (int32_t)2);
	cx = to16i(esi+0x24); //mov
	inc(ecx);
	inc(edi);
	to16i(esi+0x24) = cx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BC90E;
	xor_(eax, eax);
	add(esp, (int32_t)0x44);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BC940()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	to32i(esp+4) = edx; //mov
	edx = to32i(ebx); //mov
	to32i(eax+0xC) = edx; //mov
	edx = to32i(eax+0x22); //mov
	ecx = to32i(esp+4); //mov
	sar(edx, (int32_t)0x10);
	esi = eax; //mov
	cmp(edx, ecx);
	if (jge())
		goto loc_4BC98D;
	edi = 2; //mov
	xor_(ebx, ebx);
loc_4BC967:
	edx = to32i(esi+0x22); //mov
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jge())
		goto loc_4BC9E7;
	edx = to32i(esi+0xC); //mov
	cx = to16i(eax+0x26); //mov
	to16i(edx) = cx; //mov
	ebp = to32i(esi+0xC); //mov
	add(eax, (int32_t)2);
	add(ebp, edi);
	inc(ebx);
	to32i(esi+0xC) = ebp; //mov
	goto loc_4BC967;
loc_4BC98D:
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jle())
		goto loc_4BC9B4;
	ebp = to32i(esp+4); //mov
loc_4BC997:
	edx = to32i(esi+0xC); //mov
	cx = to16i(eax+0x26); //mov
	to16i(edx) = cx; //mov
	edi = to32i(esi+0xC); //mov
	add(eax, (int32_t)2);
	add(edi, (int32_t)2);
	inc(ebx);
	to32i(esi+0xC) = edi; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_4BC997;
loc_4BC9B4:
	eax = esi; //mov
	edx = (int32_t)(intptr_t)(ebx+ebx); //lea
	xor_(edi, edi);
	add(edx, esi);
loc_4BC9BD:
	ecx = to32i(esi+0x22); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ebx, ecx);
	if (jge())
		goto loc_4BC9D9;
	add(eax, (int32_t)2);
	inc(edi);
	cx = to16i(edx+0x26); //mov
	add(edx, (int32_t)2);
	inc(ebx);
	to16i(eax+0x24) = cx; //mov
	goto loc_4BC9BD;
loc_4BC9D9:
	xor_(eax, eax);
	to16i(esi+0x24) = di; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BC9E7:
	edi = to32i(esi+0x1C); //mov
	eax = to32i(esi+0x18); //mov
	ebp = to32i(esp+4); //mov
	sub(edi, eax);
	sub(ebp, edx);
	sub(edi, (int32_t)0x1C);
	to32i(esp+4) = ebp; //mov
	cmp(edi, ebp);
	if (jle())
		goto loc_4BCA02;
	edi = ebp; //mov
loc_4BCA02:
	test(edi, edi);
	if (jl())
		goto loc_4BCAC5;
loc_4BCA0A:
	edx = to32i(esi+0x18); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x10); //mov
	to32i(esi) = edi; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	add(esp, (int32_t)4);
	ecx = to32i(esi+0x18); //mov
	eax = to32i(esi); //mov
	add(ecx, edi);
	xor_(edx, edx);
	ebx = ecx; //mov
	to32i(esi+0x18) = ecx; //mov
	sub(ebx, eax);
	eax = to32i(esi); //mov
	to32i(esi+0x18) = ebx; //mov
	to32i(esp+8) = eax; //mov
	ecx = (int32_t)(intptr_t)(eax+eax); //lea
	xor_(ebx, ebx);
	eax = ecx; //mov
loc_4BCA60:
	test(eax, eax);
	if (jl())
		goto loc_4BCACC;
	eax = to32i(esp+4); //mov
	ebp = to32i(esi+0xC); //mov
	sub(eax, edi);
	sub(ebp, edx);
	to32i(esp+4) = eax; //mov
	edx = to32i(esi+0x18); //mov
	eax = to32i(esi+0x1C); //mov
	to16i(esi+0x24) = bx; //mov
	sub(eax, edx);
	to32i(esi+0xC) = ebp; //mov
	cmp(eax, (int32_t)0x1C);
	if (jge())
		goto loc_4BCABB;
	ax = to16i(esi+6); //mov
	to16i(esi+0x94) = ax; //mov
	ax = to16i(esi+4); //mov
	to16i(esi+0x96) = ax; //mov
	eax = to32i(esi+0x98); //mov
	ecx = to32i(esp+4); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BC758; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4BCABB;
	ebx = (int32_t)(intptr_t)(esi+0xC); //lea
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4BC758(); esp += 4; //call
loc_4BCABB:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BCAC5:
	xor_(edi, edi);
	goto loc_4BCA0A;
loc_4BCACC:
	ecx = (int32_t)(intptr_t)(esi+edx); //lea
	ebp = to32i(esi+0xC); //mov
	to32i(esp) = ecx; //mov
	cx = to16i(eax+ebp); //mov
	ebp = to32i(esp); //mov
	add(eax, (int32_t)2);
	to16i(ebp+0x26) = cx; //mov
	ecx = to32i(esp+8); //mov
	inc(ebx);
	inc(ecx);
	add(edx, (int32_t)2);
	to32i(esp+8) = ecx; //mov
	goto loc_4BCA60;
}
Fn(void) Game::_sub_4BCAF8()
{
	to32i(eax+0x18) = 0; //mov
	to16i(eax+0x24) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0x14) = ebx; //mov
	to32i(eax+0x1C) = ecx; //mov
	edx = to32i(esp+4); //mov
	to32i(eax+0x20) = edx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x98) = edx; //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4BC940; //mov
	to32i(eax) = 0; //mov
	eax = 0x9C; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BCB50()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = edx; //mov
	edx = to32i(eax+0x10); //mov
	esi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BCC2D;
	push32(ecx);
	edx = to32i(ebx); //mov
	to32i(eax+0xC) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BCC15;
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	to32i(esp+4) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x1E); //lea
	ebp = (int32_t)(intptr_t)(eax+0x14); //lea
	add(eax, (int32_t)0x10);
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = eax; //mov
loc_4BCB8B:
	cmp(to16i(esi+0x1C), (int16_t)0);
	if (jnz())
		goto loc_4BCC39;
	eax = to32i(esi+0x18); //mov
	ecx = to32i(esi+0x14); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, ecx);
	if (jge())
		goto loc_4BCC62;
	edx = ecx; //mov
	sub(edx, to32i(esi+0x18));
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(esp+0x10) = eax; //mov
	imul32(eax, ebx);
	to32i(esp+0x10) = eax; //mov
	cmp(edi, eax);
	if (jge())
		goto loc_4BCBD8;
	edx = (int32_t)(intptr_t)(edi+0x1B); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	imul32(eax, ebx);
	to32i(esp+0x10) = eax; //mov
loc_4BCBD8:
	imul32(edx, to32i(esi+0x18), 0xF);
	eax = to32i(esp+0x10); //mov
	to32i(esi) = eax; //mov
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x10); //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	add(esp, (int32_t)4);
	edx = to32i(esi+0x18); //mov
	eax = to32i(esp+0x10); //mov
	add(edx, eax);
	sub(edi, eax);
	to32i(esi+0x18) = edx; //mov
loc_4BCC0D:
	test(edi, edi);
	if (jg())
		goto loc_4BCB8B;
loc_4BCC15:
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	add(to32i(esi+0xC), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BCD0B;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BCC2D:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BCC39:
	ecx = to32i(esp+4); //mov
	edx = to32i(esp+8); //mov
	eax = to32i(esi+0x1A); //mov
	ebx = edi; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4BC6F0(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	bx = to16i(esi+0x1C); //mov
	sub(ebx, to32i(esp+0x10));
	sub(edi, eax);
	to16i(esi+0x1C) = bx; //mov
	goto loc_4BCC0D;
loc_4BCC62:
	cmp(to32i(esi+0x10), (int32_t)1);
	if (jz())
		goto loc_4BCCB7;
	cmp(ecx, to32i(esi+0x18));
	if (jle())
		goto loc_4BCCB7;
	imul32(edx, to32i(esi+0x18), 0xF);
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x10); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+8) = edx; //mov
	esp -= 4; _sub_4C2200(); esp += 4; //call
	ebx = to32i(esi+0x18); //mov
	add(ebx, (int32_t)0x1C);
	edx = to32i(esi+0x14); //mov
	eax = ebx; //mov
	add(esp, (int32_t)4);
	sub(eax, edx);
	edx = 0x1C; //mov
	ecx = to32i(esi+0xC); //mov
	sub(edx, eax);
	add(eax, eax);
	to32i(esi+0x18) = ebx; //mov
	sub(ecx, eax);
	sub(edi, edx);
	to32i(esi+0xC) = ecx; //mov
loc_4BCCB7:
	eax = to32i(esp+0xC); //mov
	edx = ebp; //mov
	call(to32i(dword_4DCFDC));
	ebx = to32i(esi+0x10); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4BCCEE;
	dx = to16i(ebx); //mov
	to16i(esi+6) = dx; //mov
	ax = to16i(ebx+2); //mov
	to16i(esi+4) = ax; //mov
	eax = to32i(esi+0x10); //mov
	to32i(esi+0x18) = 0; //mov
	add(eax, (int32_t)8);
	to32i(esi+0x10) = eax; //mov
	goto loc_4BCC0D;
loc_4BCCEE:
	eax = to32i(esi+0xC); //mov
	add(edi, edi);
	xor_(edx, edx);
	ebx = edi; //mov
	esp -= 4; _memset_(); esp += 4; //call
	edx = to32i(esi+0xC); //mov
	add(edx, edi);
	xor_(edi, edi);
	to32i(esi+0xC) = edx; //mov
	goto loc_4BCC15;
loc_4BCD0B:
	edx = to32i(esi+0x1A); //mov
	eax = to32i(esi+0xC); //mov
	sar(edx, (int32_t)0x10);
	ax = to16i(eax); //mov
	to16i(esi+edx*2+0x1E) = ax; //mov
	ebx = to32i(esi+0xC); //mov
	cx = to16i(esi+0x1C); //mov
	add(ebx, (int32_t)2);
	inc(ecx);
	to32i(esi+0xC) = ebx; //mov
	inc(edi);
	to16i(esi+0x1C) = cx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BCD0B;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BCD40()
{
	to32i(eax+0x10) = 1; //mov
	to32i(eax+0x18) = 0; //mov
	to16i(eax+0x1C) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to32i(eax+0x14) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BCB50; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = 0x54; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BCD80()
{
	eax = to32i(eax+0x1C); //mov
}
Fn(void) Game::_sub_4BCD84()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = edx; //mov
	edx = ebx; //mov
	ecx = to32i(eax+0x1C); //mov
	edi = to32i(eax+0x18); //mov
	ebx = eax; //mov
	cmp(ecx, edi);
	if (jge())
		goto loc_4BCDDA;
	edx = to32i(edx); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x1E); //mov
	sar(edx, (int32_t)0x10);
	sar(edx, (int32_t)1);
	cmp(esi, edx);
	if (jle())
		goto loc_4BCDE7;
	edi = 2; //mov
	xor_(edx, edx);
loc_4BCDB3:
	ecx = to32i(ebx+0x1E); //mov
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_4BCE4B;
	ebp = to32i(ebx+0x10); //mov
	cx = to16i(eax+0x24); //mov
	to16i(ebp+0) = cx; //mov
	ecx = to32i(ebx+0x10); //mov
	add(eax, (int32_t)2);
	add(ecx, edi);
	inc(edx);
	to32i(ebx+0x10) = ecx; //mov
	goto loc_4BCDB3;
loc_4BCDDA:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BCDE7:
	add(esi, esi);
	xor_(edx, edx);
	test(esi, esi);
	if (jle())
		goto loc_4BCE0C;
loc_4BCDEF:
	ecx = to32i(ebx+0x10); //mov
	di = to16i(eax+0x24); //mov
	to16i(ecx) = di; //mov
	ebp = to32i(ebx+0x10); //mov
	add(eax, (int32_t)2);
	add(ebp, (int32_t)2);
	inc(edx);
	to32i(ebx+0x10) = ebp; //mov
	cmp(edx, esi);
	if (jl())
		goto loc_4BCDEF;
loc_4BCE0C:
	xor_(eax, eax);
	esi = (int32_t)(intptr_t)(edx+edx); //lea
	to32i(esp) = eax; //mov
	add(esi, ebx);
	eax = ebx; //mov
loc_4BCE18:
	ecx = to32i(ebx+0x1E); //mov
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_4BCE3A;
	add(eax, (int32_t)2);
	cx = to16i(esi+0x24); //mov
	to16i(eax+0x22) = cx; //mov
	ecx = to32i(esp); //mov
	add(esi, (int32_t)2);
	inc(ecx);
	inc(edx);
	to32i(esp) = ecx; //mov
	goto loc_4BCE18;
loc_4BCE3A:
	eax = to32i(esp); //mov
	to16i(ebx+0x20) = ax; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BCE4B:
	ebp = to32i(ebx+0x18); //mov
	eax = to32i(ebx+0x1C); //mov
	sar(ecx, (int32_t)1);
	sub(ebp, eax);
	sub(esi, ecx);
	test(ebp, ebp);
	if (jl())
		goto loc_4BCEE6;
loc_4BCE5F:
	cmp(esi, ebp);
	if (jge())
		goto loc_4BCEED;
	to32i(esp) = esi; //mov
loc_4BCE6A:
	eax = to32i(esp); //mov
	to32i(ebx) = eax; //mov
	eax = to32i(ebx+0x1C); //mov
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(ebx+0x14); //mov
	add(edx, eax);
	push32(ebx);
	to32i(ebx+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	add(esp, (int32_t)4);
	edx = to32i(ebx+0x1C); //mov
	eax = to32i(esp); //mov
	add(edx, eax);
	ecx = edx; //mov
	eax = to32i(ebx); //mov
	to32i(ebx+0x1C) = edx; //mov
	sub(ecx, eax);
	edi = to32i(esp); //mov
	to32i(ebx+0x1C) = ecx; //mov
	cmp(ebp, edi);
	if (jnz())
		goto loc_4BCEF5;
	eax = ecx; //mov
	edx = to32i(ebx+0x18); //mov
	sub(esi, edi);
	sub(eax, edx);
	sub(esi, eax);
	add(esi, esi);
	test(esi, esi);
	if (jle())
		goto loc_4BCEDC;
	xor_(edx, edx);
loc_4BCEC6:
	eax = to32i(ebx+0x10); //mov
	to16i(eax) = dx; //mov
	edi = to32i(ebx+0x10); //mov
	add(edi, (int32_t)2);
	dec(esi);
	to32i(ebx+0x10) = edi; //mov
	test(esi, esi);
	if (jg())
		goto loc_4BCEC6;
loc_4BCEDC:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BCEE6:
	xor_(ebp, ebp);
	goto loc_4BCE5F;
loc_4BCEED:
	to32i(esp) = ebp; //mov
	goto loc_4BCE6A;
loc_4BCEF5:
	ecx = 0x1C; //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = ecx; //mov
	sub(esi, edx);
	imul32(esi, -1);
	cmp(esi, (int32_t)0xFFFFFFE4);
	if (jnz())
		goto loc_4BCF11;
	xor_(esi, esi);
loc_4BCF11:
	add(esi, esi);
	xor_(edx, edx);
	test(esi, esi);
	if (jl())
		goto loc_4BCF27;
	to16i(ebx+0x20) = dx; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BCF27:
	ecx = ebx; //mov
	eax = (int32_t)(intptr_t)(esi+esi); //lea
loc_4BCF2C:
	add(eax, (int32_t)2);
	ebp = to32i(ebx+0x10); //mov
	inc(esi);
	add(ecx, (int32_t)2);
	di = to16i(eax+ebp-2); //mov
	inc(edx);
	to16i(ecx+0x22) = di; //mov
	test(eax, eax);
	if (jl())
		goto loc_4BCF2C;
	to16i(ebx+0x20) = dx; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BCF54()
{
	to32i(eax+0x1C) = 0; //mov
	to16i(eax+0x20) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to16i(eax+0xA) = 0; //mov
	to16i(eax+8) = 0; //mov
	to32i(eax+0x14) = edx; //mov
	to32i(eax+0x18) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BCD84; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BCD80; //mov
	eax = 0x90; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BCFA0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = ecx; //mov
	edi = ebx; //mov
	edx = to32i(ecx); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_4BCFB9;
	edi = eax; //mov
loc_4BCFB9:
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_4BCFE0;
	ecx = to32i(esp+4); //mov
loc_4BCFC3:
	add(edx, (int32_t)2);
	bx = to16i(ecx); //mov
	add(ecx, (int32_t)4);
	to16i(edx-2) = bx; //mov
	add(edx, (int32_t)2);
	bx = to16i(ecx-2); //mov
	inc(eax);
	to16i(edx-2) = bx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4BCFC3;
loc_4BCFE0:
	cmp(eax, ebp);
	if (jge())
		goto loc_4BD00C;
	ecx = to32i(esp+4); //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebx, ecx);
loc_4BCFF1:
	si = to16i(ebx); //mov
	add(ebx, (int32_t)4);
	to16i(ecx) = si; //mov
	add(ecx, (int32_t)4);
	si = to16i(ebx-2); //mov
	inc(eax);
	to16i(ecx-2) = si; //mov
	cmp(eax, ebp);
	if (jl())
		goto loc_4BCFF1;
loc_4BD00C:
	eax = to32i(esp); //mov
	to32i(eax) = edx; //mov
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BD01C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x7C);
	edi = edx; //mov
	edx = to32i(ebx); //mov
	esi = eax; //mov
	to32i(eax+0x10) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BD089;
	edx = (int32_t)(intptr_t)(eax+0x10); //lea
	to32i(esp+0x74) = edx; //mov
	ebp = (int32_t)(intptr_t)(eax+0x2C); //lea
loc_4BD03A:
	cmp(to16i(esi+0x28), (int16_t)0);
	if (jnz())
		goto loc_4BD0A5;
	eax = to32i(esi+0x1C); //mov
	ecx = to32i(esi+0x24); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, ecx);
	if (jge())
		goto loc_4BD0C6;
	imul32(edx, to32i(esi+0x1C), 0x1E);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	eax = to32i(esi+0x1C); //mov
	sub(edi, (int32_t)0x1C);
	add(eax, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x1C) = eax; //mov
loc_4BD085:
	test(edi, edi);
	if (jg())
		goto loc_4BD03A;
loc_4BD089:
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(to32i(esi+0x10), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BD1FE;
	xor_(eax, eax);
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD0A5:
	ecx = to32i(esp+0x74); //mov
	ebx = edi; //mov
	eax = to32i(esi+0x26); //mov
	edx = ebp; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4BCFA0(); esp += 4; //call
	bx = to16i(esi+0x28); //mov
	sub(ebx, eax);
	sub(edi, eax);
	to16i(esi+0x28) = bx; //mov
	goto loc_4BD085;
loc_4BD0C6:
	imul32(edx, to32i(esi+0x1C), 0x1E);
	eax = to32i(esi+0x10); //mov
	ecx = 0x1C; //mov
	to32i(esp+0x70) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(esi) = 0x1C; //mov
	edx = to32i(esi+0x14); //mov
	to32i(esi+0x10) = ebp; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	add(to32i(esi+0x1C), (int32_t)0x1C);
	bx = to16i(esi+0x24); //mov
	ax = to16i(esi+0x1C); //mov
	edx = 0x1C; //mov
	sub(eax, ebx);
	sub(edx, eax);
	ax = to16i(esi+0x108); //mov
	to16i(esi+0x28) = dx; //mov
	to16i(esi+6) = ax; //mov
	ax = to16i(esi+0x10A); //mov
	to16i(esi+4) = ax; //mov
	ax = to16i(esi+0x10C); //mov
	to16i(esi+0xA) = ax; //mov
	ax = to16i(esi+0x10E); //mov
	ecx = edx; //mov
	to16i(esi+8) = ax; //mov
	inc(ecx);
	eax = to32i(esi+0x20); //mov
	to16i(esi+0x28) = cx; //mov
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(eax, ecx);
	to32i(esi+0x1C) = eax; //mov
	eax = to32i(esi+0x20); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(esp, (int32_t)4);
	test(edx, edx);
	if (jz())
		goto loc_4BD1F2;
	to32i(esi) = ecx; //mov
	imul32(edx, to32i(esi+0x1C), 0x1E);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	add(edx, eax);
	eax = esp; //mov
	to32i(esi+0xC) = edx; //mov
	push32(esi);
	to32i(esi+0x10) = eax; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	ebx = to32i(esi+0x1C); //mov
	add(ebx, (int32_t)0x1C);
	edx = to32i(esi+0x20); //mov
	eax = ebx; //mov
	add(esp, (int32_t)4);
	sub(eax, edx);
	edx = 0x38; //mov
	to32i(esp+0x78) = eax; //mov
	add(eax, eax);
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	to32i(esi+0x1C) = ebx; //mov
	edx = esp; //mov
	ecx = to32i(esp+0x78); //mov
	add(eax, edx);
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_4BD1F2;
loc_4BD1C0:
	ecx = to32i(esi+0x26); //mov
	sar(ecx, (int32_t)0x10);
	bx = to16i(eax); //mov
	to16i(esi+ecx*4+0x2C) = bx; //mov
	ecx = to32i(esi+0x26); //mov
	sar(ecx, (int32_t)0x10);
	bx = to16i(eax+2); //mov
	to16i(esi+ecx*4+0x2E) = bx; //mov
	add(eax, (int32_t)4);
	bx = to16i(esi+0x28); //mov
	inc(edx);
	inc(ebx);
	ecx = to32i(esp+0x78); //mov
	to16i(esi+0x28) = bx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_4BD1C0;
loc_4BD1F2:
	eax = to32i(esp+0x70); //mov
	to32i(esi+0x10) = eax; //mov
	goto loc_4BD085;
loc_4BD1FE:
	eax = to32i(esi+0x26); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)2);
	edx = to32i(esi+0x10); //mov
	ecx = (int32_t)(intptr_t)(esi+eax); //lea
	ax = to16i(edx); //mov
	to16i(ecx+0x2C) = ax; //mov
	eax = to32i(esi+0x26); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)2);
	edx = to32i(esi+0x10); //mov
	ecx = (int32_t)(intptr_t)(esi+eax); //lea
	ax = to16i(edx+2); //mov
	to16i(ecx+0x2E) = ax; //mov
	edx = to32i(esi+0x10); //mov
	cx = to16i(esi+0x28); //mov
	add(edx, (int32_t)4);
	inc(ecx);
	to32i(esi+0x10) = edx; //mov
	inc(edi);
	to16i(esi+0x28) = cx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BD1FE;
	xor_(eax, eax);
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BD24C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = edx; //mov
	edx = to32i(ebx); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x26); //mov
	sar(edx, (int32_t)0x10);
	esi = eax; //mov
	cmp(ebp, edx);
	if (jle())
		goto loc_4BD29E;
	edi = 4; //mov
	xor_(ebx, ebx);
loc_4BD26D:
	edx = to32i(esi+0x26); //mov
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jge())
		goto loc_4BD31D;
	edx = to32i(esi+0x10); //mov
	cx = to16i(eax+0x2C); //mov
	to16i(edx) = cx; //mov
	edx = to32i(esi+0x10); //mov
	cx = to16i(eax+0x2E); //mov
	to16i(edx+2) = cx; //mov
	ecx = to32i(esi+0x10); //mov
	add(eax, (int32_t)4);
	add(ecx, edi);
	inc(ebx);
	to32i(esi+0x10) = ecx; //mov
	goto loc_4BD26D;
loc_4BD29E:
	xor_(ebx, ebx);
	test(ebp, ebp);
	if (jle())
		goto loc_4BD2CC;
loc_4BD2A4:
	edx = to32i(esi+0x10); //mov
	cx = to16i(eax+0x2C); //mov
	to16i(edx) = cx; //mov
	ecx = to32i(esi+0x10); //mov
	dx = to16i(eax+0x2E); //mov
	to16i(ecx+2) = dx; //mov
	edi = to32i(esi+0x10); //mov
	add(eax, (int32_t)4);
	add(edi, (int32_t)4);
	inc(ebx);
	to32i(esi+0x10) = edi; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_4BD2A4;
loc_4BD2CC:
	eax = esi; //mov
	xor_(ebp, ebp);
	edx = (int32_t)(intptr_t)(ebx*4+0); //lea
	to32i(esp+4) = ebp; //mov
	add(edx, esi);
loc_4BD2DD:
	ecx = to32i(esi+0x26); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ebx, ecx);
	if (jge())
		goto loc_4BD309;
	cx = to16i(edx+0x2C); //mov
	to16i(eax+0x2C) = cx; //mov
	add(eax, (int32_t)4);
	cx = to16i(edx+0x2E); //mov
	to16i(eax+0x2A) = cx; //mov
	ecx = to32i(esp+4); //mov
	add(edx, (int32_t)4);
	inc(ecx);
	inc(ebx);
	to32i(esp+4) = ecx; //mov
	goto loc_4BD2DD;
loc_4BD309:
	eax = to32i(esp+4); //mov
	xor_(edx, edx);
	to16i(esi+0x28) = ax; //mov
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD31D:
	eax = to32i(esi+0x20); //mov
	sub(ebp, edx);
	sub(eax, to32i(esi+0x1C));
	sub(eax, (int32_t)0x1C);
	cmp(ebp, eax);
	if (jge())
		goto loc_4BD411;
	to32i(esp+4) = ebp; //mov
loc_4BD334:
	cmp(to32i(esp+4), (int32_t)0);
	if (jl())
		goto loc_4BD41A;
loc_4BD33F:
	eax = to32i(esp+4); //mov
	to32i(esi) = eax; //mov
	eax = to32i(esi+0x1C); //mov
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	add(esp, (int32_t)4);
	edi = to32i(esi+0x1C); //mov
	add(edi, to32i(esp+4));
	xor_(ebx, ebx);
	edx = edi; //mov
	eax = to32i(esi); //mov
	to32i(esi+0x1C) = edi; //mov
	sub(edx, eax);
	eax = to32i(esi); //mov
	to32i(esi+0x1C) = edx; //mov
	to32i(esp) = eax; //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	xor_(edx, edx);
	eax = ecx; //mov
	test(ecx, ecx);
loc_4BD398:
	if (jl())
		goto loc_4BD425;
	eax = to32i(esi+0x10); //mov
	to16i(esi+0x28) = bx; //mov
	sub(eax, edx);
	to32i(esi+0x10) = eax; //mov
	ecx = to32i(esi+0x1C); //mov
	eax = to32i(esi+0x20); //mov
	edx = to32i(esp+4); //mov
	sub(eax, ecx);
	sub(ebp, edx);
	cmp(eax, (int32_t)0x1C);
	if (jge())
		goto loc_4BD405;
	ax = to16i(esi+6); //mov
	to16i(esi+0x108) = ax; //mov
	ax = to16i(esi+4); //mov
	to16i(esi+0x10A) = ax; //mov
	ax = to16i(esi+0xA); //mov
	to16i(esi+0x10C) = ax; //mov
	ax = to16i(esi+8); //mov
	to16i(esi+0x10E) = ax; //mov
	eax = to32i(esi+0x110); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BD01C; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4BD405;
	ebx = (int32_t)(intptr_t)(esi+0x10); //lea
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4BD01C(); esp += 4; //call
loc_4BD405:
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD411:
	to32i(esp+4) = eax; //mov
	goto loc_4BD334;
loc_4BD41A:
	xor_(ebx, ebx);
	to32i(esp+4) = ebx; //mov
	goto loc_4BD33F;
loc_4BD425:
	ecx = to32i(esi+0x10); //mov
	edi = (int32_t)(intptr_t)(ecx+eax); //lea
	ecx = (int32_t)(intptr_t)(esi+edx); //lea
	di = to16i(edi); //mov
	to16i(ecx+0x2C) = di; //mov
	edi = to32i(esi+0x10); //mov
	di = to16i(edi+eax+2); //mov
	inc(ebx);
	to16i(ecx+0x2E) = di; //mov
	edi = to32i(esp); //mov
	add(eax, (int32_t)4);
	inc(edi);
	add(edx, (int32_t)4);
	to32i(esp) = edi; //mov
	test(eax, eax);
	goto loc_4BD398;
}
Fn(void) Game::_sub_4BD458()
{
	to32i(eax+0x1C) = 0; //mov
	to16i(eax+0x28) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to16i(eax+0xA) = 0; //mov
	to16i(eax+8) = 0; //mov
	to32i(eax+0x14) = edx; //mov
	to32i(eax+0x18) = ebx; //mov
	to32i(eax+0x20) = ecx; //mov
	edx = to32i(esp+4); //mov
	to32i(eax+0x24) = edx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x110) = edx; //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4BD24C; //mov
	to32i(eax) = 0; //mov
	eax = 0x114; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BD4B0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = edx; //mov
	edx = to32i(eax+0x14); //mov
	esi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BD552;
	push32(ecx);
	edx = to32i(ebx); //mov
	to32i(eax+0x10) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BD536;
	edx = (int32_t)(intptr_t)(eax+0x10); //lea
	to32i(esp+4) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x24); //lea
	ebp = (int32_t)(intptr_t)(eax+0x18); //lea
	add(eax, (int32_t)0x14);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+8) = eax; //mov
loc_4BD4E7:
	ebx = to32i(esi+0x20); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4BD559;
	eax = to32i(esi+0x1C); //mov
	edx = to32i(esi+0x18); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, edx);
	if (jge())
		goto loc_4BD576;
	imul32(edx, to32i(esi+0x1C), 0x1E);
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	ebx = to32i(esi+0x1C); //mov
	sub(edi, (int32_t)0x1C);
	add(ebx, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x1C) = ebx; //mov
loc_4BD532:
	test(edi, edi);
	if (jg())
		goto loc_4BD4E7;
loc_4BD536:
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(to32i(esi+0x10), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BD62D;
	xor_(eax, eax);
	pop32(ecx);
loc_4BD54B:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BD552:
	eax = 0xFFFFFFFF; //mov
	goto loc_4BD54B;
loc_4BD559:
	ecx = to32i(esp+4); //mov
	edx = to32i(esp+0xC); //mov
	eax = ebx; //mov
	ebx = edi; //mov
	esp -= 4; _sub_4BCFA0(); esp += 4; //call
	edx = to32i(esi+0x20); //mov
	sub(edx, eax);
	sub(edi, eax);
	to32i(esi+0x20) = edx; //mov
	goto loc_4BD532;
loc_4BD576:
	cmp(to32i(esi+0x14), (int32_t)1);
	if (jz())
		goto loc_4BD5C1;
	imul32(edx, to32i(esi+0x1C), 0x1E);
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C22F0(); esp += 4; //call
	eax = to32i(esi+0x1C); //mov
	add(eax, ebx);
	edx = to32i(esi+0x18); //mov
	to32i(esi+0x1C) = eax; //mov
	sub(eax, edx);
	edx = ebx; //mov
	ecx = to32i(esi+0x10); //mov
	sub(edx, eax);
	shl(eax, (int32_t)2);
	add(esp, (int32_t)4);
	sub(ecx, eax);
	sub(edi, edx);
	to32i(esi+0x10) = ecx; //mov
loc_4BD5C1:
	eax = to32i(esp+8); //mov
	edx = ebp; //mov
	call(to32i(dword_4DCFDC));
	ebx = to32i(esi+0x14); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4BD608;
	dx = to16i(ebx); //mov
	to16i(esi+6) = dx; //mov
	dx = to16i(ebx+2); //mov
	to16i(esi+4) = dx; //mov
	dx = to16i(ebx+4); //mov
	to16i(esi+0xA) = dx; //mov
	ax = to16i(ebx+6); //mov
	to16i(esi+8) = ax; //mov
	eax = to32i(esi+0x14); //mov
	to32i(esi+0x1C) = 0; //mov
	add(eax, (int32_t)8);
	to32i(esi+0x14) = eax; //mov
	goto loc_4BD532;
loc_4BD608:
	add(edi, edi);
	test(edi, edi);
	if (jle())
		goto loc_4BD532;
loc_4BD612:
	eax = to32i(esi+0x10); //mov
	to16i(eax) = 0; //mov
	eax = to32i(esi+0x10); //mov
	add(eax, (int32_t)2);
	dec(edi);
	to32i(esi+0x10) = eax; //mov
	test(edi, edi);
	if (jg())
		goto loc_4BD612;
	goto loc_4BD532;
loc_4BD62D:
	edx = to32i(esi+0x10); //mov
	eax = to32i(esi+0x20); //mov
	dx = to16i(edx); //mov
	to16i(esi+eax*4+0x24) = dx; //mov
	edx = to32i(esi+0x10); //mov
	eax = to32i(esi+0x20); //mov
	dx = to16i(edx+2); //mov
	to16i(esi+eax*4+0x26) = dx; //mov
	ecx = to32i(esi+0x10); //mov
	ebx = to32i(esi+0x20); //mov
	add(ecx, (int32_t)4);
	inc(ebx);
	to32i(esi+0x10) = ecx; //mov
	inc(edi);
	to32i(esi+0x20) = ebx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BD62D;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BD66C()
{
	to32i(eax+0x14) = 1; //mov
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x20) = 0; //mov
	to16i(eax+6) = 0; //mov
	to16i(eax+4) = 0; //mov
	to16i(eax+0xA) = 0; //mov
	to16i(eax+8) = 0; //mov
	to32i(eax+0x18) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BD4B0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = 0x90; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BD6C0()
{
	eax = to32i(eax+0x1C); //mov
}
Fn(void) Game::_sub_4BD6C4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	eax = ebx; //mov
	edx = to32i(ecx+0x1C); //mov
	edi = to32i(ecx+0x18); //mov
	ebx = ecx; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_4BD73E;
	eax = to32i(eax); //mov
	ebp = to32i(ecx+0x20); //mov
	to32i(ecx+0x10) = eax; //mov
	cmp(esi, ebp);
	if (jg())
		goto loc_4BD748;
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_4BD708;
	edx = ecx; //mov
loc_4BD6EE:
	ecx = to32i(ebx+0x10); //mov
	edi = to32i(edx+0x24); //mov
	to32i(ecx) = edi; //mov
	ecx = to32i(ebx+0x10); //mov
	add(edx, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(eax);
	to32i(ebx+0x10) = ecx; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4BD6EE;
loc_4BD708:
	esi = to32i(ebx+0x20); //mov
	xor_(ecx, ecx);
	cmp(eax, esi);
	if (jge())
		goto loc_4BD734;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	esi = ebx; //mov
	add(edx, ebx);
loc_4BD71C:
	fld(to32f(edx+0x24));
	inc(ecx);
	inc(eax);
	fstp(to32f(esi+0x24));
	add(esi, (int32_t)4);
	edi = to32i(ebx+0x20); //mov
	add(edx, (int32_t)4);
	cmp(eax, edi);
	if (jl())
		goto loc_4BD71C;
loc_4BD734:
	xor_(eax, eax);
	to32i(ebx+0x20) = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD73E:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD748:
	xor_(edx, edx);
	test(ebp, ebp);
	if (jle())
		goto loc_4BD76C;
	eax = ecx; //mov
loc_4BD750:
	ecx = to32i(ebx+0x10); //mov
	fld(to32f(eax+0x24));
	add(eax, (int32_t)4);
	fstp(to32f(ecx));
	ecx = to32i(ebx+0x10); //mov
	inc(edx);
	add(ecx, (int32_t)4);
	edi = to32i(ebx+0x20); //mov
	to32i(ebx+0x10) = ecx; //mov
	cmp(edx, edi);
	if (jl())
		goto loc_4BD750;
loc_4BD76C:
	edi = to32i(ebx+0x18); //mov
	eax = to32i(ebx+0x1C); //mov
	ebp = to32i(ebx+0x20); //mov
	sub(edi, eax);
	sub(esi, ebp);
	test(edi, edi);
	if (jl())
		goto loc_4BD7FF;
loc_4BD781:
	cmp(esi, edi);
	if (jge())
		goto loc_4BD806;
	ebp = esi; //mov
loc_4BD78B:
	edx = to32i(ebx+0x1C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(ebx+0x14); //mov
	to32i(ebx) = ebp; //mov
	add(edx, eax);
	push32(ebx);
	to32i(ebx+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	edx = to32i(ebx+0x1C); //mov
	add(edx, ebp);
	eax = to32i(ebx); //mov
	ecx = edx; //mov
	to32i(ebx+0x1C) = edx; //mov
	sub(ecx, eax);
	add(esp, (int32_t)4);
	to32i(ebx+0x1C) = ecx; //mov
	cmp(edi, ebp);
	if (jnz())
		goto loc_4BD80A;
	eax = ecx; //mov
	edi = to32i(ebx+0x18); //mov
	sub(esi, ebp);
	sub(eax, edi);
	sub(esi, eax);
	test(esi, esi);
	if (jle())
		goto loc_4BD7F8;
loc_4BD7E1:
	eax = to32i(ebx+0x10); //mov
	to32i(eax) = 0; //mov
	ebp = to32i(ebx+0x10); //mov
	add(ebp, (int32_t)4);
	dec(esi);
	to32i(ebx+0x10) = ebp; //mov
	test(esi, esi);
	if (jg())
		goto loc_4BD7E1;
loc_4BD7F8:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD7FF:
	xor_(edi, edi);
	goto loc_4BD781;
loc_4BD806:
	ebp = edi; //mov
	goto loc_4BD78B;
loc_4BD80A:
	esi = to32i(ebx); //mov
	xor_(ecx, ecx);
	test(esi, esi);
	if (jl())
		goto loc_4BD81C;
	to32i(ebx+0x20) = ecx; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD81C:
	edx = ebx; //mov
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
loc_4BD825:
	add(eax, (int32_t)4);
	inc(esi);
	edi = to32i(ebx+0x10); //mov
	add(edx, (int32_t)4);
	inc(ecx);
	ebp = to32i(edi+eax-4); //mov
	to32i(edx+0x20) = ebp; //mov
	test(eax, eax);
	if (jl())
		goto loc_4BD825;
	to32i(ebx+0x20) = ecx; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BD848()
{
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x20) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0x14) = edx; //mov
	to32i(eax+0x18) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BD6C4; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BD6C0; //mov
	eax = 0x90; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BD890()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	to32i(esp) = edx; //mov
	ebp = ecx; //mov
	esi = ebx; //mov
	edx = to32i(ecx); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_4BD8A7;
	esi = eax; //mov
loc_4BD8A7:
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_4BD8C0;
	ecx = to32i(esp); //mov
loc_4BD8B0:
	fld(to32f(ecx));
	add(edx, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(eax);
	fstp(to32f(edx-4));
	cmp(eax, esi);
	if (jl())
		goto loc_4BD8B0;
loc_4BD8C0:
	cmp(eax, edi);
	if (jge())
		goto loc_4BD8E0;
	ebx = to32i(esp); //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ecx, ebx);
loc_4BD8D0:
	fld(to32f(ecx));
	add(ebx, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(eax);
	fstp(to32f(ebx-4));
	cmp(eax, edi);
	if (jl())
		goto loc_4BD8D0;
loc_4BD8E0:
	eax = esi; //mov
	to32i(ebp+0) = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BD8EC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x7C);
	edi = edx; //mov
	edx = to32i(ebx); //mov
	esi = eax; //mov
	to32i(eax+0x10) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BD955;
	edx = (int32_t)(intptr_t)(eax+0x10); //lea
	to32i(esp+0x74) = edx; //mov
	ebp = (int32_t)(intptr_t)(eax+0x2C); //lea
loc_4BD90A:
	ecx = to32i(esi+0x28); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4BD971;
	eax = to32i(esi+0x1C); //mov
	ebx = to32i(esi+0x24); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, ebx);
	if (jge())
		goto loc_4BD98C;
	imul32(edx, to32i(esi+0x1C), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	eax = to32i(esi+0x1C); //mov
	sub(edi, (int32_t)0x1C);
	add(eax, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x1C) = eax; //mov
loc_4BD951:
	test(edi, edi);
	if (jg())
		goto loc_4BD90A;
loc_4BD955:
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(to32i(esi+0x10), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BDA8B;
	xor_(eax, eax);
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BD971:
	eax = ecx; //mov
	ebx = edi; //mov
	edx = ebp; //mov
	ecx = to32i(esp+0x74); //mov
	esp -= 4; _sub_4BD890(); esp += 4; //call
	edx = to32i(esi+0x28); //mov
	sub(edx, eax);
	sub(edi, eax);
	to32i(esi+0x28) = edx; //mov
	goto loc_4BD951;
loc_4BD98C:
	eax = to32i(esi+0x10); //mov
	to32i(esp+0x70) = eax; //mov
	imul32(edx, to32i(esi+0x1C), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(esi) = 0x1C; //mov
	edx = to32i(esi+0x14); //mov
	to32i(esi+0x10) = ebp; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	edx = to32i(esi+0x1C); //mov
	add(edx, (int32_t)0x1C);
	ecx = to32i(esi+0x24); //mov
	eax = edx; //mov
	to32i(esi+0x1C) = edx; //mov
	edx = 0x1C; //mov
	sub(eax, ecx);
	sub(edx, eax);
	eax = to32i(esi+0x20); //mov
	to32i(esi+0x28) = edx; //mov
	ebx = (int32_t)(intptr_t)(edx+1); //lea
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(eax, ecx);
	to32i(esi+0x1C) = eax; //mov
	eax = to32i(esi+0x20); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	fld(to32f(esi+0x108));
	add(esp, (int32_t)4);
	fstp(to32f(esi+4));
	eax = to32i(esi+0x10C); //mov
	to32i(esi+8) = eax; //mov
	to32i(esi+0x28) = ebx; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BDA7F;
	eax = to32i(esi+0x1C); //mov
	imul32(edx, eax, 0xF);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = ecx; //mov
	add(edx, eax);
	eax = esp; //mov
	to32i(esi+0xC) = edx; //mov
	push32(esi);
	to32i(esi+0x10) = eax; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	edx = to32i(esi+0x1C); //mov
	add(edx, (int32_t)0x1C);
	ecx = to32i(esi+0x20); //mov
	eax = edx; //mov
	add(esp, (int32_t)4);
	sub(eax, ecx);
	to32i(esp+0x78) = eax; //mov
	eax = 0x1C; //mov
	ebx = to32i(esp+0x78); //mov
	to32i(esi+0x1C) = edx; //mov
	sub(eax, ebx);
	edx = esp; //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_4BDA7F;
	ebx = to32i(esp+0x78); //mov
loc_4BDA67:
	ecx = to32i(esi+0x28); //mov
	fld(to32f(eax));
	fstp(to32f(esi+ecx*4+0x2C));
	ecx = to32i(esi+0x28); //mov
	add(eax, (int32_t)4);
	inc(ecx);
	inc(edx);
	to32i(esi+0x28) = ecx; //mov
	cmp(edx, ebx);
	if (jl())
		goto loc_4BDA67;
loc_4BDA7F:
	eax = to32i(esp+0x70); //mov
	to32i(esi+0x10) = eax; //mov
	goto loc_4BD951;
loc_4BDA8B:
	edx = to32i(esi+0x10); //mov
	eax = to32i(esi+0x28); //mov
	ecx = to32i(edx); //mov
	to32i(esi+eax*4+0x2C) = ecx; //mov
	ecx = to32i(esi+0x10); //mov
	ebx = to32i(esi+0x28); //mov
	add(ecx, (int32_t)4);
	inc(ebx);
	to32i(esi+0x10) = ecx; //mov
	inc(edi);
	to32i(esi+0x28) = ebx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BDA8B;
	xor_(eax, eax);
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BDAB8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	to32i(esp+4) = edx; //mov
	esi = eax; //mov
	eax = to32i(ebx); //mov
	to32i(ecx+0x10) = eax; //mov
	eax = edx; //mov
	cmp(eax, to32i(ecx+0x28));
	if (jg())
		goto loc_4BDB35;
	edi = to32i(esp+4); //mov
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_4BDAFC;
	edi = to32i(esp+4); //mov
	edx = ecx; //mov
loc_4BDAE3:
	ecx = to32i(esi+0x10); //mov
	ebx = to32i(edx+0x2C); //mov
	to32i(ecx) = ebx; //mov
	ebx = to32i(esi+0x10); //mov
	add(edx, (int32_t)4);
	add(ebx, (int32_t)4);
	inc(eax);
	to32i(esi+0x10) = ebx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4BDAE3;
loc_4BDAFC:
	ebp = to32i(esi+0x28); //mov
	xor_(ebx, ebx);
	cmp(eax, ebp);
	if (jge())
		goto loc_4BDB28;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ecx = esi; //mov
	add(edx, esi);
loc_4BDB10:
	fld(to32f(edx+0x2C));
	inc(ebx);
	inc(eax);
	fstp(to32f(ecx+0x2C));
	add(ecx, (int32_t)4);
	edi = to32i(esi+0x28); //mov
	add(edx, (int32_t)4);
	cmp(eax, edi);
	if (jl())
		goto loc_4BDB10;
loc_4BDB28:
	xor_(eax, eax);
	to32i(esi+0x28) = ebx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BDB35:
	ebx = to32i(ecx+0x28); //mov
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_4BDB5C;
	eax = ecx; //mov
loc_4BDB40:
	ecx = to32i(esi+0x10); //mov
	fld(to32f(eax+0x2C));
	add(eax, (int32_t)4);
	fstp(to32f(ecx));
	ebp = to32i(esi+0x10); //mov
	inc(edx);
	add(ebp, (int32_t)4);
	ecx = to32i(esi+0x28); //mov
	to32i(esi+0x10) = ebp; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_4BDB40;
loc_4BDB5C:
	ebx = to32i(esp+4); //mov
	eax = to32i(esi+0x28); //mov
	edi = to32i(esi+0x1C); //mov
	sub(ebx, eax);
	eax = to32i(esi+0x20); //mov
	sub(eax, edi);
	sub(eax, (int32_t)0x1C);
	to32i(esp+4) = ebx; //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_4BDC43;
	to32i(esp) = ebx; //mov
loc_4BDB7F:
	cmp(to32i(esp), (int32_t)0);
	if (jl())
		goto loc_4BDC4B;
loc_4BDB89:
	eax = to32i(esp); //mov
	edx = to32i(esi+0x1C); //mov
	to32i(esi) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	add(esp, (int32_t)4);
	ecx = to32i(esi+0x1C); //mov
	eax = to32i(esp); //mov
	add(ecx, eax);
	ebx = ecx; //mov
	eax = to32i(esi); //mov
	to32i(esi+0x1C) = ecx; //mov
	sub(ebx, eax);
	to32i(esi+0x1C) = ebx; //mov
	ebx = to32i(esi); //mov
	xor_(edx, edx);
	edi = (int32_t)(intptr_t)(ebx*4+0); //lea
	xor_(ecx, ecx);
	eax = edi; //mov
	test(edi, edi);
loc_4BDBE4:
	if (jl())
		goto loc_4BDC55;
	eax = to32i(esp); //mov
	ebp = to32i(esp+4); //mov
	edi = to32i(esi+0x10); //mov
	to32i(esi+0x28) = ecx; //mov
	sub(edi, edx);
	sub(ebp, eax);
	eax = to32i(esi+0x20); //mov
	edx = to32i(esi+0x1C); //mov
	to32i(esp+4) = ebp; //mov
	sub(eax, edx);
	to32i(esi+0x10) = edi; //mov
	cmp(eax, (int32_t)0x1C);
	if (jge())
		goto loc_4BDC39;
	fld(to32f(esi+4));
	eax = to32i(esi+0x110); //mov
	fstp(to32f(esi+0x108));
	edx = to32i(esi+8); //mov
	to32i(esi+0x10C) = edx; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BD8EC; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4BDC39;
	ebx = (int32_t)(intptr_t)(esi+0x10); //lea
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4BD8EC(); esp += 4; //call
loc_4BDC39:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BDC43:
	to32i(esp) = eax; //mov
	goto loc_4BDB7F;
loc_4BDC4B:
	xor_(edx, edx);
	to32i(esp) = edx; //mov
	goto loc_4BDB89;
loc_4BDC55:
	edi = to32i(esi+0x10); //mov
	add(edi, eax);
	inc(ebx);
	to32i(esp+8) = edi; //mov
	inc(ecx);
	ebp = to32i(esp+8); //mov
	add(eax, (int32_t)4);
	edi = (int32_t)(intptr_t)(esi+edx); //lea
	fld(to32f(ebp+0));
	add(edx, (int32_t)4);
	fstp(to32f(edi+0x2C));
	test(eax, eax);
	goto loc_4BDBE4;
}
Fn(void) Game::_sub_4BDC7C()
{
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x28) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0x14) = edx; //mov
	to32i(eax+0x18) = ebx; //mov
	to32i(eax+0x20) = ecx; //mov
	edx = to32i(esp+4); //mov
	to32i(eax+0x24) = edx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x110) = edx; //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4BDAB8; //mov
	to32i(eax) = 0; //mov
	eax = 0x114; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BDCD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = edx; //mov
	edx = to32i(eax+0x14); //mov
	esi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BDD99;
	push32(ecx);
	edx = to32i(ebx); //mov
	to32i(eax+0x10) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BDD7D;
	ebp = (int32_t)(intptr_t)(eax+0x10); //lea
	edx = (int32_t)(intptr_t)(eax+0x24); //lea
	to32i(esp+8) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x18); //lea
	add(eax, (int32_t)0x14);
	to32i(esp+4) = edx; //mov
	to32i(esp+0xC) = eax; //mov
loc_4BDD0B:
	ebx = to32i(esi+0x20); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4BDDA5;
	eax = to32i(esi+0x1C); //mov
	edx = to32i(esi+0x18); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, edx);
	if (jge())
		goto loc_4BDDC0;
	sub(edx, to32i(esi+0x1C));
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = eax; //mov
	imul32(ebx, ecx);
	cmp(edi, ebx);
	if (jge())
		goto loc_4BDD4C;
	edx = (int32_t)(intptr_t)(edi+0x1B); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(ebx, eax, 0x1C);
loc_4BDD4C:
	imul32(edx, to32i(esi+0x1C), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = ebx; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	edx = to32i(esi+0x1C); //mov
	sub(edi, ebx);
	add(edx, ebx);
	add(esp, (int32_t)4);
	to32i(esi+0x1C) = edx; //mov
loc_4BDD79:
	test(edi, edi);
	if (jg())
		goto loc_4BDD0B;
loc_4BDD7D:
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(to32i(esi+0x10), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BDE66;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BDD99:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BDDA5:
	edx = to32i(esp+8); //mov
	eax = ebx; //mov
	ecx = ebp; //mov
	ebx = edi; //mov
	esp -= 4; _sub_4BD890(); esp += 4; //call
	ecx = to32i(esi+0x20); //mov
	sub(ecx, eax);
	sub(edi, eax);
	to32i(esi+0x20) = ecx; //mov
	goto loc_4BDD79;
loc_4BDDC0:
	cmp(to32i(esi+0x14), (int32_t)1);
	if (jz())
		goto loc_4BDE14;
	cmp(edx, to32i(esi+0x1C));
	if (jle())
		goto loc_4BDE14;
	imul32(edx, to32i(esi+0x1C), 0xF);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x14); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0xC) = edx; //mov
	esp -= 4; _sub_4C2580(); esp += 4; //call
	edx = to32i(esi+0x1C); //mov
	eax = 0x1C; //mov
	add(edx, (int32_t)0x1C);
	ecx = to32i(esi+0x18); //mov
	to32i(esi+0x1C) = edx; //mov
	sub(edx, ecx);
	ebx = to32i(esi+0x10); //mov
	sub(eax, edx);
	shl(edx, (int32_t)2);
	add(esp, (int32_t)4);
	sub(ebx, edx);
	sub(edi, eax);
	to32i(esi+0x10) = ebx; //mov
loc_4BDE14:
	edx = to32i(esp+4); //mov
	eax = to32i(esp+0xC); //mov
	call(to32i(dword_4DCFDC));
	eax = to32i(esi+0x14); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4BDE46;
loc_4BDE29:
	test(edi, edi);
	if (jle())
		goto loc_4BDD79;
	eax = to32i(esi+0x10); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esi+0x10); //mov
	add(eax, (int32_t)4);
	dec(edi);
	to32i(esi+0x10) = eax; //mov
	goto loc_4BDE29;
loc_4BDE46:
	fild(to16i(eax));
	edx = to32i(esi+0x14); //mov
	fstp(to32f(esi+4));
	fild(to16i(eax+2));
	to32i(esi+0x1C) = 0; //mov
	add(edx, (int32_t)8);
	fstp(to32f(esi+8));
	to32i(esi+0x14) = edx; //mov
	goto loc_4BDD79;
loc_4BDE66:
	edx = to32i(esi+0x10); //mov
	eax = to32i(esi+0x20); //mov
	ecx = to32i(edx); //mov
	to32i(esi+eax*4+0x24) = ecx; //mov
	ebx = to32i(esi+0x10); //mov
	ebp = to32i(esi+0x20); //mov
	add(ebx, (int32_t)4);
	inc(ebp);
	to32i(esi+0x10) = ebx; //mov
	inc(edi);
	to32i(esi+0x20) = ebp; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BDE66;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BDE94()
{
	to32i(eax+0x14) = 1; //mov
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x20) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0x18) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BDCD0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = 0x90; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BDEE0()
{
	eax = to32i(eax+0x24); //mov
}
Fn(void) Game::_sub_4BDEE4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	eax = ebx; //mov
	edx = to32i(ecx+0x24); //mov
	edi = to32i(ecx+0x20); //mov
	ebx = ecx; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_4BDF66;
	eax = to32i(eax); //mov
	to32i(ecx+0x18) = eax; //mov
	eax = to32i(ecx+0x28); //mov
	sar(eax, (int32_t)1);
	cmp(esi, eax);
	if (jg())
		goto loc_4BDF70;
	add(esi, esi);
	xor_(edx, edx);
	test(esi, esi);
	if (jle())
		goto loc_4BDF30;
	eax = ecx; //mov
loc_4BDF16:
	ecx = to32i(ebx+0x18); //mov
	edi = to32i(eax+0x2C); //mov
	to32i(ecx) = edi; //mov
	ecx = to32i(ebx+0x18); //mov
	add(eax, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(edx);
	to32i(ebx+0x18) = ecx; //mov
	cmp(edx, esi);
	if (jl())
		goto loc_4BDF16;
loc_4BDF30:
	esi = to32i(ebx+0x28); //mov
	xor_(ecx, ecx);
	cmp(edx, esi);
	if (jge())
		goto loc_4BDF5C;
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	eax = ebx; //mov
	add(esi, ebx);
loc_4BDF44:
	fld(to32f(esi+0x2C));
	inc(ecx);
	inc(edx);
	fstp(to32f(eax+0x2C));
	add(eax, (int32_t)4);
	edi = to32i(ebx+0x28); //mov
	add(esi, (int32_t)4);
	cmp(edx, edi);
	if (jl())
		goto loc_4BDF44;
loc_4BDF5C:
	xor_(eax, eax);
	to32i(ebx+0x28) = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BDF66:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BDF70:
	ebp = to32i(ecx+0x28); //mov
	xor_(eax, eax);
	test(ebp, ebp);
	if (jle())
		goto loc_4BDF98;
	edx = ecx; //mov
loc_4BDF7B:
	ecx = to32i(ebx+0x18); //mov
	fld(to32f(edx+0x2C));
	add(edx, (int32_t)4);
	fstp(to32f(ecx));
	ecx = to32i(ebx+0x18); //mov
	inc(eax);
	add(ecx, (int32_t)4);
	edi = to32i(ebx+0x28); //mov
	to32i(ebx+0x18) = ecx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4BDF7B;
loc_4BDF98:
	eax = to32i(ebx+0x28); //mov
	sar(eax, (int32_t)1);
	ebp = to32i(ebx+0x20); //mov
	sub(esi, eax);
	sub(ebp, to32i(ebx+0x24));
	test(ebp, ebp);
	if (jl())
		goto loc_4BE027;
loc_4BDFAD:
	cmp(esi, ebp);
	if (jge())
		goto loc_4BE02B;
	edi = esi; //mov
loc_4BDFB7:
	eax = to32i(ebx+0x24); //mov
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(ebx+0x1C); //mov
	to32i(ebx) = edi; //mov
	add(edx, eax);
	push32(ebx);
	to32i(ebx+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	edx = to32i(ebx+0x24); //mov
	add(edx, edi);
	eax = to32i(ebx); //mov
	ecx = edx; //mov
	to32i(ebx+0x24) = edx; //mov
	sub(ecx, eax);
	add(esp, (int32_t)4);
	to32i(ebx+0x24) = ecx; //mov
	cmp(ebp, edi);
	if (jnz())
		goto loc_4BE02F;
	eax = ecx; //mov
	sub(esi, edi);
	sub(eax, to32i(ebx+0x20));
	sub(esi, eax);
	add(esi, esi);
	test(esi, esi);
	if (jle())
		goto loc_4BE020;
loc_4BE006:
	eax = to32i(ebx+0x18); //mov
	to32i(eax) = 0; //mov
	ebp = to32i(ebx+0x18); //mov
	add(ebp, (int32_t)4);
	dec(esi);
	to32i(ebx+0x18) = ebp; //mov
	test(esi, esi);
	if (jg())
		goto loc_4BE006;
loc_4BE020:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE027:
	xor_(ebp, ebp);
	goto loc_4BDFAD;
loc_4BE02B:
	edi = ebp; //mov
	goto loc_4BDFB7;
loc_4BE02F:
	ecx = 0x1C; //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = ecx; //mov
	sub(esi, edx);
	imul32(esi, -1);
	cmp(esi, (int32_t)0xFFFFFFE4);
	if (jnz())
		goto loc_4BE04B;
	xor_(esi, esi);
loc_4BE04B:
	add(esi, esi);
	xor_(ecx, ecx);
	test(esi, esi);
	if (jl())
		goto loc_4BE05D;
	to32i(ebx+0x28) = ecx; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE05D:
	eax = ebx; //mov
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
loc_4BE066:
	add(edx, (int32_t)4);
	inc(esi);
	edi = to32i(ebx+0x18); //mov
	add(eax, (int32_t)4);
	inc(ecx);
	ebp = to32i(edx+edi-4); //mov
	to32i(eax+0x28) = ebp; //mov
	test(edx, edx);
	if (jl())
		goto loc_4BE066;
	to32i(ebx+0x28) = ecx; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BE088()
{
	to32i(eax+0x24) = 0; //mov
	to32i(eax+0x28) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0xC) = 0; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0x1C) = edx; //mov
	to32i(eax+0x20) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BDEE4; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BDEE0; //mov
	eax = 0x104; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BE0E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	ebp = ecx; //mov
	edi = ebx; //mov
	edx = to32i(ecx); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_4BE0F7;
	edi = eax; //mov
loc_4BE0F7:
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_4BE11C;
	ecx = to32i(esp); //mov
loc_4BE100:
	fld(to32f(ecx));
	add(edx, (int32_t)4);
	add(ecx, (int32_t)8);
	inc(eax);
	fstp(to32f(edx-4));
	add(edx, (int32_t)4);
	ebx = to32i(ecx-4); //mov
	to32i(edx-4) = ebx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_4BE100;
loc_4BE11C:
	cmp(eax, esi);
	if (jge())
		goto loc_4BE144;
	ecx = to32i(esp); //mov
	ebx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ebx, ecx);
loc_4BE12C:
	fld(to32f(ebx));
	add(ebx, (int32_t)8);
	inc(eax);
	fstp(to32f(ecx));
	add(ecx, (int32_t)8);
	fld(to32f(ebx-4));
	fstp(to32f(ecx-4));
	cmp(eax, esi);
	if (jl())
		goto loc_4BE12C;
loc_4BE144:
	eax = edi; //mov
	to32i(ebp+0) = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BE150()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xEC);
	edi = edx; //mov
	edx = to32i(ebx); //mov
	esi = eax; //mov
	to32i(eax+0x18) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BE1C3;
	edx = (int32_t)(intptr_t)(eax+0x18); //lea
	to32i(esp+0xE4) = edx; //mov
	ebp = (int32_t)(intptr_t)(eax+0x34); //lea
loc_4BE174:
	cmp(to16i(esi+0x30), (int16_t)0);
	if (jnz())
		goto loc_4BE1E5;
	eax = to32i(esi+0x24); //mov
	ecx = to32i(esi+0x2C); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, ecx);
	if (jge())
		goto loc_4BE209;
	imul32(edx, to32i(esi+0x24), 0x1E);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x1C); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	sub(edi, (int32_t)0x1C);
	add(eax, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x24) = eax; //mov
loc_4BE1BF:
	test(edi, edi);
	if (jg())
		goto loc_4BE174;
loc_4BE1C3:
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	add(to32i(esi+0x18), eax);
loc_4BE1D0:
	test(edi, edi);
	if (jl())
		goto loc_4BE344;
	xor_(eax, eax);
	add(esp, (int32_t)0xEC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE1E5:
	ecx = to32i(esp+0xE4); //mov
	ebx = edi; //mov
	eax = to32i(esi+0x2E); //mov
	edx = ebp; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4BE0E0(); esp += 4; //call
	bx = to16i(esi+0x30); //mov
	sub(ebx, eax);
	sub(edi, eax);
	to16i(esi+0x30) = bx; //mov
	goto loc_4BE1BF;
loc_4BE209:
	imul32(edx, to32i(esi+0x24), 0x1E);
	eax = to32i(esi+0x18); //mov
	ecx = 0x1C; //mov
	to32i(esp+0xE0) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(esi) = 0x1C; //mov
	edx = to32i(esi+0x1C); //mov
	to32i(esi+0x18) = ebp; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	add(to32i(esi+0x24), (int32_t)0x1C);
	bx = to16i(esi+0x2C); //mov
	ax = to16i(esi+0x24); //mov
	edx = 0x1C; //mov
	sub(eax, ebx);
	sub(edx, eax);
	ecx = edx; //mov
	eax = to32i(esi+0x28); //mov
	to16i(esi+0x30) = dx; //mov
	edx = eax; //mov
	inc(ecx);
	sar(edx, (int32_t)0x1F);
	to16i(esi+0x30) = cx; //mov
	ecx = 0x1C; //mov
	idiv32(ecx);
	imul32(eax, ecx);
	to32i(esi+0x24) = eax; //mov
	eax = to32i(esi+0x28); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	fld(to32f(esi+0x1EC));
	add(esp, (int32_t)4);
	fstp(to32f(esi+4));
	eax = to32i(esi+0x1F0); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(esi+0x1F4); //mov
	to32i(esi+0xC) = eax; //mov
	eax = to32i(esi+0x1F8); //mov
	to32i(esi+0x10) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BE335;
	to32i(esi) = ecx; //mov
	imul32(edx, to32i(esi+0x24), 0x1E);
	ecx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x1C); //mov
	add(edx, eax);
	eax = esp; //mov
	to32i(esi+0x14) = edx; //mov
	push32(esi);
	to32i(esi+0x18) = eax; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	ebx = to32i(esi+0x24); //mov
	add(ebx, (int32_t)0x1C);
	edx = to32i(esi+0x28); //mov
	eax = ebx; //mov
	add(esp, (int32_t)4);
	sub(eax, edx);
	edx = 0x38; //mov
	to32i(esp+0xE8) = eax; //mov
	add(eax, eax);
	to32i(esi+0x24) = ebx; //mov
	sub(edx, eax);
	eax = esp; //mov
	shl(edx, (int32_t)2);
	ecx = to32i(esp+0xE8); //mov
	add(eax, edx);
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_4BE335;
loc_4BE304:
	ecx = to32i(esi+0x2E); //mov
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax); //mov
	to32i(esi+ecx*8+0x34) = ebx; //mov
	ecx = to32i(esi+0x2E); //mov
	add(eax, (int32_t)8);
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax-4); //mov
	to32i(esi+ecx*8+0x38) = ebx; //mov
	bx = to16i(esi+0x30); //mov
	inc(edx);
	inc(ebx);
	ecx = to32i(esp+0xE8); //mov
	to16i(esi+0x30) = bx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_4BE304;
loc_4BE335:
	eax = to32i(esp+0xE0); //mov
	to32i(esi+0x18) = eax; //mov
	goto loc_4BE1BF;
loc_4BE344:
	edx = to32i(esi+0x2E); //mov
	eax = to32i(esi+0x18); //mov
	sar(edx, (int32_t)0x10);
	ecx = to32i(eax); //mov
	to32i(esi+edx*8+0x34) = ecx; //mov
	eax = to32i(esi+0x2E); //mov
	edx = to32i(esi+0x18); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(edx+4); //mov
	to32i(esi+eax*8+0x38) = ecx; //mov
	edx = to32i(esi+0x18); //mov
	cx = to16i(esi+0x30); //mov
	add(edx, (int32_t)8);
	inc(ecx);
	to32i(esi+0x18) = edx; //mov
	inc(edi);
	to16i(esi+0x30) = cx; //mov
	goto loc_4BE1D0;
}
Fn(void) Game::_sub_4BE37C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	to32i(esp) = edx; //mov
	edx = to32i(ebx); //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(eax+0x2E); //mov
	ecx = to32i(esp); //mov
	sar(edx, (int32_t)0x10);
	esi = eax; //mov
	cmp(edx, ecx);
	if (jge())
		goto loc_4BE3CE;
	edi = 8; //mov
	xor_(ebx, ebx);
loc_4BE3A1:
	edx = to32i(esi+0x2E); //mov
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jge())
		goto loc_4BE439;
	edx = to32i(esi+0x18); //mov
	ecx = to32i(eax+0x34); //mov
	to32i(edx) = ecx; //mov
	edx = to32i(esi+0x18); //mov
	ecx = to32i(eax+0x38); //mov
	to32i(edx+4) = ecx; //mov
	ebp = to32i(esi+0x18); //mov
	add(eax, (int32_t)8);
	add(ebp, edi);
	inc(ebx);
	to32i(esi+0x18) = ebp; //mov
	goto loc_4BE3A1;
loc_4BE3CE:
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jle())
		goto loc_4BE3FC;
	ebp = to32i(esp); //mov
loc_4BE3D7:
	edx = to32i(esi+0x18); //mov
	ecx = to32i(eax+0x34); //mov
	to32i(edx) = ecx; //mov
	edx = to32i(esi+0x18); //mov
	ecx = to32i(eax+0x38); //mov
	to32i(edx+4) = ecx; //mov
	edi = to32i(esi+0x18); //mov
	add(eax, (int32_t)8);
	add(edi, (int32_t)8);
	inc(ebx);
	to32i(esi+0x18) = edi; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_4BE3D7;
loc_4BE3FC:
	eax = esi; //mov
	edx = (int32_t)(intptr_t)(ebx*8+0); //lea
	xor_(edi, edi);
	add(edx, esi);
loc_4BE409:
	ecx = to32i(esi+0x2E); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ebx, ecx);
	if (jge())
		goto loc_4BE429;
	fld(to32f(edx+0x34));
	inc(edi);
	add(edx, (int32_t)8);
	inc(ebx);
	fstp(to32f(eax+0x34));
	add(eax, (int32_t)8);
	ecx = to32i(edx+0x30); //mov
	to32i(eax+0x30) = ecx; //mov
	goto loc_4BE409;
loc_4BE429:
	xor_(edx, edx);
	to16i(esi+0x30) = di; //mov
	eax = edx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE439:
	edi = to32i(esi+0x28); //mov
	eax = to32i(esi+0x24); //mov
	ebp = to32i(esp); //mov
	sub(edi, eax);
	sub(ebp, edx);
	sub(edi, (int32_t)0x1C);
	to32i(esp) = ebp; //mov
	cmp(edi, ebp);
	if (jle())
		goto loc_4BE452;
	edi = ebp; //mov
loc_4BE452:
	test(edi, edi);
	if (jl())
		goto loc_4BE522;
loc_4BE45A:
	eax = to32i(esi+0x24); //mov
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x1C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(esi+0x1C); //mov
	to32i(esi) = edi; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	add(esp, (int32_t)4);
	ecx = to32i(esi+0x24); //mov
	eax = to32i(esi); //mov
	add(ecx, edi);
	xor_(edx, edx);
	ebx = ecx; //mov
	to32i(esi+0x24) = ecx; //mov
	sub(ebx, eax);
	eax = to32i(esi); //mov
	to32i(esi+0x24) = ebx; //mov
	to32i(esp+4) = eax; //mov
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	xor_(ebx, ebx);
	eax = ecx; //mov
	test(ecx, ecx);
loc_4BE4AC:
	if (jl())
		goto loc_4BE529;
	eax = to32i(esp); //mov
	ebp = to32i(esi+0x18); //mov
	sub(eax, edi);
	sub(ebp, edx);
	to32i(esp) = eax; //mov
	edx = to32i(esi+0x24); //mov
	eax = to32i(esi+0x28); //mov
	to16i(esi+0x30) = bx; //mov
	sub(eax, edx);
	to32i(esi+0x18) = ebp; //mov
	cmp(eax, (int32_t)0x1C);
	if (jge())
		goto loc_4BE516;
	fld(to32f(esi+4));
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x1FC); //mov
	fstp(to32f(esi+0x1EC));
	edx = to32i(esi+8); //mov
	to32i(esi+0x1F0) = edx; //mov
	edx = to32i(esi+0xC); //mov
	to32i(esi+0x1F4) = edx; //mov
	edx = to32i(esi+0x10); //mov
	to32i(esi+0x1F8) = edx; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BE150; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4BE516;
	ebx = (int32_t)(intptr_t)(esi+0x18); //lea
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4BE150(); esp += 4; //call
loc_4BE516:
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE522:
	xor_(edi, edi);
	goto loc_4BE45A;
loc_4BE529:
	ecx = to32i(esi+0x18); //mov
	add(ecx, eax);
	to32i(esp+8) = ecx; //mov
	ebp = to32i(esp+8); //mov
	ecx = (int32_t)(intptr_t)(esi+edx); //lea
	fld(to32f(ebp+0));
	fstp(to32f(ecx+0x34));
	ebp = to32i(esi+0x18); //mov
	add(ebp, eax);
	inc(ebx);
	add(edx, (int32_t)8);
	fld(to32f(ebp+4));
	fstp(to32f(ecx+0x38));
	ecx = to32i(esp+4); //mov
	inc(ecx);
	add(eax, (int32_t)8);
	to32i(esp+4) = ecx; //mov
	test(eax, eax);
	goto loc_4BE4AC;
}
Fn(void) Game::_sub_4BE564()
{
	to32i(eax+0x24) = 0; //mov
	to16i(eax+0x30) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0xC) = 0; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0x1C) = edx; //mov
	to32i(eax+0x20) = ebx; //mov
	to32i(eax+0x28) = ecx; //mov
	edx = to32i(esp+4); //mov
	to32i(eax+0x2C) = edx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x1FC) = edx; //mov
	eax = to32i(esp+0xC); //mov
	to32i(edx) = (int32_t)(intptr_t)sub_4BE37C; //mov
	to32i(eax) = 0; //mov
	eax = 0x200; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BE5C0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = edx; //mov
	edx = to32i(eax+0x1C); //mov
	esi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BE662;
	push32(ecx);
	edx = to32i(ebx); //mov
	to32i(eax+0x18) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_4BE646;
	edx = (int32_t)(intptr_t)(eax+0x18); //lea
	to32i(esp+4) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x2C); //lea
	ebp = (int32_t)(intptr_t)(eax+0x20); //lea
	add(eax, (int32_t)0x1C);
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = eax; //mov
loc_4BE5F7:
	ebx = to32i(esi+0x28); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4BE669;
	eax = to32i(esi+0x24); //mov
	edx = to32i(esi+0x20); //mov
	add(eax, (int32_t)0x1B);
	cmp(eax, edx);
	if (jge())
		goto loc_4BE686;
	imul32(edx, to32i(esi+0x24), 0x1E);
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x1C); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	ebx = to32i(esi+0x24); //mov
	sub(edi, (int32_t)0x1C);
	add(ebx, (int32_t)0x1C);
	add(esp, (int32_t)4);
	to32i(esi+0x24) = ebx; //mov
loc_4BE642:
	test(edi, edi);
	if (jg())
		goto loc_4BE5F7;
loc_4BE646:
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	add(to32i(esi+0x18), eax);
	test(edi, edi);
	if (jl())
		goto loc_4BE738;
	xor_(eax, eax);
	pop32(ecx);
loc_4BE65B:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4BE662:
	eax = 0xFFFFFFFF; //mov
	goto loc_4BE65B;
loc_4BE669:
	ecx = to32i(esp+4); //mov
	edx = to32i(esp+8); //mov
	eax = ebx; //mov
	ebx = edi; //mov
	esp -= 4; _sub_4BE0E0(); esp += 4; //call
	edx = to32i(esi+0x28); //mov
	sub(edx, eax);
	sub(edi, eax);
	to32i(esi+0x28) = edx; //mov
	goto loc_4BE642;
loc_4BE686:
	cmp(to32i(esi+0x1C), (int32_t)1);
	if (jz())
		goto loc_4BE6D1;
	imul32(edx, to32i(esi+0x24), 0x1E);
	ebx = 0x1C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(esi+0x1C); //mov
	to32i(esi) = 0x1C; //mov
	add(edx, eax);
	push32(esi);
	to32i(esi+0x14) = edx; //mov
	esp -= 4; _sub_4C2668(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	add(eax, ebx);
	edx = to32i(esi+0x20); //mov
	to32i(esi+0x24) = eax; //mov
	sub(eax, edx);
	edx = ebx; //mov
	ecx = to32i(esi+0x18); //mov
	sub(edx, eax);
	shl(eax, (int32_t)3);
	add(esp, (int32_t)4);
	sub(ecx, eax);
	sub(edi, edx);
	to32i(esi+0x18) = ecx; //mov
loc_4BE6D1:
	eax = to32i(esp+0xC); //mov
	edx = ebp; //mov
	call(to32i(dword_4DCFDC));
	ebx = to32i(esi+0x1C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4BE712;
	eax = ebx; //mov
	fild(to16i(eax));
	fstp(to32f(esi+4));
	fild(to16i(eax+2));
	fstp(to32f(esi+8));
	fild(to16i(eax+4));
	fstp(to32f(esi+0xC));
	fild(to16i(eax+6));
	eax = to32i(esi+0x1C); //mov
	to32i(esi+0x24) = 0; //mov
	add(eax, (int32_t)8);
	fstp(to32f(esi+0x10));
	to32i(esi+0x1C) = eax; //mov
	goto loc_4BE642;
loc_4BE712:
	add(edi, edi);
	test(edi, edi);
	if (jle())
		goto loc_4BE642;
loc_4BE71C:
	eax = to32i(esi+0x18); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esi+0x18); //mov
	add(eax, (int32_t)4);
	dec(edi);
	to32i(esi+0x18) = eax; //mov
	test(edi, edi);
	if (jg())
		goto loc_4BE71C;
	goto loc_4BE642;
loc_4BE738:
	edx = to32i(esi+0x18); //mov
	eax = to32i(esi+0x28); //mov
	ecx = to32i(edx); //mov
	to32i(esi+eax*8+0x2C) = ecx; //mov
	eax = to32i(esi+0x18); //mov
	edx = to32i(esi+0x28); //mov
	ecx = to32i(eax+4); //mov
	to32i(esi+edx*8+0x30) = ecx; //mov
	ecx = to32i(esi+0x18); //mov
	ebx = to32i(esi+0x28); //mov
	add(ecx, (int32_t)8);
	inc(ebx);
	to32i(esi+0x18) = ecx; //mov
	inc(edi);
	to32i(esi+0x28) = ebx; //mov
	test(edi, edi);
	if (jl())
		goto loc_4BE738;
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4BE770()
{
	to32i(eax+0x1C) = 1; //mov
	to32i(eax+0x24) = 0; //mov
	to32i(eax+0x28) = 0; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0xC) = 0; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0x20) = ebx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BE5C0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = 0x104; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BE7C0()
{
	eax = to32i(eax+0xD4C); //mov
}
Fn(void) Game::_sub_4BE7C8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = ebx; //mov
	eax = edx; //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_4BE80B;
	edx = edi; //mov
	ebx = eax; //mov
loc_4BE7DB:
	eax = to32i(edx); //mov
	and_(eax, (int32_t)0x1FFFF);
	cmp(eax, (int32_t)0x7FFF);
	if (jbe())
		goto loc_4BE7FC;
	cmp(eax, (int32_t)0x18000);
	if (jnb())
		goto loc_4BE7FC;
	cmp(eax, (int32_t)0x10000);
	if (jnb())
		goto loc_4BE80F;
	eax = 0x7FFF; //mov
loc_4BE7FC:
	add(ebx, (int32_t)2);
	add(edx, (int32_t)4);
	inc(ecx);
	to16i(ebx-2) = ax; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_4BE7DB;
loc_4BE80B:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BE80F:
	eax = 0x8000; //mov
	goto loc_4BE7FC;
}
Fn(void) Game::_sub_4BE818()
{
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = edx; //mov
	ecx = to32i(eax+0xD4C); //mov
	edx = to32i(eax+0xD44); //mov
	edi = eax; //mov
	cmp(ecx, edx);
	if (jnb())
		goto loc_4BE921;
	push32(esi);
	ecx = to32i(ebx); //mov
	ebx = to32i(eax+0xD4C); //mov
	add(ebx, ebp);
	edx = to32i(eax+0xD44); //mov
	esi = ebx; //mov
	sub(esi, edx);
	to32i(eax+0xD4C) = ebx; //mov
	to32i(esp+4) = esi; //mov
	test(esi, esi);
	if (jle())
		goto loc_4BE92D;
	sub(ebp, esi);
loc_4BE85F:
	esi = to32i(edi+0xD48); //mov
	cmp(ebp, esi);
	if (jge())
		goto loc_4BE86B;
	esi = ebp; //mov
loc_4BE86B:
	eax = 0x1B0; //mov
	edx = to32i(edi+0xD48); //mov
	ebx = (int32_t)(intptr_t)(edi+0x684); //lea
	sub(eax, edx);
	to32i(esp+8) = ebx; //mov
	shl(eax, (int32_t)2);
	edx = ecx; //mov
	add(eax, ebx);
	ebx = esi; //mov
	esp -= 4; _sub_4BE7C8(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(ecx, eax);
	eax = to32i(edi+0xD48); //mov
	sub(eax, esi);
	sub(ebp, esi);
	to32i(edi+0xD48) = eax; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4BE908;
	eax = to32i(esp+8); //mov
	to32i(esp+0xC) = eax; //mov
loc_4BE8B1:
	edx = 1; //mov
	eax = edi; //mov
	esi = 0x1B0; //mov
	esp -= 4; _sub_4C3400(); esp += 4; //call
	to32i(edi+0xD48) = 0x1B0; //mov
	cmp(ebp, esi);
	if (jge())
		goto loc_4BE8D2;
	esi = ebp; //mov
loc_4BE8D2:
	eax = 0x1B0; //mov
	sub(eax, to32i(edi+0xD48));
	ebx = to32i(esp+0xC); //mov
	shl(eax, (int32_t)2);
	edx = ecx; //mov
	add(eax, ebx);
	ebx = esi; //mov
	esp -= 4; _sub_4BE7C8(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(ecx, eax);
	eax = to32i(edi+0xD48); //mov
	sub(eax, esi);
	sub(ebp, esi);
	to32i(edi+0xD48) = eax; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_4BE8B1;
loc_4BE908:
	xor_(eax, eax);
	pop32(esi);
loc_4BE90B:
	edx = to32i(esp); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_4BE938;
	add(ecx, (int32_t)2);
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	to16i(ecx-2) = ax; //mov
	to32i(esp) = ebx; //mov
	goto loc_4BE90B;
loc_4BE921:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_4BE92D:
	xor_(eax, eax);
	to32i(esp+4) = eax; //mov
	goto loc_4BE85F;
loc_4BE938:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BE944()
{
	push32(esi);
	esi = eax; //mov
	eax = edx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4C3314(); esp += 4; //call
	to32i(esi+0xD48) = 0; //mov
	to32i(esi+0xD4C) = 0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(esi+0xD44) = ebx; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BE818; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BE7C0; //mov
	eax = 0xD50; //mov
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BE990()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = edx; //mov
	edx = to32i(eax+0xD44); //mov
	ecx = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BEA5E;
	ebp = to32i(ebx); //mov
	test(edi, edi);
	if (jle())
		goto loc_4BEA54;
	ebx = (int32_t)(intptr_t)(eax+0x684); //lea
	to32i(esp+4) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0xD48); //lea
	add(eax, (int32_t)0xD44);
	to32i(esp+8) = ebx; //mov
	to32i(esp) = eax; //mov
loc_4BE9CF:
	eax = to32i(ecx+0xD4C); //mov
	cmp(eax, to32i(ecx+0xD48));
	if (jge())
		goto loc_4BEA6B;
loc_4BE9E1:
	cmp(to32i(ecx+0xD50), (int32_t)0);
	if (jle())
		goto loc_4BEAFD;
loc_4BE9EE:
	esi = to32i(ecx+0xD48); //mov
	sub(esi, to32i(ecx+0xD4C));
	cmp(edi, esi);
	if (jge())
		goto loc_4BEA00;
	esi = edi; //mov
loc_4BEA00:
	edx = to32i(ecx+0xD50); //mov
	cmp(esi, edx);
	if (jle())
		goto loc_4BEA0C;
	esi = edx; //mov
loc_4BEA0C:
	eax = 0x1B0; //mov
	sub(eax, to32i(ecx+0xD50));
	edx = to32i(esp+4); //mov
	shl(eax, (int32_t)2);
	ebx = esi; //mov
	add(eax, edx);
	edx = ebp; //mov
	esp -= 4; _sub_4BE7C8(); esp += 4; //call
	ebx = to32i(ecx+0xD4C); //mov
	add(ebx, esi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(ebp, eax);
	eax = to32i(ecx+0xD50); //mov
	to32i(ecx+0xD4C) = ebx; //mov
	sub(eax, esi);
	sub(edi, esi);
	to32i(ecx+0xD50) = eax; //mov
	test(edi, edi);
	if (jg())
		goto loc_4BE9CF;
loc_4BEA54:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEA5E:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEA6B:
	edx = to32i(esp+8); //mov
	eax = to32i(esp); //mov
	call(to32i(dword_4DCFDC));
	test(eax, eax);
	if (jnz())
		goto loc_4BEAA7;
	ebx = to32i(ecx+0xD44); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4BEAA7;
	dl = to8i(ebx); //mov
	eax = ebx; //mov
	test(dl, dl);
	if (jz())
		goto loc_4BEAD1;
	eax = (int32_t)(intptr_t)(ebx+1); //lea
	edx = ecx; //mov
	esp -= 4; _sub_4C3314(); esp += 4; //call
	to32i(ecx+0xD4C) = 0; //mov
	goto loc_4BE9E1;
loc_4BEAA7:
	ebx = (int32_t)(intptr_t)(edi+edi); //lea
	eax = ebp; //mov
	xor_(edx, edx);
	esp -= 4; _memset_(); esp += 4; //call
	to32i(ecx+0xD4C) = 0; //mov
	to32i(ecx+0xD48) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEAD1:
	al = to8i(ebx+1); //mov
	and_(eax, (int32_t)0xFF);
	to32i(ecx+4) = eax; //mov
	eax = to32i(ecx+0xD44); //mov
	to32i(ecx+8) = 8; //mov
	add(eax, (int32_t)2);
	to32i(ecx) = eax; //mov
	to32i(ecx+0xD4C) = 0; //mov
	goto loc_4BE9E1;
loc_4BEAFD:
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4C3400(); esp += 4; //call
	to32i(ecx+0xD50) = 0x1B0; //mov
	goto loc_4BE9EE;
}
Fn(void) Game::_sub_4BEB18()
{
	to32i(eax+0xD44) = 1; //mov
	to32i(eax+0xD48) = 0; //mov
	to32i(eax+0xD4C) = 0; //mov
	to32i(eax+0xD50) = 0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BE990; //mov
	eax = 0xD54; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BEB60()
{
	eax = to32i(eax+0xD4C); //mov
}
Fn(void) Game::_sub_4BEB68()
{
	push32(ecx);
	ecx = eax; //mov
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_4BEB84;
loc_4BEB71:
	fld(to32f(ecx));
	add(edx, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(eax);
	fstp(to32f(edx-4));
	cmp(eax, ebx);
	if (jl())
		goto loc_4BEB71;
loc_4BEB84:
	pop32(ecx);
}
Fn(void) Game::_sub_4BEB88()
{
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = edx; //mov
	ecx = to32i(eax+0xD4C); //mov
	edx = to32i(eax+0xD44); //mov
	edi = eax; //mov
	cmp(ecx, edx);
	if (jnb())
		goto loc_4BEC98;
	push32(esi);
	ecx = to32i(ebx); //mov
	ebx = to32i(eax+0xD4C); //mov
	add(ebx, ebp);
	edx = to32i(eax+0xD44); //mov
	esi = ebx; //mov
	sub(esi, edx);
	to32i(eax+0xD4C) = ebx; //mov
	to32i(esp+0xC) = esi; //mov
	test(esi, esi);
	if (jle())
		goto loc_4BECA4;
	sub(ebp, esi);
loc_4BEBCF:
	esi = to32i(edi+0xD48); //mov
	cmp(ebp, esi);
	if (jge())
		goto loc_4BEBDB;
	esi = ebp; //mov
loc_4BEBDB:
	eax = 0x1B0; //mov
	edx = to32i(edi+0xD48); //mov
	ebx = (int32_t)(intptr_t)(edi+0x684); //lea
	sub(eax, edx);
	to32i(esp+4) = ebx; //mov
	shl(eax, (int32_t)2);
	edx = ecx; //mov
	add(eax, ebx);
	ebx = esi; //mov
	esp -= 4; _sub_4BEB68(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(ecx, eax);
	eax = to32i(edi+0xD48); //mov
	sub(eax, esi);
	sub(ebp, esi);
	to32i(edi+0xD48) = eax; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4BEC7D;
	eax = to32i(esp+4); //mov
	to32i(esp+8) = eax; //mov
loc_4BEC25:
	eax = edi; //mov
	xor_(edx, edx);
	esi = 0x1B0; //mov
	esp -= 4; _sub_4C3400(); esp += 4; //call
	to32i(edi+0xD48) = 0x1B0; //mov
	cmp(ebp, esi);
	if (jge())
		goto loc_4BEC43;
	esi = ebp; //mov
loc_4BEC43:
	eax = 0x1B0; //mov
	sub(eax, to32i(edi+0xD48));
	ebx = to32i(esp+8); //mov
	shl(eax, (int32_t)2);
	edx = ecx; //mov
	add(eax, ebx);
	ebx = esi; //mov
	esp -= 4; _sub_4BEB68(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(ecx, eax);
	eax = to32i(edi+0xD48); //mov
	sub(eax, esi);
	sub(ebp, esi);
	to32i(edi+0xD48) = eax; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_4BEC25;
loc_4BEC7D:
	pop32(esi);
loc_4BEC7E:
	edx = to32i(esp+8); //mov
	test(edx, edx);
	if (jle())
		goto loc_4BECAF;
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(ecx) = 0; //mov
	add(ecx, (int32_t)4);
	to32i(esp+8) = ebx; //mov
	goto loc_4BEC7E;
loc_4BEC98:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_4BECA4:
	xor_(eax, eax);
	to32i(esp+0xC) = eax; //mov
	goto loc_4BEBCF;
loc_4BECAF:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
}
Fn(void) Game::_sub_4BECB8()
{
	push32(esi);
	esi = eax; //mov
	eax = edx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4C3314(); esp += 4; //call
	to32i(esi+0xD48) = 0; //mov
	to32i(esi+0xD4C) = 0; //mov
	eax = to32i(esp+0xC); //mov
	to32i(esi+0xD44) = ebx; //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BEB88; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BEB60; //mov
	eax = 0xD50; //mov
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4BED00()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	to32i(esp+0x10) = edx; //mov
	edx = to32i(eax+0xD44); //mov
	ebp = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4BEDFF;
	eax = to32i(ebx); //mov
	ecx = to32i(esp+0x10); //mov
	to32i(esp) = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4BEDF5;
	eax = (int32_t)(intptr_t)(esi+0x684); //lea
	to32i(esp+4) = eax; //mov
	eax = (int32_t)(intptr_t)(esi+0xD48); //lea
	add(esi, (int32_t)0xD44);
	to32i(esp+0xC) = eax; //mov
	to32i(esp+8) = esi; //mov
loc_4BED4C:
	eax = to32i(ebp+0xD4C); //mov
	cmp(eax, to32i(ebp+0xD48));
	if (jge())
		goto loc_4BEE0C;
loc_4BED5E:
	cmp(to32i(ebp+0xD50), (int32_t)0);
	if (jle())
		goto loc_4BEEA5;
loc_4BED6B:
	edx = to32i(ebp+0xD48); //mov
	edi = to32i(ebp+0xD4C); //mov
	eax = to32i(esp+0x10); //mov
	sub(edx, edi);
	cmp(edx, eax);
	if (jle())
		goto loc_4BED83;
	edx = eax; //mov
loc_4BED83:
	ecx = to32i(ebp+0xD50); //mov
	cmp(edx, ecx);
	if (jle())
		goto loc_4BED8F;
	edx = ecx; //mov
loc_4BED8F:
	esi = 0x1B0; //mov
	eax = to32i(esp+4); //mov
	edi = to32i(ebp+0xD50); //mov
	ebx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(esi, edi);
	ecx = ebx; //mov
	shl(esi, (int32_t)2);
	edi = to32i(esp); //mov
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
	ecx = to32i(ebp+0xD4C); //mov
	esi = (int32_t)(intptr_t)(edi+ebx); //lea
	eax = to32i(ebp+0xD50); //mov
	edi = to32i(esp+0x10); //mov
	to32i(esp) = esi; //mov
	add(ecx, edx);
	sub(eax, edx);
	to32i(ebp+0xD4C) = ecx; //mov
	sub(edi, edx);
	to32i(ebp+0xD50) = eax; //mov
	to32i(esp+0x10) = edi; //mov
	test(edi, edi);
	if (jg())
		goto loc_4BED4C;
loc_4BEDF5:
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEDFF:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEE0C:
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	call(to32i(dword_4DCFDC));
	test(eax, eax);
	if (jnz())
		goto loc_4BEE49;
	ebx = to32i(ebp+0xD44); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4BEE49;
	dl = to8i(ebx); //mov
	eax = ebx; //mov
	test(dl, dl);
	if (jz())
		goto loc_4BEE78;
	eax = (int32_t)(intptr_t)(ebx+1); //lea
	edx = ebp; //mov
	esp -= 4; _sub_4C3314(); esp += 4; //call
	to32i(ebp+0xD4C) = 0; //mov
	goto loc_4BED5E;
loc_4BEE49:
	ebx = to32i(esp+0x10); //mov
	eax = to32i(esp); //mov
	xor_(edx, edx);
	shl(ebx, (int32_t)2);
	esp -= 4; _memset_(); esp += 4; //call
	to32i(ebp+0xD4C) = 0; //mov
	to32i(ebp+0xD48) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4BEE78:
	al = to8i(ebx+1); //mov
	and_(eax, (int32_t)0xFF);
	to32i(ebp+4) = eax; //mov
	eax = to32i(ebp+0xD44); //mov
	to32i(ebp+8) = 8; //mov
	add(eax, (int32_t)2);
	to32i(ebp+0) = eax; //mov
	to32i(ebp+0xD4C) = 0; //mov
	goto loc_4BED5E;
loc_4BEEA5:
	eax = ebp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4C3400(); esp += 4; //call
	to32i(ebp+0xD50) = 0x1B0; //mov
	goto loc_4BED6B;
}
Fn(void) Game::_sub_4BEEC0()
{
	to32i(eax+0xD44) = 1; //mov
	to32i(eax+0xD48) = 0; //mov
	to32i(eax+0xD4C) = 0; //mov
	to32i(eax+0xD50) = 0; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4BED00; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = 0; //mov
	eax = 0xD54; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_4C0B80()
{
	push32(esi);
	push32(edi);
	edi = to32i(esp+0xC); //mov
	test(edx, edx);
	if (jl())
		goto loc_4C0BC5;
loc_4C0B8A:
	test(ecx, ecx);
	if (jl())
		goto loc_4C0BC9;
loc_4C0B8E:
	esi = to32i(eax+4); //mov
	cmp(edx, esi);
	if (jle())
		goto loc_4C0B97;
	edx = esi; //mov
loc_4C0B97:
	cmp(ecx, esi);
	if (jle())
		goto loc_4C0B9D;
	ecx = esi; //mov
loc_4C0B9D:
	test(ebx, ebx);
	if (jl())
		goto loc_4C0BCD;
loc_4C0BA1:
	test(edi, edi);
	if (jl())
		goto loc_4C0BD1;
loc_4C0BA5:
	esi = to32i(eax+8); //mov
	cmp(ebx, esi);
	if (jle())
		goto loc_4C0BAE;
	ebx = esi; //mov
loc_4C0BAE:
	cmp(edi, esi);
	if (jle())
		goto loc_4C0BB4;
	edi = esi; //mov
loc_4C0BB4:
	to32i(eax+0xC) = edx; //mov
	to32i(eax+0x14) = ecx; //mov
	to32i(eax+0x10) = ebx; //mov
	to32i(eax+0x18) = edi; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4C0BC5:
	xor_(edx, edx);
	goto loc_4C0B8A;
loc_4C0BC9:
	xor_(ecx, ecx);
	goto loc_4C0B8E;
loc_4C0BCD:
	xor_(ebx, ebx);
	goto loc_4C0BA1;
loc_4C0BD1:
	xor_(edi, edi);
	goto loc_4C0BA5;
}
Fn(void) Game::_sub_4C0BE0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp+8) = ebx; //mov
	ebp = ecx; //mov
	cmp(eax, ebx);
	if (jg())
		goto loc_4C0C7C;
loc_4C0BF8:
	cmp(ebp, edi);
	if (jge())
		goto loc_4C0C02;
	eax = edi; //mov
	edi = ebp; //mov
	ebp = eax; //mov
loc_4C0C02:
	eax = to32i(esp+8); //mov
	sub(eax, esi);
	ecx = to32i(esp+0x1C); //mov
	inc(eax);
	edx = edi; //mov
	to32i(esp) = eax; //mov
	eax = ebp; //mov
	push32(ecx);
	sub(eax, edi);
	ecx = 1; //mov
	dec(eax);
	ebx = to32i(esp+4); //mov
	to32i(esp+8) = eax; //mov
	eax = esi; //mov
	inc(edi);
	esp -= 4; _sub_488620(); esp += 4; //call
	ebx = to32i(esp+0x1C); //mov
	ecx = to32i(esp+4); //mov
	eax = to32i(esp+8); //mov
	push32(ebx);
	edx = edi; //mov
	ebx = 1; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	eax = to32i(esp+0x1C); //mov
	ecx = to32i(esp+4); //mov
	ebx = 1; //mov
	push32(eax);
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	edx = to32i(esp+0x1C); //mov
	ecx = 1; //mov
	ebx = to32i(esp); //mov
	push32(edx);
	eax = esi; //mov
	edx = ebp; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4C0C7C:
	esi = ebx; //mov
	to32i(esp+8) = eax; //mov
	goto loc_4C0BF8;
}
Fn(void) Game::_sub_4C0CDC()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	ebx = edx; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = to32i(dword_4DAB7C); //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edi = to32i(dword_4DD6EC); //mov
	edx = ebx; //mov
	esi = to32i(dword_4DD6F0); //mov
	esp -= 4; _sub_4871F8(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4867D8(); esp += 4; //call
	to32i(dword_4DD6EC) = edi; //mov
	to32i(dword_4DD6F0) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4C0D30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = to32i(eax+8); //mov
	ecx = to32i(eax+4); //mov
	push32(edx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_4C0B80(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4C1BA0()
{
	eax = to32i(eax+4); //mov
}
Fn(void) Game::_sub_4C1BA4()
{
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	to32i(esp) = edx; //mov
	eax = to32i(eax+4); //mov
	cmp(eax, to32i(ebp+8));
	if (jnb())
		goto loc_4C1BDD;
	push32(ecx);
	edx = to32i(esp+4); //mov
	eax = to32i(ebp+4); //mov
	add(edx, eax);
	ecx = to32i(ebp+8); //mov
	to32i(ebp+4) = edx; //mov
	cmp(edx, ecx);
	if (jnb())
		goto loc_4C1BE7;
	cl = to8i(ebp+0xC); //mov
	edx = to32i(ebp+0); //mov
	shl(eax, cl);
	add(edx, eax);
	to32i(ebx) = edx; //mov
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)4);
	pop32(ebp);
	return;
loc_4C1BDD:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	return;
loc_4C1BE7:
	push32(edi);
	push32(esi);
	edx = ecx; //mov
	edi = to32i(ebp+0); //mov
	sub(edx, eax);
	cl = to8i(ebp+0xC); //mov
	esi = edx; //mov
	shl(eax, cl);
	shl(esi, cl);
	add(eax, edi);
	ecx = esi; //mov
	edi = to32i(ebx); //mov
	esi = eax; //mov
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
	esi = to32i(esp+0xC); //mov
	eax = edx; //mov
	cl = to8i(ebp+0xC); //mov
	sub(esi, edx);
	shl(eax, cl);
	shl(esi, cl);
	edx = to32i(ebx); //mov
	ebx = esi; //mov
	add(eax, edx);
	xor_(edx, edx);
	esp -= 4; _memset_(); esp += 4; //call
	pop32(esi);
	pop32(edi);
	xor_(eax, eax);
	pop32(ecx);
	add(esp, (int32_t)4);
	pop32(ebp);
}
Fn(void) Game::_sub_4C1C38()
{
	to32i(eax+4) = 0; //mov
	to32i(eax) = edx; //mov
	sar(ecx, (int32_t)1);
	to32i(eax+8) = ebx; //mov
	to32i(eax+0xC) = ecx; //mov
	eax = to32i(esp+4); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1BA4; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1BA0; //mov
	eax = 0x10; //mov
	esp += 8; return;
}
Fn(void) Game::_sub_4C1C70()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	ecx = to32i(ebx); //mov
	to32i(esp) = ecx; //mov
	ecx = to32i(eax+4); //mov
	esi = to32i(eax+0xC); //mov
	add(ecx, ebp);
	edx = eax; //mov
	cmp(ecx, esi);
	if (jbe())
		goto loc_4C1CE8;
loc_4C1C8C:
	test(ebp, ebp);
	if (jle())
		goto loc_4C1CF9;
	ebx = to32i(edx+0xC); //mov
	sub(ebx, to32i(edx+4));
	inc(ebx);
	cmp(ebp, ebx);
	if (jge())
		goto loc_4C1C9D;
	ebx = ebp; //mov
loc_4C1C9D:
	esi = ebx; //mov
	cl = to8i(edx+0x10); //mov
	eax = to32i(edx+4); //mov
	shl(esi, cl);
	shl(eax, cl);
	ecx = to32i(edx); //mov
	edi = to32i(esp); //mov
	add(eax, ecx);
	ecx = esi; //mov
	esi = eax; //mov
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
	add(to32i(edx+4), ebx);
	eax = ebx; //mov
	cl = to8i(edx+0x10); //mov
	shl(eax, cl);
	sub(ebp, ebx);
	esi = (int32_t)(intptr_t)(edi+eax); //lea
	eax = to32i(edx+4); //mov
	edi = to32i(edx+0xC); //mov
	to32i(esp) = esi; //mov
	cmp(eax, edi);
	if (jbe())
		goto loc_4C1C8C;
	eax = to32i(edx+8); //mov
	to32i(edx+4) = eax; //mov
	goto loc_4C1C8C;
loc_4C1CE8:
	edx = to32i(eax+4); //mov
	cl = to8i(eax+0x10); //mov
	shl(edx, cl);
	ecx = to32i(eax); //mov
	add(ecx, edx);
	to32i(ebx) = ecx; //mov
	add(to32i(eax+4), ebp);
loc_4C1CF9:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4C1D04()
{
	to32i(eax+4) = 0; //mov
	to32i(eax) = edx; //mov
	to32i(eax+8) = ebx; //mov
	edx = to32i(esp+4); //mov
	to32i(eax+0xC) = ecx; //mov
	sar(edx, (int32_t)1);
	to32i(eax+0x10) = edx; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1C70; //mov
	eax = 0x14; //mov
	esp += 8; return;
}
Fn(void) Game::_sub_4C1D30()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	to32i(esp+8) = edx; //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_4C1DDD;
	edx = to32i(ebx); //mov
	ecx = to32i(esp+8); //mov
	to32i(esp+4) = edx; //mov
	edx = to32i(eax+8); //mov
	esi = to32i(eax+4); //mov
	add(edx, ecx);
	ebp = eax; //mov
	cmp(edx, esi);
	if (jle())
		goto loc_4C1DEA;
	add(eax, (int32_t)4);
	to32i(esp) = eax; //mov
loc_4C1D66:
	cmp(to32i(esp+8), (int32_t)0);
	if (jle())
		goto loc_4C1DFF;
	eax = to32i(ebp+8); //mov
	cmp(eax, to32i(ebp+4));
	if (jge())
		goto loc_4C1E09;
loc_4C1D7D:
	edx = to32i(ebp+4); //mov
	ebx = to32i(ebp+8); //mov
	esi = to32i(esp+8); //mov
	sub(edx, ebx);
	cmp(edx, esi);
	if (jg())
		goto loc_4C1E52;
loc_4C1D91:
	edi = to32i(esp+4); //mov
	ebx = edx; //mov
	cl = to8i(ebp+0xC); //mov
	eax = to32i(ebp+8); //mov
	esi = to32i(ebp+0); //mov
	shl(ebx, cl);
	shl(eax, cl);
	ecx = ebx; //mov
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
	ebx = to32i(esp+8); //mov
	eax = edx; //mov
	edi = to32i(ebp+8); //mov
	cl = to8i(ebp+0xC); //mov
	add(edi, edx);
	shl(eax, cl);
	sub(ebx, edx);
	ecx = to32i(esp+4); //mov
	to32i(esp+8) = ebx; //mov
	add(ecx, eax);
	to32i(ebp+8) = edi; //mov
	to32i(esp+4) = ecx; //mov
	goto loc_4C1D66;
loc_4C1DDD:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1DEA:
	esi = to32i(eax+8); //mov
	cl = to8i(eax+0xC); //mov
	edx = to32i(eax); //mov
	shl(esi, cl);
	add(edx, esi);
	to32i(ebx) = edx; //mov
	edx = to32i(esp+8); //mov
	add(to32i(eax+8), edx);
loc_4C1DFF:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1E09:
	edx = to32i(esp); //mov
	eax = ebp; //mov
	call(to32i(dword_4DCFDC));
	test(eax, eax);
	if (jnz())
		goto loc_4C1E26;
	cmp(to32i(ebp+0), (int32_t)0);
	if (jz())
		goto loc_4C1E26;
	to32i(ebp+8) = eax; //mov
	goto loc_4C1D7D;
loc_4C1E26:
	ebx = to32i(esp+8); //mov
	eax = to32i(esp+4); //mov
	cl = to8i(ebp+0xC); //mov
	xor_(edx, edx);
	shl(ebx, cl);
	esp -= 4; _memset_(); esp += 4; //call
	to32i(ebp+8) = 0; //mov
	to32i(ebp+4) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1E52:
	edx = esi; //mov
	goto loc_4C1D91;
}
Fn(void) Game::_sub_4C1E5C()
{
	to32i(eax) = 1; //mov
	to32i(eax+4) = 0; //mov
	sar(edx, (int32_t)1);
	to32i(eax+8) = 0; //mov
	to32i(eax+0xC) = edx; //mov
	eax = 0x10; //mov
	to32i(ebx) = (int32_t)(intptr_t)sub_4C1D30; //mov
}
Fn(void) Game::_sub_4C1E90()
{
	eax = to32i(eax+4); //mov
}
Fn(void) Game::_sub_4C1E94()
{
	push32(ecx);
	push32(esi);
	push32(ebp);
	esi = edx; //mov
	edx = to32i(eax+4); //mov
	ecx = to32i(eax+8); //mov
	ebp = eax; //mov
	cmp(edx, ecx);
	if (jnb())
		goto loc_4C1EDD;
	push32(edi);
	ecx = (int32_t)(intptr_t)(edx+esi); //lea
	to32i(eax+4) = ecx; //mov
	edi = ecx; //mov
	ecx = to32i(eax+8); //mov
	cmp(edi, ecx);
	if (jnb())
		goto loc_4C1F02;
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jz())
		goto loc_4C1EE6;
	ecx = to32i(ebx); //mov
	push32(ecx);
	cl = to8i(eax+0xC); //mov
	ebx = to32i(eax); //mov
	shl(edx, cl);
	add(edx, ebx);
	cl = to8i(eax+0x18); //mov
	push32(edx);
	shl(esi, cl);
	push32(esi);
	esp -= 4; _sub_4C40A8(); esp += 4; //call
loc_4C1ED3:
	add(esp, (int32_t)0xC);
	xor_(eax, eax);
	pop32(edi);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1EDD:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1EE6:
	ebp = to32i(ebx); //mov
	cl = to8i(eax+0xC); //mov
	ebx = edx; //mov
	edx = to32i(eax); //mov
	shl(ebx, cl);
	push32(ebp);
	add(edx, ebx);
	cl = to8i(eax+0x18); //mov
	push32(edx);
	shl(esi, cl);
	push32(esi);
	esp -= 4; _sub_4C4114(); esp += 4; //call
	goto loc_4C1ED3;
loc_4C1F02:
	edi = ecx; //mov
	ecx = to32i(eax+0x14); //mov
	sub(edi, edx);
	test(ecx, ecx);
	if (jz())
		goto loc_4C1F4D;
	ecx = to32i(ebx); //mov
	push32(ecx);
	cl = to8i(eax+0xC); //mov
	shl(edx, cl);
	ecx = to32i(eax); //mov
	add(edx, ecx);
	cl = to8i(eax+0x18); //mov
	eax = edi; //mov
	push32(edx);
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C40A8(); esp += 4; //call
loc_4C1F27:
	add(esp, (int32_t)0xC);
	eax = esi; //mov
	cl = to8i(ebp+0x10); //mov
	edx = to32i(ebx); //mov
	esi = edi; //mov
	sub(eax, edi);
	shl(esi, cl);
	shl(eax, cl);
	add(esi, edx);
	ebx = eax; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _memset_(); esp += 4; //call
	xor_(eax, eax);
	pop32(edi);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C1F4D:
	ecx = to32i(ebx); //mov
	push32(ecx);
	cl = to8i(eax+0xC); //mov
	shl(edx, cl);
	ecx = to32i(eax); //mov
	add(edx, ecx);
	cl = to8i(eax+0x18); //mov
	eax = edi; //mov
	push32(edx);
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C4114(); esp += 4; //call
	goto loc_4C1F27;
}
Fn(void) Game::_sub_4C1F6C()
{
	push32(esi);
	esi = to32i(esp+8); //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = edx; //mov
	to32i(eax+8) = ebx; //mov
	edx = (int32_t)(intptr_t)(ecx+esi); //lea
	to32i(eax+0xC) = edx; //mov
	to32i(eax+0x14) = ecx; //mov
	edx = (int32_t)(intptr_t)(esi+2); //lea
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0x18) = esi; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1E94; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1E90; //mov
	eax = 0x1C; //mov
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4C1FB0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = edx; //mov
	ebp = ebx; //mov
	ebx = eax; //mov
	ebp = to32i(ebp+0); //mov
	test(edx, edx);
	if (jle())
		goto loc_4C201B;
loc_4C1FC1:
	eax = to32i(ebx+0xC); //mov
	sub(eax, to32i(ebx+4));
	esi = (int32_t)(intptr_t)(eax+1); //lea
	cmp(edi, esi);
	if (jge())
		goto loc_4C1FD0;
	esi = edi; //mov
loc_4C1FD0:
	cmp(to32i(ebx+0x18), (int32_t)0);
	if (jz())
		goto loc_4C2022;
	eax = to32i(ebx+4); //mov
	cl = to8i(ebx+0x10); //mov
	edx = to32i(ebx); //mov
	shl(eax, cl);
	push32(ebp);
	add(eax, edx);
	cl = to8i(ebx+0x1C); //mov
	push32(eax);
	eax = esi; //mov
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C40A8(); esp += 4; //call
loc_4C1FF1:
	add(esp, (int32_t)0xC);
	eax = to32i(ebx+4); //mov
	add(eax, esi);
	cl = to8i(ebx+0x14); //mov
	to32i(ebx+4) = eax; //mov
	eax = esi; //mov
	shl(eax, cl);
	edx = to32i(ebx+0xC); //mov
	add(ebp, eax);
	eax = to32i(ebx+4); //mov
	sub(edi, esi);
	cmp(eax, edx);
	if (jbe())
		goto loc_4C2017;
	eax = to32i(ebx+8); //mov
	to32i(ebx+4) = eax; //mov
loc_4C2017:
	test(edi, edi);
	if (jg())
		goto loc_4C1FC1;
loc_4C201B:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C2022:
	edx = to32i(ebx+4); //mov
	cl = to8i(ebx+0x10); //mov
	eax = to32i(ebx); //mov
	shl(edx, cl);
	push32(ebp);
	add(eax, edx);
	cl = to8i(ebx+0x1C); //mov
	push32(eax);
	eax = esi; //mov
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C4114(); esp += 4; //call
	goto loc_4C1FF1;
}
Fn(void) Game::_sub_4C2040()
{
	push32(esi);
	esi = to32i(esp+0xC); //mov
	to32i(eax+4) = 0; //mov
	to32i(eax) = edx; //mov
	to32i(eax+8) = ebx; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0xC) = ecx; //mov
	add(edx, esi);
	to32i(eax+0x10) = edx; //mov
	edx = (int32_t)(intptr_t)(esi+2); //lea
	to32i(eax+0x14) = edx; //mov
	to32i(eax+0x1C) = esi; //mov
	edx = to32i(esp+8); //mov
	to32i(eax+0x18) = edx; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = (int32_t)(intptr_t)sub_4C1FB0; //mov
	eax = 0x20; //mov
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4C2080()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = edx; //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_4C20FC;
	esi = eax; //mov
	edx = to32i(eax+8); //mov
	ecx = to32i(eax+4); //mov
	add(edx, edi);
	ebp = to32i(ebx); //mov
	cmp(edx, ecx);
	if (jle())
		goto loc_4C2109;
	add(eax, (int32_t)4);
	to32i(esp) = eax; //mov
loc_4C20A4:
	test(edi, edi);
	if (jle())
		goto loc_4C2130;
	eax = to32i(esi+8); //mov
	cmp(eax, to32i(esi+4));
	if (jge())
		goto loc_4C2165;
loc_4C20B8:
	ebx = to32i(esi+4); //mov
	sub(ebx, to32i(esi+8));
	cmp(edi, ebx);
	if (jge())
		goto loc_4C20C4;
	ebx = edi; //mov
loc_4C20C4:
	cmp(to32i(esi+0x14), (int32_t)0);
	if (jz())
		goto loc_4C21A9;
	eax = to32i(esi+8); //mov
	cl = to8i(esi+0xC); //mov
	edx = to32i(esi); //mov
	shl(eax, cl);
	push32(ebp);
	add(eax, edx);
	cl = to8i(esi+0x18); //mov
	push32(eax);
	eax = ebx; //mov
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C40A8(); esp += 4; //call
loc_4C20E9:
	add(esp, (int32_t)0xC);
	add(to32i(esi+8), ebx);
	eax = ebx; //mov
	cl = to8i(esi+0x10); //mov
	shl(eax, cl);
	sub(edi, ebx);
	add(ebp, eax);
	goto loc_4C20A4;
loc_4C20FC:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C2109:
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jz())
		goto loc_4C213A;
	push32(ebp);
	ebx = to32i(eax+8); //mov
	cl = to8i(eax+0xC); //mov
	edx = to32i(eax); //mov
	shl(ebx, cl);
	cl = to8i(eax+0x18); //mov
	add(edx, ebx);
	eax = edi; //mov
	push32(edx);
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C40A8(); esp += 4; //call
	add(esp, (int32_t)0xC);
	add(to32i(esi+8), edi);
loc_4C2130:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C213A:
	push32(ebp);
	edx = to32i(eax+8); //mov
	cl = to8i(eax+0xC); //mov
	ebx = to32i(eax); //mov
	shl(edx, cl);
	cl = to8i(eax+0x18); //mov
	add(edx, ebx);
	eax = edi; //mov
	push32(edx);
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C4114(); esp += 4; //call
	add(esp, (int32_t)0xC);
	add(to32i(esi+8), edi);
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C2165:
	edx = to32i(esp); //mov
	eax = esi; //mov
	call(to32i(dword_4DCFDC));
	test(eax, eax);
	if (jnz())
		goto loc_4C2181;
	cmp(to32i(esi), (int32_t)0);
	if (jz())
		goto loc_4C2181;
	to32i(esi+8) = eax; //mov
	goto loc_4C20B8;
loc_4C2181:
	ebx = edi; //mov
	eax = ebp; //mov
	cl = to8i(esi+0x10); //mov
	xor_(edx, edx);
	shl(ebx, cl);
	esp -= 4; _memset_(); esp += 4; //call
	to32i(esi+8) = 0; //mov
	to32i(esi+4) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4C21A9:
	eax = to32i(esi+8); //mov
	cl = to8i(esi+0xC); //mov
	edx = to32i(esi); //mov
	shl(eax, cl);
	push32(ebp);
	add(eax, edx);
	cl = to8i(esi+0x18); //mov
	push32(eax);
	eax = ebx; //mov
	shl(eax, cl);
	push32(eax);
	esp -= 4; _sub_4C4114(); esp += 4; //call
	goto loc_4C20E9;
}
Fn(void) Game::_sub_4C21CC()
{
	push32(esi);
	to32i(eax) = 1; //mov
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	esi = (int32_t)(intptr_t)(edx+ebx); //lea
	to32i(eax+0xC) = esi; //mov
	to32i(eax+0x14) = edx; //mov
	esi = (int32_t)(intptr_t)(ebx+2); //lea
	to32i(eax+0x10) = esi; //mov
	to32i(eax+0x18) = ebx; //mov
	eax = 0x1C; //mov
	to32i(ecx) = (int32_t)(intptr_t)sub_4C2080; //mov
	pop32(esi);
}
Fn(void) Game::_sub_4C2200()
{
	//MMX
}
Fn(void) Game::_sub_4C22F0()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ebx = to32i(esp+0x40); //mov
	esi = to32i(ebx+4); //mov
	eax = to32i(ebx+2); //mov
	edi = to32i(ebx+8); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(ebx); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebx+6); //mov
	sar(esi, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sar(edi, (int32_t)0x10);
	to32i(esp+0xC) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_4C250A;
loc_4C2325:
	ebp = to32i(ebx); //mov
	eax = to32i(ebx+0xC); //mov
	sub(ebp, (int32_t)0x1C);
	xor_(edx, edx);
	to32i(ebx) = ebp; //mov
	dl = to8i(eax); //mov
	sar(edx, (int32_t)4);
	to32i(esp+0x24) = edx; //mov
	dl = to8i(eax); //mov
	and_(dl, (int8_t)0xF);
	and_(edx, (int32_t)0xFF);
	to32i(esp+0x28) = edx; //mov
	edx = to32i(esp+0x24); //mov
	ecx = to32i(dword_4E0AFC+edx*4); //mov
	edx = to32i(dword_4E0B0C+edx*4); //mov
	to32i(esp+0x14) = edx; //mov
	edx = to32i(esp+0x28); //mov
	to32i(esp+0x20) = ecx; //mov
	ecx = to32i(dword_4E0AFC+edx*4); //mov
	edx = to32i(dword_4E0B0C+edx*4); //mov
	to32i(esp+0x1C) = edx; //mov
	xor_(edx, edx);
	dl = to8i(eax+1); //mov
	sar(edx, (int32_t)4);
	add(edx, (int32_t)8);
	to32i(esp+0x24) = edx; //mov
	dl = to8i(eax+1); //mov
	to32i(esp+0x18) = ecx; //mov
	and_(dl, (int8_t)0xF);
	and_(edx, (int32_t)0xFF);
	add(edx, (int32_t)8);
	add(eax, (int32_t)2);
	to32i(esp+0x28) = edx; //mov
	edx = to32i(ebx+0x10); //mov
	to32i(ebx+0xC) = eax; //mov
	add(edx, (int32_t)0x70);
	eax = to32i(ebx+0x10); //mov
	to32i(esp) = edx; //mov
	cmp(eax, edx);
	if (jnb())
		goto loc_4C2501;
loc_4C23B9:
	eax = to32i(ebx+0xC); //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	edx = eax; //mov
	sar(edx, (int32_t)4);
	cl = to8i(esp+0x24); //mov
	shl(edx, (int32_t)0x1C);
	sar(edx, cl);
	ecx = edx; //mov
	edx = to32i(esp+0x20); //mov
	imul32(edx, esi);
	ebp = to32i(esp+0x14); //mov
	add(ecx, edx);
	edx = to32i(esp+0x10); //mov
	imul32(edx, ebp);
	shl(eax, (int32_t)0x1C);
	add(edx, ecx);
	cl = to8i(esp+0x28); //mov
	sar(eax, cl);
	ecx = eax; //mov
	eax = to32i(esp+0x18); //mov
	imul32(eax, edi);
	ebp = to32i(esp+0x1C); //mov
	add(ecx, eax);
	eax = to32i(esp+0xC); //mov
	imul32(eax, ebp);
	add(eax, ecx);
	add(edx, (int32_t)0x80);
	add(eax, (int32_t)0x80);
	sar(edx, (int32_t)8);
	sar(eax, (int32_t)8);
	cmp(edx, (int32_t)0xFFFF8000);
	if (jge())
		goto loc_4C252A;
	edx = 0xFFFF8000; //mov
loc_4C242C:
	cmp(eax, (int32_t)0xFFFF8000);
	if (jge())
		goto loc_4C2540;
	eax = 0xFFFF8000; //mov
loc_4C243C:
	ecx = to32i(ebx+0x10); //mov
	to16i(ecx) = dx; //mov
	ecx = to32i(ebx+0x10); //mov
	to16i(ecx+2) = ax; //mov
	ecx = to32i(ebx+0xC); //mov
	to32i(esp+0x10) = edx; //mov
	to32i(esp+0xC) = eax; //mov
	cl = to8i(ecx+1); //mov
	and_(ecx, (int32_t)0xFF);
	to32i(esp+4) = ecx; //mov
	sar(ecx, (int32_t)4);
	shl(ecx, (int32_t)0x1C);
	to32i(esp+8) = ecx; //mov
	cl = to8i(esp+0x24); //mov
	ebp = to32i(esp+8); //mov
	sar(ebp, cl);
	ecx = ebp; //mov
	imul32(edx, to32i(esp+0x20));
	imul32(eax, to32i(esp+0x18));
	add(edx, ecx);
	imul32(esi, to32i(esp+0x14));
	add(edx, esi);
	esi = to32i(esp+4); //mov
	cl = to8i(esp+0x28); //mov
	shl(esi, (int32_t)0x1C);
	sar(esi, cl);
	imul32(edi, to32i(esp+0x1C));
	add(eax, esi);
	add(eax, edi);
	add(edx, (int32_t)0x80);
	add(eax, (int32_t)0x80);
	sar(edx, (int32_t)8);
	sar(eax, (int32_t)8);
	cmp(edx, (int32_t)0xFFFF8000);
	if (jge())
		goto loc_4C2555;
	edx = 0xFFFF8000; //mov
loc_4C24C2:
	cmp(eax, (int32_t)0xFFFF8000);
	if (jge())
		goto loc_4C256B;
	eax = 0xFFFF8000; //mov
loc_4C24D2:
	ecx = to32i(ebx+0x10); //mov
	to16i(ecx+4) = dx; //mov
	esi = edx; //mov
	edx = to32i(ebx+0x10); //mov
	to16i(edx+6) = ax; //mov
	edi = eax; //mov
	ecx = to32i(ebx+0xC); //mov
	ebp = to32i(ebx+0x10); //mov
	add(ecx, (int32_t)2);
	add(ebp, (int32_t)8);
	to32i(ebx+0xC) = ecx; //mov
	edx = to32i(esp); //mov
	to32i(ebx+0x10) = ebp; //mov
	cmp(ebp, edx);
	if (jb())
		goto loc_4C23B9;
loc_4C2501:
	cmp(to32i(ebx), (int32_t)0);
	if (jg())
		goto loc_4C2325;
loc_4C250A:
	to16i(ebx+6) = si; //mov
	eax = to32i(esp+0x10); //mov
	to16i(ebx+0xA) = di; //mov
	to16i(ebx+4) = ax; //mov
	eax = to32i(esp+0xC); //mov
	to16i(ebx+8) = ax; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4C252A:
	cmp(edx, (int32_t)0x7FFF);
	if (jle())
		goto loc_4C242C;
	edx = 0x7FFF; //mov
	goto loc_4C242C;
loc_4C2540:
	cmp(eax, (int32_t)0x7FFF);
	if (jle())
		goto loc_4C243C;
	eax = 0x7FFF; //mov
	goto loc_4C243C;
loc_4C2555:
	cmp(edx, (int32_t)0x7FFF);
	if (jle())
		goto loc_4C24C2;
	edx = 0x7FFF; //mov
	goto loc_4C24C2;
loc_4C256B:
	cmp(eax, (int32_t)0x7FFF);
	if (jle())
		goto loc_4C24D2;
	eax = 0x7FFF; //mov
	goto loc_4C24D2;
}
Fn(void) Game::_sub_4C2580()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	edi = to32i(esi+0xC); //mov
	ebx = to32i(esi+0x10); //mov
	edx = to32i(esi+4); //mov
	to32i(dword_4E0B1C) = edx; //mov
	edx = to32i(esi+8); //mov
	to32i(dword_4E0B20) = edx; //mov
loc_4C259F:
	cmp(to32i(esi), (int32_t)0);
	if (jle())
		goto loc_4C264F;
	sub(to32i(esi), (int32_t)0x1C);
	xor_(eax, eax);
	al = to8i(edi); //mov
	shr(eax, (int32_t)4);
	fld(to32f(flt_4E0548+eax*4));
	fld(to32f(flt_4E0538+eax*4));
	al = to8i(edi); //mov
	and_(eax, (int32_t)0xF);
	shl(eax, (int32_t)6);
	add(edi, (int32_t)1);
	xor_(edx, edx);
	ecx = 0xFFFFFFF2; //mov
	fld(to32f(dword_4E0B20));
	fmul_st(0, 2);
	fld(to32f(dword_4E0B1C));
	fld(to32f(dword_4E0B1C));
	fld(to32f(dword_4E0B20));
	add(edi, (int32_t)0xE);
	add(ebx, (int32_t)0x70);
loc_4C25F2:
	fstp_st(0);
	fmul_st(0, 3);
	dl = to8i(ecx+edi); //mov
	shr(dl, (int8_t)4);
	faddp_st(2, 0);
	fmul_st(0, 3);
	fxch_st(1);
	fadd(to32f(flt_5B9464+eax+edx*4));
	fld_st(0);
	dl = to8i(ecx+edi); //mov
	fld_st(0);
	fxch_st(2);
	fst(to32f(ebx+ecx*8));
	fmul_st(0, 4);
	fxch_st(1);
	fmul_st(0, 5);
	fxch_st(1);
	faddp_st(3, 0);
	and_(dl, (int8_t)0xF);
	fxch_st(2);
	fadd(to32f(flt_5B9464+eax+edx*4));
	fld_st(0);
	fxch_st(1);
	fst(to32f(ebx+ecx*8+4));
	fxch_st(2);
	inc(ecx);
	if (jl())
		goto loc_4C25F2;
	fstp(to32f(dword_4E0B20));
	fstp_st(0);
	fstp(to32f(dword_4E0B1C));
	fcompp();
	fstp_st(0);
	goto loc_4C259F;
loc_4C264F:
	edx = to32i(dword_4E0B1C); //mov
	to32i(esi+4) = edx; //mov
	edx = to32i(dword_4E0B20); //mov
	to32i(esi+8) = edx; //mov
	to32i(esi+0x10) = ebx; //mov
	popa();
	leave();
}
Fn(void) Game::_sub_4C2668()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	esi = to32i(ebp+8); //mov
	edi = to32i(esi+0x14); //mov
	ebp = to32i(esi+0x18); //mov
	edx = to32i(esi+4); //mov
	to32i(dword_4E0B24) = edx; //mov
	edx = to32i(esi+8); //mov
	to32i(dword_4E0B28) = edx; //mov
	edx = to32i(esi+0xC); //mov
	to32i(dword_4E0B2C) = edx; //mov
	edx = to32i(esi+0x10); //mov
	to32i(dword_4E0B30) = edx; //mov
loc_4C2699:
	cmp(to32i(esi), (int32_t)0);
	if (jle())
		goto loc_4C27B9;
	sub(to32i(esi), (int32_t)0x1C);
	xor_(eax, eax);
	xor_(ebx, ebx);
	al = to8i(edi); //mov
	bl = to8i(edi); //mov
	shr(eax, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	fld(to32f(flt_4E0548+ebx*4));
	fld(to32f(flt_4E0538+ebx*4));
	fld(to32f(flt_4E0548+eax*4));
	fld(to32f(flt_4E0538+eax*4));
	al = to8i(edi+1); //mov
	bl = to8i(edi+1); //mov
	shr(eax, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	shl(eax, (int32_t)6);
	shl(ebx, (int32_t)6);
	add(edi, (int32_t)2);
	xor_(edx, edx);
	ecx = 0x1C; //mov
	push32(esi);
	esi = ebx; //mov
loc_4C26EE:
	fld(to32f(dword_4E0B24));
	fmul_st(0, 1);
	fld(to32f(dword_4E0B2C));
	fmul_st(0, 4);
	fld(to32f(dword_4E0B28));
	fmul_st(0, 4);
	fld(to32f(dword_4E0B30));
	fmul_st(0, 7);
	fxch_st(1);
	faddp_st(3, 0);
	dl = to8i(edi); //mov
	bl = to8i(edi); //mov
	shr(edx, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	faddp_st(1, 0);
	fxch_st(1);
	fadd(to32f(flt_5B9464+eax+edx*4));
	fxch_st(1);
	fadd(to32f(flt_5B9464+esi+ebx*4));
	fxch_st(1);
	fst(to32f(ebp+0));
	fstp(to32f(dword_4E0B28));
	fst(to32f(ebp+4));
	fstp(to32f(dword_4E0B30));
	fld(to32f(dword_4E0B28));
	fmul_st(0, 1);
	fld(to32f(dword_4E0B30));
	fmul_st(0, 4);
	fld(to32f(dword_4E0B24));
	fmul_st(0, 4);
	fld(to32f(dword_4E0B2C));
	fmul_st(0, 7);
	fxch_st(1);
	faddp_st(3, 0);
	dl = to8i(edi+1); //mov
	bl = to8i(edi+1); //mov
	shr(edx, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	faddp_st(1, 0);
	fxch_st(1);
	fadd(to32f(flt_5B9464+eax+edx*4));
	fxch_st(1);
	fadd(to32f(flt_5B9464+esi+ebx*4));
	fxch_st(1);
	fst(to32f(ebp+8));
	fstp(to32f(dword_4E0B24));
	fst(to32f(ebp+0xC));
	fstp(to32f(dword_4E0B2C));
	add(edi, (int32_t)2);
	add(ebp, (int32_t)0x10);
	sub(ecx, (int32_t)2);
	if (jg())
		goto loc_4C26EE;
	fstp_st(0);
	fstp_st(0);
	fstp_st(0);
	fstp_st(0);
	pop32(esi);
	goto loc_4C2699;
loc_4C27B9:
	to32i(esi+0x18) = ebp; //mov
	edx = to32i(dword_4E0B24); //mov
	to32i(esi+4) = edx; //mov
	edx = to32i(dword_4E0B28); //mov
	to32i(esi+8) = edx; //mov
	edx = to32i(dword_4E0B2C); //mov
	to32i(esi+0xC) = edx; //mov
	edx = to32i(dword_4E0B30); //mov
	to32i(esi+0x10) = edx; //mov
	popa();
	leave();
}
Fn(void) Game::_sub_4C27F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = to32i(eax+4); //mov
	ebx = to32i(dword_4E0B34+edx*4); //mov
	esi = to32i(eax+4); //mov
	edi = to32i(eax+8); //mov
	and_(ebx, ecx);
	sub(edi, edx);
	cl = dl; //mov
	to32i(eax+8) = edi; //mov
	shr(esi, cl);
	to32i(eax+4) = esi; //mov
	cmp(edi, (int32_t)8);
	if (jl())
		goto loc_4C281E;
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4C281E:
	edx = to32i(eax); //mov
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	cl = to8i(eax+8); //mov
	esi = to32i(eax); //mov
	edi = to32i(eax+8); //mov
	inc(esi);
	add(edi, (int32_t)8);
	to32i(eax) = esi; //mov
	shl(edx, cl);
	ecx = to32i(eax+4); //mov
	to32i(eax+8) = edi; //mov
	or_(ecx, edx);
	to32i(eax+4) = ecx; //mov
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4C284C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	cl = dl; //mov
	ebx = to32i(eax+4); //mov
	esi = to32i(eax+8); //mov
	shr(ebx, cl);
	sub(esi, edx);
	to32i(eax+4) = ebx; //mov
	to32i(eax+8) = esi; //mov
	cmp(esi, (int32_t)8);
	if (jl())
		goto loc_4C286C;
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4C286C:
	edx = to32i(eax); //mov
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	cl = to8i(eax+8); //mov
	ebp = to32i(eax+4); //mov
	shl(edx, cl);
	ecx = to32i(eax+8); //mov
	or_(ebp, edx);
	add(ecx, (int32_t)8);
	edx = to32i(eax); //mov
	to32i(eax+4) = ebp; //mov
	inc(edx);
	to32i(eax+8) = ecx; //mov
	to32i(eax) = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4C28A8()
{
	static const void *const off_4C2898[] = {
		&&loc_4C28D0,
		&&loc_4C2A21,
		&&loc_4C28D0,
		&&loc_4C2A35,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	ebp = ebx; //mov
	edi = ecx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4C28F2;
	xor_(ecx, ecx);
	ebx = 3; //mov
loc_4C28BF:
	eax = to32i(esi+4); //mov
	and_(eax, ebx);
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_4C28E4;
	goto *off_4C2898[eax];
loc_4C28D0:
	edx = 1; //mov
	eax = esi; //mov
	to32i(ebp+ecx*4+0) = 0; //mov
loc_4C28DF:
	esp -= 4; _sub_4C284C(); esp += 4; //call
loc_4C28E4:
	add(ecx, edi);
	cmp(ecx, (int32_t)0x6C);
	if (jl())
		goto loc_4C28BF;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4C28F2:
	xor_(edx, edx);
	xor_(ecx, ecx);
	to32i(esp) = edx; //mov
loc_4C28F9:
	eax = to32i(esi+4); //mov
	edx = to32i(esp); //mov
	and_(eax, (int32_t)0xFF);
	shl(edx, (int32_t)8);
	xor_(ebx, ebx);
	bl = (int32_t)(intptr_t)byte_4E0C58[edx+eax]; //mov
	imul32(eax, ebx, 0xC);
	to32i(esp+4) = eax; //mov
	eax = to32i(dword_4E0E58+eax); //mov
	edx = to32i(esp+4); //mov
	to32i(esp) = eax; //mov
	edx = to32i(dword_4E0E5C+edx); //mov
	eax = esi; //mov
	esp -= 4; _sub_4C284C(); esp += 4; //call
	cmp(ebx, (int32_t)3);
	if (jle())
		goto loc_4C2952;
	edx = to32i(esp+4); //mov
	eax = to32i(dword_4E0E60+edx); //mov
	to32i(ebp+ecx*4+0) = eax; //mov
	add(ecx, edi);
loc_4C2946:
	cmp(ecx, (int32_t)0x6C);
	if (jl())
		goto loc_4C28F9;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4C2952:
	cmp(ebx, (int32_t)1);
	if (jg())
		goto loc_4C2971;
	ebx = 7; //mov
loc_4C295C:
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4C29CD;
	add(ebx, eax);
	goto loc_4C295C;
loc_4C2971:
	edx = 6; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	add(eax, (int32_t)7);
	to32i(esp+8) = eax; //mov
	imul32(eax, edi);
	add(eax, ecx);
	cmp(eax, (int32_t)0x6C);
	if (jle())
		goto loc_4C29A0;
	edx = 0x6C; //mov
	sub(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esp+8) = eax; //mov
loc_4C29A0:
	ebx = to32i(esp+8); //mov
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_4C2946;
	edx = to32i(esp+8); //mov
loc_4C29AE:
	inc(eax);
	to32i(ebp+ecx*4+0) = 0; //mov
	add(ecx, edi);
	cmp(eax, edx);
	if (jl())
		goto loc_4C29AE;
	cmp(ecx, (int32_t)0x6C);
	if (jl())
		goto loc_4C28F9;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4C29CD:
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(edx, ebp);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4C2A03;
	to32i(esp+0xC) = ebx; //mov
	fild(to32i(esp+0xC));
	fstp(to32f(edx));
	add(ecx, edi);
	cmp(ecx, (int32_t)0x6C);
	if (jl())
		goto loc_4C28F9;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4C2A03:
	neg(ebx);
	to32i(esp+0xC) = ebx; //mov
	fild(to32i(esp+0xC));
	fstp(to32f(edx));
	add(ecx, edi);
	cmp(ecx, (int32_t)0x6C);
	if (jl())
		goto loc_4C28F9;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4C2A21:
	edx = 2; //mov
	eax = esi; //mov
	to32i(ebp+ecx*4+0) = 0xC0000000; //mov
	goto loc_4C28DF;
loc_4C2A35:
	edx = 2; //mov
	eax = esi; //mov
	to32i(ebp+ecx*4+0) = 0x40000000; //mov
	goto loc_4C28DF;
}
Fn(void) Game::_sub_4C2A4C()
{
	push32(edx);
	edx = eax; //mov
	edx = (int32_t)(intptr_t)(eax+0x1B0); //lea
	fld(to64f(dbl_4D1E68));
	fld(to64f(dbl_4D1E60));
	fld(to64f(dbl_4D1E58));
loc_4C2A67:
	fld(to32f(eax-4));
	fadd(to32f(eax+4));
	fmul_st(0, 1);
	fld(to32f(eax-0xC));
	fadd(to32f(eax+0xC));
	fmul_st(0, 3);
	faddp_st(1, 0);
	fld(to32f(eax-0x14));
	fadd(to32f(eax+0x14));
	fmul_st(0, 4);
	faddp_st(1, 0);
	add(eax, (int32_t)8);
	fstp(to32f(eax-8));
	cmp(eax, edx);
	if (jnz())
		goto loc_4C2A67;
	fstp_st(0);
	fstp_st(0);
	fstp_st(0);
	pop32(edx);
}
Fn(void) Game::_sub_4C2A98()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	ebp = eax; //mov
	to32i(esp+0x64) = edx; //mov
	eax = 0xA; //mov
	edx = (int32_t)(intptr_t)(ebp+0x28); //lea
loc_4C2AAE:
	dec(eax);
	fld(to32f(edx));
	sub(edx, (int32_t)4);
	fstp(to32f(esp+eax*4+0x38));
	test(eax, eax);
	if (jge())
		goto loc_4C2AAE;
	edx = 0x3F800000; //mov
	edi = to32i(esp+0x64); //mov
	eax = (int32_t)(intptr_t)(ebp+0x28); //lea
	xor_(ebx, ebx);
	xor_(esi, esi);
	to32i(esp+0x30) = edx; //mov
	to32i(esp+0x60) = eax; //mov
loc_4C2AD4:
	fld(to32f(ebp+0x2C));
	fchs();
	fmul(to32f(esp+0x5C));
	eax = 0xA; //mov
	edx = to32i(esp+0x60); //mov
	fst(to32f(esp+0x68));
loc_4C2AEA:
	fld(to32f(edx));
	fmul(to32f(esp+eax*4+0x30));
	fsubp_st(1, 0);
	fld(to32f(edx));
	fmul_st(0, 1);
	dec(eax);
	fadd(to32f(esp+eax*4+0x34));
	sub(edx, (int32_t)4);
	fstp(to32f(esp+eax*4+0x38));
	test(eax, eax);
	if (jge())
		goto loc_4C2AEA;
	fstp(to32f(esp+0x68));
	eax = to32i(esp+0x68); //mov
	xor_(ecx, ecx);
	to32i(esp+0x30) = eax; //mov
	to32i(esp+esi) = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4C2B3C;
	fld(to32f(esp+0x68));
	edx = to32i(esp+0x64); //mov
	eax = esi; //mov
loc_4C2B25:
	fld(to32f(edx));
	fmul(to32f(esp+eax-4));
	add(edx, (int32_t)4);
	sub(eax, (int32_t)4);
	inc(ecx);
	fsubp_st(1, 0);
	cmp(ecx, ebx);
	if (jl())
		goto loc_4C2B25;
	fstp(to32f(esp+0x68));
loc_4C2B3C:
	eax = to32i(esp+0x68); //mov
	add(edi, (int32_t)4);
	add(esi, (int32_t)4);
	inc(ebx);
	to32i(edi-4) = eax; //mov
	cmp(ebx, (int32_t)0xC);
	if (jl())
		goto loc_4C2AD4;
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4C2B58()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x34);
	esi = eax; //mov
	edi = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4C3307;
	to32i(esp+0x30) = ecx; //mov
loc_4C2B6D:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esi+0x114); //lea
	esp -= 4; _sub_4C2A98(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	edx = (int32_t)(intptr_t)(esi+0x684); //lea
	add(eax, edx);
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_4C3301;
loc_4C2B93:
	fld(to32f(esp));
	fmul(to32f(esi+0x144));
	fadd(to32f(eax));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fst(to32f(esi+0x170));
	fld(to32f(esp+0x30));
	fxch_st(1);
	fadd_st(0, 1);
	fstp(to32f(eax));
	fld(to32f(esp));
	fmul(to32f(esi+0x170));
	fadd(to32f(eax+4));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fst(to32f(esi+0x16C));
	fadd_st(0, 1);
	fstp(to32f(eax+4));
	fld(to32f(esp));
	fmul(to32f(esi+0x16C));
	fadd(to32f(eax+8));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fst(to32f(esi+0x168));
	faddp_st(1, 0);
	fstp(to32f(eax+8));
	fld(to32f(esp));
	fmul(to32f(esi+0x168));
	fadd(to32f(eax+0xC));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fstp(to32f(esi+0x164));
	fld(to32f(esp+0x30));
	fld(to32f(esi+0x164));
	fadd_st(0, 1);
	fstp(to32f(eax+0xC));
	fld(to32f(esp));
	fmul(to32f(esi+0x164));
	fadd(to32f(eax+0x10));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fst(to32f(esi+0x160));
	fadd_st(0, 1);
	fstp(to32f(eax+0x10));
	fld(to32f(esp));
	fmul(to32f(esi+0x160));
	fadd(to32f(eax+0x14));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fst(to32f(esi+0x15C));
	fadd_st(0, 1);
	fstp(to32f(eax+0x14));
	fld(to32f(esp));
	fmul(to32f(esi+0x15C));
	fadd(to32f(eax+0x18));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fst(to32f(esi+0x158));
	faddp_st(1, 0);
	fstp(to32f(eax+0x18));
	fld(to32f(esp));
	fmul(to32f(esi+0x158));
	fadd(to32f(eax+0x1C));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fst(to32f(esi+0x154));
	fld(to32f(esp+0x30));
	fxch_st(1);
	fadd_st(0, 1);
	fstp(to32f(eax+0x1C));
	fld(to32f(esp));
	fmul(to32f(esi+0x154));
	fadd(to32f(eax+0x20));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fst(to32f(esi+0x150));
	fadd_st(0, 1);
	fstp(to32f(eax+0x20));
	fld(to32f(esp));
	fmul(to32f(esi+0x150));
	fadd(to32f(eax+0x24));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fst(to32f(esi+0x14C));
	faddp_st(1, 0);
	fstp(to32f(eax+0x24));
	fld(to32f(esp));
	fmul(to32f(esi+0x14C));
	fadd(to32f(eax+0x28));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x148));
	faddp_st(1, 0);
	fstp(to32f(esi+0x148));
	fld(to32f(esp+0x30));
	fld(to32f(esi+0x148));
	fadd_st(0, 1);
	fstp(to32f(eax+0x28));
	fld(to32f(esp));
	fmul(to32f(esi+0x148));
	fadd(to32f(eax+0x2C));
	fld(to32f(esp+4));
	fmul(to32f(esi+0x14C));
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul(to32f(esi+0x150));
	faddp_st(1, 0);
	fld(to32f(esp+0xC));
	fmul(to32f(esi+0x154));
	faddp_st(1, 0);
	fld(to32f(esp+0x10));
	fmul(to32f(esi+0x158));
	faddp_st(1, 0);
	fld(to32f(esp+0x14));
	fmul(to32f(esi+0x15C));
	faddp_st(1, 0);
	fld(to32f(esp+0x18));
	fmul(to32f(esi+0x160));
	faddp_st(1, 0);
	fld(to32f(esp+0x1C));
	fmul(to32f(esi+0x164));
	faddp_st(1, 0);
	fld(to32f(esp+0x20));
	fmul(to32f(esi+0x168));
	faddp_st(1, 0);
	fld(to32f(esp+0x24));
	fmul(to32f(esi+0x16C));
	faddp_st(1, 0);
	fld(to32f(esp+0x28));
	fmul(to32f(esi+0x170));
	faddp_st(1, 0);
	fld(to32f(esp+0x2C));
	fmul(to32f(esi+0x144));
	faddp_st(1, 0);
	add(eax, (int32_t)0x30);
	fst(to32f(esi+0x144));
	faddp_st(1, 0);
	inc(edx);
	fstp(to32f(eax-4));
	cmp(edx, ebx);
	if (jl())
		goto loc_4C2B93;
loc_4C3301:
	add(esp, (int32_t)0x34);
	pop32(edi);
	pop32(esi);
	return;
loc_4C3307:
	to32i(esp+0x30) = 0x4B400000; //mov
	goto loc_4C2B6D;
}
Fn(void) Game::_sub_4C3314()
{
	push32(ebx);
	push32(esi);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	ebx = edx; //mov
	push32(ecx);
	call(to32i(off_4DDED0));
	xor_(eax, eax);
	edx = 1; //mov
	al = to8i(esi); //mov
	to32i(ebx+8) = 8; //mov
	inc(esi);
	to32i(ebx+4) = eax; //mov
	eax = ebx; //mov
	to32i(ebx) = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	edx = 4; //mov
	to32i(ebx+0xC) = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	edx = 0x20; //mov
	sub(edx, eax);
	eax = ebx; //mov
	to32i(ebx+0x10) = edx; //mov
	edx = 4; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	xor_(edx, edx);
	inc(eax);
	to32i(esp+8) = edx; //mov
	to32i(esp+4) = eax; //mov
	xor_(ecx, ecx);
	fild(to64i(esp+4));
	fmul(to64f(dbl_4D1E70));
	to32i(esp+8) = ecx; //mov
	edx = 6; //mov
	eax = ebx; //mov
	fstp(to32f(ebx+0x14));
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	fild(to64i(esp+4));
	fmul(to64f(dbl_4D1E78));
	eax = (int32_t)(intptr_t)(ebx+4); //lea
	fadd(to64f(dbl_4D1E80));
	edx = (int32_t)(intptr_t)(ebx+0x100); //lea
	pop32(ecx);
loc_4C33AE:
	fld(to32f(eax+0x10));
	fmul_st(0, 1);
	add(eax, (int32_t)4);
	fstp(to32f(eax+0x10));
	cmp(eax, edx);
	if (jnz())
		goto loc_4C33AE;
	fstp_st(0);
	eax = ebx; //mov
	edx = (int32_t)(intptr_t)(ebx+0x30); //lea
loc_4C33C4:
	add(eax, (int32_t)4);
	to32i(eax+0x110) = 0; //mov
	to32i(eax+0x140) = 0; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_4C33C4;
	eax = ebx; //mov
	add(ebx, (int32_t)0x510);
loc_4C33E7:
	add(eax, (int32_t)4);
	to32i(eax+0x170) = 0; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_4C33E7;
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_4C3400()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x230);
	esi = eax; //mov
	to32i(esp+0x214) = edx; //mov
	call(to32i(off_4DDED0));
	edx = 6; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	ecx = to32i(esi+0x10); //mov
	edx = eax; //mov
	cmp(eax, ecx);
	if (jnb())
		goto loc_4C36BE;
	ebp = 1; //mov
loc_4C3438:
	fld(to32f(flt_4E0B58+edx*4));
	fsub(to32f(esi+0x114));
	fmul(to64f(dbl_4D1E88));
	ecx = 1; //mov
	edi = (int32_t)(intptr_t)(esi+4); //lea
	fstp(to32f(esp+0x1D8));
	ebx = 6; //mov
loc_4C345F:
	edx = ebx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	fld(to32f(flt_4E0B58+eax*4));
	fsub(to32f(edi+0x114));
	fmul(to64f(dbl_4D1E88));
	inc(ecx);
	add(edi, (int32_t)4);
	fstp(to32f(esp+ecx*4+0x1D4));
	cmp(ecx, (int32_t)4);
	if (jl())
		goto loc_4C345F;
	ecx = 4; //mov
	ebx = 5; //mov
	edi = (int32_t)(intptr_t)(esi+0x10); //lea
loc_4C3498:
	edx = ebx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	fld(to32f(flt_4E0B98+eax*4));
	fsub(to32f(edi+0x114));
	fmul(to64f(dbl_4D1E88));
	inc(ecx);
	add(edi, (int32_t)4);
	fstp(to32f(esp+ecx*4+0x1D4));
	cmp(ecx, (int32_t)0xC);
	if (jl())
		goto loc_4C3498;
	ebx = 0xD8; //mov
	xor_(edi, edi);
	to32i(esp+0x220) = ebx; //mov
loc_4C34D2:
	edx = 8; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	edx = to32i(esp+0x220); //mov
	sub(edx, eax);
	to32i(esp+0x22C) = edx; //mov
	eax = esi; //mov
	edx = 4; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	xor_(edx, edx);
	to32i(esp+0x208) = eax; //mov
	to32i(esp+0x20C) = edx; //mov
	fild(to64i(esp+0x208));
	fmul(to64f(dbl_4D1E90));
	eax = esi; //mov
	edx = 6; //mov
	fstp(to32f(esp+0x224));
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	eax = to32i(esi+eax*4+0x14); //mov
	ecx = to32i(esi+0xC); //mov
	to32i(esp+0x228) = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4C36C5;
	ecx = 1; //mov
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C28A8(); esp += 4; //call
loc_4C3552:
	edx = to32i(esp+0x22C); //mov
	ecx = (int32_t)(intptr_t)(esi+edi); //lea
	shl(edx, (int32_t)2);
	xor_(eax, eax);
	add(edx, esi);
	fld(to32f(esp+0x228));
	fld(to32f(esp+0x224));
loc_4C3571:
	fld_st(0);
	fmul(to32f(edx+0x174));
	fld_st(2);
	fmul(to32f(esp+eax+0x14));
	add(ecx, (int32_t)4);
	add(eax, (int32_t)4);
	faddp_st(1, 0);
	add(edx, (int32_t)4);
	fstp(to32f(ecx+0x680));
	cmp(eax, (int32_t)0x1B0);
	if (jnz())
		goto loc_4C3571;
	fstp_st(0);
	ebx = to32i(esp+0x220); //mov
	fstp_st(0);
	add(ebx, (int32_t)0x6C);
	add(edi, eax);
	to32i(esp+0x220) = ebx; //mov
	cmp(edi, (int32_t)0x6C0);
	if (jnz())
		goto loc_4C34D2;
	eax = esi; //mov
	edx = (int32_t)(intptr_t)(esi+0x510); //lea
loc_4C35C2:
	add(eax, (int32_t)4);
	ecx = to32i(eax+0x830); //mov
	to32i(eax+0x170) = ecx; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_4C35C2;
	xor_(eax, edx);
	edx = esi; //mov
loc_4C35D9:
	add(edx, (int32_t)4);
	fld(to32f(esp+eax*4+0x1D8));
	fadd(to32f(edx+0x110));
	inc(eax);
	fstp(to32f(edx+0x110));
	cmp(eax, (int32_t)0xC);
	if (jl())
		goto loc_4C35D9;
	ecx = to32i(esp+0x214); //mov
	ebx = 1; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4C2B58(); esp += 4; //call
	eax = esi; //mov
	xor_(edx, edx);
loc_4C360E:
	add(eax, (int32_t)4);
	fld(to32f(esp+edx*4+0x1D8));
	fadd(to32f(eax+0x110));
	inc(edx);
	fstp(to32f(eax+0x110));
	cmp(edx, (int32_t)0xC);
	if (jl())
		goto loc_4C360E;
	ecx = to32i(esp+0x214); //mov
	ebx = 1; //mov
	edx = 0xC; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C2B58(); esp += 4; //call
	edx = esi; //mov
	xor_(eax, eax);
loc_4C3646:
	add(edx, (int32_t)4);
	fld(to32f(esp+eax*4+0x1D8));
	fadd(to32f(edx+0x110));
	inc(eax);
	fstp(to32f(edx+0x110));
	cmp(eax, (int32_t)0xC);
	if (jl())
		goto loc_4C3646;
	ecx = to32i(esp+0x214); //mov
	ebx = 1; //mov
	edx = 0x18; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C2B58(); esp += 4; //call
	edx = esi; //mov
	xor_(eax, eax);
loc_4C367E:
	add(edx, (int32_t)4);
	fld(to32f(esp+eax*4+0x1D8));
	fadd(to32f(edx+0x110));
	inc(eax);
	fstp(to32f(edx+0x110));
	cmp(eax, (int32_t)0xC);
	if (jl())
		goto loc_4C367E;
	ecx = to32i(esp+0x214); //mov
	ebx = 0x21; //mov
	edx = 0x24; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C2B58(); esp += 4; //call
	add(esp, (int32_t)0x230);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4C36BE:
	xor_(ebp, ebp);
	goto loc_4C3438;
loc_4C36C5:
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	edx = 1; //mov
	ecx = eax; //mov
	to32i(esp+0x218) = eax; //mov
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_4C27F0(); esp += 4; //call
	shl(ecx, (int32_t)2);
	to32i(esp+0x210) = eax; //mov
	to32i(esp+0x21C) = ecx; //mov
	edx = ebp; //mov
	add(ebx, ecx);
	ecx = 2; //mov
	eax = esi; //mov
	esp -= 4; _sub_4C28A8(); esp += 4; //call
	cmp(to32i(esp+0x210), (int32_t)0);
	if (jz())
		goto loc_4C3739;
	edx = to32i(esp+0x21C); //mov
	neg(edx);
	eax = (int32_t)(intptr_t)(edx+0x18); //lea
	add(edx, (int32_t)0x1C8);
loc_4C3727:
	add(eax, (int32_t)8);
	xor_(ecx, ecx);
	to32i(esp+eax-8) = ecx; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_4C3727;
	goto loc_4C3552;
loc_4C3739:
	xor_(eax, eax);
loc_4C373B:
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(esp+eax-4) = ecx; //mov
	cmp(eax, (int32_t)0x14);
	if (jnz())
		goto loc_4C373B;
	eax = 0x1C4; //mov
loc_4C374E:
	add(eax, (int32_t)4);
	xor_(ebx, ebx);
	to32i(esp+eax-4) = ebx; //mov
	cmp(eax, (int32_t)0x1D8);
	if (jnz())
		goto loc_4C374E;
	edx = to32i(esp+0x218); //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	shl(edx, (int32_t)2);
	sub(eax, edx);
	esp -= 4; _sub_4C2A4C(); esp += 4; //call
	fld(to32f(esp+0x228));
	fld_st(0);
	fmul(to64f(dbl_4D1E98));
	fstp_st(1);
	fstp(to32f(esp+0x228));
	goto loc_4C3552;
}
Fn(void) Game::_sub_4C40A8()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	ecx = to32i(ebp+8); //mov
	edi = to32i(ebp+0xC); //mov
	ebp = to32i(ebp+0x10); //mov
	cmp(ecx, (int32_t)7);
	if (jle())
		goto loc_4C40FC;
	sub(ecx, (int32_t)7);
loc_4C40BD:
	fild(to16i(edi));
	fild(to16i(edi+2));
	fild(to16i(edi+4));
	fild(to16i(edi+6));
	fild(to16i(edi+8));
	fild(to16i(edi+0xA));
	fild(to16i(edi+0xC));
	fild(to16i(edi+0xE));
	fxch_st(7);
	fstp(to32f(ebp+0));
	fstp(to32f(ebp+0x18));
	fstp(to32f(ebp+0x14));
	fstp(to32f(ebp+0x10));
	fstp(to32f(ebp+0xC));
	fstp(to32f(ebp+8));
	fstp(to32f(ebp+4));
	fstp(to32f(ebp+0x1C));
	add(edi, (int32_t)0x10);
	add(ebp, (int32_t)0x20);
	sub(ecx, (int32_t)8);
	if (jg())
		goto loc_4C40BD;
	add(ecx, (int32_t)7);
loc_4C40FC:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4C4111;
	fild(to16i(edi));
	fstp(to32f(ebp+0));
	add(edi, (int32_t)2);
	add(ebp, (int32_t)4);
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4C40FC;
loc_4C4111:
	popa();
	leave();
}
Fn(void) Game::_sub_4C4114()
{
	push32(ebp);
	ebp = esp; //mov
	pusha();
	ecx = to32i(ebp+8); //mov
	edi = to32i(ebp+0xC); //mov
	ebp = to32i(ebp+0x10); //mov
	xor_(eax, eax);
	xor_(edx, edx);
	cmp(ecx, (int32_t)3);
	if (jle())
		goto loc_4C416E;
	sub(ecx, (int32_t)3);
loc_4C412D:
	al = to8i(edi); //mov
	dl = to8i(edi+1); //mov
	add(edi, (int32_t)4);
	add(ebp, (int32_t)0x10);
	ebx = to32i(dword_5BA4E4+eax*4); //mov
	esi = to32i(dword_5BA4E4+edx*4); //mov
	al = to8i(edi-2); //mov
	dl = to8i(edi-1); //mov
	to32i(ebp-0x10) = ebx; //mov
	to32i(ebp-0xC) = esi; //mov
	ebx = to32i(dword_5BA4E4+eax*4); //mov
	esi = to32i(dword_5BA4E4+edx*4); //mov
	to32i(ebp-8) = ebx; //mov
	to32i(ebp-4) = esi; //mov
	sub(ecx, (int32_t)4);
	if (jg())
		goto loc_4C412D;
	add(ecx, (int32_t)3);
loc_4C416E:
	cmp(ecx, (int32_t)0);
	if (jle())
		goto loc_4C418A;
	al = to8i(edi); //mov
	add(edi, (int32_t)1);
	add(ebp, (int32_t)4);
	ebx = to32i(dword_5BA4E4+eax*4); //mov
	to32i(ebp-4) = ebx; //mov
	sub(ecx, (int32_t)1);
	if (jg())
		goto loc_4C416E;
loc_4C418A:
	popa();
	leave();
}
