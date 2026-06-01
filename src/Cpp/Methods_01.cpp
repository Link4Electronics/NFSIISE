#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_401080()
{
	to32i(dword_4D1FEC) = 0x15E; //mov
}
Fn(void) Game::_sub_401090()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x78);
	edi = eax; //mov
	ecx = edx; //mov
	ebx = 1; //mov
	xor_(edx, edx);
	xor_(esi, esi);
	xor_(eax, eax);
	to16i(esp+0x3C) = dx; //mov
	to32i(esp+0x40) = ebx; //mov
	to32i(esp+0x44) = edx; //mov
	to32i(esp+0x64) = esi; //mov
	to32i(dword_4D2310) = eax; //mov
	xor_(edx, edx);
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = edx; //mov
	edx = 0xFFFFFFFF; //mov
	xor_(eax, eax);
loc_4010D3:
	to16i(esp+0x5C) = dx; //mov
	edx = ax; //movsx
	cmp(to32i(edi+edx*4), (int32_t)0);
	if (jnz())
		goto loc_401847;
	test(cx, cx);
	if (jbe())
		goto loc_401852;
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_4010F9;
	ebp = (int32_t)(intptr_t)aMemc; //mov
loc_4010F9:
	eax = to32i(dword_4D40B8); //mov
	edx = ebp; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	cx = to16i(eax+4); //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	xor_(ebx, ebx);
	sar(eax, (int32_t)0x14);
	edx = 0x1E0; //mov
	to16i(esp+0x54) = ax; //mov
	eax = cx; //movsx
	esp -= 4; _sub_482474(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	xor_(ebx, ebx);
	eax = to32i(esp+0x52); //mov
	edx = to32i(edx+0x20); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x10) = edx; //mov
	edx = eax; //mov
	eax = to32i(esp+0x10); //mov
	to16i(esp+0x38) = cx; //mov
	esp -= 4; _sub_4850B0(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	test(cx, cx);
	if (jl())
		goto loc_401239;
	add(ecx, (int32_t)0x1E8);
	to32i(esp+0x28) = ecx; //mov
loc_401173:
	esp -= 4; _sub_428A20(); esp += 4; //call
	ebx = to32i(esp+0x52); //mov
	eax = to32i(esp+0xC); //mov
	edx = 0xC00; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)0x10);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	ebx = to32i(esp+0x36); //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aBsld; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	ecx = 0x62; //mov
	to16i(esp+0x68) = ax; //mov
	eax = to32i(esp+0x28); //mov
	to16i(esp+0x18) = cx; //mov
	to16i(esp+0x70) = ax; //mov
loc_4011C4:
	edx = to32i(esp+0x66); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edi);
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_401214;
	push32(0);
	ebx = to32i(esp+0x1A); //mov
	edx = to32i(esp+0x72); //mov
	ecx = 0x12; //mov
	eax = to32i(eax); //mov
	push32(0);
	sar(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = to32i(esp+0x18); //mov
	ebx = to32i(esp+0x68); //mov
	add(edx, (int32_t)0x16);
	inc(ebx);
	to16i(esp+0x18) = dx; //mov
	to16i(esp+0x68) = bx; //mov
	cmp(bx, (int16_t)8);
	if (jl())
		goto loc_4011C4;
loc_401214:
	esp -= 4; _sub_405C70(); esp += 4; //call
	ebx = to32i(esp+0x28); //mov
	ecx = to32i(esp+0x38); //mov
	sub(ebx, (int32_t)8);
	sub(ecx, (int32_t)8);
	to32i(esp+0x28) = ebx; //mov
	to16i(esp+0x38) = cx; //mov
	test(cx, cx);
	if (jge())
		goto loc_401173;
loc_401239:
	ebx = 0x294; //mov
	edx = 0x28; //mov
	to16i(esp+0x74) = bx; //mov
	to16i(esp+0x2C) = dx; //mov
loc_40124D:
	esp -= 4; _sub_428A20(); esp += 4; //call
	ebx = to32i(esp+0x52); //mov
	eax = to32i(esp+0xC); //mov
	edx = 0xC00; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)0x10);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	edx = 0x2800; //mov
	eax = ebp; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = 0x62; //mov
	xor_(edx, edx);
	to16i(esp+0x30) = ax; //mov
	to16i(esp+0x20) = dx; //mov
loc_40128D:
	eax = to32i(esp+0x1E); //mov
	edx = si; //movsx
	sar(eax, (int32_t)0x10);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edi);
	ecx = to32i(eax); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4012DC;
	push32(0);
	ebx = to32i(esp+0x32); //mov
	edx = 0x1E8; //mov
	eax = ecx; //mov
	push32(0);
	ecx = 0x12; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ebx = to32i(esp+0x30); //mov
	ecx = to32i(esp+0x20); //mov
	add(ebx, (int32_t)0x16);
	inc(ecx);
	to16i(esp+0x30) = bx; //mov
	to16i(esp+0x20) = cx; //mov
	cmp(cx, (int16_t)8);
	if (jl())
		goto loc_40128D;
loc_4012DC:
	eax = to32i(esp+0x2A); //mov
	edx = 0x2C00; //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	to32i(esp+0x14) = eax; //mov
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)aTsld; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	push32(0);
	edx = to32i(esp+0x76); //mov
	ecx = 0x12; //mov
	xor_(eax, eax);
	push32(0);
	al = to8i(byte_512DFB); //mov
	sar(edx, (int32_t)0x10);
	ebx = to32i(dword_4D1FEC+2+eax*2); //mov
	eax = 0x77; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4053A0(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_401347;
	ebx = to32i(esp+0x14); //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aUppd; //mov
	xor_(ecx, ecx);
	add(ebx, (int32_t)2);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_401347:
	edx = to32i(esp+0x5A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(eax, (int32_t)7);
	cmp(eax, edx);
	if (jge())
		goto loc_401373;
	ebx = to32i(esp+0x2A); //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aDwnd; //mov
	sar(ebx, (int32_t)0x10);
	xor_(ecx, ecx);
	add(ebx, (int32_t)2);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_401373:
	esp -= 4; _sub_405C70(); esp += 4; //call
	edx = to32i(esp+0x74); //mov
	ebx = to32i(esp+0x2C); //mov
	sub(edx, (int32_t)4);
	sub(ebx, (int32_t)4);
	to16i(esp+0x74) = dx; //mov
	to16i(esp+0x2C) = bx; //mov
	test(bx, bx);
	if (jge())
		goto loc_40124D;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	eax = to32i(esp+0x5A); //mov
	ebx = 1; //mov
	sar(eax, (int32_t)0x10);
	to32i(dword_4D2310) = ebx; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40185C;
	eax = 0xFFFFFFFF; //mov
	edx = 0x104; //mov
	to16i(esp+0x3C) = ax; //mov
	eax = 0x262; //mov
loc_4013CD:
	esp -= 4; _sub_4242C0(); esp += 4; //call
	ecx = 0x127; //mov
	ebx = 0x280; //mov
	edx = 0x55; //mov
	eax = 0x1C2; //mov
	esp -= 4; _sub_4222C0(); esp += 4; //call
	cmp(to16i(esp+0x44), (int16_t)0);
	if (jnz())
		goto loc_40169F;
loc_4013F7:
	xor_(eax, eax);
	ebx = to32i(esp+8); //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ebx, eax);
	edx = to32i(esp+0x40); //mov
	to32i(esp+8) = ebx; //mov
	test(dx, dx);
	if (jz())
		goto loc_401885;
loc_40141A:
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	edx = 0xC00; //mov
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	to32i(esp+0x40) = ebx; //mov
	ebx = to32i(esp+0x52); //mov
	eax = to32i(eax+0x20); //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_405B60(); esp += 4; //call
	edx = 0x2800; //mov
	eax = ebp; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x62; //mov
	xor_(eax, eax);
	to16i(esp+0x4C) = cx; //mov
	to16i(esp+0x1C) = ax; //mov
loc_401460:
	edx = to32i(esp+0x1A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(edx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edi);
	ecx = to32i(eax); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4014C2;
	ebx = to32i(esp+0x3A); //mov
	sar(ebx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jnz())
		goto loc_401897;
	push32(2);
loc_40148C:
	ebx = to32i(esp+0x4E); //mov
	edx = 0x1E8; //mov
	eax = ecx; //mov
	push32(0);
	ecx = 0x12; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ebx = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x4C); //mov
	inc(ebx);
	add(edx, (int32_t)0x16);
	to16i(esp+0x1C) = bx; //mov
	to16i(esp+0x4C) = dx; //mov
	cmp(bx, (int16_t)8);
	if (jl())
		goto loc_401460;
loc_4014C2:
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aTsld; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40189E;
	eax = 2; //mov
loc_4014EA:
	eax = ax; //cwde
	push32(eax);
	xor_(eax, eax);
	ecx = 0x12; //mov
	al = to8i(byte_512DFB); //mov
	edx = 0x26C; //mov
	push32(0);
	ebx = to32i(dword_4D1FEC+2+eax*2); //mov
	eax = 0x77; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4053A0(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_401533;
	ebx = 2; //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aUppd; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_401533:
	edx = to32i(esp+0x5A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(eax, (int32_t)7);
	cmp(eax, edx);
	if (jge())
		goto loc_40155A;
	ebx = 2; //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aDwnd; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40155A:
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_401564:
	esp -= 4; _sub_423B90(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	xor_(edx, edx);
	to32i(esp+0x48) = eax; //mov
	to32i(esp+0x60) = edx; //mov
	test(ax, ax);
	if (jnz())
		goto loc_40194D;
	ecx = 0x1E0; //mov
	ebx = 0x28; //mov
	eax = 0x258; //mov
	xor_(edx, edx);
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4018A5;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4015D5;
	eax = to32i(esp+0x3C); //mov
	ecx = 0xFFFFFFFF; //mov
	to32i(esp+0x64) = eax; //mov
	eax = 1; //mov
	edx = 0x7F; //mov
	to32i(esp+0x40) = eax; //mov
	eax = 1; //mov
	to16i(esp+0x3C) = cx; //mov
loc_4015D0:
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_4015D5:
	ebx = 1; //mov
loc_4015DA:
	cmp(to16i(esp+0x48), (int16_t)0);
	if (jz())
		goto loc_401683;
	eax = to32i(esp+8); //mov
	cmp(eax, to32i(esp+4));
	if (jle())
		goto loc_401683;
	add(eax, (int32_t)0xF);
	ecx = 1; //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x48); //mov
	to32i(esp+0x40) = ecx; //mov
	cmp(ax, (int16_t)0x4800);
	if (jnb())
		goto loc_401954;
	cmp(ax, (int16_t)0xD);
	if (jnb())
		goto loc_4019CB;
	cmp(ax, (int16_t)9);
	if (jnz())
		goto loc_40165F;
loc_401622:
	eax = to32i(esp+0x5A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_40165F;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jle())
		goto loc_401A04;
	ecx = 0xFFFFFFFF; //mov
	eax = to32i(esp+0x3C); //mov
	to16i(esp+0x3C) = cx; //mov
	to32i(esp+0x64) = eax; //mov
loc_401650:
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_40165F:
	test(bx, bx);
	if (jnz())
		goto loc_401683;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_401ABE;
	edx = 0x104; //mov
	eax = 0x262; //mov
loc_40167E:
	esp -= 4; _sub_4242C0(); esp += 4; //call
loc_401683:
	edx = to32i(esp+8); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	ebx = to32i(esp+0x44); //mov
	to32i(esp+8) = edx; //mov
	test(bx, bx);
	if (jz())
		goto loc_4013F7;
loc_40169F:
	xor_(ecx, ecx);
	eax = 0x1E8; //mov
	to32i(dword_4D2310) = ecx; //mov
	xor_(ecx, ecx);
	to32i(esp+0x50) = eax; //mov
	to16i(esp+0x34) = cx; //mov
loc_4016B7:
	esp -= 4; _sub_428A20(); esp += 4; //call
	ebx = to32i(esp+0x52); //mov
	eax = to32i(esp+0xC); //mov
	edx = 0xC00; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)0x10);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	ebx = to32i(esp+0x32); //mov
	edx = 0x2C00; //mov
	eax = ebp; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = 0x62; //mov
	xor_(edx, edx);
	to16i(esp+0x24) = ax; //mov
	eax = to32i(esp+0x50); //mov
	to16i(esp+0x58) = dx; //mov
	to16i(esp+0x6C) = ax; //mov
loc_401705:
	edx = to32i(esp+0x56); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edi);
	cmp(to32i(eax), (int32_t)0);
	if (jz())
		goto loc_401755;
	push32(0);
	ebx = to32i(esp+0x26); //mov
	edx = to32i(esp+0x6E); //mov
	ecx = 0x12; //mov
	eax = to32i(eax); //mov
	push32(0);
	sar(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	ebx = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x58); //mov
	add(ebx, (int32_t)0x16);
	inc(ecx);
	to16i(esp+0x24) = bx; //mov
	to16i(esp+0x58) = cx; //mov
	cmp(cx, (int16_t)8);
	if (jl())
		goto loc_401705;
loc_401755:
	eax = to32i(esp+0x32); //mov
	edx = 0x2C00; //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	to32i(esp) = eax; //mov
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)aTsld; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_40178E;
	ebx = to32i(esp); //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aUppd; //mov
	xor_(ecx, ecx);
	add(ebx, (int32_t)2);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40178E:
	edx = to32i(esp+0x5A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	add(eax, (int32_t)7);
	cmp(eax, edx);
	if (jge())
		goto loc_4017BA;
	ebx = to32i(esp+0x32); //mov
	edx = 0x2C00; //mov
	eax = (int32_t)(intptr_t)aDwnd; //mov
	sar(ebx, (int32_t)0x10);
	xor_(ecx, ecx);
	add(ebx, (int32_t)2);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_4017BA:
	esp -= 4; _sub_405C70(); esp += 4; //call
	edx = to32i(esp+0x50); //mov
	ebx = to32i(esp+0x34); //mov
	add(edx, (int32_t)0xC);
	add(ebx, (int32_t)0xC);
	to32i(esp+0x50) = edx; //mov
	to16i(esp+0x34) = bx; //mov
	cmp(bx, (int16_t)0xD2);
	if (jle())
		goto loc_4016B7;
	esi = 1; //mov
	ecx = 0x1E0; //mov
	ebx = 0x280; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_4D2310) = esi; //mov
	esp -= 4; _sub_4222C0(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	esi = to32i(esp+0x3C); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	test(si, si);
	if (jl())
		goto loc_40181E;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(to32i(edi+eax*4), (int32_t)0);
	if (jnz())
		goto loc_401825;
loc_40181E:
	to16i(esp+0x3C) = 0xFFFF; //mov
loc_401825:
	cmp(to16i(esp+0x48), (int16_t)0x1B);
	if (jz())
		goto loc_401839;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40183E;
loc_401839:
	eax = 0xFFFFFFFF; //mov
loc_40183E:
	add(esp, (int32_t)0x78);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_401847:
	edx = to32i(esp+0x5C); //mov
	inc(edx);
	inc(eax);
	goto loc_4010D3;
loc_401852:
	ebp = (int32_t)(intptr_t)aBsld; //mov
	goto loc_4010F9;
loc_40185C:
	edx = to32i(esp+0x3A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	sub(edx, eax);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	add(eax, eax);
	edx = (int32_t)(intptr_t)(eax+0x6D); //lea
	eax = 0x226; //mov
	goto loc_4013CD;
loc_401885:
	cmp(to32i(dword_4D2094), (int32_t)0);
	if (jnz())
		goto loc_40141A;
	goto loc_401564;
loc_401897:
	push32(0);
	goto loc_40148C;
loc_40189E:
	xor_(eax, eax);
	goto loc_4014EA;
loc_4018A5:
	edx = 0x16; //mov
	eax = 0x62; //mov
	esp -= 4; _sub_423DF0(); esp += 4; //call
	test(ax, ax);
	if (jl())
		goto loc_4018FF;
	cmp(ax, (int16_t)7);
	if (jg())
		goto loc_401926;
	ebx = to32i(esp+0x3A); //mov
	add(eax, esi);
	sar(ebx, (int32_t)0x10);
	edx = ax; //movsx
	cmp(ebx, edx);
	if (jz())
		goto loc_4015D5;
	ebx = to32i(esp+0x5A); //mov
	sar(ebx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jg())
		goto loc_4015D5;
	to16i(esp+0x3C) = ax; //mov
	eax = 1; //mov
	edx = 0x7F; //mov
	to32i(esp+0x40) = eax; //mov
	eax = 1; //mov
	goto loc_4015D0;
loc_4018FF:
	eax = to32i(esp+0x5A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4015D5;
	ebx = 1; //mov
	edx = 0x4800; //mov
	to32i(esp+0x60) = ebx; //mov
	to32i(esp+0x48) = edx; //mov
	goto loc_4015D5;
loc_401926:
	eax = to32i(esp+0x5A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4015D5;
	ecx = 0x5000; //mov
	ebx = 1; //mov
	to32i(esp+0x48) = ecx; //mov
	to32i(esp+0x60) = ebx; //mov
	goto loc_4015D5;
loc_40194D:
	xor_(ebx, ebx);
	goto loc_4015DA;
loc_401954:
	if (ja())
		goto loc_401980;
	eax = to32i(esp+0x5A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40165F;
	edx = to32i(esp+0x3A); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_401A68;
	to16i(esp+0x3C) = si; //mov
	goto loc_40165F;
loc_401980:
	cmp(ax, (int16_t)0x4D00);
	if (jnb())
		goto loc_401995;
	cmp(ax, (int16_t)0x4B00);
	if (jz())
		goto loc_401622;
	goto loc_40165F;
loc_401995:
	if (jbe())
		goto loc_401622;
	cmp(ax, (int16_t)0x5000);
	if (jnz())
		goto loc_40165F;
	edx = to32i(esp+0x5A); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40165F;
	eax = to32i(esp+0x3A); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_401A12;
	to16i(esp+0x3C) = si; //mov
	goto loc_40165F;
loc_4019CB:
	if (jbe())
		goto loc_4019EF;
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_40165F;
	edx = 0x7F; //mov
	eax = 3; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x44) = ecx; //mov
	goto loc_40165F;
loc_4019EF:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x44) = ecx; //mov
	goto loc_40165F;
loc_401A04:
	eax = to32i(esp+0x64); //mov
	to16i(esp+0x3C) = ax; //mov
	goto loc_401650;
loc_401A12:
	cmp(to32i(edi+eax*4+4), (int32_t)0);
	if (jnz())
		goto loc_401A39;
	cmp(to16i(esp+0x60), (int16_t)0);
	if (jz())
		goto loc_40165F;
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40165F;
	xor_(eax, eax);
	to32i(esp+0x40) = eax; //mov
	goto loc_40165F;
loc_401A39:
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	inc(to16i(esp+0x3C));
	edx = to32i(esp+0x3A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	sub(edx, eax);
	cmp(edx, (int32_t)7);
	if (jle())
		goto loc_40165F;
	inc(esi);
	goto loc_40165F;
loc_401A68:
	edx = to32i(esp+0x3C); //mov
	test(dx, dx);
	if (jnz())
		goto loc_401A8F;
	cmp(to16i(esp+0x60), (int16_t)0);
	if (jz())
		goto loc_40165F;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40165F;
	to32i(esp+0x40) = edx; //mov
	goto loc_40165F;
loc_401A8F:
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	sub(to16i(esp+0x3C), cx);
	edx = to32i(esp+0x3A); //mov
	eax = si; //movsx
	sar(edx, (int32_t)0x10);
	sub(edx, eax);
	test(edx, edx);
	if (jge())
		goto loc_40165F;
	sub(esi, ecx);
	goto loc_40165F;
loc_401ABE:
	edx = si; //movsx
	sub(eax, edx);
	imul32(edx, eax, 0x16);
	eax = 0x226; //mov
	add(edx, (int32_t)0x6D);
	goto loc_40167E;
}
Fn(void) Game::_sub_401AE0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	edx = 1; //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	eax = 0x2FA; //mov
	ecx = 0x348; //mov
	esi = (int32_t)(intptr_t)dword_401074; //mov
	xor_(ebx, ebx);
	to32i(esp+0x28) = edx; //mov
	to16i(esp+0x30) = bx; //mov
	movsd();
	movsw();
	to32i(esp+0x24) = edx; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)word_40107A; //mov
	edx = (int32_t)(intptr_t)aCNfs2seFront_1; //mov
	ebx = 0x20; //mov
	movsd();
	movsw();
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	edi = eax; //mov
	eax = 0x2FA; //mov
	esi = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	to32i(dword_4DB1D8) = edx; //mov
	edx = to32i(esp+0x50); //mov
	ebp = eax; //mov
	shl(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)aDialogargv; //mov
	add(edx, (int32_t)4);
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(esp+0x50); //mov
	to32i(esp+0x14) = eax; //mov
	xor_(edx, edx);
	test(ebx, ebx);
	if (jle())
		goto loc_401B90;
	ecx = eax; //mov
loc_401B78:
	eax = to32i(esi); //mov
	add(esi, (int32_t)4);
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(ecx) = eax; //mov
	inc(edx);
	eax = to32i(esp+0x50); //mov
	add(ecx, (int32_t)4);
	cmp(edx, eax);
	if (jl())
		goto loc_401B78;
loc_401B90:
	eax = to32i(esp+0x50); //mov
	edx = to32i(esp+0x14); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(ebx, ebx);
	to32i(eax) = (int32_t)(intptr_t)dword_4C8014; //mov
	edx = to32i(dword_4DAB80); //mov
	eax = to32i(dword_4DAB7C); //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(esp+0x18) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_401BD7:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_401BE9;
	eax = ecx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_401BD7;
loc_401BE9:
	edx = ebp; //mov
	eax = ebp; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = 0x168; //mov
	sub(edx, eax);
	to32i(esp+0x1C) = edx; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = 0x118; //mov
	sub(edx, eax);
	to32i(esp+0x10) = edx; //mov
loc_401C15:
	cmp(to16i(esp+0x24), (int16_t)0);
	if (jnz())
		goto loc_401C72;
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_4834C4(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(esp+0x2E); //mov
	sar(eax, (int32_t)0x10);
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_401C72:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	cmp(to16i(esp+0x28), (int16_t)0);
	if (jz())
		goto loc_401E30;
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0x18); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	to32i(esp+0x28) = edx; //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	eax = to32i(esp+0x50); //mov
	edx = to32i(esp+0x14); //mov
	inc(eax);
	ebx = to32i(esp+0x30); //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	to32i(esp+0x20) = eax; //mov
	test(bx, bx);
	if (jz())
		goto loc_401E03;
	push32(2);
	esi = to32i(esp+0x22); //mov
	eax = 0x2FA; //mov
	ecx = 0x12; //mov
	push32(2);
	sar(esi, (int32_t)0x10);
	edx = 0x118; //mov
	ebx = esi; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(1);
loc_401CE3:
	eax = 0x2FB; //mov
	ecx = 0x12; //mov
	push32(2);
	edx = 0x168; //mov
	ebx = esi; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_401D0A:
	ecx = 0x1C; //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x10); //mov
	ebx = edi; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_401D47;
	cmp(to16i(esp+0x30), (int16_t)1);
	if (jz())
		goto loc_401D39;
	edx = 0x2D; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_401D39:
	esi = 1; //mov
	to32i(esp+0x28) = esi; //mov
	to16i(esp+0x30) = si; //mov
loc_401D47:
	ecx = 0x1C; //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp+0x1C); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_401D86;
	cmp(to16i(esp+0x30), (int16_t)0);
	if (jz())
		goto loc_401D76;
	edx = 0x2D; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_401D76:
	ecx = 1; //mov
	xor_(ebx, ebx);
	to32i(esp+0x28) = ecx; //mov
	to16i(esp+0x30) = bx; //mov
loc_401D86:
	cmp(to16i(esp+0x2C), (int16_t)0);
	if (jz())
		goto loc_401E3A;
	esp -= 4; _sub_405910(); esp += 4; //call
	ebx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_401DA4;
	xor_(edx, edx);
	to32i(esp+0x2C) = edx; //mov
loc_401DA4:
	test(bx, bx);
	if (jz())
		goto loc_401C15;
	cmp(bx, (int16_t)0x4E);
	if (jnb())
		goto loc_401E56;
	cmp(bx, (int16_t)0xD);
	if (jnb())
		goto loc_401ECB;
loc_401DC1:
	xor_(eax, eax);
	xor_(ecx, ecx);
	al = to8i(byte_512DFB); //mov
	edx = bx; //movsx
	cl = to8i(esp+eax+8); //mov
	cmp(ecx, edx);
	if (jnz())
		goto loc_401F1F;
loc_401DD9:
	edx = 0x7F; //mov
	xor_(eax, eax);
	ebx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(esi, esi);
	to16i(esp+0x30) = bx; //mov
	to32i(esp+0x28) = ebx; //mov
	to32i(esp+0x24) = esi; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_401C15;
loc_401E03:
	push32(1);
	esi = to32i(esp+0x22); //mov
	eax = 0x2FA; //mov
	ecx = 0x12; //mov
	push32(2);
	sar(esi, (int32_t)0x10);
	edx = 0x118; //mov
	ebx = esi; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(2);
	goto loc_401CE3;
loc_401E30:
	esp -= 4; _sub_423B90(); esp += 4; //call
	goto loc_401D0A;
loc_401E3A:
	esp -= 4; _sub_405910(); esp += 4; //call
	xor_(ebx, ebx);
	test(eax, eax);
	if (jnz())
		goto loc_401DA4;
	to32i(esp+0x2C) = 1; //mov
	goto loc_401DA4;
loc_401E56:
	if (jbe())
		goto loc_401E69;
	cmp(bx, (int16_t)0x4B00);
	if (jnb())
		goto loc_401E8E;
	cmp(bx, (int16_t)0x6E);
	if (jnz())
		goto loc_401DC1;
loc_401E69:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(eax, eax);
	edx = 1; //mov
	to16i(esp+0x30) = ax; //mov
	to32i(esp+0x28) = edx; //mov
	to32i(esp+0x24) = eax; //mov
	goto loc_401DC1;
loc_401E8E:
	if (jbe())
		goto loc_401E9B;
	cmp(bx, (int16_t)0x4D00);
	if (jnz())
		goto loc_401DC1;
loc_401E9B:
	edx = 0x7F; //mov
	eax = 1; //mov
	ecx = to32i(esp+0x30); //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	test(cx, cx);
	if (jnz())
		goto loc_401F0A;
	eax = 1; //mov
	esi = 1; //mov
	to16i(esp+0x30) = ax; //mov
	to32i(esp+0x28) = esi; //mov
	goto loc_401DC1;
loc_401ECB:
	if (jbe())
		goto loc_401EF3;
	cmp(bx, (int16_t)0x1B);
	if (jnz())
		goto loc_401DC1;
	edx = 0x7F; //mov
	xor_(eax, eax);
	xor_(esi, esi);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to16i(esp+0x30) = si; //mov
	to32i(esp+0x24) = esi; //mov
	goto loc_401DC1;
loc_401EF3:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(edx, edx);
	to32i(esp+0x24) = edx; //mov
	goto loc_401DC1;
loc_401F0A:
	xor_(eax, eax);
	esi = 1; //mov
	to16i(esp+0x30) = ax; //mov
	to32i(esp+0x28) = esi; //mov
	goto loc_401DC1;
loc_401F1F:
	al = to8i(esp+eax); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, edx);
	if (jz())
		goto loc_401DD9;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	goto loc_401C15;
}
Fn(void) Game::_sub_401F40()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x94);
	ebp = eax; //mov
	to16i(esp+0x74) = bx; //mov
	ebx = 1; //mov
	edi = 0xFFFFFFFF; //mov
	esi = (int32_t)(intptr_t)word_401042; //mov
	xor_(ecx, ecx);
	to32i(esp+0x68) = edx; //mov
	to32i(esp+0x7C) = ecx; //mov
	to16i(esp+0x78) = cx; //mov
	to16i(esp+0x88) = di; //mov
	ecx = 0xC; //mov
	edi = esp; //mov
	edx = (int32_t)(intptr_t)dword_4C8014; //mov
	to32i(esp+0x8C) = ebx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	movsw();
	to32i(esp+0x6C) = edx; //mov
	edi = ebp; //mov
	xor_(ecx, ecx);
	esi = ebp; //mov
	to32i(dword_4D2310) = ecx; //mov
	esp -= 4; _sub_402A00(); esp += 4; //call
	to32i(esp+0x80) = eax; //mov
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
	edi = esp; //mov
	xor_(ebx, ebx);
	push32(edi);
loc_401FB8:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_401FD0;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_401FB8;
loc_401FD0:
	pop32(edi);
	edx = to32i(dword_4DAB80); //mov
	eax = to32i(dword_4DAB7C); //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(esp+0x70) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	to16i(esp+0x84) = cx; //mov
	eax = to32i(eax+0x20); //mov
	xor_(edx, edx);
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_402006:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_402077;
loc_40200F:
	esi = to32i(esp+0x86); //mov
	sar(esi, (int32_t)0x10);
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_402080;
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_4834C4(); esp += 4; //call
	push32(1);
	esp -= 4; _sub_497680(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	ebx = 1; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	eax = ebp; //mov
	to32i(dword_4D2310) = ebx; //mov
	esp -= 4; _sub_402960(); esp += 4; //call
	eax = esi; //mov
	add(esp, (int32_t)0x94);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_402077:
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_402006;
loc_402080:
	esp -= 4; _sub_403550(); esp += 4; //call
	cmp(to16i(esp+0x8C), (int16_t)0);
	if (jz())
		goto loc_40215A;
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(esp+0x34); //lea
	ebx = to32i(esp+0x78); //mov
	xor_(edx, edx);
	push32(edi);
loc_4020AA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4020C2;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4020AA;
loc_4020C2:
	pop32(edi);
	to32i(esp+0x8C) = edx; //mov
	test(bx, bx);
	if (jz())
		goto loc_4020FA;
	esi = (int32_t)(intptr_t)a_; //mov
	edi = (int32_t)(intptr_t)(esp+0x34); //lea
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
loc_4020E1:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4020F9;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4020E1;
loc_4020F9:
	pop32(edi);
loc_4020FA:
	esp -= 4; _sub_4287C0(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	eax = to32i(eax+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x68); //lea
	esp -= 4; _sub_483470(); esp += 4; //call
	eax = 2; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	push32(2);
	push32(0);
	ebx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	eax = to32i(dword_4DAB7C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(eax, esi);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_40215A:
	cmp(to16i(esp+0x90), (int16_t)0);
	if (jz())
		goto loc_402210;
	esp -= 4; _sub_405910(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_40217E;
	xor_(edi, edi);
	to32i(esp+0x90) = edi; //mov
loc_40217E:
	test(dx, dx);
	if (jz())
		goto loc_4021D5;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_40222F;
	esi = esp; //mov
	edi = ebp; //mov
	push32(edi);
loc_402192:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4021AA;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402192;
loc_4021AA:
	pop32(edi);
	to16i(esp+0x88) = 1; //mov
loc_4021B5:
	eax = to32i(esp+0x82); //mov
	edi = 1; //mov
	xor_(dl, dl);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x8C) = edi; //mov
	to8i(esp+eax) = dl; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
loc_4021D5:
	edx = to32i(esp+0x7C); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	to32i(esp+0x7C) = edx; //mov
	cmp(dx, (int16_t)0xF);
	if (jl())
		goto loc_40200F;
	dh = to8i(esp+0x78); //mov
	ecx = 1; //mov
	xor_(esi, esi);
	xor_(dh, (int8_t)1);
	to32i(esp+0x8C) = ecx; //mov
	to32i(esp+0x7C) = esi; //mov
	to8i(esp+0x78) = dh; //mov
	goto loc_40200F;
loc_402210:
	esp -= 4; _sub_405910(); esp += 4; //call
	xor_(edx, edx);
	test(eax, eax);
	if (jnz())
		goto loc_40217E;
	to32i(esp+0x90) = 1; //mov
	goto loc_40217E;
loc_40222F:
	cmp(dx, (int16_t)0x1B);
	if (jnz())
		goto loc_402244;
	xor_(ecx, ecx);
	to16i(esp+0x88) = cx; //mov
	goto loc_4021B5;
loc_402244:
	eax = dx; //movsx
	esp -= 4; _sub_402AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4021B5;
	cmp(dx, (int16_t)8);
	if (jnz())
		goto loc_402295;
	eax = to32i(esp+0x84); //mov
	test(ax, ax);
	if (jle())
		goto loc_402295;
	cmp(to16i(esp+0x80), (int16_t)0);
	if (jz())
		goto loc_402287;
	xor_(edx, edx);
	to16i(esp+0x84) = dx; //mov
	to32i(esp+0x80) = edx; //mov
	goto loc_4021B5;
loc_402287:
	dec(eax);
	to16i(esp+0x84) = ax; //mov
	goto loc_4021B5;
loc_402295:
	eax = to32i(esp+0x72); //mov
	ebx = to32i(esp+0x82); //mov
	sar(eax, (int32_t)0x10);
	sar(ebx, (int32_t)0x10);
	cmp(ebx, eax);
	if (jge())
		goto loc_4022F5;
	cmp(dx, (int16_t)0x1F);
	if (jle())
		goto loc_4022F5;
	cmp(dx, (int16_t)0xFF);
	if (jge())
		goto loc_4022F5;
	cmp(to16i(esp+0x80), (int16_t)0);
	if (jz())
		goto loc_4022D3;
	xor_(ebx, ebx);
	to16i(esp+0x84) = bx; //mov
	to32i(esp+0x80) = ebx; //mov
loc_4022D3:
	esi = to32i(esp+0x84); //mov
	eax = to32i(esp+0x82); //mov
	inc(esi);
	sar(eax, (int32_t)0x10);
	to16i(esp+0x84) = si; //mov
	to8i(esp+eax) = dl; //mov
	goto loc_4021B5;
loc_4022F5:
	cmp(to16i(esp+0x80), (int16_t)0);
	if (jz())
		goto loc_4021B5;
	xor_(ecx, ecx);
	to16i(esp+0x84) = cx; //mov
	to32i(esp+0x80) = ecx; //mov
	cmp(dx, (int16_t)0x1F);
	if (jle())
		goto loc_4021B5;
	cmp(dx, (int16_t)0xFF);
	if (jge())
		goto loc_4021B5;
	edi = 1; //mov
	to8i(esp) = dl; //mov
	to16i(esp+0x84) = di; //mov
	goto loc_4021B5;
}
Fn(void) Game::_sub_402340()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	esi = edx; //mov
	xor_(edx, edx);
loc_402349:
	eax = to32i(dword_4E5010); //mov
	add(eax, (int32_t)0x96);
	cmp(eax, to32i(dword_5637F4));
	if (jle())
		goto loc_402364;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_402349;
loc_402364:
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(ebx+0x20); //mov
	esp -= 4; _sub_4834C4(); esp += 4; //call
	push32(1);
	esp -= 4; _sub_497680(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	test(esi, esi);
	if (jnz())
		goto loc_4023A9;
	to32i(dword_4D2310) = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4023A9:
	eax = 0x303; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = 0x100; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	to32i(dword_4D2310) = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4023D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	esi = edx; //mov
	eax = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	to32i(dword_4D2310) = edx; //mov
	edx = to32i(dword_4DAB80); //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp) = eax; //mov
	eax = esi; //mov
	edx = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 2; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	to32i(dword_4E5010) = eax; //mov
	eax = ecx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_402460()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x98);
	ebp = eax; //mov
	to16i(esp+0x90) = bx; //mov
	to32i(esp+0x94) = ecx; //mov
	edi = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
	esi = (int32_t)(intptr_t)dword_401010; //mov
	to32i(esp+0x80) = ecx; //mov
	to16i(esp+0x74) = cx; //mov
	to16i(esp+0x78) = di; //mov
	ecx = 0xC; //mov
	edi = esp; //mov
	eax = dx; //movsx
	edx = (int32_t)(intptr_t)dword_4C8014; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	movsw();
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+0x68) = eax; //mov
	to32i(esp+0x70) = edx; //mov
	eax = (int32_t)(intptr_t)(esp+0x34); //lea
	xor_(ecx, ecx);
	to32i(esp+0x6C) = eax; //mov
	eax = ebp; //mov
	to32i(dword_4D2310) = ecx; //mov
	esp -= 4; _sub_402A00(); esp += 4; //call
	to32i(esp+0x88) = eax; //mov
	eax = 0x2FC; //mov
	ebx = 1; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	edx = eax; //mov
	eax = ebp; //mov
	to32i(esp+0x84) = ebx; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4024FF;
	to32i(esp+0x88) = ebx; //mov
loc_4024FF:
	edi = ebp; //mov
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
	esi = ebp; //mov
	edi = esp; //mov
	xor_(ebx, ebx);
	push32(edi);
loc_402512:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40252A;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402512;
loc_40252A:
	pop32(edi);
	edx = to32i(dword_4DAB80); //mov
	eax = to32i(dword_4DAB7C); //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(esp+0x70) = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	to16i(esp+0x8C) = cx; //mov
	eax = to32i(eax+0x20); //mov
	xor_(edx, edx);
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_402560:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_402572;
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_402560;
loc_402572:
	eax = to32i(esp+0x76); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4028E6;
	xor_(eax, eax);
	ebx = to32i(esp+0x84); //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	test(bx, bx);
	if (jz())
		goto loc_40262C;
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(esp+0x34); //lea
	push32(edi);
loc_4025A0:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4025B8;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4025A0;
loc_4025B8:
	pop32(edi);
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	edx = (int32_t)(intptr_t)(esp+0x68); //lea
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	esi = to32i(esp+0x74); //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	eax = 2; //mov
	to32i(esp+0x84) = ecx; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_402627;
	push32(2);
	push32(0);
	ebx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = eax; //mov
	eax = to32i(dword_4DAB7C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(eax, esi);
	ecx = 0x12; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)a_; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_402627:
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_40262C:
	cmp(to16i(esp+0x7C), (int16_t)0);
	if (jz())
		goto loc_4026E1;
	esp -= 4; _sub_405910(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_40264A;
	xor_(ebx, ebx);
	to32i(esp+0x7C) = ebx; //mov
loc_40264A:
	test(dx, dx);
	if (jz())
		goto loc_40269D;
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_4026FD;
	esi = esp; //mov
	edi = ebp; //mov
	push32(edi);
loc_40265E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402676;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40265E;
loc_402676:
	pop32(edi);
	to16i(esp+0x78) = 1; //mov
loc_40267E:
	eax = to32i(esp+0x8A); //mov
	sar(eax, (int32_t)0x10);
	xor_(dl, dl);
	to8i(esp+eax) = dl; //mov
	to32i(esp+0x84) = 1; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
loc_40269D:
	edx = to32i(esp+0x80); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	to32i(esp+0x80) = edx; //mov
	cmp(dx, (int16_t)0xF);
	if (jl())
		goto loc_402572;
	dh = to8i(esp+0x74); //mov
	ecx = 1; //mov
	xor_(esi, esi);
	xor_(dh, (int8_t)1);
	to32i(esp+0x84) = ecx; //mov
	to32i(esp+0x80) = esi; //mov
	to8i(esp+0x74) = dh; //mov
	goto loc_402572;
loc_4026E1:
	esp -= 4; _sub_405910(); esp += 4; //call
	xor_(edx, edx);
	test(eax, eax);
	if (jnz())
		goto loc_40264A;
	to32i(esp+0x7C) = 1; //mov
	goto loc_40264A;
loc_4026FD:
	cmp(dx, (int16_t)0x1B);
	if (jnz())
		goto loc_40270F;
	xor_(esi, esi);
	to16i(esp+0x78) = si; //mov
	goto loc_40267E;
loc_40270F:
	cmp(to16i(esp+0x94), (int16_t)2);
	if (jz())
		goto loc_40272A;
	eax = dx; //movsx
	esp -= 4; _sub_402AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40267E;
loc_40272A:
	cmp(to16i(esp+0x94), (int16_t)2);
	if (jnz())
		goto loc_4027A3;
	cmp(dx, (int16_t)0x20);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x2A);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x2F);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x3F);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x3C);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x3E);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x22);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x3A);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x5C);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x7C);
	if (jz())
		goto loc_40267E;
	cmp(dx, (int16_t)0x2E);
	if (jz())
		goto loc_40267E;
loc_4027A3:
	cmp(dx, (int16_t)8);
	if (jnz())
		goto loc_4027E6;
	edi = to32i(esp+0x8C); //mov
	test(di, di);
	if (jle())
		goto loc_4027E6;
	cmp(to16i(esp+0x88), (int16_t)0);
	if (jz())
		goto loc_4027D6;
	xor_(ebx, ebx);
	to16i(esp+0x8C) = bx; //mov
	to32i(esp+0x88) = ebx; //mov
	goto loc_40267E;
loc_4027D6:
	edx = edi; //mov
	dec(edx);
	to16i(esp+0x8C) = dx; //mov
	goto loc_40267E;
loc_4027E6:
	cmp(to16i(esp+0x94), (int16_t)0);
	if (jnz())
		goto loc_402839;
	cmp(dx, (int16_t)0x30);
	if (jle())
		goto loc_40267E;
	cmp(dx, (int16_t)0x39);
	if (jge())
		goto loc_40267E;
	ebx = to32i(esp+0x8E); //mov
	eax = to32i(esp+0x8A); //mov
	sar(ebx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, ebx);
	if (jge())
		goto loc_40267E;
	edi = to32i(esp+0x8C); //mov
	inc(edi);
	to8i(esp+eax) = dl; //mov
	to16i(esp+0x8C) = di; //mov
	goto loc_40267E;
loc_402839:
	eax = to32i(esp+0x8E); //mov
	ebx = to32i(esp+0x8A); //mov
	sar(eax, (int32_t)0x10);
	sar(ebx, (int32_t)0x10);
	cmp(ebx, eax);
	if (jge())
		goto loc_40289C;
	cmp(dx, (int16_t)0x1F);
	if (jle())
		goto loc_40289C;
	cmp(dx, (int16_t)0xFF);
	if (jge())
		goto loc_40289C;
	cmp(to16i(esp+0x88), (int16_t)0);
	if (jz())
		goto loc_40287A;
	xor_(ebx, ebx);
	to16i(esp+0x8C) = bx; //mov
	to32i(esp+0x88) = ebx; //mov
loc_40287A:
	esi = to32i(esp+0x8C); //mov
	eax = to32i(esp+0x8A); //mov
	inc(esi);
	sar(eax, (int32_t)0x10);
	to16i(esp+0x8C) = si; //mov
	to8i(esp+eax) = dl; //mov
	goto loc_40267E;
loc_40289C:
	cmp(to16i(esp+0x88), (int16_t)0);
	if (jz())
		goto loc_40267E;
	xor_(ecx, ecx);
	to16i(esp+0x8C) = cx; //mov
	to32i(esp+0x88) = ecx; //mov
	cmp(dx, (int16_t)0x1F);
	if (jle())
		goto loc_40267E;
	cmp(dx, (int16_t)0xFF);
	if (jge())
		goto loc_40267E;
	edi = 1; //mov
	to8i(esp) = dl; //mov
	to16i(esp+0x8C) = di; //mov
	goto loc_40267E;
loc_4028E6:
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_4834C4(); esp += 4; //call
	push32(1);
	esp -= 4; _sub_497680(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	edi = ebp; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
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
		goto loc_40294B;
loc_40292F:
	eax = to32i(esp+0x76); //mov
	ebx = 1; //mov
	sar(eax, (int32_t)0x10);
	to32i(dword_4D2310) = ebx; //mov
	add(esp, (int32_t)0x98);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_40294B:
	xor_(edx, edx);
	to16i(esp+0x78) = dx; //mov
	goto loc_40292F;
}
Fn(void) Game::_sub_402960()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
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
	edx = ecx; //mov
	esi = ecx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_40299F;
	ecx = 1; //mov
	xor_(eax, eax);
	test(edx, edx);
	if (jle())
		goto loc_402995;
	edx = ebp; //mov
loc_402988:
	cmp(to8i(edx), (int8_t)0x20);
	if (jz())
		goto loc_40298F;
	xor_(ecx, ecx);
loc_40298F:
	inc(eax);
	inc(edx);
	cmp(eax, esi);
	if (jl())
		goto loc_402988;
loc_402995:
	test(ecx, ecx);
	if (jnz())
		goto loc_40299F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_40299F:
	eax = 0x2A1; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	edi = ebp; //mov
	esi = eax; //mov
	push32(edi);
loc_4029AE:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4029C6;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4029AE;
loc_4029C6:
	pop32(edi);
	esi = (int32_t)(intptr_t)a1; //mov
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
loc_4029D5:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4029ED;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4029D5;
loc_4029ED:
	pop32(edi);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_402A00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x14);
	ebx = eax; //mov
	eax = 0x2A1; //mov
	edi = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_402A19:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402A31;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402A19;
loc_402A31:
	pop32(edi);
	esi = (int32_t)(intptr_t)a1; //mov
	edi = esp; //mov
	edx = ebx; //mov
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
loc_402A44:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402A5C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402A44;
loc_402A5C:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_402A76;
loc_402A68:
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_402A76:
	eax = 0x2A1; //mov
	edi = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_402A85:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402A9D;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402A85;
loc_402A9D:
	pop32(edi);
	esi = (int32_t)(intptr_t)a2; //mov
	edi = esp; //mov
	edx = ebx; //mov
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
loc_402AB0:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402AC8;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402AB0;
loc_402AC8:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_402A68;
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_402AE0()
{
	cmp(eax, (int32_t)8);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0x5300);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0x20);
	if (jl())
		goto loc_402B02;
	cmp(eax, (int32_t)0x22);
	if (jle())
		goto loc_402C37;
loc_402B02:
	cmp(eax, (int32_t)0x26);
	if (jl())
		goto loc_402B10;
	cmp(eax, (int32_t)0x3A);
	if (jle())
		goto loc_402C37;
loc_402B10:
	cmp(eax, (int32_t)0x3B);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0x3F);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0x41);
	if (jl())
		goto loc_402B30;
	cmp(eax, (int32_t)0x5D);
	if (jle())
		goto loc_402C37;
loc_402B30:
	cmp(eax, (int32_t)0x5F);
	if (jl())
		goto loc_402B3E;
	cmp(eax, (int32_t)0x7D);
	if (jle())
		goto loc_402C37;
loc_402B3E:
	cmp(eax, (int32_t)0x91);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0x92);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xA1);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xB0);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xBF);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xC1);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xE1);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xC4);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xE4);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xC5);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xE5);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xC7);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xE7);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xC9);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xE9);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xCD);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xED);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xD1);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xF1);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xD3);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xF3);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xD6);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xF6);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xDA);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xFA);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xDC);
	if (jz())
		goto loc_402C37;
	cmp(eax, (int32_t)0xFC);
	if (jnz())
		goto loc_402C3D;
loc_402C37:
	eax = 1; //mov
	return;
loc_402C3D:
	xor_(eax, eax);
}
Fn(void) Game::_sub_402C40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x50);
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	edi = esp; //mov
	ecx = 1; //mov
	ebx = 8; //mov
	edx = 0x2E7; //mov
	push32(edi);
loc_402C5F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402C77;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402C5F;
loc_402C77:
	pop32(edi);
	eax = esp; //mov
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_402C8C;
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_402C8C:
	eax = esp; //mov
	esi = esp; //mov
	edi = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _sub_402960(); esp += 4; //call
	push32(edi);
loc_402C9B:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_402CB3;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_402C9B;
loc_402CB3:
	pop32(edi);
	eax = 1; //mov
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_402CD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = 2; //mov
	edx = (int32_t)(intptr_t)dword_4C8014; //mov
	xor_(ecx, ecx);
	to32i(esp) = edx; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	cmp(esi, (int32_t)0x30C);
	if (jz())
		goto loc_402D55;
loc_402CFB:
	edx = to32i(dword_4DAB80); //mov
	eax = to32i(dword_4DAB7C); //mov
	xor_(ebp, ebp);
	xor_(ebx, ebx);
	to32i(dword_4D2310) = ebp; //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	ebx = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	edx = esp; //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	xor_(edx, edx);
loc_402D43:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_402D78;
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_402D43;
loc_402D55:
	eax = 0x30D; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	ebx = to32i(dword_4D1FEC); //mov
	edi = 3; //mov
	add(ebx, ebx);
	to32i(esp+8) = eax; //mov
	to32i(dword_4D1FEC) = ebx; //mov
	goto loc_402CFB;
loc_402D78:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	xor_(edx, edx);
loc_402D7F:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_402DA0;
	cmp(ecx, to32i(dword_4D1FEC));
	if (jge())
		goto loc_402DA0;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ecx, eax);
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_402D7F;
loc_402DA0:
	cmp(esi, (int32_t)0x30C);
	if (jnz())
		goto loc_402DBB;
	eax = to32i(dword_4D1FEC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(dword_4D1FEC) = eax; //mov
loc_402DBB:
	edx = 1; //mov
	eax = to32i(dword_4D4D24); //mov
	to32i(dword_4D2310) = edx; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(ebx+0x20); //mov
	esp -= 4; _sub_4834C4(); esp += 4; //call
	push32(edx);
	esp -= 4; _sub_497680(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_402E10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0xC);
	edx = eax; //mov
	ebx = (int32_t)(intptr_t)dword_4C8014; //mov
	ecx = 2; //mov
	to32i(esp) = ebx; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	cmp(edx, (int32_t)0x30C);
	if (jz())
		goto loc_402E46;
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_402E46:
	push32(esi);
	eax = 0x30D; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = to32i(dword_4D1FEC); //mov
	ecx = 3; //mov
	add(esi, esi);
	to32i(esp+0xC) = eax; //mov
	to32i(dword_4D1FEC) = esi; //mov
	pop32(esi);
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_402E80()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	ebp = eax; //mov
	to32i(esp) = edx; //mov
	eax = 0x12; //mov
	esp -= 4; _sub_4056F0(); esp += 4; //call
	xor_(edi, edi);
	xor_(esi, esi);
	test(ebp, ebp);
	if (jle())
		goto loc_402EBF;
	ebx = edx; //mov
loc_402EA1:
	eax = to32i(ebx); //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	test(esi, esi);
	if (jnz())
		goto loc_402EB1;
	edx = (int32_t)(intptr_t)(eax+0x3C); //lea
loc_402EB1:
	cmp(edx, edi);
	if (jle())
		goto loc_402EB7;
	edi = edx; //mov
loc_402EB7:
	inc(esi);
	add(ebx, (int32_t)4);
	cmp(esi, ebp);
	if (jl())
		goto loc_402EA1;
loc_402EBF:
	add(edi, (int32_t)0x1E);
	cmp(ebp, (int32_t)1);
	if (jg())
		goto loc_403061;
	xor_(esi, esi);
loc_402ECD:
	edx = to32i(dword_4DAB7C); //mov
	sub(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(dword_4DAB80); //mov
	sub(edx, esi);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	xor_(ebx, ebx);
	to32i(esp+8) = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = esi; //mov
	eax = edi; //mov
	ecx = 0xB4; //mov
	esp -= 4; _sub_482474(); esp += 4; //call
	ebx = to32i(esp+8); //mov
	esi = eax; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = 0xFF080808; //mov
	edx = to32i(esp+4); //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esi+0x20); //mov
	esp -= 4; _sub_482C78(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_482DA0(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(esp+4); //mov
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	add(eax, (int32_t)0x14);
	esi = to32i(esp+4); //mov
	esp -= 4; _sub_482E00(); esp += 4; //call
	sub(esi, (int32_t)0x13B);
	edx = (int32_t)(intptr_t)aDbar; //mov
	eax = to32i(dword_4D4C78); //mov
	ebx = to32i(esp+8); //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	add(esi, edi);
	sub(ebx, (int32_t)0x1F);
	edx = esi; //mov
	esp -= 4; _sub_48330C(); esp += 4; //call
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_482E00(); esp += 4; //call
	ebx = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)aDlog; //mov
	eax = to32i(dword_4D4C78); //mov
	ecx = to32i(esp+4); //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	sub(ecx, (int32_t)0xA4);
	sub(ebx, (int32_t)0x8E);
	edx = ecx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4833A0(); esp += 4; //call
	test(ebp, ebp);
	if (jle())
		goto loc_403051;
	eax = to32i(esp+8); //mov
	sub(eax, (int32_t)0x19);
	edx = (int32_t)(intptr_t)(edi-0x3C); //lea
	to16i(esp+0x18) = ax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+4); //mov
	add(edx, (int32_t)0x3C);
	add(edx, eax);
	to32i(esp+0x10) = edx; //mov
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+4); //mov
	add(edx, eax);
	imul32(eax, esi, 0x1E);
	ebx = to32i(esp+8); //mov
	add(ebx, (int32_t)0xF);
	sub(eax, (int32_t)0x1E);
	edi = to32i(esp); //mov
	add(eax, ebx);
	to32i(esp+0xC) = edx; //mov
	to16i(esp+0x14) = ax; //mov
loc_40301B:
	eax = to32i(edi); //mov
	test(esi, esi);
	if (jz())
		goto loc_403075;
	push32(2);
	ebx = to32i(esp+0x16); //mov
	edx = to32i(esp+0x10); //mov
loc_40302B:
	ecx = 0x12; //mov
	push32(2);
	sar(ebx, (int32_t)0x10);
	edx = dx; //movsx
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = to32i(esp+0x14); //mov
	add(edi, (int32_t)4);
	add(edx, (int32_t)0x1E);
	inc(esi);
	to16i(esp+0x14) = dx; //mov
	cmp(esi, ebp);
	if (jl())
		goto loc_40301B;
loc_403051:
	eax = to32i(esp+8); //mov
	add(eax, (int32_t)0xF);
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_403061:
	eax = (int32_t)(intptr_t)(ebp-1); //lea
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	esi = (int32_t)(intptr_t)(eax+0x1E); //lea
	goto loc_402ECD;
loc_403075:
	ebx = to32i(esp+0x16); //mov
	push32(esi);
	edx = to32i(esp+0x14); //mov
	goto loc_40302B;
}
Fn(void) Game::_sub_403080()
{
	push32(edx);
	edx = to32i(dword_4E5098); //mov
	test(edx, edx);
	if (jnz())
		goto loc_40308D;
	pop32(edx);
	return;
loc_40308D:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E5098) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_4030A0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	esi = (int32_t)(intptr_t)a000; //mov
	edi = (int32_t)(intptr_t)dword_4E5074; //mov
	ebx = 1; //mov
	xor_(edx, edx);
	push32(edi);
loc_4030B8:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4030D0;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4030B8;
loc_4030D0:
	pop32(edi);
	to32i(dword_4E507C) = edx; //mov
	to32i(dword_4E5078) = ebx; //mov
	to32i(dword_4E5080) = edx; //mov
	to32i(dword_4E5088) = edx; //mov
	to32i(dword_4E508C) = edx; //mov
	to32i(dword_4E5090) = edx; //mov
	xor_(ah, ah);
	to32i(dword_4E5094) = edx; //mov
	to8i(byte_4E5084) = ah; //mov
	to8i(byte_4E5085) = ah; //mov
	to8i(byte_4E5086) = ah; //mov
	cmp(ecx, (int32_t)5);
	if (jnz())
		goto loc_403116;
	xor_(ecx, ecx);
loc_403116:
	ebx = to32i(off_4D2004+ecx*4); //mov
	push32(ebx);
	push32(ebx);
	edi = to32i(dword_5134CC); //mov
	push32(edi);
	push32(aSSS_viv);
	push32(dword_4E504C);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	eax = (int32_t)(intptr_t)dword_4E504C; //mov
	esp -= 4; _sub_403150(); esp += 4; //call
	to32i(dword_4E5098) = eax; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_403150()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(1);
	push32(0);
	push32(0);
	push32(0);
	esp -= 4; _sub_485930(); esp += 4; //call
	ebx = 0x10; //mov
	edx = esp; //mov
	xor_(eax, eax);
	esp -= 4; _sub_485AA4(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_403263;
	xor_(ecx, ecx);
loc_403175:
	eax = ecx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_485BDC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403175;
	edx = to32i(esp); //mov
	eax = to32i(esp); //mov
	and_(edx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	shl(edx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	or_(eax, edx);
	edx = to32i(esp); //mov
	and_(edx, (int32_t)0xFF0000);
	shr(edx, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(edx, eax);
	eax = to32i(esp+0xC); //mov
	to32i(esp) = edx; //mov
	edx = to32i(esp+0xC); //mov
	and_(eax, (int32_t)0xFF00);
	and_(edx, (int32_t)0xFF);
	shl(eax, (int32_t)8);
	shl(edx, (int32_t)0x18);
	or_(edx, eax);
	eax = to32i(esp+0xC); //mov
	and_(eax, (int32_t)0xFF0000);
	shr(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp+0xC); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(edx, eax);
	eax = to32i(esp+8); //mov
	to32i(esp+0xC) = edx; //mov
	edx = to32i(esp+8); //mov
	and_(eax, (int32_t)0xFF00);
	and_(edx, (int32_t)0xFF);
	shl(eax, (int32_t)8);
	shl(edx, (int32_t)0x18);
	or_(edx, eax);
	eax = to32i(esp+8); //mov
	and_(eax, (int32_t)0xFF0000);
	shr(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(esp+8); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(edx, eax);
	ecx = 0x199; //mov
	to32i(esp+8) = edx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seFronten; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)aLumpyhead; //mov
	add(edx, (int32_t)0x20);
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_40326A;
loc_403263:
	add(esp, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40326A:
	ebx = to32i(esp+0xC); //mov
	edx = eax; //mov
	add(ebx, (int32_t)0x20);
	xor_(eax, eax);
	esp -= 4; _sub_485AA4(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_403263;
	xor_(ebx, ebx);
loc_403282:
	eax = ebx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_485BDC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403282;
	edx = to32i(ecx); //mov
	eax = to32i(ecx); //mov
	and_(edx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	shl(edx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(ecx); //mov
	and_(eax, (int32_t)0xFF0000);
	shr(eax, (int32_t)8);
	or_(eax, edx);
	edx = to32i(ecx); //mov
	and_(edx, (int32_t)0xFF000000);
	shr(edx, (int32_t)0x18);
	or_(eax, edx);
	to32i(ecx) = eax; //mov
	edx = to32i(ecx+0xC); //mov
	eax = to32i(ecx+0xC); //mov
	and_(edx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	shl(edx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(ecx+0xC); //mov
	and_(eax, (int32_t)0xFF0000);
	shr(eax, (int32_t)8);
	or_(edx, eax);
	eax = to32i(ecx+0xC); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(edx, eax);
	to32i(ecx+0xC) = edx; //mov
	eax = to32i(ecx+8); //mov
	edx = to32i(ecx+8); //mov
	and_(eax, (int32_t)0xFF00);
	and_(edx, (int32_t)0xFF);
	shl(eax, (int32_t)8);
	shl(edx, (int32_t)0x18);
	or_(edx, eax);
	eax = to32i(ecx+8); //mov
	and_(eax, (int32_t)0xFF0000);
	shr(eax, (int32_t)8);
	or_(eax, edx);
	edx = to32i(ecx+8); //mov
	and_(edx, (int32_t)0xFF000000);
	shr(edx, (int32_t)0x18);
	or_(eax, edx);
	to32i(ecx+8) = eax; //mov
	eax = ecx; //mov
	add(esp, (int32_t)0x10);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_403340()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	edi = edx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp) = ecx; //mov
	eax = to32i(esp+4); //mov
	xor_(ebx, ebx);
	to32i(eax) = ebx; //mov
	to32i(ecx) = ebx; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_40336C;
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
loc_403362:
	eax = ebx; //mov
	edx = to32i(ebp+8); //mov
	inc(ebx);
	cmp(eax, edx);
	if (jb())
		goto loc_403373;
loc_40336C:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_403373:
	ecx = (int32_t)(intptr_t)(esi+8); //lea
	eax = edi; //mov
	edx = ecx; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403398;
	dl = to8i(ecx); //mov
	eax = ecx; //mov
	test(dl, dl);
	if (jz())
		goto loc_403393;
loc_40338B:
	dh = to8i(eax+1); //mov
	inc(eax);
	test(dh, dh);
	if (jnz())
		goto loc_40338B;
loc_403393:
	esi = (int32_t)(intptr_t)(eax+1); //lea
	goto loc_403362;
loc_403398:
	ecx = to32i(esi); //mov
	eax = to32i(esi); //mov
	and_(ecx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	shl(ecx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	or_(eax, ecx);
	ecx = to32i(esi); //mov
	and_(ecx, (int32_t)0xFF0000);
	shr(ecx, (int32_t)8);
	or_(ecx, eax);
	eax = to32i(esi); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(ecx, eax);
	eax = to32i(esp+4); //mov
	to32i(eax) = ecx; //mov
	ecx = to32i(esi+4); //mov
	eax = to32i(esi+4); //mov
	and_(ecx, (int32_t)0xFF);
	and_(eax, (int32_t)0xFF00);
	shl(ecx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	or_(eax, ecx);
	ecx = to32i(esi+4); //mov
	and_(ecx, (int32_t)0xFF0000);
	shr(ecx, (int32_t)8);
	or_(ecx, eax);
	eax = to32i(esi+4); //mov
	and_(eax, (int32_t)0xFF000000);
	shr(eax, (int32_t)0x18);
	or_(ecx, eax);
	eax = to32i(esp); //mov
	to32i(eax) = ecx; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_403410()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	ebp = edx; //mov
	esi = ebx; //mov
	to32i(esp) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_40342E;
	xor_(ecx, ecx);
loc_403425:
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_40342E:
	edx = (int32_t)(intptr_t)aCNfs2seFronten; //mov
	ecx = 0x14F; //mov
	eax = (int32_t)(intptr_t)aStreambuffer; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = edx; //mov
	edx = esi; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_403425;
	eax = edi; //mov
	esp -= 4; _sub_485930(); esp += 4; //call
	ebx = esi; //mov
	edx = ecx; //mov
	eax = ebp; //mov
	esi = to32i(esp); //mov
	esp -= 4; _sub_485AA4(); esp += 4; //call
	to32i(esi) = eax; //mov
	eax = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_403480()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	ecx = eax; //mov
	esp -= 4; _sub_403920(); esp += 4; //call
	eax = to32i(dword_4D5A30); //mov
	to32i(dword_4E509C) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_4034A5;
	to32i(dword_4E509C) = 0x7F; //mov
loc_4034A5:
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)dword_4E5074; //mov
	edx = ecx; //mov
	xor_(esi, esi);
	esp -= 4; _strncpy_(); esp += 4; //call
	to32i(dword_4E507C) = esi; //mov
	ah = to8i(ecx); //mov
	to32i(dword_4E5080) = esi; //mov
	cmp(ah, (int8_t)0x63);
	if (jz())
		goto loc_40354C;
	eax = 1; //mov
loc_4034D4:
	to32i(dword_4E5078) = eax; //mov
	xor_(dl, dl);
	xor_(ebp, ebp);
	eax = (int32_t)(intptr_t)dword_4E5074; //mov
	to8i(byte_4E5084) = dl; //mov
	to8i(byte_4E5085) = dl; //mov
	to8i(byte_4E5086) = dl; //mov
	to32i(dword_4E5088) = ebp; //mov
	to32i(dword_4E508C) = ebp; //mov
	to32i(dword_4E5090) = ebp; //mov
	to32i(dword_4E5094) = ebp; //mov
	esp -= 4; _sub_403860(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40353C;
	cmp(to32i(dword_4D5A30), (int32_t)0);
	if (jz())
		goto loc_40353C;
	eax = to32i(dword_4D5A28); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	eax = 0xA; //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
loc_40353C:
	esp -= 4; _sub_4038F0(); esp += 4; //call
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40354C:
	xor_(eax, eax);
	goto loc_4034D4;
}
Fn(void) Game::_sub_403550()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	esp -= 4; _sub_403920(); esp += 4; //call
	cmp(to8i(byte_4E5084), (int8_t)0);
	if (jnz())
		goto loc_4035AB;
loc_40356B:
	cmp(to8i(byte_4E5085), (int8_t)0);
	if (jnz())
		goto loc_4035CA;
loc_403574:
	cmp(to32i(dword_4D1FFC), (int32_t)0);
	if (jz())
		goto loc_403737;
loc_403581:
	cmp(to8i(byte_4E5084), (int8_t)0);
	if (jz())
		goto loc_40368F;
	xor_(edx, edx);
loc_403590:
	eax = to32i(dword_4E5094); //mov
	esp -= 4; _sub_485BDC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40368F;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_403590;
loc_4035AB:
	eax = to32i(dword_4E5094); //mov
	esp -= 4; _sub_485BDC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40356B;
	xor_(dl, dl);
	to8i(byte_4E5084) = dl; //mov
	to8i(byte_4E5086) = 1; //mov
	goto loc_40356B;
loc_4035CA:
	eax = to32i(dword_4E5080); //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403574;
	ebx = 0xFFFFFFFF; //mov
	eax = to32i(dword_4E5080); //mov
	xor_(edx, edx);
	esp -= 4; _sub_486080(); esp += 4; //call
	eax = to32i(dword_4E507C); //mov
	esp -= 4; _sub_486404(); esp += 4; //call
	edx = to32i(dword_4E5090); //mov
	test(edx, edx);
	if (jz())
		goto loc_40360C;
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E5090) = ecx; //mov
loc_40360C:
	ebx = to32i(dword_4E5088); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_403625;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E5088) = esi; //mov
loc_403625:
	cmp(to8i(byte_4E5084), (int8_t)0);
	if (jz())
		goto loc_403656;
	xor_(edx, edx);
loc_403630:
	eax = to32i(dword_4E5094); //mov
	esp -= 4; _sub_485BDC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_403647;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_403630;
loc_403647:
	xor_(cl, cl);
	to8i(byte_4E5084) = cl; //mov
	to8i(byte_4E5086) = 1; //mov
loc_403656:
	xor_(al, al);
	xor_(edi, edi);
	to8i(byte_4E5085) = al; //mov
	ah = to8i(byte_4E5084); //mov
	to32i(dword_4E507C) = edi; //mov
	test(ah, ah);
	if (jnz())
		goto loc_403574;
	cmp(to8i(byte_4E5086), (int8_t)0);
	if (jnz())
		goto loc_403574;
	to32i(dword_4D1FFC) = 1; //mov
	goto loc_403581;
loc_40368F:
	cmp(to8i(byte_4E5085), (int8_t)0);
	if (jz())
		goto loc_4036B3;
	ebx = 0xFFFFFFFF; //mov
	eax = to32i(dword_4E5080); //mov
	xor_(edx, edx);
	esp -= 4; _sub_486080(); esp += 4; //call
	eax = to32i(dword_4E507C); //mov
	esp -= 4; _sub_486404(); esp += 4; //call
loc_4036B3:
	eax = 0x64; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	edx = to32i(dword_4E508C); //mov
	test(edx, edx);
	if (jz())
		goto loc_4036DC;
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E508C) = ecx; //mov
loc_4036DC:
	ebx = to32i(dword_4E5090); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4036F5;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E5090) = esi; //mov
loc_4036F5:
	edi = to32i(dword_4E5088); //mov
	test(edi, edi);
	if (jz())
		goto loc_40370E;
	eax = edi; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4E5088) = ebp; //mov
loc_40370E:
	xor_(ah, ah);
	xor_(dh, dh);
	to8i(byte_4E5086) = ah; //mov
	to8i(byte_4E5085) = ah; //mov
	xor_(eax, eax);
	to8i(byte_4E5084) = dh; //mov
	to32i(dword_4D1FFC) = eax; //mov
loc_40372B:
	esp -= 4; _sub_4038F0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_403737:
	cmp(to8i(byte_4E5086), (int8_t)0);
	if (jz())
		goto loc_40372B;
	bl = to8i(byte_4E5085); //mov
	test(bl, bl);
	if (jnz())
		goto loc_40372B;
	cmp(to8i(byte_4E5084), (int8_t)0);
	if (jnz())
		goto loc_40372B;
	eax = (int32_t)(intptr_t)dword_4E5074; //mov
	esp -= 4; _sub_403770(); esp += 4; //call
	to8i(byte_4E5086) = bl; //mov
	esp -= 4; _sub_4038F0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_403770()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	edx = to32i(eax+0x18); //mov
	test(edx, edx);
	if (jnz())
		goto loc_40378C;
loc_403782:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40378C:
	add(eax, (int32_t)8);
	esp -= 4; _sub_485364(); esp += 4; //call
	cmp(eax, (int32_t)7);
	if (jnz())
		goto loc_403838;
	ebx = (int32_t)(intptr_t)aCNfs2seFronten; //mov
	esi = 0x81; //mov
	eax = to32i(ecx+8); //mov
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_485160(); esp += 4; //call
	edx = eax; //mov
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aComheader; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(ecx+8); //mov
	to32i(ecx+0x14) = eax; //mov
	esp -= 4; _sub_485218(); esp += 4; //call
	edi = to32i(ecx+0x18); //mov
	test(edi, edi);
	if (jz())
		goto loc_4037E9;
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(ecx+0x18) = 0; //mov
loc_4037E9:
	eax = esp; //mov
	esp -= 4; _sub_485380(); esp += 4; //call
	al = to8i(ecx+8); //mov
	to8i(esp+4) = al; //mov
	al = to8i(dword_4E509C); //mov
	xor_(ebp, ebp);
	to8i(esp+8) = al; //mov
	eax = esp; //mov
	to32i(esp) = ebp; //mov
	esp -= 4; _sub_4853C0(); esp += 4; //call
	to32i(ecx+0xC) = eax; //mov
	eax = to32i(ecx+4); //mov
	to8i(ecx+0x11) = 1; //mov
	test(eax, eax);
	if (jz())
		goto loc_403782;
	ah = to8i(ecx+2); //mov
	cmp(ah, (int8_t)0x39);
	if (jb())
		goto loc_403847;
	to8i(ecx+0x12) = 0; //mov
	to8i(ecx+0x10) = 0; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_403838:
	eax = to32i(ecx+0x18); //mov
	to32i(ecx+0x18) = 0; //mov
	to32i(ecx+0x1C) = eax; //mov
	goto loc_4037E9;
loc_403847:
	dl = ah; //mov
	inc(dl);
	eax = ecx; //mov
	to8i(ecx+2) = dl; //mov
	esp -= 4; _sub_403860(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_403860()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	ecx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(dword_4E5098); //mov
	edx = esi; //mov
	esp -= 4; _sub_403340(); esp += 4; //call
	cmp(to32i(esp+4), (int32_t)0);
	if (jz())
		goto loc_4038C8;
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_4038C8;
	ebx = to32i(esi+0x18); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40389E;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(esi+0x18) = 0; //mov
loc_40389E:
	ebx = to32i(esp); //mov
	edx = to32i(esp+4); //mov
	eax = (int32_t)(intptr_t)dword_4E504C; //mov
	ecx = (int32_t)(intptr_t)(esi+0x20); //lea
	esp -= 4; _sub_403410(); esp += 4; //call
	edi = to32i(esi+0x20); //mov
	to32i(esi+0x18) = eax; //mov
	test(edi, edi);
	if (jnz())
		goto loc_4038D3;
	test(eax, eax);
	if (jz())
		goto loc_4038C8;
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(esi+0x18) = edi; //mov
loc_4038C8:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4038D3:
	to8i(esi+0x12) = 0; //mov
	eax = 1; //mov
	to8i(esi+0x10) = 1; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4038F0()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D2000); //mov
	test(edx, edx);
	if (jz())
		goto loc_403909;
	ecx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(dword_4D2000) = ecx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_40390C;
loc_403909:
	pop32(edx);
	pop32(ecx);
	return;
loc_40390C:
	eax = (int32_t)(intptr_t)dword_4E5014; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_403920()
{
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D2000); //mov
	test(edx, edx);
	if (jnz())
		goto loc_403962;
	pop32(edx);
	pop32(ecx);
	return;
loc_403962:
	ecx = (int32_t)(intptr_t)(edx+1); //lea
	to32i(dword_4D2000) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_403970()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	edi = 1; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	xor_(ebp, ebp);
	al = to8i(byte_512DA8); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+8) = eax; //mov
	eax = esi; //mov
	to32i(esp) = edx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
loc_40399D:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ebp, eax);
	xor_(edx, edx);
	eax = esi; //mov
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403ADC;
loc_4039B5:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	cmp(to8i(byte_512DFB), (int8_t)2);
	if (jnz())
		goto loc_403AEA;
	ecx = 1; //mov
	ebx = 0x4D; //mov
	edx = 0x12C; //mov
loc_403A13:
	eax = 0x137; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_403A27:
	esp -= 4; _sub_423B90(); esp += 4; //call
	ecx = 0x1E0; //mov
	eax = esi; //mov
	ebx = 0x87; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	xor_(edx, edx);
	edi = eax; //mov
	eax = 0x1F9; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	to8i(byte_512DA8) = al; //mov
	ebx = to32i(esp+8); //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, ebx);
	if (jz())
		goto loc_403A75;
	edx = 0x2D; //mov
	to32i(esp+8) = eax; //mov
	eax = 1; //mov
	edi = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_403A75:
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_403AC4;
	cmp(ebp, to32i(esp));
	if (jle())
		goto loc_403AC4;
	edi = 1; //mov
	ecx = (int32_t)(intptr_t)(ebp+0xF); //lea
	bx = to16i(esi+0xA); //mov
	to32i(esp) = ecx; //mov
	cmp(bx, (int16_t)0xA);
	if (jge())
		goto loc_403B04;
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_403AFE;
loc_403AA1:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(to8i(byte_512DA8), (int8_t)0);
	if (jnz())
		goto loc_403B14;
	al = 1; //mov
loc_403AB8:
	to8i(byte_512DA8) = al; //mov
	eax = esi; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
loc_403AC4:
	ebx = to32i(esp+4); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40399D;
	eax = ebx; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_403ADC:
	test(di, di);
	if (jnz())
		goto loc_4039B5;
	goto loc_403A27;
loc_403AEA:
	ecx = 1; //mov
	ebx = 0x4D; //mov
	edx = 0x16B; //mov
	goto loc_403A13;
loc_403AFE:
	cmp(ax, (int16_t)0x4D00);
	if (jz())
		goto loc_403AA1;
loc_403B04:
	edx = dx; //movsx
	eax = esi; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	goto loc_403AC4;
loc_403B14:
	xor_(al, al);
	goto loc_403AB8;
}
Fn(void) Game::_sub_403B20()
{
	push32(ecx);
	ah = 1; //mov
	ch = to8i(byte_512DA9); //mov
	to8i(byte_512DD9) = ah; //mov
	to8i(byte_512DD6) = ah; //mov
	to8i(byte_512DF3) = ah; //mov
	to8i(byte_512DF4) = ah; //mov
	to8i(byte_512DF2) = ah; //mov
	to8i(byte_512DD8) = ah; //mov
	cmp(ch, ah);
	if (jnz())
		goto loc_403BAD;
	eax = to32i(dword_512E34); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD6) = al; //mov
	eax = to32i(dword_512E44); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD8) = al; //mov
	eax = to32i(dword_512E4C); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD9) = al; //mov
	eax = to32i(dword_512E38); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DF2) = al; //mov
	eax = to32i(dword_512E48); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DF3) = al; //mov
	eax = to32i(dword_512E50); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DF4) = al; //mov
	pop32(ecx);
	return;
loc_403BAD:
	eax = to32i(dword_512E0C); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD6) = al; //mov
	eax = to32i(dword_512E14); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD8) = al; //mov
	eax = to32i(dword_512E18); //mov
	esp -= 4; _sub_403BE0(); esp += 4; //call
	to8i(byte_512DD9) = al; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_403BE0()
{
	push32(ebx);
	push32(edx);
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_403BF7;
loc_403BEF:
	eax = 1; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_403BF7:
	sar(eax, (int32_t)0x1C);
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = al; //movsx
	esp -= 4; _sub_421BD0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403BEF;
	test(to8i(eax+8), (int8_t)4);
	if (jnz())
		goto loc_403BEF;
	xor_(eax, eax);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_403C20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x84);
	to32i(esp+0x64) = eax; //mov
	xor_(edx, edx);
	esp -= 4; _sub_410E80(); esp += 4; //call
	to32i(esp+0x74) = edx; //mov
	edx = 1; //mov
	eax = 0x140; //mov
	to32i(esp+0x80) = edx; //mov
	edx = 0xC8; //mov
	esp -= 4; _sub_4242C0(); esp += 4; //call
loc_403C56:
	esp -= 4; _sub_405960(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_403C56;
	to32i(esp+0x78) = eax; //mov
	xor_(esi, esi);
	ebp = 0xC; //mov
loc_403C6A:
	ebx = to32i(esp+0x78); //mov
	edx = esi; //mov
	xor_(ecx, ecx);
	shl(ebx, (int32_t)2);
loc_403C75:
	to16i(dword_512ED4+2+edx) = 0xFF; //mov
	xor_(edi, edi);
	to32i(esp+ebx) = ecx; //mov
	to16i(dword_512F1C+2+edx) = di; //mov
	edi = to32i(esp+0x78); //mov
	to32i(esp+ebx+0x30) = eax; //mov
	cmp(ebp, edi);
	if (jg())
		goto loc_403DB7;
loc_403C9A:
	inc(ecx);
	add(edx, (int32_t)2);
	cmp(ecx, (int32_t)6);
	if (jl())
		goto loc_403C75;
	inc(eax);
	add(esi, (int32_t)0xC);
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_403C6A;
	eax = to32i(esp+0x78); //mov
	shl(eax, (int32_t)2);
	to32i(esp+0x60) = eax; //mov
	to32i(esp+0x70) = eax; //mov
loc_403CBB:
	cmp(to32i(esp+0x74), (int32_t)0);
	if (jz())
		goto loc_403DC4;
loc_403CC6:
	xor_(ebp, ebp);
	xor_(edi, edi);
loc_403CCA:
	ebx = ebp; //mov
	xor_(esi, esi);
loc_403CCE:
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_477BA0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(dword_512ED4+ebx); //mov
	ecx = (int32_t)(intptr_t)(eax+eax*8); //lea
	sar(edx, (int32_t)0x10);
	add(edx, ecx);
	to32i(esp+0x7C) = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp+0x7C));
	edx = to32i(dword_512F1C+ebx); //mov
	sar(edx, (int32_t)0x10);
	to16i(dword_512EEC+2+ebx) = ax; //mov
	add(edx, ecx);
	ecx = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(ebx, (int32_t)2);
	inc(esi);
	to16i(dword_512F04+ebx) = ax; //mov
	cmp(esi, (int32_t)6);
	if (jl())
		goto loc_403CCE;
	inc(edi);
	add(ebp, (int32_t)0xC);
	cmp(edi, (int32_t)2);
	if (jl())
		goto loc_403CCA;
	ebp = 0xFF; //mov
	xor_(eax, eax);
loc_403D41:
	edx = to32i(off_4D206C+eax*4); //mov
	edx = to32i(edx); //mov
	ecx = edx; //mov
	and_(ecx, ebp);
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_403DA0;
	ecx = edx; //mov
	sar(ecx, (int32_t)0x1C);
	imul32(edi, ecx, 0xC);
	eax = edx; //mov
	esi = edx; //mov
	ebx = edx; //mov
	sar(eax, (int32_t)0x18);
	sar(esi, (int32_t)0x10);
	sar(ebx, (int32_t)8);
	and_(eax, (int32_t)0xF);
	and_(esi, ebp);
	edx = eax; //mov
	and_(ebx, ebp);
	shl(edx, (int32_t)0x10);
	add(eax, eax);
	shl(ecx, (int32_t)0x14);
	add(eax, edi);
	add(edx, ecx);
	cmp(esi, ebx);
	if (jge())
		goto loc_403FAC;
	ecx = to32i(dword_512F04+eax); //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(dword_512F1C+eax); //mov
loc_403D96:
	shl(ecx, (int32_t)8);
	sar(eax, (int32_t)0x10);
	add(edx, ecx);
	add(eax, edx);
loc_403DA0:
	inc(eax);
	cmp(eax, (int32_t)0xA);
	if (jl())
		goto loc_403D41;
	eax = to32i(esp+0x74); //mov
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_403DB7:
	inc(edi);
	add(ebx, (int32_t)4);
	to32i(esp+0x78) = edi; //mov
	goto loc_403C9A;
loc_403DC4:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	eax = to32i(esp+0x64); //mov
	xor_(edx, edx);
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_403F82;
loc_403DDC:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0x64); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+0x80) = edx; //mov
	eax = to32i(eax+4); //mov
	edx = 0x400; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = to32i(esp+0x64); //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	cmp(to32i(esp+0x78), (int32_t)0);
	if (jle())
		goto loc_403EB7;
	ebp = to32i(esp+0x60); //mov
	xor_(ebx, ebx);
loc_403E3E:
	edi = to32i(esp+ebx); //mov
	esi = to32i(esp+ebx+0x30); //mov
	edx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_477BA0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	imul32(edx, esi, 0xC);
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(edi+edi); //lea
	add(edx, eax);
	eax = to32i(dword_512ED4+edx); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jge())
		goto loc_403E84;
	eax = ecx; //mov
	to16i(dword_512ED4+2+edx) = cx; //mov
	test(ax, ax);
	if (jl())
		goto loc_403F93;
loc_403E84:
	imul32(esi, 0xC);
	edx = (int32_t)(intptr_t)(edi+edi); //lea
	add(edx, esi);
	eax = to32i(dword_512F1C+edx); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jle())
		goto loc_403EB0;
	to16i(dword_512F1C+2+edx) = cx; //mov
	cmp(cx, (int16_t)0x100);
	if (jle())
		goto loc_403EB0;
	to16i(dword_512F1C+2+edx) = 0x100; //mov
loc_403EB0:
	add(ebx, (int32_t)4);
	cmp(ebx, ebp);
	if (jl())
		goto loc_403E3E;
loc_403EB7:
	cmp(to32i(esp+0x78), (int32_t)0);
	if (jle())
		goto loc_403F65;
	ebp = 0xF0; //mov
	eax = to32i(esp+0x70); //mov
	esi = 0xF4; //mov
	xor_(edi, edi);
	to32i(esp+0x68) = eax; //mov
loc_403ED6:
	ebx = 0x118; //mov
	eax = to32i(esp+edi+0x30); //mov
	edx = 0x3000; //mov
	to32i(esp+0x6C) = eax; //mov
	eax = to32i(esp+edi); //mov
	ecx = ebp; //mov
	to32i(esp+0x7C) = eax; //mov
	eax = (int32_t)(intptr_t)aCali; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	imul32(edx, to32i(esp+0x6C), 0xC);
	eax = to32i(esp+0x7C); //mov
	add(eax, eax);
	add(edx, eax);
	ecx = esi; //mov
	eax = (int32_t)(intptr_t)aCtab; //mov
	ebx = to32i(dword_512ED4+edx); //mov
	to32i(esp+0x6C) = edx; //mov
	sar(ebx, (int32_t)0x10);
	edx = 0x3000; //mov
	add(ebx, (int32_t)0x145);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ebx = to32i(esp+0x6C); //mov
	add(edi, (int32_t)4);
	edx = 0x3000; //mov
	ebx = to32i(dword_512F1C+ebx); //mov
	eax = (int32_t)(intptr_t)aCtab; //mov
	sar(ebx, (int32_t)0x10);
	ecx = esi; //mov
	add(ebx, (int32_t)0x145);
	add(ebp, (int32_t)0x2D);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ebx = to32i(esp+0x68); //mov
	add(esi, (int32_t)0x2D);
	cmp(edi, ebx);
	if (jl())
		goto loc_403ED6;
loc_403F65:
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_403F6A:
	esp -= 4; _sub_405960(); esp += 4; //call
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_403FA1;
loc_403F75:
	to32i(esp+0x74) = 0xFFFFFFFF; //mov
	goto loc_403CC6;
loc_403F82:
	cmp(to16i(esp+0x80), (int16_t)0);
	if (jnz())
		goto loc_403DDC;
	goto loc_403F6A;
loc_403F93:
	xor_(eax, eax);
	to16i(dword_512ED4+2+edx) = ax; //mov
	goto loc_403E84;
loc_403FA1:
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_403F75;
	goto loc_403CBB;
loc_403FAC:
	ecx = to32i(dword_512EEC+eax); //mov
	sar(ecx, (int32_t)0x10);
	eax = to32i(dword_512ED4+eax); //mov
	goto loc_403D96;
}
Fn(void) Game::_sub_403FC0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	to32i(esp+0x2C) = eax; //mov
	to32i(esp+0x34) = edx; //mov
	ebx = 1; //mov
	xor_(edx, edx);
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x38) = edx; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x20) = edx; //mov
	dl = to8i(eax+9); //mov
	to32i(esp+0x28) = ebx; //mov
	cmp(dl, (int8_t)0xD);
	if (jz())
		goto loc_404154;
loc_403FF7:
	eax = to32i(esp+0x18); //mov
	edx = to32i(esp+0x34); //mov
	shl(eax, (int32_t)2);
	edx = to32i(edx+0xC); //mov
	add(eax, edx);
	edx = to32i(eax); //mov
	to32i(esp+0x24) = edx; //mov
	to32i(eax) = 0; //mov
	edi = 1; //mov
	xor_(esi, esi);
loc_40401A:
	edx = esi; //mov
	ecx = esi; //mov
	ebx = esi; //mov
loc_404020:
	cmp(si, to16i(dword_512F34+2+ecx));
	if (jz())
		goto loc_404036;
	eax = edx; //mov
	esp -= 4; _sub_477B70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_404036;
	ebx = edi; //mov
loc_404036:
	inc(edx);
	add(ecx, (int32_t)2);
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_404020;
	test(ebx, ebx);
	if (jnz())
		goto loc_40401A;
	eax = (int32_t)(intptr_t)dword_4E50A0; //mov
	ebp = 1; //mov
	to32i(esp+0x3C) = ebx; //mov
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp+0x30) = eax; //mov
loc_404059:
	eax = to32i(esp+0x3C); //mov
	cmp(to16i(dword_512F34+2+eax), (int16_t)0);
	if (jz())
		goto loc_404111;
	esi = to32i(esp+0x3C); //mov
	ebx = to32i(esp+0x30); //mov
	xor_(eax, eax);
	esi = to32i(byte_512F38+esi); //mov
	xor_(edx, edx);
	sar(esi, (int32_t)0x10);
loc_404080:
	edi = 1; //mov
	cl = al; //mov
	shl(edi, cl);
	test(esi, edi);
	if (jz())
		goto loc_40416A;
	ecx = (int32_t)(intptr_t)(edx+ebx); //lea
loc_404094:
	to32i(esp+edx) = ecx; //mov
	inc(eax);
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)6);
	if (jl())
		goto loc_404080;
	push32(0);
	ebx = to32i(esp+0x18); //mov
	esi = to32i(esp+0x14); //mov
	push32(ebx);
	edi = to32i(esp+0x14); //mov
	eax = to32i(esp+0x10); //mov
	push32(esi);
	ecx = to32i(esp+0x10); //mov
	xor_(edx, edx);
	push32(edi);
	ebx = to32i(esp+0x10); //mov
	xor_(esi, esi);
	push32(eax);
	eax = to32i(esp+0x30); //mov
	edi = to32i(esp+0x50); //mov
	esp -= 4; _sub_477C10(); esp += 4; //call
	xor_(ebx, ebx);
loc_4040D1:
	cl = bl; //mov
	eax = to32i(byte_512F38+edi); //mov
	edx = ebp; //mov
	sar(eax, (int32_t)0x10);
	shl(edx, cl);
	test(eax, edx);
	if (jz())
		goto loc_404108;
	ecx = to32i(esp+esi); //mov
	eax = to32i(ecx); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx) = eax; //mov
	eax = to32i(esp+esi); //mov
	edx = to32i(eax); //mov
	test(edx, edx);
	if (jl())
		goto loc_404171;
	eax = edx; //mov
loc_404103:
	edx = to32i(esp+esi); //mov
	to32i(edx) = eax; //mov
loc_404108:
	inc(ebx);
	add(esi, (int32_t)4);
	cmp(ebx, (int32_t)6);
	if (jl())
		goto loc_4040D1;
loc_404111:
	ebx = to32i(esp+0x3C); //mov
	esi = to32i(esp+0x1C); //mov
	ecx = to32i(esp+0x30); //mov
	add(ebx, (int32_t)2);
	inc(esi);
	add(ecx, (int32_t)0x18);
	to32i(esp+0x3C) = ebx; //mov
	to32i(esp+0x1C) = esi; //mov
	to32i(esp+0x30) = ecx; //mov
	cmp(esi, (int32_t)2);
	if (jl())
		goto loc_404059;
	ecx = 0x1C; //mov
	xor_(edx, edx);
loc_404140:
	eax = ecx; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_404175;
loc_40414B:
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_404140;
loc_404154:
	cmp(to8i(byte_512DA8), (int8_t)0);
	if (jz())
		goto loc_403FF7;
	to32i(esp+0x18) = ebx; //mov
	goto loc_403FF7;
loc_40416A:
	xor_(ecx, ecx);
	goto loc_404094;
loc_404171:
	xor_(eax, eax);
	goto loc_404103;
loc_404175:
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40414B;
	esi = to32i(esp+0x18); //mov
	shl(esi, (int32_t)2);
	ebp = 0x135; //mov
	xor_(edi, edi);
loc_40418C:
	cmp(edi, to32i(esp+0x28));
	if (jnz())
		goto loc_40419F;
	eax = to32i(esp+0x20); //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40419F:
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = to32i(esp+0x2C); //mov
	edx = 0x400; //mov
	ecx = edi; //mov
	ebx = edi; //mov
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	ecx = edi; //mov
	ebx = edi; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = to32i(esp+0x2C); //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(esp+0x34); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	eax = 0x120; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	eax = to32i(esp+0x34); //mov
	cmp(to8i(eax+9), (int8_t)0xD);
	if (jnz())
		goto loc_4042D1;
	ecx = 1; //mov
	ebx = 0x4D; //mov
	edx = 0x16B; //mov
loc_40421C:
	eax = ebp; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_482030(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0x3B);
	if (jge())
		goto loc_404304;
loc_404247:
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40426C;
	and_(eax, (int32_t)0xFFFF);
	cmp(eax, (int32_t)0x1B);
	if (jnz())
		goto loc_404312;
	eax = to32i(esp+0x34); //mov
	eax = to32i(eax+0xC); //mov
	edx = to32i(esp+0x24); //mov
	to32i(esp+0x28) = edi; //mov
	to32i(esi+eax) = edx; //mov
loc_40426C:
	cmp(edi, to32i(esp+0x38));
	if (jnz())
		goto loc_40427B;
	esp -= 4; _sub_404360(); esp += 4; //call
	to32i(esp+0x38) = eax; //mov
loc_40427B:
	ecx = to32i(esp+0x38); //mov
	cmp(edi, ecx);
	if (jz())
		goto loc_40418C;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	edx = to32i(esp+0x2C); //mov
	eax = ecx; //mov
	esp -= 4; _sub_404590(); esp += 4; //call
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x34); //mov
	shl(edx, (int32_t)2);
	eax = to32i(eax+0xC); //mov
	add(eax, edx);
	to32i(eax) = ecx; //mov
	esp -= 4; _sub_404540(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40433E;
	or_(to8i(byte_4D3468), (int8_t)1);
	eax = to32i(esp+0x20); //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4042D1:
	eax = ebp; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = 0x19A; //mov
	sub(edx, eax);
	ecx = 1; //mov
	edx = dx; //movsx
	goto loc_40421C;
loc_404304:
	cmp(edx, (int32_t)0x44);
	if (jg())
		goto loc_404247;
	goto loc_40426C;
loc_404312:
	test(eax, eax);
	if (jz())
		goto loc_40426C;
	cmp(eax, (int32_t)0xD);
	if (jz())
		goto loc_40426C;
	esp -= 4; _toupper_(); esp += 4; //call
	shl(eax, (int32_t)0x10);
	add(edx, eax);
	shl(edx, (int32_t)8);
	xor_(dl, dl);
	add(edx, (int32_t)4);
	to32i(esp+0x38) = edx; //mov
	goto loc_40426C;
loc_40433E:
	and_(to8i(byte_4D3468), (int8_t)0xFE);
	eax = to32i(esp+0x20); //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_404360()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	xor_(esi, esi);
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0xC) = esi; //mov
	to32i(esp) = esi; //mov
	to32i(esp+4) = esi; //mov
	to32i(esp+8) = esi; //mov
	to32i(esp+0x10) = esi; //mov
loc_404382:
	eax = to32i(esp); //mov
	cmp(to16i(dword_512F34+2+eax), (int16_t)0);
	if (jnz())
		goto loc_4043E2;
loc_40438F:
	ecx = to32i(esp); //mov
	ebx = to32i(esp+6); //mov
	edi = to32i(esp+0x10); //mov
	ebp = to32i(esp+0x18); //mov
	ah = to8i(esp+0xF); //mov
	add(ecx, (int32_t)2);
	add(ebx, (int32_t)0x10);
	add(edi, (int32_t)0x18);
	inc(ebp);
	inc(ah);
	to32i(esp) = ecx; //mov
	to16i(esp+6) = bx; //mov
	to32i(esp+0x10) = edi; //mov
	ebx = to32i(esp+8); //mov
	to32i(esp+0x18) = ebp; //mov
	add(ebx, (int32_t)0xC);
	to8i(esp+0xF) = ah; //mov
	to32i(esp+8) = ebx; //mov
	cmp(ebp, (int32_t)2);
	if (jge())
		goto loc_4043D6;
	test(esi, esi);
	if (jz())
		goto loc_404382;
loc_4043D6:
	eax = esi; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4043E2:
	eax = to32i(esp+0x18); //mov
	esp -= 4; _sub_477B70(); esp += 4; //call
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_404443;
	edi = to32i(esp); //mov
	edx = to32i(esp+0xC); //mov
	ecx = 1; //mov
	xor_(eax, eax);
loc_4043FF:
	ebx = to32i(dword_512F34+edi); //mov
	sar(ebx, (int32_t)0x10);
	cmp(eax, ebx);
	if (jl())
		goto loc_404424;
loc_40440C:
	xor_(edx, edx);
loc_40440E:
	eax = to32i(esp+0x18); //mov
	esp -= 4; _sub_477B70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_404443;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_40440E;
loc_404424:
	test(esi, esi);
	if (jnz())
		goto loc_40440C;
	test(ebp, ecx);
	if (jz())
		goto loc_40443F;
	esi = edx; //mov
	and_(si, (int16_t)0xFF00);
	add(esi, (int32_t)2);
loc_404436:
	inc(eax);
	add(edx, (int32_t)0x100);
	goto loc_4043FF;
loc_40443F:
	add(ecx, ecx);
	goto loc_404436;
loc_404443:
	edx = 1; //mov
	xor_(ebp, ebp);
	to32i(esp+0x1C) = edx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_40438F;
	eax = to32i(esp); //mov
	ebx = to32i(esp+8); //mov
	ecx = to32i(esp+4); //mov
	edi = to32i(esp+0x10); //mov
	to32i(esp+0x14) = eax; //mov
loc_404469:
	eax = to32i(esp+0x14); //mov
	eax = to32i(byte_512F38+eax); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x1C); //mov
	test(eax, edx);
	if (jnz())
		goto loc_40449D;
loc_40447E:
	add(ecx, (int32_t)0x10000);
	add(edi, (int32_t)4);
	inc(ebp);
	add(ebx, (int32_t)2);
	cmp(ebp, (int32_t)6);
	if (jge())
		goto loc_40438F;
	test(esi, esi);
	if (jz())
		goto loc_404469;
	goto loc_40438F;
loc_40449D:
	eax = to32i(esp+0x18); //mov
	edx = ebp; //mov
	esp -= 4; _sub_477BA0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	test(eax, eax);
	if (jl())
		goto loc_4044E5;
loc_4044B9:
	edx = to32i(dword_4E50A0+edi); //mov
	sub(eax, edx);
	cmp(eax, (int32_t)0x40);
	if (jle())
		goto loc_404505;
	cmp(edx, (int32_t)0x40);
	if (jge())
		goto loc_4044E9;
	eax = (int32_t)(intptr_t)(ecx+0x14EC); //lea
loc_4044D1:
	shl(eax, (int32_t)8);
	xor_(al, al);
	esi = (int32_t)(intptr_t)(eax+1); //lea
loc_4044D9:
	edx = to32i(esp+0x1C); //mov
	add(edx, edx);
	to32i(esp+0x1C) = edx; //mov
	goto loc_40447E;
loc_4044E5:
	xor_(eax, eax);
	goto loc_4044B9;
loc_4044E9:
	eax = to32i(dword_512F04+ebx); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)8);
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(dword_512F1C+ebx); //mov
	sar(eax, (int32_t)0x10);
	add(eax, edx);
	goto loc_4044D1;
loc_404505:
	cmp(eax, (int32_t)0xFFFFFFC0);
	if (jge())
		goto loc_4044D9;
	cmp(edx, (int32_t)0xC0);
	if (jle())
		goto loc_40451A;
	eax = (int32_t)(intptr_t)(ecx+0xEC14); //lea
	goto loc_4044D1;
loc_40451A:
	eax = to32i(dword_512EEC+ebx); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)8);
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(dword_512ED4+ebx); //mov
	sar(eax, (int32_t)0x10);
	add(eax, edx);
	goto loc_4044D1;
}
Fn(void) Game::_sub_404540()
{
	push32(edx);
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40456A;
	xor_(eax, eax);
loc_40454C:
	edx = to32i(off_4D201C+eax); //mov
	cmp(to32i(edx), (int32_t)0);
	if (jz())
		goto loc_404566;
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x50);
	if (jl())
		goto loc_40454C;
	eax = 1; //mov
	pop32(edx);
	return;
loc_404566:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_40456A:
	xor_(eax, eax);
loc_40456C:
	edx = to32i(off_4D206C+eax); //mov
	cmp(to32i(edx), (int32_t)0);
	if (jz())
		goto loc_404566;
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x28);
	if (jl())
		goto loc_40456C;
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_404590()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_4045DE;
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	cmp(edx, (int32_t)3);
	if (jnz())
		goto loc_40460B;
	bh = to8i(byte_512DA9); //mov
	and_(ecx, (int32_t)0xFFFFFF);
	cmp(bh, (int8_t)1);
	if (jnz())
		goto loc_4045E7;
	xor_(eax, eax);
loc_4045BE:
	edx = to32i(off_4D201C+eax); //mov
	ebx = to32i(edx); //mov
	and_(ebx, (int32_t)0xFFFFFF);
	cmp(ebx, ecx);
	if (jnz())
		goto loc_4045D6;
	to32i(edx) = 0; //mov
loc_4045D6:
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x50);
	if (jnz())
		goto loc_4045BE;
loc_4045DE:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4045E7:
	xor_(eax, eax);
loc_4045E9:
	edx = to32i(off_4D206C+eax); //mov
	ebx = to32i(edx); //mov
	and_(ebx, (int32_t)0xFFFFFF);
	cmp(ebx, ecx);
	if (jnz())
		goto loc_404601;
	to32i(edx) = 0; //mov
loc_404601:
	add(eax, (int32_t)4);
	cmp(eax, (int32_t)0x28);
	if (jz())
		goto loc_4045DE;
	goto loc_4045E9;
loc_40460B:
	bl = to8i(byte_512DA9); //mov
	esi = ecx; //mov
	edi = ecx; //mov
	and_(eax, (int32_t)0xFF0000FF);
	and_(esi, (int32_t)0xFF0000);
	and_(edi, (int32_t)0xFF00);
	cmp(bl, (int8_t)1);
	if (jnz())
		goto loc_4046B4;
	to32i(esp+4) = edx; //mov
	to32i(esp+0xC) = eax; //mov
	xor_(edx, edx);
loc_404639:
	eax = to32i(off_4D201C+edx); //mov
	ebx = to32i(eax); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_404655;
loc_404645:
	to32i(eax) = 0; //mov
loc_40464B:
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x50);
	if (jz())
		goto loc_4045DE;
	goto loc_404639;
loc_404655:
	ebp = to32i(esp+0xC); //mov
	and_(ebx, (int32_t)0xFF0000FF);
	cmp(ebx, ebp);
	if (jnz())
		goto loc_40464B;
	cmp(to32i(esp+4), (int32_t)1);
	if (jnz())
		goto loc_40464B;
	ebx = to32i(eax); //mov
	and_(ebx, (int32_t)0xFF0000);
	cmp(ebx, esi);
	if (jz())
		goto loc_404681;
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0xFF00);
	cmp(eax, edi);
	if (jnz())
		goto loc_404689;
loc_404681:
	eax = to32i(off_4D201C+edx); //mov
	goto loc_404645;
loc_404689:
	ebp = esi; //mov
	sar(ebp, (int32_t)8);
	and_(ebp, (int32_t)0xFF00);
	cmp(eax, ebp);
	if (jz())
		goto loc_404681;
	eax = edi; //mov
	shl(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF0000);
	cmp(ebx, eax);
	if (jz())
		goto loc_404681;
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x50);
	if (jz())
		goto loc_4045DE;
	goto loc_404639;
loc_4046B4:
	to32i(esp) = edx; //mov
	to32i(esp+8) = eax; //mov
	xor_(edx, edx);
loc_4046BD:
	eax = to32i(off_4D206C+edx); //mov
	ebx = to32i(eax); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_4046DD;
loc_4046C9:
	to32i(eax) = 0; //mov
loc_4046CF:
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x28);
	if (jz())
		goto loc_4045DE;
	goto loc_4046BD;
loc_4046DD:
	ebp = to32i(esp+8); //mov
	and_(ebx, (int32_t)0xFF0000FF);
	cmp(ebx, ebp);
	if (jnz())
		goto loc_4046CF;
	cmp(to32i(esp), (int32_t)1);
	if (jnz())
		goto loc_4046CF;
	ebx = to32i(eax); //mov
	and_(ebx, (int32_t)0xFF0000);
	cmp(ebx, esi);
	if (jz())
		goto loc_404708;
	eax = to32i(eax); //mov
	and_(eax, (int32_t)0xFF00);
	cmp(eax, edi);
	if (jnz())
		goto loc_404710;
loc_404708:
	eax = to32i(off_4D206C+edx); //mov
	goto loc_4046C9;
loc_404710:
	ebp = esi; //mov
	sar(ebp, (int32_t)8);
	and_(ebp, (int32_t)0xFF00);
	cmp(eax, ebp);
	if (jz())
		goto loc_404708;
	eax = edi; //mov
	shl(eax, (int32_t)8);
	and_(eax, (int32_t)0xFF0000);
	cmp(ebx, eax);
	if (jz())
		goto loc_404708;
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x28);
	if (jz())
		goto loc_4045DE;
	goto loc_4046BD;
}
Fn(void) Game::_sub_404740()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0xAC);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+0x78) = eax; //mov
	esi = edx; //mov
	to32i(esp+0x8C) = ebx; //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	to32i(esp+0x90) = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_40497E;
	eax = to32i(esp+0x78); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	to32i(esp+0x6C) = eax; //mov
	to32i(esp+0x68) = eax; //mov
loc_40478A:
	cmp(to32i(esp+0x90), (int32_t)0x12);
	if (jnz())
		goto loc_4049C4;
	eax = 0xA; //mov
	edi = 0x50; //mov
	to32i(esp) = eax; //mov
	to32i(esp+4) = edi; //mov
loc_4047A9:
	cmp(to8i(byte_512DFB), (int8_t)5);
	if (jz())
		goto loc_4049DA;
loc_4047B6:
	eax = (int32_t)(intptr_t)(esi+0x8A); //lea
	xor_(edx, edx);
	xor_(edi, edi);
	to32i(esp+0x74) = eax; //mov
	to32i(esp+0x88) = edx; //mov
loc_4047CB:
	eax = to32i(esp+0x78); //mov
	ecx = to32i(esp+4); //mov
	eax = to32i(eax+0xC); //mov
	add(ecx, esi);
	eax = to32i(edi+eax); //mov
	to32i(esp+0xA4) = ecx; //mov
	edx = eax; //mov
	ecx = eax; //mov
	and_(edx, (int32_t)0xFF);
	sar(ecx, (int32_t)8);
	sar(eax, (int32_t)0x18);
	to32i(esp+0x84) = ecx; //mov
	to32i(esp+0x7C) = eax; //mov
	cmp(edx, (int32_t)2);
	if (jnb())
		goto loc_404A2B;
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_404BE1;
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(esp+0x92); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	to32i(esp+0x9C) = eax; //mov
	eax = to32i(esp+0x8E); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0xA0); //mov
	to32i(esp+0x9C) = eax; //mov
	eax = 0x121; //mov
	ebx = to32i(esp+0x9C); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x121; //mov
	edx = to32i(esp); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	add(eax, esi);
	add(edx, eax);
	to32i(esp+0x80) = edx; //mov
	eax = to32i(esp+0x84); //mov
	sar(eax, (int32_t)0x14);
	inc(eax);
	push32(eax);
	push32(aD_4);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x7E); //mov
	push32(eax);
	ecx = to32i(esp+0x9C); //mov
	ebx = to32i(esp+0x98); //mov
	push32(3);
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0xA4); //mov
	push32(eax);
	ecx = to32i(esp+0x9C); //mov
	ebx = to32i(esp+0x98); //mov
	push32(3);
	eax = 0x123; //mov
	edx = si; //movsx
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x123; //mov
	ebx = to32i(esp); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	add(eax, ebx);
	add(esi, eax);
	eax = to32i(esp+0x7C); //mov
	and_(eax, (int32_t)0xF);
	push32(eax);
	push32(aD_4);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	edx = si; //movsx
	ecx = to32i(esp+0x9C); //mov
	push32(3);
	ebx = to32i(esp+0x9C); //mov
loc_40493A:
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
loc_40493E:
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+0x78); //mov
	cmp(to8i(eax+9), (int8_t)0xD);
	if (jnz())
		goto loc_404C11;
	eax = to32i(esp+0x88); //mov
	inc(eax);
	add(edi, (int32_t)4);
	to32i(esp+0x88) = eax; //mov
	cmp(eax, (int32_t)2);
	if (jge())
		goto loc_404C11;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_4047CB;
	esi = to32i(esp+0x74); //mov
	goto loc_4047CB;
loc_40497E:
	eax = to32i(esp+0x78); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6B0(); esp += 4; //call
	to32i(esp+0x6C) = eax; //mov
	to32i(esp+0x68) = eax; //mov
	eax = to32i(esp+0x78); //mov
	cmp(to8i(eax+9), (int8_t)0xD);
	if (jnz())
		goto loc_40478A;
	eax = to32i(eax); //mov
	ecx = 1; //mov
	sar(eax, (int32_t)0x10);
	xor_(edx, edx);
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	dl = to8i(byte_512DA8); //mov
	sub(ecx, edx);
	to32i(esp+ecx*4+0x68) = eax; //mov
	goto loc_40478A;
loc_4049C4:
	ebx = 6; //mov
	ecx = 0x42; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+4) = ecx; //mov
	goto loc_4047A9;
loc_4049DA:
	eax = to32i(esp+4); //mov
	to32i(esp+0xA8) = eax; //mov
	fild(to32i(esp+0xA8));
	eax = to32i(esp); //mov
	fld_st(0);
	to32i(esp+0xA8) = eax; //mov
	fmul(to64f(dbl_4C8114));
	fild(to32i(esp+0xA8));
	fld_st(0);
	fmul(to64f(dbl_4C811C));
	fxch_st(2);
	fstp_st(3);
	fxch_st(2);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+4));
	fstp_st(1);
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp));
	goto loc_4047B6;
loc_404A2B:
	if (jbe())
		goto loc_404AB4;
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_404BE1;
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(esp+0x92); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	to32i(esp+0x74) = eax; //mov
	eax = to32i(esp+0x8E); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x78); //mov
	to32i(esp+0xB0) = eax; //mov
	eax = 0x120; //mov
	ebx = to32i(esp+0xB0); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = to32i(esp+0x84); //mov
	esp -= 4; _sub_404C20(); esp += 4; //call
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0xA4); //mov
	push32(eax);
	ecx = to32i(esp+0x74); //mov
	ebx = to32i(esp+0xAC); //mov
	push32(3);
	edx = si; //movsx
	goto loc_40493A;
loc_404AB4:
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	eax = to32i(esp+0x92); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	to32i(esp+0xA0) = eax; //mov
	eax = to32i(esp+0x8E); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0xA4); //mov
	to32i(esp+0xA8) = eax; //mov
	eax = 0x121; //mov
	ebx = to32i(esp+0xA8); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x121; //mov
	edx = to32i(esp); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	add(eax, esi);
	add(edx, eax);
	to32i(esp+0x80) = edx; //mov
	eax = to32i(esp+0x7C); //mov
	inc(eax);
	push32(eax);
	push32(aD_4);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x7E); //mov
	push32(eax);
	ecx = to32i(esp+0xA0); //mov
	ebx = to32i(esp+0xA4); //mov
	push32(3);
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0xA4); //mov
	push32(eax);
	ecx = to32i(esp+0xA0); //mov
	ebx = to32i(esp+0xA4); //mov
	push32(3);
	eax = 0x122; //mov
	edx = si; //movsx
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = 0x122; //mov
	ecx = to32i(esp); //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_482424(); esp += 4; //call
	add(eax, ecx);
	add(esi, eax);
	eax = to32i(esp+0x84); //mov
	add(eax, (int32_t)0x41);
	push32(eax);
	push32(aC_0);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(esp+edi+0x66); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	edx = si; //movsx
	ecx = to32i(esp+0xA0); //mov
	push32(3);
	ebx = to32i(esp+0xA8); //mov
	goto loc_40493A;
loc_404BE1:
	ecx = to32i(esp+0x8E); //mov
	eax = to32i(esp+edi+0x66); //mov
	ebx = to32i(esp+0x8A); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	push32(eax);
	sar(ecx, (int32_t)0x10);
	push32(3);
	eax = 0x136; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_41B710(); esp += 4; //call
	goto loc_40493E;
loc_404C11:
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_404C20()
{
	push32(ecx);
	ecx = eax; //mov
	and_(eax, (int32_t)0xFFFF);
	cmp(eax, (int32_t)0x39);
	if (jnz())
		goto loc_404C5B;
	eax = 0x124; //mov
loc_404C32:
	push32(edi);
	push32(esi);
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	edi = edx; //mov
	push32(edi);
loc_404C3E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_404C56;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_404C3E;
loc_404C56:
	pop32(edi);
	pop32(esi);
	pop32(edi);
	pop32(ecx);
	return;
loc_404C5B:
	cmp(eax, (int32_t)0x1C);
	if (jnz())
		goto loc_404C67;
	eax = 0x125; //mov
	goto loc_404C32;
loc_404C67:
	cmp(eax, (int32_t)0x52);
	if (jnz())
		goto loc_404C73;
	eax = 0x126; //mov
	goto loc_404C32;
loc_404C73:
	cmp(eax, (int32_t)0x53);
	if (jnz())
		goto loc_404C7F;
	eax = 0x127; //mov
	goto loc_404C32;
loc_404C7F:
	cmp(eax, (int32_t)0x47);
	if (jnz())
		goto loc_404C8B;
	eax = 0x128; //mov
	goto loc_404C32;
loc_404C8B:
	cmp(eax, (int32_t)0x4F);
	if (jnz())
		goto loc_404C97;
	eax = 0x129; //mov
	goto loc_404C32;
loc_404C97:
	cmp(eax, (int32_t)0x49);
	if (jnz())
		goto loc_404CA3;
	eax = 0x12A; //mov
	goto loc_404C32;
loc_404CA3:
	cmp(eax, (int32_t)0x51);
	if (jnz())
		goto loc_404CAF;
	eax = 0x12B; //mov
	goto loc_404C32;
loc_404CAF:
	cmp(eax, (int32_t)0x48);
	if (jnz())
		goto loc_404CBE;
	eax = 0x12C; //mov
	goto loc_404C32;
loc_404CBE:
	cmp(eax, (int32_t)0x50);
	if (jnz())
		goto loc_404CCD;
	eax = 0x12D; //mov
	goto loc_404C32;
loc_404CCD:
	cmp(eax, (int32_t)0x4B);
	if (jnz())
		goto loc_404CDC;
	eax = 0x12E; //mov
	goto loc_404C32;
loc_404CDC:
	cmp(eax, (int32_t)0x4D);
	if (jnz())
		goto loc_404CEB;
	eax = 0x12F; //mov
	goto loc_404C32;
loc_404CEB:
	cmp(eax, (int32_t)0xE);
	if (jnz())
		goto loc_404CFA;
	eax = 0x130; //mov
	goto loc_404C32;
loc_404CFA:
	cmp(eax, (int32_t)0xF);
	if (jnz())
		goto loc_404D09;
	eax = 0x131; //mov
	goto loc_404C32;
loc_404D09:
	cmp(eax, (int32_t)0x4C);
	if (jnz())
		goto loc_404D18;
	eax = 0x132; //mov
	goto loc_404C32;
loc_404D18:
	eax = ecx; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _toupper_(); esp += 4; //call
	push32(eax);
	push32(aC_0);
	push32(edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	pop32(ecx);
}
Fn(void) Game::_sub_404D40()
{
	and_(eax, (int32_t)0xFF);
}
Fn(void) Game::_sub_404D50()
{
	shl(edx, (int32_t)8);
	eax = al; //movsx
	xor_(dl, dl);
	add(eax, edx);
}
Fn(void) Game::_sub_404D60()
{
	cmp(to16i(word_4D231A), (int16_t)0);
	if (jnz())
		goto loc_404D6D;
	xor_(eax, eax);
	return;
loc_404D6D:
	esp -= 4; _sub_405A60(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 1; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_404D8A;
loc_404D84:
	eax = 1; //mov
	return;
loc_404D8A:
	eax = 0x39; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 0x1C; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 0x48; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 0x50; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 0x4B; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	eax = 0x4D; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_404D84;
	cmp(to32i(dword_4D4C88), (int32_t)0);
	if (jnz())
		goto loc_404D84;
}
Fn(void) Game::_sub_404E44()
{
	static const void *const off_404DF0[] = {
		&&loc_404EF1,
		&&loc_404EFF,
		&&loc_404F1D,
		&&loc_404F53,
	};
	static const void *const off_404E00[] = {
		&&loc_404EB4,
		&&loc_404FD8,
		&&loc_405018,
		&&loc_405056,
		&&loc_405095,
		&&loc_4050CC,
		&&loc_4050FA,
		&&loc_40512F,
		&&loc_404EDA,
		&&loc_40518A,
		&&loc_40515C,
		&&loc_4051B7,
		&&loc_4051E5,
		&&loc_405221,
		&&loc_405263,
		&&loc_4052A3,
		&&loc_4052E5,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_404EE3;
	ah = to8i(byte_512DA9); //mov
	test(ah, ah);
	if (jz())
		goto loc_404E67;
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_404EE3;
loc_404E67:
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jnz())
		goto loc_404EE3;
	eax = ebp; //mov
	esp -= 4; _toupper_(); esp += 4; //call
	edx = to32i(dword_4D219C); //mov
	ebp = eax; //mov
	cmp(edx, (int32_t)3);
	if (jbe())
		goto loc_404EEA;
loc_404E88:
	esi = (int32_t)(intptr_t)dword_4E50D0; //mov
	xor_(ecx, ecx);
loc_404E8F:
	edi = (int32_t)(intptr_t)(ecx*4+0); //lea
	edx = esi; //mov
	eax = ebp; //mov
	ebx = to32i(off_4D2158+edi); //mov
	esp -= 4; _sub_405320(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_404EDA;
	cmp(ecx, (int32_t)0x10);
	if (ja())
		goto loc_404EDA;
	goto *off_404E00[edi/4];
loc_404EB4:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(to8i(byte_512DBD), (int8_t)3);
	if (jnb())
		goto loc_404EDA;
	to8i(byte_512DBD) = 3; //mov
	to8i(byte_512DBF) = 0xE; //mov
loc_404EDA:
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
loc_404EE3:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_404EEA:
	goto *off_404DF0[edx];
loc_404EF1:
	cmp(eax, (int32_t)0x47);
	if (jnz())
		goto loc_404E88;
	inc(edx);
	to32i(dword_4D219C) = edx; //mov
	goto loc_404E88;
loc_404EFF:
	cmp(eax, (int32_t)0x4F);
	if (jnz())
		goto loc_404F10;
	inc(edx);
	to32i(dword_4D219C) = edx; //mov
	goto loc_404E88;
loc_404F10:
	xor_(ecx, ecx);
	to32i(dword_4D219C) = ecx; //mov
	goto loc_404E88;
loc_404F1D:
	cmp(eax, (int32_t)0x30);
	if (jl())
		goto loc_404F46;
	cmp(eax, (int32_t)0x39);
	if (jg())
		goto loc_404F46;
	ecx = (int32_t)(intptr_t)(eax-0x30); //lea
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	add(eax, ecx);
	inc(edx);
	add(eax, eax);
	to32i(dword_4D219C) = edx; //mov
	to32i(dword_4D21A0) = eax; //mov
	goto loc_404E88;
loc_404F46:
	xor_(edx, edx);
	to32i(dword_4D219C) = edx; //mov
	goto loc_404E88;
loc_404F53:
	cmp(eax, (int32_t)0x30);
	if (jl())
		goto loc_404F9B;
	cmp(eax, (int32_t)0x39);
	if (jg())
		goto loc_404F9B;
	edx = to32i(dword_4D21A0); //mov
	sub(eax, (int32_t)0x30);
	add(edx, eax);
	to32i(dword_4D21A0) = edx; //mov
	cmp(edx, (int32_t)0x16);
	if (jnz())
		goto loc_404FA7;
loc_404F73:
	to32i(dword_4D21A0) = 0x14; //mov
loc_404F7D:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	al = to8i(dword_4D21A0); //mov
	to8i(byte_4D1FE8) = al; //mov
	to8i(byte_4D1FE9) = al; //mov
loc_404F9B:
	xor_(eax, eax);
	to32i(dword_4D219C) = eax; //mov
	goto loc_404E88;
loc_404FA7:
	cmp(edx, (int32_t)0x18);
	if (jz())
		goto loc_404F73;
	cmp(edx, (int32_t)0x19);
	if (jz())
		goto loc_404F73;
	cmp(edx, (int32_t)0x1D);
	if (jz())
		goto loc_404F73;
	cmp(edx, (int32_t)0x1E);
	if (jz())
		goto loc_404F73;
	cmp(edx, (int32_t)0x20);
	if (jz())
		goto loc_404F73;
	cmp(edx, (int32_t)0x12);
	if (jz())
		goto loc_404F73;
	if (jl())
		goto loc_404F9B;
	cmp(edx, (int32_t)0x33);
	if (jle())
		goto loc_404F7D;
	xor_(eax, eax);
	to32i(dword_4D219C) = eax; //mov
	goto loc_404E88;
loc_404FD8:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(to8i(byte_512DBD), (int8_t)2);
	if (jnb())
		goto loc_404EDA;
	dl = 0xD; //mov
	ah = 2; //mov
	to8i(byte_512DBF) = dl; //mov
	to8i(byte_512DBD) = ah; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_405018:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(to8i(byte_512DBD), (int8_t)1);
	if (jnb())
		goto loc_404EDA;
	to8i(byte_512DBD) = 1; //mov
	to8i(byte_512DBF) = 0xC; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_405056:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	ah = to8i(byte_512DBC); //mov
	dl = 7; //mov
	or_(ah, (int8_t)1);
	to8i(byte_512DB0) = dl; //mov
	to8i(byte_512DBC) = ah; //mov
	esp -= 4; _sub_40EB20(); esp += 4; //call
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_405095:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = 0x34E; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to32i(dword_4E5508) = 1; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4050CC:
	edx = 0x7F; //mov
	eax = 5; //mov
	edi = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E5514) = edi; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4050FA:
	edx = 0x7F; //mov
	eax = 5; //mov
	ebx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	al = 1; //mov
	to32i(dword_4D209C) = ebx; //mov
	to8i(byte_512DBE) = al; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40512F:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E550C) = 1; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40515C:
	edx = 0x7F; //mov
	eax = 5; //mov
	edi = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E5504) = edi; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40518A:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E5500) = 1; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4051B7:
	edx = 0x7F; //mov
	eax = 5; //mov
	ebx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E54F8) = ebx; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4051E5:
	edx = 0x7F; //mov
	eax = 5; //mov
	bl = 0x2B; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	edx = 1; //mov
	to8i(byte_4D1FE8) = bl; //mov
	to8i(byte_4D1FE9) = bl; //mov
	to32i(dword_4E54F8) = edx; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_405221:
	edx = 0x7F; //mov
	eax = 5; //mov
	edi = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	dl = 0x2A; //mov
	to32i(dword_4E5508) = edi; //mov
	to32i(dword_4E54F8) = edi; //mov
	to8i(byte_4D1FE8) = dl; //mov
	to8i(byte_4D1FE9) = dl; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_405263:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	edx = 1; //mov
	al = 0x14; //mov
	to32i(dword_4E5508) = edx; //mov
	to8i(byte_4D1FE8) = al; //mov
	to8i(byte_4D1FE9) = al; //mov
	to32i(dword_4E54F8) = edx; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4052A3:
	edx = 0x7F; //mov
	eax = 5; //mov
	edi = 1; //mov
	bl = 0x23; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E5508) = edi; //mov
	to8i(byte_4D1FE8) = bl; //mov
	to8i(byte_4D1FE9) = bl; //mov
	to32i(dword_4E54F8) = edi; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4052E5:
	edx = 0x7F; //mov
	eax = 5; //mov
	ebx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4E54FC) = ebx; //mov
	inc(ecx);
	add(esi, (int32_t)4);
	cmp(ecx, (int32_t)0x11);
	if (jl())
		goto loc_404E8F;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_405320()
{
	push32(ecx);
	esp -= 4; _toupper_(); esp += 4; //call
	ecx = (int32_t)(intptr_t)(eax+9); //lea
	eax = to32i(edx); //mov
	al = to8i(ebx+eax); //mov
	and_(eax, (int32_t)0xFF);
	cmp(ecx, eax);
	if (jnz())
		goto loc_40534A;
	ecx = to32i(edx); //mov
	inc(ecx);
	add(ebx, ecx);
	to32i(edx) = ecx; //mov
	cmp(to8i(ebx), (int8_t)0);
	if (jnz())
		goto loc_405350;
	eax = 1; //mov
	pop32(ecx);
	return;
loc_40534A:
	to32i(edx) = 0; //mov
loc_405350:
	xor_(eax, eax);
	pop32(ecx);
}
Fn(void) Game::_sub_4053A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebp = eax; //mov
	to16i(esp+0xC) = dx; //mov
	to16i(esp+8) = bx; //mov
	eax = cx; //movsx
	esp -= 4; _sub_4056F0(); esp += 4; //call
	esp -= 4; _sub_4871F0(); esp += 4; //call
	to32i(esp) = eax; //mov
	fild(to32i(esp));
	fmul(to64f(dbl_4C818C));
	edx = to32i(esp+0x24); //mov
	edi = ebp; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+4));
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
	edi = ecx; //mov
	eax = ebp; //mov
	cmp(dx, (int16_t)1);
	if (jz())
		goto loc_4053F4;
	cmp(dx, (int16_t)4);
	if (jnz())
		goto loc_405419;
loc_4053F4:
	edx = to32i(esp+0xC); //mov
	esp -= 4; _sub_482424(); esp += 4; //call
loc_4053FD:
	sub(edx, eax);
	to16i(esp+0xC) = dx; //mov
loc_405404:
	xor_(ecx, ecx);
loc_405406:
	eax = di; //movsx
	esi = cx; //movsx
	cmp(esi, eax);
	if (jl())
		goto loc_40543C;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_405419:
	cmp(dx, (int16_t)2);
	if (jz())
		goto loc_405425;
	cmp(dx, (int16_t)5);
	if (jnz())
		goto loc_405404;
loc_405425:
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0xA); //mov
	sar(edx, (int32_t)0x10);
	goto loc_4053FD;
loc_40543C:
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	edx = ebp; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esi+ebp); //lea
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	push32(eax);
	push32(aC);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	cmp(to16i(esp+0x24), (int16_t)2);
	if (jle())
		goto loc_40549D;
	imul32(esi, to32i(esp+4));
	eax = 8; //mov
	esp -= 4; _sub_405D10(); esp += 4; //call
	eax = to32i(esp+6); //mov
	sar(eax, (int32_t)0x10);
	add(eax, esi);
	edx = to32i(esp+0xA); //mov
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	inc(edx);
	esp -= 4; _sub_405CF0(); esp += 4; //call
loc_40549D:
	eax = to32i(esp+0x26); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D20B0+eax*4); //mov
	ebx = to32i(esp+4); //mov
	esp -= 4; _sub_405D10(); esp += 4; //call
	eax = cx; //movsx
	imul32(eax, ebx);
	ebx = to32i(esp+6); //mov
	edx = to32i(esp+0xA); //mov
	sar(ebx, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	inc(ecx);
	esp -= 4; _sub_405CF0(); esp += 4; //call
	goto loc_405406;
}
Fn(void) Game::_sub_4054E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	esi = edx; //mov
	edi = ebx; //mov
	ebx = to32i(esp+0x10); //mov
	eax = cx; //movsx
	esp -= 4; _sub_4056F0(); esp += 4; //call
	ecx = ebp; //mov
	cmp(bx, (int16_t)1);
	if (jz())
		goto loc_405503;
	cmp(bx, (int16_t)4);
	if (jnz())
		goto loc_405538;
loc_405503:
	eax = ecx; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	sub(esi, eax);
loc_40550C:
	cmp(bx, (int16_t)2);
	if (jg())
		goto loc_40555D;
loc_405512:
	eax = to32i(esp+0x12); //mov
	sar(eax, (int32_t)0x10);
	ebx = di; //movsx
	eax = to32i(dword_4D20B0+eax*4); //mov
	edx = si; //movsx
	esp -= 4; _sub_405D10(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_405CF0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_405538:
	cmp(bx, (int16_t)2);
	if (jz())
		goto loc_405544;
	cmp(bx, (int16_t)5);
	if (jnz())
		goto loc_40550C;
loc_405544:
	eax = ecx; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = si; //movsx
	sub(edx, eax);
	esi = edx; //mov
	goto loc_40550C;
loc_40555D:
	eax = 8; //mov
	esp -= 4; _sub_405D10(); esp += 4; //call
	ebx = di; //movsx
	edx = si; //movsx
	inc(ebx);
	inc(edx);
	eax = ecx; //mov
	esp -= 4; _sub_405CF0(); esp += 4; //call
	goto loc_405512;
}
Fn(void) Game::_sub_405580()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x10);
	to16i(esp+0xC) = ax; //mov
	esi = edx; //mov
	to16i(esp+4) = bx; //mov
	edi = ecx; //mov
	ecx = to32i(esp+0xA); //mov
	sar(ecx, (int32_t)0x10);
	eax = ecx; //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+8) = eax; //mov
	xor_(eax, eax);
	to16i(esp) = ax; //mov
	eax = bx; //movsx
	esp -= 4; _sub_4056F0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	ecx = eax; //mov
	cmp(dx, (int16_t)1);
	if (jz())
		goto loc_4055D3;
	cmp(dx, (int16_t)4);
	if (jnz())
		goto loc_40563A;
loc_4055D3:
	eax = ecx; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	sub(esi, eax);
loc_4055DC:
	cmp(to16i(esp+8), (int16_t)2);
	if (jle())
		goto loc_405601;
	eax = 8; //mov
	ebx = to32i(esp+2); //mov
	esp -= 4; _sub_405D10(); esp += 4; //call
	edx = si; //movsx
	sar(ebx, (int32_t)0x10);
	inc(edx);
	eax = ecx; //mov
	inc(ebx);
	esp -= 4; _sub_405CF0(); esp += 4; //call
loc_405601:
	cmp(di, (int16_t)1);
	if (jnb())
		goto loc_405662;
	test(di, di);
	if (jz())
		goto loc_405688;
loc_405610:
	eax = to32i(esp-2); //mov
	ebx = to32i(esp+2); //mov
	sar(eax, (int32_t)0x10);
	edx = si; //movsx
	eax = to32i(dword_4D20B0+eax*4); //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_405D10(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_405CF0(); esp += 4; //call
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_40563A:
	cmp(dx, (int16_t)2);
	if (jz())
		goto loc_405646;
	cmp(dx, (int16_t)5);
	if (jnz())
		goto loc_4055DC;
loc_405646:
	eax = ecx; //mov
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = si; //movsx
	sub(edx, eax);
	esi = edx; //mov
	goto loc_4055DC;
loc_405662:
	if (jbe())
		goto loc_405676;
	cmp(di, (int16_t)2);
	if (jnz())
		goto loc_405610;
	ax = to16i(dword_4D20D4); //mov
	to16i(esp) = ax; //mov
	goto loc_405610;
loc_405676:
	eax = to32i(esp+0xA); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6B0(); esp += 4; //call
	to16i(esp) = ax; //mov
	goto loc_405610;
loc_405688:
	eax = to32i(esp+0xA); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	to16i(esp) = ax; //mov
	goto loc_405610;
}
Fn(void) Game::_sub_4056A0()
{
	to32i(dword_4D20D4) = eax; //mov
}
Fn(void) Game::_sub_4056B0()
{
	eax = to32i(dword_4E5118); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4E5114); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4E54A8); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4E54A4); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	eax = to32i(dword_4E511C); //mov
	_sub_4848FC(); return; //jmp
}
Fn(void) Game::_sub_4056F0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_4E54A8+2); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jz())
		goto loc_405728;
	ecx = to32i(dword_4D20A0); //mov
	to16i(dword_4E54AC) = dx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_40572B;
loc_405711:
	cmp(edx, (int32_t)0x10);
	if (jnb())
		goto loc_405737;
	cmp(edx, (int32_t)0xD);
	if (jnb())
		goto loc_405751;
loc_40571B:
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jnz())
		goto loc_4057B0;
loc_405728:
	pop32(edx);
	pop32(ecx);
	return;
loc_40572B:
	eax = to32i(dword_4D4D24); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	goto loc_405711;
loc_405737:
	if (jbe())
		goto loc_405784;
	cmp(edx, (int32_t)0x12);
	if (jb())
		goto loc_40571B;
	if (jbe())
		goto loc_40579A;
	cmp(edx, (int32_t)0x24);
	if (jnz())
		goto loc_40571B;
	eax = (int32_t)(intptr_t)dword_4E53F0; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	goto loc_40571B;
loc_405751:
	if (jbe())
		goto loc_40576E;
	cmp(edx, (int32_t)0xE);
	if (jnz())
		goto loc_40571B;
	eax = (int32_t)(intptr_t)dword_4E51D4; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jnz())
		goto loc_4057B0;
	pop32(edx);
	pop32(ecx);
	return;
loc_40576E:
	eax = (int32_t)(intptr_t)dword_4E5288; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jnz())
		goto loc_4057B0;
	pop32(edx);
	pop32(ecx);
	return;
loc_405784:
	eax = (int32_t)(intptr_t)dword_4E5120; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jnz())
		goto loc_4057B0;
	pop32(edx);
	pop32(ecx);
	return;
loc_40579A:
	eax = (int32_t)(intptr_t)dword_4E533C; //mov
	esp -= 4; _sub_4871C8(); esp += 4; //call
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jnz())
		goto loc_4057B0;
	pop32(edx);
	pop32(ecx);
	return;
loc_4057B0:
	esp -= 4; _sub_4824BC(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4057C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x100);
	ecx = to32i(dword_5134B8); //mov
	push32(ecx);
	push32(aSswiss13_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	xor_(edx, edx);
	push32(eax);
	to32i(dword_4D2098) = edx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4E54A8) = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E5288; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	ebx = to32i(dword_5134B8); //mov
	push32(ebx);
	push32(aSfixed14_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4E5118) = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E51D4; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	esi = to32i(dword_5134B8); //mov
	push32(esi);
	push32(aSswiss16_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4E5114) = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E5120; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	edi = to32i(dword_5134B8); //mov
	push32(edi);
	push32(aSswiss18_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4E54A4) = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E533C; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	ebp = to32i(dword_5134B8); //mov
	push32(ebp);
	push32(aSswiss36_ffn);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = 0x20; //mov
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4E511C) = eax; //mov
	esp -= 4; _sub_487060(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E53F0; //mov
	edx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_4871B0(); esp += 4; //call
	to16i(dword_4E54AC) = dx; //mov
	add(esp, (int32_t)0x100);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_405910()
{
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_405A30(); esp += 4; //call
	esp -= 4; _sub_424280(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40592B;
	eax = 0xD; //mov
	return;
loc_40592B:
	push32(edx);
	esp -= 4; _sub_482030(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
	if (jnz())
		goto loc_405958;
	edx = to32i(dword_5637F4); //mov
	cmp(edx, to32i(dword_4D20A8));
	if (jle())
		goto loc_405958;
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x28);
	to32i(dword_4D20A8) = eax; //mov
	esp -= 4; _sub_405A60(); esp += 4; //call
loc_405958:
	pop32(edx);
}
Fn(void) Game::_sub_405960()
{
	push32(edx);
	esp -= 4; _sub_405A30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_424280(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40597D;
	eax = 0xD; //mov
	pop32(edx);
	return;
loc_40597D:
	esp -= 4; _sub_482030(); esp += 4; //call
	edx = eax; //mov
	xor_(dx, ax);
	shr(edx, (int32_t)0x10);
	cmp(edx, (int32_t)0x44);
	if (jz())
		goto loc_4059E4;
	and_(eax, (int32_t)0xFFFF);
	edx = eax; //mov
	esp -= 4; _sub_404E44(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_4059C0;
	eax = to32i(dword_5637F4); //mov
	cmp(eax, to32i(dword_4D20A8));
	if (jle())
		goto loc_4059C0;
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x1E);
	to32i(dword_4D20A8) = eax; //mov
	esp -= 4; _sub_405A60(); esp += 4; //call
	edx = eax; //mov
loc_4059C0:
	esp -= 4; _sub_482030(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
	if (jz())
		goto loc_4059E0;
loc_4059CC:
	esp -= 4; _sub_404E44(); esp += 4; //call
	esp -= 4; _sub_482030(); esp += 4; //call
	and_(eax, (int32_t)0xFFFF);
	if (jnz())
		goto loc_4059CC;
loc_4059E0:
	eax = edx; //mov
	pop32(edx);
	return;
loc_4059E4:
	eax = 0x36; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_405A05;
loc_4059F2:
	eax = 1; //mov
	esp -= 4; _sub_428910(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
	return;
loc_405A05:
	eax = 0x2A; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4059F2;
	esp -= 4; _sub_428910(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_405A30()
{
	eax = 0x38; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_405A3F;
locret_405A3E:
	return;
loc_405A3F:
	eax = 0x19; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto locret_405A3E;
	push32(edx);
	sub(esp, (int32_t)0x50);
	edx = to32i(dword_4D9668); //mov
	inc(edx);
	push32(edx);
	push32(aScn04d_tga);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	to32i(dword_4D9668) = edx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = esp; //mov
	esp -= 4; _sub_487538(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	add(esp, (int32_t)0x50);
	pop32(edx);
}
Fn(void) Game::_sub_405A60()
{
	push32(ebx);
	eax = 0xF; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	xor_(ebx, ebx);
	test(eax, eax);
	if (jnz())
		goto loc_405A99;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	xor_(esi, esi);
	xor_(ecx, ecx);
	xor_(edi, edi);
loc_405A7B:
	cmp(di, to16i(dword_512F34+2+esi));
	if (jnz())
		goto loc_405A9D;
loc_405A84:
	inc(ecx);
	add(esi, (int32_t)2);
	cmp(ecx, (int32_t)2);
	if (jge())
		goto loc_405A91;
	test(ebx, ebx);
	if (jz())
		goto loc_405A7B;
loc_405A91:
	eax = ebx; //mov
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	pop32(ebx);
	return;
loc_405A99:
	xor_(eax, eax);
	pop32(ebx);
	return;
loc_405A9D:
	eax = ecx; //mov
	esp -= 4; _sub_477B70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_405AAF;
	ebx = 0xD; //mov
	goto loc_405A84;
loc_405AAF:
	test(word_512F3A[esi], (int8_t)1);
	if (jz())
		goto loc_405AE4;
	edx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_477BA0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	cmp(eax, (int32_t)0xC0);
	if (jl())
		goto loc_405ADA;
	ebx = 0x4D00; //mov
loc_405ADA:
	cmp(eax, (int32_t)0x40);
	if (jg())
		goto loc_405AE4;
	ebx = 0x4B00; //mov
loc_405AE4:
	test(word_512F3A[esi], (int8_t)2);
	if (jz())
		goto loc_405A84;
	edx = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_477BA0(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	cmp(eax, (int32_t)0xC0);
	if (jl())
		goto loc_405B12;
	ebx = 0x5000; //mov
loc_405B12:
	cmp(eax, (int32_t)0x40);
	if (jg())
		goto loc_405A84;
	ebx = 0x4800; //mov
	goto loc_405A84;
}
Fn(void) Game::_sub_405B30()
{
	push32(esi);
	push32(edi);
	edi = edx; //mov
	esi = to32i(dword_4D40B8); //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_482EA8(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_405B4A;
	pop32(edi);
	pop32(esi);
	return;
loc_405B4A:
	edx = di; //movsx
	esp -= 4; _sub_405B60(); esp += 4; //call
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_405B60()
{
	push32(esi);
	push32(edi);
	esi = ebx; //mov
	ebx = ecx; //mov
	ecx = edx; //mov
	and_(ch, (int8_t)1);
	ecx = cx; //movsx
	edi = ecx; //mov
	edi = ~edi;
	and_(edx, edi);
	cmp(dx, (int16_t)0x1800);
	if (jnb())
		goto loc_405BA1;
	cmp(dx, (int16_t)0xC00);
	if (jnb())
		goto loc_405BFF;
	cmp(dx, (int16_t)0x400);
	if (jb())
		goto loc_405B9E;
	if (jbe())
		goto loc_405C1B;
	cmp(dx, (int16_t)0x800);
	if (jz())
		goto loc_405C23;
loc_405B9E:
	pop32(edi);
	pop32(esi);
	return;
loc_405BA1:
	if (jbe())
		goto loc_405C3F;
	cmp(dx, (int16_t)0x2400);
	if (jnb())
		goto loc_405BCC;
	cmp(dx, (int16_t)0x1C00);
	if (jb())
		goto loc_405B9E;
	if (jbe())
		goto loc_405C49;
	cmp(dx, (int16_t)0x2000);
	if (jnz())
		goto loc_405B9E;
	edx = esi; //mov
	esp -= 4; _sub_482D7C(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405BCC:
	if (jbe())
		goto loc_405C53;
	cmp(dx, (int16_t)0x2C00);
	if (jnb())
		goto loc_405BE8;
	cmp(dx, (int16_t)0x2800);
	if (jnz())
		goto loc_405B9E;
	esp -= 4; _sub_483384(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405BE8:
	if (jbe())
		goto loc_405C5D;
	cmp(dx, (int16_t)0x3000);
	if (jnz())
		goto loc_405B9E;
	edx = esi; //mov
	esp -= 4; _sub_48330C(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405BFF:
	if (jbe())
		goto loc_405C2D;
	cmp(dx, (int16_t)0x1000);
	if (jb())
		goto loc_405B9E;
	if (jbe())
		goto loc_405C37;
	cmp(dx, (int16_t)0x1400);
	if (jnz())
		goto loc_405B9E;
	edx = esi; //mov
	esp -= 4; _sub_486D2C(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C1B:
	esp -= 4; _sub_483470(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C23:
	edx = esi; //mov
	esp -= 4; _sub_483494(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C2D:
	edx = esi; //mov
	esp -= 4; _sub_483460(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C37:
	esp -= 4; _sub_486D10(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C3F:
	edx = esi; //mov
	esp -= 4; _sub_486C60(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C49:
	edx = ecx; //mov
	esp -= 4; _sub_482D58(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C53:
	edx = esi; //mov
	esp -= 4; _sub_482C78(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	return;
loc_405C5D:
	edx = esi; //mov
	esp -= 4; _sub_4833A0(); esp += 4; //call
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_405C70()
{
	push32(edx);
	xor_(edx, edx);
	esp -= 4; _sub_428770(); esp += 4; //call
	to32i(dword_4D2094) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_405CF0()
{
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jz())
	{
		_sub_486A30();
		return;
	}
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	edi = edx; //mov
	to32i(esp+4) = ebx; //mov
	eax = to32i(dword_4D20A4); //mov
	or_(eax, (int32_t)0xFF000000);
	to32i(esp) = eax; //mov
	cmp(to8i(esi), (int8_t)0);
	if (jz())
		goto loc_426C27;
loc_426BC1:
	ebp = to32i(dword_4E54AC); //mov
	al = to8i(esi); //mov
	cmp(ebp, (int32_t)0x24);
	if (jnz())
		goto loc_426C3E;
	cmp(al, (int8_t)0x20);
	if (jnz())
		goto loc_426C2F;
	ah = 0xFA; //mov
loc_426BD8:
	xor_(edx, edx);
	dl = ah; //mov
	xor_(ebx, ebx);
	bl = (int32_t)(intptr_t)byte_4EC3AC[edx]; //mov
	and_(eax, (int32_t)0xFF);
	push32(eax);
	ecx = to32i(esp+4); //mov
	push32(ecx);
	ebp = (uint8_t)byte_4EC2B0[edx]; //movzx
	push32(0x33);
	xor_(eax, eax);
	ecx = edi; //mov
	push32(ebx);
	ebx = to32i(esp+0x14); //mov
	al = (int32_t)(intptr_t)byte_4EC0B8[edx]; //mov
	push32(ebx);
	xor_(ebx, ebx);
	eax = to32i(dword_4EC4B0+eax*4); //mov
	bl = (int32_t)(intptr_t)byte_4EC1B4[edx]; //mov
	edx = ebp; //mov
	inc(esi);
	esp -= 4; _sub_426C50(); esp += 4; //call
	dl = to8i(esi); //mov
	add(edi, eax);
	test(dl, dl);
	if (jnz())
		goto loc_426BC1;
loc_426C27:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_426C2F:
	cmp(al, (int8_t)0xD6);
	if (jnz())
		goto loc_426C37;
	ah = 0xFB; //mov
	goto loc_426BD8;
loc_426C37:
	ah = al; //mov
	add(ah, (int8_t)0x9F);
	goto loc_426BD8;
loc_426C3E:
	ah = al; //mov
	sub(ah, (int8_t)0x20);
	goto loc_426BD8;
}
Fn(void) Game::_sub_405D10()
{
	push32(edx);
	edx = eax; //mov
	cmp(to32i(dword_4D20A0), (int32_t)0);
	if (jz())
		goto loc_405D23;
	to32i(dword_4D20A4) = eax; //mov
	pop32(edx);
	return;
loc_405D23:
	push32(ecx);
	xor_(eax, eax);
	esp -= 4; _sub_48266C(); esp += 4; //call
	ecx = eax; //mov
	eax = edx; //mov
	edx = ecx; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_486560(); esp += 4; //call
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_405DD4()
{
	static const void *const off_405DB0[] = {
		&&loc_406099,
		&&loc_406962,
		&&loc_406C54,
		&&loc_406C54,
		&&loc_406C54,
	};
	static const void *const off_405DC4[] = {
		&&loc_406107,
		&&loc_406F7C,
		&&loc_406F8C,
		&&loc_406107,
	};
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x9C);
	to32i(esp+0x68) = eax; //mov
	edx = 0x18; //mov
	eax = 0x1E00; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	xor_(eax, eax);
loc_405DF3:
	add(eax, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_4E54B4+eax) = edx; //mov
	cmp(eax, (int32_t)0x40);
	if (jnz())
		goto loc_405DF3;
	push32(esi);
	push32(ebx);
	eax = to32i(dword_512D9E); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4880DA(); esp += 4; //call
	esp -= 4; _sub_403B20(); esp += 4; //call
	ah = to8i(byte_512DA9); //mov
	test(ah, ah);
	if (jz())
		goto loc_406888;
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_406888;
loc_405E2E:
	xor_(bh, bh);
	xor_(ecx, ecx);
	to8i(byte_4D1FE9) = bh; //mov
	to32i(dword_4E5508) = ecx; //mov
	to32i(dword_4E5514) = ecx; //mov
	to32i(dword_4E5510) = ecx; //mov
	to32i(dword_4E550C) = ecx; //mov
	to32i(dword_4E5504) = ecx; //mov
	to32i(dword_4E5500) = ecx; //mov
	to32i(dword_4E54F8) = ecx; //mov
	to32i(dword_4E54FC) = ecx; //mov
	to8i(byte_4D1FE8) = bh; //mov
loc_405E6E:
	edx = 0x10000; //mov
	eax = to32i(esp+0x70); //mov
	esp -= 4; _sub_488168(); esp += 4; //call
	eax = to32i(esp+0x70); //mov
	ecx = (int32_t)(intptr_t)(eax+4); //lea
	to32i(eax) = 7; //mov
	to32i(ecx) = 1; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0xC; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512D9E); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0xE; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0xF; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 3; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x13; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DFB); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x1E; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFA); //mov
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DA9); //mov
	add(ecx, (int32_t)4);
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_4068AB;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_4068AB;
	xor_(eax, eax);
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_4068A4;
	eax = 1; //mov
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_4068A4;
	eax = 1; //mov
loc_405F3B:
	to32i(ecx) = 6; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	bl = to8i(byte_512DAA); //mov
	add(ecx, (int32_t)4);
	edx = (int32_t)(intptr_t)(eax+4); //lea
	cmp(bl, (int8_t)3);
	if (jnz())
		goto loc_4068B7;
	to32i(ecx) = 2; //mov
	ecx = edx; //mov
	to32i(eax) = 0; //mov
loc_405F6C:
	ebx = (int32_t)(intptr_t)(ecx+4); //lea
	esi = (int32_t)(intptr_t)(ecx+8); //lea
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	edx = (int32_t)(intptr_t)(ecx+0x10); //lea
	cmp(to8i(byte_512DAB), (int8_t)2);
	if (jnz())
		goto loc_4068CA;
	to32i(ecx) = 5; //mov
	to32i(ebx) = 1; //mov
	to32i(esi) = 0x21; //mov
	ecx = edx; //mov
	to32i(eax) = 0; //mov
loc_405F9F:
	bh = to8i(byte_512DAA); //mov
	cmp(bh, (int8_t)2);
	if (jnz())
		goto loc_4068F1;
loc_405FAE:
	eax = 1; //mov
loc_405FB3:
	to32i(ecx) = 4; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 9; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DAE); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0xA; //mov
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DB0); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_407160(); esp += 4; //call
	eax = ax; //cwde
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x1D; //mov
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DB0); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_41AE70(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 3; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	esp -= 4; _sub_407190(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x1F; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DBA); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x20; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512DBB); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x22; //mov
	bl = to8i(byte_512DAA); //mov
	add(ecx, (int32_t)4);
	cmp(bl, (int8_t)2);
	if (jnz())
		goto loc_406929;
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jz())
		goto loc_406929;
	eax = ecx; //mov
	esp -= 4; _sub_407310(); esp += 4; //call
loc_40607C:
	ecx = eax; //mov
loc_406080:
	al = to8i(byte_512DA9); //mov
	xor_(edi, edi);
	xor_(esi, esi);
	cmp(al, (int8_t)4);
	if (ja())
		goto loc_4060CC;
	and_(eax, (int32_t)0xFF);
	goto *off_405DB0[eax];
loc_406099:
	edx = 1; //mov
	ebx = 9; //mov
	eax = (int32_t)(intptr_t)byte_512E84; //mov
	to32i(esp+0x68) = esi; //mov
	to32i(esp+0x6C) = edx; //mov
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	esi = 1; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = ecx; //mov
	xor_(edx, edx);
	edi = esi; //mov
	esp -= 4; _sub_4073B0(); esp += 4; //call
	ecx = eax; //mov
loc_4060CC:
	to32i(ecx) = 0x10; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(esp+0x6C); //mov
	to32i(ecx-4) = eax; //mov
	eax = to32i(esp+0x68); //mov
	to32i(ecx) = 8; //mov
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DAA); //mov
	add(ecx, (int32_t)4);
	cmp(al, (int8_t)3);
	if (ja())
		goto loc_406129;
	and_(eax, (int32_t)0xFF);
	goto *off_405DC4[eax];
loc_406107:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_406F52;
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jnz())
		goto loc_406F47;
	to32i(esp+0x74) = 6; //mov
loc_406129:
	edx = to32i(esp+0x74); //mov
	xor_(eax, eax);
	xor_(ebp, ebp);
	to32i(esp+0x78) = eax; //mov
	test(edx, edx);
	if (jle())
		goto loc_406209;
loc_40613D:
	eax = edi; //mov
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_406FB4;
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jz())
		goto loc_406F9C;
loc_40615A:
	ebx = (int32_t)(intptr_t)(esp+0x34); //lea
	edx = (int32_t)(intptr_t)(esp+0x30); //lea
	eax = ebp; //mov
	esp -= 4; _sub_407880(); esp += 4; //call
	ebx = eax; //mov
loc_40616B:
	eax = ebp; //mov
	esp -= 4; _sub_4077A0(); esp += 4; //call
	to32i(esp+0x34) = eax; //mov
	edx = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4077F0(); esp += 4; //call
	to32i(esp+0x30) = eax; //mov
	to32i(ecx) = 0x7B; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-8) = esi; //mov
	to32i(ecx-4) = ebx; //mov
	to32i(ecx) = 0x7D; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = esi; //mov
	to32i(ecx) = 1; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x7E; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(esp+0x30); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = esi; //mov
	to32i(ecx) = 2; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x87; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(esp+0x34); //mov
	inc(esi);
	to32i(ecx-4) = eax; //mov
loc_4061FB:
	ebx = to32i(esp+0x74); //mov
	inc(ebp);
	inc(edi);
	cmp(ebp, ebx);
	if (jl())
		goto loc_40613D;
loc_406209:
	eax = to32i(esp+0x78); //mov
	edi = to32i(esp+0x74); //mov
	sub(edi, eax);
	dl = to8i(byte_512DF6); //mov
	to32i(esp+0x74) = edi; //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_406FD6;
	dh = to8i(byte_512DF5); //mov
	cmp(dh, (int8_t)0xB);
	if (jbe())
		goto loc_406FD6;
	cmp(dh, (int8_t)0xC);
	if (jnz())
		goto loc_406FBD;
	eax = 0xC; //mov
loc_406243:
	to32i(ecx) = 0x12; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = eax; //mov
	eax = to32i(esp+0x74); //mov
	to32i(ecx) = 0x11; //mov
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DF8); //mov
	add(ecx, (int32_t)4);
	test(al, al);
	if (jnz())
		goto loc_4063A1;
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jz())
		goto loc_4063A1;
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jnz())
		goto loc_4063A1;
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jz())
		goto loc_4063A1;
	esp -= 4; _sub_407780(); esp += 4; //call
	cmp(to32i(dword_4E54F8), (int32_t)0);
	if (jz())
		goto loc_406FF2;
	bl = to8i(byte_512DF6); //mov
	edi = 0xB; //mov
	test(bl, bl);
	if (jz())
		goto loc_4062BF;
	edi = 0xA; //mov
loc_4062BF:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jz())
		goto loc_406FE2;
loc_4062CC:
	xor_(edx, edx);
loc_4062CE:
	bl = to8i(byte_4D1FE8); //mov
	test(bl, bl);
	if (jz())
		goto loc_406FE8;
	xor_(eax, eax);
	al = bl; //mov
loc_4062E0:
	to32i(esp+edx+0x18) = eax; //mov
	add(edx, (int32_t)4);
	esp -= 4; _sub_407830(); esp += 4; //call
	to32i(esp+edx+4) = eax; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_4062CE;
loc_4062F5:
	xor_(ebx, ebx);
	test(edi, edi);
	if (jle())
		goto loc_4063A1;
loc_4062FF:
	to32i(ecx) = 0x7B; //mov
	add(ecx, (int32_t)4);
	edx = to32i(dword_4E54F8); //mov
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	test(edx, edx);
	if (jz())
		goto loc_406FFC;
	ebp = 4; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	edx = to32i(esp+edx*4+0x18); //mov
loc_40632D:
	add(ecx, (int32_t)4);
	to32i(ecx-4) = edx; //mov
	to32i(ecx) = 0x7D; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	to32i(ecx-4) = esi; //mov
	to32i(ecx) = 1; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x7E; //mov
	add(ecx, (int32_t)4);
	ebp = to32i(dword_4E54F8); //mov
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	test(ebp, ebp);
	if (jz())
		goto loc_407008;
	ebp = 4; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	edx = to32i(esp+edx*4+8); //mov
loc_406379:
	add(ecx, (int32_t)4);
	to32i(ecx-4) = edx; //mov
	to32i(ecx) = 0x7C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	inc(ebx);
	to32i(ecx-4) = esi; //mov
	inc(esi);
	to32i(ecx) = 4; //mov
	add(ecx, (int32_t)4);
	cmp(ebx, edi);
	if (jl())
		goto loc_4062FF;
loc_4063A1:
	to32i(ecx) = 0xD; //mov
	to32i(ecx+4) = esi; //mov
	add(ecx, (int32_t)4);
	bh = to8i(byte_512DA9); //mov
	add(ecx, (int32_t)4);
	cmp(bh, (int8_t)1);
	if (jnz())
		goto loc_407046;
	xor_(eax, eax);
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_407014;
	xor_(edx, edx);
loc_4063D1:
	cmp(to8i(byte_512DBB), (int8_t)0);
	if (jz())
		goto loc_40701E;
	eax = 0x24; //mov
loc_4063E3:
	to32i(ecx) = eax; //mov
	eax = to32i(dword_512E34+edx*4); //mov
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	bh = to8i(byte_512DBB); //mov
	add(ecx, (int32_t)4);
	test(bh, bh);
	if (jz())
		goto loc_407028;
	eax = 0x23; //mov
loc_40640D:
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E3C+edx*4); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x25; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E44+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x26; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E4C+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x52; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E54+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x53; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E5C+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2B; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E64+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E6C+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2D; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E74+edx*4); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2E; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E7C+edx*4); //mov
	edx = 0x57; //mov
	to32i(ecx-4) = eax; //mov
	eax = 4; //mov
	to32i(ecx) = 0x28; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_40660E;
	cmp(to8i(byte_512DBB), (int8_t)0);
	if (jz())
		goto loc_407032;
	eax = 0x30; //mov
loc_406514:
	to32i(ecx) = eax; //mov
	eax = to32i(dword_512E38); //mov
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	ah = to8i(byte_512DBB); //mov
	add(ecx, (int32_t)4);
	test(ah, ah);
	if (jz())
		goto loc_40703C;
	eax = 0x2F; //mov
loc_40653C:
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E40); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x31; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E48); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x32; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E50); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x54; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E58); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x55; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E60); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x37; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E68); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x38; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E70); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x39; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E78); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x3A; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E80); //mov
	edx = 0x58; //mov
	to32i(ecx-4) = eax; //mov
	eax = 4; //mov
	to32i(ecx) = 0x34; //mov
loc_406601:
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
loc_40660E:
	edx = 1; //mov
	to32i(ecx) = 0x3B; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0x48; //mov
	to32i(ecx) = 0x3C; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0x50; //mov
	to32i(ecx) = 0x3D; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0x4B; //mov
	to32i(ecx) = 0x3E; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0x4D; //mov
	to32i(ecx) = 0x3F; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x1C; //mov
	to32i(ecx-4) = eax; //mov
	eax = 4; //mov
	to32i(ecx) = 0x40; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
	pop32(ebx);
	pop32(esi);
	edx = 0x19; //mov
	to32i(ecx) = 0x41; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0xF; //mov
	to32i(ecx) = 0x43; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	edx = 0x44; //mov
	to32i(ecx) = 0x44; //mov
	add(ecx, (int32_t)4);
	eax = 4; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x15; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x16; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = 0x17; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512ED1); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x18; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512ED0); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x19; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512ED2); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x1C; //mov
	xor_(eax, eax);
	add(ecx, (int32_t)4);
	al = to8i(byte_512F3F); //mov
	edx = to32i(dword_4E5508); //mov
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	test(edx, edx);
	if (jz())
		goto loc_4067A9;
	eax = 4; //mov
loc_4067A9:
	cmp(to32i(dword_4E5514), (int32_t)0);
	if (jz())
		goto loc_4067B4;
	or_(al, (int8_t)8);
loc_4067B4:
	dl = to8i(byte_512DAA); //mov
	cmp(dl, (int8_t)2);
	if (jz())
		goto loc_4067DA;
	cmp(dl, (int8_t)1);
	if (jz())
		goto loc_4067DA;
	cmp(to8i(byte_512DD0), (int8_t)0);
	if (jz())
		goto loc_4067CF;
	or_(al, (int8_t)0x10);
loc_4067CF:
	cmp(to8i(byte_512DEB), (int8_t)0);
	if (jz())
		goto loc_4067DA;
	or_(al, (int8_t)0x20);
loc_4067DA:
	cmp(to32i(dword_4E550C), (int32_t)0);
	if (jz())
		goto loc_4067E5;
	or_(al, (int8_t)0x80);
loc_4067E5:
	cmp(to32i(dword_4E5504), (int32_t)0);
	if (jz())
		goto loc_4067F1;
	or_(ah, (int8_t)2);
loc_4067F1:
	cmp(to32i(dword_4E5500), (int32_t)0);
	if (jz())
		goto loc_4067FD;
	or_(ah, (int8_t)1);
loc_4067FD:
	cmp(to32i(dword_4E54F8), (int32_t)0);
	if (jz())
		goto loc_406812;
	cmp(to8i(byte_512DF8), (int8_t)0);
	if (jnz())
		goto loc_406812;
	or_(ah, (int8_t)4);
loc_406812:
	cmp(to32i(dword_4E54FC), (int32_t)0);
	if (jz())
		goto loc_40681E;
	or_(ah, (int8_t)8);
loc_40681E:
	cmp(to32i(dword_4E54F8), (int32_t)0);
	if (jz())
		goto loc_40683C;
	cmp(to8i(byte_512DF8), (int8_t)0);
	if (jnz())
		goto loc_40683C;
	cmp(to8i(byte_4D1FE8), (int8_t)0x25);
	if (jbe())
		goto loc_40683C;
	or_(ah, (int8_t)0x10);
loc_40683C:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (ja())
		goto loc_406854;
	dl = to8i(byte_512DAA); //mov
	cmp(dl, (int8_t)3);
	if (jz())
		goto loc_406856;
	test(dl, dl);
	if (jz())
		goto loc_406856;
loc_406854:
	xor_(eax, eax);
loc_406856:
	to32i(ecx) = 0x14; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	edi = to32i(esp+0x68); //mov
	to32i(ecx-4) = eax; //mov
	edx = (int32_t)(intptr_t)(ecx+4); //lea
	eax = edi; //mov
	sub(edx, edi);
	to32i(ecx) = 0; //mov
	esp -= 4; _sub_488168(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	return;
loc_406888:
	dh = to8i(byte_512DAA); //mov
	test(dh, dh);
	if (jz())
		goto loc_405E6E;
	cmp(dh, (int8_t)3);
	if (jnz())
		goto loc_405E2E;
	goto loc_405E6E;
loc_4068A4:
	xor_(eax, eax);
	goto loc_405F3B;
loc_4068AB:
	xor_(eax, eax);
	al = to8i(byte_512DA9); //mov
	goto loc_405F3B;
loc_4068B7:
	to32i(ecx) = 2; //mov
	xor_(ecx, ecx);
	cl = bl; //mov
	to32i(eax) = ecx; //mov
	ecx = edx; //mov
	goto loc_405F6C;
loc_4068CA:
	to32i(ecx) = 5; //mov
	xor_(ecx, ecx);
	cl = to8i(byte_512DAB); //mov
	to32i(ebx) = ecx; //mov
	to32i(esi) = 0x21; //mov
	xor_(ecx, ecx);
	cl = to8i(byte_512DAB); //mov
	to32i(eax) = ecx; //mov
	ecx = edx; //mov
	goto loc_405F9F;
loc_4068F1:
	cmp(bh, (int8_t)1);
	if (jz())
		goto loc_405FAE;
	cmp(to8i(byte_512DD0), (int8_t)0);
	if (jnz())
		goto loc_405FAE;
	cmp(to8i(byte_512DEB), (int8_t)0);
	if (jz())
		goto loc_40691D;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jz())
		goto loc_405FAE;
loc_40691D:
	xor_(eax, eax);
	al = to8i(byte_512DAD); //mov
	goto loc_405FB3;
loc_406929:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40693B;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jnz())
		goto loc_406956;
loc_40693B:
	to32i(ecx) = 0xD; //mov
	xor_(eax, eax);
	add(ecx, (int32_t)4);
loc_406946:
	to32i(ecx) = eax; //mov
	inc(eax);
	add(ecx, (int32_t)4);
	cmp(eax, (int32_t)0xC);
	if (jle())
		goto loc_406946;
	goto loc_406080;
loc_406956:
	eax = ecx; //mov
	esp -= 4; _sub_407380(); esp += 4; //call
	goto loc_40607C;
loc_406962:
	xor_(eax, eax);
	esp -= 4; _sub_4072D0(); esp += 4; //call
	edx = ax; //movsx
	eax = 1; //mov
	esp -= 4; _sub_4072D0(); esp += 4; //call
	eax = ax; //cwde
	ebx = 9; //mov
	add(edx, eax);
	eax = (int32_t)(intptr_t)byte_512E84; //mov
	to32i(esp+0x6C) = edx; //mov
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 9; //mov
	edx = (int32_t)(intptr_t)byte_512F55; //mov
	eax = (int32_t)(intptr_t)byte_512E8D; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x68) = esi; //mov
	esp -= 4; _sub_4072D0(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_4069C5;
	eax = ecx; //mov
	xor_(edx, edx);
	esi = 1; //mov
	esp -= 4; _sub_4073B0(); esp += 4; //call
	ecx = eax; //mov
loc_4069C5:
	eax = 1; //mov
	esp -= 4; _sub_4072D0(); esp += 4; //call
	inc(edi);
	test(ax, ax);
	if (jz())
		goto loc_406B92;
	ebx = (int32_t)(intptr_t)(ecx+4); //lea
	edx = (int32_t)(intptr_t)(ecx+8); //lea
	eax = (int32_t)(intptr_t)(ecx+0xC); //lea
	cmp(to8i(byte_4D1FE9), (int8_t)0);
	if (jz())
		goto loc_406B98;
	to32i(ecx) = 0x7B; //mov
	xor_(ecx, ecx);
	to32i(ebx) = esi; //mov
	cl = to8i(byte_4D1FE9); //mov
loc_4069FF:
	to32i(edx) = ecx; //mov
	ecx = eax; //mov
	to32i(ecx) = 0x7D; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DDB); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7E; //mov
	xor_(eax, eax);
	to32i(ecx+4) = esi; //mov
	al = to8i(byte_512DDA); //mov
	add(ecx, (int32_t)4);
	al = (int32_t)(intptr_t)byte_512DDC[eax]; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	and_(eax, (int32_t)0xFF);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	edx = (int32_t)(intptr_t)(eax+4); //lea
	to32i(esp+0x64) = edx; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	ebx = (int32_t)(intptr_t)(eax+0xC); //lea
	to32i(esp+0x60) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	to32i(esp+0x50) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x14); //lea
	to32i(esp+0x48) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x18); //lea
	to32i(esp+0x4C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x1C); //lea
	to32i(esp+0x54) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x20); //lea
	ebp = (int32_t)(intptr_t)(eax+0x24); //lea
	to32i(esp+0x5C) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax+0x28); //lea
	to32i(esp+0x58) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax+0x2C); //lea
	to32i(esp+0x44) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax+0x30); //lea
	to32i(ecx-4) = esi; //mov
	to32i(esp+0x40) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax+0x34); //lea
	to32i(ecx) = 1; //mov
	to32i(esp+0x3C) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax+0x38); //lea
	add(ecx, (int32_t)4);
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jz())
		goto loc_406BAD;
	to32i(ecx) = 0x82; //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0x64); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x60); //mov
	to32i(edx) = 0x83; //mov
	to32i(eax) = esi; //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x48); //mov
	to32i(eax) = 0x84; //mov
	eax = to32i(esp+0x4C); //mov
	to32i(eax) = esi; //mov
	edx = to32i(esp+0x54); //mov
	eax = to32i(dword_4D22F0); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x5C); //mov
	to32i(ebx) = 0x85; //mov
	to32i(eax) = esi; //mov
	edx = to32i(esp+0x58); //mov
	eax = to32i(dword_4D22FC); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x44); //mov
	to32i(eax) = 0x86; //mov
	eax = to32i(esp+0x40); //mov
	to32i(eax) = esi; //mov
	edx = to32i(esp+0x3C); //mov
	eax = to32i(dword_4D2308); //mov
loc_406B39:
	ecx = ebp; //mov
	to32i(edx) = eax; //mov
	to32i(ecx) = 0x7F; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DF2); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x80; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DF3); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x81; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	xor_(eax, eax);
	to32i(ecx-4) = esi; //mov
	add(ecx, (int32_t)4);
	al = to8i(byte_512DF4); //mov
	inc(esi);
	to32i(ecx-4) = eax; //mov
loc_406B92:
	inc(edi);
	goto loc_4060CC;
loc_406B98:
	to32i(ecx) = 0x7B; //mov
	xor_(ecx, ecx);
	to32i(ebx) = esi; //mov
	cl = to8i(byte_512DDA); //mov
	goto loc_4069FF;
loc_406BAD:
	to32i(ecx) = 0x82; //mov
	to32i(eax) = esi; //mov
	xor_(eax, eax);
	al = to8i(byte_512DEE); //mov
	ecx = to32i(esp+0x64); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x60); //mov
	to32i(edx) = 0x83; //mov
	to32i(eax) = esi; //mov
	xor_(eax, eax);
	al = to8i(byte_512DEF); //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x48); //mov
	to32i(eax) = 0x84; //mov
	eax = to32i(esp+0x4C); //mov
	to32i(eax) = esi; //mov
	xor_(eax, eax);
	al = to8i(byte_512DEC); //mov
	edx = to32i(esp+0x54); //mov
	eax = to32i(dword_4D22EC+eax*4); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x5C); //mov
	to32i(ebx) = 0x85; //mov
	to32i(eax) = esi; //mov
	xor_(eax, eax);
	al = to8i(byte_512DF1); //mov
	edx = to32i(esp+0x58); //mov
	eax = to32i(dword_4D22F8+eax*4); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x44); //mov
	to32i(eax) = 0x86; //mov
	eax = to32i(esp+0x40); //mov
	to32i(eax) = esi; //mov
	xor_(eax, eax);
	al = to8i(byte_512DF0); //mov
	edx = to32i(esp+0x3C); //mov
	eax = to32i(dword_4D2304+eax*4); //mov
	goto loc_406B39;
loc_406C54:
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x68) = eax; //mov
	eax = to32i(dword_513408); //mov
	edx = (int32_t)(intptr_t)(esi+esi); //lea
	sar(eax, (int32_t)0x10);
	xor_(edi, edi);
	to32i(esp+0x6C) = eax; //mov
loc_406C71:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	cmp(edi, eax);
	if (jge())
		goto loc_4060CC;
	to32i(ecx) = 0x7B; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512F98+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7D; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512FA8+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7E; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512FB8+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x7C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = (int32_t)(intptr_t)(ecx+8); //lea
	ebx = (int32_t)(intptr_t)(eax+4); //lea
	to32i(esp+0x98) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+8); //lea
	to32i(esp+0x38) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0xC); //lea
	to32i(esp+0x80) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x10); //lea
	to32i(esp+0x28) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x14); //lea
	to32i(esp+0x90) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x18); //lea
	to32i(esp+0x88) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x1C); //lea
	to32i(esp+0xA0) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x20); //lea
	to32i(esp+0x94) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x24); //lea
	to32i(esp+0x2C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x28); //lea
	ebp = (int32_t)(intptr_t)(eax+0x2C); //lea
	to32i(esp+0x9C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x30); //lea
	to32i(esp+0x84) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x34); //lea
	to32i(ecx-4) = esi; //mov
	to32i(esp+0x8C) = ebx; //mov
	ebx = (int32_t)(intptr_t)(eax+0x38); //lea
	to32i(ecx) = 1; //mov
	to32i(esp+0x7C) = ebx; //mov
	bl = to8i(byte_512DAA); //mov
	add(ecx, (int32_t)4);
	test(bl, bl);
	if (jz())
		goto loc_406E76;
	to32i(ecx) = 0x82; //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0x98); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x38); //mov
	to32i(eax) = 0x83; //mov
	eax = to32i(esp+0x80); //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0x28); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x90); //mov
	to32i(eax) = 0x84; //mov
	eax = to32i(esp+0x88); //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0xA0); //mov
	eax = to32i(dword_4D22F0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x94); //mov
	to32i(eax) = 0x85; //mov
	eax = to32i(esp+0x2C); //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0x9C); //mov
	eax = to32i(dword_4D22FC); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x84); //mov
	to32i(ebp+0) = 0x86; //mov
	to32i(eax) = esi; //mov
	ecx = to32i(esp+0x8C); //mov
	eax = to32i(dword_4D2308); //mov
loc_406E0F:
	to32i(ecx) = eax; //mov
	ecx = to32i(esp+0x7C); //mov
	to32i(ecx) = 0x7F; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_513018+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x80; //mov
	add(ecx, (int32_t)4);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_513028+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x81; //mov
	add(ecx, (int32_t)4);
	add(edx, (int32_t)2);
	inc(edi);
	to32i(ecx) = esi; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_513036+edx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	inc(esi);
	to32i(ecx-4) = eax; //mov
	goto loc_406C71;
loc_406E76:
	to32i(ecx) = 0x84; //mov
	to32i(eax) = esi; //mov
	eax = to32i(dword_512FC8+edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x98); //mov
	eax = to32i(dword_4D22EC+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x38); //mov
	to32i(eax) = 0x82; //mov
	eax = to32i(esp+0x80); //mov
	to32i(eax) = esi; //mov
	eax = to32i(dword_512FD8+edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x28); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x90); //mov
	to32i(eax) = 0x83; //mov
	eax = to32i(esp+0x88); //mov
	to32i(eax) = esi; //mov
	eax = to32i(dword_512FE8+edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0xA0); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x94); //mov
	to32i(eax) = 0x86; //mov
	eax = to32i(esp+0x2C); //mov
	to32i(eax) = esi; //mov
	eax = to32i(dword_512FF8+edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x9C); //mov
	eax = to32i(dword_4D2304+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x84); //mov
	to32i(ebp+0) = 0x85; //mov
	to32i(eax) = esi; //mov
	eax = to32i(dword_513008+edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x8C); //mov
	eax = to32i(dword_4D22F8+eax*4); //mov
	goto loc_406E0F;
loc_406F47:
	xor_(ebx, ebx);
	to32i(esp+0x74) = ebx; //mov
	goto loc_406129;
loc_406F52:
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jnz())
		goto loc_406F6C;
	eax = 7; //mov
	sub(eax, edi);
	inc(eax);
	to32i(esp+0x74) = eax; //mov
	goto loc_406129;
loc_406F6C:
	xor_(eax, eax);
	al = to8i(byte_512DF6); //mov
	to32i(esp+0x74) = eax; //mov
	goto loc_406129;
loc_406F7C:
	eax = 8; //mov
	sub(eax, edi);
	to32i(esp+0x74) = eax; //mov
	goto loc_406129;
loc_406F8C:
	eax = 9; //mov
	sub(eax, edi);
	to32i(esp+0x74) = eax; //mov
	goto loc_406129;
loc_406F9C:
	ah = to8i(byte_512DF5); //mov
	cmp(ah, (int8_t)0xB);
	if (ja())
		goto loc_40615A;
	xor_(ebx, ebx);
	bl = ah; //mov
	goto loc_40616B;
loc_406FB4:
	inc(to32i(esp+0x78));
	goto loc_4061FB;
loc_406FBD:
	cmp(dh, (int8_t)0xD);
	if (jnz())
		goto loc_406FCC;
	eax = 0xD; //mov
	goto loc_406243;
loc_406FCC:
	eax = 0xE; //mov
	goto loc_406243;
loc_406FD6:
	xor_(eax, eax);
	al = to8i(byte_512DF5); //mov
	goto loc_406243;
loc_406FE2:
	dec(edi);
	goto loc_4062CC;
loc_406FE8:
	esp -= 4; _sub_40764C(); esp += 4; //call
	goto loc_4062E0;
loc_406FF2:
	edi = 4; //mov
	goto loc_4062F5;
loc_406FFC:
	esp -= 4; _sub_40764C(); esp += 4; //call
	edx = eax; //mov
	goto loc_40632D;
loc_407008:
	esp -= 4; _sub_407830(); esp += 4; //call
	edx = eax; //mov
	goto loc_406379;
loc_407014:
	edx = 1; //mov
	goto loc_4063D1;
loc_40701E:
	eax = 0x23; //mov
	goto loc_4063E3;
loc_407028:
	eax = 0x24; //mov
	goto loc_40640D;
loc_407032:
	eax = 0x2F; //mov
	goto loc_406514;
loc_40703C:
	eax = 0x30; //mov
	goto loc_40653C;
loc_407046:
	cmp(to8i(byte_512DBB), (int8_t)0);
	if (jz())
		goto loc_40714A;
	eax = 0x24; //mov
loc_407058:
	to32i(ecx) = eax; //mov
	eax = to32i(dword_512E0C); //mov
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx+4) = eax; //mov
	add(ecx, (int32_t)4);
	ah = to8i(byte_512DBB); //mov
	add(ecx, (int32_t)4);
	test(ah, ah);
	if (jz())
		goto loc_407154;
	eax = 0x23; //mov
loc_407080:
	to32i(ecx) = eax; //mov
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E10); //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_4071D0(); esp += 4; //call
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x25; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E14); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x26; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E18); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x52; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E1C); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x53; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E20); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2B; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E24); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2C; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E28); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2D; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E2C); //mov
	to32i(ecx-4) = eax; //mov
	to32i(ecx) = 0x2E; //mov
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	eax = to32i(dword_512E30); //mov
	edx = 0x57; //mov
	to32i(ecx-4) = eax; //mov
	eax = 4; //mov
	to32i(ecx) = 0x28; //mov
	goto loc_406601;
loc_40714A:
	eax = 0x23; //mov
	goto loc_407058;
loc_407154:
	eax = 0x24; //mov
	goto loc_407080;
}
Fn(void) Game::_sub_407160()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x20);
	ecx = 8; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_405D8C; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(ax, ax);
	if (jl())
		goto loc_40717F;
	cmp(ax, (int16_t)8);
	if (jle())
		goto loc_407181;
loc_40717F:
	xor_(eax, eax);
loc_407181:
	eax = ax; //cwde
	ax = to16i(esp+eax*4); //mov
	add(esp, (int32_t)0x20);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_407190()
{
	al = to8i(byte_512DAA); //mov
	cmp(al, (int8_t)1);
	if (jb())
		goto loc_4071AB;
	if (jbe())
		goto loc_4071A5;
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_4071AB;
	eax = 2; //mov
	return;
loc_4071A5:
	eax = 4; //mov
	return;
loc_4071AB:
	xor_(eax, eax);
	al = to8i(byte_512DB8); //mov
}
Fn(void) Game::_sub_4071D0()
{
	static const void *const off_4071C0[] = {
		&&loc_40720E,
		&&loc_407220,
		&&loc_407262,
		&&loc_407294,
	};
	push32(ecx);
	ecx = eax; //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_40721C;
	push32(edx);
	push32(ebx);
	edx = ecx; //mov
	eax = ecx; //mov
	and_(edx, (int32_t)0xFF0000);
	and_(eax, (int32_t)0xFF00);
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)8);
	bl = to8i(byte_512E00); //mov
	sub(edx, eax);
	cmp(bl, (int8_t)3);
	if (ja())
		goto loc_40720E;
	and_(ebx, (int32_t)0xFF);
	goto *off_4071C0[ebx];
loc_40720E:
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
loc_40721C:
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_407220:
	test(edx, edx);
	if (jl())
		goto loc_407242;
	ebx = edx; //mov
	shl(edx, (int32_t)2);
	sub(edx, ebx);
	sar(edx, (int32_t)2);
	add(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_407242:
	neg(edx);
	ebx = edx; //mov
	shl(edx, (int32_t)2);
	sub(edx, ebx);
	sar(edx, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_407262:
	test(edx, edx);
	if (jl())
		goto loc_40727C;
	sar(edx, (int32_t)1);
	add(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_40727C:
	neg(edx);
	sar(edx, (int32_t)1);
	sub(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_407294:
	test(edx, edx);
	if (jl())
		goto loc_4072AF;
	sar(edx, (int32_t)2);
	add(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_4072AF:
	neg(edx);
	sar(edx, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)8);
	xor_(ch, ch);
	and_(eax, (int32_t)0xFF00);
	or_(ecx, eax);
	pop32(ebx);
	pop32(edx);
	eax = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4072D0()
{
	push32(edx);
	cmp(to8i(byte_512DA9), (int8_t)4);
	if (jnz())
		goto loc_4072E7;
	edx = to32i(dword_513408); //mov
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jl())
		goto loc_407307;
loc_4072E7:
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_407307;
	cmp(to32i(dword_4D76BC), (int32_t)0);
	if (jz())
		goto loc_407307;
	edx = (int32_t)(intptr_t)(eax+eax); //lea
	eax = to32i(dword_4D76BC); //mov
	ax = to16i(edx+eax); //mov
	pop32(edx);
	return;
loc_407307:
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_407310()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = to32i(dword_4D76BC); //mov
	ecx = eax; //mov
	eax = to32i(dword_512264); //mov
	cmp(eax, (int32_t)9);
	if (jl())
		goto loc_40735A;
loc_407328:
	add(ecx, (int32_t)4);
	xor_(edx, edx);
	to32i(ecx-4) = eax; //mov
loc_407330:
	xor_(ebx, ebx);
	bl = (int32_t)(intptr_t)byte_513074[edx]; //mov
	cmp(ebx, eax);
	if (jg())
		goto loc_407346;
	edi = eax; //mov
	add(ecx, (int32_t)4);
	sub(edi, ebx);
	to32i(ecx-4) = edi; //mov
loc_407346:
	inc(edx);
	cmp(edx, (int32_t)9);
	if (jl())
		goto loc_407330;
	eax = ecx; //mov
	to32i(dword_4D76BC) = esi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40735A:
	if (jge())
		goto loc_407328;
	edx = (int32_t)(intptr_t)(eax+eax); //lea
loc_40735F:
	ebx = esi; //mov
	ebx = to16i(edx+ebx); //movsx
	add(edx, (int32_t)2);
	add(eax, ebx);
	cmp(edx, (int32_t)0x12);
	if (jl())
		goto loc_40735F;
	goto loc_407328;
}
Fn(void) Game::_sub_407380()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	add(edx, (int32_t)4);
	to32i(eax) = 8; //mov
	xor_(eax, eax);
loc_40738F:
	xor_(ecx, ecx);
	add(edx, (int32_t)4);
	cl = (int32_t)(intptr_t)byte_512AD0[eax]; //mov
	inc(eax);
	to32i(edx-4) = ecx; //mov
	cmp(eax, (int32_t)8);
	if (jl())
		goto loc_40738F;
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4073B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	esi = (int32_t)(intptr_t)(eax+4); //lea
	ecx = (int32_t)(intptr_t)(eax+8); //lea
	ebx = (int32_t)(intptr_t)(eax+0xC); //lea
	cmp(to8i(byte_4D1FE8), (int8_t)0);
	if (jnz())
		goto loc_407574;
	to32i(eax) = 0x7B; //mov
	xor_(eax, eax);
	to32i(esi) = edx; //mov
	al = to8i(byte_512DBF); //mov
loc_4073DD:
	to32i(ecx) = eax; //mov
	eax = ebx; //mov
	to32i(eax) = 0x7D; //mov
	add(eax, (int32_t)4);
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(eax-4) = edx; //mov
	add(eax, (int32_t)4);
	cl = to8i(byte_512DC0); //mov
	to32i(eax-4) = ecx; //mov
	to32i(eax) = 0x7E; //mov
	xor_(ecx, ecx);
	to32i(eax+4) = edx; //mov
	cl = to8i(byte_512DBF); //mov
	add(eax, (int32_t)4);
	cl = (int32_t)(intptr_t)byte_512DC1[ecx]; //mov
	add(eax, (int32_t)4);
	add(eax, (int32_t)4);
	and_(ecx, (int32_t)0xFF);
	to32i(eax-4) = ecx; //mov
	to32i(eax) = 0x7C; //mov
	add(eax, (int32_t)4);
	add(eax, (int32_t)4);
	ecx = (int32_t)(intptr_t)(eax+8); //lea
	ebx = (int32_t)(intptr_t)(ecx+4); //lea
	to32i(esp) = ebx; //mov
	ebx = (int32_t)(intptr_t)(ecx+8); //lea
	to32i(esp+8) = ebx; //mov
	ebx = (int32_t)(intptr_t)(ecx+0xC); //lea
	to32i(esp+0xC) = ebx; //mov
	ebx = (int32_t)(intptr_t)(ecx+0x10); //lea
	to32i(esp+0x24) = ebx; //mov
	ebx = (int32_t)(intptr_t)(ecx+0x14); //lea
	esi = (int32_t)(intptr_t)(ecx+0x18); //lea
	edi = (int32_t)(intptr_t)(ecx+0x1C); //lea
	ebp = (int32_t)(intptr_t)(ecx+0x20); //lea
	to32i(esp+4) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x24); //lea
	to32i(esp+0x1C) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x28); //lea
	to32i(esp+0x20) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x2C); //lea
	to32i(eax-4) = edx; //mov
	to32i(esp+0x10) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x30); //lea
	to32i(eax) = 1; //mov
	to32i(esp+0x14) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x34); //lea
	add(eax, (int32_t)4);
	to32i(esp+0x18) = esi; //mov
	esi = (int32_t)(intptr_t)(ecx+0x38); //lea
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jz())
		goto loc_407588;
	to32i(eax) = 0x82; //mov
	to32i(ecx) = edx; //mov
	ecx = to32i(esp); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = 0x83; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = edx; //mov
	ecx = to32i(esp+0x24); //mov
	eax = to32i(dword_4D22E0); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(ebx) = 0x84; //mov
	to32i(eax) = edx; //mov
	eax = to32i(dword_4D22F0); //mov
	to32i(edi) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	to32i(ebp+0) = 0x85; //mov
	to32i(eax) = edx; //mov
	ecx = to32i(esp+0x20); //mov
	eax = to32i(dword_4D22FC); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = 0x86; //mov
	eax = to32i(esp+0x14); //mov
	to32i(eax) = edx; //mov
	ecx = to32i(esp+0x18); //mov
	eax = to32i(dword_4D2308); //mov
loc_407511:
	to32i(ecx) = eax; //mov
	eax = esi; //mov
	to32i(eax) = 0x7F; //mov
	add(eax, (int32_t)4);
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(eax-4) = edx; //mov
	add(eax, (int32_t)4);
	cl = to8i(byte_512DD6); //mov
	to32i(eax-4) = ecx; //mov
	to32i(eax) = 0x80; //mov
	add(eax, (int32_t)4);
	add(eax, (int32_t)4);
	xor_(ecx, ecx);
	to32i(eax-4) = edx; //mov
	add(eax, (int32_t)4);
	cl = to8i(byte_512DD8); //mov
	to32i(eax-4) = ecx; //mov
	to32i(eax) = 0x81; //mov
	add(eax, (int32_t)4);
	to32i(eax) = edx; //mov
	add(eax, (int32_t)4);
	xor_(edx, edx);
	add(eax, (int32_t)4);
	dl = to8i(byte_512DD9); //mov
	to32i(eax-4) = edx; //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_407574:
	to32i(eax) = 0x7B; //mov
	xor_(eax, eax);
	to32i(esi) = edx; //mov
	al = to8i(byte_4D1FE8); //mov
	goto loc_4073DD;
loc_407588:
	to32i(eax) = 0x82; //mov
	xor_(eax, eax);
	to32i(ecx) = edx; //mov
	al = to8i(byte_512DD3); //mov
	ecx = to32i(esp); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(eax) = 0x83; //mov
	eax = to32i(esp+0xC); //mov
	to32i(eax) = edx; //mov
	xor_(eax, eax);
	al = to8i(byte_512DD4); //mov
	ecx = to32i(esp+0x24); //mov
	eax = to32i(dword_4D22E0+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(ebx) = 0x84; //mov
	to32i(eax) = edx; //mov
	xor_(eax, eax);
	al = to8i(byte_512DD2); //mov
	eax = to32i(dword_4D22EC+eax*4); //mov
	to32i(edi) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	to32i(ebp+0) = 0x85; //mov
	to32i(eax) = edx; //mov
	xor_(eax, eax);
	al = to8i(byte_512DD7); //mov
	ecx = to32i(esp+0x20); //mov
	eax = to32i(dword_4D22F8+eax*4); //mov
	to32i(ecx) = eax; //mov
	eax = to32i(esp+0x10); //mov
	to32i(eax) = 0x86; //mov
	eax = to32i(esp+0x14); //mov
	to32i(eax) = edx; //mov
	xor_(eax, eax);
	al = to8i(byte_512DD5); //mov
	ecx = to32i(esp+0x18); //mov
	eax = to32i(dword_4D2304+eax*4); //mov
	goto loc_407511;
}
Fn(void) Game::_sub_40764C()
{
	static const void *const off_407630[] = {
		&&loc_40766C,
		&&loc_407685,
		&&loc_40769E,
		&&loc_4076B7,
		&&loc_4076D0,
		&&loc_4076E9,
		&&loc_407702,
	};
	push32(edx);
	dl = to8i(byte_512DB0); //mov
	dec(dl);
	eax = 0x12; //mov
	cmp(dl, (int8_t)6);
	if (ja())
		goto loc_407683;
	and_(edx, (int32_t)0xFF);
	goto *off_407630[edx];
loc_40766C:
	xor_(eax, eax);
	al = to8i(byte_4D22A8); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22A9[eax]; //mov
	and_(eax, (int32_t)0xFF);
loc_407683:
	pop32(edx);
	return;
loc_407685:
	xor_(eax, eax);
	al = to8i(byte_4D22D3); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22D4[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
	return;
loc_40769E:
	xor_(eax, eax);
	al = to8i(byte_4D22B1); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22B2[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
	return;
loc_4076B7:
	xor_(eax, eax);
	al = to8i(byte_4D22BA); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22BB[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
	return;
loc_4076D0:
	xor_(eax, eax);
	al = to8i(byte_4D22C6); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22C7[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
	return;
loc_4076E9:
	xor_(eax, eax);
	al = to8i(byte_4D22CD); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22CE[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
	return;
loc_407702:
	xor_(eax, eax);
	al = to8i(byte_4D22D9); //mov
	esp -= 4; _sub_407720(); esp += 4; //call
	al = (int32_t)(intptr_t)byte_4D22DA[eax]; //mov
	and_(eax, (int32_t)0xFF);
	pop32(edx);
}
Fn(void) Game::_sub_407720()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	bl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	dl = bl; //mov
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	inc(bl);
	ah = (int32_t)(intptr_t)byte_4E551A[edx]; //mov
	to8i(byte_50B480) = bl; //mov
	test(ah, ah);
	if (jz())
		goto loc_407768;
loc_407754:
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(byte_4E551A[edx], (int8_t)0);
	if (jnz())
		goto loc_407754;
loc_407768:
	bh = 1; //mov
	eax = edx; //mov
	byte_4E551A[edx] = bh; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_407780()
{
	push32(edx);
	xor_(eax, eax);
loc_407783:
	inc(eax);
	xor_(dl, dl);
	byte_4E5519[eax] = dl; //mov
	cmp(eax, (int32_t)0xB);
	if (jl())
		goto loc_407783;
	pop32(edx);
}
Fn(void) Game::_sub_4077A0()
{
	push32(edx);
	cmp(to8i(byte_512DA9), (int8_t)4);
	if (jnz())
		goto loc_4077BA;
	dh = to8i(byte_512DAA); //mov
	cmp(dh, (int8_t)1);
	if (jz())
		goto loc_4077D3;
	cmp(dh, (int8_t)2);
	if (jz())
		goto loc_4077D3;
loc_4077BA:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_4077D5;
	add(eax, to32i(dword_512DA4));
loc_4077C9:
	cmp(eax, (int32_t)0xB);
	if (jl())
		goto loc_4077D3;
	sub(eax, (int32_t)0xB);
	goto loc_4077C9;
loc_4077D3:
	pop32(edx);
	return;
loc_4077D5:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (ja())
		goto loc_4077C9;
	add(eax, to32i(dword_4D76CC));
	goto loc_4077C9;
}
Fn(void) Game::_sub_4077F0()
{
	push32(ebx);
	push32(ecx);
	cl = (int32_t)(intptr_t)byte_4D407D[eax*2]; //mov
	and_(ecx, (int32_t)0xFF);
	test(ecx, ecx);
	if (jle())
		goto loc_40781A;
loc_407803:
	xor_(ebx, ebx);
	inc(edx);
	bl = (int32_t)(intptr_t)byte_4D407C[eax*2]; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	eax = (int32_t)(intptr_t)(ebx+edx); //lea
	pop32(ecx);
	pop32(ebx);
	return;
loc_40781A:
	ecx = 1; //mov
	goto loc_407803;
}
Fn(void) Game::_sub_407830()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x10);
	edi = esp; //mov
	bl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)dword_405D7C; //mov
	dl = bl; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	ecx = 0x10; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	inc(bl);
	xor_(eax, eax);
	to8i(byte_50B480) = bl; //mov
	al = to8i(esp+edx); //mov
	add(esp, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_407880()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	ah = to8i(byte_512DAA); //mov
	test(ah, ah);
	if (jnz())
		goto loc_4078F4;
loc_407890:
	dl = to8i(byte_512DF5); //mov
	cmp(dl, (int8_t)0xE);
	if (jnz())
		goto loc_40797B;
loc_40789F:
	to32i(dword_4D22A4) = 2; //mov
loc_4078A9:
	cmp(esi, (int32_t)0xA);
	if (jle())
		goto loc_4078B3;
	esi = 0xA; //mov
loc_4078B3:
	edx = to32i(dword_4D22A4); //mov
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_407A6F;
	edx = to32i(dword_4D2266+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(edi) = edx; //mov
	edx = to32i(dword_4D227C+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(ebx) = edx; //mov
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_407A63;
	eax = to32i(dword_4D2292+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_4078F4:
	cmp(ah, (int8_t)3);
	if (jz())
		goto loc_407890;
	dh = to8i(byte_512DA9); //mov
	cmp(dh, (int8_t)1);
	if (jz())
		goto loc_40799B;
	cmp(dh, (int8_t)4);
	if (jnz())
		goto loc_4079F7;
loc_407911:
	push32(ecx);
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jz())
		goto loc_407A15;
loc_40791F:
	xor_(eax, eax);
	xor_(ecx, ecx);
	xor_(edx, edx);
	to32i(dword_4D22A4) = eax; //mov
loc_40792A:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	cmp(ecx, eax);
	if (jge())
		goto loc_407A22;
	eax = to32i(dword_512F98+edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_407BE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40795F;
	cmp(to32i(dword_4D22A4), (int32_t)0);
	if (jnz())
		goto loc_40795F;
	to32i(dword_4D22A4) = 1; //mov
loc_40795F:
	eax = to32i(dword_512F98+edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_407BB0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_407A33;
	inc(ecx);
	add(edx, (int32_t)2);
	goto loc_40792A;
loc_40797B:
	cmp(dl, (int8_t)0xD);
	if (jnz())
		goto loc_40798F;
	to32i(dword_4D22A4) = 1; //mov
	goto loc_4078A9;
loc_40798F:
	xor_(eax, eax);
	to32i(dword_4D22A4) = eax; //mov
	goto loc_4078A9;
loc_40799B:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	inc(esi);
	esp -= 4; _sub_407BB0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40789F;
	al = to8i(byte_512DDA); //mov
	esp -= 4; _sub_407BB0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40789F;
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407BE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4079DF;
loc_4079D0:
	to32i(dword_4D22A4) = 1; //mov
	goto loc_4078A9;
loc_4079DF:
	al = to8i(byte_512DDA); //mov
	esp -= 4; _sub_407BE0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4079D0;
loc_4079ED:
	to32i(dword_4D22A4) = eax; //mov
	goto loc_4078A9;
loc_4079F7:
	cmp(dh, (int8_t)2);
	if (jz())
		goto loc_407911;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407BB0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_407A46;
	goto loc_40789F;
loc_407A15:
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jz())
		goto loc_40791F;
loc_407A22:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	dec(eax);
	add(esi, eax);
	pop32(ecx);
	goto loc_4078A9;
loc_407A33:
	to32i(dword_4D22A4) = 2; //mov
	inc(ecx);
	add(edx, (int32_t)2);
	goto loc_40792A;
loc_407A46:
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407BE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4079ED;
	to32i(dword_4D22A4) = 1; //mov
	goto loc_4078A9;
loc_407A63:
	eax = to32i(dword_4D2258+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_407A6F:
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_407AAB;
	edx = to32i(dword_4D221C+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(edi) = edx; //mov
	edx = to32i(dword_4D2232+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(ebx) = edx; //mov
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_407A9F;
	eax = to32i(dword_4D2248+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_407A9F:
	eax = to32i(dword_4D220E+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_407AAB:
	edx = to32i(dword_4D21D2+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(edi) = edx; //mov
	edx = to32i(dword_4D21E8+eax); //mov
	sar(edx, (int32_t)0x10);
	to32i(ebx) = edx; //mov
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_407AD6;
	eax = to32i(dword_4D21FE+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
	return;
loc_407AD6:
	eax = to32i(dword_4D21C4+eax); //mov
	sar(eax, (int32_t)0x10);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_407AF0()
{
	push32(edx);
	dl = to8i(byte_512F43); //mov
	cmp(dl, (int8_t)2);
	if (jz())
		goto loc_407B08;
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_407B0F;
	esp -= 4; _sub_407BE0(); esp += 4; //call
	pop32(edx);
	return;
loc_407B08:
	esp -= 4; _sub_407BB0(); esp += 4; //call
	pop32(edx);
	return;
loc_407B0F:
	esp -= 4; _sub_407C10(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_407B20()
{
	push32(ebx);
	push32(edx);
	xor_(edx, edx);
	dl = to8i(byte_512DB0); //mov
	add(edx, edx);
	bx = to16i(word_4D21B4+edx); //mov
	cmp(bx, (int16_t)2);
	if (jz())
		goto loc_407B47;
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_407B4F;
	esp -= 4; _sub_407BE0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_407B47:
	esp -= 4; _sub_407BB0(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_407B4F:
	esp -= 4; _sub_407C10(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_407B60()
{
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	al = (int32_t)(intptr_t)word_4D21B4[eax*2]; //mov
	to8i(byte_512F43) = al; //mov
}
Fn(void) Game::_sub_407B80()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_407C10(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_407B90;
	xor_(eax, eax);
	pop32(edx);
	return;
loc_407B90:
	eax = edx; //mov
	esp -= 4; _sub_407BE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_407BA2;
	eax = 1; //mov
	pop32(edx);
	return;
loc_407BA2:
	eax = 2; //mov
	pop32(edx);
}
Fn(void) Game::_sub_407BB0()
{
	cmp(eax, (int32_t)2);
	if (jz())
		goto loc_407BC9;
	cmp(eax, (int32_t)0xA);
	if (jz())
		goto loc_407BC9;
	cmp(eax, (int32_t)5);
	if (jz())
		goto loc_407BC9;
	cmp(eax, (int32_t)8);
	if (jz())
		goto loc_407BC9;
	cmp(eax, (int32_t)0xE);
	if (jnz())
		goto loc_407BCF;
loc_407BC9:
	eax = 1; //mov
	return;
loc_407BCF:
	xor_(eax, eax);
}
Fn(void) Game::_sub_407BE0()
{
	cmp(eax, (int32_t)6);
	if (jz())
		goto loc_407BF9;
	cmp(eax, (int32_t)4);
	if (jz())
		goto loc_407BF9;
	cmp(eax, (int32_t)9);
	if (jz())
		goto loc_407BF9;
	cmp(eax, (int32_t)0xB);
	if (jz())
		goto loc_407BF9;
	cmp(eax, (int32_t)0xD);
	if (jnz())
		goto loc_407BFF;
loc_407BF9:
	eax = 1; //mov
	return;
loc_407BFF:
	xor_(eax, eax);
}
Fn(void) Game::_sub_407C10()
{
	test(eax, eax);
	if (jz())
		goto loc_407C28;
	cmp(eax, (int32_t)3);
	if (jz())
		goto loc_407C28;
	cmp(eax, (int32_t)7);
	if (jz())
		goto loc_407C28;
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_407C28;
	cmp(eax, (int32_t)0xC);
	if (jnz())
		goto loc_407C2E;
loc_407C28:
	eax = 1; //mov
	return;
loc_407C2E:
	xor_(eax, eax);
}
Fn(void) Game::_sub_407C40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x4E78);
	si = to16i(dword_512264); //mov
	dx = to16i(dword_512268); //mov
	eax = esp; //mov
	add(esi, edx);
	xor_(ebx, ebx);
	edx = si; //movsx
	xor_(ecx, ecx);
	esp -= 4; _sub_41A570(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
loc_407C6D:
	edi = si; //movsx
	cmp(ecx, edi);
	if (jl())
		goto loc_407D63;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jle())
		goto loc_407D8E;
	edx = to32i(dword_4D76BC); //mov
	xor_(eax, eax);
loc_407C8D:
	cx = to16i(edx+eax); //mov
	add(eax, (int32_t)2);
	add(ebx, ecx);
	cmp(eax, (int32_t)0x12);
	if (jnz())
		goto loc_407C8D;
loc_407C9C:
	cmp(bx, (int16_t)1);
	if (jge())
		goto loc_407CA7;
	ebx = 1; //mov
loc_407CA7:
	ecx = to32i(dword_512208); //mov
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_407D96;
loc_407CB6:
	eax = bx; //movsx
	ecx = si; //movsx
	edx = (int32_t)(intptr_t)(eax+1); //lea
	cmp(ecx, edx);
	if (jle())
		goto loc_407DB5;
	ebx = (int32_t)(intptr_t)(esp+0x4E60); //lea
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	di = to16i(esp+eax*2+0x4E60); //mov
	eax = ecx; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	eax = to32i(esp+ecx*2+0x4E5C); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	edx = to32i(esp+eax+0x234); //mov
	eax = di; //movsx
	imul32(eax, 0x684);
	xor_(ebx, ebx);
	add(edx, (int32_t)0x2EE00);
	xor_(ecx, ecx);
	to32i(esp+eax+0x234) = edx; //mov
	edx = 0x3E8; //mov
	xor_(eax, eax);
loc_407D1C:
	edi = si; //movsx
	cmp(ecx, edi);
	if (jl())
		goto loc_407DE2;
	ebx = (int32_t)(intptr_t)(esp+0x4E60); //lea
	edx = (int32_t)(intptr_t)(esp+0x4E30); //lea
	eax = edi; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(edi, edi);
loc_407D40:
	eax = si; //movsx
	cmp(ebx, eax);
	if (jge())
		goto loc_407DB5;
	xor_(eax, eax);
	xor_(ecx, ecx);
loc_407D4B:
	edx = to32i(esp+eax+0x4E5E); //mov
	sar(edx, (int32_t)0x10);
	inc(ecx);
	cmp(edx, ebx);
	if (jz())
		goto loc_407E29;
	add(eax, (int32_t)2);
	goto loc_407D4B;
loc_407D63:
	edi = to32i(esp+eax+0x234); //mov
	to32i(esp+edx+0x4E30) = edi; //mov
	edi = to32i(esp+eax+0x278); //mov
	add(edx, (int32_t)4);
	add(eax, (int32_t)0x684);
	to16i(esp+edi*2+0x4E5E) = cx; //mov
	inc(ecx);
	goto loc_407C6D;
loc_407D8E:
	ebx = esi; //mov
	dec(ebx);
	goto loc_407C9C;
loc_407D96:
	cmp(to32i(dword_512264), (int32_t)2);
	if (jl())
		goto loc_407DA8;
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_407CB6;
loc_407DA8:
	cmp(to32i(dword_512264), (int32_t)3);
	if (jge())
		goto loc_407CB6;
loc_407DB5:
	xor_(eax, eax);
	xor_(edx, edx);
loc_407DB9:
	ecx = si; //movsx
	cmp(edx, ecx);
	if (jge())
		goto loc_407E3C;
	ecx = to32i(dword_4D5EF8); //mov
	ebx = (int32_t)(intptr_t)(ecx+eax); //lea
	inc(edx);
	ecx = to32i(esp+eax+0x278); //mov
	add(eax, (int32_t)0x684);
	to32i(ebx+0x278) = ecx; //mov
	goto loc_407DB9;
loc_407DE2:
	edi = to32i(esp+eax+0x21C); //mov
	cmp(to32i(edi), (int32_t)0x24);
	if (jz())
		goto loc_407E10;
loc_407DEE:
	add(edx, (int32_t)0x3E8);
	add(ebx, (int32_t)4);
	edi = to32i(esp+eax+0x234); //mov
	add(eax, (int32_t)0x684);
	inc(ecx);
	to32i(esp+ebx+0x4E2C) = edi; //mov
	goto loc_407D1C;
loc_407E10:
	cmp(to32i(esp+eax+0x234), (int32_t)0);
	if (jg())
		goto loc_407DEE;
	edi = (int32_t)(intptr_t)(edx+0x186A0); //lea
	to32i(esp+eax+0x234) = edi; //mov
	goto loc_407DEE;
loc_407E29:
	add(edi, (int32_t)0x684);
	inc(ebx);
	to32i(esp+edi-0x40C) = ecx; //mov
	goto loc_407D40;
loc_407E3C:
	add(esp, (int32_t)0x4E78);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_407E50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = to32i(dword_4D5EF8); //mov
	xor_(eax, eax);
	edx = 1; //mov
	al = to8i(byte_512DFB); //mov
	esp -= 4; _sub_4030A0(); esp += 4; //call
	edx = 0x10; //mov
	ecx = to32i(dword_4DAB84); //mov
	to32i(dword_4DAB84) = edx; //mov
	esp -= 4; _sub_486F1C(); esp += 4; //call
	edx = to32i(dword_4DAB88); //mov
	eax = edx; //mov
	esi = 1; //mov
	or_(al, (int8_t)4);
	xor_(ebx, ebx);
	to32i(dword_4DAB88) = eax; //mov
	esp -= 4; _sub_408260(); esp += 4; //call
	esp -= 4; _sub_408260(); esp += 4; //call
	esp -= 4; _sub_428990(); esp += 4; //call
	esp -= 4; _sub_47D410(); esp += 4; //call
	to32i(dword_512214) = ebx; //mov
	esp -= 4; _sub_445A60(); esp += 4; //call
	bl = to8i(byte_512DB8); //mov
	esp -= 4; _sub_407190(); esp += 4; //call
	to8i(byte_512DB8) = al; //mov
	eax = (int32_t)(intptr_t)off_4D3D90; //mov
	to32i(dword_4D2310) = esi; //mov
	esp -= 4; _sub_40F5C0(); esp += 4; //call
	ebp = eax; //mov
	to8i(byte_512DB8) = bl; //mov
	xor_(eax, eax);
	xor_(ebx, ebx);
	to32i(dword_4D2310) = eax; //mov
	esp -= 4; _sub_408BF0(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	to32i(dword_4D21AC) = ebx; //mov
	esp -= 4; _sub_403080(); esp += 4; //call
	esp -= 4; _sub_4761E0(); esp += 4; //call
	esp -= 4; _sub_423C40(); esp += 4; //call
	edi = to32i(dword_4D5EF8); //mov
	to32i(dword_4DAB84) = ecx; //mov
	to32i(dword_4DAB88) = edx; //mov
	test(edi, edi);
	if (jz())
		goto loc_407FCF;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_407FCF;
	cmp(to32i(dword_5121F8), (int32_t)2);
	if (jnz())
		goto loc_407F98;
	edx = to32i(dword_512268); //mov
	esi = to32i(dword_512264); //mov
	xor_(eax, eax);
	add(esi, edx);
	edx = 9; //mov
loc_407F4D:
	inc(eax);
	byte_513073[eax] = dl; //mov
	cmp(eax, (int32_t)9);
	if (jl())
		goto loc_407F4D;
	ecx = to32i(dword_512208); //mov
	to32i(dword_4D5EF8) = edi; //mov
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_407F6F;
	esp -= 4; _sub_407C40(); esp += 4; //call
loc_407F6F:
	edi = to32i(dword_4D5EF8); //mov
	xor_(eax, eax);
	test(esi, esi);
	if (jle())
		goto loc_407F98;
	ecx = edi; //mov
	xor_(edx, edx);
loc_407F7F:
	inc(eax);
	bl = to8i(ecx+edx+0x278); //mov
	add(edx, (int32_t)0x684);
	byte_513073[eax] = bl; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_407F7F;
loc_407F98:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_407FC0;
	ecx = edi; //mov
	xor_(edx, edx);
	xor_(eax, eax);
loc_407FA7:
	inc(eax);
	bl = to8i(ecx+edx+0x278); //mov
	add(edx, (int32_t)0x684);
	byte_512ACF[eax] = bl; //mov
	cmp(eax, (int32_t)8);
	if (jl())
		goto loc_407FA7;
loc_407FC0:
	eax = edi; //mov
	to32i(dword_4D5EF8) = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(edi, edi);
loc_407FCF:
	ebx = to32i(dword_4D76B8); //mov
	to32i(dword_4D5EF8) = edi; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_407FFE;
	cmp(to16i(ebx+0x2C0), (int16_t)6);
	if (jle())
		goto loc_407FFE;
	cmp(to32i(dword_512214), (int32_t)2);
	if (jz())
		goto loc_407FFE;
	esp -= 4; _sub_41A350(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D76B8) = eax; //mov
loc_407FFE:
	esp -= 4; _sub_4289F0(); esp += 4; //call
	edi = to32i(dword_4D5EF8); //mov
	eax = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_408020()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = (int32_t)(intptr_t)sub_4242E0; //mov
	ebp = 0x10; //mov
	edi = to32i(dword_4DAB84); //mov
	xor_(ah, ah);
	xor_(ebx, ebx);
	to32i(off_4DAC4C) = edx; //mov
	to8i(byte_4D1FE8) = ah; //mov
	to8i(byte_4D1FE9) = ah; //mov
	to32i(dword_4E5508) = ebx; //mov
	to32i(dword_4E5514) = ebx; //mov
	to32i(dword_4E5510) = ebx; //mov
	to32i(dword_4E550C) = ebx; //mov
	to32i(dword_4E5504) = ebx; //mov
	to32i(dword_4E5500) = ebx; //mov
	to32i(dword_4E54F8) = ebx; //mov
	to32i(dword_4E54FC) = ebx; //mov
	to32i(dword_4DAB84) = ebp; //mov
	esp -= 4; _sub_486F1C(); esp += 4; //call
	esi = to32i(dword_4DAB88); //mov
	eax = esi; //mov
	or_(al, (int8_t)4);
	to32i(dword_4DAB88) = eax; //mov
	esp -= 4; _sub_445A60(); esp += 4; //call
	esp -= 4; _sub_408260(); esp += 4; //call
	eax = 0x11; //mov
	xor_(edx, edx);
	esp -= 4; _sub_421FA0(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_422060(); esp += 4; //call
	esp -= 4; _sub_408260(); esp += 4; //call
	esp -= 4; _sub_428990(); esp += 4; //call
	cmp(to32i(dword_4D21B0), (int32_t)0);
	if (jnz())
		goto loc_4081E2;
loc_4080CA:
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512DFB); //mov
	esp -= 4; _sub_4030A0(); esp += 4; //call
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_40821B;
	cmp(to32i(dword_4D76BC), (int32_t)0);
	if (jnz())
		goto loc_40821B;
	xor_(ah, ah);
	to8i(byte_512DAA) = ah; //mov
loc_4080FA:
	cl = to8i(byte_50B480); //mov
	xor_(edx, edx);
	dl = cl; //mov
	dl = (int32_t)(intptr_t)byte_4D5A49[edx]; //mov
	and_(edx, (int32_t)0xFF);
	ebx = 0xB; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	inc(cl);
	to8i(byte_50B480) = cl; //mov
	eax = (int32_t)(intptr_t)off_4D3EC4; //mov
	to32i(dword_4D76CC) = edx; //mov
	esp -= 4; _sub_40F5C0(); esp += 4; //call
	ecx = eax; //mov
loc_408136:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_41AE70(); esp += 4; //call
	to32i(dword_512DB4) = eax; //mov
	esp -= 4; _sub_403080(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	to32i(dword_4D21AC) = ebp; //mov
	esp -= 4; _sub_408BF0(); esp += 4; //call
	esp -= 4; _sub_423C40(); esp += 4; //call
	to32i(dword_4DAB84) = edi; //mov
	to32i(dword_4DAB88) = esi; //mov
	esp -= 4; _sub_4761E0(); esp += 4; //call
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_408199;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jnz())
		goto loc_408199;
	cmp(to32i(dword_512214), (int32_t)2);
	if (jz())
		goto loc_408199;
	esp -= 4; _sub_41A370(); esp += 4; //call
	esp -= 4; _sub_41A490(); esp += 4; //call
loc_408199:
	ebx = to32i(dword_4D231C); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4081B2;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D231C) = esi; //mov
loc_4081B2:
	edi = to32i(dword_4D2320); //mov
	test(edi, edi);
	if (jz())
		goto loc_4081CB;
	eax = edi; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D2320) = ebp; //mov
loc_4081CB:
	eax = to32i(dword_4D2324); //mov
	test(eax, eax);
	if (jnz())
		goto loc_40823D;
	esp -= 4; _sub_4289F0(); esp += 4; //call
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4081E2:
	xor_(edx, edx);
	to32i(dword_4D21B0) = edx; //mov
	esp -= 4; _sub_4083D0(); esp += 4; //call
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40820C;
	esp -= 4; _sub_476250(); esp += 4; //call
	eax = (int32_t)(intptr_t)aTitleav_dct; //mov
	esp -= 4; _sub_4242F0(); esp += 4; //call
	esp -= 4; _sub_4769D0(); esp += 4; //call
loc_40820C:
	esp -= 4; _sub_408450(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	goto loc_4080CA;
loc_40821B:
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_40822B;
	esp -= 4; _sub_4082B4(); esp += 4; //call
	ecx = eax; //mov
loc_40822B:
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_4080FA;
	goto loc_408136;
loc_40823D:
	xor_(edx, edx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D2324) = edx; //mov
	esp -= 4; _sub_4289F0(); esp += 4; //call
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_408260()
{
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	esp -= 4; _unknown_libname_4(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	_sub_4824BC(); return; //jmp
}
Fn(void) Game::_sub_4082B4()
{
	static const void *const off_4082A0[] = {
		&&loc_4082D5,
		&&loc_408325,
		&&loc_40832C,
		&&loc_40832C,
		&&loc_40832C,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_4D76BC); //mov
	al = to8i(byte_512DA9); //mov
	cmp(al, (int8_t)4);
	if (ja())
		goto loc_4082DA;
	and_(eax, (int32_t)0xFF);
	goto *off_4082A0[eax];
loc_4082D5:
	ebp = 1; //mov
loc_4082DA:
	xor_(ecx, ecx);
	test(ebp, ebp);
	if (jle())
		goto loc_4082F3;
	esi = (int32_t)(intptr_t)(ebp+ebp+0); //lea
	ebx = edx; //mov
	xor_(eax, eax);
loc_4082E8:
	cmp(to16i(ebx+eax), (int16_t)0);
	if (jz())
		goto loc_40839B;
loc_4082F3:
	cmp(ecx, ebp);
	if (jnz())
		goto loc_4083B6;
	to32i(dword_4D76BC) = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_4083AC;
loc_408309:
	xor_(bl, bl);
	xor_(edx, edx);
	to8i(byte_512DAA) = bl; //mov
	eax = 0xFFFFFFFD; //mov
	to32i(dword_4D76BC) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_408325:
	ebp = 2; //mov
	goto loc_4082DA;
loc_40832C:
	ebx = to32i(dword_512264); //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_408346;
	esi = (int32_t)(intptr_t)(ebx+ebx); //lea
	xor_(eax, eax);
	ebx = edx; //mov
loc_40833F:
	cmp(to16i(ebx+eax), (int16_t)0);
	if (jz())
		goto loc_40837C;
loc_408346:
	cmp(ecx, to32i(dword_512264));
	if (jnz())
		goto loc_408386;
loc_40834E:
	xor_(ebp, ebp);
loc_408350:
	test(ebp, ebp);
	if (jle())
		goto loc_4082DA;
	edi = 0x24; //mov
	ebx = (int32_t)(intptr_t)(ebp+ebp+0); //lea
	ecx = edx; //mov
	xor_(eax, eax);
loc_408361:
	cmp(to16i(ecx+eax), (int16_t)0);
	if (jnz())
		goto loc_40836F;
	to16i(dword_512F98+2+eax) = di; //mov
loc_40836F:
	add(eax, (int32_t)2);
	cmp(eax, ebx);
	if (jge())
		goto loc_4082DA;
	goto loc_408361;
loc_40837C:
	add(eax, (int32_t)2);
	inc(ecx);
	cmp(eax, esi);
	if (jl())
		goto loc_40833F;
	goto loc_408346;
loc_408386:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jnz())
		goto loc_40834E;
	ebp = to32i(dword_513408); //mov
	sar(ebp, (int32_t)0x10);
	goto loc_408350;
loc_40839B:
	add(eax, (int32_t)2);
	inc(ecx);
	cmp(eax, esi);
	if (jl())
		goto loc_4082E8;
	goto loc_4082F3;
loc_4083AC:
	esp -= 4; _sub_41A2A0(); esp += 4; //call
	goto loc_408309;
loc_4083B6:
	inc(to8i(byte_512DB0));
	eax = 0xFFFFFFFD; //mov
	to32i(dword_4D76BC) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4083D0()
{
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_4083DA;
	return;
loc_4083DA:
	push32(edx);
	push32(ecx);
	push32(ebx);
	dl = to8i(byte_4D3E2C); //mov
	bl = to8i(byte_4D3E68); //mov
	cl = to8i(byte_4D2FE0); //mov
	eax = to32i(off_4D26B0); //mov
	or_(dl, (int8_t)1);
	or_(bl, (int8_t)1);
	or_(cl, (int8_t)1);
	to8i(byte_4D3E2C) = dl; //mov
	to8i(byte_4D3E68) = bl; //mov
	to8i(byte_4D2FE0) = cl; //mov
	dh = to8i(byte_4D3E40); //mov
	bh = to8i(byte_4D3E7C); //mov
	ch = to8i(eax+8); //mov
	or_(dh, (int8_t)1);
	or_(bh, (int8_t)1);
	or_(ch, (int8_t)1);
	to8i(byte_4D3E40) = dh; //mov
	to8i(byte_4D3E7C) = bh; //mov
	edx = 2; //mov
	to8i(eax+8) = ch; //mov
	to16i(word_4D3ECE) = dx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_408450()
{
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0x50);
	edx = to32i(dword_5134B4); //mov
	push32(edx);
	push32(aStitle_qfs);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	dl = to8i(byte_512ECC); //mov
	ecx = eax; //mov
	test(dl, dl);
	if (jz())
		goto loc_408499;
loc_408483:
	push32(ebx);
	xor_(ebx, ebx);
loc_408486:
	esp -= 4; _sub_405A60(); esp += 4; //call
	cmp(eax, (int32_t)0xD);
	if (jnz())
		goto loc_4084A0;
loc_408490:
	eax = ebx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_408486;
loc_408499:
	esp -= 4; _sub_408558(); esp += 4; //call
	goto loc_408483;
loc_4084A0:
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408490;
	esp -= 4; _sub_486F28(); esp += 4; //call
	cmp(to16i(byte_4E5518), (int16_t)0);
	if (jnz())
		goto loc_4084F5;
loc_4084B8:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	xor_(edx, edx);
	xor_(ebx, ebx);
loc_4084C1:
	esp -= 4; _sub_486E5C(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408505;
	esp -= 4; _sub_405A60(); esp += 4; //call
	cmp(eax, (int32_t)0xD);
	if (jz())
		goto loc_408505;
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408505;
	cmp(edx, (int32_t)0x1F4);
	if (jge())
		goto loc_408505;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	eax = ebx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_4084C1;
loc_4084F5:
	xor_(ebx, ebx);
	to16i(byte_4E5518) = bx; //mov
	esp -= 4; _sub_408610(); esp += 4; //call
	goto loc_4084B8;
loc_408505:
	test(ecx, ecx);
	if (jnz())
		goto loc_40851F;
loc_408509:
	xor_(edx, edx);
	pop32(ebx);
loc_40850C:
	esp -= 4; _sub_405A60(); esp += 4; //call
	cmp(eax, (int32_t)0xD);
	if (jnz())
		goto loc_408528;
loc_408516:
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_40850C;
loc_40851F:
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_408509;
loc_408528:
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408516;
	esp -= 4; _sub_486F28(); esp += 4; //call
	add(esp, (int32_t)0x50);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_408558()
{
	static const void *const off_408540[] = {
		&&loc_40858F,
		&&loc_4085AD,
		&&loc_4085B4,
		&&loc_4085BB,
		&&loc_4085C2,
		&&loc_4085C9,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)aBack; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	ebx = eax; //mov
	edx = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_483470(); esp += 4; //call
	bl = to8i(byte_512DFB); //mov
	cmp(bl, (int8_t)5);
	if (ja())
		goto loc_4085D0;
	and_(ebx, (int32_t)0xFF);
	goto *off_408540[ebx];
loc_40858F:
	edx = (int32_t)(intptr_t)aEngl; //mov
loc_408594:
	eax = ecx; //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_486D10(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4085AD:
	edx = (int32_t)(intptr_t)aGerm; //mov
	goto loc_408594;
loc_4085B4:
	edx = (int32_t)(intptr_t)aFren; //mov
	goto loc_408594;
loc_4085BB:
	edx = (int32_t)(intptr_t)aSpan; //mov
	goto loc_408594;
loc_4085C2:
	edx = (int32_t)(intptr_t)aItly; //mov
	goto loc_408594;
loc_4085C9:
	edx = (int32_t)(intptr_t)aSwed; //mov
	goto loc_408594;
loc_4085D0:
	to32i(dword_4DB1D8) = (int32_t)(intptr_t)aCNfs2seFront_0; //mov
	xor_(ecx, ecx);
	cl = to8i(byte_512DFB); //mov
	push32(ecx);
	ebx = 0x2C9; //mov
	push32(aBugUnsupported);
	to32i(dword_4DB1DC) = ebx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)8);
	eax = edx; //mov
	esp -= 4; _sub_486D10(); esp += 4; //call
	esp -= 4; _sub_428770(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_408610()
{
	push32(ecx);
	push32(edx);
	ah = 2; //mov
	to8i(byte_512ECD) = ah; //mov
	esp -= 4; _sub_4879D0(); esp += 4; //call
	xor_(dl, dl);
	to8i(byte_512ECE) = dl; //mov
	to8i(byte_512ECF) = dl; //mov
	to8i(byte_512ED0) = dl; //mov
	eax = 1; //mov
	to32i(dword_4D69C0) = eax; //mov
	to8i(byte_512ED2) = dl; //mov
	to8i(byte_512ED1) = dl; //mov
	ecx = 0x3FC00000; //mov
	to32i(dword_4D4D20) = ecx; //mov
	esp -= 4; _sub_428990(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_408730()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x118);
	xor_(edx, edx);
	ecx = to32i(dword_4D76BC); //mov
	to32i(esp+0x108) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_408905;
loc_408750:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (ja())
		goto loc_408917;
loc_40875D:
	push32(edi);
	push32(esi);
	push32(ebx);
	esi = to32i(dword_5134C8); //mov
	push32(esi);
	push32(aSconfig_dat);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	ecx = (int32_t)(intptr_t)(esp+0x11C); //lea
	ebx = (int32_t)(intptr_t)(esp+0x120); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0x118); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4877BC(); esp += 4; //call
	edi = to32i(esp+0x118); //mov
	test(edi, edi);
	if (jnz())
		goto loc_408926;
	ecx = 1; //mov
	ebp = 1; //mov
	to16i(byte_4E5518) = cx; //mov
loc_4087B7:
	esp -= 4; _sub_408DF0(); esp += 4; //call
loc_4087BC:
	xor_(dl, dl);
	xor_(ebx, ebx);
	xor_(esi, esi);
	to8i(byte_512DAA) = dl; //mov
	to32i(dword_512F48) = ebx; //mov
	to8i(byte_512DA9) = dl; //mov
loc_4087D4:
	add(esi, (int32_t)2);
	xor_(edi, edi);
	to16i(dword_512F34+esi) = di; //mov
	cmp(esi, (int32_t)4);
	if (jnz())
		goto loc_4087D4;
	esp -= 4; _sub_421F10(); esp += 4; //call
	esi = 2; //mov
	xor_(edx, edx);
	to32i(esp+0x120) = esi; //mov
	edi = eax; //mov
	to32i(esp+0x120) = edx; //mov
	test(eax, eax);
	if (jle())
		goto loc_4088A6;
	xor_(esi, esi);
loc_40880B:
	cmp(to32i(esp+0x120), (int32_t)2);
	if (jge())
		goto loc_4088A6;
	eax = to32i(esp+0x11D); //mov
	ebx = (int32_t)(intptr_t)(esp+0x10C); //lea
	edx = (int32_t)(intptr_t)(esp+0x108); //lea
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_421BD0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40888C;
	cmp(to32i(esp+0x108), (int32_t)0);
	if (jz())
		goto loc_408870;
	push32(0);
	push32(0);
	push32(0);
	push32(0);
	edx = (int32_t)(intptr_t)(esp+0x12C); //lea
	eax = to32i(esp+0x130); //mov
	push32(0);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_477C10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408870;
	to32i(esp+0x108) = eax; //mov
loc_408870:
	eax = to32i(esp+0x108); //mov
	to16i(dword_512F34+2+esi) = ax; //mov
	eax = to32i(esp+0x10C); //mov
	to16i(word_512F3A+esi) = ax; //mov
loc_40888C:
	ecx = to32i(esp+0x120); //mov
	inc(ecx);
	add(esi, (int32_t)2);
	to32i(esp+0x120) = ecx; //mov
	cmp(edi, ecx);
	if (jg())
		goto loc_40880B;
loc_4088A6:
	esp -= 4; _sub_4793B0(); esp += 4; //call
	to8i(byte_512ED3) = al; //mov
	test(edi, edi);
	if (jnz())
		goto loc_4088B9;
	esp -= 4; _sub_408A30(); esp += 4; //call
loc_4088B9:
	xor_(eax, eax);
	push32(eax);
	eax = time_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	to16i(dword_512D9E+2) = ax; //mov
	xor_(eax, eax);
	xor_(eax, eax);
	push32(eax);
	eax = time_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	to8i(byte_50B480) = al; //mov
	esp -= 4; _sub_408B40(); esp += 4; //call
	eax = (int32_t)(intptr_t)aRemote; //mov
	edx = to32i(dword_513468); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408A16;
	al = 1; //mov
#if !defined(__powerpc64__) && !defined(__PPC64__)
	to8i(byte_512ECC) = al; //mov
#endif
	eax = ebp; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x118);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_408A16:
	xor_(al, al);
#if !defined(__powerpc64__) && !defined(__PPC64__)
	to8i(byte_512ECC) = al; //mov
#endif
	eax = ebp; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x118);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_408905:
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jnz())
		goto loc_408750;
	goto loc_40875D;
loc_408917:
	eax = (int32_t)(intptr_t)dword_54B46C; //mov
	add(esp, (int32_t)0x118);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_408926:
	ebp = to32i(esp+0x110); //mov
	cmp(ebp, (int32_t)0x2AC);
	if (jz())
		goto loc_408974;
	ebx = 1; //mov
	eax = edi; //mov
	to16i(byte_4E5518) = bx; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	ecx = to32i(dword_5134C8); //mov
	push32(ecx);
	push32(aSconfig_dat);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebp = 1; //mov
	esp -= 4; _sub_4879AE(); esp += 4; //call
	goto loc_4087B7;
loc_408974:
	eax = (int32_t)(intptr_t)aCNfs2seFront_0; //mov
	xor_(edx, edx);
	xor_(ebx, ebx);
	to16i(byte_4E5518) = dx; //mov
	to32i(dword_4DB1D8) = eax; //mov
	edx = 0x23F; //mov
	eax = (int32_t)(intptr_t)aFrontend; //mov
	to32i(dword_4DB1DC) = edx; //mov
	edx = ebp; //mov
	ecx = 0x2AC; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(esp+0x110); //mov
	ebp = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0x118); //mov
	edi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x118); //mov
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
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DFE); //mov
	to32i(dword_4D5A30) = eax; //mov
	to32i(dword_4D5A34) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFD); //mov
	to32i(dword_4D5A2C) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFC); //mov
	xor_(ebp, ebp);
	to32i(dword_4D5A28) = eax; //mov
	goto loc_4087BC;
}
Fn(void) Game::_sub_408A30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	eax = to32i(dword_512E0C); //mov
	edx = to32i(dword_512E10); //mov
	ecx = to32i(dword_512E14); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E18); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E1C); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E20); //mov
	or_(eax, esi);
	ebp = to32i(dword_512E24); //mov
	or_(eax, edi);
	edx = to32i(dword_512E28); //mov
	or_(eax, ebp);
	ecx = to32i(dword_512E2C); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E30); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E34); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E3C); //mov
	or_(eax, esi);
	ebp = to32i(dword_512E44); //mov
	or_(eax, edi);
	edx = to32i(dword_512E4C); //mov
	or_(eax, ebp);
	ecx = to32i(dword_512E54); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E5C); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E64); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E6C); //mov
	or_(eax, esi);
	ebp = to32i(dword_512E74); //mov
	or_(eax, edi);
	edx = to32i(dword_512E7C); //mov
	or_(eax, ebp);
	ecx = to32i(dword_512E38); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E40); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E48); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E50); //mov
	or_(eax, esi);
	ebp = to32i(dword_512E58); //mov
	or_(eax, edi);
	edx = to32i(dword_512E60); //mov
	or_(eax, ebp);
	ecx = to32i(dword_512E68); //mov
	or_(eax, edx);
	ebx = to32i(dword_512E70); //mov
	or_(eax, ecx);
	esi = to32i(dword_512E78); //mov
	or_(eax, ebx);
	edi = to32i(dword_512E80); //mov
	or_(eax, esi);
	or_(eax, edi);
	esp -= 4; _sub_404D40(); esp += 4; //call
	test(al, (int8_t)3);
	if (jnz())
		goto loc_408B33;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_408B33:
	esp -= 4; _sub_4090C0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_408B40()
{
	push32(edx);
	eax = (int32_t)(intptr_t)aEnglish_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408B5D;
	xor_(ah, ah);
	to8i(byte_512DFB) = ah; //mov
loc_408B5D:
	eax = (int32_t)(intptr_t)aGerman_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408B78;
	to8i(byte_512DFB) = 1; //mov
loc_408B78:
	eax = (int32_t)(intptr_t)aFrench_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408B93;
	to8i(byte_512DFB) = 2; //mov
loc_408B93:
	eax = (int32_t)(intptr_t)aSpanish_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408BAE;
	to8i(byte_512DFB) = 3; //mov
loc_408BAE:
	eax = (int32_t)(intptr_t)aItalian_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_408BC9;
	to8i(byte_512DFB) = 4; //mov
loc_408BC9:
	eax = (int32_t)(intptr_t)aSwedish_0; //mov
	edx = to32i(dword_513464); //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_408BDF;
	pop32(edx);
	return;
loc_408BDF:
	to8i(byte_512DFB) = 5; //mov
	pop32(edx);
}
Fn(void) Game::_sub_408BF0()
{
	push32(ebp);
	sub(esp, (int32_t)0xFC);
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	edx = (int32_t)(intptr_t)aCNfs2seFront_0; //mov
	ecx = 0x1C2; //mov
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	al = to8i(dword_4D5A30); //mov
	xor_(ebx, ebx);
	to8i(byte_512DFE) = al; //mov
	to32i(dword_4DB1D8) = edx; //mov
	al = to8i(dword_4D5A2C); //mov
	to32i(dword_4DB1DC) = ecx; //mov
	to8i(byte_512DFD) = al; //mov
	al = to8i(dword_4D5A28); //mov
	edx = 0x2AC; //mov
	to8i(byte_512DFC) = al; //mov
	eax = (int32_t)(intptr_t)aFrontend; //mov
	ecx = 0x2AC; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edi = eax; //mov
	ebp = eax; //mov
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
	ebx = to32i(dword_5134C8); //mov
	push32(ebx);
	push32(aSconfig_dat);
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = ebp; //mov
	edx = ebp; //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_4875B0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0xFC);
	pop32(ebp);
}
Fn(void) Game::_sub_408CC0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x50);
	xor_(eax, eax);
	al = to8i(byte_512DFB); //mov
	esp -= 4; _sub_41B730(); esp += 4; //call
	eax = 0x2A1; //mov
	edi = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
#if defined(__powerpc64__) || defined(__PPC64__)
	test(esi, esi);
	if (jz())
		goto loc_408CC0_null;
#endif
	push32(edi);
loc_408CE1:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_408CF9;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_408CE1;
loc_408CF9:
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
	cmp(ecx, (int32_t)8);
	if (jbe())
		goto loc_408D9D;
	push32(edx);
	push32(ebx);
	ebx = 8; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 8; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = (int32_t)(intptr_t)byte_512F55; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	pop32(ebx);
	pop32(edx);
loc_408D39:
	esi = (int32_t)(intptr_t)dword_4C81BC; //mov
	edi = (int32_t)(intptr_t)dword_512F4C; //mov
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
loc_408D4C:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_408D64;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_408D4C;
loc_408D64:
	pop32(edi);
	esi = (int32_t)(intptr_t)dword_4C81C0; //mov
	edi = (int32_t)(intptr_t)byte_512F55; //mov
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
loc_408D78:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_408D90;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_408D78;
loc_408D90:
	pop32(edi);
	esp -= 4; _sub_41B620(); esp += 4; //call
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
#if defined(__powerpc64__) || defined(__PPC64__)
loc_408CC0_null:
	to8i(edi) = 0; // null-terminate buffer (empty string)
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
#endif
loc_408D9D:
	esi = esp; //mov
	edi = (int32_t)(intptr_t)dword_512F4C; //mov
	push32(edi);
loc_408DA5:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_408DBD;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_408DA5;
loc_408DBD:
	pop32(edi);
	esi = esp; //mov
	edi = (int32_t)(intptr_t)byte_512F55; //mov
	push32(edi);
loc_408DC6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_408DDE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_408DC6;
loc_408DDE:
	pop32(edi);
	goto loc_408D39;
}
Fn(void) Game::_sub_408DF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	bl = 1; //mov
	xor_(edx, edx);
	xor_(ah, ah);
	to16i(dword_512D9E+2) = dx; //mov
	to8i(byte_512DA8) = ah; //mov
	to8i(byte_512DBC) = ah; //mov
	to8i(byte_512DBD) = ah; //mov
	to8i(byte_512DAF) = bl; //mov
	to8i(byte_512DA9) = ah; //mov
	to8i(byte_512DAA) = ah; //mov
	to8i(byte_512DAB) = bl; //mov
	to8i(byte_512DAC) = ah; //mov
	to8i(byte_512DAD) = ah; //mov
	to8i(byte_512DAE) = bl; //mov
	to8i(byte_512DBA) = ah; //mov
	to8i(byte_512DBB) = ah; //mov
	to8i(byte_512DB0) = ah; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	to32i(dword_512DA4) = edx; //mov
	esp -= 4; _sub_41AE70(); esp += 4; //call
	to32i(dword_512DB4) = eax; //mov
	to8i(byte_512DC0) = bl; //mov
	to8i(byte_512DDB) = bl; //mov
	xor_(dh, dh);
	eax = 1; //mov
	to8i(byte_512DB8) = dh; //mov
	to8i(byte_512DB9) = dh; //mov
	to8i(byte_512DBF) = dh; //mov
	to8i(byte_512DD1) = dh; //mov
	to8i(byte_512DBE) = dh; //mov
	to8i(byte_512DD0) = dh; //mov
	to8i(byte_512DEB) = dh; //mov
	esp -= 4; _sub_409070(); esp += 4; //call
	eax = 2; //mov
	esp -= 4; _sub_409070(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
loc_408EB4:
	inc(eax);
	bl = (int32_t)(intptr_t)byte_4D407C[edx]; //mov
	byte_512DDB[eax] = bl; //mov
	add(edx, (int32_t)2);
	byte_512DC0[eax] = bl; //mov
	cmp(eax, (int32_t)0xF);
	if (jl())
		goto loc_408EB4;
	ch = 1; //mov
	bh = 0xC; //mov
	to8i(byte_512DD6) = ch; //mov
	to8i(byte_512DD8) = ch; //mov
	ah = ch; //mov
	to8i(byte_512DD9) = ch; //mov
	to8i(byte_512DF2) = ch; //mov
	to8i(byte_512DF3) = ch; //mov
	to8i(byte_512DF4) = ch; //mov
	cl = 2; //mov
	to8i(byte_512DF5) = bh; //mov
	to8i(byte_512DF6) = cl; //mov
	to8i(byte_512DF8) = ch; //mov
	xor_(ah, ch);
	to8i(byte_512DF9) = ch; //mov
	to8i(byte_512DF7) = ah; //mov
	esp -= 4; _sub_408B40(); esp += 4; //call
	dl = to8i(byte_512DFB); //mov
	test(dl, dl);
	if (jz())
		goto loc_409057;
	to8i(byte_512DFA) = ch; //mov
loc_408F34:
	bh = 0x80; //mov
	al = 8; //mov
	dl = 1; //mov
	xor_(ecx, ecx);
	to8i(byte_512DFD) = bh; //mov
	to8i(byte_512DFE) = bh; //mov
	to8i(byte_512F42) = al; //mov
	to8i(byte_512F3E) = dl; //mov
	to8i(byte_512F3F) = dl; //mov
	to8i(byte_512DFC) = bh; //mov
	dl = 0x64; //mov
	xor_(ah, ah);
	ebx = 0xC; //mov
	to8i(byte_512F43) = ah; //mov
	to8i(byte_512F40) = ah; //mov
	to8i(byte_512F41) = ah; //mov
	to8i(byte_512DFF) = ah; //mov
	to8i(byte_512E00) = ah; //mov
	al = 2; //mov
	to8i(dword_512ED4) = dl; //mov
	to8i(byte_512ECD) = al; //mov
	to8i(byte_512ED3) = ah; //mov
loc_408F99:
	edx = ebx; //mov
	imul32(eax, ecx, 0xC);
loc_408F9E:
	add(eax, (int32_t)2);
	xor_(edi, edi);
	to16i(dword_512ED4+eax) = di; //mov
	to16i(dword_512EEC+eax) = 0x68; //mov
	to16i(dword_512F04+eax) = 0x98; //mov
	to16i(dword_512F1C+eax) = 0xFF; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_408F9E;
	inc(ecx);
	add(ebx, (int32_t)0xC);
	cmp(ecx, (int32_t)2);
	if (jl())
		goto loc_408F99;
	esi = (int32_t)(intptr_t)dword_4C81B8; //mov
	xor_(dh, dh);
	edi = (int32_t)(intptr_t)byte_512F5E; //mov
	to8i(byte_512ECE) = dh; //mov
	to8i(byte_512ECF) = dh; //mov
	to8i(byte_512ED0) = dh; //mov
	to8i(byte_512ED1) = dh; //mov
	to8i(byte_512ED2) = dh; //mov
	esp -= 4; _sub_4090C0(); esp += 4; //call
	al = 3; //mov
	to8i(byte_512F45) = dh; //mov
	to8i(byte_512F44) = al; //mov
	esp -= 4; _sub_408CC0(); esp += 4; //call
	push32(edi);
loc_409014:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40902C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409014;
loc_40902C:
	pop32(edi);
	esi = (int32_t)(intptr_t)dword_4C81B8; //mov
	edi = (int32_t)(intptr_t)word_512F86; //mov
	push32(edi);
loc_409038:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409050;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409038;
loc_409050:
	pop32(edi);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409057:
	to8i(byte_512DFA) = dl; //mov
	goto loc_408F34;
}
Fn(void) Game::_sub_409070()
{
	push32(edx);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_40909C;
	push32(ecx);
	cl = 1; //mov
	to8i(byte_512DD2) = cl; //mov
	xor_(ch, ch);
	to8i(byte_512DD3) = ch; //mov
	to8i(byte_512DD4) = ch; //mov
	to8i(byte_512DD5) = cl; //mov
	to8i(byte_512DD7) = cl; //mov
	pop32(ecx);
	pop32(edx);
	return;
loc_40909C:
	xor_(dl, dl);
	ah = 1; //mov
	to8i(byte_512DEE) = dl; //mov
	to8i(byte_512DEF) = dl; //mov
	to8i(byte_512DF0) = ah; //mov
	to8i(byte_512DF1) = ah; //mov
	to8i(byte_512DEC) = ah; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4090C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)8);
	bl = 0x5A; //mov
	ah = 0x51; //mov
	dl = 0x57; //mov
	bh = 0x41; //mov
	to8i(esp+4) = dl; //mov
	dh = to8i(byte_512DFB); //mov
	to8i(esp) = ah; //mov
	cmp(dh, (int8_t)1);
	if (jnz())
		goto loc_4090E2;
	bl = 0x59; //mov
loc_4090E2:
	cmp(to8i(byte_512DFB), (int8_t)2);
	if (jnz())
		goto loc_4090FA;
	bh = 0x51; //mov
	al = 0x5A; //mov
	ch = 0x41; //mov
	bl = 0x57; //mov
	to8i(esp+4) = al; //mov
	to8i(esp) = ch; //mov
loc_4090FA:
	edx = 0x4B00004B; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x4D00004D; //mov
	to32i(dword_512E0C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x48000048; //mov
	to32i(dword_512E10) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x50000050; //mov
	to32i(dword_512E14) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x420030; //mov
	to32i(dword_512E18) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x43002E; //mov
	to32i(dword_512E1C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x200039; //mov
	to32i(dword_512E20) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x480023; //mov
	to32i(dword_512E24) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E28) = eax; //mov
	xor_(eax, eax);
	al = bh; //mov
	shl(eax, (int32_t)0x10);
	ecx = (int32_t)(intptr_t)(eax+0x1E); //lea
	eax = 4; //mov
	edx = ecx; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E2C) = eax; //mov
	and_(ebx, (int32_t)0xFF);
	shl(ebx, (int32_t)0x10);
	add(ebx, (int32_t)0x2C);
	eax = 4; //mov
	edx = ebx; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E30) = eax; //mov
	edx = 0x4B00004B; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x4D00004D; //mov
	to32i(dword_512E34) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x48000048; //mov
	to32i(dword_512E3C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x50000050; //mov
	to32i(dword_512E44) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x51000051; //mov
	to32i(dword_512E4C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x49000049; //mov
	to32i(dword_512E54) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x47000047; //mov
	to32i(dword_512E5C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x4F00004F; //mov
	to32i(dword_512E64) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x52000052; //mov
	to32i(dword_512E6C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x53000053; //mov
	to32i(dword_512E74) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x53001F; //mov
	to32i(dword_512E7C) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E38) = eax; //mov
	edx = 0x460021; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x450012; //mov
	to32i(dword_512E40) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x440020; //mov
	to32i(dword_512E48) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E50) = eax; //mov
	edx = ebx; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x520013; //mov
	to32i(dword_512E58) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E60) = eax; //mov
	xor_(eax, eax);
	al = to8i(esp+4); //mov
	shl(eax, (int32_t)0x10);
	edx = (int32_t)(intptr_t)(eax+0x11); //lea
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	edx = 0x540014; //mov
	to32i(dword_512E68) = eax; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	xor_(edx, edx);
	dl = to8i(esp); //mov
	to32i(dword_512E70) = eax; //mov
	shl(edx, (int32_t)0x10);
	eax = 4; //mov
	add(edx, (int32_t)0x10);
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E78) = eax; //mov
	edx = ecx; //mov
	eax = 4; //mov
	esp -= 4; _sub_404D50(); esp += 4; //call
	to32i(dword_512E80) = eax; //mov
	add(esp, (int32_t)8);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40938C()
{
	static const void *const off_409370[] = {
		&&loc_409513,
		&&loc_409650,
		&&loc_4096FD,
		&&loc_409646,
		&&loc_409773,
		&&loc_40981B,
		&&loc_409891,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x944);
	ebp = eax; //mov
	ah = to8i(byte_512DAA); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	to32i(esp+0x93C) = edx; //mov
	to32i(esp+0x934) = ecx; //mov
	edx = 1; //mov
	to32i(esp+0x938) = ecx; //mov
	to32i(esp+0x940) = edx; //mov
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_4095ED;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_4095ED;
	and_(to8i(byte_4D3910), (int8_t)0xFE);
loc_4093E2:
	esp -= 4; _sub_486F28(); esp += 4; //call
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_409617;
	and_(to8i(byte_4D394C), (int8_t)0xFE);
loc_409400:
	eax = ebp; //mov
	edi = to32i(esp+0x93C); //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	test(edi, edi);
	if (jnz())
		goto loc_4095D9;
loc_409416:
	cmp(to32i(dword_512214), (int32_t)2);
	if (jnz())
		goto loc_40942A;
	to32i(esp+0x93C) = 0xFFFFFFFD; //mov
loc_40942A:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ebx = to32i(esp+0x938); //mov
	xor_(edx, edx);
	add(ebx, eax);
	eax = ebp; //mov
	to32i(esp+0x938) = ebx; //mov
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_409623;
loc_409450:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(ebp+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_40949C:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	to32i(esp+0x940) = eax; //mov
loc_4094AA:
	esp -= 4; _sub_405960(); esp += 4; //call
	ecx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_4095BE;
	eax = to32i(esp+0x938); //mov
	cmp(eax, to32i(esp+0x934));
	if (jle())
		goto loc_4095BE;
	add(eax, (int32_t)0xF);
	to32i(esp+0x934) = eax; //mov
	to32i(esp+0x940) = 1; //mov
	cmp(cx, (int16_t)0xD);
	if (jnz())
		goto loc_409891;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	ax = to16i(ebp+0xA); //mov
	cmp(ax, (int16_t)6);
	if (ja())
		goto loc_4095BE;
	and_(eax, (int32_t)0xFFFF);
	goto *off_409370[eax];
loc_409513:
	eax = 0x2FC; //mov
	edi = (int32_t)(intptr_t)(esp+0x8CC); //lea
	ecx = 2; //mov
	ebx = 8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	edx = 0x2E5; //mov
	push32(edi);
loc_409536:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40954E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409536;
loc_40954E:
	pop32(edi);
	eax = (int32_t)(intptr_t)(esp+0x8CC); //lea
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4095BE;
	eax = (int32_t)(intptr_t)(esp+0x8CC); //lea
	push32(eax);
	edx = to32i(dword_5134C0); //mov
	push32(edx);
	push32(aSS_tou);
	eax = (int32_t)(intptr_t)(esp+0x90C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4095B2;
	push32(0x2F9);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_4095BE;
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
loc_4095B2:
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_409D90(); esp += 4; //call
loc_4095BE:
	cmp(to32i(dword_512214), (int32_t)2);
	if (jz())
		goto loc_4098A7;
	cmp(to32i(esp+0x93C), (int32_t)0);
	if (jz())
		goto loc_409416;
loc_4095D9:
	eax = to32i(esp+0x93C); //mov
	add(esp, (int32_t)0x944);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4095ED:
	dl = to8i(byte_4D3910); //mov
	or_(dl, (int8_t)1);
	bx = to16i(ebp+0xA); //mov
	to8i(byte_4D3910) = dl; //mov
	test(bx, bx);
	if (jnz())
		goto loc_4093E2;
	ecx = 1; //mov
	to16i(ebp+0xA) = cx; //mov
	goto loc_4093E2;
loc_409617:
	or_(to8i(byte_4D394C), (int8_t)1);
	goto loc_409400;
loc_409623:
	esi = to32i(esp+0x940); //mov
	test(si, si);
	if (jnz())
		goto loc_409450;
	esp -= 4; _sub_423B90(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_40949C;
	goto loc_4094AA;
loc_409646:
	esp -= 4; _sub_4098D0(); esp += 4; //call
	goto loc_4095BE;
loc_409650:
	al = to8i(byte_512DAA); //mov
	edx = 1; //mov
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_40968F;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_40968F;
	push32(0x2ED);
	push32(edx);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	ebx = to32i(esp+0x93C); //mov
	edx = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40968F;
	xor_(esi, esi);
	esp -= 4; _sub_41A350(); esp += 4; //call
	to32i(dword_4D76B8) = esi; //mov
loc_40968F:
	test(edx, edx);
	if (jz())
		goto loc_4095BE;
	edx = esp; //mov
	eax = (int32_t)(intptr_t)a_tou; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4095BE;
	edx = (int32_t)(intptr_t)(eax+eax*8); //lea
	eax = esp; //mov
	add(eax, edx);
	push32(eax);
	edi = to32i(dword_5134C0); //mov
	push32(edi);
	push32(aSS_tou);
	eax = (int32_t)(intptr_t)(esp+0x90C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_409BF0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4095BE;
	to32i(esp+0x93C) = 0xFFFFFFFB; //mov
	goto loc_4095BE;
loc_4096FD:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)a_tou; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4095BE;
	push32(0x2EF);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_4095BE;
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(eax, edx);
	push32(eax);
	edx = to32i(dword_5134C0); //mov
	push32(edx);
	push32(aSS_tou);
	eax = (int32_t)(intptr_t)(esp+0x90C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = 0x2F0; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	goto loc_4095BE;
loc_409773:
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4097EB;
	eax = 0x2E9; //mov
	edx = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)a_rpy; //mov
loc_409794:
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	edx = eax; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4095BE;
	test(edx, edx);
	if (jnz())
		goto loc_4097F6;
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4097F6;
	xor_(cl, cl);
	to8i(esp+0x900) = cl; //mov
loc_4097C6:
	edx = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	xor_(ch, ch);
	to16i(word_4D21A4) = dx; //mov
	esp -= 4; _sub_409B30(); esp += 4; //call
	to8i(byte_512DA9) = ch; //mov
	goto loc_4095BE;
loc_4097EB:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)a_rpy; //mov
	xor_(ebx, ebx);
	goto loc_409794;
loc_4097F6:
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(eax, edx);
	push32(eax);
	eax = to32i(dword_5134C0); //mov
	push32(eax);
	push32(aSS_rpy);
	eax = (int32_t)(intptr_t)(esp+0x90C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	goto loc_4097C6;
loc_40981B:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)a_rpy; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4099A0(); esp += 4; //call
	xor_(edx, edx);
	esp -= 4; _sub_401090(); esp += 4; //call
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4095BE;
	push32(0x2F5);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_4095BE;
	eax = esp; //mov
	edx = (int32_t)(intptr_t)(edx+edx*8); //lea
	add(eax, edx);
	push32(eax);
	edi = to32i(dword_5134C0); //mov
	push32(edi);
	push32(aSS_rpy);
	eax = (int32_t)(intptr_t)(esp+0x90C); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(esp+0x900); //lea
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = 0x2F6; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	goto loc_4095BE;
loc_409891:
	edx = cx; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x93C) = eax; //mov
	goto loc_4095BE;
loc_4098A7:
	to32i(esp+0x93C) = 0xFFFFFFFD; //mov
	eax = to32i(esp+0x93C); //mov
	add(esp, (int32_t)0x944);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4098D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x10C);
	eax = 0x2FC; //mov
	edi = (int32_t)(intptr_t)(esp+0x100); //lea
	ecx = 2; //mov
	ebx = 8; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	edx = 0x2E6; //mov
	push32(edi);
loc_4098FE:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409916;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4098FE;
loc_409916:
	pop32(edi);
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_402460(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_409933;
loc_409927:
	add(esp, (int32_t)0x10C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409933:
	eax = (int32_t)(intptr_t)(esp+0x100); //lea
	push32(eax);
	edx = to32i(dword_5134C0); //mov
	push32(edx);
	push32(aSS_rpy);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = esp; //mov
	esp -= 4; _sub_488570(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_409985;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	push32(0x2F9);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_409927;
	eax = esp; //mov
	esp -= 4; _sub_4879AE(); esp += 4; //call
loc_409985:
	eax = esp; //mov
	esp -= 4; _sub_409B90(); esp += 4; //call
	add(esp, (int32_t)0x10C);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4099A0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	esi = eax; //mov
	ebp = edx; //mov
	to32i(esp+0x100) = ebx; //mov
	edi = edx; //mov
	ecx = (int32_t)(intptr_t)(edx+0x8CA); //lea
loc_4099BD:
	to8i(edi) = 0; //mov
	add(edi, (int32_t)9);
	cmp(edi, ecx);
	if (jnz())
		goto loc_4099BD;
	edx = to32i(esp+0x100); //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jz())
		goto loc_4099D9;
	ebx = 1; //mov
loc_4099D9:
	eax = esp; //mov
	esp -= 4; _sub_45AD10(); esp += 4; //call
	eax = to32i(dword_5134C0); //mov
	esp -= 4; _sub_488396(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_48846C(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_409AAA;
	dl = 0x2E; //mov
	esi = eax; //mov
loc_4099FF:
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_409A17;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409A15;
	inc(esi);
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_409A17;
	inc(esi);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4099FF;
loc_409A15:
	sub(esi, esi);
loc_409A17:
	to8i(esi) = 0; //mov
	esi = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(esi, ebx);
	edi = (int32_t)(intptr_t)(esi+ebp); //lea
	esi = ecx; //mov
	inc(ebx);
	push32(edi);
loc_409A2A:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409A42;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409A2A;
loc_409A42:
	pop32(edi);
	cmp(ebx, (int32_t)0xFA);
	if (jge())
		goto loc_409AAA;
	ecx = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(ecx, ebx);
	dl = 0x2E; //mov
	add(ecx, ebp);
loc_409A58:
	esp -= 4; _sub_4883C0(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_409AAA;
	esi = edi; //mov
loc_409A65:
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_409A7D;
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409A7B;
	inc(esi);
	al = to8i(esi); //mov
	cmp(al, dl);
	if (jz())
		goto loc_409A7D;
	inc(esi);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409A65;
loc_409A7B:
	sub(esi, esi);
loc_409A7D:
	to8i(esi) = 0; //mov
	esi = edi; //mov
	edi = ecx; //mov
	inc(ebx);
	push32(edi);
loc_409A86:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_409A9E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_409A86;
loc_409A9E:
	pop32(edi);
	add(ecx, (int32_t)9);
	cmp(ebx, (int32_t)0xFA);
	if (jl())
		goto loc_409A58;
loc_409AAA:
	eax = esp; //mov
	ecx = to32i(esp+0x100); //mov
	esp -= 4; _sub_488396(); esp += 4; //call
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jnz())
		goto loc_409AE4;
loc_409ABE:
	ecx = (int32_t)(intptr_t)(ebx*4+0); //lea
	edi = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(edi, ebx);
	add(edi, ebp);
loc_409AD0:
	cmp(to8i(edi), (int8_t)0);
	if (jz())
		goto loc_409AEB;
	inc(ebx);
	to32i(dword_4E5528+ecx) = edi; //mov
	add(ecx, (int32_t)4);
	add(edi, (int32_t)9);
	goto loc_409AD0;
loc_409AE4:
	ebx = 1; //mov
	goto loc_409ABE;
loc_409AEB:
	xor_(ebx, ebx);
	esi = to32i(esp+0x100); //mov
	to32i(dword_4E5528+ecx) = ebx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_409B0E;
	eax = (int32_t)(intptr_t)dword_4E5528; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_409B0E:
	to32i(dword_4E5528) = esi; //mov
	eax = (int32_t)(intptr_t)dword_4E5528; //mov
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_409B30()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to8i(eax), (int8_t)0);
	if (jnz())
		goto loc_409B46;
loc_409B38:
	to32i(dword_512214) = 2; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409B46:
	xor_(edx, edx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_409B7F;
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	esp -= 4; _sub_4879AE(); esp += 4; //call
	eax = ecx; //mov
	edx = ecx; //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_409B38;
loc_409B7F:
	eax = 0x2F4; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_409B90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	eax = (int32_t)(intptr_t)aReplay_rpy; //mov
	xor_(edx, edx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_409BD4;
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	esi = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	test(esi, esi);
	if (jz())
		goto loc_409BD4;
	eax = 0x2F2; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409BD4:
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_409BF0()
{
	push32(ebx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	xor_(edx, edx);
	esp -= 4; _sub_486F40(); esp += 4; //call
	xor_(ebx, ebx);
	ebp = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_409D23;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_409CD2;
loc_409C16:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = to32i(dword_4D76B8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_409D06;
	edi = ecx; //mov
	esi = ebp; //mov
	ecx = 0x2C8; //mov
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
	eax = to32i(dword_4D76B8); //mov
	eax = to16i(eax); //movsx
	cmp(eax, (int32_t)0x2C8);
	if (jnz())
		goto loc_409CDC;
	eax = 0x180; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	edx = to32i(dword_4D76B8); //mov
	eax = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	add(edx, (int32_t)4);
	xor_(ecx, ecx);
	esp -= 4; _sub_409D40(); esp += 4; //call
loc_409C72:
	edx = to32i(dword_4D76B8); //mov
	eax = cx; //movsx
	dx = to16i(edx+eax*2+0x2B0); //mov
	inc(ecx);
	to16i(esp+eax*2+0x1C) = dx; //mov
	cmp(cx, (int16_t)8);
	if (jl())
		goto loc_409C72;
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = 8; //mov
	esp -= 4; _sub_41B470(); esp += 4; //call
	xor_(ecx, ecx);
loc_409CA3:
	eax = cx; //movsx
	eax = to32i(esp+eax*2+0xA); //mov
	sar(eax, (int32_t)0x10);
	byte_512AD0[eax] = cl; //mov
	inc(ecx);
	cmp(cx, (int16_t)8);
	if (jl())
		goto loc_409CA3;
	ebx = 1; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edx);
	pop32(ebx);
	return;
loc_409CD2:
	esp -= 4; _sub_41A370(); esp += 4; //call
	goto loc_409C16;
loc_409CDC:
	esp -= 4; _sub_41A350(); esp += 4; //call
	xor_(esi, esi);
	eax = 0x2F4; //mov
	to32i(dword_4D76B8) = esi; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edx);
	pop32(ebx);
	return;
loc_409D06:
	eax = 0x2F4; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edx);
	pop32(ebx);
	return;
loc_409D23:
	eax = 0x2F4; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	eax = ebx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_409D40()
{
	push32(ebx);
	push32(ecx);
	bl = to8i(edx+9); //mov
	to8i(eax+0xA) = 1; //mov
	to8i(eax+9) = bl; //mov
	bl = to8i(edx+0xB); //mov
	to8i(eax+0xB) = bl; //mov
	bl = to8i(edx+0x10); //mov
	to8i(eax+0x10) = bl; //mov
	bl = to8i(edx+0x5A); //mov
	to8i(eax+0x5A) = bl; //mov
	bl = to8i(edx+0x1F); //mov
	to8i(eax+0x1F) = bl; //mov
	bl = to8i(edx+0x20); //mov
	xor_(ecx, ecx);
	to8i(eax+0x20) = bl; //mov
	cl = to8i(edx+0x1F); //mov
	add(ecx, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	add(edx, eax);
	al = to8i(ecx+0x21); //mov
	to8i(edx+0x21) = al; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_409D90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	edx = to32i(dword_4D76B8); //mov
	test(edx, edx);
	if (jnz())
		goto loc_409DA9;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409DA9:
	ecx = 0x2AC; //mov
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	edi = (int32_t)(intptr_t)(edx+4); //lea
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
	edx = to32i(dword_4D76B8); //mov
	ebx = 0x2C8; //mov
	eax = ebp; //mov
	to16i(edx) = 0x2C8; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_409DF2;
	eax = 0x2F1; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_409DF2:
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40A0B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	edx = eax; //mov
	ecx = 6; //mov
	edi = esp; //mov
	xor_(ebx, ebx);
	esi = (int32_t)(intptr_t)off_40A098; //mov
	to32i(esp+0x18) = ebx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_4762E0(); esp += 4; //call
	ecx = 0x40CC; //mov
	eax = edx; //mov
	to32i(dword_4D2310) = ebx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	ebx = 0x64; //mov
	edx = 0x3000; //mov
	eax = to32i(dword_4D4D24); //mov
	to32i(esp+0x1C) = ecx; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = 0xFF000000; //mov
	ecx = 0x32; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = (int32_t)(intptr_t)aKnwd; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x1E; //mov
	ebx = 0x12C; //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aChy2; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4EB584) = eax; //mov
	eax = to32i(dword_4D4D24); //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_428250(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = 0x400; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = (int32_t)(intptr_t)aBac1; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esp+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_4D4D24); //mov
	to32i(dword_4EB588) = edx; //mov
	eax = to32i(eax+0x20); //mov
	edx = 1; //mov
	esi = 0xFFFFFFFF; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	eax = 0x13; //mov
	edx = to32i(dword_4D5A28); //mov
	to32i(esp+0x20) = esi; //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	xor_(edx, edx);
loc_40A1BF:
	esp -= 4; _sub_405960(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40A1D1;
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A1DA;
loc_40A1D1:
	eax = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	goto loc_40A1BF;
loc_40A1DA:
	to32i(esp+0x2C) = 0x1C2; //mov
loc_40A1E2:
	eax = to32i(esp+0x1C); //mov
	ebx = to32i(esp+0x2C); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jge())
		goto loc_40A42B;
	eax = 0x50; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A209;
	edx = (int32_t)(intptr_t)(ebx-0xA); //lea
	to32i(esp+0x2C) = edx; //mov
loc_40A209:
	eax = 0x48; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40A3BD;
loc_40A21B:
	eax = 5; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	push32(2);
	xor_(ebx, ebx);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
	push32(0x1C2);
	eax = to32i(dword_4DAB7C); //mov
	push32(eax);
	push32(0x64);
	edi = 1; //mov
	esi = to32i(esp+0x38); //mov
	push32(0);
	to32i(dword_4D20A0) = edi; //mov
	edi = 0x35E; //mov
	esp -= 4; _sub_497714(); esp += 4; //call
loc_40A271:
	eax = to32i(dword_4DAB7C); //mov
	sar(eax, (int32_t)1);
	to32i(esp+0x24) = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	cmp(eax, (int32_t)4);
	if (jnb())
		goto loc_40A3E1;
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_40A29A;
	test(ebp, ebp);
	if (jz())
		goto loc_40A298;
	sub(esi, (int32_t)0x1A);
loc_40A298:
	xor_(ebp, ebp);
loc_40A29A:
	cmp(esi, (int32_t)0x4A);
	if (jle())
		goto loc_40A310;
	cmp(esi, (int32_t)0x1DC);
	if (jge())
		goto loc_40A310;
	eax = edi; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_40A2E3;
	eax = edi; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = edi; //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = to32i(esp+0x2C); //mov
	ecx = 0x12; //mov
	add(eax, (int32_t)0xA);
	ebx = si; //movsx
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)asc_4C869C; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40A2E3:
	eax = edi; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	eax = ax; //cwde
	edx = to32i(esp+0x22); //mov
	push32(eax);
	eax = edi; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	ebx = si; //movsx
	push32(eax);
	eax = edi; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40A310:
	cmp(edi, (int32_t)0x5DA);
	if (jnz())
		goto loc_40A331;
	cmp(esi, (int32_t)0x6E);
	if (jg())
		goto loc_40A331;
	eax = to32i(esp+0x1C); //mov
	edx = eax; //mov
	to32i(esp+0x2C) = eax; //mov
	neg(edx);
	to32i(esp+0x28) = esi; //mov
	to32i(esp+0x2C) = edx; //mov
loc_40A331:
	cmp(edi, (int32_t)0x5D0);
	if (jnz())
		goto loc_40A358;
	cmp(esi, (int32_t)0xFFFFFF9C);
	if (jle())
		goto loc_40A358;
	cmp(esi, (int32_t)0x1C2);
	if (jge())
		goto loc_40A358;
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	ebx = esi; //mov
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_427B30(); esp += 4; //call
loc_40A358:
	inc(edi);
	add(esi, (int32_t)0x1A);
	cmp(edi, (int32_t)0x5DC);
	if (jle())
		goto loc_40A271;
	ecx = to32i(dword_4DAB80); //mov
	push32(ecx);
	ebx = to32i(dword_4DAB7C); //mov
	push32(ebx);
	push32(0);
	push32(0);
	esp -= 4; _sub_497714(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_4833F3(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	cmp(eax, (int32_t)0xD);
	if (jnz())
		goto loc_40A410;
loc_40A39B:
	eax = to32i(esp+0x1C); //mov
	esi = 1; //mov
	edi = eax; //mov
	to32i(esp+0x2C) = eax; //mov
	neg(edi);
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0x2C) = edi; //mov
	dec(to32i(esp+0x2C));
	goto loc_40A1E2;
loc_40A3BD:
	ecx = to32i(esp+0x2C); //mov
	add(ecx, (int32_t)7);
	to32i(esp+0x2C) = ecx; //mov
	cmp(ecx, (int32_t)0x1C2);
	if (jle())
		goto loc_40A21B;
	to32i(esp+0x2C) = 0x1C2; //mov
	goto loc_40A21B;
loc_40A3E1:
	edx = to32i(esp+0x24); //mov
	sub(edx, (int32_t)0x14);
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_40A3FE;
	ebp = 1; //mov
	add(esi, (int32_t)0xD);
	to32i(esp+0x24) = edx; //mov
	goto loc_40A29A;
loc_40A3FE:
	cmp(eax, (int32_t)5);
	if (jnz())
		goto loc_40A29A;
	to32i(esp+0x24) = edx; //mov
	goto loc_40A29A;
loc_40A410:
	cmp(eax, (int32_t)0x1B);
	if (jz())
		goto loc_40A39B;
	esp -= 4; _sub_424240(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40A39B;
	dec(to32i(esp+0x2C));
	goto loc_40A1E2;
loc_40A42B:
	xor_(esi, esi);
	edi = to32i(esp+0x18); //mov
	to32i(dword_4D20A0) = esi; //mov
	test(edi, edi);
	if (jz())
		goto loc_40A469;
loc_40A43B:
	esp -= 4; _sub_4762E0(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	esi = 1; //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	eax = to32i(esp+0x20); //mov
	to32i(dword_4D2310) = esi; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40A469:
	ebp = 0x7F; //mov
	eax = 6; //mov
	ebx = to32i(dword_4D5A30); //mov
	edx = ebp; //mov
	to32i(dword_4D5A30) = ebp; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = 0x64; //mov
	esp -= 4; _sub_483410(); esp += 4; //call
	edx = ebp; //mov
	eax = 4; //mov
	to32i(esp+0x24) = esi; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(dword_4D5A30) = ebx; //mov
	ebp = 0x12; //mov
loc_40A4AB:
	eax = 5; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	push32(2);
	esi = to32i(esp+0x2C); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(edx, edx);
	edi = 0x5DA; //mov
	esp -= 4; _sub_427B30(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	edx = 1; //mov
	add(eax, (int32_t)0x140);
	to32i(dword_4D20A0) = edx; //mov
	to16i(esp+0x30) = ax; //mov
loc_40A4FA:
	eax = edi; //mov
	edx = to32i(esp+0x2E); //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	eax = ax; //cwde
	ebx = si; //movsx
	push32(eax);
	eax = edi; //mov
	ecx = ebp; //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	sar(edx, (int32_t)0x10);
	push32(eax);
	eax = edi; //mov
	add(esi, (int32_t)0x1A);
	esp -= 4; _sub_41B710(); esp += 4; //call
	inc(edi);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(edi, (int32_t)0x5DC);
	if (jle())
		goto loc_40A4FA;
	esp -= 4; _sub_4976B8(); esp += 4; //call
	esp -= 4; _sub_4833F3(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x24); //mov
	add(eax, (int32_t)2);
	add(ecx, eax);
	to32i(esp+0x24) = ecx; //mov
	cmp(ecx, (int32_t)0x258);
	if (jl())
		goto loc_40A4AB;
	goto loc_40A43B;
}
Fn(void) Game::_sub_40A570()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x70);
	esi = eax; //mov
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512F3F); //mov
	to32i(esp+4) = edx; //mov
	to32i(esp+0x2C) = eax; //mov
	eax = 0xFFFFFFFF; //mov
	to32i(esp+0x58) = edx; //mov
	esp -= 4; _sub_48883C(); esp += 4; //call
	test(al, (int8_t)0xC);
	if (jnz())
		goto loc_40A5B5;
	ah = to8i(byte_4D32E4); //mov
	dl = 1; //mov
	or_(ah, (int8_t)1);
	to8i(byte_512F41) = dl; //mov
	to8i(byte_4D32E4) = ah; //mov
loc_40A5B5:
	eax = esi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DFF); //mov
	to32i(esp+0x20) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_512F41); //mov
	edx = to32i(dword_4D5A30); //mov
	to32i(esp) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	ecx = 0x7F; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DFE) = al; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFE); //mov
	edx = to32i(dword_4D5A2C); //mov
	to32i(esp+0x18) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DFD) = al; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFD); //mov
	edx = to32i(dword_4D5A28); //mov
	to32i(esp+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	shl(eax, (int32_t)2);
	sub(eax, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DFC) = al; //mov
	xor_(eax, eax);
	al = to8i(byte_512DFC); //mov
	to32i(esp+0x1C) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_512F40); //mov
	dx = to16i(esi+0xA); //mov
	to32i(esp+0x5C) = eax; //mov
	test(dx, dx);
	if (jle())
		goto loc_40AEC6;
	cmp(dx, (int16_t)3);
	if (jge())
		goto loc_40AEC6;
	eax = to32i(dword_4D5A2C); //mov
loc_40A693:
	esp -= 4; _sub_489800(); esp += 4; //call
	edx = (int32_t)(intptr_t)aLaul; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	sub(eax, (int32_t)0x17);
	edx = (int32_t)(intptr_t)aRaul; //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	sub(eax, (int32_t)0x17);
	ecx = to32i(edx+0xC); //mov
	to32i(esp+0x54) = eax; //mov
	esp -= 4; _sub_486F28(); esp += 4; //call
	eax = to32i(edx+4); //mov
	xor_(ebx, ebx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x34) = ebx; //mov
	sub(eax, (int32_t)2);
	shl(ecx, (int32_t)4);
	to32i(esp+0x4C) = eax; //mov
	eax = 1; //mov
	sar(ecx, (int32_t)0x14);
	to32i(esp+0x6C) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x3C); //lea
	ebp = to32i(edx+2); //mov
	to32i(esp+0x10) = eax; //mov
	eax = (int32_t)(intptr_t)(ecx+0x21); //lea
	sar(ebp, (int32_t)0x10);
	add(ecx, (int32_t)6);
	to32i(esp+8) = eax; //mov
	to32i(esp+0xC) = ecx; //mov
loc_40A71D:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jz())
		goto loc_40AED0;
	bh = to8i(byte_4D32C8); //mov
	xor_(cl, cl);
	or_(bh, (int8_t)1);
	to8i(byte_512F40) = cl; //mov
	to8i(byte_4D32C8) = bh; //mov
loc_40A748:
	xor_(eax, eax);
	edx = to32i(esp+0x5C); //mov
	al = to8i(byte_512F40); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_40A790;
	test(al, al);
	if (jbe())
		goto loc_40AEDC;
	cmp(al, (int8_t)0x11);
	if (jnb())
		goto loc_40AEDC;
	eax = 2; //mov
	esp -= 4; _sub_4766D0(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_476280(); esp += 4; //call
	edx = to32i(dword_4D5A28); //mov
	eax = ecx; //mov
	esp -= 4; _sub_476350(); esp += 4; //call
loc_40A785:
	xor_(eax, eax);
	al = to8i(byte_512F40); //mov
	to32i(esp+0x5C) = eax; //mov
loc_40A790:
	edx = to32i(esp+0x58); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A7B4;
	to32i(esp+0x6C) = 1; //mov
loc_40A7B4:
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x28) = edi; //mov
	to32i(esp+0x24) = eax; //mov
	ah = to8i(byte_512ECC); //mov
	xor_(edi, edi);
	test(ah, ah);
	if (jnz())
		goto loc_40A812;
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x50); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A7F0;
	edi = 1; //mov
	to16i(esi+0xA) = 0; //mov
loc_40A7F0:
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0x50); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A812;
	edi = 1; //mov
	to16i(esi+0xA) = 1; //mov
loc_40A812:
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0x50); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A834;
	edi = 1; //mov
	to16i(esi+0xA) = 2; //mov
loc_40A834:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40A881;
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x54); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A85F;
	edi = 2; //mov
	to16i(esi+0xA) = 0; //mov
loc_40A85F:
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0x54); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40A881;
	edi = 2; //mov
	to16i(esi+0xA) = 1; //mov
loc_40A881:
	ecx = to32i(esp+0x4C); //mov
	edx = to32i(esp+0x10); //mov
	eax = to32i(esp+0x54); //mov
	ebx = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40AF0B;
	edi = 2; //mov
	to16i(esi+0xA) = 2; //mov
loc_40A8A7:
	eax = to32i(esi+8); //mov
	ecx = to32i(esp+0x24); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, ecx);
	if (jz())
		goto loc_40AF24;
loc_40A8B9:
	edx = 0x2D; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_40A8C8:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = 0x8C; //mov
	ecx = 0x100; //mov
	to32i(esp+0x38) = eax; //mov
	to32i(esp+0x44) = ecx; //mov
	to32i(esp+0x30) = ecx; //mov
	to32i(esp+0x40) = ecx; //mov
	cx = to16i(esi+0xA); //mov
	to32i(esp+0x3C) = eax; //mov
	test(cx, cx);
	if (jnz())
		goto loc_40A933;
	eax = 0x100; //mov
	to32i(esp+0x40) = eax; //mov
loc_40A933:
	cmp(to16i(esi+0xA), (int16_t)1);
	if (jnz())
		goto loc_40A947;
	ebx = 0x100; //mov
	to32i(esp+0x30) = ebx; //mov
	to32i(esp+0x3C) = ebx; //mov
loc_40A947:
	cmp(to16i(esi+0xA), (int16_t)2);
	if (jnz())
		goto loc_40A95B;
	ecx = 0x100; //mov
	to32i(esp+0x44) = ecx; //mov
	to32i(esp+0x38) = ecx; //mov
loc_40A95B:
	add(ah, (int8_t)0x20);
	ecx = 6; //mov
	eax = ax; //cwde
	ebx = 0xFFFFFFE9; //mov
	to32i(esp+0x48) = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aAudi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x3C); //mov
	add(ah, (int8_t)0x20);
	ecx = 0x21; //mov
	eax = ax; //cwde
	ebx = 0xFFFFFFE9; //mov
	to32i(esp+0x64) = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aAudi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x38); //mov
	add(ah, (int8_t)0x20);
	ecx = 0x3C; //mov
	eax = ax; //cwde
	ebx = 0xFFFFFFE9; //mov
	to32i(esp+0x60) = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)aAudi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = 0x188; //mov
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	esp -= 4; _sub_482E00(); esp += 4; //call
	ecx = 6; //mov
	xor_(ebx, ebx);
	edx = to32i(esp+0x48); //mov
	bl = to8i(byte_512DFC); //mov
	eax = (int32_t)(intptr_t)aAbar; //mov
	sub(ebx, (int32_t)0xA3);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x21; //mov
	xor_(ebx, ebx);
	edx = to32i(esp+0x64); //mov
	bl = to8i(byte_512DFD); //mov
	eax = (int32_t)(intptr_t)aAbar; //mov
	sub(ebx, (int32_t)0xA3);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x3C; //mov
	xor_(ebx, ebx);
	edx = to32i(esp+0x60); //mov
	bl = to8i(byte_512DFE); //mov
	eax = (int32_t)(intptr_t)aAbar; //mov
	sub(ebx, (int32_t)0xA3);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_482E00(); esp += 4; //call
	eax = to32i(esp+0x40); //mov
	ecx = 6; //mov
	add(ah, (int8_t)0x20);
	ebx = 0xFFFFFFE9; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)aLaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 6; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x48); //mov
	eax = (int32_t)(intptr_t)aRaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x30); //mov
	ecx = 0x21; //mov
	add(ah, (int8_t)0x20);
	ebx = 0xFFFFFFE9; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)aLaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x64); //mov
	eax = (int32_t)(intptr_t)aRaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x44); //mov
	ecx = 0x3C; //mov
	add(ah, (int8_t)0x20);
	ebx = 0xFFFFFFE9; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)aLaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x3C; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x60); //mov
	eax = (int32_t)(intptr_t)aRaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_40AF75;
	bx = to16i(esi+0xA); //mov
	test(bx, bx);
	if (jnz())
		goto loc_40AF3F;
	ecx = 6; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x48); //mov
loc_40AB13:
	eax = (int32_t)(intptr_t)aLaul; //mov
loc_40AB18:
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40AB1D:
	eax = esi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_40AB2E:
	esp -= 4; _sub_423B90(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	to32i(esp+0x6C) = eax; //mov
	esp -= 4; _sub_405960(); esp += 4; //call
	dx = to16i(esi+0xA); //mov
	to16i(esp+0x68) = ax; //mov
	test(dx, dx);
	if (jle())
		goto loc_40AFDF;
	cmp(dx, (int16_t)3);
	if (jge())
		goto loc_40AFDF;
	xor_(edx, edx);
	dl = to8i(byte_512DFD); //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4D5A2C) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_40AB8A;
	to32i(dword_4D5A2C) = 0x7F; //mov
loc_40AB8A:
	eax = 0x32; //mov
	edx = to32i(dword_4D5A2C); //mov
loc_40AB95:
	esp -= 4; _sub_4864A0(); esp += 4; //call
	cx = to16i(esi+0xA); //mov
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_40B01A;
loc_40ABA8:
	cmp(to8i(byte_4D24D8), (int8_t)0);
	if (jnz())
		goto loc_40B024;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_40B05B;
	push32(0x40);
	ecx = 0x7F; //mov
	edx = 7; //mov
	eax = to32i(dword_50B410); //mov
	xor_(ebx, ebx);
loc_40ABD5:
	esp -= 4; _sub_442280(); esp += 4; //call
	to32i(dword_4E5910) = eax; //mov
	to8i(byte_4D24D8) = 1; //mov
loc_40ABE6:
	xor_(edx, edx);
	dl = to8i(byte_512DFE); //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4D5A30) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_40AC11;
	to32i(dword_4D5A30) = 0x7F; //mov
loc_40AC11:
	ecx = to32i(esp+0x68); //mov
	test(cx, cx);
	if (jz())
		goto loc_40AD4F;
	eax = to32i(esp+0x58); //mov
	cmp(eax, to32i(esp+4));
	if (jle())
		goto loc_40AD4F;
	add(eax, (int32_t)0xF);
	to32i(esp+4) = eax; //mov
	eax = 1; //mov
	dx = to16i(esi+0xA); //mov
	to32i(esp+0x6C) = eax; //mov
	cmp(dx, (int16_t)3);
	if (jge())
		goto loc_40B0B6;
	cmp(cx, (int16_t)0xD);
	if (jnz())
		goto loc_40B0A0;
loc_40AC54:
	edx = to32i(esp+0x68); //mov
	cmp(dx, (int16_t)0x4B00);
	if (jnz())
		goto loc_40B0CD;
loc_40AC63:
	ax = to16i(esi+0xA); //mov
	cmp(ax, (int16_t)1);
	if (jnb())
		goto loc_40B11C;
	test(ax, ax);
	if (jnz())
		goto loc_40ACA5;
	xor_(eax, eax);
	al = to8i(byte_512DFC); //mov
	sub(eax, (int32_t)8);
	test(eax, eax);
	if (jle())
		goto loc_40B164;
loc_40AC88:
	xor_(edx, edx);
	dl = al; //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	to8i(byte_512DFC) = al; //mov
loc_40AC99:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esp -= 4; _sub_489800(); esp += 4; //call
loc_40ACA5:
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jz())
		goto loc_40ACCA;
	cmp(to32i(esp+0x2C), (int32_t)0);
	if (jnz())
		goto loc_40ACCA;
	esp -= 4; _sub_476BB0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40B201;
	to32i(esp+0x2C) = 1; //mov
loc_40ACCA:
	xor_(edx, edx);
	dl = to8i(byte_512DFD); //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(edx, edx);
	dl = to8i(byte_512DFC); //mov
	imul32(edx, 0x7F);
	to32i(dword_4D5A2C) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(edx, edx);
	dl = to8i(byte_512DFE); //mov
	imul32(edx, 0x7F);
	to32i(dword_4D5A28) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = to32i(dword_4D5A2C); //mov
	to32i(dword_4D5A30) = eax; //mov
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_40AD29;
	to32i(dword_4D5A2C) = 0x7F; //mov
loc_40AD29:
	cmp(to32i(dword_4D5A28), (int32_t)0x7F);
	if (jle())
		goto loc_40AD3C;
	to32i(dword_4D5A28) = 0x7F; //mov
loc_40AD3C:
	cmp(to32i(dword_4D5A30), (int32_t)0x7F);
	if (jle())
		goto loc_40AD4F;
	to32i(dword_4D5A30) = 0x7F; //mov
loc_40AD4F:
	eax = to32i(esp+0x34); //mov
	test(eax, eax);
	if (jz())
		goto loc_40A71D;
	cmp(eax, (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_40AD7B;
	al = to8i(esp+0x18); //mov
	to8i(byte_512DFE) = al; //mov
	al = to8i(esp+0x14); //mov
	to8i(byte_512DFD) = al; //mov
	al = to8i(esp+0x1C); //mov
	to8i(byte_512DFC) = al; //mov
loc_40AD7B:
	xor_(edx, edx);
	dl = to8i(byte_512DFD); //mov
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x8C; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(edx, edx);
	dl = to8i(byte_512DFC); //mov
	to32i(dword_4D5A2C) = eax; //mov
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(edx, edx);
	dl = to8i(byte_512DFE); //mov
	to32i(dword_4D5A28) = eax; //mov
	eax = edx; //mov
	shl(eax, (int32_t)7);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = to32i(dword_4D5A2C); //mov
	to32i(dword_4D5A30) = eax; //mov
	to32i(dword_4D5A34) = eax; //mov
	cmp(ecx, (int32_t)0x7F);
	if (jle())
		goto loc_40ADEB;
	to32i(dword_4D5A2C) = 0x7F; //mov
loc_40ADEB:
	cmp(to32i(dword_4D5A28), (int32_t)0x7F);
	if (jle())
		goto loc_40ADFE;
	to32i(dword_4D5A28) = 0x7F; //mov
loc_40ADFE:
	cmp(to32i(dword_4D5A30), (int32_t)0x7F);
	if (jle())
		goto loc_40AE11;
	to32i(dword_4D5A30) = 0x7F; //mov
loc_40AE11:
	cmp(to8i(byte_4D24D8), (int8_t)0);
	if (jz())
		goto loc_40AE2C;
	eax = to32i(dword_4E5910); //mov
	xor_(dh, dh);
	esp -= 4; _sub_489840(); esp += 4; //call
	to8i(byte_4D24D8) = dh; //mov
loc_40AE2C:
	eax = 0x32; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_4864A0(); esp += 4; //call
	bl = to8i(byte_512DFF); //mov
	cmp(bl, (int8_t)1);
	if (jnz())
		goto loc_40B218;
	xor_(ebx, ebx);
	to32i(dword_4D96B0) = ebx; //mov
	to32i(dword_4D5A44) = ebx; //mov
loc_40AE59:
	cmp(to8i(byte_512F3E), (int8_t)0);
	if (jz())
		goto loc_40B238;
	xor_(eax, eax);
loc_40AE68:
	esp -= 4; _sub_488898(); esp += 4; //call
	eax = to32i(dword_4D5A28); //mov
	edi = to32i(esp+0x34); //mov
	esp -= 4; _sub_489800(); esp += 4; //call
	cmp(edi, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_40AEA5;
	xor_(eax, eax);
	ebp = to32i(esp+0x20); //mov
	al = to8i(byte_512DFF); //mov
	cmp(eax, ebp);
	if (jnz())
		goto loc_40B242;
	xor_(eax, ebp);
	edx = to32i(esp); //mov
	al = to8i(byte_512F41); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_40B242;
loc_40AEA5:
	ch = to8i(byte_512F40); //mov
	test(ch, ch);
	if (jbe())
		goto loc_40AEB8;
	cmp(ch, (int8_t)0xF);
	if (jb())
		goto loc_40B292;
loc_40AEB8:
	eax = to32i(esp+0x34); //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40AEC6:
	eax = to32i(dword_4D5A28); //mov
	goto loc_40A693;
loc_40AED0:
	and_(to8i(byte_4D32C8), (int8_t)0xFE);
	goto loc_40A748;
loc_40AEDC:
	ecx = to32i(esp+0x5C); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_40A785;
	cmp(ecx, (int32_t)0x11);
	if (jge())
		goto loc_40A785;
	esp -= 4; _sub_476280(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	goto loc_40A785;
loc_40AF0B:
	test(edi, edi);
	if (jnz())
		goto loc_40A8A7;
	cmp(to16i(esp+0x6C), (int16_t)0);
	if (jnz())
		goto loc_40A8C8;
	goto loc_40AB2E;
loc_40AF24:
	cmp(edi, to32i(esp+0x28));
	if (jnz())
		goto loc_40A8B9;
	cmp(to16i(esp+0x6C), (int16_t)0);
	if (jnz())
		goto loc_40A8C8;
	goto loc_40AB2E;
loc_40AF3F:
	cmp(bx, (int16_t)1);
	if (jz())
		goto loc_40AF62;
	cmp(bx, (int16_t)2);
	if (jnz())
		goto loc_40AB1D;
	ecx = 0x3C; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x60); //mov
	goto loc_40AB13;
loc_40AF62:
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x64); //mov
	goto loc_40AB13;
loc_40AF75:
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_40AB1D;
	cx = to16i(esi+0xA); //mov
	test(cx, cx);
	if (jz())
		goto loc_40AFAF;
	cmp(cx, (int16_t)1);
	if (jz())
		goto loc_40AFC7;
	cmp(cx, (int16_t)2);
	if (jnz())
		goto loc_40AB1D;
	ecx = 0x3C; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x60); //mov
	eax = (int32_t)(intptr_t)aRaul; //mov
	goto loc_40AB18;
loc_40AFAF:
	ecx = 6; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x48); //mov
	eax = (int32_t)(intptr_t)aRaul; //mov
	goto loc_40AB18;
loc_40AFC7:
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	edx = to32i(esp+0x64); //mov
	eax = (int32_t)(intptr_t)aRaul; //mov
	goto loc_40AB18;
loc_40AFDF:
	xor_(edx, edx);
	dl = to8i(byte_512DFC); //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(dword_4D5A28) = eax; //mov
	cmp(eax, (int32_t)0x7F);
	if (jle())
		goto loc_40B00A;
	to32i(dword_4D5A28) = 0x7F; //mov
loc_40B00A:
	eax = 0x32; //mov
	edx = to32i(dword_4D5A28); //mov
	goto loc_40AB95;
loc_40B01A:
	cmp(cx, (int16_t)2);
	if (jz())
		goto loc_40ABA8;
loc_40B024:
	dx = to16i(esi+0xA); //mov
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_40B076;
loc_40B02E:
	cmp(to8i(byte_4D24D8), (int8_t)0);
	if (jnz())
		goto loc_40B07E;
loc_40B037:
	cmp(to8i(byte_4D24D8), (int8_t)0);
	if (jz())
		goto loc_40ABE6;
	eax = to32i(dword_4E5910); //mov
	xor_(cl, cl);
	esp -= 4; _sub_489840(); esp += 4; //call
	to8i(byte_4D24D8) = cl; //mov
	goto loc_40ABE6;
loc_40B05B:
	push32(0x40);
	ecx = 0x7F; //mov
	ebx = 0x40; //mov
	edx = 7; //mov
	eax = to32i(dword_50B410); //mov
	goto loc_40ABD5;
loc_40B076:
	cmp(dx, (int16_t)2);
	if (jz())
		goto loc_40B02E;
	goto loc_40B037;
loc_40B07E:
	eax = to32i(dword_4D5A30); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = to32i(dword_4E5910); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	goto loc_40ABE6;
loc_40B0A0:
	cmp(cx, (int16_t)0x4B00);
	if (jz())
		goto loc_40AC54;
	cmp(cx, (int16_t)0x4D00);
	if (jz())
		goto loc_40AC54;
loc_40B0B6:
	edx = to32i(esp+0x66); //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x34) = eax; //mov
	goto loc_40ACA5;
loc_40B0CD:
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_40B0DC;
	cmp(edi, (int32_t)1);
	if (jz())
		goto loc_40AC63;
loc_40B0DC:
	ecx = to32i(esp+0x68); //mov
	cmp(cx, (int16_t)0x4D00);
	if (jnz())
		goto loc_40B17B;
loc_40B0EB:
	ax = to16i(esi+0xA); //mov
	cmp(ax, (int16_t)1);
	if (jnb())
		goto loc_40B193;
	test(ax, ax);
	if (jnz())
		goto loc_40ACA5;
	xor_(eax, eax);
	al = to8i(byte_512DFC); //mov
	add(eax, (int32_t)8);
	cmp(eax, (int32_t)0x8B);
	if (jge())
		goto loc_40B1E1;
	goto loc_40AC88;
loc_40B11C:
	if (ja())
		goto loc_40B142;
	xor_(eax, eax);
	al = to8i(byte_512DFD); //mov
	sub(eax, (int32_t)8);
	test(eax, eax);
	if (jle())
		goto loc_40B16B;
loc_40B12C:
	xor_(edx, edx);
	dl = al; //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	to8i(byte_512DFD) = al; //mov
	goto loc_40AC99;
loc_40B142:
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_40ACA5;
	xor_(eax, eax);
	al = to8i(byte_512DFE); //mov
	sub(eax, (int32_t)8);
	test(eax, eax);
	if (jle())
		goto loc_40B16F;
	to8i(byte_512DFE) = al; //mov
	goto loc_40ACA5;
loc_40B164:
	xor_(eax, eax);
	goto loc_40AC88;
loc_40B16B:
	xor_(eax, eax);
	goto loc_40B12C;
loc_40B16F:
	xor_(eax, eax);
	to8i(byte_512DFE) = al; //mov
	goto loc_40ACA5;
loc_40B17B:
	cmp(cx, (int16_t)0xD);
	if (jnz())
		goto loc_40ACA5;
	cmp(edi, (int32_t)2);
	if (jz())
		goto loc_40B0EB;
	goto loc_40ACA5;
loc_40B193:
	if (ja())
		goto loc_40B1BC;
	xor_(eax, eax);
	al = to8i(byte_512DFD); //mov
	add(eax, (int32_t)8);
	cmp(eax, (int32_t)0x8B);
	if (jge())
		goto loc_40B1EB;
loc_40B1A6:
	xor_(edx, edx);
	dl = al; //mov
	imul32(edx, 0x7F);
	ecx = 0x8C; //mov
	to8i(byte_512DFD) = al; //mov
	goto loc_40AC99;
loc_40B1BC:
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_40ACA5;
	xor_(eax, eax);
	al = to8i(byte_512DFE); //mov
	add(eax, (int32_t)8);
	cmp(eax, (int32_t)0x8B);
	if (jge())
		goto loc_40B1F2;
	to8i(byte_512DFE) = al; //mov
	goto loc_40ACA5;
loc_40B1E1:
	eax = 0x8B; //mov
	goto loc_40AC88;
loc_40B1EB:
	eax = 0x8B; //mov
	goto loc_40B1A6;
loc_40B1F2:
	eax = 0x8B; //mov
	to8i(byte_512DFE) = al; //mov
	goto loc_40ACA5;
loc_40B201:
	eax = 0x30C; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(ah, ah);
	to8i(byte_512F3F) = ah; //mov
	goto loc_40ACCA;
loc_40B218:
	test(bl, bl);
	if (jnz())
		goto loc_40AE59;
	xor_(ecx, ecx);
	edx = 1; //mov
	to32i(dword_4D96B0) = ecx; //mov
	to32i(dword_4D5A44) = edx; //mov
	goto loc_40AE59;
loc_40B238:
	eax = 0xFFFFFFCE; //mov
	goto loc_40AE68;
loc_40B242:
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_4761E0(); esp += 4; //call
	eax = 0x306; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	esp -= 4; _sub_476CA0(); esp += 4; //call
	xor_(edx, edx);
	xor_(eax, eax);
	dl = to8i(byte_512DFF); //mov
	al = to8i(byte_512F41); //mov
	esp -= 4; _sub_476CC0(); esp += 4; //call
	esp -= 4; _sub_445A60(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	eax = to32i(esp+0x34); //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40B292:
	esp -= 4; _sub_4762E0(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	eax = to32i(esp+0x34); //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40B2C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	esi = eax; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	cl = to8i(dword_512ED4); //mov
	to32i(esp+0x24) = edx; //mov
	to32i(esp+0xC) = edx; //mov
	to32i(esp+0x2C) = edx; //mov
	esp -= 4; _sub_479240(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x18) = edx; //mov
	al = to8i(dword_512ED4); //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	esp -= 4; _sub_4792C0(); esp += 4; //call
	add(edx, ecx);
	esp -= 4; _sub_479340(); esp += 4; //call
	shl(edx, (int32_t)2);
	eax = esi; //mov
	sub(edx, ecx);
	esp -= 4; _sub_410E80(); esp += 4; //call
	shl(edx, (int32_t)2);
	ecx = 0x64; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = (int32_t)(intptr_t)aLaul; //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	eax = to32i(eax+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	sub(eax, (int32_t)0x17);
	edx = (int32_t)(intptr_t)aRaul; //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = to32i(eax+0xC); //mov
	edi = 1; //mov
	shl(edx, (int32_t)0x14);
	ecx = to32i(eax+2); //mov
	sar(edx, (int32_t)0x14);
	sar(ecx, (int32_t)0x10);
	sub(edx, (int32_t)0x17);
	to32i(esp+8) = ecx; //mov
	to32i(esp) = edx; //mov
	edx = to32i(eax+0xC); //mov
	eax = to32i(eax+4); //mov
	shl(edx, (int32_t)4);
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x14);
	to32i(esp+0x1C) = eax; //mov
	add(edx, (int32_t)0x21);
	esp -= 4; _sub_486F28(); esp += 4; //call
	to32i(esp+0x20) = edx; //mov
loc_40B38E:
	xor_(eax, eax);
	edx = to32i(esp+0x2C); //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edx, eax);
	to32i(esp+0x2C) = edx; //mov
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40B3B6;
	edi = 1; //mov
loc_40B3B6:
	ecx = to32i(esp+0x1C); //mov
	ebx = to32i(esp+8); //mov
	eax = to32i(esi+8); //mov
	edx = to32i(esp+0x20); //mov
	sar(eax, (int32_t)0x10);
	xor_(ebp, ebp);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esp+0x14) = ebp; //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40B3EA;
	ebp = 1; //mov
	to16i(esi+0xA) = 0; //mov
loc_40B3EA:
	ecx = to32i(esp+0x1C); //mov
	ebx = to32i(esp+8); //mov
	edx = to32i(esp+0x20); //mov
	eax = to32i(esp); //mov
	esp -= 4; _sub_423DC0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40B40D;
	ebp = 2; //mov
	to16i(esi+0xA) = 0; //mov
loc_40B40D:
	eax = to32i(esi+8); //mov
	ebx = to32i(esp+0x10); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, ebx);
	if (jz())
		goto loc_40B61A;
loc_40B41F:
	edx = 0x2D; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_40B42E:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	to32i(esp+0x28) = 0x100; //mov
	dx = to16i(esi+0xA); //mov
	eax = 0x8C; //mov
	test(dx, dx);
	if (jnz())
		goto loc_40B488;
	eax = 0x100; //mov
	to32i(esp+0x28) = eax; //mov
loc_40B488:
	ecx = 0x21; //mov
	add(ah, (int8_t)0x20);
	ebx = 0xFFFFFFE9; //mov
	edi = ax; //movsx
	eax = (int32_t)(intptr_t)aAudi; //mov
	edx = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = 0x188; //mov
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	esp -= 4; _sub_482E00(); esp += 4; //call
	ebx = to32i(esp+0x30); //mov
	ecx = 0x21; //mov
	eax = (int32_t)(intptr_t)aAbar; //mov
	edx = edi; //mov
	sub(ebx, (int32_t)0xA3);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = to32i(dword_4DAB80); //mov
	ebx = to32i(dword_4DAB7C); //mov
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_482E00(); esp += 4; //call
	eax = to32i(esp+0x28); //mov
	ecx = 0x21; //mov
	add(ah, (int8_t)0x20);
	ebx = 0xFFFFFFE9; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)aLaud; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	eax = (int32_t)(intptr_t)aRaud; //mov
	edx = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(to16i(esi+0xA), (int16_t)0);
	if (jnz())
		goto loc_40B546;
	cmp(ebp, (int32_t)1);
	if (jnz())
		goto loc_40B632;
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	eax = (int32_t)(intptr_t)aLaul; //mov
loc_40B53F:
	edx = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40B546:
	eax = esi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_40B557:
	esp -= 4; _sub_423B90(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	edi = eax; //mov
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_40B5AF;
	ecx = to32i(esp+0x2C); //mov
	cmp(ecx, to32i(esp+0xC));
	if (jle())
		goto loc_40B5AF;
	add(ecx, (int32_t)0xF);
	edi = 1; //mov
	to32i(esp+0xC) = ecx; //mov
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_40B64F;
loc_40B591:
	cmp(to16i(esi+0xA), (int16_t)0);
	if (jnz())
		goto loc_40B65E;
	eax = to32i(esp+0x30); //mov
	sub(eax, (int32_t)0xE);
	test(eax, eax);
	if (jle())
		goto loc_40B67F;
loc_40B5AB:
	to32i(esp+0x30) = eax; //mov
loc_40B5AF:
	imul32(edx, to32i(esp+0x30), 0x64);
	ecx = 0x8C; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ecx = eax; //mov
	cmp(eax, (int32_t)0x64);
	if (jle())
		goto loc_40B5CC;
	eax = 0x64; //mov
loc_40B5CC:
	edx = to32i(esp+0x18); //mov
	ecx = eax; //mov
	cmp(eax, edx);
	if (jz())
		goto loc_40B5DF;
	to32i(esp+0x18) = eax; //mov
	esp -= 4; _sub_479310(); esp += 4; //call
loc_40B5DF:
	ebx = to32i(esp+0x24); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40B38E;
	cmp(ebx, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_40B5F6;
	to8i(dword_512ED4) = cl; //mov
loc_40B5F6:
	xor_(eax, eax);
	al = to8i(dword_512ED4); //mov
	esp -= 4; _sub_4792C0(); esp += 4; //call
	esp -= 4; _sub_4792D0(); esp += 4; //call
	esp -= 4; _sub_479220(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40B61A:
	cmp(ebp, to32i(esp+0x14));
	if (jnz())
		goto loc_40B41F;
	test(di, di);
	if (jnz())
		goto loc_40B42E;
	goto loc_40B557;
loc_40B632:
	cmp(ebp, (int32_t)2);
	if (jnz())
		goto loc_40B546;
	ecx = 0x21; //mov
	ebx = 0xFFFFFFE9; //mov
	eax = (int32_t)(intptr_t)aRaul; //mov
	goto loc_40B53F;
loc_40B64F:
	cmp(ax, (int16_t)0xD);
	if (jnz())
		goto loc_40B65E;
	cmp(ebp, (int32_t)1);
	if (jz())
		goto loc_40B591;
loc_40B65E:
	cmp(dx, (int16_t)0x4D00);
	if (jnz())
		goto loc_40B686;
loc_40B665:
	cmp(to16i(esi+0xA), (int16_t)0);
	if (jnz())
		goto loc_40B691;
	eax = to32i(esp+0x30); //mov
	add(eax, (int32_t)0xE);
	cmp(eax, (int32_t)0x8C);
	if (jge())
		goto loc_40B6A4;
	goto loc_40B5AB;
loc_40B67F:
	xor_(eax, eax);
	goto loc_40B5AB;
loc_40B686:
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_40B691;
	cmp(ebp, (int32_t)2);
	if (jz())
		goto loc_40B665;
loc_40B691:
	edx = dx; //movsx
	eax = esi; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x24) = eax; //mov
	goto loc_40B5AF;
loc_40B6A4:
	eax = 0x8C; //mov
	goto loc_40B5AB;
}
Fn(void) Game::_sub_40B6C4()
{
	static const void *const off_40B6B0[] = {
		&&loc_40B70C,
		&&loc_40BB23,
		&&loc_40BB23,
		&&loc_40BB23,
		&&loc_40BB23,
	};
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x1A8);
	to32i(esp+0x194) = eax; //mov
	to32i(esp+0x1A0) = edx; //mov
	ecx = 0x58; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_409F38; //mov
	xor_(edx, edx);
	ax = to16i(word_4D3ECE); //mov
	to32i(dword_4D2314) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ax, (int16_t)4);
	if (ja())
		goto loc_40BB35;
	and_(eax, (int32_t)0xFFFF);
	goto *off_40B6B0[eax];
loc_40B70C:
	xor_(ebx, ebx);
	to16i(word_4D24C0) = bx; //mov
loc_40B715:
	xor_(eax, eax);
	al = to8i(byte_512DA9); //mov
	to16i(esp+0x188) = ax; //mov
	xor_(eax, eax);
	al = to8i(byte_512DAA); //mov
	to16i(esp+0x18A) = ax; //mov
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_40BB43;
	xor_(ecx, ecx);
	to16i(esp+0x18C) = cx; //mov
loc_40B745:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	to16i(esp+0x18E) = ax; //mov
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	dl = to8i(byte_512DAA); //mov
	to16i(esp+0x190) = ax; //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_40BB57;
	to16i(esp+0x192) = 0xF; //mov
loc_40B77C:
	cmp(to16i(esp+0x194), (int16_t)0);
	if (jz())
		goto loc_40BACC;
	eax = to32i(dword_5637F4); //mov
	ecx = 0x1F2; //mov
	add(eax, (int32_t)0x14);
	xor_(ebx, ebx);
	to32i(dword_4D24CC) = eax; //mov
	eax = to32i(esp+0x1A0); //mov
	to16i(esp+0x1A4) = bx; //mov
	sub(eax, (int32_t)0x3E8);
	to32i(esp+0x19C) = ecx; //mov
	to32i(esp+0x198) = eax; //mov
loc_40B7C2:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40BBA8;
loc_40B7CF:
	edi = to32i(esp+0x1A4); //mov
	cmp(di, (int16_t)3);
	if (jge())
		goto loc_40BBBC;
	eax = edi; //mov
loc_40B7E2:
	eax = ax; //cwde
	imul32(eax, 0x58);
	edx = to32i(esp+0x1A2); //mov
	sar(edx, (int32_t)0x10);
	edx = to32i(esp+edx*2+0x186); //mov
	sar(edx, (int32_t)0x10);
	shl(edx, (int32_t)2);
	add(eax, edx);
	ecx = to32i(esp+eax); //mov
	push32(ecx);
	push32(aS5);
	eax = (int32_t)(intptr_t)(esp+0x168); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	bh = to8i(byte_512DFB); //mov
	add(esp, (int32_t)0xC);
	cmp(bh, (int8_t)2);
	if (jnz())
		goto loc_40B989;
	edx = (int32_t)(intptr_t)aA5; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B862;
	esi = (int32_t)(intptr_t)aFre1; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B849:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B861;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B849;
loc_40B861:
	pop32(edi);
loc_40B862:
	edx = (int32_t)(intptr_t)aAd2; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B89D;
	esi = (int32_t)(intptr_t)aFred; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B884:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B89C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B884;
loc_40B89C:
	pop32(edi);
loc_40B89D:
	edx = (int32_t)(intptr_t)aB5; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B8D8;
	esi = (int32_t)(intptr_t)aFre2; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B8BF:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B8D7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B8BF;
loc_40B8D7:
	pop32(edi);
loc_40B8D8:
	edx = (int32_t)(intptr_t)aBd; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B913;
	esi = (int32_t)(intptr_t)aFree; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B8FA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B912;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B8FA;
loc_40B912:
	pop32(edi);
loc_40B913:
	edx = (int32_t)(intptr_t)aC5; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B94E;
	esi = (int32_t)(intptr_t)aFre3; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B935:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B94D;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B935;
loc_40B94D:
	pop32(edi);
loc_40B94E:
	edx = (int32_t)(intptr_t)aCd; //mov
	eax = (int32_t)(intptr_t)(esp+0x160); //lea
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40B989;
	esi = (int32_t)(intptr_t)aFref; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
	push32(edi);
loc_40B970:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B988;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B970;
loc_40B988:
	pop32(edi);
loc_40B989:
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
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
	cmp(ecx, (int32_t)2);
	if (jnz())
		goto loc_40B9CD;
	esi = (int32_t)(intptr_t)asc_4C8648; //mov
	edi = (int32_t)(intptr_t)(esp+0x160); //lea
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
loc_40B9B4:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40B9CC;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40B9B4;
loc_40B9CC:
	pop32(edi);
loc_40B9CD:
	edx = (int32_t)(intptr_t)(esp+0x160); //lea
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esp+0x1A0); //mov
	cmp(ax, (int16_t)0x7D0);
	if (jge())
		goto loc_40BA0D;
	cmp(ax, (int16_t)0x3E8);
	if (jle())
		goto loc_40BBC6;
	imul32(eax, to32i(esp+0x1A4), 0x53);
	ebx = to32i(esp+0x198); //mov
	sub(ebx, eax);
	eax = ebx; //mov
loc_40BA0A:
	test(ax, ax);
loc_40BA0D:
	eax = to32i(edx+0xC); //mov
	shl(eax, (int32_t)0x14);
	sar(eax, (int32_t)0x14);
	edi = to32i(esp+0x1A4); //mov
	add(eax, (int32_t)0x19);
	cmp(di, (int16_t)2);
	if (jge())
		goto loc_40BA2B;
	add(eax, (int32_t)3);
loc_40BA2B:
	edx = to32i(edx+0xC); //mov
	esi = to32i(esp+0x1A2); //mov
	shl(edx, (int32_t)4);
	sar(esi, (int32_t)0x10);
	sar(edx, (int32_t)0x14);
	ebx = to32i(dword_4D24A4+esi*4); //mov
	ecx = ax; //movsx
	add(edx, ebx);
	eax = esi; //mov
	edx = dx; //movsx
	ebx = to32i(dword_4D24C6); //mov
	push32(edx);
	sar(ebx, (int32_t)0x10);
	edx = (int32_t)(intptr_t)(esp+0x164); //lea
	esp -= 4; _sub_4281B0(); esp += 4; //call
loc_40BA65:
	edx = to32i(esp+0x1A4); //mov
	eax = to32i(esp+0x19C); //mov
	inc(edx);
	sub(eax, (int32_t)0x53);
	to16i(esp+0x1A4) = dx; //mov
	to32i(esp+0x19C) = eax; //mov
	cmp(dx, (int16_t)6);
	if (jge())
		goto loc_40BACC;
	cmp(dx, (int16_t)5);
	if (jnz())
		goto loc_40B7C2;
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40B7C2;
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jnz())
		goto loc_40B7C2;
	push32(0);
	eax = to32i(esp+0x1A6); //mov
	edx = (int32_t)(intptr_t)(esp+0x164); //lea
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4281B0(); esp += 4; //call
loc_40BACC:
	eax = to32i(esp+0x188); //mov
	to16i(word_4E5934) = ax; //mov
	eax = to32i(esp+0x18A); //mov
	to16i(word_4E5936) = ax; //mov
	eax = to32i(esp+0x18C); //mov
	to16i(word_4E5938) = ax; //mov
	eax = to32i(esp+0x18E); //mov
	to16i(word_4E593A) = ax; //mov
	eax = to32i(esp+0x190); //mov
	to16i(word_4E593C) = ax; //mov
	eax = to32i(esp+0x192); //mov
	to16i(word_4E593E) = ax; //mov
	add(esp, (int32_t)0x1A8);
	pop32(edi);
	pop32(esi);
	return;
loc_40BB23:
	ax = to16i(word_4D3ECE); //mov
	inc(eax);
	to16i(word_4D24C0) = ax; //mov
	goto loc_40B715;
loc_40BB35:
	to16i(word_4D24C0) = 0xFFFF; //mov
	goto loc_40B715;
loc_40BB43:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	to16i(esp+0x18C) = ax; //mov
	goto loc_40B745;
loc_40BB57:
	cmp(dl, (int8_t)1);
	if (jnz())
		goto loc_40BB7D;
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	ax = to16i(word_4D21B4+eax*2); //mov
	add(eax, (int32_t)0x10);
	to16i(esp+0x192) = ax; //mov
	goto loc_40B77C;
loc_40BB7D:
	xor_(eax, eax);
	al = to8i(byte_512DF5); //mov
	to16i(esp+0x192) = ax; //mov
	cmp(ax, (int16_t)0xB);
	if (jle())
		goto loc_40B77C;
	edi = eax; //mov
	add(edi, (int32_t)4);
	to16i(esp+0x192) = di; //mov
	goto loc_40B77C;
loc_40BBA8:
	cmp(to16i(esp+0x1A4), (int16_t)4);
	if (jnz())
		goto loc_40B7CF;
	goto loc_40BA65;
loc_40BBBC:
	eax = 3; //mov
	goto loc_40B7E2;
loc_40BBC6:
	sub(eax, to32i(esp+0x19C));
	goto loc_40BA0A;
}
Fn(void) Game::_sub_40BBE0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebp = eax; //mov
	to32i(esp+0x1C) = edx; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_409F28; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	test(dx, dx);
	if (jz())
		goto loc_40BD1C;
loc_40BC02:
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jnz())
		goto loc_40BC20;
	ebx = to32i(dword_4D2440); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40BC20;
	cmp(ebx, to32i(dword_5637F4));
	if (jge())
		goto loc_40BD11;
loc_40BC20:
	edx = to32i(dword_4D2444); //mov
	inc(edx);
	ecx = 0x140; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(eax, eax);
	to32i(dword_4D2444) = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x14);
	ecx = to32i(esp+0x1C); //mov
	to32i(dword_4D2440) = eax; //mov
	test(cx, cx);
	if (jz())
		goto loc_40BD85;
loc_40BC5A:
	xor_(ebx, ebx);
	xor_(edi, edi);
loc_40BC5E:
	ecx = bx; //movsx
	add(ecx, ecx);
	si = to16i(word_4D2452+ecx); //mov
	cmp(di, si);
	if (jge())
		goto loc_40BDC2;
	dx = to16i(word_4D2448+ecx); //mov
	add(edx, esi);
	to16i(word_4D2448+ecx) = dx; //mov
	cmp(dx, (int16_t)0x6E);
	if (jl())
		goto loc_40BDA0;
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_40BDA0;
loc_40BC97:
	eax = bx; //movsx
	to16i(word_4D2452+eax*2) = di; //mov
loc_40BCA2:
	inc(ebx);
	cmp(bx, (int16_t)4);
	if (jl())
		goto loc_40BC5E;
	eax = to32i(dword_4D2314+2); //mov
	edx = 1; //mov
	sar(eax, (int32_t)0x10);
	sub(edx, eax);
	xor_(ecx, ecx);
	eax = to32i(dword_4D231C+edx*4); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4825A8(); esp += 4; //call
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)aSide; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40BF1C;
loc_40BCE4:
	xor_(esi, esi);
loc_40BCE6:
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40BF2D;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jnz())
		goto loc_40BF2D;
loc_40BCFF:
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x14);
	to32i(dword_4D2440) = eax; //mov
	esp -= 4; _sub_4824BC(); esp += 4; //call
loc_40BD11:
	xor_(eax, eax);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40BD1C:
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_422060(); esp += 4; //call
	eax = to32i(esp+0x10); //mov
	cmp(eax, to32i(dword_4E592C));
	if (jz())
		goto loc_40BD77;
loc_40BD39:
	eax = to32i(esp+0x10); //mov
	to32i(dword_4E592C) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(dword_4E5930) = eax; //mov
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x14);
	to32i(dword_4D2440) = eax; //mov
loc_40BD58:
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40BC02;
	eax = to32i(dword_5637F4); //mov
	add(eax, (int32_t)0x14);
	to32i(dword_4D2440) = eax; //mov
	goto loc_40BC02;
loc_40BD77:
	eax = to32i(esp+0x14); //mov
	cmp(eax, to32i(dword_4E5930));
	if (jnz())
		goto loc_40BD39;
	goto loc_40BD58;
loc_40BD85:
	cmp(to8i(byte_512ECD), (int8_t)2);
	if (jnb())
		goto loc_40BC5A;
	eax = 1; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40BDA0:
	eax = bx; //movsx
	cmp(to16i(word_4D2448+eax*2), (int16_t)0xB4);
	if (jl())
		goto loc_40BCA2;
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_40BC97;
	goto loc_40BCA2;
loc_40BDC2:
	if (jle())
		goto loc_40BDF6;
	dx = to16i(word_4D2448+ecx); //mov
	add(edx, esi);
	to16i(word_4D2448+ecx) = dx; //mov
	cmp(dx, (int16_t)0x28);
	if (jg())
		goto loc_40BCA2;
	eax = 0x28; //mov
	to16i(word_4D2452+ecx) = di; //mov
	to16i(word_4D2448+ecx) = ax; //mov
	goto loc_40BCA2;
loc_40BDF6:
	cmp(bx, (int16_t)3);
	if (jnz())
		goto loc_40BE6F;
	cmp(to16i(word_4D2448+ecx), (int16_t)0x28);
	if (jle())
		goto loc_40BE35;
	esi = 0xFFFFFFFD; //mov
	dx = to16i(word_4D246A+ecx); //mov
	to16i(word_4D2452+ecx) = si; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	xor_(dh, dh);
	xor_(ah, ah);
	and_(dl, (int8_t)0xFE);
	and_(al, (int8_t)1);
	add(eax, edx);
	to16i(word_4D246A+ecx) = ax; //mov
	goto loc_40BCA2;
loc_40BE35:
	ax = to16i(word_4D246A+ecx); //mov
	xor_(ah, ah);
	and_(al, (int8_t)0xFE);
	edx = ax; //movsx
	add(edx, (int32_t)2);
	esi = 6; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	to16i(word_4D2452+ecx) = bx; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	and_(eax, (int32_t)1);
	add(edx, eax);
	to16i(word_4D246A+ecx) = dx; //mov
	goto loc_40BCA2;
loc_40BE6F:
	esp -= 4; _sub_488074(); esp += 4; //call
	xor_(ah, ah);
	and_(al, (int8_t)1);
	dx = to16i(word_4D2448+ecx); //mov
	to16i(word_4D246A+ecx) = ax; //mov
	cmp(dx, (int16_t)0x28);
	if (jle())
		goto loc_40BEAB;
	esi = 0xA; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(esi);
	neg(edx);
	eax = (int32_t)(intptr_t)(edx-0xA); //lea
	to16i(word_4D2452+ecx) = ax; //mov
	goto loc_40BCA2;
loc_40BEAB:
	esi = 5; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(esi);
	test(edx, edx);
	if (jnz())
		goto loc_40BCA2;
	esi = 0xA; //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(esi);
	add(edx, esi);
	esi = 0x18; //mov
	to16i(word_4D2452+ecx) = dx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(esi);
	sub(edx, (int32_t)0xC);
	to16i(word_4D245A+ecx) = dx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_488074(); esp += 4; //call
	div32(esi);
	sub(edx, (int32_t)0xC);
	to16i(word_4D2462+ecx) = dx; //mov
	cmp(bx, (int16_t)2);
	if (jnz())
		goto loc_40BCA2;
	esi = edx; //mov
	sub(esi, (int32_t)0x1E);
	to16i(word_4D2462+ecx) = si; //mov
	goto loc_40BCA2;
loc_40BF1C:
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
	goto loc_40BCE4;
loc_40BF2D:
	ecx = si; //movsx
	add(ecx, ecx);
	di = to16i(word_4D2448+ecx); //mov
	test(di, di);
	if (jz())
		goto loc_40BF73;
	edx = edi; //mov
	eax = to32i(byte_4D2460+ecx); //mov
	ebx = to32i(byte_4D2458+ecx); //mov
	sar(eax, (int32_t)0x10);
	edi = to32i(byte_4D2468+ecx); //mov
	sar(ebx, (int32_t)0x10);
	sar(edi, (int32_t)0x10);
	add(dh, (int8_t)0x20);
	add(ecx, edi);
	edx = dx; //movsx
	edi = to32i(off_4D2474+ecx*4); //mov
	ecx = eax; //mov
	eax = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40BF73:
	inc(esi);
	cmp(si, (int16_t)4);
	if (jl())
		goto loc_40BCE6;
	eax = to32i(dword_4D2444); //mov
	edx = eax; //mov
	ecx = 0x50; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(ebx, ebx);
	edx = 0x2800; //mov
	eax = to32i(esp+eax*4); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40BFB5;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
loc_40BFB5:
	eax = to32i(dword_4D2444); //mov
	edx = eax; //mov
	ecx = 0x50; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	add(ah, (int8_t)0x1C);
	edi = ax; //movsx
	eax = to32i(dword_4D2444); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = (int32_t)(intptr_t)(eax+1); //lea
	ecx = 4; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	xor_(ebx, ebx);
	eax = to32i(esp+edx*4); //mov
	xor_(ecx, ecx);
	edx = edi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C01F;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
loc_40C01F:
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aLogo_0; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C047;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
loc_40C047:
	cmp(ebp, (int32_t)(intptr_t)off_4D3EC4);
	if (jz())
		goto loc_40C054;
	esp -= 4; _sub_40C110(); esp += 4; //call
loc_40C054:
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = 1; //mov
	sub(ax, to16i(word_4D2318));
	esi = 1; //mov
	to16i(word_4D2318) = ax; //mov
	eax = to32i(dword_4D4D24); //mov
	to16i(word_4D231A) = si; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x2800; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ebx, ebx);
	xor_(ecx, ecx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C0B6;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
loc_40C0B6:
	eax = to32i(dword_4D4D24); //mov
	edx = 1; //mov
	xor_(edi, edi);
	eax = to32i(eax+0x20); //mov
	to32i(dword_4EB588) = edi; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	esp -= 4; _sub_404D60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C0E5;
	cmp(to16i(esp+0x1C), (int16_t)0);
	if (jz())
		goto loc_40BCFF;
loc_40C0E5:
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40C110()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	eax = to32i(byte_4D3ECC); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(off_4D3ED0+eax*4); //mov
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(edx); //mov
	sar(eax, (int32_t)0x10);
	ecx = 1; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	esi = to32i(edx); //mov
	eax = ax; //cwde
	sar(esi, (int32_t)0x10);
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40C160()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	esi = eax; //mov
	ebx = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	xor_(edi, edi);
	xor_(ecx, ecx);
	to32i(esp) = edx; //mov
	to32i(dword_4D2310) = ecx; //mov
	to32i(dword_4D2420) = ebx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	esp -= 4; _sub_40EB20(); esp += 4; //call
	ebx = 0x270F; //mov
	eax = 6; //mov
	xor_(edx, edx);
	to16i(dword_4E5928) = bx; //mov
	esp -= 4; _sub_4056A0(); esp += 4; //call
	ebp = to32i(dword_4D243C); //mov
	to16i(esp+0x1C) = dx; //mov
	cmp(ebp, (int32_t)(intptr_t)off_4D3348);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D2C80);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D2B34);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D2BF4);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D39A8);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D37C8);
	if (jz())
		goto loc_40C274;
	cmp(ebp, (int32_t)(intptr_t)off_4D38D8);
	if (jz())
		goto loc_40C274;
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	esp -= 4; _sub_40C110(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	cmp(to32i(dword_4D243C), (int32_t)(intptr_t)dword_4D2870);
	if (jnz())
		goto loc_40C25E;
	edx = (int32_t)(intptr_t)aBlk6; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40C25E:
	ecx = 1; //mov
	edx = 0x8C; //mov
	eax = 0xE6; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_427280(); esp += 4; //call
loc_40C274:
	ecx = to32i(dword_4D243C); //mov
	cmp(ecx, (int32_t)(intptr_t)off_4D2B34);
	if (jnz())
		goto loc_40C75D;
loc_40C286:
	edx = (int32_t)(intptr_t)aBlk6; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40C29F:
	cmp(to32i(dword_4D243C), (int32_t)(intptr_t)off_4D2C80);
	if (jnz())
		goto loc_40C2DD;
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	edx = (int32_t)(intptr_t)aBlk6; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40C2DD:
	cx = to16i(word_4D3ECE); //mov
	test(cx, cx);
	if (jle())
		goto loc_40C77B;
	cmp(cx, (int16_t)5);
	if (jge())
		goto loc_40C77B;
	cmp(cx, (int16_t)4);
	if (jz())
		goto loc_40C76E;
loc_40C301:
	to16i(esp+0x1C) = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_427ED0(); esp += 4; //call
	cmp(to16i(word_4D3ECE), (int16_t)4);
	if (jnz())
		goto loc_40C7FB;
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40C7FB;
loc_40C32A:
	ecx = 0xFFFFFF10; //mov
	ebx = 2; //mov
	to16i(esp+0x10) = cx; //mov
	to32i(esp+0xC) = ebx; //mov
	ebp = 0x20; //mov
loc_40C342:
	push32(2);
	ebx = to32i(esp+0x10); //mov
	esp -= 4; _sub_497680(); esp += 4; //call
	test(bx, bx);
	if (jz())
		goto loc_40C375;
	ecx = ebx; //mov
	dec(ecx);
	xor_(ebx, ebx);
	to32i(esp+0xC) = ecx; //mov
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFF8C8C8C);
	eax = 1; //mov
	ecx = ebp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
loc_40C375:
	eax = to32i(esp+0xE); //mov
	edx = 0x13C; //mov
	sar(eax, (int32_t)0x10);
	ecx = ebp; //mov
	add(eax, (int32_t)0xD3);
	xor_(ebx, ebx);
	esp -= 4; _sub_4279E0(); esp += 4; //call
	push32(0xFFFFFFFF);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_427B30(); esp += 4; //call
	eax = to32i(byte_4D3ECC); //mov
	edx = edi; //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4276F0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	eax = to32i(esp+0x10); //mov
	add(eax, (int32_t)0xC);
	to16i(esp+0x10) = ax; //mov
	test(ax, ax);
	if (jle())
		goto loc_40C342;
loc_40C3CC:
	ebx = 1; //mov
	edx = 0x400; //mov
	eax = to32i(dword_4D4D24); //mov
	xor_(ecx, ecx);
	to16i(dword_4E5924+2) = bx; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = (int32_t)(intptr_t)aBlk4; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	ebx = 0x13C; //mov
	edx = 0xD3; //mov
	eax = esi; //mov
	esp -= 4; _sub_40CD70(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	eax = to32i(dword_4D231C+eax*4); //mov
	edx = 0x2800; //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4EB588) = eax; //mov
	eax = to32i(dword_4D4D24); //mov
	edx = 1; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	xor_(eax, eax);
	xor_(ebp, ebp);
	al = to8i(byte_512DD1); //mov
	ebx = 2; //mov
	to16i(esp+0x18) = ax; //mov
	xor_(eax, eax);
	edx = 1; //mov
	al = to8i(byte_512DF6); //mov
	to32i(dword_4D2310) = edx; //mov
	to16i(esp+8) = ax; //mov
loc_40C473:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ecx = to32i(dword_4D2314); //mov
	add(edi, eax);
	test(ecx, ecx);
	if (jnz())
		goto loc_40C494;
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_40BBE0(); esp += 4; //call
loc_40C494:
	test(bx, bx);
	if (jz())
		goto loc_40C64C;
	esp -= 4; _sub_40EB20(); esp += 4; //call
	cmp(to32i(dword_4D209C), (int32_t)0);
	if (jz())
		goto loc_40C4C6;
	xor_(edx, edx);
	to32i(dword_4D209C) = edx; //mov
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40C80F;
loc_40C4BF:
	eax = esi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
loc_40C4C6:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40D0C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C820;
	eax = to32i(off_4D2A40); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40C4E3:
	cmp(to8i(byte_512DAF), (int8_t)1);
	if (jz())
		goto loc_40C82E;
	eax = to32i(off_4D2A3C); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40C4F9:
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40C83C;
	cmp(to8i(byte_512DBF), (int8_t)0xB);
	if (jbe())
		goto loc_40C83C;
loc_40C512:
	or_(to8i(byte_4D2FB8), (int8_t)1);
	or_(to8i(byte_4D2FE0), (int8_t)1);
loc_40C520:
	xor_(eax, eax);
	edx = to32i(esp+0x16); //mov
	al = to8i(byte_512DD1); //mov
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jz())
		goto loc_40C54A;
	xor_(eax, eax);
	al = to8i(byte_512DD1); //mov
	to16i(esp+0x18) = ax; //mov
	eax = esi; //mov
	ebx = 2; //mov
	esp -= 4; _sub_427ED0(); esp += 4; //call
loc_40C54A:
	cmp(esi, (int32_t)(intptr_t)off_4D2A20);
	if (jnz())
		goto loc_40C88F;
	xor_(edx, edx);
	eax = to32i(dword_4E5924+2); //mov
	dl = to8i(byte_512DB0); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jz())
		goto loc_40C88F;
loc_40C56E:
	cmp(to8i(byte_512DD1), (int8_t)0);
	if (jnz())
		goto loc_40C8F8;
loc_40C57B:
	edx = to32i(esp+0x1A); //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_40D1B0(); esp += 4; //call
loc_40C589:
	ebx = 2; //mov
loc_40C58E:
	cmp(to32i(dword_4D40B4), (int32_t)0);
	if (jz())
		goto loc_40C5A4;
	xor_(ebx, ebx);
	to32i(dword_4D40B4) = ebx; //mov
	ebx = 2; //mov
loc_40C5A4:
	xor_(eax, eax);
	edx = to32i(esp+6); //mov
	al = to8i(byte_512DF6); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, eax);
	if (jz())
		goto loc_40C923;
	xor_(eax, eax);
	al = to8i(byte_512DF6); //mov
	to16i(esp+8) = ax; //mov
loc_40C5C6:
	eax = to32i(dword_4D4D24); //mov
	edx = 0x400; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = (int32_t)(intptr_t)aBlk4; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ebx = 0x13C; //mov
	edx = 0xD3; //mov
	eax = esi; //mov
	esp -= 4; _sub_40CD70(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	eax = to32i(dword_4D231C+eax*4); //mov
	edx = 0x2800; //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40CAB0(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4EB588) = eax; //mov
	eax = to32i(dword_4D4D24); //mov
	edx = 1; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40C639:
	edx = 0x7D0; //mov
	eax = 1; //mov
	ecx = esi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_40B6C4(); esp += 4; //call
loc_40C64C:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
	edx = 1; //mov
	eax = esi; //mov
	to32i(dword_4D20A0) = edx; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = esi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_40CB00(); esp += 4; //call
	eax = to32i(byte_4D3ECC); //mov
	edx = edi; //mov
	sar(eax, (int32_t)0x10);
	to32i(dword_4D20A0) = ecx; //mov
	esp -= 4; _sub_4276F0(); esp += 4; //call
	to32i(dword_4D2314) = eax; //mov
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	ebx = eax; //mov
	esp -= 4; _sub_405960(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_40C6F2;
	cmp(edi, to32i(esp));
	if (jle())
		goto loc_40C6F2;
	edx = (int32_t)(intptr_t)(edi+0xF); //lea
	to32i(esp) = edx; //mov
	edx = ax; //movsx
	eax = esi; //mov
	ebx = 1; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	ebp = eax; //mov
loc_40C6F2:
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40C932;
loc_40C6FB:
	cmp(esi, (int32_t)(intptr_t)off_4D2A20);
	if (jnz())
		goto loc_40C93B;
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40C93B;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_40C93B;
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40D0C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40C93B;
	xor_(edx, edx);
	eax = 0x4D00; //mov
	dl = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40DEA0(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_40C93B;
	xor_(ebp, ebp);
	goto loc_40C473;
loc_40C75D:
	cmp(ecx, (int32_t)(intptr_t)off_4D2BF4);
	if (jz())
		goto loc_40C286;
	goto loc_40C29F;
loc_40C76E:
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40C301;
loc_40C77B:
	cmp(to16i(dword_4E5924+2), (int16_t)0);
	if (jnz())
		goto loc_40C3CC;
	to16i(esp+0x14) = 0x3E9; //mov
	xor_(ebp, ebp);
loc_40C792:
	edx = to32i(esp+0x12); //mov
	eax = 1; //mov
	ecx = esi; //mov
	ebx = ebp; //mov
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_40B6C4(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	ecx = ebp; //mov
	ebx = ebp; //mov
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	ecx = ebp; //mov
	ebx = ebp; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	add(eax, (int32_t)0x32);
	to16i(esp+0x14) = ax; //mov
	cmp(ax, (int16_t)0x640);
	if (jle())
		goto loc_40C792;
	goto loc_40C3CC;
loc_40C7FB:
	edx = 0x7F; //mov
	eax = 4; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	goto loc_40C32A;
loc_40C80F:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jz())
		goto loc_40C4BF;
	goto loc_40C4C6;
loc_40C820:
	eax = to32i(off_4D2A40); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40C4E3;
loc_40C82E:
	eax = to32i(off_4D2A3C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40C4F9;
loc_40C83C:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40C851;
	cmp(to8i(byte_512DDA), (int8_t)0xB);
	if (ja())
		goto loc_40C512;
loc_40C851:
	cmp(esi, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40C866;
	cmp(to8i(byte_512DF5), (int8_t)0xB);
	if (ja())
		goto loc_40C512;
loc_40C866:
	ah = to8i(byte_4D2FB8); //mov
	and_(ah, (int8_t)0xFE);
	dl = to8i(byte_512ECC); //mov
	to8i(byte_4D2FB8) = ah; //mov
	test(dl, dl);
	if (jnz())
		goto loc_40C520;
	and_(to8i(byte_4D2FE0), (int8_t)0xFE);
	goto loc_40C520;
loc_40C88F:
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40C8AF;
	xor_(edx, edx);
	eax = to32i(dword_4E5924+2); //mov
	dl = to8i(byte_512DBF); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_40C56E;
loc_40C8AF:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40C8CF;
	xor_(eax, eax);
	edx = to32i(dword_4E5924+2); //mov
	al = to8i(byte_512DDA); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, eax);
	if (jnz())
		goto loc_40C56E;
loc_40C8CF:
	cmp(esi, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40C58E;
	xor_(eax, eax);
	edx = to32i(dword_4E5924+2); //mov
	al = to8i(byte_512DF5); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, eax);
	if (jnz())
		goto loc_40C56E;
	goto loc_40C58E;
loc_40C8F8:
	cmp(to16i(dword_4E5928), (int16_t)0xB);
	if (jg())
		goto loc_40C57B;
	cmp(esi, (int32_t)(intptr_t)off_4D2A20);
	if (jz())
		goto loc_40C57B;
	cmp(esi, (int32_t)(intptr_t)off_4D3204);
	if (jz())
		goto loc_40C57B;
	goto loc_40C589;
loc_40C923:
	cmp(bx, (int16_t)2);
	if (jz())
		goto loc_40C5C6;
	goto loc_40C639;
loc_40C932:
	cmp(ebp, (int32_t)0xFFFFFFFB);
	if (jz())
		goto loc_40C6FB;
loc_40C93B:
	test(ebp, ebp);
	if (jz())
		goto loc_40C473;
	xor_(ebx, ebx);
	ax = to16i(word_4D3ECE); //mov
	to32i(dword_4D2310) = ebx; //mov
	test(ax, ax);
	if (jle())
		goto loc_40CA3D;
	cmp(ax, (int16_t)5);
	if (jge())
		goto loc_40CA3D;
	cmp(esi, (int32_t)(intptr_t)off_4D3204);
	if (jz())
		goto loc_40CA30;
loc_40C970:
	edx = 0x7F; //mov
	eax = 5; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	edx = (int32_t)(intptr_t)aBlk4; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = 1; //mov
	xor_(esi, esi);
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40C9B3:
	eax = si; //movsx
	to32i(esp+4) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFEE8);
	if (jl())
		goto loc_40CA75;
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0xFF8C8C8C);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
	eax = to32i(byte_4D3ECC); //mov
	edx = edi; //mov
	sar(eax, (int32_t)0x10);
	ecx = 0x20; //mov
	esp -= 4; _sub_4276F0(); esp += 4; //call
	eax = to32i(esp+4); //mov
	edx = 0x13C; //mov
	add(eax, (int32_t)0xD3);
	xor_(ebx, ebx);
	esp -= 4; _sub_4279E0(); esp += 4; //call
	push32(0xFFFFFFFF);
	xor_(edx, edx);
	xor_(eax, eax);
	sub(esi, (int32_t)0xF);
	esp -= 4; _sub_427B30(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	goto loc_40C9B3;
loc_40CA30:
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40C970;
loc_40CA3D:
	ecx = 1; //mov
	edx = 0xE6; //mov
	eax = 0x8C; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_427320(); esp += 4; //call
loc_40CA53:
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40CA98;
loc_40CA58:
	edx = 1; //mov
	to32i(dword_4D243C) = ebp; //mov
	eax = ebp; //mov
	to32i(dword_4D2310) = edx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40CA75:
	cmp(ebp, (int32_t)(intptr_t)dword_4D2870);
	if (jnz())
		goto loc_40CA53;
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	goto loc_40CA53;
loc_40CA98:
	xor_(ebx, ebx);
	to16i(dword_4E5924+2) = bx; //mov
	goto loc_40CA58;
}
Fn(void) Game::_sub_40CAB0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	cmp(eax, (int32_t)(intptr_t)off_4D3050);
	if (jz())
		goto loc_40CAC8;
	cmp(ecx, (int32_t)(intptr_t)off_4D3100);
	if (jz())
		goto loc_40CAE8;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40CAC8:
	ebx = 0x88; //mov
	edx = 0x16D; //mov
	eax = (int32_t)(intptr_t)dword_4D2F80; //mov
	esp -= 4; _sub_410090(); esp += 4; //call
	cmp(ecx, (int32_t)(intptr_t)off_4D3100);
	if (jz())
		goto loc_40CAE8;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40CAE8:
	ebx = 0x88; //mov
	edx = 0x16D; //mov
	eax = (int32_t)(intptr_t)dword_4D2B68; //mov
	esp -= 4; _sub_410090(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40CB00()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x60);
	ebp = eax; //mov
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_409EC8; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(esp+0x30); //lea
	esi = (int32_t)(intptr_t)dword_409EF8; //mov
	ah = to8i(byte_512DD1); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(ah, ah);
	if (jz())
		goto loc_40CBF4;
	cmp(ebp, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40CD20;
loc_40CB42:
	cmp(to16i(dword_4E5928), (int16_t)0xB);
	if (jg())
		goto loc_40CBF4;
	eax = 0x58; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x58; //mov
	ecx = 1; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x58; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x59; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x59; //mov
	ecx = 1; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x59; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x5A; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x5A; //mov
	ecx = 1; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x5A; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	eax = 0x5B; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x5B; //mov
	ecx = 1; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	edx = ax; //movsx
	eax = 0x5B; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
loc_40CBF4:
	cmp(ebp, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40CCC6;
	dl = to8i(byte_512DF5); //mov
	cmp(dl, (int8_t)0xC);
	if (jb())
		goto loc_40CCC6;
	cmp(dl, (int8_t)0xE);
	if (ja())
		goto loc_40CCC6;
	xor_(eax, eax);
	al = dl; //mov
	shl(eax, (int32_t)2);
	push32(0);
	esi = (int32_t)(intptr_t)(eax-0x30); //lea
	push32(1);
	eax = 0x58; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(esp+esi*4+8); //mov
	edx = 0xAA; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(0);
	push32(1);
	eax = 0x59; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(esp+esi*4+0xC); //mov
	edx = 0xAA; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(0);
	push32(1);
	eax = 0x5A; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(esp+esi*4+0x10); //mov
	edx = 0xAA; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(0);
	push32(1);
	eax = 0x5B; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(esp+esi*4+0x14); //mov
	edx = 0xAA; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40CCC6:
	edx = 0xFFFFFFFF; //mov
	cmp(ebp, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40CCDB;
	xor_(edx, edx);
	dl = to8i(byte_512DF5); //mov
loc_40CCDB:
	cmp(ebp, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40CCF4;
	cmp(to8i(byte_512DD1), (int8_t)0);
	if (jnz())
		goto loc_40CCF4;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
loc_40CCF4:
	cmp(ebp, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40CD0D;
	cmp(to8i(byte_512DD1), (int8_t)0);
	if (jnz())
		goto loc_40CD0D;
	xor_(edx, edx);
	dl = to8i(byte_512DDA); //mov
loc_40CD0D:
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40CD17;
	cmp(edx, (int32_t)0xC);
	if (jl())
		goto loc_40CD31;
loc_40CD17:
	add(esp, (int32_t)0x60);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40CD20:
	cmp(ebp, (int32_t)(intptr_t)off_4D3100);
	if (jz())
		goto loc_40CB42;
	goto loc_40CBF4;
loc_40CD31:
	push32(0);
	push32(1);
	eax = 0x58; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = to32i(esp+edx*4+0x38); //mov
	edx = 0xAA; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(esp, (int32_t)0x60);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40CD70()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC0);
	to32i(esp+0xB8) = eax; //mov
	to32i(esp+0xBC) = edx; //mov
	ebp = ebx; //mov
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)(esp+0x80); //lea
	esi = (int32_t)(intptr_t)off_409E10; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0x10; //mov
	edi = (int32_t)(intptr_t)(esp+0x40); //lea
	esi = (int32_t)(intptr_t)off_409E30; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0x10; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_409E70; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0xA0); //lea
	esi = (int32_t)(intptr_t)off_409EB0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(eax, (int32_t)(intptr_t)off_4D2A20);
	if (jz())
		goto loc_40CF46;
	cmp(eax, (int32_t)(intptr_t)off_4D3050);
	if (jz())
		goto loc_40CDEB;
	cmp(eax, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40D026;
loc_40CDEB:
	eax = 0xFF000000; //mov
	ecx = 0x80; //mov
	ebx = 0x118; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	edx = ebp; //mov
	push32(eax);
	eax = to32i(esp+0xC0); //mov
	edi = to32i(esp+0xBC); //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	cmp(edi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40CFF0;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
loc_40CE28:
	to16i(dword_4E5928) = ax; //mov
	cmp(to8i(byte_512DD1), (int8_t)0);
	if (jz())
		goto loc_40CFFC;
	cmp(to16i(dword_4E5928), (int16_t)0xB);
	if (jg())
		goto loc_40CFFC;
	ebx = to32i(esp+0xBC); //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aGrph; //mov
	ecx = ebp; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4E5924+2); //mov
	sar(eax, (int32_t)0x10);
	esi = 0xC; //mov
	sub(esi, to32i(dword_4D236C+eax*4));
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	esi = to32i(esp+0xBC); //mov
	add(esi, (int32_t)0x1A);
	ecx = (int32_t)(intptr_t)(ebp+0xB); //lea
	ebx = esi; //mov
	edx = 0x3000; //mov
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)aGrpg; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4E5924+2); //mov
	sar(eax, (int32_t)0x10);
	ecx = 0xC; //mov
	sub(ecx, to32i(dword_4D2330+eax*4));
	edx = (int32_t)(intptr_t)(ebp+0x29); //lea
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	ebx = esi; //mov
	add(eax, ecx);
	ecx = edx; //mov
	sub(ebx, eax);
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aGrpb; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4E5924+2); //mov
	sar(eax, (int32_t)0x10);
	ecx = 0xC; //mov
	sub(ecx, to32i(dword_4D23E4+eax*4));
	edx = (int32_t)(intptr_t)(ebp+0x47); //lea
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	ebx = esi; //mov
	add(eax, ecx);
	ecx = edx; //mov
	sub(ebx, eax);
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aGrpr; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4E5924+2); //mov
	ecx = (int32_t)(intptr_t)(ebp+0x65); //lea
	sar(eax, (int32_t)0x10);
	ebx = 0xC; //mov
	sub(ebx, to32i(dword_4D23A8+eax*4));
	eax = (int32_t)(intptr_t)(ebx*8+0); //lea
	add(eax, ebx);
	ebx = esi; //mov
	edx = 0x3000; //mov
	sub(ebx, eax);
	eax = (int32_t)(intptr_t)aGrpy; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40CF3B:
	add(esp, (int32_t)0xC0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_40CF46:
	eax = 0xFF000000; //mov
	ecx = 0x80; //mov
	ebx = 0x118; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = ebp; //mov
	eax = to32i(esp+0xC0); //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	to16i(dword_4E5928) = ax; //mov
	xor_(eax, eax);
	ebx = to32i(esp+0xBC); //mov
	al = to8i(byte_512DB0); //mov
	edx = 0x3000; //mov
	ecx = ebp; //mov
	eax = to32i(esp+eax*4+0x80); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40D0C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40CF3B;
	esi = to32i(esp+0xBC); //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aTrnm; //mov
	add(esi, (int32_t)0xB5);
	ecx = (int32_t)(intptr_t)(ebp+0x2D); //lea
	ebx = esi; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x3000; //mov
	al = to8i(byte_512DFB); //mov
	ecx = (int32_t)(intptr_t)(ebp+0xA); //lea
	ebx = esi; //mov
	eax = to32i(esp+eax*4+0xA0); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	add(esp, (int32_t)0xC0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_40CFF0:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	goto loc_40CE28;
loc_40CFFC:
	ebx = to32i(esp+0xBC); //mov
	eax = to32i(dword_4E5924+2); //mov
	edx = 0x3000; //mov
	sar(eax, (int32_t)0x10);
	ecx = ebp; //mov
	eax = to32i(esp+eax*4+0x40); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	add(esp, (int32_t)0xC0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_40D026:
	cmp(eax, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40CF3B;
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jz())
		goto loc_40CF3B;
	eax = 0xFF000000; //mov
	ecx = 0x80; //mov
	ebx = 0x118; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = ebp; //mov
	eax = to32i(esp+0xC0); //mov
	esp -= 4; _sub_488620(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(byte_512DF5); //mov
	to16i(dword_4E5928) = ax; //mov
	xor_(eax, eax);
	ebx = to32i(esp+0xBC); //mov
	al = to8i(byte_512DF5); //mov
	edx = 0x3000; //mov
	ecx = ebp; //mov
	eax = to32i(esp+eax*4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	add(esp, (int32_t)0xC0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_40D0C0()
{
	static const void *const off_40D0A0[] = {
		&&loc_40D0E1,
		&&loc_40D102,
		&&loc_40D147,
		&&loc_40D119,
		&&loc_40D130,
		&&loc_40D15E,
		&&loc_40D175,
		&&loc_40D18C,
	};
	push32(ecx);
	push32(edx);
	ecx = to32i(dword_4D76B8); //mov
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40D0F5;
	test(ecx, ecx);
	if (jz())
		goto loc_40D0F5;
	cmp(eax, (int32_t)7);
	if (ja())
		goto loc_40D0EA;
	goto *off_40D0A0[eax];
loc_40D0E1:
	edx = to32i(ecx+0x2C4); //mov
	and_(edx, (int32_t)1);
loc_40D0EA:
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D0F5:
	xor_(edx, edx);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D102:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x1E);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D119:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x1D);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D130:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x1C);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D147:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x1B);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D15E:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x1A);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D175:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x19);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_40D18C:
	edx = to32i(ecx+0x2C4); //mov
	shl(edx, (int32_t)0x18);
	shr(edx, (int32_t)0x1F);
	eax = edx; //mov
	to32i(dword_4D76B8) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_40D1B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	xor_(ebp, ebp);
	cmp(eax, (int32_t)(intptr_t)off_4D3204);
	if (jnz())
		goto loc_40D1D0;
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jz())
		goto loc_40D2DE;
loc_40D1D0:
	eax = to32i(dword_4E5924+2); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp) = eax; //mov
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40D1EE;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	to32i(esp+4) = eax; //mov
loc_40D1EE:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40D201;
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	to32i(esp+4) = eax; //mov
loc_40D201:
	edx = 0x7D0; //mov
	eax = 1; //mov
	ecx = esi; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_40B6C4(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_427ED0(); esp += 4; //call
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40D22B;
	al = to8i(esp); //mov
	to8i(byte_512DBF) = al; //mov
loc_40D22B:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jz())
		goto loc_40D382;
loc_40D237:
	edx = 0x7F; //mov
	eax = 4; //mov
	edi = 0xFFFFFFE3; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_40D24B:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	eax = ebp; //mov
	inc(ebp);
	cmp(eax, (int32_t)2);
	if (jge())
		goto loc_40D38F;
	esp -= 4; _sub_49769C(); esp += 4; //call
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
	ebx = 1; //mov
	eax = esi; //mov
	xor_(edx, edx);
	to32i(dword_4D20A0) = ebx; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40CB00(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D20A0) = eax; //mov
	eax = to32i(byte_4D3ECC); //mov
	xor_(edx, edx);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_4276F0(); esp += 4; //call
	to32i(dword_4D2314) = eax; //mov
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_40D2C3:
	add(edi, (int32_t)0xC);
	esp -= 4; _sub_4976B8(); esp += 4; //call
	cmp(edi, (int32_t)0xDF);
	if (jnz())
		goto loc_40D24B;
loc_40D2DE:
	xor_(eax, eax);
	edx = 0x400; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ecx, ecx);
	eax = to32i(dword_4D4D24); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = (int32_t)(intptr_t)aBlk4; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	ebx = 0x13C; //mov
	edx = 0xD3; //mov
	eax = esi; //mov
	esp -= 4; _sub_40CD70(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	eax = to32i(dword_4D231C+eax*4); //mov
	edx = 0x2800; //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_4D4D24); //mov
	to32i(dword_4EB588) = edx; //mov
	eax = to32i(eax+0x20); //mov
	edx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	cmp(esi, (int32_t)(intptr_t)off_4D3050);
	if (jnz())
		goto loc_40D363;
	al = to8i(esp+4); //mov
	to8i(byte_512DBF) = al; //mov
loc_40D363:
	cmp(esi, (int32_t)(intptr_t)off_4D3100);
	if (jnz())
		goto loc_40D374;
	al = to8i(esp+4); //mov
	to8i(byte_512DDA) = al; //mov
loc_40D374:
	esp -= 4; _sub_486F28(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40D382:
	al = to8i(esp); //mov
	to8i(byte_512DDA) = al; //mov
	goto loc_40D237;
loc_40D38F:
	edx = 0x13C; //mov
	eax = edi; //mov
	ecx = 0x20; //mov
	esp -= 4; _sub_4279E0(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0xFFFFFFFF);
	xor_(edx, edx);
	xor_(eax, eax);
	esp -= 4; _sub_427B30(); esp += 4; //call
	edx = 1; //mov
	eax = esi; //mov
	to32i(dword_4D20A0) = edx; //mov
	xor_(edx, edx);
	xor_(ecx, ecx);
	esp -= 4; _sub_40CB00(); esp += 4; //call
	to32i(dword_4D20A0) = ecx; //mov
	goto loc_40D2C3;
}
Fn(void) Game::_sub_40D3D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x128);
	esi = eax; //mov
	ah = to8i(byte_512ECC); //mov
	xor_(edx, edx);
	xor_(ebp, ebp);
	to32i(esp+0x11C) = edx; //mov
	to32i(esp+0x120) = edx; //mov
	test(ah, ah);
	if (jz())
		goto loc_40D401;
	to8i(byte_512DA9) = 4; //mov
loc_40D401:
	eax = 8; //mov
	xor_(ebx, ebx);
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	to32i(dword_4E5914) = ebx; //mov
	to32i(dword_4D2310) = ebx; //mov
	esp -= 4; _sub_4056A0(); esp += 4; //call
	eax = 0x4D00; //mov
	ebx = (int32_t)(intptr_t)(esp+0x108); //lea
	esp -= 4; _sub_40DEA0(); esp += 4; //call
	esp -= 4; _sub_40EB20(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x110); //lea
	esp -= 4; _sub_422060(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_4D231C); //mov
	to16i(word_4D231A) = dx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_40D46B;
	eax = 0x157; //mov
	edx = to32i(dword_4DAB80); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(dword_4D231C) = eax; //mov
loc_40D46B:
	cmp(to32i(dword_4D2320), (int32_t)0);
	if (jnz())
		goto loc_40D48B;
	eax = 0x157; //mov
	edx = to32i(dword_4DAB80); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(dword_4D2320) = eax; //mov
loc_40D48B:
	cmp(to32i(dword_4D2324), (int32_t)0);
	if (jnz())
		goto loc_40D4AB;
	eax = 0x280; //mov
	edx = to32i(dword_4DAB80); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_482474(); esp += 4; //call
	to32i(dword_4D2324) = eax; //mov
loc_40D4AB:
	eax = esi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	cmp(to32i(dword_4D21AC), (int32_t)0);
	if (jnz())
		goto loc_40D4D6;
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	edi = 1; //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	to32i(dword_4D21AC) = edi; //mov
loc_40D4D6:
	edx = (int32_t)(intptr_t)aSide; //mov
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	xor_(ebx, ebx);
	eax = to32i(eax+2); //mov
	edx = to32i(dword_4DAB80); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_482474(); esp += 4; //call
	edx = 1; //mov
	to32i(esp+0x118) = eax; //mov
	to32i(esp+0x114) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	eax = to32i(esp+0x118); //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	xor_(ecx, ecx);
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ebx, ebx);
	edx = 0x400; //mov
	eax = to32i(eax+0x20); //mov
	xor_(edi, edi);
	esp -= 4; _sub_405B60(); esp += 4; //call
	ebx = 1; //mov
	cx = to16i(word_4D232C); //mov
	to32i(esp+0x124) = ebx; //mov
	test(cx, cx);
	if (jz())
		goto loc_40D63E;
	xor_(eax, eax);
	to16i(word_4D232C) = ax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 0xFF000000; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = 0xFF000000; //mov
	edx = (int32_t)(intptr_t)aBlk6; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	esp -= 4; _sub_482740(); esp += 4; //call
	eax = to32i(dword_4D40B8); //mov
	esp -= 4; _sub_482EB4(); esp += 4; //call
	edx = 1; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	eax = to32i(esp+0x118); //mov
	ebx = 1; //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_428250(); esp += 4; //call
	xor_(eax, eax);
	edx = 0xE6; //mov
	esp -= 4; _sub_427450(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_427320(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	cmp(to8i(byte_512F3F), (int8_t)0);
	if (jz())
		goto loc_40D63E;
	esp -= 4; _sub_476BB0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40D63E;
	eax = to32i(dword_4D4D24); //mov
	edx = 0x400; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x2800; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = 0x30C; //mov
	xor_(bl, bl);
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to8i(byte_512F3F) = bl; //mov
loc_40D63E:
	eax = to32i(dword_4D4D24); //mov
	edx = 0x400; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x2800; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4EB588) = eax; //mov
	eax = to32i(dword_4D4D24); //mov
	edx = 1; //mov
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	xor_(edx, edx);
	ecx = 1; //mov
	to32i(dword_4D2420) = edx; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	to32i(dword_4D2310) = ecx; //mov
	test(edi, edi);
	if (jnz())
		goto loc_40D9F2;
loc_40D6B7:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ebx = to32i(dword_4E5914); //mov
	edx = (int32_t)(intptr_t)(esp+0x104); //lea
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(esp+0x110); //lea
	to32i(dword_4E5914) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x10C); //lea
	esp -= 4; _sub_422060(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	cmp(eax, to32i(esp+0x100));
	if (jz())
		goto loc_40DAAA;
loc_40D6FF:
	ebp = to32i(dword_4E5914); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
loc_40D70A:
	cmp(to16i(esp+0x124), (int16_t)0);
	if (jnz())
		goto loc_40D722;
	cmp(to32i(dword_4D2314), (int32_t)0);
	if (jz())
		goto loc_40DAC3;
loc_40D722:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40DAD8;
	eax = to32i(dword_4E5914); //mov
	sub(eax, ebp);
	cmp(eax, (int32_t)0xC80);
	if (jle())
		goto loc_40DAD8;
	esp -= 4; _sub_4056B0(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_476250(); esp += 4; //call
	eax = to32i(dword_4D2328); //mov
	push32(eax);
	push32(aDemoav);
	push32(aSD_dct);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	xor_(ebp, ebp);
	push32(eax);
	to32i(dword_4D2310) = ebp; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	eax = esp; //mov
	esp -= 4; _sub_4242F0(); esp += 4; //call
	edx = to32i(dword_4D2328); //mov
	inc(edx);
	to32i(dword_4D2328) = edx; //mov
	cmp(edx, (int32_t)3);
	if (jl())
		goto loc_40D794;
	to32i(dword_4D2328) = ebp; //mov
loc_40D794:
	esp -= 4; _sub_4769D0(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	esp -= 4; _sub_4057C0(); esp += 4; //call
	xor_(ebp, ebp);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = esi; //mov
	edx = 1; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	esp -= 4; _sub_408450(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	to32i(dword_4E5914) = ebp; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	to32i(dword_4D2310) = edx; //mov
	esp -= 4; _sub_4825A8(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x2800; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	esp -= 4; _sub_4824BC(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	edx = 1; //mov
	eax = to32i(eax+0x20); //mov
	to32i(dword_4EB588) = ebp; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
loc_40D82F:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x108); //lea
	edx = (int32_t)(intptr_t)(esp+0x100); //lea
	eax = (int32_t)(intptr_t)(esp+0x110); //lea
	esp -= 4; _sub_422060(); esp += 4; //call
	ecx = esi; //mov
	ebx = 1; //mov
	edx = 0x7D0; //mov
	eax = ebx; //mov
	esp -= 4; _sub_40B6C4(); esp += 4; //call
loc_40D861:
	push32(2);
	esp -= 4; _sub_497680(); esp += 4; //call
	esp -= 4; _sub_49769C(); esp += 4; //call
	xor_(ebx, ebx);
	push32(0xFFFFFFFF);
	ecx = 0x20; //mov
	eax = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427B30(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40DC40(); esp += 4; //call
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
	esp -= 4; _sub_4976B8(); esp += 4; //call
	push32(0);
	esp -= 4; _sub_4976C8(); esp += 4; //call
	cmp(to16i(word_51345C), (int16_t)0);
	if (jz())
		goto loc_40D8D3;
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x300; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(eax, eax);
	to16i(word_51345C) = ax; //mov
loc_40D8D3:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_40D8FF;
	ebx = (int32_t)(intptr_t)aCNfs2seFront_2; //mov
	eax = 0x283; //mov
	push32(aBugUserDidNotG);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_40D8FF:
	eax = esi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	to32i(esp+0x124) = eax; //mov
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	ebx = eax; //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ecx = to32i(dword_4E5914); //mov
	add(ecx, eax);
	to32i(dword_4E5914) = ecx; //mov
	test(dx, dx);
	if (jz())
		goto loc_40DAEC;
	cmp(ecx, to32i(esp+0x11C));
	if (jle())
		goto loc_40DAEC;
loc_40D93F:
	eax = to32i(dword_4E5914); //mov
	ecx = 1; //mov
	add(eax, (int32_t)0xF);
	edx = bx; //movsx
	to32i(esp+0x11C) = eax; //mov
	eax = esi; //mov
	to32i(esp+0x124) = ecx; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	edi = eax; //mov
	cmp(bx, (int16_t)0x4B00);
	if (jnz())
		goto loc_40DB04;
loc_40D971:
	edx = to32i(esi+8); //mov
	eax = bx; //movsx
	sar(edx, (int32_t)0x10);
	esp -= 4; _sub_40DC90(); esp += 4; //call
loc_40D97F:
	cmp(edi, (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_40DB14;
loc_40D988:
	eax = 0x10; //mov
	esp -= 4; _sub_486550(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40D9C5;
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40DB22;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_40DB22;
	push32(0x2ED);
loc_40D9B5:
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jnz())
		goto loc_40D9C5;
	xor_(edi, edi);
loc_40D9C5:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	ebp = to32i(dword_4E5914); //mov
	add(ebp, eax);
	to16i(dword_4E5928+2) = bx; //mov
	to32i(dword_4E5914) = ebp; //mov
loc_40D9DF:
	cmp(to32i(esp+0x120), (int32_t)0);
	if (jz())
		goto loc_40DB2C;
	edi = 0xFFFFFFFD; //mov
loc_40D9F2:
	eax = 1; //mov
	ebx = to32i(esp+0x114); //mov
	xor_(ecx, ecx);
	to16i(dword_4E5924+2) = ax; //mov
	to32i(dword_4D2310) = ecx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40DA17;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_40DA17:
	cmp(edi, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40DB57;
	ch = to8i(byte_512DA9); //mov
	test(ch, ch);
	if (jz())
		goto loc_40DB57;
	cmp(ch, (int8_t)1);
	if (jz())
		goto loc_40DB57;
	xor_(edi, edi);
loc_40DA39:
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_40BBE0(); esp += 4; //call
loc_40DA45:
	cmp(edi, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40DA60;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_40DA60;
	xor_(dh, dh);
	to8i(byte_512DB0) = dh; //mov
	esp -= 4; _sub_41A450(); esp += 4; //call
loc_40DA60:
	cmp(edi, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40DC26;
	cmp(to32i(dword_4D96B0), (int32_t)0);
	if (jz())
		goto loc_40DC0B;
	push32(0x40);
	ecx = 0x7F; //mov
	edx = 6; //mov
	eax = to32i(dword_50B410); //mov
	xor_(ebx, ebx);
loc_40DA89:
	esp -= 4; _sub_442280(); esp += 4; //call
	edx = eax; //mov
	xor_(ebx, ebx);
loc_40DA92:
	eax = edx; //mov
	esp -= 4; _sub_486040(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40DC26;
	eax = ebx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_40DA92;
loc_40DAAA:
	eax = to32i(esp+0x10C); //mov
	cmp(eax, to32i(esp+0x108));
	if (jnz())
		goto loc_40D6FF;
	goto loc_40D70A;
loc_40DAC3:
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	to32i(esp+0x124) = eax; //mov
	goto loc_40D722;
loc_40DAD8:
	cmp(to16i(esp+0x124), (int16_t)0);
	if (jnz())
		goto loc_40D82F;
	goto loc_40D861;
loc_40DAEC:
	eax = to32i(dword_4E5928); //mov
	edx = bx; //movsx
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_40D93F;
	goto loc_40D9DF;
loc_40DB04:
	cmp(bx, (int16_t)0x4D00);
	if (jz())
		goto loc_40D971;
	goto loc_40D97F;
loc_40DB14:
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40D988;
	goto loc_40D9C5;
loc_40DB22:
	push32(0x309);
	goto loc_40D9B5;
loc_40DB2C:
	cmp(edi, (int32_t)0xFFFFFFFB);
	if (jnz())
		goto loc_40DB4A;
	edx = 1; //mov
	to16i(esi+0xA) = 4; //mov
	xor_(edi, edi);
	to32i(esp+0x120) = edx; //mov
	goto loc_40D6B7;
loc_40DB4A:
	test(edi, edi);
	if (jz())
		goto loc_40D6B7;
	goto loc_40D9F2;
loc_40DB57:
	cmp(edi, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40DBF6;
loc_40DB60:
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D231C+eax*4); //mov
	ecx = 1; //mov
	xor_(edx, edx);
	eax = to32i(eax+0x20); //mov
	ebx = ecx; //mov
	esp -= 4; _sub_428250(); esp += 4; //call
	eax = 0xE6; //mov
	xor_(edx, edx);
	esp -= 4; _sub_427280(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_4273B0(); esp += 4; //call
loc_40DB93:
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40DC01;
loc_40DB98:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40DA45;
	esi = to32i(dword_4D231C); //mov
	test(esi, esi);
	if (jz())
		goto loc_40DBBE;
	eax = esi; //mov
	xor_(ebp, ebp);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D231C) = ebp; //mov
loc_40DBBE:
	eax = to32i(dword_4D2320); //mov
	test(eax, eax);
	if (jz())
		goto loc_40DBD4;
	xor_(edx, edx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D2320) = edx; //mov
loc_40DBD4:
	ecx = to32i(dword_4D2324); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_40DA45;
	eax = ecx; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D2324) = ebx; //mov
	goto loc_40DA45;
loc_40DBF6:
	cmp(edi, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_40DB60;
	goto loc_40DB93;
loc_40DC01:
	cmp(edi, (int32_t)0xFFFFFFFD);
	if (jz())
		goto loc_40DB98;
	goto loc_40DA39;
loc_40DC0B:
	push32(0x40);
	ecx = 0x7F; //mov
	ebx = 0x40; //mov
	edx = 6; //mov
	eax = to32i(dword_50B410); //mov
	goto loc_40DA89;
loc_40DC26:
	eax = 6; //mov
	esp -= 4; _sub_4056A0(); esp += 4; //call
	eax = edi; //mov
	add(esp, (int32_t)0x128);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DC40()
{
	push32(ebx);
	push32(edx);
	edx = eax; //mov
	to32i(dword_4D20A0) = 1; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(edx+8); //mov
	sar(eax, (int32_t)0x10);
	xor_(ebx, ebx);
	esp -= 4; _sub_40DDD0(); esp += 4; //call
	eax = to32i(byte_4D3ECC); //mov
	edx = to32i(dword_4E5914); //mov
	sar(eax, (int32_t)0x10);
	to32i(dword_4D20A0) = ebx; //mov
	esp -= 4; _sub_4276F0(); esp += 4; //call
	to32i(dword_4D2314) = eax; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DC90()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	ecx = edx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_40DCAE;
	cmp(eax, (int32_t)0x4B00);
	if (jnz())
		goto loc_40DCE7;
	eax = to32i(off_4D2424); //mov
	esp -= 4; _sub_40DD20(); esp += 4; //call
loc_40DCAC:
	esi = eax; //mov
loc_40DCAE:
	test(ecx, ecx);
	if (jz())
		goto loc_40DCF3;
loc_40DCB2:
	inc(ecx);
	cmp(ecx, (int32_t)6);
	if (jge())
		goto loc_40DCD4;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
	cmp(ebx, (int32_t)0x4B00);
	if (jnz())
		goto loc_40DCF9;
	edx = ecx; //mov
	eax = to32i(off_4D2424+eax); //mov
	esp -= 4; _sub_40DD20(); esp += 4; //call
loc_40DCD4:
	eax = ebx; //mov
	esp -= 4; _sub_40DEA0(); esp += 4; //call
loc_40DCDB:
	xor_(edx, edx);
	to32i(dword_4E5914) = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DCE7:
	eax = to32i(off_4D2424); //mov
	esp -= 4; _sub_40DD80(); esp += 4; //call
	goto loc_40DCAC;
loc_40DCF3:
	test(esi, esi);
	if (jnz())
		goto loc_40DCB2;
	goto loc_40DCDB;
loc_40DCF9:
	edx = ecx; //mov
	eax = to32i(off_4D2424+eax); //mov
	esp -= 4; _sub_40DD80(); esp += 4; //call
	eax = ebx; //mov
	esp -= 4; _sub_40DEA0(); esp += 4; //call
	xor_(edx, edx);
	to32i(dword_4E5914) = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DD20()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_410E10(); esp += 4; //call
	xor_(ebx, ebx);
	test(eax, eax);
	if (jz())
		goto loc_40DD69;
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_40DD55;
loc_40DD34:
	eax = to32i(ecx+0xC); //mov
	dl = to8i(eax); //mov
	test(dl, dl);
	if (jnz())
		goto loc_40DD63;
loc_40DD3D:
	eax = to32i(ecx+0xC); //mov
	xor_(ebx, ebx);
	edx = to32i(ecx+0x10); //mov
	bl = to8i(eax); //mov
	cmp(to16i(edx+ebx*2+2), (int16_t)0);
	if (jz())
		goto loc_40DD6E;
	inc(bl);
	to8i(eax) = bl; //mov
	goto loc_40DD3D;
loc_40DD55:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	goto loc_40DD34;
loc_40DD63:
	dh = dl; //mov
	dec(dh);
	to8i(eax) = dh; //mov
loc_40DD69:
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DD6E:
	ebx = 1; //mov
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DD80()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_410E10(); esp += 4; //call
	xor_(ebx, ebx);
	test(eax, eax);
	if (jz())
		goto loc_40DDAA;
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_40DDAF;
loc_40DD94:
	eax = to32i(ecx+0xC); //mov
	inc(to8i(eax));
	eax = to32i(ecx+0xC); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	ecx = to32i(ecx+0x10); //mov
	cmp(to16i(ecx+edx*2), (int16_t)0);
	if (jz())
		goto loc_40DDBD;
loc_40DDAA:
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DDAF:
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	goto loc_40DD94;
loc_40DDBD:
	ebx = 1; //mov
	to8i(eax) = 0; //mov
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DDD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	esi = (int32_t)(intptr_t)(eax+1); //lea
	cmp(esi, (int32_t)1);
	if (jz())
		goto loc_40DDE8;
	cmp(esi, (int32_t)2);
	if (jz())
		goto loc_40DE5A;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DDE8:
	eax = to32i(off_4D2424); //mov
	push32(4);
	edx = to32i(eax+0xC); //mov
	push32(3);
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	eax = to32i(eax+0x10); //mov
	ecx = 0xD; //mov
	ebx = 0x49; //mov
	eax = to16i(eax+edx*2); //movsx
	edx = 0x23A; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(off_4D2428); //mov
	push32(4);
	edx = to32i(eax+0xC); //mov
	push32(4);
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	eax = to32i(eax+0x10); //mov
	ecx = 0xD; //mov
	ebx = 0x49; //mov
	eax = to16i(eax+edx*2); //movsx
	edx = 0x230; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	cmp(esi, (int32_t)2);
	if (jz())
		goto loc_40DE5A;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DE5A:
	eax = to32i(off_4D2424+esi*4); //mov
	push32(4);
	edx = to32i(eax+0xC); //mov
	push32(5);
	dl = to8i(edx); //mov
	and_(edx, (int32_t)0xFF);
	eax = to32i(eax+0x10); //mov
	ecx = 0xD; //mov
	ebx = 0xB5; //mov
	eax = to16i(eax+edx*2); //movsx
	edx = 0x23E; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40DEA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(edx, edx);
	dl = to8i(byte_512DB0); //mov
	cmp(eax, (int32_t)0x4B00);
	if (jnz())
		goto loc_40DEEE;
	ch = 6; //mov
loc_40DEB4:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40D0C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40DEDF;
	cl = to8i(byte_512DB0); //mov
	test(cl, cl);
	if (jnz())
		goto loc_40DEE3;
	to8i(byte_512DB0) = ch; //mov
loc_40DED4:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_40DEB4;
loc_40DEDF:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40DEE3:
	al = cl; //mov
	dec(al);
	to8i(byte_512DB0) = al; //mov
	goto loc_40DED4;
loc_40DEEE:
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	esp -= 4; _sub_40D0C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40DEDF;
	ah = to8i(byte_512DB0); //mov
	inc(ah);
	to8i(byte_512DB0) = ah; //mov
	cmp(ah, (int8_t)7);
	if (jnb())
		goto loc_40DF1E;
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_40DEDF;
	goto loc_40DEEE;
loc_40DF1E:
	xor_(bh, bh);
	to8i(byte_512DB0) = bh; //mov
	xor_(eax, eax);
	al = to8i(byte_512DB0); //mov
	cmp(eax, edx);
	if (jz())
		goto loc_40DEDF;
	goto loc_40DEEE;
}
Fn(void) Game::_sub_40DF40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_40DF5B;
loc_40DF57:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_40DF5B:
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_463DC0(); esp += 4; //call
	eax = ax; //cwde
	ecx = to32i(edx+4); //mov
	cmp(eax, ecx);
	if (jz())
		goto loc_40DFC2;
	edi = ecx; //mov
	esi = edx; //mov
	shl(edi, (int32_t)5);
	ecx = 0x20; //mov
	add(edi, (int32_t)(intptr_t)dword_4E5940);
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
	ecx = 1; //mov
	eax = to32i(dword_4D7708); //mov
	to16i(dword_513428) = cx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_40DF57;
	ebx = 0x20; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_40DFC2:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_40DFD0()
{
	eax = to32i(dword_4D24E0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_40DFE5;
	return;
loc_40DFE5:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)byte_4E5A60; //mov
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
	ecx = 1; //mov
	ah = to8i(byte_4E5A61); //mov
	to16i(word_513426) = cx; //mov
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_40E02E;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_40E02E;
	to32i(dword_4D24E4) = 1; //mov
loc_40E02E:
	eax = to32i(dword_4D24E0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_40E040()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x20);
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	xor_(edx, edx);
	esp -= 4; _sub_463DC0(); esp += 4; //call
	to16i(ebp-0x14) = ax; //mov
	ah = to8i(byte_51345F); //mov
	to32i(ebp-0xC) = edx; //mov
	test(ah, ah);
	if (jnz())
		goto loc_40E157;
	eax = 2; //mov
loc_40E074:
	xor_(ebx, ebx);
	to16i(ebp-4) = ax; //mov
	to16i(ebp-8) = bx; //mov
	to32i(ebp-0x18) = ebx; //mov
loc_40E081:
	edx = to32i(ebp-6); //mov
	eax = to32i(ebp-0xA); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jge())
		goto loc_40E294;
	edx = to32i(ebp-0x16); //mov
	sar(edx, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_40E161;
	to16i(ebp-0x10) = 4; //mov
loc_40E0A9:
	cmp(to16i(ebp-4), (int16_t)2);
	if (jle())
		goto loc_40E16C;
	imul32(esi, to32i(ebp-8), 0x3B);
loc_40E0B8:
	add(esi, (int32_t)2);
	eax = to32i(ebp-0xA); //mov
	sar(eax, (int32_t)0x10);
	ecx = (int32_t)(intptr_t)(eax+eax); //lea
	dx = to16i(dword_51340C+2+ecx); //mov
	edi = eax; //mov
	edx = dx; //movsx
	shl(edi, (int32_t)5);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40E174;
	cmp(eax, to32i(dword_4E5944+edi));
	if (jnz())
		goto loc_40E10D;
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_51340C+ecx); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jnz())
		goto loc_40E103;
	xor_(eax, edx);
	to32i(dword_4E5944+edi) = eax; //mov
loc_40E103:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_40E10D:
	eax = esi; //mov
	edx = 0x10E; //mov
	inc(eax);
	xor_(ecx, ecx);
	ebx = ax; //movsx
	eax = 0x98; //mov
	esp -= 4; _sub_405580(); esp += 4; //call
	ebx = 0xF6; //mov
	edx = 0x3000; //mov
	ecx = si; //movsx
	eax = (int32_t)(intptr_t)aDark; //mov
loc_40E136:
	add(ecx, (int32_t)8);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_40E13E:
	esi = to32i(ebp-8); //mov
	ecx = to32i(ebp-0x18); //mov
	inc(esi);
	add(ecx, (int32_t)0xEC);
	to16i(ebp-8) = si; //mov
	to32i(ebp-0x18) = ecx; //mov
	goto loc_40E081;
loc_40E157:
	eax = 8; //mov
	goto loc_40E074;
loc_40E161:
	to16i(ebp-0x10) = 2; //mov
	goto loc_40E0A9;
loc_40E16C:
	esi = to32i(ebp-0x18); //mov
	goto loc_40E0B8;
loc_40E174:
	cmp(eax, to32i(dword_4E5944+edi));
	if (jz())
		goto loc_40E1B7;
	ebx = 0xF6; //mov
	edx = 0x3000; //mov
	edi = si; //movsx
	eax = (int32_t)(intptr_t)aWait; //mov
	ecx = (int32_t)(intptr_t)(edi+8); //lea
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(ebp-0x12); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	ecx = 0x12; //mov
	edx = 0x10E; //mov
	push32(3);
	ebx = edi; //mov
	eax = (int32_t)(intptr_t)a___; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	goto loc_40E13E;
loc_40E1B7:
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(ebp-0x12); //mov
	sar(eax, (int32_t)0x10);
	ecx = 0x12; //mov
	to32i(ebp-0x20) = eax; //mov
	push32(eax);
	eax = si; //movsx
	edx = 0x10E; //mov
	to32i(ebp-0x1C) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4E5940; //mov
	push32(3);
	add(eax, edi);
	ebx = to32i(ebp-0x1C); //mov
	add(eax, (int32_t)9);
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(ebp-0x20); //mov
	ecx = 0x12; //mov
	push32(eax);
	xor_(eax, eax);
	ebx = to32i(ebp-0x1C); //mov
	al = (int32_t)(intptr_t)byte_4E5952[edi]; //mov
	push32(3);
	add(eax, (int32_t)0x60);
	edx = 0x1A4; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = to32i(ebp-0x20); //mov
	ecx = 0x12; //mov
	push32(edx);
	ebx = to32i(ebp-0x1C); //mov
	al = (int32_t)(intptr_t)byte_4E5953[edi]; //mov
	push32(3);
	edx = 0x235; //mov
	test(al, al);
	if (jnz())
		goto loc_40E279;
	eax = 1; //mov
loc_40E239:
	add(eax, (int32_t)0x5E);
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	eax = to32i(dword_4D7708); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(ebp-0xA); //mov
	sar(eax, (int32_t)0x10);
	shl(eax, (int32_t)5);
	cmp(byte_4E5948[eax], (int8_t)0);
	if (jz())
		goto loc_40E27D;
	ebx = 0xF6; //mov
	edx = 0x3000; //mov
	ecx = si; //movsx
	eax = (int32_t)(intptr_t)aRedy; //mov
	goto loc_40E136;
loc_40E279:
	xor_(eax, eax);
	goto loc_40E239;
loc_40E27D:
	ebx = 0xF6; //mov
	edx = 0x3000; //mov
	ecx = si; //movsx
	eax = (int32_t)(intptr_t)aWait; //mov
	goto loc_40E136;
loc_40E294:
	xor_(edx, edx);
	si = to16i(dword_513408+2); //mov
	to32i(dword_4D24DC) = edx; //mov
	cmp(si, (int16_t)2);
	if (jl())
		goto loc_40E2CB;
	xor_(edx, edx);
	xor_(ecx, ecx);
loc_40E2AD:
	ebx = to32i(dword_513408); //mov
	eax = dx; //movsx
	sar(ebx, (int32_t)0x10);
	cmp(eax, ebx);
	if (jge())
		goto loc_40E317;
	esp -= 4; _sub_463DC0(); esp += 4; //call
	eax = ax; //cwde
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40E308;
loc_40E2C8:
	inc(edx);
	goto loc_40E2AD;
loc_40E2CB:
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aRedd; //mov
loc_40E2D5:
	xor_(ecx, ecx);
loc_40E2D7:
	xor_(ebx, ebx);
loc_40E2D9:
	esp -= 4; _sub_405B30(); esp += 4; //call
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aLogo; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_4211E0(); esp += 4; //call
	cmp(to16i(ebp-0xC), (int16_t)0);
	if (jnz())
		goto loc_40E35D;
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40E308:
	shl(eax, (int32_t)5);
	cmp(byte_4E5948[eax], (int8_t)0);
	if (jz())
		goto loc_40E2C8;
	inc(ecx);
	goto loc_40E2C8;
loc_40E317:
	test(ecx, ecx);
	if (jz())
		goto loc_40E32B;
	cmp(ecx, ebx);
	if (jge())
		goto loc_40E337;
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aYell; //mov
	goto loc_40E2D5;
loc_40E32B:
	edx = 0x2800; //mov
	eax = (int32_t)(intptr_t)aRedd; //mov
	goto loc_40E2D7;
loc_40E337:
	edx = 1; //mov
	edi = 1; //mov
	eax = (int32_t)(intptr_t)aGren; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(dword_4D24DC) = edx; //mov
	edx = 0x2800; //mov
	to32i(ebp-0xC) = edi; //mov
	goto loc_40E2D9;
loc_40E35D:
	eax = 0x305; //mov
	esp -= 4; _sub_402E10(); esp += 4; //call
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40E370()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	xor_(eax, eax);
loc_40E375:
	add(eax, (int32_t)0x20);
	xor_(dl, dl);
	dword_4E5928[eax] = dl; //mov
	xor_(edx, edx);
	to32i(dword_4E5924+eax) = edx; //mov
	cmp(eax, (int32_t)0x100);
	if (jnz())
		goto loc_40E375;
	esp -= 4; _sub_420FC0(); esp += 4; //call
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jz())
		goto loc_40E3CF;
loc_40E39D:
	bh = to8i(byte_512F42); //mov
	cmp(bh, (int8_t)0xE);
	if (jbe())
		goto loc_40E3DE;
	xor_(dl, dl);
	to8i(byte_512DF6) = dl; //mov
loc_40E3B0:
	cmp(to32i(dword_4D24E4), (int32_t)0);
	if (jz())
		goto loc_40E3CB;
	xor_(ebx, ebx);
	esi = to32i(dword_4D76B8); //mov
	to32i(dword_4D24E4) = ebx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_40E40B;
loc_40E3CB:
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_40E3CF:
	xor_(bl, bl);
	to8i(byte_512DB0) = bl; //mov
	esp -= 4; _sub_41A450(); esp += 4; //call
	goto loc_40E39D;
loc_40E3DE:
	cmp(bh, (int8_t)0xC);
	if (jb())
		goto loc_40E3F8;
	cmp(bh, (int8_t)0xE);
	if (ja())
		goto loc_40E3F8;
	ah = 2; //mov
	to8i(byte_512DF5) = bh; //mov
	to8i(byte_512DF6) = ah; //mov
	goto loc_40E3B0;
loc_40E3F8:
	al = to8i(byte_512F42); //mov
	to8i(byte_512DF5) = al; //mov
	to8i(byte_512DF6) = 2; //mov
	goto loc_40E3B0;
loc_40E40B:
	esp -= 4; _sub_41A350(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_40E420()
{
	push32(ebx);
	push32(edx);
	push32(edi);
	push32(ebp);
	cmp(to16i(dword_513408+2), (int16_t)2);
	if (jl())
		goto loc_40E519;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_40E50B;
	xor_(ebx, ebx);
loc_40E442:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	cmp(ebx, eax);
	if (jl())
		goto loc_40E4E1;
	to32i(dword_4DA1B8) = 1; //mov
	esp -= 4; _sub_47DCF0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_40E501;
loc_40E469:
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_40E520;
loc_40E477:
	esp -= 4; _sub_40E6B0(); esp += 4; //call
	xor_(edx, edx);
loc_40E47E:
	add(edx, (int32_t)2);
	xor_(edi, edi);
	to16i(word_513446+edx) = di; //mov
	cmp(edx, (int32_t)0x10);
	if (jnz())
		goto loc_40E47E;
	push32(esi);
	push32(ecx);
	edx = 1; //mov
	eax = 0x1400; //mov
	ebp = (int32_t)(intptr_t)byte_512E84; //mov
	esp -= 4; _sub_463930(); esp += 4; //call
	edx = 1; //mov
	eax = 0xA00; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_463930(); esp += 4; //call
	xor_(edx, edx);
loc_40E4B8:
	eax = to32i(dword_513408); //mov
	sar(eax, (int32_t)0x10);
	cmp(ebx, eax);
	if (jge())
		goto loc_40E611;
	eax = bx; //movsx
	esp -= 4; _sub_463DC0(); esp += 4; //call
	ecx = ax; //movsx
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40E537;
	add(ebp, (int32_t)9);
	inc(ebx);
	add(edx, (int32_t)2);
	goto loc_40E4B8;
loc_40E4E1:
	eax = bx; //movsx
	esp -= 4; _sub_463DC0(); esp += 4; //call
	eax = ax; //cwde
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40E519;
	shl(eax, (int32_t)5);
	cmp(byte_4E5948[eax], (int8_t)0);
	if (jz())
		goto loc_40E519;
	inc(ebx);
	goto loc_40E442;
loc_40E501:
	to32i(dword_4DA1B8) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_40E50B:
	cmp(to16i(dword_513428+2), (int16_t)1);
	if (jz())
		goto loc_40E469;
loc_40E519:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ebx);
	return;
loc_40E520:
	esp -= 4; _sub_47E360(); esp += 4; //call
	xor_(ebx, ebx);
	esp -= 4; _sub_40E620(); esp += 4; //call
	to32i(dword_4DA1B8) = ebx; //mov
	goto loc_40E477;
loc_40E537:
	esi = (int32_t)(intptr_t)dword_4E5940; //mov
	shl(ecx, (int32_t)5);
	add(esi, ecx);
	edi = ebp; //mov
	add(esi, (int32_t)9);
	push32(edi);
loc_40E547:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40E55F;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40E547;
loc_40E55F:
	pop32(edi);
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5952[ecx]; //mov
	to16i(dword_512F98+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5953[ecx]; //mov
	to16i(dword_512FA8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5954[ecx]; //mov
	to16i(dword_512FB8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E595A[ecx]; //mov
	to16i(dword_512FC8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5958[ecx]; //mov
	to16i(dword_512FD8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5959[ecx]; //mov
	to16i(dword_512FE8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E595C[ecx]; //mov
	to16i(dword_512FF8+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E595B[ecx]; //mov
	to16i(dword_513008+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5955[ecx]; //mov
	to16i(dword_513018+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5956[ecx]; //mov
	to16i(dword_513028+2+edx) = ax; //mov
	xor_(eax, eax);
	al = (int32_t)(intptr_t)byte_4E5957[ecx]; //mov
	to16i(word_51303A+edx) = ax; //mov
	add(ebp, (int32_t)9);
	inc(ebx);
	add(edx, (int32_t)2);
	goto loc_40E4B8;
loc_40E611:
	eax = 1; //mov
	pop32(ecx);
	pop32(esi);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_40E620()
{
	push32(ebx);
	push32(edx);
	to8i(byte_4E5A60) = 1; //mov
	al = to8i(byte_512DAA); //mov
	to8i(byte_4E5A61) = al; //mov
	al = to8i(byte_512DAB); //mov
	to8i(byte_4E5A62) = al; //mov
	al = to8i(byte_512DB0); //mov
	to8i(byte_4E5A63) = al; //mov
	al = to8i(byte_512F43); //mov
	to8i(byte_4E5A64) = al; //mov
	al = to8i(byte_512DB8); //mov
	to8i(byte_4E5A65) = al; //mov
	al = to8i(byte_512DB9); //mov
	to8i(byte_4E5A66) = al; //mov
	al = to8i(byte_512F42); //mov
	to8i(byte_4E5A67) = al; //mov
	al = to8i(byte_512DF8); //mov
	to8i(byte_4E5A68) = al; //mov
	al = to8i(byte_512DBB); //mov
	ebx = 0xC; //mov
	to8i(byte_4E5A69) = al; //mov
	ax = to16i(dword_512D9E+2); //mov
	edx = (int32_t)(intptr_t)byte_4E5A60; //mov
	to16i(word_4E5A6A) = ax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_464070(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_40E6B0()
{
	to8i(byte_4E5A40) = 2; //mov
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_463DC0(); esp += 4; //call
	eax = ax; //cwde
	to32i(dword_4E5A44) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40E6D0;
	return;
loc_40E6D0:
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	al = to8i(byte_512F45); //mov
	edi = (int32_t)(intptr_t)byte_4E5A49; //mov
	to8i(byte_4E5A48) = al; //mov
	push32(edi);
loc_40E6EA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40E702;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40E6EA;
loc_40E702:
	pop32(edi);
	al = to8i(byte_512DBF); //mov
	to8i(byte_4E5A52) = al; //mov
	al = to8i(byte_512DC0); //mov
	to8i(byte_4E5A53) = al; //mov
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	al = (int32_t)(intptr_t)byte_512DC1[eax]; //mov
	to8i(byte_4E5A54) = al; //mov
	al = to8i(byte_512DD6); //mov
	to8i(byte_4E5A55) = al; //mov
	al = to8i(byte_512DD8); //mov
	ecx = 0x20; //mov
	to8i(byte_4E5A56) = al; //mov
	al = to8i(byte_512DD9); //mov
	ebx = 0x20; //mov
	to8i(byte_4E5A57) = al; //mov
	al = to8i(byte_512DD3); //mov
	edx = (int32_t)(intptr_t)byte_4E5A40; //mov
	to8i(byte_4E5A58) = al; //mov
	al = to8i(byte_512DD4); //mov
	esi = (int32_t)(intptr_t)byte_4E5A40; //mov
	to8i(byte_4E5A59) = al; //mov
	al = to8i(byte_512DD2); //mov
	edi = to32i(dword_4E5A44); //mov
	to8i(byte_4E5A5A) = al; //mov
	al = to8i(byte_512DD7); //mov
	shl(edi, (int32_t)5);
	to8i(byte_4E5A5B) = al; //mov
	al = to8i(byte_512DD5); //mov
	add(edi, (int32_t)(intptr_t)dword_4E5940);
	to8i(byte_4E5A5C) = al; //mov
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
	esp -= 4; _sub_464070(); esp += 4; //call
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_40E7C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	esp -= 4; _sub_47E610(); esp += 4; //call
	esi = eax; //mov
	ebp = eax; //mov
	eax = to32i(dword_513408+2); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_463DC0(); esp += 4; //call
	edi = ax; //movsx
	xor_(ecx, ecx);
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40E883;
loc_40E7EC:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_40E811;
	al = to8i(byte_4E5A61); //mov
	cmp(al, to8i(byte_512DAA));
	if (jz())
		goto loc_40E909;
loc_40E807:
	esp -= 4; _sub_40E620(); esp += 4; //call
	ecx = 1; //mov
loc_40E811:
	cmp(to16i(word_513434), (int16_t)0);
	if (jz())
		goto loc_40E829;
	xor_(edi, edi);
	ecx = 1; //mov
	to16i(word_513434) = di; //mov
loc_40E829:
	eax = ebx; //mov
	xor_(edx, edx);
	esp -= 4; _sub_420FD0(); esp += 4; //call
	or_(ecx, eax);
	cmp(to16i(dword_513428), (int16_t)0);
	if (jz())
		goto loc_40E860;
	eax = to32i(dword_4D7708); //mov
	ecx = 1; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_4D7708); //mov
	to16i(dword_513428) = dx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_40E860:
	bx = to16i(word_513458); //mov
	test(bx, bx);
	if (jnz())
		goto loc_40E87A;
	cmp(to16i(word_513426), (int16_t)0);
	if (jnz())
		goto loc_40E9BD;
loc_40E87A:
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40E883:
	al = to8i(byte_4E5A52); //mov
	cmp(al, to8i(byte_512DBF));
	if (jnz())
		goto loc_40E8FA;
	dl = to8i(byte_512DC0); //mov
	cmp(dl, to8i(byte_4E5A53));
	if (jnz())
		goto loc_40E8FA;
	dh = to8i(byte_512F45); //mov
	cmp(dh, to8i(byte_4E5A48));
	if (jnz())
		goto loc_40E8FA;
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	eax = (int32_t)(intptr_t)byte_4E5A49; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40E8FA;
	test(esi, esi);
	if (jnz())
		goto loc_40E8FA;
	esi = edi; //mov
	shl(esi, (int32_t)5);
	al = (int32_t)(intptr_t)byte_4E5952[esi]; //mov
	cmp(al, to8i(byte_512DBF));
	if (jnz())
		goto loc_40E8FA;
	dl = to8i(byte_512DC0); //mov
	cmp(dl, (int8_t)byte_4E5953[esi]);
	if (jnz())
		goto loc_40E8FA;
	dh = to8i(byte_512F45); //mov
	cmp(dh, (int8_t)byte_4E5948[esi]);
	if (jz())
		goto loc_40E7EC;
loc_40E8FA:
	esp -= 4; _sub_40E6B0(); esp += 4; //call
	ecx = 1; //mov
	goto loc_40E7EC;
loc_40E909:
	dl = to8i(byte_512DAB); //mov
	cmp(dl, to8i(byte_4E5A62));
	if (jnz())
		goto loc_40E807;
	dh = to8i(byte_512DB0); //mov
	cmp(dh, to8i(byte_4E5A63));
	if (jnz())
		goto loc_40E807;
	al = to8i(byte_4E5A64); //mov
	cmp(al, to8i(byte_512F43));
	if (jnz())
		goto loc_40E807;
	dl = to8i(byte_512DB8); //mov
	cmp(dl, to8i(byte_4E5A65));
	if (jnz())
		goto loc_40E807;
	dh = to8i(byte_512DB9); //mov
	cmp(dh, to8i(byte_4E5A66));
	if (jnz())
		goto loc_40E807;
	al = to8i(byte_4E5A67); //mov
	cmp(al, to8i(byte_512F42));
	if (jnz())
		goto loc_40E807;
	dl = to8i(byte_512DF8); //mov
	cmp(dl, to8i(byte_4E5A68));
	if (jnz())
		goto loc_40E807;
	dh = to8i(byte_512DBB); //mov
	cmp(dh, to8i(byte_4E5A69));
	if (jnz())
		goto loc_40E807;
	eax = to32i(dword_512D9E); //mov
	esi = to32i(byte_4E5A68); //mov
	sar(eax, (int32_t)0x10);
	sar(esi, (int32_t)0x10);
	cmp(esi, eax);
	if (jnz())
		goto loc_40E807;
	test(ebp, ebp);
	if (jnz())
		goto loc_40E807;
	goto loc_40E811;
loc_40E9BD:
	eax = to32i(dword_4D24E0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4D24E0); //mov
	to16i(word_513426) = bx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	al = to8i(byte_4E5A61); //mov
	to8i(byte_512DAA) = al; //mov
	al = to8i(byte_4E5A62); //mov
	to8i(byte_512DAB) = al; //mov
	al = to8i(byte_4E5A63); //mov
	to8i(byte_512DB0) = al; //mov
	al = to8i(byte_4E5A64); //mov
	to8i(byte_512F43) = al; //mov
	al = to8i(byte_4E5A65); //mov
	to8i(byte_512DB8) = al; //mov
	al = to8i(byte_4E5A66); //mov
	to8i(byte_512DB9) = al; //mov
	al = to8i(byte_4E5A67); //mov
	to8i(byte_512F42) = al; //mov
	al = to8i(byte_4E5A68); //mov
	to8i(byte_512DF8) = al; //mov
	al = to8i(byte_4E5A69); //mov
	to8i(byte_512DBB) = al; //mov
	ax = to16i(word_4E5A6A); //mov
	edx = to32i(dword_4D24E4); //mov
	to16i(dword_512D9E+2) = ax; //mov
	test(edx, edx);
	if (jz())
		goto loc_40EA5F;
	xor_(ecx, ecx);
	ebx = to32i(dword_4D76B8); //mov
	to32i(dword_4D24E4) = ecx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40EA5F;
	esp -= 4; _sub_41A350(); esp += 4; //call
loc_40EA5F:
	ecx = 1; //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40EA70()
{
	push32(edx);
	eax = to32i(dword_4D24E0); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	xor_(edx, edx);
	eax = to32i(dword_4D7708); //mov
	to32i(dword_4D24E0) = edx; //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	eax = to32i(dword_4D770C); //mov
	to32i(dword_4D7708) = edx; //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	eax = (int32_t)(intptr_t)byte_4E5A40; //mov
	to32i(dword_4D770C) = edx; //mov
	edx = 0x20; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_40EAC0()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_4D24E4) = edx; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	edx = 0x100; //mov
	to32i(dword_4D24E0) = eax; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4D7708) = eax; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4D770C) = eax; //mov
	eax = (int32_t)(intptr_t)dword_4E5940; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_40EB20()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_40EB00; //mov
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_403B20(); esp += 4; //call
	cmp(to8i(byte_512DBE), (int8_t)0);
	if (jnz())
		goto loc_40EFCA;
	edx = (int32_t)(intptr_t)dword_4D3014; //mov
	ecx = (int32_t)(intptr_t)dword_4D3028; //mov
	ebx = (int32_t)(intptr_t)dword_4D303C; //mov
	eax = (int32_t)(intptr_t)dword_4D30EC; //mov
	xor_(esi, esi);
	to32i(off_4D3124) = edx; //mov
	to32i(off_4D3074) = edx; //mov
	to32i(off_4D3078) = ecx; //mov
	to32i(off_4D307C) = ebx; //mov
	to32i(off_4D3080) = esi; //mov
	to32i(off_4D3128) = ecx; //mov
	xor_(dl, dl);
	to32i(off_4D312C) = eax; //mov
	to8i(byte_512DEB) = dl; //mov
	xor_(dh, dh);
	to32i(off_4D3130) = esi; //mov
	to8i(byte_512DD0) = dh; //mov
loc_40EB9A:
	cmp(to8i(byte_512DBE), (int8_t)0);
	if (jz())
		goto loc_40F02A;
	bh = to8i(byte_512DAA); //mov
	cmp(bh, (int8_t)2);
	if (jz())
		goto loc_40F02A;
	cmp(bh, (int8_t)1);
	if (jz())
		goto loc_40F02A;
	dl = to8i(byte_4D30B8); //mov
	ah = to8i(byte_4D2F9C); //mov
	and_(dl, (int8_t)0xFE);
	and_(ah, (int8_t)0xFE);
	to8i(byte_4D30B8) = dl; //mov
	to8i(byte_4D2F9C) = ah; //mov
loc_40EBDD:
	dh = to8i(byte_512DAA); //mov
	cmp(dh, (int8_t)1);
	if (jnz())
		goto loc_40F067;
	eax = to32i(dword_4E5FDC); //mov
	esp -= 4; _sub_40F370(); esp += 4; //call
	cmp(dh, to8i(byte_512DAB));
	if (jnz())
		goto loc_40EC2C;
	edi = to32i(dword_4E5FDC); //mov
	to8i(byte_512DAC) = dh; //mov
	cmp(edi, (int32_t)0x4B00);
	if (jnz())
		goto loc_40F04A;
	cmp(to16i(word_4D279A), (int16_t)2);
	if (jnz())
		goto loc_40F04A;
	xor_(dl, dl);
	to8i(byte_512DAB) = dl; //mov
loc_40EC2C:
	cmp(to8i(byte_512DAC), (int8_t)0);
	if (jz())
		goto loc_40EC59;
	cmp(to16i(word_4D279A), (int16_t)2);
	if (jnz())
		goto loc_40EC59;
	ebp = to32i(dword_4E5FDC); //mov
	cmp(ebp, (int32_t)0x4B00);
	if (jnz())
		goto loc_40F056;
loc_40EC51:
	xor_(bl, bl);
	to8i(byte_512DAC) = bl; //mov
loc_40EC59:
	al = to8i(byte_4D3780); //mov
	bh = to8i(byte_512DA9); //mov
	and_(al, (int8_t)0xFE);
	cmp(bh, (int8_t)1);
	if (jnz())
		goto loc_40F0A0;
	cmp(to8i(byte_512DD6), (int8_t)0);
	if (jz())
		goto loc_40F089;
loc_40EC7C:
	or_(to8i(byte_4D3780), (int8_t)1);
loc_40EC83:
	bl = to8i(byte_512DA9); //mov
	cmp(bl, (int8_t)2);
	if (jnz())
		goto loc_40F0B7;
loc_40EC92:
	to16i(word_4D3E8A) = 6; //mov
loc_40EC9B:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jz())
		goto loc_40ECFB;
	al = to8i(byte_4D3A38); //mov
	dl = to8i(byte_4D3248); //mov
	bl = to8i(byte_4D3A54); //mov
	or_(al, (int8_t)1);
	or_(dl, (int8_t)1);
	or_(bl, (int8_t)1);
	to8i(byte_4D3A38) = al; //mov
	to8i(byte_4D3248) = dl; //mov
	to8i(byte_4D3A54) = bl; //mov
	ah = to8i(byte_4D3234); //mov
	dh = to8i(byte_4D328C); //mov
	bh = to8i(byte_4D3E7C); //mov
	or_(ah, (int8_t)1);
	or_(dh, (int8_t)1);
	or_(bh, (int8_t)1);
	to8i(byte_4D3234) = ah; //mov
	to8i(byte_4D328C) = dh; //mov
	to8i(byte_4D3E7C) = bh; //mov
loc_40ECFB:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	cmp(byte_4D407D[eax*2], (int8_t)0);
	if (jnz())
		goto loc_40F0D7;
	or_(to8i(byte_4D2F88), (int8_t)1);
loc_40ED17:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	cmp(byte_4D407D[eax*2], (int8_t)0);
	if (jnz())
		goto loc_40F0E3;
	or_(to8i(byte_4D30A4), (int8_t)1);
loc_40ED33:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40F0EF;
	and_(to8i(byte_4D3E68), (int8_t)0xFE);
loc_40ED47:
	al = to8i(byte_512DA9); //mov
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_40ED5F;
	cmp(al, to8i(byte_512DF6));
	if (jnz())
		goto loc_40ED5F;
	to8i(byte_512DF6) = 2; //mov
loc_40ED5F:
	dh = to8i(byte_512DA9); //mov
	test(dh, dh);
	if (jnz())
		goto loc_40F0FB;
	eax = to32i(off_4D27A8); //mov
	to8i(byte_512DAE) = dh; //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40ED7C:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40EDBC;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_40F11B;
	eax = to32i(off_4D2A2C); //mov
	or_(to8i(eax+8), (int8_t)1);
	al = to8i(byte_4D3E40); //mov
	or_(al, (int8_t)1);
	di = to16i(word_4D2A2A); //mov
	to8i(byte_4D3E40) = al; //mov
	test(di, di);
	if (jnz())
		goto loc_40EDBC;
	to16i(word_4D2A2A) = 2; //mov
loc_40EDBC:
	cmp(to16i(word_4D320E), (int16_t)1);
	if (jnz())
		goto loc_40F13D;
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40EDDA;
	to8i(byte_512DF5) = 0xF; //mov
loc_40EDDA:
	cmp(to8i(byte_512DF6), (int8_t)1);
	if (jnz())
		goto loc_40EDF4;
	cmp(to8i(byte_512DF5), (int8_t)0xB);
	if (jbe())
		goto loc_40EDF4;
	xor_(bh, bh);
	to8i(byte_512DF5) = bh; //mov
loc_40EDF4:
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jnz())
		goto loc_40F13D;
	cmp(to8i(byte_512DF5), (int8_t)0xF);
	if (jnz())
		goto loc_40F13D;
	xor_(dl, dl);
	to8i(byte_512DF5) = dl; //mov
loc_40EE16:
	cmp(to8i(byte_512DF7), (int8_t)0);
	if (jz())
		goto loc_40F19B;
	xor_(cl, cl);
	to8i(byte_512DF7) = cl; //mov
	to8i(byte_512DF6) = 1; //mov
loc_40EE32:
	and_(to8i(byte_4D31D0), (int8_t)0xFE);
loc_40EE39:
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jnz())
		goto loc_40F1B4;
loc_40EE46:
	test(to8i(byte_4D3198), (int8_t)1);
	if (jnz())
		goto loc_40EE61;
	al = to8i(byte_512DF8); //mov
	xor_(bh, bh);
	to8i(byte_512DF9) = al; //mov
	to8i(byte_512DF8) = bh; //mov
loc_40EE61:
	or_(to8i(byte_4D3198), (int8_t)1);
loc_40EE68:
	cmp(to8i(byte_512DAA), (int8_t)0);
	if (jnz())
		goto loc_40F228;
	al = to8i(byte_512DBD); //mov
	cmp(al, (int8_t)2);
	if (jnb())
		goto loc_40F1E2;
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_40F214;
	ecx = (int32_t)(intptr_t)word_4D2EF6; //mov
	to32i(off_4D3098) = ecx; //mov
	to32i(off_4D2F60) = ecx; //mov
loc_40EE9B:
	test(to8i(byte_512DBC), (int8_t)1);
	if (jz())
		goto loc_40F26B;
	edi = (int32_t)(intptr_t)dword_4D2978; //mov
	ch = to8i(byte_512DAA); //mov
	to32i(off_4D299C) = edi; //mov
	cmp(ch, (int8_t)1);
	if (jnz())
		goto loc_40EEDA;
	ebp = (int32_t)(intptr_t)dword_4D2968; //mov
	al = to8i(byte_512DB0); //mov
	to32i(off_4D299C) = ebp; //mov
	cmp(al, (int8_t)7);
	if (jnz())
		goto loc_40EEDA;
	xor_(ah, ah);
	to8i(byte_512DB0) = ah; //mov
loc_40EEDA:
	to32i(off_4D3F18) = (int32_t)(intptr_t)dword_4D2978; //mov
loc_40EEE4:
	dl = to8i(byte_512DAB); //mov
	cmp(dl, (int8_t)2);
	if (jnz())
		goto loc_40F292;
loc_40EEF3:
	eax = to32i(off_4D306C); //mov
	or_(to8i(eax+8), (int8_t)1);
	eax = to32i(off_4D311C); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40EF05:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40EF24;
	cmp(to8i(byte_512DAF), (int8_t)1);
	if (jz())
		goto loc_40F2CA;
	eax = to32i(off_4D2A3C); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40EF24:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jnz())
		goto loc_40EF50;
	al = to8i(byte_512DAA); //mov
	cmp(al, (int8_t)1);
	if (jnb())
		goto loc_40F2D8;
	test(al, al);
	if (jnz())
		goto loc_40EF50;
	eax = to32i(off_4D3EE0); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	eax = to32i(off_4D2A30); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
loc_40EF50:
	al = to8i(byte_512DAA); //mov
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_40F310;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_40F310;
	or_(to8i(byte_4D2714), al);
loc_40EF70:
	cmp(to32i(dword_512F48), (int32_t)0);
	if (jnz())
		goto loc_40F31C;
loc_40EF7D:
	eax = to32i(off_4D260C); //mov
	or_(to8i(eax+8), (int8_t)1);
	cmp(to32i(dword_512F48), (int32_t)0);
	if (jnz())
		goto loc_40F334;
	eax = to32i(off_4D2610); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_40EF9C:
	al = to8i(byte_512DFF); //mov
	cmp(al, (int8_t)1);
	if (jz())
		goto loc_40F342;
	test(al, al);
	if (jz())
		goto loc_40F355;
loc_40EFB1:
	xor_(eax, eax);
	al = to8i(byte_512DB9); //mov
	al = to8i(esp+eax*4); //mov
	to8i(byte_512DB8) = al; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40EFCA:
	ebx = (int32_t)(intptr_t)dword_4D2FEC; //mov
	esi = (int32_t)(intptr_t)dword_4D3000; //mov
	edi = (int32_t)(intptr_t)dword_4D303C; //mov
	eax = (int32_t)(intptr_t)dword_4D30B0; //mov
	ecx = (int32_t)(intptr_t)dword_4D2F94; //mov
	xor_(ebp, ebp);
	to32i(off_4D3078) = ebx; //mov
	to32i(off_4D307C) = esi; //mov
	to32i(off_4D3080) = edi; //mov
	to32i(dword_4D3084) = ebp; //mov
	to32i(off_4D3124) = eax; //mov
	to32i(off_4D3128) = ebx; //mov
	to32i(off_4D312C) = esi; //mov
	to32i(dword_4D3134) = ebp; //mov
	ebx = (int32_t)(intptr_t)dword_4D30EC; //mov
	to32i(off_4D3074) = ecx; //mov
	to32i(off_4D3130) = ebx; //mov
	goto loc_40EB9A;
loc_40F02A:
	al = to8i(byte_4D30B8); //mov
	ch = to8i(byte_4D2F9C); //mov
	or_(al, (int8_t)1);
	or_(ch, (int8_t)1);
	to8i(byte_4D30B8) = al; //mov
	to8i(byte_4D2F9C) = ch; //mov
	goto loc_40EBDD;
loc_40F04A:
	to8i(byte_512DAB) = 2; //mov
	goto loc_40EC2C;
loc_40F056:
	cmp(ebp, (int32_t)0x4D00);
	if (jz())
		goto loc_40EC51;
	goto loc_40EC59;
loc_40F067:
	cmp(to8i(byte_512DAC), (int8_t)0);
	if (jz())
		goto loc_40EC59;
	cl = 1; //mov
	xor_(bh, bh);
	to8i(byte_512DAB) = cl; //mov
	to8i(byte_512DAC) = bh; //mov
	goto loc_40EC59;
loc_40F089:
	cmp(to8i(byte_512DF2), (int8_t)0);
	if (jnz())
		goto loc_40EC7C;
	to8i(byte_4D3780) = al; //mov
	goto loc_40EC83;
loc_40F0A0:
	cmp(to8i(byte_512DD6), (int8_t)0);
	if (jnz())
		goto loc_40EC7C;
	to8i(byte_4D3780) = al; //mov
	goto loc_40EC83;
loc_40F0B7:
	cmp(bl, (int8_t)3);
	if (jz())
		goto loc_40EC92;
	cmp(bl, (int8_t)4);
	if (jz())
		goto loc_40EC92;
	to16i(word_4D3E8A) = 5; //mov
	goto loc_40EC9B;
loc_40F0D7:
	and_(to8i(byte_4D2F88), (int8_t)0xFE);
	goto loc_40ED17;
loc_40F0E3:
	and_(to8i(byte_4D30A4), (int8_t)0xFE);
	goto loc_40ED33;
loc_40F0EF:
	or_(to8i(byte_4D3E68), (int8_t)1);
	goto loc_40ED47;
loc_40F0FB:
	eax = to32i(off_4D27A8); //mov
	test(to8i(eax+8), (int8_t)1);
	if (jz())
		goto loc_40F10D;
	to8i(byte_512DAE) = 1; //mov
loc_40F10D:
	eax = to32i(off_4D27A8); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40ED7C;
loc_40F11B:
	eax = to32i(off_4D2A2C); //mov
	cl = to8i(byte_4D3E40); //mov
	bh = to8i(eax+8); //mov
	and_(cl, (int8_t)0xFE);
	and_(bh, (int8_t)0xFE);
	to8i(byte_4D3E40) = cl; //mov
	to8i(eax+8) = bh; //mov
	goto loc_40EDBC;
loc_40F13D:
	al = to8i(byte_512DF5); //mov
	cmp(al, (int8_t)0xF);
	if (jnz())
		goto loc_40F16A;
	cl = to8i(byte_512DF6); //mov
	cmp(cl, (int8_t)1);
	if (jnz())
		goto loc_40F157;
	to8i(byte_512DF7) = cl; //mov
loc_40F157:
	xor_(al, al);
	to8i(byte_512DF6) = al; //mov
	or_(to8i(byte_4D31D0), (int8_t)1);
	goto loc_40EE39;
loc_40F16A:
	cmp(al, (int8_t)0xB);
	if (jbe())
		goto loc_40EE16;
	dl = to8i(byte_512DF6); //mov
	cmp(dl, (int8_t)1);
	if (jz())
		goto loc_40F189;
	to8i(byte_512DF6) = 2; //mov
	goto loc_40EE32;
loc_40F189:
	to8i(byte_512DF7) = dl; //mov
	to8i(byte_512DF6) = 2; //mov
	goto loc_40EE32;
loc_40F19B:
	cmp(to8i(byte_512DF6), (int8_t)0);
	if (jnz())
		goto loc_40EE32;
	to8i(byte_512DF6) = 2; //mov
	goto loc_40EE32;
loc_40F1B4:
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jz())
		goto loc_40EE46;
	al = to8i(byte_4D3198); //mov
	and_(al, (int8_t)1);
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_40F1D6;
	al = to8i(byte_512DF9); //mov
	to8i(byte_512DF8) = al; //mov
loc_40F1D6:
	and_(to8i(byte_4D3198), (int8_t)0xFE);
	goto loc_40EE68;
loc_40F1E2:
	if (ja())
		goto loc_40F1FA;
	edi = (int32_t)(intptr_t)word_4D2F12; //mov
	to32i(off_4D3098) = edi; //mov
	to32i(off_4D2F60) = edi; //mov
	goto loc_40EE9B;
loc_40F1FA:
	cmp(al, (int8_t)3);
	if (jnz())
		goto loc_40F214;
	ebx = (int32_t)(intptr_t)dword_4D2F30; //mov
	to32i(off_4D3098) = ebx; //mov
	to32i(off_4D2F60) = ebx; //mov
	goto loc_40EE9B;
loc_40F214:
	eax = (int32_t)(intptr_t)dword_4D2EDC; //mov
	to32i(off_4D3098) = eax; //mov
	to32i(off_4D2F60) = eax; //mov
	goto loc_40EE9B;
loc_40F228:
	edx = (int32_t)(intptr_t)dword_4D2EDC; //mov
	al = to8i(byte_512DBF); //mov
	to32i(off_4D2F60) = edx; //mov
	cmp(al, (int8_t)0xB);
	if (jbe())
		goto loc_40F244;
	xor_(ah, ah);
	to8i(byte_512DBF) = ah; //mov
loc_40F244:
	ecx = (int32_t)(intptr_t)dword_4D2EDC; //mov
	dl = to8i(byte_512DDA); //mov
	to32i(off_4D3098) = ecx; //mov
	cmp(dl, (int8_t)0xB);
	if (jbe())
		goto loc_40EE9B;
	xor_(dh, dh);
	to8i(byte_512DDA) = dh; //mov
	goto loc_40EE9B;
loc_40F26B:
	esi = (int32_t)(intptr_t)dword_4D2968; //mov
	bh = to8i(byte_512DB0); //mov
	to32i(off_4D299C) = esi; //mov
	cmp(bh, (int8_t)7);
	if (jnz())
		goto loc_40EEE4;
	xor_(cl, cl);
	to8i(byte_512DB0) = cl; //mov
	goto loc_40EEE4;
loc_40F292:
	cmp(dl, (int8_t)1);
	if (jz())
		goto loc_40EEF3;
	bl = to8i(byte_512DAA); //mov
	cmp(bl, (int8_t)2);
	if (jz())
		goto loc_40EEF3;
	cmp(bl, (int8_t)1);
	if (jz())
		goto loc_40EEF3;
	eax = to32i(off_4D306C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	eax = to32i(off_4D311C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40EF05;
loc_40F2CA:
	eax = to32i(off_4D2A3C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40EF24;
loc_40F2D8:
	if (ja())
		goto loc_40F2F1;
	eax = to32i(off_4D3EE0); //mov
	or_(to8i(eax+8), (int8_t)1);
	eax = to32i(off_4D2A30); //mov
	or_(to8i(eax+8), (int8_t)1);
	goto loc_40EF50;
loc_40F2F1:
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_40EF50;
	eax = to32i(off_4D3EE0); //mov
	or_(to8i(eax+8), (int8_t)1);
	eax = to32i(off_4D2A30); //mov
	or_(to8i(eax+8), (int8_t)1);
	goto loc_40EF50;
loc_40F310:
	and_(to8i(byte_4D2714), (int8_t)0xFE);
	goto loc_40EF70;
loc_40F31C:
	xor_(eax, eax);
	al = to8i(byte_512F5E); //mov
	test(eax, eax);
	if (jz())
		goto loc_40EF7D;
	eax = to32i(off_4D260C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
loc_40F334:
	eax = to32i(off_4D2610); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_40EF9C;
loc_40F342:
	xor_(ebp, ebp);
	to32i(dword_4D96B0) = ebp; //mov
	to32i(dword_4D5A44) = ebp; //mov
	goto loc_40EFB1;
loc_40F355:
	xor_(edi, edi);
	esi = 1; //mov
	to32i(dword_4D96B0) = edi; //mov
	to32i(dword_4D5A44) = esi; //mov
	goto loc_40EFB1;
}
Fn(void) Game::_sub_40F370()
{
	push32(ecx);
	push32(edx);
	cmp(eax, (int32_t)0x4B00);
	if (jnz())
		goto loc_40F464;
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jnz())
		goto loc_40F3F5;
	ecx = 0xC; //mov
loc_40F38B:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F3B5;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	add(edx, (int32_t)0xB);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F38B;
loc_40F3B5:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40F53B;
	ecx = 0xC; //mov
loc_40F3C7:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DDA); //mov
	add(edx, (int32_t)0xB);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DDA) = dl; //mov
	goto loc_40F3C7;
loc_40F3F5:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40F431;
	ecx = 0xC; //mov
loc_40F403:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	add(edx, (int32_t)0xB);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F403;
loc_40F431:
	ecx = 0xC; //mov
loc_40F436:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407AF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	add(edx, (int32_t)0xB);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F436;
loc_40F464:
	cmp(to8i(byte_51345E), (int8_t)0);
	if (jnz())
		goto loc_40F4D8;
	ecx = 0xC; //mov
loc_40F472:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F49A;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F472;
loc_40F49A:
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40F53B;
	ecx = 0xC; //mov
loc_40F4AC:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DDA); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DDA) = dl; //mov
	goto loc_40F4AC;
loc_40F4D8:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_40F50E;
	ecx = 0xC; //mov
loc_40F4E6:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407B20(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F4E6;
loc_40F50E:
	ecx = 0xC; //mov
loc_40F513:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	esp -= 4; _sub_407AF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F53B;
	xor_(edx, edx);
	dl = to8i(byte_512DBF); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512DBF) = dl; //mov
	goto loc_40F513;
loc_40F53B:
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_40F540()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	cmp(to16i(eax+0xA), (int16_t)0x64);
	if (jz())
		goto loc_40F5B4;
	esi = to32i(eax+8); //mov
	sar(esi, (int32_t)0x10);
	edx = to32i(eax+esi*4+0xC); //mov
	test(to8i(edx+8), (int8_t)1);
	if (jz())
		goto loc_40F5B4;
	bl = 2; //mov
	xor_(edi, edi);
loc_40F564:
	edx = to32i(eax+8); //mov
	sar(edx, (int32_t)0x10);
	edx = to32i(eax+edx*4+0xC); //mov
	test(to8i(edx+8), (int8_t)1);
	if (jz())
		goto loc_40F5B4;
	inc(to16i(eax+0xA));
	edx = to32i(eax+8); //mov
	sar(edx, (int32_t)0x10);
	ecx = to32i(eax+edx*4+0xC); //mov
	cmp(edi, ecx);
	if (jz())
		goto loc_40F5AA;
loc_40F586:
	edx = to32i(eax+8); //mov
	sar(edx, (int32_t)0x10);
	ecx = to32i(eax+edx*4+0xC); //mov
	cmp(bl, to8i(ecx));
	if (jz())
		goto loc_40F5B0;
	inc(to16i(eax+0xA));
	edx = to32i(eax+8); //mov
	sar(edx, (int32_t)0x10);
	cmp(edi, to32i(eax+edx*4+0xC));
	if (jnz())
		goto loc_40F586;
	to16i(eax+0xA) = di; //mov
	goto loc_40F586;
loc_40F5AA:
	to16i(eax+0xA) = cx; //mov
	goto loc_40F586;
loc_40F5B0:
	cmp(esi, edx);
	if (jnz())
		goto loc_40F564;
loc_40F5B4:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40F5C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x34);
	ebx = eax; //mov
	ecx = 1; //mov
	esi = 0xFFFFFFFF; //mov
	edi = 1; //mov
	xor_(ah, ah);
	to32i(esp+0x2C) = ecx; //mov
	to8i(byte_4E5FC8) = ah; //mov
	to16i(esp+0x28) = si; //mov
	to32i(esp+0x30) = edi; //mov
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	xor_(eax, eax);
	xor_(ecx, ecx);
	al = to8i(byte_512DFB); //mov
	to32i(dword_4D40B8) = ecx; //mov
	esp -= 4; _sub_41B730(); esp += 4; //call
	esp -= 4; _sub_4057C0(); esp += 4; //call
	ecx = 0xAB; //mov
	to16i(word_4D232C) = di; //mov
	edi = (int32_t)(intptr_t)dword_4E5D1C; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xAB; //mov
	edi = (int32_t)(intptr_t)dword_4E5A70; //mov
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ebx, (int32_t)(intptr_t)off_4D3EC4);
	if (jz())
		goto loc_40F8AB;
loc_40F63D:
	ebp = (int32_t)(intptr_t)off_4D3EC4; //mov
loc_40F642:
	cmp(to16i(esp+0x30), (int16_t)0);
	if (jz())
		goto loc_40FA4A;
	cmp(to16i(esp+0x2C), (int16_t)0);
	if (jz())
		goto loc_40F674;
	eax = to32i(esp+0x28); //mov
	test(ax, ax);
	if (jnz())
		goto loc_40F8DE;
	ecx = 0xAB; //mov
	edi = (int32_t)(intptr_t)dword_4E5D1C; //mov
loc_40F66D:
	esi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_40F674:
	edx = to32i(ebx+6); //mov
	sar(edx, (int32_t)0x10);
	eax = ebx; //mov
	call(to32i(off_4D40C0+edx*4));
	edx = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFB);
	if (jnz())
		goto loc_40F6C3;
	cmp(ebx, (int32_t)(intptr_t)off_4D3EC4);
	if (jz())
		goto loc_40F6C3;
	ebx = 0xFFFFFFFF; //mov
	eax = to32i(off_4D3EC8+2); //mov
	ecx = 4; //mov
	sar(eax, (int32_t)0x10);
	to16i(esp+0x28) = bx; //mov
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	to16i(word_4D3ECE) = cx; //mov
	eax = ebp; //mov
	ebx = ebp; //mov
	call(to32i(off_4D40C0+edx));
	edx = eax; //mov
loc_40F6C3:
	cmp(edx, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40F6CE;
	xor_(esi, esi);
	to32i(esp+0x30) = esi; //mov
loc_40F6CE:
	cmp(edx, (int32_t)0xFFFFFFFE);
	if (jnz())
		goto loc_40F6F1;
	edi = to32i(esp+0x28); //mov
	test(di, di);
	if (jnz())
		goto loc_40F8F7;
	ecx = 0xAB; //mov
	edi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	esi = (int32_t)(intptr_t)dword_4E5D1C; //mov
loc_40F6EF:
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_40F6F1:
	cmp(to8i(byte_512ECC), (int8_t)0);
	if (jz())
		goto loc_40F741;
	cmp(ebx, (int32_t)(intptr_t)off_4D3EC4);
	if (jnz())
		goto loc_40F741;
	cmp(edx, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40F741;
	eax = (int32_t)(intptr_t)dword_4E5A6C; //mov
	to32i(esp) = ebp; //mov
	xor_(edx, edx);
	esp -= 4; _sub_47EF30(); esp += 4; //call
	to16i(esp+0x28) = dx; //mov
	to32i(dword_4D40BC) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_40F915;
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x2FE; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(edx, edx);
loc_40F739:
	to32i(esp+0x30) = 1; //mov
loc_40F741:
	cmp(edx, (int32_t)(intptr_t)off_4D349C);
	if (jnz())
		goto loc_40F757;
	cmp(to8i(byte_512DA9), (int8_t)1);
	if (jnz())
		goto loc_40F757;
	edx = (int32_t)(intptr_t)off_4D35E8; //mov
loc_40F757:
	cmp(ebx, (int32_t)(intptr_t)off_4D3CFC);
	if (jnz())
		goto loc_40F78A;
	cmp(edx, (int32_t)(intptr_t)off_4D3C50);
	if (jnz())
		goto loc_40F78A;
	ch = to8i(byte_512DAA); //mov
	cmp(ch, (int8_t)1);
	if (jnz())
		goto loc_40F92C;
	eax = to32i(dword_4D76B8); //mov
	cmp(to16i(eax+0x2C0), (int16_t)6);
	if (jle())
		goto loc_40F78A;
	edx = (int32_t)(intptr_t)off_4D3BE4; //mov
loc_40F78A:
	cmp(ebx, (int32_t)(intptr_t)off_4D3C50);
	if (jnz())
		goto loc_40F7A0;
	cmp(edx, (int32_t)(intptr_t)off_4D3BE4);
	if (jnz())
		goto loc_40F7A0;
	xor_(eax, eax);
	to32i(esp+0x30) = eax; //mov
loc_40F7A0:
	cmp(ebx, (int32_t)(intptr_t)off_4D3BE4);
	if (jnz())
		goto loc_40F7B6;
	cmp(edx, (int32_t)(intptr_t)off_4D3B74);
	if (jnz())
		goto loc_40F7B6;
	xor_(ecx, ecx);
	to32i(esp+0x30) = ecx; //mov
loc_40F7B6:
	cmp(edx, (int32_t)(intptr_t)off_4D3C50);
	if (jnz())
		goto loc_40F7CD;
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jz())
		goto loc_40F7CD;
	xor_(esi, esi);
	to32i(esp+0x30) = esi; //mov
loc_40F7CD:
	cmp(ebx, (int32_t)(intptr_t)off_4D3B74);
	if (jnz())
		goto loc_40F7E3;
	cmp(edx, (int32_t)(intptr_t)off_4D3B08);
	if (jnz())
		goto loc_40F7E3;
	xor_(edi, edi);
	to32i(esp+0x30) = edi; //mov
loc_40F7E3:
	cmp(ebx, (int32_t)(intptr_t)off_4D3B08);
	if (jnz())
		goto loc_40F7FA;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jz())
		goto loc_40F7FA;
	xor_(eax, eax);
	to32i(esp+0x30) = eax; //mov
loc_40F7FA:
	cmp(edx, (int32_t)(intptr_t)off_4D3B74);
	if (jnz())
		goto loc_40F811;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jz())
		goto loc_40F811;
	xor_(ecx, ecx);
	to32i(esp+0x30) = ecx; //mov
loc_40F811:
	cmp(ebx, (int32_t)(intptr_t)off_4D3EC4);
	if (jnz())
		goto loc_40F9E6;
	test(edx, edx);
	if (jnz())
		goto loc_40F9E6;
	ah = to8i(byte_512DA9); //mov
	test(ah, ah);
	if (jz())
		goto loc_40F9E6;
	cmp(ah, (int8_t)1);
	if (jz())
		goto loc_40F9E6;
	cmp(ah, (int8_t)3);
	if (jnz())
		goto loc_40F959;
	edx = (int32_t)(intptr_t)off_4D2548; //mov
loc_40F84A:
	test(edx, edx);
	if (jz())
		goto loc_40F9E6;
	esp -= 4; _sub_402C40(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_40F9E6;
	xor_(ch, ch);
	xor_(edx, edx);
	to8i(byte_512DA9) = ch; //mov
loc_40F869:
	edi = 1; //mov
	to32i(esp+0x2C) = edi; //mov
	test(edx, edx);
	if (jz())
		goto loc_40F642;
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_40FA18;
loc_40F883:
	eax = to32i(esp+0x26); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_40FA4A;
	edi = to32i(esp+0x28); //mov
	ebx = to32i(esp+eax*4); //mov
	xor_(esi, esi);
	dec(edi);
	to32i(esp+0x2C) = esi; //mov
	to16i(esp+0x28) = di; //mov
	goto loc_40F642;
loc_40F8AB:
	cl = to8i(byte_512DA9); //mov
	cmp(cl, (int8_t)2);
	if (jnz())
		goto loc_40F8CF;
loc_40F8B6:
	inc(to16i(esp+0x28));
	eax = to32i(esp+0x26); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+eax*4) = ebx; //mov
	ebx = (int32_t)(intptr_t)dword_4D403C; //mov
	goto loc_40F63D;
loc_40F8CF:
	cmp(cl, (int8_t)3);
	if (jz())
		goto loc_40F8B6;
	cmp(cl, (int8_t)4);
	if (jz())
		goto loc_40F8B6;
	goto loc_40F63D;
loc_40F8DE:
	cmp(ax, (int16_t)1);
	if (jl())
		goto loc_40F674;
	ecx = 0xAB; //mov
	edi = (int32_t)(intptr_t)dword_4E5A70; //mov
	goto loc_40F66D;
loc_40F8F7:
	cmp(di, (int16_t)1);
	if (jl())
		goto loc_40F6F1;
	ecx = 0xAB; //mov
	edi = (int32_t)(intptr_t)(dword_512D9E+2); //mov
	esi = (int32_t)(intptr_t)dword_4E5A70; //mov
	goto loc_40F6EF;
loc_40F915:
	dl = 4; //mov
	esp -= 4; _sub_402C40(); esp += 4; //call
	to8i(byte_512DA9) = dl; //mov
	edx = (int32_t)(intptr_t)off_4D26A0; //mov
	goto loc_40F739;
loc_40F92C:
	cmp(ch, (int8_t)2);
	if (jnz())
		goto loc_40F94E;
	cmp(to8i(byte_512DB0), (int8_t)7);
	if (jb())
		goto loc_40F944;
	edx = (int32_t)(intptr_t)off_4D3B08; //mov
	goto loc_40F78A;
loc_40F944:
	edx = (int32_t)(intptr_t)off_4D3B74; //mov
	goto loc_40F78A;
loc_40F94E:
	xor_(esi, esi);
	to32i(esp+0x30) = esi; //mov
	goto loc_40F78A;
loc_40F959:
	cmp(ah, (int8_t)2);
	if (jnz())
		goto loc_40F9A2;
	xor_(eax, eax);
	to32i(dword_512F48) = eax; //mov
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x2FD; //mov
	xor_(dh, dh);
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to8i(byte_512DA9) = dh; //mov
	xor_(edx, edx);
	goto loc_40F869;
loc_40F9A2:
	cmp(ah, (int8_t)4);
	if (jnz())
		goto loc_40F84A;
	eax = (int32_t)(intptr_t)dword_4E5A6C; //mov
	esp -= 4; _sub_47EF30(); esp += 4; //call
	to32i(dword_4D40BC) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_40F9DC;
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x2FE; //mov
	xor_(dl, dl);
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to8i(byte_512DA9) = dl; //mov
	xor_(edx, edx);
	goto loc_40F869;
loc_40F9DC:
	edx = (int32_t)(intptr_t)off_4D26A0; //mov
	goto loc_40F84A;
loc_40F9E6:
	cmp(edx, (int32_t)0xFFFFFFFC);
	if (jnz())
		goto loc_40F869;
	cmp(to32i(dword_4D76BC), (int32_t)0);
	if (jz())
		goto loc_40F9FD;
	esp -= 4; _sub_41A2A0(); esp += 4; //call
loc_40F9FD:
	xor_(ecx, ecx);
	xor_(esi, esi);
	to32i(dword_4D76BC) = ecx; //mov
	xor_(cl, cl);
	to32i(esp+0x30) = esi; //mov
	to8i(byte_512DAA) = cl; //mov
	goto loc_40F869;
loc_40FA18:
	cmp(edx, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_40F883;
	add(to16i(esp+0x28), di);
	eax = to32i(esp+0x26); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x30); //mov
	to32i(esp+eax*4) = ebx; //mov
	ebx = edx; //mov
	test(cx, cx);
	if (jz())
		goto loc_40F642;
	to16i(edx+0xA) = 0; //mov
	goto loc_40F642;
loc_40FA4A:
	ebx = to32i(dword_4D40B8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_40FA5B;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_40FA5B:
	esp -= 4; _sub_4056B0(); esp += 4; //call
	esp -= 4; _sub_41B620(); esp += 4; //call
	cmp(edx, (int32_t)0xFFFFFFFD);
	if (jnz())
		goto loc_40FA79;
	eax = 1; //mov
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_40FA79:
	xor_(eax, eax);
	add(esp, (int32_t)0x34);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_40FA90()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x74);
	to32i(esp+0x5C) = eax; //mov
	xor_(edx, edx);
	to16i(esp+0x6C) = dx; //mov
loc_40FAA4:
	eax = to32i(esp+0x6A); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x5C); //mov
	ebp = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ebp, edx);
	ecx = to32i(ebp+0xC); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41007C;
	edx = to32i(edx+8); //mov
	sar(edx, (int32_t)0x10);
	ebp = ecx; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_40FC31;
	eax = 1; //mov
loc_40FAD8:
	to16i(esp+0x68) = ax; //mov
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	cmp(eax, (int32_t)0x12);
	if (jl())
		goto loc_40FC38;
	eax = 0x13; //mov
	esi = 0xC; //mov
	to16i(esp+0x64) = ax; //mov
	to32i(esp+0x60) = esi; //mov
loc_40FB04:
	dl = to8i(ebp+0); //mov
	cmp(dl, (int8_t)1);
	if (jnb())
		goto loc_40FC50;
	test(dl, dl);
	if (jnz())
		goto loc_40FC1D;
loc_40FB18:
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	edi = esp; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_40FB28:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_40FB40;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_40FB28;
loc_40FB40:
	pop32(edi);
	test(to8i(ebp+8), (int8_t)1);
	if (jz())
		goto loc_40FCB6;
	to16i(esp+0x68) = 2; //mov
	esi = 6; //mov
loc_40FB57:
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B670(); esp += 4; //call
	to32i(esp+0x54) = eax; //mov
	eax = to32i(esp+0x54); //mov
	ecx = to32i(esp+0x66); //mov
	to16i(esp+0x70) = ax; //mov
	eax = to32i(ebp+0); //mov
	sar(ecx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x52); //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	edi = eax; //mov
	eax = ax; //cwde
	sar(edx, (int32_t)0x10);
	to32i(esp+0x50) = eax; //mov
	eax = to32i(ebp+0); //mov
	ebx = to32i(esp+0x50); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_405580(); esp += 4; //call
	test(to8i(ebp+8), (int8_t)4);
	if (jz())
		goto loc_40FBDE;
	eax = si; //movsx
	push32(eax);
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x68); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x5C); //mov
	add(eax, edx);
	ebx = to32i(esp+0x58); //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)asc_4C8780; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40FBDE:
	test(to8i(ebp+8), (int8_t)2);
	if (jz())
		goto loc_40FC1D;
	eax = si; //movsx
	push32(eax);
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x68); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, esi);
	ebx = di; //movsx
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)a____1; //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40FC1D:
	cmp(to8i(ebp+0), (int8_t)2);
	if (jz())
		goto loc_40FD08;
loc_40FC27:
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FC31:
	xor_(eax, eax);
	goto loc_40FAD8;
loc_40FC38:
	ecx = 0xD; //mov
	ebx = 8; //mov
	to16i(esp+0x64) = cx; //mov
	to32i(esp+0x60) = ebx; //mov
	goto loc_40FB04;
loc_40FC50:
	if (ja())
		goto loc_40FC9D;
	ebx = to32i(esp+0x5C); //mov
	edx = ebp; //mov
	cmp(ebx, (int32_t)(intptr_t)off_4D3CFC);
	if (jnz())
		goto loc_40FCE2;
	esp -= 4; _sub_41A210(); esp += 4; //call
loc_40FC69:
	test(to8i(edx+2), (int8_t)1);
	if (jnz())
		goto loc_40FC1D;
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_40FCE6;
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(edx+8); //lea
	xor_(ebx, ebx);
	edx = 0x2C00; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(to8i(ebp+0), (int8_t)2);
	if (jz())
		goto loc_40FD08;
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FC9D:
	cmp(dl, (int8_t)2);
	if (jz())
		goto loc_40FB18;
	cmp(to8i(ebp+0), (int8_t)2);
	if (jz())
		goto loc_40FD08;
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FCB6:
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_40FCD0;
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6B0(); esp += 4; //call
	esi = eax; //mov
	goto loc_40FB57;
loc_40FCD0:
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	esi = eax; //mov
	goto loc_40FB57;
loc_40FCE2:
	xor_(eax, eax);
	goto loc_40FC69;
loc_40FCE6:
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(edx+4); //lea
	xor_(ebx, ebx);
	edx = 0x2C00; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(to8i(ebp+0), (int8_t)2);
	if (jz())
		goto loc_40FD08;
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FD08:
	ah = to8i(ebp+9); //mov
	esi = ebp; //mov
	cmp(ah, (int8_t)3);
	if (jnz())
		goto loc_40FD6D;
	cmp(to32i(ebp+0xC), (int32_t)0);
	if (jz())
		goto loc_40FD6D;
	eax = to32i(ebp+0); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_40FE63;
	edx = 3; //mov
loc_40FD31:
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_40FE6A;
	eax = 4; //mov
loc_40FD42:
	eax = ax; //cwde
	push32(eax);
	eax = dx; //movsx
	push32(eax);
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x6C); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, edx);
	ebx = di; //movsx
	edx = ax; //movsx
	eax = to32i(esi+0xC); //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40FD6D:
	cmp(to8i(esi+9), (int8_t)0x18);
	if (jnz())
		goto loc_40FDFF;
	fld(to32f(dword_4D4D20));
	fadd(to32f(flt_4C8790));
	fmul(to32f(flt_4C878C));
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0x58));
	eax = to32i(esp+0x58); //mov
	inc(eax);
	push32(eax);
	push32(aD_2);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = to32i(esi); //mov
	add(esp, (int32_t)0xC);
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_40FE74;
	eax = 3; //mov
loc_40FDC2:
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_40FE7B;
	edx = 4; //mov
loc_40FDD3:
	edx = dx; //movsx
	push32(edx);
	eax = ax; //cwde
	push32(eax);
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x6C); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, edx);
	ebx = di; //movsx
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_40FDFF:
	dh = to8i(esi+9); //mov
	cmp(dh, (int8_t)2);
	if (jnz())
		goto loc_40FE90;
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_40FE85;
	eax = 3; //mov
loc_40FE1F:
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_40FE89;
	edx = 4; //mov
loc_40FE2C:
	edx = dx; //movsx
	push32(edx);
	eax = ax; //cwde
	push32(eax);
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x6C); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, esi);
	ebx = di; //movsx
	edx = ax; //movsx
	eax = to32i(dword_512F48); //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FE63:
	xor_(edx, edx);
	goto loc_40FD31;
loc_40FE6A:
	eax = 3; //mov
	goto loc_40FD42;
loc_40FE74:
	xor_(eax, eax);
	goto loc_40FDC2;
loc_40FE7B:
	edx = 3; //mov
	goto loc_40FDD3;
loc_40FE85:
	xor_(eax, eax);
	goto loc_40FE1F;
loc_40FE89:
	edx = 3; //mov
	goto loc_40FE2C;
loc_40FE90:
	cmp(dh, (int8_t)0xC);
	if (jz())
		goto loc_40FF2B;
	cmp(dh, (int8_t)0xD);
	if (jz())
		goto loc_40FF2B;
	cmp(dh, (int8_t)0x10);
	if (jz())
		goto loc_40FF56;
	edx = to32i(esi+0x10); //mov
	cmp(to16i(edx), (int16_t)0);
	if (jz())
		goto loc_410002;
	al = to8i(esi+9); //mov
	cmp(al, (int8_t)0x16);
	if (jnb())
		goto loc_40FF7A;
loc_40FEC3:
	eax = to32i(esi+0xC); //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	edx = to32i(esi+0x10); //mov
loc_40FED0:
	dx = to16i(edx+eax*2); //mov
loc_40FED4:
	eax = to32i(esp+0x68); //mov
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_40FFE5;
	eax = dx; //movsx
	esp -= 4; _sub_41B6B0(); esp += 4; //call
loc_40FEEA:
	eax = ax; //cwde
	ebp = dx; //movsx
	push32(eax);
	eax = ebp; //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x6C); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, esi);
	edx = ax; //movsx
	eax = ebp; //mov
	ebx = di; //movsx
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FF2B:
	ecx = to32i(esp+0x66); //mov
	eax = to32i(esp+0x6E); //mov
	edx = to32i(esp+0x62); //mov
	ebx = di; //movsx
	sar(eax, (int32_t)0x10);
	sar(edx, (int32_t)0x10);
	sar(ecx, (int32_t)0x10);
	add(edx, eax);
	eax = esi; //mov
	esp -= 4; _sub_404740(); esp += 4; //call
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FF56:
	edx = to32i(esp+0x6E); //mov
	eax = to32i(esp+0x62); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	ebx = di; //movsx
	add(edx, eax);
	eax = esi; //mov
	esp -= 4; _sub_410090(); esp += 4; //call
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_40FF7A:
	if (ja())
		goto loc_40FF98;
	al = to8i(byte_512DAA); //mov
	cmp(al, (int8_t)1);
	if (jnb())
		goto loc_40FFB3;
loc_40FF85:
	eax = to32i(esi+0xC); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	eax = to32i(esi+0x10); //mov
	dx = to16i(eax+edx*2); //mov
	goto loc_40FED4;
loc_40FF98:
	cmp(al, (int8_t)0x17);
	if (jnz())
		goto loc_40FEC3;
	cmp(to8i(byte_512DF6), (int8_t)2);
	if (jnz())
		goto loc_40FFCD;
loc_40FFA9:
	edx = 0xDB; //mov
	goto loc_40FED4;
loc_40FFB3:
	if (ja())
		goto loc_40FFBF;
	edx = 0x48; //mov
	goto loc_40FED4;
loc_40FFBF:
	cmp(al, (int8_t)2);
	if (jnz())
		goto loc_40FF85;
	edx = 0x4A; //mov
	goto loc_40FED4;
loc_40FFCD:
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jz())
		goto loc_40FFA9;
	eax = to32i(esi+0xC); //mov
	al = to8i(eax); //mov
	and_(eax, (int32_t)0xFF);
	goto loc_40FED0;
loc_40FFE5:
	cmp(ax, (int16_t)2);
	if (jnz())
		goto loc_40FFF5;
	eax = 6; //mov
	goto loc_40FEEA;
loc_40FFF5:
	eax = dx; //movsx
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	goto loc_40FEEA;
loc_410002:
	cmp(to8i(esi+9), (int8_t)5);
	if (jnz())
		goto loc_40FC27;
	cmp(to32i(dword_4D40BC), (int32_t)0);
	if (jz())
		goto loc_40FC27;
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	esp -= 4; _sub_41B690(); esp += 4; //call
	cmp(eax, (int32_t)2);
	if (jle())
		goto loc_410071;
	eax = 3; //mov
loc_41002D:
	cmp(to16i(esp+0x68), (int16_t)0);
	if (jz())
		goto loc_410075;
	edx = 4; //mov
loc_41003A:
	edx = dx; //movsx
	push32(edx);
	eax = ax; //cwde
	push32(eax);
	eax = to32i(esi); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x6C); //mov
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = to32i(esp+0x78); //mov
	add(eax, esi);
	ebx = di; //movsx
	edx = ax; //movsx
	eax = to32i(dword_4D40BC); //mov
	esp -= 4; _sub_4054E0(); esp += 4; //call
	inc(to16i(esp+0x6C));
	goto loc_40FAA4;
loc_410071:
	xor_(eax, eax);
	goto loc_41002D;
loc_410075:
	edx = 3; //mov
	goto loc_41003A;
loc_41007C:
	add(esp, (int32_t)0x74);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_410090()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	edi = edx; //mov
	esi = ebx; //mov
	cmp(to32i(eax+0xC), (int32_t)1);
	if (jnz())
		goto loc_4101A8;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	al = (int32_t)(intptr_t)byte_512DC1[eax]; //mov
loc_4100B2:
	and_(eax, (int32_t)0xFF);
	edx = (int32_t)(intptr_t)(esp+0x2C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(edx);
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_458670(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	ecx = (int32_t)(intptr_t)(esp+0x30); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	ebx = to32i(esp+0x1C); //mov
	push32(eax);
	edx = to32i(esp+0x24); //mov
	eax = to32i(esp+0x28); //mov
	esp -= 4; _sub_457FA8(); esp += 4; //call
	ebx = 0xD2; //mov
	eax = to32i(esp+0x30); //mov
	xor_(ecx, ecx);
	edx = to32i(esp+0x2C); //mov
	to32i(esp+0xC) = ecx; //mov
	to32i(esp+0x10) = ebx; //mov
	to32i(esp+0x14) = ecx; //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x24); //mov
	ecx = (int32_t)(intptr_t)(esp+0x34); //lea
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x28); //mov
	ebx = esp; //mov
	to32i(esp+8) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4584E0(); esp += 4; //call
	xor_(eax, eax);
	al = to8i(esp+0x34); //mov
	to32i(esp+0x30) = eax; //mov
	xor_(eax, eax);
	al = to8i(esp+0x35); //mov
	to32i(esp+0x24) = eax; //mov
	xor_(eax, eax);
	edx = to32i(esp+0x30); //mov
	al = to8i(esp+0x36); //mov
	shl(edx, (int32_t)0x10);
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x24); //mov
	or_(edx, (int32_t)0xFF000000);
	shl(eax, (int32_t)8);
	ebp = to32i(esp+0x28); //mov
	or_(eax, edx);
	ecx = 0x15; //mov
	or_(ebp, eax);
	eax = 0xFF000000; //mov
	ebx = 0x54; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = (int32_t)(intptr_t)(esi+6); //lea
	eax = (int32_t)(intptr_t)(edi+2); //lea
	esp -= 4; _sub_488620(); esp += 4; //call
	ecx = 0x15; //mov
	eax = ebp; //mov
	ebx = 0x54; //mov
	esp -= 4; _sub_48266C(); esp += 4; //call
	push32(eax);
	edx = (int32_t)(intptr_t)(esi+5); //lea
	eax = (int32_t)(intptr_t)(edi+1); //lea
	esp -= 4; _sub_488620(); esp += 4; //call
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4101A8:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	al = (int32_t)(intptr_t)byte_512DDC[eax]; //mov
	goto loc_4100B2;
}
Fn(void) Game::_sub_4101C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	eax = to32i(dword_4D4D20); //mov
	ebx = 1; //mov
	to32i(esp+4) = eax; //mov
	ah = to8i(byte_4D3468); //mov
	xor_(ebp, ebp);
	and_(ah, (int8_t)0xFE);
	xor_(edi, edi);
	to8i(byte_4D3468) = ah; //mov
	eax = esi; //mov
	to32i(esp) = ebp; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
loc_4101F6:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edi, eax);
	xor_(edx, edx);
	eax = esi; //mov
	esp -= 4; _sub_40BBE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_410302;
loc_41020E:
	esp -= 4; _sub_40EB20(); esp += 4; //call
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(dword_4D2314+2); //mov
	sar(eax, (int32_t)0x10);
	edx = 0x1000; //mov
	eax = to32i(dword_4D231C+eax*4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(eax+0x20); //mov
	esp -= 4; _sub_405B60(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	cmp(esi, (int32_t)(intptr_t)off_4D36A8);
	if (jnz())
		goto loc_41025D;
	esp -= 4; _sub_410330(); esp += 4; //call
loc_41025D:
	cmp(esi, (int32_t)(intptr_t)off_4D349C);
	if (jnz())
		goto loc_41030D;
loc_410269:
	push32(4);
	push32(5);
	eax = 0x135; //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_41B650(); esp += 4; //call
	ebx = ax; //movsx
	eax = 0x137; //mov
	edx = 0x199; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
loc_410293:
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_41029D:
	esp -= 4; _sub_423B90(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	fld(to32f(dword_4D4D20));
	ebx = eax; //mov
	fcomp(to32f(esp+4));
	fnstsw(ax);
	sahf();
	if (jz())
		goto loc_4102C8;
	eax = to32i(dword_4D4D20); //mov
	ebx = 1; //mov
	to32i(esp+4) = eax; //mov
loc_4102C8:
	esp -= 4; _sub_405960(); esp += 4; //call
	test(ax, ax);
	if (jz())
		goto loc_4102EE;
	cmp(edi, to32i(esp));
	if (jle())
		goto loc_4102EE;
	edx = (int32_t)(intptr_t)(edi+0xF); //lea
	to32i(esp) = edx; //mov
	edx = ax; //movsx
	eax = esi; //mov
	ebx = 1; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	ebp = eax; //mov
loc_4102EE:
	test(ebp, ebp);
	if (jz())
		goto loc_4101F6;
	eax = ebp; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_410302:
	test(bx, bx);
	if (jnz())
		goto loc_41020E;
	goto loc_41029D;
loc_41030D:
	cmp(esi, (int32_t)(intptr_t)off_4D35E8);
	if (jz())
		goto loc_410269;
	goto loc_410293;
}
Fn(void) Game::_sub_410330()
{
	static const void *const off_410320[] = {
		&&loc_410348,
		&&loc_410362,
		&&loc_41037C,
		&&loc_410396,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	al = to8i(byte_512E00); //mov
	cmp(al, (int8_t)3);
	if (ja())
		goto loc_41035E;
	and_(eax, (int32_t)0xFF);
	goto *off_410320[eax];
loc_410348:
	ecx = 0x118; //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aSful; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_41035E:
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_410362:
	ecx = 0x118; //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aSthr; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41037C:
	ecx = 0x118; //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aShlf; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_410396:
	ecx = 0x118; //mov
	edx = 0x3000; //mov
	eax = (int32_t)(intptr_t)aSqrt; //mov
	ebx = ecx; //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_410414()
{
	static const void *const off_4103B0[] = {
		&&loc_41053C,
		&&loc_41053C,
		0,
		&&loc_410A94,
		&&loc_410ADC,
		&&loc_410AF9,
		&&loc_41053C,
		&&loc_410B55,
		&&loc_410B29,
		&&loc_410C4E,
		&&loc_410C4E,
		&&loc_410912,
		&&loc_4108ED,
		&&loc_4108ED,
		&&loc_4108D3,
		&&loc_41053C,
		&&loc_4107EF,
		&&loc_41053C,
		&&loc_41053C,
		&&loc_410954,
		&&loc_41098F,
		&&loc_4109A2,
		&&loc_41053C,
		&&loc_41053C,
		&&loc_4107DA,
	};
	push32(ebx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x9C);
	esi = eax; //mov
	edi = edx; //mov
	eax = dx; //movsx
	xor_(ebx, ebx);
	to32i(dword_4E5FDC) = eax; //mov
	cmp(dx, (int16_t)0x1B);
	if (jz())
		goto loc_41054A;
	cmp(to16i(esi+0xA), (int16_t)0x64);
	if (jnz())
		goto loc_410458;
	cmp(di, (int16_t)0xD);
	if (jz())
		goto loc_41055A;
	ax = to16i(dword_4E8B08); //mov
	to16i(esi+0xA) = ax; //mov
	eax = esi; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
loc_410458:
	push32(ecx);
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esi+eax*4+0xC); //mov
	cmp(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_41053C;
	edx = to32i(eax+0xC); //mov
	ecx = eax; //mov
	cmp(edx, (int32_t)(intptr_t)byte_512ED1);
	if (jnz())
		goto loc_410485;
	cmp(di, (int16_t)0x3C00);
	if (jnz())
		goto loc_410485;
	edi = 0x4D00; //mov
loc_410485:
	cmp(to32i(ecx+0xC), (int32_t)(intptr_t)byte_512ED0);
	if (jnz())
		goto loc_41049A;
	cmp(di, (int16_t)0x3D00);
	if (jnz())
		goto loc_41049A;
	edi = 0x4D00; //mov
loc_41049A:
	cmp(to32i(ecx+0xC), (int32_t)(intptr_t)byte_512ED2);
	if (jnz())
		goto loc_410567;
	cmp(di, (int16_t)0x3E00);
	if (jnz())
		goto loc_410567;
	edi = 0x4D00; //mov
loc_4104B7:
	eax = to32i(ecx+0x10); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jz())
		goto loc_4104CC;
loc_4104C0:
	edx = 0x7F; //mov
	xor_(eax, eax);
loc_4104C7:
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_4104CC:
	cmp(di, (int16_t)0x4800);
	if (jnb())
		goto loc_4105CC;
	cmp(di, (int16_t)0xD);
	if (jb())
		goto loc_41053C;
	if (ja())
		goto loc_410743;
loc_4104E3:
	al = to8i(ecx+8); //mov
	test(al, (int8_t)8);
	if (jz())
		goto loc_410760;
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	dx = to16i(esi+0xA); //mov
	inc(edx);
	eax = esi; //mov
	to16i(esi+0xA) = dx; //mov
loc_410508:
	esp -= 4; _sub_423E10(); esp += 4; //call
loc_41050D:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_410529;
	eax = to32i(ecx+4); //mov
	test(eax, eax);
	if (jz())
		goto loc_410529;
	test(to8i(ecx+8), (int8_t)0x10);
	if (jz())
		goto loc_4107D3;
	ebx = 0xFFFFFFFE; //mov
loc_410529:
	al = to8i(ecx+9); //mov
	cmp(al, (int8_t)0x18);
	if (ja())
		goto loc_41053C;
	and_(eax, (int32_t)0xFF);
	goto *off_4103B0[eax];
loc_41053C:
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_41054A:
	eax = 0xFFFFFFFE; //mov
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_41055A:
	xor_(eax, eax);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410567:
	cmp(di, (int16_t)0x1B);
	if (jnb())
		goto loc_41059A;
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_4104CC;
	cmp(to8i(ecx+9), (int8_t)0x12);
	if (jz())
		goto loc_4104CC;
	cmp(to32i(ecx+4), (int32_t)0);
	if (jz())
		goto loc_4104C0;
	edx = 0x7F; //mov
	eax = 2; //mov
	goto loc_4104C7;
loc_41059A:
	if (jbe())
		goto loc_4105BD;
	cmp(di, (int16_t)0x4B00);
	if (jb())
		goto loc_4104CC;
	if (jbe())
		goto loc_4104B7;
	cmp(di, (int16_t)0x4D00);
	if (jz())
		goto loc_4104B7;
	goto loc_4104CC;
loc_4105BD:
	edx = 0x7F; //mov
	eax = 3; //mov
	goto loc_4104C7;
loc_4105CC:
	if (ja())
		goto loc_4105F8;
	edi = to32i(esi+8); //mov
	sar(edi, (int32_t)0x10);
loc_4105D4:
	ax = to16i(esi+0xA); //mov
	test(ax, ax);
	if (jnz())
		goto loc_410DC4;
loc_4105E1:
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	cmp(to32i(esi+eax*4+0x10), (int32_t)0);
	if (jz())
		goto loc_410DCB;
	inc(to16i(esi+0xA));
	goto loc_4105E1;
loc_4105F8:
	cmp(di, (int16_t)0x4D00);
	if (jnb())
		goto loc_4106D8;
	cmp(di, (int16_t)0x4B00);
	if (jnz())
		goto loc_41053C;
	al = to8i(ecx+8); //mov
	test(al, (int8_t)8);
	if (jz())
		goto loc_410CCD;
	inc(to16i(esi+0xA));
	eax = esi; //mov
	edx = 0x7F; //mov
loc_410624:
	esp -= 4; _sub_423E10(); esp += 4; //call
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_410633:
	cmp(to8i(ecx+9), (int8_t)0x18);
	if (jnz())
		goto loc_410643;
	eax = 1; //mov
	esp -= 4; _sub_428910(); esp += 4; //call
loc_410643:
	cmp(to8i(ecx+9), (int8_t)0x10);
	if (jnz())
		goto loc_4106A5;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = to32i(dword_4D40B4); //mov
	inc(eax);
	edx = to32i(ecx+0xC); //mov
	to32i(dword_4D40B4) = eax; //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_410D82;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	dl = (int32_t)(intptr_t)byte_512DC1[eax]; //mov
	dec(dl);
	byte_512DC1[eax] = dl; //mov
	edi = (uint8_t)to8i(byte_512DBF); //movzx
	esi = (int32_t)(intptr_t)(edi+edi); //lea
	dh = (int32_t)(intptr_t)byte_4D407C[esi]; //mov
	cmp(dl, dh);
	if (jnb())
		goto loc_4106A5;
	al = dh; //mov
	add(al, (int8_t)byte_4D407D[esi]);
	dec(al);
	byte_512DC1[edi] = al; //mov
loc_4106A5:
	cmp(to8i(ecx+9), (int8_t)5);
	if (jnz())
		goto loc_41053C;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_4E5A6C; //mov
	esp -= 4; _sub_47EF30(); esp += 4; //call
	to32i(dword_4D40BC) = eax; //mov
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4106D8:
	if (jbe())
		goto loc_4104E3;
	cmp(di, (int16_t)0x5000);
	if (jnz())
		goto loc_41053C;
	edi = to32i(esi+8); //mov
	sar(edi, (int32_t)0x10);
loc_4106EF:
	inc(to16i(esi+0xA));
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	cmp(to32i(esi+eax*4+0xC), (int32_t)0);
	if (jnz())
		goto loc_410706;
	to16i(esi+0xA) = 0; //mov
loc_410706:
	edx = to32i(esi+8); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(esi+edx*4+0xC); //mov
	cmp(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_4106EF;
	test(to8i(eax+8), (int8_t)1);
	if (jnz())
		goto loc_4106EF;
	cmp(edx, edi);
	if (jz())
		goto loc_41072E;
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_41072E:
	eax = esi; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410743:
	cmp(di, (int16_t)0x1B);
	if (jnz())
		goto loc_41053C;
	ebx = 0xFFFFFFFE; //mov
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410760:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_410792;
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esi+eax*4+8); //mov
	test(to8i(eax+8), (int8_t)1);
	if (jnz())
		goto loc_41050D;
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	dec(to16i(esi+0xA));
	eax = esi; //mov
	goto loc_410508;
loc_410792:
	eax = to32i(ecx+0x10); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jz())
		goto loc_41050D;
	eax = ecx; //mov
	esp -= 4; _sub_410E10(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_41050D;
	eax = to32i(ecx+0xC); //mov
	inc(to8i(eax));
	eax = to32i(ecx+0xC); //mov
	xor_(edx, edx);
	dl = to8i(eax); //mov
	ebp = to32i(ecx+0x10); //mov
	add(edx, edx);
	add(edx, ebp);
	cmp(to16i(edx), (int16_t)0);
	if (jnz())
		goto loc_41050D;
	to8i(eax) = 0; //mov
	goto loc_41050D;
loc_4107D3:
	ebx = eax; //mov
	goto loc_410529;
loc_4107DA:
	xor_(eax, eax);
	esp -= 4; _sub_428910(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4107EF:
	cmp(di, (int16_t)0x4D00);
	if (jnz())
		goto loc_410802;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_410802:
	edx = to32i(dword_4D40B4); //mov
	inc(edx);
	esi = to32i(ecx+0xC); //mov
	to32i(dword_4D40B4) = edx; //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_410875;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	xor_(ecx, ecx);
	cl = (int32_t)(intptr_t)byte_4D407D[eax*2]; //mov
	dl = (int32_t)(intptr_t)byte_4D407C[eax*2]; //mov
	and_(edx, (int32_t)0xFF);
	add(edx, ecx);
	ch = (int32_t)(intptr_t)byte_512DC1[eax]; //mov
	inc(ch);
	byte_512DC1[eax] = ch; //mov
	al = ch; //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, edx);
	if (jl())
		goto loc_41053C;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	dl = (int32_t)(intptr_t)byte_4D407C[eax*2]; //mov
	byte_512DC1[eax] = dl; //mov
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410875:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	xor_(ecx, ecx);
	cl = (int32_t)(intptr_t)byte_4D407D[eax*2]; //mov
	dl = (int32_t)(intptr_t)byte_4D407C[eax*2]; //mov
	and_(edx, (int32_t)0xFF);
	add(edx, ecx);
	cl = (int32_t)(intptr_t)byte_512DDC[eax]; //mov
	inc(cl);
	byte_512DDC[eax] = cl; //mov
	al = cl; //mov
	and_(eax, (int32_t)0xFF);
	cmp(eax, edx);
	if (jl())
		goto loc_41053C;
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	dl = (int32_t)(intptr_t)byte_4D407C[eax*2]; //mov
	byte_512DDC[eax] = dl; //mov
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4108D3:
	xor_(eax, eax);
	al = to8i(byte_512DFB); //mov
	esp -= 4; _sub_41B730(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4108ED:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
loc_4108F7:
	edx = ecx; //mov
	eax = esi; //mov
	to8i(inControlAssignMode) = 1; //mov
	esp -= 4; _sub_403FC0(); esp += 4; //call
	to8i(inControlAssignMode) = 0; //mov
	test(eax, eax);
	if (jnz())
		goto loc_4108F7;
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410912:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	cmp(esi, (int32_t)(intptr_t)off_4D2B34);
	if (jnz())
		goto loc_41093C;
	eax = 1; //mov
	esp -= 4; _sub_409070(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410954:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	push32(0x134);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jz())
		goto loc_41053C;
	esp -= 4; _sub_4090C0(); esp += 4; //call
	and_(to8i(byte_4D3468), (int8_t)0xFE);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_41093C:
	eax = 2; //mov
	esp -= 4; _sub_409070(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_41098F:
	esp -= 4; _sub_408610(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_4109A2:
	cmp(to8i(byte_512ED3), (int8_t)0);
	if (jnz())
		goto loc_41053C;
	esp -= 4; _sub_4793B0(); esp += 4; //call
	to8i(byte_512ED3) = al; //mov
	test(al, al);
	if (jnz())
		goto loc_410A49;
	xor_(edx, edx);
loc_4109C3:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4109D5;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_4109C3;
loc_4109D5:
	eax = 0x14A; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+0x98) = eax; //mov
	eax = 0x301; //mov
	edx = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+0x9C) = eax; //mov
	eax = 2; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = 0x180; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	xor_(edx, edx);
loc_410A1E:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_410A39;
	esp -= 4; _sub_483401(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_410A39;
	eax = edx; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_410A1E;
loc_410A39:
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410A49:
	eax = 0x14A; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+0x98) = eax; //mov
	eax = 0x302; //mov
	edx = (int32_t)(intptr_t)(esp+0x98); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	to32i(esp+0x9C) = eax; //mov
	eax = 2; //mov
	esp -= 4; _sub_402E80(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410A94:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	esp -= 4; _sub_423750(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410ADC:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	esp -= 4; _sub_423690(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410AF9:
	cmp(di, (int16_t)0x4D00);
	if (jnz())
		goto loc_410B0C;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_410B0C:
	eax = (int32_t)(intptr_t)dword_4E5A6C; //mov
	esp -= 4; _sub_47EF30(); esp += 4; //call
	to32i(dword_4D40BC) = eax; //mov
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410B29:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	eax = (int32_t)(intptr_t)dword_512F4C; //mov
	esp -= 4; _sub_47EAE0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41053C;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410B55:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	cmp(to32i(dword_4E5A6C), (int32_t)0);
	if (jz())
		goto loc_410C29;
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	eax = 0x180; //mov
	esp -= 4; _sub_47ED30(); esp += 4; //call
	dx = to16i(eax); //mov
	edi = eax; //mov
	test(dx, dx);
	if (jz())
		goto loc_410C0F;
	xor_(esi, esi);
	xor_(eax, eax);
	xor_(edx, edx);
loc_410B8F:
	ecx = to16i(edi); //movsx
	cmp(edx, ecx);
	if (jge())
		goto loc_410BA7;
	add(esi, (int32_t)4);
	ecx = to32i(edi+4); //mov
	inc(edx);
	add(ecx, eax);
	add(eax, (int32_t)0x40);
	to32i(esp+esi) = ecx; //mov
	goto loc_410B8F;
loc_410BA7:
	eax = (int32_t)(intptr_t)(esp+4); //lea
	xor_(esi, esi);
	xor_(edx, edx);
	to32i(esp+ecx*4+4) = esi; //mov
	esp -= 4; _sub_401090(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_410BCD;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410BCD:
	edx = to32i(edi+4); //mov
	shl(eax, (int32_t)6);
	edi = (int32_t)(intptr_t)(esp+0x84); //lea
	esi = (int32_t)(intptr_t)(edx+eax+0x2C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
loc_410BE3:
	test(ebx, ebx);
	if (jz())
		goto loc_41053C;
	eax = (int32_t)(intptr_t)(esp+0x84); //lea
	esp -= 4; _sub_47E8B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41053C;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410C0F:
	eax = 0x35; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410C29:
	edx = (int32_t)(intptr_t)dword_512F4C; //mov
	eax = (int32_t)(intptr_t)(esp+0x84); //lea
	esp -= 4; _sub_47E7B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_410BE3;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410C4E:
	cmp(di, (int16_t)0xD);
	if (jnz())
		goto loc_41053C;
	xor_(eax, eax);
	esi = (int32_t)(intptr_t)byte_512F5E; //mov
	al = to8i(byte_512F44); //mov
	edi = (int32_t)(intptr_t)(esp+0x58); //lea
	to32i(esp+0x54) = eax; //mov
	push32(edi);
loc_410C6D:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_410C85;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_410C6D;
loc_410C85:
	pop32(edi);
	eax = to32i(dword_512F48); //mov
	to32i(esp+0x80) = eax; //mov
	cmp(to8i(ecx+9), (int8_t)0xA);
	if (jnz())
		goto loc_410CC2;
	to16i(word_513458) = 1; //mov
loc_410CA1:
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_4719B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41053C;
	xor_(ebx, ebx);
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
	return;
loc_410CC2:
	xor_(ecx, ecx);
	to16i(word_513458) = cx; //mov
	goto loc_410CA1;
loc_410CCD:
	test(al, (int8_t)0x10);
	if (jz())
		goto loc_410CFA;
	eax = to32i(esi+8); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(esi+eax*4+8); //mov
	test(to8i(eax+8), (int8_t)1);
	if (jnz())
		goto loc_410633;
	di = to16i(esi+0xA); //mov
	edx = 0x7F; //mov
	dec(edi);
	eax = esi; //mov
	to16i(esi+0xA) = di; //mov
	goto loc_410624;
loc_410CFA:
	eax = to32i(ecx+0x10); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jz())
		goto loc_410633;
	eax = ecx; //mov
	esp -= 4; _sub_410E10(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_410D5A;
	eax = to32i(ecx+0xC); //mov
	dh = to8i(eax); //mov
	test(dh, dh);
	if (jnz())
		goto loc_410D54;
loc_410D21:
	eax = to32i(ecx+0xC); //mov
	xor_(edx, edx);
	esi = to32i(ecx+0x10); //mov
	dl = to8i(eax); //mov
	cmp(to16i(esi+edx*2+2), (int16_t)0);
	if (jz())
		goto loc_410D5A;
	inc(dl);
	to8i(eax) = dl; //mov
	goto loc_410D21;
loc_410D54:
	dl = dh; //mov
	dec(dl);
	to8i(eax) = dl; //mov
loc_410D5A:
	dh = to8i(byte_512DA9); //mov
	cmp(dh, (int8_t)1);
	if (jnz())
		goto loc_410633;
	cmp(dh, to8i(byte_512DF6));
	if (jnz())
		goto loc_410633;
	xor_(ah, ah);
	to8i(byte_512DF6) = ah; //mov
	goto loc_410633;
loc_410D82:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	dl = (int32_t)(intptr_t)byte_512DDC[eax]; //mov
	dec(dl);
	byte_512DDC[eax] = dl; //mov
	edi = (uint8_t)to8i(byte_512DDA); //movzx
	esi = (int32_t)(intptr_t)(edi+edi); //lea
	dh = (int32_t)(intptr_t)byte_4D407C[esi]; //mov
	cmp(dl, dh);
	if (jnb())
		goto loc_4106A5;
	al = dh; //mov
	add(al, (int8_t)byte_4D407D[esi]);
	dec(al);
	byte_512DDC[edi] = al; //mov
	goto loc_4106A5;
loc_410DC4:
	edx = eax; //mov
	dec(edx);
	to16i(esi+0xA) = dx; //mov
loc_410DCB:
	edx = to32i(esi+8); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(esi+edx*4+0xC); //mov
	cmp(to8i(eax), (int8_t)2);
	if (jnz())
		goto loc_4105D4;
	test(to8i(eax+8), (int8_t)1);
	if (jnz())
		goto loc_4105D4;
	cmp(edx, edi);
	if (jz())
		goto loc_410DFB;
	edx = 0x7F; //mov
	eax = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
loc_410DFB:
	eax = esi; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	add(esp, (int32_t)0x9C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ebx);
}
Fn(void) Game::_sub_410E10()
{
	push32(ebx);
	push32(edx);
	bl = to8i(byte_512DAA); //mov
	edx = 1; //mov
	cmp(bl, (int8_t)1);
	if (jnz())
		goto loc_410E3E;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_410E3E;
	ebx = to32i(eax+0xC); //mov
	cmp(ebx, (int32_t)(intptr_t)byte_512DAA);
	if (jz())
		goto loc_410E43;
	cmp(ebx, (int32_t)(intptr_t)byte_512DA9);
	if (jz())
		goto loc_410E43;
loc_410E3E:
	eax = edx; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_410E43:
	push32(0x2ED);
	push32(1);
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_410E3E;
	push32(edi);
	push32(ecx);
	esp -= 4; _sub_41A350(); esp += 4; //call
	xor_(edi, edi);
	xor_(bh, bh);
	xor_(cl, cl);
	to32i(dword_4D76B8) = edi; //mov
	to8i(byte_4E5D26) = bh; //mov
	to8i(byte_4E5A7A) = cl; //mov
	pop32(ecx);
	pop32(edi);
	eax = edx; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_410E80()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x100);
	ecx = eax; //mov
	esp -= 4; _sub_423C40(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_40F540(); esp += 4; //call
loc_410E9A:
	esp -= 4; _sub_405910(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_410E9A;
	edx = to32i(ecx); //mov
	test(edx, edx);
	if (jnz())
		goto loc_410EC2;
loc_410EA9:
	eax = ecx; //mov
	esp -= 4; _sub_423EA0(); esp += 4; //call
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(esp, (int32_t)0x100);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_410EC2:
	eax = edx; //mov
	edx = (int32_t)(intptr_t)byte_4E5FC8; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_410EA9;
	edi = (int32_t)(intptr_t)byte_4E5FC8; //mov
	esi = to32i(ecx); //mov
	push32(edi);
loc_410EDA:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_410EF2;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_410EDA;
loc_410EF2:
	pop32(edi);
	ebx = to32i(dword_4D40B8); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_411009;
loc_410F01:
	xor_(eax, eax);
	edi = to32i(ecx); //mov
	al = to8i(byte_512DFB); //mov
	push32(edi);
	ebp = to32i(off_4D409C+eax*4); //mov
	push32(ebp);
	eax = to32i(dword_5134B4); //mov
	push32(eax);
	push32(aSSS_qfs);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_410F67;
	edx = to32i(ecx); //mov
	push32(edx);
	ebx = to32i(dword_5134B4); //mov
	push32(ebx);
	push32(aSS_qfs);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
loc_410F67:
	cmp(to32i(dword_4D40B8), (int32_t)0);
	if (jnz())
		goto loc_410F9A;
	edi = to32i(ecx); //mov
	push32(edi);
	ebp = to32i(dword_5134B4); //mov
	push32(ebp);
	push32(aSS_fsh);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
loc_410F9A:
	cmp(to32i(dword_4D40B8), (int32_t)0);
	if (jnz())
		goto loc_410FCD;
	edx = to32i(ecx); //mov
	push32(edx);
	ebx = to32i(dword_5134D0); //mov
	push32(ebx);
	push32(aSS_qfs);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
loc_410FCD:
	cmp(to32i(dword_4D40B8), (int32_t)0);
	if (jnz())
		goto loc_410EA9;
	edi = to32i(ecx); //mov
	push32(edi);
	ebp = to32i(dword_5134D4); //mov
	push32(ebp);
	push32(aSS_qfs);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
	goto loc_410EA9;
loc_411009:
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D40B8) = esi; //mov
	goto loc_410F01;
}
Fn(void) Game::_sub_411030()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	ecx = eax; //mov
	esp -= 4; _sub_4118D0(); esp += 4; //call
	esi = 1; //mov
	ax = to16i(word_51345A); //mov
	xor_(edx, edx);
	xor_(ebp, ebp);
	xor_(edi, edi);
	ebx = esi; //mov
	to16i(esp+0xC) = dx; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp) = ebp; //mov
	test(ax, ax);
	if (jnz())
		goto loc_41119E;
	cmp(to8i(byte_51345F), (int8_t)1);
	if (jz())
		goto loc_4111B4;
	to32i(ecx) = (int32_t)(intptr_t)aModem; //mov
loc_41107B:
	eax = ecx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	test(bx, bx);
	if (jz())
		goto loc_411094;
loc_411087:
	esp -= 4; _sub_405910(); esp += 4; //call
	ebx = eax; //mov
	test(ax, ax);
	if (jnz())
		goto loc_411087;
loc_411094:
	cmp(to8i(byte_512DA9), (int8_t)4);
	if (jz())
		goto loc_4111BF;
loc_4110A1:
	test(ebp, ebp);
	if (jnz())
		goto loc_41118D;
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edx = bx; //movsx
	add(edi, eax);
	eax = ecx; //mov
	esp -= 4; _sub_411370(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_40F540(); esp += 4; //call
	test(si, si);
	if (jz())
		goto loc_4110CD;
	eax = ecx; //mov
	esp -= 4; _sub_411820(); esp += 4; //call
loc_4110CD:
	esp -= 4; _sub_423B90(); esp += 4; //call
	dx = to16i(word_513458); //mov
	xor_(esi, esi);
	test(dx, dx);
	if (jnz())
		goto loc_4111F1;
	cmp(to32i(dword_4D24DC), (int32_t)0);
	if (jz())
		goto loc_4111E3;
loc_4110F1:
	xor_(ebx, ebx);
loc_4110F3:
	xor_(eax, eax);
	to16i(esp+0xC) = bx; //mov
	to32i(esp+4) = eax; //mov
	xor_(ebx, ebx);
loc_411100:
	cmp(to8i(byte_512DA9), (int8_t)4);
	if (jnz())
		goto loc_411143;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_41112B;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_41112B;
	cmp(to16i(dword_513408+2), (int16_t)2);
	if (jge())
		goto loc_41112B;
	esp -= 4; _sub_41A350(); esp += 4; //call
loc_41112B:
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_411143;
	edx = to32i(dword_4D76B8); //mov
	test(edx, edx);
	if (jnz())
		goto loc_411143;
	esp -= 4; _sub_47E3D0(); esp += 4; //call
	to32i(esp) = edx; //mov
loc_411143:
	eax = bx; //movsx
	esp -= 4; _sub_40E7C0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_411322;
	esi = 1; //mov
loc_411158:
	cmp(to16i(word_51345A), (int16_t)0);
	if (jz())
		goto loc_4110A1;
	cmp(to16i(word_51345C), (int16_t)0);
	if (jz())
		goto loc_411188;
	esp -= 4; _sub_401080(); esp += 4; //call
	eax = 0x300; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_402CD0(); esp += 4; //call
	to16i(word_51345C) = bx; //mov
loc_411188:
	ebp = 0xFFFFFFFF; //mov
loc_41118D:
	esp -= 4; _sub_411860(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41119E:
	esp -= 4; _sub_411860(); esp += 4; //call
	ebp = 0xFFFFFFFE; //mov
	eax = ebp; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4111B4:
	to32i(ecx) = (int32_t)(intptr_t)aNetwork; //mov
	goto loc_41107B;
loc_4111BF:
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jnz())
		goto loc_4111D2;
	esp -= 4; _sub_47E3D0(); esp += 4; //call
	goto loc_4110A1;
loc_4111D2:
	to32i(esp) = 1; //mov
	esp -= 4; _sub_4117E0(); esp += 4; //call
	goto loc_4110A1;
loc_4111E3:
	cmp(to16i(dword_513428+2), (int16_t)1);
	if (jz())
		goto loc_4110F1;
loc_4111F1:
	eax = ecx; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esi = eax; //mov
	esp -= 4; _sub_405910(); esp += 4; //call
	ebx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_4110F3;
	eax = ax; //cwde
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+0xA); //mov
	edx = to32i(esp+8); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jz())
		goto loc_411299;
loc_41121E:
	cmp(bx, (int16_t)0x1B);
	if (jnz())
		goto loc_4112A8;
loc_411228:
	esi = bx; //movsx
	eax = ecx; //mov
	edx = esi; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	edx = eax; //mov
	ebp = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_40F370(); esp += 4; //call
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4112E0;
loc_411248:
	cmp(to8i(byte_512F45), (int8_t)0);
	if (jz())
		goto loc_4112EE;
	xor_(al, al);
	xor_(ebp, ebp);
	to8i(byte_512F45) = al; //mov
loc_41125E:
	esi = 1; //mov
loc_411263:
	eax = to32i(esp+0xA); //mov
	edx = bx; //movsx
	sar(eax, (int32_t)0x10);
	cmp(edx, eax);
	if (jz())
		goto loc_41131A;
	eax = (int32_t)(intptr_t)(edi+0xF); //lea
loc_411278:
	to32i(esp+4) = eax; //mov
	xor_(eax, eax);
	al = to8i(byte_512DB9); //mov
	al = (int32_t)(intptr_t)dword_411020[eax*4]; //mov
	to16i(esp+0xC) = bx; //mov
	to8i(byte_512DB8) = al; //mov
	goto loc_411100;
loc_411299:
	cmp(edi, to32i(esp+4));
	if (jg())
		goto loc_41121E;
	goto loc_4110F3;
loc_4112A8:
	cmp(bx, (int16_t)0xD);
	if (jz())
		goto loc_411228;
	cmp(bx, (int16_t)0x4800);
	if (jz())
		goto loc_411228;
	cmp(bx, (int16_t)0x5000);
	if (jz())
		goto loc_411228;
	cmp(bx, (int16_t)0x4B00);
	if (jz())
		goto loc_411228;
	cmp(bx, (int16_t)0x4D00);
	if (jz())
		goto loc_411228;
	goto loc_411263;
loc_4112E0:
	cmp(edx, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_411248;
	goto loc_41125E;
loc_4112EE:
	push32(0x2FF);
	edx = 1; //mov
	push32(edx);
	to32i(dword_4DA1B8) = edx; //mov
	esp -= 4; _sub_401AE0(); esp += 4; //call
	add(esp, (int32_t)8);
	test(eax, eax);
	if (jnz())
		goto loc_41130D;
	xor_(ebp, ebp);
loc_41130D:
	xor_(esi, esi);
	to32i(dword_4DA1B8) = esi; //mov
	goto loc_41125E;
loc_41131A:
	eax = (int32_t)(intptr_t)(edi+5); //lea
	goto loc_411278;
loc_411322:
	esp -= 4; _sub_40E420(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_411158;
	eax = ecx; //mov
	esp -= 4; _sub_411820(); esp += 4; //call
	esp -= 4; _sub_40E370(); esp += 4; //call
	cmp(to8i(byte_512DA9), (int8_t)4);
	if (jnz())
		goto loc_411352;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_411352;
	esp -= 4; _sub_4116F0(); esp += 4; //call
loc_411352:
	ebp = 0xFFFFFFFD; //mov
	eax = ebp; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_411370()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	cmp(to8i(byte_512F45), (int8_t)0);
	if (jnz())
		goto loc_4114ED;
	eax = esi; //mov
	xor_(edx, edx);
loc_411389:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_41152D;
loc_411397:
	ecx = to32i(eax+0xC); //mov
	and_(to8i(ecx+8), (int8_t)0xFE);
loc_41139E:
	inc(edx);
	add(eax, (int32_t)4);
	cmp(edx, (int32_t)0xA);
	if (jle())
		goto loc_411389;
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_4114A5;
	test(to8i(byte_512DBC), (int8_t)1);
	if (jz())
		goto loc_411542;
	to32i(off_4D3F18) = (int32_t)(intptr_t)dword_4D2978; //mov
loc_4113CC:
	cmp(to8i(byte_512DAA), (int8_t)1);
	if (jnz())
		goto loc_411566;
	ebx = (int32_t)(intptr_t)dword_4D2968; //mov
	dl = to8i(byte_512DB0); //mov
	to32i(off_4D3F18) = ebx; //mov
	cmp(dl, (int8_t)7);
	if (jnz())
		goto loc_411566;
	xor_(bl, bl);
	to8i(byte_512DB0) = bl; //mov
loc_4113FB:
	eax = to32i(esi+0x24); //mov
	bh = to8i(eax+8); //mov
	cl = 1; //mov
	or_(bh, (int8_t)1);
	to8i(byte_512DF8) = cl; //mov
	to8i(eax+8) = bh; //mov
loc_41140F:
	ch = to8i(byte_512DAA); //mov
	test(ch, ch);
	if (jz())
		goto loc_4115A5;
	cmp(ch, (int8_t)2);
	if (jnz())
		goto loc_411578;
	eax = to32i(esi+0x14); //mov
	or_(to8i(eax+8), (int8_t)1);
	xor_(dh, dh);
	to8i(byte_512DB9) = ch; //mov
	to8i(byte_512DB0) = dh; //mov
loc_41143B:
	bh = to8i(byte_512F42); //mov
	cmp(bh, (int8_t)0xF);
	if (jnz())
		goto loc_411597;
loc_41144A:
	al = to8i(byte_512F43); //mov
	add(al, (int8_t)0xC);
	to8i(byte_512F42) = al; //mov
loc_411456:
	eax = to32i(esi+0x18); //mov
	or_(to8i(eax+8), (int8_t)1);
	eax = to32i(esi+0x20); //mov
	or_(to8i(eax+8), (int8_t)1);
	eax = to32i(esi+0x24); //mov
	dh = to8i(eax+8); //mov
	bl = 1; //mov
	or_(dh, (int8_t)1);
	to8i(byte_512DF8) = bl; //mov
	to8i(eax+8) = dh; //mov
loc_411478:
	bh = to8i(byte_512DAA); //mov
	cmp(bh, (int8_t)1);
	if (jnz())
		goto loc_411492;
	cmp(to32i(dword_4D76B8), (int32_t)0);
	if (jz())
		goto loc_411492;
	eax = to32i(esi+0x10); //mov
	or_(to8i(eax+8), bh);
loc_411492:
	xor_(eax, eax);
	al = to8i(byte_512DB9); //mov
	al = (int32_t)(intptr_t)dword_411020[eax*4]; //mov
	to8i(byte_512DB8) = al; //mov
loc_4114A5:
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
	cmp(byte_4D407D[eax*2], (int8_t)0);
	if (jnz())
		goto loc_4115E1;
	or_(to8i(byte_4D4000), (int8_t)1);
loc_4114C1:
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512F42); //mov
	dl = to8i(byte_512F43); //mov
	ecx = (int32_t)(intptr_t)(eax-0xC); //lea
	cmp(ecx, edx);
	if (jz())
		goto loc_4114ED;
	cmp(to8i(byte_512DAA), (int8_t)2);
	if (jnz())
		goto loc_4115ED;
	al = dl; //mov
loc_4114E6:
	add(al, (int8_t)0xC);
	to8i(byte_512F42) = al; //mov
loc_4114ED:
	cmp(to8i(byte_512DBF), (int8_t)0xB);
	if (jbe())
		goto loc_4114FE;
	xor_(dh, dh);
	to8i(byte_512DBF) = dh; //mov
loc_4114FE:
	to32i(off_4D3FE0) = (int32_t)(intptr_t)dword_4D2EDC; //mov
	eax = edi; //mov
	esp -= 4; _sub_40F370(); esp += 4; //call
	cmp(to8i(byte_512F45), (int8_t)0);
	if (jz())
		goto loc_411528;
	eax = to32i(esi+0x34); //mov
	test(to8i(eax+8), (int8_t)1);
	if (jz())
		goto loc_4116BB;
loc_411528:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41152D:
	cmp(edx, (int32_t)6);
	if (jg())
		goto loc_411397;
	ecx = to32i(eax+0xC); //mov
	or_(to8i(ecx+8), (int8_t)1);
	goto loc_41139E;
loc_411542:
	cmp(to8i(byte_512DB0), (int8_t)7);
	if (jnz())
		goto loc_4113CC;
	xor_(al, al);
	edx = (int32_t)(intptr_t)dword_4D2968; //mov
	to8i(byte_512DB0) = al; //mov
	to32i(off_4D3F18) = edx; //mov
	goto loc_4113CC;
loc_411566:
	cmp(to8i(byte_512DB0), (int8_t)0);
	if (jz())
		goto loc_4113FB;
	goto loc_41140F;
loc_411578:
	eax = to32i(esi+0x1C); //mov
	or_(to8i(eax+8), (int8_t)1);
	xor_(al, al);
	to8i(byte_512DB9) = al; //mov
	eax = edi; //mov
	esp -= 4; _sub_40DEA0(); esp += 4; //call
	esp -= 4; _sub_407B60(); esp += 4; //call
	goto loc_41143B;
loc_411597:
	cmp(bh, (int8_t)0xC);
	if (jb())
		goto loc_41144A;
	goto loc_411456;
loc_4115A5:
	cmp(to8i(byte_512F42), (int8_t)0xF);
	if (jz())
		goto loc_4115C1;
	eax = to32i(esi+0x24); //mov
	or_(to8i(eax+8), (int8_t)1);
	to8i(byte_512DF8) = 1; //mov
	goto loc_411478;
loc_4115C1:
	cmp(to8i(byte_512DF8), (int8_t)1);
	if (jz())
		goto loc_411478;
	eax = to32i(esi+0x20); //mov
	or_(to8i(eax+8), (int8_t)1);
	to8i(byte_512F42) = 0xF; //mov
	goto loc_411478;
loc_4115E1:
	and_(to8i(byte_4D4000), (int8_t)0xFE);
	goto loc_4114C1;
loc_4115ED:
	cmp(to16i(esi+0xA), (int16_t)5);
	if (jz())
		goto loc_411613;
	cmp(al, (int8_t)0xF);
	if (jz())
		goto loc_4114ED;
	esp -= 4; _sub_407B80(); esp += 4; //call
	cmp(eax, edx);
	if (jz())
		goto loc_4114ED;
	al = to8i(byte_512F43); //mov
	goto loc_4114E6;
loc_411613:
	cmp(edi, (int32_t)0x4B00);
	if (jnz())
		goto loc_41166D;
	ecx = 0x10; //mov
loc_411620:
	cmp(to8i(byte_512F42), (int8_t)0xF);
	if (jz())
		goto loc_4114ED;
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_512F42); //mov
	dl = to8i(byte_512F43); //mov
	esp -= 4; _sub_407B80(); esp += 4; //call
	cmp(eax, edx);
	if (jz())
		goto loc_4114ED;
	ah = to8i(byte_512F42); //mov
	xor_(edx, edx);
	dec(ah);
	dl = ah; //mov
	add(edx, (int32_t)0x10);
	to8i(byte_512F42) = ah; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512F42) = dl; //mov
	goto loc_411620;
loc_41166D:
	cl = to8i(byte_512F42); //mov
	cmp(cl, (int8_t)0xF);
	if (jz())
		goto loc_4114ED;
	xor_(eax, eax);
	xor_(edx, edx);
	al = cl; //mov
	dl = to8i(byte_512F43); //mov
	esp -= 4; _sub_407B80(); esp += 4; //call
	cmp(eax, edx);
	if (jz())
		goto loc_4114ED;
	ch = to8i(byte_512F42); //mov
	xor_(edx, edx);
	inc(ch);
	dl = ch; //mov
	to8i(byte_512F42) = ch; //mov
	ecx = 0x10; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to8i(byte_512F42) = dl; //mov
	goto loc_41166D;
loc_4116BB:
	eax = esi; //mov
	to16i(esi+0xA) = 0xB; //mov
	esp -= 4; _sub_423E10(); esp += 4; //call
	eax = esi; //mov
	ecx = (int32_t)(intptr_t)(esi+0x2C); //lea
loc_4116CD:
	edx = to32i(eax+0xC); //mov
	bl = to8i(edx+8); //mov
	or_(bl, (int8_t)1);
	add(eax, (int32_t)4);
	to8i(edx+8) = bl; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_4116CD;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4116F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = to32i(dword_4D76B8); //mov
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_4117C6;
	ebp = 2; //mov
loc_41170F:
	ebx = to32i(dword_4E5FDC+2+ebp); //mov
	eax = to32i(dword_51340C+ebp); //mov
	sar(ebx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, ebx);
	if (jz())
		goto loc_4117BA;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4117BA;
	eax = 2; //mov
loc_411737:
	edx = to32i(dword_4E5FDC+2+eax); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jle())
		goto loc_41174B;
	dec(to32i(dword_4E5FE0+eax));
loc_41174B:
	add(eax, (int32_t)2);
	cmp(eax, (int32_t)0x10);
	if (jnz())
		goto loc_411737;
	eax = ebx; //mov
	cmp(ebx, (int32_t)7);
	if (jge())
		goto loc_4117A0;
	ecx = (int32_t)(intptr_t)(ebx+ebx); //lea
loc_41175D:
	dh = (int32_t)(intptr_t)byte_512AD0[eax]; //mov
	dl = (int32_t)(intptr_t)byte_512AD1[eax]; //mov
	byte_512AD0[eax] = dl; //mov
	add(ecx, (int32_t)2);
	byte_512AD1[eax] = dh; //mov
	edx = edi; //mov
	si = to16i(ecx+edx+0x2B0); //mov
	bx = to16i(ecx+edx+0x2AE); //mov
	to16i(ecx+edx+0x2AE) = si; //mov
	inc(eax);
	to16i(ecx+edx+0x2B0) = bx; //mov
	cmp(eax, (int32_t)7);
	if (jl())
		goto loc_41175D;
loc_4117A0:
	ecx = to32i(dword_512268); //mov
	edx = to32i(dword_512264); //mov
	inc(ecx);
	dec(edx);
	to32i(dword_512268) = ecx; //mov
	to32i(dword_512264) = edx; //mov
loc_4117BA:
	add(ebp, (int32_t)2);
	cmp(ebp, (int32_t)0x10);
	if (jnz())
		goto loc_41170F;
loc_4117C6:
	to32i(dword_4D76B8) = edi; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4117E0()
{
	cmp(to16i(word_513458), (int16_t)0);
	if (jnz())
		goto loc_4117EB;
	return;
loc_4117EB:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = 0x10; //mov
	esi = (int32_t)(intptr_t)(dword_51340C+2); //mov
	edi = (int32_t)(intptr_t)dword_4E5FE0; //mov
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
	pop32(ecx);
	pop32(esi);
	pop32(edi);
}
Fn(void) Game::_sub_411820()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = to32i(esi+4); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	esp -= 4; _sub_40E040(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_411860()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = 0x2D0; //mov
	ebx = 0x2C4; //mov
	ecx = 0x2B0; //mov
	esi = 0x281; //mov
	to16i(word_4D3BBE) = dx; //mov
	to16i(word_4D3C2A) = bx; //mov
	to16i(word_4D3CAA) = cx; //mov
	edx = to32i(dword_4D76B8); //mov
	to16i(word_4D3D52) = si; //mov
	test(edx, edx);
	if (jz())
		goto loc_4118A3;
	esp -= 4; _sub_41A350(); esp += 4; //call
loc_4118A3:
	esp -= 4; _sub_463E40(); esp += 4; //call
	cmp(to8i(byte_512DB0), (int8_t)7);
	if (jz())
		goto loc_4118B6;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4118B6:
	xor_(dl, dl);
	to8i(byte_512DB0) = dl; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4118D0()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	push32(edi);
	push32(ebx);
	edx = 1; //mov
	ecx = to32i(dword_4D21AC); //mov
	to32i(dword_4D2310) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_41195B;
loc_4118EC:
	edx = 0x2D1; //mov
	ebx = 0x2C5; //mov
	xor_(edi, edi);
	ecx = 0x2B1; //mov
	to32i(dword_4D24DC) = edi; //mov
	to16i(word_4D3BBE) = dx; //mov
	to16i(word_4D3C2A) = bx; //mov
	edi = 0x282; //mov
	to16i(word_4D3CAA) = cx; //mov
	to16i(word_4D3D52) = di; //mov
	esp -= 4; _sub_403B20(); esp += 4; //call
	xor_(ah, ah);
	xor_(edx, edx);
	to8i(byte_512F45) = ah; //mov
	eax = esi; //mov
	pop32(ebx);
	pop32(edi);
loc_411937:
	cmp(to16i(word_513458), (int16_t)0);
	if (jz())
		goto loc_41197B;
loc_411941:
	ecx = to32i(eax+0xC); //mov
	and_(to8i(ecx+8), (int8_t)0xFE);
loc_411948:
	inc(edx);
	add(eax, (int32_t)4);
	cmp(edx, (int32_t)0xA);
	if (jle())
		goto loc_411937;
	to16i(esi+0xA) = 7; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_41195B:
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	ebx = 1; //mov
	esp -= 4; _sub_476750(); esp += 4; //call
	to32i(dword_4D21AC) = ebx; //mov
	goto loc_4118EC;
loc_41197B:
	cmp(edx, (int32_t)6);
	if (jg())
		goto loc_411941;
	ecx = to32i(eax+0xC); //mov
	or_(to8i(ecx+8), (int8_t)1);
	goto loc_411948;
}
Fn(void) Game::_sub_411BD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x218);
	to32i(esp+0x1F8) = eax; //mov
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x1A8); //lea
	esi = (int32_t)(intptr_t)dword_411AF8; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x1D8); //lea
	esi = (int32_t)(intptr_t)dword_411B10; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 6; //mov
	edi = (int32_t)(intptr_t)(esp+0x190); //lea
	esi = (int32_t)(intptr_t)dword_411B28; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(edx, edx);
	edi = (int32_t)(intptr_t)(esp+0x1C0); //lea
	xor_(ecx, ecx);
	esi = (int32_t)(intptr_t)dword_411B40; //mov
	to32i(esp+0x1F0) = ecx; //mov
	to32i(esp+0x204) = ecx; //mov
	to32i(esp+0x1F4) = ecx; //mov
	ecx = 6; //mov
	to32i(esp+0x208) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = 1; //mov
	ecx = 0x1E; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_411B58; //mov
	bx = to16i(word_4D3ECE); //mov
	to32i(esp+0x214) = edx; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(bx, (int16_t)3);
	if (jz())
		goto loc_411E5F;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
loc_411C81:
	to32i(esp+0x1FC) = eax; //mov
	edx = to32i(esp+0x1FC); //mov
	eax = to32i(esp+0x1F8); //mov
	esp -= 4; _sub_413180(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	edi = to32i(esp+0x208); //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	test(edi, edi);
	if (jnz())
		goto loc_412064;
loc_411CB6:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	edx = to32i(esp+0x204); //mov
	ecx = to32i(esp+0x1F4); //mov
	xor_(ebx, ebx);
	add(edx, eax);
	add(ecx, eax);
	esp -= 4; _sub_428A20(); esp += 4; //call
	eax = (int32_t)(intptr_t)aBack_0; //mov
	to32i(esp+0x204) = edx; //mov
	to32i(esp+0x1F4) = ecx; //mov
	edx = 0x400; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	xor_(eax, eax);
	edx = 0x400; //mov
	al = to8i(byte_512DFB); //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	eax = to32i(off_4D4134+eax*4); //mov
	esi = to32i(esp+0x1FC); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	ecx = 0x12; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	push32(2);
	ebx = 0xC8; //mov
	eax = to32i(esp+esi*2+0x1AA); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	edx = 0xEC; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(2);
	ecx = 0x12; //mov
	ebx = 0x15E; //mov
	eax = to32i(esp+esi*2+0x1DA); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	edx = 0x29; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	push32(2);
	ecx = 0x12; //mov
	ebx = 0x15E; //mov
	eax = to32i(esp+esi*2+0x192); //mov
	push32(3);
	sar(eax, (int32_t)0x10);
	edx = 0xEC; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	esp -= 4; _sub_4054E0(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esi*8+0); //lea
	eax = to32i(esp+edx); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_41B650(); esp += 4; //call
	to32i(esp+0x210) = ebx; //mov
	to32i(esp+0x200) = edx; //mov
	esi = to32i(esp+edx+4); //mov
	to32i(esp+0x20C) = eax; //mov
	test(esi, esi);
	if (jle())
		goto loc_411F1E;
loc_411DC9:
	ebp = to32i(esp+0x200); //mov
	edx = to32i(esp+0x210); //mov
	ebp = to32i(esp+ebp); //mov
	xor_(ah, ah);
	add(ebp, edx);
	to8i(esp+0x118) = ah; //mov
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esp+0xC8); //lea
	esp -= 4; _sub_41B710(); esp += 4; //call
	esi = eax; //mov
	push32(edi);
loc_411DF6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_411E0E;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_411DF6;
loc_411E0E:
	pop32(edi);
	eax = ebp; //mov
	esp -= 4; _sub_41B670(); esp += 4; //call
	esi = eax; //mov
loc_411E18:
	eax = (int32_t)(intptr_t)(esp+0xC8); //lea
	esp -= 4; _sub_482424(); esp += 4; //call
	edx = to32i(dword_4DAB7C); //mov
	add(eax, esi);
	sub(edx, (int32_t)5);
	cmp(eax, edx);
	if (jle())
		goto loc_411E6B;
	edx = (int32_t)(intptr_t)(esp+0x78); //lea
	eax = (int32_t)(intptr_t)(esp+0xC8); //lea
	esp -= 4; _sub_412290(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x78); //lea
	eax = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_412240(); esp += 4; //call
	cmp(to8i(esp+0xC8), (int8_t)0);
	if (jz())
		goto loc_411E6B;
	goto loc_411E18;
loc_411E5F:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	goto loc_411C81;
loc_411E6B:
	cmp(to8i(esp+0xC8), (int8_t)0);
	if (jz())
		goto loc_411EB2;
	eax = ebp; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	eax = ax; //cwde
	push32(eax);
	eax = ebp; //mov
	ebx = to32i(esp+0x20E); //mov
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	edx = si; //movsx
	push32(eax);
	eax = ebp; //mov
	sar(ebx, (int32_t)0x10);
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0xD0); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(to32i(esp+0x20C), (int32_t)0x1A);
loc_411EB2:
	cmp(to8i(esp+0x118), (int8_t)0);
	if (jz())
		goto loc_411EFC;
	eax = ebp; //mov
	esp -= 4; _sub_41B6D0(); esp += 4; //call
	eax = ax; //cwde
	ebx = to32i(esp+0x20A); //mov
	push32(eax);
	eax = ebp; //mov
	add(esi, (int32_t)0x31);
	esp -= 4; _sub_41B690(); esp += 4; //call
	eax = ax; //cwde
	sar(ebx, (int32_t)0x10);
	push32(eax);
	eax = ebp; //mov
	edx = si; //movsx
	esp -= 4; _sub_41B6F0(); esp += 4; //call
	ecx = ax; //movsx
	eax = (int32_t)(intptr_t)(esp+0x120); //lea
	esp -= 4; _sub_4054E0(); esp += 4; //call
	add(to32i(esp+0x20C), (int32_t)0x1A);
loc_411EFC:
	edi = to32i(esp+0x210); //mov
	edx = to32i(esp+0x200); //mov
	inc(edi);
	ebp = to32i(esp+edx+4); //mov
	to32i(esp+0x210) = edi; //mov
	cmp(edi, ebp);
	if (jl())
		goto loc_411DC9;
loc_411F1E:
	esp -= 4; _sub_405C70(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	cmp(to32i(esp+0x1F4), (int32_t)0xA0);
	if (jle())
		goto loc_411F88;
	cmp(to16i(esp+0x214), (int16_t)1);
	if (jnz())
		goto loc_411F88;
	eax = to32i(esp+0x1FC); //mov
	eax = to32i(esp+eax*2+0x1BE); //mov
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(aHD0);
	eax = (int32_t)(intptr_t)(esp+0x170); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+0x168); //lea
	xor_(edi, edi);
	esp -= 4; _sub_403480(); esp += 4; //call
	esp -= 4; _sub_486F28(); esp += 4; //call
	to32i(esp+0x214) = edi; //mov
loc_411F88:
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_412056;
	ecx = to32i(esp+0x204); //mov
	cmp(ecx, to32i(esp+0x1F0));
	if (jle())
		goto loc_412056;
	add(ecx, (int32_t)0xF);
	to32i(esp+0x1F0) = ecx; //mov
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_4120FB;
	eax = to32i(esp+0x1F8); //mov
	cmp(to16i(eax+0xA), (int16_t)0);
	if (jnz())
		goto loc_4120FB;
	edx = 0x7F; //mov
	xor_(eax, eax);
	ebx = to32i(esp+0x1FC); //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(ebx, (int32_t)8);
	if (jnz())
		goto loc_4120A3;
	to32i(esp+0x1FC) = 7; //mov
loc_411FF9:
	esi = to32i(esp+0x1FC); //mov
	dec(esi);
	to32i(esp+0x1FC) = esi; //mov
	test(esi, esi);
	if (jl())
		goto loc_4120E6;
loc_412010:
	ebp = 1; //mov
	edx = to32i(esp+0x1FC); //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = ebp; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	esp -= 4; _sub_413180(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	edi = 1; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x214) = edi; //mov
	to32i(esp+0x1F4) = eax; //mov
loc_412056:
	cmp(to32i(esp+0x208), (int32_t)0);
	if (jz())
		goto loc_411CB6;
loc_412064:
	to32i(dword_4D1FFC) = 1; //mov
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	cmp(to16i(word_4D3ECE), (int16_t)3);
	if (jnz())
		goto loc_412216;
	al = to8i(esp+0x1FC); //mov
	to8i(byte_512DDA) = al; //mov
	eax = to32i(esp+0x208); //mov
	add(esp, (int32_t)0x218);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4120A3:
	cmp(ebx, (int32_t)5);
	if (jnz())
		goto loc_4120B8;
	to32i(esp+0x1FC) = 3; //mov
	goto loc_411FF9;
loc_4120B8:
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_4120CD;
	to32i(esp+0x1FC) = 1; //mov
	goto loc_411FF9;
loc_4120CD:
	cmp(ebx, (int32_t)0xA);
	if (jnz())
		goto loc_411FF9;
	to32i(esp+0x1FC) = 9; //mov
	goto loc_411FF9;
loc_4120E6:
	eax = to32i(dword_4E5FF8); //mov
	sar(eax, (int32_t)0x10);
	dec(eax);
	to32i(esp+0x1FC) = eax; //mov
	goto loc_412010;
loc_4120FB:
	cmp(dx, (int16_t)0xD);
	if (jnz())
		goto loc_4121AD;
loc_412105:
	eax = to32i(esp+0x1F8); //mov
	cmp(to16i(eax+0xA), (int16_t)0);
	if (jnz())
		goto loc_4121B8;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esi = to32i(esp+0x1FC); //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(esi, (int32_t)7);
	if (jnz())
		goto loc_4121D3;
	to32i(esp+0x1FC) = 8; //mov
loc_41213E:
	edi = to32i(esp+0x1FC); //mov
	eax = to32i(dword_4E5FF8); //mov
	inc(edi);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x1FC) = edi; //mov
	cmp(eax, edi);
	if (jnz())
		goto loc_412162;
	xor_(eax, edi);
	to32i(esp+0x1FC) = eax; //mov
loc_412162:
	edx = 1; //mov
	esi = 1; //mov
	xor_(eax, eax);
	xor_(ecx, ecx);
	to32i(dword_4D1FFC) = edx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	edx = to32i(esp+0x1FC); //mov
	eax = to32i(esp+0x1F8); //mov
	to32i(esp+0x214) = esi; //mov
	esp -= 4; _sub_413180(); esp += 4; //call
	eax = to32i(esp+0x1F8); //mov
	to32i(esp+0x1F4) = ecx; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	goto loc_412056;
loc_4121AD:
	cmp(dx, (int16_t)0x4D00);
	if (jz())
		goto loc_412105;
loc_4121B8:
	eax = to32i(esp+0x1F8); //mov
	edx = dx; //movsx
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x208) = eax; //mov
	goto loc_412056;
loc_4121D3:
	cmp(esi, (int32_t)3);
	if (jnz())
		goto loc_4121E8;
	to32i(esp+0x1FC) = 5; //mov
	goto loc_41213E;
loc_4121E8:
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_4121FD;
	to32i(esp+0x1FC) = 2; //mov
	goto loc_41213E;
loc_4121FD:
	cmp(esi, (int32_t)9);
	if (jnz())
		goto loc_41213E;
	to32i(esp+0x1FC) = 0xA; //mov
	goto loc_41213E;
loc_412216:
	al = to8i(esp+0x1FC); //mov
	to8i(byte_512DBF) = al; //mov
	eax = to32i(esp+0x208); //mov
	add(esp, (int32_t)0x218);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_412240()
{
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x50);
	edi = eax; //mov
	esi = edx; //mov
	cmp(to8i(edx), (int8_t)0);
	if (jz())
		goto loc_41226D;
	cmp(to8i(edi), (int8_t)0);
	if (jnz())
		goto loc_412273;
loc_412253:
	push32(edi);
loc_412254:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_41226C;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_412254;
loc_41226C:
	pop32(edi);
loc_41226D:
	add(esp, (int32_t)0x50);
	pop32(edi);
	pop32(esi);
	return;
loc_412273:
	push32(edi);
	push32(esi);
	push32(aSS);
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(esi);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	esi = esp; //mov
	goto loc_412253;
}
Fn(void) Game::_sub_412290()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	ebx = edx; //mov
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
	ah = to8i(ebp+0); //mov
	esi = ecx; //mov
	test(ah, ah);
	if (jz())
		goto loc_4122EF;
	cmp(to8i(edx), (int8_t)0);
	if (jz())
		goto loc_4122EF;
	eax = ecx; //mov
	add(ecx, ebp);
	to8i(ebx) = 0; //mov
	edx = ecx; //mov
	cmp(to8i(ecx), (int8_t)0x20);
	if (jz())
		goto loc_4122CF;
loc_4122C1:
	test(eax, eax);
	if (jl())
		goto loc_4122CF;
	cl = to8i(edx-1); //mov
	dec(edx);
	dec(eax);
	cmp(cl, (int8_t)0x20);
	if (jnz())
		goto loc_4122C1;
loc_4122CF:
	edi = eax; //mov
	ecx = (int32_t)(intptr_t)(eax+ebp); //lea
	edx = ebx; //mov
	cmp(eax, esi);
	if (jge())
		goto loc_4122E8;
loc_4122DA:
	inc(edx);
	bl = to8i(ecx); //mov
	inc(ecx);
	inc(eax);
	to8i(edx-1) = bl; //mov
	cmp(eax, esi);
	if (jl())
		goto loc_4122DA;
loc_4122E8:
	to8i(edx) = 0; //mov
	to8i(edi+ebp) = 0; //mov
loc_4122EF:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_412300()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	edi = eax; //mov
	ecx = 1; //mov
	eax = 1; //mov
	xor_(esi, esi);
	xor_(ebp, ebp);
	to32i(dword_4D1FFC) = eax; //mov
	xor_(eax, eax);
	to32i(esp) = esi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	dx = to16i(word_4D3ECE); //mov
	to32i(esp+4) = esi; //mov
	cmp(dx, (int16_t)3);
	if (jz())
		goto loc_412473;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
loc_412344:
	to32i(esp+8) = eax; //mov
	edx = to32i(esp+8); //mov
	ebx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_413100(); esp += 4; //call
	eax = edi; //mov
	edx = to32i(esp); //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_412444;
loc_412367:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(ebp, eax);
	test(cx, cx);
	if (jz())
		goto loc_412397;
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)aBack_0; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	esp -= 4; _sub_405C70(); esp += 4; //call
loc_412397:
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_423B90(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	ecx = eax; //mov
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_41243A;
	cmp(ebp, to32i(esp+4));
	if (jle())
		goto loc_41243A;
	ebx = (int32_t)(intptr_t)(ebp+0xF); //lea
	ecx = 1; //mov
	to32i(esp+4) = ebx; //mov
	cmp(ax, (int16_t)0x4D00);
	if (jnz())
		goto loc_41247F;
loc_4123DC:
	cmp(to16i(edi+0xA), (int16_t)1);
	if (jnz())
		goto loc_412489;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	edx = to32i(esp+8); //mov
	ebx = to32i(dword_4E5FF8); //mov
	inc(edx);
	sar(ebx, (int32_t)0x10);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(esp+8) = edx; //mov
	cmp(edx, (int32_t)3);
loc_41240F:
	if (jnz())
		goto loc_412418;
	cmp(esi, (int32_t)7);
	if (jl())
		goto loc_412418;
	xor_(esi, esi);
loc_412418:
	cmp(to32i(esp+8), (int32_t)5);
	if (jnz())
		goto loc_412426;
	cmp(esi, (int32_t)7);
	if (jl())
		goto loc_412426;
loc_412424:
	xor_(esi, esi);
loc_412426:
	edx = to32i(esp+8); //mov
	ebx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_413100(); esp += 4; //call
	eax = edi; //mov
	esp -= 4; _sub_412580(); esp += 4; //call
loc_41243A:
	cmp(to32i(esp), (int32_t)0);
	if (jz())
		goto loc_412367;
loc_412444:
	cmp(to16i(word_4D3ECE), (int16_t)3);
	if (jnz())
		goto loc_41256F;
	al = to8i(esp+8); //mov
	to8i(byte_512DDA) = al; //mov
loc_41245B:
	esi = 1; //mov
	eax = to32i(esp); //mov
	to32i(dword_4D4154) = esi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_412473:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	goto loc_412344;
loc_41247F:
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_4123DC;
loc_412489:
	cmp(dx, (int16_t)0x4B00);
	if (jnz())
		goto loc_4124C9;
	cmp(to16i(edi+0xA), (int16_t)1);
	if (jnz())
		goto loc_4124C9;
	edx = 0x7F; //mov
	xor_(eax, eax);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = to32i(esp+8); //mov
	dec(eax);
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4124BA;
loc_4124B0:
	cmp(to32i(esp+8), (int32_t)3);
	goto loc_41240F;
loc_4124BA:
	eax = to32i(dword_4E5FF8); //mov
	sar(eax, (int32_t)0x10);
	dec(eax);
	to32i(esp+8) = eax; //mov
	goto loc_4124B0;
loc_4124C9:
	cmp(dx, (int16_t)0x4D00);
	if (jnz())
		goto loc_412512;
loc_4124D0:
	cmp(to16i(edi+0xA), (int16_t)0);
	if (jnz())
		goto loc_412518;
	edx = 0x7F; //mov
	xor_(eax, eax);
	inc(esi);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	cmp(esi, (int32_t)8);
	if (jnz())
		goto loc_4124EB;
	xor_(esi, esi);
loc_4124EB:
	cmp(to32i(esp+8), (int32_t)3);
	if (jnz())
		goto loc_4124F9;
	cmp(esi, (int32_t)7);
	if (jnz())
		goto loc_4124F9;
	xor_(esi, esi);
loc_4124F9:
	cmp(to32i(esp+8), (int32_t)5);
	if (jnz())
		goto loc_412426;
	cmp(esi, (int32_t)7);
	if (jnz())
		goto loc_412426;
	goto loc_412424;
loc_412512:
	cmp(dx, (int16_t)0xD);
	if (jz())
		goto loc_4124D0;
loc_412518:
	cmp(dx, (int16_t)0x4B00);
	if (jnz())
		goto loc_41255D;
	cmp(to16i(edi+0xA), (int16_t)0);
	if (jnz())
		goto loc_41255D;
	edx = 0x7F; //mov
	xor_(eax, eax);
	dec(esi);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	test(esi, esi);
	if (jge())
		goto loc_412426;
	esi = to32i(esp+8); //mov
	cmp(esi, (int32_t)3);
	if (jnz())
		goto loc_41254E;
loc_412544:
	esi = 6; //mov
	goto loc_412426;
loc_41254E:
	cmp(esi, (int32_t)5);
	if (jz())
		goto loc_412544;
	esi = 7; //mov
	goto loc_412426;
loc_41255D:
	edx = dx; //movsx
	eax = edi; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp) = eax; //mov
	goto loc_41243A;
loc_41256F:
	al = to8i(esp+8); //mov
	to8i(byte_512DBF) = al; //mov
	goto loc_41245B;
}
Fn(void) Game::_sub_412580()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x100);
	ecx = eax; //mov
	edx = to32i(eax); //mov
	test(edx, edx);
	if (jnz())
		goto loc_4125A0;
loc_412591:
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(esp, (int32_t)0x100);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_4125A0:
	eax = edx; //mov
	edx = (int32_t)(intptr_t)byte_4E5FC8; //mov
	esp -= 4; _strcmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_412591;
	push32(edi);
	push32(esi);
	push32(ebx);
	edi = (int32_t)(intptr_t)byte_4E5FC8; //mov
	esi = to32i(ecx); //mov
	push32(edi);
loc_4125BB:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4125D3;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4125BB;
loc_4125D3:
	pop32(edi);
	ebx = to32i(dword_4D40B8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4125ED;
	eax = ebx; //mov
	xor_(esi, esi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D40B8) = esi; //mov
loc_4125ED:
	edi = to32i(ecx); //mov
	push32(edi);
	ebp = to32i(dword_5134D0); //mov
	push32(ebp);
	push32(aSS_qfs_0);
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_488058(); esp += 4; //call
	to32i(dword_4D40B8) = eax; //mov
	eax = 0x1E; //mov
	esp -= 4; _sub_4833E7(); esp += 4; //call
	esp -= 4; _sub_4833F3(); esp += 4; //call
	pop32(ebx);
	pop32(esi);
	pop32(edi);
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(esp, (int32_t)0x100);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_412640()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x18);
	ecx = 6; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_411AE0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(ax, (int16_t)0xC);
	if (jl())
		goto loc_41265C;
	xor_(eax, eax);
loc_41265C:
	eax = ax; //cwde
	ax = to16i(esp+eax*2); //mov
	add(esp, (int32_t)0x18);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_412670()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x174);
	ebp = eax; //mov
	eax = to32i(dword_5637F4); //mov
	edx = 1; //mov
	edi = (int32_t)(intptr_t)(esp+0xFC); //lea
	esi = (int32_t)(intptr_t)off_411AB0; //mov
	to32i(esp+0x158) = eax; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	to32i(esp+0x15C) = ecx; //mov
	to32i(esp+0x164) = ecx; //mov
	to32i(esp+0x160) = ecx; //mov
	to32i(esp+0x16C) = edx; //mov
	ecx = 0xC; //mov
	to32i(esp+0x170) = ebx; //mov
	edx = 1; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(esp+0x154) = edx; //mov
	ecx = 0xC; //mov
	si = to16i(word_4D3ECE); //mov
	to16i(dword_4E5FF8+2) = cx; //mov
	cmp(si, (int16_t)3);
	if (jz())
		goto loc_412A8D;
	xor_(eax, eax);
	al = to8i(byte_512DBF); //mov
loc_4126F9:
	to32i(esp+0x168) = eax; //mov
	edx = to32i(esp+0x168); //mov
	eax = ebp; //mov
	ebx = 1; //mov
	esp -= 4; _sub_413160(); esp += 4; //call
	edx = to32i(esp+0x168); //mov
	eax = 1; //mov
	xor_(edi, edi);
	esp -= 4; _sub_412E60(); esp += 4; //call
	eax = ebp; //mov
	to32i(dword_4D2098) = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = to32i(esp+0x166); //mov
	push32(edi);
	sar(eax, (int32_t)0x10);
	edx = (int32_t)(intptr_t)aCar6; //mov
	esp -= 4; _sub_412640(); esp += 4; //call
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
	cmp(to32i(dword_4D4154), (int32_t)0);
	if (jz())
		goto loc_412762;
	to32i(esp+0x160) = edi; //mov
loc_412762:
	xor_(ecx, ecx);
	ebx = to32i(esp+0x15C); //mov
	to32i(dword_4D4154) = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_412A1E;
loc_412779:
	edi = to32i(esp+0x160); //mov
	esp -= 4; _sub_4833C7(); esp += 4; //call
	add(edi, eax);
	ecx = 1; //mov
	to32i(esp+0x160) = edi; //mov
	esi = edi; //mov
	edi = to32i(esp+0x170); //mov
	add(edi, ecx);
	eax = to32i(esp+0x168); //mov
	to32i(esp+0x170) = edi; //mov
	cmp(eax, (int32_t)0xB);
	if (jnz())
		goto loc_412A99;
	eax = to32i(ebp+0x1C); //mov
	or_(to8i(eax+8), (int8_t)1);
loc_4127BC:
	cmp(to16i(esp+0x170), (int16_t)0x23);
	if (jl())
		goto loc_412AB2;
	cmp(to16i(esp+0x16C), (int16_t)1);
	if (jnz())
		goto loc_412AB2;
	edx = to32i(esp+0x158); //mov
	add(edx, (int32_t)0x78);
	eax = to32i(dword_5637F4); //mov
	cmp(eax, edx);
	if (jle())
		goto loc_412AB2;
	cmp(to8i(byte_512DFB), (int8_t)0);
	if (jnz())
		goto loc_412AA5;
	cmp(to8i(byte_512DFA), (int8_t)1);
	if (jnz())
		goto loc_412AA5;
	edx = to32i(esp+0x168); //mov
	cmp(edx, (int32_t)7);
	if (jnz())
		goto loc_412AA5;
	eax = (int32_t)(intptr_t)(edx+5); //lea
	push32(eax);
loc_41281F:
	push32(a02d0);
	eax = (int32_t)(intptr_t)(esp+0x134); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = (int32_t)(intptr_t)(esp+0x12C); //lea
	esp -= 4; _sub_403480(); esp += 4; //call
	xor_(ebx, ebx);
	esp -= 4; _sub_486F28(); esp += 4; //call
	to32i(esp+0x16C) = ebx; //mov
loc_41284E:
	cmp(to32i(dword_4D2094), (int32_t)0);
	if (jz())
		goto loc_412B02;
loc_41285B:
	esp -= 4; _sub_428A20(); esp += 4; //call
	edx = 0x400; //mov
	eax = (int32_t)(intptr_t)aBack_0; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	edi = to32i(esp+0x154); //mov
	esp -= 4; _sub_405B30(); esp += 4; //call
	cmp(edi, (int32_t)2);
	if (jnb())
		goto loc_412AC0;
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_41289B;
	edx = 0x1000; //mov
	eax = (int32_t)(intptr_t)aGnrl; //mov
loc_412892:
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_405B30(); esp += 4; //call
loc_41289B:
	eax = ebp; //mov
	esp -= 4; _sub_40FA90(); esp += 4; //call
	eax = to32i(dword_4D4D24); //mov
	eax = to32i(eax+0x20); //mov
	ebx = to32i(esp+0x168); //mov
	esp -= 4; _sub_426B70(); esp += 4; //call
	cmp(ebx, (int32_t)7);
	if (jnz())
		goto loc_412AE9;
loc_4128BF:
	ebx = 0xA; //mov
	eax = 0x12; //mov
	edx = esi; //mov
	xor_(ecx, ecx);
loc_4128CD:
	esp -= 4; _sub_4274F0(); esp += 4; //call
	cmp(to32i(dword_4D2310), (int32_t)0);
	if (jz())
		goto loc_4128EE;
	eax = to32i(dword_4D4C7C); //mov
	edx = to32i(dword_4D4C80); //mov
	sub(eax, (int32_t)7);
	esp -= 4; _sub_4267C0(); esp += 4; //call
loc_4128EE:
	esp -= 4; _sub_4976B8(); esp += 4; //call
loc_4128FA:
	eax = ebp; //mov
	esp -= 4; _sub_423CA0(); esp += 4; //call
	esp -= 4; _sub_405960(); esp += 4; //call
	edx = eax; //mov
	test(ax, ax);
	if (jz())
		goto loc_412A10;
	ecx = to32i(esp+0x160); //mov
	cmp(ecx, to32i(esp+0x164));
	if (jle())
		goto loc_412A10;
	add(ecx, (int32_t)0xF);
	to32i(esp+0x164) = ecx; //mov
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_412B38;
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_412B38;
	edx = 0x7F; //mov
	ebx = to32i(esp+0x168); //mov
	xor_(eax, eax);
	dec(ebx);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x168) = ebx; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_412B0C;
loc_412967:
	edi = 1; //mov
	edx = to32i(esp+0x168); //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_413160(); esp += 4; //call
	xor_(eax, eax);
	edx = to32i(esp+0x168); //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(esp+0x154); //mov
	esp -= 4; _sub_412E60(); esp += 4; //call
	xor_(eax, eax);
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = ebp; //mov
	ebx = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = to32i(esp+0x166); //mov
	push32(0);
	sar(eax, (int32_t)0x10);
	edx = (int32_t)(intptr_t)aCar6; //mov
	esp -= 4; _sub_412640(); esp += 4; //call
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
	xor_(eax, eax);
	ecx = 1; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(ebx, ebx);
	xor_(edx, edx);
	eax = to32i(esp+0x168); //mov
	to32i(esp+0x170) = ebx; //mov
	to32i(esp+0x16C) = ecx; //mov
	cmp(eax, (int32_t)7);
	if (jnz())
		goto loc_412B21;
loc_4129FF:
	ebx = 0xA; //mov
	eax = 0x12; //mov
	xor_(ecx, ecx);
loc_412A0B:
	esp -= 4; _sub_4274F0(); esp += 4; //call
loc_412A10:
	cmp(to32i(esp+0x15C), (int32_t)0);
	if (jz())
		goto loc_412779;
loc_412A1E:
	cmp(to16i(word_4D3ECE), (int16_t)3);
	if (jnz())
		goto loc_412E3E;
	al = to8i(esp+0x168); //mov
	to8i(byte_512DDA) = al; //mov
loc_412A38:
	edi = 1; //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(eax, eax);
	edx = to32i(esp+0x168); //mov
	to32i(dword_4D2098) = eax; //mov
	cmp(edx, (int32_t)7);
	if (jz())
		goto loc_412A66;
	cmp(edx, (int32_t)8);
	if (jnz())
		goto loc_412E4F;
loc_412A66:
	ebx = 0xA; //mov
	edx = eax; //mov
	xor_(ecx, ecx);
	eax = 0x12; //mov
loc_412A74:
	esp -= 4; _sub_4274F0(); esp += 4; //call
	eax = to32i(esp+0x15C); //mov
	add(esp, (int32_t)0x174);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_412A8D:
	xor_(eax, eax);
	al = to8i(byte_512DDA); //mov
	goto loc_4126F9;
loc_412A99:
	eax = to32i(ebp+0x1C); //mov
	and_(to8i(eax+8), (int8_t)0xFE);
	goto loc_4127BC;
loc_412AA5:
	ecx = to32i(esp+0x168); //mov
	push32(ecx);
	goto loc_41281F;
loc_412AB2:
	test(cx, cx);
	if (jnz())
		goto loc_41285B;
	goto loc_41284E;
loc_412AC0:
	if (jbe())
		goto loc_412ADA;
	cmp(edi, (int32_t)3);
	if (jnz())
		goto loc_41289B;
	edx = 0x1000; //mov
	eax = (int32_t)(intptr_t)aMech; //mov
	goto loc_412892;
loc_412ADA:
	edx = 0x1000; //mov
	eax = (int32_t)(intptr_t)aPerf; //mov
	goto loc_412892;
loc_412AE9:
	cmp(ebx, (int32_t)8);
	if (jz())
		goto loc_4128BF;
	eax = 0x12; //mov
	edx = esi; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	goto loc_4128CD;
loc_412B02:
	esp -= 4; _sub_423B90(); esp += 4; //call
	goto loc_4128FA;
loc_412B0C:
	eax = to32i(dword_4E5FF8); //mov
	sar(eax, (int32_t)0x10);
	dec(eax);
	to32i(esp+0x168) = eax; //mov
	goto loc_412967;
loc_412B21:
	cmp(eax, (int32_t)8);
	if (jz())
		goto loc_4129FF;
loc_412B2A:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	goto loc_412A0B;
loc_412B38:
	cmp(ax, (int16_t)0x4D00);
	if (jnz())
		goto loc_412C1C;
loc_412B42:
	cmp(to16i(ebp+0xA), (int16_t)0);
	if (jnz())
		goto loc_412C26;
	edx = 0x7F; //mov
	xor_(eax, eax);
	ecx = to32i(esp+0x168); //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	eax = to32i(dword_4E5FF8); //mov
	inc(ecx);
	sar(eax, (int32_t)0x10);
	to32i(esp+0x168) = ecx; //mov
	cmp(eax, ecx);
	if (jnz())
		goto loc_412B7D;
	xor_(esi, esi);
	to32i(esp+0x168) = esi; //mov
loc_412B7D:
	edi = 1; //mov
	edx = to32i(esp+0x168); //mov
	xor_(eax, eax);
	to32i(dword_4D1FFC) = edi; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_413160(); esp += 4; //call
	xor_(eax, eax);
	edx = to32i(esp+0x168); //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	eax = to32i(esp+0x154); //mov
	esp -= 4; _sub_412E60(); esp += 4; //call
	eax = ebp; //mov
	ebx = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = to32i(esp+0x166); //mov
	push32(0);
	sar(eax, (int32_t)0x10);
	edx = (int32_t)(intptr_t)aCar6; //mov
	esp -= 4; _sub_412640(); esp += 4; //call
	ecx = ax; //movsx
	xor_(eax, eax);
	esp -= 4; _sub_428140(); esp += 4; //call
	xor_(eax, eax);
	edx = 1; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	xor_(eax, eax);
	to32i(esp+0x16C) = edx; //mov
	to32i(esp+0x170) = eax; //mov
	eax = to32i(esp+0x168); //mov
	xor_(edx, edx);
	cmp(eax, (int32_t)7);
	if (jz())
		goto loc_4129FF;
	cmp(eax, (int32_t)8);
	if (jnz())
		goto loc_412B2A;
	goto loc_4129FF;
loc_412C1C:
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_412B42;
loc_412C26:
	cmp(ax, (int16_t)0x4D00);
	if (jnz())
		goto loc_412C76;
loc_412C2C:
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_412C7C;
	edx = 0x7F; //mov
	edi = to32i(esp+0x154); //mov
	xor_(eax, eax);
	inc(edi);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x154) = edi; //mov
	cmp(edi, (int32_t)3);
	if (jle())
		goto loc_412C5E;
	to32i(esp+0x154) = 1; //mov
loc_412C5E:
	edx = to32i(esp+0x168); //mov
	eax = to32i(esp+0x154); //mov
	esp -= 4; _sub_412E60(); esp += 4; //call
	goto loc_412A10;
loc_412C76:
	cmp(ax, (int16_t)0xD);
	if (jz())
		goto loc_412C2C;
loc_412C7C:
	cmp(ax, (int16_t)0x4B00);
	if (jnz())
		goto loc_412CCC;
	cmp(to16i(ebp+0xA), (int16_t)1);
	if (jnz())
		goto loc_412CCC;
	edx = 0x7F; //mov
	ecx = to32i(esp+0x154); //mov
	xor_(eax, eax);
	dec(ecx);
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x154) = ecx; //mov
	cmp(ecx, (int32_t)1);
	if (jge())
		goto loc_412CB4;
	to32i(esp+0x154) = 3; //mov
loc_412CB4:
	edx = to32i(esp+0x168); //mov
	eax = to32i(esp+0x154); //mov
	esp -= 4; _sub_412E60(); esp += 4; //call
	goto loc_412A10;
loc_412CCC:
	cmp(ax, (int16_t)0xD);
	if (jnz())
		goto loc_412E02;
	cmp(to16i(ebp+0xA), (int16_t)4);
	if (jnz())
		goto loc_412E02;
	edx = 0x7F; //mov
	eax = 2; //mov
	ebx = 1; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D1FFC) = ebx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	esp -= 4; _sub_4056B0(); esp += 4; //call
	esp -= 4; _sub_4762E0(); esp += 4; //call
	esp -= 4; _sub_476250(); esp += 4; //call
	eax = to32i(esp+0x168); //mov
	esi = to32i(esp+eax*4+0xFC); //mov
	push32(esi);
	push32(aS_dct);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = esp; //mov
	xor_(edi, edi);
	esp -= 4; _sub_4242F0(); esp += 4; //call
	esp -= 4; _sub_4769D0(); esp += 4; //call
	eax = 0x12; //mov
	edx = to32i(dword_4D5A28); //mov
	xor_(esi, esi);
	esp -= 4; _sub_476750(); esp += 4; //call
	esp -= 4; _sub_4057C0(); esp += 4; //call
	eax = ebp; //mov
	to32i(dword_4D2098) = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = to32i(esp+0x166); //mov
	push32(edi);
	sar(eax, (int32_t)0x10);
	edx = (int32_t)(intptr_t)aCar6; //mov
	esp -= 4; _sub_412640(); esp += 4; //call
	ecx = ax; //movsx
	xor_(eax, eax);
	to32i(esp+0x174) = esi; //mov
	esp -= 4; _sub_428140(); esp += 4; //call
	eax = to32i(esp+0x168); //mov
	xor_(esi, esi);
	cmp(eax, (int32_t)7);
	if (jnz())
		goto loc_412DF0;
loc_412D98:
	ebx = 0xA; //mov
	eax = 0x12; //mov
	edx = esi; //mov
	xor_(ecx, ecx);
loc_412DA6:
	esp -= 4; _sub_4274F0(); esp += 4; //call
	edx = to32i(esp+0x168); //mov
	eax = ebp; //mov
	esp -= 4; _sub_413160(); esp += 4; //call
	edx = to32i(esp+0x168); //mov
	eax = to32i(esp+0x154); //mov
	edi = 1; //mov
	esp -= 4; _sub_412E60(); esp += 4; //call
	eax = ebp; //mov
	to32i(esp+0x16C) = edi; //mov
	esp -= 4; _sub_410E80(); esp += 4; //call
	eax = to32i(dword_5637F4); //mov
	to32i(esp+0x158) = eax; //mov
	goto loc_412A10;
loc_412DF0:
	cmp(eax, (int32_t)8);
	if (jz())
		goto loc_412D98;
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_412DA6;
loc_412E02:
	cmp(ax, (int16_t)0x1B);
	if (jnz())
		goto loc_412E28;
	edx = 0x7F; //mov
	eax = 3; //mov
	esi = 0xFFFFFFFF; //mov
	esp -= 4; _sub_4423F0(); esp += 4; //call
	to32i(esp+0x15C) = esi; //mov
	goto loc_412A1E;
loc_412E28:
	edx = ax; //movsx
	eax = ebp; //mov
	esp -= 4; _sub_410414(); esp += 4; //call
	to32i(esp+0x15C) = eax; //mov
	goto loc_412A10;
loc_412E3E:
	al = to8i(esp+0x168); //mov
	to8i(byte_512DBF) = al; //mov
	goto loc_412A38;
loc_412E4F:
	eax = 0x12; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	goto loc_412A74;
}
Fn(void) Game::_sub_412E60()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x90);
	ebx = eax; //mov
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_411A20; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(esp+0x30); //lea
	esi = (int32_t)(intptr_t)dword_411A50; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ecx = 0xC; //mov
	edi = (int32_t)(intptr_t)(esp+0x60); //lea
	esi = (int32_t)(intptr_t)dword_411A80; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(eax, (int32_t)2);
	if (jnb())
		goto loc_412F2A;
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_412F06;
	ecx = 0x181; //mov
	esi = 0x182; //mov
	edi = 0x183; //mov
	eax = 0x184; //mov
	to16i(word_4D2D4E) = cx; //mov
	to16i(word_4D2D62) = si; //mov
	to16i(word_4D2D76) = di; //mov
	to16i(word_4D2D8A) = ax; //mov
	ecx = 0x185; //mov
	esi = 0x186; //mov
	edi = 0x187; //mov
	eax = 0x188; //mov
loc_412EEB:
	to16i(word_4D2D9E) = cx; //mov
	to16i(word_4D2DB2) = si; //mov
	to16i(word_4D2DC6) = di; //mov
	to16i(word_4D2DDA) = ax; //mov
loc_412F06:
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	cmp(ebx, (int32_t)2);
	if (jnb())
		goto loc_412FC1;
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_41303B;
loc_412F1F:
	add(esp, (int32_t)0x90);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_412F2A:
	if (ja())
		goto loc_412F74;
	ecx = 0x239; //mov
	esi = 0x23A; //mov
	edi = 0x23B; //mov
	eax = 0x23C; //mov
	to16i(word_4D2D4E) = cx; //mov
	to16i(word_4D2D62) = si; //mov
	to16i(word_4D2D76) = di; //mov
	to16i(word_4D2D8A) = ax; //mov
	ecx = 0x23D; //mov
	esi = 0x23E; //mov
	edi = 0x23F; //mov
	eax = 0x15A; //mov
	goto loc_412EEB;
loc_412F74:
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_412F06;
	ecx = 0x1DD; //mov
	esi = 0x1DE; //mov
	edi = 0x1DF; //mov
	eax = 0x1E0; //mov
	to16i(word_4D2D4E) = cx; //mov
	to16i(word_4D2D62) = si; //mov
	to16i(word_4D2D76) = di; //mov
	to16i(word_4D2D8A) = ax; //mov
	ecx = 0x1E1; //mov
	esi = 0x1E2; //mov
	edi = 0x1E3; //mov
	eax = 0x1E4; //mov
	goto loc_412EEB;
loc_412FC1:
	if (jbe())
		goto loc_4130A0;
	cmp(ebx, (int32_t)3);
	if (jnz())
		goto loc_412F1F;
	dx = to16i(esp+eax+0x60); //mov
	to16i(word_4D2DEE) = dx; //mov
	inc(edx);
	to16i(word_4D2E02) = dx; //mov
	dx = to16i(esp+eax+0x60); //mov
	add(edx, (int32_t)2);
	to16i(word_4D2E16) = dx; //mov
	dx = to16i(esp+eax+0x60); //mov
	add(edx, (int32_t)3);
	to16i(word_4D2E2A) = dx; //mov
	dx = to16i(esp+eax+0x60); //mov
	add(edx, (int32_t)4);
	to16i(word_4D2E3E) = dx; //mov
	dx = to16i(esp+eax+0x60); //mov
	ax = to16i(esp+eax+0x60); //mov
	add(edx, (int32_t)5);
	add(eax, (int32_t)6);
	to16i(word_4D2E52) = dx; //mov
	to16i(word_4D2E66) = ax; //mov
	add(esp, (int32_t)0x90);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41303B:
	dx = to16i(esp+eax); //mov
	to16i(word_4D2DEE) = dx; //mov
	inc(edx);
	to16i(word_4D2E02) = dx; //mov
	dx = to16i(esp+eax); //mov
	add(edx, (int32_t)2);
	to16i(word_4D2E16) = dx; //mov
	dx = to16i(esp+eax); //mov
	add(edx, (int32_t)3);
	to16i(word_4D2E2A) = dx; //mov
	dx = to16i(esp+eax); //mov
	add(edx, (int32_t)4);
	to16i(word_4D2E3E) = dx; //mov
	dx = to16i(esp+eax); //mov
	ax = to16i(esp+eax); //mov
	add(edx, (int32_t)5);
	add(eax, (int32_t)6);
	to16i(word_4D2E52) = dx; //mov
	to16i(word_4D2E66) = ax; //mov
	add(esp, (int32_t)0x90);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4130A0:
	dx = to16i(esp+eax+0x30); //mov
	to16i(word_4D2DEE) = dx; //mov
	inc(edx);
	to16i(word_4D2E02) = dx; //mov
	dx = to16i(esp+eax+0x30); //mov
	add(edx, (int32_t)2);
	to16i(word_4D2E16) = dx; //mov
	dx = to16i(esp+eax+0x30); //mov
	add(edx, (int32_t)3);
	ax = to16i(esp+eax+0x30); //mov
	to16i(word_4D2E2A) = dx; //mov
	add(eax, (int32_t)4);
	edx = 0x15A; //mov
	to16i(word_4D2E3E) = ax; //mov
	to16i(word_4D2E52) = dx; //mov
	to16i(word_4D2E66) = dx; //mov
	add(esp, (int32_t)0x90);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_413100()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ebp = eax; //mov
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_4119F0; //mov
	shl(edx, (int32_t)2);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(ebx, ebx);
	if (jnz())
		goto loc_41312B;
	edx = to32i(esp+edx); //mov
	to32i(eax) = edx; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_41312B:
	inc(ebx);
	push32(ebx);
	ecx = to32i(esp+edx+4); //mov
	push32(ecx);
	push32(aSD);
	push32(dword_4E5FF0);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	to32i(ebp+0) = (int32_t)(intptr_t)dword_4E5FF0; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_413160()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x30);
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_4119C0; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = to32i(esp+edx*4); //mov
	to32i(eax) = edx; //mov
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_413180()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x30);
	ecx = 0xC; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)off_411990; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = to32i(esp+edx*4); //mov
	to32i(eax) = edx; //mov
	add(esp, (int32_t)0x30);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4131C4()
{
	static const void *const off_4131B0[] = {
		&&loc_4132F7,
		&&loc_4133FB,
		&&loc_41334A,
		&&loc_41334A,
		&&loc_41334A,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	ecx = to32i(dword_4D76BC); //mov
	esi = eax; //mov
	esp -= 4; _sub_41A020(); esp += 4; //call
	edx = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	ebx = 0x3DF; //mov
	to16i(esp+0x24) = ax; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	ebx = 0x20; //mov
	edx = ax; //movsx
	eax = (int32_t)(intptr_t)aDumitime; //mov
	shl(edx, (int32_t)2);
	esp -= 4; _sub_4844B0(); esp += 4; //call
	to32i(esp) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_41326F;
loc_413211:
	eax = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	edx = 0x3E6; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1DC) = edx; //mov
	edx = to32i(esp+0x22); //mov
	to32i(dword_4DB1D8) = eax; //mov
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)aDumirank_0; //mov
	add(edx, edx);
	esp -= 4; _sub_4844B0(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_413297;
loc_413244:
	ecx = to32i(dword_4D76BC); //mov
	xor_(eax, eax);
loc_41324C:
	edi = to32i(esp+0x22); //mov
	ebx = ax; //movsx
	sar(edi, (int32_t)0x10);
	cmp(ebx, edi);
	if (jge())
		goto loc_4132BC;
	imul32(ebx, 0x684);
	ebx = to32i(esi+ebx+0x278); //mov
	to16i(edx+ebx*2-2) = ax; //mov
	inc(eax);
	goto loc_41324C;
loc_41326F:
	edi = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	ebp = 0x3E4; //mov
	push32(aErrorAllocatin);
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_413211;
loc_413297:
	ebx = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	edi = 0x3EB; //mov
	push32(aErrorAllocatin);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_413244;
loc_4132BC:
	eax = to32i(esp+0x24); //mov
loc_4132C0:
	dec(eax);
	ebx = ax; //movsx
	add(ebx, ebx);
	ebp = (int32_t)(intptr_t)(edx+ebx); //lea
	ebx = to16i(ebp+0); //movsx
	imul32(ebx, 0x684);
	ebx = to32i(esi+ebx+0x21C); //mov
	cmp(to32i(ebx), (int32_t)0x24);
	if (jz())
		goto loc_4132C0;
	bl = to8i(byte_512DA9); //mov
	cmp(bl, (int8_t)4);
	if (ja())
		goto loc_4132F7;
	and_(ebx, (int32_t)0xFF);
	goto *off_4131B0[ebx];
loc_4132F7:
	ebx = ax; //movsx
	ebx = to16i(edx+ebx*2); //movsx
	imul32(edi, ebx, 0x684);
	test(to8i(edi+esi+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_4134F3;
	edi = 1; //mov
	ebx = edi; //mov
	to16i(esp+0x14) = di; //mov
loc_41331E:
	ebp = to32i(esp+0x12); //mov
	edi = ax; //movsx
	sar(ebp, (int32_t)0x10);
	edi = to16i(edx+edi*2); //movsx
	cmp(edi, ebp);
	if (jle())
		goto loc_413503;
loc_413334:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)1);
	if (jz())
		goto loc_413521;
	inc(ebx);
	goto loc_41331E;
loc_41334A:
	ebx = ax; //movsx
	ebx = to16i(edx+ebx*2); //movsx
	imul32(edi, ebx, 0x684);
	test(to8i(edi+esi+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_413391;
	bx = to16i(dword_512264); //mov
	to16i(esp+0x20) = bx; //mov
loc_41336D:
	ebp = to32i(esp+0x1E); //mov
	edi = ax; //movsx
	sar(ebp, (int32_t)0x10);
	edi = to16i(edx+edi*2); //movsx
	cmp(edi, ebp);
	if (jle())
		goto loc_4133D9;
loc_41337F:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)1);
	if (jz())
		goto loc_4133F0;
	inc(ebx);
	goto loc_41336D;
loc_413391:
	edi = ecx; //mov
	to16i(edi+ebx*2) = 0; //mov
loc_413399:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jg())
		goto loc_413563;
	xor_(edi, edi);
	xor_(eax, eax);
	to32i(esp+8) = edi; //mov
loc_4133AE:
	edi = to32i(esp+0x22); //mov
	ebx = ax; //movsx
	sar(edi, (int32_t)0x10);
	cmp(ebx, edi);
	if (jge())
		goto loc_413536;
	imul32(ebx, 0x684);
	edi = to32i(esi+ebx+0x280); //mov
	cmp(edi, (int32_t)1);
	if (jz())
		goto loc_41352C;
	inc(eax);
	goto loc_4133AE;
loc_4133D9:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)0);
	if (jz())
		goto loc_41337F;
loc_4133E8:
	to16i(ebp+0) = 0; //mov
	goto loc_413399;
loc_4133F0:
	inc(to16i(esp+0x20));
	inc(ebx);
	goto loc_41336D;
loc_4133FB:
	cmp(to32i(dword_512208), (int32_t)0);
	if (jz())
		goto loc_41343F;
loc_413404:
	xor_(ebx, ebx);
	to16i(esp+0x18) = bx; //mov
loc_41340B:
	edi = ax; //movsx
	edi = to16i(edx+edi*2); //movsx
	to32i(esp+4) = edi; //mov
	edi = to32i(esp+0x16); //mov
	ebp = to32i(esp+4); //mov
	sar(edi, (int32_t)0x10);
	cmp(edi, ebp);
	if (jge())
		goto loc_4134C9;
loc_413429:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)1);
	if (jz())
		goto loc_4134E8;
	inc(ebx);
	goto loc_41340B;
loc_41343F:
	di = to16i(ecx); //mov
	ebx = ecx; //mov
	test(di, di);
	if (jnz())
		goto loc_413404;
	di = to16i(ebp+0); //mov
	cmp(di, (int16_t)1);
	if (jnz())
		goto loc_41346A;
	ebx = 2; //mov
loc_413458:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)0);
	if (jnz())
		goto loc_4133E8;
	inc(ebx);
	goto loc_413458;
loc_41346A:
	test(di, di);
	if (jz())
		goto loc_41349E;
	ebx = 1; //mov
	to16i(esp+0x1C) = bx; //mov
loc_413479:
	edi = ax; //movsx
	ebp = to32i(esp+0x1A); //mov
	edi = to16i(edx+edi*2); //movsx
	sar(ebp, (int32_t)0x10);
	inc(edi);
	cmp(edi, ebp);
	if (jle())
		goto loc_4134A7;
loc_41348C:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)1);
	if (jz())
		goto loc_4134C1;
	inc(ebx);
	goto loc_413479;
loc_41349E:
	to16i(ecx+2) = di; //mov
	goto loc_413399;
loc_4134A7:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)0);
	if (jz())
		goto loc_41348C;
	to16i(ebp+0) = 0; //mov
	goto loc_413399;
loc_4134C1:
	inc(to16i(esp+0x1C));
	inc(ebx);
	goto loc_413479;
loc_4134C9:
	ebp = bx; //movsx
	add(ebp, ebp);
	add(ebp, ecx);
	di = to16i(ebp+0); //mov
	test(di, di);
	if (jz())
		goto loc_413429;
	to16i(ebp+0) = 0; //mov
	goto loc_413399;
loc_4134E8:
	inc(to16i(esp+0x18));
	inc(ebx);
	goto loc_41340B;
loc_4134F3:
	edi = (int32_t)(intptr_t)(ebx+ebx); //lea
	ebx = ecx; //mov
	to16i(edi+ebx) = 0; //mov
	goto loc_413399;
loc_413503:
	edi = bx; //movsx
	add(edi, edi);
	ebp = (int32_t)(intptr_t)(ecx+edi); //lea
	cmp(to16i(ebp+0), (int16_t)0);
	if (jz())
		goto loc_413334;
	to16i(ebp+0) = 0; //mov
	goto loc_413399;
loc_413521:
	inc(to16i(esp+0x14));
	inc(ebx);
	goto loc_41331E;
loc_41352C:
	to32i(esp+8) = edi; //mov
	inc(eax);
	goto loc_4133AE;
loc_413536:
	cmp(to32i(esp+8), (int32_t)0);
	if (jz())
		goto loc_4135F2;
	xor_(eax, eax);
loc_413543:
	esi = to32i(esp+0x22); //mov
	ebx = ax; //movsx
	sar(esi, (int32_t)0x10);
	cmp(ebx, esi);
	if (jge())
		goto loc_4135F2;
	esi = (int32_t)(intptr_t)(ebx+ebx); //lea
	ebx = ecx; //mov
	inc(eax);
	to16i(esi+ebx) = 0; //mov
	goto loc_413543;
loc_413563:
	xor_(ebx, ebx);
	to16i(esp+0x10) = bx; //mov
loc_41356A:
	ebx = to32i(esp+0xE); //mov
	ebp = to32i(dword_512264); //mov
	sar(ebx, (int32_t)0x10);
	cmp(ebx, ebp);
	if (jge())
		goto loc_4135F2;
	imul32(edi, ebx, 0x684);
	cmp(to32i(edi+esi+0x280), (int32_t)1);
	if (jz())
		goto loc_413596;
loc_41358F:
	inc(to16i(esp+0x10));
	goto loc_41356A;
loc_413596:
	ebp = (int32_t)(intptr_t)(ebx+ebx); //lea
	add(ebp, ecx);
	edi = ecx; //mov
	ebx = to32i(dword_512208); //mov
	to16i(ebp+0) = 0; //mov
	cmp(ebx, (int32_t)2);
	if (jl())
		goto loc_41358F;
	ebx = ax; //movsx
	ebx = to16i(edx+ebx*2); //movsx
	to32i(esp+0xC) = ebx; //mov
	imul32(ebx, 0x684);
	add(ebx, esi);
	cmp(to32i(ebx+0x280), (int32_t)1);
	if (jz())
		goto loc_41358F;
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_41358F;
	ebx = to32i(ebx+0x21C); //mov
	cmp(to32i(ebx), (int32_t)0x24);
	if (jz())
		goto loc_41358F;
	ebx = to32i(esp+0xC); //mov
	to16i(edi+ebx*2) = 1; //mov
	inc(to16i(esp+0x10));
	goto loc_41356A;
loc_4135F2:
	to32i(dword_4D76BC) = ecx; //mov
	test(edx, edx);
	if (jz())
		goto loc_413603;
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_413603:
	eax = to32i(esp); //mov
	test(eax, eax);
	if (jnz())
		goto loc_41361F;
loc_41360A:
	eax = 1; //mov
	ecx = to32i(dword_4D76BC); //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_41361F:
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_41360A;
}
Fn(void) Game::_sub_413650()
{
	static const void *const off_413630[] = {
		&&loc_4137F5,
		&&loc_413887,
		&&loc_4138BA,
		&&loc_413898,
		&&loc_4138A9,
		&&loc_4138CB,
		&&loc_4138DC,
		&&loc_4138ED,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x40);
	ebp = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x30); //lea
	esi = (int32_t)(intptr_t)dword_4131A0; //mov
	xor_(edx, edx);
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_41A020(); esp += 4; //call
	ecx = eax; //mov
loc_413671:
	esi = cx; //movsx
	eax = dx; //movsx
	cmp(eax, esi);
	if (jge())
		goto loc_4136F4;
	imul32(ebx, eax, 0x684);
	add(ebx, ebp);
	shl(eax, (int32_t)2);
	esi = to32i(ebx+0x234); //mov
	to32i(esp+eax) = esi; //mov
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_4136A7;
loc_41369C:
	eax = dx; //movsx
	to16i(esp+eax*2+0x20) = dx; //mov
	inc(edx);
	goto loc_413671;
loc_4136A7:
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jz())
		goto loc_41369C;
	edi = to32i(esp+eax); //mov
	test(edi, edi);
	if (jl())
		goto loc_4136CB;
	ebx = (int32_t)(intptr_t)(edi+0x1C200); //lea
	to32i(esp+eax) = ebx; //mov
	eax = dx; //movsx
	to16i(esp+eax*2+0x20) = dx; //mov
	inc(edx);
	goto loc_413671;
loc_4136CB:
	if (jle())
		goto loc_4136EE;
	ebx = edi; //mov
loc_4136CF:
	eax = dx; //movsx
	imul32(esi, eax, 0xE4C);
	add(ebx, (int32_t)0x1C200);
	add(ebx, esi);
	to32i(esp+eax*4) = ebx; //mov
	eax = dx; //movsx
	to16i(esp+eax*2+0x20) = dx; //mov
	inc(edx);
	goto loc_413671;
loc_4136EE:
	ebx = edi; //mov
	neg(ebx);
	goto loc_4136CF;
loc_4136F4:
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	xor_(edx, edx);
loc_413703:
	esi = cx; //movsx
	eax = dx; //movsx
	cmp(eax, esi);
	if (jl())
		goto loc_41375A;
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = esp; //mov
	eax = esi; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	xor_(edx, edx);
loc_41371C:
	ebx = cx; //movsx
	eax = dx; //movsx
	cmp(eax, ebx);
	if (jge())
		goto loc_4137DF;
	add(eax, eax);
	esi = to32i(esp+eax+0x1E); //mov
	sar(esi, (int32_t)0x10);
	imul32(ebx, esi, 0x684);
	add(ebx, ebp);
	add(esi, esi);
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_4137C6;
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jz())
		goto loc_4137C6;
	inc(edx);
	goto loc_41371C;
loc_41375A:
	imul32(ebx, eax, 0x684);
	add(ebx, ebp);
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_41376E;
loc_41376B:
	inc(edx);
	goto loc_413703;
loc_41376E:
	cmp(to32i(ebx+0x280), (int32_t)2);
	if (jz())
		goto loc_41376B;
	shl(eax, (int32_t)2);
	ebx = to32i(esp+eax); //mov
	test(ebx, ebx);
	if (jl())
		goto loc_413799;
	ebx = to32i(esp+esi*2+0x1C); //mov
	sar(ebx, (int32_t)0x10);
	esi = to32i(esp+eax); //mov
	ebx = to32i(esp+ebx*4); //mov
	add(esi, ebx);
	to32i(esp+eax) = esi; //mov
	inc(edx);
	goto loc_413703;
loc_413799:
	if (jle())
		goto loc_4137C0;
	eax = ebx; //mov
loc_41379D:
	ebx = cx; //movsx
	ebx = to32i(esp+ebx*2+0x1C); //mov
	sar(ebx, (int32_t)0x10);
	esi = to32i(esp+ebx*4); //mov
	add(esi, eax);
	eax = dx; //movsx
	imul32(ebx, eax, 0xE4C);
	add(ebx, esi);
	to32i(esp+eax*4) = ebx; //mov
	inc(edx);
	goto loc_413703;
loc_4137C0:
	eax = ebx; //mov
	neg(eax);
	goto loc_41379D;
loc_4137C6:
	ebx = to32i(dword_4D76B8); //mov
	ax = to16i(esp+eax+0x30); //mov
	add(to16i(esi+ebx+0x2B0), ax);
	inc(edx);
	goto loc_41371C;
loc_4137DF:
	eax = to32i(dword_51221C); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	cmp(eax, (int32_t)7);
	if (ja())
		goto loc_4137F5;
	goto *off_413630[eax];
loc_4137F5:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)1);
loc_413801:
	eax = to32i(dword_4D76B8); //mov
	edx = to32i(eax+0x2C4); //mov
	ebx = to32i(eax+0x2C4); //mov
	shl(edx, (int32_t)0x1E);
	and_(ebx, (int32_t)1);
	shr(edx, (int32_t)0x1F);
	add(ebx, edx);
	edx = to32i(eax+0x2C4); //mov
	shl(edx, (int32_t)0x1D);
	shr(edx, (int32_t)0x1F);
	add(edx, ebx);
	ebx = to32i(eax+0x2C4); //mov
	shl(ebx, (int32_t)0x1C);
	shr(ebx, (int32_t)0x1F);
	add(ebx, edx);
	edx = to32i(eax+0x2C4); //mov
	shl(edx, (int32_t)0x1B);
	shr(edx, (int32_t)0x1F);
	add(edx, ebx);
	ebx = to32i(eax+0x2C4); //mov
	shl(ebx, (int32_t)0x1A);
	shr(ebx, (int32_t)0x1F);
	add(ebx, edx);
	edx = to32i(eax+0x2C4); //mov
	shl(edx, (int32_t)0x19);
	shr(edx, (int32_t)0x1F);
	add(edx, ebx);
	ebx = to32i(eax+0x2C4); //mov
	shl(ebx, (int32_t)0x18);
	shr(ebx, (int32_t)0x1F);
	add(edx, ebx);
	to16i(eax+0x2C0) = dx; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x40);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_413887:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)2);
	goto loc_413801;
loc_413898:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)4);
	goto loc_413801;
loc_4138A9:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)8);
	goto loc_413801;
loc_4138BA:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)0x10);
	goto loc_413801;
loc_4138CB:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)0x20);
	goto loc_413801;
loc_4138DC:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)0x40);
	goto loc_413801;
loc_4138ED:
	eax = to32i(dword_4D76B8); //mov
	or_(to8i(eax+0x2C4), (int8_t)0x80);
	goto loc_413801;
}
Fn(void) Game::_sub_413914()
{
	static const void *const off_413900[] = {
		&&loc_413934,
		&&loc_413AC5,
		&&loc_4139FD,
		&&loc_4139FD,
		&&loc_4139FD,
	};
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	ebp = eax; //mov
	to16i(esp+0x54) = dx; //mov
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)4);
	if (ja())
		goto loc_413934;
	goto *off_413900[eax];
loc_413934:
	esi = (int32_t)(intptr_t)dword_512F4C; //mov
	edi = ebp; //mov
	push32(edi);
loc_41393C:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_413954;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41393C;
loc_413954:
	pop32(edi);
	eax = 0x2E7; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(1);
	eax = 0x2A1; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSDS);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	xor_(eax, eax);
	ecx = 1; //mov
	al = to8i(esp+0x54); //mov
	ebx = 8; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = ebp; //mov
	esp -= 4; _sub_401F40(); esp += 4; //call
	edx = to32i(esp+0x52); //mov
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	edi = (int32_t)(intptr_t)byte_512E84; //mov
	add(eax, edx);
	esi = ebp; //mov
	add(edi, eax);
	push32(edi);
loc_4139B5:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4139CD;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4139B5;
loc_4139CD:
	pop32(edi);
loc_4139CE:
	edi = (int32_t)(intptr_t)dword_512F4C; //mov
loc_4139D3:
	esi = ebp; //mov
	push32(edi);
loc_4139D6:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4139EE;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_4139D6;
loc_4139EE:
	pop32(edi);
loc_4139EF:
	eax = 1; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4139FD:
	edx = to32i(esp+0x52); //mov
	ecx = to32i(dword_51220C); //mov
	sar(edx, (int32_t)0x10);
	cmp(edx, ecx);
	if (jnz())
		goto loc_4139EF;
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	add(eax, ecx);
	ecx = (int32_t)(intptr_t)byte_512E84; //mov
	add(ecx, eax);
	edi = ebp; //mov
	esi = ecx; //mov
	push32(edi);
loc_413A23:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_413A3B;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_413A23;
loc_413A3B:
	pop32(edi);
	eax = 0x2E7; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	inc(edx);
	push32(edx);
	eax = 0x2A1; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSDS);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	ebx = 8; //mov
	push32(eax);
	to32i(esp+0x64) = ecx; //mov
	ecx = 1; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	xor_(eax, eax);
	esi = ebp; //mov
	al = to8i(esp+0x54); //mov
	edx = esp; //mov
	push32(eax);
	eax = ebp; //mov
	edi = to32i(esp+0x54); //mov
	esp -= 4; _sub_401F40(); esp += 4; //call
	edx = to32i(esp+0x54); //mov
	push32(edi);
loc_413A8F:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_413AA7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_413A8F;
loc_413AA7:
	pop32(edi);
	test(dx, dx);
	if (jz())
		goto loc_4139CE;
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_4139EF;
	edi = (int32_t)(intptr_t)byte_512F55; //mov
	goto loc_4139D3;
loc_413AC5:
	ecx = to32i(esp+0x52); //mov
	sar(ecx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(ecx*8+0); //lea
	esi = (int32_t)(intptr_t)byte_512E84; //mov
	add(eax, ecx);
	edi = ebp; //mov
	add(esi, eax);
	push32(edi);
loc_413ADF:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_413AF7;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_413ADF;
loc_413AF7:
	pop32(edi);
	ebx = to32i(dword_5121F8); //mov
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_413BD1;
	test(dx, dx);
	if (jnz())
		goto loc_413BD1;
	cmp(ebx, to32i(dword_512264));
	if (jle())
		goto loc_413BD1;
	eax = to32i(dword_4D76BC); //mov
	cmp(to16i(eax), (int16_t)0);
	if (jnz())
		goto loc_413BD1;
	cmp(to16i(eax+2), (int16_t)1);
	if (jnz())
		goto loc_413BD1;
	eax = 0x2E7; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	add(ecx, ebx);
	push32(ecx);
loc_413B44:
	eax = 0x2A1; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	push32(aSDS);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	xor_(eax, eax);
	ecx = 1; //mov
	al = to8i(esp+0x54); //mov
	ebx = 8; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = ebp; //mov
	esp -= 4; _sub_401F40(); esp += 4; //call
	edx = to32i(esp+0x52); //mov
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	edi = (int32_t)(intptr_t)byte_512E84; //mov
	add(eax, edx);
	esi = ebp; //mov
	add(edi, eax);
	ebx = to32i(esp+0x54); //mov
	push32(edi);
loc_413B9B:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_413BB3;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_413B9B;
loc_413BB3:
	pop32(edi);
	test(bx, bx);
	if (jz())
		goto loc_4139CE;
	cmp(bx, (int16_t)1);
	if (jnz())
		goto loc_4139EF;
	edi = (int32_t)(intptr_t)byte_512F55; //mov
	goto loc_4139D3;
loc_413BD1:
	eax = 0x2E7; //mov
	esp -= 4; _sub_41B710(); esp += 4; //call
	push32(eax);
	eax = to32i(esp+0x56); //mov
	sar(eax, (int32_t)0x10);
	inc(eax);
	push32(eax);
	goto loc_413B44;
}
Fn(void) Game::_sub_413BF0()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x18C);
	to32i(esp+0x15C) = eax; //mov
	to16i(esp+0x178) = dx; //mov
	to32i(esp+0x16C) = ebx; //mov
	xor_(edx, edx);
	ebp = 0x14; //mov
	to32i(esp+0x184) = edx; //mov
	xor_(edx, edx);
	ecx = to32i(dword_4E5508); //mov
	to32i(esp+0x158) = edx; //mov
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_413C40;
loc_413C30:
	eax = to32i(esp+0x184); //mov
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(ecx);
	return;
loc_413C40:
	esp -= 4; _sub_41A240(); esp += 4; //call
	cmp(ax, (int16_t)1);
	if (jnz())
		goto loc_413C30;
	cmp(to8i(byte_512DAA), (int8_t)3);
	if (jz())
		goto loc_413C30;
	cmp(to8i(byte_512DD0), (int8_t)1);
	if (jz())
		goto loc_413C30;
	cmp(to8i(byte_512DEB), (int8_t)1);
	if (jz())
		goto loc_413C30;
	push32(edi);
	push32(esi);
	ebx = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	esi = 0x1CD; //mov
	edx = 0x280; //mov
	eax = (int32_t)(intptr_t)aToprcrds; //mov
	edi = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	ecx = 0x1CF; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	ebx = 0x20; //mov
	esi = to32i(esp+0x17E); //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x20; //mov
	to32i(esp+0x160) = eax; //mov
	sar(esi, (int32_t)0x10);
	eax = 0x1CE; //mov
	edx = (int32_t)(intptr_t)(esi*4+0); //lea
	to32i(dword_4DB1DC) = eax; //mov
	eax = (int32_t)(intptr_t)aCarttime; //mov
	to32i(dword_4DB1D8) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x20; //mov
	to32i(esp+0x170) = eax; //mov
	to32i(dword_4DB1D8) = edi; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	edx = (int32_t)(intptr_t)(esi+esi); //lea
	eax = (int32_t)(intptr_t)aCarttrnk; //mov
	esi = 0x1D0; //mov
	ecx = to32i(esp+0x164); //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = 0x20; //mov
	edx = 0xC8; //mov
	to32i(esp+0x16C) = eax; //mov
	to32i(dword_4DB1D8) = edi; //mov
	eax = (int32_t)(intptr_t)aRecords; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(esp+0x168) = eax; //mov
	xor_(eax, eax);
loc_413D34:
	ebx = to32i(esp+0x17E); //mov
	edx = ax; //movsx
	sar(ebx, (int32_t)0x10);
	cmp(edx, ebx);
	if (jge())
		goto loc_413D65;
	imul32(edx, 0x684);
	add(edx, ecx);
	edx = to32i(edx+0x278); //mov
	ebx = to32i(esp+0x16C); //mov
	add(edx, edx);
	add(edx, ebx);
	to16i(edx-2) = ax; //mov
	inc(eax);
	goto loc_413D34;
loc_413D65:
	eax = to32i(dword_51221C); //mov
	edx = to32i(esp+0x160); //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_41B040(); esp += 4; //call
	edi = to32i(dword_5121FC); //mov
	cmp(edi, (int32_t)2);
	if (jnz())
		goto loc_413E14;
	to16i(esp+0x184) = 1; //mov
loc_413D95:
	eax = ebp; //mov
	shl(eax, (int32_t)5);
	sub(eax, ebp);
	to32i(esp+0x17C) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, ebp);
	xor_(edi, edi);
	add(eax, eax);
	to16i(esp+0x190) = di; //mov
	to32i(esp+0x178) = eax; //mov
loc_413DBF:
	edx = to32i(esp+0x17E); //mov
	eax = to32i(esp+0x18E); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	cmp(eax, edx);
	if (jge())
		goto loc_414305;
	edx = to32i(esp+0x16C); //mov
	edx = to16i(edx+eax*2); //movsx
	imul32(eax, edx, 0x684);
	ecx = to32i(esp+0x164); //mov
	xor_(ebx, ebx);
	add(eax, ecx);
	bl = to8i(byte_512DBD); //mov
	esi = to32i(eax+0x21C); //mov
	add(ebx, (int32_t)0xC);
	cmp(ebx, to32i(esi));
	if (jg())
		goto loc_413E37;
loc_413E0A:
	inc(to16i(esp+0x190));
	goto loc_413DBF;
loc_413E14:
	cmp(edi, (int32_t)4);
	if (jnz())
		goto loc_413E28;
	to16i(esp+0x184) = 0xB; //mov
	goto loc_413D95;
loc_413E28:
	to16i(esp+0x184) = 0x15; //mov
	goto loc_413D95;
loc_413E37:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jge())
		goto loc_41416D;
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jz())
		goto loc_413E0A;
	cmp(to32i(eax+0x280), (int32_t)2);
	if (jnz())
		goto loc_413E0A;
loc_413E56:
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	edx = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, edx);
	eax = to16i(eax); //movsx
	imul32(eax, 0x684);
	add(eax, to32i(esp+0x164));
	edx = to32i(eax+0x234); //mov
	eax = to32i(esp+0x182); //mov
	sar(eax, (int32_t)0x10);
	add(eax, (int32_t)9);
	imul32(eax, 0x14);
	add(eax, to32i(esp+0x160));
	esi = to32i(eax+0xC); //mov
	cmp(edx, esi);
	if (jg())
		goto loc_4141A0;
loc_413EA3:
	to32i(esp+0x18C) = 1; //mov
	edx = to32i(esp+0x18E); //mov
	sar(edx, (int32_t)0x10);
	eax = to32i(esp+0x16C); //mov
	add(edx, edx);
	add(edx, eax);
	eax = to16i(edx); //movsx
	imul32(eax, 0x684);
	ecx = to32i(esp+0x164); //mov
	add(eax, ecx);
	eax = to32i(eax+0x234); //mov
	to32i(esp+0x14C) = eax; //mov
	eax = to16i(edx); //movsx
	imul32(eax, 0x684);
	add(eax, ecx);
	eax = to32i(eax+0x21C); //mov
	ax = to16i(eax); //mov
	esi = to32i(dword_512230); //mov
	to16i(esp+0x14A) = ax; //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_4141BD;
	to16i(esp+0x150) = 1; //mov
loc_413F17:
	edi = to32i(esp+0x182); //mov
	sar(edi, (int32_t)0x10);
	add(edi, (int32_t)9);
	imul32(edi, 0x14);
	eax = to32i(esp+0x160); //mov
	ecx = 0x14; //mov
	esi = (int32_t)(intptr_t)(esp+0x140); //lea
	add(edi, eax);
	ebx = to32i(esp+0x184); //mov
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
loc_413F53:
	edx = to32i(esp+0x182); //mov
	sar(edx, (int32_t)0x10);
	eax = bx; //movsx
	esi = (int32_t)(intptr_t)(edx+9); //lea
	cmp(eax, esi);
	if (jle())
		goto loc_4141E4;
	ebx = (int32_t)(intptr_t)(esp+0x12C); //lea
	edx = (int32_t)(intptr_t)(esp+0x104); //lea
	eax = 0xA; //mov
	esp -= 4; _sub_41B2D0(); esp += 4; //call
	xor_(eax, eax);
loc_413F85:
	edx = ax; //movsx
	cmp(to16i(esp+edx*2+0x12C), (int16_t)9);
	if (jnz())
		goto loc_413F9E;
	edx = eax; //mov
	inc(edx);
	to16i(esp+0x188) = dx; //mov
loc_413F9E:
	inc(eax);
	cmp(ax, (int16_t)0xA);
	if (jl())
		goto loc_413F85;
	ebx = to32i(esp+0x16C); //mov
	xor_(eax, eax);
loc_413FAE:
	edx = to32i(esp+0x18E); //mov
	sar(edx, (int32_t)0x10);
	esi = ax; //movsx
	add(edx, edx);
	esi = to32i(esp+esi*2+0x12A); //mov
	add(edx, ebx);
	sar(esi, (int32_t)0x10);
	edx = to16i(edx); //movsx
	cmp(esi, edx);
	if (jnz())
		goto loc_414221;
	esi = to32i(esp+0x174); //mov
	shl(edx, (int32_t)2);
	eax = to32i(esp+0x186); //mov
	add(edx, esi);
	sar(eax, (int32_t)0x10);
	to32i(edx) = eax; //mov
loc_413FEC:
	cmp(to16i(esp+0x188), (int16_t)1);
	if (jnz())
		goto loc_41427E;
	edi = to32i(dword_512208); //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_414245;
	cmp(edi, to32i(dword_512264));
	if (jge())
		goto loc_414245;
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, esi);
	cx = to16i(eax); //mov
	test(cx, cx);
	if (jnz())
		goto loc_414231;
	eax = (int32_t)(intptr_t)aC04; //mov
loc_41403C:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_414041:
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	edi = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, edi);
	edx = to16i(eax); //movsx
	eax = (int32_t)(intptr_t)(esp+0x154); //lea
	esi = (int32_t)(intptr_t)(esp+0x154); //lea
	esp -= 4; _sub_413914(); esp += 4; //call
	edx = to32i(esp+0x182); //mov
	edi = (int32_t)(intptr_t)(esp+0x140); //lea
	sar(edx, (int32_t)0x10);
	push32(edi);
loc_41407E:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_414096;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_41407E;
loc_414096:
	pop32(edi);
	eax = (int32_t)(intptr_t)(edx+9); //lea
	imul32(eax, 0x14);
	imul32(edx, 0x14);
	ecx = 0x14; //mov
	edi = to32i(esp+0x160); //mov
	esi = (int32_t)(intptr_t)(esp+0x140); //lea
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
	esi = to32i(esp+0x160); //mov
	ecx = to32i(esp+0x178); //mov
	edi = to32i(esp+0x168); //mov
	add(esi, edx);
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
loc_4140EE:
	edi = to32i(esp+0x182); //mov
	eax = dx; //movsx
	sar(edi, (int32_t)0x10);
	esi = to32i(esp+eax*2+0x12A); //mov
	add(eax, edi);
	imul32(eax, 0x14);
	sar(esi, (int32_t)0x10);
	imul32(esi, ebp);
	ecx = to32i(esp+0x168); //mov
	edi = to32i(esp+0x160); //mov
	add(esi, ecx);
	add(edi, eax);
	ecx = ebp; //mov
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
	cmp(dx, (int16_t)0xA);
	if (jl())
		goto loc_4140EE;
	eax = to32i(esp+0x17C); //mov
	ebx = to32i(dword_512208); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_413E0A;
	xor_(eax, eax);
	to32i(dword_4D1FFC) = ebx; //mov
	esp -= 4; _sub_403550(); esp += 4; //call
	inc(to16i(esp+0x190));
	goto loc_413DBF;
loc_41416D:
	cmp(edx, to32i(dword_51220C));
	if (jnz())
		goto loc_413E0A;
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jz())
		goto loc_413E0A;
	cmp(to32i(eax+0x280), (int32_t)2);
	if (jz())
		goto loc_413E56;
	inc(to16i(esp+0x190));
	goto loc_413DBF;
loc_4141A0:
	test(esi, esi);
	if (jnz())
		goto loc_413E0A;
	test(edx, edx);
	if (jg())
		goto loc_413EA3;
	inc(to16i(esp+0x190));
	goto loc_413DBF;
loc_4141BD:
	cmp(to32i(dword_512204), (int32_t)1);
	if (jnz())
		goto loc_4141D5;
	to16i(esp+0x150) = 2; //mov
	goto loc_413F17;
loc_4141D5:
	xor_(ebx, ebx);
	to16i(esp+0x150) = bx; //mov
	goto loc_413F17;
loc_4141E4:
	imul32(esi, eax, 0x14);
	add(esi, to32i(esp+0x160));
	edi = eax; //mov
	sub(edi, edx);
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	esi = to32i(esi+0xC); //mov
	to32i(esp+edx+0x104) = esi; //mov
	test(esi, esi);
	if (jz())
		goto loc_41420D;
	inc(ebx);
	goto loc_413F53;
loc_41420D:
	inc(eax);
	imul32(eax, 0x23280);
	to32i(esp+edx+0x104) = eax; //mov
	inc(ebx);
	goto loc_413F53;
loc_414221:
	inc(eax);
	cmp(ax, (int16_t)0xA);
	if (jl())
		goto loc_413FAE;
	goto loc_413FEC;
loc_414231:
	cmp(cx, (int16_t)1);
	if (jnz())
		goto loc_414041;
	eax = (int32_t)(intptr_t)aC05; //mov
	goto loc_41403C;
loc_414245:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_414274;
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, ecx);
	ebx = to32i(dword_51220C); //mov
	eax = to16i(eax); //movsx
	cmp(eax, ebx);
	if (jnz())
		goto loc_414041;
loc_414274:
	eax = (int32_t)(intptr_t)aC03; //mov
	goto loc_41403C;
loc_41427E:
	edi = to32i(dword_512208); //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_4142CC;
	cmp(edi, to32i(dword_512264));
	if (jge())
		goto loc_4142CC;
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	esi = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, esi);
	dx = to16i(eax); //mov
	test(dx, dx);
	if (jnz())
		goto loc_4142B8;
	eax = (int32_t)(intptr_t)aC07; //mov
	goto loc_41403C;
loc_4142B8:
	cmp(dx, (int16_t)1);
	if (jnz())
		goto loc_414041;
	eax = (int32_t)(intptr_t)aC08; //mov
	goto loc_41403C;
loc_4142CC:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_4142FB;
	eax = to32i(esp+0x18E); //mov
	sar(eax, (int32_t)0x10);
	ecx = to32i(esp+0x16C); //mov
	add(eax, eax);
	add(eax, ecx);
	ebx = to32i(dword_51220C); //mov
	eax = to16i(eax); //movsx
	cmp(eax, ebx);
	if (jnz())
		goto loc_414041;
loc_4142FB:
	eax = (int32_t)(intptr_t)aC06; //mov
	goto loc_41403C;
loc_414305:
	cmp(to16i(esp+0x18C), (int16_t)1);
	if (jnz())
		goto loc_4143A6;
	esi = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	edi = 0x2CA; //mov
	edx = 0x26C; //mov
	eax = (int32_t)(intptr_t)aRecord; //mov
	ecx = 0x26C; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x160); //lea
	edi = eax; //mov
	ebp = eax; //mov
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
	eax = to32i(dword_51221C); //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	esp -= 4; _sub_41B250(); esp += 4; //call
	xor_(eax, eax);
loc_414371:
	inc(eax);
	cmp(ax, (int16_t)0x1F);
	if (jl())
		goto loc_414371;
	ebx = 0x26C; //mov
	edx = to32i(esp+0x160); //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_41439B;
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
loc_41439B:
	test(ebp, ebp);
	if (jz())
		goto loc_4143A6;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4143A6:
	edx = to32i(esp+0x168); //mov
	test(edx, edx);
	if (jz())
		goto loc_4143B8;
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4143B8:
	ecx = to32i(esp+0x16C); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_4143CA;
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4143CA:
	ebx = to32i(esp+0x170); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4143DC;
	eax = ebx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4143DC:
	esi = to32i(esp+0x160); //mov
	test(esi, esi);
	if (jz())
		goto loc_4143EE;
	eax = esi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4143EE:
	eax = to32i(esp+0x18C); //mov
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x18C);
	pop32(ebp);
	pop32(ecx);
}
Fn(void) Game::_sub_414400()
{
	push32(ebp);
	sub(esp, (int32_t)0x148);
	to32i(esp+0x138) = eax; //mov
	to16i(esp+0x13C) = bx; //mov
	to16i(esp+0x144) = cx; //mov
	eax = to32i(esp+0x13A); //mov
	sar(eax, (int32_t)0x10);
	imul32(eax, 0x684);
	xor_(edx, edx);
	to32i(esp+0x140) = edx; //mov
	to32i(esp+0x134) = 0x14; //mov
	edx = to32i(esp+0x138); //mov
	add(edx, eax);
	xor_(eax, eax);
	to32i(esp+0x130) = edx; //mov
	al = to8i(byte_512DBD); //mov
	edx = to32i(edx+0x21C); //mov
	add(eax, (int32_t)0xC);
	cmp(eax, to32i(edx));
	if (jle())
		goto loc_414481;
	cmp(to8i(byte_512DAA), (int8_t)3);
	if (jz())
		goto loc_414481;
	cmp(to8i(byte_512DD0), (int8_t)1);
	if (jz())
		goto loc_414481;
	cmp(to8i(byte_512DEB), (int8_t)1);
	if (jnz())
		goto loc_41448B;
loc_414481:
	xor_(eax, eax);
	add(esp, (int32_t)0x148);
	pop32(ebp);
	return;
loc_41448B:
	push32(edi);
	push32(esi);
	ebx = (int32_t)(intptr_t)aCNfs2seFront_4; //mov
	esi = 0x125; //mov
	edx = 0x280; //mov
	eax = (int32_t)(intptr_t)aTrkrcrds; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	ebx = 0x20; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = eax; //mov
	ebp = eax; //mov
	eax = to32i(dword_51221C); //mov
	ecx = 0x14; //mov
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	edx = esi; //mov
	eax = ax; //cwde
	edi = (int32_t)(intptr_t)(esp+0x104); //lea
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
	eax = to32i(esp+0x138); //mov
	eax = to32i(eax+0x21C); //mov
	ax = to16i(eax); //mov
	to16i(esp+0x122) = ax; //mov
	eax = to32i(esp+0x14A); //mov
	sar(eax, (int32_t)0x10);
	edi = to32i(esp+0x138); //mov
	shl(eax, (int32_t)2);
	add(eax, edi);
	eax = to32i(eax+0x238); //mov
	to32i(esp+0x124) = eax; //mov
	cmp(to32i(dword_512230), (int32_t)1);
	if (jnz())
		goto loc_4145CE;
	to16i(esp+0x128) = 1; //mov
loc_41453B:
	ecx = to32i(dword_512208); //mov
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_414609;
	cmp(ecx, to32i(dword_512264));
	if (jge())
		goto loc_414609;
	edi = to32i(esp+0x144); //mov
	test(di, di);
	if (jnz())
		goto loc_4145F5;
	eax = (int32_t)(intptr_t)aC10; //mov
loc_41456B:
	esp -= 4; _sub_403480(); esp += 4; //call
loc_414570:
	eax = to32i(dword_5121FC); //mov
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_414634;
	esi = 1; //mov
loc_414583:
	edx = esi; //mov
loc_414585:
	ecx = si; //movsx
	eax = dx; //movsx
	add(ecx, (int32_t)9);
	cmp(eax, ecx);
	if (jge())
		goto loc_41465E;
	ecx = to32i(esp+0x142); //mov
	sar(ecx, (int32_t)0x10);
	imul32(ecx, 0x684);
	ebx = to32i(esp+0x140); //mov
	add(ebx, ecx);
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	add(eax, ecx);
	shl(eax, (int32_t)2);
	ecx = (int32_t)(intptr_t)(eax+ebp); //lea
	eax = to32i(ebx+0x234); //mov
	cmp(eax, to32i(ecx+0xC));
	if (jz())
		goto loc_41464D;
	inc(edx);
	goto loc_414585;
loc_4145CE:
	cmp(to32i(dword_512204), (int32_t)1);
	if (jnz())
		goto loc_4145E6;
	to16i(esp+0x128) = 2; //mov
	goto loc_41453B;
loc_4145E6:
	xor_(ebx, ebx);
	to16i(esp+0x128) = bx; //mov
	goto loc_41453B;
loc_4145F5:
	cmp(di, (int16_t)1);
	if (jnz())
		goto loc_414570;
	eax = (int32_t)(intptr_t)aC11; //mov
	goto loc_41456B;
loc_414609:
	cmp(to32i(dword_512208), (int32_t)2);
	if (jl())
		goto loc_41462A;
	eax = to32i(esp+0x142); //mov
	edi = to32i(dword_51220C); //mov
	sar(eax, (int32_t)0x10);
	cmp(eax, edi);
	if (jnz())
		goto loc_414570;
loc_41462A:
	eax = (int32_t)(intptr_t)aC09; //mov
	goto loc_41456B;
loc_414634:
	cmp(eax, (int32_t)4);
	if (jnz())
		goto loc_414643;
	esi = 0xB; //mov
	goto loc_414583;
loc_414643:
	esi = 0x15; //mov
	goto loc_414583;
loc_41464D:
	to32i(esp+0x148) = 1; //mov
	inc(edx);
	goto loc_414585;
loc_41465E:
	cmp(to16i(esp+0x148), (int16_t)0);
	if (jnz())
		goto loc_414700;
	edx = to32i(esp+0x142); //mov
	eax = (int32_t)(intptr_t)(esp+0x12C); //lea
	esi = (int32_t)(intptr_t)(esp+0x12C); //lea
	sar(edx, (int32_t)0x10);
	edi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_413914(); esp += 4; //call
loc_414691:
	push32(edi);
loc_414692:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_4146AA;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_414692;
loc_4146AA:
	pop32(edi);
	ecx = to32i(esp+0x13C); //mov
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	edi = ebp; //mov
	edx = to32i(esp+0x13C); //mov
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
	ecx = 1; //mov
	goto loc_414726;
loc_4146E9:
	test(ebp, ebp);
	if (jz())
		goto loc_4146F4;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
loc_4146F4:
	eax = ecx; //mov
	pop32(esi);
	pop32(edi);
	add(esp, (int32_t)0x148);
	pop32(ebp);
	return;
loc_414700:
	edx = to32i(esp+0x142); //mov
	sar(edx, (int32_t)0x10);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	esi = (int32_t)(intptr_t)byte_512E84; //mov
	add(eax, edx);
	edi = (int32_t)(intptr_t)(esp+0x118); //lea
	add(esi, eax);
	goto loc_414691;
loc_414726:
	eax = to32i(dword_51221C); //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_41A3A0(); esp += 4; //call
	eax = ax; //cwde
	ebx = 0x26C; //mov
	esp -= 4; _sub_41B250(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+8); //lea
	edx = ebp; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4146E9;
	eax = 0x2F3; //mov
	esp -= 4; _sub_402CD0(); esp += 4; //call
	goto loc_4146E9;
}
