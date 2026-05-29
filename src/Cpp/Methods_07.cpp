#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_45F980()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	to32i(dword_512AC0) = 1; //mov
	edx = to32i(dword_4D5A2C); //mov
	eax = edx; //mov
	xor_(ecx, ecx);
	shl(eax, (int32_t)6);
	to32i(dword_512AB4) = ecx; //mov
	add(edx, eax);
	to32i(dword_512AA8) = ecx; //mov
	add(edx, edx);
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(dword_4D5A30); //mov
	to32i(dword_512AA0) = eax; //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	add(edx, edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = to32i(dword_5121F8); //mov
	to32i(dword_512AA4) = eax; //mov
	test(esi, esi);
	if (jnz())
		goto loc_45FA39;
	edi = to32i(dword_512208); //mov
	test(edi, edi);
	if (jnz())
		goto loc_45FA2B;
loc_45F9EC:
	xor_(edx, edx);
loc_45F9EE:
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jnz())
		goto loc_45F9F9;
	xor_(edx, edx);
loc_45F9F9:
	ebx = to32i(dword_512208); //mov
	xor_(ecx, ecx);
	cmp(ebx, (int32_t)1);
	if (jle())
		goto loc_45FA40;
	eax = 1; //mov
loc_45FA0B:
	to32i(dword_512AB0) = eax; //mov
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_45FA44;
	to32i(dword_512AB8) = ecx; //mov
	to32i(dword_512ABC) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FA2B:
	cmp(edi, (int32_t)1);
	if (jz())
		goto loc_45F9EC;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jz())
		goto loc_45F9EC;
loc_45FA39:
	edx = 1; //mov
	goto loc_45F9EE;
loc_45FA40:
	xor_(eax, eax);
	goto loc_45FA0B;
loc_45FA44:
	xor_(esi, esi);
	ecx = 1; //mov
	to32i(dword_512AA0) = esi; //mov
	to32i(dword_512AB8) = ecx; //mov
	to32i(dword_512ABC) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45FA70()
{
	_sub_42EDB0(); return; //jmp
}
Fn(void) Game::_sub_45FA80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	eax = to32i(dword_512AB4); //mov
	cmp(eax, (int32_t)1);
	if (jnb())
		goto loc_45FAF8;
	test(eax, eax);
	if (jz())
		goto loc_45FC56;
loc_45FA97:
	cmp(to8i(byte_4D76B4), (int8_t)0);
	if (jnz())
		goto loc_45FF41;
	eax = to32i(dword_4D5A2C); //mov
	test(eax, eax);
	if (jz())
		goto loc_45FF41;
	edx = eax; //mov
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_4764B0(); esp += 4; //call
	cmp(to32i(dword_51221C), (int32_t)0);
	if (jz())
		goto loc_45FAE9;
	cmp(to8i(byte_4D96A4), (int8_t)0);
	if (jnz())
		goto loc_45FAE9;
	xor_(eax, eax);
	al = to8i(byte_4D5A05); //mov
	esp -= 4; _sub_49DF4C(); esp += 4; //call
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_4D5A04); //mov
	esp -= 4; _sub_49DF64(); esp += 4; //call
loc_45FAE9:
	to8i(byte_4D76B4) = 1; //mov
loc_45FAF0:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FAF8:
	if (jbe())
		goto loc_45FB21;
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_45FA97;
	edx = 1; //mov
	eax = 6; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FBCA;
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FB21:
	edx = 1; //mov
	eax = 6; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FB3F;
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FB3F:
	edx = 0xC; //mov
	eax = 4; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FB5E;
	xor_(to8i(dword_512AA8), (int8_t)1);
	goto loc_45FA97;
loc_45FB5E:
	edx = 0xC; //mov
	eax = 3; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FB7D;
	xor_(to8i(dword_512AA8), (int8_t)1);
	goto loc_45FA97;
loc_45FB7D:
	edx = 1; //mov
	eax = 5; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FA97;
	cmp(to32i(dword_512AA8), (int32_t)0);
	if (jz())
		goto loc_45FBBF;
	edx = 4; //mov
	xor_(eax, eax);
	ebp = 1; //mov
	to32i(dword_512AB4) = eax; //mov
	to32i(dword_512AA8) = edx; //mov
	to32i(dword_512AC0) = ebp; //mov
	goto loc_45FA97;
loc_45FBBF:
	eax = 3; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FBCA:
	edx = 0xC; //mov
	eax = 4; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FBE9;
	xor_(to8i(dword_512AA8), (int8_t)1);
	goto loc_45FA97;
loc_45FBE9:
	edx = 0xC; //mov
	eax = 3; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FC08;
	xor_(to8i(dword_512AA8), (int8_t)1);
	goto loc_45FA97;
loc_45FC08:
	edx = 1; //mov
	eax = 5; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FA97;
	cmp(to32i(dword_512AA8), (int32_t)0);
	if (jz())
		goto loc_45FC4B;
	esi = 5; //mov
	xor_(ebx, ebx);
	ecx = 1; //mov
	to32i(dword_512AB4) = ebx; //mov
	to32i(dword_512AA8) = esi; //mov
	to32i(dword_512AC0) = ecx; //mov
	goto loc_45FA97;
loc_45FC4B:
	eax = 4; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FC56:
	edx = 1; //mov
	eax = 6; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FC74;
loc_45FC69:
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FC74:
	edx = 0xC; //mov
	eax = 1; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FCDD;
	edx = to32i(dword_512AB0); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(ecx, edx);
	edx = to32i(dword_512AB8); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(ecx, (int32_t)3);
	shl(eax, (int32_t)2);
	edx = to32i(dword_512ABC); //mov
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	add(eax, eax);
	ebp = to32i(dword_512AA8); //mov
	add(eax, ecx);
	add(eax, ebp);
	al = (int32_t)(intptr_t)byte_4D7650[eax]; //mov
	and_(eax, (int32_t)0xFF);
	to32i(dword_512AA8) = eax; //mov
	goto loc_45FA97;
loc_45FCDD:
	edx = 0xC; //mov
	eax = 2; //mov
	esp -= 4; _sub_45B910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FD48;
	push32(edi);
	edx = to32i(dword_512AB0); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(ecx, edx);
	edx = to32i(dword_512AB8); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(ecx, (int32_t)3);
	shl(eax, (int32_t)2);
	edx = to32i(dword_512ABC); //mov
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	add(eax, eax);
	edi = to32i(dword_512AA8); //mov
	add(eax, ecx);
	add(eax, edi);
	al = (int32_t)(intptr_t)byte_4D7680[eax]; //mov
	and_(eax, (int32_t)0xFF);
	to32i(dword_512AA8) = eax; //mov
	pop32(edi);
	goto loc_45FA97;
loc_45FD48:
	eax = 3; //mov
	xor_(edx, edx);
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FE02;
	edx = to32i(dword_512AA8); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_45FDAF;
loc_45FD67:
	ecx = to32i(dword_512AA8); //mov
	sub(ecx, (int32_t)2);
	if (jnz())
		goto loc_45FDBD;
	esi = to32i(dword_4D5A2C); //mov
	test(esi, esi);
	if (jle())
		goto loc_45FD88;
	eax = (int32_t)(intptr_t)(esi-3); //lea
	test(eax, eax);
	if (jle())
		goto loc_45FDB9;
loc_45FD83:
	to32i(dword_4D5A2C) = eax; //mov
loc_45FD88:
	edx = to32i(dword_4D5A2C); //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	add(edx, edx);
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_512AA0+ecx*4) = eax; //mov
	goto loc_45FA97;
loc_45FDAF:
	cmp(edx, (int32_t)3);
	if (jz())
		goto loc_45FD67;
	goto loc_45FA97;
loc_45FDB9:
	xor_(eax, eax);
	goto loc_45FD83;
loc_45FDBD:
	ebx = to32i(dword_4D5A30); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_45FDD3;
	eax = (int32_t)(intptr_t)(ebx-3); //lea
	test(eax, eax);
	if (jle())
		goto loc_45FDFE;
loc_45FDCE:
	to32i(dword_4D5A30) = eax; //mov
loc_45FDD3:
	eax = to32i(dword_4D5A30); //mov
	to32i(dword_4D5A34) = eax; //mov
	edx = eax; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	add(edx, edx);
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_512AA0+ecx*4) = eax; //mov
	goto loc_45FA97;
loc_45FDFE:
	xor_(eax, eax);
	goto loc_45FDCE;
loc_45FE02:
	eax = 4; //mov
	xor_(edx, edx);
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FEC1;
	esi = to32i(dword_512AA8); //mov
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_45FE6F;
loc_45FE21:
	ecx = to32i(dword_512AA8); //mov
	sub(ecx, (int32_t)2);
	if (jnz())
		goto loc_45FE79;
	eax = to32i(dword_4D5A2C); //mov
	cmp(eax, (int32_t)0x7F);
	if (jge())
		goto loc_45FE48;
	add(eax, (int32_t)3);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_45FE43;
	eax = 0x7F; //mov
loc_45FE43:
	to32i(dword_4D5A2C) = eax; //mov
loc_45FE48:
	edx = to32i(dword_4D5A2C); //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	add(edx, edx);
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_512AA0+ecx*4) = eax; //mov
	goto loc_45FA97;
loc_45FE6F:
	cmp(esi, (int32_t)3);
	if (jz())
		goto loc_45FE21;
	goto loc_45FA97;
loc_45FE79:
	ebp = to32i(dword_4D5A30); //mov
	cmp(ebp, (int32_t)0x7F);
	if (jge())
		goto loc_45FE96;
	eax = (int32_t)(intptr_t)(ebp+3); //lea
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_45FE91;
	eax = 0x7F; //mov
loc_45FE91:
	to32i(dword_4D5A30) = eax; //mov
loc_45FE96:
	eax = to32i(dword_4D5A30); //mov
	to32i(dword_4D5A34) = eax; //mov
	edx = eax; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	add(edx, edx);
	ebx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_512AA0+ecx*4) = eax; //mov
	goto loc_45FA97;
loc_45FEC1:
	edx = 1; //mov
	eax = 5; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45FA97;
	ecx = to32i(dword_512AA8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45FC69;
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_45FF13;
	cmp(ecx, (int32_t)4);
	if (jnz())
		goto loc_45FF1E;
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jge())
		goto loc_45FBBF;
	ecx = 1; //mov
	to32i(dword_512AB4) = ecx; //mov
	to32i(dword_512AA8) = ecx; //mov
	goto loc_45FA97;
loc_45FF13:
	eax = 2; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45FF1E:
	cmp(ecx, (int32_t)5);
	if (jnz())
		goto loc_45FA97;
	eax = 2; //mov
	ebp = 1; //mov
	to32i(dword_512AB4) = eax; //mov
	to32i(dword_512AA8) = ebp; //mov
	goto loc_45FA97;
loc_45FF41:
	cmp(to8i(byte_4D76B4), (int8_t)0);
	if (jz())
		goto loc_45FAF0;
	cmp(to32i(dword_4D5A2C), (int32_t)0);
	if (jnz())
		goto loc_45FAF0;
	xor_(ch, ch);
	esp -= 4; _sub_4762E0(); esp += 4; //call
	to8i(byte_4D76B4) = ch; //mov
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45FF80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x24);
	ecx = eax; //mov
	ebx = to32i(eax+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(eax, ebx);
	esi = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	add(esi, eax);
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ecx+0x9C); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x18); //mov
	sub(eax, edx);
	ebx = to32i(esp+0x10); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	sub(eax, ebx);
	esi = to32i(esp+0x14); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x20); //mov
	sub(eax, esi);
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(ecx+0x118); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x11C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x120); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	add(esp, (int32_t)0x24);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_460030()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ebp = eax; //mov
	edx = to32i(eax+0xF0); //mov
	push32(edx);
	ecx = to32i(eax+0xEC); //mov
	push32(ecx);
	ebx = to32i(eax+0xE8); //mov
	push32(ebx);
	esi = to32i(eax+0xB0); //mov
	push32(esi);
	edi = to32i(eax+0xAC); //mov
	push32(edi);
	eax = to32i(eax+0xA8); //mov
	push32(eax);
	edx = to32i(ebp+0xA4); //mov
	push32(edx);
	ecx = to32i(ebp+0xA0); //mov
	push32(ecx);
	ebx = to32i(ebp+0x9C); //mov
	xor_(eax, eax);
	push32(ebx);
	ax = to16i(ebp+0x14C); //mov
	push32(eax);
	xor_(eax, eax);
	al = to8i(ebp+0x8C); //mov
	push32(eax);
	esi = to32i(ebp+0); //mov
	push32(esi);
	push32(aNewtonAtlog1DD);
	push32(1);
	ah = to8i(ebp+0x8D); //mov
	add(esp, (int32_t)0x38);
	test(ah, ah);
	if (jz())
		goto loc_4600E2;
	cmp(to8i(ebp+0x8C), (int8_t)0);
	if (jz())
		goto loc_460101;
	test(to8i(ebp+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_4600EC;
	eax = to32i(ebp+0x140); //mov
loc_4600C2:
	to32i(ebp+0xA0) = eax; //mov
	to16i(ebp+0x14C) = 0; //mov
	to8i(ebp+0x8E) = 0; //mov
	to32i(ebp+0xAC) = 0; //mov
loc_4600E2:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4600EC:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = ebp; //mov
	esp -= 4; _sub_462EA0(); esp += 4; //call
	edx = to32i(ebp+0x10C); //mov
	add(eax, edx);
	goto loc_4600C2;
loc_460101:
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = 3; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	ecx = to32i(ebp+0); //mov
	push32(eax);
	ebx = to32i(ebp+0x88); //mov
	eax = 1; //mov
	esp -= 4; _sub_471620(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4600E2;
	test(to8i(ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_46044D;
	eax = to32i(ebp+0x14); //mov
	esp -= 4; _sub_460930(); esp += 4; //call
	edx = to32i(ebp+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_460151:
	to32i(esp+0x24) = eax; //mov
	to32i(ebp+0x150) = 0x640000; //mov
	imul32(eax, to32i(esp+0x1C), 0x7599);
	edx = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xAC); //mov
	sub(edx, eax);
	eax = ebp; //mov
	to32i(ebp+0xAC) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_462EA0(); esp += 4; //call
	esi = eax; //mov
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_460960(); esp += 4; //call
	cl = to8i(ebp+0x1F4); //mov
	ebx = (int32_t)(intptr_t)(ebp+0x13C); //lea
	test(cl, (int8_t)0x40);
	if (jz())
		goto loc_460458;
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = ebp; //mov
	esp -= 4; _sub_462C70(); esp += 4; //call
loc_4601B9:
	to32i(esp+0x28) = eax; //mov
	to32i(ebp+0x15C) = eax; //mov
	cmp(to32i(ebp+0x17C), (int32_t)0);
	if (jz())
		goto loc_4601DA;
	cmp(to32i(ebp+0x18), (int32_t)0);
	if (jnz())
		goto loc_4601DA;
	to32i(esp+0x28) = 0x640000; //mov
loc_4601DA:
	ecx = esi; //mov
	eax = to32i(ebp+0x154); //mov
	edx = to32i(esp+0x18); //mov
	sub(ecx, eax);
	imul32(ecx, edx);
	cmp(to32i(ebp+0x218), (int32_t)0x107AE);
	if (jle())
		goto loc_460214;
	ebx = to32i(esp+0x24); //mov
	eax = ecx; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	ecx = eax; //mov
loc_460214:
	edi = esp; //mov
	to32i(ebp+0x154) = esi; //mov
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	movsd();
	movsd();
	movsd();
	test(to8i(ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_46023A;
	cmp(to16i(ebp+0x14C), (int16_t)0);
	if (jbe())
		goto loc_460468;
loc_46023A:
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebp+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esp; //mov
	add(ebx, eax);
	eax = ebp; //mov
	to32i(ebp+0x100) = ebx; //mov
	esp -= 4; _sub_461960(); esp += 4; //call
	esi = to32i(ebp+0xA8); //mov
	test(esi, esi);
	if (jle())
		goto loc_460476;
	edx = esi; //mov
loc_46029B:
	edi = to32i(ebp+0xB0); //mov
	test(edi, edi);
	if (jle())
		goto loc_46047F;
	eax = edi; //mov
loc_4602AB:
	cmp(edx, eax);
	if (jle())
		goto loc_460488;
	sar(eax, (int32_t)2);
loc_4602B6:
	add(eax, edx);
	edx = to32i(ebp+0x158); //mov
	to32i(ebp+0xBC) = eax; //mov
	eax = ecx; //mov
	sub(eax, edx);
	cmp(eax, (int32_t)0xFFCE0000);
	if (jge())
		goto loc_460490;
loc_4602D3:
	ebx = to32i(esp+0x28); //mov
	to32i(ebp+0xE8) = 0; //mov
	add(ebx, (int32_t)0x4CCC8);
	to32i(ebp+0xF0) = 0; //mov
	to32i(esp+0x28) = ebx; //mov
	to32i(ebp+0x15C) = ebx; //mov
loc_4602FB:
	eax = to32i(ebp+0xBC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(eax, (int32_t)0x100000);
	if (jge())
		goto loc_460316;
	eax = 0x100000; //mov
loc_460316:
	edx = ecx; //mov
	sub(edx, to32i(ebp+0x158));
	cmp(edx, eax);
	if (jle())
		goto loc_460332;
	to32i(ebp+0x158) = 0; //mov
	ecx = to32i(ebp+0x158); //mov
loc_460332:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	shl(eax, (int32_t)2);
	test(ecx, ecx);
	if (jle())
		goto loc_4604A1;
	edx = to32i(dword_511D8C+eax); //mov
	ebx = to32i(ebp+0x158); //mov
	eax = ecx; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = to32i(ebp+0x158); //mov
	add(esi, eax);
	ecx = esi; //mov
	to32i(ebp+0x158) = esi; //mov
loc_46037B:
	edi = to32i(esp+0x28); //mov
	to8i(ebp+0x8E) = 0; //mov
	cmp(edi, (int32_t)0x9999);
	if (jl())
		goto loc_4604D0;
	cmp(to16i(ebp+0x14C), (int16_t)0);
	if (jnz())
		goto loc_4603A3;
	to8i(ebp+0x8E) = 1; //mov
loc_4603A3:
	eax = to32i(esp+0x1C); //mov
	add(to16i(ebp+0x14C), ax);
	ecx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	sub(eax, ecx);
	shl(eax, (int32_t)2);
	add(eax, ecx);
	ecx = to32i(esp+0x1C); //mov
	edx = to32i(dword_511D5C+eax*4); //mov
	imul32(eax, ecx, 0x7599);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(to32i(ebp+0xAC), eax);
loc_4603F1:
	esi = to32i(ebp+0xF0); //mov
	push32(esi);
	edi = to32i(ebp+0xEC); //mov
	push32(edi);
	eax = to32i(ebp+0xE8); //mov
	push32(eax);
	edx = to32i(ebp+0xB0); //mov
	push32(edx);
	ecx = to32i(ebp+0xAC); //mov
	push32(ecx);
	ebx = to32i(ebp+0xA8); //mov
	push32(ebx);
	esi = to32i(ebp+0xA4); //mov
	push32(esi);
	edi = to32i(ebp+0xA0); //mov
	push32(edi);
	eax = to32i(ebp+0x9C); //mov
	push32(eax);
	edx = to32i(ebp+0); //mov
	push32(edx);
	push32(aNewtonAtlogXDD);
	push32(1);
	add(esp, (int32_t)0x30);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46044D:
	eax = to32i(ebp+0x94); //mov
	goto loc_460151;
loc_460458:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = ebp; //mov
	esp -= 4; _sub_462BF0(); esp += 4; //call
	goto loc_4601B9;
loc_460468:
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4530C0(); esp += 4; //call
	goto loc_46023A;
loc_460476:
	edx = esi; //mov
	neg(edx);
	goto loc_46029B;
loc_46047F:
	eax = edi; //mov
	neg(eax);
	goto loc_4602AB;
loc_460488:
	sar(edx, (int32_t)2);
	goto loc_4602B6;
loc_460490:
	cmp(ecx, (int32_t)0xFF880000);
	if (jl())
		goto loc_4602D3;
	goto loc_4602FB;
loc_4604A1:
	edx = to32i(dword_511D90+eax); //mov
	edi = to32i(ebp+0x158); //mov
	eax = ecx; //mov
	sub(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x158); //mov
	add(edx, eax);
	ecx = edx; //mov
	to32i(ebp+0x158) = edx; //mov
	goto loc_46037B;
loc_4604D0:
	cmp(to16i(ebp+0x14C), (int16_t)0);
	if (jz())
		goto loc_46088A;
	test(to8i(ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_4604EE;
	eax = ebp; //mov
	esp -= 4; _sub_46A3B0(); esp += 4; //call
loc_4604EE:
	esi = ecx; //mov
	eax = to32i(ebp+0xAC); //mov
	edx = to32i(dword_512204); //mov
	sub(esi, eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	shl(eax, (int32_t)2);
	edx = to32i(ebp+0x100); //mov
	cmp(edx, to32i(dword_511D7C+eax));
	if (jge())
		goto loc_46067C;
loc_460521:
	ebx = (int32_t)(intptr_t)(ebp+0x13C); //lea
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = ebp; //mov
	esp -= 4; _sub_456420(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_460A40(); esp += 4; //call
	edi = to32i(ebp+0x160); //mov
	cmp(edi, (int32_t)0x50000);
	if (jle())
		goto loc_46055E;
	cmp(edi, (int32_t)0x140000);
	if (jge())
		goto loc_460750;
	eax = 0x140000; //mov
loc_460558:
	to32i(ebp+0x160) = eax; //mov
loc_46055E:
	edx = to32i(ebp+0xE8); //mov
	test(edx, edx);
	if (jle())
		goto loc_46076C;
	eax = edx; //mov
loc_46056E:
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_46063D;
	ebx = to32i(ebp+0xF0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_460775;
	eax = ebx; //mov
loc_460589:
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_46063D;
	esi = to32i(ebp+0xEC); //mov
	test(esi, esi);
	if (jle())
		goto loc_46077E;
	eax = esi; //mov
loc_4605A4:
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_460816;
	ebx = to32i(ebp+0x100); //mov
	cmp(ebx, (int32_t)0xF70B);
	if (jle())
		goto loc_460787;
loc_4605C1:
	to16i(ebp+0x14C) = 0; //mov
loc_4605CA:
	edi = to32i(ebp+0x100); //mov
	cmp(edi, (int32_t)0x8F5);
	if (jge())
		goto loc_46063D;
	cmp(edi, (int32_t)0xFFFFF70B);
	if (jle())
		goto loc_46063D;
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebp+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ebp+0xFC) = ebx; //mov
	cmp(ebx, (int32_t)0xF70B);
	if (jle())
		goto loc_460798;
loc_460634:
	to16i(ebp+0x14C) = 0; //mov
loc_46063D:
	eax = to32i(esp+0x28); //mov
	cmp(eax, (int32_t)0x51E);
	if (jg())
		goto loc_4603F1;
	test(to8i(ebp+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_4608B7;
	edx = to32i(ebp+0xA0); //mov
	to32i(ebp+0x15C) = 0; //mov
	sub(edx, eax);
	to32i(ebp+0xA0) = edx; //mov
	to32i(ebp+0xAC) = ecx; //mov
	goto loc_4603F1;
loc_46067C:
	di = to16i(ebp+0x14C); //mov
	cmp(di, (int16_t)0xA);
	if (jb())
		goto loc_460521;
	if (jb())
		goto loc_46055E;
	ebx = esi; //mov
	sub(ebx, to32i(dword_511D84+eax));
	test(ebx, ebx);
	if (jl())
		goto loc_460757;
loc_4606A3:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D80+eax*4); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(ecx, ecx);
	if (jl())
		goto loc_46075E;
	to32i(ebp+0xAC) = eax; //mov
loc_4606D8:
	edx = to32i(esp+0x28); //mov
	to8i(ebp+0x90) = 5; //mov
	ebx = 0xF5C; //mov
	eax = to32i(ebp+0xA0); //mov
	to16i(ebp+0x14C) = 1; //mov
	add(esi, esi);
	to32i(ebp+0x15C) = ebx; //mov
	sub(eax, edx);
	to32i(ebp+0x160) = esi; //mov
	add(eax, (int32_t)0xF5C);
	to32i(esp+0x28) = ebx; //mov
	to32i(ebp+0xA0) = eax; //mov
	cmp(esi, (int32_t)0xA0000);
	if (jge())
		goto loc_460728;
	to32i(ebp+0x160) = 0x140000; //mov
loc_460728:
	to32i(ebp+0x164) = 0; //mov
	edi = (int32_t)(intptr_t)(ebp+0x170); //lea
	esi = (int32_t)(intptr_t)(ebp+0x9C); //lea
	to32i(ebp+0x168) = 0x10000; //mov
	movsd();
	movsd();
	movsd();
	goto loc_46055E;
loc_460750:
	eax = edi; //mov
	goto loc_460558;
loc_460757:
	xor_(ebx, ebx);
	goto loc_4606A3;
loc_46075E:
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	to32i(ebp+0xAC) = edx; //mov
	goto loc_4606D8;
loc_46076C:
	eax = edx; //mov
	neg(eax);
	goto loc_46056E;
loc_460775:
	eax = ebx; //mov
	neg(eax);
	goto loc_460589;
loc_46077E:
	eax = esi; //mov
	neg(eax);
	goto loc_4605A4;
loc_460787:
	cmp(ebx, (int32_t)0xFFFF08F5);
	if (jl())
		goto loc_4605C1;
	goto loc_4605CA;
loc_460798:
	cmp(ebx, (int32_t)0xFFFF08F5);
	if (jl())
		goto loc_460634;
	test(to8i(ebp+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_46063D;
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebp+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ebp+0x104) = ebx; //mov
	cmp(ebx, (int32_t)0xF70B);
	if (jg())
		goto loc_460634;
	cmp(ebx, (int32_t)0xFFFF08F5);
	if (jl())
		goto loc_460634;
	goto loc_46063D;
loc_460816:
	cmp(to32i(ebp+0x100), (int32_t)0xE666);
	if (jle())
		goto loc_46063D;
	eax = to32i(ebp+0xEC); //mov
	to32i(ebp+0x150) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_460842;
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_460850;
	goto loc_460634;
loc_460842:
	neg(eax);
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_460850;
	goto loc_460634;
loc_460850:
	eax = to32i(ebp+0xEC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	to32i(ebp+0x328) = 0x140000; //mov
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0x324) = 0x140000; //mov
	sub(edx, eax);
	to32i(ebp+0xEC) = edx; //mov
	goto loc_46063D;
loc_46088A:
	ah = to8i(ebp+0x1F4); //mov
	ebx = (int32_t)(intptr_t)(ebp+0x13C); //lea
	test(ah, (int8_t)0x40);
	if (jz())
		goto loc_4608A9;
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_460DA0(); esp += 4; //call
	goto loc_46063D;
loc_4608A9:
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_460AE0(); esp += 4; //call
	goto loc_46063D;
loc_4608B7:
	ebx = eax; //mov
	neg(ebx);
	edx = to32i(esp+0xC); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	edi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	esi = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ebp+0x9C); //mov
	to32i(ebp+0x15C) = 0; //mov
	add(ebx, edi);
	edx = to32i(ebp+0xA4); //mov
	to32i(ebp+0x9C) = ebx; //mov
	add(edx, eax);
	edi = to32i(ebp+0xA0); //mov
	to32i(ebp+0xA4) = edx; //mov
	add(edi, esi);
	to32i(ebp+0xA0) = edi; //mov
	to32i(ebp+0xAC) = ecx; //mov
	goto loc_4603F1;
}
Fn(void) Game::_sub_460930()
{
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_51221C); //mov
	edx = 0x10000; //mov
	cmp(ecx, (int32_t)7);
	if (jnz())
		goto loc_460955;
	cmp(eax, (int32_t)0x144);
	if (jle())
		goto loc_460955;
	cmp(eax, (int32_t)0x230);
	if (jge())
		goto loc_460955;
	edx = 0x30000; //mov
loc_460955:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_460960()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	ebp = edx; //mov
	edx = to32i(eax+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	ebx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1E); //mov
	sar(ebx, (int32_t)4);
	and_(ebx, (int32_t)0xF);
	cmp(ebx, (int32_t)2);
	if (jz())
		goto loc_46099C;
	al = to8i(eax+0x1E); //mov
	and_(al, (int8_t)0xF);
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_4609F4;
loc_46099C:
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(ecx+0x124); //lea
	movsd();
	movsd();
	movsd();
	eax = 0xA0000; //mov
	ebx = to32i(esp); //mov
	esi = to32i(esp+4); //mov
	edi = to32i(esp+8); //mov
	neg(ebx);
	neg(esi);
	neg(edi);
	to32i(esp) = ebx; //mov
	to32i(esp+4) = esi; //mov
	ebx = to32i(dword_51221C); //mov
	to32i(esp+8) = edi; //mov
	cmp(ebx, (int32_t)4);
	if (jnz())
		goto loc_460A14;
	cmp(edx, (int32_t)0x572);
	if (jle())
		goto loc_4609FD;
	cmp(edx, (int32_t)0x5A0);
	if (jge())
		goto loc_4609FD;
	eax = 0x180000; //mov
loc_4609E8:
	edi = to32i(ecx+0xA0); //mov
	add(eax, ebp);
	cmp(eax, edi);
	if (jl())
		goto loc_460A20;
loc_4609F4:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4609FD:
	cmp(edx, (int32_t)0x3EC);
	if (jle())
		goto loc_4609E8;
	cmp(edx, (int32_t)0x42A);
	if (jge())
		goto loc_4609E8;
	eax = 0xE0000; //mov
	goto loc_4609E8;
loc_460A14:
	cmp(ebx, (int32_t)8);
	if (jnz())
		goto loc_4609E8;
	eax = 0x140000; //mov
	goto loc_4609E8;
loc_460A20:
	ebx = (int32_t)(intptr_t)(ecx+0x13C); //lea
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_456420(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_460A40(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_460A40()
{
	push32(ebx);
	push32(edx);
	push32(edi);
	edx = to32i(eax+0xE8); //mov
	cmp(edx, (int32_t)0x26666);
	if (jg())
		goto loc_460A95;
	cmp(edx, (int32_t)0xFFFD999A);
	if (jge())
		goto loc_460A63;
	to32i(eax+0xE8) = 0xFFFD999A; //mov
loc_460A63:
	ebx = to32i(eax+0xEC); //mov
	cmp(ebx, (int32_t)0x26666);
	if (jle())
		goto loc_460AA1;
	to32i(eax+0xEC) = 0x26666; //mov
loc_460A7B:
	edi = to32i(eax+0xF0); //mov
	cmp(edi, (int32_t)0x26666);
	if (jg())
		goto loc_460AB5;
	cmp(edi, (int32_t)0xFFFD999A);
	if (jl())
		goto loc_460AC3;
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_460A95:
	to32i(eax+0xE8) = 0x26666; //mov
	goto loc_460A63;
loc_460AA1:
	cmp(ebx, (int32_t)0xFFFD999A);
	if (jge())
		goto loc_460A7B;
	to32i(eax+0xEC) = 0xFFFD999A; //mov
	goto loc_460A7B;
loc_460AB5:
	to32i(eax+0xF0) = 0x26666; //mov
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_460AC3:
	to32i(eax+0xF0) = 0xFFFD999A; //mov
	pop32(edi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_460AE0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebx = to32i(eax+0x100); //mov
	xor_(ebp, ebp);
	test(ebx, ebx);
	if (jle())
		goto loc_460C7B;
	ebx = 1; //mov
loc_460AFB:
	eax = to32i(ecx+0xD0); //mov
	imul32(eax, ebx);
	sub(eax, to32i(edx));
	esi = to32i(ecx+0xD8); //mov
	imul32(esi, ebx);
	edi = to32i(edx+8); //mov
	sub(edi, esi);
	esi = edi; //mov
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_460C85;
	edi = 0x7AE; //mov
loc_460B28:
	cmp(to32i(ecx+0x100), (int32_t)0xE666);
	if (jle())
		goto loc_460C8F;
loc_460B38:
	test(eax, eax);
	if (jle())
		goto loc_460CA4;
loc_460B40:
	cmp(eax, edi);
	if (jle())
		goto loc_460CAB;
loc_460B48:
	esi = to32i(ecx+0xD0); //mov
	imul32(esi, ebx);
	imul32(ebx, to32i(ecx+0xD8));
	eax = to32i(edx+8); //mov
	edi = to32i(edx); //mov
	sub(eax, ebx);
	sub(esi, edi);
	ebx = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_460CD4;
	eax = esi; //mov
loc_460B6D:
	cmp(eax, (int32_t)0x1999);
	if (jle())
		goto loc_460CDD;
loc_460B78:
	eax = 0xFC28; //mov
	edx = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = eax; //mov
	eax = 0xFC28; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	to32i(ecx+0xAC) = eax; //mov
	eax = 0xFC28; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xB0) = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_460D07;
	eax = esi; //mov
loc_460BD3:
	cmp(eax, (int32_t)0x3333);
	if (jle())
		goto loc_460D10;
loc_460BDE:
	eax = to32i(ecx+0xA8); //mov
	test(eax, eax);
	if (jle())
		goto loc_460D3A;
loc_460BEC:
	edx = to32i(ecx+0xB0); //mov
	test(edx, edx);
	if (jle())
		goto loc_460D41;
loc_460BFA:
	add(eax, edx);
	cmp(eax, (int32_t)0x280000);
	if (jge())
		goto loc_460D5A;
	edi = to32i(ecx+0xA8); //mov
	test(edi, edi);
	if (jle())
		goto loc_460D48;
	eax = edi; //mov
loc_460C17:
	ebp = to32i(ecx+0xB0); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_460D51;
	edx = ebp; //mov
loc_460C27:
	add(eax, edx);
loc_460C29:
	to32i(ecx+0x160) = eax; //mov
	eax = ecx; //mov
	to32i(ecx+0x168) = 0x20003; //mov
	esp -= 4; _sub_478C70(); esp += 4; //call
loc_460C40:
	test(esi, esi);
	if (jle())
		goto loc_460D64;
	cmp(esi, (int32_t)0x4CCC);
	if (jle())
		goto loc_460C55;
	esi = 0x4CCC; //mov
loc_460C55:
	test(ebx, ebx);
	if (jle())
		goto loc_460D7A;
	cmp(ebx, (int32_t)0x4CCC);
	if (jle())
		goto loc_460C6A;
	ebx = 0x4CCC; //mov
loc_460C6A:
	to32i(ecx+0xE8) = ebx; //mov
	to32i(ecx+0xF0) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_460C7B:
	ebx = 0xFFFFFFFF; //mov
	goto loc_460AFB;
loc_460C85:
	edi = 0xA3D; //mov
	goto loc_460B28;
loc_460C8F:
	cmp(to32i(ecx+0x100), (int32_t)0xFFFF199A);
	if (jl())
		goto loc_460B38;
	goto loc_460B48;
loc_460CA4:
	neg(eax);
	goto loc_460B40;
loc_460CAB:
	test(esi, esi);
	if (jle())
		goto loc_460CD0;
loc_460CAF:
	cmp(esi, edi);
	if (jg())
		goto loc_460B48;
	test(ebp, ebp);
	if (jnz())
		goto loc_460B48;
	to32i(ecx+0xE8) = ebp; //mov
	to32i(ecx+0xF0) = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_460CD0:
	neg(esi);
	goto loc_460CAF;
loc_460CD4:
	eax = esi; //mov
	neg(eax);
	goto loc_460B6D;
loc_460CDD:
	test(ebx, ebx);
	if (jle())
		goto loc_460CF3;
	eax = ebx; //mov
	cmp(eax, (int32_t)0x1999);
	if (jg())
		goto loc_460B78;
	goto loc_460C40;
loc_460CF3:
	eax = ebx; //mov
	neg(eax);
	cmp(eax, (int32_t)0x1999);
	if (jg())
		goto loc_460B78;
	goto loc_460C40;
loc_460D07:
	eax = esi; //mov
	neg(eax);
	goto loc_460BD3;
loc_460D10:
	test(ebx, ebx);
	if (jle())
		goto loc_460D26;
	eax = ebx; //mov
	cmp(eax, (int32_t)0x3333);
	if (jg())
		goto loc_460BDE;
	goto loc_460C40;
loc_460D26:
	eax = ebx; //mov
	neg(eax);
	cmp(eax, (int32_t)0x3333);
	if (jg())
		goto loc_460BDE;
	goto loc_460C40;
loc_460D3A:
	neg(eax);
	goto loc_460BEC;
loc_460D41:
	neg(edx);
	goto loc_460BFA;
loc_460D48:
	eax = edi; //mov
	neg(eax);
	goto loc_460C17;
loc_460D51:
	edx = ebp; //mov
	neg(edx);
	goto loc_460C27;
loc_460D5A:
	eax = 0x280000; //mov
	goto loc_460C29;
loc_460D64:
	cmp(esi, (int32_t)0xFFFFB334);
	if (jg())
		goto loc_460C55;
	esi = 0xFFFFB334; //mov
	goto loc_460C55;
loc_460D7A:
	cmp(ebx, (int32_t)0xFFFFB334);
	if (jg())
		goto loc_460C6A;
	ebx = 0xFFFFB334; //mov
	to32i(ecx+0xE8) = ebx; //mov
	to32i(ecx+0xF0) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_460DA0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	edi = esp; //mov
	esi = edx; //mov
	movsd();
	movsd();
	movsd();
	xor_(ebx, ebx);
	edx = to32i(esp); //mov
	eax = to32i(eax+0xC4); //mov
	to32i(esp+0x10) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	edi = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(ecx+0xDC); //mov
	esi = to32i(ecx+0x100); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	test(edi, edi);
	if (jle())
		goto loc_460F6F;
	edx = edi; //mov
loc_460E49:
	test(esi, esi);
	if (jle())
		goto loc_460F78;
	eax = esi; //mov
loc_460E53:
	test(ebx, ebx);
	if (jle())
		goto loc_460F81;
	ebp = ebx; //mov
loc_460E5D:
	to32i(esp+0xC) = ebp; //mov
	cmp(eax, edx);
	if (jle())
		goto loc_460F94;
	cmp(eax, ebp);
	if (jle())
		goto loc_460F94;
	edi = esi; //mov
	test(esi, esi);
	if (jle())
		goto loc_460F8A;
	eax = 1; //mov
loc_460E80:
	esi = to32i(ecx+0xD0); //mov
	imul32(esi, eax);
	imul32(eax, to32i(ecx+0xD8));
	ebp = to32i(esp); //mov
	ebx = to32i(esp+8); //mov
	sub(esi, ebp);
loc_460E99:
	sub(ebx, eax);
loc_460E9B:
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_461000;
	eax = 0x7AE; //mov
loc_460EAD:
	cmp(edi, (int32_t)0xE666);
	if (jle())
		goto loc_46100A;
loc_460EB9:
	test(esi, esi);
	if (jle())
		goto loc_46101B;
	edx = esi; //mov
loc_460EC3:
	cmp(edx, eax);
	if (jle())
		goto loc_461024;
loc_460ECB:
	test(esi, esi);
	if (jle())
		goto loc_461058;
	eax = esi; //mov
loc_460ED5:
	cmp(eax, (int32_t)0x1999);
	if (jle())
		goto loc_461061;
loc_460EE0:
	eax = 0xF333; //mov
	edx = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = eax; //mov
	eax = 0xF333; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	to32i(ecx+0xAC) = eax; //mov
	eax = 0xF333; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xB0) = eax; //mov
loc_460F31:
	test(esi, esi);
	if (jle())
		goto loc_46108B;
	cmp(esi, (int32_t)0x4CCC);
	if (jle())
		goto loc_460F46;
	esi = 0x4CCC; //mov
loc_460F46:
	test(ebx, ebx);
	if (jle())
		goto loc_4610A1;
	cmp(ebx, (int32_t)0x4CCC);
	if (jle())
		goto loc_460F5B;
	ebx = 0x4CCC; //mov
loc_460F5B:
	to32i(ecx+0xE8) = ebx; //mov
	to32i(ecx+0xF0) = esi; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_460F6F:
	edx = edi; //mov
	neg(edx);
	goto loc_460E49;
loc_460F78:
	eax = esi; //mov
	neg(eax);
	goto loc_460E53;
loc_460F81:
	ebp = ebx; //mov
	neg(ebp);
	goto loc_460E5D;
loc_460F8A:
	eax = 0xFFFFFFFF; //mov
	goto loc_460E80;
loc_460F94:
	cmp(edx, eax);
	if (jle())
		goto loc_460FCC;
	cmp(edx, to32i(esp+0xC));
	if (jle())
		goto loc_460FCC;
	test(edi, edi);
	if (jle())
		goto loc_460FC5;
	eax = 1; //mov
loc_460FA7:
	esi = to32i(ecx+0xC4); //mov
	imul32(esi, eax);
	imul32(eax, to32i(ecx+0xCC));
	edx = to32i(esp); //mov
	ebx = to32i(esp+8); //mov
	sub(esi, edx);
	goto loc_460E99;
loc_460FC5:
	eax = 0xFFFFFFFF; //mov
	goto loc_460FA7;
loc_460FCC:
	edi = ebx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_460FF9;
	ebx = 1; //mov
loc_460FD7:
	esi = to32i(ecx+0xDC); //mov
	imul32(esi, ebx);
	imul32(ebx, to32i(ecx+0xE4));
	eax = to32i(esp+8); //mov
	ebp = to32i(esp); //mov
	sub(eax, ebx);
	sub(esi, ebp);
	ebx = eax; //mov
	goto loc_460E9B;
loc_460FF9:
	ebx = 0xFFFFFFFF; //mov
	goto loc_460FD7;
loc_461000:
	eax = 0xA3D; //mov
	goto loc_460EAD;
loc_46100A:
	cmp(edi, (int32_t)0xFFFF199A);
	if (jl())
		goto loc_460EB9;
	goto loc_460ECB;
loc_46101B:
	edx = esi; //mov
	neg(edx);
	goto loc_460EC3;
loc_461024:
	test(ebx, ebx);
	if (jle())
		goto loc_461052;
	edx = ebx; //mov
loc_46102A:
	cmp(edx, eax);
	if (jg())
		goto loc_460ECB;
	edi = to32i(esp+0x10); //mov
	test(edi, edi);
	if (jnz())
		goto loc_460ECB;
	to32i(ecx+0xE8) = edi; //mov
	to32i(ecx+0xF0) = edi; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_461052:
	edx = ebx; //mov
	neg(edx);
	goto loc_46102A;
loc_461058:
	eax = esi; //mov
	neg(eax);
	goto loc_460ED5;
loc_461061:
	test(ebx, ebx);
	if (jle())
		goto loc_461077;
	eax = ebx; //mov
	cmp(eax, (int32_t)0x1999);
	if (jg())
		goto loc_460EE0;
	goto loc_460F31;
loc_461077:
	eax = ebx; //mov
	neg(eax);
	cmp(eax, (int32_t)0x1999);
	if (jg())
		goto loc_460EE0;
	goto loc_460F31;
loc_46108B:
	cmp(esi, (int32_t)0xFFFFB334);
	if (jg())
		goto loc_460F46;
	esi = 0xFFFFB334; //mov
	goto loc_460F46;
loc_4610A1:
	cmp(ebx, (int32_t)0xFFFFB334);
	if (jg())
		goto loc_460F5B;
	ebx = 0xFFFFB334; //mov
	to32i(ecx+0xE8) = ebx; //mov
	to32i(ecx+0xF0) = esi; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4610D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC8);
	to32i(esp+0xBC) = eax; //mov
	esi = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0xA4); //lea
	esi = (int32_t)(intptr_t)(esi+0x13C); //lea
	movsd();
	movsd();
	movsd();
	ecx = 2; //mov
	edi = (int32_t)(intptr_t)(esp+0x8C); //lea
	esi = (int32_t)(intptr_t)dword_45FF70; //mov
	xor_(edx, edx);
	xor_(ebp, ebp);
	movsd();
	movsd();
	movsd();
	to32i(esp+0xC0) = edx; //mov
	dx = to16i(eax+0x14C); //mov
	to32i(esp+0xC4) = ecx; //mov
	test(dx, dx);
	if (jnz())
		goto loc_461141;
	cmp(to32i(dword_51221C), (int32_t)0);
	if (jnz())
		goto loc_4612B8;
	test(to8i(eax+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_4612B8;
loc_461141:
	eax = 4; //mov
	xor_(ebp, ebp);
	to32i(esp+0xC4) = eax; //mov
loc_46114F:
	eax = to32i(esp+0xBC); //mov
	cmp(to32i(eax+0xBC), (int32_t)0x280000);
	if (jle())
		goto loc_4611D9;
	edx = to32i(eax+0xA8); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0xBC); //mov
	edx = to32i(edx+0xAC); //mov
	to32i(esp+0x8C) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0xBC); //mov
	edx = to32i(edx+0xB0); //mov
	to32i(esp+0x90) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x94) = eax; //mov
loc_4611D9:
	esi = to32i(esp+0xBC); //mov
	ecx = 0x20; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esi+8); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ebx = to32i(esp+0xC4); //mov
	ecx = ebp; //mov
	cmp(ebp, ebx);
	if (jge())
		goto loc_4612AB;
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	sub(eax, ebp);
	edi = to32i(esp+0xBC); //mov
	ebp = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebp, edi);
loc_461216:
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1AC); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(esp+0x8C); //mov
	edx = to32i(esp+0x80); //mov
	ebx = to32i(esp+0x84); //mov
	esi = to32i(esp+0x88); //mov
	add(edx, eax);
	eax = to32i(esp+0x90); //mov
	to32i(esp+0x80) = edx; //mov
	edx = esp; //mov
	add(ebx, eax);
	eax = to32i(esp+0x94); //mov
	to32i(esp+0x84) = ebx; //mov
	ebx = 1; //mov
	add(esi, eax);
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	to32i(esp+0x88) = esi; //mov
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	edx = 1; //mov
	eax = esp; //mov
	esp -= 4; _sub_449AE0(); esp += 4; //call
	test(al, (int8_t)0x3F);
	if (jz())
		goto loc_4612E2;
	cmp(to32i(esp+0xC0), (int32_t)0);
	if (jl())
		goto loc_4612E2;
	esi = to32i(esp+0xC4); //mov
	inc(ecx);
	add(ebp, (int32_t)0xC);
	cmp(ecx, esi);
	if (jl())
		goto loc_461216;
loc_4612AB:
	add(esp, (int32_t)0xC8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4612B8:
	eax = to32i(esp+0xBC); //mov
	cmp(to32i(eax+0x2B8), (int32_t)0);
	if (jge())
		goto loc_46114F;
	edi = 4; //mov
	ebp = 2; //mov
	to32i(esp+0xC4) = edi; //mov
	goto loc_46114F;
loc_4612E2:
	ebx = 0x4E3; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGameC_9; //mov
	eax = esp; //mov
	esp -= 4; _sub_44A930(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4613C2;
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_4613C2;
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
loc_46130A:
	edi = (int32_t)(intptr_t)(esp+0xB0); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(esp+0xAC); //mov
	sub(eax, to32i(esp+0xB8));
	ebx = to32i(esp+0xB0); //mov
	to32i(esp+0xA0) = eax; //mov
	eax = to32i(esp+0xA4); //mov
	xor_(esi, esi);
	sub(eax, ebx);
	to32i(esp+0x9C) = esi; //mov
	to32i(esp+0x98) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	xor_(edx, edx);
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = to32i(esp+0xBC); //mov
	esp -= 4; _sub_478CC0(); esp += 4; //call
	edi = to32i(esp+0xA0); //mov
	push32(edi);
	ebp = to32i(esp+0xA0); //mov
	push32(ebp);
	eax = to32i(esp+0xA0); //mov
	push32(eax);
	eax = to32i(esp+0xC8); //mov
	esi = to32i(esp+0xC8); //mov
	esp -= 4; _sub_4613E0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	edi = esi; //mov
	sub(eax, ecx);
	edi = (int32_t)(intptr_t)(edi+0x170); //lea
	esi = (int32_t)(intptr_t)(esi+eax*4+0x1AC); //lea
	eax = to32i(esp+0xBC); //mov
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_43D760(); esp += 4; //call
	add(esp, (int32_t)0xC8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4613C2:
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	esi = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(esi, eax);
	goto loc_46130A;
}
Fn(void) Game::_sub_4613E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x48);
	ecx = eax; //mov
	edx = to32i(eax+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0xF); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x3C) = edx; //mov
	edx = to32i(eax+0x10); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(eax+0x11); //mov
	shl(edx, (int32_t)9);
	sar(eax, (int32_t)0x18);
	to32i(esp+0x40) = edx; //mov
	shl(eax, (int32_t)9);
	edx = to32i(esp+0x64); //mov
	to32i(esp+0x44) = eax; //mov
	eax = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x68); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x6C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_46164F;
	edx = eax; //mov
loc_46146F:
	cmp(edx, (int32_t)0x8000);
	if (jle())
		goto loc_461499;
	test(eax, eax);
	if (jle())
		goto loc_461493;
	edx = to32i(esp+0x3C); //mov
	to32i(esp+0x64) = edx; //mov
	edx = to32i(esp+0x40); //mov
	to32i(esp+0x68) = edx; //mov
	edx = to32i(esp+0x44); //mov
	to32i(esp+0x6C) = edx; //mov
loc_461493:
	if (jl())
		goto loc_461658;
loc_461499:
	eax = to32i(esp+0x68); //mov
	xor_(edx, edx);
	ebp = 0x10000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = ebp; //mov
	eax = to32i(esp+0x6C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	xor_(edx, edx);
	eax = to32i(esp+0x6C); //mov
	to32i(esp+0x30) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	xor_(edx, edx);
	eax = to32i(esp+0x64); //mov
	esi = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebp; //mov
	sub(ebx, eax);
	eax = to32i(esp+0x64); //mov
	to32i(esp+0x34) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	xor_(edx, edx);
	eax = to32i(esp+0x68); //mov
	xor_(edi, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xA8); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x64); //mov
	to32i(esp+0x38) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xAC); //mov
	eax = to32i(esp+0x68); //mov
	to32i(esp+0x28) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x6C); //mov
	to32i(esp+0x2C) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	to32i(esp+0x24) = edi; //mov
	test(eax, eax);
	if (jle())
		goto loc_46168D;
	eax = to32i(esp+0x64); //mov
	edx = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xAC); //mov
	eax = to32i(esp+0x68); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x6C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
loc_4615B2:
	neg(eax);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	cmp(eax, (int32_t)0xFFFFF852);
	if (jle())
		goto loc_4616D6;
	edx = 0xFFFFF852; //mov
loc_4615D1:
	eax = to32i(esp+0x64); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x68); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+0x24); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0x30); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp+0x38); //mov
	ebx = esp; //mov
	to32i(esp+0x20) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_46B9C0(); esp += 4; //call
	edx = eax; //mov
	eax = 4; //mov
	ecx = to32i(esp+0x38); //mov
	esp -= 4; _sub_46B9B0(); esp += 4; //call
	push32(ecx);
	ebx = to32i(esp+0x38); //mov
	push32(ebx);
	edi = to32i(esp+0x38); //mov
	push32(edi);
	eax = esi; //mov
	esp -= 4; _sub_46B790(); esp += 4; //call
	add(esp, (int32_t)0x48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 0xC; return;
loc_46164F:
	edx = eax; //mov
	neg(edx);
	goto loc_46146F;
loc_461658:
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x64) = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0x40); //mov
	neg(edx);
	to32i(esp+0x68) = eax; //mov
	ebx = eax; //mov
	to32i(esp+0x64) = edx; //mov
	eax = to32i(esp+0x44); //mov
	neg(ebx);
	esi = eax; //mov
	to32i(esp+0x6C) = eax; //mov
	neg(esi);
	to32i(esp+0x68) = ebx; //mov
	to32i(esp+0x6C) = esi; //mov
	goto loc_461499;
loc_46168D:
	eax = to32i(esp+0x64); //mov
	edx = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xAC); //mov
	eax = to32i(esp+0x68); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x6C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	neg(eax);
	goto loc_4615B2;
loc_4616D6:
	edx = eax; //mov
	goto loc_4615D1;
}
Fn(void) Game::_sub_4616E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ecx = eax; //mov
	edx = to32i(ecx+0x110); //mov
	eax = to32i(eax+0x110); //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x1A0); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x1A4); //mov
	imul32(edx, ebx);
	to32i(esp+0xC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x1A8); //mov
	imul32(edx, ebx);
	to32i(esp+0x10) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x14) = eax; //mov
	eax = to32i(ecx+0x108); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x188); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x18C); //mov
	imul32(edx, ebx);
	to32i(esp+0x24) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x190); //mov
	imul32(edx, ebx);
	to32i(esp+0x28) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x100); //mov
	to32i(esp+0x2C) = eax; //mov
	cmp(edx, (int32_t)0xCCCC);
	if (jg())
		goto loc_4618CE;
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ecx+0x9C); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(ecx+0x154); //mov
	to32i(esp+0x1C) = eax; //mov
loc_4617DE:
	eax = to32i(esp+0x18); //mov
	add(eax, to32i(esp+0xC));
	ebx = to32i(esp+0x10); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	add(eax, ebx);
	esi = to32i(esp+0x14); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x20); //mov
	add(eax, esi);
	edi = to32i(esp+0x24); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	sub(eax, edi);
	ebp = to32i(esp+0x28); //mov
	to32i(ecx+0x1AC) = eax; //mov
	eax = to32i(esp+4); //mov
	sub(eax, ebp);
	edx = to32i(esp+0x2C); //mov
	to32i(ecx+0x1B0) = eax; //mov
	eax = to32i(esp+8); //mov
	sub(eax, edx);
	to32i(ecx+0x1B4) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, edi);
	to32i(ecx+0x1B8) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, ebp);
	to32i(ecx+0x1BC) = eax; //mov
	eax = to32i(esp+8); //mov
	add(eax, edx);
	ebp = to32i(esp+0xC); //mov
	to32i(ecx+0x1C0) = eax; //mov
	eax = to32i(esp+0x18); //mov
	sub(eax, ebp);
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	sub(eax, ebx);
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x20); //mov
	sub(eax, esi);
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	esi = edi; //mov
	sub(eax, edi);
	edi = to32i(esp+0x28); //mov
	to32i(ecx+0x1C4) = eax; //mov
	eax = to32i(esp+4); //mov
	sub(eax, edi);
	to32i(ecx+0x1C8) = eax; //mov
	eax = to32i(esp+8); //mov
	sub(eax, edx);
	to32i(ecx+0x1CC) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, esi);
	to32i(ecx+0x1D0) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, edi);
	to32i(ecx+0x1D4) = eax; //mov
	eax = to32i(esp+8); //mov
	add(eax, edx);
	to32i(ecx+0x1D8) = eax; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4618CE:
	eax = to32i(ecx+0x10C); //mov
	ebx = to32i(ecx+0x15C); //mov
	neg(eax);
	edx = to32i(ecx+0x124); //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	eax = to32i(ecx+0x10C); //mov
	edi = to32i(ecx+0x15C); //mov
	neg(eax);
	edx = to32i(ecx+0x128); //mov
	sub(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(ecx+0x10C); //mov
	ebp = to32i(ecx+0x15C); //mov
	neg(eax);
	edx = to32i(ecx+0x12C); //mov
	sub(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x9C); //mov
	add(edx, esi);
	to32i(esp+0x18) = edx; //mov
	edx = to32i(ecx+0xA0); //mov
	add(edx, ebx);
	to32i(esp+0x1C) = edx; //mov
	edx = to32i(ecx+0xA4); //mov
	add(edx, eax);
	to32i(esp+0x20) = edx; //mov
	goto loc_4617DE;
}
Fn(void) Game::_sub_461960()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xC);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+4) = eax; //mov
	to32i(esp) = edx; //mov
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_461988;
	cmp(ebx, (int32_t)0xE666);
	if (jg())
		goto loc_461B69;
loc_461988:
	eax = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	eax = to32i(eax); //mov
	to32i(edx+0x194) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+4); //mov
	to32i(edx+0x198) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+8); //mov
	to32i(edx+0x19C) = eax; //mov
	cmp(ebx, (int32_t)0x8000);
	if (jl())
		goto loc_461BAE;
loc_4619BB:
	eax = to32i(esp+4); //mov
	edx = to32i(eax+0x19C); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(eax+0x198); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = to32i(esp+4); //mov
	sub(ebx, edx);
	to32i(eax+0x1A0) = ebx; //mov
	edx = to32i(eax+0x194); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x19C); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x1A4) = ebx; //mov
	edx = to32i(eax+0x198); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x194); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	add(eax, (int32_t)0x1A0);
	edx = to32i(esp+4); //mov
	to32i(eax+8) = ebx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x1A8); //mov
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x1A4); //mov
	eax = to32i(eax+0x19C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x188) = ebx; //mov
	edx = to32i(eax+0x1A0); //mov
	eax = to32i(eax+0x19C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x1A8); //mov
	eax = to32i(eax+0x194); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x18C) = ebx; //mov
	edx = to32i(eax+0x1A4); //mov
	eax = to32i(eax+0x194); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x1A0); //mov
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x190) = ebx; //mov
	add(eax, (int32_t)0x188);
	esp -= 4; _sub_45E760(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_461B69:
	edi = eax; //mov
	esi = eax; //mov
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(edi+0x188); //lea
	esi = (int32_t)(intptr_t)(esi+0xC4); //lea
	eax = to32i(esp); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = to32i(esp+4); //mov
	eax = to32i(eax); //mov
	to32i(edx+0x194) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+4); //mov
	to32i(edx+0x198) = eax; //mov
	eax = to32i(esp); //mov
	eax = to32i(eax+8); //mov
	to32i(edx+0x19C) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_461BAE:
	edx = to32i(esp); //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+4); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	edx = to32i(edx+8); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_461E21;
	edx = to32i(esp); //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+4); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	edx = to32i(edx+8); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
loc_461C5C:
	to32i(esp+8) = eax; //mov
	fild(to32i(esp+8));
	fcomp(to64f(dbl_4CD820));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4619BB;
	eax = to32i(esp+4); //mov
	edx = to32i(eax+0xE4); //mov
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(eax+0xE0); //mov
	eax = to32i(eax+0x19C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = to32i(esp+4); //mov
	sub(ebx, edx);
	to32i(eax+0x188) = ebx; //mov
	edx = to32i(eax+0xDC); //mov
	eax = to32i(eax+0x19C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0xE4); //mov
	eax = to32i(eax+0x194); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x18C) = ebx; //mov
	edx = to32i(eax+0xE0); //mov
	eax = to32i(eax+0x194); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0xDC); //mov
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	add(eax, (int32_t)0x188);
	edx = to32i(esp+4); //mov
	to32i(eax+8) = ebx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x19C); //mov
	eax = to32i(eax+0x18C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x198); //mov
	eax = to32i(eax+0x190); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x1A0) = ebx; //mov
	edx = to32i(eax+0x194); //mov
	eax = to32i(eax+0x190); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x19C); //mov
	eax = to32i(eax+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x1A4) = ebx; //mov
	edx = to32i(eax+0x198); //mov
	eax = to32i(eax+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x194); //mov
	eax = to32i(eax+0x18C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax+0x1A8) = ebx; //mov
	add(eax, (int32_t)0x1A0);
	esp -= 4; _sub_45E760(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_461E21:
	edx = to32i(esp); //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+4); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	edx = to32i(edx+8); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	neg(eax);
	goto loc_461C5C;
}
Fn(void) Game::_sub_461E80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x28);
	esi = eax; //mov
	cmp(to8i(eax+0x8D), (int8_t)0);
	if (jnz())
		goto loc_461E9A;
loc_461E92:
	add(esp, (int32_t)0x28);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_461E9A:
	eax = (int32_t)(intptr_t)(esi+0x98); //lea
	push32(eax);
	push32(0x1000);
	eax = (int32_t)(intptr_t)(esp+0x2C); //lea
	push32(eax);
	eax = to32i(esi+0xF0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ecx = eax; //mov
	eax = to32i(esi+0xEC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = eax; //mov
	eax = to32i(esi+0xE8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_462020(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_461E92;
	eax = (int32_t)(intptr_t)(esi+0xC4); //lea
	edx = esp; //mov
	ebx = eax; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jnz())
		goto loc_461F23;
	dl = to8i(esi+0x8F); //mov
	dec(dl);
	to8i(esi+0x8F) = dl; //mov
	test(dl, dl);
	if (ja())
		goto loc_461E92;
loc_461F23:
	eax = (int32_t)(intptr_t)(esi+0xC4); //lea
	esp -= 4; _sub_49EBC8(); esp += 4; //call
	to8i(esi+0x8F) = 0x20; //mov
	to32i(esi+0x98) = 0; //mov
	add(esp, (int32_t)0x28);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_461F50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x28);
	esi = eax; //mov
	cmp(to8i(eax+0x8D), (int8_t)0);
	if (jnz())
		goto loc_461F6A;
loc_461F62:
	add(esp, (int32_t)0x28);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_461F6A:
	eax = (int32_t)(intptr_t)(esi+0x98); //lea
	push32(eax);
	push32(0x1000);
	eax = (int32_t)(intptr_t)(esp+0x2C); //lea
	push32(eax);
	eax = to32i(esi+0xF0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ecx = eax; //mov
	eax = to32i(esi+0xEC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ebx = eax; //mov
	eax = to32i(esi+0xE8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_462020(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_461F62;
	eax = (int32_t)(intptr_t)(esi+0xC4); //lea
	edx = esp; //mov
	ebx = eax; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	dl = to8i(esi+0x8F); //mov
	dec(dl);
	to8i(esi+0x8F) = dl; //mov
	test(dl, dl);
	if (jbe())
		goto loc_461FF3;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jz())
		goto loc_461F62;
loc_461FF3:
	eax = (int32_t)(intptr_t)(esi+0xC4); //lea
	esp -= 4; _sub_49EBC8(); esp += 4; //call
	to8i(esi+0x8F) = 0x10; //mov
	to32i(esi+0x98) = 0; //mov
	add(esp, (int32_t)0x28);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_462020()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x9C);
	to32i(esp+0x94) = eax; //mov
	esi = edx; //mov
	ebp = ecx; //mov
	edx = ebx; //mov
	eax = to32i(esp+0xAC); //mov
	xor_(ebx, ebx);
	to32i(eax) = ebx; //mov
	test(esi, esi);
	if (jle())
		goto loc_462111;
	eax = esi; //mov
loc_46204B:
	to32i(esp+0x98) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_46211A;
	edi = edx; //mov
loc_46205C:
	test(ebp, ebp);
	if (jle())
		goto loc_462123;
	eax = ebp; //mov
loc_462066:
	ecx = to32i(esp+0x98); //mov
	add(ecx, edi);
	add(ecx, eax);
	to32i(esp+0x90) = eax; //mov
	eax = ecx; //mov
	ecx = to32i(esp+0xB4); //mov
	add(to32i(ecx), eax);
	eax = to32i(ecx); //mov
	cmp(eax, to32i(esp+0xB0));
	if (jle())
		goto loc_46209B;
	eax = to32i(esp+0xAC); //mov
	to32i(eax) = 1; //mov
loc_46209B:
	eax = (int32_t)(intptr_t)(esp+0x6C); //lea
	esp -= 4; _sub_49E780(); esp += 4; //call
	cmp(edi, (int32_t)0x13);
	if (jle())
		goto loc_4620AE;
	ebx = 1; //mov
loc_4620AE:
	cmp(to32i(esp+0x98), (int32_t)0xD);
	if (jle())
		goto loc_46212C;
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	edx = esi; //mov
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_49E720(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x6C); //lea
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	esp -= 4; _sub_49E840(); esp += 4; //call
	ebx = 1; //mov
loc_4620D9:
	cmp(to32i(esp+0x90), (int32_t)0xD);
	if (jle())
		goto loc_46214B;
	eax = esp; //mov
	edx = ebp; //mov
	ebx = to32i(esp+0x94); //mov
	esp -= 4; _sub_49E7E0(); esp += 4; //call
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_49E840(); esp += 4; //call
	ebx = 1; //mov
	eax = ebx; //mov
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_462111:
	eax = esi; //mov
	neg(eax);
	goto loc_46204B;
loc_46211A:
	edi = edx; //mov
	neg(edi);
	goto loc_46205C;
loc_462123:
	eax = ebp; //mov
	neg(eax);
	goto loc_462066;
loc_46212C:
	ecx = 0x24; //mov
	esi = (int32_t)(intptr_t)(esp+0x6C); //lea
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
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
	goto loc_4620D9;
loc_46214B:
	ecx = 0x24; //mov
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
	edi = to32i(esp+0x94); //mov
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
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_462180()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to8i(eax+0x8D), (int8_t)0);
	if (jnz())
		goto loc_46218E;
	pop32(ecx);
	return;
loc_46218E:
	push32(esi);
	push32(edx);
	push32(ebx);
	eax = to32i(ecx+0xA8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	edx = to32i(ecx+0x9C); //mov
	add(edx, eax);
	eax = to32i(ecx+0xAC); //mov
	to32i(ecx+0x9C) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ebx = to32i(ecx+0xA0); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	esi = to32i(ecx+0xA4); //mov
	to32i(ecx+0xA0) = ebx; //mov
	add(esi, eax);
	to32i(ecx+0xA4) = esi; //mov
	pop32(ebx);
	pop32(edx);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_462200()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ebp = to32i(esp+0x20); //mov
	esi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	edi = ecx; //mov
	ecx = to32i(eax+0xB4); //mov
	eax = to32i(eax+0xB8); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esi+0xF4); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+0xF8); //mov
	edx = 0x1DC; //mov
	to32i(esp+8) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(esi+0x18) = 0; //mov
	to32i(esi+0x24) = 0; //mov
	to8i(esi+0x8C) = 0; //mov
	to32i(esi+0xA8) = 0; //mov
	to32i(esi+0xAC) = 0; //mov
	to32i(esi+0xB0) = 0; //mov
	eax = to32i(esp); //mov
	to32i(esi+0xB4) = ecx; //mov
	to32i(esi+0xB8) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esi+0xF4) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esi+0xF8) = eax; //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esi+0xB4); //mov
	to32i(esi) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_46244C;
loc_4622AB:
	to32i(esi+0xEC) = 0; //mov
	to32i(esi+0xF0) = 0; //mov
	to32i(esi+0xFC) = 0; //mov
	to32i(esi+0x100) = 0x10000; //mov
	to32i(esi+0x104) = 0; //mov
	ecx = to32i(esi+0xF4); //mov
	to32i(esi+0xE8) = 0; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_462477;
loc_4622F5:
	eax = to32i(esp+0x24); //mov
	edx = ebp; //mov
	to32i(esi+0x10C) = eax; //mov
	eax = to32i(esp+0x28); //mov
	sar(edx, (int32_t)0x1F);
	to32i(esi+0x110) = eax; //mov
	eax = ebp; //mov
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ecx = eax; //mov
	imul32(ecx, eax);
	eax = to32i(esp+0x24); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(eax, eax);
	add(eax, ecx);
	to32i(esi+0x108) = ebp; //mov
	bsr(ecx, eax);
	if (jz())
		goto loc_462350;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_462350:
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	to32i(esi+0x114) = eax; //mov
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ecx = eax; //mov
	imul32(ecx, eax);
	eax = to32i(esp+0x28); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(eax, eax);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_462395;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_462395:
	to16i(esi+0x14C) = 0; //mov
	to8i(esi+0x8E) = 0; //mov
	to32i(esi+0x180) = 1; //mov
	to32i(esi+0x158) = 0; //mov
	to32i(esi+0x15C) = 0; //mov
	to8i(esi+0x90) = 0; //mov
	to32i(esi+0x94) = 0x10000; //mov
	to32i(esi+0xC0) = 0; //mov
	to32i(esi+0x160) = 0; //mov
	to32i(esi+0x164) = 0; //mov
	to32i(esi+0x168) = 0; //mov
	to32i(esi+0x16C) = 0; //mov
	to8i(esi+0x8F) = 0; //mov
	to16i(esi+0x14E) = 0; //mov
	to8i(esi+0x8D) = 1; //mov
	to32i(esi+0x98) = 0; //mov
	to32i(esi+0x150) = 0x640000; //mov
	to32i(esi+0x114) = eax; //mov
	eax = to32i(esi+0x180); //mov
	to32i(esi+0x184) = eax; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_46244C:
	eax = 0x10000; //mov
	to32i(esi+0xB4) = ebx; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esi+0xB8) = eax; //mov
	goto loc_4622AB;
loc_462477:
	eax = 0x10000; //mov
	ebx = edi; //mov
	to32i(esi+0xF4) = edi; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esi+0xF8) = eax; //mov
	goto loc_4622F5;
}
Fn(void) Game::_sub_4624B0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	esi = eax; //mov
	edi = edx; //mov
	add(eax, (int32_t)8);
	to32i(esp+0x30) = eax; //mov
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_44A690(); esp += 4; //call
	eax = edi; //mov
	shl(eax, (int32_t)3);
	add(eax, edi);
	shl(eax, (int32_t)2);
	to32i(esp+0x34) = eax; //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	to16i(esi+6) = di; //mov
	edx = to32i(eax+0xF); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x118) = edx; //mov
	edx = to32i(eax+0x10); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x11C) = edx; //mov
	edx = to32i(eax+0x11); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x120) = edx; //mov
	edx = to32i(eax+9); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x124) = edx; //mov
	edx = to32i(eax+0xA); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x128) = edx; //mov
	edx = to32i(eax+0xB); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x12C) = edx; //mov
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x130) = edx; //mov
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esi+0x134) = edx; //mov
	eax = to32i(eax+0xE); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	ebp = (int32_t)(intptr_t)(esi+0x118); //lea
	to32i(esi+0x138) = eax; //mov
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esi+0x124); //lea
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x130); //lea
	edx = esp; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp); //mov
	eax = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebp = eax; //mov
	eax = to32i(ebx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebp, eax);
	eax = to32i(ebx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebp, eax);
	to32i(esp+0x24) = ebp; //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebp = eax; //mov
	eax = to32i(ebx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebp, eax);
	eax = to32i(ebx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	add(ebp, eax);
	eax = to32i(ebx); //mov
	to32i(esp+0x28) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebp = eax; //mov
	eax = to32i(ebx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebp, eax);
	eax = to32i(ebx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(esp+0x34); //mov
	add(ebp, eax);
	eax = to32i(dword_5118A4); //mov
	add(eax, ebx);
	ebx = to32i(esp+0x24); //mov
	edx = to32i(eax); //mov
	add(ebx, edx);
	to32i(esi+0x9C) = ebx; //mov
	ebx = to32i(esp+0x28); //mov
	edx = to32i(eax+4); //mov
	add(ebx, edx);
	to32i(esi+0xA0) = ebx; //mov
	eax = to32i(eax+8); //mov
	to32i(esp+0x2C) = ebp; //mov
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = esi; //mov
	to32i(esi+0xA4) = edx; //mov
	esp -= 4; _sub_4628B0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_462FA0(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4627F0(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	ebp = to32i(esp+0x34); //mov
	esp -= 4; _sub_462730(); esp += 4; //call
	eax = to32i(dword_5118A4); //mov
	add(eax, ebp);
	ebx = (int32_t)(intptr_t)(esi+0x13C); //lea
	eax = to32i(eax+4); //mov
	edx = edi; //mov
	to32i(esi+0x154) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_462C70(); esp += 4; //call
	to32i(esi+0x15C) = eax; //mov
	edx = to32i(esi+0xA0); //mov
	to32i(esi+0x15C) = 0; //mov
	sub(edx, eax);
	ah = to8i(esi+0x8C); //mov
	to32i(esi+0xA0) = edx; //mov
	test(ah, ah);
	if (jz())
		goto loc_46270E;
	to32i(esi+0x180) = 1; //mov
loc_4626F8:
	eax = to32i(esi+0x180); //mov
	and_(eax, (int32_t)0x3F);
	to32i(esi+0x184) = eax; //mov
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_46270E:
	edx = 1; //mov
	eax = to32i(esp+0x30); //mov
	esp -= 4; _sub_449AE0(); esp += 4; //call
	to32i(esi+0x180) = eax; //mov
	goto loc_4626F8;
}
Fn(void) Game::_sub_462730()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_462752;
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esi+0x188); //lea
	esi = (int32_t)(intptr_t)(esi+0x118); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_462752:
	push32(ebx);
	edx = (int32_t)(intptr_t)(esi+0x118); //lea
	esi = to32i(edx); //mov
	ecx = esi; //mov
	to32i(eax+0x188) = esi; //mov
	neg(ecx);
	to32i(eax+0x188) = ecx; //mov
	esi = to32i(edx+4); //mov
	ebx = esi; //mov
	to32i(eax+0x18C) = esi; //mov
	neg(ebx);
	to32i(eax+0x18C) = ebx; //mov
	esi = to32i(edx+8); //mov
	to32i(eax+0x190) = esi; //mov
	neg(esi);
	to32i(eax+0x190) = esi; //mov
	esi = to32i(edx+0xC); //mov
	to32i(eax+0x194) = esi; //mov
	esi = to32i(edx+0x10); //mov
	to32i(eax+0x198) = esi; //mov
	esi = to32i(edx+0x14); //mov
	to32i(eax+0x19C) = esi; //mov
	esi = to32i(edx+0x18); //mov
	edi = esi; //mov
	to32i(eax+0x1A0) = esi; //mov
	neg(edi);
	to32i(eax+0x1A0) = edi; //mov
	esi = to32i(edx+0x1C); //mov
	ebp = esi; //mov
	to32i(eax+0x1A4) = esi; //mov
	neg(ebp);
	to32i(eax+0x1A4) = ebp; //mov
	add(eax, (int32_t)0x188);
	edx = to32i(edx+0x20); //mov
	to32i(eax+0x20) = edx; //mov
	neg(edx);
	to32i(eax+0x20) = edx; //mov
	pop32(ebx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4627F0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_462812;
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esi+0xC4); //lea
	esi = (int32_t)(intptr_t)(esi+0x118); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_462812:
	push32(ebx);
	edx = (int32_t)(intptr_t)(esi+0x118); //lea
	esi = to32i(edx); //mov
	ecx = esi; //mov
	to32i(eax+0xC4) = esi; //mov
	neg(ecx);
	to32i(eax+0xC4) = ecx; //mov
	esi = to32i(edx+4); //mov
	ebx = esi; //mov
	to32i(eax+0xC8) = esi; //mov
	neg(ebx);
	to32i(eax+0xC8) = ebx; //mov
	esi = to32i(edx+8); //mov
	to32i(eax+0xCC) = esi; //mov
	neg(esi);
	to32i(eax+0xCC) = esi; //mov
	esi = to32i(edx+0xC); //mov
	to32i(eax+0xD0) = esi; //mov
	esi = to32i(edx+0x10); //mov
	to32i(eax+0xD4) = esi; //mov
	esi = to32i(edx+0x14); //mov
	to32i(eax+0xD8) = esi; //mov
	esi = to32i(edx+0x18); //mov
	edi = esi; //mov
	to32i(eax+0xDC) = esi; //mov
	neg(edi);
	to32i(eax+0xDC) = edi; //mov
	esi = to32i(edx+0x1C); //mov
	ebp = esi; //mov
	to32i(eax+0xE0) = esi; //mov
	neg(ebp);
	to32i(eax+0xE0) = ebp; //mov
	add(eax, (int32_t)0xC4);
	edx = to32i(edx+0x20); //mov
	to32i(eax+0x20) = edx; //mov
	neg(edx);
	to32i(eax+0x20) = edx; //mov
	pop32(ebx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4628B0()
{
	push32(ecx);
	push32(ebp);
	ecx = eax; //mov
	cmp(to8i(eax+0x8D), (int8_t)0);
	if (jnz())
		goto loc_4628C0;
	pop32(ebp);
	pop32(ecx);
	return;
loc_4628C0:
	push32(edi);
	push32(esi);
	eax = ecx; //mov
	esp -= 4; _sub_462950(); esp += 4; //call
	cmp(to32i(ecx+0x17C), (int32_t)0);
	if (jz())
		goto loc_462904;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jnz())
		goto loc_462904;
loc_4628D8:
	esi = to32i(ecx+0x144); //mov
	push32(esi);
	edi = to32i(ecx+0x140); //mov
	push32(edi);
	ebp = to32i(ecx+0x13C); //mov
	push32(ebp);
	eax = to32i(ecx); //mov
	push32(eax);
	push32(aNewtonUriXDDDD);
	push32(1);
	add(esp, (int32_t)0x18);
	pop32(esi);
	pop32(edi);
	pop32(ebp);
	pop32(ecx);
	return;
loc_462904:
	eax = ecx; //mov
	esp -= 4; _sub_4633A0(); esp += 4; //call
	cmp(to16i(ecx+0x76), (int16_t)0);
	if (jz())
		goto loc_462919;
	eax = ecx; //mov
	esp -= 4; _sub_462FA0(); esp += 4; //call
loc_462919:
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jnz())
		goto loc_4628D8;
	push32(edx);
	edx = 1; //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_449AE0(); esp += 4; //call
	to32i(ecx+0x180) = eax; //mov
	and_(eax, (int32_t)0x3F);
	to32i(ecx+0x184) = eax; //mov
	pop32(edx);
	goto loc_4628D8;
}
Fn(void) Game::_sub_462950()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	cmp(to32i(dword_511E40), (int32_t)2);
	if (jg())
		goto loc_462BD6;
	edx = to32i(dword_51220C); //mov
	edx = to32i(dword_511D08+edx*4); //mov
	eax = to32i(eax+0x9C); //mov
	sub(eax, to32i(edx+0x9C));
	test(eax, eax);
	if (jle())
		goto loc_462ADC;
loc_462987:
	ebx = to32i(dword_51220C); //mov
	ebx = to32i(dword_511D08+ebx*4); //mov
	edx = eax; //mov
	eax = to32i(ecx+0xA4); //mov
	sub(eax, to32i(ebx+0xA4));
	test(eax, eax);
	if (jle())
		goto loc_462AE3;
loc_4629AA:
	cmp(edx, eax);
	if (jle())
		goto loc_462AEA;
	sar(eax, (int32_t)2);
loc_4629B5:
	add(eax, edx);
	to32i(ecx+0x88) = eax; //mov
	eax = to32i(dword_51220C); //mov
	edx = to32i(dword_511D08+eax*4); //mov
	edx = to32i(edx+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_462F70(); esp += 4; //call
	edi = to32i(dword_511E40); //mov
	ebx = eax; //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_462A7D;
	eax = 1; //mov
	sub(eax, to32i(dword_51220C));
	edx = to32i(dword_511D08+eax*4); //mov
	eax = to32i(ecx+0x9C); //mov
	sub(eax, to32i(edx+0x9C));
	test(eax, eax);
	if (jle())
		goto loc_462AF2;
loc_462A0B:
	push32(esi);
	edi = to32i(dword_51220C); //mov
	edx = eax; //mov
	eax = 1; //mov
	sub(eax, edi);
	esi = to32i(dword_511D08+eax*4); //mov
	eax = to32i(ecx+0xA4); //mov
	sub(eax, to32i(esi+0xA4));
	test(eax, eax);
	if (jle())
		goto loc_462AF9;
loc_462A36:
	cmp(edx, eax);
	if (jle())
		goto loc_462B00;
	sar(eax, (int32_t)2);
loc_462A41:
	add(eax, edx);
	edx = to32i(ecx+0x88); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_462A4F;
	eax = edx; //mov
loc_462A4F:
	esi = to32i(dword_51220C); //mov
	to32i(ecx+0x88) = eax; //mov
	eax = 1; //mov
	sub(eax, esi);
	edx = to32i(dword_511D08+eax*4); //mov
	edx = to32i(edx+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_462F70(); esp += 4; //call
	cmp(eax, ebx);
	if (jle())
		goto loc_462B08;
loc_462A7C:
	pop32(esi);
loc_462A7D:
	shl(ebx, (int32_t)0x12);
	edi = to32i(ecx+0x88); //mov
	cmp(ebx, edi);
	if (jge())
		goto loc_462A8C;
	ebx = edi; //mov
loc_462A8C:
	to32i(ecx+0x88) = ebx; //mov
	cmp(ebx, (int32_t)0xF40000);
	if (jle())
		goto loc_462B0F;
	cmp(to8i(ecx+0x8C), (int8_t)1);
	if (jz())
		goto loc_462AB9;
	to32i(ecx+0x180) = 1; //mov
	eax = to32i(ecx+0x180); //mov
	to32i(ecx+0x184) = eax; //mov
loc_462AB9:
	to32i(ecx+0xE8) = 0; //mov
	to32i(ecx+0xF0) = 0; //mov
	to8i(ecx+0x8C) = 1; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_462ADC:
	neg(eax);
	goto loc_462987;
loc_462AE3:
	neg(eax);
	goto loc_4629AA;
loc_462AEA:
	sar(edx, (int32_t)2);
	goto loc_4629B5;
loc_462AF2:
	neg(eax);
	goto loc_462A0B;
loc_462AF9:
	neg(eax);
	goto loc_462A36;
loc_462B00:
	sar(edx, (int32_t)2);
	goto loc_462A41;
loc_462B08:
	ebx = eax; //mov
	goto loc_462A7C;
loc_462B0F:
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jz())
		goto loc_462BC7;
	eax = ecx; //mov
	to8i(ecx+0x8C) = 0; //mov
	esp -= 4; _sub_4633A0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_462FA0(); esp += 4; //call
	eax = ecx; //mov
	edx = esp; //mov
	esp -= 4; _sub_462E60(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_462EA0(); esp += 4; //call
	to32i(ecx+0x180) = 1; //mov
	to32i(ecx+0x158) = 0; //mov
	to32i(ecx+0x154) = eax; //mov
	eax = to32i(ecx+0x180); //mov
	to32i(ecx+0x184) = eax; //mov
	ebx = (int32_t)(intptr_t)(ecx+0x13C); //lea
	edx = to32i(ecx+0x10C); //mov
	eax = to32i(ecx+0x154); //mov
	to32i(ecx+0x160) = 0; //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)(ecx+0x124); //lea
	to32i(ecx+0xA0) = eax; //mov
	eax = ecx; //mov
	to32i(ecx+0x164) = 0; //mov
	esp -= 4; _sub_462C70(); esp += 4; //call
	to32i(ecx+0x15C) = eax; //mov
	ebx = to32i(ecx+0xA0); //mov
	to32i(ecx+0x15C) = 0; //mov
	sub(ebx, eax);
	eax = ecx; //mov
	to32i(ecx+0xA0) = ebx; //mov
	esp -= 4; _sub_451FA0(); esp += 4; //call
loc_462BC7:
	to8i(ecx+0x8C) = 0; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_462BD6:
	to8i(eax+0x8C) = 0; //mov
	to32i(eax+0x88) = 0; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_462BF0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x9C); //mov
	sub(eax, to32i(ebx));
	edi = to32i(ebx+4); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ecx+0xA0); //mov
	sub(eax, edi);
	ebp = to32i(ebx+8); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ecx+0xA4); //mov
	sub(eax, ebp);
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x10C); //mov
	add(eax, ebx);
	sub(eax, edx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_462C70()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = eax; //mov
	esi = edx; //mov
	edi = to32i(eax+0x108); //mov
	edx = to32i(eax+0xC4); //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0xC8); //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xCC); //mov
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	to32i(esp) = eax; //mov
	eax = to32i(ecx+0x10C); //mov
	edx = to32i(ecx+0xD0); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	add(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(ecx+0x110); //mov
	edx = to32i(ecx+0xDC); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(ebp, eax);
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	add(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	test(edi, edi);
	if (jl())
		goto loc_462E3A;
	ebp = 0xFFFFFFFF; //mov
loc_462D91:
	cmp(to32i(esp+4), (int32_t)0);
	if (jl())
		goto loc_462E44;
	edi = 0xFFFFFFFF; //mov
loc_462DA1:
	cmp(to32i(esp+8), (int32_t)0);
	if (jl())
		goto loc_462E4E;
	to32i(esp+0x1C) = 0xFFFFFFFF; //mov
loc_462DB4:
	eax = to32i(ecx+0x9C); //mov
	edx = to32i(ebx); //mov
	sub(eax, edx);
	to32i(esp+0xC) = eax; //mov
	edx = to32i(ebx+4); //mov
	eax = to32i(ecx+0xA0); //mov
	sub(eax, edx);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebx+8); //mov
	imul32(ebp, to32i(esp));
	ecx = to32i(ecx+0xA4); //mov
	edx = to32i(esp+0xC); //mov
	sub(ecx, eax);
	eax = to32i(esi); //mov
	to32i(esp+0x14) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ecx = eax; //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ecx, eax);
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(edi, to32i(esp+4));
	esi = to32i(esp+8); //mov
	add(ecx, eax);
	eax = to32i(esp+0x1C); //mov
	imul32(eax, esi);
	add(ebp, edi);
	add(eax, ebp);
	add(eax, ecx);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_462E3A:
	ebp = 1; //mov
	goto loc_462D91;
loc_462E44:
	edi = 1; //mov
	goto loc_462DA1;
loc_462E4E:
	to32i(esp+0x1C) = 1; //mov
	goto loc_462DB4;
}
Fn(void) Game::_sub_462E60()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_46AEF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_462E6E;
	pop32(edx);
	return;
loc_462E6E:
	to32i(edx+0x160) = 0; //mov
	eax = edx; //mov
	to32i(edx+0x164) = 0; //mov
	esp -= 4; _sub_4633A0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_462FA0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_462EA0()
{
	push32(ebx);
	push32(ecx);
	ebx = to32i(eax+0x124); //mov
	to32i(edx) = ebx; //mov
	ebx = to32i(eax+0x128); //mov
	to32i(edx+4) = ebx; //mov
	ebx = to32i(eax+0x12C); //mov
	ecx = to32i(edx+4); //mov
	to32i(edx+8) = ebx; //mov
	cmp(ecx, (int32_t)0x1999);
	if (jg())
		goto loc_462ECF;
	eax = 0x83000000; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_462ECF:
	ebx = (int32_t)(intptr_t)(eax+0x13C); //lea
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_462EF0(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_462EF0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	ecx = edx; //mov
	esi = ebx; //mov
	ebx = to32i(edx+4); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_462F5B;
	eax = ebx; //mov
loc_462F03:
	cmp(eax, (int32_t)0xA);
	if (jge())
		goto loc_462F0D;
	ebx = 0xA; //mov
loc_462F0D:
	eax = to32i(edi); //mov
	sub(eax, to32i(esi));
	ebp = to32i(ecx); //mov
	edx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(edi+8); //mov
	edi = to32i(esi+8); //mov
	eax = to32i(ecx+8); //mov
	sub(edx, edi);
	neg(ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebp, eax);
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
	add(eax, to32i(esi+4));
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_462F5B:
	eax = ebx; //mov
	neg(eax);
	goto loc_462F03;
}
Fn(void) Game::_sub_462F70()
{
	push32(ebx);
	push32(ecx);
	cmp(eax, edx);
	if (jle())
		goto loc_462F7C;
	ecx = edx; //mov
	edx = eax; //mov
	eax = ecx; //mov
loc_462F7C:
	ebx = to32i(dword_5118A0); //mov
	ecx = edx; //mov
	sub(ebx, edx);
	sub(ecx, eax);
	add(eax, ebx);
	cmp(ecx, eax);
	if (jle())
		goto loc_462F91;
	pop32(ecx);
	pop32(ebx);
	return;
loc_462F91:
	eax = ecx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_462FA0()
{
	push32(ecx);
	push32(ebp);
	ecx = eax; //mov
	ah = to8i(eax+0x8D); //mov
	ebp = 1; //mov
	test(ah, ah);
	if (jz())
		goto loc_463170;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ebx);
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jz())
		goto loc_463173;
	xor_(ebp, ebp);
loc_462FCA:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
loc_462FE1:
	esi = eax; //mov
	edi = (int32_t)(intptr_t)(ecx+0x13C); //lea
	movsd();
	movsd();
	movsd();
	test(ebp, ebp);
	if (jz())
		goto loc_463269;
	if (jz())
		goto loc_46319F;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_46319F;
	eax = to32i(ecx+0x20); //mov
	eax = to16i(eax); //movsx
	add(eax, eax);
loc_46300C:
	to32i(ecx+0x124) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4631C0;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_4631C0;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_46302E:
	to32i(ecx+0x128) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4631E1;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_4631E1;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax+2); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_463051:
	to32i(ecx+0x12C) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_463204;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_463204;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_463074:
	to32i(ecx+0x130) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_463225;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_463225;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax+6); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_463097:
	to32i(ecx+0x134) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_463246;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_463246;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax+8); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_4630BA:
	to32i(ecx+0x138) = eax; //mov
	edx = eax; //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0x134); //mov
	eax = to32i(ecx+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x130); //mov
	sub(ebp, eax);
	eax = to32i(ecx+0x12C); //mov
	to32i(ecx+0x118) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0x138); //mov
	eax = to32i(ecx+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x134); //mov
	sub(ebp, eax);
	eax = to32i(ecx+0x124); //mov
	to32i(ecx+0x11C) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = to32i(ecx+0x130); //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebp, eax);
	to32i(ecx+0x120) = ebp; //mov
loc_46315E:
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_463310(); esp += 4; //call
	to32i(ecx+0x148) = eax; //mov
	pop32(ebx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
loc_463170:
	pop32(ebp);
	pop32(ecx);
	return;
loc_463173:
	ebx = 0xAB; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGameC_9; //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_44A930(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_462FCA;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_462FCA;
	eax = (int32_t)(intptr_t)(ecx+0x28); //lea
	goto loc_462FE1;
loc_46319F:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+9); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_46300C;
loc_4631C0:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+0xA); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_46302E;
loc_4631E1:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	eax = to32i(edx+eax+0xB); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_463051;
loc_463204:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+0xC); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_463074;
loc_463225:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+0xD); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_463097;
loc_463246:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	eax = to32i(edx+eax+0xE); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_4630BA;
loc_463269:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0xF); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x118) = edx; //mov
	edx = to32i(eax+0x10); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x11C) = edx; //mov
	edx = to32i(eax+0x11); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x120) = edx; //mov
	edx = to32i(eax+9); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x124) = edx; //mov
	edx = to32i(eax+0xA); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x128) = edx; //mov
	edx = to32i(eax+0xB); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x12C) = edx; //mov
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x130) = edx; //mov
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(ecx+0x134) = edx; //mov
	eax = to32i(eax+0xE); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	to32i(ecx+0x138) = eax; //mov
	goto loc_46315E;
}
Fn(void) Game::_sub_463310()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = eax; //mov
	ecx = to32i(dword_5118A0); //mov
	inc(eax);
	cmp(eax, ecx);
	if (jl())
		goto loc_463324;
	sub(eax, ecx);
loc_463324:
	ecx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, ecx);
	ecx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	esi = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(ecx, eax);
	edi = to32i(dword_5118A0); //mov
	ebx = to32i(esi); //mov
	esi = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx+1); //lea
	sub(ebx, esi);
	cmp(eax, edi);
	if (jl())
		goto loc_46335A;
	sub(eax, edi);
loc_46335A:
	ecx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, ecx);
	ecx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	esi = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(ecx, eax);
	eax = to32i(esi+8); //mov
	edx = to32i(ecx+8); //mov
	sub(eax, edx);
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4633A0()
{
	push32(ebx);
	push32(edx);
	xor_(ebx, ebx);
	edx = 1; //mov
	bl = to8i(eax+0x8C); //mov
	sub(edx, ebx);
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_main_()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	xor_(ecx, ecx);
	esp -= 4; _sub_430200(); esp += 4; //call
	esp -= 4; _sub_47D400(); esp += 4; //call
	esp -= 4; _sub_46F660(); esp += 4; //call
	to32i(dword_4DABFC) = ecx; //mov
loc_463437:
	test(ebp, ebp);
	if (jz())
		goto loc_46358C;
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_46344B;
	esp -= 4; _sub_408020(); esp += 4; //call
	ebp = eax; //mov
loc_46344B:
	test(ebp, ebp);
	if (jz())
		goto loc_463437;
	xor_(eax, eax);
	xor_(edx, edx);
	esp -= 4; _sub_45EF70(); esp += 4; //call
	esp -= 4; _sub_405DD4(); esp += 4; //call
	esp -= 4; _sub_463680(); esp += 4; //call
	esp -= 4; _sub_4287F0(); esp += 4; //call
loc_463478:
	eax = to32i(dword_540F20); //mov
	test(eax, eax);
	if (jz())
		goto loc_46350A;
	xor_(ecx, ecx);
	to32i(dword_540F20) = ecx; //mov
	esp -= 4; _sub_470AF0(); esp += 4; //call
	esp -= 4; _sub_4726E0(); esp += 4; //call
	esp -= 4; _sub_449540(); esp += 4; //call
	esp -= 4; _sub_44C840(); esp += 4; //call
	esp -= 4; _sub_441CC0(); esp += 4; //call
	ebx = to32i(dword_4D5A2C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_463500;
	eax = to32i(dword_51221C); //mov
	edx = ebx; //mov
	esp -= 4; _sub_4764B0(); esp += 4; //call
	to8i(byte_4D76B4) = 1; //mov
loc_4634C3:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_4634F1;
	edx = 0x13; //mov
	eax = 0x1400; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 0x14; //mov
	eax = 0xA00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
loc_4634F1:
	esp -= 4; _sub_473B80(); esp += 4; //call
	esp -= 4; _sub_471B80(); esp += 4; //call
	goto loc_463478;
loc_463500:
	xor_(ah, ah);
	to8i(byte_4D76B4) = ah; //mov
	goto loc_4634C3;
loc_46350A:
	push32(eax);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	edx = 1; //mov
	eax = edx; //mov
	esp -= 4; _sub_428830(); esp += 4; //call
	esp -= 4; _sub_446310(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_4635D0(); esp += 4; //call
	esp -= 4; _sub_476250(); esp += 4; //call
	eax = 0x12C; //mov
	esp -= 4; _sub_4769A0(); esp += 4; //call
	cmp(to32i(dword_4D5A08), (int32_t)0);
	if (jnz())
		goto loc_463566;
	to32i(dword_4D5A08) = 1; //mov
loc_463550:
	cmp(to16i(word_4D21A4), (int16_t)1);
	if (jz())
		goto loc_463570;
	esp -= 4; _sub_407E50(); esp += 4; //call
	ecx = eax; //mov
	goto loc_463437;
loc_463566:
	xor_(ecx, ecx);
	to32i(dword_4D5A08) = ecx; //mov
	goto loc_463550;
loc_463570:
	xor_(ebx, ebx);
	xor_(eax, eax);
	xor_(ecx, ecx);
	to16i(word_4D21A4) = bx; //mov
	to32i(dword_512214) = eax; //mov
	to32i(dword_4D5EF8) = eax; //mov
	goto loc_463437;
loc_46358C:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	push32(ebp);
	push32(4);
	esp -= 4; _sub_497738(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_48561C(); esp += 4; //call
	esp -= 4; _sub_476C40(); esp += 4; //call
	esp -= 4; _sub_4301B0(); esp += 4; //call
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4635D0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_46F670(); esp += 4; //call
	cmp(to32i(dword_4D5EF8), (int32_t)0);
	if (jz())
		goto loc_463627;
loc_4635E2:
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_46365A;
	xor_(edx, edx);
loc_4635ED:
	edi = to32i(dword_512260); //mov
	eax = dx; //movsx
	cmp(eax, edi);
	if (jge())
		goto loc_46365A;
	esi = to32i(dword_511B48+eax*4); //mov
	imul32(eax, 0x684);
	edi = to32i(dword_4D5EF8); //mov
	ecx = 0x684; //mov
	add(edi, eax);
	inc(edx);
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
	goto loc_4635ED;
loc_463627:
	push32(ebx);
	ecx = (int32_t)(intptr_t)aCNfs2seGameC_2; //mov
	ebx = 0x2D3; //mov
	edx = 0x4E30; //mov
	eax = (int32_t)(intptr_t)aPasstats; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D5EF8) = eax; //mov
	pop32(ebx);
	goto loc_4635E2;
loc_46365A:
	esp -= 4; _sub_470AC0(); esp += 4; //call
	esp -= 4; _sub_453780(); esp += 4; //call
	esp -= 4; _sub_472620(); esp += 4; //call
	esp -= 4; _sub_45B670(); esp += 4; //call
	esp -= 4; _sub_4490A0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_463680()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_45B380(); esp += 4; //call
	esp -= 4; _sub_470BE0(); esp += 4; //call
	esp -= 4; _sub_463850(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_47D5E0(); esp += 4; //call
	esp -= 4; _sub_473CE0(); esp += 4; //call
	esp -= 4; _sub_47F160(); esp += 4; //call
	esp -= 4; _sub_447040(); esp += 4; //call
	edx = to32i(dword_512208); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4636BE;
	eax = edx; //mov
	esp -= 4; _sub_47D5E0(); esp += 4; //call
loc_4636BE:
	esp -= 4; _sub_4637B0(); esp += 4; //call
	esp -= 4; _sub_44F910(); esp += 4; //call
	esp -= 4; _sub_47CBB0(); esp += 4; //call
	esp -= 4; _sub_42E910(); esp += 4; //call
	eax = 2; //mov
	esp -= 4; _sub_47D5E0(); esp += 4; //call
	eax = 1; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	eax = 2; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_476250(); esp += 4; //call
	eax = 0x64; //mov
	esp -= 4; _sub_4769A0(); esp += 4; //call
	esp -= 4; _sub_4537A0(); esp += 4; //call
	esp -= 4; _sub_4451C0(); esp += 4; //call
	esp -= 4; _sub_46F710(); esp += 4; //call
	eax = to32i(dword_500D28); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	esp -= 4; _sub_47CB90(); esp += 4; //call
	eax = 4; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_449120(); esp += 4; //call
	eax = 6; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_45B680(); esp += 4; //call
	eax = 7; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_472750(); esp += 4; //call
	esp -= 4; _sub_46F6C0(); esp += 4; //call
	esp -= 4; _sub_47A270(); esp += 4; //call
	esp -= 4; _sub_49F978(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_463793;
	esp -= 4; _sub_472D10(); esp += 4; //call
loc_463793:
	esp -= 4; _sub_473CA0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4637B0()
{
	push32(edx);
	sub(esp, (int32_t)0x100);
	edx = to32i(dword_513498); //mov
	push32(edx);
	push32(aSfxtext_fsh);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_500D28) = eax; //mov
	to32i(dword_51206C) = eax; //mov
	to32i(dword_55E3BC) = eax; //mov
	to32i(dword_55E430) = eax; //mov
	to32i(dword_4F227C) = eax; //mov
	to32i(dword_4F2280) = eax; //mov
	to32i(dword_512AAC) = eax; //mov
	add(esp, (int32_t)0x100);
	pop32(edx);
}
Fn(void) Game::_sub_463810()
{
	esp -= 4; _sub_470AF0(); esp += 4; //call
	esp -= 4; _sub_4726E0(); esp += 4; //call
	esp -= 4; _sub_449540(); esp += 4; //call
	esp -= 4; _sub_44C840(); esp += 4; //call
	_sub_441CC0(); return; //jmp
}
Fn(void) Game::_sub_463830()
{
	push32(ebx);
	push32(edx);
	dl = to8i(eax); //mov
	inc(dl);
	bl = to8i(eax+2); //mov
	to8i(eax) = dl; //mov
	inc(bl);
	dh = to8i(eax+1); //mov
	to8i(eax+2) = bl; //mov
	inc(dh);
	to8i(eax+1) = dh; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_463850()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = (int32_t)(intptr_t)dword_4D76D0; //mov
	edi = (int32_t)(intptr_t)dword_513058; //mov
	ecx = (int32_t)(intptr_t)(edx+0x38); //lea
loc_463861:
	esi = edx; //mov
	add(edx, (int32_t)4);
	push32(edi);
loc_463867:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_46387F;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_463867;
loc_46387F:
	pop32(edi);
	cmp(edx, ecx);
	if (jnz())
		goto loc_463861;
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_463890()
{
	_sub_4301B0(); return; //jmp
}
Fn(void) Game::_sub_4638A0()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_4638C0;
	cmp(to16i(edx+2), (int16_t)0x17);
	if (jnz())
		goto loc_463903;
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_4638EC;
	pop32(ecx);
	return;
loc_4638C0:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_463E00(); esp += 4; //call
	ecx = ax; //movsx
	ax = to16i(edx+2); //mov
	to16i(dword_513436+2+ecx*2) = ax; //mov
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_4638EC:
	push32(edi);
	edi = 1; //mov
	to16i(word_51345C) = di; //mov
	to16i(word_51345A) = di; //mov
	pop32(edi);
	pop32(ecx);
	return;
loc_463903:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ax = to16i(edx+2); //mov
	to16i(dword_513428+2) = ax; //mov
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_463930()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	to8i(esp+8) = dl; //mov
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jz())
		goto loc_4639C5;
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_4639C5;
	test(ecx, ecx);
	if (jnz())
		goto loc_4639CE;
loc_463959:
	ax = to8i(esp+8); //movsx
	dl = 3; //mov
	bx = to16i(word_513458); //mov
	to16i(esp+2) = ax; //mov
	to8i(esp) = dl; //mov
	test(bx, bx);
	if (jnz())
		goto loc_4639D7;
	xor_(ebx, ebx);
loc_463977:
	edx = to32i(esp+5); //mov
	eax = to32i(dword_513428); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_463AFC;
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_513428); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_4639AD;
	xor_(ecx, ecx);
	to16i(dword_513428+2) = cx; //mov
loc_4639AD:
	ebx = 4; //mov
	eax = to32i(dword_4D770C); //mov
	edx = esp; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
loc_4639C5:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4639CE:
	eax = to32i(dword_5637F4); //mov
	add(ecx, eax);
	goto loc_463959;
loc_4639D7:
	ebx = 4; //mov
	edx = esp; //mov
	xor_(eax, eax);
	ebp = 4; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	edx = 1; //mov
	edi = 2; //mov
	to32i(esp+4) = edx; //mov
loc_4639F8:
	eax = to32i(dword_513408); //mov
	edx = to32i(esp+4); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jle())
		goto loc_4639C5;
	eax = to32i(dword_513080+ebp); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_463A78;
	cmp(to16i(word_513448+edi), (int16_t)0);
	if (jnz())
		goto loc_463A78;
	ebx = edi; //mov
	esi = ebp; //mov
loc_463A22:
	edx = to32i(esp+5); //mov
	eax = to32i(dword_513436+ebx); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_463A83;
loc_463A36:
	eax = to32i(dword_4D770C); //mov
	edx = to32i(esp+5); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_513436+edi); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_463A5D;
	xor_(eax, edx);
	to16i(dword_513436+2+edi) = ax; //mov
loc_463A5D:
	eax = to32i(dword_4D770C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_463A67:
	ebx = to32i(esp+4); //mov
	add(edi, (int32_t)2);
	inc(ebx);
	add(ebp, (int32_t)4);
	to32i(esp+4) = ebx; //mov
	goto loc_4639F8;
loc_463A78:
	xor_(edx, edx);
	to16i(dword_513436+2+edi) = dx; //mov
	goto loc_463A67;
loc_463A83:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_463AAB;
	eax = to32i(dword_513080+esi); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jnz())
		goto loc_463ABD;
	xor_(esi, esi);
	to16i(dword_513436+2+ebx) = si; //mov
	goto loc_463A36;
loc_463AAB:
	xor_(edx, edx);
	to16i(dword_513436+2+ebx) = dx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_463ABD:
	test(ecx, ecx);
	if (jz())
		goto loc_463A22;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_463A22;
	xor_(edx, edx);
	eax = to32i(dword_513080+esi); //mov
	to16i(dword_513436+2+ebx) = dx; //mov
	ebx = 0x17; //mov
	edx = esp; //mov
	to16i(esp+2) = bx; //mov
	ebx = 4; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	goto loc_463A36;
loc_463AFC:
	eax = ebx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(bx, to16i(word_51345A));
	if (jnz())
		goto loc_463B4E;
	cmp(ebx, to32i(dword_5130A4));
	if (jz())
		goto loc_463B4E;
	test(ecx, ecx);
	if (jz())
		goto loc_463977;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_463977;
	edi = 1; //mov
	xor_(edx, edx);
	to16i(word_51345C) = di; //mov
	to16i(dword_513428+2) = dx; //mov
	to16i(word_51345A) = di; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_463B4E:
	ebx = 1; //mov
	xor_(esi, esi);
	to16i(word_51345C) = bx; //mov
	to16i(dword_513428+2) = si; //mov
	to16i(word_51345A) = bx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_463B80()
{
	cmp(to16i(word_513424), (int16_t)0);
	if (jnz())
		goto loc_463B8D;
	xor_(eax, eax);
	return;
loc_463B8D:
	push32(ebx);
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(ebx, ebx);
	eax = to32i(dword_4D7708); //mov
	to16i(word_513424) = bx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = 1; //mov
	pop32(ebx);
}
Fn(void) Game::_sub_463BC0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = edx; //mov
	cmp(to32i(byte_513420), (int32_t)0);
	if (jnz())
		goto loc_463C1F;
loc_463BCE:
	xor_(eax, eax);
loc_463BD0:
	add(eax, (int32_t)2);
	xor_(edx, edx);
	to16i(word_513446+eax) = dx; //mov
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_463BD0;
	ecx = 0x60; //mov
	edi = (int32_t)(intptr_t)byte_5133C0; //mov
	ebx = 1; //mov
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
	ecx = to32i(byte_513420); //mov
	to16i(word_513424) = bx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_463C2B;
	to32i(byte_513420) = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_463C1F:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	goto loc_463BCE;
loc_463C2B:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	to32i(byte_513420) = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_463C50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x64);
	ebx = 1; //mov
	xor_(ah, ah);
	xor_(ecx, ecx);
	xor_(edx, edx);
	to8i(byte_5133C0) = ah; //mov
	to16i(word_513424) = cx; //mov
	to16i(dword_51340C) = dx; //mov
	to16i(dword_513408+2) = bx; //mov
	ecx = (int32_t)(intptr_t)dword_513378; //mov
	al = to8i(byte_51345F); //mov
	xor_(edx, edx);
	to8i(byte_51341E) = al; //mov
loc_463C90:
	cmp(to32i(dword_5130A4+edx), (int32_t)0);
	if (jnz())
		goto loc_463D4D;
loc_463C9D:
	add(edx, (int32_t)0x68);
	add(ecx, (int32_t)9);
	cmp(edx, (int32_t)0x2D8);
	if (jnz())
		goto loc_463C90;
	ecx = (int32_t)(intptr_t)dword_5130A0; //mov
	xor_(edi, edi);
	edx = 2; //mov
	to16i(word_513448) = di; //mov
	to16i(dword_51340C+2) = di; //mov
loc_463CC5:
	add(edx, (int32_t)2);
	xor_(ebx, ebx);
	eax = ecx; //mov
	to16i(word_513446+edx) = bx; //mov
	esp -= 4; _sub_463E00(); esp += 4; //call
	add(ecx, (int32_t)0x68);
	to16i(dword_51340C+edx) = ax; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_463CC5;
	esi = 8; //mov
	ecx = 0x60; //mov
	edi = esp; //mov
	to32i(esp+0x60) = esi; //mov
	esi = (int32_t)(intptr_t)byte_5133C0; //mov
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
	edi = 1; //mov
	eax = to32i(dword_4D7708); //mov
	ecx = 4; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	to32i(esp+0x60) = edi; //mov
	edi = 0x60; //mov
loc_463D29:
	eax = to32i(dword_513408); //mov
	ebp = to32i(esp+0x60); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, ebp);
	if (jg())
		goto loc_463D95;
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_463D4D:
	eax = to32i(dword_513408); //mov
	ebx = (int32_t)(intptr_t)dword_5130A0; //mov
	sar(eax, (int32_t)0x10);
	add(ebx, edx);
	edi = (int32_t)(intptr_t)byte_5133C1; //mov
	to32i(dword_513080+eax*4) = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	esi = ecx; //mov
	add(edi, eax);
	push32(edi);
loc_463D70:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_463D88;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_463D70;
loc_463D88:
	pop32(edi);
	inc(to16i(dword_513408+2));
	goto loc_463C9D;
loc_463D95:
	eax = to32i(esp+0x60); //mov
	edx = esp; //mov
	ebx = edi; //mov
	to16i(esp+0x4C) = ax; //mov
	eax = to32i(dword_513080+ecx); //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ebp+1); //lea
	add(ecx, (int32_t)4);
	to32i(esp+0x60) = eax; //mov
	goto loc_463D29;
}
Fn(void) Game::_sub_463DC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	ebx = si; //movsx
	xor_(eax, eax);
	xor_(edx, edx);
loc_463DCD:
	ecx = to32i(dword_51340C+eax); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jz())
		goto loc_463DED;
	add(eax, (int32_t)2);
	inc(edx);
	cmp(eax, (int32_t)0x10);
	if (jl())
		goto loc_463DCD;
	eax = 0xFFFFFFFF; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_463DED:
	eax = edx; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_463E00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	edx = 4; //mov
	eax = 1; //mov
loc_463E0F:
	ecx = to32i(dword_513408); //mov
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_463E2E;
	cmp(ebx, to32i(dword_513080+edx));
	if (jz())
		goto loc_463E2A;
	inc(eax);
	add(edx, (int32_t)4);
	goto loc_463E0F;
loc_463E2A:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_463E2E:
	eax = 0xFFFFFFFF; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_463E40()
{
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	esp -= 4; _sub_47E2B0(); esp += 4; //call
	esp -= 4; _sub_421420(); esp += 4; //call
	esp -= 4; _sub_40EA70(); esp += 4; //call
	xor_(eax, eax);
	_sub_464030(); return; //jmp
}
Fn(void) Game::_sub_463E70()
{
	push32(edx);
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_463F10(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_463E8F;
loc_463E8B:
	ah = to8i(byte_4DB2F5); //mov
	test(ah, ah);
	if (jnz())
		goto loc_463E8B;
loc_463E8F:
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_463EA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(eax, eax);
loc_463EA5:
	add(eax, (int32_t)2);
	xor_(edx, edx);
	to16i(word_513422+eax) = dx; //mov
	cmp(eax, (int32_t)0x14);
	if (jnz())
		goto loc_463EA5;
	xor_(eax, eax);
loc_463EB8:
	add(eax, (int32_t)2);
	xor_(ebx, ebx);
	to16i(word_513446+eax) = bx; //mov
	to16i(dword_513436+eax) = bx; //mov
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_463EB8;
	xor_(edx, edx);
	ecx = 0x20; //mov
	to32i(byte_513420) = edx; //mov
	esp -= 4; _sub_40EAC0(); esp += 4; //call
	to32i(dword_4DABE8) = ecx; //mov
	esp -= 4; _sub_48A270(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	to32i(dword_4DABE8) = edx; //mov
	edx = 0x320; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_463F10()
{
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_463F30;
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto loc_463F30;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, to32i(dword_4DA1BC));
	if (jg())
		goto loc_463F39;
loc_463F30:
	cmp(to8i(byte_4DB2F5), (int8_t)0);
	if (jz())
		goto loc_463F3F;
loc_463F39:
	eax = 1; //mov
	return;
loc_463F3F:
	xor_(eax, eax);
}
Fn(void) Game::_sub_463F50()
{
	to16i(word_513424) = 1; //mov
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto loc_463F6C;
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_463F84;
loc_463F6C:
	push32(ecx);
	ecx = 1; //mov
	to16i(word_51345C) = cx; //mov
	to16i(word_51345A) = cx; //mov
	pop32(ecx);
	xor_(eax, eax);
	return;
loc_463F84:
	esp -= 4; _sub_463E00(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_47E470(); esp += 4; //call
	xor_(eax, eax);
}
Fn(void) Game::_sub_463FA0()
{
	push32(ecx);
	push32(esi);
	ecx = ebx; //mov
	si = to16i(word_51345A); //mov
	bl = to8i(edx); //mov
	test(si, si);
	if (jnz())
		goto loc_463FCC;
	cmp(bl, (int8_t)0xA);
	if (jnb())
		goto loc_463FD4;
	and_(ebx, (int32_t)0xFF);
	esi = (int32_t)(intptr_t)(ebx*4+0); //lea
	ebx = ecx; //mov
	call(to32i(off_4D7710+esi));
loc_463FCC:
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	return;
loc_463FD4:
	xor_(eax, eax);
	al = bl; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)aCNfs2seGame_17; //mov
	ecx = 0x193; //mov
	push32(aBugUnknownPktI);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_464010()
{
	to32i(eax+0x18) = (int32_t)(intptr_t)sub_463F50; //mov
	to32i(eax+0x20) = (int32_t)(intptr_t)sub_463FA0; //mov
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x14) = (int32_t)(intptr_t)sub_463F10; //mov
}
Fn(void) Game::_sub_464030()
{
	push32(ecx);
	push32(edx);
	edx = 1; //mov
	xor_(ecx, ecx);
	to16i(word_513458) = dx; //mov
	to16i(dword_513408+2) = dx; //mov
	xor_(dl, dl);
	to16i(word_51345A) = cx; //mov
	to8i(byte_51345E) = dl; //mov
	test(eax, eax);
	if (jnz())
		goto loc_46405D;
	pop32(edx);
	pop32(ecx);
	return;
loc_46405D:
	to16i(word_51345C) = cx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_464070()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_46409A;
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_4640A2;
loc_464091:
	cmp(to32i(dword_5130A4), (int32_t)0);
	if (jnz())
		goto loc_464103;
loc_46409A:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4640A2:
	cmp(to8i(byte_51345F), (int8_t)0);
	if (jz())
		goto loc_464091;
	test(ebp, ebp);
	if (jz())
		goto loc_4641F8;
	cmp(to32i(ebp+4), (int32_t)0);
	if (jz())
		goto loc_46409A;
	ebx = edi; //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46409A;
	cmp(to32i(ebp+4), (int32_t)0);
	if (jz())
		goto loc_4640E1;
	ecx = 0xA; //mov
loc_4640D3:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_4641AB;
loc_4640E1:
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jz())
		goto loc_4641E3;
	edx = 1; //mov
	to16i(word_51345C) = dx; //mov
	to16i(word_51345A) = dx; //mov
	goto loc_46409A;
loc_464103:
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	ebx = edi; //mov
	edx = esi; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46419B;
	cmp(to8i(esi), (int8_t)5);
	if (jnz())
		goto loc_464127;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jz())
		goto loc_46415A;
loc_464127:
	cmp(to32i(dword_5130A4), (int32_t)0);
	if (jz())
		goto loc_46413F;
	ecx = 0xA; //mov
loc_464135:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_464182;
loc_46413F:
	edx = 1; //mov
	to16i(word_51345C) = dx; //mov
	to16i(word_51345A) = dx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46415A:
	to32i(dword_513460) = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46416C:
	add(ecx, (int32_t)0x32);
	cmp(ecx, (int32_t)0x1CC);
	if (jge())
		goto loc_46413F;
	cmp(to32i(dword_5130A4), (int32_t)0);
	if (jz())
		goto loc_46413F;
	goto loc_464135;
loc_464182:
	eax = ecx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	ebx = edi; //mov
	edx = esi; //mov
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46416C;
loc_46419B:
	xor_(esi, esi);
	to32i(dword_513460) = esi; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4641AB:
	eax = ecx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	ebx = edi; //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46409A;
	add(ecx, (int32_t)0x32);
	cmp(ecx, (int32_t)0x1CC);
	if (jge())
		goto loc_4640E1;
	cmp(to32i(ebp+4), (int32_t)0);
	if (jz())
		goto loc_4640E1;
	goto loc_4640D3;
loc_4641E3:
	eax = ebp; //mov
	esp -= 4; _sub_463E00(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_47E470(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4641F8:
	xor_(ecx, ecx);
	to16i(esp) = cx; //mov
loc_4641FE:
	eax = to32i(esp-2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x68);
	cmp(to32i(dword_5130A4+eax), (int32_t)0);
	if (jz())
		goto loc_464264;
	add(eax, (int32_t)(intptr_t)dword_5130A0);
	ebx = edi; //mov
	edx = esi; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_464264;
	ecx = 0xA; //mov
	xor_(ebp, ebp);
loc_46422A:
	edx = to32i(esp-2); //mov
	sar(edx, (int32_t)0x10);
	imul32(edx, 0x68);
	cmp(to32i(dword_5130A4+edx), (int32_t)0);
	if (jnz())
		goto loc_464285;
loc_46423D:
	test(ebp, ebp);
	if (jnz())
		goto loc_464264;
	cmp(to8i(byte_51345E), (int8_t)3);
	if (jnz())
		goto loc_4642AC;
	eax = to32i(esp-2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x68);
	add(eax, (int32_t)(intptr_t)dword_5130A0);
	esp -= 4; _sub_463E00(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_47E470(); esp += 4; //call
loc_464264:
	ecx = to32i(esp); //mov
	inc(ecx);
	to16i(esp) = cx; //mov
	cmp(cx, (int16_t)7);
	if (jge())
		goto loc_46409A;
	goto loc_4641FE;
loc_464278:
	add(ecx, (int32_t)0x32);
	cmp(ecx, (int32_t)0x1CC);
	if (jl())
		goto loc_46422A;
	goto loc_46423D;
loc_464285:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_46423D;
	eax = ecx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5130A0; //mov
	ebx = edi; //mov
	add(eax, edx);
	edx = esi; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_464278;
	goto loc_464264;
loc_4642AC:
	edx = 1; //mov
	to16i(word_51345C) = dx; //mov
	to16i(word_51345A) = dx; //mov
	goto loc_464264;
}
Fn(void) Game::_sub_4642D0()
{
	push32(edx);
	edx = to32i(dword_513504); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4642DD;
	pop32(edx);
	return;
loc_4642DD:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_4642F0()
{
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	eax = (int32_t)(intptr_t)aInstall_win_0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_513504) = eax; //mov
	to32i(esp) = eax; //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	edx = to32i(dword_513504); //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)(eax-2); //lea
	xor_(eax, eax);
loc_46431D:
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(dword_513460+eax) = ecx; //mov
	cmp(eax, (int32_t)0xA0);
	if (jnz())
		goto loc_46431D;
	cmp(edx, to32i(esp));
	if (jbe())
		goto loc_464354;
loc_464334:
	edi = to32i(esp); //mov
	add(edi, (int32_t)3);
	eax = esp; //mov
	to32i(esp) = edi; //mov
	to32i(dword_513464+ecx) = edi; //mov
	esp -= 4; _sub_4643B0(); esp += 4; //call
	ebp = to32i(esp); //mov
	add(ecx, (int32_t)4);
	cmp(edx, ebp);
	if (ja())
		goto loc_464364;
loc_464354:
	eax = to32i(dword_5134BC); //mov
	to8i(eax) = 0; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	return;
loc_464364:
	to8i(ebp+0) = 0; //mov
	inc(to32i(esp));
	eax = esp; //mov
	esp -= 4; _sub_464390(); esp += 4; //call
	cmp(edx, to32i(esp));
	if (jbe())
		goto loc_464354;
	cmp(edx, to32i(esp));
	if (ja())
		goto loc_464334;
	eax = to32i(dword_5134BC); //mov
	to8i(eax) = 0; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_464390()
{
	push32(ebx);
	push32(edx);
loc_464392:
	edx = to32i(eax); //mov
	bl = to8i(edx); //mov
	cmp(bl, (int8_t)0xA);
	if (jz())
		goto loc_4643A0;
	cmp(bl, (int8_t)0xD);
	if (jnz())
		goto loc_4643A4;
loc_4643A0:
	inc(to32i(eax));
	goto loc_464392;
loc_4643A4:
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4643B0()
{
	push32(ebx);
	push32(edx);
	edx = eax; //mov
loc_4643B4:
	eax = to32i(edx); //mov
	bl = to8i(eax); //mov
	cmp(bl, (int8_t)0xA);
	if (jz())
		goto loc_4643C7;
	cmp(bl, (int8_t)0xD);
	if (jz())
		goto loc_4643C7;
	inc(eax);
	to32i(edx) = eax; //mov
	goto loc_4643B4;
loc_4643C7:
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_4643D0()
{
	push32(edx);
	cmp(eax, (int32_t)0xD);
	if (jle())
		goto loc_4643D8;
loc_4643D6:
	goto loc_4643D6;
loc_4643D8:
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	edx = to32i(dword_513508); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	pop32(edx);
}
Fn(void) Game::_sub_464400()
{
	push32(ecx);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = to32i(dword_51350C); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	al = to8i(ecx+eax); //mov
	and_(eax, (int32_t)0xFF);
	sub(eax, (int32_t)0x61);
	cmp(eax, (int32_t)0xD);
	if (jg())
		goto loc_46442D;
	test(eax, eax);
	if (jl())
		goto loc_46442D;
	pop32(ecx);
	return;
loc_46442D:
	xor_(eax, eax);
	pop32(ecx);
}
Fn(void) Game::_sub_464440()
{
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)dword_4D7738; //mov
	ecx = (int32_t)(intptr_t)dword_4D7768; //mov
	to32i(dword_51350C) = edx; //mov
	to32i(dword_513508) = ecx; //mov
	esp -= 4; _sub_464470(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_464470()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x2C);
	edx = to32i(dword_51346C); //mov
	push32(edx);
	push32(aSprsonal_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	ebx = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = esp; //mov
	xor_(edi, edi);
	esp -= 4; _sub_475F80(); esp += 4; //call
	edx = eax; //mov
loc_4644A3:
	esi = edi; //mov
	xor_(ecx, ecx);
loc_4644A7:
	eax = edx; //mov
	esp -= 4; _sub_475EB0(); esp += 4; //call
	ebx = to32i(dword_51350C); //mov
	inc(ecx);
	add(ebx, esi);
	to8i(ecx+ebx-1) = al; //mov
	cmp(ecx, (int32_t)0xC);
	if (jl())
		goto loc_4644A7;
	add(edi, (int32_t)0xC);
	cmp(edi, (int32_t)0x30);
	if (jnz())
		goto loc_4644A3;
	ecx = 0x61; //mov
	xor_(edi, edi);
	to32i(esp+0x28) = ecx; //mov
loc_4644D3:
	eax = edx; //mov
	esp -= 4; _sub_475EB0(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to8i(ecx+edi) = al; //mov
	eax = edx; //mov
	esp -= 4; _sub_475EB0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475EB0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475EB0(); esp += 4; //call
	eax = to32i(dword_513508); //mov
	al = to8i(edi+eax); //mov
	ebx = to32i(esp+0x28); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, ebx);
	if (jz())
		goto loc_464513;
loc_464511:
	goto loc_464511;
loc_464513:
	esi = edi; //mov
	xor_(ecx, ecx);
loc_464517:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(dword_513508); //mov
	add(ecx, (int32_t)4);
	add(ebx, esi);
	to32i(ecx+ebx) = eax; //mov
	cmp(ecx, (int32_t)0x54);
	if (jnz())
		goto loc_464517;
	esi = edi; //mov
	xor_(ecx, ecx);
loc_464535:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(dword_513508); //mov
	add(ecx, (int32_t)4);
	add(ebx, esi);
	to32i(ecx+ebx+0x54) = eax; //mov
	cmp(ecx, (int32_t)0x54);
	if (jnz())
		goto loc_464535;
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xAC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xB0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xB4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xB8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xBC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xC0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xC4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xC8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xCC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xD0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xD4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xD8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xDC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_513508); //mov
	to32i(ecx+esi+0xE0) = eax; //mov
	esi = to32i(esp+0x28); //mov
	inc(esi);
	add(edi, (int32_t)0xE4);
	to32i(esp+0x28) = esi; //mov
	cmp(edi, (int32_t)0xB94);
	if (jl())
		goto loc_4644D3;
	eax = edx; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	add(esp, (int32_t)0x2C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_464700()
{
	push32(ecx);
	push32(edx);
	edx = to32i(eax+0x31C); //mov
	test(edx, edx);
	if (jle())
		goto loc_46471D;
	ecx = (int32_t)(intptr_t)(edx+1); //lea
	to32i(eax+0x31C) = ecx; //mov
	cmp(ecx, (int32_t)0x80);
	if (jg())
		goto loc_464720;
loc_46471D:
	pop32(edx);
	pop32(ecx);
	return;
loc_464720:
	to8i(eax+0x318) = 1; //mov
	to32i(eax+0x31C) = 0; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_464740()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x3C);
	ecx = eax; //mov
	cmp(to16i(eax+0x14C), (int16_t)0);
	if (jnz())
		goto loc_464939;
	edx = to32i(eax+0x31C); //mov
	test(edx, edx);
	if (jle())
		goto loc_464939;
	cmp(edx, (int32_t)0xA);
	if (jge())
		goto loc_464939;
	push32(edi);
	push32(esi);
	push32(ebx);
	edi = (int32_t)(intptr_t)(esp+0x3C); //lea
	esi = (int32_t)(intptr_t)(ecx+0xA8); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(eax+0xC4); //mov
	eax = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xC8); //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xCC); //mov
	add(ebx, eax);
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x30) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	add(ebx, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x34) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(ebx, eax);
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(ecx+0xC4); //lea
	to32i(esp+0x38) = ebx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x30); //mov
	ebx = to32i(esp+0x3A); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, (int32_t)2);
	edx = to32i(esp+0x10); //mov
	to16i(esp+0x3A) = bx; //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+0x3C) = ebx; //mov
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	to32i(esp+0x40) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	esi = (int32_t)(intptr_t)(esp+0x3C); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	edi = (int32_t)(intptr_t)(ecx+0xA8); //lea
	to32i(esp+0x44) = ebx; //mov
	movsd();
	movsd();
	movsd();
	pop32(ebx);
	pop32(esi);
	pop32(edi);
loc_464939:
	xor_(eax, eax);
	al = to8i(ecx+0x318); //mov
	test(eax, eax);
	if (jz())
		goto loc_464965;
	cmp(to8i(ecx+0x2DD), (int8_t)0);
	if (jz())
		goto loc_464965;
	to8i(ecx+0x318) = 0; //mov
	to32i(ecx+0x31C) = 1; //mov
	add(esp, (int32_t)0x3C);
	pop32(edx);
	pop32(ecx);
	return;
loc_464965:
	eax = ecx; //mov
	esp -= 4; _sub_464700(); esp += 4; //call
	add(esp, (int32_t)0x3C);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_464980()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x54);
	ecx = eax; //mov
	cmp(to32i(eax+0x15C), (int32_t)0x10000);
	if (jge())
		goto loc_4649A9;
	cmp(to16i(eax+0x14C), (int16_t)0);
	if (jz())
		goto loc_4649A9;
	cmp(to32i(eax+0xAC), (int32_t)0);
	if (jl())
		goto loc_4649D6;
loc_4649A9:
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_4649CD;
	cmp(to32i(dword_4D5794), (int32_t)0);
	if (jz())
		goto loc_464D4B;
loc_4649BF:
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jz())
		goto loc_464D72;
loc_4649CD:
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4649D6:
	cmp(to32i(eax+0x198), (int32_t)0x8000);
	if (jle())
		goto loc_4649A9;
	edx = to32i(eax+0xD0); //mov
	eax = to32i(eax+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_4649A9;
	push32(edi);
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	esi = (int32_t)(intptr_t)(ecx+0xD0); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(esp+0x28); //mov
	edx = to32i(ecx+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x18C); //mov
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x190); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x194); //mov
	add(ebx, eax);
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x4C) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x198); //mov
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x19C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x28); //mov
	to32i(esp+0x50) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = (int32_t)(intptr_t)(ecx+0x124); //lea
	movsd();
	movsd();
	movsd();
	add(ebx, eax);
	eax = to32i(esp+0x28); //mov
	edx = to32i(ecx+0x188); //mov
	to32i(esp+0x54) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x18C); //mov
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x190); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+0x40) = ebx; //mov
	pop32(edi);
	eax = to32i(esp+0x24); //mov
	edx = to32i(ecx+0x194); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x198); //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x19C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	add(ebx, eax);
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x40) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x4C); //mov
	edx = ebx; //mov
	to32i(esp+0x44) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x50); //mov
	to32i(esp+0x30) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x48); //mov
	to32i(esp+0x34) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	to32i(esp+0x38) = ebx; //mov
	edx = esp; //mov
	eax = (int32_t)(intptr_t)(ecx+0x188); //lea
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp); //mov
	eax = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xE8) = ebx; //mov
	eax = to32i(esp+0x30); //mov
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xEC) = ebx; //mov
	eax = to32i(esp+0x30); //mov
	edx = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xF0) = ebx; //mov
	goto loc_4649A9;
loc_464D4B:
	ebp = (int32_t)(intptr_t)aCNfs2seGame_18; //mov
	eax = 0xF7C; //mov
	push32(aErrorAiSpeedFi);
	to32i(dword_4DB1D8) = ebp; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_4649BF;
loc_464D72:
	eax = to32i(ecx+0x14); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4D5794); //mov
	al = to8i(edx+eax*2); //mov
	and_(eax, (int32_t)0xFF);
	edx = 0xE666; //mov
	shl(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x2EC); //mov
	ebx = eax; //mov
	eax = to32i(edx+0xF4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = ebx; //mov
	imul32(edx, eax);
	ebx = 0x68; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = eax; //mov
	edx = to32i(ecx+0xD0); //mov
	eax = to32i(ecx+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_464EC1;
	edx = to32i(ecx+0xD0); //mov
	eax = to32i(ecx+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
loc_464E64:
	cmp(eax, (int32_t)0xD999);
	if (jle())
		goto loc_464E84;
	edx = to32i(ecx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_464F10;
	eax = edx; //mov
loc_464E7B:
	cmp(eax, (int32_t)3);
	if (jz())
		goto loc_464F19;
loc_464E84:
	cmp(esi, to32i(ecx+0x2B8));
	if (jg())
		goto loc_4649CD;
	esi = to32i(ecx+0x30C); //mov
	cmp(esi, (int32_t)0xFFFFFAE2);
	if (jle())
		goto loc_464F2C;
	cmp(esi, (int32_t)0x51E);
	if (jl())
		goto loc_4649CD;
	to32i(ecx+0x2F4) = 3; //mov
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_464EC1:
	edx = to32i(ecx+0xD0); //mov
	eax = to32i(ecx+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	neg(eax);
	goto loc_464E64;
loc_464F10:
	eax = edx; //mov
	neg(eax);
	goto loc_464E7B;
loc_464F19:
	to32i(ecx+0x2F4) = 0; //mov
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_464F2C:
	to32i(ecx+0x2F4) = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_464F40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ecx = eax; //mov
	dl = to8i(byte_512218); //mov
	eax = to32i(eax+0x184); //mov
	test(dl, (int8_t)8);
	if (jnz())
		goto loc_4656E6;
	al = (int32_t)(intptr_t)byte_4D84D4[eax]; //mov
loc_464F66:
	and_(eax, (int32_t)0xFF);
	to32i(ecx+0x200) = eax; //mov
	cmp(to32i(ecx+0x2F4), (int32_t)0);
	if (jnz())
		goto loc_464FCD;
	cmp(to32i(ecx+0x2FC), (int32_t)0);
	if (jnz())
		goto loc_464FCD;
	esi = to32i(ecx+0x2FC); //mov
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_4656F1;
loc_464F92:
	eax = to32i(ecx+0x324); //mov
	sub(eax, (int32_t)0x40000);
	test(eax, eax);
	if (jle())
		goto loc_4656FE;
loc_464FA5:
	to32i(ecx+0x324) = eax; //mov
loc_464FAB:
	cmp(to32i(ecx+0x2FC), (int32_t)2);
	if (jge())
		goto loc_464FCD;
	eax = to32i(ecx+0x328); //mov
	sub(eax, (int32_t)0x40000);
	test(eax, eax);
	if (jle())
		goto loc_465705;
loc_464FC7:
	to32i(ecx+0x328) = eax; //mov
loc_464FCD:
	eax = ecx; //mov
	esp -= 4; _sub_467940(); esp += 4; //call
	edx = to32i(ecx+0x188); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x18C); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x190); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x194); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xA8); //mov
	to32i(ecx+0x2B0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x198); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x19C); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xA8); //mov
	to32i(ecx+0x2B4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x2B8) = ebx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46570C;
	edx = ebx; //mov
loc_4650C8:
	ebx = to32i(ecx+0x2B0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_465715;
	eax = ebx; //mov
loc_4650D8:
	esp -= 4; _sub_45ED40(); esp += 4; //call
	esi = to32i(ecx+0x2B8); //mov
	to32i(ecx+0x304) = eax; //mov
	test(esi, esi);
	if (jl())
		goto loc_46571E;
loc_4650F1:
	edx = to32i(ecx+0x188); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x18C); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x190); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x194); //mov
	add(ebx, eax);
	xor_(eax, eax);
	to32i(dword_513518) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x198); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x19C); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	add(ebx, eax);
	xor_(eax, eax);
	to32i(dword_51351C) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(ecx+0x2B0); //mov
	ebp = eax; //mov
	to32i(ecx+0x2A4) = eax; //mov
	neg(ebp);
	eax = to32i(ecx+0x2B4); //mov
	to32i(ecx+0x2A4) = ebp; //mov
	to32i(ecx+0x2A8) = eax; //mov
	neg(eax);
	to32i(ecx+0x2A8) = eax; //mov
	eax = to32i(ecx+0x2B8); //mov
	to32i(dword_513520) = ebx; //mov
	to32i(ecx+0x2AC) = eax; //mov
	edx = eax; //mov
	eax = to32i(ecx+0xE8); //mov
	neg(edx);
	to32i(esp+0x24) = eax; //mov
	ebx = eax; //mov
	to32i(ecx+0x2AC) = edx; //mov
	neg(ebx);
	eax = to32i(ecx+0xEC); //mov
	to32i(esp+0x24) = ebx; //mov
	to32i(esp+0x28) = eax; //mov
	esi = eax; //mov
	eax = to32i(ecx+0xF0); //mov
	neg(esi);
	to32i(esp+0x2C) = eax; //mov
	edi = eax; //mov
	eax = ecx; //mov
	to32i(esp+0x28) = esi; //mov
	esp -= 4; _sub_46A620(); esp += 4; //call
	eax = ecx; //mov
	neg(edi);
	esp -= 4; _sub_466AB0(); esp += 4; //call
	ebp = to32i(dword_512230); //mov
	to32i(esp+0x2C) = edi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_465255;
	eax = ecx; //mov
	esp -= 4; _sub_464980(); esp += 4; //call
loc_465255:
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jnz())
		goto loc_46572D;
	eax = to32i(ecx+0x2E8); //mov
	test(eax, eax);
	if (jnz())
		goto loc_46572D;
	edx = to32i(ecx+0x1E8); //mov
	to32i(ecx+0x284) = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_465769;
	test(to8i(byte_512218), (int8_t)0x10);
	if (jz())
		goto loc_465769;
loc_465292:
	cmp(to32i(ecx+0x288), (int32_t)0);
	if (jnz())
		goto loc_46577F;
	eax = ecx; //mov
	esp -= 4; _sub_465F60(); esp += 4; //call
loc_4652A6:
	eax = ecx; //mov
	esp -= 4; _sub_465840(); esp += 4; //call
	edi = to32i(ecx+0x304); //mov
	cmp(edi, (int32_t)0xF0000);
	if (jge())
		goto loc_4652E4;
	test(edi, edi);
	if (jle())
		goto loc_4652E4;
	cmp(to8i(ecx+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_4652E4;
	eax = to32i(ecx+0x310); //mov
	test(eax, eax);
	if (jle())
		goto loc_465792;
	cmp(edi, eax);
	if (jle())
		goto loc_46578B;
loc_4652DE:
	to32i(ecx+0x310) = eax; //mov
loc_4652E4:
	ebp = to32i(esp+0x28); //mov
	eax = to32i(ecx+0x304); //mov
	esi = to32i(ecx+0x2AC); //mov
	edi = to32i(ecx+0x2A4); //mov
	add(esi, eax);
	eax = to32i(ecx+0x310); //mov
	edx = esp; //mov
	add(edi, eax);
	eax = to32i(ecx+0x30C); //mov
	to32i(ecx+0x2A8) = 0; //mov
	add(ebp, eax);
	xor_(eax, eax);
	to32i(ecx+0x2AC) = esi; //mov
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x2C) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x188); //lea
	to32i(ecx+0x2A4) = edi; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_453670(); esp += 4; //call
	edx = to32i(esp); //mov
	eax = to32i(ecx+0x2A4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x28C) = ebx; //mov
	eax = to32i(ecx+0x2A4); //mov
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x290) = ebx; //mov
	eax = to32i(ecx+0x2A4); //mov
	edx = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+0x28) = ebp; //mov
	to32i(ecx+0x294) = ebx; //mov
	edx = to32i(esp); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x298) = ebx; //mov
	xor_(eax, eax);
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x29C) = ebx; //mov
	xor_(eax, eax);
	edx = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x2A0) = ebx; //mov
	eax = to32i(ecx+0x298); //mov
	add(to32i(ecx+0xE8), eax);
	esi = to32i(ecx+0xEC); //mov
	edi = to32i(ecx+0xF0); //mov
	ebp = to32i(ecx+0xA8); //mov
	edx = to32i(ecx+0xAC); //mov
	eax = to32i(ecx+0x29C); //mov
	ebx = to32i(ecx+0xB0); //mov
	add(esi, eax);
	eax = to32i(ecx+0x2A0); //mov
	to32i(ecx+0xEC) = esi; //mov
	add(edi, eax);
	eax = to32i(ecx+0x28C); //mov
	to32i(ecx+0xF0) = edi; //mov
	add(ebp, eax);
	eax = to32i(ecx+0x290); //mov
	to32i(ecx+0xA8) = ebp; //mov
	add(edx, eax);
	eax = to32i(ecx+0x294); //mov
	to32i(ecx+0xAC) = edx; //mov
	add(ebx, eax);
	esi = to32i(ecx+0x1E8); //mov
	to32i(ecx+0xB0) = ebx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_4657AB;
	test(to8i(byte_512218), (int8_t)0x10);
	if (jz())
		goto loc_4657AB;
loc_46555E:
	cmp(to32i(ecx+0x288), (int32_t)0);
	if (jnz())
		goto loc_46556E;
	eax = ecx; //mov
	esp -= 4; _sub_464740(); esp += 4; //call
loc_46556E:
	cmp(to8i(ecx+0x2DA), (int8_t)1);
	if (jnz())
		goto loc_465636;
	eax = to32i(ecx+0x2B8); //mov
	test(eax, eax);
	if (jle())
		goto loc_4657CA;
loc_465589:
	cmp(eax, (int32_t)0x140000);
	if (jge())
		goto loc_465636;
	eax = 0xFEB8; //mov
	edx = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = eax; //mov
	eax = 0xFEB8; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	to32i(ecx+0xAC) = eax; //mov
	eax = 0xFEB8; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE8); //mov
	to32i(ecx+0xB0) = eax; //mov
	eax = 0xFEB8; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xEC); //mov
	to32i(ecx+0xE8) = eax; //mov
	eax = 0xFEB8; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xF0); //mov
	to32i(ecx+0xEC) = eax; //mov
	eax = 0xFEB8; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xF0) = eax; //mov
loc_465636:
	ebx = to32i(ecx+0x2A4); //mov
	to32i(ecx+0x204) = 0; //mov
	shl(ebx, (int32_t)3);
	edx = to32i(ecx+0x2AC); //mov
	to32i(ecx+0x2A4) = ebx; //mov
	shl(edx, (int32_t)3);
	esi = to32i(ecx+0x2B0); //mov
	to32i(ecx+0x2AC) = edx; //mov
	test(esi, esi);
	if (jle())
		goto loc_4657D1;
	edx = esi; //mov
loc_46566E:
	edi = to32i(ecx+0x2B8); //mov
	test(edi, edi);
	if (jle())
		goto loc_4657DA;
	eax = edi; //mov
loc_46567E:
	cmp(edx, eax);
	if (jle())
		goto loc_4657F5;
	edx = to32i(ecx+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_4657E3;
	eax = edx; //mov
loc_465696:
	edx = eax; //mov
	ebx = to32i(ecx+0x2B0); //mov
	sar(edx, (int32_t)2);
	test(ebx, ebx);
	if (jle())
		goto loc_4657EC;
	eax = ebx; //mov
loc_4656AB:
	add(eax, edx);
	to32i(ecx+0x304) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_46581B;
loc_4656BB:
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_4656CF;
	cmp(to8i(ecx+0x2D7), (int8_t)0x40);
	if (jb())
		goto loc_465822;
loc_4656CF:
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_465822;
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4656E6:
	al = (int32_t)(intptr_t)byte_4D84E8[eax]; //mov
	goto loc_464F66;
loc_4656F1:
	test(esi, esi);
	if (jz())
		goto loc_464F92;
	goto loc_464FAB;
loc_4656FE:
	xor_(eax, eax);
	goto loc_464FA5;
loc_465705:
	xor_(eax, eax);
	goto loc_464FC7;
loc_46570C:
	edx = ebx; //mov
	neg(edx);
	goto loc_4650C8;
loc_465715:
	eax = ebx; //mov
	neg(eax);
	goto loc_4650D8;
loc_46571E:
	edi = eax; //mov
	neg(edi);
	to32i(ecx+0x304) = edi; //mov
	goto loc_4650F1;
loc_46572D:
	to32i(ecx+0x2A4) = 0; //mov
	to32i(ecx+0x204) = 0; //mov
	to32i(ecx+0x324) = 0; //mov
	to32i(ecx+0x328) = 0; //mov
	to32i(ecx+0x2AC) = 0; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_465769:
	cmp(to32i(ecx+0x1E8), (int32_t)1);
	if (jnz())
		goto loc_46577F;
	test(to8i(byte_512218), (int8_t)0x20);
	if (jnz())
		goto loc_465292;
loc_46577F:
	eax = ecx; //mov
	esp -= 4; _sub_466280(); esp += 4; //call
	goto loc_4652A6;
loc_46578B:
	eax = edi; //mov
	goto loc_4652DE;
loc_465792:
	eax = edi; //mov
	edx = to32i(ecx+0x310); //mov
	neg(eax);
	cmp(eax, edx);
	if (jg())
		goto loc_4652DE;
	eax = edx; //mov
	goto loc_4652DE;
loc_4657AB:
	cmp(to32i(ecx+0x1E8), (int32_t)1);
	if (jnz())
		goto loc_46556E;
	test(to8i(byte_512218), (int8_t)0x20);
	if (jnz())
		goto loc_46555E;
	goto loc_46556E;
loc_4657CA:
	neg(eax);
	goto loc_465589;
loc_4657D1:
	edx = esi; //mov
	neg(edx);
	goto loc_46566E;
loc_4657DA:
	eax = edi; //mov
	neg(eax);
	goto loc_46567E;
loc_4657E3:
	eax = edx; //mov
	neg(eax);
	goto loc_465696;
loc_4657EC:
	eax = ebx; //mov
loc_4657EE:
	neg(eax);
	goto loc_4656AB;
loc_4657F5:
	ebp = to32i(ecx+0x2B0); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_465815;
	eax = ebp; //mov
loc_465801:
	edx = eax; //mov
	eax = to32i(ecx+0x2B8); //mov
	sar(edx, (int32_t)2);
	test(eax, eax);
	if (jle())
		goto loc_4657EE;
	goto loc_4656AB;
loc_465815:
	eax = ebp; //mov
	neg(eax);
	goto loc_465801;
loc_46581B:
	neg(eax);
	goto loc_4656BB;
loc_465822:
	to32i(ecx+0x328) = 0; //mov
	to32i(ecx+0x324) = 0; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_465840()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebx = eax; //mov
	ecx = 6; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4646D0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4646D0+0x18); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(eax+0x21C); //mov
	xor_(ebp, ebp);
	ecx = to32i(eax); //mov
	to32i(esp+0x30) = ebp; //mov
	cmp(ecx, (int32_t)0xE);
	if (jnz())
		goto loc_465C81;
	esi = to32i(ebx+0x2F4); //mov
	test(esi, esi);
	if (jle())
		goto loc_465C50;
	eax = esi; //mov
loc_465890:
	cmp(eax, (int32_t)5);
	if (jnz())
		goto loc_465C59;
loc_465899:
	to32i(ebx+0x2F4) = 0; //mov
loc_4658A3:
	eax = to32i(ebx+0x2F4); //mov
	neg(eax);
loc_4658AB:
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_465CB9;
	ecx = to32i(ebx+0x304); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_465CA0;
	eax = ecx; //mov
loc_4658C4:
	cmp(eax, (int32_t)0xF0000);
	if (jge())
		goto loc_465CA9;
loc_4658CF:
	edi = to32i(ebx+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_465CD5;
	eax = edi; //mov
loc_4658DF:
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_465CB9;
	to32i(ebx+0x2F4) = 0; //mov
loc_4658F2:
	eax = to32i(ebx+0x304); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ecx = eax; //mov
	imul32(ecx, eax);
	eax = to32i(ebx+0x30C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)9);
	sbb(eax, edx);
	sar(eax, (int32_t)9);
	imul32(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_465CDE;
loc_465928:
	ebp = eax; //mov
	dl = to8i(ebx+0x2D7); //mov
	to32i(ebx+0x2F4) = 0; //mov
	cmp(dl, (int8_t)0x40);
	if (jnb())
		goto loc_4659CC;
	ebp = to32i(ebx+0x2EC); //mov
	ecx = to32i(ebp+0x158); //mov
	ebp = eax; //mov
	sub(ebp, ecx);
	test(ebp, ebp);
	if (jl())
		goto loc_465CE5;
loc_46595B:
	eax = 0x10000; //mov
	sub(eax, ebp);
	ebp = eax; //mov
	cmp(eax, (int32_t)0x9999);
	if (jge())
		goto loc_4659A7;
	eax = to32i(ebx+0x324); //mov
	add(eax, (int32_t)0x3333);
	to32i(ebx+0x2F4) = 5; //mov
	cmp(eax, (int32_t)0x50000);
	if (jle())
		goto loc_46598C;
	eax = 0x50000; //mov
loc_46598C:
	to32i(ebx+0x324) = eax; //mov
	eax = to32i(ebx+0x364); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebx+0x364) = eax; //mov
loc_4659A7:
	cmp(ebp, (int32_t)0x8000);
	if (jge())
		goto loc_4659CC;
	eax = to32i(ebx+0x328); //mov
	add(eax, (int32_t)0x3333);
	cmp(eax, (int32_t)0x50000);
	if (jle())
		goto loc_4659C6;
	eax = 0x50000; //mov
loc_4659C6:
	to32i(ebx+0x328) = eax; //mov
loc_4659CC:
	esi = to32i(ebx+0x2F4); //mov
	test(esi, esi);
	if (jle())
		goto loc_465CEC;
	eax = esi; //mov
loc_4659DC:
	edi = to32i(ebx+0x304); //mov
	esi = to32i(esp+eax*4); //mov
	test(edi, edi);
	if (jle())
		goto loc_465CF5;
	eax = edi; //mov
loc_4659EF:
	cmp(eax, (int32_t)0x50000);
	if (jge())
		goto loc_465CFE;
	cmp(to8i(ebx+0x2D7), (int8_t)0x20);
	if (jnb())
		goto loc_465CFE;
loc_465A07:
	add(esi, esi);
loc_465A09:
	cmp(to32i(ebx+0x30C), (int32_t)0xFFFFFAE2);
	if (jle())
		goto loc_465D1D;
	cmp(to32i(ebx+0x2F4), (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_465D1D;
loc_465A26:
	edx = 1; //mov
	ecx = to32i(ebx+0x200); //mov
	to32i(esp+0x30) = edx; //mov
	cmp(ecx, (int32_t)3);
	if (jge())
		goto loc_465A93;
	cmp(to32i(dword_4D8508), (int32_t)0xC000);
	if (jle())
		goto loc_465D5D;
	ecx = to32i(ebx+0x2F4); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_465D4B;
	eax = ecx; //mov
loc_465A5A:
	eax = to32i(esp+eax*4); //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
	eax = ecx; //mov
	ecx = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(ecx, esi);
	cmp(ecx, eax);
	if (jle())
		goto loc_465A91;
	esi = to32i(ebx+0x2F4); //mov
	test(esi, esi);
	if (jle())
		goto loc_465D54;
	eax = esi; //mov
loc_465A85:
	eax = to32i(esp+eax*4); //mov
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ecx, eax);
loc_465A91:
	esi = ecx; //mov
loc_465A93:
	cmp(to32i(ebx+0x2F4), (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_465DA2;
	cmp(to32i(ebx+0x310), (int32_t)0x4CCC);
	if (jge())
		goto loc_465DA2;
loc_465AB0:
	to32i(ebx+0x2F4) = 0; //mov
	to32i(ebx+0x310) = 0; //mov
loc_465AC4:
	eax = to32i(ebx+0x2F4); //mov
	neg(eax);
loc_465ACC:
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_465DF3;
	eax = to32i(ebx+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_465DCA;
loc_465AE3:
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_465DF3;
	edx = to32i(ebx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_465DD1;
	eax = edx; //mov
loc_465AFC:
	edx = to32i(esp+eax*4+0x18); //mov
	eax = to32i(ebx+0x2EC); //mov
	eax = to32i(eax+0x148); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = to32i(ebx+0x30C); //mov
	edx = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x304); //mov
	ebp = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edi = to32i(ebx+0x304); //mov
	neg(ecx);
	test(edi, edi);
	if (jle())
		goto loc_465DDA;
	eax = edi; //mov
loc_465B50:
	cmp(eax, (int32_t)0x50000);
	if (jge())
		goto loc_465B64;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = eax; //mov
loc_465B64:
	edx = to32i(dword_4D8504); //mov
	eax = to32i(dword_4D8508); //mov
	add(eax, edx);
	cmp(eax, (int32_t)0x1999);
	if (jge())
		goto loc_465B7A;
	add(esi, esi);
loc_465B7A:
	edi = to32i(ebx+0x2B8); //mov
	test(edi, edi);
	if (jle())
		goto loc_465DE3;
	eax = edi; //mov
loc_465B8A:
	cmp(eax, (int32_t)0x50000);
	if (jge())
		goto loc_465BB0;
	eax = to32i(ebx+0x2B8); //mov
	edx = 0x3333; //mov
	test(eax, eax);
	if (jle())
		goto loc_465DEC;
loc_465BA4:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
loc_465BB0:
	edx = 0x1999; //mov
	eax = to32i(dword_513518); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_465DFA;
	eax = ecx; //mov
loc_465BD0:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x310); //mov
	add(ecx, eax);
	sub(ecx, edx);
	cmp(ecx, esi);
	if (jle())
		goto loc_465E03;
	add(esi, edx);
loc_465BEE:
	to32i(ebx+0x310) = esi; //mov
	test(esi, esi);
	if (jle())
		goto loc_465E1E;
	eax = esi; //mov
loc_465BFE:
	cmp(eax, (int32_t)0x3333);
	if (jge())
		goto loc_465E27;
	cmp(to32i(esp+0x30), (int32_t)0);
	if (jnz())
		goto loc_465E27;
loc_465C14:
	edi = to32i(ebx+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_465E7E;
	eax = edi; //mov
loc_465C24:
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_465C3C;
	cmp(to32i(ebx+0x2F4), (int32_t)1);
	if (jz())
		goto loc_465C3C;
	to32i(ebx+0x2F4) = 0; //mov
loc_465C3C:
	to32i(ebx+0x310) = 0; //mov
loc_465C46:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_465C50:
	eax = esi; //mov
	neg(eax);
	goto loc_465890;
loc_465C59:
	edi = to32i(ebx+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_465C96;
	eax = edi; //mov
loc_465C65:
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_465899;
	eax = to32i(ebx+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_465C9C;
loc_465C78:
	cmp(eax, (int32_t)4);
	if (jz())
		goto loc_465899;
loc_465C81:
	edx = to32i(ebx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_4658A3;
	eax = edx; //mov
	goto loc_4658AB;
loc_465C96:
	eax = edi; //mov
	neg(eax);
	goto loc_465C65;
loc_465C9C:
	neg(eax);
	goto loc_465C78;
loc_465CA0:
	eax = ecx; //mov
	neg(eax);
	goto loc_4658C4;
loc_465CA9:
	cmp(to32i(ebx+0x2F0), (int32_t)0xBB8);
	if (jl())
		goto loc_4658CF;
loc_465CB9:
	eax = to32i(ebx+0x2F4); //mov
	test(eax, eax);
	if (jz())
		goto loc_4658F2;
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_4658F2;
	goto loc_4659CC;
loc_465CD5:
	eax = edi; //mov
	neg(eax);
	goto loc_4658DF;
loc_465CDE:
	neg(eax);
	goto loc_465928;
loc_465CE5:
	xor_(ebp, ebp);
	goto loc_46595B;
loc_465CEC:
	eax = esi; //mov
	neg(eax);
	goto loc_4659DC;
loc_465CF5:
	eax = edi; //mov
	neg(eax);
	goto loc_4659EF;
loc_465CFE:
	cmp(to32i(ebx+0x2F4), (int32_t)0);
	if (jz())
		goto loc_465A07;
	cmp(to8i(ebx+0x2D7), (int8_t)0);
	if (jz())
		goto loc_465A07;
	goto loc_465A09;
loc_465D1D:
	cmp(to32i(ebx+0x30C), (int32_t)0x51E);
	if (jge())
		goto loc_465D36;
	cmp(to32i(ebx+0x2F4), (int32_t)3);
	if (jz())
		goto loc_465A26;
loc_465D36:
	edi = to32i(ebx+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_465AC4;
	eax = edi; //mov
	goto loc_465ACC;
loc_465D4B:
	eax = ecx; //mov
	neg(eax);
	goto loc_465A5A;
loc_465D54:
	eax = esi; //mov
	neg(eax);
	goto loc_465A85;
loc_465D5D:
	eax = to32i(ebx+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_465D8F;
loc_465D67:
	eax = to32i(esp+eax*4); //mov
	shl(esi, (int32_t)2);
	shl(eax, (int32_t)2);
	cmp(esi, eax);
	if (jle())
		goto loc_465A93;
	edx = to32i(ebx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_465D93;
	eax = edx; //mov
	esi = to32i(esp+eax*4); //mov
	shl(esi, (int32_t)2);
	goto loc_465A93;
loc_465D8F:
	neg(eax);
	goto loc_465D67;
loc_465D93:
	eax = edx; //mov
	neg(eax);
	esi = to32i(esp+eax*4); //mov
	shl(esi, (int32_t)2);
	goto loc_465A93;
loc_465DA2:
	cmp(to32i(ebx+0x2F4), (int32_t)3);
	if (jnz())
		goto loc_465DBB;
	cmp(to32i(ebx+0x310), (int32_t)0xFFFFB334);
	if (jg())
		goto loc_465AB0;
loc_465DBB:
	to32i(ebx+0x30C) = 0; //mov
	goto loc_465D36;
loc_465DCA:
	neg(eax);
	goto loc_465AE3;
loc_465DD1:
	eax = edx; //mov
	neg(eax);
	goto loc_465AFC;
loc_465DDA:
	eax = edi; //mov
	neg(eax);
	goto loc_465B50;
loc_465DE3:
	eax = edi; //mov
	neg(eax);
	goto loc_465B8A;
loc_465DEC:
	neg(eax);
	goto loc_465BA4;
loc_465DF3:
	xor_(ecx, ecx);
	goto loc_465BB0;
loc_465DFA:
	eax = ecx; //mov
	neg(eax);
	goto loc_465BD0;
loc_465E03:
	eax = esi; //mov
	neg(eax);
	cmp(ecx, eax);
	if (jge())
		goto loc_465E16;
	eax = edx; //mov
	sub(eax, esi);
	esi = eax; //mov
	goto loc_465BEE;
loc_465E16:
	esi = (int32_t)(intptr_t)(edx+ecx); //lea
	goto loc_465BEE;
loc_465E1E:
	eax = esi; //mov
	neg(eax);
	goto loc_465BFE;
loc_465E27:
	cmp(to32i(ebx+0x284), (int32_t)0);
	if (jnz())
		goto loc_465C14;
	edx = to32i(ebx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_465E87;
	eax = edx; //mov
loc_465E40:
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_465E8D;
	cmp(to32i(dword_4D8508), (int32_t)0x8000);
	if (jge())
		goto loc_465E8D;
loc_465E51:
	esi = to32i(ebx+0x2F4); //mov
	test(esi, esi);
	if (jle())
		goto loc_465F2D;
	eax = esi; //mov
loc_465E61:
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_465C46;
	to32i(ebx+0x2F4) = 0; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_465E7E:
	eax = edi; //mov
	neg(eax);
	goto loc_465C24;
loc_465E87:
	eax = edx; //mov
	neg(eax);
	goto loc_465E40;
loc_465E8D:
	esi = to32i(ebx+0x2F4); //mov
	test(esi, esi);
	if (jle())
		goto loc_465F24;
	eax = esi; //mov
loc_465E9D:
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_465EAE;
	cmp(to32i(ebx+0x2F0), (int32_t)0xBB8);
	if (jl())
		goto loc_465E51;
loc_465EAE:
	eax = to32i(ebx+0x328); //mov
	cmp(eax, (int32_t)0x140000);
	if (jge())
		goto loc_465ED2;
	add(eax, (int32_t)0x20000);
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_465ECC;
	eax = 0x280000; //mov
loc_465ECC:
	to32i(ebx+0x328) = eax; //mov
loc_465ED2:
	test(ebp, ebp);
	if (jle())
		goto loc_465F36;
	eax = ebp; //mov
loc_465ED8:
	cmp(eax, (int32_t)0x4000);
	if (jle())
		goto loc_465F42;
	edx = to32i(ebx+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_465F3C;
	eax = edx; //mov
loc_465EEB:
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_465F42;
loc_465EF0:
	ecx = to32i(ebx+0x324); //mov
	cmp(ecx, (int32_t)0x140000);
	if (jge())
		goto loc_465C46;
	eax = (int32_t)(intptr_t)(ecx+0x20000); //lea
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_465F14;
	eax = 0x280000; //mov
loc_465F14:
	to32i(ebx+0x324) = eax; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_465F24:
	eax = esi; //mov
	neg(eax);
	goto loc_465E9D;
loc_465F2D:
	eax = esi; //mov
	neg(eax);
	goto loc_465E61;
loc_465F36:
	eax = ebp; //mov
	neg(eax);
	goto loc_465ED8;
loc_465F3C:
	eax = edx; //mov
	neg(eax);
	goto loc_465EEB;
loc_465F42:
	test(ebp, ebp);
	if (jle())
		goto loc_465F58;
loc_465F46:
	cmp(ebp, (int32_t)0x8000);
	if (jg())
		goto loc_465EF0;
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_465F58:
	neg(ebp);
	goto loc_465F46;
}
Fn(void) Game::_sub_465F60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	edx = to32i(eax+0x288); //mov
	esi = to32i(eax+0x14); //mov
	test(edx, edx);
	if (jle())
		goto loc_466175;
	eax = 1; //mov
loc_465F81:
	xor_(eax, to32i(dword_512228));
	if (jnz())
		goto loc_46617C;
	eax = 1; //mov
loc_465F92:
	to32i(esp+4) = eax; //mov
	edx = to32i(ecx+0x2E4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_465FA2;
	neg(edx);
loc_465FA2:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	shl(edx, (int32_t)0x11);
	ebx = 0x7C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_466200(); esp += 4; //call
	ebx = to32i(ecx+0x3AC); //mov
	add(eax, edx);
	sub(ebx, eax);
	to32i(ecx+0x394) = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edi = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_466183;
loc_465FEC:
	cmp(ebx, (int32_t)0x38000);
	if (jg())
		goto loc_4661E2;
	cmp(to32i(ecx+0x2B8), (int32_t)0);
	if (jl())
		goto loc_4661E2;
	cmp(to32i(esp+4), (int32_t)0);
	if (jz())
		goto loc_46618A;
	ebp = to32i(dword_5118A0); //mov
	eax = (int32_t)(intptr_t)(esi+1); //lea
	cmp(eax, ebp);
	if (jl())
		goto loc_46601F;
	sub(eax, ebp);
loc_46601F:
	ebx = to32i(dword_5118A0); //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esi+2); //lea
	cmp(eax, ebx);
	if (jl())
		goto loc_466030;
	sub(eax, ebx);
loc_466030:
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	ebx = to32i(dword_5118A4); //mov
	to32i(esp) = eax; //mov
	edx = (int32_t)(intptr_t)(eax+ebx); //lea
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	shl(eax, (int32_t)2);
	add(ebx, eax);
	eax = to32i(edx); //mov
	esi = to32i(ebx); //mov
	ebp = to32i(ebx+8); //mov
	edx = to32i(edx+8); //mov
	sub(eax, esi);
	sub(edx, ebp);
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	edx = to32i(esp+8); //mov
	ebx = eax; //mov
	ebp = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	esi = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	add(esi, to32i(esp));
	eax = to32i(edx); //mov
	edx = to32i(edx+8); //mov
	sub(eax, to32i(esi));
	sub(edx, to32i(esi+8));
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	edx = ebx; //mov
	esp -= 4; _sub_45E710(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_4661BE;
loc_4660AD:
	cmp(eax, (int32_t)0x1E);
	if (jle())
		goto loc_4660BF;
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
loc_4660BF:
	eax = ebp; //mov
	edx = to32i(ecx+0x204); //mov
	esp -= 4; _sub_45E710(); esp += 4; //call
	ebx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_4661C5;
loc_4660D6:
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_4660E8;
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
loc_4660E8:
	edx = to32i(ecx+0x2EC); //mov
	eax = to32i(edx+0x12C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ebp = eax; //mov
	eax = to32i(ecx+0x2B8); //mov
	edx = 0x1999; //mov
	test(eax, eax);
	if (jle())
		goto loc_4661CC;
loc_466116:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	ebp = to32i(esp+4); //mov
	edx = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_466145;
	neg(edi);
loc_466145:
	eax = (int32_t)(intptr_t)(esi+ebx); //lea
	add(eax, edi);
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4661D3;
	eax = 0x7F; //mov
loc_466158:
	imul32(edx, eax);
	to32i(ecx+0x368) = 0; //mov
	to32i(ecx+0x30C) = edx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_466175:
	xor_(eax, eax);
	goto loc_465F81;
loc_46617C:
	xor_(eax, eax);
	goto loc_465F92;
loc_466183:
	neg(ebx);
	goto loc_465FEC;
loc_46618A:
	eax = (int32_t)(intptr_t)(esi-1); //lea
	test(eax, eax);
	if (jl())
		goto loc_46619F;
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esi-2); //lea
	test(eax, eax);
	if (jl())
		goto loc_4661B3;
	goto loc_466030;
loc_46619F:
	add(eax, to32i(dword_5118A0));
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(esi-2); //lea
	test(eax, eax);
	if (jl())
		goto loc_4661B3;
	goto loc_466030;
loc_4661B3:
	add(eax, to32i(dword_5118A0));
	goto loc_466030;
loc_4661BE:
	neg(eax);
	goto loc_4660AD;
loc_4661C5:
	neg(eax);
	goto loc_4660D6;
loc_4661CC:
	neg(eax);
	goto loc_466116;
loc_4661D3:
	cmp(eax, (int32_t)0xFFFFFF81);
	if (jge())
		goto loc_466158;
	eax = 0xFFFFFF81; //mov
	goto loc_466158;
loc_4661E2:
	eax = ecx; //mov
	esp -= 4; _sub_466280(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_466200()
{
	push32(ecx);
	push32(edx);
	edx = to32i(eax+0x14); //mov
	esp -= 4; _sub_43D830(); esp += 4; //call
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_466247;
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x21); //mov
	al = to8i(eax+0x1F); //mov
	ecx = edx; //mov
	and_(al, (int8_t)0xF);
	xor_(edx, edx);
	shl(ecx, (int32_t)0xF);
	dl = al; //mov
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	pop32(edx);
	pop32(ecx);
	return;
loc_466247:
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x20); //mov
	ecx = edx; //mov
	al = to8i(eax+0x1F); //mov
	shl(ecx, (int32_t)0xF);
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	sar(edx, (int32_t)4);
	neg(ecx);
	and_(edx, (int32_t)0xF);
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_466280()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebp = eax; //mov
	ecx = 6; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4646A0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(dword_4646A0+0x18); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = to32i(eax+0x2EC); //mov
	eax = to32i(edx+0x12C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	edx = 0x13333; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x2EC); //mov
	eax = to32i(edx+0x12C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	esi = eax; //mov
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xE);
	if (jz())
		goto loc_46678E;
loc_4662FB:
	ecx = to32i(ebp+0x2B8); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4667A6;
	eax = ecx; //mov
loc_46630B:
	cmp(eax, (int32_t)0x50000);
	if (jge())
		goto loc_4667B8;
	ecx = to32i(ebp+0x2B8); //mov
	edx = 0x3333; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4667AF;
	eax = ecx; //mov
loc_46632B:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_466341:
	esi = eax; //mov
loc_466343:
	ebx = to32i(ebp+0x2FC); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_46682E;
loc_466352:
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	esi = eax; //mov
loc_466363:
	cmp(to32i(dword_4D8500), (int32_t)0x40);
	if (jle())
		goto loc_46683C;
	cmp(to32i(ebp+0x2F4), (int32_t)3);
	if (jnz())
		goto loc_46683C;
loc_46637D:
	edi = to32i(dword_4D8500); //mov
	test(edi, edi);
	if (jle())
		goto loc_46685E;
	eax = edi; //mov
loc_46638D:
	cmp(eax, (int32_t)0x80);
	if (jle())
		goto loc_466870;
	edx = to32i(dword_4D8500); //mov
	test(edx, edx);
	if (jle())
		goto loc_466867;
	eax = edx; //mov
loc_4663A8:
	edx = to32i(ebp+0x2EC); //mov
	ecx = to32i(edx+0x154); //mov
	edx = eax; //mov
	sub(edx, ecx);
	shl(edx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)9);
	sbb(eax, edx);
	sar(eax, (int32_t)9);
	edx = (int32_t)(intptr_t)(eax+0x10000); //lea
loc_4663CE:
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_4D84FC) = eax; //mov
	eax = to32i(ebp+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ebp+0x2B8); //mov
	ebx = eax; //mov
	test(edi, edi);
	if (jle())
		goto loc_4668DA;
	eax = edi; //mov
loc_466410:
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
		goto loc_4668E3;
loc_466430:
	eax = to32i(ebp+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x2B8); //mov
	ebx = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_46693C;
	eax = edx; //mov
loc_466461:
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
		goto loc_466945;
	eax = 0x10000; //mov
loc_466486:
	ecx = to32i(dword_4D84FC); //mov
	edx = eax; //mov
	eax = ecx; //mov
loc_466490:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_4D84FC) = eax; //mov
	edx = 0x30A3; //mov
	eax = to32i(dword_513518); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = 0x100000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ecx = to32i(ebp+0x2E4); //mov
	add(ecx, eax);
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_466992;
	ecx = 0x7F; //mov
loc_4664E7:
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	esi = eax; //mov
	imul32(esi, ecx);
	cmp(to32i(ebp+0x2B8), (int32_t)0);
	if (jl())
		goto loc_4669A5;
loc_466508:
	test(esi, esi);
	if (jle())
		goto loc_4669AC;
	eax = esi; //mov
loc_466512:
	edi = to32i(ebp+0x200); //mov
	to32i(ebp+0x364) = eax; //mov
	cmp(edi, (int32_t)2);
	if (jle())
		goto loc_46658E;
	eax = to32i(ebp+0x2E4); //mov
	test(eax, eax);
	if (jle())
		goto loc_4669B5;
loc_466531:
	cmp(eax, (int32_t)0x40);
	if (jle())
		goto loc_46658E;
	edx = to32i(ebp+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_4669BC;
	eax = edx; //mov
loc_466546:
	cmp(eax, (int32_t)0x50000);
	if (jle())
		goto loc_46658E;
	ebx = to32i(ebp+0x324); //mov
	cmp(ebx, (int32_t)0x140000);
	if (jge())
		goto loc_466573;
	eax = (int32_t)(intptr_t)(ebx+0x20000); //lea
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_46656D;
	eax = 0x280000; //mov
loc_46656D:
	to32i(ebp+0x324) = eax; //mov
loc_466573:
	eax = to32i(dword_4D850C); //mov
	edx = to32i(ebp+0x364); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ebp+0x364) = eax; //mov
loc_46658E:
	edi = to32i(ebp+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_4669C5;
	eax = edi; //mov
loc_46659E:
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_466714;
	eax = to32i(ebp+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_4669CE;
loc_4665B5:
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_466714;
	edx = to32i(ebp+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_4669D5;
	eax = edx; //mov
loc_4665CE:
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_4669EF;
	cmp(to8i(ebp+0x2DA), (int8_t)0);
	if (jbe())
		goto loc_4669E5;
	edi = to32i(ebp+0x304); //mov
	cmp(edi, (int32_t)0xA0000);
	if (jge())
		goto loc_4669E5;
	edx = 0x1999; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jl())
		goto loc_4669DE;
	edx = 0x1999; //mov
	eax = to32i(ebp+0x304); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_466624:
	ebx = eax; //mov
loc_466626:
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xE);
	if (jz())
		goto loc_466657;
	edi = to32i(ebp+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_466A21;
	eax = edi; //mov
loc_466641:
	edx = to32i(esp+eax*4); //mov
	eax = to32i(dword_4D84FC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x30) = eax; //mov
loc_466657:
	test(ecx, ecx);
	if (jle())
		goto loc_466A2A;
	cmp(to32i(ebp+0x2F4), (int32_t)0);
	if (jle())
		goto loc_466A2A;
loc_46666C:
	ecx = to32i(dword_4D850C); //mov
loc_466672:
	edx = to32i(esp+0x30); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ebp+0x2F4); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_466A49;
	edx = ebx; //mov
loc_466692:
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_4666A5;
	edx = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_4666A5:
	cmp(to32i(ebp+0x2F4), (int32_t)0);
	if (jle())
		goto loc_466A52;
	ecx = (int32_t)(intptr_t)(esi+eax); //lea
loc_4666B5:
	ebx = ecx; //mov
	eax = to32i(ebp+0x30C); //mov
	edx = to32i(ebp+0x2F4); //mov
	sub(ebx, eax);
	test(edx, edx);
	if (jle())
		goto loc_466A5B;
	eax = edx; //mov
loc_4666CF:
	edi = to32i(ebp+0x2F4); //mov
	esi = to32i(esp+eax*4+0x18); //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_4666E7;
	cmp(to32i(ebp+0x2E0), (int32_t)0);
	if (jle())
		goto loc_4666F9;
loc_4666E7:
	cmp(to32i(ebp+0x2F4), (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_466706;
	cmp(to32i(ebp+0x2E0), (int32_t)0);
	if (jl())
		goto loc_466706;
loc_4666F9:
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
loc_466706:
	cmp(ebx, esi);
	if (jle())
		goto loc_466A64;
	add(esi, to32i(ebp+0x30C));
loc_466714:
	edx = to32i(ebp+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_466A82;
	eax = edx; //mov
loc_466724:
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_466762;
	cmp(to8i(ebp+0x2D7), (int8_t)0x32);
	if (jbe())
		goto loc_466762;
	cmp(to8i(ebp+0x2DA), (int8_t)1);
	if (jz())
		goto loc_466762;
	ecx = to32i(ebp+0x2AC); //mov
	cmp(ecx, (int32_t)0xFFFFFAE2);
	if (jge())
		goto loc_466A8B;
	esi = to32i(ebp+0x2E4); //mov
loc_466755:
	to32i(ebp+0x2B8) = 0; //mov
	shl(esi, (int32_t)8);
loc_466762:
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xE);
	if (jnz())
		goto loc_466778;
	cmp(to32i(ebp+0x2E4), (int32_t)0);
	if (jnz())
		goto loc_466778;
	xor_(esi, esi);
loc_466778:
	to32i(ebp+0x368) = esi; //mov
	to32i(ebp+0x30C) = esi; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46678E:
	edx = 0x18000; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	goto loc_4662FB;
loc_4667A6:
	eax = ecx; //mov
	neg(eax);
	goto loc_46630B;
loc_4667AF:
	eax = ecx; //mov
	neg(eax);
	goto loc_46632B;
loc_4667B8:
	ebx = to32i(ebp+0x2B8); //mov
	cmp(ebx, (int32_t)0x140000);
	if (jle())
		goto loc_466343;
	cmp(to8i(ebp+0x2D7), (int8_t)0x80);
	if (jnb())
		goto loc_466818;
	edx = to32i(ebp+0x2EC); //mov
	edx = to32i(edx+0x15C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_466812;
loc_4667E3:
	eax = ebx; //mov
loc_4667E5:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, (int32_t)0x10000);
	ebx = eax; //mov
	eax = esi; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	goto loc_466341;
loc_466812:
	eax = ebx; //mov
	neg(eax);
	goto loc_4667E5;
loc_466818:
	edx = to32i(ebp+0x2EC); //mov
	edx = to32i(edx+0x160); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4667E3;
	eax = ebx; //mov
	neg(eax);
	goto loc_4667E5;
loc_46682E:
	cmp(ebx, (int32_t)3);
	if (jz())
		goto loc_466352;
	goto loc_466363;
loc_46683C:
	cmp(to32i(dword_4D8500), (int32_t)0xFFFFFFC0);
	if (jge())
		goto loc_466852;
	cmp(to32i(ebp+0x2F4), (int32_t)0xFFFFFFFD);
	if (jz())
		goto loc_46637D;
loc_466852:
	edx = 0xC000; //mov
	eax = esi; //mov
	goto loc_466490;
loc_46685E:
	eax = edi; //mov
	neg(eax);
	goto loc_46638D;
loc_466867:
	eax = edx; //mov
	neg(eax);
	goto loc_4663A8;
loc_466870:
	eax = to32i(dword_4D8500); //mov
	test(eax, eax);
	if (jle())
		goto loc_4668C3;
	ecx = eax; //mov
loc_46687B:
	edx = to32i(ebp+0x2EC); //mov
	eax = to32i(edx+0x154); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = ecx; //mov
	sub(edx, eax);
	shl(edx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	add(eax, (int32_t)0x8000);
	cmp(eax, (int32_t)0x10000);
	if (jle())
		goto loc_4668C9;
loc_4668B0:
	cmp(eax, (int32_t)0x10000);
	if (jle())
		goto loc_4668BC;
	eax = 0x10000; //mov
loc_4668BC:
	edx = eax; //mov
	goto loc_4663CE;
loc_4668C3:
	ecx = eax; //mov
	neg(ecx);
	goto loc_46687B;
loc_4668C9:
	cmp(eax, (int32_t)0xC000);
	if (jg())
		goto loc_4668B0;
	edx = 0xC000; //mov
	goto loc_4663CE;
loc_4668DA:
	eax = edi; //mov
	neg(eax);
	goto loc_466410;
loc_4668E3:
	eax = to32i(ebp+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(ebp+0x2B8); //mov
	test(eax, eax);
	if (jle())
		goto loc_466938;
loc_46690E:
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	cmp(eax, (int32_t)0x8000);
	if (jg())
		goto loc_466430;
	eax = 0x8000; //mov
	goto loc_466486;
loc_466938:
	neg(eax);
	goto loc_46690E;
loc_46693C:
	eax = edx; //mov
	neg(eax);
	goto loc_466461;
loc_466945:
	eax = to32i(ebp+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+0x198); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = to32i(ebp+0x2B8); //mov
	ebx = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46698C;
	eax = ecx; //mov
loc_466972:
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	goto loc_466486;
loc_46698C:
	eax = ecx; //mov
	neg(eax);
	goto loc_466972;
loc_466992:
	cmp(ecx, (int32_t)0xFFFFFF81);
	if (jge())
		goto loc_4664E7;
	ecx = 0xFFFFFF81; //mov
	goto loc_4664E7;
loc_4669A5:
	neg(esi);
	goto loc_466508;
loc_4669AC:
	eax = esi; //mov
	neg(eax);
	goto loc_466512;
loc_4669B5:
	neg(eax);
	goto loc_466531;
loc_4669BC:
	eax = edx; //mov
	neg(eax);
	goto loc_466546;
loc_4669C5:
	eax = edi; //mov
	neg(eax);
	goto loc_46659E;
loc_4669CE:
	neg(eax);
	goto loc_4665B5;
loc_4669D5:
	eax = edx; //mov
	neg(eax);
	goto loc_4665CE;
loc_4669DE:
	xor_(eax, eax);
	goto loc_466624;
loc_4669E5:
	ebx = 0x10000; //mov
	goto loc_466626;
loc_4669EF:
	cmp(to8i(ebp+0x2DA), (int8_t)1);
	if (jnz())
		goto loc_466A12;
	eax = to32i(dword_4D8504); //mov
loc_4669FD:
	cmp(eax, (int32_t)0x10000);
	if (jle())
		goto loc_466624;
	eax = 0x10000; //mov
	goto loc_466624;
loc_466A12:
	ebx = to32i(dword_4D8504); //mov
	eax = to32i(dword_4D8508); //mov
	add(eax, ebx);
	goto loc_4669FD;
loc_466A21:
	eax = edi; //mov
	neg(eax);
	goto loc_466641;
loc_466A2A:
	test(ecx, ecx);
	if (jl())
		goto loc_466A35;
	xor_(ecx, ecx);
	goto loc_466672;
loc_466A35:
	cmp(to32i(ebp+0x2F4), (int32_t)0);
	if (jl())
		goto loc_46666C;
	xor_(ecx, ecx);
	goto loc_466672;
loc_466A49:
	edx = ebx; //mov
	neg(edx);
	goto loc_466692;
loc_466A52:
	ecx = esi; //mov
	sub(ecx, eax);
	goto loc_4666B5;
loc_466A5B:
	eax = edx; //mov
	neg(eax);
	goto loc_4666CF;
loc_466A64:
	eax = esi; //mov
	neg(eax);
	cmp(ebx, eax);
	if (jge())
		goto loc_466A7B;
	eax = to32i(ebp+0x30C); //mov
	sub(eax, esi);
	esi = eax; //mov
	goto loc_466714;
loc_466A7B:
	esi = ecx; //mov
	goto loc_466714;
loc_466A82:
	eax = edx; //mov
	neg(eax);
	goto loc_466724;
loc_466A8B:
	cmp(ecx, (int32_t)0x51E);
	if (jle())
		goto loc_466762;
	esi = to32i(ebp+0x2E4); //mov
	neg(esi);
	goto loc_466755;
}
Fn(void) Game::_sub_466AB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	eax = to32i(eax+0x2EC); //mov
	ebp = to32i(esi+0x304); //mov
	xor_(edi, edi);
	xor_(ecx, ecx);
	eax = to32i(eax+0xFC); //mov
	to32i(esp+0xC) = edi; //mov
	add(eax, eax);
	to32i(esp+8) = edi; //mov
	to32i(esp+0x10) = eax; //mov
	cmp(ebp, (int32_t)0xA0000);
	if (jl())
		goto loc_466E98;
loc_466AEB:
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_466EAC;
loc_466AFD:
	cmp(eax, (int32_t)3);
	if (jl())
		goto loc_466B13;
	eax = to32i(esp+4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+4) = eax; //mov
loc_466B13:
	edx = 0xCCCC; //mov
	eax = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(esp+0x10) = eax; //mov
	edx = to32i(edx+0xF0); //mov
	eax = to32i(dword_4D8508); //mov
	shl(edx, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebp = eax; //mov
	cmp(to8i(esi+0x2DA), (int8_t)1);
	if (jnz())
		goto loc_466EB3;
loc_466B64:
	xor_(eax, eax);
	ecx = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2D9); //mov
	edx = to32i(ecx+eax*4+0x168); //mov
	eax = to32i(esi+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = eax; //mov
	eax = to32i(esi+0x2F0); //mov
	cmp(ebp, eax);
	if (jle())
		goto loc_46719E;
	add(eax, (int32_t)0x258);
	to32i(esi+0x2F0) = eax; //mov
	cmp(ebp, eax);
	if (jge())
		goto loc_467197;
loc_466BC2:
	to32i(esi+0x2F0) = ebp; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4671B9;
	sub(edi, (int32_t)0x64);
loc_466BD3:
	ecx = 1; //mov
	ebp = to32i(esi+0x2F4); //mov
	to32i(esp+0xC) = ecx; //mov
	cmp(ebp, ecx);
	if (jnz())
		goto loc_466BF0;
	to32i(esi+0x2F4) = 0; //mov
loc_466BF0:
	dl = to8i(esi+0x2D8); //mov
	to32i(esi+0x2FC) = 0; //mov
	test(dl, dl);
	if (jz())
		goto loc_4676C1;
loc_466C08:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jz())
		goto loc_4676E8;
	eax = to32i(esi+0x2E4); //mov
	test(eax, eax);
	if (jle())
		goto loc_4676D3;
	to32i(esi+0x2F4) = 4; //mov
loc_466C2D:
	ecx = 0x8000; //mov
	to8i(esi+0x2D8) = 0x80; //mov
	to32i(dword_4D8504) = ecx; //mov
loc_466C3F:
	cmp(to32i(esi+0x2B8), (int32_t)0);
	if (jl())
		goto loc_46779D;
	edx = to32i(esp+4); //mov
	eax = to32i(dword_4D8504); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	neg(ecx);
loc_466C63:
	add(to32i(esp+8), ecx);
	eax = to32i(dword_512204); //mov
	to32i(esp) = eax; //mov
	ebp = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(eax, ebp);
	shl(eax, (int32_t)3);
	to32i(esp) = eax; //mov
	eax = to32i(esi+0x200); //mov
	ebp = to32i(esp); //mov
	shl(eax, (int32_t)2);
	edx = to32i(esp+0x10); //mov
	add(eax, ebp);
	add(edx, (int32_t)0x20000);
	eax = to32i(dword_4D8484+eax); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_466CC9;
	cmp(to32i(esi+0x200), (int32_t)3);
	if (jge())
		goto loc_4677B7;
	cmp(to8i(esi+0x2DA), (int8_t)3);
	if (jbe())
		goto loc_4677B7;
loc_466CC9:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = to32i(esi+0x200); //mov
	shl(edx, (int32_t)2);
	eax = to32i(dword_4D8484+edx+eax*8); //mov
	edx = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_46780C;
loc_466D04:
	cmp(to32i(esi+0x200), (int32_t)3);
	if (jge())
		goto loc_46781E;
	cmp(to8i(esi+0x2DA), (int8_t)3);
	if (jbe())
		goto loc_46781E;
loc_466D1E:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = to32i(esi+0x200); //mov
	shl(edx, (int32_t)2);
	edx = to32i(dword_4D8484+edx+eax*8); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	ebp = to32i(esi+0x2FC); //mov
	ecx = eax; //mov
	cmp(ebp, (int32_t)3);
	if (jnz())
		goto loc_466D6C;
	cmp(to32i(esi+0x200), (int32_t)2);
	if (jle())
		goto loc_466D6C;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = eax; //mov
loc_466D6C:
	al = to8i(esi+0x2DA); //mov
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_46788C;
	xor_(eax, eax);
	ebp = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2D9); //mov
	edx = to32i(ebp+eax*4+0x168); //mov
	eax = ecx; //mov
loc_466D91:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	add(edi, eax);
	test(edi, edi);
	if (jl())
		goto loc_4678A4;
loc_466DBB:
	test(edi, edi);
	if (jle())
		goto loc_466DC7;
	test(ebx, ebx);
	if (jle())
		goto loc_4678BE;
loc_466DC7:
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebp = to32i(esp+0xC); //mov
	edi = eax; //mov
	eax = ebx; //mov
	add(ebx, edi);
	test(ebp, ebp);
	if (jnz())
		goto loc_466E00;
	test(edi, edi);
	if (jl())
		goto loc_4678D0;
loc_466DEC:
	test(edi, edi);
	if (jle())
		goto loc_466DF8;
	test(eax, eax);
	if (jl())
		goto loc_4678E7;
loc_466DF8:
	test(edi, edi);
	if (jl())
		goto loc_4678F6;
loc_466E00:
	test(edi, edi);
	if (jle())
		goto loc_46790C;
	eax = to32i(esi+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	cmp(ebx, edx);
	if (jge())
		goto loc_467905;
loc_466E1C:
	eax = ebx; //mov
loc_466E1E:
	ebx = to32i(esi+0x2EC); //mov
	ebx = to32i(ebx+0xF0); //mov
	shl(eax, (int32_t)0x10);
	shl(ebx, (int32_t)0x10);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	ecx = eax; //mov
	cmp(to8i(esi+0x2DA), (int8_t)1);
	if (jnz())
		goto loc_467927;
	eax = to32i(esi+0x2EC); //mov
	xor_(ebx, ebx);
	edx = to32i(eax+0xF0); //mov
	bl = to8i(esi+0x2D9); //mov
loc_466E68:
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+ebx*4+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x304) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_466E98:
	edx = 0xC000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	goto loc_466AEB;
loc_466EAC:
	neg(eax);
	goto loc_466AFD;
loc_466EB3:
	cmp(to16i(esi+0x14C), (int16_t)0);
	if (jnz())
		goto loc_466B64;
	eax = to32i(esi+0x1E8); //mov
	shl(eax, (int32_t)6);
	cmp(to32i(dword_512278+eax), (int32_t)1);
	if (jnz())
		goto loc_466EDA;
	eax = esi; //mov
	esp -= 4; _sub_46AB20(); esp += 4; //call
loc_466EDA:
	xor_(eax, eax);
	ebx = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2DA); //mov
	edx = to32i(ebx+eax*4+0x168); //mov
	eax = to32i(esi+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4671C7;
loc_466F1F:
	dh = to8i(esi+0x2DA); //mov
	cmp(dh, (int8_t)2);
	if (jnz())
		goto loc_467254;
loc_466F2E:
	cmp(to8i(esi+0x2D9), (int8_t)1);
	if (jnz())
		goto loc_466F49;
	al = to8i(esi+0x2DA); //mov
	to32i(esi+0x2F0) = ebp; //mov
	to8i(esi+0x2D9) = al; //mov
loc_466F49:
	eax = to32i(esi+0x2F0); //mov
	edi = to32i(esi+0x2F4); //mov
	sub(eax, ebx);
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_466F66;
	to32i(esi+0x2F4) = 0; //mov
loc_466F66:
	cmp(eax, (int32_t)0x5DC);
	if (jle())
		goto loc_467293;
	cmp(to8i(esi+0x2DA), (int8_t)4);
	if (ja())
		goto loc_467293;
	cmp(to32i(dword_4D8508), (int32_t)0x8000);
	if (jle())
		goto loc_467293;
	edi = to32i(esi+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_467261;
	edx = edi; //mov
loc_466F9E:
	cmp(edx, (int32_t)4);
	if (jz())
		goto loc_467293;
	cmp(to32i(esi+0x284), (int32_t)0);
	if (jnz())
		goto loc_467293;
	dh = to8i(esi+0x2DA); //mov
	to32i(esi+0x2F4) = 1; //mov
	cmp(dh, (int8_t)2);
	if (jnz())
		goto loc_466FEE;
	cmp(to32i(esi+0x304), (int32_t)0x50000);
	if (jle())
		goto loc_466FEE;
	edi = to32i(esi+0x2E4); //mov
	cmp(edi, (int32_t)0x20);
	if (jle())
		goto loc_46726A;
	to32i(esi+0x2F4) = 2; //mov
loc_466FEE:
	xor_(edx, edx);
	eax = 0x100; //mov
	dl = to8i(esi+0x2D7); //mov
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	shl(edx, (int32_t)2);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esi+0x328) = 0x280000; //mov
	dl = to8i(esi+0x2DA); //mov
	add(eax, (int32_t)0xA);
	cmp(dl, (int8_t)3);
	if (jnz())
		goto loc_467282;
	add(eax, (int32_t)0x2D);
loc_467033:
	edx = to32i(dword_512204); //mov
	edi = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edi, edx);
	edx = to32i(esi+0x200); //mov
	shl(edi, (int32_t)3);
	shl(edx, (int32_t)2);
	add(edx, edi);
	shl(eax, (int32_t)0x10);
	edx = to32i(dword_4D8484+edx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(esi+0x2F0); //mov
	sub(edx, eax);
	to32i(esi+0x2F0) = edx; //mov
loc_46707E:
	edi = to32i(esi+0x2EC); //mov
	eax = to32i(esi+0x2F0); //mov
	cmp(eax, to32i(edi+0xF0));
	if (jle())
		goto loc_4672F8;
	edx = to32i(edi+4); //mov
	xor_(eax, eax);
	dec(edx);
	al = to8i(esi+0x2DA); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_4672F8;
	cmp(to32i(esp+0xC), (int32_t)0);
	if (jnz())
		goto loc_46713F;
	ecx = to32i(edi+eax*4+0x1A8); //mov
	eax = to32i(edi+0xF0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = ecx; //mov
	eax = to32i(edi+eax*4+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_512204); //mov
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	shl(edx, (int32_t)3);
	eax = to32i(esi+0x200); //mov
	eax = to32i(dword_4D8484+edx+eax*4); //mov
	edx = 0x400000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(esi+0x2E4); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_4672DF;
	to32i(esi+0x2F4) = 3; //mov
loc_46713F:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jz())
		goto loc_467155;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = eax; //mov
loc_467155:
	xor_(eax, eax);
	edi = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2DA); //mov
	edx = to32i(edi+eax*4+0x168); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(edi+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+8) = ecx; //mov
	edi = eax; //mov
	goto loc_466BF0;
loc_467197:
	ebp = eax; //mov
	goto loc_466BC2;
loc_46719E:
	edx = (int32_t)(intptr_t)(eax-0x12C); //lea
	to32i(esi+0x2F0) = edx; //mov
	cmp(ebp, edx);
	if (jge())
		goto loc_466BC2;
	ebp = edx; //mov
	goto loc_466BC2;
loc_4671B9:
	if (jge())
		goto loc_466BD3;
	add(edi, (int32_t)0x64);
	goto loc_466BD3;
loc_4671C7:
	edi = 0x10000; //mov
	eax = to32i(esi+0x328); //mov
	to8i(esi+0x2D8) = 0xFF; //mov
	to32i(dword_4D8504) = edi; //mov
	cmp(eax, (int32_t)0x1E0000);
	if (jge())
		goto loc_4671FD;
	add(eax, (int32_t)0x40000);
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_4671F7;
	eax = 0x280000; //mov
loc_4671F7:
	to32i(esi+0x328) = eax; //mov
loc_4671FD:
	to32i(esp+0xC) = 1; //mov
	cmp(to8i(esi+0x2DA), (int8_t)0);
	if (jnz())
		goto loc_466F1F;
	cmp(to32i(esi+0x2B8), (int32_t)0xA0000);
	if (jle())
		goto loc_466F1F;
	eax = to32i(esi+0x2E4); //mov
	cmp(eax, (int32_t)0x10);
	if (jle())
		goto loc_46723C;
	to32i(esi+0x2F4) = 4; //mov
	goto loc_466F1F;
loc_46723C:
	cmp(eax, (int32_t)0xFFFFFFF0);
	if (jge())
		goto loc_466F1F;
	to32i(esi+0x2F4) = 0xFFFFFFFC; //mov
	goto loc_466F1F;
loc_467254:
	test(dh, dh);
	if (jz())
		goto loc_466F2E;
	goto loc_466F49;
loc_467261:
	edx = edi; //mov
	neg(edx);
	goto loc_466F9E;
loc_46726A:
	cmp(edi, (int32_t)0xFFFFFFE0);
	if (jge())
		goto loc_466FEE;
	to32i(esi+0x2F4) = 0xFFFFFFFE; //mov
	goto loc_466FEE;
loc_467282:
	cmp(dl, (int8_t)4);
	if (jnz())
		goto loc_467033;
	add(eax, (int32_t)0x4B);
	goto loc_467033;
loc_467293:
	cmp(eax, (int32_t)0xC8);
	if (jle())
		goto loc_4672A9;
	sub(to32i(esi+0x2F0), (int32_t)0xC8);
	goto loc_46707E;
loc_4672A9:
	cmp(eax, (int32_t)0xFFFFFF38);
	if (jge())
		goto loc_4672BF;
	add(to32i(esi+0x2F0), (int32_t)0xC8);
	goto loc_46707E;
loc_4672BF:
	test(ebx, ebx);
	if (jle())
		goto loc_4672D0;
	eax = ebx; //mov
	to32i(esi+0x2F0) = eax; //mov
	goto loc_46707E;
loc_4672D0:
	eax = ebx; //mov
	neg(eax);
	to32i(esi+0x2F0) = eax; //mov
	goto loc_46707E;
loc_4672DF:
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_46713F;
	to32i(esi+0x2F4) = 0xFFFFFFFD; //mov
	goto loc_46713F;
loc_4672F8:
	cmp(to8i(esi+0x2DB), (int8_t)0);
	if (jbe())
		goto loc_467308;
	xor_(ecx, ecx);
	goto loc_46713F;
loc_467308:
	cmp(to8i(esi+0x2D7), (int8_t)0);
	if (jbe())
		goto loc_4675E6;
	eax = ebp; //mov
	sub(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_46738E;
loc_46731D:
	cmp(eax, (int32_t)0xFA);
	if (jl())
		goto loc_467392;
	cmp(ebp, ebx);
	if (jg())
		goto loc_4673EC;
	if (jge())
		goto loc_46713F;
	xor_(eax, eax);
	edx = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2DA); //mov
	ecx = to32i(edx+eax*4+0x1A8); //mov
	eax = to32i(esi+0x2F0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_46B980(); esp += 4; //call
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	edx = to32i(edx+0x144); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	neg(ecx);
	goto loc_46713F;
loc_46738E:
	neg(eax);
	goto loc_46731D;
loc_467392:
	eax = to32i(esi+0x2EC); //mov
	xor_(ecx, ecx);
	edx = to32i(eax+0xF0); //mov
	cl = to8i(esi+0x2DA); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(eax+ecx*4+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = ebp; //mov
	edx = to32i(esi+0x2EC); //mov
	sub(eax, ebx);
	edx = to32i(edx+0x164); //mov
	shl(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	goto loc_46713F;
loc_4673EC:
	xor_(eax, eax);
	edx = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2DA); //mov
	ecx = to32i(edx+eax*4+0x1A8); //mov
	eax = to32i(esi+0x2F0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_46B980(); esp += 4; //call
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = to32i(dword_4D8508); //mov
	edx = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2F4); //mov
	ecx = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4674D8;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = to32i(esi+0x200); //mov
	shl(eax, (int32_t)3);
	shl(edx, (int32_t)2);
	add(edx, eax);
	eax = to32i(dword_4D8508); //mov
	cmp(eax, to32i(dword_4D8484+edx));
	if (jle())
		goto loc_4674D8;
	cmp(to32i(esi+0x200), (int32_t)2);
	if (jle())
		goto loc_4674D8;
	cmp(to8i(esi+0x2DA), (int8_t)3);
	if (ja())
		goto loc_4674D8;
	eax = to32i(esi+0x2E4); //mov
	cmp(eax, (int32_t)0x40);
	if (jle())
		goto loc_467563;
	to32i(esi+0x2F4) = 2; //mov
loc_4674B2:
	edi = to32i(esi+0x328); //mov
	cmp(edi, (int32_t)0x140000);
	if (jge())
		goto loc_4674D8;
	eax = (int32_t)(intptr_t)(edi+0x20000); //lea
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_4674D2;
	eax = 0x280000; //mov
loc_4674D2:
	to32i(esi+0x328) = eax; //mov
loc_4674D8:
	ebp = to32i(esi+0x2F4); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_467586;
	eax = ebp; //mov
loc_4674E8:
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_46759D;
	eax = to32i(esi+0x30C); //mov
	add(eax, eax);
	test(eax, eax);
	if (jle())
		goto loc_46758F;
loc_467501:
	edi = to32i(dword_4D8508); //mov
	edx = eax; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(eax+0x10000); //lea
	cmp(edx, (int32_t)0x30000);
	if (jge())
		goto loc_467596;
loc_467523:
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
loc_467531:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(edx, eax);
	shl(edx, (int32_t)3);
	eax = to32i(esi+0x200); //mov
	edx = to32i(dword_4D8484+edx+eax*4); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	goto loc_46713F;
loc_467563:
	cmp(eax, (int32_t)0xFFFFFFC0);
	if (jge())
		goto loc_467577;
	to32i(esi+0x2F4) = 0xFFFFFFFE; //mov
	goto loc_4674B2;
loc_467577:
	to32i(esi+0x2F4) = 1; //mov
	goto loc_4674B2;
loc_467586:
	eax = ebp; //mov
	neg(eax);
	goto loc_4674E8;
loc_46758F:
	neg(eax);
	goto loc_467501;
loc_467596:
	edx = 0x30000; //mov
	goto loc_467523;
loc_46759D:
	eax = to32i(esi+0x2F4); //mov
	test(eax, eax);
	if (jle())
		goto loc_4675CB;
loc_4675A7:
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_4675C1;
	edx = to32i(esi+0x2F4); //mov
	test(edx, edx);
	if (jle())
		goto loc_4675CF;
	eax = edx; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_467531;
loc_4675C1:
	edx = 0x8000; //mov
	goto loc_467523;
loc_4675CB:
	neg(eax);
	goto loc_4675A7;
loc_4675CF:
	eax = edx; //mov
	neg(eax);
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_467531;
	edx = 0x8000; //mov
	goto loc_467523;
loc_4675E6:
	ecx = to32i(esi+0x2B8); //mov
	edx = 0x1999; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_467688;
	eax = ecx; //mov
loc_4675FB:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	xor_(eax, eax);
	ecx = to32i(esi+0x2EC); //mov
	al = to8i(esi+0x2DA); //mov
	ecx = to32i(ecx+eax*4+0x1A8); //mov
	eax = to32i(esi+0x2F0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_46B980(); esp += 4; //call
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(esi+0x2B8); //mov
	ecx = eax; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_467691;
	cmp(to8i(esi+0x2DA), (int8_t)0);
	if (jnz())
		goto loc_467691;
loc_467659:
	edx = to32i(esi+0x2EC); //mov
	eax = ecx; //mov
	edx = to32i(edx+0x144); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
loc_467673:
	edx = ecx; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	goto loc_46713F;
loc_467688:
	eax = ecx; //mov
	neg(eax);
	goto loc_4675FB;
loc_467691:
	cmp(to32i(esi+0x2B8), (int32_t)0);
	if (jge())
		goto loc_4676A3;
	cmp(to8i(esi+0x2DA), (int8_t)2);
	if (jnb())
		goto loc_467659;
loc_4676A3:
	edx = to32i(esi+0x2EC); //mov
	eax = ecx; //mov
	edx = to32i(edx+0x144); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	neg(ecx);
	goto loc_467673;
loc_4676C1:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_466C08;
	goto loc_466DC7;
loc_4676D3:
	if (jge())
		goto loc_466C2D;
	to32i(esi+0x2F4) = 0xFFFFFFFC; //mov
	goto loc_466C2D;
loc_4676E8:
	cmp(to8i(esi+0x2D8), (int8_t)0x20);
	if (jbe())
		goto loc_466C3F;
	cmp(to32i(esi+0x284), (int32_t)0);
	if (jnz())
		goto loc_466C3F;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edx = to32i(esi+0x200); //mov
	shl(edx, (int32_t)2);
	eax = to32i(dword_4D8484+edx+eax*8); //mov
	edx = 0x400000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	cmp(to32i(esi+0x30C), (int32_t)0);
	if (jle())
		goto loc_467766;
	cmp(eax, to32i(esi+0x2E4));
	if (jge())
		goto loc_467766;
	cmp(to32i(dword_4D8500), (int32_t)0x19);
	if (jle())
		goto loc_467766;
	to32i(esi+0x2F4) = 3; //mov
	goto loc_466C3F;
loc_467766:
	cmp(to32i(esi+0x30C), (int32_t)0);
	if (jge())
		goto loc_466C3F;
	neg(eax);
	cmp(eax, to32i(esi+0x2E4));
	if (jle())
		goto loc_466C3F;
	cmp(to32i(dword_4D8500), (int32_t)0xFFFFFFE7);
	if (jge())
		goto loc_466C3F;
	to32i(esi+0x2F4) = 0xFFFFFFFD; //mov
	goto loc_466C3F;
loc_46779D:
	edx = to32i(esp+4); //mov
	eax = to32i(dword_4D8504); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	goto loc_466C63;
loc_4677B7:
	eax = to32i(esi+0x304); //mov
	test(eax, eax);
	if (jle())
		goto loc_467808;
loc_4677C1:
	cmp(eax, (int32_t)0x3333);
	if (jle())
		goto loc_466CC9;
	edx = to32i(esi+0x2FC); //mov
	inc(edx);
	ebp = to32i(esi+0x324); //mov
	to32i(esi+0x2FC) = edx; //mov
	cmp(ebp, (int32_t)0x1E0000);
	if (jge())
		goto loc_466CC9;
	eax = (int32_t)(intptr_t)(ebp+0x40000); //lea
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_4677FD;
	eax = 0x280000; //mov
loc_4677FD:
	to32i(esi+0x324) = eax; //mov
	goto loc_466CC9;
loc_467808:
	neg(eax);
	goto loc_4677C1;
loc_46780C:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_466D04;
	goto loc_466D1E;
loc_46781E:
	eax = to32i(esi+0x304); //mov
	test(eax, eax);
	if (jle())
		goto loc_46785B;
loc_467828:
	cmp(eax, (int32_t)0x3333);
	if (jle())
		goto loc_466D1E;
	cmp(to32i(esi+0x2F4), (int32_t)1);
	if (jz())
		goto loc_467843;
	add(to32i(esi+0x2FC), (int32_t)2);
loc_467843:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jz())
		goto loc_46785F;
	to32i(esi+0x328) = 0x280000; //mov
	goto loc_466D1E;
loc_46785B:
	neg(eax);
	goto loc_467828;
loc_46785F:
	eax = to32i(esi+0x328); //mov
	cmp(eax, (int32_t)0x1E0000);
	if (jge())
		goto loc_466D1E;
	add(eax, (int32_t)0x40000);
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_467881;
	eax = 0x280000; //mov
loc_467881:
	to32i(esi+0x328) = eax; //mov
	goto loc_466D1E;
loc_46788C:
	xor_(edx, edx);
	ebp = to32i(esi+0x2EC); //mov
	dl = al; //mov
	eax = ecx; //mov
	edx = to32i(ebp+edx*4+0x168); //mov
	goto loc_466D91;
loc_4678A4:
	test(ebx, ebx);
	if (jl())
		goto loc_466DBB;
	if (jnz())
		goto loc_4678B3;
	ebx = 1; //mov
loc_4678B3:
	xor_(ecx, ecx);
	to32i(esp+0xC) = ecx; //mov
	goto loc_466DC7;
loc_4678BE:
	if (jnz())
		goto loc_4678C5;
	ebx = 0xFFFFFFFF; //mov
loc_4678C5:
	xor_(edx, edx);
	to32i(esp+0xC) = edx; //mov
	goto loc_466DC7;
loc_4678D0:
	test(eax, eax);
	if (jle())
		goto loc_466DEC;
	test(ebx, ebx);
	if (jge())
		goto loc_466DEC;
	xor_(ebx, ebx);
	goto loc_466E00;
loc_4678E7:
	test(ebx, ebx);
	if (jle())
		goto loc_466DF8;
	xor_(ebx, ebx);
	goto loc_466E00;
loc_4678F6:
	test(eax, eax);
	if (jnz())
		goto loc_466E00;
	xor_(ebx, ebx);
	goto loc_466E00;
loc_467905:
	ebx = edx; //mov
	goto loc_466E1C;
loc_46790C:
	eax = to32i(esi+0x2EC); //mov
	eax = to32i(eax+0xF0); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jg())
		goto loc_466E1E;
	goto loc_466E1C;
loc_467927:
	eax = to32i(esi+0x2EC); //mov
	xor_(ebx, ebx);
	edx = to32i(eax+0xF0); //mov
	bl = to8i(esi+0x2DA); //mov
	goto loc_466E68;
}
Fn(void) Game::_sub_467940()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(edx+0x204); //mov
	eax = to32i(eax+0x148); //mov
	sub(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_467997;
loc_467956:
	ecx = 0x400; //mov
	sub(ecx, eax);
	cmp(eax, ecx);
	if (jle())
		goto loc_467963;
	eax = ecx; //mov
loc_467963:
	cmp(eax, (int32_t)0x100);
	if (jle())
		goto loc_4679A3;
	eax = to32i(edx+0x14); //mov
	sub(eax, (int32_t)0xF);
	test(eax, eax);
	if (jl())
		goto loc_46799B;
loc_467974:
	esp -= 4; _sub_463310(); esp += 4; //call
loc_467979:
	edx = to32i(edx+0x148); //mov
	sub(eax, edx);
	to32i(dword_4D8500) = eax; //mov
	cmp(eax, (int32_t)0x200);
	if (jg())
		goto loc_4679BE;
	cmp(eax, (int32_t)0xFFFFFE00);
	if (jl())
		goto loc_4679CD;
	pop32(edx);
	pop32(ecx);
	return;
loc_467997:
	neg(eax);
	goto loc_467956;
loc_46799B:
	add(eax, to32i(dword_5118A0));
	goto loc_467974;
loc_4679A3:
	push32(ebx);
	eax = to32i(edx+0x14); //mov
	ebx = to32i(dword_5118A0); //mov
	add(eax, (int32_t)0xF);
	cmp(eax, ebx);
	if (jl())
		goto loc_4679B6;
	sub(eax, ebx);
loc_4679B6:
	esp -= 4; _sub_463310(); esp += 4; //call
	pop32(ebx);
	goto loc_467979;
loc_4679BE:
	ecx = (int32_t)(intptr_t)(eax-0x400); //lea
	to32i(dword_4D8500) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4679CD:
	edx = (int32_t)(intptr_t)(eax+0x400); //lea
	to32i(dword_4D8500) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4679E0()
{
	push32(edx);
	push32(esi);
	edx = eax; //mov
	test(to8i(byte_512219), (int8_t)8);
	if (jz())
		goto loc_4679FD;
	cmp(to8i(edx+0x2DD), (int8_t)0);
	if (jz())
		goto loc_4679FD;
	eax = edx; //mov
	esp -= 4; _sub_467A90(); esp += 4; //call
loc_4679FD:
	cmp(to32i(edx+0x100), (int32_t)0x199A);
	if (jge())
		goto loc_467A72;
	to32i(edx+0x310) = 0; //mov
	to32i(edx+0x324) = 0; //mov
	to32i(edx+0x328) = 0; //mov
	esi = to32i(edx+0x2F0); //mov
	to32i(edx+0x2F4) = 0; //mov
	cmp(esi, (int32_t)0x1F4);
	if (jle())
		goto loc_467A5C;
	push32(edi);
	edi = (int32_t)(intptr_t)(esi-0x1F4); //lea
	to32i(edx+0x2F0) = edi; //mov
	pop32(edi);
loc_467A4D:
	cmp(to32i(edx+0x15C), (int32_t)0x8000);
	if (jl())
		goto loc_467A68;
	pop32(esi);
	pop32(edx);
	return;
loc_467A5C:
	to32i(edx+0x2F0) = 0; //mov
	goto loc_467A4D;
loc_467A68:
	eax = edx; //mov
	esp -= 4; _sub_46A180(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	return;
loc_467A72:
	cmp(to32i(dword_512204), (int32_t)0);
	if (jz())
		goto loc_467A85;
	eax = edx; //mov
	esp -= 4; _sub_464F40(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	return;
loc_467A85:
	eax = edx; //mov
	esp -= 4; _sub_467C10(); esp += 4; //call
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_467A90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ebx = eax; //mov
	ecx = 0x280000; //mov
	esi = to32i(eax+0x2E8); //mov
	xor_(edx, edx);
	to32i(esp+0x14) = ecx; //mov
	to32i(esp+0x10) = edx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_467B13;
	cmp(to32i(eax+0x280), (int32_t)2);
	if (jz())
		goto loc_467B13;
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_467B13;
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jz())
		goto loc_467B13;
	cmp(to32i(ebx+0x17C), (int32_t)0);
	if (jnz())
		goto loc_467B13;
	edx = to32i(dword_511E3C); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jle())
		goto loc_467B07;
	eax = ebx; //mov
	add(eax, (int32_t)0x9C);
	to32i(esp+0xC) = eax; //mov
loc_467AEF:
	ecx = to32i(dword_511B48+esi); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_467B1D;
loc_467AF9:
	ecx = to32i(dword_511E3C); //mov
	inc(edi);
	add(esi, (int32_t)4);
	cmp(edi, ecx);
	if (jl())
		goto loc_467AEF;
loc_467B07:
	ebx = to32i(esp+0x10); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_467BF1;
loc_467B13:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_467B1D:
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jz())
		goto loc_467AF9;
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jnz())
		goto loc_467AF9;
	eax = to32i(ecx+0x9C); //mov
	ebp = to32i(ebx+0x9C); //mov
	sub(eax, ebp);
	to32i(esp) = eax; //mov
	eax = to32i(ecx+0xA0); //mov
	edx = to32i(ebx+0xA0); //mov
	sub(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(ecx+0xA4); //mov
	ebp = to32i(ebx+0xA4); //mov
	sub(eax, ebp);
	to32i(esp+8) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	edx = to32i(esp); //mov
	eax = to32i(ebx+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebp = eax; //mov
	eax = to32i(ebx+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebp, eax);
	eax = to32i(ebx+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebp);
	cmp(eax, (int32_t)0xCCCC);
	if (jle())
		goto loc_467AF9;
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(ecx+0x9C); //lea
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_467AF9;
	cmp(eax, to32i(esp+0x14));
	if (jge())
		goto loc_467AF9;
	cmp(eax, (int32_t)0x280000);
	if (jge())
		goto loc_467AF9;
	to32i(esp+0x10) = ecx; //mov
	to32i(esp+0x14) = eax; //mov
	goto loc_467AF9;
loc_467BF1:
	eax = ebx; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_467C10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x9C);
	esi = eax; //mov
	to32i(eax+0x2A4) = 0; //mov
	to32i(eax+0x2A8) = 0; //mov
	to32i(eax+0x2AC) = 0; //mov
	dl = to8i(byte_512218); //mov
	edi = to32i(eax+0x2EC); //mov
	eax = to32i(eax+0x184); //mov
	test(dl, (int8_t)8);
	if (jnz())
		goto loc_468AAD;
	al = (int32_t)(intptr_t)byte_4D84D4[eax]; //mov
loc_467C5D:
	and_(eax, (int32_t)0xFF);
	to32i(esi+0x200) = eax; //mov
	edx = to32i(esi+0x188); //mov
	eax = to32i(esi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x18C); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x190); //mov
	add(ecx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x194); //mov
	add(ecx, eax);
	eax = to32i(esi+0xA8); //mov
	to32i(esi+0x2B0) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x198); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x19C); //mov
	add(ecx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A0); //mov
	add(ecx, eax);
	eax = to32i(esi+0xA8); //mov
	to32i(esi+0x2B4) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x1A4); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A8); //mov
	add(ecx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x188); //mov
	add(ecx, eax);
	eax = to32i(esi+0xE8); //mov
	to32i(esi+0x2B8) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x18C); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x190); //mov
	add(ecx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	to32i(esi+0x2BC) = ecx; //mov
	edx = to32i(esi+0x194); //mov
	eax = to32i(esi+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x198); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x19C); //mov
	add(ecx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A0); //mov
	add(ecx, eax);
	eax = to32i(esi+0xE8); //mov
	to32i(esi+0x2C0) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x1A4); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A8); //mov
	add(ecx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	edx = to32i(esi+0x2B8); //mov
	to32i(esi+0x2C4) = ecx; //mov
	cmp(edx, (int32_t)0x50000);
	if (jle())
		goto loc_468AB8;
	ebx = edx; //mov
	eax = to32i(esi+0x2B0); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esi+0x310) = eax; //mov
loc_467E71:
	ecx = to32i(esi+0x2B8); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_468AC7;
	edx = ecx; //mov
loc_467E81:
	ebx = to32i(esi+0x2B0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_468AD0;
	eax = ebx; //mov
loc_467E91:
	esp -= 4; _sub_45ED40(); esp += 4; //call
	ebp = to32i(esi+0x2B8); //mov
	to32i(esi+0x304) = eax; //mov
	test(ebp, ebp);
	if (jl())
		goto loc_468AD9;
loc_467EAA:
	edx = to32i(esi+0x2B0); //mov
	shl(edx, (int32_t)5);
	neg(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esi+0x2B4); //mov
	shl(edx, (int32_t)5);
	neg(edx);
	to32i(esp+0x84) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esi+0x2B8); //mov
	shl(edx, (int32_t)5);
	neg(edx);
	to32i(esp+0x88) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(esi+0xEC); //mov
	edx = to32i(edi+0x1CC); //mov
	shl(eax, (int32_t)5);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0x304); //mov
	neg(ecx);
	cmp(edx, (int32_t)0x2CA45A);
	if (jge())
		goto loc_468AE6;
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
loc_467F35:
	ecx = eax; //mov
loc_467F37:
	edx = to32i(esi+0x188); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x18C); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x190); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x194); //mov
	add(ebx, eax);
	xor_(eax, eax);
	to32i(dword_513518) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x198); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x19C); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A0); //mov
	add(ebx, eax);
	xor_(eax, eax);
	to32i(dword_51351C) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x1A4); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A8); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x84); //mov
	add(eax, ecx);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(esp+0x88); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esp+0x8C); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x84); //mov
	sub(eax, ecx);
	to32i(esp+0x40) = eax; //mov
	eax = to32i(esp+0x88); //mov
	to32i(esp+0x44) = eax; //mov
	eax = to32i(esp+0x8C); //mov
	edx = 0x30A3; //mov
	to32i(esp+0x48) = eax; //mov
	eax = esi; //mov
	to32i(dword_513520) = ebx; //mov
	esp -= 4; _sub_46A620(); esp += 4; //call
	eax = to32i(dword_513518); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = 0x80000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	add(eax, to32i(esi+0x2E4));
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_468B2F;
	eax = 0x7F; //mov
loc_468099:
	edx = to32i(edi+0x12C); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	to32i(esp+0xC) = eax; //mov
	ecx = to32i(esi+0x2B8); //mov
	cmp(ecx, (int32_t)0x3C0000);
	if (jle())
		goto loc_4680F1;
	edx = 0x444; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
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
	to32i(esp+0xC) = eax; //mov
loc_4680F1:
	ebp = 1; //mov
	edx = to32i(esp+0xC); //mov
	xor_(ebx, ebx);
	to32i(esp+0x28) = ebp; //mov
	to32i(esp+0x58) = ebx; //mov
	to32i(esp+0x3C) = ebx; //mov
	test(edx, edx);
	if (jz())
		goto loc_4681E7;
	ecx = to32i(esi+0x2B8); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_468B42;
	eax = ecx; //mov
loc_468120:
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_4681E7;
	cmp(to8i(esi+0x2D7), (int8_t)0x20);
	if (jnb())
		goto loc_4681E7;
	cmp(to8i(esi+0x2DA), (int8_t)1);
	if (jz())
		goto loc_4681E7;
	eax = 0xE666; //mov
	edx = to32i(esi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xAC); //mov
	to32i(esi+0xA8) = eax; //mov
	eax = 0xE666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xB0); //mov
	to32i(esi+0xAC) = eax; //mov
	eax = 0xE666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xE8); //mov
	to32i(esi+0xB0) = eax; //mov
	eax = 0xE666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xEC); //mov
	to32i(esi+0xE8) = eax; //mov
	eax = 0xE666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xF0); //mov
	to32i(esi+0xEC) = eax; //mov
	eax = 0xE666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0xF0) = eax; //mov
loc_4681E7:
	eax = esi; //mov
	esp -= 4; _sub_469820(); esp += 4; //call
	edx = to32i(edi+0xF8); //mov
	ecx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp) = eax; //mov
	to32i(esp+0x30) = ecx; //mov
	cmp(to16i(esi+0x14C), (int16_t)0);
	if (jz())
		goto loc_46822B;
	edx = to32i(esi+0x2EC); //mov
	eax = to32i(esi+0x150); //mov
	cmp(eax, to32i(edx+0x14C));
	if (jg())
		goto loc_468B4B;
loc_46822B:
	ebp = to32i(esi+0x2E8); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_468B4B;
	to32i(esi+0x284) = ebp; //mov
	eax = to32i(dword_4D8504); //mov
	edx = to32i(edi+0xFC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = to32i(esi+0x2B8); //mov
	test(eax, eax);
	if (jle())
		goto loc_468B6C;
loc_468264:
	shl(eax, (int32_t)5);
	cmp(edx, eax);
	if (jle())
		goto loc_468B7C;
	edx = to32i(esi+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_468B73;
	eax = edx; //mov
loc_46827F:
	shl(eax, (int32_t)5);
loc_468282:
	ebx = to32i(esi+0x2B8); //mov
	ecx = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_468290;
	neg(ecx);
loc_468290:
	edx = to32i(esi+0x21C); //mov
	ebp = to32i(edi+0x100); //mov
	edx = to32i(edx+0x28); //mov
	eax = ecx; //mov
	add(edx, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ebx = to32i(esp+0x30); //mov
	sub(ecx, eax);
	add(edx, eax);
	add(ebx, ecx);
	eax = to32i(dword_51351C); //mov
	to32i(esp) = edx; //mov
	to32i(esp+0x30) = ebx; //mov
	neg(eax);
	edx = to32i(edi+0x138); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_469E40(); esp += 4; //call
	edx = to32i(dword_513514); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_468AA0;
	edx = to32i(edi+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(esi+0x320); //mov
	ecx = eax; //mov
	test(ebp, ebp);
	if (jl())
		goto loc_468B83;
loc_46831D:
	eax = ecx; //mov
	edx = to32i(esi+0x320); //mov
	sub(eax, edx);
	to32i(esp+4) = eax; //mov
	edx = to32i(esp+4); //mov
	eax = to32i(dword_513524); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	sub(ebx, ecx);
	eax = to32i(esi+0x320); //mov
	add(eax, ebx);
	to32i(esp+0x34) = eax; //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(dword_513510); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esp; //mov
	to32i(esp+0x34) = eax; //mov
	eax = esi; //mov
	to32i(esi+0x2FC) = 0; //mov
	esp -= 4; _sub_468DF0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x30); //lea
	eax = esi; //mov
	esp -= 4; _sub_468DF0(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x54); //mov
	add(eax, ecx);
	to32i(esi+0x2AC) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	ebx = to32i(esp+0x4C); //mov
	add(eax, ebx);
	to32i(esi+0x2A4) = eax; //mov
	edx = to32i(edi+0x1D4); //mov
	eax = to32i(esi+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x1999; //mov
	to32i(esi+0x2AC) = eax; //mov
	eax = to32i(dword_513520); //mov
	to32i(esi+0x2A8) = 0; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(edi+0x140); //mov
	eax = to32i(esi+0x2AC); //mov
	neg(ecx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	xor_(ebp, ebp);
	to32i(esi+0x320) = eax; //mov
	to32i(esp+0x90) = ebp; //mov
	eax = to32i(esp+0x1C); //mov
	edx = to32i(edi+0x1D0); //mov
	edi = to32i(esp+0x4C); //mov
	to32i(esp+0x98) = ebp; //mov
	sub(eax, edi);
	ecx = 0xFFFFFFFF; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2B8); //mov
	to32i(esp+0x94) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_468518;
	ebx = to32i(esi+0x310); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_468B99;
	eax = ebx; //mov
loc_468455:
	cmp(eax, (int32_t)0xCCC);
	if (jle())
		goto loc_468518;
	edi = to32i(esi+0x2F4); //mov
	test(edi, edi);
	if (jle())
		goto loc_468BA2;
	eax = edi; //mov
loc_468470:
	cmp(eax, (int32_t)1);
	if (jl())
		goto loc_468BF1;
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_468BF1;
	ebp = to32i(esi+0x2B8); //mov
	edx = 0x8000; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_468BAB;
	eax = ebp; //mov
loc_46849B:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	test(edx, edx);
	if (jl())
		goto loc_468BB4;
	eax = to32i(esi+0x2B8); //mov
	edx = 0x8000; //mov
	test(eax, eax);
	if (jle())
		goto loc_468BBB;
loc_4684C7:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = edx; //mov
loc_4684DA:
	ebx = to32i(esi+0x2EC); //mov
	edx = to32i(esi+0x2C0); //mov
	cmp(edx, to32i(ebx+0x14C));
	if (jle())
		goto loc_468BC2;
	cmp(to32i(esp+0x94), (int32_t)0);
	if (jle())
		goto loc_468BC2;
loc_468500:
	edx = to32i(esp+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x94) = eax; //mov
loc_468518:
	edx = (int32_t)(intptr_t)(esp+0x60); //lea
	eax = (int32_t)(intptr_t)(esi+0x188); //lea
	esp -= 4; _sub_49D890(); esp += 4; //call
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_453670(); esp += 4; //call
	edx = to32i(esp+0x60); //mov
	eax = to32i(esi+0x2A4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ebx = eax; //mov
	eax = to32i(esi+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x68); //mov
	add(ebx, eax);
	eax = to32i(esi+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x28C) = ebx; //mov
	eax = to32i(esi+0x2A4); //mov
	edx = to32i(esp+0x6C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x70); //mov
	ebx = eax; //mov
	eax = to32i(esi+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x74); //mov
	add(ebx, eax);
	eax = to32i(esi+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x290) = ebx; //mov
	eax = to32i(esi+0x2A4); //mov
	edx = to32i(esp+0x78); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x7C); //mov
	ebx = eax; //mov
	eax = to32i(esi+0x2A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x80); //mov
	add(ebx, eax);
	eax = to32i(esi+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x294) = ebx; //mov
	eax = to32i(esp+0x90); //mov
	edx = to32i(esp+0x60); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x68); //mov
	add(ebx, eax);
	eax = to32i(esp+0x98); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x298) = ebx; //mov
	edx = to32i(esp+0x6C); //mov
	eax = to32i(esp+0x90); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x70); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x74); //mov
	add(ebx, eax);
	eax = to32i(esp+0x98); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x29C) = ebx; //mov
	eax = to32i(esp+0x90); //mov
	edx = to32i(esp+0x78); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x7C); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x80); //mov
	add(ebx, eax);
	eax = to32i(esp+0x98); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esi+0x28C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebp = to32i(esi+0xA8); //mov
	add(ebp, eax);
	eax = to32i(esi+0x290); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = to32i(esi+0xAC); //mov
	add(edx, eax);
	eax = to32i(esi+0x294); //mov
	to32i(esi+0xAC) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	to32i(esi+0x2A0) = ebx; //mov
	ebx = to32i(esi+0xB0); //mov
	add(ebx, eax);
	eax = to32i(esi+0x298); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edi = to32i(esi+0xE8); //mov
	add(edi, eax);
	eax = to32i(esi+0x29C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	to32i(esi+0xA8) = ebp; //mov
	ebp = to32i(esi+0xEC); //mov
	add(ebp, eax);
	eax = to32i(esi+0x2A0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	to32i(esi+0xB0) = ebx; //mov
	to32i(esi+0xE8) = edi; //mov
	edx = to32i(esi+0xF0); //mov
	to32i(esi+0xEC) = ebp; //mov
	add(edx, eax);
	to32i(esi+0xF0) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46899A;
	edx = to32i(esi+0x188); //mov
	eax = to32i(esi+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x18C); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x190); //mov
	add(ebx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x194); //mov
	add(ebx, eax);
	eax = to32i(esi+0xE8); //mov
	to32i(esi+0x2BC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0x198); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x19C); //mov
	add(edi, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A0); //mov
	add(edi, eax);
	eax = to32i(esi+0xE8); //mov
	to32i(esi+0x2C0) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x1A4); //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	add(ebx, eax);
	eax = to32i(esi+0x2C0); //mov
	to32i(esi+0x2C4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x2C0) = eax; //mov
	edx = to32i(esp+0x60); //mov
	eax = to32i(esi+0x2BC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	eax = to32i(esi+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x68); //mov
	add(ecx, eax);
	eax = to32i(esi+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	to32i(esi+0xE8) = ecx; //mov
	edx = to32i(esp+0x6C); //mov
	eax = to32i(esi+0x2BC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x70); //mov
	ecx = eax; //mov
	eax = to32i(esi+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x74); //mov
	add(ecx, eax);
	eax = to32i(esi+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	to32i(esi+0xEC) = ecx; //mov
	eax = to32i(esi+0x2BC); //mov
	edx = to32i(esp+0x78); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x7C); //mov
	ecx = eax; //mov
	eax = to32i(esi+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x80); //mov
	add(ecx, eax);
	eax = to32i(esi+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	to32i(esi+0xF0) = ecx; //mov
loc_46899A:
	cmp(to8i(esi+0x2DA), (int8_t)1);
	if (jnz())
		goto loc_468A72;
	ecx = to32i(dword_513520); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_468DA7;
	eax = ecx; //mov
loc_4689B7:
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_468A72;
	ebx = to32i(esi+0x2B8); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_468DB0;
	eax = ebx; //mov
loc_4689D2:
	cmp(eax, (int32_t)0x140000);
	if (jge())
		goto loc_468DB9;
loc_4689DD:
	ecx = 0xFD70; //mov
loc_4689E2:
	eax = ecx; //mov
	edx = to32i(esi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xAC); //mov
	to32i(esi+0xA8) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xB0); //mov
	to32i(esi+0xAC) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xE8); //mov
	to32i(esi+0xB0) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xEC); //mov
	to32i(esi+0xE8) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xF0); //mov
	to32i(esi+0xEC) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0xF0) = eax; //mov
loc_468A72:
	eax = to32i(esi+0x2A4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	to32i(esi+0x2A4) = eax; //mov
	eax = to32i(esi+0x2AC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esi+0x2AC) = eax; //mov
loc_468AA0:
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_468AAD:
	al = (int32_t)(intptr_t)byte_4D84E8[eax]; //mov
	goto loc_467C5D;
loc_468AB8:
	to32i(esi+0x310) = 0; //mov
	goto loc_467E71;
loc_468AC7:
	edx = ecx; //mov
	neg(edx);
	goto loc_467E81;
loc_468AD0:
	eax = ebx; //mov
	neg(eax);
	goto loc_467E91;
loc_468AD9:
	neg(eax);
	to32i(esi+0x304) = eax; //mov
	goto loc_467EAA;
loc_468AE6:
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	ebx = to32i(esi+0x304); //mov
	add(edx, edx);
	cmp(ebx, (int32_t)0x3C0000);
	if (jge())
		goto loc_468B11;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	goto loc_467F35;
loc_468B11:
	cmp(ebx, (int32_t)(intptr_t)dword_500000);
	if (jle())
		goto loc_467F37;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	goto loc_467F35;
loc_468B2F:
	cmp(eax, (int32_t)0xFFFFFF81);
	if (jge())
		goto loc_468099;
	eax = 0xFFFFFF81; //mov
	goto loc_468099;
loc_468B42:
	eax = ecx; //mov
	neg(eax);
	goto loc_468120;
loc_468B4B:
	to32i(esi+0x328) = 0; //mov
	to32i(esi+0x324) = 0; //mov
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_468B6C:
	neg(eax);
	goto loc_468264;
loc_468B73:
	eax = edx; //mov
	neg(eax);
	goto loc_46827F;
loc_468B7C:
	eax = edx; //mov
	goto loc_468282;
loc_468B83:
	edx = ebp; //mov
	eax = ebp; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esi+0x320) = eax; //mov
	goto loc_46831D;
loc_468B99:
	eax = ebx; //mov
	neg(eax);
	goto loc_468455;
loc_468BA2:
	eax = edi; //mov
	neg(eax);
	goto loc_468470;
loc_468BAB:
	eax = ebp; //mov
	neg(eax);
	goto loc_46849B;
loc_468BB4:
	xor_(eax, eax);
	goto loc_4684DA;
loc_468BBB:
	neg(eax);
	goto loc_4684C7;
loc_468BC2:
	edx = to32i(esi+0x2EC); //mov
	edx = to32i(edx+0x14C); //mov
	ebx = to32i(esi+0x2C0); //mov
	neg(edx);
	cmp(edx, ebx);
	if (jle())
		goto loc_468518;
	cmp(to32i(esp+0x94), (int32_t)0);
	if (jl())
		goto loc_468500;
	goto loc_468518;
loc_468BF1:
	cmp(to32i(esi+0x2B8), (int32_t)0x50000);
	if (jle())
		goto loc_468518;
	cmp(to32i(esi+0x2C0), (int32_t)0);
	if (jle())
		goto loc_468C88;
	cmp(to32i(esi+0x2E4), (int32_t)0x40);
	if (jle())
		goto loc_468C88;
	cmp(to8i(esi+0x2DA), (int8_t)2);
	if (jbe())
		goto loc_468C88;
loc_468C20:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jz())
		goto loc_468D18;
	edx = to32i(esi+0x2EC); //mov
	eax = to32i(edx+0x150); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edi = to32i(esi+0x310); //mov
	edx = eax; //mov
	test(edi, edi);
	if (jle())
		goto loc_468D0F;
	eax = edi; //mov
loc_468C58:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = edx; //mov
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_468C77;
	eax = 0x8000; //mov
loc_468C77:
	ecx = eax; //mov
	to32i(esi+0x2F4) = 2; //mov
	goto loc_468518;
loc_468C88:
	cmp(to32i(esi+0x2C0), (int32_t)0);
	if (jl())
		goto loc_468CF7;
loc_468C91:
	cmp(to8i(esi+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_468518;
	cmp(to8i(esi+0x2D8), (int8_t)0);
	if (jbe())
		goto loc_468D81;
	edx = to32i(esi+0x2EC); //mov
	edx = to32i(edx+0x150); //mov
	eax = to32i(esi+0x310); //mov
	add(edx, edx);
	test(eax, eax);
	if (jle())
		goto loc_468D7A;
loc_468CC7:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = edx; //mov
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_468CE6;
	eax = 0x8000; //mov
loc_468CE6:
	ecx = eax; //mov
	to32i(esi+0x2F4) = 2; //mov
	goto loc_468518;
loc_468CF7:
	cmp(to32i(esi+0x2E4), (int32_t)0xFFFFFFC0);
	if (jge())
		goto loc_468C91;
	cmp(to8i(esi+0x2DA), (int8_t)2);
	if (ja())
		goto loc_468C20;
	goto loc_468C91;
loc_468D0F:
	eax = edi; //mov
	neg(eax);
	goto loc_468C58;
loc_468D18:
	cmp(to8i(esi+0x2D8), (int8_t)0);
	if (jbe())
		goto loc_468D49;
	edx = to32i(esi+0x2EC); //mov
	edx = to32i(edx+0x150); //mov
	ebx = to32i(esi+0x310); //mov
	add(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_468D40;
	eax = ebx; //mov
	goto loc_468C58;
loc_468D40:
	eax = ebx; //mov
	neg(eax);
	goto loc_468C58;
loc_468D49:
	edx = to32i(esi+0x2EC); //mov
	eax = to32i(edx+0x150); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = to32i(esi+0x310); //mov
	edx = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_468D71;
	eax = ecx; //mov
	goto loc_468C58;
loc_468D71:
	eax = ecx; //mov
	neg(eax);
	goto loc_468C58;
loc_468D7A:
	neg(eax);
	goto loc_468CC7;
loc_468D81:
	edx = to32i(esi+0x2EC); //mov
	ebp = to32i(esi+0x310); //mov
	edx = to32i(edx+0x150); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_468D9E;
	eax = ebp; //mov
	goto loc_468CC7;
loc_468D9E:
	eax = ebp; //mov
	neg(eax);
	goto loc_468CC7;
loc_468DA7:
	eax = ecx; //mov
	neg(eax);
	goto loc_4689B7;
loc_468DB0:
	eax = ebx; //mov
	neg(eax);
	goto loc_4689D2;
loc_468DB9:
	edi = to32i(esi+0x2E4); //mov
	test(edi, edi);
	if (jle())
		goto loc_468DD8;
	eax = edi; //mov
	cmp(eax, (int32_t)0x20);
	if (jg())
		goto loc_4689DD;
	ecx = 0xFF7C; //mov
	goto loc_4689E2;
loc_468DD8:
	eax = edi; //mov
	neg(eax);
	cmp(eax, (int32_t)0x20);
	if (jg())
		goto loc_4689DD;
	ecx = 0xFF7C; //mov
	goto loc_4689E2;
}
Fn(void) Game::_sub_468DF0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	xor_(ebp, ebp);
	to32i(edx+0x2C) = ebp; //mov
	cmp(to32i(edx+0xC), (int32_t)0);
	if (jnz())
		goto loc_469027;
loc_468E08:
	cmp(to32i(esi), (int32_t)0);
	if (jl())
		goto loc_469041;
loc_468E11:
	cmp(to32i(esi), (int32_t)0);
	if (jle())
		goto loc_468E36;
	cmp(to32i(esi+0x18), (int32_t)0);
	if (jle())
		goto loc_468E36;
	cmp(to8i(edi+0x2D7), (int8_t)0x40);
	if (jbe())
		goto loc_469084;
	cmp(to8i(edi+0x2DA), (int8_t)1);
	if (jbe())
		goto loc_469084;
loc_468E36:
	edx = to32i(edi+0x2EC); //mov
	eax = to32i(esi); //mov
	edx = to32i(edx+0x138); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4690A2;
	test(eax, eax);
	if (jle())
		goto loc_46909B;
loc_468E60:
	cmp(eax, to32i(esi+4));
	if (jle())
		goto loc_4690A2;
loc_468E69:
	cmp(to8i(edi+0x2DC), (int8_t)0);
	if (jnz())
		goto loc_46915C;
	ecx = to32i(edi+0x21C); //mov
	ebp = to32i(ecx); //mov
	cmp(ebp, (int32_t)7);
	if (jnz())
		goto loc_4690E9;
loc_468E87:
	ebp = to32i(esi+4); //mov
	cmp(ebp, to32i(esi));
	if (jge())
		goto loc_469194;
	to32i(esi) = ebp; //mov
loc_468E94:
	ecx = to32i(edi+0x21C); //mov
	ebx = to32i(ecx); //mov
	cmp(ebx, (int32_t)7);
	if (jnz())
		goto loc_4691A9;
loc_468EA5:
	cmp(to32i(edi+0x2B8), (int32_t)0x280000);
	if (jge())
		goto loc_468ED1;
	eax = to32i(dword_540F48); //mov
	edx = eax; //mov
	ecx = 4; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	test(edx, edx);
	if (jnz())
		goto loc_4691E4;
loc_468ECA:
	to32i(esi+0x2C) = 0x30000; //mov
loc_468ED1:
	ebx = to32i(esi+0x18); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46921A;
	eax = ebx; //mov
loc_468EDE:
	test(eax, eax);
	if (jz())
		goto loc_469233;
	edx = to32i(esi+0x18); //mov
	neg(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = to32i(esi+0x10); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_49E630(); esp += 4; //call
	ebp = to32i(esi+0x18); //mov
	ecx = eax; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_468F1B;
	edx = to32i(esi+0x10); //mov
	test(edx, edx);
	if (jle())
		goto loc_469223;
	ecx = 0x8000; //mov
loc_468F19:
	sub(ecx, eax);
loc_468F1B:
	shl(ecx, (int32_t)8);
loc_468F1E:
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jz())
		goto loc_4692C1;
	edx = to32i(dword_513524); //mov
	eax = to32i(esi+4); //mov
	ebx = 0x1555; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46923A;
	eax = ecx; //mov
loc_468F4C:
	cmp(eax, (int32_t)0x100000);
	if (jle())
		goto loc_469243;
	eax = 0x100000; //mov
loc_468F5C:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_469257;
loc_468F7C:
	eax = to32i(dword_513518); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esi+0x1C) = ebx; //mov
	ebp = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(esi+0x10); //mov
	to32i(esi+0x1C) = ebp; //mov
	test(eax, eax);
	if (jle())
		goto loc_46925E;
loc_468F9E:
	edx = to32i(esi+0x18); //mov
	test(edx, edx);
	if (jle())
		goto loc_469265;
loc_468FA9:
	add(eax, edx);
	cmp(eax, (int32_t)0x200000);
	if (jge())
		goto loc_468FDC;
	cmp(to32i(esi+0x10), (int32_t)0);
	if (jle())
		goto loc_469283;
	test(ebx, ebx);
	if (jle())
		goto loc_46926C;
	eax = ebx; //mov
loc_468FC6:
	edx = to32i(esi+0x10); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_46927C;
	test(ebx, ebx);
	if (jle())
		goto loc_469275;
loc_468FD9:
	to32i(esi+0x1C) = ebx; //mov
loc_468FDC:
	eax = to32i(esi); //mov
	edx = esi; //mov
	to32i(esi+0x24) = eax; //mov
	eax = edi; //mov
	to32i(esi+0x20) = 0; //mov
	esp -= 4; _sub_469440(); esp += 4; //call
	cmp(to32i(esi+0xC), (int32_t)0);
	if (jz())
		goto loc_46900E;
	eax = (int32_t)(intptr_t)(esi+0x24); //lea
	ebx = to32i(esi+0xC); //mov
	edx = to32i(esi+0x24); //mov
	push32(eax);
	ecx = (int32_t)(intptr_t)(esi+0x1C); //lea
	neg(ebx);
	eax = to32i(esi+0x1C); //mov
	esp -= 4; _sub_45EC80(); esp += 4; //call
loc_46900E:
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jz())
		goto loc_46920B;
	eax = to32i(esi+0x2C); //mov
	to32i(edi+0x324) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_469027:
	eax = (int32_t)(intptr_t)(esi+0x18); //lea
	ebx = to32i(esi+0xC); //mov
	edx = to32i(esi+0x18); //mov
	push32(eax);
	ecx = (int32_t)(intptr_t)(esi+0x10); //lea
	eax = to32i(esi+0x10); //mov
	esp -= 4; _sub_45EC80(); esp += 4; //call
	goto loc_468E08;
loc_469041:
	cmp(to32i(esi+0x18), (int32_t)0);
	if (jge())
		goto loc_468E11;
	cmp(to8i(edi+0x2D7), (int8_t)0x40);
	if (jbe())
		goto loc_469061;
	cmp(to8i(edi+0x2DA), (int8_t)0);
	if (jz())
		goto loc_468E36;
loc_469061:
	ebx = to32i(esi+0x18); //mov
	eax = to32i(esi); //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_469076;
	ebp = 1; //mov
	to32i(esi) = eax; //mov
	goto loc_468E36;
loc_469076:
	eax = ebx; //mov
	ebp = 1; //mov
	to32i(esi) = eax; //mov
	goto loc_468E36;
loc_469084:
	ecx = to32i(esi+0x18); //mov
	eax = to32i(esi); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_46908F;
	eax = ecx; //mov
loc_46908F:
	ebp = 1; //mov
	to32i(esi) = eax; //mov
	goto loc_468E36;
loc_46909B:
	neg(eax);
	goto loc_468E60;
loc_4690A2:
	cmp(to8i(edi+0x2DC), (int8_t)0);
	if (jz())
		goto loc_468ED1;
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jnz())
		goto loc_468ED1;
	ebx = to32i(edi+0x2B8); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4690D5;
	eax = ebx; //mov
	cmp(eax, (int32_t)0x8000);
	if (jg())
		goto loc_468E69;
	goto loc_468ED1;
loc_4690D5:
	eax = ebx; //mov
	neg(eax);
	cmp(eax, (int32_t)0x8000);
	if (jg())
		goto loc_468E69;
	goto loc_468ED1;
loc_4690E9:
	cmp(ebp, (int32_t)8);
	if (jz())
		goto loc_468E87;
	cmp(ebp, (int32_t)0xA);
	if (jz())
		goto loc_468E87;
	cmp(ebp, (int32_t)5);
	if (jz())
		goto loc_468E87;
	cmp(ebp, (int32_t)9);
	if (jz())
		goto loc_468E87;
	cmp(ebp, (int32_t)0xD);
	if (jz())
		goto loc_468E87;
	cmp(ebp, (int32_t)0xE);
	if (jz())
		goto loc_468E87;
	cmp(to32i(edi+0x2B8), (int32_t)0x280000);
	if (jg())
		goto loc_468E87;
	cmp(to8i(edi+0x2D8), (int8_t)0xEC);
	if (jb())
		goto loc_468E87;
	ebx = to32i(edi+0x2B8); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46918E;
	eax = ebx; //mov
loc_469148:
	cmp(eax, (int32_t)0x50000);
	if (jge())
		goto loc_46915C;
	cmp(to32i(edi+0x2F4), (int32_t)0);
	if (jz())
		goto loc_468E87;
loc_46915C:
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jz())
		goto loc_4691FF;
	inc(to32i(edi+0x2FC));
loc_46916C:
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_469700(); esp += 4; //call
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jz())
		goto loc_46920B;
	eax = to32i(esi+0x2C); //mov
	to32i(edi+0x324) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46918E:
	eax = ebx; //mov
	neg(eax);
	goto loc_469148;
loc_469194:
	eax = ebp; //mov
	edx = to32i(esi); //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_468E94;
	to32i(esi) = eax; //mov
	goto loc_468E94;
loc_4691A9:
	cmp(ebx, (int32_t)8);
	if (jz())
		goto loc_468EA5;
	cmp(ebx, (int32_t)0xA);
	if (jz())
		goto loc_468EA5;
	cmp(ebx, (int32_t)5);
	if (jz())
		goto loc_468EA5;
	cmp(ebx, (int32_t)9);
	if (jz())
		goto loc_468EA5;
	cmp(ebx, (int32_t)0xD);
	if (jz())
		goto loc_468EA5;
	cmp(ebx, (int32_t)0xE);
	if (jz())
		goto loc_468EA5;
	goto loc_468ED1;
loc_4691E4:
	eax = to32i(edi+0x21C); //mov
	cmp(to32i(eax), (int32_t)7);
	if (jz())
		goto loc_468ECA;
	to32i(esi+0x2C) = 0; //mov
	goto loc_468ED1;
loc_4691FF:
	add(to32i(edi+0x2FC), (int32_t)2);
	goto loc_46916C;
loc_46920B:
	eax = to32i(esi+0x2C); //mov
	to32i(edi+0x328) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46921A:
	eax = ebx; //mov
	neg(eax);
	goto loc_468EDE;
loc_469223:
	if (jge())
		goto loc_468F1B;
	ecx = 0xFFFF8000; //mov
	goto loc_468F19;
loc_469233:
	xor_(ecx, ecx);
	goto loc_468F1E;
loc_46923A:
	eax = ecx; //mov
	neg(eax);
	goto loc_468F4C;
loc_469243:
	test(ecx, ecx);
	if (jle())
		goto loc_46924E;
	eax = ecx; //mov
	goto loc_468F5C;
loc_46924E:
	eax = ecx; //mov
	neg(eax);
	goto loc_468F5C;
loc_469257:
	neg(ebx);
	goto loc_468F7C;
loc_46925E:
	neg(eax);
	goto loc_468F9E;
loc_469265:
	neg(edx);
	goto loc_468FA9;
loc_46926C:
	eax = ebx; //mov
	neg(eax);
	goto loc_468FC6;
loc_469275:
	neg(ebx);
	goto loc_468FD9;
loc_46927C:
	ebx = edx; //mov
	goto loc_468FD9;
loc_469283:
	test(ebx, ebx);
	if (jle())
		goto loc_469299;
	eax = ebx; //mov
	neg(eax);
	ebp = to32i(esi+0x10); //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_4692AD;
	ebx = ebp; //mov
	goto loc_468FD9;
loc_469299:
	eax = ebx; //mov
	neg(eax);
	neg(eax);
	ebp = to32i(esi+0x10); //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_4692AD;
	ebx = ebp; //mov
	goto loc_468FD9;
loc_4692AD:
	test(ebx, ebx);
	if (jle())
		goto loc_4692B8;
loc_4692B1:
	neg(ebx);
	goto loc_468FD9;
loc_4692B8:
	neg(ebx);
	neg(ebx);
	goto loc_468FD9;
loc_4692C1:
	edx = to32i(dword_513510); //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0xA3D; //mov
	ebx = eax; //mov
	eax = to32i(edi+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_469384;
	eax = 0x8000; //mov
loc_4692FB:
	edx = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46939E;
	eax = ecx; //mov
loc_469307:
	cmp(eax, edx);
	if (jle())
		goto loc_4693B0;
	test(ecx, ecx);
	if (jle())
		goto loc_4693A7;
	eax = ecx; //mov
loc_469319:
	cmp(eax, (int32_t)0x20000);
	if (jle())
		goto loc_4693B7;
	eax = 0x20000; //mov
loc_469329:
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_4693E2;
loc_469348:
	eax = to32i(dword_513518); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ebx, eax);
	cmp(to32i(esi+0x10), (int32_t)0);
	if (jle())
		goto loc_4693F9;
	test(ebx, ebx);
	if (jle())
		goto loc_4693E9;
	eax = ebx; //mov
loc_46936C:
	ecx = to32i(esi+0x10); //mov
	cmp(eax, ecx);
	if (jge())
		goto loc_4693F2;
	test(ebx, ebx);
	if (jle())
		goto loc_4692B1;
	goto loc_468FD9;
loc_469384:
	edx = 0xA3D; //mov
	eax = to32i(edi+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	goto loc_4692FB;
loc_46939E:
	eax = ecx; //mov
	neg(eax);
	goto loc_469307;
loc_4693A7:
	eax = ecx; //mov
	neg(eax);
	goto loc_469319;
loc_4693B0:
	eax = edx; //mov
	goto loc_469319;
loc_4693B7:
	test(ecx, ecx);
	if (jle())
		goto loc_4693CC;
	eax = ecx; //mov
loc_4693BD:
	cmp(eax, edx);
	if (jle())
		goto loc_4693DB;
	test(ecx, ecx);
	if (jle())
		goto loc_4693D2;
	eax = ecx; //mov
	goto loc_469329;
loc_4693CC:
	eax = ecx; //mov
	neg(eax);
	goto loc_4693BD;
loc_4693D2:
	eax = ecx; //mov
	neg(eax);
	goto loc_469329;
loc_4693DB:
	eax = edx; //mov
	goto loc_469329;
loc_4693E2:
	neg(ebx);
	goto loc_469348;
loc_4693E9:
	eax = ebx; //mov
	neg(eax);
	goto loc_46936C;
loc_4693F2:
	ebx = ecx; //mov
	goto loc_468FD9;
loc_4693F9:
	test(ebx, ebx);
	if (jle())
		goto loc_469412;
	eax = ebx; //mov
loc_4693FF:
	neg(eax);
	edx = to32i(esi+0x10); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_469418;
	eax = edx; //mov
	to32i(esi+0x1C) = eax; //mov
	goto loc_468FDC;
loc_469412:
	eax = ebx; //mov
	neg(eax);
	goto loc_4693FF;
loc_469418:
	test(ebx, ebx);
	if (jle())
		goto loc_469428;
	eax = ebx; //mov
	neg(eax);
	to32i(esi+0x1C) = eax; //mov
	goto loc_468FDC;
loc_469428:
	neg(ebx);
	eax = ebx; //mov
	neg(eax);
	to32i(esi+0x1C) = eax; //mov
	goto loc_468FDC;
}
Fn(void) Game::_sub_469440()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x21C); //mov
	xor_(edx, edx);
	ecx = to32i(eax); //mov
	to32i(esp) = edx; //mov
	cmp(ecx, (int32_t)0xE);
	if (jz())
		goto loc_4695FA;
	ebx = to32i(esi+0x1C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_469603;
	eax = ebx; //mov
loc_46946F:
	ebp = to32i(esi+0x24); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_46960C;
	edx = ebp; //mov
loc_46947C:
	cmp(eax, edx);
	if (jle())
		goto loc_469625;
	ecx = to32i(esi+0x24); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_469615;
	eax = ecx; //mov
loc_469491:
	ebx = to32i(esi+0x1C); //mov
	sar(eax, (int32_t)2);
	test(ebx, ebx);
	if (jle())
		goto loc_46961E;
loc_46949F:
	add(ebx, eax);
	ebp = to32i(esi+0x1C); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_46964A;
	eax = ebp; //mov
loc_4694AE:
	cmp(eax, (int32_t)0x70000);
	if (jle())
		goto loc_46965C;
	edx = to32i(esi+0x1C); //mov
	test(edx, edx);
	if (jle())
		goto loc_469653;
	eax = edx; //mov
loc_4694C6:
	add(eax, (int32_t)0x1C000);
loc_4694CB:
	ecx = to32i(esi+0x28); //mov
	ebp = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_46967F;
	edx = to32i(dword_513524); //mov
loc_4694DE:
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jz())
		goto loc_469509;
	cmp(to32i(esi+0x1C), (int32_t)0);
	if (jle())
		goto loc_46968A;
	to32i(edi+0x368) = ebx; //mov
loc_469503:
	to32i(edi+0x364) = ecx; //mov
loc_469509:
	cmp(ebx, ecx);
	if (jle())
		goto loc_4695FA;
	edx = to32i(edi+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_46969F;
	eax = edx; //mov
loc_469521:
	cmp(eax, (int32_t)0x50000);
	if (jg())
		goto loc_469532;
	eax = to32i(edi+0x2F4); //mov
	test(eax, eax);
	if (jz())
		goto loc_469536;
loc_469532:
	eax = ebx; //mov
	sub(eax, ecx);
loc_469536:
	to32i(esi+0x2C) = eax; //mov
	ah = to8i(edi+0x2DA); //mov
	cmp(ah, (int8_t)2);
	if (jnz())
		goto loc_4696A8;
loc_469548:
	cmp(to8i(edi+0x2D7), (int8_t)0);
	if (jbe())
		goto loc_46957F;
	cmp(to32i(edi+0x2F4), (int32_t)0);
	if (jnz())
		goto loc_46957F;
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jnz())
		goto loc_46957F;
	cmp(ebp, ecx);
	if (jge())
		goto loc_46957F;
	edx = 1; //mov
	eax = to32i(esi+0x2C); //mov
	to32i(esp) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	to32i(esi+0x2C) = eax; //mov
loc_46957F:
	edx = ebx; //mov
	ebp = to32i(edi+0x200); //mov
	sub(edx, ecx);
	cmp(ebp, (int32_t)3);
	if (jge())
		goto loc_4696B5;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	ebp = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	cmp(eax, ebp);
	if (jle())
		goto loc_4695B6;
loc_4695B4:
	eax = ebp; //mov
loc_4695B6:
	sub(ecx, eax);
	eax = ecx; //mov
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
	ecx = eax; //mov
	eax = to32i(esi+0x1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x1C) = eax; //mov
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_4696E0;
	cmp(to32i(edi+0x200), (int32_t)2);
	if (jg())
		goto loc_4696E0;
loc_4695FA:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_469603:
	eax = ebx; //mov
	neg(eax);
	goto loc_46946F;
loc_46960C:
	edx = ebp; //mov
	neg(edx);
	goto loc_46947C;
loc_469615:
	eax = ecx; //mov
	neg(eax);
	goto loc_469491;
loc_46961E:
	neg(ebx);
	goto loc_46949F;
loc_469625:
	eax = to32i(esi+0x1C); //mov
	test(eax, eax);
	if (jle())
		goto loc_46963D;
loc_46962C:
	edx = to32i(esi+0x24); //mov
	sar(eax, (int32_t)2);
	test(edx, edx);
	if (jle())
		goto loc_469641;
	ebx = edx; //mov
	goto loc_46949F;
loc_46963D:
	neg(eax);
	goto loc_46962C;
loc_469641:
	ebx = edx; //mov
	neg(ebx);
	goto loc_46949F;
loc_46964A:
	eax = ebp; //mov
	neg(eax);
	goto loc_4694AE;
loc_469653:
	eax = edx; //mov
	neg(eax);
	goto loc_4694C6;
loc_46965C:
	eax = to32i(esi+0x1C); //mov
	test(eax, eax);
	if (jle())
		goto loc_469670;
	sar(eax, (int32_t)2);
	add(eax, (int32_t)0x70000);
	goto loc_4694CB;
loc_469670:
	neg(eax);
	sar(eax, (int32_t)2);
	add(eax, (int32_t)0x70000);
	goto loc_4694CB;
loc_46967F:
	edx = to32i(dword_513510); //mov
	goto loc_4694DE;
loc_46968A:
	eax = ebx; //mov
	to32i(edi+0x368) = ebx; //mov
	neg(eax);
	to32i(edi+0x368) = eax; //mov
	goto loc_469503;
loc_46969F:
	eax = edx; //mov
	neg(eax);
	goto loc_469521;
loc_4696A8:
	test(ah, ah);
	if (jz())
		goto loc_469548;
	goto loc_46957F;
loc_4696B5:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ebp = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	cmp(eax, ebp);
	if (jg())
		goto loc_4695B4;
	goto loc_4695B6;
loc_4696E0:
	edx = ecx; //mov
	eax = to32i(esi+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x24) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_469700()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = edx; //mov
	cmp(to32i(edx+0x28), (int32_t)0);
	if (jnz())
		goto loc_4697B5;
	edx = to32i(dword_513510); //mov
loc_46971A:
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = to32i(esi+0x10); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4697C0;
	ebx = ecx; //mov
loc_469734:
	edi = to32i(esi+0x18); //mov
	test(edi, edi);
	if (jle())
		goto loc_4697C9;
	edx = edi; //mov
loc_469741:
	ecx = to32i(esi+4); //mov
	cmp(ebx, edx);
	if (jle())
		goto loc_4697D2;
	sar(edx, (int32_t)2);
	ebp = (int32_t)(intptr_t)(ebx+edx); //lea
loc_469752:
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edx = ecx; //mov
	sub(edx, eax);
	edi = ebp; //mov
	to32i(esp) = edx; //mov
	cmp(ebp, ecx);
	if (jle())
		goto loc_4697DE;
	sub(ebp, ecx);
	to32i(esi+0x2C) = ebp; //mov
loc_469773:
	test(edi, edi);
	if (jle())
		goto loc_4697E7;
	eax = edi; //mov
loc_469779:
	cmp(eax, (int32_t)0x100);
	if (jg())
		goto loc_4697ED;
loc_469780:
	edx = to32i(esi+0x10); //mov
	imul32(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0x18); //mov
	imul32(edx, ebx);
	to32i(esi+0x1C) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esi+0x24) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4697B5:
	edx = to32i(dword_513524); //mov
	goto loc_46971A;
loc_4697C0:
	ebx = ecx; //mov
	neg(ebx);
	goto loc_469734;
loc_4697C9:
	edx = edi; //mov
	neg(edx);
	goto loc_469741;
loc_4697D2:
	ebp = ebx; //mov
	sar(ebp, (int32_t)2);
	add(ebp, edx);
	goto loc_469752;
loc_4697DE:
	to32i(esi+0x2C) = 0; //mov
	goto loc_469773;
loc_4697E7:
	eax = edi; //mov
	neg(eax);
	goto loc_469779;
loc_4697ED:
	eax = to32i(esp); //mov
	ebx = edi; //mov
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
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ebx = eax; //mov
	goto loc_469780;
}
Fn(void) Game::_sub_469820()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	esi = to32i(eax+0x2EC); //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x2F0); //mov
	edi = to32i(esi+0xF0); //mov
	to32i(esp) = edx; //mov
	cmp(eax, edi);
	if (jle())
		goto loc_46986E;
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebp = 1; //mov
	add(eax, edi);
	edi = to32i(ecx+0x2F0); //mov
	to32i(esp) = ebp; //mov
	cmp(eax, edi);
	if (jge())
		goto loc_46986E;
	to8i(ecx+0x2DC) = 1; //mov
loc_46986E:
	edx = to32i(ecx+0x21C); //mov
	eax = to32i(edx+0x1C); //mov
	add(eax, to32i(edx+0x20));
	edx = (int32_t)(intptr_t)(eax-0x20000); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edx = (int32_t)(intptr_t)(eax+0x10000); //lea
	eax = to32i(ecx+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = eax; //mov
	imul32(edx, eax);
	imul32(edx, eax);
	eax = to32i(esi+0x1C8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	ebp = eax; //mov
	test(to8i(byte_512218), (int8_t)4);
	if (jz())
		goto loc_4698EB;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_4698EB;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebp = eax; //mov
loc_4698EB:
	edx = to32i(dword_4D8508); //mov
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	dl = to8i(ecx+0x2DA); //mov
	edi = eax; //mov
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_469965;
loc_46990E:
	esi = to32i(ecx+0x2F0); //mov
	cmp(edi, esi);
	if (jle())
		goto loc_469B5B;
	cmp(to8i(ecx+0x2DB), (int8_t)0);
	if (jnz())
		goto loc_469B5B;
	edx = (int32_t)(intptr_t)(esi+0x1F4); //lea
	to32i(ecx+0x2F0) = edx; //mov
	cmp(edi, edx);
	if (jge())
		goto loc_469B54;
loc_46993D:
	to32i(ecx+0x2F0) = edi; //mov
loc_469943:
	to32i(ecx+0x2F4) = 0; //mov
	to32i(ecx+0x2F8) = 0; //mov
loc_469957:
	eax = ebx; //mov
	sub(eax, ebp);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_469965:
	cmp(to8i(ecx+0x2DB), (int8_t)0);
	if (ja())
		goto loc_46990E;
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jnz())
		goto loc_46990E;
	eax = to32i(ecx+0x1E8); //mov
	shl(eax, (int32_t)6);
	cmp(to32i(dword_512278+eax), (int32_t)1);
	if (jnz())
		goto loc_469991;
	eax = ecx; //mov
	esp -= 4; _sub_46AB20(); esp += 4; //call
loc_469991:
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	edx = to32i(esi+eax*4+0xC); //mov
	eax = to32i(ecx+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = to32i(esp); //mov
	to32i(esp+4) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_469BB1;
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	ebx = to32i(esi+eax*4+0x1A8); //mov
	eax = to32i(esi+0xF0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = ebx; //mov
	eax = to32i(esi+eax*4+0x4C); //mov
loc_4699F1:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	test(to8i(byte_512218), (int8_t)4);
	if (jz())
		goto loc_469BE3;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_469BE3;
loc_469A19:
	eax = to32i(esp+4); //mov
	edx = edi; //mov
	sub(edx, eax);
	test(edx, edx);
	if (jle())
		goto loc_469C18;
	eax = edx; //mov
loc_469A2B:
	cmp(eax, (int32_t)0x7D);
	if (jge())
		goto loc_469A41;
	eax = to32i(esi+0xF0); //mov
	sub(eax, (int32_t)0x12C);
	cmp(edi, eax);
	if (jge())
		goto loc_469A41;
	xor_(edx, edx);
loc_469A41:
	eax = to32i(ecx+0x2F0); //mov
	to32i(ecx+0x2F4) = 0; //mov
	sub(eax, to32i(esp+4));
	to32i(ecx+0x2F8) = 0; //mov
	to32i(esp+8) = eax; //mov
	cmp(eax, (int32_t)0x4E2);
	if (jle())
		goto loc_469C21;
	cmp(to8i(ecx+0x2DB), (int8_t)0);
	if (jnz())
		goto loc_469C21;
	cmp(to8i(ecx+0x2DA), (int8_t)4);
	if (ja())
		goto loc_469C21;
loc_469A88:
	test(to8i(byte_512218), (int8_t)4);
	if (jz())
		goto loc_469AA6;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_469AA6;
	to32i(ecx+0x2F8) = 1; //mov
loc_469AA6:
	edx = to32i(dword_4D8508); //mov
	eax = ebx; //mov
	add(edx, (int32_t)0x10000);
	to32i(ecx+0x2F4) = 1; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	dl = to8i(ecx+0x2DA); //mov
	ebx = eax; //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_469C80;
	eax = 5; //mov
loc_469ADE:
	esi = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(ecx+0x2F0); //lea
	cmp(eax, esi);
	if (jge())
		goto loc_469C99;
loc_469AF0:
	sub(to32i(edx), eax);
	eax = to32i(ecx+0x2F0); //mov
	cmp(edi, eax);
	if (jge())
		goto loc_469CA0;
loc_469B00:
	to32i(ecx+0x2F0) = edi; //mov
loc_469B06:
	cmp(to32i(ecx+0x2F0), (int32_t)0);
	if (jge())
		goto loc_469957;
	edx = to32i(ecx+0x2B8); //mov
	shl(edx, (int32_t)5);
	neg(edx);
	test(ebx, ebx);
	if (jle())
		goto loc_469B32;
	test(edx, edx);
	if (jle())
		goto loc_469B32;
	eax = ebx; //mov
	sub(eax, edx);
	test(eax, eax);
	if (jg())
		goto loc_469957;
loc_469B32:
	test(ebx, ebx);
	if (jl())
		goto loc_469E19;
loc_469B3A:
	ebx = edx; //mov
	to32i(ecx+0x2F0) = 0; //mov
	eax = ebx; //mov
	sub(eax, ebp);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_469B54:
	edi = edx; //mov
	goto loc_46993D;
loc_469B5B:
	cmp(to8i(ecx+0x2DB), (int8_t)0);
	if (jbe())
		goto loc_469B88;
	edi = to32i(ecx+0x2F0); //mov
	sub(edi, (int32_t)0x32);
	to32i(ecx+0x2F0) = edi; //mov
	test(edi, edi);
	if (jle())
		goto loc_469B84;
	eax = edi; //mov
loc_469B79:
	to32i(ecx+0x2F0) = eax; //mov
	goto loc_469943;
loc_469B84:
	xor_(eax, eax);
	goto loc_469B79;
loc_469B88:
	eax = to32i(ecx+0x2F0); //mov
	cmp(edi, eax);
	if (jg())
		goto loc_469943;
	edx = (int32_t)(intptr_t)(eax-0xC8); //lea
	to32i(ecx+0x2F0) = edx; //mov
	cmp(edi, edx);
	if (jge())
		goto loc_46993D;
	edi = edx; //mov
	goto loc_46993D;
loc_469BB1:
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	ebx = to32i(esi+eax*4+0x1A8); //mov
	eax = to32i(ecx+0x2F0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_46B980(); esp += 4; //call
	edx = ebx; //mov
	goto loc_4699F1;
loc_469BE3:
	cmp(to8i(ecx+0x2DA), (int8_t)2);
	if (jnz())
		goto loc_469C02;
	cmp(ebx, (int32_t)0xA0000);
	if (jle())
		goto loc_469A19;
	ebx = 0xA0000; //mov
	goto loc_469A19;
loc_469C02:
	cmp(ebx, (int32_t)0x80000);
	if (jle())
		goto loc_469A19;
	ebx = 0x80000; //mov
	goto loc_469A19;
loc_469C18:
	eax = edx; //mov
	neg(eax);
	goto loc_469A2B;
loc_469C21:
	cmp(to8i(ecx+0x2DA), (int8_t)1);
	if (jbe())
		goto loc_469C43;
	cmp(to32i(ecx+0x304), (int32_t)0xFFFFE667);
	if (jge())
		goto loc_469C43;
	cmp(to8i(ecx+0x2D7), (int8_t)0x40);
	if (ja())
		goto loc_469A88;
loc_469C43:
	cmp(to8i(ecx+0x2DA), (int8_t)0);
	if (jnz())
		goto loc_469C65;
	cmp(to32i(ecx+0x304), (int32_t)0x1999);
	if (jle())
		goto loc_469C65;
	cmp(to8i(ecx+0x2D7), (int8_t)0x40);
	if (ja())
		goto loc_469A88;
loc_469C65:
	test(edx, edx);
	if (jl())
		goto loc_469CA7;
	if (jnz())
		goto loc_469D5A;
	eax = to32i(esp+4); //mov
	ebx = ebp; //mov
	to32i(ecx+0x2F0) = eax; //mov
	goto loc_469B06;
loc_469C80:
	cmp(dl, (int8_t)3);
	if (jnz())
		goto loc_469C8F;
	eax = 0x19; //mov
	goto loc_469ADE;
loc_469C8F:
	eax = 0x4B; //mov
	goto loc_469ADE;
loc_469C99:
	eax = esi; //mov
	goto loc_469AF0;
loc_469CA0:
	edi = eax; //mov
	goto loc_469B00;
loc_469CA7:
	eax = ebx; //mov
	edx = to32i(esi+0x144); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(dword_513520); //mov
	neg(ebx);
	test(eax, eax);
	if (jle())
		goto loc_469CD5;
	dl = to8i(ecx+0x2DA); //mov
	cmp(dl, (int8_t)1);
	if (jbe())
		goto loc_469CD5;
	test(ebx, ebx);
	if (jl())
		goto loc_469D33;
loc_469CD5:
	cmp(to32i(dword_513520), (int32_t)0);
	if (jl())
		goto loc_469D47;
loc_469CDE:
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	eax = to32i(esi+eax*4+0x188); //mov
	edx = 0x28000000; //mov
	shl(eax, (int32_t)3);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+8); //mov
	neg(esi);
	edx = (int32_t)(intptr_t)(ecx+0x2F0); //lea
	cmp(esi, eax);
	if (jle())
		goto loc_469D56;
loc_469D1C:
	add(to32i(edx), eax);
	eax = to32i(ecx+0x2F0); //mov
	cmp(edi, eax);
	if (jge())
		goto loc_469B00;
	edi = eax; //mov
	goto loc_469B00;
loc_469D33:
	cmp(dl, (int8_t)3);
	if (jnb())
		goto loc_469CD5;
loc_469D38:
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	goto loc_469CDE;
loc_469D47:
	cmp(to8i(ecx+0x2DA), (int8_t)0);
	if (jnz())
		goto loc_469CDE;
	test(ebx, ebx);
	if (jg())
		goto loc_469D38;
	goto loc_469CDE;
loc_469D56:
	eax = esi; //mov
	goto loc_469D1C;
loc_469D5A:
	edx = to32i(esp+8); //mov
	cmp(edx, (int32_t)0xC8);
	if (jle())
		goto loc_469DD4;
	sub(to32i(ecx+0x2F0), (int32_t)0xC8);
loc_469D70:
	esi = to32i(ecx+0x2F0); //mov
	cmp(edi, esi);
	if (jge())
		goto loc_469DF7;
loc_469D7E:
	edx = to32i(dword_4D8508); //mov
	eax = ebx; //mov
	to32i(ecx+0x2F0) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x8000; //mov
	edi = to32i(ecx+0x310); //mov
	ebx = eax; //mov
	test(edi, edi);
	if (jle())
		goto loc_469DFB;
	eax = edi; //mov
loc_469DA9:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(eax+0x10000); //lea
	cmp(edx, (int32_t)0x28000);
	if (jge())
		goto loc_469E01;
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	goto loc_469B06;
loc_469DD4:
	cmp(edx, (int32_t)0xFFFFFED4);
	if (jge())
		goto loc_469DE8;
	add(to32i(ecx+0x2F0), (int32_t)0xC8);
	goto loc_469D70;
loc_469DE8:
	eax = to32i(esp+4); //mov
	to32i(ecx+0x2F0) = eax; //mov
	goto loc_469D70;
loc_469DF7:
	edi = esi; //mov
	goto loc_469D7E;
loc_469DFB:
	eax = edi; //mov
	neg(eax);
	goto loc_469DA9;
loc_469E01:
	edx = 0x28000; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	goto loc_469B06;
loc_469E19:
	test(edx, edx);
	if (jge())
		goto loc_469B3A;
	eax = ebx; //mov
	sub(eax, edx);
	test(eax, eax);
	if (jl())
		goto loc_469957;
	goto loc_469B3A;
}
Fn(void) Game::_sub_469E40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	edx = to32i(eax+0x14); //mov
	eax = (int32_t)(intptr_t)(edx-1); //lea
	test(eax, eax);
	if (jl())
		goto loc_469FF4;
	ebp = eax; //mov
loc_469E5B:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ebx = to32i(edx+eax*4+0xC); //mov
	esi = to32i(edx+eax*4+0xD); //mov
	eax = to32i(edx+eax*4+0xE); //mov
	edi = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*8+0); //lea
	add(eax, ebp);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0xD); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp) = edx; //mov
	edx = to32i(eax+0xE); //mov
	sar(ebx, (int32_t)0x18);
	sar(edx, (int32_t)0x18);
	sar(esi, (int32_t)0x18);
	shl(edx, (int32_t)9);
	shl(ebx, (int32_t)9);
	to32i(esp+4) = edx; //mov
	edx = to32i(eax+9); //mov
	shl(esi, (int32_t)9);
	sar(edx, (int32_t)0x18);
	ebp = to32i(eax+0xC); //mov
	shl(edx, (int32_t)9);
	sar(ebp, (int32_t)0x18);
	to32i(esp+8) = edx; //mov
	edx = to32i(eax+0xA); //mov
	shl(ebp, (int32_t)9);
	sar(edx, (int32_t)0x18);
	eax = to32i(eax+0xB); //mov
	sar(eax, (int32_t)0x18);
	shl(edx, (int32_t)9);
	shl(eax, (int32_t)9);
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = eax; //mov
	edx = ebx; //mov
	eax = ebp; //mov
	sar(edi, (int32_t)0x18);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = esi; //mov
	eax = to32i(esp); //mov
	shl(edi, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(ebp, eax);
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebx; //mov
	add(ebp, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = esi; //mov
	eax = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(ebx, eax);
	eax = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebp; //mov
	add(eax, ebx);
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(eax+eax); //lea
	eax = to32i(ecx+0x2B8); //mov
	edx = 0xA3D; //mov
	test(eax, eax);
	if (jle())
		goto loc_46A001;
loc_469F67:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, (int32_t)0x20000);
	if (jle())
		goto loc_46A008;
	ebx = 0x20000; //mov
loc_469F81:
	eax = esi; //mov
	edx = 0x28F; //mov
	shl(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512204); //mov
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	esi = 0x10000; //mov
	add(edx, eax);
	eax = to32i(ecx+0x200); //mov
	shl(edx, (int32_t)3);
	to32i(dword_513524) = esi; //mov
	eax = to32i(dword_4D8484+edx+eax*4); //mov
	to32i(dword_513510) = esi; //mov
	add(eax, ebx);
	ebp = to32i(ecx+0x2B8); //mov
	to32i(dword_513514) = eax; //mov
	cmp(ebp, (int32_t)0x50000);
	if (jg())
		goto loc_46A030;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_469FF4:
	ebp = to32i(dword_5118A0); //mov
	add(ebp, eax);
	goto loc_469E5B;
loc_46A001:
	neg(eax);
	goto loc_469F67;
loc_46A008:
	ebx = to32i(ecx+0x2B8); //mov
	edx = 0xA3D; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46A02A;
	eax = ebx; //mov
loc_46A019:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	goto loc_469F81;
loc_46A02A:
	eax = ebx; //mov
	neg(eax);
	goto loc_46A019;
loc_46A030:
	edx = to32i(ecx+0x21C); //mov
	eax = to32i(ecx+0x2EC); //mov
	edx = to32i(edx+0x1C); //mov
	eax = to32i(eax+0x13C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0x2B8); //mov
	edx = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	edx = to32i(ecx+0x21C); //mov
	to32i(dword_513524) = eax; //mov
	eax = to32i(ecx+0x2EC); //mov
	edx = to32i(edx+0x20); //mov
	eax = to32i(eax+0x13C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	eax = to32i(ecx+0x21C); //mov
	edx = to32i(eax); //mov
	test(edx, edx);
	if (jnz())
		goto loc_46A0F3;
loc_46A095:
	cmp(to32i(ecx+0x2B8), (int32_t)0x240000);
	if (jle())
		goto loc_46A0F8;
	cmp(to8i(ecx+0x2D8), (int8_t)0);
	if (jbe())
		goto loc_46A0F8;
	edx = to32i(ecx+0x2EC); //mov
	eax = to32i(ecx+0x21C); //mov
	edx = to32i(edx+0x13C); //mov
	eax = to32i(eax+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, eax);
loc_46A0CB:
	ecx = to32i(ecx+0x2B8); //mov
	edx = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, (int32_t)0x10000);
	to32i(dword_513510) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46A0F3:
	cmp(edx, (int32_t)0xE);
	if (jz())
		goto loc_46A095;
loc_46A0F8:
	edx = to32i(ecx+0x2EC); //mov
	eax = to32i(ecx+0x21C); //mov
	edx = to32i(edx+0x13C); //mov
	eax = to32i(eax+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	goto loc_46A0CB;
}
Fn(void) Game::_sub_46A130()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_46AEF0(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_46A15E;
	test(to8i(edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_46A158;
	cmp(to32i(dword_512204), (int32_t)1);
	if (jz())
		goto loc_46A161;
	eax = edx; //mov
	esp -= 4; _sub_46A3B0(); esp += 4; //call
loc_46A158:
	to32i(edx+0x284) = ecx; //mov
loc_46A15E:
	pop32(edx);
	pop32(ecx);
	return;
loc_46A161:
	eax = edx; //mov
	esp -= 4; _sub_46A2E0(); esp += 4; //call
	to32i(edx+0x284) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_46A180()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(eax+0xA8); //mov
	eax = 0xF0A3; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = eax; //mov
	eax = 0xF0A3; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xB0); //mov
	to32i(ecx+0xAC) = eax; //mov
	eax = 0xF0A3; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x100); //mov
	to32i(ecx+0xB0) = eax; //mov
	cmp(edx, (int32_t)0x3333);
	if (jl())
		goto loc_46A1E6;
	pop32(edx);
	pop32(ecx);
	return;
loc_46A1E6:
	edx = 0xFAE1; //mov
	eax = to32i(ecx+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xEC) = eax; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_46A210()
{
	push32(edx);
	edx = to32i(eax+0x1E8); //mov
	shl(edx, (int32_t)6);
	to8i(eax+0x2DA) = 2; //mov
	to8i(eax+0x2D6) = 2; //mov
	to32i(eax+0x290) = 0; //mov
	to32i(eax+0x294) = 0; //mov
	to32i(eax+0x298) = 0; //mov
	to32i(eax+0x29C) = 0; //mov
	to32i(eax+0x2A0) = 0; //mov
	to32i(eax+0x2B0) = 0; //mov
	to32i(eax+0x2B4) = 0; //mov
	to32i(eax+0x2B8) = 0; //mov
	to32i(eax+0x2BC) = 0; //mov
	to32i(eax+0x2C0) = 0; //mov
	to32i(eax+0x2C4) = 0; //mov
	to32i(eax+0x2F4) = 0; //mov
	to32i(eax+0x310) = 0; //mov
	to32i(eax+0x324) = 0; //mov
	to32i(eax+0x328) = 0; //mov
	to32i(eax+0x284) = 0; //mov
	to32i(eax+0x28C) = 0; //mov
	pop32(edx);
}
Fn(void) Game::_sub_46A2E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(eax+0x1A0); //mov
	eax = to32i(eax+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	ah = to8i(ecx+0x2DA); //mov
	to32i(ecx+0x2B8) = ebx; //mov
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_46A36A;
loc_46A33E:
	to32i(ecx+0x310) = 0; //mov
	to32i(ecx+0x324) = 0; //mov
	to32i(ecx+0x328) = 0; //mov
	to32i(ecx+0x2F4) = 0; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46A36A:
	xor_(eax, eax);
	ebx = to32i(ecx+0x2EC); //mov
	al = to8i(ecx+0x2DA); //mov
	edx = to32i(ebx+eax*4+0x168); //mov
	eax = to32i(ecx+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(ecx+0x2F0) = eax; //mov
	goto loc_46A33E;
}
Fn(void) Game::_sub_46A3B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	esi = eax; //mov
	edx = to32i(eax+0x188); //mov
	eax = to32i(eax+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x18C); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x190); //mov
	add(ebx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A0); //mov
	add(ebx, eax);
	eax = to32i(esi+0xA8); //mov
	to32i(esi+0x2B0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(esi+0x1A4); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esi+0x2B8) = ebx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46A4AE;
	eax = ebx; //mov
loc_46A459:
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_46A4B4;
	cmp(to8i(esi+0x2DA), (int8_t)2);
	if (jnz())
		goto loc_46A4B4;
loc_46A469:
	to32i(esi+0x310) = 0; //mov
	to32i(esi+0x324) = 0; //mov
	to32i(esi+0x328) = 0; //mov
	ecx = to32i(esi+0x2B8); //mov
	to32i(esi+0x2F4) = 0; //mov
	cmp(ecx, (int32_t)0x1999);
	if (jle())
		goto loc_46A4A8;
	cmp(to32i(dword_512204), (int32_t)1);
	if (jz())
		goto loc_46A505;
loc_46A4A8:
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46A4AE:
	eax = ebx; //mov
	neg(eax);
	goto loc_46A459;
loc_46A4B4:
	dl = to8i(esi+0x2DA); //mov
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_46A469;
	cmp(dl, dl);
	if (jz())
		goto loc_46A469;
	xor_(eax, eax);
	ebx = to32i(esi+0x2EC); //mov
	al = dl; //mov
	edx = to32i(ebx+eax*4+0x168); //mov
	eax = to32i(esi+0x2B8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esi+0x2F0) = eax; //mov
	goto loc_46A469;
loc_46A505:
	ebx = ecx; //mov
	eax = to32i(esi+0x2B0); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_46A5DA;
	ebx = to32i(esi+0x2B8); //mov
	eax = to32i(esi+0x2B0); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
loc_46A54B:
	cmp(eax, (int32_t)0x1999);
	if (jle())
		goto loc_46A4A8;
	cmp(to32i(esi+0x2B0), (int32_t)0);
	if (jl())
		goto loc_46A602;
	to32i(esi+0x2F4) = 0xFFFFFFFD; //mov
loc_46A56D:
	edx = to32i(esi+0x2B0); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ebp = to32i(esi+0x324); //mov
	to32i(esi+0x310) = eax; //mov
	cmp(ebp, (int32_t)0x140000);
	if (jge())
		goto loc_46A5AC;
	eax = (int32_t)(intptr_t)(ebp+0x20000); //lea
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_46A5A6;
	eax = 0x280000; //mov
loc_46A5A6:
	to32i(esi+0x324) = eax; //mov
loc_46A5AC:
	eax = to32i(esi+0x328); //mov
	cmp(eax, (int32_t)0x140000);
	if (jge())
		goto loc_46A4A8;
	add(eax, (int32_t)0x20000);
	cmp(eax, (int32_t)0x280000);
	if (jle())
		goto loc_46A5CE;
	eax = 0x280000; //mov
loc_46A5CE:
	to32i(esi+0x328) = eax; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46A5DA:
	ebx = to32i(esi+0x2B8); //mov
	eax = to32i(esi+0x2B0); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	neg(eax);
	goto loc_46A54B;
loc_46A602:
	to32i(esi+0x2F4) = 3; //mov
	goto loc_46A56D;
}
Fn(void) Game::_sub_46A620()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_46A71D;
	cmp(to32i(eax+0x1E8), (int32_t)0);
	if (jz())
		goto loc_46A711;
	to32i(esp) = 0x10000; //mov
loc_46A64B:
	xor_(eax, eax);
	to32i(esp+4) = eax; //mov
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_46A727;
	to8i(esi+0x2D7) = 0; //mov
	to8i(esi+0x2D8) = 0xFF; //mov
loc_46A66C:
	to32i(esi+0x2E4) = eax; //mov
loc_46A672:
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jnz())
		goto loc_46A682;
	to8i(esi+0x2D8) = 0xFF; //mov
loc_46A682:
	cmp(to32i(esi+0x284), (int32_t)2);
	if (jnz())
		goto loc_46A692;
	to8i(esi+0x2D7) = 0; //mov
loc_46A692:
	xor_(eax, eax);
	al = to8i(esi+0x2D7); //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	shl(edx, (int32_t)0x10);
	ecx = 0xF8; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_46AAFD;
loc_46A6B7:
	xor_(edx, edx);
	dl = to8i(esi+0x2D8); //mov
	inc(edx);
	ecx = 0xF8; //mov
	shl(edx, (int32_t)0x10);
	to32i(dword_4D8508) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_46AB07;
loc_46A6DF:
	to32i(dword_4D8504) = eax; //mov
	eax = to32i(esi+0x2E4); //mov
	inc(eax);
	test(eax, eax);
	if (jle())
		goto loc_46AB11;
loc_46A6F3:
	shl(eax, (int32_t)0x10);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	to32i(dword_4D850C) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46A711:
	to32i(esp) = 0xFFFF0000; //mov
	goto loc_46A64B;
loc_46A71D:
	xor_(ecx, ecx);
	to32i(esp) = ecx; //mov
	goto loc_46A64B;
loc_46A727:
	eax = to32i(esi+0x21C); //mov
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jz())
		goto loc_46A90B;
	dl = 0x10; //mov
loc_46A739:
	xor_(eax, eax);
	xor_(ecx, ecx);
	al = to8i(esi+0x2D7); //mov
	cl = to8i(esi+0x2D4); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	ecx = (int32_t)(intptr_t)(esi+0x2D7); //lea
	test(eax, eax);
	if (jl())
		goto loc_46A912;
	and_(edx, (int32_t)0xFF);
	cmp(edx, eax);
	if (jle())
		goto loc_46A767;
	edx = eax; //mov
loc_46A767:
	xor_(eax, eax);
	al = to8i(ecx); //mov
	add(eax, edx);
loc_46A76D:
	to8i(ecx) = al; //mov
	eax = to32i(esi+0x21C); //mov
	cmp(to32i(eax+0x18), (int32_t)0);
	if (jz())
		goto loc_46A96F;
	xor_(edx, edx);
	xor_(ecx, ecx);
	dl = to8i(esi+0x2D8); //mov
	cl = to8i(esi+0x2D5); //mov
	eax = edx; //mov
	sub(ecx, edx);
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = (int32_t)(intptr_t)(esi+0x2D8); //lea
	test(ecx, ecx);
	if (jl())
		goto loc_46A93D;
	edx = to32i(esi+0x2EC); //mov
	al = to8i(edx+eax+0x114); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, ecx);
	if (jle())
		goto loc_46A936;
loc_46A7C6:
	xor_(eax, eax);
	al = to8i(ebx); //mov
	add(eax, ecx);
loc_46A7CC:
	to8i(ebx) = al; //mov
loc_46A7CE:
	ah = to8i(esi+0x2DB); //mov
	test(ah, ah);
	if (jbe())
		goto loc_46A7E2;
	dl = ah; //mov
	dec(dl);
	to8i(esi+0x2DB) = dl; //mov
loc_46A7E2:
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_46A8A1;
	eax = to32i(esi+0x1E8); //mov
	shl(eax, (int32_t)6);
	cmp(to32i(dword_512278+eax), (int32_t)1);
	if (jnz())
		goto loc_46A814;
	cmp(to32i(dword_540F48), (int32_t)0x23C);
	if (jge())
		goto loc_46A814;
	to8i(esi+0x2D6) = 2; //mov
loc_46A814:
	dh = to8i(esi+0x2DA); //mov
	cmp(dh, to8i(esi+0x2D6));
	if (jz())
		goto loc_46A8A1;
	eax = to32i(esi+0x1E8); //mov
	shl(eax, (int32_t)6);
	cmp(to32i(dword_512278+eax), (int32_t)1);
	if (jnz())
		goto loc_46AA21;
	bl = to8i(esi+0x2D6); //mov
	cmp(bl, (int8_t)2);
	if (jnb())
		goto loc_46A980;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_46A862;
	ecx = to32i(dword_51220C); //mov
	cmp(ecx, to32i(esi+0x1E8));
	if (jnz())
		goto loc_46A87A;
loc_46A862:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
loc_46A87A:
	al = to8i(esi+0x2DA); //mov
	to8i(esi+0x2D9) = al; //mov
	al = to8i(esi+0x2D6); //mov
loc_46A88C:
	to8i(esi+0x2DA) = al; //mov
	eax = to32i(esi+0x2EC); //mov
	al = to8i(eax+8); //mov
	to8i(esi+0x2DB) = al; //mov
loc_46A8A1:
	eax = to32i(esi+0x21C); //mov
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jz())
		goto loc_46AAF2;
	cmp(to32i(esi+0x2E0), (int32_t)0);
	if (jl())
		goto loc_46A8C7;
	cmp(to32i(esi+0x2E4), (int32_t)0);
	if (jl())
		goto loc_46AA90;
loc_46A8C7:
	cmp(to32i(esi+0x2E0), (int32_t)0);
	if (jle())
		goto loc_46AA83;
loc_46A8D4:
	edx = to32i(esi+0x2EC); //mov
	eax = to32i(esi+0x2E0); //mov
	ecx = to32i(esi+0x2E4); //mov
	edx = to32i(edx+0x130); //mov
	sub(eax, ecx);
	ecx = (int32_t)(intptr_t)(esi+0x2E4); //lea
	test(eax, eax);
	if (jl())
		goto loc_46AADC;
	cmp(edx, eax);
	if (jle())
		goto loc_46AAD3;
	add(to32i(ecx), eax);
	goto loc_46A672;
loc_46A90B:
	dl = 0x18; //mov
	goto loc_46A739;
loc_46A912:
	xor_(ebx, ebx);
	bl = dl; //mov
	edx = eax; //mov
	neg(edx);
	cmp(ebx, edx);
	if (jle())
		goto loc_46A929;
	xor_(eax, eax);
	al = to8i(ecx); //mov
	sub(eax, edx);
	goto loc_46A76D;
loc_46A929:
	edx = ebx; //mov
	xor_(eax, eax);
	al = to8i(ecx); //mov
	sub(eax, edx);
	goto loc_46A76D;
loc_46A936:
	ecx = eax; //mov
	goto loc_46A7C6;
loc_46A93D:
	edx = to32i(esi+0x2EC); //mov
	al = to8i(edx+eax+0x11C); //mov
	edx = ecx; //mov
	and_(eax, (int32_t)0xFF);
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_46A962;
	xor_(eax, eax);
	al = to8i(ebx); //mov
	sub(eax, edx);
	goto loc_46A7CC;
loc_46A962:
	edx = eax; //mov
	xor_(eax, eax);
	al = to8i(ebx); //mov
	sub(eax, edx);
	goto loc_46A7CC;
loc_46A96F:
	al = to8i(esi+0x2D5); //mov
	to8i(esi+0x2D8) = al; //mov
	goto loc_46A7CE;
loc_46A980:
	if (jnz())
		goto loc_46A8A1;
	cmp(bl, to8i(esi+0x2DA));
	if (jbe())
		goto loc_46A8A1;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_46A9F8;
	ebp = to32i(dword_51220C); //mov
	cmp(ebp, to32i(esi+0x1E8));
	if (jz())
		goto loc_46A9F8;
loc_46A9A9:
	al = to8i(esi+0x2DA); //mov
	to8i(esi+0x2D9) = al; //mov
	eax = 2; //mov
	ebx = 8; //mov
	to32i(esp+8) = eax; //mov
	ecx = eax; //mov
loc_46A9C5:
	eax = to32i(esi+0x2EC); //mov
	cmp(ecx, to32i(eax+4));
	if (jge())
		goto loc_46AA18;
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(ebx+eax+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, to32i(esi+0x2B8));
	if (jl())
		goto loc_46AA12;
loc_46A9F2:
	inc(ecx);
	add(ebx, (int32_t)4);
	goto loc_46A9C5;
loc_46A9F8:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
	goto loc_46A9A9;
loc_46AA12:
	to32i(esp+8) = ecx; //mov
	goto loc_46A9F2;
loc_46AA18:
	al = to8i(esp+8); //mov
	goto loc_46A88C;
loc_46AA21:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_46AA38;
	ebx = to32i(dword_51220C); //mov
	cmp(ebx, to32i(esi+0x1E8));
	if (jnz())
		goto loc_46AA50;
loc_46AA38:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
loc_46AA50:
	al = to8i(esi+0x2DA); //mov
	to8i(esi+0x2D9) = al; //mov
	al = to8i(esi+0x2D6); //mov
	to8i(esi+0x2DA) = al; //mov
	eax = to32i(esi+0x2EC); //mov
	al = to8i(eax+8); //mov
	to8i(esi+0x2DB) = al; //mov
	eax = esi; //mov
	esp -= 4; _sub_478B10(); esp += 4; //call
	goto loc_46A8A1;
loc_46AA83:
	cmp(to32i(esi+0x2E4), (int32_t)0);
	if (jle())
		goto loc_46A8D4;
loc_46AA90:
	eax = to32i(esi+0x2E4); //mov
	edx = to32i(esi+0x2EC); //mov
	ecx = (int32_t)(intptr_t)(esi+0x2E4); //lea
	neg(eax);
	edx = to32i(edx+0x134); //mov
	test(eax, eax);
	if (jl())
		goto loc_46AABD;
	cmp(edx, eax);
	if (jle())
		goto loc_46AAB9;
loc_46AAB2:
	add(to32i(ecx), eax);
	goto loc_46A672;
loc_46AAB9:
	eax = edx; //mov
	goto loc_46AAB2;
loc_46AABD:
	neg(eax);
	cmp(edx, eax);
	if (jle())
		goto loc_46AACA;
	sub(to32i(ecx), eax);
	goto loc_46A672;
loc_46AACA:
	eax = edx; //mov
	sub(to32i(ecx), eax);
	goto loc_46A672;
loc_46AAD3:
	eax = edx; //mov
	add(to32i(ecx), eax);
	goto loc_46A672;
loc_46AADC:
	neg(eax);
	cmp(edx, eax);
	if (jle())
		goto loc_46AAE9;
	sub(to32i(ecx), eax);
	goto loc_46A672;
loc_46AAE9:
	eax = edx; //mov
	sub(to32i(ecx), eax);
	goto loc_46A672;
loc_46AAF2:
	eax = to32i(esi+0x2E0); //mov
	goto loc_46A66C;
loc_46AAFD:
	eax = 0x10000; //mov
	goto loc_46A6B7;
loc_46AB07:
	eax = 0x10000; //mov
	goto loc_46A6DF;
loc_46AB11:
	neg(eax);
	goto loc_46A6F3;
}
Fn(void) Game::_sub_46AB20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_46AD15;
	cmp(to32i(eax+0x1E8), (int32_t)0);
	if (jz())
		goto loc_46AD09;
	to32i(esp) = 0x10000; //mov
loc_46AB4C:
	xor_(eax, eax);
	to32i(esp+4) = eax; //mov
	cmp(to8i(ecx+0x2DA), (int8_t)2);
	if (jb())
		goto loc_46ACFF;
	eax = to32i(ecx+0x2EC); //mov
	xor_(edx, edx);
	eax = to32i(eax+4); //mov
	dl = to8i(ecx+0x2DA); //mov
	dec(eax);
	cmp(edx, eax);
	if (jge())
		goto loc_46AB76;
	inc(edx);
loc_46AB76:
	to32i(esp+0x10) = edx; //mov
	dl = to8i(ecx+0x2DA); //mov
	cmp(dl, (int8_t)2);
	if (jbe())
		goto loc_46AD1F;
	xor_(ebx, ebx);
	bl = dl; //mov
	dec(ebx);
loc_46AB8E:
	dh = to8i(ecx+0x2DA); //mov
	cmp(dh, (int8_t)3);
	if (jbe())
		goto loc_46AD28;
	xor_(eax, eax);
	al = dh; //mov
	sub(eax, (int32_t)2);
loc_46ABA4:
	to32i(esp+0xC) = eax; //mov
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	esi = to32i(ecx+0x2EC); //mov
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	edx = to32i(edx+0x168); //mov
	eax = to32i(ecx+0x304); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(ecx+0x2EC); //mov
	esi = eax; //mov
	eax = to32i(esp+0x10); //mov
	edx = to32i(edx+eax*4+0x168); //mov
	eax = to32i(ecx+0x304); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ecx+0x2EC); //mov
	eax = to32i(ecx+0x304); //mov
	edx = to32i(edi+ebx*4+0x168); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(edi+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebp = to32i(ecx+0x2EC); //mov
	edi = eax; //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(ebp+eax*4+0x168); //mov
	eax = to32i(ecx+0x304); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(dword_4D8508); //mov
	ebp = eax; //mov
	cmp(edx, (int32_t)0xE666);
	if (jle())
		goto loc_46AD31;
loc_46AC8B:
	eax = to32i(ecx+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	sub(edx, (int32_t)0x1F4);
	cmp(esi, edx);
	if (jle())
		goto loc_46ADDD;
	edx = to32i(eax+4); //mov
	xor_(eax, eax);
	dec(edx);
	al = to8i(ecx+0x2DA); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_46ADDD;
	cmp(eax, to32i(esp+0x10));
	if (jz())
		goto loc_46ACFF;
	to8i(ecx+0x2D9) = al; //mov
	al = to8i(esp+0x10); //mov
	to8i(ecx+0x2DA) = al; //mov
	eax = to32i(ecx+0x2EC); //mov
	al = to8i(eax+8); //mov
	esi = to32i(dword_512208); //mov
	to8i(ecx+0x2DB) = al; //mov
	cmp(esi, (int32_t)2);
	if (jl())
		goto loc_46ADAA;
	edi = to32i(dword_51220C); //mov
	cmp(edi, to32i(ecx+0x1E8));
	if (jz())
		goto loc_46ADAA;
loc_46ACFF:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46AD09:
	to32i(esp) = 0xFFFF0000; //mov
	goto loc_46AB4C;
loc_46AD15:
	xor_(ebx, ebx);
	to32i(esp) = ebx; //mov
	goto loc_46AB4C;
loc_46AD1F:
	xor_(ebx, ebx);
	bl = dl; //mov
	goto loc_46AB8E;
loc_46AD28:
	xor_(eax, eax);
	al = dh; //mov
	goto loc_46ABA4;
loc_46AD31:
	test(esi, esi);
	if (jle())
		goto loc_46ADCC;
	to32i(esp+8) = esi; //mov
loc_46AD3D:
	edx = to32i(ecx+0x2EC); //mov
	eax = to32i(esp+8); //mov
	cmp(eax, to32i(edx+0xF0));
	if (jg())
		goto loc_46AC8B;
	eax = to32i(edx+0xF0); //mov
	sub(eax, (int32_t)0x5DC);
	cmp(edi, eax);
	if (jge())
		goto loc_46ACFF;
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	cmp(ebx, eax);
	if (jz())
		goto loc_46ACFF;
	to8i(ecx+0x2D9) = al; //mov
	eax = to32i(ecx+0x2EC); //mov
	to8i(ecx+0x2DA) = bl; //mov
	al = to8i(eax+8); //mov
	edx = to32i(dword_512208); //mov
	to8i(ecx+0x2DB) = al; //mov
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_46AEBF;
	eax = to32i(ecx+0x1E8); //mov
	cmp(eax, to32i(dword_51220C));
	if (jnz())
		goto loc_46ACFF;
loc_46ADAA:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46ADCC:
	eax = esi; //mov
	to32i(esp+8) = esi; //mov
	neg(eax);
	to32i(esp+8) = eax; //mov
	goto loc_46AD3D;
loc_46ADDD:
	eax = to32i(ecx+0x2EC); //mov
	eax = to32i(eax+0xF0); //mov
	sub(eax, (int32_t)0x5DC);
	cmp(ebp, eax);
	if (jge())
		goto loc_46AE5E;
	xor_(eax, eax);
	esi = to32i(esp+0xC); //mov
	al = to8i(ecx+0x2DA); //mov
	cmp(eax, esi);
	if (jz())
		goto loc_46AE5E;
	to8i(ecx+0x2D9) = al; //mov
	al = to8i(esp+0xC); //mov
	to8i(ecx+0x2DA) = al; //mov
	eax = to32i(ecx+0x2EC); //mov
	al = to8i(eax+8); //mov
	to8i(ecx+0x2DB) = al; //mov
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_46AE3C;
	edx = to32i(dword_51220C); //mov
	cmp(edx, to32i(ecx+0x1E8));
	if (jnz())
		goto loc_46ACFF;
loc_46AE3C:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46AE5E:
	eax = to32i(ecx+0x2EC); //mov
	eax = to32i(eax+0xF0); //mov
	sub(eax, (int32_t)0x5DC);
	cmp(edi, eax);
	if (jge())
		goto loc_46ACFF;
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	cmp(ebx, eax);
	if (jz())
		goto loc_46ACFF;
	to8i(ecx+0x2D9) = al; //mov
	eax = to32i(ecx+0x2EC); //mov
	to8i(ecx+0x2DA) = bl; //mov
	al = to8i(eax+8); //mov
	edi = to32i(dword_512208); //mov
	to8i(ecx+0x2DB) = al; //mov
	cmp(edi, (int32_t)2);
	if (jl())
		goto loc_46AEBF;
	ebp = to32i(dword_51220C); //mov
	cmp(ebp, to32i(ecx+0x1E8));
	if (jnz())
		goto loc_46ACFF;
loc_46AEBF:
	eax = esp; //mov
	push32(eax);
	edx = 7; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = 0xFFFFFFFF; //mov
	esp -= 4; _sub_444830(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46AEF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x68);
	ecx = eax; //mov
	xor_(edx, edx);
	eax = to32i(eax+0x14); //mov
	to32i(esp+0x50) = edx; //mov
	to32i(esp+0x60) = eax; //mov
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	to32i(esp+0x44) = edx; //mov
	ebp = to32i(edx+0xF); //mov
	ebx = to32i(edx+0x10); //mov
	eax = to32i(ecx+0xA8); //mov
	edi = to32i(edx+0x11); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = to32i(ecx+0x9C); //mov
	add(edx, eax);
	eax = edx; //mov
	edx = to32i(esp+0x44); //mov
	sub(eax, to32i(edx));
	to32i(esp+0x48) = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = to32i(ecx+0xA0); //mov
	add(edx, eax);
	eax = edx; //mov
	edx = to32i(esp+0x44); //mov
	sub(eax, to32i(edx+4));
	to32i(esp+0x40) = eax; //mov
	eax = to32i(ecx+0xB0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = to32i(ecx+0xA4); //mov
	sar(ebp, (int32_t)0x18);
	add(edx, eax);
	sar(ebx, (int32_t)0x18);
	eax = edx; //mov
	edx = to32i(esp+0x44); //mov
	shl(ebp, (int32_t)9);
	sub(eax, to32i(edx+8));
	edx = to32i(esp+0x48); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = ebp; //mov
	shl(ebx, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	to32i(esp+0x44) = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	sar(edi, (int32_t)0x18);
	add(edx, eax);
	shl(edi, (int32_t)9);
	to32i(esp+0x44) = edx; //mov
	eax = edi; //mov
	edx = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(edx, eax);
	eax = to32i(ecx+0xDC); //mov
	to32i(esp+0x54) = eax; //mov
	eax = to32i(ecx+0xE0); //mov
	to32i(esp+0x64) = edx; //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(ecx+0xE4); //mov
	to32i(ecx+0xC0) = edx; //mov
	to32i(esp+0x5C) = eax; //mov
	eax = to32i(ecx+0xC8); //mov
	edx = to32i(ecx+0xC4); //mov
	to32i(esp+0x4C) = eax; //mov
	to32i(esp+0x24) = edx; //mov
	edx = to32i(esp+0x4C); //mov
	eax = to32i(ecx+0xCC); //mov
	to32i(esp+0x28) = edx; //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0x54); //mov
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x44) = eax; //mov
	edx = ebx; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	xor_(esi, esi);
	add(edx, eax);
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x44) = edx; //mov
	edx = edi; //mov
	to32i(esp+0xC) = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	to32i(esp+0x10) = ebx; //mov
	add(edx, eax);
	eax = to32i(ecx+0x110); //mov
	to32i(esp+0x14) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jg())
		goto loc_46B46B;
	eax = to32i(esp+0x54); //mov
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = ebx; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(ebp, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = to32i(ecx+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
loc_46B0F5:
	edx = to32i(esp+0xC); //mov
	edi = eax; //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(ecx+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_46B4B7;
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(ecx+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_46B199:
	add(edi, eax);
	eax = to32i(esp+0x60); //mov
	ebx = (int32_t)(intptr_t)(eax*8+0); //lea
	add(ebx, eax);
	edx = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(edx, ebx);
	xor_(eax, eax);
	ax = to16i(edx+0x1A); //mov
	ebx = edi; //mov
	shl(eax, (int32_t)8);
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)(ebx+0x4000); //lea
	ebx = to32i(esp+0x64); //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_46B1F3;
	dl = to8i(edx+0x1E); //mov
	and_(edx, (int32_t)0xFF);
	sar(edx, (int32_t)4);
	test(dl, (int8_t)0xF);
	if (jz())
		goto loc_46B1F3;
	esi = 0xFFFFFFFF; //mov
	sub(eax, ebx);
	and_(edx, (int32_t)0xF);
	to32i(esp+0x50) = eax; //mov
	to32i(dword_4D8510) = edx; //mov
loc_46B1F3:
	edx = to32i(esp+0x60); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dx = to16i(eax+0x1C); //mov
	shl(edx, (int32_t)8);
	sub(edx, edi);
	ebx = to32i(esp+0x64); //mov
	sub(edx, (int32_t)0x4000);
	cmp(edx, ebx);
	if (jge())
		goto loc_46B50B;
	test(to8i(eax+0x1E), (int8_t)0xF);
	if (jz())
		goto loc_46B50B;
	ebx = to32i(esp+0x64); //mov
	esi = 1; //mov
	al = to8i(eax+0x1E); //mov
	sub(ebx, edx);
	and_(al, (int8_t)0xF);
	to32i(esp+0x50) = ebx; //mov
	and_(eax, (int32_t)0xFF);
	to32i(dword_4D8510) = eax; //mov
loc_46B250:
	edx = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_478CC0(); esp += 4; //call
	cmp(to32i(ecx+0x17C), (int32_t)0);
	if (jnz())
		goto loc_46B45F;
	eax = to32i(ecx+0x108); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0xC); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x10); //mov
	imul32(edx, ebx);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x14); //mov
	imul32(edx, ebx);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+8) = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_46B51F;
	edi = to32i(esp); //mov
	eax = to32i(ecx+0x9C); //mov
	add(eax, edi);
	to32i(ecx+0x170) = eax; //mov
	ebp = to32i(esp+4); //mov
	eax = to32i(ecx+0xA0); //mov
	add(eax, ebp);
	to32i(ecx+0x174) = eax; //mov
	edx = to32i(esp+8); //mov
	eax = to32i(ecx+0xA4); //mov
	add(eax, edx);
loc_46B2F9:
	to32i(ecx+0x178) = eax; //mov
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_46B553;
loc_46B30C:
	cmp(to32i(dword_4D8514), (int32_t)0);
	if (jz())
		goto loc_46B5F8;
	cmp(to32i(ecx+0xBC), (int32_t)0x2CA3D7);
	if (jle())
		goto loc_46B5F8;
	edx = to32i(dword_51221C); //mov
	eax = to32i(ecx+0x14); //mov
	cmp(edx, (int32_t)6);
	if (jnz())
		goto loc_46B61F;
	cmp(eax, (int32_t)0x168);
	if (jle())
		goto loc_46B5E6;
	cmp(eax, (int32_t)0x426);
	if (jge())
		goto loc_46B5E6;
loc_46B351:
	to32i(dword_4D8510) = 7; //mov
loc_46B35B:
	edx = to32i(esp+0xC); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_46B68A;
	edx = to32i(esp+0xC); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
loc_46B3E7:
	cmp(eax, (int32_t)0xA0000);
	if (jle())
		goto loc_46B560;
	to32i(ecx+0x168) = 0x40004; //mov
	to32i(ecx+0x164) = 0; //mov
	to32i(ecx+0x578) = 0x80; //mov
	to32i(ecx+0x58C) = 1; //mov
	to32i(ecx+0x160) = 0x1E0000; //mov
	eax = to32i(ecx+0x14); //mov
	esi = to32i(ecx+0xE8); //mov
	to32i(ecx+0x17C) = eax; //mov
	add(esi, (int32_t)0x18000);
	bx = to16i(ecx+0xF2); //mov
	to32i(ecx+0xE8) = esi; //mov
	inc(ebx);
	al = to8i(ecx+0x2D7); //mov
	to16i(ecx+0xF2) = bx; //mov
	cmp(al, (int8_t)0xC8);
	if (jbe())
		goto loc_46B45F;
	eax = ecx; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
loc_46B45F:
	xor_(eax, eax);
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46B46B:
	eax = to32i(esp+0x54); //mov
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = ebx; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(ebp, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = to32i(ecx+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	goto loc_46B0F5;
loc_46B4B7:
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(ecx+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	goto loc_46B199;
loc_46B50B:
	test(esi, esi);
	if (jnz())
		goto loc_46B250;
	xor_(eax, eax);
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46B51F:
	ebp = to32i(esp); //mov
	eax = to32i(ecx+0x9C); //mov
	sub(eax, ebp);
	to32i(ecx+0x170) = eax; //mov
	edx = to32i(esp+4); //mov
	eax = to32i(ecx+0xA0); //mov
	sub(eax, edx);
	to32i(ecx+0x174) = eax; //mov
	ebx = to32i(esp+8); //mov
	eax = to32i(ecx+0xA4); //mov
	sub(eax, ebx);
	goto loc_46B2F9;
loc_46B553:
	cmp(to32i(ecx+0x53C), (int32_t)0);
	if (jg())
		goto loc_46B30C;
loc_46B560:
	cmp(to32i(ecx+0x15C), (int32_t)0x9999);
	if (jle())
		goto loc_46B6D3;
loc_46B570:
	test(esi, esi);
	if (jl())
		goto loc_46B76C;
	eax = to32i(esp+0xC); //mov
	to32i(esp+0x30) = eax; //mov
	ebp = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x34) = eax; //mov
	neg(eax);
	to32i(esp+0x34) = eax; //mov
	eax = to32i(esp+0x14); //mov
	neg(ebp);
	edx = eax; //mov
	to32i(esp+0x38) = eax; //mov
	neg(edx);
	to32i(esp+0x30) = ebp; //mov
	to32i(esp+0x38) = edx; //mov
loc_46B5A6:
	ebx = (int32_t)(intptr_t)(ecx+0x9C); //lea
	edx = (int32_t)(intptr_t)(esp+0x30); //lea
	eax = ecx; //mov
	esp -= 4; _sub_456420(); esp += 4; //call
	cmp(to32i(ecx+0x160), (int32_t)0);
	if (jz())
		goto loc_46B5DA;
	eax = to32i(dword_4D8510); //mov
	to32i(ecx+0x164) = 0; //mov
	or_(eax, (int32_t)0x40000);
	to32i(ecx+0x168) = eax; //mov
loc_46B5DA:
	eax = esi; //mov
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46B5E6:
	cmp(eax, (int32_t)0x488);
	if (jle())
		goto loc_46B5F8;
	cmp(eax, (int32_t)0x649);
	if (jl())
		goto loc_46B351;
loc_46B5F8:
	cmp(to32i(dword_4D8510), (int32_t)6);
	if (jnz())
		goto loc_46B60D;
	cmp(to32i(ecx+0x15C), (int32_t)0x30000);
	if (jg())
		goto loc_46B63D;
loc_46B60D:
	cmp(to32i(dword_4D8510), (int32_t)7);
	if (jz())
		goto loc_46B35B;
	goto loc_46B560;
loc_46B61F:
	cmp(edx, (int32_t)7);
	if (jnz())
		goto loc_46B5F8;
	cmp(eax, (int32_t)0x4B0);
	if (jle())
		goto loc_46B5F8;
	cmp(eax, (int32_t)0x6B9);
	if (jge())
		goto loc_46B5F8;
	to32i(dword_4D8510) = edx; //mov
	goto loc_46B35B;
loc_46B63D:
	to32i(ecx+0x578) = 0x60; //mov
	to32i(ecx+0x58C) = 1; //mov
	ebx = to32i(ecx+0xE8); //mov
	eax = to32i(ecx+0x14); //mov
	esi = to32i(ecx+0xF0); //mov
	add(ebx, (int32_t)0x8000);
	to32i(ecx+0x17C) = eax; //mov
	add(esi, (int32_t)0x3333);
	to32i(ecx+0xE8) = ebx; //mov
	xor_(eax, eax);
	to32i(ecx+0xF0) = esi; //mov
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46B68A:
	edx = to32i(esp+0xC); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	neg(eax);
	goto loc_46B3E7;
loc_46B6D3:
	cmp(to32i(ecx+0x100), (int32_t)0xE666);
	if (jl())
		goto loc_46B570;
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jnz())
		goto loc_46B570;
	eax = to32i(esp+0x50); //mov
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(ecx+0x118); //lea
	test(eax, eax);
	if (jle())
		goto loc_46B789;
loc_46B705:
	edx = esi; //mov
	imul32(edx, eax);
	eax = ecx; //mov
	esp -= 4; _sub_46B9C0(); esp += 4; //call
	edx = to32i(esp+0x60); //mov
	ebx = (int32_t)(intptr_t)(edx*8+0); //lea
	add(ebx, edx);
	edx = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(edx, ebx);
	ebx = to32i(edx+0xC); //mov
	sar(ebx, (int32_t)0x18);
	shl(ebx, (int32_t)9);
	to32i(esp+0x18) = ebx; //mov
	ebx = to32i(edx+0xD); //mov
	edx = to32i(edx+0xE); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	sar(ebx, (int32_t)0x18);
	push32(edx);
	shl(ebx, (int32_t)9);
	edi = to32i(esp+0x1C); //mov
	push32(ebx);
	to32i(esp+0x28) = edx; //mov
	edx = eax; //mov
	push32(edi);
	eax = ecx; //mov
	to32i(esp+0x28) = ebx; //mov
	esp -= 4; _sub_46B790(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46B76C:
	eax = to32i(esp+0xC); //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(esp+0x38) = eax; //mov
	goto loc_46B5A6;
loc_46B789:
	neg(eax);
	goto loc_46B705;
}
Fn(void) Game::_sub_46B790()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	eax = edx; //mov
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_46B91E;
	cmp(eax, (int32_t)0xF0000);
	if (jl())
		goto loc_46B7BF;
	cmp(to32i(ecx+0x2B8), (int32_t)0x140000);
	if (jg())
		goto loc_46B947;
loc_46B7BF:
	push32(ebx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	add(eax, eax);
	to32i(ecx+0x160) = eax; //mov
	eax = to32i(dword_4D8510); //mov
	or_(eax, (int32_t)0x40000);
	edx = to32i(ecx+0x1A8); //mov
	to32i(ecx+0x168) = eax; //mov
	eax = to32i(esp+0x28); //mov
	to32i(ecx+0x164) = 0; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	to32i(esp+4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A8); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A4); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x24); //mov
	to32i(esp+8) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A0); //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A0); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x24); //mov
	to32i(esp+0xC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x1A4); //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1A8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_46B8DD;
	esi = to32i(esp+8); //mov
	edi = to32i(esp+0xC); //mov
	ebx = to32i(esp+4); //mov
	neg(esi);
	neg(edi);
	neg(ebx);
	to32i(esp+8) = esi; //mov
	to32i(esp+0xC) = edi; //mov
	to32i(esp+4) = ebx; //mov
loc_46B8DD:
	eax = to32i(esp+4); //mov
	ebp = to32i(ecx+0xE8); //mov
	edx = to32i(ecx+0xEC); //mov
	ebx = to32i(ecx+0xF0); //mov
	add(ebp, eax);
	eax = to32i(esp+8); //mov
	to32i(ecx+0xE8) = ebp; //mov
	add(edx, eax);
	eax = to32i(esp+0xC); //mov
	to32i(ecx+0xEC) = edx; //mov
	add(ebx, eax);
	to32i(ecx+0xF0) = ebx; //mov
	pop32(ebx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	esp += 0xC; return;
loc_46B91E:
	esi = to32i(dword_4D8510); //mov
	push32(esi);
	edi = to32i(esp+0x2C); //mov
	push32(edi);
	ebp = to32i(esp+0x2C); //mov
	push32(ebp);
	edx = to32i(esp+0x2C); //mov
	push32(edx);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43FEF0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	esp += 0xC; return;
loc_46B947:
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	add(eax, eax);
	to32i(ecx+0x160) = eax; //mov
	eax = to32i(dword_4D8510); //mov
	to32i(ecx+0x164) = 0; //mov
	or_(eax, (int32_t)0x40000);
	to32i(ecx+0x168) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_46B980()
{
	cmp(edx, (int32_t)0x28);
	if (jle())
		goto loc_46B99A;
loc_46B985:
	cmp(edx, (int32_t)0x28);
	if (jle())
		goto loc_46B98F;
	edx = 0x28; //mov
loc_46B98F:
	eax = to32i(eax+0x2EC); //mov
	eax = to32i(eax+edx*4+0x4C); //mov
	return;
loc_46B99A:
	test(edx, edx);
	if (jg())
		goto loc_46B985;
	xor_(edx, edx);
	eax = to32i(eax+0x2EC); //mov
	eax = to32i(eax+edx*4+0x4C); //mov
}
Fn(void) Game::_sub_46B9B0()
{
	to32i(dword_4D8510) = eax; //mov
}
Fn(void) Game::_sub_46B9C0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ecx = eax; //mov
	esi = edx; //mov
	to32i(esp+0x24) = edx; //mov
	xor_(edx, edx);
	eax = esi; //mov
	to32i(esp+0x28) = edx; //mov
	to32i(esp+0x2C) = edx; //mov
	edx = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(ebx+4); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+8); //mov
	add(edi, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0xC); //mov
	ebp = (int32_t)(intptr_t)(edi+eax); //lea
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(ebx+0x10); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x14); //mov
	add(edi, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x18); //mov
	add(edi, eax);
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx+0x1C); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x20); //mov
	add(esi, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x9C); //mov
	add(eax, esi);
	sub(edx, ebp);
	esi = to32i(ecx+0xA0); //mov
	to32i(ecx+0x9C) = edx; //mov
	add(esi, edi);
	edi = to32i(ecx+0xA4); //mov
	to32i(ecx+0xA0) = esi; //mov
	add(edi, eax);
	to32i(ecx+0xA4) = edi; //mov
	eax = to32i(ecx+0xA8); //mov
	edx = to32i(ebx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx+4); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+8); //mov
	add(esi, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	ebp = eax; //mov
	to32i(esp+0x24) = eax; //mov
	neg(ebp);
	to32i(esp+0x24) = ebp; //mov
	edx = to32i(ebx+0x18); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebx+0x1C); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebx+0x20); //mov
	add(esi, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	to32i(esp+0x2C) = esi; //mov
	test(ebp, ebp);
	if (jle())
		goto loc_46BD4D;
	edx = ebp; //mov
loc_46BB33:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	eax = to32i(esp+0x24); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	to32i(esp+0x24) = eax; //mov
	xor_(edx, edx);
	to32i(esp+0x24) = edx; //mov
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(edx, eax);
	edi = to32i(esp+0x2C); //mov
	shl(edx, (int32_t)2);
	test(edi, edi);
	if (jle())
		goto loc_46BD92;
	cmp(edi, (int32_t)0x50000);
	if (jg())
		goto loc_46BD56;
loc_46BB88:
	edx = esp; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = ebx; //mov
	test(eax, eax);
	if (jle())
		goto loc_46BBE6;
	to32i(ecx+0xAC) = 0; //mov
loc_46BBE6:
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xC4); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xA8); //mov
	to32i(ecx+0xB0) = ebx; //mov
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
	edx = to32i(ecx+0xA8); //mov
	to32i(ecx+0x2B8) = ebx; //mov
	test(edx, edx);
	if (jle())
		goto loc_46BDD9;
loc_46BD20:
	ebx = to32i(ecx+0xB0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46BDE0;
	eax = ebx; //mov
loc_46BD30:
	cmp(edx, eax);
	if (jle())
		goto loc_46BDE9;
	sar(eax, (int32_t)2);
	add(eax, edx);
	to32i(ecx+0xBC) = eax; //mov
	eax = esi; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46BD4D:
	edx = ebp; //mov
	neg(edx);
	goto loc_46BB33;
loc_46BD56:
	eax = to32i(dword_511D94+edx); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	sub(edx, eax);
	to32i(esp+0x2C) = edx; //mov
	test(edx, edx);
	if (jge())
		goto loc_46BB88;
	xor_(ebp, ebp);
	to32i(esp+0x2C) = ebp; //mov
	goto loc_46BB88;
loc_46BD92:
	cmp(edi, (int32_t)0xFFFB0000);
	if (jge())
		goto loc_46BB88;
	eax = to32i(dword_511D94+edx); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	to32i(esp+0x2C) = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_46BB88;
	xor_(ebp, ebp);
	to32i(esp+0x2C) = ebp; //mov
	goto loc_46BB88;
loc_46BDD9:
	neg(edx);
	goto loc_46BD20;
loc_46BDE0:
	eax = ebx; //mov
	neg(eax);
	goto loc_46BD30;
loc_46BDE9:
	sar(edx, (int32_t)2);
	add(eax, edx);
	to32i(ecx+0xBC) = eax; //mov
	eax = esi; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_46BE00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ebx = to32i(eax+0x2EC); //mov
	eax = 0x10000; //mov
	edx = eax; //mov
	ecx = to32i(ebx+0xF0); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(ebx+0x164) = eax; //mov
	eax = to32i(esi+0x2EC); //mov
	xor_(edi, edi);
	to32i(eax+0x1D8) = 0; //mov
loc_46BE38:
	eax = to32i(esi+0x2EC); //mov
	edx = (int32_t)(intptr_t)(eax+edi); //lea
	ebx = to32i(eax+0x1D8); //mov
	ebp = to32i(edx+0x4C); //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_46BFCA;
loc_46BE52:
	add(edi, (int32_t)4);
	cmp(edi, (int32_t)0xA4);
	if (jnz())
		goto loc_46BE38;
	xor_(edi, edi);
	xor_(ebp, ebp);
loc_46BE61:
	eax = to32i(esi+0x2EC); //mov
	cmp(ebp, to32i(eax+4));
	if (jge())
		goto loc_46C00A;
	cmp(to32i(dword_512204), (int32_t)0);
	if (jnz())
		goto loc_46BEAB;
	edx = to32i(esi+0x21C); //mov
	ecx = to32i(edx+0x2C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_46BEAB;
	ebx = ecx; //mov
	eax = to32i(edi+eax+0xC); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+edi+0xC) = eax; //mov
loc_46BEAB:
	eax = to32i(esi+0x2EC); //mov
	add(eax, edi);
	ebx = to32i(eax+0xC); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46BFD5;
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
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+edi+0x188) = eax; //mov
loc_46BEE5:
	eax = to32i(esi+0x2EC); //mov
	ebx = to32i(eax); //mov
	eax = to32i(edi+eax+0xC); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+edi+0x1A8) = eax; //mov
	eax = to32i(esi+0x2EC); //mov
	ebx = 0xA0000; //mov
	eax = to32i(edi+eax+0x1A8); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+edi+0x1A8) = eax; //mov
	eax = to32i(esi+0x2EC); //mov
	edx = to32i(edi+eax+0x2C); //mov
	eax = to32i(edi+eax+0x1A8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+edi+0x1A8) = eax; //mov
	test(to8i(byte_512218), (int8_t)4);
	if (jnz())
		goto loc_46BFE4;
loc_46BF78:
	eax = to32i(esi+0x2EC); //mov
	edx = to32i(eax+0xF0); //mov
	shl(edx, (int32_t)0x10);
	eax = to32i(edi+eax+0x188); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = 0x10000; //mov
	add(edi, (int32_t)4);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	inc(ebp);
	to32i(edx+edi+0x164) = eax; //mov
	goto loc_46BE61;
loc_46BFCA:
	to32i(eax+0x1D8) = ebp; //mov
	goto loc_46BE52;
loc_46BFD5:
	to32i(eax+0x188) = 0x28F; //mov
	goto loc_46BEE5;
loc_46BFE4:
	eax = to32i(esi+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_46BF78;
	eax = to32i(esi+0x2EC); //mov
	ecx = to32i(edi+eax+0x1A8); //mov
	add(ecx, ecx);
	to32i(edi+eax+0x1A8) = ecx; //mov
	goto loc_46BF78;
loc_46C00A:
	test(to8i(byte_512218), (int8_t)4);
	if (jz())
		goto loc_46C04F;
	edx = to32i(esi+0x21C); //mov
	cmp(to32i(edx), (int32_t)0xF);
	if (jge())
		goto loc_46C04F;
	to32i(eax+0xF8) = 0x7333; //mov
	eax = to32i(esi+0x2EC); //mov
	edx = 0x14000; //mov
	eax = to32i(eax+0x138); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x138) = eax; //mov
loc_46C04F:
	eax = to32i(esi+0x2EC); //mov
	edx = to32i(eax+4); //mov
	edx = to32i(eax+edx*4+8); //mov
	eax = to32i(eax+0xF4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ebx = to32i(esi+0x2EC); //mov
	edi = to32i(ebx+4); //mov
	edi = to32i(ebx+edi*4+0x1A4); //mov
	edx = edi; //mov
	eax = to32i(ebx+eax*4+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	edi = eax; //mov
	eax = to32i(edx+0xF4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = eax; //mov
	imul32(ebx, eax);
	imul32(ebx, eax);
	eax = edi; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x1C8) = eax; //mov
	edx = to32i(esi+0x2EC); //mov
	eax = to32i(edx+0x124); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	eax = 0x10000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x1CC) = eax; //mov
	eax = to32i(esi+0x2EC); //mov
	edx = 0x648; //mov
	eax = to32i(eax+0x1CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x1CC) = eax; //mov
	eax = to32i(esi+0x2EC); //mov
	shl(to32i(eax+0x1CC), (int32_t)8);
	ebx = to32i(esi+0x2EC); //mov
	eax = 0x10000; //mov
	ebx = to32i(ebx+0x1CC); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x1D0) = eax; //mov
	ebx = to32i(esi+0x2EC); //mov
	eax = 0x10000; //mov
	ebx = to32i(ebx+0x138); //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = to32i(esi+0x2EC); //mov
	edi = to32i(dword_512204); //mov
	to32i(edx+0x1D4) = eax; //mov
	test(edi, edi);
	if (jz())
		goto loc_46C1CF;
	xor_(ebx, ebx);
	to32i(dword_4D8514) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46C1CF:
	edx = to32i(esi+0x21C); //mov
	eax = to32i(esi+0x2EC); //mov
	edx = to32i(edx+0x24); //mov
	eax = to32i(eax+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0x2EC); //mov
	to32i(edx+0x12C) = eax; //mov
	xor_(ebx, ebx);
	to32i(dword_4D8514) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46C210()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+8) = eax; //mov
	xor_(ebx, ebx);
loc_46C246:
	eax = edx; //mov
	add(ebx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to32i(esi+ebx+8) = eax; //mov
	cmp(ebx, (int32_t)0x20);
	if (jnz())
		goto loc_46C246;
	xor_(ebx, ebx);
loc_46C261:
	eax = edx; //mov
	add(ebx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to32i(esi+ebx+0x28) = eax; //mov
	cmp(ebx, (int32_t)0x20);
	if (jnz())
		goto loc_46C261;
	xor_(ebx, ebx);
loc_46C27C:
	eax = edx; //mov
	add(ebx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to32i(esi+ebx+0x48) = eax; //mov
	cmp(ebx, (int32_t)0xA4);
	if (jnz())
		goto loc_46C27C;
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0xF0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0xF4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0xF8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0xFC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x100) = eax; //mov
	xor_(ebx, ebx);
loc_46C2F9:
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475EB0(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to8i(esi+ebx+0x103) = al; //mov
	cmp(ebx, (int32_t)8);
	if (jl())
		goto loc_46C2F9;
	xor_(ebx, ebx);
loc_46C315:
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475EB0(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to8i(esi+ebx+0x10B) = al; //mov
	cmp(ebx, (int32_t)8);
	if (jl())
		goto loc_46C315;
	xor_(ebx, ebx);
loc_46C331:
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475EB0(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to8i(esi+ebx+0x113) = al; //mov
	cmp(ebx, (int32_t)8);
	if (jl())
		goto loc_46C331;
	xor_(ebx, ebx);
loc_46C34D:
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475EB0(); esp += 4; //call
	esi = to32i(ecx+0x2EC); //mov
	to8i(esi+ebx+0x11B) = al; //mov
	cmp(ebx, (int32_t)8);
	if (jl())
		goto loc_46C34D;
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x124) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x128) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x12C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x130) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x134) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x138) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x13C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x144) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x140) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x148) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x14C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x150) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x154) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x158) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(ecx+0x2EC); //mov
	to32i(ebx+0x15C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	edx = to32i(ecx+0x2EC); //mov
	to32i(edx+0x160) = eax; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46C4A0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = to16i(eax); //movsx
	ebx = (int32_t)(intptr_t)(ecx+ecx); //lea
	edi = to32i(eax); //mov
	to32i(esp) = ebx; //mov
	ebx = to32i(eax+2); //mov
	eax = to32i(eax+4); //mov
	ebp = to32i(esp); //mov
	sar(eax, (int32_t)0x10);
	imul32(ebp, eax);
	sar(edi, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(edi+edi); //lea
	to32i(esp+4) = ebp; //mov
	ebp = eax; //mov
	imul32(ebp, esi);
	sar(ebx, (int32_t)0x10);
	to32i(esp+0x14) = ebx; //mov
	add(ebx, ebx);
	imul32(eax, ebx);
	to32i(esp+8) = ebp; //mov
	ebp = to32i(esp); //mov
	imul32(ebp, ecx);
	to32i(esp+0xC) = ebp; //mov
	ebp = ecx; //mov
	imul32(ebp, esi);
	imul32(ecx, ebx);
	imul32(esi, edi);
	imul32(edi, ebx);
	to32i(esp+0x10) = ebp; //mov
	imul32(ebx, to32i(esp+0x14));
	ebp = 0x10000000; //mov
	sub(ebp, esi);
	sub(ebp, ebx);
	sar(ebp, (int32_t)0xC);
	to32i(edx) = ebp; //mov
	ebp = to32i(esp+0x10); //mov
	add(ebp, eax);
	sar(ebp, (int32_t)0xC);
	to32i(edx+4) = ebp; //mov
	ebp = ecx; //mov
	sub(ebp, to32i(esp+8));
	sar(ebp, (int32_t)0xC);
	to32i(edx+8) = ebp; //mov
	ebp = to32i(esp+0x10); //mov
	sub(ebp, eax);
	eax = ebp; //mov
	sar(eax, (int32_t)0xC);
	ebp = to32i(esp+0xC); //mov
	to32i(edx+0xC) = eax; //mov
	eax = 0x10000000; //mov
	sub(eax, ebp);
	ebp = eax; //mov
	sub(ebp, ebx);
	ebx = ebp; //mov
	sub(eax, esi);
	sar(ebx, (int32_t)0xC);
	sar(eax, (int32_t)0xC);
	to32i(edx+0x10) = ebx; //mov
	ebx = to32i(esp+4); //mov
	ebp = to32i(esp+4); //mov
	add(ebx, edi);
	to32i(edx+0x20) = eax; //mov
	sar(ebx, (int32_t)0xC);
	sub(edi, ebp);
	to32i(edx+0x14) = ebx; //mov
	ebx = to32i(esp+8); //mov
	sar(edi, (int32_t)0xC);
	add(ecx, ebx);
	to32i(edx+0x1C) = edi; //mov
	sar(ecx, (int32_t)0xC);
	to32i(edx+0x18) = ecx; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46C590()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	to32i(esp+8) = ecx; //mov
	ebx = to32i(esp+0x1C); //mov
	ecx = 0x10000; //mov
	sub(ecx, ebx);
	eax = to16i(eax); //movsx
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	edx = ebx; //mov
	eax = to16i(edi); //movsx
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, to32i(esp));
	edx = to32i(esp+0x20); //mov
	to16i(edx) = ax; //mov
	eax = to32i(esi); //mov
	edx = ecx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(edi); //mov
	edx = ebx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, to32i(esp));
	edx = to32i(esp+0x20); //mov
	to16i(edx+2) = ax; //mov
	eax = to32i(esi+2); //mov
	edx = ecx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(edi+2); //mov
	edx = ebx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, to32i(esp+4));
	edx = to32i(esp+0x20); //mov
	to16i(edx+4) = ax; //mov
	eax = to32i(esi+4); //mov
	edx = ecx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	eax = to32i(edi+4); //mov
	edx = ebx; //mov
	sar(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	eax = to32i(esp+0x20); //mov
	to16i(eax+6) = si; //mov
	edx = ecx; //mov
	eax = to32i(ebp+0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	eax = to32i(esp+8); //mov
	edx = ebx; //mov
	eax = to32i(eax); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	eax = to32i(esp+0x24); //mov
	to32i(eax) = esi; //mov
	edx = ecx; //mov
	eax = to32i(ebp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	eax = to32i(esp+8); //mov
	edx = ebx; //mov
	eax = to32i(eax+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, eax);
	eax = to32i(esp+0x24); //mov
	to32i(eax+4) = esi; //mov
	edx = ecx; //mov
	eax = to32i(ebp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = to32i(esp+8); //mov
	edx = ebx; //mov
	eax = to32i(eax+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(esp+0x24); //mov
	to32i(eax+8) = ecx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_46C710()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	eax = to32i(dword_51220C); //mov
	xor_(edx, edx);
	eax = to32i(dword_511D08+eax*4); //mov
	to32i(dword_4D9548) = edx; //mov
	esp -= 4; _sub_46EA10(); esp += 4; //call
	to16i(word_4D9530) = ax; //mov
	eax = edi; //mov
	esp -= 4; _sub_46C820(); esp += 4; //call
	eax = to32i(dword_5222E0); //mov
	xor_(esi, esi);
	esp -= 4; _sub_44B660(); esp += 4; //call
	ecx = to32i(dword_511E3C); //mov
	to32i(esp) = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46C781;
	to32i(esp+4) = edx; //mov
	xor_(ebp, ebp);
loc_46C760:
	cmp(to32i(dword_513658+ebp), (int32_t)0);
	if (jge())
		goto loc_46C795;
loc_46C769:
	ebx = to32i(esp+4); //mov
	eax = to32i(dword_511E3C); //mov
	add(ebp, (int32_t)0x20);
	add(ebx, (int32_t)4);
	inc(esi);
	to32i(esp+4) = ebx; //mov
	cmp(esi, eax);
	if (jl())
		goto loc_46C760;
loc_46C781:
	eax = to32i(dword_540F48); //mov
	to32i(dword_4D928C) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46C795:
	ecx = to32i(esp+4); //mov
	eax = to32i(dword_5222E0); //mov
	ecx = to32i(dword_511B48+ecx); //mov
	esp -= 4; _sub_44B2C0(); esp += 4; //call
	cmp(eax, ecx);
	if (jnz())
		goto loc_46C7C2;
	ebx = to32i(esp); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46C769;
	cmp(to32i(dword_5222DC), (int32_t)1);
	if (jz())
		goto loc_46C769;
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_46C769;
loc_46C7C2:
	eax = ecx; //mov
	esp -= 4; _sub_4616E0(); esp += 4; //call
	cmp(to32i(ecx+0x16C), (int32_t)0);
	if (jz())
		goto loc_46C807;
	edx = to32i(dword_540F48); //mov
	cmp(edx, to32i(ecx+0x630));
	if (jz())
		goto loc_46C7E6;
	inc(to32i(ecx+0x62C));
loc_46C7E6:
	eax = to32i(dword_540F48); //mov
	to32i(ecx+0x630) = eax; //mov
	test(to8i(ecx+0x62C), (int8_t)1);
	if (jz())
		goto loc_46C807;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jz())
		goto loc_46C769;
loc_46C807:
	ebx = esi; //mov
	edx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_46CDD0(); esp += 4; //call
	goto loc_46C769;
}
Fn(void) Game::_sub_46C820()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = eax; //mov
	eax = 0xC80000; //mov
	xor_(edx, edx);
	ebx = 0x280000; //mov
	to32i(dword_5222A8) = edx; //mov
	to32i(dword_5222AC) = edx; //mov
	to32i(dword_5222B0) = edx; //mov
	to32i(dword_5222B8) = edx; //mov
	to32i(dword_5222B4) = edx; //mov
	to32i(esp+0x18) = eax; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+0x14) = ebx; //mov
	eax = to32i(ecx+4); //mov
	edx = 0x190000; //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	to32i(esp+0xC) = edx; //mov
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_46C977;
loc_46C87B:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_46C89F;
	edx = 0x12C000; //mov
	ebx = 0x1E0000; //mov
	eax = 0x960000; //mov
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+0x18) = eax; //mov
loc_46C89F:
	cmp(to32i(ecx), (int32_t)1);
	if (jnz())
		goto loc_46C8BC;
	eax = 0x1AAAAA; //mov
	xor_(ebp, ebp);
	edi = 0x960000; //mov
	to32i(esp+0xC) = ebp; //mov
	to32i(esp+0x10) = eax; //mov
	to32i(esp+0x18) = edi; //mov
loc_46C8BC:
	edx = to32i(dword_511E3C); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jle())
		goto loc_46C94C;
	xor_(ebx, ebx);
	xor_(ebp, ebp);
loc_46C8D0:
	edx = to32i(dword_512208); //mov
	esi = to32i(dword_511B48+ebp); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_46C984;
	eax = to32i(dword_5222E0); //mov
	esp -= 4; _sub_44B2C0(); esp += 4; //call
	edx = to32i(eax+0x14); //mov
loc_46C8F2:
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_462F70(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jl())
		goto loc_46C924;
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)3);
	if (jnz())
		goto loc_46C998;
loc_46C912:
	cmp(to8i(esi+0x8C), (int8_t)0);
	if (jz())
		goto loc_46C9A3;
	eax = 0x64; //mov
loc_46C924:
	cmp(to8i(esi+0x8D), (int8_t)0);
	if (jnz())
		goto loc_46C9AA;
loc_46C931:
	to32i(dword_513658+ebx) = 0xFFFFFFFF; //mov
loc_46C93B:
	esi = to32i(dword_511E3C); //mov
	add(ebp, (int32_t)4);
	inc(edi);
	add(ebx, (int32_t)0x20);
	cmp(edi, esi);
	if (jl())
		goto loc_46C8D0;
loc_46C94C:
	ebx = to32i(esp+0x14); //mov
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0xC); //mov
	esp -= 4; _sub_46CC50(); esp += 4; //call
	cmp(to32i(dword_5222B4), (int32_t)0x578);
	if (jge())
		goto loc_46CBE9;
loc_46C96D:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46C977:
	to32i(esp+0x14) = (int32_t)(intptr_t)dword_500000; //mov
	goto loc_46C87B;
loc_46C984:
	eax = to32i(dword_51220C); //mov
	edx = to32i(dword_511D08+eax*4); //mov
	edx = to32i(edx+0x14); //mov
	goto loc_46C8F2;
loc_46C998:
	cmp(edx, (int32_t)5);
	if (jz())
		goto loc_46C912;
	goto loc_46C924;
loc_46C9A3:
	xor_(eax, eax);
	goto loc_46C924;
loc_46C9AA:
	cmp(eax, (int32_t)0x32);
	if (jg())
		goto loc_46C931;
	xor_(edx, edx);
	eax = 0x63; //mov
	to32i(dword_513660+ebx) = edx; //mov
	to32i(dword_513658+ebx) = eax; //mov
	eax = to32i(esi+0x9C); //mov
	edx = to32i(ecx+8); //mov
	sub(eax, edx);
	to32i(esp) = eax; //mov
	edx = to32i(ecx+0xC); //mov
	eax = to32i(esi+0xA0); //mov
	sub(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+0xA4); //mov
	esi = to32i(ecx+0x10); //mov
	sub(eax, esi);
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	test(eax, eax);
	if (jle())
		goto loc_46CA19;
loc_46C9F5:
	edx = to32i(esp+8); //mov
	test(edx, edx);
	if (jle())
		goto loc_46CA1D;
loc_46C9FD:
	cmp(eax, edx);
	if (jle())
		goto loc_46CA21;
	sar(edx, (int32_t)2);
loc_46CA04:
	add(eax, edx);
	esi = to32i(esp+0x18); //mov
	to32i(dword_513648+ebx) = eax; //mov
	cmp(eax, esi);
	if (jle())
		goto loc_46CA26;
	goto loc_46C931;
loc_46CA19:
	neg(eax);
	goto loc_46C9F5;
loc_46CA1D:
	neg(edx);
	goto loc_46C9FD;
loc_46CA21:
	sar(eax, (int32_t)2);
	goto loc_46CA04;
loc_46CA26:
	eax = to32i(esp); //mov
	edx = to32i(ecx+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+0x30); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x34); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	edx = to32i(esp+0x18); //mov
	to32i(dword_513654+ebx) = eax; //mov
	cmp(eax, edx);
	if (jg())
		goto loc_46C931;
	cmp(eax, (int32_t)0xFFFE0000);
	if (jl())
		goto loc_46C931;
	eax = to32i(esp); //mov
	edx = to32i(ecx+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+0x48); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x4C); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	to32i(dword_51364C+ebx) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(ecx+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+0x54); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x58); //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	edx = to32i(dword_51364C+ebx); //mov
	to32i(dword_513650+ebx) = eax; //mov
	xor_(eax, eax);
	xor_(esi, esi);
	to32i(esp+0x1C) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_46CB7E;
	eax = edx; //mov
loc_46CB0F:
	cmp(eax, to32i(dword_513654+ebx));
	if (jle())
		goto loc_46CB84;
loc_46CB17:
	eax = to32i(dword_51364C+ebx); //mov
	test(eax, eax);
	if (jle())
		goto loc_46CB9C;
	edx = eax; //mov
loc_46CB27:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(eax, to32i(dword_513654+ebx));
	if (jle())
		goto loc_46CBA2;
loc_46CB3C:
	to32i(esp+0x1C) = 1; //mov
loc_46CB44:
	cmp(to32i(dword_513654+ebx), (int32_t)0xA0000);
	if (jge())
		goto loc_46CB6A;
	eax = to32i(dword_51364C+ebx); //mov
	test(eax, eax);
	if (jle())
		goto loc_46CBCE;
loc_46CB5E:
	cmp(eax, (int32_t)0x1E0000);
	if (jge())
		goto loc_46CB6A;
	esi = 1; //mov
loc_46CB6A:
	cmp(to32i(esp+0x1C), (int32_t)0);
	if (jz())
		goto loc_46CBD2;
	test(esi, esi);
	if (jnz())
		goto loc_46CBD2;
	goto loc_46C931;
loc_46CB7E:
	eax = edx; //mov
	neg(eax);
	goto loc_46CB0F;
loc_46CB84:
	eax = to32i(dword_513650+ebx); //mov
	test(eax, eax);
	if (jle())
		goto loc_46CB98;
loc_46CB8E:
	cmp(eax, to32i(dword_513654+ebx));
	if (jg())
		goto loc_46CB17;
	goto loc_46CB44;
loc_46CB98:
	neg(eax);
	goto loc_46CB8E;
loc_46CB9C:
	edx = eax; //mov
	neg(edx);
	goto loc_46CB27;
loc_46CBA2:
	eax = to32i(dword_513650+ebx); //mov
	test(eax, eax);
	if (jle())
		goto loc_46CBC8;
	edx = eax; //mov
loc_46CBAE:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(eax, to32i(dword_513654+ebx));
	if (jg())
		goto loc_46CB3C;
	goto loc_46CB44;
loc_46CBC8:
	edx = eax; //mov
	neg(edx);
	goto loc_46CBAE;
loc_46CBCE:
	neg(eax);
	goto loc_46CB5E;
loc_46CBD2:
	test(esi, esi);
	if (jz())
		goto loc_46C93B;
	to32i(dword_513660+ebx) = 1; //mov
	goto loc_46C93B;
loc_46CBE9:
	ebx = to32i(esp+0x14); //mov
	edx = 0x140000; //mov
	eax = 0xA0000; //mov
	esp -= 4; _sub_46CC50(); esp += 4; //call
	cmp(to32i(dword_5222B4), (int32_t)0x578);
	if (jl())
		goto loc_46C96D;
	ebx = to32i(esp+0x14); //mov
	edx = 0xA0000; //mov
	eax = 0x50000; //mov
	esp -= 4; _sub_46CC50(); esp += 4; //call
	cmp(to32i(dword_5222B4), (int32_t)0x578);
	if (jl())
		goto loc_46C96D;
	ebx = to32i(esp+0x14); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_46CC50(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46CC50()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	edx = to32i(dword_511E3C); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jle())
		goto loc_46CCFF;
	xor_(eax, eax);
	xor_(edx, edx);
loc_46CC72:
	xor_(ebp, ebp);
	ebx = to32i(dword_513658+eax); //mov
	to32i(dword_513664+eax) = ebp; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_46CCEA;
	cmp(to32i(dword_513654+eax), (int32_t)0x6E0000);
	if (jg())
		goto loc_46CD3E;
	to32i(dword_51365C+eax) = 8; //mov
loc_46CC9E:
	cmp(to32i(dword_512248), (int32_t)0);
	if (jnz())
		goto loc_46CCCA;
	ebx = to32i(dword_511B48+edx); //mov
	ebx = to32i(ebx+0x21C); //mov
	cmp(to32i(ebx), (int32_t)0xF);
	if (jg())
		goto loc_46CCCA;
	cmp(esi, to32i(dword_513654+eax));
	if (jle())
		goto loc_46CCCA;
	to32i(dword_513664+eax) = 1; //mov
loc_46CCCA:
	ebp = to32i(esp); //mov
	cmp(ebp, to32i(dword_513654+eax));
	if (jle())
		goto loc_46CD4D;
loc_46CCD5:
	ebp = to32i(dword_5222A8); //mov
	xor_(ebx, ebx);
	inc(ebp);
	to32i(dword_513658+eax) = ebx; //mov
	to32i(dword_5222A8) = ebp; //mov
loc_46CCEA:
	ebx = to32i(dword_511E3C); //mov
	add(edx, (int32_t)4);
	inc(ecx);
	add(eax, (int32_t)0x20);
	cmp(ecx, ebx);
	if (jl())
		goto loc_46CC72;
loc_46CCFF:
	edx = to32i(dword_5222AC); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(ecx, edx);
	shl(ecx, (int32_t)2);
	add(ecx, edx);
	edx = to32i(dword_5222A8); //mov
	eax = edx; //mov
	shl(eax, (int32_t)5);
	add(ecx, ecx);
	add(eax, edx);
	edx = to32i(dword_5222B0); //mov
	add(eax, eax);
	shl(edx, (int32_t)2);
	add(eax, ecx);
	add(eax, edx);
	to32i(dword_5222B4) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46CD3E:
	to32i(dword_51365C+eax) = 9; //mov
	goto loc_46CC9E;
loc_46CD4D:
	cmp(ecx, to32i(dword_5222E0));
	if (jz())
		goto loc_46CCD5;
	cmp(to32i(dword_4DAC24), (int32_t)0x1F4);
	if (jg())
		goto loc_46CCD5;
	cmp(edi, to32i(dword_513654+eax));
	if (jle())
		goto loc_46CD8B;
loc_46CD6D:
	ebx = 1; //mov
	ebp = to32i(dword_5222AC); //mov
	add(ebp, ebx);
	to32i(dword_513658+eax) = ebx; //mov
	to32i(dword_5222AC) = ebp; //mov
	goto loc_46CCEA;
loc_46CD8B:
	ebx = to32i(dword_511B48+edx); //mov
	cmp(to32i(ebx+0x17C), (int32_t)0);
	if (jnz())
		goto loc_46CD6D;
	cmp(to32i(ebx+0x100), (int32_t)0xCCCC);
	if (jl())
		goto loc_46CD6D;
	ebp = to32i(dword_5222B0); //mov
	ebx = 2; //mov
	inc(ebp);
	to32i(dword_513658+eax) = ebx; //mov
	to32i(dword_5222B0) = ebp; //mov
	goto loc_46CCEA;
}
Fn(void) Game::_sub_46CDD0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xA4);
	ebp = eax; //mov
	to32i(esp+0xA0) = edx; //mov
	to32i(esp+0x98) = ebx; //mov
	eax = ebx; //mov
	shl(eax, (int32_t)5);
	edx = to32i(dword_513658+eax); //mov
	eax = to32i(dword_51365C+eax); //mov
	to32i(esp+0x9C) = edx; //mov
	esp -= 4; _sub_480A00(); esp += 4; //call
	cmp(to32i(dword_512204), (int32_t)1);
	if (jz())
		goto loc_46D243;
loc_46CE14:
	ecx = to32i(esp+0x9C); //mov
	shl(ecx, (int32_t)2);
	ebx = to32i(ebp+0x314); //mov
	add(ecx, ebp);
	test(ebx, ebx);
	if (jz())
		goto loc_46D254;
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	edx = ebx; //mov
	esp -= 4; _sub_49E780(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	ebx = to32i(ecx+0x568); //mov
	edx = (int32_t)(intptr_t)(ebp+0xC4); //lea
	add(ebx, (int32_t)0x50);
	esp -= 4; _sub_49E840(); esp += 4; //call
loc_46CE51:
	eax = to32i(esp+0x9C); //mov
	esi = to32i(ebp+eax*4+0x568); //mov
	edi = (int32_t)(intptr_t)(esi+0x74); //lea
	esi = (int32_t)(intptr_t)(ebp+0x9C); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(ebp+eax*4+0x568); //mov
	esi = to32i(eax+0x78); //mov
	add(esi, (int32_t)0x2000);
	edi = to32i(esp+0x9C); //mov
	to32i(eax+0x78) = esi; //mov
	test(edi, edi);
	if (jnz())
		goto loc_46D26F;
	edx = to32i(esp+0xA0); //mov
	eax = to32i(ebp+0x9C); //mov
	sub(eax, to32i(edx+8));
	ebx = to32i(edx+0xC); //mov
	to32i(esp+0x54) = eax; //mov
	eax = to32i(ebp+0xA0); //mov
	sub(eax, ebx);
	esi = to32i(edx+0x10); //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(ebp+0xA4); //mov
	sub(eax, esi);
	edx = to32i(ebp+0xC4); //mov
	to32i(esp+0x5C) = eax; //mov
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0xC8); //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xCC); //mov
	add(ecx, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xD0); //mov
	ebx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0xD4); //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xD8); //mov
	add(ecx, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xDC); //mov
	esi = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0xE0); //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xE4); //mov
	add(ecx, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_49E630(); esp += 4; //call
	to32i(dword_545224) = eax; //mov
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_49E630(); esp += 4; //call
	to32i(dword_545228) = eax; //mov
loc_46CFA3:
	edx = to32i(esp+0xA0); //mov
	eax = (int32_t)(intptr_t)(ebp+0x1AC); //lea
	esp -= 4; _sub_4755C0(); esp += 4; //call
	ecx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_46EA10(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_4802B0(); esp += 4; //call
	esp -= 4; _sub_475350(); esp += 4; //call
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xE);
	if (jnz())
		goto loc_46D280;
	cmp(to32i(ebp+0x60C), (int32_t)0x58);
	if (jnz())
		goto loc_46D280;
	eax = 1; //mov
loc_46CFEA:
	edx = to32i(esp+0x98); //mov
	shl(edx, (int32_t)5);
	ebx = to32i(dword_513664+edx); //mov
	to32i(dword_4D9288) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46D28F;
	edx = to32i(esp+0xA0); //mov
	cmp(to32i(edx), (int32_t)1);
	if (jz())
		goto loc_46D287;
loc_46D017:
	to32i(dword_4D9538) = 1; //mov
	eax = ebp; //mov
	esp -= 4; _sub_46F5D0(); esp += 4; //call
	to32i(dword_4D953C) = eax; //mov
loc_46D02D:
	edi = to32i(esp+0x9C); //mov
	edx = to32i(esp+0xA0); //mov
	ebx = to32i(ebp+0x618); //mov
	eax = to32i(ebp+edi*4+0x568); //mov
	esp -= 4; _sub_475380(); esp += 4; //call
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)(esp+0x78); //lea
	to32i(dword_4D9284) = edx; //mov
	to32i(dword_4D9280) = edx; //mov
	to32i(dword_4D9288) = edx; //mov
	to32i(dword_4D9538) = edx; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x78); //lea
	eax = to32i(ebp+edi*4+0x568); //mov
	esp -= 4; _sub_475300(); esp += 4; //call
	cmp(to32i(esp+0x78), (int32_t)0);
	if (jnz())
		goto loc_46D092;
	cmp(to32i(esp+0x7C), (int32_t)0);
	if (jz())
		goto loc_46D233;
loc_46D092:
	esi = to32i(esp+0x7C); //mov
	push32(esi);
	edi = to32i(esp+0x7C); //mov
	push32(edi);
	eax = to32i(ebp+0x614); //mov
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_475880(); esp += 4; //call
	esp -= 4; _sub_46FE10(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	push32(eax);
	edx = to32i(esp+0x8C); //mov
	push32(edx);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	ebx = to32i(esp+0x7C); //mov
	push32(ebx);
	esi = to32i(esp+0x7C); //mov
	eax = 0xB; //mov
	push32(esi);
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)(esp+0x70); //lea
	esp -= 4; _sub_46D350(); esp += 4; //call
	edi = to32i(esp+0x74); //mov
	push32(edi);
	eax = to32i(esp+0x74); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edx = to32i(esp+0x7C); //mov
	push32(edx);
	ebx = to32i(esp+0x7C); //mov
	eax = 8; //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x78); //lea
	edx = 1; //mov
	esp -= 4; _sub_46D350(); esp += 4; //call
	esi = to32i(esp+0x7C); //mov
	push32(esi);
	edi = to32i(esp+0x7C); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	edx = 0xFF00; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = 0xB; //mov
	esi = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_46D350(); esp += 4; //call
	eax = to32i(esp+0x64); //mov
	push32(eax);
	edx = to32i(esp+0x64); //mov
	push32(edx);
	ebx = to32i(esp+0x84); //mov
	push32(ebx);
	esi = to32i(esp+0x84); //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	edx = 2; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = 8; //mov
	esi = (int32_t)(intptr_t)(esp+0x90); //lea
	esp -= 4; _sub_46D350(); esp += 4; //call
	edi = to32i(esp+0x94); //mov
	push32(edi);
	eax = to32i(esp+0x94); //mov
	push32(eax);
	edx = to32i(esp+0x84); //mov
	push32(edx);
	ebx = to32i(esp+0x84); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_46D1C8;
	cmp(to32i(ebp+0x17C), (int32_t)0);
	if (jz())
		goto loc_46D29C;
	cmp(to32i(ebp+0x18), (int32_t)0);
	if (jnz())
		goto loc_46D29C;
loc_46D1C8:
	eax = esp; //mov
	edx = to32i(esp+0xA0); //mov
	ebx = 1; //mov
	ecx = (int32_t)(intptr_t)(ebp+0x9C); //lea
	push32(eax);
	eax = to32i(esp+0xA4); //mov
	add(edx, (int32_t)0x38);
	add(eax, (int32_t)0x44);
	esp -= 4; _sub_480540(); esp += 4; //call
	eax = to32i(esp+0x98); //mov
	shl(eax, (int32_t)5);
	edx = 1; //mov
	esi = to32i(dword_513660+eax); //mov
	eax = edx; //mov
	sub(eax, esi);
	push32(eax);
	edi = to32i(esp+0x80); //mov
	push32(edi);
	ebp = to32i(esp+0x80); //mov
	push32(ebp);
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(0xA0000);
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_471050(); esp += 4; //call
loc_46D233:
	esp -= 4; _sub_4809F0(); esp += 4; //call
	add(esp, (int32_t)0xA4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46D243:
	eax = to32i(ebp+0x204); //mov
	to32i(ebp+0x314) = eax; //mov
	goto loc_46CE14;
loc_46D254:
	esi = to32i(ecx+0x568); //mov
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esi+0x50); //lea
	esi = (int32_t)(intptr_t)(ebp+0xC4); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	goto loc_46CE51;
loc_46D26F:
	xor_(eax, eax);
	to32i(dword_545228) = eax; //mov
	to32i(dword_545224) = eax; //mov
	goto loc_46CFA3;
loc_46D280:
	xor_(eax, eax);
	goto loc_46CFEA;
loc_46D287:
	test(eax, eax);
	if (jnz())
		goto loc_46D017;
loc_46D28F:
	xor_(edi, edi);
	to32i(dword_4D9538) = edi; //mov
	goto loc_46D02D;
loc_46D29C:
	eax = to32i(esp+0x7C); //mov
	push32(eax);
	edx = to32i(esp+0x7C); //mov
	push32(edx);
	esi = (int32_t)(intptr_t)(esp+0x90); //lea
	eax = ecx; //mov
	esp -= 4; _sub_46FE10(); esp += 4; //call
	ecx = to32i(esp+0x94); //mov
	push32(ecx);
	ebx = to32i(esp+0x94); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x88); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	goto loc_46D1C8;
}
Fn(void) Game::_sub_46D2E0()
{
	push32(ecx);
	ecx = eax; //mov
	test(to8i(byte_512219), (int8_t)0x10);
	if (jz())
		goto loc_46D329;
loc_46D2EC:
	eax = to32i(ecx+0x634); //mov
	edx = to32i(ecx); //mov
	eax = to32i(ecx+eax*4+0x61C); //mov
	and_(edx, (int32_t)0xF);
	to32i(ecx+0x618) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(ecx+0x634); //mov
	eax = to32i(dword_5119C8+edx+eax*4); //mov
	to32i(ecx+0x614) = eax; //mov
	pop32(ecx);
	return;
loc_46D329:
	push32(ebx);
	edx = to32i(ecx+0x634); //mov
	inc(edx);
	ebx = 3; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(ecx+0x634) = edx; //mov
	pop32(ebx);
	goto loc_46D2EC;
}
Fn(void) Game::_sub_46D350()
{
	push32(ebx);
	push32(ecx);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = esi; //mov
	ebx = eax; //mov
	esi = edx; //mov
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46D3AB;
	eax = to32i(esp+8); //mov
	to32i(eax+4) = 0x1B; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = 0; //mov
	eax = to32i(esp+8); //mov
	to32i(eax+8) = esi; //mov
	eax = to32i(esp+8); //mov
	to32i(eax+0xC) = ebx; //mov
	esi = esp; //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_46FE10(); esp += 4; //call
	esi = esp; //mov
	edi = ecx; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46D3AB:
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	edi = ecx; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46D3D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xA8);
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(eax+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_46E208(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+0x7C) = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(edx, eax);
	shl(ecx, (int32_t)2);
	shl(edx, (int32_t)3);
	eax = ecx; //mov
	add(ecx, (int32_t)0x34);
loc_46D413:
	add(edx, (int32_t)0x14);
	bx = to16i(word_4D8518+eax); //mov
	add(eax, (int32_t)2);
	to16i(word_4D863E+edx) = bx; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_46D413;
	eax = to32i(esp+0x8C); //mov
	test(to8i(eax+1), (int8_t)1);
	if (jnz())
		goto loc_46D59A;
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x28);
	if (jge())
		goto loc_46D8ED;
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax); //mov
	ecx = to32i(dword_512260); //mov
	and_(eax, (int32_t)0x1F);
	edx = ecx; //mov
	sub(eax, ecx);
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(edx-1); //lea
	test(eax, eax);
	if (jle())
		goto loc_46D8E6;
loc_46D46E:
	edx = to32i(dword_511B48+eax*4); //mov
	ecx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x56C); //mov
	to32i(ecx+0x568) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x56C); //mov
	to32i(ecx+0x56C) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x570); //mov
	to32i(ecx+0x570) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x628); //mov
	to32i(ecx+0x628) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0xB4); //mov
	to32i(ecx+0xB4) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0xB8); //mov
	to32i(ecx+0xB8) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0xF4); //mov
	to32i(ecx+0xF4) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0xF8); //mov
	to32i(ecx+0xF8) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x108); //mov
	to32i(ecx+0x108) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x10C); //mov
	to32i(ecx+0x10C) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x110); //mov
	to32i(ecx+0x110) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x114); //mov
	to32i(ecx+0x114) = edx; //mov
	edx = to32i(dword_511B48+eax*4); //mov
	edx = to32i(edx+0x114); //mov
	to32i(ecx+0x114) = edx; //mov
	edi = to32i(esp+0x8C); //mov
	esi = to32i(dword_511B48+eax*4); //mov
	ecx = 0x1E; //mov
	edi = (int32_t)(intptr_t)(edi+0x60C); //lea
	esi = (int32_t)(intptr_t)(esi+0x60C); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	add(esp, (int32_t)0xA8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46D59A:
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0xF);
	shl(eax, (int32_t)6);
	edx = to32i(esp+0x8C); //mov
	eax = to32i(dword_51227C+eax); //mov
	to32i(edx+0x60C) = eax; //mov
loc_46D5B5:
	ebp = to32i(esp+0x8C); //mov
	ebp = to32i(ebp+0x21C); //mov
	ebp = to32i(ebp+0); //mov
	shl(ebp, (int32_t)2);
	ebx = to32i(dword_513528+ebp); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_46D93D;
	esi = to32i(esp+0x8C); //mov
	edi = esp; //mov
	add(esi, (int32_t)0x1DC);
	push32(edi);
loc_46D5E6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_46D5FE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_46D5E6;
loc_46D5FE:
	pop32(edi);
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x11);
	if (jge())
		goto loc_46D903;
	ebx = to32i(esp+0x8C); //mov
	edx = 1; //mov
	eax = esp; //mov
	esp -= 4; _sub_46E270(); esp += 4; //call
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x21C); //mov
	edx = to32i(edx); //mov
	ebp = eax; //mov
	to32i(dword_513528+edx*4) = eax; //mov
	inc(to32i(dword_4D9540));
loc_46D646:
	ecx = to32i(esp+0x8C); //mov
	ecx = to32i(ecx+0x21C); //mov
	edx = to32i(ecx); //mov
	cmp(edx, (int32_t)0x11);
	if (jl())
		goto loc_46D719;
	cmp(edx, (int32_t)0x28);
	if (jge())
		goto loc_46D719;
	cmp(edx, (int32_t)0x24);
	if (jz())
		goto loc_46D719;
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x60C); //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	ebx = 0x49; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edi = (int32_t)(intptr_t)(edx+0xF); //lea
	eax = to32i(ecx); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	ebx = eax; //mov
	edx = to32i(edx+0x60C); //mov
	eax = to32i(esp+0x8C); //mov
	sar(edx, (int32_t)0x1F);
	eax = to32i(eax+0x60C); //mov
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(eax, ebx);
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	inc(edx);
	ebx = 0x49; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = (int32_t)(intptr_t)(edx+0xF); //lea
	ebx = 1; //mov
	edx = to32i(ecx); //mov
	eax = to32i(esp+0x8C); //mov
	ecx = edi; //mov
	edx = to32i(dword_513528+edx*4); //mov
	esp -= 4; _sub_477230(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x21C); //mov
	ebx = 2; //mov
	edx = to32i(eax); //mov
	ecx = esi; //mov
	eax = to32i(esp+0x8C); //mov
	edx = to32i(dword_513528+edx*4); //mov
	esp -= 4; _sub_477230(); esp += 4; //call
loc_46D719:
	eax = 2; //mov
	edx = to32i(esp+0x8C); //mov
	esp -= 4; _sub_475960(); esp += 4; //call
	to32i(edx+0x56C) = eax; //mov
	edx = to32i(esp+0x7C); //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(eax, edx);
	ecx = (int32_t)(intptr_t)dword_4D8650; //mov
	shl(eax, (int32_t)3);
	add(ecx, eax);
	eax = to32i(esp+0x8C); //mov
	edx = to32i(ebp+0x54); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x190); //lea
	eax = to32i(eax+0x56C); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x1A4); //lea
	edx = to32i(ebp+0x58); //mov
	eax = to32i(eax+0x56C); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x1B8); //lea
	edx = to32i(ebp+0x5C); //mov
	eax = to32i(eax+0x56C); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x1CC); //lea
	edx = to32i(ebp+0x60); //mov
	eax = to32i(eax+0x56C); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x28);
	if (jl())
		goto loc_46D961;
	eax = to32i(esp+0x8C); //mov
	edx = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x56C); //mov
	to32i(edx+0x570) = eax; //mov
loc_46D7E1:
	eax = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x11);
	if (jge())
		goto loc_46DD78;
	eax = 1; //mov
	edx = to32i(esp+0x8C); //mov
	esp -= 4; _sub_475960(); esp += 4; //call
	to32i(edx+0x568) = eax; //mov
	cmp(to32i(ebp+0x28), (int32_t)0);
	if (jz())
		goto loc_46D9B3;
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)sub_46E7A0; //mov
	esp -= 4; _sub_4758F0(); esp += 4; //call
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x21C); //mov
	edx = to32i(edx); //mov
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ebx = to32i(esp+0x8C); //mov
	edx = to32i(off_4D9298+eax*4); //mov
	eax = esi; //mov
	esp -= 4; _sub_4758C0(); esp += 4; //call
	edx = to32i(esp+0x7C); //mov
	ecx = eax; //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, (int32_t)(intptr_t)dword_4D8650);
	ebx = (int32_t)(intptr_t)(eax+0xB4); //lea
	edx = to32i(ebp+0x28); //mov
	eax = ecx; //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(ebp+8); //mov
	edi = to32i(ecx+0x48); //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0xC); //mov
	xor_(edx, edx);
	sub(edi, eax);
	eax = esi; //mov
	to32i(ecx+0x48) = edi; //mov
loc_46D88C:
	esp -= 4; _sub_4758C0(); esp += 4; //call
	edi = eax; //mov
	edx = to32i(esp+0x7C); //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(eax, edx);
	shl(eax, (int32_t)3);
	ecx = ebp; //mov
	to32i(esp+0x84) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x24); //lea
	xor_(esi, esi);
	to32i(esp+0x80) = eax; //mov
loc_46D8B6:
	eax = to32i(esp+0x84); //mov
	edx = to32i(esp+0x80); //mov
	add(eax, (int32_t)(intptr_t)dword_4D8650);
	cmp(ecx, edx);
	if (jz())
		goto loc_46D9BF;
	edx = to32i(ecx+4); //mov
	ebx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = edi; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_475920(); esp += 4; //call
	add(esi, (int32_t)0x14);
	goto loc_46D8B6;
loc_46D8E6:
	xor_(eax, eax);
	goto loc_46D46E;
loc_46D8ED:
	eax = to32i(esp+0x8C); //mov
	to32i(eax+0x60C) = 0; //mov
	goto loc_46D5B5;
loc_46D903:
	ebx = to32i(esp+0x8C); //mov
	eax = esp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_46E270(); esp += 4; //call
	edx = to32i(esp+0x8C); //mov
	edi = to32i(dword_4D9544); //mov
	edx = to32i(edx+0x21C); //mov
	inc(edi);
	edx = to32i(edx); //mov
	ebp = eax; //mov
	to32i(dword_4D9544) = edi; //mov
	to32i(dword_513528+edx*4) = eax; //mov
	goto loc_46D646;
loc_46D93D:
	ecx = to32i(esp+0x8C); //mov
	ebp = ebx; //mov
	eax = to32i(esp+0x8C); //mov
	edx = ebp; //mov
	ecx = to32i(ecx+0x60C); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_477230(); esp += 4; //call
	goto loc_46D646;
loc_46D961:
	eax = 2; //mov
	edx = to32i(esp+0x8C); //mov
	esp -= 4; _sub_475960(); esp += 4; //call
	to32i(edx+0x570) = eax; //mov
	eax = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x1E0); //lea
	edx = to32i(ebp+0x64); //mov
	eax = to32i(eax+0x570); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	ebx = (int32_t)(intptr_t)(ecx+0x1F4); //lea
	edx = to32i(ebp+0x68); //mov
	eax = to32i(eax+0x570); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	goto loc_46D7E1;
loc_46D9B3:
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)sub_46E7A0; //mov
	goto loc_46D88C;
loc_46D9BF:
	ecx = to32i(ebp+0x2C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_46D9D5;
	ebx = (int32_t)(intptr_t)(eax+0xC8); //lea
	edx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_475920(); esp += 4; //call
loc_46D9D5:
	cmp(to32i(ebp+0x30), (int32_t)0);
	if (jz())
		goto loc_46DA0C;
	edx = to32i(esp+0x7C); //mov
	eax = edx; //mov
	shl(eax, (int32_t)6);
	add(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, (int32_t)(intptr_t)dword_4D8650);
	ebx = (int32_t)(intptr_t)(eax+0xDC); //lea
	edx = to32i(ebp+0x30); //mov
	eax = edi; //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(esp+0x8C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_46DFD0(); esp += 4; //call
loc_46DA0C:
	esi = to32i(esp+0x8C); //mov
	ecx = 1; //mov
	push32(ebp);
	ebx = 0xD; //mov
	sub(eax, eax);
	push32(esi);
	to32i(edi+0x48) = eax; //mov
	edx = 0xC; //mov
	eax = to32i(esi+0x568); //mov
	esp -= 4; _sub_46E120(); esp += 4; //call
	push32(ebp);
	ecx = 1; //mov
	ebx = 0xF; //mov
	push32(esi);
	edx = 0xE; //mov
	eax = to32i(esi+0x568); //mov
	esp -= 4; _sub_46E120(); esp += 4; //call
	push32(ebp);
	ebx = 0x11; //mov
	edx = 0x10; //mov
	push32(esi);
	eax = to32i(esi+0x568); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_46E120(); esp += 4; //call
	push32(ebp);
	ebx = 0x13; //mov
	edx = 0x12; //mov
	push32(esi);
	eax = to32i(esi+0x568); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_46E120(); esp += 4; //call
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_46E020(); esp += 4; //call
loc_46DA8B:
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x21C); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = to32i(esp+0x8C); //mov
	eax = to32i(dword_4D9290+eax*4); //mov
	to32i(edx+0x628) = eax; //mov
	edx = to32i(edx+0x21C); //mov
	edx = to32i(edx); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = to32i(esp+0x8C); //mov
	eax = to32i(dword_4D9294+eax*4); //mov
	to32i(edx+0xB4) = eax; //mov
	eax = to32i(edx+0x21C); //mov
	edx = (int32_t)(intptr_t)aSilSpd; //mov
	add(eax, (int32_t)0x34);
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46DB01;
	eax = to32i(esp+0x8C); //mov
	shl(to32i(eax+0xB4), (int32_t)2);
loc_46DB01:
	ebx = to32i(esp+0x8C); //mov
	eax = 0x10000; //mov
	ebx = to32i(ebx+0xB4); //mov
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
	to32i(edx+0xB8) = eax; //mov
	test(to8i(edx+0x1F4), (int8_t)2);
	if (jz())
		goto loc_46DDCA;
	cmp(to32i(dword_512200), (int32_t)0);
	if (jnz())
		goto loc_46DD97;
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0xB4); //mov
	shl(edx, (int32_t)2);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0xF4) = eax; //mov
	eax = to32i(edx+0xB4); //mov
	edx = 0xD999; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0xB4) = eax; //mov
loc_46DB97:
	ebx = to32i(esp+0x8C); //mov
	eax = 0x10000; //mov
	edi = 0x630000; //mov
	ebx = to32i(ebx+0xF4); //mov
	to32i(esp+0x90) = ebp; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esp+0x70) = edi; //mov
	to32i(esp+0x74) = edi; //mov
	to32i(esp+0x78) = edi; //mov
	edx = to32i(esp+0x8C); //mov
	ecx = 0xFF9D0000; //mov
	xor_(edi, edi);
	to32i(esp+0x64) = ecx; //mov
	to32i(esp+0x68) = ecx; //mov
	to32i(esp+0x6C) = ecx; //mov
	to32i(esp+0x88) = edi; //mov
	to32i(edx+0xF8) = eax; //mov
loc_46DBFD:
	edi = to32i(esp+0x88); //mov
	eax = to32i(esp+0x90); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	shl(edi, (int32_t)2);
	to32i(esp+0xA0) = eax; //mov
	to32i(esp+0x94) = eax; //mov
	to32i(esp+0x98) = eax; //mov
	to32i(esp+0xA4) = eax; //mov
	to32i(esp+0x9C) = eax; //mov
loc_46DC35:
	edx = (int32_t)(intptr_t)(edi+ebp); //lea
	edx = to32i(edx+4); //mov
	cmp(ebx, to32i(edx));
	if (jge())
		goto loc_46DE31;
	eax = to32i(edx+0x14); //mov
	esi = to16i(ecx+eax); //movsx
	eax = to32i(edx+8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x70); //mov
	add(eax, esi);
	cmp(eax, edx);
	if (jge())
		goto loc_46DF96;
loc_46DC68:
	edx = to32i(esp+0x9C); //mov
	edx = to32i(edx+4); //mov
	to32i(esp+0x70) = eax; //mov
	eax = to32i(edx+0x14); //mov
	esi = to32i(ecx+eax); //mov
	eax = to32i(edx+0xC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	sar(esi, (int32_t)0x10);
	add(eax, esi);
	esi = to32i(esp+0x74); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_46DF9D;
loc_46DC9D:
	edx = to32i(esp+0xA4); //mov
	edx = to32i(edx+4); //mov
	to32i(esp+0x74) = eax; //mov
	eax = to32i(edx+0x14); //mov
	esi = to32i(ecx+eax+2); //mov
	eax = to32i(edx+0x10); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	sar(esi, (int32_t)0x10);
	edx = to32i(esp+0x78); //mov
	add(eax, esi);
	cmp(eax, edx);
	if (jge())
		goto loc_46DFA4;
loc_46DCD3:
	edx = to32i(esp+0x98); //mov
	edx = to32i(edx+4); //mov
	to32i(esp+0x78) = eax; //mov
	eax = to32i(edx+0x14); //mov
	esi = to16i(ecx+eax); //movsx
	eax = to32i(edx+8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	add(eax, esi);
	esi = to32i(esp+0x64); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_46DD04;
	eax = esi; //mov
loc_46DD04:
	edx = to32i(esp+0x94); //mov
	edx = to32i(edx+4); //mov
	to32i(esp+0x64) = eax; //mov
	eax = to32i(edx+0x14); //mov
	esi = to32i(ecx+eax); //mov
	eax = to32i(edx+0xC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	sar(esi, (int32_t)0x10);
	edx = to32i(esp+0x68); //mov
	add(eax, esi);
	cmp(eax, edx);
	if (jge())
		goto loc_46DD37;
	eax = edx; //mov
loc_46DD37:
	edx = to32i(esp+0xA0); //mov
	edx = to32i(edx+4); //mov
	to32i(esp+0x68) = eax; //mov
	eax = to32i(edx+0x10); //mov
	esi = to32i(edx+0x14); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	esi = to32i(ecx+esi+2); //mov
	sar(esi, (int32_t)0x10);
	add(eax, esi);
	esi = to32i(esp+0x6C); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_46DD6B;
	eax = esi; //mov
loc_46DD6B:
	add(ecx, (int32_t)6);
	inc(ebx);
	to32i(esp+0x6C) = eax; //mov
	goto loc_46DC35;
loc_46DD78:
	eax = to32i(esp+0x8C); //mov
	edx = to32i(esp+0x8C); //mov
	eax = to32i(eax+0x56C); //mov
	to32i(edx+0x568) = eax; //mov
	goto loc_46DA8B;
loc_46DD97:
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0xB4); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	add(eax, eax);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0xF4) = eax; //mov
	goto loc_46DB97;
loc_46DDCA:
	cmp(to32i(dword_512200), (int32_t)0);
	if (jnz())
		goto loc_46DE06;
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0xB4); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	add(edx, edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0xF4) = eax; //mov
	goto loc_46DB97;
loc_46DE06:
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0xB4); //mov
	shl(edx, (int32_t)3);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0xF4) = eax; //mov
	goto loc_46DB97;
loc_46DE31:
	ecx = to32i(esp+0x88); //mov
	edx = to32i(esp+0x90); //mov
	inc(ecx);
	add(edx, (int32_t)4);
	to32i(esp+0x88) = ecx; //mov
	to32i(esp+0x90) = edx; //mov
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_46DBFD;
	edx = to32i(esp+0x64); //mov
	esi = to32i(esp+0x70); //mov
	sub(edx, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	shl(eax, (int32_t)8);
	edi = to32i(esp+0x74); //mov
	to32i(edx+0x108) = eax; //mov
	edx = to32i(esp+0x68); //mov
	sub(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	shl(eax, (int32_t)8);
	ebp = to32i(esp+0x78); //mov
	to32i(edx+0x10C) = eax; //mov
	edx = to32i(esp+0x6C); //mov
	sub(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x8C); //mov
	shl(eax, (int32_t)8);
	to32i(edx+0x110) = eax; //mov
	eax = to32i(edx+0x108); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ecx = eax; //mov
	imul32(ecx, eax);
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x10C); //mov
	eax = to32i(esp+0x8C); //mov
	sar(edx, (int32_t)0x1F);
	eax = to32i(eax+0x10C); //mov
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(eax, eax);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_46DF1C;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_46DF1C:
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0x114) = eax; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ecx = eax; //mov
	imul32(ecx, eax);
	edx = to32i(esp+0x8C); //mov
	edx = to32i(edx+0x110); //mov
	eax = to32i(esp+0x8C); //mov
	sar(edx, (int32_t)0x1F);
	eax = to32i(eax+0x110); //mov
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(eax, eax);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_46DF7C;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_46DF7C:
	edx = to32i(esp+0x8C); //mov
	to32i(edx+0x114) = eax; //mov
	add(esp, (int32_t)0xA8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46DF96:
	eax = edx; //mov
	goto loc_46DC68;
loc_46DF9D:
	eax = esi; //mov
	goto loc_46DC9D;
loc_46DFA4:
	eax = edx; //mov
	goto loc_46DCD3;
}
Fn(void) Game::_sub_46DFB0()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_475A20(); esp += 4; //call
	eax = edx; //mov
	add(edx, (int32_t)0xC);
loc_46DFBD:
	add(eax, (int32_t)4);
	to32i(eax+0x564) = 0; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_46DFBD;
	pop32(edx);
}
Fn(void) Game::_sub_46DFD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = edx; //mov
	cmp(to32i(edx+0x30), (int32_t)0);
	if (jz())
		goto loc_46E00D;
	xor_(edx, edx);
	xor_(ecx, ecx);
loc_46DFE0:
	ebx = to32i(edi+0x30); //mov
	cmp(ecx, to32i(ebx+4));
	if (jge())
		goto loc_46E00D;
	esi = to32i(ebx+0x18); //mov
	add(esi, edx);
	test(to8i(esi), (int8_t)0xE0);
	if (jnz())
		goto loc_46DFF8;
loc_46DFF2:
	inc(ecx);
	add(edx, (int32_t)0xC);
	goto loc_46DFE0;
loc_46DFF8:
	ebx = to32i(eax+0x65C); //mov
	to32i(eax+ebx*4+0x64C) = esi; //mov
	inc(to32i(eax+0x65C));
	goto loc_46DFF2;
loc_46E00D:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46E020()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = to32i(edx+0x34); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_46E057;
loc_46E02B:
	ebx = to32i(edx+0x3C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46E03B;
	ecx = to32i(ebx+0x18); //mov
	to32i(eax+0x63C) = ecx; //mov
loc_46E03B:
	esi = to32i(edx+0x44); //mov
	test(esi, esi);
	if (jz())
		goto loc_46E04B;
	ecx = to32i(esi+0x18); //mov
	to32i(eax+0x640) = ecx; //mov
loc_46E04B:
	edi = to32i(edx+0x4C); //mov
	test(edi, edi);
	if (jnz())
		goto loc_46E062;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46E057:
	ecx = to32i(ecx+0x18); //mov
	to32i(eax+0x638) = ecx; //mov
	goto loc_46E02B;
loc_46E062:
	edx = to32i(edi+0x18); //mov
	to32i(eax+0x644) = edx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46E070()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	xor_(edx, edx);
	xor_(ecx, ecx);
loc_46E079:
	ebx = to32i(dword_513528+edx); //mov
	cmp(ecx, ebx);
	if (jz())
		goto loc_46E0B9;
	esi = to32i(ebx+0x88); //mov
	eax = ebx; //mov
	cmp(ecx, esi);
	if (jz())
		goto loc_46E0A2;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_513528+edx); //mov
	to32i(eax+0x88) = ecx; //mov
loc_46E0A2:
	edi = to32i(dword_513528+edx); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_46E0B9;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_513528+edx) = ecx; //mov
loc_46E0B9:
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0xE0);
	if (jnz())
		goto loc_46E079;
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46E0D0()
{
	push32(edx);
	xor_(eax, eax);
loc_46E0D3:
	add(eax, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_513524+eax) = edx; //mov
	cmp(eax, (int32_t)0xE0);
	if (jnz())
		goto loc_46E0D3;
	to32i(dword_4D9544) = edx; //mov
	to32i(dword_4D9534) = edx; //mov
	to32i(dword_4D9538) = edx; //mov
	to32i(dword_4D9540) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_46E100()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_4D9544) = edx; //mov
	to32i(dword_4D9534) = edx; //mov
	to32i(dword_4D9538) = edx; //mov
	to32i(dword_4D9540) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_46E120()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	eax = to32i(ebx+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_46E208(); esp += 4; //call
	to32i(esp) = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_46E1BF;
	edx = (int32_t)(intptr_t)sub_46E4F0; //mov
loc_46E149:
	eax = esi; //mov
	esp -= 4; _sub_4758C0(); esp += 4; //call
	ecx = eax; //mov
	ebx = to32i(esp); //mov
	eax = ebx; //mov
	shl(eax, (int32_t)6);
	add(eax, ebx);
	esi = (int32_t)(intptr_t)dword_4D8650; //mov
	shl(eax, (int32_t)3);
	add(esi, eax);
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(eax, edi);
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	edi = to32i(esp+0x18); //mov
	shl(eax, (int32_t)2);
	add(edx, edi);
	ebx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = ecx; //mov
	edx = to32i(edx+4); //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, ebp);
	edx = edi; //mov
	shl(eax, (int32_t)2);
	edx = to32i(edx+ebp*4+4); //mov
	ebx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = ecx; //mov
	esp -= 4; _sub_475920(); esp += 4; //call
	eax = to32i(edi+8); //mov
	ebp = to32i(ecx+0x48); //mov
	eax = to32i(eax+0xC); //mov
	sub(ebp, eax);
	to32i(ecx+0x48) = ebp; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_46E1BF:
	edx = (int32_t)(intptr_t)sub_46E600; //mov
	goto loc_46E149;
}
Fn(void) Game::_sub_46E208()
{
	static const void *const off_46E1D0[] = {
		&&loc_46E215,
		&&loc_46E233,
		&&loc_46E233,
		&&loc_46E21B,
		&&loc_46E221,
		&&loc_46E233,
		&&loc_46E233,
		&&loc_46E233,
		&&loc_46E215,
		&&loc_46E233,
		&&loc_46E22D,
		&&loc_46E227,
		&&loc_46E215,
		&&loc_46E22D,
	};
	dec(eax);
	cmp(eax, (int32_t)0xD);
	if (ja())
		goto loc_46E233;
	goto *off_46E1D0[eax];
loc_46E215:
	eax = 4; //mov
	return;
loc_46E21B:
	eax = 1; //mov
	return;
loc_46E221:
	eax = 2; //mov
	return;
loc_46E227:
	eax = 3; //mov
	return;
loc_46E22D:
	eax = 5; //mov
	return;
loc_46E233:
	xor_(eax, eax);
}
Fn(void) Game::_sub_46E240()
{
	test(eax, eax);
	if (jnz())
		goto loc_46E245;
	return;
loc_46E245:
	push32(ecx);
	cl = to8i(edx+1); //mov
	to8i(eax+0x21) = cl; //mov
	cx = to16i(edx+2); //mov
	to16i(eax+0x22) = cx; //mov
	ecx = to32i(edx+4); //mov
	to32i(eax+0x24) = ecx; //mov
	ecx = to32i(edx+8); //mov
	to32i(eax+0x28) = ecx; //mov
	ecx = to32i(edx+0xC); //mov
	to32i(eax+0x2C) = ecx; //mov
	edx = to32i(edx+0x10); //mov
	to32i(eax+0x30) = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_46E270()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x110);
	to32i(esp+0x108) = ebx; //mov
	edi = esp; //mov
	esi = eax; //mov
	push32(edi);
loc_46E286:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_46E29E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_46E286;
loc_46E29E:
	pop32(edi);
	esi = (int32_t)(intptr_t)a_geo; //mov
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
loc_46E2AF:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_46E2C7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_46E2AF;
loc_46E2C7:
	pop32(edi);
	edx = to32i(dword_4D5EF0); //mov
	xor_(ebp, ebp);
	test(edx, edx);
	if (jnz())
		goto loc_46E42C;
loc_46E2D8:
	edi = to32i(esp+0x10C); //mov
	test(edi, edi);
	if (jz())
		goto loc_46E4A5;
	add(ebp, (int32_t)0x8C);
	ecx = edi; //mov
	to32i(esp+0x104) = edi; //mov
	xor_(ebx, ebx);
	xor_(edi, edi);
loc_46E2FA:
	eax = to32i(esp+0x10C); //mov
	add(eax, ebp);
	to32i(ecx+4) = eax; //mov
	edx = to32i(eax); //mov
	add(ebp, (int32_t)0x34);
	cmp(edi, edx);
	if (jz())
		goto loc_46E32F;
	edx = to32i(esp+0x10C); //mov
	add(edx, ebp);
	to32i(eax+0x14) = edx; //mov
	eax = to32i(ecx+4); //mov
	test(to8i(eax), (int8_t)1);
	if (jz())
		goto loc_46E4B4;
	eax = to32i(eax); //mov
	inc(eax);
	imul32(eax, 6);
loc_46E32D:
	add(ebp, eax);
loc_46E32F:
	eax = to32i(ecx+4); //mov
	cmp(edi, to32i(eax+4));
	if (jz())
		goto loc_46E34C;
	edx = to32i(esp+0x10C); //mov
	add(edx, ebp);
	to32i(eax+0x18) = edx; //mov
	eax = to32i(ecx+4); //mov
	imul32(eax, to32i(eax+4), 0xC);
	add(ebp, eax);
loc_46E34C:
	cmp(ebx, (int32_t)0xC);
	if (jnz())
		goto loc_46E4BC;
loc_46E355:
	cmp(edi, to32i(ecx+4));
	if (jz())
		goto loc_46E382;
	eax = to32i(esp+0x108); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)4);
	if (jnz())
		goto loc_46E382;
	cmp(ebx, (int32_t)0xE);
	if (jnz())
		goto loc_46E4CA;
	edx = 1; //mov
loc_46E37A:
	eax = to32i(ecx+4); //mov
	esp -= 4; _sub_46ED30(); esp += 4; //call
loc_46E382:
	cmp(ebx, (int32_t)0x10);
	if (jnz())
		goto loc_46E4D1;
loc_46E38B:
	cmp(edi, to32i(ecx+4));
	if (jz())
		goto loc_46E3B8;
	eax = to32i(esp+0x108); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_46E3B8;
	cmp(ebx, (int32_t)0x12);
	if (jnz())
		goto loc_46E4DF;
	edx = 1; //mov
loc_46E3B0:
	eax = to32i(ecx+4); //mov
	esp -= 4; _sub_46ECD0(); esp += 4; //call
loc_46E3B8:
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, (int32_t)0x20);
	if (jl())
		goto loc_46E2FA;
	eax = to32i(esp+0x108); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_46E407;
	ebp = to32i(esp+0x104); //mov
	xor_(ecx, ecx);
loc_46E3E0:
	eax = to32i(ebp+4); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_46E3FE;
	edx = to32i(esp+0x104); //mov
	eax = to32i(esp+0x108); //mov
	ebx = ecx; //mov
	esp -= 4; _sub_46ED80(); esp += 4; //call
loc_46E3FE:
	inc(ecx);
	add(ebp, (int32_t)4);
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_46E3E0;
loc_46E407:
	edx = to32i(esp+0x108); //mov
	eax = to32i(esp+0x104); //mov
	esp -= 4; _sub_476F60(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	add(esp, (int32_t)0x110);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46E42C:
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	push32(ebp);
	ecx = (int32_t)(intptr_t)(esp+0x100); //lea
	xor_(ebx, ebx);
	push32(eax);
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_49D3CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46E2D8;
	ecx = (int32_t)(intptr_t)aCNfs2seGameC_8; //mov
	ebx = 0x4DE; //mov
	edx = to32i(esp+0x100); //mov
	eax = (int32_t)(intptr_t)aCargeo; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = to32i(esp+0xFC); //mov
	ebx = to32i(esp+0x100); //mov
	ecx = to32i(dword_4D5EF0); //mov
	to32i(esp+0x10C) = eax; //mov
	add(ecx, esi);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	goto loc_46E2D8;
loc_46E4A5:
	_ExitProcess1();
loc_46E4B4:
	imul32(eax, to32i(eax), 6);
	goto loc_46E32D;
loc_46E4BC:
	cmp(ebx, (int32_t)0xE);
	if (jz())
		goto loc_46E355;
	goto loc_46E382;
loc_46E4CA:
	edx = edi; //mov
	goto loc_46E37A;
loc_46E4D1:
	cmp(ebx, (int32_t)0x12);
	if (jz())
		goto loc_46E38B;
	goto loc_46E3B8;
loc_46E4DF:
	edx = edi; //mov
	goto loc_46E3B0;
}
Fn(void) Game::_sub_46E4F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	esi = eax; //mov
	ecx = edx; //mov
	ebx = to32i(ecx+0x2E4); //mov
	edx = 0x2A; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46E58A;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)4);
	if (jz())
		goto loc_46E58A;
	ebp = to32i(dword_545224); //mov
	xor_(edx, edx);
	cmp(ebp, (int32_t)0xFFFFCE00);
	if (jle())
		goto loc_46E5AF;
	cmp(ebp, (int32_t)0x3200);
	if (jge())
		goto loc_46E5AF;
	test(ebp, ebp);
	if (jle())
		goto loc_46E5A9;
	edx = ebp; //mov
loc_46E540:
	eax = to32i(dword_5222E0); //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	cmp(eax, (int32_t)7);
	if (jnz())
		goto loc_46E576;
	cmp(to32i(ecx+0x2E4), (int32_t)0);
	if (jle())
		goto loc_46E576;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)7);
	if (jnz())
		goto loc_46E5E0;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
loc_46E574:
	edx = eax; //mov
loc_46E576:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	cmp(eax, (int32_t)0x2A);
	if (jge())
		goto loc_46E5EB;
loc_46E588:
	edx = eax; //mov
loc_46E58A:
	imul32(edx, to32i(ecx+0x2E4));
	eax = (int32_t)(intptr_t)(esi+0x20); //lea
	xor_(ebx, ebx);
	esp -= 4; _sub_49E780(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_46E610(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46E5A9:
	edx = ebp; //mov
	neg(edx);
	goto loc_46E540;
loc_46E5AF:
	ebx = to32i(dword_545224); //mov
	cmp(ebx, (int32_t)0x4600);
	if (jle())
		goto loc_46E5C9;
	edx = 0x7F00; //mov
	sub(edx, ebx);
	goto loc_46E540;
loc_46E5C9:
	cmp(ebx, (int32_t)0xFFFFBA00);
	if (jge())
		goto loc_46E540;
	edx = (int32_t)(intptr_t)(ebx+0x7F00); //lea
	goto loc_46E540;
loc_46E5E0:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	goto loc_46E574;
loc_46E5EB:
	eax = 0x2A; //mov
	goto loc_46E588;
}
Fn(void) Game::_sub_46E600()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_46E610(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_46E610()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	eax = to32i(dword_540F48); //mov
	ecx = to32i(dword_4D928C); //mov
	xor_(edi, edi);
	cmp(eax, ecx);
	if (jz())
		goto loc_46E6EE;
	cmp(to32i(edx+0x680), (int32_t)0x2C0000);
	if (jle())
		goto loc_46E6FD;
	eax = to32i(edx+0x67C); //mov
	cmp(eax, (int32_t)0x2666);
	if (jle())
		goto loc_46E6F3;
	ecx = eax; //mov
loc_46E64E:
	cmp(ecx, (int32_t)0x28F);
	if (jle())
		goto loc_46E67D;
	edi = to32i(edx+0x15C); //mov
	test(edi, edi);
	if (jle())
		goto loc_46E708;
	eax = edi; //mov
loc_46E666:
	add(eax, (int32_t)0x28F);
	cmp(eax, (int32_t)0xA3D);
	if (jle())
		goto loc_46E711;
	eax = 0xA3D; //mov
loc_46E67B:
	edi = eax; //mov
loc_46E67D:
	test(ebx, ebx);
	if (jz())
		goto loc_46E73F;
	cmp(to32i(edx+0x2F4), (int32_t)0);
	if (jz())
		goto loc_46E69A;
	cmp(ecx, (int32_t)0xB333);
	if (jle())
		goto loc_46E735;
loc_46E69A:
	esp -= 4; _sub_488074(); esp += 4; //call
	shr(eax, (int32_t)8);
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xC);
	sbb(eax, edx);
	sar(eax, (int32_t)0xC);
	test(eax, eax);
	if (jle())
		goto loc_46E762;
	esp -= 4; _sub_488074(); esp += 4; //call
	shr(eax, (int32_t)8);
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xC);
	sbb(eax, edx);
	sar(eax, (int32_t)0xC);
	neg(eax);
	sub(eax, edi);
	to32i(esi+0x84) = eax; //mov
loc_46E6EE:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_46E6F3:
	ecx = 0x2666; //mov
	goto loc_46E64E;
loc_46E6FD:
	ecx = to32i(edx+0x67C); //mov
	goto loc_46E64E;
loc_46E708:
	eax = edi; //mov
	neg(eax);
	goto loc_46E666;
loc_46E711:
	ebp = to32i(edx+0x15C); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_46E727;
	eax = ebp; //mov
	add(eax, (int32_t)0x28F);
	goto loc_46E67B;
loc_46E727:
	eax = ebp; //mov
	neg(eax);
	add(eax, (int32_t)0x28F);
	goto loc_46E67B;
loc_46E735:
	ecx = 0xB333; //mov
	goto loc_46E69A;
loc_46E73F:
	cmp(to32i(edx+0x2F8), (int32_t)0);
	if (jz())
		goto loc_46E69A;
	cmp(ecx, (int32_t)0xB333);
	if (jg())
		goto loc_46E69A;
	ecx = 0xB333; //mov
	goto loc_46E69A;
loc_46E762:
	esp -= 4; _sub_488074(); esp += 4; //call
	shr(eax, (int32_t)8);
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xC);
	sbb(eax, edx);
	sar(eax, (int32_t)0xC);
	neg(eax);
	neg(eax);
	sub(eax, edi);
	to32i(esi+0x84) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_46E7A0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4C);
	esi = eax; //mov
	ecx = edx; //mov
	cmp(to32i(edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_46E94E;
	cmp(to32i(ecx+0xBC), (int32_t)0x20000);
	if (jge())
		goto loc_46E94E;
	to32i(ecx+0x664) = 0; //mov
loc_46E7D2:
	eax = to32i(ecx+0x664); //mov
	cmp(eax, (int32_t)0xFFFFC000);
	if (jle())
		goto loc_46E96D;
loc_46E7E3:
	ebp = to32i(ecx+0x664); //mov
	cmp(ebp, (int32_t)0x4000);
	if (jge())
		goto loc_46E963;
	eax = ebp; //mov
loc_46E7F7:
	to32i(ecx+0x664) = eax; //mov
	eax = to32i(ecx+0x668); //mov
	cmp(eax, (int32_t)0x4CCC);
	if (jge())
		goto loc_46E815;
	cmp(eax, (int32_t)0xFFFFB334);
	if (jle())
		goto loc_46E981;
loc_46E815:
	edx = to32i(ecx+0x668); //mov
	cmp(edx, (int32_t)0x4CCC);
	if (jge())
		goto loc_46E977;
	eax = edx; //mov
loc_46E829:
	edx = eax; //mov
	to32i(ecx+0x668) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_49E7E0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	edx = to32i(ecx+0x664); //mov
	ebx = (int32_t)(intptr_t)(esi+0x20); //lea
	esp -= 4; _sub_49E720(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = esp; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	cmp(to32i(ecx+0x65C), (int32_t)0);
	if (jz())
		goto loc_46E89C;
	cmp(to8i(ecx+0x2D8), (int8_t)0);
	if (jz())
		goto loc_46E98B;
	to32i(esp+0x48) = 1; //mov
loc_46E873:
	ebp = to32i(ecx+0x65C); //mov
	xor_(edx, edx);
	test(ebp, ebp);
	if (jle())
		goto loc_46E89C;
	eax = ecx; //mov
loc_46E881:
	esi = to32i(eax+0x64C); //mov
	bl = to8i(esp+0x48); //mov
	to8i(esi+1) = bl; //mov
	inc(edx);
	ebx = to32i(ecx+0x65C); //mov
	add(eax, (int32_t)4);
	cmp(edx, ebx);
	if (jl())
		goto loc_46E881;
loc_46E89C:
	esi = to32i(ecx+0x2B8); //mov
	test(esi, esi);
	if (jle())
		goto loc_46E996;
	eax = esi; //mov
loc_46E8AC:
	edx = to32i(dword_540F48); //mov
	cmp(edx, to32i(dword_4D928C));
	if (jz())
		goto loc_46E8C0;
	inc(to32i(ecx+0x648));
loc_46E8C0:
	cmp(eax, (int32_t)0x140000);
	if (jle())
		goto loc_46E99F;
	eax = 3; //mov
loc_46E8D0:
	edx = eax; //mov
loc_46E8D2:
	cmp(to32i(ecx+0x2F4), (int32_t)0);
	if (jz())
		goto loc_46E8E0;
	edx = 3; //mov
loc_46E8E0:
	cmp(to32i(ecx+0x2F8), (int32_t)0);
	if (jz())
		goto loc_46E8EE;
	eax = 3; //mov
loc_46E8EE:
	cmp(to32i(ecx+0x280), (int32_t)2);
	if (jnz())
		goto loc_46E9EF;
	cmp(to32i(ecx+0xBC), (int32_t)0x20000);
	if (jge())
		goto loc_46E9EF;
	to32i(ecx+0x2FC) = 3; //mov
loc_46E915:
	xor_(eax, eax);
loc_46E917:
	test(to8i(ecx+0x2FC), (int8_t)2);
	if (jz())
		goto loc_46E922;
	xor_(edx, edx);
loc_46E922:
	ebx = to32i(ecx+0x638); //mov
	to8i(ebx+1) = al; //mov
	ebx = to32i(ecx+0x63C); //mov
	to8i(ebx+1) = al; //mov
	eax = to32i(ecx+0x640); //mov
	to8i(eax+1) = dl; //mov
	eax = to32i(ecx+0x644); //mov
	to8i(eax+1) = dl; //mov
	add(esp, (int32_t)0x4C);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46E94E:
	cmp(to32i(ecx+0x664), (int32_t)0x4000);
	if (jl())
		goto loc_46E7D2;
	goto loc_46E7E3;
loc_46E963:
	eax = 0x4000; //mov
	goto loc_46E7F7;
loc_46E96D:
	eax = 0xFFFFC000; //mov
	goto loc_46E7F7;
loc_46E977:
	eax = 0x4CCC; //mov
	goto loc_46E829;
loc_46E981:
	eax = 0xFFFFB334; //mov
	goto loc_46E829;
loc_46E98B:
	xor_(esi, esi);
	to32i(esp+0x48) = esi; //mov
	goto loc_46E873;
loc_46E996:
	eax = esi; //mov
	neg(eax);
	goto loc_46E8AC;
loc_46E99F:
	cmp(eax, (int32_t)0x70000);
	if (jle())
		goto loc_46E9B5;
	eax = to32i(ecx+0x648); //mov
	and_(eax, (int32_t)1);
	inc(eax);
	goto loc_46E8D0;
loc_46E9B5:
	cmp(eax, (int32_t)0x28000);
	if (jle())
		goto loc_46E9CD;
	eax = to32i(ecx+0x648); //mov
	and_(eax, (int32_t)2);
	sar(eax, (int32_t)1);
	inc(eax);
	goto loc_46E8D0;
loc_46E9CD:
	cmp(eax, (int32_t)0x3333);
	if (jle())
		goto loc_46E9E6;
	eax = to32i(ecx+0x648); //mov
	and_(eax, (int32_t)4);
	sar(eax, (int32_t)2);
	inc(eax);
	goto loc_46E8D0;
loc_46E9E6:
	xor_(edx, edx);
	xor_(eax, eax);
	goto loc_46E8D2;
loc_46E9EF:
	cmp(to32i(ecx+0x2FC), (int32_t)0);
	if (jz())
		goto loc_46E922;
	test(to8i(ecx+0x2FC), (int8_t)1);
	if (jnz())
		goto loc_46E915;
	goto loc_46E917;
}
Fn(void) Game::_sub_46EA10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	xor_(eax, eax);
	edx = 1; //mov
	al = to8i(ecx+0x8C); //mov
	sub(edx, eax);
	if (jnz())
		goto loc_46EA42;
loc_46EA29:
	eax = 0xFFFF; //mov
	to32i(esp) = eax; //mov
	eax = esp; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46EA42:
	ebx = 0x3FF; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGameC_8; //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	esp -= 4; _sub_44A930(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46EA29;
	edx = to32i(ecx+0x18); //mov
	test(edx, edx);
	if (jz())
		goto loc_46EA29;
	ax = to16i(edx+2); //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(esp) = eax; //mov
	eax = esp; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46EA80()
{
	push32(ebx);
	push32(edi);
	push32(ebp);
	cmp(to32i(edx+0x2B8), (int32_t)0x2C0000);
	if (jle())
		goto loc_46EABB;
	edi = to32i(edx+0x660); //mov
	cmp(edi, (int32_t)0x2147);
	if (jge())
		goto loc_46EAA9;
	ebp = (int32_t)(intptr_t)(edi+0x147); //lea
	to32i(edx+0x660) = ebp; //mov
loc_46EAA9:
	add(eax, (int32_t)0x20);
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(ebx);
	return;
loc_46EABB:
	ebx = to32i(edx+0x660); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46EAA9;
	push32(esi);
	esi = (int32_t)(intptr_t)(ebx-0x147); //lea
	to32i(edx+0x660) = esi; //mov
	pop32(esi);
	add(eax, (int32_t)0x20);
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(ebx);
}
Fn(void) Game::_sub_46EAF0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	ecx = edx; //mov
	cmp(to32i(edx+0x660), (int32_t)0);
	if (jle())
		goto loc_46EB6D;
	edx = 1; //mov
loc_46EB07:
	ah = to8i(ecx+0x1F4); //mov
	esi = edx; //mov
	test(ah, (int8_t)4);
	if (jz())
		goto loc_46EB74;
	edi = to32i(ecx+0x2F0); //mov
	cmp(edi, (int32_t)0x3E8);
	if (jle())
		goto loc_46EB86;
	edx = edi; //mov
	shl(edx, (int32_t)0x10);
	edi = 0x2710; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_46EB7F;
loc_46EB3A:
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(eax, (int32_t)5);
	imul32(esi, eax);
	to32i(ecx+0x660) = esi; //mov
loc_46EB4F:
	ebp = to32i(ecx+0x660); //mov
	neg(ebp);
	eax = (int32_t)(intptr_t)(ebx+0x20); //lea
	edx = ebp; //mov
	to32i(ecx+0x660) = ebp; //mov
	esp -= 4; _sub_49E7E0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46EB6D:
	edx = 0xFFFFFFFF; //mov
	goto loc_46EB07;
loc_46EB74:
	shl(edx, (int32_t)0xB);
	to32i(ecx+0x660) = edx; //mov
	goto loc_46EB4F;
loc_46EB7F:
	eax = 0x10000; //mov
	goto loc_46EB3A;
loc_46EB86:
	to32i(ecx+0x660) = 0; //mov
	goto loc_46EB4F;
}
Fn(void) Game::_sub_46EBA0()
{
	push32(ebx);
	push32(ecx);
	push32(edi);
	ecx = eax; //mov
	ebx = to32i(edx+0x2B8); //mov
	xor_(eax, eax);
	cmp(ebx, (int32_t)0xA0000);
	if (jle())
		goto loc_46EBD0;
	cmp(ebx, (int32_t)0x430000);
	if (jle())
		goto loc_46EBC2;
	eax = 0xA3D; //mov
loc_46EBC2:
	cmp(to8i(edx+0x2D8), (int8_t)0x64);
	if (jbe())
		goto loc_46EBD0;
	eax = 0x147A; //mov
loc_46EBD0:
	ebx = (int32_t)(intptr_t)(eax-0x147); //lea
	edi = to32i(edx+0x660); //mov
	cmp(ebx, edi);
	if (jg())
		goto loc_46EC07;
	add(eax, (int32_t)0x147);
	cmp(eax, edi);
	if (jge())
		goto loc_46EBF5;
	eax = (int32_t)(intptr_t)(edi-0x28F); //lea
	to32i(edx+0x660) = eax; //mov
loc_46EBF5:
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46EC07:
	ebx = (int32_t)(intptr_t)(edi+0x51E); //lea
	to32i(edx+0x660) = ebx; //mov
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46EC30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	ebx = to32i(edx+0x2B8); //mov
	xor_(eax, eax);
	cmp(ebx, (int32_t)0xE0000);
	if (jle())
		goto loc_46EC5B;
	bl = to8i(edx+0x2D8); //mov
	eax = 0xF5C; //mov
	cmp(bl, (int8_t)0x64);
	if (jbe())
		goto loc_46EC5B;
	eax = 0x28F5; //mov
loc_46EC5B:
	ebx = (int32_t)(intptr_t)(eax-0x147); //lea
	esi = to32i(edx+0x660); //mov
	cmp(ebx, esi);
	if (jg())
		goto loc_46EC93;
	add(eax, (int32_t)0x147);
	cmp(eax, esi);
	if (jge())
		goto loc_46EC80;
	ebp = (int32_t)(intptr_t)(esi-0x51E); //lea
	to32i(edx+0x660) = ebp; //mov
loc_46EC80:
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46EC93:
	eax = (int32_t)(intptr_t)(esi+0x51E); //lea
	to32i(edx+0x660) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x20); //lea
	edx = to32i(edx+0x660); //mov
	esp -= 4; _sub_49E720(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46ECC0()
{
	add(eax, (int32_t)0x20);
	xor_(edx, edx);
	_sub_49E720(); return; //jmp
}
Fn(void) Game::_sub_46ECD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = to32i(eax+0x14); //mov
	eax = to32i(eax+0x18); //mov
	test(eax, eax);
	if (jz())
		goto loc_46ED04;
	test(to8i(eax), (int8_t)2);
	if (jz())
		goto loc_46ED04;
	ebx = (int32_t)(intptr_t)(eax+4); //lea
	test(edx, edx);
	if (jz())
		goto loc_46ED09;
loc_46ECEA:
	xor_(edx, edx);
	dl = to8i(eax+4); //mov
	imul32(edx, 6);
	di = to16i(ecx+edx); //mov
	sub(edi, (int32_t)5);
	inc(eax);
	to16i(ecx+edx) = di; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_46ECEA;
loc_46ED04:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46ED09:
	xor_(edx, edx);
	dl = to8i(eax+4); //mov
	imul32(edx, 6);
	si = to16i(ecx+edx); //mov
	add(esi, (int32_t)5);
	inc(eax);
	to16i(ecx+edx) = si; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_46ED09;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46ED30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = to32i(eax+0x14); //mov
	eax = to32i(eax+0x18); //mov
	ebx = (int32_t)(intptr_t)(eax+4); //lea
	test(edx, edx);
	if (jz())
		goto loc_46ED5E;
loc_46ED41:
	xor_(edx, edx);
	dl = to8i(eax+4); //mov
	imul32(edx, 6);
	di = to16i(ecx+edx); //mov
	sub(edi, (int32_t)5);
	inc(eax);
	to16i(ecx+edx) = di; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_46ED41;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46ED5E:
	xor_(edx, edx);
	dl = to8i(eax+4); //mov
	imul32(edx, 6);
	si = to16i(ecx+edx); //mov
	add(esi, (int32_t)5);
	inc(eax);
	to16i(ecx+edx) = si; //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_46ED5E;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46ED80()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x14DC);
	to32i(esp+0x14C4) = edx; //mov
	to32i(esp+0x14C0) = ebx; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, edx);
	eax = to32i(eax+4); //mov
	to32i(esp+0x14CC) = eax; //mov
	eax = to32i(eax+0x14); //mov
	to32i(esp+0x14D8) = eax; //mov
	eax = to32i(esp+0x14CC); //mov
	ecx = to32i(eax); //mov
	to32i(eax+0x1C) = 0; //mov
	cmp(ecx, (int32_t)0x7D);
	if (jg())
		goto loc_46F0E9;
	cmp(to32i(eax+4), (int32_t)0x41);
	if (jg())
		goto loc_46F0E9;
	push32(edi);
	push32(esi);
	xor_(eax, eax);
loc_46EDDA:
	add(eax, (int32_t)4);
	xor_(esi, esi);
	to32i(esp+eax+0x12B0) = esi; //mov
	cmp(eax, (int32_t)0x1F4);
	if (jnz())
		goto loc_46EDDA;
	eax = to32i(esp+0x14D4); //mov
	edi = to32i(eax+4); //mov
	xor_(ebp, ebp);
	test(edi, edi);
	if (jle())
		goto loc_46EF46;
	to32i(esp+0x14D8) = esi; //mov
loc_46EE08:
	eax = to32i(esp+0x14D4); //mov
	edx = to32i(esp+0x14D8); //mov
	eax = to32i(eax+0x18); //mov
	add(edx, eax);
	to32i(esp+0x14C0) = edx; //mov
	test(to8i(edx), (int8_t)2);
	if (jnz())
		goto loc_46F0F2;
	edx = to32i(esp+0x14C0); //mov
	xor_(eax, eax);
	al = to8i(edx+6); //mov
	imul32(eax, 6);
	xor_(ebx, ebx);
	bl = to8i(edx+5); //mov
	imul32(ebx, 6);
	ecx = to32i(esp+0x14E0); //mov
	add(ecx, eax);
	add(ebx, to32i(esp+0x14E0));
	xor_(eax, eax);
	al = to8i(edx+4); //mov
	imul32(eax, 6);
	edx = to32i(esp+0x14E0); //mov
	edi = 3; //mov
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0x14B4); //lea
	to32i(esp+0x14C4) = edi; //mov
	esp -= 4; _sub_46F490(); esp += 4; //call
loc_46EE7B:
	eax = to32i(esp+0x14C0); //mov
	test(to8i(eax), (int8_t)4);
	if (jz())
		goto loc_46EEB7;
	esi = to32i(esp+0x14B8); //mov
	edi = to32i(esp+0x14BC); //mov
	ebx = to32i(esp+0x14B4); //mov
	neg(esi);
	neg(edi);
	neg(ebx);
	to32i(esp+0x14B8) = esi; //mov
	to32i(esp+0x14BC) = edi; //mov
	to32i(esp+0x14B4) = ebx; //mov
loc_46EEB7:
	cmp(ebp, (int32_t)0x41);
	if (jge())
		goto loc_46EED4;
	edi = to32i(esp+0x14D8); //mov
	esi = (int32_t)(intptr_t)(esp+0x14B4); //lea
	edi = (int32_t)(intptr_t)(esp+edi+0xFA8); //lea
	movsd();
	movsd();
	movsd();
loc_46EED4:
	eax = to32i(esp+0x14C4); //mov
	xor_(ecx, ecx);
	test(eax, eax);
	if (jle())
		goto loc_46EF2D;
	ebx = to32i(esp+0x14C0); //mov
loc_46EEE8:
	xor_(edx, edx);
	dl = to8i(ebx+4); //mov
	cmp(edx, (int32_t)0x7D);
	if (jge())
		goto loc_46EF20;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	esi = to32i(esp+eax+0x12B4); //mov
	cmp(esi, (int32_t)8);
	if (jge())
		goto loc_46EF20;
	shl(edx, (int32_t)5);
	shl(esi, (int32_t)2);
	edi = to32i(esp+eax+0x12B4); //mov
	add(esi, edx);
	inc(edi);
	to32i(esp+esi+8) = ebp; //mov
	to32i(esp+eax+0x12B4) = edi; //mov
loc_46EF20:
	edx = to32i(esp+0x14C4); //mov
	inc(ecx);
	inc(ebx);
	cmp(ecx, edx);
	if (jl())
		goto loc_46EEE8;
loc_46EF2D:
	add(to32i(esp+0x14D8), (int32_t)0xC);
	eax = to32i(esp+0x14D4); //mov
	inc(ebp);
	cmp(ebp, to32i(eax+4));
	if (jl())
		goto loc_46EE08;
loc_46EF46:
	edx = to32i(dword_4D9534); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = (int32_t)(intptr_t)dword_513848; //mov
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	add(edx, eax);
	eax = to32i(esp+0x14D4); //mov
	to32i(esp+0x14DC) = ecx; //mov
	ebx = to32i(eax); //mov
	to32i(eax+0x1C) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_46F0D0;
	edi = to32i(esp+0x14E0); //mov
	to32i(esp+0x14D0) = ecx; //mov
	xor_(ebp, ebp);
loc_46EF8C:
	xor_(eax, eax);
	ebx = to32i(esp+ebp+0x12B4); //mov
	to32i(esp+0x14AC) = eax; //mov
	to32i(esp+0x14A8) = eax; //mov
	to32i(esp+0x14B0) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_46F056;
	ecx = to32i(esp+0x14D0); //mov
	esi = ebp; //mov
	eax = to32i(esp+ebp+0x12B4); //mov
	xor_(ebx, ebx);
	test(eax, eax);
	if (jle())
		goto loc_46F011;
loc_46EFC8:
	edx = to32i(esp+ecx+8); //mov
	imul32(edx, 0xC);
	eax = to32i(esp+edx+0xFA8); //mov
	add(to32i(esp+0x14A8), eax);
	eax = to32i(esp+edx+0xFAC); //mov
	add(ecx, (int32_t)4);
	add(to32i(esp+0x14AC), eax);
	eax = to32i(esp+edx+0xFB0); //mov
	edx = to32i(esp+0x14B0); //mov
	inc(ebx);
	add(edx, eax);
	eax = to32i(esp+esi+0x12B4); //mov
	to32i(esp+0x14B0) = edx; //mov
	cmp(ebx, eax);
	if (jl())
		goto loc_46EFC8;
loc_46F011:
	push32(0xC);
	ebx = (int32_t)(intptr_t)(esp+0x14AC); //lea
	edx = to32i(esp+0x14CC); //mov
	eax = to32i(esp+0x14D0); //mov
	ecx = edi; //mov
	esp -= 4; _sub_46F160(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x14A8); //lea
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x14A8); //lea
	esp -= 4; _sub_45E990(); esp += 4; //call
	cmp(to16i(edi), (int16_t)0);
	if (jnz())
		goto loc_46F056;
	xor_(edx, edx);
	to32i(esp+0x14A8) = edx; //mov
loc_46F056:
	ecx = to32i(esp+0x14DC); //mov
	edx = to32i(dword_4D9534); //mov
	add(edx, ecx);
	cmp(edx, (int32_t)0x1388);
	if (jge())
		goto loc_46F097;
	imul32(edx, 0xC);
	eax = to32i(esp+0x14A8); //mov
	to32i(dword_513848+edx) = eax; //mov
	eax = to32i(esp+0x14AC); //mov
	to32i(dword_51384C+edx) = eax; //mov
	eax = to32i(esp+0x14B0); //mov
	to32i(dword_513850+edx) = eax; //mov
loc_46F097:
	eax = to32i(esp+0x14D0); //mov
	edx = to32i(esp+0x14DC); //mov
	add(eax, (int32_t)0x20);
	inc(edx);
	to32i(esp+0x14D0) = eax; //mov
	to32i(esp+0x14DC) = edx; //mov
	eax = edx; //mov
	edx = to32i(esp+0x14D4); //mov
	add(ebp, (int32_t)4);
	ecx = to32i(edx); //mov
	add(edi, (int32_t)6);
	cmp(eax, ecx);
	if (jl())
		goto loc_46EF8C;
loc_46F0D0:
	eax = to32i(esp+0x14D4); //mov
	ebx = to32i(dword_4D9534); //mov
	eax = to32i(eax); //mov
	add(ebx, eax);
	to32i(dword_4D9534) = ebx; //mov
	pop32(esi);
	pop32(edi);
loc_46F0E9:
	add(esp, (int32_t)0x14DC);
	pop32(ebp);
	pop32(ecx);
	return;
loc_46F0F2:
	to32i(esp+0x14C4) = 4; //mov
	edx = to32i(esp+0x14C0); //mov
	xor_(eax, eax);
	al = to8i(edx+7); //mov
	imul32(eax, 6);
	ecx = to32i(esp+0x14E0); //mov
	add(eax, ecx);
	push32(eax);
	xor_(eax, eax);
	al = to8i(edx+6); //mov
	imul32(eax, 6);
	add(ecx, eax);
	xor_(eax, eax);
	al = to8i(edx+5); //mov
	imul32(eax, 6);
	ebx = to32i(esp+0x14E4); //mov
	add(ebx, eax);
	xor_(eax, eax);
	al = to8i(edx+4); //mov
	imul32(eax, 6);
	edx = to32i(esp+0x14E4); //mov
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0x14B8); //lea
	esp -= 4; _sub_46F430(); esp += 4; //call
	goto loc_46EE7B;
}
Fn(void) Game::_sub_46F160()
{
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	to32i(esp+0x10) = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	ebp = ecx; //mov
	xor_(edx, edx);
	ecx = to32i(esp+0x10); //mov
	to32i(esp+0x1C) = edx; //mov
	cmp(ecx, (int32_t)0xA);
	if (jz())
		goto loc_46F1D3;
	cmp(ecx, (int32_t)9);
	if (jz())
		goto loc_46F1D3;
	cmp(ecx, (int32_t)2);
	if (jz())
		goto loc_46F1D3;
	cmp(ecx, (int32_t)0x14);
	if (jge())
		goto loc_46F1CA;
	push32(edi);
	push32(esi);
	to32i(esp+0x1C) = eax; //mov
	to32i(esp+0x20) = edx; //mov
loc_46F196:
	eax = to32i(esp+0x1C); //mov
	eax = to32i(eax+4); //mov
	to32i(esp+0x28) = eax; //mov
	ecx = to32i(eax+4); //mov
	edi = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_46F1D7;
loc_46F1AB:
	ecx = to32i(esp+0x20); //mov
	edx = to32i(esp+0x1C); //mov
	inc(ecx);
	add(edx, (int32_t)4);
	to32i(esp+0x20) = ecx; //mov
	to32i(esp+0x1C) = edx; //mov
	cmp(ecx, (int32_t)0x14);
	if (jl())
		goto loc_46F196;
	edx = to32i(esp+0x24); //mov
	pop32(esi);
	pop32(edi);
loc_46F1CA:
	eax = edx; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	esp += 4; return;
loc_46F1D3:
	xor_(edx, edx);
	goto loc_46F1CA;
loc_46F1D7:
	eax = to32i(esp+0x20); //mov
	cmp(eax, to32i(esp+0x18));
	if (jz())
		goto loc_46F1AB;
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_46F1AB;
	cmp(eax, (int32_t)0xA);
	if (jz())
		goto loc_46F1AB;
	cmp(eax, (int32_t)9);
	if (jz())
		goto loc_46F1AB;
	test(eax, eax);
	if (jz())
		goto loc_46F1AB;
	cmp(eax, (int32_t)0xB);
	if (jz())
		goto loc_46F1AB;
	eax = to32i(esp+0x28); //mov
	xor_(esi, esi);
	edx = to32i(eax+4); //mov
	to32i(esp+0x30) = esi; //mov
	test(edx, edx);
	if (jle())
		goto loc_46F1AB;
	to32i(esp+0x2C) = esi; //mov
loc_46F20E:
	esi = to32i(esp+0x28); //mov
	edx = to32i(esp+0x2C); //mov
	esi = to32i(esi+0x18); //mov
	add(esi, edx);
	ah = to8i(esi); //mov
	xor_(ecx, ecx);
	test(ah, (int8_t)2);
	if (jz())
		goto loc_46F34F;
	xor_(edx, edx);
	dl = to8i(esi+4); //mov
	imul32(edx, 6);
	ebx = to32i(esp+0x3C); //mov
	eax = ebp; //mov
	add(edx, edi);
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46F2F5;
loc_46F245:
	xor_(eax, eax);
	al = to8i(esi+7); //mov
	imul32(eax, 6);
	xor_(ecx, ecx);
	cl = to8i(esi+6); //mov
	imul32(ecx, 6);
	xor_(edx, edx);
	dl = to8i(esi+4); //mov
	imul32(edx, 6);
	add(eax, edi);
	push32(eax);
	xor_(eax, eax);
	al = to8i(esi+5); //mov
	imul32(eax, 6);
	add(ecx, edi);
	ebx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	add(edx, edi);
	esp -= 4; _sub_46F430(); esp += 4; //call
loc_46F278:
	ecx = 1; //mov
loc_46F27D:
	test(to8i(esi), (int8_t)4);
	if (jz())
		goto loc_46F2A0;
	esi = to32i(esp+0xC); //mov
	eax = to32i(esp+0x10); //mov
	ebx = to32i(esp+8); //mov
	neg(esi);
	neg(eax);
	neg(ebx);
	to32i(esp+0xC) = esi; //mov
	to32i(esp+0x10) = eax; //mov
	to32i(esp+8) = ebx; //mov
loc_46F2A0:
	test(ecx, ecx);
	if (jz())
		goto loc_46F2CD;
	edx = to32i(esp+0x14); //mov
	eax = to32i(esp+8); //mov
	add(to32i(edx), eax);
	ebx = to32i(edx+4); //mov
	eax = to32i(esp+0xC); //mov
	add(ebx, eax);
	to32i(edx+4) = ebx; //mov
	esi = to32i(edx+8); //mov
	add(esi, to32i(esp+0x10));
	eax = to32i(esp+0x24); //mov
	inc(eax);
	to32i(edx+8) = esi; //mov
	to32i(esp+0x24) = eax; //mov
loc_46F2CD:
	ecx = to32i(esp+0x2C); //mov
	ebx = to32i(esp+0x30); //mov
	edx = to32i(esp+0x28); //mov
	add(ecx, (int32_t)0xC);
	inc(ebx);
	esi = to32i(edx+4); //mov
	to32i(esp+0x2C) = ecx; //mov
	to32i(esp+0x30) = ebx; //mov
	cmp(ebx, esi);
	if (jge())
		goto loc_46F1AB;
	goto loc_46F20E;
loc_46F2F5:
	xor_(edx, edx);
	dl = to8i(esi+5); //mov
	imul32(edx, 6);
	ebx = to32i(esp+0x3C); //mov
	eax = ebp; //mov
	add(edx, edi);
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46F245;
	al = to8i(esi+6); //mov
	imul32(eax, 6);
	ebx = to32i(esp+0x3C); //mov
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = ebp; //mov
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46F245;
	al = to8i(esi+7); //mov
	imul32(eax, 6);
	ebx = to32i(esp+0x3C); //mov
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = ebp; //mov
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46F245;
	goto loc_46F27D;
loc_46F34F:
	xor_(edx, edx);
	dl = to8i(esi+4); //mov
	imul32(edx, 6);
	ebx = to32i(esp+0x3C); //mov
	eax = ebp; //mov
	add(edx, edi);
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46F380;
	al = to8i(esi+5); //mov
	imul32(eax, 6);
	ebx = to32i(esp+0x3C); //mov
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = ebp; //mov
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46F3AD;
loc_46F380:
	xor_(ecx, ecx);
	cl = to8i(esi+6); //mov
	imul32(ecx, 6);
	xor_(ebx, ebx);
	bl = to8i(esi+5); //mov
	imul32(ebx, 6);
	xor_(eax, eax);
	al = to8i(esi+4); //mov
	imul32(eax, 6);
	add(ecx, edi);
	add(ebx, edi);
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_46F490(); esp += 4; //call
	goto loc_46F278;
loc_46F3AD:
	al = to8i(esi+6); //mov
	imul32(eax, 6);
	ebx = to32i(esp+0x3C); //mov
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = ebp; //mov
	esp -= 4; _sub_46F3D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46F380;
	goto loc_46F27D;
}
Fn(void) Game::_sub_46F3D0()
{
	push32(ecx);
	push32(esi);
	esi = to16i(edx); //movsx
	ecx = to16i(eax); //movsx
	sub(ecx, esi);
	test(ecx, ecx);
	if (jle())
		goto loc_46F413;
loc_46F3DE:
	cmp(ecx, ebx);
	if (jg())
		goto loc_46F40E;
	esi = to32i(edx); //mov
	ecx = to32i(eax); //mov
	sar(esi, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	sub(ecx, esi);
	test(ecx, ecx);
	if (jle())
		goto loc_46F417;
loc_46F3F2:
	cmp(ecx, ebx);
	if (jg())
		goto loc_46F40E;
	ecx = to32i(eax+2); //mov
	eax = to32i(edx+2); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(ecx, eax);
	eax = ecx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_46F41B;
	cmp(eax, ebx);
	if (jle())
		goto loc_46F426;
loc_46F40E:
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
	return;
loc_46F413:
	neg(ecx);
	goto loc_46F3DE;
loc_46F417:
	neg(ecx);
	goto loc_46F3F2;
loc_46F41B:
	neg(eax);
	cmp(eax, ebx);
	if (jle())
		goto loc_46F426;
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
	return;
loc_46F426:
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_46F430()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	esi = eax; //mov
	ebp = edx; //mov
	edi = ecx; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_46F490(); esp += 4; //call
	ecx = to32i(esp+0x28); //mov
	eax = esp; //mov
	ebx = edi; //mov
	edx = ebp; //mov
	esp -= 4; _sub_46F490(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	add(eax, to32i(esp));
	sar(eax, (int32_t)1);
	to32i(esi) = eax; //mov
	eax = to32i(esp+0x10); //mov
	add(eax, to32i(esp+4));
	sar(eax, (int32_t)1);
	to32i(esi+4) = eax; //mov
	eax = to32i(esp+0x14); //mov
	add(eax, to32i(esp+8));
	sar(eax, (int32_t)1);
	to32i(esi+8) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_46F490()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	esi = eax; //mov
	edi = to16i(ebx); //movsx
	eax = to16i(edx); //movsx
	sub(edi, eax);
	to32i(esp) = edi; //mov
	edi = to32i(ebx); //mov
	eax = to32i(edx); //mov
	sar(edi, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(edi, eax);
	to32i(esp+4) = edi; //mov
	ebx = to32i(ebx+2); //mov
	eax = to32i(edx+2); //mov
	sar(ebx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(ebx, eax);
	to32i(esp+8) = ebx; //mov
	ebx = to16i(ecx); //movsx
	eax = to16i(edx); //movsx
	sub(ebx, eax);
	to32i(esp+0xC) = ebx; //mov
	ebx = to32i(ecx); //mov
	eax = to32i(edx); //mov
	sar(ebx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	sub(ebx, eax);
	to32i(esp+0x10) = ebx; //mov
	ebx = to32i(esp+8); //mov
	ebp = to32i(esp+0x10); //mov
	ecx = to32i(ecx+2); //mov
	eax = to32i(edx+2); //mov
	edx = to32i(esp); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	shl(ebx, (int32_t)8);
	shl(ebp, (int32_t)8);
	shl(edx, (int32_t)8);
	to32i(esp+8) = ebx; //mov
	sub(ecx, eax);
	to32i(esp+0x10) = ebp; //mov
	to32i(esp+0x14) = ecx; //mov
	to32i(esp) = edx; //mov
	eax = to32i(esp+0x14); //mov
	ecx = edi; //mov
	edi = to32i(esp+0xC); //mov
	shl(ecx, (int32_t)8);
	shl(eax, (int32_t)8);
	to32i(esp+4) = ecx; //mov
	shl(edi, (int32_t)8);
	to32i(esp+0x14) = eax; //mov
	eax = esp; //mov
	to32i(esp+0xC) = edi; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_45E810(); esp += 4; //call
	edx = to32i(esp+0x14); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ecx = eax; //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esi) = ecx; //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	ecx = eax; //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esi+4) = ecx; //mov
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	ecx = eax; //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	eax = esi; //mov
	to32i(esi+8) = ecx; //mov
	esp -= 4; _sub_45E810(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_46F5D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(esi+0x60C); //mov
	esp -= 4; _sub_458670(); esp += 4; //call
	eax = to32i(esi+0x21C); //mov
	edx = to32i(eax); //mov
	cmp(edx, (int32_t)4);
	if (jz())
		goto loc_46F61E;
	cmp(edx, (int32_t)0xC);
	if (jz())
		goto loc_46F61E;
	cmp(edx, (int32_t)0xD);
	if (jz())
		goto loc_46F625;
	cmp(edx, (int32_t)0xE);
	if (jnz())
		goto loc_46F62C;
	eax = 0x90000000; //mov
loc_46F616:
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46F61E:
	eax = 0x80000000; //mov
	goto loc_46F616;
loc_46F625:
	eax = 0x70000000; //mov
	goto loc_46F616;
loc_46F62C:
	eax = to32i(esp+8); //mov
	sar(eax, (int32_t)2);
	add(eax, (int32_t)0x40);
	shl(eax, (int32_t)0x18);
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46F660()
{
	esp -= 4; _sub_470D40(); esp += 4; //call
	esp -= 4; _sub_49C110(); esp += 4; //call
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = (int32_t)(intptr_t)sub_42A8B0; //mov
	esi = (int32_t)(intptr_t)nullsub_9; //mov
	ebp = (int32_t)(intptr_t)sub_42C4C0; //mov
	edx = (int32_t)(intptr_t)nullsub_11; //mov
	ebx = (int32_t)(intptr_t)sub_42A7D0; //mov
	edi = (int32_t)(intptr_t)sub_42AD80; //mov
	eax = (int32_t)(intptr_t)sub_42AAC0; //mov
	to32i(dword_4EC544) = ecx; //mov
	to32i(dword_4EC504) = esi; //mov
	to32i(dword_4EC508) = esi; //mov
	to32i(dword_4EC50C) = ebp; //mov
	to32i(dword_4EC510) = ebp; //mov
	to32i(dword_4EC514) = ebp; //mov
	to32i(dword_4EC558) = ebp; //mov
	to32i(dword_4EC500) = edx; //mov
	to32i(dword_4EC548) = ebx; //mov
	to32i(dword_4EC554) = edi; //mov
	to32i(dword_4EC54C) = eax; //mov
	ecx = (int32_t)(intptr_t)sub_42C8B0; //mov
	esi = (int32_t)(intptr_t)sub_42AD80; //mov
	ebp = (int32_t)(intptr_t)sub_42ABF0; //mov
	edx = (int32_t)(intptr_t)sub_42A980; //mov
	ebx = (int32_t)(intptr_t)sub_42BCD0; //mov
	edi = (int32_t)(intptr_t)sub_42B320; //mov
	eax = (int32_t)(intptr_t)sub_42B970; //mov
	to32i(dword_4EC518) = ecx; //mov
	to32i(dword_4EC550) = esi; //mov
	to32i(dword_4EC578) = ebp; //mov
	to32i(dword_4EC574) = edx; //mov
	to32i(dword_4EC584) = ebx; //mov
	to32i(dword_4EC580) = edi; //mov
	to32i(dword_4EC528) = eax; //mov
	ecx = (int32_t)(intptr_t)sub_42C0D0; //mov
	esi = (int32_t)(intptr_t)sub_42B6B0; //mov
	edx = (int32_t)(intptr_t)sub_42BBA0; //mov
	ebx = (int32_t)(intptr_t)sub_42AF00; //mov
	eax = (int32_t)(intptr_t)sub_42A710; //mov
	edi = (int32_t)(intptr_t)sub_42A680; //mov
	to32i(dword_4EC51C) = ecx; //mov
	to32i(dword_4EC520) = esi; //mov
	to32i(dword_4EC524) = esi; //mov
	to32i(dword_4EC52C) = edx; //mov
	to32i(dword_4EC57C) = ebx; //mov
	to32i(dword_4EC560) = eax; //mov
	to32i(dword_4EC56C) = edi; //mov
	ecx = (int32_t)(intptr_t)sub_42B170; //mov
	edx = (int32_t)(intptr_t)sub_42A700; //mov
	ebx = (int32_t)(intptr_t)nullsub_10; //mov
	esi = (int32_t)(intptr_t)sub_42A6D0; //mov
	to32i(dword_4EC530) = ecx; //mov
	to32i(dword_4EC534) = ecx; //mov
	to32i(dword_4EC538) = ecx; //mov
	to32i(dword_4EC53C) = ecx; //mov
	to32i(dword_4EC55C) = edx; //mov
	to32i(dword_4EC570) = ebx; //mov
	ecx = (int32_t)(intptr_t)sub_42A6F0; //mov
	to32i(dword_4EC568) = esi; //mov
	to32i(dword_4EC564) = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46F670()
{
	push32(edx);
	eax = to32i(dword_5222D4); //mov
	xor_(edx, edx);
	esp -= 4; _sub_430860(); esp += 4; //call
	to32i(dword_5222D4) = edx; //mov
	esp -= 4; _sub_47F150(); esp += 4; //call
	esp -= 4; _sub_434F10(); esp += 4; //call
	esp -= 4; _sub_47F2A0(); esp += 4; //call
	esp -= 4; _sub_4594E0(); esp += 4; //call
	esp -= 4; _sub_4594D0(); esp += 4; //call
	esp -= 4; _sub_470F50(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_46F6C0()
{
	push32(edx);
	xor_(edx, edx);
	esp -= 4; _sub_434F20(); esp += 4; //call
	to32i(dword_5222D0) = edx; //mov
	esp -= 4; _sub_46FEE0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_46F6E0()
{
	esp -= 4; _sub_47F2B0(); esp += 4; //call
	esp -= 4; _sub_474260(); esp += 4; //call
	esp -= 4; _sub_475B40(); esp += 4; //call
	esp -= 4; _sub_42D810(); esp += 4; //call
	_sub_4381C0(); return; //jmp
}
Fn(void) Game::_sub_46F710()
{
	esp -= 4; _sub_428F60(); esp += 4; //call
	esp -= 4; _sub_434F30(); esp += 4; //call
	esp -= 4; _sub_474280(); esp += 4; //call
	esp -= 4; _sub_47F2C0(); esp += 4; //call
	esp -= 4; _sub_475B50(); esp += 4; //call
	esp -= 4; _sub_4595F0(); esp += 4; //call
	eax = 3; //mov
	esp -= 4; _sub_47D4C0(); esp += 4; //call
	esp -= 4; _sub_4595D0(); esp += 4; //call
	esp -= 4; _sub_42ED30(); esp += 4; //call
	esp -= 4; _sub_42D920(); esp += 4; //call
	esp -= 4; _sub_437D10(); esp += 4; //call
	_sub_470F70(); return; //jmp
}
Fn(void) Game::_sub_46F760()
{
	push32(edx);
	edx = 1; //mov
	xor_(eax, eax);
	esp -= 4; _sub_45B9E0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46F78D;
	edx = to32i(dword_4D9550); //mov
	inc(edx);
	to32i(dword_4D9550) = edx; //mov
	cmp(edx, (int32_t)1);
	if (jle())
		goto loc_46F78D;
	push32(ebx);
	xor_(ebx, ebx);
	to32i(dword_4D9550) = ebx; //mov
	pop32(ebx);
loc_46F78D:
	pop32(edx);
}
Fn(void) Game::_sub_46F7A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	eax = to32i(dword_5222D0); //mov
	esp -= 4; _sub_46F930(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_46F89A;
	push32(0);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_46F980(); esp += 4; //call
	cmp(to32i(dword_5222D0), (int32_t)0);
	if (jnz())
		goto loc_46F841;
	cmp(to32i(dword_4D9550), (int32_t)0);
	if (jnz())
		goto loc_46F81D;
	cmp(to32i(dword_512054), (int32_t)0);
	if (jz())
		goto loc_46F81D;
	xor_(eax, eax);
	esp -= 4; _sub_44B6E0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46F81D;
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = esp; //mov
	esp -= 4; _sub_477710(); esp += 4; //call
	ebp = to32i(esp+8); //mov
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp); //mov
	push32(ebp);
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_46F980(); esp += 4; //call
loc_46F81D:
	push32(0);
	eax = 2; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_46F980(); esp += 4; //call
	push32(0);
	eax = 3; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
loc_46F83C:
	esp -= 4; _sub_46F980(); esp += 4; //call
loc_46F841:
	test(esi, esi);
	if (jz())
		goto loc_46F87A;
	cmp(to32i(dword_5222D0), (int32_t)0);
	if (jnz())
		goto loc_46F867;
	to32i(dword_5222D0) = 1; //mov
	esp -= 4; _sub_430840(); esp += 4; //call
	esp -= 4; _sub_45F980(); esp += 4; //call
loc_46F867:
	esp -= 4; _sub_428E80(); esp += 4; //call
	cmp(to32i(dword_4D966C), (int32_t)0);
	if (jnz())
		goto loc_46F87A;
	esp -= 4; _sub_45FA70(); esp += 4; //call
loc_46F87A:
	esp -= 4; _sub_429FF0(); esp += 4; //call
	esp -= 4; _sub_428FB0(); esp += 4; //call
	test(esi, esi);
	if (jnz())
		goto loc_46F900;
	cmp(to32i(dword_5222D0), (int32_t)0);
	if (jnz())
		goto loc_46F907;
loc_46F891:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46F89A:
	push32(0);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_46F980(); esp += 4; //call
	push32(0);
	edx = 1; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(eax, eax);
	esp -= 4; _sub_46F980(); esp += 4; //call
	eax = to32i(dword_5222D0); //mov
	test(eax, eax);
	if (jnz())
		goto loc_46F841;
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 2; //mov
	esp -= 4; _sub_46F980(); esp += 4; //call
	push32(0);
	eax = 3; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_46F980(); esp += 4; //call
	push32(0);
	edx = 1; //mov
	eax = 3; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	goto loc_46F83C;
loc_46F900:
	esp -= 4; _sub_428E50(); esp += 4; //call
	goto loc_46F891;
loc_46F907:
	push32(edi);
	xor_(edi, edi);
	to32i(dword_5222D0) = edi; //mov
	esp -= 4; _sub_428EB0(); esp += 4; //call
	esp -= 4; _sub_430850(); esp += 4; //call
	pop32(edi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46F930()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_448240(); esp += 4; //call
	esp -= 4; _sub_4744A0(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_46F95A;
	ecx = 1; //mov
loc_46F947:
	test(edx, edx);
	if (jnz())
		goto loc_46F95E;
	eax = 1; //mov
	edx = ecx; //mov
	esp -= 4; _sub_428FC0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	return;
loc_46F95A:
	xor_(ecx, ecx);
	goto loc_46F947;
loc_46F95E:
	xor_(eax, eax);
	edx = ecx; //mov
	esp -= 4; _sub_428FC0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_46F980()
{
	static const void *const off_46F970[] = {
		&&loc_46F9CC,
		&&loc_46F9CC,
		&&loc_46FA0C,
		&&loc_46FA23,
	};
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(dword_5222D4); //mov
	to32i(dword_5222DC) = esi; //mov
	to32i(dword_5222E0) = edx; //mov
	to32i(dword_522344) = ebx; //mov
	to32i(dword_5222D8) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	xor_(edx, edx);
	to32i(dword_52234C) = eax; //mov
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	to32i(dword_522348) = ecx; //mov
	esp -= 4; _sub_44EEC0(); esp += 4; //call
	cmp(esi, (int32_t)3);
	if (ja())
		goto loc_46F9DD;
	goto *off_46F970[esi];
loc_46F9CC:
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esp -= 4; _sub_448050(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_46FA40(); esp += 4; //call
loc_46F9DD:
	edx = 2; //mov
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esp -= 4; _sub_44EEC0(); esp += 4; //call
	edx = to32i(dword_5222C0); //mov
	push32(edx);
	ecx = to32i(dword_5222BC); //mov
	push32(ecx);
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esp -= 4; _sub_429010(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_46FA0C:
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esi = esp; //mov
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_458A10(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	goto loc_46F9DD;
loc_46FA23:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	eax = edi; //mov
	esp -= 4; _sub_458B10(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	movsd();
	movsd();
	goto loc_46F9DD;
}
Fn(void) Game::_sub_46FA40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x48);
	ecx = eax; //mov
	esp -= 4; _sub_4713D0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esp -= 4; _sub_42A5B0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esi = esp; //mov
	esp -= 4; _sub_448120(); esp += 4; //call
	xor_(eax, eax);
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FC20(); esp += 4; //call
	esi = esp; //mov
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	movsd();
	movsd();
	esp -= 4; _sub_45BD70(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222BC; //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FC20(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+8); //lea
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	movsd();
	movsd();
	esp -= 4; _sub_47F310(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222BC; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FC20(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	movsd();
	movsd();
	esp -= 4; _sub_46C710(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222BC; //mov
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FC20(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	movsd();
	movsd();
	esp -= 4; _sub_4742A0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_5222BC; //mov
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FBC0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
	movsd();
	movsd();
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esi = (int32_t)(intptr_t)(esp+0x28); //lea
	esp -= 4; _sub_435C50(); esp += 4; //call
	edx = to32i(esp+0x2C); //mov
	push32(edx);
	ebx = to32i(esp+0x2C); //mov
	push32(ebx);
	esi = to32i(dword_5222C0); //mov
	push32(esi);
	edi = to32i(dword_5222BC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x40); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x30); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	movsd();
	movsd();
	esp -= 4; _sub_44EEC0(); esp += 4; //call
	ebp = to32i(dword_5222C0); //mov
	push32(ebp);
	eax = to32i(dword_5222BC); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x40); //lea
	eax = (int32_t)(intptr_t)dword_5222DC; //mov
	esp -= 4; _sub_45B580(); esp += 4; //call
	edx = to32i(esp+0x44); //mov
	push32(edx);
	ebx = to32i(esp+0x44); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x50); //lea
	edi = (int32_t)(intptr_t)dword_5222BC; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x40); //lea
	movsd();
	movsd();
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_46FB93;
	add(esp, (int32_t)0x48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_46FB93:
	ecx = 0x46; //mov
	ebx = 0x96; //mov
	edx = 0x28; //mov
	eax = 0x1E6; //mov
	esp -= 4; _sub_46FC70(); esp += 4; //call
	add(esp, (int32_t)0x48);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46FBC0()
{
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	ecx = eax; //mov
	esi = esp; //mov
	esp -= 4; _sub_470FE0(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_46FBE6;
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
	return;
loc_46FBE6:
	push32(ebx);
	ebx = to32i(esp+8); //mov
	push32(ebx);
	esi = to32i(esp+8); //mov
	push32(esi);
	edi = to32i(ecx+4); //mov
	push32(edi);
	ebp = to32i(ecx); //mov
	push32(ebp);
	esi = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	pop32(ebx);
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
}
Fn(void) Game::_sub_46FC20()
{
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	ecx = eax; //mov
	esi = esp; //mov
	esp -= 4; _sub_470FE0(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_46FC4B;
loc_46FC36:
	esi = esp; //mov
	edi = edx; //mov
	esp -= 4; _sub_4713D0(); esp += 4; //call
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	return;
loc_46FC4B:
	push32(ebx);
	ebx = to32i(esp+8); //mov
	push32(ebx);
	esi = to32i(esp+8); //mov
	push32(esi);
	edi = to32i(ecx+4); //mov
	push32(edi);
	ebp = to32i(ecx); //mov
	push32(ebp);
	esi = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	pop32(ebx);
	goto loc_46FC36;
}
Fn(void) Game::_sub_46FC70()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	edx = 0x14; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FE70(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_46FC8F;
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	return;
loc_46FC8F:
	edx = 0x14; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	eax = to32i(esp); //mov
	edx = to32i(dword_5222BC); //mov
	to32i(eax) = edx; //mov
	eax = to32i(esp); //mov
	to32i(eax+4) = 0x18; //mov
	eax = to32i(esp); //mov
	to16i(eax+8) = 1; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xA) = di; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xC) = si; //mov
	eax = to32i(esp); //mov
	add(edi, ebx);
	to16i(eax+0xE) = di; //mov
	eax = to32i(esp); //mov
	add(esi, ecx);
	to16i(eax+0x10) = si; //mov
	eax = to32i(esp); //mov
	to32i(dword_5222BC) = eax; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_46FCF0()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	eax = esi; //mov
	edx = to32i(dword_5222CC); //mov
	to32i(esp) = edx; //mov
	edx = to32i(dword_5222C8); //mov
	to32i(esp+4) = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_46FD1A;
	esi = esp; //mov
	edi = eax; //mov
	movsd();
	movsd();
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
	return;
loc_46FD1A:
	to32i(edx) = 0; //mov
	esi = esp; //mov
	edi = eax; //mov
	movsd();
	movsd();
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_46FD30()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_46FD5A;
	cmp(to32i(dword_5222CC), (int32_t)0);
	if (jz())
		goto loc_46FD5C;
	eax = to32i(dword_5222C8); //mov
	edx = to32i(ecx); //mov
	to32i(eax) = edx; //mov
	eax = to32i(ecx); //mov
	to32i(dword_5222C8) = eax; //mov
	eax = 1; //mov
loc_46FD5A:
	pop32(ecx);
	return;
loc_46FD5C:
	eax = to32i(ecx); //mov
	to32i(dword_5222CC) = eax; //mov
	eax = to32i(ecx); //mov
	to32i(dword_5222C8) = eax; //mov
	eax = 1; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_46FD80()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_5222C8) = edx; //mov
	to32i(dword_5222CC) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_46FDA0()
{
	push32(ebx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	cmp(to32i(esp+0x18), (int32_t)0);
	if (jz())
		goto loc_46FDD0;
	ebx = to32i(esp+0x20); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_46FDD8;
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
loc_46FDBD:
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
	pop32(ebx);
	esp += 0x10; return;
loc_46FDD0:
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
	goto loc_46FDBD;
loc_46FDD8:
	push32(ecx);
	eax = to32i(esp+0x28); //mov
	ecx = to32i(esp+0x20); //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)(esp+0x1C); //lea
	to32i(esp+0x20) = eax; //mov
	to32i(ecx) = ebx; //mov
	movsd();
	movsd();
	pop32(ecx);
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	esp += 0x10; return;
}
Fn(void) Game::_sub_46FE10()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	to32i(esp) = eax; //mov
	to32i(esp+4) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_46FE30;
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
	return;
loc_46FE30:
	to32i(eax) = 0; //mov
	esi = esp; //mov
	edi = edx; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_46FE50()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	eax = esi; //mov
	edi = esi; //mov
	xor_(edx, edx);
	esi = esp; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = edx; //mov
	movsd();
	movsd();
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_46FE70()
{
	push32(ecx);
	edx = to32i(dword_5222D8); //mov
	to32i(eax) = edx; //mov
	eax = edx; //mov
	edx = to32i(dword_5222D4); //mov
	ecx = to32i(dword_5222C4); //mov
	sub(eax, edx);
	cmp(eax, ecx);
	if (jle())
		goto loc_46FE91;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_46FE91:
	eax = 1; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_46FEA0()
{
	push32(ebx);
	push32(ecx);
	ebx = to32i(dword_5222D8); //mov
	to32i(eax) = ebx; //mov
	add(ebx, edx);
	edx = to32i(dword_5222D4); //mov
	eax = ebx; //mov
	ecx = to32i(dword_5222C4); //mov
	sub(eax, edx);
	cmp(eax, ecx);
	if (jle())
		goto loc_46FECB;
	xor_(eax, eax);
	to32i(dword_5222D8) = ebx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_46FECB:
	eax = 1; //mov
	to32i(dword_5222D8) = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_46FEE0()
{
	push32(edx);
	eax = (int32_t)(intptr_t)dword_5222C4; //mov
	esp -= 4; _sub_430870(); esp += 4; //call
	edx = to32i(dword_5222C4); //mov
	to32i(dword_5222D4) = eax; //mov
	sub(edx, (int32_t)0x64);
	to32i(dword_5222D8) = eax; //mov
	to32i(dword_5222C4) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_46FF10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	esi = to32i(dword_540F48); //mov
	edx = to32i(dword_5227C0+eax); //mov
	sub(esi, (int32_t)0x200);
	test(edx, edx);
	if (jnz())
		goto loc_47000B;
	eax = to32i(dword_5227BC+eax); //mov
	shl(eax, (int32_t)2);
	ebx = to32i(dword_4D9584+eax); //mov
	cmp(ebx, (int32_t)6);
	if (jnz())
		goto loc_470012;
loc_46FF52:
	edx = 0x280; //mov
loc_46FF57:
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	shl(eax, (int32_t)2);
	ebx = esi; //mov
	sub(ebx, to32i(dword_5227B4+eax));
	cmp(ebx, edx);
	if (jle())
		goto loc_47000B;
	eax = to32i(dword_5227BC+eax); //mov
	shl(eax, (int32_t)2);
	edx = to32i(dword_4D9584+eax); //mov
	cmp(edx, (int32_t)6);
	if (jz())
		goto loc_46FF8C;
	cmp(edx, (int32_t)5);
	if (jnz())
		goto loc_46FFA0;
loc_46FF8C:
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	to32i(dword_5227C0+eax*4) = 1; //mov
loc_46FFA0:
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	cmp(to32i(eax+0x288), (int32_t)0);
	if (jz())
		goto loc_470025;
	edx = 2; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	xor_(esi, esi);
	add(eax, ecx);
	to32i(dword_4D9588) = edx; //mov
	to32i(dword_4D9594) = edx; //mov
	to32i(dword_5227C0+eax*4) = esi; //mov
loc_46FFDC:
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	edx = to32i(dword_5227BC+ebx); //mov
	inc(edx);
	esi = 6; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edi = to32i(dword_5227C0+ebx); //mov
	to32i(dword_5227BC+ebx) = edx; //mov
	test(edi, edi);
	if (jz())
		goto loc_470038;
loc_47000B:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470012:
	cmp(ebx, (int32_t)5);
	if (jz())
		goto loc_46FF52;
	edx = 0x140; //mov
	goto loc_46FF57;
loc_470025:
	ebp = 6; //mov
	to32i(dword_4D9588) = ebp; //mov
	to32i(dword_4D9594) = ebp; //mov
	goto loc_46FFDC;
loc_470038:
	eax = ecx; //mov
	esp -= 4; _sub_470050(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470050()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jnz())
		goto loc_470087;
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xB);
	sbb(eax, edx);
	sar(eax, (int32_t)0xB);
	cmp(eax, (int32_t)4);
	if (jge())
		goto loc_4700E4;
	cmp(eax, (int32_t)2);
	if (jge())
		goto loc_4700DD;
	edx = 0x547A; //mov
loc_470080:
	eax = ecx; //mov
loc_470082:
	esp -= 4; _sub_44B280(); esp += 4; //call
loc_470087:
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	edx = to32i(dword_5227BC+ebx); //mov
	eax = ecx; //mov
	edx = to32i(dword_4D9584+edx*4); //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	eax = to32i(dword_5227BC+ebx); //mov
	cmp(to32i(dword_4D9584+eax*4), (int32_t)6);
	if (jz())
		goto loc_4700EA;
loc_4700B7:
	eax = ecx; //mov
	shl(ecx, (int32_t)2);
	add(ecx, eax);
	xor_(esi, esi);
	eax = to32i(dword_540F48); //mov
	to32i(dword_5227C0+ecx*4) = esi; //mov
	sub(eax, (int32_t)0x200);
	to32i(dword_5227B4+ecx*4) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4700DD:
	edx = 0xFFFFAB86; //mov
	goto loc_470080;
loc_4700E4:
	eax = ecx; //mov
	xor_(edx, edx);
	goto loc_470082;
loc_4700EA:
	eax = ecx; //mov
	esp -= 4; _sub_44D460(); esp += 4; //call
	goto loc_4700B7;
}
Fn(void) Game::_sub_470110()
{
	static const void *const off_470100[] = {
		&&loc_47028B,
		&&loc_4702A6,
		&&loc_470304,
		&&loc_470319,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	eax = to32i(dword_52279C); //mov
	edx = to32i(dword_4D9560+eax*4); //mov
	esi = 1; //mov
	cmp(edx, (int32_t)5);
	if (jnz())
		goto loc_47013F;
	cmp(to8i(byte_4D5C7C), (int8_t)7);
	if (jnz())
		goto loc_47013F;
	to32i(dword_52279C) = 4; //mov
loc_47013F:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_47014D;
	esi = 2; //mov
loc_47014D:
	edi = to32i(dword_5227AC); //mov
	test(edi, edi);
	if (jle())
		goto loc_4701B2;
	cmp(to32i(dword_5227A8), (int32_t)0);
	if (jz())
		goto loc_4701B2;
	to32i(dword_52279C) = edi; //mov
	xor_(ecx, ecx);
	test(esi, esi);
	if (jle())
		goto loc_4701B2;
	xor_(ebx, ebx);
loc_47016E:
	xor_(eax, eax);
	xor_(edx, edx);
	to32i(dword_5227B0+ebx) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44B280(); esp += 4; //call
	edx = to32i(dword_52279C); //mov
	eax = ecx; //mov
	edx = to32i(dword_4D9560+edx*4); //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	edx = to32i(dword_52279C); //mov
	cmp(to32i(dword_4D9560+edx*4), (int32_t)6);
	if (jnz())
		goto loc_4701AA;
	eax = ecx; //mov
	esp -= 4; _sub_44D460(); esp += 4; //call
loc_4701AA:
	inc(ecx);
	add(ebx, (int32_t)0x14);
	cmp(ecx, esi);
	if (jl())
		goto loc_47016E;
loc_4701B2:
	xor_(ebp, ebp);
	eax = to32i(dword_5227A4); //mov
	to32i(dword_5227A8) = ebp; //mov
	test(eax, eax);
	if (jle())
		goto loc_4701E0;
	esi = (int32_t)(intptr_t)(eax-1); //lea
loc_4701C6:
	to32i(dword_5227A4) = esi; //mov
loc_4701CC:
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4701E0:
	edx = 1; //mov
	eax = 3; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_47021A;
	ecx = to32i(dword_5227A0); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4701CC;
	ebx = (int32_t)(intptr_t)(ecx-1); //lea
	to32i(dword_5227A0) = ebx; //mov
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_47021A:
	edx = 1; //mov
	eax = 4; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_470254;
	eax = to32i(dword_5227A0); //mov
	cmp(eax, (int32_t)3);
	if (jge())
		goto loc_4701CC;
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(dword_5227A0) = edx; //mov
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470254:
	edx = 1; //mov
	eax = 5; //mov
	esp -= 4; _sub_45B980(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4701CC;
	to32i(dword_5227A4) = 8; //mov
	edx = to32i(dword_5227A0); //mov
	cmp(edx, (int32_t)3);
	if (ja())
		goto loc_4701CC;
	goto *off_470100[edx];
loc_47028B:
	xor_(to8i(dword_522790), (int8_t)1);
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4702A6:
	edx = to32i(dword_522794); //mov
	ebp = to32i(dword_512208); //mov
	inc(edx);
	cmp(ebp, (int32_t)1);
	if (jnz())
		goto loc_4702DE;
	ecx = 3; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_522794) = edx; //mov
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4702DE:
	ecx = 4; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_522794) = edx; //mov
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470304:
	edi = 1; //mov
	esi = 0x18; //mov
	to32i(dword_522798) = edi; //mov
	goto loc_4701C6;
loc_470319:
	ecx = 1; //mov
	edx = to32i(dword_52279C); //mov
	to32i(dword_5227A8) = ecx; //mov
	add(edx, ecx);
	ecx = 8; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_52279C) = edx; //mov
	ebx = to32i(dword_4D9560+edx*4); //mov
	to32i(dword_5227AC) = edx; //mov
	cmp(ebx, (int32_t)0xA);
	if (jnz())
		goto loc_4701CC;
	xor_(ebx, ebx);
	test(esi, esi);
	if (jle())
		goto loc_4701CC;
	edi = 1; //mov
	xor_(ecx, ecx);
loc_470365:
	add(ecx, (int32_t)0x14);
	edx = to32i(dword_540F48); //mov
	xor_(ebp, ebp);
	to32i(dword_52279C+ecx) = edi; //mov
	eax = ebx; //mov
	to32i(dword_5227A4+ecx) = ebp; //mov
	sub(edx, (int32_t)0x200);
	to32i(dword_5227A8+ecx) = ebp; //mov
	add(ebx, edi);
	to32i(dword_5227A0+ecx) = edx; //mov
	edx = to32i(dword_4D9584+ebp*4); //mov
	to32i(dword_5227AC+ecx) = ebp; //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	cmp(ebx, esi);
	if (jl())
		goto loc_470365;
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jnz())
		goto loc_4703B8;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4703B8:
	esp -= 4; _sub_44CB04(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4703D0()
{
	push32(edx);
	edx = to32i(dword_540D94); //mov
	test(edx, edx);
	if (jz())
		goto loc_4703E0;
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4703ED;
loc_4703E0:
	eax = to32i(eax+0x1EC); //mov
	esp -= 4; _sub_470670(); esp += 4; //call
	pop32(edx);
	return;
loc_4703ED:
	eax = to32i(eax+0x1EC); //mov
	esp -= 4; _sub_4704E0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_470400()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x5C);
	push32(aReplay_rpy_0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	ecx = (int32_t)(intptr_t)(esp+0x58); //lea
	xor_(edx, edx);
	push32(eax);
	ebx = (int32_t)(intptr_t)(esp+0x58); //lea
	to32i(esp+0x58) = edx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = (int32_t)(intptr_t)(esp+0x58); //lea
	eax = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	ecx = to32i(esp+0x58); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_470446;
	to32i(dword_540D94) = ecx; //mov
	add(esp, (int32_t)0x5C);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470446:
	ebx = to32i(esp+0x54); //mov
	edx = (int32_t)(intptr_t)dword_5227D8; //mov
	eax = ecx; //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x58); //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	add(esp, (int32_t)0x5C);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470470()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x3C);
	push32(aReplay_rpy_0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	edx = to32i(dword_540D94); //mov
	add(esp, (int32_t)8);
	test(edx, edx);
	if (jnz())
		goto loc_47049E;
	eax = to32i(dword_540F48); //mov
	to32i(dword_4D955C) = eax; //mov
loc_47049E:
	ecx = 0x16C; //mov
	edi = (int32_t)(intptr_t)dword_5227D8; //mov
	esi = (int32_t)(intptr_t)dword_5121F8; //mov
	ebx = 0x1E5B4; //mov
	edx = (int32_t)(intptr_t)dword_5227D8; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(dword_4D955C); //mov
	ecx = 2; //mov
	to32i(dword_522D88) = eax; //mov
	eax = esp; //mov
	to32i(dword_5227F4) = ecx; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	add(esp, (int32_t)0x3C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4704E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x80);
	edx = eax; //mov
	cmp(to32i(dword_522370+eax*4), (int32_t)0);
	if (jnz())
		goto loc_470592;
	eax = to32i(dword_540D90); //mov
	cmp(byte_522D8C[eax], (int8_t)0);
	if (jnz())
		goto loc_470571;
	to32i(dword_540D94) = 4; //mov
loc_470513:
	ebp = to32i(dword_522370+edx*4); //mov
	inc(ebp);
	eax = to32i(dword_512208); //mov
	to32i(dword_522370+edx*4) = ebp; //mov
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_470615;
	cmp(edx, to32i(dword_51220C));
	if (jnz())
		goto loc_470615;
loc_47053C:
	cmp(to32i(dword_5227B0), (int32_t)0);
	if (jz())
		goto loc_470555;
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_470555;
	xor_(eax, eax);
loc_470550:
	esp -= 4; _sub_46FF10(); esp += 4; //call
loc_470555:
	shl(edx, (int32_t)2);
	cmp(to32i(dword_522370+edx), (int32_t)0x20);
	if (jz())
		goto loc_470657;
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470571:
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_470730(); esp += 4; //call
	esi = edx; //mov
	shl(esi, (int32_t)7);
	ecx = 0x20; //mov
	edi = (int32_t)(intptr_t)(&byte_522390[esi]); //lea
	esi = (int32_t)(intptr_t)(esp+4); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
loc_470592:
	ebx = to32i(dword_540D94); //mov
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_4705ED;
	ecx = edx; //mov
	eax = to32i(dword_522370+edx*4); //mov
	shl(ecx, (int32_t)7);
	bl = (int32_t)(intptr_t)byte_522390[ecx+eax]; //mov
	sub(bl, (int8_t)0x40);
	shl(bl, (int8_t)2);
	to8i(dword_512A35+3) = bl; //mov
	bl = (int32_t)(intptr_t)byte_5223B0[ecx+eax]; //mov
	shl(bl, (int8_t)3);
	to8i(byte_512A39) = bl; //mov
	bl = (int32_t)(intptr_t)byte_5223D0[ecx+eax]; //mov
	shl(bl, (int8_t)3);
	al = (int32_t)(intptr_t)byte_5223F0[ecx+eax]; //mov
	to8i(byte_512A3A) = bl; //mov
	to8i(byte_512A3B) = al; //mov
	goto loc_470513;
loc_4705ED:
	cmp(ebx, (int32_t)3);
	if (jnz())
		goto loc_470513;
	xor_(bh, bh);
	to8i(byte_512A39) = bh; //mov
	to8i(byte_512A3A) = bh; //mov
	to8i(byte_512A3B) = bh; //mov
	to8i(dword_512A35+3) = bh; //mov
	goto loc_470513;
loc_470615:
	ebx = to32i(dword_512208); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_47053C;
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_470555;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	cmp(to32i(dword_5227B0+eax*4), (int32_t)0);
	if (jz())
		goto loc_470555;
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_470555;
	eax = edx; //mov
	goto loc_470550;
loc_470657:
	xor_(esi, esi);
	to32i(dword_522370+edx) = esi; //mov
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470670()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	esp -= 4; _sub_45BAA0(); esp += 4; //call
	edx = to32i(dword_512A35); //mov
	sar(edx, (int32_t)0x18);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ecx = (int32_t)(intptr_t)(ebx*4+0); //lea
	esi = ebx; //mov
	shl(esi, (int32_t)7);
	ebx = to32i(dword_522370+ecx); //mov
	xor_(edx, edx);
	add(eax, (int32_t)0x40);
	dl = to8i(byte_512A39); //mov
	byte_522390[esi+ebx] = al; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	xor_(edx, edx);
	dl = to8i(byte_512A3A); //mov
	byte_5223B0[esi+ebx] = al; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edx = (int32_t)(intptr_t)(ebx+1); //lea
	byte_5223D0[esi+ebx] = al; //mov
	al = to8i(byte_512A3B); //mov
	to32i(dword_522370+ecx) = edx; //mov
	byte_5223F0[esi+ebx] = al; //mov
	cmp(edx, (int32_t)0x20);
	if (jz())
		goto loc_470704;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_470704:
	push32(edi);
	sub(esp, (int32_t)0x80);
	xor_(edi, edi);
	esi = (int32_t)(intptr_t)(&byte_522390[esi]); //lea
	to32i(dword_522370+ecx) = edi; //mov
	ecx = edx; //mov
	edi = esp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_4708F0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_470730()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)0xA4);
	edx = esi; //mov
	esi = to32i(dword_540D90); //mov
	xor_(ecx, ecx);
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
	cl = (int32_t)(intptr_t)byte_522D8C[esi]; //mov
	add(esi, (int32_t)(intptr_t)byte_522D8C);
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
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	ecx = 0x20; //mov
	edi = esp; //mov
	esp -= 4; _sub_470C50(); esp += 4; //call
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
	xor_(eax, eax);
	ecx = to32i(dword_540D90); //mov
	al = to8i(esp+0x80); //mov
	esi = (int32_t)(intptr_t)byte_522D8C; //mov
	add(ecx, eax);
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
	to32i(dword_540D90) = ecx; //mov
	eax = ecx; //mov
	xor_(ecx, ecx);
	add(esi, eax);
	cl = (int32_t)(intptr_t)byte_522D8C[eax]; //mov
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
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	ecx = 0x20; //mov
	edi = (int32_t)(intptr_t)(esp+0x20); //lea
	esp -= 4; _sub_470C50(); esp += 4; //call
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
	xor_(eax, eax);
	ebx = to32i(dword_540D90); //mov
	al = to8i(esp+0x80); //mov
	esi = (int32_t)(intptr_t)byte_522D8C; //mov
	add(ebx, eax);
	xor_(ecx, ecx);
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
	cl = (int32_t)(intptr_t)byte_522D8C[ebx]; //mov
	add(esi, ebx);
	to32i(dword_540D90) = ebx; //mov
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
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	ecx = 0x20; //mov
	edi = (int32_t)(intptr_t)(esp+0x40); //lea
	esp -= 4; _sub_470C50(); esp += 4; //call
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
	xor_(eax, eax);
	esi = to32i(dword_540D90); //mov
	al = to8i(esp+0x80); //mov
	add(esi, eax);
	xor_(ecx, ecx);
	to32i(dword_540D90) = esi; //mov
	eax = esi; //mov
	cl = (int32_t)(intptr_t)byte_522D8C[esi]; //mov
	esi = (int32_t)(intptr_t)byte_522D8C; //mov
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
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
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	ecx = 0x20; //mov
	edi = (int32_t)(intptr_t)(esp+0x60); //lea
	esp -= 4; _sub_470C50(); esp += 4; //call
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
	xor_(eax, eax);
	edi = to32i(dword_540D90); //mov
	al = to8i(esp+0x80); //mov
	ecx = 0x20; //mov
	add(edi, eax);
	esi = esp; //mov
	to32i(dword_540D90) = edi; //mov
	edi = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = edx; //mov
	add(esp, (int32_t)0xA4);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4708F0()
{
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	eax = to32i(dword_540D8C); //mov
	add(eax, (int32_t)0x80);
	cmp(eax, (int32_t)0x1E000);
	if (jl())
		goto loc_470923;
	eax = to32i(dword_540F48); //mov
	edi = 1; //mov
	to32i(dword_4D955C) = eax; //mov
	to32i(dword_540D94) = edi; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	esp += 0x80; return;
loc_470923:
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	ecx = 0x21; //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_470CC0(); esp += 4; //call
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
	edi = (int32_t)(intptr_t)byte_522D8C; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	xor_(ecx, ecx);
	edx = to32i(dword_540D8C); //mov
	cl = to8i(esp+0x10); //mov
	add(edi, edx);
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
	ecx = to32i(dword_540D8C); //mov
	al = to8i(esp+0x10); //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	to32i(dword_540D8C) = ecx; //mov
	esp -= 4; _sub_470CC0(); esp += 4; //call
	ecx = 0x21; //mov
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
	edi = (int32_t)(intptr_t)byte_522D8C; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	xor_(ecx, ecx);
	ebx = to32i(dword_540D8C); //mov
	cl = to8i(esp+0x10); //mov
	add(edi, ebx);
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
	ecx = 0x21; //mov
	xor_(eax, eax);
	esi = to32i(dword_540D8C); //mov
	al = to8i(esp+0x10); //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	add(esi, eax);
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	to32i(dword_540D8C) = esi; //mov
	esp -= 4; _sub_470CC0(); esp += 4; //call
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
	edi = (int32_t)(intptr_t)byte_522D8C; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	xor_(ecx, ecx);
	ebp = to32i(dword_540D8C); //mov
	cl = to8i(esp+0x10); //mov
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
	ecx = 0x21; //mov
	xor_(eax, eax);
	edx = to32i(dword_540D8C); //mov
	al = to8i(esp+0x10); //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	add(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0xA0); //lea
	to32i(dword_540D8C) = edx; //mov
	esp -= 4; _sub_470CC0(); esp += 4; //call
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
	edi = (int32_t)(intptr_t)byte_522D8C; //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	xor_(ecx, ecx);
	ebx = to32i(dword_540D8C); //mov
	cl = to8i(esp+0x10); //mov
	add(edi, ebx);
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
	esi = to32i(dword_540D8C); //mov
	al = to8i(esp+0x10); //mov
	add(esi, eax);
	to32i(dword_540D8C) = esi; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	esp += 0x80; return;
}
Fn(void) Game::_sub_470AC0()
{
	cmp(to32i(dword_540D94), (int32_t)1);
	if (jle())
		goto loc_470ADC;
loc_470AC9:
	cmp(to32i(dword_540D94), (int32_t)1);
	if (jle())
		goto locret_470ADB;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jge())
		goto loc_470AE3;
locret_470ADB:
	return;
loc_470ADC:
	esp -= 4; _sub_470470(); esp += 4; //call
	goto loc_470AC9;
loc_470AE3:
	push32(esi);
	xor_(esi, esi);
	to32i(dword_512208) = esi; //mov
	pop32(esi);
}
