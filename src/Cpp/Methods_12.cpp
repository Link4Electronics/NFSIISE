#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_48E7F0()
{
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ebp = eax; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E80B;
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edx);
	return;
loc_48E80B:
	push32(edi);
	push32(esi);
	push32(ecx);
	push32(ebx);
	edx = 0xEA616C77; //mov
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	ecx = 1; //mov
	to32i(esp+0x10) = edx; //mov
	ebx = 0x18; //mov
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	eax = ebp; //mov
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edx);
}
Fn(void) Game::_sub_48E844()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ebp = eax; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E869;
loc_48E85D:
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E869:
	edx = 0xEA627965; //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	ebx = 0x18; //mov
	to32i(esp) = edx; //mov
	eax = ebp; //mov
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	xor_(ecx, ecx);
	edx = esp; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E85D;
	to32i(ebp+0xA0) = 0; //mov
	eax = 1; //mov
	to32i(ebp+0xA4) = 0; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48E8B4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x108);
	to32i(esp+0x104) = eax; //mov
	to32i(esp+0x100) = edx; //mov
	to32i(esp+0xF8) = ebx; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E930;
	edx = 0xEA726571; //mov
	ecx = to32i(esp+0x100); //mov
	to32i(esp) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48E93D;
	esi = ecx; //mov
loc_48E8F6:
	edi = (int32_t)(intptr_t)(esp+4); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	ecx = 1; //mov
	esi = to32i(esp+0x104); //mov
	ebx = 0xAC; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(esi+0x8C); //lea
	edx = esp; //mov
	eax = to32i(esp+0x104); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E949;
loc_48E930:
	xor_(eax, eax);
loc_48E932:
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48E93D:
	esi = to32i(esp+0x104); //mov
	add(esi, (int32_t)0x1C);
	goto loc_48E8F6;
loc_48E949:
	edx = (int32_t)(intptr_t)(esp+0xAC); //lea
	eax = (int32_t)(intptr_t)dword_564460; //mov
	xor_(ebx, ebx);
	esi = 0xEA676574; //mov
	to32i(esp+0xEC) = ebx; //mov
	ebx = 0x40; //mov
	edi = to32i(esp+0x100); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	to32i(esp) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_48EAE3;
	esi = edi; //mov
loc_48E981:
	edi = (int32_t)(intptr_t)(esp+4); //lea
	ebx = 4; //mov
	edx = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 0x78; //mov
	edx = esp; //mov
	eax = to32i(esp+0x104); //mov
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E9C9;
	cmp(to32i(dword_5643F4), (int32_t)0xEA706C79);
	if (jz())
		goto loc_48EAF2;
loc_48E9C9:
	eax = to32i(esp+0x104); //mov
	add(eax, (int32_t)0x1C);
	to32i(esp+0xF4) = eax; //mov
	xor_(eax, eax);
	to32i(esp+0xF0) = eax; //mov
loc_48E9E3:
	eax = to32i(esp+0xF0); //mov
	ebp = 1; //mov
	to32i(esp+0xFC) = eax; //mov
loc_48E9F6:
	eax = to32i(esp+0xFC); //mov
	test(to32i(esp+eax+0xAC), ebp);
	if (jz())
		goto loc_48EAA3;
	ecx = 0xEA676574; //mov
	ebx = to32i(esp+0x100); //mov
	to32i(esp) = ecx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48EB37;
	esi = ebx; //mov
loc_48EA23:
	edi = (int32_t)(intptr_t)(esp+4); //lea
	ebx = 4; //mov
	edx = to32i(esp+0xEC); //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 0x78; //mov
	edx = esp; //mov
	eax = to32i(esp+0x104); //mov
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48EAA3;
	cmp(to32i(dword_5643F4), (int32_t)0xEA706C79);
	if (jnz())
		goto loc_48EAA3;
	ecx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0xEC); //lea
	edx = (int32_t)(intptr_t)dword_564410; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ebx = eax; //mov
	xor_(ecx, ecx);
	eax = to32i(esp+0x104); //mov
	call(to32i(esp+0xF8));
	test(eax, eax);
	if (jz())
		goto loc_48E932;
loc_48EAA3:
	edi = to32i(esp+0xEC); //mov
	inc(edi);
	add(ebp, ebp);
	to32i(esp+0xEC) = edi; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_48E9F6;
	ebp = to32i(esp+0xF0); //mov
	add(ebp, (int32_t)4);
	to32i(esp+0xF0) = ebp; //mov
	cmp(ebp, (int32_t)0x40);
	if (jl())
		goto loc_48E9E3;
	xor_(eax, eax);
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48EAE3:
	esi = to32i(esp+0x104); //mov
	add(esi, (int32_t)0x1C);
	goto loc_48E981;
loc_48EAF2:
	ecx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0xEC); //lea
	edx = (int32_t)(intptr_t)dword_564410; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ebx = eax; //mov
	xor_(ecx, ecx);
	eax = to32i(esp+0x104); //mov
	call(to32i(esp+0xF8));
	test(eax, eax);
	if (jnz())
		goto loc_48E9C9;
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48EB37:
	esi = to32i(esp+0xF4); //mov
	goto loc_48EA23;
}
Fn(void) Game::_sub_48EB44()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ebp = eax; //mov
	ecx = edx; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48EB61;
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(ecx);
	return;
loc_48EB61:
	push32(edi);
	push32(esi);
	push32(ebx);
	to32i(esp+0xC) = 0xEA726D76; //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	ebx = 0x2C; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = ecx; //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	cmp(eax, (int32_t)0xEA61636B);
	if (jnz())
		goto loc_48EBAD;
	eax = 1; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(ecx);
	return;
loc_48EBAD:
	xor_(eax, eax);
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(ecx);
}
Fn(void) Game::_sub_48EBB8()
{
	eax = edx; //mov
	test(edx, edx);
	if (jz())
		goto loc_48EBC5;
	to32i(edx+8) = 1; //mov
loc_48EBC5:
	edx = (int32_t)(intptr_t)dword_4D4B50; //mov
	push32(ecx);
	ecx = ebx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48A188(); esp += 4; //call
}
Fn(void) Game::_sub_48EBE0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = (int32_t)(intptr_t)(eax+edx); //lea
	edx = 0xFBEA; //mov
	cmp(eax, esi);
	if (jnb())
		goto loc_48EC14;
loc_48EBF1:
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	cl = dl; //mov
	bl = to8i(eax); //mov
	xor_(ecx, ebx);
	cx = to16i(word_4DBBAC+ecx*2); //mov
	and_(ecx, (int32_t)0xFFFF);
	shr(edx, (int32_t)8);
	inc(eax);
	xor_(edx, ecx);
	cmp(eax, esi);
	if (jb())
		goto loc_48EBF1;
loc_48EC14:
	eax = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48EC20()
{
	sub(esp, (int32_t)0x104);
	cmp(to32i(dword_4DBDB0), (int32_t)2);
	if (jl())
		goto loc_48EC50;
	cmp(to32i(dword_4DBDAC), (int32_t)0);
	if (jnz())
		goto loc_48EC42;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBDAC) = eax; //mov
loc_48EC42:
	eax = to32i(dword_4DBDAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48EC57;
loc_48EC50:
	add(esp, (int32_t)0x104);
	return;
loc_48EC57:
	push32(edx);
	push32(ebx);
	eax = (int32_t)(intptr_t)(esp+0x114); //lea
	ebx = (int32_t)(intptr_t)(esp+0x108); //lea
	edx = to32i(esp+0x110); //mov
	to32i(esp+0x108) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _vsprintf_(); esp += 4; //call
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	to32i(esp+0x108) = ebx; //mov
	esp -= 4; _sub_48ED70(); esp += 4; //call
	eax = to32i(dword_4DBDAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ebx);
	pop32(edx);
	add(esp, (int32_t)0x104);
}
Fn(void) Game::_sub_48ED70()
{
	static const void *const off_48ED5C[] = {
		&&loc_48EE1F,
		&&loc_48EE29,
		&&loc_48EE6A,
		&&loc_48EE97,
		&&loc_48EEAA,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebx = to32i(dword_4DBDBC); //mov
	esi = eax; //mov
	cmp(to32i(dword_4DBDB0), (int32_t)2);
	if (jge())
		goto loc_48ED9A;
loc_48ED8A:
	ebx = to32i(dword_4DBDBC); //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48ED9A:
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
	eax = ecx; //mov
	to32i(esp) = ecx; //mov
	xor_(edi, edi);
	xor_(cl, cl);
	test(eax, eax);
	if (jle())
		goto loc_48ED8A;
loc_48EDB3:
	ebx = to32i(dword_4DBDBC); //mov
	cmp(cl, (int8_t)0xE);
	if (jz())
		goto loc_48EDFF;
	cl = to8i(esi); //mov
	cmp(cl, (int8_t)0x20);
	if (jb())
		goto loc_48EE0A;
	esp -= 4; _sub_48EEC4(); esp += 4; //call
	ebx = to32i(dword_4DBDBC); //mov
	xor_(ah, ah);
	xor_(dh, dh);
	al = to8i(byte_4DBDC1); //mov
	dl = cl; //mov
	add(ebx, (int32_t)2);
	shl(eax, (int32_t)8);
	add(eax, edx);
	edx = to32i(dword_4DBDB8); //mov
	to16i(edx+ebx-2) = ax; //mov
loc_48EDEE:
	ebp = to32i(esp); //mov
	inc(esi);
	inc(edi);
	to32i(dword_4DBDBC) = ebx; //mov
	cmp(edi, ebp);
	if (jge())
		goto loc_48ED8A;
	goto loc_48EDB3;
loc_48EDFF:
	al = to8i(esi); //mov
	xor_(cl, cl);
	to8i(byte_4DBDC1) = al; //mov
	goto loc_48EDEE;
loc_48EE0A:
	dl = cl; //mov
	sub(dl, (int8_t)8);
	cmp(dl, (int8_t)4);
	if (ja())
		goto loc_48EDEE;
	xor_(eax, eax);
	al = dl; //mov
	goto *off_48ED5C[eax];
loc_48EE1F:
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_48EDEE;
	sub(ebx, (int32_t)2);
	goto loc_48EDEE;
loc_48EE29:
	cmp(to8i(byte_4DBDC2), (int8_t)1);
	if (jbe())
		goto loc_48EDEE;
	ebp = 0xA0; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	imul32(ebp, eax);
	edx = ebx; //mov
	sub(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	xor_(ebx, ebx);
	edx = eax; //mov
	bl = to8i(byte_4DBDC2); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	inc(eax);
	imul32(eax, ebx);
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+ebp); //lea
	goto loc_48EDEE;
loc_48EE6A:
	eax = ebx; //mov
	edx = ebx; //mov
	ebx = 0xA0; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	imul32(ebx, 0xA0);
	to32i(dword_4DBDBC) = ebx; //mov
	esp -= 4; _sub_48EEC4(); esp += 4; //call
	ebx = to32i(dword_4DBDBC); //mov
	goto loc_48EDEE;
loc_48EE97:
	xor_(ebx, ebx);
	bl = to8i(byte_4DBDC0); //mov
	imul32(ebx, 0xA0);
	goto loc_48EDEE;
loc_48EEAA:
	xor_(ebx, ebx);
	esp -= 4; _sub_48EF48(); esp += 4; //call
	bl = to8i(byte_4DBDC0); //mov
	imul32(ebx, 0xA0);
	goto loc_48EDEE;
}
Fn(void) Game::_sub_48EEC4()
{
	cmp(to32i(dword_4DBDBC), (int32_t)0xFA0);
	if (jge())
		goto loc_48EED1;
	return;
loc_48EED1:
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	xor_(edx, edx);
	ecx = 0x19; //mov
	dl = to8i(byte_4DBDC0); //mov
	sub(ecx, edx);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	dec(ecx);
	add(eax, edx);
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	shl(eax, (int32_t)5);
	add(ebx, ecx);
	ecx = to32i(dword_4DBDB8); //mov
	inc(edx);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	esi = to32i(dword_4DBDB8); //mov
	add(eax, edx);
	shl(ebx, (int32_t)5);
	shl(eax, (int32_t)5);
	edx = ecx; //mov
	add(eax, esi);
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4DBDB8); //mov
	edx = 0xA0; //mov
	add(eax, (int32_t)0xF00);
	edi = 0xF00; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(dword_4DBDBC) = edi; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_48EF48()
{
	cmp(to32i(dword_4DBDB0), (int32_t)2);
	if (jl())
		goto locret_48EF97;
	cmp(to32i(dword_4DBDAC), (int32_t)0);
	if (jnz())
		goto loc_48EF64;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBDAC) = eax; //mov
loc_48EF64:
	eax = to32i(dword_4DBDAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_48EF97;
	push32(edx);
	xor_(eax, eax);
loc_48EF75:
	edx = to32i(dword_4DBDB8); //mov
	to32i(edx+eax) = 0; //mov
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0xFA0);
	if (jl())
		goto loc_48EF75;
	eax = to32i(dword_4DBDAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
locret_48EF97:
	return;
}
Fn(void) Game::_sub_48F26C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	to32i(esp+0x38) = eax; //mov
	ecx = edx; //mov
	xor_(edx, edx);
	ebx = to32i(dword_4DBDC8); //mov
	to32i(esp+0x3C) = edx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48F2A2;
	edx = to32i(dword_4DABCC); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	to32i(dword_4DBDC8) = eax; //mov
loc_48F2A2:
	xor_(esi, esi);
	to32i(dword_4DBEC4) = esi; //mov
	eax = to32i(dword_5637F4); //mov
	add(eax, ecx);
	to32i(esp+0x2C) = eax; //mov
	eax = esp; //mov
	dec(eax);
	xor_(ebp, ebp);
	to32i(esp+0x34) = eax; //mov
loc_48F2BE:
	edi = to32i(esp+0x2C); //mov
	eax = to32i(dword_5637F4); //mov
	cmp(eax, edi);
	if (jl())
		goto loc_48F2D9;
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F2D9:
	ebx = esp; //mov
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	edx = ecx; //mov
	add(ebx, ebp);
	esp -= 4; _sub_4905C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48F467;
	inc(to32i(esp+0x34));
	ah = to8i(esp+ebp); //mov
	inc(ebp);
	cmp(ah, (int8_t)0x20);
	if (jnb())
		goto loc_48F391;
	to8i(esp+ebp-1) = 0x5F; //mov
loc_48F312:
	xor_(eax, eax);
loc_48F314:
	edx = to32i(esp+0x3C); //mov
	to32i(esp+0x30) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_48F3AD;
loc_48F324:
	xor_(bh, bh);
	xor_(edi, edi);
	xor_(esi, esi);
	to8i(esp+ebp) = bh; //mov
loc_48F32D:
	ecx = to32i(dword_4DBEC8); //mov
	dec(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_48F3FD;
	imul32(ebx, ecx, 0xC);
	add(ebx, esi);
loc_48F341:
	eax = esp; //mov
	edx = to32i(off_4DBDD0+ebx); //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48F3F1;
	test(edi, edi);
	if (jle())
		goto loc_48F3C2;
	eax = 1; //mov
loc_48F363:
	ebx = to32i(dword_4DBECC); //mov
	or_(ebx, eax);
	eax = to32i(dword_4DBDC8); //mov
	to32i(dword_4DBECC) = ebx; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jge())
		goto loc_48F3C6;
loc_48F383:
	eax = 4; //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F391:
	cmp(ah, (int8_t)0x30);
	if (jb())
		goto loc_48F312;
	cmp(ah, (int8_t)0x39);
	if (ja())
		goto loc_48F312;
	eax = 1; //mov
	goto loc_48F314;
loc_48F3AD:
	test(eax, eax);
	if (jz())
		goto loc_48F324;
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x3C) = eax; //mov
	goto loc_48F324;
loc_48F3C2:
	xor_(eax, eax);
	goto loc_48F363;
loc_48F3C6:
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	edx = to32i(off_4DBDD0+eax*4); //mov
	eax = to32i(off_4DBDD8+eax*4); //mov
	to32i(dword_4DBEC4) = edx; //mov
	esp -= 4; _unknown_libname_3(); esp += 4; //call
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F3F1:
	dec(ecx);
	sub(ebx, (int32_t)0xC);
	test(ecx, ecx);
	if (jge())
		goto loc_48F341;
loc_48F3FD:
	add(esi, (int32_t)4);
	inc(edi);
	cmp(esi, (int32_t)8);
	if (jl())
		goto loc_48F32D;
	esi = to32i(esp+0x3C); //mov
	test(esi, esi);
	if (jz())
		goto loc_48F467;
	cmp(to32i(esp+0x30), (int32_t)0);
	if (jnz())
		goto loc_48F467;
	cmp(to32i(dword_4DBECC), (int32_t)0);
	if (jz())
		goto loc_48F467;
	eax = esi; //mov
	esp -= 4; _unknown_libname_3(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)0xA);
	if (jl())
		goto loc_48F47E;
	edx = 1; //mov
loc_48F435:
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	eax = to32i(off_4DBDD0+eax*4); //mov
	to32i(dword_4DBEC4) = eax; //mov
loc_48F44A:
	eax = to32i(dword_4DBDC8); //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48F383;
	eax = edx; //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F467:
	cmp(ebp, (int32_t)0x29);
	if (jl())
		goto loc_48F2BE;
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F47E:
	test(eax, eax);
	if (jl())
		goto loc_48F486;
	if (jge())
		goto loc_48F435;
	goto loc_48F44A;
loc_48F486:
	edx = 0xFFFFFFFF; //mov
	goto loc_48F44A;
}
Fn(void) Game::_sub_48F490()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	to32i(esp) = edx; //mov
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
	xor_(edx, edx);
	esi = ecx; //mov
	to32i(dword_4DBEC0) = edx; //mov
	cmp(ecx, (int32_t)0x31);
	if (jg())
		goto loc_48F570;
	test(ebx, ebx);
	if (jz())
		goto loc_48F4C6;
	eax = ebp; //mov
	esp -= 4; _sub_48FD20(); esp += 4; //call
loc_48F4C6:
	eax = to32i(dword_4DABCC); //mov
	edx = eax; //mov
	ecx = 0xA; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48F570;
	eax = ebp; //mov
	ebx = to32i(esp); //mov
	esp -= 4; _sub_48FD00(); esp += 4; //call
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4900C0(); esp += 4; //call
	ebx = (int32_t)(intptr_t)asc_4D01A0; //mov
	edx = 1; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4900C0(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	edi = eax; //mov
	eax = to32i(dword_4DABCC); //mov
	edx = eax; //mov
	ecx = 5; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(esi, esi);
	add(edi, eax);
loc_48F524:
	eax = to32i(dword_5637F4); //mov
	cmp(eax, edi);
	if (jge())
		goto loc_48F57A;
	cmp(to32i(dword_4DBEC0), (int32_t)0);
	if (jnz())
		goto loc_48F57A;
	ebx = (int32_t)(intptr_t)byte_5644A0; //mov
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	edx = ecx; //mov
	eax = ebp; //mov
	add(ebx, esi);
	esp -= 4; _sub_4905C0(); esp += 4; //call
	add(esi, eax);
	xor_(ah, ah);
	edx = to32i(esp); //mov
	byte_5644A0[esi] = ah; //mov
	eax = (int32_t)(intptr_t)byte_5644A0; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	to32i(dword_4DBEC0) = eax; //mov
	goto loc_48F524;
loc_48F570:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48F57A:
	cmp(to32i(dword_4DBEC0), (int32_t)0);
	if (jz())
		goto loc_48F570;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48F590()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	cmp(to32i(dword_4DBDC8), (int32_t)0);
	if (jnz())
		goto loc_48F5B8;
	edx = to32i(dword_4DABCC); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	to32i(dword_4DBDC8) = eax; //mov
loc_48F5B8:
	edx = to32i(dword_4DABCC); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jge())
		goto loc_48F5E1;
loc_48F5D9:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F5E1:
	ebx = (int32_t)(intptr_t)asc_4D01A4; //mov
	edx = 3; //mov
	eax = esi; //mov
	esp -= 4; _sub_4900C0(); esp += 4; //call
	edx = to32i(dword_4DABCC); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48F5D9;
	ebx = to32i(off_4DBDCC); //mov
	edi = ebx; //mov
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
	eax = esi; //mov
	esp -= 4; _sub_4900C0(); esp += 4; //call
	eax = to32i(dword_4DBDC8); //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48F5D9;
	eax = esi; //mov
	edx = (int32_t)(intptr_t)aAt; //mov
	esp -= 4; _sub_48FD00(); esp += 4; //call
	xor_(ebx, ebx);
	eax = esi; //mov
	esp -= 4; _sub_48F490(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48F5D9;
	edx = to32i(dword_4DABCC); //mov
	eax = esi; //mov
	add(edx, edx);
	esp -= 4; _sub_48F26C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48F5D9;
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48F6A0()
{
	push32(edx);
	xor_(edx, edx);
	cmp(to32i(dword_4DBED0), (int32_t)0);
	if (jz())
		goto loc_48F6C2;
loc_48F6AC:
	eax = edx; //mov
	inc(edx);
	esp -= 4; _sub_48FD40(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jge())
		goto loc_48F6C2;
	cmp(to32i(dword_4DBED0), (int32_t)0);
	if (jnz())
		goto loc_48F6AC;
loc_48F6C2:
	pop32(edx);
}
Fn(void) Game::_sub_48F6C4()
{
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	ecx = to32i(dword_5644E0+eax); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48F6EE;
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_48F6EE:
	to32i(ecx) = edx; //mov
	edx = to32i(dword_4DBED4); //mov
	eax = (int32_t)(intptr_t)dword_564520; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_48F70C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to32i(ebx+8), (int32_t)0);
	if (jnz())
		goto loc_48F73C;
	esi = (int32_t)(intptr_t)(ebx+0x18); //lea
	ebp = (int32_t)(intptr_t)(ebx+0x14); //lea
	edi = (int32_t)(intptr_t)(ebx+0x2C); //lea
loc_48F72D:
	edx = to32i(ebx+0x10); //mov
	cmp(edx, (int32_t)0x200);
	if (jl())
		goto loc_48F7F7;
loc_48F73C:
	edi = (int32_t)(intptr_t)(ebx+0x23C); //lea
	ebp = (int32_t)(intptr_t)(ebx+0x238); //lea
	esi = (int32_t)(intptr_t)(ebx+0x250); //lea
loc_48F74E:
	cmp(to32i(ebx+0x22C), (int32_t)0);
	if (jnz())
		goto loc_48F8A7;
	edx = to32i(ebx+0x234); //mov
	test(edx, edx);
	if (jle())
		goto loc_48F8A7;
	eax = to32i(ebx+0x230); //mov
	add(edx, eax);
	cmp(edx, (int32_t)0x200);
	if (jle())
		goto loc_48F880;
	edx = 0x200; //mov
	sub(edx, eax);
loc_48F784:
	push32(edi);
	push32(ebp);
	to32i(ebx+0x23C) = 0; //mov
	push32(edx);
	add(eax, esi);
	to32i(ebx+0x240) = 0; //mov
	push32(eax);
	ecx = to32i(ebx+4); //mov
	to32i(ebx+0x244) = 0; //mov
	push32(ecx);
	to32i(ebx+0x248) = 0; //mov
	eax = WriteFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	test(eax, eax);
	if (jz())
		goto loc_48F88B;
	eax = to32i(ebx+0x238); //mov
	edx = to32i(ebx+0x234); //mov
	ecx = to32i(ebx+0x238); //mov
	sub(edx, eax);
	eax = to32i(ebx+0x230); //mov
	add(eax, ecx);
	to32i(ebx+0x234) = edx; //mov
	and_(eax, (int32_t)0x1FF);
	to32i(ebx+0x230) = eax; //mov
	goto loc_48F74E;
loc_48F7F7:
	eax = to32i(ebx+0xC); //mov
	add(eax, edx);
	and_(eax, (int32_t)0x1FF);
	edx = to32i(ebx+0xC); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_48F856;
loc_48F808:
	sub(edx, eax);
	push32(esi);
	push32(ebp);
	to32i(ebx+0x18) = 0; //mov
	push32(edx);
	add(eax, edi);
	to32i(ebx+0x1C) = 0; //mov
	push32(eax);
	ecx = to32i(ebx+4); //mov
	to32i(ebx+0x20) = 0; //mov
	push32(ecx);
	to32i(ebx+0x24) = 0; //mov
	eax = ReadFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	test(eax, eax);
	if (jz())
		goto loc_48F85D;
	eax = to32i(ebx+0x14); //mov
	ecx = to32i(ebx+0x10); //mov
	add(ecx, eax);
	eax = to32i(ebx+8); //mov
	to32i(ebx+0x10) = ecx; //mov
	test(eax, eax);
	if (jz())
		goto loc_48F72D;
	goto loc_48F73C;
loc_48F856:
	edx = 0x200; //mov
	goto loc_48F808;
loc_48F85D:
	eax = GetLastError_wrap();
	test(eax, eax);
	if (jnz())
		goto loc_48F874;
loc_48F868:
	to32i(ebx+8) = 1; //mov
	goto loc_48F73C;
loc_48F874:
	cmp(eax, (int32_t)0x3E5);
	if (jz())
		goto loc_48F868;
	goto loc_48F73C;
loc_48F880:
	edx = to32i(ebx+0x234); //mov
	goto loc_48F784;
loc_48F88B:
	eax = GetLastError_wrap();
	test(eax, eax);
	if (jz())
		goto loc_48F89D;
	cmp(eax, (int32_t)0x3E5);
	if (jnz())
		goto loc_48F8A7;
loc_48F89D:
	to32i(ebx+0x22C) = 1; //mov
loc_48F8A7:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48F8B8()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to32i(ebx+8), (int32_t)0);
	if (jnz())
		goto loc_48F8EE;
loc_48F8D0:
	cmp(to32i(ebx+0x22C), (int32_t)0);
	if (jnz())
		goto loc_48F94B;
loc_48F8DD:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F8EE:
	eax = to32i(ebx+0x28); //mov
	esp -= 4; _sub_489E2C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48F8D0;
	push32(0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(ebx+0x18); //lea
	push32(eax);
	ecx = to32i(ebx+4); //mov
	push32(ecx);
	eax = GetOverlappedResult_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jz())
		goto loc_48F92C;
	push32(esi);
	esi = to32i(esp+4); //mov
	test(esi, esi);
	if (jnz())
		goto loc_48F927;
loc_48F91D:
	to32i(ebx+8) = 0; //mov
	pop32(esi);
	goto loc_48F8D0;
loc_48F927:
	add(to32i(ebx+0x10), esi);
	goto loc_48F91D;
loc_48F92C:
	eax = GetLastError_wrap();
	cmp(eax, (int32_t)0x3E5);
	if (jnz())
		goto loc_48F944;
	eax = 1; //mov
	to32i(ebx+8) = eax; //mov
	goto loc_48F8D0;
loc_48F944:
	xor_(eax, eax);
	to32i(ebx+8) = eax; //mov
	goto loc_48F8D0;
loc_48F94B:
	eax = to32i(ebx+0x24C); //mov
	esp -= 4; _sub_489E2C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48F8DD;
	push32(0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(ebx+0x23C); //lea
	push32(eax);
	eax = to32i(ebx+4); //mov
	push32(eax);
	eax = GetOverlappedResult_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jz())
		goto loc_48F9B3;
	edx = to32i(esp); //mov
	test(edx, edx);
	if (jz())
		goto loc_48F998;
	sub(to32i(ebx+0x234), edx);
	eax = to32i(ebx+0x230); //mov
	add(eax, to32i(esp));
	and_(eax, (int32_t)0x1FF);
	to32i(ebx+0x230) = eax; //mov
loc_48F998:
	to32i(ebx+0x22C) = 0; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F9B3:
	eax = GetLastError_wrap();
	cmp(eax, (int32_t)0x3E5);
	if (jnz())
		goto loc_48F9DD;
	eax = 1; //mov
loc_48F9C6:
	to32i(ebx+0x22C) = eax; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48F9DD:
	xor_(eax, eax);
	goto loc_48F9C6;
}
Fn(void) Game::_sub_48F9E4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x84);
	ecx = 1; //mov
	eax = to32i(dword_4DBED4); //mov
	to32i(esp) = eax; //mov
	xor_(eax, eax);
loc_48F9FC:
	edx = to32i(dword_5644E0+eax); //mov
	test(edx, edx);
	if (jz())
		goto loc_48FA28;
	cmp(to32i(edx+8), (int32_t)0);
	if (jz())
		goto loc_48FA14;
	inc(ecx);
	ebx = to32i(edx+0x28); //mov
	to32i(esp+ecx*4-4) = ebx; //mov
loc_48FA14:
	cmp(to32i(edx+0x22C), (int32_t)0);
	if (jz())
		goto loc_48FA28;
	inc(ecx);
	edx = to32i(edx+0x24C); //mov
	to32i(esp+ecx*4-4) = edx; //mov
loc_48FA28:
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x40);
	if (jnz())
		goto loc_48F9FC;
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_489ED8(); esp += 4; //call
	add(esp, (int32_t)0x84);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48FA44()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	to32i(dword_4DBED4) = eax; //mov
	cmp(to32i(dword_4DBED0), (int32_t)0);
	if (jz())
		goto loc_48FAD9;
	xor_(edi, edi);
loc_48FA62:
	esp -= 4; _sub_48F9E4(); esp += 4; //call
	esi = edi; //mov
loc_48FA69:
	ebx = to32i(dword_5644E0+esi); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48FAC9;
	eax = ebx; //mov
	esp -= 4; _sub_48F8B8(); esp += 4; //call
	cmp(edi, to32i(ebx));
	if (jz())
		goto loc_48FABA;
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(ebx); //mov
	cmp(eax, (int32_t)3);
	if (jnb())
		goto loc_48FAF1;
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_48FAAE;
	push32(0xA);
	edx = to32i(ebx+4); //mov
	push32(edx);
	eax = PurgeComm_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	eax = ebx; //mov
	esp -= 4; _sub_48F8B8(); esp += 4; //call
	to32i(ebx+0xC) = edi; //mov
	to32i(ebx+0x10) = edi; //mov
loc_48FAAE:
	to32i(ebx) = edi; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_48FABA:
	cmp(edi, to32i(dword_5644E0+esi));
	if (jz())
		goto loc_48FAC9;
	eax = ebx; //mov
	esp -= 4; _sub_48F70C(); esp += 4; //call
loc_48FAC9:
	add(esi, (int32_t)4);
	cmp(esi, (int32_t)0x40);
	if (jnz())
		goto loc_48FA69;
	cmp(edi, to32i(dword_4DBED0));
	if (jnz())
		goto loc_48FA62;
loc_48FAD9:
	eax = to32i(dword_4DBED4); //mov
	xor_(ebx, ebx);
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_4DBED4) = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48FAF1:
	if (jbe())
		goto loc_48FB35;
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_48FAAE;
	push32(0xF);
	edx = to32i(ebx+4); //mov
	push32(edx);
	eax = PurgeComm_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	eax = ebx; //mov
	esp -= 4; _sub_48F8B8(); esp += 4; //call
	ecx = to32i(ebx+4); //mov
	push32(ecx);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(ebx+0x28); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	eax = to32i(ebx+0x24C); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	to32i(dword_5644E0+esi) = edi; //mov
	goto loc_48FAAE;
loc_48FB35:
	push32(5);
	eax = to32i(ebx+4); //mov
	push32(eax);
	eax = PurgeComm_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	eax = ebx; //mov
	esp -= 4; _sub_48F8B8(); esp += 4; //call
	to32i(ebx+0x230) = edi; //mov
	to32i(ebx+0x234) = edi; //mov
	goto loc_48FAAE;
}
Fn(void) Game::_sub_48FB5C()
{
	test(eax, eax);
	if (jl())
		goto loc_48FB70;
	cmp(eax, (int32_t)0x10);
	if (jge())
		goto loc_48FB70;
	cmp(to32i(dword_5644E0+eax*4), (int32_t)0);
	if (jnz())
		goto loc_48FB73;
loc_48FB70:
	xor_(eax, eax);
	return;
loc_48FB73:
	eax = 1; //mov
}
Fn(void) Game::_sub_48FD00()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48FD0E;
	pop32(ecx);
	return;
loc_48FD0E:
	push32(edx);
	edx = 2; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48FD20()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48FD2E;
	pop32(ecx);
	return;
loc_48FD2E:
	push32(edx);
	edx = 3; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48FD40()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jz())
		goto loc_48FDD1;
loc_48FD51:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48FDE0;
	push32(edi);
	push32(esi);
	push32(ebx);
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	edx = 4; //mov
	eax = ecx; //mov
	esi = to32i(dword_5644E0+ebx); //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edi = to32i(dword_5644E0+ebx); //mov
	edx = ebx; //mov
	test(edi, edi);
	if (jz())
		goto loc_48FDB4;
	ebx = 1; //mov
loc_48FDA1:
	eax = ebx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(to32i(dword_5644E0+edx), (int32_t)0);
	if (jnz())
		goto loc_48FDA1;
loc_48FDB4:
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	dec(to32i(dword_4DBED0));
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	edx = to32i(dword_4DBED0); //mov
	test(edx, edx);
	if (jz())
		goto loc_48FDF7;
	pop32(edx);
	pop32(ecx);
	return;
loc_48FDD1:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
	goto loc_48FD51;
loc_48FDE0:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edx = to32i(dword_4DBED0); //mov
	test(edx, edx);
	if (jz())
		goto loc_48FDF7;
	pop32(edx);
	pop32(ecx);
	return;
loc_48FDF7:
	eax = ecx; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	eax = to32i(dword_4DBED8); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(dword_4DBED8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48FE14()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	edi = edx; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48FE53;
	esi = 0xF; //mov
	edx = to32i(dword_56451C); //mov
	eax = 0x3C; //mov
	test(edx, edx);
	if (jz())
		goto loc_48FE4B;
loc_48FE39:
	test(eax, eax);
	if (jl())
		goto loc_48FE4B;
	ecx = to32i(dword_5644DC+eax); //mov
	sub(eax, (int32_t)4);
	dec(esi);
	test(ecx, ecx);
	if (jnz())
		goto loc_48FE39;
loc_48FE4B:
	test(esi, esi);
	if (jl())
		goto loc_48FF22;
loc_48FE53:
	inc(to32i(dword_4DBED0));
	cmp(to32i(dword_4DBED0), (int32_t)1);
	if (jz())
		goto loc_48FF30;
loc_48FE66:
	ebx = 0x300; //mov
	edx = 0x450; //mov
	eax = (int32_t)(intptr_t)aSerialbuf; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	push32(0);
	push32(0);
	push32(1);
	ebx = eax; //mov
	to32i(eax+8) = 0; //mov
	push32(0);
	ebp = eax; //mov
	to32i(eax+4) = edi; //mov
	eax = CreateEventA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	push32(0);
	to32i(ebx+0xC) = 0; //mov
	push32(0);
	to32i(ebx+0x10) = 0; //mov
	push32(1);
	to32i(ebx+0x22C) = 0; //mov
	push32(0);
	to32i(ebx+0x28) = eax; //mov
	eax = CreateEventA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	to32i(ebx+0x230) = 0; //mov
	edx = 0x14; //mov
	to32i(ebx+0x24C) = eax; //mov
	eax = esp; //mov
	to32i(ebx+0x234) = 0; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = esp; //mov
	push32(eax);
	edx = 0x19; //mov
	push32(edi);
	to32i(esp+0x10) = edx; //mov
	eax = SetCommTimeouts_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_48FF04;
	esp -= 4; _sub_489FD8(); esp += 4; //call
loc_48FF04:
	edx = 1; //mov
	eax = esi; //mov
	to32i(dword_5644E0+esi*4) = ebp; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48FF22:
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48FF30:
	eax = (int32_t)(intptr_t)sub_48F6A0; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_48FF4D;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_48FF4D:
	push32(dword_564520);
	ecx = 0xFFFFFFFF; //mov
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)sub_48FA44; //mov
	xor_(edx, edx);
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48FE66;
	eax = to32i(dword_4DBED8); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(dword_4DBED8) = ecx; //mov
	eax = to32i(dword_4DBED0); //mov
	dec(to32i(dword_4DBED0));
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48FF9C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x10);
	ebx = eax; //mov
	edx = to32i(dword_5644E0+eax*4); //mov
	test(edx, edx);
	if (jz())
		goto loc_48FFB6;
	add(esp, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48FFB6:
	inc(eax);
	push32(eax);
	push32(a_ComD);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(edx);
	push32(0x40000080);
	push32(3);
	push32(edx);
	push32(edx);
	push32(0xC0000000);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	eax = CreateFileA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20), to32i(esp + 24)); esp += 28;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48FFFA;
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48FE14(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48FFFA:
	esp -= 4; _sub_489FD8(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_490008()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_49001E;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_49001E:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49003E;
	eax = ecx; //mov
	esp -= 4; _sub_49035C(); esp += 4; //call
	cmp(eax, edx);
	if (jge())
		goto loc_49004E;
loc_49003E:
	xor_(edx, edx);
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
	return;
loc_49004E:
	eax = ecx; //mov
	esp -= 4; _sub_4900C0(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4900C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebp = ebx; //mov
	xor_(esi, esi);
	xor_(edi, edi);
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_4900DF;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_4900DF:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4901A9;
	eax = to32i(dword_5644E0+ecx*4); //mov
	esi = to32i(eax+0x234); //mov
	add(esi, edx);
	cmp(esi, (int32_t)0x200);
	if (jle())
		goto loc_49011A;
	edx = 0x200; //mov
	sub(edx, to32i(eax+0x234));
loc_49011A:
	eax = to32i(dword_5644E0+ecx*4); //mov
	ebx = to32i(eax+0x230); //mov
	eax = to32i(eax+0x234); //mov
	add(ebx, eax);
	eax = ebx; //mov
	and_(eax, (int32_t)0x1FF);
	ebx = (int32_t)(intptr_t)(eax+edx); //lea
	esi = edx; //mov
	cmp(ebx, (int32_t)0x200);
	if (jle())
		goto loc_49014E;
	esi = 0x200; //mov
	edi = edx; //mov
	sub(esi, eax);
	sub(edi, esi);
loc_49014E:
	test(esi, esi);
	if (jz())
		goto loc_49016A;
	edx = to32i(dword_5644E0+ecx*4); //mov
	add(edx, (int32_t)0x250);
	ebx = esi; //mov
	add(edx, eax);
	eax = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_49016A:
	test(edi, edi);
	if (jz())
		goto loc_490185;
	ebx = edi; //mov
	edx = to32i(dword_5644E0+ecx*4); //mov
	eax = (int32_t)(intptr_t)(esi+ebp); //lea
	add(edx, (int32_t)0x250);
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_490185:
	eax = to32i(dword_5644E0+ecx*4); //mov
	edx = (int32_t)(intptr_t)(esi+edi); //lea
	ebp = to32i(eax+0x234); //mov
	add(ebp, edx);
	edx = 1; //mov
	to32i(eax+0x234) = ebp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
loc_4901A9:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4901BC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	ebx = ecx; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_4901DD;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_4901DD:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_490205;
loc_4901F2:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_490205:
	eax = esp; //mov
	push32(eax);
	eax = to32i(dword_5644E0+esi*4); //mov
	ecx = to32i(eax+4); //mov
	push32(ecx);
	eax = GetCommState_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_49027A;
	or_(to8i(esp+8), (int8_t)1);
	and_(to16i(esp+8), (int16_t)0xB0FD);
	cmp(edi, (int32_t)0x10);
	if (jg())
		goto loc_490236;
	edi = to32i(dword_4DBEDC+edi*4); //mov
loc_490236:
	al = to8i(esp+0x2C); //mov
	add(al, (int8_t)5);
	to32i(esp+4) = edi; //mov
	to8i(esp+0x12) = al; //mov
	test(ebx, ebx);
	if (jbe())
		goto loc_490292;
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_490292;
	to8i(esp+0x14) = 2; //mov
loc_490252:
	cmp(ebp, (int32_t)1);
	if (jnb())
		goto loc_49029A;
loc_490257:
	xor_(cl, cl);
	to8i(esp+0x13) = cl; //mov
loc_49025D:
	eax = esp; //mov
	push32(eax);
	eax = to32i(dword_5644E0+esi*4); //mov
	ebx = to32i(eax+4); //mov
	push32(ebx);
	eax = SetCommState_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_4901F2;
loc_49027A:
	esp -= 4; _sub_489FD8(); esp += 4; //call
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_490292:
	xor_(dh, dh);
	to8i(esp+0x14) = dh; //mov
	goto loc_490252;
loc_49029A:
	if (ja())
		goto loc_4902A3;
	to8i(esp+0x13) = 1; //mov
	goto loc_49025D;
loc_4902A3:
	cmp(ebp, (int32_t)3);
	if (jnz())
		goto loc_490257;
	to8i(esp+0x13) = 2; //mov
	goto loc_49025D;
}
Fn(void) Game::_sub_490308()
{
	push32(edx);
	edx = eax; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_49031E;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_49031E:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49034B;
	edx = to32i(dword_5644E0+edx*4); //mov
	edx = to32i(edx+0x10); //mov
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	return;
loc_49034B:
	xor_(edx, edx);
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_49035C()
{
	push32(edx);
	edx = eax; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_490372;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_490372:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4903AD;
	push32(ebx);
	edx = to32i(dword_5644E0+edx*4); //mov
	eax = 0x200; //mov
	ebx = to32i(edx+0x234); //mov
	edx = eax; //mov
	sub(edx, ebx);
	pop32(ebx);
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	return;
loc_4903AD:
	xor_(edx, edx);
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4903C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebp = ebx; //mov
	xor_(esi, esi);
	xor_(edi, edi);
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_4903DF;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_4903DF:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_490466;
	eax = to32i(dword_5644E0+ecx*4); //mov
	esi = to32i(eax+0x10); //mov
	cmp(edx, esi);
	if (jle())
		goto loc_490408;
	edx = esi; //mov
loc_490408:
	eax = to32i(dword_5644E0+ecx*4); //mov
	ebx = to32i(eax+0xC); //mov
	add(ebx, edx);
	esi = edx; //mov
	cmp(ebx, (int32_t)0x200);
	if (jle())
		goto loc_490432;
	edi = 0x200; //mov
	esi = to32i(eax+0xC); //mov
	eax = edx; //mov
	sub(edi, esi);
	sub(eax, edi);
	esi = edx; //mov
	edi = eax; //mov
	sub(esi, eax);
loc_490432:
	test(esi, esi);
	if (jz())
		goto loc_49044E;
	eax = to32i(dword_5644E0+ecx*4); //mov
	edx = (int32_t)(intptr_t)(eax+0x2C); //lea
	eax = to32i(eax+0xC); //mov
	ebx = esi; //mov
	add(eax, edx);
	edx = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_49044E:
	test(edi, edi);
	if (jz())
		goto loc_490466;
	ebx = edi; //mov
	eax = to32i(dword_5644E0+ecx*4); //mov
	edx = (int32_t)(intptr_t)(esi+ebp); //lea
	add(eax, (int32_t)0x2C);
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_490466:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_490478()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to32i(dword_4DBED8), (int32_t)0);
	if (jnz())
		goto loc_49048E;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DBED8) = eax; //mov
loc_49048E:
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4903C0(); esp += 4; //call
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4904B3;
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_4904B3:
	edx = to32i(dword_5644E0+ecx*4); //mov
	sub(to32i(edx+0x10), eax);
	edx = to32i(dword_5644E0+ecx*4); //mov
	add(eax, to32i(edx+0xC));
	and_(eax, (int32_t)0x1FF);
	to32i(edx+0xC) = eax; //mov
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48F6C4(); esp += 4; //call
	eax = to32i(dword_4DBED8); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4905C0()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = ebx; //mov
	esp -= 4; _sub_48FB5C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_490603;
	ebx = to32i(dword_5637F0); //mov
	add(ebx, ecx);
	ecx = (int32_t)(intptr_t)(esi*4+0); //lea
loc_4905DE:
	eax = to32i(dword_5644E0+ecx); //mov
	cmp(edx, to32i(eax+0x10));
	if (jle())
		goto loc_4905FA;
	cmp(ebx, to32i(dword_5637F0));
	if (jle())
		goto loc_4905FA;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_4905DE;
loc_4905FA:
	ebx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_490478(); esp += 4; //call
loc_490603:
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4908E4()
{
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
	test(eax, eax);
	if (jz())
		goto loc_4908FC;
loc_4908EC:
	ecx = eax; //mov
	neg(ecx);
	ecx = ~ecx;
	and_(eax, ecx);
	inc(edx);
	test(eax, eax);
	if (jnz())
		goto loc_4908EC;
loc_4908FC:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_getHwnd()
{
	eax = to32i(dword_563D54); //mov
}
Fn(void) Game::_sub_491018()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	cmp(to32i(eax+0x444), (int32_t)0);
	if (jz())
		goto loc_491035;
	ecx = to32i(eax); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_491035;
	push32(ecx);
	edx = to32i(ecx); //mov
	call(to32i(edx+0x28));
loc_491035:
	esi = to32i(ebx+0x450); //mov
	test(esi, esi);
	if (jz())
		goto loc_491046;
	eax = esi; //mov
	esp -= 4; _sub_4AC9C8(); esp += 4; //call
loc_491046:
	edi = to32i(ebx+0x44C); //mov
	test(edi, edi);
	if (jz())
		goto loc_491057;
	eax = edi; //mov
	esp -= 4; _sub_4AC9C8(); esp += 4; //call
loc_491057:
	to32i(ebx+0x450) = 0; //mov
	ebp = to32i(ebx+0x448); //mov
	to32i(ebx+0x44C) = 0; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_49107E;
	edx = ebp; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4920F8(); esp += 4; //call
loc_49107E:
	eax = to32i(ebx+0x444); //mov
	test(eax, eax);
	if (jnz())
		goto loc_4910A8;
loc_491088:
	to32i(ebx+0x448) = 0; //mov
	eax = 1; //mov
	to32i(ebx+0x444) = 0; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4910A8:
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4920F8(); esp += 4; //call
	goto loc_491088;
}
Fn(void) Game::_sub_491964()
{
	push32(ebx);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_491970;
	ebx = (int32_t)(intptr_t)dword_563900; //mov
loc_491970:
	cmp(to32i(ebx), (int32_t)0);
	if (jz())
		goto loc_4919C5;
	push32(edx);
	push32(ecx);
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_491018(); esp += 4; //call
	eax = to32i(ebx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+8));
	ecx = to32i(ebx+0x10); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_49199E;
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_49199E:
	to32i(ebx+0x10) = 0; //mov
	to32i(ebx+4) = 0; //mov
	to32i(ebx+0x24) = 0; //mov
	eax = to32i(dword_4DB6A0); //mov
	to32i(ebx) = 0; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
loc_4919C5:
	pop32(ebx);
}
Fn(void) Game::_sub_491AF0()
{
	push32(ebx);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_491AFC;
	ebx = (int32_t)(intptr_t)dword_563900; //mov
loc_491AFC:
	cmp(to32i(ebx+0x24), (int32_t)0);
	if (jz())
		goto loc_491B7C;
	cmp(to32i(ebx+0x1C), (int32_t)8);
	if (jg())
		goto loc_491B7C;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	eax = to32i(ebx+0x42E); //mov
	edx = to32i(ebx+0x430); //mov
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	sub(edx, eax);
	inc(edx);
	cmp(eax, (int32_t)0x100);
	if (jge())
		goto loc_491B66;
	test(edx, edx);
	if (jle())
		goto loc_491B66;
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	ecx = (int32_t)(intptr_t)(ebx+0x30); //lea
	add(esi, ecx);
	push32(esi);
	push32(edx);
	push32(eax);
	ecx = to32i(ebx+0x24); //mov
	push32(0);
	edi = to32i(ecx); //mov
	push32(ecx);
	call(to32i(edi+0x18));
	cmp(to8i(ebx+0x45D), (int8_t)0);
	if (jnz())
		goto loc_491B66;
	push32(esi);
	push32(0x100);
	push32(0);
	eax = to32i(ebx+0x24); //mov
	push32(0);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0x10));
loc_491B66:
	to16i(ebx+0x430) = 0x100; //mov
	to16i(ebx+0x432) = 0xFFFF; //mov
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
loc_491B7C:
	pop32(ebx);
}
Fn(void) Game::_sub_491C08()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_491C1E;
	esi = (int32_t)(intptr_t)dword_563900; //mov
loc_491C1E:
	test(edi, edi);
	if (jz())
		goto loc_491C2A;
	cmp(edi, to32i(esi+0x43C));
	if (jz())
		goto loc_491C53;
loc_491C2A:
	cmp(to32i(esi+0x43C), (int32_t)0);
	if (jz())
		goto loc_491C3A;
	eax = esi; //mov
	esp -= 4; _sub_491D5C(); esp += 4; //call
loc_491C3A:
	test(edi, edi);
	if (jnz())
		goto loc_491C5A;
loc_491C3E:
	xor_(ebp, ebp);
	eax = 1; //mov
	to32i(dword_4DABDC) = ebp; //mov
loc_491C4B:
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_491C53:
	eax = 1; //mov
	goto loc_491C4B;
loc_491C5A:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to8i(esi+0x45D), (int8_t)0);
	if (jnz())
		goto loc_491CD9;
loc_491C6D:
	ebx = esp; //mov
	edx = edi; //mov
	eax = esi; //mov
	ebx = eax; //mov
loc_491C7A:
	eax = SDL_GetTicks_wrap();
	to32i(dword_4DBF34) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_491CE9;
	eax = 0xFFFFFFFF; //mov
	edx = to32i(dword_4DBF30); //mov
	to32i(dword_4DBF28) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_491CA6;
	xor_(ecx, ecx);
	to32i(dword_4DBF30) = ecx; //mov
loc_491CA6:
	ebx = 1; //mov
	to32i(esi+0x440) = 0; //mov
	eax = to32i(dword_4DB6A0); //mov
	to32i(esi+0x43C) = 0; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	to32i(dword_4DABDC) = ebx; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_491CD9:
	esp -= 4; _sub_484008(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_491C6D;
	ebx = 0xEACBAD; //mov
	goto loc_491C7A;
loc_491CE9:
	cmp(to32i(dword_4DBF30), (int32_t)0);
	if (jnz())
		goto loc_491CFC;
	to32i(dword_4DBF30) = 1; //mov
loc_491CFC:
	eax = to32i(esp+0x24); //mov
	to32i(esi+0x440) = eax; //mov
	to32i(esi+0x43C) = edi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_491C3E;
	ebx = to32i(esp+0x24); //mov
	cl = to8i(esi+0x45D); //mov
	edx = to32i(esp+0x10); //mov
	test(cl, cl);
	if (jnz())
		goto loc_491D4F;
	cmp(edi, to32i(esi+0x444));
	if (jnz())
		goto loc_491D4F;
	eax = to32i(esp+0x54); //mov
	ebx = to32i(esi+0x464); //mov
	shr(eax, (int32_t)3);
	imul32(ebx, eax);
	eax = to32i(esi+0x468); //mov
	imul32(eax, edx);
	edi = to32i(esp+0x24); //mov
	add(ebx, eax);
	add(ebx, edi);
loc_491D4F:
	eax = ebp; //mov
	esp -= 4; _sub_4AC934(); esp += 4; //call
	goto loc_491C3E;
}
Fn(void) Game::_sub_491D5C()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_491D6A;
	ebx = (int32_t)(intptr_t)dword_563900; //mov
loc_491D6A:
	edx = to32i(ebx+0x43C); //mov
	test(edx, edx);
	if (jnz())
		goto loc_491D80;
	xor_(esi, esi);
	to32i(dword_4DABDC) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_491D80:
	push32(ecx);
	ecx = to32i(ebx+0x440); //mov
	push32(ecx);
	eax = edx; //mov
	edx = to32i(edx); //mov
	push32(eax);
	call(to32i(edx+0x80));
	to32i(ebx+0x43C) = 0; //mov
	to32i(ebx+0x440) = 0; //mov
	eax = SDL_GetTicks_wrap();
	ebx = to32i(dword_4DBF34); //mov
	sub(eax, ebx);
	ebx = to32i(dword_4DBF2C); //mov
	to32i(dword_4DBF28) = eax; //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_491DCA;
	to32i(dword_4DBF2C) = eax; //mov
loc_491DCA:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	xor_(esi, esi);
	to32i(dword_4DABDC) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4920F8()
{
	push32(ecx);
	test(eax, eax);
	if (jnz())
		goto loc_492102;
	eax = (int32_t)(intptr_t)dword_563900; //mov
loc_492102:
	cmp(edx, to32i(eax+0x43C));
	if (jz())
		goto loc_492112;
	push32(edx);
	eax = to32i(edx); //mov
	call(to32i(eax+8));
	pop32(ecx);
	return;
loc_492112:
	esp -= 4; _sub_491D5C(); esp += 4; //call
	push32(edx);
	eax = to32i(edx); //mov
	call(to32i(eax+8));
	pop32(ecx);
}
Fn(void) Game::_sub_4921D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	ebp = to32i(esp+0x80); //mov
	esi = edx; //mov
	edi = ebx; //mov
	ebx = ecx; //mov
	ecx = esp; //mov
	edx = 0x6C; //mov
	push32(ecx);
	to32i(esp+4) = edx; //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x58));
	test(ax, (int16_t)0xFFFF);
	if (jnz())
		goto loc_492274;
	test(esi, esi);
	if (jz())
		goto loc_492209;
	eax = to32i(esp+0xC); //mov
	to32i(esi) = eax; //mov
loc_492209:
	test(edi, edi);
	if (jz())
		goto loc_492213;
	eax = to32i(esp+8); //mov
	to32i(edi) = eax; //mov
loc_492213:
	esi = to32i(esp+0x7C); //mov
	test(esi, esi);
	if (jz())
		goto loc_492221;
	eax = to32i(esp+0x10); //mov
	to32i(esi) = eax; //mov
loc_492221:
	test(ebp, ebp);
	if (jz())
		goto loc_49222C;
	eax = to32i(esp+0x24); //mov
	to32i(ebp+0) = eax; //mov
loc_49222C:
	test(ebx, ebx);
	if (jz())
		goto loc_49223F;
	cmp(to32i(esp+0x54), (int32_t)0x10);
	if (jz())
		goto loc_492248;
	xor_(eax, eax);
	al = to8i(esp+0x54); //mov
	to32i(ebx) = eax; //mov
loc_49223F:
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_492248:
	eax = to32i(esp+0x58); //mov
	esp -= 4; _sub_4908E4(); esp += 4; //call
	esi = eax; //mov
	eax = to32i(esp+0x5C); //mov
	esp -= 4; _sub_4908E4(); esp += 4; //call
	add(esi, eax);
	eax = to32i(esp+0x60); //mov
	esp -= 4; _sub_4908E4(); esp += 4; //call
	add(esi, eax);
	to32i(ebx) = esi; //mov
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_492274:
	test(esi, esi);
	if (jz())
		goto loc_49227E;
	to32i(esi) = 0; //mov
loc_49227E:
	test(edi, edi);
	if (jz())
		goto loc_492288;
	to32i(edi) = 0; //mov
loc_492288:
	test(ebx, ebx);
	if (jz())
		goto loc_492292;
	to32i(ebx) = 0; //mov
loc_492292:
	ecx = to32i(esp+0x7C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4922A0;
	to32i(ecx) = 0; //mov
loc_4922A0:
	test(ebp, ebp);
	if (jz())
		goto loc_49223F;
	to32i(ebp+0) = 0; //mov
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_memset_()
{
	push32(ecx);
	ecx = ebx; //mov
	push32(eax);
	dh = dl; //mov
	shl(edx, (int32_t)8);
	dl = dh; //mov
	shl(edx, (int32_t)8);
	dl = dh; //mov
	esp -= 4; ___STOSB(); esp += 4; //call
	pop32(eax);
	pop32(ecx);
}
Fn(void) Game::_sub_492650()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	to32i(esp+0x18) = eax; //mov
	edi = edx; //mov
	to32i(esp+0x1C) = ebx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4926A8;
loc_492664:
	ebx = to32i(esp+0x1C); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4926B3;
	to32i(esp+0x1C) = 8; //mov
loc_492674:
	ebp = to32i(esp+0x1C); //mov
loc_492678:
	eax = to32i(dword_4DD314); //mov
	test(eax, eax);
	if (jz())
		goto loc_49269F;
	edx = to32i(esp+0x18); //mov
	test(edx, edx);
	if (jl())
		goto loc_49269D;
	cmp(edx, (int32_t)0x4000);
	if (jg())
		goto loc_49269D;
	test(edi, edi);
	if (jl())
		goto loc_49269D;
	cmp(edi, (int32_t)0x2000);
	if (jle())
		goto loc_4926BF;
loc_49269D:
	xor_(eax, eax);
loc_49269F:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4926A8:
	eax = to32i(dword_4DAB84); //mov
	to32i(esp+0x1C) = eax; //mov
	goto loc_492664;
loc_4926B3:
	cmp(ebx, (int32_t)0xF);
	if (jnz())
		goto loc_492674;
	ebp = 0x10; //mov
	goto loc_492678;
loc_4926BF:
	eax = to32i(esp+0x1C); //mov
	esp -= 4; _sub_4ACB80(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49269F;
	eax = edx; //mov
	imul32(eax, ebp);
	add(eax, (int32_t)7);
	and_(al, (int8_t)0xF8);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	imul32(eax, ebp);
	sar(eax, (int32_t)3);
	edx = eax; //mov
	imul32(edx, edi);
	esi = to32i(esp+0x1C); //mov
	push32(esi);
	push32(edi);
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x20); //mov
	push32(eax);
	push32(aDxDxD);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	ebx = ecx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	eax = esp; //mov
	add(edx, (int32_t)0x48);
	esp -= 4; _sub_48448C(); esp += 4; //call
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_49273E;
	cmp(to32i(esp+0x30), (int32_t)0);
	if (jz())
		goto loc_49269D;
	esp -= 4; _sub_484B3C(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_49273E:
	esi = to32i(eax); //mov
	test(esi, esi);
	if (jz())
		goto loc_49269D;
	edx = 0x48; //mov
	eax = esi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = to32i(esp+0x1C); //mov
	edx = (int32_t)(intptr_t)(esi+0x38); //lea
	esp -= 4; _sub_4ACB80(); esp += 4; //call
	to8i(edx) = 0; //mov
	and_(eax, (int32_t)0xFF);
	ecx = to32i(edx); //mov
	to16i(edx+6) = di; //mov
	or_(ecx, eax);
	eax = to32i(esp+0x18); //mov
	to32i(edx) = ecx; //mov
	to16i(edx+4) = ax; //mov
	to32i(esi) = 0x57494E44; //mov
	to32i(esi+8) = edi; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esi+0x18) = edi; //mov
	to32i(esi+0x28) = eax; //mov
	eax = to32i(esp+0x18); //mov
	to32i(esi+4) = eax; //mov
	to32i(esi+0x14) = eax; //mov
	al = to8i(esp+0x1C); //mov
	to8i(esi+0x1C) = al; //mov
	xor_(ebx, ebx);
	eax = to32i(edx); //mov
	ecx = edi; //mov
	and_(eax, (int32_t)0xFF);
	to32i(esi+0x20) = edx; //mov
	edx = to32i(esp+0x10); //mov
	to8i(esi+0x1D) = al; //mov
	eax = 0x10; //mov
	esp -= 4; _sub_49B174(); esp += 4; //call
	ecx = to32i(esp+0x18); //mov
	ebx = 3; //mov
	edx = ebp; //mov
	to32i(esi+0x2C) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_49B174(); esp += 4; //call
	ebx = to32i(esi+0x2C); //mov
	to32i(esi+0x30) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_49269D;
	test(eax, eax);
	if (jz())
		goto loc_49269D;
	eax = to32i(esp+0x14); //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_492820()
{
	push32(1);
	esp -= 4; _sub_492650(); esp += 4; //call
	eax = to32i(eax); //mov
}
Fn(void) Game::_sub_492840()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ebx = eax; //mov
	edi = (int32_t)(intptr_t)(edx*4+0); //lea
	xor_(esi, esi);
loc_49284F:
	eax = ebx; //mov
	ecx = (int32_t)(intptr_t)(ebx+0x20); //lea
loc_492854:
	add(eax, (int32_t)4);
	edx = to32i(dword_4E29EC); //mov
	to32i(eax-4) = edx; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_492854;
	inc(esi);
	add(ebx, edi);
	cmp(esi, (int32_t)8);
	if (jl())
		goto loc_49284F;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_492874()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)4);
	eax = 0xFFFFFF80; //mov
	ecx = 0xFFFFFFC0; //mov
	esi = 0x3F; //mov
loc_49288A:
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFC0);
	if (jge())
		goto loc_4929C3;
	edx = ecx; //mov
loc_492897:
	bl = dl; //mov
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	add(bl, (int8_t)0x40);
	inc(eax);
	byte_56D05C[edx] = bl; //mov
	cmp(eax, (int32_t)0x7F);
	if (jl())
		goto loc_49288A;
	xor_(esi, esi);
	xor_(ebx, ebx);
loc_4928B4:
	ax = to16i(word_4DBF38+ebx); //mov
	xor_(ecx, ecx);
	to16i(esp+2) = ax; //mov
	edx = 0xD; //mov
	cx = to16i(esp+2); //mov
	ax = to16i(word_4DBF3C+ebx); //mov
	sub(edx, ecx);
	to16i(esp) = ax; //mov
	ecx = edx; //mov
	eax = to32i(dword_4DBF44+ebx); //mov
	edx = 1; //mov
	shr(eax, (int32_t)3);
	shl(edx, cl);
	cmp(esi, (int32_t)0x17);
	if (jnz())
		goto loc_4928F7;
	to16i(esp+2) = 0x21; //mov
loc_4928F7:
	test(edx, edx);
	if (jle())
		goto loc_492919;
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	shl(edx, (int32_t)2);
	eax = ecx; //mov
	add(edx, ecx);
	ecx = to32i(esp); //mov
loc_49290C:
	add(eax, (int32_t)4);
	to32i(dword_564758+eax) = ecx; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_49290C;
loc_492919:
	inc(esi);
	add(ebx, (int32_t)0x10);
	cmp(esi, (int32_t)0x60);
	if (jl())
		goto loc_4928B4;
	push32(edi);
	esi = 0x20; //mov
	xor_(edi, edi);
	to16i(esp+6) = si; //mov
	to16i(esp+4) = di; //mov
	xor_(eax, eax);
	edx = to32i(esp+4); //mov
	pop32(edi);
loc_49293B:
	add(eax, (int32_t)4);
	to32i(dword_564758+eax) = edx; //mov
	cmp(eax, (int32_t)0x80);
	if (jnz())
		goto loc_49293B;
	xor_(ebx, ebx);
loc_49294D:
	ax = to16i(word_4DC538+ebx); //mov
	xor_(ecx, ecx);
	to16i(esp+2) = ax; //mov
	edx = 9; //mov
	cx = to16i(esp+2); //mov
	ax = to16i(word_4DC53C+ebx); //mov
	sub(edx, ecx);
	to16i(esp) = ax; //mov
	ecx = edx; //mov
	edx = 1; //mov
	eax = to32i(dword_4DC544+ebx); //mov
	shl(edx, cl);
	shr(eax, (int32_t)7);
	test(edx, edx);
	if (jle())
		goto loc_4929A6;
	ecx = to32i(esp); //mov
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	shl(edx, (int32_t)2);
	eax = esi; //mov
	add(edx, esi);
loc_492999:
	add(eax, (int32_t)4);
	to32i(dword_56C758+eax) = ecx; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_492999;
loc_4929A6:
	add(ebx, (int32_t)0x10);
	cmp(ebx, (int32_t)0x800);
	if (jnz())
		goto loc_49294D;
	to32i(dword_56D55C) = 1; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4929C3:
	cmp(eax, (int32_t)0x3F);
	if (jle())
		goto loc_492897;
	edx = esi; //mov
	goto loc_492897;
}
Fn(void) Game::_sub_4929D4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	eax = to32i(dword_4E2AEC); //mov
	ecx = 4; //mov
	to32i(dword_56CF5C) = eax; //mov
loc_4929E8:
	eax = to32i(dword_4DCD38+ecx); //mov
	imul32(eax, ebx);
	edx = to32i(dword_4E2AEC+ecx); //mov
	shl(eax, (int32_t)0xC);
	add(ecx, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_56CF58+ecx) = eax; //mov
	cmp(ecx, (int32_t)0x100);
	if (jnz())
		goto loc_4929E8;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_492A1C()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to32i(dword_56D55C), (int32_t)0);
	if (jz())
		goto loc_492A31;
	eax = ecx; //mov
	esp -= 4; _sub_4ACFE4(); esp += 4; //call
	pop32(ecx);
	return;
loc_492A31:
	esp -= 4; _sub_492874(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4ACFE4(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_492A40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	ecx = edx; //mov
	to32i(esp) = ebx; //mov
	cmp(to32i(dword_56D55C), (int32_t)0);
	if (jz())
		goto loc_492C88;
loc_492A5B:
	eax = ebp; //mov
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	xor_(esi, esi);
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492C92;
	edx = 8; //mov
	eax = (int32_t)(intptr_t)dword_56455C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492A7E:
	add(esi, edi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(eax, ebp);
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492CA6;
	edx = 8; //mov
	eax = (int32_t)(intptr_t)dword_56465C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492AA4:
	add(esi, edi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(eax, ebp);
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492CBA;
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D15C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492ACA:
	add(esi, edi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(eax, ebp);
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492CCE;
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D17C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492AF0:
	add(esi, edi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(eax, ebp);
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492CE2;
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D35C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492B16:
	add(esi, edi);
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	add(eax, ebp);
	esp -= 4; _sub_4AD0F4(); esp += 4; //call
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_492CF6;
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D37C; //mov
	esp -= 4; _sub_492840(); esp += 4; //call
loc_492B3C:
	edx = (int32_t)(intptr_t)dword_56455C; //mov
	eax = (int32_t)(intptr_t)dword_56D15C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	eax = to32i(esp); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(esi, edi);
	edi = (int32_t)(intptr_t)(eax*4+0); //lea
	edx = (int32_t)(intptr_t)dword_56455C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D19C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56457C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D1DC; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56457C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D21C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56459C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D25C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56459C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D29C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645BC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D2DC; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645BC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D31C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645DC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D35C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645DC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D39C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645FC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D3DC; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5645FC; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D41C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56461C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D45C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56461C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D49C; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56463C; //mov
	add(ecx, edi);
	eax = (int32_t)(intptr_t)dword_56D4DC; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_4AD186(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_56463C; //mov
	eax = (int32_t)(intptr_t)dword_56D51C; //mov
	ebx = (int32_t)(intptr_t)(ecx+edi); //lea
	esp -= 4; _sub_4AD186(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_492C88:
	esp -= 4; _sub_492874(); esp += 4; //call
	goto loc_492A5B;
loc_492C92:
	edx = 8; //mov
	eax = (int32_t)(intptr_t)dword_56455C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492A7E;
loc_492CA6:
	edx = 8; //mov
	eax = (int32_t)(intptr_t)dword_56465C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492AA4;
loc_492CBA:
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D15C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492ACA;
loc_492CCE:
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D17C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492AF0;
loc_492CE2:
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D35C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492B16;
loc_492CF6:
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)dword_56D37C; //mov
	esp -= 4; _sub_4ACE59(); esp += 4; //call
	goto loc_492B3C;
}
Fn(void) Game::_sub_492D10()
{
	sub(esp, (int32_t)4);
	fldz();
	fcomp(to32f(esp+8));
	fnstsw(ax);
	sahf();
	if (ja())
		goto loc_492D39;
	fld(to32f(esp+8));
	fadd(to64f(dbl_4D05A8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	esp += 4; return;
loc_492D39:
	fld(to32f(esp+8));
	fadd(to64f(dbl_4D05A0));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	esp += 4; return;
}
Fn(void) Game::_sub_492D54()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	ecx = 0xFFFFFFC0; //mov
	ebx = 0x71; //mov
	edi = 0x21800; //mov
	esi = 0x2C800000; //mov
	xor_(edx, edx);
loc_492D77:
	to32i(esp+0xC) = ecx; //mov
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	fild(to32i(esp+0xC));
	fadd(to64f(dbl_4D05D0));
	add(eax, ebx);
	fst(to64f(esp));
	fmul(to64f(dbl_4D05B0));
	to32i(dword_56E3C8+edx) = eax; //mov
	sub(esp, (int32_t)4);
	fstp(to32f(esp));
	esp -= 4; _sub_492D10(); esp += 4; //call
	fld(to64f(esp));
	fmul(to64f(dbl_4D05B8));
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	fstp(to32f(esp));
	and_(ebp, (int32_t)0x1FF);
	esp -= 4; _sub_492D10(); esp += 4; //call
	fld(to64f(esp));
	shl(ebp, (int32_t)0xB);
	and_(eax, (int32_t)0x1FF);
	fmul(to64f(dbl_4D05C0));
	add(eax, ebp);
	to32i(dword_56E5C8+edx) = eax; //mov
	sub(esp, (int32_t)4);
	fstp(to32f(esp));
	esp -= 4; _sub_492D10(); esp += 4; //call
	fld(to64f(esp));
	fmul(to64f(dbl_4D05C8));
	add(edx, (int32_t)4);
	add(edi, (int32_t)0x800);
	add(esi, (int32_t)0x800000);
	to32i(esp+0xC) = eax; //mov
	sub(esp, (int32_t)4);
	inc(ecx);
	fstp(to32f(esp));
	ebp = to32i(esp+0x10); //mov
	esp -= 4; _sub_492D10(); esp += 4; //call
	and_(ebp, (int32_t)0x1FF);
	and_(eax, (int32_t)0x1FF);
	shl(eax, (int32_t)0xB);
	shl(ebp, (int32_t)0x17);
	inc(ebx);
	add(eax, ebp);
	to32i(dword_56E7C4+edx) = eax; //mov
	cmp(ecx, (int32_t)0x40);
	if (jl())
		goto loc_492D77;
	edx = 0xFFFFFF67; //mov
	ecx = 0xFFFFFD9C; //mov
	esi = 0x1F; //mov
	ebp = to32i(esp+8); //mov
	xor_(edi, edi);
loc_492E48:
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	add(eax, (int32_t)0x81);
	test(eax, eax);
	if (jl())
		goto loc_492F60;
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_492E64;
	eax = 0xFF; //mov
loc_492E64:
	ebx = eax; //mov
	add(eax, (int32_t)4);
	sar(eax, (int32_t)3);
	sar(ebx, (int32_t)3);
	cmp(eax, (int32_t)0x1F);
	if (jle())
		goto loc_492E76;
	eax = esi; //mov
loc_492E76:
	cmp(ebp, (int32_t)0xF);
	if (jnz())
		goto loc_492F67;
	shl(ebx, (int32_t)0x1A);
	shl(eax, (int32_t)0xA);
loc_492E85:
	add(eax, ebx);
	to32i(dword_56E164+ecx) = eax; //mov
	inc(edx);
	add(ecx, (int32_t)4);
	cmp(edx, (int32_t)0x99);
	if (jl())
		goto loc_492E48;
	edx = 0xFFFFFF7D; //mov
	ecx = 0xFFFFFDF4; //mov
	ebp = 0xFF; //mov
	edi = 0x3F; //mov
	xor_(esi, esi);
loc_492EAF:
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	add(eax, (int32_t)0x81);
	test(eax, eax);
	if (jl())
		goto loc_492F72;
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_492EC8;
	eax = ebp; //mov
loc_492EC8:
	cmp(to32i(esp+8), (int32_t)0xF);
	if (jnz())
		goto loc_492F79;
	ebx = eax; //mov
	add(eax, (int32_t)4);
	sar(eax, (int32_t)3);
	sar(ebx, (int32_t)3);
	cmp(eax, (int32_t)0x1F);
	if (jle())
		goto loc_492EE8;
	eax = 0x1F; //mov
loc_492EE8:
	shl(ebx, (int32_t)0x15);
	shl(eax, (int32_t)5);
	add(ecx, (int32_t)4);
	add(eax, ebx);
	inc(edx);
	to32i(dword_56DCF0+ecx) = eax; //mov
	cmp(edx, (int32_t)0x83);
	if (jl())
		goto loc_492EAF;
	edx = 0xFFFFFF4F; //mov
	ecx = 0xFFFFFD3C; //mov
	ebp = 0x1F; //mov
	esi = 0xFF; //mov
	xor_(edi, edi);
loc_492F18:
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	add(eax, (int32_t)0x81);
	test(eax, eax);
	if (jl())
		goto loc_492F94;
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_492F2D;
	eax = esi; //mov
loc_492F2D:
	ebx = eax; //mov
	add(eax, (int32_t)4);
	sar(eax, (int32_t)3);
	sar(ebx, (int32_t)3);
	cmp(eax, (int32_t)0x1F);
	if (jle())
		goto loc_492F3F;
	eax = ebp; //mov
loc_492F3F:
	shl(ebx, (int32_t)0x10);
	add(ecx, (int32_t)4);
	add(eax, ebx);
	inc(edx);
	to32i(dword_56D820+ecx) = eax; //mov
	cmp(edx, (int32_t)0xB1);
	if (jl())
		goto loc_492F18;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_492F60:
	eax = edi; //mov
	goto loc_492E64;
loc_492F67:
	shl(ebx, (int32_t)0x1B);
	shl(eax, (int32_t)0xB);
	goto loc_492E85;
loc_492F72:
	eax = esi; //mov
	goto loc_492EC8;
loc_492F79:
	ebx = eax; //mov
	add(eax, (int32_t)2);
	sar(eax, (int32_t)2);
	sar(ebx, (int32_t)2);
	cmp(eax, (int32_t)0x3F);
	if (jle())
		goto loc_492EE8;
	eax = edi; //mov
	goto loc_492EE8;
loc_492F94:
	eax = edi; //mov
	goto loc_492F2D;
}
Fn(void) Game::_sub_492F98()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xA48);
	esi = eax; //mov
	to32i(esp+0xA10) = edx; //mov
	to32i(esp+0xA0C) = ebx; //mov
	edi = ecx; //mov
	edx = to32i(esp+0xA5C); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4931AA;
	ecx = 1; //mov
loc_492FC7:
	xor_(edx, edx);
	dl = to8i(byte_4DB25C); //mov
	cmp(edx, (int32_t)0xF);
	if (jz())
		goto loc_492FDD;
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_4931D4;
loc_492FDD:
	cmp(edx, to32i(dword_56E9C8));
	if (jz())
		goto loc_492FF2;
	eax = edx; //mov
	esp -= 4; _sub_492D54(); esp += 4; //call
	to32i(dword_56E9C8) = edx; //mov
loc_492FF2:
	xor_(ebx, ebx);
	xor_(eax, eax);
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	and_(eax, (int32_t)3);
	and_(si, (int16_t)0xFFFE);
	sar(eax, (int32_t)1);
	or_(esi, eax);
	eax = ecx; //mov
	imul32(eax, edi);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0xA58); //mov
	imul32(eax, ecx);
	to32i(esp+0xA08) = edx; //mov
	edx = to32i(esp+0xA10); //mov
	add(edx, eax);
	to32i(esp+0xA44) = edx; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4DB24C); //mov
	to32i(esp+0xA04) = eax; //mov
	cmp(esi, edx);
	if (jge())
		goto loc_493080;
	ebx = (int32_t)(intptr_t)(ecx+ecx); //lea
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(ebx-1); //lea
	sub(eax, esi);
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	imul32(ebx, eax);
	shl(eax, (int32_t)2);
	add(esi, ebx);
	add(to32i(esp+0xA0C), eax);
loc_493080:
	eax = to32i(esp+0xA08); //mov
	edi = to32i(dword_4DB254); //mov
	cmp(eax, edi);
	if (jle())
		goto loc_493098;
	to32i(esp+0xA08) = edi; //mov
loc_493098:
	eax = to32i(esp+0xA10); //mov
	ebp = to32i(dword_4DB250); //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_4930F0;
	edx = to32i(esp+0xA10); //mov
	eax = ebp; //mov
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(ecx-1); //lea
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = ecx; //mov
	imul32(edx, eax);
	imul32(eax, to32i(esp+0xA04));
	ebx = to32i(esp+0xA10); //mov
	ebp = to32i(esp+0xA0C); //mov
	shl(eax, (int32_t)2);
	add(ebx, edx);
	add(ebp, eax);
	to32i(esp+0xA10) = ebx; //mov
	to32i(esp+0xA0C) = ebp; //mov
loc_4930F0:
	eax = to32i(esp+0xA44); //mov
	edx = to32i(dword_4DB258); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_493108;
	to32i(esp+0xA44) = edx; //mov
loc_493108:
	edx = to32i(esp+0xA08); //mov
	sub(edx, esi);
	add(ecx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edi = eax; //mov
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_49319C;
	eax = to32i(esp+0xA04); //mov
	ecx = to32i(esp+0xA5C); //mov
	shl(eax, (int32_t)2);
	test(ecx, ecx);
	if (jnz())
		goto loc_4931E5;
	ebp = to32i(esp+0xA10); //mov
	ebx = to32i(esp+0xA44); //mov
	ecx = to32i(esp+0xA0C); //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_49319C;
	to32i(esp+0xA20) = eax; //mov
loc_49315E:
	ebx = ebp; //mov
	eax = esi; //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	ebx = edi; //mov
	edx = eax; //mov
	eax = ecx; //mov
	inc(ebp);
	esp -= 4; _sub_49A978(); esp += 4; //call
	eax = to32i(esp+0xA20); //mov
	edx = to32i(esp+0xA44); //mov
	add(ecx, eax);
	cmp(ebp, edx);
	if (jl())
		goto loc_49315E;
loc_49319C:
	xor_(eax, eax);
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4931AA:
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4931B9;
loc_4931AF:
	ecx = 2; //mov
	goto loc_492FC7;
loc_4931B9:
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_4931AF;
	cmp(edx, (int32_t)3);
	if (jz())
		goto loc_4931AF;
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4931D4:
	eax = 0xFFFFFFFE; //mov
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4931E5:
	cmp(ecx, (int32_t)3);
	if (jnz())
		goto loc_493366;
	ebp = to32i(esp+0xA10); //mov
	ebx = to32i(esp+0xA44); //mov
	ecx = to32i(esp+0xA0C); //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_493278;
	edx = edi; //mov
	dec(edx);
	to32i(esp+0xA18) = edx; //mov
	edx = (int32_t)(intptr_t)(edi+edi); //lea
	sub(edx, (int32_t)2);
	to32i(esp+0xA14) = eax; //mov
	to32i(esp+0xA28) = edx; //mov
loc_493225:
	ebx = to32i(esp+0xA18); //mov
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49ABEE(); esp += 4; //call
	ebx = ebp; //mov
	eax = esi; //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	ebx = to32i(esp+0xA28); //mov
	edx = eax; //mov
	eax = esp; //mov
	add(ebp, (int32_t)2);
	esp -= 4; _sub_49A978(); esp += 4; //call
	eax = to32i(esp+0xA14); //mov
	edx = to32i(esp+0xA44); //mov
	add(ecx, eax);
	cmp(ebp, edx);
	if (jl())
		goto loc_493225;
loc_493278:
	edx = to32i(esp+0xA08); //mov
	eax = to32i(esp+0xA44); //mov
	ecx = to32i(esp+0xA10); //mov
	sub(edx, esi);
	sub(eax, ecx);
	imul32(eax, edx);
	cmp(eax, (int32_t)0x25800);
	if (jg())
		goto loc_49334D;
loc_49329F:
	eax = to32i(esp+0xA0C); //mov
	edx = (int32_t)(intptr_t)(edi-1); //lea
	ebp = to32i(esp+0xA10); //mov
	to32i(esp+0xA34) = edx; //mov
	edx = to32i(esp+0xA04); //mov
	inc(ebp);
	shl(edx, (int32_t)2);
	add(edi, edi);
	to32i(esp+0xA24) = edx; //mov
	edx = to32i(esp+0xA44); //mov
	sub(edi, (int32_t)2);
	dec(edx);
	to32i(esp+0xA30) = edi; //mov
	to32i(esp+0xA38) = edx; //mov
	cmp(ebp, edx);
	if (jge())
		goto loc_49319C;
loc_4932EC:
	edi = to32i(esp+0xA24); //mov
	ecx = to32i(esp+0xA34); //mov
	add(edi, eax);
	ebx = esp; //mov
	edx = edi; //mov
	esp -= 4; _sub_49AC4A(); esp += 4; //call
	ebx = ebp; //mov
	eax = esi; //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	ebx = to32i(esp+0xA30); //mov
	edx = eax; //mov
	eax = esp; //mov
	add(ebp, (int32_t)2);
	esp -= 4; _sub_49A978(); esp += 4; //call
	eax = edi; //mov
	cmp(ebp, to32i(esp+0xA38));
	if (jl())
		goto loc_4932EC;
	xor_(eax, eax);
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_49334D:
	test(eax, eax);
	if (jnz())
		goto loc_49329F;
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_493366:
	ebp = to32i(esp+0xA10); //mov
	ebx = to32i(esp+0xA44); //mov
	ecx = to32i(esp+0xA0C); //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_4933C4;
	to32i(esp+0xA1C) = eax; //mov
loc_493386:
	ebx = ebp; //mov
	eax = esi; //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	ebx = edi; //mov
	edx = eax; //mov
	eax = ecx; //mov
	add(ebp, (int32_t)2);
	esp -= 4; _sub_49AA4B(); esp += 4; //call
	eax = to32i(esp+0xA1C); //mov
	edx = to32i(esp+0xA44); //mov
	add(ecx, eax);
	cmp(ebp, edx);
	if (jl())
		goto loc_493386;
loc_4933C4:
	cmp(to32i(esp+0xA5C), (int32_t)2);
	if (jnz())
		goto loc_49319C;
	eax = to32i(esp+0xA08); //mov
	edx = to32i(esp+0xA44); //mov
	ebx = to32i(esp+0xA10); //mov
	sub(eax, esi);
	sub(edx, ebx);
	imul32(eax, edx);
	cmp(eax, (int32_t)0x25800);
	if (jg())
		goto loc_4934A4;
loc_4933F9:
	eax = to32i(esp+0xA0C); //mov
	to32i(esp+0xA40) = eax; //mov
	eax = to32i(esp+0xA04); //mov
	shl(eax, (int32_t)2);
	to32i(esp+0xA2C) = eax; //mov
	eax = to32i(esp+0xA44); //mov
	ebp = to32i(esp+0xA10); //mov
	dec(eax);
	inc(ebp);
	to32i(esp+0xA3C) = eax; //mov
	cmp(ebp, eax);
	if (jge())
		goto loc_49319C;
loc_493437:
	ebx = ebp; //mov
	eax = esi; //mov
	ecx = to32i(esp+0xA2C); //mov
	edx = to32i(dword_4DB270); //mov
	eax = to32i(edx+eax*4); //mov
	edx = to32i(dword_4DB26C); //mov
	add(eax, to32i(edx+ebx*4));
	add(eax, to32i(dword_4DB260));
	edx = to32i(esp+0xA40); //mov
	ebx = eax; //mov
	add(ebp, (int32_t)2);
	eax = to32i(esp+0xA40); //mov
	add(edx, ecx);
	ecx = edi; //mov
	to32i(esp+0xA00) = edx; //mov
	esp -= 4; _sub_49AB12(); esp += 4; //call
	eax = to32i(esp+0xA00); //mov
	ebx = to32i(esp+0xA3C); //mov
	to32i(esp+0xA40) = eax; //mov
	cmp(ebp, ebx);
	if (jl())
		goto loc_493437;
	xor_(eax, eax);
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4934A4:
	test(eax, eax);
	if (jnz())
		goto loc_4933F9;
	add(esp, (int32_t)0xA48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_4934CC()
{
	push32(esi);
	esi = eax; //mov
	edx = to32i(dword_4DCE38); //mov
	to32i(dword_4DCE50) = eax; //mov
	to32i(dword_4DCE4C) = eax; //mov
	add(eax, (int32_t)0xC0);
	esp -= 4; _sub_4955F8(); esp += 4; //call
	eax = to32i(esi+0x84); //mov
	to32i(esi+0x3C) = eax; //mov
	eax = to32i(esi+0x88); //mov
	to32i(esi+4) = eax; //mov
	edx = to32i(esi+0x88); //mov
	eax = to32i(esi+0x84); //mov
	add(edx, eax);
	to32i(esi+8) = edx; //mov
	to32i(esi+0x2C) = ecx; //mov
	eax = to32i(esi+4); //mov
	to32i(esi+0x18) = eax; //mov
	eax = to32i(esi+0x18); //mov
	to32i(esi+0x14) = eax; //mov
	eax = to32i(esi+0x14); //mov
	to32i(esi+0xC) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(esi+0x10) = eax; //mov
	to32i(esi+0x28) = 0; //mov
	to32i(esi+0x40) = ebx; //mov
	to32i(esi+0x1C) = 0; //mov
	to32i(esi+0x70) = 0; //mov
	to32i(esi+0x78) = 0; //mov
	eax = to32i(esi+0x78); //mov
	to32i(esi+0x7C) = eax; //mov
	to32i(esi+0x20) = 7; //mov
	to32i(esi+0x24) = 0; //mov
	to32i(esi+0x38) = 0; //mov
	eax = to32i(esi+0x38); //mov
	to32i(esi+0x34) = eax; //mov
	to32i(esi+0xBC) = 0; //mov
	eax = to32i(esi+0xBC); //mov
	to32i(esi+0xB8) = eax; //mov
	to32i(esi+0x30) = 0; //mov
	esp -= 4; _sub_489E0C(); esp += 4; //call
	to32i(esi+0xA4) = eax; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(esi+0xAC) = eax; //mov
	ecx = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)(esi+0x8C); //lea
	ebx = 2; //mov
	push32(eax);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)sub_493F78; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	eax = to32i(esi+0xA4); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	eax = esi; //mov
	pop32(esi);
}
Fn(void) Game::_sub_4935E4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp+4) = edx; //mov
	esi = ebx; //mov
	ebp = ecx; //mov
	edi = eax; //mov
	test(ax, (int16_t)0xFFF);
	if (jz())
		goto loc_493606;
	edi = (int32_t)(intptr_t)(eax+0x1000); //lea
	and_(edi, (int32_t)0x7FFFF000);
loc_493606:
	ebx = 0x300; //mov
	eax = (int32_t)(intptr_t)aCdbuffer; //mov
	edx = edi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	edx = to32i(dword_4DCE38); //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ecx = ebp; //mov
	add(edx, (int32_t)0xF);
	ebx = esi; //mov
	and_(edx, (int32_t)0xFFF0);
	eax = (int32_t)(intptr_t)aCdstream; //mov
	add(edx, (int32_t)0xC0);
	esp -= 4; _sub_4844C4(); esp += 4; //call
	edx = to32i(dword_4DCE38); //mov
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(edx, (int32_t)0xF);
	and_(edx, (int32_t)0xFFF0);
	eax = esi; //mov
	add(edx, (int32_t)0xC0);
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(esi+0x88) = eax; //mov
	to32i(esi+0x84) = edi; //mov
	ebx = 0x1000; //mov
	edx = edi; //mov
	esp -= 4; _sub_49C890(); esp += 4; //call
	edi = to32i(dword_4DCE38); //mov
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	add(edx, edi);
	shl(edx, (int32_t)3);
	sub(edx, edi);
	shl(edx, (int32_t)2);
	add(edx, (int32_t)0xF);
	ebx = 0x1000; //mov
	and_(edx, (int32_t)0xFFF0);
	eax = esi; //mov
	add(edx, (int32_t)0xC0);
	esp -= 4; _sub_49C890(); esp += 4; //call
	edi = to32i(dword_4DCE38); //mov
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	add(edx, edi);
	shl(edx, (int32_t)3);
	sub(edx, edi);
	shl(edx, (int32_t)2);
	ecx = ebp; //mov
	add(edx, (int32_t)0xF);
	ebx = to32i(esp+4); //mov
	and_(edx, (int32_t)0xFFF0);
	eax = esi; //mov
	add(edx, (int32_t)0xC0);
	esp -= 4; _sub_4934CC(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_493718()
{
	push32(ecx);
	ecx = 1; //mov
	esp -= 4; _sub_4935E4(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_493728()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	esi = eax; //mov
	edi = edx; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebp = eax; //mov
	to32i(esp+0x1C) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = esi; //mov
	esp -= 4; _sub_4AD420(); esp += 4; //call
	test(ebp, ebp);
	if (jnz())
		goto loc_4937EF;
	eax = to32i(esp); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esp+0xC) = eax; //mov
loc_493776:
	eax = to32i(esp+8); //mov
	sub(eax, (int32_t)0x2000);
	and_(ax, (int16_t)0xE000);
	to32i(esp+8) = eax; //mov
	cmp(eax, (int32_t)0x40000);
	if (jg())
		goto loc_49380C;
loc_493792:
	edx = 0x2000; //mov
	eax = (int32_t)(intptr_t)aStream; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_484498(); esp += 4; //call
	ecx = eax; //mov
	eax = 0x2000; //mov
	edx = eax; //mov
	ebx = to32i(esp+0x18); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = eax; //mov
loc_4937B7:
	eax = to32i(esp); //mov
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4937B7;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edi = to32i(esp+8); //mov
	test(edi, edi);
	if (jle())
		goto loc_493823;
	xor_(ebp, ebp);
loc_4937D6:
	eax = to32i(esp); //mov
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_493819;
	eax = ebp; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_4937D6;
loc_4937EF:
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = edi; //mov
	esp -= 4; _sub_4AD420(); esp += 4; //call
	goto loc_493776;
loc_49380C:
	to32i(esp+8) = 0x40000; //mov
	goto loc_493792;
loc_493819:
	sub(edi, (int32_t)0x2000);
	test(edi, edi);
	if (jg())
		goto loc_4937D6;
loc_493823:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edi = eax; //mov
	xor_(ebp, ebp);
loc_49382C:
	eax = to32i(esp+4); //mov
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_493846;
	eax = ebp; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_49382C;
loc_493846:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ebx = eax; //mov
	eax = to32i(esp); //mov
	esp -= 4; _sub_4AD44C(); esp += 4; //call
	cmp(to32i(esp+0x1C), (int32_t)0);
	if (jz())
		goto loc_493865;
	eax = to32i(esp+4); //mov
	esp -= 4; _sub_4AD44C(); esp += 4; //call
loc_493865:
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	add(edx, edx);
	shl(edx, (int32_t)0x10);
	ecx = to32i(esp+8); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_56E9CC) = eax; //mov
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_49389A;
	to32i(dword_56E9CC) = 1; //mov
loc_49389A:
	eax = 0x3E80000; //mov
	edx = eax; //mov
	ecx = to32i(dword_56E9CC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	to32i(dword_56E9D0) = eax; //mov
	add(edx, edi);
	eax = to32i(esp+8); //mov
	add(edx, edx);
	sar(eax, (int32_t)2);
	shl(edx, (int32_t)0x10);
	add(ecx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4DCE3C) = eax; //mov
	cmp(eax, (int32_t)0xDA);
	if (jg())
		goto loc_493904;
	cmp(eax, (int32_t)0xA3);
	if (jl())
		goto loc_493910;
loc_4938E6:
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, ebx);
	add(eax, eax);
	to32i(dword_4DCE40) = eax; //mov
	eax = to32i(dword_56E9D0); //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_493904:
	to32i(dword_4DCE3C) = 0xDA; //mov
	goto loc_4938E6;
loc_493910:
	ecx = 1; //mov
	to32i(dword_4DD3B0) = ecx; //mov
	to32i(dword_4DCE3C) = ecx; //mov
	goto loc_4938E6;
}
Fn(void) Game::_sub_493940()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(dword_4DCE4C); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_493951;
	pop32(edx);
	pop32(ecx);
	return;
loc_493951:
	to32i(edx+0x24) = 8; //mov
	edx = to32i(edx+0xA8); //mov
	add(eax, (int32_t)0x8C);
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = to32i(ecx+0xA4); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	eax = to32i(ecx+0xA4); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(ecx+0xAC) = 0; //mov
	eax = (int32_t)(intptr_t)(ecx+0x8C); //lea
	xor_(ecx, ecx);
	esp -= 4; _sub_489B70(); esp += 4; //call
	to32i(dword_4DCE4C) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4939AC()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	edx = eax; //mov
	ecx = to32i(dword_4DCE4C); //mov
	cmp(eax, ecx);
	if (jz())
		goto loc_4939FB;
	eax = ecx; //mov
	cmp(to32i(ecx+0x70), (int32_t)0);
	if (jz())
		goto loc_4939D1;
loc_4939C3:
	cmp(edx, to32i(eax+0x70));
	if (jz())
		goto loc_4939D1;
	eax = to32i(eax+0x70); //mov
	cmp(to32i(eax+0x70), (int32_t)0);
	if (jnz())
		goto loc_4939C3;
loc_4939D1:
	ecx = to32i(edx+0x70); //mov
	to32i(eax+0x70) = ecx; //mov
	eax = to32i(edx+0x88); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(ebp, ebp);
	to32i(dword_4DCE50) = ebp; //mov
	to32i(dword_4DCE4C) = ebp; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_4939FB:
	esp -= 4; _sub_493940(); esp += 4; //call
loc_493A00:
	ecx = to32i(ecx+0x70); //mov
	eax = to32i(edx+0x88); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	edx = ecx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_493A00;
	xor_(ebp, ebp);
	to32i(dword_4DCE50) = ebp; //mov
	to32i(dword_4DCE4C) = ebp; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_493A30()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = ebx; //mov
	ebp = ecx; //mov
	ecx = to32i(esp+0x14); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_495714(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_493ABF;
	ebx = 0x8F; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	to8i(ecx+0x8E) = 0; //mov
	to32i(ecx+0x94) = edi; //mov
	to32i(ecx+0x90) = ebp; //mov
	cmp(to32i(esi+0x7C), (int32_t)0);
	if (jz())
		goto loc_493ACE;
	eax = to32i(esi+0x7C); //mov
	to32i(eax+0x98) = ecx; //mov
	to32i(esi+0x7C) = ecx; //mov
loc_493A84:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_493A98;
	cmp(to32i(esi+0x24), (int32_t)0);
	if (jnz())
		goto loc_493A98;
	to32i(esi+0x24) = 0xF; //mov
loc_493A98:
	eax = to32i(esi+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edx = to32i(esi+0xA8); //mov
	eax = (int32_t)(intptr_t)(esi+0x8C); //lea
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = 1; //mov
loc_493AB9:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_493ABF:
	eax = to32i(esi+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	goto loc_493AB9;
loc_493ACE:
	to32i(esi+0x7C) = ecx; //mov
	eax = to32i(esi+0x7C); //mov
	to32i(esi+0x78) = eax; //mov
	goto loc_493A84;
}
Fn(void) Game::_sub_493ADC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebp = edx; //mov
	edi = ebx; //mov
	to32i(esp) = ecx; //mov
	ecx = to32i(esp+0x14); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to32i(esi+0x78), (int32_t)0);
	if (jz())
		goto loc_493B18;
loc_493B00:
	eax = to32i(esi+0x78); //mov
	edx = to32i(eax+0x98); //mov
	to32i(esi+0x78) = edx; //mov
	esp -= 4; _sub_495634(); esp += 4; //call
	cmp(to32i(esi+0x78), (int32_t)0);
	if (jnz())
		goto loc_493B00;
loc_493B18:
	eax = ecx; //mov
	ebx = 0x8F; //mov
	esp -= 4; _sub_495714(); esp += 4; //call
	edx = ebp; //mov
	ecx = eax; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	to8i(ecx+0x8E) = 0; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x94) = edi; //mov
	to32i(ecx+0x90) = eax; //mov
	to32i(esi+0x7C) = ecx; //mov
	eax = to32i(esi+0x7C); //mov
	to32i(esi+0x78) = eax; //mov
	cmp(to32i(esi+0x1C), (int32_t)0);
	if (jz())
		goto loc_493B5F;
	cmp(to32i(esi+0x24), (int32_t)0);
	if (jnz())
		goto loc_493B5F;
	to32i(esi+0x24) = 0xF; //mov
loc_493B5F:
	eax = to32i(esi+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edx = to32i(esi+0xA8); //mov
	eax = (int32_t)(intptr_t)(esi+0x8C); //lea
	esp -= 4; _sub_489E20(); esp += 4; //call
	cmp(edi, (int32_t)0xB);
	if (jz())
		goto loc_493B98;
	cmp(edi, (int32_t)0xD);
	if (jz())
		goto loc_493B98;
	cmp(edi, (int32_t)0x14);
	if (jz())
		goto loc_493B98;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_493B98:
	eax = to32i(esi+0xA4); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_493BB4()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	ebx = 1; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_493ADC(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493BDC()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	push32(0);
	ebx = 0x11; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_493A30(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493C0C()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	ebx = 0xD; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_493ADC(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493C5C()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	push32(0);
	ebx = 0x13; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_493A30(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493C8C()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	ebx = 0x14; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_493ADC(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493CB4()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	ebx = 2; //mov
	push32(1);
	ecx = edx; //mov
	edx = (int32_t)(intptr_t)dword_4D070C; //mov
	esp -= 4; _sub_493A30(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493CEC()
{
	push32(ebx);
	push32(ecx);
	push32(1);
	ebx = 0x10; //mov
	push32(0);
	ecx = edx; //mov
	edx = (int32_t)(intptr_t)dword_4D070C; //mov
	esp -= 4; _sub_493A30(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_493D9C()
{
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esi = to32i(eax+0x84); //mov
	to32i(eax+0x3C) = esi; //mov
	esi = to32i(eax+0x88); //mov
	to32i(eax+4) = esi; //mov
	esi = to32i(eax+0x88); //mov
	edi = to32i(eax+0x84); //mov
	add(esi, edi);
	to32i(eax+8) = esi; //mov
	esi = to32i(eax+4); //mov
	to32i(eax+0x18) = esi; //mov
	esi = to32i(eax+0x18); //mov
	to32i(eax+0x14) = esi; //mov
	esi = to32i(eax+0x14); //mov
	to32i(eax+0xC) = esi; //mov
	esi = to32i(eax+0xC); //mov
	to32i(eax+0x10) = esi; //mov
	to32i(eax+0xBC) = 0; //mov
	esi = to32i(eax+0xBC); //mov
	to32i(eax+0xB8) = esi; //mov
	to32i(eax+0x28) = 0; //mov
	to32i(eax+0x40) = 0; //mov
	to32i(eax+0x5C) = 0; //mov
	to32i(eax+0x54) = 1; //mov
	to32i(eax+0x6C) = ebx; //mov
	to32i(eax+0x68) = edx; //mov
	edx = to32i(dword_4DCE4C); //mov
	ebx = to32i(edx+0xAC); //mov
	to32i(eax+0xAC) = ebx; //mov
	ebx = to32i(edx+0xA8); //mov
	to32i(eax+0xA8) = ebx; //mov
	edi = (int32_t)(intptr_t)(eax+0x8C); //lea
	esi = (int32_t)(intptr_t)(edx+0x8C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	ebx = to32i(edx+0xA4); //mov
	to32i(eax+0xA4) = ebx; //mov
	eax = to32i(edx+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(to32i(eax+0x70), (int32_t)0);
	if (jz())
		goto loc_493E70;
loc_493E64:
	eax = to32i(eax+0x70); //mov
	cmp(to32i(eax+0x70), (int32_t)0);
	if (jnz())
		goto loc_493E64;
loc_493E70:
	to32i(eax+0x70) = ecx; //mov
	to32i(ecx+0x70) = 0; //mov
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_493E90()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebp = edx; //mov
	esi = ecx; //mov
	ecx = ebx; //mov
	test(bx, (int16_t)0xFFF);
	if (jz())
		goto loc_493EB2;
	ecx = (int32_t)(intptr_t)(ebx+0x1000); //lea
	and_(ecx, (int32_t)0x7FFFF000);
loc_493EB2:
	ebx = 0x300; //mov
	eax = (int32_t)(intptr_t)aCdbuffer; //mov
	edx = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	edx = 0xC0; //mov
	edi = eax; //mov
	ebx = esi; //mov
	eax = (int32_t)(intptr_t)aSeccdstream; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0xC0; //mov
	esi = eax; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(esi+0x88) = edi; //mov
	to32i(esi+0x84) = ecx; //mov
	ebx = 0x1000; //mov
	edx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_49C890(); esp += 4; //call
	ebx = 0x1000; //mov
	edx = 0xC0; //mov
	eax = esi; //mov
	ecx = 0xC0; //mov
	esp -= 4; _sub_49C890(); esp += 4; //call
	edx = to32i(esp); //mov
	ebx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_493D9C(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_493F78()
{
	static const void *const off_493F28[] = {
		&&loc_493FFC,
		&&loc_494358,
		&&loc_49462E,
		&&loc_493FA6,
		&&loc_493FA6,
		&&loc_493FA6,
		&&loc_49405E,
		&&loc_494127,
		&&loc_493FA6,
		&&loc_493FA6,
		&&loc_4942CD,
		&&loc_493FA6,
		&&loc_49423B,
		&&loc_493FA6,
		&&loc_493FA6,
		&&loc_494358,
		&&loc_493FFC,
		&&loc_493FFC,
		&&loc_493FFC,
		&&loc_49423B,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	edx = to32i(dword_4DCE4C); //mov
	to32i(edx+0xA8) = eax; //mov
	edx = to32i(edx+0xA4); //mov
	xor_(eax, eax);
	esp -= 4; _sub_489E20(); esp += 4; //call
	edi = 1; //mov
	xor_(ebp, ebp);
loc_493FA6:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x24); //mov
	cmp(edx, (int32_t)8);
	if (jz())
		goto loc_494056;
	cmp(to32i(eax+0x24), (int32_t)0xF);
	if (jnz())
		goto loc_493FD4;
	to32i(eax+0x20) = 7; //mov
loc_493FD4:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x24) = ebp; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x20); //mov
	dec(edx);
	cmp(edx, (int32_t)0x13);
	if (ja())
		goto loc_493FA6;
	goto *off_493F28[edx];
loc_493FFC:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x1C));
	if (jz())
		goto loc_49400E;
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD44C(); esp += 4; //call
loc_49400E:
	eax = esp; //mov
	push32(eax);
	eax = to32i(dword_4DCE4C); //mov
	ecx = (int32_t)(intptr_t)(eax+0x58); //lea
	ebx = (int32_t)(intptr_t)(eax+0x50); //lea
	edx = (int32_t)(intptr_t)(eax+0x1C); //lea
	eax = to32i(eax+0x80); //mov
	esp -= 4; _sub_4AD420(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49416B;
loc_494032:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x80); //mov
	esp -= 4; _sub_495634(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x1C) = ebp; //mov
	to32i(eax+0x20) = 7; //mov
	goto loc_493FA6;
loc_494056:
	to32i(eax+0x20) = edx; //mov
	goto loc_493FD4;
loc_49405E:
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x78));
	if (jnz())
		goto loc_49409B;
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	goto loc_493FA6;
loc_49409B:
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(dword_4DCE4C); //mov
	eax = to32i(ecx+0x78); //mov
	edx = to32i(ecx+0x78); //mov
	edx = to32i(edx+0x98); //mov
	to32i(ecx+0x78) = edx; //mov
	to32i(ecx+0x80) = eax; //mov
	ebx = to32i(ecx+0x78); //mov
	cmp(ebp, ebx);
	if (jnz())
		goto loc_4940CB;
	to32i(ecx+0x7C) = ebx; //mov
loc_4940CB:
	edx = to32i(dword_4DCE4C); //mov
	ecx = to32i(eax+0x94); //mov
	to32i(edx+0x20) = ecx; //mov
	ecx = to32i(edx+0x50); //mov
	esi = to32i(eax+0x90); //mov
	add(ecx, esi);
	to32i(edx+0x60) = ecx; //mov
	edx = to32i(eax+0x94); //mov
	cmp(edx, (int32_t)0xD);
	if (jnz())
		goto loc_494108;
loc_4940F3:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_493FA6;
loc_494108:
	cmp(edx, (int32_t)0x14);
	if (jz())
		goto loc_4940F3;
	cmp(edi, edx);
	if (jz())
		goto loc_4940F3;
	cmp(edx, (int32_t)0x11);
	if (jz())
		goto loc_4940F3;
	cmp(edx, (int32_t)0x12);
	if (jz())
		goto loc_4940F3;
	cmp(edx, (int32_t)0x13);
	if (jz())
		goto loc_4940F3;
	esp -= 4; _sub_495634(); esp += 4; //call
	goto loc_4940F3;
loc_494127:
	cmp(to32i(eax+0x1C), (int32_t)0);
	if (jnz())
		goto loc_494161;
loc_49412D:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x1C) = 0; //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	edx = to32i(dword_4DCE4C); //mov
	edx = to32i(edx+0xA4); //mov
	xor_(eax, eax);
	esp -= 4; _sub_489E20(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_494161:
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD44C(); esp += 4; //call
	goto loc_49412D;
loc_49416B:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x80); //mov
	esp -= 4; _sub_495634(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(dword_4DCE4C); //mov
	eax = to32i(esp); //mov
	cmp(eax, to32i(ecx+0x40));
	if (jle())
		goto loc_494200;
	to32i(ecx+0xA0) = edi; //mov
loc_49419F:
	to32i(ecx+0x40) = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x50); //mov
	to32i(eax+0x60) = edx; //mov
	edx = to32i(eax+0x50); //mov
	ecx = to32i(eax+0x58); //mov
	add(edx, ecx);
	to32i(eax+0x54) = edx; //mov
	cmp(edi, to32i(eax+0x20));
	if (jnz())
		goto loc_494224;
loc_4941BD:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x14); //mov
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0xB8) = ebp; //mov
loc_4941CE:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	cmp(to32i(eax+0x20), (int32_t)0x13);
	if (jnz())
		goto loc_49422C;
loc_4941DF:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x20) = 7; //mov
loc_4941EB:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_493FA6;
loc_494200:
	eax = to32i(ecx+0x40); //mov
	edx = to32i(ecx+0x40); //mov
	ebx = to32i(esp); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(ecx+0xA0) = eax; //mov
	eax = ebx; //mov
	esi = to32i(ecx+0xA0); //mov
	imul32(eax, esi);
	goto loc_49419F;
loc_494224:
	cmp(to32i(eax+0x20), (int32_t)0x12);
	if (jz())
		goto loc_4941BD;
	goto loc_4941CE;
loc_49422C:
	cmp(to32i(eax+0x20), (int32_t)0x12);
	if (jz())
		goto loc_4941DF;
	to32i(eax+0x20) = 0x10; //mov
	goto loc_4941EB;
loc_49423B:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x1C));
	if (jz())
		goto loc_49424D;
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD44C(); esp += 4; //call
loc_49424D:
	eax = esp; //mov
	push32(eax);
	eax = to32i(dword_4DCE4C); //mov
	ecx = (int32_t)(intptr_t)(eax+0x58); //lea
	ebx = (int32_t)(intptr_t)(eax+0x50); //lea
	edx = (int32_t)(intptr_t)(eax+0x1C); //lea
	eax = to32i(eax+0x80); //mov
	esp -= 4; _sub_4AD420(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_494032;
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x80); //mov
	esp -= 4; _sub_495634(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(dword_4DCE4C); //mov
	eax = to32i(esp); //mov
	cmp(eax, to32i(ecx+0x40));
	if (jle())
		goto loc_49445B;
	to32i(ecx+0xA0) = edi; //mov
loc_4942A9:
	to32i(ecx+0x40) = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x50); //mov
	to32i(eax+0x60) = edx; //mov
	edx = to32i(eax+0x50); //mov
	ecx = to32i(eax+0x58); //mov
	add(edx, ecx);
	to32i(eax+0x54) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_4942CD:
	eax = to32i(dword_4DCE4C); //mov
	to32i(dword_4DCE50) = eax; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(ebp, to32i(dword_4DCE50));
	if (jz())
		goto loc_494325;
loc_4942EA:
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+4); //mov
	to32i(eax+0x18) = edx; //mov
	edx = to32i(eax+0x18); //mov
	to32i(eax+0x14) = edx; //mov
	edx = to32i(eax+0x14); //mov
	to32i(eax+0xC) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(eax+0x10) = edx; //mov
	to32i(eax+0xBC) = ebp; //mov
	edx = to32i(eax+0xBC); //mov
	to32i(eax+0xB8) = edx; //mov
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_4942EA;
loc_494325:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(to32i(eax+0x20), (int32_t)0x14);
	if (jz())
		goto loc_49447F;
	to32i(eax+0x20) = 2; //mov
	edx = to32i(eax+0xA4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
loc_494358:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(to32i(eax+0x20), (int32_t)2);
	if (jnz())
		goto loc_494498;
	edx = to32i(eax+0x14); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	to32i(eax+0xB8) = ebp; //mov
loc_494389:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x60); //mov
	to32i(eax+0x5C) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x5C); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD4DC(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ecx = to32i(eax+0x5C); //mov
	sub(ecx, edx);
	to32i(eax+0xB0) = ecx; //mov
	edx = to32i(eax+0x40); //mov
	ecx = to32i(eax+0xB0); //mov
	sub(edx, ecx);
	to32i(eax+0x4C) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	edx = to32i(dword_4DCE4C); //mov
	eax = edx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	cmp(eax, to32i(edx+0x40));
	if (jg())
		goto loc_494554;
loc_494406:
	ecx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(ecx+0x24));
	if (jnz())
		goto loc_4944A3;
	eax = ecx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(ecx+8); //mov
	edx = to32i(ecx+0xC); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(edx, eax);
	if (jz())
		goto loc_4944A3;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494406;
loc_49445B:
	eax = to32i(ecx+0x40); //mov
	edx = to32i(ecx+0x40); //mov
	ebx = to32i(esp); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(ecx+0xA0) = eax; //mov
	eax = ebx; //mov
	esi = to32i(ecx+0xA0); //mov
	imul32(eax, esi);
	goto loc_4942A9;
loc_49447F:
	to32i(eax+0x20) = 7; //mov
	edx = to32i(eax+0xA4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	goto loc_493FA6;
loc_494498:
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	goto loc_494389;
loc_4944A3:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_4944C6:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494501;
	esp -= 4; _sub_4953C0(); esp += 4; //call
	cmp(eax, to32i(esp));
	if (jg())
		goto loc_494501;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_4944C6;
loc_494501:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFF; //mov
	edx = to32i(eax+4); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_494554:
	ecx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(ecx+0x24));
	if (jnz())
		goto loc_494592;
	eax = ecx; //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, to32i(ecx+0x40));
	if (jg())
		goto loc_494592;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494554;
loc_494592:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_4945B5:
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0xA0); //mov
	edx = to32i(eax+0xC); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4945D8;
	eax = edi; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_4945B5;
loc_4945D8:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x4C); //mov
	add(to32i(eax+0x5C), edx);
	cmp(ebp, to32i(eax+0xB0));
	if (jz())
		goto loc_494611;
	ebx = to32i(eax+0x4C); //mov
	edx = to32i(eax+0x10); //mov
	ecx = to32i(eax+0x10); //mov
	eax = to32i(eax+0xB0); //mov
	add(eax, ecx);
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_494611:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x4C); //mov
	add(to32i(eax+0xC), edx);
	to32i(eax+0x20) = 3; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_49462E:
	edx = to32i(dword_4DCE4C); //mov
	cmp(to32i(edx+0x4C), (int32_t)8);
	if (jnb())
		goto loc_49482B;
	eax = edx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	cmp(eax, to32i(edx+0x40));
	if (jg())
		goto loc_494775;
loc_494654:
	ecx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(ecx+0x24));
	if (jnz())
		goto loc_4946A5;
	eax = ecx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(ecx+8); //mov
	edx = to32i(ecx+0xC); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(edx, eax);
	if (jz())
		goto loc_4946A5;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494654;
loc_4946A5:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_4946C8:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_494709;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_4953C0(); esp += 4; //call
	cmp(eax, to32i(edx+0x4C));
	if (jg())
		goto loc_494709;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_4946C8;
loc_494709:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0x4C); //mov
	edx = to32i(eax+4); //mov
	eax = to32i(eax+0x10); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFF; //mov
	edx = to32i(eax+4); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	edx = to32i(eax+0x4C); //mov
	add(to32i(eax+0xC), edx);
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_494775:
	ecx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(ecx+0x24));
	if (jnz())
		goto loc_4947B3;
	eax = ecx; //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, to32i(ecx+0x40));
	if (jg())
		goto loc_4947B3;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494775;
loc_4947B3:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_4947D6:
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0xA0); //mov
	edx = to32i(eax+0xC); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4947F9;
	eax = edi; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_4947D6;
loc_4947F9:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x40); //mov
	add(to32i(eax+0xC), edx);
	edx = to32i(eax+0x40); //mov
	add(to32i(eax+0x5C), edx);
	edx = to32i(eax+0x40); //mov
	add(to32i(eax+0x4C), edx);
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_49482B:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x10); //mov
	ecx = 4; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0x5343456C);
	if (jnz())
		goto loc_494864;
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x78));
	if (jz())
		goto loc_494864;
	to32i(eax+0x20) = 7; //mov
	goto loc_493FA6;
loc_494864:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	edx = to32i(edx+4); //mov
	to32i(eax+0x48) = edx; //mov
	edx = to32i(eax+0x48); //mov
	ecx = to32i(eax+0x4C); //mov
	sub(edx, ecx);
	to32i(eax+0x44) = edx; //mov
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebp, eax);
	if (jz())
		goto loc_4948C8;
loc_494899:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x10); //mov
	ecx = 4; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = eax; //mov
	eax = to32i(dword_4DCE50); //mov
	and_(edx, to32i(eax+0x6C));
	cmp(edx, to32i(eax+0x68));
	if (jnz())
		goto loc_49496B;
loc_4948C8:
	cmp(ebp, to32i(dword_4DCE50));
	if (jnz())
		goto loc_4948DA;
	eax = to32i(dword_4DCE4C); //mov
	to32i(dword_4DCE50) = eax; //mov
loc_4948DA:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	ecx = to32i(dword_4DCE4C); //mov
	cmp(to32i(ecx+0x48), (int32_t)8);
	if (jnb())
		goto loc_494980;
loc_4948FA:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x2C));
	if (jnz())
		goto loc_49499C;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	to32i(dword_4DCE50) = eax; //mov
loc_49491D:
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+0x10); //mov
	ecx = to32i(eax+0x68); //mov
	to32i(edx) = ecx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx+4) = 8; //mov
	add(to32i(eax+0x10), (int32_t)8);
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_49491D;
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x20) = 7; //mov
	goto loc_493FA6;
loc_49496B:
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_494899;
	goto loc_4948C8;
loc_494980:
	edx = to32i(dword_4DCE50); //mov
	eax = to32i(edx+0x3C); //mov
	edx = to32i(edx+0x3C); //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(eax, to32i(ecx+0x48));
	if (jl())
		goto loc_4948FA;
loc_49499C:
	eax = to32i(dword_4DCE50); //mov
	ebx = to32i(dword_4DCE4C); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_494D3D;
	esi = ebp; //mov
	eax = to32i(ebx+0x48); //mov
	add(eax, to32i(ebx+0x40));
	edx = to32i(dword_4DCE50); //mov
	ecx = (int32_t)(intptr_t)(eax+8); //lea
	eax = edx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	cmp(eax, ecx);
	if (ja())
		goto loc_494B4F;
loc_4949D5:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494A29;
	ecx = to32i(dword_4DCE50); //mov
	eax = ecx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	edx = to32i(ecx+8); //mov
	ebx = to32i(ecx+0xC); //mov
	eax = to32i(dword_4DCE50); //mov
	sub(edx, ebx);
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(edx, eax);
	if (jz())
		goto loc_494A29;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_4949D5;
loc_494A29:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_494A4C:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494A8C;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, (int32_t)8);
	if (ja())
		goto loc_494A8C;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494A4C;
loc_494A8C:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_494AAF:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494AF7;
	ecx = to32i(eax+0x48); //mov
	add(ecx, to32i(eax+0x40));
	eax = to32i(dword_4DCE50); //mov
	edx = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_4953C0(); esp += 4; //call
	cmp(eax, edx);
	if (ja())
		goto loc_494AF7;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494AAF;
loc_494AF7:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFF; //mov
	edx = to32i(eax+4); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_494B4F:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x44));
	if (jg())
		goto loc_494C74;
loc_494B5D:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_494B9E;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, to32i(edx+0x4C));
	if (jg())
		goto loc_494B9E;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494B5D;
loc_494B9E:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0x4C); //mov
	edx = to32i(dword_4DCE50); //mov
	edx = to32i(edx+0x10); //mov
	eax = to32i(eax+0x10); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(dword_4DCE50); //mov
	eax = to32i(dword_4DCE4C); //mov
	ecx = to32i(edx+0x10); //mov
	ebx = to32i(eax+0x4C); //mov
	add(ecx, ebx);
	to32i(edx+0xC) = ecx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	to32i(eax+0x4C) = ebp; //mov
loc_494C04:
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_494C0F:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x44));
	if (jl())
		goto loc_494D6D;
loc_494C1D:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x44));
	if (jge())
		goto loc_494F4A;
loc_494C2B:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_494EC5;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, to32i(edx+0x40));
	if (jg())
		goto loc_494EC5;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494C2B;
loc_494C74:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_494CB5;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, to32i(edx+0x48));
	if (jg())
		goto loc_494CB5;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494C74;
loc_494CB5:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0x48); //mov
	edx = to32i(dword_4DCE50); //mov
	edx = to32i(edx+0x10); //mov
	eax = to32i(eax+0x10); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(dword_4DCE50); //mov
	eax = to32i(dword_4DCE4C); //mov
	ecx = to32i(edx+0x10); //mov
	ebx = to32i(eax+0x48); //mov
	add(ecx, ebx);
	to32i(edx+0xC) = ecx; //mov
	edx = to32i(eax+0x44); //mov
	neg(edx);
	to32i(eax+0x4C) = edx; //mov
	ebx = to32i(eax+0x4C); //mov
	edx = to32i(eax+0x10); //mov
	ecx = to32i(eax+0x10); //mov
	eax = to32i(eax+0x48); //mov
	add(eax, ecx);
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x48); //mov
	sub(to32i(eax+0xC), edx);
	goto loc_494C04;
loc_494D3D:
	eax = to32i(ebx+0x10); //mov
	ecx = 4; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0x5343456C);
	if (jnz())
		goto loc_494D64;
	eax = edi; //mov
	esi = eax; //mov
	goto loc_494C0F;
loc_494D64:
	eax = ebp; //mov
	esi = eax; //mov
	goto loc_494C0F;
loc_494D6D:
	edx = to32i(eax+0x44); //mov
	add(edx, to32i(eax+0x40));
	ecx = (int32_t)(intptr_t)(edx+8); //lea
	edx = to32i(dword_4DCE50); //mov
	eax = edx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	cmp(eax, ecx);
	if (ja())
		goto loc_494C1D;
loc_494D91:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494DE5;
	ecx = to32i(dword_4DCE50); //mov
	eax = ecx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	edx = to32i(ecx+8); //mov
	ebx = to32i(ecx+0xC); //mov
	eax = to32i(dword_4DCE50); //mov
	sub(edx, ebx);
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(edx, eax);
	if (jz())
		goto loc_494DE5;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494D91;
loc_494DE5:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_494E08:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_494E49;
	eax = to32i(dword_4DCE50); //mov
	esp -= 4; _sub_4953C0(); esp += 4; //call
	cmp(eax, to32i(edx+0x4C));
	if (jg())
		goto loc_494E49;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494E08;
loc_494E49:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ebx = to32i(dword_4DCE4C); //mov
	ebx = to32i(ebx+0x4C); //mov
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+4); //mov
	eax = to32i(eax+0x10); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFF; //mov
	edx = to32i(dword_4DCE4C); //mov
	ecx = to32i(eax+4); //mov
	ebx = to32i(edx+0x4C); //mov
	add(ecx, ebx);
	to32i(eax+0xC) = ecx; //mov
	ecx = to32i(eax+4); //mov
	to32i(eax+0x10) = ecx; //mov
	eax = to32i(edx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_494C1D;
loc_494EC5:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_494F4A;
loc_494EE4:
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0xA0); //mov
	edx = to32i(dword_4DCE50); //mov
	edx = to32i(edx+0xC); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_4AD4AC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_494F0D;
	eax = edi; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_494EE4;
loc_494F0D:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x40); //mov
	add(to32i(eax+0x5C), edx);
	edx = to32i(dword_4DCE50); //mov
	ecx = to32i(eax+0x40); //mov
	add(to32i(edx+0xC), ecx);
	edx = to32i(eax+0x40); //mov
	sub(to32i(eax+0x44), edx);
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_494C1D;
loc_494F4A:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(esi, esi);
	if (jnz())
		goto loc_495027;
	edx = to32i(dword_4DCE4C); //mov
	eax = to32i(dword_4DCE50); //mov
	ecx = to32i(edx+0x48); //mov
	add(to32i(eax+0x10), ecx);
	ecx = to32i(edx+0x48); //mov
	sub(ecx, (int32_t)8);
	add(to32i(eax+0xB8), ecx);
	eax = to32i(edx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4DCE50); //mov
	esi = to32i(dword_4DCE4C); //mov
	cmp(eax, esi);
	if (jz())
		goto loc_495243;
	edx = esi; //mov
	cmp(ebp, to32i(esi+0x4C));
	if (jnz())
		goto loc_4951DB;
	ecx = eax; //mov
	eax = to32i(eax+0xC); //mov
	esi = to32i(ecx+0x10); //mov
	ecx = eax; //mov
	eax = edx; //mov
	sub(ecx, esi);
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	cmp(eax, ecx);
	if (jg())
		goto loc_495117;
loc_494FD2:
	edx = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(edx+0x24));
	if (jnz())
		goto loc_49505B;
	eax = edx; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	ecx = to32i(edx+0xC); //mov
	edx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	sub(edx, ecx);
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(edx, eax);
	if (jz())
		goto loc_49505B;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_494FD2;
loc_495027:
	edx = to32i(dword_4DCE4C); //mov
	eax = to32i(dword_4DCE50); //mov
	ecx = to32i(edx+0x48); //mov
	add(to32i(eax+0x10), ecx);
	ecx = to32i(edx+0x48); //mov
	sub(ecx, (int32_t)8);
	add(to32i(eax+0xB8), ecx);
	to32i(edx+0x20) = 7; //mov
	eax = to32i(edx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	goto loc_493FA6;
loc_49505B:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
loc_49507E:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_4950C4;
	ecx = to32i(dword_4DCE50); //mov
	edx = to32i(ecx+0xC); //mov
	sub(edx, to32i(ecx+0x10));
	esp -= 4; _sub_4953C0(); esp += 4; //call
	cmp(eax, edx);
	if (jg())
		goto loc_4950C4;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_49507E;
loc_4950C4:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFF; //mov
	edx = to32i(eax+4); //mov
	to32i(eax+0x10) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_495117:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_49515D;
	ecx = to32i(dword_4DCE50); //mov
	edx = to32i(ecx+0xC); //mov
	sub(edx, to32i(ecx+0x10));
	esp -= 4; _sub_495380(); esp += 4; //call
	cmp(eax, edx);
	if (jg())
		goto loc_49515D;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_495117;
loc_49515D:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_493FA6;
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	edx = to32i(dword_4DCE50); //mov
	eax = to32i(edx+0xC); //mov
	ecx = to32i(edx+0x10); //mov
	sub(eax, ecx);
	ecx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x4C) = ecx; //mov
	ebx = to32i(eax+0x4C); //mov
	eax = to32i(eax+0x10); //mov
	ecx = to32i(edx+0x10); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x10); //mov
	ebx = to32i(eax+0x4C); //mov
	add(edx, ebx);
	to32i(eax+0xC) = edx; //mov
loc_4951D0:
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_4951DB:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x5C); //mov
	sub(edx, to32i(eax+0x4C));
	cmp(edx, to32i(eax+0x54));
	if (jl())
		goto loc_493FA6;
	cmp(ebp, to32i(eax+0x78));
	if (jnz())
		goto loc_4952E4;
	to32i(dword_4DCE50) = eax; //mov
loc_4951FD:
	eax = to32i(dword_4DCE4C); //mov
	cmp(ebp, to32i(eax+0x24));
	if (jnz())
		goto loc_49526B;
	edx = to32i(dword_4DCE50); //mov
	eax = edx; //mov
	esp -= 4; _sub_495380(); esp += 4; //call
	add(eax, to32i(edx+0x4C));
	cmp(eax, (int32_t)8);
	if (ja())
		goto loc_49526B;
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = edi; //mov
	eax = to32i(eax+0x1C); //mov
	edx = edi; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xA8); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	goto loc_4951FD;
loc_495243:
	eax = to32i(esi+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	edx = to32i(dword_4DCE50); //mov
	eax = to32i(edx+0xC); //mov
	ecx = to32i(edx+0x10); //mov
	edx = eax; //mov
	eax = to32i(dword_4DCE4C); //mov
	sub(edx, ecx);
	to32i(eax+0x4C) = edx; //mov
	goto loc_4951D0;
loc_49526B:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0xB4) = ebp; //mov
	eax = to32i(eax+0x1C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_459A80(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ebx = to32i(eax+0x24); //mov
	cmp(ebp, ebx);
	if (jz())
		goto loc_4952F5;
loc_49528C:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	to32i(dword_4DCE50) = eax; //mov
loc_4952A6:
	eax = to32i(dword_4DCE50); //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx) = 0xFFFFFFFD; //mov
	edx = to32i(eax+0x10); //mov
	to32i(edx+4) = 8; //mov
	add(to32i(eax+0x10), (int32_t)8);
	edx = to32i(eax+0x10); //mov
	to32i(eax+0xC) = edx; //mov
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_4952A6;
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_4952E4:
	eax = to32i(dword_4DCE4C); //mov
	to32i(eax+0x20) = 7; //mov
	goto loc_493FA6;
loc_4952F5:
	eax = to32i(dword_4DCE50); //mov
	eax = to32i(eax+0x70); //mov
	to32i(dword_4DCE50) = eax; //mov
	cmp(ebx, eax);
	if (jnz())
		goto loc_4951FD;
	goto loc_49528C;
}
Fn(void) Game::_sub_49530C()
{
	push32(edx);
	edx = eax; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0x14));
	if (jz())
		goto loc_495352;
loc_495322:
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0x10));
	if (jz())
		goto loc_495352;
	eax = to32i(edx+0x18); //mov
	cmp(to32i(eax), (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_49535F;
	eax = to32i(edx+0x18); //mov
	eax = to32i(eax+4); //mov
	sub(eax, (int32_t)8);
	sub(to32i(edx+0xBC), eax);
	eax = to32i(edx+0x18); //mov
	eax = to32i(eax+4); //mov
	add(to32i(edx+0x18), eax);
loc_49534A:
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0x14));
	if (jnz())
		goto loc_495322;
loc_495352:
	eax = to32i(edx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
	return;
loc_49535F:
	eax = to32i(edx+0x18); //mov
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_495352;
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0x14));
	if (jnz())
		goto loc_495375;
	eax = to32i(edx+4); //mov
	to32i(edx+0x14) = eax; //mov
loc_495375:
	eax = to32i(edx+4); //mov
	to32i(edx+0x18) = eax; //mov
	goto loc_49534A;
}
Fn(void) Game::_sub_495380()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0xC));
	if (jb())
		goto loc_4953A0;
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0xC));
	if (jnz())
		goto loc_4953A8;
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0x14));
	if (jnz())
		goto loc_4953A8;
loc_4953A0:
	eax = to32i(edx+8); //mov
	sub(eax, to32i(edx+0xC));
	pop32(edx);
	return;
loc_4953A8:
	eax = to32i(edx+0x18); //mov
	sub(eax, to32i(edx+0xC));
	pop32(edx);
}
Fn(void) Game::_sub_4953C0()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_49530C(); esp += 4; //call
	eax = to32i(edx+0x18); //mov
	cmp(eax, to32i(edx+0xC));
	if (ja())
		goto loc_4953D8;
	eax = to32i(edx+0x18); //mov
	sub(eax, to32i(edx+4));
	pop32(edx);
	return;
loc_4953D8:
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_4953DC()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49541D;
	eax = to32i(eax+0x78); //mov
	test(eax, eax);
	if (jz())
		goto loc_4953FF;
	eax = to32i(eax+0x94); //mov
	cmp(eax, (int32_t)0xD);
	if (jnb())
		goto loc_495422;
	cmp(eax, (int32_t)0xB);
	if (jz())
		goto loc_495430;
loc_4953FF:
	cmp(to32i(ecx+0x20), (int32_t)2);
	if (jz())
		goto loc_495430;
	cmp(to32i(ecx+0x20), (int32_t)1);
	if (jz())
		goto loc_495430;
	cmp(to32i(ecx+0x20), (int32_t)0xE);
	if (jz())
		goto loc_495437;
	eax = to32i(ecx+0x10); //mov
	ebp = to32i(ecx+0x14); //mov
	cmp(eax, ebp);
	if (jnz())
		goto loc_495441;
	xor_(eax, ebp);
loc_49541D:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_495422:
	if (jbe())
		goto loc_495430;
	cmp(eax, (int32_t)0x14);
	if (jb())
		goto loc_4953FF;
	if (jbe())
		goto loc_495430;
	cmp(eax, (int32_t)0x17);
	if (jnz())
		goto loc_4953FF;
loc_495430:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_495437:
	eax = 0xFFFFFFFE; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_495441:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(ecx+0x14); //mov
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_495462;
	eax = to32i(ecx+4); //mov
	to32i(ecx+0x14) = eax; //mov
	eax = to32i(ecx+0x10); //mov
	cmp(eax, to32i(ecx+0x14));
	if (jz())
		goto loc_4954C8;
loc_495462:
	eax = to32i(ecx+0x14); //mov
	eax = to32i(eax+4); //mov
	edx = to32i(ecx+0x10); //mov
	cmp(edx, to32i(ecx+0x14));
	if (jnb())
		goto loc_4954DA;
	ebx = to32i(ecx+8); //mov
	sub(ebx, to32i(ecx+0x14));
	cmp(ebx, eax);
	if (jl())
		goto loc_4954C8;
loc_49547A:
	ebx = to32i(ecx+0x14); //mov
	edx = (int32_t)(intptr_t)(eax-8); //lea
	sub(to32i(ecx+0xB8), edx);
	add(to32i(ecx+0xBC), edx);
	add(to32i(ecx+0x14), eax);
	cmp(to32i(ebx), (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_4954B6;
	cmp(ebx, to32i(ecx+0x18));
	if (jnz())
		goto loc_4954F6;
	eax = to32i(ecx+0x14); //mov
	to32i(ecx+0x18) = eax; //mov
loc_49549F:
	eax = to32i(dword_4DCE4C); //mov
	add(eax, (int32_t)0x8C);
	ebx = 0xFFFFFFFF; //mov
	edx = to32i(eax+0x1C); //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
loc_4954B6:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4954C8:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4954DA:
	ebx = to32i(ecx+0x10); //mov
	sub(ebx, to32i(ecx+0x14));
	cmp(ebx, eax);
	if (jge())
		goto loc_49547A;
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4954F6:
	to32i(ebx) = 0xFFFFFFFE; //mov
	goto loc_49549F;
}
Fn(void) Game::_sub_495500()
{
	add(eax, (int32_t)0x8C);
	to32i(edx) = 0xFFFFFFFE; //mov
	edx = to32i(eax+0x1C); //mov
	_sub_489E20(); return; //jmp
}
Fn(void) Game::_sub_495514()
{
	test(eax, eax);
	if (jz())
		goto locret_49551E;
	eax = to32i(eax+0xB8); //mov
locret_49551E:
	return;
}
Fn(void) Game::_sub_49552C()
{
	push32(edx);
	edx = to32i(dword_4DCE4C); //mov
	test(edx, edx);
	if (jz())
		goto loc_495549;
	eax = edx; //mov
	cmp(to32i(edx+0x20), (int32_t)7);
	if (jnz())
		goto loc_495545;
	cmp(to32i(edx+0x78), (int32_t)0);
	if (jz())
		goto loc_495549;
loc_495545:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_495549:
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_495584()
{
	eax = to32i(eax+0xB4); //mov
}
Fn(void) Game::_sub_49558C()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	xor_(edx, edx);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4955A0;
	test(eax, eax);
	if (jz())
		goto loc_4955A9;
loc_49559C:
	eax = edx; //mov
	pop32(ecx);
	return;
loc_4955A0:
	edx = 1; //mov
	eax = edx; //mov
	pop32(ecx);
	return;
loc_4955A9:
	esp -= 4; _sub_49552C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49559C;
	eax = ecx; //mov
	esp -= 4; _sub_495514(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49559C;
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4955F8()
{
	push32(ecx);
	ecx = edx; //mov
	edx = to32i(dword_4DCE4C); //mov
	test(edx, edx);
	if (jz())
		goto loc_49562F;
	push32(ebx);
	to32i(edx+0x74) = eax; //mov
	dec(ecx);
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_495624;
loc_495610:
	ebx = (int32_t)(intptr_t)(eax+0x9C); //lea
	inc(edx);
	to32i(eax+0x98) = ebx; //mov
	eax = ebx; //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_495610;
loc_495624:
	to32i(eax+0x98) = 0; //mov
	pop32(ebx);
loc_49562F:
	pop32(ecx);
}
Fn(void) Game::_sub_495634()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(dword_4DCE4C); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_495645;
	pop32(edx);
	pop32(ecx);
	return;
loc_495645:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	ecx = to32i(eax+0x74); //mov
	to32i(edx+0x98) = ecx; //mov
	to32i(eax+0x74) = edx; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_495670()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(dword_4DCE4C); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_495683;
loc_49567E:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	return;
loc_495683:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0x74); //mov
	test(edx, edx);
	if (jz())
		goto loc_4956A7;
loc_49569A:
	test(eax, eax);
	if (jz())
		goto loc_4956A7;
	eax = to32i(eax+0x98); //mov
	dec(edx);
	if (jnz())
		goto loc_49569A;
loc_4956A7:
	eax = to32i(dword_4DCE4C); //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_49567E;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_495714()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(dword_4DCE4C); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_495727;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	return;
loc_495727:
	eax = to32i(ecx+0xAC); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DCE4C); //mov
	cmp(to32i(eax+0x74), (int32_t)0);
	if (jnz())
		goto loc_495741;
	test(edx, edx);
	if (jz())
		goto loc_49576F;
loc_495741:
	eax = to32i(dword_4DCE4C); //mov
	edx = to32i(eax+0x74); //mov
	ecx = to32i(eax+0x74); //mov
	ecx = to32i(ecx+0x98); //mov
	to32i(eax+0x74) = ecx; //mov
	to32i(edx+0x98) = 0; //mov
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_49576F:
	eax = to32i(eax+0xAC); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_495780()
{
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4957B0;
	cmp(to32i(dword_4DDA90), (int32_t)0);
	if (jnz())
		goto loc_4957BA;
	test(esi, esi);
	if (jle())
		goto loc_4957C4;
	dl = to8i(byte_4DCED9); //mov
	test(dl, dl);
	if (jz())
		goto loc_4957CE;
	eax = 0xFFFFFFFF; //mov
loc_4957AB:
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4957B0:
	eax = 0xFFFFFFF6; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4957BA:
	eax = 0xFFFFFFF0; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4957C4:
	eax = 0xFFFFFFF8; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4957CE:
	esp -= 4; _sub_488B30(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4957AB;
	esp -= 4; _sub_49664C(); esp += 4; //call
	to8i(byte_4DCEDC) = dl; //mov
	al = to8i(esp+0xC); //mov
	to8i(byte_4DCEDA) = al; //mov
	to32i(dword_4DCE58) = edi; //mov
	to8i(byte_4DCED8) = dl; //mov
	to8i(byte_4DCEE5) = dl; //mov
	to8i(byte_4DCEE6) = dl; //mov
	to32i(dword_4DCEF0) = esi; //mov
	to32i(dword_4DCE68) = ecx; //mov
	to8i(byte_4DCED9) = 1; //mov
	to8i(byte_4DCEE7) = 0xFF; //mov
	ecx = to32i(dword_59C608); //mov
	add(ecx, ebx);
	xor_(ebx, ebx);
loc_495827:
	eax = ebx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_496314(); esp += 4; //call
	cmp(esi, to32i(dword_4DCEEC));
	if (jle())
		goto loc_495847;
	cmp(ecx, to32i(dword_59C608));
	if (ja())
		goto loc_495827;
loc_495847:
	eax = to32i(dword_4DCEEC); //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_495854()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_49586C;
	cmp(to8i(byte_4DCED9), (int8_t)2);
	if (jnz())
		goto loc_495872;
	eax = 0xFFFFFFFF; //mov
	return;
loc_49586C:
	eax = 0xFFFFFFF6; //mov
	return;
loc_495872:
	push32(ecx);
	to8i(byte_4DCEDB) = al; //mov
	to8i(byte_4DCEDE) = dl; //mov
	cl = 0xFF; //mov
	to8i(byte_4DCEDF) = cl; //mov
	to8i(byte_4DCEE0) = cl; //mov
	to8i(byte_4DCEE1) = cl; //mov
	esp -= 4; _sub_496700(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4958A0()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4958B8;
	cmp(to8i(byte_4DCED9), (int8_t)0);
	if (jnz())
		goto loc_4958BE;
	eax = 0xFFFFFFF2; //mov
	return;
loc_4958B8:
	eax = 0xFFFFFFF6; //mov
	return;
loc_4958BE:
	eax = to32i(dword_4DCE70); //mov
}
Fn(void) Game::_sub_4958D0()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4958EE;
	cmp(to32i(dword_4DDA90), (int32_t)0);
	if (jz())
		goto loc_4958F6;
	eax = 0xFFFFFFF0; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_4958EE:
	eax = 0xFFFFFFF6; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_4958F6:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	esp -= 4; _sub_488B30(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_495983;
	push32(esi);
	xor_(al, al);
	to8i(byte_4DCF5C) = al; //mov
	to8i(byte_4DCEDC) = 1; //mov
	xor_(esi, esi);
	to32i(dword_4DCE68) = esi; //mov
	al = to8i(edx+8); //mov
	to8i(byte_4DCEDE) = al; //mov
	al = to8i(edx+7); //mov
	to8i(byte_4DCEDF) = al; //mov
	al = to8i(edx+9); //mov
	to8i(byte_4DCEE0) = al; //mov
	al = to8i(edx+0xA); //mov
	to8i(byte_4DCEE1) = al; //mov
	to32i(dword_4DCE58) = ebx; //mov
	xor_(dl, dl);
	to8i(byte_4DCED8) = dl; //mov
	xor_(dh, dh);
	to8i(byte_4DCEE5) = dh; //mov
	xor_(bl, bl);
	to8i(byte_4DCEE6) = bl; //mov
	to32i(dword_4DCEF0) = 0xF; //mov
	to8i(byte_4DCEE7) = 0xFF; //mov
	xor_(al, al);
	to8i(byte_4DCEE8) = al; //mov
	esp -= 4; _sub_49664C(); esp += 4; //call
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_495983:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = ecx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_495990()
{
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_4A5060(); esp += 4; //call
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4959B1;
	cmp(to32i(dword_4DDA90), (int32_t)0);
	if (jnz())
		goto loc_4959B8;
	eax = 0xFFFFFFF2; //mov
	pop32(edx);
	return;
loc_4959B1:
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_4959B8:
	esp -= 4; _sub_495B2C(); esp += 4; //call
	cmp(to8i(byte_4DCEE4), (int8_t)0);
	if (jz())
		goto loc_4959D8;
	eax = (int32_t)(intptr_t)sub_496314; //mov
	xor_(dh, dh);
	esp -= 4; _sub_483E64(); esp += 4; //call
	to8i(byte_4DCEE4) = dh; //mov
loc_4959D8:
	push32(ecx);
	xor_(ecx, ecx);
	to32i(dword_4DDA90) = ecx; //mov
	esp -= 4; _sub_488B30(); esp += 4; //call
	xor_(eax, eax);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4959EC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esi = edx; //mov
	ah = to8i(byte_4DDA74); //mov
	xor_(edi, edi);
	test(ah, ah);
	if (jnz())
		goto loc_495A0A;
	edi = 0xFFFFFFF6; //mov
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_495A0A:
	push32(ebx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	cmp(to8i(byte_4DCED9), (int8_t)0);
	if (jnz())
		goto loc_495A80;
	test(esi, esi);
	if (jnz())
		goto loc_495A66;
	eax = to32i(dword_4DCE58); //mov
	edx = ecx; //mov
	esp -= 4; _sub_493C0C(); esp += 4; //call
loc_495A29:
	dh = 1; //mov
	esp -= 4; _sub_49664C(); esp += 4; //call
	to8i(byte_4DCED9) = dh; //mov
loc_495A36:
	al = to8i(byte_4DCEE5); //mov
	inc(to8i(byte_4DCEE5));
	ebx = 0x80; //mov
	eax = (int32_t)(intptr_t)byte_4DCF5C; //mov
	edx = ecx; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	xor_(bh, bh);
	to8i(byte_4DCFDB) = bh; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_495A66:
	eax = to32i(dword_4DCE58); //mov
	edx = ecx; //mov
	esp -= 4; _sub_493C8C(); esp += 4; //call
	eax = to32i(dword_4DCE58); //mov
	edx = esi; //mov
	esp -= 4; _sub_493CEC(); esp += 4; //call
	goto loc_495A29;
loc_495A80:
	edx = to8i(byte_4DCEE5); //movsx
	eax = to8i(byte_4DCEE6); //movsx
	add(eax, edx);
	cmp(eax, (int32_t)0x13);
	if (jl())
		goto loc_495AA6;
	edi = 0xFFFFFFF3; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_495AA6:
	test(esi, esi);
	if (jnz())
		goto loc_495ADA;
	eax = 1; //mov
	esp -= 4; _sub_495670(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_495AC9;
	edi = 0xFFFFFFF3; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_495AC9:
	eax = to32i(dword_4DCE58); //mov
	edx = ecx; //mov
	esp -= 4; _sub_493BDC(); esp += 4; //call
	goto loc_495A36;
loc_495ADA:
	eax = 2; //mov
	esp -= 4; _sub_495670(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_495AF9;
	edi = 0xFFFFFFF3; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_495AF9:
	ebx = 0x80; //mov
	eax = (int32_t)(intptr_t)byte_4DCF5C; //mov
	edx = ecx; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_495B1A;
	eax = to32i(dword_4DCE58); //mov
	edx = ecx; //mov
	esp -= 4; _sub_493C5C(); esp += 4; //call
loc_495B1A:
	eax = to32i(dword_4DCE58); //mov
	edx = esi; //mov
	esp -= 4; _sub_493CEC(); esp += 4; //call
	goto loc_495A36;
}
Fn(void) Game::_sub_495B2C()
{
	push32(edx);
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_495B3D;
	eax = 0xFFFFFFF6; //mov
	pop32(edx);
	return;
loc_495B3D:
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_489840(); esp += 4; //call
	edx = to32i(dword_59C608); //mov
	add(edx, (int32_t)0xC8);
loc_495B53:
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_495B77;
	cmp(edx, to32i(dword_59C608));
	if (jb())
		goto loc_495B70;
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_495B53;
loc_495B70:
	eax = 0xFFFFFFEF; //mov
	pop32(edx);
	return;
loc_495B77:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	dl = 0xFF; //mov
	esp -= 4; _sub_495DEC(); esp += 4; //call
	to8i(byte_4DCEE7) = dl; //mov
	xor_(dh, dh);
	to8i(byte_4DCEE8) = dh; //mov
	to8i(byte_4DCEE5) = dh; //mov
	to8i(byte_4DCEE6) = dh; //mov
	to8i(byte_4DCED9) = dh; //mov
	to8i(byte_4DCF5C) = dh; //mov
	to8i(byte_4DCED8) = dh; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4A5060(); esp += 4; //call
	cmp(to8i(byte_4DCEE4), (int8_t)0);
	if (jz())
		goto loc_495BCF;
	eax = (int32_t)(intptr_t)sub_496314; //mov
	esp -= 4; _sub_483E64(); esp += 4; //call
	to8i(byte_4DCEE4) = dh; //mov
loc_495BCF:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_495BD8()
{
	push32(edx);
	ah = to8i(byte_4DDA74); //mov
	edx = 0xFFFFFFF2; //mov
	test(ah, ah);
	if (jnz())
		goto loc_495BF1;
	edx = 0xFFFFFFF6; //mov
	eax = edx; //mov
	pop32(edx);
	return;
loc_495BF1:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	cmp(to8i(byte_4DCED9), (int8_t)0);
	if (jz())
		goto loc_495C1D;
	xor_(eax, eax);
	al = to8i(byte_4DCEDB); //mov
	esp -= 4; _sub_488B30(); esp += 4; //call
	edx = to32i(dword_4DCE74); //mov
	add(edx, eax);
	cmp(to8i(byte_4DCEE9), (int8_t)2);
	if (jnz())
		goto loc_495C1D;
	dec(edx);
loc_495C1D:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_495C28()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
		goto loc_495C37;
	eax = 0xFFFFFFF6; //mov
	return;
loc_495C37:
	push32(edx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	cmp(to8i(byte_4DCED9), (int8_t)0);
	if (jnz())
		goto loc_495C54;
loc_495C46:
	edx = 0xFFFFFFF2; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	return;
loc_495C54:
	cmp(to8i(byte_4DCED9), (int8_t)1);
	if (jz())
		goto loc_495C46;
	cmp(to8i(byte_4DCEDB), (int8_t)0);
	if (jnz())
		goto loc_495C74;
	edx = 0xFFFFFFF9; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	return;
loc_495C74:
	push32(ecx);
	esp -= 4; _sub_495BD8(); esp += 4; //call
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	add(edx, eax);
	cl = to8i(byte_4DCEDB); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = eax; //mov
	pop32(ecx);
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_495CAC()
{
	push32(edx);
	edx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_495CBC;
	test(edx, edx);
	if (jg())
		goto loc_495CBE;
loc_495CBC:
	pop32(edx);
	return;
loc_495CBE:
	esp -= 4; _sub_495C28(); esp += 4; //call
	cmp(eax, edx);
	if (jge())
		goto loc_495D17;
	esp -= 4; _sub_49552C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_495D17;
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495584(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_495CFE;
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495514(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_495CFE;
	goto loc_495D1C;
loc_495CFE:
	to32i(dword_4DCF48) = edx; //mov
	cmp(to32i(dword_4DCFE0), (int32_t)0);
	if (jz())
		goto loc_495CBC;
	eax = edx; //mov
	call(to32i(dword_4DCFE0));
	pop32(edx);
	return;
loc_495D17:
	eax = 1; //mov
loc_495D1C:
	esp -= 4; _sub_4A50F8(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_495D24()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ah = to8i(byte_4DDA74); //mov
	ecx = 0xFFFFFFF1; //mov
	test(ah, ah);
	if (jnz())
		goto loc_495D41;
	ecx = 0xFFFFFFF6; //mov
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495D41:
	push32(ebx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	ebx = to32i(edx); //mov
	cmp(ebx, (int32_t)0x6C444353);
	if (jnz())
		goto loc_495D65;
	eax = edx; //mov
	esp -= 4; _sub_495E6C(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495D65:
	cmp(ebx, (int32_t)0x6C484353);
	if (jz())
		goto loc_495D99;
	cmp(ebx, (int32_t)0x6C434353);
	if (jz())
		goto loc_495DAD;
	cmp(ebx, (int32_t)0x6C4C4353);
	if (jz())
		goto loc_495DC1;
	cmp(ebx, (int32_t)0x6C454353);
	if (jnz())
		goto loc_495DD5;
	eax = edx; //mov
	esp -= 4; _sub_49605C(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495D99:
	eax = edx; //mov
	esp -= 4; _sub_495EC0(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495DAD:
	eax = edx; //mov
	esp -= 4; _sub_495FC8(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495DC1:
	eax = edx; //mov
	esp -= 4; _sub_496034(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_495DD5:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(ebx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_495DEC()
{
	push32(edx);
	push32(esi);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	cmp(to32i(dword_4DCE5C), (int32_t)0);
	if (jz())
		goto loc_495E50;
loc_495DFC:
	eax = to32i(dword_4DCE5C); //mov
	cmp(eax, to32i(dword_4DCE60));
	if (jz())
		goto loc_495E27;
	edx = to32i(dword_4DCE5C); //mov
	eax = to32i(dword_4DCE5C); //mov
	eax = to32i(eax); //mov
	to32i(dword_4DCE5C) = eax; //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	goto loc_495DFC;
loc_495E27:
	edx = to32i(dword_4DCE5C); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	cmp(to32i(dword_4DCE64), (int32_t)0);
	if (jz())
		goto loc_495E50;
	edx = to32i(dword_4DCE64); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
loc_495E50:
	xor_(esi, esi);
	to32i(dword_4DCE5C) = esi; //mov
	to32i(dword_4DCE60) = esi; //mov
	to32i(dword_4DCE64) = esi; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_495E6C()
{
	push32(edx);
	edx = to32i(dword_4DCE74); //mov
	inc(to32i(dword_4DCE74));
	edx = to32i(eax+4); //mov
	add(to32i(dword_4DCE78), edx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_495EA1;
loc_495E87:
	cmp(to32i(dword_4DCE5C), (int32_t)0);
	if (jnz())
		goto loc_495EA9;
	to32i(dword_4DCE5C) = eax; //mov
	to32i(dword_4DCE60) = eax; //mov
	eax = 3; //mov
	pop32(edx);
	return;
loc_495EA1:
	to32i(eax) = 0; //mov
	goto loc_495E87;
loc_495EA9:
	edx = to32i(dword_4DCE60); //mov
	to32i(edx) = eax; //mov
	to32i(dword_4DCE60) = eax; //mov
	eax = 3; //mov
	pop32(edx);
}
Fn(void) Game::_sub_495EC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ebp = eax; //mov
	ebx = 8; //mov
	cmp(to8i(byte_4DCEE7), (int8_t)0);
	if (jle())
		goto loc_495EE4;
	al = to8i(byte_4DCEE7); //mov
	dec(to8i(byte_4DCEE7));
loc_495EE4:
	eax = to32i(ebp+4); //mov
	sub(eax, ebx);
	to32i(esp+0xC) = eax; //mov
	add(ebx, ebp);
	cmp(to8i(byte_4DCEDC), (int8_t)0);
	if (jnz())
		goto loc_495F49;
loc_495EF8:
	ecx = to32i(esp+0xC); //mov
	edi = (int32_t)(intptr_t)dword_4DCE7C; //mov
	esi = ebx; //mov
	edx = 0xFFFFFFFF; //mov
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
	ebx = esp; //mov
	to32i(esp) = edx; //mov
	eax = edi; //mov
	xor_(edx, edx);
	ch = 1; //mov
	esp -= 4; _sub_4A4C20(); esp += 4; //call
	to8i(byte_4DCED8) = ch; //mov
	eax = to32i(dword_4DCE58); //mov
	edx = ebp; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_495F49:
	al = to8i(byte_4DCEE6); //mov
	inc(to8i(byte_4DCEE6));
	al = to8i(byte_4DCEE5); //mov
	dec(to8i(byte_4DCEE5));
	edi = (int32_t)(intptr_t)dword_4DCF4C; //mov
	esi = (int32_t)(intptr_t)dword_4DCF54; //mov
	movsd();
	movsd();
	edx = (int32_t)(intptr_t)dword_4DCF54; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4AD540(); esp += 4; //call
	cmp(to8i(byte_4DCEE8), (int8_t)0);
	if (jz())
		goto loc_495FBC;
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)dword_4DCF4C; //mov
	esi = (int32_t)(intptr_t)dword_4DCF54; //mov
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_495F9A;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_495F9A:
	test(eax, eax);
	if (jz())
		goto loc_495FBC;
	cmp(to8i(byte_4DCED9), (int8_t)2);
	if (jz())
		goto loc_495FB5;
	cmp(to8i(byte_4DCED9), (int8_t)3);
	if (jz())
		goto loc_495FB5;
	esp -= 4; _sub_496700(); esp += 4; //call
loc_495FB5:
	to8i(byte_4DCED9) = 3; //mov
loc_495FBC:
	to8i(byte_4DCEE8) = 1; //mov
	goto loc_495EF8;
}
Fn(void) Game::_sub_495FC8()
{
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)(eax+8); //lea
	cl = to8i(byte_4DCEEA); //mov
	cmp(cl, to8i(byte_4DCEEB));
	if (jnz())
		goto loc_495FEC;
	ecx = to8i(byte_4DCEEA); //movsx
	cmp(to32i(dword_4DCEF8+ecx*4), (int32_t)0);
	if (jle())
		goto loc_495FF8;
loc_495FEC:
	cl = to8i(byte_4DCEEB); //mov
	inc(to8i(byte_4DCEEB));
loc_495FF8:
	cmp(to8i(byte_4DCEEB), (int8_t)0x14);
	if (jl())
		goto loc_49600B;
	push32(ebx);
	xor_(bl, bl);
	to8i(byte_4DCEEB) = bl; //mov
	pop32(ebx);
loc_49600B:
	ecx = to8i(byte_4DCEEB); //movsx
	edx = to32i(edx); //mov
	to32i(dword_4DCEF8+ecx*4) = edx; //mov
	ecx = to32i(dword_4DCE58); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	eax = 2; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_496034()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	edx = to32i(edx); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_493CB4(); esp += 4; //call
	eax = to32i(dword_4DCE58); //mov
	edx = ecx; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	eax = 4; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_49605C()
{
	push32(ecx);
	push32(edx);
	inc(to32i(dword_4DCE54));
	cmp(to8i(byte_4DCEDA), (int8_t)0);
	if (jnz())
		goto loc_496079;
	ecx = to32i(dword_4DCE60); //mov
	to32i(ecx) = 0xFFFFFFFF; //mov
loc_496079:
	ecx = to32i(dword_4DCE58); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	eax = 5; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_496090()
{
	eax = to32i(dword_4DCE54); //mov
}
Fn(void) Game::_sub_496098()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	ecx = edx; //mov
	xor_(esi, esi);
	cmp(to8i(byte_4DCEE9), (int8_t)2);
	if (jnz())
		goto loc_4961BE;
loc_4960B0:
	eax = to32i(dword_4DCE5C); //mov
	cmp(eax, to32i(dword_4DCE60));
	if (jz())
		goto loc_496143;
	edi = to32i(dword_4DCE5C); //mov
	eax = to32i(dword_4DCE5C); //mov
	eax = to32i(eax); //mov
	to32i(dword_4DCE5C) = eax; //mov
	ebp = to32i(edi+4); //mov
	cmp(to32i(dword_4DCE64), (int32_t)0);
	if (jz())
		goto loc_4960EF;
	edx = to32i(dword_4DCE64); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
loc_4960EF:
	to32i(dword_4DCE64) = edi; //mov
	eax = to32i(dword_4DCE74); //mov
	dec(to32i(dword_4DCE74));
	sub(to32i(dword_4DCE78), ebp);
	eax = to32i(dword_4DCE70); //mov
	inc(to32i(dword_4DCE70));
	eax = to8i(byte_4DCEEA); //movsx
	edx = to32i(dword_4DCEF8+eax*4); //mov
	dec(to32i(dword_4DCEF8+eax*4));
	eax = to8i(byte_4DCEEA); //movsx
	cmp(to32i(dword_4DCEF8+eax*4), (int32_t)0);
	if (jle())
		goto loc_4961D0;
loc_49613B:
	xor_(ah, ah);
	to8i(byte_4DCEE9) = ah; //mov
loc_496143:
	eax = to32i(dword_4DCE5C); //mov
	cmp(eax, to32i(dword_4DCE60));
	if (jnz())
		goto loc_496234;
	eax = to32i(dword_4DCE5C); //mov
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_496210;
	eax = to32i(dword_4DCE5C); //mov
	add(eax, (int32_t)0xC);
	to32i(ebx) = eax; //mov
	eax = to32i(dword_4DCE5C); //mov
	eax = to32i(eax+8); //mov
	to32i(ecx) = eax; //mov
	cmp(to8i(byte_4DCEE9), (int8_t)1);
	if (jnz())
		goto loc_496198;
	edi = to8i(byte_4DCEDD); //movsx
	edx = to32i(ecx); //mov
	eax = to32i(ebx); //mov
	ebx = edi; //mov
	esp -= 4; _sub_4896E0(); esp += 4; //call
	to8i(byte_4DCEE9) = 2; //mov
loc_496198:
	cmp(to8i(byte_4DCEE9), (int8_t)0);
	if (jnz())
		goto loc_4961A8;
	to8i(byte_4DCEE9) = 1; //mov
loc_4961A8:
	cmp(to8i(byte_4DCEE9), (int8_t)2);
	if (jnz())
		goto loc_4961B6;
	esi = 1; //mov
loc_4961B6:
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4961BE:
	cmp(to8i(byte_4DCEE9), (int8_t)1);
	if (jz())
		goto loc_4960B0;
	goto loc_496143;
loc_4961D0:
	al = to8i(byte_4DCEE6); //mov
	dec(to8i(byte_4DCEE6));
	al = to8i(byte_4DCEEA); //mov
	cmp(al, to8i(byte_4DCEEB));
	if (jz())
		goto loc_49613B;
	al = to8i(byte_4DCEEA); //mov
	inc(to8i(byte_4DCEEA));
	cmp(to8i(byte_4DCEEA), (int8_t)0x14);
	if (jl())
		goto loc_49613B;
	xor_(al, al);
	to8i(byte_4DCEEA) = al; //mov
	goto loc_49613B;
loc_496210:
	edx = to32i(dword_4DCE5C); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
	to32i(ebx) = 0; //mov
	to32i(ecx) = 0; //mov
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_496234:
	eax = to32i(dword_4DCE5C); //mov
	add(eax, (int32_t)0xC);
	to32i(ebx) = eax; //mov
	ebx = to32i(dword_4DCE5C); //mov
	eax = (int32_t)(intptr_t)(ebx+8); //lea
	eax = to32i(eax); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(dword_4DCE5C); //mov
	eax = to32i(eax); //mov
	to32i(dword_4DCE5C) = eax; //mov
	ecx = to32i(ebx+4); //mov
	cmp(to32i(dword_4DCE64), (int32_t)0);
	if (jz())
		goto loc_496273;
	edx = to32i(dword_4DCE64); //mov
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495500(); esp += 4; //call
loc_496273:
	to32i(dword_4DCE64) = ebx; //mov
	eax = to32i(dword_4DCE74); //mov
	dec(to32i(dword_4DCE74));
	sub(to32i(dword_4DCE78), ecx);
	eax = to32i(dword_4DCE70); //mov
	inc(to32i(dword_4DCE70));
	eax = to8i(byte_4DCEEA); //movsx
	edx = to32i(dword_4DCEF8+eax*4); //mov
	dec(to32i(dword_4DCEF8+eax*4));
	eax = to8i(byte_4DCEEA); //movsx
	cmp(to32i(dword_4DCEF8+eax*4), (int32_t)0);
	if (jg())
		goto loc_4961B6;
	al = to8i(byte_4DCEE6); //mov
	dec(to8i(byte_4DCEE6));
	al = to8i(byte_4DCEEA); //mov
	cmp(al, to8i(byte_4DCEEB));
	if (jz())
		goto loc_4961B6;
	al = to8i(byte_4DCEEA); //mov
	inc(to8i(byte_4DCEEA));
	cmp(to8i(byte_4DCEEA), (int8_t)0x14);
	if (jl())
		goto loc_4961B6;
	xor_(cl, cl);
	to8i(byte_4DCEEA) = cl; //mov
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_496314()
{
	static const void *const off_496304[] = {
		&&loc_49633E,
		&&loc_496349,
		&&loc_4964A0,
		&&loc_4965FA,
	};
	push32(ebp);
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	al = to8i(byte_4DCED9); //mov
	cmp(al, (int8_t)3);
	if (ja())
		goto loc_49633E;
	and_(eax, (int32_t)0xFF);
	goto *off_496304[eax];
loc_49633E:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_496349:
	xor_(ecx, ecx);
loc_49634B:
	cmp(cl, to8i(byte_4DCEDC));
	if (jnz())
		goto loc_496360;
	eax = to32i(dword_4DCEEC); //mov
	cmp(eax, to32i(dword_4DCEF0));
	if (jge())
		goto loc_49633E;
loc_496360:
	cmp(cl, to8i(byte_4DCEE7));
	if (jnz())
		goto loc_49638E;
	cmp(to32i(dword_4DCEF4), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_49633E;
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495514(); esp += 4; //call
	cmp(eax, to32i(dword_4DCEF4));
	if (jl())
		goto loc_496416;
loc_496387:
	to8i(byte_4DCEE7) = 0xFF; //mov
loc_49638E:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_4953DC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_496433;
loc_4963A2:
	eax = edx; //mov
	esp -= 4; _sub_495D24(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_4963BC;
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_49646E;
	inc(to32i(dword_4DCEEC));
loc_4963BC:
	test(edx, edx);
	if (jg())
		goto loc_49634B;
	cmp(edx, (int32_t)0xFFFFFFF6);
	if (jle())
		goto loc_49634B;
	cmp(to8i(byte_4DCEDC), (int8_t)0);
	if (jz())
		goto loc_49633E;
	eax = to32i(dword_4DCEEC); //mov
	cmp(eax, to32i(dword_4DCEF0));
	if (jge())
		goto loc_496406;
	cmp(to32i(dword_4DCEEC), (int32_t)0);
	if (jnz())
		goto loc_496489;
loc_4963EC:
	cmp(to32i(dword_4DCEEC), (int32_t)0);
	if (jz())
		goto loc_49633E;
	esp -= 4; _sub_49552C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49633E;
loc_496406:
	esp -= 4; _sub_496700(); esp += 4; //call
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_496416:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495584(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_496387;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_496433:
	cmp(eax, (int32_t)0xFFFFFFF6);
	if (jle())
		goto loc_4963A2;
	test(eax, eax);
	if (jz())
		goto loc_4963BC;
	cmp(to32i(dword_4DCEEC), (int32_t)0);
	if (jz())
		goto loc_49633E;
	cmp(to8i(byte_4DCEDC), (int8_t)0);
	if (jz())
		goto loc_49633E;
	esp -= 4; _sub_496700(); esp += 4; //call
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_49646E:
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4963BC;
	cmp(to8i(byte_4DCED9), (int8_t)1);
	if (jnz())
		goto loc_49633E;
	goto loc_4963BC;
loc_496489:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495584(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_496406;
	goto loc_4963EC;
loc_4964A0:
	xor_(ecx, ecx);
loc_4964A2:
	cmp(cl, to8i(byte_4DCEE7));
	if (jnz())
		goto loc_4964D0;
	cmp(to32i(dword_4DCEF4), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_49633E;
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495514(); esp += 4; //call
	cmp(eax, to32i(dword_4DCEF4));
	if (jl())
		goto loc_496538;
loc_4964C9:
	to8i(byte_4DCEE7) = 0xFF; //mov
loc_4964D0:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_4953DC(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_496551;
loc_4964E0:
	eax = edx; //mov
	esp -= 4; _sub_495D24(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_496556;
loc_4964EC:
	cmp(to32i(dword_4DCF48), (int32_t)0);
	if (jz())
		goto loc_49633E;
	esp -= 4; _sub_495C28(); esp += 4; //call
	cmp(eax, to32i(dword_4DCF48));
	if (jl())
		goto loc_496569;
	xor_(ebx, ebx);
	to32i(dword_4DCF48) = ebx; //mov
	eax = 1; //mov
	esp -= 4; _sub_4A50F8(); esp += 4; //call
	cmp(to32i(dword_4DCFE0), (int32_t)0);
	if (jz())
		goto loc_49633E;
	xor_(eax, eax);
	call(to32i(dword_4DCFE0));
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_496538:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495584(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4964C9;
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_496551:
	cmp(eax, (int32_t)0xFFFFFFF6);
	if (jle())
		goto loc_4964E0;
loc_496556:
	test(edx, edx);
	if (jg())
		goto loc_4964A2;
	cmp(edx, (int32_t)0xFFFFFFF6);
	if (jle())
		goto loc_4964A2;
	goto loc_4964EC;
loc_496569:
	eax = to32i(dword_4DCE58); //mov
	esp -= 4; _sub_495584(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4965BB;
	xor_(eax, eax);
	al = to8i(byte_4DCEDB); //mov
	esp -= 4; _sub_488B30(); esp += 4; //call
	cmp(eax, (int32_t)1);
	if (jg())
		goto loc_49633E;
	xor_(edx, edx);
	to32i(dword_4DCF48) = edx; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4A50F8(); esp += 4; //call
	cmp(to32i(dword_4DCFE0), (int32_t)0);
	if (jz())
		goto loc_49633E;
	xor_(eax, eax);
	call(to32i(dword_4DCFE0));
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_4965BB:
	esp -= 4; _sub_49552C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49633E;
	xor_(ebp, ebp);
	to32i(dword_4DCF48) = ebp; //mov
	eax = 1; //mov
	esp -= 4; _sub_4A50F8(); esp += 4; //call
	cmp(to32i(dword_4DCFE0), (int32_t)0);
	if (jz())
		goto loc_49633E;
	xor_(eax, eax);
	call(to32i(dword_4DCFE0));
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
	return;
loc_4965FA:
	esp -= 4; _sub_495BD8(); esp += 4; //call
	test(eax, eax);
	if (jg())
		goto loc_49633E;
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_489840(); esp += 4; //call
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_49633E;
	al = to8i(byte_4DCEE6); //mov
	dec(to8i(byte_4DCEE6));
	esp -= 4; _sub_495DEC(); esp += 4; //call
	dl = 1; //mov
	esp -= 4; _sub_49664C(); esp += 4; //call
	to8i(byte_4DCED9) = dl; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
	pop32(ebp);
}
Fn(void) Game::_sub_49664C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)sub_496098; //mov
	ecx = (int32_t)(intptr_t)sub_495990; //mov
	xor_(ebx, ebx);
	to32i(dword_4DCFDC) = edx; //mov
	to32i(dword_4DDA90) = ecx; //mov
	to32i(dword_4DCEEC) = ebx; //mov
	to32i(dword_4DCE70) = ebx; //mov
	to32i(dword_4DCE74) = ebx; //mov
	to32i(dword_4DCE78) = ebx; //mov
	xor_(eax, eax);
	to32i(dword_4DCE5C) = ebx; //mov
	xor_(edx, edx);
	to32i(dword_4DCE60) = ebx; //mov
	ecx = 0xFFFFFFFF; //mov
	to32i(dword_4DCE6C) = ecx; //mov
	xor_(ah, bh);
	to8i(byte_4DCED9) = ah; //mov
	xor_(dl, bl);
	to8i(byte_4DCEEA) = dl; //mov
	xor_(dh, bh);
	to8i(byte_4DCEEB) = dh; //mov
	eax = to8i(byte_4DCEEB); //movsx
	ebx = ecx; //mov
	to32i(dword_4DCEF8+eax*4) = ecx; //mov
	to8i(byte_4DCEDA) = 1; //mov
	xor_(bh, ch);
	to8i(byte_4DCEE9) = bh; //mov
	cmp(to8i(byte_4DCEE4), (int8_t)0);
	if (jz())
		goto loc_4966E0;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4966E0:
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)sub_496314; //mov
	xor_(edx, edx);
	ch = 1; //mov
	esp -= 4; _sub_483DD0(); esp += 4; //call
	to8i(byte_4DCEE4) = ch; //mov
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_496700()
{
	sub(esp, (int32_t)0x10);
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_49671A;
	eax = 0xFFFFFFFF; //mov
	add(esp, (int32_t)0x10);
	return;
loc_49671A:
	push32(edx);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_485380(); esp += 4; //call
	al = to8i(byte_4DCEDE); //mov
	to8i(esp+0xC) = al; //mov
	al = to8i(byte_4DCEDF); //mov
	to8i(esp+0xB) = al; //mov
	al = to8i(byte_4DCEE0); //mov
	to8i(esp+0xD) = al; //mov
	al = to8i(byte_4DCEE1); //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	to8i(esp+0xE) = al; //mov
	eax = (int32_t)(intptr_t)dword_4DCE7C; //mov
	esp -= 4; _sub_4A5000(); esp += 4; //call
	to32i(dword_4DCE6C) = eax; //mov
	cmp(to32i(dword_4DCE6C), (int32_t)0);
	if (jl())
		goto loc_4967BF;
	push32(ebx);
	eax = to32i(dword_4DCE6C); //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	to8i(byte_4DCEDD) = al; //mov
	edx = to8i(byte_4DCEDD); //movsx
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)5);
	al = (int32_t)(intptr_t)byte_59BFBB[eax]; //mov
	to8i(byte_4DCEDB) = al; //mov
	to8i(byte_4DCED9) = 2; //mov
	xor_(dl, dl);
	to8i(byte_4DCED8) = dl; //mov
	xor_(ebx, ebx);
	to16i(word_4DCEE2) = bx; //mov
	eax = (int32_t)(intptr_t)sub_495CAC; //mov
	esp -= 4; _sub_4A5060(); esp += 4; //call
	pop32(ebx);
	eax = to32i(dword_4DCE6C); //mov
	pop32(edx);
	add(esp, (int32_t)0x10);
	return;
loc_4967BF:
	ax = to16i(word_4DCEE2); //mov
	inc(to16i(word_4DCEE2));
	eax = to32i(dword_4DCE6C); //mov
	pop32(edx);
	add(esp, (int32_t)0x10);
}
Fn(void) Game::_sub_4967E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	edi = to32i(esp+0x38); //mov
	to32i(esp) = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+0xC) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = esp; //mov
	ebp = 0x7D0; //mov
	esp -= 4; _sub_4AD690(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4968AD;
	edx = to32i(esp+8); //mov
	sub(edx, to32i(esp));
	test(edx, edx);
	if (jl())
		goto loc_4968B6;
	eax = edx; //mov
loc_49682A:
	esi = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+0xC); //mov
	sub(eax, esi);
	test(eax, eax);
	if (jl())
		goto loc_4968BF;
	ecx = eax; //mov
loc_496840:
	cmp(ebx, ecx);
	if (jle())
		goto loc_4969E4;
	test(edx, edx);
	if (jl())
		goto loc_4968C8;
loc_496850:
	eax = to32i(esp+8); //mov
	sub(eax, to32i(esp));
	test(eax, eax);
	if (jl())
		goto loc_4968EB;
loc_49685F:
	ecx = to32i(esp+0xC); //mov
	to32i(esp+0x24) = eax; //mov
	sub(ecx, to32i(esp+4));
	test(ecx, ecx);
	if (jl())
		goto loc_4968F2;
	eax = ecx; //mov
loc_496875:
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x24); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_4968FB;
	eax = 1; //mov
loc_496891:
	bl = to8i(byte_4DB25C); //mov
	to32i(esp+0x14) = eax; //mov
	cmp(bl, (int8_t)8);
	if (jnz())
		goto loc_496947;
loc_4968A4:
	eax = to32i(esp); //mov
	cmp(eax, to32i(esp+8));
	if (jle())
		goto loc_496902;
loc_4968AD:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4968B6:
	eax = edx; //mov
	neg(eax);
	goto loc_49682A;
loc_4968BF:
	ecx = eax; //mov
	neg(ecx);
	goto loc_496840;
loc_4968C8:
	eax = to32i(esp+8); //mov
	edx = to32i(esp); //mov
	to32i(esp) = eax; //mov
	to32i(esp+8) = edx; //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+4); //mov
	to32i(esp+4) = eax; //mov
	to32i(esp+0xC) = edx; //mov
	goto loc_496850;
loc_4968EB:
	neg(eax);
	goto loc_49685F;
loc_4968F2:
	eax = ecx; //mov
	neg(eax);
	goto loc_496875;
loc_4968FB:
	eax = 0xFFFFFFFF; //mov
	goto loc_496891;
loc_496902:
	edx = to32i(esp+4); //mov
	ebx = edi; //mov
	ecx = to32i(dword_4DB26C); //mov
	add(eax, to32i(ecx+edx*4));
	add(eax, to32i(dword_4DB260));
	to8i(eax) = bl; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0x18); //mov
	inc(eax);
	sub(esi, edx);
	to32i(esp) = eax; //mov
	test(esi, esi);
	if (jge())
		goto loc_4968A4;
	eax = to32i(esp+0x14); //mov
	ebx = to32i(esp+4); //mov
	ecx = to32i(esp+0x24); //mov
	add(ebx, eax);
	add(esi, ecx);
	to32i(esp+4) = ebx; //mov
	goto loc_4968A4;
loc_496947:
	cmp(bl, (int8_t)0xF);
	if (jnz())
		goto loc_496999;
loc_49694C:
	eax = to32i(esp); //mov
	cmp(eax, to32i(esp+8));
	if (jg())
		goto loc_4968AD;
	edx = to32i(esp+4); //mov
	ebx = edi; //mov
	ecx = to32i(dword_4DB26C); //mov
	edx = to32i(ecx+edx*4); //mov
	add(edx, to32i(dword_4DB260));
	to16i(edx+eax*2) = bx; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0x18); //mov
	inc(eax);
	sub(esi, edx);
	to32i(esp) = eax; //mov
	test(esi, esi);
	if (jge())
		goto loc_49694C;
	eax = to32i(esp+0x14); //mov
	ebx = to32i(esp+4); //mov
	ecx = to32i(esp+0x24); //mov
	add(ebx, eax);
	add(esi, ecx);
	to32i(esp+4) = ebx; //mov
	goto loc_49694C;
loc_496999:
	cmp(bl, (int8_t)0x10);
	if (jz())
		goto loc_49694C;
loc_49699E:
	eax = to32i(esp); //mov
	cmp(eax, to32i(esp+8));
	if (jg())
		goto loc_4968AD;
	dec(ebp);
	if (jz())
		goto loc_4968AD;
	edx = to32i(esp+4); //mov
	ebx = edi; //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
	ebx = to32i(esp); //mov
	eax = to32i(esp+0x18); //mov
	inc(ebx);
	sub(esi, eax);
	to32i(esp) = ebx; //mov
	test(esi, esi);
	if (jge())
		goto loc_49699E;
	eax = to32i(esp+0x14); //mov
	ebx = to32i(esp+4); //mov
	edx = to32i(esp+0x24); //mov
	add(ebx, eax);
	add(esi, edx);
	to32i(esp+4) = ebx; //mov
	goto loc_49699E;
loc_4969E4:
	test(eax, eax);
	if (jl())
		goto loc_496A8D;
loc_4969EC:
	ecx = to32i(esp+8); //mov
	sub(ecx, to32i(esp));
	test(ecx, ecx);
	if (jl())
		goto loc_496AB0;
	eax = ecx; //mov
loc_4969FD:
	edx = to32i(esp+0xC); //mov
	sub(edx, to32i(esp+4));
	to32i(esp+0x20) = eax; //mov
	test(edx, edx);
	if (jl())
		goto loc_496AB9;
loc_496A11:
	to32i(esp+0x1C) = edx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_496AC0;
	eax = 1; //mov
loc_496A2D:
	to32i(esp+0x10) = eax; //mov
	ah = to8i(byte_4DB25C); //mov
	cmp(ah, (int8_t)8);
	if (jnz())
		goto loc_496ACA;
loc_496A40:
	eax = to32i(esp+4); //mov
	cmp(eax, to32i(esp+0xC));
	if (jg())
		goto loc_4968AD;
	ebx = edi; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	ecx = to32i(dword_4DB26C); //mov
	add(eax, to32i(ecx+edx*4));
	add(eax, to32i(dword_4DB260));
	to8i(eax) = bl; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(esp+0x20); //mov
	inc(eax);
	sub(esi, edx);
	to32i(esp+4) = eax; //mov
	test(esi, esi);
	if (jge())
		goto loc_496A40;
	eax = to32i(esp+0x10); //mov
	ebx = to32i(esp); //mov
	ecx = to32i(esp+0x1C); //mov
	add(ebx, eax);
	add(esi, ecx);
	to32i(esp) = ebx; //mov
	goto loc_496A40;
loc_496A8D:
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+4); //mov
	to32i(esp+4) = eax; //mov
	to32i(esp+0xC) = edx; //mov
	eax = to32i(esp+8); //mov
	edx = to32i(esp); //mov
	to32i(esp) = eax; //mov
	to32i(esp+8) = edx; //mov
	goto loc_4969EC;
loc_496AB0:
	eax = ecx; //mov
	neg(eax);
	goto loc_4969FD;
loc_496AB9:
	neg(edx);
	goto loc_496A11;
loc_496AC0:
	eax = 0xFFFFFFFF; //mov
	goto loc_496A2D;
loc_496ACA:
	cmp(ah, (int8_t)0xF);
	if (jnz())
		goto loc_496B1E;
loc_496ACF:
	eax = to32i(esp+4); //mov
	cmp(eax, to32i(esp+0xC));
	if (jg())
		goto loc_4968AD;
	ebx = edi; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	ecx = to32i(dword_4DB26C); //mov
	edx = to32i(ecx+edx*4); //mov
	add(edx, to32i(dword_4DB260));
	to16i(edx+eax*2) = bx; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(esp+0x20); //mov
	inc(eax);
	sub(esi, edx);
	to32i(esp+4) = eax; //mov
	test(esi, esi);
	if (jge())
		goto loc_496ACF;
	eax = to32i(esp+0x10); //mov
	ebx = to32i(esp); //mov
	ecx = to32i(esp+0x1C); //mov
	add(ebx, eax);
	add(esi, ecx);
	to32i(esp) = ebx; //mov
	goto loc_496ACF;
loc_496B1E:
	cmp(ah, (int8_t)0x10);
	if (jz())
		goto loc_496ACF;
loc_496B23:
	eax = to32i(esp+4); //mov
	cmp(eax, to32i(esp+0xC));
	if (jg())
		goto loc_4968AD;
	dec(ebp);
	if (jz())
		goto loc_4968AD;
	ebx = edi; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	esp -= 4; _sub_4AD870(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	eax = to32i(esp+0x20); //mov
	inc(ebx);
	sub(esi, eax);
	to32i(esp+4) = ebx; //mov
	test(esi, esi);
	if (jge())
		goto loc_496B23;
	eax = to32i(esp+0x10); //mov
	ebx = to32i(esp); //mov
	edx = to32i(esp+0x1C); //mov
	add(ebx, eax);
	add(esi, edx);
	to32i(esp) = ebx; //mov
	goto loc_496B23;
}
Fn(void) Game::_strtok_()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)0x20);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_496B8A;
	call(to32i(off_4DED58));
	ebx = to32i(eax+0x10); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_496B8A;
loc_496B83:
	xor_(eax, eax);
	goto loc_496C09;
loc_496B8A:
	eax = esp; //mov
	esp -= 4; ___setbits_(); esp += 4; //call
	goto loc_496BB2;
loc_496B93:
	eax = edx; //mov
	shr(eax, (int32_t)3);
	xor_(ecx, ecx);
	cl = to8i(esp+eax); //mov
	eax = edx; //mov
	and_(eax, (int32_t)7);
	al = (int32_t)(intptr_t)byte_4D1FA4[eax]; //mov
	and_(eax, (int32_t)0xFF);
	test(ecx, eax);
	if (jz())
		goto loc_496BBA;
	inc(ebx);
loc_496BB2:
	xor_(edx, edx);
	dl = to8i(ebx); //mov
	test(edx, edx);
	if (jnz())
		goto loc_496B93;
loc_496BBA:
	test(edx, edx);
	if (jz())
		goto loc_496B83;
	edx = ebx; //mov
	goto loc_496BF2;
loc_496BC2:
	ecx = eax; //mov
	shr(ecx, (int32_t)3);
	cl = to8i(esp+ecx); //mov
	and_(eax, (int32_t)7);
	and_(ecx, (int32_t)0xFF);
	al = (int32_t)(intptr_t)byte_4D1FA4[eax]; //mov
	and_(eax, (int32_t)0xFF);
	test(ecx, eax);
	if (jz())
		goto loc_496BF1;
	to8i(edx) = 0; //mov
	inc(edx);
	call(to32i(off_4DED58));
	to32i(eax+0x10) = edx; //mov
	goto loc_496C07;
loc_496BF1:
	inc(edx);
loc_496BF2:
	xor_(eax, eax);
	al = to8i(edx); //mov
	test(eax, eax);
	if (jnz())
		goto loc_496BC2;
	call(to32i(off_4DED58));
	to32i(eax+0x10) = 0; //mov
loc_496C07:
	eax = ebx; //mov
loc_496C09:
	add(esp, (int32_t)0x20);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_floor_()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)8);
	eax = (int32_t)(intptr_t)(ebp-0x14); //lea
	push32(eax);
	edx = to32i(ebp+0xC); //mov
	push32(edx);
	ebx = to32i(ebp+8); //mov
	push32(ebx);
	esp -= 4; _modf_(); esp += 4; //call
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_496C3E;
	fld(to64f(ebp-0x14));
	fadd(to64f(dbl_4D07E8));
	fstp(to64f(ebp-0x14));
loc_496C3E:
	fld(to64f(ebp-0x14));
	esp = (int32_t)(intptr_t)(ebp-0xC); //lea
	pop32(edx);
	pop32(ebx);
	pop32(eax);
	pop32(ebp);
	esp += 8; return;
}
Fn(void) Game::_ceil_()
{
	push32(ebp);
	ebp = esp; //mov
	push32(eax);
	fld(to64f(ebp+8));
	sub(esp, (int32_t)8);
	fchs();
	fstp(to64f(esp));
	esp -= 4; _floor_(); esp += 4; //call
	fchs();
	pop32(eax);
	pop32(ebp);
	esp += 8; return;
}
Fn(void) Game::_sub_497220()
{
	ecx = to32i(esp+4); //mov
	edx = to32i(dword_56EEA4); //mov
	xor_(eax, eax);
	cmp(ecx, edx);
	if (jl())
		goto loc_497233;
	esp += 4; return;
loc_497233:
	push32(ecx);
	eax = grSstSelect(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	esp += 4; return;
}
Fn(void) Game::_sub_497244()
{
	sub(esp, (int32_t)4);
	xor_(ecx, ecx);
	xor_(eax, eax);
	xor_(edx, edx);
loc_49724D:
	to32i(esp) = eax; //mov
	add(edx, (int32_t)4);
	fild(to32i(esp));
	inc(eax);
	fstp(to32f(flt_56E9DC+edx));
	cmp(eax, (int32_t)0x100);
	if (jl())
		goto loc_49724D;
	goto loc_497273;
loc_49726D:
	eax = ecx; //mov
	add(esp, (int32_t)4);
	return;
loc_497273:
	eax = grGlideInit();
	push32(dword_56EEA4);
	eax = grSstQueryHardware(to32i(esp + 0)); esp += 4;
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49726D;
	push32(0);
	esp -= 4; _sub_497220(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_49726D;
	ecx = to32i(dword_56EEA4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_49726D;
	edx = 1; //mov
	eax = (int32_t)(intptr_t)sub_4972BC; //mov
	to32i(dword_4DCFE4) = edx; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	eax = ecx; //mov
	add(esp, (int32_t)4);
}
Fn(void) Game::_sub_4972BC()
{
	push32(ebx);
	edx = to32i(dword_4DCFE4); //mov
	ebx = 1; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4972D0;
	eax = ebx; //mov
	pop32(ebx);
	return;
loc_4972D0:
	eax = grGlideShutdown();
	to32i(dword_4DCFE4) = 0; //mov
	eax = ebx; //mov
	pop32(ebx);
}
Fn(void) Game::_sub_4972FC()
{
	test(to8i(dword_4DCFE4), (int8_t)2);
	if (jnz())
		goto loc_497306;
	return;
loc_497306:
	push32(edx);
	push32(ecx);
	eax = grSstWinClose();
	and_(to8i(dword_4DCFE4), (int8_t)0xFD);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_497318()
{
	push32(ebx);
	edx = to32i(esp+0x10); //mov
	esp -= 4; _sub_4972FC(); esp += 4; //call
	push32(edx);
	ecx = to32i(esp+0x10); //mov
	push32(ecx);
	push32(0);
	push32(0);
	edx = to32i(esp+0x18); //mov
	xor_(eax, eax);
	push32(0);
	al = (int32_t)(intptr_t)byte_4DD000[edx]; //mov
	push32(eax);
	esp -= 4; _getHwnd(); esp += 4; //call
	push32(eax);
	eax = grSstWinOpen(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20), to32i(esp + 24)); esp += 28;
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_497353;
	eax = ebx; //mov
	pop32(ebx);
	esp += 0xC; return;
loc_497353:
	push32(esi);
	esp -= 4; _sub_4975B0(); esp += 4; //call
	push32(1);
	push32(0);
	eax = grTexCombineFunction(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	push32(0);
	eax = grChromakeyValue(to32i(esp + 0)); esp += 4;
	push32(0x10);
	eax = grAlphaTestReferenceValue(to32i(esp + 0)); esp += 4;
	push32(1);
	push32(1);
	push32(0);
	eax = grTexFilterMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	push32(0);
	push32(0);
	push32(0);
	eax = grTexMipMapMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	push32(0);
	push32(0);
	push32(0);
	push32(1);
	push32(0);
	push32(1);
	push32(0);
	eax = grTexCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20), to32i(esp + 24)); esp += 28;
	push32(0);
	push32(2);
	push32(0);
	push32(0);
	push32(1);
	eax = grColorCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(0);
	push32(2);
	push32(0);
	push32(0);
	push32(1);
	eax = grAlphaCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(0);
	push32(0);
	push32(5);
	push32(1);
	eax = grAlphaBlendFunction(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	push32(0);
	push32(1);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(1);
	push32(2);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(1);
	push32(3);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(1);
	push32(7);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(2);
	push32(8);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(0);
	push32(9);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(0);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(1);
	push32(6);
	esi = to32i(esp+0x1C); //mov
	esp -= 4; _sub_497738(); esp += 4; //call
	test(esi, esi);
	if (jz())
		goto loc_497460;
	eax = 2; //mov
loc_497422:
	push32(eax);
	push32(0xA);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(0);
	push32(0xD);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(0xFFFFFFFF);
	push32(0xE);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(0);
	push32(0xF);
	esp -= 4; _sub_497738(); esp += 4; //call
	edx = 0x3F800000; //mov
	push32(edx);
	push32(0x65);
	esp -= 4; _sub_497738(); esp += 4; //call
	or_(to8i(dword_4DCFE4), (int8_t)2);
	pop32(esi);
	eax = ebx; //mov
	pop32(ebx);
	esp += 0xC; return;
loc_497460:
	xor_(eax, eax);
	goto loc_497422;
}
Fn(void) Game::_sub_497464()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = to32i(esp+0x14); //mov
	ebp = to32i(esp+0x18); //mov
	xor_(esi, esi);
	cmp(edi, ebp);
	if (jle())
		goto loc_4974D9;
	eax = edi; //mov
loc_497478:
	esp -= 4; _sub_4AD9F0(); esp += 4; //call
	ebx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4AD9F0(); esp += 4; //call
	edi = eax; //mov
	eax = ebp; //mov
	edx = to32i(esp+0x1C); //mov
	esp -= 4; _sub_4AD9F0(); esp += 4; //call
	sub(edi, eax);
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4DD01D[edx]; //mov
	push32(eax);
	ebp = (uint8_t)byte_4DD019[edi]; //movzx
	xor_(eax, eax);
	push32(ebp);
	al = (int32_t)(intptr_t)byte_4DD00D[ebx]; //mov
	edx = to32i(esp+0x2C); //mov
	push32(eax);
	sub(eax, edx);
	push32(eax);
	eax = grTexCalcMemRequired(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	push32(0);
	edi = eax; //mov
	eax = grTexMaxAddress(to32i(esp + 0)); esp += 4;
	sub(eax, to32i(dword_56EF38));
	cmp(eax, edi);
	if (ja())
		goto loc_4974DD;
loc_4974D0:
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x14; return;
loc_4974D9:
	eax = ebp; //mov
	goto loc_497478;
loc_4974DD:
	eax = 0x20; //mov
	esp -= 4; _malloc_(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4974D0;
	xor_(edx, edx);
	ecx = to32i(esp+0x24); //mov
	dl = (int32_t)(intptr_t)byte_4DD00D[ebx]; //mov
	sub(edx, ecx);
	to32i(eax) = edx; //mov
	bl = (int32_t)(intptr_t)byte_4DD00D[ebx]; //mov
	and_(ebx, (int32_t)0xFF);
	to32i(eax+8) = ebp; //mov
	edx = to32i(esp+0x1C); //mov
	to32i(eax+4) = ebx; //mov
	xor_(ebx, ebx);
	bl = (int32_t)(intptr_t)byte_4DD01D[edx]; //mov
	to32i(eax+0x10) = 0; //mov
	to32i(eax+0xC) = ebx; //mov
	ebx = to32i(dword_56EF38); //mov
	to32i(eax+0x14) = ebx; //mov
	ebx = to32i(dword_4DCFF8); //mov
	to32i(eax+0x1C) = ebx; //mov
	ebx = to32i(dword_56EF38); //mov
	to32i(eax+0x18) = 3; //mov
	add(ebx, edi);
	to32i(dword_4DCFF8) = eax; //mov
	to32i(dword_56EF38) = ebx; //mov
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0x14; return;
}
Fn(void) Game::_sub_49755C()
{
	push32(ebx);
	push32(esi);
	ebx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x10); //mov
	test(eax, eax);
	if (jnz())
		goto loc_497579;
	esi = to32i(esp+0x14); //mov
	test(esi, esi);
	if (jnz())
		goto loc_49759C;
	eax = ebx; //mov
	pop32(esi);
	pop32(ebx);
	esp += 0xC; return;
loc_497579:
	push32(ebx);
	edx = to32i(ebx+0x18); //mov
	push32(edx);
	ecx = to32i(ebx+0x14); //mov
	push32(ecx);
	push32(0);
	to32i(ebx+0x10) = eax; //mov
	eax = grTexDownloadMipMap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	esi = to32i(esp+0x14); //mov
	test(esi, esi);
	if (jnz())
		goto loc_49759C;
	eax = ebx; //mov
	pop32(esi);
	pop32(ebx);
	esp += 0xC; return;
loc_49759C:
	push32(esi);
	push32(2);
	push32(0);
	eax = grTexDownloadTable(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = ebx; //mov
	pop32(esi);
	pop32(ebx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4975B0()
{
	push32(0);
	eax = grTexMinAddress(to32i(esp + 0)); esp += 4;
	edx = to32i(dword_4DCFF8); //mov
	to32i(dword_56EF38) = eax; //mov
	test(edx, edx);
	if (jz())
	{
		_sub_4975E0();
		return;
	}
loc_4975C7:
	eax = to32i(dword_4DCFF8); //mov
	edx = to32i(eax+0x1C); //mov
	esp -= 4; _free_(); esp += 4; //call
	to32i(dword_4DCFF8) = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4975C7;
	_sub_4975E0(); return; //jmp
}
Fn(void) Game::_sub_4975E0()
{
	eax = 1; //mov
}
Fn(void) Game::_sub_4975E8()
{
	push32(ebx);
	push32(esi);
	push32(ebp);
	eax = to32i(esp+0x10); //mov
	test(eax, eax);
	if (jnz())
		goto loc_497607;
	cmp(to32i(dword_4DD028), (int32_t)0);
	if (jnz())
		goto loc_49764E;
loc_4975FC:
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 4; return;
loc_497607:
	push32(eax);
	ebx = to32i(eax+0x18); //mov
	push32(ebx);
	esi = to32i(eax+0x14); //mov
	push32(esi);
	push32(0);
	eax = grTexSource(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	cmp(to32i(dword_4DD028), (int32_t)1);
	if (jz())
		goto loc_4975FC;
	push32(0);
	push32(1);
	push32(0);
	push32(1);
	push32(3);
	eax = grColorCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(0);
	push32(1);
	push32(0);
	push32(1);
	push32(3);
	ebp = 1; //mov
	eax = grAlphaCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	to32i(dword_4DD028) = ebp; //mov
	goto loc_4975FC;
loc_49764E:
	push32(eax);
	push32(2);
	push32(eax);
	push32(eax);
	push32(1);
	eax = grColorCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(0);
	push32(2);
	push32(0);
	push32(0);
	push32(1);
	eax = grAlphaCombine(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	xor_(ecx, ecx);
	to32i(dword_4DD028) = ecx; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 4; return;
}
Fn(void) Game::_sub_497680()
{
	eax = to32i(esp+4); //mov
	dec(eax);
	push32(eax);
	to32i(dword_4DCFF0) = eax; //mov
	eax = grRenderBuffer(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	esp += 4; return;
}
Fn(void) Game::_sub_49769C()
{
	xor_(eax, eax);
	ax = to16i(dword_4DCFEC); //mov
	push32(eax);
	push32(0);
	edx = to32i(dword_4DCFE8); //mov
	push32(edx);
	eax = grBufferClear(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
}
Fn(void) Game::_sub_4976B8()
{
	edx = to32i(dword_4DCFF4); //mov
	push32(edx);
	eax = grBufferSwap(to32i(esp + 0)); esp += 4;
}
Fn(void) Game::_sub_4976C8()
{
	push32(ebx);
	eax = to32i(esp+8); //mov
	xor_(ebx, ebx);
	cmp(eax, (int32_t)1);
	if (jb())
		goto loc_4976FB;
	if (jbe())
		goto loc_497703;
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_4976FB;
	eax = grSstStatus();
	ebx = eax; //mov
	shr(ebx, (int32_t)0xC);
	eax = 0xFFFF; //mov
	and_(ebx, (int32_t)0xFFFF);
	sub(eax, ebx);
	ebx = eax; //mov
loc_4976F5:
	eax = ebx; //mov
	pop32(ebx);
	esp += 4; return;
loc_4976FB:
	eax = grSstIdle();
	goto loc_4976F5;
loc_497703:
	eax = grSstIsBusy();
	ebx = eax; //mov
	eax = ebx; //mov
	pop32(ebx);
	esp += 4; return;
}
Fn(void) Game::_sub_497714()
{
	push32(ebx);
	push32(esi);
	edx = to32i(esp+0x18); //mov
	push32(edx);
	ecx = to32i(esp+0x18); //mov
	push32(ecx);
	ebx = to32i(esp+0x18); //mov
	push32(ebx);
	esi = to32i(esp+0x18); //mov
	push32(esi);
	eax = grClipWindow(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	pop32(esi);
	pop32(ebx);
	esp += 0x10; return;
}
Fn(void) Game::_sub_497738()
{
	push32(ebx);
	push32(esi);
	sub(esp, (int32_t)0x48);
	edx = to32i(esp+0x54); //mov
	xor_(eax, eax);
	cmp(edx, (int32_t)9);
	if (jnb())
		goto loc_49776D;
	cmp(edx, (int32_t)4);
	if (jnb())
		goto loc_497839;
	cmp(edx, (int32_t)2);
	if (jnb())
		goto loc_4978A9;
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_4978C3;
loc_497763:
	xor_(eax, eax);
loc_497765:
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49776D:
	if (jbe())
		goto loc_497763;
	cmp(edx, (int32_t)0xF);
	if (jnb())
		goto loc_4977A1;
	cmp(edx, (int32_t)0xD);
	if (jnb())
		goto loc_49780D;
	cmp(edx, (int32_t)0xA);
	if (jnz())
		goto loc_497763;
	esi = to32i(esp+0x58); //mov
	cmp(esi, (int32_t)1);
	if (jnb())
		goto loc_497925;
	test(esi, esi);
	if (jz())
		goto loc_49795E;
	xor_(eax, eax);
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4977A1:
	if (ja())
		goto loc_4977C7;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jnz())
		goto loc_4977AF;
	eax = 1; //mov
loc_4977AF:
	push32(eax);
	push32(1);
	push32(0);
	eax = grTexClampMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4977C7:
	cmp(edx, (int32_t)0x66);
	if (jnb())
		goto loc_4977E8;
	cmp(edx, (int32_t)0x65);
	if (jnz())
		goto loc_497763;
	push32(to32i(esp+0x58));
	eax = grGammaCorrectionValue(*(float *)(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4977E8:
	if (jbe())
		goto loc_4979EC;
	cmp(edx, (int32_t)0x67);
	if (jnz())
		goto loc_497763;
	eax = to32i(esp+0x58); //mov
	to32i(dword_4DCFF4) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49780D:
	if (ja())
		goto loc_4979C0;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jz())
		goto loc_4979D8;
	push32(2);
	eax = grFogMode(to32i(esp + 0)); esp += 4;
	eax = esp; //mov
	push32(eax);
	eax = grFogTable(to32i(esp + 0)); esp += 4;
	xor_(eax, eax);
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_497839:
	if (jbe())
		goto loc_4979AA;
	cmp(edx, (int32_t)7);
	if (jnb())
		goto loc_49786D;
	cmp(edx, (int32_t)6);
	if (jnz())
		goto loc_497763;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jz())
		goto loc_497859;
	eax = 2; //mov
loc_497859:
	push32(eax);
	eax = grDitherMode(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49786D:
	if (jbe())
		goto loc_497763;
	ebx = to32i(esp+0x58); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4978F0;
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_49790C;
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_497765;
	push32(eax);
	eax = grChromakeyMode(to32i(esp + 0)); esp += 4;
	push32(4);
	eax = grAlphaTestFunction(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4978A9:
	if (ja())
		goto loc_4978D5;
	ecx = to32i(esp+0x58); //mov
	push32(ecx);
	eax = grCullMode(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4978C3:
	ebx = to32i(esp+0x58); //mov
	push32(ebx);
	esp -= 4; _sub_4975E8(); esp += 4; //call
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4978D5:
	eax = to32i(esp+0x58); //mov
	push32(eax);
	push32(eax);
	push32(0);
	eax = grTexFilterMode(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4978F0:
	push32(eax);
	eax = grChromakeyMode(to32i(esp + 0)); esp += 4;
	push32(7);
	eax = grAlphaTestFunction(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49790C:
	push32(ebx);
	eax = grChromakeyMode(to32i(esp + 0)); esp += 4;
	push32(4);
	eax = grAlphaTestFunction(to32i(esp + 0)); esp += 4;
	eax = ebx; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_497925:
	if (jbe())
		goto loc_49797A;
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_497763;
	push32(esi);
	eax = grDepthBufferMode(to32i(esp + 0)); esp += 4;
	push32(3);
	eax = grDepthBufferFunction(to32i(esp + 0)); esp += 4;
	eax = 0xFFFF; //mov
	push32(1);
	to32i(dword_4DCFEC) = eax; //mov
	eax = grDepthMask(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49795E:
	push32(7);
	eax = grDepthBufferFunction(to32i(esp + 0)); esp += 4;
	push32(esi);
	eax = grDepthMask(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_49797A:
	push32(1);
	eax = grDepthBufferMode(to32i(esp + 0)); esp += 4;
	push32(3);
	eax = grDepthBufferFunction(to32i(esp + 0)); esp += 4;
	edx = 0xFFFF; //mov
	push32(1);
	to32i(dword_4DCFEC) = edx; //mov
	eax = grDepthMask(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4979AA:
	eax = to32i(esp+0x58); //mov
	to32i(dword_4DCFE8) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4979C0:
	ecx = to32i(esp+0x58); //mov
	push32(ecx);
	eax = grFogColorValue(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4979D8:
	push32(eax);
	eax = grFogMode(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_4979EC:
	fld(to32f(esp+0x58));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x40));
	eax = to32i(esp+0x40); //mov
	to16i(esp+0x44) = ax; //mov
	eax = to32i(esp+0x42); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = grDepthBiasLevel(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	add(esp, (int32_t)0x48);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
}
Fn(void) Game::_sub_497A20()
{
	push32(ebx);
	sub(esp, (int32_t)0x14);
	eax = esp; //mov
	push32(eax);
	xor_(ebx, ebx);
	push32(ebx);
	push32(ebx);
	push32(ebx);
	ecx = to32i(dword_4DCFF0); //mov
	push32(ecx);
	edx = 0x14; //mov
	push32(1);
	to32i(esp+0x18) = edx; //mov
	eax = grLfbLock(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	test(eax, eax);
	if (jnz())
		goto loc_497A4F;
loc_497A48:
	eax = ebx; //mov
	add(esp, (int32_t)0x14);
	pop32(ebx);
	return;
loc_497A4F:
	eax = 0x10; //mov
	esp -= 4; _malloc_(); esp += 4; //call
	edx = eax; //mov
	ebx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_497A48;
	eax = to32i(esp+4); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(edx+8) = 0xA; //mov
	to32i(edx+4) = eax; //mov
	eax = to32i(dword_4DCFF0); //mov
	to32i(edx+0xC) = eax; //mov
	eax = ebx; //mov
	add(esp, (int32_t)0x14);
	pop32(ebx);
}
Fn(void) Game::_sub_497A84()
{
	push32(ebx);
	push32(esi);
	esi = to32i(esp+0xC); //mov
	ebx = 1; //mov
	test(esi, esi);
	if (jnz())
		goto loc_497A9A;
	eax = ebx; //mov
	pop32(esi);
	pop32(ebx);
	esp += 4; return;
loc_497A9A:
	eax = to32i(esi+0xC); //mov
	push32(eax);
	push32(ebx);
	eax = grLfbUnlock(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	eax = esi; //mov
	esp -= 4; _free_(); esp += 4; //call
	eax = ebx; //mov
	pop32(esi);
	pop32(ebx);
	esp += 4; return;
}
Fn(void) Game::_sub_497B24()
{
	push32(ebx);
	sub(esp, (int32_t)0xF0);
	edx = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(esp+0xB4); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0xFC); //mov
	eax = (int32_t)(intptr_t)(esp+0x78); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0x100); //mov
	eax = esp; //mov
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0x104); //mov
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	eax = esp; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x7C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xBC); //lea
	push32(eax);
	eax = grDrawTriangle(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xBC); //lea
	push32(eax);
	eax = grDrawTriangle(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	add(esp, (int32_t)0xF0);
	pop32(ebx);
	esp += 0x10; return;
}
Fn(void) Game::_sub_497D6C()
{
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xF0);
	ebp = to32i(esp+0x104); //mov
	edi = to32i(esp+0x108); //mov
	esi = to32i(esp+0x10C); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_497FD8;
loc_497D93:
	edx = to32i(esi+4); //mov
	shl(edx, (int32_t)5);
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	add(edx, edi);
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esi+8); //mov
	shl(edx, (int32_t)5);
	eax = (int32_t)(intptr_t)(esp+0x78); //lea
	add(edx, edi);
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esi+0xC); //mov
	shl(edx, (int32_t)5);
	eax = (int32_t)(intptr_t)(esp+0xB4); //lea
	add(edx, edi);
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esi); //mov
	shl(edx, (int32_t)5);
	eax = esp; //mov
	add(edx, edi);
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	eax = (int32_t)(intptr_t)(esp+0x78); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = grDrawTriangle(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	eax = (int32_t)(intptr_t)(esp+0xB4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x7C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	add(esi, (int32_t)0x10);
	eax = grDrawTriangle(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	dec(ebp);
	if (jnz())
		goto loc_497D93;
loc_497FD8:
	add(esp, (int32_t)0xF0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4983B0()
{
	push32(ebx);
	sub(esp, (int32_t)0xB4);
	edx = to32i(esp+0xBC); //mov
	eax = (int32_t)(intptr_t)(esp+0x78); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0xC0); //mov
	eax = esp; //mov
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0xC4); //mov
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	push32(eax);
	eax = grDrawTriangle(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	add(esp, (int32_t)0xB4);
	pop32(ebx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_498EE0()
{
	push32(ebx);
	sub(esp, (int32_t)0x78);
	edx = to32i(esp+0x84); //mov
	eax = esp; //mov
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	edx = to32i(esp+0x80); //mov
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	fld(to32f(edx+8));
	fmul(to32f(flt_4DD030));
	fld(to32f(edx+0xC));
	fmul(to32f(flt_4DD02C));
	fld(to32f(edx));
	fadd(to32f(flt_4DD034));
	fld(to32f(edx+4));
	fadd(to32f(flt_4DD034));
	fxch_st(1);
	fstp(to32f(eax));
	fstp(to32f(eax+4));
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x20) = ecx; //mov
	fld(to32f(edx+0x18));
	fmul_st(0, 1);
	xor_(ebx, ebx);
	bl = to8i(edx+0x13); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x1C) = ecx; //mov
	bl = to8i(edx+0x12); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0xC) = ecx; //mov
	fstp(to32f(eax+0x24));
	fmul(to32f(edx+0x1C));
	bl = to8i(edx+0x11); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x10) = ecx; //mov
	bl = to8i(edx+0x10); //mov
	ecx = to32i(dword_56E9E0+ebx*4); //mov
	to32i(eax+0x14) = ecx; //mov
	fstp(to32f(eax+0x28));
	fstp(to32f(eax+0x18));
	eax = esp; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	push32(eax);
	eax = grDrawLine(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	add(esp, (int32_t)0x78);
	pop32(ebx);
	esp += 8; return;
}
Fn(void) Game::_sub_499540()
{
	inc(ebx);
	sar(ebx, (int32_t)1);
	_sub_48A980(); return; //jmp
}
Fn(void) Game::_sub_49954C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_499588;
	edx = ecx; //mov
loc_49955D:
	ecx = eax; //mov
	sar(ecx, (int32_t)1);
	add(ecx, esi);
	test(al, (int8_t)1);
	if (jz())
		goto loc_49958C;
	cl = to8i(ecx); //mov
	xor_(ebx, ebx);
	and_(cl, (int8_t)0xF);
	bl = cl; //mov
	xor_(ecx, ecx);
	cl = to8i(edx); //mov
	shl(ecx, (int32_t)4);
loc_499577:
	or_(ecx, ebx);
	bl = cl; //mov
	ecx = eax; //mov
	inc(edx);
	sar(ecx, (int32_t)1);
	inc(eax);
	to8i(ecx+esi) = bl; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_49955D;
loc_499588:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49958C:
	bl = to8i(ecx); //mov
	and_(bl, (int8_t)0xF0);
	cl = to8i(edx); //mov
	and_(ebx, (int32_t)0xFF);
	and_(cl, (int8_t)0xF);
	and_(ecx, (int32_t)0xFF);
	goto loc_499577;
}
Fn(void) Game::_sub_4995A4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = ebx; //mov
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_4995CF;
loc_4995B1:
	ecx = eax; //mov
	sar(ecx, (int32_t)1);
	add(ecx, edi);
	test(al, (int8_t)1);
	if (jz())
		goto loc_4995D3;
	cl = to8i(ecx); //mov
	and_(ecx, (int32_t)0xFF);
	sar(ecx, (int32_t)4);
	inc(edx);
	inc(eax);
	to8i(edx-1) = cl; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4995B1;
loc_4995CF:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4995D3:
	cl = to8i(ecx); //mov
	and_(cl, (int8_t)0xF);
	and_(ecx, (int32_t)0xFF);
	inc(edx);
	inc(eax);
	to8i(edx-1) = cl; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4995B1;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4995EC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	esi = ebx; //mov
	ebx = to32i(dword_4DAC60); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_499664;
	test(esi, esi);
	if (jle())
		goto loc_49965C;
loc_499605:
	ax = to16i(ecx); //mov
	and_(eax, (int32_t)0xFFFF);
	edi = eax; //mov
	sar(edi, (int32_t)0xB);
	and_(edi, (int32_t)0x1F);
	to32i(esp+8) = edi; //mov
	edi = eax; //mov
	sar(edi, (int32_t)5);
	and_(edi, (int32_t)0x3F);
	and_(eax, (int32_t)0x1F);
	to32i(esp+0xC) = edi; //mov
	edi = to32i(esp+8); //mov
	ebp = to32i(esp+0xC); //mov
	shl(edi, (int32_t)0x13);
	shl(ebp, (int32_t)0xA);
	or_(edi, (int32_t)0xFF000000);
	shl(eax, (int32_t)3);
	or_(edi, ebp);
	inc(edx);
	or_(eax, edi);
	add(ecx, (int32_t)2);
	esp -= 4; _sub_48266C(); esp += 4; //call
	to32i(esp+0xC) = eax; //mov
	inc(ebx);
	al = to8i(esp+0xC); //mov
	to8i(edx-1) = al; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_499605;
loc_49965C:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_499664:
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_49965C;
loc_49966A:
	ax = to16i(ecx); //mov
	and_(eax, (int32_t)0xFFFF);
	edi = eax; //mov
	sar(edi, (int32_t)0xB);
	and_(edi, (int32_t)0x1F);
	to32i(esp) = edi; //mov
	edi = eax; //mov
	sar(edi, (int32_t)5);
	and_(eax, (int32_t)0x1F);
	and_(edi, (int32_t)0x3F);
	to32i(esp+4) = eax; //mov
	eax = to32i(esp); //mov
	sar(edi, (int32_t)1);
	shl(eax, (int32_t)0xA);
	shl(edi, (int32_t)5);
	or_(eax, edi);
	or_(eax, to32i(esp+4));
	edi = to32i(dword_4DAC60); //mov
	inc(edx);
	add(ecx, (int32_t)2);
	al = to8i(edi+eax); //mov
	inc(ebx);
	to8i(edx-1) = al; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_49966A;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4996BC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ecx = edx; //mov
	ebp = ebx; //mov
	xor_(edi, edi);
	test(ebx, ebx);
	if (jle())
		goto loc_4996E7;
loc_4996CC:
	ebx = to32i(esi); //mov
	xor_(eax, eax);
	cmp(ebx, (int32_t)0x40000000);
	if (jnb())
		goto loc_4996EC;
loc_4996D8:
	add(ecx, (int32_t)2);
	add(esi, (int32_t)4);
	inc(edi);
	to16i(ecx-2) = ax; //mov
	cmp(edi, ebp);
	if (jl())
		goto loc_4996CC;
loc_4996E7:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4996EC:
	or_(ebx, ebx);
	if (jz())
		goto loc_499715;
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
loc_499715:
	eax = ebx; //mov
	goto loc_4996D8;
}
Fn(void) Game::_sub_49971C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
	xor_(edi, edi);
	test(ebx, ebx);
	if (jle())
		goto loc_499768;
loc_49972C:
	ebx = to32i(ecx); //mov
	or_(ebx, ebx);
	if (jz())
		goto loc_499757;
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
loc_499757:
	add(esi, (int32_t)2);
	add(ecx, (int32_t)4);
	inc(edi);
	to16i(esi-2) = bx; //mov
	cmp(edi, ebp);
	if (jl())
		goto loc_49972C;
loc_499768:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499770()
{
	add(ebx, ebx);
	_sub_48A980(); return; //jmp
}
Fn(void) Game::_sub_499778()
{
	push32(ecx);
	push32(esi);
	esi = ebx; //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_499794;
loc_499782:
	add(edx, (int32_t)2);
	bx = to16i(eax); //mov
	add(eax, (int32_t)4);
	inc(ecx);
	to16i(edx-2) = bx; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_499782;
loc_499794:
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499798()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ecx = edx; //mov
	ebp = ebx; //mov
	xor_(edi, edi);
	test(ebx, ebx);
	if (jle())
		goto loc_4997C3;
loc_4997A8:
	ebx = to32i(esi); //mov
	xor_(eax, eax);
	cmp(ebx, (int32_t)0x40000000);
	if (jnb())
		goto loc_4997C8;
loc_4997B4:
	add(ecx, (int32_t)2);
	add(esi, (int32_t)4);
	inc(edi);
	to16i(ecx-2) = ax; //mov
	cmp(edi, ebp);
	if (jl())
		goto loc_4997A8;
loc_4997C3:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4997C8:
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
	test(bx, bx);
	if (jnz())
		goto loc_4997B4;
	eax = 1; //mov
	goto loc_4997B4;
}
Fn(void) Game::_sub_4997F8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	ebp = ebx; //mov
	xor_(edi, edi);
	test(ebx, ebx);
	if (jle())
		goto loc_49983C;
loc_499808:
	ebx = to32i(ecx); //mov
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
	add(esi, (int32_t)2);
	add(ecx, (int32_t)4);
	inc(edi);
	to16i(esi-2) = bx; //mov
	cmp(edi, ebp);
	if (jl())
		goto loc_499808;
loc_49983C:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499844()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	to32i(esp+4) = ebx; //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_4998A0;
loc_499854:
	esi = (uint8_t)to8i(eax+3); //movzx
	edi = (uint8_t)to8i(eax+1); //movzx
	xor_(ebx, ebx);
	sar(esi, (int32_t)4);
	bl = to8i(eax+2); //mov
	sar(edi, (int32_t)4);
	sar(ebx, (int32_t)4);
	to32i(esp+8) = edi; //mov
	shl(esi, (int32_t)0xC);
	shl(ebx, (int32_t)8);
	edi = (uint8_t)to8i(eax); //movzx
	or_(ebx, esi);
	esi = to32i(esp+8); //mov
	sar(edi, (int32_t)4);
	shl(esi, (int32_t)4);
	to32i(esp) = edi; //mov
	or_(ebx, esi);
	esi = to32i(esp); //mov
	add(eax, (int32_t)4);
	or_(esi, ebx);
	inc(ecx);
	to16i(edx) = si; //mov
	esi = to32i(esp+4); //mov
	add(edx, (int32_t)2);
	cmp(ecx, esi);
	if (jl())
		goto loc_499854;
loc_4998A0:
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4998A8()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp) = ebx; //mov
	xor_(ebp, ebp);
	test(ebx, ebx);
	if (jle())
		goto loc_4998F8;
loc_4998BC:
	ecx = to32i(esi); //mov
	add(esi, (int32_t)4);
	ebx = ecx; //mov
	and_(ecx, (int32_t)0xFF000000);
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
	or_(ecx, ebx);
	inc(ebp);
	to32i(edi) = ecx; //mov
	ecx = to32i(esp); //mov
	add(edi, (int32_t)4);
	cmp(ebp, ecx);
	if (jl())
		goto loc_4998BC;
loc_4998F8:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499900()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = to32i(off_4DD044); //mov
	ecx = eax; //mov
	edi = ebx; //mov
	xor_(esi, esi);
	test(ebx, ebx);
	if (jle())
		goto loc_49993C;
loc_499914:
	xor_(eax, eax);
	al = to8i(ecx); //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = (int32_t)(intptr_t)(ebx+ebp); //lea
	bl = to8i(eax+2); //mov
	to8i(edx+2) = bl; //mov
	bl = to8i(eax+1); //mov
	inc(ecx);
	to8i(edx+1) = bl; //mov
	add(edx, (int32_t)3);
	al = to8i(eax); //mov
	inc(esi);
	to8i(edx-3) = al; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_499914;
loc_49993C:
	to32i(off_4DD044) = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499948()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	edi = ebx; //mov
	xor_(ebx, ebx);
	test(edi, edi);
	if (jle())
		goto loc_4999A8;
loc_499958:
	ax = to16i(ecx); //mov
	and_(eax, (int32_t)0xFFFF);
	esi = eax; //mov
	sar(esi, (int32_t)0xB);
	and_(esi, (int32_t)0x1F);
	shl(esi, (int32_t)3);
	add(edx, (int32_t)3);
	to32i(esp) = esi; //mov
	esi = eax; //mov
	and_(eax, (int32_t)0x1F);
	sar(esi, (int32_t)5);
	shl(eax, (int32_t)3);
	and_(esi, (int32_t)0x3F);
	to32i(esp+8) = eax; //mov
	shl(esi, (int32_t)2);
	al = to8i(esp+8); //mov
	to32i(esp+4) = esi; //mov
	to8i(edx-3) = al; //mov
	al = to8i(esp+4); //mov
	add(ecx, (int32_t)2);
	to8i(edx-2) = al; //mov
	al = to8i(esp); //mov
	inc(ebx);
	to8i(edx-1) = al; //mov
	cmp(ebx, edi);
	if (jl())
		goto loc_499958;
loc_4999A8:
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4999B0()
{
	push32(ecx);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4999C8()
{
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)0xC);
	esi = ebx; //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_499A10;
loc_4999D5:
	xor_(ebx, ebx);
	bl = to8i(eax+2); //mov
	to32i(esp) = ebx; //mov
	xor_(ebx, ebx);
	bl = to8i(eax+1); //mov
	to32i(esp+4) = ebx; //mov
	xor_(ebx, ebx);
	bl = to8i(eax); //mov
	to32i(esp+8) = ebx; //mov
	add(edx, (int32_t)3);
	bl = to8i(esp+8); //mov
	to8i(edx-3) = bl; //mov
	bl = to8i(esp+4); //mov
	add(eax, (int32_t)4);
	to8i(edx-2) = bl; //mov
	bl = to8i(esp); //mov
	inc(ecx);
	to8i(edx-1) = bl; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_4999D5;
loc_499A10:
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499A18()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	to32i(esp) = ebx; //mov
	esi = to32i(esp); //mov
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_499A75;
loc_499A2D:
	ax = to16i(ecx); //mov
	ebp = to32i(dword_4DD03C); //mov
	and_(eax, (int32_t)0xFFFF);
	cmp(eax, ebp);
	if (jz())
		goto loc_499A7D;
	edi = eax; //mov
	esi = eax; //mov
	sar(edi, (int32_t)0xA);
	sar(esi, (int32_t)5);
	and_(eax, (int32_t)0x1F);
	and_(edi, (int32_t)0x1F);
	and_(esi, (int32_t)0x1F);
	shl(edi, (int32_t)0x13);
	shl(esi, (int32_t)0xB);
	or_(edi, (int32_t)0xFF000000);
	shl(eax, (int32_t)3);
	or_(esi, edi);
	or_(esi, eax);
	to32i(edx) = esi; //mov
loc_499A67:
	edi = to32i(esp); //mov
	add(ecx, (int32_t)2);
	inc(ebx);
	add(edx, (int32_t)4);
	cmp(ebx, edi);
	if (jl())
		goto loc_499A2D;
loc_499A75:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_499A7D:
	to32i(edx) = 0; //mov
	goto loc_499A67;
}
Fn(void) Game::_sub_499A88()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	to32i(esp+4) = ebx; //mov
	esi = to32i(esp+4); //mov
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_499AEF;
loc_499A9F:
	ax = to16i(ecx); //mov
	ebp = to32i(dword_4DD03C); //mov
	and_(eax, (int32_t)0xFFFF);
	cmp(eax, ebp);
	if (jz())
		goto loc_499AF7;
	edi = eax; //mov
	esi = eax; //mov
	sar(edi, (int32_t)0xB);
	and_(eax, (int32_t)0x1F);
	sar(esi, (int32_t)5);
	shl(eax, (int32_t)3);
	and_(edi, (int32_t)0x1F);
	to32i(esp) = eax; //mov
	eax = edi; //mov
	and_(esi, (int32_t)0x3F);
	shl(eax, (int32_t)0x13);
	shl(esi, (int32_t)0xA);
	or_(eax, (int32_t)0xFF000000);
	or_(eax, esi);
	esi = to32i(esp); //mov
	or_(esi, eax);
	to32i(edx) = esi; //mov
loc_499AE0:
	edi = to32i(esp+4); //mov
	add(ecx, (int32_t)2);
	inc(ebx);
	add(edx, (int32_t)4);
	cmp(ebx, edi);
	if (jl())
		goto loc_499A9F;
loc_499AEF:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_499AF7:
	to32i(edx) = 0; //mov
	goto loc_499AE0;
}
Fn(void) Game::_sub_499B00()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	esi = edx; //mov
	to32i(esp) = ebx; //mov
	xor_(edx, edx);
	to32i(esp+4) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_499B80;
loc_499B18:
	ax = to16i(edi); //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = eax; //mov
	sar(ecx, (int32_t)0xC);
	and_(ecx, (int32_t)0xF);
	ebx = eax; //mov
	edx = ecx; //mov
	sar(ebx, (int32_t)8);
	shl(edx, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	or_(ecx, edx);
	edx = ebx; //mov
	shl(edx, (int32_t)4);
	add(edi, (int32_t)2);
	or_(ebx, edx);
	edx = eax; //mov
	add(esi, (int32_t)4);
	sar(edx, (int32_t)4);
	shl(ecx, (int32_t)0x18);
	and_(edx, (int32_t)0xF);
	shl(ebx, (int32_t)0x10);
	ebp = edx; //mov
	and_(eax, (int32_t)0xF);
	shl(ebp, (int32_t)4);
	or_(ecx, ebx);
	or_(edx, ebp);
	ebp = eax; //mov
	shl(edx, (int32_t)8);
	shl(ebp, (int32_t)4);
	or_(edx, ecx);
	or_(eax, ebp);
	or_(edx, eax);
	eax = to32i(esp+4); //mov
	to32i(esi-4) = edx; //mov
	inc(eax);
	edx = to32i(esp); //mov
	to32i(esp+4) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_499B18;
loc_499B80:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499B88()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = edx; //mov
	to32i(esp+8) = ebx; //mov
	edx = to32i(esp+8); //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jle())
		goto loc_499BF4;
loc_499B9E:
	dx = to16i(eax); //mov
	edi = (uint8_t)to8i(eax+3); //movzx
	and_(edx, (int32_t)0xFFFF);
	esi = edx; //mov
	sar(esi, (int32_t)0xB);
	and_(esi, (int32_t)0x1F);
	to32i(esp) = esi; //mov
	esi = edx; //mov
	sar(esi, (int32_t)5);
	and_(esi, (int32_t)0x3F);
	and_(edx, (int32_t)0x1F);
	to32i(esp+4) = esi; //mov
	esi = (int32_t)(intptr_t)(edx*8+0); //lea
	edx = to32i(esp); //mov
	shl(edi, (int32_t)0x18);
	shl(edx, (int32_t)0x13);
	or_(edx, edi);
	edi = to32i(esp+4); //mov
	add(eax, (int32_t)4);
	shl(edi, (int32_t)0xA);
	add(ecx, (int32_t)4);
	or_(edx, edi);
	inc(ebx);
	or_(edx, esi);
	esi = to32i(esp+8); //mov
	to32i(ecx-4) = edx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_499B9E;
loc_499BF4:
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499BFC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = ebx; //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_499C40;
loc_499C0C:
	xor_(ebx, ebx);
	add(edx, (int32_t)4);
	bl = to8i(eax+2); //mov
	esi = (uint8_t)to8i(eax+1); //movzx
	edi = ebx; //mov
	ebp = (uint8_t)to8i(eax); //movzx
	shl(edi, (int32_t)0x10);
	ebx = esi; //mov
	or_(edi, (int32_t)0xFF000000);
	shl(ebx, (int32_t)8);
	add(eax, (int32_t)3);
	or_(ebx, edi);
	inc(ecx);
	or_(ebx, ebp);
	esi = to32i(esp); //mov
	to32i(edx-4) = ebx; //mov
	cmp(ecx, esi);
	if (jl())
		goto loc_499C0C;
loc_499C40:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_499C48()
{
	shl(ebx, (int32_t)2);
	_sub_48A980(); return; //jmp
}
Fn(void) Game::_sub_499C98()
{
	cmp(eax, (int32_t)0x78);
	if (jnb())
		goto loc_499CAC;
	cmp(eax, (int32_t)0x42);
	if (jnb())
		goto loc_499CD7;
	cmp(eax, (int32_t)0x40);
	if (jb())
		goto loc_499CEF;
	if (ja())
		goto loc_499CBF;
loc_499CA9:
	xor_(eax, eax);
	return;
loc_499CAC:
	if (jbe())
		goto loc_499C73;
	cmp(eax, (int32_t)0x7D);
	if (jnb())
		goto loc_499CC5;
	cmp(eax, (int32_t)0x7A);
	if (jb())
		goto loc_499CEF;
	if (jbe())
		goto loc_499CA9;
	cmp(eax, (int32_t)0x7B);
	if (jnz())
		goto loc_499CEF;
loc_499CBF:
	eax = 1; //mov
	return;
loc_499CC5:
	if (jbe())
		goto loc_499C80;
	cmp(eax, (int32_t)0x7E);
	if (jbe())
		goto loc_499C89;
	cmp(eax, (int32_t)0x7F);
	if (jnz())
		goto loc_499CEF;
loc_499CD1:
	eax = 4; //mov
	return;
loc_499CD7:
	if (jbe())
		goto loc_499CE9;
	cmp(eax, (int32_t)0x43);
	if (jbe())
		goto loc_499CD1;
	cmp(eax, (int32_t)0x6D);
	if (jnz())
		goto loc_499CEF;
	eax = 6; //mov
	return;
loc_499CE9:
	eax = 7; //mov
	return;
loc_499CEF:
	eax = 0xFFFFFFFF; //mov
	return;
loc_499C73:
	eax = 3; //mov
	return;
loc_499C80:
	eax = 5; //mov
	return;
loc_499C89:
	eax = 2; //mov
}
Fn(void) Game::_sub_499CF8()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x200);
	ecx = edx; //mov
	esp -= 4; _sub_49E520(); esp += 4; //call
	edi = (int32_t)(intptr_t)dword_570E60; //mov
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_499D5C;
	esi = to32i(eax); //mov
	and_(esi, (int32_t)0xFF);
	add(eax, (int32_t)0x10);
	cmp(esi, (int32_t)0x2A);
	if (jz())
		goto loc_499D69;
	esi = to32i(edx+2); //mov
	to32i(ecx+0x3FC) = 0; //mov
	edx = to32i(edx); //mov
	edi = ecx; //mov
	and_(edx, (int32_t)0xFF);
	sar(esi, (int32_t)0x10);
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_499D6D;
	cmp(edx, (int32_t)0x29);
	if (jz())
		goto loc_499D7A;
	cmp(edx, (int32_t)0x2D);
	if (jz())
		goto loc_499D85;
	cmp(edx, (int32_t)0x2C);
	if (jz())
		goto loc_499D90;
	cmp(edx, (int32_t)0x22);
	if (jz())
		goto loc_499D9B;
	cmp(edx, (int32_t)0x23);
	if (jz())
		goto loc_499DA8;
loc_499D5C:
	eax = edi; //mov
	add(esp, (int32_t)0x200);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_499D69:
	edi = eax; //mov
	goto loc_499D5C;
loc_499D6D:
	ebx = ecx; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4ADBB4(); esp += 4; //call
	goto loc_499D5C;
loc_499D7A:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499A88(); esp += 4; //call
	goto loc_499D5C;
loc_499D85:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499A18(); esp += 4; //call
	goto loc_499D5C;
loc_499D90:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499B88(); esp += 4; //call
	goto loc_499D5C;
loc_499D9B:
	ebx = ecx; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4ADAC0(); esp += 4; //call
	goto loc_499D5C;
loc_499DA8:
	ebx = 0x100; //mov
	edx = esp; //mov
	esp -= 4; _sub_4A6B94(); esp += 4; //call
	ebx = 0x100; //mov
	eax = esp; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499A18(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x200);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_499DD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x400);
	ecx = edx; //mov
	esp -= 4; _sub_49E520(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_499E9F;
	ebx = to32i(eax); //mov
	and_(ebx, (int32_t)0xFF);
	add(eax, (int32_t)0x10);
	cmp(ebx, (int32_t)0x29);
	if (jz())
		goto loc_499E3F;
	esi = to32i(edx+2); //mov
	to16i(ecx+0x1FE) = 0; //mov
	edx = to32i(edx); //mov
	edi = ecx; //mov
	and_(edx, (int32_t)0xFF);
	sar(esi, (int32_t)0x10);
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_499E43;
	cmp(edx, (int32_t)0x2C);
	if (jz())
		goto loc_499E5B;
	cmp(edx, (int32_t)0x2D);
	if (jz())
		goto loc_499E66;
	cmp(edx, (int32_t)0x2A);
	if (jz())
		goto loc_499E50;
	cmp(edx, (int32_t)0x22);
	if (jz())
		goto loc_499E71;
	cmp(edx, (int32_t)0x23);
	if (jz())
		goto loc_499E89;
loc_499E32:
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_499E3F:
	edi = eax; //mov
	goto loc_499E32;
loc_499E43:
	ebx = esp; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4ADBB4(); esp += 4; //call
	eax = esp; //mov
loc_499E50:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499798(); esp += 4; //call
	goto loc_499E32;
loc_499E5B:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499778(); esp += 4; //call
	goto loc_499E32;
loc_499E66:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499A18(); esp += 4; //call
	goto loc_499E32;
loc_499E71:
	ebx = esp; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4ADAC0(); esp += 4; //call
	eax = esp; //mov
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499798(); esp += 4; //call
	goto loc_499E32;
loc_499E89:
	ebx = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_4A6B94(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_499E9F:
	ebx = 0x100; //mov
	eax = (int32_t)(intptr_t)dword_570E60; //mov
	edx = ecx; //mov
	esp -= 4; _sub_499798(); esp += 4; //call
	edi = ecx; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_499EC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x400);
	esi = edx; //mov
	esp -= 4; _sub_49E520(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_499FBC;
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFF);
	add(eax, (int32_t)0x10);
	cmp(ecx, (int32_t)0x2C);
	if (jz())
		goto loc_499F30;
	ecx = to32i(edx+2); //mov
	to32i(esi+0x3FC) = 0; //mov
	edx = to32i(edx); //mov
	edi = esi; //mov
	and_(edx, (int32_t)0xFF);
	sar(ecx, (int32_t)0x10);
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_499F34;
	cmp(edx, (int32_t)0x29);
	if (jz())
		goto loc_499F4C;
	cmp(edx, (int32_t)0x2D);
	if (jz())
		goto loc_499F62;
	cmp(edx, (int32_t)0x2A);
	if (jz())
		goto loc_499F6D;
	cmp(edx, (int32_t)0x22);
	if (jz())
		goto loc_499F78;
	cmp(edx, (int32_t)0x23);
	if (jz())
		goto loc_499F90;
loc_499F23:
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_499F30:
	edi = eax; //mov
	goto loc_499F23;
loc_499F34:
	ebx = esp; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4ADBB4(); esp += 4; //call
	eax = esp; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	goto loc_499F23;
loc_499F4C:
	edx = esp; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_499A88(); esp += 4; //call
	eax = esp; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	goto loc_499F23;
loc_499F62:
	edx = esp; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_499A18(); esp += 4; //call
	eax = esp; //mov
loc_499F6D:
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	goto loc_499F23;
loc_499F78:
	ebx = esp; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4ADAC0(); esp += 4; //call
	eax = esp; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	goto loc_499F23;
loc_499F90:
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4A6B94(); esp += 4; //call
	edx = esp; //mov
	ebx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_499A88(); esp += 4; //call
	eax = esp; //mov
	ebx = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_499FBC:
	ebx = 0x100; //mov
	eax = (int32_t)(intptr_t)dword_570E60; //mov
	edx = esi; //mov
	esp -= 4; _sub_4998A8(); esp += 4; //call
	edi = esi; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x400);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_499FDC()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	to32i(esp+4) = ebx; //mov
	ebx = to32i(eax); //mov
	and_(ebx, (int32_t)0xFF);
	eax = ebx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = edx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(ecx, eax);
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4DD248[ecx]; //mov
	xor_(ebp, ebp);
	to32i(esp) = eax; //mov
	cmp(edx, eax);
	if (jnz())
		goto loc_49A066;
	cmp(to32i(esp+4), (int32_t)0);
	if (jnz())
		goto loc_49A070;
	eax = ebx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = edx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(eax, ecx);
	ebp = to32i(off_4DD148+eax*4); //mov
loc_49A03E:
	eax = edi; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	ecx = eax; //mov
	eax = esp; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	esi = eax; //mov
	cmp(ecx, (int32_t)8);
	if (jg())
		goto loc_49A066;
	cmp(eax, (int32_t)8);
	if (jg())
		goto loc_49A090;
loc_49A066:
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49A070:
	eax = ebx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = edx; //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(eax, ecx);
	ebp = to32i(off_4DD048+eax*4); //mov
	goto loc_49A03E;
loc_49A090:
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = edi; //mov
	ebx = 1; //mov
	esp -= 4; _sub_499CF8(); esp += 4; //call
	edi = to32i(esp+4); //mov
	to32i(off_4DD044) = eax; //mov
	shl(ebx, cl);
	test(edi, edi);
	if (jz())
		goto loc_49A0E2;
	cmp(esi, (int32_t)0xF);
	if (jz())
		goto loc_49A0CE;
	cmp(esi, (int32_t)0x10);
	if (jnz())
		goto loc_49A066;
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	esp -= 4; _sub_499798(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49A0CE:
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	esp -= 4; _sub_4996BC(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49A0E2:
	cmp(esi, (int32_t)0xF);
	if (jz())
		goto loc_49A104;
	cmp(esi, (int32_t)0x10);
	if (jnz())
		goto loc_49A066;
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	esp -= 4; _sub_4997F8(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_49A104:
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	esp -= 4; _sub_49971C(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49A118()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	edi = eax; //mov
	to32i(esp+0x3C) = edx; //mov
	to32i(esp+0x2C) = ebx; //mov
	to32i(esp+0x30) = ecx; //mov
	esp -= 4; _sub_49E520(); esp += 4; //call
	ecx = 0xA; //mov
	xor_(edx, edx);
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x34) = edx; //mov
	to32i(esp+0x38) = ecx; //mov
loc_49A144:
	cmp(to32i(esp+0x30), (int32_t)0);
	if (jnz())
		goto loc_49A3CF;
	eax = to32i(edi); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_499C98(); esp += 4; //call
	edx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = to32i(esp+0x3C); //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(eax, edx);
	eax = to32i(off_4DD148+eax*4); //mov
loc_49A174:
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(edi); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_499C98(); esp += 4; //call
	edx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = to32i(esp+0x3C); //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(edx, eax);
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4DD248[edx]; //mov
	to32i(esp+0x20) = eax; //mov
	eax = edi; //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	ecx = eax; //mov
	to32i(esp+0x28) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	ebx = eax; //mov
	to32i(esp+0x44) = eax; //mov
	inc(eax);
	and_(al, (int8_t)0xFE);
	edx = eax; //mov
	eax = to32i(edi+2); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x50) = eax; //mov
	eax = to32i(edi+4); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x54) = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_4A96A0(); esp += 4; //call
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esp+0x50); //mov
	imul32(eax, edx);
	add(eax, (int32_t)7);
	and_(al, (int8_t)0xF8);
	ebp = eax; //mov
	sar(ebp, (int32_t)3);
	cmp(ecx, (int32_t)8);
	if (jg())
		goto loc_49A27B;
	cmp(ebx, (int32_t)8);
	if (jle())
		goto loc_49A27B;
	ebx = 1; //mov
	esi = to32i(esp+0x2C); //mov
	shl(ebx, cl);
	test(esi, esi);
	if (jz())
		goto loc_49A3F9;
	xor_(eax, eax);
	test(ebx, ebx);
	if (jle())
		goto loc_49A244;
	xor_(ecx, ecx);
loc_49A228:
	esi = (uint8_t)byte_4DD5E8[eax]; //movzx
	add(ecx, (int32_t)4);
	esi = to32i(dword_570E60+esi*4); //mov
	inc(eax);
	to32i(dword_56EF38+ecx) = esi; //mov
	cmp(eax, ebx);
	if (jl())
		goto loc_49A228;
loc_49A244:
	to32i(off_4DD044) = (int32_t)(intptr_t)word_56EF3C; //mov
loc_49A24E:
	cmp(to32i(esp+0x30), (int32_t)0);
	if (jz())
		goto loc_49A42E;
	eax = to32i(esp+0x44); //mov
	cmp(eax, (int32_t)0xF);
	if (jnz())
		goto loc_49A411;
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = to32i(off_4DD044); //mov
	esp -= 4; _sub_4996BC(); esp += 4; //call
loc_49A275:
	xor_(ecx, ecx);
	to32i(esp+0x2C) = ecx; //mov
loc_49A27B:
	ebx = to32i(esp+0x44); //mov
	push32(ebx);
	esi = to32i(esp+0x2C); //mov
	push32(esi);
	push32(aDtoD);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	esi = to32i(esp+0x54); //mov
	imul32(esi, ebp);
	eax = esp; //mov
	ebx = to32i(dword_4DABE8); //mov
	edx = (int32_t)(intptr_t)(esi+0x14); //lea
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 4; //mov
	ecx = eax; //mov
	to32i(esp+0x40) = eax; //mov
	add(eax, esi);
	edx = 0x43534850; //mov
	add(eax, (int32_t)0x10);
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(esp+0x20); //mov
	to8i(ecx) = 0; //mov
	and_(eax, (int32_t)0xFF);
	edx = to32i(ecx); //mov
	or_(edx, eax);
	eax = to32i(esp+0x50); //mov
	ebx = edx; //mov
	to32i(ecx) = edx; //mov
	and_(ebx, (int32_t)0xFF);
	to16i(ecx+4) = ax; //mov
	eax = to32i(esp+0x54); //mov
	to32i(ecx) = ebx; //mov
	to16i(ecx+6) = ax; //mov
	ax = to16i(edi+8); //mov
	to16i(ecx+8) = ax; //mov
	ax = to16i(edi+0xA); //mov
	dx = to16i(ecx+0xC); //mov
	to16i(ecx+0xA) = ax; //mov
	and_(edx, (int32_t)0xFFFFF000);
	eax = to32i(edi+0xC); //mov
	to16i(ecx+0xC) = dx; //mov
	and_(eax, (int32_t)0xFFF);
	esi = to32i(ecx+0xC); //mov
	add(ecx, (int32_t)0x10);
	or_(esi, eax);
	to32i(ecx-4) = esi; //mov
	bx = to16i(ecx-2); //mov
	esi = (int32_t)(intptr_t)(edi+0x10); //lea
	and_(ebx, (int32_t)0xFFFFF000);
	eax = to32i(edi+0xC); //mov
	to16i(ecx-2) = bx; //mov
	and_(eax, (int32_t)0xFFF0000);
	edx = to32i(ecx-4); //mov
	xor_(edi, edi);
	or_(edx, eax);
	ebx = to32i(esp+0x54); //mov
	to32i(ecx-4) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_49A36D;
loc_49A350:
	ebx = to32i(esp+0x50); //mov
	edx = ecx; //mov
	eax = esi; //mov
	call(to32i(esp+0x4C));
	inc(edi);
	eax = to32i(esp+0x48); //mov
	edx = to32i(esp+0x54); //mov
	add(ecx, ebp);
	add(esi, eax);
	cmp(edi, edx);
	if (jl())
		goto loc_49A350;
loc_49A36D:
	imul32(ebp, to32i(esp+0x54));
	eax = to32i(esp+0x40); //mov
	add(eax, ebp);
	ecx = 4; //mov
	add(eax, (int32_t)0x10);
	ebx = to32i(esp+0x34); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	test(ebx, ebx);
	if (jz())
		goto loc_49A39E;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_49A39E:
	eax = to32i(esp+0x40); //mov
	to32i(esp+0x34) = eax; //mov
	edi = eax; //mov
	eax = to32i(eax); //mov
	esi = to32i(esp+0x3C); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, esi);
	if (jz())
		goto loc_49A3C6;
	ebp = to32i(esp+0x38); //mov
	dec(ebp);
	to32i(esp+0x38) = ebp; //mov
	if (jnz())
		goto loc_49A144;
loc_49A3C6:
	eax = edi; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_49A3CF:
	eax = to32i(edi); //mov
	and_(eax, (int32_t)0xFF);
	esp -= 4; _sub_499C98(); esp += 4; //call
	edx = (int32_t)(intptr_t)(eax*8+0); //lea
	eax = to32i(esp+0x3C); //mov
	esp -= 4; _sub_499C98(); esp += 4; //call
	add(eax, edx);
	eax = to32i(off_4DD048+eax*4); //mov
	goto loc_49A174;
loc_49A3F9:
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = to32i(esp+0x24); //mov
	esp -= 4; _sub_499CF8(); esp += 4; //call
	to32i(off_4DD044) = eax; //mov
	goto loc_49A24E;
loc_49A411:
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_49A275;
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = to32i(off_4DD044); //mov
	esp -= 4; _sub_499798(); esp += 4; //call
	goto loc_49A275;
loc_49A42E:
	ecx = to32i(esp+0x44); //mov
	cmp(ecx, (int32_t)0xF);
	if (jz())
		goto loc_49A454;
	cmp(ecx, (int32_t)0x10);
	if (jnz())
		goto loc_49A275;
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = to32i(off_4DD044); //mov
	esp -= 4; _sub_4997F8(); esp += 4; //call
	goto loc_49A275;
loc_49A454:
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	eax = to32i(off_4DD044); //mov
	esp -= 4; _sub_49971C(); esp += 4; //call
	goto loc_49A275;
}
Fn(void) Game::_sub_49A4A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x224);
	esi = to32i(esp+0x234); //mov
	to32i(esp+0x210) = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x20C) = ebx; //mov
	to32i(esp+0x220) = ecx; //mov
	edi = to32i(esp+0x210); //mov
	xor_(edx, edx);
	eax = to32i(eax+2); //mov
	to32i(esp+0x21C) = edx; //mov
	sar(eax, (int32_t)0x10);
	edi = to32i(edi+4); //mov
	to32i(esp+0x208) = eax; //mov
	sar(edi, (int32_t)0x10);
	test(ecx, ecx);
	if (jz())
		goto loc_49A5AF;
	test(esi, esi);
	if (jz())
		goto loc_49A5AF;
	eax = to32i(dword_4DABA8); //mov
	to32i(esp+0x204) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_49A522;
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jz())
		goto loc_49A5BB;
	to32i(esp+0x21C) = (int32_t)(intptr_t)sub_4A9240; //mov
loc_49A522:
	edx = to32i(esp+0x210); //mov
	xor_(eax, eax);
	edx = to32i(edx); //mov
	al = to8i(byte_4DB25D); //mov
	and_(edx, (int32_t)0xFF);
	cmp(edx, eax);
	if (jz())
		goto loc_49A588;
	eax = to32i(esp+0x210); //mov
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0x7F);
	al = (int32_t)(intptr_t)byte_4DD7B0[eax]; //mov
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_49A5CB;
	cmp(to8i(byte_4DB25C), (int8_t)0x10);
	if (jnz())
		goto loc_49A5CB;
	edx = esp; //mov
	eax = to32i(esp+0x210); //mov
	ebx = 0x200; //mov
	esp -= 4; _sub_499DD0(); esp += 4; //call
	edx = (int32_t)(intptr_t)word_56EF3C; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	to32i(esp+0x21C) = (int32_t)(intptr_t)sub_4A90FE; //mov
loc_49A588:
	cmp(ebp, to32i(dword_4DB254));
	if (jl())
		goto loc_49A5F3;
loc_49A590:
	edx = to32i(esp+0x204); //mov
	test(edx, edx);
	if (jz())
		goto loc_49A5A2;
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_49A5A2:
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jnz())
		goto loc_49A831;
loc_49A5AF:
	add(esp, (int32_t)0x224);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_49A5BB:
	to32i(esp+0x21C) = (int32_t)(intptr_t)sub_4A951A; //mov
	goto loc_49A522;
loc_49A5CB:
	eax = to32i(esp+0x210); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	dl = to8i(byte_4DB25D); //mov
	esp -= 4; _sub_49A118(); esp += 4; //call
	to32i(esp+0x204) = eax; //mov
	to32i(esp+0x210) = eax; //mov
	goto loc_49A588;
loc_49A5F3:
	eax = to32i(esp+0x20C); //mov
	cmp(eax, to32i(dword_4DB258));
	if (jge())
		goto loc_49A590;
	ebx = to32i(esp+0x220); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_49A7FA;
	eax = ebx; //mov
loc_49A613:
	edx = to32i(dword_4DB24C); //mov
	add(eax, ebp);
	cmp(eax, edx);
	if (jle())
		goto loc_49A590;
	test(esi, esi);
	if (jle())
		goto loc_49A803;
	eax = esi; //mov
loc_49A62D:
	ecx = to32i(esp+0x20C); //mov
	ebx = to32i(dword_4DB250); //mov
	add(eax, ecx);
	cmp(eax, ebx);
	if (jle())
		goto loc_49A590;
	eax = to32i(esp+0x210); //mov
	edx = to32i(esp+0x208); //mov
	ecx = to32i(esp+0x220); //mov
	esp -= 4; _sub_4A96A0(); esp += 4; //call
	shl(edx, (int32_t)0x10);
	to32i(esp+0x214) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	shl(edi, (int32_t)0x10);
	ecx = eax; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	to32i(esp+0x218) = eax; //mov
	sub(eax, edx);
	sar(eax, (int32_t)1);
	test(esi, esi);
	if (jl())
		goto loc_49A80C;
	edi = eax; //mov
loc_49A697:
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = to32i(esp+0x220); //mov
	edx = eax; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_49A815;
loc_49A6B3:
	eax = to32i(esp+0x20C); //mov
	ebx = to32i(dword_4DB250); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_49A6E7;
	eax = ebx; //mov
	sub(eax, to32i(esp+0x20C));
	ebx = to32i(esp+0x218); //mov
	imul32(ebx, eax);
	sub(esi, eax);
	eax = to32i(dword_4DB250); //mov
	add(edi, ebx);
	to32i(esp+0x20C) = eax; //mov
loc_49A6E7:
	eax = to32i(esp+0x20C); //mov
	ebx = to32i(dword_4DB258); //mov
	add(eax, esi);
	cmp(eax, ebx);
	if (jle())
		goto loc_49A705;
	eax = to32i(esp+0x20C); //mov
	esi = ebx; //mov
	sub(esi, eax);
loc_49A705:
	ebx = to32i(dword_4DB24C); //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_49A723;
	eax = ebx; //mov
	sub(eax, ebp);
	ebp = ecx; //mov
	imul32(ebp, eax);
	add(edx, ebp);
	sub(to32i(esp+0x220), eax);
	ebp = ebx; //mov
loc_49A723:
	eax = to32i(esp+0x220); //mov
	ebx = to32i(dword_4DB254); //mov
	add(eax, ebp);
	cmp(eax, ebx);
	if (jle())
		goto loc_49A741;
	eax = ebx; //mov
	sub(eax, ebp);
	to32i(esp+0x220) = eax; //mov
loc_49A741:
	eax = to32i(esp+0x20C); //mov
	shl(eax, (int32_t)2);
	to32i(esp+0x200) = eax; //mov
	ebx = to32i(esp+0x200); //mov
	eax = to32i(dword_4DB26C); //mov
	shl(ebp, (int32_t)2);
	add(ebx, eax);
	eax = to32i(dword_4DB270); //mov
	add(eax, ebp);
	ebp = to32i(ebx); //mov
	ebx = to32i(eax); //mov
	eax = to32i(esp+0x21C); //mov
	add(ebp, ebx);
	test(eax, eax);
	if (jnz())
		goto loc_49A786;
	to32i(esp+0x21C) = (int32_t)(intptr_t)sub_4A8F65; //mov
loc_49A786:
	eax = to32i(esp+0x220); //mov
	push32(eax);
	ebx = to32i(esp+0x20C); //mov
	push32(ebx);
	push32(0);
	eax = (int32_t)(intptr_t)dword_5B4F64; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4A9700(); esp += 4; //call
	eax = to32i(esp+0x210); //mov
	edx = (int32_t)(intptr_t)dword_5B4F64; //mov
	add(eax, (int32_t)0x10);
	esp -= 4; _sub_4A8C8C(); esp += 4; //call
loc_49A7BA:
	dec(esi);
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_49A590;
	eax = edi; //mov
	edx = to32i(esp+0x214); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, edx);
	ecx = to32i(esp+0x220); //mov
	push32(ecx);
	push32(eax);
	push32(ebp);
	call(to32i(esp+0x228));
	add(esp, (int32_t)0xC);
	ebx = to32i(dword_4DB268); //mov
	eax = to32i(esp+0x218); //mov
	add(ebp, ebx);
	add(edi, eax);
	goto loc_49A7BA;
loc_49A7FA:
	eax = ebx; //mov
	neg(eax);
	goto loc_49A613;
loc_49A803:
	eax = esi; //mov
	neg(eax);
	goto loc_49A62D;
loc_49A80C:
	neg(esi);
	add(edi, eax);
	goto loc_49A697;
loc_49A815:
	eax = ebx; //mov
	neg(eax);
	to32i(esp+0x220) = eax; //mov
	eax = to32i(esp+0x208); //mov
	shl(eax, (int32_t)0x10);
	add(edx, eax);
	goto loc_49A6B3;
loc_49A831:
	add(esp, (int32_t)0x224);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_49A978()
{
	push32(ecx);
	push32(esi);
	to32i(dword_4DD288) = ebx; //mov
	esi = eax; //mov
	push32(edi);
	push32(ebp);
loc_49A984:
	eax = to32i(esi); //mov
	xor_(ebx, ebx);
	bl = al; //mov
	edi = eax; //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF00);
	shr(eax, (int32_t)8);
	ebp = to32i(dword_56E7C8+ebx*4); //mov
	edi = to32i(dword_56E3C8+edi*4); //mov
	add(esi, (int32_t)4);
	eax = to32i(dword_56E5C8+eax*4); //mov
	add(edi, ebp);
	add(ebp, eax);
	add(eax, edi);
	ecx = eax; //mov
	edi = eax; //mov
	shr(eax, (int32_t)0x17);
	and_(ecx, (int32_t)0xFF800);
	shr(ecx, (int32_t)0xB);
	and_(edi, (int32_t)0x1FF);
	eax = to32i(dword_56DF00+eax*4); //mov
	bl = to8i(esi-2); //mov
	ecx = to32i(dword_56DAE8+ecx*4); //mov
	edi = to32i(dword_56D560+edi*4); //mov
	add(eax, ecx);
	ebx = to32i(dword_56E3C8+ebx*4); //mov
	add(eax, edi);
	add(ebx, ebp);
	ebp = eax; //mov
	eax = ebx; //mov
	edi = ebx; //mov
	and_(ebx, (int32_t)0xFF800);
	shr(eax, (int32_t)0x17);
	and_(edi, (int32_t)0x1FF);
	shr(ebx, (int32_t)0xB);
	ecx = to32i(dword_4DD288); //mov
	eax = to32i(dword_56DF00+eax*4); //mov
	edi = to32i(dword_56D560+edi*4); //mov
	ebx = to32i(dword_56DAE8+ebx*4); //mov
	add(eax, edi);
	add(eax, ebx);
	and_(ebp, (int32_t)0xFFFF);
	and_(eax, (int32_t)0xFFFF0000);
	or_(eax, ebp);
	dec(ecx);
	to32i(dword_4DD288) = ecx; //mov
	to32i(edx) = eax; //mov
	edx = (int32_t)(intptr_t)(edx+4); //lea
	if (jnz())
		goto loc_49A984;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49AA4B()
{
	push32(ecx);
	push32(esi);
	to32i(dword_4DD288) = ebx; //mov
	esi = eax; //mov
	push32(edi);
	push32(ebp);
loc_49AA57:
	eax = to32i(esi); //mov
	xor_(ebx, ebx);
	bl = al; //mov
	edi = eax; //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF00);
	shr(eax, (int32_t)8);
	ebp = to32i(dword_56E7C8+ebx*4); //mov
	edi = to32i(dword_56E3C8+edi*4); //mov
	add(esi, (int32_t)4);
	eax = to32i(dword_56E5C8+eax*4); //mov
	add(edi, ebp);
	add(ebp, eax);
	add(eax, edi);
	ecx = eax; //mov
	edi = eax; //mov
	shr(eax, (int32_t)0x17);
	and_(ecx, (int32_t)0xFF800);
	shr(ecx, (int32_t)0xB);
	and_(edi, (int32_t)0x1FF);
	eax = to32i(dword_56DF00+eax*4); //mov
	bl = to8i(esi-2); //mov
	ecx = to32i(dword_56DAE8+ecx*4); //mov
	edi = to32i(dword_56D560+edi*4); //mov
	add(eax, ecx);
	ebx = to32i(dword_56E3C8+ebx*4); //mov
	add(eax, edi);
	add(ebx, ebp);
	to32i(edx) = eax; //mov
	eax = ebx; //mov
	edi = ebx; //mov
	and_(ebx, (int32_t)0xFF800);
	shr(eax, (int32_t)0x17);
	and_(edi, (int32_t)0x1FF);
	shr(ebx, (int32_t)0xB);
	ecx = to32i(dword_4DD288); //mov
	eax = to32i(dword_56DF00+eax*4); //mov
	edi = to32i(dword_56D560+edi*4); //mov
	ebx = to32i(dword_56DAE8+ebx*4); //mov
	add(eax, edi);
	add(eax, ebx);
	dec(ecx);
	to32i(dword_4DD288) = ecx; //mov
	to32i(edx+4) = eax; //mov
	edx = (int32_t)(intptr_t)(edx+8); //lea
	if (jnz())
		goto loc_49AA57;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49AB12()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	to32i(dword_4DD288) = ecx; //mov
	push32(ebp);
loc_49AB1F:
	eax = to32i(esi); //mov
	edx = to32i(edi); //mov
	add(eax, edx);
	add(esi, (int32_t)4);
	shr(eax, (int32_t)1);
	add(edi, (int32_t)4);
	and_(eax, (int32_t)0x7F7F7F7F);
	xor_(edx, edx);
	ecx = eax; //mov
	ebp = eax; //mov
	shr(ecx, (int32_t)8);
	dl = al; //mov
	shr(ebp, (int32_t)0x10);
	and_(ecx, (int32_t)0xFF);
	shr(eax, (int32_t)0x18);
	edx = to32i(dword_56E7C8+edx*4); //mov
	and_(ebp, (int32_t)0xFF);
	ecx = to32i(dword_56E5C8+ecx*4); //mov
	add(edx, ecx);
	eax = to32i(dword_56E3C8+eax*4); //mov
	add(eax, edx);
	ebp = to32i(dword_56E3C8+ebp*4); //mov
	add(ebp, edx);
	edx = eax; //mov
	shr(edx, (int32_t)0x17);
	ecx = eax; //mov
	shr(ecx, (int32_t)0xB);
	and_(eax, (int32_t)0x1FF);
	edx = to32i(dword_56DF00+edx*4); //mov
	and_(ecx, (int32_t)0x1FF);
	eax = to32i(dword_56D560+eax*4); //mov
	add(ebx, (int32_t)8);
	ecx = to32i(dword_56DAE8+ecx*4); //mov
	add(eax, edx);
	add(eax, ecx);
	edx = ebp; //mov
	shr(edx, (int32_t)0x17);
	to32i(ebx-8) = eax; //mov
	eax = ebp; //mov
	and_(ebp, (int32_t)0x1FF);
	shr(eax, (int32_t)0xB);
	edx = to32i(dword_56DF00+edx*4); //mov
	and_(eax, (int32_t)0x1FF);
	ebp = to32i(dword_56D560+ebp*4); //mov
	add(edx, ebp);
	ecx = to32i(dword_4DD288); //mov
	eax = to32i(dword_56DAE8+eax*4); //mov
	add(eax, edx);
	dec(ecx);
	to32i(dword_4DD288) = ecx; //mov
	to32i(ebx-4) = eax; //mov
	if (jnz())
		goto loc_49AB1F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_49ABEE()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
loc_49ABF2:
	esi = to32i(eax); //mov
	edi = to32i(eax+4); //mov
	ecx = esi; //mov
	ebp = edi; //mov
	shl(ecx, (int32_t)8);
	and_(edi, (int32_t)0x7F7F);
	shr(ebp, (int32_t)8);
	and_(ecx, (int32_t)0x7F000000);
	and_(ebp, (int32_t)0x7F0000);
	or_(edi, ecx);
	or_(edi, ebp);
	add(eax, (int32_t)4);
	add(edi, esi);
	add(edx, (int32_t)8);
	shr(edi, (int32_t)1);
	and_(esi, (int32_t)0x7F007F7F);
	ebp = edi; //mov
	and_(edi, (int32_t)0x7F7F7F);
	shr(ebp, (int32_t)8);
	or_(edi, ecx);
	and_(ebp, (int32_t)0x7F0000);
	to32i(edx-4) = edi; //mov
	or_(esi, ebp);
	dec(ebx);
	to32i(edx-8) = esi; //mov
	if (jnz())
		goto loc_49ABF2;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_49AC4A()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	to32i(dword_4DD288) = ecx; //mov
	esi = to32i(eax); //mov
	edi = to32i(edx); //mov
	add(edi, esi);
	add(eax, (int32_t)4);
	shr(edi, (int32_t)1);
	add(edx, (int32_t)4);
	and_(edi, (int32_t)0x7F7F7F7F);
	to32i(dword_4DD28C) = edi; //mov
loc_49AC6D:
	esi = to32i(eax); //mov
	edi = to32i(edx); //mov
	add(edi, esi);
	esi = to32i(dword_4DD28C); //mov
	shr(edi, (int32_t)1);
	add(ebx, (int32_t)8);
	and_(edi, (int32_t)0x7F7F7F7F);
	ecx = esi; //mov
	to32i(dword_4DD28C) = edi; //mov
	ebp = edi; //mov
	shl(ecx, (int32_t)8);
	and_(edi, (int32_t)0x7F7F);
	shr(ebp, (int32_t)8);
	and_(ecx, (int32_t)0x7F000000);
	and_(ebp, (int32_t)0x7F0000);
	or_(edi, ecx);
	or_(edi, ebp);
	add(eax, (int32_t)4);
	add(edi, esi);
	add(edx, (int32_t)4);
	shr(edi, (int32_t)1);
	and_(esi, (int32_t)0x7F007F7F);
	ebp = edi; //mov
	and_(edi, (int32_t)0x7F7F7F);
	shr(ebp, (int32_t)8);
	or_(edi, ecx);
	and_(ebp, (int32_t)0x7F0000);
	to32i(ebx-4) = edi; //mov
	or_(esi, ebp);
	ecx = to32i(dword_4DD288); //mov
	to32i(ebx-8) = esi; //mov
	dec(ecx);
	to32i(dword_4DD288) = ecx; //mov
	if (jnz())
		goto loc_49AC6D;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_atexit_()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = WrapperAtExit(to32i(esp + 0)); esp += 4;
	pop32(edx);
	pop32(ecx);
}
