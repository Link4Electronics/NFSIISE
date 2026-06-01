#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_414760()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x8C);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp+0x74) = ebx; //mov
	to32i(esp+0x70) = ecx; //mov
	xor_(edx, edx);
	to32i(esp+0x84) = edx; //mov
	edx = to32i(dword_4E5508); //mov
	ecx = 0x14; //mov
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_4147A9;
	cmp(to8i(byte_512DAA), (int8_t)3);
	if (jz())
		goto loc_4147A9;
	cmp(to8i(byte_512DD0), (int8_t)1);
	if (jz())
		goto loc_4147A9;
	cmp(to8i(byte_512DEB), (int8_t)1);
	if (jnz())
		goto loc_4147BA;
loc_4147A9:
	eax = to32i(esp+0x84); //mov
	add(esp, (int32_t)0x8C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4147BA:
	eax = esi; //mov
	esp -= 4; _sub_41A240(); esp += 4; //call
	ebx = to32i(dword_512208); //mov
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_41482F;
	imul32(edx, to32i(dword_51220C), 0x684);
	cmp(to32i(edx+esi+0x280), (int32_t)2);
	if (jz())
		goto loc_4147E2;
	xor_(eax, eax);
loc_4147E2:
	imul32(edx, to32i(dword_51220C), 0x684);
	ebx = to32i(edx+esi+0x21C); //mov
	xor_(edx, edx);
	dl = to8i(byte_512DBD); //mov
	ebp = to32i(ebx); //mov
	add(edx, (int32_t)0xC);
	cmp(edx, ebp);
	if (jg())
		goto loc_414806;
	xor_(eax, eax);
loc_414806:
	imul32(edx, to32i(dword_51220C), 0x684);
	test(to8i(edx+esi+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_4148A2;
	eax = to32i(esp+0x84); //mov
	add(esp, (int32_t)0x8C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41482F:
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_41485F;
	cmp(ebx, to32i(dword_512264));
	if (jge())
		goto loc_41485F;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jz())
		goto loc_4148A2;
	cmp(to32i(esi+0x904), (int32_t)2);
	if (jz())
		goto loc_4148A2;
	eax = to32i(esp+0x84); //mov
	add(esp, (int32_t)0x8C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41485F:
	ebx = to32i(dword_512208); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_41488C;
	cmp(ebx, to32i(dword_512264));
	if (jnz())
		goto loc_41488C;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jz())
		goto loc_4148A2;
	eax = to32i(esp+0x84); //mov
	add(esp, (int32_t)0x8C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41488C:
	cmp(to32i(dword_512264), (int32_t)1);
	if (jnz())
		goto loc_4148A2;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_4147A9;
loc_4148A2:
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_4147A9;
	ebp = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	eax = 0x96; //mov
	ebx = 0x20; //mov
	edx = to32i(dword_5121FC); //mov
	edi = di; //movsx
	shl(edx, (int32_t)2);
	to32i(dword_4DB1DC) = eax; //mov
	eax = (int32_t)(intptr_t)aBestlaps; //mov
	to32i(dword_4DB1D8) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x20; //mov
	edx = to32i(dword_5121FC); //mov
	to32i(esp+0x80) = eax; //mov
	to32i(dword_4DB1D8) = ebp; //mov
	ebp = 0x98; //mov
	eax = (int32_t)(intptr_t)aRankspd; //mov
	add(edx, edx);
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0x99; //mov
	ebx = 0x20; //mov
	to32i(esp+0x6C) = eax; //mov
	eax = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	to32i(dword_4DB1DC) = edx; //mov
	to32i(dword_4DB1D8) = eax; //mov
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	eax = (int32_t)(intptr_t)aRanklap; //mov
	ebp = 0x9A; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	to32i(esp+0x78) = eax; //mov
	edx = (int32_t)(intptr_t)(edi+edi); //lea
	eax = (int32_t)(intptr_t)aRankbst; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0x9B; //mov
	ebx = 0x20; //mov
	to32i(esp+0x7C) = eax; //mov
	eax = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	to32i(dword_4DB1DC) = edx; //mov
	to32i(dword_4DB1D8) = eax; //mov
	edx = ecx; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds; //mov
	shl(edx, (int32_t)5);
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(dword_512208); //mov
	ebp = eax; //mov
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_414A9C;
	ax = to16i(dword_51220C); //mov
	to16i(esp+0x88) = ax; //mov
	ebx = esp; //mov
	edx = to32i(esp+0x86); //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x10);
loc_4149C0:
	esp -= 4; _sub_41A040(); esp += 4; //call
loc_4149C5:
	ebx = eax; //mov
loc_4149C7:
	eax = to32i(esp+0x86); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	add(esi, eax);
	eax = bx; //movsx
	eax = to32i(esi+eax*4+0x238); //mov
	edi = (int32_t)(intptr_t)(esp+0x50); //lea
	to32i(esp+0x68) = eax; //mov
	eax = to32i(dword_51221C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	esi = ebp; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
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
	eax = to32i(esp+0x68); //mov
	edx = to32i(esp+0x5C); //mov
	cmp(eax, edx);
	if (jg())
		goto loc_414B88;
loc_414A1F:
	to32i(esp+0x84) = 1; //mov
loc_414A2A:
	edx = to32i(esp+0x74); //mov
	eax = to32i(esp+0x88); //mov
	to16i(edx) = ax; //mov
	eax = to32i(esp+0x70); //mov
	to16i(eax) = bx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_414A4A;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_414A4A:
	edi = to32i(esp+0x7C); //mov
	test(edi, edi);
	if (jz())
		goto loc_414A59;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_414A59:
	ebp = to32i(esp+0x78); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_414A68;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_414A68:
	eax = to32i(esp+0x6C); //mov
	test(eax, eax);
	if (jz())
		goto loc_414A75;
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_414A75:
	edx = to32i(esp+0x80); //mov
	test(edx, edx);
	if (jz())
		goto loc_4147A9;
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(esp+0x84); //mov
	add(esp, (int32_t)0x8C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_414A9C:
	cmp(ebx, ebx);
	if (jnz())
		goto loc_414AAC;
	cmp(ebx, to32i(dword_512264));
	if (jz())
		goto loc_414B2D;
loc_414AAC:
	edx = to32i(esi+0x280); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_414AC3;
	cmp(edx, to32i(esi+0x904));
	if (jnz())
		goto loc_414B49;
loc_414AC3:
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jz())
		goto loc_414AD9;
	cmp(to32i(esi+0x904), (int32_t)2);
	if (jz())
		goto loc_414B5E;
loc_414AD9:
	ebx = esp; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_41A040(); esp += 4; //call
	ebx = esp; //mov
	edx = 1; //mov
	edi = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_41A040(); esp += 4; //call
	edx = di; //movsx
	shl(edx, (int32_t)2);
	ebx = (int32_t)(intptr_t)(esi+edx); //lea
	edx = ax; //movsx
	shl(edx, (int32_t)2);
	to32i(esp+0x64) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esi+edx); //lea
	edx = to32i(esp+0x64); //mov
	edx = to32i(edx+0x238); //mov
	cmp(edx, to32i(ebx+0x8BC));
	if (jge())
		goto loc_414B79;
	xor_(eax, eax);
	ebx = edi; //mov
	to16i(esp+0x88) = ax; //mov
	goto loc_4149C7;
loc_414B2D:
	ebx = esp; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_41A040(); esp += 4; //call
	xor_(edi, edi);
	ebx = eax; //mov
	to16i(esp+0x88) = di; //mov
	goto loc_4149C7;
loc_414B49:
	eax = esi; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	to16i(esp+0x88) = bx; //mov
	ebx = esp; //mov
	goto loc_4149C0;
loc_414B5E:
	edx = 1; //mov
	ebx = esp; //mov
	eax = esi; //mov
	to16i(esp+0x88) = dx; //mov
	edx = 1; //mov
	goto loc_4149C0;
loc_414B79:
	to16i(esp+0x88) = 1; //mov
	goto loc_4149C5;
loc_414B88:
	test(edx, edx);
	if (jnz())
		goto loc_414A2A;
	test(eax, eax);
	if (jg())
		goto loc_414A1F;
	goto loc_414A2A;
}
Fn(void) Game::_sub_414CF0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x30);
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_414CB4; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ax, (int16_t)0xC);
	if (jge())
		goto loc_414D1A;
	test(ax, ax);
	if (jl())
		goto loc_414D1A;
	eax = ax; //cwde
	eax = to32i(esp+eax*4); //mov
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_414D1A:
	xor_(eax, eax);
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_414D30()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x30);
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_414C84; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ax, (int16_t)0xC);
	if (jge())
		goto loc_414D5A;
	test(ax, ax);
	if (jl())
		goto loc_414D5A;
	eax = ax; //cwde
	eax = to32i(esp+eax*4); //mov
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_414D5A:
	xor_(eax, eax);
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_414D70()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	ebx = edx; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	edx = 1; //mov
	to16i(esp+4) = ax; //mov
	sub(eax, edx);
	to16i(esp+8) = dx; //mov
	to32i(esp+0xC) = eax; //mov
	ebp = 4; //mov
loc_414D9B:
	edx = to32i(esp+2); //mov
	esi = to32i(esp+6); //mov
	sar(edx, (int32_t)0x10);
	sar(esi, (int32_t)0x10);
	dec(edx);
	cmp(esi, edx);
	if (jge())
		goto loc_414E72;
	eax = to32i(esp+0xC); //mov
loc_414DB6:
	esi = to32i(esp+6); //mov
	edx = ax; //movsx
	sar(esi, (int32_t)0x10);
	cmp(edx, esi);
	if (jge())
		goto loc_414DCB;
	inc(to16i(esp+8));
	goto loc_414D9B;
loc_414DCB:
	add(edx, edx);
	esi = (int32_t)(intptr_t)(ebx+edx); //lea
	edx = to16i(esi-2); //movsx
	to32i(esp) = edx; //mov
	edi = edx; //mov
	edx = to32i(dword_4D76B8); //mov
	esi = to16i(esi); //movsx
	edi = to32i(edx+edi*2+0x2AE); //mov
	edx = to32i(edx+esi*2+0x2AE); //mov
	sar(edi, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	cmp(edx, edi);
	if (jz())
		goto loc_414DFD;
loc_414DFA:
	dec(eax);
	goto loc_414DB6;
loc_414DFD:
	imul32(esi, 0x684);
	imul32(edx, to32i(esp), 0x684);
	add(edx, ecx);
	edi = (int32_t)(intptr_t)(ecx+esi); //lea
	esi = to32i(edx+0x278); //mov
	cmp(esi, to32i(edi+0x278));
	if (jge())
		goto loc_414E40;
	test(to32i(edx+0x1F4), ebp);
	if (jz())
		goto loc_414E40;
loc_414E25:
	edx = ax; //movsx
	si = to16i(ebx+edx*2); //mov
	di = to16i(ebx+edx*2-2); //mov
	to16i(ebx+edx*2-2) = si; //mov
	to16i(ebx+edx*2) = di; //mov
	dec(eax);
	goto loc_414DB6;
loc_414E40:
	edx = ax; //movsx
	add(edx, edx);
	add(edx, ebx);
	esi = to16i(edx); //movsx
	imul32(esi, 0x684);
	test(to32i(ecx+esi+0x1F4), ebp);
	if (jnz())
		goto loc_414DFA;
	edx = to16i(edx-2); //movsx
	imul32(edx, 0x684);
	test(to32i(ecx+edx+0x1F4), ebp);
	if (jnz())
		goto loc_414E25;
	dec(eax);
	goto loc_414DB6;
loc_414E72:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_414E80()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	ecx = edx; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	edx = to32i(dword_4D76B8); //mov
	eax = ax; //cwde
	ebx = ecx; //mov
	add(edx, (int32_t)0x2B0);
	esp -= 4; _sub_41B470(); esp += 4; //call
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_414D70(); esp += 4; //call
	ax = to16i(ecx+0xE); //mov
	edi = ax; //movsx
	imul32(ebx, edi, 0x684);
	add(ebx, esi);
	dx = to16i(ecx+0xC); //mov
	cx = to16i(ecx+0xA); //mov
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_414EF3;
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jnz())
		goto loc_414EF3;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_414F7C;
	test(ax, ax);
	if (jnz())
		goto loc_414F6C;
	eax = (int32_t)(intptr_t)aC13; //mov
loc_414EEE:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_414EF3:
	eax = dx; //movsx
	imul32(ebx, eax, 0x684);
	add(ebx, esi);
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_414F30;
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jnz())
		goto loc_414F30;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_414F9F;
	test(dx, dx);
	if (jnz())
		goto loc_414F92;
	eax = (int32_t)(intptr_t)aC16; //mov
loc_414F2B:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_414F30:
	eax = cx; //movsx
	imul32(edx, eax, 0x684);
	add(esi, edx);
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_414F65;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_414F65;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_414FCE;
	test(cx, cx);
	if (jz())
		goto loc_414FB1;
	cmp(cx, (int16_t)1);
	if (jz())
		goto loc_414FBD;
loc_414F65:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_414F6C:
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_414EF3;
	eax = (int32_t)(intptr_t)aC14; //mov
	goto loc_414EEE;
loc_414F7C:
	cmp(edi, to32i(dword_51220C));
	if (jnz())
		goto loc_414EF3;
	eax = (int32_t)(intptr_t)aC12; //mov
	goto loc_414EEE;
loc_414F92:
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_414F30;
	eax = (int32_t)(intptr_t)aC17; //mov
	goto loc_414F2B;
loc_414F9F:
	cmp(eax, to32i(dword_51220C));
	if (jnz())
		goto loc_414F30;
	eax = (int32_t)(intptr_t)aC15; //mov
	goto loc_414F2B;
loc_414FB1:
	eax = (int32_t)(intptr_t)aC19; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	goto loc_414F65;
loc_414FBD:
	eax = (int32_t)(intptr_t)aC20; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_414FCE:
	cmp(eax, to32i(dword_51220C));
	if (jnz())
		goto loc_414F65;
	eax = (int32_t)(intptr_t)aC18; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_414FF0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp) = ax; //mov
	xor_(esi, esi);
	xor_(ebx, ebx);
	xor_(eax, eax);
loc_415008:
	ecx = to32i(esp-2); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_415045;
	imul32(edx, 0x684);
	add(edx, edi);
	cmp(to32i(edx+0x278), (int32_t)1);
	if (jz())
		goto loc_41502A;
loc_415027:
	inc(eax);
	goto loc_415008;
loc_41502A:
	test(to8i(edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_415027;
	cmp(to32i(edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_415027;
	esi = 1; //mov
	ebx = eax; //mov
	goto loc_415027;
loc_415045:
	ecx = to32i(dword_51220C); //mov
	edx = bx; //movsx
	cmp(edx, ecx);
	if (jnz())
		goto loc_415086;
	cmp(si, (int16_t)1);
	if (jnz())
		goto loc_415086;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_415097;
	cmp(to32i(dword_512264), (int32_t)2);
	if (jnz())
		goto loc_415097;
	test(bx, bx);
	if (jnz())
		goto loc_41508A;
	eax = (int32_t)(intptr_t)aC25; //mov
loc_415074:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_415079:
	eax = 1; //mov
loc_41507E:
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415086:
	xor_(eax, eax);
	goto loc_41507E;
loc_41508A:
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_415079;
	eax = (int32_t)(intptr_t)aC26; //mov
	goto loc_415074;
loc_415097:
	eax = (int32_t)(intptr_t)aC24; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4150B0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = to32i(dword_4D76BC); //mov
	edi = eax; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	ecx = to32i(dword_512208); //mov
	xor_(edx, edx);
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_4150FA;
	push32(ebx);
	esi = to32i(dword_4D76BC); //mov
	xor_(eax, eax);
	ebx = esi; //mov
loc_4150D9:
	ecx = ax; //movsx
	inc(eax);
	add(dx, to16i(ebx+ecx*2));
	cmp(ax, (int16_t)9);
	if (jl())
		goto loc_4150D9;
	ecx = dx; //movsx
	ax = to16i(edi+ecx*2); //mov
	pop32(ebx);
	to32i(dword_4D76BC) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_4150FA:
	ecx = ax; //movsx
	esi = to32i(dword_4D76BC); //mov
	ax = to16i(edi+ecx*2-2); //mov
	to32i(dword_4D76BC) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_415120()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4150B0(); esp += 4; //call
	edx = ax; //movsx
	imul32(edx, 0x684);
	add(edx, ecx);
	xor_(ebx, ebx);
	edi = to32i(edx+0x280); //mov
	esi = eax; //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_41517D;
	test(to8i(edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_41517D;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_415191;
	cmp(to32i(dword_512264), (int32_t)1);
	if (jle())
		goto loc_415191;
	test(ax, ax);
	if (jnz())
		goto loc_415184;
	eax = (int32_t)(intptr_t)aC28; //mov
loc_415171:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_415176:
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41517D:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415184:
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_415176;
	eax = (int32_t)(intptr_t)aC29; //mov
	goto loc_415171;
loc_415191:
	eax = si; //movsx
	imul32(edx, eax, 0x684);
	test(to8i(ecx+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_415176;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_4151B5;
	cmp(eax, to32i(dword_51220C));
	if (jnz())
		goto loc_415176;
loc_4151B5:
	eax = (int32_t)(intptr_t)aC27; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4151D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	to32i(esp) = edx; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	ecx = to32i(dword_512208); //mov
	to16i(esp+4) = ax; //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_41524F;
	xor_(eax, eax);
loc_4151F8:
	ecx = ax; //movsx
	esi = (int32_t)(intptr_t)(ecx+ecx); //lea
	ecx = to32i(dword_4D76BC); //mov
	di = to16i(ecx+esi); //mov
	inc(eax);
	add(edx, edi);
	cmp(ax, (int16_t)9);
	if (jl())
		goto loc_4151F8;
	eax = dx; //movsx
	edi = to32i(esp); //mov
	add(eax, eax);
	add(eax, edi);
	di = to16i(eax); //mov
loc_41521E:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_415329;
	xor_(edx, edx);
loc_41522D:
	ecx = to32i(esp+2); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_415270;
	imul32(ecx, eax, 0x684);
	add(ecx, ebp);
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_41525D;
loc_41524C:
	inc(edx);
	goto loc_41522D;
loc_41524F:
	eax = ax; //cwde
	esi = to32i(esp); //mov
	add(eax, eax);
	add(eax, esi);
	di = to16i(eax-2); //mov
	goto loc_41521E;
loc_41525D:
	esi = di; //movsx
	cmp(eax, esi);
	if (jz())
		goto loc_41524C;
	cmp(to32i(ecx+0x280), (int32_t)2);
	if (jnz())
		goto loc_41524C;
	inc(ebx);
	goto loc_41524C;
loc_415270:
	cmp(bx, (int16_t)1);
	if (jg())
		goto loc_4152A2;
	test(bx, bx);
	if (jle())
		goto loc_415289;
	test(di, di);
	if (jnz())
		goto loc_415289;
	cmp(to32i(ebp+0x904), (int32_t)2);
	if (jz())
		goto loc_4152C9;
loc_415289:
	test(bx, bx);
	if (jle())
		goto loc_415297;
	cmp(to32i(ebp+0x280), (int32_t)2);
	if (jz())
		goto loc_4152F0;
loc_415297:
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4152A2:
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_4152BD;
	eax = (int32_t)(intptr_t)aC37; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	goto loc_415297;
loc_4152BD:
	eax = (int32_t)(intptr_t)aC33; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	goto loc_415297;
loc_4152C9:
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_4152E4;
	eax = (int32_t)(intptr_t)aC36; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	goto loc_415297;
loc_4152E4:
	eax = (int32_t)(intptr_t)aC32; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	goto loc_415297;
loc_4152F0:
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_415314;
	eax = (int32_t)(intptr_t)aC35; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415314:
	eax = (int32_t)(intptr_t)aC31; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415329:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_4153A0;
	ecx = to32i(dword_51220C); //mov
	eax = di; //movsx
	cmp(eax, ecx);
	if (jz())
		goto loc_415297;
	imul32(eax, ecx, 0x684);
	add(ebp, eax);
	cmp(to32i(ebp+0x280), (int32_t)2);
	if (jnz())
		goto loc_415297;
	eax = to32i(ebp+0x21C); //mov
	cmp(to32i(eax), (int32_t)0x24);
	if (jz())
		goto loc_415297;
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_41538B;
	eax = (int32_t)(intptr_t)aC34; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41538B:
	eax = (int32_t)(intptr_t)aC30; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4153A0:
	test(di, di);
	if (jz())
		goto loc_415297;
	cmp(to32i(ebp+0x280), (int32_t)2);
	if (jnz())
		goto loc_415297;
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_41538B;
	eax = (int32_t)(intptr_t)aC34; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4153E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	to32i(esp) = edx; //mov
	ebp = to32i(dword_51220C); //mov
	xor_(esi, esi);
	xor_(eax, eax);
	xor_(ebx, ebx);
loc_4153F9:
	edx = ax; //movsx
	ecx = to32i(esp); //mov
	add(edx, edx);
	add(edx, ecx);
	edx = to16i(edx); //movsx
	imul32(ecx, edx, 0x684);
	test(to8i(ecx+edi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_415421;
	cmp(edx, ebp);
	if (jz())
		goto loc_415421;
	ebx = 1; //mov
	esi = eax; //mov
loc_415421:
	inc(eax);
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_4153F9;
	eax = esi; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415440()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = edx; //mov
	xor_(eax, eax);
loc_415448:
	edx = ax; //movsx
	edx = to16i(ebx+edx*2); //movsx
	imul32(edx, 0x684);
	test(to8i(ecx+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_415462;
	inc(eax);
	goto loc_415448;
loc_415462:
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415470()
{
	dl = to8i(byte_512ECC); //mov
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_41547F;
	or_(to8i(eax+8), dl);
	return;
loc_41547F:
	and_(to8i(eax+8), (int8_t)0xFE);
}
Fn(void) Game::_sub_415490()
{
	push32(edx);
	edx = to32i(dword_5121F8); //mov
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_4154B3;
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_4154B3;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jz())
		goto loc_4154B9;
	cmp(to32i(dword_512264), (int32_t)2);
	if (jl())
		goto loc_4154B9;
loc_4154B3:
	or_(to8i(eax+8), (int8_t)1);
	pop32(edx);
	return;
loc_4154B9:
	and_(to8i(eax+8), (int8_t)0xFE);
	pop32(edx);
}
Fn(void) Game::_sub_4154C0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC8);
	to32i(esp+0xAC) = eax; //mov
	ebx = edx; //mov
	ecx = 1; //mov
	esi = (int32_t)(intptr_t)off_414C30; //mov
	xor_(edx, edx);
	xor_(edi, edi);
	xor_(ebp, ebp);
	to32i(esp+0xB0) = edx; //mov
	to32i(esp+0xC0) = ecx; //mov
	to32i(esp+0xC4) = ecx; //mov
	to32i(esp+0xBC) = edi; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x8C); //lea
	to16i(esp+0xB8) = dx; //mov
	to16i(esp+0xB4) = dx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(edx, edx);
	ecx = 0xF; //mov
	edi = (int32_t)(intptr_t)(esp+0x50); //lea
	esi = (int32_t)(intptr_t)off_414C48; //mov
	to32i(esp+0xA8) = edx; //mov
	to32i(esp+0xA4) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_41A020(); esp += 4; //call
	edi = eax; //mov
	cmp(ax, (int16_t)2);
	if (jl())
		goto loc_415594;
	xor_(edx, edx);
loc_41554D:
	ecx = di; //movsx
	eax = dx; //movsx
	cmp(eax, ecx);
	if (jge())
		goto loc_415594;
	imul32(eax, 0x684);
	esi = (int32_t)(intptr_t)(ebx+eax); //lea
	cmp(to32i(esi+0x278), (int32_t)1);
	if (jz())
		goto loc_41556C;
loc_415569:
	inc(edx);
	goto loc_41554D;
loc_41556C:
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_415569;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_415569;
	ecx = 1; //mov
	to16i(esp+0xB8) = dx; //mov
	to32i(esp+0xB0) = ecx; //mov
	goto loc_415569;
loc_415594:
	cmp(to16i(esp+0xB0), (int16_t)0);
	if (jz())
		goto loc_415887;
	eax = to32i(esp+0xB6); //mov
	esi = to32i(dword_51220C); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, esi);
	if (jz())
		goto loc_4155C4;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_415887;
loc_4155C4:
	cmp(di, (int16_t)2);
	if (jl())
		goto loc_415887;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4155E6;
	cmp(to16i(esp+0xB8), (int16_t)1);
	if (jg())
		goto loc_415887;
loc_4155E6:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_415819;
loc_4155F3:
	eax = (int32_t)(intptr_t)off_4D3DB8; //mov
	xor_(edi, edi);
	edx = 1; //mov
	to32i(dword_4D2098) = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_4159E0(); esp += 4; //call
	eax = to32i(esp+0xB6); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	eax = to32i(ebx+eax+0x21C); //mov
	dx = to16i(eax); //mov
	xor_(ecx, ecx);
	to16i(esp+0xB4) = dx; //mov
	cl = to8i(byte_512DBD); //mov
	edx = to32i(esp+0xB2); //mov
	add(ecx, (int32_t)0xC);
	sar(edx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jl())
		goto loc_41589A;
loc_415650:
	xor_(edi, edi);
loc_415652:
	ecx = to32i(esp+0xA8); //mov
	cmp(edi, ecx);
	if (jnz())
		goto loc_415831;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ebp, eax);
	eax = to32i(esp+0xBC); //mov
	edx = 0x400; //mov
	inc(eax);
	ebx = ecx; //mov
	to32i(esp+0xBC) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = (int32_t)(intptr_t)aBack_1; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(esp+0xB2); //mov
	dl = to8i(byte_512DBD); //mov
	sar(eax, (int32_t)0x10);
	add(edx, (int32_t)0xC);
	esi = ebp; //mov
	cmp(eax, edx);
	if (jge())
		goto loc_4156B8;
	edx = 0x400; //mov
	eax = esp; //mov
	ecx = edi; //mov
	ebx = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_4156B8:
	xor_(eax, eax);
	edx = 0x2800; //mov
	al = to8i(byte_512DFB); //mov
	ecx = edi; //mov
	ebx = edi; //mov
	eax = to32i(esp+eax*4+0x8C); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jnz())
		goto loc_4158B8;
	eax = 0x12; //mov
	ecx = edi; //mov
	ebx = edi; //mov
	edx = esi; //mov
loc_4156FE:
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_415703:
	ebx = to32i(esp+0xBC); //mov
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(bx, (int16_t)0x11);
	if (jl())
		goto loc_415731;
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
loc_415731:
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jz())
		goto loc_415741;
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
loc_415741:
	esp -= 4; _sub_405960(); esp += 4; //call
	bl = to8i(byte_512ECC); //mov
	edx = eax; //mov
	cmp(bl, (int8_t)1);
	if (jz())
		goto loc_41575A;
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
loc_41575A:
	test(dx, dx);
	if (jz())
		goto loc_4158EF;
	cmp(ebp, to32i(esp+0xA4));
	if (jle())
		goto loc_4158EF;
loc_415770:
	eax = (int32_t)(intptr_t)(ebp+0xF); //lea
	to32i(esp+0xA4) = eax; //mov
	eax = to32i(esp+0xAC); //mov
	edx = 0xD; //mov
	bh = to8i(byte_512ECC); //mov
	to16i(eax+0xA) = di; //mov
	cmp(bh, (int8_t)1);
	if (jz())
		goto loc_41579C;
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
loc_41579C:
	eax = to32i(esp+0xAC); //mov
	edx = dx; //movsx
	esp -= 4; _sub_410414(); esp += 4; //call
	cl = to8i(byte_512ECC); //mov
	to32i(esp+0xA8) = eax; //mov
	cmp(cl, (int8_t)1);
	if (jz())
		goto loc_4157C4;
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
loc_4157C4:
	esi = to32i(esp+0xC0); //mov
	cmp(si, (int16_t)1);
	if (jnz())
		goto loc_415652;
	cmp(to16i(esp+0xBC), (int16_t)0x11);
	if (jl())
		goto loc_415652;
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jz())
		goto loc_415652;
	edx = to32i(esp+0xC4); //mov
	to32i(esp+0xC0) = edi; //mov
	cmp(dx, si);
	if (jz())
		goto loc_41590E;
loc_415808:
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_415652;
loc_415819:
	eax = to32i(esp+0xB6); //mov
	esi = to32i(dword_51220C); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, esi);
	if (jz())
		goto loc_4155F3;
loc_415831:
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jz())
		goto loc_41585A;
	xor_(eax, eax);
	edi = 1; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_489800(); esp += 4; //call
loc_41585A:
	cmp(to16i(esp+0xB4), (int16_t)0xC);
	if (jge())
		goto loc_415882;
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jnz())
		goto loc_415992;
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
loc_41587D:
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_415882:
	esp -= 4; _sub_4159C0(); esp += 4; //call
loc_415887:
	eax = to32i(esp+0xB0); //mov
	add(esp, (int32_t)0xC8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41589A:
	eax = to32i(eax); //mov
	edx = to32i(esp+eax*4+0x50); //mov
	push32(edx);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	goto loc_415650;
loc_4158B8:
	cmp(to16i(esp+0xB4), (int16_t)0xC);
	if (jge())
		goto loc_415703;
	edx = to32i(esp+0xB2); //mov
	sar(edx, (int32_t)0x10);
	eax = edx; //mov
	esp -= 4; _sub_414D30(); esp += 4; //call
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_414CF0(); esp += 4; //call
	ebx = eax; //mov
	edx = esi; //mov
	eax = 0x12; //mov
	goto loc_4156FE;
loc_4158EF:
	cmp(ebp, (int32_t)0x500);
	if (jle())
		goto loc_4157C4;
	cmp(di, to16i(esp+0xC0));
	if (jz())
		goto loc_415770;
	goto loc_4157C4;
loc_41590E:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_415970;
	ebx = to32i(esp+0xB8); //mov
	cmp(di, bx);
	if (jz())
		goto loc_41594E;
	cmp(bx, dx);
	if (jnz())
		goto loc_415808;
	eax = (int32_t)(intptr_t)aC02; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_415652;
loc_41594E:
	eax = (int32_t)(intptr_t)aC01; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_415652;
loc_415970:
	eax = (int32_t)(intptr_t)aC00; //mov
	esp -= 4; _sub_403480(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_415652;
loc_415992:
	edx = to32i(esp+0xB2); //mov
	sar(edx, (int32_t)0x10);
	eax = edx; //mov
	esp -= 4; _sub_414D30(); esp += 4; //call
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_414CF0(); esp += 4; //call
	ebx = eax; //mov
	xor_(edx, edx);
	eax = 0x12; //mov
	goto loc_41587D;
}
Fn(void) Game::_sub_4159C0()
{
	push32(edx);
	edx = to32i(dword_4D4208); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4159CD;
	pop32(edx);
	return;
loc_4159CD:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D4208) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4159E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	to32i(esp+0x100) = eax; //mov
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	esi = (int32_t)(intptr_t)dword_414BD0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(esp+0xD0); //lea
	esi = (int32_t)(intptr_t)off_414C00; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_41A020(); esp += 4; //call
	esi = eax; //mov
	ah = to8i(byte_512ECC); //mov
	xor_(ebp, ebp);
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_415A7F;
	cmp(dx, (int16_t)2);
	if (jnz())
		goto loc_415A7F;
	edx = (int32_t)(intptr_t)aOmg6; //mov
	eax = to32i(dword_4D40B8); //mov
	ecx = 0xD; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	xor_(ebx, ebx);
	push32(ebp);
loc_415A49:
	edx = eax; //mov
loc_415A4B:
	xor_(eax, eax);
	esp -= 4; _sub_4280B0(); esp += 4; //call
loc_415A52:
	ebx = to32i(dword_4D4208); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_415A6B;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D4208) = esi; //mov
loc_415A6B:
	test(ebp, ebp);
	if (jnz())
		goto loc_415BD7;
loc_415A73:
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415A7F:
	cmp(dx, (int16_t)1);
	if (jnb())
		goto loc_415AA4;
	test(dx, dx);
	if (jnz())
		goto loc_415A52;
	edx = (int32_t)(intptr_t)aOmg6; //mov
	eax = to32i(dword_4D40B8); //mov
	ecx = 0xD; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0);
	goto loc_415A49;
loc_415AA4:
	if (jbe())
		goto loc_415B0F;
	cmp(dx, (int16_t)2);
	if (jnz())
		goto loc_415A52;
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	ecx = ax; //movsx
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = ecx; //mov
	esp -= 4; _sub_41B230(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	push32(eax);
	edx = to32i(dword_5134D4); //mov
	push32(edx);
	push32(aSS_qfs_1);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	edx = (int32_t)(intptr_t)aRec6; //mov
	to32i(dword_4D4208) = eax; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	push32(0x19);
	edx = eax; //mov
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ecx = ax; //movsx
	goto loc_415A4B;
loc_415B0F:
	ecx = (int32_t)(intptr_t)aCNfs2seFront_3; //mov
	ebx = 0xCCA; //mov
	eax = (int32_t)(intptr_t)aDumirank; //mov
	edx = si; //movsx
	to32i(dword_4DB1DC) = ebx; //mov
	add(edx, edx);
	ebx = 0x20; //mov
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_415A73;
	xor_(edx, edx);
loc_415B45:
	ecx = si; //movsx
	eax = dx; //movsx
	cmp(eax, ecx);
	if (jge())
		goto loc_415B6A;
	imul32(eax, 0x684);
	add(eax, to32i(esp+0x100));
	eax = to32i(eax+0x278); //mov
	to16i(ebp+eax*2-2) = dx; //mov
	inc(edx);
	goto loc_415B45;
loc_415B6A:
	eax = to16i(ebp+0); //movsx
	imul32(eax, 0x684);
	add(eax, to32i(esp+0x100));
	eax = to32i(eax+0x21C); //mov
	ax = to16i(eax); //mov
	cmp(ax, (int16_t)0xC);
	if (jge())
		goto loc_415BD7;
	ecx = ax; //movsx
	edi = to32i(esp+ecx*4+0xD0); //mov
	push32(edi);
	eax = to32i(dword_5134B4); //mov
	push32(eax);
	push32(aSS_qfs_1);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	xor_(edx, edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = esp; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_488058(); esp += 4; //call
	edx = (int32_t)(intptr_t)aCar6_0; //mov
	to32i(dword_4D4208) = eax; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	push32(0);
	edx = eax; //mov
	ecx = to32i(esp+ecx*4+0xA4); //mov
	goto loc_415A4B;
loc_415BD7:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415BF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ah = 1; //mov
	ebx = 1; //mov
	xor_(edx, edx);
	xor_(cl, cl);
	to8i(byte_4D76C1) = ah; //mov
	to8i(byte_4D76C2) = ah; //mov
	to8i(byte_4D76C3) = ah; //mov
	to8i(byte_4D76C4) = ah; //mov
	to8i(byte_4D76C6) = cl; //mov
	to8i(byte_4D76C0) = ah; //mov
	to16i(word_4D4200) = dx; //mov
	to16i(word_4D4204) = bx; //mov
	xor_(ch, ch);
	xor_(al, al);
	to8i(byte_4D76C7) = ch; //mov
	to8i(byte_4D76C8) = al; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415C50()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x58);
	to16i(esp+0x50) = dx; //mov
	to16i(esp+0x54) = bx; //mov
	edi = eax; //mov
	imul32(esi, eax, 0x1A);
	add(esi, ecx);
loc_415C66:
	edx = to32i(esp+0x4E); //mov
	eax = di; //movsx
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jg())
		goto loc_415CBA;
	cmp(to8i(byte_512DFB), (int8_t)2);
	if (jnz())
		goto loc_415CB2;
	push32(eax);
	push32(aD_3);
loc_415C83:
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	edx = to32i(esp+0x56); //mov
	ecx = 0x12; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	ebx = si; //movsx
	push32(4);
	sar(edx, (int32_t)0x10);
	inc(edi);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(esi, (int32_t)0x1A);
	goto loc_415C66;
loc_415CB2:
	push32(eax);
	push32(aD_);
	goto loc_415C83;
loc_415CBA:
	add(esp, (int32_t)0x58);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_415CC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(2);
	ecx = 0x12; //mov
	push32(5);
	eax = to32i(dword_51221C); //mov
	ebx = 0xBE; //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	add(eax, (int32_t)0x40);
	edx = 0x7A; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415D00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	add(eax, (int32_t)0x295);
	esi = ax; //movsx
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27E; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = esi; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415D40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x50);
	esp -= 4; _sub_41A3E0(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(5);
	eax = 0x284; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	sub(eax, (int32_t)0x18);
	ebx = ax; //movsx
	eax = 0x27E; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(esp, (int32_t)0x50);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415DA0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x50);
	eax = edx; //mov
	esp -= 4; _sub_41A170(); esp += 4; //call
	edi = esp; //mov
	esi = eax; //mov
	push32(edi);
loc_415DB3:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_415DCB;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_415DB3;
loc_415DCB:
	pop32(edi);
	push32(2);
	push32(5);
	eax = 0x2A3; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2A3; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415E00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	push32(5);
	push32(5);
	eax = 0x2A2; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2A2; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = esi; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415E40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)aBack_1; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_415E60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4ED8);
	ebp = eax; //mov
	esi = to32i(dword_512214); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+0x4EB4) = edx; //mov
	to32i(esp+0x4EB0) = ecx; //mov
	to32i(esp+0x4EB8) = ecx; //mov
	xor_(ebx, ecx);
	edx = 1; //mov
	to32i(esp+0x4EC8) = ebx; //mov
	to32i(esp+0x4EC4) = edx; //mov
	cmp(esi, (int32_t)2);
	if (jz())
		goto loc_415F26;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_415F37;
	to16i(word_4D3B26) = 0x2DD; //mov
loc_415EC2:
	push32(edi);
	eax = to32i(ebp+0x14); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_415470(); esp += 4; //call
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4ED8) = ax; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_41A570(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_415F42;
	xor_(edi, edi);
	to16i(esp+0x4EC4) = di; //mov
loc_415EFB:
	xor_(eax, eax);
loc_415EFD:
	ecx = to32i(esp+0x4ED6); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_415F52;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x27C); //mov
	to16i(esp+edx*2+0x4E9A) = ax; //mov
	inc(eax);
	goto loc_415EFD;
loc_415F26:
	eax = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x4ED8);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_415F37:
	to16i(word_4D3B26) = 0x2DE; //mov
	goto loc_415EC2;
loc_415F42:
	ax = to16i(dword_51220C); //mov
	to16i(esp+0x4EC4) = ax; //mov
	goto loc_415EFB;
loc_415F52:
	xor_(eax, eax);
loc_415F54:
	ecx = to32i(esp+0x4ED6); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_415F7D;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x27C); //mov
	to16i(esp+edx*2+0x4E82) = ax; //mov
	inc(eax);
	goto loc_415F54;
loc_415F7D:
	xor_(edx, edx);
	eax = ebp; //mov
	to32i(dword_4D2098) = edx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	edx = 2; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(esp+0x4EB8); //mov
	esp -= 4; _sub_4159E0(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_416323;
loc_415FA9:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edi = to32i(esp+0x4EBC); //mov
	edx = to32i(esp+0x4ECC); //mov
	add(edi, eax);
	eax = 1; //mov
	add(edx, eax);
	to32i(esp+0x4EBC) = edi; //mov
	to32i(esp+0x4ECC) = edx; //mov
	dl = to8i(byte_4D76C4); //mov
	to32i(esp+0x4EC0) = edi; //mov
	test(dl, dl);
	if (jnz())
		goto loc_41618A;
	xor_(edi, edi);
	to32i(esp+0x4EC8) = edi; //mov
loc_415FF1:
	test(ax, ax);
	if (jz())
		goto loc_4161DD;
loc_415FFA:
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D41D0+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = 0x2D8; //mov
	edx = to32i(esp+0x4ED6); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2D8; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = 1; //mov
	esp -= 4; _sub_415C50(); esp += 4; //call
	xor_(edx, edx);
	ebx = 0x1A; //mov
	to16i(esp+0x4ED0) = dx; //mov
	to32i(esp+0x4ED4) = ebx; //mov
loc_416069:
	edx = to32i(esp+0x4ED6); //mov
	eax = to32i(esp+0x4ECE); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jge())
		goto loc_416413;
	eax = to32i(esp+eax*2+0x4E9A); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	test(to8i(esp+edx+0x1F8), (int8_t)4);
	if (jz())
		goto loc_416361;
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(3);
	eax = 0x2D9; //mov
	edi = to32i(esp+0x4EDC); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
loc_4160D8:
	ebx = ax; //movsx
	eax = 0x2D9; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esp+eax*2+0x4E9A); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	cmp(to32i(esp+eax+0x284), (int32_t)1);
	if (jz())
		goto loc_4163DF;
	cmp(to16i(esp+0x4ED0), (int16_t)0);
	if (jnz())
		goto loc_4163AB;
	eax = 0x2E3; //mov
	esi = to32i(esp+0x4ED4); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2E3; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2D4; //mov
loc_41615F:
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = to32i(esp+0x4ED0); //mov
	edi = to32i(esp+0x4ED4); //mov
	inc(eax);
	add(edi, (int32_t)0x1A);
	to16i(esp+0x4ED0) = ax; //mov
	to32i(esp+0x4ED4) = edi; //mov
	goto loc_416069;
loc_41618A:
	cmp(ax, to16i(esp+0x4EC8));
	if (jnz())
		goto loc_415FF1;
	cmp(to16i(esp+0x4ECC), (int16_t)0);
	if (jl())
		goto loc_415FF1;
	xor_(dh, dh);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to8i(byte_4D76C4) = dh; //mov
	edx = (int32_t)(intptr_t)(esp+0x4E9C); //lea
	xor_(esi, esi);
	esp -= 4; _sub_415120(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x4E9C); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to32i(esp+0x4EC8) = esi; //mov
	esp -= 4; _sub_414FF0(); esp += 4; //call
	goto loc_415FFA;
loc_4161DD:
	cmp(to32i(dword_4D2094), (int32_t)0);
	if (jnz())
		goto loc_415FFA;
	cmp(to16i(esp+0x4ECC), (int16_t)0);
	if (jz())
		goto loc_4161FA;
	esp -= 4; _sub_423B90(); esp += 4; //call
loc_4161FA:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_416315;
	ecx = to32i(dword_5637F4); //mov
	cmp(ecx, to32i(esp+0x4EB4));
	if (jle())
		goto loc_416315;
	ebx = to32i(esp+0x4EC8); //mov
	test(bx, bx);
	if (jnz())
		goto loc_416315;
	ecx = to32i(dword_5637F4); //mov
	add(ecx, (int32_t)0xF);
	to32i(esp+0x4EB4) = ecx; //mov
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_41648D;
	edx = 0xD; //mov
	to16i(ebp+0xA) = bx; //mov
loc_416257:
	eax = 1; //mov
	esp -= 4; _sub_41A1A0(); esp += 4; //call
	esp -= 4; _sub_415BF0(); esp += 4; //call
	xor_(bh, bh);
	xor_(esi, esi);
	edi = to32i(dword_4D76BC); //mov
	to8i(byte_512DAA) = bh; //mov
	to32i(dword_5121F8) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_41629A;
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)7);
	if (jl())
		goto loc_41629A;
	esp -= 4; _sub_41A2A0(); esp += 4; //call
	to32i(dword_4D76BC) = esi; //mov
loc_41629A:
	eax = to32i(esp+0x4EC2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	cmp(to32i(esp+eax+0x27C), (int32_t)1);
	if (jnz())
		goto loc_4164A7;
	cmp(to32i(esp+eax+0x284), (int32_t)2);
	if (jnz())
		goto loc_4164A7;
	or_(to8i(byte_512DBC), (int8_t)1);
loc_4162CD:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_4162F0;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_4162F0;
	xor_(al, al);
	to8i(byte_4D76C3) = al; //mov
	to8i(byte_4D76C1) = al; //mov
	to8i(byte_4D76C0) = al; //mov
	to8i(byte_4D76C4) = al; //mov
loc_4162F0:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_416304;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_416304;
	esp -= 4; _sub_4098D0(); esp += 4; //call
	xor_(edx, edx);
loc_416304:
	edx = dx; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EB8) = eax; //mov
loc_416315:
	cmp(to32i(esp+0x4EB8), (int32_t)0);
	if (jz())
		goto loc_415FA9;
loc_416323:
	ebx = 0xFFFFFFF6; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esi = 1; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = esi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(esp+0x4EB8); //mov
	pop32(edi);
	add(esp, (int32_t)0x4ED8);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_416361:
	eax = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, edx);
	edi = (int32_t)(intptr_t)(esp+0x4E34); //lea
	esp -= 4; _sub_41A170(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_416376:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41638E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_416376;
loc_41638E:
	pop32(edi);
	push32(2);
	push32(3);
	eax = 0x2D9; //mov
	esi = to32i(esp+0x4EDC); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	goto loc_4160D8;
loc_4163AB:
	eax = 0x2E4; //mov
	ecx = to32i(esp+0x4ED4); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ecx);
	ebx = ax; //movsx
	eax = 0x2E4; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2E4; //mov
	goto loc_41615F;
loc_4163DF:
	eax = 0x2E3; //mov
	edx = to32i(esp+0x4ED4); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	ebx = ax; //movsx
	eax = 0x2E3; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2A5; //mov
	goto loc_41615F;
loc_416413:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	ebx = 0xFFFFFFF6; //mov
	eax = to32i(eax+0x20); //mov
	edx = to32i(esp+0x4EC0); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = to32i(dword_51221C); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_416465;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_416465:
	cmp(to16i(esp+0x4ECC), (int16_t)0);
	if (jz())
		goto loc_416475;
loc_416475:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_4161FA;
loc_41648D:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_4162CD;
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_416257;
	goto loc_4162CD;
loc_4164A7:
	xor_(esi, esi);
	xor_(cl, cl);
	to32i(dword_51221C) = esi; //mov
	to8i(byte_512DB0) = cl; //mov
	goto loc_4162CD;
}
Fn(void) Game::_sub_4164C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x14);
	to8i(esp+0x10) = al; //mov
	cmp(al, (int8_t)4);
	if (jnz())
		goto loc_4164F6;
	ecx = to32i(dword_512264); //mov
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_4164EE;
	ebx = (int32_t)(intptr_t)(ecx+ecx); //lea
	xor_(eax, eax);
	ecx = to32i(dword_4D76BC); //mov
loc_4164E7:
	cmp(to16i(ecx+eax), (int16_t)0);
	if (jz())
		goto loc_41653D;
loc_4164EE:
	cmp(edx, to32i(dword_512264));
	if (jz())
		goto loc_416547;
loc_4164F6:
	dl = to8i(esp+0x10); //mov
	cmp(dl, (int8_t)3);
	if (jnz())
		goto loc_416573;
	cmp(to32i(dword_51220C), (int32_t)0);
	if (jz())
		goto loc_41654B;
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_41654B;
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_416532;
	edx = 1; //mov
	to16i(word_51345C) = dx; //mov
	to16i(word_51345A) = dx; //mov
loc_416532:
	al = 3; //mov
loc_416534:
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41653D:
	add(eax, (int32_t)2);
	inc(edx);
	cmp(eax, ebx);
	if (jl())
		goto loc_4164E7;
	goto loc_4164EE;
loc_416547:
	al = 4; //mov
	goto loc_416534;
loc_41654B:
	cl = 3; //mov
	edi = 0x16; //mov
	ebx = 4; //mov
	edx = esp; //mov
	xor_(eax, eax);
	to8i(esp) = cl; //mov
	to16i(esp+2) = di; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	al = cl; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_416573:
	cmp(dl, (int8_t)4);
	if (jnz())
		goto loc_416657;
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_41664A;
loc_41658A:
	bl = 3; //mov
	eax = 2; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	to8i(esp+4) = bl; //mov
	to16i(esp+6) = ax; //mov
	eax = 0x308; //mov
	ebx = 4; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	ebx = 0x16; //mov
	xor_(edx, edx);
loc_4165BB:
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cx = to16i(word_51345A); //mov
	cmp(dx, cx);
	if (jnz())
		goto loc_416532;
	cmp(cx, to16i(word_513458));
	if (jz())
		goto loc_41668E;
	cx = to16i(word_51343A); //mov
	cmp(bx, cx);
	if (jz())
		goto loc_416532;
	cmp(cx, (int16_t)2);
	if (jnz())
		goto loc_4165BB;
loc_4165F5:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_4167BC;
	cmp(to8i(esp+0x10), (int8_t)1);
	if (jnz())
		goto loc_4167A6;
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_4166E0;
	eax = 2; //mov
	edx = 1; //mov
loc_416625:
	ecx = to32i(dword_513408); //mov
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_41676F;
	cmp(to16i(word_513448+eax), (int16_t)0);
	if (jnz())
		goto loc_416744;
	inc(edx);
	add(eax, (int32_t)2);
	goto loc_416625;
loc_41664A:
	cmp(to32i(dword_512208), (int32_t)4);
	if (jnz())
		goto loc_41658A;
loc_416657:
	cmp(to8i(esp+0x10), (int8_t)2);
	if (jnz())
		goto loc_4165F5;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_4166AD;
	eax = 2; //mov
	edx = 1; //mov
	ebx = eax; //mov
loc_416674:
	ecx = to32i(dword_513408); //mov
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_4166D5;
	inc(edx);
	add(eax, (int32_t)2);
	goto loc_416674;
loc_41668E:
	di = to16i(dword_513428+2); //mov
	cmp(bx, di);
	if (jz())
		goto loc_416532;
	cmp(di, (int16_t)1);
	if (jz())
		goto loc_4165F5;
	goto loc_4165BB;
loc_4166AD:
	bx = to16i(dword_513428+2); //mov
	cmp(bx, (int16_t)0x16);
	if (jz())
		goto loc_416532;
	cmp(bx, (int16_t)2);
	if (jz())
		goto loc_4166CA;
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_4166D5;
loc_4166CA:
	al = 4; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4166D5:
	xor_(al, al);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4166E0:
	dx = to16i(word_51343A); //mov
	cmp(dx, (int16_t)0x16);
	if (jz())
		goto loc_416532;
	eax = to32i(dword_4D76BC); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jnz())
		goto loc_4167A6;
	cmp(dx, (int16_t)2);
	if (jnz())
		goto loc_4167A6;
loc_41670A:
	eax = 0x308; //mov
	edx = 1; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 0xF; //mov
	eax = 0x9600; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_4166CA;
	al = 3; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_416744:
	dl = 3; //mov
	eax = 0x16; //mov
	ebx = 4; //mov
	to8i(esp+8) = dl; //mov
	to16i(esp+0xA) = ax; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	al = 3; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41676F:
	eax = to32i(dword_4D76BC); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jnz())
		goto loc_4167A6;
	eax = 2; //mov
	edx = 1; //mov
	ebx = eax; //mov
loc_416786:
	ecx = to32i(dword_513408); //mov
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_4167A6;
	cmp(bx, to16i(dword_513436+2+eax));
	if (jz())
		goto loc_41670A;
	inc(edx);
	add(eax, (int32_t)2);
	goto loc_416786;
loc_4167A6:
	cmp(to8i(esp+0x10), (int8_t)4);
	if (jz())
		goto loc_41670A;
loc_4167B1:
	xor_(al, al);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4167BC:
	ax = to16i(dword_513428+2); //mov
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_416839;
loc_4167C8:
	cmp(to8i(esp+0x10), (int8_t)4);
	if (jnz())
		goto loc_416858;
loc_4167D3:
	eax = 0x308; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	si = to16i(dword_513428+2); //mov
	cmp(si, (int16_t)2);
	if (jnz())
		goto loc_416805;
	al = 3; //mov
	ebx = 4; //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	to8i(esp+0xC) = al; //mov
	xor_(eax, eax);
	to16i(esp+0xE) = si; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
loc_416805:
	edx = 1; //mov
	xor_(eax, eax);
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 0xF; //mov
	eax = 0x9600; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_4166CA;
	al = 3; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_416839:
	cmp(ax, (int16_t)2);
	if (jz())
		goto loc_4167C8;
loc_41683F:
	cmp(to16i(dword_513428+2), (int16_t)0x16);
	if (jnz())
		goto loc_4167B1;
	al = 3; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_416858:
	eax = to32i(dword_4D76BC); //mov
	edx = to32i(dword_51220C); //mov
	cmp(to16i(eax+edx*2), (int16_t)0);
	if (jz())
		goto loc_4167D3;
	goto loc_41683F;
}
Fn(void) Game::_sub_416884()
{
	static const void *const off_416870[] = {
		&&loc_416997,
		&&loc_416C3A,
		&&loc_416BFF,
		&&loc_416BFF,
		&&loc_416BFF,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4F0C);
	ebp = eax; //mov
	esi = to32i(dword_512214); //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	to32i(esp+0x4EE0) = edx; //mov
	to32i(esp+0x4EF8) = ebx; //mov
	to32i(esp+0x4EEC) = ecx; //mov
	to32i(esp+0x4EE8) = ecx; //mov
	to32i(esp+0x4EFC) = ebx; //mov
	edx = 1; //mov
	to16i(esp+0x4F00) = bx; //mov
	to32i(esp+0x4EF0) = edx; //mov
	cmp(esi, (int32_t)2);
	if (jnz())
		goto loc_4168EA;
	eax = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x4F0C);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4168EA:
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4F04) = ax; //mov
	edx = ax; //movsx
	eax = esp; //mov
	esp -= 4; _sub_41A570(); esp += 4; //call
	xor_(eax, eax);
loc_416903:
	ecx = to32i(esp+0x4F02); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_416941;
	imul32(ecx, edx, 0x684);
	ebx = (int32_t)(intptr_t)(edx*4+0); //lea
	edx = to32i(esp+ecx+0x234); //mov
	to32i(esp+ebx+0x4E80) = edx; //mov
	edx = to32i(esp+ecx+0x278); //mov
	to16i(esp+edx*2+0x4EAE) = ax; //mov
	inc(eax);
	goto loc_416903;
loc_416941:
	xor_(eax, eax);
loc_416943:
	ecx = to32i(esp+0x4F02); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_41696C;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x278); //mov
	to16i(esp+edx*2+0x4EC6) = ax; //mov
	inc(eax);
	goto loc_416943;
loc_41696C:
	push32(edi);
	eax = to32i(ebp+0x14); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_415470(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x4EB4); //lea
	esp -= 4; _sub_4150B0(); esp += 4; //call
	edx = to32i(dword_512208); //mov
	cmp(edx, (int32_t)4);
	if (ja())
		goto loc_416997;
	goto *off_416870[edx];
loc_416997:
	edi = to32i(dword_51220C); //mov
	eax = ax; //cwde
	cmp(eax, edi);
	if (jnz())
		goto loc_416CA1;
loc_4169A6:
	to16i(word_4D3B26) = 0x2DD; //mov
loc_4169AF:
	edx = 2; //mov
	xor_(ecx, ecx);
	eax = ebp; //mov
	to32i(dword_4D2098) = ecx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4159E0(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_416CCD;
	xor_(eax, eax);
loc_4169DB:
	edx = ax; //movsx
	ecx = (int32_t)(intptr_t)(edx+edx); //lea
	edx = to32i(dword_4D76BC); //mov
	ebx = to32i(esp+0x4F04); //mov
	add(bx, to16i(ecx+edx));
	inc(eax);
	to16i(esp+0x4F04) = bx; //mov
	cmp(ax, (int16_t)9);
	if (jl())
		goto loc_4169DB;
loc_416A04:
	esi = to32i(esp+0x4EE4); //mov
	test(esi, esi);
	if (jnz())
		goto loc_4171F2;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edx = to32i(esp+0x4EEC); //mov
	ecx = to32i(esp+0x4F00); //mov
	bh = to8i(byte_4D76C4); //mov
	add(edx, eax);
	eax = 1; //mov
	to32i(esp+0x4EEC) = edx; //mov
	add(ecx, eax);
	to32i(esp+0x4EE8) = edx; //mov
	to32i(esp+0x4F00) = ecx; //mov
	test(bh, bh);
	if (jnz())
		goto loc_416CE2;
	xor_(edx, edx);
	to32i(esp+0x4EF4) = edx; //mov
loc_416A5B:
	test(ax, ax);
	if (jz())
		goto loc_416D2F;
loc_416A64:
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D41B8+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = 0x2D8; //mov
	edx = to32i(esp+0x4F06); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2D8; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = 1; //mov
	esi = 0x1A; //mov
	esp -= 4; _sub_415C50(); esp += 4; //call
	xor_(ecx, ecx);
	to32i(esp+0x4EF8) = esi; //mov
	to16i(esp+0x4F0C) = cx; //mov
loc_416AD3:
	edx = to32i(esp+0x4F06); //mov
	eax = to32i(esp+0x4F0A); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jge())
		goto loc_41704A;
	edx = to32i(esp+eax*2+0x4EB2); //mov
	sar(edx, (int32_t)0x10);
	imul32(eax, edx, 0x684);
	test(to8i(esp+eax+0x1F8), (int8_t)4);
	if (jz())
		goto loc_416EFF;
	edx = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(edx, (int32_t)(intptr_t)byte_512E84);
	push32(edx);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(3);
	eax = 0x2D9; //mov
	ebx = to32i(esp+0x4F00); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
loc_416B43:
	ebx = ax; //movsx
	eax = 0x2D9; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4F0A); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esp+eax*2+0x4EB2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	edx = to32i(esp+0x4F02); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, to32i(esp+eax+0x27C));
	if (jl())
		goto loc_416FC7;
	edx = to32i(esp+eax+0x284); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_416F49;
	eax = 0x2E3; //mov
	ebx = to32i(esp+0x4EF8); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
	ebx = ax; //movsx
	eax = 0x2E3; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2E3; //mov
loc_416BD4:
	esp -= 4; _sub_405580(); esp += 4; //call
loc_416BD9:
	esi = to32i(esp+0x4F0C); //mov
	ecx = to32i(esp+0x4EF8); //mov
	inc(esi);
	add(ecx, (int32_t)0x1A);
	to16i(esp+0x4F0C) = si; //mov
	to32i(esp+0x4EF8) = ecx; //mov
	goto loc_416AD3;
loc_416BFF:
	eax = to32i(dword_51220C); //mov
	eax = to32i(esp+eax*2+0x4EB2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	cmp(to32i(esp+eax+0x284), (int32_t)1);
	if (jnz())
		goto loc_416C2C;
	to16i(word_4D3B26) = 0x2DE; //mov
	goto loc_4169AF;
loc_416C2C:
	to16i(word_4D3B26) = 0x2DC; //mov
	goto loc_4169AF;
loc_416C3A:
	cmp(to32i(dword_512264), (int32_t)2);
	if (jnz())
		goto loc_416C65;
	cmp(to32i(esp+0x284), (int32_t)1);
	if (jnz())
		goto loc_416C5B;
loc_416C4D:
	to16i(word_4D3B26) = 0x2DD; //mov
	goto loc_416997;
loc_416C5B:
	cmp(to32i(esp+0x908), (int32_t)1);
	if (jz())
		goto loc_416C4D;
loc_416C65:
	cmp(to32i(dword_512264), (int32_t)1);
	if (jnz())
		goto loc_416C93;
	edx = ax; //movsx
	imul32(edx, 0x684);
	test(to8i(esp+edx+0x1F8), (int8_t)4);
	if (jz())
		goto loc_416997;
	to16i(word_4D3B26) = 0x2DD; //mov
	goto loc_416997;
loc_416C93:
	to16i(word_4D3B26) = 0x2DC; //mov
	goto loc_416997;
loc_416CA1:
	eax = to32i(esp+edi*2+0x4EB2); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	cmp(to32i(esp+eax+0x284), (int32_t)1);
	if (jz())
		goto loc_4169A6;
	to16i(word_4D3B26) = 0x2DC; //mov
	goto loc_4169AF;
loc_416CCD:
	eax = to32i(esp+0x4F08); //mov
	dec(eax);
	to16i(esp+0x4F04) = ax; //mov
	goto loc_416A04;
loc_416CE2:
	cmp(ax, to16i(esp+0x4EF4));
	if (jnz())
		goto loc_416A5B;
	test(cx, cx);
	if (jl())
		goto loc_416A5B;
	edx = (int32_t)(intptr_t)(esp+0x4EB4); //lea
	xor_(eax, eax);
	xor_(cl, cl);
	to32i(esp+0x4EF4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to8i(byte_4D76C4) = cl; //mov
	esp -= 4; _sub_415120(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x4EB4); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4151D0(); esp += 4; //call
	goto loc_416A64;
loc_416D2F:
	cmp(to32i(dword_4D2094), (int32_t)0);
	if (jnz())
		goto loc_416A64;
	cmp(to16i(esp+0x4F00), (int16_t)0);
	if (jz())
		goto loc_416D4C;
	esp -= 4; _sub_423B90(); esp += 4; //call
loc_416D4C:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	edi = eax; //mov
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jz())
		goto loc_416D75;
	eax = 1; //mov
	esp -= 4; _sub_4164C0(); esp += 4; //call
	cmp(al, (int8_t)3);
	if (jnb())
		goto loc_4170C4;
loc_416D75:
	test(di, di);
	if (jz())
		goto loc_416A04;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, to32i(esp+0x4EF0));
	if (jle())
		goto loc_416A04;
	cmp(to16i(esp+0x4EF4), (int16_t)0);
	if (jnz())
		goto loc_416A04;
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0xF);
	to32i(esp+0x4EF0) = eax; //mov
	cmp(di, (int16_t)0x1B);
	if (jnz())
		goto loc_417149;
	edi = 0xD; //mov
	to16i(ebp+0xA) = 0; //mov
loc_416DC3:
	xor_(eax, eax);
	esp -= 4; _sub_41A1A0(); esp += 4; //call
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_416E4F;
	cmp(to32i(dword_512264), (int32_t)1);
	if (jle())
		goto loc_416E4F;
	eax = to32i(dword_4D76BC); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jnz())
		goto loc_416E4F;
	cx = to16i(eax+2); //mov
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_416E4F;
	cmp(cx, to16i(word_4D4202));
	if (jnz())
		goto loc_416E4F;
	ebx = 9; //mov
	edx = (int32_t)(intptr_t)byte_512F55; //mov
	eax = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 9; //mov
	edx = (int32_t)(intptr_t)byte_512E8D; //mov
	eax = (int32_t)(intptr_t)byte_512E84; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = to32i(dword_4D5EF8); //mov
	edx = to32i(eax+0x8FC); //mov
	to32i(eax+0x278) = edx; //mov
	edx = to32i(esp+0x4F06); //mov
	sar(edx, (int32_t)0x10);
	to32i(eax+0x8FC) = edx; //mov
	xor_(eax, eax);
	to16i(word_4D4202) = ax; //mov
loc_416E4F:
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jz())
		goto loc_416E9E;
	eax = 4; //mov
	esp -= 4; _sub_4164C0(); esp += 4; //call
	cmp(al, (int8_t)3);
	if (jnz())
		goto loc_416E9E;
	edx = 1; //mov
	ebx = to32i(dword_4D76BC); //mov
	to16i(ebp+0xA) = 3; //mov
	to32i(esp+0x4EFC) = edx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_416E8F;
	xor_(esi, esi);
	esp -= 4; _sub_41A2A0(); esp += 4; //call
	to32i(dword_4D76BC) = esi; //mov
loc_416E8F:
	xor_(eax, eax);
	xor_(bl, bl);
	to32i(dword_5121F8) = eax; //mov
	to8i(byte_512DAA) = bl; //mov
loc_416E9E:
	esp -= 4; _sub_415BF0(); esp += 4; //call
loc_416EA3:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_416ECA;
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_416ECA;
	xor_(bh, bh);
	to8i(byte_4D76C1) = bh; //mov
	to8i(byte_4D76C3) = bh; //mov
	to8i(byte_4D76C4) = bh; //mov
	to8i(byte_4D76C0) = bh; //mov
loc_416ECA:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_416EDE;
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_416EDE;
	esp -= 4; _sub_4098D0(); esp += 4; //call
	xor_(edi, edi);
loc_416EDE:
	cmp(to16i(ebp+0xA), (int16_t)3);
	if (jz())
		goto loc_417163;
loc_416EE9:
	edx = di; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EE4) = eax; //mov
	goto loc_416A04;
loc_416EFF:
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, edx);
	edi = (int32_t)(intptr_t)(esp+0x4E34); //lea
	esp -= 4; _sub_41A170(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_416F14:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_416F2C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_416F14;
loc_416F2C:
	pop32(edi);
	push32(2);
	push32(3);
	eax = 0x2D9; //mov
	edx = to32i(esp+0x4F00); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	goto loc_416B43;
loc_416F49:
	cmp(edx, (int32_t)3);
	if (jnz())
		goto loc_416F82;
	eax = 0x2E4; //mov
	edx = to32i(esp+0x4EF8); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	ebx = ax; //movsx
	eax = 0x2E4; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2E4; //mov
	goto loc_416BD4;
loc_416F82:
	push32(4);
	push32(4);
	eax = 0x2E3; //mov
	edi = to32i(esp+0x4F00); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2E3; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	edx = ax; //movsx
	eax = 0x2A5; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_416BD9;
loc_416FC7:
	cmp(to32i(esp+eax+0x284), (int32_t)1);
	if (jz())
		goto loc_417005;
	eax = 0x2E4; //mov
	esi = to32i(esp+0x4EF8); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2E4; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0x2E4; //mov
	goto loc_416BD4;
loc_417005:
	push32(4);
	push32(4);
	eax = 0x2E3; //mov
	ecx = to32i(esp+0x4F00); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ecx);
	ebx = ax; //movsx
	eax = 0x2E3; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0x19);
	edx = ax; //movsx
	eax = 0x2A5; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_416BD9;
loc_41704A:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	ebx = 0xFFFFFFF6; //mov
	eax = to32i(eax+0x20); //mov
	edx = to32i(esp+0x4EE8); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = to32i(dword_51221C); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_41709C;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_41709C:
	cmp(to16i(esp+0x4F00), (int16_t)0);
	if (jz())
		goto loc_4170AC;
loc_4170AC:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_416D4C;
loc_4170C4:
	if (ja())
		goto loc_41710F;
	edi = 1; //mov
	ebx = to32i(dword_4D76BC); //mov
	to32i(esp+0x4EFC) = edi; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_41713A;
loc_4170DC:
	edx = 0xD; //mov
	xor_(ah, ah);
	xor_(edi, edi);
	to8i(byte_512DAA) = ah; //mov
	to32i(dword_5121F8) = edi; //mov
	esp -= 4; _sub_415BF0(); esp += 4; //call
	eax = ebp; //mov
	to16i(ebp+0xA) = 3; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EE4) = eax; //mov
	goto loc_416A04;
loc_41710F:
	cmp(al, (int8_t)4);
	if (jnz())
		goto loc_416D75;
	esp -= 4; _sub_415BF0(); esp += 4; //call
	edx = 0xD; //mov
	eax = ebp; //mov
	to16i(ebp+0xA) = 0; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EE4) = eax; //mov
	goto loc_416A04;
loc_41713A:
	xor_(esi, esi);
	esp -= 4; _sub_41A2A0(); esp += 4; //call
	to32i(dword_4D76BC) = esi; //mov
	goto loc_4170DC;
loc_417149:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_416EA3;
	cmp(di, (int16_t)0xD);
	if (jz())
		goto loc_416DC3;
	goto loc_416EA3;
loc_417163:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_416EE9;
	cmp(to16i(esp+0x4EFC), (int16_t)0);
	if (jnz())
		goto loc_416EE9;
	push32(0x2EC);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	to32i(esp+0x4EFC) = eax; //mov
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_4171E5;
	eax = 1; //mov
	esp -= 4; _sub_41A1A0(); esp += 4; //call
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jz())
		goto loc_4171B5;
	eax = 3; //mov
	esp -= 4; _sub_4164C0(); esp += 4; //call
loc_4171B5:
	cmp(to32i(dword_4D76BC), (int32_t)0);
	if (jz())
		goto loc_4171CB;
	xor_(ecx, ecx);
	esp -= 4; _sub_41A2A0(); esp += 4; //call
	to32i(dword_4D76BC) = ecx; //mov
loc_4171CB:
	xor_(dl, dl);
	xor_(ebx, ebx);
	to8i(byte_512DAA) = dl; //mov
	to32i(dword_5121F8) = ebx; //mov
	esp -= 4; _sub_415BF0(); esp += 4; //call
	goto loc_416EE9;
loc_4171E5:
	to16i(ebp+0xA) = 0; //mov
	xor_(edi, edi);
	goto loc_416EE9;
loc_4171F2:
	ebx = 0xFFFFFFF6; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	edi = 1; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = esi; //mov
	pop32(edi);
	add(esp, (int32_t)0x4F0C);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_417230()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4ED4);
	ebp = eax; //mov
	esi = to32i(dword_512214); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+0x4EB0) = edx; //mov
	to32i(esp+0x4EBC) = ecx; //mov
	to32i(esp+0x4EB8) = ecx; //mov
	xor_(ebx, ecx);
	edx = 1; //mov
	to32i(esp+0x4ED0) = ebx; //mov
	to32i(esp+0x4EC0) = edx; //mov
	cmp(esi, (int32_t)2);
	if (jz())
		goto loc_4172D8;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_4172E9;
	to16i(word_4D3B96) = 0x2C1; //mov
loc_41728A:
	eax = to32i(ebp+0x14); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_415470(); esp += 4; //call
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4ECC) = ax; //mov
	edx = ax; //movsx
	eax = esp; //mov
	esp -= 4; _sub_41A570(); esp += 4; //call
	xor_(eax, eax);
loc_4172AF:
	ecx = to32i(esp+0x4ECA); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_4172F4;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x278); //mov
	to16i(esp+edx*2+0x4E96) = ax; //mov
	inc(eax);
	goto loc_4172AF;
loc_4172D8:
	eax = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x4ED4);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4172E9:
	to16i(word_4D3B96) = 0x2CE; //mov
	goto loc_41728A;
loc_4172F4:
	push32(edi);
	ebx = (int32_t)(intptr_t)(esp+0x4E84); //lea
	edx = to32i(dword_4D76B8); //mov
	eax = ecx; //mov
	add(edx, (int32_t)0x2B0);
	esp -= 4; _sub_41B470(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x4E84); //lea
	eax = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_414D70(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_417753;
	xor_(edi, edi);
	to16i(esp+0x4EC8) = di; //mov
loc_417336:
	xor_(edx, edx);
	eax = ebp; //mov
	to32i(dword_4D2098) = edx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	edx = 2; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(esp+0x4EB4); //mov
	esp -= 4; _sub_4159E0(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_417727;
	eax = to32i(esp+0x4ED0); //mov
	dec(eax);
	to32i(esp+0x4ECC) = eax; //mov
loc_417371:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	esi = to32i(esp+0x4EBC); //mov
	edx = to32i(esp+0x4ED4); //mov
	add(esi, eax);
	eax = 1; //mov
	add(edx, eax);
	to32i(esp+0x4EBC) = esi; //mov
	to32i(esp+0x4ED4) = edx; //mov
	dl = to8i(byte_4D76C5); //mov
	to32i(esp+0x4EB8) = esi; //mov
	test(dl, dl);
	if (jnz())
		goto loc_417766;
	xor_(edi, edi);
	to32i(esp+0x4EC4) = edi; //mov
loc_4173B9:
	test(ax, ax);
	if (jz())
		goto loc_417848;
loc_4173C2:
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	edx = 0x400; //mov
	xor_(eax, eax);
	esi = to32i(esp+0x4ECE); //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D41A0+eax*4); //mov
	sar(esi, (int32_t)0x10);
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = to32i(esp+esi*2+0x4E80); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	test(to8i(esp+eax+0x1F8), (int8_t)4);
	if (jz())
		goto loc_4177CF;
	edi = to32i(esp+eax+0x284); //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_4177A9;
	eax = 0x2D4; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x1A);
	ebx = ax; //movsx
	eax = 0x2D4; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2D4; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x2C9; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2C9; //mov
	edx = esi; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = edi; //mov
loc_41746E:
	esp -= 4; _sub_415C50(); esp += 4; //call
	edi = to32i(esp+0x4ECC); //mov
	test(di, di);
	if (jl())
		goto loc_41759B;
	imul32(esi, edi, 0x1A);
	imul32(eax, to32i(esp+0x4ED0), 0x1A);
	neg(esi);
	add(esi, eax);
loc_417492:
	edx = di; //movsx
	edx = to32i(esp+edx*2+0x4E82); //mov
	sar(edx, (int32_t)0x10);
	imul32(eax, edx, 0x684);
	test(to8i(esp+eax+0x1F8), (int8_t)4);
	if (jz())
		goto loc_417820;
	eax = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
loc_4174D3:
	push32(3);
	eax = 0x2CA; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2CA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = di; //movsx
	eax = to32i(esp+eax*2+0x4E82); //mov
	edx = to32i(dword_4D76B8); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(edx+eax*2+0x2AE); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aD_3);
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(4);
	eax = 0x2CB; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2CB; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x2CB; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	dec(edi);
	ebx = ax; //movsx
	eax = 0x2C7; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2C7; //mov
	add(esi, (int32_t)0x1A);
	esp -= 4; _sub_405580(); esp += 4; //call
	test(di, di);
	if (jge())
		goto loc_417492;
loc_41759B:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	ebx = 0xFFFFFFF6; //mov
	eax = to32i(eax+0x20); //mov
	edx = to32i(esp+0x4EB8); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = to32i(dword_51221C); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_4175ED;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_4175ED:
	cmp(to16i(esp+0x4ED4), (int16_t)0);
	if (jz())
		goto loc_4175FD;
loc_4175FD:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_417610:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_417719;
	ecx = to32i(dword_5637F4); //mov
	cmp(ecx, to32i(esp+0x4EC0));
	if (jle())
		goto loc_417719;
	ecx = to32i(dword_5637F4); //mov
	add(ecx, (int32_t)0xF);
	to32i(esp+0x4EC0) = ecx; //mov
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_417861;
	edx = 0xD; //mov
	to16i(ebp+0xA) = 0; //mov
loc_41765F:
	esp -= 4; _sub_415BF0(); esp += 4; //call
	esp -= 4; _sub_41A350(); esp += 4; //call
	eax = to32i(esp+0x4EC6); //mov
	cl = 1; //mov
	sar(eax, (int32_t)0x10);
	to8i(byte_4D76C5) = cl; //mov
	imul32(ecx, eax, 0x684);
	cmp(to32i(esp+ecx+0x284), (int32_t)2);
	if (jnz())
		goto loc_4176B9;
	ebx = to32i(esp+0x4ECE); //mov
	sar(ebx, (int32_t)0x10);
	add(ebx, ebx);
	ecx = to32i(esp+ebx+0x4E80); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, eax);
	if (jnz())
		goto loc_41787B;
	cmp(to8i(byte_512DBD), (int8_t)3);
	if (jnb())
		goto loc_4176B9;
	to8i(byte_512DBD) = 3; //mov
loc_4176B9:
	xor_(edi, edi);
	xor_(ch, ch);
	to32i(dword_5121F8) = edi; //mov
	to8i(byte_512DAA) = ch; //mov
loc_4176C9:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_4176E7;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_4176E7;
	xor_(al, al);
	to8i(byte_4D76C1) = al; //mov
	to8i(byte_4D76C2) = al; //mov
	to8i(byte_4D76C0) = al; //mov
loc_4176E7:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_417708;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_417708;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_4178CD;
	esp -= 4; _sub_4098D0(); esp += 4; //call
	xor_(edx, edx);
loc_417708:
	edx = dx; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EB4) = eax; //mov
loc_417719:
	cmp(to32i(esp+0x4EB4), (int32_t)0);
	if (jz())
		goto loc_417371;
loc_417727:
	ebx = 0xFFFFFFF6; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	eax = to32i(esp+0x4EB4); //mov
	pop32(edi);
	add(esp, (int32_t)0x4ED4);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_417753:
	ax = to16i(dword_51220C); //mov
	to16i(esp+0x4EC8) = ax; //mov
	goto loc_417336;
loc_417766:
	cmp(ax, to16i(esp+0x4EC4));
	if (jnz())
		goto loc_4173B9;
	cmp(to16i(esp+0x4ED4), (int16_t)0);
	if (jl())
		goto loc_4173B9;
	eax = (int32_t)(intptr_t)(esp+4); //lea
	xor_(dh, dh);
	xor_(esi, esi);
	to8i(byte_4D76C5) = dh; //mov
	edx = (int32_t)(intptr_t)(esp+0x4E84); //lea
	to32i(esp+0x4EC4) = esi; //mov
	esp -= 4; _sub_414E80(); esp += 4; //call
	goto loc_4173C2;
loc_4177A9:
	eax = 0x2C9; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2C9; //mov
	edx = esi; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = 1; //mov
	goto loc_41746E;
loc_4177CF:
	eax = 0x2D4; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x1A);
	ebx = ax; //movsx
	eax = 0x2D4; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2D4; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x2C9; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2C9; //mov
	edx = esi; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = 2; //mov
	goto loc_41746E;
loc_417820:
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, edx);
	esp -= 4; _sub_41A170(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E3C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	goto loc_4174D3;
loc_417848:
	cmp(to16i(esp+0x4ED4), (int16_t)0);
	if (jz())
		goto loc_417610;
	esp -= 4; _sub_423B90(); esp += 4; //call
	goto loc_417610;
loc_417861:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_4176C9;
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_41765F;
	goto loc_4176C9;
loc_41787B:
	ecx = to32i(esp+ebx+0x4E7E); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, eax);
	if (jnz())
		goto loc_4178A2;
	cmp(to8i(byte_512DBD), (int8_t)2);
	if (jnb())
		goto loc_4176B9;
	to8i(byte_512DBD) = 2; //mov
	goto loc_4176B9;
loc_4178A2:
	ecx = to32i(esp+ebx+0x4E7C); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, eax);
	if (jnz())
		goto loc_4176B9;
	cmp(to8i(byte_512DBD), (int8_t)1);
	if (jnb())
		goto loc_4176B9;
	to8i(byte_512DBD) = 1; //mov
	goto loc_4176B9;
loc_4178CD:
	xor_(bh, bh);
	ecx = 2; //mov
	to8i(byte_4D76C2) = bh; //mov
	to8i(byte_4D76C1) = bh; //mov
	to8i(byte_4D76C0) = bh; //mov
	to32i(dword_512214) = ecx; //mov
	goto loc_417708;
}
Fn(void) Game::_sub_417900()
{
	push32(edx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0x4ECC);
	ebp = eax; //mov
	xor_(edx, edx);
	to32i(esp+0x4EB0) = edx; //mov
	to32i(esp+0x4EB8) = edx; //mov
	to32i(esp+0x4EBC) = edx; //mov
	xor_(edx, edx);
	esi = to32i(dword_512214); //mov
	to32i(esp+0x4EC0) = edx; //mov
	cmp(esi, (int32_t)2);
	if (jz())
		goto loc_4179E2;
	eax = to32i(dword_4D76B8); //mov
	cmp(to16i(eax+0x2C0), (int16_t)6);
	if (jg())
		goto loc_4179F1;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_4179FF;
	to16i(word_4D3C02) = 0x2C2; //mov
loc_417963:
	push32(edi);
	push32(ecx);
	push32(ebx);
	eax = to32i(ebp+0x14); //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_415470(); esp += 4; //call
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4ED0) = ax; //mov
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = ecx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x4EA4); //lea
	esp -= 4; _sub_41A570(); esp += 4; //call
	edx = to32i(dword_4D76B8); //mov
	eax = ecx; //mov
	add(edx, (int32_t)0x2B0);
	esp -= 4; _sub_41B470(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x4EA4); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_414D70(); esp += 4; //call
	xor_(eax, eax);
loc_4179B9:
	ecx = to32i(esp+0x4ECE); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_417A0D;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x284); //mov
	to16i(esp+edx*2+0x4E8A) = ax; //mov
	inc(eax);
	goto loc_4179B9;
loc_4179E2:
	eax = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x4ECC);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	return;
loc_4179F1:
	to16i(word_4D3C02) = 0x2C0; //mov
	goto loc_417963;
loc_4179FF:
	to16i(word_4D3C02) = 0x2C1; //mov
	goto loc_417963;
loc_417A0D:
	xor_(eax, eax);
	to32i(dword_4D2098) = eax; //mov
	eax = ebp; //mov
	edx = 2; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4159E0(); esp += 4; //call
	cmp(to32i(esp+0x4EC8), (int32_t)0);
	if (jnz())
		goto loc_417D3D;
	eax = to32i(esp+0x4ED0); //mov
	dec(eax);
	to32i(esp+0x4ED4) = eax; //mov
loc_417A46:
	ebx = to32i(esp+0x4EC4); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ebx, eax);
	eax = to32i(esp+0x4ECC); //mov
	edx = 0x400; //mov
	inc(eax);
	xor_(ecx, ecx);
	to32i(esp+0x4ECC) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x4EC4) = ebx; //mov
	al = to8i(byte_512DFB); //mov
	to32i(esp+0x4EC0) = ebx; //mov
	xor_(ebx, ebx);
	eax = to32i(off_4D4188+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = 0x2BD; //mov
	edx = to32i(esp+0x4ECE); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ecx = ax; //movsx
	eax = 0x2BD; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	ebx = ax; //movsx
	eax = 1; //mov
	edi = to32i(esp+0x4ED4); //mov
	esp -= 4; _sub_415C50(); esp += 4; //call
	test(di, di);
	if (jl())
		goto loc_417BF3;
	imul32(esi, edi, 0x1A);
	imul32(eax, to32i(esp+0x4ED0), 0x1A);
	neg(esi);
	add(esi, eax);
loc_417AE9:
	edx = di; //movsx
	edx = to32i(esp+edx*2+0x4EA2); //mov
	sar(edx, (int32_t)0x10);
	imul32(eax, edx, 0x684);
	test(to8i(esp+eax+0x200), (int8_t)4);
	if (jz())
		goto loc_417D69;
	edx = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(edx, (int32_t)(intptr_t)byte_512E84);
	push32(edx);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E44); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
loc_417B2B:
	push32(3);
	eax = 0x2BE; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2BE; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E44); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = di; //movsx
	eax = to32i(esp+eax*2+0x4EA2); //mov
	edx = to32i(dword_4D76B8); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(edx+eax*2+0x2AE); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aD_3);
	eax = (int32_t)(intptr_t)(esp+0x4E44); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(4);
	eax = 0x2BF; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	ebx = ax; //movsx
	eax = 0x2BF; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E44); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x2BF; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, esi);
	dec(edi);
	ebx = ax; //movsx
	eax = 0x2C7; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2C7; //mov
	add(esi, (int32_t)0x1A);
	esp -= 4; _sub_405580(); esp += 4; //call
	test(di, di);
	if (jge())
		goto loc_417AE9;
loc_417BF3:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	ebx = 0xFFFFFFF6; //mov
	eax = to32i(eax+0x20); //mov
	edx = to32i(esp+0x4EC0); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = to32i(dword_51221C); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_417C45;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_417C45:
	cmp(to16i(esp+0x4ECC), (int16_t)0);
	if (jz())
		goto loc_417C55;
loc_417C55:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_417D2F;
	ecx = to32i(dword_5637F4); //mov
	cmp(ecx, to32i(esp+0x4EBC));
	if (jle())
		goto loc_417D2F;
	ecx = to32i(dword_5637F4); //mov
	add(ecx, (int32_t)0xF);
	to32i(esp+0x4EBC) = ecx; //mov
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_417D91;
	edx = 0xD; //mov
	to16i(ebp+0xA) = 0; //mov
loc_417CB7:
	esp -= 4; _sub_415BF0(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x4EA4); //lea
	esp -= 4; _sub_41A530(); esp += 4; //call
loc_417CC8:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_417CE9;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_417CE9;
	xor_(ah, ah);
	to8i(byte_4D76C1) = ah; //mov
	to8i(byte_4D76C2) = ah; //mov
	to8i(byte_4D76C0) = ah; //mov
loc_417CE9:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_417D1E;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_417D1E;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_417DAB;
	esp -= 4; _sub_4098D0(); esp += 4; //call
	xor_(edx, edx);
loc_417D0A:
	xor_(cl, cl);
	to8i(byte_4D76C1) = cl; //mov
	to8i(byte_4D76C2) = cl; //mov
	to8i(byte_4D76C0) = cl; //mov
loc_417D1E:
	edx = dx; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EC8) = eax; //mov
loc_417D2F:
	cmp(to32i(esp+0x4EC8), (int32_t)0);
	if (jz())
		goto loc_417A46;
loc_417D3D:
	ebx = 0xFFFFFFF6; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	eax = to32i(esp+0x4EC8); //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edi);
	add(esp, (int32_t)0x4ECC);
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	return;
loc_417D69:
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	add(eax, edx);
	esp -= 4; _sub_41A170(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E44); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	goto loc_417B2B;
loc_417D91:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_417CC8;
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_417CB7;
	goto loc_417CC8;
loc_417DAB:
	to32i(dword_512214) = 2; //mov
	goto loc_417D0A;
}
Fn(void) Game::_sub_417DD4()
{
	static const void *const off_417DC0[] = {
		&&loc_417F8B,
		&&loc_418322,
		&&loc_41827F,
		&&loc_41827F,
		&&loc_4182A2,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x4F74);
	ebp = eax; //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	xor_(edi, edi);
	xor_(eax, eax);
	to32i(esp+0x4EEC) = edx; //mov
	to32i(esp+0x4F04) = ebx; //mov
	to16i(esp+0x4F5C) = bx; //mov
	to16i(esp+0x4F2C) = bx; //mov
	to32i(esp+0x4EF0) = ecx; //mov
	to32i(esp+0x4EF4) = ecx; //mov
	to32i(esp+0x4F60) = edi; //mov
	to16i(esp+0x4F30) = ax; //mov
	edx = 1; //mov
	edi = to32i(dword_512214); //mov
	to32i(esp+0x4F28) = edx; //mov
	esi = edx; //mov
	cmp(edi, (int32_t)2);
	if (jz())
		goto loc_417EE8;
	cmp(to32i(dword_512264), (int32_t)2);
	if (jg())
		goto loc_417EFC;
	eax = to32i(ebp+0x20); //mov
	or_(to8i(eax+2), (int8_t)1);
	eax = to32i(ebp+0x24); //mov
	or_(to8i(eax+2), (int8_t)1);
loc_417E5F:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jz())
		goto loc_417E6F;
	eax = to32i(ebp+0x1C); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_417E6F:
	edx = to32i(dword_5121F8); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_417F0F;
loc_417E7E:
	to16i(word_4D3C6E) = 0x2AC; //mov
loc_417E87:
	esp -= 4; _sub_41A210(); esp += 4; //call
	edi = eax; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4F58) = ax; //mov
	cmp(to32i(dword_4D21AC), (int32_t)0);
	if (jz())
		goto loc_417F3D;
loc_417EA8:
	edx = to32i(esp+0x4F56); //mov
	eax = esp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41A570(); esp += 4; //call
	xor_(eax, eax);
loc_417EBB:
	ecx = to32i(esp+0x4F56); //mov
	sar(ecx, (int32_t)0x10);
	edx = ax; //movsx
	cmp(edx, ecx);
	if (jge())
		goto loc_417F7A;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x278); //mov
	to16i(esp+edx*2+0x4ECE) = ax; //mov
	inc(eax);
	goto loc_417EBB;
loc_417EE8:
	esi = 0xFFFFFFFD; //mov
	eax = esi; //mov
	add(esp, (int32_t)0x4F74);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_417EFC:
	eax = to32i(ebp+0x20); //mov
	and_(to8i(eax+2), (int8_t)0xFE);
	eax = to32i(ebp+0x24); //mov
	and_(to8i(eax+2), (int8_t)0xFE);
	goto loc_417E5F;
loc_417F0F:
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_417E7E;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_417F2F;
	to16i(word_4D3C6E) = 0x2AE; //mov
	goto loc_417E87;
loc_417F2F:
	to16i(word_4D3C6E) = 0x2AD; //mov
	goto loc_417E87;
loc_417F3D:
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jz())
		goto loc_417EA8;
	edx = to32i(dword_4D5A28); //mov
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	edx = 1; //mov
	eax = 0x64; //mov
	to32i(dword_4D21AC) = edx; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	goto loc_417EA8;
loc_417F7A:
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_417F8B;
	goto *off_417DC0[eax];
loc_417F8B:
	eax = to32i(dword_51221C); //mov
	edx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	ecx = to32i(esp+0x4F28); //mov
	esp -= 4; _sub_41AEF0(); esp += 4; //call
	to32i(esp+0x4F34) = eax; //mov
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_417FE5;
	cmp(to8i(byte_4D76C1), (int8_t)1);
	if (jnz())
		goto loc_417FE5;
	edx = to32i(esp+0x4F56); //mov
	ecx = (int32_t)(intptr_t)(esp+0x4F2C); //lea
	ebx = (int32_t)(intptr_t)(esp+0x4F5C); //lea
	eax = esp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_414760(); esp += 4; //call
	to32i(esp+0x4F04) = eax; //mov
loc_417FE5:
	eax = to32i(ebp+0x18); //mov
	edx = to32i(esp+0x4F2E); //mov
	esp -= 4; _sub_415490(); esp += 4; //call
	ebx = si; //movsx
	sar(edx, (int32_t)0x10);
	eax = to32i(ebp+0x14); //mov
	esp -= 4; _sub_415470(); esp += 4; //call
	eax = ebp; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	to32i(dword_4D2098) = ebx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = esp; //mov
	esp -= 4; _sub_4159E0(); esp += 4; //call
	cmp(to32i(esp+0x4EEC), (int32_t)0);
	if (jnz())
		goto loc_418B67;
	eax = to32i(esp+0x4F58); //mov
	dec(eax);
	to32i(esp+0x4F0C) = eax; //mov
loc_418037:
	edx = to32i(esp+0x4EF4); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	eax = to32i(esp+0x4F60); //mov
	xor_(ecx, ecx);
	inc(eax);
	xor_(ebx, ebx);
	to32i(esp+0x4F60) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x4EF4) = edx; //mov
	al = to8i(byte_512DFB); //mov
	to32i(esp+0x4EFC) = edx; //mov
	edx = 0x400; //mov
	eax = to32i(off_4D41E8+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D4170+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	eax = 0x2B5; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2B5; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2B5; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	cmp(to16i(esp+0x4F34), (int16_t)0);
	if (jz())
		goto loc_41810E;
	push32(2);
	push32(3);
	eax = 0x2B5; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2B5; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0xA);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_41810E:
	cmp(to32i(dword_512264), (int32_t)2);
	if (jl())
		goto loc_418BD7;
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2B6; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2B6; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ecx = ax; //movsx
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = to32i(dword_5121F8+2); //mov
	ebx = ax; //movsx
	eax = 1; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_415C50(); esp += 4; //call
	eax = to32i(esp+0x4F2E); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	cmp(to32i(esp+edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_418388;
	ebx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	edx = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_41A040(); esp += 4; //call
	to16i(esp+0x4F38) = ax; //mov
	inc(eax);
	imul32(eax, 0x1A);
	xor_(edx, edx);
	ebx = 0x1A; //mov
	to16i(esp+0x4F48) = dx; //mov
	to32i(esp+0x4F1C) = ebx; //mov
	to32i(esp+0x4F6C) = eax; //mov
loc_4181C9:
	ecx = to32i(esp+0x4F46); //mov
	ebx = to32i(dword_5121FC); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jge())
		goto loc_418483;
	eax = to32i(esp+0x4F2E); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	eax = to32i(esp+0x4F36); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jz())
		goto loc_41836C;
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ebx = to32i(esp+0x4F24); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
loc_418236:
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4F48); //mov
	ecx = to32i(esp+0x4F1C); //mov
	inc(eax);
	add(ecx, (int32_t)0x1A);
	to16i(esp+0x4F48) = ax; //mov
	to32i(esp+0x4F1C) = ecx; //mov
	goto loc_4181C9;
loc_41827F:
	ax = to16i(dword_51220C); //mov
	edx = (int32_t)(intptr_t)(esp+0x4ED0); //lea
	to16i(esp+0x4F30) = ax; //mov
	eax = esp; //mov
	esp -= 4; _sub_4153E0(); esp += 4; //call
	esi = eax; //mov
	goto loc_417F8B;
loc_4182A2:
	ax = to16i(dword_51220C); //mov
	to16i(esp+0x4F30) = ax; //mov
	xor_(eax, eax);
	cmp(bx, (int16_t)1);
	if (jz())
		goto loc_417F8B;
loc_4182BC:
	edx = ax; //movsx
	edx = to32i(esp+edx*2+0x4ECE); //mov
	sar(edx, (int32_t)0x10);
	to32i(esp+0x4EF8) = edx; //mov
	imul32(edx, 0x684);
	test(to8i(esp+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_4182FC;
	edx = to32i(esp+0x4F2E); //mov
	ecx = to32i(esp+0x4EF8); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jz())
		goto loc_4182FC;
	ebx = 1; //mov
	esi = eax; //mov
loc_4182FC:
	inc(eax);
	edx = to32i(esp+0x4F56); //mov
	ecx = ax; //movsx
	sar(edx, (int32_t)0x10);
	cmp(ecx, edx);
	if (jl())
		goto loc_418317;
	test(bx, bx);
	if (jz())
		goto loc_417F8B;
loc_418317:
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_4182BC;
	goto loc_417F8B;
loc_418322:
	esi = 1; //mov
	xor_(eax, eax);
	ebx = to32i(dword_512264); //mov
	to16i(esp+0x4F30) = ax; //mov
	cmp(ebx, (int32_t)2);
	if (jge())
		goto loc_418357;
	test(to8i(esp+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_417F8B;
	to16i(esp+0x4F30) = si; //mov
	goto loc_417F8B;
loc_418357:
	edx = (int32_t)(intptr_t)(esp+0x4ED0); //lea
	eax = esp; //mov
	esp -= 4; _sub_4153E0(); esp += 4; //call
	esi = eax; //mov
	goto loc_417F8B;
loc_41836C:
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F74); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	goto loc_418236;
loc_418388:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jz())
		goto loc_41844A;
	eax = 0x1A; //mov
	xor_(ecx, ecx);
	to32i(esp+0x4F18) = eax; //mov
	to16i(esp+0x4F4C) = cx; //mov
loc_4183AB:
	edx = to32i(esp+0x4F2E); //mov
	sar(edx, (int32_t)0x10);
	imul32(edx, 0x684);
	eax = to32i(esp+0x4F4A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, to32i(esp+edx+0x230));
	if (jge())
		goto loc_418596;
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ebx = to32i(esp+0x4F20); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ecx = to32i(esp+0x4F18); //mov
	eax = to32i(esp+0x4F4C); //mov
	add(ecx, (int32_t)0x1A);
	inc(eax);
	to32i(esp+0x4F18) = ecx; //mov
	to16i(esp+0x4F4C) = ax; //mov
	goto loc_4183AB;
loc_41844A:
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x1A);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2E4; //mov
loc_418474:
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_418483:
	eax = si; //movsx
	eax = to32i(esp+eax*2+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	cmp(to32i(esp+edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_4185E5;
	ebx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	edx = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_41A040(); esp += 4; //call
	to16i(esp+0x4F3C) = ax; //mov
	inc(eax);
	imul32(eax, 0x1A);
	xor_(ecx, ecx);
	to32i(esp+0x4F68) = eax; //mov
	eax = 0x1A; //mov
	to16i(esp+0x4F64) = cx; //mov
	to32i(esp+0x4F24) = eax; //mov
loc_4184DD:
	ecx = to32i(esp+0x4F62); //mov
	ebx = to32i(dword_5121FC); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jge())
		goto loc_4186E3;
	eax = si; //movsx
	eax = to32i(esp+eax*2+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	eax = to32i(esp+0x4F3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jz())
		goto loc_4185C9;
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ebx = to32i(esp+0x4F2C); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
loc_41854D:
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2AA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4F64); //mov
	ecx = to32i(esp+0x4F24); //mov
	inc(eax);
	add(ecx, (int32_t)0x1A);
	to16i(esp+0x4F64) = ax; //mov
	to32i(esp+0x4F24) = ecx; //mov
	goto loc_4184DD;
loc_418596:
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F20); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2A5; //mov
	goto loc_418474;
loc_4185C9:
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F70); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	goto loc_41854D;
loc_4185E5:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jz())
		goto loc_4186AA;
	ebx = 0x1A; //mov
	xor_(edx, edx);
	to32i(esp+0x4F20) = ebx; //mov
	to16i(esp+0x4F44) = dx; //mov
loc_418608:
	eax = si; //movsx
	eax = to32i(esp+eax*2+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	edx = to32i(esp+0x4F42); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, to32i(esp+eax+0x230));
	if (jge())
		goto loc_418BA4;
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ebx = to32i(esp+0x4F28); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2AA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ecx = to32i(esp+0x4F20); //mov
	eax = to32i(esp+0x4F44); //mov
	add(ecx, (int32_t)0x1A);
	inc(eax);
	to32i(esp+0x4F20) = ecx; //mov
	to16i(esp+0x4F44) = ax; //mov
	goto loc_418608;
loc_4186AA:
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, (int32_t)0x1A);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2AA; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2E4; //mov
loc_4186D4:
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_4186E3:
	eax = to32i(esp+0x4F2E); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x4F00) = eax; //mov
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(5);
	eax = 0x2BA; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2BA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = si; //movsx
	add(eax, eax);
	to32i(esp+0x4EE8) = eax; //mov
	eax = to32i(esp+eax+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(5);
	eax = 0x2BB; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2BB; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	imul32(eax, to32i(esp+0x4F00), 0x684);
	eax = to32i(esp+eax+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_41A3E0(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4EE8); //mov
	eax = to32i(esp+eax+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	eax = to32i(esp+eax+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_41A3E0(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2AA; //mov
loc_41885B:
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = to32i(esp+0x4EFC); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_4188B9;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_4188B9:
	cmp(to16i(esp+0x4F60), (int16_t)0);
	if (jz())
		goto loc_4188C9;
loc_4188C9:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = ebp; //mov
	ebx = to32i(esp+0x4F60); //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	to16i(esp+0x4F40) = ax; //mov
	test(bx, bx);
	if (jl())
		goto loc_418976;
	ecx = to32i(esp+0x4F04); //mov
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_418976;
	eax = to32i(esp+0x4F28); //mov
	cmp(ax, cx);
	if (jnz())
		goto loc_418976;
	cmp(to8i(byte_4D76C1), (int8_t)1);
	if (jnz())
		goto loc_418976;
	ebx = to32i(esp+0x4F5A); //mov
	xor_(edx, edx);
	xor_(ah, ch);
	ecx = to32i(esp+0x4F2A); //mov
	to32i(esp+0x4F28) = edx; //mov
	to8i(byte_4D76C1) = ah; //mov
	sar(ebx, (int32_t)0x10);
	edx = to32i(esp+0x4F56); //mov
	eax = esp; //mov
	sar(ecx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_414400(); esp += 4; //call
	to32i(esp+0x4F34) = eax; //mov
	eax = to32i(dword_51221C); //mov
	edx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_41AEF0(); esp += 4; //call
loc_418976:
	cmp(to16i(esp+0x4F40), (int16_t)0);
	if (jz())
		goto loc_418B59;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, to32i(esp+0x4EF0));
	if (jle())
		goto loc_418B59;
	cmp(to16i(esp+0x4F04), (int16_t)0);
	if (jnz())
		goto loc_418EE8;
loc_4189A6:
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0xF);
	to32i(esp+0x4EF0) = eax; //mov
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_4189E3;
	cmp(to16i(esp+0x4F40), (int16_t)0xD);
	if (jnz())
		goto loc_4189E3;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_418EFA;
	xor_(ebx, ebx);
	esp -= 4; _sub_4098D0(); esp += 4; //call
	to16i(esp+0x4F40) = bx; //mov
loc_4189E3:
	cmp(to16i(ebp+0xA), (int16_t)3);
	if (jnz())
		goto loc_4189FA;
	cmp(to16i(esp+0x4F40), (int16_t)0xD);
	if (jnz())
		goto loc_4189FA;
	esp -= 4; _sub_415BF0(); esp += 4; //call
loc_4189FA:
	cmp(to16i(ebp+0xA), (int16_t)4);
	if (jnz())
		goto loc_418A10;
	cmp(to16i(esp+0x4F40), (int16_t)0xD);
	if (jz())
		goto loc_418F11;
loc_418A10:
	ecx = to32i(esp+0x4F40); //mov
	cmp(cx, (int16_t)0x1B);
	if (jnz())
		goto loc_418F59;
	ebx = 0xD; //mov
	to16i(ebp+0xA) = 0; //mov
	to16i(esp+0x4F40) = bx; //mov
loc_418A34:
	cmp(to32i(dword_5121F8), (int32_t)0);
	if (jz())
		goto loc_418F73;
	xor_(bl, bl);
	to8i(byte_4D76C2) = bl; //mov
	to8i(byte_4D76C1) = bl; //mov
loc_418A4F:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_418A7B;
	cmp(to16i(esp+0x4F40), (int16_t)0xD);
	if (jnz())
		goto loc_418A7B;
	xor_(cl, cl);
	to8i(byte_4D76C1) = cl; //mov
	to8i(byte_4D76C2) = cl; //mov
	to8i(byte_4D76C3) = cl; //mov
	to8i(byte_4D76C0) = cl; //mov
loc_418A7B:
	cmp(to32i(dword_512264), (int32_t)2);
	if (jle())
		goto loc_418B41;
	edx = to32i(esp+0x4F40); //mov
	cmp(dx, (int16_t)0x4D00);
	if (jnz())
		goto loc_418F7D;
	eax = 0xD; //mov
	to16i(ebp+0xA) = 6; //mov
	to16i(esp+0x4F40) = ax; //mov
loc_418AAD:
	ecx = to32i(dword_51220C); //mov
loc_418AB3:
	eax = to32i(esp+0x4F56); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	dec(eax);
	cmp(edx, eax);
	if (jnz())
		goto loc_419009;
	xor_(esi, esi);
loc_418ACB:
	eax = si; //movsx
	eax = to32i(esp+eax*2+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	test(to8i(esp+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_418AB3;
	cmp(eax, ecx);
	if (jz())
		goto loc_418AB3;
	edx = 0x7F; //mov
	xor_(eax, eax);
	to16i(ebp+0xA) = 6; //mov
loc_418AF9:
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_418AFE:
	dx = to16i(ebp+0xA); //mov
	cmp(dx, (int16_t)5);
	if (jnz())
		goto loc_41900F;
loc_418B0C:
	ecx = to32i(esp+0x4F40); //mov
	cmp(cx, (int16_t)0x4800);
	if (jnz())
		goto loc_41901E;
loc_418B1E:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = ebp; //mov
	to16i(ebp+0xA) = 0; //mov
	xor_(edx, edx);
	esp -= 4; _sub_423E10(); esp += 4; //call
	to16i(esp+0x4F40) = dx; //mov
loc_418B41:
	edx = to32i(esp+0x4F3E); //mov
	eax = ebp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4EEC) = eax; //mov
loc_418B59:
	cmp(to32i(esp+0x4EEC), (int32_t)0);
	if (jz())
		goto loc_418037;
loc_418B67:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esi = 1; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = esi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	esi = to32i(esp+0x4EEC); //mov
	eax = esi; //mov
	add(esp, (int32_t)0x4F74);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_418BA4:
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F28); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2AA; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2A5; //mov
	goto loc_4186D4;
loc_418BD7:
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2B6; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2B6; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ecx = ax; //movsx
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = to32i(dword_5121F8+2); //mov
	ebx = ax; //movsx
	eax = 1; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_415C50(); esp += 4; //call
	edx = to32i(esp+0x4F2E); //mov
	sar(edx, (int32_t)0x10);
	imul32(eax, edx, 0x684);
	cmp(to32i(esp+eax+0x280), (int32_t)2);
	if (jnz())
		goto loc_418D4E;
	ebx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = esp; //mov
	esp -= 4; _sub_41A040(); esp += 4; //call
	to16i(esp+0x4F70) = ax; //mov
	inc(eax);
	imul32(eax, 0x1A);
	xor_(edx, edx);
	ebx = 0x1A; //mov
	to16i(esp+0x4F50) = dx; //mov
	to32i(esp+0x4F14) = ebx; //mov
	to32i(esp+0x4F08) = eax; //mov
loc_418C83:
	ecx = to32i(esp+0x4F4E); //mov
	ebx = to32i(dword_5121FC); //mov
	sar(ecx, (int32_t)0x10);
	cmp(ecx, ebx);
	if (jge())
		goto loc_418E3C;
	eax = to32i(esp+0x4F2E); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	eax = to32i(esp+0x4F6E); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jz())
		goto loc_418D35;
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ebx = to32i(esp+0x4F1C); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ebx);
loc_418CEC:
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4F50); //mov
	ecx = to32i(esp+0x4F14); //mov
	inc(eax);
	add(ecx, (int32_t)0x1A);
	to16i(esp+0x4F50) = ax; //mov
	to32i(esp+0x4F14) = ecx; //mov
	goto loc_418C83;
loc_418D35:
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F10); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	goto loc_418CEC;
loc_418D4E:
	ecx = 0x1A; //mov
	xor_(ebx, ebx);
	to32i(esp+0x4F10) = ecx; //mov
	to16i(esp+0x4F54) = bx; //mov
loc_418D64:
	edx = to32i(esp+0x4F2E); //mov
	sar(edx, (int32_t)0x10);
	imul32(edx, 0x684);
	eax = to32i(esp+0x4F52); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, to32i(esp+edx+0x230));
	if (jge())
		goto loc_418DFF;
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(esp+eax+0x238); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	edx = to32i(esp+0x4F18); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ebx = to32i(esp+0x4F10); //mov
	ecx = to32i(esp+0x4F54); //mov
	add(ebx, (int32_t)0x1A);
	inc(ecx);
	to32i(esp+0x4F10) = ebx; //mov
	to16i(esp+0x4F54) = cx; //mov
	goto loc_418D64;
loc_418DFF:
	push32(4);
	push32(5);
	eax = 0x2B6; //mov
	ecx = to32i(esp+0x4F18); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, ecx);
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2A5; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_418E3C:
	eax = to32i(esp+0x4F2E); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x4F00) = eax; //mov
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(5);
	eax = 0x2AA; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	imul32(eax, to32i(esp+0x4F00), 0x684);
	eax = to32i(esp+eax+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_41A3E0(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(5);
	eax = 0x2B6; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	add(eax, edi);
	ebx = ax; //movsx
	eax = 0x2A8; //mov
	goto loc_41885B;
loc_418EE8:
	cmp(to8i(byte_4D76C1), (int8_t)0);
	if (jz())
		goto loc_4189A6;
	goto loc_418B59;
loc_418EFA:
	to32i(dword_512214) = 2; //mov
	xor_(dh, dh);
	to8i(byte_4D76C1) = dh; //mov
	goto loc_4189E3;
loc_418F11:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	edi = 1; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	xor_(esi, esi);
	esp -= 4; _sub_4159C0(); esp += 4; //call
	to32i(dword_4D21AC) = esi; //mov
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esi = (int32_t)(intptr_t)dword_4D28C4; //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0x4F74);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_418F59:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_418A4F;
	cmp(cx, (int16_t)0xD);
	if (jz())
		goto loc_418A34;
	goto loc_418A4F;
loc_418F73:
	esp -= 4; _sub_415BF0(); esp += 4; //call
	goto loc_418A4F;
loc_418F7D:
	cmp(dx, (int16_t)0x4B00);
	if (jnz())
		goto loc_418FDA;
	ecx = 0xD; //mov
	to16i(ebp+0xA) = 5; //mov
	to16i(esp+0x4F40) = cx; //mov
loc_418F97:
	test(si, si);
	if (jnz())
		goto loc_419006;
	esi = to32i(esp+0x4F0C); //mov
loc_418FA3:
	eax = si; //movsx
	eax = to32i(esp+eax*2+0x4ECE); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	test(to8i(esp+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_418F97;
	cmp(eax, to32i(dword_51220C));
	if (jz())
		goto loc_418F97;
	edx = 0x7F; //mov
	xor_(eax, eax);
	to16i(ebp+0xA) = 5; //mov
	goto loc_418AF9;
loc_418FDA:
	cmp(to16i(ebp+0xA), (int16_t)5);
	if (jnz())
		goto loc_418FE7;
	cmp(dx, (int16_t)0xD);
	if (jz())
		goto loc_418F97;
loc_418FE7:
	cmp(to16i(ebp+0xA), (int16_t)6);
	if (jnz())
		goto loc_418AFE;
	cmp(to16i(esp+0x4F40), (int16_t)0xD);
	if (jz())
		goto loc_418AAD;
	goto loc_418AFE;
loc_419006:
	dec(esi);
	goto loc_418FA3;
loc_419009:
	inc(esi);
	goto loc_418ACB;
loc_41900F:
	cmp(dx, (int16_t)6);
	if (jz())
		goto loc_418B0C;
	goto loc_418B41;
loc_41901E:
	cmp(cx, (int16_t)0x5000);
	if (jz())
		goto loc_418B1E;
	goto loc_418B41;
}
Fn(void) Game::_sub_419044()
{
	static const void *const off_419030[] = {
		&&loc_41924E,
		&&loc_419B54,
		&&loc_419AC4,
		&&loc_419AC4,
		&&loc_419ADC,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x4F6C);
	ebp = eax; //mov
	edi = to32i(dword_512214); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+0x4F44) = edx; //mov
	to32i(esp+0x4F38) = ebx; //mov
	to32i(esp+0x4F48) = ebx; //mov
	edx = 1; //mov
	to32i(esp+0x4F5C) = ecx; //mov
	to32i(esp+0x4F50) = edx; //mov
	to16i(esp+0x4F64) = dx; //mov
	cmp(edi, (int32_t)2);
	if (jz())
		goto loc_419202;
	cmp(to8i(byte_4D76C0), (int8_t)1);
	if (jz())
		goto loc_419214;
loc_4190A4:
	esp -= 4; _sub_41A020(); esp += 4; //call
	to16i(esp+0x4F60) = ax; //mov
	cmp(to32i(dword_4D21AC), (int32_t)0);
	if (jnz())
		goto loc_4190E5;
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jz())
		goto loc_4190E5;
	edx = to32i(dword_4D5A28); //mov
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	xor_(eax, eax);
	edx = 1; //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	to32i(dword_4D21AC) = edx; //mov
loc_4190E5:
	cmp(to32i(dword_4D5EF8), (int32_t)0);
	if (jnz())
		goto loc_41911D;
	esi = (int32_t)(intptr_t)aCNfs2seFront_3; //mov
	edi = 0xC2; //mov
	ebx = 0x20; //mov
	edx = 0x4E30; //mov
	eax = (int32_t)(intptr_t)aDumicars; //mov
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	to32i(dword_4D5EF8) = eax; //mov
loc_41911D:
	edx = to32i(esp+0x4F5E); //mov
	eax = esp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41A570(); esp += 4; //call
	cmp(to32i(dword_5121F8), (int32_t)1);
	if (jnz())
		goto loc_41914F;
	cmp(to8i(byte_4D76C2), (int8_t)1);
	if (jnz())
		goto loc_41914F;
	eax = esp; //mov
	xor_(bl, bl);
	esp -= 4; _sub_413650(); esp += 4; //call
	to8i(byte_4D76C2) = bl; //mov
loc_41914F:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_41916F;
	cmp(to8i(byte_4D76C3), (int8_t)1);
	if (jnz())
		goto loc_41916F;
	eax = esp; //mov
	esp -= 4; _sub_4131C4(); esp += 4; //call
	xor_(al, al);
	to8i(byte_4D76C3) = al; //mov
loc_41916F:
	cmp(to8i(byte_512DAF), (int8_t)1);
	if (jnz())
		goto loc_419191;
	cmp(to16i(word_4D4204), (int16_t)1);
	if (jnz())
		goto loc_419191;
	eax = esp; //mov
	esp -= 4; _sub_424E60(); esp += 4; //call
	xor_(eax, eax);
	to16i(word_4D4204) = ax; //mov
loc_419191:
	cmp(to8i(byte_4D76C0), (int8_t)1);
	if (jnz())
		goto loc_4191A3;
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4154C0(); esp += 4; //call
loc_4191A3:
	cmp(to8i(byte_512ECC), (int8_t)1);
	if (jnz())
		goto loc_419228;
loc_4191B0:
	ebx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(dword_51221C); //mov
	edx = to32i(dword_5121F8+2); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	sar(edx, (int32_t)0x10);
	eax = ax; //cwde
	esp -= 4; _sub_41ACA0(); esp += 4; //call
	to32i(esp+0x4F54) = eax; //mov
	xor_(eax, eax);
loc_4191D9:
	ebx = to32i(esp+0x4F5E); //mov
	edx = ax; //movsx
	sar(ebx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jge())
		goto loc_41923D;
	imul32(edx, 0x684);
	edx = to32i(esp+edx+0x278); //mov
	to16i(esp+edx*2+0x4F1E) = ax; //mov
	inc(eax);
	goto loc_4191D9;
loc_419202:
	eax = 0xFFFFFFFD; //mov
	add(esp, (int32_t)0x4F6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_419214:
	edx = 0x30; //mov
	eax = (int32_t)(intptr_t)dword_4E5FFC; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	goto loc_4190A4;
loc_419228:
	eax = 0x64; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	goto loc_4191B0;
loc_41923D:
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_41924E;
	goto *off_419030[eax];
loc_41924E:
	xor_(eax, eax);
	edx = to32i(esp+0x4F60); //mov
	to16i(esp+0x4F68) = ax; //mov
	cmp(dx, (int16_t)1);
loc_419263:
	if (jle())
		goto loc_41927B;
loc_419265:
	edx = (int32_t)(intptr_t)(esp+0x4F20); //lea
	eax = esp; //mov
	esp -= 4; _sub_415440(); esp += 4; //call
	to16i(esp+0x4F64) = ax; //mov
loc_41927B:
	cmp(to16i(esp+0x4F60), (int16_t)2);
	if (jle())
		goto loc_419BFC;
	eax = to32i(ebp+0x1C); //mov
	and_(to8i(eax+2), (int8_t)0xFE);
	eax = to32i(ebp+0x20); //mov
	and_(to8i(eax+2), (int8_t)0xFE);
loc_419298:
	ebx = to32i(esp+0x4F62); //mov
	eax = to32i(ebp+0x10); //mov
	edx = to32i(esp+0x4F66); //mov
	esp -= 4; _sub_415490(); esp += 4; //call
	sar(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	eax = to32i(ebp+0x14); //mov
	esp -= 4; _sub_415470(); esp += 4; //call
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jz())
		goto loc_4192CC;
	eax = to32i(ebp+0x18); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_4192CC:
	eax = ebp; //mov
	xor_(esi, esi);
	xor_(edx, edx);
	to32i(dword_4D2098) = esi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = esp; //mov
	edi = to32i(esp+0x4F44); //mov
	esp -= 4; _sub_4159E0(); esp += 4; //call
	test(edi, edi);
	if (jnz())
		goto loc_419A89;
	eax = to32i(esp+0x4F60); //mov
	dec(eax);
	to32i(esp+0x4F58) = eax; //mov
loc_419302:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ecx = to32i(esp+0x4F48); //mov
	edx = 0x400; //mov
	add(ecx, eax);
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_415E40(); esp += 4; //call
	to32i(esp+0x4F48) = ecx; //mov
	to32i(esp+0x4F40) = ecx; //mov
	xor_(eax, eax);
	ecx = to32i(esp+0x4F5C); //mov
	al = to8i(byte_512DFB); //mov
	xor_(ebx, ebx);
	inc(ecx);
	eax = to32i(off_4D41E8+eax*4); //mov
	to32i(esp+0x4F5C) = ecx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D4158+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_415CC0(); esp += 4; //call
	cmp(to8i(byte_512DFB), (int8_t)5);
	if (jnz())
		goto loc_419C0F;
	esi = to32i(dword_5121FC); //mov
	push32(esi);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSD_0);
loc_419398:
	eax = (int32_t)(intptr_t)(esp+0x4E8C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	push32(2);
	push32(4);
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x2B8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x288; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x288; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x288; //mov
	esi = to32i(esp+0x4F54); //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_41943D;
	push32(2);
	push32(3);
	eax = 0x288; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x288; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	add(eax, (int32_t)0xA);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E38); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_41943D:
	eax = 0x284; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x284; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x284; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x285; //mov
	edi = 0x27D; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x285; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x285; //mov
	to16i(esp+0x4F4C) = di; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x286; //mov
	edi = to32i(esp+0x4F66); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x286; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x286; //mov
	sar(edi, (int32_t)0x10);
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi+edi*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(5);
	push32(5);
	eax = 0x2A1; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27D; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	imul32(esi, edi, 0x684);
	eax = to32i(esp+esi+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_41A3E0(); esp += 4; //call
	push32(eax);
	push32(aS_4);
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(5);
	eax = 0x284; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	sub(eax, (int32_t)0x18);
	ebx = ax; //movsx
	eax = 0x27D; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(to32i(esp+esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_419C2B;
	ax = to16i(esp+esi+0x278); //mov
	add(eax, (int32_t)0x288);
	push32(4);
	ecx = ax; //movsx
	push32(5);
	eax = ecx; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27D; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	eax = ax; //cwde
	to32i(esp+0x4F44) = eax; //mov
	edx = to32i(esp+0x4F44); //mov
	eax = ecx; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	eax = to32i(esp+esi+0x234); //mov
	shl(edi, (int32_t)2);
	esp -= 4; _sub_41B150(); esp += 4; //call
	ecx = to32i(dword_4E5FFC+edi); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_419636;
	eax = (int32_t)(intptr_t)(ecx+0x288); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x4E84); //lea
	push32(eax);
	push32(aSS_0);
	eax = (int32_t)(intptr_t)(esp+0x4EDC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(esp+0x4ED0); //lea
	edi = (int32_t)(intptr_t)(esp+0x4E80); //lea
	push32(edi);
loc_41961D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_419635;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41961D;
loc_419635:
	pop32(edi);
loc_419636:
	push32(4);
	push32(5);
	eax = 0x285; //mov
	esi = to32i(esp+0x4F52); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	sar(esi, (int32_t)0x10);
	ebx = ax; //movsx
	eax = esi; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = to32i(esp+0x4F66); //mov
	ebx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	eax = esp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41A0B0(); esp += 4; //call
	push32(4);
	push32(5);
	eax = 0x286; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = esi; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
loc_4196AB:
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(to16i(esp+0x4F60), (int16_t)1);
	if (jle())
		goto loc_419853;
	cmp(to32i(dword_512208), (int32_t)0);
	if (jnz())
		goto loc_419C98;
	eax = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esp+eax*2+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
loc_4196E6:
	ecx = esp; //mov
	add(edx, ecx);
	esp -= 4; _sub_415DA0(); esp += 4; //call
loc_4196EF:
	edx = to32i(esp+0x4F62); //mov
	sar(edx, (int32_t)0x10);
	ecx = (int32_t)(intptr_t)(edx+edx); //lea
	eax = to32i(esp+ecx+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	eax = to32i(esp+eax+0x21C); //mov
	eax = to32i(eax); //mov
	esp -= 4; _sub_415D40(); esp += 4; //call
	eax = to32i(esp+ecx+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	cmp(to32i(esp+eax+0x280), (int32_t)2);
	if (jnz())
		goto loc_419CD2;
	eax = edx; //mov
	esp -= 4; _sub_415D00(); esp += 4; //call
	eax = to32i(esp+ecx+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	edx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	eax = to32i(esp+eax+0x234); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_4197D3;
	eax = to32i(esp+ecx+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)2);
	edx = to32i(dword_4E5FFC+eax); //mov
	test(edx, edx);
	if (jz())
		goto loc_4197D3;
	eax = (int32_t)(intptr_t)(edx+0xB3); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x4E84); //lea
	push32(eax);
	push32(aSS_0);
	eax = (int32_t)(intptr_t)(esp+0x4EDC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(esp+0x4ED0); //lea
	edi = (int32_t)(intptr_t)(esp+0x4E80); //lea
	push32(edi);
loc_4197BA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4197D2;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4197BA;
loc_4197D2:
	pop32(edi);
loc_4197D3:
	push32(4);
	push32(5);
	eax = 0x285; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27E; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	ebx = (int32_t)(intptr_t)(esp+0x4E80); //lea
	edx = to32i(esp+eax*2+0x4F1E); //mov
	eax = esp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41A0B0(); esp += 4; //call
	push32(4);
	push32(5);
	eax = 0x286; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27E; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x4E88); //lea
loc_41984E:
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_419853:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(esp+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	edx = to32i(esp+eax+0x21C); //mov
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	dx = to16i(edx); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	cmp(dx, (int16_t)0xC);
	if (jge())
		goto loc_41989C;
	edx = to32i(esp+0x4F40); //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41989C:
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_4198B8;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_4198B8:
	cmp(to16i(esp+0x4F5C), (int16_t)0);
	if (jz())
		goto loc_4198C8;
loc_4198C8:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ebx, ebx);
	eax = ebp; //mov
	to32i(dword_4D2094) = ebx; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	cmp(to16i(word_51345C), (int16_t)0);
	if (jz())
		goto loc_419911;
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x300; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to16i(word_51345C) = cx; //mov
	esp -= 4; _sub_48A2B4(); esp += 4; //call
loc_419911:
	esi = to32i(esp+0x4F50); //mov
	cmp(si, (int16_t)1);
	if (jnz())
		goto loc_419984;
	cmp(to8i(byte_4D76C0), (int8_t)1);
	if (jnz())
		goto loc_419984;
	cmp(to16i(esp+0x4F5C), (int16_t)0);
	if (jl())
		goto loc_419984;
	edx = to32i(esp+0x4F5E); //mov
	xor_(eax, eax);
	ebx = (int32_t)(intptr_t)dword_4E5FFC; //mov
	to32i(esp+0x4F50) = eax; //mov
	xor_(al, al);
	sar(edx, (int32_t)0x10);
	to8i(byte_4D76C0) = al; //mov
	eax = esp; //mov
	esp -= 4; _sub_413BF0(); esp += 4; //call
	cmp(ax, si);
	if (jnz())
		goto loc_419984;
	ebx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = to32i(dword_51221C); //mov
	edx = to32i(dword_5121F8+2); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	sar(edx, (int32_t)0x10);
	eax = ax; //cwde
	esp -= 4; _sub_41ACA0(); esp += 4; //call
	to32i(esp+0x4F54) = eax; //mov
loc_419984:
	esp -= 4; _sub_405960(); esp += 4; //call
	ebx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_419A7B;
	edx = to32i(dword_5637F4); //mov
	cmp(edx, to32i(esp+0x4F38));
	if (jle())
		goto loc_419A7B;
	cmp(to8i(byte_4D76C0), (int8_t)0);
	if (jnz())
		goto loc_419A7B;
	edx = to32i(dword_5637F4); //mov
	add(edx, (int32_t)0xF);
	to32i(esp+0x4F38) = edx; //mov
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_419D3F;
	ebx = 0xD; //mov
	to16i(ebp+0xA) = 0; //mov
loc_4199D9:
	xor_(dh, dh);
	to8i(byte_4D76C2) = dh; //mov
	to8i(byte_4D76C0) = dh; //mov
loc_4199E7:
	cmp(to16i(ebp+0xA), (int16_t)2);
	if (jnz())
		goto loc_419A08;
	cmp(bx, (int16_t)0xD);
	if (jnz())
		goto loc_419A08;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_419D59;
	esp -= 4; _sub_4098D0(); esp += 4; //call
	xor_(ebx, ebx);
loc_419A08:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_419A1A;
	cmp(bx, (int16_t)0xD);
	if (jnz())
		goto loc_419A1A;
	esp -= 4; _sub_415BF0(); esp += 4; //call
loc_419A1A:
	cmp(to16i(ebp+0xA), (int16_t)3);
	if (jnz())
		goto loc_419A2B;
	cmp(bx, (int16_t)0xD);
	if (jz())
		goto loc_419D7C;
loc_419A2B:
	cmp(to16i(esp+0x4F60), (int16_t)2);
	if (jle())
		goto loc_419A6A;
	dx = to16i(ebp+0xA); //mov
	cmp(dx, (int16_t)4);
	if (jnz())
		goto loc_419DC2;
loc_419A44:
	cmp(bx, (int16_t)0x4800);
	if (jnz())
		goto loc_419EC5;
loc_419A4F:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(ebx, ebx);
	eax = ebp; //mov
	to16i(ebp+0xA) = 0; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
loc_419A6A:
	edx = bx; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x4F44) = eax; //mov
loc_419A7B:
	cmp(to32i(esp+0x4F44), (int32_t)0);
	if (jz())
		goto loc_419302;
loc_419A89:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
	esp -= 4; _sub_4159C0(); esp += 4; //call
	edx = 1; //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(esp+0x4F44); //mov
	add(esp, (int32_t)0x4F6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_419AC4:
	edx = (int32_t)(intptr_t)(esp+0x4F20); //lea
	eax = esp; //mov
	esp -= 4; _sub_4153E0(); esp += 4; //call
	xor_(ecx, ecx);
	to16i(esp+0x4F64) = ax; //mov
loc_419ADC:
	ax = to16i(dword_51220C); //mov
	to16i(esp+0x4F68) = ax; //mov
	xor_(eax, eax);
	cmp(cx, (int16_t)1);
	if (jz())
		goto loc_41927B;
loc_419AF6:
	edx = ax; //movsx
	edx = to32i(esp+edx*2+0x4F1E); //mov
	sar(edx, (int32_t)0x10);
	imul32(ebx, edx, 0x684);
	test(to8i(esp+ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_419B2E;
	ebx = to32i(esp+0x4F66); //mov
	sar(ebx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jz())
		goto loc_419B2E;
	ecx = 1; //mov
	to16i(esp+0x4F64) = ax; //mov
loc_419B2E:
	inc(eax);
	edx = to32i(esp+0x4F5E); //mov
	ebx = ax; //movsx
	sar(edx, (int32_t)0x10);
	cmp(ebx, edx);
	if (jl())
		goto loc_419B49;
	test(cx, cx);
	if (jz())
		goto loc_419265;
loc_419B49:
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_419AF6;
	goto loc_41927B;
loc_419B54:
	ebx = 1; //mov
	xor_(edx, edx);
	to16i(esp+0x4F64) = bx; //mov
	ebx = to32i(dword_512264); //mov
	to16i(esp+0x4F68) = dx; //mov
	cmp(ebx, (int32_t)2);
	if (jge())
		goto loc_419BB6;
	test(to8i(esp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_419B8E;
	cmp(to16i(esp+0x4F60), (int16_t)1);
	goto loc_419263;
loc_419B8E:
	edx = (int32_t)(intptr_t)(esp+0x4F20); //lea
	eax = esp; //mov
	ecx = 1; //mov
	esp -= 4; _sub_415440(); esp += 4; //call
	to16i(esp+0x4F64) = ax; //mov
	to16i(esp+0x4F68) = cx; //mov
	goto loc_41927B;
loc_419BB6:
	xor_(eax, eax);
	cmp(cx, (int16_t)1);
	if (jz())
		goto loc_41927B;
loc_419BC2:
	edx = ax; //movsx
	edx = to32i(esp+edx*2+0x4F1E); //mov
	sar(edx, (int32_t)0x10);
	imul32(ebx, edx, 0x684);
	test(to8i(esp+ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_419BF0;
	test(edx, edx);
	if (jz())
		goto loc_419BF0;
	ecx = 1; //mov
	to16i(esp+0x4F64) = ax; //mov
loc_419BF0:
	inc(eax);
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_419BC2;
	goto loc_41927B;
loc_419BFC:
	eax = to32i(ebp+0x1C); //mov
	or_(to8i(eax+2), (int8_t)1);
	eax = to32i(ebp+0x20); //mov
	or_(to8i(eax+2), (int8_t)1);
	goto loc_419298;
loc_419C0F:
	eax = 0x2B8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	ebx = to32i(dword_5121FC); //mov
	push32(ebx);
	push32(aDS);
	goto loc_419398;
loc_419C2B:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_419C66;
	push32(4);
	push32(5);
	eax = 0x289; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27D; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2E4; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	goto loc_4196AB;
loc_419C66:
	push32(4);
	push32(5);
	eax = 0x289; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27D; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2A5; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	goto loc_4196AB;
loc_419C98:
	eax = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esp+eax*2+0x4F1E); //mov
	sar(eax, (int32_t)0x10);
	imul32(edx, eax, 0x684);
	test(to8i(esp+edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_4196E6;
	eax = (int32_t)(intptr_t)(eax+eax*8); //lea
	add(eax, (int32_t)(intptr_t)byte_512E84);
	esp -= 4; _sub_415E00(); esp += 4; //call
	goto loc_4196EF;
loc_419CD2:
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_419D0D;
	push32(4);
	push32(5);
	eax = 0x295; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27E; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2E4; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	goto loc_41984E;
loc_419D0D:
	push32(4);
	push32(5);
	eax = 0x295; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x27E; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x2A5; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	goto loc_41984E;
loc_419D3F:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_4199E7;
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_4199D9;
	goto loc_4199E7;
loc_419D59:
	xor_(ch, ch);
	eax = 2; //mov
	to8i(byte_4D76C3) = ch; //mov
	to8i(byte_4D76C2) = ch; //mov
	to8i(byte_4D76C0) = ch; //mov
	to32i(dword_512214) = eax; //mov
	goto loc_419A08;
loc_419D7C:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esi = 1; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	xor_(ebx, ebx);
	esp -= 4; _sub_4159C0(); esp += 4; //call
	to32i(dword_4D21AC) = ebx; //mov
	esp -= 4; _sub_4762E0(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = esi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4D28C4; //mov
	add(esp, (int32_t)0x4F6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_419DC2:
	cmp(dx, (int16_t)5);
	if (jz())
		goto loc_419A44;
loc_419DCC:
	cmp(bx, (int16_t)0x4B00);
	if (jnz())
		goto loc_419E41;
	eax = to32i(esp+0x4F64); //mov
	test(ax, ax);
	if (jnz())
		goto loc_419EFB;
	eax = to32i(esp+0x4F58); //mov
	to16i(esp+0x4F64) = ax; //mov
loc_419DF2:
	eax = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esp+eax*2+0x4F1E); //mov
	edx = to32i(dword_51220C); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_419E2F;
	ecx = to32i(esp+0x4F64); //mov
	test(cx, cx);
	if (jnz())
		goto loc_419F0B;
	eax = to32i(esp+0x4F58); //mov
	to16i(esp+0x4F64) = ax; //mov
loc_419E2F:
	edx = 0x7F; //mov
	xor_(eax, eax);
	to16i(ebp+0xA) = 4; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_419E41:
	cmp(bx, (int16_t)0x4D00);
	if (jnz())
		goto loc_419A6A;
loc_419E4C:
	eax = to32i(esp+0x4F5E); //mov
	edx = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	dec(eax);
	cmp(edx, eax);
	if (jnz())
		goto loc_419F1B;
	xor_(eax, eax);
	to16i(esp+0x4F64) = ax; //mov
loc_419E73:
	eax = to32i(esp+0x4F62); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+eax*2+0x4F1E); //mov
	ecx = to32i(dword_51220C); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jnz())
		goto loc_419EAE;
	edx = to32i(esp+0x4F5E); //mov
	sar(edx, (int32_t)0x10);
	dec(edx);
	cmp(eax, edx);
	if (jnz())
		goto loc_419F28;
	xor_(ecx, ecx);
	to16i(esp+0x4F64) = cx; //mov
loc_419EAE:
	edx = 0x7F; //mov
	xor_(eax, eax);
	to16i(ebp+0xA) = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	goto loc_419A6A;
loc_419EC5:
	cmp(bx, (int16_t)0x5000);
	if (jz())
		goto loc_419A4F;
	cmp(bx, (int16_t)0xD);
	if (jnz())
		goto loc_419DCC;
	cmp(to16i(ebp+0xA), (int16_t)4);
	if (jnz())
		goto loc_419EE6;
	ebx = 0x4B00; //mov
loc_419EE6:
	cmp(to16i(ebp+0xA), (int16_t)5);
	if (jnz())
		goto loc_419DCC;
	ebx = 0x4D00; //mov
	goto loc_419E4C;
loc_419EFB:
	edx = eax; //mov
	dec(edx);
	to16i(esp+0x4F64) = dx; //mov
	goto loc_419DF2;
loc_419F0B:
	esi = ecx; //mov
	dec(esi);
	to16i(esp+0x4F64) = si; //mov
	goto loc_419E2F;
loc_419F1B:
	inc(to16i(esp+0x4F64));
	goto loc_419E73;
loc_419F28:
	inc(to16i(esp+0x4F64));
	goto loc_419EAE;
}
Fn(void) Game::_sub_419FD0()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x10);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_419FB4; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	cmp(ax, (int16_t)8);
	if (jl())
		goto loc_419FE8;
	xor_(eax, eax);
loc_419FE8:
	eax = ax; //cwde
	ax = to16i(esp+eax*2); //mov
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41A000()
{
	cmp(ax, (int16_t)2);
	if (jz())
		goto loc_41A012;
	cmp(ax, (int16_t)4);
	if (jnz())
		goto loc_41A015;
	eax = 1; //mov
	return;
loc_41A012:
	xor_(eax, eax);
	return;
loc_41A015:
	eax = 2; //mov
}
Fn(void) Game::_sub_41A020()
{
	push32(edx);
	dx = to16i(dword_512268); //mov
	ax = to16i(dword_512264); //mov
	add(eax, edx);
	cmp(ax, (int16_t)1);
	if (jge())
		goto loc_41A03B;
	eax = 1; //mov
loc_41A03B:
	pop32(edx);
}
Fn(void) Game::_sub_41A040()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	edi = eax; //mov
	to16i(esp+0x30) = dx; //mov
	ebp = ebx; //mov
	esi = to32i(dword_5121FC); //mov
	xor_(eax, eax);
loc_41A058:
	edx = ax; //movsx
	cmp(edx, esi);
	if (jge())
		goto loc_41A081;
	ecx = to32i(esp+0x2E); //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, 0x684);
	ebx = (int32_t)(intptr_t)(edi+ecx); //lea
	ebx = to32i(ebx+edx*4+0x238); //mov
	to32i(esp+edx*4) = ebx; //mov
	to16i(esp+edx*2+0x20) = ax; //mov
	inc(eax);
	goto loc_41A058;
loc_41A081:
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	eax = to32i(esp+0x1E); //mov
	sar(eax, (int32_t)0x10);
	edx = ebp; //mov
	eax = to32i(esp+eax*4); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	eax = to32i(esp+0x20); //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41A0B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebp = eax; //mov
	edi = edx; //mov
	to32i(esp+0x30) = ebx; //mov
	esi = to32i(dword_5121FC); //mov
	xor_(eax, eax);
loc_41A0C7:
	edx = ax; //movsx
	cmp(edx, esi);
	if (jge())
		goto loc_41A0EC;
	ecx = di; //movsx
	imul32(ecx, 0x684);
	ebx = (int32_t)(intptr_t)(ecx+ebp); //lea
	ebx = to32i(ebx+edx*4+0x258); //mov
	to32i(esp+edx*4) = ebx; //mov
	to16i(esp+edx*2+0x20) = ax; //mov
	inc(eax);
	goto loc_41A0C7;
loc_41A0EC:
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	ebx = esi; //mov
	ah = to8i(byte_512DFA); //mov
	dec(ebx);
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_41A142;
	eax = bx; //movsx
	eax = to32i(esp+eax*2+0x1E); //mov
	sar(eax, (int32_t)0x10);
	fild(to32i(esp+eax*4));
	fmul(to32f(flt_4C8FB8));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	push32(a5_2f);
	ecx = to32i(esp+0x3C); //mov
	push32(ecx);
loc_41A12A:
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = bx; //movsx
	ax = to16i(esp+eax*2+0x20); //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41A142:
	eax = bx; //movsx
	eax = to32i(esp+eax*2+0x1E); //mov
	sar(eax, (int32_t)0x10);
	fild(to32i(esp+eax*4));
	fmul(to32f(flt_4C8FB4));
	sub(esp, (int32_t)8);
	fstp(to64f(esp));
	push32(a5_2f);
	edx = to32i(esp+0x3C); //mov
	push32(edx);
	goto loc_41A12A;
}
Fn(void) Game::_sub_41A170()
{
	eax = to32i(eax+0x21C); //mov
	eax = to32i(eax+0x30); //mov
	test(eax, eax);
	if (jl())
		goto loc_41A18A;
	cmp(eax, (int32_t)0xB);
	if (jge())
		goto loc_41A18A;
	eax = to32i(off_4D4A9C+eax*4); //mov
	return;
loc_41A18A:
	eax = 0x2A3; //mov
	_sub_41B710(); return; //jmp
}
Fn(void) Game::_sub_41A1A0()
{
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_41A1E3;
	test(eax, eax);
	if (jz())
		goto loc_41A1B8;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jz())
		goto loc_41A1E6;
loc_41A1B8:
	ecx = to32i(dword_4D76BC); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41A1E3;
	cmp(to16i(ecx), (int16_t)0);
	if (jnz())
		goto loc_41A1D1;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_41A1F9;
loc_41A1D1:
	eax = to32i(dword_4D76BC); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jnz())
		goto loc_41A1E3;
	cmp(to16i(eax+2), (int16_t)0);
	if (jz())
		goto loc_41A1F9;
loc_41A1E3:
	pop32(edx);
	pop32(ecx);
	return;
loc_41A1E6:
	push32(ebx);
	xor_(bl, bl);
	to8i(byte_512E8D) = bl; //mov
	to8i(byte_512E84) = bl; //mov
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
	return;
loc_41A1F9:
	xor_(dl, dl);
	to8i(byte_512E8D) = dl; //mov
	to8i(byte_512E84) = dl; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41A210()
{
	eax = to32i(dword_5121FC); //mov
	cmp(eax, (int32_t)4);
	if (jnb())
		goto loc_41A223;
	cmp(eax, (int32_t)2);
loc_41A21D:
	eax = 0x64; //mov
	return;
loc_41A223:
	if (jbe())
		goto loc_41A22D;
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_41A21D;
	xor_(eax, eax);
	return;
loc_41A22D:
	eax = 0x4C; //mov
}
Fn(void) Game::_sub_41A240()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	di = to16i(dword_512264); //mov
	dx = to16i(dword_512268); //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	add(edi, edx);
loc_41A25B:
	ecx = di; //movsx
	edx = ax; //movsx
	cmp(edx, ecx);
	if (jge())
		goto loc_41A28B;
	imul32(edx, 0x684);
	add(edx, esi);
	test(to8i(edx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_41A284;
	cmp(to32i(edx+0x280), (int32_t)2);
	if (jnz())
		goto loc_41A284;
	ebx = 1; //mov
loc_41A284:
	inc(eax);
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_41A25B;
loc_41A28B:
	eax = ebx; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41A2A0()
{
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_41A2DA;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jz())
		goto loc_41A2DA;
loc_41A2B4:
	edx = 0x12; //mov
	eax = (int32_t)(intptr_t)word_513062; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(ecx, ecx);
	edx = 1; //mov
	to32i(dword_4D76BC) = ecx; //mov
	to16i(word_4D4202) = dx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_41A2DA:
	push32(ebx);
	eax = 1; //mov
	ebx = 9; //mov
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _sub_41A1A0(); esp += 4; //call
	esp -= 4; _sub_408CC0(); esp += 4; //call
	eax = (int32_t)(intptr_t)byte_512E84; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 9; //mov
	edx = (int32_t)(intptr_t)byte_512F55; //mov
	eax = (int32_t)(intptr_t)byte_512E8D; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	esp -= 4; _sub_408BF0(); esp += 4; //call
	pop32(ebx);
	goto loc_41A2B4;
}
Fn(void) Game::_sub_41A320()
{
	push32(edx);
	edx = 0x12; //mov
	eax = (int32_t)(intptr_t)word_513062; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(dword_4D76BC) = (int32_t)(intptr_t)word_513062; //mov
	to16i(word_4D4202) = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_41A350()
{
	push32(edx);
	edx = 0x2C8; //mov
	eax = (int32_t)(intptr_t)dword_512AD8; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_4D76B8) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_41A370()
{
	push32(ecx);
	push32(edx);
	edx = 0x2C8; //mov
	eax = (int32_t)(intptr_t)dword_512AD8; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_512AD8; //mov
	xor_(ecx, ecx);
	to32i(dword_4D76B8) = edx; //mov
loc_41A38E:
	byte_512AD0[ecx] = cl; //mov
	inc(ecx);
	cmp(ecx, (int32_t)8);
	if (jl())
		goto loc_41A38E;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41A3A0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x24);
	ecx = 9; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_419F90; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(eax, eax);
	if (jl())
		goto loc_41A3BD;
	cmp(eax, (int32_t)8);
	if (jle())
		goto loc_41A3BF;
loc_41A3BD:
	xor_(eax, eax);
loc_41A3BF:
	eax = to32i(esp+eax*4); //mov
	add(esp, (int32_t)0x24);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41A3E0()
{
	cmp(eax, (int32_t)0x24);
	if (jnz())
		goto loc_41A3F7;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_41A3F7;
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jz())
		goto loc_41A406;
loc_41A3F7:
	cmp(eax, (int32_t)0xF);
	if (jl())
		goto loc_41A40C;
	eax = 0x70; //mov
	_sub_41B710(); return; //jmp
loc_41A406:
	eax = (int32_t)(intptr_t)aJacques; //mov
	return;
loc_41A40C:
	add(eax, (int32_t)0x60);
	_sub_41B710(); return; //jmp
}
Fn(void) Game::_sub_41A420()
{
	cmp(eax, (int32_t)0x12);
	if (jz())
		goto loc_41A439;
	cmp(eax, (int32_t)0x24);
	if (jz())
		goto loc_41A439;
	cmp(eax, (int32_t)0xF);
	if (jle())
		goto loc_41A43F;
	eax = 0x70; //mov
	_sub_41B710(); return; //jmp
loc_41A439:
	eax = (int32_t)(intptr_t)aJacques; //mov
	return;
loc_41A43F:
	add(eax, (int32_t)0x60);
	_sub_41B710(); return; //jmp
}
Fn(void) Game::_sub_41A450()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = to32i(dword_4D76BC); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_41A481;
loc_41A45D:
	ebx = to32i(dword_4D76BC); //mov
	xor_(eax, eax);
	edx = ebx; //mov
loc_41A467:
	ecx = ax; //movsx
	inc(eax);
	to16i(edx+ecx*2) = 1; //mov
	cmp(ax, (int16_t)9);
	if (jl())
		goto loc_41A467;
	to32i(dword_4D76BC) = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41A481:
	esp -= 4; _sub_41A320(); esp += 4; //call
	goto loc_41A45D;
}
Fn(void) Game::_sub_41A490()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ebx = to32i(dword_4D76B8); //mov
	cl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	dl = cl; //mov
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	edi = 0xB; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	inc(cl);
	to8i(byte_50B480) = cl; //mov
	to32i(dword_512DA4) = edx; //mov
	xor_(eax, eax);
	edx = ebx; //mov
loc_41A4CF:
	ecx = ax; //movsx
	inc(eax);
	to16i(edx+ecx*2+0x2B0) = 0; //mov
	cmp(ax, (int16_t)8);
	if (jl())
		goto loc_41A4CF;
	ecx = 0x2AC; //mov
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	to16i(ebx+0x2C0) = 0; //mov
	edi = (int32_t)(intptr_t)(ebx+4); //lea
	to8i(ebx+0x2C4) = 0; //mov
	to32i(dword_4D76B8) = ebx; //mov
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
	ebx = to32i(dword_4D76B8); //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41A530()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = to32i(dword_4D5EF8); //mov
	esi = eax; //mov
	ecx = edi; //mov
	xor_(eax, eax);
loc_41A541:
	edx = ax; //movsx
	ebx = to16i(esi+edx*2); //movsx
	imul32(ebx, 0x684);
	inc(eax);
	to32i(ecx+ebx+0x278) = edx; //mov
	cmp(ax, (int16_t)8);
	if (jl())
		goto loc_41A541;
	to32i(dword_4D5EF8) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41A570()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x4C);
	ebp = eax; //mov
	to16i(esp+0x48) = dx; //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
loc_41A583:
	eax = to32i(esp+0x46); //mov
	ecx = dx; //movsx
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jl())
		goto loc_41A5DA;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_41A81D;
	cmp(to32i(dword_512208), (int32_t)2);
	if (jge())
		goto loc_41A611;
	xor_(ecx, ecx);
	esi = 1; //mov
loc_41A5AE:
	edx = to32i(esp+0x46); //mov
	eax = cx; //movsx
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jge())
		goto loc_41A689;
	imul32(eax, 0x684);
	edx = to32i(dword_4D5EF8); //mov
	edi = to32i(edx+eax+0x280); //mov
	cmp(esi, edi);
	if (jz())
		goto loc_41A603;
loc_41A5D7:
	inc(ecx);
	goto loc_41A5AE;
loc_41A5DA:
	imul32(ecx, 0x684);
	esi = to32i(dword_4D5EF8); //mov
	add(esi, ecx);
	edi = (int32_t)(intptr_t)(ecx+ebp); //lea
	ecx = 0x684; //mov
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
	goto loc_41A583;
loc_41A603:
	test(to8i(eax+ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_41A5D7;
	ebx = edi; //mov
	goto loc_41A5D7;
loc_41A611:
	esi = 1; //mov
	cx = to16i(dword_512264); //mov
loc_41A61D:
	edx = to32i(esp+0x46); //mov
	eax = cx; //movsx
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jl())
		goto loc_41A659;
	ebx = 1; //mov
	xor_(eax, eax);
loc_41A632:
	edx = to32i(esp+0x46); //mov
	esi = ax; //movsx
	sar(edx, (int32_t)0x10);
	cmp(esi, edx);
	if (jge())
		goto loc_41A689;
	imul32(esi, 0x684);
	edx = to32i(dword_4D5EF8); //mov
	cmp(to32i(edx+esi+0x280), (int32_t)2);
	if (jz())
		goto loc_41A67B;
loc_41A656:
	inc(eax);
	goto loc_41A632;
loc_41A659:
	edx = to32i(dword_4D5EF8); //mov
	ebx = to32i(edx+0x280); //mov
	cmp(esi, ebx);
	if (jz())
		goto loc_41A66C;
loc_41A669:
	inc(ecx);
	goto loc_41A61D;
loc_41A66C:
	imul32(eax, 0x684);
	to32i(eax+ebp+0x280) = ebx; //mov
	goto loc_41A669;
loc_41A67B:
	test(to8i(esi+ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_41A656;
	xor_(ebx, ebx);
	goto loc_41A656;
loc_41A689:
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_41A6B7;
	ax = to16i(dword_512264); //mov
loc_41A695:
	ecx = to32i(esp+0x46); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_41A6B7;
	imul32(edx, 0x684);
	inc(eax);
	to32i(edx+ebp+0x280) = 1; //mov
	goto loc_41A695;
loc_41A6B7:
	xor_(eax, eax);
loc_41A6B9:
	ecx = to32i(esp+0x46); //mov
	edx = ax; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jge())
		goto loc_41A6F1;
	imul32(edx, 0x684);
	ecx = to32i(dword_4D5EF8); //mov
	ebx = to32i(dword_5121FC); //mov
	cmp(ebx, to32i(ecx+edx+0x230));
	if (jle())
		goto loc_41A6E5;
loc_41A6E2:
	inc(eax);
	goto loc_41A6B9;
loc_41A6E5:
	ecx = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(edx+ebp+0x230) = ecx; //mov
	goto loc_41A6E2;
loc_41A6F1:
	eax = to32i(dword_5121F8); //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_41A81D;
	cmp(eax, to32i(dword_512208));
	if (jg())
		goto loc_41A81D;
	xor_(edx, edx);
loc_41A70D:
	eax = to32i(esp+0x46); //mov
	esi = dx; //movsx
	sar(eax, (int32_t)0x10);
	cmp(esi, eax);
	if (jl())
		goto loc_41A769;
	ebx = 0x186A0; //mov
	xor_(edx, edx);
loc_41A722:
	ecx = to32i(esp+0x46); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jl())
		goto loc_41A79A;
	ebx = (int32_t)(intptr_t)(esp+0x30); //lea
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	xor_(edx, edx);
loc_41A73F:
	ecx = to32i(esp+0x46); //mov
	eax = dx; //movsx
	sar(ecx, (int32_t)0x10);
	cmp(eax, ecx);
	if (jge())
		goto loc_41A81D;
	ecx = to32i(esp+eax*2+0x2E); //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, 0x684);
	inc(eax);
	inc(edx);
	to32i(ecx+ebp+0x278) = eax; //mov
	goto loc_41A73F;
loc_41A769:
	imul32(esi, 0x684);
	eax = to32i(dword_4D5EF8); //mov
	add(eax, esi);
	ecx = to32i(eax+0x21C); //mov
	cmp(to32i(ecx), (int32_t)0x24);
	if (jz())
		goto loc_41A784;
loc_41A781:
	inc(edx);
	goto loc_41A70D;
loc_41A784:
	cmp(to32i(eax+0x280), (int32_t)1);
	if (jz())
		goto loc_41A781;
	to32i(esi+ebp+0x280) = 3; //mov
	goto loc_41A781;
loc_41A79A:
	imul32(ecx, eax, 0x684);
	esi = to32i(dword_4D5EF8); //mov
	edi = to32i(ecx+esi+0x21C); //mov
	imul32(esi, eax, 0xE4C);
	eax = (int32_t)(intptr_t)(ecx+ebp); //lea
	cmp(to32i(edi), (int32_t)0x24);
	if (jnz())
		goto loc_41A806;
	ecx = to32i(eax+0x234); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_41A7F3;
	esi = (int32_t)(intptr_t)(ecx+ebx); //lea
loc_41A7C8:
	to32i(eax+0x234) = esi; //mov
loc_41A7CE:
	eax = dx; //movsx
	imul32(ecx, eax, 0x684);
	to16i(esp+eax*2+0x30) = dx; //mov
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(ecx+ebp+0x234); //mov
	inc(edx);
	to32i(esp+esi) = eax; //mov
	goto loc_41A722;
loc_41A7F3:
	imul32(ecx, -1);
	add(ecx, (int32_t)0x186A0);
	add(ecx, esi);
	to32i(eax+0x234) = ecx; //mov
	goto loc_41A7CE;
loc_41A806:
	edi = to32i(eax+0x234); //mov
	test(edi, edi);
	if (jg())
		goto loc_41A7CE;
	imul32(ecx, edi, -1);
	add(ecx, (int32_t)0x186A0);
	add(esi, ecx);
	goto loc_41A7C8;
loc_41A81D:
	eax = 1; //mov
	add(esp, (int32_t)0x4C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41ACA0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xD8);
	to16i(esp+0xD0) = ax; //mov
	to32i(esp+0xD4) = edx; //mov
	to32i(esp+0xCC) = ebx; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	edx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	esi = (int32_t)(intptr_t)aSSSS; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds_0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(dword_4DB1D8) = edx; //mov
	ecx = 0x21D; //mov
	edx = 0x280; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ecx = to32i(esp+0xCE); //mov
	ebx = eax; //mov
	sar(ecx, (int32_t)0x10);
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
	edx = to32i(esp+0xD4); //mov
	ebp = 0x14; //mov
	cmp(dx, (int16_t)2);
	if (jnz())
		goto loc_41AE23;
	eax = 1; //mov
loc_41AD2D:
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	edi = (int32_t)(intptr_t)(esp+0xB8); //lea
	shl(eax, (int32_t)2);
	ecx = ebp; //mov
	esi = (int32_t)(intptr_t)(ebx+eax); //lea
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
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
	eax = to32i(esp+0xC4); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	esi = to32i(esp+0xC8); //mov
	cmp(si, (int16_t)2);
	if (jnz())
		goto loc_41AE3D;
	eax = 0x1F; //mov
loc_41AD7E:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edi = (int32_t)(intptr_t)(esp+0xB8); //lea
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
	cmp(to8i(esp+ecx+0xB7), (int8_t)0xA);
	if (jnz())
		goto loc_41ADCB;
	edi = (int32_t)(intptr_t)(esp+0xB8); //lea
	xor_(dl, dl);
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
	to8i(esp+ecx+0xB7) = dl; //mov
loc_41ADCB:
	eax = esp; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	push32(eax);
	eax = to32i(esp+0xC8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xC4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xB0); //lea
	push32(eax);
	esi = to32i(esp+0xE0); //mov
	push32(esi);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x18);
	cmp(to32i(esp+0xC4), (int32_t)0);
	if (jz())
		goto loc_41AE57;
	edx = 1; //mov
loc_41AE12:
	test(ebx, ebx);
	if (jnz())
		goto loc_41AE5B;
	eax = edx; //mov
	add(esp, (int32_t)0xD8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41AE23:
	cmp(dx, (int16_t)4);
	if (jnz())
		goto loc_41AE33;
	eax = 0xB; //mov
	goto loc_41AD2D;
loc_41AE33:
	eax = 0x15; //mov
	goto loc_41AD2D;
loc_41AE3D:
	cmp(si, (int16_t)1);
	if (jnz())
		goto loc_41AE4D;
	eax = 0x1B; //mov
	goto loc_41AD7E;
loc_41AE4D:
	eax = 0x1E; //mov
	goto loc_41AD7E;
loc_41AE57:
	xor_(edx, edx);
	goto loc_41AE12;
loc_41AE5B:
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = edx; //mov
	add(esp, (int32_t)0xD8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41AE70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x14);
	edi = eax; //mov
	edx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	ecx = 0x1F6; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds_0; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	edx = 0x280; //mov
	ecx = 0x14; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ebx = eax; //mov
	eax = di; //movsx
	edx = ebx; //mov
	esi = ebx; //mov
	edi = esp; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
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
	test(ebx, ebx);
	if (jnz())
		goto loc_41AEDA;
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41AEDA:
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41AEF0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xD0);
	to16i(esp+0xCC) = ax; //mov
	ebp = edx; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	edx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	esi = (int32_t)(intptr_t)aSSSS_0; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds_0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(dword_4DB1D8) = edx; //mov
	ecx = 0x1B1; //mov
	edx = 0x280; //mov
	edi = (int32_t)(intptr_t)(esp+0xB8); //lea
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = eax; //mov
	ebx = eax; //mov
	eax = to32i(esp+0xCA); //mov
	edx = esi; //mov
	sar(eax, (int32_t)0x10);
	ecx = 0x14; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
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
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = to32i(esp+0xC4); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	edx = to32i(esp+0xC8); //mov
	cmp(dx, (int16_t)2);
	if (jz())
		goto loc_41B00D;
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_41B014;
	eax = 0x1B; //mov
loc_41AFA3:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = esp; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	push32(eax);
	eax = to32i(esp+0xC8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xC4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0xB0); //lea
	push32(eax);
	push32(ebp);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x18);
	cmp(to32i(esp+0xC4), (int32_t)0);
	if (jz())
		goto loc_41B01B;
	esi = 1; //mov
loc_41AFFB:
	test(ebx, ebx);
	if (jnz())
		goto loc_41B01F;
	eax = esi; //mov
	add(esp, (int32_t)0xD0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41B00D:
	eax = 0x1F; //mov
	goto loc_41AFA3;
loc_41B014:
	eax = 0x1E; //mov
	goto loc_41AFA3;
loc_41B01B:
	xor_(esi, esi);
	goto loc_41AFFB;
loc_41B01F:
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0xD0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41B040()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x108);
	edi = edx; //mov
	ecx = (int32_t)(intptr_t)(esp+0x104); //lea
	xor_(edx, edx);
	ebp = ax; //movsx
	to32i(esp+0x100) = edx; //mov
	eax = ebp; //mov
	edx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_41B250(); esp += 4; //call
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)(esp+0xFC); //lea
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	ecx = to32i(esp+0xFC); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41B118;
	cmp(to32i(esp+0x104), (int32_t)0x26C);
	if (jnz())
		goto loc_41B123;
	esi = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	ebp = 0x189; //mov
	edx = to32i(esp+0x104); //mov
	eax = (int32_t)(intptr_t)aRecords_0; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ebx = to32i(esp+0x104); //mov
	ebp = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0xFC); //mov
	ecx = 0x26C; //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0xFC); //mov
	esi = ebp; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
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
	test(ebp, ebp);
	if (jnz())
		goto loc_41B13C;
loc_41B10C:
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41B118:
	eax = ebp; //mov
	xor_(edx, edx);
	eax = fetchTrackRecords((int32_t)(intptr_t)this, eax, edx);
	goto loc_41B10C;
loc_41B123:
	eax = ecx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	eax = esp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = ebp; //mov
	eax = fetchTrackRecords((int32_t)(intptr_t)this, eax, edx);
	goto loc_41B10C;
loc_41B13C:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x108);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41B150()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)8);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp) = eax; //mov
	esi = edx; //mov
	to32i(esp+4) = eax; //mov
	fild(to32i(esp+4));
	fmul(to64f(dbl_4C8F70));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	eax = to32i(esp); //mov
	edx = eax; //mov
	ecx = 0x1770; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(eax, ecx);
	shl(eax, (int32_t)3);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = to32i(esp); //mov
	sub(edx, eax);
	ebx = 0x64; //mov
	to32i(esp) = edx; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = ax; //movsx
	edx = ebx; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	shl(eax, (int32_t)3);
	add(eax, ebx);
	edi = to32i(esp); //mov
	shl(eax, (int32_t)2);
	sub(edi, eax);
	to32i(esp) = edi; //mov
	eax = to32i(esp-2); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	xor_(eax, eax);
	al = to8i(byte_512DFB); //mov
	xor_(edx, ebx);
	dl = (int32_t)(intptr_t)byte_4D4A8E[eax]; //mov
	push32(edx);
	al = (int32_t)(intptr_t)byte_4D4A88[eax]; //mov
	push32(ebx);
	and_(eax, (int32_t)0xFF);
	push32(eax);
	push32(ecx);
	push32(a01dC02dC02d);
	push32(esi);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41B210()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	eax = ax; //cwde
	ecx = to32i(off_4D4A48+eax*4); //mov
	push32(ecx);
	push32(aSinfo);
	push32(edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41B230()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	eax = ax; //cwde
	ecx = to32i(off_4D4A68+eax*4); //mov
	push32(ecx);
	push32(aSrec);
	push32(edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41B250()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebx = eax; //mov
	ecx = 8; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_419F40; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ax, (int16_t)7);
	if (jle())
		goto loc_41B2A3;
	cmp(ax, (int16_t)0x14);
	if (jge())
		goto loc_41B2A3;
loc_41B274:
	xor_(ebx, ebx);
loc_41B276:
	eax = bx; //movsx
	push32(a_stf);
	edi = to32i(esp+eax*4+4); //mov
	push32(edi);
	ebp = to32i(dword_5134C4); //mov
	push32(ebp);
loc_41B28A:
	push32(aSSS);
	push32(edx);
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
loc_41B2A3:
	test(bx, bx);
	if (jl())
		goto loc_41B274;
	cmp(bx, (int16_t)0x1B);
	if (jg())
		goto loc_41B274;
	cmp(bx, (int16_t)0x14);
	if (jl())
		goto loc_41B276;
	eax = bx; //movsx
	push32(a_ssf);
	ecx = to32i(esp+eax*4-0x4C); //mov
	push32(ecx);
	esi = to32i(dword_5134C4); //mov
	push32(esi);
	goto loc_41B28A;
}
Fn(void) Game::_sub_41B2D0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	to32i(esp+0xC) = eax; //mov
	esi = edx; //mov
	to32i(esp+4) = ebx; //mov
	cmp(eax, (int32_t)0x32);
	if (jg())
		goto loc_41B40F;
	ecx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ebx = 0x8D; //mov
	eax = (int32_t)(intptr_t)aTempsort; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	add(edx, (int32_t)4);
	ebx = 0x20; //mov
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41B434;
	ebp = to32i(esp+0xC); //mov
	xor_(edi, edi);
	test(ebp, ebp);
	if (jle())
		goto loc_41B354;
	ecx = eax; //mov
	edx = esi; //mov
	eax = to32i(esp+4); //mov
	esi = to32i(esp+0xC); //mov
loc_41B33B:
	add(ecx, (int32_t)4);
	add(edx, (int32_t)4);
	to16i(eax) = di; //mov
	add(eax, (int32_t)2);
	ebx = to32i(edx-4); //mov
	inc(edi);
	to32i(ecx-4) = ebx; //mov
	cmp(edi, esi);
	if (jl())
		goto loc_41B33B;
loc_41B354:
	cmp(to32i(esp+0xC), (int32_t)1);
	if (jz())
		goto loc_41B454;
	ebp = to32i(esp+0xC); //mov
	edi = 1; //mov
	cmp(ebp, edi);
	if (jle())
		goto loc_41B3FF;
	eax = to32i(esp+8); //mov
	ebp = to32i(esp+4); //mov
	add(eax, (int32_t)4);
	add(ebp, (int32_t)2);
	to32i(esp+0x10) = eax; //mov
loc_41B382:
	esi = to32i(esp+0x10); //mov
	eax = to16i(ebp+0); //movsx
	ecx = (int32_t)(intptr_t)(edi-1); //lea
	to32i(esp) = eax; //mov
	esi = to32i(esi); //mov
	test(ecx, ecx);
	if (jl())
		goto loc_41B3C8;
	edx = to32i(esp+8); //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	ebx = to32i(esp+4); //mov
	add(eax, edx);
	edx = (int32_t)(intptr_t)(ecx+ecx); //lea
	add(edx, ebx);
loc_41B3AC:
	cmp(esi, to32i(eax));
	if (jge())
		goto loc_41B3C8;
	ebx = to32i(eax); //mov
	sub(edx, (int32_t)2);
	to32i(eax+4) = ebx; //mov
	sub(eax, (int32_t)4);
	bx = to16i(edx+2); //mov
	dec(ecx);
	to16i(edx+4) = bx; //mov
	test(ecx, ecx);
	if (jge())
		goto loc_41B3AC;
loc_41B3C8:
	edx = to32i(esp+8); //mov
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	ebx = to32i(esp+0x10); //mov
	add(eax, edx);
	add(ebp, (int32_t)2);
	inc(edi);
	to32i(eax+4) = esi; //mov
	eax = (int32_t)(intptr_t)(ecx+ecx); //lea
	add(ebx, (int32_t)4);
	ecx = to32i(esp+4); //mov
	edx = to32i(esp); //mov
	add(eax, ecx);
	to32i(esp+0x10) = ebx; //mov
	esi = to32i(esp+0xC); //mov
	to16i(eax+2) = dx; //mov
	cmp(edi, esi);
	if (jl())
		goto loc_41B382;
loc_41B3FF:
	edi = to32i(esp+8); //mov
	test(edi, edi);
	if (jnz())
		goto loc_41B45F;
loc_41B407:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41B40F:
	ecx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	ebx = 0x82; //mov
	push32(aStattool_ncrea);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_41B407;
loc_41B434:
	edx = 0x8F; //mov
	push32(aStattoolMemory);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = edx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_41B407;
loc_41B454:
	eax = to32i(esp+8); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_41B407;
loc_41B45F:
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41B470()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	to32i(esp) = eax; //mov
	ecx = edx; //mov
	ebp = ebx; //mov
	cmp(eax, (int32_t)0x32);
	if (jg())
		goto loc_41B5DD;
	ebx = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	esi = 0x46; //mov
	eax = (int32_t)(intptr_t)aTempsort; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	add(edx, (int32_t)2);
	ebx = 0x20; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_41B4DC;
	edi = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	eax = 0x48; //mov
	push32(aStattoolMemory);
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41B4DC:
	xor_(edx, edx);
	ebx = to32i(esp); //mov
	to32i(esp+0x10) = edx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_41B518;
	esi = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	eax = ecx; //mov
	ecx = ebp; //mov
loc_41B4F4:
	ebx = to32i(esp+0x10); //mov
	to16i(ecx) = bx; //mov
	add(edx, (int32_t)2);
	bx = to16i(eax); //mov
	to16i(edx-2) = bx; //mov
	ebx = to32i(esp+0x10); //mov
	add(eax, (int32_t)2);
	inc(ebx);
	add(ecx, (int32_t)2);
	to32i(esp+0x10) = ebx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_41B4F4;
loc_41B518:
	edi = to32i(esp); //mov
	cmp(edi, (int32_t)1);
	if (jz())
		goto loc_41B602;
	eax = 1; //mov
	to32i(esp+0x10) = eax; //mov
	cmp(edi, eax);
	if (jle())
		goto loc_41B5CD;
	eax = (int32_t)(intptr_t)(ebp+2); //lea
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+4); //mov
	add(eax, (int32_t)2);
	to32i(esp+0xC) = eax; //mov
loc_41B547:
	eax = to32i(esp+8); //mov
	edx = to32i(esp+0x10); //mov
	edi = to32i(esp+0xC); //mov
	dec(edx);
	ax = to16i(eax); //mov
	di = to16i(edi); //mov
	to32i(esp+0x14) = eax; //mov
	test(edx, edx);
	if (jl())
		goto loc_41B591;
	ecx = to32i(esp+4); //mov
	eax = (int32_t)(intptr_t)(edx+edx); //lea
	add(eax, ecx);
loc_41B56B:
	ecx = di; //movsx
	ebx = to16i(eax); //movsx
	esi = (int32_t)(intptr_t)(edx+edx); //lea
	cmp(ecx, ebx);
	if (jge())
		goto loc_41B591;
	bx = to16i(eax); //mov
	ecx = (int32_t)(intptr_t)(esi+ebp); //lea
	to16i(eax+2) = bx; //mov
	sub(eax, (int32_t)2);
	bx = to16i(ecx); //mov
	dec(edx);
	to16i(ecx+2) = bx; //mov
	test(edx, edx);
	if (jge())
		goto loc_41B56B;
loc_41B591:
	eax = to32i(esp+4); //mov
	ecx = to32i(esp+8); //mov
	ebx = to32i(esp+0xC); //mov
	esi = to32i(esp+0x10); //mov
	add(ecx, (int32_t)2);
	add(ebx, (int32_t)2);
	inc(esi);
	to16i(eax+edx*2+2) = di; //mov
	eax = to32i(esp+0x14); //mov
	edi = to32i(esp); //mov
	to32i(esp+8) = ecx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x10) = esi; //mov
	to16i(ebp+edx*2+2) = ax; //mov
	cmp(esi, edi);
	if (jl())
		goto loc_41B547;
loc_41B5CD:
	ebp = to32i(esp+4); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_41B60D;
loc_41B5D5:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41B5DD:
	esi = (int32_t)(intptr_t)aCNfs2seFront_5; //mov
	edi = 0x41; //mov
	push32(aStattool_creat);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_41B5D5;
loc_41B602:
	eax = to32i(esp+4); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_41B5D5;
loc_41B60D:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41B620()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D4AE0); //mov
	test(edx, edx);
	if (jnz())
		goto loc_41B637;
	xor_(ecx, ecx);
	to32i(dword_4D4AE0) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_41B637:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(ecx, ecx);
	to32i(dword_4D4AE0) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41B650()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	eax = to16i(edx+eax+6); //movsx
	pop32(edx);
}
Fn(void) Game::_sub_41B670()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	eax = to16i(edx+eax+4); //movsx
	pop32(edx);
}
Fn(void) Game::_sub_41B690()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	al = to8i(edx+eax+3); //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_41B6B0()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	al = to8i(edx+eax+2); //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_41B6D0()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	al = to8i(edx+eax+1); //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_41B6F0()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	al = to8i(edx+eax); //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_41B710()
{
	push32(edx);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D4AE0); //mov
	test(eax, eax);
	if (jz())
	{
		pop32(edx);
		xor_(eax, eax);
		return;
	}
	add(eax, to32i(edx+eax+8));
	pop32(edx);
}
Fn(void) Game::_sub_41B730()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0xFC);
	edx = eax; //mov
	cmp(eax, (int32_t)6);
	if (jg())
		goto loc_41B785;
	ecx = to32i(dword_4D4AE0); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41B750;
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_41B750:
	push32(esi);
	push32(ebx);
	ebx = to32i(off_4D4AC8+edx*4); //mov
	push32(ebx);
	esi = to32i(dword_5134BC); //mov
	push32(esi);
	push32(aSS_1);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4D4AE0) = eax; //mov
	pop32(ebx);
	pop32(esi);
loc_41B785:
	add(esp, (int32_t)0xFC);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41B8D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xF4);
	to32i(esp+0xC8) = eax; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	ax = to16i(dword_5121FC); //mov
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)off_41B8B8; //mov
	to32i(esp+0xCC) = edx; //mov
	to16i(esp+0xD4) = ax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = 1; //mov
	ah = to8i(byte_512DBC); //mov
	xor_(ecx, ecx);
	to32i(esp+0xD0) = edx; //mov
	to32i(esp+0xEC) = edx; //mov
	to32i(esp+0xE8) = ecx; //mov
	xor_(ecx, ecx);
	edx = 0x14; //mov
	to32i(esp+0xBC) = ecx; //mov
	to32i(esp+0xC4) = ecx; //mov
	test(ah, (int8_t)1);
	if (jnz())
		goto loc_41BF15;
	to16i(esp+0xE4) = 7; //mov
loc_41B957:
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 0xFF000000; //mov
	esi = (int32_t)(intptr_t)aCNfs2seFront_6; //mov
	edi = 0x31A; //mov
	ebx = 0x20; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = 0xFF000000; //mov
	shl(edx, (int32_t)5);
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = (int32_t)(intptr_t)aVtrkrcrd; //mov
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebp = eax; //mov
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	to16i(esp+0xF0) = ax; //mov
	cmp(to32i(dword_4D21AC), (int32_t)0);
	if (jz())
		goto loc_41BF24;
loc_41B9D2:
	eax = to32i(esp+0xE4); //mov
	dec(eax);
	to32i(esp+0xE0) = eax; //mov
loc_41B9E1:
	ecx = to32i(esp+0xCC); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_41C120;
	cmp(to16i(esp+0xD0), (int16_t)0);
	if (jz())
		goto loc_41BA4B;
	xor_(edx, edx);
	ebx = to32i(esp+0xEE); //mov
	to32i(esp+0xD0) = edx; //mov
	sar(ebx, (int32_t)0x10);
	edx = esp; //mov
	eax = ebx; //mov
	esp -= 4; _sub_41B230(); esp += 4; //call
	edx = to32i(esp+0xC8); //mov
	eax = esp; //mov
	to32i(edx) = eax; //mov
	eax = edx; //mov
	to32i(dword_4D2098) = ecx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	push32(ecx);
	eax = ebx; //mov
	edx = (int32_t)(intptr_t)aRec6_0; //mov
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ebx = 1; //mov
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
loc_41BA4B:
	cmp(to16i(esp+0xEC), (int16_t)0);
	if (jz())
		goto loc_41BA84;
	ebx = to32i(esp+0xEE); //mov
	sar(ebx, (int32_t)0x10);
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = ebx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41AEF0(); esp += 4; //call
	to32i(esp+0xE8) = eax; //mov
	edx = ebp; //mov
	eax = ebx; //mov
	to32i(esp+0xEC) = ecx; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
loc_41BA84:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edi = to32i(esp+0xC4); //mov
	edx = 0x400; //mov
	add(edi, eax);
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0xC8); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esp+eax*4+0xA0); //mov
	to32i(esp+0xC4) = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	dl = to8i(byte_512DFB); //mov
	to32i(esp+0xB8) = edi; //mov
	cmp(dl, (int8_t)5);
	if (jnz())
		goto loc_41BF43;
	eax = to32i(esp+0xD2); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = 0xAE; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSD_1);
loc_41BB03:
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	push32(2);
	push32(4);
	eax = 0xAE; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAE; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x14);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esi = to32i(esp+0xDC); //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(si, (int16_t)2);
	if (jnz())
		goto loc_41BF63;
	to32i(esp+0xC0) = 1; //mov
loc_41BB5B:
	eax = 0xA7; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0xB3; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	cmp(to16i(esp+0xE8), (int16_t)0);
	if (jnz())
		goto loc_41BF89;
loc_41BB88:
	esi = 0xB4; //mov
	xor_(ecx, ecx);
	to16i(esp+0xD8) = si; //mov
	to16i(esp+0xDC) = cx; //mov
loc_41BB9F:
	edi = to32i(esp+0xDA); //mov
	sar(edi, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(edi+0xB4); //lea
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA7; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = to32i(esp+0xD6); //mov
	xor_(ecx, ecx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_405580(); esp += 4; //call
	add(edi, to32i(esp+0xC0));
	imul32(edi, 0x14);
	add(edi, ebp);
	cmp(to32i(edi+0xC), (int32_t)0);
	if (jz())
		goto loc_41BCF2;
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = edi; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(edi+8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA9; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x19);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = esp; //mov
	eax = to32i(edi+0xC); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ax = to16i(edi+0x10); //mov
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_41C082;
	eax = 0x1F; //mov
loc_41BCA4:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+0xDA); //mov
	push32(4);
	sar(eax, (int32_t)0x10);
	push32(3);
	add(eax, (int32_t)0xB4);
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAB; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_41BCF2:
	ecx = to32i(esp+0xDC); //mov
	ebx = to32i(esp+0xD8); //mov
	inc(ecx);
	inc(ebx);
	to16i(esp+0xDC) = cx; //mov
	to16i(esp+0xD8) = bx; //mov
	cmp(cx, (int16_t)0xA);
	if (jl())
		goto loc_41BB9F;
	eax = to32i(esp+0xC8); //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = to32i(esp+0xB8); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_41BD66;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_41BD66:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	eax = to32i(esp+0xC8); //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	esi = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_41B9E1;
	edx = to32i(esp+0xC4); //mov
	cmp(edx, to32i(esp+0xBC));
	if (jle())
		goto loc_41B9E1;
	add(edx, (int32_t)0xF);
	to32i(esp+0xBC) = edx; //mov
	edx = to32i(esp+0xC8); //mov
	cmp(to16i(edx+0xA), (int16_t)0);
	if (jnz())
		goto loc_41BE15;
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_41BE15;
	edx = to32i(esp+0xF0); //mov
	eax = 1; //mov
	sub(edx, eax);
	to32i(esp+0xEC) = eax; //mov
	to16i(esp+0xF0) = dx; //mov
	test(dx, dx);
	if (jl())
		goto loc_41C09C;
loc_41BDE6:
	edx = 0x7F; //mov
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(eax, eax);
	to32i(esp+0xD0) = ecx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(edx, edx);
	eax = 0x12; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41BE15:
	eax = to32i(esp+0xC8); //mov
	cmp(to16i(eax+0xA), (int16_t)0);
	if (jnz())
		goto loc_41BE93;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41C0B0;
loc_41BE2E:
	edx = to32i(esp+0xEE); //mov
	eax = 1; //mov
	ecx = to32i(esp+0xE2); //mov
	sar(edx, (int32_t)0x10);
	to32i(esp+0xEC) = eax; //mov
	inc(edx);
	sar(ecx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to16i(esp+0xF0) = dx; //mov
	to32i(esp+0xD0) = 1; //mov
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41BE7C;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41BE7C:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41BE93:
	eax = to32i(esp+0xC8); //mov
	bx = to16i(eax+0xA); //mov
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_41C0BF;
	cmp(si, (int16_t)0x4B00);
	if (jnz())
		goto loc_41C0BF;
	to32i(esp+0xEC) = ebx; //mov
	ebx = to32i(esp+0xD2); //mov
	sar(ebx, (int32_t)0x10);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to16i(esp+0xD4) = ax; //mov
	cmp(ax, (int16_t)2);
	if (jge())
		goto loc_41BEE7;
	to16i(esp+0xD4) = 8; //mov
loc_41BEE7:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41BEF3:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_41BEFA:
	eax = to32i(esp+0xC8); //mov
	edx = si; //movsx
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0xCC) = eax; //mov
	goto loc_41B9E1;
loc_41BF15:
	to16i(esp+0xE4) = 8; //mov
	goto loc_41B957;
loc_41BF24:
	edx = to32i(dword_4D5A28); //mov
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	to32i(dword_4D21AC) = 1; //mov
	goto loc_41B9D2;
loc_41BF43:
	eax = 0xAE; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0xD6); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aDS_0);
	goto loc_41BB03;
loc_41BF63:
	cmp(si, (int16_t)4);
	if (jnz())
		goto loc_41BF79;
	to32i(esp+0xC0) = 0xB; //mov
	goto loc_41BB5B;
loc_41BF79:
	to32i(esp+0xC0) = 0x15; //mov
	goto loc_41BB5B;
loc_41BF89:
	push32(2);
	eax = 0xA8; //mov
	push32(3);
	ecx = 0x12; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(ebp+8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(3);
	eax = 0xA9; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x19);
	ebx = 0x1AC; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = esp; //mov
	eax = to32i(ebp+0xC); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(2);
	ecx = 0x12; //mov
	push32(3);
	eax = 0xAA; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	dx = to16i(ebp+0x10); //mov
	cmp(dx, (int16_t)2);
	if (jnz())
		goto loc_41C06E;
	eax = 0x1F; //mov
loc_41C02D:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	eax = 0xAB; //mov
	push32(3);
	ecx = 0x12; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_41BB88;
loc_41C06E:
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_41C07B;
	eax = 0x1B; //mov
	goto loc_41C02D;
loc_41C07B:
	eax = 0x1E; //mov
	goto loc_41C02D;
loc_41C082:
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_41C092;
	eax = 0x1B; //mov
	goto loc_41BCA4;
loc_41C092:
	eax = 0x1E; //mov
	goto loc_41BCA4;
loc_41C09C:
	eax = to32i(esp+0xE0); //mov
	to16i(esp+0xF0) = ax; //mov
	goto loc_41BDE6;
loc_41C0B0:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_41BE2E;
	goto loc_41BE93;
loc_41C0BF:
	eax = to32i(esp+0xC8); //mov
	cmp(to16i(eax+0xA), (int16_t)1);
	if (jnz())
		goto loc_41BEFA;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41C115;
loc_41C0D8:
	eax = to32i(esp+0xD4); //mov
	edi = 1; //mov
	add(eax, eax);
	to32i(esp+0xEC) = edi; //mov
	to16i(esp+0xD4) = ax; //mov
	cmp(ax, (int16_t)8);
	if (jle())
		goto loc_41C105;
	to16i(esp+0xD4) = 2; //mov
loc_41C105:
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41BEF3;
	goto loc_41BEE7;
loc_41C115:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_41C0D8;
	goto loc_41BEFA;
loc_41C120:
	test(ebp, ebp);
	if (jnz())
		goto loc_41C199;
loc_41C124:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	xor_(ebx, ebx);
	to32i(dword_4D2098) = ebx; //mov
	to32i(dword_4D21AC) = ebx; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_47D410(); esp += 4; //call
	eax = to32i(esp+0xCC); //mov
	add(esp, (int32_t)0xF4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41C199:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_41C124;
}
Fn(void) Game::_sub_41C1B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1D0);
	ebp = eax; //mov
	ecx = 0x30; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_41B7A8; //mov
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512DB0); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(esp+0x1B0) = edx; //mov
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)(esp+0x16C); //lea
	esi = (int32_t)(intptr_t)off_41B868; //mov
	edx = 1; //mov
	to16i(esp+0x1C8) = ax; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ah = to8i(byte_512DBC); //mov
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)(esp+0x14C); //lea
	esi = (int32_t)(intptr_t)off_41B888; //mov
	to32i(esp+0x1BC) = edx; //mov
	to32i(esp+0x1CC) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(esp+0x1B4) = edx; //mov
	edi = (int32_t)(intptr_t)(esp+0x18C); //lea
	xor_(ecx, ecx);
	esi = (int32_t)(intptr_t)dword_41B8A8; //mov
	to32i(esp+0x1C0) = ecx; //mov
	xor_(ecx, ecx);
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(esp+0x1A8) = ecx; //mov
	to32i(esp+0x1AC) = ecx; //mov
	to32i(dword_4D2310) = ecx; //mov
	test(ah, (int8_t)1);
	if (jnz())
		goto loc_41C795;
	to16i(esp+0x1C4) = 7; //mov
loc_41C26C:
	ecx = to32i(esp+0x1C6); //mov
	esp -= 4; _sub_40EB20(); esp += 4; //call
	sar(ecx, (int32_t)0x10);
	edx = (int32_t)(intptr_t)(esp+0xC0); //lea
	eax = ecx; //mov
	ebx = 1; //mov
	esp -= 4; _sub_41B210(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC0); //lea
	xor_(edi, edi);
	to32i(ebp+0) = eax; //mov
	eax = ebp; //mov
	to32i(dword_4D2098) = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	push32(edi);
	eax = ecx; //mov
	edx = (int32_t)(intptr_t)aRec6_0; //mov
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
	edx = to32i(esp+0x1B0); //mov
	to32i(dword_4D2420) = edi; //mov
	test(edx, edx);
	if (jnz())
		goto loc_41C740;
	eax = to32i(esp+0x1C4); //mov
	dec(eax);
	to32i(esp+0x1B8) = eax; //mov
loc_41C2E2:
	cmp(to16i(esp+0x1BC), (int16_t)0);
	if (jz())
		goto loc_41C3DF;
	ecx = to32i(esp+0x1C6); //mov
	edx = (int32_t)(intptr_t)(esp+0xC0); //lea
	sar(ecx, (int32_t)0x10);
	xor_(ebx, ebx);
	eax = ecx; //mov
	to32i(esp+0x1BC) = ebx; //mov
	esp -= 4; _sub_41B210(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC0); //lea
	xor_(ebx, ebx);
	to32i(ebp+0) = eax; //mov
	eax = ebp; //mov
	to32i(dword_4D2098) = ebx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	push32(ebx);
	eax = ecx; //mov
	edx = (int32_t)(intptr_t)aRec6_0; //mov
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ebx = 1; //mov
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
	edx = (int32_t)(intptr_t)aSldr; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = (int32_t)(intptr_t)aBack_2; //mov
	esi = eax; //mov
	eax = to32i(dword_4D40B8); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edi = eax; //mov
	eax = to32i(esp+0x1B4); //mov
	to32i(esp+0x1C0) = ecx; //mov
	test(ax, ax);
	if (jz())
		goto loc_41C7A4;
	ebx = 1; //mov
	eax = 0x8C; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_427280(); esp += 4; //call
	xor_(eax, eax);
	xor_(edx, edx);
	esp -= 4; _sub_4273B0(); esp += 4; //call
	to32i(esp+0x1B4) = edx; //mov
loc_41C3A5:
	eax = esi; //mov
	xor_(edx, edx);
	ebx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	edx = 1; //mov
	eax = edi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_428250(); esp += 4; //call
	xor_(eax, eax);
	edx = 0xE6; //mov
	esp -= 4; _sub_427450(); esp += 4; //call
	xor_(eax, eax);
	esi = 1; //mov
	esp -= 4; _sub_427320(); esp += 4; //call
	to32i(dword_4D2310) = esi; //mov
loc_41C3DF:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edi = to32i(esp+0x1AC); //mov
	edx = 1; //mov
	ebx = to32i(esp+0x1C0); //mov
	add(edi, eax);
	add(ebx, edx);
	to32i(esp+0x1AC) = edi; //mov
	to32i(esp+0x1C0) = ebx; //mov
	cmp(bx, (int16_t)0x23);
	if (jl())
		goto loc_41C459;
	cmp(dx, to16i(esp+0x1CC));
	if (jnz())
		goto loc_41C459;
	eax = to32i(esp+0x1C6); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_407160(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	push32(aTD0);
	eax = (int32_t)(intptr_t)(esp+0x1A4); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+0x19C); //lea
	xor_(edi, edi);
	esp -= 4; _sub_403480(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	to32i(esp+0x1CC) = edi; //mov
loc_41C459:
	test(dx, dx);
	if (jz())
		goto loc_41C7AE;
loc_41C462:
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)aBack_2; //mov
	esi = to32i(esp+0x1C6); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	sar(esi, (int32_t)0x10);
	esp -= 4; _sub_405B30(); esp += 4; //call
	imul32(edx, esi, 0x18);
	xor_(eax, eax);
	al = to8i(byte_512DFB); //mov
	shl(eax, (int32_t)2);
	xor_(ecx, ecx);
	add(eax, edx);
	xor_(ebx, ebx);
	edx = 0x400; //mov
	eax = to32i(esp+eax); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	edx = 0x1000; //mov
	eax = (int32_t)(intptr_t)aSldr; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	push32(2);
	ecx = 0x12; //mov
	ebx = 0x3F; //mov
	eax = to32i(esp+esi*2+0x18E); //mov
	push32(4);
	sar(eax, (int32_t)0x10);
	edx = 0x268; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	dl = to8i(byte_512DFA); //mov
	shl(esi, (int32_t)2);
	test(dl, dl);
	if (jz())
		goto loc_41C7C5;
	edi = (int32_t)(intptr_t)(esp+0x110); //lea
	esi = to32i(esp+esi+0x16C); //mov
	push32(edi);
loc_41C50C:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41C524;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41C50C;
loc_41C524:
	pop32(edi);
	esi = (int32_t)(intptr_t)asc_4C90D4; //mov
	edi = (int32_t)(intptr_t)(esp+0x110); //lea
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
loc_41C53A:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41C552;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41C53A;
loc_41C552:
	pop32(edi);
	eax = 0xA0; //mov
loc_41C558:
	edi = (int32_t)(intptr_t)(esp+0x110); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
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
loc_41C56F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41C587;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41C56F;
loc_41C587:
	pop32(edi);
	cmp(to8i(byte_512DFB), (int8_t)5);
	if (jnz())
		goto loc_41C599;
	to8i(esp+0x111) = 0x2C; //mov
loc_41C599:
	push32(2);
	ecx = 0x12; //mov
	ebx = 0x5A; //mov
	push32(4);
	edx = 0x268; //mov
	eax = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = to32i(esp+0x1AC); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_41C5FD;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_41C5FD:
	esp -= 4; _sub_4976B8(); esp += 4; //call
loc_41C609:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	esi = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_41C732;
	edx = to32i(dword_5637F4); //mov
	cmp(edx, to32i(esp+0x1A8));
	if (jle())
		goto loc_41C732;
	edx = to32i(dword_5637F4); //mov
	add(edx, (int32_t)0xF);
	to32i(esp+0x1A8) = edx; //mov
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_41C6A3;
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_41C6A3;
	edx = 0x7F; //mov
	ebx = to32i(esp+0x1C8); //mov
	xor_(eax, eax);
	dec(ebx);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to16i(esp+0x1C8) = bx; //mov
	test(bx, bx);
	if (jl())
		goto loc_41C825;
loc_41C675:
	edi = 1; //mov
	ebx = 1; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	to32i(esp+0x1BC) = edi; //mov
	to32i(dword_4D1FFC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(esp+0x1CC) = edi; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41C6A3:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_41C71A;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41C839;
loc_41C6B5:
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41C6C8;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41C6C8:
	edx = to32i(esp+0x1C6); //mov
	sar(edx, (int32_t)0x10);
	ecx = to32i(esp+0x1C2); //mov
	inc(edx);
	sar(ecx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = 1; //mov
	edi = 1; //mov
	to32i(esp+0x1BC) = ebx; //mov
	to32i(esp+0x1CC) = ebx; //mov
	xor_(ebx, ebx);
	eax = 0x12; //mov
	to16i(esp+0x1C8) = dx; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41C71A:
	edx = si; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x1B0) = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_41C732:
	cmp(to32i(esp+0x1B0), (int32_t)0);
	if (jz())
		goto loc_41C2E2;
loc_41C740:
	al = to8i(esp+0x1C8); //mov
	ebp = 1; //mov
	xor_(ecx, ecx);
	to8i(byte_512DB0) = al; //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = ebp; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(eax, eax);
	xor_(edx, edx);
	to32i(dword_4D2098) = eax; //mov
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	eax = to32i(esp+0x1B0); //mov
	add(esp, (int32_t)0x1D0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41C795:
	to16i(esp+0x1C4) = 8; //mov
	goto loc_41C26C;
loc_41C7A4:
	esp -= 4; _sub_427210(); esp += 4; //call
	goto loc_41C3A5;
loc_41C7AE:
	cmp(to32i(dword_4D2094), (int32_t)0);
	if (jnz())
		goto loc_41C462;
	esp -= 4; _sub_423B90(); esp += 4; //call
	goto loc_41C609;
loc_41C7C5:
	edi = (int32_t)(intptr_t)(esp+0x110); //lea
	esi = to32i(esp+esi+0x14C); //mov
	push32(edi);
loc_41C7D4:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41C7EC;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41C7D4;
loc_41C7EC:
	pop32(edi);
	esi = (int32_t)(intptr_t)asc_4C90D4; //mov
	edi = (int32_t)(intptr_t)(esp+0x110); //lea
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
loc_41C802:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41C81A;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41C802;
loc_41C81A:
	pop32(edi);
	eax = 0xA1; //mov
	goto loc_41C558;
loc_41C825:
	eax = to32i(esp+0x1B8); //mov
	to16i(esp+0x1C8) = ax; //mov
	goto loc_41C675;
loc_41C839:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_41C6B5;
	goto loc_41C71A;
}
Fn(void) Game::_sub_41C850()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xF4);
	to32i(esp+0xC4) = eax; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	esi = (int32_t)(intptr_t)off_41B790; //mov
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512DB8); //mov
	to32i(esp+0xBC) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = 1; //mov
	to16i(esp+0xE0) = ax; //mov
	xor_(ecx, ecx);
	to32i(esp+0xD8) = edx; //mov
	to32i(esp+0xDC) = edx; //mov
	to32i(esp+0xD4) = ecx; //mov
	xor_(eax, eax);
	edx = 0x14; //mov
	xor_(ecx, ecx);
	al = to8i(byte_512DB0); //mov
	to32i(esp+0xB8) = ecx; //mov
	to16i(esp+0xF0) = ax; //mov
	ah = to8i(byte_512DBC); //mov
	to32i(esp+0xC8) = ecx; //mov
	test(ah, (int8_t)1);
	if (jnz())
		goto loc_41CED7;
	to16i(esp+0xE4) = 7; //mov
loc_41C8E7:
	esi = (int32_t)(intptr_t)aCNfs2seFront_6; //mov
	edi = 0x64; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds_1; //mov
	shl(edx, (int32_t)5);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	dl = to8i(byte_512DAF); //mov
	ebp = eax; //mov
	test(dl, dl);
	if (jnz())
		goto loc_41CEE6;
	eax = to32i(esp+0xC4); //mov
	eax = to32i(eax+0x18); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_41C92D:
	eax = to32i(esp+0xE4); //mov
	dec(eax);
	to32i(esp+0xD0) = eax; //mov
loc_41C93C:
	cmp(to32i(esp+0xBC), (int32_t)0);
	if (jnz())
		goto loc_41D14E;
	cmp(to16i(esp+0xD8), (int16_t)0);
	if (jz())
		goto loc_41C9B0;
	xor_(edx, edx);
	ebx = to32i(esp+0xEE); //mov
	to32i(esp+0xD8) = edx; //mov
	sar(ebx, (int32_t)0x10);
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = ebx; //mov
	esp -= 4; _sub_41B230(); esp += 4; //call
	edx = to32i(esp+0xC4); //mov
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	to32i(edx) = eax; //mov
	xor_(edx, edx);
	eax = to32i(esp+0xC4); //mov
	to32i(dword_4D2098) = edx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	push32(edx);
	eax = ebx; //mov
	esp -= 4; _sub_419FD0(); esp += 4; //call
	ebx = 1; //mov
	edx = (int32_t)(intptr_t)aRec6_0; //mov
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
loc_41C9B0:
	cmp(to16i(esp+0xDC), (int16_t)0);
	if (jnz())
		goto loc_41CEF9;
loc_41C9BF:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ecx = to32i(esp+0xC8); //mov
	xor_(edx, edx);
	add(ecx, eax);
	xor_(esi, esi);
	to32i(esp+0xC8) = ecx; //mov
	to32i(esp+0xC0) = ecx; //mov
loc_41C9DF:
	eax = si; //movsx
	imul32(eax, 0x14);
	cmp(to32i(eax+ebp+0xC), (int32_t)0);
	if (jz())
		goto loc_41C9F1;
	edx = 1; //mov
loc_41C9F1:
	inc(esi);
	cmp(si, (int16_t)0x1F);
	if (jl())
		goto loc_41C9DF;
	test(dx, dx);
	if (jz())
		goto loc_41CF2A;
	eax = to32i(esp+0xC4); //mov
	eax = to32i(eax+0x14); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
loc_41CA0F:
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_40EB20(); esp += 4; //call
	eax = to32i(esp+0xC4); //mov
	edx = 0x400; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esp+eax*4+0xA0); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(to8i(byte_512DFB), (int8_t)5);
	if (jnz())
		goto loc_41CF4F;
	eax = to32i(esp+0xDE); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = 0xAE; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSD_1);
loc_41CA75:
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	push32(2);
	push32(4);
	eax = 0xAE; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAE; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x14);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	edi = to32i(esp+0xE8); //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(di, (int16_t)2);
	if (jnz())
		goto loc_41CF6F;
	to32i(esp+0xCC) = 1; //mov
loc_41CACD:
	eax = 0xA7; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	xor_(ecx, ecx);
	edx = ax; //movsx
	eax = 0xB3; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	cmp(to16i(esp+0xD4), (int16_t)0);
	if (jnz())
		goto loc_41CF95;
loc_41CAFA:
	edi = 0xB4; //mov
	xor_(esi, esi);
	to16i(esp+0xE8) = di; //mov
	to16i(esp+0xEC) = si; //mov
loc_41CB11:
	edi = to32i(esp+0xEA); //mov
	sar(edi, (int32_t)0x10);
	esi = (int32_t)(intptr_t)(edi+0xB4); //lea
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA7; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = to32i(esp+0xE6); //mov
	xor_(ecx, ecx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_405580(); esp += 4; //call
	add(edi, to32i(esp+0xCC));
	imul32(edi, 0x14);
	add(edi, ebp);
	cmp(to32i(edi+0xC), (int32_t)0);
	if (jz())
		goto loc_41CC66;
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA8; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = edi; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(edi+8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xA9; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x19);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = to32i(edi+0xC); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(4);
	push32(3);
	eax = esi; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAA; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ax = to16i(edi+0x10); //mov
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_41D090;
	eax = 0x1F; //mov
loc_41CC18:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+0xEA); //mov
	push32(4);
	sar(eax, (int32_t)0x10);
	push32(3);
	add(eax, (int32_t)0xB4);
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0xAB; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_41CC66:
	ecx = to32i(esp+0xEC); //mov
	ebx = to32i(esp+0xE8); //mov
	inc(ecx);
	inc(ebx);
	to16i(esp+0xEC) = cx; //mov
	to16i(esp+0xE8) = bx; //mov
	cmp(cx, (int16_t)0xA);
	if (jl())
		goto loc_41CB11;
	eax = to32i(esp+0xC4); //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = to32i(esp+0xC0); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_426B70(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_41CCDA;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_41CCDA:
	esp -= 4; _sub_4976B8(); esp += 4; //call
	eax = to32i(esp+0xC4); //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	esi = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_41C93C;
	edx = to32i(esp+0xC8); //mov
	cmp(edx, to32i(esp+0xB8));
	if (jle())
		goto loc_41C93C;
	add(edx, (int32_t)0xF);
	to32i(esp+0xB8) = edx; //mov
	edx = to32i(esp+0xC4); //mov
	cmp(to16i(edx+0xA), (int16_t)0);
	if (jnz())
		goto loc_41CD89;
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_41CD89;
	edx = to32i(esp+0xF0); //mov
	eax = 1; //mov
	sub(edx, eax);
	to32i(esp+0xDC) = eax; //mov
	to16i(esp+0xF0) = dx; //mov
	test(dx, dx);
	if (jl())
		goto loc_41D0AA;
loc_41CD5A:
	edx = 0x7F; //mov
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(eax, eax);
	to32i(esp+0xD8) = ecx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(edx, edx);
	eax = 0x12; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41CD89:
	eax = to32i(esp+0xC4); //mov
	cmp(to16i(eax+0xA), (int16_t)0);
	if (jnz())
		goto loc_41CE07;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41D0BE;
loc_41CDA2:
	edx = to32i(esp+0xEE); //mov
	eax = 1; //mov
	ecx = to32i(esp+0xE2); //mov
	sar(edx, (int32_t)0x10);
	to32i(esp+0xDC) = eax; //mov
	inc(edx);
	sar(ecx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to16i(esp+0xF0) = dx; //mov
	to32i(esp+0xD8) = 1; //mov
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41CDF0;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41CDF0:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x12; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_41CE07:
	eax = to32i(esp+0xC4); //mov
	bx = to16i(eax+0xA); //mov
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_41D0CD;
	cmp(si, (int16_t)0x4B00);
	if (jnz())
		goto loc_41D0CD;
	to32i(esp+0xDC) = ebx; //mov
	ebx = to32i(esp+0xDE); //mov
	sar(ebx, (int32_t)0x10);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to16i(esp+0xE0) = ax; //mov
	cmp(ax, (int16_t)2);
	if (jge())
		goto loc_41CE5B;
	to16i(esp+0xE0) = 8; //mov
loc_41CE5B:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41CE67:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
loc_41CE6E:
	eax = to32i(esp+0xC4); //mov
	edx = si; //movsx
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0xBC) = eax; //mov
	eax = to32i(esp+0xC4); //mov
	cmp(to16i(eax+0xA), (int16_t)2);
	if (jnz())
		goto loc_41C93C;
	cmp(si, (int16_t)0xD);
	if (jnz())
		goto loc_41C93C;
	push32(0x34D);
	ebx = 1; //mov
	push32(1);
	to32i(esp+0xE0) = ebx; //mov
	esp -= 4; _sub_401AE0(); esp += 4; //call
	to32i(esp+0xE4) = ebx; //mov
	add(esp, (int32_t)8);
	cmp(ax, bx);
	if (jz())
		goto loc_41D12E;
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_41C93C;
loc_41CED7:
	to16i(esp+0xE4) = 8; //mov
	goto loc_41C8E7;
loc_41CEE6:
	eax = to32i(esp+0xC4); //mov
	eax = to32i(eax+0x18); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_41C92D;
loc_41CEF9:
	ebx = to32i(esp+0xEE); //mov
	sar(ebx, (int32_t)0x10);
	edx = esp; //mov
	eax = ebx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_41AEF0(); esp += 4; //call
	to32i(esp+0xD4) = eax; //mov
	edx = ebp; //mov
	eax = ebx; //mov
	to32i(esp+0xDC) = ecx; //mov
	esp -= 4; _sub_41B040(); esp += 4; //call
	goto loc_41C9BF;
loc_41CF2A:
	eax = to32i(esp+0xC4); //mov
	cmp(to16i(eax+0xA), (int16_t)2);
	if (jnz())
		goto loc_41CF3C;
	to16i(eax+0xA) = dx; //mov
loc_41CF3C:
	eax = to32i(esp+0xC4); //mov
	eax = to32i(eax+0x14); //mov
	or_(to8i(eax+8), (int8_t)1);
	goto loc_41CA0F;
loc_41CF4F:
	eax = 0xAE; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0xE2); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aDS_0);
	goto loc_41CA75;
loc_41CF6F:
	cmp(di, (int16_t)4);
	if (jnz())
		goto loc_41CF85;
	to32i(esp+0xCC) = 0xB; //mov
	goto loc_41CACD;
loc_41CF85:
	to32i(esp+0xCC) = 0x15; //mov
	goto loc_41CACD;
loc_41CF95:
	push32(2);
	eax = 0xA8; //mov
	push32(3);
	ecx = 0x12; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(ebp+8); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41A420(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	push32(3);
	eax = 0xA9; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	sub(eax, (int32_t)0x19);
	ebx = 0x1AC; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = to32i(ebp+0xC); //mov
	esp -= 4; _sub_41B150(); esp += 4; //call
	push32(2);
	ecx = 0x12; //mov
	push32(3);
	eax = 0xAA; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	bx = to16i(ebp+0x10); //mov
	cmp(bx, (int16_t)2);
	if (jnz())
		goto loc_41D07C;
	eax = 0x1F; //mov
loc_41D03B:
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aS_0);
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	push32(2);
	eax = 0xAB; //mov
	push32(3);
	ecx = 0x12; //mov
	ebx = 0x1AC; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_41CAFA;
loc_41D07C:
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_41D089;
	eax = 0x1B; //mov
	goto loc_41D03B;
loc_41D089:
	eax = 0x1E; //mov
	goto loc_41D03B;
loc_41D090:
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_41D0A0;
	eax = 0x1B; //mov
	goto loc_41CC18;
loc_41D0A0:
	eax = 0x1E; //mov
	goto loc_41CC18;
loc_41D0AA:
	eax = to32i(esp+0xD0); //mov
	to16i(esp+0xF0) = ax; //mov
	goto loc_41CD5A;
loc_41D0BE:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_41CDA2;
	goto loc_41CE07;
loc_41D0CD:
	eax = to32i(esp+0xC4); //mov
	cmp(to16i(eax+0xA), (int16_t)1);
	if (jnz())
		goto loc_41CE6E;
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41D123;
loc_41D0E6:
	eax = to32i(esp+0xE0); //mov
	edi = 1; //mov
	add(eax, eax);
	to32i(esp+0xDC) = edi; //mov
	to16i(esp+0xE0) = ax; //mov
	cmp(ax, (int16_t)8);
	if (jle())
		goto loc_41D113;
	to16i(esp+0xE0) = 2; //mov
loc_41D113:
	cmp(si, (int16_t)0x4D00);
	if (jnz())
		goto loc_41CE67;
	goto loc_41CE5B;
loc_41D123:
	cmp(si, (int16_t)0xD);
	if (jz())
		goto loc_41D0E6;
	goto loc_41CE6E;
loc_41D12E:
	eax = to32i(esp+0xEE); //mov
	edx = 1; //mov
	sar(eax, (int32_t)0x10);
	eax = fetchTrackRecords((int32_t)(intptr_t)this, eax, edx);
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_41C93C;
loc_41D14E:
	al = to8i(esp+0xF0); //mov
	xor_(bh, bh);
	to8i(byte_512DB0) = al; //mov
	al = to8i(esp+0xE0); //mov
	to8i(byte_512DB9) = bh; //mov
	to8i(byte_512DB8) = al; //mov
	cmp(al, (int8_t)8);
	if (jnz())
		goto loc_41D179;
	to8i(byte_512DB9) = 1; //mov
loc_41D179:
	al = to8i(byte_512DB8); //mov
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_41D187;
	to8i(byte_512DB9) = al; //mov
loc_41D187:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	test(ebp, ebp);
	if (jnz())
		goto loc_41D1CA;
loc_41D197:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ebp, ebp);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = 0x12; //mov
	to32i(dword_4D2098) = ebp; //mov
	esp -= 4; _sub_4274F0(); esp += 4; //call
	eax = to32i(esp+0xBC); //mov
	add(esp, (int32_t)0xF4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D1CA:
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_41D197;
}
Fn(void) Game::_sub_41D1E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x190);
	ebx = eax; //mov
	cmp(to32i(dword_4D4B48), (int32_t)0);
	if (jz())
		goto loc_41D205;
loc_41D1F5:
	eax = to32i(dword_4D4B48); //mov
	add(esp, (int32_t)0x190);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D205:
	eax = esp; //mov
	push32(eax);
	push32(0x101);
	eax = WSAStartup_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_41D1F5;
	push32(edi);
	push32(esi);
	xor_(edx, edx);
	esp -= 4; _sub_41D7B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41D263;
	ecx = 1; //mov
	esi = (int32_t)(intptr_t)off_4D4AEC; //mov
	to32i(dword_4D4B48) = ecx; //mov
	esp -= 4; _sub_41D720(); esp += 4; //call
	eax = to32i(dword_4DBADC); //mov
	edi = (int32_t)(intptr_t)dword_4DBB00; //mov
	ebp = (int32_t)(intptr_t)(eax+ecx); //lea
	to32i(dword_564344+eax*4) = esi; //mov
	to32i(dword_564324+eax*4) = edi; //mov
	to32i(dword_4DBADC) = ebp; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_41D263;
	to32i(off_4D4AEC) = ebx; //mov
loc_41D263:
	eax = WSACleanup_wrap();
	pop32(esi);
	pop32(edi);
	eax = to32i(dword_4D4B48); //mov
	add(esp, (int32_t)0x190);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41D280()
{
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebp = eax; //mov
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp) = ebx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_41D2B7;
	to32i(esp+0x18) = edx; //mov
loc_41D295:
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jge())
		goto loc_41D2CC;
loc_41D29E:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)sub_41DA70; //mov
	eax = (int32_t)(intptr_t)(ebp+0x68); //lea
	esp -= 4; _sub_48BFFC(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	return;
loc_41D2B7:
	push32(edi);
	push32(esi);
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = edx; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(esp+0x20) = eax; //mov
	pop32(esi);
	pop32(edi);
	goto loc_41D295;
loc_41D2CC:
	push32(0);
	ecx = 0x14; //mov
	eax = (int32_t)(intptr_t)aWinipxflush; //mov
	push32(0);
	ebx = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41D29E;
}
Fn(void) Game::_sub_41D2F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x20) = edx; //mov
	to32i(esp+0x24) = ebx; //mov
	to32i(esp+0x1C) = ecx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x4C); //lea
	eax = ebx; //mov
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41D346;
	esi = to32i(esp+0x2C); //mov
	add(esi, (int32_t)0x68);
loc_41D31D:
	eax = to32i(esp+0x2C); //mov
	edx = ebp; //mov
	esp -= 4; _sub_41DB50(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41D3E3;
	edx = ebp; //mov
	eax = esi; //mov
	esp -= 4; _sub_48BAB4(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_41D31D;
loc_41D346:
	eax = to32i(esp+0x24); //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(eax); //mov
	esi = to32i(esp+0x20); //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	ebx = esp; //mov
	to32i(esp+0x18) = eax; //mov
	esi = (int32_t)(intptr_t)(eax+0x68); //lea
	edx = (int32_t)(intptr_t)sub_41DAC0; //mov
	eax = esi; //mov
	esp -= 4; _sub_48BE10(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41D3CE;
	edi = to32i(esp+0x2C); //mov
	add(edi, (int32_t)0x4C);
loc_41D382:
	eax = to32i(dword_5637F0); //mov
	add(eax, (int32_t)0x10);
	cmp(eax, to32i(ebp+4));
	if (jge())
		goto loc_41D3F1;
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41D3B1;
	push32(0);
	ecx = 0x14; //mov
	ebx = (int32_t)(intptr_t)(ebp+0xC); //lea
	push32(0);
	eax = (int32_t)(intptr_t)aTurfBuffer; //mov
	edx = (int32_t)(intptr_t)(ebp+0x20); //lea
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D3B1:
	edx = ebp; //mov
	eax = edi; //mov
	ebx = esp; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_41DAC0; //mov
	eax = esi; //mov
	esp -= 4; _sub_48BE10(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_41D382;
loc_41D3CE:
	eax = to32i(esp+0x24); //mov
	to32i(eax) = 0; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_41D3E3:
	edx = ebp; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	goto loc_41D346;
loc_41D3F1:
	eax = to32i(ebp+8); //mov
	sub(eax, (int32_t)4);
	ecx = to32i(esp+0x40); //mov
	to32i(esp+0x28) = eax; //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_41D46F;
	to32i(esp+0x28) = ecx; //mov
loc_41D407:
	edi = to32i(esp+0x20); //mov
	esi = (int32_t)(intptr_t)(ebp+0xC); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	edx = to32i(esp+0x24); //mov
	eax = to32i(ebp+0x20); //mov
	edi = to32i(esp+0x28); //mov
	to32i(edx) = eax; //mov
	test(edi, edi);
	if (jz())
		goto loc_41D432;
	edx = to32i(esp+0x1C); //mov
	eax = (int32_t)(intptr_t)(ebp+0x28); //lea
	ebx = edi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_41D432:
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41D454;
	push32(0);
	ecx = 0x14; //mov
	ebx = (int32_t)(intptr_t)(ebp+0xC); //lea
	push32(0);
	eax = (int32_t)(intptr_t)aWinipxrecv; //mov
	edx = (int32_t)(intptr_t)(ebp+0x20); //lea
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D454:
	eax = to32i(esp+0x2C); //mov
	edx = ebp; //mov
	add(eax, (int32_t)0x4C);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(esp+0x28); //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_41D46F:
	test(eax, eax);
	if (jge())
		goto loc_41D407;
	xor_(esi, esi);
	to32i(esp+0x28) = esi; //mov
	goto loc_41D407;
}
Fn(void) Game::_sub_41D480()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x138);
	edi = to32i(esp+0x148); //mov
	ebp = eax; //mov
	esi = edx; //mov
	to32i(esp+0x12C) = ebx; //mov
	cmp(edi, (int32_t)0x118);
	if (jle())
		goto loc_41D4A8;
	edi = 0x118; //mov
loc_41D4A8:
	ebx = 4; //mov
	edx = to32i(esp+0x12C); //mov
	eax = esp; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+4); //lea
	ebx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	test(esi, esi);
	if (jz())
		goto loc_41D571;
	edx = (int32_t)(intptr_t)(esp+0x11C); //lea
	eax = esi; //mov
	esp -= 4; _sub_41DC90(); esp += 4; //call
loc_41D4DE:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(0xE);
	eax = (int32_t)(intptr_t)(esp+0x120); //lea
	push32(eax);
	push32(0);
	eax = (int32_t)(intptr_t)(edi+4); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	edx = to32i(ebp+0x34); //mov
	push32(edx);
	eax = sendto_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	ecx = eax; //mov
	to32i(esp+0x134) = eax; //mov
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41D586;
	eax = WSAGetLastError_wrap();
	ebx = to32i(dword_4DBAD8); //mov
	to32i(esp+0x130) = eax; //mov
	cmp(ebx, (int32_t)4);
	if (jl())
		goto loc_41D552;
	push32(0);
	ecx = 4; //mov
	edx = (int32_t)(intptr_t)(esp+0x134); //lea
	push32(1);
	eax = (int32_t)(intptr_t)aIpxfailsend; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x34); //lea
loc_41D54D:
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D552:
	esi = to32i(esp+0x134); //mov
	add(edi, (int32_t)4);
	cmp(edi, esi);
	if (jnz())
		goto loc_41D5A8;
	eax = 1; //mov
	add(esp, (int32_t)0x138);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_41D571:
	edx = (int32_t)(intptr_t)(esp+0x11C); //lea
	eax = to16i(ebp+0); //movsx
	esp -= 4; _sub_41DC40(); esp += 4; //call
	goto loc_41D4DE;
loc_41D586:
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41D552;
	push32(0);
	ecx = 0x14; //mov
	edx = (int32_t)(intptr_t)(esp+0x130); //lea
	push32(0);
	eax = (int32_t)(intptr_t)aWinipxsend; //mov
	ebx = esi; //mov
	goto loc_41D54D;
loc_41D5A8:
	xor_(eax, eax);
	add(esp, (int32_t)0x138);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_41D5C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)8);
	ebx = eax; //mov
	add(eax, (int32_t)0x68);
	esp -= 4; _sub_48BC4C(); esp += 4; //call
	test(eax, eax);
	if (jbe())
		goto loc_41D5E0;
loc_41D5D4:
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D5E0:
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(0x4004667F);
	edx = to32i(ebx+0x34); //mov
	push32(edx);
	eax = ioctlsocket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	to32i(esp) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41D60B;
	cmp(to32i(esp+4), (int32_t)0);
	if (ja())
		goto loc_41D5D4;
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D60B:
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41D62E;
	push32(0);
	ecx = 4; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	push32(1);
	eax = (int32_t)(intptr_t)aIpxfailready; //mov
	add(ebx, (int32_t)0x34);
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D62E:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41D640()
{
	eax = 1; //mov
}
Fn(void) Game::_sub_41D650()
{
	push32(esi);
	push32(edi);
	edi = edx; //mov
	esi = (int32_t)(intptr_t)(eax+0x38); //lea
	eax = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41D670()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)(ebx+4); //lea
	esi = (int32_t)(intptr_t)(edx+4); //lea
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_41D689;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_41D689:
	test(eax, eax);
	if (jnz())
		goto loc_41D696;
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41D696:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41D6A0()
{
	to8i(eax+2) = 0; //mov
	eax = 1; //mov
}
Fn(void) Game::_sub_41D6B0()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = 0x30; //mov
	add(eax, (int32_t)2);
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = to32i(ecx+0x34); //mov
	esp -= 4; _sub_48A9E0(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41D6D0()
{
	_sub_48AF34(); return; //jmp
}
Fn(void) Game::_sub_41D6E0()
{
	push32(ebx);
	push32(ecx);
	ecx = (int32_t)(intptr_t)(eax+0x38); //lea
	ebx = edx; //mov
	edx = ecx; //mov
	esp -= 4; _sub_48AE40(); esp += 4; //call
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41D700()
{
	push32(ecx);
	ecx = 2; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	pop32(ecx);
}
Fn(void) Game::_sub_41D720()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41D746;
	push32(0);
	eax = (int32_t)(intptr_t)aIpxclosesocket; //mov
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D746:
	ecx = to32i(esi+0x34); //mov
	push32(ecx);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41D778;
loc_41D754:
	eax = (int32_t)(intptr_t)(esi+0x4C); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x68); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D778:
	eax = WSAGetLastError_wrap();
	ebx = to32i(dword_4DBAD8); //mov
	to32i(esp) = eax; //mov
	cmp(ebx, (int32_t)4);
	if (jl())
		goto loc_41D754;
	push32(0);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = (int32_t)(intptr_t)aCloseerr; //mov
	push32(1);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41D754;
}
Fn(void) Game::_sub_41D7B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	to32i(esp+0x10) = eax; //mov
	edx = (int32_t)(intptr_t)aCNfs2seFron_13; //mov
	ecx = 0xE6; //mov
	ebx = 0x300; //mov
	eax = (int32_t)(intptr_t)aSocket; //mov
	to32i(dword_4DB1D8) = edx; //mov
	edx = 0x14084; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0x14084; //mov
	ecx = eax; //mov
	edi = eax; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(ebx, ebx);
	esi = (int32_t)(intptr_t)(ecx+0x4C); //lea
	xor_(edx, edx);
	eax = esi; //mov
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ecx+0x68); //lea
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(ebp, ebp);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(ecx+0x84); //lea
	ebx = esi; //mov
	ecx = eax; //mov
	esi = (int32_t)(intptr_t)(eax+0x14000); //lea
loc_41D820:
	edx = ecx; //mov
	eax = ebx; //mov
	add(ecx, (int32_t)0x140);
	esp -= 4; _sub_48BA80(); esp += 4; //call
	cmp(ecx, esi);
	if (jnz())
		goto loc_41D820;
	push32(0x3E8);
	push32(2);
	push32(6);
	eax = socket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	ebx = to32i(dword_4DBAD8); //mov
	to32i(edi+0x34) = eax; //mov
	cmp(ebx, (int32_t)4);
	if (jge())
		goto loc_41D8BB;
loc_41D84F:
	cmp(to32i(edi+0x34), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41D8DA;
loc_41D859:
	test(ebp, ebp);
	if (jnz())
		goto loc_41D8B0;
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jge())
		goto loc_41D9D9;
loc_41D86A:
	ecx = to32i(edi+0x34); //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41D8A7;
	push32(ecx);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41D8A7;
	eax = WSAGetLastError_wrap();
	esi = to32i(dword_4DBAD8); //mov
	to32i(esp+0x1C) = eax; //mov
	cmp(esi, (int32_t)4);
	if (jl())
		goto loc_41D8A7;
	push32(0);
	edx = (int32_t)(intptr_t)(esp+0x20); //lea
	eax = (int32_t)(intptr_t)aAborterr; //mov
	push32(1);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41D8A7:
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(edi, edi);
loc_41D8B0:
	eax = edi; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D8BB:
	push32(0);
	ecx = 4; //mov
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(1);
	eax = (int32_t)(intptr_t)aIpxopensocket; //mov
	ebx = (int32_t)(intptr_t)(edi+0x34); //lea
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41D84F;
loc_41D8DA:
	eax = 1; //mov
	push32(4);
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(0x20);
	push32(0xFFFF);
	edx = to32i(edi+0x34); //mov
	push32(edx);
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(4);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	xor_(ecx, ecx);
	push32(0x400F);
	to32i(esp+0x20) = ecx; //mov
	push32(0xFFFF);
	ebx = to32i(edi+0x34); //mov
	push32(ebx);
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(4);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	push32(0x400F);
	push32(0x3E8);
	esi = to32i(edi+0x34); //mov
	push32(esi);
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	to32i(esp+0x14) = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	push32(0x8004667E);
	edx = to32i(edi+0x34); //mov
	push32(edx);
	eax = ioctlsocket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	edx = 0xE; //mov
	eax = esp; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(eax, eax);
	ax = to16i(esp+0x10); //mov
	edx = 6; //mov
	push32(eax);
	to16i(esp+4) = dx; //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	push32(0xE);
	to16i(esp+0x10) = ax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	ecx = to32i(edi+0x34); //mov
	push32(ecx);
	eax = bind_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	test(eax, eax);
	if (jnz())
		goto loc_41D859;
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = 0xE; //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	to32i(esp+0x1C) = ebx; //mov
	push32(eax);
	esi = to32i(edi+0x34); //mov
	push32(esi);
	eax = getsockname_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	test(eax, eax);
	if (jnz())
		goto loc_41D859;
	cmp(ebx, to32i(esp+0x18));
	if (jnz())
		goto loc_41D859;
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(edi+0x38); //lea
	esp -= 4; _sub_41DCD0(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	to16i(edi) = ax; //mov
	eax = edi; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41D9D9:
	push32(ebp);
	eax = (int32_t)(intptr_t)aOpenfailed; //mov
	xor_(ecx, ecx);
	push32(1);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41D86A;
}
Fn(void) Game::_sub_41DA00()
{
	push32(ecx);
	push32(edx);
	eax = WSACleanup_wrap();
	test(eax, eax);
	if (jnz())
		goto loc_41DA13;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_41DA13:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41DA20()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x190);
	eax = esp; //mov
	push32(eax);
	push32(0x101);
	eax = WSAStartup_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_41DA58;
	edx = to32i(esp+0x188); //mov
	test(dx, dx);
	if (jz())
		goto loc_41DA51;
	ax = dx; //mov
loc_41DA48:
	add(esp, (int32_t)0x190);
	pop32(edx);
	pop32(ecx);
	return;
loc_41DA51:
	eax = 0x2000; //mov
	goto loc_41DA48;
loc_41DA58:
	xor_(eax, eax);
	add(esp, (int32_t)0x190);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41DA70()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = to32i(eax+0x20); //mov
	ebx = to32i(edx); //mov
	esi = eax; //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_41DA8D;
	edi = to32i(edx+0x18); //mov
	test(edi, edi);
	if (jnz())
		goto loc_41DA97;
loc_41DA86:
	to32i(esi+4) = 0; //mov
loc_41DA8D:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41DA97:
	ebx = (int32_t)(intptr_t)(edx+4); //lea
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	eax = edi; //mov
	esp -= 4; _sub_41D670(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41DA86;
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DAC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = to32i(dword_5637F0); //mov
	add(ecx, (int32_t)0x10);
	cmp(ecx, to32i(eax+4));
	if (jl())
		goto loc_41DAD8;
	esi = to32i(eax+0x20); //mov
	cmp(esi, to32i(edx));
	if (jz())
		goto loc_41DAE1;
loc_41DAD8:
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41DAE1:
	ebx = (int32_t)(intptr_t)(eax+0xC); //lea
	eax = (int32_t)(intptr_t)(edx+4); //lea
	ecx = to32i(edx+0x18); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_41D670(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41DAD8;
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DB00()
{
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	to32i(esp) = edx; //mov
	esi = ebx; //mov
	edx = (int32_t)(intptr_t)(eax+2); //lea
	ebx = 0x30; //mov
	eax = esi; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41DB25;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	return;
loc_41DB25:
	push32(edi);
	push32(ecx);
	edi = esi; //mov
	ebx = 0xEA737276; //mov
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
	inc(ecx);
	edx = to32i(esp+8); //mov
	push32(ecx);
	eax = ebp; //mov
	ecx = esi; //mov
	esp -= 4; _sub_41D480(); esp += 4; //call
	pop32(ecx);
	pop32(edi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_41DB50()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	edi = eax; //mov
	esi = edx; //mov
	edx = 0xE; //mov
	eax = to32i(dword_4DB6A0); //mov
	to32i(esp+0x10) = edx; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(0);
	push32(0x11C);
	ebx = (int32_t)(intptr_t)(esi+0x24); //lea
	push32(ebx);
	ecx = to32i(edi+0x34); //mov
	push32(ecx);
	eax = recvfrom_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	to32i(esi+8) = eax; //mov
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	ebp = to32i(esi+8); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_41DBE8;
	cmp(to8i(edi+2), (int8_t)0);
	if (jnz())
		goto loc_41DBF3;
loc_41DBA7:
	eax = to32i(dword_5637F0); //mov
	ecx = 4; //mov
	to32i(esi+4) = eax; //mov
	eax = (int32_t)(intptr_t)(esi+0x24); //lea
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x20) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41DBDA;
	cmp(to32i(esi+8), (int32_t)4);
	if (jl())
		goto loc_41DBDA;
	cmp(to32i(esp+0x10), (int32_t)0xE);
	if (jz())
		goto loc_41DC04;
loc_41DBDA:
	to32i(esi+8) = 0; //mov
	to32i(esi+0x20) = 0; //mov
loc_41DBE8:
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41DBF3:
	edx = esp; //mov
	ecx = ebp; //mov
	eax = edi; //mov
	esp -= 4; _sub_48AA98(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41DBA7;
	goto loc_41DBE8;
loc_41DC04:
	ebx = (int32_t)(intptr_t)(esi+0xC); //lea
	eax = esp; //mov
	edx = ebx; //mov
	esp -= 4; _sub_41DCD0(); esp += 4; //call
	cmp(to32i(dword_4DBAD8), (int32_t)4);
	if (jl())
		goto loc_41DC2F;
	push32(0);
	ecx = 0x14; //mov
	push32(0);
	eax = (int32_t)(intptr_t)aRecvfrom; //mov
	edx = (int32_t)(intptr_t)(esi+0x20); //lea
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41DC2F:
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DC40()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ecx = edx; //mov
	eax = (int32_t)(intptr_t)(edx+2); //lea
	to16i(edx) = 6; //mov
	xor_(ebx, ebx);
	edx = 4; //mov
	esp -= 4; _sub_48A026(); esp += 4; //call
	ebx = 0xFF; //mov
	edx = 6; //mov
	eax = (int32_t)(intptr_t)(ecx+6); //lea
	esp -= 4; _sub_48A026(); esp += 4; //call
	ebx = 2; //mov
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(ecx+0xC); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DC90()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	ebx = 4; //mov
	add(edx, (int32_t)2);
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 6; //mov
	edx = (int32_t)(intptr_t)(ecx+6); //lea
	eax = (int32_t)(intptr_t)(esi+4); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 2; //mov
	edx = (int32_t)(intptr_t)(ecx+0xC); //lea
	eax = (int32_t)(intptr_t)(esi+0xA); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	to16i(ecx) = 6; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DCD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = eax; //mov
	ecx = edx; //mov
	ebx = 4; //mov
	add(eax, (int32_t)2);
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 6; //mov
	edx = (int32_t)(intptr_t)(ecx+4); //lea
	eax = (int32_t)(intptr_t)(esi+6); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 2; //mov
	edx = (int32_t)(intptr_t)(ecx+0xA); //lea
	eax = (int32_t)(intptr_t)(esi+0xC); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DD10()
{
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_4D4BC0), (int32_t)0);
	if (jz())
		goto loc_41DD23;
loc_41DD1B:
	eax = to32i(dword_4D4BC0); //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_41DD23:
	push32(dword_4E6030);
	push32(0x101);
	eax = WSAStartup_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_41DD1B;
	push32(eax);
	push32(1);
	push32(2);
	eax = socket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41DD90;
	push32(edi);
	push32(esi);
	push32(ebx);
	ecx = (int32_t)(intptr_t)off_4D4B64; //mov
	ebx = (int32_t)(intptr_t)dword_4DBB6C; //mov
	edi = 1; //mov
	edx = to32i(dword_4DBADC); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(edx+1); //lea
	to32i(dword_564344+edx*4) = ecx; //mov
	to32i(dword_564324+edx*4) = ebx; //mov
	to32i(dword_4DBADC) = esi; //mov
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	to32i(dword_4D4BC0) = edi; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edi);
loc_41DD90:
	eax = WSACleanup_wrap();
	eax = to32i(dword_4D4BC0); //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41DDA0()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)4);
	to32i(esp) = 0x14; //mov
	ecx = esp; //mov
	push32(ecx);
	push32(edx);
	ebx = to32i(eax+0x18); //mov
	push32(ebx);
	eax = getsockname_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41DDC9;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41DDC9:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DDE0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = 0x10; //mov
	edi = ebx; //mov
	esi = edx; //mov
	xor_(eax, eax);
	while (ecx) //repe
	{
		cmpsb();
		--ecx;
		if (!flags.zf)
			break;
	};
	if (jz())
		goto loc_41DDF7;
	sbb(eax, eax);
	sbb(eax, (int32_t)0xFFFFFFFF);
loc_41DDF7:
	test(eax, eax);
	if (jnz())
		goto loc_41DE04;
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41DE04:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41DE10()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	to32i(esp) = eax; //mov
	esi = edx; //mov
	to32i(esp+8) = ebx; //mov
	ebx = ecx; //mov
	ebp = 1; //mov
	to32i(esp+4) = ecx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_41DE37;
loc_41DE2E:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41DE37:
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
	test(ecx, ecx);
	if (jz())
		goto loc_41DE2E;
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
	cmp(to8i(ecx+esi-1), (int8_t)0x2E);
	if (jz())
		goto loc_41DE2E;
	push32(edx);
	eax = inet_addr_wrap(to32i(esp + 0)); esp += 4;
	edx = 0x14; //mov
	ecx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to16i(ebx) = 2; //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41DED4;
	push32(esi);
	eax = gethostbyname_wrap(to32i(esp + 0)); esp += 4;
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41DED0;
	ebx = to32i(eax+8); //mov
	sar(ebx, (int32_t)0x10);
	cmp(ebx, (int32_t)4);
	if (jnb())
		goto loc_41DEC9;
loc_41DE8F:
	edx = to32i(esp+4); //mov
	eax = to32i(ecx+0xC); //mov
	add(edx, (int32_t)4);
	eax = to32i(eax); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_41DEA0:
	test(ebp, ebp);
	if (jz())
		goto loc_41DEC0;
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_41DED9;
	xor_(eax, eax);
	ax = to16i(esp+8); //mov
loc_41DEB2:
	push32(eax);
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	edx = to32i(esp+4); //mov
	to16i(edx+2) = ax; //mov
loc_41DEC0:
	eax = ebp; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41DEC9:
	ebx = 4; //mov
	goto loc_41DE8F;
loc_41DED0:
	xor_(ebp, ebp);
	goto loc_41DEC0;
loc_41DED4:
	to32i(ebx+4) = ecx; //mov
	goto loc_41DEA0;
loc_41DED9:
	edx = to32i(esp); //mov
	xor_(eax, eax);
	ax = to16i(edx); //mov
	goto loc_41DEB2;
}
Fn(void) Game::_sub_41DEF0()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_41DF00()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_41DF10()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_41DF20()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_41DF30()
{
	eax = to32i(eax); //mov
}
Fn(void) Game::_sub_41DF40()
{
	push32(ebx);
	push32(edx);
	ebx = eax; //mov
	cmp(to8i(eax+0x43), (int8_t)0);
	if (jnz())
		goto loc_41DF63;
loc_41DF4C:
	edx = to32i(ebx+0x18); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41DF87;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = 1; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_41DF63:
	dl = to8i(ebx+0x43); //mov
	to8i(ebx+0x42) = 1; //mov
	test(dl, dl);
	if (jz())
		goto loc_41DF4C;
loc_41DF6E:
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(to8i(ebx+0x43), (int8_t)0);
	if (jnz())
		goto loc_41DF6E;
	goto loc_41DF4C;
loc_41DF87:
	push32(ecx);
	push32(edx);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	pop32(ecx);
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = 1; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_41DFA0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	ebp = edx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seFron_14; //mov
	ebx = 0x22C; //mov
	eax = (int32_t)(intptr_t)aSocket_0; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = 0x300; //mov
	edx = 0x44; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = 0x44; //mov
	ebx = eax; //mov
	esi = eax; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = ecx; //mov
	to32i(ebx+0x1C) = 0xFFFFFFFF; //mov
	esp -= 4; _sub_41EBB0(); esp += 4; //call
	to32i(ebx+0x18) = eax; //mov
	to32i(ebx+0x3C) = ebp; //mov
	ebp = to32i(ebx+0x18); //mov
	xor_(edi, edi);
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E00F;
loc_41DFFF:
	test(edi, edi);
	if (jz())
		goto loc_41E072;
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E00F:
	push32(5);
	push32(ebp);
	eax = listen_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_41DFFF;
	ecx = 0xFFFFFFFF; //mov
	to32i(dword_4E61E0) = ebx; //mov
	add(ebx, (int32_t)4);
	eax = (int32_t)(intptr_t)sub_41E5D0; //mov
	push32(ebx);
	xor_(edx, edx);
	ebx = 2; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41DFFF;
	edi = 1; //mov
	xor_(ecx, ecx);
loc_41E046:
	ah = to8i(esi+0x43); //mov
	cmp(cl, ah);
	if (jnz())
		goto loc_41E062;
	cmp(ah, to8i(esi+0x42));
	if (jnz())
		goto loc_41E062;
	eax = ecx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_41E046;
loc_41E062:
	edi = (uint8_t)to8i(esi+0x43); //movzx
	test(edi, edi);
	if (jz())
		goto loc_41E072;
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E072:
	eax = esi; //mov
	esp -= 4; _sub_41DF40(); esp += 4; //call
	xor_(esi, esi);
	eax = esi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41E090()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D4B4C); //mov
	test(edx, edx);
	if (jz())
		goto loc_41E0BA;
	ecx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(dword_4D4B4C) = ecx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41E0B1;
loc_41E0A9:
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_41E0B1:
	eax = WSACleanup_wrap();
	test(eax, eax);
	if (jz())
		goto loc_41E0A9;
loc_41E0BA:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41E0C0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x100);
	cmp(to32i(dword_4D4B4C), (int32_t)0);
	if (jz())
		goto loc_41E17A;
loc_41E0D5:
	push32(esi);
	push32(ebx);
	push32(0);
	push32(1);
	push32(2);
	eax = socket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	ebx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41E14E;
	push32(0x100);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	eax = gethostname_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jnz())
		goto loc_41E148;
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = gethostbyname_wrap(to32i(esp + 0)); esp += 4;
	test(eax, eax);
	if (jz())
		goto loc_41E148;
	cmp(to16i(eax+8), (int16_t)2);
	if (jnz())
		goto loc_41E148;
	cmp(to16i(eax+0xA), (int16_t)4);
	if (jnz())
		goto loc_41E148;
	push32(edi);
	eax = to32i(eax+0xC); //mov
	eax = to32i(eax); //mov
	ecx = to32i(eax); //mov
	push32(ecx);
	edi = (int32_t)(intptr_t)dword_4E61C0; //mov
	eax = inet_ntoa_wrap(to32i(esp + 0)); esp += 4;
	esi = eax; //mov
	push32(edi);
loc_41E12E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41E146;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41E12E;
loc_41E146:
	pop32(edi);
	pop32(edi);
loc_41E148:
	push32(ebx);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
loc_41E14E:
	ebx = to32i(dword_4D4B4C); //mov
	inc(ebx);
	si = to16i(word_4E61B8); //mov
	to32i(dword_4D4B4C) = ebx; //mov
	test(si, si);
	if (jz())
		goto loc_41E195;
	xor_(eax, eax);
	ax = si; //mov
	sub(eax, (int32_t)2);
	pop32(ebx);
	pop32(esi);
loc_41E171:
	add(esp, (int32_t)0x100);
	pop32(edx);
	pop32(ecx);
	return;
loc_41E17A:
	push32(dword_4E6030);
	push32(0x101);
	eax = WSAStartup_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E0D5;
	xor_(eax, eax);
	goto loc_41E171;
loc_41E195:
	eax = 0x400; //mov
	pop32(ebx);
	pop32(esi);
	add(esp, (int32_t)0x100);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41E1B0()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	ebx = eax; //mov
	esi = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41E1EC;
	push32(ecx);
	eax = to32i(ebx+0x44); //mov
	push32(eax);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	to32i(ebx+0x44) = 0xFFFFFFFF; //mov
	to32i(ebx+4) = 0; //mov
	eax = (int32_t)(intptr_t)dword_564270; //mov
	edx = ebx; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	pop32(ecx);
loc_41E1EC:
	eax = (int32_t)(intptr_t)dword_564270; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41E215;
	eax = to32i(esi+0x10); //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_41E210;
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(esi+0x10) = 0; //mov
loc_41E210:
	eax = 1; //mov
loc_41E215:
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_41E220()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	ecx = ebx; //mov
	esi = to32i(eax+0x10); //mov
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	ax = to16i(esi+4); //mov
	cmp(ebx, eax);
	if (ja())
		goto loc_41E24C;
loc_41E23B:
	cmp(to16i(esi+6), (int16_t)0);
	if (jbe())
		goto loc_41E278;
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41E24C:
	xor_(eax, eax);
	ax = to16i(esi+4); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)aCNfs2seFron_14; //mov
	ebx = 0x1C2; //mov
	push32(aSendpacketPack);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	goto loc_41E23B;
loc_41E278:
	eax = to32i(dword_4DB6A0); //mov
	ebx = 2; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	edi = (int32_t)(intptr_t)(esi+0xC); //lea
	edx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esi+0xE); //lea
	ebx = ecx; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	push32(0);
	add(ecx, (int32_t)2);
	xor_(eax, eax);
	to32i(esi+8) = edi; //mov
	ax = cx; //mov
	edi = to32i(esi+8); //mov
	push32(eax);
	eax = to32i(esp+8); //mov
	to16i(esi+6) = cx; //mov
	push32(edi);
	eax = to32i(eax+0x44); //mov
	push32(eax);
	eax = send_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E2F6;
	eax = WSAGetLastError_wrap();
	cmp(eax, (int32_t)0x2747);
	if (jz())
		goto loc_41E2DC;
	cmp(eax, (int32_t)0x2733);
	if (jnz())
		goto loc_41E30C;
loc_41E2DC:
	eax = to32i(dword_4DB6A0); //mov
	to16i(esi+6) = 0; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41E2F6:
	test(eax, eax);
	if (jle())
		goto loc_41E30C;
	bx = to16i(esi+6); //mov
	ebp = to32i(esi+8); //mov
	sub(ebx, eax);
	add(ebp, eax);
	to16i(esi+6) = bx; //mov
	to32i(esi+8) = ebp; //mov
loc_41E30C:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41E330()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	edi = eax; //mov
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(ebx+0x10); //lea
	test(edi, edi);
	if (jz())
		goto loc_41E493;
	edx = to32i(edi+0x10); //mov
	test(edx, edx);
	if (jz())
		goto loc_41E40B;
	to32i(esp) = edx; //mov
loc_41E353:
	cmp(to32i(dword_4DB6A0), (int32_t)0);
	if (jnz())
		goto loc_41E366;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4DB6A0) = eax; //mov
loc_41E366:
	cmp(to32i(edi+0x10), (int32_t)0);
	if (jnz())
		goto loc_41E43B;
	eax = 1; //mov
loc_41E375:
	edx = to32i(esp); //mov
	to32i(edx) = eax; //mov
	dx = to16i(word_4E61B8); //mov
	test(dx, dx);
	if (jz())
		goto loc_41E442;
	xor_(eax, eax);
	ax = dx; //mov
	sub(eax, (int32_t)2);
loc_41E392:
	edx = to32i(esp); //mov
	to16i(edx+6) = 0; //mov
	to32i(edx+8) = 0; //mov
	to16i(edx+4) = ax; //mov
	edi = to32i(esi+0x48); //mov
	edi = to32i(edi+0xC); //mov
	to32i(esi+4) = 0; //mov
	bx = to16i(esi+0x30); //mov
	to32i(esi+0x10) = edx; //mov
	test(bx, bx);
	if (jnz())
		goto loc_41E44C;
	eax = 1; //mov
loc_41E3C8:
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41E453;
	ebx = 0x3E8; //mov
	xor_(ecx, ecx);
loc_41E3D9:
	cmp(to32i(edi+0x1C), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E453;
	eax = ecx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_41E453;
	eax = esi; //mov
	call(to32i(esi+0x14));
	test(eax, eax);
	if (jnz())
		goto loc_41E453;
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(dword_4DABCC));
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_41E3D9;
loc_41E40B:
	ecx = (int32_t)(intptr_t)aCNfs2seFron_14; //mov
	ebx = 0x160; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aTcpdata; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = to32i(dword_4DABE8); //mov
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(esp) = eax; //mov
	goto loc_41E353;
loc_41E43B:
	xor_(eax, eax);
	goto loc_41E375;
loc_41E442:
	eax = 0x400; //mov
	goto loc_41E392;
loc_41E44C:
	xor_(eax, eax);
	goto loc_41E3C8;
loc_41E453:
	cmp(to32i(edi+0x1C), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41E4AC;
	test(ebp, ebp);
	if (jz())
		goto loc_41E49A;
loc_41E45D:
	eax = to32i(edi+0x1C); //mov
	to32i(esi+0x44) = eax; //mov
	to32i(edi+0x1C) = 0xFFFFFFFF; //mov
	to32i(esi+4) = 1; //mov
loc_41E471:
	edx = to32i(esi+4); //mov
	test(edx, edx);
	if (jnz())
		goto loc_41E5B0;
	eax = to32i(esp); //mov
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_41E5B0;
	to32i(esi+0x10) = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_41E490:
	eax = to32i(esi+4); //mov
loc_41E493:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41E49A:
	ebx = (int32_t)(intptr_t)(edi+0x20); //lea
	edx = (int32_t)(intptr_t)(esi+0x30); //lea
	eax = to32i(esi+0x48); //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41E45D;
loc_41E4AC:
	test(ebp, ebp);
	if (jnz())
		goto loc_41E471;
	to32i(edi+0x38) = esi; //mov
	test(esi, esi);
	if (jz())
		goto loc_41E471;
	eax = (int32_t)(intptr_t)(esi+0x30); //lea
	to32i(esp+8) = eax; //mov
loc_41E4BE:
	test(ebp, ebp);
	if (jnz())
		goto loc_41E471;
	xor_(eax, eax);
	esp -= 4; _sub_41EBB0(); esp += 4; //call
	ebx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	eax = SDL_GetTicks_wrap();
	add(eax, (int32_t)0x3E8);
	to32i(esp+0x10) = eax; //mov
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E4F1;
	ebp = 1; //mov
loc_41E4E9:
	cmp(to32i(edi+0x38), (int32_t)0);
	if (jnz())
		goto loc_41E4BE;
	goto loc_41E471;
loc_41E4F1:
	eax = ebx; //mov
	esp -= 4; _sub_41EB50(); esp += 4; //call
	push32(0x10);
	edx = to32i(esp+0xC); //mov
	push32(edx);
	push32(ebx);
	eax = connect_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	to32i(esp+4) = eax; //mov
	eax = WSAGetLastError_wrap();
	cmp(eax, (int32_t)0x2733);
	if (jnz())
		goto loc_41E594;
	to32i(esi+0x44) = ebx; //mov
	cmp(to32i(edi+0x38), (int32_t)0);
	if (jz())
		goto loc_41E55C;
loc_41E522:
	eax = SDL_GetTicks_wrap();
	cmp(eax, to32i(esp+0x10));
	if (jnb())
		goto loc_41E55C;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_41E543;
	eax = esi; //mov
	call(to32i(esi+0x14));
	test(eax, eax);
	if (jz())
		goto loc_41E57B;
loc_41E543:
	ebp = 1; //mov
	to32i(edi+0x38) = 0; //mov
	to32i(esi+4) = 0; //mov
loc_41E556:
	cmp(to32i(edi+0x38), (int32_t)0);
	if (jnz())
		goto loc_41E522;
loc_41E55C:
	cmp(to32i(esi+4), (int32_t)0);
	if (jnz())
		goto loc_41E4E9;
	eax = to32i(esp+0xC); //mov
	push32(eax);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	cmp(to32i(edi+0x38), (int32_t)0);
	if (jnz())
		goto loc_41E4BE;
	goto loc_41E471;
loc_41E57B:
	eax = 0x3E8; //mov
	edx = eax; //mov
	ecx = to32i(dword_4DABCC); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_41E556;
loc_41E594:
	cmp(to32i(esp+4), (int32_t)0);
	if (jz())
		goto loc_41E55C;
	ebp = 1; //mov
	to32i(edi+0x38) = 0; //mov
	to32i(esi+4) = 0; //mov
	goto loc_41E55C;
loc_41E5B0:
	cmp(to32i(esi+4), (int32_t)0);
	if (jz())
		goto loc_41E490;
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = to32i(esi+4); //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41E5D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x430);
	eax = to32i(dword_4E61E0); //mov
	to32i(esp) = eax; //mov
	to8i(eax+0x43) = 1; //mov
	eax = to32i(esp); //mov
	cmp(to8i(eax+0x42), (int8_t)0);
	if (jnz())
		goto loc_41E842;
loc_41E5F5:
	eax = to32i(esp); //mov
	edx = to32i(eax+0x3C); //mov
	test(edx, edx);
	if (jz())
		goto loc_41E856;
	eax = to32i(edx+0x10); //mov
loc_41E606:
	edx = to32i(esp); //mov
	ecx = to32i(edx+0x1C); //mov
	ebx = eax; //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41E644;
	test(eax, eax);
	if (jz())
		goto loc_41E85D;
	eax = to32i(esp); //mov
	add(edx, (int32_t)0x20);
	eax = to32i(eax+0x3C); //mov
	call(ebx);
	test(eax, eax);
	if (jnz())
		goto loc_41E85D;
loc_41E62E:
	eax = to32i(esp); //mov
	esi = to32i(eax+0x1C); //mov
	push32(esi);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(esp); //mov
	to32i(eax+0x1C) = 0xFFFFFFFF; //mov
loc_41E644:
	xor_(edi, edi);
	eax = to32i(esp); //mov
	to32i(esp+4) = edi; //mov
	to32i(esp+0x108) = edi; //mov
	to32i(esp+0x20C) = edi; //mov
	to32i(esp+0x310) = edi; //mov
	cmp(to32i(eax+0x1C), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E873;
	to32i(esp+4) = 1; //mov
	eax = to32i(eax+0x18); //mov
	to32i(esp+8) = eax; //mov
loc_41E67B:
	eax = to32i(esp); //mov
	esi = to32i(eax+0x38); //mov
	test(esi, esi);
	if (jz())
		goto loc_41E6A5;
	edi = to32i(esp+0x108); //mov
	cmp(edi, (int32_t)0x40);
	if (jnb())
		goto loc_41E6A5;
	ebp = (int32_t)(intptr_t)(edi+1); //lea
	to32i(esp+0x108) = ebp; //mov
	eax = to32i(esi+0x44); //mov
	to32i(esp+edi*4+0x10C) = eax; //mov
loc_41E6A5:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)sub_41EAB0; //mov
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	esp -= 4; _sub_48BFFC(); esp += 4; //call
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x424) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x424); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x210); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x110); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	edx = 0x2710; //mov
	push32(0);
	to32i(esp+0x43C) = edx; //mov
	eax = select_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41E835;
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = to32i(esp+4); //mov
	ecx = to32i(eax+0x18); //mov
	push32(ecx);
	eax = WSAFDIsSet_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E762;
	eax = (int32_t)(intptr_t)(esp+0x42C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x418); //lea
	ebx = 0x10; //mov
	push32(eax);
	eax = to32i(esp+8); //mov
	to32i(esp+0x434) = ebx; //mov
	esi = to32i(eax+0x18); //mov
	push32(esi);
	eax = accept_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	edx = to32i(esp); //mov
	to32i(edx+0x1C) = eax; //mov
	eax = to32i(esp); //mov
	cmp(to32i(eax+0x1C), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E882;
	to8i(eax+0x42) = 1; //mov
loc_41E762:
	ebp = to32i(esp); //mov
	ebp = to32i(ebp+0x38); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_41E796;
	eax = (int32_t)(intptr_t)(esp+0x20C); //lea
	push32(eax);
	eax = to32i(ebp+0x44); //mov
	push32(eax);
	eax = WSAFDIsSet_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E8BE;
	to32i(ebp+4) = 0; //mov
loc_41E78C:
	eax = to32i(esp); //mov
	to32i(eax+0x38) = 0; //mov
loc_41E796:
	eax = to32i(esp+0x310); //mov
	xor_(edi, edi);
	test(eax, eax);
	if (jle())
		goto loc_41E835;
	xor_(ebx, ebx);
loc_41E7A9:
	eax = to32i(esp+ebx+0x314); //mov
	xor_(esi, esi);
	cmp(to32i(eax+0x44), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41E80C;
	cmp(eax, ebp);
	if (jz())
		goto loc_41E80C;
	edx = (int32_t)(intptr_t)(esp+4); //lea
	push32(edx);
	eax = to32i(eax+0x44); //mov
	push32(eax);
	eax = WSAFDIsSet_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E7DF;
	eax = to32i(esp); //mov
	edx = to32i(esp+ebx+0x314); //mov
	esp -= 4; _sub_41E9D0(); esp += 4; //call
	esi = eax; //mov
loc_41E7DF:
	eax = (int32_t)(intptr_t)(esp+0x108); //lea
	push32(eax);
	eax = to32i(esp+ebx+0x318); //mov
	eax = to32i(eax+0x44); //mov
	push32(eax);
	eax = WSAFDIsSet_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E80C;
	eax = to32i(esp); //mov
	edx = to32i(esp+ebx+0x314); //mov
	esp -= 4; _sub_41E940(); esp += 4; //call
	or_(esi, eax);
loc_41E80C:
	test(esi, esi);
	if (jz())
		goto loc_41E822;
	esi = to32i(esp+ebx+0x314); //mov
	test(esi, esi);
	if (jz())
		goto loc_41E822;
	eax = esi; //mov
	esp -= 4; _sub_41E8F0(); esp += 4; //call
loc_41E822:
	edx = to32i(esp+0x310); //mov
	inc(edi);
	add(ebx, (int32_t)4);
	cmp(edi, edx);
	if (jl())
		goto loc_41E7A9;
loc_41E835:
	eax = to32i(esp); //mov
	cmp(to8i(eax+0x42), (int8_t)0);
	if (jz())
		goto loc_41E5F5;
loc_41E842:
	eax = to32i(esp); //mov
	to8i(eax+0x43) = 0; //mov
	add(esp, (int32_t)0x430);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E856:
	xor_(eax, eax);
	goto loc_41E606;
loc_41E85D:
	eax = to32i(dword_5637F4); //mov
	edx = to32i(esp); //mov
	cmp(eax, to32i(edx+0x34));
	if (jg())
		goto loc_41E62E;
	goto loc_41E644;
loc_41E873:
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_41E67B;
loc_41E882:
	edx = (int32_t)(intptr_t)(eax+0x20); //lea
	ebx = to32i(esp+0x42C); //mov
	eax = (int32_t)(intptr_t)(esp+0x414); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(esp); //mov
	eax = to32i(eax+0x1C); //mov
	esp -= 4; _sub_41EB50(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	ebx = to32i(dword_4DABCC); //mov
	shl(ebx, (int32_t)2);
	edx = to32i(esp); //mov
	add(eax, ebx);
	to32i(edx+0x34) = eax; //mov
	goto loc_41E762;
loc_41E8BE:
	eax = (int32_t)(intptr_t)(esp+0x108); //lea
	push32(eax);
	eax = to32i(ebp+0x44); //mov
	push32(eax);
	eax = WSAFDIsSet_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_41E796;
	to32i(ebp+4) = 1; //mov
	goto loc_41E78C;
}
Fn(void) Game::_sub_41E8F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	eax = to32i(eax+0x44); //mov
	push32(eax);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	to32i(ebx+0x44) = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = ebx; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41E919;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E919:
	to32i(ebx+4) = 0; //mov
	eax = ebx; //mov
	edx = ebx; //mov
	call(to32i(ebx+0x18));
	eax = (int32_t)(intptr_t)dword_564270; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41E940()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = to32i(edx+0x10); //mov
	cx = to16i(ebx+6); //mov
	xor_(esi, esi);
	test(cx, cx);
	if (ja())
		goto loc_41E957;
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E957:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(eax, eax);
	push32(esi);
	ax = to16i(ebx+6); //mov
	push32(eax);
	ecx = to32i(ebx+8); //mov
	push32(ecx);
	eax = to32i(edx+0x44); //mov
	push32(eax);
	eax = send_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41E9AB;
	eax = WSAGetLastError_wrap();
	cmp(eax, (int32_t)0x2747);
	if (jz())
		goto loc_41E99B;
	cmp(eax, (int32_t)0x2733);
	if (jz())
		goto loc_41E99B;
	esi = 1; //mov
	to16i(ebx+6) = 0; //mov
loc_41E99B:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41E9AB:
	test(eax, eax);
	if (jle())
		goto loc_41E99B;
	add(to32i(ebx+8), eax);
	sub(to16i(ebx+6), ax);
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41E9D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x404);
	esi = edx; //mov
	eax = to32i(dword_4DB6A0); //mov
	ebp = to32i(edx+0x10); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(2);
	push32(2);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	xor_(edi, edi);
	push32(eax);
	eax = to32i(edx+0x44); //mov
	push32(eax);
	eax = recv_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jz())
		goto loc_41EA13;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41EA30;
	eax = WSAGetLastError_wrap();
	cmp(eax, (int32_t)0x2733);
	if (jz())
		goto loc_41EA30;
loc_41EA13:
	edi = 1; //mov
loc_41EA18:
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x404);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41EA30:
	ecx = 2; //mov
	eax = esp; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ebx = eax; //mov
	xor_(eax, eax);
	ax = to16i(ebp+4); //mov
	cmp(ebx, eax);
	if (jg())
		goto loc_41EA18;
	push32(2);
	ebp = (int32_t)(intptr_t)(ebx+2); //lea
	push32(ebp);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = to32i(esi+0x44); //mov
	push32(eax);
	eax = recv_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ecx = eax; //mov
	cmp(eax, ebp);
	if (jz())
		goto loc_41EA83;
loc_41EA6C:
	test(ecx, ecx);
	if (jz())
		goto loc_41EA13;
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41EA18;
	eax = WSAGetLastError_wrap();
	cmp(eax, (int32_t)0x2733);
	if (jz())
		goto loc_41EA18;
	goto loc_41EA13;
loc_41EA83:
	edx = (int32_t)(intptr_t)(esp+2); //lea
	eax = esi; //mov
	call(to32i(esi+0x20));
	test(eax, eax);
	if (jz())
		goto loc_41EA6C;
	push32(0);
	push32(ebp);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = to32i(esi+0x44); //mov
	push32(eax);
	eax = recv_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ecx = eax; //mov
	goto loc_41EA6C;
}
Fn(void) Game::_sub_41EAB0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = to32i(eax+0xC); //mov
	ecx = edx; //mov
	esi = to32i(ebx); //mov
	ebp = eax; //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_41EB08;
	cmp(to32i(eax+0x44), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41EB08;
	ebx = to32i(edx); //mov
	cmp(eax, to32i(ebx+0x38));
	if (jz())
		goto loc_41EB08;
	ebx = to32i(edx+0x310); //mov
	esi = (int32_t)(intptr_t)(ebx*4+0); //lea
	inc(ebx);
	edi = to32i(eax+0x10); //mov
	to32i(edx+0x310) = ebx; //mov
	to32i(edx+esi+0x314) = eax; //mov
	ebx = to32i(edx+4); //mov
	cmp(ebx, (int32_t)0x40);
	if (jb())
		goto loc_41EB13;
loc_41EAF6:
	cmp(to16i(edi+6), (int16_t)0);
	if (jbe())
		goto loc_41EB08;
	esi = to32i(ecx+0x108); //mov
	cmp(esi, (int32_t)0x40);
	if (jb())
		goto loc_41EB27;
loc_41EB08:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41EB13:
	esi = (int32_t)(intptr_t)(ebx*4+0); //lea
	inc(ebx);
	to32i(edx+4) = ebx; //mov
	eax = to32i(eax+0x44); //mov
	to32i(edx+esi+8) = eax; //mov
	goto loc_41EAF6;
loc_41EB27:
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
	eax = (int32_t)(intptr_t)(esi+1); //lea
	to32i(ecx+0x108) = eax; //mov
	eax = to32i(ebp+0x44); //mov
	to32i(ecx+edx+0x10C) = eax; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41EB50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)4);
	ebx = eax; //mov
	eax = esp; //mov
	push32(eax);
	push32(0x8004667E);
	edx = 1; //mov
	push32(ebx);
	to32i(esp+0xC) = edx; //mov
	eax = ioctlsocket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	push32(4);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(8);
	push32(0xFFFF);
	ecx = 1; //mov
	push32(ebx);
	to32i(esp+0x14) = ecx; //mov
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(4);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	esi = 1; //mov
	push32(esi);
	push32(6);
	push32(ebx);
	to32i(esp+0x14) = esi; //mov
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41EBB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	push32(0);
	push32(1);
	push32(2);
	eax = socket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	ebx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_41EBDA;
	ebx = 0xFFFFFFFF; //mov
loc_41EBD0:
	eax = ebx; //mov
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41EBDA:
	edx = 0x10; //mov
	eax = esp; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(eax, eax);
	ax = si; //mov
	edx = 2; //mov
	push32(eax);
	to16i(esp+4) = dx; //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	push32(0x10);
	to16i(esp+6) = ax; //mov
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(ebx);
	eax = bind_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	test(eax, eax);
	if (jz())
		goto loc_41EBD0;
	push32(ebx);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	ebx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	add(esp, (int32_t)0x10);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41EC30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41ECF8;
	edx = to32i(eax+0x10); //mov
	test(edx, edx);
	if (jz())
		goto loc_41ECF8;
	ecx = to32i(dword_4DBAB8); //mov
	esi = edx; //mov
	ebp = to32i(edx+4); //mov
	cmp(ecx, (int32_t)1);
	if (jge())
		goto loc_41ECA7;
loc_41EC5B:
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = edi; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41ED01;
	cmp(to32i(edi+4), (int32_t)0);
	if (jz())
		goto loc_41ECDC;
	ecx = 4; //mov
	to32i(edi+4) = 0; //mov
loc_41EC81:
	dec(ecx);
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41ECCD;
	eax = edi; //mov
	call(to32i(ebp+8));
	test(eax, eax);
	if (jz())
		goto loc_41ECCD;
	ebx = 0xFF; //mov
	edx = esi; //mov
	eax = to32i(esi+0x18); //mov
	esp -= 4; _sub_41FC60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41ECC1;
	xor_(ecx, ecx);
	goto loc_41EC81;
loc_41ECA7:
	xor_(eax, eax);
	al = to8i(edx+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aClosepktconn; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41EC5B;
loc_41ECC1:
	eax = 1; //mov
	esp -= 4; _sub_483410(); esp += 4; //call
	goto loc_41EC81;
loc_41ECCD:
	eax = 3; //mov
	esp -= 4; _sub_483410(); esp += 4; //call
	eax = edi; //mov
	call(to32i(ebp+4));
loc_41ECDC:
	eax = (int32_t)(intptr_t)dword_564270; //mov
	edx = edi; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
loc_41ECE8:
	eax = (int32_t)(intptr_t)dword_564270; //mov
	edx = edi; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41ED16;
loc_41ECF8:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41ED01:
	cmp(to32i(edi+4), (int32_t)0);
	if (jz())
		goto loc_41ECE8;
	push32(aClosepacketcon);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_41ECE8;
loc_41ED16:
	eax = (int32_t)(intptr_t)(esi+0x38); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x54); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x78); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x94); //lea
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = to32i(esi+0x14); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	cmp(to8i(esi+0xC), (int8_t)0);
	if (jz())
		goto loc_41ED55;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(edi+0x10) = 0; //mov
loc_41ED55:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41ED70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	edx = to32i(dword_4DBAB8); //mov
	esi = to32i(eax+0x10); //mov
	cmp(edx, (int32_t)5);
	if (jge())
		goto loc_41EDEF;
loc_41ED85:
	dec(to32i(edi+4));
	ebx = to32i(edi+4); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_41EDB5;
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41EDAD;
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	push32(ebx);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aConntimeout; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41EDAD:
	eax = edi; //mov
	call(to32i(edi+0x1C));
	to32i(edi+4) = eax; //mov
loc_41EDB5:
	cmp(to32i(edi+4), (int32_t)0);
	if (jnz())
		goto loc_41EE0C;
loc_41EDBB:
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41EDDD;
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(edi+4); //lea
	xor_(ecx, ecx);
	push32(1);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aFailedconn; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41EDDD:
	eax = esi; //mov
	esp -= 4; _sub_41FA00(); esp += 4; //call
loc_41EDE4:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41EDEF:
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aProcessconn; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41ED85;
loc_41EE0C:
	edx = to32i(esi+4); //mov
	eax = edi; //mov
	call(to32i(edx+8));
	test(eax, eax);
	if (jz())
		goto loc_41EDBB;
	edi = (int32_t)(intptr_t)(esi+0x54); //lea
	edx = (int32_t)(intptr_t)sub_41F710; //mov
	ebx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_48BFFC(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_41F700; //mov
	ebx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_48BF74(); esp += 4; //call
	eax = to32i(esi+0x2C); //mov
	edx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(esi+0x2C) = edx; //mov
	test(eax, eax);
	if (jg())
		goto loc_41EDE4;
	ebx = 0xFB; //mov
	edx = esi; //mov
	eax = to32i(esi+0x18); //mov
	esp -= 4; _sub_41FC60(); esp += 4; //call
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41EE60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = ebx; //mov
	test(eax, eax);
	if (jz())
		goto loc_41EE70;
	cmp(to32i(eax+4), (int32_t)0);
	if (jnz())
		goto loc_41EE77;
loc_41EE70:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41EE77:
	esi = to32i(eax+0x10); //mov
	eax = (int32_t)(intptr_t)(esi+0x38); //lea
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	ebp = to32i(esi+8); //mov
	edi = eax; //mov
	cmp(ecx, ebp);
	if (jbe())
		goto loc_41EEAD;
	eax = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	ebx = 0x2B6; //mov
	push32(aSendpacketTooM);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41EEAD:
	test(edi, edi);
	if (jnz())
		goto loc_41EED7;
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41EE70;
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	ebx = edx; //mov
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aNobuffers; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41EED7:
	ebx = edx; //mov
	eax = edi; //mov
	edx = esi; //mov
	esp -= 4; _sub_41FE70(); esp += 4; //call
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_41FD00(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+0x54); //lea
	edx = edi; //mov
	esp -= 4; _sub_48BBA4(); esp += 4; //call
	cmp(to32i(esi+0x30), (int32_t)0);
	if (jnz())
		goto loc_41EF1D;
	eax = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	edx = 0x2C2; //mov
	push32(aSendpacketSorr);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = edx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41EF1D:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_41EF30()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	esi = eax; //mov
	to32i(esp+0x14) = ebx; //mov
	ebp = to32i(esp+0x14); //mov
	xor_(ebx, ebx);
	to32i(esp+0x10) = edx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x24) = ebx; //mov
	cmp(ebp, (int32_t)6);
	if (jl())
		goto loc_41F1B5;
	cmp(ebp, (int32_t)0xFA);
	if (jle())
		goto loc_41F1C2;
	push32(0xFA);
	edi = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	ebp = 0x201; //mov
	push32(aOpenpacketconn);
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
loc_41EF8B:
	test(esi, esi);
	if (jz())
		goto loc_41EFB8;
	cmp(to32i(esi+4), (int32_t)0);
	if (jz())
		goto loc_41EFB8;
	ebx = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	edi = 0x206; //mov
	push32(aOpenpacketco_0);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41EFB8:
	test(esi, esi);
	if (jz())
		goto loc_41F207;
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41F207;
	ebx = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	edi = 0x20A; //mov
	push32(aOpenpacketco_1);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = edi; //mov
loc_41EFEA:
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41EFF2:
	cmp(ecx, (int32_t)2);
	if (jge())
		goto loc_41F23B;
	ecx = 2; //mov
loc_41F000:
	edx = to32i(esp+0x10); //mov
	xor_(eax, eax);
	ebp = to32i(esp+0x14); //mov
	al = to8i(edx+0x1E); //mov
	cmp(eax, ebp);
	if (jle())
		goto loc_41F015;
	to32i(esp+0x14) = eax; //mov
loc_41F015:
	edx = 1; //mov
	shl(edx, cl);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebp = (int32_t)(intptr_t)(eax-1); //lea
	to32i(esp+8) = 0x100; //mov
	eax = to32i(esp+0x10); //mov
	dl = to8i(eax+0x1F); //mov
	to32i(esp+0x28) = ebp; //mov
	test(dl, dl);
	if (jnz())
		goto loc_41F047;
	to32i(esp+8) = 0x200; //mov
loc_41F047:
	edx = to32i(esp+0x28); //mov
	eax = (int32_t)(intptr_t)(ebp+1); //lea
	add(edx, eax);
	eax = to32i(esp+0x14); //mov
	add(eax, (int32_t)0x15);
	and_(al, (int8_t)0xFC);
	imul32(eax, edx);
	ecx = to32i(esp+8); //mov
	add(eax, (int32_t)0xB0);
	add(eax, ecx);
	test(esi, esi);
	if (jz())
		goto loc_41F24E;
	ebx = to32i(esi+0x10); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_41F259;
	edi = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	edx = 0x227; //mov
	ecx = 1; //mov
	ebx = to32i(dword_4DABE8); //mov
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = edx; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aPktbuf; //mov
	to32i(esp+0xC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edi = eax; //mov
loc_41F0AD:
	test(edi, edi);
	if (jz())
		goto loc_41F40A;
	ecx = (int32_t)(intptr_t)(edi+0xB0); //lea
	to32i(esi) = 0; //mov
	to32i(esi+4) = 0; //mov
	eax = to32i(esi+0x18); //mov
	to32i(esi+0x10) = edi; //mov
	to32i(esp+4) = eax; //mov
	to32i(esi+0x18) = (int32_t)(intptr_t)sub_48A130; //mov
	eax = to32i(esp+0x14); //mov
	to32i(edi) = esi; //mov
	to32i(edi+8) = eax; //mov
	eax = to32i(esi+0x24); //mov
	to32i(edi+0x2C) = eax; //mov
	al = to8i(esp+0xC); //mov
	to8i(edi+0xC) = al; //mov
	eax = to32i(esp+0x10); //mov
	to32i(edi+4) = eax; //mov
	eax = to32i(dword_4D4BC4); //mov
	to8i(edi+0xD) = al; //mov
	inc(eax);
	to32i(dword_4D4BC4) = eax; //mov
	to32i(edi+0x10) = 0; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(edi+0x30) = 1; //mov
	to32i(edi+0x34) = 0; //mov
	xor_(ebx, ebx);
	to32i(edi+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(edi+0x38); //lea
	xor_(edx, edx);
	to32i(esp) = eax; //mov
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi+0x54); //lea
	edx = (int32_t)(intptr_t)sub_41F740; //mov
	ebx = edi; //mov
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	edx = (int32_t)(intptr_t)sub_41F740; //mov
	eax = (int32_t)(intptr_t)(edi+0x78); //lea
	to32i(edi+0x70) = 1; //mov
	ebx = edi; //mov
	to32i(edi+0x74) = 1; //mov
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edi+0x94); //lea
	edx = (int32_t)(intptr_t)sub_41F740; //mov
	ebx = edi; //mov
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	add(eax, (int32_t)0x15);
	and_(al, (int8_t)0xFC);
	ebx = to32i(esp); //mov
	to32i(esp+0x1C) = eax; //mov
loc_41F17E:
	eax = to32i(esp+0x28); //mov
	dec(eax);
	to32i(esp+0x28) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41F260;
	edx = ecx; //mov
	to32i(edx) = 0; //mov
	eax = to32i(esp+0x1C); //mov
	to32i(edx+4) = 0; //mov
	add(ecx, eax);
	eax = ebx; //mov
	to32i(edx+8) = 0; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	goto loc_41F17E;
loc_41F1B5:
	to32i(esp+0x14) = 6; //mov
	goto loc_41EF8B;
loc_41F1C2:
	bx = to16i(edx+0x1C); //mov
	test(bx, bx);
	if (jz())
		goto loc_41EF8B;
	xor_(eax, eax);
	edx = (int32_t)(intptr_t)(ebp+6); //lea
	ax = bx; //mov
	cmp(edx, eax);
	if (jbe())
		goto loc_41EF8B;
	edx = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	ebx = 0x203; //mov
	push32(aOpenpacketco_2);
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_41EF8B;
loc_41F207:
	test(esi, esi);
	if (jz())
		goto loc_41EFF2;
	cmp(to32i(dword_4DB274), (int32_t)0);
	if (jz())
		goto loc_41EFF2;
	eax = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	edx = 0x20C; //mov
	push32(aOpenpacketco_3);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = edx; //mov
	goto loc_41EFEA;
loc_41F23B:
	cmp(ecx, (int32_t)7);
	if (jle())
		goto loc_41F000;
	ecx = 7; //mov
	goto loc_41F000;
loc_41F24E:
	edx = eax; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41F259:
	edi = ebx; //mov
	goto loc_41F0AD;
loc_41F260:
	eax = (int32_t)(intptr_t)(edi+0x78); //lea
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0x14); //mov
	add(eax, (int32_t)0x15);
	to32i(esp+0x18) = eax; //mov
loc_41F272:
	eax = to32i(esp+0x18); //mov
	and_(al, (int8_t)0xFC);
	dec(ebp);
	add(eax, ecx);
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41F2A8;
	edx = ecx; //mov
	to32i(edx) = 0; //mov
	ecx = eax; //mov
	eax = to32i(edi+0x74); //mov
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(edi+0x74) = ebx; //mov
	to32i(edx+4) = eax; //mov
	eax = to32i(esp+0x20); //mov
	to32i(edx+8) = 0; //mov
	esp -= 4; _sub_48BBA4(); esp += 4; //call
	goto loc_41F272;
loc_41F2A8:
	to32i(edi+0x24) = 0; //mov
	to32i(edi+0x1C) = eax; //mov
	to32i(edi+0x18) = ecx; //mov
	eax = to32i(esp+8); //mov
	edx = to32i(dword_4DBABC); //mov
	to32i(edi+0x20) = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_41F2E9;
	ecx = (int32_t)(intptr_t)aCNfs2seFron_15; //mov
	ebx = 0x272; //mov
	push32(aPacketlayer_ti);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_41F2E9:
	ecx = to32i(esp+0x10); //mov
	edx = (int32_t)(intptr_t)sub_41F4E0; //mov
	eax = esi; //mov
	call(to32i(ecx));
	test(eax, eax);
	if (jz())
		goto loc_41F454;
	to32i(esi+4) = 0x3B9ACA00; //mov
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	cmp(to32i(dword_4DBAB8), (int32_t)1);
	if (jge())
		goto loc_41F420;
loc_41F31E:
	xor_(ebp, ebp);
loc_41F320:
	eax = 1; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_41F33B;
	eax = esi; //mov
	call(to32i(esi+0x14));
	test(eax, eax);
	if (jz())
		goto loc_41F43D;
loc_41F33B:
	edx = 1; //mov
loc_41F340:
	to32i(esp+0x24) = edx; //mov
	test(edx, edx);
	if (jz())
		goto loc_41F368;
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41F368;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	ecx = ebp; //mov
	ebx = ebp; //mov
	push32(ebp);
	edx = ebp; //mov
	eax = (int32_t)(intptr_t)aConnAborted; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F368:
	cmp(ebp, to32i(esi+4));
	if (jz())
		goto loc_41F374;
	to32i(esi+4) = 0x3B9ACA00; //mov
loc_41F374:
	cmp(ebp, to32i(esi+4));
	if (jz())
		goto loc_41F386;
	eax = to32i(edi+0x10); //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_41F386;
	cmp(eax, to32i(esp+0x24));
	if (jz())
		goto loc_41F320;
loc_41F386:
	cmp(to32i(esi+4), (int32_t)0);
	if (jnz())
		goto loc_41F444;
loc_41F390:
	ebp = to32i(esi+4); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_41F3B7;
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41F3B7;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(ebp);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aConnInactive; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F3B7:
	to32i(esi+4) = 0; //mov
	edx = to32i(esp+0x10); //mov
	eax = esi; //mov
	call(to32i(edx+4));
loc_41F3C7:
	cmp(to32i(esi+4), (int32_t)0);
	if (jz())
		goto loc_41F47C;
	ecx = to32i(esp+0x24); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_41F47C;
	eax = to32i(dword_4DBABC); //mov
	to32i(esi+4) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esi+0x18) = eax; //mov
	cmp(to32i(dword_4DBAB8), (int32_t)1);
	if (jl())
		goto loc_41F40A;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ebx, ebx);
	push32(ecx);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aOpenpktconnSuc; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F40A:
	test(edi, edi);
	if (jz())
		goto loc_41F4CB;
	edx = 1; //mov
	eax = edx; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41F420:
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aOpenpktconn; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41F31E;
loc_41F43D:
	edx = ebp; //mov
	goto loc_41F340;
loc_41F444:
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jnz())
		goto loc_41F390;
	goto loc_41F3C7;
loc_41F454:
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41F3C7;
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aConnectFailed; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41F3C7;
loc_41F47C:
	cmp(to32i(dword_4DBAB8), (int32_t)1);
	if (jl())
		goto loc_41F49D;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aOpenpktconnFai; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F49D:
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_564270; //mov
	edx = esi; //mov
	ebp = to32i(esp+0xC); //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(ebp, ebp);
	if (jz())
		goto loc_41F4CB;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(esi+0x10) = 0; //mov
loc_41F4CB:
	xor_(edx, edx);
	eax = edx; //mov
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41F4E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x18);
	to32i(ebp-4) = eax; //mov
	edi = to32i(eax+0x10); //mov
	eax = to32i(edi+4); //mov
	edx = to32i(dword_4DBAB8); //mov
	to32i(ebp-0x18) = eax; //mov
	cmp(edx, (int32_t)5);
	if (jge())
		goto loc_41F662;
loc_41F506:
	eax = to32i(ebp-4); //mov
	to32i(edi+0x28) = 0; //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_41F659;
	eax = (int32_t)(intptr_t)(edi+0x94); //lea
	to32i(ebp-0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(edi+0x78); //lea
	to32i(ebp-8) = eax; //mov
	eax = to32i(ebp-0x14); //mov
	to32i(ebp-0xC) = eax; //mov
loc_41F52F:
	edx = to32i(ebp-0x18); //mov
	eax = to32i(ebp-4); //mov
	call(to32i(edx+0x10));
	test(eax, eax);
	if (jnz())
		goto loc_41F67F;
loc_41F540:
	to32i(ebp-0x10) = eax; //mov
	eax = to32i(ebp-0x14); //mov
	edx = to32i(edi+0x70); //mov
	esp -= 4; _sub_48BF0C(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41F5D7;
loc_41F558:
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41F57E;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	ebx = (int32_t)(intptr_t)(esi+0x12); //lea
	push32(eax);
	xor_(ecx, ecx);
	edx = (int32_t)(intptr_t)(esi+4); //lea
	push32(0);
	cl = to8i(esi+0xD); //mov
	eax = (int32_t)(intptr_t)aRecv; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F57E:
	eax = to32i(ebp-4); //mov
	xor_(ebx, ebx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(esi+0x12); //lea
	bl = to8i(esi+0xD); //mov
	call(to32i(ecx+0x20));
	test(eax, eax);
	if (jz())
		goto loc_41F68B;
	eax = to32i(edi+0x6C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(edi+0x74); //mov
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(edi+0x74) = edx; //mov
	to32i(esi+4) = eax; //mov
	inc(to32i(edi+0x70));
	eax = to32i(edi+0x6C); //mov
	edx = esi; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(ebp-8); //mov
	to32i(esi+8) = 0; //mov
	esp -= 4; _sub_48BBA4(); esp += 4; //call
	eax = to32i(ebp-0xC); //mov
	edx = to32i(edi+0x70); //mov
	esp -= 4; _sub_48BF0C(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_41F558;
loc_41F5D7:
	cmp(to32i(ebp-0x10), (int32_t)0);
	if (jnz())
		goto loc_41F52F;
	cmp(to8i(edi+0xE), (int8_t)0);
	if (jnz())
		goto loc_41F6C1;
	eax = (int32_t)(intptr_t)(edi+0x94); //lea
	esp -= 4; _sub_48BCC0(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41F6BA;
	cmp(eax, to32i(edi+0x70));
	if (jz())
		goto loc_41F6BA;
	eax = 1; //mov
loc_41F60D:
	to8i(edi+0xE) = 1; //mov
loc_41F611:
	cmp(to32i(edi+0x28), (int32_t)0);
	if (jz())
		goto loc_41F6C8;
loc_41F61B:
	cmp(to32i(dword_4DBAB8), (int32_t)4);
	if (jl())
		goto loc_41F647;
	xor_(eax, eax);
	esi = to32i(edi+0x28); //mov
	al = to8i(edi+0xD); //mov
	xor_(ecx, ecx);
	push32(eax);
	xor_(ebx, ebx);
	xor_(edx, edx);
	push32(1);
	test(esi, esi);
	if (jz())
		goto loc_41F6D9;
	eax = (int32_t)(intptr_t)aGrbg; //mov
loc_41F642:
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F647:
	eax = (int32_t)(intptr_t)(edi+0x78); //lea
	xor_(edx, edx);
	esp -= 4; _sub_48BD74(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41F6E3;
loc_41F659:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41F662:
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aRecvnotify; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41F506;
loc_41F67F:
	eax = edi; //mov
	esp -= 4; _sub_41F750(); esp += 4; //call
	goto loc_41F540;
loc_41F68B:
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41F6AB;
	al = to8i(edi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esi+4); //lea
	xor_(ecx, ecx);
	push32(1);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aDeny; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F6AB:
	eax = to32i(ebp-0x14); //mov
	edx = esi; //mov
	esp -= 4; _sub_48BBA4(); esp += 4; //call
	goto loc_41F5D7;
loc_41F6BA:
	xor_(eax, eax);
	goto loc_41F60D;
loc_41F6C1:
	xor_(eax, eax);
	goto loc_41F611;
loc_41F6C8:
	test(eax, eax);
	if (jnz())
		goto loc_41F61B;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41F6D9:
	eax = (int32_t)(intptr_t)aBad; //mov
	goto loc_41F642;
loc_41F6E3:
	edx = edi; //mov
	esp -= 4; _sub_41FC00(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41F700()
{
	cmp(to32i(eax+8), (int32_t)0);
	if (jle())
	{
		_sub_41FD00();
		return;
	}
	eax = 1; //mov
}
Fn(void) Game::_sub_41F710()
{
	edx = to32i(eax+8); //mov
	test(edx, edx);
	if (jle())
		goto loc_41F726;
	push32(ecx);
	ecx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(eax+8) = ecx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_41F72C;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_41F726:
	eax = 1; //mov
	return;
loc_41F72C:
	eax = 1; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_41F740()
{
	eax = to32i(eax+4); //mov
}
Fn(void) Game::_sub_41F750()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	xor_(edx, edx);
	to32i(esp) = edx; //mov
	eax = to32i(eax); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(edi+4); //mov
	dl = to8i(eax+0x1F); //mov
	to32i(esp+8) = eax; //mov
	test(dl, dl);
	if (jnz())
		goto loc_41F807;
loc_41F778:
	ecx = to32i(edi+0x24); //mov
	eax = to32i(edi+0x20); //mov
	cmp(eax, ecx);
	if (jbe())
		goto loc_41F799;
	esi = to32i(esp+8); //mov
	ebx = eax; //mov
	edx = to32i(edi+0x1C); //mov
	eax = to32i(esp+4); //mov
	sub(ebx, ecx);
	add(edx, ecx);
	call(to32i(esi+0x14));
	add(to32i(edi+0x24), eax);
loc_41F799:
	eax = to32i(edi+0x24); //mov
	test(eax, eax);
	if (jz())
		goto loc_41F7F2;
	esi = eax; //mov
	xor_(ebp, ebp);
loc_41F7A4:
	edx = esp; //mov
	ecx = esi; //mov
	ebx = to32i(edi+0x1C); //mov
	eax = edi; //mov
	add(ebx, ebp);
	esp -= 4; _sub_41F820(); esp += 4; //call
	edx = to32i(esp+8); //mov
	cmp(to8i(edx+0x1F), (int8_t)0);
	if (jnz())
		goto loc_41F7D4;
	test(eax, eax);
	if (jz())
		goto loc_41F7D4;
	sub(esi, eax);
	add(ebp, eax);
	test(eax, eax);
	if (jz())
		goto loc_41F7D4;
	eax = to32i(esp+4); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jnz())
		goto loc_41F7A4;
loc_41F7D4:
	eax = to32i(esp+8); //mov
	cmp(to8i(eax+0x1F), (int8_t)0);
	if (jnz())
		goto loc_41F7F2;
	test(ebp, ebp);
	if (jz())
		goto loc_41F7F2;
	edx = to32i(edi+0x1C); //mov
	ebx = esi; //mov
	eax = (int32_t)(intptr_t)(edx+ebp); //lea
	esp -= 4; _sub_48A980(); esp += 4; //call
	to32i(edi+0x24) = esi; //mov
loc_41F7F2:
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_41F813;
	eax = 1; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41F807:
	to32i(edi+0x24) = 0; //mov
	goto loc_41F778;
loc_41F813:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41F820()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	to32i(esp+4) = edx; //mov
	ebp = ebx; //mov
	ebx = ecx; //mov
	eax = to32i(eax); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(edi+4); //mov
	xor_(esi, esi);
	dl = to8i(eax+0x1F); //mov
	to32i(esp) = esi; //mov
	test(dl, dl);
	if (jnz())
		goto loc_41F857;
	eax = ebp; //mov
	edx = (int32_t)(intptr_t)(ecx+ebp); //lea
loc_41F84A:
	cmp(eax, edx);
	if (jnb())
		goto loc_41F857;
	cmp(to8i(eax), (int8_t)0xFE);
	if (jz())
		goto loc_41F857;
	inc(esi);
	inc(eax);
	goto loc_41F84A;
loc_41F857:
	eax = (int32_t)(intptr_t)(esi+ebp); //lea
	cmp(to8i(eax), (int8_t)0xFE);
	if (jnz())
		goto loc_41F888;
	ecx = (int32_t)(intptr_t)(esi+6); //lea
	cmp(ecx, ebx);
	if (jbe())
		goto loc_41F88C;
loc_41F866:
	edx = to32i(esp); //mov
	add(edi, (int32_t)0x28);
	cmp(esi, edx);
	if (jbe())
		goto loc_41F9EB;
	eax = 1; //mov
	ecx = to32i(edi); //mov
	add(ecx, eax);
	eax = esi; //mov
	to32i(edi) = ecx; //mov
loc_41F881:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_41F888:
	eax = ebx; //mov
	goto loc_41F881;
loc_41F88C:
	xor_(edx, edx);
	dl = to8i(eax+1); //mov
	ebp = eax; //mov
	cmp(edx, to32i(edi+8));
	if (ja())
		goto loc_41F9CF;
	add(ecx, edx);
	cmp(ecx, ebx);
	if (ja())
		goto loc_41F866;
	sub(ecx, esi);
	edx = ecx; //mov
	esp -= 4; _sub_41FF30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41F9C7;
	eax = to32i(esp+8); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_41F8C9;
	edx = to32i(esp+8); //mov
	eax = to32i(dword_4DBABC); //mov
	to32i(edx+4) = eax; //mov
loc_41F8C9:
	inc(to32i(edi+0x10));
	dh = to8i(ebp+3); //mov
	add(esi, ecx);
	cmp(dh, (int8_t)0x7F);
	if (ja())
		goto loc_41F8E2;
	xor_(edx, edx);
	eax = edi; //mov
	dl = to8i(ebp+3); //mov
	esp -= 4; _sub_41FB50(); esp += 4; //call
loc_41F8E2:
	bl = to8i(ebp+1); //mov
	to32i(esp) = ecx; //mov
	test(bl, bl);
	if (jz())
		goto loc_41F8F4;
	bh = to8i(ebp+2); //mov
	cmp(bh, (int8_t)0x7F);
	if (jbe())
		goto loc_41F936;
loc_41F8F4:
	cl = to8i(ebp+2); //mov
	cmp(cl, (int8_t)0x7F);
	if (jbe())
		goto loc_41F9B7;
	cmp(cl, (int8_t)0xFF);
	if (jnz())
		goto loc_41F866;
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41F92A;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aCloseconnmsg; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41F92A:
	eax = edi; //mov
	esp -= 4; _sub_41FA00(); esp += 4; //call
	goto loc_41F866;
loc_41F936:
	xor_(edx, edx);
	eax = to32i(edi+0x70); //mov
	dl = bh; //mov
	ebx = 0x7F; //mov
	esp -= 4; _sub_41FF90(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(edi+0x78); //lea
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48BF0C(); esp += 4; //call
	to32i(esp+0xC) = eax; //mov
	to8i(edi+0xE) = 0; //mov
	test(eax, eax);
	if (jz())
		goto loc_41F866;
	edx = (int32_t)(intptr_t)(eax+0xC); //lea
	ebx = ecx; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edi+0x94); //lea
	esp -= 4; _sub_48BBA4(); esp += 4; //call
	eax = to32i(esp+4); //mov
	inc(to32i(eax));
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41F866;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	eax = to32i(esp+0x10); //mov
	xor_(ecx, ecx);
	ebx = (int32_t)(intptr_t)(eax+0x12); //lea
	push32(0);
	edx = (int32_t)(intptr_t)(eax+4); //lea
	cl = to8i(eax+0xD); //mov
	eax = (int32_t)(intptr_t)aQdat; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41F866;
loc_41F9B7:
	xor_(edx, edx);
	eax = edi; //mov
	dl = cl; //mov
	esp -= 4; _sub_41FAD0(); esp += 4; //call
	goto loc_41F866;
loc_41F9C7:
	add(esi, (int32_t)3);
	goto loc_41F866;
loc_41F9CF:
	cmp(dl, (int8_t)0xFE);
	if (jz())
		goto loc_41F9E1;
	eax = 1; //mov
	inc(eax);
	add(esi, eax);
	goto loc_41F866;
loc_41F9E1:
	xor_(eax, eax);
	inc(eax);
	add(esi, eax);
	goto loc_41F866;
loc_41F9EB:
	xor_(eax, eax);
	ecx = to32i(edi); //mov
	add(ecx, eax);
	eax = esi; //mov
	to32i(edi) = ecx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41FA00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jl())
		goto loc_41FA28;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aShutdownconn; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41FA28:
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	edx = to32i(edi); //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41FAA6;
	ebx = to32i(dword_4DBAB8); //mov
	esi = to32i(edi); //mov
	cmp(ebx, (int32_t)1);
	if (jl())
		goto loc_41FA5D;
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aDisconnect; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41FA5D:
	to32i(esi+4) = 0; //mov
	edx = to32i(edi+4); //mov
	eax = esi; //mov
	call(to32i(edx+4));
	eax = esi; //mov
	edx = esi; //mov
	call(to32i(esi+0x18));
	eax = (int32_t)(intptr_t)dword_564270; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	cmp(to32i(dword_4DBAB8), (int32_t)2);
	if (jge())
		goto loc_41FA8C;
loc_41FA86:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FA8C:
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aConnclosed; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41FA86;
loc_41FAA6:
	cmp(to32i(dword_4DBAB8), (int32_t)1);
	if (jl())
		goto loc_41FA86;
	al = to8i(edi+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(1);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)aDupShutdown; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41FAD0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ecx = (int32_t)(intptr_t)(eax+0x54); //lea
	eax = ecx; //mov
	esp -= 4; _sub_48BCC0(); esp += 4; //call
	ebx = 0x7F; //mov
	and_(edx, (int32_t)0xFF);
	esp -= 4; _sub_41FF90(); esp += 4; //call
	to32i(esp) = eax; //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48BDB8(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41FB15;
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jge())
		goto loc_41FB1D;
	to32i(edi+8) = 0; //mov
loc_41FB15:
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FB1D:
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	xor_(ecx, ecx);
	push32(1);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aNakr; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	to32i(edi+8) = 0; //mov
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41FB50()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebx = 0x7F; //mov
	and_(edx, (int32_t)0xFF);
	eax = to32i(eax+0x34); //mov
	esp -= 4; _sub_41FF90(); esp += 4; //call
	to32i(esp) = eax; //mov
	cmp(eax, to32i(esi+0x30));
	if (jnb())
		goto loc_41FBBD;
	cmp(eax, to32i(esi+0x34));
	if (jbe())
		goto loc_41FBBD;
	edi = to32i(dword_4DBAB8); //mov
	to32i(esi+0x34) = eax; //mov
	cmp(edi, (int32_t)3);
	if (jge())
		goto loc_41FBA1;
loc_41FB87:
	ebx = (int32_t)(intptr_t)(esi+0x38); //lea
	ecx = (int32_t)(intptr_t)(esi+0x54); //lea
loc_41FB8D:
	eax = ecx; //mov
	esp -= 4; _sub_48BCC0(); esp += 4; //call
	cmp(eax, to32i(esi+0x34));
	if (jbe())
		goto loc_41FBE2;
loc_41FB99:
	add(esp, (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FBA1:
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aAckr; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41FB87;
loc_41FBBD:
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41FB87;
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	xor_(ecx, ecx);
	push32(0);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aAckQ; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	goto loc_41FB87;
loc_41FBE2:
	eax = ecx; //mov
	esp -= 4; _sub_48BAFC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41FB99;
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	goto loc_41FB8D;
}
Fn(void) Game::_sub_41FC00()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_41FC17;
	eax = to32i(eax+8); //mov
	edx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(esi+8) = edx; //mov
	test(eax, eax);
	if (jle())
		goto loc_41FC1F;
loc_41FC17:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	return;
loc_41FC1F:
	push32(ebx);
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41FC44;
	push32(ecx);
	xor_(eax, eax);
	al = to8i(edi+0xD); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esi+4); //lea
	xor_(ecx, ecx);
	push32(1);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aNakt; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	pop32(ecx);
loc_41FC44:
	edx = edi; //mov
	ebx = to32i(esi+4); //mov
	eax = to32i(edi+0x18); //mov
	and_(ebx, (int32_t)0x7F);
	esp -= 4; _sub_41FC60(); esp += 4; //call
	pop32(ebx);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41FC60()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	esi = edx; //mov
	to32i(esp) = ebx; //mov
	edi = to32i(esi); //mov
	to32i(eax+8) = 1; //mov
	ebp = to32i(esi+4); //mov
	eax = edi; //mov
	xor_(edx, edx);
	call(to32i(ebp+0xC));
	cmp(eax, (int32_t)6);
	if (jnb())
		goto loc_41FC90;
loc_41FC86:
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41FC90:
	eax = esi; //mov
	esp -= 4; _sub_41FEC0(); esp += 4; //call
	edx = 6; //mov
	and_(eax, (int32_t)0xFF);
	to8i(ecx+0xC) = 0xFE; //mov
	ah = to8i(esp); //mov
	ebx = 6; //mov
	to8i(ecx+0xE) = ah; //mov
	ebp = (int32_t)(intptr_t)(ecx+0xC); //lea
	to8i(ecx+0xF) = al; //mov
	eax = ebp; //mov
	to8i(ecx+0xD) = 0; //mov
	esp -= 4; _sub_41FF60(); esp += 4; //call
	esi = to32i(esi+4); //mov
	edx = ebp; //mov
	eax = edi; //mov
	call(to32i(esi+0x18));
	cmp(eax, (int32_t)6);
	if (jnz())
		goto loc_41FCF1;
	esi = 1; //mov
loc_41FCD5:
	edx = esi; //mov
	test(esi, esi);
	if (jz())
		goto loc_41FC86;
	cmp(to32i(esp), (int32_t)0x7F);
	if (ja())
		goto loc_41FC86;
	eax = to32i(edi+0x28); //mov
	to32i(ecx+8) = eax; //mov
	eax = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41FCF1:
	xor_(esi, esi);
	goto loc_41FCD5;
}
Fn(void) Game::_sub_41FD00()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	ecx = edx; //mov
	xor_(edx, edx);
	eax = to32i(ecx); //mov
	to32i(ebp-0x10) = edx; //mov
	edx = to32i(ecx+4); //mov
	to32i(ebp-8) = eax; //mov
	call(to32i(edx+0xC));
	xor_(edx, edx);
	ebx = esi; //mov
	dl = to8i(esi+0xD); //mov
	add(ebx, (int32_t)4);
	add(edx, (int32_t)6);
	to32i(ebp-4) = ebx; //mov
	cmp(eax, edx);
	if (jnb())
		goto loc_41FD7C;
	cmp(to32i(esi+8), (int32_t)0);
	if (jl())
		goto loc_41FE34;
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41FD5E;
	xor_(eax, eax);
	al = to8i(ecx+0xD); //mov
	push32(eax);
	edx = to32i(ebp-4); //mov
	xor_(ebx, ebx);
	push32(1);
	xor_(ecx, ecx);
	eax = (int32_t)(intptr_t)aHold; //mov
loc_41FD59:
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41FD5E:
	cmp(to32i(ebp-0x10), (int32_t)0);
	if (jz())
		goto loc_41FE5A;
	eax = to32i(ebp-8); //mov
	eax = to32i(eax+0x2C); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(ebp-0x10); //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FD7C:
	eax = ecx; //mov
	esp -= 4; _sub_41FEC0(); esp += 4; //call
	dl = al; //mov
	xor_(eax, eax);
	al = to8i(esi+0xD); //mov
	add(eax, (int32_t)6);
	to32i(ebp-0x14) = eax; //mov
	to8i(esi+0xF) = dl; //mov
	xor_(edx, edx);
	eax = esi; //mov
	dl = to8i(esi+0xD); //mov
	add(eax, (int32_t)0xC);
	add(edx, (int32_t)6);
	to32i(ebp-0xC) = eax; //mov
	esp -= 4; _sub_41FF60(); esp += 4; //call
	ebx = to32i(ebp-0x14); //mov
	edi = to32i(ecx+4); //mov
	edx = to32i(ebp-0xC); //mov
	eax = to32i(ebp-8); //mov
	call(to32i(edi+0x18));
	edx = to32i(ebp-0x14); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_41FE0D;
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41FDEB;
	xor_(eax, eax);
	edx = to32i(ebp-4); //mov
	al = to8i(ecx+0xD); //mov
	ebx = (int32_t)(intptr_t)(esi+0x12); //lea
	push32(eax);
	edi = to32i(esi+8); //mov
	xor_(ecx, ecx);
	push32(0);
	cl = to8i(esi+0xD); //mov
	test(edi, edi);
	if (jl())
		goto loc_41FE06;
	eax = (int32_t)(intptr_t)aRsnd; //mov
loc_41FDE6:
	esp -= 4; _sub_48B724(); esp += 4; //call
loc_41FDEB:
	to32i(ebp-0x10) = 1; //mov
	eax = to32i(ebp-8); //mov
	eax = to32i(eax+0x2C); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(ebp-0x10); //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FE06:
	eax = (int32_t)(intptr_t)aSent; //mov
	goto loc_41FDE6;
loc_41FE0D:
	cmp(to32i(dword_4DBAB8), (int32_t)1);
	if (jl())
		goto loc_41FD5E;
	xor_(eax, eax);
	al = to8i(ecx+0xD); //mov
	push32(eax);
	ebx = to32i(ebp-0xC); //mov
	ecx = edx; //mov
	push32(1);
	edx = (int32_t)(intptr_t)(ebp-0x14); //lea
	eax = (int32_t)(intptr_t)aWriteFailure; //mov
	goto loc_41FD59;
loc_41FE34:
	cmp(to32i(dword_4DBAB8), (int32_t)3);
	if (jl())
		goto loc_41FD5E;
	xor_(eax, eax);
	al = to8i(ecx+0xD); //mov
	push32(eax);
	edx = to32i(ebp-4); //mov
	xor_(ebx, ebx);
	push32(1);
	xor_(ecx, ecx);
	eax = (int32_t)(intptr_t)aBusy; //mov
	goto loc_41FD59;
loc_41FE5A:
	to32i(esi+8) = 1; //mov
	eax = to32i(ebp-0x10); //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41FE70()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	edi = ebx; //mov
	ebp = (int32_t)(intptr_t)(eax+0x12); //lea
	eax = to32i(edx+0x6C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(edx+0x30); //mov
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(edx+0x30) = ebx; //mov
	to32i(esi+4) = eax; //mov
	eax = to32i(edx+0x6C); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	to32i(esi+8) = 0xFFFFFFFF; //mov
	ebx = ecx; //mov
	dl = to8i(esi+4); //mov
	to8i(esi+0xC) = 0xFE; //mov
	and_(dl, (int8_t)0x7F);
	eax = edi; //mov
	to8i(esi+0xE) = dl; //mov
	edx = ebp; //mov
	to8i(esi+0xD) = cl; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_41FEC0()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)4);
	edx = eax; //mov
	add(eax, (int32_t)0x78);
	esp -= 4; _sub_48BCC0(); esp += 4; //call
	to32i(esp) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_41FEF9;
loc_41FED7:
	dec(eax);
	to32i(esp) = eax; //mov
	eax = to32i(edx); //mov
	eax = to32i(eax+0x24); //mov
	ecx = to32i(dword_4DBAB8); //mov
	to32i(edx+0x2C) = eax; //mov
	cmp(ecx, (int32_t)3);
	if (jge())
		goto loc_41FEFE;
	al = to8i(esp); //mov
	and_(al, (int8_t)0x7F);
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
	return;
loc_41FEF9:
	eax = to32i(edx+0x74); //mov
	goto loc_41FED7;
loc_41FEFE:
	push32(ebx);
	xor_(eax, eax);
	al = to8i(edx+0xD); //mov
	push32(eax);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	push32(0);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = (int32_t)(intptr_t)aAckt; //mov
	esp -= 4; _sub_48B724(); esp += 4; //call
	pop32(ebx);
	al = to8i(esp); //mov
	and_(al, (int8_t)0x7F);
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_41FF30()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	bl = to8i(eax+4); //mov
	bh = to8i(eax+5); //mov
	esp -= 4; _sub_41FF60(); esp += 4; //call
	eax = to32i(ecx+2); //mov
	edx = bx; //movsx
	sar(eax, (int32_t)0x10);
	cmp(edx, eax);
	if (jnz())
		goto loc_41FF54;
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_41FF54:
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_41FF60()
{
	push32(ecx);
	ecx = eax; //mov
	to8i(eax+5) = 0; //mov
	al = to8i(eax+5); //mov
	to8i(ecx+4) = al; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48EBE0(); esp += 4; //call
	edx = eax; //mov
	sar(eax, (int32_t)8);
	to8i(ecx+5) = dl; //mov
	to8i(ecx+4) = al; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_41FF90()
{
	push32(ecx);
	ecx = eax; //mov
	eax = ebx; //mov
	eax = ~eax;
	and_(eax, ecx);
	or_(eax, edx);
	cmp(eax, ecx);
	if (jnb())
		goto loc_41FFA2;
	inc(ebx);
	add(eax, ebx);
loc_41FFA2:
	pop32(ecx);
}
Fn(void) Game::_sub_420060()
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
Fn(void) Game::_sub_420080()
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
		goto loc_42009D;
	eax = edx; //mov
	pop32(ecx);
	return;
loc_42009D:
	neg(edx);
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4200B0()
{
	eax = to32i(eax+0x34); //mov
	_sub_490308(); return; //jmp
}
Fn(void) Game::_sub_420F80()
{
	cmp(edx, (int32_t)0x4700);
	if (jz())
		goto loc_420FA5;
	cmp(edx, (int32_t)8);
	if (jz())
	{
		_sub_4231D0();
		return;
	}
	cmp(edx, (int32_t)0x5300);
	if (jz())
	{
		_sub_4231D0();
		return;
	}
	test(dl, (int8_t)0xFF);
	if (jnz())
		goto loc_420FB0;
	xor_(eax, eax);
	return;
loc_420FA5:
	esp -= 4; _sub_423430(); esp += 4; //call
	eax = 1; //mov
	return;
loc_420FB0:
	and_(edx, (int32_t)0xFF);
	_sub_423290(); return; //jmp
}
Fn(void) Game::_sub_420FC0()
{
	_sub_423490(); return; //jmp
}
Fn(void) Game::_sub_420FD0()
{
	push32(ebx);
	push32(ecx);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_463DC0(); esp += 4; //call
	ebx = eax; //mov
	eax = ax; //cwde
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_421034;
	test(ecx, ecx);
	if (jz())
		goto loc_42102C;
	test(edx, edx);
	if (jz())
		goto loc_4211A2;
	cmp(ecx, (int32_t)8);
	if (jnz())
		goto loc_421038;
loc_420FFD:
	eax = bx; //movsx
	edx = ecx; //mov
	esp -= 4; _sub_420F80(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_421027;
	ah = 8; //mov
	edx = esp; //mov
	to8i(esp+1) = bl; //mov
	ebx = 4; //mov
	to8i(esp) = ah; //mov
	xor_(eax, eax);
	to16i(esp+2) = cx; //mov
	esp -= 4; _sub_464070(); esp += 4; //call
loc_421027:
	ecx = 1; //mov
loc_42102C:
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421034:
	xor_(ecx, ecx);
	goto loc_42102C;
loc_421038:
	cmp(ecx, (int32_t)0x5300);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x4700);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x20);
	if (jl())
		goto loc_421052;
	cmp(ecx, (int32_t)0x22);
	if (jle())
		goto loc_420FFD;
loc_421052:
	cmp(ecx, (int32_t)0x26);
	if (jl())
		goto loc_42105C;
	cmp(ecx, (int32_t)0x3B);
	if (jle())
		goto loc_420FFD;
loc_42105C:
	cmp(ecx, (int32_t)0x3D);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x3F);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x41);
	if (jl())
		goto loc_421070;
	cmp(ecx, (int32_t)0x7D);
	if (jle())
		goto loc_420FFD;
loc_421070:
	cmp(ecx, (int32_t)0x91);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x92);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xA1);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xB0);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xBF);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xC1);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xE1);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xC4);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xE4);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xC7);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xE7);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xC9);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xE9);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xCD);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xED);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xD1);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xF1);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xD3);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xF3);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xD6);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xF6);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xDA);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xFA);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xDC);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0xFC);
	if (jz())
		goto loc_420FFD;
	xor_(ecx, ecx);
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4211A2:
	cmp(ecx, (int32_t)0x20);
	if (jge())
		goto loc_420FFD;
	cmp(ecx, (int32_t)8);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x5300);
	if (jz())
		goto loc_420FFD;
	cmp(ecx, (int32_t)0x4700);
	if (jz())
		goto loc_420FFD;
	xor_(ecx, ecx);
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4211E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	to32i(esp+0x18) = eax; //mov
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jz())
		goto loc_4212AE;
	to32i(esp+0x20) = 2; //mov
loc_421202:
	xor_(ebx, ebx);
	esi = to32i(esp+0x20); //mov
	to32i(esp+0x14) = ebx; //mov
	test(esi, esi);
	if (jle())
		goto loc_4212A4;
	edi = (int32_t)(intptr_t)byte_512E84; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = edi; //mov
loc_421229:
	eax = to32i(esp+0x14); //mov
	edi = to32i(esp+4); //mov
	esp -= 4; _sub_4230A0(); esp += 4; //call
	edi = to32i(dword_51340C+edi); //mov
	sar(edi, (int32_t)0x10);
	to32i(esp+0x24) = eax; //mov
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_42125E;
	cmp(to32i(esp+0x18), (int32_t)0);
	if (jz())
		goto loc_42130F;
	cmp(to16i(word_513448+edi*2), (int16_t)0);
	if (jz())
		goto loc_4212BB;
loc_42125E:
	eax = to32i(esp+0x14); //mov
	esp -= 4; _sub_423430(); esp += 4; //call
loc_421267:
	edi = to32i(esp+4); //mov
	ebp = to32i(esp+8); //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ecx = to32i(esp+0x14); //mov
	ebx = to32i(esp+0x20); //mov
	add(edi, (int32_t)2);
	add(ebp, (int32_t)9);
	add(eax, (int32_t)4);
	add(edx, (int32_t)0x10);
	inc(ecx);
	to32i(esp+4) = edi; //mov
	to32i(esp+8) = ebp; //mov
	to32i(esp+0xC) = eax; //mov
	to32i(esp+0x10) = edx; //mov
	to32i(esp+0x14) = ecx; //mov
	cmp(ecx, ebx);
	if (jl())
		goto loc_421229;
loc_4212A4:
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4212AE:
	to32i(esp+0x20) = 8; //mov
	goto loc_421202;
loc_4212BB:
	cmp(to32i(esp+0x20), (int32_t)2);
	if (jnz())
		goto loc_421385;
	ebx = to32i(esp+0x10); //mov
	edx = 0x86; //mov
	eax = to32i(esp+8); //mov
loc_4212D3:
	ebx = to32i(dword_4D4C04+ebx); //mov
	esp -= 4; _sub_47BDC0(); esp += 4; //call
	ebx = to32i(esp+0x24); //mov
	edi = 0xFFFFFFFF; //mov
	esi = to32i(ebx); //mov
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_421306;
	esi = ebx; //mov
	ebx = to32i(esp+0x24); //mov
loc_4212F5:
	cmp(to8i(esi+4), (int8_t)0);
	if (jz())
		goto loc_4212FC;
	inc(edi);
loc_4212FC:
	inc(eax);
	ebp = to32i(ebx); //mov
	add(esi, (int32_t)0x26);
	cmp(eax, ebp);
	if (jl())
		goto loc_4212F5;
loc_421306:
	cmp(edi, (int32_t)4);
	if (jge())
		goto loc_42139B;
loc_42130F:
	xor_(edi, edi);
loc_421311:
	eax = to32i(esp+0x24); //mov
	cmp(edi, to32i(eax));
	if (jge())
		goto loc_421267;
	imul32(esi, edi, 0x26);
	add(eax, (int32_t)4);
	add(esi, eax);
	imul32(eax, edi, 0x14);
	ebx = to32i(esp+0x10); //mov
	to32i(esp+0x1C) = ebx; //mov
	ebx = to32i(esp+0xC); //mov
	xor_(ebp, ebp);
	to32i(esp) = ebx; //mov
	to32i(esp+0x28) = eax; //mov
loc_42133D:
	cmp(to32i(esp+0x18), (int32_t)0);
	if (jz())
		goto loc_4213B5;
	cmp(to32i(esp+0x20), (int32_t)2);
	if (jnz())
		goto loc_4213A3;
	ebx = to32i(esp+0x1C); //mov
	edx = 0xD6; //mov
	ebx = to32i(dword_4D4C04+ebx); //mov
	eax = esi; //mov
	add(ebx, ebp);
loc_42135E:
	esp -= 4; _sub_47BDC0(); esp += 4; //call
loc_421363:
	ebx = to32i(esp+0x28); //mov
	eax = to32i(esp+0x24); //mov
	add(esi, (int32_t)0x26);
	inc(edi);
	add(ebp, (int32_t)0xF);
	add(ebx, (int32_t)0x14);
	ecx = to32i(eax); //mov
	to32i(esp+0x28) = ebx; //mov
	cmp(edi, ecx);
	if (jge())
		goto loc_421267;
	goto loc_42133D;
loc_421385:
	ebx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edi+edi*8); //lea
	edx = 0x86; //mov
	add(eax, (int32_t)(intptr_t)byte_512E84);
	goto loc_4212D3;
loc_42139B:
	sub(edi, (int32_t)3);
	goto loc_421311;
loc_4213A3:
	ebx = to32i(esp); //mov
	edx = 0xD6; //mov
	eax = esi; //mov
	ebx = to32i(dword_4D4C04+ebx); //mov
	goto loc_42135E;
loc_4213B5:
	eax = to32i(esp+0x20); //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_4213EB;
	push32(eax);
	eax = to32i(esp+0x20); //mov
	ecx = to32i(esp+0x2C); //mov
	edx = 0xFD; //mov
	ax = to16i(word_4D4C24+eax); //mov
	push32(3);
	add(eax, ecx);
	ecx = 0xE; //mov
	ebx = ax; //movsx
	eax = esi; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_421363;
loc_4213EB:
	push32(2);
	ebx = to32i(esp+4); //mov
	ecx = 0xE; //mov
	edx = 0xFD; //mov
	eax = esi; //mov
	ebx = to32i(word_4D4C22+ebx); //mov
	push32(3);
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_421363;
}
Fn(void) Game::_sub_421420()
{
	_sub_4234C0(); return; //jmp
}
Fn(void) Game::_sub_421430()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x20);
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_42147F;
	ebx = 1; //mov
	esi = 0x25; //mov
	ecx = 8; //mov
	xor_(edi, edi);
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = esi; //mov
	to32i(esp+0xC) = edi; //mov
	to32i(esp+0x10) = edi; //mov
	to32i(esp+0x14) = edi; //mov
	to32i(esp+0x18) = edi; //mov
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp) = ecx; //mov
	eax = esp; //mov
	esp -= 4; _sub_423520(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42147F:
	push32(edx);
	edx = 2; //mov
	ecx = 0xA; //mov
	ebx = 0x25; //mov
	eax = 7; //mov
	xor_(esi, esi);
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = ecx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp+0x10) = esi; //mov
	to32i(esp+0x14) = esi; //mov
	to32i(esp+0x18) = esi; //mov
	edx = 1; //mov
	to32i(esp+0x1C) = eax; //mov
	to32i(esp+0x20) = edx; //mov
	pop32(edx);
	eax = esp; //mov
	esp -= 4; _sub_423520(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4214D0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = edx; //mov
	ebp = ebx; //mov
	to32i(esp) = edx; //mov
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_421534;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jnz())
		goto loc_421534;
	esi = 4; //mov
	ecx = 1; //mov
loc_4214FB:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jge())
		goto loc_421534;
	edx = to32i(esp); //mov
	xor_(eax, eax);
	al = to8i(edx+1); //mov
	eax = to32i(dword_51340C+eax*2); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jnz())
		goto loc_421523;
loc_42151D:
	inc(ecx);
	add(esi, (int32_t)4);
	goto loc_4214FB;
loc_421523:
	ebx = ebp; //mov
	edx = edi; //mov
	eax = to32i(dword_513080+esi); //mov
	esp -= 4; _sub_464070(); esp += 4; //call
	goto loc_42151D;
loc_421534:
	edx = to32i(esp); //mov
	ecx = to32i(esp); //mov
	xor_(eax, eax);
	edx = to32i(edx); //mov
	al = to8i(ecx+1); //mov
	sar(edx, (int32_t)0x10);
	ebx = 1; //mov
	esp -= 4; _sub_420F80(); esp += 4; //call
	to16i(word_513434) = bx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4215B0()
{
	test(eax, eax);
	if (jz())
		goto loc_4215CA;
	cmp(eax, (int32_t)1);
	if (jz())
		goto locret_4215C9;
	cmp(eax, (int32_t)0x80070057);
	if (jz())
		goto loc_4215C7;
	cmp(eax, (int32_t)0x80070005);
	if (jnz())
		goto loc_4215D0;
loc_4215C7:
	xor_(eax, eax);
locret_4215C9:
	return;
loc_4215CA:
	eax = 1; //mov
	return;
loc_4215D0:
	push32(ecx);
	push32(ebx);
	push32(edx);
	ecx = (int32_t)(intptr_t)aCNfs2seFront_7; //mov
	ebx = 0x774; //mov
	push32(aUnknownErrorAc);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	xor_(eax, eax);
	pop32(ebx);
	pop32(ecx);
}
Fn(void) Game::_sub_421600()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_4D4C44); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jz())
		goto loc_42164C;
	cmp(al, (int8_t)0x13);
	if (jz())
		goto loc_421655;
	cmp(al, (int8_t)0x11);
	if (jnb())
		goto loc_42167B;
	cmp(al, (int8_t)0x10);
	if (jnz())
		goto loc_4216D0;
	xor_(esi, esi);
	xor_(ebx, ebx);
loc_421626:
	ebp = to32i(dword_4E7348+esi); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_421643;
	push32(ebp);
	edx = to32i(ebp+0); //mov
	call(to32i(edx+0x1C));
	edx = ebx; //mov
	esp -= 4; _sub_4215B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_421643;
	inc(edi);
loc_421643:
	inc(ebx);
	add(esi, (int32_t)4);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_421626;
loc_42164C:
	eax = edi; //mov
loc_42164E:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421655:
	eax = 0x11; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	edx = eax; //mov
	eax = 0x12; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	add(edx, eax);
	eax = 0x10; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	add(eax, edx);
	goto loc_42164E;
loc_42167B:
	if (ja())
		goto loc_42168F;
	cmp(to32i(lpEventAttributes), (int32_t)0);
	if (jnz())
		goto loc_4216B4;
	eax = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42168F:
	cmp(al, (int8_t)0x12);
	if (jnz())
		goto loc_4216D0;
	ecx = to32i(dword_4D4C4C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_42164C;
	push32(ecx);
	edx = to32i(ecx); //mov
	ebx = al; //movsx
	call(to32i(edx+0x1C));
	edx = ebx; //mov
	esp -= 4; _sub_4215B0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4216B4:
	ebx = al; //movsx
	eax = to32i(lpEventAttributes); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x1C));
	edx = ebx; //mov
	esp -= 4; _sub_4215B0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4216D0:
	cmp(al, (int8_t)0x13);
	if (jg())
		goto loc_421700;
	ebx = al; //movsx
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	esi = to32i(dword_4E7348+eax); //mov
	test(esi, esi);
	if (jz())
		goto loc_42164C;
	push32(esi);
	edx = to32i(esi); //mov
	call(to32i(edx+0x1C));
	edx = ebx; //mov
	esp -= 4; _sub_4215B0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421700:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_421710()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to8i(esp) = al; //mov
	ebx = edx; //mov
	esp -= 4; _getHwnd(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_42175B;
	ah = to8i(esp); //mov
	cmp(ah, (int8_t)0x10);
	if (jge())
		goto loc_421764;
	esi = to32i(esp-3); //mov
	sar(esi, (int32_t)0x18);
	shl(esi, (int32_t)2);
	edi = to32i(dword_4E7348+esi); //mov
	test(edi, edi);
	if (jz())
		goto loc_421788;
	push32(ebx);
	edi = to32i(edi); //mov
	esp -= 4; _getHwnd(); esp += 4; //call
	push32(eax);
	ebp = to32i(dword_4E7348+esi); //mov
	push32(ebp);
	call(to32i(edi+0x34));
	test(eax, eax);
	if (jz())
		goto loc_421788;
	xor_(eax, eax);
loc_42175B:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421764:
	if (jnz())
		goto loc_421796;
	xor_(ch, ch);
	to8i(esp+4) = ch; //mov
loc_42176C:
	eax = to32i(esp+1); //mov
	edx = ebx; //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_421710(); esp += 4; //call
	inc(to32i(esp+4));
	cmp(to8i(esp+4), (int8_t)0x10);
	if (jl())
		goto loc_42176C;
loc_421788:
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421796:
	cmp(ah, (int8_t)0x11);
	if (jz())
		goto loc_4217C7;
	cmp(ah, (int8_t)0x12);
	if (jnz())
		goto loc_421788;
	eax = to32i(dword_4D4C4C); //mov
	push32(ebx);
	esi = to32i(eax); //mov
	esp -= 4; _getHwnd(); esp += 4; //call
	push32(eax);
	edx = to32i(dword_4D4C4C); //mov
	push32(edx);
	call(to32i(esi+0x34));
	test(eax, eax);
	if (jz())
		goto loc_421788;
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4217C7:
	eax = to32i(lpEventAttributes); //mov
	push32(ebx);
	esi = to32i(eax); //mov
	esp -= 4; _getHwnd(); esp += 4; //call
	push32(eax);
	ecx = to32i(lpEventAttributes); //mov
	push32(ecx);
	call(to32i(esi+0x34));
	test(eax, eax);
	if (jz())
		goto loc_421788;
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4217F0()
{
	push32(ebx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = to32i(esp+0x14); //mov
	edx = to32i(dword_4D4C5C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	xor_(dl, dl);
	ebx = 0x50; //mov
	byte_4E7391[eax] = dl; //mov
	add(eax, (int32_t)(intptr_t)dword_4E7388);
	edx = (int32_t)(intptr_t)(esi+0x12C); //lea
	add(eax, (int32_t)9);
	esp -= 4; _strncpy_(); esp += 4; //call
	edx = to32i(dword_4D4C5C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	xor_(bl, bl);
	xor_(eax, eax);
	byte_4E73E0[edx] = bl; //mov
	ax = to16i(esi+0x24); //mov
	sar(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF);
	ecx = to32i(esp+0x18); //mov
	cmp(al, (int8_t)4);
	if (jb())
		goto loc_4218A3;
	if (ja())
		goto loc_421896;
	byte_4E7390[edx] = 4; //mov
loc_421873:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	add(esi, (int32_t)4);
	push32(esi);
	edx = to32i(ecx); //mov
	push32(ecx);
	call(to32i(edx+0xC));
	test(eax, eax);
	if (jz())
		goto loc_4218C1;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_421896:
	cmp(al, (int8_t)6);
	if (jnz())
		goto loc_4218A3;
	byte_4E7390[edx] = 2; //mov
	goto loc_421873;
loc_4218A3:
	edx = to32i(dword_4D4C5C); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	byte_4E7390[eax*4] = 1; //mov
	goto loc_421873;
loc_4218C1:
	push32(dword_4C4EA0);
	edx = to32i(esp+4); //mov
	eax = to32i(esp+4); //mov
	push32(edx);
	eax = to32i(eax); //mov
	call(to32i(eax+0x2C));
	test(eax, eax);
	if (jnz())
		goto loc_42191B;
	eax = to32i(dword_4D4C5C); //mov
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4E7348);
	push32(eax);
	edx = to32i(esp+4); //mov
	push32(dword_4E27E8);
	ecx = to32i(esp+8); //mov
	edx = to32i(edx); //mov
	push32(ecx);
	call(to32i(edx));
	test(eax, eax);
	if (jnz())
		goto loc_421935;
	eax = to32i(dword_4D4C58+1); //mov
	edx = 9; //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_421710(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_421953;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_42191B:
	ebp = to32i(esp); //mov
	eax = to32i(esp); //mov
	push32(ebp);
	eax = to32i(eax); //mov
	call(to32i(eax+8));
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_421935:
	push32(edi);
	edi = to32i(esp+4); //mov
	eax = to32i(esp+4); //mov
	push32(edi);
	eax = to32i(eax); //mov
	call(to32i(eax+8));
	eax = 1; //mov
	pop32(edi);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
loc_421953:
	ebx = to32i(esp); //mov
	eax = to32i(esp); //mov
	push32(ebx);
	eax = to32i(eax); //mov
	call(to32i(eax+8));
	eax = 1; //mov
	add(to32i(dword_4D4C5C), eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(esi);
	pop32(ebx);
	esp += 8; return;
}
Fn(void) Game::_sub_421980()
{
	push32(esi);
	push32(ebp);
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jz())
		goto loc_421A1D;
	push32(edx);
	push32(ecx);
	push32(ebx);
	cmp(to32i(lpEventAttributes), (int32_t)0);
	if (jz())
		goto loc_4219CD;
	ebx = to32i(hObject); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4219AD;
	push32(ebx);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
loc_4219AD:
	push32(edi);
	eax = to32i(lpEventAttributes); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x20));
	eax = to32i(lpEventAttributes); //mov
	push32(eax);
	edx = to32i(eax); //mov
	xor_(edi, edi);
	call(to32i(edx+8));
	to32i(lpEventAttributes) = edi; //mov
	pop32(edi);
loc_4219CD:
	ebp = to32i(dword_4D4C4C); //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_421A2E;
loc_4219D7:
	xor_(ebx, ebx);
loc_4219D9:
	edx = to32i(dword_4E7348+ebx); //mov
	test(edx, edx);
	if (jz())
		goto loc_4219FF;
	eax = edx; //mov
	push32(eax);
	edx = to32i(edx); //mov
	call(to32i(edx+0x20));
	eax = to32i(dword_4E7348+ebx); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+8));
	xor_(ecx, ecx);
	to32i(dword_4E7348+ebx) = ecx; //mov
loc_4219FF:
	add(ebx, (int32_t)4);
	cmp(ebx, (int32_t)0x40);
	if (jnz())
		goto loc_4219D9;
	eax = to32i(dword_4D4C44); //mov
	push32(eax);
	edx = to32i(eax); //mov
	xor_(ebx, ebx);
	call(to32i(edx+8));
	to32i(dword_4D4C44) = ebx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
loc_421A1D:
	xor_(esi, esi);
	to32i(dword_4D4C5C) = esi; //mov
	to32i(dword_4D4C58) = esi; //mov
	pop32(ebp);
	pop32(esi);
	return;
loc_421A2E:
	push32(ebp);
	edx = to32i(ebp+0); //mov
	call(to32i(edx+0x20));
	eax = to32i(dword_4D4C4C); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+8));
	xor_(eax, eax);
	to32i(dword_4D4C4C) = eax; //mov
	goto loc_4219D7;
}
Fn(void) Game::_sub_421A50()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x54);
	esi = edx; //mov
	to32i(esp+0x50) = ebx; //mov
	ebp = ecx; //mov
	ebx = al; //movsx
	edi = (int32_t)(intptr_t)(ebx*4+0); //lea
	edx = to32i(dword_4E7348+edi); //mov
	test(edx, edx);
	if (jnz())
		goto loc_421A93;
	ecx = to32i(esp+0x74); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_421A8F;
loc_421A7A:
	test(esi, esi);
	if (jz())
		goto loc_421A84;
	to32i(esi) = 0; //mov
loc_421A84:
	xor_(eax, eax);
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
loc_421A8F:
	to32i(ecx) = edx; //mov
	goto loc_421A7A;
loc_421A93:
	eax = edx; //mov
	push32(eax);
	edx = to32i(edx); //mov
	call(to32i(edx+0x64));
	test(eax, eax);
	if (jz())
		goto loc_421ABF;
	cmp(eax, (int32_t)0x8007001E);
	if (jz())
		goto loc_421AAD;
	cmp(eax, (int32_t)0x8007000C);
	if (jnz())
		goto loc_421A84;
loc_421AAD:
	eax = ebx; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
loc_421ABF:
	eax = to32i(dword_4E7348+edi); //mov
	edi = esp; //mov
	push32(edi);
	push32(0x50);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0x24));
	test(eax, eax);
	if (jz())
		goto loc_421AED;
	cmp(eax, (int32_t)0x8007001E);
	if (jnz())
		goto loc_421A84;
	eax = ebx; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
loc_421AED:
	ecx = to32i(esp+0x50); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_421AFA;
	eax = to32i(esp); //mov
	to32i(ecx) = eax; //mov
loc_421AFA:
	test(ebp, ebp);
	if (jz())
		goto loc_421B05;
	eax = to32i(esp+4); //mov
	to32i(ebp+0) = eax; //mov
loc_421B05:
	ebx = to32i(esp+0x64); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_421B13;
	eax = to32i(esp+8); //mov
	to32i(ebx) = eax; //mov
loc_421B13:
	edi = to32i(esp+0x68); //mov
	test(edi, edi);
	if (jz())
		goto loc_421B21;
	eax = to32i(esp+0x14); //mov
	to32i(edi) = eax; //mov
loc_421B21:
	ebp = to32i(esp+0x6C); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_421B30;
	eax = to32i(esp+0x18); //mov
	to32i(ebp+0) = eax; //mov
loc_421B30:
	cmp(to32i(esp+0x70), (int32_t)0);
	if (jz())
		goto loc_421B41;
	edx = to32i(esp+0x70); //mov
	eax = to32i(esp+0x1C); //mov
	to32i(edx) = eax; //mov
loc_421B41:
	edx = to32i(esp+0x74); //mov
	test(edx, edx);
	if (jz())
		goto loc_421B4F;
	eax = to32i(esp+0x20); //mov
	to32i(edx) = eax; //mov
loc_421B4F:
	test(esi, esi);
	if (jz())
		goto loc_421B77;
	to32i(esi) = 0; //mov
	xor_(eax, eax);
loc_421B5B:
	test(to8i(esp+eax+0x30), (int8_t)0x80);
	if (jz())
		goto loc_421B71;
	edx = 1; //mov
	cl = al; //mov
	ebx = to32i(esi); //mov
	shl(edx, cl);
	or_(ebx, edx);
	to32i(esi) = ebx; //mov
loc_421B71:
	inc(eax);
	cmp(eax, (int32_t)0x20);
	if (jl())
		goto loc_421B5B;
loc_421B77:
	eax = 1; //mov
	add(esp, (int32_t)0x54);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
}
Fn(void) Game::_sub_421B90()
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
	eax = al; //movsx
	esp -= 4; _sub_421A50(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_421BBD;
	eax = 1; //mov
loc_421BBD:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x14; return;
}
Fn(void) Game::_sub_421BD0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18C);
	to8i(esp+0x188) = al; //mov
	ebp = edx; //mov
	to32i(esp+0x180) = ebx; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x168); //lea
	esi = (int32_t)(intptr_t)dword_421594; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(edx, edx);
	if (jnz())
		goto loc_421C6D;
loc_421C01:
	edx = to32i(esp+0x180); //mov
	test(edx, edx);
	if (jz())
		goto loc_421C12;
	to32i(edx) = 0; //mov
loc_421C12:
	cmp(to8i(esp+0x188), (int8_t)0x10);
	if (jnz())
		goto loc_421C75;
	to32i(esp+0x184) = 0xF; //mov
loc_421C27:
	eax = to32i(esp+0x181); //mov
	ebx = to32i(esp+0x180); //mov
	edx = ebp; //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_421BD0(); esp += 4; //call
	eax = to32i(esp+0x184); //mov
	dec(eax);
	to32i(esp+0x184) = eax; //mov
	test(eax, eax);
	if (jg())
		goto loc_421C27;
	ebx = to32i(esp+0x180); //mov
	edx = ebp; //mov
	xor_(eax, eax);
	esp -= 4; _sub_421BD0(); esp += 4; //call
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_421C6D:
	to32i(edx) = 0; //mov
	goto loc_421C01;
loc_421C75:
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jz())
		goto loc_421CA5;
loc_421C7E:
	edx = to32i(esp+0x185); //mov
	sar(edx, (int32_t)0x18);
	ecx = (int32_t)(intptr_t)(edx*4+0); //lea
	cmp(to32i(dword_4E7348+ecx), (int32_t)0);
	if (jnz())
		goto loc_421CC0;
	xor_(eax, eax);
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_421CA5:
	esp -= 4; _sub_422530(); esp += 4; //call
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jnz())
		goto loc_421C7E;
loc_421CB3:
	xor_(eax, eax);
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_421CC0:
	eax = edx; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	cmp(to32i(dword_4E7388+eax), (int32_t)0);
	if (jz())
		goto loc_421D62;
loc_421CE5:
	test(ebp, ebp);
	if (jz())
		goto loc_421D0B;
	edx = to32i(esp+0x185); //mov
	sar(edx, (int32_t)0x18);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_4E7388+eax*4); //mov
	to32i(ebp+0) = eax; //mov
loc_421D0B:
	ecx = to32i(esp+0x180); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_421D37;
	edx = to32i(esp+0x185); //mov
	sar(edx, (int32_t)0x18);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	eax = to32i(dword_4E738C+eax*4); //mov
	to32i(ecx) = eax; //mov
loc_421D37:
	edx = to32i(esp+0x185); //mov
	sar(edx, (int32_t)0x18);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4E7388);
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_421D62:
	cmp(to32i(dword_4E738C+eax), (int32_t)0);
	if (jnz())
		goto loc_421CE5;
	ebx = 0x2C; //mov
	eax = to32i(dword_4E7348+ecx); //mov
	ecx = (int32_t)(intptr_t)(esp+0x13C); //lea
	to32i(esp+0x13C) = ebx; //mov
	push32(ecx);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0xC));
	test(eax, eax);
	if (jnz())
		goto loc_421CB3;
	test(to8i(esp+0x141), (int8_t)1);
	if (jz())
		goto loc_421DC0;
	ecx = to32i(esp+0x185); //mov
	eax = 1; //mov
	sar(ecx, (int32_t)0x18);
	esi = to32i(dword_4D4C58); //mov
	shl(eax, cl);
	or_(esi, eax);
	to32i(dword_4D4C58) = esi; //mov
loc_421DC0:
	edi = 0x13C; //mov
	edx = to32i(esp+0x14C); //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	to32i(esp+0x184) = eax; //mov
	to32i(esp) = edi; //mov
	test(edx, edx);
	if (jbe())
		goto loc_421E47;
	esi = 0x30; //mov
loc_421DE3:
	cmp(ebx, (int32_t)0x20);
	if (jge())
		goto loc_421E47;
	push32(1);
	edi = to32i(esp+0x189); //mov
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(esi);
	sar(edi, (int32_t)0x18);
	push32(ecx);
	eax = to32i(dword_4E7348+edi*4); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x38));
	test(eax, eax);
	if (jnz())
		goto loc_421E33;
	imul32(eax, edi, 0x5C);
	edx = to32i(dword_4E7388+eax); //mov
	inc(edx);
	to32i(dword_4E7388+eax) = edx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_421E2C;
	to32i(ebp+0) = edx; //mov
loc_421E2C:
	inc(to32i(esp+0x184));
loc_421E33:
	eax = to32i(esp+0x184); //mov
	edi = to32i(esp+0x14C); //mov
	inc(esi);
	inc(ebx);
	cmp(eax, edi);
	if (jb())
		goto loc_421DE3;
loc_421E47:
	eax = to32i(esp+0x148); //mov
	xor_(ebp, ebp);
	xor_(ebx, ebx);
	to32i(esp+0x184) = ebp; //mov
	test(eax, eax);
	if (jbe())
		goto loc_421ED6;
	xor_(esi, esi);
loc_421E63:
	cmp(ebx, (int32_t)6);
	if (jge())
		goto loc_421ED6;
	ebp = to32i(esp+0x185); //mov
	push32(1);
	edx = to32i(esp+esi+0x16C); //mov
	sar(ebp, (int32_t)0x18);
	push32(edx);
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = to32i(dword_4E7348+ebp*4); //mov
	push32(edx);
	ecx = to32i(eax); //mov
	push32(eax);
	call(to32i(ecx+0x38));
	test(eax, eax);
	if (jnz())
		goto loc_421EC0;
	imul32(ebp, 0x5C);
	eax = 1; //mov
	cl = bl; //mov
	shl(eax, cl);
	ecx = to32i(dword_4E738C+ebp); //mov
	or_(ecx, eax);
	edi = to32i(esp+0x180); //mov
	to32i(dword_4E738C+ebp) = ecx; //mov
	test(edi, edi);
	if (jz())
		goto loc_421EB9;
	to32i(edi) = ecx; //mov
loc_421EB9:
	inc(to32i(esp+0x184));
loc_421EC0:
	eax = to32i(esp+0x184); //mov
	edi = to32i(esp+0x148); //mov
	add(esi, (int32_t)4);
	inc(ebx);
	cmp(eax, edi);
	if (jb())
		goto loc_421E63;
loc_421ED6:
	edx = to32i(esp+0x185); //mov
	sar(edx, (int32_t)0x18);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, (int32_t)(intptr_t)dword_4E7388);
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_421F10()
{
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jz())
		goto loc_421F7C;
	cmp(to32i(dword_4D4C64), (int32_t)0);
	if (jnz())
		goto loc_421F8D;
loc_421F22:
	push32(edi);
	push32(esi);
	esi = 1; //mov
	edi = to32i(dword_4D4C5C); //mov
	to32i(dword_4D4C64) = esi; //mov
	test(edi, edi);
	if (jnz())
		goto loc_421F61;
	push32(edx);
	push32(ecx);
	push32(ebx);
	push32(esi);
	eax = to32i(dword_4D4C44); //mov
	push32(eax);
	push32(sub_4217F0);
	push32(4);
	edx = to32i(eax); //mov
	push32(eax);
	xor_(ebx, ebx);
	call(to32i(edx+0x10));
	eax = 0x10; //mov
	xor_(edx, edx);
	esp -= 4; _sub_421BD0(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
loc_421F61:
	cmp(to32i(dword_4D4C5C), (int32_t)0);
	if (jz())
		goto loc_421F74;
	eax = 0x10; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
loc_421F74:
	eax = to32i(dword_4D4C5C); //mov
	pop32(esi);
	pop32(edi);
	return;
loc_421F7C:
	esp -= 4; _sub_422530(); esp += 4; //call
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jnz())
		goto loc_421F22;
	xor_(eax, eax);
	return;
loc_421F8D:
	eax = to32i(dword_4D4C5C); //mov
}
Fn(void) Game::_sub_421FA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	dl = al; //mov
	cmp(al, (int8_t)0x13);
	if (jz())
		goto loc_421FC5;
loc_421FAA:
	cmp(dl, (int8_t)0x10);
	if (jnz())
		goto loc_421FE5;
	xor_(edx, edx);
loc_421FB1:
	eax = dl; //movsx
	inc(edx);
	esp -= 4; _sub_421FA0(); esp += 4; //call
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_421FB1;
loc_421FC0:
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421FC5:
	eax = 0x11; //mov
	esp -= 4; _sub_421FA0(); esp += 4; //call
	eax = 0x12; //mov
	esp -= 4; _sub_421FA0(); esp += 4; //call
	eax = 0x10; //mov
	esp -= 4; _sub_421FA0(); esp += 4; //call
	goto loc_421FAA;
loc_421FE5:
	cmp(dl, (int8_t)0x11);
	if (jnz())
		goto loc_421FFF;
	esi = to32i(lpEventAttributes); //mov
	test(esi, esi);
	if (jz())
		goto loc_421FC0;
	push32(esi);
	edx = to32i(esi); //mov
	call(to32i(edx+0x20));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_421FFF:
	cmp(dl, (int8_t)0x12);
	if (jnz())
		goto loc_422019;
	ebx = to32i(dword_4D4C4C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_421FC0;
	push32(ebx);
	edx = to32i(ebx); //mov
	call(to32i(edx+0x20));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422019:
	if (jnz())
		goto loc_422030;
	ecx = to32i(dword_4D4C4C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_421FC0;
	push32(ecx);
	edx = to32i(ecx); //mov
	call(to32i(edx+0x20));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422030:
	test(dl, dl);
	if (jl())
		goto loc_421FC0;
	cmp(dl, (int8_t)0x10);
	if (jge())
		goto loc_421FC0;
	eax = dl; //movsx
	shl(eax, (int32_t)2);
	edx = to32i(dword_4E7348+eax); //mov
	test(edx, edx);
	if (jz())
		goto loc_421FC0;
	eax = edx; //mov
	push32(eax);
	edx = to32i(edx); //mov
	call(to32i(edx+0x20));
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422060()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x204);
	ebp = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	push32(0);
	ecx = (int32_t)(intptr_t)(esp+0x204); //lea
	push32(ecx);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	edx = 0x20; //mov
	push32(ecx);
	eax = to32i(lpEventAttributes); //mov
	to32i(esp+0x20C) = edx; //mov
	push32(0x10);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0x28));
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_422122;
	ecx = to32i(esp+0x200); //mov
	test(ecx, ecx);
	if (jbe())
		goto loc_4220E2;
	ebx = ecx; //mov
	shl(ebx, (int32_t)4);
loc_4220B2:
	ecx = to32i(esp+eax); //mov
	cmp(ecx, (int32_t)0xC);
	if (jnz())
		goto loc_422187;
	test(to8i(esp+eax+4), (int8_t)0x80);
	if (jz())
		goto loc_422178;
	ch = to8i(dword_4E8950); //mov
	or_(ch, (int8_t)1);
	or_(dl, (int8_t)1);
loc_4220D5:
	to8i(dword_4E8950) = ch; //mov
loc_4220DB:
	add(eax, (int32_t)0x10);
	cmp(eax, ebx);
	if (jl())
		goto loc_4220B2;
loc_4220E2:
	test(ebp, ebp);
	if (jz())
		goto loc_4220F0;
	eax = to32i(dword_4E8950); //mov
	or_(eax, edx);
	to32i(ebp+0) = eax; //mov
loc_4220F0:
	test(edi, edi);
	if (jz())
		goto loc_4220FB;
	eax = to32i(mousePositionX); //mov
	to32i(edi) = eax; //mov
loc_4220FB:
	test(esi, esi);
	if (jz())
		goto loc_422106;
	eax = to32i(mousePositionY); //mov
	to32i(esi) = eax; //mov
loc_422106:
	cmp(to32i(off_4DAC4C), (int32_t)0);
	if (jz())
		goto loc_422117;
	test(edx, edx);
	if (jnz())
		goto loc_4222A4;
loc_422117:
	add(esp, (int32_t)0x204);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_422122:
	xor_(ebx, ebx);
	to32i(dword_4E8950) = ebx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_422131;
	to32i(ebp+0) = ebx; //mov
loc_422131:
	test(edi, edi);
	if (jz())
		goto loc_42213C;
	eax = to32i(mousePositionX); //mov
	to32i(edi) = eax; //mov
loc_42213C:
	test(esi, esi);
	if (jz())
		goto loc_422147;
	eax = to32i(mousePositionY); //mov
	to32i(esi) = eax; //mov
loc_422147:
	cmp(edx, (int32_t)0x80040207);
	if (jb())
		goto loc_422117;
	if (jbe())
		goto loc_422117;
	cmp(edx, (int32_t)0x8007000C);
	if (jb())
		goto loc_422117;
	if (jbe())
		goto loc_422163;
	cmp(edx, (int32_t)0x8007001E);
	if (jnz())
		goto loc_422117;
loc_422163:
	eax = 0x11; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
	add(esp, (int32_t)0x204);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_422178:
	and_(to32i(dword_4E8950), (int32_t)0xFE);
	goto loc_4220DB;
loc_422187:
	cmp(ecx, (int32_t)0xD);
	if (jnz())
		goto loc_4221B3;
	test(to8i(esp+eax+4), (int8_t)0x80);
	if (jz())
		goto loc_4221A4;
	ch = to8i(dword_4E8950); //mov
	or_(ch, (int8_t)2);
	or_(dl, (int8_t)2);
	goto loc_4220D5;
loc_4221A4:
	and_(to32i(dword_4E8950), (int32_t)0xFD);
	goto loc_4220DB;
loc_4221B3:
	cmp(ecx, (int32_t)0xE);
	if (jnz())
		goto loc_4221DF;
	test(to8i(esp+eax+4), (int8_t)0x80);
	if (jz())
		goto loc_4221D0;
	ch = to8i(dword_4E8950); //mov
	or_(ch, (int8_t)4);
	or_(dl, (int8_t)4);
	goto loc_4220D5;
loc_4221D0:
	and_(to32i(dword_4E8950), (int32_t)0xFB);
	goto loc_4220DB;
loc_4221DF:
	cmp(ecx, (int32_t)0xF);
	if (jnz())
		goto loc_42220B;
	test(to8i(esp+eax+4), (int8_t)0x80);
	if (jz())
		goto loc_4221FC;
	ch = to8i(dword_4E8950); //mov
	or_(ch, (int8_t)8);
	or_(dl, (int8_t)8);
	goto loc_4220D5;
loc_4221FC:
	and_(to32i(dword_4E8950), (int32_t)0xF7);
	goto loc_4220DB;
loc_42220B:
	test(ecx, ecx);
	if (jnz())
		goto loc_422255;
	ecx = to32i(esp+eax+4); //mov
	add(to32i(mousePositionX), ecx);
	ecx = to32i(mousePositionX); //mov
	cmp(ecx, to32i(dword_4E8938));
	if (jge())
		goto loc_422238;
	ecx = to32i(dword_4E8938); //mov
	to32i(mousePositionX) = ecx; //mov
	goto loc_4220DB;
loc_422238:
	cmp(ecx, to32i(dword_4E8940));
	if (jle())
		goto loc_4220DB;
	ecx = to32i(dword_4E8940); //mov
	to32i(mousePositionX) = ecx; //mov
	goto loc_4220DB;
loc_422255:
	cmp(ecx, (int32_t)4);
	if (jnz())
		goto loc_4220DB;
	ecx = to32i(esp+eax+4); //mov
	add(to32i(mousePositionY), ecx);
	ecx = to32i(mousePositionY); //mov
	cmp(ecx, to32i(dword_4E893C));
	if (jge())
		goto loc_422287;
	ecx = to32i(dword_4E893C); //mov
	to32i(mousePositionY) = ecx; //mov
	goto loc_4220DB;
loc_422287:
	cmp(ecx, to32i(dword_4E8944));
	if (jle())
		goto loc_4220DB;
	ecx = to32i(dword_4E8944); //mov
	to32i(mousePositionY) = ecx; //mov
	goto loc_4220DB;
loc_4222A4:
	eax = to32i(dword_4E8950); //mov
	or_(eax, edx);
	call(to32i(off_4DAC4C));
	add(esp, (int32_t)0x204);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4222C0()
{
	to32i(dword_4E8938) = eax; //mov
	to32i(dword_4E893C) = edx; //mov
	to32i(dword_4E8940) = ebx; //mov
	edx = to32i(mousePositionY); //mov
	eax = to32i(mousePositionX); //mov
	to32i(dword_4E8944) = ecx; //mov
	_sub_4222F0(); return; //jmp
}
Fn(void) Game::_sub_4222F0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebx = edx; //mov
	push32(0);
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	push32(ecx);
	edx = 0xFFFFFFFF; //mov
	push32(0);
	eax = to32i(lpEventAttributes); //mov
	to32i(esp+0xC) = edx; //mov
	push32(0x10);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0x28));
	ecx = to32i(dword_4E8938); //mov
	cmp(esi, ecx);
	if (jl())
		goto loc_422356;
	edi = to32i(dword_4E8940); //mov
	cmp(esi, edi);
	if (jle())
		goto loc_42235E;
	to32i(mousePositionX) = edi; //mov
loc_422335:
	ebp = to32i(dword_4E893C); //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_422366;
	eax = to32i(dword_4E8944); //mov
	cmp(ebx, eax);
	if (jle())
		goto loc_42236E;
	to32i(mousePositionY) = eax; //mov
loc_42234D:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_422356:
	to32i(mousePositionX) = ecx; //mov
	goto loc_422335;
loc_42235E:
	to32i(mousePositionX) = esi; //mov
	goto loc_422335;
loc_422366:
	to32i(mousePositionY) = ebp; //mov
	goto loc_42234D;
loc_42236E:
	to32i(mousePositionY) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_422380()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x14);
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jz())
		goto loc_4223D7;
loc_422391:
	ebx = to32i(lpEventAttributes); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4223E9;
loc_42239B:
	cmp(to32i(lpEventAttributes), (int32_t)0);
	if (jz())
		goto loc_4223AE;
	eax = 0x11; //mov
	esp -= 4; _sub_421600(); esp += 4; //call
loc_4223AE:
	ecx = 0x1E0; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_4E8950) = ebx; //mov
	ebx = 0x280; //mov
	esp -= 4; _sub_4222C0(); esp += 4; //call
	eax = 1; //mov
loc_4223CE:
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4223D7:
	esp -= 4; _sub_422530(); esp += 4; //call
	cmp(to32i(dword_4D4C44), (int32_t)0);
	if (jnz())
		goto loc_422391;
	xor_(eax, eax);
	goto loc_4223CE;
loc_4223E9:
	push32(ebx);
	push32(lpEventAttributes);
	eax = to32i(dword_4D4C44); //mov
	push32(dword_4E27D8);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0xC));
	test(eax, eax);
	if (jz())
		goto loc_42240E;
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42240E:
	push32(dword_4C4BC0);
	eax = to32i(lpEventAttributes); //mov
	push32(eax);
	edx = to32i(eax); //mov
	call(to32i(edx+0x2C));
	test(eax, eax);
	if (jz())
		goto loc_42242D;
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_42242D:
	edx = 5; //mov
	eax = 0x11; //mov
	esp -= 4; _sub_421710(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4223CE;
	push32(ebx);
	push32(ebx);
	push32(ebx);
	push32(ebx);
	eax = CreateEventA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	to32i(hObject) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4223CE;
	push32(eax);
	edx = to32i(lpEventAttributes); //mov
	push32(edx);
	ecx = to32i(edx); //mov
	call(to32i(ecx+0x30));
	test(eax, eax);
	if (jnz())
		goto loc_42249F;
	esi = 0x14; //mov
	edi = 0x10; //mov
	edx = 0x20; //mov
	ecx = esp; //mov
	eax = to32i(lpEventAttributes); //mov
	to32i(esp+8) = ebx; //mov
	to32i(esp+0xC) = ebx; //mov
	to32i(esp) = esi; //mov
	push32(ecx);
	to32i(esp+8) = edi; //mov
	to32i(esp+0x14) = edx; //mov
	push32(1);
	edx = to32i(eax); //mov
	push32(eax);
	call(to32i(edx+0x18));
	test(eax, eax);
	if (jz())
		goto loc_4224AA;
loc_42249F:
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4224AA:
	push32(0x20);
	esp -= 4; _sub_482360(); esp += 4; //call
	push32(sub_4224D0);
	push32(0x20);
	to32i(dword_4D4C54) = eax; //mov
	esp -= 4; _sub_482270(); esp += 4; //call
	goto loc_42239B;
}
Fn(void) Game::_sub_4224D0()
{
	push32(ebp);
	cmp(to32i(dword_4D4C54), (int32_t)0);
	if (jnz())
		goto loc_4224F5;
loc_4224DA:
	eax = 1; //mov
	pop32(ebp);
	esp += 0x18; return;
loc_4224F5:
	push32(edi);
	push32(esi);
	push32(ebx);
	ecx = to32i(esp+0x28); //mov
	push32(ecx);
	ebx = to32i(esp+0x28); //mov
	push32(ebx);
	esi = to32i(esp+0x28); //mov
	push32(esi);
	edi = to32i(esp+0x28); //mov
	push32(edi);
	ebp = to32i(esp+0x28); //mov
	push32(ebp);
	eax = to32i(esp+0x28); //mov
	push32(eax);
	call(to32i(dword_4D4C54));
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	goto loc_4224DA;
}
Fn(void) Game::_sub_422530()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D4C44); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4225A4;
	xor_(eax, eax);
	xor_(ecx, ecx);
loc_422540:
	add(eax, (int32_t)0x5C);
	to32i(dword_4E732C+eax) = ecx; //mov
	to32i(dword_4E7330+eax) = ecx; //mov
	byte_4E7334[eax] = cl; //mov
	add(edx, (int32_t)4);
	byte_4E7335[eax] = cl; //mov
	to32i(dword_4E7344+edx) = ecx; //mov
	cmp(edx, (int32_t)0x40);
	if (jnz())
		goto loc_422540;
	xor_(eax, eax);
loc_42256B:
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(dword_4E88BC+eax) = ecx; //mov
	cmp(eax, (int32_t)0x78);
	if (jnz())
		goto loc_42256B;
	push32(ecx);
	push32(dword_4D4C44);
	push32(0x500);
	push32(ecx);
	to32i(dword_4D4C58) = ecx; //mov
	to32i(dword_4D4C5C) = ecx; //mov
	eax = GetModuleHandleA_wrap(to32i(esp + 0)); esp += 4;
	push32(eax);
	eax = DirectInputCreateA_wrap((int32_t)(intptr_t)this, to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	test(eax, eax);
	if (jnz())
		goto loc_4225A7;
loc_4225A4:
	pop32(edx);
	pop32(ecx);
	return;
loc_4225A7:
	push32(edi);
	xor_(edi, edi);
	to32i(dword_4D4C44) = edi; //mov
	pop32(edi);
	pop32(edx);
	pop32(ecx);
}
