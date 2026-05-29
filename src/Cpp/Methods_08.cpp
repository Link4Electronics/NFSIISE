#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_470AF0()
{
	push32(edx);
	push32(esi);
	push32(ebp);
	edx = to32i(dword_540D94); //mov
	push32(ecx);
	push32(ebx);
	test(edx, edx);
	if (jnz())
		goto loc_470B6C;
loc_470AFF:
	xor_(eax, eax);
loc_470B01:
	inc(eax);
	xor_(bl, bl);
	(dword_522D88+3)[eax] = bl; //mov
	cmp(eax, (int32_t)0x1E000);
	if (jl())
		goto loc_470B01;
	xor_(ebp, ebp);
	to32i(dword_540D90) = ebp; //mov
	to32i(dword_540D8C) = ebp; //mov
loc_470B1F:
	xor_(eax, eax);
	ebx = 1; //mov
	xor_(ecx, ecx);
loc_470B28:
	add(eax, (int32_t)0x14);
	to32i(dword_5227A0+eax) = ecx; //mov
	to32i(dword_5227A4+eax) = ecx; //mov
	to32i(dword_5227A8+eax) = ecx; //mov
	to32i(dword_5227AC+eax) = ecx; //mov
	to32i(dword_52279C+eax) = ebx; //mov
	cmp(eax, (int32_t)0x28);
	if (jnz())
		goto loc_470B28;
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
loc_470B52:
	add(eax, (int32_t)4);
	xor_(esi, esi);
	to32i(dword_52236C+eax) = esi; //mov
	cmp(eax, (int32_t)0x20);
	if (jnz())
		goto loc_470B52;
	to32i(dword_540D94) = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	return;
loc_470B6C:
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_470AFF;
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_470B1F;
	xor_(ecx, ecx);
	to32i(dword_522790) = ecx; //mov
	to32i(dword_522798) = ecx; //mov
	to32i(dword_5227A0) = ecx; //mov
	to32i(dword_5227A4) = ecx; //mov
	to32i(dword_5227A8) = ecx; //mov
	to32i(dword_540D90) = ecx; //mov
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_470BBD;
	cmp(to32i(dword_52279C), (int32_t)0);
	if (jz())
		goto loc_470BB9;
	eax = 1; //mov
loc_470BAF:
	to32i(dword_5227A8) = eax; //mov
	goto loc_470B1F;
loc_470BB9:
	xor_(eax, eax);
	goto loc_470BAF;
loc_470BBD:
	ebx = 2; //mov
	to32i(dword_5227AC) = ecx; //mov
	to32i(dword_52279C) = ecx; //mov
	to32i(dword_522794) = ebx; //mov
	goto loc_470B1F;
}
Fn(void) Game::_sub_470BE0()
{
	sub(esp, (int32_t)0x2C);
	eax = to32i(dword_512214); //mov
	to32i(dword_540D94) = eax; //mov
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_470BF6;
	add(esp, (int32_t)0x2C);
	return;
loc_470BF6:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = 0xB; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)dword_512234; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0x16C; //mov
	edi = (int32_t)(intptr_t)dword_5121F8; //mov
	esi = (int32_t)(intptr_t)dword_5227D8; //mov
	esp -= 4; _sub_470400(); esp += 4; //call
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xB; //mov
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	edi = (int32_t)(intptr_t)dword_512234; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(dword_522D88); //mov
	xor_(ecx, ecx);
	to32i(dword_4D955C) = eax; //mov
	to32i(dword_540D90) = ecx; //mov
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x2C);
}
Fn(void) Game::_sub_470C50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	xor_(ecx, ecx);
	edx = 1; //mov
	cl = to8i(ebp+0); //mov
	xor_(eax, eax);
	to32i(esp) = ecx; //mov
	cmp(ecx, edx);
	if (jle())
		goto loc_470C99;
loc_470C6E:
	esi = (int32_t)(intptr_t)(edx+ebp); //lea
	cl = to8i(esi); //mov
	cmp(cl, (int8_t)0xFF);
	if (jnz())
		goto loc_470CA8;
	edi = (uint8_t)to8i(esi+1); //movzx
	xor_(ecx, ecx);
	test(edi, edi);
	if (jle())
		goto loc_470C91;
loc_470C82:
	inc(eax);
	bl = to8i(esi+2); //mov
	inc(ecx);
	(dword_52234C+3)[eax] = bl; //mov
	cmp(ecx, edi);
	if (jl())
		goto loc_470C82;
loc_470C91:
	add(edx, (int32_t)3);
loc_470C94:
	cmp(edx, to32i(esp));
	if (jl())
		goto loc_470C6E;
loc_470C99:
	eax = (int32_t)(intptr_t)dword_522350; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470CA8:
	inc(eax);
	inc(edx);
	(dword_52234C+3)[eax] = cl; //mov
	goto loc_470C94;
}
Fn(void) Game::_sub_470CC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	eax = 1; //mov
	xor_(ecx, ecx);
loc_470CCE:
	esi = (int32_t)(intptr_t)(edi+ecx); //lea
	xor_(edx, edx);
	bl = to8i(esi); //mov
loc_470CD5:
	inc(ecx);
	bh = to8i(esi+1); //mov
	inc(esi);
	inc(edx);
	cmp(bh, bl);
	if (jnz())
		goto loc_470CE4;
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_470CD5;
loc_470CE4:
	cmp(edx, (int32_t)3);
	if (jl())
		goto loc_470D1D;
	add(eax, (int32_t)3);
	dh = 0xFF; //mov
	(dword_540D94+3)[eax] = bl; //mov
	(dword_540D94+2)[eax] = dl; //mov
	(dword_540D94+1)[eax] = dh; //mov
loc_470D00:
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_470CCE;
	to8i(byte_540D98) = al; //mov
	xor_(bl, bl);
	byte_540D98[eax] = bl; //mov
	eax = (int32_t)(intptr_t)byte_540D98; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470D1D:
	xor_(esi, esi);
	test(edx, edx);
	if (jle())
		goto loc_470D00;
loc_470D23:
	inc(eax);
	inc(esi);
	(dword_540D94+3)[eax] = bl; //mov
	cmp(esi, edx);
	if (jl())
		goto loc_470D23;
	goto loc_470D00;
}
Fn(void) Game::_sub_470D40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ebx = 0x60000; //mov
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
	xor_(ebp, ebp);
	ebx = 0x30000; //mov
	to32i(esp+8) = eax; //mov
	eax = 0x20000; //mov
	to32i(esp+0xC) = ebp; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esp+4) = eax; //mov
loc_470D95:
	ebx = 0x130000; //mov
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
	ebx = 0x60000; //mov
	edx = eax; //mov
	esi = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esi; //mov
	to32i(esp) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(dword_540E5C+ebp) = eax; //mov
	eax = to32i(esp); //mov
	sub(eax, edi);
	add(eax, esi);
	ecx = to32i(esp+8); //mov
	sar(eax, (int32_t)1);
	add(eax, ecx);
	to32i(dword_540EAC+ebp) = eax; //mov
	eax = edi; //mov
	ebx = to32i(esp); //mov
	sar(eax, (int32_t)1);
	edx = to32i(esp+4); //mov
	sub(eax, ebx);
	add(eax, edx);
	to32i(dword_540DBC+ebp) = eax; //mov
	eax = ebx; //mov
	add(ebp, (int32_t)4);
	sub(eax, esi);
	ebx = 0x60000; //mov
	esi = eax; //mov
	eax = edi; //mov
	sar(esi, (int32_t)1);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	ecx = to32i(esp+8); //mov
	edx = to32i(esp+0xE); //mov
	sub(esi, eax);
	inc(edx);
	eax = (int32_t)(intptr_t)(esi+ecx); //lea
	to16i(esp+0xE) = dx; //mov
	to32i(dword_540E08+ebp) = eax; //mov
	cmp(ebp, (int32_t)0x50);
	if (jnz())
		goto loc_470D95;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470E70()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	edx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_470EA1;
loc_470E80:
	edx = eax; //mov
	eax = to32i(esi+8); //mov
	sub(eax, to32i(ecx+8));
	test(eax, eax);
	if (jle())
		goto loc_470EA5;
loc_470E8C:
	cmp(edx, eax);
	if (jle())
		goto loc_470EA9;
	sar(eax, (int32_t)2);
	add(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_470EBA;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	return;
loc_470EA1:
	neg(eax);
	goto loc_470E80;
loc_470EA5:
	neg(eax);
	goto loc_470E8C;
loc_470EA9:
	sar(edx, (int32_t)2);
	add(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_470EBA;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	return;
loc_470EBA:
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_470EC0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x100);
	esi = eax; //mov
	push32(ebx);
	bl = 0x2F; //mov
	edx = to32i(eax); //mov
	xor_(ecx, ecx);
loc_470ED2:
	xor_(eax, eax);
	al = to8i(edx); //mov
	esp -= 4; _sub_470F30(); esp += 4; //call
	test(al, al);
	if (jz())
		goto loc_470EF7;
	pop32(ebx);
loc_470EE0:
	xor_(eax, eax);
	al = to8i(edx); //mov
	esp -= 4; _sub_470F30(); esp += 4; //call
	test(al, al);
	if (jz())
		goto loc_470F0B;
	inc(ecx);
	al = to8i(edx); //mov
	inc(edx);
	to8i(esp+ecx-1) = al; //mov
	goto loc_470EE0;
loc_470EF7:
	eax = edx; //mov
	bh = to8i(eax); //mov
	inc(edx);
	cmp(bl, bh);
	if (jnz())
		goto loc_470ED2;
loc_470F00:
	eax = edx; //mov
	bh = to8i(eax); //mov
	inc(edx);
	cmp(bl, bh);
	if (jnz())
		goto loc_470F00;
	goto loc_470ED2;
loc_470F0B:
	to8i(esp+ecx) = al; //mov
	eax = esp; //mov
	esp -= 4; _unknown_libname_3(); esp += 4; //call
	to32i(esi) = edx; //mov
	add(esp, (int32_t)0x100);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_470F30()
{
	cmp(al, (int8_t)0x30);
	if (jb())
		goto loc_470F38;
	cmp(al, (int8_t)0x39);
	if (jbe())
		goto loc_470F40;
loc_470F38:
	cmp(al, (int8_t)0x2D);
	if (jz())
		goto loc_470F40;
	cmp(al, (int8_t)0x2B);
	if (jnz())
		goto loc_470F43;
loc_470F40:
	al = 1; //mov
	return;
loc_470F43:
	xor_(al, al);
}
Fn(void) Game::_sub_470F50()
{
	eax = to32i(dword_540EFC); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_540F00); //mov
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_470F70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = (int32_t)(intptr_t)aCNfs2seGameC_6; //mov
	ecx = 0xD0; //mov
	eax = (int32_t)(intptr_t)aHeadZSortingBu; //mov
	esi = 0xD1; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x1360; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = (int32_t)(intptr_t)aCNfs2seGameC_6; //mov
	edx = 0x1360; //mov
	to32i(dword_540EFC) = eax; //mov
	eax = (int32_t)(intptr_t)aTailZSortingBu; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_540F00) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470FE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = to32i(dword_540EFC); //mov
	to32i(esp+8) = esi; //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	xor_(ebx, ebx);
loc_470FF8:
	edx = ebp; //mov
	cmp(to32i(edx+eax), (int32_t)0);
	if (jnz())
		goto loc_47102C;
loc_471000:
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x1360);
	if (jnz())
		goto loc_470FF8;
	edi = to32i(esp+8); //mov
	esi = esp; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp) = ebx; //mov
	movsd();
	movsd();
	eax = to32i(esp+8); //mov
	to32i(dword_540EFC) = ebp; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47102C:
	edx = to32i(dword_540F00); //mov
	add(edx, eax);
	esi = to32i(edx); //mov
	to32i(esi) = ebx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_47103E;
	ecx = to32i(edx); //mov
loc_47103E:
	edx = ebp; //mov
	ebx = to32i(edx+eax); //mov
	goto loc_471000;
}
Fn(void) Game::_sub_471050()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = to32i(esp+0x14); //mov
	esi = edx; //mov
	edx = ecx; //mov
	ecx = to32i(esp+0x20); //mov
	sub(edi, (int32_t)0xA0000);
	test(ecx, ecx);
	if (jz())
		goto loc_4710AE;
	ebp = to32i(eax); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_471128;
	ecx = ebp; //mov
loc_471078:
	cmp(ecx, to32i(eax+8));
	if (jle())
		goto loc_4710AE;
	ecx = to32i(esi); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471131;
loc_471087:
	cmp(ecx, to32i(esi+8));
	if (jle())
		goto loc_4710AE;
	ecx = to32i(ebx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471138;
loc_471096:
	cmp(ecx, to32i(ebx+8));
	if (jle())
		goto loc_4710AE;
	ecx = to32i(edx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_47113F;
loc_4710A5:
	cmp(ecx, to32i(edx+8));
	if (jg())
		goto loc_47115B;
loc_4710AE:
	ecx = to32i(eax+0xA); //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(eax, cl);
	ecx = to32i(esi+0xA); //mov
	to32i(esp) = eax; //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(esi+8); //mov
	esi = to32i(esp); //mov
	shl(eax, cl);
	ecx = to32i(ebx+0xA); //mov
	add(esi, eax);
	sar(ecx, (int32_t)0x10);
	eax = to32i(ebx+8); //mov
	shl(eax, cl);
	ecx = to32i(edx+0xA); //mov
	sar(ecx, (int32_t)0x10);
	edx = to32i(edx+8); //mov
	add(eax, esi);
	shl(edx, cl);
	add(eax, edx);
	sar(eax, (int32_t)2);
	sub(eax, edi);
	sar(eax, (int32_t)0xF);
	test(eax, eax);
	if (jl())
		goto loc_47115B;
	cmp(eax, (int32_t)0x4D7);
	if (jg())
		goto loc_47115B;
	edx = to32i(dword_540EFC); //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(edx, ecx);
	eax = to32i(edx); //mov
	test(eax, eax);
	if (jz())
		goto loc_471146;
	ecx = to32i(esp+0x1C); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x18); //mov
	to32i(edx) = eax; //mov
loc_47111A:
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_471128:
	ecx = ebp; //mov
	neg(ecx);
	goto loc_471078;
loc_471131:
	neg(ecx);
	goto loc_471087;
loc_471138:
	neg(ecx);
	goto loc_471096;
loc_47113F:
	neg(ecx);
	goto loc_4710A5;
loc_471146:
	eax = to32i(esp+0x18); //mov
	to32i(edx) = eax; //mov
	eax = to32i(dword_540F00); //mov
	add(ecx, eax);
	eax = to32i(esp+0x1C); //mov
	to32i(ecx) = eax; //mov
	goto loc_47111A;
loc_47115B:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_471170()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = to32i(esp+0x18); //mov
	esi = ecx; //mov
	ecx = to32i(esp+0x14); //mov
	sub(ecx, (int32_t)0xA0000);
	ebp = to32i(eax); //mov
	to32i(esp+0x14) = ecx; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_471241;
	ecx = ebp; //mov
loc_471196:
	cmp(ecx, to32i(eax+8));
	if (jle())
		goto loc_4711CC;
	ecx = to32i(edx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_47124A;
loc_4711A5:
	cmp(ecx, to32i(edx+8));
	if (jle())
		goto loc_4711CC;
	ecx = to32i(ebx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471251;
loc_4711B4:
	cmp(ecx, to32i(ebx+8));
	if (jle())
		goto loc_4711CC;
	ecx = to32i(esi); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471258;
loc_4711C3:
	cmp(ecx, to32i(esi+8));
	if (jg())
		goto loc_47126D;
loc_4711CC:
	ecx = to32i(eax+0xA); //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	shl(eax, cl);
	ecx = to32i(edx+0xA); //mov
	to32i(esp) = eax; //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(edx+8); //mov
	edx = to32i(esp); //mov
	shl(eax, cl);
	ecx = to32i(ebx+0xA); //mov
	add(edx, eax);
	sar(ecx, (int32_t)0x10);
	eax = to32i(ebx+8); //mov
	shl(eax, cl);
	ecx = to32i(esi+0xA); //mov
	add(edx, eax);
	sar(ecx, (int32_t)0x10);
	eax = to32i(esi+8); //mov
	shl(eax, cl);
	add(eax, edx);
	edx = to32i(esp+0x14); //mov
	sar(eax, (int32_t)2);
	sub(eax, edx);
	sar(eax, (int32_t)0xF);
	test(eax, eax);
	if (jl())
		goto loc_47126D;
	cmp(eax, (int32_t)0x4D7);
	if (jg())
		goto loc_47126D;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_540EFC); //mov
	add(eax, edx);
	ecx = to32i(eax); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47125F;
	to32i(edi) = ecx; //mov
	to32i(eax) = edi; //mov
loc_471233:
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_471241:
	ecx = ebp; //mov
	neg(ecx);
	goto loc_471196;
loc_47124A:
	neg(ecx);
	goto loc_4711A5;
loc_471251:
	neg(ecx);
	goto loc_4711B4;
loc_471258:
	neg(ecx);
	goto loc_4711C3;
loc_47125F:
	to32i(edi) = ecx; //mov
	to32i(eax) = edi; //mov
	eax = to32i(dword_540F00); //mov
	to32i(edx+eax) = edi; //mov
	goto loc_471233;
loc_47126D:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_471280()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = to32i(esp+0x2C); //mov
	sub(edx, (int32_t)0xA0000);
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x2C) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_4712F1;
loc_47129F:
	ebp = to32i(esp+0x30); //mov
	edx = to32i(eax); //mov
	ebx = to32i(eax+0xC); //mov
	esi = to32i(eax+0x10); //mov
	edi = to32i(eax+0x14); //mov
	to32i(esp+4) = edx; //mov
	edx = to32i(eax+0x18); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_47130D;
	ecx = to32i(ebx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4712FD;
loc_4712C3:
	cmp(ecx, to32i(ebx+8));
	if (jle())
		goto loc_47130D;
	ecx = to32i(esi); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471301;
loc_4712CE:
	cmp(ecx, to32i(esi+8));
	if (jle())
		goto loc_47130D;
	ecx = to32i(edi); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471305;
loc_4712D9:
	cmp(ecx, to32i(edi+8));
	if (jle())
		goto loc_47130D;
	ecx = to32i(edx); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471309;
loc_4712E4:
	cmp(ecx, to32i(edx+8));
	if (jle())
		goto loc_47130D;
loc_4712E9:
	eax = to32i(esp+4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_47129F;
loc_4712F1:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 0x10; return;
loc_4712FD:
	neg(ecx);
	goto loc_4712C3;
loc_471301:
	neg(ecx);
	goto loc_4712CE;
loc_471305:
	neg(ecx);
	goto loc_4712D9;
loc_471309:
	neg(ecx);
	goto loc_4712E4;
loc_47130D:
	ecx = to32i(ebx+0xA); //mov
	sar(ecx, (int32_t)0x10);
	ebx = to32i(ebx+8); //mov
	shl(ebx, cl);
	ecx = to32i(esi+0xA); //mov
	to32i(esp) = ebx; //mov
	sar(ecx, (int32_t)0x10);
	ebx = to32i(esi+8); //mov
	shl(ebx, cl);
	add(ebx, to32i(esp));
	ecx = to32i(edi+0xA); //mov
	esi = to32i(edi+8); //mov
	sar(ecx, (int32_t)0x10);
	shl(esi, cl);
	ecx = to32i(edx+0xA); //mov
	sar(ecx, (int32_t)0x10);
	edx = to32i(edx+8); //mov
	add(ebx, esi);
	shl(edx, cl);
	add(edx, ebx);
	ebx = to32i(esp+0x2C); //mov
	sar(edx, (int32_t)2);
	sub(edx, ebx);
	sar(edx, (int32_t)0xF);
	test(edx, edx);
	if (jl())
		goto loc_4712E9;
	cmp(edx, (int32_t)0x4D7);
	if (jg())
		goto loc_4712E9;
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = to32i(dword_540EFC); //mov
	add(edx, ecx);
	esi = to32i(edx); //mov
	test(esi, esi);
	if (jz())
		goto loc_471379;
	to32i(eax) = esi; //mov
	to32i(edx) = eax; //mov
	goto loc_4712E9;
loc_471379:
	to32i(eax) = esi; //mov
	to32i(edx) = eax; //mov
	edx = to32i(dword_540F00); //mov
	to32i(ecx+edx) = eax; //mov
	goto loc_4712E9;
}
Fn(void) Game::_sub_471390()
{
	push32(ebx);
	push32(ecx);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_540EFC); //mov
	add(eax, ecx);
	ebx = to32i(eax); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4713AD;
	to32i(edx) = ebx; //mov
	to32i(eax) = edx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_4713AD:
	to32i(edx) = ebx; //mov
	to32i(eax) = edx; //mov
	eax = to32i(dword_540F00); //mov
	to32i(ecx+eax) = edx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4713C0()
{
	add(eax, (int32_t)0xA0000);
	sar(eax, (int32_t)0xF);
}
Fn(void) Game::_sub_4713D0()
{
	push32(edx);
	edx = 0x1360; //mov
	eax = to32i(dword_540EFC); //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4713F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	edx = to32i(eax+4); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_471412;
	edx = eax; //mov
loc_471401:
	cmp(to32i(edx+0xC), (int32_t)0);
	if (jnz())
		goto loc_471417;
	inc(ecx);
	ebx = to32i(esi+4); //mov
	add(edx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jl())
		goto loc_471401;
loc_471412:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_471417:
	ebx = edx; //mov
	eax = to32i(edx+0x10); //mov
	call(to32i(ebx+0xC));
	inc(ecx);
	ebx = to32i(esi+4); //mov
	add(edx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jl())
		goto loc_471401;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_471430()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebp = ebx; //mov
	eax = edx; //mov
	edx = to32i(esp); //mov
	ecx = to32i(edx+4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4714CB;
	push32(edi);
	push32(esi);
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jle())
		goto loc_4714AF;
loc_471452:
	cmp(eax, to32i(edx+0xC));
	if (jnz())
		goto loc_4714A0;
	cmp(ebp, to32i(edx+0x10));
	if (jnz())
		goto loc_4714A0;
	eax = to32i(esp+8); //mov
	edx = ebx; //mov
	add(eax, (int32_t)8);
	shl(edx, (int32_t)4);
	ebp = ebx; //mov
	ebx = (int32_t)(intptr_t)(edx+eax); //lea
	add(edx, (int32_t)0x10);
	add(edx, eax);
loc_471472:
	eax = to32i(esp+8); //mov
	eax = to32i(eax+4); //mov
	dec(eax);
	cmp(ebp, eax);
	if (jge())
		goto loc_4714AF;
	ecx = 0x10; //mov
	esi = edx; //mov
	edi = ebx; //mov
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
	inc(ebp);
	add(ebx, (int32_t)0x10);
	add(edx, (int32_t)0x10);
	goto loc_471472;
loc_4714A0:
	ecx = to32i(esp+8); //mov
	inc(ebx);
	edi = to32i(ecx+4); //mov
	add(edx, (int32_t)0x10);
	cmp(ebx, edi);
	if (jl())
		goto loc_471452;
loc_4714AF:
	eax = to32i(esp+8); //mov
	eax = to32i(eax+4); //mov
	edi = to32i(esp+8); //mov
	shl(eax, (int32_t)4);
	add(eax, edi);
	to32i(eax+8) = 0x7FFE; //mov
	dec(to32i(edi+4));
	pop32(esi);
	pop32(edi);
loc_4714CB:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(ecx);
}
Fn(void) Game::_sub_4714E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to32i(esp+0x10) = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+8) = ecx; //mov
	ecx = to32i(eax+4); //mov
	xor_(edx, edx);
	inc(ecx);
	to32i(esp+0xC) = edx; //mov
	to32i(eax+4) = ecx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_471528;
	ebx = eax; //mov
loc_471508:
	eax = to32i(esp+8); //mov
	edi = to32i(ebx+8); //mov
	to32i(esp+0xC) = edx; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_471550;
	eax = to32i(esp+0x10); //mov
	inc(edx);
	esi = to32i(eax+4); //mov
	add(ebx, (int32_t)0x10);
	cmp(edx, esi);
	if (jl())
		goto loc_471508;
loc_471528:
	edx = to32i(esp+0xC); //mov
	ebx = to32i(esp+0x10); //mov
	shl(edx, (int32_t)4);
	add(edx, ebx);
	eax = to32i(esp+8); //mov
	to32i(edx+8) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(edx+0xC) = eax; //mov
	eax = to32i(esp); //mov
	to32i(edx+0x10) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_471550:
	eax = to32i(esp+0x10); //mov
	eax = to32i(eax+4); //mov
	dec(eax);
	to32i(esp+0x14) = eax; //mov
	cmp(edx, eax);
	if (jge())
		goto loc_471528;
	ebx = to32i(esp+0x14); //mov
	eax = to32i(esp+0x10); //mov
	shl(ebx, (int32_t)4);
	add(eax, (int32_t)8);
	ebp = (int32_t)(intptr_t)(ebx+eax); //lea
	sub(ebx, (int32_t)0x10);
	add(ebx, eax);
loc_471576:
	ecx = 0x10; //mov
	esi = ebx; //mov
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
	eax = to32i(esp+0x14); //mov
	sub(ebp, (int32_t)0x10);
	dec(eax);
	sub(ebx, (int32_t)0x10);
	to32i(esp+0x14) = eax; //mov
	cmp(edx, eax);
	if (jl())
		goto loc_471576;
	goto loc_471528;
}
Fn(void) Game::_sub_4715B0()
{
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_4715C0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = edx; //mov
	to32i(dword_4DB1D8) = (int32_t)(intptr_t)aCNfs2seGame_10; //mov
	edx = esi; //mov
	ecx = 0x56; //mov
	shl(edx, (int32_t)4);
	xor_(ebx, ebx);
	add(edx, (int32_t)0x18);
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(eax+4) = 0; //mov
	to32i(eax) = esi; //mov
	ecx = eax; //mov
	ebx = to32i(eax); //mov
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_471614;
loc_4715FC:
	to32i(eax+8) = 0x7FFE; //mov
	to32i(eax+0xC) = 0; //mov
	inc(edx);
	esi = to32i(ecx); //mov
	add(eax, (int32_t)0x10);
	cmp(edx, esi);
	if (jl())
		goto loc_4715FC;
loc_471614:
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_471620()
{
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	edx = ebx; //mov
	ebx = ecx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = eax; //mov
	cmp(eax, (int32_t)0x14);
	if (jl())
		goto loc_471650;
	edx = 0x13; //mov
loc_471650:
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(eax, esi);
	shl(eax, (int32_t)2);
	add(edx, eax);
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4D960C[edx]; //mov
	shl(eax, (int32_t)2);
	ecx = to32i(esp+0xC); //mov
	edx = to32i(dword_4D959C+eax); //mov
	to32i(ecx) = edx; //mov
	ecx = to32i(esp+0x14); //mov
	edx = to32i(dword_4D95D4+eax); //mov
	to32i(ecx) = edx; //mov
	ecx = to32i(esp+0x10); //mov
	edx = to32i(dword_4D95B8+eax); //mov
	to32i(ecx) = edx; //mov
	cmp(to32i(dword_540F48), (int32_t)0);
	if (jnz())
		goto loc_4716BB;
	xor_(ecx, ecx);
loc_471698:
	eax = to32i(dword_540F48); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	imul32(ebx, edi);
	add(eax, ebx);
	and_(eax, ecx);
	cmp(eax, ecx);
	if (jnz())
		goto loc_4716C3;
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4716BB:
	ecx = to32i(dword_4D95F0+eax); //mov
	goto loc_471698;
loc_4716C3:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4716D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ah = 6; //mov
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	ebx = 0x14; //mov
	edx = esp; //mov
	to8i(esp) = ah; //mov
	eax = to32i(dword_5637F4); //mov
	to32i(esp+4) = eax; //mov
	push32(edi);
loc_4716F8:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_471710;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4716F8;
loc_471710:
	pop32(edi);
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	cmp(to16i(word_513430), (int16_t)0);
	if (jnz())
		goto loc_471739;
loc_471722:
	esp -= 4; _sub_463E70(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4717D2;
	cmp(to16i(word_513430), (int16_t)0);
	if (jz())
		goto loc_471722;
loc_471739:
	xor_(ecx, ecx);
	dl = to8i(byte_51345E); //mov
	to16i(word_513430) = cx; //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_47185A;
	eax = to32i(esp+4); //mov
	edx = to32i(dword_540F08); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_4717D6;
	edi = 1; //mov
	xor_(ebp, ebp);
	xor_(eax, eax);
	to32i(dword_51220C) = ebp; //mov
loc_47176E:
	to16i(dword_51340C) = ax; //mov
	to16i(word_513458) = di; //mov
loc_47177B:
	esi = (int32_t)(intptr_t)dword_540F0C; //mov
	edi = (int32_t)(intptr_t)dword_513378; //mov
	push32(edi);
loc_471786:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47179E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_471786;
loc_47179E:
	pop32(edi);
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	edi = (int32_t)(intptr_t)byte_5133C1; //mov
	push32(edi);
loc_4717AA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4717C2;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4717AA;
loc_4717C2:
	pop32(edi);
	eax = 1; //mov
loc_4717C8:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4717D2:
	xor_(eax, eax);
	goto loc_4717C8;
loc_4717D6:
	if (jge())
		goto loc_471805;
	edi = 1; //mov
	esi = 1; //mov
	to16i(word_513458) = cx; //mov
	to32i(dword_51220C) = edi; //mov
	to16i(dword_51340C) = si; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_471805:
	edx = (int32_t)(intptr_t)dword_540F0C; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_47182D;
	if (jle())
		goto loc_4717D2;
	edi = 1; //mov
	xor_(ebx, ebx);
	xor_(eax, eax);
	to32i(dword_51220C) = ebx; //mov
	goto loc_47176E;
loc_47182D:
	esi = 1; //mov
	ebx = 1; //mov
	to16i(word_513458) = cx; //mov
	to32i(dword_51220C) = esi; //mov
	to16i(dword_51340C) = bx; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47185A:
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_47177B;
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_471880()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	edx = eax; //mov
	esp -= 4; _sub_463EA0(); esp += 4; //call
	esp -= 4; _sub_421430(); esp += 4; //call
	ebx = 2; //mov
	ah = to8i(byte_51345E); //mov
	to16i(dword_513408+2) = bx; //mov
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_47192A;
	eax = to32i(edx); //mov
	to32i(dword_5130D4) = eax; //mov
loc_4718B3:
	edx = to32i(dword_4DABCC); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	dl = to8i(byte_51345E); //mov
	to32i(dword_5130C4) = eax; //mov
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_47196F;
	edx = to32i(dword_4DABCC); //mov
	ecx = 5; //mov
loc_4718E5:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_5130C8) = eax; //mov
	to32i(dword_5130CC) = eax; //mov
	ebx = 9; //mov
	ebp = 3; //mov
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	xor_(esi, esi);
	to32i(dword_5130DC) = ebx; //mov
	to32i(dword_5130E0) = esi; //mov
	to32i(dword_5130E4) = esi; //mov
	to32i(dword_5130E8) = ebp; //mov
	esp -= 4; _sub_464010(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47192A:
	esp -= 4; _sub_423B70(); esp += 4; //call
	cx = to16i(word_513458); //mov
	to32i(dword_5130D8) = eax; //mov
	test(cx, cx);
	if (jz())
		goto loc_471953;
	xor_(edx, edx);
	to32i(dword_513100) = edx; //mov
	to32i(dword_513104) = edx; //mov
	goto loc_4718B3;
loc_471953:
	eax = edx; //mov
	add(eax, (int32_t)4);
	to32i(dword_513104) = eax; //mov
	eax = to32i(edx+0x2C); //mov
	add(eax, (int32_t)0xA0);
	to32i(dword_513100) = eax; //mov
	goto loc_4718B3;
loc_47196F:
	edx = to32i(dword_4DABCC); //mov
	ecx = 0xA; //mov
	goto loc_4718E5;
}
Fn(void) Game::_sub_471980()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0x14; //mov
	edi = (int32_t)(intptr_t)dword_540F04; //mov
	esi = edx; //mov
	edx = 1; //mov
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
	to16i(word_513430) = dx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4719B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	xor_(ah, ah);
	to8i(byte_51345F) = ah; //mov
	al = to8i(byte_512DA9); //mov
	xor_(ebx, ebx);
	cmp(al, (int8_t)2);
	if (jb())
		goto loc_471A35;
	if (ja())
		goto loc_471A28;
	to8i(byte_51345E) = 1; //mov
loc_4719D2:
	edx = 0x307; //mov
	eax = 0x304; //mov
	esp -= 4; _sub_4023D0(); esp += 4; //call
	ecx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_471880(); esp += 4; //call
	al = to8i(byte_51345E); //mov
	cmp(al, (int8_t)1);
	if (jnb())
		goto loc_471A5D;
loc_4719F3:
	test(ebx, ebx);
	if (jnz())
		goto loc_471A99;
loc_4719FB:
	test(ebx, ebx);
	if (jnz())
		goto loc_471B63;
loc_471A03:
	edx = 0x303; //mov
	eax = ecx; //mov
	esp -= 4; _sub_402340(); esp += 4; //call
	esp -= 4; _sub_463E40(); esp += 4; //call
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471B46;
loc_471A21:
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_471A28:
	cmp(al, (int8_t)3);
	if (jnz())
		goto loc_471A35;
	to8i(byte_51345E) = 2; //mov
	goto loc_4719D2;
loc_471A35:
	edx = (int32_t)(intptr_t)aCNfs2seGameC_7; //mov
	ecx = 0x71; //mov
	push32(aSerial_connect);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_4719D2;
loc_471A5D:
	if (jbe())
		goto loc_471A7E;
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_4719F3;
	ebx = 7; //mov
	edx = 0x64; //mov
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	esp -= 4; _sub_49FC80(); esp += 4; //call
	ebx = eax; //mov
	goto loc_4719F3;
loc_471A7E:
	ebx = 7; //mov
	edx = 0x64; //mov
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	ebx = eax; //mov
	goto loc_4719F3;
loc_471A99:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	esp -= 4; _sub_4716D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471B30;
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_471AFC;
	push32(edi);
	xor_(esi, esi);
loc_471ABD:
	di = to16i(word_513424); //mov
	cmp(si, di);
	if (jnz())
		goto loc_471AEC;
	esp -= 4; _sub_463E70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471B10;
	edx = 1; //mov
	xor_(ebx, ebx);
	to16i(word_51345A) = dx; //mov
	to16i(word_51345C) = dx; //mov
	esp -= 4; _sub_48A2B4(); esp += 4; //call
loc_471AEC:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edi);
	goto loc_4719FB;
loc_471AFC:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	esp -= 4; _sub_463C50(); esp += 4; //call
	goto loc_4719FB;
loc_471B10:
	cmp(di, to16i(word_51345A));
	if (jz())
		goto loc_471ABD;
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	xor_(ebx, ebx);
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edi);
	goto loc_4719FB;
loc_471B30:
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(ebx, ebx);
	goto loc_471A03;
loc_471B46:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_471A21;
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471B46;
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_471B63:
	eax = ecx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_402340(); esp += 4; //call
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_471B80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	xor_(eax, eax);
	esi = to32i(dword_511E58); //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	xor_(ecx, ecx);
	edx = to32i(dword_511E58); //mov
	add(esi, (int32_t)0x2710);
	test(edx, edx);
	if (jle())
		goto loc_471D40;
	eax = to32i(dword_512A3C); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	to32i(dword_540F4C) = eax; //mov
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_422060(); esp += 4; //call
	cmp(to32i(dword_540F24), (int32_t)0);
	if (jnz())
		goto loc_471D29;
loc_471BDD:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = to32i(dword_4D9678); //mov
	add(eax, eax);
	to32i(dword_540F30) = eax; //mov
	eax = to32i(dword_511E58); //mov
	edx = eax; //mov
	sub(edx, esi);
	esi = edx; //mov
	edx = to32i(dword_540F30); //mov
	sub(edx, ecx);
	cmp(esi, edx);
	if (jle())
		goto loc_471C0D;
	inc(to32i(dword_540F30));
loc_471C0D:
	esi = eax; //mov
	xor_(eax, eax);
	edx = to32i(dword_540F4C); //mov
	to32i(dword_540F3C) = eax; //mov
	eax = to32i(dword_512A3C); //mov
	sub(eax, edx);
	ecx = to32i(dword_540F30); //mov
	cmp(eax, (int32_t)0x10);
	if (jg())
		goto loc_471D4F;
loc_471C32:
	ebp = 2; //mov
	edi = 1; //mov
	xor_(ebx, ebx);
loc_471C3E:
	edx = to32i(dword_512A3C); //mov
	cmp(edx, to32i(dword_540F4C));
	if (jl())
		goto loc_471C58;
	cmp(ebx, to32i(dword_540F24));
	if (jz())
		goto loc_471D5E;
loc_471C58:
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_47210B;
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_47210B;
	cmp(to32i(dword_540F24), (int32_t)0);
	if (jnz())
		goto loc_47210B;
	edx = to32i(dword_540F30); //mov
	cmp(edx, to32i(dword_540F34));
	if (jl())
		goto loc_472029;
loc_471C91:
	edi = 2; //mov
	ebp = 1; //mov
	xor_(ebx, ebx);
loc_471C9D:
	edx = to32i(dword_540F30); //mov
	cmp(edx, to32i(dword_540F34));
	if (jl())
		goto loc_471CBA;
	eax = ebx; //mov
	esp -= 4; _sub_472170(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472038;
loc_471CBA:
	cmp(to32i(dword_540F3C), (int32_t)0);
	if (jnz())
		goto loc_471CCD;
	eax = to32i(dword_540F28); //mov
	esp -= 4; _sub_46F7A0(); esp += 4; //call
loc_471CCD:
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_471CED;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jg())
		goto loc_471CED;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jnz())
		goto loc_471CED;
	esp -= 4; _sub_47E570(); esp += 4; //call
loc_471CED:
	esp -= 4; _sub_45B8F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472115;
loc_471CFA:
	cmp(to32i(dword_512214), (int32_t)1);
	if (jg())
		goto loc_471D14;
	ebx = 1; //mov
	to32i(dword_4D9680) = ebx; //mov
	to32i(dword_4D967C) = ebx; //mov
loc_471D14:
	eax = 1; //mov
	edi = 1; //mov
	esp -= 4; _sub_4748F0(); esp += 4; //call
	to32i(dword_540F24) = edi; //mov
loc_471D29:
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_47214E;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_471D40:
	_ExitProcess1();
loc_471D4F:
	eax = to32i(dword_512A3C); //mov
	to32i(dword_540F4C) = eax; //mov
	goto loc_471C32;
loc_471D5E:
	cmp(ebp, to32i(dword_512208));
	if (jle())
		goto loc_471D6B;
	esp -= 4; _sub_46F760(); esp += 4; //call
loc_471D6B:
	cmp(ebp, to32i(dword_540D94));
	if (jnz())
		goto loc_471DBA;
	edx = to32i(dword_540F28); //mov
	cmp(ebx, edx);
	if (jnz())
		goto loc_471DBA;
	esp -= 4; _sub_470110(); esp += 4; //call
	cmp(to32i(dword_5227A4), (int32_t)4);
	if (jnz())
		goto loc_471DBA;
	eax = to32i(dword_522798); //mov
	to32i(dword_5227A4) = edx; //mov
	to32i(dword_540F24) = eax; //mov
	cmp(edx, eax);
	if (jz())
		goto loc_471F5B;
	cmp(edx, to32i(dword_540F2C));
	if (jz())
		goto loc_471F5B;
	to32i(dword_540F2C) = edx; //mov
	esp -= 4; _sub_4421B0(); esp += 4; //call
loc_471DBA:
	edx = to32i(dword_540F24); //mov
	cmp(ebx, edx);
	if (jnz())
		goto loc_471DD5;
	cmp(edx, to32i(dword_540F28));
	if (jz())
		goto loc_471F90;
	esp -= 4; _sub_472220(); esp += 4; //call
loc_471DD5:
	cmp(ebx, to32i(dword_540F28));
	if (jnz())
		goto loc_471FB5;
	eax = 0xB; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471DF6;
	esp -= 4; _sub_42A380(); esp += 4; //call
loc_471DF6:
	eax = 0xA; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E0B;
	esp -= 4; _sub_42A3A0(); esp += 4; //call
loc_471E0B:
	eax = 0xD; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E20;
	esp -= 4; _sub_446590(); esp += 4; //call
loc_471E20:
	eax = 0xE; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E35;
	esp -= 4; _sub_42E650(); esp += 4; //call
loc_471E35:
	eax = 0x12; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E4C;
	eax = ebx; //mov
	esp -= 4; _sub_459480(); esp += 4; //call
loc_471E4C:
	eax = 0x13; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E63;
	eax = edi; //mov
	esp -= 4; _sub_459480(); esp += 4; //call
loc_471E63:
	eax = 0x11; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E78;
	esp -= 4; _sub_459440(); esp += 4; //call
loc_471E78:
	eax = 0x16; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471E8D;
	esp -= 4; _sub_442050(); esp += 4; //call
loc_471E8D:
	eax = 0x15; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471EA2;
	esp -= 4; _sub_442010(); esp += 4; //call
loc_471EA2:
	eax = 9; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471ECB;
	eax = 0x36; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471F9C;
loc_471EC4:
	eax = edi; //mov
loc_471EC6:
	esp -= 4; _sub_428910(); esp += 4; //call
loc_471ECB:
	eax = ebx; //mov
	esp -= 4; _sub_477C40(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471EE5;
	cmp(ebp, to32i(dword_540D94));
	if (jle())
		goto loc_471EE5;
	eax = ebx; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_471EE5:
	eax = to32i(dword_512208); //mov
	cmp(edi, eax);
	if (jnz())
		goto loc_471F06;
	esp -= 4; _sub_477C40(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471F06;
	cmp(ebp, to32i(dword_540D94));
	if (jle())
		goto loc_471F06;
	eax = edi; //mov
	esp -= 4; _sub_44B2E0(); esp += 4; //call
loc_471F06:
	eax = 0x17; //mov
	edx = ebx; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	to32i(dword_5128C8) = eax; //mov
	cmp(edi, to32i(dword_512208));
	if (jnz())
		goto loc_471F30;
	eax = 0x19; //mov
	edx = ebx; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	to32i(dword_5128CC) = eax; //mov
loc_471F30:
	cmp(ebp, to32i(dword_512208));
	if (jle())
		goto loc_472002;
loc_471F3C:
	eax = 8; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_472019;
	inc(to32i(dword_540F4C));
	goto loc_471C3E;
loc_471F5B:
	edx = to32i(dword_522790); //mov
	cmp(edx, to32i(dword_540F2C));
	if (jz())
		goto loc_471DBA;
	to32i(dword_540F2C) = edx; //mov
	cmp(ebx, edx);
	if (jz())
		goto loc_471F86;
	esp -= 4; _sub_44CB04(); esp += 4; //call
	esp -= 4; _sub_442240(); esp += 4; //call
	goto loc_471DBA;
loc_471F86:
	esp -= 4; _sub_442220(); esp += 4; //call
	goto loc_471DBA;
loc_471F90:
	eax = edi; //mov
	esp -= 4; _sub_472170(); esp += 4; //call
	goto loc_471DD5;
loc_471F9C:
	eax = 0x2A; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_471EC4;
	eax = ebx; //mov
	goto loc_471EC6;
loc_471FB5:
	eax = 9; //mov
	edx = edi; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471FDA;
	eax = 0x36; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_471FF0;
loc_471FD3:
	eax = edi; //mov
loc_471FD5:
	esp -= 4; _sub_428910(); esp += 4; //call
loc_471FDA:
	cmp(edi, to32i(dword_512208));
	if (jl())
		goto loc_471F30;
	esp -= 4; _sub_472350(); esp += 4; //call
	goto loc_471F30;
loc_471FF0:
	eax = 0x2A; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_471FD3;
	eax = ebx; //mov
	goto loc_471FD5;
loc_472002:
	cmp(edi, to32i(dword_512214));
	if (jl())
		goto loc_471F3C;
	inc(to32i(dword_540F4C));
	goto loc_471C3E;
loc_472019:
	inc(to32i(dword_540F4C));
	goto loc_471C3E;
loc_472029:
	to32i(dword_540F3C) = 1; //mov
	goto loc_471C91;
loc_472038:
	eax = to32i(dword_540F34); //mov
	test(ebp, eax);
	if (jnz())
		goto loc_472048;
	sar(eax, (int32_t)1);
	esp -= 4; _sub_473830(); esp += 4; //call
loc_472048:
	edx = to32i(dword_540D94); //mov
	to32i(dword_4D965C) = ebx; //mov
	cmp(edi, edx);
	if (jnz())
		goto loc_4720D9;
	cmp(ebx, to32i(dword_522794));
	if (jnz())
		goto loc_472091;
	eax = to32i(dword_540F34); //mov
	edx = eax; //mov
	to32i(esp) = 4; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	test(edx, edx);
	if (jnz())
		goto loc_472091;
loc_47207C:
	eax = to32i(dword_540F34); //mov
	esp -= 4; _sub_472480(); esp += 4; //call
	inc(to32i(dword_540F34));
	goto loc_471C9D;
loc_472091:
	cmp(ebp, to32i(dword_522794));
	if (jnz())
		goto loc_4720A9;
	eax = to32i(dword_540F34); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	test(edx, edx);
	if (jz())
		goto loc_47207C;
loc_4720A9:
	eax = to32i(dword_522794); //mov
	cmp(edi, eax);
	if (jz())
		goto loc_47207C;
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_4720C3;
	eax = to32i(dword_540F34); //mov
	esp -= 4; _sub_472480(); esp += 4; //call
	goto loc_47207C;
loc_4720C3:
	to32i(dword_4D965C) = ebp; //mov
	esp -= 4; _sub_44CB04(); esp += 4; //call
	inc(to32i(dword_540F34));
	goto loc_471C9D;
loc_4720D9:
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_47207C;
	esp -= 4; _sub_442080(); esp += 4; //call
	esp -= 4; _sub_463810(); esp += 4; //call
	edx = 2; //mov
	ebx = 1; //mov
	xor_(edi, edi);
	to32i(dword_540D94) = edx; //mov
	to32i(dword_540F3C) = ebx; //mov
	to32i(dword_4D9678) = edi; //mov
	goto loc_471CCD;
loc_47210B:
	esp -= 4; _sub_44CB04(); esp += 4; //call
	goto loc_471CBA;
loc_472115:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_471CFA;
	cmp(to32i(dword_540D94), (int32_t)3);
	if (jnz())
		goto loc_47213C;
	cmp(to32i(dword_540F48), (int32_t)0x240);
	if (jg())
		goto loc_471CFA;
loc_47213C:
	cmp(to32i(dword_540F24), (int32_t)0);
	if (jz())
		goto loc_471BDD;
	goto loc_471D29;
loc_47214E:
	eax = 1; //mov
	to32i(dword_4D9680) = eax; //mov
	to32i(dword_4D967C) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_472170()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	cmp(to32i(dword_540F20), (int32_t)0);
	if (jnz())
		goto loc_4721CB;
	ecx = to32i(dword_540F48); //mov
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_4721CB;
	cmp(ecx, (int32_t)0x140);
	if (jge())
		goto loc_472198;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_4721CB;
loc_472198:
	test(eax, eax);
	if (jz())
		goto loc_4721BE;
	edx = 1; //mov
	eax = 6; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	edx = 1; //mov
	ecx = eax; //mov
	eax = 7; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	or_(eax, ecx);
loc_4721BE:
	esp -= 4; _sub_473260(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4721D1;
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_4721CB:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_4721D1:
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_428830(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_472211;
	eax = to32i(dword_511E5C); //mov
	add(eax, (int32_t)0x20);
loc_4721EB:
	to32i(dword_540F40) = eax; //mov
	ebp = 1; //mov
	esp -= 4; _sub_442240(); esp += 4; //call
	to32i(dword_4D967C) = ebp; //mov
	to32i(dword_540F28) = ebp; //mov
	esp -= 4; _sub_4792A0(); esp += 4; //call
	eax = ebp; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_472211:
	eax = to32i(dword_511E5C); //mov
	add(eax, (int32_t)0x10);
	goto loc_4721EB;
}
Fn(void) Game::_sub_472220()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = to32i(dword_511E5C); //mov
	cmp(edx, to32i(dword_540F40));
	if (jl())
		goto loc_47223B;
	ecx = to32i(dword_4D966C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47223F;
loc_47223B:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_47223F:
	esp -= 4; _sub_45FA80(); esp += 4; //call
	esp -= 4; _sub_472EE0(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_4722B4;
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_4722E5;
	cmp(eax, (int32_t)3);
	if (jz())
		goto loc_472312;
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_47223B;
	esp -= 4; _sub_4421B0(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	push32(0);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_479260(); esp += 4; //call
	esp -= 4; _sub_446310(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_4635D0(); esp += 4; //call
	esp -= 4; _sub_48561C(); esp += 4; //call
	esp -= 4; _sub_463890(); esp += 4; //call
	_ExitProcess1();
loc_4722B4:
	esp -= 4; _sub_4287F0(); esp += 4; //call
	esp -= 4; _sub_4594F0(); esp += 4; //call
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4722CC;
	esp -= 4; _sub_442220(); esp += 4; //call
loc_4722CC:
	push32(ebx);
	xor_(ebx, ebx);
	to32i(dword_4D967C) = ebx; //mov
	to32i(dword_540F28) = ebx; //mov
	esp -= 4; _sub_479280(); esp += 4; //call
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_4722E5:
	esp -= 4; _sub_4287F0(); esp += 4; //call
	esp -= 4; _sub_4594F0(); esp += 4; //call
	esp -= 4; _sub_442160(); esp += 4; //call
	eax = 1; //mov
	to32i(dword_540F28) = ecx; //mov
	to32i(dword_540F24) = eax; //mov
	to32i(dword_540F20) = eax; //mov
	esp -= 4; _sub_479260(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_472312:
	esp -= 4; _sub_4287F0(); esp += 4; //call
	esp -= 4; _sub_4594F0(); esp += 4; //call
	esp -= 4; _sub_4421B0(); esp += 4; //call
	esi = 1; //mov
	to32i(dword_540F28) = ecx; //mov
	to32i(dword_540F20) = ecx; //mov
	to32i(dword_540F24) = esi; //mov
	esp -= 4; _sub_479260(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4748F0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_472350()
{
	push32(edx);
	cmp(to32i(dword_4D966C), (int32_t)0);
	if (jnz())
		goto loc_4723F2;
loc_47235E:
	cmp(to32i(dword_4D966C), (int32_t)0);
	if (jnz())
		goto loc_472391;
	edx = 1; //mov
	eax = 0xB; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472391;
	cmp(to32i(dword_4D966C), (int32_t)0);
	if (jnz())
		goto loc_47242B;
loc_472387:
	eax = 1; //mov
loc_47238C:
	to32i(dword_4D966C) = eax; //mov
loc_472391:
	edx = 1; //mov
	eax = 0xD; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4723CD;
	cmp(to32i(dword_4D5EAC), (int32_t)0);
	if (jnz())
		goto loc_472432;
	eax = 1; //mov
loc_4723B6:
	to32i(dword_4D5EAC) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_472436;
	eax = to32i(dword_4D5EB0); //mov
	to32i(dword_540F38) = eax; //mov
loc_4723CD:
	eax = 0xA; //mov
	xor_(edx, edx);
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472442;
	push32(ebx);
	ebx = 0xFFFFFFFF; //mov
	to32i(dword_540F38) = ebx; //mov
	to32i(dword_4D5EB0) = ebx; //mov
	pop32(ebx);
loc_4723F0:
	pop32(edx);
	return;
loc_4723F2:
	edx = 1; //mov
	eax = 6; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472413;
loc_472405:
	cmp(to32i(dword_4D966C), (int32_t)0);
	if (jnz())
		goto loc_47242B;
	goto loc_472387;
loc_472413:
	edx = 1; //mov
	eax = 0xB; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_472405;
	goto loc_47235E;
loc_47242B:
	xor_(eax, eax);
	goto loc_47238C;
loc_472432:
	xor_(eax, eax);
	goto loc_4723B6;
loc_472436:
	eax = to32i(dword_540F38); //mov
	to32i(dword_4D5EB0) = eax; //mov
	goto loc_4723CD;
loc_472442:
	eax = 0xE; //mov
	xor_(edx, edx);
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_472462;
	cmp(to32i(dword_4D5EAC), (int32_t)0);
	if (jz())
		goto loc_4723F0;
	to32i(dword_4D5EB0) = eax; //mov
	pop32(edx);
	return;
loc_472462:
	edx = 1; //mov
	to32i(dword_540F38) = edx; //mov
	to32i(dword_4D5EB0) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_472480()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jnz())
		goto loc_4724DE;
	ecx = to32i(dword_540F48); //mov
	cmp(ecx, (int32_t)0x200);
	if (jl())
		goto loc_472536;
	esi = 1; //mov
	ch = to8i(byte_4D5A0C); //mov
	to32i(dword_540F44) = esi; //mov
	test(ch, ch);
	if (jz())
		goto loc_4724DE;
	ecx = 0x7F; //mov
	edi = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(edi, edi);
	if (jz())
		goto loc_47252F;
	xor_(ebx, ebx);
loc_4724C8:
	edx = 3; //mov
	eax = to32i(dword_50B434); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	xor_(al, al);
	to8i(byte_4D5A0C) = al; //mov
loc_4724DE:
	esp -= 4; _sub_453F20(); esp += 4; //call
	esp -= 4; _sub_474EA0(); esp += 4; //call
	test(to8i(dword_540F48), (int8_t)1);
	if (jnz())
		goto loc_472507;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = to32i(dword_540F54); //mov
	esp -= 4; _sub_4713F0(); esp += 4; //call
	esp -= 4; _sub_474820(); esp += 4; //call
loc_472507:
	eax = to32i(dword_540F50); //mov
	esp -= 4; _sub_4713F0(); esp += 4; //call
	inc(to32i(dword_540F48));
	test(to8i(dword_540F48), (int8_t)1);
	if (jz())
		goto loc_472610;
	esp -= 4; _sub_474EE0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47252F:
	ebx = 0x40; //mov
	goto loc_4724C8;
loc_472536:
	cmp(ecx, (int32_t)0x1C0);
	if (jl())
		goto loc_47257C;
	cmp(to8i(byte_4D5A0C), (int8_t)1);
	if (jz())
		goto loc_4724DE;
	ecx = 0x7F; //mov
	ebx = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(ebx, ebx);
	if (jz())
		goto loc_472575;
	xor_(ebx, ebx);
loc_47255A:
	edx = 2; //mov
	eax = to32i(dword_50B434); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	to8i(byte_4D5A0C) = 1; //mov
	goto loc_4724DE;
loc_472575:
	ebx = 0x40; //mov
	goto loc_47255A;
loc_47257C:
	cmp(ecx, (int32_t)0x180);
	if (jl())
		goto loc_4725C6;
	cmp(to8i(byte_4D5A0C), (int8_t)2);
	if (jz())
		goto loc_4724DE;
	ecx = 0x7F; //mov
	edx = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(edx, edx);
	if (jz())
		goto loc_4725BF;
	xor_(ebx, ebx);
loc_4725A4:
	edx = 1; //mov
	eax = to32i(dword_50B434); //mov
	esp -= 4; _sub_442280(); esp += 4; //call
	to8i(byte_4D5A0C) = 2; //mov
	goto loc_4724DE;
loc_4725BF:
	ebx = 0x40; //mov
	goto loc_4725A4;
loc_4725C6:
	cmp(ecx, (int32_t)0x140);
	if (jl())
		goto loc_4724DE;
	cmp(to8i(byte_4D5A0C), (int8_t)3);
	if (jz())
		goto loc_4724DE;
	ecx = 0x7F; //mov
	eax = to32i(dword_4D96B0); //mov
	push32(0x40);
	test(eax, eax);
	if (jz())
		goto loc_472609;
	xor_(ebx, ebx);
loc_4725F1:
	eax = to32i(dword_50B434); //mov
	xor_(edx, edx);
	esp -= 4; _sub_442280(); esp += 4; //call
	to8i(byte_4D5A0C) = 3; //mov
	goto loc_4724DE;
loc_472609:
	ebx = 0x40; //mov
	goto loc_4725F1;
loc_472610:
	esp -= 4; _sub_441DD0(); esp += 4; //call
	esp -= 4; _sub_474EE0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_472620()
{
	push32(ebx);
	push32(edx);
	esp -= 4; _sub_479220(); esp += 4; //call
	esp -= 4; _sub_473B50(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_44CB04; //mov
	eax = to32i(dword_540F50); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_471430(); esp += 4; //call
	esp -= 4; _sub_43CB40(); esp += 4; //call
	esp -= 4; _sub_44F4E0(); esp += 4; //call
	esp -= 4; _sub_46E070(); esp += 4; //call
	esp -= 4; _sub_476EF0(); esp += 4; //call
	eax = to32i(dword_540F54); //mov
	esp -= 4; _sub_4715B0(); esp += 4; //call
	eax = to32i(dword_540F50); //mov
	esp -= 4; _sub_4715B0(); esp += 4; //call
	esp -= 4; _sub_459500(); esp += 4; //call
	esp -= 4; _sub_472690(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_472690()
{
	esp -= 4; _sub_42A370(); esp += 4; //call
	to32i(dword_512240) = eax; //mov
	to8i(byte_512ECE) = al; //mov
	esp -= 4; _sub_42A390(); esp += 4; //call
	to32i(dword_512244) = eax; //mov
	to8i(byte_512ECF) = al; //mov
	al = to8i(dword_512248); //mov
	to8i(byte_512ED1) = al; //mov
	esp -= 4; _sub_4466A0(); esp += 4; //call
	to32i(dword_51224C) = eax; //mov
	to8i(byte_512ED0) = al; //mov
	eax = to32i(dword_4EEBE8); //mov
	to32i(dword_512250) = eax; //mov
	to8i(byte_512ED2) = al; //mov
	_sub_408BF0(); return; //jmp
}
Fn(void) Game::_sub_4726E0()
{
	push32(edx);
	xor_(edx, edx);
	eax = to32i(dword_512224); //mov
	to32i(dword_540F24) = edx; //mov
	to32i(dword_540F28) = edx; //mov
	to32i(dword_540F2C) = edx; //mov
	to32i(dword_540F30) = edx; //mov
	to32i(dword_540F34) = edx; //mov
	to32i(dword_540F44) = edx; //mov
	to32i(dword_540F48) = edx; //mov
	esp -= 4; _sub_45B2E0(); esp += 4; //call
	esp -= 4; _sub_43CA90(); esp += 4; //call
	esp -= 4; _sub_46E100(); esp += 4; //call
	esp -= 4; _sub_44FC40(); esp += 4; //call
	esp -= 4; _sub_43C930(); esp += 4; //call
	esp -= 4; _sub_46F6E0(); esp += 4; //call
	esp -= 4; _sub_479240(); esp += 4; //call
	eax = to32i(dword_512A3C); //mov
	to32i(dword_540F4C) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_472750()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = 1; //mov
	eax = (int32_t)(intptr_t)aSc32; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(dword_540F20) = edx; //mov
	to32i(dword_540F24) = ecx; //mov
	to32i(dword_540F28) = ecx; //mov
	to32i(dword_540F2C) = ecx; //mov
	to32i(dword_540F30) = ecx; //mov
	to32i(dword_540F34) = ecx; //mov
	to32i(dword_540F44) = ecx; //mov
	edx = 0x90; //mov
	to32i(dword_540F48) = ecx; //mov
	esp -= 4; _sub_4715C0(); esp += 4; //call
	edx = 0x90; //mov
	to32i(dword_540F54) = eax; //mov
	eax = (int32_t)(intptr_t)aSc64; //mov
	ecx = 8; //mov
	esp -= 4; _sub_4715C0(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_44F1E0; //mov
	to32i(dword_540F50) = eax; //mov
	eax = to32i(dword_540F54); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	eax = to32i(dword_512224); //mov
	esp -= 4; _sub_45B2E0(); esp += 4; //call
	esp -= 4; _sub_43CAA0(); esp += 4; //call
	esp -= 4; _sub_46E0D0(); esp += 4; //call
	esp -= 4; _sub_476F10(); esp += 4; //call
	esp -= 4; _sub_44F6D0(); esp += 4; //call
	esp -= 4; _sub_4790E0(); esp += 4; //call
	eax = 8; //mov
	ecx = 0x64; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	eax = 9; //mov
	edx = (int32_t)(intptr_t)sub_44CB04; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_43CA70(); esp += 4; //call
	eax = 0xA; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_446390(); esp += 4; //call
	eax = to32i(dword_540F50); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	esp -= 4; _sub_44F670(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_472950()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to32i(dword_4D9670), (int32_t)0);
	if (jz())
		goto loc_472998;
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_47299A;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_47299A;
	ecx = to32i(dword_512264); //mov
	dec(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_472998;
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	inc(edx);
	add(ebx, edx);
loc_472984:
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	dec(ecx);
	sub(ebx, (int32_t)4);
	test(ecx, ecx);
	if (jge())
		goto loc_472984;
loc_472998:
	pop32(ecx);
	return;
loc_47299A:
	eax = to8i(edx+1); //movsx
	esp -= 4; _sub_473650(); esp += 4; //call
	bl = to8i(byte_51345F); //mov
	add(edx, (int32_t)2);
	cmp(bl, (int8_t)1);
	if (jz())
		goto loc_4729C6;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jnz())
		goto loc_4729E9;
	eax = 1; //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	pop32(ecx);
	return;
loc_4729C6:
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_463E00(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_4738E0(); esp += 4; //call
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_4729E9:
	xor_(eax, eax);
	esp -= 4; _sub_473A14(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_472A00()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x24);
	esi = eax; //mov
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_472A6E;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_472A6E;
	bl = 5; //mov
	eax = to32i(dword_540F6C); //mov
	edx = esi; //mov
	to8i(esp) = bl; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_51220C); //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_472A4B;
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_472A44:
	add(esp, (int32_t)0x24);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_472A4B:
	eax = (int32_t)(intptr_t)(esp+1); //lea
	ebx = 0x21; //mov
	esp -= 4; _sub_4736E0(); esp += 4; //call
	eax = to32i(dword_540F6C); //mov
	edx = esp; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	goto loc_472A44;
loc_472A6E:
	esp -= 4; _sub_473670(); esp += 4; //call
	dl = to8i(byte_51345F); //mov
	to8i(byte_540F79) = al; //mov
	test(dl, dl);
	if (jnz())
		goto loc_472A92;
	eax = to32i(dword_51220C); //mov
	edx = esi; //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_472A44;
loc_472A92:
	push32(edi);
	push32(ecx);
	dh = 5; //mov
	ecx = 4; //mov
	edi = (int32_t)(intptr_t)word_540F7A; //mov
	ebx = 6; //mov
	to8i(byte_540F78) = dh; //mov
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
	edx = (int32_t)(intptr_t)byte_540F78; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	pop32(ecx);
	pop32(edi);
	add(esp, (int32_t)0x24);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_472AD0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = edx; //mov
	edi = to32i(dword_540F5C); //mov
	ecx = to32i(dword_540F58); //mov
	edx = (int32_t)(intptr_t)(ebx-1); //lea
	inc(esi);
	add(edi, ecx);
	ecx = edx; //mov
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
	add(to32i(dword_540F58), edx);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_472B10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x94);
	ecx = 0x2C; //mov
	esi = (int32_t)(intptr_t)dword_512234; //mov
	edi = (int32_t)(intptr_t)(esp+0x64); //lea
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
	xor_(edx, edx);
	ecx = (int32_t)(intptr_t)dword_5121F8; //mov
	eax = 0x2D00; //mov
	to32i(dword_540F58) = edx; //mov
	edx = 3; //mov
	to32i(dword_540F5C) = ecx; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_472C4A;
	ebx = to32i(dword_4D76BC); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_472B90;
	ecx = 0x12; //mov
	edi = (int32_t)(intptr_t)dword_512704; //mov
	esi = ebx; //mov
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
loc_472B90:
	esi = to32i(dword_4D76B8); //mov
	test(esi, esi);
	if (jnz())
		goto loc_472C25;
loc_472B9E:
	ecx = 0x48; //mov
	esi = (int32_t)(intptr_t)byte_512E84; //mov
	edi = (int32_t)(intptr_t)word_512716; //mov
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
	ah = 4; //mov
	edi = 0x5B0; //mov
	to8i(esp) = ah; //mov
	to32i(esp+0x90) = edi; //mov
loc_472BCE:
	ebp = 0x62; //mov
loc_472BD3:
	edi = (int32_t)(intptr_t)(esp+1); //lea
	esi = to32i(dword_540F5C); //mov
	ecx = ebp; //mov
	edx = esp; //mov
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
	ebx = (int32_t)(intptr_t)(ebp+1); //lea
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	eax = to32i(dword_540F5C); //mov
	edx = to32i(esp+0x90); //mov
	add(eax, ebp);
	sub(edx, (int32_t)0x62);
	to32i(dword_540F5C) = eax; //mov
	to32i(esp+0x90) = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_472C4A;
	cmp(edx, (int32_t)0x62);
	if (jge())
		goto loc_472BCE;
	ebp = edx; //mov
	goto loc_472BD3;
loc_472C25:
	ecx = 0x10; //mov
	edi = (int32_t)(intptr_t)dword_5126F4; //mov
	add(esi, (int32_t)0x2B0);
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
	goto loc_472B9E;
loc_472C4A:
	edx = 4; //mov
	eax = 0xF00; //mov
	ecx = 0x2C; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = to32i(dword_513408+2); //mov
	esi = (int32_t)(intptr_t)(esp+0x64); //lea
	sar(edx, (int32_t)0x10);
	edi = (int32_t)(intptr_t)dword_512234; //mov
	to32i(dword_51220C) = edx; //mov
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
	esi = to32i(dword_4D76BC); //mov
	test(esi, esi);
	if (jz())
		goto loc_472CAC;
	ecx = 0x12; //mov
	edi = esi; //mov
	esi = (int32_t)(intptr_t)dword_512704; //mov
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
loc_472CAC:
	edi = to32i(dword_4D76B8); //mov
	test(edi, edi);
	if (jnz())
		goto loc_472CE2;
loc_472CB6:
	ecx = 0x48; //mov
	esi = (int32_t)(intptr_t)word_512716; //mov
	edi = (int32_t)(intptr_t)byte_512E84; //mov
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
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_472CE2:
	ecx = 0x10; //mov
	esi = (int32_t)(intptr_t)dword_5126F4; //mov
	add(edi, (int32_t)0x2B0);
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
	goto loc_472CB6;
}
Fn(void) Game::_sub_472D10()
{
	sub(esp, (int32_t)0x28);
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_472D20;
	add(esp, (int32_t)0x28);
	return;
loc_472D20:
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_428E80(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	push32(0);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	eax = 1; //mov
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_459970(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_472D53:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_472D6B;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_472D53;
loc_472D6B:
	pop32(edi);
	esi = (int32_t)(intptr_t)a____0; //mov
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
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
loc_472D7E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_472D96;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_472D7E;
loc_472D96:
	pop32(edi);
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
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
	shr(ecx, (int32_t)1);
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	edx = 0x140; //mov
	add(eax, eax);
	ebx = 0xE6; //mov
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_47BDC0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	esp -= 4; _sub_428F20(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x28);
}
Fn(void) Game::_sub_472E00()
{
	static const void *const off_472DF0[] = {
		&&loc_472E16,
		&&loc_472E61,
		&&loc_472E82,
		&&loc_472E97,
	};
	push32(ecx);
	ecx = eax; //mov
	al = to8i(edx+1); //mov
	cmp(al, (int8_t)3);
	if (ja())
		goto loc_472E27;
	and_(eax, (int32_t)0xFF);
	goto *off_472DF0[eax];
loc_472E16:
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jz())
		goto loc_472E29;
	eax = to32i(edx+4); //mov
	to32i(dword_540F64) = eax; //mov
loc_472E27:
	pop32(ecx);
	return;
loc_472E29:
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to32i(dword_540F64), (int32_t)0);
	if (jnz())
		goto loc_472E55;
	esp -= 4; _sub_4736D0(); esp += 4; //call
	ebx = 8; //mov
	to32i(dword_540F64) = eax; //mov
	to32i(edx+4) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
loc_472E55:
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_472E61:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_472E77;
	to32i(dword_540F60) = 1; //mov
	pop32(ecx);
	return;
loc_472E77:
	to16i(dword_513428+2) = 0x12; //mov
	pop32(ecx);
	return;
loc_472E82:
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_472E27;
	to16i(dword_513428+2) = 0x15; //mov
	pop32(ecx);
	return;
loc_472E97:
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_472EAC;
	to16i(dword_513428+2) = 0x16; //mov
	pop32(ecx);
	return;
loc_472EAC:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_463E00(); esp += 4; //call
	eax = ax; //cwde
	to16i(dword_513436+2+eax*2) = 0x16; //mov
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_472EE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ebx = eax; //mov
	edx = to32i(dword_512208); //mov
	test(edx, edx);
	if (jz())
		goto loc_472F03;
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_472F03;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_472F11;
loc_472F03:
	edx = ebx; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_472F11:
	eax = to32i(dword_5637F4); //mov
	esi = eax; //mov
	esp -= 4; _sub_482030(); esp += 4; //call
	ecx = eax; //mov
	and_(ecx, (int32_t)0xFFFF);
	cmp(ecx, (int32_t)0xFF);
	if (jge())
		goto loc_472F36;
	eax = ecx; //mov
	esp -= 4; _toupper_(); esp += 4; //call
	ecx = eax; //mov
loc_472F36:
	test(ecx, ecx);
	if (jz())
		goto loc_472FEC;
	cmp(ecx, to32i(dword_540F74));
	if (jz())
		goto loc_472FE0;
loc_472F4A:
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_420FD0(); esp += 4; //call
	cmp(ecx, to32i(dword_540F74));
	if (jz())
		goto loc_472FFE;
	add(esi, (int32_t)0xF);
loc_472F65:
	to32i(dword_540F70) = esi; //mov
	to32i(dword_540F74) = ecx; //mov
loc_472F71:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_473122;
	ecx = 1; //mov
	cmp(ecx, to32i(dword_512264));
	if (jge())
		goto loc_473061;
	edx = 2; //mov
loc_472F95:
	cmp(to32i(dword_540F60), (int32_t)0);
	if (jz())
		goto loc_473006;
loc_472F9E:
	edx = 0x12; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	xor_(edi, edi);
	edx = 1; //mov
	to32i(dword_4D9680) = edi; //mov
	to32i(dword_540F60) = edi; //mov
	esp -= 4; _sub_420FC0(); esp += 4; //call
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 1; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_472FE0:
	cmp(esi, to32i(dword_540F70));
	if (jg())
		goto loc_472F4A;
loc_472FEC:
	xor_(eax, eax);
	to32i(dword_540F74) = ecx; //mov
	to32i(dword_540F70) = eax; //mov
	goto loc_472F71;
loc_472FFE:
	add(esi, (int32_t)5);
	goto loc_472F65;
loc_473006:
	ax = to16i(dword_513436+2+edx); //mov
	test(ax, ax);
	if (jbe())
		goto loc_47304F;
	cmp(ax, (int16_t)0x16);
	if (jnz())
		goto loc_473084;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_47307D;
	eax = ecx; //mov
	esp -= 4; _sub_47E470(); esp += 4; //call
loc_473028:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to16i(dword_513436+2+edx), (int16_t)0x16);
	if (jnz())
		goto loc_473045;
	xor_(edi, edi);
	to16i(dword_513436+2+edx) = di; //mov
loc_473045:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_47304F:
	ebp = to32i(dword_512264); //mov
	inc(ecx);
	add(edx, (int32_t)2);
	cmp(ecx, ebp);
	if (jl())
		goto loc_472F95;
loc_473061:
	cmp(ebx, (int32_t)2);
	if (jnb())
		goto loc_4730A3;
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_472F9E;
loc_47306F:
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47307D:
	ebx = 3; //mov
	goto loc_473028;
loc_473084:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to16i(dword_513436+2+edx), (int16_t)0x16);
	if (jz())
		goto loc_473045;
	xor_(esi, esi);
	to16i(dword_513436+2+edx) = si; //mov
	goto loc_473045;
loc_4730A3:
	if (jbe())
		goto loc_4730FD;
	cmp(ebx, (int32_t)3);
	if (jnz())
		goto loc_47306F;
	edx = to32i(dword_511E40); //mov
	xor_(eax, eax);
	test(edx, edx);
	if (jle())
		goto loc_4730D8;
	xor_(edx, edx);
loc_4730B8:
	ecx = to32i(dword_511D08+edx); //mov
	inc(eax);
	to32i(ecx+0x280) = 1; //mov
	ecx = to32i(dword_511E40); //mov
	add(edx, (int32_t)4);
	cmp(eax, ecx);
	if (jl())
		goto loc_4730B8;
loc_4730D8:
	edx = 0x16; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	esp -= 4; _sub_420FC0(); esp += 4; //call
	edx = 3; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4730FD:
	edx = 0x15; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	esp -= 4; _sub_420FC0(); esp += 4; //call
	edx = 2; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473122:
	ax = to16i(dword_513428+2); //mov
	cmp(ax, (int16_t)0x15);
	if (jnb())
		goto loc_47316B;
	cmp(ax, (int16_t)0x12);
	if (jz())
		goto loc_4731C5;
loc_473138:
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_473201;
	bl = 7; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	to8i(esp+8) = bl; //mov
	bh = 1; //mov
	xor_(eax, eax);
	to8i(esp+9) = bh; //mov
	ebx = 8; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
loc_47315D:
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47316B:
	if (jbe())
		goto loc_4730FD;
	cmp(ax, (int16_t)0x16);
	if (jnz())
		goto loc_473138;
	ecx = to32i(dword_511E40); //mov
	xor_(eax, eax);
	test(ecx, ecx);
	if (jle())
		goto loc_4731A0;
	xor_(edx, edx);
loc_473181:
	edi = to32i(dword_511E40); //mov
	ecx = to32i(dword_511D08+edx); //mov
	add(edx, (int32_t)4);
	inc(eax);
	to32i(ecx+0x280) = 1; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_473181;
loc_4731A0:
	edx = 0x16; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	esp -= 4; _sub_420FC0(); esp += 4; //call
	edx = 3; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4731C5:
	edx = 0x12; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	xor_(ebx, ebx);
	edx = 1; //mov
	to32i(dword_4D9680) = ebx; //mov
	esp -= 4; _sub_420FC0(); esp += 4; //call
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 1; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473201:
	cmp(ebx, (int32_t)3);
	if (jnz())
		goto loc_47315D;
	ah = 7; //mov
	dl = 3; //mov
	ebx = 8; //mov
	to8i(esp) = ah; //mov
	to8i(esp+1) = dl; //mov
	edx = esp; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_47315D;
	ebx = 1; //mov
	edx = 3; //mov
	to16i(word_51345C) = bx; //mov
	to16i(word_51345A) = bx; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_473260()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = to32i(dword_512208); //mov
	test(edx, edx);
	if (jz())
		goto loc_4732EC;
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_4732EC;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jg())
		goto loc_4732EC;
	test(eax, eax);
	if (jz())
		goto loc_4732E1;
	esi = to32i(dword_540F64); //mov
	test(esi, esi);
	if (jnz())
		goto loc_4732E1;
	cmp(to32i(dword_4D9674), (int32_t)0);
	if (jnz())
		goto loc_4732E1;
	edx = to32i(dword_540F68); //mov
	add(edx, (int32_t)0x20);
	esp -= 4; _sub_4736C0(); esp += 4; //call
	cmp(edx, eax);
	if (jge())
		goto loc_4732E1;
	ah = 7; //mov
	xor_(dl, dl);
	ebp = to32i(dword_51220C); //mov
	to8i(esp+1) = dl; //mov
	to8i(esp) = ah; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4732F4;
	ebx = 8; //mov
	edx = esp; //mov
	xor_(eax, eax);
	to32i(esp+4) = esi; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	to32i(dword_4D9674) = 1; //mov
loc_4732E1:
	cmp(to32i(dword_540F64), (int32_t)0);
	if (jnz())
		goto loc_473326;
loc_4732EA:
	xor_(eax, eax);
loc_4732EC:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_4732F4:
	ebx = 8; //mov
	eax = to32i(dword_540F6C); //mov
	edx = esp; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	esp -= 4; _sub_4736D0(); esp += 4; //call
	to32i(dword_540F64) = eax; //mov
	to32i(esp+4) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	eax = to32i(dword_540F6C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_4732E1;
loc_473326:
	esp -= 4; _sub_4736C0(); esp += 4; //call
	cmp(eax, to32i(dword_540F64));
	if (jnz())
		goto loc_4732EA;
	push32(edi);
	esi = 1; //mov
	edx = 0x11; //mov
	eax = 0xF00; //mov
	xor_(edi, edi);
	to32i(dword_4D967C) = esi; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	eax = to32i(dword_540F64); //mov
	to32i(dword_4D9674) = edi; //mov
	to32i(dword_540F60) = edi; //mov
	xor_(edx, edx);
	to32i(dword_540F68) = eax; //mov
	to32i(dword_540F64) = edi; //mov
	pop32(edi);
loc_47336F:
	esp -= 4; _sub_486E5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_473381;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_47336F;
loc_473381:
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_473390()
{
	push32(edx);
	edx = 0x10; //mov
	eax = 0x3C00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_540F6C); //mov
	to32i(dword_4D9670) = edx; //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_4733BE;
	pop32(edx);
	return;
loc_4733BE:
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4733D0()
{
	push32(ecx);
	push32(edx);
	ecx = 0x20; //mov
	xor_(edx, edx);
	to32i(dword_540F68) = ecx; //mov
	to32i(dword_540F64) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4733F0()
{
	push32(edx);
	esp -= 4; _sub_489EF8(); esp += 4; //call
	edx = 1; //mov
	to32i(dword_540F6C) = eax; //mov
	to32i(dword_4D9670) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_473424()
{
	static const void *const off_473410[] = {
		&&loc_47343F,
		&&loc_473541,
		&&loc_473465,
		&&loc_473465,
		&&loc_473465,
	};
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_512208); //mov
	cmp(edx, (int32_t)4);
	if (ja())
		goto loc_473551;
	goto *off_473410[edx];
loc_47343F:
	ebp = to32i(dword_5423CC); //mov
	eax = to32i(dword_5423A4); //mov
	edx = to32i(dword_5423A8); //mov
	add(eax, ebp);
	cmp(eax, edx);
	if (jg())
		goto loc_473549;
loc_47345A:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_473465:
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_4734C8;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jnz())
		goto loc_4734AE;
	cmp(to32i(dword_4D9680), (int32_t)0);
	if (jz())
		goto loc_473484;
	test(eax, eax);
	if (jnz())
		goto loc_47345A;
loc_473484:
	test(eax, eax);
	if (jnz())
		goto loc_473497;
	ebx = to32i(dword_5423C8); //mov
	al = to8i(byte_5423D0); //mov
	cmp(eax, ebx);
	if (jg())
		goto loc_4734B6;
loc_473497:
	esi = to32i(dword_5423CC); //mov
	eax = to32i(dword_5423A4); //mov
	edi = to32i(dword_5423A8); //mov
	add(eax, esi);
	cmp(eax, edi);
	if (jle())
		goto loc_47345A;
loc_4734AE:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_4734B6:
	sar(eax, (int32_t)1);
	to8i(byte_5423D0) = al; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_4734C8:
	ebx = to32i(dword_51220C); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_4734AE;
	xor_(edx, edx);
	dl = to8i(byte_5423D0); //mov
	cmp(edx, (int32_t)8);
	if (jg())
		goto loc_47352E;
	edx = (int32_t)(intptr_t)(ebx*4+0); //lea
	eax = to32i(dword_5423A4); //mov
	esi = to32i(dword_5423C8); //mov
	edi = to32i(dword_5423A8+edx); //mov
	add(eax, esi);
	cmp(eax, edi);
	if (jle())
		goto loc_47345A;
	eax = to32i(dword_5423AC); //mov
	edx = to32i(dword_5423A8); //mov
	cmp(edx, eax);
	if (jle())
		goto loc_473512;
	edx = eax; //mov
loc_473512:
	ebp = to32i(dword_5423CC); //mov
	eax = to32i(dword_5423A4); //mov
	add(eax, ebp);
	cmp(edx, eax);
	if (jl())
		goto loc_4734AE;
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_47352E:
	xor_(dh, dh);
	eax = 1; //mov
	to8i(byte_5423D0) = dh; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_473541:
	test(eax, eax);
	if (jz())
		goto loc_47343F;
loc_473549:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_473551:
	push32(ecx);
	edx = (int32_t)(intptr_t)aCNfs2seGame_16; //mov
	ecx = 0x3AE; //mov
	push32(aGamesetup_gdat);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_473594()
{
	static const void *const off_473580[] = {
		&&loc_4735B3,
		&&loc_4735B3,
		&&loc_473615,
		&&loc_47362E,
		&&loc_4735C7,
	};
	push32(ecx);
	push32(edx);
	edx = to32i(dword_5423CC); //mov
	ecx = to32i(dword_5423C8); //mov
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_4735B8;
	goto *off_473580[eax];
loc_4735B3:
	edx = 4; //mov
loc_4735B8:
	to32i(dword_5423C8) = ecx; //mov
	to32i(dword_5423CC) = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4735C7:
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_4735F6;
	push32(ebx);
	ebx = 2; //mov
	ecx = 0x10; //mov
	edx = 8; //mov
	to32i(byte_540FA0) = ebx; //mov
	pop32(ebx);
	to32i(dword_5423C8) = ecx; //mov
	to32i(dword_5423CC) = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4735F6:
	edx = 0x10; //mov
	ecx = 0x20; //mov
	to32i(byte_540FA0) = edx; //mov
	to32i(dword_5423C8) = ecx; //mov
	to32i(dword_5423CC) = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_473615:
	ecx = 0x18; //mov
	edx = 8; //mov
	to32i(dword_5423C8) = ecx; //mov
	to32i(dword_5423CC) = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_47362E:
	edx = 4; //mov
	ecx = edx; //mov
	to32i(dword_5423C8) = ecx; //mov
	to32i(dword_5423CC) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_473650()
{
	push32(edx);
	xor_(edx, edx);
	dl = to8i(byte_5423D0); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_473664;
	to8i(byte_5423D0) = al; //mov
	pop32(edx);
	return;
loc_473664:
	eax = edx; //mov
	to8i(byte_5423D0) = al; //mov
	pop32(edx);
}
Fn(void) Game::_sub_473670()
{
	push32(edx);
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jz())
		goto loc_47369E;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jnz())
		goto loc_4736AF;
	eax = 1; //mov
loc_473688:
	edx = to32i(dword_51220C); //mov
	al = (int32_t)(intptr_t)dword_5423A8[eax*4]; //mov
	sub(al, (int8_t)dword_5423A8[edx*4]);
	pop32(edx);
	return;
loc_47369E:
	push32(ebx);
	bh = to8i(dword_5423A4); //mov
	al = to8i(dword_5423A8); //mov
	sub(al, bh);
	pop32(ebx);
	pop32(edx);
	return;
loc_4736AF:
	xor_(eax, eax);
	goto loc_473688;
}
Fn(void) Game::_sub_4736C0()
{
	eax = to32i(dword_5423A4); //mov
}
Fn(void) Game::_sub_4736D0()
{
	eax = to32i(dword_5423A8); //mov
	add(eax, (int32_t)2);
}
Fn(void) Game::_sub_4736E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	eax = to32i(dword_5423A8); //mov
	dec(eax);
	edx = to32i(dword_512264); //mov
	and_(eax, (int32_t)0x7F);
	xor_(ebx, ebx);
	to32i(esp+4) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_4737D7;
	edx = to32i(esp+4); //mov
	dec(edx);
	shl(eax, (int32_t)2);
	to32i(esp) = edx; //mov
	edx = to32i(esp+4); //mov
	to32i(esp+8) = ecx; //mov
	to32i(esp+0xC) = edx; //mov
	edx = eax; //mov
	ebp = eax; //mov
	add(edx, (int32_t)(intptr_t)byte_540FA4);
loc_473729:
	eax = to32i(esp+0xC); //mov
	cmp(byte_541FA4[eax], (int8_t)0);
	if (jnz())
		goto loc_47378C;
	inc(to32i(dword_5423A8+ebx*4));
	eax = to32i(esp+0xC); //mov
	ch = 1; //mov
	esi = to32i(esp+4); //mov
	byte_541FA4[eax] = ch; //mov
	ecx = 4; //mov
	test(esi, esi);
	if (jz())
		goto loc_4737E7;
	eax = to32i(esp); //mov
loc_47375D:
	and_(eax, (int32_t)0x7F);
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = ebx; //mov
	shl(eax, (int32_t)9);
	add(eax, (int32_t)(intptr_t)byte_540FA4);
	edi = edx; //mov
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
	and_(byte_540FA7[ebp], (int8_t)0xBC);
loc_47378C:
	ecx = 4; //mov
	edi = to32i(esp+8); //mov
	esi = edx; //mov
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
	add(ebp, (int32_t)0x200);
	inc(ebx);
	ecx = to32i(esp+0xC); //mov
	esi = (int32_t)(intptr_t)(edi+4); //lea
	add(edx, (int32_t)0x200);
	edi = to32i(dword_512264); //mov
	add(ecx, (int32_t)0x80);
	to32i(esp+8) = esi; //mov
	to32i(esp+0xC) = ecx; //mov
	cmp(ebx, edi);
	if (jl())
		goto loc_473729;
loc_4737D7:
	inc(to32i(dword_4D9678));
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4737E7:
	eax = 0x7F; //mov
	goto loc_47375D;
}
Fn(void) Game::_sub_473800()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = (int32_t)(intptr_t)dword_540F80; //mov
	ecx = 4; //mov
	shl(eax, (int32_t)2);
	edi = edx; //mov
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
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_473830()
{
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)4);
	and_(eax, (int32_t)0x7F);
	edx = to32i(dword_512214); //mov
	to32i(esp) = eax; //mov
	cmp(edx, (int32_t)1);
	if (jg())
		goto loc_4738D2;
	push32(edi);
	push32(esi);
	push32(ecx);
	push32(ebx);
	ecx = to32i(dword_512264); //mov
	xor_(ebp, ebp);
	test(ecx, ecx);
	if (jle())
		goto loc_47389C;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ebx = (int32_t)(intptr_t)dword_540F80; //mov
	add(edx, (int32_t)(intptr_t)byte_540FA4);
loc_47386C:
	ecx = 4; //mov
	esi = edx; //mov
	edi = ebx; //mov
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
	inc(ebp);
	esi = to32i(dword_512264); //mov
	add(ebx, (int32_t)4);
	add(edx, (int32_t)0x200);
	cmp(ebp, esi);
	if (jl())
		goto loc_47386C;
loc_47389C:
	edi = to32i(dword_512264); //mov
	xor_(ebx, ebx);
	test(edi, edi);
	if (jle())
		goto loc_4738C8;
	edx = to32i(esp+0x10); //mov
	ebp = to32i(dword_512264); //mov
loc_4738B2:
	add(edx, (int32_t)0x80);
	xor_(ah, ah);
	inc(ebx);
	byte_541F24[edx] = ah; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_4738B2;
loc_4738C8:
	inc(to32i(dword_5423A4));
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
loc_4738D2:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edx);
}
Fn(void) Game::_sub_4738E0()
{
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp) = eax; //mov
	to32i(esp+4) = edx; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ebp = to32i(dword_5423A8+edx); //mov
	esp -= 4; _sub_473424(); esp += 4; //call
	and_(ebp, (int32_t)0x7F);
	test(eax, eax);
	if (jnz())
		goto loc_4739ED;
	eax = to32i(esp); //mov
	shl(eax, (int32_t)7);
	al = (int32_t)(intptr_t)byte_541FA4[eax+ebp]; //mov
	test(al, al);
	if (jnz())
		goto loc_4739ED;
	push32(edi);
	push32(esi);
	push32(ecx);
	push32(ebx);
	ebx = to32i(byte_540FA0); //mov
	ecx = to32i(dword_5423A8); //mov
	esi = to32i(dword_5423A8+edx); //mov
	add(ecx, ebx);
	cmp(ecx, esi);
	if (jge())
		goto loc_4739A1;
	ebx = to32i(esp+0x10); //mov
	edi = (int32_t)(intptr_t)(esi-1); //lea
	ebp = edx; //mov
	to32i(dword_5423A8+edx) = edi; //mov
	shl(ebx, (int32_t)9);
	ecx = to32i(dword_5423A8); //mov
	add(ebx, (int32_t)(intptr_t)byte_540FA4);
	cmp(ecx, edi);
	if (jge())
		goto loc_473998;
loc_47395B:
	edx = (int32_t)(intptr_t)(ecx+1); //lea
	and_(ecx, (int32_t)0x7F);
	esi = edx; //mov
	edi = (int32_t)(intptr_t)(ecx*4+0); //lea
	and_(esi, (int32_t)0x7F);
	ecx = 4; //mov
	shl(esi, (int32_t)2);
	add(edi, ebx);
	add(esi, ebx);
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
	esi = to32i(dword_5423A8+ebp); //mov
	ecx = edx; //mov
	cmp(edx, esi);
	if (jl())
		goto loc_47395B;
loc_473998:
	ebp = to32i(dword_5423A8+ebp); //mov
	and_(ebp, (int32_t)0x7F);
loc_4739A1:
	eax = to32i(esp+0x10); //mov
	ecx = 4; //mov
	shl(eax, (int32_t)9);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, (int32_t)(intptr_t)byte_540FA4);
	esi = to32i(esp+0x14); //mov
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
	eax = to32i(esp+0x10); //mov
	shl(eax, (int32_t)7);
	byte_541FA4[eax+ebp] = 1; //mov
	eax = to32i(esp+0x10); //mov
	inc(to32i(dword_5423A8+eax*4));
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
loc_4739ED:
	add(esp, (int32_t)8);
	pop32(ebp);
}
Fn(void) Game::_sub_473A14()
{
	static const void *const off_473A00[] = {
		&&loc_473AD5,
		&&loc_473B36,
		&&loc_473AE8,
		&&loc_473AE8,
		&&loc_473AE8,
	};
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	esi = edx; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	edi = to32i(dword_5423A8+edx); //mov
	cx = to16i(word_51345A); //mov
	and_(edi, (int32_t)0x7F);
	test(cx, cx);
	if (jz())
		goto loc_473A4D;
	eax = 1; //mov
	xor_(ebx, ebx);
	to32i(dword_4D967C) = eax; //mov
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473A4D:
	esp -= 4; _sub_473424(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_473A82;
	ebp = ebx; //mov
	shl(ebp, (int32_t)7);
	add(ebp, edi);
	cmp(byte_541FA4[ebp], (int8_t)0);
	if (jz())
		goto loc_473A8C;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_473A82;
	esi = 1; //mov
	to16i(word_51345C) = si; //mov
	to16i(word_51345A) = si; //mov
loc_473A82:
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473A8C:
	eax = ebx; //mov
	shl(eax, (int32_t)9);
	shl(edi, (int32_t)2);
	add(eax, (int32_t)(intptr_t)byte_540FA4);
	ecx = 4; //mov
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
	byte_541FA4[ebp] = 1; //mov
	ecx = to32i(dword_5423A8+edx); //mov
	inc(ecx);
	eax = to32i(dword_512208); //mov
	to32i(dword_5423A8+edx) = ecx; //mov
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_473ADB;
	goto *off_473A00[eax];
loc_473AD5:
	inc(to32i(dword_4D9678));
loc_473ADB:
	ebx = 1; //mov
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473AE8:
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_473B11;
	test(ebx, ebx);
	if (jnz())
		goto loc_473ADB;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jz())
		goto loc_473ADB;
	inc(to32i(dword_4D9678));
	ebx = 1; //mov
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473B11:
	edx = to32i(dword_5423AC); //mov
	eax = to32i(dword_5423A8); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_473B22;
	edx = eax; //mov
loc_473B22:
	dec(edx);
	to32i(dword_4D9678) = edx; //mov
	ebx = 1; //mov
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473B36:
	test(ebx, ebx);
	if (jz())
		goto loc_473ADB;
	inc(to32i(dword_4D9678));
	ebx = 1; //mov
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_473B50()
{
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_473B5A;
	return;
loc_473B5A:
	push32(ecx);
	ecx = 1; //mov
	to32i(dword_4D967C) = ecx; //mov
	to32i(dword_4D9680) = ecx; //mov
	esp -= 4; _sub_473390(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_473B80()
{
	push32(ebp);
	sub(esp, (int32_t)0xC);
	cmp(to32i(dword_512214), (int32_t)1);
	if (jg())
		goto loc_473C0C;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	ecx = 1; //mov
	xor_(esi, esi);
	to32i(dword_4D9680) = ecx; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x14) = esi; //mov
	to32i(esp+0x18) = esi; //mov
	to32i(dword_4D967C) = ecx; //mov
	bh = 1; //mov
loc_473BB7:
	ebp = to32i(esp+0x1C); //mov
	esi = to32i(esp+0x14); //mov
	xor_(edx, edx);
	edi = ebp; //mov
	xor_(bl, bl);
loc_473BC5:
	eax = (int32_t)(intptr_t)(edx+edi); //lea
	byte_541FA4[eax] = bh; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, esi);
	ecx = (int32_t)(intptr_t)(edx+ebp); //lea
loc_473BDA:
	add(eax, (int32_t)4);
	byte_540FA1[eax] = bl; //mov
	byte_540FA2[eax] = bl; //mov
	inc(ecx);
	byte_540FA3[eax] = bl; //mov
	inc(edx);
	byte_540FA0[eax] = bl; //mov
	cmp(edx, (int32_t)0x80);
	if (jge())
		goto loc_473C18;
	cmp(edx, (int32_t)4);
	if (jl())
		goto loc_473BC5;
	byte_541FA4[ecx] = bl; //mov
	goto loc_473BDA;
loc_473C0C:
	xor_(eax, eax);
	to32i(dword_4D9678) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	return;
loc_473C18:
	ecx = to32i(esp+0x1C); //mov
	esi = to32i(esp+0x14); //mov
	eax = to32i(esp+0x18); //mov
	edx = 4; //mov
	add(ecx, (int32_t)0x80);
	add(esi, (int32_t)0x200);
	edi = (int32_t)(intptr_t)(eax+edx); //lea
	to32i(dword_5423A8+eax) = edx; //mov
	to32i(esp+0x1C) = ecx; //mov
	to32i(esp+0x14) = esi; //mov
	to32i(esp+0x18) = edi; //mov
	cmp(edi, (int32_t)0x20);
	if (jnz())
		goto loc_473BB7;
	edx = 3; //mov
	xor_(eax, eax);
	xor_(ecx, ecx);
	to32i(dword_5423A4) = eax; //mov
	to32i(dword_4D9678) = edx; //mov
	esp -= 4; _sub_4733D0(); esp += 4; //call
	xor_(ah, ah);
	edx = 0xF; //mov
	to8i(byte_5423D0) = ah; //mov
	eax = 0x1E00; //mov
	to32i(dword_4D9680) = ecx; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	to32i(dword_4D967C) = ecx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
}
Fn(void) Game::_sub_473CA0()
{
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_473CAA;
	return;
loc_473CAA:
	push32(ecx);
	ecx = 1; //mov
	to32i(dword_4D967C) = ecx; //mov
	to32i(dword_4D9680) = ecx; //mov
	esp -= 4; _sub_4733F0(); esp += 4; //call
	esp -= 4; _sub_473594(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_473CE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	eax = (int32_t)(intptr_t)a_dat; //mov
	ebx = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_473E20(); esp += 4; //call
	esp -= 4; _sub_475F80(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_5126F0); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_473D0E;
	eax = ecx; //mov
loc_473D0E:
	to32i(dword_5126F0) = eax; //mov
	xor_(ebx, ebx);
	test(eax, eax);
	if (jle())
		goto loc_473D90;
	esi = 0x10; //mov
	xor_(ecx, ecx);
loc_473D20:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_5423F0+ecx) = eax; //mov
	xor_(edi, edi);
	to32i(dword_5423F4+ecx) = esi; //mov
	to32i(dword_5423F8+ecx) = edi; //mov
	eax = edx; //mov
	to32i(dword_5423FC+ecx) = edi; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_542430+ecx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_542434+ecx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_542438+ecx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_54243C+ecx) = eax; //mov
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_542440+ecx) = eax; //mov
	eax = to32i(dword_5126F0); //mov
	add(ecx, (int32_t)0x54);
	cmp(ebx, eax);
	if (jl())
		goto loc_473D20;
loc_473D90:
	eax = edx; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_473DA0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	eax = to32i(eax); //mov
	edx = to32i(dword_512260); //mov
	and_(eax, (int32_t)0x1F);
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_542430+eax*4); //mov
	to32i(ecx+0x14) = edx; //mov
	edx = to32i(dword_542434+eax*4); //mov
	to32i(ecx+0x9C) = edx; //mov
	edx = to32i(dword_542438+eax*4); //mov
	to32i(ecx+0xA0) = edx; //mov
	edx = to32i(dword_54243C+eax*4); //mov
	to8i(ecx+0x8C) = 1; //mov
	to32i(ecx+0xA4) = edx; //mov
	edx = to32i(dword_542440+eax*4); //mov
	eax = (int32_t)(intptr_t)(ecx+0xC4); //lea
	esp -= 4; _sub_49E780(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4628B0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_473E20()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	edx = to32i(dword_51221C); //mov
	push32(edx);
	ecx = to32i(dword_513488); //mov
	push32(ecx);
	push32(aSsm02dS);
	push32(dword_542594);
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_542594; //mov
	add(esp, (int32_t)0x14);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_473E60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	ecx = eax; //mov
	cmp(to8i(eax+0x8C), (int8_t)0);
	if (jnz())
		goto loc_473EDB;
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jbe())
		goto loc_473EE0;
	cmp(to32i(ecx+0x15C), (int32_t)0x8000);
	if (jl())
		goto loc_473F97;
loc_473E89:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(ecx+0x160); //mov
	cmp(edx, to32i(dword_511D48+eax*4));
	if (jg())
		goto loc_47406E;
	cmp(to32i(ecx+0x578), (int32_t)0);
	if (jle())
		goto loc_473ECE;
loc_473EB9:
	ebp = to32i(ecx+0x578); //mov
	dec(ebp);
	to32i(ecx+0x578) = ebp; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_474084;
loc_473ECE:
	cmp(to32i(ecx+0x578), (int32_t)0);
	if (jle())
		goto loc_474095;
loc_473EDB:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_473EE0:
	ebx = to32i(ecx+0xA8); //mov
	imul32(edx, ebx, 0xE6);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(edx, to32i(ecx+0xAC), 0xE6);
	to32i(ecx+0xA8) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(edx, to32i(ecx+0xB0), 0xE6);
	to32i(ecx+0xAC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(edx, to32i(ecx+0xE8), 0xE6);
	to32i(ecx+0xB0) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xE8) = eax; //mov
	eax = to32i(ecx+0xEC); //mov
	imul32(edx, eax, 0xE6);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(edx, to32i(ecx+0xF0), 0xE6);
	to32i(ecx+0xEC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xF0) = eax; //mov
	goto loc_473E89;
loc_473F97:
	eax = to32i(ecx+0xA8); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xA8) = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xAC) = eax; //mov
	eax = to32i(ecx+0xB0); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xB0) = eax; //mov
	eax = to32i(ecx+0xE8); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xE8) = eax; //mov
	eax = to32i(ecx+0xEC); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xEC) = eax; //mov
	eax = to32i(ecx+0xF0); //mov
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)5);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xF0) = eax; //mov
	goto loc_473E89;
loc_47406E:
	eax = ecx; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
	to32i(ecx+0x578) = 0x1C0; //mov
	goto loc_473EB9;
loc_474084:
	eax = ecx; //mov
	esp -= 4; _sub_4741C0(); esp += 4; //call
	to32i(ecx+0x578) = 0; //mov
loc_474095:
	ebx = to32i(ecx+0x184); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4740B1;
	cmp(ebx, (int32_t)0xE);
	if (jz())
		goto loc_4740B1;
	cmp(to32i(ecx+0x17C), (int32_t)0);
	if (jz())
		goto loc_473EDB;
loc_4740B1:
	to32i(ecx+0x578) = 0x1C0; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4740C0()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to8i(eax+0x8C), (int8_t)0);
	if (jz())
		goto loc_4740CE;
	pop32(ecx);
	return;
loc_4740CE:
	push32(edx);
	push32(ebx);
	edx = to32i(ecx+0xC4); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xC8); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xCC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD0); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xA8); //mov
	to32i(ecx+0x2B0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xA8); //mov
	to32i(ecx+0x2B4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x2B8) = ebx; //mov
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4741C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	to32i(eax+0xA8) = 0; //mov
	to32i(eax+0xAC) = 0; //mov
	to32i(eax+0xB0) = 0; //mov
	edi = (int32_t)(intptr_t)(eax+0x13C); //lea
	to32i(eax+0xE8) = 0; //mov
	esi = (int32_t)(intptr_t)(eax+0x124); //lea
	to32i(eax+0xEC) = 0; //mov
	add(eax, (int32_t)0x9C);
	ebx = edi; //mov
	edx = esi; //mov
	to32i(eax+0x54) = 0; //mov
	esp -= 4; _sub_462EF0(); esp += 4; //call
	ebx = edi; //mov
	edx = esi; //mov
	to32i(ecx+0xA0) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_462C70(); esp += 4; //call
	to32i(ecx+0x15C) = eax; //mov
	edx = to32i(ecx+0xA0); //mov
	to32i(ecx+0x15C) = 0; //mov
	sub(edx, eax);
	to32i(ecx+0xA0) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_474260()
{
	push32(edx);
	eax = to32i(dword_540F48); //mov
	xor_(edx, edx);
	to32i(dword_5450FC) = eax; //mov
	to32i(dword_5450F4) = edx; //mov
	to32i(dword_5450F8) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_474280()
{
	push32(edx);
	eax = to32i(dword_540F48); //mov
	xor_(edx, edx);
	to32i(dword_5450FC) = eax; //mov
	to32i(dword_5450F4) = edx; //mov
	to32i(dword_5450F8) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4742A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x3E0);
	to32i(esp+0x3D4) = eax; //mov
	edx = 4; //mov
	eax = to32i(dword_5450F8); //mov
	xor_(edx, edx);
	ebx = to32i(dword_5450F8); //mov
	to32i(esp+0x3D8) = edx; //mov
	to32i(esp+0x3D0) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_47433A;
	eax = to32i(esp+0x3D4); //mov
	add(eax, (int32_t)0x38);
	to32i(esp+0x3C0) = eax; //mov
	eax = to32i(esp+0x3D4); //mov
	add(eax, (int32_t)0x44);
	to32i(esp+0x3C8) = eax; //mov
	eax = to32i(esp+0x3D4); //mov
	edi = (int32_t)(intptr_t)byte_5425D4; //mov
	add(eax, (int32_t)8);
	xor_(ebp, ebp);
	to32i(esp+0x3CC) = eax; //mov
loc_474316:
	ah = to8i(edi); //mov
	esi = edi; //mov
	test(ah, ah);
	if (jnz())
		goto loc_47436A;
loc_47431E:
	esi = to32i(esp+0x3D8); //mov
	edx = to32i(dword_5450F8); //mov
	inc(esi);
	add(edi, (int32_t)0x5C);
	to32i(esp+0x3D8) = esi; //mov
	cmp(esi, edx);
	if (jl())
		goto loc_474316;
loc_47433A:
	ecx = to32i(esp+0x3D0); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47435D;
	xor_(ebx, ebx);
	edi = esp; //mov
	to32i(esp) = ebx; //mov
	cmp(ecx, (int32_t)1);
	if (jg())
		goto loc_4743EC;
loc_474355:
	test(edi, edi);
	if (jnz())
		goto loc_474486;
loc_47435D:
	add(esp, (int32_t)0x3E0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47436A:
	ebx = 0x320000; //mov
	ecx = (int32_t)(intptr_t)(edi+0x10); //lea
	edx = to32i(esp+0x3CC); //mov
	eax = ecx; //mov
	esp -= 4; _sub_470E70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47431E;
	eax = (int32_t)(intptr_t)(edi+0x28); //lea
	ebx = 1; //mov
	push32(eax);
	edx = to32i(esp+0x3C4); //mov
	eax = to32i(esp+0x3CC); //mov
	esp -= 4; _sub_480540(); esp += 4; //call
	dl = to8i(edi); //mov
	cmp(dl, (int8_t)4);
	if (jz())
		goto loc_4743D0;
	cmp(dl, (int8_t)5);
	if (jz())
		goto loc_4743D0;
	cmp(to32i(edi+0x30), (int32_t)0x10000);
	if (jl())
		goto loc_4743E3;
loc_4743B5:
	edx = to32i(esp+0x3D0); //mov
	add(ebp, (int32_t)8);
	inc(edx);
	to32i(esp+ebp-4) = esi; //mov
	to32i(esp+0x3D0) = edx; //mov
	goto loc_47431E;
loc_4743D0:
	eax = to32i(esp+0x3D4); //mov
	edx = esi; //mov
	esp -= 4; _sub_433C14(); esp += 4; //call
	goto loc_47431E;
loc_4743E3:
	to32i(edi+0x30) = 0x10000; //mov
	goto loc_4743B5;
loc_4743EC:
	eax = (int32_t)(intptr_t)(edi+8); //lea
	to32i(esp+0x3DC) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	ebp = 8; //mov
	to32i(esp+0x3C4) = eax; //mov
loc_474409:
	eax = to32i(edi+4); //mov
	edx = to32i(esp+ebp+4); //mov
	eax = to32i(eax+0x30); //mov
	cmp(eax, to32i(edx+0x30));
	if (jle())
		goto loc_474447;
	to32i(esp+ebp) = edi; //mov
	edi = to32i(esp+0x3DC); //mov
loc_474422:
	ecx = to32i(esp+0x3DC); //mov
	ebx = to32i(esp+0x3C4); //mov
	add(ecx, (int32_t)8);
	add(ebp, (int32_t)8);
	to32i(esp+0x3DC) = ecx; //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_474355;
	goto loc_474409;
loc_474447:
	cmp(to32i(edi), (int32_t)0);
	if (jz())
		goto loc_474476;
	esi = ebp; //mov
	edx = edi; //mov
loc_474450:
	eax = to32i(edx); //mov
	ecx = to32i(eax+4); //mov
	ebx = to32i(esp+esi+4); //mov
	ecx = to32i(ecx+0x30); //mov
	cmp(ecx, to32i(ebx+0x30));
	if (jge())
		goto loc_474469;
	ecx = to32i(eax); //mov
	edx = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_474450;
loc_474469:
	eax = to32i(edx); //mov
	to32i(esp+ebp) = eax; //mov
	eax = esp; //mov
	add(eax, ebp);
	to32i(edx) = eax; //mov
	goto loc_474422;
loc_474476:
	eax = to32i(esp+0x3DC); //mov
	xor_(edx, edx);
	to32i(edi) = eax; //mov
	to32i(esp+ebp) = edx; //mov
	goto loc_474422;
loc_474486:
	eax = to32i(esp+0x3D4); //mov
	edx = to32i(edi+4); //mov
	esp -= 4; _sub_433C14(); esp += 4; //call
	edi = to32i(edi); //mov
	goto loc_474355;
}
Fn(void) Game::_sub_4744A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = to32i(dword_5450F8); //mov
	edx = to32i(dword_5450FC); //mov
	eax = to32i(dword_540F48); //mov
	sub(eax, edx);
	cmp(eax, (int32_t)3);
	if (jle())
		goto loc_474569;
	eax = to32i(dword_540F48); //mov
	to32i(dword_5450FC) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_474579;
loc_4744D7:
	ebp = to32i(dword_5450F8); //mov
	xor_(ebx, ebx);
	test(ebp, ebp);
	if (jle())
		goto loc_47454E;
	edx = (int32_t)(intptr_t)byte_5425D4; //mov
loc_4744E8:
	ah = to8i(edx+2); //mov
	ecx = edx; //mov
	test(ah, ah);
	if (jz())
		goto loc_4745FF;
	edi = to32i(esp); //mov
	eax = to32i(edx+0x1C); //mov
	esi = to32i(edx+0x10); //mov
	add(eax, edi);
	add(esi, eax);
	to32i(edx+0x10) = esi; //mov
	edi = to32i(esp+4); //mov
	eax = to32i(edx+0x20); //mov
	esi = to32i(edx+0x14); //mov
	add(eax, edi);
	add(esi, eax);
	to32i(edx+0x14) = esi; //mov
	edi = to32i(esp+8); //mov
	eax = to32i(edx+0x24); //mov
	esi = to32i(edx+0x18); //mov
	add(eax, edi);
loc_474522:
	add(esi, eax);
	to32i(dword_5450F8) = ebp; //mov
	to32i(edx+0x18) = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_474780(); esp += 4; //call
	edi = to32i(ecx+4); //mov
	dec(edi);
	to32i(ecx+4) = edi; //mov
	if (jnz())
		goto loc_474540;
	to8i(ecx) = 0; //mov
loc_474540:
	ebp = to32i(dword_5450F8); //mov
	inc(ebx);
	add(edx, (int32_t)0x5C);
	cmp(ebx, ebp);
	if (jl())
		goto loc_4744E8;
loc_47454E:
	xor_(eax, eax);
	test(ebp, ebp);
	if (jle())
		goto loc_474569;
loc_474554:
	imul32(esi, eax, 0x5C);
	cmp(byte_5425D4[esi], (int8_t)0);
	if (jz())
		goto loc_474620;
loc_474564:
	inc(eax);
	cmp(eax, ebp);
	if (jl())
		goto loc_474554;
loc_474569:
	to32i(dword_5450F8) = ebp; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_474579:
	ecx = to32i(dword_5450F4); //mov
	add(ecx, (int32_t)2);
	eax = ecx; //mov
	to32i(dword_5450F4) = ecx; //mov
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
	edx = 0xCCC; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(dword_5450F4); //mov
	xor_(ebx, ebx);
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
	edx = 0xCCC; //mov
	to32i(esp+4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	goto loc_4744D7;
loc_4745FF:
	esi = to32i(edx+0x10); //mov
	eax = to32i(edx+0x1C); //mov
	add(esi, eax);
	to32i(edx+0x10) = esi; //mov
	edi = to32i(edx+0x14); //mov
	eax = to32i(edx+0x20); //mov
	esi = to32i(edx+0x18); //mov
	add(edi, eax);
	eax = to32i(edx+0x24); //mov
	to32i(edx+0x14) = edi; //mov
	goto loc_474522;
loc_474620:
	edx = (int32_t)(intptr_t)(ebp-1); //lea
	imul32(ebx, edx, 0x5C);
	ecx = 0x17; //mov
	edi = (int32_t)(intptr_t)(&byte_5425D4[esi]); //lea
	esi = (int32_t)(intptr_t)(&byte_5425D4[ebx]); //lea
	dec(eax);
	ebp = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	goto loc_474564;
}
Fn(void) Game::_sub_474674()
{
	static const void *const off_474650[] = {
		&&loc_474720,
		&&loc_474720,
		&&loc_474720,
		&&loc_474751,
		&&loc_474751,
		&&loc_474720,
		&&loc_474751,
		&&loc_474751,
		&&loc_474751,
	};
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = to32i(dword_5450F8); //mov
	esi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
	xor_(ebx, ebx);
	cmp(ebp, (int32_t)0x78);
	if (jnz())
		goto loc_474749;
	eax = 1; //mov
	ecx = to32i(dword_5425D8); //mov
	cmp(ebp, eax);
	if (jle())
		goto loc_4746C0;
	edx = 0x5C; //mov
loc_4746AA:
	edi = to32i(dword_5425D8+edx); //mov
	cmp(ecx, edi);
	if (jle())
		goto loc_4746B8;
	ecx = edi; //mov
	ebx = eax; //mov
loc_4746B8:
	inc(eax);
	add(edx, (int32_t)0x5C);
	cmp(eax, ebp);
	if (jl())
		goto loc_4746AA;
loc_4746C0:
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	shl(eax, (int32_t)3);
	sub(eax, ebx);
	edx = (int32_t)(intptr_t)byte_5425D4; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	edi = (int32_t)(intptr_t)(edx+0x10); //lea
	movsd();
	movsd();
	movsd();
	al = to8i(esp+0xC); //mov
	to32i(edx+4) = 0; //mov
	to8i(edx) = al; //mov
	eax = to32i(esp+0x10); //mov
	to8i(edx+1) = bl; //mov
	test(eax, eax);
	if (jnz())
		goto loc_474709;
	eax = esp; //mov
	xor_(ecx, ecx);
	to32i(esp+0x10) = eax; //mov
	to32i(esp) = ecx; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = ecx; //mov
loc_474709:
	eax = to32i(esp+0xC); //mov
	dec(eax);
	to32i(dword_5450F8) = ebp; //mov
	cmp(eax, (int32_t)8);
	if (ja())
		goto loc_474732;
	goto *off_474650[eax];
loc_474720:
	eax = edx; //mov
	esp -= 4; _sub_4747E0(); esp += 4; //call
	eax = edx; //mov
	to8i(edx+2) = 1; //mov
loc_47472D:
	esp -= 4; _sub_4747C0(); esp += 4; //call
loc_474732:
	eax = edx; //mov
	esp -= 4; _sub_433BA4(); esp += 4; //call
	ebp = to32i(dword_5450F8); //mov
	eax = edx; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_474749:
	ebx = ebp; //mov
	inc(ebp);
	goto loc_4746C0;
loc_474751:
	eax = to32i(esp+0x10); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)5);
	to32i(edx+0x1C) = eax; //mov
	eax = to32i(esp+0x10); //mov
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)5);
	to32i(edx+0x20) = eax; //mov
	eax = to32i(esp+0x10); //mov
	eax = to32i(eax+8); //mov
	sar(eax, (int32_t)5);
	to32i(edx+0x24) = eax; //mov
	eax = edx; //mov
	to8i(edx+2) = 0; //mov
	goto loc_47472D;
}
Fn(void) Game::_sub_474780()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	ecx = to32i(eax+8); //mov
	add(ecx, to32i(eax+0xC));
	ebx = to32i(eax+0xC); //mov
	to32i(eax+8) = ecx; //mov
	cmp(ebx, (int32_t)0xFFFFFFFD);
	if (jl())
		goto loc_47479D;
	cmp(ebx, (int32_t)3);
	if (jg())
		goto loc_4747A7;
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47479D:
	ebp = (int32_t)(intptr_t)(ebx+1); //lea
	to32i(eax+0xC) = ebp; //mov
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4747A7:
	push32(edi);
	edi = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(eax+0xC) = edi; //mov
	pop32(edi);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4747C0()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	to32i(edx+8) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x7F);
	sub(eax, (int32_t)0x3F);
	to32i(edx+0xC) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4747E0()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3FF);
	to32i(edx+0x1C) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3FF);
	to32i(edx+0x24) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0x3FF);
	add(eax, (int32_t)0x7FF);
	to32i(edx+0x20) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_474820()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edx = to32i(dword_540F24); //mov
	xor_(ebx, ebx);
	xor_(esi, esi);
	test(edx, edx);
	if (jnz())
		goto loc_4748A0;
	cmp(to32i(dword_511E40), (int32_t)0);
	if (jle())
		goto loc_474891;
	edx = to32i(dword_511E40); //mov
	xor_(eax, eax);
	add(edx, edx);
	xor_(ecx, ecx);
	to32i(esp) = edx; //mov
loc_474853:
	edx = to32i(dword_511D08+ecx); //mov
	edi = to32i(edx+0x21C); //mov
	cmp(to32i(edi), (int32_t)0x24);
	if (jz())
		goto loc_4748BF;
	cmp(to32i(edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_4748AA;
	edx = to32i(edx+0x224); //mov
	ebp = to32i(dword_540F48); //mov
	add(edx, (int32_t)0x140);
	cmp(edx, ebp);
	if (jge())
		goto loc_4748AA;
loc_474883:
	inc(ebx);
loc_474884:
	edi = to32i(esp); //mov
	add(eax, (int32_t)2);
	add(ecx, (int32_t)4);
	cmp(eax, edi);
	if (jl())
		goto loc_474853;
loc_474891:
	eax = to32i(dword_511E40); //mov
	sub(eax, esi);
	cmp(ebx, eax);
	if (jnz())
		goto loc_4748A0;
	test(eax, eax);
	if (jg())
		goto loc_4748C2;
loc_4748A0:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4748AA:
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_474884;
	cmp(to16i(word_513448+eax), (int16_t)0);
	if (jnz())
		goto loc_474883;
	goto loc_474884;
loc_4748BF:
	inc(esi);
	goto loc_474884;
loc_4748C2:
	ebp = 1; //mov
	eax = 2; //mov
	to32i(dword_540F24) = ebp; //mov
	esp -= 4; _sub_4748F0(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4748F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	edx = 1; //mov
	ecx = to32i(dword_511E40); //mov
	xor_(esi, esi);
	to32i(esp) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_47498E;
	xor_(ecx, ecx);
loc_474915:
	edx = to32i(dword_5118A0); //mov
	imul32(edx, to32i(dword_5121FC));
	ebx = to32i(dword_511D08+ecx); //mov
	eax = to32i(ebx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x24);
	if (jnz())
		goto loc_474A23;
	ebp = to32i(ebx+0x220); //mov
	cmp(edx, ebp);
	if (jle())
		goto loc_474957;
	test(ebp, ebp);
	if (jnz())
		goto loc_474A09;
	xor_(eax, eax);
loc_47494B:
	edx = to32i(dword_511D08+ecx); //mov
	to32i(edx+0x234) = eax; //mov
loc_474957:
	eax = to32i(dword_511D08+ecx); //mov
	to32i(eax+0x280) = edi; //mov
loc_474963:
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_474980;
	cmp(edi, to32i(dword_5121F8));
	if (jz())
		goto loc_474A8C;
	eax = to32i(dword_511D08+ecx); //mov
loc_47497A:
	to32i(eax+0x280) = edi; //mov
loc_474980:
	ebx = to32i(dword_511E40); //mov
	inc(esi);
	add(ecx, (int32_t)4);
	cmp(esi, ebx);
	if (jl())
		goto loc_474915;
loc_47498E:
	ebp = to32i(dword_511E30); //mov
	xor_(esi, esi);
	test(ebp, ebp);
	if (jle())
		goto loc_4749FF;
	xor_(ecx, ecx);
loc_47499C:
	ebx = to32i(dword_511C48+ecx); //mov
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jz())
		goto loc_4749E0;
	cmp(to32i(ebx+0x220), (int32_t)0);
	if (jnz())
		goto loc_474AB0;
	xor_(eax, eax);
loc_4749BA:
	edx = to32i(dword_511C48+ecx); //mov
	to32i(edx+0x234) = eax; //mov
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_474ADD;
	eax = to32i(dword_511C48+ecx); //mov
	to32i(eax+0x280) = 2; //mov
loc_4749E0:
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_4749F1;
	eax = to32i(dword_511C48+ecx); //mov
	to32i(eax+0x280) = edi; //mov
loc_4749F1:
	ebp = to32i(dword_511E30); //mov
	inc(esi);
	add(ecx, (int32_t)4);
	cmp(esi, ebp);
	if (jl())
		goto loc_47499C;
loc_4749FF:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_474A09:
	eax = to32i(ebx+0x224); //mov
	sub(eax, (int32_t)0x200);
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	goto loc_47494B;
loc_474A23:
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jz())
		goto loc_474963;
	ebp = to32i(ebx+0x220); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_474A6B;
	xor_(eax, eax);
loc_474A3C:
	edx = to32i(dword_511D08+ecx); //mov
	to32i(edx+0x234) = eax; //mov
	cmp(to32i(dword_5121F8), (int32_t)1);
	if (jz())
		goto loc_474A82;
loc_474A51:
	eax = to32i(dword_511D08+ecx); //mov
	to32i(eax+0x280) = 1; //mov
loc_474A61:
	xor_(ebx, ebx);
	to32i(esp) = ebx; //mov
	goto loc_474963;
loc_474A6B:
	eax = to32i(ebx+0x224); //mov
	sub(eax, (int32_t)0x200);
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	goto loc_474A3C;
loc_474A82:
	cmp(esi, to32i(dword_51220C));
	if (jnz())
		goto loc_474A61;
	goto loc_474A51;
loc_474A8C:
	eax = to32i(dword_511D08+ecx); //mov
	cmp(to32i(eax+0x280), (int32_t)2);
	if (jz())
		goto loc_474980;
	cmp(esi, to32i(dword_51220C));
	if (jnz())
		goto loc_474980;
	goto loc_47497A;
loc_474AB0:
	edx = to32i(dword_5118A0); //mov
	imul32(edx, to32i(dword_5121FC));
	eax = to32i(ebx+0x224); //mov
	sub(eax, (int32_t)0x200);
	imul32(edx, eax);
	ebp = to32i(ebx+0x220); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	goto loc_4749BA;
loc_474ADD:
	eax = to32i(dword_511C48+ecx); //mov
	to32i(eax+0x280) = edi; //mov
	goto loc_4749E0;
}
Fn(void) Game::_sub_474AF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	edx = to32i(eax+0x230); //mov
	cmp(edx, (int32_t)8);
	if (jge())
		goto loc_474B79;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = to32i(ebp+0x2B8); //mov
	cmp(eax, to32i(edx+0x258));
	if (jle())
		goto loc_474B79;
	test(to8i(ebp+0x1F4), (int8_t)8);
	if (jz())
		goto loc_474DBF;
	eax = to32i(ebp+0x21C); //mov
	ebx = to32i(eax); //mov
	cmp(ebx, (int32_t)0xF);
	if (jge())
		goto loc_474DBF;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_474D75;
	imul32(eax, to32i(ebp+0x1E8), 0x1999);
	edx = to32i(dword_4D5F74+ebx*4); //mov
	sub(edx, eax);
	ebx = to32i(ebp+0x2B8); //mov
	eax = edx; //mov
	cmp(edx, ebx);
	if (jge())
		goto loc_474D6E;
loc_474B6C:
	edx = to32i(ebp+0x230); //mov
	to32i(ebp+edx*4+0x258) = eax; //mov
loc_474B79:
	esi = to32i(ebp+0x1F8); //mov
	cmp(esi, to32i(ebp+0x230));
	if (jz())
		goto loc_474C1C;
	cmp(to32i(ebp+0x280), (int32_t)2);
	if (jz())
		goto loc_474C1C;
	eax = to32i(dword_540F48); //mov
	edx = to32i(ebp+0x234); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(ebp+0x230); //mov
	to32i(ebp+eax*4+0x238) = edx; //mov
	eax = to32i(dword_540F48); //mov
	to32i(ebp+0x234) = eax; //mov
	eax = to32i(ebp+0x1F8); //mov
	ecx = to32i(dword_5121FC); //mov
	to32i(ebp+0x230) = eax; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_474C1C;
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x24);
	if (jz())
		goto loc_474C1C;
	edx = to32i(ebp+0x230); //mov
	eax = to32i(dword_540F48); //mov
	inc(edx);
	to32i(ebp+0x224) = eax; //mov
	eax = to32i(dword_5118A0); //mov
	imul32(edx, eax);
	esi = to32i(ebp+0x234); //mov
	to32i(ebp+0x280) = 2; //mov
	sub(esi, (int32_t)0x200);
	to32i(ebp+0x234) = esi; //mov
	to32i(ebp+0x220) = edx; //mov
loc_474C1C:
	edi = to32i(ebp+0x14); //mov
	cmp(edi, to32i(ebp+0x228));
	if (jz())
		goto loc_474C7C;
	eax = to32i(ebp+0x280); //mov
	to32i(ebp+0x228) = edi; //mov
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_474C7C;
	eax = to32i(dword_540F48); //mov
	edx = to32i(dword_512228); //mov
	to32i(ebp+0x224) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_474DDC;
	edx = to32i(dword_5118A0); //mov
	sub(edx, to32i(ebp+0x228));
loc_474C5D:
	ebx = to32i(ebp+0x1FC); //mov
	eax = to32i(ebp+0x230); //mov
	esi = to32i(dword_5118A0); //mov
	sub(eax, ebx);
	imul32(eax, esi);
	add(eax, edx);
	to32i(ebp+0x220) = eax; //mov
loc_474C7C:
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x24);
	if (jz())
		goto loc_474D64;
	xor_(eax, eax);
	edx = to32i(dword_511E44); //mov
	to32i(esp+4) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_474D64;
	eax = (int32_t)(intptr_t)(edx-2); //lea
	to32i(esp) = eax; //mov
loc_474CA5:
	eax = to32i(esp+4); //mov
	shl(eax, (int32_t)4);
	edx = to32i(ebp+0x220); //mov
	esi = to32i(dword_545104+eax); //mov
	cmp(edx, esi);
	if (jle())
		goto loc_474DE7;
loc_474CC0:
	eax = to32i(esp); //mov
	ebx = to32i(esp+4); //mov
	cmp(eax, ebx);
	if (jl())
		goto loc_474D0A;
	edi = ebx; //mov
	shl(eax, (int32_t)4);
	shl(edi, (int32_t)4);
loc_474CD3:
	sub(eax, (int32_t)0x10);
	esi = to32i(dword_545110+eax); //mov
	edx = to32i(dword_545114+eax); //mov
	to32i(dword_545120+eax) = esi; //mov
	to32i(dword_545124+eax) = edx; //mov
	ebx = to32i(dword_545118+eax); //mov
	ecx = to32i(dword_54511C+eax); //mov
	to32i(dword_545128+eax) = ebx; //mov
	to32i(dword_54512C+eax) = ecx; //mov
	cmp(eax, edi);
	if (jge())
		goto loc_474CD3;
loc_474D0A:
	eax = to32i(esp+4); //mov
	edx = to32i(ebp+0x220); //mov
	ecx = to32i(ebp+0x224); //mov
	esi = to32i(ebp+0x1E8); //mov
	shl(eax, (int32_t)4);
	ebx = to32i(ebp+0x1F4); //mov
	to32i(dword_545100+eax) = esi; //mov
	to32i(dword_545104+eax) = edx; //mov
	and_(ebx, (int32_t)4);
	to32i(dword_545108+eax) = ecx; //mov
	esi = 0x14; //mov
	to32i(dword_54510C+eax) = ebx; //mov
	to32i(esp+4) = esi; //mov
loc_474D4D:
	ecx = to32i(esp+4); //mov
	inc(ecx);
	ebx = to32i(dword_511E44); //mov
	to32i(esp+4) = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_474CA5;
loc_474D64:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_474D6E:
	eax = ebx; //mov
	goto loc_474B6C;
loc_474D75:
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_4D5F74+ebx*4); //mov
	edi = to32i(ebp+0x2B8); //mov
	sub(edx, eax);
	cmp(edx, edi);
	if (jge())
		goto loc_474DB8;
	eax = to32i(ebp+0x21C); //mov
	ecx = to32i(eax); //mov
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_4D5F74+ecx*4); //mov
	sub(edx, eax);
	eax = edx; //mov
	goto loc_474B6C;
loc_474DB8:
	eax = edi; //mov
	goto loc_474B6C;
loc_474DBF:
	eax = to32i(ebp+0x230); //mov
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = to32i(ebp+0x2B8); //mov
	to32i(edx+0x258) = eax; //mov
	goto loc_474B79;
loc_474DDC:
	edx = to32i(ebp+0x228); //mov
	goto loc_474C5D;
loc_474DE7:
	if (jnz())
		goto loc_474D4D;
	ecx = to32i(dword_545108+eax); //mov
	cmp(ecx, to32i(ebp+0x224));
	if (jg())
		goto loc_474CC0;
	goto loc_474D4D;
}
Fn(void) Game::_sub_474E10()
{
	cmp(eax, (int32_t)1);
	if (jle())
		goto loc_474E26;
	shl(eax, (int32_t)4);
	eax = to32i(dword_5450E0+eax); //mov
	eax = to32i(dword_511B48+eax*4); //mov
	return;
loc_474E26:
	xor_(eax, eax);
}
Fn(void) Game::_sub_474E30()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_511E44); //mov
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_474E54;
	shl(ecx, (int32_t)4);
	xor_(eax, eax);
loc_474E43:
	cmp(to32i(dword_545100+eax), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_474E4D;
	inc(edx);
loc_474E4D:
	add(eax, (int32_t)0x10);
	cmp(eax, ecx);
	if (jl())
		goto loc_474E43;
loc_474E54:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_474E60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = to32i(dword_511E44); //mov
	ebx = to32i(eax+0x1E8); //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_474E8D;
	xor_(edx, edx);
loc_474E7A:
	cmp(ebx, to32i(dword_545100+edx));
	if (jnz())
		goto loc_474E85;
	ecx = (int32_t)(intptr_t)(eax+1); //lea
loc_474E85:
	inc(eax);
	add(edx, (int32_t)0x10);
	cmp(eax, esi);
	if (jl())
		goto loc_474E7A;
loc_474E8D:
	eax = ecx; //mov
	to32i(dword_511E44) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_474EA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = 0xFFFFFFFF; //mov
	ecx = 0xFFFE7961; //mov
	xor_(eax, eax);
loc_474EAF:
	add(eax, (int32_t)0x10);
	to32i(dword_5450F4+eax) = ecx; //mov
	xor_(ebx, ebx);
	to32i(dword_5450F0+eax) = edx; //mov
	to32i(dword_5450F8+eax) = ebx; //mov
	to32i(dword_5450FC+eax) = ebx; //mov
	cmp(eax, (int32_t)0xC0);
	if (jnz())
		goto loc_474EAF;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_474EE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = to32i(dword_511E40); //mov
	edi = 0x63; //mov
	ecx = to32i(dword_511E44); //mov
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_474F51;
	xor_(ebx, ebx);
	xor_(ecx, ecx);
loc_474F01:
	eax = to32i(dword_511CC8+ebx); //mov
	esp -= 4; _sub_474E60(); esp += 4; //call
	esi = to32i(dword_511CC8+ebx); //mov
	to32i(esi+0x278) = eax; //mov
	cmp(to32i(dword_54510C+ecx), (int32_t)0);
	if (jz())
		goto loc_474F40;
	cmp(edi, (int32_t)0x63);
	if (jnz())
		goto loc_474F40;
	eax = to32i(dword_545100+ecx); //mov
	eax = to32i(dword_511CC8+eax*4); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x24);
	if (jz())
		goto loc_474F40;
	edi = edx; //mov
loc_474F40:
	esi = to32i(dword_511E44); //mov
	add(ecx, (int32_t)0x10);
	inc(edx);
	add(ebx, (int32_t)4);
	cmp(edx, esi);
	if (jl())
		goto loc_474F01;
loc_474F51:
	eax = to32i(dword_512210); //mov
	ebp = to32i(dword_511E40); //mov
	test(eax, eax);
	if (jz())
		goto loc_474FAB;
	xor_(esi, esi);
	test(ebp, ebp);
	if (jle())
		goto loc_474FAB;
	shl(edi, (int32_t)4);
	xor_(ebx, ebx);
loc_474F6B:
	eax = to32i(dword_511D08+ebx); //mov
	edx = to32i(eax+0x21C); //mov
	cmp(to32i(edx), (int32_t)0x24);
	if (jz())
		goto loc_474F99;
	edx = to32i(eax+0x220); //mov
	ecx = to32i(dword_545104+edi); //mov
	sub(ecx, edx);
	imul32(edx, to32i(dword_512204), 0x74);
	cmp(ecx, to32i(dword_511D9C+edx));
	if (jge())
		goto loc_474FB8;
loc_474F99:
	to32i(eax+0x218) = 0x10000; //mov
loc_474FA3:
	inc(esi);
	add(ebx, (int32_t)4);
	cmp(esi, ebp);
	if (jl())
		goto loc_474F6B;
loc_474FAB:
	to32i(dword_511E40) = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_474FB8:
	cmp(ecx, to32i(dword_511DA0+edx));
	if (jge())
		goto loc_474FCE;
	edx = to32i(dword_511DAC+edx); //mov
	to32i(eax+0x218) = edx; //mov
	goto loc_474FA3;
loc_474FCE:
	cmp(ecx, to32i(dword_511DA4+edx));
	if (jge())
		goto loc_474FE4;
	edx = to32i(dword_511DB0+edx); //mov
	to32i(eax+0x218) = edx; //mov
	goto loc_474FA3;
loc_474FE4:
	cmp(ecx, to32i(dword_511DA8+edx));
	if (jge())
		goto loc_474FFA;
	edx = to32i(dword_511DB4+edx); //mov
	to32i(eax+0x218) = edx; //mov
	goto loc_474FA3;
loc_474FFA:
	edx = to32i(dword_511DB8+edx); //mov
	to32i(eax+0x218) = edx; //mov
	goto loc_474FA3;
}
Fn(void) Game::_sub_475030()
{
	add(eax, to32i(dword_475020));
}
Fn(void) Game::_sub_475040()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_47501C); //mov
	ebx = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	eax = to16i(ebx+eax*2); //movsx
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_475060()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_475018); //mov
	ebx = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	eax = to16i(ebx+eax*2); //movsx
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_475080()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebp = edx; //mov
	xor_(edx, edx);
	eax = to32i(dword_475014); //mov
	to32i(esp) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edi = to16i(esi+eax*2); //movsx
	test(edi, edi);
	if (jz())
		goto loc_4750CE;
	eax = to32i(dword_475024); //mov
	add(eax, esi);
	edx = to32i(eax); //mov
	add(edx, eax);
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_4750CE;
loc_4750B8:
	ecx = to32i(edx); //mov
	add(ecx, esi);
	xor_(ebx, ebx);
	bx = to16i(ecx+4); //mov
	cmp(ebx, ebp);
	if (jz())
		goto loc_4750DA;
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, edi);
	if (jl())
		goto loc_4750B8;
loc_4750CE:
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4750DA:
	to32i(esp) = ecx; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4750F0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	xor_(ecx, ecx);
	cx = to16i(eax+0xA); //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	ecx = to32i(dword_475028); //mov
	add(eax, eax);
	add(ecx, edx);
	dx = to16i(edx+4); //mov
	add(ecx, eax);
	and_(edx, (int32_t)0xFFFF);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	add(eax, eax);
	add(eax, ecx);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_475130()
{
	add(eax, to32i(dword_475028));
}
Fn(void) Game::_sub_475140()
{
	add(eax, to32i(dword_475024));
}
Fn(void) Game::_sub_475150()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(eax, to32i(dword_5451DC));
	if (jnb())
		goto loc_475166;
	eax = to32i(dword_4D968C); //mov
	eax = to16i(eax+ecx*2); //movsx
	pop32(ecx);
	return;
loc_475166:
	eax = to32i(dword_4D968C); //mov
	eax = to16i(eax+ecx*2); //movsx
	pop32(ecx);
}
Fn(void) Game::_sub_475190()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	xor_(eax, eax);
	ax = to16i(ecx+4); //mov
	cmp(edx, eax);
	if (jge())
		goto loc_4751AB;
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	eax = to32i(eax+esi*4); //mov
	add(eax, ecx);
	pop32(esi);
	pop32(ecx);
	return;
loc_4751AB:
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	eax = to32i(eax+esi*4); //mov
	add(eax, ecx);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4751D0()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = to32i(dword_4D9688); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	pop32(edx);
}
Fn(void) Game::_sub_4751F0()
{
	push32(esi);
	push32(edi);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	esi = to32i(dword_4D9688); //mov
	shl(eax, (int32_t)2);
	edi = ebx; //mov
	add(esi, eax);
	movsd();
	movsd();
	movsd();
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_475210()
{
	cmp(eax, to32i(dword_5451E0));
	if (jnz())
		goto loc_47521E;
	eax = to32i(dword_5451CC); //mov
	return;
loc_47521E:
	eax = to32i(dword_5451CC); //mov
}
Fn(void) Game::_sub_475240()
{
	cmp(eax, to32i(dword_5451E0));
	if (jnz())
		goto loc_47524E;
	eax = to32i(dword_5451C8); //mov
	return;
loc_47524E:
	eax = to32i(dword_5451C8); //mov
}
Fn(void) Game::_sub_475270()
{
	cmp(eax, to32i(dword_5451E0));
	if (jnz())
		goto loc_47527E;
	eax = to32i(dword_5451D8); //mov
	return;
loc_47527E:
	eax = to32i(dword_5451D8); //mov
}
Fn(void) Game::_sub_4752A0()
{
	cmp(eax, to32i(dword_5451E0));
	if (jnz())
		goto loc_4752AE;
	eax = to32i(dword_5451DC); //mov
	return;
loc_4752AE:
	eax = to32i(dword_5451DC); //mov
}
Fn(void) Game::_sub_4752D0()
{
	push32(edx);
	edx = to32i(dword_5451E0); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4752DD;
	pop32(edx);
	return;
loc_4752DD:
	eax = edx; //mov
	esp -= 4; _sub_47FA50(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4752F0()
{
	eax = 1; //mov
}
Fn(void) Game::_sub_475300()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = edx; //mov
	xor_(edx, edx);
loc_47530C:
	ebx = to32i(dword_545230+edx); //mov
	push32(ebx);
	esi = to32i(dword_54522C+edx); //mov
	push32(esi);
	edi = to32i(ecx+4); //mov
	push32(edi);
	ebp = to32i(ecx); //mov
	push32(ebp);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edi = ecx; //mov
	esi = esp; //mov
	add(edx, (int32_t)8);
	movsd();
	movsd();
	cmp(edx, (int32_t)0x100);
	if (jnz())
		goto loc_47530C;
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_475350()
{
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	xor_(edx, edx);
loc_475358:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(dword_54522C+edx); //lea
	add(edx, (int32_t)8);
	movsd();
	movsd();
	cmp(edx, (int32_t)0x100);
	if (jnz())
		goto loc_475358;
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_475380()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x70);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp+0x64) = ebx; //mov
	cmp(to32i(eax+0xBC), (int32_t)0);
	if (jnz())
		goto loc_475450;
loc_47539C:
	ecx = to32i(esi+4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47541E;
	ebx = (int32_t)(intptr_t)(esi+0x50); //lea
	edx = (int32_t)(intptr_t)(ecx+0x50); //lea
	eax = (int32_t)(intptr_t)(esi+0x20); //lea
	esp -= 4; _sub_49E840(); esp += 4; //call
	eax = to32i(esi+0x44); //mov
	ebx = to32i(esi+0x80); //mov
	add(eax, ebx);
	to32i(esp+0x24) = eax; //mov
	eax = to32i(esi+0x48); //mov
	ebp = to32i(esi+0x84); //mov
	add(eax, ebp);
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esi+0x4C); //mov
	edx = to32i(esi+0x88); //mov
	add(eax, edx);
	to32i(esp+0x2C) = eax; //mov
	ebx = (int32_t)(intptr_t)(esp+0x30); //lea
	edx = to32i(esi+4); //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	add(edx, (int32_t)0x50);
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(esi+4); //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(eax+0x74); //mov
	add(edx, eax);
	to32i(esi+0x74) = edx; //mov
	eax = to32i(esi+4); //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(eax+0x78); //mov
	add(edx, eax);
	to32i(esi+0x78) = edx; //mov
	eax = to32i(esi+4); //mov
	edx = to32i(esp+0x38); //mov
	eax = to32i(eax+0x7C); //mov
	add(edx, eax);
	to32i(esi+0x7C) = edx; //mov
loc_47541E:
	cmp(to32i(esi), (int32_t)1);
	if (jnz())
		goto loc_475467;
	edx = to32i(esi+8); //mov
	xor_(ebp, ebp);
	test(edx, edx);
	if (jle())
		goto loc_475448;
	ecx = esi; //mov
loc_47542E:
	ebx = to32i(esp+0x64); //mov
	edx = edi; //mov
	eax = to32i(ecx+0xC); //mov
	esp -= 4; _sub_475380(); esp += 4; //call
	inc(ebp);
	eax = to32i(esi+8); //mov
	add(ecx, (int32_t)4);
	cmp(ebp, eax);
	if (jl())
		goto loc_47542E;
loc_475448:
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_475450:
	edx = to32i(eax+0xC4); //mov
	eax = to32i(eax+0xC0); //mov
	call(to32i(esi+0xBC));
	goto loc_47539C;
loc_475467:
	ebx = to32i(esi+0x8C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_475448;
	xor_(ebp, ebp);
	to32i(esp+0x6C) = ebp; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_475448;
	eax = (int32_t)(intptr_t)(esi+0x50); //lea
	to32i(esp+0x68) = eax; //mov
	eax = (int32_t)(intptr_t)(edi+0x44); //lea
	ebp = esi; //mov
	to32i(esp+0x60) = eax; //mov
loc_47548B:
	eax = to32i(ebp+0x90); //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_4754A5;
	cmp(to32i(dword_4D9288), (int32_t)0);
	if (jz())
		goto loc_4754BD;
	cmp(to8i(eax+0x20), (int8_t)0);
	if (jnz())
		goto loc_4754BD;
loc_4754A5:
	ecx = to32i(esp+0x6C); //mov
	add(ebp, (int32_t)4);
	inc(ecx);
	ebx = to32i(esi+0x8C); //mov
	to32i(esp+0x6C) = ecx; //mov
	cmp(ecx, ebx);
	if (jge())
		goto loc_475448;
	goto loc_47548B;
loc_4754BD:
	eax = to32i(ebp+0x90); //mov
	ebx = to32i(eax+0x24); //mov
	cmp(ebx, (int32_t)0x20000);
	if (jnz())
		goto loc_475581;
loc_4754D2:
	eax = to32i(esi+0x74); //mov
	edx = to32i(edi+8); //mov
	sub(eax, edx);
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esi+0x78); //mov
	ecx = to32i(edi+0xC); //mov
	sub(eax, ecx);
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esi+0x7C); //mov
	ebx = to32i(edi+0x10); //mov
	edx = to32i(esp+0x60); //mov
	sub(eax, ebx);
	ebx = (int32_t)(intptr_t)(esp+0x54); //lea
	to32i(esp+0x50) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	ebx = esp; //mov
	edx = to32i(esp+0x60); //mov
	eax = to32i(esp+0x68); //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	eax = to32i(ebp+0x90); //mov
	eax = to32i(eax+0x20); //mov
	edx = to32i(dword_4D9280); //mov
	sar(eax, (int32_t)0x10);
	test(edx, edx);
	if (jz())
		goto loc_475538;
	cmp(eax, (int32_t)5);
	if (jge())
		goto loc_475538;
	eax = to32i(dword_513608+eax*4); //mov
loc_475538:
	edx = to32i(esi+0x74); //mov
	ecx = to32i(edi+8); //mov
	sub(edx, ecx);
	to32i(esp+0x3C) = edx; //mov
	edx = to32i(esi+0x78); //mov
	sub(edx, to32i(edi+0xC));
	ebx = to32i(esp+0x64); //mov
	to32i(esp+0x40) = edx; //mov
	push32(ebx);
	edx = to32i(esi+0x7C); //mov
	ecx = to32i(edi+0x10); //mov
	ebx = to32i(esp+0x6C); //mov
	push32(eax);
	sub(edx, ecx);
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	to32i(esp+0x4C) = edx; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = to32i(ebp+0x90); //mov
	esp -= 4; _sub_47FCD0(); esp += 4; //call
	goto loc_4754A5;
loc_475581:
	edx = to32i(dword_545224); //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_4754D2;
	cmp(edx, to32i(eax+0x28));
	if (jge())
		goto loc_4754D2;
	edx = to32i(dword_545228); //mov
	cmp(edx, to32i(eax+0x2C));
	if (jle())
		goto loc_4754D2;
	cmp(edx, to32i(eax+0x30));
	if (jl())
		goto loc_4754A5;
	goto loc_4754D2;
}
Fn(void) Game::_sub_4755C0()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)8);
	ebx = eax; //mov
	ecx = edx; //mov
	edx = 0xC0; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4755E1;
loc_4755D9:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4755E1:
	edx = to32i(esp); //mov
	push32(edx);
	edx = (int32_t)(intptr_t)(ecx+0x38); //lea
	eax = (int32_t)(intptr_t)(ecx+0x44); //lea
	ecx = ebx; //mov
	ebx = 4; //mov
	esp -= 4; _sub_475690(); esp += 4; //call
	edx = 0x24; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4755D9;
	eax = to32i(esp+4); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp+4); //mov
	to32i(eax+4) = 0xA; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(dword_500F40); //mov
	to32i(eax+0x1C) = edx; //mov
	eax = to32i(esp+4); //mov
	to32i(eax+0x20) = 0x8FFFFFFF; //mov
	eax = to32i(esp+4); //mov
	to16i(eax+0xA) = 1; //mov
	eax = to32i(esp+4); //mov
	to16i(eax+8) = 3; //mov
	edx = to32i(esp+4); //mov
	eax = to32i(esp); //mov
	to32i(edx+0xC) = eax; //mov
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x30);
	to32i(edx+0x10) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x90);
	to32i(edx+0x14) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x60);
	to32i(edx+0x18) = eax; //mov
	eax = to32i(esp+4); //mov
	add(esp, (int32_t)8);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_475690()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ebp = to32i(esp+0x3C); //mov
	to32i(esp+0x1C) = eax; //mov
	to32i(esp+0x24) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
	eax = (int32_t)(intptr_t)(ebp+0x10); //lea
	to32i(esp+0x20) = ecx; //mov
	to32i(esp+0xC) = eax; //mov
loc_4756B1:
	edx = to32i(esp+0x10); //mov
	dec(edx);
	to32i(esp+0x10) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4756C8;
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4756C8:
	ebx = esp; //mov
	edx = to32i(esp+0x1C); //mov
	eax = to32i(esp+0x20); //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	add(ebx, (int32_t)0x2000);
	eax = to32i(esp+0x24); //mov
	to32i(esp+4) = ebx; //mov
	esi = to32i(esp); //mov
	add(esi, to32i(eax));
	eax = to32i(esp+0x24); //mov
	to32i(esp) = esi; //mov
	eax = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(esp+0x24); //mov
	to32i(esp+4) = edi; //mov
	edx = to32i(esp+8); //mov
	eax = to32i(eax+8); //mov
	add(edx, eax);
	to32i(esp+8) = edx; //mov
	to32i(ebp+0) = esi; //mov
	eax = to32i(esp+4); //mov
	to32i(ebp+4) = eax; //mov
	eax = to32i(esp+8); //mov
	to16i(ebp+0xC) = 0; //mov
	to32i(ebp+8) = eax; //mov
	ecx = to32i(esp+8); //mov
	esi = to32i(esp+0xC); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_47573B;
	to32i(esp+8) = 1; //mov
loc_47573B:
	eax = to32i(esp+8); //mov
	to32i(esp+0x28) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
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
		goto loc_475845;
	cmp(eax, ecx);
	if (jge())
		goto loc_475845;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_475819;
	cmp(eax, ecx);
	if (jl())
		goto loc_475819;
	cmp(eax, edx);
	if (jle())
		goto loc_47581D;
	or_(ebx, (int32_t)4);
	goto loc_47581D;
loc_475819:
	or_(ebx, (int32_t)8);
loc_47581D:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_475840;
	cmp(eax, ecx);
	if (jl())
		goto loc_475840;
	cmp(eax, edx);
	if (jle())
		goto loc_47584A;
	or_(ebx, (int32_t)2);
	goto loc_47584A;
loc_475840:
	or_(ebx, (int32_t)1);
	goto loc_47584A;
loc_475845:
	ebx = 0x10; //mov
loc_47584A:
	to8i(edi) = bl; //mov
	cmp(to32i(esp+8), (int32_t)0);
	if (jl())
		goto loc_475877;
	xor_(eax, eax);
loc_475855:
	edi = to32i(esp+0xC); //mov
	to16i(ebp+0xE) = ax; //mov
	add(ebp, (int32_t)0x30);
	eax = to32i(esp+0x20); //mov
	add(edi, (int32_t)0x30);
	add(eax, (int32_t)0xC);
	to32i(esp+0xC) = edi; //mov
	to32i(esp+0x20) = eax; //mov
	goto loc_4756B1;
loc_475877:
	eax = 1; //mov
	goto loc_475855;
}
Fn(void) Game::_sub_475880()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)4);
	bl = al; //mov
	edx = 0xC; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_47589D;
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
	return;
loc_47589D:
	eax = to32i(esp); //mov
	to32i(eax+4) = 0x1A; //mov
	eax = to32i(esp); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp); //mov
	to8i(eax+8) = bl; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4758C0()
{
	push32(ecx);
	ecx = eax; //mov
	eax = 2; //mov
	esp -= 4; _sub_475960(); esp += 4; //call
	to32i(eax+4) = ecx; //mov
	to32i(eax+0xBC) = edx; //mov
	to32i(eax+0xC0) = eax; //mov
	to32i(eax+0xC4) = ebx; //mov
	edx = to32i(ecx+8); //mov
	to32i(ecx+edx*4+0xC) = eax; //mov
	inc(to32i(ecx+8));
	pop32(ecx);
}
Fn(void) Game::_sub_4758F0()
{
	push32(ecx);
	ecx = eax; //mov
	eax = 1; //mov
	esp -= 4; _sub_475960(); esp += 4; //call
	to32i(eax+4) = ecx; //mov
	to32i(eax+0xBC) = edx; //mov
	to32i(eax+0xC0) = eax; //mov
	to32i(eax+0xC4) = ebx; //mov
	edx = to32i(ecx+8); //mov
	to32i(ecx+edx*4+0xC) = eax; //mov
	inc(to32i(ecx+8));
	pop32(ecx);
}
Fn(void) Game::_sub_475920()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x8C); //mov
	to32i(ecx+eax*4+0x90) = edx; //mov
	edx = ebx; //mov
	eax = esi; //mov
	esp -= 4; _sub_46E240(); esp += 4; //call
	eax = to32i(esi+8); //mov
	to32i(ecx+0x44) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(ecx+0x48) = eax; //mov
	eax = to32i(esi+0x10); //mov
	to32i(ecx+0x4C) = eax; //mov
	al = to8i(ebx); //mov
	to8i(esi+0x20) = al; //mov
	inc(to32i(ecx+0x8C));
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_475960()
{
	push32(edx);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aTrnfnode; //mov
	esp -= 4; _sub_475980(); esp += 4; //call
	to32i(eax+8) = 0; //mov
	to32i(eax) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_475980()
{
	push32(ebx);
	push32(edx);
	edx = 0xC8; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_475A80(); esp += 4; //call
	edx = eax; //mov
	add(eax, (int32_t)0x20);
	to32i(eax-0x1C) = 0; //mov
	to32i(eax-0x18) = 0; //mov
	to32i(eax+0x6C) = 0; //mov
	to32i(eax+0x9C) = 0; //mov
	to32i(eax+0xA0) = 0; //mov
	to32i(eax+0xA4) = 0; //mov
	esp -= 4; _sub_45ED00(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edx+0x50); //lea
	esp -= 4; _sub_45ED00(); esp += 4; //call
	to32i(edx+0x44) = 0; //mov
	to32i(edx+0x48) = 0; //mov
	to32i(edx+0x4C) = 0; //mov
	to32i(edx+0x80) = 0; //mov
	to32i(edx+0x84) = 0; //mov
	to32i(edx+0x88) = 0; //mov
	to32i(edx+0x74) = 0; //mov
	to32i(edx+0x78) = 0; //mov
	eax = edx; //mov
	to32i(edx+0x7C) = 0; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_475A20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_4D9690); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_475A54;
	xor_(edx, edx);
loc_475A34:
	edi = to32i(dword_5451E4+edx); //mov
	test(edi, edi);
	if (jnz())
		goto loc_475A69;
loc_475A3E:
	esi = to32i(dword_4D9690); //mov
	add(edx, (int32_t)4);
	xor_(ebx, ebx);
	inc(ecx);
	to32i(dword_5451E0+edx) = ebx; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_475A34;
loc_475A54:
	xor_(ebp, ebp);
	to32i(dword_4D9690) = ebp; //mov
	to32i(dword_4D9694) = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_475A69:
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_475A3E;
}
Fn(void) Game::_sub_475A80()
{
	push32(ecx);
	push32(esi);
	ecx = to32i(dword_4D9694); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_475ACE;
	eax = to32i(dword_4D9690); //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	shl(eax, (int32_t)3);
	add(eax, ecx);
	edx = to32i(dword_5451E0+ebx); //mov
	shl(eax, (int32_t)3);
	inc(ecx);
	esi = (int32_t)(intptr_t)(edx+eax); //lea
	ebx = 0xA; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ecx = edx; //mov
	eax = esi; //mov
	to32i(dword_4D9694) = ecx; //mov
	pop32(esi);
	pop32(ecx);
	return;
loc_475ACE:
	edx = (int32_t)(intptr_t)aCNfs2seGame_13; //mov
	ebx = 0x4F; //mov
	eax = (int32_t)(intptr_t)aTrnfset; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	edx = 0x7D0; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(dword_4D9690); //mov
	ecx = to32i(dword_4D9694); //mov
	esi = (int32_t)(intptr_t)(edx+1); //lea
	inc(ecx);
	to32i(dword_5451E4+edx*4) = eax; //mov
	to32i(dword_4D9690) = esi; //mov
	eax = to32i(dword_5451E0+esi*4); //mov
	to32i(dword_4D9694) = ecx; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_475B40()
{
	_sub_475B50(); return; //jmp
}
Fn(void) Game::_sub_475B50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = 0x10; //mov
	edx = to32i(dword_540F48); //mov
	xor_(ebx, ebx);
	to32i(dword_54592C) = edx; //mov
	to32i(dword_545930) = edx; //mov
	xor_(edi, edi);
loc_475B70:
	eax = ebx; //mov
	ecx = esi; //mov
	shl(eax, (int32_t)4);
loc_475B77:
	add(eax, (int32_t)4);
	to32i(dword_545628+eax) = edx; //mov
	to32i(dword_545828+eax) = edi; //mov
	to32i(dword_545728+eax) = edx; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_475B77;
	inc(ebx);
	add(esi, (int32_t)0x10);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_475B70;
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_475BA0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	ebp = edx; //mov
	esi = ebx; //mov
	edx = ecx; //mov
	and_(edi, (int32_t)0xF);
	test(ecx, ecx);
	if (jnz())
		goto loc_475BD2;
	eax = edi; //mov
	ecx = (int32_t)(intptr_t)(ebp*4+0); //lea
	shl(eax, (int32_t)4);
	add(ecx, eax);
	eax = to32i(dword_540F48); //mov
	sub(eax, to32i(dword_54562C+ecx));
	test(eax, eax);
	if (jle())
		goto loc_475C22;
loc_475BD2:
	ecx = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(dword_540F48); //mov
	to32i(dword_54562C+ecx) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(eax, ebp);
	to32i(esp+8) = ecx; //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	sub(eax, edi);
	shl(eax, (int32_t)4);
	ebx = (int32_t)(intptr_t)(eax+ecx); //lea
	to32i(esp) = ebx; //mov
	ebx = to32i(esp+8); //mov
	cmp(to32i(dword_54582C+ebx), (int32_t)0);
	if (jnz())
		goto loc_475C42;
	test(edx, edx);
	if (jz())
		goto loc_475C29;
loc_475C22:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_475C29:
	edi = to32i(esp); //mov
	edx = 1; //mov
	edi = (int32_t)(intptr_t)(dword_54532C+edi); //lea
	to32i(dword_54582C+ebx) = edx; //mov
	movsd();
	movsd();
	movsd();
	goto loc_475C22;
loc_475C42:
	add(eax, (int32_t)(intptr_t)dword_54532C);
	add(eax, ecx);
	to32i(esp+4) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_475C86;
	ebx = 0x3333; //mov
	edx = esi; //mov
	esp -= 4; _sub_470E70(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_475C73;
	push32(eax);
	ebx = to32i(esp+8); //mov
	ecx = esi; //mov
	push32(2);
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_475CD0(); esp += 4; //call
loc_475C73:
	shl(edi, (int32_t)4);
	xor_(eax, eax);
	to32i(dword_54582C+edi+ebp*4) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_475C86:
	ebx = 0x8000; //mov
	edx = esi; //mov
	esp -= 4; _sub_470E70(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_475C22;
	push32(eax);
	ebx = to32i(esp+8); //mov
	ecx = esi; //mov
	push32(1);
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_475CD0(); esp += 4; //call
	eax = to32i(esp+8); //mov
	to32i(dword_54582C+eax) = 1; //mov
	edi = to32i(esp); //mov
	edi = (int32_t)(intptr_t)(dword_54532C+edi); //lea
	movsd();
	movsd();
	movsd();
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_475CD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	edi = eax; //mov
	to32i(esp+0x10) = edx; //mov
	ebp = ebx; //mov
	esi = ecx; //mov
	ecx = to32i(esp+0x28); //mov
	ebx = 0xE0000; //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_470E70(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_475D78;
	cmp(ecx, (int32_t)3);
	if (jge())
		goto loc_475D5B;
	eax = to32i(esi); //mov
	add(eax, eax);
	sar(eax, (int32_t)1);
	to32i(esp) = eax; //mov
	eax = to32i(esi+4); //mov
	edx = to32i(esp+0x10); //mov
	add(eax, eax);
	inc(ecx);
	sar(eax, (int32_t)1);
	ebx = ebp; //mov
	to32i(esp+4) = eax; //mov
	push32(ecx);
	eax = to32i(esi+8); //mov
	to32i(esp+0x10) = ecx; //mov
	add(eax, eax);
	push32(1);
	sar(eax, (int32_t)1);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	to32i(esp+0x10) = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_475CD0(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	ecx = to32i(esp+0x24); //mov
	push32(edx);
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	eax = edi; //mov
	push32(ecx);
	edx = to32i(esp+0x18); //mov
	ecx = esi; //mov
	esp -= 4; _sub_475CD0(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_475D5B:
	ecx = to32i(esp+0x24); //mov
	edx = to32i(esp+0x10); //mov
	ebx = ebp; //mov
	push32(ecx);
	eax = edi; //mov
	ecx = esi; //mov
	esp -= 4; _sub_47F740(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_475D78:
	edx = to32i(esp+0x24); //mov
	ecx = esi; //mov
	ebx = ebp; //mov
	push32(edx);
	eax = edi; //mov
	edx = to32i(esp+0x14); //mov
	esp -= 4; _sub_47F740(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_475DA0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(dword_54592C); //mov
	eax = to32i(dword_540F48); //mov
	sub(eax, edx);
	cmp(eax, (int32_t)4);
	if (jg())
		goto loc_475DB9;
	pop32(edx);
	pop32(ecx);
	return;
loc_475DB9:
	push32(ebx);
	eax = to32i(dword_540F48); //mov
	to32i(dword_54592C) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	test(al, (int8_t)7);
	if (jz())
		goto loc_475DE2;
	edx = 2; //mov
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_474674(); esp += 4; //call
	add(to32i(eax+0x20), (int32_t)0xF5C);
loc_475DE2:
	edx = 3; //mov
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_474674(); esp += 4; //call
	add(to32i(eax+0x20), (int32_t)0xF5C);
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_475E00()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	eax = ebx; //mov
	edx = ecx; //mov
	ebx = to32i(esp+0xC); //mov
	and_(esi, (int32_t)0xF);
	cmp(ecx, (int32_t)8);
	if (jnz())
		goto loc_475E34;
loc_475E16:
	shl(edi, (int32_t)2);
	shl(esi, (int32_t)4);
	add(edi, esi);
	esi = to32i(dword_540F48); //mov
	sub(esi, to32i(dword_54572C+edi));
	cmp(esi, (int32_t)2);
	if (jg())
		goto loc_475E57;
loc_475E2F:
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_475E34:
	cmp(ecx, (int32_t)7);
	if (jz())
		goto loc_475E16;
	cmp(ecx, (int32_t)9);
	if (jz())
		goto loc_475E16;
	shl(edi, (int32_t)2);
	shl(esi, (int32_t)4);
	add(edi, esi);
	esi = to32i(dword_540F48); //mov
	sub(esi, to32i(dword_54572C+edi));
	cmp(esi, (int32_t)5);
	if (jle())
		goto loc_475E2F;
loc_475E57:
	esi = to32i(dword_540F48); //mov
	to32i(dword_54572C+edi) = esi; //mov
	esp -= 4; _sub_474674(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_475E70()
{
	push32(ebp);
	ebp = eax; //mov
	cmp(to8i(eax), (int8_t)0);
	if (jnz())
		goto loc_475E8D;
	eax = to32i(ebp+4); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_475E86;
	pop32(ebp);
	return;
loc_475E86:
	_ExitProcess0();
loc_475E8D:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = ebx; //mov
	edi = edx; //mov
	esi = to32i(ebp+8); //mov
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
	add(to32i(ebp+8), ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	pop32(ebp);
}
Fn(void) Game::_sub_475EB0()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)4);
	edx = eax; //mov
	cmp(to8i(eax), (int8_t)0);
	if (jz())
		goto loc_475ED0;
	eax = to32i(edx+8); //mov
	al = to8i(eax); //mov
	to8i(esp) = al; //mov
	inc(to32i(edx+8));
loc_475EC7:
	al = to8i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
	return;
loc_475ED0:
	ebx = 1; //mov
	eax = to32i(edx+4); //mov
	edx = esp; //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_475EC7;
	_ExitProcess0();
}
Fn(void) Game::_sub_475F00()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)4);
	edx = eax; //mov
	cmp(to8i(eax), (int8_t)0);
	if (jz())
		goto loc_475F21;
	eax = to32i(edx+8); //mov
	eax = to32i(eax); //mov
	to32i(esp) = eax; //mov
	add(to32i(edx+8), (int32_t)4);
loc_475F18:
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
	return;
loc_475F21:
	ebx = 4; //mov
	eax = to32i(edx+4); //mov
	edx = esp; //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_475F18;
	_ExitProcess0();
}
Fn(void) Game::_sub_475F50()
{
	push32(edx);
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_475F73;
	push32(ecx);
	cmp(to8i(eax), (int8_t)0);
	if (jnz())
		goto loc_475F6B;
	ecx = to32i(edx+4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_475F6B;
	eax = ecx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
loc_475F6B:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ecx);
loc_475F73:
	pop32(edx);
}
Fn(void) Game::_sub_475F80()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	ebp = edx; //mov
	to32i(esp+8) = ebx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGame_14; //mov
	ecx = 0xC; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aUdffhandle; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	ecx = 1; //mov
	edx = 0xC; //mov
	esp -= 4; _sub_4844C4(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_475FF7;
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_475FED;
	ebp = (int32_t)(intptr_t)aCNfs2seGame_14; //mov
	eax = 0x10; //mov
	push32(aUdff_openaNotE);
	to32i(dword_4DB1D8) = ebp; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_475FED:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_475FF7:
	test(edi, edi);
	if (jnz())
		goto loc_47603E;
	test(ebp, ebp);
	if (jnz())
		goto loc_47603E;
loc_475FFF:
	test(esi, esi);
	if (jz())
		goto loc_47600A;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_47600A:
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_475FED;
	ebx = (int32_t)(intptr_t)aCNfs2seGame_14; //mov
	esi = 0x18; //mov
	push32(aUdff_openaBadU);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_47603E:
	test(edi, edi);
	if (jz())
		goto loc_476046;
	test(ebp, ebp);
	if (jnz())
		goto loc_475FFF;
loc_476046:
	test(ebp, ebp);
	if (jz())
		goto loc_476061;
	to32i(esi+4) = 0; //mov
	to8i(esi) = 1; //mov
	to32i(esi+8) = ebp; //mov
loc_476057:
	eax = esi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_476061:
	eax = to32i(esp+8); //mov
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	ebx = esp; //mov
	to32i(esp) = ebp; //mov
	to32i(esp+4) = ebp; //mov
	edx = (int32_t)(intptr_t)(esi+4); //lea
	push32(eax);
	to8i(esi) = 0; //mov
	eax = edi; //mov
	to32i(esi+8) = ebp; //mov
	esp -= 4; _sub_487668(); esp += 4; //call
	cmp(to32i(esi+4), (int32_t)0);
	if (jnz())
		goto loc_476057;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4760F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	ebp = edx; //mov
	edi = esp; //mov
	esi = eax; //mov
	push32(edi);
loc_476102:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_47611A;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_476102;
loc_47611A:
	pop32(edi);
	esi = (int32_t)(intptr_t)a_bnk; //mov
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
loc_47612D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_476145;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47612D;
loc_476145:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_486F50(); esp += 4; //call
	ecx = eax; //mov
	ebx = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_485364(); esp += 4; //call
	cmp(eax, (int32_t)7);
	if (jz())
		goto loc_476193;
loc_476164:
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(eax, ebp);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(esp+0x100); //mov
	to32i(dword_50B418+ecx) = ebx; //mov
	to32i(dword_50B410+ecx) = eax; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476193:
	edx = (int32_t)(intptr_t)aCNfs2seGamePcA; //mov
	ebx = 0x310; //mov
	eax = to32i(esp+0x100); //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_485160(); esp += 4; //call
	edx = eax; //mov
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aBhdr; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(esp+0x100); //mov
	ebx = eax; //mov
	esp -= 4; _sub_485218(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_476164;
}
Fn(void) Game::_sub_4761E0()
{
	push32(edx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_486404(); esp += 4; //call
	edx = to32i(dword_50B418); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4761F7;
	pop32(edx);
	return;
loc_4761F7:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_50B418) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_476210()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
loc_476215:
	ecx = to32i(dword_50B418+edx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_47622B;
	add(edx, (int32_t)0xC);
	cmp(edx, (int32_t)0x6C);
	if (jnz())
		goto loc_476215;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47622B:
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_50B418+edx) = ebx; //mov
	add(edx, (int32_t)0xC);
	cmp(edx, (int32_t)0x6C);
	if (jnz())
		goto loc_476215;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_476250()
{
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto locret_476262;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_476263;
locret_476262:
	return;
loc_476263:
	push32(ecx);
	esp -= 4; _sub_495990(); esp += 4; //call
	eax = to32i(dword_4D96A8); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4939AC(); esp += 4; //call
	to32i(dword_4D96A8) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_476280()
{
	push32(ecx);
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_476293;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_476295;
loc_476293:
	pop32(ecx);
	return;
loc_476295:
	xor_(eax, eax);
	esp -= 4; _sub_489800(); esp += 4; //call
	esp -= 4; _sub_495B2C(); esp += 4; //call
	cmp(to8i(byte_4D96A4), (int8_t)0);
	if (jz())
		goto loc_4762CC;
	esp -= 4; _sub_495990(); esp += 4; //call
loc_4762AF:
	ecx = to32i(dword_545940); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_476293;
	push32(ebx);
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_545940) = ebx; //mov
	pop32(ebx);
	pop32(ecx);
	return;
loc_4762CC:
	esp -= 4; _sub_49DFEC(); esp += 4; //call
	goto loc_4762AF;
}
Fn(void) Game::_sub_4762E0()
{
	push32(ecx);
	push32(edx);
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_4762F4;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_4762F7;
loc_4762F4:
	pop32(edx);
	pop32(ecx);
	return;
loc_4762F7:
	eax = 0x64; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4864A0(); esp += 4; //call
loc_476303:
	esp -= 4; _sub_49FEF0(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_476315;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_476303;
loc_476315:
	esp -= 4; _sub_495B2C(); esp += 4; //call
	cmp(to8i(byte_4D96A4), (int8_t)0);
	if (jz())
		goto loc_476346;
	esp -= 4; _sub_495990(); esp += 4; //call
loc_476328:
	ecx = to32i(dword_545940); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4762F4;
	push32(ebx);
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_545940) = ebx; //mov
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
	return;
loc_476346:
	esp -= 4; _sub_49DFEC(); esp += 4; //call
	goto loc_476328;
}
Fn(void) Game::_sub_476350()
{
	push32(ebx);
	push32(ebp);
	sub(esp, (int32_t)0x110);
	ebx = edx; //mov
	cmp(eax, (int32_t)0x63);
	if (jnz())
		goto loc_476361;
	xor_(eax, eax);
loc_476361:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_476443;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jz())
		goto loc_476443;
	cmp(eax, (int32_t)0x13);
	if (jg())
		goto loc_476443;
	test(eax, eax);
	if (jnz())
		goto loc_47644C;
	to32i(dword_4D5A38) = eax; //mov
loc_476391:
	cmp(to32i(dword_4D5A08), (int32_t)1);
	if (jnz())
		goto loc_4763AB;
	cmp(eax, (int32_t)9);
	if (jge())
		goto loc_4763AB;
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jz())
		goto loc_4763AB;
	add(eax, (int32_t)9);
loc_4763AB:
	push32(edi);
	push32(esi);
	push32(ecx);
	cmp(eax, (int32_t)0x12);
	if (jz())
		goto loc_47645B;
	edx = to32i(off_4D9758+eax*4); //mov
	push32(edx);
	ecx = to32i(dword_5134A0); //mov
	push32(ecx);
	push32(aSS_4);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_4763D8:
	esi = (int32_t)(intptr_t)a_asf; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
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
loc_4763EA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_476402;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4763EA;
loc_476402:
	pop32(edi);
	eax = (int32_t)(intptr_t)(esp+0x10C); //lea
	esp -= 4; _sub_485380(); esp += 4; //call
	xor_(al, al);
	edx = (int32_t)(intptr_t)(esp+0x10C); //lea
	to8i(esp+0x114) = al; //mov
	eax = to32i(dword_4D96A8); //mov
	esp -= 4; _sub_4958D0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	xor_(edx, edx);
	esp -= 4; _sub_4959EC(); esp += 4; //call
	eax = 0x64; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
loc_476443:
	add(esp, (int32_t)0x110);
	pop32(ebp);
	pop32(ebx);
	return;
loc_47644C:
	to32i(dword_4D5A38) = 1; //mov
	goto loc_476391;
loc_47645B:
	cmp(to8i(byte_4D97AA), (int8_t)0);
	if (jz())
		goto loc_476491;
	eax = to32i(dword_5134A0); //mov
	push32(eax);
	push32(aSshow2);
loc_47646F:
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	cmp(to8i(byte_4D97AA), (int8_t)0);
	if (jnz())
		goto loc_47649F;
	al = 1; //mov
	to8i(byte_4D97AA) = al; //mov
	goto loc_4763D8;
loc_476491:
	ebp = to32i(dword_5134A0); //mov
	push32(ebp);
	push32(aSshow);
	goto loc_47646F;
loc_47649F:
	xor_(al, al);
	to8i(byte_4D97AA) = al; //mov
	goto loc_4763D8;
}
Fn(void) Game::_sub_4764B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	ebp = eax; //mov
	to32i(esp+0x100) = edx; //mov
	ebx = 0x5DC; //mov
	cmp(eax, (int32_t)0x63);
	if (jnz())
		goto loc_4764D0;
	xor_(ebp, eax);
loc_4764D0:
	xor_(ah, ah);
	dl = to8i(byte_512ECC); //mov
	to8i(byte_4D96A4) = ah; //mov
	test(dl, dl);
	if (jnz())
		goto loc_476525;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jz())
		goto loc_476525;
	cmp(ebp, (int32_t)0x13);
	if (jg())
		goto loc_476525;
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jnz())
		goto loc_476531;
	cmp(ebp, (int32_t)9);
	if (jge())
		goto loc_476531;
	cmp(to8i(byte_512F40), (int8_t)0);
	if (jbe())
		goto loc_476510;
	eax = ebp; //mov
	esp -= 4; _sub_4766D0(); esp += 4; //call
	ebp = eax; //mov
loc_476510:
	edx = to32i(esp+0x100); //mov
	eax = ebp; //mov
	esp -= 4; _sub_476350(); esp += 4; //call
	to8i(byte_4D96A4) = 1; //mov
loc_476525:
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476531:
	test(ebp, ebp);
	if (jnz())
		goto loc_476668;
	to32i(dword_4D5A38) = ebp; //mov
loc_47653F:
	cmp(to32i(dword_4D5A08), (int32_t)1);
	if (jnz())
		goto loc_476550;
	cmp(ebp, (int32_t)9);
	if (jge())
		goto loc_476550;
	add(ebp, (int32_t)9);
loc_476550:
	cmp(ebp, (int32_t)0x12);
	if (jz())
		goto loc_476677;
	ecx = to32i(off_4D9758+ebp*4); //mov
	push32(ecx);
	esi = to32i(dword_5134A0); //mov
	push32(esi);
	push32(aSS_4);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_47657A:
	esi = (int32_t)(intptr_t)a_map; //mov
	edi = esp; //mov
	edx = 0x20; //mov
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
loc_47658F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4765A7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47658F;
loc_4765A7:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_545940) = eax; //mov
	esp -= 4; _sub_49DDD4(); esp += 4; //call
	edi = to32i(dword_513484); //mov
	push32(edi);
	push32(aStemp);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esi = (int32_t)(intptr_t)a_mus; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edi = esp; //mov
	edx = esp; //mov
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
loc_4765E4:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4765FC;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4765E4;
loc_4765FC:
	pop32(edi);
	eax = to32i(dword_4D96A8); //mov
	esp -= 4; _sub_49DE70(); esp += 4; //call
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4864A0(); esp += 4; //call
	edx = to32i(esp+0x100); //mov
	eax = 0x64; //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_476525;
	test(ebp, ebp);
	if (jz())
		goto loc_476525;
	cmp(ebp, (int32_t)9);
	if (jz())
		goto loc_476525;
	al = (int32_t)(intptr_t)byte_4D96B8[ebp*4]; //mov
	to8i(byte_4D5A04) = al; //mov
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_4D5A04); //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476668:
	to32i(dword_4D5A38) = 1; //mov
	goto loc_47653F;
loc_476677:
	cmp(to8i(byte_4D97A9), (int8_t)0);
	if (jz())
		goto loc_4766AE;
	edx = to32i(dword_5134A0); //mov
	push32(edx);
	push32(aSshow2);
loc_47668C:
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	cmp(to8i(byte_4D97A9), (int8_t)0);
	if (jnz())
		goto loc_4766BB;
	al = 1; //mov
	to8i(byte_4D97A9) = al; //mov
	goto loc_47657A;
loc_4766AE:
	eax = to32i(dword_5134A0); //mov
	push32(eax);
	push32(aSshow);
	goto loc_47668C;
loc_4766BB:
	xor_(al, al);
	to8i(byte_4D97A9) = al; //mov
	goto loc_47657A;
}
Fn(void) Game::_sub_4766D0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x40);
	ecx = 0x10; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4760A0; //mov
	dl = to8i(byte_512F3F); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(dl, dl);
	if (jnz())
		goto loc_476702;
	dh = to8i(byte_512F40); //mov
	cmp(dh, (int8_t)0x11);
	if (jz())
		goto loc_47670A;
	xor_(eax, eax);
	al = dh; //mov
	eax = to32i(esp+eax*4-4); //mov
loc_476702:
	add(esp, (int32_t)0x40);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_47670A:
	push32(ebx);
	bl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	dl = bl; //mov
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	ecx = 0x10; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	inc(bl);
	to8i(byte_50B480) = bl; //mov
	eax = to32i(esp+edx*4+4); //mov
	pop32(ebx);
	add(esp, (int32_t)0x40);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_476750()
{
	push32(ebx);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	ebx = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x100) = 0x5DC; //mov
	cmp(eax, (int32_t)0x63);
	if (jnz())
		goto loc_47676E;
	xor_(ebx, eax);
loc_47676E:
	xor_(ah, ah);
	dl = to8i(byte_512ECC); //mov
	to8i(byte_4D96A4) = ah; //mov
	test(dl, dl);
	if (jnz())
		goto loc_4768D1;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jz())
		goto loc_4768D1;
	cmp(ebx, (int32_t)0x13);
	if (jg())
		goto loc_4768D1;
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jnz())
		goto loc_4767AC;
	cmp(ebx, (int32_t)9);
	if (jl())
		goto loc_4768DA;
loc_4767AC:
	test(ebx, ebx);
	if (jnz())
		goto loc_4768F3;
	to32i(dword_4D5A38) = ebx; //mov
loc_4767BA:
	cmp(to32i(dword_4D5A08), (int32_t)1);
	if (jnz())
		goto loc_4767CB;
	cmp(ebx, (int32_t)9);
	if (jge())
		goto loc_4767CB;
	add(ebx, (int32_t)9);
loc_4767CB:
	push32(edi);
	push32(esi);
	push32(ecx);
	cmp(ebx, (int32_t)0x12);
	if (jz())
		goto loc_476902;
	esi = to32i(off_4D9758+ebx*4); //mov
	push32(esi);
	edi = to32i(dword_5134A0); //mov
	push32(edi);
	push32(aSS_4);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_4767F8:
	esi = (int32_t)(intptr_t)a_map; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = 0x20; //mov
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
loc_47680F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_476827;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47680F;
loc_476827:
	pop32(edi);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_545940) = eax; //mov
	esp -= 4; _sub_49DDD4(); esp += 4; //call
	cmp(ebx, (int32_t)0x12);
	if (jz())
		goto loc_476956;
	ecx = to32i(off_4D9708+ebx*4); //mov
	push32(ecx);
	ebx = to32i(dword_5134A0); //mov
	push32(ebx);
	push32(aSS_4);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_476865:
	esi = (int32_t)(intptr_t)a_mus; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = to32i(esp+0x10C); //mov
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
loc_47687E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_476896;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_47687E;
loc_476896:
	pop32(edi);
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	eax = to32i(dword_4D96A8); //mov
	esp -= 4; _sub_49DE70(); esp += 4; //call
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4864A0(); esp += 4; //call
	eax = 0x7F; //mov
	esp -= 4; _sub_49DAB0(); esp += 4; //call
	edx = ebp; //mov
	eax = 0x64; //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
loc_4768D1:
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(ebx);
	return;
loc_4768DA:
	edx = ebp; //mov
	eax = ebx; //mov
	esp -= 4; _sub_476350(); esp += 4; //call
	to8i(byte_4D96A4) = 1; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(ebx);
	return;
loc_4768F3:
	to32i(dword_4D5A38) = 1; //mov
	goto loc_4767BA;
loc_476902:
	cmp(to8i(byte_4D97A8), (int8_t)0);
	if (jnz())
		goto loc_476934;
	al = 1; //mov
loc_47690D:
	to8i(byte_4D97A8) = al; //mov
	test(al, al);
	if (jz())
		goto loc_476938;
	ecx = to32i(dword_5134A0); //mov
	push32(ecx);
	push32(aSshow2);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_4767F8;
loc_476934:
	xor_(al, al);
	goto loc_47690D;
loc_476938:
	edx = to32i(dword_5134A0); //mov
	push32(edx);
	push32(aSshow);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_4767F8;
loc_476956:
	cmp(to8i(byte_4D97A8), (int8_t)0);
	if (jz())
		goto loc_47697D;
	edx = to32i(dword_5134A0); //mov
	push32(edx);
	push32(aSshow2);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_476865;
loc_47697D:
	eax = to32i(dword_5134A0); //mov
	push32(eax);
	push32(aSshow);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_476865;
}
Fn(void) Game::_sub_4769A0()
{
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto locret_4769B2;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_4769B3;
locret_4769B2:
	return;
loc_4769B3:
	push32(edx);
	push32(ebx);
	edx = 0x4000; //mov
	shl(eax, (int32_t)0xA);
	xor_(ebx, ebx);
	esp -= 4; _sub_493718(); esp += 4; //call
	to32i(dword_4D96A8) = eax; //mov
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_4769D0()
{
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto locret_4769E2;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_4769E3;
locret_4769E2:
	return;
loc_4769E3:
	push32(edx);
	push32(ebx);
	edx = 0x4000; //mov
	eax = 0x4B000; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_493718(); esp += 4; //call
	to32i(dword_4D96A8) = eax; //mov
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_476A00()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x120);
	ecx = eax; //mov
	esi = 0x80000; //mov
	xor_(edi, edi);
	ah = to8i(byte_512F3F); //mov
	to32i(esp+0x11C) = edi; //mov
	test(ah, ah);
	if (jz())
		goto loc_476B83;
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_476B83;
	cmp(to32i(dword_4D5A08), (int32_t)1);
	if (jnz())
		goto loc_476A46;
	cmp(ecx, (int32_t)9);
	if (jge())
		goto loc_476A46;
	add(ecx, (int32_t)9);
loc_476A46:
	push32(edx);
	push32(ebx);
	ebp = (int32_t)(intptr_t)aCNfs2seGamePcA; //mov
	eax = 0x15A; //mov
	edx = esi; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = eax; //mov
	eax = (int32_t)(intptr_t)aBufptr; //mov
	to32i(dword_4DB1D8) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(off_4D9708+ecx*4); //mov
	push32(edx);
	ecx = to32i(dword_5134A0); //mov
	push32(ecx);
	push32(aSS_mus);
	ebp = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	ebx = to32i(dword_513484); //mov
	push32(ebx);
	push32(aStemp_mus);
	eax = (int32_t)(intptr_t)(esp+0x90); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_49E380(); esp += 4; //call
	to32i(esp+0x120) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_488570(); esp += 4; //call
	goto loc_476ACE;
loc_476ACE:
	ecx = (int32_t)(intptr_t)(esp+0x118); //lea
	ebx = (int32_t)(intptr_t)(esp+0x108); //lea
	edx = (int32_t)(intptr_t)(esp+0x110); //lea
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4877B4(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(esp+0x11C); //lea
	ebx = (int32_t)(intptr_t)(esp+0x10C); //lea
	edx = (int32_t)(intptr_t)(esp+0x114); //lea
	eax = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_4877C4(); esp += 4; //call
loc_476B0D:
	eax = to32i(esp+0x120); //mov
	sub(eax, edi);
	cmp(eax, esi);
	if (jge())
		goto loc_476B27;
	to32i(esp+0x124) = 1; //mov
	esi = eax; //mov
loc_476B27:
	eax = to32i(esp+0x110); //mov
	edx = edi; //mov
	esp -= 4; _sub_487968(); esp += 4; //call
	ebx = esi; //mov
	eax = to32i(esp+0x110); //mov
	edx = ebp; //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x114); //mov
	ebx = esi; //mov
	edx = ebp; //mov
	esp -= 4; _sub_487960(); esp += 4; //call
	eax = to32i(esp+0x124); //mov
	add(edi, esi);
	test(eax, eax);
	if (jz())
		goto loc_476B0D;
	eax = to32i(esp+0x110); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = to32i(esp+0x114); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ebx);
	pop32(edx);
loc_476B83:
	add(esp, (int32_t)0x120);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_476BB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x8C);
	edx = to32i(dword_513484); //mov
	push32(edx);
	push32(aStemp_mus);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = esp; //mov
	esi = 0xF00000; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_476C28;
loc_476BE3:
	ecx = (int32_t)(intptr_t)(esp+0x84); //lea
	ebx = (int32_t)(intptr_t)(esp+0x88); //lea
	edx = (int32_t)(intptr_t)(esp+0x80); //lea
	eax = esp; //mov
	esp -= 4; _sub_4877C4(); esp += 4; //call
	eax = to32i(esp+0x80); //mov
	edx = esi; //mov
	esp -= 4; _sub_4599F0(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esp+0x80); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = edx; //mov
	add(esp, (int32_t)0x8C);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476C28:
	eax = esp; //mov
	esp -= 4; _sub_4879AE(); esp += 4; //call
	goto loc_476BE3;
}
Fn(void) Game::_sub_476C40()
{
	push32(edx);
	sub(esp, (int32_t)0x80);
	edx = to32i(dword_513484); //mov
	push32(edx);
	push32(aStemp_mus);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = esp; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_476C73;
	add(esp, (int32_t)0x80);
	pop32(edx);
	return;
loc_476C73:
	push32(ecx);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
	pop32(ecx);
	add(esp, (int32_t)0x80);
	pop32(edx);
}
Fn(void) Game::_sub_476CA0()
{
	cmp(to32i(dword_4D5A1C), (int32_t)0);
	if (jnz())
	{
		_sub_49FD50();
		return;
	}
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
	{
		_sub_49FD50();
		return;
	}
}
Fn(void) Game::_sub_49FD50()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_49FD5F;
	eax = 0xFFFFFFF6; //mov
	return;
loc_49FD5F:
	esp -= 4; _sub_49DB20(); esp += 4; //call
	cmp(to32i(dword_4DDA94), (int32_t)0);
	if (jz())
		goto loc_49FD73;
	call(to32i(dword_4DDA94));
loc_49FD73:
	cmp(to32i(dword_4DDA98), (int32_t)0);
	if (jz())
		goto loc_49FD82;
	call(to32i(dword_4DDA98));
loc_49FD82:
	cmp(to32i(dword_4DDA9C), (int32_t)0);
	if (jz())
		goto loc_49FD91;
	call(to32i(dword_4DDA9C));
loc_49FD91:
	cmp(to32i(dword_4DDA8C), (int32_t)0);
	if (jz())
		goto loc_49FDA5;
	eax = 0xFFFFFFFF; //mov
	call(to32i(dword_4DDA8C));
loc_49FDA5:
	cmp(to32i(dword_4DDAA0), (int32_t)0);
	if (jz())
		goto loc_49FDB4;
	call(to32i(dword_4DDAA0));
loc_49FDB4:
	cmp(to32i(dword_4DDA90), (int32_t)0);
	if (jz())
		goto loc_49FDC3;
	call(to32i(dword_4DDA90));
loc_49FDC3:
	push32(edx);
	esp -= 4; _sub_488BA4(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_49FDD9;
	push32(ebx);
	xor_(bl, bl);
	to8i(byte_4DDA74) = bl; //mov
	pop32(ebx);
loc_49FDD9:
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_476CC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	xor_(esi, esi);
	edi = to32i(dword_4D5A1C); //mov
	to32i(dword_4D96B0) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_476D1B;
loc_476CD6:
	test(eax, eax);
	if (jnz())
		goto loc_476D32;
	test(edx, edx);
	if (jnz())
		goto loc_476D32;
	and_(ebx, (int32_t)0x808);
	cmp(ebx, (int32_t)0x808);
	if (jz())
		goto loc_476D29;
loc_476CEC:
	edx = 0xFFFFFFFF; //mov
	eax = edx; //mov
loc_476CF3:
	esp -= 4; _sub_49FD00(); esp += 4; //call
	ecx = eax; //mov
loc_476CFA:
	test(ecx, ecx);
	if (jge())
		goto loc_476D9D;
	xor_(ecx, ecx);
	to32i(dword_4D5A20) = ecx; //mov
	to32i(dword_4D5A3C) = ecx; //mov
	to32i(dword_4D5A1C) = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476D1B:
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jnz())
		goto loc_476CD6;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476D29:
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	goto loc_476CF3;
loc_476D32:
	test(eax, eax);
	if (jnz())
		goto loc_476D52;
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_476D52;
	and_(ebx, (int32_t)0x804);
	cmp(ebx, (int32_t)0x804);
	if (jnz())
		goto loc_476CEC;
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	goto loc_476CF3;
loc_476D52:
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_476D72;
	test(edx, edx);
	if (jnz())
		goto loc_476D72;
	and_(ebx, (int32_t)0x802);
	cmp(ebx, (int32_t)0x802);
	if (jnz())
		goto loc_476CEC;
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	goto loc_476CF3;
loc_476D72:
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_476CFA;
	cmp(edx, eax);
	if (jnz())
		goto loc_476CFA;
	and_(ebx, (int32_t)0x801);
	cmp(ebx, (int32_t)0x801);
	if (jnz())
		goto loc_476CEC;
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	goto loc_476CF3;
loc_476D9D:
	esp -= 4; _sub_442130(); esp += 4; //call
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_48883C(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D96B4) = eax; //mov
	to32i(dword_4D96B0) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_476DC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	xor_(edx, edx);
	xor_(eax, eax);
loc_476DC9:
	to32i(dword_50B410+edx) = eax; //mov
	inc(eax);
	add(edx, (int32_t)0xC);
	cmp(eax, (int32_t)9);
	if (jl())
		goto loc_476DC9;
	edi = (uint8_t)to8i(byte_512F3E); //movzx
	esi = to32i(dword_4D5A1C); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	bl = to8i(byte_512DFF); //mov
	to32i(dword_4D96B0) = edx; //mov
	dl = to8i(byte_512F41); //mov
	test(esi, esi);
	if (jnz())
		goto loc_476E08;
	cmp(to32i(dword_4D5A20), (int32_t)0);
	if (jz())
		goto loc_476E60;
loc_476E08:
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_48883C(); esp += 4; //call
	esi = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_476E6F;
	test(ebx, ebx);
	if (jnz())
		goto loc_476E6F;
	and_(esi, (int32_t)0x808);
	cmp(esi, (int32_t)0x808);
	if (jz())
		goto loc_476E66;
loc_476E2A:
	edx = 0xFFFFFFFF; //mov
	eax = edx; //mov
loc_476E31:
	esp -= 4; _sub_49FD00(); esp += 4; //call
	ecx = eax; //mov
loc_476E38:
	test(ecx, ecx);
	if (jl())
		goto loc_476ECA;
	test(edi, edi);
	if (jz())
		goto loc_476EE4;
	xor_(eax, eax);
loc_476E4A:
	esp -= 4; _sub_488898(); esp += 4; //call
	esp -= 4; _sub_442130(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D96B4) = eax; //mov
	to32i(dword_4D96B0) = eax; //mov
loc_476E60:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476E66:
	edx = 0xFFFFFFFF; //mov
	eax = esi; //mov
	goto loc_476E31;
loc_476E6F:
	test(edx, edx);
	if (jnz())
		goto loc_476E8B;
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_476E8B;
	and_(eax, (int32_t)0x804);
	cmp(eax, (int32_t)0x804);
	if (jnz())
		goto loc_476E2A;
	edx = 0xFFFFFFFF; //mov
	goto loc_476E31;
loc_476E8B:
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_476EA7;
	test(ebx, ebx);
	if (jnz())
		goto loc_476EA7;
	and_(eax, (int32_t)0x802);
	cmp(eax, (int32_t)0x802);
	if (jnz())
		goto loc_476E2A;
	edx = 0xFFFFFFFF; //mov
	goto loc_476E31;
loc_476EA7:
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_476E38;
	cmp(ebx, edx);
	if (jnz())
		goto loc_476E38;
	and_(eax, (int32_t)0x801);
	cmp(eax, (int32_t)0x801);
	if (jnz())
		goto loc_476E2A;
	edx = 0xFFFFFFFF; //mov
	goto loc_476E31;
loc_476ECA:
	xor_(ecx, ecx);
	to32i(dword_4D5A20) = ecx; //mov
	to32i(dword_4D5A3C) = ecx; //mov
	to32i(dword_4D5A1C) = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_476EE4:
	eax = 0xFFFFFFCE; //mov
	goto loc_476E4A;
}
Fn(void) Game::_sub_476EF0()
{
	push32(edx);
	edx = to32i(dword_4D97AC); //mov
	test(edx, edx);
	if (jnz())
		goto loc_476EFD;
	pop32(edx);
	return;
loc_476EFD:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D97AC) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_476F10()
{
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
	ecx = to32i(dword_4D97AC); //mov
	to32i(dword_4D97B0) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_476F27;
	pop32(edx);
	pop32(ecx);
	return;
loc_476F27:
	push32(esi);
	push32(ebx);
	ebx = (int32_t)(intptr_t)aCNfs2seGamePcC; //mov
	esi = 0x2EC; //mov
	edx = 0x14820; //mov
	eax = (int32_t)(intptr_t)aDraw_tpixmap; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	to32i(dword_4D97AC) = eax; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_476F60()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	to32i(esp+0x5C) = eax; //mov
	esi = edx; //mov
	eax = to32i(edx); //mov
	and_(eax, (int32_t)0xF);
	eax = to32i(dword_511B88+eax*4); //mov
	to32i(edx+0x610) = eax; //mov
	edx = to32i(esp+0x5C); //mov
	to32i(edx+0x88) = eax; //mov
	edx = to32i(esi); //mov
	and_(edx, (int32_t)0xF);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ebx = to32i(esi+0x21C); //mov
	eax = to32i(dword_5119C8+eax*4); //mov
	xor_(edx, edx);
	to32i(esi+0x614) = eax; //mov
	eax = esi; //mov
	ebx = to32i(ebx+0xC); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4773F0(); esp += 4; //call
	eax = to32i(dword_4D97B0); //mov
	edx = to32i(esp+0x5C); //mov
	to32i(esi+0x618) = eax; //mov
	to32i(esp+0x50) = ecx; //mov
	to32i(edx+0x84) = eax; //mov
	edx = 1; //mov
	to32i(esi+0x61C) = eax; //mov
	eax = to32i(esp+0x5C); //mov
	to32i(dword_4D97B8) = edx; //mov
	to32i(esp+0x54) = eax; //mov
loc_476FEB:
	edx = to32i(esp+0x54); //mov
	edx = to32i(edx+4); //mov
	eax = to32i(esp+0x50); //mov
	ebx = to32i(edx+4); //mov
	shl(eax, (int32_t)2);
	test(ebx, ebx);
	if (jnz())
		goto loc_477033;
loc_477000:
	edi = to32i(esp+0x50); //mov
	ebx = to32i(esp+0x54); //mov
	inc(edi);
	add(ebx, (int32_t)4);
	to32i(esp+0x50) = edi; //mov
	to32i(esp+0x54) = ebx; //mov
	cmp(edi, (int32_t)0x20);
	if (jl())
		goto loc_476FEB;
	esp -= 4; _sub_47F0A0(); esp += 4; //call
	to32i(off_4DA200) = eax; //mov
	xor_(eax, eax);
	to32i(dword_4D97B8) = eax; //mov
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_477033:
	edx = to32i(esp+0x54); //mov
	to32i(esp+0x58) = eax; //mov
	xor_(edi, edi);
	to32i(esp+0x68) = edx; //mov
	ebp = edx; //mov
	to32i(esp+0x4C) = edi; //mov
	to32i(esp+0x60) = edi; //mov
loc_47704B:
	eax = to32i(esp+0x5C); //mov
	add(eax, to32i(esp+0x58));
	eax = to32i(eax+4); //mov
	edx = to32i(esp+0x60); //mov
	cmp(edx, to32i(eax+4));
	if (jge())
		goto loc_477000;
	ebx = to32i(esp+0x4C); //mov
	eax = to32i(eax+0x18); //mov
	add(eax, ebx);
	dl = to8i(eax); //mov
	test(dl, (int8_t)0xE0);
	if (jz())
		goto loc_4771AE;
	al = dl; //mov
	and_(eax, (int32_t)0xFF);
	sar(eax, (int32_t)5);
	to32i(esp+0x64) = eax; //mov
loc_477081:
	xor_(eax, eax);
	edx = to32i(esp+0x64); //mov
	to32i(esp+0x48) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_477195;
	eax = to32i(esp+0x4C); //mov
	edi = eax; //mov
	to32i(esp+0x44) = eax; //mov
loc_47709D:
	eax = to32i(ebp+4); //mov
	eax = to32i(eax+0x18); //mov
	al = to8i(edi+eax+8); //mov
	to8i(esp+0x38) = al; //mov
	eax = to32i(ebp+4); //mov
	eax = to32i(eax+0x18); //mov
	al = to8i(edi+eax+9); //mov
	to8i(esp+0x39) = al; //mov
	eax = to32i(ebp+4); //mov
	eax = to32i(eax+0x18); //mov
	al = to8i(edi+eax+0xA); //mov
	to8i(esp+0x3A) = al; //mov
	eax = to32i(ebp+4); //mov
	eax = to32i(eax+0x18); //mov
	al = to8i(edi+eax+0xB); //mov
	bl = to8i(esp+0x39); //mov
	to8i(esp+0x3B) = al; //mov
	al = to8i(esp+0x48); //mov
	xor_(dh, dh);
	add(bl, al);
	to8i(esp+0x3C) = dh; //mov
	to8i(esp+0x39) = bl; //mov
	eax = to32i(ebp+4); //mov
	eax = to32i(eax+0x18); //mov
	add(eax, edi);
	bh = to8i(eax); //mov
	test(bh, (int8_t)4);
	if (jz())
		goto loc_4771E8;
	test(bh, (int8_t)1);
	if (jz())
		goto loc_4771BB;
	ecx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x38); //lea
	ebx = to32i(esi+0x614); //mov
	eax = to32i(esi+0x610); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	imul32(ebx, to32i(dword_4D97B0), 0x1C);
	eax = to32i(dword_4D97AC); //mov
	edx = 4; //mov
loc_47712D:
	add(ebx, eax);
	eax = esp; //mov
loc_477131:
	esp -= 4; _sub_435104(); esp += 4; //call
	edx = to32i(esp+0x5C); //mov
	ax = to16i(dword_4D97B0); //mov
	bx = to16i(edx+0x84); //mov
	edx = eax; //mov
	eax = to32i(esp+0x68); //mov
	ecx = to32i(esp+0x48); //mov
	sub(edx, ebx);
	eax = to32i(eax+4); //mov
	sub(edx, ecx);
	ecx = to32i(esp+0x44); //mov
	eax = to32i(eax+0x18); //mov
	add(eax, ecx);
	to16i(eax+2) = dx; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax+4); //mov
	eax = to32i(eax+0x18); //mov
	edx = to32i(esp+0x48); //mov
	add(eax, ecx);
	inc(edx);
	to8i(eax+1) = 0; //mov
	eax = to32i(dword_4D97B0); //mov
	to32i(esp+0x48) = edx; //mov
	inc(eax);
	ecx = to32i(esp+0x64); //mov
	to32i(dword_4D97B0) = eax; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_47709D;
loc_477195:
	edi = to32i(esp+0x60); //mov
	ebx = to32i(esp+0x4C); //mov
	inc(edi);
	add(ebx, (int32_t)0xC);
	to32i(esp+0x60) = edi; //mov
	to32i(esp+0x4C) = ebx; //mov
	goto loc_47704B;
loc_4771AE:
	to32i(esp+0x64) = 1; //mov
	goto loc_477081;
loc_4771BB:
	ecx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x38); //lea
	ebx = to32i(esi+0x614); //mov
	eax = to32i(esi+0x610); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	imul32(ebx, to32i(dword_4D97B0), 0x1C);
	eax = to32i(dword_4D97AC); //mov
	edx = 2; //mov
	goto loc_47712D;
loc_4771E8:
	ecx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x38); //lea
	ebx = to32i(esi+0x614); //mov
	eax = to32i(esi+0x610); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	edx = 1; //mov
	eax = esp; //mov
	esp -= 4; _sub_435104(); esp += 4; //call
	imul32(ebx, to32i(dword_4D97B0), 0x1C);
	eax = to32i(dword_4D97AC); //mov
	edx = 3; //mov
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	goto loc_477131;
}
Fn(void) Game::_sub_477230()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	to32i(esp+0x20) = eax; //mov
	to32i(esp+4) = edx; //mov
	edx = ebx; //mov
	ebx = to32i(eax); //mov
	and_(ebx, (int32_t)0xF);
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, ebx);
	ebx = to32i(esp+0x20); //mov
	eax = to32i(dword_5119C8+esi+eax*4); //mov
	to32i(ebx+0x614) = eax; //mov
	eax = to32i(esp+0x20); //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4773F0(); esp += 4; //call
	edx = to32i(esp+0x20); //mov
	add(esi, edx);
	eax = to32i(dword_4D97B0); //mov
	to32i(esi+0x61C) = eax; //mov
	xor_(ecx, ecx);
	to32i(edx+0x618) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp+0x10) = eax; //mov
loc_477296:
	eax = to32i(esp+0x10); //mov
	eax = to32i(eax+4); //mov
	edx = to32i(esp+0xC); //mov
	ebx = to32i(eax+4); //mov
	shl(edx, (int32_t)2);
	test(ebx, ebx);
	if (jnz())
		goto loc_4772DF;
loc_4772AB:
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x10); //mov
	inc(edx);
	add(eax, (int32_t)4);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = eax; //mov
	cmp(edx, (int32_t)0x20);
	if (jl())
		goto loc_477296;
	eax = to32i(esp+0x20); //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(eax+0x61C); //mov
	to32i(edx+0x618) = eax; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4772DF:
	edi = to32i(esp+0x10); //mov
	xor_(esi, esi);
	to32i(esp+0x14) = edx; //mov
	to32i(esp) = esi; //mov
	to32i(esp+0x18) = esi; //mov
loc_4772F0:
	eax = to32i(esp+4); //mov
	add(eax, to32i(esp+0x14));
	eax = to32i(eax+4); //mov
	edx = to32i(esp+0x18); //mov
	cmp(edx, to32i(eax+4));
	if (jge())
		goto loc_4772AB;
	ebx = to32i(esp); //mov
	eax = to32i(eax+0x18); //mov
	add(eax, ebx);
	dl = to8i(eax); //mov
	test(dl, (int8_t)0xE0);
	if (jz())
		goto loc_4773DC;
	al = dl; //mov
	and_(eax, (int32_t)0xFF);
	sar(eax, (int32_t)5);
	to32i(esp+0x1C) = eax; //mov
loc_477325:
	ebp = to32i(esp+0x1C); //mov
	xor_(ecx, ecx);
	test(ebp, ebp);
	if (jle())
		goto loc_4773C5;
	esi = to32i(esp); //mov
	ebp = to32i(esp+4); //mov
loc_47733A:
	imul32(edx, to32i(dword_4D97B0), 0x1C);
	eax = to32i(dword_4D97AC); //mov
	ebx = (int32_t)(intptr_t)(eax+edx); //lea
	to32i(esp+8) = ebx; //mov
	ebx = to32i(edi+4); //mov
	edx = to32i(esp+0x20); //mov
	ebx = to32i(ebx+0x18); //mov
	edx = to32i(edx+0x614); //mov
	bx = to16i(esi+ebx+2); //mov
	and_(ebx, (int32_t)0xFFFF);
	add(ebx, to32i(ebp+0x84));
	add(ebx, ecx);
	imul32(ebx, 0x1C);
	add(eax, ebx);
	ebx = to32i(esp+8); //mov
	esp -= 4; _sub_4352A0(); esp += 4; //call
	edx = to32i(esp+0x20); //mov
	ax = to16i(dword_4D97B0); //mov
	bx = to16i(edx+0x618); //mov
	edx = eax; //mov
	eax = to32i(edi+4); //mov
	sub(edx, ebx);
	eax = to32i(eax+0x18); //mov
	sub(edx, ecx);
	to16i(esi+eax+2) = dx; //mov
	edx = to32i(dword_4D97B0); //mov
	eax = to32i(edi+4); //mov
	ebx = to32i(esp+0x1C); //mov
	inc(edx);
	eax = to32i(eax+0x18); //mov
	inc(ecx);
	to32i(dword_4D97B0) = edx; //mov
	to8i(esi+eax+1) = 0; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_47733A;
loc_4773C5:
	ebp = to32i(esp+0x18); //mov
	esi = to32i(esp); //mov
	inc(ebp);
	add(esi, (int32_t)0xC);
	to32i(esp+0x18) = ebp; //mov
	to32i(esp) = esi; //mov
	goto loc_4772F0;
loc_4773DC:
	to32i(esp+0x1C) = 1; //mov
	goto loc_477325;
}
Fn(void) Game::_sub_4773F0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x310);
	esi = eax; //mov
	edi = ebx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0xF);
	eax = to32i(dword_511B88+eax*4); //mov
	ecx = to32i(dword_4D97B4); //mov
	to32i(esi+0x610) = eax; //mov
	cmp(ecx, (int32_t)0x40);
	if (jl())
		goto loc_477423;
	xor_(ebx, ebx);
	to32i(dword_4D97B4) = ebx; //mov
loc_477423:
	ebp = to32i(dword_4D97B4); //mov
	eax = to32i(dword_4D97B4); //mov
	ecx = to32i(esi); //mov
	shl(ebp, (int32_t)0xA);
	ebx = eax; //mov
	and_(ecx, (int32_t)0xF);
	to32i(esi+0x614) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(ebp, (int32_t)(intptr_t)dword_545944);
	sub(eax, ecx);
	shl(edx, (int32_t)2);
	to32i(off_4DA200) = ebp; //mov
	to32i(dword_5119C8+edx+eax*4) = ebx; //mov
	edx = ebx; //mov
	ecx = 0x100; //mov
	inc(edx);
	eax = to32i(esi+0x610); //mov
	to32i(dword_4D97B4) = edx; //mov
	edx = esp; //mov
	ebx = esp; //mov
	esp -= 4; _sub_47F1C0(); esp += 4; //call
	eax = 2; //mov
	edx = edi; //mov
	esp -= 4; _sub_458430(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x300); //lea
	ecx = (int32_t)(intptr_t)(esp+0x30C); //lea
	push32(eax);
	eax = to32i(esi+0x21C); //mov
	ebx = (int32_t)(intptr_t)(esp+0x30C); //lea
	edx = (int32_t)(intptr_t)(esp+0x308); //lea
	eax = to32i(eax+0xC); //mov
	esp -= 4; _sub_458670(); esp += 4; //call
	ecx = to32i(esp+0x304); //mov
	ebp = to32i(off_4DA200); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_47755C;
loc_4774C6:
	xor_(esi, esi);
	xor_(al, al);
loc_4774CA:
	bh = to8i(esp+esi); //mov
	cmp(al, bh);
	if (jnz())
		goto loc_4774D8;
	cl = bh; //mov
	inc(cl);
	to8i(esp+esi) = cl; //mov
loc_4774D8:
	ch = to8i(esp+esi+1); //mov
	cmp(al, ch);
	if (jnz())
		goto loc_4774E8;
	ah = ch; //mov
	inc(ah);
	to8i(esp+esi+1) = ah; //mov
loc_4774E8:
	dl = to8i(esp+esi+2); //mov
	cmp(al, dl);
	if (jnz())
		goto loc_4774F8;
	dh = dl; //mov
	inc(dh);
	to8i(esp+esi+2) = dh; //mov
loc_4774F8:
	add(esi, (int32_t)3);
	cmp(esi, (int32_t)0x2FD);
	if (jl())
		goto loc_4774CA;
loc_477503:
	xor_(bl, bl);
	to8i(esp+esi) = bl; //mov
	xor_(bh, bh);
	to8i(esp+esi+1) = bl; //mov
	edi = ebp; //mov
	to8i(esp+esi+2) = bl; //mov
	xor_(esi, esi);
loc_477516:
	edx = ebp; //mov
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	to8i(edx+eax+3) = 0xFF; //mov
	edx = (int32_t)(intptr_t)(esi+esi*2); //lea
loc_477527:
	ecx = (int32_t)(intptr_t)(eax+ebp); //lea
	bl = to8i(esp+edx); //mov
	to8i(ecx+2) = bl; //mov
	bl = to8i(esp+edx+1); //mov
	add(edx, (int32_t)3);
	to8i(ecx+1) = bl; //mov
	inc(esi);
	bl = to8i(esp+edx-1); //mov
	add(eax, (int32_t)4);
	to8i(ecx) = bl; //mov
	cmp(eax, (int32_t)0x400);
	if (jge())
		goto loc_4775B8;
	cmp(eax, (int32_t)0x3FC);
	if (jnz())
		goto loc_477516;
	to8i(edi+eax+3) = bh; //mov
	goto loc_477527;
loc_47755C:
	cmp(to32i(esp+0x308), (int32_t)0);
	if (jnz())
		goto loc_4774C6;
	esi = to32i(esp+0x30C); //mov
	test(esi, esi);
	if (jnz())
		goto loc_4774C6;
	cmp(to32i(esp+0x300), (int32_t)0);
	if (jnz())
		goto loc_4774C6;
	al = 0x50; //mov
	xor_(ah, ah);
loc_47758B:
	cmp(al, to8i(esp+esi));
	if (jbe())
		goto loc_477593;
	to8i(esp+esi) = ah; //mov
loc_477593:
	cmp(al, to8i(esp+esi+1));
	if (jbe())
		goto loc_47759D;
	to8i(esp+esi+1) = ah; //mov
loc_47759D:
	cmp(al, to8i(esp+esi+2));
	if (jbe())
		goto loc_4775A7;
	to8i(esp+esi+2) = ah; //mov
loc_4775A7:
	add(esi, (int32_t)3);
	cmp(esi, (int32_t)0x2FD);
	if (jge())
		goto loc_477503;
	goto loc_47758B;
loc_4775B8:
	to32i(off_4DA200) = ebp; //mov
	add(esp, (int32_t)0x310);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_477620()
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
Fn(void) Game::_sub_477640()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0x10);
	edx = esi; //mov
	ah = to8i(byte_557518); //mov
	test(ah, ah);
	if (jnz())
		goto loc_47769C;
	push32(ecx);
	push32(ebx);
	ebx = 0x1C; //mov
	esi = (int32_t)(intptr_t)dword_55750C; //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	to8i(byte_557514) = al; //mov
	xor_(ecx, ecx);
	to32i(dword_557510) = ebx; //mov
	to32i(esp+0x10) = esi; //mov
	to32i(esp+0x14) = esi; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	bl = ah; //mov
	to32i(dword_55750C) = ecx; //mov
	inc(bl);
	movsd();
	movsd();
	to8i(byte_557518) = bl; //mov
	pop32(ebx);
	pop32(ecx);
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(edx);
	return;
loc_47769C:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_4776C0()
{
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_44B2A0(); esp += 4; //call
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_44B660(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4776EC;
	cmp(to8i(edx+0x2DE), (int8_t)0);
	if (jnz())
		goto loc_4776EC;
	eax = to32i(dword_51205C); //mov
	eax = to32i(dword_4D986C+eax*4); //mov
	pop32(edx);
	return;
loc_4776EC:
	eax = 0x1E0; //mov
	pop32(edx);
}
Fn(void) Game::_sub_477700()
{
	eax = to32i(dword_51205C); //mov
	shl(eax, (int32_t)3);
	add(eax, (int32_t)(intptr_t)dword_4D980C);
}
Fn(void) Game::_sub_477710()
{
	to32i(eax) = 0; //mov
	to32i(edx) = 0; //mov
	to32i(ebx) = 0; //mov
}
Fn(void) Game::_sub_477730()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_557500) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_nullsub_56()
{
	return;
}
Fn(void) Game::_sub_4777A0()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_4777B0()
{
	and_(eax, (int32_t)0xFF);
	if (jnz())
		goto loc_477810;
	test(to8i(dword_557968), (int8_t)0x20);
	if (jnz())
		goto loc_47780A;
loc_4777C4:
	cmp(eax, (int32_t)0x4B);
	if (jnz())
		goto loc_4777D2;
	test(to8i(dword_557968), (int8_t)4);
	if (jnz())
		goto loc_47780A;
loc_4777D2:
	cmp(eax, (int32_t)0x4D);
	if (jnz())
		goto loc_4777E0;
	test(to8i(dword_557968), (int8_t)8);
	if (jnz())
		goto loc_47780A;
loc_4777E0:
	cmp(eax, (int32_t)0x48);
	if (jnz())
		goto loc_4777EE;
	test(to8i(dword_557968), (int8_t)1);
	if (jnz())
		goto loc_47780A;
loc_4777EE:
	cmp(eax, (int32_t)0x50);
	if (jnz())
		goto loc_4777FC;
	test(to8i(dword_557968), (int8_t)2);
	if (jnz())
		goto loc_47780A;
loc_4777FC:
	cmp(eax, (int32_t)0x1C);
	if (jnz())
		goto loc_47781B;
	test(to8i(dword_557968), (int8_t)0x10);
	if (jz())
		goto loc_47781B;
loc_47780A:
	eax = 0xFF; //mov
	return;
loc_477810:
	cmp(byte_4DB2F4[eax], (int8_t)0);
	if (jz())
		goto loc_4777C4;
	goto loc_47780A;
loc_47781B:
	xor_(eax, eax);
}
Fn(void) Game::_sub_477820()
{
	and_(eax, (int32_t)0xFF);
	cmp(byte_4DB2F4[eax], (int8_t)0);
	if (jnz())
		goto loc_477831;
	xor_(eax, eax);
	return;
loc_477831:
	push32(edx);
	xor_(dh, dh);
	eax = 0xFF; //mov
	to8i(byte_4DB32B) = dh; //mov
	pop32(edx);
}
Fn(void) Game::_sub_477850()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	eax = processAxes(eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4778F0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	shr(eax, (int32_t)0x14);
	shr(edx, (int32_t)0x10);
	ecx = eax; //mov
	esp -= 4; _sub_4779A0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_557520; //mov
	shl(ecx, (int32_t)6);
	and_(edx, (int32_t)7);
	add(eax, ecx);
	shl(edx, (int32_t)2);
	add(eax, (int32_t)0x20);
	add(eax, edx);
	to32i(dword_557520+ecx+edx) = eax; //mov
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_477930()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	and_(eax, (int32_t)0x1F);
	shr(edx, (int32_t)0x10);
	cl = al; //mov
	eax = 1; //mov
	shl(edx, (int32_t)6);
	shl(eax, cl);
	test(to32i(dword_55755C+edx), eax);
	if (jz())
		goto loc_477956;
	eax = 0xFF; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_477956:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_477960()
{
	push32(edx);
	edx = eax; //mov
	shr(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0x10);
	if (jge())
		goto loc_477982;
	push32(ecx);
	and_(eax, (int32_t)0x1F);
	cl = al; //mov
	eax = 1; //mov
	shl(eax, cl);
	eax = ~eax;
	and_(to32i(dword_557920+edx*4), eax);
	pop32(ecx);
loc_477982:
	eax = edx; //mov
	esp -= 4; _sub_4779A0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_557520; //mov
	shl(edx, (int32_t)6);
	add(eax, edx);
	add(eax, (int32_t)0x3C);
	to32i(dword_55753C+edx) = eax; //mov
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_4779A0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)byte_55796C; //mov
loc_4779A9:
	edx = to8i(eax); //movsx
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_4779B8;
	cmp(edx, ecx);
	if (jz())
		goto loc_4779B8;
	inc(eax);
	goto loc_4779A9;
loc_4779B8:
	cmp(to8i(eax), (int8_t)0);
	if (jl())
		goto loc_4779C0;
	pop32(edx);
	pop32(ecx);
	return;
loc_4779C0:
	to8i(eax+1) = 0xFF; //mov
	to8i(eax) = cl; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4779D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	xor_(edx, edx);
	edi = (int32_t)(intptr_t)byte_55796C; //mov
	to32i(dword_557968) = edx; //mov
loc_4779E6:
	esi = to8i(edi); //movsx
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_477A1E;
	eax = esi; //mov
	shl(eax, (int32_t)6);
	add(eax, (int32_t)(intptr_t)dword_557520);
	ebp = to32i(eax+0x18); //mov
	push32(ebp);
	edx = to32i(eax+0x14); //mov
	push32(edx);
	ecx = to32i(eax+0x10); //mov
	push32(ecx);
	ebx = to32i(eax+0xC); //mov
	ebp = to32i(eax+8); //mov
	push32(ebx);
	edx = to32i(eax+0x1C); //mov
	ecx = to32i(eax+4); //mov
	push32(ebp);
	ebx = to32i(eax); //mov
	eax = esi; //mov
	inc(edi);
	esp -= 4; _sub_477C10(); esp += 4; //call
	goto loc_4779E6;
loc_477A1E:
	eax = 0xF; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_477A79;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jz())
		goto loc_477A70;
loc_477A35:
	edi = to32i(dword_557964); //mov
	xor_(esi, esi);
	test(edi, edi);
	if (jle())
		goto loc_477A79;
	to32i(esp+0xC) = esi; //mov
loc_477A45:
	ebp = (int32_t)(intptr_t)(esp+4); //lea
	edi = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ebx, ebx);
	ecx = (int32_t)(intptr_t)byte_55796C; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp) = ebx; //mov
	ebx = esp; //mov
loc_477A61:
	eax = to8i(ecx); //movsx
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_477ABA;
	cmp(eax, esi);
	if (jz())
		goto loc_477A83;
loc_477A6D:
	inc(ecx);
	goto loc_477A61;
loc_477A70:
	cmp(to32i(dword_512214), (int32_t)2);
	if (jge())
		goto loc_477A35;
loc_477A79:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_477A83:
	edx = (int32_t)(intptr_t)dword_557520; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	eax = to32i(edx); //mov
	test(eax, eax);
	if (jz())
		goto loc_477A9A;
	eax = to32i(eax); //mov
	xor_(ebx, ebx);
	to32i(esp) = eax; //mov
loc_477A9A:
	eax = to32i(edx+4); //mov
	test(eax, eax);
	if (jz())
		goto loc_477AA9;
	eax = to32i(eax); //mov
	xor_(ebp, ebp);
	to32i(esp+4) = eax; //mov
loc_477AA9:
	eax = to32i(edx+0x1C); //mov
	test(eax, eax);
	if (jz())
		goto loc_477A6D;
	eax = to32i(eax); //mov
	xor_(edi, edi);
	to32i(esp+8) = eax; //mov
	goto loc_477A6D;
loc_477ABA:
	push32(0);
	push32(0);
	push32(0);
	push32(0);
	ecx = ebp; //mov
	push32(0);
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_477C10(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_477B21;
	eax = to32i(esp); //mov
	cmp(eax, (int32_t)0x4000);
	if (jge())
		goto loc_477B40;
	or_(to8i(dword_557968), (int8_t)4);
loc_477AE4:
	ecx = to32i(esp+4); //mov
	cmp(ecx, (int32_t)0x4000);
	if (jge())
		goto loc_477B50;
	or_(to8i(dword_557968), (int8_t)1);
loc_477AF7:
	edx = to32i(dword_557968); //mov
	edi = to32i(dword_512214); //mov
	or_(dl, (int8_t)0x10);
	cmp(edi, (int32_t)2);
	if (jl())
		goto loc_477B61;
	ecx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	test(to32i(dword_557920+ecx), eax);
loc_477B19:
	if (jz())
		goto loc_477B21;
	to32i(dword_557968) = edx; //mov
loc_477B21:
	eax = to32i(esp+0xC); //mov
	edx = to32i(dword_557964); //mov
	add(eax, (int32_t)4);
	inc(esi);
	to32i(esp+0xC) = eax; //mov
	cmp(esi, edx);
	if (jge())
		goto loc_477A79;
	goto loc_477A45;
loc_477B40:
	cmp(eax, (int32_t)0xC000);
	if (jle())
		goto loc_477AE4;
	or_(to8i(dword_557968), (int8_t)8);
	goto loc_477AE4;
loc_477B50:
	cmp(ecx, (int32_t)0xC000);
	if (jle())
		goto loc_477AF7;
	or_(to8i(dword_557968), (int8_t)2);
	goto loc_477AF7;
loc_477B61:
	cmp(to32i(esp+8), (int32_t)0);
	goto loc_477B19;
}
Fn(void) Game::_sub_477B70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	xor_(edx, edx);
	push32(edx);
	push32(edx);
	push32(edx);
	push32(edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(edx);
	to32i(esp+0x14) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_477C10(); esp += 4; //call
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_477BA0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	ecx = 6; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_477780; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(ecx, ecx);
	to32i(esp+0x18) = ecx; //mov
	cmp(edx, (int32_t)6);
	if (jge())
		goto loc_477BCF;
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	to32i(esp+ecx) = edx; //mov
loc_477BCF:
	push32(0);
	ebx = to32i(esp+0x18); //mov
	push32(ebx);
	esi = to32i(esp+0x18); //mov
	push32(esi);
	edi = to32i(esp+0x18); //mov
	push32(edi);
	ebp = to32i(esp+0x18); //mov
	ecx = to32i(esp+0x14); //mov
	push32(ebp);
	xor_(edx, edx);
	ebx = to32i(esp+0x14); //mov
	esp -= 4; _sub_477C10(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_477C10()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(esp+0x20); //mov
	push32(esi);
	edi = to32i(esp+0x20); //mov
	push32(edi);
	ebp = to32i(esp+0x20); //mov
	push32(ebp);
	esi = to32i(esp+0x20); //mov
	push32(esi);
	edi = to32i(esp+0x20); //mov
	push32(edi);
	esp -= 4; _sub_421B90(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
}
