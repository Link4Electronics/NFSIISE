#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_42E6E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = (int32_t)(intptr_t)aCNfs2seGame3_1; //mov
	ecx = 0x167; //mov
	esi = 0x169; //mov
	eax = to32i(dword_512250); //mov
	xor_(ebx, ebx);
	to32i(dword_4EEBE8) = eax; //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x180; //mov
	eax = (int32_t)(intptr_t)aGrngcoordtop; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = (int32_t)(intptr_t)aCNfs2seGame3_1; //mov
	edx = 0x180; //mov
	to32i(dword_5127AC) = eax; //mov
	eax = (int32_t)(intptr_t)aGrngcoordbotto; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_5127B8) = eax; //mov
	esp -= 4; _sub_42E750(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42E750()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4C);
	push32(edi);
	push32(ebx);
	xor_(ecx, ecx);
	xor_(esi, esi);
loc_42E75D:
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)4);
	sbb(eax, edx);
	sar(eax, (int32_t)4);
	ebx = to32i(dword_4EEB44); //mov
	add(ebx, eax);
	eax = ebx; //mov
	edx = to32i(dword_4EEBEC); //mov
	esp -= 4; _sub_49C150(); esp += 4; //call
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_5127B8); //mov
	to32i(esi+eax) = edx; //mov
	edx = to32i(dword_4EEBF0); //mov
	to32i(esi+eax+4) = edx; //mov
	eax = ebx; //mov
	edx = to32i(dword_4EEBEC); //mov
	esp -= 4; _sub_49C1C0(); esp += 4; //call
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = to32i(dword_5127B8); //mov
	to32i(esi+eax+8) = edx; //mov
	edi = to32i(dword_5127AC); //mov
	edx = to32i(esi+eax); //mov
	to32i(edi+esi) = edx; //mov
	edx = to32i(dword_4EEB94); //mov
	ebx = to32i(esi+eax+4); //mov
	add(esi, (int32_t)0xC);
	add(ebx, edx);
	to32i(edi+esi-8) = ebx; //mov
	eax = to32i(esi+eax-4); //mov
	add(ecx, (int32_t)0x10000);
	to32i(edi+esi-4) = eax; //mov
	cmp(ecx, (int32_t)0x200000);
	if (jnz())
		goto loc_42E75D;
	ecx = 1; //mov
	esi = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	to32i(esp+0x50) = ecx; //mov
	xor_(ecx, ecx);
loc_42E80E:
	cmp(to32i(dword_4EEBDC), (int32_t)0);
	if (jz())
		goto loc_42E8B5;
	cmp(ecx, (int32_t)7);
	if (jle())
		goto loc_42E8B5;
	ebx = 8; //mov
	edx = esi; //mov
	eax = esi; //mov
loc_42E82D:
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(dword_4EEB20+edx*4); //mov
	to32i(dword_4EEB50+ecx*4) = edx; //mov
	ebp = (int32_t)(intptr_t)(ecx*4+0); //lea
	edx = (int32_t)(intptr_t)(esp+0x4C); //lea
	ebx = edi; //mov
	eax = to32i(dword_4EEB50+ebp); //mov
	esp -= 4; _sub_42ED00(); esp += 4; //call
	edx = to32i(esp+0x50); //mov
	eax = to32i(esp+ebp+8); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_42E868;
	to32i(esp+0x50) = eax; //mov
loc_42E868:
	add(edi, (int32_t)4);
	inc(ecx);
	dec(esi);
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_42E80E;
	ecx = to32i(dword_4EEB4C); //mov
	edx = to32i(dword_4EEBE0); //mov
	sub(edx, ecx);
	ebx = to32i(esp+0x50); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = to32i(dword_4EEB4C); //mov
	xor_(ecx, ecx);
	edx = eax; //mov
	pop32(ebx);
	pop32(edi);
loc_42E897:
	eax = to32i(esp+ecx); //mov
	imul32(eax, edx);
	add(ecx, (int32_t)4);
	add(eax, esi);
	to32i(dword_4EEB94+ecx) = eax; //mov
	cmp(ecx, (int32_t)0x44);
	if (jnz())
		goto loc_42E897;
	add(esp, (int32_t)0x4C);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_42E8B5:
	ebx = 8; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	goto loc_42E82D;
}
Fn(void) Game::_sub_42E8F0()
{
	push32(edx);
	edx = eax; //mov
	xor_(eax, eax);
loc_42E8F5:
	to32i(dword_4EEB20+eax) = edx; //mov
	add(eax, (int32_t)4);
	add(edx, (int32_t)0x1C);
	cmp(eax, (int32_t)0x20);
	if (jnz())
		goto loc_42E8F5;
	pop32(edx);
}
Fn(void) Game::_sub_42E910()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x12C);
	edx = to32i(dword_51221C); //mov
	push32(edx);
	ecx = to32i(dword_513480); //mov
	push32(ecx);
	push32(aS3tr02d_hrz);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	ecx = eax; //mov
	to32i(esp+0x100) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x120) = eax; //mov
	fild(to32i(esp+0x120));
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	fstp(to32f(flt_4D5260));
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x120) = eax; //mov
	fild(to32i(esp+0x120));
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	fstp(to32f(flt_4D5264));
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEB40) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEBDC) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEBEC) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEB44) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEBE4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEBF0) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(dword_4EEB94) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	edi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	ebp = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBF6) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBF5) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBF4) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBFA) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBF9) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EEBF8) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EF3F2) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EF3F1) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to8i(byte_4EF3F0) = al; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x110) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x104) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x108) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x10C) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_470EC0(); esp += 4; //call
	to32i(esp+0x120) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	esp -= 4; _sub_42DA20(); esp += 4; //call
	edx = to32i(dword_4EEB44); //mov
	shl(edx, (int32_t)0x10);
	ecx = 0x168; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4EEB44) = eax; //mov
	eax = 0x10000; //mov
	edx = eax; //mov
	ecx = to32i(dword_4EEB94); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(edi, eax);
	imul32(ebp, eax);
	imul32(esi, eax);
	xor_(ecx, ecx);
	xor_(eax, eax);
	cl = to8i(esp+0x110); //mov
	al = bl; //mov
	to32i(dword_4EEB48) = edi; //mov
	sub(eax, ecx);
	to32i(dword_4EEBE0) = ebp; //mov
	shl(eax, (int32_t)0xD);
	xor_(ebx, ebx);
	to32i(esp+0x128) = eax; //mov
	xor_(eax, eax);
	bl = to8i(esp+0x104); //mov
	al = to8i(esp+0x10C); //mov
	to32i(dword_4EEB4C) = esi; //mov
	sub(eax, ebx);
	esi = (uint8_t)to8i(esp+0x108); //movzx
	shl(eax, (int32_t)0xD);
	ebp = 0x40; //mov
	to32i(esp+0x11C) = eax; //mov
	xor_(eax, eax);
	xor_(edi, edi);
	al = to8i(esp+0x120); //mov
	shl(ecx, (int32_t)0x10);
	sub(eax, esi);
	shl(ebx, (int32_t)0x10);
	shl(eax, (int32_t)0xD);
	shl(esi, (int32_t)0x10);
	to32i(esp+0x124) = eax; //mov
loc_42EBEC:
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x114) = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x118) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ah = to8i(esp+0x114); //mov
	byte_4EF3F6[edi] = ah; //mov
	ah = to8i(esp+0x118); //mov
	byte_4EF3F5[edi] = ah; //mov
	sub(ebp, (int32_t)4);
	byte_4EF3F4[edi] = al; //mov
	ah = to8i(esp+0x114); //mov
	byte_4EF3F6[ebp] = ah; //mov
	ah = to8i(esp+0x118); //mov
	byte_4EF3F5[ebp] = ah; //mov
	add(edi, (int32_t)4);
	byte_4EF3F4[ebp] = al; //mov
	eax = to32i(esp+0x128); //mov
	edx = to32i(esp+0x11C); //mov
	add(ecx, eax);
	eax = to32i(esp+0x124); //mov
	add(ebx, edx);
	add(esi, eax);
	cmp(edi, (int32_t)0x20);
	if (jnz())
		goto loc_42EBEC;
	eax = to32i(byte_4EF3F4); //mov
	edx = to32i(dword_4EEB40); //mov
	to32i(dword_4EF434) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_42ECCC;
	xor_(dl, dl);
	to8i(byte_4EF3EE) = dl; //mov
	to8i(byte_4EF3ED) = dl; //mov
	to8i(byte_4EF3EC) = dl; //mov
	to8i(byte_4EF3EF) = dl; //mov
	add(esp, (int32_t)0x12C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42ECCC:
	to8i(byte_4EF3EF) = 0xFF; //mov
	al = to8i(byte_4EF3F2); //mov
	to8i(byte_4EF3EE) = al; //mov
	al = to8i(byte_4EF3F1); //mov
	to8i(byte_4EF3ED) = al; //mov
	al = to8i(byte_4EF3F0); //mov
	to8i(byte_4EF3EC) = al; //mov
	add(esp, (int32_t)0x12C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42ED00()
{
	push32(ecx);
	ecx = to32i(eax); //mov
	ecx = to32i(ecx+2); //mov
	sar(ecx, (int32_t)0x10);
	to32i(edx) = ecx; //mov
	eax = to32i(eax); //mov
	eax = to32i(eax+4); //mov
	sar(eax, (int32_t)0x10);
	to32i(ebx) = eax; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_42ED30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0xC);
	ecx = to32i(dword_512234); //mov
	push32(ecx);
	edx = 0x100; //mov
	push32(aPazD);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ebx, ebx);
	push32(eax);
	to32i(dword_4D9944) = edx; //mov
	ecx = (int32_t)(intptr_t)dword_4EFC74; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = esp; //mov
	eax = to32i(dword_512AAC); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_4D9944) = ebx; //mov
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42EDB0()
{
	static const void *const off_42ED80[] = {
		&&loc_42F446,
		&&loc_42F4D3,
		&&loc_42F511,
		&&loc_42F55A,
		&&loc_42F5A3,
		&&loc_42F5EF,
	};
	static const void *const off_42ED98[] = {
		&&loc_42F64A,
		&&loc_42F68E,
		&&loc_42F6CC,
		&&loc_42F715,
		&&loc_42F75E,
		&&loc_42F7AA,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = 0x7FFFFFFF; //mov
	edx = (int32_t)(intptr_t)dword_4EFC74; //mov
	ebx = to32i(dword_512AB4); //mov
	to32i(dword_4EFC70) = ecx; //mov
	to32i(dword_4EFC6C) = edx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_42F055;
	esp -= 4; _sub_42F9F0(); esp += 4; //call
	edx = 0x4D; //mov
loc_42EDE7:
	ah = 0x20; //mov
	esi = 0x40; //mov
	edi = 0x1B0; //mov
	ebp = 0x23D; //mov
	xor_(bl, bl);
	to8i(byte_4EFCB8) = ah; //mov
	to8i(byte_4EFCB9) = bl; //mov
	to8i(byte_4EFCBA) = bl; //mov
	to8i(byte_4EFCBB) = bl; //mov
	to32i(dword_4EFC98) = esi; //mov
	to32i(dword_4EFC9C) = edi; //mov
	to32i(dword_4EFCA0) = ebp; //mov
	to32i(dword_4EFCA4) = edi; //mov
	to32i(dword_4EFCA8) = ebp; //mov
	ebx = 0x1AD; //mov
	esi = 0x43; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	ebp = 0x240; //mov
	to32i(dword_4EFCAC) = ebx; //mov
	to32i(dword_4EFCB0) = esi; //mov
	to32i(dword_4EFCB4) = ebx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	ebx = 0x23D; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to32i(dword_4EFC98) = ebp; //mov
	to32i(dword_4EFC9C) = edx; //mov
	to32i(dword_4EFCA0) = ebp; //mov
	to32i(dword_4EFCA4) = edi; //mov
	to32i(dword_4EFCAC) = edi; //mov
	ebp = 0x40; //mov
	to32i(dword_4EFCA8) = ebx; //mov
	ecx = (int32_t)(intptr_t)(edx+3); //lea
	to32i(dword_4EFCB0) = ebx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	ebx = esi; //mov
	al = 0x10; //mov
	to32i(dword_4EFC98) = ebp; //mov
	to32i(dword_4EFC9C) = edi; //mov
	to32i(dword_4EFCA0) = esi; //mov
	to32i(dword_4EFCA8) = ebx; //mov
	to32i(dword_4EFCAC) = edx; //mov
	to32i(dword_4EFCB0) = ebp; //mov
	to32i(dword_4EFCB4) = edx; //mov
	esi = 0x1AD; //mov
	to8i(byte_4EFCB8) = al; //mov
	edi = ebx; //mov
	ah = 0xFF; //mov
	ebx = 0x23D; //mov
	to32i(dword_4EFCA4) = esi; //mov
	to8i(byte_4EFCB9) = ah; //mov
	to8i(byte_4EFCBA) = ah; //mov
	to8i(byte_4EFCBB) = ah; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	esi = edi; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = 0x240; //mov
	to32i(dword_4EFC9C) = edx; //mov
	to32i(dword_4EFCA0) = ebx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	to32i(dword_4EFCA8) = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB0) = edi; //mov
	to32i(dword_4EFC98) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to32i(dword_4EFCB4) = edx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	ebp = to32i(dword_512AB4); //mov
	cmp(ebp, (int32_t)1);
	if (jnz())
		goto loc_42F064;
loc_42EF54:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_42F34D;
	ebp = 0xBE; //mov
	eax = 0x80; //mov
	edx = 0xFF; //mov
	ecx = 0x1B; //mov
	esi = 0x93; //mov
	xor_(ebx, ebx);
	to32i(dword_4EFC54) = ebp; //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = edx; //mov
	to32i(dword_4EFC60) = ecx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC68) = esi; //mov
loc_42EFA4:
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	cmp(to32i(dword_512AA8), (int32_t)0);
	if (jz())
		goto loc_42F395;
	ebp = 0xC3; //mov
	eax = 0xE6; //mov
	edx = 0x5D; //mov
	ecx = 0x27; //mov
	ebx = 0xA3; //mov
	edi = 0xB0FFFFFF; //mov
	xor_(esi, esi);
	to32i(dword_4EFC54) = ebp; //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = edx; //mov
	to32i(dword_4EFC60) = ecx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	to32i(dword_4EFC68) = esi; //mov
	to32i(dword_4EFC70) = edi; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	ebp = 0x15C; //mov
	edi = 0x7F5F5F5F; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	eax = 0xE6; //mov
	to32i(dword_4EFC54) = ebp; //mov
	to32i(dword_4EFC5C) = edx; //mov
	to32i(dword_4EFC60) = ecx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	to32i(dword_4EFC68) = ecx; //mov
loc_42F036:
	to32i(dword_4EFC58) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC70) = edi; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
loc_42F04B:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42F055:
	esp -= 4; _sub_42FCB0(); esp += 4; //call
	edx = 0x30; //mov
	goto loc_42EDE7;
loc_42F064:
	cmp(ebp, (int32_t)2);
	if (jz())
		goto loc_42EF54;
	edx = 6; //mov
	ecx = 0x24; //mov
	ebx = to32i(dword_512208); //mov
	to32i(esp) = edx; //mov
	cmp(ebx, (int32_t)1);
	if (jle())
		goto loc_42F08F;
	esi = 5; //mov
	xor_(ecx, ecx);
	to32i(esp) = esi; //mov
loc_42F08F:
	edi = to32i(esp); //mov
	xor_(edx, edx);
	test(edi, edi);
	if (jle())
		goto loc_42F12E;
	esi = (int32_t)(intptr_t)(ecx+0x7B); //lea
	ebx = (int32_t)(intptr_t)(ecx+0x9E); //lea
	edi = (int32_t)(intptr_t)(ecx+0x58); //lea
	ebp = (int32_t)(intptr_t)(ecx+0xC1); //lea
	eax = (int32_t)(intptr_t)(ecx+0xE4); //lea
	add(ecx, (int32_t)0x108);
	to32i(esp+4) = eax; //mov
	to32i(esp+8) = ecx; //mov
	xor_(ecx, ecx);
loc_42F0C4:
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_42F41C;
	cmp(to32i(dword_512ABC), (int32_t)0);
	if (jz())
		goto loc_42F41C;
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x19; //mov
	to32i(dword_4EFC70) = 0x2F5F5F5F; //mov
loc_42F113:
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = esi; //mov
loc_42F11E:
	esp -= 4; _sub_42ABF0(); esp += 4; //call
loc_42F123:
	eax = to32i(esp); //mov
	inc(edx);
	add(ecx, (int32_t)4);
	cmp(edx, eax);
	if (jl())
		goto loc_42F0C4;
loc_42F12E:
	edx = to32i(dword_512208); //mov
	test(edx, edx);
	if (jz())
		goto loc_42F04B;
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_42F04B;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jg())
		goto loc_42F04B;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_42F7F6;
	xor_(edx, edx);
	ebp = 0xD1; //mov
	bh = 0x8F; //mov
	bl = 0xFF; //mov
	esi = (int32_t)(intptr_t)dword_4EFC90; //mov
loc_42F16F:
	ecx = 0x81; //mov
	eax = 0xCB; //mov
	to8i(byte_4EFCB8) = bl; //mov
	to8i(byte_4EFCB9) = bl; //mov
	to8i(byte_4EFCBA) = bl; //mov
	to8i(byte_4EFCBB) = bl; //mov
	add(edx, (int32_t)4);
	to32i(dword_4EFC98) = ecx; //mov
	to32i(dword_4EFCA0) = eax; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	sub(ecx, (int32_t)0xA);
	eax = 0x81; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCB0) = eax; //mov
	sub(ecx, (int32_t)9);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	ah = 0x7F; //mov
	ecx = 0x81; //mov
	to8i(byte_4EFCB9) = bh; //mov
	to8i(byte_4EFCBA) = bh; //mov
	to8i(byte_4EFCBB) = bh; //mov
	to8i(byte_4EFCB8) = ah; //mov
	to32i(dword_4EFC98) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	eax = 0xCB; //mov
	sub(ecx, (int32_t)9);
	to32i(dword_4EFCA0) = eax; //mov
	to32i(dword_4EFCA8) = eax; //mov
	eax = 0x81; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCB0) = eax; //mov
	add(ecx, (int32_t)2);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = 0x203; //mov
	to8i(byte_4EFCB8) = bl; //mov
	to8i(byte_4EFCB9) = bl; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to8i(byte_4EFCBA) = bl; //mov
	sub(ecx, (int32_t)0xA);
	to8i(byte_4EFCBB) = bl; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	ecx = 0x203; //mov
	to32i(dword_4EFC98) = ebp; //mov
	to32i(dword_4EFCA0) = ecx; //mov
	ecx = to32i(dword_4EFC9C); //mov
	to32i(dword_4EFCB0) = ebp; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	sub(ecx, (int32_t)9);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	cl = 0x7F; //mov
	eax = 0x203; //mov
	to8i(byte_4EFCB9) = bh; //mov
	to8i(byte_4EFCB8) = cl; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to8i(byte_4EFCBA) = bh; //mov
	sub(ecx, (int32_t)9);
	to8i(byte_4EFCBB) = bh; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	ecx = 0x203; //mov
	to32i(dword_4EFC98) = ebp; //mov
	to32i(dword_4EFCA0) = ecx; //mov
	ecx = to32i(dword_4EFC9C); //mov
	to32i(dword_4EFCB0) = ebp; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	add(ecx, (int32_t)2);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	cmp(edx, (int32_t)0x20);
	if (jnz())
		goto loc_42F16F;
	eax = 1; //mov
	esp -= 4; _sub_4211E0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42F34D:
	eax = 0xBE; //mov
	edx = 0x80; //mov
	ecx = 0xFF; //mov
	ebx = 0x1B; //mov
	edi = 0x78; //mov
	xor_(esi, esi);
	to32i(dword_4EFC54) = eax; //mov
	to32i(dword_4EFC58) = edx; //mov
	to32i(dword_4EFC5C) = ecx; //mov
	to32i(dword_4EFC60) = ebx; //mov
	to32i(dword_4EFC64) = esi; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC68) = edi; //mov
	goto loc_42EFA4;
loc_42F395:
	ebp = 0x15C; //mov
	eax = 0xE6; //mov
	edx = 0x5D; //mov
	ecx = 0x27; //mov
	ebx = 0xA3; //mov
	edi = 0xB0FFFFFF; //mov
	to32i(dword_4EFC54) = ebp; //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = edx; //mov
	to32i(dword_4EFC60) = ecx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	esi = ecx; //mov
	to32i(dword_4EFC68) = ecx; //mov
	to32i(dword_4EFC70) = edi; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	ebp = 0xC3; //mov
	edi = 0x7F5F5F5F; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	xor_(esi, ecx);
	eax = 0xE6; //mov
	to32i(dword_4EFC54) = ebp; //mov
	to32i(dword_4EFC5C) = edx; //mov
	to32i(dword_4EFC60) = ecx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	to32i(dword_4EFC68) = esi; //mov
	goto loc_42F036;
loc_42F41C:
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_42F42A;
	cmp(to32i(dword_512AB8), (int32_t)0);
	if (jnz())
		goto loc_42F48A;
loc_42F42A:
	eax = to32i(dword_512AA8); //mov
	cmp(edx, eax);
	if (jnz())
		goto loc_42F63B;
	cmp(eax, (int32_t)5);
	if (ja())
		goto loc_42F123;
	goto *off_42ED80[ecx/4];
loc_42F446:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = eax; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = edi; //mov
	goto loc_42F11E;
loc_42F48A:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x49; //mov
	to32i(dword_4EFC70) = 0x2F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = ebx; //mov
	goto loc_42F11E;
loc_42F4D3:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x19; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	goto loc_42F113;
loc_42F511:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x49; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = ebx; //mov
	goto loc_42F11E;
loc_42F55A:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0xFF; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x61; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = ebp; //mov
	goto loc_42F11E;
loc_42F5A3:
	to32i(dword_4EFC54) = 0x86; //mov
	eax = to32i(esp+4); //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x31; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	goto loc_42F11E;
loc_42F5EF:
	to32i(dword_4EFC54) = 0x86; //mov
	eax = to32i(esp+8); //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = 0xFF; //mov
	to32i(dword_4EFC60) = 0x1C; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0xC7; //mov
	to32i(dword_4EFC70) = 0x7FFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	goto loc_42F11E;
loc_42F63B:
	cmp(edx, (int32_t)5);
	if (ja())
		goto loc_42F123;
	goto *off_42ED98[ecx/4];
loc_42F64A:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = eax; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = edi; //mov
	goto loc_42F11E;
loc_42F68E:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x19; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	goto loc_42F113;
loc_42F6CC:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x49; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = ebx; //mov
	goto loc_42F11E;
loc_42F715:
	to32i(dword_4EFC54) = 0x86; //mov
	to32i(dword_4EFC5C) = 0xFF; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x61; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC58) = ebp; //mov
	goto loc_42F11E;
loc_42F75E:
	to32i(dword_4EFC54) = 0x86; //mov
	eax = to32i(esp+4); //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = 0x9B; //mov
	to32i(dword_4EFC60) = 0x18; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0x31; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	goto loc_42F11E;
loc_42F7AA:
	to32i(dword_4EFC54) = 0x86; //mov
	eax = to32i(esp+8); //mov
	to32i(dword_4EFC58) = eax; //mov
	to32i(dword_4EFC5C) = 0xFF; //mov
	to32i(dword_4EFC60) = 0x1C; //mov
	xor_(eax, eax);
	to32i(dword_4EFC64) = eax; //mov
	to32i(dword_4EFC68) = 0xC7; //mov
	to32i(dword_4EFC70) = 0x7F5F5F5F; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	goto loc_42F11E;
loc_42F7F6:
	xor_(edx, edx);
	edi = 0xD1; //mov
	bh = 0x8F; //mov
	bl = 0xFF; //mov
	esi = (int32_t)(intptr_t)dword_4EFC90; //mov
loc_42F806:
	ecx = 0x81; //mov
	eax = 0xCB; //mov
	to8i(byte_4EFCB8) = bl; //mov
	to8i(byte_4EFCB9) = bl; //mov
	to8i(byte_4EFCBA) = bl; //mov
	to8i(byte_4EFCBB) = bl; //mov
	add(edx, (int32_t)0x10);
	to32i(dword_4EFC98) = ecx; //mov
	to32i(dword_4EFCA0) = eax; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	sub(ecx, (int32_t)0xA);
	eax = 0x81; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFCB0) = eax; //mov
	sub(ecx, (int32_t)9);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	ch = 0x7F; //mov
	eax = 0xCB; //mov
	to8i(byte_4EFCB9) = bh; //mov
	to8i(byte_4EFCBA) = bh; //mov
	to8i(byte_4EFCBB) = bh; //mov
	to8i(byte_4EFCB8) = ch; //mov
	ecx = 0x81; //mov
	to32i(dword_4EFCA0) = eax; //mov
	to32i(dword_4EFC98) = ecx; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	sub(ecx, (int32_t)9);
	eax = 0x81; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFCB0) = eax; //mov
	add(ecx, (int32_t)2);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = 0x203; //mov
	to8i(byte_4EFCB8) = bl; //mov
	to8i(byte_4EFCB9) = bl; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to8i(byte_4EFCBA) = bl; //mov
	sub(ecx, (int32_t)0xA);
	to8i(byte_4EFCBB) = bl; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	ecx = 0x203; //mov
	to32i(dword_4EFC98) = edi; //mov
	to32i(dword_4EFCA0) = ecx; //mov
	ecx = to32i(dword_4EFC9C); //mov
	to32i(dword_4EFCB0) = edi; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	sub(ecx, (int32_t)9);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	al = 0x7F; //mov
	to8i(byte_4EFCB9) = bh; //mov
	to8i(byte_4EFCBA) = bh; //mov
	to8i(byte_4EFCBB) = bh; //mov
	ecx = to32i(off_4D4BF4+edx); //mov
	to32i(dword_4EFC98) = edi; //mov
	sub(ecx, (int32_t)9);
	to32i(dword_4EFCB0) = edi; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	ecx = 0x203; //mov
	to8i(byte_4EFCB8) = al; //mov
	to32i(dword_4EFCA0) = ecx; //mov
	ecx = to32i(dword_4EFC9C); //mov
	eax = 0x203; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	ecx = to32i(dword_4D4C00+edx); //mov
	to32i(dword_4EFCA8) = eax; //mov
	add(ecx, (int32_t)2);
	eax = esi; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	cmp(edx, (int32_t)0x20);
	if (jnz())
		goto loc_42F806;
	eax = 1; //mov
	esp -= 4; _sub_4211E0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42F9F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_512208); //mov
	ecx = 0x24; //mov
	cmp(edx, (int32_t)1);
	if (jle())
		goto loc_42FA08;
	xor_(ecx, ecx);
loc_42FA08:
	esp -= 4; _sub_42FCB0(); esp += 4; //call
	ebx = 0x26; //mov
	esi = 0x1D; //mov
	edi = 0xD1; //mov
	ebp = 0xE3; //mov
	eax = 0x7FFFFFFF; //mov
	xor_(edx, edx);
	to32i(dword_4EFC5C) = ebx; //mov
	to32i(dword_4EFC60) = esi; //mov
	to32i(dword_4EFC64) = edi; //mov
	to32i(dword_4EFC68) = ebp; //mov
	to32i(dword_4EFC70) = eax; //mov
	ebx = (int32_t)(intptr_t)dword_4EFC4C; //mov
	esi = 0x30; //mov
loc_42FA4F:
	imul32(eax, edx, 0x26);
	add(eax, (int32_t)0x40);
	to32i(dword_4EFC58) = esi; //mov
	to32i(dword_4EFC54) = eax; //mov
	eax = ebx; //mov
	inc(edx);
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	cmp(edx, (int32_t)0xE);
	if (jl())
		goto loc_42FA4F;
	edi = 0xFF; //mov
	eax = 0x82; //mov
	edx = 0x1D; //mov
	ebp = 0x14E; //mov
	to32i(dword_4EFC58) = esi; //mov
	xor_(ebx, ebx);
	esi = 0xE5; //mov
	to32i(dword_4EFC54) = edi; //mov
	to32i(dword_4EFC5C) = eax; //mov
	to32i(dword_4EFC60) = edx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	edi = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	edx = 0x1C; //mov
	to32i(dword_4EFC68) = esi; //mov
	esi = 0xAC; //mov
	to32i(dword_4EFC70) = edi; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	edi = 0x7FFFFFFF; //mov
	to32i(dword_4EFC54) = ebp; //mov
	eax = (int32_t)(intptr_t)(ecx+0x9E); //lea
	to32i(dword_4EFC60) = edx; //mov
	to32i(dword_4EFC64) = ebx; //mov
	to32i(dword_4EFC58) = eax; //mov
	eax = 0xAA; //mov
	to32i(dword_4EFC68) = esi; //mov
	to32i(dword_4EFC5C) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC70) = edi; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ecx+0xC2); //lea
	to32i(dword_4EFC58) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC4C; //mov
	to32i(dword_4EFC54) = ebp; //mov
	esp -= 4; _sub_42ABF0(); esp += 4; //call
	eax = to32i(dword_512AA0); //mov
	add(eax, (int32_t)0x163);
	to32i(dword_4EFC98) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0xA6); //lea
	xor_(dl, dl);
	to32i(dword_4EFC9C) = eax; //mov
	eax = 0x1E5; //mov
	to8i(byte_4EFCB9) = dl; //mov
	to32i(dword_4EFCA0) = eax; //mov
	to32i(dword_4EFCA8) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0xB2); //lea
	to8i(byte_4EFCBA) = dl; //mov
	to32i(dword_4EFCAC) = eax; //mov
	eax = to32i(dword_4EFC98); //mov
	esi = to32i(dword_4EFC9C); //mov
	to32i(dword_4EFCB0) = eax; //mov
	ah = 0x7F; //mov
	to32i(dword_4EFCA4) = esi; //mov
	to8i(byte_4EFCB8) = ah; //mov
	al = 0xFF; //mov
	ebx = to32i(dword_4EFCAC); //mov
	to8i(byte_4EFCBB) = al; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to32i(dword_4EFCB4) = ebx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = to32i(dword_512AA4); //mov
	edi = 0x1E5; //mov
	add(eax, (int32_t)0x163);
	to32i(dword_4EFCA0) = edi; //mov
	to32i(dword_4EFC98) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0xCA); //lea
	to32i(dword_4EFCA8) = edi; //mov
	to32i(dword_4EFC9C) = eax; //mov
	edx = eax; //mov
	to32i(dword_4EFCA4) = eax; //mov
	add(ecx, (int32_t)0xD6);
	eax = to32i(dword_4EFC98); //mov
	to32i(dword_4EFCAC) = ecx; //mov
	to32i(dword_4EFCB0) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = 0x163; //mov
	to32i(dword_4EFC9C) = esi; //mov
	to32i(dword_4EFCA4) = esi; //mov
	to32i(dword_4EFCAC) = ebx; //mov
	to32i(dword_4EFCB4) = ebx; //mov
	to32i(dword_4EFC98) = eax; //mov
	eax = to32i(dword_512AA0); //mov
	esi = 0x163; //mov
	add(eax, (int32_t)0x163);
	bl = 0xFF; //mov
	to32i(dword_4EFCA0) = eax; //mov
	to32i(dword_4EFCA8) = eax; //mov
	ah = 0x7F; //mov
	to32i(dword_4EFCB0) = esi; //mov
	to8i(byte_4EFCB8) = ah; //mov
	xor_(al, al);
	to8i(byte_4EFCB9) = bl; //mov
	to8i(byte_4EFCBB) = al; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to8i(byte_4EFCBA) = bl; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	eax = to32i(dword_512AA4); //mov
	to32i(dword_4EFC98) = esi; //mov
	to32i(dword_4EFC9C) = edx; //mov
	to32i(dword_4EFCA4) = edx; //mov
	to32i(dword_4EFCAC) = ecx; //mov
	add(eax, esi);
	to32i(dword_4EFCB0) = esi; //mov
	to32i(dword_4EFCA0) = eax; //mov
	to32i(dword_4EFCA8) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to32i(dword_4EFCB4) = ecx; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_42FCB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	edx = 0x40; //mov
	ecx = 0x30; //mov
	ebp = 0x1B0; //mov
	ebx = 0x240; //mov
	push32(ebp);
	to32i(dword_4EFC98) = edx; //mov
	to32i(dword_4EFC9C) = ecx; //mov
	push32(ebx);
	to32i(dword_4EFCA0) = ebx; //mov
	to32i(dword_4EFCA4) = ecx; //mov
	push32(ecx);
	to32i(dword_4EFCA8) = ebx; //mov
	to32i(dword_4EFCAC) = ebp; //mov
	push32(edx);
	to32i(dword_4EFCB0) = edx; //mov
	to32i(dword_4EFCB4) = ebp; //mov
	esp -= 4; _sub_497714(); esp += 4; //call
	ah = 0x3F; //mov
	dl = 0x10; //mov
	to8i(byte_4EFCB8) = ah; //mov
	to8i(byte_4EFCB9) = dl; //mov
	to8i(byte_4EFCBB) = ah; //mov
	dh = 6; //mov
	eax = (int32_t)(intptr_t)dword_4EFC90; //mov
	to8i(byte_4EFCBA) = dh; //mov
	esp -= 4; _sub_42A980(); esp += 4; //call
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4301B0()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_4307F0(); esp += 4; //call
	esp -= 4; _sub_478020(); esp += 4; //call
	esp -= 4; _sub_476250(); esp += 4; //call
	esp -= 4; _sub_476CA0(); esp += 4; //call
	esp -= 4; _sub_4642D0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4EFCC8; //mov
	esp -= 4; _sub_489B70(); esp += 4; //call
	esp -= 4; _sub_478340(); esp += 4; //call
	esp -= 4; _sub_421980(); esp += 4; //call
	esp -= 4; _sub_4972BC(); esp += 4; //call
	_ExitProcess0();
}
Fn(void) Game::_sub_430200()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	ecx = 0x1E0; //mov
	edx = 0xA00000; //mov
	eax = 0x3E8; //mov
	ebx = 0x10; //mov
	esp -= 4; _sub_49CABC(); esp += 4; //call
	edx = 0x280; //mov
	to32i(dword_51304C) = eax; //mov
	to32i(dword_4DAB84) = ebx; //mov
	to32i(dword_4DAB7C) = edx; //mov
	to32i(dword_4DAB80) = ecx; //mov
	esp -= 4; _sub_49D020(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_430760; //mov
	eax = 1; //mov
	push32(sub_430380);
	push32(0x218);
	esp -= 4; _sub_482270(); esp += 4; //call
	cmp(to32i(dword_4DAB5C), (int32_t)0);
	if (jz())
		goto loc_430366;
	xor_(edi, edi);
	ebp = 1; //mov
	to32i(dword_4DB2EC) = edi; //mov
	to32i(dword_4DB208) = ebp; //mov
	esp -= 4; _sub_47F010(); esp += 4; //call
	eax = 0x80; //mov
	esp -= 4; _sub_483C18(); esp += 4; //call
	eax = 0x80; //mov
	xor_(edx, edx);
	to32i(dword_4DABCC) = eax; //mov
	eax = ebp; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4642F0(); esp += 4; //call
	esp -= 4; _sub_430780(); esp += 4; //call
	edx = 0x2000; //mov
	eax = 0x14; //mov
	esp -= 4; _sub_48550C(); esp += 4; //call
	esp -= 4; _sub_422530(); esp += 4; //call
#if !defined(__powerpc64__) && !defined(__PPC64__)
	esp -= 4; _sub_408730(); esp += 4; //call
#endif
	esp -= 4; _sub_476DC0(); esp += 4; //call
	esp -= 4; _sub_4769D0(); esp += 4; //call
	eax = ebp; //mov
	ecx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_464030(); esp += 4; //call
	ebx = ebp; //mov
	push32(dword_4EFCC8);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)sub_453840; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	esp -= 4; _sub_478040(); esp += 4; //call
	edx = ebp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_428830(); esp += 4; //call
	push32(edi);
	eax = grChromakeyMode(to32i(esp + 0)); esp += 4;
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(2);
	push32(0xA);
	esp -= 4; _sub_497738(); esp += 4; //call
	push32(edi);
	push32(2);
	esp -= 4; _sub_497738(); esp += 4; //call
	esp -= 4; _sub_433B30(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_430366:
	_ExitProcess0();
}
Fn(void) Game::_sub_430380()
{
	eax = to32i(esp+0x10); //mov
	test(eax, eax);
	if (jz())
		goto loc_43038D;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_430395;
loc_43038D:
	eax = 0x424D5144; //mov
	esp += 0x18; return;
loc_430395:
	eax = 1; //mov
	esp += 0x18; return;
}
Fn(void) Game::_sub_430760()
{
	cmp(edx, (int32_t)0x2C);
	if (jz())
		goto loc_43076B;
	eax = 1; //mov
	return;
loc_43076B:
	to8i(byte_4DB32B) = 1; //mov
	eax = 1; //mov
}
Fn(void) Game::_sub_430780()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x104);
	edx = to32i(dword_5134C8); //mov
	push32(edx);
	push32(aSplatcfg_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	eax = esp; //mov
	esp -= 4; _sub_49C628(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4307CA;
	ecx = to32i(esp+0x100); //mov
	cmp(ecx, (int32_t)0x40133333);
	if (jg())
		goto loc_4307CA;
	cmp(ecx, (int32_t)0x3F800000);
	if (jge())
		goto loc_4307D3;
loc_4307CA:
	add(esp, (int32_t)0x104);
	pop32(edx);
	pop32(ecx);
	return;
loc_4307D3:
	to32i(dword_4D4D20) = ecx; //mov
	add(esp, (int32_t)0x104);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4307F0()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)0x104);
	edx = to32i(dword_5134C8); //mov
	push32(edx);
	eax = to32i(dword_4D4D20); //mov
	push32(aSplatcfg_dat);
	to32i(esp+0x108) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	ebx = 4; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	eax = esp; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	add(esp, (int32_t)0x104);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_430840()
{
	eax = 1; //mov
	_sub_435500(); return; //jmp
}
Fn(void) Game::_sub_430850()
{
	xor_(eax, eax);
	_sub_435500(); return; //jmp
}
Fn(void) Game::_sub_430860()
{
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_430870()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)aCNfs2seGame3ra; //mov
	ecx = 0xB9; //mov
	to32i(eax) = 0xAF000; //mov
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aDynamicRenderi; //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0xAF000; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_430B80()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	esi = ebx; //mov
	ebp = ecx; //mov
	al = to8i(eax+0x14); //mov
	to8i(esp+0xC) = al; //mov
	al = to8i(edx+0x14); //mov
	to8i(esp+0xD) = al; //mov
	al = to8i(ebx+0x14); //mov
	to8i(esp+0xE) = al; //mov
	al = to8i(ecx+0x14); //mov
	to8i(esp+0xF) = al; //mov
	al = to8i(esp+0xC); //mov
	and_(al, to8i(esp+0xD));
	ah = to8i(esp+0xE); //mov
	and_(ah, al);
	al = to8i(esp+0xF); //mov
	and_(al, ah);
	if (jnz())
		goto loc_430C0A;
	al = to8i(esp+0xC); //mov
	or_(al, to8i(esp+0xD));
	or_(al, to8i(esp+0xE));
	bl = to8i(esp+0xF); //mov
	or_(bl, al);
	if (jz())
		goto loc_430C11;
	test(ah, ah);
	if (jnz())
		goto loc_430BE3;
	test(al, al);
	if (jnz())
		goto loc_430C1D;
	push32(esi);
	push32(edx);
	push32(edi);
	esp -= 4; _sub_4983B0(); esp += 4; //call
loc_430BE3:
	al = to8i(esp+0xC); //mov
	cl = to8i(esp+0xE); //mov
	and_(al, cl);
	ch = to8i(esp+0xF); //mov
	and_(al, ch);
	if (jnz())
		goto loc_430C0A;
	al = to8i(esp+0xC); //mov
	or_(al, cl);
	ah = ch; //mov
	or_(ah, al);
	if (jnz())
		goto loc_430C39;
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4983B0(); esp += 4; //call
loc_430C0A:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_430C11:
	push32(ecx);
	push32(esi);
	push32(edx);
	push32(edi);
	esp -= 4; _sub_497B24(); esp += 4; //call
	goto loc_430C0A;
loc_430C1D:
	to32i(esp) = edi; //mov
	to32i(esp+4) = edx; //mov
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	bl = al; //mov
	eax = esp; //mov
	to32i(esp+8) = esi; //mov
	esp -= 4; _sub_430C70(); esp += 4; //call
	goto loc_430BE3;
loc_430C39:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp) = edi; //mov
	to32i(esp+4) = esi; //mov
	to32i(esp+8) = ebp; //mov
	xor_(ebx, ebx);
	to8i(esp+0xD) = cl; //mov
	bl = ah; //mov
	eax = esp; //mov
	to8i(esp+0xE) = ch; //mov
	esp -= 4; _sub_430C70(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_430C70()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	to8i(esp+0x100) = bl; //mov
	ecx = (int32_t)(intptr_t)off_4D52C0; //mov
	edi = (int32_t)(intptr_t)dword_4F1E7C; //mov
	xor_(esi, esi);
	to32i(esp) = ecx; //mov
	to32i(esp+0xF8) = esi; //mov
	ecx = 8; //mov
	to32i(esp+0x14) = esi; //mov
	esi = to32i(eax); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)dword_4F1E9C; //mov
	esi = to32i(eax+4); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)dword_4F1EBC; //mov
	esi = to32i(eax+8); //mov
	ebx = 3; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(eax, eax);
	edi = (int32_t)(intptr_t)dword_4F16C4; //mov
	esi = (int32_t)(intptr_t)dword_4F15FC; //mov
	to32i(dword_4F1E90) = eax; //mov
	to32i(dword_4F1EB0) = eax; //mov
	to32i(dword_4F1ED0) = eax; //mov
	ah = to8i(esp+0x100); //mov
	to32i(esp+0x10) = edi; //mov
	test(ah, (int8_t)0x30);
	if (jz())
		goto loc_4314B8;
	test(ah, (int8_t)0x10);
	if (jz())
		goto loc_43108C;
	eax = 2; //mov
	edi = (int32_t)(intptr_t)off_4D52C0; //mov
	to32i(esp+0x78) = edx; //mov
	xor_(ebp, ebp);
	xor_(ecx, ecx);
	to32i(esp+0xEC) = eax; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp+0x7C) = edi; //mov
loc_430D20:
	eax = to32i(esp+0xEC); //mov
	add(eax, edx);
	to32i(esp+0x44) = eax; //mov
	test(to8i(eax), (int8_t)0x10);
	if (jnz())
		goto loc_430D71;
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0xEC); //mov
	to32i(esp+0xD0) = eax; //mov
	shl(edi, (int32_t)2);
	eax = (int32_t)(intptr_t)dword_4F16C4; //mov
	add(edi, (int32_t)(intptr_t)off_4D52C0);
	add(eax, to32i(esp+0xD0));
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	edi = ebp; //mov
	eax = to32i(esp+0x44); //mov
	add(edi, (int32_t)(intptr_t)dword_4F15FC);
	al = to8i(eax); //mov
	inc(ebp);
	to8i(edi) = al; //mov
loc_430D71:
	eax = to32i(esp+0xEC); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(esp+0x78); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_431033;
	eax = to32i(esp+0xEC); //mov
	edi = (int32_t)(intptr_t)off_4D52C0; //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fld(to32f(dword_4F1E00));
	fld(to32f(edi+0xC));
	fsub_st(0, 1);
	fdivrp_st(2, 0);
	fld(to32f(edi));
	fsub(to32f(eax));
	fxch_st(2);
	fstp(to32f(esp+0xF0));
	fxch_st(1);
	fmul(to32f(esp+0xF0));
	fld(to32f(edi+4));
	fsub(to32f(eax+4));
	fmul(to32f(esp+0xF0));
	fxch_st(1);
	fsubr(to32f(edi));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFCFC+ecx));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+4));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD00+ecx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0x24) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(edi, (int32_t)0xFF);
	shr(eax, (int32_t)0x10);
	to32i(esp+0x18) = edi; //mov
	edi = to32i(esp+0x7C); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0x30) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0x28) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x18); //mov
	sub(eax, edi);
	edi = to32i(esp+0x20); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul(to32f(esp+0xF0));
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0x24); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0x28); //mov
	fmul(to32f(esp+0xF0));
	sub(edi, eax);
	eax = to32i(esp+0x30); //mov
	to32i(esp+0xFC) = edi; //mov
	edi = to32i(esp+0x2C); //mov
	sub(edi, eax);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = edi; //mov
	fmul(to32f(esp+0xF0));
	fild(to32i(esp+0xFC));
	fmul(to32f(esp+0xF0));
	fxch_st(3);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD4));
	eax = to32i(esp+0xD0); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	edi = to32i(esp+0x18); //mov
	fistp(to32i(esp+0xD0));
	sub(edi, eax);
	eax = to32i(esp+0xD4); //mov
	to32i(esp+0x18) = edi; //mov
	edi = to32i(esp+0x1C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD0); //mov
	to32i(esp+0x1C) = edi; //mov
	edi = to32i(esp+0x24); //mov
	fistp(to32i(esp+0xD0));
	sub(edi, eax);
	eax = to32i(esp+0xD0); //mov
	to32i(esp+0x24) = edi; //mov
	sub(to32i(esp+0x2C), eax);
	edi = to32i(esp+0x1C); //mov
	eax = to32i(esp+0x18); //mov
	shl(edi, (int32_t)0x10);
	shl(eax, (int32_t)0x18);
	or_(edi, eax);
	eax = to32i(esp+0x24); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = to32i(esp+0x2C); //mov
	or_(eax, edi);
	to32i(dword_4EFD0C+ecx) = eax; //mov
	xor_(eax, eax);
	edi = (int32_t)(intptr_t)dword_4F15FC; //mov
	to32i(dword_4EFD04+ecx) = eax; //mov
	add(edi, ebp);
	fstp(to32f(flt_4EFD08+ecx));
	to8i(edi) = 0x10; //mov
	fld(to32f(flt_4EFD00+ecx));
	fcomp(to32f(dword_4F1DF4));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_4324BF;
	or_(to8i(edi), (int8_t)8);
loc_430FEA:
	edi = (int32_t)(intptr_t)dword_4F15FC; //mov
	fld(to32f(flt_4EFCFC+ecx));
	add(edi, ebp);
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_4324DC;
	or_(to8i(edi), (int8_t)1);
loc_431009:
	edi = to32i(esp+0xF8); //mov
	inc(edi);
	eax = ecx; //mov
	to32i(esp+0xF8) = edi; //mov
	edi = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edi, eax);
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(ecx, (int32_t)0x20);
	add(eax, (int32_t)(intptr_t)dword_4F16C4);
	inc(ebp);
	to32i(eax) = edi; //mov
loc_431033:
	eax = to32i(esp+4); //mov
	to32i(esp+0xEC) = eax; //mov
	eax = to32i(esp+0x78); //mov
	edi = to32i(esp+0x7C); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x78) = eax; //mov
	eax = to32i(esp+4); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x7C) = edi; //mov
	to32i(esp+4) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_430D20;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	edx = (int32_t)(intptr_t)dword_4F16C4; //mov
	ecx = to32i(esp+0x10); //mov
	ebx = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = edx; //mov
	add(ecx, eax);
	edx = esi; //mov
	to32i(esp+0x10) = ecx; //mov
	add(esi, ebp);
loc_43108C:
	test(to8i(esp+0x100), (int8_t)0x20);
	if (jz())
		goto loc_431491;
	ecx = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(esp+0x80) = edx; //mov
	xor_(ebp, ebp);
	to32i(esp+0xB8) = eax; //mov
	to32i(esp+0xCC) = ebp; //mov
	eax = to32i(esp); //mov
	shl(ecx, (int32_t)5);
	to32i(esp+0x84) = eax; //mov
loc_4310C8:
	eax = to32i(esp+0xB8); //mov
	add(eax, edx);
	to32i(esp+0x48) = eax; //mov
	test(to8i(eax), (int8_t)0x20);
	if (jnz())
		goto loc_431114;
	eax = to32i(esp+0xB8); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0x10); //mov
	add(edi, to32i(esp+0xD0));
	eax = to32i(eax); //mov
	to32i(edi) = eax; //mov
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0x48); //mov
	inc(ebp);
	al = to8i(eax); //mov
	to8i(edi) = al; //mov
loc_431114:
	eax = to32i(esp+0xB8); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(esp+0x80); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)0x20);
	if (jz())
		goto loc_431424;
	eax = to32i(esp+0xB8); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0x84); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fld(to32f(edi));
	fld(to32f(dword_4F1DF8));
	fld(to32f(edi+0xC));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+4));
	fsub(to32f(eax+4));
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFCFC+ecx));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+4));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD00+ecx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE4) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xDC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD4) = eax; //mov
	eax = to32i(esp+0x84); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xD8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x18);
	edi = to32i(esp+0xD0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	eax = to32i(esp+0xD4); //mov
	to32i(esp+0xFC) = edi; //mov
	edi = to32i(esp+0xD8); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul_st(0, 2);
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0xDC); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0xE0); //mov
	fmul_st(0, 3);
	sub(edi, eax);
	eax = to32i(esp+0xE8); //mov
	to32i(esp+0xFC) = edi; //mov
	edi = to32i(esp+0xE4); //mov
	sub(edi, eax);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = edi; //mov
	fmul_st(0, 4);
	fild(to32i(esp+0xFC));
	fmulp_st(5, 0);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xE0));
	eax = to32i(esp+0xD8); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	edi = to32i(esp+0xD0); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xE0); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xD4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xDC); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xDC) = edi; //mov
	edi = to32i(esp+0xE4); //mov
	sub(edi, eax);
	eax = to32i(esp+0xD0); //mov
	shl(eax, (int32_t)0x18);
	to32i(esp+0xE4) = edi; //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	edi = to32i(esp+0xD0); //mov
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	eax = to32i(esp+0xDC); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = to32i(esp+0xE4); //mov
	or_(eax, edi);
	to32i(dword_4EFD0C+ecx) = eax; //mov
	to32i(dword_4EFD04+ecx) = 0x3F800000; //mov
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	fstp(to32f(flt_4EFD08+ecx));
	to8i(edi) = 0x10; //mov
	fld(to32f(flt_4EFD00+ecx));
	fcomp(to32f(dword_4F1DF4));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_43250B;
	or_(to8i(edi), (int8_t)8);
loc_4313D0:
	fld(to32f(flt_4EFCFC+ecx));
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_432528;
	or_(to8i(edi), (int8_t)1);
loc_4313EB:
	edi = to32i(esp+0xF8); //mov
	inc(edi);
	eax = ecx; //mov
	to32i(esp+0xF8) = edi; //mov
	edi = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(ecx, (int32_t)0x20);
	add(eax, edi);
	edi = to32i(esp+0xD0); //mov
	inc(ebp);
	to32i(eax) = edi; //mov
loc_431424:
	eax = to32i(esp+0xCC); //mov
	to32i(esp+0xB8) = eax; //mov
	eax = to32i(esp+0x80); //mov
	edi = to32i(esp+0x84); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x80) = eax; //mov
	eax = to32i(esp+0xCC); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x84) = edi; //mov
	to32i(esp+0xCC) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4310C8;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	eax = to32i(esp+0x10); //mov
	ecx = to32i(esp+0x10); //mov
	ebx = ebp; //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edx = esi; //mov
	add(ecx, eax);
	add(esi, ebp);
	to32i(esp+0x10) = ecx; //mov
loc_431491:
	dec(ebp);
	ecx = (int32_t)(intptr_t)(edx+ebp); //lea
	al = to8i(ecx); //mov
	to8i(esp+0x100) = al; //mov
loc_43149E:
	al = to8i(ecx-1); //mov
	ah = to8i(esp+0x100); //mov
	dec(ebp);
	or_(ah, al);
	dec(ecx);
	to8i(esp+0x100) = ah; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_43149E;
loc_4314B8:
	cl = to8i(esp+0x100); //mov
	test(cl, (int8_t)0xC);
	if (jz())
		goto loc_431CA0;
	test(cl, (int8_t)4);
	if (jz())
		goto loc_43189E;
	ecx = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(esp+0x88) = edx; //mov
	xor_(ebp, ebp);
	to32i(esp+0xB4) = eax; //mov
	to32i(esp+0xC8) = ebp; //mov
	eax = to32i(esp); //mov
	shl(ecx, (int32_t)5);
	to32i(esp+0x8C) = eax; //mov
loc_4314FF:
	eax = to32i(esp+0xB4); //mov
	add(eax, edx);
	to32i(esp+0x4C) = eax; //mov
	test(to8i(eax), (int8_t)4);
	if (jnz())
		goto loc_43154D;
	eax = to32i(esp+0xB4); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(edi, eax);
	eax = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	to32i(edi) = eax; //mov
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0x4C); //mov
	inc(ebp);
	al = to8i(eax); //mov
	to8i(edi) = al; //mov
loc_43154D:
	eax = to32i(esp+0xB4); //mov
	add(eax, edx);
	to32i(esp+0x50) = eax; //mov
	edi = to32i(esp+0x50); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x88); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)4);
	if (jz())
		goto loc_431831;
	eax = to32i(esp+0xB4); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0x8C); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi+4));
	fsub(to32f(eax+4));
	fld(to32f(edi));
	fld(to32f(dword_4F1DEC));
	fld(to32f(edi+4));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFCFC+ecx));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+0xC));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD08+ecx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE4) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xDC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD4) = eax; //mov
	eax = to32i(esp+0x8C); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD8) = eax; //mov
	eax = to32i(esp+0xD0); //mov
	sub(eax, edi);
	edi = to32i(esp+0xD8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul_st(0, 2);
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0xE0); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0xDC); //mov
	fmul_st(0, 3);
	sub(eax, edi);
	edi = to32i(esp+0xE8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xE4); //mov
	sub(eax, edi);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = eax; //mov
	fmul_st(0, 4);
	fild(to32i(esp+0xFC));
	fmulp_st(5, 0);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xE0));
	edi = to32i(esp+0xD0); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	eax = to32i(esp+0xD8); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xE0); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xD4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xDC); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xDC) = edi; //mov
	sub(to32i(esp+0xE4), eax);
	edi = to32i(esp+0xD4); //mov
	eax = to32i(esp+0xD0); //mov
	shl(edi, (int32_t)0x10);
	shl(eax, (int32_t)0x18);
	or_(edi, eax);
	eax = to32i(esp+0xDC); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = to32i(esp+0xE4); //mov
	or_(eax, edi);
	to32i(dword_4EFD0C+ecx) = eax; //mov
	edi = to32i(esp+0x50); //mov
	fstp(to32f(flt_4EFD00+ecx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xF0);
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	or_(al, (int8_t)4);
	to8i(edi) = al; //mov
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_432545;
	or_(to8i(edi), (int8_t)1);
loc_4317F8:
	edi = to32i(esp+0xF8); //mov
	inc(edi);
	eax = ecx; //mov
	to32i(esp+0xF8) = edi; //mov
	edi = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(ecx, (int32_t)0x20);
	add(eax, edi);
	edi = to32i(esp+0xD0); //mov
	inc(ebp);
	to32i(eax) = edi; //mov
loc_431831:
	eax = to32i(esp+0xC8); //mov
	to32i(esp+0xB4) = eax; //mov
	eax = to32i(esp+0x88); //mov
	edi = to32i(esp+0x8C); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x88) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x8C) = edi; //mov
	to32i(esp+0xC8) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4314FF;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	eax = to32i(esp+0x10); //mov
	ecx = to32i(esp+0x10); //mov
	ebx = ebp; //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edx = esi; //mov
	add(ecx, eax);
	add(esi, ebp);
	to32i(esp+0x10) = ecx; //mov
loc_43189E:
	test(to8i(esp+0x100), (int8_t)8);
	if (jz())
		goto loc_431C79;
	ecx = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(esp+0x90) = edx; //mov
	xor_(ebp, ebp);
	to32i(esp+0xB0) = eax; //mov
	to32i(esp+0xC4) = ebp; //mov
	eax = to32i(esp); //mov
	shl(ecx, (int32_t)5);
	to32i(esp+0x94) = eax; //mov
loc_4318DA:
	eax = to32i(esp+0xB0); //mov
	add(eax, edx);
	to32i(esp+0x54) = eax; //mov
	test(to8i(eax), (int8_t)8);
	if (jnz())
		goto loc_431928;
	eax = to32i(esp+0xB0); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(edi, eax);
	eax = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	to32i(edi) = eax; //mov
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0x54); //mov
	inc(ebp);
	al = to8i(eax); //mov
	to8i(edi) = al; //mov
loc_431928:
	eax = to32i(esp+0xB0); //mov
	add(eax, edx);
	to32i(esp+0x58) = eax; //mov
	edi = to32i(esp+0x58); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x90); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)8);
	if (jz())
		goto loc_431C0C;
	eax = to32i(esp+0xB0); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0x94); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi+4));
	fsub(to32f(eax+4));
	fld(to32f(edi));
	fld(to32f(dword_4F1DF4));
	fld(to32f(edi+4));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFCFC+ecx));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+0xC));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD08+ecx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE4) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xDC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD4) = eax; //mov
	eax = to32i(esp+0x94); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD8) = eax; //mov
	eax = to32i(esp+0xD0); //mov
	sub(eax, edi);
	edi = to32i(esp+0xD8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul_st(0, 2);
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0xE0); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0xDC); //mov
	fmul_st(0, 3);
	sub(eax, edi);
	edi = to32i(esp+0xE8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xE4); //mov
	sub(eax, edi);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = eax; //mov
	fmul_st(0, 4);
	fild(to32i(esp+0xFC));
	fmulp_st(5, 0);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xE0));
	edi = to32i(esp+0xD0); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	eax = to32i(esp+0xD8); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xE0); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xD4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xDC); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xDC) = edi; //mov
	sub(to32i(esp+0xE4), eax);
	edi = to32i(esp+0xD4); //mov
	eax = to32i(esp+0xD0); //mov
	shl(edi, (int32_t)0x10);
	shl(eax, (int32_t)0x18);
	or_(eax, edi);
	edi = to32i(esp+0xDC); //mov
	shl(edi, (int32_t)8);
	or_(eax, edi);
	edi = to32i(esp+0xE4); //mov
	or_(eax, edi);
	to32i(dword_4EFD0C+ecx) = eax; //mov
	edi = to32i(esp+0x58); //mov
	fstp(to32f(flt_4EFD00+ecx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xF0);
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	or_(al, (int8_t)8);
	to8i(edi) = al; //mov
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_432562;
	or_(to8i(edi), (int8_t)1);
loc_431BD3:
	edi = to32i(esp+0xF8); //mov
	inc(edi);
	eax = ecx; //mov
	to32i(esp+0xF8) = edi; //mov
	edi = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(ecx, (int32_t)0x20);
	add(eax, edi);
	edi = to32i(esp+0xD0); //mov
	inc(ebp);
	to32i(eax) = edi; //mov
loc_431C0C:
	eax = to32i(esp+0xC4); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(esp+0x90); //mov
	edi = to32i(esp+0x94); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x90) = eax; //mov
	eax = to32i(esp+0xC4); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x94) = edi; //mov
	to32i(esp+0xC4) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4318DA;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	eax = to32i(esp+0x10); //mov
	ecx = to32i(esp+0x10); //mov
	ebx = ebp; //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	edx = esi; //mov
	add(ecx, eax);
	add(esi, ebp);
	to32i(esp+0x10) = ecx; //mov
loc_431C79:
	dec(ebp);
	ecx = (int32_t)(intptr_t)(edx+ebp); //lea
	al = to8i(ecx); //mov
	to8i(esp+0x100) = al; //mov
loc_431C86:
	al = to8i(ecx-1); //mov
	ah = to8i(esp+0x100); //mov
	dec(ebp);
	or_(ah, al);
	dec(ecx);
	to8i(esp+0x100) = ah; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_431C86;
loc_431CA0:
	cl = to8i(esp+0x100); //mov
	test(cl, (int8_t)3);
	if (jz())
		goto loc_432440;
	test(cl, (int8_t)1);
	if (jz())
		goto loc_432079;
	ebp = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(esp+0x98) = edx; //mov
	xor_(ecx, ecx);
	to32i(esp+0xAC) = eax; //mov
	to32i(esp+0xC0) = ecx; //mov
	eax = to32i(esp); //mov
	shl(ebp, (int32_t)5);
	to32i(esp+0x9C) = eax; //mov
loc_431CE7:
	eax = to32i(esp+0xAC); //mov
	add(eax, edx);
	to32i(esp+0x5C) = eax; //mov
	test(to8i(eax), (int8_t)1);
	if (jnz())
		goto loc_431D35;
	eax = to32i(esp+0xAC); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	edi = to32i(esp+0x10); //mov
	add(edi, eax);
	eax = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	to32i(edi) = eax; //mov
	eax = ecx; //mov
	edi = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0x5C); //mov
	inc(ecx);
	al = to8i(eax); //mov
	to8i(edi) = al; //mov
loc_431D35:
	eax = to32i(esp+0xAC); //mov
	add(eax, edx);
	to32i(esp+0x60) = eax; //mov
	edi = to32i(esp+0x60); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x98); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)1);
	if (jz())
		goto loc_43200C;
	eax = to32i(esp+0xAC); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0x9C); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi));
	fsub(to32f(eax));
	fld(to32f(edi+4));
	fld(to32f(dword_4F1DF0));
	fld(to32f(edi));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax+4));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+4));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD00+ebp));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+0xC));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD08+ebp));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE4) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xDC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD4) = eax; //mov
	eax = to32i(esp+0x9C); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD8) = eax; //mov
	eax = to32i(esp+0xD0); //mov
	sub(eax, edi);
	edi = to32i(esp+0xD8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul_st(0, 2);
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0xE0); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0xDC); //mov
	fmul_st(0, 3);
	sub(eax, edi);
	edi = to32i(esp+0xE8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xE4); //mov
	sub(eax, edi);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = eax; //mov
	fmul_st(0, 4);
	fild(to32i(esp+0xFC));
	fmulp_st(5, 0);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xE0));
	edi = to32i(esp+0xD0); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	eax = to32i(esp+0xD8); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xE0); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xD4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xDC); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xDC) = edi; //mov
	edi = to32i(esp+0xE4); //mov
	sub(edi, eax);
	eax = to32i(esp+0xD4); //mov
	to32i(esp+0xE4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	shl(eax, (int32_t)0x10);
	shl(edi, (int32_t)0x18);
	or_(eax, edi);
	edi = to32i(esp+0xDC); //mov
	shl(edi, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xE4); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+ebp) = edi; //mov
	edi = to32i(esp+0x60); //mov
	fstp(to32f(flt_4EFCFC+ebp));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xFC);
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	or_(al, (int8_t)1);
	to8i(edi) = al; //mov
	edi = to32i(esp+0xF8); //mov
	to32i(esp+0x64) = ebp; //mov
	inc(edi);
	eax = (int32_t)(intptr_t)flt_4EFCFC; //mov
	to32i(esp+0xF8) = edi; //mov
	add(eax, to32i(esp+0x64));
	edi = (int32_t)(intptr_t)(ecx*4+0); //lea
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0x10); //mov
	add(edi, to32i(esp+0xD0));
	add(ebp, (int32_t)0x20);
	inc(ecx);
	to32i(edi) = eax; //mov
loc_43200C:
	eax = to32i(esp+0xC0); //mov
	to32i(esp+0xAC) = eax; //mov
	eax = to32i(esp+0x98); //mov
	edi = to32i(esp+0x9C); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x98) = eax; //mov
	eax = to32i(esp+0xC0); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x9C) = edi; //mov
	to32i(esp+0xC0) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_431CE7;
	cmp(ecx, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	eax = to32i(esp+0x10); //mov
	edi = to32i(esp+0x10); //mov
	ebx = ecx; //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	edx = esi; //mov
	add(edi, eax);
	add(esi, ecx);
	to32i(esp+0x10) = edi; //mov
loc_432079:
	test(to8i(esp+0x100), (int8_t)2);
	if (jz())
		goto loc_432440;
	ebp = to32i(esp+0xF8); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(esp+0xA0) = edx; //mov
	xor_(ecx, ecx);
	to32i(esp+0xA8) = eax; //mov
	to32i(esp+0xBC) = ecx; //mov
	eax = to32i(esp); //mov
	shl(ebp, (int32_t)5);
	to32i(esp+0xA4) = eax; //mov
loc_4320B5:
	eax = to32i(esp+0xA8); //mov
	add(eax, edx);
	to32i(esp+0x68) = eax; //mov
	test(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_4320FF;
	eax = to32i(esp+0xA8); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, to32i(esp+0x10));
	edi = to32i(esp+0xD0); //mov
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x68); //mov
	edi = ecx; //mov
	al = to8i(eax); //mov
	inc(ecx);
	to8i(edi+esi) = al; //mov
loc_4320FF:
	eax = to32i(esp+0xA8); //mov
	add(eax, edx);
	to32i(esp+0x6C) = eax; //mov
	edi = to32i(esp+0x6C); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xA0); //mov
	to32i(esp+0xD4) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	xor_(eax, to32i(esp+0xD0));
	test(al, (int8_t)2);
	if (jz())
		goto loc_4323E8;
	eax = to32i(esp+0xA8); //mov
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xA4); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xD0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi));
	fsub(to32f(eax));
	fld(to32f(edi+4));
	fld(to32f(dword_4F1DFC));
	fld(to32f(edi));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax+4));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+4));
	eax = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD00+ebp));
	eax = to32i(eax); //mov
	fsubr(to32f(eax+0xC));
	edi = to32i(esp+0xD4); //mov
	fstp(to32f(flt_4EFD08+ebp));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE4) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xDC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD4) = eax; //mov
	eax = to32i(esp+0xA4); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(edi+0x10); //mov
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE8) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	to32i(esp+0xE0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	shr(eax, (int32_t)0x10);
	edi = to32i(edi+0x10); //mov
	shr(edi, (int32_t)0x18);
	and_(eax, (int32_t)0xFF);
	and_(edi, (int32_t)0xFF);
	to32i(esp+0xD8) = eax; //mov
	eax = to32i(esp+0xD0); //mov
	sub(eax, edi);
	edi = to32i(esp+0xD8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	fild(to32i(esp+0xFC));
	sub(eax, edi);
	fmul_st(0, 2);
	to32i(esp+0xFC) = eax; //mov
	edi = to32i(esp+0xE0); //mov
	fild(to32i(esp+0xFC));
	eax = to32i(esp+0xDC); //mov
	fmul_st(0, 3);
	sub(eax, edi);
	edi = to32i(esp+0xE8); //mov
	to32i(esp+0xFC) = eax; //mov
	eax = to32i(esp+0xE4); //mov
	sub(eax, edi);
	fild(to32i(esp+0xFC));
	to32i(esp+0xFC) = eax; //mov
	fmul_st(0, 4);
	fild(to32i(esp+0xFC));
	fmulp_st(5, 0);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD8));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xE0));
	edi = to32i(esp+0xD0); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	eax = to32i(esp+0xD8); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xE0); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xD4); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xD4) = edi; //mov
	edi = to32i(esp+0xDC); //mov
	fistp(to32i(esp+0xD8));
	sub(edi, eax);
	eax = to32i(esp+0xD8); //mov
	to32i(esp+0xDC) = edi; //mov
	edi = to32i(esp+0xE4); //mov
	sub(edi, eax);
	eax = to32i(esp+0xD0); //mov
	shl(eax, (int32_t)0x18);
	to32i(esp+0xE4) = edi; //mov
	to32i(esp+0xD0) = eax; //mov
	eax = to32i(esp+0xD4); //mov
	edi = to32i(esp+0xD0); //mov
	shl(eax, (int32_t)0x10);
	or_(edi, eax);
	eax = to32i(esp+0xDC); //mov
	shl(eax, (int32_t)8);
	or_(eax, edi);
	edi = to32i(esp+0xE4); //mov
	or_(eax, edi);
	to32i(dword_4EFD0C+ebp) = eax; //mov
	edi = to32i(esp+0x6C); //mov
	fstp(to32f(flt_4EFCFC+ebp));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xFC);
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	or_(al, (int8_t)2);
	to32i(esp+0x70) = ebp; //mov
	to8i(edi) = al; //mov
	eax = to32i(esp+0xF8); //mov
	inc(eax);
	edi = to32i(esp+0x70); //mov
	to32i(esp+0xF8) = eax; //mov
	eax = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(eax, edi);
	edi = to32i(esp+0x10); //mov
	to32i(esp+0xD0) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(ebp, (int32_t)0x20);
	add(eax, edi);
	edi = to32i(esp+0xD0); //mov
	inc(ecx);
	to32i(eax) = edi; //mov
loc_4323E8:
	eax = to32i(esp+0xBC); //mov
	to32i(esp+0xA8) = eax; //mov
	eax = to32i(esp+0xA0); //mov
	edi = to32i(esp+0xA4); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0xA0) = eax; //mov
	eax = to32i(esp+0xBC); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0xA4) = edi; //mov
	to32i(esp+0xBC) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4320B5;
	cmp(ecx, (int32_t)3);
	if (jl())
		goto loc_4324F9;
	eax = to32i(esp+0x10); //mov
	ebx = ecx; //mov
	to32i(esp) = eax; //mov
loc_432440:
	xor_(esi, esi);
	test(ebx, ebx);
	if (jle())
		goto loc_43246C;
	edx = to32i(esp); //mov
loc_432449:
	ecx = to32i(edx); //mov
	fld1();
	fld(to32f(ecx+0x18));
	fxch_st(1);
	fdiv(to32f(ecx+0xC));
	fxch_st(1);
	fmul_st(0, 1);
	fstp(to32f(ecx+0x18));
	ecx = to32i(edx); //mov
	fmul(to32f(ecx+0x1C));
	add(edx, (int32_t)4);
	inc(esi);
	fstp(to32f(ecx+0x1C));
	cmp(esi, ebx);
	if (jl())
		goto loc_432449;
loc_43246C:
	dec(ebx);
	edx = to32i(esp); //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	ecx = to32i(esp); //mov
	dec(ebx);
	ebp = to32i(esp); //mov
	esi = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, edx);
	add(esi, ecx);
	ebp = to32i(ebp+0); //mov
	edx = to32i(eax); //mov
	edi = to32i(esi); //mov
loc_432490:
	push32(edx);
	eax = to32i(esp+0x18); //mov
	push32(edi);
	sub(esi, (int32_t)4);
	inc(eax);
	push32(ebp);
	dec(ebx);
	to32i(esp+0x20) = eax; //mov
	esp -= 4; _sub_4983B0(); esp += 4; //call
	edx = edi; //mov
	edi = to32i(esi); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_432490;
	ebx = to32i(esp+0x14); //mov
	eax = ebx; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4324BF:
	fld(to32f(flt_4EFD00+ecx));
	fcomp(to32f(dword_4F1DEC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_430FEA;
	or_(to8i(edi), (int8_t)4);
	goto loc_430FEA;
loc_4324DC:
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_431009;
	or_(to8i(edi), (int8_t)2);
	goto loc_431009;
loc_4324F9:
	ebx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43250B:
	fld(to32f(flt_4EFD00+ecx));
	fcomp(to32f(dword_4F1DEC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4313D0;
	or_(to8i(edi), (int8_t)4);
	goto loc_4313D0;
loc_432528:
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4313EB;
	or_(to8i(edi), (int8_t)2);
	goto loc_4313EB;
loc_432545:
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4317F8;
	or_(to8i(edi), (int8_t)2);
	goto loc_4317F8;
loc_432562:
	fld(to32f(flt_4EFCFC+ecx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_431BD3;
	or_(to8i(edi), (int8_t)2);
	goto loc_431BD3;
}
Fn(void) Game::_sub_432580()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	esi = ebx; //mov
	ebp = ecx; //mov
	al = to8i(eax+0x14); //mov
	to8i(esp+0xC) = al; //mov
	al = to8i(edx+0x14); //mov
	to8i(esp+0xD) = al; //mov
	al = to8i(ebx+0x14); //mov
	to8i(esp+0xE) = al; //mov
	al = to8i(ecx+0x14); //mov
	to8i(esp+0xF) = al; //mov
	al = to8i(esp+0xC); //mov
	and_(al, to8i(esp+0xD));
	ah = to8i(esp+0xE); //mov
	and_(ah, al);
	al = to8i(esp+0xF); //mov
	and_(al, ah);
	if (jnz())
		goto loc_43260A;
	al = to8i(esp+0xC); //mov
	or_(al, to8i(esp+0xD));
	or_(al, to8i(esp+0xE));
	bl = to8i(esp+0xF); //mov
	or_(bl, al);
	if (jz())
		goto loc_432611;
	test(ah, ah);
	if (jnz())
		goto loc_4325E3;
	test(al, al);
	if (jnz())
		goto loc_43261D;
	push32(esi);
	push32(edx);
	push32(edi);
	esp -= 4; _sub_4983B0(); esp += 4; //call
loc_4325E3:
	al = to8i(esp+0xC); //mov
	cl = to8i(esp+0xE); //mov
	and_(al, cl);
	ch = to8i(esp+0xF); //mov
	and_(al, ch);
	if (jnz())
		goto loc_43260A;
	al = to8i(esp+0xC); //mov
	or_(al, cl);
	ah = ch; //mov
	or_(ah, al);
	if (jnz())
		goto loc_432639;
	push32(ebp);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_4983B0(); esp += 4; //call
loc_43260A:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_432611:
	push32(ecx);
	push32(esi);
	push32(edx);
	push32(edi);
	esp -= 4; _sub_497B24(); esp += 4; //call
	goto loc_43260A;
loc_43261D:
	to32i(esp) = edi; //mov
	to32i(esp+4) = edx; //mov
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	bl = al; //mov
	eax = esp; //mov
	to32i(esp+8) = esi; //mov
	esp -= 4; _sub_4326E0(); esp += 4; //call
	goto loc_4325E3;
loc_432639:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp) = edi; //mov
	to32i(esp+4) = esi; //mov
	to32i(esp+8) = ebp; //mov
	xor_(ebx, ebx);
	to8i(esp+0xD) = cl; //mov
	bl = ah; //mov
	eax = esp; //mov
	to8i(esp+0xE) = ch; //mov
	esp -= 4; _sub_4326E0(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_432670()
{
	push32(ecx);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	al = to8i(eax+0x14); //mov
	to8i(esp+0xC) = al; //mov
	al = to8i(edx+0x14); //mov
	to8i(esp+0xD) = al; //mov
	al = to8i(ebx+0x14); //mov
	to8i(esp+0xE) = al; //mov
	al = to8i(esp+0xC); //mov
	and_(al, to8i(esp+0xD));
	and_(al, to8i(esp+0xE));
	if (jnz())
		goto loc_4326B0;
	al = to8i(esp+0xC); //mov
	or_(al, to8i(esp+0xD));
	or_(al, to8i(esp+0xE));
	if (jnz())
		goto loc_4326B5;
	push32(ebx);
	push32(edx);
	push32(ecx);
	esp -= 4; _sub_4983B0(); esp += 4; //call
loc_4326B0:
	add(esp, (int32_t)0x10);
	pop32(ecx);
	return;
loc_4326B5:
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = ebx; //mov
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	bl = al; //mov
	eax = esp; //mov
	to32i(esp) = ecx; //mov
	esp -= 4; _sub_4326E0(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ecx);
}
Fn(void) Game::_sub_4326E0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xD8);
	to8i(esp+0xD4) = bl; //mov
	xor_(esi, esi);
	ecx = (int32_t)(intptr_t)off_4D52B4; //mov
	to32i(esp+0x14) = esi; //mov
	to32i(esp+0xC8) = esi; //mov
	esi = to32i(eax); //mov
	to32i(esp+0xB4) = ecx; //mov
	ecx = to32i(esi+0x10); //mov
	and_(ecx, (int32_t)0xFF000000);
	edi = (int32_t)(intptr_t)dword_4F1E1C; //mov
	to32i(esp+0x1C) = ecx; //mov
	ecx = 8; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)dword_4F1E3C; //mov
	esi = to32i(eax+4); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)dword_4F1E5C; //mov
	esi = to32i(eax+8); //mov
	xor_(eax, eax);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(dword_4F1E30) = eax; //mov
	to32i(dword_4F1E50) = eax; //mov
	to32i(dword_4F1E70) = eax; //mov
	eax = to32i(off_4D52B4); //mov
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x18));
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x1C));
	fxch_st(1);
	fstp(to32f(eax+0x18));
	fstp(to32f(eax+0x1C));
	eax = to32i(off_4D52B8); //mov
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x18));
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x1C));
	fxch_st(1);
	fstp(to32f(eax+0x18));
	fstp(to32f(eax+0x1C));
	eax = to32i(off_4D52BC); //mov
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x18));
	fld(to32f(eax+0xC));
	fmul(to32f(eax+0x1C));
	ebx = 3; //mov
	to32i(esp) = edx; //mov
	esi = (int32_t)(intptr_t)dword_4F16C4; //mov
	fxch_st(1);
	fstp(to32f(eax+0x18));
	fstp(to32f(eax+0x1C));
	ah = to8i(esp+0xD4); //mov
	ecx = (int32_t)(intptr_t)dword_4F15FC; //mov
	test(ah, (int8_t)0x30);
	if (jz())
		goto loc_432D14;
	test(ah, (int8_t)0x10);
	if (jz())
		goto loc_432A54;
	edi = 2; //mov
	to32i(esp+0x58) = edx; //mov
	xor_(ebp, ebp);
	edx = (int32_t)(intptr_t)off_4D52B4; //mov
	to32i(esp+4) = edi; //mov
	to32i(esp+0xB8) = ebp; //mov
	to32i(esp+0x5C) = edx; //mov
	xor_(edx, edx);
loc_4327EB:
	eax = to32i(esp); //mov
	edi = to32i(esp+4); //mov
	add(eax, edi);
	to32i(esp+0x30) = eax; //mov
	test(to8i(eax), (int8_t)0x10);
	if (jnz())
		goto loc_432835;
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	shl(edi, (int32_t)2);
	to32i(esp+0xB0) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4F16C4; //mov
	add(edi, (int32_t)(intptr_t)off_4D52B4);
	add(eax, to32i(esp+0xB0));
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	edi = ebp; //mov
	eax = to32i(esp+0x30); //mov
	add(edi, (int32_t)(intptr_t)dword_4F15FC);
	al = to8i(eax); //mov
	inc(ebp);
	to8i(edi) = al; //mov
loc_432835:
	edi = to32i(esp); //mov
	add(edi, to32i(esp+4));
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x58); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)0x10);
	if (jz())
		goto loc_4329F8;
	eax = to32i(esp+4); //mov
	edi = (int32_t)(intptr_t)off_4D52B4; //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xB0) = edi; //mov
	eax = to32i(edi); //mov
	edi = to32i(esp+0x5C); //mov
	edi = to32i(edi); //mov
	fld(to32f(eax+0xC));
	fsub(to32f(edi+0xC));
	fld(to32f(dword_4F1E00));
	fld(to32f(eax+0xC));
	fsub_st(0, 1);
	fdivrp_st(2, 0);
	fld(to32f(eax));
	fsub(to32f(edi));
	fxch_st(2);
	fstp(to32f(esp+8));
	fxch_st(1);
	fmul(to32f(esp+8));
	fld(to32f(eax+4));
	fsub(to32f(edi+4));
	fmul(to32f(esp+8));
	fld(to32f(eax+0x1C));
	fld(to32f(eax+0x18));
	fsub(to32f(edi+0x18));
	fxch_st(1);
	fsub(to32f(edi+0x1C));
	fxch_st(3);
	fsubr(to32f(eax));
	edi = to32i(esp+0xB0); //mov
	fstp(to32f(flt_4EFCFC+edx));
	edi = to32i(edi); //mov
	fmul(to32f(esp+8));
	fxch_st(1);
	fsubr(to32f(edi+4));
	edi = to32i(esp+0xB0); //mov
	fstp(to32f(flt_4EFD00+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul(to32f(esp+8));
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xB0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xB0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x5C); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x18); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmul(to32f(esp+8));
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0x18); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xB0));
	sub(edi, to32i(esp+0xB0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0x18) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(eax, edi);
	edi = to32i(esp+0x18); //mov
	shl(edi, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0x18); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	xor_(edi, edi);
	to32i(dword_4EFD04+edx) = edi; //mov
	edi = (int32_t)(intptr_t)dword_4F15FC; //mov
	add(edi, ebp);
	fstp(to32f(flt_4EFD08+edx));
	to8i(edi) = 0x10; //mov
	fld(to32f(flt_4EFD00+edx));
	fcomp(to32f(dword_4F1DF4));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_43384C;
	or_(to8i(edi), (int8_t)8);
loc_4329B4:
	edi = (int32_t)(intptr_t)dword_4F15FC; //mov
	fld(to32f(flt_4EFCFC+edx));
	add(edi, ebp);
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_433869;
	or_(to8i(edi), (int8_t)1);
loc_4329D3:
	eax = to32i(esp+0x14); //mov
	inc(eax);
	edi = edx; //mov
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(edx, (int32_t)0x20);
	add(edi, (int32_t)(intptr_t)dword_4F16C4);
	inc(ebp);
	to32i(edi) = eax; //mov
loc_4329F8:
	eax = to32i(esp+0xB8); //mov
	edi = to32i(esp+0x58); //mov
	dec(ebx);
	to32i(esp+4) = eax; //mov
	inc(edi);
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x58) = edi; //mov
	edi = to32i(esp+0xB8); //mov
	add(eax, (int32_t)4);
	inc(edi);
	to32i(esp+0x5C) = eax; //mov
	to32i(esp+0xB8) = edi; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4327EB;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	eax = (int32_t)(intptr_t)dword_4F16C4; //mov
	ebx = ebp; //mov
	to32i(esp+0xB4) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = ecx; //mov
	add(esi, eax);
	add(ecx, ebp);
loc_432A54:
	test(to8i(esp+0xD4), (int8_t)0x20);
	if (jz())
		goto loc_432CEA;
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	xor_(ebp, ebp);
	to32i(esp+0x98) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0xAC) = ebp; //mov
	to32i(esp+0x60) = eax; //mov
	eax = to32i(esp+0xB4); //mov
	shl(edx, (int32_t)5);
	to32i(esp+0x64) = eax; //mov
loc_432A8E:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x98); //mov
	add(eax, edi);
	to32i(esp+0x24) = eax; //mov
	test(to8i(eax), (int8_t)0x20);
	if (jnz())
		goto loc_432AC8;
	eax = to32i(esp+0xB4); //mov
	shl(edi, (int32_t)2);
	add(edi, eax);
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, esi);
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x24); //mov
	edi = ebp; //mov
	al = to8i(eax); //mov
	inc(ebp);
	to8i(ecx+edi) = al; //mov
loc_432AC8:
	edi = to32i(esp); //mov
	add(edi, to32i(esp+0x98));
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x60); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)0x20);
	if (jz())
		goto loc_432C90;
	eax = to32i(esp+0x98); //mov
	edi = to32i(esp+0xB4); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	eax = to32i(edi); //mov
	edi = to32i(esp+0x64); //mov
	edi = to32i(edi); //mov
	fld(to32f(eax+0xC));
	fsub(to32f(edi+0xC));
	fld(to32f(eax));
	fld(to32f(dword_4F1DF8));
	fld(to32f(eax+0xC));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(edi));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(eax+4));
	fsub(to32f(edi+4));
	fmul_st(0, 3);
	fld(to32f(eax+0x1C));
	fld(to32f(eax+0x18));
	fsub(to32f(edi+0x18));
	fxch_st(1);
	fsub(to32f(edi+0x1C));
	fxch_st(3);
	fsubr(to32f(eax));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFCFC+edx));
	edi = to32i(edi); //mov
	fmul_st(0, 4);
	fxch_st(1);
	fsubr(to32f(edi+4));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD00+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x64); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0xB0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmulp_st(2, 0);
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0xB0); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	sub(edi, to32i(esp+0xD0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0xB0) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(eax, edi);
	edi = to32i(esp+0xB0); //mov
	shl(edi, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	to32i(dword_4EFD04+edx) = 0x3F800000; //mov
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	fstp(to32f(flt_4EFD08+edx));
	to8i(edi) = 0x10; //mov
	fld(to32f(flt_4EFD00+edx));
	fcomp(to32f(dword_4F1DF4));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_433898;
	or_(to8i(edi), (int8_t)8);
loc_432C55:
	fld(to32f(flt_4EFCFC+edx));
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_4338B5;
	or_(to8i(edi), (int8_t)1);
loc_432C70:
	eax = to32i(esp+0x14); //mov
	edi = edx; //mov
	inc(eax);
	add(edx, (int32_t)0x20);
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(edi, (int32_t)(intptr_t)flt_4EFCFC);
	add(eax, esi);
	inc(ebp);
	to32i(eax) = edi; //mov
loc_432C90:
	eax = to32i(esp+0xAC); //mov
	edi = to32i(esp+0x60); //mov
	dec(ebx);
	to32i(esp+0x98) = eax; //mov
	inc(edi);
	eax = to32i(esp+0x64); //mov
	to32i(esp+0x60) = edi; //mov
	edi = to32i(esp+0xAC); //mov
	add(eax, (int32_t)4);
	inc(edi);
	to32i(esp+0x64) = eax; //mov
	to32i(esp+0xAC) = edi; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_432A8E;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	ebx = ebp; //mov
	to32i(esp+0xB4) = esi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = ecx; //mov
	add(esi, eax);
	add(ecx, ebp);
loc_432CEA:
	edx = to32i(esp); //mov
	dec(ebp);
	add(edx, ebp);
	al = to8i(edx); //mov
	to8i(esp+0xD4) = al; //mov
loc_432CF9:
	al = to8i(edx-1); //mov
	ah = to8i(esp+0xD4); //mov
	dec(ebp);
	or_(ah, al);
	dec(edx);
	to8i(esp+0xD4) = ah; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_432CF9;
loc_432D14:
	dl = to8i(esp+0xD4); //mov
	test(dl, (int8_t)0xC);
	if (jz())
		goto loc_43327C;
	test(dl, (int8_t)4);
	if (jz())
		goto loc_432FC0;
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	xor_(ebp, ebp);
	to32i(esp+0x94) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0xA8) = ebp; //mov
	to32i(esp+0x68) = eax; //mov
	eax = to32i(esp+0xB4); //mov
	shl(edx, (int32_t)5);
	to32i(esp+0x6C) = eax; //mov
loc_432D59:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x94); //mov
	add(eax, edi);
	to32i(esp+0x28) = eax; //mov
	test(to8i(eax), (int8_t)4);
	if (jnz())
		goto loc_432DA2;
	eax = to32i(esp+0xB4); //mov
	shl(edi, (int32_t)2);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp+0xB0) = eax; //mov
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	edi = to32i(esp+0xB0); //mov
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x28); //mov
	edi = ebp; //mov
	al = to8i(eax); //mov
	inc(ebp);
	to8i(ecx+edi) = al; //mov
loc_432DA2:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x94); //mov
	add(eax, edi);
	to32i(esp+0x2C) = eax; //mov
	edi = to32i(esp+0x2C); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x68); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)4);
	if (jz())
		goto loc_432F66;
	eax = to32i(esp+0x94); //mov
	edi = to32i(esp+0xB4); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(esp+0xB0); //mov
	fld(to32f(eax+4));
	fsub(to32f(edi+4));
	fld(to32f(eax));
	fld(to32f(dword_4F1DEC));
	fld(to32f(eax+4));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(edi));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(eax+0xC));
	fsub(to32f(edi+0xC));
	fmul_st(0, 3);
	fld(to32f(eax+0x1C));
	fld(to32f(eax+0x18));
	fsub(to32f(edi+0x18));
	fxch_st(1);
	fsub(to32f(edi+0x1C));
	fxch_st(3);
	fsubr(to32f(eax));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFCFC+edx));
	edi = to32i(edi); //mov
	fmul_st(0, 4);
	fxch_st(1);
	fsubr(to32f(edi+0xC));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD08+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x6C); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0xB0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmulp_st(2, 0);
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0xB0); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	sub(edi, to32i(esp+0xD0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0xB0) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(eax, edi);
	edi = to32i(esp+0xB0); //mov
	shl(edi, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	edi = to32i(esp+0x2C); //mov
	fstp(to32f(flt_4EFD00+edx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xF0);
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	or_(al, (int8_t)4);
	to8i(edi) = al; //mov
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_4338D2;
	or_(to8i(edi), (int8_t)1);
loc_432F46:
	eax = to32i(esp+0x14); //mov
	inc(eax);
	edi = edx; //mov
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edx, (int32_t)0x20);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	inc(ebp);
	to32i(edi+esi) = eax; //mov
loc_432F66:
	eax = to32i(esp+0xA8); //mov
	edi = to32i(esp+0x68); //mov
	dec(ebx);
	to32i(esp+0x94) = eax; //mov
	inc(edi);
	eax = to32i(esp+0x6C); //mov
	to32i(esp+0x68) = edi; //mov
	edi = to32i(esp+0xA8); //mov
	add(eax, (int32_t)4);
	inc(edi);
	to32i(esp+0x6C) = eax; //mov
	to32i(esp+0xA8) = edi; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_432D59;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	ebx = ebp; //mov
	to32i(esp+0xB4) = esi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = ecx; //mov
	add(esi, eax);
	add(ecx, ebp);
loc_432FC0:
	test(to8i(esp+0xD4), (int8_t)8);
	if (jz())
		goto loc_433252;
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	xor_(ebp, ebp);
	to32i(esp+0x90) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0xA4) = ebp; //mov
	to32i(esp+0x70) = eax; //mov
	eax = to32i(esp+0xB4); //mov
	shl(edx, (int32_t)5);
	to32i(esp+0x74) = eax; //mov
loc_432FFA:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x90); //mov
	add(eax, edi);
	to32i(esp+0x34) = eax; //mov
	test(to8i(eax), (int8_t)8);
	if (jnz())
		goto loc_433034;
	eax = to32i(esp+0xB4); //mov
	shl(edi, (int32_t)2);
	add(edi, eax);
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, esi);
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x34); //mov
	edi = ebp; //mov
	al = to8i(eax); //mov
	inc(ebp);
	to8i(ecx+edi) = al; //mov
loc_433034:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x90); //mov
	add(eax, edi);
	to32i(esp+0x38) = eax; //mov
	edi = to32i(esp+0x38); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x70); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)8);
	if (jz())
		goto loc_4331F8;
	eax = to32i(esp+0x90); //mov
	edi = to32i(esp+0xB4); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(esp+0x74); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(eax); //mov
	eax = to32i(esp+0xB0); //mov
	fld(to32f(eax+4));
	fsub(to32f(edi+4));
	fld(to32f(eax));
	fld(to32f(dword_4F1DF4));
	fld(to32f(eax+4));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(edi));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(eax+0xC));
	fsub(to32f(edi+0xC));
	fmul_st(0, 3);
	fld(to32f(eax+0x1C));
	fld(to32f(eax+0x18));
	fsub(to32f(edi+0x18));
	fxch_st(1);
	fsub(to32f(edi+0x1C));
	fxch_st(3);
	fsubr(to32f(eax));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFCFC+edx));
	edi = to32i(edi); //mov
	fmul_st(0, 4);
	fxch_st(1);
	fsubr(to32f(edi+0xC));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD08+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x74); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0xB0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmulp_st(2, 0);
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0xB0); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	sub(edi, to32i(esp+0xD0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0xB0) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	edi = to32i(esp+0x38); //mov
	fstp(to32f(flt_4EFD00+edx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xF0);
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	or_(al, (int8_t)8);
	to8i(edi) = al; //mov
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DF0));
	fnstsw(ax);
	sahf();
	if (jnb())
		goto loc_4338EF;
	or_(to8i(edi), (int8_t)1);
loc_4331D8:
	eax = to32i(esp+0x14); //mov
	edi = edx; //mov
	inc(eax);
	add(edx, (int32_t)0x20);
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(edi, (int32_t)(intptr_t)flt_4EFCFC);
	add(eax, esi);
	inc(ebp);
	to32i(eax) = edi; //mov
loc_4331F8:
	eax = to32i(esp+0xA4); //mov
	edi = to32i(esp+0x70); //mov
	dec(ebx);
	to32i(esp+0x90) = eax; //mov
	inc(edi);
	eax = to32i(esp+0x74); //mov
	to32i(esp+0x70) = edi; //mov
	edi = to32i(esp+0xA4); //mov
	add(eax, (int32_t)4);
	inc(edi);
	to32i(esp+0x74) = eax; //mov
	to32i(esp+0xA4) = edi; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_432FFA;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	ebx = ebp; //mov
	to32i(esp+0xB4) = esi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = ecx; //mov
	add(esi, eax);
	add(ecx, ebp);
loc_433252:
	edx = to32i(esp); //mov
	dec(ebp);
	add(edx, ebp);
	al = to8i(edx); //mov
	to8i(esp+0xD4) = al; //mov
loc_433261:
	al = to8i(edx-1); //mov
	ah = to8i(esp+0xD4); //mov
	dec(ebp);
	or_(ah, al);
	dec(edx);
	to8i(esp+0xD4) = ah; //mov
	test(ebp, ebp);
	if (jg())
		goto loc_433261;
loc_43327C:
	dl = to8i(esp+0xD4); //mov
	test(dl, (int8_t)3);
	if (jz())
		goto loc_4337B3;
	test(dl, (int8_t)1);
	if (jz())
		goto loc_433517;
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	xor_(ebp, ebp);
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0xA0) = ebp; //mov
	to32i(esp+0x78) = eax; //mov
	eax = to32i(esp+0xB4); //mov
	shl(edx, (int32_t)5);
	to32i(esp+0x7C) = eax; //mov
loc_4332C1:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x8C); //mov
	add(eax, edi);
	to32i(esp+0x3C) = eax; //mov
	test(to8i(eax), (int8_t)1);
	if (jnz())
		goto loc_43330A;
	eax = to32i(esp+0xB4); //mov
	shl(edi, (int32_t)2);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp+0xB0) = eax; //mov
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	edi = to32i(esp+0xB0); //mov
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x3C); //mov
	edi = ebp; //mov
	al = to8i(eax); //mov
	inc(ebp);
	to8i(ecx+edi) = al; //mov
loc_43330A:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x8C); //mov
	add(eax, edi);
	to32i(esp+0x40) = eax; //mov
	edi = to32i(esp+0x40); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x78); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)1);
	if (jz())
		goto loc_4334BD;
	eax = to32i(esp+0x8C); //mov
	edi = to32i(esp+0xB4); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xB0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi));
	fsub(to32f(eax));
	fld(to32f(edi+4));
	fld(to32f(dword_4F1DF0));
	fld(to32f(edi));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax+4));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fld(to32f(edi+0x1C));
	fld(to32f(edi+0x18));
	fsub(to32f(eax+0x18));
	fxch_st(1);
	fsub(to32f(eax+0x1C));
	fxch_st(3);
	fsubr(to32f(edi+4));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD00+edx));
	edi = to32i(edi); //mov
	fmul_st(0, 4);
	fxch_st(1);
	fsubr(to32f(edi+0xC));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD08+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x7C); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0xB0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmulp_st(2, 0);
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0xB0); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	sub(edi, to32i(esp+0xD0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0xB0) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(eax, edi);
	edi = to32i(esp+0xB0); //mov
	shl(edi, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	edi = to32i(esp+0x40); //mov
	fstp(to32f(flt_4EFCFC+edx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xFC);
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	or_(al, (int8_t)1);
	to8i(edi) = al; //mov
	edi = to32i(esp+0x14); //mov
	to32i(esp+0x44) = edx; //mov
	inc(edi);
	eax = to32i(esp+0x44); //mov
	to32i(esp+0x14) = edi; //mov
	edi = (int32_t)(intptr_t)flt_4EFCFC; //mov
	add(edi, eax);
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(edx, (int32_t)0x20);
	add(eax, esi);
	inc(ebp);
	to32i(eax) = edi; //mov
loc_4334BD:
	eax = to32i(esp+0xA0); //mov
	edi = to32i(esp+0x78); //mov
	dec(ebx);
	to32i(esp+0x8C) = eax; //mov
	inc(edi);
	eax = to32i(esp+0x7C); //mov
	to32i(esp+0x78) = edi; //mov
	edi = to32i(esp+0xA0); //mov
	add(eax, (int32_t)4);
	inc(edi);
	to32i(esp+0x7C) = eax; //mov
	to32i(esp+0xA0) = edi; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4332C1;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	ebx = ebp; //mov
	to32i(esp+0xB4) = esi; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp) = ecx; //mov
	add(esi, eax);
	add(ecx, ebp);
loc_433517:
	test(to8i(esp+0xD4), (int8_t)2);
	if (jz())
		goto loc_4337B3;
	edx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx-1); //lea
	xor_(ebp, ebp);
	to32i(esp+0x88) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0x9C) = ebp; //mov
	to32i(esp+0x80) = eax; //mov
	eax = to32i(esp+0xB4); //mov
	shl(edx, (int32_t)5);
	to32i(esp+0x84) = eax; //mov
loc_433557:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x88); //mov
	add(eax, edi);
	to32i(esp+0x48) = eax; //mov
	test(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_4335A0;
	eax = to32i(esp+0xB4); //mov
	shl(edi, (int32_t)2);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	to32i(esp+0xB0) = eax; //mov
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	edi = to32i(esp+0xB0); //mov
	edi = to32i(edi); //mov
	to32i(eax) = edi; //mov
	eax = to32i(esp+0x48); //mov
	edi = ebp; //mov
	al = to8i(eax); //mov
	inc(ebp);
	to8i(ecx+edi) = al; //mov
loc_4335A0:
	eax = to32i(esp); //mov
	edi = to32i(esp+0x88); //mov
	add(eax, edi);
	to32i(esp+0x4C) = eax; //mov
	edi = to32i(esp+0x4C); //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0x80); //mov
	to32i(esp+0xB0) = eax; //mov
	xor_(eax, eax);
	al = to8i(edi); //mov
	edi = to32i(esp+0xB0); //mov
	xor_(edi, eax);
	test(di, (int16_t)2);
	if (jz())
		goto loc_43375B;
	eax = to32i(esp+0x88); //mov
	edi = to32i(esp+0xB4); //mov
	shl(eax, (int32_t)2);
	add(edi, eax);
	eax = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(esp+0x84); //mov
	to32i(esp+0xD0) = edi; //mov
	edi = to32i(esp+0xB0); //mov
	eax = to32i(eax); //mov
	fld(to32f(edi));
	fsub(to32f(eax));
	fld(to32f(edi+4));
	fld(to32f(dword_4F1DFC));
	fld(to32f(edi));
	fsub_st(0, 1);
	fxch_st(2);
	fsub(to32f(eax+4));
	fxch_st(2);
	fdivrp_st(3, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fld(to32f(edi+0xC));
	fsub(to32f(eax+0xC));
	fmul_st(0, 3);
	fld(to32f(edi+0x1C));
	fld(to32f(edi+0x18));
	fsub(to32f(eax+0x18));
	fxch_st(1);
	fsub(to32f(eax+0x1C));
	fxch_st(3);
	fsubr(to32f(edi+4));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD00+edx));
	edi = to32i(edi); //mov
	fmul_st(0, 4);
	fxch_st(1);
	fsubr(to32f(edi+0xC));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD08+edx));
	edi = to32i(edi); //mov
	fxch_st(1);
	fmul_st(0, 3);
	fxch_st(1);
	fsubr(to32f(edi+0x18));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD14+edx));
	edi = to32i(edi); //mov
	fsubr(to32f(edi+0x1C));
	edi = to32i(esp+0xD0); //mov
	fstp(to32f(flt_4EFD18+edx));
	edi = to32i(edi); //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0x84); //mov
	and_(eax, (int32_t)0xFF);
	edi = to32i(edi); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = to32i(edi+0x10); //mov
	edi = to32i(esp+0xB0); //mov
	and_(eax, (int32_t)0xFF);
	sub(edi, eax);
	to32i(esp+0xD0) = edi; //mov
	fild(to32i(esp+0xD0));
	fmulp_st(2, 0);
	to32i(esp+0xCC) = eax; //mov
	edi = to32i(esp+0xB0); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xD0));
	sub(edi, to32i(esp+0xD0));
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0xB0) = edi; //mov
	shl(edi, (int32_t)0x10);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	shl(eax, (int32_t)8);
	or_(edi, eax);
	eax = to32i(esp+0xB0); //mov
	or_(edi, eax);
	to32i(dword_4EFD0C+edx) = edi; //mov
	edi = to32i(esp+0x4C); //mov
	fstp(to32f(flt_4EFCFC+edx));
	al = to8i(edi); //mov
	and_(al, (int8_t)0xFC);
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	or_(al, (int8_t)2);
	to8i(edi) = al; //mov
	edi = to32i(esp+0x14); //mov
	to32i(esp+0x50) = edx; //mov
	inc(edi);
	eax = (int32_t)(intptr_t)flt_4EFCFC; //mov
	to32i(esp+0x14) = edi; //mov
	edi = to32i(esp+0x50); //mov
	add(edx, (int32_t)0x20);
	add(eax, edi);
	edi = (int32_t)(intptr_t)(ebp*4+0); //lea
	inc(ebp);
	to32i(edi+esi) = eax; //mov
loc_43375B:
	eax = to32i(esp+0x9C); //mov
	to32i(esp+0x88) = eax; //mov
	eax = to32i(esp+0x80); //mov
	edi = to32i(esp+0x84); //mov
	inc(eax);
	dec(ebx);
	to32i(esp+0x80) = eax; //mov
	eax = to32i(esp+0x9C); //mov
	add(edi, (int32_t)4);
	inc(eax);
	to32i(esp+0x84) = edi; //mov
	to32i(esp+0x9C) = eax; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_433557;
	cmp(ebp, (int32_t)3);
	if (jl())
		goto loc_433886;
	ebx = ebp; //mov
	to32i(esp+0xB4) = esi; //mov
loc_4337B3:
	xor_(esi, esi);
	test(ebx, ebx);
	if (jle())
		goto loc_4337E4;
	edx = to32i(esp+0xB4); //mov
loc_4337C0:
	ecx = to32i(edx); //mov
	fld1();
	fld(to32f(ecx+0x18));
	fxch_st(1);
	fdiv(to32f(ecx+0xC));
	fxch_st(1);
	fmul_st(0, 1);
	fstp(to32f(ecx+0x18));
	ecx = to32i(edx); //mov
	fmul(to32f(ecx+0x1C));
	add(edx, (int32_t)4);
	inc(esi);
	fstp(to32f(ecx+0x1C));
	cmp(esi, ebx);
	if (jl())
		goto loc_4337C0;
loc_4337E4:
	dec(ebx);
	edx = to32i(esp+0xB4); //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	ecx = to32i(esp+0xB4); //mov
	dec(ebx);
	ebp = to32i(esp+0xB4); //mov
	esi = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, edx);
	add(esi, ecx);
	ebp = to32i(ebp+0); //mov
	edx = to32i(eax); //mov
	edi = to32i(esi); //mov
loc_433814:
	push32(edx);
	eax = to32i(esp+0xCC); //mov
	push32(edi);
	sub(esi, (int32_t)4);
	inc(eax);
	push32(ebp);
	dec(ebx);
	to32i(esp+0xD4) = eax; //mov
	esp -= 4; _sub_4983B0(); esp += 4; //call
	edx = edi; //mov
	edi = to32i(esi); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_433814;
	ebp = to32i(esp+0xC8); //mov
	eax = ebp; //mov
	add(esp, (int32_t)0xD8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43384C:
	fld(to32f(flt_4EFD00+edx));
	fcomp(to32f(dword_4F1DEC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4329B4;
	or_(to8i(edi), (int8_t)4);
	goto loc_4329B4;
loc_433869:
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4329D3;
	or_(to8i(edi), (int8_t)2);
	goto loc_4329D3;
loc_433886:
	ebp = 0xFFFFFFFF; //mov
	eax = ebp; //mov
	add(esp, (int32_t)0xD8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_433898:
	fld(to32f(flt_4EFD00+edx));
	fcomp(to32f(dword_4F1DEC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_432C55;
	or_(to8i(edi), (int8_t)4);
	goto loc_432C55;
loc_4338B5:
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_432C70;
	or_(to8i(edi), (int8_t)2);
	goto loc_432C70;
loc_4338D2:
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_432F46;
	or_(to8i(edi), (int8_t)2);
	goto loc_432F46;
loc_4338EF:
	fld(to32f(flt_4EFCFC+edx));
	fcomp(to32f(dword_4F1DFC));
	fnstsw(ax);
	sahf();
	if (jbe())
		goto loc_4331D8;
	or_(to8i(edi), (int8_t)2);
	goto loc_4331D8;
}
Fn(void) Game::_sub_433910()
{
	push32(edx);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x10);
	and_(esp, (int32_t)0xFFFFFFF8);
	fld(to32f(flt_4CB6C4));
	fld(to32f(ebp+0x1C));
	fmul_st(0, 1);
	fld(to32f(ebp+0x20));
	fmulp_st(2, 0);
	fld(to32f(ebp+0x14));
	eax = to32i(ebp+0x1C); //mov
	fldz();
	to32i(dword_4D5294) = eax; //mov
	fxch_st(2);
	fstp(to32f(flt_4D52A4));
	fxch_st(2);
	fst(to32f(flt_4D52A8));
	fld(to32f(flt_4D52A4));
	fadd(to32f(ebp+0xC));
	fxch_st(1);
	fadd(to32f(ebp+0x10));
	fxch_st(1);
	fstp(to32f(flt_4D529C));
	fstp(to32f(flt_4D52A0));
	fcompp();
	fnstsw(ax);
	sahf();
	if (jz())
		goto loc_4339F5;
	fld(to32f(ebp+0x18));
	fld(to32f(ebp+0x14));
	fmul(to32f(flt_4CB6C8));
	fstp(to32f(esp));
	fldz();
	fcompp();
	fnstsw(ax);
	sahf();
	if (jz())
		goto loc_433A01;
	fld(to32f(esp));
	fptan();
	fstp_st(0);
	fld(to32f(ebp+0x18));
	fmul(to32f(flt_4CB6C8));
	fptan();
	fstp_st(0);
	fld(to32f(ebp+0x1C));
	fdivrp_st(2, 0);
	fdivr(to32f(ebp+0x20));
	fxch_st(1);
loc_4339A8:
	fstp(to32f(dword_4D5294));
loc_4339AE:
	fstp(to32f(flt_4D5298));
	ah = to8i(flt_4D5298+3); //mov
	fld(to32f(dword_4D5294));
	xor_(ah, (int8_t)0x80);
	fld(to32f(flt_4CB6C4));
	fxch_st(1);
	fmul_st(0, 1);
	to8i(flt_4D5298+3) = ah; //mov
	fld(to32f(flt_4D5298));
	fmulp_st(2, 0);
	edx = to32i(ebp+0x24); //mov
	fstp(to32f(dword_4D5294));
	fstp(to32f(flt_4D5298));
	test(edx, edx);
	if (jnz())
		goto loc_433A26;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edx);
	esp += 0x1C; return;
loc_4339F5:
	fld(to32f(ebp+0x20));
	fld(to32f(ebp+0x1C));
	fdiv_st(0, 1);
	fmulp_st(1, 0);
	goto loc_4339AE;
loc_433A01:
	fld(to32f(esp));
	fptan();
	fstp_st(0);
	fld(to32f(ebp+0x1C));
	fld_st(0);
	fld1();
	fdivrp_st(3, 0);
	fxch_st(1);
	fld(to32f(ebp+0x20));
	fxch_st(1);
	fdiv_st(0, 1);
	fmulp_st(1, 0);
	fxch_st(1);
	fmul_st(0, 2);
	fxch_st(1);
	fmulp_st(2, 0);
	goto loc_4339A8;
loc_433A26:
	xor_(to8i(dword_4D5294+3), (int8_t)0x80);
	esp = ebp; //mov
	pop32(ebp);
	pop32(edx);
	esp += 0x1C; return;
}
Fn(void) Game::_sub_433A40()
{
	push32(ecx);
	push32(edx);
	eax = to32i(esp+0xC); //mov
	to32i(dword_4F1DF0) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(dword_4F1DFC) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(dword_4F1DF4) = eax; //mov
	eax = to32i(esp+0x18); //mov
	to32i(dword_4F1DEC) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(dword_4F1DF8) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	to32i(dword_4F1E00) = eax; //mov
	eax = to32i(esp+0xC); //mov
	to32i(dword_4F1E08) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(dword_4F1E18) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(dword_4F1E10) = eax; //mov
	eax = to32i(esp+0x18); //mov
	edx = 0x3F800000; //mov
	to32i(dword_4F1E0C) = eax; //mov
	eax = to32i(dword_4F1DF8); //mov
	to32i(dword_4F1DE4) = edx; //mov
	to32i(dword_4F1DE8) = eax; //mov
	eax = to32i(dword_4F1E00); //mov
	to32i(dword_4F1E04) = eax; //mov
	xor_(eax, eax);
loc_433ABD:
	add(eax, (int32_t)0x20);
	xor_(ecx, ecx);
	to32i(dword_4EFCF0+eax) = ecx; //mov
	cmp(eax, (int32_t)0x1900);
	if (jnz())
		goto loc_433ABD;
	pop32(edx);
	pop32(ecx);
	esp += 0x18; return;
}
Fn(void) Game::_sub_433AE0()
{
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)8);
	and_(esp, (int32_t)0xFFFFFFF8);
	test(eax, eax);
	if (jnz())
		goto loc_433B15;
	to32i(esp) = 0x322BCC77; //mov
loc_433AF4:
	fld(to32f(esp));
	fld_st(0);
	fld1();
	fdivrp_st(1, 0);
	fxch_st(1);
	fadd(to32f(flt_4CB6BC));
	fmul(to32f(flt_4CB6C0));
	fxch_st(1);
	fstp(to32f(ebx));
	fstp(to32f(edx));
	esp = ebp; //mov
	pop32(ebp);
	return;
loc_433B15:
	to32i(esp+4) = eax; //mov
	fild(to32i(esp+4));
	fmul(to32f(flt_4CB6B8));
	fstp(to32f(esp));
	goto loc_433AF4;
}
Fn(void) Game::_sub_433B30()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)4);
	and_(esp, (int32_t)0xFFFFFFF8);
	xor_(eax, eax);
	xor_(edx, edx);
loc_433B3F:
	ecx = edx; //mov
	or_(ecx, (int32_t)0x3F804000);
	to32i(esp) = ecx; //mov
	fld(to32f(esp));
	fld1();
	fdivrp_st(1, 0);
	fstp(to32f(esp));
	ecx = to32i(esp); //mov
	and_(ecx, (int32_t)0x7FFFFF);
	add(eax, (int32_t)4);
	or_(ecx, (int32_t)0x7E800000);
	add(edx, (int32_t)0x8000);
	to32i(dword_4F19E0+eax) = ecx; //mov
	cmp(eax, (int32_t)0x400);
	if (jnz())
		goto loc_433B3F;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_433BA4()
{
	static const void *const off_433B80[] = {
		&&loc_433BBB,
		&&loc_433BBB,
		&&loc_433BBB,
		&&loc_433BC4,
		&&loc_433BC4,
		&&loc_433BCD,
		&&loc_433BD6,
		&&loc_433BD6,
		&&loc_433BDF,
	};
	push32(edx);
	dl = to8i(eax); //mov
	dec(dl);
	cmp(dl, (int8_t)8);
	if (ja())
		goto loc_433BC2;
	and_(edx, (int32_t)0xFF);
	goto *off_433B80[edx];
loc_433BBB:
	to32i(eax+4) = 0x20; //mov
loc_433BC2:
	pop32(edx);
	return;
loc_433BC4:
	to32i(eax+4) = 8; //mov
	pop32(edx);
	return;
loc_433BCD:
	to32i(eax+4) = 0x10; //mov
	pop32(edx);
	return;
loc_433BD6:
	to32i(eax+4) = 3; //mov
	pop32(edx);
	return;
loc_433BDF:
	to32i(eax+4) = 4; //mov
	pop32(edx);
}
Fn(void) Game::_sub_433C14()
{
	static const void *const off_433BF0[] = {
		&&loc_433C8D,
		&&loc_433EEB,
		&&loc_433F6D,
		&&loc_433D8B,
		&&loc_433DFA,
		&&loc_433E6C,
		&&loc_434114,
		&&loc_434004,
		&&loc_43408C,
	};
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	edx = 0x11C; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FE70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_433C56;
	ah = to8i(esi); //mov
	cmp(ah, (int8_t)4);
	if (jnz())
		goto loc_433C5E;
loc_433C36:
	eax = to32i(esp); //mov
	add(eax, (int32_t)0xC0);
loc_433C3E:
	push32(eax);
	eax = (int32_t)(intptr_t)(esi+0x28); //lea
	push32(0xB8000);
	ecx = eax; //mov
	ebx = eax; //mov
	edx = eax; //mov
	esp -= 4; _sub_471170(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_433C6D;
loc_433C56:
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433C5E:
	cmp(ah, (int8_t)5);
	if (jz())
		goto loc_433C36;
	eax = to32i(esp); //mov
	add(eax, (int32_t)0xE4);
	goto loc_433C3E;
loc_433C6D:
	edx = 0x11C; //mov
	eax = esp; //mov
	esp -= 4; _sub_46FEA0(); esp += 4; //call
	al = to8i(esi); //mov
	dec(al);
	cmp(al, (int8_t)8);
	if (ja())
		goto loc_433C56;
	and_(eax, (int32_t)0xFF);
	goto *off_433BF0[eax];
loc_433C8D:
	dh = to8i(esi+1); //mov
	test(dh, (int8_t)3);
	if (jnz())
		goto loc_433D24;
	test(dh, (int8_t)1);
	if (jz())
		goto loc_433D3A;
	ebx = 0x20; //mov
	sub(ebx, to32i(esi+4));
	edx = to32i(esp); //mov
	add(ebx, (int32_t)0x10);
loc_433CB0:
	eax = esi; //mov
	esp -= 4; _sub_434B50(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	sar(eax, (int32_t)2);
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F209C; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0x10C) = ebx; //mov
loc_433CEE:
	al = to8i(esi+4); //mov
	add(al, al);
	edx = to32i(esp); //mov
	add(al, (int8_t)0x40);
	to8i(edx+0x110) = al; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x111) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0xFF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433D24:
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	shl(eax, (int32_t)2);
	ebx = (int32_t)(intptr_t)(eax+8); //lea
	edx = to32i(esp); //mov
	goto loc_433CB0;
loc_433D3A:
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_434B50(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	sar(eax, (int32_t)2);
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	ebx = (int32_t)(intptr_t)dword_4F209C; //mov
	sub(eax, edx);
	edx = to32i(esp); //mov
	add(ebx, eax);
	to32i(edx+0x10C) = ebx; //mov
	goto loc_433CEE;
loc_433D8B:
	ebx = to32i(esp); //mov
	edx = esi; //mov
	eax = edi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4341A0(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xC4) = 0xB; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xC8) = 3; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xCA) = 2; //mov
	eax = 8; //mov
	sub(eax, to32i(esi+4));
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F1EDC; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0xDC) = ebx; //mov
	eax = to32i(esp); //mov
	to32i(eax+0xE0) = 0xE2FFFFFF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433DFA:
	ecx = 1; //mov
	ebx = to32i(esp); //mov
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_4341A0(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xC4) = 0xB; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xC8) = 3; //mov
	eax = to32i(esp); //mov
	to16i(eax+0xCA) = 2; //mov
	eax = 8; //mov
	sub(eax, to32i(esi+4));
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F1EDC; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0xDC) = ebx; //mov
	eax = to32i(esp); //mov
	to32i(eax+0xE0) = 0xE2FFFFFF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433E6C:
	eax = 0x10; //mov
	sub(eax, to32i(esi+4));
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+0x20); //lea
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_4348E0(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 0x10; //mov
	ecx = to32i(esi+4); //mov
	esi = eax; //mov
	sub(esi, ecx);
	sar(esi, (int32_t)1);
	and_(esi, (int32_t)7);
	shl(esi, (int32_t)2);
	eax = esi; //mov
	shl(esi, (int32_t)3);
	edx = (int32_t)(intptr_t)dword_4F1FBC; //mov
	sub(esi, eax);
	eax = to32i(esp); //mov
	add(edx, esi);
	to32i(eax+0x10C) = edx; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x110) = 0x90; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x111) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0xFF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433EEB:
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_434B50(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	sar(eax, (int32_t)2);
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	ebx = (int32_t)(intptr_t)dword_4F209C; //mov
	sub(eax, edx);
	edx = to32i(esp); //mov
	add(ebx, eax);
	to32i(edx+0x10C) = ebx; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x110) = 0x80; //mov
	dl = to8i(esi+4); //mov
	dh = 0xFF; //mov
	eax = to32i(esp); //mov
	sub(dh, dl);
	to8i(eax+0x111) = dh; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0xAF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0xAF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_433F6D:
	ebx = 0x20; //mov
	sub(ebx, to32i(esi+4));
	edx = to32i(esp); //mov
	add(ebx, ebx);
	eax = esi; //mov
	add(ebx, (int32_t)0x10);
	esp -= 4; _sub_434B50(); esp += 4; //call
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 0x20; //mov
	sub(eax, to32i(esi+4));
	sar(eax, (int32_t)2);
	and_(eax, (int32_t)7);
	shl(eax, (int32_t)2);
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F209C; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0x10C) = ebx; //mov
	dl = to8i(esi+4); //mov
	shl(dl, (int8_t)2);
	eax = to32i(esp); //mov
	add(dl, (int8_t)0x30);
	to8i(eax+0x110) = dl; //mov
	dl = to8i(esi+4); //mov
	add(dl, (int8_t)0x1F);
	eax = to32i(esp); //mov
	add(dl, dl);
	to8i(eax+0x111) = dl; //mov
	eax = to32i(esp); //mov
	dl = to8i(eax+0x111); //mov
	to8i(eax+0x112) = dl; //mov
	eax = to32i(esp); //mov
	dl = to8i(eax+0x112); //mov
	to8i(eax+0x113) = dl; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_434004:
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 4; //mov
	eax = 3; //mov
	sub(eax, to32i(esi+4));
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_434B50(); esp += 4; //call
	edx = 3; //mov
	sub(edx, to32i(esi+4));
	sar(edx, (int32_t)1);
	ebx = 3; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F21D0; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0x10C) = ebx; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x110) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x111) = 0xEF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0xEF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43408C:
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	ebx = 4; //mov
	edx = to32i(esi+4); //mov
	eax = esi; //mov
	sub(ebx, edx);
	edx = to32i(esp); //mov
	add(ebx, (int32_t)0x10);
	esp -= 4; _sub_434B50(); esp += 4; //call
	edx = 4; //mov
	sub(edx, to32i(esi+4));
	sar(edx, (int32_t)1);
	ebx = 3; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F217C; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0x10C) = ebx; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x110) = 0x80; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x111) = 0x80; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0x80; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0x80; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_434114:
	eax = to32i(esp); //mov
	to32i(eax+0xE8) = 5; //mov
	eax = 3; //mov
	sub(eax, to32i(esi+4));
	add(eax, eax);
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_434B50(); esp += 4; //call
	edx = 3; //mov
	sub(edx, to32i(esi+4));
	sar(edx, (int32_t)1);
	ebx = 3; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_4F2228; //mov
	edx = eax; //mov
	eax = to32i(esp); //mov
	add(ebx, edx);
	to32i(eax+0x10C) = ebx; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x110) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x111) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x112) = 0xFF; //mov
	eax = to32i(esp); //mov
	to8i(eax+0x113) = 0xFF; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4341A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x98);
	to32i(esp+0x8C) = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x90) = ebx; //mov
	edi = (int32_t)(intptr_t)(esp+0x30); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_45E810(); esp += 4; //call
	esi = to32i(esp+0x8C); //mov
	eax = to32i(esp+0x8C); //mov
	add(esi, (int32_t)0x44);
	add(eax, (int32_t)0x38);
	test(ecx, ecx);
	if (jnz())
		goto loc_4347E9;
	edx = to32i(esp+0x30); //mov
	ecx = to32i(ebp+0x10); //mov
	shl(edx, (int32_t)2);
	sub(ecx, edx);
	edx = to32i(esp+0x34); //mov
	to32i(esp+0x30) = ecx; //mov
	shl(edx, (int32_t)2);
	ecx = to32i(ebp+0x14); //mov
	sub(ecx, edx);
	edx = to32i(esp+0x38); //mov
	to32i(esp+0x34) = ecx; //mov
	shl(edx, (int32_t)2);
	ecx = to32i(ebp+0x18); //mov
	ebx = 1; //mov
	sub(ecx, edx);
	edx = esp; //mov
	to32i(esp+0x38) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x30); //lea
	push32(edx);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_480540(); esp += 4; //call
	eax = to32i(esp); //mov
	sub(eax, to32i(ebp+0x28));
	test(eax, eax);
	if (jle())
		goto loc_4348CA;
loc_43423B:
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_434259;
	eax = to32i(esp); //mov
	ecx = to32i(ebp+0x28); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_4348D1;
	eax = (int32_t)(intptr_t)(ecx+0x8000); //lea
loc_434256:
	to32i(esp) = eax; //mov
loc_434259:
	eax = to32i(ebp+0x28); //mov
	to32i(esp+0x60) = eax; //mov
	eax = to32i(ebp+0x2C); //mov
	add(eax, (int32_t)0x4CCC);
	to32i(esp+0x64) = eax; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x68) = eax; //mov
	eax = to32i(ebp+0x28); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(ebp+0x2C); //mov
	sub(eax, (int32_t)0x4CCC);
	to32i(esp+0x40) = eax; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x44) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, (int32_t)0x4CCC);
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(esp); //mov
	to32i(esp+0x54) = eax; //mov
	eax = to32i(esp+4); //mov
	sub(eax, (int32_t)0x4CCC);
loc_4342B9:
	to32i(esp+0x58) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esp+0x5C) = eax; //mov
	eax = to32i(esp+0x90); //mov
	to32i(eax+0xCC) = eax; //mov
	edx = (int32_t)(intptr_t)(eax+0x30); //lea
	to32i(eax+0xD0) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x60); //lea
	to32i(eax+0xD4) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x90); //lea
	to32i(eax+0xD8) = edx; //mov
	esi = to32i(eax+0xCC); //mov
	edi = to32i(esp+0x68); //mov
	add(esi, (int32_t)0x10);
	test(edi, edi);
	if (jnz())
		goto loc_434309;
	to32i(esp+0x68) = 1; //mov
loc_434309:
	eax = to32i(esp+0x68); //mov
	to32i(esp+0x94) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x70); //lea
	fild(to32i(esp+0x94));
	eax = (int32_t)(intptr_t)(esp+0x6C); //lea
	fstp(to32f(esp+0x6C));
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
	ecx = (int32_t)(intptr_t)(esp+0x70); //lea
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
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
		goto loc_43441B;
	cmp(eax, ecx);
	if (jge())
		goto loc_43441B;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4343EF;
	cmp(eax, ecx);
	if (jl())
		goto loc_4343EF;
	cmp(eax, edx);
	if (jle())
		goto loc_4343F3;
	or_(ebx, (int32_t)4);
	goto loc_4343F3;
loc_4343EF:
	or_(ebx, (int32_t)8);
loc_4343F3:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_434416;
	cmp(eax, ecx);
	if (jl())
		goto loc_434416;
	cmp(eax, edx);
	if (jle())
		goto loc_434420;
	or_(ebx, (int32_t)2);
	goto loc_434420;
loc_434416:
	or_(ebx, (int32_t)1);
	goto loc_434420;
loc_43441B:
	ebx = 0x10; //mov
loc_434420:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x90); //mov
	esi = to32i(esi+0xD0); //mov
	eax = to32i(esp+0x50); //mov
	add(esi, (int32_t)0x10);
	test(eax, eax);
	if (jnz())
		goto loc_434442;
	to32i(esp+0x50) = 1; //mov
loc_434442:
	eax = to32i(esp+0x50); //mov
	to32i(esp+0x94) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x78); //lea
	fild(to32i(esp+0x94));
	eax = (int32_t)(intptr_t)(esp+0x74); //lea
	fstp(to32f(esp+0x74));
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
	ecx = (int32_t)(intptr_t)(esp+0x78); //lea
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
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
		goto loc_434554;
	cmp(eax, ecx);
	if (jge())
		goto loc_434554;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_434528;
	cmp(eax, ecx);
	if (jl())
		goto loc_434528;
	cmp(eax, edx);
	if (jle())
		goto loc_43452C;
	or_(ebx, (int32_t)4);
	goto loc_43452C;
loc_434528:
	or_(ebx, (int32_t)8);
loc_43452C:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_43454F;
	cmp(eax, ecx);
	if (jl())
		goto loc_43454F;
	cmp(eax, edx);
	if (jle())
		goto loc_434559;
	or_(ebx, (int32_t)2);
	goto loc_434559;
loc_43454F:
	or_(ebx, (int32_t)1);
	goto loc_434559;
loc_434554:
	ebx = 0x10; //mov
loc_434559:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x90); //mov
	esi = to32i(esi+0xD4); //mov
	ecx = to32i(esp+0x5C); //mov
	add(esi, (int32_t)0x10);
	test(ecx, ecx);
	if (jnz())
		goto loc_43457B;
	to32i(esp+0x5C) = 1; //mov
loc_43457B:
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x94) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x80); //lea
	fild(to32i(esp+0x94));
	eax = (int32_t)(intptr_t)(esp+0x7C); //lea
	fstp(to32f(esp+0x7C));
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
	ecx = (int32_t)(intptr_t)(esp+0x80); //lea
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
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
		goto loc_434693;
	cmp(eax, ecx);
	if (jge())
		goto loc_434693;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_434667;
	cmp(eax, ecx);
	if (jl())
		goto loc_434667;
	cmp(eax, edx);
	if (jle())
		goto loc_43466B;
	or_(ebx, (int32_t)4);
	goto loc_43466B;
loc_434667:
	or_(ebx, (int32_t)8);
loc_43466B:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_43468E;
	cmp(eax, ecx);
	if (jl())
		goto loc_43468E;
	cmp(eax, edx);
	if (jle())
		goto loc_434698;
	or_(ebx, (int32_t)2);
	goto loc_434698;
loc_43468E:
	or_(ebx, (int32_t)1);
	goto loc_434698;
loc_434693:
	ebx = 0x10; //mov
loc_434698:
	to8i(edi) = bl; //mov
	esi = to32i(esp+0x90); //mov
	esi = to32i(esi+0xD8); //mov
	edi = to32i(esp+0x44); //mov
	add(esi, (int32_t)0x10);
	test(edi, edi);
	if (jnz())
		goto loc_4346BA;
	to32i(esp+0x44) = 1; //mov
loc_4346BA:
	eax = to32i(esp+0x44); //mov
	to32i(esp+0x94) = eax; //mov
	edx = (int32_t)(intptr_t)(esp+0x88); //lea
	fild(to32i(esp+0x94));
	eax = (int32_t)(intptr_t)(esp+0x84); //lea
	fstp(to32f(esp+0x84));
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
	ecx = (int32_t)(intptr_t)(esp+0x88); //lea
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
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
		goto loc_4347D8;
	cmp(eax, ecx);
	if (jge())
		goto loc_4347D8;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4347AC;
	cmp(eax, ecx);
	if (jl())
		goto loc_4347AC;
	cmp(eax, edx);
	if (jle())
		goto loc_4347B0;
	or_(ebx, (int32_t)4);
	goto loc_4347B0;
loc_4347AC:
	or_(ebx, (int32_t)8);
loc_4347B0:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4347D3;
	cmp(eax, ecx);
	if (jl())
		goto loc_4347D3;
	cmp(eax, edx);
	if (jle())
		goto loc_4347DD;
	or_(ebx, (int32_t)2);
	goto loc_4347DD;
loc_4347D3:
	or_(ebx, (int32_t)1);
	goto loc_4347DD;
loc_4347D8:
	ebx = 0x10; //mov
loc_4347DD:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x98);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4347E9:
	edx = to32i(esp+0x30); //mov
	ecx = to32i(ebp+0x10); //mov
	add(edx, edx);
	sub(ecx, edx);
	to32i(esp+0x30) = ecx; //mov
	edx = to32i(esp+0x34); //mov
	ecx = to32i(ebp+0x14); //mov
	add(edx, edx);
	sub(ecx, edx);
	to32i(esp+0x34) = ecx; //mov
	edx = to32i(esp+0x38); //mov
	ecx = to32i(ebp+0x18); //mov
	add(edx, edx);
	ebx = 1; //mov
	sub(ecx, edx);
	edx = esp; //mov
	to32i(esp+0x38) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x30); //lea
	push32(edx);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_480540(); esp += 4; //call
	eax = to32i(esp+4); //mov
	sub(eax, to32i(ebp+0x2C));
	test(eax, eax);
	if (jle())
		goto loc_4348BB;
loc_43483A:
	cmp(eax, (int32_t)0x8000);
	if (jge())
		goto loc_434856;
	eax = to32i(esp+4); //mov
	esi = to32i(ebp+0x2C); //mov
	cmp(eax, esi);
	if (jle())
		goto loc_4348C2;
	eax = (int32_t)(intptr_t)(esi+0x8000); //lea
loc_434852:
	to32i(esp+4) = eax; //mov
loc_434856:
	eax = to32i(ebp+0x28); //mov
	add(eax, (int32_t)0x8000);
	to32i(esp+0x60) = eax; //mov
	eax = to32i(ebp+0x2C); //mov
	to32i(esp+0x64) = eax; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x68) = eax; //mov
	eax = to32i(ebp+0x28); //mov
	add(eax, (int32_t)0xFFFF8000);
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(ebp+0x2C); //mov
	to32i(esp+0x40) = eax; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x44) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, (int32_t)0x8000);
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(esp); //mov
	add(eax, (int32_t)0xFFFF8000);
	to32i(esp+0x54) = eax; //mov
	eax = to32i(esp+4); //mov
	goto loc_4342B9;
loc_4348BB:
	neg(eax);
	goto loc_43483A;
loc_4348C2:
	eax = (int32_t)(intptr_t)(esi-0x8000); //lea
	goto loc_434852;
loc_4348CA:
	neg(eax);
	goto loc_43423B;
loc_4348D1:
	eax = (int32_t)(intptr_t)(ecx-0x8000); //lea
	goto loc_434256;
}
Fn(void) Game::_sub_4348E0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	cmp(to32i(eax+0x30), (int32_t)0x10000);
	if (jl())
		goto loc_434AEA;
loc_4348FA:
	cmp(to32i(dword_4DAC24), (int32_t)0x1F4);
	if (jle())
		goto loc_434AF6;
	edx = 0x19999; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to16i(esp+0x10) = ax; //mov
	edx = eax; //mov
loc_434922:
	eax = to32i(esi+8); //mov
	ebp = dx; //movsx
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(esi+8); //mov
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(esp+0xE); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+8); //mov
	sar(ebp, (int32_t)0x10);
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	eax = to32i(esi+8); //mov
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
	edx = ebp; //mov
	ebx = (int32_t)(intptr_t)(edi+0x118); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(edi+0x114); //lea
	eax = to32i(esi+0x30); //mov
	esp -= 4; _sub_433AE0(); esp += 4; //call
	fld(to32f(esi+0x38));
	ebx = to32i(esp); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	add(eax, ebx);
	to32i(edi+0x104) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	sub(eax, ebp);
	add(eax, ecx);
	to32i(edi+0x108) = eax; //mov
	edx = to32i(esp+4); //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	add(eax, edx);
	to32i(edi+0xFC) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	ebx = to32i(esp+8); //mov
	sub(eax, ebp);
	sub(eax, ebx);
	to32i(edi+0x100) = eax; //mov
	edx = to32i(esp); //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	sub(eax, edx);
	to32i(edi+0xF4) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	sub(eax, ebp);
	sub(eax, ecx);
	to32i(edi+0xF8) = eax; //mov
	ecx = to32i(esp+4); //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	sub(eax, ecx);
	to32i(edi+0xEC) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
	eax = to32i(esp+0xC); //mov
	sub(eax, ebp);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(edi+0xF0) = edx; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_434AEA:
	to32i(eax+0x30) = 0x10000; //mov
	goto loc_4348FA;
loc_434AF6:
	ebx = to32i(esi+0x30); //mov
	eax = to32i(dword_4F2224); //mov
	add(ebx, ebx);
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
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cl = to8i(byte_4F2285); //mov
	edx = eax; //mov
	sar(dx, cl);
	cl = to8i(byte_4F2284); //mov
	sar(ax, cl);
	to16i(esp+0x10) = ax; //mov
	goto loc_434922;
}
Fn(void) Game::_sub_434B50()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = edx; //mov
	ebp = ebx; //mov
	cmp(to32i(eax+0x30), (int32_t)0x10000);
	if (jl())
		goto loc_434D43;
loc_434B6A:
	cmp(to32i(dword_4DAC24), (int32_t)0x1F4);
	if (jle())
		goto loc_434D4F;
	edx = 0x19999; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = eax; //mov
loc_434B8F:
	eax = to32i(esi+8); //mov
	ebp = dx; //movsx
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	eax = to32i(esi+8); //mov
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	eax = to32i(esi+8); //mov
	ebp = bx; //movsx
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
	edx = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+4) = eax; //mov
	eax = to32i(esi+8); //mov
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
	edx = ebp; //mov
	ebx = (int32_t)(intptr_t)(edi+0x118); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = (int32_t)(intptr_t)(edi+0x114); //lea
	eax = to32i(esi+0x30); //mov
	esp -= 4; _sub_433AE0(); esp += 4; //call
	fld(to32f(esi+0x38));
	ebx = to32i(esp+8); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	add(eax, ebx);
	to32i(edi+0x104) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	add(eax, ebp);
	to32i(edi+0x108) = eax; //mov
	edx = to32i(esp); //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	add(eax, edx);
	to32i(edi+0xFC) = eax; //mov
	ecx = to32i(esp+4); //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	sub(eax, ecx);
	to32i(edi+0x100) = eax; //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	sub(eax, ebx);
	to32i(edi+0xF4) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	sub(eax, ebp);
	to32i(edi+0xF8) = eax; //mov
	fld(to32f(esi+0x38));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	sub(eax, edx);
	to32i(edi+0xEC) = eax; //mov
	fld(to32f(esi+0x3C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+8));
	eax = to32i(esp+8); //mov
	add(eax, ecx);
	to32i(edi+0xF0) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_434D43:
	to32i(eax+0x30) = 0x10000; //mov
	goto loc_434B6A;
loc_434D4F:
	eax = to32i(dword_4F2224); //mov
	ebx = to32i(esi+0x30); //mov
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
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cl = to8i(byte_4F2285); //mov
	edx = eax; //mov
	ebx = eax; //mov
	sar(dx, cl);
	cl = to8i(byte_4F2284); //mov
	sar(bx, cl);
	goto loc_434B8F;
}
Fn(void) Game::_sub_434DA0()
{
	to8i(byte_4F2285) = dl; //mov
	eax = to32i(dword_4D52CC+eax*4); //mov
	to8i(byte_4F2284) = bl; //mov
	to32i(dword_4F2224) = eax; //mov
}
Fn(void) Game::_sub_434DD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = 8; //mov
	ebx = (int32_t)(intptr_t)dword_4F209C; //mov
	eax = (int32_t)(intptr_t)aSm; //mov
	edx = to32i(dword_4F227C); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	ecx = 8; //mov
	ebx = (int32_t)(intptr_t)dword_4F1FBC; //mov
	eax = (int32_t)(intptr_t)aDi; //mov
	edx = to32i(dword_4F227C); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	ecx = 3; //mov
	ebx = (int32_t)(intptr_t)dword_4F21D0; //mov
	eax = (int32_t)(intptr_t)aGa; //mov
	edx = to32i(dword_4F2280); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	ecx = 3; //mov
	ebx = (int32_t)(intptr_t)dword_4F217C; //mov
	eax = (int32_t)(intptr_t)aSn; //mov
	edx = to32i(dword_4F2280); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	ecx = 3; //mov
	ebx = (int32_t)(intptr_t)dword_4F2228; //mov
	eax = (int32_t)(intptr_t)aGr; //mov
	edx = to32i(dword_4F2280); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	cmp(to32i(dword_51221C), (int32_t)8);
	if (jnz())
		goto loc_434E7C;
	ecx = 8; //mov
	ebx = (int32_t)(intptr_t)dword_4F1EDC; //mov
	eax = (int32_t)(intptr_t)aMs; //mov
	edx = to32i(dword_4F2280); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_434E7C:
	ecx = 8; //mov
	ebx = (int32_t)(intptr_t)dword_4F1EDC; //mov
	eax = (int32_t)(intptr_t)aSp; //mov
	edx = to32i(dword_4F2280); //mov
	esp -= 4; _sub_434EA0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_434EA0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	to32i(esp+0xC) = ecx; //mov
	xor_(ebp, ebp);
	test(ecx, ecx);
	if (jle())
		goto loc_434EF7;
loc_434EB8:
	push32(ebp);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	push32(aS02d);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	ah = to8i(byte_512218); //mov
	add(esp, (int32_t)0x10);
	test(ah, (int8_t)0x80);
	if (jz())
		goto loc_434EFE;
	edx = (int32_t)(intptr_t)aMooo; //mov
loc_434EE0:
	ecx = esi; //mov
	eax = edi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ecx = to32i(esp+0xC); //mov
	inc(ebp);
	add(esi, (int32_t)0x1C);
	cmp(ebp, ecx);
	if (jl())
		goto loc_434EB8;
loc_434EF7:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_434EFE:
	edx = esp; //mov
	goto loc_434EE0;
}
Fn(void) Game::_sub_434F10()
{
	_sub_435470(); return; //jmp
}
Fn(void) Game::_sub_434F20()
{
	_sub_428F20(); return; //jmp
}
Fn(void) Game::_sub_434F30()
{
	esp -= 4; _sub_434F60(); esp += 4; //call
	esp -= 4; _sub_434DD0(); esp += 4; //call
	_sub_435530(); return; //jmp
}
Fn(void) Game::_sub_434F60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	esi = (int32_t)(intptr_t)dword_500D2C; //mov
	xor_(ebp, ebp);
	xor_(edi, edi);
loc_434F75:
	push32(edi);
	push32(aLinD);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	imul32(eax, edi, 0x1C);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = esi; //mov
	add(esp, (int32_t)0xC);
	ebx = to32i(dword_500D20); //mov
	to32i(esp+0x100) = eax; //mov
	eax = to32i(dword_500D28); //mov
	add(ebp, (int32_t)4);
	esp -= 4; _sub_4352C0(); esp += 4; //call
	eax = to32i(esp+0x100); //mov
	edx = 1; //mov
	to32i(dword_500CEC+ebp) = esi; //mov
	add(esi, (int32_t)0x1C);
	add(edi, edx);
	to32i(dword_500D44+eax) = edx; //mov
	cmp(edi, (int32_t)8);
	if (jl())
		goto loc_434F75;
	ecx = (int32_t)(intptr_t)dword_500E0C; //mov
	edx = (int32_t)(intptr_t)aShad; //mov
	ebx = to32i(dword_500D20); //mov
	eax = to32i(dword_500D28); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_500E0C; //mov
	edx = (int32_t)(intptr_t)aSkd0; //mov
	ebx = to32i(dword_500D20); //mov
	eax = to32i(dword_500D28); //mov
	to32i(dword_500F40) = ecx; //mov
	ecx = (int32_t)(intptr_t)dword_500E28; //mov
	esi = (int32_t)(intptr_t)dword_500E44; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ebx = (int32_t)(intptr_t)dword_500E28; //mov
	ecx = (int32_t)(intptr_t)dword_500E44; //mov
	edx = (int32_t)(intptr_t)aSkd1; //mov
	eax = to32i(dword_500D28); //mov
	to32i(dword_500D10) = ebx; //mov
	ebx = to32i(dword_500D20); //mov
	edi = (int32_t)(intptr_t)dword_500E60; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_500E60; //mov
	edx = (int32_t)(intptr_t)aSkd2; //mov
	ebx = to32i(dword_500D20); //mov
	eax = to32i(dword_500D28); //mov
	to32i(dword_500D14) = esi; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_500E7C; //mov
	edx = (int32_t)(intptr_t)aSkd3; //mov
	ebx = to32i(dword_500D20); //mov
	eax = to32i(dword_500D28); //mov
	to32i(dword_500D18) = edi; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	eax = 1; //mov
	ebp = (int32_t)(intptr_t)dword_500E7C; //mov
	to32i(dword_4D52E0) = eax; //mov
	ah = to8i(byte_512219); //mov
	to32i(dword_500D1C) = ebp; //mov
	test(ah, (int8_t)2);
	if (jz())
		goto loc_4350D5;
	ecx = (int32_t)(intptr_t)dword_500E98; //mov
	edx = (int32_t)(intptr_t)aChr1; //mov
loc_4350A5:
	ebx = to32i(dword_500D20); //mov
	eax = to32i(dword_500D28); //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_500E98; //mov
	xor_(edx, edx);
	to32i(dword_500F5C) = ecx; //mov
	to32i(dword_4D52E0) = edx; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4350D5:
	ecx = (int32_t)(intptr_t)dword_500E98; //mov
	edx = (int32_t)(intptr_t)aChr0; //mov
	goto loc_4350A5;
}
Fn(void) Game::_sub_435104()
{
	static const void *const off_4350F0[] = {
		&&loc_43511E,
		&&loc_43513A,
		&&loc_435156,
		&&loc_435172,
		&&loc_43518E,
	};
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 7; //mov
	edi = ebx; //mov
	esi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(edx, (int32_t)4);
	if (ja())
		goto loc_435136;
	goto *off_4350F0[edx];
loc_43511E:
	edx = to32i(eax+0x10); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+8); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(ebx+0x10) = eax; //mov
loc_435136:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43513A:
	edx = to32i(eax+8); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+0xC); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435156:
	edx = to32i(eax+0x10); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+8); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+0xC); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435172:
	edx = to32i(eax+0xC); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+8); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43518E:
	edx = to32i(eax+8); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4351C4()
{
	static const void *const off_4351B0[] = {
		&&loc_4351DE,
		&&loc_4351FA,
		&&loc_435272,
		&&loc_435256,
		&&loc_435216,
	};
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 7; //mov
	edi = ebx; //mov
	esi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(edx, (int32_t)4);
	if (ja())
		goto loc_4351F6;
	goto *off_4351B0[edx];
loc_4351DE:
	edx = to32i(eax+8); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+0xC); //mov
	to32i(ebx+0x10) = eax; //mov
loc_4351F6:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4351FA:
	edx = to32i(eax+0x10); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+8); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435216:
	ecx = to32i(ebx+8); //mov
	cmp(ecx, to32i(ebx+4));
	if (jge())
		goto loc_43523A;
loc_43521E:
	edx = to32i(eax+0x10); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+8); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+0xC); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43523A:
	edx = to32i(eax+8); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435256:
	edx = to32i(eax+0xC); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+4); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+8); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435272:
	esi = to32i(ebx+8); //mov
	cmp(esi, to32i(ebx+4));
	if (jge())
		goto loc_43521E;
	edx = to32i(eax+8); //mov
	to32i(ebx+4) = edx; //mov
	edx = to32i(eax+0xC); //mov
	to32i(ebx+8) = edx; //mov
	edx = to32i(eax+0x10); //mov
	to32i(ebx+0xC) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(ebx+0x10) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4352A0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 7; //mov
	edi = ebx; //mov
	esi = eax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4352C0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebp = edx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_43537A;
	ebx = edx; //mov
loc_4352D5:
	esi = to32i(dword_4D52F0); //mov
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	add(eax, esi);
	inc(esi);
	shl(eax, (int32_t)2);
	to32i(dword_4D52F0) = esi; //mov
	esi = (int32_t)(intptr_t)dword_4F2290; //mov
	add(esi, eax);
	to32i(ecx) = esi; //mov
	cmp(to32i(dword_4D52F0), (int32_t)0xBB8);
	if (jl())
		goto loc_43530B;
	xor_(edi, edi);
	to32i(dword_4D52F0) = edi; //mov
loc_43530B:
	esi = ebx; //mov
	edi = to32i(ecx); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(ecx+4) = 0; //mov
	eax = to32i(esp); //mov
	to32i(ecx+8) = 1; //mov
	edx = to32i(dword_500D28); //mov
	to32i(ecx+0xC) = 2; //mov
	esi = (int32_t)(intptr_t)(ecx+0x18); //lea
	to32i(ecx+0x10) = 3; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_43538F;
	edx = (int32_t)(intptr_t)aPaz; //mov
	eax = ebp; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_435386;
	edx = (int32_t)(intptr_t)aTpg; //mov
	eax = ebp; //mov
	esp -= 4; _strstr_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43538F;
	eax = ebx; //mov
	xor_(edx, edx);
loc_435364:
	esp -= 4; _sub_4354C0(); esp += 4; //call
	to32i(ecx+0x18) = 1; //mov
	to32i(ecx+0x14) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_43537A:
	esp -= 4; _sub_482EB4(); esp += 4; //call
	ebx = eax; //mov
	goto loc_4352D5;
loc_435386:
	edx = 1; //mov
	eax = ebx; //mov
	goto loc_435364;
loc_43538F:
	edx = esi; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4353B0(); esp += 4; //call
	to32i(ecx+0x14) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4353B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	ebp = edx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGame3_0; //mov
	ecx = 0x173; //mov
	eax = (int32_t)(intptr_t)aGlideshape; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x20014; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ecx = eax; //mov
	ebx = ebp; //mov
	edx = edi; //mov
	esi = eax; //mov
	esp -= 4; _sub_4355B0(); esp += 4; //call
	ebx = to32i(edi); //mov
	and_(ebx, (int32_t)0xFF);
	cmp(ebx, (int32_t)0x7B);
	if (jb())
		goto loc_435457;
	if (ja())
		goto loc_43543E;
	ebx = to32i(dword_4D97B8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_43544E;
	push32(0);
	push32(4);
	ebx = to32i(ecx+4); //mov
	push32(2);
loc_43540F:
	sar(ebx, (int32_t)0x10);
	ecx = to32i(ecx+2); //mov
	push32(ebx);
loc_435416:
	sar(ecx, (int32_t)0x10);
	push32(ecx);
	esp -= 4; _sub_497464(); esp += 4; //call
	ebx = eax; //mov
	push32(0);
	ecx = (int32_t)(intptr_t)(esi+0x10); //lea
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43543E:
	cmp(ebx, (int32_t)0x7D);
	if (jnz())
		goto loc_435457;
	push32(0);
	push32(0);
	ebx = to32i(ecx+4); //mov
	push32(7);
	goto loc_43540F;
loc_43544E:
	push32(ebx);
	push32(ebx);
	ebx = to32i(ecx+4); //mov
	push32(3);
	goto loc_43540F;
loc_435457:
	push32(0);
	push32(0);
	ecx = to32i(esi+4); //mov
	push32(3);
	sar(ecx, (int32_t)0x10);
	push32(ecx);
	ecx = to32i(esi+2); //mov
	goto loc_435416;
}
Fn(void) Game::_sub_435470()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D52E4); //mov
	test(edx, edx);
	if (jnz())
		goto loc_43548B;
	ebx = to32i(dword_4D52E8); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4354A8;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43548B:
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D52E4) = ecx; //mov
	ebx = to32i(dword_4D52E8); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_4354A8;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4354A8:
	push32(esi);
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D52E8) = esi; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4354C0()
{
	push32(ecx);
	sub(esp, (int32_t)4);
	ecx = edx; //mov
	cmp(edx, (int32_t)2);
	if (jle())
		goto loc_4354D2;
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ecx);
	return;
loc_4354D2:
	push32(esi);
	push32(ebx);
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	esi = to32i(dword_4D52E4+edx*4); //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4355B0(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_4354F3;
	eax = ecx; //mov
	esp -= 4; _sub_435500(); esp += 4; //call
loc_4354F3:
	eax = to32i(dword_4D52EC); //mov
	pop32(ebx);
	pop32(esi);
	add(esp, (int32_t)4);
	pop32(ecx);
}
Fn(void) Game::_sub_435500()
{
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_435506;
	return;
loc_435506:
	push32(edx);
	push32(ecx);
	eax = to32i(dword_4D52E4+eax*4); //mov
	push32(0);
	add(eax, (int32_t)0x10);
	push32(eax);
	edx = to32i(dword_4D52EC); //mov
	push32(edx);
	esp -= 4; _sub_49755C(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_435530()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = (int32_t)(intptr_t)aCNfs2seGame3_0; //mov
	ecx = 0x140; //mov
	eax = (int32_t)(intptr_t)aSwapshape; //mov
	esi = 0x141; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x20014; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = (int32_t)(intptr_t)aCNfs2seGame3_0; //mov
	edx = 0x20014; //mov
	to32i(dword_4D52E4) = eax; //mov
	eax = (int32_t)(intptr_t)aSwapshape; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	push32(0);
	push32(0);
	push32(3);
	push32(0x100);
	push32(0x100);
	to32i(dword_4D52E8) = eax; //mov
	esp -= 4; _sub_497464(); esp += 4; //call
	to32i(dword_4D52EC) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4355B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	eax = edx; //mov
	esi = to32i(edx+2); //mov
	edx = to32i(dword_4D9944); //mov
	sar(esi, (int32_t)0x10);
	test(edx, edx);
	if (jz())
		goto loc_435617;
	esi = edx; //mov
loc_4355CA:
	ecx = to32i(eax); //mov
	and_(ecx, (int32_t)0xFF);
	cmp(ecx, (int32_t)0x7B);
	if (jb())
		goto loc_4356D5;
	edx = (int32_t)(intptr_t)(eax+0x10); //lea
	edi = (int32_t)(intptr_t)(ebp+0x10); //lea
	if (ja())
		goto loc_43568A;
	cmp(to32i(dword_4D97B8), (int32_t)0);
	if (jz())
		goto loc_4356B2;
	push32(ebx);
	ecx = to32i(eax+4); //mov
	push32(esi);
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax+2); //mov
	push32(esi);
	sar(ebx, (int32_t)0x10);
	eax = edi; //mov
	esp -= 4; _sub_4359D0(); esp += 4; //call
	to16i(ebp+6) = si; //mov
	to16i(ebp+4) = si; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_435617:
	cmp(to32i(dword_4D5C40), (int32_t)0);
	if (jz())
		goto loc_43562F;
	cmp(esi, (int32_t)0x80);
	if (jl())
		goto loc_43562F;
	esi = 0x80; //mov
	goto loc_4355CA;
loc_43562F:
	cmp(to32i(dword_4D5C40), (int32_t)0);
	if (jz())
		goto loc_435644;
	cmp(esi, (int32_t)0x40);
	if (jl())
		goto loc_435644;
	esi = 0x40; //mov
	goto loc_4355CA;
loc_435644:
	cmp(esi, (int32_t)0x20);
	if (jl())
		goto loc_435653;
	esi = 0x20; //mov
	goto loc_4355CA;
loc_435653:
	cmp(esi, (int32_t)0x10);
	if (jl())
		goto loc_435662;
	esi = 0x10; //mov
	goto loc_4355CA;
loc_435662:
	cmp(esi, (int32_t)8);
	if (jl())
		goto loc_435671;
	esi = 8; //mov
	goto loc_4355CA;
loc_435671:
	cmp(esi, (int32_t)4);
	if (jl())
		goto loc_435680;
	esi = 4; //mov
	goto loc_4355CA;
loc_435680:
	esi = 2; //mov
	goto loc_4355CA;
loc_43568A:
	cmp(ecx, (int32_t)0x7D);
	if (jnz())
		goto loc_4356D5;
	push32(ebx);
	ecx = to32i(eax+4); //mov
	push32(esi);
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax+2); //mov
	push32(esi);
	sar(ebx, (int32_t)0x10);
	eax = edi; //mov
	esp -= 4; _sub_435850(); esp += 4; //call
	to16i(ebp+6) = si; //mov
	to16i(ebp+4) = si; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4356B2:
	push32(ebx);
	ecx = to32i(eax+4); //mov
	push32(esi);
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax+2); //mov
	push32(esi);
	sar(ebx, (int32_t)0x10);
	eax = edi; //mov
	esp -= 4; _sub_435AD0(); esp += 4; //call
	to16i(ebp+6) = si; //mov
	to16i(ebp+4) = si; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4356D5:
	push32(ebx);
	edx = (int32_t)(intptr_t)(eax+0x10); //lea
	ecx = to32i(eax+4); //mov
	push32(esi);
	sar(ecx, (int32_t)0x10);
	ebx = to32i(eax+2); //mov
	push32(esi);
	sar(ebx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(ebp+0x10); //lea
	esp -= 4; _sub_435700(); esp += 4; //call
	to16i(ebp+6) = si; //mov
	to16i(ebp+4) = si; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_435700()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	ebp = to32i(esp+0x38); //mov
	to32i(esp+0x14) = edx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x24) = ebp; //mov
	fild(to32i(esp+0xC));
	fild(to32i(esp+0x24));
	fdivp_st(1, 0);
	edx = to32i(esp+0x40); //mov
	to32i(edx) = 0; //mov
	edx = to32i(esp+0x3C); //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp+0x24) = edx; //mov
	fild(to32i(esp+0xC));
	fild(to32i(esp+0x24));
	fdivp_st(1, 0);
	xor_(edx, edx);
	ecx = to32i(esp+0x3C); //mov
	to32i(esp+4) = edx; //mov
	fxch_st(1);
	fstp(to32f(esp+0x10));
	fstp(to32f(esp+0x18));
	test(ecx, ecx);
	if (jle())
		goto loc_43582C;
loc_43575F:
	edx = to32i(esp+4); //mov
	to32i(esp+0x24) = edx; //mov
	fild(to32i(esp+0x24));
	fmul(to32f(esp+0x18));
	ecx = to32i(esp); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x24));
	edx = to32i(esp+0x24); //mov
	imul32(edx, ecx);
	ecx = to32i(esp+0x14); //mov
	add(edx, edx);
	xor_(edi, edi);
	add(ecx, edx);
	to32i(esp+0x1C) = edi; //mov
	to32i(esp+8) = ecx; //mov
	xor_(ecx, ecx);
	test(ebp, ebp);
	if (jle())
		goto loc_435817;
loc_43579E:
	fld(to32f(esp+0x1C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	edx = to32i(esp+0x20); //mov
	ebx = to32i(esp+8); //mov
	add(edx, edx);
	add(edx, ebx);
	bx = to16i(edx); //mov
	cmp(bx, (int16_t)0x7C0);
	if (jz())
		goto loc_435835;
	xor_(bl, bl);
	and_(bh, (int8_t)0xF8);
	and_(ebx, (int32_t)0xFFFF);
	sar(ebx, (int32_t)0xB);
	esi = ebx; //mov
	bx = to16i(edx); //mov
	and_(ebx, (int32_t)0x7C0);
	and_(ebx, (int32_t)0xFFFF);
	shl(esi, (int32_t)0xA);
	sar(ebx, (int32_t)6);
	or_(esi, (int32_t)0x8000);
	edi = ebx; //mov
	bx = to16i(edx); //mov
	shl(edi, (int32_t)5);
	xor_(bh, bh);
	edx = esi; //mov
	and_(bl, (int8_t)0x1F);
	or_(edx, edi);
	add(eax, (int32_t)2);
	or_(edx, ebx);
	to16i(eax-2) = dx; //mov
loc_435806:
	fld(to32f(esp+0x1C));
	fadd(to32f(esp+0x10));
	inc(ecx);
	fstp(to32f(esp+0x1C));
	cmp(ecx, ebp);
	if (jl())
		goto loc_43579E;
loc_435817:
	ebx = to32i(esp+4); //mov
	inc(ebx);
	esi = to32i(esp+0x3C); //mov
	to32i(esp+4) = ebx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_43575F;
loc_43582C:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_435835:
	edx = to32i(esp+0x40); //mov
	to16i(eax) = 0; //mov
	add(eax, (int32_t)2);
	to32i(edx) = 1; //mov
	goto loc_435806;
}
Fn(void) Game::_sub_435850()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	esi = to32i(esp+0x38); //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp) = ecx; //mov
	ebx = to32i(esp+0x40); //mov
	edi = to32i(esp); //mov
	xor_(ecx, ecx);
	to32i(ebx) = 0; //mov
	to32i(esp+0xC) = ecx; //mov
	test(edi, edi);
	if (jle())
		goto loc_43598F;
	ebp = 0xF000; //mov
loc_435881:
	edi = to32i(esp+4); //mov
	xor_(ecx, ecx);
	test(edi, edi);
	if (jle())
		goto loc_4358B3;
loc_43588B:
	edi = to32i(edx); //mov
	test(edi, edi);
	if (jz())
		goto loc_4358CC;
	cmp(edi, (int32_t)0xFF00F800);
	if (jnz())
		goto loc_4358D3;
loc_435899:
	to32i(ebx) = 1; //mov
	to16i(eax) = 0; //mov
loc_4358A4:
	add(eax, (int32_t)2);
	edi = to32i(esp+4); //mov
	inc(ecx);
	add(edx, (int32_t)4);
	cmp(ecx, edi);
	if (jl())
		goto loc_43588B;
loc_4358B3:
	cmp(ecx, esi);
	if (jge())
		goto loc_43597B;
	to32i(ebx) = 1; //mov
	inc(ecx);
	to16i(eax) = 0; //mov
	add(eax, (int32_t)2);
	goto loc_4358B3;
loc_4358CC:
	to16i(eax) = 0xF000; //mov
	goto loc_4358A4;
loc_4358D3:
	cmp(edi, (int32_t)0xFF00FB00);
	if (jz())
		goto loc_435899;
	and_(edi, (int32_t)0xF0000000);
	shr(edi, (int32_t)0x1C);
	to32i(esp+8) = edi; //mov
	edi = to32i(esp+8); //mov
	to32i(esp+0x14) = edi; //mov
	edi = to32i(edx); //mov
	and_(edi, (int32_t)0xF00000);
	shr(edi, (int32_t)0x14);
	to32i(esp+8) = edi; //mov
	edi = to32i(esp+8); //mov
	to32i(esp+0x10) = edi; //mov
	edi = to32i(edx); //mov
	and_(edi, (int32_t)0xF000);
	shr(edi, (int32_t)0xC);
	to32i(esp+8) = edi; //mov
	edi = to32i(esp+8); //mov
	to32i(esp+0x24) = edi; //mov
	edi = to32i(edx); //mov
	and_(edi, (int32_t)0xF0);
	shr(edi, (int32_t)4);
	to32i(esp+8) = edi; //mov
	edi = to32i(esp+8); //mov
	to32i(esp+0x20) = edi; //mov
	edi = to32i(esp+0x14); //mov
	shl(edi, (int32_t)0xC);
	to32i(esp+0x1C) = edi; //mov
	edi = to32i(esp+0x10); //mov
	shl(edi, (int32_t)8);
	to32i(esp+0x18) = edi; //mov
	edi = to32i(esp+0x1C); //mov
	or_(edi, to32i(esp+0x18));
	to32i(esp+0x1C) = edi; //mov
	edi = to32i(esp+0x24); //mov
	shl(edi, (int32_t)4);
	to32i(esp+0x18) = edi; //mov
	edi = to32i(esp+0x1C); //mov
	or_(edi, to32i(esp+0x18));
	or_(edi, to32i(esp+0x20));
	to16i(eax) = di; //mov
	cmp(di, (int16_t)0xF000);
	goto loc_4358A4;
loc_43597B:
	ecx = to32i(esp+0xC); //mov
	inc(ecx);
	edi = to32i(esp); //mov
	to32i(esp+0xC) = ecx; //mov
	cmp(ecx, edi);
	if (jl())
		goto loc_435881;
loc_43598F:
	ebp = 1; //mov
	edi = to32i(esp+0x3C); //mov
	xor_(ecx, ecx);
loc_43599A:
	cmp(edi, to32i(esp+0xC));
	if (jle())
		goto loc_4359BA;
	edx = ecx; //mov
	test(esi, esi);
	if (jle())
		goto loc_4359B4;
loc_4359A6:
	add(eax, (int32_t)2);
	to32i(ebx) = ebp; //mov
	inc(edx);
	to16i(eax-2) = cx; //mov
	cmp(edx, esi);
	if (jl())
		goto loc_4359A6;
loc_4359B4:
	inc(to32i(esp+0xC));
	goto loc_43599A;
loc_4359BA:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_4359D0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	edi = to32i(esp+0x30); //mov
	ebp = to32i(esp+0x38); //mov
	esi = eax; //mov
	to32i(esp+8) = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x18) = ebx; //mov
	to32i(esp+0x1C) = edi; //mov
	fild(to32i(esp+0x18));
	fild(to32i(esp+0x1C));
	fdivp_st(1, 0);
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x1C) = ecx; //mov
	to32i(esp+0x18) = eax; //mov
	fild(to32i(esp+0x1C));
	fild(to32i(esp+0x18));
	fdivp_st(1, 0);
	xor_(edx, edx);
	to32i(ebp+0) = 0; //mov
	to32i(esp) = edx; //mov
	fxch_st(1);
	fstp(to32f(esp+0x10));
	fstp(to32f(esp+4));
	test(eax, eax);
	if (jle())
		goto loc_435AB4;
loc_435A2E:
	eax = to32i(esp); //mov
	to32i(esp+0x1C) = eax; //mov
	fild(to32i(esp+0x1C));
	fmul(to32f(esp+4));
	ebx = to32i(esp+0xC); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x18));
	edx = to32i(esp+0x18); //mov
	imul32(edx, ebx);
	xor_(ecx, ecx);
	eax = to32i(esp+8); //mov
	to32i(esp+0x14) = ecx; //mov
	add(edx, eax);
	xor_(eax, eax);
	test(edi, edi);
	if (jle())
		goto loc_435AA1;
loc_435A63:
	fld(to32f(esp+0x14));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x18));
	ebx = to32i(esp+0x18); //mov
	cmp(to8i(edx+ebx), (int8_t)0xFF);
	if (jz())
		goto loc_435ABD;
loc_435A7A:
	fld(to32f(esp+0x14));
	fld_st(0);
	esp -= 4; ___CHP(); esp += 4; //call
	inc(esi);
	inc(eax);
	fistp(to32i(esp+0x18));
	ebx = to32i(esp+0x18); //mov
	fadd(to32f(esp+0x10));
	bl = to8i(edx+ebx); //mov
	fstp(to32f(esp+0x14));
	to8i(esi-1) = bl; //mov
	cmp(eax, edi);
	if (jl())
		goto loc_435A63;
loc_435AA1:
	ebx = to32i(esp); //mov
	inc(ebx);
	edx = to32i(esp+0x34); //mov
	to32i(esp) = ebx; //mov
	cmp(ebx, edx);
	if (jl())
		goto loc_435A2E;
loc_435AB4:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_435ABD:
	to32i(ebp+0) = 1; //mov
	goto loc_435A7A;
}
Fn(void) Game::_sub_435AD0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	edi = to32i(esp+0x3C); //mov
	to32i(esp+0x10) = edx; //mov
	to32i(esp+0x14) = ebx; //mov
	edx = to32i(esp+0x44); //mov
	to32i(edx) = 0; //mov
	edx = to32i(off_4DA200); //mov
	to32i(esp+8) = edx; //mov
	test(edx, edx);
	if (jz())
		goto loc_435BC2;
	to32i(esp+0x20) = ebx; //mov
	to32i(esp+0x24) = edi; //mov
	fild(to32i(esp+0x20));
	fild(to32i(esp+0x24));
	fdivp_st(1, 0);
	edx = to32i(esp+0x40); //mov
	to32i(esp+0x20) = ecx; //mov
	to32i(esp+0x24) = edx; //mov
	fild(to32i(esp+0x20));
	fild(to32i(esp+0x24));
	fdivp_st(1, 0);
	xor_(ecx, ecx);
	to32i(esp+0x18) = ecx; //mov
	fxch_st(1);
	fstp(to32f(esp+4));
	fstp(to32f(esp));
	test(edx, edx);
	if (jle())
		goto loc_435BC2;
loc_435B3D:
	xor_(edx, edx);
	to32i(esp+0xC) = edx; //mov
	edx = to32i(esp+0x18); //mov
	to32i(esp+0x20) = edx; //mov
	fild(to32i(esp+0x20));
	fmul(to32f(esp));
	ecx = to32i(esp+0x14); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x20));
	ebp = to32i(esp+0x20); //mov
	imul32(ebp, ecx);
	add(ebp, to32i(esp+0x10));
	xor_(ecx, ecx);
	test(edi, edi);
	if (jle())
		goto loc_435BAD;
loc_435B70:
	fld(to32f(esp+0xC));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x1C));
	edx = to32i(esp+0x1C); //mov
	add(edx, ebp);
	bl = to8i(edx); //mov
	cmp(bl, (int8_t)0xFF);
	if (jnz())
		goto loc_435BCB;
	edx = to32i(esp+0x44); //mov
	to32i(edx) = 1; //mov
	to16i(eax) = 0; //mov
	add(eax, (int32_t)2);
loc_435B9C:
	fld(to32f(esp+0xC));
	fadd(to32f(esp+4));
	inc(ecx);
	fstp(to32f(esp+0xC));
	cmp(ecx, edi);
	if (jl())
		goto loc_435B70;
loc_435BAD:
	esi = to32i(esp+0x18); //mov
	inc(esi);
	ebp = to32i(esp+0x40); //mov
	to32i(esp+0x18) = esi; //mov
	cmp(esi, ebp);
	if (jl())
		goto loc_435B3D;
loc_435BC2:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_435BCB:
	dl = bl; //mov
	and_(edx, (int32_t)0xFF);
	esi = to32i(esp+8); //mov
	shl(edx, (int32_t)2);
	add(edx, esi);
	xor_(ebx, ebx);
	bl = to8i(edx+2); //mov
	sar(ebx, (int32_t)3);
	to32i(esp+0x20) = ebx; //mov
	bl = to8i(esp+0x20); //mov
	to8i(esp+0x28) = bl; //mov
	xor_(ebx, ebx);
	bl = to8i(edx+1); //mov
	sar(ebx, (int32_t)3);
	to32i(esp+0x20) = ebx; //mov
	dl = to8i(edx); //mov
	bl = to8i(esp+0x20); //mov
	and_(edx, (int32_t)0xFF);
	sar(edx, (int32_t)3);
	bh = dl; //mov
	xor_(dh, dh);
	dl = to8i(esp+0x28); //mov
	shl(edx, (int32_t)0xA);
	or_(dh, (int8_t)0x80);
	esi = edx; //mov
	xor_(dh, dh);
	dl = bl; //mov
	shl(edx, (int32_t)5);
	or_(esi, edx);
	xor_(dh, dh);
	dl = bh; //mov
	add(eax, (int32_t)2);
	or_(edx, esi);
	to16i(eax-2) = dx; //mov
	goto loc_435B9C;
}
Fn(void) Game::_sub_435C50()
{
	static const void *const off_435C40[] = {
		&&loc_435CC9,
		&&loc_435D2B,
		&&loc_435D41,
		&&loc_435D57,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	ebx = esi; //mov
	esi = eax; //mov
	esp -= 4; _sub_46FD80(); esp += 4; //call
	edx = to32i(esi); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jnz())
		goto loc_435D0F;
	ecx = to32i(dword_50A8A4); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_435D0F;
	cmp(to32i(dword_4D52FC), (int32_t)0);
	if (jz())
		goto loc_435D13;
	cmp(ecx, (int32_t)3);
	if (jz())
		goto loc_435D21;
loc_435C90:
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_44B2C0(); esp += 4; //call
	eax = to32i(eax+0x14); //mov
	esp -= 4; _sub_437B70(); esp += 4; //call
	esp -= 4; _sub_437C20(); esp += 4; //call
	ecx = eax; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_437690(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_480830(); esp += 4; //call
	eax = to32i(dword_50A8A4); //mov
	dec(eax);
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_435CF1;
	goto *off_435C40[eax];
loc_435CC9:
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_437AA0(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_435CE0;
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_435D70(); esp += 4; //call
	edi = eax; //mov
loc_435CE0:
	eax = esi; //mov
	esp -= 4; _sub_4371E0(); esp += 4; //call
	eax = edi; //mov
	edx = to32i(esi+4); //mov
	esp -= 4; _sub_437B20(); esp += 4; //call
loc_435CF1:
	eax = esi; //mov
	esi = esp; //mov
	esp -= 4; _sub_480730(); esp += 4; //call
loc_435CFA:
	esp -= 4; _sub_46FCF0(); esp += 4; //call
	esi = esp; //mov
	edi = ebx; //mov
	movsd();
	movsd();
	eax = ebx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_435D0F:
	esi = esp; //mov
	goto loc_435CFA;
loc_435D13:
	eax = to32i(esi+4); //mov
	esi = esp; //mov
	to32i(dword_4D52F4+eax*4) = edi; //mov
	goto loc_435CFA;
loc_435D21:
	esp -= 4; _sub_437CD0(); esp += 4; //call
	goto loc_435C90;
loc_435D2B:
	test(ecx, ecx);
	if (jz())
		goto loc_435D38;
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_436730(); esp += 4; //call
loc_435D38:
	eax = esi; //mov
	esp -= 4; _sub_4371E0(); esp += 4; //call
	goto loc_435CF1;
loc_435D41:
	test(ecx, ecx);
	if (jz())
		goto loc_435D4E;
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_436BA0(); esp += 4; //call
loc_435D4E:
	eax = esi; //mov
	esp -= 4; _sub_4371E0(); esp += 4; //call
	goto loc_435CF1;
loc_435D57:
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_437AA0(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_435CF1;
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_436280(); esp += 4; //call
	goto loc_435CF1;
}
Fn(void) Game::_sub_435D70()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xAC);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x9C) = eax; //mov
	to32i(esp+0x8C) = edx; //mov
	ebx = to32i(esp+0x8C); //mov
	eax = to32i(eax+4); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	to32i(esp+0x94) = eax; //mov
	to32i(esp+0x90) = edx; //mov
	eax = to32i(esp+0x9C); //mov
	edx = esp; //mov
	add(eax, (int32_t)0x44);
	to32i(esp+0x98) = ecx; //mov
	esp -= 4; _sub_4370F0(); esp += 4; //call
	test(ebx, ebx);
	if (jle())
		goto loc_435E22;
	edx = to32i(esp+0x94); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)8);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	to32i(esp+0xA4) = eax; //mov
loc_435DE7:
	eax = to32i(esp+0xA4); //mov
	cmp(byte_501294[eax], (int8_t)0);
	if (jz())
		goto loc_435E31;
loc_435DF7:
	esi = to32i(esp+0xA4); //mov
	edi = to32i(esp+0x98); //mov
	edx = to32i(esp+0x8C); //mov
	add(esi, (int32_t)0x18);
	inc(edi);
	to32i(esp+0xA4) = esi; //mov
	to32i(esp+0x98) = edi; //mov
	cmp(edi, edx);
	if (jl())
		goto loc_435DE7;
loc_435E22:
	eax = to32i(esp+0x90); //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_435E31:
	fld(to64f(dbl_4CB7F4));
	fild(to32i(dword_501280+eax));
	fmul_st(0, 1);
	fild(to32i(dword_501284+eax));
	fmul_st(0, 2);
	fild(to32i(dword_501288+eax));
	fmulp_st(3, 0);
	ecx = to32i(esp+0x90); //mov
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x68); //lea
	eax = 1; //mov
	inc(ecx);
	fxch_st(1);
	fstp(to32f(esp+0x68));
	fstp(to32f(esp+0x6C));
	to32i(esp+0x90) = ecx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	fstp(to32f(esp+0x70));
	esp -= 4; _sub_49C46C(); esp += 4; //call
	fld(to64f(dbl_4CB7FC));
	fld(to32f(esp+0x44));
	fmul_st(0, 1);
	fld(to32f(esp+0x48));
	fmul_st(0, 2);
	fld(to32f(esp+0x4C));
	edx = to32i(esp+0x9C); //mov
	fmulp_st(3, 0);
	ebx = to32i(edx+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x5C));
	eax = to32i(esp+0x5C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ebx);
	fistp(to32i(esp+0x60));
	to32i(esp+0x50) = eax; //mov
	eax = to32i(esp+0x60); //mov
	esi = to32i(edx+0x3C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, esi);
	fistp(to32i(esp+0x64));
	to32i(esp+0x54) = eax; //mov
	eax = to32i(esp+0x64); //mov
	edi = to32i(edx+0x40); //mov
	add(eax, edi);
	to32i(esp+0x58) = eax; //mov
	cmp(eax, (int32_t)0xFFFD0000);
	if (jle())
		goto loc_435EEE;
	test(eax, eax);
	if (jl())
		goto loc_435F12;
loc_435EEE:
	ecx = to32i(esp+0x58); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_435EFE;
	cmp(ecx, to32i(dword_50A8D0));
	if (jle())
		goto loc_435F3B;
loc_435EFE:
	eax = to32i(esp+0xA4); //mov
	xor_(dl, dl);
	byte_501295[eax] = dl; //mov
	goto loc_435DF7;
loc_435F12:
	eax = to32i(esp+0x94); //mov
	ebx = edx; //mov
	edx = to32i(esp+0x98); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	eax = to32i(esp+0xA4); //mov
	xor_(dh, dh);
	byte_501295[eax] = dh; //mov
	goto loc_435DF7;
loc_435F3B:
	cmp(ecx, (int32_t)0x30000);
	if (jl())
		goto loc_4360BE;
loc_435F47:
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jnz())
		goto loc_435F56;
	to32i(esp+0x58) = 1; //mov
loc_435F56:
	eax = to32i(esp+0x58); //mov
	edx = (int32_t)(intptr_t)(esp+0x88); //lea
	to32i(esp+0xA8) = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x38); //lea
	fild(to32i(esp+0xA8));
	eax = (int32_t)(intptr_t)(esp+0x84); //lea
	fstp(to32f(esp+0x84));
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
	ecx = (int32_t)(intptr_t)(esp+0x88); //lea
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
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
		goto loc_43607B;
	cmp(eax, ecx);
	if (jge())
		goto loc_43607B;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_43604F;
	cmp(eax, ecx);
	if (jl())
		goto loc_43604F;
	cmp(eax, edx);
	if (jle())
		goto loc_436053;
	or_(ebx, (int32_t)4);
	goto loc_436053;
loc_43604F:
	or_(ebx, (int32_t)8);
loc_436053:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_436076;
	cmp(eax, ecx);
	if (jl())
		goto loc_436076;
	cmp(eax, edx);
	if (jle())
		goto loc_436080;
	or_(ebx, (int32_t)2);
	goto loc_436080;
loc_436076:
	or_(ebx, (int32_t)1);
	goto loc_436080;
loc_43607B:
	ebx = 0x10; //mov
loc_436080:
	to8i(edi) = bl; //mov
	fld(to32f(esp+0x24));
	fld(to32f(esp+0x28));
	dh = to8i(esp+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	fistp(to32i(esp+0x74));
	fistp(to32i(esp+0x78));
	test(dh, dh);
	if (jz())
		goto loc_43611C;
	eax = to32i(esp+0xA4); //mov
	xor_(cl, cl);
	byte_501295[eax] = cl; //mov
	goto loc_435DF7;
loc_4360BE:
	push32(ecx);
	eax = to32i(esp+0x58); //mov
	push32(eax);
	edx = to32i(esp+0x58); //mov
	push32(edx);
	eax = to32i(esp+0xA0); //mov
	esp -= 4; _sub_4373B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_435F47;
	edx = 0xFFFFFFFF; //mov
	eax = to32i(esp+0x94); //mov
	ebx = to32i(esp+0x9C); //mov
	esp -= 4; _sub_444B40(); esp += 4; //call
	edx = to32i(esp+0x98); //mov
	eax = to32i(esp+0x94); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	eax = to32i(esp+0xA4); //mov
	xor_(ch, ch);
	byte_501295[eax] = ch; //mov
	goto loc_435DF7;
loc_43611C:
	eax = to32i(esp+0xA4); //mov
	cmp(byte_501295[eax], (int8_t)0);
	if (jz())
		goto loc_43625F;
	edx = to32i(esp+0xA4); //mov
	eax = to32i(esp+0x74); //mov
	add(eax, to32i(dword_50128C+edx));
	sar(eax, (int32_t)1);
	edi = to32i(dword_501290+edx); //mov
	to32i(esp+0x7C) = eax; //mov
	eax = to32i(esp+0x78); //mov
	add(eax, edi);
	sar(eax, (int32_t)1);
	to32i(esp+0x80) = eax; //mov
loc_43615C:
	edx = to32i(esp+0xA4); //mov
	eax = to32i(esp+0x74); //mov
	add(eax, to32i(dword_50128C+edx));
	sar(eax, (int32_t)1);
	ebx = to32i(dword_501290+edx); //mov
	to32i(dword_50128C+edx) = eax; //mov
	eax = to32i(esp+0x78); //mov
	add(eax, ebx);
	sar(eax, (int32_t)1);
	bh = 1; //mov
	to32i(dword_501290+edx) = eax; //mov
	byte_501295[edx] = bh; //mov
	edx = 0x38; //mov
	eax = (int32_t)(intptr_t)(esp+0xA0); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_435E22;
	eax = to32i(esp+0xA0); //mov
	to32i(eax+4) = 6; //mov
	eax = to32i(esp+0xA0); //mov
	to32i(eax+0x28) = (int32_t)(intptr_t)dword_50A888; //mov
	edi = to32i(esp+0xA0); //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0xA0); //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	edi = to32i(esp+0xA0); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	eax = to32i(esp+0xA0); //mov
	add(to32i(eax+0x18), (int32_t)2);
	edi = to32i(esp+0xA0); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	edx = to32i(esp+0xA0); //mov
	al = to8i(dword_50A8B0); //mov
	to8i(edx+0x2C) = al; //mov
	edx = to32i(esp+0xA0); //mov
	to8i(edx+0x2D) = al; //mov
	edx = to32i(esp+0xA0); //mov
	to8i(edx+0x2E) = al; //mov
	edx = to32i(esp+0xA0); //mov
	to8i(edx+0x2F) = al; //mov
	edx = to32i(esp+0xA0); //mov
	eax = to32i(esp+0x2C); //mov
	to32i(edx+0x30) = eax; //mov
	edx = to32i(esp+0xA0); //mov
	eax = to32i(esp+0x30); //mov
	to32i(edx+0x34) = eax; //mov
	goto loc_435DF7;
loc_43625F:
	edi = (int32_t)(intptr_t)(esp+0x7C); //lea
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	movsd();
	movsd();
	edi = eax; //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(dword_50128C+edi); //lea
	movsd();
	movsd();
	goto loc_43615C;
}
Fn(void) Game::_sub_436280()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xA4);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x98) = eax; //mov
	to32i(esp+0x94) = edx; //mov
	add(eax, (int32_t)0x44);
	edx = esp; //mov
	ecx = to32i(eax-0x40); //mov
	esp -= 4; _sub_4370F0(); esp += 4; //call
	xor_(edx, edx);
	ebx = to32i(esp+0x94); //mov
	to32i(esp+0x9C) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43653C;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	shl(eax, (int32_t)8);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	to32i(esp+0xA0) = eax; //mov
loc_4362DD:
	eax = to32i(esp+0xA0); //mov
	fld(to64f(dbl_4CB7E4));
	fild(to32i(dword_501280+eax));
	fmul_st(0, 1);
	fild(to32i(dword_501284+eax));
	fmul_st(0, 2);
	fild(to32i(dword_501288+eax));
	fmulp_st(3, 0);
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = 1; //mov
	fxch_st(1);
	fstp(to32f(esp+0x50));
	fstp(to32f(esp+0x54));
	fstp(to32f(esp+0x58));
	esp -= 4; _sub_49C46C(); esp += 4; //call
	fld(to64f(dbl_4CB7EC));
	fld(to32f(esp+0x44));
	fmul_st(0, 1);
	fld(to32f(esp+0x48));
	fmul_st(0, 2);
	fld(to32f(esp+0x4C));
	edx = to32i(esp+0x98); //mov
	fmulp_st(3, 0);
	ecx = to32i(edx+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x5C));
	eax = to32i(esp+0x5C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ecx);
	fistp(to32i(esp+0x60));
	to32i(esp+0x68) = eax; //mov
	eax = to32i(esp+0x60); //mov
	ebx = to32i(edx+0x3C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ebx);
	fistp(to32i(esp+0x64));
	to32i(esp+0x6C) = eax; //mov
	eax = to32i(esp+0x64); //mov
	esi = to32i(edx+0x40); //mov
	add(eax, esi);
	to32i(esp+0x70) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_436544;
	cmp(eax, to32i(dword_50A8D0));
	if (jg())
		goto loc_436544;
	test(eax, eax);
	if (jnz())
		goto loc_4363A7;
	to32i(esp+0x70) = 1; //mov
loc_4363A7:
	eax = to32i(esp+0x70); //mov
	edx = (int32_t)(intptr_t)(esp+0x90); //lea
	to32i(esp+0x88) = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x38); //lea
	fild(to32i(esp+0x88));
	eax = (int32_t)(intptr_t)(esp+0x8C); //lea
	fstp(to32f(esp+0x8C));
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
	ecx = (int32_t)(intptr_t)(esp+0x90); //lea
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x68); //lea
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
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
		goto loc_4364CC;
	cmp(eax, ecx);
	if (jge())
		goto loc_4364CC;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4364A0;
	cmp(eax, ecx);
	if (jl())
		goto loc_4364A0;
	cmp(eax, edx);
	if (jle())
		goto loc_4364A4;
	or_(ebx, (int32_t)4);
	goto loc_4364A4;
loc_4364A0:
	or_(ebx, (int32_t)8);
loc_4364A4:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4364C7;
	cmp(eax, ecx);
	if (jl())
		goto loc_4364C7;
	cmp(eax, edx);
	if (jle())
		goto loc_4364D1;
	or_(ebx, (int32_t)2);
	goto loc_4364D1;
loc_4364C7:
	or_(ebx, (int32_t)1);
	goto loc_4364D1;
loc_4364CC:
	ebx = 0x10; //mov
loc_4364D1:
	to8i(edi) = bl; //mov
	fld(to32f(esp+0x24));
	fld(to32f(esp+0x28));
	ah = to8i(esp+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	fistp(to32i(esp+0x7C));
	fistp(to32i(esp+0x80));
	test(ah, ah);
	if (jz())
		goto loc_436555;
	eax = to32i(esp+0xA0); //mov
	xor_(bl, bl);
	byte_501295[eax] = bl; //mov
loc_43650D:
	esi = to32i(esp+0xA0); //mov
	edi = to32i(esp+0x9C); //mov
	edx = to32i(esp+0x94); //mov
	add(esi, (int32_t)0x18);
	inc(edi);
	to32i(esp+0xA0) = esi; //mov
	to32i(esp+0x9C) = edi; //mov
	cmp(edi, edx);
	if (jl())
		goto loc_4362DD;
loc_43653C:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_436544:
	eax = to32i(esp+0xA0); //mov
	xor_(bh, bh);
	byte_501295[eax] = bh; //mov
	goto loc_43650D;
loc_436555:
	eax = to32i(esp+0xA0); //mov
	cmp(byte_501295[eax], (int8_t)0);
	if (jz())
		goto loc_4366FF;
	edx = to32i(esp+0xA0); //mov
	eax = to32i(esp+0x7C); //mov
	add(eax, to32i(dword_50128C+edx));
	sar(eax, (int32_t)1);
	edi = to32i(dword_501290+edx); //mov
	to32i(esp+0x74) = eax; //mov
	eax = to32i(esp+0x80); //mov
	add(eax, edi);
	sar(eax, (int32_t)1);
	to32i(esp+0x78) = eax; //mov
loc_436595:
	edx = to32i(esp+0xA0); //mov
	eax = to32i(esp+0x7C); //mov
	add(eax, to32i(dword_50128C+edx));
	sar(eax, (int32_t)1);
	ebx = to32i(dword_501290+edx); //mov
	to32i(dword_50128C+edx) = eax; //mov
	eax = to32i(esp+0x80); //mov
	add(eax, ebx);
	sar(eax, (int32_t)1);
	to32i(dword_501290+edx) = eax; //mov
	eax = edx; //mov
	dh = 1; //mov
	esi = to32i(dword_50A8A8); //mov
	byte_501295[eax] = dh; //mov
	edx = to32i(esp+0x70); //mov
	imul32(edx, esi);
	edi = to32i(dword_50A8D0); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edx = esi; //mov
	sub(edx, eax);
	eax = edx; //mov
	cmp(edx, (int32_t)1);
	if (jge())
		goto loc_43671C;
	ebx = 1; //mov
loc_4365FD:
	eax = to32i(esp+0x9C); //mov
	edx = eax; //mov
	ecx = 0x50; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	eax = (int32_t)(intptr_t)(esp+0x84); //lea
	ecx = edx; //mov
	edx = 0x38; //mov
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43653C;
	eax = to32i(esp+0x84); //mov
	to32i(eax+4) = 6; //mov
	eax = to32i(esp+0x84); //mov
	to32i(eax+0x28) = (int32_t)(intptr_t)dword_50A888; //mov
	edi = to32i(esp+0x84); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x84); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x84); //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x84); //mov
	add(to32i(eax+0x18), ebx);
	edi = to32i(esp+0x84); //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	al = to8i(dword_50A8B0); //mov
	edx = to32i(esp+0x84); //mov
	sub(al, cl);
	to8i(edx+0x2C) = al; //mov
	eax = to32i(esp+0x84); //mov
	edx = to32i(esp+0x84); //mov
	al = to8i(eax+0x2C); //mov
	to8i(edx+0x2D) = al; //mov
	eax = to32i(esp+0x84); //mov
	edx = to32i(esp+0x84); //mov
	al = to8i(eax+0x2D); //mov
	to8i(edx+0x2E) = al; //mov
	eax = to32i(esp+0x84); //mov
	edx = to32i(esp+0x84); //mov
	al = to8i(eax+0x2E); //mov
	to8i(edx+0x2F) = al; //mov
	edx = to32i(esp+0x84); //mov
	eax = to32i(esp+0x2C); //mov
	to32i(edx+0x30) = eax; //mov
	edx = to32i(esp+0x84); //mov
	eax = to32i(esp+0x30); //mov
	to32i(edx+0x34) = eax; //mov
	goto loc_43650D;
loc_4366FF:
	edi = (int32_t)(intptr_t)(esp+0x74); //lea
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	movsd();
	movsd();
	edi = eax; //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	edi = (int32_t)(intptr_t)(dword_50128C+edi); //lea
	movsd();
	movsd();
	goto loc_436595;
loc_43671C:
	ebx = edx; //mov
	goto loc_4365FD;
}
Fn(void) Game::_sub_436730()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xA4);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x94) = eax; //mov
	to32i(esp+0x84) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(esp+0x88) = eax; //mov
	eax = to32i(esp+0x94); //mov
	edx = esp; //mov
	add(eax, (int32_t)0x44);
	esp -= 4; _sub_4370F0(); esp += 4; //call
	xor_(edx, edx);
	ecx = to32i(esp+0x84); //mov
	to32i(esp+0x90) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_4367D9;
	edx = to32i(esp+0x88); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)8);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	to32i(esp+0x9C) = eax; //mov
loc_43679E:
	eax = to32i(esp+0x9C); //mov
	cmp(byte_501294[eax], (int8_t)0);
	if (jz())
		goto loc_4367E1;
loc_4367AE:
	ebx = to32i(esp+0x9C); //mov
	esi = to32i(esp+0x90); //mov
	edi = to32i(esp+0x84); //mov
	add(ebx, (int32_t)0x18);
	inc(esi);
	to32i(esp+0x9C) = ebx; //mov
	to32i(esp+0x90) = esi; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_43679E;
loc_4367D9:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4367E1:
	fld(to64f(dbl_4CB7D4));
	fild(to32i(dword_501280+eax));
	fmul_st(0, 1);
	fild(to32i(dword_501284+eax));
	fmul_st(0, 2);
	fild(to32i(dword_501288+eax));
	fmulp_st(3, 0);
	ecx = (int32_t)(intptr_t)(esp+0x5C); //lea
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x68); //lea
	eax = 1; //mov
	fxch_st(1);
	fstp(to32f(esp+0x68));
	fstp(to32f(esp+0x6C));
	fstp(to32f(esp+0x70));
	esp -= 4; _sub_49C46C(); esp += 4; //call
	fld(to64f(dbl_4CB7DC));
	fld(to32f(esp+0x5C));
	fmul_st(0, 1);
	fld(to32f(esp+0x60));
	fmul_st(0, 2);
	fld(to32f(esp+0x64));
	edx = to32i(esp+0x94); //mov
	fmulp_st(3, 0);
	ecx = to32i(edx+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x44));
	eax = to32i(esp+0x44); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ecx);
	fistp(to32i(esp+0x48));
	to32i(esp+0x50) = eax; //mov
	eax = to32i(esp+0x48); //mov
	ebx = to32i(edx+0x3C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ebx);
	fistp(to32i(esp+0x4C));
	to32i(esp+0x54) = eax; //mov
	eax = to32i(esp+0x4C); //mov
	esi = to32i(edx+0x40); //mov
	add(eax, esi);
	to32i(esp+0x58) = eax; //mov
	cmp(eax, (int32_t)0xFFFD0000);
	if (jle())
		goto loc_436893;
	test(eax, eax);
	if (jl())
		goto loc_436B40;
loc_436893:
	edx = to32i(esp+0x58); //mov
	test(edx, edx);
	if (jle())
		goto loc_4367AE;
	cmp(edx, to32i(dword_50A8D0));
	if (jg())
		goto loc_4367AE;
	cmp(edx, (int32_t)0x30000);
	if (jl())
		goto loc_436B5A;
loc_4368B7:
	edx = to32i(esp+0x58); //mov
	ecx = to32i(dword_50A8A8); //mov
	imul32(edx, ecx);
	ebx = to32i(dword_50A8D0); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = ecx; //mov
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_4368E2;
	eax = 1; //mov
loc_4368E2:
	esi = to32i(esp+0x58); //mov
	to32i(esp+0x8C) = eax; //mov
	test(esi, esi);
	if (jnz())
		goto loc_4368F9;
	to32i(esp+0x58) = 1; //mov
loc_4368F9:
	eax = to32i(esp+0x58); //mov
	edx = (int32_t)(intptr_t)(esp+0x80); //lea
	to32i(esp+0xA0) = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x38); //lea
	fild(to32i(esp+0xA0));
	eax = (int32_t)(intptr_t)(esp+0x7C); //lea
	fstp(to32f(esp+0x7C));
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
	ecx = (int32_t)(intptr_t)(esp+0x80); //lea
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
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
		goto loc_436A18;
	cmp(eax, ecx);
	if (jge())
		goto loc_436A18;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4369EC;
	cmp(eax, ecx);
	if (jl())
		goto loc_4369EC;
	cmp(eax, edx);
	if (jle())
		goto loc_4369F0;
	or_(ebx, (int32_t)4);
	goto loc_4369F0;
loc_4369EC:
	or_(ebx, (int32_t)8);
loc_4369F0:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_436A13;
	cmp(eax, ecx);
	if (jl())
		goto loc_436A13;
	cmp(eax, edx);
	if (jle())
		goto loc_436A1D;
	or_(ebx, (int32_t)2);
	goto loc_436A1D;
loc_436A13:
	or_(ebx, (int32_t)1);
	goto loc_436A1D;
loc_436A18:
	ebx = 0x10; //mov
loc_436A1D:
	to8i(edi) = bl; //mov
	fld(to32f(esp+0x24));
	fld(to32f(esp+0x28));
	dh = to8i(esp+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	fistp(to32i(esp+0x74));
	fistp(to32i(esp+0x78));
	test(dh, dh);
	if (jnz())
		goto loc_4367AE;
	edx = 0x38; //mov
	eax = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4367D9;
	eax = to32i(esp+0x98); //mov
	to32i(eax+4) = 6; //mov
	eax = to32i(esp+0x98); //mov
	to32i(eax+0x28) = (int32_t)(intptr_t)dword_50A888; //mov
	edi = to32i(esp+0x98); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x98); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x98); //mov
	edx = to32i(esp+0x8C); //mov
	add(to32i(eax+8), edx);
	edi = to32i(esp+0x98); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x98); //mov
	add(to32i(eax+0x1C), edx);
	edi = to32i(esp+0x98); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x98); //mov
	add(to32i(eax+0x24), edx);
	eax = to32i(esp+0x98); //mov
	add(to32i(eax+0x20), edx);
	eax = to32i(esp+0x98); //mov
	dl = to8i(dword_50A8B0); //mov
	to8i(eax+0x2C) = dl; //mov
	al = dl; //mov
	edx = to32i(esp+0x98); //mov
	to8i(edx+0x2D) = al; //mov
	edx = to32i(esp+0x98); //mov
	to8i(edx+0x2E) = al; //mov
	edx = to32i(esp+0x98); //mov
	to8i(edx+0x2F) = al; //mov
	edx = to32i(esp+0x98); //mov
	eax = to32i(esp+0x2C); //mov
	to32i(edx+0x30) = eax; //mov
	edx = to32i(esp+0x98); //mov
	eax = to32i(esp+0x30); //mov
	to32i(edx+0x34) = eax; //mov
	goto loc_4367AE;
loc_436B40:
	eax = to32i(esp+0x88); //mov
	ebx = edx; //mov
	edx = to32i(esp+0x90); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	goto loc_4367AE;
loc_436B5A:
	push32(edx);
	edi = to32i(esp+0x58); //mov
	push32(edi);
	eax = to32i(esp+0x58); //mov
	push32(eax);
	eax = to32i(esp+0x94); //mov
	esp -= 4; _sub_4373B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4368B7;
	ebx = to32i(esp+0x94); //mov
	edx = to32i(esp+0x90); //mov
	eax = to32i(esp+0x88); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	goto loc_4367AE;
}
Fn(void) Game::_sub_436BA0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xA4);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x90) = eax; //mov
	to32i(esp+0x88) = edx; //mov
	eax = to32i(eax+4); //mov
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(esp+0x90); //mov
	edx = esp; //mov
	add(eax, (int32_t)0x44);
	esp -= 4; _sub_4370F0(); esp += 4; //call
	cmp(to32i(dword_4D54DC), (int32_t)0);
	if (jnz())
		goto loc_436C68;
	eax = 1; //mov
loc_436BEB:
	ebx = to32i(esp+0x88); //mov
	xor_(ecx, ecx);
	to32i(dword_4D54DC) = eax; //mov
	to32i(esp+0x98) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_436C60;
	edx = to32i(esp+0x8C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)8);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	to32i(esp+0x94) = eax; //mov
loc_436C25:
	eax = to32i(esp+0x94); //mov
	cmp(byte_501294[eax], (int8_t)0);
	if (jz())
		goto loc_436C6F;
loc_436C35:
	esi = to32i(esp+0x94); //mov
	edi = to32i(esp+0x98); //mov
	edx = to32i(esp+0x88); //mov
	add(esi, (int32_t)0x18);
	inc(edi);
	to32i(esp+0x94) = esi; //mov
	to32i(esp+0x98) = edi; //mov
	cmp(edi, edx);
	if (jl())
		goto loc_436C25;
loc_436C60:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_436C68:
	xor_(eax, eax);
	goto loc_436BEB;
loc_436C6F:
	fld(to64f(dbl_4CB7C4));
	fild(to32i(dword_501280+eax));
	fmul_st(0, 1);
	fild(to32i(dword_501284+eax));
	fmul_st(0, 2);
	fild(to32i(dword_501288+eax));
	fmulp_st(3, 0);
	ecx = (int32_t)(intptr_t)(esp+0x50); //lea
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0x44); //lea
	eax = 1; //mov
	fxch_st(1);
	fstp(to32f(esp+0x44));
	fstp(to32f(esp+0x48));
	fstp(to32f(esp+0x4C));
	esp -= 4; _sub_49C46C(); esp += 4; //call
	fld(to64f(dbl_4CB7CC));
	fld(to32f(esp+0x50));
	fmul_st(0, 1);
	fld(to32f(esp+0x54));
	fmul_st(0, 2);
	fld(to32f(esp+0x58));
	edx = to32i(esp+0x90); //mov
	fmulp_st(3, 0);
	ecx = to32i(edx+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x68));
	eax = to32i(esp+0x68); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ecx);
	fistp(to32i(esp+0x6C));
	to32i(esp+0x5C) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	ebx = to32i(edx+0x3C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	add(eax, ebx);
	fistp(to32i(esp+0x70));
	to32i(esp+0x60) = eax; //mov
	eax = to32i(esp+0x70); //mov
	esi = to32i(edx+0x40); //mov
	add(eax, esi);
	to32i(esp+0x64) = eax; //mov
	cmp(eax, (int32_t)0xFFFD0000);
	if (jle())
		goto loc_436D21;
	test(eax, eax);
	if (jl())
		goto loc_437001;
loc_436D21:
	edx = to32i(esp+0x64); //mov
	test(edx, edx);
	if (jle())
		goto loc_436C35;
	cmp(edx, to32i(dword_50A8D0));
	if (jg())
		goto loc_436C35;
	cmp(edx, (int32_t)0x11999);
	if (jge())
		goto loc_43701B;
	eax = 0x11999; //mov
loc_436D4A:
	to32i(esp+0x64) = eax; //mov
	cmp(eax, (int32_t)0x30000);
	if (jl())
		goto loc_437022;
loc_436D59:
	eax = to32i(esp+0x64); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ecx = eax; //mov
	eax = to32i(dword_50A8A8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_437071;
	edx = 1; //mov
loc_436D86:
	ecx = to32i(dword_50A8A8); //mov
	cmp(edx, ecx);
	if (jge())
		goto loc_437078;
	cmp(eax, (int32_t)1);
	if (jge())
		goto loc_436D9E;
	eax = 1; //mov
loc_436D9E:
	ebx = to32i(esp+0x64); //mov
	to32i(esp+0x9C) = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_436DB5;
	to32i(esp+0x64) = 1; //mov
loc_436DB5:
	eax = to32i(esp+0x64); //mov
	edx = (int32_t)(intptr_t)(esp+0x84); //lea
	to32i(esp+0xA0) = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x38); //lea
	fild(to32i(esp+0xA0));
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	fstp(to32f(esp+0x80));
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
	ecx = (int32_t)(intptr_t)(esp+0x84); //lea
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
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
		goto loc_436EDA;
	cmp(eax, ecx);
	if (jge())
		goto loc_436EDA;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_436EAE;
	cmp(eax, ecx);
	if (jl())
		goto loc_436EAE;
	cmp(eax, edx);
	if (jle())
		goto loc_436EB2;
	or_(ebx, (int32_t)4);
	goto loc_436EB2;
loc_436EAE:
	or_(ebx, (int32_t)8);
loc_436EB2:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_436ED5;
	cmp(eax, ecx);
	if (jl())
		goto loc_436ED5;
	cmp(eax, edx);
	if (jle())
		goto loc_436EDF;
	or_(ebx, (int32_t)2);
	goto loc_436EDF;
loc_436ED5:
	or_(ebx, (int32_t)1);
	goto loc_436EDF;
loc_436EDA:
	ebx = 0x10; //mov
loc_436EDF:
	to8i(edi) = bl; //mov
	fld(to32f(esp+0x24));
	fld(to32f(esp+0x28));
	dh = to8i(esp+0x38); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	fistp(to32i(esp+0x74));
	fistp(to32i(esp+0x78));
	test(dh, dh);
	if (jnz())
		goto loc_436C35;
	edx = 0x38; //mov
	eax = (int32_t)(intptr_t)(esp+0x7C); //lea
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_436C60;
	eax = to32i(esp+0x7C); //mov
	to32i(eax+4) = 4; //mov
	eax = to32i(esp+0x7C); //mov
	to32i(eax+0x28) = (int32_t)(intptr_t)dword_50A888; //mov
	eax = to32i(esp+0x98); //mov
	edi = to32i(dword_4D54DC); //mov
	and_(eax, (int32_t)1);
	xor_(eax, edi);
	if (jnz())
		goto loc_43707F;
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	edx = to32i(esp+0x9C); //mov
	add(to32i(eax+8), edx);
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0xC), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0x10), edx);
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0x14), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0x18), edx);
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x1C), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x20), edx);
loc_436FBD:
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x24), edx);
	eax = to32i(esp+0x7C); //mov
	dl = to8i(dword_50A8B0); //mov
	to8i(eax+0x2C) = dl; //mov
	eax = to32i(esp+0x7C); //mov
	to8i(eax+0x2D) = dl; //mov
	eax = to32i(esp+0x7C); //mov
	to8i(eax+0x2E) = dl; //mov
	eax = to32i(esp+0x7C); //mov
	to8i(eax+0x2F) = dl; //mov
	edx = to32i(esp+0x7C); //mov
	eax = to32i(esp+0x2C); //mov
	to32i(edx+0x30) = eax; //mov
	edx = to32i(esp+0x7C); //mov
	eax = to32i(esp+0x30); //mov
	to32i(edx+0x34) = eax; //mov
	goto loc_436C35;
loc_437001:
	eax = to32i(esp+0x8C); //mov
	ebx = edx; //mov
	edx = to32i(esp+0x98); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	goto loc_436C35;
loc_43701B:
	eax = edx; //mov
	goto loc_436D4A;
loc_437022:
	push32(eax);
	edi = to32i(esp+0x64); //mov
	push32(edi);
	eax = to32i(esp+0x64); //mov
	push32(eax);
	eax = to32i(esp+0x98); //mov
	esp -= 4; _sub_4373B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_436D59;
	ebx = to32i(esp+0x90); //mov
	edx = to32i(esp+0x98); //mov
	eax = to32i(esp+0x8C); //mov
	esp -= 4; _sub_437120(); esp += 4; //call
	edx = 5; //mov
	eax = to32i(esp+0x8C); //mov
	esp -= 4; _sub_444B40(); esp += 4; //call
	goto loc_436C35;
loc_437071:
	edx = eax; //mov
	goto loc_436D86;
loc_437078:
	eax = ecx; //mov
	goto loc_436D9E;
loc_43707F:
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	edx = to32i(esp+0x9C); //mov
	sub(to32i(eax+8), edx);
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0xC), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x10), edx);
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0x14), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x18), edx);
	eax = to32i(esp+0x7C); //mov
	add(to32i(eax+0x1C), edx);
	edi = to32i(esp+0x7C); //mov
	esi = (int32_t)(intptr_t)(esp+0x74); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x7C); //mov
	sub(to32i(eax+0x20), edx);
	goto loc_436FBD;
}
Fn(void) Game::_sub_4370F0()
{
	push32(ecx);
	ecx = eax; //mov
	ecx = (int32_t)(intptr_t)(eax+0x24); //lea
	fld(to64f(dbl_4CB7BC));
loc_4370FC:
	fild(to32i(eax));
	fmul_st(0, 1);
	add(edx, (int32_t)4);
	add(eax, (int32_t)4);
	fstp(to32f(edx-4));
	cmp(eax, ecx);
	if (jnz())
		goto loc_4370FC;
	fstp_st(0);
	pop32(ecx);
}
Fn(void) Game::_sub_437120()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	shl(eax, (int32_t)8);
	ecx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, ecx);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(ecx, eax);
	eax = to32i(dword_50A8D8); //mov
	to32i(dword_501284+ecx) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	esi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(esi, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	esi = to32i(dword_50A8D0); //mov
	sub(edx, esi);
	to32i(dword_501280+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	esi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(esi, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edi = to32i(dword_50A8D0); //mov
	sub(edx, edi);
	to32i(dword_501288+ecx) = edx; //mov
	ebp = to32i(dword_501280+ecx); //mov
	eax = to32i(ebx+8); //mov
	add(eax, ebp);
	to32i(dword_501280+ecx) = eax; //mov
	edx = to32i(dword_501284+ecx); //mov
	eax = to32i(ebx+0xC); //mov
	add(eax, edx);
	to32i(dword_501284+ecx) = eax; //mov
	eax = to32i(ebx+0x10); //mov
	ebx = to32i(dword_501288+ecx); //mov
	add(eax, ebx);
	to32i(dword_501288+ecx) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4371E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	ebx = to32i(dword_50A8F0); //mov
	xor_(ecx, ecx);
	edx = to32i(eax+4); //mov
	to32i(esp+0x30) = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43724A;
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(ecx, edx);
	shl(ecx, (int32_t)3);
	add(ecx, edx);
	shl(ecx, (int32_t)4);
loc_43720D:
	edi = (int32_t)(intptr_t)(esp+0x20); //lea
	eax = to32i(dword_500F70+ecx); //mov
	esi = (int32_t)(intptr_t)(dword_500F60+ecx); //lea
	ebp = (uint8_t)byte_500F6C[ecx]; //movzx
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(dword_500F68+ecx); //mov
	movsd();
	movsd();
	test(eax, eax);
	if (jnz())
		goto loc_437254;
loc_437234:
	esi = to32i(esp+0x30); //mov
	edi = to32i(dword_50A8F0); //mov
	inc(esi);
	add(ecx, (int32_t)0x14);
	to32i(esp+0x30) = esi; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_43720D;
loc_43724A:
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_437254:
	edx = to32i(dword_50A8FC); //mov
	imul32(edx, eax);
	esi = to32i(dword_50A8F4); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	edi = to32i(dword_50A8A4); //mov
	to32i(esp+0x34) = eax; //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_43728B;
	edx = to32i(dword_500F68+ecx); //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	ebp = eax; //mov
loc_43728B:
	eax = to32i(esp+0x2C); //mov
	esp -= 4; _sub_49C1C0(); esp += 4; //call
	imul32(eax, ebp);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ebx = eax; //mov
	eax = to32i(esp+0x2C); //mov
	esp -= 4; _sub_49C150(); esp += 4; //call
	imul32(eax, ebp);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x20); //mov
	sub(edx, eax);
	to32i(esp) = edx; //mov
	edx = to32i(esp+0x24); //mov
	add(edx, ebx);
	to32i(esp+4) = edx; //mov
	edx = to32i(esp+0x20); //mov
	add(edx, ebx);
	to32i(esp+8) = edx; //mov
	edx = to32i(esp+0x24); //mov
	add(edx, eax);
	to32i(esp+0xC) = edx; //mov
	edx = to32i(esp+0x20); //mov
	add(edx, eax);
	to32i(esp+0x10) = edx; //mov
	edx = to32i(esp+0x24); //mov
	sub(edx, ebx);
	to32i(esp+0x14) = edx; //mov
	edx = to32i(esp+0x20); //mov
	sub(edx, ebx);
	to32i(esp+0x18) = edx; //mov
	edx = to32i(esp+0x24); //mov
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	to32i(esp+0x1C) = edx; //mov
	edx = 0x38; //mov
	esp -= 4; _sub_46FD30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43724A;
	eax = to32i(esp+0x28); //mov
	to32i(eax+4) = 6; //mov
	eax = to32i(esp+0x28); //mov
	to32i(eax+0x28) = (int32_t)(intptr_t)dword_50A900; //mov
	edi = to32i(esp+0x28); //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)(edi+8); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x28); //mov
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(edi+0x10); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x28); //mov
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)(edi+0x18); //lea
	movsd();
	movsd();
	edi = to32i(esp+0x28); //mov
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = (int32_t)(intptr_t)(edi+0x20); //lea
	movsd();
	movsd();
	eax = to32i(esp+0x28); //mov
	dl = to8i(esp+0x34); //mov
	to8i(eax+0x2C) = dl; //mov
	eax = to32i(esp+0x28); //mov
	to8i(eax+0x2D) = dl; //mov
	eax = to32i(esp+0x28); //mov
	to8i(eax+0x2E) = dl; //mov
	eax = to32i(esp+0x28); //mov
	to8i(eax+0x2F) = dl; //mov
	ebx = to32i(esp+0x28); //mov
	edx = to32i(esp+0x28); //mov
	eax = 0x11999; //mov
	add(ebx, (int32_t)0x34);
	add(edx, (int32_t)0x30);
	esp -= 4; _sub_433AE0(); esp += 4; //call
	goto loc_437234;
}
Fn(void) Game::_sub_4373B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	to32i(esp+0x30) = eax; //mov
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_437658;
	ecx = to32i(dword_50A8F0); //mov
	xor_(ebp, ebp);
	test(ecx, ecx);
	if (jle())
		goto loc_43767A;
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	ebx = to32i(dword_50A8F0); //mov
	shl(eax, (int32_t)4);
loc_4373EF:
	cmp(to32i(dword_500F68+eax), (int32_t)0);
	if (jnz())
		goto loc_43766E;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jnz())
		goto loc_43740B;
	to32i(esp+0x58) = 1; //mov
loc_43740B:
	fild(to32i(esp+0x58));
	edx = (int32_t)(intptr_t)(esp+0x2C); //lea
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	fstp(to32f(esp+0x28));
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
	ecx = (int32_t)(intptr_t)(esp+0x2C); //lea
	ebx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	esi = esp; //mov
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
		goto loc_437512;
	cmp(eax, ecx);
	if (jge())
		goto loc_437512;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_4374E6;
	cmp(eax, ecx);
	if (jl())
		goto loc_4374E6;
	cmp(eax, edx);
	if (jle())
		goto loc_4374EA;
	or_(ebx, (int32_t)4);
	goto loc_4374EA;
loc_4374E6:
	or_(ebx, (int32_t)8);
loc_4374EA:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_43750D;
	cmp(eax, ecx);
	if (jl())
		goto loc_43750D;
	cmp(eax, edx);
	if (jle())
		goto loc_437517;
	or_(ebx, (int32_t)2);
	goto loc_437517;
loc_43750D:
	or_(ebx, (int32_t)1);
	goto loc_437517;
loc_437512:
	ebx = 0x10; //mov
loc_437517:
	to8i(edi) = bl; //mov
	fld(to32f(esp));
	fld(to32f(esp+4));
	ah = to8i(esp+0x14); //mov
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fxch_st(1);
	fistp(to32i(esp+0x20));
	fistp(to32i(esp+0x24));
	test(ah, ah);
	if (jnz())
		goto loc_437658;
	ecx = to32i(dword_50A8F4); //mov
	sar(ecx, (int32_t)2);
	cmp(ecx, (int32_t)1);
	if (jle())
		goto loc_43765C;
loc_437556:
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(ecx);
	ecx = to32i(dword_50A8F4); //mov
	sub(ecx, edx);
	edx = to32i(esp+0x30); //mov
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(esi, edx);
	shl(esi, (int32_t)3);
	add(esi, edx);
	edx = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	shl(esi, (int32_t)4);
	add(eax, ebp);
	edi = (int32_t)(intptr_t)(dword_500F60+esi+eax*4); //lea
	to32i(dword_500F68+esi+eax*4) = ecx; //mov
	esi = (int32_t)(intptr_t)(esp+0x20); //lea
	xor_(edx, ebp);
	movsd();
	movsd();
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(to32i(dword_50A8F8));
	eax = to32i(dword_50A8F8); //mov
	ecx = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(ecx, eax);
	if (jbe())
		goto loc_4375CD;
	esp -= 4; _sub_488074(); esp += 4; //call
	ebx = to32i(dword_50A8F8); //mov
	xor_(edx, edx);
	div32(ebx);
	eax = edx; //mov
loc_4375CD:
	esi = to32i(dword_50A8F8); //mov
	cmp(eax, esi);
	if (jnb())
		goto loc_43766A;
	esp -= 4; _sub_488074(); esp += 4; //call
	edi = to32i(dword_50A8F8); //mov
	xor_(edx, edx);
	div32(edi);
	ecx = edx; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(ecx, eax);
	if (jbe())
		goto loc_437666;
	esp -= 4; _sub_488074(); esp += 4; //call
	ecx = to32i(dword_50A8F8); //mov
	xor_(edx, edx);
	div32(ecx);
loc_43760A:
	eax = edx; //mov
loc_43760C:
	edx = to32i(esp+0x30); //mov
	bl = al; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(edx, eax);
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, ebp);
	shl(edx, (int32_t)4);
	shl(eax, (int32_t)2);
	add(edx, eax);
	byte_500F6C[edx] = bl; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_500F70+edx) = eax; //mov
	eax = 1; //mov
loc_43764C:
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 0xC; return;
loc_437658:
	xor_(eax, eax);
	goto loc_43764C;
loc_43765C:
	ecx = 1; //mov
	goto loc_437556;
loc_437666:
	edx = eax; //mov
	goto loc_43760A;
loc_43766A:
	eax = esi; //mov
	goto loc_43760C;
loc_43766E:
	inc(ebp);
	add(eax, (int32_t)0x14);
	cmp(ebp, ebx);
	if (jl())
		goto loc_4373EF;
loc_43767A:
	xor_(eax, eax);
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	esp += 0xC; return;
}
Fn(void) Game::_sub_437690()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	ebp = edx; //mov
	edx = to32i(eax+4); //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	ecx = to32i(dword_540F48); //mov
	ebx = to32i(dword_50A880+edx*4); //mov
	esi = (int32_t)(intptr_t)(eax+8); //lea
	sub(ecx, ebx);
	movsd();
	movsd();
	movsd();
	cmp(ecx, (int32_t)1);
	if (jg())
		goto loc_4376C4;
loc_4376BB:
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4376C4:
	esp -= 4; _sub_449830(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_437869;
	cmp(to32i(dword_50A8A4), (int32_t)3);
	if (jge())
		goto loc_437869;
	eax = 1; //mov
loc_4376E3:
	edi = to32i(dword_50A8F0); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(dword_540F48); //mov
	xor_(ebx, ebx);
	to32i(dword_50A880+edx*4) = eax; //mov
	test(edi, edi);
	if (jle())
		goto loc_437731;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	eax = to32i(dword_50A8F0); //mov
	shl(ecx, (int32_t)4);
loc_437716:
	esi = to32i(dword_500F68+ecx); //mov
	test(esi, esi);
	if (jz())
		goto loc_437729;
	edi = (int32_t)(intptr_t)(esi-1); //lea
	to32i(dword_500F68+ecx) = edi; //mov
loc_437729:
	inc(ebx);
	add(ecx, (int32_t)0x14);
	cmp(ebx, eax);
	if (jl())
		goto loc_437716;
loc_437731:
	ecx = to32i(dword_50A8AC); //mov
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jle())
		goto loc_4376BB;
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	add(ecx, edx);
	shl(ecx, (int32_t)8);
	eax = ecx; //mov
	shl(ecx, (int32_t)4);
	xor_(esi, esi);
	sub(ecx, eax);
loc_437756:
	edi = to32i(dword_50A8E4); //mov
	add(to32i(dword_501280+ecx), edi);
	eax = to32i(dword_50A8E8); //mov
	add(to32i(dword_501284+ecx), eax);
	edi = to32i(dword_50A8EC); //mov
	edx = to32i(dword_501288+ecx); //mov
	add(edx, edi);
	eax = to32i(dword_50A8A4); //mov
	to32i(dword_501288+ecx) = edx; //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_437870;
	cmp(ebx, ebp);
	if (jge())
		goto loc_437870;
	cmp(byte_501294[ecx], (int8_t)0);
	if (jnz())
		goto loc_437870;
	edx = to32i(dword_540F48); //mov
	shl(edx, (int32_t)8);
	add(edx, esi);
	eax = edx; //mov
	esp -= 4; _sub_49C150(); esp += 4; //call
	sar(eax, (int32_t)4);
	edi = to32i(dword_501280+ecx); //mov
	add(edi, eax);
	eax = edx; //mov
	to32i(dword_501280+ecx) = edi; //mov
	esp -= 4; _sub_49C1C0(); esp += 4; //call
	sar(eax, (int32_t)4);
	add(to32i(dword_501288+ecx), eax);
loc_4377D7:
	edi = to32i(esp+0xC); //mov
	eax = to32i(dword_501280+ecx); //mov
	sub(eax, edi);
	edx = to32i(esp+0x10); //mov
	to32i(esp) = eax; //mov
	eax = to32i(dword_501284+ecx); //mov
	sub(eax, edx);
	edi = to32i(esp+0x14); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(dword_501288+ecx); //mov
	sub(eax, edi);
	edx = to32i(dword_50A8D4); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+4); //mov
	cmp(eax, edx);
	if (jl())
		goto loc_4378BC;
	cmp(eax, to32i(dword_50A8D8));
	if (jg())
		goto loc_4378BC;
	eax = to32i(esp); //mov
	test(eax, eax);
	if (jle())
		goto loc_4378AF;
loc_43782F:
	cmp(eax, to32i(dword_50A8D0));
	if (jg())
		goto loc_4378BC;
	edi = to32i(esp+8); //mov
	test(edi, edi);
	if (jle())
		goto loc_4378B6;
	eax = edi; //mov
loc_437845:
	cmp(eax, to32i(dword_50A8D0));
	if (jg())
		goto loc_4378BC;
loc_43784D:
	eax = to32i(dword_50A8AC); //mov
	add(esi, (int32_t)0x100);
	inc(ebx);
	add(ecx, (int32_t)0x18);
	cmp(ebx, eax);
	if (jge())
		goto loc_4376BB;
	goto loc_437756;
loc_437869:
	xor_(eax, eax);
	goto loc_4376E3;
loc_437870:
	cmp(to32i(dword_50A8A4), (int32_t)3);
	if (jnz())
		goto loc_4377D7;
	cmp(ebx, ebp);
	if (jge())
		goto loc_4377D7;
	cmp(byte_501294[ecx], (int8_t)0);
	if (jnz())
		goto loc_4377D7;
	eax = to32i(dword_540F48); //mov
	shl(eax, (int32_t)8);
	add(eax, esi);
	esp -= 4; _sub_49C150(); esp += 4; //call
	sar(eax, (int32_t)4);
	add(to32i(dword_501284+ecx), eax);
	goto loc_4377D7;
loc_4378AF:
	neg(eax);
	goto loc_43782F;
loc_4378B6:
	eax = edi; //mov
	neg(eax);
	goto loc_437845;
loc_4378BC:
	al = to8i(esp+0x18); //mov
	edi = to32i(dword_50A8D0); //mov
	byte_501294[ecx] = al; //mov
	cmp(edi, to32i(esp));
	if (jge())
		goto loc_437A34;
	edx = edi; //mov
	to32i(esp) = edi; //mov
	xor_(al, al);
	neg(edx);
	byte_501295[ecx] = al; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	shl(eax, (int32_t)0x10);
	to32i(esp) = edx; //mov
loc_4378EF:
	edx = eax; //mov
	edi = to32i(dword_50A8DC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	eax = to32i(dword_50A8D4); //mov
	add(eax, edx);
	to32i(esp+4) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	edi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(edi, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	eax = to32i(dword_50A8D0); //mov
	sub(edx, eax);
	to32i(esp+8) = edx; //mov
loc_43792B:
	eax = to32i(esp+8); //mov
	edx = to32i(dword_50A8D0); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_437A5B;
	eax = to32i(dword_50A8D0); //mov
	xor_(dl, dl);
	to32i(esp+8) = eax; //mov
	byte_501295[ecx] = dl; //mov
	edx = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	neg(edx);
loc_437957:
	shl(eax, (int32_t)0x10);
	to32i(esp+8) = edx; //mov
	edx = eax; //mov
	edi = to32i(dword_50A8DC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	eax = to32i(dword_50A8D4); //mov
	add(eax, edx);
	to32i(esp+4) = eax; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	edi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(edi, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	eax = to32i(dword_50A8D0); //mov
	sub(edx, eax);
	to32i(esp+8) = edx; //mov
loc_43799A:
	eax = to32i(esp+4); //mov
	cmp(eax, to32i(dword_50A8D8));
	if (jle())
		goto loc_437A7D;
	xor_(al, al);
	byte_501295[ecx] = al; //mov
	eax = to32i(dword_50A8D4); //mov
	to32i(esp+4) = eax; //mov
loc_4379BB:
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	edi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(edi, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	sub(edx, to32i(dword_50A8D0));
	esp -= 4; _sub_488074(); esp += 4; //call
	to32i(esp) = edx; //mov
	edx = eax; //mov
	edi = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(edi, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edi = to32i(dword_50A8D0); //mov
	sub(edx, edi);
	to32i(esp+8) = edx; //mov
loc_437A02:
	eax = to32i(esp+0xC); //mov
	add(eax, to32i(esp));
	edi = to32i(esp+4); //mov
	to32i(dword_501280+ecx) = eax; //mov
	eax = to32i(esp+0x10); //mov
	add(eax, edi);
	edx = to32i(esp+8); //mov
	to32i(dword_501284+ecx) = eax; //mov
	eax = to32i(esp+0x14); //mov
	add(eax, edx);
	to32i(dword_501288+ecx) = eax; //mov
	goto loc_43784D;
loc_437A34:
	eax = edi; //mov
	edx = to32i(esp); //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_43792B;
	xor_(dh, dh);
	byte_501295[ecx] = dh; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	shl(eax, (int32_t)0x10);
	to32i(esp) = edi; //mov
	goto loc_4378EF;
loc_437A5B:
	eax = edx; //mov
	edi = to32i(esp+8); //mov
	neg(eax);
	cmp(eax, edi);
	if (jle())
		goto loc_43799A;
	xor_(ah, ah);
	byte_501295[ecx] = ah; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	goto loc_437957;
loc_437A7D:
	cmp(eax, to32i(dword_50A8D4));
	if (jge())
		goto loc_437A02;
	eax = to32i(dword_50A8D8); //mov
	xor_(dh, dh);
	to32i(esp+4) = eax; //mov
	byte_501295[ecx] = dh; //mov
	goto loc_4379BB;
}
Fn(void) Game::_sub_437AA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esp -= 4; _sub_44B660(); esp += 4; //call
	esi = eax; //mov
	cmp(eax, (int32_t)3);
	if (jg())
		goto loc_437AC9;
	cmp(eax, (int32_t)1);
	if (jl())
		goto loc_437AC9;
	cmp(to32i(dword_5128C8+ecx*4), (int32_t)0);
	if (jz())
		goto loc_437AC9;
	and_(esi, (int32_t)0xFF000000);
loc_437AC9:
	cmp(esi, to32i(dword_50A91C+ecx*4));
	if (jz())
		goto loc_437B08;
	edi = to32i(dword_50A8AC); //mov
	xor_(edx, edx);
	test(edi, edi);
	if (jle())
		goto loc_437B08;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	shl(eax, (int32_t)8);
	ebx = eax; //mov
	shl(eax, (int32_t)4);
	ebp = to32i(dword_50A8AC); //mov
	sub(eax, ebx);
loc_437AF7:
	add(eax, (int32_t)0x18);
	xor_(bl, bl);
	inc(edx);
	byte_50127D[eax] = bl; //mov
	cmp(edx, ebp);
	if (jl())
		goto loc_437AF7;
loc_437B08:
	to32i(dword_50A91C+ecx*4) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_437B20()
{
	push32(ecx);
	push32(esi);
	ecx = edx; //mov
	cmp(to32i(dword_50A8AC), (int32_t)0);
	if (jz())
		goto loc_437B57;
	test(eax, eax);
	if (jz())
		goto loc_437B57;
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(edx, eax);
	shl(edx, (int32_t)2);
	esi = to32i(dword_50A8AC); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	to32i(dword_4D52F4+ecx*4) = eax; //mov
	pop32(esi);
	pop32(ecx);
	return;
loc_437B57:
	push32(ebx);
	xor_(ebx, ebx);
	to32i(dword_4D52F4+ecx*4) = ebx; //mov
	pop32(ebx);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_437B70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(dword_50A8B0+2); //mov
	edx = to32i(dword_50A8BC); //mov
	sar(esi, (int32_t)0x10);
	add(esi, edx);
	edx = to32i(dword_50A8B4); //mov
	ecx = to32i(dword_50A8BC); //mov
	sar(edx, (int32_t)0x10);
	add(edx, ecx);
	ecx = to32i(dword_50A8B4+2); //mov
	sar(ecx, (int32_t)0x10);
	ebx = edx; //mov
	edi = (int32_t)(intptr_t)(esi+ecx); //lea
	sub(ebx, ecx);
	cmp(esi, edx);
	if (jnz())
		goto loc_437BB0;
	test(ecx, ecx);
	if (jz())
		goto loc_437C07;
loc_437BB0:
	cmp(esi, edx);
	if (jle())
		goto loc_437BC8;
	cmp(eax, edx);
	if (jge())
		goto loc_437BBE;
	add(eax, to32i(dword_5118A0));
loc_437BBE:
	ebp = to32i(dword_5118A0); //mov
	add(ebx, ebp);
	add(edx, ebp);
loc_437BC8:
	cmp(eax, esi);
	if (jl())
		goto loc_437C0E;
	cmp(eax, edx);
	if (jg())
		goto loc_437C0E;
	test(ecx, ecx);
	if (jz())
		goto loc_437C07;
	cmp(eax, edi);
	if (jle())
		goto loc_437BDC;
	cmp(eax, ebx);
	if (jl())
		goto loc_437C07;
loc_437BDC:
	cmp(eax, edi);
	if (jl())
		goto loc_437C12;
	cmp(eax, ebx);
	if (jle())
		goto loc_437C07;
	edx = to32i(dword_50A8AC); //mov
	sub(eax, ebx);
loc_437BEC:
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(dword_50A8AC); //mov
	sub(edx, eax);
	eax = edx; //mov
loc_437C00:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_437C07:
	eax = to32i(dword_50A8AC); //mov
	goto loc_437C00;
loc_437C0E:
	xor_(eax, eax);
	goto loc_437C00;
loc_437C12:
	edx = edi; //mov
	sub(edx, eax);
	eax = to32i(dword_50A8AC); //mov
	goto loc_437BEC;
}
Fn(void) Game::_sub_437C20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(dword_51221C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	ebp = to32i(dword_50A8C0); //mov
	edi = to32i(dword_4D540C+eax*8); //mov
	ebx = to32i(dword_4D5410+eax*8); //mov
	esi = to32i(dword_4D5414+eax*8); //mov
	edx = to32i(dword_4D5418+eax*8); //mov
	eax = to32i(dword_540F48); //mov
	sub(eax, ebp);
	test(edi, edi);
	if (jz())
		goto loc_437C96;
	test(ebx, ebx);
	if (jz())
		goto loc_437C96;
	test(esi, esi);
	if (jz())
		goto loc_437C96;
	test(edx, edx);
	if (jz())
		goto loc_437C96;
	cmp(eax, edi);
	if (jl())
		goto loc_437C96;
	cmp(eax, ebx);
	if (jl())
		goto loc_437C9F;
	cmp(eax, esi);
	if (jl())
		goto loc_437CB1;
	cmp(eax, edx);
	if (jge())
		goto loc_437CB5;
	ebx = edx; //mov
	sub(ebx, eax);
	imul32(ebx, ecx);
	sub(edx, esi);
	esi = edx; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	sub(ecx, eax);
loc_437C96:
	eax = ecx; //mov
loc_437C98:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_437C9F:
	edx = ebx; //mov
	sub(edx, eax);
	imul32(edx, ecx);
	sub(ebx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	goto loc_437C98;
loc_437CB1:
	xor_(eax, eax);
	goto loc_437C98;
loc_437CB5:
	eax = to32i(dword_540F48); //mov
	to32i(dword_50A8C0) = eax; //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_437CD0()
{
	test(to8i(dword_540F48), (int8_t)1);
	if (jnz())
		goto loc_437CDA;
	return;
loc_437CDA:
	push32(edx);
	eax = to32i(dword_540F48); //mov
	shl(eax, (int32_t)2);
	esp -= 4; _sub_49C150(); esp += 4; //call
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(edx, eax);
	shl(edx, (int32_t)3);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(dword_50A8BC) = eax; //mov
	pop32(edx);
}
Fn(void) Game::_sub_437D10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = 0x5C; //mov
	eax = (int32_t)(intptr_t)dword_50A8A4; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = 0x9600; //mov
	eax = (int32_t)(intptr_t)dword_501280; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = 0x320; //mov
	eax = (int32_t)(intptr_t)dword_500F60; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_4D52F4) = edx; //mov
	to32i(dword_4D52F8) = edx; //mov
	edx = to32i(dword_51221C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	xor_(edx, edx);
	dl = (int32_t)(intptr_t)byte_4D5404[eax]; //mov
	to32i(dword_50A8A4) = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_437D7F;
loc_437D78:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_437D7F:
	dx = to16i(word_4D5406+eax); //mov
	to16i(dword_50A8B4) = dx; //mov
	dx = to16i(word_4D5408+eax); //mov
	to16i(dword_50A8B4+2) = dx; //mov
	edx = to32i(dword_50A8A4); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	ebx = 0x64; //mov
	sub(ecx, edx);
	ax = to16i(word_4D540A+eax); //mov
	shl(ecx, (int32_t)2);
	to16i(word_50A8B8) = ax; //mov
	add(ecx, edx);
	eax = to32i(dword_540F48); //mov
	shl(ecx, (int32_t)2);
	to32i(dword_50A8C0) = eax; //mov
	edx = to32i(dword_4D5308+ecx); //mov
	eax = to32i(dword_4D5304+ecx); //mov
	shl(edx, (int32_t)0x10);
	to32i(dword_50A8A8) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(edx, eax);
	shl(edx, (int32_t)5);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(dword_50A8AC) = eax; //mov
	eax = to32i(dword_4D530C+ecx); //mov
	to32i(dword_50A8C4) = eax; //mov
	eax = to32i(dword_4D5310+ecx); //mov
	ebx = 0xA; //mov
	to32i(dword_50A8C8) = eax; //mov
	eax = to32i(dword_4D5314+ecx); //mov
	edx = to32i(dword_4D5300+ecx); //mov
	to32i(dword_50A8CC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = to32i(dword_4D5318+ecx); //mov
	ebx = 0x168; //mov
	shl(edx, (int32_t)0x10);
	to32i(dword_50A8E0) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_4D52FC) = 1; //mov
	edx = to32i(dword_4D531C+ecx); //mov
	esi = eax; //mov
	shl(edx, (int32_t)0x10);
	ecx = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = (int32_t)(intptr_t)dword_50A8EC; //mov
	edx = (int32_t)(intptr_t)dword_50A8E4; //mov
	ecx = eax; //mov
	eax = esi; //mov
	xor_(edi, edi);
	esp -= 4; _sub_49D2C0(); esp += 4; //call
	edx = to32i(dword_50A8E4); //mov
	eax = ecx; //mov
	to32i(dword_50A8E8) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_50A8E8); //mov
	to32i(dword_50A8E4) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_50A8EC); //mov
	to32i(dword_50A8E8) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_50A8A4); //mov
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	ebx = 0x64; //mov
	sub(ecx, edx);
	to32i(dword_50A8EC) = eax; //mov
	shl(ecx, (int32_t)2);
	eax = to32i(dword_50A8E0); //mov
	add(ecx, edx);
	to32i(dword_50A8E8) = eax; //mov
	shl(ecx, (int32_t)2);
	ebp = eax; //mov
	eax = to32i(dword_4D5320+ecx); //mov
	edx = to32i(dword_4D5330+ecx); //mov
	to32i(dword_50A8B0) = eax; //mov
	eax = to32i(dword_540F48); //mov
	shl(edx, (int32_t)0x10);
	to32i(dword_50A880) = eax; //mov
	to32i(dword_50A884) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	shl(edx, (int32_t)2);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(dword_50A8F0) = eax; //mov
	eax = to32i(dword_4D5324+ecx); //mov
	to32i(dword_50A8F4) = eax; //mov
	eax = to32i(dword_4D5328+ecx); //mov
	to32i(dword_50A8F8) = eax; //mov
	eax = to32i(dword_4D532C+ecx); //mov
	to32i(dword_50A8FC) = eax; //mov
	eax = to32i(dword_50A8C4); //mov
	shl(eax, (int32_t)0x10);
	to32i(dword_50A8BC) = edi; //mov
	to32i(dword_50A8D0) = eax; //mov
	eax = to32i(dword_50A8CC); //mov
	neg(ebp);
	shl(eax, (int32_t)0x10);
	to32i(dword_50A8E8) = ebp; //mov
	to32i(dword_50A8D4) = eax; //mov
	edx = eax; //mov
	eax = to32i(dword_50A8C8); //mov
	ebx = to32i(dword_50A8A4); //mov
	shl(eax, (int32_t)0x10);
	neg(edx);
	to32i(dword_50A8D8) = eax; //mov
	sub(eax, edx);
	to32i(dword_50A8D4) = edx; //mov
	to32i(dword_50A8DC) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_437D78;
	esi = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
loc_437FC2:
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	ebx = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(ebx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edi = to32i(dword_50A8D0); //mov
	sub(edx, edi);
	to32i(dword_501280+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	shl(eax, (int32_t)0x10);
	edx = eax; //mov
	ebp = to32i(dword_50A8DC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	eax = to32i(dword_50A8D4); //mov
	add(edx, eax);
	to32i(dword_501284+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	ebx = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(ebx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = to32i(dword_50A8D0); //mov
	sub(edx, ebx);
	to32i(dword_501288+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	ebx = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(ebx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	edi = to32i(dword_50A8D0); //mov
	sub(edx, edi);
	to32i(dword_505D80+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	shl(eax, (int32_t)0x10);
	edx = eax; //mov
	ebp = to32i(dword_50A8DC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	eax = to32i(dword_50A8D4); //mov
	add(edx, eax);
	to32i(dword_505D84+ecx) = edx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	edx = eax; //mov
	ebx = to32i(dword_50A8D0); //mov
	shl(edx, (int32_t)0x10);
	add(ebx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	add(ecx, (int32_t)0x18);
	to32i(dword_501274+ecx) = esi; //mov
	to32i(dword_501278+ecx) = esi; //mov
	to32i(dword_505D74+ecx) = esi; //mov
	to32i(dword_505D78+ecx) = esi; //mov
	xor_(ah, ah);
	byte_50127D[ecx] = ah; //mov
	byte_505D7D[ecx] = ah; //mov
	ebx = to32i(dword_50A8D0); //mov
	byte_50127C[ecx] = ah; //mov
	sub(edx, ebx);
	byte_505D7C[ecx] = ah; //mov
	to32i(dword_505D70+ecx) = edx; //mov
	cmp(ecx, (int32_t)0x4B00);
	if (jnz())
		goto loc_437FC2;
	xor_(ecx, ecx);
	xor_(eax, eax);
loc_4380E7:
	add(ecx, (int32_t)0x14);
	to32i(dword_5010E4+ecx) = eax; //mov
	to32i(dword_500F54+ecx) = eax; //mov
	cmp(ecx, (int32_t)0x190);
	if (jnz())
		goto loc_4380E7;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_438110()
{
	cmp(to32i(dword_50A8A4), (int32_t)0);
	if (jz())
		goto locret_43812C;
	cmp(to32i(dword_4D52FC), (int32_t)0);
	if (jnz())
		goto loc_43812D;
	eax = 1; //mov
	to32i(dword_4D52FC) = eax; //mov
locret_43812C:
	return;
loc_43812D:
	xor_(eax, eax);
	to32i(dword_4D52FC) = eax; //mov
}
Fn(void) Game::_sub_438140()
{
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x40);
	esi = eax; //mov
	edx = to32i(dword_51221C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edi = (uint8_t)byte_4D5404[eax*8]; //movzx
	test(edi, edi);
	if (jnz())
		goto loc_43816A;
	add(esp, (int32_t)0x40);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	return;
loc_43816A:
	push32(ecx);
	push32(ebx);
	push32(edi);
	push32(aDrpD);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	ecx = (int32_t)(intptr_t)dword_50A888; //mov
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(ebx, ebx);
	eax = esi; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	push32(edi);
	push32(aSplD);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	ecx = (int32_t)(intptr_t)dword_50A900; //mov
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(ebx, ebx);
	eax = esi; //mov
	esp -= 4; _sub_4352C0(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	add(esp, (int32_t)0x40);
	pop32(edi);
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_4381C0()
{
	_sub_437D10(); return; //jmp
}
Fn(void) Game::_sub_4383C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_512210), (int32_t)0);
	if (jnz())
		goto loc_438567;
	ebx = 1; //mov
loc_4383DA:
	edx = to32i(ecx+0x14); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4D5794); //mov
	esi = (uint8_t)to8i(edx+eax*2); //movzx
	edx = esi; //mov
	eax = ecx; //mov
	shl(edx, (int32_t)0x10);
	esp -= 4; _sub_4385C0(); esp += 4; //call
	esi = eax; //mov
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_438700(); esp += 4; //call
	ebp = eax; //mov
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_438B30(); esp += 4; //call
	edi = eax; //mov
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_438810(); esp += 4; //call
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4385F0(); esp += 4; //call
	ebx = eax; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	to32i(ecx+0x558) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_438680(); esp += 4; //call
	dx = to16i(ecx+6); //mov
	to32i(ecx+0x558) = eax; //mov
	cmp(dx, (int16_t)0x41);
	if (jnb())
		goto loc_43849F;
	xor_(eax, eax);
	ax = dx; //mov
	edx = 0x41; //mov
	sub(edx, eax);
	shl(edx, (int32_t)4);
	eax = edx; //mov
	shl(eax, (int32_t)6);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax+0x10000); //lea
	eax = to32i(ecx+0x558); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0x558) = eax; //mov
loc_43849F:
	ebx = to32i(ecx+0x558); //mov
	cmp(ebx, (int32_t)0x10000);
	if (jle())
		goto loc_43856E;
	to32i(ecx+0x94) = ebx; //mov
loc_4384B7:
	eax = esi; //mov
	edx = to32i(ecx+0x558); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(to8i(ecx+0x1F4), (int8_t)1);
	if (jz())
		goto loc_438555;
	cmp(to32i(ecx+0x280), (int32_t)2);
	if (jnz())
		goto loc_438555;
	edi = to32i(dword_512228); //mov
	edx = to32i(ecx+0x14); //mov
	test(edi, edi);
	if (jz())
		goto loc_438581;
	eax = to32i(dword_5118A0); //mov
	sub(eax, (int32_t)0x3C);
	cmp(edx, eax);
	if (jge())
		goto loc_43857D;
loc_438500:
	eax = 1; //mov
loc_438505:
	edi = eax; //mov
	ebp = to32i(ecx+0x108); //mov
	eax = to32i(ecx+0x3AC); //mov
	esi = to32i(ecx+0x3AC); //mov
	ecx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	ebx = edx; //mov
	xor_(edx, edx);
	sar(ebx, (int32_t)4);
	dl = to8i(eax+0x20); //mov
	and_(ebx, (int32_t)0xF);
	shl(edx, (int32_t)0xF);
	imul32(edx, ebx);
	sub(esi, ebp);
	neg(edx);
	cmp(esi, edx);
	if (jge())
		goto loc_438591;
loc_438550:
	eax = 1; //mov
loc_438555:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_438560;
	neg(eax);
loc_438560:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438567:
	xor_(ebx, ebx);
	goto loc_4383DA;
loc_43856E:
	to32i(ecx+0x94) = 0x10000; //mov
	goto loc_4384B7;
loc_43857D:
	xor_(eax, eax);
	goto loc_438505;
loc_438581:
	cmp(edx, (int32_t)0x3C);
	if (jg())
		goto loc_438500;
	xor_(eax, eax);
	goto loc_438505;
loc_438591:
	xor_(ebx, ebx);
	bl = to8i(eax+0x21); //mov
	shl(ebx, (int32_t)0xF);
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, ebx);
	cmp(esi, eax);
	if (jg())
		goto loc_438550;
	cmp(ecx, edx);
	if (jl())
		goto loc_438550;
	cmp(ecx, eax);
	if (jg())
		goto loc_438550;
	test(edi, edi);
	if (jnz())
		goto loc_438550;
	eax = 0xB0000; //mov
	goto loc_438555;
}
Fn(void) Game::_sub_4385C0()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	edx = to32i(ecx+0x21C); //mov
	ecx = to32i(edx); //mov
	cmp(ecx, (int32_t)0xF);
	if (jge())
		goto loc_4385E7;
	push32(ebx);
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	ebx = to32i(dword_4D5F74+edx); //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_4385E6;
	eax = ebx; //mov
loc_4385E6:
	pop32(ebx);
loc_4385E7:
	pop32(ecx);
}
Fn(void) Game::_sub_4385F0()
{
	push32(edx);
	cmp(to32i(dword_51221C), (int32_t)0xA);
	if (jl())
		goto loc_438601;
loc_4385FA:
	eax = 0x10000; //mov
	pop32(edx);
	return;
loc_438601:
	xor_(edx, edx);
	dx = to16i(eax+6); //mov
	esp -= 4; _sub_43D7A0(); esp += 4; //call
	cmp(edx, eax);
	if (jl())
		goto loc_4385FA;
	cmp(to32i(dword_512204), (int32_t)0);
	if (jnz())
		goto loc_438620;
	esp -= 4; _sub_43D800(); esp += 4; //call
	pop32(edx);
	return;
loc_438620:
	esp -= 4; _sub_43D7D0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_438630()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(dword_4D6A80); //mov
	eax = to32i(dword_4D6A78); //mov
	imul32(ecx, eax);
	eax = ecx; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	eax = ecx; //mov
	and_(eax, (int32_t)0xFFFF00);
	shr(eax, (int32_t)8);
	and_(eax, (int32_t)3);
	eax = to32i(dword_50AB64+eax*4); //mov
	to32i(dword_4D6A7C) = ecx; //mov
	to32i(edx+0x3C8) = eax; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_438680()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	ebp = edx; //mov
	esi = 0x2710; //mov
	edx = to32i(dword_511E40); //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jle())
		goto loc_4386C4;
	xor_(ecx, ecx);
loc_43869C:
	edx = to32i(dword_511D08+ecx); //mov
	eax = to32i(edi+0x14); //mov
	edx = to32i(edx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_4386DE;
loc_4386B1:
	cmp(eax, esi);
	if (jge())
		goto loc_4386B7;
	esi = eax; //mov
loc_4386B7:
	eax = to32i(dword_511E40); //mov
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, eax);
	if (jl())
		goto loc_43869C;
loc_4386C4:
	cmp(esi, (int32_t)0x14);
	if (jg())
		goto loc_4386D6;
	cmp(ebp, (int32_t)0x14CCC);
	if (jle())
		goto loc_4386E2;
	ebp = 0x14CCC; //mov
loc_4386D6:
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4386DE:
	neg(eax);
	goto loc_4386B1;
loc_4386E2:
	cmp(ebp, (int32_t)0x9999);
	if (jge())
		goto loc_4386D6;
	ebp = 0x9999; //mov
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_438700()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	ebx = 0x10000; //mov
	eax = to32i(eax+0x1E8); //mov
	edx = to32i(dword_5121F8); //mov
	esi = ebx; //mov
	ebp = to32i(dword_5126B0+eax*4); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_4387D5;
loc_43872D:
	edi = to32i(ecx+0x21C); //mov
	cmp(to32i(edi), (int32_t)0);
	if (jnz())
		goto loc_438797;
	eax = to32i(dword_511B48); //mov
	eax = to32i(eax+0x21C); //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_438797;
	cmp(to32i(dword_512208), (int32_t)0);
	if (jnz())
		goto loc_438797;
	eax = to32i(ecx+0x14); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(eax, eax);
	to32i(esp) = eax; //mov
	edx = to32i(esp); //mov
	eax = to32i(dword_4D5794); //mov
	add(eax, edx);
	al = to8i(eax); //mov
	edx = to32i(edi); //mov
	and_(eax, (int32_t)0xFF);
	edx = to32i(dword_4D5F74+edx*4); //mov
	shl(eax, (int32_t)0x10);
	sub(edx, (int32_t)0xA0000);
	cmp(eax, edx);
	if (jge())
		goto loc_438797;
	cmp(to32i(dword_51221C), (int32_t)0);
	if (jnz())
		goto loc_438797;
	esi = 0xF333; //mov
loc_438797:
	cmp(to32i(dword_50AD04), (int32_t)0);
	if (jz())
		goto loc_4387B0;
	ebx = to32i(dword_512200); //mov
	shl(ebx, (int32_t)2);
	ebx = to32i(dword_4D57F8+ebx+ebp*8); //mov
loc_4387B0:
	edx = esi; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	bx = to16i(ecx+6); //mov
	edx = eax; //mov
	cmp(bx, (int16_t)0x64);
	if (ja())
		goto loc_4387E0;
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4387D5:
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_43872D;
	goto loc_438797;
loc_4387E0:
	ecx = to32i(dword_512200); //mov
	edx = to32i(dword_51221C); //mov
	shl(ecx, (int32_t)2);
	edx = to32i(dword_4D57B0+ecx+edx*8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_438810()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43891A;
	eax = 0xFFFFFFFF; //mov
loc_43882C:
	edi = to32i(dword_50AC90); //mov
	xor_(esi, esi);
	to32i(esp) = eax; //mov
	si = to16i(ebx+6); //mov
	di = to16i(edi+6); //mov
	and_(edi, (int32_t)0xFFFF);
	ecx = esi; //mov
	sub(ecx, edi);
	ebp = 0xF; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	add(eax, (int32_t)0xA);
	test(eax, eax);
	if (jl())
		goto loc_438924;
	cmp(eax, (int32_t)0x15);
	if (jl())
		goto loc_43886C;
	eax = 0x14; //mov
loc_43886C:
	edx = to32i(ebx+0x1E8); //mov
	edx = to32i(dword_50A9D8+edx*4); //mov
	eax = to32i(edx+eax*4+4); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_43892B;
loc_438885:
	cmp(ecx, (int32_t)0x1E);
	if (jle())
		goto loc_4388A5;
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_438932;
	edx = to32i(dword_50AC74); //mov
loc_43889B:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_4388A5:
	edx = eax; //mov
	eax = to32i(dword_50AC90); //mov
	ebp = to32i(esp); //mov
	ecx = to32i(eax+0x39C); //mov
	imul32(ecx, ebp);
	cmp(ecx, (int32_t)0x20000);
	if (jge())
		goto loc_4388CA;
	cmp(to16i(eax+0x14E), (int16_t)0);
	if (jnz())
		goto loc_438901;
loc_4388CA:
	cmp(esi, edi);
	if (jge())
		goto loc_4388E5;
	eax = to32i(dword_50AC90); //mov
	cmp(to16i(eax+0x14E), (int16_t)0);
	if (jz())
		goto loc_4388E5;
	cmp(edx, (int32_t)0x10000);
	if (jg())
		goto loc_438901;
loc_4388E5:
	eax = to32i(dword_50AC90); //mov
	ecx = to32i(esp); //mov
	eax = to32i(eax+0x39C); //mov
	imul32(eax, ecx);
	cmp(eax, (int32_t)0x20000);
	if (jge())
		goto loc_438906;
	cmp(esi, edi);
	if (jle())
		goto loc_438906;
loc_438901:
	edx = 0x10000; //mov
loc_438906:
	xor_(eax, eax);
	ax = to16i(ebx+6); //mov
	esp -= 4; _sub_438940(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43891A:
	eax = 1; //mov
	goto loc_43882C;
loc_438924:
	xor_(eax, eax);
	goto loc_43886C;
loc_43892B:
	neg(ecx);
	goto loc_438885;
loc_438932:
	edx = to32i(dword_50AC80); //mov
	goto loc_43889B;
}
Fn(void) Game::_sub_438940()
{
	push32(ebx);
	push32(ecx);
	push32(edi);
	ecx = eax; //mov
	ebx = edx; //mov
	edx = to32i(dword_5121FC); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_438988;
	xor_(edx, edx);
loc_438954:
	shl(edx, (int32_t)4);
	edi = to32i(dword_4D595C+edx); //mov
	eax = (int32_t)(intptr_t)(ebx-0x10000); //lea
	cmp(ecx, edi);
	if (jg())
		goto loc_43899B;
	cmp(ecx, to32i(dword_4D5958+edx));
	if (jg())
		goto loc_4389A1;
	cmp(ecx, to32i(dword_4D5954+edx));
	if (jg())
		goto loc_4389B9;
	cmp(ecx, to32i(dword_4D5950+edx));
	if (jg())
		goto loc_4389D1;
	eax = 0x10000; //mov
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438988:
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_438994;
	edx = 1; //mov
	goto loc_438954;
loc_438994:
	edx = 2; //mov
	goto loc_438954;
loc_43899B:
	eax = ebx; //mov
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4389A1:
	edx = 0xC000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, (int32_t)0x10000);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4389B9:
	edx = 0x8000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, (int32_t)0x10000);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4389D1:
	edx = 0x4000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, (int32_t)0x10000);
	pop32(edi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4389F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_438AEA;
	eax = 0xFFFFFFFF; //mov
loc_438A09:
	esi = to32i(dword_50AC90); //mov
	xor_(ebx, ebx);
	edi = eax; //mov
	bx = to16i(ecx+6); //mov
	si = to16i(esi+6); //mov
	and_(esi, (int32_t)0xFFFF);
	test(edx, edx);
	if (jnz())
		goto loc_438ADF;
	test(to8i(ecx+0x1F4), (int8_t)8);
	if (jz())
		goto loc_438ADF;
	edx = ebx; //mov
	sub(edx, esi);
	ebp = 0xF; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	add(eax, (int32_t)0xA);
	test(eax, eax);
	if (jl())
		goto loc_438AF4;
	cmp(eax, (int32_t)0x15);
	if (jl())
		goto loc_438A5B;
	eax = 0x14; //mov
loc_438A5B:
	edx = to32i(ecx+0x1E8); //mov
	edx = to32i(dword_50A9D8+edx*4); //mov
	eax = to32i(edx+eax*4+0x58); //mov
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_438AFB;
	edx = to32i(dword_50AC7C); //mov
loc_438A7D:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1E8); //mov
	ebp = to32i(dword_5121F8); //mov
	ecx = to32i(dword_5126B0+edx*4); //mov
	cmp(ebp, (int32_t)1);
	if (jz())
		goto loc_438ABE;
	cmp(ebp, (int32_t)2);
	if (jz())
		goto loc_438ABE;
	edx = to32i(dword_512200); //mov
	shl(edx, (int32_t)2);
	edx = to32i(dword_4D5868+edx+ecx*8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_438ABE:
	edx = to32i(dword_50AC90); //mov
	ecx = to32i(edx+0x39C); //mov
	imul32(ecx, edi);
	cmp(ecx, (int32_t)0x20000);
	if (jge())
		goto loc_438B06;
	cmp(to16i(edx+0x14E), (int16_t)0);
	if (jnz())
		goto loc_438B06;
loc_438ADF:
	eax = 0x10000; //mov
loc_438AE4:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438AEA:
	eax = 1; //mov
	goto loc_438A09;
loc_438AF4:
	xor_(eax, eax);
	goto loc_438A5B;
loc_438AFB:
	edx = to32i(dword_50AC88); //mov
	goto loc_438A7D;
loc_438B06:
	cmp(ebx, esi);
	if (jge())
		goto loc_438AE4;
	edx = to32i(dword_50AC90); //mov
	cmp(to16i(edx+0x14E), (int16_t)0);
	if (jz())
		goto loc_438AE4;
	cmp(eax, (int32_t)0x10000);
	if (jg())
		goto loc_438ADF;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_438B30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	edx = to32i(dword_50A9D0); //mov
	test(edx, edx);
	if (jle())
		goto loc_438B9C;
loc_438B3F:
	ebx = to32i(ecx+0x4F0); //mov
	eax = edx; //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_438B4D;
	eax = ebx; //mov
loc_438B4D:
	esi = to32i(ecx+0x4F4); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_438B59;
	eax = esi; //mov
loc_438B59:
	sub(eax, to32i(ecx+0x4F4));
	edx = to32i(ecx+0x4F8); //mov
	shl(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x1E8); //mov
	edx = to32i(dword_50A9D8+edx*4); //mov
	edx = to32i(edx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	eax = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438B9C:
	neg(edx);
	goto loc_438B3F;
}
Fn(void) Game::_sub_438BB0()
{
	static const void *const off_438BA0[] = {
		&&loc_438CA2,
		&&loc_438CED,
		&&loc_438CFE,
		&&loc_438D0E,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	to32i(eax+0x398) = 0; //mov
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_438C3A;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_438D1F;
	ebp = to32i(dword_512228); //mov
	eax = to32i(dword_50AB58); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_438C41;
	edx = to32i(dword_50AC90); //mov
	edx = to32i(edx+0x39C); //mov
	sub(edx, eax);
	edi = to32i(esi+0x398); //mov
	eax = edx; //mov
	cmp(edx, edi);
	if (jge())
		goto loc_438C0B;
	to32i(esi+0x398) = edx; //mov
loc_438C0B:
	eax = esi; //mov
	esp -= 4; _sub_4383C0(); esp += 4; //call
	ebp = to32i(esi+0x398); //mov
	edx = eax; //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_438C61;
	eax = 1; //mov
loc_438C23:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_438C65;
loc_438C2B:
	to32i(esi+0x398) = edx; //mov
	cmp(to32i(esi+0x53C), (int32_t)0);
	if (jg())
		goto loc_438C7E;
loc_438C3A:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438C41:
	edx = to32i(dword_50AC90); //mov
	ecx = to32i(edx+0x39C); //mov
	ebx = to32i(esi+0x398); //mov
	add(eax, ecx);
	cmp(eax, ebx);
	if (jle())
		goto loc_438C0B;
	to32i(esi+0x398) = eax; //mov
	goto loc_438C0B;
loc_438C61:
	xor_(eax, eax);
	goto loc_438C23;
loc_438C65:
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jnz())
		goto loc_438C2B;
	cmp(to32i(esi+0x53C), (int32_t)0);
	if (jg())
		goto loc_438C7E;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438C7E:
	eax = esi; //mov
	esp -= 4; _sub_438FA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_438CB8;
	eax = esi; //mov
	esp -= 4; _sub_438E10(); esp += 4; //call
	eax = to32i(esi+0x14); //mov
	and_(eax, (int32_t)3);
	cmp(eax, (int32_t)3);
	if (ja())
		goto loc_438CB8;
	goto *off_438BA0[eax];
loc_438CA2:
	ecx = 5; //mov
	ebx = 0xA; //mov
	edx = 2; //mov
loc_438CB1:
	eax = esi; //mov
loc_438CB3:
	esp -= 4; _sub_441BD0(); esp += 4; //call
loc_438CB8:
	edi = to32i(esi+0x53C); //mov
	dec(edi);
	to32i(esi+0x53C) = edi; //mov
	test(edi, edi);
	if (jg())
		goto loc_438C3A;
	bh = to8i(esi+0x3A9); //mov
	to32i(esi+0x540) = 0; //mov
	and_(bh, (int8_t)0xEF);
	to8i(esi+0x3A9) = bh; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438CED:
	ecx = 4; //mov
	ebx = 0x32; //mov
	edx = 1; //mov
	goto loc_438CB1;
loc_438CFE:
	ecx = 2; //mov
	ebx = 0x1E; //mov
	eax = esi; //mov
	edx = ecx; //mov
	goto loc_438CB3;
loc_438D0E:
	ecx = 0x28; //mov
	ebx = 1; //mov
	edx = 3; //mov
	goto loc_438CB1;
loc_438D1F:
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_438D70;
	eax = esi; //mov
	esp -= 4; _sub_439080(); esp += 4; //call
	edx = eax; //mov
	neg(edx);
	eax = esi; //mov
	esp -= 4; _sub_439030(); esp += 4; //call
	edx = to32i(esi+0x560); //mov
	to32i(esi+0x398) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_438D50:
	to32i(esi+0x398) = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_438C3A;
	neg(to32i(esi+0x398));
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438D70:
	eax = to32i(dword_50AC90); //mov
	edx = to32i(eax+0x39C); //mov
	eax = to32i(dword_50AB74); //mov
	sar(edx, (int32_t)1);
	sar(eax, (int32_t)1);
	add(eax, edx);
	edx = eax; //mov
	to32i(esi+0x398) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_439030(); esp += 4; //call
	to32i(esi+0x398) = eax; //mov
	eax = to32i(esi+0x14); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4D5794); //mov
	al = to8i(edx+eax*2); //mov
	and_(eax, (int32_t)0xFF);
	edx = 0x6666; //mov
	shl(eax, (int32_t)0x10);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_439030(); esp += 4; //call
	cmp(eax, to32i(esi+0x398));
	if (jge())
		goto loc_438DDE;
	to32i(esi+0x398) = eax; //mov
loc_438DDE:
	edx = to32i(esi+0x560); //mov
	eax = to32i(esi+0x398); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x398) = eax; //mov
	cmp(eax, (int32_t)0xA0000);
	if (jg())
		goto loc_438D50;
	eax = 0xA0000; //mov
	goto loc_438D50;
}
Fn(void) Game::_sub_438E10()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	edi = edx; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_438ED6;
	esi = 0xFFFFFFFF; //mov
loc_438E2A:
	ebx = to32i(ecx+0x544); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_438ED1;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	edx = eax; //mov
	imul32(edx, esi);
	eax = to32i(ebx+0x39C); //mov
	imul32(eax, esi);
	cmp(edx, (int32_t)0x64);
	if (jle())
		goto loc_438EE0;
loc_438E5A:
	or_(to8i(ecx+0x3A9), (int8_t)0x10);
loc_438E61:
	cmp(edx, (int32_t)0xFFFFFF9C);
	if (jge())
		goto loc_438F11;
loc_438E6A:
	and_(to8i(ecx+0x3A9), (int8_t)0xEF);
loc_438E71:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_438F40;
	ebx = 1; //mov
loc_438E83:
	xor_(ebx, to32i(dword_512228));
	if (jz())
		goto loc_438F52;
	cmp(edx, (int32_t)0x64);
	if (jge())
		goto loc_438F47;
	test(edx, edx);
	if (jle())
		goto loc_438F47;
	test(eax, eax);
	if (jl())
		goto loc_438F47;
	sub(eax, (int32_t)0x80000);
loc_438EAD:
	to32i(ecx+0x398) = eax; //mov
loc_438EB3:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_438F77;
	eax = 1; //mov
	xor_(eax, to32i(dword_512228));
	if (jnz())
		goto loc_438F86;
loc_438ED1:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438ED6:
	esi = 1; //mov
	goto loc_438E2A;
loc_438EE0:
	test(eax, eax);
	if (jle())
		goto loc_438F07;
loc_438EE4:
	cmp(eax, (int32_t)0xFFE20000);
	if (jle())
		goto loc_438E61;
	cmp(eax, (int32_t)0x1E0000);
	if (jge())
		goto loc_438E61;
	test(edx, edx);
	if (jg())
		goto loc_438E5A;
	goto loc_438E61;
loc_438F07:
	test(edx, edx);
	if (jg())
		goto loc_438E5A;
	goto loc_438EE4;
loc_438F11:
	test(eax, eax);
	if (jl())
		goto loc_438F1D;
	test(edx, edx);
	if (jl())
		goto loc_438E6A;
loc_438F1D:
	cmp(eax, (int32_t)0xFFE20000);
	if (jle())
		goto loc_438E71;
	cmp(eax, (int32_t)0x1E0000);
	if (jge())
		goto loc_438E71;
	test(edx, edx);
	if (jl())
		goto loc_438E6A;
	goto loc_438E71;
loc_438F40:
	xor_(ebx, ebx);
	goto loc_438E83;
loc_438F47:
	to32i(ecx+0x398) = edi; //mov
	goto loc_438EB3;
loc_438F52:
	cmp(edx, (int32_t)0xFFFFFF9C);
	if (jle())
		goto loc_438F5B;
	test(edx, edx);
	if (jl())
		goto loc_438F66;
loc_438F5B:
	to32i(ecx+0x398) = edi; //mov
	goto loc_438EB3;
loc_438F66:
	cmp(eax, (int32_t)0xFFFE0000);
	if (jge())
		goto loc_438F5B;
	add(eax, (int32_t)0x20000);
	goto loc_438EAD;
loc_438F77:
	xor_(eax, eax);
	xor_(eax, to32i(dword_512228));
	if (jnz())
		goto loc_438F86;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438F86:
	neg(to32i(ecx+0x398));
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_438FA0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_438FE2;
	ebx = 0xFFFFFFFF; //mov
loc_438FB3:
	esi = to32i(ecx+0x544); //mov
	test(esi, esi);
	if (jz())
		goto loc_438FE9;
	push32(edx);
	edx = to32i(esi+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, ebx);
	cmp(eax, (int32_t)0x4B);
	if (jle())
		goto loc_438FF5;
loc_438FD1:
	to32i(ecx+0x53C) = 0; //mov
loc_438FDB:
	xor_(eax, eax);
	pop32(edx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438FE2:
	ebx = 1; //mov
	goto loc_438FB3;
loc_438FE9:
	xor_(eax, eax);
	to32i(ecx+0x53C) = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_438FF5:
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jnz())
		goto loc_438FD1;
	test(to8i(ecx+0x1F4), (int8_t)1);
	if (jz())
		goto loc_439010;
	cmp(to32i(ecx+0x280), (int32_t)2);
	if (jz())
		goto loc_438FD1;
loc_439010:
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_438FD1;
	cmp(to32i(ecx+0x53C), (int32_t)0);
	if (jle())
		goto loc_438FDB;
	eax = 1; //mov
	pop32(edx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439030()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_439065;
	ebx = (int32_t)(intptr_t)(edx-0xD6666); //lea
	edx = to32i(ecx+0x3C8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_439056;
	eax = ebx; //mov
loc_439056:
	cmp(eax, (int32_t)0x8E666);
	if (jge())
		goto loc_439062;
	eax = 0x8E666; //mov
loc_439062:
	pop32(ecx);
	pop32(ebx);
	return;
loc_439065:
	edx = to32i(ecx+0x3C8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439080()
{
	push32(edx);
	eax = to32i(eax+0x3B0); //mov
	edx = to32i(dword_512228); //mov
	eax = to32i(eax+0x39C); //mov
	test(edx, edx);
	if (jz())
		goto loc_439099;
	neg(eax);
loc_439099:
	cmp(eax, (int32_t)0xDCCCC);
	if (jl())
		goto loc_4390AE;
	cmp(eax, (int32_t)0x1BCCCC);
	if (jge())
		goto loc_4390B5;
	eax = 0xDE666; //mov
	pop32(edx);
	return;
loc_4390AE:
	eax = 0x136666; //mov
	pop32(edx);
	return;
loc_4390B5:
	cmp(eax, (int32_t)0x29B333);
	if (jge())
		goto loc_4390C3;
	eax = 0xB1C28; //mov
	pop32(edx);
	return;
loc_4390C3:
	cmp(eax, (int32_t)0x378000);
	if (jge())
		goto loc_4390D1;
	eax = 0x6E666; //mov
	pop32(edx);
	return;
loc_4390D1:
	cmp(eax, (int32_t)0x456666);
	if (jge())
		goto loc_4390DF;
	eax = 0x428F5; //mov
	pop32(edx);
	return;
loc_4390DF:
	eax = 0x2C51E; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4390F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	push32(dword_50AC60);
	push32(dword_50AC6C);
	ecx = to32i(eax); //mov
	ebx = to32i(eax+0x88); //mov
	push32(dword_50AC70);
	xor_(edx, edx);
	eax = 1; //mov
	esp -= 4; _sub_471620(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4392ED;
	xor_(edx, edx);
	ah = to8i(esi+0x3A8); //mov
	to32i(dword_50A9CC) = edx; //mov
	test(ah, (int8_t)0x10);
	if (jnz())
		goto loc_4392ED;
	cmp(to8i(esi+0x8D), (int8_t)0);
	if (jz())
		goto loc_4392ED;
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_4392ED;
	cmp(to16i(esi+0x14E), (int16_t)0);
	if (jnz())
		goto loc_4392ED;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_4392ED;
	push32(edi);
	ecx = to32i(dword_540F48); //mov
	cmp(ecx, (int32_t)0x480);
	if (jle())
		goto loc_4391BF;
	cmp(ecx, (int32_t)0x4C0);
	if (jge())
		goto loc_4391BF;
	eax = to32i(dword_511B48); //mov
	cmp(to8i(eax+0x2DC), (int8_t)0);
	if (jz())
		goto loc_4391BF;
	ecx = to32i(dword_5118A0); //mov
	edi = to32i(eax+0x14); //mov
	sub(ecx, (int32_t)3);
	cmp(ecx, edi);
	if (jge())
		goto loc_4391BF;
	cmp(edi, to32i(dword_5118A0));
	if (jge())
		goto loc_4391BF;
	eax = to32i(dword_511D08); //mov
	to32i(esi+0x53C) = 0xC350; //mov
	to32i(esi+0x544) = eax; //mov
loc_4391BF:
	test(to8i(byte_512219), (int8_t)1);
	if (jz())
		goto loc_439211;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_439211;
	eax = to32i(dword_50AC90); //mov
	test(eax, eax);
	if (jz())
		goto loc_439211;
	cx = to16i(eax+6); //mov
	xor_(eax, eax);
	and_(ecx, (int32_t)0xFFFF);
	ax = to16i(esi+6); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	cmp(ecx, (int32_t)0xFFFFFFFE);
	if (jle())
		goto loc_439211;
	cmp(ecx, (int32_t)5);
	if (jge())
		goto loc_439211;
	test(ecx, ecx);
	if (jle())
		goto loc_4392F2;
loc_439200:
	to32i(esi+0x53C) = eax; //mov
	eax = to32i(dword_50AC90); //mov
	to32i(esi+0x544) = eax; //mov
loc_439211:
	eax = esi; //mov
	esp -= 4; _sub_43A050(); esp += 4; //call
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_439370(); esp += 4; //call
	to32i(dword_50A958) = edx; //mov
	to32i(dword_50A954) = edx; //mov
	al = to8i(esi+0x1F4); //mov
	to32i(dword_50A950) = edx; //mov
	test(al, (int8_t)8);
	if (jz())
		goto loc_439244;
	eax = esi; //mov
	esp -= 4; _sub_43B620(); esp += 4; //call
loc_439244:
	eax = esi; //mov
	esp -= 4; _sub_439400(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43AA50(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43A7D0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43A310(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43AB10(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43BA20(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43B8D0(); esp += 4; //call
	eax = esi; //mov
	eax = esi; //mov
	esp -= 4; _sub_43B160(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43B3A0(); esp += 4; //call
	cmp(to8i(esi+0x8C), (int8_t)0);
	if (jnz())
		goto loc_4392A1;
	eax = esi; //mov
	esp -= 4; _sub_43BD80(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43A230(); esp += 4; //call
loc_4392A1:
	eax = esi; //mov
	esp -= 4; _sub_43B520(); esp += 4; //call
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_4392D7;
	edi = to32i(dword_50A954); //mov
	test(edi, edi);
	if (jz())
		goto loc_4392D7;
	cmp(to32i(edi+0x39C), (int32_t)0xA0000);
	if (jle())
		goto loc_4392D7;
	eax = to32i(dword_50AC94); //mov
	sub(to32i(dword_50AC58+eax*4), (int32_t)0x1E0000);
loc_4392D7:
	eax = esi; //mov
	esp -= 4; _sub_4397E0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_439890(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_439C70(); esp += 4; //call
	pop32(edi);
loc_4392ED:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4392F2:
	neg(eax);
	goto loc_439200;
}
Fn(void) Game::_sub_439300()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	eax = esp; //mov
	push32(eax);
	push32(eax);
	ecx = to32i(esi); //mov
	ebx = to32i(esi+0x88); //mov
	push32(eax);
	xor_(edx, edx);
	eax = 1; //mov
	esp -= 4; _sub_471620(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_439338;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_439338;
	test(to8i(esi+0x3A8), (int8_t)0x10);
	if (jz())
		goto loc_439340;
loc_439338:
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439340:
	eax = esi; //mov
	esp -= 4; _sub_438BB0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43A120(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_43D550(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439360()
{
	_sub_43A1D0(); return; //jmp
}
Fn(void) Game::_sub_439370()
{
	push32(ecx);
	push32(edx);
	test(to8i(eax+0x1F4), (int8_t)8);
	if (jz())
		goto loc_4393F5;
	ecx = to32i(dword_512228); //mov
	edx = to32i(eax+0x148); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4393CD;
	eax = to32i(eax+0x14); //mov
	dec(eax);
	test(eax, eax);
	if (jl())
		goto loc_4393C5;
loc_439397:
	esp -= 4; _sub_463310(); esp += 4; //call
loc_43939C:
	sub(eax, edx);
	to32i(dword_50A9D0) = eax; //mov
	cmp(eax, (int32_t)0x200);
	if (jle())
		goto loc_4393B4;
	sub(eax, (int32_t)0x400);
	to32i(dword_50A9D0) = eax; //mov
loc_4393B4:
	edx = to32i(dword_50A9D0); //mov
	cmp(edx, (int32_t)0xFFFFFE00);
	if (jl())
		goto loc_4393E6;
	pop32(edx);
	pop32(ecx);
	return;
loc_4393C5:
	add(eax, to32i(dword_5118A0));
	goto loc_439397;
loc_4393CD:
	push32(ebx);
	eax = to32i(eax+0x14); //mov
	ebx = to32i(dword_5118A0); //mov
	inc(eax);
	cmp(eax, ebx);
	if (jl())
		goto loc_4393DE;
	sub(eax, ebx);
loc_4393DE:
	esp -= 4; _sub_463310(); esp += 4; //call
	pop32(ebx);
	goto loc_43939C;
loc_4393E6:
	ecx = (int32_t)(intptr_t)(edx+0x400); //lea
	to32i(dword_50A9D0) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_4393F5:
	xor_(edx, edx);
	to32i(dword_50A9D0) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_439400()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ecx = to32i(dword_5118A0); //mov
	ebp = to32i(dword_5118A4); //mov
	ebx = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)dword_4383B4; //mov
	movsd();
	movsd();
	movsd();
	eax = to32i(eax+0x500); //mov
	dec(eax);
	esp -= 4; _sub_43D3B0(); esp += 4; //call
	to32i(esp) = eax; //mov
	eax = to32i(ebx+0x500); //mov
	esp -= 4; _sub_43D3B0(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	eax = to32i(ebx+0x500); //mov
	inc(eax);
	esp -= 4; _sub_43D3B0(); esp += 4; //call
	to32i(esp+8) = eax; //mov
	eax = to32i(ebx+0x14); //mov
	xor_(edx, edx);
	to32i(esp+0x2C) = eax; //mov
	ah = to8i(ebx+0x3A9); //mov
	to32i(dword_50A9D4) = edx; //mov
	test(ah, (int8_t)0x10);
	if (jnz())
		goto loc_439727;
	eax = 1; //mov
	ebp = to32i(dword_5118A4); //mov
	ecx = to32i(dword_5118A0); //mov
loc_439480:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43973A;
	eax = 1; //mov
loc_439491:
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebx+0x39C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	test(eax, eax);
	if (jle())
		goto loc_439744;
loc_4394B0:
	shl(eax, (int32_t)0x11);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edi = to32i(esp+0x24); //mov
	edx = eax; //mov
	imul32(edx, edi);
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	add(eax, edx);
	test(edx, edx);
	if (jl())
		goto loc_43974B;
	cmp(eax, ecx);
	if (jl())
		goto loc_4394E1;
	sub(eax, ecx);
loc_4394E1:
	edx = to32i(esp+0x30); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x24); //mov
	inc(edx);
	imul32(edx, eax);
	eax = to32i(esp+0x2C); //mov
	add(eax, edx);
	test(edx, edx);
	if (jl())
		goto loc_43975A;
	cmp(eax, ecx);
	if (jl())
		goto loc_439505;
	sub(eax, ecx);
loc_439505:
	edx = to32i(esp+0x2C); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = ebp; //mov
	dx = to16i(edx+eax*4+0x18); //mov
	eax = to32i(esp); //mov
	and_(edx, (int32_t)0xFFFF);
	and_(eax, edx);
	if (jnz())
		goto loc_439547;
	edi = to32i(dword_50ABE8); //mov
	esi = 0xFFFFFFFF; //mov
	sub(edi, (int32_t)0xA0000);
	to32i(dword_50A9D4) = esi; //mov
	to32i(dword_50ABE8) = edi; //mov
loc_439547:
	esi = to32i(esp+0x2C); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(esi, eax);
	shl(esi, (int32_t)2);
	eax = ebp; //mov
	ax = to16i(esi+eax+0x18); //mov
	esi = to32i(esp+4); //mov
	and_(eax, (int32_t)0xFFFF);
	and_(eax, esi);
	if (jnz())
		goto loc_43957A;
	to32i(dword_50A9D4) = eax; //mov
	sub(to32i(dword_50ABEC), (int32_t)0xA0000);
loc_43957A:
	esi = to32i(esp+0x2C); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	esi = ebp; //mov
	ax = to16i(esi+eax*4+0x18); //mov
	esi = to32i(esp+8); //mov
	and_(eax, (int32_t)0xFFFF);
	and_(eax, esi);
	if (jnz())
		goto loc_4395B5;
	eax = to32i(dword_50ABF0); //mov
	edi = 1; //mov
	sub(eax, (int32_t)0xA0000);
	to32i(dword_50A9D4) = edi; //mov
	to32i(dword_50ABF0) = eax; //mov
loc_4395B5:
	esi = to32i(esp+0x20); //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	esi = ebp; //mov
	ax = to16i(esi+eax*4+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	cmp(edx, eax);
	if (jz())
		goto loc_439769;
loc_4395D6:
	to32i(ebx+0x4FC) = 0x49; //mov
loc_4395E0:
	edx = to32i(esp+0x30); //mov
	eax = edx; //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x28) = eax; //mov
	edx = to32i(ebx+0x4FC); //mov
	eax = to32i(dword_50AC6C); //mov
	sub(edx, eax);
	to32i(ebx+0x4FC) = edx; //mov
loc_43961D:
	cmp(to32i(esp+0x28), (int32_t)0);
	if (jnz())
		goto loc_43962C;
	to32i(esp+0x28) = 1; //mov
loc_43962C:
	edi = to32i(esp+0x30); //mov
	xor_(edx, edx);
	test(edi, edi);
	if (jle())
		goto loc_439711;
loc_43963A:
	ebx = to32i(esp+0x24); //mov
	imul32(ebx, edx);
	eax = to32i(esp+0x2C); //mov
	add(eax, ebx);
	test(ebx, ebx);
	if (jl())
		goto loc_4397CA;
	cmp(eax, ecx);
	if (jl())
		goto loc_439655;
	sub(eax, ecx);
loc_439655:
	esi = to32i(esp+0xC); //mov
	ebx = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_439696;
	imul32(esi, eax, 0x24);
	eax = ebp; //mov
	ax = to16i(esi+eax+0x18); //mov
	edi = to32i(esp); //mov
	and_(eax, (int32_t)0xFFFF);
	and_(eax, edi);
	if (jnz())
		goto loc_439696;
	esi = 0xFFFFFFFF; //mov
	edi = to32i(dword_50ABD0); //mov
	to32i(esp+0xC) = eax; //mov
	sub(edi, (int32_t)0x280000);
	to32i(dword_50A9D4) = esi; //mov
	to32i(dword_50ABD0) = edi; //mov
loc_439696:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_4396C2;
	imul32(eax, ebx, 0x24);
	esi = ebp; //mov
	ax = to16i(esi+eax+0x18); //mov
	esi = to32i(esp+4); //mov
	and_(eax, (int32_t)0xFFFF);
	and_(eax, esi);
	if (jnz())
		goto loc_4396C2;
	to32i(esp+0x10) = eax; //mov
	sub(to32i(dword_50ABD4), (int32_t)0x280000);
loc_4396C2:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jz())
		goto loc_4396FF;
	imul32(ebx, 0x24);
	eax = ebp; //mov
	add(ebx, ebp);
	xor_(eax, ebp);
	edi = to32i(esp+8); //mov
	ax = to16i(ebx+0x18); //mov
	and_(eax, edi);
	if (jnz())
		goto loc_4396FF;
	ebx = 1; //mov
	esi = to32i(dword_50ABD8); //mov
	to32i(esp+0x14) = eax; //mov
	sub(esi, (int32_t)0x280000);
	to32i(dword_50A9D4) = ebx; //mov
	to32i(dword_50ABD8) = esi; //mov
loc_4396FF:
	eax = to32i(esp+0x28); //mov
	ebx = to32i(esp+0x30); //mov
	add(edx, eax);
	cmp(edx, ebx);
	if (jl())
		goto loc_43963A;
loc_439711:
	to32i(dword_5118A4) = ebp; //mov
	to32i(dword_5118A0) = ecx; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439727:
	ebp = to32i(dword_5118A4); //mov
	ecx = to32i(dword_5118A0); //mov
	xor_(eax, eax);
	goto loc_439480;
loc_43973A:
	eax = 0xFFFFFFFF; //mov
	goto loc_439491;
loc_439744:
	neg(eax);
	goto loc_4394B0;
loc_43974B:
	test(eax, eax);
	if (jge())
		goto loc_4394E1;
	add(eax, ecx);
	goto loc_4394E1;
loc_43975A:
	test(eax, eax);
	if (jge())
		goto loc_439505;
	add(eax, ecx);
	goto loc_439505;
loc_439769:
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0x18) = eax; //mov
	edi = to32i(esp+0x18); //mov
	shl(eax, (int32_t)3);
	add(eax, edi);
	ax = to16i(esi+eax*4+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	cmp(edx, eax);
	if (jnz())
		goto loc_4395D6;
	cmp(to32i(ebx+0x4FC), (int32_t)0);
	if (jnz())
		goto loc_4395E0;
	edx = to32i(esp+0x30); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)8);
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x28) = eax; //mov
	goto loc_43961D;
loc_4397CA:
	test(eax, eax);
	if (jge())
		goto loc_439655;
	add(eax, ecx);
	goto loc_439655;
}
Fn(void) Game::_sub_4397E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_50A984) = edx; //mov
	to32i(dword_50A980) = edx; //mov
	to32i(dword_50A988) = edx; //mov
loc_4397FE:
	edi = to32i(dword_50A980); //mov
	edx = to32i(dword_50AB88+eax); //mov
	add(eax, (int32_t)0xC);
	ebp = to32i(dword_50A984); //mov
	add(edi, edx);
	edx = to32i(dword_50AB80+eax); //mov
	ebx = to32i(dword_50A988); //mov
	add(ebp, edx);
	edx = to32i(dword_50AB84+eax); //mov
	to32i(dword_50A980) = edi; //mov
	add(ebx, edx);
	to32i(dword_50A984) = ebp; //mov
	to32i(dword_50A988) = ebx; //mov
	cmp(eax, (int32_t)0xD8);
	if (jnz())
		goto loc_4397FE;
	eax = ecx; //mov
	esp -= 4; _sub_439FE0(); esp += 4; //call
	esi = to32i(dword_50A988); //mov
	push32(esi);
	edi = to32i(dword_50A984); //mov
	push32(edi);
	ebp = to32i(dword_50A980); //mov
	xor_(eax, eax);
	push32(ebp);
	al = to8i(ecx+0x8C); //mov
	push32(eax);
	eax = to32i(ecx); //mov
	push32(eax);
	push32(aAiPoaclXDDDDD);
	push32(3);
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439890()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	esi = to32i(eax+0x14); //mov
	edx = to32i(ecx+0x500); //mov
	eax = to32i(dword_50A9CC); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_439A15;
	ebx = to32i(dword_50A954); //mov
loc_4398B7:
	test(ebx, ebx);
	if (jnz())
		goto loc_439A2D;
loc_4398BF:
	eax = esi; //mov
	ebx = (int32_t)(intptr_t)(esi*8+0); //lea
	add(ebx, esi);
	edx = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(edx, ebx);
	xor_(eax, esi);
	al = to8i(edx+0x1F); //mov
	sar(eax, (int32_t)4);
	ebx = 6; //mov
	and_(eax, (int32_t)0xF);
	sub(ebx, eax);
	eax = ebx; //mov
	ebx = to32i(dword_50A9CC); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_439B96;
loc_4398F7:
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	edi = to32i(dword_50A9CC); //mov
	shl(eax, (int32_t)2);
	cmp(edi, (int32_t)7);
	if (jge())
		goto loc_439BE1;
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x20); //mov
	eax = 7; //mov
	sub(eax, edi);
	dec(eax);
	shl(edx, (int32_t)0xF);
	neg(eax);
	imul32(edx, eax);
	eax = to32i(ecx+0x108); //mov
	sub(edx, eax);
loc_439937:
	to32i(ecx+0x394) = edx; //mov
loc_43993D:
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	ax = to16i(edx+eax+0x1C); //mov
	and_(eax, (int32_t)0xFFFF);
	edx = to32i(ecx+0x108); //mov
	shl(eax, (int32_t)8);
	ebx = to32i(ecx+0x394); //mov
	sub(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_439974;
	to32i(ecx+0x394) = eax; //mov
loc_439974:
	edx = (int32_t)(intptr_t)(esi*8+0); //lea
	add(edx, esi);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	ax = to16i(edx+eax+0x1A); //mov
	and_(eax, (int32_t)0xFFFF);
	edx = to32i(ecx+0x108); //mov
	shl(eax, (int32_t)8);
	sub(edx, eax);
	esi = to32i(ecx+0x394); //mov
	eax = edx; //mov
	cmp(edx, esi);
	if (jle())
		goto loc_4399AC;
	to32i(ecx+0x394) = edx; //mov
loc_4399AC:
	edi = to32i(dword_50A9D4); //mov
	test(edi, edi);
	if (jz())
		goto loc_4399D0;
	if (jl())
		goto loc_439C2E;
	edx = to32i(ecx+0x394); //mov
	eax = to32i(ecx+0x108); //mov
	sub(edx, eax);
	to32i(ecx+0x394) = edx; //mov
loc_4399D0:
	cmp(to32i(dword_50A9D4), (int32_t)0);
	if (jnz())
		goto loc_439A0B;
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_439C47;
	eax = 1; //mov
loc_4399EB:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_439C4E;
	edx = to32i(ecx+0x394); //mov
	eax = to32i(ecx+0x3A4); //mov
	add(edx, eax);
	to32i(ecx+0x394) = edx; //mov
loc_439A0B:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439A15:
	if (jge())
		goto loc_439A22;
	ebx = to32i(dword_50A950); //mov
	goto loc_4398B7;
loc_439A22:
	ebx = to32i(dword_50A958); //mov
	goto loc_4398B7;
loc_439A2D:
	edx = esi; //mov
	eax = to32i(ebx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_439B10;
	edx = esi; //mov
	eax = to32i(ebx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
loc_439A49:
	cmp(eax, (int32_t)5);
	if (jge())
		goto loc_4398BF;
	edx = 0xFA; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43B970(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4398BF;
	eax = to32i(ecx+0x108); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebp = to32i(ecx+0x108); //mov
	edi = to32i(dword_50A9CC); //mov
	add(ebp, eax);
	cmp(edi, (int32_t)7);
	if (jl())
		goto loc_439B21;
	eax = (int32_t)(intptr_t)(edi-7); //lea
	edx = to32i(ebx+0x14); //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	edi = (uint8_t)to8i(edx+eax+0x21); //movzx
	edx = to32i(esp); //mov
	shl(edi, (int32_t)0xF);
	imul32(edx, edi);
	add(edi, edx);
loc_439AB6:
	eax = to32i(ebx+0x3AC); //mov
	sub(eax, to32i(ebx+0x214));
	sub(eax, edx);
	edx = eax; //mov
	eax = to32i(ebx+0x3AC); //mov
	add(eax, to32i(ebx+0x214));
	sub(edi, eax);
	cmp(edi, ebp);
	if (jle())
		goto loc_439B5E;
loc_439ADC:
	cmp(edi, edx);
	if (jle())
		goto loc_439B6B;
	ebp = to32i(ebx+0x214); //mov
	eax = to32i(ebx+0x3AC); //mov
	edx = edi; //mov
	ebx = (int32_t)(intptr_t)(eax+ebp); //lea
	sar(edx, (int32_t)0x1F);
	eax = edi; //mov
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ebx, eax);
	to32i(ecx+0x394) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439B10:
	edx = esi; //mov
	eax = to32i(ebx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	neg(eax);
	goto loc_439A49;
loc_439B21:
	eax = 7; //mov
	sub(eax, edi);
	dec(eax);
	edx = to32i(ebx+0x14); //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	edi = to32i(esp); //mov
	dl = to8i(eax+0x20); //mov
	neg(edi);
	shl(edx, (int32_t)0xF);
	imul32(edi, edx);
	eax = edi; //mov
	sub(eax, edx);
	edx = eax; //mov
	goto loc_439AB6;
loc_439B5E:
	cmp(edx, ebp);
	if (jg())
		goto loc_439ADC;
	goto loc_4398BF;
loc_439B6B:
	eax = to32i(ebx+0x3AC); //mov
	esi = to32i(ebx+0x214); //mov
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(ebx, esi);
	sub(ebx, eax);
	to32i(ecx+0x394) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439B96:
	al = to8i(edx+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)7);
	cmp(eax, ebx);
	if (jz())
		goto loc_4398F7;
	cmp(ebx, (int32_t)7);
	if (jge())
		goto loc_439C06;
	dl = to8i(edx+0x20); //mov
	eax = 7; //mov
	sub(eax, ebx);
	and_(edx, (int32_t)0xFF);
	ebx = (int32_t)(intptr_t)(eax-1); //lea
	shl(edx, (int32_t)0xF);
	neg(ebx);
	imul32(ebx, edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(ebx, eax);
	to32i(ecx+0x394) = ebx; //mov
	goto loc_43993D;
loc_439BE1:
	edx = to32i(dword_5118A4); //mov
	al = to8i(edx+eax+0x21); //mov
	and_(eax, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)(edi-7); //lea
	shl(eax, (int32_t)0xF);
	imul32(edx, eax);
	eax = to32i(ecx+0x108); //mov
	add(edx, eax);
	goto loc_439937;
loc_439C06:
	dl = to8i(edx+0x21); //mov
	and_(edx, (int32_t)0xFF);
	sub(ebx, (int32_t)7);
	shl(edx, (int32_t)0xF);
	imul32(ebx, edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ebx, eax);
	to32i(ecx+0x394) = ebx; //mov
	goto loc_43993D;
loc_439C2E:
	ebx = to32i(ecx+0x394); //mov
	eax = to32i(ecx+0x108); //mov
	add(ebx, eax);
	to32i(ecx+0x394) = ebx; //mov
	goto loc_4399D0;
loc_439C47:
	xor_(eax, eax);
	goto loc_4399EB;
loc_439C4E:
	ebp = to32i(ecx+0x394); //mov
	eax = to32i(ecx+0x3A4); //mov
	sub(ebp, eax);
	to32i(ecx+0x394) = ebp; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439C70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_439E51;
	ecx = 0xFFFFFFFF; //mov
loc_439C8D:
	eax = to32i(dword_50A9CC); //mov
	cmp(eax, to32i(esi+0x500));
	if (jz())
		goto loc_439CB2;
	edi = to32i(dword_50A954); //mov
	test(edi, edi);
	if (jz())
		goto loc_439CB2;
	cmp(to16i(edi+0x14E), (int16_t)0);
	if (jbe())
		goto loc_439E5B;
loc_439CB2:
	edi = to32i(dword_50A96C); //mov
loc_439CB8:
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_439DA0;
	eax = to32i(dword_50A9CC); //mov
	cmp(eax, to32i(esi+0x500));
	if (jnz())
		goto loc_439DA0;
	eax = to32i(dword_50A954); //mov
	test(eax, eax);
	if (jz())
		goto loc_439DA0;
	dl = to8i(eax+0x1F4); //mov
	ebx = eax; //mov
	test(dl, (int8_t)0x40);
	if (jnz())
		goto loc_439DA0;
	edx = to32i(esi+0x14); //mov
	eax = to32i(eax+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	ebx = to32i(ebx+0x110); //mov
	add(ebx, to32i(esi+0x110));
	edx = to32i(esi+0x39C); //mov
	imul32(edx, ecx);
	ebp = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = eax; //mov
	to32i(esp+4) = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+4));
	imul32(ebp, ecx);
	imul32(eax, ebx);
	add(eax, ebx);
	add(ebx, ebx);
	shl(ebp, (int32_t)0x12);
	cmp(eax, ebx);
	if (jge())
		goto loc_439F3C;
loc_439D4B:
	test(ebp, ebp);
	if (jle())
		goto loc_439DA0;
	cmp(ebp, eax);
	if (jge())
		goto loc_439DA0;
	edx = 0xCCCC; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edi = eax; //mov
	xor_(edx, edx);
	eax = esi; //mov
	esp -= 4; _sub_43B970(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_439DA0;
	eax = to32i(esi+0x398); //mov
	imul32(eax, ecx);
	imul32(ecx, ebx);
	sub(eax, (int32_t)0xF0000);
	cmp(ecx, eax);
	if (jge())
		goto loc_439DA0;
	ecx = 5; //mov
	ebx = 0x10; //mov
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_441BD0(); esp += 4; //call
loc_439DA0:
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_439F43;
	eax = 1; //mov
loc_439DB2:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_439F4A;
	cmp(edi, to32i(esi+0x398));
	if (jge())
		goto loc_439DCC;
	to32i(esi+0x398) = edi; //mov
loc_439DCC:
	cmp(to32i(esi+0x398), (int32_t)0xFFFEB334);
	if (jge())
		goto loc_439DE2;
	to32i(esi+0x398) = 0xFFFEB334; //mov
loc_439DE2:
	eax = to32i(dword_50A9CC); //mov
	cmp(eax, to32i(esi+0x500));
	if (jz())
		goto loc_439E47;
	ecx = to32i(dword_50A954); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_439E47;
	ebx = to32i(ecx+0x39C); //mov
	eax = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_439F77;
	eax = ebx; //mov
loc_439E0B:
	cmp(eax, (int32_t)0xA0000);
	if (jge())
		goto loc_439E47;
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_439F80;
	eax = 1; //mov
loc_439E24:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_439F9C;
	eax = to32i(esi+0x398); //mov
	cmp(eax, (int32_t)0x40000);
	if (jle())
		goto loc_439F87;
	to32i(esi+0x398) = eax; //mov
loc_439E47:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439E51:
	ecx = 1; //mov
	goto loc_439C8D;
loc_439E5B:
	xor_(edx, edx);
	xor_(eax, eax);
	dx = to16i(esi+6); //mov
	ax = to16i(edi+6); //mov
	sub(edx, eax);
	eax = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_439F19;
loc_439E73:
	shl(eax, (int32_t)0x12);
	edx = to32i(dword_50A954); //mov
	to32i(esp) = eax; //mov
	ebp = to32i(edx+0x39C); //mov
	eax = to32i(esi+0x39C); //mov
	sub(eax, ebp);
	test(eax, eax);
	if (jle())
		goto loc_439F20;
loc_439E95:
	edi = eax; //mov
	edx = to32i(esi+0x3AC); //mov
	eax = to32i(esi+0x394); //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_439F27;
loc_439EAD:
	edx = 1; //mov
	ebp = eax; //mov
	ebx = to32i(esi+0x39C); //mov
	eax = esi; //mov
	esp -= 4; _sub_440270(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_439F2B;
	ebx = eax; //mov
loc_439EC7:
	edx = edi; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = ebx; //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x13333; //mov
	ebx = eax; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(eax, ebx);
	if (jge())
		goto loc_439CB2;
	eax = to32i(dword_50A9CC); //mov
	cmp(eax, to32i(esi+0x500));
	if (jle())
		goto loc_439F31;
	edi = to32i(dword_50A970); //mov
	goto loc_439CB8;
loc_439F19:
	neg(eax);
	goto loc_439E73;
loc_439F20:
	neg(eax);
	goto loc_439E95;
loc_439F27:
	neg(eax);
	goto loc_439EAD;
loc_439F2B:
	ebx = eax; //mov
	neg(ebx);
	goto loc_439EC7;
loc_439F31:
	edi = to32i(dword_50A968); //mov
	goto loc_439CB8;
loc_439F3C:
	eax = ebx; //mov
	goto loc_439D4B;
loc_439F43:
	xor_(eax, eax);
	goto loc_439DB2;
loc_439F4A:
	cmp(edi, to32i(esi+0x398));
	if (jle())
		goto loc_439F58;
	to32i(esi+0x398) = edi; //mov
loc_439F58:
	cmp(to32i(esi+0x398), (int32_t)0x14CCC);
	if (jle())
		goto loc_439DE2;
	to32i(esi+0x398) = 0x14CCC; //mov
	goto loc_439DE2;
loc_439F77:
	eax = ebx; //mov
	neg(eax);
	goto loc_439E0B;
loc_439F80:
	xor_(eax, eax);
	goto loc_439E24;
loc_439F87:
	eax = 0x40000; //mov
	to32i(esi+0x398) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439F9C:
	ebp = to32i(esi+0x398); //mov
	cmp(ebp, (int32_t)0xFFFC0000);
	if (jge())
		goto loc_439FBC;
	eax = ebp; //mov
	to32i(esi+0x398) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_439FBC:
	eax = 0xFFFC0000; //mov
	to32i(esi+0x398) = eax; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_439FE0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = to32i(eax+0x500); //mov
	ecx = to32i(dword_50A980); //mov
	to32i(dword_50A9CC) = edx; //mov
	edx = to32i(dword_50A984); //mov
	cmp(edx, ecx);
	if (jl())
		goto loc_43A026;
loc_439FFF:
	cmp(edx, to32i(dword_50A988));
	if (jge())
		goto loc_43A013;
	eax = to32i(eax+0x500); //mov
	inc(eax);
	to32i(dword_50A9CC) = eax; //mov
loc_43A013:
	esi = to32i(dword_50A9CC); //mov
	test(esi, esi);
	if (jl())
		goto loc_43A037;
	cmp(esi, (int32_t)0xE);
	if (jge())
		goto loc_43A042;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_43A026:
	edx = to32i(eax+0x500); //mov
	dec(edx);
	to32i(dword_50A9CC) = edx; //mov
	edx = ecx; //mov
	goto loc_439FFF;
loc_43A037:
	xor_(eax, eax);
	to32i(dword_50A9CC) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_43A042:
	to32i(dword_50A9CC) = 0xD; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43A050()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(eax, eax);
loc_43A056:
	add(eax, (int32_t)0xC);
	xor_(edx, edx);
	to32i(dword_50AB80+eax) = edx; //mov
	to32i(dword_50AB7C+eax) = edx; //mov
	to32i(dword_50AB84+eax) = edx; //mov
	cmp(eax, (int32_t)0xD8);
	if (jnz())
		goto loc_43A056;
	eax = ecx; //mov
	esp -= 4; _sub_43B970(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43A0BD;
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43A0C0;
	eax = 1; //mov
loc_43A08D:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43A0C4;
	cmp(to32i(dword_50AC94), (int32_t)1);
	if (jnz())
		goto loc_43A0C4;
loc_43A09E:
	eax = to32i(ecx+0x500); //mov
	dec(eax);
	cmp(eax, (int32_t)7);
	if (jge())
		goto loc_43A0B4;
	to32i(dword_50AC48) = 0xFFFF0000; //mov
loc_43A0B4:
	cmp(to32i(ecx+0x500), (int32_t)7);
	if (jl())
		goto loc_43A113;
loc_43A0BD:
	pop32(edx);
	pop32(ecx);
	return;
loc_43A0C0:
	xor_(eax, eax);
	goto loc_43A08D;
loc_43A0C4:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43A10F;
	eax = 1; //mov
loc_43A0D2:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43A0E3;
	cmp(to32i(dword_50AC94), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_43A09E;
loc_43A0E3:
	eax = to32i(ecx+0x500); //mov
	inc(eax);
	cmp(eax, (int32_t)7);
	if (jl())
		goto loc_43A0F9;
	to32i(dword_50AC50) = 0xFFFF0000; //mov
loc_43A0F9:
	cmp(to32i(ecx+0x500), (int32_t)7);
	if (jl())
		goto loc_43A0BD;
	to32i(dword_50AC48) = 0x10000; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_43A10F:
	xor_(eax, eax);
	goto loc_43A0D2;
loc_43A113:
	to32i(dword_50AC50) = 0x10000; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43A120()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edi = to32i(eax+0x1E8); //mov
	shl(edi, (int32_t)2);
	xor_(edx, edx);
	to32i(dword_50A98C+edi) = edx; //mov
	edx = to32i(eax+0x3AC); //mov
	eax = to32i(eax+0x14); //mov
	esp -= 4; _sub_43D310(); esp += 4; //call
	to32i(ecx+0x500) = eax; //mov
	ebx = to32i(ecx+0x214); //mov
	eax = to32i(ecx+0x3AC); //mov
	sub(eax, ebx);
	edx = (int32_t)(intptr_t)(eax+0x8000); //lea
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D310(); esp += 4; //call
	esi = eax; //mov
	ebp = to32i(ecx+0x214); //mov
	eax = to32i(ecx+0x3AC); //mov
	add(eax, ebp);
	edx = (int32_t)(intptr_t)(eax-0x8000); //lea
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D310(); esp += 4; //call
	edx = eax; //mov
	ebx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_43A1C4;
	cmp(eax, (int32_t)0xE);
	if (jge())
		goto loc_43A1C4;
	test(esi, esi);
	if (jl())
		goto loc_43A1C4;
	cmp(esi, (int32_t)0xE);
	if (jge())
		goto loc_43A1C4;
	eax = esi; //mov
	cmp(esi, edx);
	if (jg())
		goto loc_43A1C4;
	edx = edi; //mov
loc_43A1A5:
	esi = 1; //mov
	cl = al; //mov
	shl(esi, cl);
	ecx = esi; //mov
	esi = to32i(dword_50A98C+edx); //mov
	or_(esi, ecx);
	inc(eax);
	to32i(dword_50A98C+edx) = esi; //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_43A1A5;
loc_43A1C4:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43A1D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = to32i(dword_50AC90); //mov
	ebp = to32i(dword_50AC84); //mov
	edx = to32i(dword_511E40); //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jle())
		goto loc_43A218;
	esi = (int32_t)(intptr_t)(edx*4+0); //lea
	xor_(eax, eax);
loc_43A1F7:
	edx = to32i(dword_511D08+eax); //mov
	xor_(ecx, ecx);
	cx = to16i(edx+6); //mov
	cmp(ecx, ebx);
	if (jle())
		goto loc_43A211;
	ebx = ecx; //mov
	edi = edx; //mov
	ebp = to32i(edx+0x1E8); //mov
loc_43A211:
	add(eax, (int32_t)4);
	cmp(eax, esi);
	if (jl())
		goto loc_43A1F7;
loc_43A218:
	to32i(dword_50AC84) = ebp; //mov
	to32i(dword_50AC90) = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43A230()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	esp -= 4; _sub_43C120(); esp += 4; //call
	edi = eax; //mov
	test(to8i(esi+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_43A26F;
	test(to8i(byte_512219), (int8_t)4);
	if (jz())
		goto loc_43A26F;
	cmp(to32i(dword_50A954), (int32_t)0);
	if (jz())
		goto loc_43A26F;
	ecx = 8; //mov
	ebx = 0x20; //mov
	edx = 2; //mov
	eax = esi; //mov
	esp -= 4; _sub_441BD0(); esp += 4; //call
loc_43A26F:
	dh = to8i(esi+0x1F4); //mov
	test(dh, (int8_t)8);
	if (jnz())
		goto loc_43A2E4;
	test(dh, (int8_t)0x20);
	if (jnz())
		goto loc_43A2E4;
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43A2E4;
	test(edi, edi);
	if (jz())
		goto loc_43A2E4;
	cmp(to32i(dword_50A96C), (int32_t)0xFFFD0000);
	if (jle())
		goto loc_43A2E4;
	ebx = to32i(dword_4D6A80); //mov
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, ebx);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	eax = to32i(dword_4D6A7C); //mov
	and_(eax, (int32_t)0xFFFF00);
	shr(eax, (int32_t)8);
	edi = to32i(dword_512208); //mov
	and_(eax, (int32_t)0xFF);
	cmp(edi, (int32_t)1);
	if (jz())
		goto loc_43A2E4;
	cmp(eax, (int32_t)0xA);
	if (jge())
		goto loc_43A2E4;
	cmp(to32i(esi+0x39C), (int32_t)0);
	if (jnz())
		goto loc_43A2EA;
loc_43A2E4:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43A2EA:
	ecx = 8; //mov
	ebx = 0x20; //mov
	edx = 2; //mov
	eax = esi; //mov
	esp -= 4; _sub_441BD0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43A310()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edx = to32i(dword_5118A4); //mov
	bl = to8i(eax+0x1F4); //mov
	ecx = to32i(eax+0x14); //mov
	test(bl, (int8_t)8);
	if (jz())
		goto loc_43A637;
	esi = 0xFFF40000; //mov
loc_43A336:
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	edi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(edi+0x1F); //mov
	sar(ebx, (int32_t)4);
	ebp = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(ebp, ebx);
	ebx = ebp; //mov
	ebp = to32i(eax+0x500); //mov
	dec(ebp);
	cmp(ebp, ebx);
	if (jnz())
		goto loc_43A641;
loc_43A368:
	ebx = to32i(dword_50AC0C); //mov
	add(ebx, esi);
	edi = to32i(eax+0x14); //mov
	to32i(dword_50AC0C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(edi*8+0); //lea
	add(ebx, edi);
	shl(ebx, (int32_t)2);
	add(ebx, edx);
	edi = (uint8_t)to8i(ebx+0x1F); //movzx
	sar(edi, (int32_t)4);
	and_(edi, (int32_t)0xF);
	to32i(esp) = edi; //mov
	edi = (uint8_t)to8i(ebx+0x20); //movzx
	ebp = to32i(esp); //mov
	shl(edi, (int32_t)0xF);
	imul32(edi, ebp);
	bx = to16i(ebx+0x1A); //mov
	and_(ebx, (int32_t)0xFFFF);
	shl(ebx, (int32_t)8);
	sub(ebx, edi);
	cmp(ebx, to32i(eax+0x108));
	if (jge())
		goto loc_43A3C2;
	sub(to32i(dword_50AC0C), (int32_t)0x640000);
loc_43A3C2:
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	edi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(edi+0x1F); //mov
	sar(ebx, (int32_t)4);
	ebp = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(ebp, ebx);
	ebx = ebp; //mov
	ebp = to32i(eax+0x500); //mov
	cmp(ebx, ebp);
	if (jnz())
		goto loc_43A65D;
loc_43A3F3:
	cmp(to32i(eax+0x500), (int32_t)7);
	if (jge())
		goto loc_43A679;
	ebx = 1; //mov
loc_43A405:
	ebp = ebx; //mov
	cmp(to32i(eax+0x500), (int32_t)7);
	if (jl())
		goto loc_43A680;
	ebx = 1; //mov
loc_43A419:
	edi = to32i(dword_50AC10); //mov
	add(edi, esi);
	to32i(esp+8) = ebx; //mov
	to32i(dword_50AC10) = edi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_43A687;
	ebx = to32i(eax+0x14); //mov
	to32i(esp+4) = ebx; //mov
	edi = to32i(esp+4); //mov
	shl(ebx, (int32_t)3);
	add(ebx, edi);
	shl(ebx, (int32_t)2);
	add(ebx, edx);
	edi = (uint8_t)to8i(ebx+0x1F); //movzx
	sar(edi, (int32_t)4);
	and_(edi, (int32_t)0xF);
	to32i(esp) = edi; //mov
	edi = (uint8_t)to8i(ebx+0x20); //movzx
	shl(edi, (int32_t)0xF);
	imul32(edi, to32i(esp));
	bx = to16i(ebx+0x1A); //mov
	and_(ebx, (int32_t)0xFFFF);
	shl(ebx, (int32_t)8);
	sub(ebx, edi);
	cmp(ebx, to32i(eax+0x108));
	if (jge())
		goto loc_43A687;
loc_43A47B:
	sub(to32i(dword_50AC10), (int32_t)0x640000);
loc_43A485:
	test(ebp, ebp);
	if (jz())
		goto loc_43A706;
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	ebp = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(ebp+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	ebx = edi; //mov
	edi = to32i(eax+0x500); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jnz())
		goto loc_43A6EF;
loc_43A4BF:
	edi = to32i(dword_50AC10); //mov
	ebx = to32i(dword_50AC0C); //mov
	sub(edi, (int32_t)0x640000);
	sub(ebx, (int32_t)0x640000);
	to32i(dword_50AC10) = edi; //mov
	to32i(dword_50AC0C) = ebx; //mov
loc_43A4E3:
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	ebp = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(ebp+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	ebx = edi; //mov
	edi = to32i(eax+0x500); //mov
	inc(edi);
	cmp(edi, ebx);
	if (jnz())
		goto loc_43A75F;
loc_43A515:
	ebp = to32i(dword_50AC14); //mov
	add(ebp, esi);
	esi = to32i(eax+0x14); //mov
	ebx = (int32_t)(intptr_t)(esi*8+0); //lea
	add(ebx, esi);
	shl(ebx, (int32_t)2);
	esi = (int32_t)(intptr_t)(edx+ebx); //lea
	to32i(dword_50AC14) = ebp; //mov
	edi = (uint8_t)to8i(esi+0x21); //movzx
	bl = to8i(esi+0x1F); //mov
	shl(edi, (int32_t)0xF);
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	imul32(edi, ebx);
	xor_(ebx, ebx);
	bx = to16i(esi+0x1C); //mov
	shl(ebx, (int32_t)8);
	esi = to32i(eax+0x108); //mov
	sub(ebx, edi);
	cmp(ebx, esi);
	if (jge())
		goto loc_43A56C;
	edi = (int32_t)(intptr_t)(ebp-0x640000); //lea
	to32i(dword_50AC14) = edi; //mov
loc_43A56C:
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	esi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(esi+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	ebx = edi; //mov
	edi = to32i(eax+0x500); //mov
	dec(edi);
	cmp(edi, ebx);
	if (jge())
		goto loc_43A77B;
loc_43A59E:
	sub(to32i(dword_50AC0C), (int32_t)0x3E80000);
loc_43A5A8:
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	esi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(esi+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	ebx = edi; //mov
	edi = to32i(eax+0x500); //mov
	cmp(ebx, edi);
	if (jle())
		goto loc_43A797;
loc_43A5D9:
	sub(to32i(dword_50AC10), (int32_t)0x3E80000);
loc_43A5E3:
	ebx = ecx; //mov
	shl(ecx, (int32_t)3);
	add(ecx, ebx);
	shl(ecx, (int32_t)2);
	ebx = edx; //mov
	add(ecx, edx);
	xor_(ebx, edx);
	bl = to8i(ecx+0x1F); //mov
	esi = 6; //mov
	sar(ebx, (int32_t)4);
	eax = to32i(eax+0x500); //mov
	and_(ebx, (int32_t)0xF);
	inc(eax);
	sub(esi, ebx);
	cmp(eax, esi);
	if (jl())
		goto loc_43A7B3;
	bl = to8i(ecx+0x1F); //mov
	and_(bl, (int8_t)0xF);
	xor_(ecx, ecx);
	cl = bl; //mov
	add(ecx, (int32_t)7);
	cmp(eax, ecx);
	if (jg())
		goto loc_43A7B3;
	to32i(dword_5118A4) = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43A637:
	esi = 0xFFDA0000; //mov
	goto loc_43A336;
loc_43A641:
	bl = to8i(edi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(ebp, ebx);
	if (jz())
		goto loc_43A368;
	goto loc_43A3C2;
loc_43A65D:
	bl = to8i(edi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(ebx, ebp);
	if (jz())
		goto loc_43A3F3;
	goto loc_43A4E3;
loc_43A679:
	xor_(ebx, ebx);
	goto loc_43A405;
loc_43A680:
	xor_(ebx, ebx);
	goto loc_43A419;
loc_43A687:
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_43A485;
	ebx = to32i(eax+0x14); //mov
	to32i(esp+4) = ebx; //mov
	edi = to32i(esp+4); //mov
	shl(ebx, (int32_t)3);
	add(ebx, edi);
	shl(ebx, (int32_t)2);
	edi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(edi+0x21); //mov
	shl(ebx, (int32_t)0xF);
	to32i(esp) = ebx; //mov
	bl = to8i(edi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	to8i(esp+0xC) = bl; //mov
	xor_(ebx, ebx);
	bl = to8i(esp+0xC); //mov
	to32i(esp+4) = ebx; //mov
	ebx = to32i(esp); //mov
	imul32(ebx, to32i(esp+4));
	di = to16i(edi+0x1C); //mov
	and_(edi, (int32_t)0xFFFF);
	shl(edi, (int32_t)8);
	sub(edi, ebx);
	cmp(edi, to32i(eax+0x108));
	if (jl())
		goto loc_43A47B;
	goto loc_43A485;
loc_43A6EF:
	bl = to8i(ebp+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(edi, ebx);
	if (jz())
		goto loc_43A4BF;
loc_43A706:
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_43A4E3;
	ebx = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ebx, ecx);
	shl(ebx, (int32_t)2);
	edi = (int32_t)(intptr_t)(edx+ebx); //lea
	xor_(ebx, ebx);
	bl = to8i(edi+0x1F); //mov
	sar(ebx, (int32_t)4);
	ebp = 6; //mov
	and_(ebx, (int32_t)0xF);
	sub(ebp, ebx);
	ebx = ebp; //mov
	ebp = to32i(eax+0x500); //mov
	dec(ebp);
	cmp(ebp, ebx);
	if (jz())
		goto loc_43A4BF;
	bl = to8i(edi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(ebp, ebx);
	if (jz())
		goto loc_43A4BF;
	goto loc_43A4E3;
loc_43A75F:
	bl = to8i(ebp+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(edi, ebx);
	if (jz())
		goto loc_43A515;
	goto loc_43A56C;
loc_43A77B:
	bl = to8i(esi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(edi, ebx);
	if (jg())
		goto loc_43A59E;
	goto loc_43A5A8;
loc_43A797:
	bl = to8i(esi+0x1F); //mov
	and_(bl, (int8_t)0xF);
	and_(ebx, (int32_t)0xFF);
	add(ebx, (int32_t)7);
	cmp(ebx, edi);
	if (jl())
		goto loc_43A5D9;
	goto loc_43A5E3;
loc_43A7B3:
	sub(to32i(dword_50AC14), (int32_t)0x3E80000);
	to32i(dword_5118A4) = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43A7D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	ebx = to32i(eax+0x39C); //mov
	edx = 0xA000; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43A9B5;
	eax = ebx; //mov
loc_43A7EC:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)5);
	if (jle())
		goto loc_43A9BE;
loc_43A80C:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43A9C8;
	edx = 1; //mov
loc_43A81E:
	xor_(edx, to32i(dword_512228));
	if (jz())
		goto loc_43A9CF;
loc_43A82A:
	test(eax, eax);
	if (jl())
		goto loc_43A9D6;
	edx = to32i(ecx+0x14); //mov
	ebx = to32i(dword_5118A0); //mov
	add(eax, edx);
	cmp(eax, ebx);
	if (jl())
		goto loc_43A843;
	sub(eax, ebx);
loc_43A843:
	esi = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, esi);
	ebx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1F); //mov
	edi = 7; //mov
	sar(ebx, (int32_t)4);
	edx = to32i(ecx+0x500); //mov
	and_(ebx, (int32_t)0xF);
	dec(edx);
	sub(edi, ebx);
	cmp(edx, edi);
	if (jge())
		goto loc_43A9EC;
loc_43A876:
	ebx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(ebx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 7; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	cmp(edx, edi);
	if (jl())
		goto loc_43A8BD;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_43A8BD;
	sub(to32i(dword_50ABB8), (int32_t)0x280000);
loc_43A8BD:
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	ebx = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(dword_5118A4); //mov
	shl(ebx, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 7; //mov
	and_(ebx, (int32_t)0xF);
	edx = to32i(ecx+0x500); //mov
	sub(edi, ebx);
	cmp(edx, edi);
	if (jge())
		goto loc_43AA06;
loc_43A8F1:
	ebx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(eax, ebx);
	ebx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1F); //mov
	sar(ebx, (int32_t)4);
	edi = 7; //mov
	and_(ebx, (int32_t)0xF);
	sub(edi, ebx);
	cmp(edx, edi);
	if (jl())
		goto loc_43A939;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_43A939;
	sub(to32i(dword_50ABBC), (int32_t)0x280000);
loc_43A939:
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	ebx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x1F); //mov
	edx = to32i(ecx+0x500); //mov
	sar(ebx, (int32_t)4);
	esi = 7; //mov
	and_(ebx, (int32_t)0xF);
	inc(edx);
	sub(esi, ebx);
	cmp(edx, esi);
	if (jge())
		goto loc_43AA20;
loc_43A96E:
	ecx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(ecx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(ecx, (int32_t)2);
	add(eax, ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0x1F); //mov
	sar(ecx, (int32_t)4);
	ebx = 7; //mov
	and_(ecx, (int32_t)0xF);
	sub(ebx, ecx);
	cmp(edx, ebx);
	if (jl())
		goto loc_43A9AF;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jle())
		goto loc_43AA3B;
loc_43A9AF:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43A9B5:
	eax = ebx; //mov
	neg(eax);
	goto loc_43A7EC;
loc_43A9BE:
	eax = 5; //mov
	goto loc_43A80C;
loc_43A9C8:
	xor_(edx, edx);
	goto loc_43A81E;
loc_43A9CF:
	neg(eax);
	goto loc_43A82A;
loc_43A9D6:
	add(eax, to32i(ecx+0x14));
	test(eax, eax);
	if (jge())
		goto loc_43A843;
	add(eax, to32i(dword_5118A0));
	goto loc_43A843;
loc_43A9EC:
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_43A876;
	goto loc_43A8BD;
loc_43AA06:
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_43A8F1;
	goto loc_43A939;
loc_43AA20:
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(edx, eax);
	if (jg())
		goto loc_43A96E;
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43AA3B:
	sub(to32i(dword_50ABC0), (int32_t)0x280000);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43AA50()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = 0xF; //mov
	esp -= 4; _sub_43B970(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43AAA9;
	cmp(to32i(dword_511E48), (int32_t)0);
	if (jz())
		goto loc_43AAA9;
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43AAAC;
	eax = 1; //mov
loc_43AA79:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43AAB0;
	cmp(to32i(dword_50AC94), (int32_t)1);
	if (jnz())
		goto loc_43AAB0;
loc_43AA8A:
	eax = to32i(ecx+0x500); //mov
	dec(eax);
	cmp(eax, (int32_t)7);
	if (jge())
		goto loc_43AAA0;
	sub(to32i(dword_50ABF4), (int32_t)0x30000);
loc_43AAA0:
	cmp(to32i(ecx+0x500), (int32_t)7);
	if (jl())
		goto loc_43AAFF;
loc_43AAA9:
	pop32(edx);
	pop32(ecx);
	return;
loc_43AAAC:
	xor_(eax, eax);
	goto loc_43AA79;
loc_43AAB0:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43AAFB;
	eax = 1; //mov
loc_43AABE:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43AACF;
	cmp(to32i(dword_50AC94), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_43AA8A;
loc_43AACF:
	cmp(to32i(ecx+0x500), (int32_t)7);
	if (jl())
		goto loc_43AAE2;
	sub(to32i(dword_50AC04), (int32_t)0x30000);
loc_43AAE2:
	eax = to32i(ecx+0x500); //mov
	inc(eax);
	cmp(eax, (int32_t)7);
	if (jl())
		goto loc_43AAA9;
	sub(to32i(dword_50AC08), (int32_t)0x30000);
	pop32(edx);
	pop32(ecx);
	return;
loc_43AAFB:
	xor_(eax, eax);
	goto loc_43AABE;
loc_43AAFF:
	sub(to32i(dword_50ABF8), (int32_t)0x30000);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43AB10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x44);
	ebx = eax; //mov
	edx = to32i(dword_512228); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jz())
		goto loc_43ABE5;
	ebp = 0xFFFFFFFF; //mov
loc_43AB30:
	eax = to32i(ebx+0x398); //mov
	to32i(dword_50A974) = eax; //mov
	to32i(dword_50A968) = eax; //mov
	to32i(dword_50A978) = eax; //mov
	to32i(dword_50A96C) = eax; //mov
	to32i(dword_50A97C) = eax; //mov
	to32i(dword_50A970) = eax; //mov
	ah = to8i(ebx+0x3A9); //mov
	edx = to32i(ebx+0x1F0); //mov
	test(ah, (int8_t)0x10);
	if (jnz())
		goto loc_43AE87;
	eax = 1; //mov
	xor_(ecx, ecx);
	esi = to32i(dword_511E3C); //mov
	to32i(esp+0x40) = ecx; //mov
	to32i(esp+0x14) = eax; //mov
	cmp(esi, eax);
	if (jle())
		goto loc_43ABDB;
	add(edx, eax);
	to32i(esp+0x10) = edx; //mov
loc_43AB88:
	edx = to32i(esp+0x10); //mov
	add(edx, to32i(dword_511E3C));
	ecx = to32i(dword_511E3C); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = to32i(dword_511AC8+edx*4); //mov
	eax = to32i(esi+0x1E8); //mov
	to32i(esp+0x30) = eax; //mov
	cmp(ebx, esi);
	if (jnz())
		goto loc_43ABEF;
loc_43ABB4:
	edx = to32i(esp+0x14); //mov
	eax = to32i(esp+0x10); //mov
	ecx = to32i(esp+0x40); //mov
	inc(edx);
	inc(eax);
	to32i(esp+0x14) = edx; //mov
	to32i(esp+0x10) = eax; //mov
	cmp(ecx, (int32_t)3);
	if (jz())
		goto loc_43ABDB;
	eax = to32i(esp+0x14); //mov
	cmp(eax, to32i(dword_511E3C));
	if (jl())
		goto loc_43AB88;
loc_43ABDB:
	add(esp, (int32_t)0x44);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43ABE5:
	ebp = 1; //mov
	goto loc_43AB30;
loc_43ABEF:
	cmp(to8i(esi+0x8D), (int8_t)0);
	if (jz())
		goto loc_43ABB4;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_43ABB4;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	edx = eax; //mov
	imul32(edx, ebp);
	test(edx, edx);
	if (jle())
		goto loc_43AE48;
	eax = edx; //mov
loc_43AC1B:
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_43AE51;
	shl(edx, (int32_t)0x10);
loc_43AC27:
	test(to8i(ebx+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43AE64;
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43AE64;
	eax = to32i(ebx+0x1E8); //mov
	eax = to32i(dword_50A9D8+eax*4); //mov
	eax = to32i(eax+0xC4); //mov
	to32i(esp+0xC) = eax; //mov
loc_43AC58:
	eax = to32i(esp+0xC); //mov
	ecx = to32i(ebx+0x39C); //mov
	to32i(esp+0x28) = eax; //mov
	sub(ecx, to32i(esi+0x39C));
	test(ecx, ecx);
	if (jle())
		goto loc_43AE71;
loc_43AC74:
	cmp(ecx, (int32_t)0x190000);
	if (jle())
		goto loc_43AC87;
	eax = to32i(esp+0x28); //mov
	eax = (int32_t)(intptr_t)(eax+eax*4); //lea
	to32i(esp+0x28) = eax; //mov
loc_43AC87:
	cmp(edx, to32i(ebx+0x110));
	if (jle())
		goto loc_43ABB4;
	eax = to32i(esp+0x28); //mov
	shl(eax, (int32_t)0x10);
	cmp(edx, eax);
	if (jge())
		goto loc_43ABB4;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	ch = to8i(ebx+0x1F4); //mov
	edx = (int32_t)(intptr_t)(eax-2); //lea
	test(ch, (int8_t)8);
	if (jz())
		goto loc_43AE78;
	cmp(edx, (int32_t)1);
	if (jge())
		goto loc_43AE78;
	edx = 1; //mov
loc_43ACCF:
	eax = to32i(esp+0x30); //mov
	shl(eax, (int32_t)2);
	cl = to8i(ebx+0x500); //mov
	to32i(esp) = eax; //mov
	eax = 1; //mov
	shl(eax, cl);
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp); //mov
	ecx = to32i(esp+0x1C); //mov
	eax = to32i(dword_50A98C+eax); //mov
	to32i(esp+0x38) = edx; //mov
	test(eax, ecx);
	if (jz())
		goto loc_43AD4A;
	test(edi, ecx);
	if (jnz())
		goto loc_43AD4A;
	imul32(eax, edx, 0x1B77C);
	imul32(edx, 0x50000);
	imul32(eax, ebp);
	imul32(edx, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	to32i(dword_50A978) = eax; //mov
	eax = to32i(esi+0x39C); //mov
	to32i(dword_50A954) = esi; //mov
	add(eax, edx);
	edx = to32i(esp+0x40); //mov
	to32i(dword_50A96C) = eax; //mov
	inc(edx);
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0x40) = edx; //mov
	or_(edi, eax);
loc_43AD4A:
	ecx = to32i(ebx+0x500); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_43ADBC;
	edx = 1; //mov
	dec(ecx);
	eax = to32i(esp+0x30); //mov
	shl(edx, cl);
	test(to32i(dword_50A98C+eax*4), edx);
	if (jz())
		goto loc_43ADBC;
	test(edi, edx);
	if (jnz())
		goto loc_43ADBC;
	imul32(eax, to32i(esp+0x38), 0x1B77C);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	ecx = to32i(esp+0x38); //mov
	to32i(dword_50A974) = eax; //mov
	imul32(eax, ecx, 0x50000);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	to32i(dword_50A968) = eax; //mov
	eax = to32i(esp+0x40); //mov
	to32i(dword_50A950) = esi; //mov
	inc(eax);
	or_(edi, edx);
	to32i(esp+0x40) = eax; //mov
loc_43ADBC:
	ecx = to32i(ebx+0x500); //mov
	inc(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_43ABB4;
	cmp(ecx, (int32_t)0xE);
	if (jge())
		goto loc_43ABB4;
	edx = 1; //mov
	eax = to32i(esp+0x30); //mov
	shl(edx, cl);
	test(to32i(dword_50A98C+eax*4), edx);
	if (jz())
		goto loc_43ABB4;
	test(edi, edx);
	if (jnz())
		goto loc_43ABB4;
	imul32(eax, to32i(esp+0x38), 0x1B77C);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	ecx = to32i(esp+0x38); //mov
	to32i(dword_50A97C) = eax; //mov
	imul32(eax, ecx, 0x50000);
	imul32(eax, ebp);
	to32i(dword_50A958) = esi; //mov
	to32i(esp) = eax; //mov
	or_(edi, edx);
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	esi = to32i(esp+0x40); //mov
	add(eax, ecx);
	inc(esi);
	to32i(dword_50A970) = eax; //mov
	to32i(esp+0x40) = esi; //mov
	goto loc_43ABB4;
loc_43AE48:
	eax = edx; //mov
	neg(eax);
	goto loc_43AC1B;
loc_43AE51:
	edx = esi; //mov
	eax = ebx; //mov
	esp -= 4; _sub_43D450(); esp += 4; //call
	edx = eax; //mov
	imul32(edx, ebp);
	goto loc_43AC27;
loc_43AE64:
	to32i(esp+0xC) = 0x1E; //mov
	goto loc_43AC58;
loc_43AE71:
	neg(ecx);
	goto loc_43AC74;
loc_43AE78:
	test(edx, edx);
	if (jge())
		goto loc_43ACCF;
	xor_(edx, edx);
	goto loc_43ACCF;
loc_43AE87:
	xor_(ecx, ecx);
	eax = to32i(dword_511E3C); //mov
	to32i(esp+0x3C) = ecx; //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_43AEF3;
	add(eax, edx);
	to32i(esp+4) = edx; //mov
	to32i(esp+0x34) = eax; //mov
loc_43AEA4:
	eax = to32i(esp+0x34); //mov
	edx = eax; //mov
	ecx = to32i(dword_511E3C); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = to32i(dword_511AC8+edx*4); //mov
	eax = to32i(esi+0x1E8); //mov
	to32i(esp+0x20) = eax; //mov
	cmp(ebx, esi);
	if (jnz())
		goto loc_43AF9A;
loc_43AECE:
	esi = to32i(esp+8); //mov
	ecx = to32i(esp+0x34); //mov
	eax = to32i(esp+0x3C); //mov
	dec(esi);
	dec(ecx);
	to32i(esp+8) = esi; //mov
	to32i(esp+0x34) = ecx; //mov
	cmp(eax, (int32_t)3);
	if (jz())
		goto loc_43AEF3;
	eax = to32i(esp+0x34); //mov
	cmp(eax, to32i(esp+4));
	if (jg())
		goto loc_43AEA4;
loc_43AEF3:
	edx = to32i(dword_50A954); //mov
	test(edx, edx);
	if (jz())
		goto loc_43ABDB;
	test(to8i(ebx+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_43ABDB;
	edx = to32i(edx+0x14); //mov
	eax = to32i(ebx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, ebp);
	cmp(eax, (int32_t)3);
	if (jge())
		goto loc_43ABDB;
	esi = to32i(dword_50A978); //mov
	ecx = to32i(dword_50A96C); //mov
	eax = to32i(dword_50A954); //mov
	edi = to32i(ebx+0x398); //mov
	sar(esi, (int32_t)1);
	sar(ecx, (int32_t)1);
	eax = to32i(eax+0x39C); //mov
	to32i(dword_50A978) = esi; //mov
	to32i(dword_50A96C) = ecx; //mov
	cmp(eax, edi);
	if (jg())
		goto loc_43ABDB;
	eax = to32i(dword_50A974); //mov
	edx = to32i(dword_50A970); //mov
	ecx = to32i(dword_50A97C); //mov
	ebp = to32i(dword_50A968); //mov
	sar(eax, (int32_t)1);
	sar(edx, (int32_t)1);
	sar(ecx, (int32_t)1);
	sar(ebp, (int32_t)1);
	to32i(dword_50A974) = eax; //mov
	to32i(dword_50A970) = edx; //mov
	to32i(dword_50A97C) = ecx; //mov
	to32i(dword_50A968) = ebp; //mov
	add(esp, (int32_t)0x44);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43AF9A:
	cmp(to8i(esi+0x8D), (int8_t)0);
	if (jz())
		goto loc_43AECE;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_43AECE;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	edx = eax; //mov
	imul32(edx, ebp);
	test(edx, edx);
	if (jge())
		goto loc_43AECE;
	eax = edx; //mov
	neg(eax);
	cmp(eax, (int32_t)0x1E);
	if (jge())
		goto loc_43AECE;
	eax = to32i(esp+0x20); //mov
	shl(eax, (int32_t)2);
	cl = to8i(ebx+0x500); //mov
	to32i(esp) = eax; //mov
	eax = 1; //mov
	shl(eax, cl);
	to32i(esp+0x24) = eax; //mov
	eax = to32i(esp); //mov
	ecx = to32i(esp+0x24); //mov
	eax = to32i(dword_50A98C+eax); //mov
	add(edx, (int32_t)2);
	test(eax, ecx);
	if (jz())
		goto loc_43B059;
	test(edi, ecx);
	if (jnz())
		goto loc_43B059;
	imul32(eax, edx, 0x1B77C);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	to32i(dword_50A978) = eax; //mov
	imul32(eax, edx, 0x50000);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	to32i(dword_50A954) = esi; //mov
	add(eax, ecx);
	ecx = to32i(esp+0x3C); //mov
	to32i(dword_50A96C) = eax; //mov
	inc(ecx);
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x3C) = ecx; //mov
	or_(edi, eax);
loc_43B059:
	eax = to32i(ebx+0x500); //mov
	test(eax, eax);
	if (jle())
		goto loc_43B0D3;
	ecx = (int32_t)(intptr_t)(eax-1); //lea
	eax = 1; //mov
	shl(eax, cl);
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x20); //mov
	ecx = to32i(esp+0x18); //mov
	test(to32i(dword_50A98C+eax*4), ecx);
	if (jz())
		goto loc_43B0D3;
	test(edi, ecx);
	if (jnz())
		goto loc_43B0D3;
	imul32(eax, edx, 0x1B77C);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	add(eax, ecx);
	to32i(dword_50A974) = eax; //mov
	imul32(eax, edx, 0x50000);
	imul32(eax, ebp);
	to32i(esp) = eax; //mov
	ecx = to32i(esp); //mov
	eax = to32i(esi+0x39C); //mov
	to32i(dword_50A950) = esi; //mov
	add(eax, ecx);
	ecx = to32i(esp+0x3C); //mov
	to32i(dword_50A968) = eax; //mov
	inc(ecx);
	eax = to32i(esp+0x18); //mov
	to32i(esp+0x3C) = ecx; //mov
	or_(edi, eax);
loc_43B0D3:
	ecx = to32i(ebx+0x500); //mov
	inc(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_43AECE;
	cmp(ecx, (int32_t)0xE);
	if (jge())
		goto loc_43AECE;
	eax = 1; //mov
	shl(eax, cl);
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0x20); //mov
	ecx = to32i(esp+0x2C); //mov
	test(to32i(dword_50A98C+eax*4), ecx);
	if (jz())
		goto loc_43AECE;
	test(edi, ecx);
	if (jnz())
		goto loc_43AECE;
	imul32(eax, edx, 0x1B77C);
	imul32(edx, 0x50000);
	imul32(eax, ebp);
	imul32(edx, ebp);
	ecx = to32i(esi+0x39C); //mov
	to32i(dword_50A958) = esi; //mov
	add(eax, ecx);
	add(edx, ecx);
	to32i(dword_50A97C) = eax; //mov
	to32i(dword_50A970) = edx; //mov
	edx = to32i(esp+0x3C); //mov
	eax = to32i(esp+0x2C); //mov
	inc(edx);
	or_(edi, eax);
	to32i(esp+0x3C) = edx; //mov
	goto loc_43AECE;
}
Fn(void) Game::_sub_43B160()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	ecx = to32i(eax+0x1F0); //mov
	ah = to8i(eax+0x1F4); //mov
	xor_(ebx, ebx);
	test(ah, (int8_t)8);
	if (jnz())
		goto loc_43B188;
loc_43B17E:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B188:
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_43B970(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43B17E;
	dx = to16i(word_50AC26); //mov
	di = to16i(word_50AC2A); //mov
	ax = to16i(word_50AC2E); //mov
	add(edx, (int32_t)5);
	add(edi, (int32_t)5);
	add(eax, (int32_t)5);
	to16i(word_50AC26) = dx; //mov
	to16i(word_50AC2A) = di; //mov
	dl = to8i(esi+0x3A9); //mov
	to16i(word_50AC2E) = ax; //mov
	test(dl, (int8_t)0x10);
	if (jnz())
		goto loc_43B27D;
	eax = 1; //mov
loc_43B1DC:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43B284;
	to32i(esp+4) = 1; //mov
loc_43B1F0:
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43B291;
	eax = 1; //mov
loc_43B202:
	edx = 1; //mov
	ebp = to32i(dword_511E3C); //mov
	xor_(edi, edi);
	to32i(esp+8) = edx; //mov
	cmp(ebp, edx);
	if (jle())
		goto loc_43B17E;
	to32i(esp) = eax; //mov
	add(eax, ecx);
	to32i(esp+0xC) = eax; //mov
loc_43B224:
	edx = to32i(esp+0xC); //mov
	ecx = to32i(dword_511E3C); //mov
	add(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = to32i(dword_511AC8+edx*4); //mov
	ebp = to32i(ecx+0x1E8); //mov
	cmp(esi, ecx);
	if (jnz())
		goto loc_43B29B;
loc_43B248:
	eax = to32i(esp); //mov
	ebp = to32i(esp+0xC); //mov
	add(ebp, eax);
	eax = to32i(esp+8); //mov
	inc(eax);
	to32i(esp+0xC) = ebp; //mov
	to32i(esp+8) = eax; //mov
	cmp(edi, (int32_t)3);
	if (jz())
		goto loc_43B17E;
	eax = to32i(esp+8); //mov
	cmp(eax, to32i(dword_511E3C));
	if (jl())
		goto loc_43B224;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B27D:
	xor_(eax, eax);
	goto loc_43B1DC;
loc_43B284:
	to32i(esp+4) = 0xFFFFFFFF; //mov
	goto loc_43B1F0;
loc_43B291:
	eax = 0xFFFFFFFF; //mov
	goto loc_43B202;
loc_43B29B:
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jz())
		goto loc_43B248;
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_43B248;
	edx = to32i(esi+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, to32i(esp+4));
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jl())
		goto loc_43B390;
	cmp(eax, (int32_t)3);
	if (jg())
		goto loc_43B390;
	edx = ecx; //mov
	eax = esi; //mov
	ecx = to32i(esp+4); //mov
	esp -= 4; _sub_43D450(); esp += 4; //call
	imul32(eax, ecx);
loc_43B2DF:
	cmp(eax, (int32_t)0xFFFC0000);
	if (jl())
		goto loc_43B248;
	cmp(eax, (int32_t)0x6A0000);
	if (jge())
		goto loc_43B248;
	eax = 1; //mov
	cl = to8i(esi+0x500); //mov
	edx = to32i(dword_50A98C+ebp*4); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jz())
		goto loc_43B31C;
	test(ebx, eax);
	if (jnz())
		goto loc_43B31C;
	inc(edi);
	xor_(ecx, ecx);
	or_(ebx, eax);
	to32i(byte_50AC28) = ecx; //mov
loc_43B31C:
	eax = to32i(esi+0x500); //mov
	test(eax, eax);
	if (jle())
		goto loc_43B34A;
	ecx = (int32_t)(intptr_t)(eax-1); //lea
	eax = 1; //mov
	edx = to32i(dword_50A98C+ebp*4); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jz())
		goto loc_43B34A;
	test(ebx, eax);
	if (jnz())
		goto loc_43B34A;
	inc(edi);
	xor_(ecx, ecx);
	or_(ebx, eax);
	to32i(byte_50AC24) = ecx; //mov
loc_43B34A:
	ecx = to32i(esi+0x500); //mov
	inc(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_43B248;
	cmp(ecx, (int32_t)0xE);
	if (jge())
		goto loc_43B248;
	eax = 1; //mov
	edx = to32i(dword_50A98C+ebp*4); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jz())
		goto loc_43B248;
	test(ebx, eax);
	if (jnz())
		goto loc_43B248;
	inc(edi);
	xor_(ecx, ecx);
	or_(ebx, eax);
	to32i(byte_50AC2C) = ecx; //mov
	goto loc_43B248;
loc_43B390:
	shl(eax, (int32_t)0x12);
	goto loc_43B2DF;
}
Fn(void) Game::_sub_43B3A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	ecx = to32i(eax+0x39C); //mov
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43B4E0;
	eax = 1; //mov
loc_43B3C3:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43B4E7;
	eax = 1; //mov
loc_43B3D4:
	ebx = to32i(dword_511E4C); //mov
	to32i(esp) = eax; //mov
	xor_(ebp, ebp);
	test(ebx, ebx);
	if (jle())
		goto loc_43B4D6;
	to32i(esp+4) = ebp; //mov
loc_43B3EB:
	edi = to32i(esp+4); //mov
	edi = to32i(dword_511C88+edi); //mov
	edx = to32i(esi+0x14); //mov
	eax = to32i(edi+0x14); //mov
	ebx = to32i(esp); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(ebx, eax);
	test(ebx, ebx);
	if (jl())
		goto loc_43B4BD;
	test(ecx, ecx);
	if (jle())
		goto loc_43B4F1;
	edx = ecx; //mov
loc_43B418:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	cmp(ebx, eax);
	if (jge())
		goto loc_43B4BD;
	imul32(eax, ebx, 0x1B77C);
	imul32(eax, to32i(esp));
	test(to8i(esi+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43B4FA;
	edx = 1; //mov
loc_43B449:
	xor_(edx, to32i(dword_512228));
	if (jz())
		goto loc_43B508;
	cmp(eax, ecx);
	if (jge())
		goto loc_43B501;
	edx = ecx; //mov
	sub(edx, eax);
	eax = edx; //mov
	edx = 0xFFFF8000; //mov
loc_43B468:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_43B472:
	ebx = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_43B4BD;
	eax = edi; //mov
	esp -= 4; _sub_45FF80(); esp += 4; //call
	edi = to32i(edi+0x14); //mov
	edx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_43D310(); esp += 4; //call
	edi = to32i(esi+0x500); //mov
	dec(edi);
	edx = eax; //mov
	cmp(eax, edi);
	if (jnz())
		goto loc_43B49E;
	add(to32i(dword_50ABDC), ebx);
loc_43B49E:
	cmp(edx, to32i(esi+0x500));
	if (jnz())
		goto loc_43B4AC;
	add(to32i(dword_50ABE0), ebx);
loc_43B4AC:
	eax = to32i(esi+0x500); //mov
	inc(eax);
	cmp(edx, eax);
	if (jnz())
		goto loc_43B4BD;
	add(to32i(dword_50ABE4), ebx);
loc_43B4BD:
	edi = to32i(esp+4); //mov
	eax = to32i(dword_511E4C); //mov
	add(edi, (int32_t)4);
	inc(ebp);
	to32i(esp+4) = edi; //mov
	cmp(ebp, eax);
	if (jl())
		goto loc_43B3EB;
loc_43B4D6:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B4E0:
	xor_(eax, eax);
	goto loc_43B3C3;
loc_43B4E7:
	eax = 0xFFFFFFFF; //mov
	goto loc_43B3D4;
loc_43B4F1:
	edx = ecx; //mov
	neg(edx);
	goto loc_43B418;
loc_43B4FA:
	xor_(edx, edx);
	goto loc_43B449;
loc_43B501:
	xor_(eax, eax);
	goto loc_43B472;
loc_43B508:
	cmp(eax, ecx);
	if (jle())
		goto loc_43B501;
	edx = 0xFFFF8000; //mov
	sub(eax, ecx);
	goto loc_43B468;
}
Fn(void) Game::_sub_43B520()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43B58D;
	ebp = 0xFFFFFFFF; //mov
loc_43B539:
	test(to8i(ebx+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43B583;
	eax = to32i(ebx+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = to32i(ebx+0x110); //mov
	add(ecx, ecx);
	add(ecx, eax);
	to32i(esp) = ecx; //mov
	ecx = to32i(dword_511E3C); //mov
	xor_(edi, edi);
	test(ecx, ecx);
	if (jle())
		goto loc_43B583;
	xor_(esi, esi);
loc_43B56C:
	ecx = to32i(dword_511B48+esi); //mov
	cmp(ebx, ecx);
	if (jnz())
		goto loc_43B594;
loc_43B576:
	eax = to32i(dword_511E3C); //mov
	inc(edi);
	add(esi, (int32_t)4);
	cmp(edi, eax);
	if (jl())
		goto loc_43B56C;
loc_43B583:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B58D:
	ebp = 1; //mov
	goto loc_43B539;
loc_43B594:
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jz())
		goto loc_43B576;
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_43B576;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, ebp);
	cmp(eax, (int32_t)2);
	if (jg())
		goto loc_43B576;
	cmp(eax, (int32_t)0xFFFFFFFE);
	if (jl())
		goto loc_43B576;
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_43D450(); esp += 4; //call
	imul32(eax, ebp);
	test(eax, eax);
	if (jle())
		goto loc_43B5F0;
loc_43B5CE:
	cmp(eax, to32i(esp));
	if (jge())
		goto loc_43B576;
	eax = to32i(ebx+0x500); //mov
	edx = to32i(ecx+0x500); //mov
	dec(eax);
	cmp(eax, edx);
	if (jnz())
		goto loc_43B5F4;
	sub(to32i(dword_50AC18), (int32_t)0x50000);
	goto loc_43B576;
loc_43B5F0:
	neg(eax);
	goto loc_43B5CE;
loc_43B5F4:
	eax = to32i(ebx+0x500); //mov
	inc(eax);
	cmp(eax, edx);
	if (jnz())
		goto loc_43B576;
	sub(to32i(dword_50AC20), (int32_t)0x50000);
	goto loc_43B576;
}
Fn(void) Game::_sub_43B620()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edx = to32i(dword_511E3C); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jle())
		goto loc_43B64E;
	xor_(ebp, ebp);
loc_43B636:
	ecx = to32i(dword_511B48+ebp); //mov
	cmp(esi, ecx);
	if (jnz())
		goto loc_43B655;
loc_43B640:
	ecx = to32i(dword_511E3C); //mov
	inc(edi);
	add(ebp, (int32_t)4);
	cmp(edi, ecx);
	if (jl())
		goto loc_43B636;
loc_43B64E:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B655:
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jz())
		goto loc_43B640;
	dl = to8i(ecx+0x1F4); //mov
	test(dl, (int8_t)0x40);
	if (jnz())
		goto loc_43B640;
	test(dl, (int8_t)4);
	if (jz())
		goto loc_43B640;
	edx = ecx; //mov
	eax = esi; //mov
	ebx = to32i(ecx+0x500); //mov
	esp -= 4; _sub_43B770(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	ebx = to32i(ecx+0x500); //mov
	esp -= 4; _sub_43B690(); esp += 4; //call
	goto loc_43B640;
}
Fn(void) Game::_sub_43B690()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	eax = edx; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43B712;
	ecx = 0xFFFFFFFF; //mov
loc_43B6A6:
	edx = to32i(esi+0x14); //mov
	eax = to32i(eax+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_43B75F;
	cmp(eax, (int32_t)0x32);
	if (jge())
		goto loc_43B75F;
	cmp(ebx, to32i(esi+0x500));
	if (jnz())
		goto loc_43B75F;
	cmp(to32i(dword_511E48), (int32_t)0);
	if (jle())
		goto loc_43B75F;
	cmp(to16i(esi+6), (int16_t)0x64);
	if (jbe())
		goto loc_43B75F;
	edx = eax; //mov
	edi = to32i(esi+0x39C); //mov
	shl(edx, (int32_t)0x12);
	test(edi, edi);
	if (jle())
		goto loc_43B719;
	ecx = edi; //mov
loc_43B6FA:
	eax = 0x35555; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(ecx, eax);
	if (jg())
		goto loc_43B71F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43B712:
	ecx = 1; //mov
	goto loc_43B6A6;
loc_43B719:
	ecx = edi; //mov
	neg(ecx);
	goto loc_43B6FA;
loc_43B71F:
	eax = to32i(dword_4D6A78); //mov
	ebp = to32i(dword_4D6A80); //mov
	imul32(eax, ebp);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	ecx = 8; //mov
	to32i(dword_4D6A78) = eax; //mov
	eax = to32i(esi+0x3C0); //mov
	ebx = 0x18; //mov
	inc(eax);
	edx = 3; //mov
	to32i(esi+0x3C0) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_441BD0(); esp += 4; //call
loc_43B75F:
	to32i(esi+0x3C0) = 0; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_43B770()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	esi = edx; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43B899;
	edi = 0xFFFFFFFF; //mov
loc_43B78D:
	edx = 0x64; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43B970(); esp += 4; //call
	to32i(esp) = edi; //mov
	test(eax, eax);
	if (jnz())
		goto loc_43B891;
	cmp(to32i(dword_512200), (int32_t)0);
	if (jz())
		goto loc_43B891;
	cmp(to32i(dword_50A9D0), (int32_t)5);
	if (jge())
		goto loc_43B891;
	ebp = to32i(esi+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	edx = ebp; //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	imul32(eax, edi);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jl())
		goto loc_43B8A3;
	cmp(eax, (int32_t)3);
	if (jg())
		goto loc_43B8A3;
	edx = esi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43D450(); esp += 4; //call
	imul32(eax, edi);
loc_43B7EC:
	edi = to32i(ecx+0x1E8); //mov
	edi = to32i(dword_50A9D8+edi*4); //mov
	fild(to32i(edi+0xB4));
	fmul(to64f(dbl_4CB98C));
	fmul(to64f(dbl_4CB994));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+4));
	cmp(eax, (int32_t)0xFFFC0000);
	if (jl())
		goto loc_43B891;
	cmp(eax, to32i(esp+4));
	if (jge())
		goto loc_43B891;
	cmp(eax, to32i(edi+0xB8));
	if (jl())
		goto loc_43B891;
	edi = (int32_t)(intptr_t)(ebp*8+0); //lea
	add(edi, ebp);
	eax = to32i(dword_5118A4); //mov
	shl(edi, (int32_t)2);
	add(eax, edi);
	edi = (uint8_t)to8i(eax+0x1F); //movzx
	sar(edi, (int32_t)4);
	ebp = 7; //mov
	and_(edi, (int32_t)0xF);
	sub(ebp, edi);
	cmp(ebx, ebp);
	if (jl())
		goto loc_43B891;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)6);
	cmp(ebx, eax);
	if (jg())
		goto loc_43B891;
	eax = to32i(esi+0x39C); //mov
	imul32(eax, to32i(esp));
	cmp(eax, (int32_t)0x140000);
	if (jle())
		goto loc_43B891;
	edi = to32i(ecx+0x500); //mov
	cmp(ebx, edi);
	if (jl())
		goto loc_43B8AB;
	if (jnz())
		goto loc_43B8B7;
	add(to32i(dword_50AC40), (int32_t)0x48000);
loc_43B891:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_43B899:
	edi = 1; //mov
	goto loc_43B78D;
loc_43B8A3:
	shl(eax, (int32_t)0x12);
	goto loc_43B7EC;
loc_43B8AB:
	add(to32i(dword_50AC3C), (int32_t)0x48000);
	goto loc_43B891;
loc_43B8B7:
	add(to32i(dword_50AC44), (int32_t)0x48000);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_43B8D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	test(to8i(eax+0x1F4), (int8_t)1);
	if (jz())
		goto loc_43B93B;
	cmp(to32i(edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_43B93B;
	ecx = to32i(edx+0x14); //mov
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0x1F); //mov
	sar(ecx, (int32_t)4);
	ebx = 6; //mov
	and_(ecx, (int32_t)0xF);
	sub(ebx, ecx);
	ecx = ebx; //mov
	ebx = to32i(edx+0x500); //mov
	cmp(ecx, ebx);
	if (jz())
		goto loc_43B93F;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)7);
	cmp(eax, ebx);
	if (jz())
		goto loc_43B93F;
	cmp(ebx, (int32_t)7);
	if (jge())
		goto loc_43B94C;
	add(to16i(word_50ABC6), (int16_t)0x96);
loc_43B93B:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B93F:
	add(to16i(word_50ABCA), (int16_t)0x96);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43B94C:
	add(to16i(word_50ABCE), (int16_t)0x96);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43B970()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebx = edx; //mov
	edx = to32i(eax+0x14); //mov
	xor_(esi, esi);
	edi = to32i(eax+0x1F0); //mov
	si = to16i(eax+6); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	sar(edx, (int32_t)4);
	ebp = 6; //mov
	and_(edx, (int32_t)0xF);
	sub(ebp, edx);
	edx = ebp; //mov
	ebp = to32i(ecx+0x500); //mov
	cmp(edx, ebp);
	if (jz())
		goto loc_43BA0C;
	al = to8i(eax+0x1F); //mov
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	add(eax, (int32_t)7);
	cmp(eax, ebp);
	if (jz())
		goto loc_43BA0C;
	ebp = to32i(dword_511E30); //mov
	ecx = 0x190; //mov
	cmp(ebp, (int32_t)5);
	if (jge())
		goto loc_43B9E0;
	ecx = 0xC8; //mov
loc_43B9E0:
	cmp(to32i(dword_511E30), (int32_t)2);
	if (jge())
		goto loc_43B9EE;
	ecx = 0x32; //mov
loc_43B9EE:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43B9FA;
	sub(ecx, (int32_t)0x1A);
loc_43B9FA:
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	add(ecx, ebx);
	add(eax, esi);
	cmp(eax, ecx);
	if (jle())
		goto loc_43BA14;
loc_43BA0C:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BA14:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43BA20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = 1; //mov
	esi = to32i(eax+0x398); //mov
	dx = to16i(eax+6); //mov
	ebx = to32i(eax+0x39C); //mov
	cmp(dx, (int16_t)0x96);
	if (jnb())
		goto loc_43BA44;
	xor_(edi, edi);
loc_43BA44:
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43BC01;
	ecx = to32i(dword_512228); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_43BB32;
	xor_(ecx, ecx);
	xor_(ebp, ebp);
loc_43BA63:
	cmp(ebx, to32i(dword_50A968+ecx));
	if (jge())
		goto loc_43BA90;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BA90;
	eax = ebx; //mov
	sub(eax, to32i(dword_50A968+ecx));
	edx = 0x14CCC; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB88+ecx), eax);
loc_43BA90:
	cmp(esi, to32i(dword_50A968+ecx));
	if (jge())
		goto loc_43BAC1;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BAC1;
	test(edi, edi);
	if (jz())
		goto loc_43BAC1;
	eax = esi; //mov
	sub(eax, to32i(dword_50A968+ecx));
	edx = 0x8000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB94+ecx), eax);
loc_43BAC1:
	cmp(ebx, to32i(dword_50A974+ecx));
	if (jge())
		goto loc_43BAEE;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BAEE;
	eax = ebx; //mov
	sub(eax, to32i(dword_50A974+ecx));
	edx = 0x8000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABA0+ecx), eax);
loc_43BAEE:
	cmp(esi, to32i(dword_50A974+ecx));
	if (jge())
		goto loc_43BB1F;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BB1F;
	test(edi, edi);
	if (jz())
		goto loc_43BB1F;
	eax = esi; //mov
	sub(eax, to32i(dword_50A974+ecx));
	edx = 0x1999; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABAC+ecx), eax);
loc_43BB1F:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0xC);
	if (jnz())
		goto loc_43BA63;
loc_43BB2B:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BB32:
	xor_(ebp, ebp);
loc_43BB34:
	cmp(ebx, to32i(dword_50A968+ecx));
	if (jle())
		goto loc_43BB61;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BB61;
	eax = ebx; //mov
	sub(eax, to32i(dword_50A968+ecx));
	edx = 0xFFFEB334; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB88+ecx), eax);
loc_43BB61:
	cmp(esi, to32i(dword_50A968+ecx));
	if (jle())
		goto loc_43BB92;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BB92;
	test(edi, edi);
	if (jz())
		goto loc_43BB92;
	eax = esi; //mov
	sub(eax, to32i(dword_50A968+ecx));
	edx = 0xFFFF8000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB94+ecx), eax);
loc_43BB92:
	cmp(ebx, to32i(dword_50A974+ecx));
	if (jle())
		goto loc_43BBBF;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BBBF;
	eax = ebx; //mov
	sub(eax, to32i(dword_50A974+ecx));
	edx = 0xFFFF8000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABA0+ecx), eax);
loc_43BBBF:
	cmp(esi, to32i(dword_50A974+ecx));
	if (jle())
		goto loc_43BBF0;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BBF0;
	test(edi, edi);
	if (jz())
		goto loc_43BBF0;
	eax = esi; //mov
	sub(eax, to32i(dword_50A974+ecx));
	edx = 0xFFFFE667; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABAC+ecx), eax);
loc_43BBF0:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0xC);
	if (jz())
		goto loc_43BB2B;
	goto loc_43BB34;
loc_43BC01:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43BCC6;
	xor_(ecx, ecx);
	edi = 0x8000; //mov
	xor_(ebp, ebp);
loc_43BC17:
	eax = to32i(dword_50A968+ecx); //mov
	cmp(ebx, eax);
	if (jle())
		goto loc_43BC40;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BC40;
	edx = 0x14CCC; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB88+ecx), eax);
loc_43BC40:
	eax = to32i(dword_50A968+ecx); //mov
	cmp(esi, eax);
	if (jle())
		goto loc_43BC66;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BC66;
	edx = edi; //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB94+ecx), eax);
loc_43BC66:
	eax = to32i(dword_50A974+ecx); //mov
	cmp(ebx, eax);
	if (jle())
		goto loc_43BC8C;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BC8C;
	edx = edi; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABA0+ecx), eax);
loc_43BC8C:
	eax = to32i(dword_50A974+ecx); //mov
	cmp(esi, eax);
	if (jle())
		goto loc_43BCB5;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BCB5;
	edx = 0x1999; //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABAC+ecx), eax);
loc_43BCB5:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0xC);
	if (jz())
		goto loc_43BB2B;
	goto loc_43BC17;
loc_43BCC6:
	xor_(ecx, ecx);
	edi = 0xFFFF8000; //mov
	xor_(ebp, ebp);
loc_43BCCF:
	eax = to32i(dword_50A968+ecx); //mov
	cmp(ebx, eax);
	if (jge())
		goto loc_43BCF8;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BCF8;
	edx = 0xFFFEB334; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB88+ecx), eax);
loc_43BCF8:
	eax = to32i(dword_50A968+ecx); //mov
	cmp(esi, eax);
	if (jge())
		goto loc_43BD1E;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BD1E;
	edx = edi; //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50AB94+ecx), eax);
loc_43BD1E:
	eax = to32i(dword_50A974+ecx); //mov
	cmp(ebx, eax);
	if (jge())
		goto loc_43BD44;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BD44;
	edx = edi; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABA0+ecx), eax);
loc_43BD44:
	eax = to32i(dword_50A974+ecx); //mov
	cmp(esi, eax);
	if (jge())
		goto loc_43BD6D;
	cmp(ebp, to32i(dword_50A950+ecx));
	if (jz())
		goto loc_43BD6D;
	edx = 0xFFFFE667; //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_50ABAC+ecx), eax);
loc_43BD6D:
	add(ecx, (int32_t)4);
	cmp(ecx, (int32_t)0xC);
	if (jz())
		goto loc_43BB2B;
	goto loc_43BCCF;
}
Fn(void) Game::_sub_43BD80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43BE02;
	ebx = 0xFFFFFFFF; //mov
loc_43BD98:
	test(to8i(ecx+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43BDFD;
	edx = 0x4CCC; //mov
	eax = to32i(ecx+0x39C); //mov
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
	imul32(edx, ebx);
	test(edx, edx);
	if (jl())
		goto loc_43BE09;
	push32(edi);
	edi = to32i(ecx+0x14); //mov
	ebp = to32i(dword_5118A0); //mov
	add(edx, edi);
	cmp(edx, ebp);
	if (jl())
		goto loc_43BDDE;
	sub(edx, ebp);
loc_43BDDE:
	pop32(edi);
loc_43BDDF:
	eax = to32i(dword_4D5798); //mov
	dl = to8i(edx+eax); //mov
	and_(edx, (int32_t)0xFF);
	if (jz())
		goto loc_43BDFD;
	ebx = to32i(ecx+0x500); //mov
	cmp(edx, ebx);
	if (jl())
		goto loc_43BE18;
	if (jz())
		goto loc_43BE25;
	if (jg())
		goto loc_43BE32;
loc_43BDFD:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BE02:
	ebx = 1; //mov
	goto loc_43BD98;
loc_43BE09:
	add(edx, to32i(ecx+0x14));
	test(edx, edx);
	if (jge())
		goto loc_43BDDF;
	add(edx, to32i(dword_5118A0));
	goto loc_43BDDF;
loc_43BE18:
	add(to16i(word_50AC32), (int16_t)2);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BE25:
	add(to16i(word_50AC36), (int16_t)2);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BE32:
	add(to16i(word_50AC3A), (int16_t)2);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43BE40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	edx = to32i(eax+0x1F0); //mov
	xor_(eax, eax);
	push32(edx);
	al = to8i(esi+0x8C); //mov
	push32(eax);
	ecx = to32i(esi); //mov
	push32(ecx);
	push32(aAel1DDD);
	push32(3);
	add(esp, (int32_t)0x14);
	eax = (int32_t)(intptr_t)(esi+0x9C); //lea
	edx = to32i(esi+0x3B0); //mov
	esp -= 4; _sub_43C1D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43BF25;
	ebp = to32i(esi+0x3B0); //mov
	to32i(esp+4) = eax; //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+0x1E8); //mov
	push32(eax);
	push32(aAel1cD);
	push32(3);
	eax = to32i(esi+0x1F0); //mov
	edx = to32i(ebp+0x1F0); //mov
	add(esp, (int32_t)0xC);
	cmp(eax, edx);
	if (jle())
		goto loc_43BF9B;
	and_(to8i(esi+0x3A9), (int8_t)0xF7);
	ecx = to32i(ebp+0x1F0); //mov
	edx = to32i(dword_511E3C); //mov
	inc(ecx);
	xor_(edi, edi);
	add(ecx, edx);
	test(edx, edx);
	if (jle())
		goto loc_43BF04;
loc_43BED9:
	ebx = to32i(dword_511E3C); //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = to32i(dword_511AC8+edx*4); //mov
	test(to8i(ebx+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_43BF4A;
loc_43BEF8:
	ebx = to32i(dword_511E3C); //mov
	inc(edi);
	inc(ecx);
	cmp(edi, ebx);
	if (jl())
		goto loc_43BED9;
loc_43BF04:
	cmp(to32i(esp+4), (int32_t)0);
	if (jnz())
		goto loc_43C04E;
	push32(aAel3Purg);
	push32(3);
	add(esp, (int32_t)8);
	eax = esi; //mov
	esp -= 4; _sub_43C4D0(); esp += 4; //call
loc_43BF25:
	xor_(eax, eax);
	al = to8i(esi+0x8C); //mov
	push32(eax);
	eax = to32i(esi); //mov
	push32(eax);
	push32(aAelXDD);
	push32(3);
	add(esp, (int32_t)0x10);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43BF4A:
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	push32(eax);
	eax = to32i(ebx+0x1E8); //mov
	push32(eax);
	push32(aAel1aDD);
	push32(3);
	dh = to8i(ebx+0x1F4); //mov
	add(esp, (int32_t)0x10);
	test(dh, (int8_t)4);
	if (jz())
		goto loc_43BEF8;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	to32i(esp+4) = ebx; //mov
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_43BF04;
	to32i(esp) = 1; //mov
	goto loc_43BF04;
loc_43BF9B:
	ah = to8i(esi+0x3A9); //mov
	and_(ah, (int8_t)0xF7);
	dl = ah; //mov
	to8i(esi+0x3A9) = ah; //mov
	or_(dl, (int8_t)8);
	to8i(esi+0x3A9) = dl; //mov
	ecx = to32i(ebp+0x1F0); //mov
	ebx = to32i(dword_511E3C); //mov
	dec(ecx);
	xor_(edi, edi);
	add(ecx, ebx);
	test(ebx, ebx);
	if (jle())
		goto loc_43BF04;
loc_43BFCE:
	ebx = to32i(dword_511E3C); //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = to32i(dword_511AC8+edx*4); //mov
	test(to8i(ebx+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_43BFFD;
loc_43BFED:
	eax = to32i(dword_511E3C); //mov
	inc(edi);
	dec(ecx);
	cmp(edi, eax);
	if (jl())
		goto loc_43BFCE;
	goto loc_43BF04;
loc_43BFFD:
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	push32(eax);
	eax = to32i(ebx+0x1E8); //mov
	push32(eax);
	push32(aAel1bDD);
	push32(3);
	ah = to8i(ebx+0x1F4); //mov
	add(esp, (int32_t)0x10);
	test(ah, (int8_t)4);
	if (jz())
		goto loc_43BFED;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	to32i(esp+4) = ebx; //mov
	cmp(eax, (int32_t)0xFFFFFF9C);
	if (jge())
		goto loc_43BF04;
	to32i(esp) = 1; //mov
	goto loc_43BF04;
loc_43C04E:
	eax = to32i(esi+0x3B0); //mov
	ebx = to32i(eax+0xA4); //mov
	push32(ebx);
	edi = to32i(eax+0xA0); //mov
	push32(edi);
	edx = to32i(eax+0x9C); //mov
	push32(edx);
	ecx = to32i(ebp+0x1E8); //mov
	push32(ecx);
	ebx = to32i(esi+0x4EC); //mov
	eax = to32i(esp+0x14); //mov
	push32(ebx);
	edi = to32i(eax+0x1E8); //mov
	push32(edi);
	eax = to32i(esi); //mov
	push32(eax);
	push32(aAel2DDDDDDD);
	push32(3);
	add(esp, (int32_t)0x24);
	eax = to32i(esp+4); //mov
	to32i(esi+0x3B0) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_43C120(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43BF25;
	eax = to32i(esi+0x3B0); //mov
	edx = ebp; //mov
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_43C170(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43C0F6;
loc_43C0C3:
	ebx = to32i(esi+0x4EC); //mov
	dec(ebx);
	push32(ebx);
	push32(aAel2aD);
	push32(3);
	to32i(esi+0x4EC) = ebx; //mov
	ebp = to32i(esi+0x4EC); //mov
	add(esp, (int32_t)0xC);
	test(ebp, ebp);
	if (jl())
		goto loc_43C10A;
	eax = esi; //mov
	esp -= 4; _sub_43C230(); esp += 4; //call
	goto loc_43BF25;
loc_43C0F6:
	cmp(to32i(esp), (int32_t)0);
	if (jnz())
		goto loc_43C0C3;
	cmp(to32i(dword_511E40), (int32_t)1);
	if (jz())
		goto loc_43C0C3;
	goto loc_43BF25;
loc_43C10A:
	eax = esi; //mov
	esp -= 4; _sub_43C4D0(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C120()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = to32i(dword_511E40); //mov
	esi = (int32_t)(intptr_t)(eax+0x9C); //lea
	xor_(ebx, ebx);
	test(edx, edx);
	if (jle())
		goto loc_43C158;
	xor_(ecx, ecx);
loc_43C139:
	eax = esi; //mov
	edx = to32i(dword_511D08+ecx); //mov
	esp -= 4; _sub_43C170(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43C160;
	edi = to32i(dword_511E40); //mov
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, edi);
	if (jl())
		goto loc_43C139;
loc_43C158:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C160:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C170()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = (int32_t)(intptr_t)(edx+0x9C); //lea
	eax = to32i(eax+8); //mov
	sub(eax, to32i(ebx+8));
	test(eax, eax);
	if (jle())
		goto loc_43C1A3;
loc_43C184:
	edx = eax; //mov
	eax = to32i(ecx); //mov
	sub(eax, to32i(ebx));
	test(eax, eax);
	if (jle())
		goto loc_43C1A7;
loc_43C18E:
	cmp(eax, edx);
	if (jle())
		goto loc_43C1AB;
	sar(edx, (int32_t)2);
	add(eax, edx);
	cmp(eax, (int32_t)0xC80000);
	if (jle())
		goto loc_43C1BC;
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C1A3:
	neg(eax);
	goto loc_43C184;
loc_43C1A7:
	neg(eax);
	goto loc_43C18E;
loc_43C1AB:
	sar(eax, (int32_t)2);
	add(eax, edx);
	cmp(eax, (int32_t)0xC80000);
	if (jle())
		goto loc_43C1BC;
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C1BC:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C1D0()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = (int32_t)(intptr_t)(edx+0x9C); //lea
	eax = to32i(eax+8); //mov
	sub(eax, to32i(ebx+8));
	test(eax, eax);
	if (jle())
		goto loc_43C203;
loc_43C1E4:
	edx = eax; //mov
	eax = to32i(ecx); //mov
	sub(eax, to32i(ebx));
	test(eax, eax);
	if (jle())
		goto loc_43C207;
loc_43C1EE:
	cmp(eax, edx);
	if (jle())
		goto loc_43C20B;
	sar(edx, (int32_t)2);
	add(eax, edx);
	cmp(eax, (int32_t)0xF40000);
	if (jle())
		goto loc_43C21C;
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C203:
	neg(eax);
	goto loc_43C1E4;
loc_43C207:
	neg(eax);
	goto loc_43C1EE;
loc_43C20B:
	sar(eax, (int32_t)2);
	add(eax, edx);
	cmp(eax, (int32_t)0xF40000);
	if (jle())
		goto loc_43C21C;
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C21C:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C230()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ebp = eax; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_4383A8; //mov
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_43C5D0(); esp += 4; //call
	test(to8i(ebp+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43C416;
	eax = 1; //mov
loc_43C25C:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43C41D;
	cmp(to32i(dword_50AC94), (int32_t)1);
	if (jnz())
		goto loc_43C41D;
loc_43C275:
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	ecx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	ebx = to32i(dword_4D6A80); //mov
	add(ecx, eax);
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, ebx);
	xor_(edx, edx);
	dl = to8i(ecx+0x21); //mov
	shl(edx, (int32_t)0xF);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	ebx = to32i(dword_4D6A7C); //mov
	to32i(dword_4D6A78) = eax; //mov
	and_(ebx, (int32_t)0xFFFF00);
	al = to8i(ecx+0x1F); //mov
	shr(ebx, (int32_t)8);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, ebx);
	shr(eax, (int32_t)0x10);
	ecx = edx; //mov
	inc(eax);
	imul32(ecx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(ecx, eax);
loc_43C2E1:
	to32i(ebp+0x394) = ecx; //mov
	eax = to32i(ebp+0x3A4); //mov
	esi = to32i(ebp+0x394); //mov
	add(esi, eax);
	eax = ebp; //mov
	to32i(ebp+0x394) = esi; //mov
	esp -= 4; _sub_438630(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_43D4D0(); esp += 4; //call
	eax = ebp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_43C870(); esp += 4; //call
	eax = to32i(ebp+0x394); //mov
	edi = 0x10000; //mov
	to32i(esp) = eax; //mov
	to32i(esp+4) = edi; //mov
	test(to8i(ebp+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43C4BF;
	ecx = 1; //mov
loc_43C33B:
	ebx = esp; //mov
	eax = to32i(dword_512228); //mov
	edx = to32i(ebp+0x14); //mov
	xor_(ecx, eax);
	eax = ebp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_438630(); esp += 4; //call
	esi = (int32_t)(intptr_t)(ebp+0xDC); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(ebp+0x39C); //mov
	test(edx, edx);
	if (jle())
		goto loc_43C4C6;
	ecx = edx; //mov
loc_43C372:
	edx = to32i(esp+0xC); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	to32i(esp+0xC) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	to32i(esp+0x10) = eax; //mov
	eax = ecx; //mov
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = (int32_t)(intptr_t)(ebp+0xA8); //lea
	to32i(esp+0x14) = eax; //mov
	movsd();
	movsd();
	movsd();
	to32i(ebp+0xE8) = 0; //mov
	to32i(ebp+0xEC) = 0; //mov
	to32i(ebp+0xF0) = 0; //mov
	to16i(ebp+0x14C) = 0; //mov
	to32i(ebp+0x324) = 0; //mov
	to32i(ebp+0x328) = 0; //mov
	to32i(ebp+0x3B8) = 0; //mov
	eax = to32i(ebp+0x3B8); //mov
	to32i(ebp+0x3C0) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C416:
	xor_(eax, eax);
	goto loc_43C25C;
loc_43C41D:
	test(to8i(ebp+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43C4B8;
	eax = 1; //mov
loc_43C42F:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43C444;
	cmp(to32i(dword_50AC94), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_43C275;
loc_43C444:
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	ecx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	edi = to32i(dword_4D6A80); //mov
	add(ecx, eax);
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, edi);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	xor_(eax, eax);
	ebx = to32i(dword_4D6A7C); //mov
	al = to8i(ecx+0x1F); //mov
	and_(ebx, (int32_t)0xFFFF00);
	sar(eax, (int32_t)4);
	shr(ebx, (int32_t)8);
	and_(eax, (int32_t)0xF);
	imul32(eax, ebx);
	xor_(edx, edx);
	dl = to8i(ecx+0x20); //mov
	shl(edx, (int32_t)0xF);
	ecx = edx; //mov
	shr(eax, (int32_t)0x10);
	neg(ecx);
	inc(eax);
	imul32(ecx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ecx, eax);
	goto loc_43C2E1;
loc_43C4B8:
	xor_(eax, eax);
	goto loc_43C42F;
loc_43C4BF:
	xor_(ecx, ecx);
	goto loc_43C33B;
loc_43C4C6:
	ecx = edx; //mov
	neg(ecx);
	goto loc_43C372;
}
Fn(void) Game::_sub_43C4D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	eax = to32i(dword_4D6A78); //mov
	edx = to32i(dword_4D6A80); //mov
	imul32(eax, edx);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	eax = to32i(dword_4D6A7C); //mov
	and_(eax, (int32_t)0xFFFF00);
	ebx = to32i(dword_50AC68); //mov
	shr(eax, (int32_t)8);
	imul32(eax, ebx);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_43839C; //mov
	movsd();
	movsd();
	movsd();
	shr(eax, (int32_t)0x10);
	to8i(ecx+0x8D) = 0; //mov
	inc(eax);
	to32i(ecx+0x3C4) = eax; //mov
	esi = to32i(dword_5118A4); //mov
	edi = (int32_t)(intptr_t)(ecx+0x9C); //lea
	esi = (int32_t)(intptr_t)(esi+0xB4); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(ecx+0x1E8); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)0x11);
	esi = to32i(ecx+0xA0); //mov
	add(eax, (int32_t)0x1900000);
	edx = (int32_t)(intptr_t)(ecx+8); //lea
	add(esi, eax);
	eax = 5; //mov
	to32i(ecx+0xA0) = esi; //mov
	esp -= 4; _sub_44A690(); esp += 4; //call
	to16i(ecx+6) = 5; //mov
	to32i(ecx+0x1F8) = 0; //mov
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(ecx+0xA8); //lea
	to32i(ecx+0x1FC) = 0; //mov
	movsd();
	movsd();
	movsd();
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(ecx+0xE8); //lea
	movsd();
	movsd();
	movsd();
	edi = to32i(dword_50AC8C); //mov
	ah = to8i(ecx+0x3A8); //mov
	inc(edi);
	or_(ah, (int8_t)0x10);
	to32i(dword_50AC8C) = edi; //mov
	to8i(ecx+0x3A8) = ah; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C5D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to32i(esp+0x14) = eax; //mov
	eax = to32i(eax+0x3B0); //mov
	edx = to32i(eax+0x39C); //mov
	cmp(edx, (int32_t)0x40000);
	if (jl())
		goto loc_43C602;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43C63B;
	cmp(edx, (int32_t)0xFFFC0000);
	if (jle())
		goto loc_43C63B;
loc_43C602:
	eax = to32i(esp+0x14); //mov
	dl = to8i(eax+0x3A9); //mov
	to32i(eax+0x4EC) = 0; //mov
	and_(dl, (int8_t)0xF7);
	to8i(eax+0x3A9) = dl; //mov
	bl = to8i(eax+0x3A9); //mov
	edx = (int32_t)(intptr_t)(eax+0x3A8); //lea
	test(bl, (int8_t)0x10);
	if (jz())
		goto loc_43C7AE;
	eax = 0x800; //mov
loc_43C639:
	or_(to32i(edx), eax);
loc_43C63B:
	cmp(to32i(dword_50AC78), (int32_t)0);
	if (jz())
		goto loc_43C64F;
	eax = to32i(esp+0x14); //mov
	and_(to8i(eax+0x3A9), (int8_t)0xEF);
loc_43C64F:
	eax = to32i(esp+0x14); //mov
	test(to8i(eax+0x3A9), (int8_t)8);
	if (jnz())
		goto loc_43C7BF;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43C7B5;
loc_43C66D:
	eax = 1; //mov
loc_43C672:
	to32i(esp+0xC) = eax; //mov
	edx = to32i(dword_4D6A80); //mov
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, edx);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	eax = to32i(dword_4D6A7C); //mov
	and_(eax, (int32_t)0xFFFF00);
	ecx = to32i(dword_511E3C); //mov
	shr(eax, (int32_t)8);
	imul32(ecx, eax);
	eax = to32i(esp+0x14); //mov
	eax = to32i(eax+0x3B0); //mov
	ebx = to32i(dword_511E3C); //mov
	eax = to32i(eax+0x1F0); //mov
	esi = to32i(esp+0xC); //mov
	add(eax, ebx);
	shr(ecx, (int32_t)0x10);
	add(eax, esi);
	ebp = 1; //mov
	add(ecx, eax);
	cmp(ebx, ebp);
	if (jle())
		goto loc_43C71A;
	eax = esi; //mov
	shl(eax, (int32_t)4);
	sub(eax, esi);
	shl(eax, (int32_t)2);
	add(eax, esi);
	to32i(esp+0x10) = eax; //mov
loc_43C6E5:
	ebx = to32i(dword_511E3C); //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = to32i(dword_511AC8+edx*4); //mov
	al = to8i(ebx+0x1F4); //mov
	test(al, (int8_t)0x40);
	if (jz())
		goto loc_43C7D6;
loc_43C709:
	eax = to32i(esp+0xC); //mov
	edx = to32i(dword_511E3C); //mov
	inc(ebp);
	add(ecx, eax);
	cmp(ebp, edx);
	if (jl())
		goto loc_43C6E5;
loc_43C71A:
	ebp = to32i(dword_4D6A80); //mov
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, ebp);
	to32i(dword_4D6A7C) = eax; //mov
	edx = to32i(dword_4D6A7C); //mov
	and_(edx, (int32_t)0xFFFF00);
	and_(eax, (int32_t)0xFFFF);
	shr(edx, (int32_t)8);
	to32i(dword_4D6A78) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shr(eax, (int32_t)0x10);
	edx = to32i(dword_512228); //mov
	add(eax, (int32_t)0x32);
	test(edx, edx);
	if (jz())
		goto loc_43C775;
	edx = to32i(esp+0x14); //mov
	test(to8i(edx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43C775;
	neg(to32i(esp+0xC));
loc_43C775:
	imul32(eax, to32i(esp+0xC));
	test(eax, eax);
	if (jl())
		goto loc_43C83D;
	edx = to32i(esp+0x14); //mov
	edx = to32i(edx+0x3B0); //mov
	ebp = to32i(edx+0x14); //mov
	edx = to32i(dword_5118A0); //mov
	add(eax, ebp);
	cmp(eax, edx);
	if (jl())
		goto loc_43C79D;
	sub(eax, edx);
loc_43C79D:
	edx = to32i(esp+0x14); //mov
	to32i(edx+0x14) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43C7AE:
	xor_(eax, eax);
	goto loc_43C639;
loc_43C7B5:
	eax = 0xFFFFFFFF; //mov
	goto loc_43C672;
loc_43C7BF:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43C66D;
	eax = 0xFFFFFFFF; //mov
	goto loc_43C672;
loc_43C7D6:
	test(al, (int8_t)4);
	if (jz())
		goto loc_43C709;
	eax = to32i(esp+0x14); //mov
	eax = to32i(eax+0x3B0); //mov
	esi = to32i(esp+0x10); //mov
	eax = to32i(eax+0x14); //mov
	add(eax, esi);
	test(esi, esi);
	if (jl())
		goto loc_43C831;
	esi = to32i(dword_5118A0); //mov
	cmp(eax, esi);
	if (jl())
		goto loc_43C801;
	sub(eax, esi);
loc_43C801:
	imul32(eax, 0x24);
	esi = to32i(dword_5118A4); //mov
	edi = esp; //mov
	add(esi, eax);
	edx = ebx; //mov
	eax = esp; //mov
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_43C170(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43C71A;
	eax = to32i(esp+0x14); //mov
	to32i(eax+0x3B0) = ebx; //mov
	goto loc_43C709;
loc_43C831:
	test(eax, eax);
	if (jge())
		goto loc_43C801;
	add(eax, to32i(dword_5118A0));
	goto loc_43C801;
loc_43C83D:
	edx = to32i(esp+0x14); //mov
	edx = to32i(edx+0x3B0); //mov
	add(eax, to32i(edx+0x14));
	test(eax, eax);
	if (jge())
		goto loc_43C79D;
	add(eax, to32i(dword_5118A0));
	edx = to32i(esp+0x14); //mov
	to32i(edx+0x14) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43C870()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	eax = to32i(eax+0x3B0); //mov
	dl = to8i(ecx+0x3A9); //mov
	eax = to32i(eax+0x3A0); //mov
	test(dl, (int8_t)0x10);
	if (jz())
		goto loc_43C8B4;
	eax = ecx; //mov
	esp -= 4; _sub_439080(); esp += 4; //call
	edx = eax; //mov
	to32i(ecx+0x39C) = eax; //mov
	neg(edx);
	to32i(ecx+0x39C) = edx; //mov
	to32i(ecx+0x398) = edx; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_43C906;
	pop32(edx);
	pop32(ecx);
	return;
loc_43C8B4:
	edx = to32i(dword_50AB74); //mov
	sar(eax, (int32_t)1);
	sar(edx, (int32_t)1);
	add(edx, eax);
	eax = ecx; //mov
	to32i(ecx+0x398) = edx; //mov
	esp -= 4; _sub_439030(); esp += 4; //call
	dh = to8i(ecx+0x1F4); //mov
	to32i(ecx+0x398) = eax; //mov
	test(dh, (int8_t)8);
	if (jz())
		goto loc_43C8F4;
	to32i(ecx+0x39C) = 0; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_43C906;
	pop32(edx);
	pop32(ecx);
	return;
loc_43C8F4:
	to32i(ecx+0x39C) = eax; //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_43C906;
	pop32(edx);
	pop32(ecx);
	return;
loc_43C906:
	push32(edi);
	push32(esi);
	edi = to32i(ecx+0x398); //mov
	esi = to32i(ecx+0x39C); //mov
	neg(edi);
	neg(esi);
	to32i(ecx+0x398) = edi; //mov
	to32i(ecx+0x39C) = esi; //mov
	pop32(esi);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43C930()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_43CA60;
	xor_(ecx, ecx);
	to32i(dword_50AD04) = ecx; //mov
loc_43C948:
	push32(edi);
	push32(esi);
	push32(ebx);
	esp -= 4; _sub_43D2D0(); esp += 4; //call
	esi = to32i(dword_511E3C); //mov
	edi = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_43C974;
	ebx = (int32_t)(intptr_t)(esi*4+0); //lea
	xor_(ecx, ecx);
loc_43C965:
	add(ecx, (int32_t)4);
	xor_(ebp, ebp);
	to32i(dword_50A9D4+ecx) = ebp; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_43C965;
loc_43C974:
	eax = to32i(dword_511E30); //mov
	xor_(ebx, ebx);
	test(eax, eax);
	if (jle())
		goto loc_43C9C4;
	xor_(esi, esi);
loc_43C981:
	eax = to32i(dword_511C48+esi); //mov
	ecx = to32i(eax+0x1E8); //mov
	eax = to32i(dword_511E44); //mov
	edx = to32i(dword_512670+ecx*4); //mov
	dec(eax);
	sub(eax, edx);
	edx = edi; //mov
	inc(ebx);
	esp -= 4; _sub_464400(); esp += 4; //call
	to32i(dword_5126B0+ecx*4) = eax; //mov
	esp -= 4; _sub_4643D0(); esp += 4; //call
	to32i(dword_50A9D8+ecx*4) = eax; //mov
	ecx = to32i(dword_511E30); //mov
	add(esi, (int32_t)4);
	cmp(ebx, ecx);
	if (jl())
		goto loc_43C981;
loc_43C9C4:
	eax = to32i(dword_511D08); //mov
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	to32i(dword_50AC90) = eax; //mov
	to32i(dword_50AC84) = ebx; //mov
	to32i(dword_50A958) = ebx; //mov
	to32i(dword_50A954) = ebx; //mov
	to32i(dword_50A950) = ebx; //mov
	to32i(dword_50A964) = ebx; //mov
	to32i(dword_50A960) = ebx; //mov
	to32i(dword_50A95C) = ebx; //mov
	to32i(dword_50A970) = ebx; //mov
	to32i(dword_50A96C) = ebx; //mov
	to32i(dword_50A968) = ebx; //mov
	to32i(dword_50A97C) = ebx; //mov
	to32i(dword_50A978) = ebx; //mov
	to32i(dword_50A974) = ebx; //mov
	to32i(dword_50A988) = ebx; //mov
	to32i(dword_50A984) = ebx; //mov
	to32i(dword_50A980) = ebx; //mov
	to32i(dword_50A9CC) = ebx; //mov
	to32i(dword_50A9D0) = ebx; //mov
	to32i(dword_50A9D4) = ebx; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edi);
loc_43CA4C:
	add(ecx, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_50A988+ecx) = edx; //mov
	cmp(ecx, (int32_t)0x40);
	if (jnz())
		goto loc_43CA4C;
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_43CA60:
	to32i(dword_50AD04) = 1; //mov
	goto loc_43C948;
}
Fn(void) Game::_sub_43CA70()
{
	esp -= 4; _sub_43CF10(); esp += 4; //call
	esp -= 4; _sub_464440(); esp += 4; //call
	esp -= 4; _sub_440420(); esp += 4; //call
}
Fn(void) Game::_sub_43CA90()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_50AC8C) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43CAA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esp -= 4; _sub_440700(); esp += 4; //call
	edi = 4; //mov
	xor_(edx, edx);
	esi = 0x10000; //mov
	to32i(dword_50AA18) = edx; //mov
loc_43CABC:
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	add(edi, (int32_t)4);
	ebx = eax; //mov
	eax = 0x10000; //mov
	add(esi, (int32_t)0x10000);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(dword_50AA14+edi) = eax; //mov
	cmp(edi, (int32_t)0x140);
	if (jnz())
		goto loc_43CABC;
	xor_(ecx, ecx);
	to32i(dword_50AC8C) = ecx; //mov
	esp -= 4; _sub_43D8E0(); esp += 4; //call
	to32i(dword_50AC64) = eax; //mov
	esp -= 4; _sub_43D8B0(); esp += 4; //call
	to32i(dword_50AC68) = eax; //mov
	esp -= 4; _sub_43D860(); esp += 4; //call
	to32i(dword_50AC78) = eax; //mov
	esp -= 4; _sub_43D830(); esp += 4; //call
	to32i(dword_50AC94) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43CB40()
{
	esp -= 4; _sub_440410(); esp += 4; //call
}
Fn(void) Game::_sub_43CB60()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xE8);
	to32i(esp+0xE4) = eax; //mov
	to32i(esp+0xE0) = edx; //mov
	eax = edx; //mov
	edx = to32i(esp+0xE4); //mov
	ebx = 0x1C; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x3B4) = eax; //mov
	add(edx, (int32_t)0x3D0);
	eax = to32i(esp+0xE0); //mov
	ebp = to32i(esp+0xE4); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx-0x14) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	xor_(edi, edi);
	esp -= 4; _sub_475E70(); esp += 4; //call
loc_43CBBC:
	edx = to32i(esp+0xE4); //mov
	esi = (int32_t)(intptr_t)(edi*4+0); //lea
	add(esi, edx);
	eax = 0x10000; //mov
	ebx = to32i(esi+0x3D0); //mov
loc_43CBD7:
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	to32i(esi+0x3EC) = eax; //mov
loc_43CBF2:
	inc(edi);
	add(esi, (int32_t)4);
	cmp(edi, (int32_t)7);
	if (jge())
		goto loc_43CC20;
	cmp(esi, ebp);
	if (jz())
		goto loc_43CBBC;
	ebx = to32i(esi+0x3D0); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_43CC11;
	to32i(esi+0x3EC) = ebx; //mov
	goto loc_43CBF2;
loc_43CC11:
	edx = to32i(esi+0x3CC); //mov
	eax = 0x10000; //mov
	sub(ebx, edx);
	goto loc_43CBD7;
loc_43CC20:
	esi = to32i(esp+0xE4); //mov
	ecx = to32i(dword_512204); //mov
	add(esi, (int32_t)0x408);
	test(ecx, ecx);
	if (jnz())
		goto loc_43CD60;
	ebx = 0xE0; //mov
	eax = to32i(esp+0xE0); //mov
	edx = esi; //mov
	esp -= 4; _sub_475E70(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	edx = to32i(esp+0xE4); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x550) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	ebx = 0xE0; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x554) = eax; //mov
	edx = esp; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475E70(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
loc_43CCA4:
	eax = to32i(esp+0xE0); //mov
	edx = to32i(esp+0xE4); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x4E8) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x4F0) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x4F4) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ebx = to32i(edx+0x4F0); //mov
	sub(ebx, to32i(edx+0x4F4));
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
	edx = to32i(esp+0xE4); //mov
	to32i(edx+0x4F8) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x560) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	add(edx, (int32_t)0x408);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x15C) = eax; //mov
	eax = to32i(esp+0xE4); //mov
	esp -= 4; _sub_440370(); esp += 4; //call
	add(esp, (int32_t)0xE8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43CD60:
	ebx = 0xE0; //mov
	edx = esp; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475E70(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	ebx = 0xE0; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	edx = esi; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475E70(); esp += 4; //call
	eax = to32i(esp+0xE0); //mov
	edx = to32i(esp+0xE4); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x550) = eax; //mov
	eax = to32i(esp+0xE0); //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(edx+0x554) = eax; //mov
	goto loc_43CCA4;
}
Fn(void) Game::_sub_43CDD0()
{
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = eax; //mov
	to32i(eax+0x528) = 0; //mov
	to32i(eax+0x520) = 0; //mov
	to32i(eax+0x4FC) = 0; //mov
	to32i(eax+0x394) = 0; //mov
	to32i(eax+0x398) = 0; //mov
	to32i(eax+0x39C) = 0; //mov
	to32i(eax+0x3A0) = 0; //mov
	to32i(eax+0x3A4) = 0; //mov
	to32i(eax+0x3AC) = 0; //mov
	to32i(eax+0x3A8) = 0; //mov
	to32i(eax+0x214) = 0; //mov
	to32i(eax+0x3B8) = 0; //mov
	to32i(eax+0x3C0) = 0; //mov
	to32i(eax+0x3C4) = 0; //mov
	to32i(eax+0x3C8) = 0; //mov
	to32i(eax+0x3CC) = 0; //mov
	to32i(eax+0x4EC) = 0; //mov
	to32i(eax+0x54C) = 0; //mov
	to32i(eax+0x548) = 0; //mov
	to32i(eax+0x53C) = 0; //mov
	to32i(eax+0x540) = 0; //mov
	to32i(eax+0x544) = 0; //mov
	to32i(eax+0x524) = 1; //mov
	to32i(eax+0x3B0) = eax; //mov
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_43CED9;
	test(to8i(ebp+0x1F4), (int8_t)0x20);
	if (jnz())
		goto loc_43CED9;
	add(esp, (int32_t)0xC);
	pop32(ebp);
	return;
loc_43CED9:
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	esi = (int32_t)(intptr_t)dword_438390; //mov
	eax = ebp; //mov
	xor_(edx, edx);
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_43C4D0(); esp += 4; //call
	ecx = to32i(dword_512228); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0xC);
	pop32(ebp);
}
Fn(void) Game::_sub_43CF10()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)0xFC);
	push32(aTrafcfg_dat);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	eax = to32i(dword_4D5EF0); //mov
	ebx = 1; //mov
	esp -= 4; _sub_49D67C(); esp += 4; //call
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_475F80(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_43CF70(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_43D110(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_43CFF0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	add(esp, (int32_t)0xFC);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_43CF70()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AB58) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AB5C) = eax; //mov
	eax = ecx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AB60) = eax; //mov
loc_43CF98:
	eax = ecx; //mov
	add(edx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AB60+edx) = eax; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_43CF98;
	eax = ecx; //mov
	edx = 0x471C; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_50AB74) = eax; //mov
	xor_(edx, edx);
loc_43CFCA:
	eax = ecx; //mov
	add(edx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AB74+edx) = eax; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_43CFCA;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_43CFF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	edx = eax; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50AC98) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	ecx = to32i(dword_512204); //mov
	to32i(dword_50AC9C) = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_43D0D3;
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50ACA0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50ACA4) = eax; //mov
loc_43D040:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_50ACA8) = eax; //mov
	ebp = (int32_t)(intptr_t)dword_50ACD8; //mov
loc_43D053:
	ecx = (int32_t)(intptr_t)dword_50ACAC; //mov
loc_43D058:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0xC) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x10) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x14) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x18) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x1C) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x20) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x24) = eax; //mov
	eax = edx; //mov
	inc(ebx);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(ecx+0x28) = eax; //mov
	cmp(ebx, (int32_t)2);
	if (jge())
		goto loc_43D0FE;
	test(ebx, ebx);
	if (jz())
		goto loc_43D053;
	ecx = ebp; //mov
	goto loc_43D058;
loc_43D0D3:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50ACA0) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_50ACA4) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	goto loc_43D040;
loc_43D0FE:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D110()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x12C);
	ebx = 0x120; //mov
	edx = esp; //mov
	esp -= 4; _sub_475E70(); esp += 4; //call
	edx = to32i(dword_5121FC); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_43D2A1;
	xor_(ebx, ebx);
loc_43D139:
	edx = to32i(dword_5121F8); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	esi = esp; //mov
	shl(eax, (int32_t)5);
	shl(ebx, (int32_t)3);
	add(esi, eax);
	edi = (int32_t)(intptr_t)(esi+ebx); //lea
	xor_(ecx, ecx);
	to32i(esp+0x128) = esi; //mov
loc_43D15E:
	cmp(to32i(dword_511E30), (int32_t)1);
	if (jle())
		goto loc_43D2BA;
	eax = 1; //mov
loc_43D170:
	shl(eax, (int32_t)3);
	edx = (int32_t)(intptr_t)(esi+eax); //lea
	ebp = to32i(dword_511E48); //mov
	edx = to32i(edx+ecx*4+0x50); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_43D2C1;
	eax = 1; //mov
loc_43D18D:
	shl(eax, (int32_t)3);
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, esi);
	eax = to32i(ebx+eax+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512200); //mov
	shl(edx, (int32_t)3);
	add(edx, esi);
	ebp = to32i(edx+ebx+0x30); //mov
	edx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512204); //mov
	shl(edx, (int32_t)3);
	add(edx, esi);
	ebp = (int32_t)(intptr_t)(edx+ebx); //lea
	ebp = to32i(ebp+0x20); //mov
	edx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(edi+8); //mov
	edx = eax; //mov
	eax = ebp; //mov
	ebp = to32i(esp+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(ebp+0); //mov
	edx = eax; //mov
	eax = ebp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+ebx+0x120) = eax; //mov
	eax = to32i(esp+0x128); //mov
	add(edi, (int32_t)4);
	add(eax, (int32_t)4);
	inc(ecx);
	to32i(esp+0x128) = eax; //mov
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_43D15E;
	eax = to32i(esp+0x120); //mov
	to32i(dword_50AC80) = eax; //mov
	eax = to32i(esp+0x124); //mov
	ebx = to32i(esp+0x120); //mov
	to32i(dword_50AC88) = eax; //mov
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
	ebx = to32i(dword_50AC88); //mov
	to32i(dword_50AC74) = eax; //mov
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
	to32i(dword_50AC7C) = eax; //mov
	add(esp, (int32_t)0x12C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D2A1:
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_43D2B0;
	ebx = 1; //mov
	goto loc_43D139;
loc_43D2B0:
	ebx = 2; //mov
	goto loc_43D139;
loc_43D2BA:
	xor_(eax, eax);
	goto loc_43D170;
loc_43D2C1:
	xor_(eax, eax);
	goto loc_43D18D;
}
Fn(void) Game::_sub_43D2D0()
{
	eax = to32i(dword_5121F8); //mov
	cmp(eax, (int32_t)1);
	if (jnb())
		goto loc_43D2ED;
	test(eax, eax);
	if (jnz())
		goto loc_43D2F2;
	cmp(to32i(dword_511E30), (int32_t)1);
	if (jg())
		goto loc_43D2F8;
	al = 2; //mov
	eax = al; //movsx
	return;
loc_43D2ED:
	if (jbe())
		goto loc_43D2FE;
	cmp(eax, (int32_t)2);
loc_43D2F2:
	xor_(al, al);
	eax = al; //movsx
	return;
loc_43D2F8:
	al = 3; //mov
	eax = al; //movsx
	return;
loc_43D2FE:
	al = 1; //mov
	eax = al; //movsx
}
Fn(void) Game::_sub_43D310()
{
	push32(ebx);
	push32(ecx);
	ebx = edx; //mov
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	shl(eax, (int32_t)2);
	test(ebx, ebx);
	if (jl())
		goto loc_43D37F;
	edx = to32i(dword_5118A4); //mov
	ecx = 7; //mov
	dl = to8i(edx+eax+0x21); //mov
	and_(edx, (int32_t)0xFF);
loc_43D337:
	shl(edx, (int32_t)0xF);
	shl(edx, (int32_t)2);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(dword_50AA18+eax*4); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	add(ecx, eax);
	test(ecx, ecx);
	if (jl())
		goto loc_43D393;
	eax = ecx; //mov
	cmp(eax, (int32_t)0xD);
	if (jle())
		goto loc_43D37C;
	eax = 0xD; //mov
loc_43D37C:
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D37F:
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x20); //mov
	ecx = 6; //mov
	goto loc_43D337;
loc_43D393:
	xor_(eax, eax);
	cmp(eax, (int32_t)0xD);
	if (jle())
		goto loc_43D37C;
	eax = 0xD; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D3B0()
{
	push32(ecx);
	ecx = 7; //mov
	sub(ecx, eax);
	eax = ecx; //mov
	ecx = 8; //mov
	sub(ecx, eax);
	eax = ecx; //mov
	test(ecx, ecx);
	if (jl())
		goto loc_43D3E1;
	cmp(ecx, (int32_t)0x10);
	if (jl())
		goto loc_43D3D1;
	eax = 0xF; //mov
loc_43D3D1:
	ecx = 0xF; //mov
	sub(ecx, eax);
	eax = 1; //mov
	shl(eax, cl);
	pop32(ecx);
	return;
loc_43D3E1:
	xor_(eax, ecx);
	ecx = 0xF; //mov
	sub(ecx, eax);
	eax = 1; //mov
	shl(eax, cl);
	pop32(ecx);
}
Fn(void) Game::_sub_43D400()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = to32i(dword_5118A0); //mov
	esi = eax; //mov
	ebx = edx; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	eax = esi; //mov
	sub(eax, ebx);
	test(eax, eax);
	if (jle())
		goto loc_43D426;
	cmp(eax, edx);
	if (jg())
		goto loc_43D434;
loc_43D426:
	test(eax, eax);
	if (jl())
		goto loc_43D438;
loc_43D42A:
	to32i(dword_5118A0) = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D434:
	sub(eax, ecx);
	goto loc_43D42A;
loc_43D438:
	neg(edx);
	cmp(eax, edx);
	if (jge())
		goto loc_43D42A;
	add(eax, ecx);
	to32i(dword_5118A0) = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D450()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	ecx = to32i(edx+0x9C); //mov
	ebx = to32i(eax+0x9C); //mov
	esi = to32i(eax+0xA0); //mov
	sub(ecx, ebx);
	edi = to32i(eax+0xA4); //mov
	to32i(esp) = ecx; //mov
	ecx = to32i(edx+0xA0); //mov
	edx = to32i(edx+0xA4); //mov
	sub(ecx, esi);
	esi = (int32_t)(intptr_t)(eax+0x130); //lea
	sub(edx, edi);
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = to32i(esp); //mov
	movsd();
	movsd();
	movsd();
	to32i(esp+8) = edx; //mov
	edx = to32i(esp+0xC); //mov
	to32i(esp+4) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	ecx = eax; //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D4D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_4D6A80); //mov
	ebx = to32i(dword_4D6A78); //mov
	imul32(ebx, ecx);
	edx = ebx; //mov
	and_(edx, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = edx; //mov
	edx = ebx; //mov
	and_(edx, (int32_t)0xFFFF00);
	shr(edx, (int32_t)8);
	and_(edx, (int32_t)3);
	cl = to8i(eax+0x1F4); //mov
	shl(edx, (int32_t)2);
	test(cl, (int8_t)8);
	if (jz())
		goto loc_43D530;
	ecx = to32i(eax+0x1E8); //mov
	ecx = to32i(dword_50A9D8+ecx*4); //mov
	edx = to32i(ecx+edx+0xC8); //mov
	to32i(eax+0x3A4) = edx; //mov
	to32i(dword_4D6A7C) = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D530:
	edx = to32i(dword_50AB78+edx); //mov
	to32i(eax+0x3A4) = edx; //mov
	to32i(dword_4D6A7C) = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D550()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43D635;
	edx = to32i(eax+0x1E8); //mov
	add(edx, edx);
	ecx = edx; //mov
	neg(ecx);
	test(ecx, ecx);
	if (jl())
		goto loc_43D61B;
	ecx = to32i(eax+0x14); //mov
	sub(ecx, edx);
	ebx = to32i(dword_5118A0); //mov
	edx = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_43D588;
	sub(edx, ebx);
loc_43D588:
	bl = to8i(eax+0x1F4); //mov
	test(bl, (int8_t)4);
	if (jnz())
		goto loc_43D616;
	test(bl, (int8_t)8);
	if (jz())
		goto loc_43D5A8;
	ecx = edx; //mov
	sar(ecx, (int32_t)4);
	shl(ecx, (int32_t)4);
	cmp(ecx, edx);
	if (jnz())
		goto loc_43D616;
loc_43D5A8:
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_43D5BB;
	ecx = edx; //mov
	sar(ecx, (int32_t)1);
	add(ecx, ecx);
	cmp(ecx, edx);
	if (jnz())
		goto loc_43D616;
loc_43D5BB:
	test(to8i(eax+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43D66F;
	edx = to32i(eax+0x1E8); //mov
	ecx = to32i(dword_50A9D8+edx*4); //mov
	ecx = to32i(ecx+0xD8); //mov
loc_43D5DB:
	edi = to32i(dword_4D6A80); //mov
	edx = to32i(dword_4D6A78); //mov
	imul32(edx, edi);
	to32i(dword_4D6A7C) = edx; //mov
	and_(edx, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = edx; //mov
	edx = to32i(dword_4D6A7C); //mov
	and_(edx, (int32_t)0xFFFF00);
	shr(edx, (int32_t)8);
	imul32(edx, ecx);
	shr(edx, (int32_t)0x10);
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_43D67A;
loc_43D616:
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D61B:
	ecx = to32i(eax+0x14); //mov
	sub(ecx, edx);
	edx = ecx; //mov
	test(ecx, ecx);
	if (jge())
		goto loc_43D588;
	add(edx, to32i(dword_5118A0));
	goto loc_43D588;
loc_43D635:
	edx = to32i(eax+0x1E8); //mov
	add(edx, edx);
	test(edx, edx);
	if (jl())
		goto loc_43D659;
	push32(esi);
	esi = to32i(eax+0x14); //mov
	edi = to32i(dword_5118A0); //mov
	add(edx, esi);
	cmp(edx, edi);
	if (jl())
		goto loc_43D653;
	sub(edx, edi);
loc_43D653:
	pop32(esi);
	goto loc_43D588;
loc_43D659:
	add(edx, to32i(eax+0x14));
	test(edx, edx);
	if (jge())
		goto loc_43D588;
	add(edx, to32i(dword_5118A0));
	goto loc_43D588;
loc_43D66F:
	ecx = to32i(eax+0x564); //mov
	goto loc_43D5DB;
loc_43D67A:
	esp -= 4; _sub_43D4D0(); esp += 4; //call
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43D690()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	cmp(to32i(eax+0x160), (int32_t)0);
	if (jz())
		goto loc_43D6C5;
	ebx = to32i(eax+0x164); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_43D6C5;
	esi = to32i(eax+0x39C); //mov
	test(esi, esi);
	if (jle())
		goto loc_43D6CA;
	eax = esi; //mov
loc_43D6B5:
	cmp(eax, (int32_t)0xA0000);
	if (jl())
		goto loc_43D6D0;
	cmp(to32i(ecx+0x53C), (int32_t)0);
	if (jle())
		goto loc_43D6EA;
loc_43D6C5:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D6CA:
	eax = esi; //mov
	neg(eax);
	goto loc_43D6B5;
loc_43D6D0:
	edx = 0x60; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43DEB0(); esp += 4; //call
	cmp(to32i(ecx+0x53C), (int32_t)0);
	if (jle())
		goto loc_43D6EA;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D6EA:
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_43D6C5;
	test(to8i(ecx+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43D6C5;
	cmp(to32i(dword_512200), (int32_t)0);
	if (jz())
		goto loc_43D6C5;
	eax = to32i(ecx+0x544); //mov
	to32i(ecx+0x53C) = 0; //mov
	cmp(ebx, eax);
	if (jnz())
		goto loc_43D74C;
loc_43D719:
	edx = to32i(ecx+0x540); //mov
	inc(edx);
	ebx = to32i(ecx+0x1E8); //mov
	to32i(ecx+0x540) = edx; //mov
	ebx = to32i(dword_50A9D8+ebx*4); //mov
	cmp(edx, to32i(ebx+0xDC));
	if (jle())
		goto loc_43D6C5;
	eax = to32i(ebx+0xE0); //mov
	to32i(ecx+0x53C) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43D74C:
	to32i(ecx+0x540) = 0; //mov
	to32i(ecx+0x544) = ebx; //mov
	goto loc_43D719;
}
Fn(void) Game::_sub_43D760()
{
	push32(edx);
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_43D77C;
	edx = to32i(eax+0x39C); //mov
	test(edx, edx);
	if (jle())
		goto loc_43D77E;
	cmp(edx, (int32_t)0xA0000);
	if (jl())
		goto loc_43D78A;
loc_43D77C:
	pop32(edx);
	return;
loc_43D77E:
	neg(edx);
	cmp(edx, (int32_t)0xA0000);
	if (jl())
		goto loc_43D78A;
	pop32(edx);
	return;
loc_43D78A:
	edx = 0x60; //mov
	esp -= 4; _sub_43DEB0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_43D7A0()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D7C2;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD30+eax); //mov
	pop32(edx);
	return;
loc_43D7C2:
	eax = 0x190; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D7D0()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D7F2;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD2C+eax); //mov
	pop32(edx);
	return;
loc_43D7F2:
	eax = 0x10000; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D800()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D822;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD28+eax); //mov
	pop32(edx);
	return;
loc_43D822:
	eax = 0x10000; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D830()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D852;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD24+eax); //mov
	pop32(edx);
	return;
loc_43D852:
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D860()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jl())
		goto loc_43D887;
	eax = to32i(dword_5118A4); //mov
	al = to8i(eax+0x43); //mov
	and_(eax, (int32_t)0xFF);
	sar(eax, (int32_t)4);
	test(al, (int8_t)0xF);
	if (jnz())
		goto loc_43D89D;
	eax = 1; //mov
	pop32(edx);
	return;
loc_43D887:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD20+eax); //mov
	pop32(edx);
	return;
loc_43D89D:
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_43D8B0()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D8D2;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD1C+eax); //mov
	pop32(edx);
	return;
loc_43D8D2:
	eax = 0x1F4; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D8E0()
{
	push32(edx);
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)9);
	if (jge())
		goto loc_43D902;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_50AD18+eax); //mov
	pop32(edx);
	return;
loc_43D902:
	eax = 0xC; //mov
	pop32(edx);
}
Fn(void) Game::_sub_43D920()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edx = to32i(eax+0x394); //mov
	push32(edx);
	ecx = to32i(eax+0x398); //mov
	push32(ecx);
	ebx = to32i(eax+0xF0); //mov
	push32(ebx);
	edi = to32i(eax+0xEC); //mov
	push32(edi);
	ebp = to32i(eax+0xE8); //mov
	push32(ebp);
	eax = to32i(eax+0xB0); //mov
	push32(eax);
	edx = to32i(esi+0xAC); //mov
	push32(edx);
	ecx = to32i(esi+0xA8); //mov
	push32(ecx);
	ebx = to32i(esi+0xA4); //mov
	push32(ebx);
	edi = to32i(esi+0xA0); //mov
	push32(edi);
	ebp = to32i(esi+0x9C); //mov
	xor_(eax, eax);
	push32(ebp);
	ax = to16i(esi+0x14C); //mov
	push32(eax);
	xor_(eax, eax);
	al = to8i(esi+0x8C); //mov
	push32(eax);
	eax = to32i(esi); //mov
	push32(eax);
	push32(aAiAip1DDDDDDDD);
	push32(3);
	add(esp, (int32_t)0x40);
	push32(dword_50AD10);
	edx = 1; //mov
	push32(dword_50AD0C);
	eax = edx; //mov
	push32(dword_50AD08);
	ecx = to32i(esi); //mov
	ebx = to32i(esi+0x88); //mov
	esp -= 4; _sub_471620(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43DA4A;
	test(to8i(esi+0x1F4), (int8_t)2);
	if (jz())
		goto loc_43DA01;
	eax = to32i(esi+0xA8); //mov
	edx = to32i(esi+0xB0); //mov
	test(eax, eax);
	if (jle())
		goto loc_43DA51;
loc_43D9E2:
	ecx = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_43DA55;
	eax = edx; //mov
loc_43D9EE:
	cmp(ecx, eax);
	if (jle())
		goto loc_43DA5B;
	sar(eax, (int32_t)2);
loc_43D9F9:
	add(eax, ecx);
	to32i(esi+0x3A0) = eax; //mov
loc_43DA01:
	eax = esi; //mov
	esp -= 4; _sub_43DB50(); esp += 4; //call
	test(to8i(esi+0x3A8), (int8_t)0x10);
	if (jnz())
		goto loc_43DA21;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jnz())
		goto loc_43DA21;
	eax = esi; //mov
	esp -= 4; _sub_43BE40(); esp += 4; //call
loc_43DA21:
	test(to8i(esi+0x3A8), (int8_t)0x10);
	if (jnz())
		goto loc_43DA60;
	cmp(to32i(dword_540F44), (int32_t)1);
	if (jz())
		goto loc_43DAAC;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_43DA4A;
	cmp(to16i(esi+0x14C), (int16_t)0);
	if (jz())
		goto loc_43DA69;
loc_43DA4A:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DA51:
	neg(eax);
	goto loc_43D9E2;
loc_43DA55:
	eax = edx; //mov
	neg(eax);
	goto loc_43D9EE;
loc_43DA5B:
	sar(ecx, (int32_t)2);
	goto loc_43D9F9;
loc_43DA60:
	eax = esi; //mov
	esp -= 4; _sub_43F5D0(); esp += 4; //call
	goto loc_43DA4A;
loc_43DA69:
	to32i(esi+0xAC) = 0; //mov
	to32i(esi+0xB0) = 0; //mov
	to32i(esi+0xE8) = 0; //mov
	to32i(esi+0xEC) = 0; //mov
	to32i(esi+0xF0) = 0; //mov
	to32i(esi+0xA8) = 0; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DAAC:
	eax = esi; //mov
	esp -= 4; _sub_43FD90(); esp += 4; //call
	cmp(to8i(esi+0x8C), (int8_t)0);
	if (jz())
		goto loc_43DB40;
	eax = esi; //mov
	esp -= 4; _sub_43F830(); esp += 4; //call
loc_43DAC7:
	ecx = to32i(esi+0x394); //mov
	push32(ecx);
	ebx = to32i(esi+0x398); //mov
	push32(ebx);
	edi = to32i(esi+0xF0); //mov
	push32(edi);
	ebp = to32i(esi+0xEC); //mov
	push32(ebp);
	eax = to32i(esi+0xE8); //mov
	push32(eax);
	edx = to32i(esi+0xB0); //mov
	push32(edx);
	ecx = to32i(esi+0xAC); //mov
	push32(ecx);
	ebx = to32i(esi+0xA8); //mov
	push32(ebx);
	edi = to32i(esi+0xA4); //mov
	push32(edi);
	ebp = to32i(esi+0xA0); //mov
	push32(ebp);
	eax = to32i(esi+0x9C); //mov
	push32(eax);
	xor_(eax, eax);
	ax = to16i(esi+0x14C); //mov
	push32(eax);
	xor_(eax, eax);
	al = to8i(esi+0x8C); //mov
	push32(eax);
	edx = to32i(esi); //mov
	push32(edx);
	push32(aAiAipXDDDDDDDD);
	push32(3);
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DB40:
	eax = esi; //mov
	esp -= 4; _sub_43DBF0(); esp += 4; //call
	goto loc_43DAC7;
}
Fn(void) Game::_sub_43DB50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = to32i(eax+0x3AC); //mov
	cmp(ecx, to32i(eax+0x394));
	if (jle())
		goto loc_43DB9F;
	cmp(ecx, to32i(eax+0x548));
	if (jge())
		goto loc_43DB9F;
	to32i(eax+0x548) = ecx; //mov
loc_43DB72:
	ebp = to32i(eax+0x394); //mov
	edx = to32i(eax+0x548); //mov
	cmp(edx, ebp);
	if (jge())
		goto loc_43DBC5;
	edi = (int32_t)(intptr_t)(edx+0x3333); //lea
	ebp = to32i(eax+0x394); //mov
	to32i(eax+0x548) = edi; //mov
	cmp(edi, ebp);
	if (jg())
		goto loc_43DBBD;
loc_43DB98:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DB9F:
	esi = to32i(eax+0x3AC); //mov
	cmp(esi, to32i(eax+0x548));
	if (jle())
		goto loc_43DB72;
	cmp(esi, to32i(eax+0x394));
	if (jge())
		goto loc_43DB72;
	to32i(eax+0x548) = esi; //mov
	goto loc_43DB72;
loc_43DBBD:
	to32i(eax+0x548) = ebp; //mov
	goto loc_43DB98;
loc_43DBC5:
	if (jle())
		goto loc_43DB98;
	ebx = (int32_t)(intptr_t)(edx-0x3333); //lea
	esi = to32i(eax+0x394); //mov
	to32i(eax+0x548) = ebx; //mov
	cmp(ebx, esi);
	if (jge())
		goto loc_43DB98;
	to32i(eax+0x548) = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43DBF0()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	cmp(to16i(eax+0x14C), (int16_t)0);
	if (jnz())
		goto loc_43DC0E;
	cmp(to32i(eax+0xD4), (int32_t)0x4CCC);
	if (jl())
		goto loc_43DC80;
loc_43DC0E:
	test(to8i(ecx+0x1F4), (int8_t)1);
	if (jz())
		goto loc_43DC33;
	cmp(to32i(ecx+0x280), (int32_t)2);
	if (jnz())
		goto loc_43DC33;
	esi = to32i(ecx+0x39C); //mov
	test(esi, esi);
	if (jle())
		goto loc_43DC88;
	eax = esi; //mov
loc_43DC2C:
	cmp(eax, (int32_t)0x20000);
	if (jl())
		goto loc_43DC8E;
loc_43DC33:
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jnz())
		goto loc_43DC7D;
	eax = ecx; //mov
	esp -= 4; _sub_43DDD0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_46AEF0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43DCB4;
loc_43DC4F:
	push32(edx);
	edx = 0x40; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43DEB0(); esp += 4; //call
	pop32(edx);
loc_43DC5D:
	eax = ecx; //mov
	esp -= 4; _sub_43EE10(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_43E960(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_43DCC1;
	eax = ecx; //mov
	esp -= 4; _sub_43DF70(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_43E9B0(); esp += 4; //call
loc_43DC7D:
	pop32(esi);
	pop32(ecx);
	return;
loc_43DC80:
	esp -= 4; _sub_46A180(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	return;
loc_43DC88:
	eax = esi; //mov
	neg(eax);
	goto loc_43DC2C;
loc_43DC8E:
	to32i(ecx+0xF0) = 0; //mov
	eax = to32i(ecx+0xF0); //mov
	to32i(ecx+0xEC) = eax; //mov
	to32i(ecx+0xE8) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_46A180(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	return;
loc_43DCB4:
	eax = ecx; //mov
	esp -= 4; _sub_43DCE0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43DC4F;
	goto loc_43DC5D;
loc_43DCC1:
	eax = ecx; //mov
	esp -= 4; _sub_43E4F0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_43E9B0(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_43DCE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	ebx = to32i(eax+0x14); //mov
	edx = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(edx, ebx);
	ebx = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(edx, ebx);
	xor_(ebx, ebx);
	bl = to8i(edx+0x1F); //mov
	sar(ebx, (int32_t)4);
	esi = 7; //mov
	and_(ebx, (int32_t)0xF);
	sub(esi, ebx);
	ebx = esi; //mov
	esi = to32i(eax+0x500); //mov
	ecx = eax; //mov
	cmp(ebx, esi);
	if (jg())
		goto loc_43DD83;
	dl = to8i(edx+0x1F); //mov
	and_(dl, (int8_t)0xF);
	and_(edx, (int32_t)0xFF);
	add(edx, (int32_t)6);
	cmp(edx, esi);
	if (jl())
		goto loc_43DD83;
	edx = 1; //mov
loc_43DD38:
	ebx = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_43DD87;
	edx = to32i(dword_50AD0C); //mov
	ebp = to32i(eax+0x54C); //mov
	add(ebp, edx);
	to32i(eax+0x54C) = ebp; //mov
	cmp(ebp, (int32_t)4);
	if (jg())
		goto loc_43DD7B;
loc_43DD57:
	test(ebx, ebx);
	if (jnz())
		goto loc_43DD7B;
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jnz())
		goto loc_43DD93;
	cmp(to32i(ecx+0x18), (int32_t)0);
	if (jz())
		goto loc_43DD93;
	eax = to32i(ecx+0x20); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
	cmp(eax, (int32_t)0xD999);
	if (jle())
		goto loc_43DDC0;
loc_43DD7B:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DD83:
	xor_(edx, edx);
	goto loc_43DD38;
loc_43DD87:
	to32i(eax+0x54C) = 0; //mov
	goto loc_43DD57;
loc_43DD93:
	edx = to32i(ecx+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	eax = to32i(edx+eax+0xA); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	cmp(eax, (int32_t)0xD999);
	if (jle())
		goto loc_43DDC0;
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DDC0:
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43DDD0()
{
	push32(ebp);
	cmp(to32i(eax+0x524), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_43DE82;
	push32(esi);
	push32(edx);
	push32(ecx);
	edx = to32i(eax+0x548); //mov
	ecx = to32i(eax+0x3AC); //mov
	sub(edx, (int32_t)0xA0000);
	cmp(edx, ecx);
	if (jle())
		goto loc_43DE84;
	cmp(to32i(eax+0x538), (int32_t)0);
	if (jle())
		goto loc_43DE84;
loc_43DE08:
	edx = to32i(dword_540F48); //mov
	sub(edx, (int32_t)0x18);
	to32i(eax+0x528) = edx; //mov
loc_43DE17:
	edx = to32i(dword_540F48); //mov
	ebp = to32i(eax+0x528); //mov
	ecx = to32i(eax+0x520); //mov
	sub(edx, ebp);
	cmp(edx, ecx);
	if (jle())
		goto loc_43DE45;
	edx = to32i(dword_540F48); //mov
	to32i(eax+0x524) = 1; //mov
	to32i(eax+0x528) = edx; //mov
loc_43DE45:
	cmp(to32i(eax+0x398), (int32_t)0x140000);
	if (jle())
		goto loc_43DE5B;
	to32i(eax+0x398) = 0x140000; //mov
loc_43DE5B:
	edx = to32i(eax+0x398); //mov
	neg(edx);
	cmp(edx, (int32_t)0x140000);
	if (jle())
		goto loc_43DE75;
	to32i(eax+0x398) = 0xFFEC0000; //mov
loc_43DE75:
	to32i(eax+0x548) = 0; //mov
	pop32(ecx);
	pop32(edx);
	pop32(esi);
loc_43DE82:
	pop32(ebp);
	return;
loc_43DE84:
	edx = to32i(eax+0x548); //mov
	esi = to32i(eax+0x3AC); //mov
	add(edx, (int32_t)0xA0000);
	cmp(edx, esi);
	if (jge())
		goto loc_43DE17;
	cmp(to32i(eax+0x538), (int32_t)0);
	if (jl())
		goto loc_43DE08;
	goto loc_43DE17;
}
Fn(void) Game::_sub_43DEB0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	ebx = edx; //mov
	cmp(to32i(eax+0x524), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_43DEE2;
	eax = to32i(dword_540F48); //mov
	esi = to32i(ecx+0x528); //mov
	sub(eax, esi);
	esi = eax; //mov
	eax = to32i(ecx+0x520); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	cmp(esi, eax);
	if (jg())
		goto loc_43DF1F;
loc_43DEE2:
	cmp(to32i(ecx+0x524), (int32_t)1);
	if (jnz())
		goto loc_43DF1B;
	eax = to32i(ecx+0x520); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = to32i(dword_540F48); //mov
	sub(esi, to32i(ecx+0x528));
	cmp(esi, eax);
	if (jle())
		goto loc_43DF1B;
	eax = to32i(ecx+0x39C); //mov
	test(eax, eax);
	if (jle())
		goto loc_43DF3E;
	cmp(eax, (int32_t)0x140000);
	if (jl())
		goto loc_43DF4B;
loc_43DF1B:
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DF1F:
	to32i(ecx+0x524) = 1; //mov
	eax = to32i(dword_540F48); //mov
	to32i(ecx+0x520) = ebx; //mov
	to32i(ecx+0x528) = eax; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DF3E:
	neg(eax);
	cmp(eax, (int32_t)0x140000);
	if (jl())
		goto loc_43DF4B;
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43DF4B:
	to32i(ecx+0x524) = 0xFFFFFFFF; //mov
	eax = to32i(dword_540F48); //mov
	to32i(ecx+0x520) = ebx; //mov
	to32i(ecx+0x528) = eax; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43DF70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_43D910; //mov
	movsd();
	movsd();
	movsd();
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43E314;
	eax = 1; //mov
loc_43DF97:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43E31B;
	eax = 0xFFFFFFFF; //mov
loc_43DFA8:
	to32i(esp+0xC) = eax; //mov
	ecx = to32i(ebp+0x39C); //mov
	to32i(ebp+0x55C) = 0; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_43E325;
	eax = ecx; //mov
loc_43DFC6:
	ebx = to32i(ebp+0x524); //mov
	esi = eax; //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_43E32E;
	eax = to32i(ebp+0x398); //mov
	edi = eax; //mov
	to32i(esp+0x10) = eax; //mov
	neg(edi);
	to32i(esp+0x10) = edi; //mov
loc_43DFE9:
	ebx = to32i(esp+0xC); //mov
	imul32(ebx, to32i(dword_50AC98));
	edx = to32i(ebp+0x14); //mov
	eax = ebp; //mov
	esp -= 4; _sub_43F4E0(); esp += 4; //call
	edx = to32i(ebp+0x39C); //mov
	cmp(edx, (int32_t)0xFFFE0000);
	if (jle())
		goto loc_43E33D;
	cmp(edx, (int32_t)0x20000);
	if (jge())
		goto loc_43E33D;
	xor_(eax, eax);
loc_43E01E:
	edx = eax; //mov
	neg(edx);
loc_43E022:
	eax = (int32_t)(intptr_t)(edx+0x100); //lea
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
	ecx = (int32_t)(intptr_t)(eax+0x10000); //lea
	cmp(esi, (int32_t)0x120000);
	if (jle())
		goto loc_43E07C;
	edx = 0x10000; //mov
	eax = 0xCCC; //mov
	sub(edx, ecx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x10000; //mov
	sub(edx, eax);
	to32i(ebp+0x55C) = edx; //mov
loc_43E07C:
	eax = 0x80; //mov
	ebx = to32i(ebp+0x510); //mov
	edx = to32i(dword_50ACE8); //mov
	neg(ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	ebx = to32i(dword_50ACEC); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_43E390;
loc_43E0AA:
	edx = to32i(dword_50ACEC); //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E397;
loc_43E0BA:
	edx = 0xA0000; //mov
	esi = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(dword_50ACDC); //mov
	cmp(eax, edi);
	if (jge())
		goto loc_43E39E;
loc_43E0D9:
	edx = to32i(dword_50ACDC); //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E3A5;
loc_43E0E9:
	edx = to32i(ebp+0x3A0); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_43E3AC;
loc_43E0F7:
	edx = to32i(ebp+0x3A0); //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E3B3;
loc_43E107:
	ebx = eax; //mov
	eax = to32i(dword_50ACF8); //mov
	edi = to32i(ebp+0x39C); //mov
	neg(eax);
	cmp(eax, edi);
	if (jge())
		goto loc_43E186;
	cmp(edi, to32i(dword_50ACF8));
	if (jge())
		goto loc_43E186;
	edx = to32i(dword_50ACFC); //mov
	eax = to32i(ebp+0x3A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_43E3BA;
loc_43E140:
	edx = eax; //mov
	cmp(ebx, eax);
	if (jge())
		goto loc_43E148;
	eax = ebx; //mov
loc_43E148:
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E3C1;
loc_43E152:
	edx = to32i(dword_50AD00); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0x3A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_43E3C8;
loc_43E172:
	edx = eax; //mov
	cmp(esi, eax);
	if (jge())
		goto loc_43E17A;
	eax = esi; //mov
loc_43E17A:
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E3CF;
loc_43E184:
	esi = eax; //mov
loc_43E186:
	eax = to32i(ebp+0x2C0); //mov
	edx = to32i(dword_50ACF0); //mov
	sub(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	esi = to32i(ebp+0x39C); //mov
	neg(edx);
	test(esi, esi);
	if (jle())
		goto loc_43E3D6;
	eax = esi; //mov
loc_43E1B2:
	cmp(eax, (int32_t)0x120000);
	if (jle())
		goto loc_43E1C4;
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
loc_43E1C4:
	edi = to32i(ebp+0x554); //mov
	cmp(edx, edi);
	if (jge())
		goto loc_43E3DF;
loc_43E1D2:
	eax = to32i(ebp+0x554); //mov
	neg(eax);
	cmp(edx, eax);
	if (jle())
		goto loc_43E3E6;
loc_43E1E2:
	esi = edx; //mov
	eax = to32i(ebp+0x2B0); //mov
	edx = to32i(dword_50ACE0); //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	edx = to32i(ebp+0x550); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_43E3ED;
loc_43E20C:
	edx = to32i(ebp+0x550); //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E3F4;
loc_43E21C:
	ebx = to32i(ebp+0x398); //mov
	edi = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_43E3FB;
loc_43E22C:
	edx = ecx; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = ecx; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	cmp(ecx, (int32_t)0x8000);
	if (jge())
		goto loc_43E4BB;
	edx = 0x8000; //mov
loc_43E25D:
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x39C); //mov
	esi = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_43E4C2;
	eax = edx; //mov
loc_43E27B:
	cmp(eax, (int32_t)0xF0000);
	if (jle())
		goto loc_43E4CB;
	to32i(ebp+0x328) = eax; //mov
loc_43E28C:
	to32i(ebp+0x324) = eax; //mov
	to32i(ebp+0x2A8) = 0; //mov
	to32i(ebp+0x2C8) = 0; //mov
	eax = to32i(esp); //mov
	to32i(ebp+0x2CC) = 0; //mov
	add(eax, edi);
	to32i(ebp+0x2A4) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(ebp+0x2D0) = 0; //mov
	add(eax, ebx);
	ecx = to32i(ebp+0x39C); //mov
	to32i(ebp+0x2AC) = eax; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_43E4E0;
	eax = ecx; //mov
loc_43E2E1:
	cmp(eax, (int32_t)0x20000);
	if (jge())
		goto loc_43E2EA;
	xor_(esi, esi);
loc_43E2EA:
	to32i(ebp+0x2A0) = 0; //mov
	eax = to32i(esp+4); //mov
	to32i(ebp+0x298) = 0; //mov
	add(eax, esi);
	to32i(ebp+0x29C) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43E314:
	xor_(eax, eax);
	goto loc_43DF97;
loc_43E31B:
	eax = 1; //mov
	goto loc_43DFA8;
loc_43E325:
	eax = ecx; //mov
	neg(eax);
	goto loc_43DFC6;
loc_43E32E:
	eax = to32i(ebp+0x398); //mov
	to32i(esp+0x10) = eax; //mov
	goto loc_43DFE9;
loc_43E33D:
	edx = to32i(ebp+0xB0); //mov
	eax = to32i(ebp+0xA8); //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	edx = to32i(ebp+0x52C); //mov
	sub(edx, eax);
	cmp(edx, (int32_t)0xFFFFFE00);
	if (jge())
		goto loc_43E373;
	add(edx, (int32_t)0x400);
loc_43E364:
	eax = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_43E01E;
	goto loc_43E022;
loc_43E373:
	cmp(edx, (int32_t)0x200);
	if (jle())
		goto loc_43E364;
	sub(edx, (int32_t)0x400);
	eax = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_43E01E;
	goto loc_43E022;
loc_43E390:
	eax = ebx; //mov
	goto loc_43E0AA;
loc_43E397:
	eax = edx; //mov
	goto loc_43E0BA;
loc_43E39E:
	eax = edi; //mov
	goto loc_43E0D9;
loc_43E3A5:
	eax = edx; //mov
	goto loc_43E0E9;
loc_43E3AC:
	eax = edx; //mov
	goto loc_43E0F7;
loc_43E3B3:
	eax = edx; //mov
	goto loc_43E107;
loc_43E3BA:
	neg(eax);
	goto loc_43E140;
loc_43E3C1:
	eax = edx; //mov
	goto loc_43E152;
loc_43E3C8:
	neg(eax);
	goto loc_43E172;
loc_43E3CF:
	eax = edx; //mov
	goto loc_43E184;
loc_43E3D6:
	eax = esi; //mov
	neg(eax);
	goto loc_43E1B2;
loc_43E3DF:
	edx = edi; //mov
	goto loc_43E1D2;
loc_43E3E6:
	edx = eax; //mov
	goto loc_43E1E2;
loc_43E3ED:
	eax = edx; //mov
	goto loc_43E20C;
loc_43E3F4:
	eax = edx; //mov
	goto loc_43E21C;
loc_43E3FB:
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebp+0x2B8); //mov
	imul32(eax, edx);
	edx = to32i(dword_50ACF8); //mov
	neg(edx);
	cmp(edx, eax);
	if (jge())
		goto loc_43E418;
	test(eax, eax);
	if (jle())
		goto loc_43E44E;
loc_43E418:
	edx = to32i(esp+0xC); //mov
	eax = to32i(ebp+0x2B8); //mov
	imul32(eax, edx);
	cmp(eax, to32i(dword_50ACF8));
	if (jge())
		goto loc_43E437;
	test(eax, eax);
	if (jl())
		goto loc_43E437;
	cmp(eax, to32i(esp+0x10));
	if (jl())
		goto loc_43E454;
loc_43E437:
	ebx = to32i(ebp+0x39C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43E470;
	eax = ebx; //mov
	test(eax, eax);
	if (jg())
		goto loc_43E47F;
	xor_(ebx, ebx);
	goto loc_43E22C;
loc_43E44E:
	cmp(eax, to32i(esp+0x10));
	if (jle())
		goto loc_43E418;
loc_43E454:
	eax = ebp; //mov
	esp -= 4; _sub_43FB80(); esp += 4; //call
	ebx = to32i(ebp+0x524); //mov
	to8i(ebp+0x2D8) = 0; //mov
	imul32(ebx, eax);
	goto loc_43E22C;
loc_43E470:
	eax = ebx; //mov
	neg(eax);
	test(eax, eax);
	if (jg())
		goto loc_43E47F;
	xor_(ebx, ebx);
	goto loc_43E22C;
loc_43E47F:
	ebx = to32i(ebp+0x398); //mov
	sub(ebx, to32i(ebp+0x39C));
	edx = to32i(ebp+0x1F4); //mov
	eax = ebp; //mov
	and_(edx, (int32_t)8);
	esp -= 4; _sub_43FD50(); esp += 4; //call
	to8i(ebp+0x2D8) = 0xFF; //mov
	ebx = eax; //mov
	eax = to32i(ebp+0x2B8); //mov
	neg(ebx);
	test(eax, eax);
	if (jge())
		goto loc_43E22C;
	neg(ebx);
	goto loc_43E22C;
loc_43E4BB:
	edx = ecx; //mov
	goto loc_43E25D;
loc_43E4C2:
	eax = edx; //mov
	neg(eax);
	goto loc_43E27B;
loc_43E4CB:
	to32i(ebp+0x328) = 0; //mov
	eax = to32i(ebp+0x328); //mov
	goto loc_43E28C;
loc_43E4E0:
	eax = ecx; //mov
	neg(eax);
	goto loc_43E2E1;
}
Fn(void) Game::_sub_43E4F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	ecx = eax; //mov
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43E82C;
	eax = 1; //mov
loc_43E50D:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43E833;
	esi = 0xFFFFFFFF; //mov
loc_43E51E:
	edx = to32i(ecx+0x3AC); //mov
	eax = to32i(ecx+0x548); //mov
	edi = 0x10000; //mov
	sub(edx, eax);
	to32i(ecx+0x55C) = 0; //mov
	to32i(esp) = edx; //mov
	eax = to32i(ecx+0x2B8); //mov
	edx = 0x62; //mov
	ebp = to32i(ecx+0x538); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = (int32_t)(intptr_t)(eax+edi); //lea
	edx = ebx; //mov
	eax = to32i(ecx+0x550); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x10) = eax; //mov
	to32i(esp+0x18) = eax; //mov
	edx = ebx; //mov
	eax = to32i(dword_50ACB4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ecx+0x558); //mov
	cmp(eax, edi);
	if (jle())
		goto loc_43E5BF;
	edx = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x18) = eax; //mov
	edx = ebx; //mov
	eax = to32i(ecx+0x558); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0xC) = eax; //mov
loc_43E5BF:
	edx = to32i(dword_50ACBC); //mov
	eax = to32i(ecx+0x398); //mov
	ebx = to32i(ecx+0x510); //mov
	to32i(esp+0x14) = eax; //mov
	eax = 0x80; //mov
	neg(ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_50ACC0); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_43E83D;
loc_43E5F7:
	edx = to32i(dword_50ACC0); //mov
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E844;
loc_43E607:
	edx = to32i(dword_50ACAC); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(dword_50ACB0); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jge())
		goto loc_43E84B;
loc_43E62E:
	ebx = to32i(dword_50ACB0); //mov
	neg(ebx);
	cmp(eax, ebx);
	if (jle())
		goto loc_43E852;
loc_43E63E:
	edx = to32i(ecx+0x3A0); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_43E859;
loc_43E64C:
	ebx = to32i(ecx+0x3A0); //mov
	neg(ebx);
	cmp(eax, ebx);
	if (jle())
		goto loc_43E860;
loc_43E65C:
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(dword_50ACCC); //mov
	ebx = to32i(ecx+0x39C); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jge())
		goto loc_43E6EF;
	cmp(ebx, to32i(dword_50ACCC));
	if (jge())
		goto loc_43E6EF;
	edx = to32i(dword_50ACD0); //mov
	eax = to32i(ecx+0x3A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_43E867;
loc_43E69D:
	edx = to32i(esp+0x1C); //mov
	eax = ebx; //mov
	cmp(ebx, edx);
	if (jle())
		goto loc_43E6A9;
	ebx = edx; //mov
loc_43E6A9:
	neg(eax);
	cmp(ebx, eax);
	if (jle())
		goto loc_43E86E;
loc_43E6B3:
	edx = to32i(dword_50ACD4); //mov
	eax = to32i(ecx+0x3A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x1C) = ebx; //mov
	test(eax, eax);
	if (jle())
		goto loc_43E875;
loc_43E6D5:
	ebx = to32i(esp+0x20); //mov
	edx = eax; //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_43E6E1;
	eax = ebx; //mov
loc_43E6E1:
	neg(edx);
	cmp(eax, edx);
	if (jle())
		goto loc_43E87C;
loc_43E6EB:
	to32i(esp+0x20) = eax; //mov
loc_43E6EF:
	edx = to32i(esp+0x20); //mov
	eax = to32i(ecx+0x2C0); //mov
	sub(eax, edx);
	edx = to32i(dword_50ACC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	ebx = to32i(ecx+0x554); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_43E883;
loc_43E71B:
	ebx = to32i(ecx+0x554); //mov
	neg(ebx);
	cmp(eax, ebx);
	if (jle())
		goto loc_43E88A;
loc_43E72B:
	edx = to32i(esp+0x1C); //mov
	to32i(esp+4) = eax; //mov
	eax = ebp; //mov
	sub(eax, edx);
	edx = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esi; //mov
	neg(edx);
	imul32(eax, edx);
	ebx = to32i(esp+0x18); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_43E891;
loc_43E758:
	ebx = to32i(esp+0x18); //mov
	neg(ebx);
	cmp(eax, ebx);
	if (jle())
		goto loc_43E898;
loc_43E766:
	to32i(esp+8) = eax; //mov
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jnz())
		goto loc_43E89F;
	xor_(ebx, ebx);
loc_43E777:
	test(ebp, ebp);
	if (jle())
		goto loc_43E902;
loc_43E77F:
	edx = to32i(dword_50ACA8); //mov
	eax = ebp; //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_43E909;
	to32i(ecx+0x328) = eax; //mov
loc_43E797:
	to32i(ecx+0x324) = eax; //mov
	eax = to32i(esp+8); //mov
	edx = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = edi; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43E91E;
	imul32(ebp, esi);
	imul32(eax, esi);
	to32i(ecx+0x2A8) = 0; //mov
	to32i(ecx+0x2AC) = 0; //mov
	to32i(ecx+0x2CC) = 0; //mov
	to32i(ecx+0x2A4) = 0; //mov
	to32i(ecx+0x2C8) = ebp; //mov
	to32i(ecx+0x2D0) = eax; //mov
loc_43E804:
	to32i(ecx+0x2A0) = 0; //mov
	eax = to32i(esp+4); //mov
	to32i(ecx+0x298) = 0; //mov
	to32i(ecx+0x29C) = eax; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43E82C:
	xor_(eax, eax);
	goto loc_43E50D;
loc_43E833:
	esi = 1; //mov
	goto loc_43E51E;
loc_43E83D:
	eax = edx; //mov
	goto loc_43E5F7;
loc_43E844:
	eax = edx; //mov
	goto loc_43E607;
loc_43E84B:
	eax = ebx; //mov
	goto loc_43E62E;
loc_43E852:
	eax = ebx; //mov
	goto loc_43E63E;
loc_43E859:
	eax = edx; //mov
	goto loc_43E64C;
loc_43E860:
	eax = ebx; //mov
	goto loc_43E65C;
loc_43E867:
	neg(ebx);
	goto loc_43E69D;
loc_43E86E:
	ebx = eax; //mov
	goto loc_43E6B3;
loc_43E875:
	neg(eax);
	goto loc_43E6D5;
loc_43E87C:
	eax = edx; //mov
	goto loc_43E6EB;
loc_43E883:
	eax = ebx; //mov
	goto loc_43E71B;
loc_43E88A:
	eax = ebx; //mov
	goto loc_43E72B;
loc_43E891:
	eax = ebx; //mov
	goto loc_43E758;
loc_43E898:
	eax = ebx; //mov
	goto loc_43E766;
loc_43E89F:
	edx = to32i(esp+0x14); //mov
	imul32(edx, esi);
	eax = to32i(ecx+0x39C); //mov
	imul32(eax, esi);
	cmp(edx, eax);
	if (jle())
		goto loc_43E8C8;
	eax = ecx; //mov
	esp -= 4; _sub_43FB80(); esp += 4; //call
	ebx = eax; //mov
	to8i(ecx+0x2D8) = 0; //mov
	goto loc_43E777;
loc_43E8C8:
	ebx = to32i(esp+0x14); //mov
	sub(ebx, to32i(ecx+0x39C));
	edx = to32i(ecx+0x1F4); //mov
	eax = ecx; //mov
	and_(edx, (int32_t)8);
	esp -= 4; _sub_43FD50(); esp += 4; //call
	to8i(ecx+0x2D8) = 0xFF; //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2B8); //mov
	neg(ebx);
	test(eax, eax);
	if (jge())
		goto loc_43E777;
	neg(ebx);
	goto loc_43E777;
loc_43E902:
	neg(ebp);
	goto loc_43E77F;
loc_43E909:
	to32i(ecx+0x328) = 0; //mov
	eax = to32i(ecx+0x328); //mov
	goto loc_43E797;
loc_43E91E:
	to32i(ecx+0x2A8) = 0; //mov
	to32i(ecx+0x2C8) = 0; //mov
	to32i(ecx+0x2CC) = 0; //mov
	to32i(ecx+0x2D0) = 0; //mov
	to32i(ecx+0x2AC) = eax; //mov
	to32i(ecx+0x2A4) = ebp; //mov
	goto loc_43E804;
}
Fn(void) Game::_sub_43E960()
{
	push32(ebx);
	push32(edx);
	edx = to32i(eax+0x510); //mov
	test(edx, edx);
	if (jle())
		goto loc_43E99E;
loc_43E96C:
	cmp(edx, (int32_t)0x73);
	if (jg())
		goto loc_43E996;
	cmp(to32i(eax+0x524), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_43E996;
	ebx = to32i(eax+0x39C); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_43E9A2;
	eax = ebx; //mov
loc_43E986:
	edx = to32i(dword_50ACF8); //mov
	sub(edx, (int32_t)0x30000);
	cmp(eax, edx);
	if (jge())
		goto loc_43E9A8;
loc_43E996:
	eax = 1; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_43E99E:
	neg(edx);
	goto loc_43E96C;
loc_43E9A2:
	eax = ebx; //mov
	neg(eax);
	goto loc_43E986;
loc_43E9A8:
	xor_(eax, eax);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_43E9B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x54);
	ecx = eax; //mov
	eax = to32i(eax+0x2D0); //mov
	edx = to32i(ecx+0x2AC); //mov
	add(edx, eax);
	eax = ecx; //mov
	to32i(ecx+0x2AC) = edx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_453670(); esp += 4; //call
	eax = to32i(ecx+0x2D0); //mov
	ebx = to32i(ecx+0x2AC); //mov
	edx = esp; //mov
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)(ecx+0xC4); //lea
	to32i(ecx+0x2AC) = ebx; //mov
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = (int32_t)(intptr_t)(ecx+0x118); //lea
	esp -= 4; _sub_49D890(); esp += 4; //call
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
	to32i(ecx+0x294) = ebx; //mov
	edx = to32i(esp+0x24); //mov
	eax = to32i(ecx+0x2C8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2D0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = to32i(ecx+0x28C); //mov
	add(eax, ebx);
	add(esi, eax);
	to32i(ecx+0x28C) = esi; //mov
	eax = to32i(ecx+0x2C8); //mov
	edx = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2D0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ecx+0x290); //mov
	add(eax, ebx);
	add(edi, eax);
	to32i(ecx+0x290) = edi; //mov
	eax = to32i(ecx+0x2C8); //mov
	edx = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2CC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2D0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(ecx+0x294); //mov
	add(eax, ebx);
	add(ebp, eax);
	to32i(ecx+0x294) = ebp; //mov
	eax = to32i(ecx+0x298); //mov
	edx = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x29C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+0x48) = ebx; //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(ecx+0x298); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x29C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2A0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x298); //mov
	to32i(esp+0x4C) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x29C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2A0); //mov
	esi = (int32_t)(intptr_t)(esp+0x48); //lea
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	edi = (int32_t)(intptr_t)(ecx+0x298); //lea
	to32i(esp+0x50) = ebx; //mov
	movsd();
	movsd();
	movsd();
	edx = to32i(dword_50AD10); //mov
	eax = to32i(ecx+0x28C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xA8); //mov
	add(edx, eax);
	eax = to32i(ecx+0x290); //mov
	to32i(ecx+0xA8) = edx; //mov
	edx = to32i(dword_50AD10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0xAC); //mov
	edx = to32i(dword_50AD10); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x294); //mov
	to32i(ecx+0xAC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = to32i(ecx+0xB0); //mov
	edi = to32i(ecx+0x55C); //mov
	add(esi, eax);
	xor_(ebx, ebx);
	to32i(ecx+0xB0) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_43ED8C;
loc_43ED25:
	cmp(ebx, to32i(dword_50AD0C));
	if (jge())
		goto loc_43ED8C;
	edx = to32i(ecx+0x55C); //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xA8) = eax; //mov
	edx = to32i(ecx+0x55C); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xAC) = eax; //mov
	edx = to32i(ecx+0x55C); //mov
	eax = to32i(ecx+0xB0); //mov
	inc(ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(ecx+0x55C); //mov
	to32i(ecx+0xB0) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_43ED25;
loc_43ED8C:
	edx = to32i(dword_50AD10); //mov
	eax = to32i(ecx+0x298); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE8); //mov
	add(edx, eax);
	eax = to32i(ecx+0x29C); //mov
	to32i(ecx+0xE8) = edx; //mov
	edx = to32i(dword_50AD10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0xEC); //mov
	edx = to32i(dword_50AD10); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2A0); //mov
	to32i(ecx+0xEC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = to32i(ecx+0xF0); //mov
	to32i(ecx+0x2AC) = 0; //mov
	add(esi, eax);
	to32i(ecx+0xF0) = esi; //mov
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43EE10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43F0C2;
	eax = 1; //mov
loc_43EE2D:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43F0C9;
	eax = 0xFFFFFFFF; //mov
loc_43EE3E:
	ebp = eax; //mov
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
	edx = to32i(ecx+0xC4); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xE8); //mov
	to32i(ecx+0x2B8) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xC8); //mov
	eax = to32i(ecx+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xCC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0x2BC) = ebx; //mov
	edx = to32i(ecx+0xD0); //mov
	eax = to32i(ecx+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xE8); //mov
	to32i(ecx+0x2C0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(ecx+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xF0); //mov
	edi = esp; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	esi = (int32_t)(intptr_t)(ecx+0xDC); //lea
	to32i(ecx+0x2C4) = ebx; //mov
	movsd();
	movsd();
	movsd();
	cmp(to32i(ecx+0x524), (int32_t)1);
	if (jnz())
		goto loc_43F0D3;
	edx = to32i(esp+8); //mov
	eax = to32i(esp); //mov
loc_43F033:
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	ebx = eax; //mov
	eax = ecx; //mov
	to32i(ecx+0x52C) = ebx; //mov
	esp -= 4; _sub_43F240(); esp += 4; //call
	edx = to32i(ecx+0x50C); //mov
	eax = to32i(ecx+0x504); //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	edx = ebx; //mov
	sub(edx, eax);
	esi = eax; //mov
	cmp(edx, (int32_t)0xFFFFFE00);
	if (jge())
		goto loc_43F0E3;
	add(edx, (int32_t)0x400);
loc_43F070:
	to32i(ecx+0x510) = edx; //mov
	edx = to32i(dword_50AC98); //mov
	imul32(edx, ebp);
	eax = ecx; //mov
	to32i(ecx+0x530) = esi; //mov
	esp -= 4; _sub_43F120(); esp += 4; //call
	ebx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_43F0A0;
	esi = to32i(ecx+0x3AC); //mov
	cmp(esi, to32i(ecx+0x548));
	if (jg())
		goto loc_43F104;
loc_43F0A0:
	test(ebx, ebx);
	if (jl())
		goto loc_43F0F6;
loc_43F0A4:
	eax = to32i(ecx+0x14); //mov
	ebx = edx; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_43F4E0(); esp += 4; //call
	to32i(ecx+0x538) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F0C2:
	xor_(eax, eax);
	goto loc_43EE2D;
loc_43F0C9:
	eax = 1; //mov
	goto loc_43EE3E;
loc_43F0D3:
	edx = to32i(esp+8); //mov
	eax = to32i(esp); //mov
	neg(edx);
	neg(eax);
	goto loc_43F033;
loc_43F0E3:
	cmp(edx, (int32_t)0x200);
	if (jle())
		goto loc_43F070;
	sub(edx, (int32_t)0x400);
	goto loc_43F070;
loc_43F0F6:
	edi = to32i(ecx+0x3AC); //mov
	cmp(edi, to32i(ecx+0x548));
	if (jge())
		goto loc_43F0A4;
loc_43F104:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	goto loc_43F0A4;
}
Fn(void) Game::_sub_43F120()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	edx = to32i(dword_512228); //mov
	eax = to32i(eax+0x14); //mov
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43F1F5;
	edx = 0xFFFFFFFD; //mov
loc_43F144:
	esi = to32i(dword_5118A0); //mov
	add(edx, eax);
	cmp(edx, esi);
	if (jl())
		goto loc_43F209;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43F1FF;
	edx = 0xFFFFFFFD; //mov
loc_43F166:
	ebx = to32i(dword_5118A0); //mov
	add(edx, eax);
	sub(edx, ebx);
loc_43F170:
	edi = (int32_t)(intptr_t)(eax*8+0); //lea
	add(edi, eax);
	ebx = to32i(dword_5118A4); //mov
	shl(edi, (int32_t)2);
	eax = (int32_t)(intptr_t)(ebx+edi); //lea
	esi = edx; //mov
	edx = to32i(eax+0xF); //mov
	eax = esi; //mov
	shl(eax, (int32_t)3);
	add(esi, eax);
	shl(esi, (int32_t)2);
	eax = to32i(esi+ebx+0xC); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x18);
	shl(edx, (int32_t)9);
	shl(eax, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(dword_5118A4); //mov
	edx = to32i(edi+eax+0x11); //mov
	eax = to32i(esi+eax+0xE); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x18);
	shl(edx, (int32_t)9);
	shl(eax, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43F225;
	eax = 1; //mov
loc_43F1E3:
	xor_(eax, to32i(dword_512228));
	if (jz())
		goto loc_43F229;
	eax = ebx; //mov
	neg(eax);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F1F5:
	edx = 3; //mov
	goto loc_43F144;
loc_43F1FF:
	edx = 3; //mov
	goto loc_43F166;
loc_43F209:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_43F21E;
	edx = 0xFFFFFFFD; //mov
loc_43F217:
	add(edx, eax);
	goto loc_43F170;
loc_43F21E:
	edx = 3; //mov
	goto loc_43F217;
loc_43F225:
	xor_(eax, eax);
	goto loc_43F1E3;
loc_43F229:
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43F240()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	ecx = eax; //mov
	esp -= 4; _sub_43F400(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_43F3C8;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ebx);
	edx = to32i(ecx+0x39C); //mov
	test(edx, edx);
	if (jle())
		goto loc_43F3CE;
	ebx = edx; //mov
loc_43F268:
	eax = 0x4000; //mov
	edx = to32i(dword_50ACA4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	test(eax, eax);
	if (jl())
		goto loc_43F2AA;
	esi = to32i(dword_50AC9C); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_43F2AA;
	test(ebx, ebx);
	if (jl())
		goto loc_43F2AA;
	eax = esi; //mov
loc_43F2AA:
	edi = to32i(dword_50ACA0); //mov
	cmp(eax, edi);
	if (jle())
		goto loc_43F3D7;
	edx = edi; //mov
loc_43F2BA:
	ebp = to32i(ecx+0x524); //mov
	eax = edx; //mov
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_43F2C9;
	neg(eax);
loc_43F2C9:
	test(to8i(ecx+0x3A9), (int8_t)0x10);
	if (jz())
		goto loc_43F3DE;
	edx = 1; //mov
loc_43F2DB:
	xor_(edx, to32i(dword_512228));
	if (jz())
		goto loc_43F2E5;
	neg(eax);
loc_43F2E5:
	test(eax, eax);
	if (jl())
		goto loc_43F3E5;
	ebp = to32i(ecx+0x14); //mov
	edx = to32i(dword_5118A0); //mov
	add(eax, ebp);
	cmp(eax, edx);
	if (jl())
		goto loc_43F2FE;
	sub(eax, edx);
loc_43F2FE:
	edx = eax; //mov
	shl(eax, (int32_t)3);
	add(eax, edx);
	esi = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	edi = (int32_t)(intptr_t)(esp+0x1C); //lea
	add(esi, eax);
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	esi = (int32_t)(intptr_t)(ecx+0x118); //lea
	movsd();
	movsd();
	movsd();
	edx = to32i(esp+0x28); //mov
	eax = to32i(ecx+0x548); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	esi = eax; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ecx+0x548); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	ebx = eax; //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(ecx+0x548); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	add(edx, esi);
	to32i(esp+0x10) = edx; //mov
	edx = to32i(esp+0x20); //mov
	add(edx, ebx);
	to32i(esp+0x14) = edx; //mov
	edx = to32i(esp+0x24); //mov
	to32i(esp+0x18) = eax; //mov
	add(edx, eax);
	to32i(esp+0x18) = edx; //mov
	eax = to32i(ecx+0x9C); //mov
	edx = to32i(esp+0x10); //mov
	sub(edx, eax);
	eax = to32i(ecx+0xA0); //mov
	to32i(ecx+0x504) = edx; //mov
	edx = to32i(esp+0x14); //mov
	sub(edx, eax);
	eax = to32i(ecx+0xA4); //mov
	to32i(ecx+0x508) = edx; //mov
	edx = to32i(esp+0x18); //mov
	sub(edx, eax);
	to32i(ecx+0x50C) = edx; //mov
	pop32(ebx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
loc_43F3C8:
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(ecx);
	return;
loc_43F3CE:
	ebx = edx; //mov
	neg(ebx);
	goto loc_43F268;
loc_43F3D7:
	edx = eax; //mov
	goto loc_43F2BA;
loc_43F3DE:
	xor_(edx, edx);
	goto loc_43F2DB;
loc_43F3E5:
	add(eax, to32i(ecx+0x14));
	test(eax, eax);
	if (jge())
		goto loc_43F2FE;
	add(eax, to32i(dword_5118A0));
	goto loc_43F2FE;
}
Fn(void) Game::_sub_43F400()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	cmp(to32i(eax+0x53C), (int32_t)0);
	if (jle())
		goto loc_43F4C8;
	ebx = to32i(eax+0x524); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_43F4C8;
	test(to8i(eax+0x3A9), (int8_t)0x10);
	if (jnz())
		goto loc_43F4C1;
	eax = ebx; //mov
loc_43F432:
	ebx = to32i(ecx+0x544); //mov
	esi = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_43F4C8;
	edx = to32i(ebx+0x14); //mov
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_43D400(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_43F4D0;
loc_43F457:
	cmp(eax, (int32_t)0x1E);
	if (jge())
		goto loc_43F4C8;
	test(esi, esi);
	if (jz())
		goto loc_43F464;
	test(edx, edx);
	if (jl())
		goto loc_43F46C;
loc_43F464:
	test(esi, esi);
	if (jnz())
		goto loc_43F4C8;
	test(edx, edx);
	if (jle())
		goto loc_43F4C8;
loc_43F46C:
	push32(edi);
	esi = to32i(ecx+0x9C); //mov
	eax = to32i(ebx+0x9C); //mov
	sub(eax, esi);
	to32i(ecx+0x504) = eax; //mov
	edi = to32i(ecx+0xA0); //mov
	eax = to32i(ebx+0xA0); //mov
	sub(eax, edi);
	to32i(ecx+0x508) = eax; //mov
	ebp = to32i(ecx+0xA4); //mov
	eax = to32i(ebx+0xA4); //mov
	sub(eax, ebp);
	to32i(ecx+0x50C) = eax; //mov
	eax = to32i(ebx+0x3AC); //mov
	to32i(ecx+0x548) = eax; //mov
	eax = 1; //mov
	pop32(edi);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F4C1:
	xor_(eax, eax);
	goto loc_43F432;
loc_43F4C8:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F4D0:
	neg(eax);
	goto loc_43F457;
}
Fn(void) Game::_sub_43F4E0()
{
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jz())
		goto loc_43F5AB;
	esi = to32i(ecx+0x39C); //mov
	test(esi, esi);
	if (jle())
		goto loc_43F5A2;
	eax = esi; //mov
loc_43F505:
	cmp(eax, (int32_t)0x140000);
	if (jge())
		goto loc_43F5AB;
	xor_(ebx, ebx);
loc_43F512:
	ebp = to32i(dword_5118A0); //mov
	add(edx, ebx);
	cmp(edx, ebp);
	if (jl())
		goto loc_43F520;
	sub(edx, ebp);
loc_43F520:
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0xF); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp) = edx; //mov
	edx = to32i(eax+0x10); //mov
	sar(edx, (int32_t)0x18);
	eax = to32i(eax+0x11); //mov
	shl(edx, (int32_t)9);
	sar(eax, (int32_t)0x18);
	to32i(esp+4) = edx; //mov
	shl(eax, (int32_t)9);
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(ecx+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	return;
loc_43F5A2:
	eax = esi; //mov
	neg(eax);
	goto loc_43F505;
loc_43F5AB:
	test(ebx, ebx);
	if (jge())
		goto loc_43F512;
	add(edx, ebx);
	test(edx, edx);
	if (jge())
		goto loc_43F520;
	add(edx, to32i(dword_5118A0));
	goto loc_43F520;
}
Fn(void) Game::_sub_43F5D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	edx = to32i(dword_511C08); //mov
	ecx = to32i(edx+0x1E8); //mov
	edx = to32i(dword_511E3C); //mov
	edi = to32i(eax+0x1E8); //mov
	dec(edx);
	sub(edi, ecx);
	test(edx, edx);
	if (jl())
		goto loc_43F617;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
loc_43F5FE:
	ecx = to32i(dword_511A88+eax); //mov
	test(to8i(ecx+0x1F4), (int8_t)1);
	if (jz())
		goto loc_43F6B7;
	xor_(esi, esi);
	si = to16i(ecx+6); //mov
loc_43F617:
	cmp(esi, (int32_t)0x2BC);
	if (jge())
		goto loc_43F658;
	ebp = to32i(dword_540F48); //mov
	cmp(ebp, (int32_t)0x5C0);
	if (jle())
		goto loc_43F658;
	edx = (int32_t)(intptr_t)(ebp-0x200); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	esi = eax; //mov
loc_43F658:
	test(to8i(byte_512219), (int8_t)4);
	if (jz())
		goto loc_43F667;
	add(esi, (int32_t)0xC8);
loc_43F667:
	cmp(esi, (int32_t)0x2BC);
	if (jge())
		goto loc_43F699;
	edx = (int32_t)(intptr_t)(edi+1); //lea
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	add(eax, eax);
	edx = (int32_t)(intptr_t)(eax+0x4B); //lea
	cmp(to32i(dword_511E30), (int32_t)2);
	if (jle())
		goto loc_43F6C8;
	eax = 1; //mov
loc_43F693:
	add(eax, edx);
	cmp(esi, eax);
	if (jl())
		goto loc_43F6B0;
loc_43F699:
	eax = to32i(dword_50AD0C); //mov
	edx = to32i(ebx+0x3C4); //mov
	sub(edx, eax);
	to32i(ebx+0x3C4) = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_43F6CC;
loc_43F6B0:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F6B7:
	sub(eax, (int32_t)4);
	dec(edx);
	test(eax, eax);
	if (jge())
		goto loc_43F5FE;
	goto loc_43F617;
loc_43F6C8:
	xor_(eax, eax);
	goto loc_43F693;
loc_43F6CC:
	esi = to32i(dword_511E38); //mov
	eax = to32i(dword_511E48); //mov
	edi = to32i(dword_50AC8C); //mov
	sub(eax, esi);
	ebp = to32i(dword_50AC64); //mov
	sub(eax, edi);
	cmp(eax, ebp);
	if (jl())
		goto loc_43F6FC;
	to32i(ebx+0x3C4) = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F6FC:
	eax = ebx; //mov
	esp -= 4; _sub_43F710(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_43F710()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	dx = to16i(eax+0x3A8); //mov
	to32i(eax+0x4EC) = 1; //mov
	and_(edx, (int32_t)0xFFFFF7EF);
	to16i(eax+0x3A8) = dx; //mov
	ah = to8i(eax+0x3A9); //mov
	or_(ah, (int8_t)8);
	edx = to32i(dword_4D6A80); //mov
	to8i(ebx+0x3A9) = ah; //mov
	eax = to32i(dword_4D6A78); //mov
	imul32(eax, edx);
	to32i(dword_4D6A7C) = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	to32i(dword_4D6A78) = eax; //mov
	eax = to32i(dword_4D6A7C); //mov
	and_(eax, (int32_t)0xFFFF00);
	shr(eax, (int32_t)8);
	ecx = to32i(dword_50AC8C); //mov
	add(eax, eax);
	dec(ecx);
	shr(eax, (int32_t)0x10);
	to32i(dword_50AC8C) = ecx; //mov
	test(eax, eax);
	if (jz())
		goto loc_43F80B;
	or_(to8i(ebx+0x3A9), (int8_t)0x10);
loc_43F78E:
	eax = to32i(dword_4D6A78); //mov
	esi = to32i(dword_4D6A80); //mov
	imul32(eax, esi);
	to32i(dword_4D6A7C) = eax; //mov
	edx = to32i(dword_4D6A7C); //mov
	and_(edx, (int32_t)0xFFFF00);
	and_(eax, (int32_t)0xFFFF);
	shr(edx, (int32_t)8);
	to32i(dword_4D6A78) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	shr(edx, (int32_t)0x10);
	eax = ebx; //mov
	esp -= 4; _sub_46D2E0(); esp += 4; //call
	edx = to32i(dword_511E3C); //mov
	dec(edx);
	test(edx, edx);
	if (jl())
		goto loc_43F7F8;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
loc_43F7E1:
	ecx = to32i(dword_511AC8+eax); //mov
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_43F817;
	sub(eax, (int32_t)4);
	dec(edx);
	test(eax, eax);
	if (jge())
		goto loc_43F7E1;
loc_43F7F8:
	eax = ebx; //mov
	to8i(ebx+0x8D) = 1; //mov
	esp -= 4; _sub_43C230(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_43F80B:
	and_(to8i(ebx+0x3A9), (int8_t)0xEF);
	goto loc_43F78E;
loc_43F817:
	to32i(ebx+0x3B0) = ecx; //mov
	eax = ebx; //mov
	to8i(ebx+0x8D) = 1; //mov
	esp -= 4; _sub_43C230(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
