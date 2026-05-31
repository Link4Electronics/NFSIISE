#include <stdio.h>
#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_4225C0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = to32i(esp+0x20); //mov
	ebp = to32i(esp+0x2C); //mov
	to16i(esp+8) = ax; //mov
	to8i(esp+0xC) = dl; //mov
	xor_(edx, edx);
	test(ebx, ebx);
	if (jz())
		goto loc_422632;
	edi = to32i(ebx); //mov
	cmp(edi, (int32_t)0x168);
	if (jle())
		goto loc_4227ED;
	to32i(ebx) = 0x168; //mov
loc_4225F1:
	eax = to32i(ebx); //mov
	to32i(esp) = eax; //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	sub(eax, edi);
	shl(eax, (int32_t)3);
	add(eax, edi);
	shl(eax, (int32_t)2);
	to32i(ebx) = eax; //mov
	eax = to32i(esp+6); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp) = eax; //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)5);
	add(eax, edi);
	shl(eax, (int32_t)2);
	edi = to32i(dword_4E79C0+eax); //mov
	cmp(edi, to32i(ebx));
	if (jz())
		goto loc_422632;
	ebx = to32i(ebx); //mov
	or_(dl, (int8_t)0x40);
	to32i(dword_4E79C0+eax) = ebx; //mov
loc_422632:
	test(ecx, ecx);
	if (jz())
		goto loc_42266D;
	eax = to32i(ecx); //mov
	cmp(eax, (int32_t)0xFFFFFF);
	if (jnz())
		goto loc_4227FC;
	to32i(ecx) = 0xFFFFFFFF; //mov
loc_422649:
	ebx = to32i(esp+6); //mov
	sar(ebx, (int32_t)0x10);
	eax = ebx; //mov
	shl(eax, (int32_t)5);
	add(eax, ebx);
	shl(eax, (int32_t)2);
	edi = to32i(ecx); //mov
	cmp(edi, to32i(dword_4E7950+eax));
	if (jz())
		goto loc_42266D;
	or_(dl, (int8_t)1);
	to32i(dword_4E7950+eax) = edi; //mov
loc_42266D:
	test(esi, esi);
	if (jz())
		goto loc_4226A3;
	cmp(to32i(esi), (int32_t)0x2710);
	if (jbe())
		goto loc_42267F;
	to32i(esi) = 0x2710; //mov
loc_42267F:
	ecx = to32i(esp+6); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	ebx = to32i(esi); //mov
	cmp(ebx, to32i(dword_4E7958+eax));
	if (jz())
		goto loc_4226A3;
	or_(dl, (int8_t)4);
	to32i(dword_4E7958+eax) = ebx; //mov
loc_4226A3:
	esi = to32i(esp+0x24); //mov
	test(esi, esi);
	if (jz())
		goto loc_422706;
	ecx = to32i(esp+6); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	ebx = (int32_t)(intptr_t)dword_4E7948; //mov
	shl(eax, (int32_t)2);
	add(ebx, eax);
	edi = esi; //mov
	add(ebx, (int32_t)0x34);
	ecx = to32i(dword_4E7974+eax); //mov
	esi = ebx; //mov
	to32i(esp+4) = eax; //mov
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_4226DF;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_4226DF:
	test(eax, eax);
	if (jz())
		goto loc_422706;
	ecx = to32i(esp+4); //mov
	esi = to32i(esp+0x24); //mov
	edi = ebx; //mov
	ecx = to32i(dword_4E7974+ecx); //mov
	or_(dh, (int8_t)1);
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
loc_422706:
	eax = to32i(esp+0x28); //mov
	test(eax, eax);
	if (jz())
		goto loc_42273B;
	bl = to8i(eax); //mov
	cmp(bl, (int8_t)0x20);
	if (jge())
		goto loc_42273B;
	eax = bl; //movsx
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_42282A;
	ebx = eax; //mov
loc_422723:
	ecx = to32i(esp+6); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	or_(dl, (int8_t)8);
	to32i(dword_4E795C+eax*4) = ebx; //mov
loc_42273B:
	test(ebp, ebp);
	if (jz())
		goto loc_422798;
	ecx = to32i(esp+6); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	ebx = to32i(ebp+0); //mov
	cmp(ebx, to32i(dword_4E79B0+eax));
	if (jz())
		goto loc_422839;
loc_42275F:
	ecx = to32i(esp+6); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	ecx = to32i(ebp+0); //mov
	to32i(dword_4E79B0+eax*4) = ecx; //mov
	ecx = to32i(ebp+4); //mov
	to32i(dword_4E79B4+eax*4) = ecx; //mov
	ecx = to32i(ebp+8); //mov
	to32i(dword_4E79B8+eax*4) = ecx; //mov
	ecx = to32i(ebp+0xC); //mov
	or_(dl, (int8_t)0x80);
	to32i(dword_4E79BC+eax*4) = ecx; //mov
loc_422798:
	test(edx, edx);
	if (jnz())
		goto loc_42286B;
	cmp(to8i(esp+0xC), (int8_t)1);
	if (jnz())
		goto loc_4227C7;
	edx = to32i(esp+6); //mov
	sar(edx, (int32_t)0x10);
	eax = edx; //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	eax = to32i(dword_4E79C8+eax*4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4227C7;
	eax = edx; //mov
	esp -= 4; _sub_4229B0(); esp += 4; //call
loc_4227C7:
	cmp(to8i(esp+0xC), (int8_t)3);
	if (jnz())
		goto loc_4227E2;
	eax = to32i(esp+6); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4E88C0+eax*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x28));
loc_4227E2:
	xor_(eax, eax);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4227ED:
	test(edi, edi);
	if (jge())
		goto loc_4225F1;
	to32i(ebx) = edx; //mov
	goto loc_4225F1;
loc_4227FC:
	cmp(eax, (int32_t)0x5DC);
	if (jbe())
		goto loc_422809;
	to32i(ecx) = 0x5DC; //mov
loc_422809:
	ebx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	shl(eax, (int32_t)3);
	add(eax, ebx);
	shl(eax, (int32_t)3);
	ebx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	to32i(ecx) = eax; //mov
	goto loc_422649;
loc_42282A:
	ebx = to32i(esp+0x28); //mov
	ebx = to8i(ebx); //movsx
	add(ebx, (int32_t)0x30);
	goto loc_422723;
loc_422839:
	esi = to32i(ebp+4); //mov
	cmp(esi, to32i(dword_4E79B4+eax));
	if (jnz())
		goto loc_42275F;
	edi = to32i(ebp+8); //mov
	cmp(edi, to32i(dword_4E79B8+eax));
	if (jnz())
		goto loc_42275F;
	ecx = to32i(ebp+0xC); //mov
	cmp(ecx, to32i(dword_4E79BC+eax));
	if (jnz())
		goto loc_42275F;
	goto loc_422798;
loc_42286B:
	eax = to32i(esp+6); //mov
	sar(eax, (int32_t)0x10);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(dword_4E88C0+eax*4); //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4E7948);
	push32(eax);
	ebx = to32i(ecx); //mov
	push32(ecx);
	call(to32i(ebx+0x18));
	bh = to8i(esp+0xC); //mov
	cmp(bh, (int8_t)1);
	if (jnz())
		goto loc_4228C7;
loc_422899:
	edx = to32i(esp+6); //mov
	sar(edx, (int32_t)0x10);
	eax = edx; //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	eax = to32i(dword_4E79C8+eax*4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4228CE;
	eax = edx; //mov
	esp -= 4; _sub_4229B0(); esp += 4; //call
loc_4228B9:
	eax = 1; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
loc_4228C7:
	cmp(bh, (int8_t)2);
	if (jz())
		goto loc_422899;
	goto loc_4228B9;
loc_4228CE:
	cmp(to8i(esp+0xC), (int8_t)3);
	if (jnz())
		goto loc_4228B9;
	eax = to32i(dword_4E88C0+edx*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x28));
	eax = 1; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_4228F0()
{
	push32(ecx);
	push32(edx);
	eax = ax; //cwde
	eax = to32i(dword_4E88C0+eax*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x2C));
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_422910()
{
	push32(edx);
	push32(esi);
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422929;
	xor_(edx, edx);
loc_422918:
	eax = dl; //movsx
	inc(edx);
	esp -= 4; _sub_422910(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_422918;
	pop32(esi);
	pop32(edx);
	return;
loc_422929:
	push32(ecx);
	push32(ebx);
	edx = al; //movsx
	shl(edx, (int32_t)2);
	cmp(to32i(dword_4E7348+edx), (int32_t)0);
	if (jnz())
		goto loc_422957;
loc_42293A:
	xor_(edx, edx);
	pop32(ebx);
	pop32(ecx);
loc_42293E:
	add(edx, (int32_t)0x84);
	xor_(esi, esi);
	to32i(dword_4E7944+edx) = esi; //mov
	cmp(edx, (int32_t)0xF78);
	if (jnz())
		goto loc_42293E;
	pop32(esi);
	pop32(edx);
	return;
loc_422957:
	ecx = al; //movsx
	eax = 1; //mov
	ebx = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, ebx);
	if (jz())
		goto loc_42293A;
	push32(2);
	eax = to32i(dword_4E7348+edx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x58));
	goto loc_42293A;
}
Fn(void) Game::_sub_422980()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = ax; //movsx
	eax = to32i(dword_4E88C0+ebx*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x20));
	eax = ebx; //mov
	shl(eax, (int32_t)5);
	edx = ebx; //mov
	add(eax, ebx);
	xor_(edx, ebx);
	to32i(dword_4E79C8+eax*4) = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4229B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(0);
	ebx = ax; //movsx
	push32(1);
	eax = to32i(dword_4E88C0+ebx*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x1C));
	ecx = eax; //mov
	eax = ebx; //mov
	shl(eax, (int32_t)5);
	add(eax, ebx);
	shl(eax, (int32_t)2);
	test(ecx, ecx);
	if (jnz())
		goto loc_4229E5;
	to32i(dword_4E79C8+eax) = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4229E5:
	xor_(edx, edx);
	to32i(dword_4E79C8+eax) = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422A34()
{
	static const void *const off_422A00[] = {
		&&loc_422BCA,
		&&loc_422CCC,
		&&loc_422CDB,
		&&loc_422CEA,
		&&loc_422CEA,
		&&loc_422CEA,
		&&loc_422CEA,
		&&loc_422CEA,
		&&loc_422D07,
		&&loc_422D24,
		&&loc_422D07,
		&&loc_422D07,
		&&loc_422D07,
	};
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	bl = al; //mov
	cmp(to32i(dword_4D4C60), (int32_t)0x1E);
	if (jge())
		goto loc_422C1D;
	eax = al; //movsx
	cmp(to32i(dword_4E7348+eax*4), (int32_t)0);
	if (jz())
		goto loc_422C1D;
	eax = 1; //mov
	ecx = bl; //movsx
	edi = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, edi);
	if (jz())
		goto loc_422C1D;
	ebp = to32i(edx+0x34); //mov
	cmp(ebp, (int32_t)0xFFFFFF);
	if (jnz())
		goto loc_422C28;
	ecx = 0xFFFFFFFF; //mov
loc_422A85:
	esi = to32i(dword_4D4C60); //mov
	eax = esi; //mov
	shl(eax, (int32_t)5);
	add(eax, esi);
	to32i(dword_4E7950+eax*4) = ecx; //mov
	ecx = to32i(edx+0x38); //mov
	to32i(dword_4E7958+eax*4) = ecx; //mov
	eax = to32i(edx+0x3A); //mov
	sar(eax, (int32_t)0x18);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_422C45;
	esi = eax; //mov
loc_422AB4:
	eax = to32i(dword_4D4C60); //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)5);
	add(ecx, eax);
	shl(ecx, (int32_t)2);
	to32i(dword_4E795C+ecx) = esi; //mov
	eax = to32i(edx+0x40); //mov
	to32i(dword_4E7960+ecx) = eax; //mov
	esi = to32i(edx+0x44); //mov
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)3);
	add(eax, esi);
	shl(eax, (int32_t)2);
	to32i(dword_4E79C0+ecx) = eax; //mov
	cmp(to8i(edx+0x3C), (int8_t)0);
	if (jnz())
		goto loc_422C53;
loc_422AF6:
	ecx = to32i(dword_4D4C60); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	ebp = 1; //mov
	add(eax, ecx);
	xor_(esi, esi);
	ecx = (int32_t)(intptr_t)dword_4E7340; //mov
	to32i(dword_4E7964+eax*4) = ebp; //mov
	to32i(dword_4E7340) = esi; //mov
	to32i(dword_4E7968+eax*4) = ecx; //mov
loc_422B23:
	ecx = to32i(dword_4D4C60); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	edi = (int32_t)(intptr_t)dword_4E7948; //mov
	shl(eax, (int32_t)2);
	esi = (int32_t)(intptr_t)(edx+4); //lea
	add(edi, eax);
	ecx = 0x30; //mov
	add(edi, (int32_t)0x34);
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
	ecx = to32i(dword_4D4C60); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	ebp = 0x22; //mov
	to32i(dword_4E7954+eax) = ecx; //mov
	ecx = (int32_t)(intptr_t)dword_4E7948; //mov
	edi = 0x34; //mov
	add(ecx, eax);
	to32i(dword_4E7948+eax) = edi; //mov
	esi = (int32_t)(intptr_t)(ecx+edi); //lea
	to32i(dword_4E794C+eax) = ebp; //mov
	add(ecx, (int32_t)0x78);
	to32i(dword_4E7978+eax) = esi; //mov
	xor_(edi, edi);
	to32i(dword_4E796C+eax) = ecx; //mov
	to32i(dword_4E79C4+eax) = edi; //mov
	to32i(dword_4E7970+eax) = edi; //mov
	to32i(dword_4E7978+eax) = esi; //mov
	to32i(dword_4E79C8+eax) = edi; //mov
	cl = to8i(edx); //mov
	cmp(cl, (int8_t)0xC);
	if (ja())
		goto loc_422C1D;
	and_(ecx, (int32_t)0xFF);
	goto *off_422A00[ecx];
loc_422BCA:
	to32i(dword_4E7974+eax) = 4; //mov
loc_422BD4:
	eax = bl; //movsx
	esi = to32i(dword_4E7348+eax*4); //mov
	eax = to32i(dword_4D4C60); //mov
	shl(eax, (int32_t)2);
	push32(0);
	add(eax, (int32_t)(intptr_t)dword_4E88C0);
	ecx = to32i(dword_4D4C60); //mov
	push32(eax);
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4E7948);
	push32(eax);
	eax = to8i(edx); //movsx
	ebp = to32i(off_421560+eax*4); //mov
	push32(ebp);
	edi = to32i(esi); //mov
	push32(esi);
	call(to32i(edi+0x48));
	test(eax, eax);
	if (jz())
		goto loc_422D33;
loc_422C1D:
	eax = 0xFFFFFFFF; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422C28:
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(eax, ebp);
	shl(eax, (int32_t)3);
	add(eax, ebp);
	shl(eax, (int32_t)3);
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	add(ecx, eax);
	goto loc_422A85;
loc_422C45:
	esi = to32i(edx+0x3A); //mov
	sar(esi, (int32_t)0x18);
	add(esi, (int32_t)0x30);
	goto loc_422AB4;
loc_422C53:
	esi = bl; //movsx
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)3);
	sub(eax, esi);
	test(byte_4E7390[eax*4], (int8_t)2);
	if (jnz())
		goto loc_422AF6;
	cmp(to8i(edx+0x3C), (int8_t)1);
	if (jnz())
		goto loc_422C9E;
	esi = (int32_t)(intptr_t)dword_4E7340; //mov
	edi = 4; //mov
	eax = 1; //mov
	to32i(dword_4E7968+ecx) = esi; //mov
	to32i(dword_4E7340) = edi; //mov
	to32i(dword_4E7964+ecx) = eax; //mov
	goto loc_422B23;
loc_422C9E:
	esi = (int32_t)(intptr_t)dword_4E7340; //mov
	ebp = 4; //mov
	xor_(edi, edi);
	eax = 2; //mov
	to32i(dword_4E7340) = edi; //mov
	to32i(dword_4E7968+ecx) = esi; //mov
	to32i(dword_4E7344) = ebp; //mov
	to32i(dword_4E7964+ecx) = eax; //mov
	goto loc_422B23;
loc_422CCC:
	to32i(dword_4E7974+eax) = 8; //mov
	goto loc_422BD4;
loc_422CDB:
	to32i(dword_4E7974+eax) = 0x10; //mov
	goto loc_422BD4;
loc_422CEA:
	ecx = to32i(dword_4D4C60); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	to32i(dword_4E7974+eax*4) = 0x10; //mov
	goto loc_422BD4;
loc_422D07:
	ecx = to32i(dword_4D4C60); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)5);
	add(eax, ecx);
	to32i(dword_4E7974+eax*4) = 0x18; //mov
	goto loc_422BD4;
loc_422D24:
	to32i(dword_4E7974+eax) = 0x30; //mov
	goto loc_422BD4;
loc_422D33:
	ax = to16i(dword_4D4C60); //mov
	eax = ax; //cwde
	eax = to32i(dword_4E88C0+eax*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x2C));
	eax = to32i(dword_4D4C60); //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(dword_4D4C60) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422D60()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to8i(esp+0x14) = al; //mov
	esi = edx; //mov
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422D8D;
	xor_(ebx, ebx);
loc_422D74:
	eax = bl; //movsx
	edx = esi; //mov
	inc(ebx);
	esp -= 4; _sub_422D60(); esp += 4; //call
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_422D74;
loc_422D84:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422D8D:
	ecx = to32i(esp+0x11); //mov
	eax = 1; //mov
	sar(ecx, (int32_t)0x18);
	edx = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jz())
		goto loc_422E47;
loc_422DA9:
	edi = 0x10; //mov
	ebx = 0x14; //mov
	xor_(ebp, ebp);
	to32i(esp+4) = edi; //mov
	to32i(esp+8) = ebp; //mov
	to32i(esp+0xC) = ebp; //mov
	to32i(esp) = ebx; //mov
	cmp(esi, (int32_t)0x64);
	if (jle())
		goto loc_422E65;
	to32i(esp+0x10) = 0x2710; //mov
loc_422DD5:
	esi = to32i(dword_4D4C60); //mov
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_422DFC;
loc_422DE1:
	eax = bx; //movsx
	eax = to32i(dword_4E88C0+eax*4); //mov
	push32(eax);
	esi = to32i(eax); //mov
	inc(ebx);
	call(to32i(esi+0x2C));
	cmp(ebx, to32i(dword_4D4C60));
	if (jl())
		goto loc_422DE1;
loc_422DFC:
	ecx = esp; //mov
	eax = to32i(esp+0x11); //mov
	push32(ecx);
	sar(eax, (int32_t)0x18);
	push32(7);
	eax = to32i(dword_4E7348+eax*4); //mov
	push32(eax);
	ebx = to32i(eax); //mov
	call(to32i(ebx+0x18));
	ebp = to32i(dword_4D4C60); //mov
	xor_(ebx, ebx);
	test(ebp, ebp);
	if (jle())
		goto loc_422D84;
loc_422E25:
	eax = bx; //movsx
	eax = to32i(dword_4E88C0+eax*4); //mov
	push32(eax);
	esi = to32i(eax); //mov
	inc(ebx);
	call(to32i(esi+0x28));
	cmp(ebx, to32i(dword_4D4C60));
	if (jl())
		goto loc_422E25;
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422E47:
	eax = to32i(esp+0x11); //mov
	sar(eax, (int32_t)0x18);
	cmp(to32i(dword_4E7348+eax*4), (int32_t)0);
	if (jnz())
		goto loc_422DA9;
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422E65:
	test(esi, esi);
	if (jl())
		goto loc_422E83;
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)3);
	add(eax, esi);
	shl(eax, (int32_t)2);
	to32i(esp+0x10) = eax; //mov
	goto loc_422DD5;
loc_422E83:
	to32i(esp+0x10) = ebp; //mov
	goto loc_422DD5;
}
Fn(void) Game::_sub_422E90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422EAC;
	xor_(edx, edx);
loc_422E99:
	eax = dl; //movsx
	inc(edx);
	esp -= 4; _sub_422E90(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_422E99;
loc_422EA8:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422EAC:
	edx = al; //movsx
	shl(edx, (int32_t)2);
	cmp(to32i(dword_4E7348+edx), (int32_t)0);
	if (jz())
		goto loc_422EA8;
	ecx = al; //movsx
	eax = 1; //mov
	ebx = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, ebx);
	if (jz())
		goto loc_422EA8;
	push32(0x20);
	eax = to32i(dword_4E7348+edx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x58));
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422EF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422F19;
	xor_(ecx, ecx);
loc_422EFA:
	edx = cl; //movsx
	eax = edx; //mov
	esp -= 4; _sub_422910(); esp += 4; //call
	eax = edx; //mov
	inc(ecx);
	esp -= 4; _sub_422EF0(); esp += 4; //call
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_422EFA;
loc_422F14:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422F19:
	edx = al; //movsx
	ebx = (int32_t)(intptr_t)(edx*4+0); //lea
	cmp(to32i(dword_4E7348+ebx), (int32_t)0);
	if (jz())
		goto loc_422F14;
	ecx = al; //movsx
	eax = 1; //mov
	esi = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, esi);
	if (jz())
		goto loc_422F14;
	eax = edx; //mov
	esp -= 4; _sub_422910(); esp += 4; //call
	push32(0x10);
	edx = to32i(dword_4E7348+ebx); //mov
	push32(edx);
	eax = to32i(edx); //mov
	call(to32i(eax+0x58));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422F60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422F7C;
	xor_(edx, edx);
loc_422F69:
	eax = dl; //movsx
	inc(edx);
	esp -= 4; _sub_422F60(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_422F69;
loc_422F78:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422F7C:
	edx = al; //movsx
	shl(edx, (int32_t)2);
	cmp(to32i(dword_4E7348+edx), (int32_t)0);
	if (jz())
		goto loc_422F78;
	ecx = al; //movsx
	eax = 1; //mov
	ebx = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, ebx);
	if (jz())
		goto loc_422F78;
	push32(8);
	eax = to32i(dword_4E7348+edx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x58));
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422FC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_422FDC;
	xor_(edx, edx);
loc_422FC9:
	eax = dl; //movsx
	inc(edx);
	esp -= 4; _sub_422FC0(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_422FC9;
loc_422FD8:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422FDC:
	edx = al; //movsx
	shl(edx, (int32_t)2);
	cmp(to32i(dword_4E7348+edx), (int32_t)0);
	if (jz())
		goto loc_422FD8;
	ecx = al; //movsx
	eax = 1; //mov
	ebx = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, ebx);
	if (jz())
		goto loc_422FD8;
	push32(4);
	eax = to32i(dword_4E7348+edx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x58));
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423020()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(dword_4D4C5C), (int32_t)0);
	if (jz())
		goto loc_423076;
loc_42302F:
	cmp(to32i(dword_4D4C58), (int32_t)0);
	if (jz())
		goto loc_42306A;
	xor_(esi, esi);
	xor_(ebx, ebx);
loc_42303C:
	edi = to32i(dword_4E7348+esi); //mov
	test(edi, edi);
	if (jz())
		goto loc_423061;
	eax = 1; //mov
	cl = bl; //mov
	ebp = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	test(eax, ebp);
	if (jz())
		goto loc_423061;
	push32(1);
	edx = to32i(edi); //mov
	push32(edi);
	call(to32i(edx+0x58));
loc_423061:
	inc(ebx);
	add(esi, (int32_t)4);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_42303C;
loc_42306A:
	eax = to32i(dword_4D4C58); //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423076:
	esp -= 4; _sub_421F10(); esp += 4; //call
	goto loc_42302F;
}
Fn(void) Game::_sub_423080()
{
	_sub_422380(); return; //jmp
}
Fn(void) Game::_sub_4230A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edx = eax; //mov
	shl(edx, (int32_t)5);
	add(edx, eax);
	shl(edx, (int32_t)2);
	ebx = to32i(dword_4D4C6C); //mov
	add(edx, eax);
	ecx = to32i(ebx); //mov
	shl(edx, (int32_t)2);
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_423162;
	ebx = to32i(dword_4D4C68); //mov
	esi = to32i(ebx+0x10); //mov
	edi = to32i(edx+ebx+0x34); //mov
	add(esi, ecx);
	edx = (int32_t)(intptr_t)(edi+esi); //lea
	ecx = esi; //mov
	cmp(edx, esi);
	if (jle())
		goto loc_4230E6;
	ecx = to32i(ebx); //mov
	sub(ecx, edi);
	inc(ecx);
loc_4230E6:
	edx = eax; //mov
	shl(edx, (int32_t)5);
	add(edx, eax);
	ebp = to32i(dword_4D4C6C); //mov
	shl(edx, (int32_t)2);
	ebx = to32i(dword_4D4C68); //mov
	add(edx, eax);
	add(ebp, (int32_t)4);
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)(ebx+0x28); //lea
	to32i(esp+4) = edx; //mov
	add(eax, edx);
	ebx = ecx; //mov
	add(eax, (int32_t)0x18);
	edx = ebp; //mov
	add(eax, edi);
	esp -= 4; _sub_48A980(); esp += 4; //call
	cmp(ecx, esi);
	if (jl())
		goto loc_42312E;
loc_42311F:
	eax = to32i(dword_4D4C6C); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42312E:
	eax = to32i(dword_4D4C6C); //mov
	add(eax, (int32_t)4);
	edx = (int32_t)(intptr_t)(eax+ecx); //lea
	ebx = esi; //mov
	eax = to32i(dword_4D4C68); //mov
	esi = to32i(esp+4); //mov
	add(eax, (int32_t)0x28);
	add(eax, esi);
	sub(ebx, ecx);
	add(eax, (int32_t)0x18);
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4D4C6C); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423162:
	eax = to32i(dword_4D4C68); //mov
	to32i(esp+8) = edx; //mov
	xor_(ebp, ebp);
	xor_(ecx, ecx);
	ebx = to32i(edx+eax+0x28); //mov
loc_423173:
	esi = to32i(dword_4D4C6C); //mov
	cmp(ebp, to32i(esi));
	if (jge())
		goto loc_42311F;
	edi = to32i(dword_4D4C68); //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(edi+4));
	imul32(edx, 0x34);
	eax = to32i(esp+8); //mov
	to32i(esp) = edx; //mov
	edx = (int32_t)(intptr_t)(edi+0x28); //lea
	add(edx, eax);
	edi = to32i(esp); //mov
	add(edx, (int32_t)0xC);
	add(edx, edi);
	add(esi, (int32_t)4);
	add(edx, (int32_t)0xC);
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	inc(ebp);
	esi = edx; //mov
	inc(ebx);
	push32(edi);
loc_4231B2:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4231CA;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4231B2;
loc_4231CA:
	pop32(edi);
	add(ecx, (int32_t)0x26);
	goto loc_423173;
}
Fn(void) Game::_sub_4231D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = to32i(dword_4D4C68); //mov
	edi = eax; //mov
	cmp(to32i(dword_4D4C70), (int32_t)0);
	if (jz())
		goto loc_42326C;
	shl(eax, (int32_t)5);
	add(eax, edi);
	shl(eax, (int32_t)2);
	add(eax, edi);
	ecx = (int32_t)(intptr_t)(esi+0x28); //lea
	shl(eax, (int32_t)2);
	add(ecx, eax);
	eax = to32i(ecx+8); //mov
	cmp(eax, to32i(ecx+4));
	if (jz())
		goto loc_423211;
loc_423204:
	imul32(edx, eax, 0x34);
	ebx = to32i(ecx+edx+0x14); //mov
	cmp(ebx, to32i(ecx+edx+0x10));
	if (jz())
		goto loc_423270;
loc_423211:
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	shl(edx, (int32_t)2);
	add(edx, eax);
	ebx = (int32_t)(intptr_t)(ecx+0xC); //lea
	shl(edx, (int32_t)2);
	add(edx, ebx);
	ebx = to32i(edx+8); //mov
	cmp(ebx, to32i(edx+4));
	if (jz())
		goto loc_42326C;
	dec(ebx);
	to32i(edx+8) = ebx; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_423282;
loc_423237:
	to32i(ecx+8) = eax; //mov
	add(edx, to32i(edx+8));
	to8i(edx+0xC) = 0; //mov
	edx = to32i(esi+0x20); //mov
	to32i(dword_4D4C68) = esi; //mov
	test(edx, edx);
	if (jz())
		goto loc_423255;
	eax = edi; //mov
loc_423255:
	eax = 1; //mov
	esi = to32i(dword_4D4C68); //mov
loc_423260:
	to32i(dword_4D4C68) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42326C:
	xor_(eax, eax);
	goto loc_423260;
loc_423270:
	dec(eax);
	test(eax, eax);
	if (jl())
		goto loc_42327C;
loc_423275:
	cmp(eax, to32i(ecx+4));
	if (jnz())
		goto loc_423204;
	goto loc_423211;
loc_42327C:
	eax = to32i(esi+4); //mov
	dec(eax);
	goto loc_423275;
loc_423282:
	ebx = to32i(esi); //mov
	to32i(edx+8) = ebx; //mov
	goto loc_423237;
}
Fn(void) Game::_sub_423290()
{
	push32(ebx);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	to8i(esp) = dl; //mov
	cmp(to32i(dword_4D4C70), (int32_t)0);
	if (jz())
		goto loc_423341;
	push32(edi);
	push32(esi);
	push32(ecx);
	ebp = eax; //mov
	shl(ebp, (int32_t)5);
	add(ebp, eax);
	shl(ebp, (int32_t)2);
	add(ebp, eax);
	esi = to32i(dword_4D4C68); //mov
	shl(ebp, (int32_t)2);
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	edx = to32i(edi+0x30); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(ecx, edx);
	eax = (int32_t)(intptr_t)(esi+0x28); //lea
	shl(ecx, (int32_t)2);
	add(eax, ebp);
	add(ecx, edx);
	add(eax, (int32_t)0xC);
	shl(ecx, (int32_t)2);
	add(ecx, eax);
	eax = to32i(ecx+8); //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(ecx+8) = edx; //mov
	dl = to8i(esp+0xC); //mov
	to8i(ecx+eax+0xC) = dl; //mov
	cmp(to32i(esi+0xC), (int32_t)1);
	if (jnz())
		goto loc_423345;
	ebx = to32i(esi); //mov
	cmp(ebx, to32i(ecx+8));
	if (jge())
		goto loc_423305;
	to32i(ecx+8) = 0; //mov
loc_423305:
	esi = to32i(ecx+4); //mov
	cmp(esi, to32i(ecx+8));
	if (jnz())
		goto loc_423327;
	edi = (int32_t)(intptr_t)(esi+1); //lea
	eax = to32i(dword_4D4C68); //mov
	to32i(ecx+4) = edi; //mov
	edx = edi; //mov
	ebx = to32i(eax); //mov
	sar(edx, (int32_t)0x1F);
	inc(ebx);
	eax = edi; //mov
	idiv32(ebx);
	to32i(ecx+4) = edx; //mov
loc_423327:
	eax = to32i(ecx+4); //mov
	to32i(ecx) = eax; //mov
loc_42332C:
	add(ecx, to32i(ecx+8));
	eax = 1; //mov
	to8i(ecx+0xC) = 0; //mov
	pop32(ecx);
	pop32(esi);
	pop32(edi);
loc_42333B:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(ebx);
	return;
loc_423341:
	xor_(eax, eax);
	goto loc_42333B;
loc_423345:
	edx = to32i(esi); //mov
	cmp(edx, to32i(ecx+8));
	if (jnz())
		goto loc_42338D;
	eax = to32i(edi+0x30); //mov
	inc(eax);
	edx = eax; //mov
	to32i(edi+0x30) = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esi+4));
	eax = ebx; //mov
	to32i(edi+0x30) = edx; //mov
	esp -= 4; _sub_4233D0(); esp += 4; //call
	edi = to32i(dword_4D4C68); //mov
	esi = (int32_t)(intptr_t)(edi+ebp); //lea
	eax = to32i(esi+0x30); //mov
	edx = to32i(esi+0x2C); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_42338D;
	ebp = (int32_t)(intptr_t)(edx+1); //lea
	edx = ebp; //mov
	eax = ebp; //mov
	to32i(esi+0x2C) = ebp; //mov
	sar(edx, (int32_t)0x1F);
	ebp = to32i(edi+4); //mov
	idiv32(ebp);
	to32i(esi+0x2C) = edx; //mov
loc_42338D:
	eax = to32i(dword_4D4C68); //mov
	cmp(to32i(eax+0x20), (int32_t)0);
	if (jz())
		goto loc_42339F;
	eax = ebx; //mov
loc_42339F:
	eax = ebx; //mov
	shl(eax, (int32_t)5);
	add(eax, ebx);
	shl(eax, (int32_t)2);
	add(eax, ebx);
	edx = to32i(dword_4D4C68); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0x2C); //mov
	to32i(eax+0x28) = edx; //mov
	goto loc_42332C;
}
Fn(void) Game::_sub_4233D0()
{
	push32(ebx);
	push32(ecx);
	ecx = edx; //mov
	edx = eax; //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	ebx = to32i(dword_4D4C68); //mov
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(ebx+0x28); //lea
	ebx = (int32_t)(intptr_t)(edx+eax); //lea
	edx = ecx; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = (int32_t)(intptr_t)(ebx+0xC); //lea
	to32i(edx+eax*4) = 0; //mov
	to32i(edx+eax*4+4) = 0; //mov
	to32i(edx+eax*4+8) = 0; //mov
	to8i(edx+eax*4+0xC) = 0; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423430()
{
	push32(ebx);
	push32(esi);
	ebx = eax; //mov
	esi = to32i(dword_4D4C70); //mov
	test(esi, esi);
	if (jz())
		goto loc_423480;
	push32(edx);
	push32(ecx);
	xor_(edx, edx);
	xor_(ecx, ecx);
	to32i(dword_4D4C70) = edx; //mov
loc_42344A:
	eax = to32i(dword_4D4C68); //mov
	cmp(ecx, to32i(eax+4));
	if (jl())
		goto loc_423483;
	ecx = ebx; //mov
	shl(ecx, (int32_t)5);
	add(ecx, ebx);
	shl(ecx, (int32_t)2);
	add(ecx, ebx);
	to32i(eax+ecx*4+0x28) = 0; //mov
	to32i(eax+ecx*4+0x2C) = 0; //mov
	to32i(eax+ecx*4+0x30) = 0; //mov
	to32i(dword_4D4C70) = esi; //mov
	pop32(ecx);
	pop32(edx);
loc_423480:
	pop32(esi);
	pop32(ebx);
	return;
loc_423483:
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4233D0(); esp += 4; //call
	inc(ecx);
	goto loc_42344A;
}
Fn(void) Game::_sub_423490()
{
	push32(edx);
	xor_(edx, edx);
	eax = to32i(dword_4D4C68); //mov
	cmp(edx, to32i(eax+8));
	if (jl())
		goto loc_42349F;
	pop32(edx);
	return;
loc_42349F:
	eax = edx; //mov
	esp -= 4; _sub_423430(); esp += 4; //call
	inc(edx);
	eax = to32i(dword_4D4C68); //mov
	cmp(edx, to32i(eax+8));
	if (jl())
		goto loc_42349F;
	pop32(edx);
}
Fn(void) Game::_sub_4234C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	xor_(edx, edx);
	ecx = to32i(dword_4D4C68); //mov
	to32i(dword_4D4C70) = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4234F3;
loc_4234D6:
	ebx = to32i(dword_4D4C6C); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4234FC;
	xor_(esi, esi);
	to32i(dword_4D4C68) = esi; //mov
	to32i(dword_4D4C6C) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4234F3:
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_4234D6;
loc_4234FC:
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(esi, esi);
	to32i(dword_4D4C68) = esi; //mov
	to32i(dword_4D4C6C) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423520()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_4D4C68), (int32_t)0);
	if (jnz())
		goto loc_423632;
loc_423535:
	edi = to32i(ecx+8); //mov
	ebp = to32i(ecx+0xC); //mov
	esi = to32i(ecx+4); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_42354D;
	cmp(esi, (int32_t)1);
	if (jle())
		goto loc_42365A;
	add(esi, ebp);
loc_42354D:
	ebx = (int32_t)(intptr_t)aCNfs2seFron_12; //mov
	ebp = 0x74; //mov
	edx = 0x10C8; //mov
	eax = (int32_t)(intptr_t)aEdit; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D4C68) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4235A7;
	push32(0x10C8);
	eax = (int32_t)(intptr_t)aCNfs2seFron_12; //mov
	edx = 0x76; //mov
	push32(aOutOfMemoryReq);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = edx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
loc_4235A7:
	edx = 0x10C8; //mov
	eax = to32i(dword_4D4C68); //mov
	ebx = 0x20; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = to32i(dword_4D4C68); //mov
	eax = ecx; //mov
	add(edx, (int32_t)8);
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4D4C68); //mov
	ebx = (int32_t)(intptr_t)aCNfs2seFron_12; //mov
	edx = 0x180; //mov
	to32i(eax+4) = esi; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(eax) = edi; //mov
	esi = 0x80; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aEdittext; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D4C6C) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_423661;
loc_423608:
	edx = 0x180; //mov
	eax = to32i(dword_4D4C6C); //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = to32i(dword_4D4C6C); //mov
	edx = to32i(ecx+4); //mov
	to32i(eax) = edx; //mov
	to32i(dword_4D4C70) = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423632:
	ebx = (int32_t)(intptr_t)aCNfs2seFron_12; //mov
	esi = 0x5F; //mov
	push32(aEditorAlreadyO);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_423535;
loc_42365A:
	add(edi, ebp);
	goto loc_42354D;
loc_423661:
	push32(0x180);
	edi = (int32_t)(intptr_t)aCNfs2seFron_12; //mov
	ebp = 0x82; //mov
	push32(aOutOfMemoryReq);
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	goto loc_423608;
}
Fn(void) Game::_sub_423690()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x900);
	edx = esp; //mov
	eax = (int32_t)(intptr_t)a_num; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	edx = eax; //mov
	shl(eax, (int32_t)3);
	ecx = esp; //mov
	add(eax, edx);
	add(ecx, eax);
	push32(ecx);
	ebx = to32i(dword_5134C0); //mov
	push32(ebx);
	push32(aSS_num);
	eax = (int32_t)(intptr_t)(esp+0x8D8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4236E5;
loc_4236DB:
	add(esp, (int32_t)0x900);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4236E5:
	push32(0x2F7);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_4236DB;
	eax = (int32_t)(intptr_t)(esp+0x8CC); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = 0x2F8; //mov
	edx = (int32_t)(intptr_t)word_512F86; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4236DB;
	push32(edi);
	push32(esi);
	esi = (int32_t)(intptr_t)dword_4C9BA4; //mov
	edi = (int32_t)(intptr_t)byte_512F5E; //mov
	push32(edi);
loc_42372B:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_423743;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_42372B;
loc_423743:
	pop32(edi);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x900);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423750()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xA74);
	eax = 0x2EA; //mov
	edx = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)a_num; //mov
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4237B6;
	test(eax, eax);
	if (jnz())
		goto loc_423917;
	ecx = 1; //mov
	ebx = 0x14; //mov
	xor_(ah, ah);
	edx = 0x2EB; //mov
	to8i(esp+0x9D4) = ah; //mov
	to8i(esp+0xA24) = ah; //mov
	eax = (int32_t)(intptr_t)(esp+0xA24); //lea
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4237C2;
loc_4237B6:
	add(esp, (int32_t)0xA74);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4237C2:
	ecx = 2; //mov
	ebx = 8; //mov
	xor_(dh, dh);
	eax = (int32_t)(intptr_t)(esp+0x9D4); //lea
	to8i(esp+0x9D4) = dh; //mov
	edx = 0x2E7; //mov
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4237B6;
	eax = (int32_t)(intptr_t)(esp+0x9D4); //lea
	push32(eax);
	ecx = to32i(dword_5134C0); //mov
	push32(ecx);
	push32(aSS_num);
	eax = (int32_t)(intptr_t)(esp+0x8E0); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x8D4); //lea
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4238AC;
	push32(0x2F9);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_4237B6;
	eax = (int32_t)(intptr_t)(esp+0x8D4); //lea
	edx = (int32_t)(intptr_t)(esp+0xA24); //lea
	esi = (int32_t)(intptr_t)(esp+0xA24); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x8D4); //lea
	edi = (int32_t)(intptr_t)byte_512F5E; //mov
	esp -= 4; _sub_4239F0(); esp += 4; //call
	push32(edi);
loc_423861:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_423879;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_423861;
loc_423879:
	pop32(edi);
	esi = (int32_t)(intptr_t)(esp+0x9D4); //lea
	edi = (int32_t)(intptr_t)word_512F86; //mov
	push32(edi);
loc_423887:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_42389F;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_423887;
loc_42389F:
	pop32(edi);
	add(esp, (int32_t)0xA74);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4238AC:
	edx = (int32_t)(intptr_t)(esp+0xA24); //lea
	eax = (int32_t)(intptr_t)(esp+0x8D4); //lea
	esi = (int32_t)(intptr_t)(esp+0xA24); //lea
	edi = (int32_t)(intptr_t)byte_512F5E; //mov
	esp -= 4; _sub_4239F0(); esp += 4; //call
	push32(edi);
loc_4238CC:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4238E4;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4238CC;
loc_4238E4:
	pop32(edi);
	esi = (int32_t)(intptr_t)(esp+0x9D4); //lea
	edi = (int32_t)(intptr_t)word_512F86; //mov
	push32(edi);
loc_4238F2:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_42390A;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4238F2;
loc_42390A:
	pop32(edi);
	add(esp, (int32_t)0xA74);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423917:
	edx = eax; //mov
	shl(eax, (int32_t)3);
	ecx = esp; //mov
	add(eax, edx);
	add(ecx, eax);
	push32(ecx);
	edx = to32i(dword_5134C0); //mov
	push32(edx);
	push32(aSS_num);
	eax = (int32_t)(intptr_t)(esp+0x8E0); //lea
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0xA34); //lea
	edx = (int32_t)(intptr_t)(esp+0xA34); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x8D4); //lea
	edi = (int32_t)(intptr_t)byte_512F5E; //mov
	esp -= 4; _sub_4239B0(); esp += 4; //call
	push32(edi);
loc_42395F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_423977;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_42395F;
loc_423977:
	pop32(edi);
	edi = (int32_t)(intptr_t)word_512F86; //mov
	esi = ecx; //mov
	push32(edi);
loc_423980:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_423998;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_423980;
loc_423998:
	pop32(edi);
	add(esp, (int32_t)0xA74);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4239B0()
{
	push32(edi);
	edi = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4239C2;
	pop32(edi);
	return;
loc_4239C2:
	push32(esi);
	esi = eax; //mov
	push32(edi);
loc_4239C6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4239DE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4239C6;
loc_4239DE:
	pop32(edi);
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_4239F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
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
	ebx = (int32_t)(intptr_t)(ecx+1); //lea
	eax = esi; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_423A15;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423A15:
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423B70()
{
	eax = to32i(dword_4E8960); //mov
}
Fn(void) Game::_sub_423B90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = (int32_t)(intptr_t)dword_4D4C80; //mov
	edx = (int32_t)(intptr_t)dword_4D4C7C; //mov
	eax = (int32_t)(intptr_t)dword_4D4C84; //mov
	esp -= 4; _sub_422060(); esp += 4; //call
	cmp(to32i(dword_4E8AF8), (int32_t)0);
	if (jz())
		goto loc_423BCC;
	ecx = to32i(dword_4D4C7C); //mov
	cmp(ecx, to32i(dword_4E8B00));
	if (jnz())
		goto loc_423BE4;
	ebx = to32i(dword_4D4C80); //mov
	cmp(ebx, to32i(dword_4E8B04));
	if (jnz())
		goto loc_423BE4;
loc_423BCC:
	eax = to32i(dword_4D4C7C); //mov
	to32i(dword_4E8B00) = eax; //mov
	eax = to32i(dword_4D4C80); //mov
	to32i(dword_4E8B04) = eax; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423BE4:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	goto loc_423BCC;
}
Fn(void) Game::_sub_423C40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_4D4C78); //mov
	test(edx, edx);
	if (jnz())
		goto loc_423C7A;
loc_423C4F:
	ebx = to32i(dword_4E8AF8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_423C6A;
	push32(esi);
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_482DA0(); esp += 4; //call
	to32i(dword_4E8AF8) = esi; //mov
	pop32(esi);
loc_423C6A:
	edi = to32i(dword_4E8AFC); //mov
	test(edi, edi);
	if (jnz())
		goto loc_423C8B;
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423C7A:
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D4C78) = ecx; //mov
	goto loc_423C4F;
loc_423C8B:
	eax = edi; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_482DA0(); esp += 4; //call
	to32i(dword_4E8AFC) = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423CA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = to32i(dword_4D4C7C); //mov
	esi = to32i(dword_4D4C80); //mov
	di = to16i(word_4E8C06); //mov
	ebp = eax; //mov
	xor_(eax, eax);
	xor_(ecx, ecx);
loc_423CBF:
	edx = di; //movsx
	cmp(ecx, edx);
	if (jge())
		goto loc_423D79;
	edx = to32i(dword_4E8AA6+eax); //mov
	sar(edx, (int32_t)0x10);
	cmp(esi, edx);
	if (jg())
		goto loc_423CDD;
loc_423CD7:
	inc(ecx);
	add(eax, (int32_t)2);
	goto loc_423CBF;
loc_423CDD:
	edx = to32i(dword_4E8964+2+eax); //mov
	sar(edx, (int32_t)0x10);
	cmp(esi, edx);
	if (jge())
		goto loc_423CD7;
	edx = to32i(dword_4E8A56+eax); //mov
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jle())
		goto loc_423CD7;
	edx = to32i(dword_4E8A06+eax); //mov
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jge())
		goto loc_423CD7;
	to32i(dword_4D4C7C) = ebx; //mov
	to32i(dword_4D4C80) = esi; //mov
	to16i(word_4E8C06) = di; //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(dword_4E89B6+eax); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jz())
		goto loc_423D39;
	eax = to32i(ebp+eax*4+0xC); //mov
	cmp(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_423D4A;
	test(to8i(eax+8), (int8_t)1);
	if (jz())
		goto loc_423D4A;
loc_423D39:
	xor_(ecx, ecx);
	ebx = to32i(dword_4D4C7C); //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423D4A:
	edx = 0x2D; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	ax = to16i(dword_4E89B6+2+ecx*2); //mov
	ecx = 1; //mov
	to16i(ebp+0xA) = ax; //mov
	ebx = to32i(dword_4D4C7C); //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423D79:
	cmp(to16i(ebp+0xA), (int16_t)0x64);
	if (jz())
		goto loc_423D91;
	eax = to32i(ebp+8); //mov
	sar(eax, (int32_t)0x10);
	to16i(ebp+0xA) = 0x64; //mov
	to32i(dword_4E8B08) = eax; //mov
loc_423D91:
	to32i(dword_4D4C7C) = ebx; //mov
	to32i(dword_4D4C80) = esi; //mov
	to16i(word_4E8C06) = di; //mov
	xor_(ecx, ecx);
	ebx = to32i(dword_4D4C7C); //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_423DC0()
{
	push32(esi);
	push32(ebp);
	esi = to32i(dword_4D4C80); //mov
	cmp(edx, esi);
	if (jge())
		goto loc_423DEA;
	add(edx, ecx);
	cmp(edx, esi);
	if (jle())
		goto loc_423DEA;
	ebp = to32i(dword_4D4C7C); //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_423DEA;
	add(eax, ebx);
	cmp(eax, ebp);
	if (jle())
		goto loc_423DEA;
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	return;
loc_423DEA:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_423DF0()
{
	push32(ecx);
	ecx = edx; //mov
	edx = to32i(dword_4D4C80); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_423E04;
	eax = 0xFFFFFFFF; //mov
	pop32(ecx);
	return;
loc_423E04:
	sub(edx, eax);
	dec(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	pop32(ecx);
}
Fn(void) Game::_sub_423E10()
{
	push32(ebx);
	push32(edx);
	edx = to32i(eax+8); //mov
	sar(edx, (int32_t)0x10);
	edx = to32i(eax+edx*4+0xC); //mov
	cmp(to8i(edx), (int8_t)2);
	if (jz())
		goto loc_423E34;
loc_423E21:
	edx = to32i(dword_4D4C80); //mov
	eax = to32i(dword_4D4C7C); //mov
	esp -= 4; _sub_4222F0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_423E34:
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)3);
	to32i(dword_4D4C7C) = eax; //mov
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0xD);
	bl = to8i(edx+9); //mov
	to32i(dword_4D4C80) = eax; //mov
	cmp(bl, (int8_t)0xD);
	if (jnz())
		goto loc_423E73;
	cmp(to8i(byte_512DA8), (int8_t)0);
	if (jz())
		goto loc_423E73;
	add(to32i(dword_4D4C7C), (int32_t)0x9F);
loc_423E73:
	test(to8i(edx+8), (int8_t)0x10);
	if (jz())
		goto loc_423E21;
	add(to32i(dword_4D4C7C), (int32_t)0x2E);
	edx = to32i(dword_4D4C80); //mov
	eax = to32i(dword_4D4C7C); //mov
	esp -= 4; _sub_4222F0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_423EA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	ebp = eax; //mov
	cmp(to32i(dword_4D4C78), (int32_t)0);
	if (jz())
		goto loc_423F92;
loc_423EBB:
	edx = (int32_t)(intptr_t)aPtr0; //mov
	eax = to32i(dword_4D4C78); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = ebp; //mov
	ecx = eax; //mov
	esp -= 4; _sub_426890(); esp += 4; //call
	ebx = to32i(dword_4E8AF8); //mov
	edi = to32i(ecx+2); //mov
	ecx = to32i(ecx+4); //mov
	sar(edi, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	inc(edi);
	inc(ecx);
	test(ebx, ebx);
	if (jz())
		goto loc_423EF2;
	eax = ebx; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
loc_423EF2:
	edx = (int32_t)(intptr_t)(ecx+0xA); //lea
	eax = (int32_t)(intptr_t)(edi+0xA); //lea
	xor_(ebx, ebx);
	esp -= 4; _sub_482474(); esp += 4; //call
	esi = to32i(dword_4E8AFC); //mov
	to32i(dword_4E8AF8) = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_423F15;
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
loc_423F15:
	edx = (int32_t)(intptr_t)(ecx+0xA); //lea
	eax = (int32_t)(intptr_t)(edi+0xA); //lea
	xor_(ebx, ebx);
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(dword_4E8AFC) = eax; //mov
	ebx = ebp; //mov
	xor_(edx, edx);
	eax = to32i(dword_4E8AF8); //mov
	xor_(edi, edi);
	esp -= 4; _sub_4825A8(); esp += 4; //call
	to32i(esp+0x100) = edi; //mov
	eax = to32i(ebp+0xC); //mov
	to16i(word_4E8C06) = dx; //mov
	test(eax, eax);
	if (jz())
		goto loc_423F6E;
loc_423F4C:
	edx = to32i(ebx+0xC); //mov
	al = to8i(edx); //mov
	cmp(al, (int8_t)1);
	if (jnb())
		goto loc_423FC4;
loc_423F55:
	edx = to32i(esp+0x100); //mov
	ecx = to32i(ebx+0x10); //mov
	inc(edx);
	add(ebx, (int32_t)4);
	to32i(esp+0x100) = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_423F4C;
loc_423F6E:
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)sub_4242E0; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
	to32i(off_4DAC4C) = edi; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_423F92:
	ecx = to32i(dword_5134B4); //mov
	push32(ecx);
	push32(aSmouse_fsh);
	push32(dword_4E8B0C);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = (int32_t)(intptr_t)dword_4E8B0C; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4D4C78) = eax; //mov
	goto loc_423EBB;
loc_423FC4:
	if (ja())
		goto loc_424072;
	test(to8i(edx+2), (int8_t)1);
	if (jnz())
		goto loc_423F55;
	eax = to32i(byte_4E8C04); //mov
	ecx = to32i(esp+0x100); //mov
	sar(eax, (int32_t)0x10);
	add(edx, (int32_t)4);
	to16i(dword_4E89B6+2+eax*2) = cx; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	ecx = eax; //mov
	cmp(ebp, (int32_t)(intptr_t)off_4D3CFC);
	if (jnz())
		goto loc_424230;
	esp -= 4; _sub_41A210(); esp += 4; //call
loc_424007:
	edx = to32i(ecx+0xC); //mov
	shl(edx, (int32_t)4);
	edi = ax; //movsx
	sar(edx, (int32_t)0x14);
	add(edx, edi);
	esi = edx; //mov
	edx = to32i(byte_4E8C04); //mov
	sar(edx, (int32_t)0x10);
	to16i(dword_4E8AA6+2+edx*2) = si; //mov
	add(si, to16i(ecx+6));
	add(eax, esi);
	to16i(word_4E8968+edx*2) = ax; //mov
	eax = to32i(ecx+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	to16i(dword_4E8A56+2+edx*2) = ax; //mov
	add(ax, to16i(ecx+4));
	di = to16i(word_4E8C06); //mov
	to16i(dword_4E8A06+2+edx*2) = ax; //mov
	cmp(di, (int16_t)0x28);
	if (jge())
		goto loc_423F55;
	eax = edi; //mov
	inc(eax);
	to16i(word_4E8C06) = ax; //mov
	goto loc_423F55;
loc_424072:
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_423F55;
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x100); //mov
	to16i(dword_4E89B6+2+eax*2) = cx; //mov
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	edi = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_4240A0:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4240B8;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4240A0;
loc_4240B8:
	pop32(edi);
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = to32i(byte_4E8C04); //mov
	sar(ecx, (int32_t)0x10);
	to16i(dword_4E8AA6+2+ecx*2) = ax; //mov
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	si = to16i(dword_4E8AA6+2+ecx*2); //mov
	ecx = eax; //mov
	eax = to32i(byte_4E8C04); //mov
	add(ecx, esi);
	sar(eax, (int32_t)0x10);
	add(ecx, (int32_t)0xC);
	to16i(word_4E8968+eax*2) = cx; //mov
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	esp -= 4; _sub_4056F0(); esp += 4; //call
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4241E6;
loc_42411F:
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	ecx = to32i(byte_4E8C04); //mov
	sar(ecx, (int32_t)0x10);
	add(eax, (int32_t)0xC);
	to16i(dword_4E8A06+2+ecx*2) = ax; //mov
	eax = esp; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	cx = to16i(dword_4E8A06+2+ecx*2); //mov
	sub(ecx, eax);
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	sub(ecx, (int32_t)0xC);
	to16i(dword_4E8A56+2+eax*2) = cx; //mov
loc_424163:
	cmp(to8i(edx+9), (int8_t)0x12);
	if (jnz())
		goto loc_42417B;
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	add(to16i(dword_4E8A06+2+eax*2), (int16_t)0x12C);
loc_42417B:
	cmp(to8i(edx+9), (int8_t)0xD);
	if (jnz())
		goto loc_424193;
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	add(to16i(dword_4E8A06+2+eax*2), (int16_t)0xF0);
loc_424193:
	cmp(to32i(edx+0xC), (int32_t)0);
	if (jz())
		goto loc_4241B0;
	test(to8i(edx+8), (int8_t)8);
	if (jnz())
		goto loc_4241B0;
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	add(to16i(dword_4E8A06+2+eax*2), (int16_t)0x78);
loc_4241B0:
	cmp(to8i(edx+9), (int8_t)5);
	if (jnz())
		goto loc_4241C7;
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	add(to16i(dword_4E8A06+2+eax*2), (int16_t)0x6E);
loc_4241C7:
	ax = to16i(word_4E8C06); //mov
	cmp(ax, (int16_t)0x28);
	if (jge())
		goto loc_423F55;
	edx = eax; //mov
	inc(edx);
	to16i(word_4E8C06) = dx; //mov
	goto loc_423F55;
loc_4241E6:
	cmp(eax, (int32_t)4);
	if (jz())
		goto loc_42411F;
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	ecx = to32i(byte_4E8C04); //mov
	sar(ecx, (int32_t)0x10);
	to16i(dword_4E8A56+2+ecx*2) = ax; //mov
	eax = esp; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	cx = to16i(dword_4E8A56+2+ecx*2); //mov
	add(ecx, eax);
	eax = to32i(byte_4E8C04); //mov
	sar(eax, (int32_t)0x10);
	to16i(dword_4E8A06+2+eax*2) = cx; //mov
	goto loc_424163;
loc_424230:
	xor_(eax, eax);
	goto loc_424007;
}
Fn(void) Game::_sub_424240()
{
	push32(ebx);
	push32(edx);
	ebx = (int32_t)(intptr_t)dword_4D4C80; //mov
	edx = (int32_t)(intptr_t)dword_4D4C7C; //mov
	eax = (int32_t)(intptr_t)dword_4D4C84; //mov
	esp -= 4; _sub_422060(); esp += 4; //call
	cmp(to32i(dword_4D4C88), (int32_t)0);
	if (jnz())
		goto loc_424264;
	xor_(eax, eax);
	pop32(edx);
	pop32(ebx);
	return;
loc_424264:
	push32(ecx);
	xor_(ecx, ecx);
	eax = 1; //mov
	to32i(dword_4D4C88) = ecx; //mov
	pop32(ecx);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_424280()
{
	push32(ebx);
	push32(edx);
	ebx = (int32_t)(intptr_t)dword_4D4C80; //mov
	edx = (int32_t)(intptr_t)dword_4D4C7C; //mov
	eax = (int32_t)(intptr_t)dword_4D4C84; //mov
	esp -= 4; _sub_422060(); esp += 4; //call
	cmp(to32i(dword_4D4C88), (int32_t)0);
	if (jnz())
		goto loc_4242A4;
	xor_(eax, eax);
	pop32(edx);
	pop32(ebx);
	return;
loc_4242A4:
	push32(ecx);
	xor_(ecx, ecx);
	eax = 1; //mov
	to32i(dword_4D4C88) = ecx; //mov
	pop32(ecx);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4242C0()
{
	to32i(dword_4E8B00) = eax; //mov
	to32i(dword_4D4C7C) = eax; //mov
	to32i(dword_4E8B04) = edx; //mov
	to32i(dword_4D4C80) = edx; //mov
	_sub_4222F0(); return; //jmp
}
Fn(void) Game::_sub_4242E0()
{
	inc(to32i(dword_4D4C88));
}
Fn(void) Game::_sub_4242F0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xFC);
	edx = eax; //mov
	edi = esp; //mov
	esi = to32i(dword_5134D8); //mov
	push32(edi);
loc_424306:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_42431E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_424306;
loc_42431E:
	pop32(edi);
	edi = esp; //mov
	esi = edx; //mov
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
loc_42432C:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_424344;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_42432C;
loc_424344:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42454B;
	push32(ebx);
	esp -= 4; _sub_486F28(); esp += 4; //call
	esp -= 4; _sub_428730(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_493728(); esp += 4; //call
	edx = 0x2000; //mov
	eax = 0x80000; //mov
	ebx = to32i(dword_4DABE8); //mov
	esp -= 4; _sub_493718(); esp += 4; //call
	ebx = 0x40000; //mov
	edx = 0xFFFF0000; //mov
	ecx = to32i(dword_4DABE8); //mov
	esi = eax; //mov
	edi = eax; //mov
	eax = 0x53430000; //mov
	esp -= 4; _sub_493E90(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+4); //lea
	ebp = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_493BB4(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4EB570) = eax; //mov
loc_4243B6:
	eax = edi; //mov
	esp -= 4; _sub_4246A0(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4243DD;
	eax = to32i(dword_5637F4); //mov
	ebx = to32i(dword_4EB570); //mov
	edx = eax; //mov
	eax = to32i(dword_4DABCC); //mov
	sub(edx, ebx);
	add(eax, eax);
	cmp(edx, eax);
	if (jle())
		goto loc_4243B6;
loc_4243DD:
	test(esi, esi);
	if (jnz())
		goto loc_42457F;
loc_4243E5:
	eax = (int32_t)(intptr_t)aCNfs2seFron_10; //mov
	edx = 0x185; //mov
	push32(aShowdctNoDctCh);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = edx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_424407:
	ebx = 0xC8; //mov
	edx = to32i(esi+0xC); //mov
	eax = to32i(esi+0xA); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	esp -= 4; _sub_424970(); esp += 4; //call
	edx = 0xF; //mov
	to32i(dword_4EB580) = ecx; //mov
	to32i(dword_4EB560) = ecx; //mov
	to32i(dword_4EB558) = ecx; //mov
	to32i(dword_4EB550) = ecx; //mov
	to32i(dword_4EB55C) = ecx; //mov
	push32(ecx);
	eax = ebp; //mov
	ecx = 0x40000; //mov
	esp -= 4; _sub_495780(); esp += 4; //call
	to32i(dword_4EB568) = eax; //mov
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_42459D;
	edx = 0xFFFFFFFF; //mov
	eax = 0xF; //mov
	esp -= 4; _sub_495854(); esp += 4; //call
	ecx = eax; //mov
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4EB570) = eax; //mov
	xor_(ebx, ebx);
loc_42447A:
	eax = ecx; //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_424598;
	eax = to32i(dword_4EB55C); //mov
	cmp(ebx, eax);
	if (jnz())
		goto loc_424598;
	esp -= 4; _sub_483EB0(); esp += 4; //call
	esp -= 4; _sub_4958A0(); esp += 4; //call
	cmp(eax, to32i(dword_4EB580));
	if (jle())
		goto loc_4244B7;
	to32i(dword_4EB580) = eax; //mov
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4EB570) = eax; //mov
loc_4244B7:
	test(esi, esi);
	if (jnz())
		goto loc_4244C4;
	eax = edi; //mov
	esp -= 4; _sub_4246A0(); esp += 4; //call
	esi = eax; //mov
loc_4244C4:
	test(esi, esi);
	if (jz())
		goto loc_424514;
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_424514;
	edx = to32i(dword_4EB580); //mov
	eax = to32i(dword_4EB560); //mov
	sub(eax, edx);
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_424514;
	eax = edx; //mov
	sub(eax, to32i(dword_4EB560));
	cmp(eax, (int32_t)2);
	if (jge())
		goto loc_42458D;
	eax = esi; //mov
	esp -= 4; _sub_4248D0(); esp += 4; //call
	esp -= 4; _sub_424710(); esp += 4; //call
loc_4244FC:
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	edx = to32i(dword_4EB560); //mov
	inc(edx);
	esi = ebx; //mov
	to32i(dword_4EB560) = edx; //mov
loc_424514:
	esp -= 4; _sub_424DE0(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	edx = to32i(dword_4EB570); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_4DABCC); //mov
	add(eax, eax);
	cmp(edx, eax);
	if (jle())
		goto loc_42447A;
	eax = 1; //mov
	to32i(dword_4EB55C) = eax; //mov
	to32i(dword_4EB550) = eax; //mov
	goto loc_42447A;
loc_42454B:
	edx = (int32_t)(intptr_t)aCNfs2seFron_10; //mov
	ecx = 0x16B; //mov
	push32(aMovieFileNotFo);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_42457F:
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4243E5;
	goto loc_424407;
loc_42458D:
	inc(to32i(dword_4EB558));
	goto loc_4244FC;
loc_424598:
	esp -= 4; _sub_495990(); esp += 4; //call
loc_42459D:
	xor_(eax, eax);
	esp -= 4; _sub_4833E7(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4EB570) = eax; //mov
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_424675;
loc_4245B7:
	cmp(to32i(dword_4EB55C), (int32_t)0);
	if (jnz())
		goto loc_424675;
	eax = ebp; //mov
	esp -= 4; _sub_4246E0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4245DD;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4245DD;
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
loc_4245DD:
	test(esi, esi);
	if (jnz())
		goto loc_4245EA;
	eax = edi; //mov
	esp -= 4; _sub_4246A0(); esp += 4; //call
	esi = eax; //mov
loc_4245EA:
	test(esi, esi);
	if (jz())
		goto loc_42463C;
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_42463C;
	esp -= 4; _sub_4833F3(); esp += 4; //call
	eax = to32i(dword_4DABCC); //mov
	edx = eax; //mov
	ecx = 0xF; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esp -= 4; _sub_4833E7(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4EB570) = eax; //mov
	eax = esi; //mov
	edx = esi; //mov
	esp -= 4; _sub_4248D0(); esp += 4; //call
	esp -= 4; _sub_424710(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	ebx = to32i(dword_4EB560); //mov
	inc(ebx);
	xor_(esi, esi);
	to32i(dword_4EB560) = ebx; //mov
loc_42463C:
	esp -= 4; _sub_424DE0(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	edx = to32i(dword_4EB570); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_4DABCC); //mov
	add(eax, eax);
	cmp(edx, eax);
	if (jle())
		goto loc_42466C;
	ecx = 1; //mov
	to32i(dword_4EB55C) = ecx; //mov
	to32i(dword_4EB550) = ecx; //mov
loc_42466C:
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4245B7;
loc_424675:
	esp -= 4; _sub_424890(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_4939AC(); esp += 4; //call
	esp -= 4; _sub_4286B0(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	eax = to32i(dword_4EB55C); //mov
	pop32(ebx);
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4246A0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	esp -= 4; _sub_4246E0(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4246BF;
	test(eax, eax);
	if (jz())
		goto loc_4246BF;
	cmp(to32i(eax), (int32_t)0x4443546D);
	if (jnz())
		goto loc_4246C4;
	pop32(edx);
	pop32(ecx);
	return;
loc_4246BF:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4246C4:
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4246E0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	esp -= 4; _sub_4953DC(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4246F2;
	test(eax, eax);
	if (jz())
		goto loc_4246F5;
loc_4246F2:
	pop32(edx);
	pop32(ecx);
	return;
loc_4246F5:
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49558C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4246F2;
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_424710()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	eax = to32i(dword_4EB54C); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	xor_(edx, edx);
	ecx = to32i(dword_4EB554); //mov
	to32i(esp) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_424877;
	ecx = (int32_t)(intptr_t)dword_4E8D4C; //mov
	to32i(esp+8) = edx; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+0xC) = ecx; //mov
loc_424755:
	ebp = to32i(dword_4EB564); //mov
	xor_(edi, edi);
	test(ebp, ebp);
	if (jle())
		goto loc_42483E;
	eax = to32i(esp+4); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0xC); //mov
	ebp = to32i(esp+0xC); //mov
	to32i(esp+0x10) = eax; //mov
	add(eax, (int32_t)0x20);
	esi = to32i(esp+8); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0xC); //mov
	to32i(esp+0x1C) = edi; //mov
	add(eax, (int32_t)0x40);
	add(ebp, (int32_t)0x60);
	to32i(esp+0x18) = eax; //mov
loc_424796:
	push32(0);
	edx = to32i(esp+0x18); //mov
	eax = to32i(dword_4EB56C); //mov
	ecx = to32i(dword_4EB578); //mov
	ebx = to32i(dword_4EB574); //mov
	push32(eax);
	eax = to32i(esp+0x24); //mov
	neg(edx);
	neg(eax);
	esp -= 4; _sub_492F98(); esp += 4; //call
	eax = to32i(dword_4EB54C); //mov
	eax = to32i(eax+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	edx = to32i(dword_4E8C0C+esi); //mov
	push32(edx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	ecx = to32i(dword_4E8C0C+esi); //mov
	push32(ecx);
	add(esi, (int32_t)4);
	ebx = to32i(esp+0x14); //mov
	esp -= 4; _sub_4975E8(); esp += 4; //call
	edx = to32i(esp+0x18); //mov
	push32(ebp);
	ecx = to32i(esp+0x24); //mov
	eax = edi; //mov
	push32(edx);
	shl(eax, (int32_t)7);
	push32(ecx);
	add(eax, ebx);
	add(ebp, (int32_t)0x80);
	push32(eax);
	inc(edi);
	ebx = to32i(esp+0x30); //mov
	esp -= 4; _sub_497B24(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x1C); //mov
	add(ebx, (int32_t)0x80);
	ecx = to32i(dword_4EB564); //mov
	to32i(esp+0x20) = ebx; //mov
	add(eax, (int32_t)0x80);
	add(edx, (int32_t)0x40);
	to32i(esp+0x18) = eax; //mov
	to32i(esp+0x1C) = edx; //mov
	cmp(edi, ecx);
	if (jl())
		goto loc_424796;
loc_42483E:
	ebx = to32i(esp+0xC); //mov
	esi = to32i(esp+8); //mov
	edi = to32i(esp+4); //mov
	ebp = to32i(esp); //mov
	edx = to32i(dword_4EB554); //mov
	add(ebx, (int32_t)0x500);
	add(esi, (int32_t)0x28);
	add(edi, (int32_t)0x40);
	inc(ebp);
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+8) = esi; //mov
	to32i(esp+4) = edi; //mov
	to32i(esp) = ebp; //mov
	cmp(ebp, edx);
	if (jl())
		goto loc_424755;
loc_424877:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_424890()
{
	push32(ecx);
	push32(edx);
	eax = to32i(dword_4EB574); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4EB57C); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	esp -= 4; _sub_4975B0(); esp += 4; //call
	eax = to32i(dword_4EB54C); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4248D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(dword_4EB57C); //mov
	ebx = to32i(eax+0x14); //mov
	add(eax, (int32_t)0x18);
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_492A1C(); esp += 4; //call
	eax = to32i(ecx+0x12); //mov
	sar(eax, (int32_t)0x10);
	xor_(esi, esi);
	esp -= 4; _sub_4929D4(); esp += 4; //call
	edx = to32i(dword_4EB578); //mov
	xor_(ebp, ebp);
	do { printf("__4248D0: entry dword_4EB57C=%x dword_4EB578=%x dword_4EB56C=%x\n", to32i(dword_4EB57C), to32i(dword_4EB578), to32i(dword_4EB56C)); fflush(stdout); } while(0);
	test(edx, edx);
	if (jle())
		goto loc_42495D;
loc_424905:
	ebx = to32i(dword_4EB56C); //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_424950;
loc_424911:
	ebx = to32i(dword_4EB578); //mov
	edx = ecx; //mov
	imul32(edx, ebx);
	add(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4EB574); //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(esi+esi); //lea
	add(edx, eax);
	eax = to32i(dword_4EB57C); //mov
	do { if (eax == 0) { printf("__4248D0: NULL surface at loop, skipping\n"); fflush(stdout); goto loc_424950; } } while(0);
	add(eax, edi);
	add(ecx, (int32_t)0x10);
	esp -= 4; _sub_492A40(); esp += 4; //call
	edi = to32i(dword_4EB56C); //mov
	add(esi, eax);
	cmp(ecx, edi);
	if (jl())
		goto loc_424911;
loc_424950:
	ecx = to32i(dword_4EB578); //mov
	add(ebp, (int32_t)0x10);
	cmp(ebp, ecx);
	if (jl())
		goto loc_424905;
loc_42495D:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_424970()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x3C);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+4) = eax; //mov
	to32i(esp+8) = edx; //mov
	to32i(dword_4EB578) = eax; //mov
	to32i(dword_4EB56C) = edx; //mov
	edx = 0x280; //mov
	esi = (int32_t)(intptr_t)(eax+eax); //lea
	sub(edx, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+8); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = 0x1E0; //mov
	add(edx, edx);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edi = to32i(esp+8); //mov
	imul32(esi, edi);
	ecx = 0x7F; //mov
	ebx = to32i(dword_4DABE8); //mov
	edx = (int32_t)(intptr_t)aCNfs2seFron_10; //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)aShowdct; //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = esi; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0x80; //mov
	ebx = to32i(dword_4DABE8); //mov
	to32i(dword_4EB574) = eax; //mov
	eax = (int32_t)(intptr_t)aCNfs2seFron_10; //mov
	to32i(dword_4DB1DC) = edx; //mov
	to32i(dword_4DB1D8) = eax; //mov
	edx = esi; //mov
	eax = (int32_t)(intptr_t)aShowdct; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x10; //mov
	edx = 0x40; //mov
	ecx = to32i(dword_4DABE8); //mov
	to32i(dword_4EB57C) = eax; //mov
	do { printf("__424970: dword_4EB57C=%x dword_4EB574=%x width=%x height=%x\n", eax, to32i(dword_4EB574), to32i(dword_4EB578), to32i(dword_4EB56C)); fflush(stdout); } while(0);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	push32(0);
	to32i(dword_4EB54C) = eax; //mov
	esp -= 4; _sub_4976C8(); esp += 4; //call
	esp -= 4; _sub_4975B0(); esp += 4; //call
	edx = to32i(esp+4); //mov
	add(edx, (int32_t)0x3F);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	edx = (int32_t)(intptr_t)(edi+0x3F); //lea
	to32i(dword_4EB564) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	xor_(ecx, ecx);
	to32i(esp+0x18) = ecx; //mov
	to32i(dword_4EB554) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_424C86;
	eax = to32i(esp); //mov
	to32i(esp+0x14) = ecx; //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp+0x10) = eax; //mov
loc_424A95:
	eax = to32i(dword_4EB564); //mov
	xor_(esi, esi);
	test(eax, eax);
	if (jle())
		goto loc_424C48;
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	ebx = to32i(esp+0x14); //mov
	add(eax, (int32_t)0x80);
	edi = to32i(esp+0xC); //mov
	to32i(esp+0x30) = eax; //mov
loc_424AC1:
	push32(0);
	push32(0);
	push32(4);
	push32(0x40);
	push32(0x40);
	add(ebx, (int32_t)0x80);
	esp -= 4; _sub_497464(); esp += 4; //call
	xor_(ecx, ecx);
	to32i(dword_4E8CD4+ebx) = ecx; //mov
	to32i(dword_4E8CE0+ebx) = ecx; //mov
	edx = to32i(esp+0x1C); //mov
	to32i(dword_4E8CE4+ebx) = ecx; //mov
	to32i(dword_4E8C0C+edi) = eax; //mov
	to32i(dword_4E8CE8+ebx) = ecx; //mov
	eax = esi; //mov
	to32i(dword_4E8CF4+ebx) = ecx; //mov
	shl(eax, (int32_t)7);
	to32i(dword_4E8D00+ebx) = ecx; //mov
	add(eax, edx);
	to32i(dword_4E8D08+ebx) = ecx; //mov
	to32i(esp+0x38) = eax; //mov
	to32i(dword_4E8D14+ebx) = ecx; //mov
	fild(to32i(esp+0x38));
	fstp(to32f(esp+0x28));
	eax = to32i(esp+0x28); //mov
	to32i(dword_4E8CCC+ebx) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(dword_4E8D20+ebx) = ecx; //mov
	to32i(esp+0x38) = eax; //mov
	to32i(dword_4E8D34+ebx) = ecx; //mov
	fild(to32i(esp+0x38));
	fstp(to32f(esp+0x34));
	eax = to32i(esp+0x34); //mov
	to32i(dword_4E8CD0+ebx) = eax; //mov
	to32i(dword_4E8CD8+ebx) = 0x3F800000; //mov
	eax = to32i(esp+0x30); //mov
	to32i(dword_4E8D40+ebx) = ecx; //mov
	to32i(esp+0x38) = eax; //mov
	to32i(dword_4E8D44+ebx) = ecx; //mov
	fild(to32i(esp+0x38));
	fstp(to32f(esp+0x24));
	eax = to32i(esp+0x24); //mov
	to32i(dword_4E8CEC+ebx) = eax; //mov
	eax = to32i(esp+0x34); //mov
	to32i(dword_4E8CF0+ebx) = eax; //mov
	eax = 0x3F800000; //mov
	to32i(dword_4E8CF8+ebx) = eax; //mov
	to32i(dword_4E8D04+ebx) = eax; //mov
	eax = to32i(esp+0x24); //mov
	edx = 0xFFFFFFFF; //mov
	to32i(dword_4E8D0C+ebx) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(dword_4E8CDC+ebx) = edx; //mov
	add(eax, (int32_t)0x80);
	to32i(dword_4E8CFC+ebx) = edx; //mov
	to32i(esp+0x38) = eax; //mov
	to32i(dword_4E8D1C+ebx) = edx; //mov
	fild(to32i(esp+0x38));
	fstp(to32f(esp+0x2C));
	eax = to32i(esp+0x2C); //mov
	to32i(dword_4E8D10+ebx) = eax; //mov
	eax = 0x3F800000; //mov
	add(edi, (int32_t)4);
	to32i(dword_4E8D18+ebx) = eax; //mov
	ecx = to32i(esp+0x30); //mov
	to32i(dword_4E8D24+ebx) = eax; //mov
	edx = eax; //mov
	to32i(dword_4E8D28+ebx) = eax; //mov
	eax = to32i(esp+0x28); //mov
	inc(esi);
	to32i(dword_4E8D2C+ebx) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	add(ecx, (int32_t)0x80);
	to32i(dword_4E8D30+ebx) = eax; //mov
	eax = edx; //mov
	edx = 0xFFFFFFFF; //mov
	to32i(dword_4E8D38+ebx) = eax; //mov
	to32i(esp+0x30) = ecx; //mov
	to32i(dword_4E8D3C+ebx) = edx; //mov
	edx = eax; //mov
	eax = to32i(dword_4EB564); //mov
	to32i(dword_4E8D48+ebx) = edx; //mov
	cmp(esi, eax);
	if (jl())
		goto loc_424AC1;
loc_424C48:
	esi = to32i(esp+0x10); //mov
	edi = to32i(esp+0x14); //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+0x18); //mov
	ecx = to32i(dword_4EB554); //mov
	add(esi, (int32_t)0x80);
	add(edi, (int32_t)0x500);
	add(eax, (int32_t)0x28);
	inc(edx);
	to32i(esp+0x10) = esi; //mov
	to32i(esp+0x14) = edi; //mov
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_424A95;
loc_424C86:
	eax = to32i(esp+4); //mov
	edx = eax; //mov
	ecx = 0x40; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	test(edx, edx);
	if (jle())
		goto loc_424D2F;
	cmp(to32i(dword_4EB554), (int32_t)0);
	if (jle())
		goto loc_424D2F;
	eax = to32i(esp+4); //mov
	ecx = to32i(esp+0x1C); //mov
	add(eax, eax);
	add(eax, ecx);
	edi = (int32_t)(intptr_t)(eax-1); //lea
	eax = to32i(dword_4EB554); //mov
	fld(to64f(dbl_4C9C1C));
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	fld(to64f(dbl_4C9C24));
	add(esi, eax);
	xor_(ebx, ebx);
	shl(esi, (int32_t)8);
loc_424CD9:
	eax = to32i(dword_4EB564); //mov
	to32i(esp+0x38) = edi; //mov
	to32i(esp+0x34) = edx; //mov
	add(ebx, (int32_t)0x500);
	fild(to32i(esp+0x34));
	fild(to32i(esp+0x38));
	fstp(to32f(esp+0x34));
	shl(eax, (int32_t)7);
	ecx = to32i(esp+0x34); //mov
	fadd_st(0, 1);
	to32i(dword_4E87EC+ebx+eax) = ecx; //mov
	fmul_st(0, 2);
	to32i(dword_4E880C+ebx+eax) = ecx; //mov
	fstp(to32f(esp+0x34));
	ecx = to32i(esp+0x34); //mov
	to32i(dword_4E8804+ebx+eax) = ecx; //mov
	to32i(dword_4E8824+ebx+eax) = ecx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_424CD9;
	fstp_st(0);
	fstp_st(0);
loc_424D2F:
	eax = to32i(esp+8); //mov
	edx = eax; //mov
	ecx = 0x40; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	test(edx, edx);
	if (jle())
		goto loc_424DD1;
	cmp(to32i(dword_4EB564), (int32_t)0);
	if (jle())
		goto loc_424DD1;
	fld(to64f(dbl_4C9C1C));
	edi = to32i(esp+8); //mov
	esi = to32i(esp); //mov
	fld(to64f(dbl_4C9C24));
	add(edi, edi);
	xor_(ebx, ebx);
	add(edi, esi);
	esi = to32i(dword_4EB564); //mov
	dec(edi);
	shl(esi, (int32_t)7);
loc_424D77:
	eax = to32i(dword_4EB554); //mov
	dec(eax);
	imul32(eax, 0x500);
	to32i(esp+0x34) = edi; //mov
	to32i(esp+0x38) = edx; //mov
	add(ebx, (int32_t)0x80);
	fild(to32i(esp+0x38));
	fild(to32i(esp+0x34));
	fstp(to32f(esp+0x34));
	fadd_st(0, 1);
	ecx = to32i(esp+0x34); //mov
	fmul_st(0, 2);
	to32i(dword_4E8D10+ebx+eax) = ecx; //mov
	fstp(to32f(esp+0x34));
	to32i(dword_4E8D30+ebx+eax) = ecx; //mov
	ecx = to32i(esp+0x34); //mov
	to32i(dword_4E8D28+ebx+eax) = ecx; //mov
	to32i(dword_4E8D48+ebx+eax) = ecx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_424D77;
	fstp_st(0);
	fstp_st(0);
loc_424DD1:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_424DE0()
{
	esp -= 4; _sub_405960(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_424E05;
	cmp(eax, (int32_t)0x4800);
	if (jz())
		goto locret_424E05;
	cmp(eax, (int32_t)0x5000);
	if (jz())
		goto locret_424E05;
	cmp(eax, (int32_t)0x4B00);
	if (jz())
		goto locret_424E05;
	cmp(eax, (int32_t)0x4D00);
	if (jnz())
		goto loc_424E06;
locret_424E05:
	return;
loc_424E06:
	to32i(dword_4EB55C) = 1; //mov
}
Fn(void) Game::_sub_424E60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x7C);
	to32i(esp+0x5C) = eax; //mov
	ecx = to32i(dword_512208); //mov
	xor_(edx, edx);
	xor_(edi, edi);
	to32i(esp+0x54) = edx; //mov
	cmp(ecx, (int32_t)1);
	if (jl())
		goto loc_424F08;
	ax = to16i(dword_51220C); //mov
loc_424E8A:
	eax = ax; //cwde
	to32i(esp+0x74) = eax; //mov
	imul32(eax, 0x684);
	edx = to32i(esp+0x5C); //mov
	add(edx, eax);
	eax = to32i(edx+0x21C); //mov
	eax = to32i(eax); //mov
	esi = to32i(edx+0x280); //mov
	to32i(esp+0x78) = edx; //mov
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_424EFC;
	eax = ax; //cwde
	xor_(edx, edx);
	to32i(esp+0x6C) = eax; //mov
	dl = to8i(byte_512DBD); //mov
	ebp = to32i(esp+0x6C); //mov
	eax = (int32_t)(intptr_t)(edx+0xC); //lea
	cmp(eax, ebp);
	if (jle())
		goto loc_424EFC;
	cmp(to32i(dword_512204), (int32_t)0);
	if (jnz())
		goto loc_424EFC;
	cmp(to8i(byte_512DAA), (int8_t)3);
	if (jz())
		goto loc_424EFC;
	cmp(to8i(byte_512DD0), (int8_t)1);
	if (jz())
		goto loc_424EFC;
	cmp(to8i(byte_512DEB), (int8_t)1);
	if (jz())
		goto loc_424EFC;
	cmp(to8i(byte_512DAF), (int8_t)1);
	if (jz())
		goto loc_424F0F;
loc_424EFC:
	eax = edi; //mov
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_424F08:
	xor_(eax, eax);
	goto loc_424E8A;
loc_424F0F:
	edx = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	ecx = 0x3D6; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aFilebufr; //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0xC8; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ebp = eax; //mov
	to32i(esp+0x70) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_424EFC;
	eax = to32i(dword_51221C); //mov
	edx = esp; //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	esi = ax; //movsx
	ecx = (int32_t)(intptr_t)(esp+0x58); //lea
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_425F90(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	cmp(to32i(esp+0x50), (int32_t)0);
	if (jz())
		goto loc_42510C;
	esi = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	edi = 0x3ED; //mov
	edx = to32i(esp+0x58); //mov
	eax = (int32_t)(intptr_t)aPrhbuf; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ebx = to32i(esp+0x58); //mov
	to32i(esp+0x60) = eax; //mov
	to32i(esp+0x64) = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0x50); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x50); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = to32i(dword_5121F8+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A000(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esp+0x6C); //mov
	add(eax, eax);
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	edx = dx; //movsx
	sub(ecx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	add(eax, eax);
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = to32i(esp+0x60); //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(ebp+0x14); //lea
	add(edx, eax);
	ecx = 0xB4; //mov
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
	eax = to32i(esp+0x78); //mov
	eax = to32i(eax+0x21C); //mov
	ax = to16i(eax); //mov
	to16i(ebp+0) = ax; //mov
	ax = to16i(dword_5121FC); //mov
	to16i(ebp+2) = ax; //mov
	eax = to32i(esp+0x78); //mov
	ebx = esp; //mov
	to32i(esp+0x68) = edx; //mov
	ax = to16i(eax+0x27C); //mov
	edx = to32i(esp+0x74); //mov
	to16i(ebp+4) = ax; //mov
	eax = to32i(esp+0x5C); //mov
	esp -= 4; _sub_41A040(); esp += 4; //call
	eax = ax; //cwde
	edx = to32i(esp+0x78); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	eax = to32i(eax+0x238); //mov
	to32i(ebp+8) = eax; //mov
	ebx = esp; //mov
	eax = to32i(edx+0x234); //mov
	edx = to32i(esp+0x74); //mov
	to32i(ebp+0xC) = eax; //mov
	eax = to32i(esp+0x5C); //mov
	esp -= 4; _sub_41A0B0(); esp += 4; //call
	eax = ax; //cwde
	ecx = to32i(esp+0x78); //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	edi = to32i(esp+0x68); //mov
	esi = ebp; //mov
	eax = to32i(eax+0x258); //mov
	ecx = 0xC8; //mov
	to32i(ebp+0x10) = eax; //mov
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
	xor_(eax, eax);
	edx = esp; //mov
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_425F90(); esp += 4; //call
	eax = to32i(esp+0x60); //mov
	edx = to32i(esp+0x60); //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(ax, ax);
	if (jnz())
		goto loc_4250DF;
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
loc_4250DF:
	ebx = to32i(esp+0x64); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4250EE;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4250EE:
	esi = to32i(esp+0x70); //mov
	test(esi, esi);
	if (jz())
		goto loc_4250FD;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4250FD:
	eax = 1; //mov
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42510C:
	eax = esi; //mov
	esp -= 4; _sub_425DD0(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x7C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_425130()
{
	static const void *const off_425120[] = {
		&&loc_425542,
		&&loc_42558C,
		&&loc_425874,
		&&loc_4258BB,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xE4);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0xB4) = eax; //mov
	to32i(esp+0xAC) = edx; //mov
	to16i(esp+0xD0) = bx; //mov
	to16i(esp+0xE0) = cx; //mov
	esi = 1; //mov
	xor_(edx, edx);
	edi = 0xF3; //mov
	to16i(esp+0xCC) = dx; //mov
loc_425170:
	to32i(esp+0xD8) = esi; //mov
	fild(to16i(esp+0xD8));
	fmul(to64f(dbl_4C9DCC));
	fsubr(to64f(dbl_4C9E24));
	fmul(to64f(dbl_4C9DD4));
	push32(0xFFAAAAAA);
	ebx = 0x273; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xB4));
	ecx = to32i(esp+0xB4); //mov
	eax = edi; //mov
	edx = ecx; //mov
	inc(esi);
	esp -= 4; _sub_4967E0(); esp += 4; //call
	cmp(si, (int16_t)0xA);
	if (jle())
		goto loc_425170;
	esi = 1; //mov
	edi = 0x8F; //mov
loc_4251C7:
	to32i(esp+0xD8) = esi; //mov
	fild(to16i(esp+0xD8));
	fmul(to64f(dbl_4C9DDC));
	fadd(to64f(dbl_4C9E2C));
	fmul(to64f(dbl_4C9DE4));
	push32(0xFFAAAAAA);
	edx = 0x1B0; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xB4));
	ebx = to32i(esp+0xB4); //mov
	ecx = edi; //mov
	eax = ebx; //mov
	inc(esi);
	esp -= 4; _sub_4967E0(); esp += 4; //call
	cmp(si, (int16_t)0xA);
	if (jl())
		goto loc_4251C7;
	eax = 0xFFFFFF50; //mov
	ecx = 0x126; //mov
	ebx = 5; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = 0x8F; //mov
	eax = 0xF1; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	eax = 0xFFFFFF50; //mov
	ecx = 5; //mov
	ebx = 0x180; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = 0x1B0; //mov
	eax = 0xF3; //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	ah = to8i(byte_512DFB); //mov
	cmp(ah, (int8_t)2);
	if (jnz())
		goto loc_425415;
loc_42526B:
	cmp(to16i(esp+0xE0), (int16_t)1);
	if (jnz())
		goto loc_42541E;
loc_42527A:
	eax = to32i(esp+0xDE); //mov
	sar(eax, (int32_t)0x10);
	add(eax, (int32_t)0xC4);
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_5);
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	push32(eax);
	edi = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	dl = 0x20; //mov
	esi = (int32_t)(intptr_t)(esp+0x54); //lea
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
loc_4252B5:
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_4252CD;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4252CB;
	inc(esi);
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_4252CD;
	inc(esi);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4252B5;
loc_4252CB:
	sub(esi, esi);
loc_4252CD:
	edx = (int32_t)(intptr_t)asc_4C9D9C; //mov
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _strtok_(); esp += 4; //call
	push32(eax);
	push32(aS_5);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	ebx = 0xA7; //mov
	push32(4);
	ecx = 0x10; //mov
	edx = 0xC6; //mov
	push32(3);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	inc(esi);
	esp -= 4; _sub_4053A0(); esp += 4; //call
	push32(4);
	ecx = 0x10; //mov
	ebx = 0xA7; //mov
	push32(3);
	edx = 0xE0; //mov
	eax = esi; //mov
loc_425320:
	esp -= 4; _sub_4053A0(); esp += 4; //call
	eax = 0xCE; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	push32(4);
	ecx = 0x12; //mov
	ebx = 0x1B9; //mov
	push32(3);
	edx = 0xF3; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0xCD; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	push32(4);
	ecx = 0x12; //mov
	ebx = 0x1B9; //mov
	push32(4);
	edx = 0x273; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0xDE); //mov
	sar(eax, (int32_t)0x10);
	add(eax, (int32_t)0xC8);
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_5);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(3);
	eax = 0xCC; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x19);
	edx = 0xF3; //mov
	ebx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_4253DD:
	eax = to32i(esp+0xCA); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x14);
	add(eax, to32i(esp+0xAC));
	cmp(to32i(eax+8), (int32_t)0);
	if (jz())
		goto loc_425479;
	esi = to32i(esp+0xCC); //mov
	cmp(si, (int16_t)0xA);
	if (jge())
		goto loc_425479;
	edx = esi; //mov
	inc(edx);
	to16i(esp+0xCC) = dx; //mov
	goto loc_4253DD;
loc_425415:
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_42526B;
loc_42541E:
	cmp(to8i(byte_512DFB), (int8_t)4);
	if (jnz())
		goto loc_425436;
	cmp(to16i(esp+0xE0), (int16_t)0);
	if (jz())
		goto loc_42527A;
loc_425436:
	eax = to32i(esp+0xDE); //mov
	sar(eax, (int32_t)0x10);
	add(eax, (int32_t)0xC4);
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_5);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(4);
	ecx = 0x10; //mov
	ebx = 0xA7; //mov
	push32(3);
	edx = 0xE0; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	goto loc_425320;
loc_425479:
	cmp(to16i(esp+0xCC), (int16_t)1);
	if (jl())
		goto loc_425571;
	eax = to32i(esp+0xCE); //mov
	edx = (int32_t)(intptr_t)(esp+0x54); //lea
	ebx = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	esi = 0x2D4; //mov
	ecx = to32i(esp+0xCA); //mov
	sar(eax, (int32_t)0x10);
	edi = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	esp -= 4; _sub_41B230(); esp += 4; //call
	sar(ecx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	edx = to32i(esp+0xB4); //mov
	to32i(dword_4DB1D8) = ebx; //mov
	ebx = 0x20; //mov
	to32i(edx) = eax; //mov
	eax = (int32_t)(intptr_t)aPrhdumi; //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x20; //mov
	esi = eax; //mov
	eax = 0x2D5; //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	to32i(dword_4DB1DC) = eax; //mov
	eax = (int32_t)(intptr_t)aPrhfdumi; //mov
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x2D6; //mov
	to32i(esp+0xB8) = eax; //mov
	edx = (int32_t)(intptr_t)(ecx+ecx); //lea
	eax = (int32_t)(intptr_t)aPrhrank; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edi = eax; //mov
	cmp(to16i(esp+0xE0), (int16_t)3);
	if (jbe())
		goto loc_42557B;
loc_425542:
	ebx = to32i(esp+0xAC); //mov
	xor_(edx, edx);
loc_42554B:
	ecx = to32i(esp+0xCA); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4255BE;
	imul32(ecx, eax, 0x14);
	add(ecx, ebx);
	ecx = to32i(ecx+2); //mov
	sar(ecx, (int32_t)0x10);
	to32i(esi+eax*4) = ecx; //mov
	to16i(edi+eax*2) = dx; //mov
	inc(edx);
	goto loc_42554B;
loc_425571:
	xor_(edx, edx);
	eax = edx; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_42557B:
	xor_(eax, eax);
	ax = to16i(esp+0xE0); //mov
	goto *off_425120[eax];
loc_42558C:
	xor_(edx, edx);
loc_42558E:
	ecx = to32i(esp+0xCA); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4255BE;
	imul32(ecx, eax, 0x14);
	add(ecx, to32i(esp+0xAC));
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebx, esi);
	ecx = to32i(ecx+8); //mov
	to32i(ebx) = ecx; //mov
	to16i(edi+eax*2) = dx; //mov
	inc(edx);
	goto loc_42558E;
loc_4255BE:
	ebx = edi; //mov
	edx = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	ebx = to32i(esp+0xE0); //mov
	test(bx, bx);
	if (jbe())
		goto loc_425902;
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_425A69;
	cmp(to8i(byte_512DFA), (int8_t)1);
	if (jnz())
		goto loc_4259AF;
	ecx = 0x471C; //mov
loc_4255F5:
	eax = to16i(edi); //movsx
	to32i(esp+0xC8) = ecx; //mov
	fild(to32i(esi+eax*4));
	fild(to32i(esp+0xC8));
	fld1();
	fdivrp_st(1, 0);
	fstp(to32f(esp+0xC4));
	fmul(to32f(esp+0xC4));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _floor_(); esp += 4; //call
	to32i(esp+0xC8) = ecx; //mov
	eax = to32i(esp+0xCA); //mov
	fild(to32i(esp+0xC8));
	sar(eax, (int32_t)0x10);
	fstp(to64f(esp+0xA4));
	eax = to16i(edi+eax*2-2); //movsx
	fmul(to64f(esp+0xA4));
	fild(to32i(esi+eax*4));
	fmul(to32f(esp+0xC4));
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _ceil_(); esp += 4; //call
	fmul(to64f(esp+0xA4));
	eax = to32i(esp); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xBC));
	edx = to32i(esp+0xBC); //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	test(eax, eax);
	if (jnz())
		goto loc_4259B9;
	add(to32i(esp+0xBC), ecx);
loc_4256A5:
	eax = to32i(esp); //mov
	to32i(esp+0xC4) = eax; //mov
	to32i(esp+0xC8) = ecx; //mov
	fild(to32i(esp+0xC4));
	fild(to32i(esp+0xC8));
	fld1();
	fdivrp_st(1, 0);
	fstp(to32f(esp+0xC4));
	fmul(to32f(esp+0xC4));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	push32(a5_0f);
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = to32i(esp+0xBC); //mov
	to32i(esp+0xC8) = eax; //mov
	fild(to32i(esp+0xC8));
	fmul(to32f(esp+0xC4));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	push32(a5_0f);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
loc_425722:
	push32(4);
	ecx = 0x12; //mov
	ebx = 0x1B0; //mov
	push32(1);
	edx = 0xEC; //mov
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(4);
	ecx = 0x12; //mov
	ebx = 0x86; //mov
	push32(1);
	edx = 0xEC; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp); //mov
	edx = to32i(esp+0xBC); //mov
	sub(edx, eax);
	xor_(eax, eax);
	to32i(esp+0xBC) = edx; //mov
	to16i(esp+0xDC) = ax; //mov
loc_425777:
	eax = to32i(esp+0xCA); //mov
	ecx = to32i(esp+0xDA); //mov
	sar(eax, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	to32i(esp+0xC0) = eax; //mov
	cmp(ecx, eax);
	if (jge())
		goto loc_425B97;
	eax = to32i(esp+0xB8); //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(edx, eax);
	to32i(edx) = 0; //mov
	to32i(edx+4) = 0; //mov
	eax = to32i(esp); //mov
	ebx = to32i(esi+ecx*4); //mov
	sub(ebx, eax);
	eax = to32i(esp+0xBC); //mov
	to32i(esi+ecx*4) = ebx; //mov
	to32i(esp+0xC8) = eax; //mov
	fild(to32i(esi+ecx*4));
	fild(to32i(esp+0xC8));
	fdivp_st(1, 0);
	fld(to64f(dbl_4C9E0C));
	fxch_st(1);
	fmul_st(0, 1);
	fstp(to64f(edx));
	fsub(to64f(edx));
	fadd(to64f(dbl_4C9E34));
	fstp(to64f(edx));
	eax = to32i(edx+4); //mov
	ebx = to32i(edx); //mov
	edx = to32i(esp+0xC0); //mov
	sub(edx, ecx);
	push32(eax);
	dec(edx);
	push32(ebx);
	to32i(esp+0xD0) = edx; //mov
	esp -= 4; _floor_(); esp += 4; //call
	fild(to32i(esp+0xC8));
	fmul(to64f(dbl_4C9E14));
	fmul(to64f(dbl_4C9E1C));
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xB0));
	eax = to32i(esp+0xB0); //mov
	edx = 0xC00; //mov
	sub(eax, (int32_t)3);
	fadd(to64f(dbl_4C9E3C));
	ecx = eax; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xB0));
	ebx = to32i(esp+0xB0); //mov
	eax = (int32_t)(intptr_t)aDot; //mov
	sub(ebx, (int32_t)3);
	esp -= 4; _sub_405B30(); esp += 4; //call
	inc(to16i(esp+0xDC));
	goto loc_425777;
loc_425874:
	xor_(edx, edx);
loc_425876:
	ecx = to32i(esp+0xCA); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4255BE;
	imul32(ecx, eax, 0x14);
	ebx = to32i(esp+0xAC); //mov
	add(ebx, ecx);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	to32i(esp+0xB0) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esi+ecx); //lea
	ecx = to32i(esp+0xB0); //mov
	ecx = to32i(ecx+0xC); //mov
	to32i(ebx) = ecx; //mov
	to16i(edi+eax*2) = dx; //mov
	inc(edx);
	goto loc_425876;
loc_4258BB:
	xor_(edx, edx);
loc_4258BD:
	ecx = to32i(esp+0xCA); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_4255BE;
	imul32(ecx, eax, 0x14);
	ebx = to32i(esp+0xAC); //mov
	add(ebx, ecx);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	to32i(esp+0xC4) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esi+ecx); //lea
	ecx = to32i(esp+0xC4); //mov
	ecx = to32i(ecx+0x10); //mov
	to32i(ebx) = ecx; //mov
	to16i(edi+eax*2) = dx; //mov
	inc(edx);
	goto loc_4258BD;
loc_425902:
	eax = to16i(edi); //movsx
	eax = to32i(esi+eax*4); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0xCA); //mov
	sar(eax, (int32_t)0x10);
	eax = to16i(edi+eax*2-2); //movsx
	eax = to32i(esi+eax*4); //mov
	ecx = to32i(esp); //mov
	to32i(esp+0xBC) = eax; //mov
	sub(eax, ecx);
	if (jnz())
		goto loc_425967;
	inc(to32i(esp+0xBC));
loc_425932:
	eax = to32i(esp); //mov
	push32(eax);
	push32(aD_5);
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = to32i(esp+0xBC); //mov
	push32(edx);
	push32(aD_5);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_425722;
loc_425967:
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_42597D;
	cmp(eax, (int32_t)5);
	if (jge())
		goto loc_42597D;
	eax = (int32_t)(intptr_t)(ecx+5); //lea
	to32i(esp+0xBC) = eax; //mov
	goto loc_425932;
loc_42597D:
	cmp(eax, (int32_t)5);
	if (jle())
		goto loc_425996;
	cmp(eax, (int32_t)0xA);
	if (jge())
		goto loc_425996;
	eax = to32i(esp); //mov
	add(eax, (int32_t)0xA);
	to32i(esp+0xBC) = eax; //mov
	goto loc_425932;
loc_425996:
	cmp(eax, (int32_t)0xA);
	if (jle())
		goto loc_425932;
	cmp(eax, (int32_t)0x14);
	if (jge())
		goto loc_425932;
	eax = to32i(esp); //mov
	add(eax, (int32_t)0x14);
	to32i(esp+0xBC) = eax; //mov
	goto loc_425932;
loc_4259AF:
	ecx = 0x7271; //mov
	goto loc_4255F5;
loc_4259B9:
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_4259DD;
	cmp(eax, (int32_t)5);
	if (jg())
		goto loc_4259DD;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	edx = to32i(esp); //mov
	add(eax, ecx);
	add(edx, eax);
	to32i(esp+0xBC) = edx; //mov
	goto loc_4256A5;
loc_4259DD:
	cmp(eax, (int32_t)5);
	if (jle())
		goto loc_425A03;
	cmp(eax, (int32_t)0xA);
	if (jg())
		goto loc_425A03;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	edx = to32i(esp); //mov
	add(eax, eax);
	add(edx, eax);
	to32i(esp+0xBC) = edx; //mov
	goto loc_4256A5;
loc_425A03:
	cmp(eax, (int32_t)0xA);
	if (jle())
		goto loc_4256A5;
	to32i(esp+0xC4) = eax; //mov
	fild(to32i(esp+0xC4));
	fmul(to32f(flt_4C9DEC));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _floor_(); esp += 4; //call
	fld1();
	faddp_st(1, 0);
	fmul(to64f(dbl_4C9DF4));
	to32i(esp+0xC8) = ecx; //mov
	eax = to32i(esp); //mov
	fild(to32i(esp+0xC8));
	fmulp_st(1, 0);
	to32i(esp+0xC8) = eax; //mov
	fild(to32i(esp+0xC8));
	faddp_st(1, 0);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xBC));
	goto loc_4256A5;
loc_425A69:
	eax = to16i(edi); //movsx
	fild(to32i(esi+eax*4));
	fmul(to32f(flt_4C9DFC));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _floor_(); esp += 4; //call
	eax = to32i(esp+0xCA); //mov
	sar(eax, (int32_t)0x10);
	eax = to16i(edi+eax*2-2); //movsx
	fmul(to64f(dbl_4C9E04));
	fild(to32i(esi+eax*4));
	fmul(to32f(flt_4C9DFC));
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _ceil_(); esp += 4; //call
	fmul(to64f(dbl_4C9E04));
	ecx = to32i(esp); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xBC));
	edx = to32i(esp+0xBC); //mov
	sub(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	test(eax, eax);
	if (jnz())
		goto loc_425B0B;
	add(to32i(esp+0xBC), (int32_t)0x40);
loc_425AEA:
	edx = (int32_t)(intptr_t)(esp+0x54); //lea
	eax = to32i(esp); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(esp+0xBC); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	goto loc_425722;
loc_425B0B:
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_425B24;
	cmp(eax, (int32_t)5);
	if (jg())
		goto loc_425B24;
	eax = (int32_t)(intptr_t)(ecx+0x140); //lea
	to32i(esp+0xBC) = eax; //mov
	goto loc_425AEA;
loc_425B24:
	cmp(eax, (int32_t)5);
	if (jle())
		goto loc_425B3F;
	cmp(eax, (int32_t)0xA);
	if (jg())
		goto loc_425B3F;
	eax = to32i(esp); //mov
	add(eax, (int32_t)0x280);
	to32i(esp+0xBC) = eax; //mov
	goto loc_425AEA;
loc_425B3F:
	cmp(eax, (int32_t)0xA);
	if (jle())
		goto loc_425AEA;
	to32i(esp+0xC8) = eax; //mov
	fild(to32i(esp+0xC8));
	fmul(to32f(flt_4C9DEC));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	esp -= 4; _floor_(); esp += 4; //call
	fld1();
	faddp_st(1, 0);
	fmul(to64f(dbl_4C9DF4));
	eax = to32i(esp); //mov
	fmul(to64f(dbl_4C9E04));
	to32i(esp+0xC8) = eax; //mov
	fild(to32i(esp+0xC8));
	faddp_st(1, 0);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xBC));
	goto loc_425AEA;
loc_425B97:
	eax = to32i(esp+0xCC); //mov
	dec(eax);
	to16i(esp+0xD4) = ax; //mov
	test(ax, ax);
	if (jle())
		goto loc_425CA8;
loc_425BB0:
	ecx = to32i(esp+0xD2); //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(esp+0xB8); //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(edx, eax);
	push32(0xFFFFFF50);
	ebx = to32i(edx-4); //mov
	push32(ebx);
	eax = to32i(edx-8); //mov
	push32(eax);
	esp -= 4; _floor_(); esp += 4; //call
	eax = to32i(esp+0xCE); //mov
	sar(eax, (int32_t)0x10);
	sub(eax, ecx);
	to32i(esp+0xCC) = eax; //mov
	fild(to32i(esp+0xCC));
	fmul(to64f(dbl_4C9E14));
	fmul(to64f(dbl_4C9E1C));
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	ebx = to32i(edx+4); //mov
	fistp(to32i(esp+0xB4));
	push32(ebx);
	ecx = eax; //mov
	eax = to32i(edx); //mov
	dec(ecx);
	push32(eax);
	fadd(to64f(dbl_4C9E3C));
	to32i(esp+0xD4) = ecx; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	esp -= 4; _floor_(); esp += 4; //call
	fild(to32i(esp+0xCC));
	fmul(to64f(dbl_4C9E14));
	fmul(to64f(dbl_4C9E1C));
	ecx = to32i(esp+0xB4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	ebx = to32i(esp+0xC8); //mov
	fistp(to32i(esp+0xC8));
	fadd(to64f(dbl_4C9E3C));
	edx = to32i(esp+0xC8); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC8));
	eax = to32i(esp+0xC8); //mov
	esp -= 4; _sub_4967E0(); esp += 4; //call
	ecx = to32i(esp+0xD4); //mov
	dec(ecx);
	to16i(esp+0xD4) = cx; //mov
	test(cx, cx);
	if (jg())
		goto loc_425BB0;
loc_425CA8:
	eax = edi; //mov
	edx = to32i(esp+0xB8); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	test(edx, edx);
	if (jz())
		goto loc_425CC1;
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_425CC1:
	test(esi, esi);
	if (jz())
		goto loc_425CCC;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_425CCC:
	edx = 1; //mov
	eax = edx; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_425CE0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x5C);
	edi = eax; //mov
	esi = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x58); //lea
	xor_(edx, edx);
	ebp = bx; //movsx
	to32i(esp+0x54) = edx; //mov
	eax = ebp; //mov
	edx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_425F90(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	cmp(to32i(esp+0x50), (int32_t)0);
	if (jnz())
		goto loc_425D26;
	eax = ebp; //mov
	esp -= 4; _sub_425DD0(); esp += 4; //call
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_425D26:
	ebx = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	ebp = 0x229; //mov
	edx = to32i(esp+0x58); //mov
	eax = (int32_t)(intptr_t)aPrhbuf; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(esp+0x58); //mov
	ebp = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0x50); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x50); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = to32i(esp+0x6A); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A000(); esp += 4; //call
	ecx = eax; //mov
	eax = si; //movsx
	add(eax, eax);
	ebx = eax; //mov
	shl(ebx, (int32_t)4);
	edx = cx; //movsx
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	add(eax, eax);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	ecx = 0xC8; //mov
	esi = (int32_t)(intptr_t)(eax+ebp); //lea
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
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_425DD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2394);
	to16i(esp+0x2390) = ax; //mov
	add(eax, (int32_t)0x14);
	edx = (int32_t)(intptr_t)(esp+0x233C); //lea
	eax = ax; //cwde
	esp -= 4; _sub_425F90(); esp += 4; //call
	edx = (int32_t)(intptr_t)aR_2; //mov
	eax = (int32_t)(intptr_t)(esp+0x233C); //lea
	esi = 0x14; //mov
	eax = fopen_wrap(eax, edx);
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_425F00;
	xor_(ebx, ebx);
	xor_(edx, edx);
loc_425E1A:
	eax = bx; //movsx
	imul32(eax, 0x14);
	to16i(esp+eax) = dx; //mov
	to16i(esp+eax+2) = dx; //mov
	to16i(esp+eax+4) = dx; //mov
	to32i(esp+eax+8) = edx; //mov
	to32i(esp+eax+0xC) = edx; //mov
	inc(ebx);
	to32i(esp+eax+0x10) = edx; //mov
	cmp(bx, (int16_t)0x1C2);
	if (jl())
		goto loc_425E1A;
loc_425E44:
	test(ecx, ecx);
	if (jz())
		goto loc_425E4F;
	push32(edx);
	push32(ecx);
	eax = fclose_wrap(to32i(esp + 0));
	pop32(ecx);
	pop32(edx);
loc_425E4F:
	to32i(dword_4DB1D8) = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	imul32(edx, esi, 0x1C3);
	ecx = 0x1ED; //mov
	eax = (int32_t)(intptr_t)aRecords_1; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esi*8+0); //lea
	esp -= 4; _sub_484498(); esp += 4; //call
	sub(ecx, esi);
	ebp = eax; //mov
	shl(ecx, (int32_t)5);
	edi = eax; //mov
	add(ecx, esi);
	esi = esp; //mov
	add(ecx, ecx);
	to32i(esp+0x238C) = eax; //mov
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
	eax = to32i(esp+0x238E); //mov
	edx = (int32_t)(intptr_t)(esp+0x233C); //lea
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_425F90(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	edx = ebp; //mov
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x233C); //lea
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(ax, ax);
	if (jnz())
		goto loc_425EDF;
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
loc_425EDF:
	ebx = to32i(esp+0x238C); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_425F73;
	eax = 1; //mov
	add(esp, (int32_t)0x2394);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_425F00:
	xor_(ebx, ebx);
	ebp = (int32_t)(intptr_t)aD_5; //mov
loc_425F07:
	eax = bx; //movsx
	imul32(eax, 0x14);
	edx = esp; //mov
	add(edx, eax);
	push32(edx);
	push32(ebp);
	push32(ecx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)4);
	pop32(edx);
	eax = (int32_t)(intptr_t)(edx+2); //lea
	push32(edx);
	push32(eax);
	push32(ebp);
	push32(ecx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)8);
	pop32(edx);
	eax = (int32_t)(intptr_t)(edx+4); //lea
	push32(edx);
	push32(eax);
	push32(ebp);
	push32(ecx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)8);
	pop32(edx);
	eax = (int32_t)(intptr_t)(edx+8); //lea
	push32(edx);
	push32(eax);
	push32(ebp);
	push32(ecx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)8);
	pop32(edx);
	eax = (int32_t)(intptr_t)(edx+0xC); //lea
	push32(edx);
	push32(eax);
	push32(ebp);
	push32(ecx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)8);
	pop32(edx);
	add(edx, (int32_t)0x10);
	push32(edx);
	push32(aD_6);
	push32(ecx);
	inc(ebx);
	eax = fscanf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	pop32(ecx);
	add(esp, (int32_t)4);
	pop32(edx);
	cmp(bx, (int16_t)0x1C2);
	if (jl())
		goto loc_425F07;
	goto loc_425E44;
loc_425F73:
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x2394);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_425F90()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebx = eax; //mov
	eax = edx; //mov
	ecx = 8; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_424E38; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(bx, (int16_t)0x14);
	if (jl())
		goto loc_426001;
	cmp(to32i(dword_512228), (int32_t)1);
	if (jnz())
		goto loc_425FE6;
	edx = bx; //movsx
	push32(a_ssf_0);
	edi = to32i(esp+edx*4-0x4C); //mov
loc_425FC5:
	push32(edi);
	ebp = to32i(dword_5134DC); //mov
	push32(ebp);
	push32(aSbSS);
loc_425FD2:
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_425FE6:
	edx = bx; //movsx
	push32(a_ssf_0);
	ecx = to32i(esp+edx*4-0x4C); //mov
	push32(ecx);
	esi = to32i(dword_5134DC); //mov
	push32(esi);
	push32(aSSS_0);
	goto loc_425FD2;
loc_426001:
	cmp(to32i(dword_512228), (int32_t)1);
	if (jnz())
		goto loc_426018;
	edx = bx; //movsx
	push32(a_stf_0);
	edi = to32i(esp+edx*4+4); //mov
	goto loc_425FC5;
loc_426018:
	edx = bx; //movsx
	push32(a_stf_0);
	ecx = to32i(esp+edx*4+4); //mov
	push32(ecx);
	esi = to32i(dword_5134DC); //mov
	push32(esi);
	push32(aSSS_0);
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_426050()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x98);
	ebp = eax; //mov
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	ebx = 0x14; //mov
	edi = (int32_t)(intptr_t)(esp+0x50); //lea
	xor_(eax, eax);
	xor_(edx, edx);
	xor_(ecx, ecx);
	al = to8i(byte_512DBF); //mov
	to32i(esp+0x6C) = edx; //mov
	to32i(esp+0x68) = ecx; //mov
	to32i(esp+0x74) = ecx; //mov
	to32i(esp+0x70) = esi; //mov
	edx = 1; //mov
	esi = (int32_t)(intptr_t)off_424E20; //mov
	to16i(esp+0x88) = ax; //mov
	xor_(ecx, ecx);
	xor_(eax, eax);
	to32i(esp+0x7C) = edx; //mov
	al = to8i(byte_512DB8); //mov
	to32i(esp+0x80) = edx; //mov
	to16i(esp+0x8C) = ax; //mov
	xor_(eax, eax);
	to16i(esp+0x84) = cx; //mov
	al = to8i(byte_512DB0); //mov
	ecx = 6; //mov
	to16i(esp+0x94) = ax; //mov
	ah = to8i(byte_512DBC); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(ah, (int8_t)1);
	if (jnz())
		goto loc_426520;
	to16i(esp+0x78) = 7; //mov
loc_4260E9:
	xor_(edx, edx);
	eax = to32i(esp+0x86); //mov
	dl = to8i(byte_512DBD); //mov
	sar(eax, (int32_t)0x10);
	add(edx, (int32_t)0xC);
	cmp(eax, edx);
	if (jl())
		goto loc_42610C;
	xor_(eax, eax);
	to16i(esp+0x88) = ax; //mov
loc_42610C:
	edi = (int32_t)(intptr_t)aCNfs2seFron_11; //mov
	edx = (int32_t)(intptr_t)(ebx*4+0); //lea
	eax = 0x70; //mov
	sub(edx, ebx);
	to32i(dword_4DB1DC) = eax; //mov
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)aPrhdata; //mov
	sub(edx, ebx);
	ebx = 0x20; //mov
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_42652C;
	eax = to32i(esp+0x78); //mov
	dec(eax);
	to32i(esp+0x90) = eax; //mov
loc_426154:
	cmp(to32i(esp+0x6C), (int32_t)0);
	if (jnz())
		goto loc_426774;
	cmp(to16i(esp+0x7C), (int16_t)0);
	if (jz())
		goto loc_4261B0;
	ecx = to32i(esp+0x92); //mov
	edx = esp; //mov
	sar(ecx, (int32_t)0x10);
	xor_(ebx, ebx);
	eax = ecx; //mov
	to32i(esp+0x7C) = ebx; //mov
	esp -= 4; _sub_41B230(); esp += 4; //call
	eax = esp; //mov
	xor_(ebx, ebx);
	to32i(ebp+0) = eax; //mov
	eax = ebp; //mov
	to32i(dword_4D2098) = ebx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	push32(ebx);
	eax = ecx; //mov
	edx = (int32_t)(intptr_t)aRec6_1; //mov
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ebx = 1; //mov
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
loc_4261B0:
	cmp(to16i(esp+0x80), (int16_t)0);
	if (jz())
		goto loc_426209;
	ecx = to32i(esp+0x86); //mov
	xor_(eax, eax);
	ebx = to32i(esp+0x92); //mov
	al = to8i(byte_512DBA); //mov
	si = to16i(dword_512228); //mov
	to32i(dword_512228) = eax; //mov
	eax = to32i(esp+0x8A); //mov
	edx = to32i(esp+0x70); //mov
	sar(eax, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	push32(eax);
	sar(ebx, (int32_t)0x10);
	eax = edi; //mov
	esp -= 4; _sub_425CE0(); esp += 4; //call
	eax = si; //movsx
	xor_(esi, esi);
	to32i(dword_512228) = eax; //mov
	to32i(esp+0x80) = esi; //mov
loc_426209:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	esi = to32i(esp+0x74); //mov
	edx = 0x400; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	add(esi, eax);
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(ebp+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esp+eax*4+0x50); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	dl = to8i(byte_512DFB); //mov
	to32i(esp+0x74) = esi; //mov
	cmp(dl, (int8_t)5);
	if (jnz())
		goto loc_42656A;
	cmp(to8i(byte_512DBA), (int8_t)1);
	if (jnz())
		goto loc_42653D;
	eax = 0xD; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0x8E); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSDS_0);
loc_426289:
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
loc_426296:
	push32(2);
	push32(1);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x1E);
	ecx = 0x18; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x86); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	push32(aS_5);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(1);
	eax = 0xCC; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x19);
	ebx = ax; //movsx
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x1E);
	ecx = 0x18; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ecx = to32i(esp+0x82); //mov
	ebx = to32i(esp+0x92); //mov
	edx = edi; //mov
	eax = ebp; //mov
	sar(ecx, (int32_t)0x10);
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_425130(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = esi; //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_42637C;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_42637C:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	esi = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_426154;
	edx = to32i(esp+0x74); //mov
	cmp(edx, to32i(esp+0x68));
	if (jle())
		goto loc_426154;
	add(edx, (int32_t)0xF);
	to32i(esp+0x68) = edx; //mov
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_4265DF;
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_4265DF;
	edx = to32i(esp+0x94); //mov
	eax = 1; //mov
	sub(edx, eax);
	to32i(esp+0x80) = eax; //mov
	to16i(esp+0x94) = dx; //mov
	test(dx, dx);
	if (jl())
		goto loc_4265CB;
loc_4263EF:
	edx = 0x7F; //mov
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(eax, eax);
	to32i(esp+0x7C) = ecx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(edx, edx);
	eax = 0x12; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_42641B:
	ax = to16i(ebp+0xA); //mov
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_426642;
	cmp(si, (int16_t)0x4B00);
	if (jnz())
		goto loc_426642;
	edx = to32i(esp+0x8A); //mov
	sar(edx, (int32_t)0x10);
	to32i(esp+0x80) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to16i(esp+0x8C) = ax; //mov
	cmp(ax, (int16_t)2);
	if (jge())
		goto loc_426466;
	to16i(esp+0x8C) = 8; //mov
loc_426466:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_426479:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_4266AE;
	cmp(si, (int16_t)0x4B00);
	if (jnz())
		goto loc_4266AE;
	eax = to32i(esp+0x88); //mov
	ecx = 1; //mov
	sub(eax, ecx);
	to32i(esp+0x80) = ecx; //mov
	to16i(esp+0x88) = ax; //mov
	test(ax, ax);
	if (jl())
		goto loc_426695;
loc_4264B5:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_4264C8:
	bx = to16i(ebp+0xA); //mov
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_426720;
	cmp(si, (int16_t)0x4B00);
	if (jnz())
		goto loc_426720;
	ecx = to32i(esp+0x84); //mov
	dec(ecx);
	to16i(esp+0x84) = cx; //mov
	test(cx, cx);
	if (jl())
		goto loc_426713;
loc_4264FA:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_42650D:
	edx = si; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x6C) = eax; //mov
	goto loc_426154;
loc_426520:
	to16i(esp+0x78) = 8; //mov
	goto loc_4260E9;
loc_42652C:
	eax = to32i(esp+0x6C); //mov
	add(esp, (int32_t)0x98);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42653D:
	eax = to32i(esp+0x8A); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSD_2);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	goto loc_426296;
loc_42656A:
	cmp(to8i(byte_512DBA), (int8_t)1);
	if (jnz())
		goto loc_42659E;
	eax = 0xD; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0x92); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aDSS);
	goto loc_426289;
loc_42659E:
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0x8E); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aDS_1);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	goto loc_426296;
loc_4265CB:
	eax = to32i(esp+0x90); //mov
	to16i(esp+0x94) = ax; //mov
	goto loc_4263EF;
loc_4265DF:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_42641B;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_426637;
loc_4265F1:
	edx = to32i(esp+0x94); //mov
	ecx = 1; //mov
	add(edx, ecx);
	eax = to32i(esp+0x76); //mov
	to16i(esp+0x94) = dx; //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x92); //mov
	dec(eax);
	sar(edx, (int32_t)0x10);
	to32i(esp+0x80) = ecx; //mov
	cmp(edx, eax);
	if (jle())
		goto loc_4263EF;
	xor_(ebx, ebx);
	to16i(esp+0x94) = bx; //mov
	goto loc_4263EF;
loc_426637:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_4265F1;
	goto loc_42641B;
loc_426642:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_426479;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_42668A;
loc_426654:
	ecx = to32i(esp+0x8C); //mov
	ebx = 1; //mov
	add(ecx, ecx);
	to32i(esp+0x80) = ebx; //mov
	to16i(esp+0x8C) = cx; //mov
	cmp(cx, (int16_t)8);
	if (jle())
		goto loc_426466;
	to16i(esp+0x8C) = 2; //mov
	goto loc_426466;
loc_42668A:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_426654;
	goto loc_426479;
loc_426695:
	xor_(eax, eax);
	al = to8i(byte_512DBD); //mov
	add(eax, (int32_t)0xB);
	to16i(esp+0x88) = ax; //mov
	goto loc_4264B5;
loc_4266AE:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_4264C8;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_426708;
loc_4266C0:
	edx = to32i(esp+0x88); //mov
	ecx = 1; //mov
	add(edx, ecx);
	xor_(eax, eax);
	to16i(esp+0x88) = dx; //mov
	al = to8i(byte_512DBD); //mov
	edx = to32i(esp+0x86); //mov
	add(eax, (int32_t)0xC);
	sar(edx, (int32_t)0x10);
	to32i(esp+0x80) = ecx; //mov
	cmp(edx, eax);
	if (jl())
		goto loc_4264B5;
	xor_(ebx, ebx);
	to16i(esp+0x88) = bx; //mov
	goto loc_4264B5;
loc_426708:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_4266C0;
	goto loc_4264C8;
loc_426713:
	to16i(esp+0x84) = bx; //mov
	goto loc_4264FA;
loc_426720:
	cmp(to16i(ebp+0xA), (int16_t)3);
	if (jnz())
		goto loc_42650D;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_42675B;
loc_426732:
	eax = to32i(esp+0x84); //mov
	inc(eax);
	to16i(esp+0x84) = ax; //mov
	cmp(ax, (int16_t)3);
	if (jle())
		goto loc_4264FA;
	xor_(ebx, ebx);
	to16i(esp+0x84) = bx; //mov
	goto loc_4264FA;
loc_42675B:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_426732;
	edx = si; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x6C) = eax; //mov
	goto loc_426154;
loc_426774:
	test(edi, edi);
	if (jz())
		goto loc_42677F;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_42677F:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	xor_(ecx, ecx);
	eax = to32i(esp+0x6C); //mov
	to32i(dword_4D2098) = ecx; //mov
	add(esp, (int32_t)0x98);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4267C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4267B0; //mov
	ecx = to32i(dword_4D4D30); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	test(ecx, ecx);
	if (jnz())
		goto loc_4267E2;
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4267E2:
	push32(ebx);
	fild(to32i(dword_4EC4BC));
	ebx = 0xFFFFFFFF; //mov
	to32i(esp+0x14) = eax; //mov
	to32i(esp+0x18) = edx; //mov
	push32(ecx);
	fild(to32i(esp+0x18));
	fild(to32i(esp+0x1C));
	push32(1);
	to32i(dword_4D4CFC) = ebx; //mov
	to32i(dword_4D4CDC) = ebx; //mov
	to32i(dword_4D4CBC) = ebx; //mov
	to32i(dword_4D4C9C) = ebx; //mov
	fxch_st(1);
	fstp(to32f(flt_4D4C8C));
	fstp(to32f(flt_4D4C90));
	fld(to32f(flt_4D4C8C));
	fld_st(0);
	fld(to32f(flt_4D4C90));
	fxch_st(1);
	fstp(to32f(flt_4D4CEC));
	fstp(to32f(flt_4D4CB0));
	fadd_st(0, 1);
	fld(to32f(flt_4D4CB0));
	fxch_st(1);
	fst(to32f(flt_4D4CAC));
	fxch_st(1);
	faddp_st(2, 0);
	fstp(to32f(flt_4D4CCC));
	fst(to32f(flt_4D4CD0));
	fstp(to32f(flt_4D4CF0));
	esp -= 4; _sub_497738(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(flt_4D4C8C);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	pop32(ebx);
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_426890()
{
	push32(ecx);
	push32(edi);
	edi = eax; //mov
	ecx = to32i(dword_4D2098); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4268A1;
	pop32(edi);
	pop32(ecx);
	return;
loc_4268A1:
	push32(esi);
	push32(ebx);
	ebx = 1; //mov
	esi = 0x20; //mov
	to32i(dword_4D2098) = ebx; //mov
	to32i(dword_4EC4BC) = esi; //mov
	esp -= 4; _sub_4289F0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4284B0(); esp += 4; //call
	push32(ecx);
	push32(ecx);
	push32(7);
	push32(esi);
	push32(esi);
	ebx = esi; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4D4D30) = eax; //mov
	edx = esi; //mov
	xor_(ecx, ecx);
	eax = esi; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	esi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jnz())
		goto loc_426949;
	eax = 0xFF; //mov
loc_4268F8:
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = edi; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	ecx = 1; //mov
	esp -= 4; _sub_483460(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	edx = 0x6D; //mov
	eax = to32i(esi+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_49A118(); esp += 4; //call
	push32(0);
	ebx = eax; //mov
	add(eax, (int32_t)0x10);
	push32(eax);
	edi = to32i(dword_4D4D30); //mov
	push32(edi);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_426949:
	xor_(eax, eax);
	goto loc_4268F8;
}
Fn(void) Game::_sub_426950()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edx = 0xFFFFFFFF; //mov
	xor_(edi, edi);
	to32i(dword_4D4CFC) = edx; //mov
	to32i(dword_4D4CDC) = edx; //mov
	to32i(dword_4D4CBC) = edx; //mov
	to32i(dword_4D4C9C) = edx; //mov
	ebp = 1; //mov
loc_42697D:
	to32i(esp) = edi; //mov
	xor_(esi, esi);
	fild(to32i(esp));
	fst(to32f(flt_4D4C8C));
	fld_st(0);
	fadd(to32f(flt_4C9F10));
	fxch_st(1);
	fstp(to32f(flt_4D4CEC));
	fst(to32f(flt_4D4CAC));
	fstp(to32f(flt_4D4CCC));
loc_4269A7:
	fld(to32f(flt_4D4C8C));
	eax = to32i(dword_4D4D28); //mov
	to32i(esp) = esi; //mov
	ebx = esi; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fild(to32i(esp));
	fxch_st(1);
	fistp(to32i(esp));
	fstp(to32f(flt_4D4C90));
	eax = to32i(eax+0x20); //mov
	edx = to32i(flt_4D4C90); //mov
	to32i(flt_4D4CB0) = edx; //mov
	fld(to32f(flt_4D4CB0));
	fadd(to32f(flt_4C9F10));
	edx = to32i(esp); //mov
	fst(to32f(flt_4D4CD0));
	fstp(to32f(flt_4D4CF0));
	esp -= 4; _sub_4850B0(); esp += 4; //call
	eax = to32i(dword_4D4D28); //mov
	eax = to32i(eax+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(dword_4D4D2C); //mov
	push32(eax);
	esp -= 4; _sub_49755C(); esp += 4; //call
	edx = to32i(dword_4D4D2C); //mov
	push32(edx);
	push32(ebp);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(ebp);
	add(esi, (int32_t)0x20);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	cmp(esi, (int32_t)0x1E0);
	if (jnz())
		goto loc_4269A7;
	add(edi, (int32_t)0x20);
	cmp(edi, (int32_t)0x280);
	if (jnz())
		goto loc_42697D;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_426A60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = ebx; //mov
	push32(0);
	push32(0);
	push32(4);
	push32(0x20);
	push32(0x20);
	ebx = 0x10; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	edx = 0x20; //mov
	ebp = eax; //mov
	xor_(ecx, ecx);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	ecx = 0x20; //mov
	esi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0x20);
	xor_(edx, edx);
	eax = edi; //mov
	esp -= 4; _sub_49A4A0(); esp += 4; //call
	fild(to16i(edi+4));
	fild(to16i(edi+6));
	edx = 0xFFFFFFFF; //mov
	eax = to32i(esp+4); //mov
	push32(0);
	edi = to32i(esi+0x20); //mov
	to32i(dword_4D4CFC) = edx; //mov
	to32i(dword_4D4CDC) = edx; //mov
	to32i(dword_4D4CBC) = edx; //mov
	to32i(esp+0xC) = eax; //mov
	to32i(dword_4D4C9C) = edx; //mov
	fild(to32i(esp+0xC));
	add(edi, (int32_t)0x10);
	eax = to32i(esp+4); //mov
	fst(to32f(flt_4D4C8C));
	fld_st(0);
	push32(edi);
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4CEC));
	fild(to32i(esp+0x10));
	push32(ebp);
	fstp(to32f(flt_4D4C90));
	faddp_st(2, 0);
	fld(to32f(flt_4D4C90));
	fxch_st(2);
	fst(to32f(flt_4D4CAC));
	fxch_st(2);
	fst(to32f(flt_4D4CB0));
	faddp_st(1, 0);
	fxch_st(1);
	fstp(to32f(flt_4D4CCC));
	fst(to32f(flt_4D4CD0));
	fstp(to32f(flt_4D4CF0));
	esp -= 4; _sub_49755C(); esp += 4; //call
	push32(ebp);
	push32(1);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_426B70()
{
	cmp(to16i(eax+4), (int16_t)0x280);
	if (jnz())
		goto loc_426B84;
	cmp(to16i(eax+6), (int16_t)0x1E0);
	if (jz())
	{
		_sub_426950();
		return;
	}
loc_426B84:
	push32(edx);
	push32(ebx);
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_426A60(); esp += 4; //call
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_426C50()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x2C);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x10) = eax; //mov
	to32i(esp+0x20) = edx; //mov
	edi = ebx; //mov
	to32i(esp+0x18) = ecx; //mov
	ebx = to32i(ebp+0x14); //mov
	ecx = to32i(ebp+0x18); //mov
	eax = to32i(esp+0x20); //mov
	edx = 0x3B800000; //mov
	inc(eax);
	to32i(esp+4) = edx; //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(dword_4E54AC); //mov
	to32i(esp+8) = edx; //mov
	cmp(eax, (int32_t)0x24);
	if (jz())
		goto loc_426EB3;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+0x1C) = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4E54AC); //mov
	esi = eax; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_426ECF;
	edx = to32i(esp+0x14); //mov
	to32i(esp+0x20) = edx; //mov
	edx = to32i(ebp+0x10); //mov
	eax = to32i(esp+0x1C); //mov
	add(edx, (int32_t)3);
	add(edi, (int32_t)4);
loc_426CD3:
	to32i(ebp+0x10) = edx; //mov
loc_426CD6:
	to32i(esp+0x24) = edi; //mov
	edx = to32i(esp+0x20); //mov
	fild(to32i(esp+0x24));
	edi = to32i(dword_4E54AC); //mov
	to32i(esp+0x24) = edx; //mov
	fstp(to32f(esp+0xC));
	fild(to32i(esp+0x24));
	fstp(to32f(esp));
	cmp(edi, (int32_t)0x12);
	if (jnz())
		goto loc_426D29;
	cmp(to8i(ebp+0x20), (int8_t)0x45);
	if (jnz())
		goto loc_426D0E;
	fld(to32f(esp));
	fadd(to64f(dbl_4C9F00));
	fstp(to32f(esp));
loc_426D0E:
	dh = to8i(ebp+0x20); //mov
	cmp(dh, (int8_t)0x41);
	if (jb())
		goto loc_426D29;
	cmp(dh, (int8_t)0x5A);
	if (ja())
		goto loc_426D29;
	fld(to32f(esp+0xC));
	fadd(to64f(dbl_4C9F00));
	fstp(to32f(esp+0xC));
loc_426D29:
	fld(to32f(esp));
	fld_st(0);
	fld(to32f(esp+0xC));
	fld_st(0);
	fxch_st(2);
	fld(to64f(dbl_4C9F08));
	fxch_st(1);
	fadd_st(0, 1);
	fxch_st(3);
	faddp_st(1, 0);
	fld(to32f(esp+8));
	fmul_st(3, 0);
	fld(to32f(esp+4));
	fmulp_st(2, 0);
	to32i(esp+0x24) = ebx; //mov
	to32i(esp+0x28) = ecx; //mov
	fild(to32i(esp+0x28));
	fild(to32i(esp+0x24));
	faddp_st(6, 0);
	faddp_st(3, 0);
	fmulp_st(4, 0);
	fxch_st(1);
	fmul(to32f(esp+4));
	edx = to32i(ebp+0x1C); //mov
	ecx = to32i(esp+0x10); //mov
	to32i(dword_4D4CFC) = edx; //mov
	to32i(dword_4D4CDC) = edx; //mov
	to32i(dword_4D4CBC) = edx; //mov
	to32i(dword_4D4C9C) = edx; //mov
	edx = to32i(esp+0x18); //mov
	push32(ecx);
	to32i(esp+0x28) = edx; //mov
	push32(1);
	fild(to32i(esp+0x2C));
	fxch_st(3);
	fstp(to32f(flt_4D4D04));
	fxch_st(1);
	fstp(to32f(flt_4D4CC8));
	fld(to32f(flt_4D4D04));
	fld(to32f(flt_4D4CC8));
	fxch_st(3);
	fstp(to32f(flt_4D4CEC));
	fxch_st(3);
	fstp(to32f(flt_4D4CE4));
	fstp(to32f(flt_4D4D08));
	edi = (int32_t)(intptr_t)(edx+esi); //lea
	fld(to32f(flt_4D4CEC));
	fld(to32f(flt_4D4CE4));
	fld(to32f(flt_4D4D08));
	fxch_st(4);
	fstp(to32f(flt_4D4CA4));
	fxch_st(2);
	fstp(to32f(flt_4D4CA8));
	edx = to32i(ebp+0x10); //mov
	fstp(to32f(flt_4D4C8C));
	to32i(esp+0x2C) = edi; //mov
	fstp(to32f(flt_4D4CC4));
	fstp(to32f(flt_4D4CE8));
	fild(to32i(esp+0x2C));
	fstp(to32f(flt_4D4CCC));
	to32i(esp+0x2C) = edx; //mov
	add(eax, edx);
	fild(to32i(esp+0x2C));
	edx = to32i(flt_4D4CCC); //mov
	to32i(flt_4D4CAC) = edx; //mov
	to32i(esp+0x2C) = eax; //mov
	fstp(to32f(flt_4D4CB0));
	fild(to32i(esp+0x2C));
	eax = to32i(flt_4D4CB0); //mov
	to32i(flt_4D4C90) = eax; //mov
	fst(to32f(flt_4D4CF0));
	fstp(to32f(flt_4D4CD0));
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	xor_(ebx, ebx);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	ecx = 0x3F800000; //mov
	edx = to32i(dword_4E54AC); //mov
	to32i(flt_4D4D04) = ebx; //mov
	to32i(flt_4D4CC8) = ebx; //mov
	to32i(flt_4D4CA8) = ebx; //mov
	to32i(flt_4D4CA4) = ebx; //mov
	to32i(flt_4D4D08) = ecx; //mov
	to32i(flt_4D4CE8) = ecx; //mov
	to32i(flt_4D4CE4) = ecx; //mov
	to32i(flt_4D4CC4) = ecx; //mov
	cmp(edx, (int32_t)0x24);
	if (jnz())
		goto loc_426EA9;
	inc(esi);
loc_426EA9:
	eax = esi; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
loc_426EB3:
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ecx-1); //lea
	to32i(esp+0x20) = edx; //mov
	edx = to32i(ebp+0x10); //mov
	add(edi, (int32_t)3);
	add(edx, (int32_t)4);
	esi = (int32_t)(intptr_t)(ebx-1); //lea
	goto loc_426CD3;
loc_426ECF:
	cmp(edx, (int32_t)0xD);
	if (jnz())
		goto loc_426EFD;
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = ecx; //mov
	add(esi, eax);
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	add(eax, to32i(esp+0x1C));
	goto loc_426CD6;
loc_426EFD:
	edx = to32i(esp+0x14); //mov
	eax = ecx; //mov
	esi = ebx; //mov
	to32i(esp+0x20) = edx; //mov
	goto loc_426CD6;
}
Fn(void) Game::_sub_426F10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x100);
	ebx = 0x20; //mov
	edx = 0x100; //mov
	xor_(ecx, ecx);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(dword_4EC4A8) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jnz())
		goto loc_4270F7;
	eax = 0xFF; //mov
loc_426F4B:
	esp -= 4; _sub_482740(); esp += 4; //call
	esi = to32i(dword_5134B8); //mov
	push32(esi);
	xor_(edx, edx);
	push32(aSswiss36a_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	to32i(dword_4EC4AC) = edx; //mov
	push32(eax);
	to32i(dword_4EC0B0) = edx; //mov
	to32i(dword_4EC0B4) = edx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	esi = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = eax; //mov
	eax = 0xFFFFFF; //mov
	ecx = 0x41; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_486560(); esp += 4; //call
	xor_(dl, dl);
	ebx = 0xE0; //mov
	to8i(esp+1) = dl; //mov
loc_426FB8:
	eax = esp; //mov
	edx = ebx; //mov
	to8i(esp) = cl; //mov
	esp -= 4; _sub_427100(); esp += 4; //call
	edi = to32i(dword_4EC0B4); //mov
	inc(ebx);
	add(edi, eax);
	inc(ecx);
	to32i(dword_4EC0B4) = edi; //mov
	cmp(ecx, (int32_t)0x5A);
	if (jle())
		goto loc_426FB8;
	dh = 0x20; //mov
	eax = esp; //mov
	to8i(esp) = dh; //mov
	edx = 0xFA; //mov
	bl = 0xD6; //mov
	esp -= 4; _sub_427100(); esp += 4; //call
	edx = 0xFB; //mov
	ebp = to32i(dword_4EC0B4); //mov
	to8i(esp) = bl; //mov
	add(ebp, eax);
	eax = esp; //mov
	to32i(dword_4EC0B4) = ebp; //mov
	esp -= 4; _sub_427100(); esp += 4; //call
	edx = to32i(dword_4EC0B4); //mov
	add(edx, eax);
	eax = esi; //mov
	to32i(dword_4EC0B4) = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	ecx = to32i(dword_5134B8); //mov
	push32(ecx);
	push32(aSswiss18_ffn_0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	esi = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	xor_(eax, eax);
	xor_(bh, bh);
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = eax; //mov
	eax = 0xFFFFFF; //mov
	ecx = 0x20; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_486560(); esp += 4; //call
	to8i(esp+1) = bh; //mov
	xor_(ebx, ebx);
loc_42706F:
	eax = esp; //mov
	edx = ebx; //mov
	to8i(esp) = cl; //mov
	esp -= 4; _sub_427100(); esp += 4; //call
	edi = to32i(dword_4EC0B4); //mov
	inc(ebx);
	add(edi, eax);
	inc(ecx);
	to32i(dword_4EC0B4) = edi; //mov
	cmp(ecx, (int32_t)0x100);
	if (jl())
		goto loc_42706F;
	esp -= 4; _sub_4824BC(); esp += 4; //call
	ecx = 1; //mov
	eax = to32i(dword_4EC4A8); //mov
	edx = 0x6D; //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_49A118(); esp += 4; //call
	push32(0);
	to32i(dword_4EC0AC) = eax; //mov
	add(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(dword_4EC4AC); //mov
	ebp = to32i(dword_4EC4B0+eax*4); //mov
	push32(ebp);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = to32i(dword_4EC0AC); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4EC4A8); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x100);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4270F7:
	xor_(eax, eax);
	goto loc_426F4B;
}
Fn(void) Game::_sub_427100()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	edx = 1; //mov
	esp -= 4; _sub_4823E0(); esp += 4; //call
	byte_4EC3AC[esi] = al; //mov
	xor_(eax, eax);
	edx = to32i(dword_4EC0B4); //mov
	al = (int32_t)(intptr_t)byte_4EC3AC[esi]; //mov
	add(eax, edx);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4271C4;
	eax = to32i(dword_4EC0B0); //mov
	ebx = to32i(dword_4EC0B0); //mov
	xor_(ecx, ecx);
	add(eax, (int32_t)0x66);
	add(ebx, (int32_t)0x33);
	to32i(dword_4EC0B4) = ecx; //mov
	to32i(dword_4EC0B0) = ebx; //mov
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4271C4;
	edx = 0x6D; //mov
	eax = to32i(dword_4EC4A8); //mov
	to32i(dword_4EC0B0) = ecx; //mov
	xor_(ebx, ebx);
	ecx = 1; //mov
	eax = to32i(eax+0x20); //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_49A118(); esp += 4; //call
	push32(ebp);
	to32i(dword_4EC0AC) = eax; //mov
	add(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(dword_4EC4AC); //mov
	edx = to32i(dword_4EC4B0+eax*4); //mov
	push32(edx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = to32i(dword_4EC0AC); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	ecx = to32i(dword_4EC4AC); //mov
	inc(ecx);
	ah = to8i(byte_4DB25C); //mov
	to32i(dword_4EC4AC) = ecx; //mov
	cmp(ah, (int8_t)8);
	if (jnz())
		goto loc_427206;
	eax = 0xFF; //mov
loc_4271BF:
	esp -= 4; _sub_482740(); esp += 4; //call
loc_4271C4:
	al = to8i(dword_4EC4AC); //mov
	byte_4EC0B8[esi] = al; //mov
	al = to8i(dword_4EC0B4); //mov
	ebx = to32i(dword_4EC0B0); //mov
	byte_4EC2B0[esi] = al; //mov
	al = to8i(dword_4EC0B0); //mov
	edx = to32i(dword_4EC0B4); //mov
	byte_4EC1B4[esi] = al; //mov
	eax = edi; //mov
	esp -= 4; _sub_486A30(); esp += 4; //call
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4EC3AC[esi]; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_427206:
	xor_(eax, eax);
	goto loc_4271BF;
}
Fn(void) Game::_sub_427210()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = 0xFA; //mov
	ebp = 1; //mov
	xor_(edi, edi);
loc_427222:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(esi);
	push32(ebp);
	ebx = 0x20; //mov
	ecx = edi; //mov
	push32(0xFF);
	edx = edi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_427C70(); esp += 4; //call
	push32(esi);
	ebx = 0x20; //mov
	push32(ebp);
	ecx = edi; //mov
	edx = edi; //mov
	push32(0xFF);
	eax = edi; //mov
	sub(esi, (int32_t)0xA);
	esp -= 4; _sub_427C70(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(esi, (int32_t)0x14);
	if (jge())
		goto loc_427222;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_427280()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = eax; //mov
	edi = edx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp) = ecx; //mov
	esi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+8) = eax; //mov
	cmp(ebp, eax);
	if (jl())
		goto loc_42730A;
loc_4272A4:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(esi);
	ebx = to32i(esp+8); //mov
	push32(ebx);
	eax = 1; //mov
	ecx = edi; //mov
	push32(ebp);
	xor_(edx, edx);
	ebx = 0x20; //mov
	esp -= 4; _sub_427C70(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_427B30(); esp += 4; //call
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_4272F3;
	eax = to32i(byte_4D3ECC); //mov
	xor_(edx, edx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4276F0(); esp += 4; //call
loc_4272F3:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	ecx = to32i(esp+8); //mov
	sub(esi, (int32_t)0xA);
	cmp(esi, ecx);
	if (jge())
		goto loc_4272A4;
loc_42730A:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_427320()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	ebp = edx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+4) = ecx; //mov
	esi = eax; //mov
	cmp(eax, (int32_t)0xFF);
	if (jg())
		goto loc_4273A1;
loc_42733A:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(esi);
	edx = to32i(esp+4); //mov
	push32(edx);
	ebx = 0x20; //mov
	eax = 1; //mov
	push32(ebp);
	ecx = edi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427C70(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_427B30(); esp += 4; //call
	cmp(to32i(esp+4), (int32_t)0);
	if (jz())
		goto loc_42738A;
	eax = to32i(byte_4D3ECC); //mov
	xor_(edx, edx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4276F0(); esp += 4; //call
loc_42738A:
	add(esi, (int32_t)0xA);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(esi, (int32_t)0xFF);
	if (jle())
		goto loc_42733A;
loc_4273A1:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4273B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	eax = 0x1F; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_427408;
	ebp = 0x20; //mov
	xor_(esi, esi);
loc_4273CD:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0xFFFFFFFF);
	ecx = ebp; //mov
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_427B30(); esp += 4; //call
	sub(esi, (int32_t)0xC);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(esi, (int32_t)0xFFFFFEBB);
	if (jg())
		goto loc_4273CD;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_427408:
	esi = 0x20; //mov
	xor_(ebp, ebp);
loc_42740F:
	push32(2);
	ebx = ebp; //mov
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = esi; //mov
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_427B30(); esp += 4; //call
	dec(esi);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	test(esi, esi);
	if (jge())
		goto loc_42740F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_427450()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	push32(0);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	eax = 0x1F; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4274B1;
	esi = 0xFFFFFEC8; //mov
	xor_(ebp, ebp);
loc_427477:
	push32(2);
	ebx = ebp; //mov
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_427B30(); esp += 4; //call
	add(esi, (int32_t)0xC);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	test(esi, esi);
	if (jle())
		goto loc_427477;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4274B1:
	xor_(esi, esi);
	xor_(ebp, ebp);
loc_4274B5:
	push32(2);
	ebx = ebp; //mov
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = esi; //mov
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_427B30(); esp += 4; //call
	inc(esi);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(esi, (int32_t)0x20);
	if (jle())
		goto loc_4274B5;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4274F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xC);
	and_(esp, (int32_t)0xFFFFFFF8);
	edi = ebx; //mov
	esi = ecx; //mov
	cmp(edx, to32i(dword_4D4E64));
	if (jle())
		goto loc_427695;
loc_42750B:
	sub(edx, to32i(dword_4D4E64));
	cmp(edx, (int32_t)0x28);
	if (jle())
		goto loc_42752D;
	ebx = to32i(dword_4D4E60); //mov
	cmp(ebx, (int32_t)0x400);
	if (jge())
		goto loc_42752D;
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(dword_4D4E60) = edx; //mov
loc_42752D:
	ebx = to32i(dword_4D4E60); //mov
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
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)9);
	sbb(eax, edx);
	sar(eax, (int32_t)9);
	ecx = eax; //mov
	cmp(to32i(dword_4D4E60), (int32_t)0x400);
	if (jl())
		goto loc_4276A8;
	edx = 0xFF; //mov
	ecx = 0x80; //mov
loc_427581:
	ebx = to32i(dword_4D4E60); //mov
	cmp(ebx, (int32_t)0x100);
	if (jle())
		goto loc_4275A6;
	cmp(ebx, (int32_t)0x300);
	if (jge())
		goto loc_4275A6;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
loc_4275A6:
	eax = edx; //mov
	to32i(esp) = edi; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = esi; //mov
	fild(to32i(esp));
	fild(to32i(esp+4));
	fild(to32i(esp+8));
	shl(eax, (int32_t)0x10);
	esi = to32i(dword_4D4E44); //mov
	sub(eax, (int32_t)0x1000000);
	fadd(to64f(dbl_4C9ED0));
	push32(esi);
	fstp(to32f(flt_4D4CB0));
	push32(1);
	fld(to32f(flt_4D4CB0));
	to32i(esp+0xC) = eax; //mov
	fxch_st(2);
	fadd(to32f(flt_4C9EC8));
	fxch_st(2);
	fstp(to32f(flt_4D4C90));
	ebx = to32i(esp+0xC); //mov
	fld_st(1);
	eax = edx; //mov
	fld(to32f(flt_4D4C90));
	shl(eax, (int32_t)8);
	fxch_st(1);
	fsub_st(0, 2);
	fxch_st(3);
	faddp_st(2, 0);
	fadd(to32f(flt_4C9ED8));
	fxch_st(2);
	fstp(to32f(flt_4D4CEC));
	fstp(to32f(flt_4D4CCC));
	fstp(to32f(flt_4D4CF0));
	add(eax, ebx);
	fld(to32f(flt_4D4CEC));
	fld(to32f(flt_4D4CCC));
	fld(to32f(flt_4D4CF0));
	fxch_st(2);
	fstp(to32f(flt_4D4C8C));
	fstp(to32f(flt_4D4CAC));
	add(eax, edx);
	fstp(to32f(flt_4D4CD0));
	to32i(dword_4D4CFC) = eax; //mov
	to32i(dword_4D4CDC) = eax; //mov
	to32i(dword_4D4CBC) = eax; //mov
	to32i(dword_4D4C9C) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	cmp(to32i(dword_4D4E60), (int32_t)0x400);
	if (jge())
		goto loc_4276E3;
	eax = 1; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_427695:
	xor_(ebx, ebx);
	to32i(dword_4D4E64) = edx; //mov
	to32i(dword_4D4E60) = ebx; //mov
	goto loc_42750B;
loc_4276A8:
	cmp(ebx, (int32_t)0x100);
	if (jge())
		goto loc_4276C6;
loc_4276B0:
	edx = ebx; //mov
	eax = 0xFF; //mov
	and_(edx, (int32_t)0xFF);
	sub(eax, edx);
	edx = eax; //mov
	goto loc_427581;
loc_4276C6:
	cmp(ebx, (int32_t)0x200);
	if (jle())
		goto loc_4276D6;
	cmp(ebx, (int32_t)0x300);
	if (jl())
		goto loc_4276B0;
loc_4276D6:
	edx = ebx; //mov
	and_(edx, (int32_t)0xFF);
	goto loc_427581;
loc_4276E3:
	xor_(eax, eax);
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4276F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = to32i(dword_4D4E4C); //mov
	edi = eax; //mov
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_4278A4;
loc_42770D:
	cmp(edi, to32i(dword_4D4E50));
	if (jz())
		goto loc_42771A;
	ebp = 0x400; //mov
loc_42771A:
	cmp(edx, to32i(dword_4D4E54));
	if (jg())
		goto loc_4278B1;
loc_427726:
	xor_(eax, eax);
	al = to8i(byte_512DA9); //mov
	to32i(dword_4D4E54) = edx; //mov
	to32i(dword_4D4E58) = eax; //mov
	xor_(eax, eax);
	to32i(dword_4D4E50) = edi; //mov
	al = to8i(byte_512DAA); //mov
	xor_(ebp, ebp);
	to32i(dword_4D4E5C) = eax; //mov
loc_42774C:
	sub(edx, to32i(dword_4D4E54));
	cmp(edx, (int32_t)0x28);
	if (jg())
		goto loc_4278E0;
loc_42775B:
	eax = (int32_t)(intptr_t)(edi+1); //lea
	xor_(esi, esi);
	xor_(ebx, ebx);
	to32i(esp+4) = eax; //mov
loc_427766:
	eax = to32i(dword_4EB58C+ebx); //mov
	to32i(dword_4D4E4C) = ebp; //mov
	test(eax, eax);
	if (jz())
		goto loc_427871;
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4278F4;
	cmp(esi, to32i(esp+4));
	if (jnz())
		goto loc_4278F4;
loc_42778D:
	cmp(ebp, (int32_t)0x400);
	if (jl())
		goto loc_42792D;
	edx = 0xFF; //mov
	ecx = 0x40; //mov
loc_4277A3:
	eax = edx; //mov
	shl(eax, (int32_t)0x10);
	sub(eax, (int32_t)0x1000000);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	shl(eax, (int32_t)8);
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, to32i(esp+8));
	add(eax, edx);
	to32i(dword_4D4E4C) = ebp; //mov
	to32i(dword_4D4CFC) = eax; //mov
	to32i(dword_4D4CDC) = eax; //mov
	to32i(dword_4D4CBC) = eax; //mov
	to32i(dword_4D4C9C) = eax; //mov
loc_4277DC:
	fld(to32f(flt_4C9EC0));
	fld_st(0);
	fild(to32i(dword_4EB58C+ebx));
	to32i(esp+8) = ecx; //mov
	fstp(to32f(flt_4D4CB0));
	eax = to32i(dword_4EB5A4+ebx); //mov
	fild(to32i(esp+8));
	edx = to32i(flt_4D4CB0); //mov
	to32i(flt_4D4C90) = edx; //mov
	push32(eax);
	fld(to32f(flt_4D4C90));
	fxch_st(2);
	fsub_st(0, 1);
	push32(1);
	fstp(to32f(flt_4D4CEC));
	faddp_st(2, 0);
	fadd(to32f(flt_4C9EC4));
	fld(to32f(flt_4D4CEC));
	fxch_st(2);
	fstp(to32f(flt_4D4CCC));
	fstp(to32f(flt_4D4CF0));
	fld(to32f(flt_4D4CCC));
	fld(to32f(flt_4D4CF0));
	fxch_st(2);
	fstp(to32f(flt_4D4C8C));
	fstp(to32f(flt_4D4CAC));
	fstp(to32f(flt_4D4CD0));
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
loc_427871:
	ebp = to32i(dword_4D4E4C); //mov
	inc(esi);
	add(ebx, (int32_t)4);
	cmp(esi, (int32_t)6);
	if (jl())
		goto loc_427766;
	cmp(ebp, (int32_t)0x400);
	if (jge())
		goto loc_4279CC;
	eax = 1; //mov
	to32i(dword_4D4E4C) = ebp; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4278A4:
	xor_(ecx, ecx);
	to32i(dword_4EB59C) = ecx; //mov
	goto loc_42770D;
loc_4278B1:
	xor_(eax, eax);
	ecx = to32i(dword_4D4E58); //mov
	al = to8i(byte_512DA9); //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_427726;
	xor_(eax, ecx);
	ebx = to32i(dword_4D4E5C); //mov
	al = to8i(byte_512DAA); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_427726;
	goto loc_42774C;
loc_4278E0:
	cmp(ebp, (int32_t)0x400);
	if (jge())
		goto loc_42775B;
	add(ebp, (int32_t)0xA);
	goto loc_42775B;
loc_4278F4:
	test(esi, esi);
	if (jnz())
		goto loc_427900;
	test(edi, edi);
	if (jz())
		goto loc_42778D;
loc_427900:
	ecx = 0xFF815412; //mov
	to32i(dword_4D4E4C) = ebp; //mov
	to32i(dword_4D4CDC) = ecx; //mov
	to32i(dword_4D4CBC) = ecx; //mov
	to32i(dword_4D4C9C) = ecx; //mov
	to32i(dword_4D4CFC) = ecx; //mov
	ecx = 0x40; //mov
	goto loc_4277DC;
loc_42792D:
	eax = ebp; //mov
	to32i(dword_4D4E4C) = ebp; //mov
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
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xA);
	sbb(eax, edx);
	sar(eax, (int32_t)0xA);
	ebp = to32i(dword_4D4E4C); //mov
	ecx = eax; //mov
	cmp(ebp, (int32_t)0x100);
	if (jge())
		goto loc_4279B2;
loc_427975:
	edx = ebp; //mov
	eax = 0xFF; //mov
	and_(edx, (int32_t)0xFF);
	sub(eax, edx);
	edx = eax; //mov
loc_427986:
	cmp(ebp, (int32_t)0x100);
	if (jle())
		goto loc_4277A3;
	cmp(ebp, (int32_t)0x300);
	if (jge())
		goto loc_4277A3;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	goto loc_4277A3;
loc_4279B2:
	cmp(ebp, (int32_t)0x200);
	if (jl())
		goto loc_4279C2;
	cmp(ebp, (int32_t)0x300);
	if (jl())
		goto loc_427975;
loc_4279C2:
	edx = ebp; //mov
	and_(edx, (int32_t)0xFF);
	goto loc_427986;
loc_4279CC:
	xor_(eax, eax);
	to32i(dword_4D4E4C) = ebp; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4279E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	to32i(esp+0x10) = eax; //mov
	to32i(esp+0xC) = edx; //mov
	edx = 0xFFFFFFFF; //mov
	ebp = 0x14; //mov
	xor_(edi, edi);
	to32i(dword_4D4CFC) = edx; //mov
	to32i(dword_4D4CDC) = edx; //mov
	to32i(dword_4D4CBC) = edx; //mov
	to32i(dword_4D4C9C) = edx; //mov
	to32i(esp+8) = edi; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp) = edi; //mov
loc_427A1F:
	edi = to32i(esp); //mov
	edx = to32i(esp+8); //mov
	ebp = to32i(esp+4); //mov
	xor_(esi, esi);
	imul32(ebx, edx, 0x14);
loc_427A2F:
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x14) = edi; //mov
	to32i(esp+0x18) = esi; //mov
	ecx = to32i(dword_4EB5BC+ebx); //mov
	fild(to32i(esp+0x14));
	fild(to32i(esp+0x18));
	to32i(esp+0x18) = eax; //mov
	push32(ecx);
	fild(to32i(esp+0x1C));
	eax = to32i(esp+0x10); //mov
	push32(1);
	to32i(esp+0x20) = eax; //mov
	faddp_st(2, 0);
	fild(to32i(esp+0x20));
	fxch_st(2);
	fst(to32f(flt_4D4CEC));
	fstp(to32f(flt_4D4C8C));
	faddp_st(1, 0);
	fld(to32f(flt_4D4C8C));
	fxch_st(1);
	fst(to32f(flt_4D4CB0));
	fstp(to32f(flt_4D4C90));
	fadd(to32f(flt_4C9EB4));
	fld(to32f(flt_4D4C90));
	fxch_st(1);
	fst(to32f(flt_4D4CCC));
	fxch_st(1);
	fadd(to32f(flt_4C9EB4));
	fxch_st(1);
	fstp(to32f(flt_4D4CAC));
	fst(to32f(flt_4D4CF0));
	fstp(to32f(flt_4D4CD0));
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	eax = to32i(dword_4EB684+ebx); //mov
	push32(eax);
	push32(1);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	add(ebx, (int32_t)4);
	add(esi, (int32_t)0x20);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	cmp(ebx, ebp);
	if (jnz())
		goto loc_427A2F;
	ecx = to32i(esp); //mov
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+4); //mov
	add(ecx, (int32_t)0x20);
	inc(ebx);
	add(edx, (int32_t)0x14);
	to32i(esp) = ecx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+4) = edx; //mov
	cmp(ebx, (int32_t)0xA);
	if (jl())
		goto loc_427A1F;
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_427B30()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	esi = eax; //mov
	to32i(esp+8) = edx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+0x10) = ecx; //mov
	ebx = to32i(esp+0x38); //mov
	to32i(dword_4D4CFC) = ebx; //mov
	to32i(dword_4D4CDC) = ebx; //mov
	to32i(dword_4D4CBC) = ebx; //mov
	to32i(dword_4D4C9C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebx, eax);
	shl(ebx, (int32_t)4);
	esi = ebx; //mov
	shl(ebx, (int32_t)4);
	sub(ebx, esi);
	to32i(esp+0xC) = ebx; //mov
	add(ebx, (int32_t)0x3C);
	xor_(ebp, ebp);
	to32i(esp+0x18) = ebx; //mov
	ebx = ecx; //mov
	imul32(ebx, ebp);
	to32i(esp+4) = ecx; //mov
	to32i(esp+0x14) = ebx; //mov
loc_427B8C:
	ebx = to32i(esp+0x14); //mov
	to32i(esp+0x1C) = ebx; //mov
	ebx = to32i(esp+8); //mov
	to32i(esp+0x20) = ebx; //mov
	ebx = to32i(esp+0x10); //mov
	to32i(esp+0x24) = ebx; //mov
	imul32(ebx, ebp, 0x3C);
	ecx = to32i(esp+0xC); //mov
	esi = to32i(esp); //mov
	fild(to32i(esp+0x1C));
	fild(to32i(esp+0x20));
	faddp_st(1, 0);
	fild(to32i(esp+0x24));
	fxch_st(1);
	fst(to32f(flt_4D4CEC));
	fst(to32f(flt_4D4C8C));
	faddp_st(1, 0);
	edi = to32i(esp+0x18); //mov
	fst(to32f(flt_4D4CCC));
	fstp(to32f(flt_4D4CAC));
	add(ebx, ecx);
loc_427BDE:
	to32i(esp+0x24) = esi; //mov
	eax = to32i(dword_4EB74C+ebx); //mov
	fild(to32i(esp+0x24));
	fstp(to32f(flt_4D4CB0));
	push32(eax);
	fld(to32f(flt_4D4CB0));
	fld_st(0);
	push32(1);
	fadd(to32f(flt_4C9EB0));
	fxch_st(1);
	fstp(to32f(flt_4D4C90));
	fst(to32f(flt_4D4CF0));
	fstp(to32f(flt_4D4CD0));
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	add(ebx, (int32_t)4);
	add(esi, (int32_t)0x20);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	cmp(ebx, edi);
	if (jnz())
		goto loc_427BDE;
	ebx = to32i(esp+4); //mov
	ecx = to32i(esp+0x14); //mov
	edx = to32i(esp+0x18); //mov
	inc(ebp);
	add(ecx, ebx);
	add(edx, (int32_t)0x3C);
	to32i(esp+0x14) = ecx; //mov
	to32i(esp+0x18) = edx; //mov
	cmp(ebp, (int32_t)0x14);
	if (jl())
		goto loc_427B8C;
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_427C70()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	ebp = ecx; //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebx, eax);
	shl(ebx, (int32_t)4);
	esi = ebx; //mov
	shl(ebx, (int32_t)4);
	sub(ebx, esi);
	esi = 0xF0; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+0x24) = esi; //mov
	esi = to32i(esp+8); //mov
	add(esi, (int32_t)0x3C);
	to32i(esp+0x18) = esi; //mov
	esi = to32i(esp+0xC); //mov
	xor_(edx, edx);
	to32i(esp+4) = esi; //mov
	imul32(esi, edx);
	edi = 0xC; //mov
	to32i(esp+0x30) = edx; //mov
	to32i(esp+0x20) = edx; //mov
	ebx = to32i(esp+0x58); //mov
	to32i(esp+0x28) = edi; //mov
	add(ebx, ebx);
	eax = 0xE4; //mov
	sub(ebx, (int32_t)0xF7);
	to32i(esp+0x1C) = eax; //mov
	to32i(esp+0x14) = ebx; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+0x2C) = esi; //mov
loc_427CEB:
	ecx = to32i(esp+0x58); //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_427E8E;
	cmp(to32i(esp+0x54), (int32_t)0);
	if (jz())
		goto loc_427EAB;
	ebx = to32i(esp+0x10); //mov
	add(ebx, to32i(esp+0x24));
loc_427D0B:
	cmp(ebx, ebp);
	if (jge())
		goto loc_427D11;
	ebx = ebp; //mov
loc_427D11:
	eax = to32i(esp+0x50); //mov
	cmp(ebx, eax);
	if (jle())
		goto loc_427D1B;
	ebx = eax; //mov
loc_427D1B:
	esi = ebx; //mov
	shl(esi, (int32_t)0x10);
	edi = (int32_t)(intptr_t)(esi-0x1000000); //lea
	esi = ebx; //mov
	shl(esi, (int32_t)8);
	add(esi, edi);
	add(esi, ebx);
	edx = to32i(esp+0x54); //mov
	to32i(dword_4D4CFC) = esi; //mov
	to32i(dword_4D4C9C) = esi; //mov
	test(edx, edx);
	if (jz())
		goto loc_427EB8;
	ebx = to32i(esp+0x14); //mov
	add(ebx, to32i(esp+0x1C));
loc_427D4F:
	cmp(ebx, ebp);
	if (jge())
		goto loc_427D55;
	ebx = ebp; //mov
loc_427D55:
	edi = to32i(esp+0x50); //mov
	cmp(ebx, edi);
	if (jle())
		goto loc_427D5F;
	ebx = edi; //mov
loc_427D5F:
	esi = ebx; //mov
	shl(esi, (int32_t)0x10);
	edi = (int32_t)(intptr_t)(esi-0x1000000); //lea
	esi = ebx; //mov
	shl(esi, (int32_t)8);
	add(esi, edi);
	add(esi, ebx);
	to32i(dword_4D4CDC) = esi; //mov
	to32i(dword_4D4CBC) = esi; //mov
loc_427D7F:
	ebx = to32i(esp+0x2C); //mov
	to32i(esp+0x34) = ebx; //mov
	ebx = to32i(esp); //mov
	to32i(esp+0x38) = ebx; //mov
	ebx = to32i(esp+0xC); //mov
	esi = to32i(esp+0x30); //mov
	to32i(esp+0x3C) = ebx; //mov
	imul32(ebx, esi, 0x3C);
	fild(to32i(esp+0x34));
	fild(to32i(esp+0x38));
	faddp_st(1, 0);
	fild(to32i(esp+0x3C));
	fxch_st(1);
	fst(to32f(flt_4D4CEC));
	fst(to32f(flt_4D4C8C));
	faddp_st(1, 0);
	edi = to32i(esp+8); //mov
	fst(to32f(flt_4D4CCC));
	fstp(to32f(flt_4D4CAC));
	add(ebx, edi);
	xor_(esi, esi);
	edi = to32i(esp+0x18); //mov
loc_427DD3:
	to32i(esp+0x3C) = esi; //mov
	eax = to32i(dword_4EB74C+ebx); //mov
	fild(to32i(esp+0x3C));
	fstp(to32f(flt_4D4CB0));
	push32(eax);
	fld(to32f(flt_4D4CB0));
	fld_st(0);
	push32(1);
	fadd(to32f(flt_4C9EAC));
	fxch_st(1);
	fstp(to32f(flt_4D4C90));
	fst(to32f(flt_4D4CF0));
	fstp(to32f(flt_4D4CD0));
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(dword_4D4D0C);
	push32(flt_4D4C8C);
	push32(1);
	add(ebx, (int32_t)4);
	add(esi, (int32_t)0x20);
	esp -= 4; _sub_497D6C(); esp += 4; //call
	cmp(ebx, edi);
	if (jnz())
		goto loc_427DD3;
	ebx = to32i(esp+0x28); //mov
	edx = to32i(esp+0x20); //mov
	ecx = to32i(esp+0x24); //mov
	esi = to32i(esp+0x1C); //mov
	edi = to32i(esp+0x18); //mov
	eax = to32i(esp+0x2C); //mov
	add(ebx, (int32_t)0xC);
	add(edx, (int32_t)0xC);
	sub(ecx, (int32_t)0xC);
	sub(esi, (int32_t)0xC);
	add(edi, (int32_t)0x3C);
	to32i(esp+0x28) = ebx; //mov
	to32i(esp+0x20) = edx; //mov
	to32i(esp+0x24) = ecx; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x18) = edi; //mov
	ebx = to32i(esp+4); //mov
	edx = to32i(esp+0x30); //mov
	add(eax, ebx);
	inc(edx);
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x30) = edx; //mov
	cmp(edx, (int32_t)0x14);
	if (jl())
		goto loc_427CEB;
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_427E8E:
	to32i(dword_4D4CDC) = ecx; //mov
	to32i(dword_4D4CBC) = ecx; //mov
	to32i(dword_4D4C9C) = ecx; //mov
	to32i(dword_4D4CFC) = ecx; //mov
	goto loc_427D7F;
loc_427EAB:
	ebx = to32i(esp+0x10); //mov
	add(ebx, to32i(esp+0x20));
	goto loc_427D0B;
loc_427EB8:
	ebx = to32i(esp+0x14); //mov
	add(ebx, to32i(esp+0x28));
	goto loc_427D4F;
}
Fn(void) Game::_sub_427ED0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	to32i(esp) = eax; //mov
	ebx = 0x20; //mov
	xor_(ecx, ecx);
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	ebx = 0x20; //mov
	edx = 0xA0; //mov
	to32i(esp+0x28) = eax; //mov
	xor_(ecx, ecx);
	eax = 0x180; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(eax, eax);
	xor_(edx, edx);
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = to32i(esp); //mov
	ecx = 0x14; //mov
	esp -= 4; _sub_40CD70(); esp += 4; //call
	xor_(edx, edx);
	to32i(esp+0xC) = ecx; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x14) = edx; //mov
loc_427F35:
	imul32(esi, to32i(esp+0x18), 0x14);
	eax = to32i(esp+0xC); //mov
	ebp = to32i(esp+0x14); //mov
	to32i(esp+0x24) = eax; //mov
	xor_(edi, edi);
loc_427F48:
	eax = to32i(esp+0x28); //mov
	ebx = edi; //mov
	edx = ebp; //mov
	eax = to32i(eax+0x20); //mov
	ecx = 1; //mov
	esp -= 4; _sub_4850B0(); esp += 4; //call
	eax = to32i(esp+0x28); //mov
	edx = 0x6D; //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_49A118(); esp += 4; //call
	push32(0);
	ebx = eax; //mov
	add(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(dword_4EB5BC+esi); //mov
	push32(eax);
	add(esi, (int32_t)4);
	add(edi, (int32_t)0x20);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = ebx; //mov
	edx = to32i(esp+0x24); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	cmp(esi, edx);
	if (jnz())
		goto loc_427F48;
	ebx = to32i(esp+0x14); //mov
	esi = to32i(esp+0x18); //mov
	ecx = to32i(esp+0xC); //mov
	add(ebx, (int32_t)0x20);
	inc(esi);
	add(ecx, (int32_t)0x14);
	to32i(esp+0x14) = ebx; //mov
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0xC) = ecx; //mov
	cmp(esi, (int32_t)0xA);
	if (jl())
		goto loc_427F35;
	eax = to32i(esp+4); //mov
	ebx = 0x10; //mov
	edx = 0xA0; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = to32i(esp+0x28); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = 0x180; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(eax, eax);
	xor_(edx, edx);
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(esp+0x1C) = ebp; //mov
	esp -= 4; _sub_40CD70(); esp += 4; //call
	eax = 0x14; //mov
	to32i(esp+0x10) = ebp; //mov
	to32i(esp+8) = eax; //mov
loc_428019:
	ecx = to32i(esp+0x1C); //mov
	eax = to32i(esp+8); //mov
	ebp = to32i(esp+0x10); //mov
	xor_(edi, edi);
	to32i(esp+0x20) = eax; //mov
	imul32(esi, ecx, 0x14);
loc_42802E:
	eax = to32i(dword_4D4D28); //mov
	ebx = edi; //mov
	edx = ebp; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_4850B0(); esp += 4; //call
	eax = to32i(dword_4D4D28); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428440(); esp += 4; //call
	eax = to32i(dword_4D4D28); //mov
	eax = to32i(eax+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	ebx = to32i(dword_4EB684+esi); //mov
	push32(ebx);
	add(esi, (int32_t)4);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = to32i(esp+0x20); //mov
	add(edi, (int32_t)0x20);
	cmp(esi, eax);
	if (jnz())
		goto loc_42802E;
	ecx = to32i(esp+0x10); //mov
	ebx = to32i(esp+0x1C); //mov
	edx = to32i(esp+8); //mov
	add(ecx, (int32_t)0x20);
	inc(ebx);
	add(edx, (int32_t)0x14);
	to32i(esp+0x10) = ecx; //mov
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp+8) = edx; //mov
	cmp(ebx, (int32_t)0xA);
	if (jl())
		goto loc_428019;
	eax = to32i(esp+4); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4280B0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = edx; //mov
	to32i(esp) = ebx; //mov
	ebp = ecx; //mov
	ebx = 0x20; //mov
	edx = 0x100; //mov
	xor_(ecx, ecx);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	edi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(eax, eax);
	edx = to32i(esp); //mov
	esp -= 4; _sub_482740(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_42812A;
	ebx = to32i(esp+0x14); //mov
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_486C60(); esp += 4; //call
loc_4280F2:
	esp -= 4; _sub_4824BC(); esp += 4; //call
	edx = 0xC8; //mov
	eax = to32i(edi+0x20); //mov
	esp -= 4; _sub_4283A0(); esp += 4; //call
	eax = to32i(edi+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	ecx = to32i(dword_4D4E44); //mov
	push32(ecx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_42812A:
	eax = esi; //mov
	esp -= 4; _sub_486D10(); esp += 4; //call
	goto loc_4280F2;
}
Fn(void) Game::_sub_428140()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = edx; //mov
	edi = ecx; //mov
	ebx = 0x20; //mov
	edx = 0x100; //mov
	xor_(ecx, ecx);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	ecx = to32i(esp+0x10); //mov
	edx = 0x1900; //mov
	esi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(eax, eax);
	ebx = edi; //mov
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	edx = 0xC8; //mov
	eax = to32i(esi+0x20); //mov
	esp -= 4; _sub_4283A0(); esp += 4; //call
	eax = to32i(esi+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	edx = to32i(dword_4D4E44); //mov
	push32(edx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4281B0()
{
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	to32i(esp) = ecx; //mov
	edi = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(esp+0x10); //mov
	to32i(dword_4EB58C+edi) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4281D7;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	esp += 4; return;
loc_4281D7:
	push32(esi);
	ebx = 0x10; //mov
	edx = 0x80; //mov
	xor_(ecx, ecx);
	eax = edx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	edx = 0x2500; //mov
	esi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(eax, eax);
	xor_(ecx, ecx);
	esp -= 4; _sub_482740(); esp += 4; //call
	sub(ebx, (int32_t)0x1FE);
	eax = ebp; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(esi+0x20); //mov
	esp -= 4; _sub_428440(); esp += 4; //call
	eax = to32i(esi+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	ecx = to32i(dword_4EB5A4+edi); //mov
	push32(ecx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	pop32(esi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	esp += 4; return;
}
Fn(void) Game::_sub_428250()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	esi = eax; //mov
	edi = edx; //mov
	edx = to32i(dword_4EB584+edx*4); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_42827D;
	eax = to32i(dword_4D231C); //mov
	cmp(edx, to32i(eax+0x20));
	if (jz())
		goto loc_42827D;
	eax = to32i(dword_4D2320); //mov
	cmp(edx, to32i(eax+0x20));
	if (jnz())
		goto loc_42838E;
loc_42827D:
	push32(ecx);
	push32(ebx);
	ebx = 0x10; //mov
	edx = 0x1E0; //mov
	eax = 0x280; //mov
	xor_(ecx, ecx);
	to32i(dword_4EB584+edi*4) = esi; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(esp+8) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	cmp(to8i(byte_4DB25C), (int8_t)8);
	if (jnz())
		goto loc_428395;
	eax = 0xFF; //mov
loc_4282B7:
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(eax, edi);
	xor_(esi, esi);
	shl(eax, (int32_t)4);
	to32i(esp+0x18) = esi; //mov
	esi = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, esi);
	xor_(edi, edi);
	to32i(esp+0xC) = eax; //mov
	add(eax, (int32_t)0x3C);
	to32i(esp+0x10) = edi; //mov
	to32i(esp+0x14) = eax; //mov
loc_4282FB:
	imul32(esi, to32i(esp+0x18), 0x3C);
	edx = to32i(esp+0xC); //mov
	ebp = to32i(esp+0x10); //mov
	xor_(edi, edi);
	eax = to32i(esp+0x14); //mov
	add(esi, edx);
	to32i(esp+0x1C) = eax; //mov
loc_428314:
	eax = to32i(dword_4D4D28); //mov
	ebx = edi; //mov
	edx = ebp; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_4850B0(); esp += 4; //call
	eax = to32i(dword_4D4D28); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428440(); esp += 4; //call
	eax = to32i(dword_4D4D28); //mov
	eax = to32i(eax+0x20); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	ecx = to32i(dword_4EB74C+esi); //mov
	add(esi, (int32_t)4);
	push32(ecx);
	add(edi, (int32_t)0x20);
	ebx = to32i(esp+0x28); //mov
	esp -= 4; _sub_49755C(); esp += 4; //call
	cmp(esi, ebx);
	if (jnz())
		goto loc_428314;
	edi = to32i(esp+0x10); //mov
	ebp = to32i(esp+0x18); //mov
	esi = to32i(esp+0x14); //mov
	add(edi, (int32_t)0x20);
	inc(ebp);
	add(esi, (int32_t)0x3C);
	to32i(esp+0x10) = edi; //mov
	to32i(esp+0x18) = ebp; //mov
	to32i(esp+0x14) = esi; //mov
	cmp(ebp, (int32_t)0x14);
	if (jl())
		goto loc_4282FB;
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
loc_42838E:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_428395:
	xor_(eax, eax);
	goto loc_4282B7;
}
Fn(void) Game::_sub_4283A0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+8) = edx; //mov
	ecx = (int32_t)(intptr_t)(eax+0x10); //lea
	ebx = to32i(eax+2); //mov
	eax = to32i(eax+4); //mov
	sar(ebx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	imul32(ebx, eax);
	to32i(esp+0xC) = ebx; //mov
	edx = ecx; //mov
	esi = to32i(esp+0xC); //mov
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_428429;
loc_4283CE:
	eax = to32i(ecx); //mov
	esi = eax; //mov
	ebp = eax; //mov
	shr(esi, (int32_t)0x18);
	edi = eax; //mov
	and_(esi, (int32_t)0xFF);
	shr(ebp, (int32_t)0x13);
	to32i(esp) = esi; //mov
	esi = eax; //mov
	shr(edi, (int32_t)3);
	shr(esi, (int32_t)0xB);
	and_(ebp, (int32_t)0x1F);
	and_(esi, (int32_t)0x1F);
	and_(edi, (int32_t)0x1F);
	to32i(esp+4) = esi; //mov
	esi = ebp; //mov
	eax = to32i(esp+4); //mov
	shl(esi, (int32_t)0xA);
	shl(eax, (int32_t)5);
	ebp = to32i(esp+8); //mov
	or_(eax, esi);
	esi = to32i(esp); //mov
	or_(eax, edi);
	cmp(esi, ebp);
	if (jge())
		goto loc_428432;
	to16i(edx) = 0; //mov
loc_42841A:
	edi = to32i(esp+0xC); //mov
	add(ecx, (int32_t)4);
	inc(ebx);
	add(edx, (int32_t)2);
	cmp(ebx, edi);
	if (jl())
		goto loc_4283CE;
loc_428429:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_428432:
	or_(ah, (int8_t)0x80);
	to16i(edx) = ax; //mov
	goto loc_42841A;
}
Fn(void) Game::_sub_428440()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = eax; //mov
	ecx = to32i(edx+2); //mov
	ebp = to32i(edx+4); //mov
	sar(ecx, (int32_t)0x10);
	sar(ebp, (int32_t)0x10);
	imul32(ebp, ecx);
	add(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	test(ebp, ebp);
	if (jle())
		goto loc_42849A;
loc_428460:
	dx = to16i(eax); //mov
	and_(edx, (int32_t)0xFFFF);
	esi = edx; //mov
	ebx = edx; //mov
	edi = edx; //mov
	sar(esi, (int32_t)0xB);
	sar(ebx, (int32_t)5);
	and_(esi, (int32_t)0x1F);
	and_(ebx, (int32_t)0x3F);
	edx = esi; //mov
	sar(ebx, (int32_t)1);
	shl(edx, (int32_t)0xA);
	shl(ebx, (int32_t)5);
	and_(edi, (int32_t)0x1F);
	or_(edx, ebx);
	or_(dx, di);
	if (jnz())
		goto loc_4284A1;
loc_42848F:
	to16i(eax) = dx; //mov
	inc(ecx);
	add(eax, (int32_t)2);
	cmp(ecx, ebp);
	if (jl())
		goto loc_428460;
loc_42849A:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4284A1:
	or_(dh, (int8_t)0x80);
	goto loc_42848F;
}
Fn(void) Game::_sub_4284B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebp = 0x3C; //mov
	xor_(edx, edx);
	xor_(edi, edi);
	to32i(dword_4EB588) = edx; //mov
	to32i(dword_4EB584) = edx; //mov
loc_4284D1:
	esi = ebp; //mov
	imul32(ebx, edi, 0x3C);
loc_4284D6:
	push32(0);
	push32(0);
	push32(3);
	push32(0x20);
	push32(0x20);
	esp -= 4; _sub_497464(); esp += 4; //call
	push32(0);
	push32(0);
	push32(3);
	push32(0x20);
	add(ebx, (int32_t)4);
	push32(0x20);
	to32i(dword_4EB748+ebx) = eax; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4EBBF8+ebx) = eax; //mov
	cmp(ebx, esi);
	if (jnz())
		goto loc_4284D6;
	inc(edi);
	add(ebp, (int32_t)0x3C);
	cmp(edi, (int32_t)0x14);
	if (jl())
		goto loc_4284D1;
	push32(0);
	push32(0);
	push32(7);
	push32(0x100);
	push32(0x100);
	esp -= 4; _sub_497464(); esp += 4; //call
	push32(0);
	push32(0);
	push32(7);
	push32(0x100);
	push32(0x100);
	to32i(dword_4EC4B0) = eax; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	push32(0);
	push32(0);
	push32(7);
	push32(0x100);
	push32(0x100);
	ebx = to32i(esp+0x14); //mov
	to32i(dword_4EC4B4) = eax; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4EC4B8) = eax; //mov
	esp -= 4; _sub_426F10(); esp += 4; //call
	cmp(ebx, (int32_t)(intptr_t)dword_4D2E78);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)dword_4D2944);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)dword_4D2870);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3D90);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3CFC);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3DB8);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)dword_4D28C4);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3C50);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3BE4);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3B74);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)off_4D3B08);
	if (jz())
		goto loc_42867B;
	cmp(ebx, (int32_t)(intptr_t)dword_4D2824);
	if (jz())
		goto loc_42867B;
	ebp = 0x14; //mov
	xor_(edi, edi);
loc_428603:
	esi = ebp; //mov
	imul32(ebx, edi, 0x14);
loc_428608:
	push32(0);
	push32(0);
	push32(7);
	push32(0x20);
	push32(0x20);
	esp -= 4; _sub_497464(); esp += 4; //call
	push32(0);
	push32(0);
	push32(3);
	push32(0x20);
	add(ebx, (int32_t)4);
	push32(0x20);
	to32i(dword_4EB5B8+ebx) = eax; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4EB680+ebx) = eax; //mov
	cmp(ebx, esi);
	if (jnz())
		goto loc_428608;
	inc(edi);
	add(ebp, (int32_t)0x14);
	cmp(edi, (int32_t)0xA);
	if (jl())
		goto loc_428603;
	xor_(ebx, esi);
	esi = 0x80; //mov
	xor_(edi, edi);
loc_42864D:
	push32(edi);
	push32(edi);
	push32(3);
	push32(esi);
	push32(esi);
	add(ebx, (int32_t)4);
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4EB5A0+ebx) = eax; //mov
	cmp(ebx, (int32_t)0x18);
	if (jnz())
		goto loc_42864D;
	push32(0);
	push32(2);
	esp -= 4; _sub_497738(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42867B:
	push32(0);
	push32(0);
	push32(3);
	push32(0x100);
	push32(0x100);
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4D4E44) = eax; //mov
	push32(0);
	push32(2);
	esp -= 4; _sub_497738(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4286B0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	esp -= 4; _sub_4287C0(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_4289F0(); esp += 4; //call
	finit();
	fstcw(to16i(dword_4EC4C4));
	eax = to32i(dword_4EC4C4); //mov
	to32i(dword_4EC4C0) = eax; //mov
	and_(eax, (int32_t)0xFFFFFCFF);
	to32i(dword_4EC4C4) = eax; //mov
	fldcw(to16i(dword_4EC4C4));
	esp -= 4; _sub_4287C0(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = to32i(dword_4D4D20); //mov
	to32i(esp) = eax; //mov
	edx = to32i(esp); //mov
	push32(edx);
	push32(0x65);
	esp -= 4; _sub_497738(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428730()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_4287C0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_4287C0(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	finit();
	fldcw(to16i(dword_4EC4C0));
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428770()
{
	push32(ecx);
	push32(edx);
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jnz())
		goto loc_428797;
	esp -= 4; _sub_4976B8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	return;
loc_428797:
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4287C0()
{
	push32(ecx);
	push32(edx);
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4287F0()
{
	push32(edx);
	finit();
	fldcw(to16i(dword_4EC4C0));
	xor_(edx, edx);
	eax = to32i(dword_4D4D28); //mov
	to32i(dword_4D4D1C) = edx; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	to32i(dword_4D4D28) = edx; //mov
	to32i(dword_4D4D24) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_428830()
{
	push32(ebx);
	push32(ecx);
	ebx = edx; //mov
	to32i(dword_4D4D1C) = 1; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4288F0;
loc_428846:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	test(ebx, ebx);
	if (jz())
		goto loc_428858;
	esp -= 4; _sub_49769C(); esp += 4; //call
loc_428858:
	push32(1);
	esp -= 4; _sub_497680(); esp += 4; //call
	test(ebx, ebx);
	if (jnz())
		goto loc_4288FA;
loc_428868:
	ecx = 0x20; //mov
	ebx = 0x10; //mov
	edx = 0x1E0; //mov
	eax = 0x280; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	ecx = 0x20; //mov
	to32i(dword_4D4D24) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = 0xFF000000; //mov
	ebx = 0x10; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	edx = ecx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_492820(); esp += 4; //call
	to32i(dword_4D4D28) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	finit();
	fstcw(to16i(dword_4EC4C4));
	eax = to32i(dword_4EC4C4); //mov
	to32i(dword_4EC4C0) = eax; //mov
	and_(eax, (int32_t)0xFFFFFCFF);
	to32i(dword_4EC4C4) = eax; //mov
	fldcw(to16i(dword_4EC4C4));
	pop32(ecx);
	pop32(ebx);
	return;
loc_4288F0:
	esp -= 4; _sub_4289F0(); esp += 4; //call
	goto loc_428846;
loc_4288FA:
	esp -= 4; _sub_49769C(); esp += 4; //call
	goto loc_428868;
}
Fn(void) Game::_sub_428910()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	test(eax, eax);
	if (jz())
		goto loc_42895A;
	fld(to32f(dword_4D4D20));
	fadd(to32f(flt_4C9E74));
	fstp(to32f(dword_4D4D20));
	cmp(to32i(dword_4D4D20), (int32_t)0x3F800000);
	if (jge())
		goto loc_428941;
	to32i(dword_4D4D20) = 0x40133333; //mov
loc_428941:
	eax = to32i(dword_4D4D20); //mov
	to32i(esp) = eax; //mov
	edx = to32i(esp); //mov
	push32(edx);
	push32(0x65);
	esp -= 4; _sub_497738(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	return;
loc_42895A:
	fld(to32f(dword_4D4D20));
	fadd(to32f(flt_4C9E6C));
	fst(to32f(dword_4D4D20));
	fcomp(to32f(flt_4C9E70));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_428941;
	to32i(dword_4D4D20) = 0x3F800000; //mov
	goto loc_428941;
}
Fn(void) Game::_sub_428990()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	fld(to32f(dword_4D4D20));
	fcomp(to32f(flt_4C9E50));
	fnstsw(ax);
	sahf();
	if (ja())
		goto loc_4289D5;
	cmp(to32i(dword_4D4D20), (int32_t)0x3F800000);
	if (jge())
		goto loc_4289BC;
	to32i(dword_4D4D20) = 0x3F800000; //mov
loc_4289BC:
	eax = to32i(dword_4D4D20); //mov
	to32i(esp) = eax; //mov
	edx = to32i(esp); //mov
	push32(edx);
	push32(0x65);
	esp -= 4; _sub_497738(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	return;
loc_4289D5:
	to32i(dword_4D4D20) = 0x40133333; //mov
	goto loc_4289BC;
}
Fn(void) Game::_sub_4289F0()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_4975B0(); esp += 4; //call
	push32(0);
	push32(0);
	push32(4);
	push32(0x20);
	push32(0x20);
	esp -= 4; _sub_497464(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_4D4D2C) = eax; //mov
	to32i(dword_4D4D30) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428A20()
{
	cmp(to32i(dword_4D4D1C), (int32_t)0);
	if (jnz())
	{
		_sub_4287C0();
		return;
	}
}
Fn(void) Game::_sub_428A30()
{
	push32(ebx);
	ebx = eax; //mov
	ah = to8i(byte_4D4E84); //mov
	test(ah, ah);
	if (jnz())
		goto loc_428A46;
	if (jz())
		goto loc_428A6B;
	eax = 1; //mov
	pop32(ebx);
	return;
loc_428A46:
	push32(edx);
	push32(ecx);
	esp -= 4; _sub_4972BC(); esp += 4; //call
	test(ebx, ebx);
	if (jz())
		goto loc_428A61;
	esp -= 4; _sub_480BA0(); esp += 4; //call
loc_428A61:
	xor_(dh, dh);
	to8i(byte_4D4E84) = dh; //mov
	pop32(ecx);
	pop32(edx);
loc_428A6B:
	xor_(eax, eax);
	pop32(ebx);
}
Fn(void) Game::_sub_428A70()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	cmp(to8i(byte_4D4E84), (int8_t)0);
	if (jnz())
		goto loc_428AA3;
	cmp(to32i(dword_4DB6A0), (int32_t)0);
	if (jz())
		goto loc_428AAE;
loc_428A87:
	test(esi, esi);
	if (jnz())
		goto loc_428ABA;
	ebx = 1; //mov
loc_428A90:
	edx = 0x1E0; //mov
	eax = 0x280; //mov
	esp -= 4; _sub_480C60(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_428ABE;
loc_428AA3:
	xor_(eax, eax);
	al = to8i(byte_4D4E84); //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_428AAE:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DB6A0) = eax; //mov
	goto loc_428A87;
loc_428ABA:
	xor_(ebx, ebx);
	goto loc_428A90;
loc_428ABE:
	push32(ecx);
	push32(off_4D4E68);
	push32(0x13);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(esi);
	push32(0x12);
	esp -= 4; _sub_497738(); esp += 4; //call
	cmp(to8i(byte_4D4E85), (int8_t)0);
	if (jnz())
		goto loc_428B0A;
	eax = (int32_t)(intptr_t)sub_428B30; //mov
	dh = 1; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	to8i(byte_4D4E85) = dh; //mov
loc_428B0A:
	to8i(byte_4D4E84) = 1; //mov
	to32i(dword_4DAC04) = (int32_t)(intptr_t)sub_428B40; //mov
	pop32(ecx);
	xor_(eax, eax);
	al = to8i(byte_4D4E84); //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_428B30()
{
	eax = 1; //mov
	_sub_428A30(); return; //jmp
}
Fn(void) Game::_sub_428B40()
{
	push32(edx);
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_428A30(); esp += 4; //call
	to32i(dword_4DAC04) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_428C40()
{
	xor_(eax, eax);
	_sub_483EB0(); return; //jmp
}
Fn(void) Game::_sub_428C60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_4DB1F8), (int32_t)0);
	if (jz())
		goto loc_428D7F;
loc_428C73:
	test(ecx, ecx);
	if (jnz())
		goto loc_428DA7;
	ecx = 0x280; //mov
loc_428C80:
	test(edx, edx);
	if (jnz())
		goto loc_428DBA;
	edx = 0x1E0; //mov
loc_428C8D:
	test(ebx, ebx);
	if (jnz())
		goto loc_428DCD;
loc_428C95:
	ebx = 0x10; //mov
loc_428C9A:
	eax = ecx; //mov
	esp -= 4; _sub_49AFA0(); esp += 4; //call
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jnz())
		goto loc_428CE0;
	test(to8i(dword_4DAB88), (int8_t)1);
	if (jnz())
		goto loc_428DE4;
	eax = 1; //mov
loc_428CC6:
	esp -= 4; _sub_428A70(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_428E20; //mov
	edx = (int32_t)(intptr_t)sub_428E10; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	to32i(dword_4DAC04) = edx; //mov
loc_428CE0:
	ecx = to32i(dword_4DB2A4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_428CF1;
	eax = ecx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_428CF1:
	ebx = to32i(dword_4DB2A8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_428D02;
	eax = ebx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_428D02:
	xor_(esi, esi);
	ebp = to32i(dword_4DB2DC); //mov
	to32i(dword_4DB2A4) = esi; //mov
	to32i(dword_4DB2A8) = esi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_428D21;
	eax = ebp; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_428D21:
	eax = to32i(dword_4DB2E0); //mov
	test(eax, eax);
	if (jz())
		goto loc_428D2F;
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_428D2F:
	xor_(edx, edx);
	ebx = to32i(dword_4DABD4); //mov
	to32i(dword_4DB2DC) = edx; //mov
	to32i(dword_4DB2E0) = edx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_428D54;
	eax = ebx; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	to32i(dword_4DABD4) = edx; //mov
loc_428D54:
	edi = 1; //mov
	ebx = (int32_t)(intptr_t)dword_4DB278; //mov
	xor_(edx, edx);
	eax = edi; //mov
	to32i(dword_4DAB5C) = edi; //mov
	esp -= 4; _sub_49AE90(); esp += 4; //call
	cmp(edi, to32i(dword_4DAB8C));
	if (jl())
		goto loc_428DEB;
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_428D7F:
	edi = (int32_t)(intptr_t)aCNfs2seGame3_2; //mov
	ebp = 0x2C; //mov
	push32(aInitgraphicsIn);
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_428C73;
loc_428DA7:
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_428C80;
	ecx = 0x400; //mov
	goto loc_428C80;
loc_428DBA:
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_428C8D;
	edx = 0x300; //mov
	goto loc_428C8D;
loc_428DCD:
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_428C95;
	cmp(ebx, (int32_t)0xF);
	if (jnz())
		goto loc_428C9A;
	goto loc_428C95;
loc_428DE4:
	xor_(eax, eax);
	goto loc_428CC6;
loc_428DEB:
	ebx = (int32_t)(intptr_t)dword_4DB2B0; //mov
	eax = 2; //mov
	xor_(edx, edx);
	esp -= 4; _sub_49AE90(); esp += 4; //call
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_428E10()
{
	esp -= 4; _sub_428E20(); esp += 4; //call
	xor_(eax, eax);
}
Fn(void) Game::_sub_428E20()
{
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jnz())
		goto loc_428E2A;
	return;
loc_428E2A:
	push32(ecx);
	xor_(eax, eax);
	esp -= 4; _sub_49AE1C(); esp += 4; //call
	eax = 1; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_428A30(); esp += 4; //call
	to32i(dword_4DAB5C) = ecx; //mov
	to32i(dword_4DAC04) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_428E50()
{
	push32(ecx);
	push32(edx);
	push32(0x1E0);
	push32(0x280);
	push32(0);
	push32(0);
	esp -= 4; _sub_497714(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428E80()
{
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
	push32(edx);
	to32i(dword_4EC638) = edx; //mov
	to32i(dword_4EC63C) = edx; //mov
	esp -= 4; _sub_4976C8(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428EB0()
{
	to32i(dword_4EC648) = 1; //mov
}
Fn(void) Game::_sub_428F20()
{
	push32(ecx);
	push32(edx);
	xor_(eax, eax);
	al = to8i(byte_4EF3EE); //mov
	edx = eax; //mov
	xor_(eax, eax);
	shl(edx, (int32_t)0x10);
	al = to8i(byte_4EF3ED); //mov
	or_(edx, (int32_t)0xFF000000);
	shl(eax, (int32_t)8);
	or_(edx, eax);
	xor_(eax, eax);
	al = to8i(byte_4EF3EC); //mov
	or_(eax, edx);
	push32(eax);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_428F60()
{
	push32(ebx);
	push32(ecx);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_428F9A;
	xor_(ecx, ecx);
	to32i(dword_4EC644) = ecx; //mov
loc_428F73:
	eax = to32i(dword_51224C); //mov
	ebx = 1; //mov
	esp -= 4; _sub_4466B0(); esp += 4; //call
	eax = to32i(dword_512244); //mov
	to32i(dword_4EC648) = ebx; //mov
	to32i(dword_4EC640) = eax; //mov
	esp -= 4; _sub_42A170(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
	return;
loc_428F9A:
	eax = to32i(dword_512240); //mov
	to32i(dword_4EC644) = eax; //mov
	goto loc_428F73;
}
Fn(void) Game::_sub_428FB0()
{
	inc(to32i(dword_4EC64C));
}
Fn(void) Game::_sub_428FC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ebx = edx; //mov
	esp -= 4; _sub_42A2A0(); esp += 4; //call
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	test(esi, esi);
	if (jnz())
		goto loc_428FFB;
loc_428FDC:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_42D820(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_428FFB:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	goto loc_428FDC;
}
Fn(void) Game::_sub_429010()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = eax; //mov
	ecx = to32i(eax); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_429093;
loc_429020:
	esi = to32i(edx); //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_42909A;
	eax = esi; //mov
loc_42902D:
	esp -= 4; _sub_429170(); esp += 4; //call
loc_429032:
	edi = to32i(edx); //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_42909E;
	xor_(ecx, ecx);
	to32i(dword_4EC63C) = ecx; //mov
	to32i(dword_4EC638) = ecx; //mov
loc_429047:
	eax = edx; //mov
	esp -= 4; _sub_42A010(); esp += 4; //call
	esi = to32i(edx); //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_42912F;
	eax = esi; //mov
loc_42905B:
	ecx = to32i(dword_51222C); //mov
	xor_(eax, ecx);
	to32i(dword_4D4E88) = eax; //mov
	eax = to32i(esp+0x14); //mov
	esp -= 4; _sub_42A3C0(); esp += 4; //call
	cmp(to32i(edx), (int32_t)0);
	if (jnz())
		goto loc_42908C;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_42908C;
	cmp(to32i(dword_5222D0), (int32_t)0);
	if (jz())
		goto loc_429136;
loc_42908C:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	esp += 8; return;
loc_429093:
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_429020;
	goto loc_429032;
loc_42909A:
	xor_(eax, eax);
	goto loc_42902D;
loc_42909E:
	cmp(edi, (int32_t)3);
	if (jnz())
		goto loc_42911E;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_429103;
	cmp(to32i(dword_511FE0), (int32_t)0);
	if (jz())
		goto loc_4290D4;
	eax = to32i(edx+4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4290D4;
	to32i(dword_4EC638) = eax; //mov
	to32i(dword_4EC63C) = 0x45; //mov
	goto loc_429047;
loc_4290D4:
	cmp(to32i(dword_511FE4), (int32_t)0);
	if (jz())
		goto loc_429047;
	cmp(to32i(edx+4), (int32_t)1);
	if (jnz())
		goto loc_429047;
	edi = 0x135; //mov
	xor_(esi, esi);
	to32i(dword_4EC63C) = edi; //mov
	to32i(dword_4EC638) = esi; //mov
	goto loc_429047;
loc_429103:
	edi = 0x13E; //mov
	esi = 0x214; //mov
	to32i(dword_4EC63C) = edi; //mov
	to32i(dword_4EC638) = esi; //mov
	goto loc_429047;
loc_42911E:
	xor_(eax, eax);
	to32i(dword_4EC63C) = eax; //mov
	to32i(dword_4EC638) = eax; //mov
	goto loc_429047;
loc_42912F:
	xor_(eax, eax);
	goto loc_42905B;
loc_429136:
	eax = to32i(edx+4); //mov
	esp -= 4; _sub_47B930(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	esp += 8; return;
}
Fn(void) Game::_sub_429170()
{
	static const void *const off_429150[] = {
		&&loc_42918D,
		&&loc_429FD1,
		&&loc_429FD1,
		&&loc_429FD1,
		&&loc_4296CC,
		&&loc_429530,
		&&loc_429FD1,
		&&loc_4291CB,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	eax = to32i(dword_5117B0); //mov
	cmp(eax, (int32_t)7);
	if (ja())
		goto loc_429FD1;
	goto *off_429150[eax];
loc_42918D:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x224);
	if (jle())
		goto loc_429336;
	cmp(eax, (int32_t)0x247);
	if (jge())
		goto loc_429336;
	eax = 0xFF3E3E3E; //mov
loc_4291AD:
	esp -= 4; _sub_42CF10(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_429328;
loc_4291BA:
	eax = 0x13; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
loc_4291C4:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4291CB:
	test(ecx, ecx);
	if (jnz())
		goto loc_4291BA;
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x55F);
	if (jle())
		goto loc_4291E9;
	cmp(edx, (int32_t)0x5F5);
	if (jl())
		goto loc_4292B1;
loc_4291E9:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x546);
	if (jle())
		goto loc_429203;
	cmp(ebx, (int32_t)0x60E);
	if (jl())
		goto loc_4292C2;
loc_429203:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x52D);
	if (jle())
		goto loc_42921D;
	cmp(edi, (int32_t)0x627);
	if (jl())
		goto loc_4292D3;
loc_42921D:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x514);
	if (jle())
		goto loc_429234;
	cmp(eax, (int32_t)0x640);
	if (jl())
		goto loc_4292E4;
loc_429234:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x4FB);
	if (jle())
		goto loc_42924E;
	cmp(ecx, (int32_t)0x659);
	if (jl())
		goto loc_4292F5;
loc_42924E:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x4E2);
	if (jle())
		goto loc_429268;
	cmp(esi, (int32_t)0x672);
	if (jl())
		goto loc_429306;
loc_429268:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x4C9);
	if (jle())
		goto loc_429282;
	cmp(ebp, (int32_t)0x68B);
	if (jl())
		goto loc_429317;
loc_429282:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x4B5);
	if (jle())
		goto loc_429328;
	cmp(edx, (int32_t)0x6D6);
	if (jge())
		goto loc_429328;
	eax = 1; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4292B1:
	eax = 9; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4292C2:
	eax = 8; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4292D3:
	eax = 7; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4292E4:
	eax = 6; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4292F5:
	eax = 4; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429306:
	eax = 3; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429317:
	eax = 2; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429328:
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429336:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x223);
	if (jle())
		goto loc_429350;
	cmp(ebx, (int32_t)0x248);
	if (jl())
		goto loc_4294A4;
loc_429350:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x221);
	if (jle())
		goto loc_42936A;
	cmp(edi, (int32_t)0x249);
	if (jl())
		goto loc_4294AE;
loc_42936A:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x21C);
	if (jle())
		goto loc_429381;
	cmp(eax, (int32_t)0x24E);
	if (jl())
		goto loc_4294B8;
loc_429381:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x212);
	if (jle())
		goto loc_42939B;
	cmp(ebx, (int32_t)0x258);
	if (jl())
		goto loc_4294C2;
loc_42939B:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x208);
	if (jle())
		goto loc_4293B5;
	cmp(edi, (int32_t)0x262);
	if (jl())
		goto loc_4294CC;
loc_4293B5:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x203);
	if (jle())
		goto loc_4293CC;
	cmp(eax, (int32_t)0x267);
	if (jl())
		goto loc_4294D6;
loc_4293CC:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x1FE);
	if (jle())
		goto loc_4293E6;
	cmp(ebx, (int32_t)0x26C);
	if (jl())
		goto loc_4294E0;
loc_4293E6:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x1FC);
	if (jle())
		goto loc_429400;
	cmp(edi, (int32_t)0x273);
	if (jl())
		goto loc_4294EA;
loc_429400:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x1F9);
	if (jle())
		goto loc_429417;
	cmp(eax, (int32_t)0x271);
	if (jl())
		goto loc_4294F4;
loc_429417:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x1F4);
	if (jle())
		goto loc_429431;
	cmp(ebx, (int32_t)0x276);
	if (jl())
		goto loc_4294FE;
loc_429431:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x1EF);
	if (jle())
		goto loc_42944B;
	cmp(edi, (int32_t)0x280);
	if (jl())
		goto loc_429508;
loc_42944B:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x1EA);
	if (jle())
		goto loc_429462;
	cmp(eax, (int32_t)0x285);
	if (jl())
		goto loc_429512;
loc_429462:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x1E5);
	if (jle())
		goto loc_42947C;
	cmp(ebx, (int32_t)0x28F);
	if (jl())
		goto loc_42951C;
loc_42947C:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x1E0);
	if (jle())
		goto loc_429526;
	cmp(edi, (int32_t)0x28A);
	if (jge())
		goto loc_429526;
	eax = 0xFF060606; //mov
	goto loc_4291AD;
loc_4294A4:
	eax = 0xFF3D3D3D; //mov
	goto loc_4291AD;
loc_4294AE:
	eax = 0xFF3C3C3C; //mov
	goto loc_4291AD;
loc_4294B8:
	eax = 0xFF3B3B3B; //mov
	goto loc_4291AD;
loc_4294C2:
	eax = 0xFF383838; //mov
	goto loc_4291AD;
loc_4294CC:
	eax = 0xFF2E2E2E; //mov
	goto loc_4291AD;
loc_4294D6:
	eax = 0xFF282828; //mov
	goto loc_4291AD;
loc_4294E0:
	eax = 0xFF202020; //mov
	goto loc_4291AD;
loc_4294EA:
	eax = 0xFF181818; //mov
	goto loc_4291AD;
loc_4294F4:
	eax = 0xFF101010; //mov
	goto loc_4291AD;
loc_4294FE:
	eax = 0xFF0E0E0E; //mov
	goto loc_4291AD;
loc_429508:
	eax = 0xFF0D0D0D; //mov
	goto loc_4291AD;
loc_429512:
	eax = 0xFF0C0C0C; //mov
	goto loc_4291AD;
loc_42951C:
	eax = 0xFF080808; //mov
	goto loc_4291AD;
loc_429526:
	eax = 0xFF000204; //mov
	goto loc_4291AD;
loc_429530:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x5FD);
	if (jle())
		goto loc_42956B;
	cmp(ebx, (int32_t)0x6AB);
	if (jge())
		goto loc_42956B;
	eax = 0xFF25282C; //mov
loc_42954B:
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_4291C4;
	eax = 0x13; //mov
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42956B:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x5FC);
	if (jle())
		goto loc_429585;
	cmp(edi, (int32_t)0x6AC);
	if (jl())
		goto loc_429668;
loc_429585:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x5FB);
	if (jle())
		goto loc_42959C;
	cmp(eax, (int32_t)0x6AD);
	if (jl())
		goto loc_429672;
loc_42959C:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x5FA);
	if (jle())
		goto loc_4295B6;
	cmp(ebx, (int32_t)0x6AE);
	if (jl())
		goto loc_42967C;
loc_4295B6:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x5F9);
	if (jle())
		goto loc_4295D0;
	cmp(edi, (int32_t)0x6AF);
	if (jl())
		goto loc_429686;
loc_4295D0:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x5F8);
	if (jle())
		goto loc_4295E7;
	cmp(eax, (int32_t)0x6B0);
	if (jl())
		goto loc_429690;
loc_4295E7:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x5F7);
	if (jle())
		goto loc_429601;
	cmp(ebx, (int32_t)0x6B1);
	if (jl())
		goto loc_42969A;
loc_429601:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x5F6);
	if (jle())
		goto loc_42961B;
	cmp(edi, (int32_t)0x6B2);
	if (jl())
		goto loc_4296A4;
loc_42961B:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x5F5);
	if (jle())
		goto loc_429632;
	cmp(eax, (int32_t)0x6B3);
	if (jl())
		goto loc_4296AE;
loc_429632:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x5F4);
	if (jle())
		goto loc_429648;
	cmp(ebx, (int32_t)0x6B4);
	if (jl())
		goto loc_4296B8;
loc_429648:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x5F3);
	if (jle())
		goto loc_4296C2;
	cmp(edi, (int32_t)0x6B5);
	if (jge())
		goto loc_4296C2;
	eax = 0xFF75787C; //mov
	goto loc_42954B;
loc_429668:
	eax = 0xFF2D3034; //mov
	goto loc_42954B;
loc_429672:
	eax = 0xFF35383C; //mov
	goto loc_42954B;
loc_42967C:
	eax = 0xFF3D4044; //mov
	goto loc_42954B;
loc_429686:
	eax = 0xFF45484C; //mov
	goto loc_42954B;
loc_429690:
	eax = 0xFF4D5054; //mov
	goto loc_42954B;
loc_42969A:
	eax = 0xFF55585C; //mov
	goto loc_42954B;
loc_4296A4:
	eax = 0xFF5D6064; //mov
	goto loc_42954B;
loc_4296AE:
	eax = 0xFF65686C; //mov
	goto loc_42954B;
loc_4296B8:
	eax = 0xFF6D7074; //mov
	goto loc_42954B;
loc_4296C2:
	eax = 0xFF7D8084; //mov
	goto loc_42954B;
loc_4296CC:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x25D);
	if (jle())
		goto loc_4296E3;
	cmp(eax, (int32_t)0x2F1);
	if (jl())
		goto loc_429BC8;
loc_4296E3:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x25B);
	if (jle())
		goto loc_4296FD;
	cmp(ecx, (int32_t)0x2F2);
	if (jl())
		goto loc_429BDE;
loc_4296FD:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x258);
	if (jle())
		goto loc_429717;
	cmp(esi, (int32_t)0x2F3);
	if (jl())
		goto loc_429BF4;
loc_429717:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x256);
	if (jle())
		goto loc_429731;
	cmp(ebp, (int32_t)0x2F4);
	if (jl())
		goto loc_429C0A;
loc_429731:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x253);
	if (jle())
		goto loc_42974B;
	cmp(edx, (int32_t)0x2F5);
	if (jl())
		goto loc_429C20;
loc_42974B:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x251);
	if (jle())
		goto loc_429765;
	cmp(ebx, (int32_t)0x2F6);
	if (jl())
		goto loc_429C36;
loc_429765:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x24E);
	if (jle())
		goto loc_42977F;
	cmp(edi, (int32_t)0x2F7);
	if (jl())
		goto loc_429C4C;
loc_42977F:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x24C);
	if (jle())
		goto loc_429796;
	cmp(eax, (int32_t)0x2F8);
	if (jl())
		goto loc_429C62;
loc_429796:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x249);
	if (jle())
		goto loc_4297B0;
	cmp(ecx, (int32_t)0x2F9);
	if (jl())
		goto loc_429C78;
loc_4297B0:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x247);
	if (jle())
		goto loc_4297CA;
	cmp(esi, (int32_t)0x2FA);
	if (jl())
		goto loc_429C8E;
loc_4297CA:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x244);
	if (jle())
		goto loc_4297E4;
	cmp(ebp, (int32_t)0x2FB);
	if (jl())
		goto loc_429CA4;
loc_4297E4:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x242);
	if (jle())
		goto loc_4297FE;
	cmp(edx, (int32_t)0x2FC);
	if (jl())
		goto loc_429CBA;
loc_4297FE:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x23F);
	if (jle())
		goto loc_429818;
	cmp(ebx, (int32_t)0x2FD);
	if (jl())
		goto loc_429CD0;
loc_429818:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x509);
	if (jle())
		goto loc_429832;
	cmp(edi, (int32_t)0x53D);
	if (jl())
		goto loc_429CE6;
loc_429832:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x508);
	if (jle())
		goto loc_429849;
	cmp(eax, (int32_t)0x53E);
	if (jl())
		goto loc_429CFC;
loc_429849:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x507);
	if (jle())
		goto loc_429863;
	cmp(ecx, (int32_t)0x53F);
	if (jl())
		goto loc_429D12;
loc_429863:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x506);
	if (jle())
		goto loc_42987D;
	cmp(esi, (int32_t)0x540);
	if (jl())
		goto loc_429D28;
loc_42987D:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x505);
	if (jle())
		goto loc_429897;
	cmp(ebp, (int32_t)0x541);
	if (jl())
		goto loc_429D3E;
loc_429897:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x504);
	if (jle())
		goto loc_4298B1;
	cmp(edx, (int32_t)0x542);
	if (jl())
		goto loc_429D54;
loc_4298B1:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x503);
	if (jle())
		goto loc_4298CB;
	cmp(ebx, (int32_t)0x543);
	if (jl())
		goto loc_429D6A;
loc_4298CB:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x502);
	if (jle())
		goto loc_4298E5;
	cmp(edi, (int32_t)0x544);
	if (jl())
		goto loc_429D80;
loc_4298E5:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x501);
	if (jle())
		goto loc_4298FC;
	cmp(eax, (int32_t)0x545);
	if (jl())
		goto loc_429D96;
loc_4298FC:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x500);
	if (jle())
		goto loc_429916;
	cmp(ecx, (int32_t)0x546);
	if (jl())
		goto loc_429DAC;
loc_429916:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x426);
	if (jle())
		goto loc_429930;
	cmp(esi, (int32_t)0x556);
	if (jl())
		goto loc_429DC2;
loc_429930:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x425);
	if (jle())
		goto loc_42994A;
	cmp(ebp, (int32_t)0x557);
	if (jl())
		goto loc_429DD8;
loc_42994A:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x424);
	if (jle())
		goto loc_429964;
	cmp(edx, (int32_t)0x558);
	if (jl())
		goto loc_429DEE;
loc_429964:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x423);
	if (jle())
		goto loc_42997E;
	cmp(ebx, (int32_t)0x559);
	if (jl())
		goto loc_429E04;
loc_42997E:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x422);
	if (jle())
		goto loc_429998;
	cmp(edi, (int32_t)0x55A);
	if (jl())
		goto loc_429E1A;
loc_429998:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x421);
	if (jle())
		goto loc_4299AF;
	cmp(eax, (int32_t)0x55B);
	if (jl())
		goto loc_429E30;
loc_4299AF:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x420);
	if (jle())
		goto loc_4299C9;
	cmp(ecx, (int32_t)0x55C);
	if (jl())
		goto loc_429E46;
loc_4299C9:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x41F);
	if (jle())
		goto loc_4299E3;
	cmp(esi, (int32_t)0x55D);
	if (jl())
		goto loc_429E5C;
loc_4299E3:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x41E);
	if (jle())
		goto loc_4299FD;
	cmp(ebp, (int32_t)0x55E);
	if (jl())
		goto loc_429E72;
loc_4299FD:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x41D);
	if (jle())
		goto loc_429A17;
	cmp(edx, (int32_t)0x55F);
	if (jl())
		goto loc_429E88;
loc_429A17:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x41C);
	if (jle())
		goto loc_429A31;
	cmp(ebx, (int32_t)0x560);
	if (jl())
		goto loc_429E9E;
loc_429A31:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x41B);
	if (jle())
		goto loc_429A4B;
	cmp(edi, (int32_t)0x561);
	if (jl())
		goto loc_429EB4;
loc_429A4B:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x41A);
	if (jle())
		goto loc_429A62;
	cmp(eax, (int32_t)0x562);
	if (jl())
		goto loc_429EC7;
loc_429A62:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x419);
	if (jle())
		goto loc_429A7C;
	cmp(ecx, (int32_t)0x563);
	if (jl())
		goto loc_429EDA;
loc_429A7C:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x418);
	if (jle())
		goto loc_429A96;
	cmp(esi, (int32_t)0x563);
	if (jl())
		goto loc_429EED;
loc_429A96:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x417);
	if (jle())
		goto loc_429AB0;
	cmp(ebp, (int32_t)0x564);
	if (jl())
		goto loc_429F00;
loc_429AB0:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x416);
	if (jle())
		goto loc_429ACA;
	cmp(edx, (int32_t)0x565);
	if (jl())
		goto loc_429F13;
loc_429ACA:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x415);
	if (jle())
		goto loc_429AE4;
	cmp(ebx, (int32_t)0x566);
	if (jl())
		goto loc_429F26;
loc_429AE4:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x414);
	if (jle())
		goto loc_429AFE;
	cmp(edi, (int32_t)0x567);
	if (jl())
		goto loc_429F39;
loc_429AFE:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x413);
	if (jle())
		goto loc_429B15;
	cmp(eax, (int32_t)0x568);
	if (jl())
		goto loc_429F4C;
loc_429B15:
	ecx = to32i(dword_5117C4); //mov
	cmp(ecx, (int32_t)0x412);
	if (jle())
		goto loc_429B2F;
	cmp(ecx, (int32_t)0x569);
	if (jl())
		goto loc_429F5F;
loc_429B2F:
	esi = to32i(dword_5117C4); //mov
	cmp(esi, (int32_t)0x411);
	if (jle())
		goto loc_429B49;
	cmp(esi, (int32_t)0x56A);
	if (jl())
		goto loc_429F72;
loc_429B49:
	ebp = to32i(dword_5117C4); //mov
	cmp(ebp, (int32_t)0x410);
	if (jle())
		goto loc_429B63;
	cmp(ebp, (int32_t)0x56B);
	if (jl())
		goto loc_429F85;
loc_429B63:
	edx = to32i(dword_5117C4); //mov
	cmp(edx, (int32_t)0x40F);
	if (jle())
		goto loc_429B7D;
	cmp(edx, (int32_t)0x56C);
	if (jl())
		goto loc_429F98;
loc_429B7D:
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x40E);
	if (jle())
		goto loc_429B97;
	cmp(ebx, (int32_t)0x56D);
	if (jl())
		goto loc_429FAB;
loc_429B97:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x40D);
	if (jle())
		goto loc_429FBE;
	cmp(edi, (int32_t)0x56E);
	if (jge())
		goto loc_429FBE;
	eax = 0xFF838283; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429BC8:
	edx = 0xE; //mov
	eax = 0xFF828490; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429BDE:
	edx = 0xD; //mov
	eax = 0xFF82848F; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429BF4:
	edx = 0xC; //mov
	eax = 0xFF82848E; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C0A:
	edx = 0xB; //mov
	eax = 0xFF82848D; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C20:
	edx = 0xA; //mov
	eax = 0xFF82848C; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C36:
	edx = 9; //mov
	eax = 0xFF82848B; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C4C:
	edx = 8; //mov
	eax = 0xFF82848A; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C62:
	edx = 7; //mov
	eax = 0xFF828489; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C78:
	edx = 6; //mov
	eax = 0xFF828488; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429C8E:
	edx = 4; //mov
	eax = 0xFF828487; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429CA4:
	edx = 3; //mov
	eax = 0xFF828486; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429CBA:
	edx = 2; //mov
	eax = 0xFF828485; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429CD0:
	edx = 1; //mov
	eax = 0xFF828484; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429CE6:
	edx = 0xA; //mov
	eax = 0xFFA82906; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429CFC:
	edx = 0xA; //mov
	eax = 0xFF982506; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D12:
	edx = 0xA; //mov
	eax = 0xFF882106; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D28:
	edx = 0xA; //mov
	eax = 0xFF781D06; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D3E:
	edx = 0xA; //mov
	eax = 0xFF681906; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D54:
	edx = 0xA; //mov
	eax = 0xFF581506; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D6A:
	edx = 0xA; //mov
	eax = 0xFF481106; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D80:
	edx = 0xA; //mov
	eax = 0xFF380D06; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429D96:
	edx = 0xA; //mov
	eax = 0xFF280906; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429DAC:
	edx = 0xA; //mov
	eax = 0xFF180506; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429DC2:
	edx = 0xB; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429DD8:
	edx = 0xA; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429DEE:
	edx = 9; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E04:
	edx = 8; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E1A:
	edx = 7; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E30:
	edx = 6; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E46:
	edx = 5; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E5C:
	edx = 4; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E72:
	edx = 3; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E88:
	edx = 2; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429E9E:
	edx = 1; //mov
	eax = 0xFF030303; //mov
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429EB4:
	eax = 0xFF030303; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429EC7:
	eax = 0xFF070707; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429EDA:
	eax = 0xFF131313; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429EED:
	eax = 0xFF1F1F1F; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F00:
	eax = 0xFF2B2B2B; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F13:
	eax = 0xFF373737; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F26:
	eax = 0xFF434343; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F39:
	eax = 0xFF4F4F4F; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F4C:
	eax = 0xFF5B5B5B; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F5F:
	eax = 0xFF676767; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F72:
	eax = 0xFF737373; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F85:
	eax = 0xFF7F7F7F; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429F98:
	eax = 0xFF818081; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429FAB:
	eax = 0xFF828182; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429FBE:
	eax = 0xFF848284; //mov
	xor_(edx, edx);
	esp -= 4; _sub_42CF00(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_429FD1:
	test(ecx, ecx);
	if (jnz())
		goto loc_4291BA;
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_429FF0()
{
	push32(ecx);
	push32(edx);
	push32(0x1E0);
	push32(0x280);
	push32(0);
	push32(0);
	esp -= 4; _sub_497714(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42A010()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_44B660(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_42A02B;
	cmp(to32i(edx), (int32_t)0);
	if (jz())
		goto loc_42A0D4;
loc_42A02B:
	ecx = to32i(edx+4); //mov
	eax = to32i(edx); //mov
	ebx = to32i(edx+0x68); //mov
	shl(ecx, (int32_t)5);
	shl(eax, (int32_t)3);
	add(ecx, (int32_t)(intptr_t)word_4EC588);
	esi = to32i(edx+0x6C); //mov
	add(eax, ecx);
	or_(ebx, esi);
	if (jz())
		goto loc_42A141;
	ecx = to32i(edx+0x68); //mov
	ebx = to16i(eax); //movsx
	add(ebx, ecx);
	ecx = to32i(eax); //mov
	sar(ecx, (int32_t)0x10);
	add(ecx, esi);
	to32i(dword_4EC664) = ecx; //mov
	ecx = to32i(eax+2); //mov
	sar(ecx, (int32_t)0x10);
	to32i(dword_4EC658) = ebx; //mov
	edx = (int32_t)(intptr_t)(ebx+ecx); //lea
loc_42A070:
	to32i(dword_4EC65C) = edx; //mov
	edx = to32i(eax+4); //mov
	eax = to32i(dword_4EC664); //mov
	sar(edx, (int32_t)0x10);
	add(eax, edx);
	to32i(dword_4EC668) = eax; //mov
	eax = to32i(dword_4EC668); //mov
	to32i(dword_4EC650) = eax; //mov
loc_42A092:
	eax = to32i(dword_4EC63C); //mov
	add(eax, to32i(dword_4EC668));
	ebp = to32i(dword_4EC65C); //mov
	push32(eax);
	eax = to32i(dword_4EC638); //mov
	add(eax, ebp);
	edx = to32i(dword_4EC664); //mov
	push32(eax);
	eax = to32i(dword_4EC63C); //mov
	add(eax, edx);
	ecx = to32i(dword_4EC658); //mov
	push32(eax);
	eax = to32i(dword_4EC638); //mov
	add(eax, ecx);
	push32(eax);
	esp -= 4; _sub_497714(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A0D4:
	push32(edi);
	esp -= 4; _sub_477700(); esp += 4; //call
	bl = to8i(byte_4EC66C); //mov
	edi = to16i(eax); //movsx
	cl = bl; //mov
	edx = edi; //mov
	esi = to32i(eax); //mov
	sar(edx, cl);
	sar(esi, (int32_t)0x10);
	to32i(dword_4EC658) = edx; //mov
	dl = to8i(byte_4EC66D); //mov
	ebp = esi; //mov
	cl = dl; //mov
	sar(ebp, cl);
	ecx = to32i(eax+2); //mov
	eax = to32i(eax+4); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	add(edi, ecx);
	cl = bl; //mov
	add(eax, esi);
	sar(edi, cl);
	cl = dl; //mov
	to32i(dword_4EC664) = ebp; //mov
	sar(eax, cl);
	to32i(dword_4EC65C) = edi; //mov
	to32i(dword_4EC668) = eax; //mov
	esp -= 4; _sub_4776C0(); esp += 4; //call
	cl = to8i(byte_4EC66D); //mov
	sar(eax, cl);
	to32i(dword_4EC650) = eax; //mov
	pop32(edi);
	goto loc_42A092;
loc_42A141:
	edx = to16i(eax); //movsx
	to32i(dword_4EC658) = edx; //mov
	edx = to32i(eax); //mov
	ecx = to32i(eax+2); //mov
	sar(edx, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	to32i(dword_4EC664) = edx; //mov
	edx = to32i(dword_4EC658); //mov
	add(edx, ecx);
	goto loc_42A070;
}
Fn(void) Game::_sub_42A170()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_42A1E7;
	push32(0xF0);
	push32(0x280);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0xF0);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_42A210(); esp += 4; //call
	push32(0);
	push32(0);
loc_42A19C:
	eax = 1; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_42A210(); esp += 4; //call
	push32(0x1E0);
	push32(0x280);
	eax = 2; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_42A210(); esp += 4; //call
	push32(0x87);
	push32(0x6C);
	eax = 3; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_42A210(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A1E7:
	push32(0x1E0);
	push32(0x280);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_42A210(); esp += 4; //call
	push32(0x46);
	push32(0x96);
	goto loc_42A19C;
}
Fn(void) Game::_sub_42A210()
{
	to16i(word_4EC588+eax*8) = dx; //mov
	to16i(word_4EC58A+eax*8) = bx; //mov
	to16i(word_4EC5A8+eax*8) = cx; //mov
	edx = to32i(esp+8); //mov
	to16i(word_4EC58C+eax*8) = dx; //mov
	edx = to32i(esp+0xC); //mov
	to16i(word_4EC58E+eax*8) = dx; //mov
	edx = to32i(esp+4); //mov
	to16i(word_4EC5AA+eax*8) = dx; //mov
	edx = to32i(esp+8); //mov
	to16i(word_4EC5AC+eax*8) = dx; //mov
	edx = to32i(esp+0xC); //mov
	to16i(word_4EC5AE+eax*8) = dx; //mov
	esp += 0xC; return;
}
Fn(void) Game::_sub_42A270()
{
	push32(esi);
	shl(eax, (int32_t)5);
	add(eax, (int32_t)(intptr_t)word_4EC588);
	esi = to16i(eax); //movsx
	to32i(edx) = esi; //mov
	edx = to32i(eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(ebx) = edx; //mov
	edx = to32i(eax+2); //mov
	sar(edx, (int32_t)0x10);
	to32i(ecx) = edx; //mov
	eax = to32i(eax+4); //mov
	edx = to32i(esp+8); //mov
	sar(eax, (int32_t)0x10);
	to32i(edx) = eax; //mov
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_42A2A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	eax = to32i(dword_4EC640); //mov
	dl = (int32_t)(intptr_t)byte_4D524C[eax*2]; //mov
	to8i(byte_4EC66C) = dl; //mov
	al = (int32_t)(intptr_t)byte_4D524D[eax*2]; //mov
	edx = to32i(dword_512208); //mov
	to8i(byte_4EC66D) = al; //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_42A315;
	eax = to32i(dword_4EC644); //mov
	cl = to8i(byte_4EC66C); //mov
	edx = to32i(dword_4D5234+eax*8); //mov
	sar(edx, cl);
	to16i(word_4EC5AC) = dx; //mov
	dl = to8i(byte_4EC66D); //mov
	inc(dl);
	eax = to32i(dword_4D5238+eax*8); //mov
	cl = dl; //mov
	to8i(byte_4EC66D) = dl; //mov
	sar(eax, cl);
	xor_(edx, edx);
	to16i(word_4EC5AE) = ax; //mov
	to16i(word_4EC5A8) = dx; //mov
	to16i(word_4EC5AA) = ax; //mov
loc_42A315:
	eax = to32i(dword_4EC644); //mov
	cl = to8i(byte_4EC66C); //mov
	xor_(ebx, ebx);
	edx = to32i(dword_4D5234+eax*8); //mov
	eax = to32i(dword_4D5238+eax*8); //mov
	sar(edx, cl);
	cl = to8i(byte_4EC66D); //mov
	to16i(word_4EC58C) = dx; //mov
	bl = cl; //mov
	xor_(edx, edx);
	sar(eax, cl);
	dl = to8i(byte_4EC66C); //mov
	to16i(word_4EC58E) = ax; //mov
	eax = to32i(dword_4EC644); //mov
	esp -= 4; _sub_434DA0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42A360()
{
	eax = 1; //mov
}
Fn(void) Game::_sub_42A370()
{
	eax = to32i(dword_4EC644); //mov
}
Fn(void) Game::_sub_42A380()
{
	_sub_438110(); return; //jmp
}
Fn(void) Game::_sub_42A390()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_42A3A0()
{
	cmp(to32i(dword_512248), (int32_t)0);
	if (jnz())
		goto loc_42A3B4;
	eax = 1; //mov
	to32i(dword_512248) = eax; //mov
	return;
loc_42A3B4:
	xor_(eax, eax);
	to32i(dword_512248) = eax; //mov
}
Fn(void) Game::_sub_42A3C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	push32(0);
	push32(2);
	esp -= 4; _sub_497738(); esp += 4; //call
	esp -= 4; _sub_42A3F0(); esp += 4; //call
	test(ebx, ebx);
	if (jz())
		goto loc_42A3EC;
loc_42A3D8:
	edx = to32i(ebx+4); //mov
	eax = ebx; //mov
	call(to32i(dword_4EC500+edx*4));
	ebx = to32i(ebx); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_42A3D8;
loc_42A3EC:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42A3F0()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	edx = (int32_t)(intptr_t)sub_42B6B0; //mov
	ebx = (int32_t)(intptr_t)sub_42B970; //mov
	esi = (int32_t)(intptr_t)sub_42BBA0; //mov
	to32i(dword_4EC524) = edx; //mov
	to32i(dword_4EC528) = ebx; //mov
	to32i(dword_4EC52C) = esi; //mov
	to32i(dword_4EC520) = edx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_nullsub_9()
{
	return;
}
Fn(void) Game::_sub_42A5B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	edx = to32i(dword_4EC660); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_42A5E6;
	xor_(ebx, ebx);
loc_42A5C8:
	edx = 0xC; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_42A60B;
loc_42A5D8:
	edi = to32i(dword_4EC660); //mov
	inc(ecx);
	add(ebx, (int32_t)4);
	cmp(ecx, edi);
	if (jl())
		goto loc_42A5C8;
loc_42A5E6:
	cmp(to32i(esi), (int32_t)0);
	if (jnz())
		goto loc_42A631;
	ecx = 0xA0000; //mov
loc_42A5F0:
	edx = 0xC; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_42A638;
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A60B:
	eax = to32i(esp); //mov
	to32i(eax+4) = 0x17; //mov
	edx = to32i(esp); //mov
	al = (int32_t)(intptr_t)byte_4EC5E8[ecx]; //mov
	to8i(edx+8) = al; //mov
	edx = to32i(esp); //mov
	eax = to32i(dword_4EC5F8+ebx); //mov
	esp -= 4; _sub_471390(); esp += 4; //call
	goto loc_42A5D8;
loc_42A631:
	ecx = 0x40000; //mov
	goto loc_42A5F0;
loc_42A638:
	eax = to32i(esp+4); //mov
	to32i(eax+4) = 0x19; //mov
	eax = to32i(esp+4); //mov
	to8i(eax+8) = 1; //mov
	eax = ecx; //mov
	edx = to32i(esp+4); //mov
	esp -= 4; _sub_4713C0(); esp += 4; //call
	esp -= 4; _sub_471390(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_nullsub_10()
{
	return;
}
Fn(void) Game::_sub_42A680()
{
	push32(ecx);
	push32(edx);
	edx = to32i(eax+0xC); //mov
	cmp(edx, (int32_t)8);
	if (jb())
		goto loc_42A6B4;
	if (ja())
		goto loc_42A69E;
	ecx = to32i(eax+8); //mov
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_42A6B0;
	push32(ecx);
loc_42A695:
	eax = grChromakeyMode(to32i(esp + 0)); esp += 4;
	pop32(edx);
	pop32(ecx);
	return;
loc_42A69E:
	cmp(edx, (int32_t)0xB);
	if (jnz())
		goto loc_42A6B4;
	edx = to32i(eax+8); //mov
	push32(edx);
	eax = grChromakeyValue(to32i(esp + 0)); esp += 4;
	pop32(edx);
	pop32(ecx);
	return;
loc_42A6B0:
	push32(0);
	goto loc_42A695;
loc_42A6B4:
	push32(esi);
	push32(ebx);
	ebx = to32i(eax+0xC); //mov
	push32(ebx);
	esi = to32i(eax+8); //mov
	push32(esi);
	esp -= 4; _sub_497738(); esp += 4; //call
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42A6D0()
{
	al = to8i(eax+8); //mov
	and_(eax, (int32_t)0xFF);
	shl(eax, (int32_t)0xA);
	add(eax, (int32_t)(intptr_t)dword_545944);
	cmp(eax, to32i(dword_4D4E8C));
	if (jnz())
		goto loc_42CD29;
	return;
loc_42CD29:
	push32(edx);
	push32(ecx);
	push32(eax);
	push32(0);
	push32(0);
	to32i(dword_4D4E8C) = eax; //mov
	esp -= 4; _sub_49755C(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_42A6F0()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	edx = (int32_t)(intptr_t)sub_42B6B0; //mov
	ebx = (int32_t)(intptr_t)sub_42B970; //mov
	esi = (int32_t)(intptr_t)sub_42BBA0; //mov
	to32i(dword_4EC524) = edx; //mov
	to32i(dword_4EC528) = ebx; //mov
	to32i(dword_4EC52C) = esi; //mov
	to32i(dword_4EC520) = edx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_42A700()
{
	al = to8i(eax+8); //mov
	and_(eax, (int32_t)0xFF);
	to32i(dword_4EC654) = eax; //mov
}
Fn(void) Game::_sub_42A710()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to16i(eax+8), (int16_t)1);
	if (jz())
		goto loc_42A75B;
	cmp(to16i(eax+0xA), (int16_t)0);
	if (jl())
		goto loc_42A787;
	edx = to32i(eax+0xE); //mov
	ecx = to32i(dword_4EC63C); //mov
	sar(edx, (int32_t)0x10);
	add(edx, ecx);
	push32(edx);
	edx = to32i(eax+0xC); //mov
	ebx = to32i(dword_4EC638); //mov
	sar(edx, (int32_t)0x10);
	add(edx, ebx);
	push32(edx);
	edx = to32i(eax+0xA); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	add(edx, ecx);
	sar(eax, (int32_t)0x10);
	push32(edx);
	add(eax, ebx);
	push32(eax);
	esp -= 4; _sub_497714(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A75B:
	edx = to32i(eax+0xE); //mov
	sar(edx, (int32_t)0x10);
	push32(edx);
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x10);
	push32(edx);
	edx = to32i(eax+0xA); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+8); //mov
	push32(edx);
	sar(eax, (int32_t)0x10);
	push32(eax);
	esp -= 4; _sub_497714(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A787:
	eax = to32i(dword_4EC63C); //mov
	add(eax, to32i(dword_4EC668));
	edx = to32i(dword_4EC65C); //mov
	push32(eax);
	eax = to32i(dword_4EC638); //mov
	add(eax, edx);
	ecx = to32i(dword_4EC664); //mov
	push32(eax);
	eax = to32i(dword_4EC63C); //mov
	add(eax, ecx);
	ebx = to32i(dword_4EC658); //mov
	push32(eax);
	eax = to32i(dword_4EC638); //mov
	add(eax, ebx);
	push32(eax);
	esp -= 4; _sub_497714(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42A7D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = to32i(eax+6); //mov
	ecx = to32i(dword_4EC638); //mov
	sar(edx, (int32_t)0x10);
	add(edx, ecx);
	to32i(esp) = edx; //mov
	edx = to32i(eax+8); //mov
	ebx = to32i(dword_4EC63C); //mov
	sar(edx, (int32_t)0x10);
	add(edx, ebx);
	to32i(esp+4) = edx; //mov
	xor_(edx, edx);
	dl = to8i(eax+0x10); //mov
	ecx = edx; //mov
	xor_(edx, edx);
	dl = to8i(eax+0x11); //mov
	shl(ecx, (int32_t)0x18);
	shl(edx, (int32_t)0x10);
	or_(ecx, edx);
	xor_(edx, edx);
	esi = to32i(dword_4EC638); //mov
	dl = to8i(eax+0x12); //mov
	ebp = to32i(dword_4D4EB0); //mov
	shl(edx, (int32_t)8);
	fild(to32i(esp));
	or_(ecx, edx);
	xor_(edx, edx);
	fstp(to32f(flt_4D51F4));
	dl = to8i(eax+0x13); //mov
	fild(to32i(esp+4));
	or_(ecx, edx);
	fstp(to32f(flt_4D51F8));
	to32i(dword_4D5204) = ecx; //mov
	edx = to32i(eax+0xA); //mov
	to32i(dword_4D5224) = ecx; //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(eax+0xC); //mov
	add(edx, esi);
	sar(eax, (int32_t)0x10);
	to32i(esp+4) = edx; //mov
	add(eax, ebx);
	fild(to32i(esp+4));
	to32i(esp+4) = eax; //mov
	fstp(to32f(flt_4D5214));
	fild(to32i(esp+4));
	fstp(to32f(flt_4D5218));
	test(ebp, ebp);
	if (jnz())
		goto loc_42A894;
loc_42A87B:
	push32(flt_4D5214);
	push32(flt_4D51F4);
	esp -= 4; _sub_498EE0(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A894:
	xor_(eax, eax);
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42A87B;
}
Fn(void) Game::_sub_42A8B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edx = eax; //mov
	eax = to32i(eax+8); //mov
	ecx = to32i(dword_4EC638); //mov
	sar(eax, (int32_t)0x10);
	add(eax, ecx);
	to32i(esp) = eax; //mov
	eax = to32i(edx+0xA); //mov
	ebx = to32i(dword_4EC63C); //mov
	sar(eax, (int32_t)0x10);
	fild(to32i(esp));
	add(eax, ebx);
	fstp(to32f(flt_4D51B4));
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	fild(to32i(esp));
	al = to8i(edx+8); //mov
	fstp(to32f(flt_4D51B8));
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	esi = to32i(dword_4EC638); //mov
	edi = to32i(dword_4EC63C); //mov
	ebp = to32i(dword_4D4EB0); //mov
	to32i(dword_4D51C4) = eax; //mov
	ecx = to32i(edx+0xC); //mov
	to32i(dword_4D51E4) = eax; //mov
	sar(ecx, (int32_t)0x10);
	edx = to32i(edx+0xE); //mov
	add(ecx, esi);
	sar(edx, (int32_t)0x10);
	to32i(esp) = ecx; //mov
	add(edx, edi);
	fild(to32i(esp));
	to32i(esp) = edx; //mov
	fstp(to32f(flt_4D51D4));
	fild(to32i(esp));
	fstp(to32f(flt_4D51D8));
	test(ebp, ebp);
	if (jnz())
		goto loc_42A95B;
loc_42A941:
	push32(flt_4D51D4);
	push32(flt_4D51B4);
	esp -= 4; _sub_498EE0(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42A95B:
	xor_(eax, eax);
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42A941;
}
Fn(void) Game::_nullsub_11()
{
	return;
}
Fn(void) Game::_sub_42A980()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	xor_(ecx, ecx);
	xor_(edx, edx);
	cl = to8i(eax+0x28); //mov
	dl = to8i(eax+0x29); //mov
	shl(ecx, (int32_t)0x18);
	shl(edx, (int32_t)0x10);
	or_(ecx, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x2A); //mov
	shl(edx, (int32_t)8);
	or_(ecx, edx);
	xor_(edx, edx);
	ebx = to32i(eax+0xC); //mov
	dl = to8i(eax+0x2B); //mov
	esi = to32i(eax+0x10); //mov
	or_(ecx, edx);
	edx = to32i(dword_4EC638); //mov
	to32i(dword_4D5144) = ecx; //mov
	ecx = to32i(eax+8); //mov
	edi = to32i(eax+0x14); //mov
	add(edx, ecx);
	ebp = to32i(eax+0x18); //mov
	to32i(esp) = edx; //mov
	ecx = to32i(eax+0x1C); //mov
	edx = to32i(dword_4EC63C); //mov
	fild(to32i(esp));
	add(edx, ebx);
	fstp(to32f(flt_4D5134));
	to32i(esp) = edx; //mov
	ebx = to32i(eax+0x20); //mov
	edx = to32i(dword_4EC638); //mov
	fild(to32i(esp));
	add(edx, esi);
	fstp(to32f(flt_4D5138));
	to32i(esp) = edx; //mov
	esi = to32i(eax+0x24); //mov
	fild(to32i(esp));
	edx = to32i(dword_4EC63C); //mov
	eax = to32i(dword_4D5144); //mov
	fstp(to32f(flt_4D5154));
	to32i(dword_4D5164) = eax; //mov
	to32i(dword_4D5184) = eax; //mov
	add(edx, edi);
	to32i(dword_4D51A4) = eax; //mov
	to32i(esp) = edx; //mov
	edx = to32i(dword_4EC638); //mov
	edi = to32i(dword_4D4EB0); //mov
	add(edx, ebp);
	fild(to32i(esp));
	to32i(esp) = edx; //mov
	edx = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D5158));
	add(edx, ecx);
	fild(to32i(esp));
	to32i(esp) = edx; //mov
	edx = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D5174));
	add(edx, ebx);
	fild(to32i(esp));
	to32i(esp) = edx; //mov
	edx = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D5178));
	add(edx, esi);
	fild(to32i(esp));
	to32i(esp) = edx; //mov
	fstp(to32f(flt_4D5194));
	fild(to32i(esp));
	fstp(to32f(flt_4D5198));
	test(edi, edi);
	if (jnz())
		goto loc_42AAAC;
loc_42AA88:
	push32(flt_4D5194);
	push32(flt_4D5174);
	push32(flt_4D5154);
	push32(flt_4D5134);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42AAAC:
	xor_(ebp, ebp);
	push32(ebp);
	push32(1);
	to32i(dword_4D4EB0) = ebp; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42AA88;
}
Fn(void) Game::_sub_42AAC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edx = eax; //mov
	xor_(eax, eax);
	al = to8i(edx+0x28); //mov
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	ecx = to32i(dword_4EC638); //mov
	to32i(dword_4D50C4) = eax; //mov
	to32i(dword_4D50E4) = eax; //mov
	to32i(dword_4D5104) = eax; //mov
	to32i(dword_4D5124) = eax; //mov
	ebx = to32i(edx+8); //mov
	esi = to32i(edx+0xC); //mov
	edi = to32i(edx+0x10); //mov
	ebp = to32i(edx+0x14); //mov
	add(ecx, ebx);
	eax = to32i(dword_4D4EB0); //mov
	to32i(esp) = ecx; //mov
	ebx = to32i(edx+0x18); //mov
	ecx = to32i(dword_4EC63C); //mov
	fild(to32i(esp));
	add(ecx, esi);
	fstp(to32f(flt_4D50B4));
	to32i(esp) = ecx; //mov
	esi = to32i(edx+0x1C); //mov
	ecx = to32i(dword_4EC638); //mov
	fild(to32i(esp));
	add(ecx, edi);
	fstp(to32f(flt_4D50B8));
	to32i(esp) = ecx; //mov
	edi = to32i(edx+0x20); //mov
	ecx = to32i(dword_4EC63C); //mov
	fild(to32i(esp));
	add(ecx, ebp);
	fstp(to32f(flt_4D50D4));
	to32i(esp) = ecx; //mov
	ecx = to32i(dword_4EC638); //mov
	ebp = to32i(edx+0x24); //mov
	add(ecx, ebx);
	fild(to32i(esp));
	to32i(esp) = ecx; //mov
	ecx = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D50D8));
	add(ecx, esi);
	fild(to32i(esp));
	to32i(esp) = ecx; //mov
	ecx = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D50F4));
	add(ecx, edi);
	fild(to32i(esp));
	to32i(esp) = ecx; //mov
	ecx = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D50F8));
	add(ecx, ebp);
	fild(to32i(esp));
	to32i(esp) = ecx; //mov
	fstp(to32f(flt_4D5114));
	fild(to32i(esp));
	fstp(to32f(flt_4D5118));
	test(eax, eax);
	if (jnz())
		goto loc_42ABCE;
loc_42ABAA:
	push32(flt_4D5114);
	push32(flt_4D50F4);
	push32(flt_4D50D4);
	push32(flt_4D50B4);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42ABCE:
	xor_(edx, edx);
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42ABAA;
}
Fn(void) Game::_sub_42ABF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x10);
	ecx = to32i(dword_4EC638); //mov
	edx = to32i(eax+8); //mov
	ebx = to32i(eax+0xC); //mov
	add(ecx, edx);
	edx = to32i(dword_4EC63C); //mov
	add(edx, ebx);
	esi = to32i(eax+0x14); //mov
	to32i(esp+0xC) = edx; //mov
	ebx = to32i(eax+0x10); //mov
	add(esi, edx);
	edx = to32i(eax+0x20); //mov
	to32i(esp+8) = ecx; //mov
	add(ebx, ecx);
	ecx = to32i(edx); //mov
	fild(to16i(ecx+4));
	fld1();
	fdivrp_st(1, 0);
	fild(to32i(eax+0x18));
	fild(to32i(eax+0x1C));
	fild(to32i(eax+0x14));
	fild(to32i(eax+0x10));
	faddp_st(3, 0);
	faddp_st(1, 0);
	fild(to16i(ecx+6));
	fld1();
	fxch_st(3);
	fmul_st(0, 4);
	fxch_st(3);
	fdivrp_st(1, 0);
	fxch_st(1);
	fmul_st(0, 1);
	fild(to32i(eax+0x1C));
	fld(to64f(dbl_4C9F74));
	fild(to32i(eax+0x18));
	fadd_st(0, 1);
	fxch_st(2);
	faddp_st(1, 0);
	fxch_st(5);
	fmulp_st(1, 0);
	fxch_st(2);
	fmulp_st(4, 0);
	fild(to32i(esp+8));
	fst(to32f(flt_4D5034));
	fstp(to32f(flt_4D5094));
	fild(to32i(esp+0xC));
	fstp(to32f(flt_4D5038));
	to32i(esp+0xC) = esi; //mov
	ecx = to32i(flt_4D5038); //mov
	to32i(dword_4D5058) = ecx; //mov
	fild(to32i(esp+0xC));
	esi = to32i(dword_4D4EB0); //mov
	to32i(esp+0xC) = ebx; //mov
	fstp(to32f(flt_4D5078));
	eax = to32i(eax+0x24); //mov
	fild(to32i(esp+0xC));
	fstp(to32f(flt_4D5054));
	ecx = to32i(flt_4D5078); //mov
	to32i(dword_4D5098) = ecx; //mov
	to32i(dword_4D50A4) = eax; //mov
	to32i(dword_4D5084) = eax; //mov
	to32i(dword_4D5064) = eax; //mov
	to32i(dword_4D5044) = eax; //mov
	eax = to32i(flt_4D5054); //mov
	to32i(dword_4D5074) = eax; //mov
	eax = to32i(edx+0x14); //mov
	fxch_st(2);
	fstp(to32f(flt_4D506C));
	fxch_st(1);
	fstp(to32f(flt_4D5090));
	fld(to32f(flt_4D506C));
	fld(to32f(flt_4D5090));
	fxch_st(2);
	fstp(to32f(flt_4D504C));
	fxch_st(2);
	fst(to32f(flt_4D5050));
	fld(to32f(flt_4D504C));
	fxch_st(3);
	fstp(to32f(flt_4D508C));
	fxch_st(1);
	fstp(to32f(flt_4D50B0));
	fstp(to32f(flt_4D5070));
	fstp(to32f(flt_4D50AC));
	cmp(eax, esi);
	if (jnz())
		goto loc_42AD52;
loc_42AD30:
	push32(flt_4D5094);
	push32(dword_4D5074);
	push32(flt_4D5054);
	push32(flt_4D5034);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42AD52:
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42AD30;
}
Fn(void) Game::_sub_42AD80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x10);
	ecx = to32i(dword_4EC638); //mov
	edx = to32i(eax+8); //mov
	ebx = to32i(eax+0xC); //mov
	add(ecx, edx);
	edx = to32i(dword_4EC63C); //mov
	esi = to32i(eax+0x14); //mov
	add(edx, ebx);
	ebx = to32i(eax+0x10); //mov
	to32i(esp+8) = ecx; //mov
	add(ebx, ecx);
	ecx = to32i(eax+0x20); //mov
	to32i(esp+0xC) = edx; //mov
	add(esi, edx);
	edx = to32i(ecx); //mov
	fild(to16i(edx+4));
	fld1();
	fdivrp_st(1, 0);
	fild(to32i(eax+0x18));
	fild(to32i(eax+0x1C));
	fild(to32i(eax+0x14));
	fild(to32i(eax+0x10));
	faddp_st(3, 0);
	faddp_st(1, 0);
	fild(to16i(edx+6));
	fld1();
	fxch_st(3);
	fmul_st(0, 4);
	fxch_st(3);
	fdivrp_st(1, 0);
	fxch_st(1);
	fmul_st(0, 1);
	fild(to32i(eax+0x1C));
	fld(to64f(dbl_4C9F6C));
	fild(to32i(eax+0x18));
	fadd_st(0, 1);
	fxch_st(2);
	faddp_st(1, 0);
	fxch_st(5);
	fmulp_st(1, 0);
	fxch_st(2);
	fmulp_st(4, 0);
	fild(to32i(esp+8));
	fst(to32f(flt_4D4FB4));
	fstp(to32f(flt_4D5014));
	fild(to32i(esp+0xC));
	fstp(to32f(flt_4D4FB8));
	to32i(esp+0xC) = esi; //mov
	eax = to32i(flt_4D4FB8); //mov
	to32i(dword_4D4FD8) = eax; //mov
	fild(to32i(esp+0xC));
	esi = to32i(dword_4D4EB0); //mov
	to32i(esp+0xC) = ebx; //mov
	fstp(to32f(flt_4D4FF8));
	fild(to32i(esp+0xC));
	fstp(to32f(flt_4D4FD4));
	eax = to32i(flt_4D4FF8); //mov
	to32i(dword_4D5018) = eax; //mov
	eax = to32i(ecx+0x14); //mov
	edx = to32i(flt_4D4FD4); //mov
	to32i(dword_4D4FF4) = edx; //mov
	fxch_st(2);
	fstp(to32f(flt_4D4FEC));
	fxch_st(1);
	fstp(to32f(flt_4D5010));
	fld(to32f(flt_4D4FEC));
	fld(to32f(flt_4D5010));
	fxch_st(2);
	fstp(to32f(flt_4D4FCC));
	fxch_st(2);
	fst(to32f(flt_4D4FD0));
	fld(to32f(flt_4D4FCC));
	fxch_st(3);
	fstp(to32f(flt_4D500C));
	fxch_st(1);
	fstp(to32f(flt_4D5030));
	fstp(to32f(flt_4D4FF0));
	fstp(to32f(flt_4D502C));
	cmp(eax, esi);
	if (jnz())
		goto loc_42AEC9;
loc_42AEA7:
	push32(flt_4D5014);
	push32(dword_4D4FF4);
	push32(flt_4D4FD4);
	push32(flt_4D4FB4);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42AEC9:
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42AEA7;
}
Fn(void) Game::_sub_42AF00()
{
	static const void *const off_42AEE0[] = {
		&&loc_42B099,
		&&loc_42B122,
		&&loc_42B12D,
		&&loc_42B122,
	};
	static const void *const off_42AEF0[] = {
		&&loc_42B0D6,
		&&loc_42B13A,
		&&loc_42B150,
		&&loc_42B13A,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ecx = to32i(eax+0xC); //mov
	edx = eax; //mov
	add(ecx, (int32_t)0x10);
	ebp = to32i(eax+0x10); //mov
	to32i(esp+0x24) = ecx; //mov
	ecx = to32i(eax+0x14); //mov
	bx = to16i(eax+0xA); //mov
	add(ecx, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	to32i(esp+0x28) = ecx; //mov
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_42AF71;
	cmp(to32i(dword_4D4E88), (int32_t)0);
	if (jz())
		goto loc_42B0EC;
	eax = to32i(esp+0x28); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+0x24); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+0x28); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (ja())
		goto loc_42B0E2;
loc_42AF71:
	esi = to32i(esp+0x24); //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esi+0x18); //lea
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+8); //lea
	esi = (int32_t)(intptr_t)(ebp+0x18); //lea
	movsd();
	movsd();
	esi = to32i(esp+0x28); //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esi = (int32_t)(intptr_t)(esi+0x18); //lea
	eax = to32i(esp+0x24); //mov
	movsd();
	movsd();
	eax = to32i(eax+0x10); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp+0x28); //mov
	eax = to32i(eax+0x10); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	ecx = to32i(esp+0x24); //mov
	or_(eax, (int32_t)0xFF000000);
	to32i(ecx+0x10) = eax; //mov
	or_(to8i(ebp+0x13), (int8_t)0xFF);
	eax = to32i(esp+0x28); //mov
	or_(to8i(eax+0x13), (int8_t)0xFF);
	eax = to32i(edx+0x1C); //mov
	edi = ecx; //mov
	esi = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x28); //mov
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	eax = to32i(edx+0x1C); //mov
	ebx = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, ebx);
	if (jz())
		goto loc_42B020;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B020:
	ebx = to32i(esp+0x28); //mov
	eax = to32i(esp+0x24); //mov
	edi = to32i(esp+0x24); //mov
	edx = ebp; //mov
	esi = esp; //mov
	esp -= 4; _sub_432670(); esp += 4; //call
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x28); //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x24); //mov
	movsd();
	movsd();
	to32i(edx+0x10) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x28); //mov
	to32i(ebp+0x10) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(edx+0x10) = eax; //mov
	eax = to32i(dword_500F5C); //mov
	edi = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, edi);
	if (jz())
		goto loc_42B08E;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B08E:
	eax = 0xC; //mov
	goto *off_42AEE0[eax/4];
loc_42B099:
	push32(0);
	push32(0);
	push32(5);
loc_42B09F:
	push32(1);
loc_42B0A1:
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	push32(0);
	push32(0);
	push32(0);
	ebx = to32i(esp+0x34); //mov
	eax = grTexClampMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = to32i(esp+0x24); //mov
	edx = ebp; //mov
	esp -= 4; _sub_432670(); esp += 4; //call
	push32(1);
	push32(1);
	push32(0);
	eax = grTexClampMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	xor_(eax, eax);
	goto *off_42AEF0[eax/4];
loc_42B0D6:
	push32(eax);
	push32(eax);
	push32(5);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
loc_42B0E2:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B0EC:
	eax = to32i(esp+0x28); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+0x24); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+0x28); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B0E2;
	goto loc_42AF71;
loc_42B122:
	push32(0);
	push32(0);
	push32(4);
	goto loc_42B09F;
loc_42B12D:
	push32(0);
	push32(0);
	push32(5);
	push32(0);
	goto loc_42B0A1;
loc_42B13A:
	push32(eax);
	push32(eax);
	push32(4);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B150:
	push32(eax);
	push32(eax);
	push32(5);
	push32(eax);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42B170()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	edx = to32i(eax+0xC); //mov
	ebp = to32i(eax+0x10); //mov
	ebx = to32i(eax+0x14); //mov
	add(edx, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	to32i(esp+4) = edx; //mov
	dx = to16i(eax+0xA); //mov
	add(ebx, (int32_t)0x10);
	cmp(dx, (int16_t)3);
	if (jnz())
		goto loc_42B1D3;
	cmp(to32i(dword_4D4E88), (int32_t)0);
	if (jz())
		goto loc_42B2D2;
	fld(to32f(ebx+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+4); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fld(to32f(ebx));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (ja())
		goto loc_42B2CA;
loc_42B1D3:
	push32(edi);
	push32(esi);
	eax = to32i(ecx+0x1C); //mov
	edi = to32i(esp+0xC); //mov
	esi = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)(ebx+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edx = to32i(ecx+0x20); //mov
	shr(edx, (int32_t)4);
	eax = edx; //mov
	and_(eax, (int32_t)7);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, esi);
	add(eax, (int32_t)0x32);
	esi = eax; //mov
	edi = eax; //mov
	shl(esi, (int32_t)0x10);
	shl(edi, (int32_t)8);
	or_(esi, (int32_t)0xFF000000);
	or_(edi, esi);
	esi = edi; //mov
	or_(esi, eax);
	eax = to32i(esp+0xC); //mov
	shr(edx, (int32_t)3);
	to32i(eax+0x10) = esi; //mov
	eax = edx; //mov
	and_(eax, (int32_t)7);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, esi);
	add(eax, (int32_t)0x32);
	esi = eax; //mov
	shl(esi, (int32_t)0x10);
	or_(esi, (int32_t)0xFF000000);
	to32i(esp+8) = esi; //mov
	esi = eax; //mov
	edi = to32i(esp+8); //mov
	shl(esi, (int32_t)8);
	or_(esi, edi);
	or_(esi, eax);
	eax = edx; //mov
	shr(eax, (int32_t)3);
	and_(eax, (int32_t)7);
	edx = eax; //mov
	shl(edx, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, edx);
	add(eax, (int32_t)0x32);
	to32i(ebp+0x10) = esi; //mov
	esi = eax; //mov
	edx = eax; //mov
	shl(esi, (int32_t)0x10);
	shl(edx, (int32_t)8);
	or_(esi, (int32_t)0xFF000000);
	or_(edx, esi);
	or_(edx, eax);
	to32i(ebx+0x10) = edx; //mov
	eax = to32i(ecx+0x1C); //mov
	ecx = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_42B2BD;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B2BD:
	eax = to32i(esp+0xC); //mov
	edx = ebp; //mov
	esp -= 4; _sub_432670(); esp += 4; //call
	pop32(esi);
	pop32(edi);
loc_42B2CA:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B2D2:
	fld(to32f(ebx+4));
	fsub(to32f(ebp+4));
	eax = to32i(esp+4); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fld(to32f(ebx));
	fsub(to32f(ebp+0));
	fmulp_st(1, 0);
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B2CA;
	goto loc_42B1D3;
}
Fn(void) Game::_sub_42B320()
{
	static const void *const off_42B300[] = {
		&&loc_42B579,
		&&loc_42B66C,
		&&loc_42B677,
		&&loc_42B66C,
	};
	static const void *const off_42B310[] = {
		&&loc_42B5BA,
		&&loc_42B684,
		&&loc_42B69A,
		&&loc_42B684,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	edx = eax; //mov
	eax = to32i(eax+0xC); //mov
	add(eax, (int32_t)0x10);
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(edx+0x10); //mov
	add(eax, (int32_t)0x10);
	ebp = to32i(edx+0x14); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(edx+0x18); //mov
	bx = to16i(edx+0xA); //mov
	add(eax, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	to32i(esp+0x54) = eax; //mov
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_42B3FD;
	cmp(to32i(dword_4D4E88), (int32_t)0);
	if (jz())
		goto loc_42B5D0;
	eax = to32i(esp+0x4C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x28));
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x50); //mov
	fild(to32i(esp+0x28));
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fxch_st(1);
	fstp(to32f(esp+0x44));
	fmul(to32f(esp+0x44));
	eax = to32i(esp+0x4C); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x28));
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x28) = eax; //mov
	fild(to32i(esp+0x28));
	eax = to32i(esp+0x50); //mov
	fstp(to32f(esp+0x3C));
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fmul(to32f(esp+0x3C));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B3FD;
	eax = to32i(esp+0x54); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fmul(to32f(esp+0x3C));
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmul(to32f(esp+0x44));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B5C6;
loc_42B3FD:
	esi = to32i(esp+0x4C); //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esi+0x18); //lea
	movsd();
	movsd();
	esi = to32i(esp+0x50); //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	esi = (int32_t)(intptr_t)(esi+0x18); //lea
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esi = (int32_t)(intptr_t)(ebp+0x18); //lea
	movsd();
	movsd();
	esi = to32i(esp+0x54); //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(esi+0x18); //lea
	eax = to32i(esp+0x4C); //mov
	movsd();
	movsd();
	eax = to32i(eax+0x10); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax+0x10); //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esp+0x54); //mov
	eax = to32i(eax+0x10); //mov
	to32i(esp+0x38) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	esi = to32i(esp+0x4C); //mov
	or_(eax, (int32_t)0xFF000000);
	to32i(esi+0x10) = eax; //mov
	eax = to32i(esp+0x50); //mov
	or_(to8i(eax+0x13), (int8_t)0xFF);
	bh = to8i(ebp+0x13); //mov
	or_(bh, (int8_t)0xFF);
	eax = to32i(esp+0x54); //mov
	to8i(ebp+0x13) = bh; //mov
	or_(to8i(eax+0x13), (int8_t)0xFF);
	eax = to32i(edx+0x1C); //mov
	edi = to32i(esp+0x4C); //mov
	esi = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x50); //mov
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x54); //mov
	esi = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	eax = to32i(edx+0x1C); //mov
	ebx = to32i(dword_4D4EB0); //mov
	eax = to32i(eax+0x14); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_42B4E5;
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B4E5:
	ecx = to32i(esp+0x54); //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(esp+0x4C); //mov
	edi = to32i(esp+0x4C); //mov
	ebx = ebp; //mov
	esi = esp; //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x50); //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x54); //mov
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	eax = to32i(esp+0x2C); //mov
	edx = to32i(esp+0x4C); //mov
	movsd();
	movsd();
	to32i(edx+0x10) = eax; //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(esp+0x34); //mov
	to32i(edx+0x10) = eax; //mov
	eax = to32i(esp+0x30); //mov
	edx = to32i(esp+0x54); //mov
	to32i(ebp+0x10) = eax; //mov
	eax = to32i(esp+0x38); //mov
	to32i(edx+0x10) = eax; //mov
	eax = to32i(dword_500F5C); //mov
	esi = to32i(dword_4D4EB0); //mov
	eax = to32i(eax+0x14); //mov
	cmp(eax, esi);
	if (jz())
		goto loc_42B56E;
	push32(eax);
	push32(1);
	to32i(dword_4D4EB0) = eax; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B56E:
	eax = 0xC; //mov
	goto *off_42B300[eax/4];
loc_42B579:
	push32(0);
	push32(0);
	push32(5);
loc_42B57F:
	push32(1);
loc_42B581:
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	push32(0);
	push32(0);
	push32(0);
	ebx = ebp; //mov
	eax = grTexClampMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	ecx = to32i(esp+0x54); //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(esp+0x4C); //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	push32(1);
	push32(1);
	push32(0);
	eax = grTexClampMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	xor_(eax, eax);
	goto *off_42B310[eax/4];
loc_42B5BA:
	push32(eax);
	push32(eax);
	push32(5);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
loc_42B5C6:
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B5D0:
	eax = to32i(esp+0x4C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x50); //mov
	fild(to32i(esp+0x28));
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fxch_st(1);
	fstp(to32f(esp+0x40));
	fmul(to32f(esp+0x40));
	eax = to32i(esp+0x4C); //mov
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x24));
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x28) = eax; //mov
	fild(to32i(esp+0x28));
	eax = to32i(esp+0x50); //mov
	fstp(to32f(esp+0x48));
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fmul(to32f(esp+0x48));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42B3FD;
	eax = to32i(esp+0x54); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebp+4));
	fmul(to32f(esp+0x48));
	fld(to32f(eax));
	fsub(to32f(ebp+0));
	fmul(to32f(esp+0x40));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42B5C6;
	goto loc_42B3FD;
loc_42B66C:
	push32(0);
	push32(0);
	push32(4);
	goto loc_42B57F;
loc_42B677:
	push32(0);
	push32(0);
	push32(5);
	push32(0);
	goto loc_42B581;
loc_42B684:
	push32(eax);
	push32(eax);
	push32(4);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B69A:
	push32(eax);
	push32(eax);
	push32(5);
	push32(eax);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42B6B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	ecx = eax; //mov
	eax = to32i(eax+0xC); //mov
	ebx = to32i(ecx+0x14); //mov
	ebp = to32i(ecx+0x18); //mov
	add(eax, (int32_t)0x10);
	dx = to16i(ecx+0xA); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ecx+0x10); //mov
	add(ebx, (int32_t)0x10);
	add(eax, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	to32i(esp+0x18) = eax; //mov
	cmp(dx, (int16_t)3);
	if (jnz())
		goto loc_42B781;
	cmp(to32i(dword_4D4E88), (int32_t)0);
	if (jz())
		goto loc_42B8D1;
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	fild(to32i(esp+0x20));
	fld(to32f(eax));
	fsub(to32f(ebx));
	fxch_st(1);
	fstp(to32f(esp+0x10));
	fmul(to32f(esp+0x10));
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax));
	fsub(to32f(ebx));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x20) = eax; //mov
	fild(to32i(esp+0x20));
	eax = to32i(esp+0x18); //mov
	fstp(to32f(esp+0xC));
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+0xC));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B781;
	fld(to32f(ebp+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+0xC));
	fld(to32f(ebp+0));
	fsub(to32f(ebx));
	fmul(to32f(esp+0x10));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42B8C9;
loc_42B781:
	push32(edi);
	push32(esi);
	eax = to32i(ecx+0x1C); //mov
	edi = to32i(esp+0x24); //mov
	esi = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x20); //mov
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)(ebx+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edx = to32i(ecx+0x20); //mov
	shr(edx, (int32_t)4);
	eax = edx; //mov
	and_(eax, (int32_t)7);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, esi);
	add(eax, (int32_t)0x32);
	esi = eax; //mov
	edi = eax; //mov
	shl(esi, (int32_t)0x10);
	shl(edi, (int32_t)8);
	or_(esi, (int32_t)0xFF000000);
	or_(edi, esi);
	esi = edi; //mov
	or_(esi, eax);
	eax = to32i(esp+0x24); //mov
	shr(edx, (int32_t)3);
	to32i(eax+0x10) = esi; //mov
	eax = edx; //mov
	and_(eax, (int32_t)7);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, esi);
	add(eax, (int32_t)0x32);
	esi = eax; //mov
	shl(esi, (int32_t)0x10);
	or_(esi, (int32_t)0xFF000000);
	to32i(esp+0x28) = esi; //mov
	esi = eax; //mov
	edi = to32i(esp+0x28); //mov
	shl(esi, (int32_t)8);
	or_(edi, esi);
	esi = edi; //mov
	or_(esi, eax);
	eax = to32i(esp+0x20); //mov
	shr(edx, (int32_t)3);
	to32i(eax+0x10) = esi; //mov
	eax = edx; //mov
	and_(eax, (int32_t)7);
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, esi);
	add(eax, (int32_t)0x32);
	esi = eax; //mov
	shl(esi, (int32_t)0x10);
	or_(esi, (int32_t)0xFF000000);
	to32i(esp+0x28) = esi; //mov
	esi = eax; //mov
	edi = to32i(esp+0x28); //mov
	shl(esi, (int32_t)8);
	or_(esi, edi);
	or_(esi, eax);
	eax = edx; //mov
	shr(eax, (int32_t)3);
	and_(eax, (int32_t)7);
	edx = eax; //mov
	shl(edx, (int32_t)4);
	shl(eax, (int32_t)3);
	add(eax, edx);
	add(eax, (int32_t)0x32);
	to32i(ebx+0x10) = esi; //mov
	edx = eax; //mov
	esi = eax; //mov
	shl(edx, (int32_t)0x10);
	shl(esi, (int32_t)8);
	or_(edx, (int32_t)0xFF000000);
	or_(edx, esi);
	or_(edx, eax);
	to32i(ebp+0x10) = edx; //mov
	eax = to32i(ecx+0x1C); //mov
	ecx = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_42B8B8;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42B8B8:
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x24); //mov
	ecx = ebp; //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	pop32(esi);
	pop32(edi);
loc_42B8C9:
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42B8D1:
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	fild(to32i(esp+0x20));
	fld(to32f(eax));
	fsub(to32f(ebx));
	fxch_st(1);
	fstp(to32f(esp+0x14));
	fmul(to32f(esp+0x14));
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax));
	fsub(to32f(ebx));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+4));
	eax = to32i(esp+4); //mov
	to32i(esp+0x20) = eax; //mov
	fild(to32i(esp+0x20));
	eax = to32i(esp+0x18); //mov
	fstp(to32f(esp+8));
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+8));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42B781;
	fld(to32f(ebp+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+8));
	fld(to32f(ebp+0));
	fsub(to32f(ebx));
	fmul(to32f(esp+0x14));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42B8C9;
	goto loc_42B781;
}
Fn(void) Game::_sub_42B970()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	edx = eax; //mov
	eax = to32i(eax+0xC); //mov
	ebx = to32i(edx+0x14); //mov
	ebp = to32i(edx+0x18); //mov
	add(eax, (int32_t)0x10);
	cx = to16i(edx+0xA); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(edx+0x10); //mov
	add(ebx, (int32_t)0x10);
	add(eax, (int32_t)0x10);
	add(ebp, (int32_t)0x10);
	to32i(esp+0x18) = eax; //mov
	cmp(cx, (int16_t)3);
	if (jnz())
		goto loc_42BA41;
	cmp(to32i(dword_4D4E88), (int32_t)0);
	if (jz())
		goto loc_42BADF;
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	fild(to32i(esp+0x20));
	fld(to32f(eax));
	fsub(to32f(ebx));
	fxch_st(1);
	fstp(to32f(esp+0x14));
	fmul(to32f(esp+0x14));
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax));
	fsub(to32f(ebx));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x20) = eax; //mov
	fild(to32i(esp+0x20));
	eax = to32i(esp+0x18); //mov
	fstp(to32f(esp+0x10));
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+0x10));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42BA41;
	fld(to32f(ebp+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+0x10));
	fld(to32f(ebp+0));
	fsub(to32f(ebx));
	fmul(to32f(esp+0x14));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jb())
		goto loc_42BAD7;
loc_42BA41:
	push32(edi);
	push32(esi);
	eax = to32i(edx+0x1C); //mov
	edi = to32i(esp+0x24); //mov
	esi = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x20); //mov
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)(ebx+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)(ebp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(edx+0x20); //mov
	test(esi, esi);
	if (jz())
		goto loc_42BAA7;
	eax = esi; //mov
	esi = to32i(esp+0x24); //mov
	to32i(esi+0x10) = eax; //mov
	esi = to32i(esp+0x20); //mov
	to32i(esi+0x10) = eax; //mov
	to32i(ebx+0x10) = eax; //mov
	to32i(ebp+0x10) = eax; //mov
loc_42BAA7:
	eax = to32i(edx+0x1C); //mov
	edi = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, edi);
	if (jz())
		goto loc_42BAC6;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42BAC6:
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x24); //mov
	ecx = ebp; //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	pop32(esi);
	pop32(edi);
loc_42BAD7:
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42BADF:
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	fild(to32i(esp+0x20));
	fld(to32f(eax));
	fsub(to32f(ebx));
	fxch_st(1);
	fstp(to32f(esp+0xC));
	fmul(to32f(esp+0xC));
	eax = to32i(esp+0x1C); //mov
	fld(to32f(eax));
	fsub(to32f(ebx));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+4));
	eax = to32i(esp+4); //mov
	to32i(esp+0x20) = eax; //mov
	fild(to32i(esp+0x20));
	eax = to32i(esp+0x18); //mov
	fstp(to32f(esp+8));
	fld(to32f(eax+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+8));
	fsubp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42BA41;
	fld(to32f(ebp+4));
	fsub(to32f(ebx+4));
	fmul(to32f(esp+8));
	fld(to32f(ebp+0));
	fsub(to32f(ebx));
	fmul(to32f(esp+0xC));
	fsubrp_st(1, 0);
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_42BAD7;
	goto loc_42BA41;
}
Fn(void) Game::_sub_42BBA0()
{
	static const void *const off_42BB80[] = {
		&&loc_42BC3F,
		&&loc_42BC8E,
		&&loc_42BC95,
		&&loc_42BC8E,
	};
	static const void *const off_42BB90[] = {
		&&loc_42BC63,
		&&loc_42BC9F,
		&&loc_42BCB5,
		&&loc_42BC9F,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = to32i(eax+0xC); //mov
	add(edx, (int32_t)0x10);
	to32i(esp+4) = edx; //mov
	edx = to32i(eax+0x18); //mov
	add(edx, (int32_t)0x10);
	to32i(esp) = edx; //mov
	edx = to32i(eax+0x1C); //mov
	edi = to32i(esp+4); //mov
	esi = to32i(edx+4); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	ebp = to32i(eax+0x10); //mov
	ebx = to32i(eax+0x14); //mov
	movsd();
	movsd();
	esi = to32i(edx+8); //mov
	edi = (int32_t)(intptr_t)(ebp+0x28); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(edx+0xC); //mov
	edi = (int32_t)(intptr_t)(ebx+0x28); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = to32i(esp); //mov
	esi = to32i(edx+0x10); //mov
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	add(ebp, (int32_t)0x10);
	edx = to32i(eax+0x20); //mov
	add(ebx, (int32_t)0x10);
	test(edx, edx);
	if (jnz())
		goto loc_42BC79;
loc_42BC15:
	eax = to32i(eax+0x1C); //mov
	ecx = to32i(dword_4D4EB0); //mov
	edx = to32i(eax+0x14); //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_42BC34;
	push32(edx);
	push32(1);
	to32i(dword_4D4EB0) = edx; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
loc_42BC34:
	eax = 4; //mov
	goto *off_42BB80[eax/4];
loc_42BC3F:
	push32(0);
	push32(0);
	push32(5);
loc_42BC45:
	push32(1);
loc_42BC47:
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ecx = to32i(esp); //mov
	eax = to32i(esp+4); //mov
	edx = ebp; //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	xor_(eax, eax);
	goto *off_42BB90[eax/4];
loc_42BC63:
	push32(eax);
	push32(eax);
	push32(5);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42BC79:
	esi = to32i(esp+4); //mov
	to32i(esi+0x10) = edx; //mov
	to32i(ebp+0x10) = edx; //mov
	esi = to32i(esp); //mov
	to32i(ebx+0x10) = edx; //mov
	to32i(esi+0x10) = edx; //mov
	goto loc_42BC15;
loc_42BC8E:
	push32(0);
	push32(0);
	push32(eax);
	goto loc_42BC45;
loc_42BC95:
	push32(0);
	push32(0);
	push32(5);
	push32(0);
	goto loc_42BC47;
loc_42BC9F:
	push32(eax);
	push32(eax);
	push32(4);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42BCB5:
	push32(eax);
	push32(eax);
	push32(5);
	push32(eax);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42BCD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	fld(to32f(ebp+0x3C));
	edx = (int32_t)(intptr_t)flt_4D4F34; //mov
	ecx = (int32_t)(intptr_t)flt_4D4F54; //mov
	ebx = (int32_t)(intptr_t)flt_4D4F74; //mov
	esi = (int32_t)(intptr_t)flt_4D4F94; //mov
	eax = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D4FA0));
	edi = to32i(ebp+8); //mov
	fld(to32f(flt_4D4FA0));
	to32i(esp+0xC) = edx; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp) = esi; //mov
	fstp(to32f(flt_4D4F80));
	add(eax, edi);
	fld(to32f(flt_4D4F80));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4F60));
	edx = to32i(ebp+0xC); //mov
	ecx = to32i(ebp+0x10); //mov
	ebx = to32i(ebp+0x14); //mov
	esi = to32i(ebp+0x18); //mov
	edi = to32i(ebp+0x1C); //mov
	fild(to32i(esp+0x10));
	fld(to32f(flt_4D4F60));
	eax = to32i(dword_4EC63C); //mov
	fxch_st(1);
	fstp(to32f(flt_4D4F34));
	add(eax, edx);
	fstp(to32f(flt_4D4F40));
	to32i(esp+0x10) = eax; //mov
	edx = to32i(ebp+0x20); //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, ecx);
	fstp(to32f(flt_4D4F38));
	to32i(esp+0x10) = eax; //mov
	ecx = to32i(ebp+0x24); //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, ebx);
	fstp(to32f(flt_4D4F54));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, esi);
	fstp(to32f(flt_4D4F58));
	to32i(esp+0x10) = eax; //mov
	esi = (int32_t)(intptr_t)flt_4D4F34; //mov
	fild(to32i(esp+0x10));
	eax = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D4F74));
	add(eax, edi);
	edi = (int32_t)(intptr_t)flt_4D4F34; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, edx);
	fstp(to32f(flt_4D4F78));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	add(edi, (int32_t)0x14);
	add(eax, ecx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4F94));
	fild(to32i(esp+0x10));
	fstp(to32f(flt_4D4F98));
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BE62;
	cmp(eax, ecx);
	if (jge())
		goto loc_42BE62;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BE36;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BE36;
	cmp(eax, edx);
	if (jle())
		goto loc_42BE3A;
	or_(ebx, (int32_t)4);
	goto loc_42BE3A;
loc_42BE36:
	or_(ebx, (int32_t)8);
loc_42BE3A:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BE5D;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BE5D;
	cmp(eax, edx);
	if (jle())
		goto loc_42BE67;
	or_(ebx, (int32_t)2);
	goto loc_42BE67;
loc_42BE5D:
	or_(ebx, (int32_t)1);
	goto loc_42BE67;
loc_42BE62:
	ebx = 0x10; //mov
loc_42BE67:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F54; //mov
	esi = (int32_t)(intptr_t)flt_4D4F54; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BEDE;
	cmp(eax, ecx);
	if (jge())
		goto loc_42BEDE;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BEB2;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BEB2;
	cmp(eax, edx);
	if (jle())
		goto loc_42BEB6;
	or_(ebx, (int32_t)4);
	goto loc_42BEB6;
loc_42BEB2:
	or_(ebx, (int32_t)8);
loc_42BEB6:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BED9;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BED9;
	cmp(eax, edx);
	if (jle())
		goto loc_42BEE3;
	or_(ebx, (int32_t)2);
	goto loc_42BEE3;
loc_42BED9:
	or_(ebx, (int32_t)1);
	goto loc_42BEE3;
loc_42BEDE:
	ebx = 0x10; //mov
loc_42BEE3:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F74; //mov
	esi = (int32_t)(intptr_t)flt_4D4F74; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BF5A;
	cmp(eax, ecx);
	if (jge())
		goto loc_42BF5A;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BF2E;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BF2E;
	cmp(eax, edx);
	if (jle())
		goto loc_42BF32;
	or_(ebx, (int32_t)4);
	goto loc_42BF32;
loc_42BF2E:
	or_(ebx, (int32_t)8);
loc_42BF32:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BF55;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BF55;
	cmp(eax, edx);
	if (jle())
		goto loc_42BF5F;
	or_(ebx, (int32_t)2);
	goto loc_42BF5F;
loc_42BF55:
	or_(ebx, (int32_t)1);
	goto loc_42BF5F;
loc_42BF5A:
	ebx = 0x10; //mov
loc_42BF5F:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F94; //mov
	esi = (int32_t)(intptr_t)flt_4D4F94; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BFD6;
	cmp(eax, ecx);
	if (jge())
		goto loc_42BFD6;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BFAA;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BFAA;
	cmp(eax, edx);
	if (jle())
		goto loc_42BFAE;
	or_(ebx, (int32_t)4);
	goto loc_42BFAE;
loc_42BFAA:
	or_(ebx, (int32_t)8);
loc_42BFAE:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42BFD1;
	cmp(eax, ecx);
	if (jl())
		goto loc_42BFD1;
	cmp(eax, edx);
	if (jle())
		goto loc_42BFDB;
	or_(ebx, (int32_t)2);
	goto loc_42BFDB;
loc_42BFD1:
	or_(ebx, (int32_t)1);
	goto loc_42BFDB;
loc_42BFD6:
	ebx = 0x10; //mov
loc_42BFDB:
	to8i(edi) = bl; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x29); //movzx
	al = to8i(ebp+0x28); //mov
	shl(edi, (int32_t)0x10);
	shl(eax, (int32_t)0x18);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2A); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2B); //mov
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2C); //mov
	to32i(dword_4D4F44) = edi; //mov
	edi = eax; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x2D); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2E); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = (uint8_t)to8i(ebp+0x2F); //movzx
	or_(eax, edi);
	to32i(dword_4D4F64) = eax; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x30); //movzx
	al = to8i(ebp+0x31); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x32); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x33); //mov
	or_(edi, eax);
	to32i(dword_4D4F84) = edi; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x34); //mov
	edi = eax; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x35); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x36); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x37); //mov
	or_(edi, eax);
	ebx = to32i(dword_4D4EB0); //mov
	to32i(dword_4D4FA4) = edi; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_42C0AE;
loc_42C08B:
	edi = to32i(esp); //mov
	push32(edi);
	ebp = to32i(esp+0xC); //mov
	push32(ebp);
	eax = to32i(esp+0xC); //mov
	push32(eax);
	edx = to32i(esp+0x18); //mov
	push32(edx);
	esp -= 4; _sub_497B24(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42C0AE:
	xor_(esi, esi);
	push32(esi);
	push32(1);
	to32i(dword_4D4EB0) = esi; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42C08B;
}
Fn(void) Game::_sub_42C0D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	fld(to32f(ebp+0x3C));
	edx = (int32_t)(intptr_t)flt_4D4F34; //mov
	ecx = (int32_t)(intptr_t)flt_4D4F54; //mov
	ebx = (int32_t)(intptr_t)flt_4D4F74; //mov
	esi = (int32_t)(intptr_t)flt_4D4F94; //mov
	eax = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D4FA0));
	edi = to32i(ebp+8); //mov
	fld(to32f(flt_4D4FA0));
	to32i(esp+0xC) = edx; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp) = esi; //mov
	fstp(to32f(flt_4D4F80));
	add(eax, edi);
	fld(to32f(flt_4D4F80));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4F60));
	edx = to32i(ebp+0xC); //mov
	ecx = to32i(ebp+0x10); //mov
	ebx = to32i(ebp+0x14); //mov
	esi = to32i(ebp+0x18); //mov
	edi = to32i(ebp+0x1C); //mov
	fild(to32i(esp+0x10));
	fld(to32f(flt_4D4F60));
	eax = to32i(dword_4EC63C); //mov
	fxch_st(1);
	fstp(to32f(flt_4D4F34));
	add(eax, edx);
	fstp(to32f(flt_4D4F40));
	to32i(esp+0x10) = eax; //mov
	edx = to32i(ebp+0x20); //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, ecx);
	fstp(to32f(flt_4D4F38));
	to32i(esp+0x10) = eax; //mov
	ecx = to32i(ebp+0x24); //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, ebx);
	fstp(to32f(flt_4D4F54));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, esi);
	fstp(to32f(flt_4D4F58));
	to32i(esp+0x10) = eax; //mov
	esi = (int32_t)(intptr_t)flt_4D4F34; //mov
	fild(to32i(esp+0x10));
	eax = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D4F74));
	add(eax, edi);
	edi = (int32_t)(intptr_t)flt_4D4F34; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, edx);
	fstp(to32f(flt_4D4F78));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	add(edi, (int32_t)0x14);
	add(eax, ecx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4F94));
	fild(to32i(esp+0x10));
	fstp(to32f(flt_4D4F98));
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C262;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C262;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C236;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C236;
	cmp(eax, edx);
	if (jle())
		goto loc_42C23A;
	or_(ebx, (int32_t)4);
	goto loc_42C23A;
loc_42C236:
	or_(ebx, (int32_t)8);
loc_42C23A:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C25D;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C25D;
	cmp(eax, edx);
	if (jle())
		goto loc_42C267;
	or_(ebx, (int32_t)2);
	goto loc_42C267;
loc_42C25D:
	or_(ebx, (int32_t)1);
	goto loc_42C267;
loc_42C262:
	ebx = 0x10; //mov
loc_42C267:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F54; //mov
	esi = (int32_t)(intptr_t)flt_4D4F54; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C2DE;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C2DE;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C2B2;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C2B2;
	cmp(eax, edx);
	if (jle())
		goto loc_42C2B6;
	or_(ebx, (int32_t)4);
	goto loc_42C2B6;
loc_42C2B2:
	or_(ebx, (int32_t)8);
loc_42C2B6:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C2D9;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C2D9;
	cmp(eax, edx);
	if (jle())
		goto loc_42C2E3;
	or_(ebx, (int32_t)2);
	goto loc_42C2E3;
loc_42C2D9:
	or_(ebx, (int32_t)1);
	goto loc_42C2E3;
loc_42C2DE:
	ebx = 0x10; //mov
loc_42C2E3:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F74; //mov
	esi = (int32_t)(intptr_t)flt_4D4F74; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C35A;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C35A;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C32E;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C32E;
	cmp(eax, edx);
	if (jle())
		goto loc_42C332;
	or_(ebx, (int32_t)4);
	goto loc_42C332;
loc_42C32E:
	or_(ebx, (int32_t)8);
loc_42C332:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C355;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C355;
	cmp(eax, edx);
	if (jle())
		goto loc_42C35F;
	or_(ebx, (int32_t)2);
	goto loc_42C35F;
loc_42C355:
	or_(ebx, (int32_t)1);
	goto loc_42C35F;
loc_42C35A:
	ebx = 0x10; //mov
loc_42C35F:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F94; //mov
	esi = (int32_t)(intptr_t)flt_4D4F94; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C3D6;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C3D6;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C3AA;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C3AA;
	cmp(eax, edx);
	if (jle())
		goto loc_42C3AE;
	or_(ebx, (int32_t)4);
	goto loc_42C3AE;
loc_42C3AA:
	or_(ebx, (int32_t)8);
loc_42C3AE:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C3D1;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C3D1;
	cmp(eax, edx);
	if (jle())
		goto loc_42C3DB;
	or_(ebx, (int32_t)2);
	goto loc_42C3DB;
loc_42C3D1:
	or_(ebx, (int32_t)1);
	goto loc_42C3DB;
loc_42C3D6:
	ebx = 0x10; //mov
loc_42C3DB:
	to8i(edi) = bl; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x28); //movzx
	al = to8i(ebp+0x29); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2A); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = (uint8_t)to8i(ebp+0x2B); //movzx
	or_(eax, edi);
	to32i(dword_4D4F44) = eax; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x2C); //movzx
	al = to8i(ebp+0x2D); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(eax, edi);
	edi = (uint8_t)to8i(ebp+0x2E); //movzx
	shl(edi, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2F); //mov
	or_(edi, eax);
	to32i(dword_4D4F64) = edi; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x30); //movzx
	al = to8i(ebp+0x31); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x32); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x33); //mov
	or_(edi, eax);
	to32i(dword_4D4F84) = edi; //mov
	xor_(eax, eax);
	edi = (uint8_t)to8i(ebp+0x34); //movzx
	al = to8i(ebp+0x35); //mov
	shl(edi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x36); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x37); //mov
	or_(edi, eax);
	ebx = to32i(dword_4D4EB0); //mov
	to32i(dword_4D4FA4) = edi; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_42C4A2;
loc_42C484:
	ecx = to32i(esp); //mov
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+4); //mov
	eax = to32i(esp+0xC); //mov
	esp -= 4; _sub_430B80(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42C4A2:
	xor_(esi, esi);
	push32(esi);
	push32(1);
	to32i(dword_4D4EB0) = esi; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42C484;
}
Fn(void) Game::_sub_42C4C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	fld(to32f(ebp+0x34));
	edx = (int32_t)(intptr_t)flt_4D4EB4; //mov
	ecx = (int32_t)(intptr_t)flt_4D4ED4; //mov
	ebx = (int32_t)(intptr_t)flt_4D4EF4; //mov
	esi = (int32_t)(intptr_t)flt_4D4F14; //mov
	eax = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D4F20));
	edi = to32i(ebp+8); //mov
	fld(to32f(flt_4D4F20));
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+4) = esi; //mov
	fstp(to32f(flt_4D4F00));
	add(eax, edi);
	fld(to32f(flt_4D4F00));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4EE0));
	edx = to32i(ebp+0xC); //mov
	ecx = to32i(ebp+0x10); //mov
	ebx = to32i(ebp+0x14); //mov
	esi = to32i(ebp+0x18); //mov
	edi = to32i(ebp+0x1C); //mov
	fild(to32i(esp+0x10));
	fld(to32f(flt_4D4EE0));
	eax = to32i(dword_4EC63C); //mov
	fxch_st(1);
	fstp(to32f(flt_4D4EB4));
	add(eax, edx);
	fstp(to32f(flt_4D4EC0));
	to32i(esp+0x10) = eax; //mov
	edx = to32i(ebp+0x20); //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, ecx);
	fstp(to32f(flt_4D4EB8));
	to32i(esp+0x10) = eax; //mov
	ecx = to32i(ebp+0x24); //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, ebx);
	fstp(to32f(flt_4D4ED4));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, esi);
	fstp(to32f(flt_4D4ED8));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, edi);
	fstp(to32f(flt_4D4EF4));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	edi = (int32_t)(intptr_t)dword_4D4ECC; //mov
	add(eax, edx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D4EF8));
	add(eax, ecx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0x28); //mov
	fstp(to32f(flt_4D4F14));
	esi = to32i(eax+4); //mov
	fild(to32i(esp+0x10));
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	fstp(to32f(flt_4D4F18));
	movsd();
	movsd();
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)dword_4D4EEC; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)dword_4D4F0C; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)dword_4D4F2C; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)flt_4D4EB4; //mov
	esi = (int32_t)(intptr_t)flt_4D4EB4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C699;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C699;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C66D;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C66D;
	cmp(eax, edx);
	if (jle())
		goto loc_42C671;
	or_(ebx, (int32_t)4);
	goto loc_42C671;
loc_42C66D:
	or_(ebx, (int32_t)8);
loc_42C671:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C694;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C694;
	cmp(eax, edx);
	if (jle())
		goto loc_42C69E;
	or_(ebx, (int32_t)2);
	goto loc_42C69E;
loc_42C694:
	or_(ebx, (int32_t)1);
	goto loc_42C69E;
loc_42C699:
	ebx = 0x10; //mov
loc_42C69E:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4ED4; //mov
	esi = (int32_t)(intptr_t)flt_4D4ED4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C715;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C715;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C6E9;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C6E9;
	cmp(eax, edx);
	if (jle())
		goto loc_42C6ED;
	or_(ebx, (int32_t)4);
	goto loc_42C6ED;
loc_42C6E9:
	or_(ebx, (int32_t)8);
loc_42C6ED:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C710;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C710;
	cmp(eax, edx);
	if (jle())
		goto loc_42C71A;
	or_(ebx, (int32_t)2);
	goto loc_42C71A;
loc_42C710:
	or_(ebx, (int32_t)1);
	goto loc_42C71A;
loc_42C715:
	ebx = 0x10; //mov
loc_42C71A:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4EF4; //mov
	esi = (int32_t)(intptr_t)flt_4D4EF4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C791;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C791;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C765;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C765;
	cmp(eax, edx);
	if (jle())
		goto loc_42C769;
	or_(ebx, (int32_t)4);
	goto loc_42C769;
loc_42C765:
	or_(ebx, (int32_t)8);
loc_42C769:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C78C;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C78C;
	cmp(eax, edx);
	if (jle())
		goto loc_42C796;
	or_(ebx, (int32_t)2);
	goto loc_42C796;
loc_42C78C:
	or_(ebx, (int32_t)1);
	goto loc_42C796;
loc_42C791:
	ebx = 0x10; //mov
loc_42C796:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F14; //mov
	esi = (int32_t)(intptr_t)flt_4D4F14; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C80D;
	cmp(eax, ecx);
	if (jge())
		goto loc_42C80D;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C7E1;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C7E1;
	cmp(eax, edx);
	if (jle())
		goto loc_42C7E5;
	or_(ebx, (int32_t)4);
	goto loc_42C7E5;
loc_42C7E1:
	or_(ebx, (int32_t)8);
loc_42C7E5:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42C808;
	cmp(eax, ecx);
	if (jl())
		goto loc_42C808;
	cmp(eax, edx);
	if (jle())
		goto loc_42C812;
	or_(ebx, (int32_t)2);
	goto loc_42C812;
loc_42C808:
	or_(ebx, (int32_t)1);
	goto loc_42C812;
loc_42C80D:
	ebx = 0x10; //mov
loc_42C812:
	to8i(edi) = bl; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x2C); //mov
	esi = eax; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x2D); //mov
	shl(esi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(esi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2E); //mov
	shl(eax, (int32_t)8);
	or_(esi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2F); //mov
	or_(esi, eax);
	ebx = to32i(dword_4D4EB0); //mov
	to32i(dword_4D4F24) = esi; //mov
	to32i(dword_4D4F04) = esi; //mov
	eax = to32i(ebp+0x28); //mov
	to32i(dword_4D4EE4) = esi; //mov
	to32i(dword_4D4EC4) = esi; //mov
	esi = to32i(eax+0x14); //mov
	cmp(esi, ebx);
	if (jnz())
		goto loc_42C87F;
loc_42C861:
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp); //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42C87F:
	push32(esi);
	push32(1);
	to32i(dword_4D4EB0) = esi; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	goto loc_42C861;
}
Fn(void) Game::_sub_42C8B0()
{
	static const void *const off_42C890[] = {
		&&loc_42CC5C,
		&&loc_42CCB6,
		&&loc_42CCBD,
		&&loc_42CCB6,
	};
	static const void *const off_42C8A0[] = {
		&&loc_42CC86,
		&&loc_42CCC7,
		&&loc_42CCDD,
		&&loc_42CCC7,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	fld(to32f(ebp+0x34));
	edx = (int32_t)(intptr_t)flt_4D4EB4; //mov
	ecx = (int32_t)(intptr_t)flt_4D4ED4; //mov
	ebx = (int32_t)(intptr_t)flt_4D4EF4; //mov
	esi = (int32_t)(intptr_t)flt_4D4F14; //mov
	eax = to32i(dword_4EC638); //mov
	fstp(to32f(flt_4D4F20));
	edi = to32i(ebp+8); //mov
	fld(to32f(flt_4D4F20));
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+4) = esi; //mov
	fstp(to32f(flt_4D4F00));
	add(eax, edi);
	fld(to32f(flt_4D4F00));
	to32i(esp+0x10) = eax; //mov
	fstp(to32f(flt_4D4EE0));
	edx = to32i(ebp+0xC); //mov
	ecx = to32i(ebp+0x10); //mov
	ebx = to32i(ebp+0x14); //mov
	esi = to32i(ebp+0x18); //mov
	edi = to32i(ebp+0x1C); //mov
	fild(to32i(esp+0x10));
	fld(to32f(flt_4D4EE0));
	eax = to32i(dword_4EC63C); //mov
	fxch_st(1);
	fstp(to32f(flt_4D4EB4));
	add(eax, edx);
	fstp(to32f(flt_4D4EC0));
	to32i(esp+0x10) = eax; //mov
	edx = to32i(ebp+0x20); //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, ecx);
	fstp(to32f(flt_4D4EB8));
	to32i(esp+0x10) = eax; //mov
	ecx = to32i(ebp+0x24); //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, ebx);
	fstp(to32f(flt_4D4ED4));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	fild(to32i(esp+0x10));
	add(eax, esi);
	fstp(to32f(flt_4D4ED8));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	fild(to32i(esp+0x10));
	add(eax, edi);
	fstp(to32f(flt_4D4EF4));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC638); //mov
	edi = (int32_t)(intptr_t)dword_4D4ECC; //mov
	add(eax, edx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4EC63C); //mov
	fstp(to32f(flt_4D4EF8));
	add(eax, ecx);
	fild(to32i(esp+0x10));
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0x28); //mov
	fstp(to32f(flt_4D4F14));
	esi = to32i(eax+4); //mov
	fild(to32i(esp+0x10));
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	fstp(to32f(flt_4D4F18));
	movsd();
	movsd();
	esi = to32i(eax+8); //mov
	edi = (int32_t)(intptr_t)dword_4D4EEC; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0xC); //mov
	edi = (int32_t)(intptr_t)dword_4D4F0C; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	esi = to32i(eax+0x10); //mov
	edi = (int32_t)(intptr_t)dword_4D4F2C; //mov
	esi = (int32_t)(intptr_t)(dword_4D4E90+esi*8); //lea
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)flt_4D4EB4; //mov
	esi = (int32_t)(intptr_t)flt_4D4EB4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CA89;
	cmp(eax, ecx);
	if (jge())
		goto loc_42CA89;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CA5D;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CA5D;
	cmp(eax, edx);
	if (jle())
		goto loc_42CA61;
	or_(ebx, (int32_t)4);
	goto loc_42CA61;
loc_42CA5D:
	or_(ebx, (int32_t)8);
loc_42CA61:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CA84;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CA84;
	cmp(eax, edx);
	if (jle())
		goto loc_42CA8E;
	or_(ebx, (int32_t)2);
	goto loc_42CA8E;
loc_42CA84:
	or_(ebx, (int32_t)1);
	goto loc_42CA8E;
loc_42CA89:
	ebx = 0x10; //mov
loc_42CA8E:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4ED4; //mov
	esi = (int32_t)(intptr_t)flt_4D4ED4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CB05;
	cmp(eax, ecx);
	if (jge())
		goto loc_42CB05;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CAD9;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CAD9;
	cmp(eax, edx);
	if (jle())
		goto loc_42CADD;
	or_(ebx, (int32_t)4);
	goto loc_42CADD;
loc_42CAD9:
	or_(ebx, (int32_t)8);
loc_42CADD:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CB00;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CB00;
	cmp(eax, edx);
	if (jle())
		goto loc_42CB0A;
	or_(ebx, (int32_t)2);
	goto loc_42CB0A;
loc_42CB00:
	or_(ebx, (int32_t)1);
	goto loc_42CB0A;
loc_42CB05:
	ebx = 0x10; //mov
loc_42CB0A:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4EF4; //mov
	esi = (int32_t)(intptr_t)flt_4D4EF4; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CB81;
	cmp(eax, ecx);
	if (jge())
		goto loc_42CB81;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CB55;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CB55;
	cmp(eax, edx);
	if (jle())
		goto loc_42CB59;
	or_(ebx, (int32_t)4);
	goto loc_42CB59;
loc_42CB55:
	or_(ebx, (int32_t)8);
loc_42CB59:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CB7C;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CB7C;
	cmp(eax, edx);
	if (jle())
		goto loc_42CB86;
	or_(ebx, (int32_t)2);
	goto loc_42CB86;
loc_42CB7C:
	or_(ebx, (int32_t)1);
	goto loc_42CB86;
loc_42CB81:
	ebx = 0x10; //mov
loc_42CB86:
	to8i(edi) = bl; //mov
	edi = (int32_t)(intptr_t)flt_4D4F14; //mov
	esi = (int32_t)(intptr_t)flt_4D4F14; //mov
	add(edi, (int32_t)0x14);
	eax = to32i(esi+0xC); //mov
	ecx = to32i(dword_4F1E04); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CBFD;
	cmp(eax, ecx);
	if (jge())
		goto loc_42CBFD;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CBD1;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CBD1;
	cmp(eax, edx);
	if (jle())
		goto loc_42CBD5;
	or_(ebx, (int32_t)4);
	goto loc_42CBD5;
loc_42CBD1:
	or_(ebx, (int32_t)8);
loc_42CBD5:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42CBF8;
	cmp(eax, ecx);
	if (jl())
		goto loc_42CBF8;
	cmp(eax, edx);
	if (jle())
		goto loc_42CC02;
	or_(ebx, (int32_t)2);
	goto loc_42CC02;
loc_42CBF8:
	or_(ebx, (int32_t)1);
	goto loc_42CC02;
loc_42CBFD:
	ebx = 0x10; //mov
loc_42CC02:
	to8i(edi) = bl; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x2C); //mov
	esi = eax; //mov
	xor_(eax, eax);
	al = to8i(ebp+0x2D); //mov
	shl(esi, (int32_t)0x18);
	shl(eax, (int32_t)0x10);
	or_(esi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2E); //mov
	shl(eax, (int32_t)8);
	or_(esi, eax);
	xor_(eax, eax);
	al = to8i(ebp+0x2F); //mov
	or_(esi, eax);
	ebx = to32i(dword_4D4EB0); //mov
	to32i(dword_4D4F24) = esi; //mov
	to32i(dword_4D4F04) = esi; //mov
	eax = to32i(ebp+0x28); //mov
	to32i(dword_4D4EE4) = esi; //mov
	to32i(dword_4D4EC4) = esi; //mov
	esi = to32i(eax+0x14); //mov
	cmp(esi, ebx);
	if (jnz())
		goto loc_42CC9C;
	eax = 4; //mov
	goto *off_42C890[eax/4];
loc_42CC5C:
	push32(0);
	push32(0);
	push32(5);
loc_42CC62:
	push32(1);
loc_42CC64:
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp); //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_432580(); esp += 4; //call
	xor_(eax, eax);
	goto *off_42C8A0[eax/4];
loc_42CC86:
	push32(eax);
	push32(eax);
	push32(5);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CC9C:
	push32(esi);
	push32(1);
	to32i(dword_4D4EB0) = esi; //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	eax = 4; //mov
	goto *off_42C890[eax/4];
loc_42CCB6:
	push32(0);
	push32(0);
	push32(eax);
	goto loc_42CC62;
loc_42CCBD:
	push32(0);
	push32(0);
	push32(5);
	push32(0);
	goto loc_42CC64;
loc_42CCC7:
	push32(eax);
	push32(eax);
	push32(4);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CCDD:
	push32(eax);
	push32(eax);
	push32(5);
	push32(eax);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42CD64()
{
	static const void *const off_42CD40[] = {
		&&loc_42CD90,
		&&loc_42CDB4,
		&&loc_42CDD8,
		&&loc_42CDB4,
		&&loc_42CDFC,
		&&loc_42CE44,
		&&loc_42CE20,
		&&loc_42CE68,
		&&loc_42CE8C,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	edx = 0xFFFFFFFF; //mov
	push32(2);
	xor_(ecx, ecx);
	to32i(dword_4D5258) = edx; //mov
	to32i(dword_4D525C) = ecx; //mov
	eax = grFogMode(to32i(esp + 0)); esp += 4;
	cmp(ebx, (int32_t)8);
	if (ja())
		goto loc_42CDB4;
	goto *off_42CD40[ebx];
loc_42CD90:
	eax = 0xFF000204; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CE56042);
	push32(0x3C03126F);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CDB4:
	eax = 0xFF848284; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CBC6A7F);
	push32(0x3B449BA6);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CDD8:
	eax = 0xFFCC6134; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CB43958);
	push32(0x3B03126F);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CDFC:
	eax = 0xFF848284; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CB43958);
	push32(0x3B03126F);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CE20:
	eax = 0xFFBDBD86; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CB43958);
	push32(0x3B03126F);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CE44:
	eax = 0xFF7D8084; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CBC6A7F);
	push32(0x3B449BA6);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CE68:
	eax = 0xFF848284; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CCCCCCD);
	push32(0x3BA3D70A);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42CE8C:
	eax = 0xFF000204; //mov
	esp -= 4; _sub_42CF10(); esp += 4; //call
	push32(0x3CBC6A7F);
	push32(0x3B449BA6);
	esp -= 4; _sub_42CF30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_42CEB0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42CEB0()
{
	cmp(eax, to32i(dword_4D5258));
	if (jz())
		goto locret_42CEDA;
	to32i(dword_4D5258) = eax; //mov
	cmp(eax, (int32_t)0x14);
	if (jl())
		goto loc_42CEDB;
	eax = 0x13; //mov
loc_42CEC7:
	push32(edx);
	push32(ecx);
	shl(eax, (int32_t)6);
	add(eax, (int32_t)(intptr_t)dword_4EC670);
	push32(eax);
	eax = grFogTable(to32i(esp + 0)); esp += 4;
	pop32(ecx);
	pop32(edx);
locret_42CEDA:
	return;
loc_42CEDB:
	test(eax, eax);
	if (jge())
		goto loc_42CEC7;
	xor_(eax, eax);
	push32(edx);
	push32(ecx);
	shl(eax, (int32_t)6);
	add(eax, (int32_t)(intptr_t)dword_4EC670);
	push32(eax);
	eax = grFogTable(to32i(esp + 0)); esp += 4;
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_42CF00()
{
	esp -= 4; _sub_42CF10(); esp += 4; //call
	eax = edx; //mov
	_sub_42CEB0(); return; //jmp
}
Fn(void) Game::_sub_42CF10()
{
	cmp(eax, to32i(dword_4D525C));
	if (jnz())
		goto loc_42CF19;
	return;
loc_42CF19:
	push32(edx);
	push32(ecx);
	push32(eax);
	to32i(dword_4D525C) = eax; //mov
	eax = grFogColorValue(to32i(esp + 0)); esp += 4;
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_42CF30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)8);
	ebx = to32i(esp+0x1C); //mov
	fld(to32f(esp+0x20));
	to32i(esp+4) = ebx; //mov
	fsub(to32f(esp+0x1C));
	ebx = (int32_t)(intptr_t)dword_4EC670; //mov
	fmul(to32f(flt_4CA018));
	esi = (int32_t)(intptr_t)(ebx+0x500); //lea
	fstp(to32f(esp));
loc_42CF5B:
	push32(to32i(esp+4));
	push32(ebx);
	eax = guFogGenerateExp(to32i(esp + 0), *(float *)(esp + 4)); esp += 8;
	fld(to32f(esp));
	fadd(to32f(esp+4));
	add(ebx, (int32_t)0x40);
	fstp(to32f(esp+4));
	cmp(ebx, esi);
	if (jnz())
		goto loc_42CF5B;
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 8; return;
}
Fn(void) Game::_sub_42CF90()
{
	eax = to32i(dword_4D525C); //mov
}
Fn(void) Game::_sub_42CFB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x80);
	cmp(to32i(dword_4EF3E8), (int32_t)0);
	if (jz())
		goto loc_42D6B9;
	cmp(to32i(dword_51221C), (int32_t)7);
	if (jnz())
		goto loc_42D6C6;
	edx = 1; //mov
loc_42CFDB:
	push32(dword_4EF438);
	ecx = (int32_t)(intptr_t)dword_4ECB70; //mov
	ebx = (int32_t)(intptr_t)dword_4EEBFC; //mov
	esi = 0x1D40; //mov
	to32i(esp+0x70) = edx; //mov
	edx = 0xA9; //mov
	edi = 0xC; //mov
	esp -= 4; _sub_42D730(); esp += 4; //call
	to32i(esp+0x5C) = esi; //mov
	to32i(esp+0x54) = edi; //mov
	xor_(ebx, ebx);
	eax = 0x30; //mov
	to32i(esp+0x64) = ebx; //mov
	to32i(esp+0x60) = ebx; //mov
	to32i(esp+0x58) = eax; //mov
loc_42D01D:
	imul32(ebp, to32i(esp+0x64), 0x30);
	eax = to32i(esp+0x54); //mov
	add(eax, (int32_t)0x9C);
	to32i(esp+0x74) = eax; //mov
	eax = to32i(esp+0x60); //mov
	to32i(esp+0x70) = eax; //mov
	eax = to32i(esp+0x58); //mov
	add(eax, (int32_t)0x270);
	to32i(esp+0x78) = eax; //mov
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x68) = eax; //mov
loc_42D04C:
	esi = to32i(esp+0x70); //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(dword_4EF438+esi); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x70); //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)(dword_4EF4D4+esi); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x74); //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4EF438+esi); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x74); //mov
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = (int32_t)(intptr_t)(dword_4EF39C+esi); //lea
	movsd();
	movsd();
	movsd();
	cmp(to32i(esp+8), (int32_t)0);
	if (jl())
		goto loc_42D6CD;
loc_42D099:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jle())
		goto loc_42D6F3;
loc_42D0A4:
	edx = 0xE4; //mov
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42D640;
	edi = to32i(esp+0x30); //mov
	ecx = 0xC; //mov
	esi = (int32_t)(intptr_t)(dword_4ECB70+ebp); //lea
	edi = (int32_t)(intptr_t)(edi+0x24); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = to32i(esp+0x30); //mov
	ecx = 0xC; //mov
	esi = (int32_t)(intptr_t)(dword_4ECDE0+ebp); //lea
	edi = (int32_t)(intptr_t)(edi+0x54); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = to32i(esp+0x30); //mov
	esi = to32i(esp+0x78); //mov
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(edi+0x84); //lea
	esi = (int32_t)(intptr_t)(dword_4ECB70+esi); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = to32i(esp+0x30); //mov
	esi = to32i(esp+0x78); //mov
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(edi+0xB4); //lea
	esi = (int32_t)(intptr_t)(dword_4EC900+esi); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esi = to32i(esp+0x30); //mov
	edi = to32i(esp+8); //mov
	add(esi, (int32_t)0x34);
	test(edi, edi);
	if (jnz())
		goto loc_42D12F;
	to32i(esp+8) = 1; //mov
loc_42D12F:
	eax = to32i(esp+8); //mov
	to32i(esp+0x7C) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x38); //lea
	fild(to32i(esp+0x7C));
	eax = (int32_t)(intptr_t)(esp+0x34); //lea
	fstp(to32f(esp+0x34));
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
	ecx = (int32_t)(intptr_t)(esp+0x38); //lea
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
		goto loc_42D239;
	cmp(eax, ecx);
	if (jge())
		goto loc_42D239;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D20D;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D20D;
	cmp(eax, edx);
	if (jle())
		goto loc_42D211;
	or_(ebx, (int32_t)4);
	goto loc_42D211;
loc_42D20D:
	or_(ebx, (int32_t)8);
loc_42D211:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D234;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D234;
	cmp(eax, edx);
	if (jle())
		goto loc_42D23E;
	or_(ebx, (int32_t)2);
	goto loc_42D23E;
loc_42D234:
	or_(ebx, (int32_t)1);
	goto loc_42D23E;
loc_42D239:
	ebx = 0x10; //mov
loc_42D23E:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x30); //mov
	edx = to32i(esp+0x14); //mov
	add(esi, (int32_t)0x64);
	test(edx, edx);
	if (jnz())
		goto loc_42D257;
	to32i(esp+0x14) = 1; //mov
loc_42D257:
	eax = to32i(esp+0x14); //mov
	to32i(esp+0x7C) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x40); //lea
	fild(to32i(esp+0x7C));
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	fstp(to32f(esp+0x3C));
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
	ecx = (int32_t)(intptr_t)(esp+0x40); //lea
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
		goto loc_42D363;
	cmp(eax, ecx);
	if (jge())
		goto loc_42D363;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D337;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D337;
	cmp(eax, edx);
	if (jle())
		goto loc_42D33B;
	or_(ebx, (int32_t)4);
	goto loc_42D33B;
loc_42D337:
	or_(ebx, (int32_t)8);
loc_42D33B:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D35E;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D35E;
	cmp(eax, edx);
	if (jle())
		goto loc_42D368;
	or_(ebx, (int32_t)2);
	goto loc_42D368;
loc_42D35E:
	or_(ebx, (int32_t)1);
	goto loc_42D368;
loc_42D363:
	ebx = 0x10; //mov
loc_42D368:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x30); //mov
	ebx = to32i(esp+0x20); //mov
	add(esi, (int32_t)0x94);
	test(ebx, ebx);
	if (jnz())
		goto loc_42D384;
	to32i(esp+0x20) = 1; //mov
loc_42D384:
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x7C) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x48); //lea
	fild(to32i(esp+0x7C));
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	fstp(to32f(esp+0x44));
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
	ecx = (int32_t)(intptr_t)(esp+0x48); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
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
		goto loc_42D490;
	cmp(eax, ecx);
	if (jge())
		goto loc_42D490;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D464;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D464;
	cmp(eax, edx);
	if (jle())
		goto loc_42D468;
	or_(ebx, (int32_t)4);
	goto loc_42D468;
loc_42D464:
	or_(ebx, (int32_t)8);
loc_42D468:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D48B;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D48B;
	cmp(eax, edx);
	if (jle())
		goto loc_42D495;
	or_(ebx, (int32_t)2);
	goto loc_42D495;
loc_42D48B:
	or_(ebx, (int32_t)1);
	goto loc_42D495;
loc_42D490:
	ebx = 0x10; //mov
loc_42D495:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x30); //mov
	eax = to32i(esp+0x2C); //mov
	add(esi, (int32_t)0xC4);
	test(eax, eax);
	if (jnz())
		goto loc_42D4B1;
	to32i(esp+0x2C) = 1; //mov
loc_42D4B1:
	eax = to32i(esp+0x2C); //mov
	to32i(esp+0x7C) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	fild(to32i(esp+0x7C));
	eax = (int32_t)(intptr_t)(esp+0x4C); //lea
	fstp(to32f(esp+0x4C));
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
	ecx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
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
		goto loc_42D5BD;
	cmp(eax, ecx);
	if (jge())
		goto loc_42D5BD;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D591;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D591;
	cmp(eax, edx);
	if (jle())
		goto loc_42D595;
	or_(ebx, (int32_t)4);
	goto loc_42D595;
loc_42D591:
	or_(ebx, (int32_t)8);
loc_42D595:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_42D5B8;
	cmp(eax, ecx);
	if (jl())
		goto loc_42D5B8;
	cmp(eax, edx);
	if (jle())
		goto loc_42D5C2;
	or_(ebx, (int32_t)2);
	goto loc_42D5C2;
loc_42D5B8:
	or_(ebx, (int32_t)1);
	goto loc_42D5C2;
loc_42D5BD:
	ebx = 0x10; //mov
loc_42D5C2:
	to8i(edi) = bl; //mov
	cmp(to32i(esp+0x6C), (int32_t)0);
	if (jz())
		goto loc_42D719;
	eax = 0xA; //mov
loc_42D5D4:
	edx = to32i(esp+0x30); //mov
	to32i(edx+4) = eax; //mov
	eax = to32i(esp+0x30); //mov
	ebx = to32i(esp+0x6C); //mov
	to32i(eax+0x1C) = (int32_t)(intptr_t)dword_4EFC24; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_42D723;
	eax = 0x7FFFFFFF; //mov
loc_42D5F7:
	edx = to32i(esp+0x30); //mov
	to32i(edx+0x20) = eax; //mov
	eax = to32i(esp+0x30); //mov
	to16i(eax+0xA) = 2; //mov
	eax = to32i(esp+0x30); //mov
	to16i(eax+8) = 2; //mov
	eax = to32i(esp+0x30); //mov
	edx = (int32_t)(intptr_t)(eax+0x24); //lea
	to32i(eax+0xC) = edx; //mov
	eax = to32i(esp+0x30); //mov
	edx = (int32_t)(intptr_t)(eax+0x54); //lea
	to32i(eax+0x10) = edx; //mov
	eax = to32i(esp+0x30); //mov
	edx = (int32_t)(intptr_t)(eax+0x84); //lea
	to32i(eax+0x14) = edx; //mov
	eax = to32i(esp+0x30); //mov
	edx = (int32_t)(intptr_t)(eax+0xB4); //lea
	to32i(eax+0x18) = edx; //mov
loc_42D640:
	edi = to32i(esp+0x70); //mov
	eax = to32i(esp+0x78); //mov
	esi = to32i(esp+0x74); //mov
	edx = to32i(esp+0x68); //mov
	add(ebp, (int32_t)0x270);
	add(edi, (int32_t)0x9C);
	add(eax, (int32_t)0x270);
	add(esi, (int32_t)0x9C);
	to32i(esp+0x70) = edi; //mov
	to32i(esp+0x78) = eax; //mov
	to32i(esp+0x74) = esi; //mov
	cmp(ebp, edx);
	if (jnz())
		goto loc_42D04C;
	ebx = to32i(esp+0x54); //mov
	esi = to32i(esp+0x60); //mov
	edi = to32i(esp+0x58); //mov
	ebp = to32i(esp+0x64); //mov
	ecx = to32i(esp+0x5C); //mov
	add(ebx, (int32_t)0xC);
	add(esi, (int32_t)0xC);
	add(edi, (int32_t)0x30);
	inc(ebp);
	add(ecx, (int32_t)0x30);
	to32i(esp+0x54) = ebx; //mov
	to32i(esp+0x60) = esi; //mov
	to32i(esp+0x58) = edi; //mov
	to32i(esp+0x64) = ebp; //mov
	to32i(esp+0x5C) = ecx; //mov
	cmp(ebp, (int32_t)0xC);
	if (jl())
		goto loc_42D01D;
loc_42D6B9:
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42D6C6:
	xor_(edx, edx);
	goto loc_42CFDB;
loc_42D6CD:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jge())
		goto loc_42D099;
	cmp(to32i(esp+0x20), (int32_t)0);
	if (jge())
		goto loc_42D099;
	cmp(to32i(esp+0x2C), (int32_t)0);
	if (jl())
		goto loc_42D640;
	goto loc_42D099;
loc_42D6F3:
	cmp(to32i(esp+8), (int32_t)0);
	if (jg())
		goto loc_42D0A4;
	cmp(to32i(esp+0x2C), (int32_t)0);
	if (jg())
		goto loc_42D0A4;
	cmp(to32i(esp+0x20), (int32_t)0);
	if (jg())
		goto loc_42D0A4;
	goto loc_42D640;
loc_42D719:
	eax = 0xB; //mov
	goto loc_42D5D4;
loc_42D723:
	eax = 0xFFFFFFFF; //mov
	goto loc_42D5F7;
}
Fn(void) Game::_sub_42D730()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x40);
	and_(esp, (int32_t)0xFFFFFFF8);
	edi = to32i(ebp+0x10); //mov
	to32i(esp+0x30) = eax; //mov
	to32i(esp+0x34) = edx; //mov
	to32i(esp+0x38) = ebx; //mov
	esi = ecx; //mov
	edx = to32i(esp+0x30); //mov
	xor_(eax, eax);
	fld(to64f(dbl_4CA22C));
loc_42D758:
	fild(to32i(edx+0x44));
	fmul_st(0, 1);
	inc(eax);
	add(edx, (int32_t)4);
	fstp(to32f(esp+eax*4-4));
	cmp(eax, (int32_t)9);
	if (jl())
		goto loc_42D758;
	fstp_st(0);
	xor_(edx, edx);
	ecx = to32i(esp+0x34); //mov
	to32i(esp+0x3C) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_42D804;
loc_42D77E:
	ecx = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esp; //mov
	edx = to32i(esp+0x38); //mov
	eax = 1; //mov
	esp -= 4; _sub_49C46C(); esp += 4; //call
	fld(to32f(esp+0x24));
	fmul(to64f(dbl_4CA234));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esi));
	eax = to32i(esi); //mov
	to32i(edi) = eax; //mov
	fld(to32f(esp+0x28));
	fmul(to64f(dbl_4CA234));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esi+4));
	eax = to32i(esi+4); //mov
	to32i(edi+4) = eax; //mov
	fld(to32f(esp+0x2C));
	fmul(to64f(dbl_4CA234));
	add(esi, (int32_t)0x30);
	add(edi, (int32_t)0xC);
	ebx = to32i(esp+0x38); //mov
	edx = to32i(esp+0x34); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esi-0x28));
	eax = to32i(esi-0x28); //mov
	add(ebx, (int32_t)0xC);
	to32i(edi-4) = eax; //mov
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x38) = ebx; //mov
	inc(eax);
	to16i(esi-0x24) = 0; //mov
	to32i(esp+0x3C) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_42D77E;
loc_42D804:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_42D810()
{
	eax = to32i(dword_540F48); //mov
	to32i(dword_4D5270) = eax; //mov
}
Fn(void) Game::_sub_42D820()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)0x18);
	test(to8i(byte_512219), (int8_t)2);
	if (jz())
		goto loc_42D84C;
	edx = to32i(dword_51221C); //mov
	test(edx, edx);
	if (jz())
		goto loc_42D84C;
	cmp(edx, (int32_t)8);
	if (jz())
		goto loc_42D84C;
	ebx = to32i(dword_4D5270); //mov
	eax = to32i(dword_540F48); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_42D852;
loc_42D84C:
	add(esp, (int32_t)0x18);
	pop32(edx);
	pop32(ebx);
	return;
loc_42D852:
	push32(ecx);
	to32i(dword_4D5270) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_4EF3F2); //mov
	to32i(esp+0x10) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_4EF3F1); //mov
	to32i(esp+0x14) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_4EF3F0); //mov
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = to32i(esp+0x18); //mov
	push32(eax);
	ebx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x18); //mov
	esp -= 4; _sub_458200(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	al = to8i(esp+0xC); //mov
	add(al, (int8_t)4);
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = to32i(esp+0x14); //mov
	edx = to32i(esp+0x10); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_457FA8(); esp += 4; //call
	al = to8i(esp+0x10); //mov
	to8i(byte_4EF3F2) = al; //mov
	to8i(byte_4EF3EE) = al; //mov
	al = to8i(esp+0x14); //mov
	to8i(byte_4EF3F1) = al; //mov
	to8i(byte_4EF3ED) = al; //mov
	al = to8i(esp+0x18); //mov
	to8i(byte_4EF3F0) = al; //mov
	to8i(byte_4EF3EC) = al; //mov
	xor_(eax, eax);
	al = to8i(esp+0x10); //mov
	ecx = eax; //mov
	xor_(eax, eax);
	shl(ecx, (int32_t)0x10);
	al = to8i(esp+0x14); //mov
	or_(ecx, (int32_t)0xFF000000);
	shl(eax, (int32_t)8);
	or_(ecx, eax);
	xor_(eax, eax);
	al = to8i(esp+0x18); //mov
	or_(eax, ecx);
	push32(eax);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	pop32(ecx);
	add(esp, (int32_t)0x18);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_42D920()
{
	eax = to32i(dword_540F48); //mov
	to32i(dword_4D5270) = eax; //mov
}
Fn(void) Game::_sub_42D930()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xC);
	and_(esp, (int32_t)0xFFFFFFF8);
	edx = 0xFC180000; //mov
	xor_(edi, edi);
	to32i(esp) = edx; //mov
loc_42D948:
	ecx = 0xFC180000; //mov
	esi = to32i(esp); //mov
	edx = edi; //mov
	ebx = edi; //mov
	add(edx, (int32_t)(intptr_t)dword_4EEBFC);
loc_42D95A:
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = esi; //mov
	fild(to32i(esp+4));
	fmul(to64f(dbl_4CA224));
	fild(to32i(esp+8));
	fmul(to64f(dbl_4CA224));
	eax = edx; //mov
	add(ebx, (int32_t)0x9C);
	add(edx, (int32_t)0x9C);
	add(ecx, (int32_t)0x960000);
	fxch_st(1);
	fstp(to32f(flt_4EEB60+ebx));
	fstp(to32f(flt_4EEB68+ebx));
	esp -= 4; _sub_42D9D0(); esp += 4; //call
	cmp(ecx, (int32_t)0x3B60000);
	if (jnz())
		goto loc_42D95A;
	add(to16i(esp+2), (int16_t)0x96);
	ecx = to32i(esp); //mov
	add(edi, (int32_t)0xC);
	cmp(ecx, (int32_t)0x3B60000);
	if (jnz())
		goto loc_42D948;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42D9D0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0xC);
	edx = eax; //mov
	eax = to32i(eax); //mov
	xor_(ecx, ecx);
	to32i(esp) = eax; //mov
	to32i(esp+4) = ecx; //mov
	eax = to32i(edx+8); //mov
	to32i(esp+8) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_49C264(); esp += 4; //call
	fmul(to64f(dbl_4CA214));
	fmul(to64f(dbl_4CA21C));
	sub(esp, (int32_t)4);
	fstp(to32f(esp));
	esp -= 4; _sub_49C2C4(); esp += 4; //call
	fmul(to32f(flt_4D5264));
	fadd(to32f(flt_4D5260));
	fstp(to32f(edx+4));
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42DA20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x120);
	xor_(ah, ah);
	dl = 1; //mov
	to8i(byte_4EFC40) = ah; //mov
	to8i(byte_4EFC42) = dl; //mov
	to8i(byte_4EFC44) = dl; //mov
	to8i(byte_4EFC43) = dl; //mov
	to8i(byte_4EFC45) = dl; //mov
	to8i(byte_4EFC48) = ah; //mov
	eax = to32i(dword_51221C); //mov
	to8i(byte_4EFC46) = dl; //mov
	to8i(byte_4EFC47) = dl; //mov
	al = (int32_t)(intptr_t)byte_4EFC40[eax]; //mov
	edx = to32i(dword_513480); //mov
	push32(edx);
	and_(eax, (int32_t)0xFF);
	push32(aSsky_fsh);
	to32i(dword_4EF3E8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	ecx = to32i(dword_51221C); //mov
	push32(ecx);
	push32(aCldD);
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x108); //lea
	push32(eax);
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(esp+0x10C); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	ecx = (int32_t)(intptr_t)dword_4EFC24; //mov
	eax = esi; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_438140(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	esp -= 4; _sub_42D930(); esp += 4; //call
	add(esp, (int32_t)0x120);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42DAF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x434);
	to32i(esp+0x414) = esi; //mov
	edi = eax; //mov
	edx = 0x107AE; //mov
	ecx = to32i(dword_51221C); //mov
	to32i(esp+0x410) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_42DC5F;
	eax = 1; //mov
loc_42DB23:
	to32i(esp+0x420) = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_42E510(); esp += 4; //call
	esp -= 4; _sub_42E4C0(); esp += 4; //call
	cmp(to32i(edi), (int32_t)1);
	if (jz())
		goto loc_42DC66;
loc_42DB3F:
	esi = to32i(dword_4EEB40); //mov
	test(esi, esi);
	if (jnz())
		goto loc_42DB58;
	eax = edi; //mov
	esp -= 4; _sub_42E280(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DD37;
loc_42DB58:
	edx = 0x40; //mov
	eax = (int32_t)(intptr_t)(esp+0x418); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DC30;
	eax = to32i(dword_5127B0); //mov
	to32i(esp+0x3B8) = eax; //mov
	eax = to32i(dword_5127B4); //mov
	to32i(esp+0x3BC) = eax; //mov
	eax = to32i(dword_5127A8); //mov
	to32i(esp+0x3C0) = eax; //mov
	eax = to32i(esp+0x3BC); //mov
	to32i(esp+0x3C4) = eax; //mov
	eax = to32i(esp+0x3C0); //mov
	to32i(esp+0x3C8) = eax; //mov
	eax = to32i(byte_5127BC); //mov
	to32i(esp+0x3CC) = eax; //mov
	eax = to32i(esp+0x3B8); //mov
	to32i(esp+0x3D0) = eax; //mov
	eax = to32i(esp+0x3CC); //mov
	push32(0);
	to32i(esp+0x3D8) = eax; //mov
	eax = to32i(dword_42CFA0); //mov
	push32(eax);
	push32(eax);
	push32(eax);
	push32(eax);
	esi = to32i(esp+0x3E8); //mov
	push32(esi);
	edi = to32i(esp+0x3E8); //mov
	push32(edi);
	ebp = to32i(esp+0x3E8); //mov
	push32(ebp);
	eax = to32i(esp+0x3E8); //mov
	push32(eax);
	edx = to32i(esp+0x3E8); //mov
	push32(edx);
	ecx = to32i(esp+0x3E8); //mov
	push32(ecx);
	ebx = to32i(esp+0x3E8); //mov
	push32(ebx);
	esi = to32i(esp+0x3E8); //mov
	push32(esi);
loc_42DC24:
	eax = to32i(esp+0x44C); //mov
	esp -= 4; _sub_42E580(); esp += 4; //call
loc_42DC30:
	esi = (int32_t)(intptr_t)(esp+0x400); //lea
	esp -= 4; _sub_42E460(); esp += 4; //call
	edi = to32i(esp+0x414); //mov
	esi = (int32_t)(intptr_t)(esp+0x400); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x414); //mov
	add(esp, (int32_t)0x434);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42DC5F:
	xor_(eax, eax);
	goto loc_42DB23;
loc_42DC66:
	eax = to32i(edi+4); //mov
	esp -= 4; _sub_449A20(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DB3F;
	esp -= 4; _sub_42CF90(); esp += 4; //call
	edx = 0x40; //mov
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x418); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DC30;
	eax = to32i(dword_5127B0); //mov
	to32i(esp+0x3D8) = eax; //mov
	eax = to32i(dword_5127B4); //mov
	to32i(esp+0x3DC) = eax; //mov
	eax = to32i(dword_5127A8); //mov
	push32(0);
	to32i(esp+0x3E4) = eax; //mov
	eax = to32i(esp+0x3E0); //mov
	push32(ecx);
	to32i(esp+0x3EC) = eax; //mov
	eax = to32i(esp+0x3E8); //mov
	push32(ecx);
	to32i(esp+0x3F4) = eax; //mov
	eax = to32i(byte_5127BC); //mov
	push32(ecx);
	to32i(esp+0x3FC) = eax; //mov
	eax = to32i(esp+0x3E8); //mov
	push32(ecx);
	to32i(esp+0x404) = eax; //mov
	eax = to32i(esp+0x400); //mov
	push32(eax);
	ebp = to32i(esp+0x408); //mov
	push32(ebp);
	push32(eax);
	edx = to32i(esp+0x408); //mov
	push32(edx);
	ecx = to32i(esp+0x408); //mov
	push32(ecx);
	ebx = to32i(esp+0x408); //mov
	push32(ebx);
	esi = to32i(esp+0x408); //mov
	push32(esi);
	edi = to32i(esp+0x408); //mov
	push32(edi);
	to32i(esp+0x428) = eax; //mov
	goto loc_42DC24;
loc_42DD37:
	cmp(to32i(dword_4EEBE8), (int32_t)0);
	if (jnz())
		goto loc_42DC30;
	edx = 0xCC; //mov
	eax = (int32_t)(intptr_t)(esp+0x41C); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DC30;
	ecx = to32i(esp+0x41C); //mov
	edx = 0x11; //mov
	ebx = to32i(dword_5127AC); //mov
	eax = edi; //mov
	esp -= 4; _sub_45B840(); esp += 4; //call
	edx = 0xCC; //mov
	eax = (int32_t)(intptr_t)(esp+0x408); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DC30;
	ecx = to32i(esp+0x408); //mov
	edx = 0x11; //mov
	ebx = to32i(dword_5127B8); //mov
	eax = edi; //mov
	esp -= 4; _sub_45B840(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x2A8); //lea
	eax = to32i(esp+0x41C); //mov
	esp -= 4; _sub_42E660(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x110); //lea
	eax = to32i(esp+0x408); //mov
	esp -= 4; _sub_42E660(); esp += 4; //call
	push32(esi);
	ecx = (int32_t)(intptr_t)dword_4EEB48; //mov
	ebx = (int32_t)(intptr_t)(esp+0x2AC); //lea
	push32(0x11);
	edx = (int32_t)(intptr_t)(esp+0x118); //lea
	eax = (int32_t)(intptr_t)(esp+0x90); //lea
	esp -= 4; _sub_45B5A0(); esp += 4; //call
	push32(esi);
	ecx = (int32_t)(intptr_t)dword_4EEB4C; //mov
	ebx = (int32_t)(intptr_t)(esp+0x2AC); //lea
	push32(0x11);
	edx = (int32_t)(intptr_t)(esp+0x118); //lea
	eax = (int32_t)(intptr_t)(esp+0x228); //lea
	esp -= 4; _sub_45B5A0(); esp += 4; //call
	push32(1);
	ecx = (int32_t)(intptr_t)dword_4EEB98; //mov
	ebx = (int32_t)(intptr_t)(esp+0x2AC); //lea
	push32(0x11);
	edx = (int32_t)(intptr_t)(esp+0x118); //lea
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_45B5A0(); esp += 4; //call
	push32(1);
	ecx = (int32_t)(intptr_t)dword_4EEB98; //mov
	ebx = (int32_t)(intptr_t)(esp+0x2B4); //lea
	push32(0x11);
	edx = (int32_t)(intptr_t)(esp+0x120); //lea
	eax = (int32_t)(intptr_t)(esp+0x1A0); //lea
	esp -= 4; _sub_45B5A0(); esp += 4; //call
	esi = to32i(esp+0x408); //mov
	ecx = to32i(dword_4EEBEC); //mov
	xor_(eax, eax);
	sar(ecx, (int32_t)2);
	edx = (int32_t)(intptr_t)(esi+0xC); //lea
	ebp = 1; //mov
	xor_(ebx, ebx);
loc_42DE71:
	to32i(esp+eax+0x330) = ebx; //mov
	to32i(esp+eax+0x374) = ebx; //mov
	cmp(ecx, to32i(esi+8));
	if (jle())
		goto loc_42E1A0;
	cmp(ecx, to32i(edx+8));
	if (jle())
		goto loc_42E1A0;
loc_42DE91:
	add(edx, (int32_t)0xC);
	add(eax, (int32_t)4);
	add(esi, (int32_t)0xC);
	cmp(eax, (int32_t)0x40);
	if (jnz())
		goto loc_42DE71;
	xor_(ebp, ebp);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(esi, esi);
loc_42DEA7:
	cmp(esi, to32i(esp+ebp+0x374));
	if (jz())
		goto loc_42DF40;
	edx = 0x40; //mov
	eax = (int32_t)(intptr_t)(esp+0x418); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DF40;
	cmp(esi, to32i(dword_4EEBDC));
	if (jz())
		goto loc_42E1B3;
	cmp(ebx, (int32_t)7);
	if (jle())
		goto loc_42E1B3;
	push32(esi);
	eax = to32i(byte_4EF3F4+ebp); //mov
	push32(eax);
	edx = to32i(dword_4EF3F8+ebp); //mov
	push32(edx);
	eax = to32i(byte_4EF3F0); //mov
	push32(eax);
	push32(eax);
	eax = to32i(esp+ecx+0xA0); //mov
	push32(eax);
	edx = to32i(esp+ecx+0xA0); //mov
	push32(edx);
	eax = to32i(esp+ecx+0xB0); //mov
	push32(eax);
	edx = to32i(esp+ecx+0xB0); //mov
	push32(edx);
	eax = to32i(esp+ecx+0x2D8); //mov
	push32(eax);
	edx = to32i(esp+ecx+0x2D8); //mov
	push32(edx);
	eax = to32i(esp+ecx+0x2D8); //mov
	push32(eax);
	edx = to32i(esp+ecx+0x2D8); //mov
loc_42DF33:
	push32(edx);
	eax = to32i(esp+0x44C); //mov
	esp -= 4; _sub_42E580(); esp += 4; //call
loc_42DF40:
	add(ecx, (int32_t)8);
	inc(ebx);
	add(ebp, (int32_t)4);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_42DEA7;
	cmp(to32i(edi), (int32_t)1);
	if (jnz())
		goto loc_42E20E;
loc_42DF59:
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esi = 0x40; //mov
	xor_(edi, edi);
loc_42DF64:
	cmp(edi, to32i(esp+ebx+0x374));
	if (jz())
		goto loc_42DFE2;
	eax = (int32_t)(intptr_t)(esp+0x418); //lea
	edx = esi; //mov
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42DFE2;
	eax = to32i(esp+0x420); //mov
	push32(eax);
	edx = to32i(byte_4EEBF8); //mov
	push32(edx);
	push32(edx);
	eax = to32i(byte_4EEBF4); //mov
	push32(eax);
	push32(eax);
	ebp = to32i(esp+ecx+0x128); //mov
	push32(ebp);
	eax = to32i(esp+ecx+0x128); //mov
	push32(eax);
	edx = to32i(esp+ecx+0x138); //mov
	push32(edx);
	ebp = to32i(esp+ecx+0x138); //mov
	push32(ebp);
	eax = to32i(esp+ecx+0xB8); //mov
	push32(eax);
	edx = to32i(esp+ecx+0xB8); //mov
	push32(edx);
	ebp = to32i(esp+ecx+0xB8); //mov
	push32(ebp);
	eax = to32i(esp+ecx+0xB8); //mov
	push32(eax);
	eax = to32i(esp+0x44C); //mov
	esp -= 4; _sub_42E580(); esp += 4; //call
loc_42DFE2:
	add(ebx, (int32_t)4);
	add(ecx, (int32_t)8);
	cmp(ebx, (int32_t)0x40);
	if (jnz())
		goto loc_42DF64;
	eax = esp; //mov
	xor_(edx, edx);
	xor_(ebp, ebp);
	to32i(esp+0x430) = edx; //mov
	to32i(esp+0x428) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x198); //lea
	to32i(esp+0x42C) = edx; //mov
	to32i(esp+0x424) = eax; //mov
loc_42E01A:
	eax = to32i(esp+0x42C); //mov
	cmp(to32i(esp+eax+0x330), (int32_t)0);
	if (jz())
		goto loc_42E14D;
	edx = 0x38; //mov
	eax = (int32_t)(intptr_t)(esp+0x40C); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42E14D;
	push32(0);
	ecx = (int32_t)(intptr_t)(esp+0x414); //lea
	ebx = to32i(esp+0x428); //mov
	push32(1);
	edx = to32i(esp+0x430); //mov
	eax = (int32_t)(intptr_t)(esp+0x400); //lea
	esp -= 4; _sub_45B5A0(); esp += 4; //call
	eax = to32i(esp+0x40C); //mov
	to32i(eax+4) = 3; //mov
	eax = to32i(esp+0x40C); //mov
	esi = to32i(esp+0x420); //mov
	to32i(eax+0x30) = 0; //mov
	test(esi, esi);
	if (jz())
		goto loc_42E21A;
	eax = to32i(esp+0x40C); //mov
	to32i(eax+0x34) = 0x3C23D666; //mov
loc_42E0A6:
	eax = to32i(esp+0x40C); //mov
	to8i(eax+0x2C) = 0xFF; //mov
	eax = to32i(esp+0x40C); //mov
	to8i(eax+0x2D) = 0xFF; //mov
	eax = to32i(esp+0x40C); //mov
	to8i(eax+0x2E) = 0xFF; //mov
	eax = to32i(esp+0x40C); //mov
	to8i(eax+0x2F) = 0xFF; //mov
	edx = to32i(esp+0x42C); //mov
	eax = to32i(esp+0x40C); //mov
	edx = to32i(dword_4EEB50+edx); //mov
	edi = to32i(dword_4EEBDC); //mov
	to32i(eax+0x28) = edx; //mov
	test(edi, edi);
	if (jz())
		goto loc_42E22D;
	cmp(to32i(esp+0x430), (int32_t)7);
	if (jle())
		goto loc_42E22D;
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+0x3F8); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp+0x220); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp+0x228); //lea
loc_42E148:
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
loc_42E14D:
	ecx = to32i(esp+0x424); //mov
	ebx = to32i(esp+0x42C); //mov
	esi = to32i(esp+0x430); //mov
	edx = to32i(esp+0x428); //mov
	add(ebp, (int32_t)8);
	add(ecx, (int32_t)8);
	add(ebx, (int32_t)4);
	inc(esi);
	add(edx, (int32_t)8);
	to32i(esp+0x424) = ecx; //mov
	to32i(esp+0x42C) = ebx; //mov
	to32i(esp+0x430) = esi; //mov
	to32i(esp+0x428) = edx; //mov
	cmp(esi, (int32_t)0x10);
	if (jl())
		goto loc_42E01A;
	goto loc_42DC30;
loc_42E1A0:
	to32i(esp+eax+0x330) = ebp; //mov
	to32i(esp+eax+0x374) = ebp; //mov
	goto loc_42DE91;
loc_42E1B3:
	push32(esi);
	eax = to32i(dword_4EF3F8+ebp); //mov
	push32(eax);
	edx = to32i(byte_4EF3F0); //mov
	push32(edx);
	push32(edx);
	edx = to32i(byte_4EF3F4+ebp); //mov
	push32(edx);
	eax = to32i(esp+ecx+0xA8); //mov
	push32(eax);
	edx = to32i(esp+ecx+0xA8); //mov
	push32(edx);
	eax = to32i(esp+ecx+0x2D0); //mov
	push32(eax);
	edx = to32i(esp+ecx+0x2D0); //mov
	push32(edx);
	eax = to32i(esp+ecx+0x2D0); //mov
	push32(eax);
	edx = to32i(esp+ecx+0x2D0); //mov
	push32(edx);
	eax = to32i(esp+ecx+0xB8); //mov
	push32(eax);
	edx = to32i(esp+ecx+0xB8); //mov
	goto loc_42DF33;
loc_42E20E:
	eax = edi; //mov
	esp -= 4; _sub_42CFB0(); esp += 4; //call
	goto loc_42DF59;
loc_42E21A:
	eax = to32i(esp+0x40C); //mov
	to32i(eax+0x34) = 0x3F7FFF00; //mov
	goto loc_42E0A6;
loc_42E22D:
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+0x3F8); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp+0x228); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x40C); //mov
	esi = (int32_t)(intptr_t)(esp+ebp+0x220); //lea
	goto loc_42E148;
}
Fn(void) Game::_sub_42E280()
{
	push32(ebx);
	push32(edx);
	push32(edi);
	edx = eax; //mov
	cmp(to32i(dword_51221C), (int32_t)4);
	if (jnz())
		goto loc_42E2D9;
	ebx = to32i(dword_5117C4); //mov
	cmp(ebx, (int32_t)0x447);
	if (jle())
		goto loc_42E2A4;
	cmp(ebx, (int32_t)0x556);
	if (jl())
		goto loc_42E2DF;
loc_42E2A4:
	edi = to32i(dword_5117C4); //mov
	cmp(edi, (int32_t)0x3F5);
	if (jle())
		goto loc_42E2C6;
	cmp(edi, (int32_t)0x446);
	if (jge())
		goto loc_42E2C6;
	eax = (int32_t)(intptr_t)(edx+0x14); //lea
	esp -= 4; _sub_42E3B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_42E2DF;
loc_42E2C6:
	eax = to32i(dword_5117C4); //mov
	cmp(eax, (int32_t)0x555);
	if (jle())
		goto loc_42E2D9;
	cmp(eax, (int32_t)0x59A);
	if (jl())
		goto loc_42E2E8;
loc_42E2D9:
	xor_(eax, eax);
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_42E2DF:
	eax = 1; //mov
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_42E2E8:
	eax = (int32_t)(intptr_t)(edx+0x14); //lea
	esp -= 4; _sub_42E300(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42E2D9;
	eax = 1; //mov
	pop32(edi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_42E300()
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
	if (jl())
		goto loc_42E398;
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_42E398:
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42E3B0()
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
		goto loc_42E44B;
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_42E44B:
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42E460()
{
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = esi; //mov
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42E4A5;
	eax = to32i(esp+8); //mov
	to32i(eax+4) = 0x1B; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp+8); //mov
	to32i(eax+8) = 0xA; //mov
	eax = to32i(esp+8); //mov
	to32i(eax+0xC) = 2; //mov
loc_42E4A5:
	esi = esp; //mov
	edi = ecx; //mov
	esp -= 4; _sub_46FCF0(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_42E4C0()
{
	push32(edx);
	sub(esp, (int32_t)4);
	esp -= 4; _sub_46FD80(); esp += 4; //call
	edx = 0x10; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_42E4DE;
	add(esp, (int32_t)4);
	pop32(edx);
	return;
loc_42E4DE:
	eax = to32i(esp); //mov
	to32i(eax+4) = 0x1B; //mov
	eax = to32i(esp); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp); //mov
	to32i(eax+8) = 0xA; //mov
	eax = to32i(esp); //mov
	to32i(eax+0xC) = 0; //mov
	add(esp, (int32_t)4);
	pop32(edx);
}
Fn(void) Game::_sub_42E510()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	cmp(to32i(eax), (int32_t)1);
	if (jnz())
		goto loc_42E54A;
	esi = 0x6E; //mov
	edi = 0x1E6; //mov
	ebp = 0x27C; //mov
	ebx = 0x28; //mov
	to32i(byte_5127BC) = esi; //mov
	to32i(dword_5127B0) = edi; //mov
	to32i(dword_5127A8) = ebp; //mov
	to32i(dword_5127B4) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_42E54A:
	push32(edx);
	push32(ecx);
	push32(byte_5127BC);
	ecx = (int32_t)(intptr_t)dword_5127A8; //mov
	ebx = (int32_t)(intptr_t)dword_5127B4; //mov
	edx = (int32_t)(intptr_t)dword_5127B0; //mov
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_42A270(); esp += 4; //call
	eax = to32i(dword_5127B4); //mov
	add(to32i(byte_5127BC), eax);
	pop32(ecx);
	pop32(edx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_42E580()
{
	push32(edx);
	push32(esi);
	push32(edi);
	edx = to32i(esp+0x40); //mov
	to32i(eax+4) = 7; //mov
	test(edx, edx);
	if (jz())
		goto loc_42E632;
	to32i(eax+0x3C) = 0x3C23D666; //mov
	to32i(eax+0x38) = 0; //mov
loc_42E5A4:
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)(eax+8); //lea
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)(eax+0x10); //lea
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
	edi = (int32_t)(intptr_t)(eax+0x18); //lea
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(esp+0x28); //lea
	edi = (int32_t)(intptr_t)(eax+0x20); //lea
	movsd();
	movsd();
	to8i(eax+0x28) = 0xFF; //mov
	to8i(eax+0x2C) = 0xFF; //mov
	to8i(eax+0x30) = 0xFF; //mov
	dl = to8i(esp+0x32); //mov
	to8i(eax+0x34) = 0xFF; //mov
	to8i(eax+0x29) = dl; //mov
	dl = to8i(esp+0x31); //mov
	to8i(eax+0x2A) = dl; //mov
	dl = to8i(esp+0x30); //mov
	to8i(eax+0x2B) = dl; //mov
	dl = to8i(esp+0x36); //mov
	to8i(eax+0x2D) = dl; //mov
	dl = to8i(esp+0x35); //mov
	to8i(eax+0x2E) = dl; //mov
	dl = to8i(esp+0x34); //mov
	to8i(eax+0x2F) = dl; //mov
	dl = to8i(esp+0x3A); //mov
	to8i(eax+0x31) = dl; //mov
	dl = to8i(esp+0x39); //mov
	to8i(eax+0x32) = dl; //mov
	dl = to8i(esp+0x38); //mov
	to8i(eax+0x33) = dl; //mov
	dl = to8i(esp+0x3E); //mov
	to8i(eax+0x35) = dl; //mov
	dl = to8i(esp+0x3D); //mov
	to8i(eax+0x36) = dl; //mov
	dl = to8i(esp+0x3C); //mov
	to8i(eax+0x37) = dl; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	esp += 0x34; return;
loc_42E632:
	to32i(eax+0x3C) = 0x3F7FFF00; //mov
	to32i(eax+0x38) = edx; //mov
	goto loc_42E5A4;
}
Fn(void) Game::_sub_42E650()
{
	xor_(to8i(dword_4EEBE8), (int8_t)1);
}
Fn(void) Game::_sub_42E660()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)0x44);
	esi = eax; //mov
	ebx = edx; //mov
	xor_(edx, edx);
loc_42E66C:
	ecx = to32i(eax+8); //mov
	add(eax, (int32_t)0xC);
	to32i(esp+edx) = ecx; //mov
	ecx = to32i(dword_4EEBE4); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
	cmp(edx, (int32_t)0x44);
	if (jnz())
		goto loc_42E66C;
	ecx = (int32_t)(intptr_t)dword_4D5268; //mov
	eax = 0x11; //mov
	edx = esi; //mov
	esp -= 4; _sub_45B690(); esp += 4; //call
	edx = esi; //mov
	xor_(eax, eax);
loc_42E69B:
	add(edx, (int32_t)0xC);
	ecx = to32i(esp+eax); //mov
	add(eax, (int32_t)4);
	to32i(edx-4) = ecx; //mov
	cmp(eax, (int32_t)0x44);
	if (jnz())
		goto loc_42E69B;
	add(esp, (int32_t)0x44);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42E6C0()
{
	eax = to32i(dword_5127AC); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_5127B8); //mov
	_sub_4848FC(); return; //jmp
}
