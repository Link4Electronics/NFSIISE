#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_482770()
{
	push32(esi);
	esi = eax; //mov
	cmp(eax, to32i(dword_5636E8));
	if (jz())
		goto loc_4827A3;
	push32(edx);
	push32(ecx);
	push32(ebx);
	ebx = esi; //mov
	xor_(eax, eax);
	imul32(edx, esi, 0);
loc_482785:
	ecx = edx; //mov
	inc(eax);
	sar(ecx, (int32_t)8);
	add(edx, ebx);
	byte_5635E3[eax] = cl; //mov
	cmp(eax, (int32_t)0x100);
	if (jl())
		goto loc_482785;
	to32i(dword_5636E8) = esi; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
loc_4827A3:
	pop32(esi);
}
Fn(void) Game::_sub_4827A8()
{
	push32(ebx);
	xor_(ebx, ebx);
	bl = to8i(eax); //mov
	bl = (int32_t)(intptr_t)byte_5635E4[ebx]; //mov
	to8i(edx) = bl; //mov
	xor_(ebx, ebx);
	bl = to8i(eax+1); //mov
	bl = (int32_t)(intptr_t)byte_5635E4[ebx]; //mov
	to8i(edx+1) = bl; //mov
	xor_(ebx, ebx);
	bl = to8i(eax+2); //mov
	bl = (int32_t)(intptr_t)byte_5635E4[ebx]; //mov
	to8i(edx+2) = bl; //mov
	al = to8i(eax+3); //mov
	and_(eax, (int32_t)0xFF);
	al = (int32_t)(intptr_t)byte_5635E4[eax]; //mov
	to8i(edx+3) = al; //mov
	pop32(ebx);
}
Fn(void) Game::_sub_4827E4()
{
	push32(ecx);
	sub(esp, (int32_t)4);
	xor_(ecx, ecx);
	cl = to8i(eax); //mov
	imul32(ecx, ebx);
	sar(ecx, (int32_t)8);
	to32i(esp) = ecx; //mov
	cl = to8i(esp); //mov
	to8i(edx) = cl; //mov
	xor_(ecx, ecx);
	cl = to8i(eax+1); //mov
	imul32(ecx, ebx);
	sar(ecx, (int32_t)8);
	to32i(esp) = ecx; //mov
	cl = to8i(esp); //mov
	to8i(edx+1) = cl; //mov
	xor_(ecx, ecx);
	cl = to8i(eax+2); //mov
	imul32(ecx, ebx);
	sar(ecx, (int32_t)8);
	to32i(esp) = ecx; //mov
	cl = to8i(esp); //mov
	to8i(edx+2) = cl; //mov
	al = to8i(eax+3); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, ebx);
	sar(eax, (int32_t)8);
	to8i(edx+3) = al; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
}
Fn(void) Game::_sub_48283C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
loc_482849:
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4827A8(); esp += 4; //call
	al = 0xFF; //mov
	dh = to8i(esp+2); //mov
	ah = to8i(esp+3); //mov
	bl = to8i(esp); //mov
	sub(al, ah);
	dl = to8i(esp+1); //mov
	to8i(esp+0xC) = al; //mov
	al = to8i(esi); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	ebp = eax; //mov
	shr(ebp, (int32_t)0x10);
	and_(ebp, (int32_t)0xFF);
	to32i(esp+4) = eax; //mov
	to32i(esp+8) = ebp; //mov
	ebp = to32i(esp+4); //mov
	shr(ebp, (int32_t)8);
	and_(ebp, (int32_t)0xFF);
	ah = to8i(esp+8); //mov
	to32i(esp+8) = ebp; //mov
	to8i(esp+0x10) = al; //mov
	bh = to8i(esp+8); //mov
	al = ah; //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+8) = eax; //mov
	xor_(eax, eax);
	ebp = to32i(esp+8); //mov
	al = to8i(esp+0xC); //mov
	imul32(ebp, eax);
	sar(ebp, (int32_t)8);
	to32i(esp+4) = ebp; //mov
	ebp = (uint8_t)dh; //movzx
	add(ebp, to32i(esp+4));
	to32i(esp+8) = ebp; //mov
	ebp = (uint8_t)bh; //movzx
	imul32(ebp, eax);
	sar(ebp, (int32_t)8);
	dh = to8i(esp+8); //mov
	to32i(esp+4) = ebp; //mov
	ebp = (uint8_t)dl; //movzx
	add(ebp, to32i(esp+4));
	to32i(esp+8) = ebp; //mov
	ebp = (uint8_t)to8i(esp+0x10); //movzx
	imul32(eax, ebp);
	dl = to8i(esp+8); //mov
	sar(eax, (int32_t)8);
	and_(ebx, (int32_t)0xFF);
	add(ebx, eax);
	xor_(eax, eax);
	al = dh; //mov
	shl(eax, (int32_t)0x10);
	and_(edx, (int32_t)0xFF);
	shl(edx, (int32_t)8);
	or_(edx, eax);
	xor_(eax, eax);
	al = bl; //mov
	inc(esi);
	or_(eax, edx);
	add(ecx, (int32_t)4);
	esp -= 4; _sub_48266C(); esp += 4; //call
	to8i(esi-1) = al; //mov
	dec(edi);
	if (jnz())
		goto loc_482849;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482938()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
loc_482945:
	edx = esp; //mov
	eax = edi; //mov
	esp -= 4; _sub_4827A8(); esp += 4; //call
	ebx = to32i(esp); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4829CC;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4829A9;
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
loc_4829A9:
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
loc_4829CC:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	add(edi, (int32_t)4);
	dec(ebp);
	if (jnz())
		goto loc_482945;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4829E4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
loc_4829F1:
	edx = esp; //mov
	eax = edi; //mov
	esp -= 4; _sub_4827A8(); esp += 4; //call
	ebx = to32i(esp); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_482A70;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_482A4D;
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
loc_482A4D:
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
loc_482A70:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	add(edi, (int32_t)4);
	dec(ebp);
	if (jnz())
		goto loc_4829F1;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482A88()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	esi = eax; //mov
	ecx = edx; //mov
loc_482A92:
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4827A8(); esp += 4; //call
	al = 0xFF; //mov
	dl = to8i(ecx+1); //mov
	ah = to8i(esp+3); //mov
	to8i(esp+0x10) = dl; //mov
	dl = to8i(ecx); //mov
	sub(al, ah);
	to8i(esp+0x14) = dl; //mov
	ah = to8i(ecx+2); //mov
	xor_(edx, edx);
	dl = ah; //mov
	and_(eax, (int32_t)0xFF);
	imul32(edx, eax);
	edi = (uint8_t)to8i(esp+2); //movzx
	sar(edx, (int32_t)8);
	add(edi, edx);
	to32i(esp+4) = edi; //mov
	dl = to8i(esp+4); //mov
	to8i(esp+8) = dl; //mov
	xor_(edx, edx);
	dl = to8i(esp+0x10); //mov
	imul32(edx, eax);
	edi = (uint8_t)to8i(esp+1); //movzx
	sar(edx, (int32_t)8);
	add(edi, edx);
	to32i(esp+4) = edi; //mov
	dl = to8i(esp+4); //mov
	to8i(esp+0xC) = dl; //mov
	xor_(edx, edx);
	dl = to8i(esp+0x14); //mov
	imul32(eax, edx);
	xor_(edx, edx);
	sar(eax, (int32_t)8);
	dl = to8i(esp); //mov
	add(eax, edx);
	add(ecx, (int32_t)3);
	ah = to8i(esp+8); //mov
	to8i(ecx-1) = ah; //mov
	ah = to8i(esp+0xC); //mov
	to8i(ecx-2) = ah; //mov
	add(esi, (int32_t)4);
	to8i(ecx-3) = al; //mov
	dec(ebx);
	if (jnz())
		goto loc_482A92;
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482B2C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	esi = eax; //mov
	ecx = edx; //mov
loc_482B36:
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4827A8(); esp += 4; //call
	ah = 0xFF; //mov
	sub(ah, to8i(esp+3));
	dl = to8i(ecx+1); //mov
	to8i(esp+0x10) = dl; //mov
	dl = to8i(ecx); //mov
	al = to8i(ecx+2); //mov
	to8i(esp+0x14) = dl; //mov
	xor_(edx, edx);
	dl = al; //mov
	al = ah; //mov
	and_(eax, (int32_t)0xFF);
	imul32(edx, eax);
	edi = (uint8_t)to8i(esp+2); //movzx
	sar(edx, (int32_t)8);
	add(edi, edx);
	to32i(esp+4) = edi; //mov
	dl = to8i(esp+4); //mov
	to8i(esp+8) = dl; //mov
	xor_(edx, edx);
	dl = to8i(esp+0x10); //mov
	imul32(edx, eax);
	edi = (uint8_t)to8i(esp+1); //movzx
	sar(edx, (int32_t)8);
	add(edi, edx);
	to32i(esp+4) = edi; //mov
	dl = to8i(esp+4); //mov
	to8i(esp+0xC) = dl; //mov
	xor_(edx, edx);
	dl = to8i(esp+0x14); //mov
	imul32(eax, edx);
	xor_(edx, edx);
	sar(eax, (int32_t)8);
	dl = to8i(esp); //mov
	add(ecx, (int32_t)4);
	add(eax, edx);
	to8i(ecx-1) = 0xFF; //mov
	ah = to8i(esp+8); //mov
	to8i(ecx-2) = ah; //mov
	ah = to8i(esp+0xC); //mov
	to8i(ecx-3) = ah; //mov
	add(esi, (int32_t)4);
	to8i(ecx-4) = al; //mov
	dec(ebx);
	if (jnz())
		goto loc_482B36;
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482BD4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
loc_482BDE:
	xor_(ebx, ebx);
	bl = to8i(ebp+0); //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	ebx = to32i(dword_5636E4); //mov
	ebx = to32i(ebx+eax); //mov
	inc(ebp);
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_482C67;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_482C44;
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
loc_482C44:
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
loc_482C67:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	dec(edi);
	if (jnz())
		goto loc_482BDE;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482C78()
{
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x408);
	ebp = eax; //mov
	to32i(esp+0x400) = edx; //mov
	to32i(esp+0x404) = ebx; //mov
	edi = ecx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	xor_(edx, edx);
	ecx = 0x7D; //mov
	to32i(dword_4DAD7C) = edx; //mov
	to32i(dword_4DAD84) = ecx; //mov
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_482D4C;
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jnz())
		goto loc_482D4C;
	push32(esi);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = ebp; //mov
	esp -= 4; _sub_499CF8(); esp += 4; //call
	to32i(dword_5636E4) = eax; //mov
	cmp(edi, (int32_t)0xFF);
	if (jge())
		goto loc_482D12;
	esi = (int32_t)(intptr_t)(esp+4); //lea
	xor_(ecx, ecx);
loc_482CE5:
	edx = to32i(dword_5636E4); //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	ebx = edi; //mov
	add(eax, edx);
	edx = esi; //mov
	inc(ecx);
	esp -= 4; _sub_4827E4(); esp += 4; //call
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x100);
	if (jl())
		goto loc_482CE5;
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to32i(dword_5636E4) = eax; //mov
loc_482D12:
	ebx = (int32_t)(intptr_t)sub_482BD4; //mov
	esi = 0x7B; //mov
	to32i(dword_4DAD7C) = ebx; //mov
	to32i(dword_4DAD84) = esi; //mov
	pop32(esi);
loc_482D29:
	ecx = (int32_t)(intptr_t)off_4DAD64; //mov
	ebx = to32i(esp+0x404); //mov
	edx = to32i(esp+0x400); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	add(esp, (int32_t)0x408);
	pop32(ebp);
	pop32(edi);
	return;
loc_482D4C:
	eax = edi; //mov
	esp -= 4; _sub_482770(); esp += 4; //call
	goto loc_482D29;
}
Fn(void) Game::_sub_482D58()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = edx; //mov
	esi = to32i(eax+0xC); //mov
	ebx = to32i(eax+0xC); //mov
	shl(esi, (int32_t)0x14);
	shl(ebx, (int32_t)4);
	sar(esi, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	edx = esi; //mov
	esp -= 4; _sub_482C78(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_482D7C()
{
	push32(esi);
	esi = to32i(eax+8); //mov
	sar(esi, (int32_t)0x10);
	sub(ebx, esi);
	esi = to32i(eax+6); //mov
	sar(esi, (int32_t)0x10);
	sub(edx, esi);
	esp -= 4; _sub_482C78(); esp += 4; //call
	pop32(esi);
}
Fn(void) Game::_sub_482DA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	edx = to32i(eax+0x34); //mov
	test(edx, edx);
	if (jnz())
		goto loc_482DD4;
loc_482DAD:
	ebx = to32i(ecx+0x2C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_482DBB;
	eax = ebx; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
loc_482DBB:
	esi = to32i(ecx+0x30); //mov
	test(esi, esi);
	if (jnz())
		goto loc_482DE0;
	eax = ecx; //mov
	to32i(ecx) = 0x57494E6B; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_482DD4:
	eax = (int32_t)(intptr_t)dword_563900; //mov
	esp -= 4; _sub_4920F8(); esp += 4; //call
	goto loc_482DAD;
loc_482DE0:
	eax = esi; //mov
	esp -= 4; _sub_49B24C(); esp += 4; //call
	eax = ecx; //mov
	to32i(ecx) = 0x57494E6B; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_482E00()
{
	push32(esi);
	test(eax, eax);
	if (jl())
		goto loc_482E4E;
loc_482E05:
	test(ebx, ebx);
	if (jl())
		goto loc_482E52;
loc_482E09:
	esi = to32i(dword_4DB244); //mov
	cmp(eax, esi);
	if (jle())
		goto loc_482E15;
	eax = esi; //mov
loc_482E15:
	cmp(ebx, esi);
	if (jle())
		goto loc_482E1B;
	ebx = esi; //mov
loc_482E1B:
	test(edx, edx);
	if (jl())
		goto loc_482E56;
loc_482E1F:
	test(ecx, ecx);
	if (jl())
		goto loc_482E5A;
loc_482E23:
	esi = to32i(dword_4DB248); //mov
	cmp(edx, esi);
	if (jle())
		goto loc_482E2F;
	edx = esi; //mov
loc_482E2F:
	cmp(ecx, esi);
	if (jle())
		goto loc_482E35;
	ecx = esi; //mov
loc_482E35:
	to32i(dword_4DB24C) = eax; //mov
	to32i(dword_4DB254) = ebx; //mov
	to32i(dword_4DB250) = edx; //mov
	to32i(dword_4DB258) = ecx; //mov
	pop32(esi);
	return;
loc_482E4E:
	xor_(eax, eax);
	goto loc_482E05;
loc_482E52:
	xor_(ebx, ebx);
	goto loc_482E09;
loc_482E56:
	xor_(edx, edx);
	goto loc_482E1F;
loc_482E5A:
	xor_(ecx, ecx);
	goto loc_482E23;
}
Fn(void) Game::_sub_482E60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = ebx; //mov
	ebx = to32i(edx); //mov
	edi = to32i(eax+8); //mov
	xor_(edx, edx);
	test(edi, edi);
	if (jle())
		goto loc_482E83;
loc_482E73:
	cmp(ebx, to32i(eax+0x10));
	if (jz())
		goto loc_482E8E;
	inc(edx);
	ebp = to32i(ecx+8); //mov
	add(eax, (int32_t)8);
	cmp(edx, ebp);
	if (jl())
		goto loc_482E73;
loc_482E83:
	test(esi, esi);
	if (jnz())
		goto loc_482E98;
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_482E8E:
	eax = to32i(eax+0x14); //mov
	add(eax, ecx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_482E98:
	eax = ecx; //mov
	esp -= 4; _sub_484EA0(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482EA8()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_482E60(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_482EB4()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_482E60(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_nullsub_63()
{
	return;
}
Fn(void) Game::_sub_482ED4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
loc_482EE1:
	cmp(to8i(ecx+3), (int8_t)0);
	if (jnz())
		goto loc_482EF6;
	add(ecx, (int32_t)4);
	inc(esi);
	dec(edi);
	if (jnz())
		goto loc_482EE1;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_482EF6:
	al = to8i(esi); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	edx = eax; //mov
	test(eax, (int32_t)0xFF000000);
	if (jz())
		goto loc_482FB7;
	dh = 0xFF; //mov
	ebp = eax; //mov
	bl = to8i(ecx+3); //mov
	shr(ebp, (int32_t)0x10);
	shr(eax, (int32_t)8);
	sub(dh, bl);
	and_(eax, (int32_t)0xFF);
	bl = to8i(ecx+2); //mov
	and_(ebp, (int32_t)0xFF);
	to32i(esp) = eax; //mov
	bh = to8i(ecx); //mov
	al = to8i(esp); //mov
	to32i(esp) = ebp; //mov
	to8i(esp+0xC) = bh; //mov
	bh = to8i(esp); //mov
	to8i(esp+0x10) = al; //mov
	xor_(eax, eax);
	al = bh; //mov
	to8i(esp+4) = dh; //mov
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	ebp = to32i(esp); //mov
	al = to8i(esp+4); //mov
	imul32(ebp, eax);
	dh = to8i(ecx+1); //mov
	sar(ebp, (int32_t)8);
	to8i(esp+8) = dl; //mov
	and_(ebx, (int32_t)0xFF);
	add(ebx, ebp);
	ebp = (uint8_t)to8i(esp+0x10); //movzx
	imul32(ebp, eax);
	sar(ebp, (int32_t)8);
	dl = dh; //mov
	and_(edx, (int32_t)0xFF);
	add(edx, ebp);
	ebp = (uint8_t)to8i(esp+8); //movzx
	imul32(eax, ebp);
	sar(eax, (int32_t)8);
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	ebp = to32i(esp); //mov
	al = to8i(esp+0xC); //mov
	add(eax, ebp);
	to8i(esp+0xC) = al; //mov
	xor_(eax, eax);
	al = bl; //mov
	ebx = eax; //mov
	xor_(eax, eax);
	shl(ebx, (int32_t)0x10);
	al = dl; //mov
	xor_(edx, edx);
	shl(eax, (int32_t)8);
	dl = to8i(esp+0xC); //mov
	or_(eax, ebx);
	or_(edx, eax);
loc_482FB7:
	eax = edx; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	to8i(esi) = al; //mov
	add(ecx, (int32_t)4);
	inc(esi);
	dec(edi);
	if (jnz())
		goto loc_482EE1;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_482FD4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
loc_482FDE:
	ebx = to32i(edi); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_48305B;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_483038;
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
loc_483038:
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
loc_48305B:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	add(edi, (int32_t)4);
	dec(ebp);
	if (jnz())
		goto loc_482FDE;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_483070()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
loc_48307A:
	ebx = to32i(edi); //mov
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_4830EF;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4830CC;
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
loc_4830CC:
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
loc_4830EF:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	add(edi, (int32_t)4);
	dec(ebp);
	if (jnz())
		goto loc_48307A;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_483100()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	edi = ebx; //mov
loc_483109:
	cmp(to8i(eax+3), (int8_t)0);
	if (jnz())
		goto loc_483120;
loc_48310F:
	add(eax, (int32_t)4);
	add(edx, (int32_t)3);
	dec(edi);
	if (jnz())
		goto loc_483109;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_483120:
	cl = to8i(eax+1); //mov
	bl = 0xFF; //mov
	ch = to8i(edx+2); //mov
	bh = to8i(eax+3); //mov
	to8i(esp+0x10) = ch; //mov
	sub(bl, bh);
	esi = (uint8_t)to8i(esp+0x10); //movzx
	to8i(esp+0xC) = bl; //mov
	to32i(esp) = esi; //mov
	esi = (uint8_t)to8i(esp+0xC); //movzx
	ebp = to32i(esp); //mov
	imul32(ebp, esi);
	bl = to8i(eax+2); //mov
	sar(ebp, (int32_t)8);
	bh = to8i(eax); //mov
	to32i(esp) = ebp; //mov
	ebp = (uint8_t)bl; //movzx
	ch = to8i(edx+1); //mov
	add(ebp, to32i(esp));
	to8i(esp+8) = ch; //mov
	to32i(esp) = ebp; //mov
	ebp = (uint8_t)to8i(esp+8); //movzx
	imul32(ebp, esi);
	ch = to8i(edx); //mov
	to8i(esp+4) = ch; //mov
	sar(ebp, (int32_t)8);
	bl = to8i(esp); //mov
	and_(ecx, (int32_t)0xFF);
	add(ecx, ebp);
	ebp = (uint8_t)to8i(esp+4); //movzx
	imul32(esi, ebp);
	sar(esi, (int32_t)8);
	to32i(esp) = esi; //mov
	ebp = to32i(esp); //mov
	esi = (uint8_t)bh; //movzx
	add(ebp, esi);
	to32i(esp) = ebp; //mov
	to8i(edx+1) = cl; //mov
	bh = to8i(esp); //mov
	to8i(edx+2) = bl; //mov
	to8i(edx) = bh; //mov
	goto loc_48310F;
}
Fn(void) Game::_sub_4831A8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	esi = ebx; //mov
loc_4831B1:
	cmp(to8i(eax+3), (int8_t)0);
	if (jnz())
		goto loc_4831C8;
loc_4831B7:
	add(eax, (int32_t)4);
	add(edx, (int32_t)4);
	dec(esi);
	if (jnz())
		goto loc_4831B1;
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4831C8:
	bl = to8i(eax+2); //mov
	bh = to8i(eax+1); //mov
	to8i(esp+0x14) = bh; //mov
	bh = to8i(eax); //mov
	to8i(esp+0x10) = bh; //mov
	cmp(to8i(edx+3), (int8_t)0);
	if (jz())
		goto loc_483283;
	bh = 0xFF; //mov
	sub(bh, to8i(eax+3));
	cl = to8i(edx+2); //mov
	ch = to8i(edx); //mov
	to8i(esp+8) = bh; //mov
	to8i(esp+0xC) = ch; //mov
	edi = (uint8_t)cl; //movzx
	xor_(ecx, ecx);
	cl = to8i(esp+8); //mov
	imul32(edi, ecx);
	bh = to8i(edx+1); //mov
	ebp = (uint8_t)bl; //movzx
	sar(edi, (int32_t)8);
	add(ebp, edi);
	to32i(esp+4) = ebp; //mov
	bl = to8i(esp+4); //mov
	edi = (uint8_t)bh; //movzx
	imul32(edi, ecx);
	ebp = (uint8_t)to8i(esp+0x14); //movzx
	sar(edi, (int32_t)8);
	add(ebp, edi);
	edi = (uint8_t)to8i(esp+0xC); //movzx
	imul32(edi, ecx);
	sar(edi, (int32_t)8);
	to32i(esp+4) = ebp; //mov
	to32i(esp) = edi; //mov
	edi = (uint8_t)to8i(esp+0x10); //movzx
	ebp = to32i(esp); //mov
	add(ebp, edi);
	to32i(esp) = ebp; //mov
	edi = (uint8_t)to8i(edx+3); //movzx
	ebp = 0xFF; //mov
	sub(ebp, edi);
	imul32(ecx, ebp);
	bh = to8i(esp+4); //mov
	edi = 0xFF; //mov
	sar(ecx, (int32_t)8);
	to8i(esp+0x14) = bh; //mov
	sub(edi, ecx);
	bh = to8i(esp); //mov
	ecx = edi; //mov
	to8i(esp+0x10) = bh; //mov
loc_48326B:
	to8i(edx+3) = cl; //mov
	to8i(edx+2) = bl; //mov
	bl = to8i(esp+0x14); //mov
	to8i(edx+1) = bl; //mov
	bl = to8i(esp+0x10); //mov
	to8i(edx) = bl; //mov
	goto loc_4831B7;
loc_483283:
	cl = to8i(eax+3); //mov
	goto loc_48326B;
}
Fn(void) Game::_sub_483288()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
loc_483292:
	xor_(ebx, ebx);
	bl = to8i(ebp+0); //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	ebx = to32i(dword_5636EC); //mov
	ebx = to32i(ebx+eax); //mov
	inc(ebp);
	cmp(ebx, (int32_t)0x10000000);
	if (jb())
		goto loc_483300;
	cmp(ebx, (int32_t)0xFC000000);
	if (jnb())
		goto loc_4832FD;
	xor_(eax, eax);
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
	shl(edx, (int32_t)8);
	ecx = eax; //mov
	shr(eax, (int32_t)0x10);
	and_(edx, (int32_t)0xF800);
	shr(ecx, (int32_t)8);
	and_(eax, (int32_t)0x7E0);
	add(ebx, edx);
	and_(ecx, (int32_t)0x1F);
	add(ebx, eax);
	add(ebx, ecx);
loc_4832FD:
	to16i(esi) = bx; //mov
loc_483300:
	esi = (int32_t)(intptr_t)(esi+2); //lea
	dec(edi);
	if (jnz())
		goto loc_483292;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48330C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x400);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	xor_(edx, edx);
	ecx = 0x7D; //mov
	to32i(dword_4DADA0) = edx; //mov
	to32i(dword_4DADA8) = ecx; //mov
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_483369;
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jnz())
		goto loc_483369;
	edx = esp; //mov
	eax = esi; //mov
	ebp = (int32_t)(intptr_t)sub_483288; //mov
	esp -= 4; _sub_499EC0(); esp += 4; //call
	to32i(dword_5636EC) = eax; //mov
	eax = 0x7B; //mov
	to32i(dword_4DADA0) = ebp; //mov
	to32i(dword_4DADA8) = eax; //mov
loc_483369:
	ecx = (int32_t)(intptr_t)off_4DAD88; //mov
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	add(esp, (int32_t)0x400);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_483384()
{
	push32(ebx);
	push32(edx);
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_48330C(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4833A0()
{
	push32(ecx);
	ecx = to32i(eax+8); //mov
	sar(ecx, (int32_t)0x10);
	sub(ebx, ecx);
	ecx = to32i(eax+6); //mov
	sar(ecx, (int32_t)0x10);
	sub(edx, ecx);
	esp -= 4; _sub_48330C(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4833C7()
{
	push32(edx);
	edx = to32i(dword_4DADB0); //mov
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4DADB0) = eax; //mov
	sub(eax, edx);
	pop32(edx);
}
Fn(void) Game::_sub_4833E7()
{
	add(eax, to32i(dword_5637F4));
	to32i(dword_4DADAC) = eax; //mov
}
Fn(void) Game::_sub_4833F3()
{
loc_sub_4833F3:
	eax = to32i(dword_5637F4); //mov
	sub(eax, to32i(dword_4DADAC));
	if (js())
		goto loc_sub_4833F3;
}
Fn(void) Game::_sub_483401()
{
	eax = to32i(dword_5637F4); //mov
	sub(eax, to32i(dword_4DADAC));
	sbb(eax, eax);
	inc(eax);
}
Fn(void) Game::_sub_483410()
{
	add(eax, to32i(dword_5637F4));
	push32(eax);
loc_483417:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	sub(eax, to32i(esp));
	if (js())
		goto loc_483417;
	add(esp, (int32_t)4);
}
Fn(void) Game::_sub_483430()
{
	sar(ebx, (int32_t)1);
	_sub_4A14D4(); return; //jmp
}
Fn(void) Game::_sub_483438()
{
	add(ebx, ebx);
	_sub_4A14D4(); return; //jmp
}
Fn(void) Game::_sub_483440()
{
	push32(ecx);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A14D4(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_483458()
{
	shl(ebx, (int32_t)2);
	_sub_4A14D4(); return; //jmp
}
Fn(void) Game::_sub_483460()
{
	push32(ecx);
	ecx = (int32_t)(intptr_t)off_4DADB4; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_483470()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = (int32_t)(intptr_t)off_4DADB4; //mov
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483494()
{
	push32(ecx);
	ecx = to32i(eax+8); //mov
	sar(ecx, (int32_t)0x10);
	sub(ebx, ecx);
	ecx = to32i(eax+6); //mov
	sar(ecx, (int32_t)0x10);
	sub(edx, ecx);
	ecx = (int32_t)(intptr_t)off_4DADB4; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4834C4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = (int32_t)(intptr_t)off_4DADB4; //mov
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_strcmp_()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	cmp(eax, edx);
	if (jz())
		goto loc_483794;
loc_483728:
	eax = to32i(ebx); //mov
	ecx = to32i(edx); //mov
	cmp(ecx, eax);
	if (jnz())
		goto loc_483799;
	ecx = ~ecx;
	add(eax, (int32_t)0xFEFEFEFF);
	and_(eax, ecx);
	and_(eax, (int32_t)0x80808080);
	if (jnz())
		goto loc_483794;
	eax = to32i(ebx+4); //mov
	ecx = to32i(edx+4); //mov
	cmp(ecx, eax);
	if (jnz())
		goto loc_483799;
	ecx = ~ecx;
	add(eax, (int32_t)0xFEFEFEFF);
	and_(eax, ecx);
	and_(eax, (int32_t)0x80808080);
	if (jnz())
		goto loc_483794;
	eax = to32i(ebx+8); //mov
	ecx = to32i(edx+8); //mov
	cmp(ecx, eax);
	if (jnz())
		goto loc_483799;
	ecx = ~ecx;
	add(eax, (int32_t)0xFEFEFEFF);
	and_(eax, ecx);
	and_(eax, (int32_t)0x80808080);
	if (jnz())
		goto loc_483794;
	eax = to32i(ebx+0xC); //mov
	ecx = to32i(edx+0xC); //mov
	cmp(ecx, eax);
	if (jnz())
		goto loc_483799;
	add(ebx, (int32_t)0x10);
	add(edx, (int32_t)0x10);
	ecx = ~ecx;
	add(eax, (int32_t)0xFEFEFEFF);
	and_(eax, ecx);
	and_(eax, (int32_t)0x80808080);
	if (jz())
		goto loc_483728;
loc_483794:
	sub(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483799:
	cmp(al, cl);
	if (jnz())
		goto loc_4837BA;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_483794;
	cmp(ah, ch);
	if (jnz())
		goto loc_4837BA;
	cmp(ah, (int8_t)0);
	if (jz())
		goto loc_483794;
	shr(eax, (int32_t)0x10);
	shr(ecx, (int32_t)0x10);
	cmp(al, cl);
	if (jnz())
		goto loc_4837BA;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_483794;
	cmp(ah, ch);
loc_4837BA:
	sbb(eax, eax);
	or_(al, (int8_t)1);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4837D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	eax = SDL_GetTicks_wrap();
	esi = eax; //mov
	esp -= 4; _sub_489E0C(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_5637D8) = eax; //mov
	xor_(edi, edi);
loc_4837ED:
	eax = to32i(dword_5637D8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	cmp(edi, to32i(dword_5637D0));
	if (jz())
		goto loc_483862;
	inc(to32i(dword_5637F4));
	inc(to32i(dword_5637F0));
	eax = SDL_GetTicks_wrap();
	edx = eax; //mov
	sub(edx, esi);
	imul32(edx, 0x4A9);
	add(ebx, edx);
	esi = eax; //mov
	cmp(ebx, (int32_t)0xFFFF);
	if (jle())
		goto loc_483839;
	eax = ebx; //mov
	sar(eax, (int32_t)0x10);
	add(to32i(dword_5637D4), eax);
	and_(ebx, (int32_t)0xFFFF);
loc_483839:
	ebp = to32i(dword_563780); //mov
	ecx = edi; //mov
	edx = edi; //mov
	cmp(edi, ebp);
	if (jz())
		goto loc_4837ED;
loc_483847:
	eax = edx; //mov
	inc(ecx);
	call(to32i(dword_563780+eax));
	add(edx, (int32_t)4);
	cmp(ecx, (int32_t)8);
	if (jnb())
		goto loc_4837ED;
	cmp(edi, to32i(dword_563780+edx));
	if (jnz())
		goto loc_483847;
	goto loc_4837ED;
loc_483862:
	eax = to32i(dword_5637D8); //mov
	xor_(edx, edx);
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_5637D8) = edx; //mov
	to32i(dword_4DABCC) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483884()
{
	push32(ebx);
	push32(edx);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	edx = to32i(dword_5637AC); //mov
	to32i(dword_5637CC) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4838B4;
loc_48389A:
	call(to32i(dword_5637AC));
	eax = to32i(dword_5637CC); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	cmp(to32i(dword_5637AC), (int32_t)0);
	if (jnz())
		goto loc_48389A;
loc_4838B4:
	eax = to32i(dword_5637CC); //mov
	xor_(ebx, ebx);
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_5637CC) = ebx; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4838CC()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	to32i(dword_5637AC) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4838E2;
	edx = to32i(dword_5637CC); //mov
	test(edx, edx);
	if (jz())
		goto loc_4838FC;
loc_4838E2:
	cmp(to32i(dword_5637AC), (int32_t)0);
	if (jnz())
		goto loc_4838F8;
	ebx = to32i(dword_5637CC); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_483933;
loc_4838F8:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4838FC:
	push32(dword_5637B0);
	ecx = 0xFFFFFFFF; //mov
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)sub_483884; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	cmp(to32i(dword_5637CC), (int32_t)0);
	if (jnz())
		goto loc_4838F8;
	xor_(edx, edx);
loc_483920:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(edx, to32i(dword_5637CC));
	if (jz())
		goto loc_483920;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483933:
	eax = (int32_t)(intptr_t)dword_5637B0; //mov
	edx = ebx; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	cmp(to32i(dword_5637CC), (int32_t)0);
	if (jz())
		goto loc_4838F8;
	xor_(edx, edx);
loc_48394A:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(edx, to32i(dword_5637CC));
	if (jnz())
		goto loc_48394A;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483960()
{
	push32(edx);
	xor_(eax, eax);
loc_483963:
	add(eax, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_56377C+eax) = edx; //mov
	cmp(eax, (int32_t)0x20);
	if (jnz())
		goto loc_483963;
	pop32(edx);
}
Fn(void) Game::_sub_483A70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = to32i(dword_4DB1B0); //mov
	ebx = eax; //mov
	ecx = 0xFFFFFFFF; //mov
	inc(esi);
	xor_(edx, edx);
	xor_(eax, eax);
loc_483A86:
	cmp(to32i(dword_563780+eax), (int32_t)0);
	if (jnz())
		goto loc_483A93;
	test(ecx, ecx);
	if (jl())
		goto loc_483ABC;
loc_483A93:
	cmp(ebx, to32i(dword_563780+eax));
	if (jz())
		goto loc_483AB0;
loc_483A9B:
	inc(edx);
	add(eax, (int32_t)4);
	cmp(edx, (int32_t)8);
	if (jl())
		goto loc_483A86;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_483AB0;
	to32i(dword_563780+ecx*4) = ebx; //mov
loc_483AB0:
	dec(esi);
	to32i(dword_4DB1B0) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483ABC:
	ecx = edx; //mov
	goto loc_483A9B;
}
Fn(void) Game::_sub_483AC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ebx = to32i(dword_4DB1B0); //mov
	ecx = eax; //mov
	esi = to32i(dword_563780); //mov
	inc(ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	cmp(ecx, esi);
	if (jz())
		goto loc_483AEC;
loc_483ADB:
	add(eax, (int32_t)4);
	inc(edx);
	cmp(eax, (int32_t)0x20);
	if (jge())
		goto loc_483AEC;
	cmp(ecx, to32i(dword_563780+eax));
	if (jnz())
		goto loc_483ADB;
loc_483AEC:
	cmp(edx, (int32_t)8);
	if (jge())
		goto loc_483B23;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	cmp(ecx, to32i(dword_563780+eax));
	if (jnz())
		goto loc_483B23;
	cmp(edx, (int32_t)7);
	if (jge())
		goto loc_483B1C;
loc_483B05:
	add(eax, (int32_t)4);
	edx = to32i(dword_563780+eax); //mov
	to32i(dword_56377C+eax) = edx; //mov
	cmp(eax, (int32_t)0x1C);
	if (jl())
		goto loc_483B05;
loc_483B1C:
	xor_(eax, eax);
	to32i(dword_56379C) = eax; //mov
loc_483B23:
	dec(ebx);
	to32i(dword_4DB1B0) = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483B7C()
{
	push32(edx);
	push32(esi);
	push32(ebp);
	cmp(to32i(dword_5637D0), (int32_t)0);
	if (jz())
		goto loc_483BD0;
	push32(ecx);
	xor_(ecx, ecx);
	to32i(dword_4DABCC) = ecx; //mov
	to32i(dword_5637D0) = ecx; //mov
	to32i(timerIsRunning) = ecx; //mov
	eax = stopTimer();
	ebp = to32i(uResolution); //mov
	push32(ebp);
	eax = timeEndPeriod_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(dword_5637D8); //mov
	test(eax, eax);
	if (jnz())
		goto loc_483BFE;
loc_483BB8:
	edx = 1; //mov
	pop32(ecx);
loc_483BBE:
	cmp(to32i(dword_5637D8), (int32_t)0);
	if (jnz())
		goto loc_483C0C;
loc_483BD0:
	xor_(esi, esi);
	to32i(dword_4DB1B0) = esi; //mov
	to32i(uResolution) = esi; //mov
	to32i(dword_4DAC08) = esi; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	return;
loc_483BFE:
	edx = eax; //mov
	eax = (int32_t)(intptr_t)dword_5637DC; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	goto loc_483BB8;
loc_483C0C:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_483BBE;
}
Fn(void) Game::_sub_483C18()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	cmp(esi, (int32_t)1);
	if (jge())
		goto loc_483C9D;
loc_483C2D:
	esi = 0x64; //mov
loc_483C32:
	eax = 0x3E80000; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	xor_(edx, edx);
	to32i(dword_5637A0) = eax; //mov
	to32i(dword_5637F4) = edx; //mov
	push32(8);
	to32i(dword_5637D4) = edx; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = timeGetDevCaps_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_483CA7;
	edi = 1; //mov
	edx = to32i(dword_5637A0); //mov
	to32i(esp) = edi; //mov
	to32i(esp+4) = edi; //mov
	to32i(uResolution) = edi; //mov
	cmp(edx, (int32_t)0x10000);
	if (jnb())
		goto loc_483CB7;
loc_483C89:
	to32i(dword_4DABCC) = eax; //mov
	to32i(dword_5637D0) = eax; //mov
loc_483C93:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483C9D:
	cmp(esi, (int32_t)0x2710);
	if (jg())
		goto loc_483C2D;
	goto loc_483C32;
loc_483CA7:
	xor_(edi, edi);
	to32i(dword_4DABCC) = edi; //mov
	to32i(dword_5637D0) = edi; //mov
	goto loc_483C93;
loc_483CB7:
	push32(dword_5637DC);
	ecx = 0xFFFFFFFF; //mov
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)sub_4837D0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_483C89;
	ecx = to32i(uResolution); //mov
	push32(ecx);
	eax = timeBeginPeriod_wrap(to32i(esp + 0)); esp += 4;
	test(eax, eax);
	if (jnz())
		goto loc_483D46;
	eax = (int32_t)(intptr_t)sub_483B7C; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	to32i(dword_4DABCC) = esi; //mov
	to32i(dword_5637D0) = esi; //mov
	test(esi, esi);
	if (jnz())
		goto loc_483D6E;
loc_483D02:
	eax = to32i(dword_5637F4); //mov
	ebx = eax; //mov
	eax = SDL_GetTicks_wrap();
	esi = eax; //mov
	eax = 0x2710; //mov
	edx = eax; //mov
	edi = to32i(dword_4DABCC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	add(esi, eax);
loc_483D26:
	eax = SDL_GetTicks_wrap();
	cmp(eax, esi);
	if (jnb())
		goto loc_483D93;
	eax = to32i(dword_5637F4); //mov
	cmp(ebx, eax);
	if (jnz())
		goto loc_483D93;
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_483D26;
loc_483D46:
	eax = (int32_t)(intptr_t)dword_5637DC; //mov
	xor_(ebp, ebp);
	edx = to32i(dword_5637D8); //mov
	to32i(dword_4DABCC) = ebp; //mov
	to32i(dword_5637D0) = ebp; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483D6E:
	ebx = to32i(timerIsRunning); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_483D02;
	inc(ebx);
	to32i(timerIsRunning) = ebx; //mov
	eax = startTimer();
	goto loc_483D02;
loc_483D93:
	eax = to32i(dword_5637F4); //mov
	cmp(ebx, eax);
	if (jnz())
		goto loc_483DA1;
	esp -= 4; _sub_483B7C(); esp += 4; //call
loc_483DA1:
	cmp(to32i(dword_4DABCC), (int32_t)0);
	if (jz())
		goto loc_483C93;
	to32i(dword_4DAC08) = (int32_t)(intptr_t)sub_483960; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483DD0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	edi = ebx; //mov
	ebx = to32i(dword_4DB1C0); //mov
	ecx = 0xFFFFFFFF; //mov
	edx = (int32_t)(intptr_t)(ebx+1); //lea
	xor_(eax, eax);
	to32i(dword_4DB1C0) = edx; //mov
	xor_(edx, edx);
loc_483DF6:
	ebp = to32i(dword_5637F8+edx); //mov
	cmp(esi, ebp);
	if (jnz())
		goto loc_483E1E;
loc_483E00:
	ecx = eax; //mov
loc_483E02:
	inc(eax);
	add(edx, (int32_t)0x10);
	cmp(eax, (int32_t)0x10);
	if (jl())
		goto loc_483DF6;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_483E2E;
	dec(to32i(dword_4DB1C0));
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_483E1E:
	test(ebp, ebp);
	if (jnz())
		goto loc_483E02;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_483E02;
	test(ebx, ebx);
	if (jz())
		goto loc_483E00;
	dec(ebx);
	goto loc_483E02;
loc_483E2E:
	shl(ecx, (int32_t)4);
	eax = to32i(esp); //mov
	to32i(dword_5637F8+ecx) = esi; //mov
	to32i(dword_5637FC+ecx) = eax; //mov
	add(edi, to32i(dword_5637F0));
	xor_(edx, edx);
	to32i(dword_563800+ecx) = edi; //mov
	to32i(dword_563804+ecx) = edx; //mov
	dec(to32i(dword_4DB1C0));
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_483E64()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	ecx = eax; //mov
	ebx = to32i(dword_5637F8); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	cmp(ecx, ebx);
	if (jz())
		goto loc_483E8B;
loc_483E78:
	add(eax, (int32_t)0x10);
	inc(edx);
	cmp(eax, (int32_t)0x100);
	if (jge())
		goto loc_483E8B;
	cmp(ecx, to32i(dword_5637F8+eax));
	if (jnz())
		goto loc_483E78;
loc_483E8B:
	cmp(edx, (int32_t)0x10);
	if (jge())
		goto loc_483E9B;
	shl(edx, (int32_t)4);
	cmp(ecx, to32i(dword_5637F8+edx));
	if (jz())
		goto loc_483EA0;
loc_483E9B:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_483EA0:
	xor_(ebp, ebp);
	to32i(dword_5637F8+edx) = ebp; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483EB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	eax = to32i(dword_4DB1C4); //mov
	xor_(esi, esi);
	cmp(eax, to32i(dword_5637F0));
	if (jz())
		goto loc_483F3B;
	eax = to32i(dword_5637F0); //mov
	to32i(dword_4DB1C4) = eax; //mov
	xor_(ecx, ecx);
loc_483ED7:
	ebx = to32i(dword_5637F8+ecx); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_483F30;
	eax = to32i(dword_5637F0); //mov
	cmp(eax, to32i(dword_563800+ecx));
	if (jl())
		goto loc_483F30;
	cmp(to32i(dword_563804+ecx), (int32_t)0);
	if (jnz())
		goto loc_483F30;
	to32i(dword_563804+ecx) = 1; //mov
	edx = to32i(dword_5637F0); //mov
	ebp = to32i(dword_563800+ecx); //mov
	eax = edi; //mov
	sub(edx, ebp);
	call(ebx);
	or_(esi, eax);
	eax = to32i(dword_5637F0); //mov
	edx = to32i(dword_5637FC+ecx); //mov
	xor_(ebx, ebx);
	add(eax, edx);
	to32i(dword_563804+ecx) = ebx; //mov
	to32i(dword_563800+ecx) = eax; //mov
loc_483F30:
	add(ecx, (int32_t)0x10);
	cmp(ecx, (int32_t)0x100);
	if (jnz())
		goto loc_483ED7;
loc_483F3B:
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_483F44()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	eax = to32i(dword_5637F4); //mov
	xor_(edx, edx);
	add(ecx, eax);
loc_483F51:
	eax = to32i(dword_5637F4); //mov
	cmp(eax, ecx);
	if (jge())
		goto loc_483F5E;
	test(edx, edx);
	if (jz())
		goto loc_483F63;
loc_483F5E:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_483F63:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	edx = eax; //mov
	goto loc_483F51;
}
Fn(void) Game::_sub_484008()
{
	cmp(to32i(dword_563D74), (int32_t)0);
	if (jz())
		goto loc_483F90;
	cmp(to32i(dword_563D54), (int32_t)0);
	if (jz())
		goto loc_483F90;
	eax = 1; //mov
	return;
loc_483F90:
	xor_(eax, eax);
}
Fn(void) Game::_sub_4840F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x304);
	edx = to32i(dword_4DB1E8); //mov
	xor_(ebp, ebp);
	test(edx, edx);
	if (jnz())
		goto loc_48428E;
	ecx = 1; //mov
	ebx = to32i(esp+0x320); //mov
	to32i(dword_4DB1E8) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48429B;
	xor_(ah, ah);
	to8i(esp) = ah; //mov
loc_484138:
	cmp(to32i(dword_4DABFC), (int32_t)0);
	if (jz())
		goto loc_484203;
	edx = to32i(dword_4DB1D8); //mov
	test(edx, edx);
	if (jz())
		goto loc_484197;
	ecx = to32i(dword_4DB1DC); //mov
	push32(ecx);
	push32(edx);
	push32(aFileSLineD);
	eax = (int32_t)(intptr_t)(esp+0x20C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(esp+0x200); //lea
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
loc_48417E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_484196;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_48417E;
loc_484196:
	pop32(edi);
loc_484197:
	esi = to32i(dword_4DB1E0); //mov
	test(esi, esi);
	if (jz())
		goto loc_484203;
	edi = to32i(dword_4DB1E4); //mov
	push32(edi);
	push32(esi);
	push32(aCalledFromFile);
	eax = (int32_t)(intptr_t)(esp+0x28C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esp+0x280); //lea
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
loc_4841D0:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4841E8;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4841D0;
loc_4841E8:
	pop32(edi);
loc_484203:
	cmp(to32i(dword_4DAC04), (int32_t)0);
	if (jz())
		goto loc_484214;
	call(to32i(dword_4DAC04));
	ebp = eax; //mov
loc_484214:
	cmp(to32i(dword_4DAC08), (int32_t)0);
	if (jz())
		goto loc_484223;
	call(to32i(dword_4DAC08));
loc_484223:
	push32(0x11031);
	push32(aAbortMessage);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(0);
	eax = MessageBoxA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(ebp, ebp);
	if (jz())
		goto loc_48427C;
	eax = ebp; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_48427C:
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4842E1;
	_ExitProcess0();
loc_48428E:
	add(esp, (int32_t)0x304);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48429B:
	eax = (int32_t)(intptr_t)(esp+0x324); //lea
	ebx = (int32_t)(intptr_t)(esp+0x300); //lea
	edx = to32i(esp+0x320); //mov
	to32i(esp+0x300) = eax; //mov
	eax = esp; //mov
	esp -= 4; _vsprintf_(); esp += 4; //call
	to32i(esp+0x300) = ebp; //mov
	goto loc_484138;
loc_4842E1:
	push32(eax);
	eax = ExitProcess_wrap(to32i(esp + 0));
}
Fn(void) Game::_sub_48438C()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ecx; //mov
	ecx = edx; //mov
	and_(ecx, (int32_t)0xF00);
	sar(ecx, (int32_t)8);
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	ecx = (int32_t)(intptr_t)dword_563D80; //mov
	shl(edx, (int32_t)3);
	eax = to32i(esp+0x10); //mov
	add(ecx, edx);
	dec(eax);
	to32i(ecx+8) = eax; //mov
	eax = to32i(esp+0x14); //mov
	dec(eax);
	to32i(ecx+0xC) = eax; //mov
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x1C); //mov
	to32i(ecx+0x10) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4843D7;
	edx = 4; //mov
loc_4843D7:
	to32i(ecx+0x14) = edx; //mov
	edx = to32i(dword_563F04); //mov
	push32(edi);
	eax = to32i(edx+0x20); //mov
	push32(aLow8s);
	to32i(dword_563F04) = eax; //mov
	eax = (int32_t)(intptr_t)(edx+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	to32i(edx+0x14) = 0; //mov
	to32i(edx+0x24) = 0; //mov
	eax = to32i(edx+0x14); //mov
	to32i(edx+0x10) = eax; //mov
	eax = esi; //mov
	to32i(edx) = ebx; //mov
	or_(ah, (int8_t)0x80);
	to32i(edx+0x18) = eax; //mov
	add(esp, (int32_t)0xC);
	to32i(ecx) = edx; //mov
	edx = to32i(dword_563F04); //mov
	push32(edi);
	ebx = to32i(edx+0x20); //mov
	push32(aHigh7s);
	to32i(dword_563F04) = ebx; //mov
	ebx = (int32_t)(intptr_t)(edx+4); //lea
	push32(ebx);
	esp -= 4; _sprintf_(); esp += 4; //call
	to32i(edx+0x14) = 0; //mov
	to32i(edx+0x20) = 0; //mov
	or_(si, (int16_t)0x8020);
	to32i(edx) = ebp; //mov
	to32i(edx+0x18) = esi; //mov
	eax = to32i(edx+0x14); //mov
	to32i(edx+0x10) = eax; //mov
	eax = to32i(ecx); //mov
	to32i(ecx+4) = edx; //mov
	to32i(eax+0x20) = edx; //mov
	add(esp, (int32_t)0xC);
	ebx = to32i(ecx); //mov
	eax = ecx; //mov
	to32i(edx+0x24) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x10; return;
}
Fn(void) Game::_sub_48447C()
{
	push32(ecx);
	ecx = 1; //mov
	esp -= 4; _sub_4844D4(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_48448C()
{
	push32(ecx);
	xor_(ecx, ecx);
	esp -= 4; _sub_4844D4(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_484498()
{
	push32(ecx);
	ecx = 1; //mov
	esp -= 4; _sub_4844D4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4844A9;
	pop32(ecx);
	return;
loc_4844A9:
	eax = to32i(eax); //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4844B0()
{
	push32(ecx);
	xor_(ecx, ecx);
	esp -= 4; _sub_4844D4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4844BE;
	pop32(ecx);
	return;
loc_4844BE:
	eax = to32i(eax); //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4844C4()
{
	esp -= 4; _sub_4844D4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
	{
		_sub_4844D0();
		return;
	}
}
Fn(void) Game::_sub_4844D0()
{
	eax = to32i(eax); //mov
}
Fn(void) Game::_sub_4844D4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = to32i(dword_563F00); //mov
	test(edi, edi);
	if (jz())
		goto loc_4844EA;
	eax = edi; //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
loc_4844EA:
	eax = esi; //mov
	esp -= 4; _sub_484510(); esp += 4; //call
	ebp = to32i(dword_563F00); //mov
	edx = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_484503;
	eax = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_484503:
	eax = ebp; //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	eax = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_484510()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x10) = edx; //mov
	edx = ebx; //mov
	and_(edx, (int32_t)0xF00);
	sar(edx, (int32_t)8);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ecx = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	add(ecx, eax);
	eax = to32i(esp+0xC); //mov
	esp -= 4; _sub_4A40D0(); esp += 4; //call
	to32i(esp+0xC) = eax; //mov
	test(bl, (int8_t)0x40);
	if (jnz())
		goto loc_48465C;
	eax = to32i(esp+0x10); //mov
	add(eax, to32i(ecx+0x14));
	edx = to32i(ecx+8); //mov
	add(edx, eax);
	eax = to32i(ecx+8); //mov
loc_484561:
	eax = ~eax;
	and_(edx, eax);
	to32i(esp) = edx; //mov
	edi = to32i(ecx); //mov
	test(edi, edi);
	if (jz())
		goto loc_484728;
	eax = ebx; //mov
	and_(eax, (int32_t)0xF00);
	cmp(eax, (int32_t)0x300);
	if (jz())
		goto loc_484672;
	test(bl, (int8_t)0x20);
	if (jnz())
		goto loc_48475F;
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jnz())
		goto loc_4846DC;
loc_48459A:
	edi = to32i(ecx); //mov
	esi = to32i(edi+0x20); //mov
	edi = to32i(edi); //mov
	test(bl, (int8_t)0x40);
	if (jnz())
		goto loc_4846F4;
loc_4845AA:
	eax = to32i(esi); //mov
	xor_(edx, edx);
	cmp(edi, eax);
loc_4845B0:
	if (jb())
		goto loc_484705;
	edi = to32i(esi); //mov
	add(edi, to32i(esi+0x10));
	test(bl, (int8_t)0x40);
	if (jz())
		goto loc_4845CC;
	eax = to32i(ecx+0xC); //mov
	add(eax, edi);
	edi = to32i(ecx+0xC); //mov
	edi = ~edi;
	and_(edi, eax);
loc_4845CC:
	cmp(esi, to32i(ecx+4));
	if (jnz())
		goto loc_48470E;
loc_4845D5:
	cmp(edx, to32i(esp));
	if (jl())
		goto loc_484718;
	ebp = to32i(dword_563F04); //mov
	edx = to32i(dword_4DB200); //mov
	to32i(ebp+0x18) = ebx; //mov
	to32i(esp+8) = ebp; //mov
	eax = to32i(ebp+0x20); //mov
	to32i(ebp+0x1C) = edx; //mov
	ebx = 0xC; //mov
	to32i(dword_563F04) = eax; //mov
	eax = to32i(esp+0x10); //mov
	inc(edx);
	to32i(ebp+0x14) = eax; //mov
	to32i(dword_4DB200) = edx; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0xC); //mov
	to32i(ebp+0x10) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+4); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	to32i(ebp+0) = edi; //mov
	eax = to32i(esi+0x24); //mov
	to32i(ebp+0x24) = eax; //mov
	to32i(ebp+0x20) = esi; //mov
	eax = to32i(esi+0x24); //mov
	to32i(eax+0x20) = ebp; //mov
	to32i(esi+0x24) = ebp; //mov
	cmp(to32i(ecx+0x14), (int32_t)0);
	if (jz())
		goto loc_484643;
	eax = ebp; //mov
	esp -= 4; _sub_4A4110(); esp += 4; //call
loc_484643:
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jz())
		goto loc_484651;
	esp -= 4; _sub_484B14(); esp += 4; //call
loc_484651:
	eax = to32i(esp+8); //mov
loc_484655:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48465C:
	eax = to32i(esp+0x10); //mov
	esi = to32i(ecx+0x14); //mov
	edx = to32i(ecx+0xC); //mov
	add(eax, esi);
	add(edx, eax);
	eax = to32i(ecx+0xC); //mov
	goto loc_484561;
loc_484672:
	ecx = to32i(dword_563F04); //mov
	eax = to32i(ecx+0x20); //mov
	to32i(dword_563F04) = eax; //mov
	eax = esp; //mov
	esi = to32i(edi+0x20); //mov
	esp -= 4; _sub_49CAD4(); esp += 4; //call
	to32i(ecx) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_484655;
	edx = to32i(dword_4DB200); //mov
	to32i(ecx+0x18) = ebx; //mov
	eax = to32i(esp+0x10); //mov
	to32i(ecx+0x1C) = edx; //mov
	ebx = 0xC; //mov
	to32i(ecx+0x14) = eax; //mov
	inc(edx);
	eax = to32i(esp); //mov
	to32i(dword_4DB200) = edx; //mov
	to32i(ecx+0x10) = eax; //mov
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(ecx+4); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = to32i(esi+0x24); //mov
	to32i(ecx+0x24) = eax; //mov
	to32i(ecx+0x20) = esi; //mov
	eax = to32i(esi+0x24); //mov
	to32i(eax+0x20) = ecx; //mov
	eax = ecx; //mov
	to32i(esi+0x24) = ecx; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4846DC:
	test(bl, (int8_t)0x10);
	if (jnz())
		goto loc_48459A;
	edx = edi; //mov
	eax = to32i(ecx+4); //mov
	esp -= 4; _sub_4A4248(); esp += 4; //call
	goto loc_48459A;
loc_4846F4:
	eax = to32i(ecx+0xC); //mov
	add(eax, edi);
	edi = to32i(ecx+0xC); //mov
	edi = ~edi;
	and_(edi, eax);
	goto loc_4845AA;
loc_484705:
	edx = to32i(esi); //mov
	sub(edx, edi);
	goto loc_4845D5;
loc_48470E:
	esi = to32i(esi+0x20); //mov
	cmp(edi, to32i(esi));
	goto loc_4845B0;
loc_484718:
	cmp(esi, to32i(ecx+4));
	if (jnz())
		goto loc_484731;
	eax = ebx; //mov
	esp -= 4; _sub_4A4508(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_484750;
loc_484728:
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_484731:
	edi = to32i(esi); //mov
	add(edi, to32i(esi+0x10));
	test(bl, (int8_t)0x40);
	if (jnz())
		goto loc_484743;
loc_48473B:
	esi = to32i(esi+0x20); //mov
	goto loc_4845AA;
loc_484743:
	edx = to32i(ecx+0xC); //mov
	eax = edx; //mov
	add(edi, edx);
	eax = ~eax;
	and_(edi, eax);
	goto loc_48473B;
loc_484750:
	edx = to32i(ecx); //mov
	eax = to32i(ecx+4); //mov
	esp -= 4; _sub_4A4248(); esp += 4; //call
	goto loc_48459A;
loc_48475F:
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jnz())
		goto loc_484834;
loc_48476C:
	edi = to32i(ecx+4); //mov
	esi = to32i(edi+0x24); //mov
	edi = to32i(edi); //mov
	test(bl, (int8_t)0x40);
	if (jnz())
		goto loc_48484C;
loc_48477D:
	xor_(eax, eax);
	to32i(esp+0x14) = eax; //mov
loc_484783:
	eax = to32i(esi); //mov
	add(eax, to32i(esi+0x10));
	test(bl, (int8_t)0x40);
	if (jz())
		goto loc_484799;
	edx = to32i(ecx+0xC); //mov
	add(edx, eax);
	eax = to32i(ecx+0xC); //mov
	eax = ~eax;
	and_(eax, edx);
loc_484799:
	cmp(eax, edi);
	if (jnb())
		goto loc_484858;
	edx = edi; //mov
	sub(edx, eax);
	to32i(esp+0x14) = edx; //mov
loc_4847A9:
	eax = to32i(esp+0x14); //mov
	cmp(eax, to32i(esp));
	if (jl())
		goto loc_484876;
	ebp = to32i(dword_563F04); //mov
	edx = to32i(dword_4DB200); //mov
	to32i(ebp+0x18) = ebx; //mov
	to32i(esp+4) = ebp; //mov
	eax = to32i(ebp+0x20); //mov
	to32i(ebp+0x1C) = edx; //mov
	ebx = 0xC; //mov
	to32i(dword_563F04) = eax; //mov
	eax = to32i(esp+0x10); //mov
	inc(edx);
	to32i(ebp+0x14) = eax; //mov
	to32i(dword_4DB200) = edx; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0xC); //mov
	to32i(ebp+0x10) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+4); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	sub(edi, to32i(esp));
	to32i(ebp+0x24) = esi; //mov
	to32i(ebp+0) = edi; //mov
	eax = to32i(esi+0x20); //mov
	to32i(ebp+0x20) = eax; //mov
	to32i(eax+0x24) = ebp; //mov
	to32i(esi+0x20) = ebp; //mov
	cmp(to32i(ecx+0x14), (int32_t)0);
	if (jz())
		goto loc_48481B;
	eax = ebp; //mov
	esp -= 4; _sub_4A4110(); esp += 4; //call
loc_48481B:
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jz())
		goto loc_484829;
	esp -= 4; _sub_484B14(); esp += 4; //call
loc_484829:
	eax = to32i(esp+4); //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_484834:
	test(bl, (int8_t)0x10);
	if (jnz())
		goto loc_48476C;
	eax = edi; //mov
	edx = to32i(ecx+4); //mov
	esp -= 4; _sub_4A4358(); esp += 4; //call
	goto loc_48476C;
loc_48484C:
	eax = to32i(ecx+0xC); //mov
	eax = ~eax;
	and_(edi, eax);
	goto loc_48477D;
loc_484858:
	edi = to32i(esi); //mov
	test(bl, (int8_t)0x40);
	if (jz())
		goto loc_484866;
	eax = to32i(ecx+0xC); //mov
	eax = ~eax;
	and_(edi, eax);
loc_484866:
	cmp(esi, to32i(ecx));
	if (jz())
		goto loc_4847A9;
	esi = to32i(esi+0x24); //mov
	goto loc_484783;
loc_484876:
	cmp(esi, to32i(ecx));
	if (jz())
		goto loc_484892;
	edi = to32i(esi); //mov
	test(bl, (int8_t)0x40);
	if (jnz())
		goto loc_484889;
loc_484881:
	esi = to32i(esi+0x24); //mov
	goto loc_48477D;
loc_484889:
	eax = to32i(ecx+0xC); //mov
	eax = ~eax;
	and_(edi, eax);
	goto loc_484881;
loc_484892:
	eax = ebx; //mov
	esp -= 4; _sub_4A4508(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_484728;
	edx = to32i(ecx+4); //mov
	eax = to32i(ecx); //mov
	esp -= 4; _sub_4A4358(); esp += 4; //call
	goto loc_48476C;
}
Fn(void) Game::_sub_4848B0()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4848E6;
	xor_(ebx, ebx);
loc_4848BA:
	edx = to32i(dword_563D84+ebx); //mov
	test(edx, edx);
	if (jz())
		goto loc_4848DB;
	eax = to32i(dword_563D80+ebx); //mov
loc_4848CA:
	eax = to32i(eax+0x20); //mov
	cmp(ecx, to32i(eax));
	if (jz())
		goto loc_4848D5;
	cmp(eax, edx);
	if (jnz())
		goto loc_4848CA;
loc_4848D5:
	test(to8i(eax+0x19), (int8_t)0x80);
	if (jz())
		goto loc_4848E8;
loc_4848DB:
	add(ebx, (int32_t)0x18);
	cmp(ebx, (int32_t)0x180);
	if (jl())
		goto loc_4848BA;
loc_4848E6:
	xor_(eax, eax);
loc_4848E8:
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4848EC()
{
	push32(edx);
	edx = 1; //mov
	esp -= 4; _sub_4848B0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4848FC()
{
	push32(edx);
	edx = 1; //mov
	esp -= 4; _sub_4848B0(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_484948(); esp += 4; //call
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_484928()
{
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_484948(); esp += 4; //call
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_484948()
{
	push32(edx);
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_484989;
	push32(ecx);
	push32(ebx);
	ebx = to32i(eax+0x24); //mov
	ecx = to32i(eax+0x20); //mov
	to32i(ebx+0x20) = ecx; //mov
	ebx = ecx; //mov
	ecx = to32i(eax+0x24); //mov
	to32i(ebx+0x24) = ecx; //mov
	ecx = to32i(eax+0x18); //mov
	and_(ecx, (int32_t)0xF00);
	cmp(ecx, (int32_t)0x300);
	if (jz())
		goto loc_48498B;
loc_484973:
	eax = to32i(dword_563F04); //mov
	to32i(edx) = 0; //mov
	to32i(dword_563F04) = edx; //mov
	to32i(edx+0x20) = eax; //mov
	pop32(ebx);
	pop32(ecx);
loc_484989:
	pop32(edx);
	return;
loc_48498B:
	eax = to32i(eax); //mov
	esp -= 4; _free_(); esp += 4; //call
	goto loc_484973;
}
Fn(void) Game::_sub_484A00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(dword_4DB200); //mov
	ecx = eax; //mov
	edx = eax; //mov
	and_(edx, (int32_t)0xF00);
	sar(edx, (int32_t)8);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ebp = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	add(ebp, eax);
	and_(ecx, (int32_t)7);
	eax = to32i(ebp+0); //mov
	xor_(edi, edi);
	edx = to32i(ebp+4); //mov
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	cmp(eax, edx);
	if (jz())
		goto loc_484A69;
loc_484A40:
	test(to8i(eax+0x18), (int8_t)8);
	if (jz())
		goto loc_484A61;
	edx = to32i(eax+0x18); //mov
	and_(edx, (int32_t)7);
	cmp(edx, ecx);
	if (jbe())
		goto loc_484A82;
loc_484A50:
	edi = eax; //mov
	edx = esi; //mov
	ebx = to32i(eax+0x1C); //mov
	ecx = to32i(eax+0x18); //mov
	sub(edx, ebx);
	and_(ecx, (int32_t)7);
	ebx = edx; //mov
loc_484A61:
	eax = to32i(eax+0x20); //mov
	cmp(eax, to32i(ebp+4));
	if (jnz())
		goto loc_484A40;
loc_484A69:
	to32i(dword_4DB200) = esi; //mov
	test(edi, edi);
	if (jnz())
		goto loc_484A8F;
	xor_(eax, eax);
	esi = to32i(dword_4DB200); //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_484A82:
	if (jnz())
		goto loc_484A61;
	edx = esi; //mov
	sub(edx, to32i(eax+0x1C));
	cmp(edx, ebx);
	if (jnb())
		goto loc_484A50;
	goto loc_484A61;
loc_484A8F:
	eax = edi; //mov
	esp -= 4; _sub_484948(); esp += 4; //call
	eax = 1; //mov
	esi = to32i(dword_4DB200); //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_484B14()
{
	cmp(to32i(dword_4DB208), (int32_t)0);
	if (jnz())
		goto loc_484B20;
	xor_(eax, eax);
	return;
loc_484B20:
	xor_(eax, eax);
	esp -= 4; _sub_484B64(); esp += 4; //call
	cmp(eax, to32i(dword_563F0C));
	if (jge())
		goto loc_484B34;
	to32i(dword_563F0C) = eax; //mov
loc_484B34:
	eax = to32i(dword_563F0C); //mov
}
Fn(void) Game::_sub_484B3C()
{
	xor_(eax, eax);
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_484B64(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_484B64()
{
	push32(edx);
	push32(esi);
	push32(ebp);
	and_(eax, (int32_t)0xF00);
	cmp(eax, (int32_t)0x300);
	if (jz())
		goto loc_484BC9;
	sar(eax, (int32_t)8);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	esi = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	edx = to32i(dword_4DB204); //mov
	add(esi, eax);
	test(edx, edx);
	if (jnz())
		goto loc_484BD2;
loc_484B91:
	push32(edi);
	push32(ecx);
	push32(ebx);
	ecx = to32i(esi); //mov
	edi = to32i(esi+4); //mov
	xor_(ebx, ebx);
	eax = to32i(ecx+0x20); //mov
	edi = to32i(edi+0x20); //mov
loc_484BA1:
	edx = to32i(eax); //mov
	sub(edx, to32i(ecx));
	ebp = to32i(ecx+0x10); //mov
	ecx = to32i(esi+0x14); //mov
	sub(edx, ebp);
	sub(edx, ecx);
	cmp(edx, ebx);
	if (jle())
		goto loc_484BB5;
	ebx = edx; //mov
loc_484BB5:
	ecx = eax; //mov
	eax = to32i(eax+0x20); //mov
	cmp(eax, edi);
	if (jnz())
		goto loc_484BA1;
	edx = ebx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edi);
loc_484BC3:
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	return;
loc_484BC9:
	esp -= 4; _sub_4A47B0(); esp += 4; //call
	edx = eax; //mov
	goto loc_484BC3;
loc_484BD2:
	edx = to32i(esi); //mov
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_4A4248(); esp += 4; //call
	goto loc_484B91;
}
Fn(void) Game::_sub_484D40()
{
	push32(ebx);
	push32(ecx);
	ecx = edx; //mov
	to32i(dword_563F04) = eax; //mov
	dec(ecx);
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_484D60;
loc_484D50:
	ebx = (int32_t)(intptr_t)(eax+0x28); //lea
	inc(edx);
	to32i(eax+0x20) = ebx; //mov
	eax = ebx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_484D50;
loc_484D60:
	to32i(eax+0x20) = 0; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_484D6C()
{
	push32(edx);
	edx = to32i(dword_563F04); //mov
	to32i(dword_563F04) = eax; //mov
	to32i(eax+0x20) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_484D94()
{
	push32(edx);
	edx = 1; //mov
	esp -= 4; _sub_4848B0(); esp += 4; //call
	eax = to32i(eax+0x14); //mov
	pop32(edx);
}
Fn(void) Game::_sub_484DA4()
{
	eax = to32i(eax+0x14); //mov
}
Fn(void) Game::_sub_484DA8()
{
	add(eax, (int32_t)4);
}
Fn(void) Game::_sub_484E40()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	xor_(esi, esi);
loc_484E49:
	edx = to32i(dword_563D84+esi); //mov
	test(edx, edx);
	if (jz())
		goto loc_484E74;
	ebx = edx; //mov
	eax = to32i(dword_563D80+esi); //mov
loc_484E5B:
	eax = to32i(eax+0x20); //mov
	edi = to32i(eax); //mov
	cmp(ecx, edi);
	if (jb())
		goto loc_484E87;
	ebp = to32i(eax+0x14); //mov
	edx = (int32_t)(intptr_t)(edi+ebp); //lea
	cmp(ecx, edx);
	if (jnb())
		goto loc_484E87;
loc_484E6E:
	test(to8i(eax+0x19), (int8_t)0x80);
	if (jz())
		goto loc_484E81;
loc_484E74:
	add(esi, (int32_t)0x18);
	cmp(esi, (int32_t)0x180);
	if (jl())
		goto loc_484E49;
	xor_(eax, eax);
loc_484E81:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_484E87:
	cmp(eax, ebx);
	if (jnz())
		goto loc_484E5B;
	goto loc_484E6E;
}
Fn(void) Game::_sub_484EA0()
{
	push32(edx);
	xor_(edx, edx);
	esp -= 4; _sub_484E40(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_484EF0()
{
	static const void *const off_484EB0[] = {
		&&loc_484F34,
		&&loc_484FE3,
		&&loc_484FD8,
		&&loc_484FCD,
		&&loc_484FC2,
		&&loc_484FB7,
		&&loc_484FAC,
		&&loc_484FA1,
		&&loc_484F96,
		&&loc_484F8B,
		&&loc_484F80,
		&&loc_484F75,
		&&loc_484F6A,
		&&loc_484F5F,
		&&loc_484F54,
		&&loc_484F49,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	eax = ecx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_484F0E;
	sub(ebx, ecx);
loc_484EFF:
	dec(eax);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_484F0E;
	inc(edi);
	dl = to8i(esi); //mov
	inc(esi);
	to8i(edi-1) = dl; //mov
	goto loc_484EFF;
loc_484F0E:
	ebp = ebx; //mov
	ecx = ebx; //mov
	edx = esi; //mov
	sar(ecx, (int32_t)2);
	eax = edi; //mov
	esi = ecx; //mov
	sar(ebp, (int32_t)6);
	and_(esi, (int32_t)0xF);
	and_(ebx, (int32_t)3);
	cmp(esi, (int32_t)0xF);
	if (ja())
		goto loc_484FF3;
	goto *off_484EB0[esi];
loc_484F34:
	dec(ebp);
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_484FF3;
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484F49:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F54:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F5F:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F6A:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F75:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484F80:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F8B:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484F96:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484FA1:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484FAC:
	add(eax, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = ecx; //mov
loc_484FB7:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484FC2:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484FCD:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484FD8:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
loc_484FE3:
	add(eax, (int32_t)4);
	esi = to32i(edx); //mov
	add(edx, (int32_t)4);
	to32i(eax-4) = esi; //mov
	goto loc_484F34;
loc_484FF3:
	xor_(esi, esi);
loc_484FF5:
	dec(ebx);
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_485008;
	ecx = (int32_t)(intptr_t)(edx+esi); //lea
	edi = (int32_t)(intptr_t)(eax+esi); //lea
	cl = to8i(ecx); //mov
	inc(esi);
	to8i(edi) = cl; //mov
	goto loc_484FF5;
loc_485008:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48500C()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	cmp(ebx, (int32_t)4);
	if (jge())
		goto loc_48502A;
loc_485017:
	add(eax, ebx);
	add(edx, ebx);
loc_48501B:
	dec(ebx);
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48504B;
	dec(edx);
	cl = to8i(eax-1); //mov
	dec(eax);
	to8i(edx) = cl; //mov
	goto loc_48501B;
loc_48502A:
	cmp(edx, eax);
	if (jbe())
		goto loc_485035;
	ecx = (int32_t)(intptr_t)(eax+ebx); //lea
	cmp(edx, ecx);
	if (jb())
		goto loc_485017;
loc_485035:
	ecx = eax; //mov
	esi = 4; //mov
	and_(ecx, (int32_t)3);
	sub(esi, ecx);
	ecx = esi; //mov
	and_(ecx, (int32_t)3);
	esp -= 4; _sub_484EF0(); esp += 4; //call
loc_48504B:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_485050()
{
	push32(ecx);
	ecx = edx; //mov
	sar(ebx, (int32_t)1);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48500C(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_bcopy_()
{
	push32(ecx);
	ecx = edx; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48500C(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_485070()
{
	push32(ecx);
	ecx = edx; //mov
	edx = eax; //mov
	add(ebx, ebx);
	eax = ecx; //mov
	esp -= 4; _sub_48500C(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_485080()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	edx = ebx; //mov
	shl(ebx, (int32_t)2);
	sub(ebx, edx);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_48500C(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48509C()
{
	push32(ecx);
	ecx = edx; //mov
	shl(ebx, (int32_t)2);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48500C(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4850B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	ecx = (int32_t)(intptr_t)off_4DB21C; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	and_(to16i(esi+0xC), (int16_t)0xF000);
	and_(edi, (int32_t)0xFFF);
	or_(to32i(esi+0xC), edi);
	bx = to16i(esi+0xE); //mov
	and_(ebx, (int32_t)0xFFFFF000);
	and_(ebp, (int32_t)0xFFF);
	to16i(esi+0xE) = bx; //mov
	shl(ebp, (int32_t)0x10);
	or_(to32i(esi+0xC), ebp);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_485160()
{
	push32(edx);
	edx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_485173;
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_485173:
	eax = edx; //mov
	esp -= 4; _sub_486314(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48519A;
	eax = to32i(dword_59C5B0+edx*8); //mov
	cmp(to32i(eax), (int32_t)0x6C4B4E42);
	if (jnz())
		goto loc_4851A6;
	cmp(to8i(eax+4), (int8_t)1);
	if (ja())
		goto loc_4851A1;
	eax = 0xFFFFFFF5; //mov
	pop32(edx);
	return;
loc_48519A:
	eax = 0xFFFFFFF8; //mov
	pop32(edx);
	return;
loc_4851A1:
	eax = to32i(eax+8); //mov
	pop32(edx);
	return;
loc_4851A6:
	eax = 0xFFFFFFF9; //mov
	pop32(edx);
}
Fn(void) Game::_sub_485218()
{
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	to32i(esp+4) = edx; //mov
	ah = to8i(byte_4DDA74); //mov
	ebp = 0x80; //mov
	test(ah, ah);
	if (jz())
		goto loc_485241;
	test(esi, esi);
	if (jnz())
		goto loc_485248;
	eax = 0xFFFFFFF8; //mov
loc_48523B:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(esi);
	return;
loc_485241:
	eax = 0xFFFFFFF6; //mov
	goto loc_48523B;
loc_485248:
	eax = edx; //mov
	esp -= 4; _sub_485160(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48523B;
	push32(edi);
	push32(ecx);
	push32(ebx);
	ecx = edx; //mov
	edx = to32i(dword_59C5B0+edx*8); //mov
	to32i(esp+0xC) = edx; //mov
	ebx = eax; //mov
	eax = to32i(esp+0xC); //mov
	edx = esi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(dword_59C5B0+ecx*8); //mov
	cmp(to8i(edx+4), (int8_t)1);
	if (jb())
		goto loc_485281;
	ebp = (uint16_t)to16i(edx+6); //movzx
loc_485281:
	cmp(to8i(edx+4), (int8_t)2);
	if (jb())
		goto loc_4852CF;
	edi = edx; //mov
	to32i(esp+0x14) = esi; //mov
loc_48528D:
	test(ebp, ebp);
	if (jle())
		goto loc_4852B9;
	shl(ebp, (int32_t)2);
	xor_(eax, eax);
loc_485296:
	cmp(to8i(edx+4), (int8_t)2);
	if (jb())
		goto loc_4852D5;
	ecx = (int32_t)(intptr_t)(edi+eax); //lea
	ecx = to32i(ecx+0xC); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4852B2;
	sub(ecx, edi);
	ebx = to32i(esp+0x14); //mov
	add(ecx, esi);
	to32i(ebx+eax+0xC) = ecx; //mov
loc_4852B2:
	add(eax, (int32_t)4);
	cmp(eax, ebp);
	if (jl())
		goto loc_485296;
loc_4852B9:
	eax = to32i(esp+0x10); //mov
	to32i(dword_59C5B0+eax*8) = esi; //mov
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(edi);
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(esi);
	return;
loc_4852CF:
	to32i(esp+0x18) = esi; //mov
	goto loc_48528D;
loc_4852D5:
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	ecx = to32i(ecx+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4852B2;
	sub(ecx, edx);
	ebx = (int32_t)(intptr_t)(esi+ecx); //lea
	ecx = to32i(esp+0x18); //mov
	to32i(ecx+eax+8) = ebx; //mov
	goto loc_4852B2;
}
Fn(void) Game::_sub_485364()
{
	push32(ebx);
	ebx = edx; //mov
	esp -= 4; _sub_48637C(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_485380()
{
	test(eax, eax);
	if (jnz())
		goto loc_48538A;
	eax = 0xFFFFFFF8; //mov
	return;
loc_48538A:
	to32i(eax) = 0xFFFFFFFF; //mov
	to8i(eax+4) = 0xFF; //mov
	to8i(eax+5) = 0x3C; //mov
	to8i(eax+6) = 0x7F; //mov
	to8i(eax+7) = 0x40; //mov
	to8i(eax+8) = 0x7F; //mov
	to8i(eax+9) = 0x40; //mov
	to8i(eax+0xA) = 0x7F; //mov
	to8i(eax+0xB) = 0; //mov
	to16i(eax+0xC) = 0; //mov
	to16i(eax+0xE) = 0; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_4853C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ah = to8i(byte_4DDA74); //mov
	ecx = 0x80; //mov
	test(ah, ah);
	if (jz())
		goto loc_4853E1;
	test(edx, edx);
	if (jnz())
		goto loc_4853EA;
loc_4853D8:
	eax = 0xFFFFFFF8; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4853E1:
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4853EA:
	eax = to32i(edx+1); //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_486314(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4853D8;
	eax = to32i(edx+1); //mov
	sar(eax, (int32_t)0x18);
	eax = to32i(dword_59C5B0+eax*8); //mov
	cmp(to8i(eax+4), (int8_t)1);
	if (jb())
		goto loc_485412;
	xor_(ecx, ecx);
	cx = to16i(eax+6); //mov
loc_485412:
	ebx = to32i(edx); //mov
	test(ebx, ebx);
	if (jl())
		goto loc_4853D8;
	cmp(ecx, ebx);
	if (jle())
		goto loc_4853D8;
	cmp(to8i(eax+4), (int8_t)2);
	if (jb())
		goto loc_485431;
	ecx = to32i(edx); //mov
	eax = to32i(eax+ecx*4+0xC); //mov
	esp -= 4; _sub_4A5000(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_485431:
	ecx = to32i(edx); //mov
	eax = to32i(eax+ecx*4+8); //mov
	esp -= 4; _sub_4A5000(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_485440()
{
	cmp(edx, to32i(eax+4));
	if (jnz())
		goto loc_48544C;
	eax = 1; //mov
	return;
loc_48544C:
	xor_(eax, eax);
}
Fn(void) Game::_sub_485450()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_563F10); //mov
	test(edx, edx);
	if (jz())
		goto loc_485490;
	ecx = to32i(edx+0x18); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48546A;
	to32i(ecx+0x20) = 0; //mov
loc_48546A:
	edx = to32i(dword_563F10); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)dword_563F14; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	xor_(edx, edx);
loc_48547E:
	eax = to32i(dword_563F10); //mov
	cmp(edx, to32i(eax));
	if (jz())
		goto loc_485490;
	test(ecx, ecx);
	if (jz())
		goto loc_485490;
	cmp(ecx, to32i(eax+0x18));
	if (jz())
		goto loc_485493;
loc_485490:
	pop32(edx);
	pop32(ecx);
	return;
loc_485493:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_48547E;
}
Fn(void) Game::_sub_48549C()
{
	push32(ecx);
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BC4C(); esp += 4; //call
	test(eax, eax);
	if (ja())
		goto loc_4854B5;
loc_4854AE:
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_4854B5:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BB40(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4854AE;
loc_4854C8:
	edx = to32i(ecx+0x18); //mov
	test(edx, edx);
	if (jz())
		goto loc_4854D9;
	eax = to32i(dword_563F10); //mov
	cmp(edx, to32i(eax+0x14));
	if (jnz())
		goto loc_485505;
loc_4854D9:
	eax = to32i(dword_563F10); //mov
	edx = ecx; //mov
	add(eax, (int32_t)0x1C);
loc_4854E3:
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(ecx+4); //mov
	call(to32i(ecx+0x24));
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BB40(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4854C8;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_485505:
	add(eax, (int32_t)0x38);
	edx = ecx; //mov
	goto loc_4854E3;
}
Fn(void) Game::_sub_48550C()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	edx = to32i(dword_563F10); //mov
	esi = (int32_t)(intptr_t)(eax+eax); //lea
	test(edx, edx);
	if (jnz())
		goto loc_4855FD;
loc_485521:
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(eax, esi);
	shl(eax, (int32_t)3);
	ecx = (int32_t)(intptr_t)(eax+0x8C); //lea
	eax = (int32_t)(intptr_t)aAsyncreader; //mov
	edx = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = ecx; //mov
	to32i(dword_563F10) = eax; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	esp -= 4; _sub_4848EC(); esp += 4; //call
	ecx = to32i(dword_563F10); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	to32i(ecx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x1C); //lea
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	add(eax, (int32_t)0x38);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	ecx = to32i(dword_563F10); //mov
	add(ecx, (int32_t)0x8C);
loc_4855A9:
	eax = to32i(dword_563F10); //mov
	edx = ecx; //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	add(ecx, (int32_t)0x28);
	dec(esi);
	if (jnz())
		goto loc_4855A9;
	ebx = 3; //mov
	edx = 4; //mov
	eax = (int32_t)(intptr_t)sub_48549C; //mov
	ecx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_483DD0(); esp += 4; //call
	push32(dword_563F14);
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)sub_485C38; //mov
	xor_(edx, edx);
	esp -= 4; _sub_489AE0(); esp += 4; //call
	xor_(ecx, ecx);
	eax = to32i(dword_563F10); //mov
	ebx = to32i(eax); //mov
	cmp(ecx, ebx);
	if (jz())
		goto loc_485607;
	pop32(esi);
	pop32(ecx);
	return;
loc_4855FD:
	esp -= 4; _sub_48561C(); esp += 4; //call
	goto loc_485521;
loc_485607:
	eax = ebx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	ebx = to32i(eax); //mov
	cmp(ecx, ebx);
	if (jz())
		goto loc_485607;
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48561C()
{
	push32(edx);
	push32(ebp);
	edx = to32i(dword_563F10); //mov
	test(edx, edx);
	if (jnz())
		goto loc_48562B;
	pop32(ebp);
	pop32(edx);
	return;
loc_48562B:
	to32i(edx+4) = 1; //mov
	esp -= 4; _sub_485450(); esp += 4; //call
	xor_(edx, edx);
loc_485639:
	eax = to32i(dword_563F10); //mov
	cmp(edx, to32i(eax));
	if (jz())
		goto loc_48564B;
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_485639;
loc_48564B:
	push32(edi);
	push32(esi);
	push32(ecx);
	push32(ebx);
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_485699;
loc_48565D:
	ebx = to32i(edx+0x1C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48566B;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_48566B:
	esi = to32i(edx+0x18); //mov
	test(esi, esi);
	if (jz())
		goto loc_485679;
	eax = esi; //mov
	esp -= 4; _sub_484928(); esp += 4; //call
loc_485679:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48565D;
loc_485699:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x38);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4856E8;
loc_4856AC:
	edi = to32i(edx+0x1C); //mov
	test(edi, edi);
	if (jz())
		goto loc_4856BA;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4856BA:
	ebp = to32i(edx+0x18); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4856C8;
	eax = ebp; //mov
	esp -= 4; _sub_484928(); esp += 4; //call
loc_4856C8:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x38);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4856AC;
loc_4856E8:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_485737;
loc_4856FB:
	ebx = to32i(edx+0x1C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_485709;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_485709:
	esi = to32i(edx+0x18); //mov
	test(esi, esi);
	if (jz())
		goto loc_485717;
	eax = esi; //mov
	esp -= 4; _sub_484928(); esp += 4; //call
loc_485717:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4856FB;
loc_485737:
	eax = (int32_t)(intptr_t)sub_48549C; //mov
	esp -= 4; _sub_483E64(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x38);
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	edx = to32i(eax+8); //mov
	test(edx, edx);
	if (jz())
		goto loc_485788;
	eax = edx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
loc_485788:
	eax = to32i(dword_563F10); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_563F10) = ecx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	pop32(ebp);
	pop32(edx);
}
Fn(void) Game::_sub_485930()
{
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	esi = eax; //mov
	to32i(esp) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4859BA;
	push32(edx);
	to32i(esi+8) = 0; //mov
	to32i(esi+0xC) = 0; //mov
	to32i(esi+0x10) = 0; //mov
	to32i(esi+0x20) = 2; //mov
	to32i(esi+0x24) = 0; //mov
	eax = to32i(dword_4DB2E8); //mov
	to32i(esi+0x18) = 0; //mov
	edx = to32i(dword_4DABE8); //mov
	to32i(esi+4) = eax; //mov
	inc(eax);
	to32i(esi+0x14) = edx; //mov
	to32i(dword_4DB2E8) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_4859C0;
	to32i(esi+0x1C) = ebp; //mov
loc_485996:
	eax = to32i(dword_563F10); //mov
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	edx = to32i(dword_563F10); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)dword_563F14; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	pop32(edx);
loc_4859BA:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	return;
loc_4859C0:
	push32(edi);
	push32(ecx);
	push32(ebx);
	edi = ebp; //mov
	ebx = edx; //mov
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
	eax = (int32_t)(intptr_t)aAsyncfile; //mov
	edx = (int32_t)(intptr_t)(ecx+1); //lea
	esp -= 4; _sub_484498(); esp += 4; //call
	edi = eax; //mov
	to32i(esi+0x1C) = eax; //mov
	esi = ebp; //mov
	push32(edi);
loc_4859E6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4859FE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4859E6;
loc_4859FE:
	pop32(edi);
	pop32(ebx);
	pop32(ecx);
	pop32(edi);
	goto loc_485996;
}
Fn(void) Game::_sub_485A10()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	edi = ebx; //mov
	edx = ecx; //mov
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_485A37;
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	return;
loc_485A37:
	eax = to32i(dword_4DB2E8); //mov
	to32i(ecx+4) = eax; //mov
	inc(eax);
	ebx = to32i(dword_563F10); //mov
	to32i(dword_4DB2E8) = eax; //mov
	eax = to32i(ebx+0xC); //mov
	to32i(ecx+0x20) = 3; //mov
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x1C) = 0; //mov
	add(eax, esi);
	to32i(ecx+0x24) = edx; //mov
	to32i(ecx+0xC) = eax; //mov
	eax = to32i(esp); //mov
	to32i(ecx+8) = eax; //mov
	eax = to32i(dword_4DABE8); //mov
	edx = ecx; //mov
	to32i(ecx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebx+0x70); //lea
	to32i(ecx+0x10) = edi; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	edx = to32i(dword_563F10); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)dword_563F14; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = to32i(ecx+4); //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_485AA4()
{
	push32(ecx);
	xor_(ecx, ecx);
	esp -= 4; _sub_485A10(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_485BDC()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_563F10); //mov
	edx = (int32_t)(intptr_t)sub_485440; //mov
	add(ecx, (int32_t)0x38);
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48BE10(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_485C00;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_485C00:
	eax = to32i(dword_563F10); //mov
	edx = ecx; //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	cmp(to32i(ecx+0x20), (int32_t)0);
	if (jz())
		goto loc_485C1E;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_485C1E:
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_485C38()
{
	static const void *const off_485C28[] = {
		&&loc_485CE7,
		&&loc_485E9E,
		&&loc_485F33,
		&&loc_485FDB,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x108);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_563F10); //mov
	to32i(eax) = edx; //mov
	to32i(eax+0x18) = 0; //mov
	to32i(eax+4) = 0; //mov
loc_485C60:
	eax = to32i(dword_563F10); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_485CA8;
	ecx = to32i(eax+8); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_486026;
loc_485C76:
	eax = to32i(dword_563F10); //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0x18) = 0; //mov
	eax = to32i(eax); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax) = 0; //mov
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_485CA8:
	add(eax, (int32_t)0x70);
	esp -= 4; _sub_48BB40(); esp += 4; //call
	ebp = eax; //mov
	to32i(esp+0x104) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_486015;
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = ebp; //mov
	edx = to32i(ebp+0x20); //mov
	dec(edx);
	cmp(edx, (int32_t)3);
	if (jbe())
		goto loc_485CE0;
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_485CE0:
	goto *off_485C28[edx];
loc_485CE7:
	edi = esp; //mov
	esi = to32i(ebp+0x1C); //mov
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	push32(edi);
loc_485CF4:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_485D0C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_485CF4;
loc_485D0C:
	pop32(edi);
	eax = to32i(ebp+0x1C); //mov
	ecx = (int32_t)(intptr_t)(ebp+0x10); //lea
	esp -= 4; _sub_4848FC(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(ebp+0xC); //lea
	eax = esp; //mov
	to32i(ebp+0x1C) = 0; //mov
	esp -= 4; _sub_4877B4(); esp += 4; //call
	to32i(ebp+0x18) = 0; //mov
	ecx = to32i(esp+0x100); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_485E74;
	eax = to32i(ebp+0x10); //mov
	edx = eax; //mov
	ecx = 0x1C2; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = to32i(ebp+8); //mov
	ecx = (int32_t)(intptr_t)(eax+0x190); //lea
	test(ebx, ebx);
	if (jnz())
		goto loc_485E64;
	eax = esp; //mov
	ebx = to32i(ebp+0x14); //mov
	edx = to32i(ebp+0x10); //mov
	esp -= 4; _sub_48447C(); esp += 4; //call
	to32i(ebp+0x18) = eax; //mov
	eax = to32i(eax); //mov
	to32i(ebp+8) = eax; //mov
loc_485D74:
	eax = ecx; //mov
	esp -= 4; _sub_4A5068(); esp += 4; //call
	esp -= 4; _sub_4A513C(); esp += 4; //call
	eax = to32i(esp+0x100); //mov
	edx = to32i(esp+0x104); //mov
	esp -= 4; _sub_459B40(); esp += 4; //call
	eax = to32i(esp+0x100); //mov
	edx = to32i(edx+0xC); //mov
	ebx = to32i(esp+0x104); //mov
	esp -= 4; _sub_487968(); esp += 4; //call
	edx = to32i(esp+0x104); //mov
	eax = to32i(esp+0x100); //mov
	ebx = to32i(ebx+0x10); //mov
	edx = to32i(edx+8); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_485DD4;
	eax = to32i(esp+0x104); //mov
	to32i(eax+0x20) = 0; //mov
loc_485DD4:
	eax = to32i(esp+0x100); //mov
	esp -= 4; _sub_459B00(); esp += 4; //call
	eax = to32i(esp+0x100); //mov
	xor_(esi, esi);
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	to32i(esp+0x100) = esi; //mov
	cmp(to32i(eax+0x20), (int32_t)0);
	if (jnz())
		goto loc_485E32;
	edx = to32i(esp+0x104); //mov
	eax = to32i(dword_563F10); //mov
	edx = to32i(edx+0x18); //mov
	cmp(edx, to32i(eax+0x14));
	if (jz())
		goto loc_485E32;
	eax = to32i(esp+0x104); //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_484928(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	to32i(eax+0x18) = esi; //mov
	to32i(eax+8) = esi; //mov
loc_485E32:
	eax = to32i(esp+0x104); //mov
	cmp(to32i(eax+0x24), (int32_t)0);
	if (jz())
		goto loc_485E79;
	eax = to32i(dword_563F10); //mov
	edx = to32i(esp+0x104); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_485E64:
	eax = to32i(dword_563F10); //mov
	eax = to32i(eax+0x14); //mov
	to32i(ebp+0x18) = eax; //mov
	goto loc_485D74;
loc_485E74:
	to32i(ebp+8) = ecx; //mov
	goto loc_485E32;
loc_485E79:
	eax = to32i(dword_563F10); //mov
	edx = to32i(esp+0x104); //mov
	add(eax, (int32_t)0x38);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_485E9E:
	ebp = to32i(eax+8); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_485EAC;
	eax = ebp; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
loc_485EAC:
	eax = to32i(dword_563F10); //mov
	to32i(eax+8) = 0; //mov
	eax = to32i(esp+0x104); //mov
	cmp(to32i(eax+0x1C), (int32_t)0);
	if (jz())
		goto loc_485F0E;
	eax = 0x190; //mov
	esp -= 4; _sub_4A5068(); esp += 4; //call
	esp -= 4; _sub_4A513C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	ecx = (int32_t)(intptr_t)(eax+0x10); //lea
	ebx = (int32_t)(intptr_t)(eax+0xC); //lea
	edx = (int32_t)(intptr_t)(eax+8); //lea
	eax = to32i(esp+0x104); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	to32i(eax+0x1C) = 0; //mov
loc_485F0E:
	eax = to32i(dword_563F10); //mov
	edx = to32i(esp+0x104); //mov
	add(eax, (int32_t)0x1C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_485F33:
	esi = to32i(eax+8); //mov
	test(esi, esi);
	if (jz())
		goto loc_485FD6;
	eax = to32i(ebp+0x10); //mov
	edx = eax; //mov
	ecx = 0x1C2; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(eax, (int32_t)0x190);
	esp -= 4; _sub_4A5068(); esp += 4; //call
	esp -= 4; _sub_4A513C(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	eax = to32i(eax+8); //mov
	esp -= 4; _sub_459B40(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	edx = to32i(ebp+0xC); //mov
	eax = to32i(eax+8); //mov
	esp -= 4; _sub_487968(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	ebx = to32i(ebp+0x10); //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(eax+8); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_485F93;
	to32i(ebp+0x20) = eax; //mov
loc_485F93:
	eax = to32i(dword_563F10); //mov
	eax = to32i(eax+8); //mov
	esp -= 4; _sub_459B00(); esp += 4; //call
loc_485FA0:
	eax = to32i(esp+0x104); //mov
	cmp(to32i(eax+0x24), (int32_t)0);
	if (jz())
		goto loc_485E79;
	eax = to32i(dword_563F10); //mov
	edx = to32i(esp+0x104); //mov
	add(eax, (int32_t)0x54);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_485FD6:
	to32i(ebp+0x20) = esi; //mov
	goto loc_485FA0;
loc_485FDB:
	ebx = to32i(eax+8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_485FE9;
	eax = ebx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
loc_485FE9:
	eax = to32i(dword_563F10); //mov
	add(eax, (int32_t)0x1C);
	edx = to32i(esp+0x104); //mov
	to32i(eax-0x14) = 0; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(dword_563F10); //mov
	to32i(eax+0x18) = 0; //mov
	goto loc_485C60;
loc_486015:
	eax = to32i(dword_563F10); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_485C60;
loc_486026:
	eax = ecx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	goto loc_485C76;
}
Fn(void) Game::_sub_486040()
{
	push32(edx);
	edx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_486053;
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_486053:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48606E;
	xor_(edx, edx);
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	return;
loc_48606E:
	edx = 1; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_486080()
{
	push32(ecx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4860A5;
	cmp(ebx, (int32_t)0x7F);
	if (jg())
		goto loc_48609A;
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_4860AC;
loc_48609A:
	edx = 0xFFFFFFF8; //mov
loc_48609F:
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_4860A5:
	edx = 0xFFFFFFF6; //mov
	goto loc_48609F;
loc_4860AC:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48612D;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	shl(edx, (int32_t)5);
	add(ecx, edx);
	test(esi, esi);
	if (jle())
		goto loc_48613D;
loc_4860D7:
	push32(edi);
	edi = (uint8_t)to8i(ecx+0x3B); //movzx
	test(edi, edi);
	if (jz())
		goto loc_486144;
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	ebp = (int32_t)(intptr_t)(ecx+0x600); //lea
loc_4860EB:
	xor_(edx, edx);
	dl = to8i(ecx+0x3B); //mov
	cmp(edx, edi);
	if (jnz())
		goto loc_486118;
	cmp(to8i(ecx+0xC), (int8_t)1);
	if (jnz())
		goto loc_486118;
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_486118;
	eax = ebx; //mov
	shl(eax, (int32_t)0x10);
	to32i(ecx+0x1C) = eax; //mov
	edx = eax; //mov
	eax = to32i(ecx+0x20); //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	to32i(ecx+0x18) = eax; //mov
loc_486118:
	add(ecx, (int32_t)0x60);
	cmp(ecx, ebp);
	if (jnz())
		goto loc_4860EB;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(edx, edx);
	pop32(edi);
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_48612D:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	edx = 0xFFFFFFF8; //mov
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_48613D:
	esi = 1; //mov
	goto loc_4860D7;
loc_486144:
	shl(ebx, (int32_t)0x10);
	to32i(ecx+0x1C) = ebx; //mov
	edx = ebx; //mov
	ebx = to32i(ecx+0x20); //mov
	sub(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	to32i(ecx+0x18) = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(edx, edx);
	pop32(edi);
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_486170()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC1C);
	to32i(esp+0xC10) = eax; //mov
	edx = 0xFFFFFFFF; //mov
	ecx = 7; //mov
	eax = 0x80; //mov
	esi = 0xFFFFFFFF; //mov
	to32i(esp+0xC14) = edx; //mov
	ebx = edx; //mov
	to32i(esp+0xC08) = ecx; //mov
	xor_(ecx, ecx);
loc_4861A9:
	add(ecx, (int32_t)0xC);
	to32i(esp+ecx-0xC) = esi; //mov
	cmp(ecx, (int32_t)0xC00);
	if (jnz())
		goto loc_4861A9;
	esi = to32i(esp+0xC10); //mov
	esi = to32i(dword_59C5B0+esi*8); //mov
	cmp(to8i(esi+4), (int8_t)1);
	if (jb())
		goto loc_4861D2;
	xor_(eax, eax);
	ax = to16i(esi+6); //mov
loc_4861D2:
	xor_(edi, edi);
	ebp = esi; //mov
	to32i(esp+0xC18) = edi; //mov
	test(eax, eax);
	if (jle())
		goto loc_48628B;
	edx = to32i(esp+0xC10); //mov
	shl(eax, (int32_t)2);
	shl(edx, (int32_t)3);
	xor_(ecx, ecx);
	to32i(esp+0xC00) = edx; //mov
	edx = (int32_t)(intptr_t)(esi+8); //lea
	to32i(esp+0xC0C) = eax; //mov
	to32i(esp+0xC04) = edx; //mov
	edi = esi; //mov
loc_48620E:
	cmp(to8i(esi+4), (int8_t)2);
	if (jb())
		goto loc_4862D0;
	ebp = esi; //mov
	eax = to32i(edi+0xC); //mov
loc_48621D:
	test(eax, eax);
	if (jz())
		goto loc_48626B;
	cmp(to8i(esi+4), (int8_t)2);
	if (jb())
		goto loc_4862D8;
	eax = (int32_t)(intptr_t)(ecx+ebp); //lea
	edx = (int32_t)(intptr_t)(ebp+0xC); //lea
	ebx = to32i(eax+0xC); //mov
	add(edx, ecx);
	add(edx, ebx);
	to32i(eax+0xC) = edx; //mov
loc_48623B:
	eax = edx; //mov
	edx = to32i(esp+0xC00); //mov
	ebx = esp; //mov
	edx = to32i(dword_59C5B4+edx); //mov
	esp -= 4; _sub_4A4C20(); esp += 4; //call
	ebx = eax; //mov
	cmp(eax, (int32_t)7);
	if (jz())
		goto loc_486263;
	to32i(esp+0xC08) = 8; //mov
loc_486263:
	test(ebx, ebx);
	if (jl())
		goto loc_4862F1;
loc_48626B:
	eax = to32i(esp+0xC18); //mov
	edx = to32i(esp+0xC0C); //mov
	add(edi, (int32_t)4);
	inc(eax);
	add(ecx, (int32_t)4);
	to32i(esp+0xC18) = eax; //mov
	cmp(ecx, edx);
	if (jl())
		goto loc_48620E;
loc_48628B:
	edx = to32i(esp+0xC14); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_4862B8;
	xor_(ecx, ecx);
	test(edx, edx);
	if (jl())
		goto loc_4862B8;
	edi = to32i(esp+0xC14); //mov
loc_4862A4:
	eax = to32i(esp+0xC10); //mov
	edx = ecx; //mov
	inc(ecx);
	esp -= 4; _sub_4A4AD0(); esp += 4; //call
	cmp(ecx, edi);
	if (jle())
		goto loc_4862A4;
loc_4862B8:
	test(ebx, ebx);
	if (jl())
		goto loc_486302;
	eax = to32i(esp+0xC08); //mov
	add(esp, (int32_t)0xC1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4862D0:
	eax = to32i(edi+8); //mov
	goto loc_48621D;
loc_4862D8:
	eax = (int32_t)(intptr_t)(esi+ecx); //lea
	edx = to32i(esp+0xC04); //mov
	ebx = to32i(eax+8); //mov
	add(edx, ecx);
	add(edx, ebx);
	to32i(eax+8) = edx; //mov
	goto loc_48623B;
loc_4862F1:
	eax = to32i(esp+0xC18); //mov
	dec(eax);
	to32i(esp+0xC14) = eax; //mov
	goto loc_48628B;
loc_486302:
	eax = ebx; //mov
	add(esp, (int32_t)0xC1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_486314()
{
	test(eax, eax);
	if (jl())
		goto loc_486327;
	cmp(eax, (int32_t)0xA);
	if (jge())
		goto loc_486327;
	cmp(to32i(dword_59C5B0+eax*8), (int32_t)0);
	if (jnz())
		goto loc_48632D;
loc_486327:
	eax = 0xFFFFFFF8; //mov
	return;
loc_48632D:
	xor_(eax, eax);
}
Fn(void) Game::_sub_486330()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC00);
	esi = eax; //mov
	edi = edx; //mov
	edx = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
loc_486345:
	add(ecx, (int32_t)0xC);
	to32i(esp+ecx-0xC) = edx; //mov
	cmp(ecx, (int32_t)0xC00);
	if (jnz())
		goto loc_486345;
	xor_(ecx, ecx);
	test(edi, edi);
	if (jle())
		goto loc_48636C;
loc_48635A:
	ebx = esp; //mov
	edx = ecx; //mov
	eax = esi; //mov
	inc(ecx);
	esp -= 4; _sub_4A48C0(); esp += 4; //call
	cmp(ecx, edi);
	if (jl())
		goto loc_48635A;
loc_48636C:
	xor_(eax, eax);
	add(esp, (int32_t)0xC00);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48637C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	eax = edx; //mov
	dl = to8i(byte_4DDA74); //mov
	edi = 0xFFFFFFF7; //mov
	test(dl, dl);
	if (jz())
		goto loc_4863DC;
	cmp(to32i(eax), (int32_t)0x6C4B4E42);
	if (jnz())
		goto loc_4863E6;
	edx = (int32_t)(intptr_t)dword_59C5B0; //mov
	ebp = to32i(dword_59C5B0); //mov
	xor_(ecx, ecx);
	test(ebp, ebp);
	if (jz())
		goto loc_4863BA;
loc_4863AC:
	inc(ecx);
	add(edx, (int32_t)8);
	cmp(ecx, (int32_t)0xA);
	if (jge())
		goto loc_4863FB;
	cmp(to32i(edx), (int32_t)0);
	if (jnz())
		goto loc_4863AC;
loc_4863BA:
	to32i(edx) = eax; //mov
	eax = ecx; //mov
	to32i(edx+4) = ebx; //mov
	esp -= 4; _sub_486170(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4863F0;
	edx = (int32_t)(intptr_t)sub_486404; //mov
	to32i(esi) = ecx; //mov
	to32i(dword_4DDA8C) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4863DC:
	eax = 0xFFFFFFF6; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4863E6:
	eax = 0xFFFFFFF9; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4863F0:
	to32i(edx) = 0; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4863FB:
	eax = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_486404()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	ah = to8i(byte_4DDA74); //mov
	esi = 0x80; //mov
	test(ah, ah);
	if (jz())
		goto loc_486432;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48643B;
	xor_(edx, edx);
loc_48641F:
	eax = edx; //mov
	inc(edx);
	esp -= 4; _sub_486404(); esp += 4; //call
	cmp(edx, (int32_t)0xA);
	if (jl())
		goto loc_48641F;
	xor_(eax, eax);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_486432:
	eax = 0xFFFFFFF6; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_48643B:
	eax = ecx; //mov
	esp -= 4; _sub_486314(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_486496;
	push32(ebx);
	edx = (int32_t)(intptr_t)dword_59BFB0; //mov
	ebx = (int32_t)(intptr_t)(edx+0x600); //lea
loc_486452:
	eax = to32i(edx+7); //mov
	sar(eax, (int32_t)0x18);
	cmp(eax, ecx);
	if (jnz())
		goto loc_486463;
	eax = to32i(edx); //mov
	esp -= 4; _sub_489840(); esp += 4; //call
loc_486463:
	add(edx, (int32_t)0x60);
	cmp(edx, ebx);
	if (jnz())
		goto loc_486452;
	eax = to32i(dword_59C5B0+ecx*8); //mov
	cmp(to8i(eax+4), (int8_t)1);
	if (jb())
		goto loc_48647D;
	xor_(esi, esi);
	si = to16i(eax+6); //mov
loc_48647D:
	edx = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_486330(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_59C5B0+ecx*8) = edx; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_486496:
	eax = 0xFFFFFFF8; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4864A0()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4864B8;
	cmp(edx, (int32_t)0x7F);
	if (jg())
		goto loc_4864B2;
	test(edx, edx);
	if (jge())
		goto loc_4864BE;
loc_4864B2:
	eax = 0xFFFFFFF8; //mov
	return;
loc_4864B8:
	eax = 0xFFFFFFF6; //mov
	return;
loc_4864BE:
	push32(ecx);
	push32(ebx);
	to8i(byte_4DCEDE) = dl; //mov
	ecx = to32i(dword_4DCE6C); //mov
	ebx = edx; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_486080(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
}
Fn(void) Game::_strncpy_()
{
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	goto loc_4864ED;
loc_4864E2:
	cl = to8i(edx); //mov
	test(cl, cl);
	if (jz())
		goto loc_4864F1;
	inc(edx);
	dec(ebx);
	to8i(eax) = cl; //mov
	inc(eax);
loc_4864ED:
	test(ebx, ebx);
	if (jnz())
		goto loc_4864E2;
loc_4864F1:
	test(ebx, ebx);
	if (jz())
		goto loc_4864FC;
	dec(ebx);
	to8i(eax) = 0; //mov
	inc(eax);
	goto loc_4864F1;
loc_4864FC:
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sprintf_()
{
	push32(ecx);
	push32(edx);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	push32(to32i(esp+0x14));
	push32(to32i(esp+0x14));
	eax = vsprintf_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8));
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_toupper_()
{
	cmp(eax, (int32_t)0x61);
	if (jl())
		goto locret_48652F;
	cmp(eax, (int32_t)0x7A);
	if (jg())
		goto locret_48652F;
	sub(eax, (int32_t)0x20);
locret_48652F:
	return;
}
Fn(void) Game::___CHP()
{
	push32(eax);
	fstcw(to16i(esp));
	push32(to32i(esp));
	to8i(esp+1) = 0x1F; //mov
	fldcw(to16i(esp));
	frndint();
	fldcw(to16i(esp+4));
	esp = (int32_t)(intptr_t)(esp+8); //lea
}
Fn(void) Game::_sub_486550()
{
	eax = (uint8_t)byte_4DB2F4[eax]; //movzx
}
Fn(void) Game::_sub_486560()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	xor_(ecx, ecx);
	ebx = to32i(dword_4DD714); //mov
	to32i(dword_4DD798) = ecx; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_486584;
	cmp(edx, to32i(dword_4DD718));
	if (jz())
		goto loc_4866BD;
loc_486584:
	push32(edi);
	push32(esi);
	to32i(dword_4DD714) = eax; //mov
	to32i(dword_4DD718) = edx; //mov
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	ecx = eax; //mov
	shr(ecx, (int32_t)0x10);
	and_(ecx, (int32_t)0xFF);
	to32i(esp+0x24) = ecx; //mov
	ecx = eax; //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0x1C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_49B2E0(); esp += 4; //call
	edx = eax; //mov
	xor_(edi, edi);
	shr(edx, (int32_t)0x10);
	to32i(esp+0x38) = edi; //mov
	and_(edx, (int32_t)0xFF);
	to32i(esp+0x34) = edi; //mov
	to32i(esp+0x2C) = edx; //mov
	edx = eax; //mov
	and_(eax, (int32_t)0xFF);
	shr(edx, (int32_t)8);
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	and_(edx, (int32_t)0xFF);
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	to32i(esp+0x28) = edx; //mov
	add(esi, eax);
	ebp = (int32_t)(intptr_t)(edx*4+0); //lea
	eax = esi; //mov
	shl(esi, (int32_t)2);
	add(ebp, edx);
	sub(esi, eax);
	eax = ebp; //mov
	shl(ebp, (int32_t)2);
	shr(ecx, (int32_t)8);
	sub(ebp, eax);
	eax = to32i(esp+0x30); //mov
	and_(ecx, (int32_t)0xFF);
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	to32i(esp+0x20) = ecx; //mov
	add(ebx, eax);
	xor_(ecx, ecx);
	eax = ebx; //mov
	shl(ebx, (int32_t)2);
	xor_(edx, edx);
	sub(ebx, eax);
loc_486631:
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	shr(eax, (int32_t)4);
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+0x38); //mov
	add(eax, ebp);
	shr(eax, (int32_t)4);
	to32i(esp+0xC) = eax; //mov
	eax = to32i(esp+0x34); //mov
	add(eax, ebx);
	shr(eax, (int32_t)4);
	to32i(esp+0x10) = eax; //mov
	add(edi, to32i(esp+0x24));
	eax = to32i(esp+0x20); //mov
	add(to32i(esp+0x38), eax);
	eax = to32i(esp+0x1C); //mov
	add(to32i(esp+0x34), eax);
	sub(esi, to32i(esp+0x2C));
	sub(ebp, to32i(esp+0x28));
	sub(ebx, to32i(esp+0x30));
	eax = to32i(esp+8); //mov
	shl(eax, (int32_t)0x10);
	or_(eax, ecx);
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0xC); //mov
	shl(eax, (int32_t)8);
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x14); //mov
	or_(eax, to32i(esp+0x18));
	add(edx, (int32_t)4);
	or_(eax, to32i(esp+0x10));
	add(ecx, (int32_t)0x10000000);
	esp -= 4; _sub_48266C(); esp += 4; //call
	to32i(dword_4DD718+edx) = eax; //mov
	cmp(edx, (int32_t)0x40);
	if (jnz())
		goto loc_486631;
	esp -= 4; _sub_4A6354(); esp += 4; //call
	pop32(esi);
	pop32(edi);
loc_4866BD:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4866D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	edi = edx; //mov
	esi = ecx; //mov
	edx = ebx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_486715;
loc_4866DF:
	eax = edx; //mov
	sar(eax, (int32_t)1);
	imul32(eax, esi);
	ebx = (int32_t)(intptr_t)(edi+eax); //lea
	ecx = 2; //mov
	eax = ebx; //mov
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = ebp; //mov
	sub(ecx, eax);
	eax = ecx; //mov
	if (jz())
		goto loc_48671B;
	test(ecx, ecx);
	if (jle())
		goto loc_48670F;
	dec(edx);
	edi = (int32_t)(intptr_t)(ebx+esi); //lea
loc_48670F:
	sar(edx, (int32_t)1);
	test(edx, edx);
	if (jnz())
		goto loc_4866DF;
loc_486715:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48671B:
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_486724()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	ecx = (int32_t)(intptr_t)(eax-0x20); //lea
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	shl(eax, (int32_t)2);
	edx = to32i(dword_4DD76C); //mov
	sub(eax, ecx);
	ebx = (int32_t)(intptr_t)(edx+eax); //lea
	ecx = 2; //mov
	eax = ebx; //mov
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, esi);
	if (jnz())
		goto loc_486765;
	eax = ebx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_486765:
	ecx = 0xB; //mov
	ebx = to32i(dword_4DD75C); //mov
	eax = esi; //mov
	esp -= 4; _sub_4866D0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48677C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = to32i(dword_4DD790); //mov
	edi = eax; //mov
	to32i(esp) = edx; //mov
	eax = to32i(dword_4DD794); //mov
	xor_(edx, edx);
	test(esi, esi);
	if (jle())
		goto loc_4867BF;
loc_486799:
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	bx = di; //mov
	cx = to16i(eax+2); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_4867B7;
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	cx = to16i(esp); //mov
	bx = to16i(eax); //mov
	cmp(ebx, ecx);
	if (jz())
		goto loc_4867C9;
loc_4867B7:
	inc(edx);
	add(eax, (int32_t)8);
	cmp(edx, esi);
	if (jl())
		goto loc_486799;
loc_4867BF:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4867C9:
	eax = to32i(eax+1); //mov
	sar(eax, (int32_t)0x18);
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4867D8()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x44);
	to32i(esp+0x20) = eax; //mov
	to32i(esp) = eax; //mov
	eax = to32i(dword_4DD77C); //mov
	ebp = 0xFFFFFFFF; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4DD788); //mov
	esi = to32i(dword_4DD6EC); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(dword_4DD78C); //mov
	edx = to32i(dword_4DD6F4); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(dword_4DD794); //mov
	ecx = to32i(dword_4DD6F8); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(dword_4DD6F0); //mov
	xor_(ebx, ebx);
	add(eax, ecx);
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp+0x40) = eax; //mov
	eax = to32i(dword_4DD6EC); //mov
	to32i(esp+0x38) = ebx; //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(dword_4DD780); //mov
	add(esi, edx);
	test(eax, eax);
	if (jnz())
		goto loc_48694E;
loc_486850:
	eax = 0x20; //mov
	esp -= 4; _sub_486724(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_486959;
loc_486862:
	eax = to32i(esp+0x38); //mov
	to32i(esp+0x34) = eax; //mov
	eax = esp; //mov
	inc(ebp);
	call(to32i(esp+0xC));
	ebx = eax; //mov
	to32i(esp+0x38) = eax; //mov
	cmp(eax, (int32_t)0x20);
	if (jle())
		goto loc_48697C;
	esp -= 4; _sub_486724(); esp += 4; //call
	edx = eax; //mov
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_486862;
	ecx = 2; //mov
	add(eax, (int32_t)4);
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = 2; //mov
	to32i(esp+0x28) = eax; //mov
	eax = (int32_t)(intptr_t)(edx+6); //lea
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = to32i(esp+0x18); //mov
	xor_(ecx, ecx);
	to32i(esp+0x24) = eax; //mov
	to32i(esp+4) = ecx; //mov
	to32i(esp+8) = ecx; //mov
	test(edx, edx);
	if (jz())
		goto loc_4868E2;
	edx = to32i(esp+0x34); //mov
	eax = ebx; //mov
	esp -= 4; _sub_48677C(); esp += 4; //call
	add(esi, eax);
loc_4868E2:
	eax = to32i(edi+6); //mov
	sar(eax, (int32_t)0x18);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	to32i(esp+0x30) = edx; //mov
	eax = to32i(edi+7); //mov
	edx = to32i(esp+0x40); //mov
	sar(eax, (int32_t)0x18);
	add(edx, eax);
	ecx = to32i(esp+0x3C); //mov
	to32i(esp+0x2C) = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_486968;
loc_486907:
	ebx = to32i(dword_4DD760); //mov
	xor_(eax, eax);
	push32(ebx);
	al = to8i(edi+3); //mov
	edx = to32i(esp+0x30); //mov
	push32(eax);
	xor_(eax, eax);
	ecx = to32i(esp+0x10); //mov
	al = to8i(edi+2); //mov
	add(edx, ecx);
	push32(eax);
	eax = to32i(esp+0x30); //mov
	ecx = to32i(esp+0x10); //mov
	push32(eax);
	eax = to32i(esp+0x40); //mov
	ebx = to32i(dword_4DD770); //mov
	add(eax, ecx);
	ecx = to32i(esp+0x38); //mov
	call(to32i(esp+0x20));
	eax = to32i(edi+5); //mov
	sar(eax, (int32_t)0x18);
	add(esi, eax);
	goto loc_486862;
loc_48694E:
	call(to32i(dword_4DD780));
	goto loc_486850;
loc_486959:
	eax = to32i(eax+5); //mov
	sar(eax, (int32_t)0x18);
	to32i(esp+0x1C) = eax; //mov
	goto loc_486862;
loc_486968:
	ebx = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	ecx = ebp; //mov
	call(to32i(esp+0x3C));
	goto loc_486907;
loc_48697C:
	test(eax, eax);
	if (jnz())
		goto loc_4869B5;
	cmp(to32i(dword_4DD784), (int32_t)0);
	if (jnz())
		goto loc_486A25;
loc_48698D:
	eax = to32i(dword_4DD6F4); //mov
	edx = to32i(esp+0x40); //mov
	sub(esi, eax);
	eax = to32i(dword_4DD6F8); //mov
	sub(edx, eax);
	to32i(dword_4DD6EC) = esi; //mov
	to32i(dword_4DD6F0) = edx; //mov
	add(esp, (int32_t)0x44);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4869B5:
	cmp(eax, (int32_t)0xA);
	if (jnz())
		goto loc_4869DB;
	edx = to32i(dword_4DD704); //mov
	edi = to32i(dword_4DD708); //mov
	eax = to32i(esp+0x40); //mov
	add(edx, edi);
	add(eax, edx);
	esi = to32i(esp+0x14); //mov
	to32i(esp+0x40) = eax; //mov
	goto loc_486862;
loc_4869DB:
	cmp(to32i(dword_4DB544), (int32_t)0);
	if (jnz())
		goto loc_4869ED;
loc_4869E4:
	add(esi, to32i(esp+0x1C));
	goto loc_486862;
loc_4869ED:
	cmp(eax, (int32_t)9);
	if (jnz())
		goto loc_4869E4;
	ebx = to32i(dword_4DB540); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_486862;
	shl(ebx, (int32_t)2);
	xor_(edx, edx);
loc_486A05:
	eax = to32i(dword_4DB544); //mov
	add(eax, edx);
	edi = to32i(eax); //mov
	cmp(esi, edi);
	if (jge())
		goto loc_486A19;
	esi = edi; //mov
	goto loc_486862;
loc_486A19:
	add(edx, (int32_t)4);
	cmp(edx, ebx);
	if (jl())
		goto loc_486A05;
	goto loc_486862;
loc_486A25:
	call(to32i(dword_4DD784));
	goto loc_48698D;
}
Fn(void) Game::_sub_486A30()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4871F8(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4867D8(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_486B40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_486B8E;
loc_486B4D:
	edx = eax; //mov
	sar(edx, (int32_t)1);
	add(edx, edi);
	test(al, (int8_t)1);
	if (jz())
		goto loc_486B92;
	xor_(ecx, ecx);
	cl = to8i(edx); //mov
	sar(ecx, (int32_t)4);
loc_486B5E:
	dl = cl; //mov
	test(cl, cl);
	if (jz())
		goto loc_486B89;
	ecx = eax; //mov
	sar(ecx, (int32_t)1);
	add(ecx, esi);
	test(al, (int8_t)1);
	if (jz())
		goto loc_486B9D;
	dh = to8i(ecx); //mov
	and_(dh, (int8_t)0xF);
	xor_(ecx, ecx);
	cl = dh; //mov
	and_(edx, (int32_t)0xFF);
	shl(edx, (int32_t)4);
loc_486B80:
	or_(edx, ecx);
	ecx = eax; //mov
	sar(ecx, (int32_t)1);
	to8i(ecx+esi) = dl; //mov
loc_486B89:
	inc(eax);
	cmp(eax, ebx);
	if (jl())
		goto loc_486B4D;
loc_486B8E:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_486B92:
	dl = to8i(edx); //mov
	xor_(ecx, ecx);
	and_(dl, (int8_t)0xF);
	cl = dl; //mov
	goto loc_486B5E;
loc_486B9D:
	dh = to8i(ecx); //mov
	and_(dh, (int8_t)0xF0);
	xor_(ecx, ecx);
	cl = dh; //mov
	and_(edx, (int32_t)0xFF);
	goto loc_486B80;
}
Fn(void) Game::_sub_486BB0()
{
	push32(ecx);
loc_486BB1:
	cl = to8i(eax); //mov
	inc(eax);
	cmp(cl, (int8_t)0xFF);
	if (jnz())
		goto loc_486BBF;
	inc(edx);
	dec(ebx);
	if (jnz())
		goto loc_486BB1;
	pop32(ecx);
	return;
loc_486BBF:
	to8i(edx) = cl; //mov
	inc(edx);
	dec(ebx);
	if (jnz())
		goto loc_486BB1;
	pop32(ecx);
}
Fn(void) Game::_sub_486BC8()
{
	push32(ecx);
loc_486BC9:
	cx = to16i(eax); //mov
	test(cx, cx);
	if (jnz())
		goto loc_486BDC;
	add(eax, (int32_t)2);
	add(edx, (int32_t)2);
	dec(ebx);
	if (jnz())
		goto loc_486BC9;
	pop32(ecx);
	return;
loc_486BDC:
	to16i(edx) = cx; //mov
	add(eax, (int32_t)2);
	add(edx, (int32_t)2);
	dec(ebx);
	if (jnz())
		goto loc_486BC9;
	pop32(ecx);
}
Fn(void) Game::_sub_486BEC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = 3; //mov
	esi = eax; //mov
loc_486BF6:
	ecx = edi; //mov
	eax = esi; //mov
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	test(eax, eax);
	if (jnz())
		goto loc_486C1A;
	add(esi, (int32_t)3);
	add(edx, (int32_t)3);
	dec(ebx);
	if (jnz())
		goto loc_486BF6;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_486C1A:
	al = to8i(esi); //mov
	to8i(edx) = al; //mov
	al = to8i(esi+1); //mov
	to8i(edx+1) = al; //mov
	al = to8i(esi+2); //mov
	to8i(edx+2) = al; //mov
	add(esi, (int32_t)3);
	add(edx, (int32_t)3);
	dec(ebx);
	if (jnz())
		goto loc_486BF6;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_486C38()
{
	push32(ecx);
	push32(esi);
loc_486C3A:
	ecx = to32i(eax); //mov
	esi = ecx; //mov
	shr(esi, (int32_t)0x18);
	test(esi, esi);
	if (jnz())
		goto loc_486C51;
	add(eax, (int32_t)4);
	add(edx, (int32_t)4);
	dec(ebx);
	if (jnz())
		goto loc_486C3A;
	pop32(esi);
	pop32(ecx);
	return;
loc_486C51:
	to32i(edx) = ecx; //mov
	add(eax, (int32_t)4);
	add(edx, (int32_t)4);
	dec(ebx);
	if (jnz())
		goto loc_486C3A;
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_486C60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x404);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	edx = eax; //mov
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_486D04;
	xor_(ebp, ebp);
loc_486C86:
	ecx = to32i(dword_570E60+ebp*4); //mov
	to32i(esp+0x400) = ecx; //mov
	xor_(ecx, ecx);
	to32i(dword_4DB564) = ecx; //mov
	to32i(dword_570E60+ebp*4) = ecx; //mov
	cmp(edx, (int32_t)8);
	if (jnz())
		goto loc_486CD5;
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jnz())
		goto loc_486CD5;
	edx = esp; //mov
	eax = esi; //mov
	ecx = 0x7B; //mov
	esp -= 4; _sub_499EC0(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_4A66EC; //mov
	to32i(dword_563F28) = eax; //mov
	to32i(dword_4DB56C) = ecx; //mov
	to32i(dword_4DB564) = edx; //mov
loc_486CD5:
	ecx = (int32_t)(intptr_t)off_4DB54C; //mov
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	xor_(ebx, ebx);
	eax = to32i(esp+0x400); //mov
	to32i(dword_4DB56C) = ebx; //mov
	to32i(dword_570E60+ebp*4) = eax; //mov
	add(esp, (int32_t)0x404);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_486D04:
	ebp = 0xFF; //mov
	goto loc_486C86;
}
Fn(void) Game::_sub_486D10()
{
	push32(ebx);
	push32(edx);
	ebx = to32i(eax+0xC); //mov
	edx = to32i(eax+0xC); //mov
	shl(ebx, (int32_t)4);
	shl(edx, (int32_t)0x14);
	sar(ebx, (int32_t)0x14);
	sar(edx, (int32_t)0x14);
	esp -= 4; _sub_486C60(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_486D2C()
{
	push32(ecx);
	ecx = to32i(eax+8); //mov
	sar(ecx, (int32_t)0x10);
	sub(ebx, ecx);
	ecx = to32i(eax+6); //mov
	sar(ecx, (int32_t)0x10);
	sub(edx, ecx);
	esp -= 4; _sub_486C60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_486D80()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	xor_(eax, eax);
	cmp(ebx, (int32_t)0x3A);
	if (jz())
		goto loc_486E15;
	goto loc_486DBE;
loc_486D9D:
	eax = (int32_t)(intptr_t)(ecx+ebx); //lea
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)0x80);
	if (jl())
		goto loc_486DBB;
	cmp(eax, (int32_t)0x90);
	if (jl())
		goto loc_486DB8;
	and_(eax, (int32_t)0x7F);
loc_486DB8:
	shl(eax, (int32_t)8);
loc_486DBB:
	pop32(ecx);
	pop32(ebx);
	return;
loc_486DBE:
	cmp(to8i(byte_4DB311), (int8_t)0);
	if (jz())
		goto loc_486DE5;
	cmp(to32i(dword_4DB2EC), (int32_t)0);
	if (jz())
		goto loc_486DD5;
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_486DDC;
loc_486DD5:
	ecx = (int32_t)(intptr_t)byte_4DB485; //mov
	goto loc_486D9D;
loc_486DDC:
	_ExitProcess0();
loc_486DE5:
	cmp(to8i(byte_4DB31E), (int8_t)0);
	if (jz())
		goto loc_486DF5;
loc_486DEE:
	ecx = (int32_t)(intptr_t)byte_4DB3CF; //mov
	goto loc_486D9D;
loc_486DF5:
	cmp(to8i(byte_4DB32A), (int8_t)0);
	if (jnz())
		goto loc_486DEE;
	cmp(to32i(dword_4DB2F0), (int32_t)0);
	if (jz())
		goto loc_486E0E;
	ecx = (int32_t)(intptr_t)byte_4DB42A; //mov
	goto loc_486D9D;
loc_486E0E:
	ecx = (int32_t)(intptr_t)byte_4DB374; //mov
	goto loc_486D9D;
loc_486E15:
	cmp(to32i(dword_4DB2F0), (int32_t)0);
	if (jnz())
		goto loc_486E2C;
	ecx = 1; //mov
	to32i(dword_4DB2F0) = ecx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_486E2C:
	xor_(ecx, ecx);
	to32i(dword_4DB2F0) = ecx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_486E38()
{
	esp -= 4; _sub_482030(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
}
Fn(void) Game::_sub_486E44()
{
	esp -= 4; _sub_482030(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
	goto loc_4A67A8;
loc_4A67A8:
	push32(edx);
	dec(to32i(dword_4DDC4A));
	if (jnz())
		goto loc_4A67F0;
	edx = eax; //mov
	or_(dl, dl);
	if (jz())
		goto loc_4A67D8;
	and_(edx, (int32_t)0x7F);
	dl = (int32_t)(intptr_t)byte_4DDB44[edx]; //mov
loc_4A67C0:
	dec(edx);
	if (jl())
		goto loc_4A67F0;
	push32(edi);
	push32(esi);
	call(to32i(dword_4DDC4E+edx*4));
	pop32(esi);
	pop32(edi);
	xor_(eax, eax);
	inc(to32i(dword_4DDC4A));
	pop32(edx);
	return;
loc_4A67D8:
	edx = (uint8_t)dh; //movzx
	cmp(edx, (int32_t)0x84);
	if (jl())
		goto loc_4A67E8;
	edx = 0x84; //mov
loc_4A67E8:
	dl = (int32_t)(intptr_t)byte_4DDBC4[edx]; //mov
	goto loc_4A67C0;
loc_4A67F0:
	inc(to32i(dword_4DDC4A));
	pop32(edx);
}
Fn(void) Game::_sub_486E54()
{
	to32i(off_4DB570) = eax; //mov
}
Fn(void) Game::_sub_486E5C()
{
	cmp(to32i(off_4DB570), (int32_t)0);
	if (jnz())
		goto loc_486E68;
	xor_(eax, eax);
	return;
loc_486E68:
	call(to32i(off_4DB570));
}
Fn(void) Game::_sub_486EE8()
{
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_4DAB38), (int32_t)0);
	if (jz())
		goto loc_486F10;
loc_486EF3:
	ecx = 1; //mov
	edx = 0x80; //mov
	eax = (int32_t)(intptr_t)byte_4DB2F4; //mov
	to32i(dword_5635D8) = ecx; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	return;
loc_486F10:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DAB38) = eax; //mov
	goto loc_486EF3;
}
Fn(void) Game::_sub_486F1C()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_5635D8) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_486F28()
{
loc_sub_486F28:
	esp -= 4; _sub_482030(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_sub_486F28;
}
Fn(void) Game::_sub_486F40()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_486F5C(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_486F50()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_486F5C(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_486F5C()
{
	esp -= 4; _sub_486F84(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_486F67;
	eax = to32i(eax); //mov
locret_486F67:
	return;
}
Fn(void) Game::_sub_486F84()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	ebp = ebx; //mov
	esp -= 4; _sub_4A4624(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_486FB5;
loc_486F9E:
	cmp(to32i(dword_4DDD50), (int32_t)0);
	if (jnz())
		goto loc_48703B;
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_486FB5:
	eax = 0xC8; //mov
	ecx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4A5124(); esp += 4; //call
	push32(ebx);
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_487668(); esp += 4; //call
	edx = to32i(esp); //mov
	test(edx, edx);
	if (jnz())
		goto loc_486FE9;
	ecx = to32i(esp+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_486F9E;
	eax = ecx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	goto loc_486F9E;
loc_486FE9:
	ebx = to32i(esp+0xC); //mov
	ecx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_4844D4(); esp += 4; //call
	ecx = eax; //mov
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48702D;
	eax = to32i(esp); //mov
	edx = eax; //mov
	ebx = 0x1C2; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	add(eax, (int32_t)0xC8);
	esp -= 4; _sub_4A5124(); esp += 4; //call
	ebx = to32i(esp); //mov
	eax = to32i(esp+8); //mov
	edx = to32i(ecx); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(dword_4DABEC) = eax; //mov
loc_48702D:
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	goto loc_486F9E;
loc_48703B:
	ebx = to32i(esp+0xC); //mov
	ecx = ebp; //mov
	edx = esi; //mov
	eax = edi; //mov
	call(to32i(dword_4DDD50));
	edi = eax; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_487060()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = eax; //mov
	ecx = to32i(eax+0x1C); //mov
	add(ecx, eax);
	eax = to32i(eax+0xD); //mov
	sar(eax, (int32_t)0x18);
	to32i(dword_4DD6F4) = eax; //mov
	eax = to32i(edx+0xE); //mov
	ebx = 0x64; //mov
	sar(eax, (int32_t)0x18);
	esi = 1; //mov
	to32i(dword_4DD6F8) = eax; //mov
	eax = to32i(edx+0xF); //mov
	to32i(dword_4DD768) = edx; //mov
	sar(eax, (int32_t)0x18);
	xor_(edi, edi);
	to32i(dword_4DD704) = eax; //mov
	eax = to32i(edx+0x10); //mov
	to32i(dword_4DD764) = ebx; //mov
	sar(eax, (int32_t)0x18);
	to32i(dword_4DD700) = esi; //mov
	to32i(dword_4DD708) = eax; //mov
	ebx = eax; //mov
	eax = to32i(dword_4DD704); //mov
	to32i(dword_4DD798) = edi; //mov
	add(ebx, eax);
	to32i(dword_4DD794) = edi; //mov
	eax = ebx; //mov
	to32i(dword_4DD70C) = ebx; //mov
	xor_(eax, ebx);
	to32i(dword_4DD710) = ebx; //mov
	ax = to16i(edx+0xA); //mov
	ebx = edx; //mov
	to32i(dword_4DD75C) = eax; //mov
	eax = to32i(edx+0x14); //mov
	to32i(dword_4DD770) = ecx; //mov
	add(ebx, eax);
	eax = ecx; //mov
	to32i(dword_4DD76C) = ebx; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	to32i(dword_4DD6FC) = eax; //mov
	ebx = to32i(ecx+2); //mov
	eax = ecx; //mov
	sar(ebx, (int32_t)0x10);
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	imul32(eax, ebx);
	add(eax, (int32_t)7);
	and_(al, (int8_t)0xF8);
	sar(eax, (int32_t)3);
	to32i(dword_4DD760) = eax; //mov
	eax = to32i(edx+0xC); //mov
	sar(eax, (int32_t)0x10);
	and_(eax, (int32_t)3);
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_487146;
	cmp(to32i(dword_4DD75C), (int32_t)0xFF);
	if (jle())
		goto loc_48717E;
loc_487146:
	to32i(dword_4DD788) = (int32_t)(intptr_t)sub_4A688C; //mov
loc_487150:
	edx = 0x10; //mov
	xor_(edi, edi);
	eax = (int32_t)(intptr_t)dword_4DD71C; //mov
	to32i(dword_4DD714) = edi; //mov
	to32i(dword_4DD718) = edi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	esp -= 4; _sub_4A62F8(); esp += 4; //call
	to32i(dword_4DD78C) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48717E:
	ecx = 2; //mov
	eax = (int32_t)(intptr_t)(edx+0x20); //lea
	eax = to32i(ecx+eax-4); //mov
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0xFF);
	if (ja())
		goto loc_487146;
	to32i(dword_4DD788) = (int32_t)(intptr_t)sub_4A6860; //mov
	goto loc_487150;
}
Fn(void) Game::_sub_4871B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0x2D; //mov
	esi = (int32_t)(intptr_t)dword_4DD6E8; //mov
	edi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4871C8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0x2D; //mov
	edi = (int32_t)(intptr_t)dword_4DD6E8; //mov
	esi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_4A6354(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4871F0()
{
	eax = to32i(dword_4DD70C); //mov
}
Fn(void) Game::_sub_4871F8()
{
	to32i(dword_4DD6EC) = eax; //mov
	to32i(dword_4DD6F0) = edx; //mov
}
Fn(void) Game::_sub_487220()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = edx; //mov
	to32i(esp+4) = ecx; //mov
	ecx = to32i(esp+0x1C); //mov
	esi = (uint8_t)to8i(byte_4DB25C); //movzx
	to32i(esp) = eax; //mov
	add(esi, (int32_t)7);
	add(eax, ebx);
	and_(si, (int16_t)0xFFF8);
	to32i(esp+8) = eax; //mov
loc_487247:
	edx = to32i(esp+4); //mov
	dec(edx);
	to32i(esp+4) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4872D8;
	edi = to32i(esp); //mov
	cmp(edi, to32i(esp+8));
	if (jge())
		goto loc_487284;
loc_487262:
	edx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_4A68D0(); esp += 4; //call
	edx = eax; //mov
	cmp(esi, (int32_t)0x10);
	if (jnb())
		goto loc_487287;
	cmp(esi, (int32_t)8);
	if (jnz())
		goto loc_48727B;
	inc(ecx);
	to8i(ecx-1) = dl; //mov
loc_48727B:
	ebx = to32i(esp+8); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jl())
		goto loc_487262;
loc_487284:
	inc(ebp);
	goto loc_487247;
loc_487287:
	if (ja())
		goto loc_48729C;
	add(ecx, (int32_t)2);
	to16i(ecx-2) = ax; //mov
	ebx = to32i(esp+8); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jl())
		goto loc_487262;
	inc(ebp);
	goto loc_487247;
loc_48729C:
	cmp(esi, (int32_t)0x18);
	if (jb())
		goto loc_48727B;
	if (jbe())
		goto loc_4872BA;
	cmp(esi, (int32_t)0x20);
	if (jnz())
		goto loc_48727B;
	add(ecx, (int32_t)4);
	to32i(ecx-4) = eax; //mov
	ebx = to32i(esp+8); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jl())
		goto loc_487262;
	inc(ebp);
	goto loc_487247;
loc_4872BA:
	ebx = 3; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	add(ecx, (int32_t)3);
	ebx = to32i(esp+8); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jl())
		goto loc_487262;
	inc(ebp);
	goto loc_487247;
loc_4872D8:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4872E4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(eax, eax);
	al = to8i(byte_4DB25C); //mov
	add(eax, (int32_t)7);
	and_(al, (int8_t)0xF8);
	edx = to32i(dword_4DB24C); //mov
	ecx = eax; //mov
	eax = to32i(dword_4DB254); //mov
	sub(eax, edx);
	ebx = to32i(dword_4DB250); //mov
	edx = eax; //mov
	eax = to32i(dword_4DB258); //mov
	sub(eax, ebx);
	imul32(edx, eax);
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	add(eax, (int32_t)0x12);
	cmp(ecx, (int32_t)8);
	if (jnz())
		goto loc_487331;
	add(eax, (int32_t)0x300);
loc_487331:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_487338()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x308);
	esi = eax; //mov
	ecx = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_4DB25C); //mov
	edx = to32i(dword_4DB24C); //mov
	add(eax, (int32_t)7);
	ebp = to32i(dword_4DB258); //mov
	and_(al, (int8_t)0xF8);
	ebx = to32i(dword_4DB250); //mov
	edi = eax; //mov
	eax = to32i(dword_4DB254); //mov
	sub(ebp, ebx);
	sub(eax, edx);
	ebx = 1; //mov
	to32i(esp+0x304) = eax; //mov
	xor_(edx, edx);
	eax = esi; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 1; //mov
	cmp(edi, (int32_t)8);
	if (jnz())
		goto loc_4874F8;
	edx = ebx; //mov
loc_487396:
	eax = (int32_t)(intptr_t)(ecx+1); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 1; //mov
	cmp(edi, (int32_t)8);
	if (jnz())
		goto loc_4874FF;
	edx = ebx; //mov
loc_4873AE:
	eax = (int32_t)(intptr_t)(ecx+2); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)(ecx+3); //lea
	xor_(edx, edx);
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 2; //mov
	cmp(edi, (int32_t)8);
	if (jnz())
		goto loc_487509;
	edx = 0x100; //mov
loc_4873D8:
	eax = (int32_t)(intptr_t)(ecx+5); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 1; //mov
	cmp(edi, (int32_t)8);
	if (jnz())
		goto loc_487510;
	edx = 0x18; //mov
loc_4873F3:
	eax = (int32_t)(intptr_t)(ecx+7); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 2; //mov
	edx = to32i(dword_4DB24C); //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	eax = to32i(dword_4DB248); //mov
	sub(eax, to32i(dword_4DB258));
	edx = (int32_t)(intptr_t)(ecx+0xA); //lea
	ebx = 2; //mov
	to32i(esp+0x300) = edx; //mov
	edx = eax; //mov
	eax = to32i(esp+0x300); //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 2; //mov
	edx = to32i(esp+0x304); //mov
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)(ecx+0xE); //lea
	edx = ebp; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)(ecx+0x10); //lea
	edx = edi; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	ebx = 1; //mov
	edx = 0x20; //mov
	eax = (int32_t)(intptr_t)(ecx+0x11); //lea
	add(esi, (int32_t)0x12);
	esp -= 4; _sub_48C06F(); esp += 4; //call
	cmp(edi, (int32_t)8);
	if (jnz())
		goto loc_4874B4;
	ebx = esp; //mov
	edx = 0x100; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4A03E0(); esp += 4; //call
	xor_(eax, eax);
loc_487492:
	inc(esi);
	inc(esi);
	dl = to8i(esp+eax); //mov
	inc(esi);
	bl = to8i(esp+eax+2); //mov
	cl = to8i(esp+eax+1); //mov
	to8i(esi-3) = bl; //mov
	to8i(esi-2) = cl; //mov
	add(eax, (int32_t)3);
	to8i(esi-1) = dl; //mov
	cmp(eax, (int32_t)0x300);
	if (jnz())
		goto loc_487492;
loc_4874B4:
	eax = to32i(dword_4DB258); //mov
	ecx = to32i(dword_4DB250); //mov
	ebx = to32i(dword_4DB24C); //mov
	sub(eax, ecx);
	edx = to32i(dword_4DB250); //mov
	ecx = eax; //mov
	eax = to32i(dword_4DB254); //mov
	push32(esi);
	sub(eax, ebx);
	edi = ebx; //mov
	ebx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_487220(); esp += 4; //call
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jz())
		goto loc_487517;
	add(esp, (int32_t)0x308);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4874F8:
	xor_(edx, edx);
	goto loc_487396;
loc_4874FF:
	edx = 2; //mov
	goto loc_4873AE;
loc_487509:
	xor_(edx, edx);
	goto loc_4873D8;
loc_487510:
	xor_(edx, edx);
	goto loc_4873F3;
loc_487517:
	ebx = to32i(esp+0x304); //mov
	imul32(ebx, ebp);
	edx = esi; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A6988(); esp += 4; //call
	add(esp, (int32_t)0x308);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_487538()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x70);
	esi = eax; //mov
	esp -= 4; _sub_4872E4(); esp += 4; //call
	ebx = eax; //mov
	esp -= 4; _sub_49E3E0(); esp += 4; //call
	xor_(edx, edx);
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48755F;
	eax = edx; //mov
	add(esp, (int32_t)0x70);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48755F:
	esp -= 4; _sub_487338(); esp += 4; //call
	eax = esp; //mov
	esp -= 4; _sub_4A4030(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	edx = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_4A4054(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_49E448(); esp += 4; //call
	eax = edx; //mov
	add(esp, (int32_t)0x70);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4875B0()
{
	push32(ecx);
	xor_(ecx, ecx);
	esp -= 4; _sub_4875BC(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4875BC()
{
	sub(esp, (int32_t)0x28);
	to32i(esp) = edx; //mov
	to32i(esp+0x14) = ebx; //mov
	edx = to32i(dword_4DABE8); //mov
	ebx = ecx; //mov
	to32i(esp+0x18) = edx; //mov
	edx = esp; //mov
	esp -= 4; _sub_4875FC(); esp += 4; //call
	add(esp, (int32_t)0x28);
}
Fn(void) Game::_sub_4875FC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	eax = edx; //mov
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_484DA4(); esp += 4; //call
	ebp = eax; //mov
	eax = edx; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4844D0(); esp += 4; //call
	edx = esp; //mov
	esi = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4877C4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_487634;
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_487634:
	eax = to32i(esp); //mov
	ebx = ebp; //mov
	edx = esi; //mov
	esp -= 4; _sub_487960(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esp); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = edx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_487668()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	to32i(esp+8) = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
	edi = ecx; //mov
	edx = 0x305; //mov
	xor_(ecx, ecx);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48768F;
	ebp = (int32_t)(intptr_t)(esp+4); //lea
loc_48768F:
	test(edi, edi);
	if (jnz())
		goto loc_487695;
	edi = esp; //mov
loc_487695:
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	ecx = esi; //mov
	to32i(edi) = 0; //mov
	xor_(ebx, ebx);
	to32i(ebp+0) = 0; //mov
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48776C;
	cmp(to32i(dword_4DB5F8), (int32_t)0);
	if (jz())
		goto loc_4876CD;
	cmp(to8i(byte_4DB574), (int8_t)0);
	if (jnz())
		goto loc_4876DA;
loc_4876CD:
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4876DA:
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)byte_4DB574; //mov
	ecx = esi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4876CD;
	ebx = to32i(dword_4DB600); //mov
	edx = to32i(dword_4DB5F4); //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_45A070(); esp += 4; //call
	to32i(dword_4DB600) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48772A;
loc_48770C:
	ecx = to32i(esp+0x10); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4876CD;
	eax = to32i(esi); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	to32i(esi) = ecx; //mov
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48772A:
	edx = to32i(esp+8); //mov
	eax = to32i(dword_4DB5F4); //mov
	call(to32i(dword_4DB5F8));
	to32i(ebp+0) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48770C;
	edx = eax; //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_459D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48770C;
	eax = to32i(dword_4DB5FC); //mov
	ebx = 1; //mov
	eax = to32i(eax); //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(edi) = eax; //mov
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48776C:
	ebx = 1; //mov
	push32(0);
	ecx = edi; //mov
	eax = to32i(esi); //mov
	xor_(edx, edx);
	to32i(esp+0x14) = ebx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_45A420(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4876CD;
	eax = to32i(esi); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	to32i(esi) = 0; //mov
	xor_(esi, esi);
	to32i(edi) = 0; //mov
	to32i(esp+0x10) = esi; //mov
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4877B4()
{
	push32(1);
	esp -= 4; _sub_487668(); esp += 4; //call
}
Fn(void) Game::_sub_4877BC()
{
	push32(0);
	esp -= 4; _sub_487668(); esp += 4; //call
}
Fn(void) Game::_sub_4877C4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = edx; //mov
	ebp = ebx; //mov
	esi = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4877D8;
	ebp = (int32_t)(intptr_t)(esp+4); //lea
loc_4877D8:
	test(esi, esi);
	if (jnz())
		goto loc_4877DE;
	esi = esp; //mov
loc_4877DE:
	edx = 0x332; //mov
	ecx = edi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48780A;
	to32i(edi) = eax; //mov
	to32i(esp+8) = eax; //mov
	to32i(esi) = eax; //mov
loc_4877F8:
	eax = to32i(esp+8); //mov
	to32i(ebp+0) = 0; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48780A:
	edx = 1; //mov
	push32(0);
	ecx = esi; //mov
	eax = to32i(edi); //mov
	xor_(ebx, ebx);
	to32i(esp+0xC) = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_45A420(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4877F8;
	eax = to32i(edi); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	xor_(ecx, ecx);
	to32i(edi) = 0; //mov
	to32i(esp+8) = ecx; //mov
	to32i(esi) = 0; //mov
	eax = to32i(esp+8); //mov
	to32i(ebp+0) = 0; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_487854()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	to32i(esp+0xC) = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
	edi = ecx; //mov
	edx = 0x805; //mov
	xor_(ecx, ecx);
	to32i(esp+8) = edx; //mov
	to32i(esp+0x10) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48787B;
	ebp = (int32_t)(intptr_t)(esp+4); //lea
loc_48787B:
	test(edi, edi);
	if (jnz())
		goto loc_487881;
	edi = esp; //mov
loc_487881:
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0xC); //mov
	ecx = esi; //mov
	to32i(edi) = 0; //mov
	xor_(ebx, ebx);
	to32i(ebp+0) = 0; //mov
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4878C2;
	cmp(to32i(dword_4DB5F8), (int32_t)0);
	if (jz())
		goto loc_4878B5;
	cmp(to8i(byte_4DB574), (int8_t)0);
	if (jnz())
		goto loc_4878F7;
loc_4878B5:
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4878C2:
	push32(0);
	ecx = edi; //mov
	eax = to32i(esi); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_45A420(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4878E2;
	eax = to32i(esi); //mov
	esp -= 4; _sub_459AC0(); esp += 4; //call
	to32i(esp+0x10) = eax; //mov
	goto loc_4878B5;
loc_4878E2:
	eax = to32i(esi); //mov
	esp -= 4; _sub_459B80(); esp += 4; //call
	to32i(esi) = 0; //mov
	to32i(edi) = 0; //mov
	goto loc_4878B5;
loc_4878F7:
	edx = to32i(esp+8); //mov
	eax = (int32_t)(intptr_t)byte_4DB574; //mov
	ecx = esi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_45A560(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4878B5;
	eax = to32i(esi); //mov
	edx = to32i(esp+0xC); //mov
	esp -= 4; _sub_459AC0(); esp += 4; //call
	esi = eax; //mov
	call(to32i(dword_4DB5F8));
	to32i(ebp+0) = eax; //mov
	add(eax, esi);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4DB5FC); //mov
	eax = to32i(eax); //mov
	to32i(edi) = eax; //mov
	eax = to32i(esp+0x10); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_487950()
{
	_sub_459B80(); return; //jmp
}
Fn(void) Game::_sub_487958()
{
	_sub_45A070(); return; //jmp
}
Fn(void) Game::_sub_487960()
{
	_sub_459E40(); return; //jmp
}
Fn(void) Game::_sub_487968()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_459D60(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_487976;
	pop32(ecx);
	return;
loc_487976:
	eax = ecx; //mov
	esp -= 4; _sub_459CB0(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4879AE()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = DeleteFileA_wrap(to32i(esp + 0)); esp += 4;
	test(eax, eax);
	if (jnz())
		goto loc_4879C4;
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4879C4:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4879D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	xor_(edx, edx);
	xor_(ah, ah);
	to32i(dword_4DB61C) = edx; //mov
	to32i(dword_4DB618) = edx; //mov
	to32i(dword_4DB614) = edx; //mov
	to32i(dword_4DABC0) = edx; //mov
	to32i(dword_4DABBC) = edx; //mov
	to32i(dword_4DABB8) = edx; //mov
	to32i(dword_4DABB4) = edx; //mov
	to32i(dword_4DABB0) = edx; //mov
	to32i(dword_4DABAC) = edx; //mov
	to32i(dword_4DABA8) = edx; //mov
	to32i(dword_4DABA4) = edx; //mov
	to8i(byte_4DB604) = ah; //mov
	esp -= 4; _sub_4A6EA8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_487B93;
	eax = esp; //mov
	ecx = 0xC; //mov
	esi = (int32_t)(intptr_t)(esp+4); //lea
	edi = (int32_t)(intptr_t)byte_4DB604; //mov
	to32i(esp+0x10) = edx; //mov
	esp -= 4; _sub_4A6EC5(); esp += 4; //call
	xor_(bl, bl);
	edx = to32i(esp); //mov
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
	to8i(byte_4DB610) = bl; //mov
	test(edx, edx);
	if (jg())
		goto loc_487A74;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_487A74:
	edx = 1; //mov
	eax = esp; //mov
	esp -= 4; _sub_4A6EC5(); esp += 4; //call
	eax = to32i(esp); //mov
	and_(eax, (int32_t)0xF00);
	sar(eax, (int32_t)8);
	to32i(dword_4DB614) = eax; //mov
	eax = to32i(esp); //mov
	and_(eax, (int32_t)0xF0);
	sar(eax, (int32_t)4);
	to32i(dword_4DB618) = eax; //mov
	eax = to32i(esp); //mov
	and_(eax, (int32_t)0xF);
	ebp = to32i(dword_4DB614); //mov
	to32i(dword_4DB61C) = eax; //mov
	cmp(ebp, (int32_t)5);
	if (jl())
		goto loc_487AC0;
	to32i(dword_4DABA4) = 1; //mov
loc_487AC0:
	cmp(to32i(dword_4DB614), (int32_t)6);
	if (jl())
		goto loc_487AD3;
	to32i(dword_4DABA8) = 1; //mov
loc_487AD3:
	edx = (int32_t)(intptr_t)aGenuineintel; //mov
	eax = (int32_t)(intptr_t)byte_4DB604; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_487B39;
	to32i(dword_4DABB8) = 1; //mov
loc_487AF0:
	test(to8i(esp+0xA), (int8_t)0x80);
	if (jz())
		goto loc_487B7A;
	eax = 1; //mov
loc_487B00:
	cl = to8i(esp+8); //mov
	to32i(dword_4DABAC) = eax; //mov
	test(cl, (int8_t)0x10);
	if (jz())
		goto loc_487B7E;
	eax = 1; //mov
loc_487B17:
	ch = to8i(esp+9); //mov
	to32i(dword_4DABB0) = eax; //mov
	test(ch, (int8_t)0x80);
	if (jz())
		goto loc_487B82;
	eax = 1; //mov
	to32i(dword_4DABB4) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_487B39:
	edx = (int32_t)(intptr_t)aAuthenticamd; //mov
	eax = (int32_t)(intptr_t)byte_4DB604; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_487B58;
	to32i(dword_4DABC0) = 1; //mov
	goto loc_487AF0;
loc_487B58:
	edx = (int32_t)(intptr_t)aCyrixinstead; //mov
	eax = (int32_t)(intptr_t)byte_4DB604; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_487AF0;
	to32i(dword_4DABBC) = 1; //mov
	goto loc_487AF0;
loc_487B7A:
	xor_(eax, eax);
	goto loc_487B00;
loc_487B7E:
	xor_(eax, eax);
	goto loc_487B17;
loc_487B82:
	xor_(eax, eax);
	to32i(dword_4DABB4) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_487B93:
	esp -= 4; _sub_4A6EE1(); esp += 4; //call
	to32i(dword_4DABBC) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_487F70()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x80);
	ebp = edx; //mov
	edi = esp; //mov
	esi = eax; //mov
	push32(edi);
loc_487F81:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_487F99;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_487F81;
loc_487F99:
	pop32(edi);
	edi = esp; //mov
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
	eax = esp; //mov
	add(eax, ecx);
	edx = esp; //mov
	dec(eax);
	cmp(eax, edx);
	if (jbe())
		goto loc_487FB8;
loc_487FB1:
	dl = to8i(eax); //mov
	cmp(dl, (int8_t)0x2E);
	if (jnz())
		goto loc_487FFD;
loc_487FB8:
	cmp(to8i(eax), (int8_t)0x2E);
	if (jz())
		goto loc_487FE7;
	edi = esp; //mov
	esi = to32i(off_4DB628); //mov
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
loc_487FCE:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_487FE6;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_487FCE;
loc_487FE6:
	pop32(edi);
loc_487FE7:
	eax = esp; //mov
	esp -= 4; _sub_4A4624(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_488015;
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_487FFD:
	cmp(dl, (int8_t)0x3A);
	if (jz())
		goto loc_487FB8;
	cmp(dl, (int8_t)0x2F);
	if (jz())
		goto loc_487FB8;
	cmp(dl, (int8_t)0x5C);
	if (jz())
		goto loc_487FB8;
	edx = esp; //mov
	dec(eax);
	cmp(eax, edx);
	if (ja())
		goto loc_487FB1;
	goto loc_487FB8;
loc_488015:
	eax = esp; //mov
	edx = ebp; //mov
	esp -= 4; _sub_49D9B8(); esp += 4; //call
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_488048()
{
	esp -= 4; _sub_487F70(); esp += 4; //call
	edx = eax; //mov
	xor_(eax, eax);
	test(edx, edx);
	if (jz())
		goto locret_488057;
	eax = to32i(edx); //mov
locret_488057:
	return;
}
