#include <cstdio>
#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_488058()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_488048(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_488064()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_488048(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_488074()
{
	eax = to32i(dword_4DB640); //mov
	add(eax, to32i(dword_4DB63C));
	to32i(dword_4DB63C) = eax; //mov
	adc(eax, to32i(dword_4DB638));
	to32i(dword_4DB638) = eax; //mov
	adc(eax, to32i(dword_4DB634));
	to32i(dword_4DB634) = eax; //mov
	adc(eax, to32i(dword_4DB630));
	to32i(dword_4DB630) = eax; //mov
	adc(eax, to32i(dword_4DB62C));
	inc(to32i(dword_4DB640));
	if (jnz())
		goto loc_4880D4;
	inc(to32i(dword_4DB63C));
	if (jnz())
		goto loc_4880D4;
	inc(to32i(dword_4DB638));
	if (jnz())
		goto loc_4880D4;
	inc(to32i(dword_4DB634));
	if (jnz())
		goto loc_4880D4;
	inc(to32i(dword_4DB630));
	if (jnz())
		goto loc_4880D4;
	inc(eax);
loc_4880D4:
	to32i(dword_4DB62C) = eax; //mov
}
Fn(void) Game::_sub_4880DA()
{
	add(eax, (int32_t)0xF22D0E56);
	to32i(dword_4DB62C) = eax; //mov
	add(eax, (int32_t)0x96041893);
	to32i(dword_4DB630) = eax; //mov
	add(eax, (int32_t)0x3DF3B646);
	to32i(dword_4DB634) = eax; //mov
	add(eax, (int32_t)0x40DDE76D);
	to32i(dword_4DB638) = eax; //mov
	add(eax, (int32_t)0x97327AE1);
	to32i(dword_4DB63C) = eax; //mov
	add(eax, (int32_t)0xD1A9FBE7);
	to32i(dword_4DB640) = eax; //mov
}
Fn(void) Game::_sub_488128()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	to32i(esp+8) = edx; //mov
	esi = eax; //mov
	eax = to32i(eax+0x18); //mov
	and_(eax, (int32_t)0xF00);
	shr(eax, (int32_t)8);
	to32i(esp+4) = eax; //mov
	cmp(eax, (int32_t)3);
	if (jnz())
		goto loc_4881E0;
	eax = edx; //mov
	cmp(eax, to32i(ecx+0x10));
	if (jg())
		goto loc_4881A6;
	eax = to32i(esp+8); //mov
	to32i(esi+0x14) = eax; //mov
loc_48815D:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4881A6:
	to32i(esp) = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_49CAD4(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48815D;
	edx = edi; //mov
	ebx = to32i(ecx+0x14); //mov
	eax = to32i(ecx); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(ecx); //mov
	esp -= 4; _free_(); esp += 4; //call
	to32i(ecx) = edi; //mov
	eax = to32i(esp); //mov
	to32i(ecx+0x10) = eax; //mov
	eax = to32i(esp+8); //mov
	to32i(esi+0x14) = eax; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4881E0:
	edx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, edx);
	ebx = (int32_t)(intptr_t)dword_563D80; //mov
	shl(eax, (int32_t)3);
	add(ebx, eax);
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C0(); esp += 4; //call
	eax = to32i(ecx+0x20); //mov
	edi = to32i(ecx); //mov
	ebp = to32i(ebx+0x14); //mov
	eax = to32i(eax); //mov
	edx = to32i(ebx+8); //mov
	sub(eax, edi);
	ecx = to32i(ebx+8); //mov
	edi = eax; //mov
	eax = to32i(esp+8); //mov
	ecx = ~ecx;
	add(eax, ebp);
	and_(edi, ecx);
	add(eax, edx);
	ebp = to32i(esp+8); //mov
	and_(ecx, eax);
	test(ebp, ebp);
	if (jl())
		goto loc_48825C;
loc_488225:
	xor_(ebp, ebp);
loc_488227:
	cmp(ecx, edi);
	if (jg())
		goto loc_488277;
	test(ecx, ecx);
	if (jl())
		goto loc_488277;
	eax = to32i(esp+8); //mov
	to32i(esi+0x10) = ecx; //mov
	to32i(esi+0x14) = eax; //mov
	cmp(to32i(ebx+0x14), (int32_t)0);
	if (jz())
		goto loc_488246;
	eax = esi; //mov
	esp -= 4; _sub_4A4110(); esp += 4; //call
loc_488246:
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48825C:
	ecx = ebp; //mov
	cmp(ebp, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_488225;
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_488277:
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jz())
		goto loc_48828D;
	eax = to32i(esi+0x20); //mov
	test(to8i(eax+0x18), (int8_t)0x18);
	if (jz())
		goto loc_48828D;
	test(ebp, ebp);
	if (jz())
		goto loc_4882BC;
loc_48828D:
	cmp(to32i(dword_4DB204), (int32_t)0);
	if (jz())
		goto loc_48829C;
	test(to8i(esi+0x18), (int8_t)0x10);
	if (jnz())
		goto loc_4882E9;
loc_48829C:
	eax = to32i(dword_563F00); //mov
	ecx = to32i(esp+8); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	test(ecx, ecx);
	if (jl())
		goto loc_48838C;
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4882BC:
	edx = esi; //mov
	eax = to32i(ebx+4); //mov
	esp -= 4; _sub_4A4248(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4882DF;
	eax = to32i(esi+0x20); //mov
	edx = to32i(esi); //mov
	edi = to32i(ebx+8); //mov
	eax = to32i(eax); //mov
	edi = ~edi;
	sub(eax, edx);
	and_(edi, eax);
	goto loc_488227;
loc_4882DF:
	ebp = 1; //mov
	goto loc_488227;
loc_4882E9:
	edx = to32i(esi+0x20); //mov
	eax = to32i(ebx); //mov
	esp -= 4; _sub_4A4358(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48830C;
	eax = to32i(esi+0x20); //mov
	edi = to32i(esi); //mov
	eax = to32i(eax); //mov
	sub(eax, edi);
	edi = to32i(ebx+8); //mov
	edi = ~edi;
	and_(edi, eax);
	goto loc_488227;
loc_48830C:
	ebx = to32i(esp+4); //mov
	edx = to32i(esp+8); //mov
	eax = (int32_t)(intptr_t)aResize; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_484510(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48829C;
	ebx = to32i(esi+0x14); //mov
	edx = to32i(eax); //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = to32i(esi+0x24); //mov
	eax = to32i(esi+0x20); //mov
	to32i(edx+0x20) = eax; //mov
	edx = eax; //mov
	eax = to32i(esi+0x24); //mov
	to32i(edx+0x24) = eax; //mov
	eax = to32i(ecx+0x24); //mov
	to32i(eax+0x20) = esi; //mov
	eax = to32i(ecx+0x20); //mov
	to32i(eax+0x24) = esi; //mov
	eax = to32i(ecx); //mov
	to32i(esi) = eax; //mov
	eax = to32i(ecx+0x20); //mov
	to32i(esi+0x20) = eax; //mov
	eax = to32i(ecx+0x24); //mov
	to32i(esi+0x24) = eax; //mov
	eax = to32i(ecx+0x14); //mov
	to32i(esi+0x14) = eax; //mov
	eax = to32i(ecx+0x10); //mov
	to32i(esi+0x10) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_484D6C(); esp += 4; //call
	eax = to32i(dword_563F00); //mov
	esp -= 4; _sub_4A40C8(); esp += 4; //call
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48838C:
	eax = edi; //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_488168()
{
	push32(ebx);
	ebx = 1; //mov
	esp -= 4; _sub_4848EC(); esp += 4; //call
	esp -= 4; _sub_488128(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_488396()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = SetCurrentDirectoryA_wrap(to32i(esp + 0)); esp += 4;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4883C0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x140);
	edx = to32i(hFindFile); //mov
	xor_(esi, esi);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_4883E1;
	edi = (int32_t)(intptr_t)FileName; //mov
loc_4883DD:
	test(esi, esi);
	if (jz())
		goto loc_4883EF;
loc_4883E1:
	eax = esi; //mov
	add(esp, (int32_t)0x140);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4883EF:
	eax = esp; //mov
	push32(eax);
	ecx = to32i(hFindFile); //mov
	push32(ecx);
	eax = FindNextFileA_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	test(eax, eax);
	if (jz())
		goto loc_488443;
	ebx = to32i(dword_563F30); //mov
	xor_(ah, ah);
	edx = (int32_t)(intptr_t)byte_563F34; //mov
	FileName[ebx] = ah; //mov
	eax = edi; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 0x104; //mov
	edx = (int32_t)(intptr_t)(esp+0x2C); //lea
	eax = edi; //mov
	esp -= 4; _strncat_(); esp += 4; //call
	esi = edi; //mov
	goto loc_4883DD;
loc_488443:
	ebx = to32i(hFindFile); //mov
	push32(ebx);
	esi = 0xFFFFFFFF; //mov
	eax = FindClose_wrap(to32i(esp + 0)); esp += 4;
	to32i(hFindFile) = esi; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0x140);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48846C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0x140);
	esi = eax; //mov
	edx = to32i(hFindFile); //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_4884F3;
loc_488488:
	ebx = 0x104; //mov
	eax = (int32_t)(intptr_t)byte_563F34; //mov
	edx = esi; //mov
	edi = (int32_t)(intptr_t)byte_563F34; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
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
	test(ecx, ecx);
	if (jle())
		goto loc_4884C3;
loc_4884AE:
	dl = (int32_t)(intptr_t)byte_563F34[eax]; //mov
	cmp(dl, (int8_t)0x5C);
	if (jz())
		goto loc_4884C3;
	cmp(dl, (int8_t)0x3A);
	if (jz())
		goto loc_4884C3;
	dec(eax);
	test(eax, eax);
	if (jg())
		goto loc_4884AE;
loc_4884C3:
	test(eax, eax);
	if (jnz())
		goto loc_4884FD;
loc_4884C7:
	to32i(dword_563F30) = eax; //mov
	eax = esp; //mov
	push32(eax);
	push32(byte_563F34);
	eax = FindFirstFileA_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	to32i(hFindFile) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_488500;
	xor_(eax, eax);
	add(esp, (int32_t)0x140);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4884F3:
	push32(edx);
	eax = FindClose_wrap(to32i(esp + 0)); esp += 4;
	goto loc_488488;
loc_4884FD:
	inc(eax);
	goto loc_4884C7;
loc_488500:
	edx = (int32_t)(intptr_t)byte_563F34; //mov
	ebx = to32i(dword_563F30); //mov
	xor_(cl, cl);
	eax = (int32_t)(intptr_t)FileName; //mov
	FileName[ebx] = cl; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 0x104; //mov
	edx = (int32_t)(intptr_t)(esp+0x2C); //lea
	eax = (int32_t)(intptr_t)FileName; //mov
	esp -= 4; _strncat_(); esp += 4; //call
	eax = (int32_t)(intptr_t)FileName; //mov
	add(esp, (int32_t)0x140);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_488570()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	sub(esp, (int32_t)0xC);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	edx = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	edx = to32i(esp); //mov
	test(edx, edx);
	if (jnz())
		goto loc_488596;
	eax = to32i(esp); //mov
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_488596:
	eax = edx; //mov
	ecx = 1; //mov
	esp -= 4; _sub_487950(); esp += 4; //call
	to32i(esp) = ecx; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)0xC);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4885B0()
{
	eax = edx; //mov
	edx = ebx; //mov
	ebx = to32i(dword_564140); //mov
	sar(edx, (int32_t)1);
	_sub_48A031(); return; //jmp
}
Fn(void) Game::_sub_4885C4()
{
	eax = edx; //mov
	edx = ebx; //mov
	ebx = to32i(dword_564140); //mov
	_sub_48A031(); return; //jmp
}
Fn(void) Game::_sub_4885D4()
{
	eax = edx; //mov
	edx = ebx; //mov
	ebx = to32i(dword_564140); //mov
	add(edx, edx);
	_sub_48A031(); return; //jmp
}
Fn(void) Game::_sub_4885E8()
{
	push32(ecx);
	push32(esi);
	ecx = edx; //mov
	esi = ebx; //mov
loc_4885EE:
	ebx = 3; //mov
	edx = to32i(dword_564140); //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C06F(); esp += 4; //call
	add(ecx, (int32_t)3);
	dec(esi);
	if (jnz())
		goto loc_4885EE;
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48860C()
{
	eax = edx; //mov
	edx = ebx; //mov
	ebx = to32i(dword_564140); //mov
	shl(edx, (int32_t)2);
	_sub_48A031(); return; //jmp
}
Fn(void) Game::_sub_488620()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(esp+0x24); //mov
	dl = to8i(byte_4DB25C); //mov
	cmp(dl, (int8_t)8);
	if (jnb())
		goto loc_488694;
	cmp(dl, (int8_t)4);
	if (jnz())
		goto loc_488648;
	and_(eax, (int32_t)0xF);
	edx = eax; //mov
	shl(edx, (int32_t)4);
loc_488646:
	or_(eax, edx);
loc_488648:
	to32i(dword_564140) = eax; //mov
	to16i(esp+4) = bx; //mov
	to16i(esp+6) = cx; //mov
	xor_(dl, dl);
	ecx = (int32_t)(intptr_t)off_4DB648; //mov
	xor_(eax, eax);
	to8i(esp) = dl; //mov
	al = to8i(byte_4DB25D); //mov
	edx = to32i(esp); //mov
	and_(eax, (int32_t)0xFF);
	ebx = edi; //mov
	or_(edx, eax);
	eax = esp; //mov
	ebp = edx; //mov
	to32i(esp) = edx; //mov
	and_(ebp, (int32_t)0xFF);
	edx = esi; //mov
	to32i(esp) = ebp; //mov
	esp -= 4; _sub_4A10BC(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_488694:
	if (jbe())
		goto loc_4886AE;
	cmp(dl, (int8_t)0xF);
	if (jb())
		goto loc_488648;
	if (jbe())
		goto loc_4886A2;
	cmp(dl, (int8_t)0x10);
	if (jnz())
		goto loc_488648;
loc_4886A2:
	and_(eax, (int32_t)0xFFFF);
	edx = eax; //mov
	shl(edx, (int32_t)0x10);
	goto loc_488646;
loc_4886AE:
	and_(eax, (int32_t)0xFF);
	edx = eax; //mov
	shl(edx, (int32_t)8);
	or_(eax, edx);
	edx = eax; //mov
	shl(edx, (int32_t)0x10);
	goto loc_488646;
}
Fn(void) Game::_sub_4886D0()
{
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(ecx, ecx);
	if (jz())
		goto loc_488704;
	push32(edx);
	esp -= 4; _getHwnd(); esp += 4; //call
	ecx = to32i(dword_564254); //mov
	edx = eax; //mov
	eax = ecx; //mov
	eax = iSNDdirectstart_(eax, edx);
	pop32(edx);
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_488704:
	eax = iSNDdirectstop_();
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_488718()
{
	cmp(to32i(dword_4DB67C), (int32_t)0);
	if (jz())
		goto loc_48872A;
	xor_(eax, eax);
	return;
loc_48872A:
	push32(edx);
	push32(ebx);
	push32(ecx);
	to32i(dword_4DB67C) = 1; //mov
	eax = iSNDdllversion_();
	cmp(eax, (int32_t)0x60002);
	if (jz())
		goto loc_488718_sndsetfunc;
	eax = 0xFFFFFFF5; //mov
	goto loc_488718_end;
loc_488718_sndsetfunc:
	xor_(eax, eax);
	push32(eax);
	push32(sub_4A5170);
	push32(eax);
	push32(eax);
	push32(sub_4A7CBC);
	eax = iSNDdirectsetfunctions_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	xor_(eax, eax);
loc_488718_end:
	pop32(ecx);
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_48883C()
{
	push32(ecx);
	push32(edx);
	esp -= 4; _sub_488718(); esp += 4; //call
	esp -= 4; _getHwnd(); esp += 4; //call
	eax = iSNDdirectcaps_(eax);
	edx = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_48885A;
	or_(edx, (int32_t)0x10000);
loc_48885A:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_488898()
{
	to32i(dword_4DB678) = eax; //mov
	xor_(eax, eax);
}
Fn(void) Game::_sub_48890C()
{
	eax = to32i(dword_59C600); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = iSNDdirectserve_((int32_t)(intptr_t)this);
	eax = to32i(dword_59C600); //mov
	_sub_489F60(); return; //jmp
}
Fn(void) Game::_sub_488928()
{
	push32(ebx);
	sub(esp, (int32_t)4);
	cmp(to32i(esp+0x1C), (int32_t)0);
	if (jz())
		goto loc_488976;
	cmp(to8i(byte_4DB66C), (int8_t)0);
	if (jnz())
		goto loc_488AC8;
loc_488940:
	cmp(to8i(byte_4DB66D), (int8_t)0);
	if (jz())
		goto loc_488958;
	xor_(eax, eax);
	xor_(bl, bl);
	esp -= 4; _sub_4821D0(); esp += 4; //call
	to8i(byte_4DB66D) = bl; //mov
loc_488958:
	xor_(ecx, ecx);
	eax = iSNDdirectstop_();
loc_488960:
	to32i(dword_4DB670) = ecx; //mov
loc_488966:
	to8i(byte_4DB66F) = 1; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebx);
	esp += 0x18; return;
loc_488976:
	eax = to32i(dword_564250); //mov
	to32i(esp) = eax; //mov
	esp -= 4; _getHwnd(); esp += 4; //call
	eax = iSNDdirectcaps_(eax);
	test(eax, eax);
	if (jle())
		goto loc_488A49;
	bh = to8i(esp+1); //mov
	test(bh, (int8_t)8);
	if (jz())
		goto loc_488A5E;
	to32i(dword_4DB674) = 0x5622; //mov
loc_4889A8:
	eax = to32i(esp); //mov
	dl = to8i(byte_4DB66E); //mov
	to32i(dword_564254) = eax; //mov
	test(dl, dl);
	if (jnz())
		goto loc_4889CC;
	eax = (int32_t)(intptr_t)sub_49FD50; //mov
	dh = 1; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	to8i(byte_4DB66E) = dh; //mov
loc_4889CC:
	edx = (int32_t)(intptr_t)sub_4A5678; //mov
	eax = to32i(dword_564254); //mov
	ecx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_4A7028(); esp += 4; //call
	edx = to32i(dword_59BFA0); //mov
	ebx = ecx; //mov
	xor_(eax, eax);
	esp -= 4; _sub_488ADC(); esp += 4; //call
	esp -= 4; _getHwnd(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(esp); //mov
	eax = iSNDdirectstart_(eax, edx);
	to32i(dword_4DB670) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_488966;
	cmp(to8i(byte_4DB66C), (int8_t)0);
	if (jnz())
		goto loc_488A27;
	eax = (int32_t)(intptr_t)sub_48890C; //mov
	bh = 1; //mov
	esp -= 4; _sub_4838CC(); esp += 4; //call
	to8i(byte_4DB66C) = bh; //mov
loc_488A27:
	cmp(to8i(byte_4DB66D), (int8_t)0);
	if (jnz())
		goto loc_488A42;
	eax = (int32_t)(intptr_t)sub_4886D0; //mov
	ch = 1; //mov
	esp -= 4; _sub_4821D0(); esp += 4; //call
	to8i(byte_4DB66D) = ch; //mov
loc_488A42:
	xor_(ecx, ecx);
	goto loc_488960;
loc_488A49:
	to32i(dword_4DB670) = eax; //mov
	to8i(byte_4DB66F) = 1; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebx);
	esp += 0x18; return;
loc_488A5E:
	test(bh, (int8_t)4);
	if (jz())
		goto loc_488A72;
	to32i(dword_4DB674) = 0x3E80; //mov
	goto loc_4889A8;
loc_488A72:
	test(bh, (int8_t)0x10);
	if (jz())
		goto loc_488A86;
	to32i(dword_4DB674) = 0x7D00; //mov
	goto loc_4889A8;
loc_488A86:
	test(bh, (int8_t)0x20);
	if (jz())
		goto loc_488A9A;
	to32i(dword_4DB674) = 0xAC44; //mov
	goto loc_4889A8;
loc_488A9A:
	test(bh, (int8_t)2);
	if (jz())
		goto loc_488AAE;
	to32i(dword_4DB674) = 0x2B11; //mov
	goto loc_4889A8;
loc_488AAE:
	to32i(dword_4DB670) = 0xFFFFFFF8; //mov
	to8i(byte_4DB66F) = 1; //mov
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebx);
	esp += 0x18; return;
loc_488AC8:
	xor_(dl, dl);
	xor_(eax, eax);
	to8i(byte_4DB66C) = dl; //mov
	esp -= 4; _sub_4838CC(); esp += 4; //call
	goto loc_488940;
}
Fn(void) Game::_sub_488ADC()
{
	cmp(edx, (int32_t)0x28);
	if (jnb())
		goto loc_488AF7;
	cmp(edx, (int32_t)0xA);
	if (jb())
		goto loc_488AF4;
	if (jbe())
		goto loc_488B03;
	cmp(edx, (int32_t)0x14);
	if (jb())
		goto loc_488AF4;
	if (jbe())
		goto loc_488B03;
	cmp(edx, (int32_t)0x1E);
	if (jz())
		goto loc_488B03;
loc_488AF4:
	xor_(eax, eax);
	return;
loc_488AF7:
	if (jbe())
		goto loc_488B03;
	cmp(edx, (int32_t)0x64);
	if (jnb())
		goto loc_488B10;
	cmp(edx, (int32_t)0x32);
	if (jnz())
		goto loc_488AF4;
loc_488B03:
	eax = to32i(dword_4DB674); //mov
	esp -= 4; _sub_4A7D5C(); esp += 4; //call
	xor_(eax, eax);
	return;
loc_488B10:
	if (jbe())
		goto loc_488B03;
	cmp(edx, (int32_t)0x6E);
	if (jb())
		goto loc_488AF4;
	if (jbe())
		goto loc_488B03;
	cmp(edx, (int32_t)0x78);
	if (jz())
		goto loc_488B03;
	xor_(eax, eax);
}
Fn(void) Game::_sub_488B24()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jnz())
	{
		_sub_488ADC();
		return;
	}
	_sub_488B30(); return; //jmp
}
Fn(void) Game::_sub_488B30()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_488B34()
{
	push32(ecx);
	to32i(dword_564250) = eax; //mov
	esp -= 4; _sub_488718(); esp += 4; //call
	cmp(to32i(dword_4DABCC), (int32_t)0);
	if (jnz())
		goto loc_488B4F;
loc_488B48:
	eax = 0xFFFFFFF0; //mov
	pop32(ecx);
	return;
loc_488B4F:
	esp -= 4; _getHwnd(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_488B48;
	push32(ebx);
	push32(sub_488928);
	push32(0x8200);
	esp -= 4; _sub_482270(); esp += 4; //call
	xor_(ah, ah);
	to8i(byte_4DB66F) = ah; //mov
	eax = 0x8200; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_4821E0(); esp += 4; //call
	cmp(to8i(byte_4DB66F), (int8_t)0);
	if (jnz())
		goto loc_488B9C;
	xor_(edx, edx);
loc_488B8B:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(dl, to8i(byte_4DB66F));
	if (jz())
		goto loc_488B8B;
loc_488B9C:
	eax = to32i(dword_4DB670); //mov
	pop32(ebx);
	pop32(ecx);
}
Fn(void) Game::_sub_488BA4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	xor_(ah, ah);
	to8i(byte_4DB66F) = ah; //mov
	edx = 1; //mov
	eax = 0x8200; //mov
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	esp -= 4; _sub_4821E0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_488BE6;
loc_488BC6:
	cmp(to8i(byte_4DB66F), (int8_t)0);
	if (jz())
		goto loc_488BDD;
	eax = to32i(dword_4DB670); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_488BDD:
	xor_(eax, eax);
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_488BC6;
loc_488BE6:
	cmp(to8i(byte_4DB66C), (int8_t)0);
	if (jz())
		goto loc_488BFC;
	xor_(dh, dh);
	to8i(byte_4DB66C) = dh; //mov
	esp -= 4; _sub_4838CC(); esp += 4; //call
loc_488BFC:
	cmp(to8i(byte_4DB66D), (int8_t)0);
	if (jz())
		goto loc_488C14;
	xor_(eax, eax);
	xor_(bh, bh);
	esp -= 4; _sub_4821D0(); esp += 4; //call
	to8i(byte_4DB66D) = bh; //mov
loc_488C14:
	xor_(edx, edx);
	to32i(dword_4DB670) = edx; //mov
	eax = to32i(dword_4DB670); //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_488CE0()
{
	test(edx, edx);
	if (jz())
		goto loc_488CED;
	add(to32i(eax+0x18), edx);
	eax = 8; //mov
	return;
loc_488CED:
	edx = (int32_t)(intptr_t)(eax+0x18); //lea
	add(to32i(eax+0x18), edx);
	eax = 8; //mov
}
Fn(void) Game::_sub_488CFC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	to32i(esp+0x10) = edx; //mov
	ebp = ebx; //mov
	to32i(esp+0xC) = ecx; //mov
	ebx = to32i(esp+0x38); //mov
	edx = ebp; //mov
	shl(edx, (int32_t)4);
	xor_(cl, cl);
	dword_564155[edx] = cl; //mov
	(dword_564155+1)[edx] = 1; //mov
	xor_(ch, ch);
	to16i(word_56415A+edx) = cx; //mov
	esi = eax; //mov
	edx = to32i(eax); //mov
	xor_(edi, edi);
	cmp(edx, (int32_t)0x6C704D54);
	if (jnz())
		goto loc_488E39;
	cmp(to8i(eax+4), (int8_t)0);
	if (jnz())
		goto loc_488E47;
	cmp(to8i(eax+5), (int8_t)0x10);
	if (jnz())
		goto loc_488E55;
	cmp(to8i(eax+6), (int8_t)1);
	if (jnz())
		goto loc_488E55;
	to32i(esp+0x1C) = 4; //mov
loc_488D65:
	cmp(to32i(esp+0x10), (int32_t)2);
	if (jnz())
		goto loc_488EA0;
	xor_(ecx, ecx);
	eax = 0xFFFFFFFF; //mov
	to32i(esp+0x14) = ecx; //mov
	to32i(esp+0x18) = eax; //mov
	to32i(esp+0x20) = eax; //mov
loc_488D83:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	dx = to16i(esi+0xA); //mov
	to16i(word_564150+eax) = dx; //mov
	dl = to8i(esi+5); //mov
	byte_564152[eax] = dl; //mov
	dl = to8i(esi+6); //mov
	byte_564153[eax] = dl; //mov
	dl = to8i(esi+7); //mov
	byte_564154[eax] = dl; //mov
	edx = to32i(esp+0x14); //mov
	to32i(dword_56415C+eax) = edx; //mov
	xor_(eax, eax);
	edx = to32i(dword_4DB674); //mov
	ax = to16i(esi+0xA); //mov
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4A7E20(); esp += 4; //call
	ebx = esp; //mov
	edx = to32i(esp+0x34); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp+0xC); //mov
	esp -= 4; _sub_4A7E60(); esp += 4; //call
	add(edi, to32i(dword_4DB678));
	cmp(edi, (int32_t)0x64);
	if (jle())
		goto loc_488EDE;
	edi = 0x64; //mov
loc_488DF4:
	ebx = to32i(esp+0x3C); //mov
	push32(ebx);
	push32(edi);
	edi = to32i(esp+0x10); //mov
	push32(edi);
	eax = to32i(esp+0x10); //mov
	push32(eax);
	edx = to32i(esp+0x10); //mov
	push32(edx);
	ecx = to32i(esp+0x34); //mov
	push32(ecx);
	ebx = to32i(esp+0x30); //mov
	edi = to32i(esp+0x2C); //mov
	push32(ebx);
	eax = to32i(esi+0x18); //mov
	edx = to32i(esp+0x38); //mov
	push32(edi);
	ecx = to32i(esp+0x30); //mov
	xor_(ebx, ebx);
	push32(eax);
	bl = to8i(esi+7); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4A734C(); esp += 4; //call
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_488E39:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_488E47:
	eax = 0xFFFFFFF5; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_488E55:
	cmp(to8i(esi+5), (int8_t)0x10);
	if (jnz())
		goto loc_488E6E;
	cmp(to8i(esi+6), (int8_t)2);
	if (jnz())
		goto loc_488E6E;
	to32i(esp+0x1C) = 8; //mov
	goto loc_488D65;
loc_488E6E:
	cmp(to8i(esi+5), (int8_t)8);
	if (jnz())
		goto loc_488E87;
	cmp(to8i(esi+6), (int8_t)1);
	if (jnz())
		goto loc_488E87;
	to32i(esp+0x1C) = 1; //mov
	goto loc_488D65;
loc_488E87:
	cmp(to8i(esi+5), (int8_t)8);
	if (jnz())
		goto loc_488E39;
	cmp(to8i(esi+6), (int8_t)2);
	if (jnz())
		goto loc_488E39;
	to32i(esp+0x1C) = 2; //mov
	goto loc_488D65;
loc_488EA0:
	eax = to32i(esi+0xC); //mov
	to32i(esp+0x14) = eax; //mov
	eax = to32i(esi+0x10); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esi+0x14); //mov
	edx = to32i(esp+0x18); //mov
	to32i(esp+0x20) = eax; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_488EC6;
	to32i(esp+0x18) = 0xFFFFFFFF; //mov
loc_488EC6:
	cmp(to32i(esp+0x20), (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_488D83;
	to32i(esp+0x20) = 0xFFFFFFFF; //mov
	goto loc_488D83;
loc_488EDE:
	test(edi, edi);
	if (jge())
		goto loc_488DF4;
	xor_(edi, edi);
	goto loc_488DF4;
}
Fn(void) Game::_sub_488F38()
{
	static const void *const off_488EF0[] = {
		&&loc_48900A,
		&&loc_489037,
		&&loc_48905F,
		&&loc_48904B,
		&&loc_489023,
		&&loc_489073,
		&&loc_489087,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_48901B,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_488FF1,
		&&loc_48909B,
		&&loc_4890AD,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	esi = edx; //mov
	to32i(esp+0x14) = ebx; //mov
	to32i(esp+0x10) = ecx; //mov
	ebx = 0xFFFFFFFF; //mov
	ebp = 0x5622; //mov
	ecx = 0x10; //mov
	xor_(edx, edx);
	edi = to32i(esp+0x10); //mov
	to32i(esp+0x1C) = edx; //mov
	to32i(esp+0x18) = edx; //mov
	to32i(esp+0x24) = ebx; //mov
	to32i(esp+0x28) = ebx; //mov
	to32i(esp+4) = ebp; //mov
	to32i(esp+0x2C) = ecx; //mov
	shl(edi, (int32_t)4);
	edx = 1; //mov
	add(edi, (int32_t)(intptr_t)word_564150);
	xor_(ebx, ebx);
	to32i(esp+0xC) = edx; //mov
	to8i(edi+5) = 0; //mov
	dl = to8i(esp+0x58); //mov
	xor_(ebp, ebp);
	to8i(edi+6) = dl; //mov
	edx = to32i(esp+0x50); //mov
	to32i(esp+0x20) = ebx; //mov
	to16i(edi+0xA) = dx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_488FF5;
loc_488FA6:
	ah = to8i(esi); //mov
	cmp(ah, (int8_t)0xFF);
	if (jz())
		goto loc_4890C0;
	cmp(ah, (int8_t)0xFE);
	if (jz())
		goto loc_4890C0;
	xor_(ebx, ebx);
	bl = ah; //mov
	inc(esi);
	cmp(ebx, (int32_t)0xFC);
	if (jz())
		goto loc_488FA6;
	xor_(ecx, ecx);
	cl = to8i(esi); //mov
	cmp(ecx, (int32_t)0xFF);
	if (jnz())
		goto loc_488FE5;
	inc(esi);
	edx = 4; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	ecx = eax; //mov
	add(esi, (int32_t)3);
loc_488FE5:
	eax = (int32_t)(intptr_t)(ebx-0x81); //lea
	inc(esi);
	cmp(eax, (int32_t)0x11);
	if (jbe())
		goto loc_489003;
loc_488FF1:
	add(esi, ecx);
	goto loc_488FA6;
loc_488FF5:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x1C; return;
loc_489003:
	goto *off_488EF0[eax];
loc_48900A:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0x2C) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_48901B:
	to32i(esp+0x1C) = esi; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_489023:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0x18) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_489037:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0xC) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_48904B:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+4) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_48905F:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0x20) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_489073:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0x24) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_489087:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to32i(esp+0x28) = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_48909B:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	ebp = eax; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_4890AD:
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	to8i(edi+5) = al; //mov
	add(esi, ecx);
	goto loc_488FA6;
loc_4890C0:
	cmp(to32i(esp+0x14), (int32_t)2);
	if (jnz())
		goto loc_4891AF;
	xor_(esi, esi);
	eax = 0xFFFFFFFF; //mov
	to32i(esp+0x18) = esi; //mov
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x28) = eax; //mov
loc_4890DE:
	eax = to32i(esp+4); //mov
	to16i(edi) = ax; //mov
	al = to8i(esp+0x2C); //mov
	to8i(edi+2) = al; //mov
	al = to8i(esp+0xC); //mov
	to8i(edi+3) = al; //mov
	al = to8i(esp+0x20); //mov
	to8i(edi+4) = al; //mov
	eax = to32i(esp+0x18); //mov
	dh = to8i(edi+5); //mov
	to32i(edi+0xC) = eax; //mov
	test(dh, dh);
	if (jnz())
		goto loc_4891EE;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jz())
		goto loc_4891D6;
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebx = esp; //mov
	edx = to32i(esp+0x44); //mov
	eax = to32i(esp+0x40); //mov
	esp -= 4; _sub_4A7E60(); esp += 4; //call
loc_48912A:
	cmp(to32i(esp+0x2C), (int32_t)0x10);
	if (jnz())
		goto loc_489252;
	cmp(to32i(esp+0xC), (int32_t)1);
	if (jnz())
		goto loc_489252;
	esi = 4; //mov
loc_489145:
	ebx = to32i(esp+0x48); //mov
	eax = to32i(esp+4); //mov
	edx = to32i(dword_4DB674); //mov
	esp -= 4; _sub_4A7E20(); esp += 4; //call
	add(ebp, to32i(dword_4DB678));
	cmp(ebp, (int32_t)0x64);
	if (jle())
		goto loc_4892A0;
	ebp = 0x64; //mov
loc_48916C:
	ebx = to32i(esp+0x4C); //mov
	push32(ebx);
	push32(ebp);
	push32(eax);
	edi = to32i(esp+0x14); //mov
	push32(edi);
	ebp = to32i(esp+0x10); //mov
	push32(ebp);
	eax = to32i(esp+0x3C); //mov
	push32(eax);
	edx = to32i(esp+0x3C); //mov
	push32(edx);
	ecx = to32i(esp+0x34); //mov
	eax = to32i(esp+0x38); //mov
	push32(ecx);
	edx = esi; //mov
	ebx = to32i(eax); //mov
	ecx = to32i(esp+0x34); //mov
	push32(ebx);
	eax = to32i(esp+0x34); //mov
	ebx = to32i(esp+0x44); //mov
	esp -= 4; _sub_4A734C(); esp += 4; //call
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0x1C; return;
loc_4891AF:
	cmp(to32i(esp+0x24), (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_4891BE;
	to32i(esp+0x24) = 0xFFFFFFFF; //mov
loc_4891BE:
	cmp(to32i(esp+0x28), (int32_t)0xFFFFFFFF);
	if (jge())
		goto loc_4890DE;
	to32i(esp+0x28) = 0xFFFFFFFF; //mov
	goto loc_4890DE;
loc_4891D6:
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	ebx = esp; //mov
	edx = to32i(esp+0x44); //mov
	eax = to32i(esp+0x50); //mov
	esp -= 4; _sub_4A8A30(); esp += 4; //call
	goto loc_48912A;
loc_4891EE:
	cmp(dh, (int8_t)1);
	if (jnz())
		goto loc_488FF5;
	cmp(to32i(esp+0xC), (int32_t)1);
	if (jnz())
		goto loc_488FF5;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jz())
		goto loc_48921D;
	eax = to32i(esp+0x40); //mov
	sub(eax, (int32_t)0x40);
	esi = eax; //mov
	to32i(esp+0x50) = eax; //mov
	shl(esi, (int32_t)8);
	to32i(esp+0x50) = esi; //mov
loc_48921D:
	eax = to32i(edi+6); //mov
	sar(eax, (int32_t)0x18);
	push32(eax);
	eax = to32i(edi+5); //mov
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	sar(eax, (int32_t)0x18);
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	edx = to32i(esp+0x4C); //mov
	eax = to32i(esp+0x58); //mov
	esp -= 4; _sub_4A8A60(); esp += 4; //call
	al = to8i(esp); //mov
	to8i(edi+8) = al; //mov
	al = to8i(esp+8); //mov
	to8i(edi+9) = al; //mov
	goto loc_48912A;
loc_489252:
	cmp(to32i(esp+0x2C), (int32_t)0x10);
	if (jnz())
		goto loc_48926A;
	cmp(to32i(esp+0xC), (int32_t)2);
	if (jnz())
		goto loc_48926A;
	esi = 8; //mov
	goto loc_489145;
loc_48926A:
	cmp(to32i(esp+0x2C), (int32_t)8);
	if (jnz())
		goto loc_489281;
	edi = to32i(esp+0xC); //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_489281;
	esi = edi; //mov
	goto loc_489145;
loc_489281:
	cmp(to32i(esp+0x2C), (int32_t)8);
	if (jnz())
		goto loc_488FF5;
	edx = to32i(esp+0xC); //mov
	cmp(edx, (int32_t)2);
	if (jnz())
		goto loc_488FF5;
	esi = edx; //mov
	goto loc_489145;
loc_4892A0:
	test(ebp, ebp);
	if (jge())
		goto loc_48916C;
	xor_(ebp, ebp);
	goto loc_48916C;
}
Fn(void) Game::_sub_4892B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ecx = eax; //mov
	to32i(esp+4) = edx; //mov
	edx = 8; //mov
	ah = to8i(eax); //mov
	xor_(edi, edi);
	xor_(ebp, ebp);
	to32i(esp) = edx; //mov
	cmp(ah, (int8_t)0xFF);
	if (jz())
		goto loc_4892E8;
loc_4892D0:
	dh = to8i(ecx); //mov
	cmp(dh, (int8_t)0xFE);
	if (jz())
		goto loc_4892E8;
	esi = (uint8_t)dh; //movzx
	inc(ecx);
	cmp(esi, (int32_t)0xFC);
	if (jnz())
		goto loc_4892FD;
loc_4892E3:
	cmp(to8i(ecx), (int8_t)0xFF);
	if (jnz())
		goto loc_4892D0;
loc_4892E8:
	eax = to32i(esp+4); //mov
	add(eax, edi);
	to32i(ebp+0) = eax; //mov
	eax = to32i(esp); //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4892FD:
	xor_(ebx, ebx);
	bl = to8i(ecx); //mov
	cmp(ebx, (int32_t)0xFF);
	if (jnz())
		goto loc_48931B;
	inc(ecx);
	edx = 4; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	ebx = eax; //mov
	add(ecx, (int32_t)3);
loc_48931B:
	inc(ecx);
	cmp(esi, (int32_t)0x80);
	if (jl())
		goto loc_489337;
	cmp(esi, (int32_t)0x88);
	if (jnz())
		goto loc_48933B;
	edx = ebx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A7E90(); esp += 4; //call
	edi = eax; //mov
loc_489337:
	add(ecx, ebx);
	goto loc_4892E3;
loc_48933B:
	cmp(esi, (int32_t)0x8A);
	if (jnz())
		goto loc_489337;
	ebp = ecx; //mov
	add(ecx, ebx);
	goto loc_4892E3;
}
Fn(void) Game::_sub_48934C()
{
	_sub_4A78B0(); return; //jmp
}
Fn(void) Game::_sub_489354()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	edi = eax; //mov
	eax = edx; //mov
	esi = edi; //mov
	dl = 1; //mov
	shl(esi, (int32_t)4);
	ecx = edi; //mov
	(dword_564155+1)[esi] = dl; //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	bl = (int32_t)(intptr_t)dword_564155[esi]; //mov
	shl(edx, (int32_t)5);
	test(bl, bl);
	if (jz())
		goto loc_4893E0;
	cmp(bl, (int8_t)1);
	if (jnz())
		goto loc_4893F6;
	ecx = to32i(dword_564155+1+esi); //mov
	ebx = esp; //mov
	sar(ecx, (int32_t)0x18);
	sub(eax, (int32_t)0x40);
	push32(ecx);
	ecx = to32i(dword_564155+esi); //mov
	edx = to32i(dword_59BFDE+edx); //mov
	sar(ecx, (int32_t)0x18);
	shl(eax, (int32_t)8);
	push32(ecx);
	sar(edx, (int32_t)0x18);
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_4A8A60(); esp += 4; //call
	al = to8i(esp); //mov
	(dword_564155+3)[esi] = al; //mov
	al = to8i(esp+4); //mov
	byte_564159[esi] = al; //mov
loc_4893CA:
	ebx = to32i(esp+4); //mov
	edx = to32i(esp); //mov
	eax = edi; //mov
	esp -= 4; _sub_4A7850(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4893E0:
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	edx = to32i(dword_59BFDE+edx); //mov
	ebx = esp; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4A7E60(); esp += 4; //call
	goto loc_4893CA;
loc_4893F6:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_489404()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	edi = edx; //mov
	esi = eax; //mov
	shl(esi, (int32_t)4);
	shl(eax, (int32_t)2);
	add(esi, (int32_t)(intptr_t)word_564150);
	sub(eax, ebp);
	to16i(esi+0xA) = dx; //mov
	shl(eax, (int32_t)5);
	dl = to8i(esi+5); //mov
	to8i(esi+6) = 0; //mov
	cmp(dl, (int8_t)1);
	if (jz())
		goto loc_489462;
	test(dl, dl);
	if (jnz())
		goto loc_489497;
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	edx = to32i(dword_59BFDE+eax); //mov
	ebx = esp; //mov
	sar(edx, (int32_t)0x18);
	eax = edi; //mov
	esp -= 4; _sub_4A8A30(); esp += 4; //call
loc_48944C:
	ebx = to32i(esp+4); //mov
	edx = to32i(esp); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4A7850(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_489462:
	edx = to32i(esi+6); //mov
	sar(edx, (int32_t)0x18);
	push32(edx);
	edx = to32i(esi+5); //mov
	sar(edx, (int32_t)0x18);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	push32(edx);
	edx = to32i(dword_59BFDE+eax); //mov
	ebx = (int32_t)(intptr_t)(esp+8); //lea
	sar(edx, (int32_t)0x18);
	eax = edi; //mov
	esp -= 4; _sub_4A8A60(); esp += 4; //call
	al = to8i(esp); //mov
	to8i(esi+8) = al; //mov
	al = to8i(esp+4); //mov
	to8i(esi+9) = al; //mov
	goto loc_48944C;
loc_489497:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4894A4()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	shl(ecx, (int32_t)4);
	sub(eax, esi);
	bl = (int32_t)(intptr_t)dword_564155[ecx]; //mov
	shl(eax, (int32_t)5);
	test(bl, bl);
	if (jnz())
		goto loc_48950D;
	cmp((dword_564155+1)[ecx], (int8_t)0);
	if (jz())
		goto loc_4894F7;
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	eax = to32i(dword_59BFBC+eax); //mov
	ebx = esp; //mov
	sar(eax, (int32_t)0x18);
	esp -= 4; _sub_4A7E60(); esp += 4; //call
loc_4894E1:
	ebx = to32i(esp+4); //mov
	edx = to32i(esp); //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7850(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4894F7:
	xor_(eax, eax);
	ebx = esp; //mov
	ax = to16i(word_56415A+ecx); //mov
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_4A8A30(); esp += 4; //call
	goto loc_4894E1;
loc_48950D:
	cmp(bl, (int8_t)1);
	if (jnz())
		goto loc_48956D;
	push32(edi);
	cmp((dword_564155+1)[ecx], (int8_t)0);
	if (jz())
		goto loc_48952B;
	edi = to32i(dword_59BFBC+eax); //mov
	sar(edi, (int32_t)0x18);
	sub(edi, (int32_t)0x40);
	shl(edi, (int32_t)8);
loc_48952B:
	ebp = esi; //mov
	shl(ebp, (int32_t)4);
	eax = to32i(dword_564155+1+ebp); //mov
	sar(eax, (int32_t)0x18);
	push32(eax);
	eax = to32i(dword_564155+ebp); //mov
	sar(eax, (int32_t)0x18);
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = edi; //mov
	esp -= 4; _sub_4A8A60(); esp += 4; //call
	al = to8i(esp+4); //mov
	(dword_564155+3)[ebp] = al; //mov
	al = to8i(esp+8); //mov
	byte_564159[ebp] = al; //mov
	pop32(edi);
	goto loc_4894E1;
loc_48956D:
	eax = 0xFFFFFFF9; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48957C()
{
	push32(ebx);
	push32(edx);
	edx = eax; //mov
	shl(edx, (int32_t)4);
	bl = (int32_t)(intptr_t)dword_564155[edx]; //mov
	test(bl, bl);
	if (jz())
		goto loc_48959A;
	cmp(bl, (int8_t)1);
	if (jz())
		goto loc_48959A;
	eax = 0xFFFFFFF9; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_48959A:
	esp -= 4; _sub_4A7758(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_489690()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	shl(eax, (int32_t)4);
	bl = (int32_t)(intptr_t)dword_564155[eax]; //mov
	test(bl, bl);
	if (jz())
		goto loc_4896AE;
	cmp(bl, (int8_t)1);
	if (jz())
		goto loc_4896AE;
	eax = 0xFFFFFFF9; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_4896AE:
	push32(esi);
	esi = ecx; //mov
	shl(esi, (int32_t)4);
	eax = to32i(dword_4DB674); //mov
	si = to16i(word_564150+esi); //mov
	and_(esi, (int32_t)0xFFFF);
	ebx = edx; //mov
	edx = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_4A7E20(); esp += 4; //call
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A77B8(); esp += 4; //call
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4896E0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	ecx = edx; //mov
	shl(ebx, (int32_t)4);
	add(ebx, (int32_t)(intptr_t)word_564150);
	edx = (int32_t)(intptr_t)(eax+8); //lea
	cmp(to8i(ebx+4), (int8_t)7);
	if (jz())
		goto loc_489758;
	cmp(to8i(ebx+4), (int8_t)9);
	if (jz())
		goto loc_489754;
	cmp(to8i(ebx+4), (int8_t)8);
	if (jz())
		goto loc_489754;
	cmp(to8i(ebx+4), (int8_t)2);
	if (jnz())
		goto loc_4897AF;
	to16i(eax) = 0; //mov
	to16i(eax+2) = 0; //mov
	to16i(eax+4) = 0; //mov
	to16i(eax+6) = 0; //mov
	al = to8i(ebx+3); //mov
	esi = edx; //mov
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_489742;
	ebx = 2; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	test(edx, edx);
	if (jz())
		goto loc_489740;
	inc(ecx);
loc_489740:
	sar(ecx, (int32_t)1);
loc_489742:
	xor_(eax, eax);
	test(ecx, ecx);
	if (jle())
		goto loc_489754;
	edx = esi; //mov
loc_48974A:
	inc(eax);
	to8i(edx) = 0; //mov
	inc(edx);
	cmp(eax, ecx);
	if (jl())
		goto loc_48974A;
loc_489754:
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_489758:
	to16i(eax) = 0; //mov
	esi = 0x1C; //mov
	to16i(eax+2) = 0; //mov
	edi = edx; //mov
	to16i(eax+4) = 0; //mov
	add(ecx, (int32_t)0x1B);
	to16i(eax+6) = 0; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	ecx = (int32_t)(intptr_t)(eax*4+0); //lea
	add(ecx, eax);
	eax = ecx; //mov
	shl(ecx, (int32_t)2);
	sub(ecx, eax);
	cmp(to8i(ebx+3), (int8_t)2);
	if (jnz())
		goto loc_48979A;
	add(ecx, ecx);
loc_48979A:
	xor_(eax, eax);
	test(ecx, ecx);
	if (jle())
		goto loc_489754;
	edx = edi; //mov
loc_4897A2:
	inc(eax);
	to8i(edx) = 0; //mov
	inc(edx);
	cmp(eax, ecx);
	if (jl())
		goto loc_4897A2;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4897AF:
	cmp(to8i(ebx+4), (int8_t)0);
	if (jnz())
		goto loc_489754;
	cmp(to8i(ebx+3), (int8_t)2);
	if (jnz())
		goto loc_4897BD;
	add(ecx, ecx);
loc_4897BD:
	dl = to8i(ebx+2); //mov
	cmp(dl, (int8_t)0x10);
	if (jnz())
		goto loc_4897DC;
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_489754;
loc_4897CB:
	inc(edx);
	to16i(eax) = 0; //mov
	add(eax, (int32_t)2);
	cmp(edx, ecx);
	if (jl())
		goto loc_4897CB;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4897DC:
	cmp(dl, (int8_t)8);
	if (jnz())
		goto loc_489754;
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_489754;
loc_4897EF:
	inc(edx);
	to8i(eax) = 0; //mov
	inc(eax);
	cmp(edx, ecx);
	if (jl())
		goto loc_4897EF;
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_489800()
{
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_489818;
	cmp(eax, (int32_t)0x7F);
	if (jg())
		goto loc_489812;
	test(eax, eax);
	if (jge())
		goto loc_48981E;
loc_489812:
	eax = 0xFFFFFFF8; //mov
	return;
loc_489818:
	eax = 0xFFFFFFF6; //mov
	return;
loc_48981E:
	push32(edx);
	push32(ecx);
	to8i(byte_4DCEDE) = al; //mov
	ecx = to32i(dword_4DCE6C); //mov
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48999C(); esp += 4; //call
	xor_(eax, eax);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_489840()
{
	push32(edx);
	push32(esi);
	edx = eax; //mov
	ah = to8i(byte_4DDA74); //mov
	xor_(esi, esi);
	test(ah, ah);
	if (jnz())
		goto loc_48985A;
	edx = 0xFFFFFFF6; //mov
	eax = edx; //mov
	pop32(esi);
	pop32(edx);
	return;
loc_48985A:
	push32(ecx);
	push32(ebx);
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	edx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4898C4;
	shl(eax, (int32_t)2);
	sub(eax, edx);
	shl(eax, (int32_t)5);
	xor_(ebx, ebx);
	bl = (int32_t)(intptr_t)byte_59BFEB[eax]; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4898BB;
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	xor_(edx, edx);
loc_489889:
	xor_(eax, eax);
	al = to8i(ecx+0x3B); //mov
	cmp(eax, ebx);
	if (jnz())
		goto loc_4898A4;
	cmp(to8i(ecx+0xC), (int8_t)1);
	if (jnz())
		goto loc_4898A4;
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_4898A4;
	eax = edx; //mov
	esp -= 4; _sub_48957C(); esp += 4; //call
loc_4898A4:
	inc(edx);
	add(ecx, (int32_t)0x60);
	cmp(edx, (int32_t)0x10);
	if (jl())
		goto loc_489889;
loc_4898AD:
	esp -= 4; _sub_4A5374(); esp += 4; //call
	edx = esi; //mov
	pop32(ebx);
	pop32(ecx);
	eax = edx; //mov
	pop32(esi);
	pop32(edx);
	return;
loc_4898BB:
	eax = edx; //mov
	esp -= 4; _sub_48957C(); esp += 4; //call
	goto loc_4898AD;
loc_4898C4:
	esi = 0xFFFFFFF8; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	edx = esi; //mov
	pop32(ebx);
	pop32(ecx);
	eax = edx; //mov
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_4898E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = edx; //mov
	esp -= 4; _sub_4A576C(); esp += 4; //call
	ecx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_489969;
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	shl(edx, (int32_t)5);
	eax = esi; //mov
	add(edx, (int32_t)(intptr_t)dword_59BFB0);
	shl(eax, (int32_t)0x10);
	ebx = to32i(edx+0x20); //mov
	cmp(eax, ebx);
	if (jz())
		goto loc_489972;
	push32(edi);
	edi = (uint8_t)to8i(edx+0x3B); //movzx
	test(edi, edi);
	if (jz())
		goto loc_489978;
	ecx = (int32_t)(intptr_t)dword_59BFB0; //mov
	xor_(ebx, ebx);
loc_489922:
	xor_(edx, edx);
	dl = to8i(ecx+0x3B); //mov
	cmp(edx, edi);
	if (jnz())
		goto loc_489959;
	cmp(to8i(ecx+0xC), (int8_t)1);
	if (jnz())
		goto loc_489959;
	cmp(to32i(ecx), (int32_t)0);
	if (jl())
		goto loc_489959;
	eax = esi; //mov
	shl(eax, (int32_t)0x10);
	to32i(ecx+0x20) = eax; //mov
	eax = ebx; //mov
	to32i(ecx+0x18) = 0; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	edx = to32i(ecx+0x2E); //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4894A4(); esp += 4; //call
loc_489959:
	inc(ebx);
	add(ecx, (int32_t)0x60);
	cmp(ebx, (int32_t)0x10);
	if (jl())
		goto loc_489922;
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489969:
	eax = 0xFFFFFFF8; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489972:
	xor_(eax, ebx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489978:
	to32i(edx+0x20) = eax; //mov
	eax = ecx; //mov
	to32i(edx+0x18) = edi; //mov
	esp -= 4; _sub_4A8BF0(); esp += 4; //call
	edx = to32i(edx+0x2E); //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x18);
	esp -= 4; _sub_4894A4(); esp += 4; //call
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48999C()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(to8i(byte_4DDA74), (int8_t)0);
	if (jz())
		goto loc_4899B8;
	cmp(edx, (int32_t)0x7F);
	if (jg())
		goto loc_4899B1;
	test(edx, edx);
	if (jge())
		goto loc_4899BF;
loc_4899B1:
	eax = 0xFFFFFFF8; //mov
	pop32(ecx);
	return;
loc_4899B8:
	eax = 0xFFFFFFF6; //mov
	pop32(ecx);
	return;
loc_4899BF:
	esp -= 4; _sub_4A5360(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4898E0(); esp += 4; //call
	edx = eax; //mov
	esp -= 4; _sub_4A5374(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_4899E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)4);
	ebx = to32i(dword_4DB6A8); //mov
	esi = to32i(dword_4DB6A4); //mov
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(eax, esi);
	shl(eax, (int32_t)3);
	to32i(esp) = eax; //mov
	eax = esp; //mov
	ecx = ebx; //mov
	esp -= 4; _sub_49CAD4(); esp += 4; //call
	esi = to32i(dword_4DB6A4); //mov
	ebx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_489A33;
	push32(edx);
	xor_(edx, edx);
	test(esi, esi);
	if (jle())
		goto loc_489A30;
loc_489A1D:
	to32i(ebx+4) = 0x46524545; //mov
	inc(edx);
	to32i(ebx) = ecx; //mov
	ecx = ebx; //mov
	add(ebx, (int32_t)0x18);
	cmp(edx, esi);
	if (jl())
		goto loc_489A1D;
loc_489A30:
	ebx = ecx; //mov
	pop32(edx);
loc_489A33:
	to32i(dword_4DB6A4) = esi; //mov
	to32i(dword_4DB6A8) = ebx; //mov
	add(esp, (int32_t)4);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_489A48()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	push32(ebx);
	push32(0);
	push32(edx);
	push32(eax);
	eax = WaitForMultipleObjects_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ebx = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_489A67;
	cmp(eax, edi);
	if (jl())
		goto loc_489A73;
loc_489A67:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_489A73:
	eax = to32i(esi+eax*4); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_StartAddress()
{
	eax = to32i(esp+4); //mov
	call(eax);
	xor_(eax, eax);
	esp += 4; return;
}
Fn(void) Game::_sub_489A88()
{
	cmp(to32i(dword_564268), (int32_t)0);
	if (jz())
		goto loc_489A92;
	return;
loc_489A92:
	push32(edx);
	push32(ecx);
	eax = GetCurrentThreadId_wrap();
	push32(2);
	push32(0);
	push32(0);
	push32(TargetHandle);
	to32i(dword_564264) = eax; //mov
	eax = GetCurrentProcess_wrap();
	push32(eax);
	eax = GetCurrentThread_wrap();
	push32(eax);
	eax = GetCurrentProcess_wrap();
	push32(eax);
	eax = DuplicateHandle_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20), to32i(esp + 24)); esp += 28;
	ecx = 1; //mov
	esp -= 4; _sub_4899E0(); esp += 4; //call
	to32i(dword_564268) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_489AE0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = edx; //mov
	esi = ebx; //mov
	ebx = to32i(esp+0x14); //mov
	edi = esp; //mov
	push32(edi);
	push32(4);
	Game *new_game_ctx = (Game *)malloc32(sizeof(Game));
	new (new_game_ctx) Game();
	push32(new_game_ctx);
	push32(eax);
	push32(edx);
	push32(0);
	eax = CreateThread_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_489B4A;
	cmp(to32i(dword_564268), (int32_t)0);
	if (jnz())
		goto loc_489B19;
	xor_(eax, eax);
	esp -= 4; _sub_489A88(); esp += 4; //call
loc_489B19:
	to32i(ebx+0xC) = 0; //mov
	to32i(ebx) = edi; //mov
	to32i(ebx+4) = ebp; //mov
	to32i(ebx+8) = esi; //mov
	eax = to32i(esp); //mov
	edx = esi; //mov
	to32i(ebx+0x10) = eax; //mov
	eax = ebx; //mov
	esp -= 4; _sub_489CE0(); esp += 4; //call
	push32(edi);
	eax = ResumeThread_wrap(to32i(esp + 0)); esp += 4;
	push32(0);
	eax = SDL_Delay_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
loc_489B4A:
	test(edi, edi);
	if (jz())
		goto loc_489B5C;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_489B5C:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_489B70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_489B90;
	ebx = to32i(eax); //mov
loc_489B7A:
	push32(0);
	push32(ebx);
	eax = TerminateThread_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	push32(ebx);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489B90:
	eax = GetCurrentThread_wrap();
	ebx = eax; //mov
	goto loc_489B7A;
}
Fn(void) Game::_sub_489B9C()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = SDL_Delay_wrap(to32i(esp + 0));
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_489BE8()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ebx = eax; //mov
	eax = GetCurrentThreadId_wrap();
	ecx = to32i(dword_564268); //mov
	edx = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_489C15;
loc_489C00:
	test(ebx, ebx);
	if (jnz())
		goto loc_489C24;
	cmp(edx, to32i(dword_564264));
	if (jnz())
		goto loc_489C1E;
loc_489C0C:
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489C15:
	xor_(eax, eax);
	esp -= 4; _sub_489A88(); esp += 4; //call
	goto loc_489C00;
loc_489C1E:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_489C24:
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_489C0C;
	cmp(edx, to32i(ebx+0x10));
	if (jz())
		goto loc_489C0C;
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_489CE0()
{
	static const void *const off_489CC4[] = {
		&&loc_489D08,
		&&loc_489D84,
		&&loc_489D73,
		&&loc_489D65,
		&&loc_489D5E,
		&&loc_489D57,
		&&loc_489D50,
	};
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = edx; //mov
	cmp(to32i(dword_564268), (int32_t)0);
	if (jz())
		goto loc_489D19;
loc_489CEF:
	test(ecx, ecx);
	if (jnz())
		goto loc_489D22;
	ecx = to32i(TargetHandle); //mov
	eax = (int32_t)(intptr_t)(ebx+3); //lea
	cmp(eax, (int32_t)6);
	if (ja())
		goto loc_489D65;
	goto *off_489CC4[eax];
loc_489D08:
	eax = 0xFFFFFFF1; //mov
loc_489D0D:
	push32(eax);
	push32(ecx);
	eax = SetThreadPriority_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	pop32(ecx);
	pop32(ebx);
	return;
loc_489D19:
	xor_(eax, eax);
	esp -= 4; _sub_489A88(); esp += 4; //call
	goto loc_489CEF;
loc_489D22:
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_489D38;
	ecx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(ebx+3); //lea
	cmp(eax, (int32_t)6);
	if (ja())
		goto loc_489D65;
	goto *off_489CC4[eax];
loc_489D38:
	eax = GetCurrentThread_wrap();
	ecx = eax; //mov
	eax = (int32_t)(intptr_t)(ebx+3); //lea
	cmp(eax, (int32_t)6);
	if (ja())
		goto loc_489D65;
	goto *off_489CC4[eax];
loc_489D50:
	eax = 0xF; //mov
	goto loc_489D0D;
loc_489D57:
	eax = 2; //mov
	goto loc_489D0D;
loc_489D5E:
	eax = 1; //mov
	goto loc_489D0D;
loc_489D65:
	xor_(eax, eax);
	push32(eax);
	push32(ecx);
	eax = SetThreadPriority_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	pop32(ecx);
	pop32(ebx);
	return;
loc_489D73:
	eax = 0xFFFFFFFF; //mov
	push32(eax);
	push32(ecx);
	eax = SetThreadPriority_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	pop32(ecx);
	pop32(ebx);
	return;
loc_489D84:
	eax = 0xFFFFFFFE; //mov
	push32(eax);
	push32(ecx);
	eax = SetThreadPriority_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_489E0C()
{
	push32(ecx);
	push32(edx);
	push32(0);
	push32(0);
	push32(0);
	push32(0);
	eax = CreateEventA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_489E20()
{
	push32(ecx);
	push32(edx);
	eax = SetEvent_wrap(to32i(esp + 0)); esp += 4;
	pop32(ecx);
}
Fn(void) Game::_sub_489E2C()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	edx = esp; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_489A48(); esp += 4; //call
	cmp(eax, to32i(esp));
	if (jnz())
		goto loc_489E52;
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
	return;
loc_489E52:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_489E5C()
{
	push32(ebx);
	push32(edx);
	sub(esp, (int32_t)4);
	to32i(esp) = eax; //mov
	ebx = 0xFFFFFFFF; //mov
	edx = esp; //mov
	eax = 1; //mov
	esp -= 4; _sub_489A48(); esp += 4; //call
	add(esp, (int32_t)4);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_489ED8()
{
	push32(ebx);
	ebx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_489A48(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_CloseHandleCaller()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_489EF8()
{
	push32(ecx);
	int32_t val = to32i(dword_4DB6A8); //mov
	cmp(val, (int32_t)0);
	if (jz())
		goto loc_489F10;
	ecx = val;
	test(ecx, ecx);
	if (jnz())
		goto loc_489F23;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_489F10:
	esp -= 4; _sub_4899E0(); esp += 4; //call
	ecx = to32i(dword_4DB6A8); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_489F23;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_489F23:
	push32(edx);
	push32(ebx);
	eax = to32i(ecx); //mov
	edx = 0x18; //mov
	to32i(dword_4DB6A8) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	push32(ecx);
	ebx = ecx; //mov
	eax = InitializeCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	eax = ebx; //mov
	pop32(ebx);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_489F48()
{
	test(eax, eax);
	if (jnz())
		goto loc_489F4D;
	return;
loc_489F4D:
	push32(edx);
	push32(ecx);
	push32(eax);
	eax = EnterCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	eax = 1; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_489F60()
{
	test(eax, eax);
	if (jnz())
		goto loc_489F65;
	return;
loc_489F65:
	push32(edx);
	push32(ecx);
	push32(eax);
	eax = LeaveCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_489F74()
{
	push32(ebx);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_489F7D;
	pop32(ebx);
	return;
loc_489F7D:
	push32(edx);
	push32(ecx);
	push32(eax);
	eax = DeleteCriticalSection_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(dword_4DB6A8); //mov
	to32i(ebx+4) = 0x46524545; //mov
	to32i(dword_4DB6A8) = ebx; //mov
	to32i(ebx) = eax; //mov
	pop32(ecx);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_489FD8()
{
	push32(ecx);
	push32(edx);
	eax = GetLastError_wrap();
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_489FEA;
loc_489FE7:
	pop32(edx);
	pop32(ecx);
	return;
loc_489FEA:
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_489FE7;
	to32i(dword_56426C) = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48A01C()
{
	push32(ebx);
	xor_(ebx, ebx);
	esp -= 4; _sub_48A031(); esp += 4; //call
	pop32(ebx);
}
Fn(void) Game::_sub_48A026()
{
	bh = bl; //mov
	push32(eax);
	eax = ebx; //mov
	shl(eax, (int32_t)0x10);
	or_(ebx, eax);
	pop32(eax);
	_sub_48A031(); return; //jmp
}
Fn(void) Game::_sub_48A031()
{
	test(eax, (int32_t)7);
	if (jnz())
		goto loc_48A0E3;
loc_48A03C:
	cmp(edx, (int32_t)0);
	if (jl())
		goto locret_48A080;
	cmp(bl, (int8_t)0xFF);
	if (jz())
		goto loc_48A081;
	cmp(bl, bh);
	if (jnz())
		goto loc_48A081;
	push32(ebx);
	push32(ebx);
	fld(to64f(esp));
	sub(edx, (int32_t)0x20);
	if (js())
		goto loc_48A067;
loc_48A054:
	fst(to64f(eax));
	fst(to64f(eax+8));
	fst(to64f(eax+0x10));
	fst(to64f(eax+0x18));
	eax = (int32_t)(intptr_t)(eax+0x20); //lea
	sub(edx, (int32_t)0x20);
	if (jns())
		goto loc_48A054;
loc_48A067:
	add(edx, (int32_t)0x18);
	if (js())
		goto loc_48A076;
loc_48A06C:
	fst(to64f(eax));
	eax = (int32_t)(intptr_t)(eax+8); //lea
	sub(edx, (int32_t)8);
	if (jns())
		goto loc_48A06C;
loc_48A076:
	fstp_st(0);
	add(esp, (int32_t)8);
	add(edx, (int32_t)8);
	if (jnz())
		goto loc_48A0BD;
locret_48A080:
	return;
loc_48A081:
	sub(edx, (int32_t)0x20);
	if (js())
		goto loc_48A0A5;
loc_48A086:
	to32i(eax) = ebx; //mov
	to32i(eax+4) = ebx; //mov
	to32i(eax+8) = ebx; //mov
	to32i(eax+0xC) = ebx; //mov
	to32i(eax+0x10) = ebx; //mov
	to32i(eax+0x14) = ebx; //mov
	to32i(eax+0x18) = ebx; //mov
	to32i(eax+0x1C) = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+0x20); //lea
	sub(edx, (int32_t)0x20);
	if (jns())
		goto loc_48A086;
loc_48A0A5:
	add(edx, (int32_t)0x18);
	if (js())
		goto loc_48A0B7;
loc_48A0AA:
	to32i(eax) = ebx; //mov
	to32i(eax+4) = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+8); //lea
	sub(edx, (int32_t)8);
	if (jns())
		goto loc_48A0AA;
loc_48A0B7:
	add(edx, (int32_t)8);
	if (jnz())
		goto loc_48A0BD;
	return;
loc_48A0BD:
	test(edx, (int32_t)4);
	if (jz())
		goto loc_48A0CA;
	to32i(eax) = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
loc_48A0CA:
	test(edx, (int32_t)2);
	if (jz())
		goto loc_48A0D8;
	to16i(eax) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
loc_48A0D8:
	test(edx, (int32_t)1);
	if (jz())
		goto locret_48A0E2;
	to8i(eax) = bl; //mov
locret_48A0E2:
	return;
loc_48A0E3:
	test(eax, (int32_t)1);
	if (jz())
		goto loc_48A0F7;
	cmp(edx, (int32_t)1);
	if (jl())
		goto loc_48A0F7;
	to8i(eax) = bl; //mov
	eax = (int32_t)(intptr_t)(eax+1); //lea
	sub(edx, (int32_t)1);
loc_48A0F7:
	test(eax, (int32_t)2);
	if (jz())
		goto loc_48A10C;
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_48A10C;
	to16i(eax) = bx; //mov
	eax = (int32_t)(intptr_t)(eax+2); //lea
	sub(edx, (int32_t)2);
loc_48A10C:
	test(eax, (int32_t)4);
	if (jz())
		goto loc_48A120;
	cmp(edx, (int32_t)4);
	if (jl())
		goto loc_48A120;
	to32i(eax) = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+4); //lea
	sub(edx, (int32_t)4);
loc_48A120:
	goto loc_48A03C;
}
Fn(void) Game::_sub_48A130()
{
	xor_(eax, eax);
}
Fn(void) Game::_sub_48A134()
{
	cmp(to32i(dword_4DBAC0), (int32_t)0);
	if (jnz())
		goto loc_48A13E;
	return;
loc_48A13E:
	esp -= 4; _sub_48A2B4(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_564270; //mov
	_sub_48BA6C(); return; //jmp
}
Fn(void) Game::_sub_48A158()
{
	edx = to32i(eax+0xC); //mov
	cmp(to32i(edx+0xC), (int32_t)0);
	if (jnz())
		goto loc_48A167;
	eax = 1; //mov
	return;
loc_48A167:
	call(to32i(edx+0xC));
	eax = 1; //mov
}
Fn(void) Game::_sub_48A170()
{
	push32(ebx);
	push32(edx);
	edx = (int32_t)(intptr_t)sub_48A158; //mov
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48BF74(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_48A188()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	edx = ebx; //mov
	ebx = ecx; //mov
	ecx = to32i(esp+0xC); //mov
	cmp(to32i(dword_4DBAC0), (int32_t)0);
	if (jz())
		goto loc_48A253;
loc_48A1A3:
	test(esi, esi);
	if (jz())
		goto loc_48A205;
	cmp(to32i(esi+0x24), (int32_t)0);
	if (jnz())
		goto loc_48A1B4;
	to32i(esi+0x24) = 2; //mov
loc_48A1B4:
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jnz())
		goto loc_48A1C1;
	to32i(esi+0x28) = 4; //mov
loc_48A1C1:
	cmp(to32i(esi+0x2C), (int32_t)0);
	if (jnz())
		goto loc_48A1CE;
	to32i(esi+0x2C) = 6; //mov
loc_48A1CE:
	cmp(to32i(esi+0x14), (int32_t)0);
	if (jnz())
		goto loc_48A1DB;
	to32i(esi+0x14) = (int32_t)(intptr_t)sub_48A130; //mov
loc_48A1DB:
	cmp(to32i(esi+0x1C), (int32_t)0);
	if (jnz())
		goto loc_48A1E8;
	to32i(esi+0x1C) = (int32_t)(intptr_t)sub_48A130; //mov
loc_48A1E8:
	cmp(to32i(esi+0x18), (int32_t)0);
	if (jnz())
		goto loc_48A1F5;
	to32i(esi+0x18) = (int32_t)(intptr_t)sub_48A130; //mov
loc_48A1F5:
	cmp(to32i(esi+0x20), (int32_t)0);
	if (jnz())
		goto loc_48A202;
	to32i(esi+0x20) = (int32_t)(intptr_t)sub_48A130; //mov
loc_48A202:
	to32i(esi+0xC) = edi; //mov
loc_48A205:
	test(esi, esi);
	if (jz())
		goto loc_48A228;
	cmp(to32i(edi+0xC), (int32_t)0);
	if (jz())
		goto loc_48A228;
	cmp(to32i(dword_4DBAC4), (int32_t)0);
	if (jnz())
		goto loc_48A222;
	eax = (int32_t)(intptr_t)sub_48A170; //mov
	esp -= 4; _sub_4A3F04(); esp += 4; //call
loc_48A222:
	inc(to32i(dword_4DBAC4));
loc_48A228:
	eax = esi; //mov
	call(to32i(edi+4));
	edx = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_48A24C;
	cmp(to32i(edi+0xC), (int32_t)0);
	if (jz())
		goto loc_48A24C;
	test(eax, eax);
	if (jnz())
		goto loc_48A24C;
	ebx = to32i(dword_4DBAC4); //mov
	dec(ebx);
	to32i(dword_4DBAC4) = ebx; //mov
	if (jz())
		goto loc_48A25D;
loc_48A24C:
	eax = edx; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48A253:
	esp -= 4; _sub_48A270(); esp += 4; //call
	goto loc_48A1A3;
loc_48A25D:
	eax = (int32_t)(intptr_t)sub_48A170; //mov
	esp -= 4; _sub_4A3F6C(); esp += 4; //call
	eax = edx; //mov
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_48A270()
{
	push32(edx);
	edx = to32i(dword_4DBAC0); //mov
	test(edx, edx);
	if (jz())
		goto loc_48A27D;
	pop32(edx);
	return;
loc_48A27D:
	push32(ecx);
	push32(ebx);
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)dword_564270; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_48A134; //mov
	ecx = 1; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	to32i(dword_4DBAC0) = ecx; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_48A2B4()
{
	push32(edx);
	cmp(to32i(dword_4DBAC0), (int32_t)0);
	if (jz())
		goto loc_48A2DE;
loc_48A2BE:
	eax = (int32_t)(intptr_t)dword_56428C; //mov
	xor_(edx, edx);
	esp -= 4; _sub_48BD74(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48A2E0;
loc_48A2CE:
	eax = (int32_t)(intptr_t)dword_564270; //mov
	xor_(edx, edx);
	esp -= 4; _sub_48BD74(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48A2E7;
loc_48A2DE:
	pop32(edx);
	return;
loc_48A2E0:
	esp -= 4; _sub_48A308(); esp += 4; //call
	goto loc_48A2BE;
loc_48A2E7:
	esp -= 4; _sub_48A308(); esp += 4; //call
	goto loc_48A2CE;
}
Fn(void) Game::_sub_48A2F0()
{
	test(eax, eax);
	if (jz())
		goto loc_48A2FA;
	cmp(to32i(eax+4), (int32_t)0);
	if (jnz())
		goto loc_48A2FD;
loc_48A2FA:
	xor_(eax, eax);
	return;
loc_48A2FD:
	push32(ecx);
	ecx = to32i(eax+0xC); //mov
	call(to32i(ecx+8));
	pop32(ecx);
}
Fn(void) Game::_sub_48A308()
{
	push32(edx);
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48A315;
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jnz())
		goto loc_48A319;
loc_48A315:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_48A319:
	push32(edi);
	push32(esi);
	push32(ecx);
	ecx = to32i(eax+0xC); //mov
	call(to32i(ecx+0x10));
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48A352;
	eax = to32i(edx+0xC); //mov
	cmp(to32i(eax+0xC), (int32_t)0);
	if (jz())
		goto loc_48A352;
	esi = to32i(dword_4DBAC4); //mov
	test(esi, esi);
	if (jz())
		goto loc_48A352;
	edi = (int32_t)(intptr_t)(esi-1); //lea
	to32i(dword_4DBAC4) = edi; //mov
	test(edi, edi);
	if (jnz())
		goto loc_48A352;
	eax = (int32_t)(intptr_t)sub_48A170; //mov
	esp -= 4; _sub_4A3F6C(); esp += 4; //call
loc_48A352:
	eax = ecx; //mov
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_48A980()
{
	push32(ecx);
	ecx = edx; //mov
	cmp(edx, eax);
	if (ja())
		goto loc_48A9A4;
loc_48A987:
	cmp(to32i(dword_4DABAC), (int32_t)0);
	if (jnz())
		goto loc_48A9BF;
	cmp(to32i(dword_4DABA4), (int32_t)0);
	if (jz())
		goto loc_48A9CC;
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4AB61D(); esp += 4; //call
loc_48A9A2:
	pop32(ecx);
	return;
loc_48A9A4:
	edx = (int32_t)(intptr_t)(eax+ebx); //lea
	cmp(ecx, edx);
	if (jnb())
		goto loc_48A987;
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(ecx+ebx); //lea
loc_48A9B0:
	dec(ebx);
	cmp(ebx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48A9A2;
	dec(edx);
	cl = to8i(eax-1); //mov
	dec(eax);
	to8i(edx) = cl; //mov
	goto loc_48A9B0;
loc_48A9BF:
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4AB6F9(); esp += 4; //call
	pop32(ecx);
	return;
loc_48A9CC:
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_4A14D5(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_48A9E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	edx = 6; //mov
	push32(0x452);
	ebx = 0xFF; //mov
	to16i(esp+4) = dx; //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	edx = 4; //mov
	to16i(esp+0xC) = ax; //mov
	eax = (int32_t)(intptr_t)(esp+2); //lea
	esp -= 4; _sub_48A026(); esp += 4; //call
	ebx = 0xFF; //mov
	edx = 6; //mov
	eax = (int32_t)(intptr_t)(esp+6); //lea
	esp -= 4; _sub_48A026(); esp += 4; //call
	ebx = 2; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 2; //mov
	edx = 0x8BE; //mov
	eax = (int32_t)(intptr_t)(esp+0x12); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(0xE);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(0);
	push32(4);
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	push32(eax);
	push32(esi);
	eax = sendto_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	esi = eax; //mov
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(esi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48AA8C;
	eax = 1; //mov
	add(esp, (int32_t)0x14);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48AA8C:
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48AA98()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp) = eax; //mov
	edi = ecx; //mov
	xor_(esi, esi);
	push32(0x452);
	si = to16i(edx+0xC); //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	and_(eax, (int32_t)0xFFFF);
	cmp(esi, eax);
	if (jz())
		goto loc_48AAC5;
loc_48AABC:
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48AAC5:
	ecx = 2; //mov
	eax = ebx; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)2);
	if (jnz())
		goto loc_48AABC;
	sub(edi, eax);
	shr(edi, (int32_t)6);
	esi = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(esp+4) = edi; //mov
	edi = (int32_t)(intptr_t)(esi+0x32); //lea
	ebp = (int32_t)(intptr_t)(esi+eax); //lea
loc_48AAF2:
	edx = to32i(esp+4); //mov
	dec(edx);
	to32i(esp+4) = edx; //mov
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48AB0C;
	eax = 1; //mov
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48AB0C:
	ecx = 2; //mov
	eax = esi; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0x8BE);
	if (jz())
		goto loc_48AB34;
	add(edi, (int32_t)0x40);
	add(ebp, (int32_t)0x40);
	add(esi, (int32_t)0x40);
	goto loc_48AAF2;
loc_48AB34:
	eax = to32i(esp); //mov
	ebx = ebp; //mov
	edx = edi; //mov
	esp -= 4; _sub_41DB00(); esp += 4; //call
	add(edi, (int32_t)0x40);
	add(ebp, (int32_t)0x40);
	add(esi, (int32_t)0x40);
	goto loc_48AAF2;
}
Fn(void) Game::_sub_48AB4C()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(0xE);
	push32(edx);
	push32(0);
	push32(0x42);
	push32(buf);
	edx = to32i(dword_5642CC); //mov
	push32(edx);
	eax = sendto_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48AB80()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	ecx = 2; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = 2; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(ebx+2); //lea
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_48ABCC;
	cmp(eax, (int32_t)0x8BE);
	if (jz())
		goto loc_48ABC4;
	cmp(eax, (int32_t)0xFFFF);
	if (jnz())
		goto loc_48ABCC;
loc_48ABC4:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_48ABCC:
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48ABD4()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	push32(0x3E8);
	push32(2);
	push32(6);
	eax = socket_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	ebx = eax; //mov
	edi = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48AC05;
	ebx = 0xFFFFFFFF; //mov
loc_48ABFA:
	eax = ebx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48AC05:
	push32(4);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(0x20);
	push32(0xFFFF);
	edx = 1; //mov
	push32(ebx);
	to32i(esp+0x14) = edx; //mov
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	push32(4);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(0x400F);
	push32(0xFFFF);
	push32(ebx);
	eax = setsockopt_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	edx = 0xE; //mov
	eax = esi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	push32(0x452);
	to16i(esi) = 6; //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	push32(0xE);
	push32(esi);
	push32(ebx);
	to16i(esi+0xC) = ax; //mov
	eax = bind_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	test(eax, eax);
	if (jnz())
		goto loc_48AC89;
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	push32(esi);
	ecx = 0xE; //mov
	push32(ebx);
	to32i(esp+0x10) = ecx; //mov
	eax = getsockname_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8)); esp += 12;
	test(eax, eax);
	if (jnz())
		goto loc_48AC89;
	cmp(to32i(esp+4), (int32_t)0xE);
	if (jz())
		goto loc_48ABFA;
loc_48AC89:
	push32(edi);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	ebx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48ACA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x330);
	esp -= 4; _sub_4A3DB0(); esp += 4; //call
	edx = 6; //mov
	push32(0x452);
	ebx = (int32_t)(intptr_t)(eax+4); //lea
	to16i(esp+0x318) = dx; //mov
	eax = htons_wrap(to32i(esp + 0)); esp += 4;
	edx = (int32_t)(intptr_t)(esp+0x314); //lea
	eax = ax; //cwde
	esp -= 4; _sub_41DC40(); esp += 4; //call
	edx = 1; //mov
	xor_(esi, esi);
	to32i(dword_5642C8) = edx; //mov
	ebp = 0x10; //mov
	xor_(edi, edi);
loc_48ACEC:
	ecx = 1; //mov
	eax = to32i(dword_5642CC); //mov
	edx = ebx; //mov
	to32i(esp+0x200) = ecx; //mov
	to32i(esp+0x204) = eax; //mov
	sar(edx, (int32_t)0x1F);
	ecx = 0x3E8; //mov
	eax = ebx; //mov
	idiv32(ecx);
	to32i(esp+0x324) = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	imul32(eax, edx, 0x3E8);
	to32i(esp+0x328) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x324); //lea
	push32(eax);
	push32(edi);
	push32(edi);
	eax = (int32_t)(intptr_t)(esp+0x20C); //lea
	push32(eax);
	push32(edi);
	eax = select_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	edx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48AE0D;
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48AE0D;
	eax = to32i(dword_4DB6A0); //mov
	to32i(esp+0x32C) = ebp; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x32C); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x308); //lea
	push32(eax);
	push32(edi);
	push32(0x200);
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(eax);
	eax = to32i(dword_5642CC); //mov
	push32(eax);
	eax = recvfrom_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	edx = eax; //mov
	eax = to32i(dword_4DB6A0); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(edx, (int32_t)4);
	if (jnz())
		goto loc_48ADB9;
	eax = esp; //mov
	esp -= 4; _sub_48AB80(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48ADB9;
	eax = (int32_t)(intptr_t)(esp+0x304); //lea
	esp -= 4; _sub_48AB4C(); esp += 4; //call
loc_48ADB9:
	cmp(edi, to32i(dword_5642C8));
	if (jz())
		goto loc_48ADE6;
	esp -= 4; _sub_4A3DB0(); esp += 4; //call
	cmp(ebx, eax);
	if (jnb())
		goto loc_48ADE6;
	eax = (int32_t)(intptr_t)(esp+0x314); //lea
	esi = 1; //mov
	esp -= 4; _sub_48AB4C(); esp += 4; //call
	esp -= 4; _sub_4A3DB0(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(eax+0xEA60); //lea
loc_48ADE6:
	cmp(edi, to32i(dword_5642C8));
	if (jnz())
		goto loc_48ACEC;
loc_48ADF2:
	test(esi, esi);
	if (jnz())
		goto loc_48AE1C;
loc_48ADF6:
	to32i(dword_5642C4) = 1; //mov
	add(esp, (int32_t)0x330);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48AE0D:
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48ADB9;
	xor_(ebx, ebx);
	to32i(dword_5642C8) = ebx; //mov
	goto loc_48ADF2;
loc_48AE1C:
	ebx = 2; //mov
	edx = 0x10; //mov
	eax = (int32_t)(intptr_t)word_564322; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x314); //lea
	esp -= 4; _sub_48AB4C(); esp += 4; //call
	goto loc_48ADF6;
}
Fn(void) Game::_sub_48AE40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	ecx = ebx; //mov
	cmp(to32i(dword_5642C8), (int32_t)0);
	if (jz())
		goto loc_48AE5B;
loc_48AE52:
	eax = to32i(dword_5642C8); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48AE5B:
	eax = (int32_t)(intptr_t)dword_5642D4; //mov
	esp -= 4; _sub_48ABD4(); esp += 4; //call
	to32i(dword_5642CC) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48AE52;
	ebx = 2; //mov
	eax = (int32_t)(intptr_t)buf; //mov
	edx = ebx; //mov
	to32i(dword_5642D0) = edi; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 2; //mov
	edx = 0x8BE; //mov
	eax = (int32_t)(intptr_t)byte_5642E4; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 2; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)word_564322; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 0x30; //mov
	eax = (int32_t)(intptr_t)word_5642E6; //mov
	edx = ecx; //mov
	edi = (int32_t)(intptr_t)word_564316; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	push32(dword_5642B0);
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)sub_48ACA0; //mov
	xor_(ecx, ecx);
	movsd();
	movsd();
	movsd();
	xor_(edx, edx);
	to32i(dword_5642C4) = ecx; //mov
	ecx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48AF10;
	esi = 1; //mov
	xor_(ecx, ecx);
loc_48AEF5:
	ebx = to32i(dword_5642C8); //mov
	cmp(ecx, ebx);
	if (jnz())
		goto loc_48AF10;
	cmp(ebx, to32i(dword_5642C4));
	if (jnz())
		goto loc_48AF10;
	eax = esi; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_48AEF5;
loc_48AF10:
	cmp(to32i(dword_5642C4), (int32_t)0);
	if (jz())
		goto loc_48AE52;
	eax = to32i(dword_5642CC); //mov
	push32(eax);
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(dword_5642C8); //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48AF34()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	cmp(to32i(dword_5642C8), (int32_t)0);
	if (jnz())
		goto loc_48AF49;
loc_48AF40:
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48AF49:
	ebx = to32i(dword_5642CC); //mov
	xor_(ecx, ecx);
	push32(ebx);
	to32i(dword_5642C8) = ecx; //mov
	eax = closesocket_wrap(to32i(esp + 0)); esp += 4;
	cmp(to32i(dword_5642C4), (int32_t)0);
	if (jnz())
		goto loc_48AF40;
loc_48AF66:
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(to32i(dword_5642C4), (int32_t)0);
	if (jz())
		goto loc_48AF66;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48AF90()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	eax = to32i(eax); //mov
	edx = to32i(edx); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_48AFE0;
	xor_(eax, edx);
	xor_(edx, edx);
	ax = to16i(esi+4); //mov
	dx = to16i(edi+4); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_48AFE0;
	xor_(eax, edx);
	xor_(edx, edx);
	ax = to16i(esi+6); //mov
	dx = to16i(edi+6); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_48AFE0;
	ecx = esi; //mov
	bl = to8i(esi+8); //mov
	xor_(eax, edx);
	bh = to8i(edi+8); //mov
	edx = edi; //mov
	cmp(bl, bh);
	if (jnz())
		goto loc_48AFE0;
loc_48AFD0:
	inc(edx);
	inc(eax);
	inc(ecx);
	cmp(eax, (int32_t)8);
	if (jge())
		goto loc_48AFE7;
	bl = to8i(ecx+8); //mov
	cmp(bl, to8i(edx+8));
	if (jz())
		goto loc_48AFD0;
loc_48AFE0:
	xor_(eax, eax);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48AFE7:
	eax = 1; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48AFF4()
{
	push32(edx);
	cmp(to32i(dword_4DBAE0), (int32_t)0);
	if (jz())
		goto loc_48B029;
loc_48AFFE:
	eax = (int32_t)(intptr_t)dword_564364; //mov
	xor_(edx, edx);
	esp -= 4; _sub_48BD74(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48B015;
	esp -= 4; _sub_48B1FC(); esp += 4; //call
	goto loc_48AFFE;
loc_48B015:
	push32(ecx);
	eax = (int32_t)(intptr_t)dword_564364; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_48BA6C(); esp += 4; //call
	to32i(dword_4DBAE0) = ecx; //mov
	pop32(ecx);
loc_48B029:
	pop32(edx);
}
Fn(void) Game::_sub_48B02C()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	to32i(esp) = edx; //mov
	to32i(esp+4) = ebx; //mov
	edi = ecx; //mov
	eax = 1; //mov
	xor_(edx, edx);
	ecx = to32i(dword_4DBADC); //mov
	to32i(esp+0xC) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_48B097;
	xor_(esi, esi);
loc_48B056:
	test(eax, eax);
	if (jz())
		goto loc_48B097;
	edx = to32i(dword_564324+esi); //mov
	ecx = to32i(edx+4); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48B09E;
	cmp(edi, (int32_t)0x20);
	if (ja())
		goto loc_48B081;
	eax = to32i(dword_564344+esi); //mov
	add(eax, (int32_t)4);
	ebx = 0xFA; //mov
	edx = to32i(eax-4); //mov
	call(to32i(esp+8));
loc_48B081:
	ebx = to32i(esp+0xC); //mov
	ebp = to32i(dword_4DBADC); //mov
	inc(ebx);
	add(esi, (int32_t)4);
	to32i(esp+0xC) = ebx; //mov
	cmp(ebx, ebp);
	if (jl())
		goto loc_48B056;
loc_48B097:
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48B09E:
	ebx = to32i(esp+4); //mov
	eax = to32i(esp+8); //mov
	ebp = edx; //mov
	ecx = edi; //mov
	edx = to32i(esp); //mov
	call(to32i(ebp+4));
	goto loc_48B081;
}
Fn(void) Game::_sub_48B0B4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	to32i(esp+4) = edx; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+8) = ecx; //mov
	edx = to32i(dword_4DBAE0); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jz())
		goto loc_48B17B;
loc_48B0D7:
	eax = (int32_t)(intptr_t)dword_564364; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BC50(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48B0EF;
	eax = esi; //mov
	esp -= 4; _sub_48B1FC(); esp += 4; //call
loc_48B0EF:
	edx = 0xAC; //mov
	eax = esi; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	xor_(ebp, ebp);
	eax = to32i(dword_4DBADC); //mov
	to32i(esp+0xC) = ebp; //mov
	test(eax, eax);
	if (jle())
		goto loc_48B16C;
	xor_(edi, edi);
loc_48B10C:
	test(ecx, ecx);
	if (jnz())
		goto loc_48B16C;
	eax = to32i(dword_564344+edi); //mov
	to32i(esi+8) = eax; //mov
	eax = to32i(dword_564324+edi); //mov
	to32i(esi+4) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esi+0x10) = eax; //mov
	eax = to32i(esi+4); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_48B1C3;
loc_48B136:
	eax = to32i(esp+0x28); //mov
	edx = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x20); //mov
	push32(eax);
	ebx = to32i(esp+0xC); //mov
	ebp = to32i(esi+4); //mov
	push32(edx);
	eax = esi; //mov
	edx = to32i(esp+8); //mov
	call(to32i(ebp+8));
	ecx = eax; //mov
loc_48B156:
	edx = to32i(esp+0xC); //mov
	ebx = to32i(dword_4DBADC); //mov
	inc(edx);
	add(edi, (int32_t)4);
	to32i(esp+0xC) = edx; //mov
	cmp(edx, ebx);
	if (jl())
		goto loc_48B10C;
loc_48B16C:
	test(ecx, ecx);
	if (jnz())
		goto loc_48B1E2;
	eax = ecx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_48B17B:
	eax = (int32_t)(intptr_t)dword_564364; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48BA2C(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_48AFF4; //mov
	esp -= 4; _atexit_(); esp += 4; //call
	cmp(to32i(dword_4DBAD4), (int32_t)0);
	if (jnz())
		goto loc_48B1B4;
	edx = to32i(dword_4DABCC); //mov
	add(edx, (int32_t)9);
	edi = 0xA; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(dword_4DBAD4) = eax; //mov
loc_48B1B4:
	to32i(dword_4DBAE0) = 1; //mov
	goto loc_48B0D7;
loc_48B1C3:
	eax = to32i(dword_564344+edi); //mov
	edx = to32i(esp+8); //mov
	add(eax, (int32_t)4);
	esp -= 4; _sub_48AF90(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48B136;
	goto loc_48B156;
loc_48B1E2:
	eax = (int32_t)(intptr_t)dword_564364; //mov
	edx = esi; //mov
	esp -= 4; _sub_48BA80(); esp += 4; //call
	eax = ecx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_48B1FC()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)dword_564364; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48BC50(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48B21A;
	eax = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48B21A:
	ebx = to32i(ecx+4); //mov
	eax = ecx; //mov
	edx = ecx; //mov
	call(to32i(ebx+0xC));
	ebx = eax; //mov
	eax = (int32_t)(intptr_t)dword_564364; //mov
	esp -= 4; _sub_48BC18(); esp += 4; //call
	eax = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48B238()
{
	push32(esi);
	esi = to32i(eax+4); //mov
	call(to32i(esi+0x10));
	pop32(esi);
}
Fn(void) Game::_sub_48B244()
{
	push32(ecx);
	ecx = to32i(eax+4); //mov
	call(to32i(ecx+0x14));
	pop32(ecx);
}
Fn(void) Game::_sub_48B25C()
{
	push32(esi);
	esi = to32i(eax+4); //mov
	call(to32i(esi+0x1C));
	pop32(esi);
}
Fn(void) Game::_sub_48B274()
{
	push32(ecx);
	ecx = to32i(eax+4); //mov
	call(to32i(ecx+0x24));
	pop32(ecx);
}
Fn(void) Game::_sub_48B280()
{
	push32(edx);
	edx = to32i(eax+4); //mov
	call(to32i(edx+0x28));
	pop32(edx);
}
Fn(void) Game::_sub_48B28C()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = eax; //mov
	eax = (int32_t)(intptr_t)dword_564364; //mov
	esp -= 4; _sub_48BC50(); esp += 4; //call
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48B2A9;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_48B2A9:
	edx = to32i(ecx+4); //mov
	eax = ecx; //mov
	call(to32i(edx+0x2C));
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48B2C0()
{
	push32(ecx);
	ecx = to32i(eax+4); //mov
	call(to32i(ecx+0x34));
	pop32(ecx);
}
Fn(void) Game::_sub_48B2CC()
{
	push32(esi);
	push32(edi);
	esi = ecx; //mov
	test(eax, eax);
	if (jz())
		goto loc_48B2DE;
	to32i(eax+0x44) = 0; //mov
	to32i(eax+0x48) = ecx; //mov
loc_48B2DE:
	ecx = ebx; //mov
	edi = to32i(esi+4); //mov
	ebx = edx; //mov
	edx = eax; //mov
	eax = esi; //mov
	call(to32i(edi+0x38));
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48B2F0()
{
	push32(ecx);
	ecx = to32i(eax+8); //mov
	eax = to32i(eax+0xC); //mov
	call(to32i(ecx+0x3C));
	pop32(ecx);
}
Fn(void) Game::_sub_48B2FC()
{
	push32(esi);
	esi = to32i(eax+8); //mov
	cmp(to32i(esi+0x38), (int32_t)0);
	if (jnz())
		goto loc_48B30A;
	xor_(eax, eax);
	pop32(esi);
	return;
loc_48B30A:
	eax = to32i(eax+0xC); //mov
	call(to32i(esi+0x38));
	pop32(esi);
}
Fn(void) Game::_sub_48B724()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x10);
	to32i(ebp-4) = eax; //mov
	to32i(ebp-8) = edx; //mov
	to32i(ebp-0x10) = ebx; //mov
	to32i(ebp-0xC) = ecx; //mov
	eax = to32i(dword_4DBAE4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(to32i(dword_4DBAE8), (int32_t)0);
	if (jz())
		goto loc_48B8CC;
	edx = to32i(dword_564384); //mov
	ecx = to32i(dword_564388); //mov
	add(edx, ecx);
	ebx = to32i(dword_564380); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	esi = to32i(dword_4DBAE8); //mov
	shl(edx, (int32_t)6);
	add(esi, edx);
	cmp(ecx, ebx);
	if (jnz())
		goto loc_48B8EC;
	edx = to32i(dword_564384); //mov
	inc(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_564384) = edx; //mov
loc_48B791:
	edx = to32i(ebp-4); //mov
	test(edx, edx);
	if (jz())
		goto loc_48B903;
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
	cmp(ecx, (int32_t)0x35);
	if (jnb())
		goto loc_48B8F9;
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
loc_48B7BD:
	cmp(to32i(ebp-0x10), (int32_t)0);
	if (jz())
		goto loc_48B90A;
	xor_(eax, eax);
	edx = 0x35; //mov
	al = cl; //mov
	sub(edx, eax);
	edi = to32i(ebp-0xC); //mov
	eax = edx; //mov
	cmp(edx, edi);
	if (jle())
		goto loc_48B7DD;
	eax = edi; //mov
loc_48B7DD:
	to8i(esi+8) = al; //mov
loc_48B7E0:
	eax = to32i(ebp+0x10); //mov
	test(eax, eax);
	if (jz())
		goto loc_48B7EC;
	eax = 8; //mov
loc_48B7EC:
	to8i(esi+0xA) = al; //mov
	eax = to32i(dword_5637F4); //mov
	to32i(esi) = eax; //mov
	al = to8i(ebp+0x14); //mov
	edx = to32i(ebp-0x10); //mov
	to8i(esi+9) = al; //mov
	eax = (int32_t)(intptr_t)(esi+0xB); //lea
	test(edx, edx);
	if (jz())
		goto loc_48B830;
	cmp(to8i(esi+8), (int8_t)0);
	if (jz())
		goto loc_48B830;
	dh = to8i(esi+0xA); //mov
	xor_(bl, bl);
	or_(dh, (int8_t)4);
	bh = to8i(esi+8); //mov
	to8i(esi+0xA) = dh; //mov
	edx = to32i(ebp-0x10); //mov
	test(bh, bh);
	if (jbe())
		goto loc_48B830;
loc_48B821:
	bh = to8i(edx); //mov
	inc(edx);
	to8i(eax) = bh; //mov
	inc(bl);
	ch = to8i(esi+8); //mov
	inc(eax);
	cmp(bl, ch);
	if (jb())
		goto loc_48B821;
loc_48B830:
	cmp(to32i(ebp-4), (int32_t)0);
	if (jz())
		goto loc_48B85B;
	test(cl, cl);
	if (jz())
		goto loc_48B85B;
	dl = to8i(esi+0xA); //mov
	or_(dl, (int8_t)1);
	xor_(bl, bl);
	to8i(esi+0xA) = dl; //mov
	edx = to32i(ebp-4); //mov
	test(cl, cl);
	if (jbe())
		goto loc_48B858;
loc_48B84C:
	bh = to8i(edx); //mov
	inc(edx);
	to8i(eax) = bh; //mov
	inc(bl);
	inc(eax);
	cmp(bl, cl);
	if (jb())
		goto loc_48B84C;
loc_48B858:
	to8i(eax) = 0; //mov
loc_48B85B:
	edi = to32i(ebp-8); //mov
	test(edi, edi);
	if (jz())
		goto loc_48B913;
	dh = to8i(esi+0xA); //mov
	eax = to32i(edi); //mov
	or_(dh, (int8_t)2);
	to32i(esi+4) = eax; //mov
	to8i(esi+0xA) = dh; //mov
loc_48B874:
	cmp(to32i(dword_4DBAEC), (int32_t)0);
	if (jz())
		goto loc_48B8CC;
	edx = to32i(ebp-0xC); //mov
	ecx = to32i(ebp-4); //mov
	push32(edx);
	test(ecx, ecx);
	if (jz())
		goto loc_48B91B;
	eax = ecx; //mov
loc_48B88E:
	ebx = to32i(ebp-8); //mov
	push32(eax);
	test(ebx, ebx);
	if (jz())
		goto loc_48B925;
	eax = to32i(ebx); //mov
loc_48B89C:
	edi = to32i(ebp+0x10); //mov
	push32(eax);
	test(edi, edi);
	if (jz())
		goto loc_48B92C;
	eax = (int32_t)(intptr_t)aAttn; //mov
loc_48B8AD:
	push32(eax);
	xor_(eax, eax);
	al = to8i(ebp+0x14); //mov
	push32(eax);
	xor_(eax, eax);
	al = to8i(byte_4DBAF0); //mov
	push32(eax);
	eax = to32i(esi); //mov
	push32(eax);
	push32(a08xC02x4_4s08x);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)0x20);
loc_48B8CC:
	eax = to32i(dword_4DBAE4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(to32i(dword_4DBAE8), (int32_t)0);
	if (jz())
		goto loc_48B936;
	eax = 1; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_48B8EC:
	eax = (int32_t)(intptr_t)(ecx+1); //lea
	to32i(dword_564388) = eax; //mov
	goto loc_48B791;
loc_48B8F9:
	ecx = 0x35; //mov
	goto loc_48B7BD;
loc_48B903:
	xor_(cl, cl);
	goto loc_48B7BD;
loc_48B90A:
	to8i(esi+8) = 0; //mov
	goto loc_48B7E0;
loc_48B913:
	to32i(esi+4) = edi; //mov
	goto loc_48B874;
loc_48B91B:
	eax = (int32_t)(intptr_t)dword_4CFEB8; //mov
	goto loc_48B88E;
loc_48B925:
	xor_(eax, eax);
	goto loc_48B89C;
loc_48B92C:
	eax = (int32_t)(intptr_t)asc_4CFE60; //mov
	goto loc_48B8AD;
loc_48B936:
	xor_(eax, eax);
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_strncmp_()
{
	push32(ecx);
loc_48B941:
	test(ebx, ebx);
	if (jnz())
		goto loc_48B949;
loc_48B945:
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_48B949:
	cl = to8i(eax); //mov
	ch = to8i(edx); //mov
	cmp(cl, ch);
	if (jz())
		goto loc_48B95F;
	xor_(ebx, ebx);
	xor_(eax, eax);
	bl = cl; //mov
	al = ch; //mov
	sub(ebx, eax);
	eax = ebx; //mov
	pop32(ecx);
	return;
loc_48B95F:
	cmp(to8i(eax), (int8_t)0);
	if (jz())
		goto loc_48B945;
	inc(eax);
	inc(edx);
	dec(ebx);
	goto loc_48B941;
}
Fn(void) Game::_nullsub_47()
{
	return;
}
Fn(void) Game::_sub_48B974()
{
	eax = to32i(eax); //mov
	test(eax, eax);
	if (jz())
		goto locret_48B986;
loc_48B97A:
	dec(edx);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto locret_48B986;
	eax = to32i(eax); //mov
	test(eax, eax);
	if (jnz())
		goto loc_48B97A;
locret_48B986:
	return;
}
Fn(void) Game::_sub_48B988()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jz())
		goto loc_48B9D6;
	esi = to32i(eax); //mov
	test(esi, esi);
	if (jbe())
		goto loc_48B9D6;
	edi = to32i(eax+8); //mov
	cmp(edx, edi);
	if (jz())
		goto loc_48B9DE;
	ebp = to32i(edi); //mov
	eax = edi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_48B9B5;
loc_48B9AA:
	cmp(edx, to32i(eax));
	if (jz())
		goto loc_48B9B5;
	eax = to32i(eax); //mov
	cmp(to32i(eax), (int32_t)0);
	if (jnz())
		goto loc_48B9AA;
loc_48B9B5:
	esi = to32i(eax); //mov
	test(esi, esi);
	if (jz())
		goto loc_48B9D2;
	cmp(edx, esi);
	if (jnz())
		goto loc_48B9D2;
	ebx = 1; //mov
	sub(to32i(ecx), ebx);
	esi = to32i(esi); //mov
	to32i(eax) = esi; //mov
	cmp(edx, to32i(ecx+0xC));
	if (jnz())
		goto loc_48B9D2;
	to32i(ecx+0xC) = eax; //mov
loc_48B9D2:
	test(ebx, ebx);
	if (jnz())
		goto loc_48BA1A;
loc_48B9D6:
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48B9DE:
	ebx = 1; //mov
	eax = esi; //mov
	sub(eax, ebx);
	esi = to32i(ecx+0xC); //mov
	to32i(ecx) = eax; //mov
	cmp(edi, esi);
	if (jnz())
		goto loc_48BA09;
	to32i(ecx+8) = 0; //mov
	eax = to32i(ecx+8); //mov
	to32i(ecx+0xC) = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48BA1A;
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BA09:
	eax = to32i(edi); //mov
	to32i(ecx+8) = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48BA1A;
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BA1A:
	to32i(edx) = 0; //mov
	or_(to8i(ecx+4), (int8_t)1);
	eax = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BA2C()
{
	push32(ecx);
	ecx = eax; //mov
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(ecx) = 0; //mov
	to32i(ecx+4) = 0; //mov
	to32i(ecx+8) = 0; //mov
	to32i(ecx+0xC) = 0; //mov
	to32i(ecx+0x18) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_48BA5E;
	to32i(ecx+0x10) = edx; //mov
	to32i(ecx+0x14) = ebx; //mov
	pop32(ecx);
	return;
loc_48BA5E:
	edx = (int32_t)(intptr_t)nullsub_47; //mov
	to32i(ecx+0x10) = edx; //mov
	to32i(ecx+0x14) = ebx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_48BA6C()
{
	push32(edx);
	edx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(edx+0x18) = 0; //mov
	pop32(edx);
}
Fn(void) Game::_sub_48BA80()
{
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(edx, edx);
	if (jz())
		goto loc_48BAAA;
	push32(ebx);
	eax = to32i(ecx+8); //mov
	to32i(edx) = eax; //mov
	ebx = to32i(ecx); //mov
	to32i(ecx+8) = edx; //mov
	inc(ebx);
	to32i(ecx) = ebx; //mov
	cmp(to32i(edx), (int32_t)0);
	if (jnz())
		goto loc_48BAA5;
	to32i(ecx+0xC) = edx; //mov
loc_48BAA5:
	or_(to8i(ecx+4), (int8_t)1);
	pop32(ebx);
loc_48BAAA:
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_48BAB4()
{
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(edx, edx);
	if (jz())
		goto loc_48BAE1;
	push32(ebx);
	eax = to32i(ecx+0xC); //mov
	to32i(edx) = 0; //mov
	ebx = to32i(ecx); //mov
	to32i(ecx+0xC) = edx; //mov
	inc(ebx);
	to32i(ecx) = ebx; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48BAEB;
	to32i(ecx+8) = edx; //mov
	or_(to8i(ecx+4), (int8_t)1);
	pop32(ebx);
loc_48BAE1:
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
	return;
loc_48BAEB:
	to32i(eax) = edx; //mov
	or_(to8i(ecx+4), (int8_t)1);
	pop32(ebx);
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_48BAFC()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(edx+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BB29;
	cmp(ecx, to32i(edx+0xC));
	if (jnz())
		goto loc_48BB3A;
	to32i(edx+0xC) = 0; //mov
	eax = to32i(edx+0xC); //mov
loc_48BB1E:
	to32i(edx+8) = eax; //mov
	dec(to32i(edx));
	to32i(ecx) = 0; //mov
loc_48BB29:
	or_(to8i(edx+4), (int8_t)1);
	eax = to32i(edx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_48BB3A:
	eax = to32i(ecx); //mov
	goto loc_48BB1E;
}
Fn(void) Game::_sub_48BB40()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(edx+0xC); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BB82;
	push32(esi);
	push32(ebx);
	ebx = to32i(edx); //mov
	dec(ebx);
	esi = to32i(edx+8); //mov
	to32i(edx) = ebx; //mov
	cmp(ecx, esi);
	if (jz())
		goto loc_48BB93;
	push32(edi);
	to32i(edx+0xC) = esi; //mov
loc_48BB65:
	eax = to32i(edx+0xC); //mov
	edi = to32i(eax); //mov
	cmp(ecx, edi);
	if (jz())
		goto loc_48BB73;
	to32i(edx+0xC) = edi; //mov
	goto loc_48BB65;
loc_48BB73:
	to32i(eax) = 0; //mov
	pop32(edi);
loc_48BB7A:
	to32i(ecx) = 0; //mov
	pop32(ebx);
	pop32(esi);
loc_48BB82:
	or_(to8i(edx+4), (int8_t)1);
	eax = to32i(edx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_48BB93:
	to32i(edx+8) = 0; //mov
	eax = to32i(edx+8); //mov
	to32i(edx+0xC) = eax; //mov
	goto loc_48BB7A;
}
Fn(void) Game::_sub_48BBA4()
{
	push32(ebx);
	push32(ebp);
	ebx = eax; //mov
	ebp = edx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_48BBC1;
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ebp);
	pop32(ebx);
	return;
loc_48BBC1:
	push32(edi);
	push32(esi);
	push32(ecx);
	eax = ebp; //mov
	edx = to32i(ebx+0x14); //mov
	xor_(esi, esi);
	call(to32i(ebx+0x10));
	edx = to32i(ebx); //mov
	edi = eax; //mov
	inc(edx);
	ecx = to32i(ebx+8); //mov
	to32i(ebx) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BBF0;
loc_48BBDC:
	eax = ecx; //mov
	edx = to32i(ebx+0x14); //mov
	call(to32i(ebx+0x10));
	cmp(eax, edi);
	if (jnb())
		goto loc_48BBF0;
	esi = ecx; //mov
	ecx = to32i(ecx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48BBDC;
loc_48BBF0:
	to32i(ebp+0) = ecx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_48BC13;
	to32i(ebx+8) = ebp; //mov
loc_48BBFA:
	test(ecx, ecx);
	if (jnz())
		goto loc_48BC01;
	to32i(ebx+0xC) = ebp; //mov
loc_48BC01:
	or_(to8i(ebx+4), (int8_t)1);
	pop32(ecx);
	pop32(esi);
	pop32(edi);
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(ebp);
	pop32(ebx);
	return;
loc_48BC13:
	to32i(esi) = ebp; //mov
	goto loc_48BBFA;
}
Fn(void) Game::_sub_48BC18()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(edx, edx);
	if (jnz())
		goto loc_48BC35;
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BC35:
	eax = ecx; //mov
	esp -= 4; _sub_48B988(); esp += 4; //call
	ebx = eax; //mov
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BC4C()
{
	eax = to32i(eax); //mov
}
Fn(void) Game::_sub_48BC50()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	ebp = edx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	xor_(ebx, ebx);
	test(edx, edx);
	if (jz())
		goto loc_48BC95;
	esi = to32i(edi+0x10); //mov
	ecx = to32i(edi+8); //mov
	test(esi, esi);
	if (jnz())
		goto loc_48BCAD;
	xor_(eax, eax);
loc_48BC76:
	to32i(esp) = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BC91;
loc_48BC7D:
	cmp(ecx, ebp);
	if (jz())
		goto loc_48BC91;
	test(esi, esi);
	if (jz())
		goto loc_48BCB6;
	eax = ecx; //mov
	edx = to32i(edi+0x14); //mov
	call(esi);
	cmp(eax, to32i(esp));
	if (jbe())
		goto loc_48BCB6;
loc_48BC91:
	cmp(ecx, ebp);
	if (jz())
		goto loc_48BC9A;
loc_48BC95:
	ebx = 0xFFFFFFFF; //mov
loc_48BC9A:
	eax = to32i(edi+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BCAD:
	eax = ebp; //mov
	edx = to32i(edi+0x14); //mov
	call(esi);
	goto loc_48BC76;
loc_48BCB6:
	ecx = to32i(ecx); //mov
	inc(ebx);
	test(ecx, ecx);
	if (jnz())
		goto loc_48BC7D;
	goto loc_48BC91;
}
Fn(void) Game::_sub_48BCC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ebx = to32i(ecx+8); //mov
	edx = 0xFFFFFFFF; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48BCE7;
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BCE7:
	eax = ebx; //mov
	edx = to32i(ecx+0x14); //mov
	call(to32i(ecx+0x10));
	edx = eax; //mov
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BD74()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ebx = to32i(ecx+8); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48BDA6;
	test(edx, edx);
	if (ja())
		goto loc_48BD9A;
	edx = ebx; //mov
loc_48BD8D:
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BD9A:
	dec(edx);
	eax = ebx; //mov
	esp -= 4; _sub_48B974(); esp += 4; //call
	edx = eax; //mov
	goto loc_48BD8D;
loc_48BDA6:
	xor_(edx, edx);
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BDB8()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(ebx+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BDE0;
loc_48BDCE:
	eax = ecx; //mov
	edx = to32i(ebx+0x14); //mov
	call(to32i(ebx+0x10));
	cmp(eax, esi);
	if (jnb())
		goto loc_48BDE0;
	ecx = to32i(ecx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48BDCE;
loc_48BDE0:
	test(ecx, ecx);
	if (jnz())
		goto loc_48BDF2;
loc_48BDE4:
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BDF2:
	eax = ecx; //mov
	edx = to32i(ebx+0x14); //mov
	call(to32i(ebx+0x10));
	cmp(eax, esi);
	if (jz())
		goto loc_48BDE4;
	xor_(ecx, ecx);
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BE10()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	edi = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(edi+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BE3A;
loc_48BE26:
	test(esi, esi);
	if (jz())
		goto loc_48BE3A;
	edx = ebx; //mov
	eax = ecx; //mov
	call(esi);
	test(eax, eax);
	if (jnz())
		goto loc_48BE3A;
	ecx = to32i(ecx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48BE26;
loc_48BE3A:
	test(ecx, ecx);
	if (jnz())
		goto loc_48BE4C;
loc_48BE3E:
	eax = to32i(edi+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48BE4C:
	edx = ecx; //mov
	eax = edi; //mov
	esp -= 4; _sub_48B988(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48BE3E;
	xor_(ecx, ecx);
	eax = to32i(edi+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48BF0C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	esi = edx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(ebx+8); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48BF34;
loc_48BF22:
	eax = ecx; //mov
	edx = to32i(ebx+0x14); //mov
	call(to32i(ebx+0x10));
	cmp(eax, esi);
	if (jnb())
		goto loc_48BF34;
	ecx = to32i(ecx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48BF22;
loc_48BF34:
	test(ecx, ecx);
	if (jnz())
		goto loc_48BF48;
loc_48BF38:
	xor_(ecx, ecx);
loc_48BF3A:
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48BF48:
	eax = ecx; //mov
	edx = to32i(ebx+0x14); //mov
	call(to32i(ebx+0x10));
	cmp(eax, esi);
	if (jnz())
		goto loc_48BF38;
	edx = ecx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_48B988(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48BF3A;
	xor_(ecx, ecx);
	eax = to32i(ebx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ecx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48BF74()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ebp = edx; //mov
	edi = ebx; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(esi+4); //mov
	and_(eax, (int32_t)1);
	to32i(esp) = eax; //mov
	and_(to8i(esi+4), (int8_t)0xFE);
	eax = to32i(esi+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	ecx = to32i(esi+8); //mov
	xor_(ebx, ebx);
	test(ecx, ecx);
	if (jz())
		goto loc_48BFC9;
loc_48BFA7:
	dl = to8i(esi+4); //mov
	test(dl, (int8_t)1);
	if (jnz())
		goto loc_48BFC9;
	test(dl, (int8_t)1);
	if (jnz())
		goto loc_48BFC3;
	edx = edi; //mov
	eax = ecx; //mov
	call(ebp);
	test(eax, eax);
	if (jnz())
		goto loc_48BFC2;
	or_(to8i(esi+4), (int8_t)1);
loc_48BFC2:
	inc(ebx);
loc_48BFC3:
	ecx = to32i(ecx); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48BFA7;
loc_48BFC9:
	eax = to32i(esi+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(to8i(esi+4), (int8_t)1);
	if (jz())
		goto loc_48BFF4;
loc_48BFD7:
	eax = to32i(esp); //mov
	edx = to32i(esi+4); //mov
	or_(edx, eax);
	eax = to32i(esi+0x18); //mov
	to32i(esi+4) = edx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48BFF4:
	ebx = 0xFFFFFFFF; //mov
	goto loc_48BFD7;
}
Fn(void) Game::_sub_48BFFC()
{
	push32(ecx);
	ecx = eax; //mov
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_48BF74(); esp += 4; //call
	edx = eax; //mov
	eax = to32i(ecx+0x18); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_48C054()
{
	push32(ecx);
	ecx = ebx; //mov
	eax = (int32_t)(intptr_t)(eax+ecx-1); //lea
	sub(ecx, (int32_t)1);
	if (jl())
		goto loc_48C06D;
loc_48C060:
	to8i(eax) = dl; //mov
	shr(edx, (int32_t)8);
	sub(ecx, (int32_t)1);
	eax = (int32_t)(intptr_t)(eax-1); //lea
	if (jge())
		goto loc_48C060;
loc_48C06D:
	pop32(ecx);
}
Fn(void) Game::_sub_48C06F()
{
	push32(ecx);
	ecx = ebx; //mov
	sub(ecx, (int32_t)1);
	if (jl())
		goto loc_48C084;
loc_48C077:
	to8i(eax) = dl; //mov
	shr(edx, (int32_t)8);
	sub(ecx, (int32_t)1);
	eax = (int32_t)(intptr_t)(eax+1); //lea
	if (jge())
		goto loc_48C077;
loc_48C084:
	pop32(ecx);
}
Fn(void) Game::_sub_48C270()
{
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xF); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xE); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xD); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xC); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xB); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0xA); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+9); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+8); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cx = to16i(eax+6); //mov
	push32(ecx);
	xor_(ecx, ecx);
	cx = to16i(eax+4); //mov
	push32(ecx);
	ecx = to32i(eax); //mov
	push32(ecx);
	push32(aEagame_08x_04x);
	push32(edx);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x34);
	pop32(ecx);
}
Fn(void) Game::_sub_48C2D4()
{
	eax = to32i(dword_5637F0); //mov
	sub(eax, to32i(dword_4DBAF8));
	test(eax, eax);
	if (jl())
		goto loc_48C2E9;
	eax = 1; //mov
	return;
loc_48C2E9:
	xor_(eax, eax);
}
Fn(void) Game::_sub_48C2EC()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(edx, edx);
	test(eax, eax);
	if (jz())
		goto loc_48C304;
loc_48C2F6:
	ecx = eax; //mov
	neg(ecx);
	ecx = ~ecx;
	and_(eax, ecx);
	inc(edx);
	test(eax, eax);
	if (jnz())
		goto loc_48C2F6;
loc_48C304:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48C30C()
{
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0xB4);
	ecx = eax; //mov
	to32i(esp+0xAC) = edx; //mov
	edx = ebx; //mov
	ebp = to32i(eax+4); //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48C330;
	cmp(to32i(eax+8), (int32_t)0);
	if (jnz())
		goto loc_48C44E;
loc_48C330:
	push32(edi);
	push32(esi);
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x50); //lea
	edx = to32i(ecx+0x74); //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	edx = to32i(ecx+0x78); //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x58); //lea
	edx = to32i(ecx+0x7C); //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	edx = to32i(ecx+0x80); //mov
	esi = 0xEA646563; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x60); //lea
	edx = to32i(ecx+0x84); //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x74); //lea
	edx = to32i(ecx+0x50); //mov
	to32i(esp+0xB8) = esi; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 0x20; //mov
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	edx = (int32_t)(intptr_t)(ecx+0x54); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _strncpy_(); esp += 4; //call
	edx = ebp; //mov
	xor_(eax, eax);
loc_48C3D9:
	inc(eax);
	bl = to8i(edx+0x94); //mov
	inc(edx);
	to8i(esp+eax+0x27) = bl; //mov
	cmp(eax, (int32_t)8);
	if (jl())
		goto loc_48C3D9;
	ebx = 4; //mov
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = to32i(ebp+0x8C); //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 2; //mov
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	dx = to16i(ebp+0x90); //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 2; //mov
	xor_(edx, edx);
	eax = (int32_t)(intptr_t)(esp+0x26); //lea
	dx = to16i(ebp+0x92); //mov
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	push32(0xAC);
	ebx = to32i(esp+0xBC); //mov
	esi = to32i(ebp+8); //mov
	edx = to32i(esp+0xB8); //mov
	eax = to32i(ebp+0xC); //mov
	call(to32i(esi+0x50));
	pop32(esi);
	pop32(edi);
loc_48C44E:
	add(esp, (int32_t)0xB4);
	pop32(ebp);
	pop32(ecx);
}
Fn(void) Game::_sub_48C458()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edi = eax; //mov
	to32i(esp+0xC) = edx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = ecx; //mov
	to32i(edx+4) = 0; //mov
	to32i(edx+0x10) = eax; //mov
	eax = to32i(dword_4DBAF4); //mov
	esi = 1; //mov
	to32i(edx) = eax; //mov
	edx = eax; //mov
	add(eax, esi);
	ebx = 4; //mov
	to32i(dword_4DBAF4) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(edi+8); //mov
	cmp(to32i(eax+0x44), (int32_t)0);
	if (jnz())
		goto loc_48C4E0;
loc_48C4A0:
	eax = to32i(esp+0xC); //mov
	to32i(edi+0x18) = eax; //mov
	eax = to32i(dword_5637F0); //mov
	ecx = to32i(esp+0x24); //mov
	add(eax, ecx);
	to32i(dword_4DBAF8) = eax; //mov
	eax = to32i(esp+0xC); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jnz())
		goto loc_48C4D0;
	eax = (int32_t)(intptr_t)(edi+0x1C); //lea
	to32i(esp) = eax; //mov
loc_48C4C7:
	esp -= 4; _sub_48C2D4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C4ED;
loc_48C4D0:
	to32i(edi+0x18) = 0; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_48C4E0:
	ebp = eax; //mov
	edx = (int32_t)(intptr_t)(edi+0x1C); //lea
	eax = to32i(edi+0xC); //mov
	call(to32i(ebp+0x44));
	goto loc_48C4A0;
loc_48C4ED:
	eax = to32i(esp+0x20); //mov
	ecx = to32i(esp+8); //mov
	ebx = to32i(esp+4); //mov
	ebp = to32i(edi+8); //mov
	push32(eax);
	edx = to32i(esp+4); //mov
	eax = to32i(edi+0xC); //mov
	call(to32i(ebp+0x50));
	test(eax, eax);
	if (jz())
		goto loc_48C511;
	esi = to32i(dword_4DBAD4); //mov
loc_48C511:
	eax = esi; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48C4D0;
	eax = to32i(esp+0xC); //mov
	cmp(to32i(eax+4), (int32_t)0);
	if (jz())
		goto loc_48C4C7;
	to32i(edi+0x18) = 0; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_48C538()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	ebp = edx; //mov
	xor_(edx, edx);
	esi = (int32_t)(intptr_t)(eax+0x88); //lea
loc_48C54C:
	to32i(esp) = edx; //mov
	eax = to32i(edi+0x84); //mov
	ecx = to32i(esp); //mov
	dec(eax);
	cmp(eax, ecx);
	if (jbe())
		goto loc_48C5A2;
	cl = to8i(esp); //mov
	eax = 1; //mov
	ebx = to32i(edi+0x50); //mov
	shl(eax, cl);
	test(eax, ebx);
	if (jnz())
		goto loc_48C577;
loc_48C56E:
	edx = to32i(esp); //mov
	inc(edx);
	add(esi, (int32_t)0x64);
	goto loc_48C54C;
loc_48C577:
	imul32(ecx, to32i(esp), 0x64);
	ebx = esi; //mov
	edx = ebp; //mov
	eax = to32i(edi+4); //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C56E;
	eax = to32i(dword_4DBACC); //mov
	to32i(ecx+edi+0xE4) = eax; //mov
	eax = esi; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48C5A2:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48C5B0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = eax; //mov
	esi = edx; //mov
	xor_(eax, eax);
loc_48C5B9:
	edx = to32i(ebx+0x84); //mov
	dec(edx);
	cmp(eax, edx);
	if (jnb())
		goto loc_48C61A;
	edx = 1; //mov
	cl = al; //mov
	shl(edx, cl);
	ecx = to32i(ebx+0x50); //mov
	test(edx, ecx);
	if (jz())
		goto loc_48C5D7;
	inc(eax);
	goto loc_48C5B9;
loc_48C5D7:
	push32(edi);
	edi = ecx; //mov
	or_(edi, edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	shl(edx, (int32_t)3);
	add(edx, eax);
	shl(edx, (int32_t)2);
	to32i(ebx+0x50) = edi; //mov
	add(ebx, edx);
	ecx = 0x17; //mov
	edi = (int32_t)(intptr_t)(ebx+0x88); //lea
	edx = to32i(dword_4DBACC); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(ebx+0xE4) = edx; //mov
	to32i(ebx+0xE8) = eax; //mov
	edx = eax; //mov
	pop32(edi);
	eax = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48C61A:
	xor_(edx, edx);
	eax = edx; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48C624()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC8);
	esi = eax; //mov
	add(eax, (int32_t)0x30);
	edi = edx; //mov
	to32i(esp+0xC4) = eax; //mov
loc_48C63D:
	edx = 0xEA646174; //mov
	ebx = 0x14; //mov
	eax = to32i(esp+0xC4); //mov
	to32i(esp+0xC0) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0xAC); //lea
	ecx = esp; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	push32(0xAC);
	ebx = (int32_t)(intptr_t)(esp+0xC4); //lea
	ebp = to32i(esi+8); //mov
	edx = (int32_t)(intptr_t)(esp+0xB0); //lea
	eax = to32i(esi+0xC); //mov
	call(to32i(ebp+0x54));
	cmp(to32i(esp+0xC0), (int32_t)0);
	if (jnz())
		goto loc_48C69F;
loc_48C689:
	cmp(to32i(esp+0xC0), (int32_t)0);
	if (jnz())
		goto loc_48C63D;
	add(esp, (int32_t)0xC8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48C69F:
	ecx = esp; //mov
	ebx = to32i(esp+0xC0); //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0xB0); //lea
	eax = edi; //mov
	esp -= 4; _sub_48C6BC(); esp += 4; //call
	goto loc_48C689;
}
Fn(void) Game::_sub_48C6BC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xCC);
	esi = eax; //mov
	to32i(esp+0xC4) = edx; //mov
	edi = ebx; //mov
	to32i(esp+0xC8) = ecx; //mov
	ebp = to32i(eax+0x10); //mov
	cmp(ebx, (int32_t)0xEA6E6F21);
	if (jnb())
		goto loc_48C719;
	cmp(ebx, (int32_t)0xEA627965);
	if (jnb())
		goto loc_48C8CC;
	cmp(ebx, (int32_t)0xEA616464);
	if (jb())
		goto loc_48C70D;
	if (ja())
		goto loc_48C9E4;
	eax = to32i(ebp+0x14); //mov
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(eax+8), (int32_t)0);
	if (jz())
		goto loc_48CCD7;
loc_48C70D:
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C719:
	if (jbe())
		goto loc_48C70D;
	eax = (int32_t)(intptr_t)(ebp+0x1C); //lea
	to32i(esp+0xBC) = eax; //mov
	cmp(ebx, (int32_t)0xEA706C79);
	if (jnb())
		goto loc_48C7A8;
	cmp(ebx, (int32_t)0xEA6F706E);
	if (jnb())
		goto loc_48C860;
	cmp(ebx, (int32_t)0xEA6F6C61);
	if (jnz())
		goto loc_48C70D;
	eax = to32i(ebp+0x14); //mov
	test(eax, eax);
	if (jnz())
		goto loc_48CF72;
	cmp(to32i(ebp+0xA4), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(ebp+0xA0), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	ebx = to32i(esp+0xBC); //mov
	edx = to32i(esp+0xC4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	push32(0);
	edx = to32i(esp+0xC0); //mov
	eax = to32i(dword_4DBACC); //mov
	ebx = edi; //mov
	esi = to32i(ebp+8); //mov
	to32i(ebp+0xA4) = eax; //mov
	xor_(ecx, ecx);
	eax = to32i(ebp+0xC); //mov
	call(to32i(esi+0x50));
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C7A8:
	if (jbe())
		goto loc_48C9F0;
	cmp(ebx, (int32_t)0xEA727370);
	if (jnb())
		goto loc_48C807;
	cmp(ebx, (int32_t)0xEA726571);
	if (jnz())
		goto loc_48C70D;
	test(ebp, ebp);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(ebp+0x14), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	ecx = 4; //mov
	eax = to32i(esp+0xC8); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ecx = to32i(ebp+0x14); //mov
	ebx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C30C(); esp += 4; //call
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C807:
	if (jbe())
		goto loc_48CED7;
	cmp(ebx, (int32_t)0xEA737276);
	if (jnz())
		goto loc_48C70D;
	test(ebp, ebp);
	if (jz())
		goto loc_48C70D;
	edx = to32i(ebp+0x14); //mov
	test(edx, edx);
	if (jz())
		goto loc_48C70D;
	eax = (int32_t)(intptr_t)(edx+0xC); //lea
	ebx = 0x20; //mov
	edx = ecx; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48C70D;
	edx = to32i(esp+0xC4); //mov
	eax = to32i(ebp+0x14); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_48C30C(); esp += 4; //call
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C860:
	if (ja())
		goto loc_48C89D;
	cmp(to32i(ebp+0x10), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	eax = ebp; //mov
	call(to32i(ebp+0x10));
	test(eax, eax);
	if (jnz())
		goto loc_48C70D;
	ebx = 0xEA6E6F21; //mov
	edx = to32i(esp+0xC4); //mov
	push32(eax);
	esi = to32i(ebp+8); //mov
	xor_(ecx, ecx);
	eax = to32i(ebp+0xC); //mov
	call(to32i(esi+0x50));
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C89D:
	cmp(ebx, (int32_t)0xEA6F7574);
	if (jnz())
		goto loc_48C70D;
loc_48C8A9:
	eax = to32i(ebp+0x14); //mov
	test(eax, eax);
	if (jnz())
		goto loc_48CF96;
	to32i(ebp+0xA0) = eax; //mov
	to32i(ebp+0xA4) = eax; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C8CC:
	if (jbe())
		goto loc_48C8A9;
	cmp(ebx, (int32_t)0xEA646563);
	if (jnb())
		goto loc_48C923;
	cmp(ebx, (int32_t)0xEA646174);
	if (jnz())
		goto loc_48C70D;
	esi = to32i(ebp+0x14); //mov
	test(esi, esi);
	if (jnz())
		goto loc_48CF83;
	ebx = (int32_t)(intptr_t)(ebp+0x1C); //lea
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(ebp+0xA0), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	eax = to32i(dword_4DBAD0); //mov
	to32i(ebp+0xA0) = eax; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C923:
	if (jbe())
		goto loc_48CA6F;
	cmp(ebx, (int32_t)0xEA676574);
	if (jnz())
		goto loc_48C70D;
	cmp(to32i(ebp+0x14), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	esi = ecx; //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)(esi+4); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	eax = to32i(ecx); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ecx+0x18); //mov
	ebx = 0xEA706C79; //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x18);
	edx = 0x78; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_48CC46;
	edi = 1; //mov
	cl = al; //mov
	shl(edi, cl);
	esi = to32i(ebp+0x14); //mov
	ecx = edi; //mov
	test(to32i(esi+0x50), ecx);
	if (jz())
		goto loc_48CC57;
	ecx = esi; //mov
	esi = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, esi);
	shl(eax, (int32_t)3);
	add(eax, esi);
	shl(eax, (int32_t)2);
	add(eax, ecx);
	edi = (int32_t)(intptr_t)(esp+0x1C); //lea
	ecx = 0x17; //mov
	esi = (int32_t)(intptr_t)(eax+0x88); //lea
loc_48C9C3:
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_48C9C5:
	ecx = esp; //mov
	push32(edx);
	esi = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	edx = to32i(esp+0xC8); //mov
	call(to32i(esi+0x50));
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48C9E4:
	cmp(ebx, (int32_t)0xEA626164);
	if (jnz())
		goto loc_48C70D;
loc_48C9F0:
	ebx = (int32_t)(intptr_t)(ebp+0x1C); //lea
	edx = to32i(esp+0xC4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(ebp+0xA0), (int32_t)0);
	if (jz())
		goto loc_48CA1D;
	eax = to32i(dword_4DBAD0); //mov
	to32i(ebp+0xA0) = eax; //mov
loc_48CA1D:
	ecx = 4; //mov
	eax = to32i(esp+0xC8); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(to32i(esi+0x18), (int32_t)0);
	if (jz())
		goto loc_48C70D;
	cmp(eax, to32i(esi));
	if (jnz())
		goto loc_48C70D;
	cmp(edi, (int32_t)0xEA706C79);
	if (jz())
		goto loc_48CC64;
loc_48CA56:
	to32i(esi+4) = 1; //mov
	to32i(esi) = 0; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CA6F:
	ecx = 4; //mov
	eax = to32i(esp+0xC8); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	edx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48CC38;
	cmp(to32i(esi), (int32_t)0);
	if (jnz())
		goto loc_48CC38;
	cmp(to32i(esi+0x14), (int32_t)0);
	if (jz())
		goto loc_48CC38;
	eax = 1; //mov
loc_48CAAC:
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48CAEE;
	cmp(to32i(esi+0x14), (int32_t)0);
	if (jnz())
		goto loc_48CC3F;
	edi = to32i(esi); //mov
	test(edi, edi);
	if (jz())
		goto loc_48CC3F;
	cmp(edx, edi);
	if (jnz())
		goto loc_48CC3F;
	ebx = (int32_t)(intptr_t)(ebp+0x1C); //lea
	edx = to32i(esp+0xC4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48CC3F;
	eax = 1; //mov
loc_48CAEC:
	ebx = eax; //mov
loc_48CAEE:
	test(ebx, ebx);
	if (jz())
		goto loc_48C70D;
	cmp(to32i(ebp+0xA0), (int32_t)0);
	if (jz())
		goto loc_48CB10;
	cmp(to32i(esi+0x14), (int32_t)0);
	if (jnz())
		goto loc_48CB10;
	eax = to32i(dword_4DBAD0); //mov
	to32i(ebp+0xA0) = eax; //mov
loc_48CB10:
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x48);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x3C) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x4C);
	edx = to32i(esp+0xC8); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x40) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x50);
	ebx = 0x20; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x44) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x54);
	edi = (int32_t)(intptr_t)(esi+0x1C); //lea
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x48) = eax; //mov
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x58);
	add(edx, (int32_t)0x28);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+0x4C) = eax; //mov
	eax = edi; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x6C);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+4) = 1; //mov
	ebx = to32i(esi+0x14); //mov
	to32i(esi+8) = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48C70D;
	eax = to32i(esp+0xC8); //mov
	eax = to32i(eax+0x6C); //mov
	ecx = to32i(esp+0xC4); //mov
	esp -= 4; _sub_48C2EC(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	edx = edi; //mov
	eax = ebp; //mov
	call(to32i(esi+0x14));
	test(eax, eax);
	if (jnz())
		goto loc_48C70D;
	to32i(esi+0x14) = eax; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CC38:
	xor_(eax, eax);
	goto loc_48CAAC;
loc_48CC3F:
	xor_(eax, eax);
	goto loc_48CAEC;
loc_48CC46:
	ecx = 0x17; //mov
	edi = (int32_t)(intptr_t)(esp+0x1C); //lea
	esi = (int32_t)(intptr_t)(ebp+0x30); //lea
	goto loc_48C9C3;
loc_48CC57:
	ebx = 0xEA626164; //mov
	sub(edx, (int32_t)0x5C);
	goto loc_48C9C5;
loc_48CC64:
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x18);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_48CCD3;
	edx = 1; //mov
loc_48CC8C:
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x18);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	ebx = (int32_t)(intptr_t)(eax+1); //lea
	eax = to32i(esp+0xC8); //mov
	ecx = edx; //mov
	add(eax, (int32_t)0x1C);
	edi = to32i(esi+0x10); //mov
	edx = eax; //mov
	eax = edi; //mov
	call(to32i(esi+0x18));
	test(eax, eax);
	if (jnz())
		goto loc_48CA56;
	to32i(esi+0x18) = eax; //mov
	goto loc_48CA56;
loc_48CCD3:
	xor_(edx, edx);
	goto loc_48CC8C;
loc_48CCD7:
	edx = to32i(esp+0xC4); //mov
	ebx = 0xEA727370; //mov
	esp -= 4; _sub_48C538(); esp += 4; //call
	ecx = eax; //mov
	eax = to32i(esp+0xC8); //mov
	esi = 0x20; //mov
	to32i(esp+0xB4) = ebx; //mov
	eax = to32i(eax); //mov
	to32i(esp+0xB0) = esi; //mov
	to32i(esp) = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48CE95;
	eax = to32i(ebp+0x14); //mov
	edx = to32i(eax+0x84); //mov
	eax = to32i(eax+0x50); //mov
	dec(edx);
	esp -= 4; _sub_48C2EC(); esp += 4; //call
	cmp(eax, edx);
	if (jnb())
		goto loc_48CE7D;
	eax = to32i(ebp+0x14); //mov
	cmp(to8i(eax+0x3C), (int8_t)0);
	if (jnz())
		goto loc_48CDF6;
loc_48CD38:
	eax = to32i(esp+0xC8); //mov
	add(eax, (int32_t)0x28);
	to32i(esp+0xB8) = eax; //mov
	edi = to32i(esp+0xC8); //mov
	edx = to32i(esp+0xB8); //mov
	eax = to32i(ebp+0x14); //mov
	esi = to32i(esp+0xC4); //mov
	esp -= 4; _sub_48C5B0(); esp += 4; //call
	edi = (int32_t)(intptr_t)(edi+0x28); //lea
	to32i(esp+0xC0) = eax; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(esp+0xAC) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	cmp(to32i(eax+0x4C), (int32_t)0);
	if (jnz())
		goto loc_48CE2A;
loc_48CD89:
	ebx = 4; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	ebx = 4; //mov
	edx = to32i(esp+0xAC); //mov
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(esp+0xC8); //mov
	ebx = 0x14; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, (int32_t)4);
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_48CDC9:
	ebx = to32i(esp+0xB0); //mov
	ecx = esp; //mov
	edx = to32i(esp+0xC4); //mov
	esi = to32i(ebp+8); //mov
	push32(ebx);
	eax = to32i(ebp+0xC); //mov
	ebx = to32i(esp+0xB8); //mov
	call(to32i(esi+0x50));
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CDF6:
	ebx = 0x10; //mov
	edx = to32i(esp+0xC8); //mov
	add(eax, (int32_t)0x3C);
	add(edx, (int32_t)0x18);
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48CD38;
	ebx = 4; //mov
	edx = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	goto loc_48CDC9;
loc_48CE2A:
	ebx = to32i(esp+0xC0); //mov
	edx = to32i(esp+0xB8); //mov
	esi = eax; //mov
	xor_(ecx, ecx);
	inc(ebx);
	eax = ebp; //mov
	call(to32i(esi+0x4C));
	test(eax, eax);
	if (jnz())
		goto loc_48CD89;
	cl = to8i(esp+0xC0); //mov
	edx = 1; //mov
	shl(edx, cl);
	eax = to32i(ebp+0x14); //mov
	edx = ~edx;
	ecx = to32i(eax+0x50); //mov
	ebx = 4; //mov
	and_(ecx, edx);
	edx = 0xFFFFFFFD; //mov
	to32i(eax+0x50) = ecx; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	goto loc_48CDC9;
loc_48CE7D:
	ebx = 4; //mov
	edx = 0xFFFFFFFE; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	goto loc_48CDC9;
loc_48CE95:
	ebx = 4; //mov
	edx = 1; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(ebp+0x14); //mov
	edx = ecx; //mov
	add(eax, (int32_t)0x88);
	sub(edx, eax);
	ecx = 0x64; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = 4; //mov
	ecx = (int32_t)(intptr_t)(esp+0x1C); //lea
	edx = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_48C054(); esp += 4; //call
	goto loc_48CDC9;
loc_48CED7:
	ebx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	ecx = 4; //mov
	eax = to32i(esp+0xC8); //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	cmp(eax, to32i(esi));
	if (jnz())
		goto loc_48C70D;
	eax = to32i(esp+0xC8); //mov
	ecx = 4; //mov
	add(eax, (int32_t)0x18);
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	to32i(esi+4) = eax; //mov
	ebx = to32i(esi+4); //mov
	to32i(esi) = 0; //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_48C70D;
	esi = to32i(esp+0xC8); //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	esi = (int32_t)(intptr_t)(esi+4); //lea
	eax = to32i(dword_4DBACC); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(ebp+0xA4) = eax; //mov
	eax = to32i(dword_4DBAD0); //mov
	to32i(ebp+0xA0) = eax; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CF72:
	esp -= 4; _sub_48C538(); esp += 4; //call
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CF83:
	eax = esi; //mov
	esp -= 4; _sub_48C538(); esp += 4; //call
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_48CF96:
	edx = to32i(esp+0xC4); //mov
	esp -= 4; _sub_48C538(); esp += 4; //call
	esi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48C70D;
	edi = to32i(ebp+0x14); //mov
	edx = (int32_t)(intptr_t)(edi+0x88); //lea
	sub(eax, edx);
	edx = eax; //mov
	ecx = 0x64; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cl = al; //mov
	eax = 1; //mov
	shl(eax, cl);
	edx = to32i(edi+0x50); //mov
	eax = ~eax;
	and_(edx, eax);
	to32i(edi+0x50) = edx; //mov
	to32i(esi+0x5C) = 0; //mov
	add(esp, (int32_t)0xCC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_48CFEC()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x64);
	edx = to32i(eax+4); //mov
	ecx = to32i(edx); //mov
	to32i(esp+0x5C) = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48D15E;
	cmp(to32i(eax+0xA8), (int32_t)0);
	if (jnz())
		goto loc_48D055;
	cmp(to32i(eax+0xC), (int32_t)0);
	if (jz())
		goto loc_48D055;
	ecx = 0x14; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(dword_48C088+8); //mov
	edx = to32i(eax+0x18); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(esp+0x10) = eax; //mov
	test(edx, edx);
	if (jnz())
		goto loc_48D02F;
	edx = esp; //mov
loc_48D02F:
	eax = to32i(esp+0x5C); //mov
	esp -= 4; _sub_48C624(); esp += 4; //call
	eax = to32i(esp+0x5C); //mov
	edi = to32i(eax+0xA4); //mov
	test(edi, edi);
	if (jz())
		goto loc_48D055;
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jnz())
		goto loc_48D055;
	edx = (int32_t)(intptr_t)(edi-1); //lea
	to32i(eax+0xA4) = edx; //mov
loc_48D055:
	eax = to32i(esp+0x5C); //mov
	ecx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48D15E;
	ebx = to32i(ecx+8); //mov
	esi = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48D15E;
	cmp(to32i(ecx+0x50), (int32_t)0);
	if (jz())
		goto loc_48D15E;
	to32i(esp+0x50) = 0xEA6F6C61; //mov
	eax = to32i(esp+0x5C); //mov
	edx = to32i(eax+0xA0); //mov
	to32i(esp+0x58) = ebx; //mov
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_48D0E4;
	ecx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(eax+0xA0) = ecx; //mov
loc_48D09F:
	xor_(edi, edi);
	eax = (int32_t)(intptr_t)(esi+0x88); //lea
	to32i(esp+0x60) = edi; //mov
	to32i(esp+0x54) = eax; //mov
	edi = esi; //mov
loc_48D0B1:
	eax = to32i(esi+0x84); //mov
	ebp = to32i(esp+0x60); //mov
	dec(eax);
	cmp(eax, ebp);
	if (jbe())
		goto loc_48D15E;
	cl = to8i(esp+0x60); //mov
	eax = 1; //mov
	edx = to32i(esi+0x50); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jnz())
		goto loc_48D0FE;
loc_48D0D6:
	ecx = to32i(esp+0x60); //mov
	inc(ecx);
	add(edi, (int32_t)0x64);
	to32i(esp+0x60) = ecx; //mov
	goto loc_48D0B1;
loc_48D0E4:
	edx = to32i(esp+0x5C); //mov
	ebx = 1; //mov
	eax = to32i(dword_4DBAD0); //mov
	to32i(esp+0x58) = ebx; //mov
	to32i(edx+0xA0) = eax; //mov
	goto loc_48D09F;
loc_48D0FE:
	imul32(ecx, ebp, 0x64);
	edx = to32i(edi+0xE4); //mov
	ebp = (int32_t)(intptr_t)(edx-1); //lea
	to32i(edi+0xE4) = ebp; //mov
	test(edx, edx);
	if (jnz())
		goto loc_48D127;
	eax = ~eax;
	and_(to32i(esi+0x50), eax);
	ecx = to32i(esp+0x60); //mov
	inc(ecx);
	add(edi, (int32_t)0x64);
	to32i(esp+0x60) = ecx; //mov
	goto loc_48D0B1;
loc_48D127:
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jz())
		goto loc_48D0D6;
	ebp = to32i(esp+0x5C); //mov
	push32(0);
	edx = to32i(esp+0x58); //mov
	eax = to32i(esp+0x60); //mov
	ebx = to32i(esp+0x54); //mov
	ebp = to32i(ebp+8); //mov
	eax = to32i(eax+0xC); //mov
	add(edx, ecx);
	xor_(ecx, ecx);
	call(to32i(ebp+0x50));
	ecx = to32i(esp+0x60); //mov
	inc(ecx);
	add(edi, (int32_t)0x64);
	to32i(esp+0x60) = ecx; //mov
	goto loc_48D0B1;
loc_48D15E:
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48D16C()
{
	push32(ebx);
	push32(edx);
	ebx = 1; //mov
	edx = (int32_t)(intptr_t)sub_48CFEC; //mov
	eax = (int32_t)(intptr_t)dword_564364; //mov
	esp -= 4; _sub_48BF74(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_48D188()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	edx = to32i(dword_4DBAFC); //mov
	inc(edx);
	to32i(dword_4DBAFC) = edx; //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_48D1B4;
	eax = to32i(eax+8); //mov
	call(to32i(eax+0x14));
	test(eax, eax);
	if (jz())
		goto loc_48D1C5;
	eax = (int32_t)(intptr_t)sub_48D16C; //mov
	esp -= 4; _sub_4A3F04(); esp += 4; //call
loc_48D1B4:
	ebx = to32i(esi+8); //mov
	eax = ecx; //mov
	xor_(edx, edx);
	call(to32i(ebx+0x1C));
	to32i(esi+0xC) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48D1CA;
loc_48D1C5:
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_48D1CA:
	ecx = to32i(esi+8); //mov
	edx = (int32_t)(intptr_t)(esi+0x30); //lea
	ebx = 0x10; //mov
	call(to32i(ecx+0x40));
	edx = (int32_t)(intptr_t)(esi+0x8C); //lea
	eax = edi; //mov
	to32i(esi+0x9C) = 1; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 0x33; //mov
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(esi+0x44); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 0x13; //mov
	edx = to32i(esp+0x10); //mov
	eax = (int32_t)(intptr_t)(esi+0x78); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = 0xFA; //mov
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_48D21C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	edx = eax; //mov
	ebx = to32i(eax+0xC); //mov
	ecx = 1; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48D28A;
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jnz())
		goto loc_48D23E;
	cmp(to32i(eax+0xA0), (int32_t)0);
	if (jz())
		goto loc_48D247;
loc_48D23E:
	eax = edx; //mov
	esp -= 4; _sub_48B28C(); esp += 4; //call
	ecx = eax; //mov
loc_48D247:
	ebp = to32i(edx+0xA8); //mov
	to32i(edx+0x9C) = 0; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_48D26C;
	xor_(esi, esi);
loc_48D25D:
	eax = esi; //mov
	esp -= 4; _sub_483EB0(); esp += 4; //call
	cmp(esi, to32i(edx+0xA8));
	if (jnz())
		goto loc_48D25D;
loc_48D26C:
	esi = to32i(edx+8); //mov
	eax = ebx; //mov
	to32i(edx+0xC) = 0; //mov
	call(to32i(esi+0x20));
	ebx = to32i(dword_4DBAFC); //mov
	dec(ebx);
	to32i(dword_4DBAFC) = ebx; //mov
	if (jz())
		goto loc_48D292;
loc_48D28A:
	eax = ecx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48D292:
	eax = (int32_t)(intptr_t)sub_48D16C; //mov
	esp -= 4; _sub_4A3F6C(); esp += 4; //call
	eax = to32i(edx+8); //mov
	call(to32i(eax+0x18));
	ecx = eax; //mov
	eax = ecx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48D2AC()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x88);
	ebp = eax; //mov
	to32i(esp+0x80) = edx; //mov
	to32i(esp+0x84) = ebx; //mov
	ebx = ecx; //mov
	ecx = 0x14; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(dword_48C088+0x58); //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	add(eax, (int32_t)0x8C);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_48C270(); esp += 4; //call
	eax = to32i(esp+0x80); //mov
	to32i(esp+0x10) = ebp; //mov
	to32i(esp+0xC) = ebx; //mov
	xor_(edx, edx);
	to32i(esp+0x14) = eax; //mov
	to32i(esp) = edx; //mov
	eax = esp; //mov
	to32i(ebp+0x18) = eax; //mov
	eax = to32i(dword_5637F0); //mov
	ecx = to32i(esp+0x84); //mov
	esi = 1; //mov
	add(eax, ecx);
	xor_(ebx, ebx);
	to32i(dword_4DBAF8) = eax; //mov
loc_48D31A:
	ecx = to32i(ebp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	eax = to32i(ebp+0xC); //mov
	call(to32i(ecx+0x30));
	edx = eax; //mov
loc_48D329:
	eax = esi; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jge())
		goto loc_48D351;
loc_48D334:
	test(edx, edx);
	if (jnz())
		goto loc_48D362;
	eax = edx; //mov
	to32i(ebp+0x18) = 0; //mov
	add(esp, (int32_t)0x88);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48D34B:
	test(edx, edx);
	if (jz())
		goto loc_48D31A;
	goto loc_48D329;
loc_48D351:
	esp -= 4; _sub_48C2D4(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48D334;
	cmp(ebx, to32i(esp+0x14));
	if (jnz())
		goto loc_48D34B;
	goto loc_48D334;
loc_48D362:
	ecx = to32i(ebp+8); //mov
	eax = to32i(ebp+0xC); //mov
	call(to32i(ecx+0x34));
	eax = edx; //mov
	to32i(ebp+0x18) = 0; //mov
	add(esp, (int32_t)0x88);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48D380()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	ebp = eax; //mov
	to32i(esp+0x100) = edx; //mov
	to32i(esp+0xFC) = ebx; //mov
	ecx = 0x14; //mov
	edi = (int32_t)(intptr_t)(esp+0xAC); //lea
	esi = (int32_t)(intptr_t)(dword_48C088+0xA8); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(to32i(eax+0xA4), (int32_t)0);
	if (jnz())
		goto loc_48D438;
loc_48D3BA:
	ecx = 0x17; //mov
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	esi = (int32_t)(intptr_t)(ebp+0x30); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = to32i(esp+0x100); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x100); //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	ecx = to32i(esp+0xFC); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	test(ecx, ecx);
	if (jz())
		goto loc_48D468;
	ebx = 0x10; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = ecx; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
loc_48D402:
	eax = to32i(dword_4DABCC); //mov
	add(eax, eax);
	push32(eax);
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	ebx = 0xEA616464; //mov
	push32(0x88);
	edx = (int32_t)(intptr_t)(esp+0xB4); //lea
	eax = ebp; //mov
	esp -= 4; _sub_48C458(); esp += 4; //call
	eax = to32i(esp+0xB0); //mov
loc_48D42D:
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48D438:
	ebx = to32i(esp+0x100); //mov
	edx = (int32_t)(intptr_t)(eax+0x1C); //lea
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48D452;
	eax = 1; //mov
	goto loc_48D42D;
loc_48D452:
	eax = ebp; //mov
	esp -= 4; _sub_48B28C(); esp += 4; //call
	to32i(ebp+0xA4) = 0; //mov
	goto loc_48D3BA;
loc_48D468:
	eax = to32i(ebp+0x14); //mov
	to8i(eax+0x3C) = 0; //mov
	goto loc_48D402;
}
Fn(void) Game::_sub_48D474()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xFC);
	ebp = ebx; //mov
	ecx = 0x14; //mov
	edi = (int32_t)(intptr_t)(esp+0xAC); //lea
	esi = (int32_t)(intptr_t)(dword_48C088+0xF8); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	test(edx, edx);
	if (jnz())
		goto loc_48D4EB;
	cmp(to32i(eax+0xA4), (int32_t)0);
	if (jz())
		goto loc_48D4EB;
loc_48D4A0:
	edx = to32i(dword_4DABCC); //mov
	add(edx, edx);
	ecx = esp; //mov
	push32(edx);
	ebx = 0xEA726571; //mov
	esi = (int32_t)(intptr_t)(esp+0xCC); //lea
	push32(0xAC);
	edx = (int32_t)(intptr_t)(esp+0xB4); //lea
	edi = ebp; //mov
	esp -= 4; _sub_48C458(); esp += 4; //call
	ecx = 0xD; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	cmp(to32i(esp+0xB0), (int32_t)0);
	if (jz())
		goto loc_48D504;
	eax = 1; //mov
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48D4EB:
	test(edx, edx);
	if (jz())
		goto loc_48D504;
	cmp(to32i(eax+0xA4), (int32_t)0);
	if (jnz())
		goto loc_48D504;
	esi = edx; //mov
	edi = (int32_t)(intptr_t)(eax+0x1C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	goto loc_48D4A0;
loc_48D504:
	xor_(eax, eax);
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48D514()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = eax; //mov
	esi = edx; //mov
	to32i(esp+4) = ebx; //mov
	to32i(esp) = ecx; //mov
	xor_(edx, edx);
	ecx = to32i(esi+0x30); //mov
	to32i(esp+8) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48D61C;
loc_48D536:
	cmp(to32i(ebp+0xA4), (int32_t)0);
	if (jz())
		goto loc_48D550;
	eax = ebp; //mov
	esp -= 4; _sub_48B28C(); esp += 4; //call
	to32i(ebp+0xA4) = 0; //mov
loc_48D550:
	edx = to32i(esi+0x30); //mov
	sub(edx, (int32_t)2);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(eax, edx);
	shl(eax, (int32_t)2);
	edx = (int32_t)(intptr_t)(eax+0xEC); //lea
	ebx = to32i(dword_4DABE8); //mov
	eax = (int32_t)(intptr_t)aNetsrvr; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(ebp+0x14) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48D611;
	to32i(eax+4) = ebp; //mov
	edi = to32i(ebp+0x14); //mov
	ecx = 0xD; //mov
	edi = (int32_t)(intptr_t)(edi+0x54); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(ebp+0x14); //mov
	to32i(eax+8) = 0; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax+0x50) = 0; //mov
	eax = to32i(ebp+0x14); //mov
	edx = to32i(esp); //mov
	to32i(eax+0x4C) = edx; //mov
	eax = to32i(dword_4DBACC); //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	to32i(ebp+0xA4) = eax; //mov
	eax = to32i(dword_4DBAD0); //mov
	esi = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebp+0xA0) = eax; //mov
	eax = to32i(esp+4); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	test(eax, eax);
	if (jnz())
		goto loc_48D628;
	eax = to32i(ebp+0x14); //mov
	to8i(eax+0x3C) = 0; //mov
loc_48D5E5:
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(ebp+0x8C); //lea
	add(edx, (int32_t)0xC);
	esp -= 4; _sub_48C270(); esp += 4; //call
	ebx = to32i(ebp+8); //mov
	edx = to32i(ebp+0x14); //mov
	eax = to32i(ebp+0xC); //mov
	add(edx, (int32_t)0xC);
	call(to32i(ebx+0x28));
	test(eax, eax);
	if (jz())
		goto loc_48D63E;
	to32i(esp+8) = 1; //mov
loc_48D611:
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48D61C:
	to32i(esi+0x30) = 0x20; //mov
	goto loc_48D536;
loc_48D628:
	ebx = 0x10; //mov
	eax = to32i(ebp+0x14); //mov
	edx = to32i(esp+4); //mov
	add(eax, (int32_t)0x3C);
	esp -= 4; _strncpy_(); esp += 4; //call
	goto loc_48D5E5;
loc_48D63E:
	eax = to32i(ebp+0x14); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(ebp+0x14) = 0; //mov
	eax = to32i(esp+8); //mov
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48D658()
{
	push32(ecx);
	ecx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48D664;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_48D664:
	push32(edi);
	push32(esi);
	esi = ecx; //mov
	ecx = 0xD; //mov
	edi = (int32_t)(intptr_t)(esi+0x54); //lea
	esi = edx; //mov
	eax = 1; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	pop32(esi);
	pop32(edi);
	pop32(ecx);
}
Fn(void) Game::_sub_48D680()
{
	push32(ebx);
	push32(ecx);
	ecx = eax; //mov
	ebx = edx; //mov
	edx = to32i(eax+0x14); //mov
	test(edx, edx);
	if (jz())
		goto loc_48D6CF;
	cmp(to32i(edx+8), (int32_t)0);
	if (jz())
		goto loc_48D6AE;
loc_48D693:
	test(ebx, ebx);
	if (jz())
		goto loc_48D6A6;
	eax = to32i(ecx+0x14); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(ecx+0x14) = 0; //mov
loc_48D6A6:
	eax = 1; //mov
	pop32(ecx);
	pop32(ebx);
	return;
loc_48D6AE:
	push32(esi);
	esi = to32i(eax+8); //mov
	add(edx, (int32_t)0xC);
	eax = to32i(eax+0xC); //mov
	call(to32i(esi+0x2C));
	eax = to32i(ecx+0x14); //mov
	to8i(eax+0xC) = 0; //mov
	eax = to32i(ecx+0x14); //mov
	to32i(eax+8) = 1; //mov
	pop32(esi);
	goto loc_48D693;
loc_48D6CF:
	xor_(eax, eax);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48D6D4()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edi = to32i(dword_4DBACC); //mov
	esi = eax; //mov
	edx = to32i(eax+0x14); //mov
	test(edx, edx);
	if (jz())
		goto loc_48D6F0;
	ecx = to32i(edx+8); //mov
	eax = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48D703;
loc_48D6F0:
	edi = to32i(dword_4DBACC); //mov
	xor_(eax, eax);
	to32i(dword_4DBACC) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_48D703:
	to32i(edx+8) = 0; //mov
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(esi+0x8C); //lea
	add(edx, (int32_t)0xC);
	esp -= 4; _sub_48C270(); esp += 4; //call
	ecx = to32i(esi+8); //mov
	edx = to32i(esi+0x14); //mov
	eax = to32i(esi+0xC); //mov
	add(edx, (int32_t)0xC);
	call(to32i(ecx+0x28));
	test(eax, eax);
	if (jz())
		goto loc_48D76F;
	push32(ebx);
	edi = to32i(dword_4DBACC); //mov
	to32i(esi+0xA0) = 1; //mov
	xor_(edx, edx);
	xor_(eax, eax);
loc_48D743:
	ecx = to32i(esi+0x14); //mov
	ebx = to32i(ecx+0x84); //mov
	dec(ebx);
	cmp(edx, ebx);
	if (jnb())
		goto loc_48D75E;
	add(eax, (int32_t)0x64);
	inc(edx);
	to32i(ecx+eax+0x80) = edi; //mov
	goto loc_48D743;
loc_48D75E:
	eax = 1; //mov
	pop32(ebx);
	to32i(dword_4DBACC) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_48D76F:
	eax = to32i(esi+0x14); //mov
	to32i(eax+8) = 0; //mov
	edi = to32i(dword_4DBACC); //mov
	xor_(eax, eax);
	to32i(dword_4DBACC) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48D78C()
{
	push32(ebp);
	sub(esp, (int32_t)0xB0);
	ebp = eax; //mov
	cmp(to32i(eax+0xA4), (int32_t)0);
	if (jz())
		goto loc_48D88A;
	push32(edi);
	push32(esi);
	push32(edx);
	push32(ecx);
	push32(ebx);
	eax = to32i(dword_4DBAF4); //mov
	to32i(esp+0x14) = eax; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	inc(eax);
	ecx = to32i(ebp+0x14); //mov
	to32i(dword_4DBAF4) = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48D897;
	ebx = to32i(ecx+8); //mov
	edx = ecx; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48D862;
	ecx = to32i(ebp+8); //mov
	add(edx, (int32_t)0xC);
	eax = to32i(ebp+0xC); //mov
	call(to32i(ecx+0x2C));
	eax = to32i(ebp+0x14); //mov
	to32i(esp+0xC0) = ebx; //mov
	xor_(esi, esi);
	to8i(eax+0xC) = 0; //mov
loc_48D7F6:
	eax = to32i(ebp+0x14); //mov
	edi = to32i(eax+0x50); //mov
	test(edi, edi);
	if (jz())
		goto loc_48D862;
	edx = to32i(eax+0x84); //mov
	ecx = to32i(esp+0xC0); //mov
	dec(edx);
	cmp(edx, ecx);
	if (jbe())
		goto loc_48D862;
	cl = to8i(esp+0xC0); //mov
	edx = 1; //mov
	shl(edx, cl);
	ecx = edx; //mov
	test(edx, edi);
	if (jnz())
		goto loc_48D83A;
loc_48D826:
	eax = to32i(esp+0xC0); //mov
	inc(eax);
	add(esi, (int32_t)0x64);
	to32i(esp+0xC0) = eax; //mov
	goto loc_48D7F6;
loc_48D83A:
	ecx = ~ecx;
	push32(0x18);
	and_(edi, ecx);
	ebx = 0xEA627965; //mov
	to32i(eax+0x50) = edi; //mov
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = to32i(ebp+0x14); //mov
	edi = to32i(ebp+8); //mov
	add(edx, (int32_t)0x88);
	eax = to32i(ebp+0xC); //mov
	add(edx, esi);
	call(to32i(edi+0x50));
	goto loc_48D826;
loc_48D862:
	eax = to32i(ebp+0x14); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(ebp+0x14) = 0; //mov
loc_48D871:
	to32i(ebp+0xA0) = 0; //mov
	to32i(ebp+0xA4) = 0; //mov
	pop32(ebx);
	pop32(ecx);
	pop32(edx);
	pop32(esi);
	pop32(edi);
loc_48D88A:
	eax = 1; //mov
	add(esp, (int32_t)0xB0);
	pop32(ebp);
	return;
loc_48D897:
	push32(0x18);
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = 0xEA627965; //mov
	esi = to32i(ebp+8); //mov
	edx = (int32_t)(intptr_t)(ebp+0x1C); //lea
	eax = to32i(ebp+0xC); //mov
	call(to32i(esi+0x50));
	goto loc_48D871;
}
Fn(void) Game::_sub_48D8B0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x110);
	ebp = eax; //mov
	to32i(esp+0xFC) = ebx; //mov
	xor_(ecx, ecx);
	to32i(esp+0x104) = ecx; //mov
	test(edx, edx);
	if (jnz())
		goto loc_48D976;
	cmp(to32i(eax+0xA4), (int32_t)0);
	if (jz())
		goto loc_48D976;
	edx = (int32_t)(intptr_t)(eax+0x1C); //lea
loc_48D8E4:
	cmp(to32i(ebp+0x14), (int32_t)0);
	if (jz())
		goto loc_48D9C6;
	eax = (int32_t)(intptr_t)(ebp+0x1C); //lea
	ebx = edx; //mov
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48B2F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48D9C6;
	ecx = 1; //mov
	edx = (int32_t)(intptr_t)(ebp+0x30); //lea
	xor_(ebx, ebx);
	eax = ebp; //mov
	call(to32i(esp+0xFC));
	test(eax, eax);
	if (jz())
		goto loc_48DB70;
	edi = 1; //mov
	xor_(eax, eax);
	xor_(esi, esi);
	to32i(esp+0x104) = edi; //mov
	to32i(esp+0x108) = eax; //mov
loc_48D936:
	eax = to32i(ebp+0x14); //mov
	edx = to32i(eax+0x84); //mov
	edi = to32i(esp+0x108); //mov
	dec(edx);
	cmp(edx, edi);
	if (jbe())
		goto loc_48DB70;
	cl = to8i(esp+0x108); //mov
	edx = 1; //mov
	shl(edx, cl);
	test(to32i(eax+0x50), edx);
	if (jnz())
		goto loc_48D99F;
loc_48D962:
	edi = to32i(esp+0x108); //mov
	inc(edi);
	add(esi, (int32_t)0x64);
	to32i(esp+0x108) = edi; //mov
	goto loc_48D936;
loc_48D976:
	test(edx, edx);
	if (jz())
		goto loc_48D992;
	cmp(to32i(ebp+0xA4), (int32_t)0);
	if (jnz())
		goto loc_48D992;
	esi = edx; //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	goto loc_48D8E4;
loc_48D992:
	xor_(eax, eax);
	add(esp, (int32_t)0x110);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48D99F:
	add(eax, (int32_t)0x88);
	ebx = (int32_t)(intptr_t)(edi+1); //lea
	edx = (int32_t)(intptr_t)(eax+esi); //lea
	xor_(ecx, ecx);
	eax = ebp; //mov
	call(to32i(esp+0xFC));
	test(eax, eax);
	if (jz())
		goto loc_48DB70;
	inc(to32i(esp+0x104));
	goto loc_48D962;
loc_48D9C6:
	ecx = 0x14; //mov
	edi = (int32_t)(intptr_t)(esp+0xAC); //lea
	ebx = 0xEA726571; //mov
	eax = to32i(dword_4DABCC); //mov
	esi = (int32_t)(intptr_t)(dword_48C088+0x148); //mov
	add(eax, eax);
	edx = (int32_t)(intptr_t)(esp+0xAC); //lea
	push32(eax);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	push32(0xAC);
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	eax = ebp; //mov
	esp -= 4; _sub_48C458(); esp += 4; //call
	cmp(to32i(esp+0xB0), (int32_t)0);
	if (jz())
		goto loc_48DB70;
	eax = to32i(esp+0xB4); //mov
	edx = 1; //mov
	ebx = 4; //mov
	to32i(esp+0x100) = eax; //mov
	to32i(esp+0xB0) = edx; //mov
	eax = to32i(esp+0xFC); //mov
	edx = 0xFFFFFFFF; //mov
	to32i(esp+0xC4) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(dword_4DABCC); //mov
	ecx = esp; //mov
	add(eax, eax);
	ebx = 0xEA676574; //mov
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0xB0); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	push32(0x1C);
	eax = ebp; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48C458(); esp += 4; //call
	cmp(to32i(esp+0xB0), (int32_t)0);
	if (jz())
		goto loc_48DB82;
	eax = 1; //mov
loc_48DA84:
	esi = to32i(esp+0x100); //mov
	xor_(ebx, ebx);
	to32i(esp+0x104) = eax; //mov
	to32i(esp+0x10C) = ebx; //mov
	test(esi, esi);
	if (jz())
		goto loc_48DB70;
loc_48DAA3:
	cmp(to32i(esp+0x10C), (int32_t)0x1F);
	if (jge())
		goto loc_48DB70;
	cmp(to32i(esp+0xC4), (int32_t)0);
	if (jz())
		goto loc_48DB70;
	cmp(to32i(esp+0x104), (int32_t)0);
	if (jz())
		goto loc_48DB70;
	cl = to8i(esp+0x10C); //mov
	eax = 1; //mov
	edx = to32i(esp+0x100); //mov
	shl(eax, cl);
	test(eax, edx);
	if (jz())
		goto loc_48DB52;
	ebx = 4; //mov
	edx = to32i(esp+0x10C); //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_48C054(); esp += 4; //call
	eax = to32i(dword_4DABCC); //mov
	add(eax, eax);
	push32(eax);
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	ebx = 0xEA676574; //mov
	push32(0x1C);
	edx = (int32_t)(intptr_t)(esp+0xB4); //lea
	eax = ebp; //mov
	esp -= 4; _sub_48C458(); esp += 4; //call
	cmp(to32i(esp+0xB0), (int32_t)0);
	if (jz())
		goto loc_48DB89;
	eax = 1; //mov
loc_48DB2B:
	cl = to8i(esp+0x10C); //mov
	to32i(esp+0x104) = eax; //mov
	eax = 1; //mov
	shl(eax, cl);
	ebx = to32i(esp+0x10C); //mov
	eax = ~eax;
	and_(ebx, eax);
	to32i(esp+0x10C) = ebx; //mov
loc_48DB52:
	edx = to32i(esp+0x10C); //mov
	inc(edx);
	ecx = to32i(esp+0x100); //mov
	to32i(esp+0x10C) = edx; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48DAA3;
loc_48DB70:
	eax = to32i(esp+0x104); //mov
	add(esp, (int32_t)0x110);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48DB82:
	xor_(eax, eax);
	goto loc_48DA84;
loc_48DB89:
	xor_(eax, eax);
	goto loc_48DB2B;
}
Fn(void) Game::_sub_48DB90()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	ecx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_48DBAA;
loc_48DBA0:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48DBAA:
	eax = ecx; //mov
	esp -= 4; _sub_48C538(); esp += 4; //call
	edi = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48DBA0;
	push32(ebx);
	eax = to32i(esi+0x14); //mov
	edx = edi; //mov
	add(eax, (int32_t)0x88);
	sub(edx, eax);
	ecx = 0x64; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	push32(0);
	ebx = 0xEA6F7574; //mov
	ebp = to32i(esi+8); //mov
	to32i(esp+8) = eax; //mov
	edx = edi; //mov
	xor_(ecx, ecx);
	eax = to32i(esi+0xC); //mov
	call(to32i(ebp+0x50));
	cl = to8i(esp+4); //mov
	eax = 1; //mov
	edx = to32i(esi+0x14); //mov
	shl(eax, cl);
	ebx = to32i(edx+0x50); //mov
	eax = ~eax;
	and_(ebx, eax);
	to32i(edx+0x50) = ebx; //mov
	pop32(ebx);
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48DC0C()
{
	push32(esi);
	esi = edx; //mov
	test(edx, edx);
	if (jz())
		goto loc_48DC6D;
	push32(edi);
	cmp(to32i(edx+0x24), (int32_t)0);
	if (jnz())
		goto loc_48DC2F;
	edx = to32i(dword_4DABCC); //mov
	edi = 0x1E; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esi+0x24) = eax; //mov
loc_48DC2F:
	cmp(to32i(esi+0x28), (int32_t)0);
	if (jnz())
		goto loc_48DC4A;
	edx = to32i(dword_4DABCC); //mov
	edi = 0xF; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esi+0x28) = eax; //mov
loc_48DC4A:
	cmp(to32i(esi+0x2C), (int32_t)0);
	if (jnz())
		goto loc_48DC65;
	edx = to32i(dword_4DABCC); //mov
	edi = 0xF; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to32i(esi+0x2C) = eax; //mov
loc_48DC65:
	to32i(esi+8) = 0; //mov
	pop32(edi);
loc_48DC6D:
	edx = (int32_t)(intptr_t)dword_4D4BC8; //mov
	push32(ecx);
	eax = esi; //mov
	ecx = ebx; //mov
	ebx = (int32_t)(intptr_t)off_4DBB3C; //mov
	esp -= 4; _sub_48A188(); esp += 4; //call
	pop32(esi);
}
Fn(void) Game::_sub_48DC84()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = to32i(eax+0x48); //mov
	to32i(dword_56438C) = edx; //mov
	edx = to32i(esi+0xC); //mov
	edi = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_48DCF3;
	edx = to32i(esi+8); //mov
	cmp(to32i(edx+0x44), (int32_t)0);
	if (jz())
		goto loc_48DCAE;
	ecx = edx; //mov
	edx = (int32_t)(intptr_t)(eax+0x30); //lea
	eax = to32i(esi+0xC); //mov
	call(to32i(ecx+0x44));
loc_48DCAE:
	push32(ebx);
	ebx = 0xEA646174; //mov
	edx = (int32_t)(intptr_t)(edi+0x30); //lea
	ebp = to32i(esi+8); //mov
	eax = to32i(esi+0xC); //mov
	xor_(ecx, ecx);
	call(to32i(ebp+0x58));
	eax = to32i(dword_56437C); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ebx = to32i(esi+0xA8); //mov
	inc(ebx);
	eax = to32i(dword_56437C); //mov
	to32i(esi+0xA8) = ebx; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	to32i(edi+0x44) = 0xFFFFFFFF; //mov
	pop32(ebx);
	eax = to32i(edi+0x44); //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48DCF3:
	to32i(eax+0x44) = edx; //mov
	eax = to32i(edi+0x44); //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48DD00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(eax+0x48); //mov
	ebx = to32i(edx+0xC); //mov
	edi = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48DD1C;
	cmp(to32i(edx+0xA8), (int32_t)0);
	if (jnz())
		goto loc_48DD2E;
loc_48DD1C:
	to32i(edi+0x44) = 0; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48DD2E:
	push32(esi);
	eax = to32i(dword_56437C); //mov
	ebx = 0xEA646174; //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	esi = (int32_t)(intptr_t)(ecx+0x30); //lea
	ebp = to32i(edx+0xA8); //mov
	ecx = 1; //mov
	dec(ebp);
	eax = to32i(dword_56437C); //mov
	to32i(edx+0xA8) = ebp; //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	ebp = to32i(edx+8); //mov
	eax = to32i(edx+0xC); //mov
	edx = esi; //mov
	call(to32i(ebp+0x58));
	pop32(esi);
	to32i(edi+0x44) = 0; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48DD7C()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ebx = to32i(dword_56438C); //mov
	ecx = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_48DDA8;
loc_48DD8D:
	cmp(to32i(ecx+0x44), (int32_t)0);
	if (jz())
		goto loc_48DDBB;
	eax = to32i(ecx+0x48); //mov
	cmp(to32i(eax+0x9C), (int32_t)0);
	if (jz())
		goto loc_48DDBB;
	eax = 1; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48DDA8:
	esp -= 4; _sub_48DDE0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48DD8D;
	eax = edx; //mov
	call(to32i(dword_56438C));
	goto loc_48DD8D;
loc_48DDBB:
	xor_(eax, eax);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48DDC4()
{
	push32(edx);
	eax = to32i(eax+0x48); //mov
	edx = to32i(eax+8); //mov
	eax = to32i(eax+0xC); //mov
	call(to32i(edx+0x48));
	test(eax, eax);
	if (jz())
		goto loc_48DDDD;
	xor_(eax, eax);
	ax = to16i(word_4DBB58); //mov
loc_48DDDD:
	pop32(edx);
}
Fn(void) Game::_sub_48DDE0()
{
	push32(edx);
	eax = to32i(eax+0x48); //mov
	edx = to32i(eax+8); //mov
	eax = to32i(eax+0xC); //mov
	call(to32i(edx+0x4C));
	pop32(edx);
}
Fn(void) Game::_sub_48DDF0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x70);
	to32i(esp+0x6C) = edx; //mov
	to32i(esp+0x68) = ebx; //mov
	ecx = 0x14; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(dword_48C088+0x198); //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	ebp = eax; //mov
	eax = to32i(eax+0x48); //mov
	edi = ebp; //mov
	to32i(esp+0x10) = eax; //mov
	add(edi, (int32_t)0x30);
loc_48DE1B:
	edx = 0xEA646174; //mov
	ebx = 0x14; //mov
	eax = edi; //mov
	to32i(esp+0x64) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	ecx = to32i(esp+0x68); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x64); //lea
	eax = to32i(ebp+0x48); //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	push32(ecx);
	esi = to32i(eax+8); //mov
	ecx = to32i(esp+0x70); //mov
	eax = to32i(eax+0xC); //mov
	call(to32i(esi+0x54));
	ebx = to32i(esp+0x64); //mov
	esi = eax; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_48DEC7;
	eax = to32i(ebp+0x48); //mov
	cmp(to32i(eax+0x18), (int32_t)0);
	if (jnz())
		goto loc_48DE69;
	edx = esp; //mov
	to32i(eax+0x18) = edx; //mov
loc_48DE69:
	ecx = to32i(esp+0x6C); //mov
	ebx = to32i(esp+0x64); //mov
	eax = to32i(ebp+0x48); //mov
	push32(esi);
	edx = (int32_t)(intptr_t)(esp+0x54); //lea
	eax = to32i(eax+0x18); //mov
	esp -= 4; _sub_48C6BC(); esp += 4; //call
	eax = to32i(ebp+0x48); //mov
	edx = esp; //mov
	cmp(edx, to32i(eax+0x18));
	if (jnz())
		goto loc_48DE92;
	to32i(eax+0x18) = 0; //mov
loc_48DE92:
	ebx = to32i(esp+0x64); //mov
	cmp(ebx, (int32_t)0xEA646174);
	if (jz())
		goto loc_48DEB6;
	cmp(ebx, (int32_t)0xEA6E6F21);
	if (jnz())
		goto loc_48DE1B;
	to32i(ebp+4) = 0; //mov
	goto loc_48DE1B;
loc_48DEB6:
	to32i(ebp+0x44) = 1; //mov
	eax = esi; //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48DEC7:
	eax = to32i(ebp+0x48); //mov
	cmp(to32i(eax+0xA8), (int32_t)0);
	if (jnz())
		goto loc_48DEE5;
	ebx = 0xEA646174; //mov
	esi = to32i(eax+8); //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	eax = to32i(eax+0xC); //mov
	call(to32i(esi+0x58));
loc_48DEE5:
	xor_(esi, esi);
	eax = esi; //mov
	add(esp, (int32_t)0x70);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48DEF4()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	esi = eax; //mov
	to32i(esp) = edx; //mov
	edi = ebx; //mov
	edx = 0xEA646174; //mov
	to32i(esp+8) = eax; //mov
	to32i(esp+4) = edx; //mov
	cmp(to32i(eax+0x44), (int32_t)0);
	if (jge())
		goto loc_48DF4A;
	dec(to32i(eax+0x44));
	cmp(to32i(eax+0x44), (int32_t)0xFFFFFFFC);
	if (jge())
		goto loc_48DF4A;
	eax = 0xEA6F706E; //mov
	push32(0);
	to32i(esp+8) = eax; //mov
	eax = to32i(esi+0x48); //mov
	ebx = 0xEA6F706E; //mov
	edx = (int32_t)(intptr_t)(esi+0x30); //lea
	ebp = to32i(eax+8); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0xC); //mov
	call(to32i(ebp+0x50));
	test(eax, eax);
	if (jz())
		goto loc_48DF4A;
	to32i(esi+0x44) = 0xFFFFFFFF; //mov
loc_48DF4A:
	eax = to32i(esp+8); //mov
	edx = to32i(esp+8); //mov
	ecx = to32i(esp); //mov
	eax = to32i(eax+0x48); //mov
	ebx = to32i(esp+4); //mov
	push32(edi);
	esi = to32i(eax+8); //mov
	add(edx, (int32_t)0x30);
	eax = to32i(eax+0xC); //mov
	call(to32i(esi+0x50));
	test(eax, eax);
	if (jz())
		goto loc_48DF6F;
	eax = edi; //mov
loc_48DF6F:
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48DFA8()
{
	push32(ecx);
	eax = edx; //mov
	ecx = ebx; //mov
	cmp(to32i(dword_5643F0), (int32_t)0);
	if (jz())
		goto loc_48DFBA;
	xor_(eax, eax);
	pop32(ecx);
	return;
loc_48DFBA:
	edx = (int32_t)(intptr_t)dword_5643F4; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = 1; //mov
	to32i(dword_5643F0) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_48DFD4()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2004);
	ebp = eax; //mov
	to32i(esp+0x2000) = edx; //mov
	esi = ebx; //mov
	edi = ecx; //mov
	ebx = 0x10; //mov
	edx = esp; //mov
	add(eax, (int32_t)0x8C);
	esp -= 4; _sub_48A980(); esp += 4; //call
	edx = (int32_t)(intptr_t)(esp+0x10); //lea
	eax = to32i(esp+0x2000); //mov
	ebx = esi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	add(esi, (int32_t)0x10);
	eax = SDL_GetTicks_wrap();
	to32i(dword_5643E8) = eax; //mov
	xor_(ecx, ecx);
loc_48E01E:
	edx = esp; //mov
	eax = (int32_t)(intptr_t)dword_564390; //mov
	ebx = esi; //mov
	esp -= 4; _sub_48A2F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E04A;
	cmp(ecx, to32i(dword_564394));
	if (jz())
		goto loc_48E04A;
	test(edi, edi);
	if (jz())
		goto loc_48E01E;
	eax = 1; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jl())
		goto loc_48E01E;
loc_48E04A:
	test(edi, edi);
	if (jz())
		goto loc_48E0CE;
	ecx = 1; //mov
	xor_(edx, edx);
loc_48E059:
	ebx = to32i(dword_5643F0); //mov
	cmp(edx, ebx);
	if (jnz())
		goto loc_48E076;
	cmp(ebx, to32i(dword_564394));
	if (jz())
		goto loc_48E076;
	eax = ecx; //mov
	esp -= 4; _sub_483F44(); esp += 4; //call
	test(eax, eax);
	if (jge())
		goto loc_48E059;
loc_48E076:
	cmp(to32i(dword_5643F0), (int32_t)0);
	if (jz())
		goto loc_48E09F;
	cmp(to32i(dword_5643F4), (int32_t)0xEA687568);
	if (jnz())
		goto loc_48E0AB;
	to32i(ebp+0xA0) = 0; //mov
	to32i(ebp+0xA4) = 0; //mov
loc_48E09F:
	xor_(eax, eax);
	add(esp, (int32_t)0x2004);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48E0AB:
	xor_(edx, edx);
	to32i(dword_5643F0) = edx; //mov
	eax = SDL_GetTicks_wrap();
	to32i(dword_5643E8) = eax; //mov
	eax = to32i(dword_5643F4); //mov
	add(esp, (int32_t)0x2004);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48E0CE:
	eax = 1; //mov
	add(esp, (int32_t)0x2004);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48E0E0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	xor_(edx, edx);
	test(eax, eax);
	if (jz())
		goto loc_48E0F8;
loc_48E0EA:
	ecx = eax; //mov
	neg(ecx);
	ecx = ~ecx;
	and_(eax, ecx);
	inc(edx);
	test(eax, eax);
	if (jnz())
		goto loc_48E0EA;
loc_48E0F8:
	eax = edx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48E100()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	cmp(to32i(dword_5643F0), (int32_t)0);
	if (jz())
		goto loc_48E191;
	cmp(to32i(dword_564394), (int32_t)0);
	if (jz())
		goto loc_48E191;
	cmp(to32i(dword_5643F4), (int32_t)0xEA616E70);
	if (jnz())
		goto loc_48E191;
	push32(edi);
	ebp = to32i(dword_5643D8); //mov
	ebp = to32i(ebp+0x14); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_48E188;
	push32(esi);
	esi = 0xEA726573; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(esp+8) = esi; //mov
	esi = (int32_t)(intptr_t)dword_5643F8; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	ebx = to32i(dword_564478); //mov
	edx = (int32_t)(intptr_t)dword_5643F4; //mov
	add(edx, (int32_t)0x28);
	eax = to32i(dword_5643D8); //mov
	xor_(ecx, ecx);
	call(ebp);
	to32i(esp+0x20) = eax; //mov
	eax = to32i(dword_564478); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(dword_5643D8); //mov
	ebx = 0x20; //mov
	edx = (int32_t)(intptr_t)(esp+8); //lea
	xor_(ecx, ecx);
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	pop32(esi);
loc_48E188:
	xor_(edi, edi);
	to32i(dword_5643F0) = edi; //mov
	pop32(edi);
loc_48E191:
	eax = to32i(dword_5643D8); //mov
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jnz())
		goto loc_48E1BC;
	cmp(to32i(dword_564394), (int32_t)0);
	if (jz())
		goto loc_48E1C5;
	ebx = to32i(dword_5643E8); //mov
	add(ebx, (int32_t)0x2710);
	eax = SDL_GetTicks_wrap();
	cmp(eax, ebx);
	if (ja())
		goto loc_48E1C5;
loc_48E1BC:
	xor_(eax, eax);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E1C5:
	eax = (int32_t)(intptr_t)dword_564390; //mov
	esp -= 4; _sub_48A308(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_48E100; //mov
	xor_(edx, edx);
	esp -= 4; _sub_483E64(); esp += 4; //call
	to32i(dword_5643E0) = edx; //mov
	xor_(eax, eax);
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48E1EC()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(ebp);
	esi = eax; //mov
	ebx = edx; //mov
	cmp(to32i(dword_564394), (int32_t)0);
	if (jz())
		goto loc_48E223;
	cmp(eax, to32i(dword_5643D8));
	if (jz())
		goto loc_48E278;
	push32(edi);
	eax = (int32_t)(intptr_t)dword_564390; //mov
	esp -= 4; _sub_48A308(); esp += 4; //call
	eax = (int32_t)(intptr_t)sub_48E100; //mov
	xor_(edi, edi);
	esp -= 4; _sub_483E64(); esp += 4; //call
	to32i(dword_5643E0) = edi; //mov
	pop32(edi);
loc_48E223:
	edx = 0x50; //mov
	eax = (int32_t)(intptr_t)dword_564390; //mov
	ebp = (int32_t)(intptr_t)(dword_48DF80+8); //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	to32i(dword_5643A4) = ebp; //mov
	to32i(dword_5643B0) = (int32_t)(intptr_t)sub_48DFA8; //mov
	eax = SDL_GetTicks_wrap();
	add(eax, ebx);
	to32i(dword_5643E4) = eax; //mov
	ecx = (int32_t)(intptr_t)dword_5643C0; //mov
	ebx = to32i(dword_4DBB60); //mov
	edx = to32i(off_4DBB5C); //mov
	eax = esi; //mov
	esp -= 4; _sub_48B2FC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E282;
loc_48E271:
	xor_(eax, eax);
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E278:
	eax = 1; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E282:
	ebx = 2; //mov
	edx = 0xFA; //mov
	eax = (int32_t)(intptr_t)dword_564390; //mov
	ecx = esi; //mov
	esp -= 4; _sub_48B2CC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E271;
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)sub_48E100; //mov
	edx = ebx; //mov
	esp -= 4; _sub_483DD0(); esp += 4; //call
	edx = 1; //mov
	to32i(dword_5643E0) = edx; //mov
	eax = edx; //mov
	pop32(ebp);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48E2C0()
{
	eax = 1; //mov
}
Fn(void) Game::_sub_48E2C8()
{
	push32(esi);
	push32(edi);
	esi = eax; //mov
	edi = edx; //mov
	esp -= 4; _sub_48A270(); esp += 4; //call
	eax = to32i(esi+8); //mov
	call(to32i(eax+0x14));
	to32i(dword_4DBBA8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_48E2E7;
loc_48E2E2:
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_48E2E7:
	ebx = to32i(esi+8); //mov
	edx = esi; //mov
	eax = ecx; //mov
	call(to32i(ebx+0x1C));
	to32i(esi+0xC) = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_48E2E2;
	ecx = to32i(esi+8); //mov
	edx = (int32_t)(intptr_t)(esi+0x30); //lea
	ebx = 0x10; //mov
	call(to32i(ecx+0x40));
	edx = (int32_t)(intptr_t)(esi+0x8C); //lea
	to32i(esi+0x9C) = 1; //mov
	eax = edi; //mov
	to32i(esi+0x14) = 0; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	ebx = 0x33; //mov
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(esi+0x44); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	ebx = 0x13; //mov
	edx = to32i(esp+0x10); //mov
	eax = (int32_t)(intptr_t)(esi+0x78); //lea
	esp -= 4; _strncpy_(); esp += 4; //call
	eax = to32i(dword_4DBBA8); //mov
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_48E350()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(edx+0xC); //mov
	eax = 1; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_48E391;
	cmp(to32i(edx+0xA0), (int32_t)0);
	if (jz())
		goto loc_48E370;
	eax = edx; //mov
	esp -= 4; _sub_48B28C(); esp += 4; //call
loc_48E370:
	push32(ebx);
	ebx = to32i(edx+8); //mov
	eax = ecx; //mov
	call(to32i(ebx+0x20));
	to32i(edx+0x9C) = 0; //mov
	eax = to32i(edx+8); //mov
	to32i(edx+0xC) = 0; //mov
	call(to32i(eax+0x18));
	pop32(ebx);
loc_48E391:
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_48E394()
{
	push32(esi);
	push32(ebp);
	sub(esp, (int32_t)0xC);
	ebp = eax; //mov
	to32i(esp+8) = edx; //mov
	edx = ebx; //mov
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	sub(eax, ebx);
	shl(eax, (int32_t)3);
	add(eax, ebx);
	shl(eax, (int32_t)3);
	edx = eax; //mov
	shl(eax, (int32_t)2);
	ecx = to32i(dword_4DABCC); //mov
	add(eax, edx);
	xor_(edx, edx);
	div32(ecx);
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E42F;
	push32(edi);
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)dword_48DF80; //mov
	movsd();
	movsd();
	pop32(edi);
loc_48E3DD:
	ecx = 1; //mov
	ebx = 8; //mov
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	xor_(esi, esi);
	test(eax, eax);
	if (jz())
		goto loc_48E42B;
	cmp(to32i(dword_5643F4), (int32_t)0xEA646563);
	if (jnz())
		goto loc_48E42B;
	xor_(edx, edx);
loc_48E404:
	eax = to32i(dword_564460+edx); //mov
	add(edx, (int32_t)4);
	esp -= 4; _sub_48E0E0(); esp += 4; //call
	cmp(edx, (int32_t)0x40);
	if (jnz())
		goto loc_48E404;
	ecx = (int32_t)(intptr_t)dword_5643F8; //mov
	edx = (int32_t)(intptr_t)dword_56441C; //mov
	ebx = eax; //mov
	eax = ebp; //mov
	call(to32i(esp+8));
	esi = eax; //mov
loc_48E42B:
	test(esi, esi);
	if (jnz())
		goto loc_48E3DD;
loc_48E42F:
	xor_(eax, eax);
	add(esp, (int32_t)0xC);
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_48E438()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x88);
	ebp = eax; //mov
	ecx = ebx; //mov
	cmp(to32i(eax+0xA0), (int32_t)0);
	if (jz())
		goto loc_48E454;
	esp -= 4; _sub_48E844(); esp += 4; //call
loc_48E454:
	edx = 0x9C4; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E4FF;
	ebx = 0xF; //mov
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	edx = ecx; //mov
	ecx = 0xEA616464; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	to32i(esp) = ecx; //mov
	ecx = 0x17; //mov
	esi = (int32_t)(intptr_t)(ebp+0x30); //lea
	ebx = 0x88; //mov
	edx = esp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = ebp; //mov
	ecx = 1; //mov
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E4FF;
	ecx = 4; //mov
	eax = (int32_t)(intptr_t)dword_56440C; //mov
	eax = to32i(eax); //mov
	eax = bswap_32(eax);
	neg(ecx);
	ecx = (int32_t)(intptr_t)(ecx*8+0x20); //lea
	shr(eax, cl);
	test(eax, eax);
	if (jle())
		goto loc_48E4FF;
	esi = (int32_t)(intptr_t)dword_5643F8; //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	test(eax, eax);
	if (jle())
		goto loc_48E4FB;
	eax = 1; //mov
loc_48E4D8:
	to32i(ebp+0x14) = 0; //mov
	to32i(ebp+0xA0) = eax; //mov
	to32i(ebp+0xA4) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x88);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48E4FB:
	xor_(eax, eax);
	goto loc_48E4D8;
loc_48E4FF:
	xor_(eax, eax);
	add(esp, (int32_t)0x88);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48E50C()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xB0);
	ebp = eax; //mov
	esi = edx; //mov
	to32i(esp+0xAC) = ebx; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E590;
	to32i(esp) = 0xEA726571; //mov
	test(esi, esi);
	if (jz())
		goto loc_48E58B;
loc_48E53A:
	edi = (int32_t)(intptr_t)(esp+4); //lea
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	ebx = 0xAC; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ebp+0x8C); //lea
	edx = esp; //mov
	eax = ebp; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E590;
	ecx = 0xD; //mov
	edi = to32i(esp+0xAC); //mov
	esi = (int32_t)(intptr_t)dword_56441C; //mov
	eax = 1; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	add(esp, (int32_t)0xB0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_48E58B:
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	goto loc_48E53A;
loc_48E590:
	xor_(eax, eax);
	add(esp, (int32_t)0xB0);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_48E5A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xB4);
	ebp = eax; //mov
	to32i(esp+0xAC) = edx; //mov
	esi = ebx; //mov
	to32i(esp+0xB0) = ecx; //mov
	cmp(to32i(eax+0xA0), (int32_t)0);
	if (jz())
		goto loc_48E5C9;
	esp -= 4; _sub_48E844(); esp += 4; //call
loc_48E5C9:
	edx = 0x9C4; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E6C3;
	edx = 0x40; //mov
	eax = (int32_t)(intptr_t)(esp+0x6C); //lea
	ebx = 0x10; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	edx = esi; //mov
	esp -= 4; _strncpy_(); esp += 4; //call
	cmp(to32i(dword_4DBB68), (int32_t)0);
	if (jz())
		goto loc_48E6A6;
	cmp(to32i(dword_4DBB64), (int32_t)0);
	if (jz())
		goto loc_48E69C;
	eax = 0xEA727461; //mov
loc_48E61A:
	to32i(esp) = eax; //mov
	ecx = 0xD; //mov
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	esi = to32i(esp+0xAC); //mov
	ebx = 0xAC; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = esp; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ebp+0x8C); //lea
	eax = ebp; //mov
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E6C3;
	cmp(to32i(dword_5643F4), (int32_t)0xEA646563);
	if (jnz())
		goto loc_48E6C3;
	esi = (int32_t)(intptr_t)dword_5643F8; //mov
	edi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	to32i(ebp+0xA0) = 1; //mov
	eax = to32i(ebp+0xA0); //mov
	to32i(ebp+0xA4) = eax; //mov
	eax = to32i(esp+0xB0); //mov
	to32i(ebp+0x14) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0xB4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_48E69C:
	eax = 0xEA6E7761; //mov
	goto loc_48E61A;
loc_48E6A6:
	cmp(to32i(dword_4DBB64), (int32_t)0);
	if (jz())
		goto loc_48E6B9;
	eax = 0xEA727464; //mov
	goto loc_48E61A;
loc_48E6B9:
	eax = 0xEA6E6577; //mov
	goto loc_48E61A;
loc_48E6C3:
	xor_(eax, eax);
	add(esp, (int32_t)0xB4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_48E6D0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xAC);
	ebp = eax; //mov
	esi = edx; //mov
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_48E6FB;
loc_48E6ED:
	xor_(eax, eax);
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E6FB:
	edx = 0xAC; //mov
	eax = esp; //mov
	ecx = 0xD; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	edx = 0xEA757064; //mov
	edi = (int32_t)(intptr_t)(esp+0x28); //lea
	to32i(esp) = edx; //mov
	ebx = 0xAC; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = ebp; //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(ebp+0x8C); //lea
	edx = esp; //mov
	ecx = 1; //mov
	movsd();
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E6ED;
	cmp(to32i(dword_5643F4), (int32_t)0xEA646563);
	if (jnz())
		goto loc_48E6ED;
	eax = 1; //mov
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_48E75C()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	ebp = eax; //mov
	to32i(esp+0x18) = edx; //mov
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jnz())
		goto loc_48E77B;
loc_48E770:
	xor_(eax, eax);
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E77B:
	edx = 0x9C4; //mov
	esp -= 4; _sub_48E1EC(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E770;
	edi = (int32_t)(intptr_t)(esp+4); //lea
	esi = (int32_t)(intptr_t)(ebp+0x1C); //lea
	ecx = to32i(esp+0x18); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	movsd();
	test(ecx, ecx);
	if (jnz())
		goto loc_48E7E6;
	to32i(esp) = 0xEA736874; //mov
loc_48E7A4:
	ecx = 1; //mov
	ebx = 0x18; //mov
	edx = esp; //mov
	eax = ebp; //mov
	esp -= 4; _sub_48DFD4(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_48E770;
	cmp(to32i(esp+0x18), (int32_t)0);
	if (jz())
		goto loc_48E7D8;
	to32i(ebp+0xA0) = 0; //mov
	eax = to32i(ebp+0xA0); //mov
	to32i(ebp+0xA4) = eax; //mov
loc_48E7D8:
	eax = 1; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_48E7E6:
	to32i(esp) = 0xEA646965; //mov
	goto loc_48E7A4;
}
