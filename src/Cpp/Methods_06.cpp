#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.h"
Fn(void) Game::_sub_44C840()
{
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xA4);
	edx = to32i(dword_512208); //mov
	cmp(edx, (int32_t)1);
	if (jnz())
		goto loc_44CA6C;
	eax = edx; //mov
loc_44C85B:
	push32(ecx);
	push32(ebx);
	ecx = 0x20; //mov
	edi = (int32_t)(intptr_t)(esp+8); //lea
	esi = (int32_t)(intptr_t)dword_44B194; //mov
	ebp = (uint8_t)to8i(byte_4DB322); //movzx
	ebx = eax; //mov
	xor_(edx, edx);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	dl = to8i(byte_4DB32A); //mov
	edi = (int32_t)(intptr_t)(esp+0x88); //lea
	esi = (int32_t)(intptr_t)dword_44B214; //mov
	and_(ebp, edx);
	xor_(ecx, ecx);
	movsd();
	movsd();
	movsd();
	movsb();
	cl = to8i(byte_4DB324); //mov
	edi = (int32_t)(intptr_t)(esp+0x98); //lea
	and_(ecx, edx);
	esi = (int32_t)(intptr_t)byte_44B221; //mov
	to32i(esp+0xA8) = ecx; //mov
	xor_(edx, edx);
	movsd();
	movsd();
	movsd();
	movsb();
	test(eax, eax);
	if (jl())
		goto loc_44C9F1;
	xor_(eax, eax);
loc_44C8BD:
	test(ebx, ebx);
	if (jz())
		goto loc_44CA73;
	esi = edx; //mov
loc_44C8C7:
	ecx = to32i(dword_511D08+esi*4); //mov
	to32i(dword_4D5C80+eax) = ebx; //mov
	to32i(dword_4D5C74+eax) = ecx; //mov
	to32i(dword_4D5C78+eax) = ecx; //mov
	byte_4D5C7C[eax] = 0xB; //mov
	esi = to32i(dword_4D5C74+eax); //mov
	edi = (int32_t)(intptr_t)(dword_4D5C84+eax); //lea
	esi = (int32_t)(intptr_t)(esi+0x9C); //lea
	xor_(ecx, ecx);
	movsd();
	movsd();
	movsd();
	to32i(dword_4D5C90+eax) = ecx; //mov
	to32i(dword_4D5C94+eax) = ecx; //mov
	edi = 0xFFFD0000; //mov
	esi = to32i(dword_4D5C74+eax); //mov
	to32i(dword_4D5C98+eax) = edi; //mov
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(dword_4D5C9C+eax); //lea
	esi = (int32_t)(intptr_t)(esi+0xC4); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(ecx, ecx);
	to32i(dword_4D5CC0+eax) = ecx; //mov
	esi = (int32_t)(intptr_t)(esp+8); //lea
	edi = (int32_t)(intptr_t)(dword_4D5CC8+eax); //lea
	to32i(dword_4D5CC4+eax) = ecx; //mov
	ecx = 0x20; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = 0xFFFFFFFF; //mov
	xor_(ecx, ecx);
	to32i(dword_4D5D48+eax) = edi; //mov
	esi = to32i(dword_5121F8); //mov
	to32i(dword_4D5D4C+eax) = ecx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_44CA7E;
	cmp(to32i(dword_512208), (int32_t)4);
	if (jz())
		goto loc_44CA7E;
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_44CA7E;
	to32i(dword_4D5D50+eax) = esi; //mov
loc_44C98E:
	add(eax, (int32_t)0x110);
	ecx = 0xFFFFFFFF; //mov
	xor_(esi, esi);
	to32i(dword_4D5C44+eax) = ecx; //mov
	to32i(dword_4D5C48+eax) = esi; //mov
	to32i(dword_4D5C4C+eax) = esi; //mov
	to32i(dword_4D5C50+eax) = esi; //mov
	to32i(dword_4D5C54+eax) = esi; //mov
	to32i(dword_4D5C58+eax) = esi; //mov
	to32i(dword_4D5C5C+eax) = esi; //mov
	to32i(dword_4D5C60+eax) = esi; //mov
	to32i(dword_4D5C64+eax) = esi; //mov
	to32i(dword_4D5C68+eax) = esi; //mov
	edi = 1; //mov
	to32i(dword_4D5C6C+eax) = esi; //mov
	add(edx, edi);
	to32i(dword_4D5C70+eax) = edi; //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_44C8BD;
loc_44C9F1:
	test(ebp, ebp);
	if (jz())
		goto loc_44C9FD;
	to8i(esp+0x8B) = 4; //mov
loc_44C9FD:
	cmp(to32i(esp+0xA8), (int32_t)0);
	if (jnz())
		goto loc_44CAA5;
loc_44CA0B:
	xor_(esi, esi);
	pop32(ebx);
	pop32(ecx);
loc_44CA0F:
	inc(esi);
	al = to8i(esp+esi+0x7F); //mov
	byte_5118D8[esi] = al; //mov
	al = to8i(esp+esi+0x8F); //mov
	byte_5118CB[esi] = al; //mov
	cmp(esi, (int32_t)0xD);
	if (jl())
		goto loc_44CA0F;
	edx = 0x1E; //mov
	eax = 3; //mov
	xor_(edi, edi);
	esp -= 4; _sub_449D80(); esp += 4; //call
	to32i(dword_4D5E94) = edi; //mov
	to32i(dword_4D5E98) = edi; //mov
	to32i(dword_4D5E9C) = edi; //mov
	to32i(dword_4D5EA0) = edi; //mov
	to32i(dword_4D5EA4) = edi; //mov
	to32i(dword_4D5EA8) = edi; //mov
	add(esp, (int32_t)0xA4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	return;
loc_44CA6C:
	xor_(eax, eax);
	goto loc_44C85B;
loc_44CA73:
	esi = to32i(dword_51220C); //mov
	goto loc_44C8C7;
loc_44CA7E:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44CA96;
	to32i(dword_4D5D50+eax) = 5; //mov
	goto loc_44C98E;
loc_44CA96:
	to32i(dword_4D5D50+eax) = 4; //mov
	goto loc_44C98E;
loc_44CAA5:
	test(ebp, ebp);
	if (jz())
		goto loc_44CAB6;
	to8i(esp+0x8F) = 8; //mov
	goto loc_44CA0B;
loc_44CAB6:
	to8i(esp+0x8B) = 8; //mov
	goto loc_44CA0B;
}
Fn(void) Game::_sub_44CB04()
{
	static const void *const off_44CAD0[] = {
		&&loc_44CC17,
		&&loc_44CC17,
		&&loc_44CC32,
		&&loc_44CC3B,
		&&loc_44CC47,
		&&loc_44CC53,
		&&loc_44CC5F,
		&&loc_44CC6B,
		&&loc_44CC77,
		&&loc_44CBBE,
		&&loc_44CBBE,
		&&loc_44CC83,
		&&loc_44CC8F,
	};
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = to32i(dword_4D5C80); //mov
	xor_(ecx, ecx);
	test(edx, edx);
	if (jl())
		goto loc_44CBD3;
	xor_(ebx, ebx);
loc_44CB1B:
	esi = to32i(dword_4D5C74+ebx); //mov
	test(to8i(esi+0x1F4), (int8_t)1);
	if (jz())
		goto loc_44CBAE;
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jnz())
		goto loc_44CBAE;
	cmp(to32i(dword_4D5D58+ebx), (int32_t)0);
	if (jnz())
		goto loc_44CBAE;
	eax = 1; //mov
	edx = to32i(dword_512208); //mov
	to32i(dword_4D5D58+ebx) = eax; //mov
	cmp(edx, eax);
	if (jz())
		goto loc_44CB6F;
	cmp(to8i(byte_4D5C7C), (int8_t)3);
	if (jg())
		goto loc_44CB6F;
	eax = to32i(dword_4D5C78+1); //mov
	sar(eax, (int32_t)0x18);
	to32i(dword_511FF0) = eax; //mov
loc_44CB6F:
	edx = 0xC; //mov
	eax = ecx; //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	edi = to32i(dword_4D5D54+ebx); //mov
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_44CB8D;
	eax = edi; //mov
	esp -= 4; _sub_440BC0(); esp += 4; //call
loc_44CB8D:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44CBD9;
	edx = 6; //mov
	eax = edx; //mov
	to32i(dword_4D5D50+ebx) = edx; //mov
loc_44CBA3:
	esp -= 4; _sub_440C30(); esp += 4; //call
	to32i(dword_4D5D54+ebx) = eax; //mov
loc_44CBAE:
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jle())
		goto loc_44CBE6;
	eax = ecx; //mov
	esp -= 4; _sub_44CCA0(); esp += 4; //call
loc_44CBBE:
	esi = to32i(dword_4D5C80); //mov
	inc(ecx);
	add(ebx, (int32_t)0x110);
	cmp(ecx, esi);
	if (jle())
		goto loc_44CB1B;
loc_44CBD3:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44CBD9:
	eax = 1; //mov
	to32i(dword_4D5D50+ebx) = eax; //mov
	goto loc_44CBA3;
loc_44CBE6:
	cmp(to32i(dword_5222D0), (int32_t)0);
	if (jnz())
		goto loc_44CC20;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_44CC20;
	cmp(to32i(esi+0x2E8), (int32_t)0);
	if (jnz())
		goto loc_44CC29;
	al = (int32_t)(intptr_t)byte_4D5C7C[ebx]; //mov
	cmp(al, (int8_t)0xC);
	if (ja())
		goto loc_44CBBE;
	and_(eax, (int32_t)0xFF);
	goto *off_44CAD0[eax];
loc_44CC17:
	eax = ecx; //mov
	esp -= 4; _sub_44EB20(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC20:
	eax = ecx; //mov
	esp -= 4; _sub_44E0A0(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC29:
	eax = ecx; //mov
	esp -= 4; _sub_44DF40(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC32:
	eax = ecx; //mov
	esp -= 4; _sub_44E490(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC3B:
	eax = ecx; //mov
	esp -= 4; _sub_44E820(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC47:
	eax = ecx; //mov
	esp -= 4; _sub_44E230(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC53:
	eax = ecx; //mov
	esp -= 4; _sub_44DC40(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC5F:
	eax = ecx; //mov
	esp -= 4; _sub_44CE50(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC6B:
	eax = ecx; //mov
	esp -= 4; _sub_44D5B0(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC77:
	eax = ecx; //mov
	esp -= 4; _sub_44D520(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC83:
	eax = ecx; //mov
	esp -= 4; _sub_44DA30(); esp += 4; //call
	goto loc_44CBBE;
loc_44CC8F:
	eax = ecx; //mov
	esp -= 4; _sub_44D750(); esp += 4; //call
	goto loc_44CBBE;
}
Fn(void) Game::_sub_44CCA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	ebx = eax; //mov
	edi = eax; //mov
	shl(edi, (int32_t)4);
	add(eax, edi);
	edi = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(eax, (int32_t)4);
	add(edi, eax);
	eax = to32i(dword_4D5C74+eax); //mov
	add(edi, (int32_t)0x10);
	ecx = (int32_t)(intptr_t)(eax+0x9C); //lea
	edx = edi; //mov
	esi = to32i(eax+0x14); //mov
	eax = ecx; //mov
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	cmp(eax, (int32_t)0x960000);
	if (jle())
		goto loc_44CCE8;
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44CCE8:
	eax = to32i(ecx); //mov
	sub(eax, to32i(edi));
	edx = 0xCCC; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(edi); //mov
	ebp = to32i(edi+4); //mov
	add(edx, eax);
	eax = to32i(ecx+4); //mov
	to32i(esp) = edx; //mov
	sub(eax, ebp);
	edx = 0xCCC; //mov
	add(eax, (int32_t)0x40000);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(edi+4); //mov
	add(edx, eax);
	to32i(esp+4) = edx; //mov
	eax = to32i(ecx+8); //mov
	edx = to32i(edi+8); //mov
	ecx = esi; //mov
	sub(eax, edx);
	edx = 0xCCC; //mov
	shl(esi, (int32_t)3);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(esi, ecx);
	edx = to32i(edi+8); //mov
	shl(esi, (int32_t)2);
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	to32i(esp+8) = edx; //mov
	edx = to32i(esp); //mov
	sub(edx, to32i(esi+eax));
	ebp = to32i(esi+eax+4); //mov
	to32i(esp+0xC) = edx; //mov
	edx = to32i(esp+4); //mov
	sub(edx, ebp);
	ecx = to32i(esi+eax+8); //mov
	to32i(esp+0x10) = edx; //mov
	edx = to32i(esp+8); //mov
	sub(edx, ecx);
	ecx = to32i(esi+eax+0xF); //mov
	sar(ecx, (int32_t)0x18);
	shl(ecx, (int32_t)9);
	to32i(esp+0x14) = edx; //mov
	to32i(esp+0x18) = ecx; //mov
	ecx = to32i(esi+eax+0x10); //mov
	eax = to32i(esi+eax+0x11); //mov
	edx = to32i(esp+0x18); //mov
	sar(eax, (int32_t)0x18);
	sar(ecx, (int32_t)0x18);
	shl(eax, (int32_t)9);
	shl(ecx, (int32_t)9);
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0xC); //mov
	to32i(esp+0x1C) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ecx, eax);
	eax = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	ecx = to32i(dword_5118A4); //mov
	add(ecx, esi);
	xor_(esi, esi);
	si = to16i(ecx+0x1A); //mov
	shl(esi, (int32_t)8);
	neg(esi);
	cmp(esi, eax);
	if (jge())
		goto loc_44CE0F;
	cx = to16i(ecx+0x1C); //mov
	and_(ecx, (int32_t)0xFFFF);
	shl(ecx, (int32_t)8);
	cmp(eax, ecx);
	if (jge())
		goto loc_44CE0F;
	esi = esp; //mov
	movsd();
	movsd();
	movsd();
loc_44CE0F:
	edi = ebx; //mov
	shl(edi, (int32_t)4);
	add(edi, ebx);
	shl(edi, (int32_t)4);
	xor_(ebx, ebx);
	to32i(dword_4D5CC0+edi) = ebx; //mov
	ebp = 1; //mov
	to32i(dword_4D5D74+edi) = ebx; //mov
	to32i(dword_4D5D78+edi) = ebp; //mov
	to32i(dword_4D5D68+edi) = ebx; //mov
	to32i(dword_4D5D64+edi) = ebp; //mov
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44CE50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	ebx = eax; //mov
	ecx = 8; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_44B154; //mov
	shl(eax, (int32_t)4);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	add(eax, ebx);
	ecx = 8; //mov
	edi = (int32_t)(intptr_t)(esp+0x20); //lea
	esi = (int32_t)(intptr_t)dword_44B174; //mov
	shl(eax, (int32_t)4);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edx = to32i(dword_540F2C); //mov
	esi = to32i(dword_4D5C74+eax); //mov
	xor_(edi, edi);
	test(edx, edx);
	if (jz())
		goto loc_44CEA0;
	cmp(to32i(dword_5227A8), (int32_t)0);
	if (jz())
		goto loc_44D2A4;
loc_44CEA0:
	cmp(to32i(dword_4D965C), (int32_t)0);
	if (jnz())
		goto loc_44D2A4;
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_44CEBD;
	inc(to32i(dword_4D5E94+ebx*4));
loc_44CEBD:
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	ecx = to32i(dword_4D5EA4+eax); //mov
	edx = to32i(dword_4D5E94+eax); //mov
	ebp = to32i(esp+ecx*4+0x20); //mov
	cmp(edx, ebp);
	if (jnz())
		goto loc_44CF98;
	xor_(edx, ebp);
	to32i(dword_4D5E94+eax) = edx; //mov
	eax = to32i(dword_4D5E9C+eax); //mov
	ecx = to32i(dword_5118A0); //mov
	inc(eax);
	cmp(eax, ecx);
	if (jl())
		goto loc_44CEF7;
	sub(eax, ecx);
loc_44CEF7:
	to32i(dword_4D5E9C+ebx*4) = eax; //mov
	eax = to32i(esi+0x14); //mov
	edx = to32i(dword_4D5E9C+ebx*4); //mov
	ecx = to32i(esi+0x39C); //mov
	sub(eax, edx);
	edx = to32i(dword_4D5EA4+ebx*4); //mov
	ebp = ecx; //mov
	sub(ebp, to32i(esp+edx*4));
	to32i(esp+0x54) = ebp; //mov
	cmp(eax, (int32_t)7);
	if (jle())
		goto loc_44D2AE;
loc_44CF29:
	edi = 1; //mov
loc_44CF2E:
	ebp = to32i(esp); //mov
	xor_(eax, eax);
	xor_(edx, edx);
	cmp(ecx, ebp);
	if (jle())
		goto loc_44CF48;
loc_44CF39:
	inc(edx);
	ebp = to32i(esp+eax+4); //mov
	add(eax, (int32_t)4);
	cmp(ecx, ebp);
	if (jg())
		goto loc_44CF39;
loc_44CF48:
	to32i(dword_4D5EA4+ebx*4) = edx; //mov
	sub(ecx, to32i(esp+edx*4));
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_44D332;
	cmp(ecx, (int32_t)0x30000);
	if (jge())
		goto loc_44D2F4;
	eax = to32i(esi+0x14); //mov
	ecx = to32i(dword_5118A0); //mov
	add(eax, (int32_t)3);
	cmp(eax, ecx);
	if (jl())
		goto loc_44CF79;
	sub(eax, ecx);
loc_44CF79:
	to32i(dword_4D5E9C+ebx*4) = eax; //mov
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, ebx);
	shl(eax, (int32_t)4);
	edx = to32i(dword_4D5CC4+eax); //mov
	neg(edx);
	to32i(dword_4D5CC4+eax) = edx; //mov
loc_44CF98:
	test(edi, edi);
	if (jz())
		goto loc_44CFB3;
	eax = (int32_t)(intptr_t)(ebx*4+0); //lea
	add(eax, ebx);
	cmp(to32i(dword_5227C0+eax*4), (int32_t)0);
	if (jnz())
		goto loc_44D36C;
loc_44CFB3:
	eax = to32i(dword_4D5E9C+ebx*4); //mov
	ecx = to32i(dword_5118A0); //mov
	inc(eax);
	cmp(eax, ecx);
	if (jl())
		goto loc_44D37D;
	ebp = eax; //mov
	sub(ebp, ecx);
loc_44CFCD:
	edx = to32i(dword_4D5E9C+ebx*4); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	to32i(esp+0x4C) = edx; //mov
	ecx = (int32_t)(intptr_t)(edx+eax); //lea
	eax = (int32_t)(intptr_t)(ebp*8+0); //lea
	add(eax, ebp);
	shl(eax, (int32_t)2);
	add(edx, eax);
	ebp = to32i(ecx); //mov
	to32i(esp+0x50) = edx; //mov
	edx = to32i(edx); //mov
	sub(edx, ebp);
	eax = edx; //mov
	ebp = to32i(dword_4D5EA4+ebx*4); //mov
	sar(edx, (int32_t)0x1F);
	edi = to32i(esp+ebp*4+0x20); //mov
	idiv32(edi);
	edx = to32i(esp+0x50); //mov
	to32i(esp+0x40) = eax; //mov
	edx = to32i(edx+4); //mov
	eax = to32i(ecx+4); //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edx = to32i(esp+0x50); //mov
	to32i(esp+0x44) = eax; //mov
	edx = to32i(edx+8); //mov
	eax = to32i(ecx+8); //mov
	sub(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	ebp = to32i(esp+0x40); //mov
	to32i(esp+0x48) = eax; //mov
	imul32(ebp, to32i(dword_4D5E94+ebx*4));
	edx = to32i(ecx); //mov
	edi = to32i(dword_4D5E94+ebx*4); //mov
	add(ebp, edx);
	edx = to32i(esp+0x44); //mov
	imul32(edx, edi);
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, ebx);
	shl(eax, (int32_t)4);
	to32i(dword_4D5C84+eax) = ebp; //mov
	ebp = to32i(ecx+4); //mov
	add(edx, ebp);
	to32i(dword_4D5C88+eax) = edx; //mov
	edx = to32i(esp+0x48); //mov
	imul32(edx, edi);
	ebp = to32i(ecx+8); //mov
	add(edx, ebp);
	to32i(dword_4D5C8C+eax) = edx; //mov
	edx = to32i(dword_4D5CD4+eax); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(esp+0x4C); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	ax = to16i(eax+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	esp -= 4; _sub_44DEF0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44D384;
loc_44D0C2:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, ebx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	cmp(to32i(eax+0xC0), (int32_t)0);
	if (jl())
		goto loc_44D3B2;
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ax = to16i(edx+eax*4+0x1C); //mov
	ecx = eax; //mov
	and_(ecx, (int32_t)0xFFFF);
	shl(ecx, (int32_t)8);
	sar(ecx, (int32_t)1);
loc_44D103:
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	edi = ebx; //mov
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	shl(edi, (int32_t)4);
	edx = to32i(edx+eax+0xF); //mov
	add(edi, ebx);
	sar(edx, (int32_t)0x18);
	eax = ecx; //mov
	shl(edx, (int32_t)9);
	shl(edi, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_4D5C84+edi), eax);
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edx = to32i(edx+eax*4+0x10); //mov
	sar(edx, (int32_t)0x18);
	eax = ecx; //mov
	shl(edx, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_4D5C88+edi), eax);
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	edx = to32i(edx+eax*4+0x11); //mov
	sar(edx, (int32_t)0x18);
	eax = ecx; //mov
	shl(edx, (int32_t)9);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(to32i(dword_4D5C8C+edi), eax);
loc_44D199:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	shl(edx, (int32_t)4);
	eax = to32i(dword_4D5C74+edx); //mov
	esi = to32i(dword_4D5C84+edx); //mov
	eax = to32i(eax+0x9C); //mov
	sub(eax, esi);
	test(eax, eax);
	if (jle())
		goto loc_44D3DD;
	ecx = eax; //mov
loc_44D1C2:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	shl(edx, (int32_t)4);
	eax = to32i(dword_4D5C74+edx); //mov
	edi = to32i(dword_4D5C8C+edx); //mov
	eax = to32i(eax+0xA4); //mov
	sub(eax, edi);
	test(eax, eax);
	if (jle())
		goto loc_44D3E6;
	edx = eax; //mov
loc_44D1EB:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, ebx);
	shl(eax, (int32_t)4);
	cmp(ecx, edx);
	if (jle())
		goto loc_44D3FD;
	edx = to32i(dword_4D5C74+eax); //mov
	edi = to32i(dword_4D5C8C+eax); //mov
	edx = to32i(edx+0xA4); //mov
	sub(edx, edi);
	test(edx, edx);
	if (jle())
		goto loc_44D3EF;
loc_44D219:
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	ecx = edx; //mov
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	shl(edx, (int32_t)4);
	eax = to32i(dword_4D5C74+edx); //mov
	ebp = to32i(dword_4D5C84+edx); //mov
	eax = to32i(eax+0x9C); //mov
	sub(eax, ebp);
	sar(ecx, (int32_t)2);
	test(eax, eax);
	if (jle())
		goto loc_44D3F6;
loc_44D245:
	edx = (int32_t)(intptr_t)(eax+ecx); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	cmp(eax, (int32_t)0x38000);
	if (jge())
		goto loc_44D448;
loc_44D260:
	edx = 0x50000; //mov
	sub(edx, eax);
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	add(eax, ebx);
	shl(eax, (int32_t)4);
	xor_(ebx, ebx);
	to32i(dword_4D5CC0+eax) = ebx; //mov
	edi = 1; //mov
	to32i(dword_4D5D74+eax) = ebx; //mov
	to32i(dword_4D5D78+eax) = edi; //mov
	to32i(dword_4D5D68+eax) = ebx; //mov
	ecx = to32i(dword_4D5C88+eax); //mov
	to32i(dword_4D5D64+eax) = edi; //mov
	add(ecx, edx);
	to32i(dword_4D5C88+eax) = ecx; //mov
loc_44D2A4:
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D2AE:
	cmp(eax, (int32_t)4);
	if (jle())
		goto loc_44D2C3;
	cmp(ebp, (int32_t)0x50000);
	if (jge())
		goto loc_44D2C3;
	test(ebp, ebp);
	if (jg())
		goto loc_44CF29;
loc_44D2C3:
	cmp(eax, (int32_t)0xFFFFFFFA);
	if (jge())
		goto loc_44D2D2;
loc_44D2C8:
	edi = 2; //mov
	goto loc_44CF2E;
loc_44D2D2:
	cmp(eax, (int32_t)0xFFFFFFFC);
	if (jge())
		goto loc_44D2E7;
	ebp = to32i(esp+0x54); //mov
	cmp(ebp, (int32_t)0xFFFB0000);
	if (jle())
		goto loc_44D2E7;
	test(ebp, ebp);
	if (jl())
		goto loc_44D2C8;
loc_44D2E7:
	test(edi, edi);
	if (jnz())
		goto loc_44CF2E;
	goto loc_44CF98;
loc_44D2F4:
	cmp(ecx, (int32_t)0xF0000);
	if (jge())
		goto loc_44D317;
	eax = to32i(esi+0x14); //mov
	ebp = to32i(dword_5118A0); //mov
	add(eax, (int32_t)5);
	cmp(eax, ebp);
	if (jl())
		goto loc_44CF79;
	sub(eax, ebp);
	goto loc_44CF79;
loc_44D317:
	eax = to32i(esi+0x14); //mov
	edx = to32i(dword_5118A0); //mov
	add(eax, (int32_t)7);
	cmp(eax, edx);
	if (jl())
		goto loc_44CF79;
	sub(eax, edx);
	goto loc_44CF79;
loc_44D332:
	cmp(ecx, (int32_t)0xFFF80000);
	if (jle())
		goto loc_44D353;
	eax = to32i(esi+0x14); //mov
	sub(eax, (int32_t)3);
	test(eax, eax);
	if (jge())
		goto loc_44CF79;
	add(eax, to32i(dword_5118A0));
	goto loc_44CF79;
loc_44D353:
	eax = to32i(esi+0x14); //mov
	sub(eax, (int32_t)5);
	test(eax, eax);
	if (jge())
		goto loc_44CF79;
	add(eax, to32i(dword_5118A0));
	goto loc_44CF79;
loc_44D36C:
	eax = ebx; //mov
	esp -= 4; _sub_470050(); esp += 4; //call
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D37D:
	ebp = eax; //mov
	goto loc_44CFCD;
loc_44D384:
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ax = to16i(edx+eax*4+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	esp -= 4; _sub_44DEF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44D0C2;
	goto loc_44D199;
loc_44D3B2:
	edx = to32i(esi+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ax = to16i(edx+eax*4+0x1A); //mov
	ecx = eax; //mov
	and_(ecx, (int32_t)0xFFFF);
	shl(ecx, (int32_t)8);
	sar(ecx, (int32_t)1);
	neg(ecx);
	goto loc_44D103;
loc_44D3DD:
	ecx = eax; //mov
	neg(ecx);
	goto loc_44D1C2;
loc_44D3E6:
	edx = eax; //mov
	neg(edx);
	goto loc_44D1EB;
loc_44D3EF:
	neg(edx);
	goto loc_44D219;
loc_44D3F6:
	neg(eax);
	goto loc_44D245;
loc_44D3FD:
	edx = to32i(dword_4D5C74+eax); //mov
	edx = to32i(edx+0x9C); //mov
	ebp = to32i(dword_4D5C84+eax); //mov
	eax = edx; //mov
	sub(eax, ebp);
	test(eax, eax);
	if (jle())
		goto loc_44D444;
loc_44D417:
	ecx = eax; //mov
	eax = ebx; //mov
	shl(eax, (int32_t)4);
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	shl(edx, (int32_t)4);
	eax = to32i(dword_4D5C74+edx); //mov
	esi = to32i(dword_4D5C8C+edx); //mov
	eax = to32i(eax+0xA4); //mov
	sub(eax, esi);
	sar(ecx, (int32_t)2);
	test(eax, eax);
	if (jle())
		goto loc_44D3F6;
	goto loc_44D245;
loc_44D444:
	neg(eax);
	goto loc_44D417;
loc_44D448:
	eax = 0x38000; //mov
	goto loc_44D260;
}
Fn(void) Game::_sub_44D460()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebp = to32i(dword_5118A0); //mov
	ebx = eax; //mov
	ecx = 8; //mov
	edi = esp; //mov
	shl(eax, (int32_t)4);
	esi = (int32_t)(intptr_t)dword_44B134; //mov
	add(eax, ebx);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	shl(eax, (int32_t)4);
	xor_(edx, edx);
	esi = to32i(dword_4D5C74+eax); //mov
	edi = to32i(esp+4); //mov
	and_(ebx, (int32_t)1);
	ecx = to32i(esi+0x39C); //mov
	xor_(eax, eax);
	cmp(ecx, edi);
	if (jle())
		goto loc_44D4B0;
loc_44D4A2:
	inc(edx);
	edi = to32i(esp+eax+8); //mov
	add(eax, (int32_t)4);
	cmp(ecx, edi);
	if (jg())
		goto loc_44D4A2;
loc_44D4B0:
	to32i(dword_4D5EA4+ebx*4) = edx; //mov
	sub(ecx, to32i(esp+edx*4));
	test(ecx, ecx);
	if (jl())
		goto loc_44D4F2;
	cmp(ecx, (int32_t)0x30000);
	if (jge())
		goto loc_44D500;
	eax = to32i(esi+0x14); //mov
	add(eax, (int32_t)3);
	cmp(eax, ebp);
	if (jl())
		goto loc_44D4D2;
loc_44D4D0:
	sub(eax, ebp);
loc_44D4D2:
	to32i(dword_4D5E9C+ebx*4) = eax; //mov
	xor_(ecx, ecx);
	to32i(dword_4D5E94+ebx*4) = ecx; //mov
	to32i(dword_5118A0) = ebp; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D4F2:
	eax = to32i(esi+0x14); //mov
	sub(eax, (int32_t)3);
	test(eax, eax);
	if (jge())
		goto loc_44D4D2;
	add(eax, ebp);
	goto loc_44D4D2;
loc_44D500:
	cmp(ecx, (int32_t)0x140000);
	if (jge())
		goto loc_44D514;
	eax = to32i(esi+0x14); //mov
	add(eax, (int32_t)5);
	cmp(eax, ebp);
	if (jge())
		goto loc_44D4D0;
	goto loc_44D4D2;
loc_44D514:
	eax = to32i(esi+0x14); //mov
	add(eax, (int32_t)7);
	cmp(eax, ebp);
	if (jge())
		goto loc_44D4D0;
	goto loc_44D4D2;
}
Fn(void) Game::_sub_44D520()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	sub(esp, (int32_t)0xC);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	edi = esp; //mov
	add(eax, edx);
	esi = (int32_t)(intptr_t)dword_44B128; //mov
	shl(eax, (int32_t)4);
	movsd();
	movsd();
	movsd();
	edx = to32i(dword_4D5C74+eax); //mov
	ecx = to32i(esp); //mov
	edx = to32i(edx+0x9C); //mov
	add(edx, ecx);
	to32i(dword_4D5C84+eax) = edx; //mov
	edx = to32i(dword_4D5C74+eax); //mov
	ebx = to32i(esp+4); //mov
	edx = to32i(edx+0xA0); //mov
	add(edx, ebx);
	to32i(dword_4D5C88+eax) = edx; //mov
	edx = to32i(dword_4D5C74+eax); //mov
	xor_(edi, edi);
	edx = to32i(edx+0xA4); //mov
	to32i(dword_4D5CC0+eax) = edi; //mov
	to32i(dword_4D5D74+eax) = edi; //mov
	esi = to32i(esp+8); //mov
	to32i(dword_4D5D68+eax) = edi; //mov
	add(edx, esi);
	to32i(dword_4D5D64+eax) = edi; //mov
	to32i(dword_4D5C8C+eax) = edx; //mov
	to32i(dword_4D5D78+eax) = 1; //mov
	add(esp, (int32_t)0xC);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44D5B0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	shl(ecx, (int32_t)4);
	esi = (int32_t)(intptr_t)dword_44B11C; //mov
	edx = to32i(dword_4D5C74+ecx); //mov
	movsd();
	movsd();
	movsd();
	cmp(to32i(edx+0x100), (int32_t)0xE666);
	if (jge())
		goto loc_44D672;
	cmp(to32i(dword_4D5D7C+ecx), (int32_t)0);
	if (jnz())
		goto loc_44D65E;
	cmp(to32i(edx+0x288), (int32_t)0);
	if (jle())
		goto loc_44D72F;
	edx = 1; //mov
loc_44D600:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	to32i(dword_4D5D6C+ecx) = edx; //mov
	ebx = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C84+ecx); //mov
	ebp = to32i(ebx+0x9C); //mov
	sub(edx, ebp);
	to32i(dword_4D5C90+ecx) = edx; //mov
	ebx = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C88+ecx); //mov
	esi = to32i(ebx+0xA0); //mov
	sub(edx, esi);
	to32i(dword_4D5C94+ecx) = edx; //mov
	ebx = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C8C+ecx); //mov
	edi = to32i(ebx+0xA4); //mov
	sub(edx, edi);
	to32i(dword_4D5C98+ecx) = edx; //mov
loc_44D65E:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	to32i(dword_4D5D7C+ecx) = 0x64; //mov
loc_44D672:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	edx = to32i(dword_4D5D7C+ecx); //mov
	test(edx, edx);
	if (jg())
		goto loc_44D736;
	cmp(to32i(dword_5128C8+eax*4), (int32_t)0);
	if (jz())
		goto loc_44D698;
	neg(to32i(esp+0x14));
loc_44D698:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	ebx = esp; //mov
	edx = to32i(dword_4D5C74+ecx); //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	add(edx, (int32_t)0xC4);
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+ecx); //mov
	esi = to32i(esp); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, esi);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edi = to32i(esp+4); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edi);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebx = 1; //mov
	eax = to32i(eax+0xA4); //mov
	to32i(dword_4D5D78+ecx) = ebx; //mov
	ebp = to32i(esp+8); //mov
	to32i(dword_4D5D68+ecx) = ebx; //mov
	add(eax, ebp);
	to32i(dword_4D5D64+ecx) = ebx; //mov
	to32i(dword_4D5C8C+ecx) = eax; //mov
	xor_(eax, eax);
	to32i(dword_4D5CC0+ecx) = eax; //mov
	to32i(dword_4D5D74+ecx) = eax; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D72F:
	xor_(edx, edx);
	goto loc_44D600;
loc_44D736:
	ebp = (int32_t)(intptr_t)(edx-1); //lea
	to32i(dword_4D5D7C+ecx) = ebp; //mov
	esp -= 4; _sub_44EC50(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44D750()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ebp = eax; //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	esi = (int32_t)(intptr_t)dword_4D5C74; //mov
	shl(ecx, (int32_t)4);
	add(esi, ecx);
	edx = to32i(dword_4D5D54+ecx); //mov
	add(esi, (int32_t)0x10);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44D906;
	eax = to32i(dword_512208); //mov
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_44D864;
	test(ebp, ebp);
	if (jnz())
		goto loc_44D84E;
loc_44D794:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(eax, ecx);
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(eax, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	to32i(dword_4D5C74+ecx) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_44D855;
	eax = 1; //mov
loc_44D7C1:
	edx = eax; //mov
	ecx = ebp; //mov
	shl(edx, (int32_t)4);
	shl(ecx, (int32_t)4);
	add(edx, eax);
	add(ecx, ebp);
	shl(edx, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C78+edx); //mov
	to32i(dword_4D5C78+ecx) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_44D85C;
	eax = 1; //mov
loc_44D7EA:
	ecx = ebp; //mov
	esi = eax; //mov
	shl(ecx, (int32_t)4);
	shl(esi, (int32_t)4);
	add(ecx, ebp);
	add(esi, eax);
	shl(ecx, (int32_t)4);
	shl(esi, (int32_t)4);
	edi = (int32_t)(intptr_t)(dword_4D5C84+ecx); //lea
	esi = (int32_t)(intptr_t)(dword_4D5C84+esi); //lea
	movsd();
	movsd();
	movsd();
	test(ebp, ebp);
	if (jnz())
		goto loc_44D860;
	eax = 1; //mov
loc_44D816:
	ecx = 9; //mov
	esi = ebp; //mov
	edx = eax; //mov
	shl(esi, (int32_t)4);
	shl(edx, (int32_t)4);
	add(esi, ebp);
	add(edx, eax);
	shl(esi, (int32_t)4);
	shl(edx, (int32_t)4);
	edi = (int32_t)(intptr_t)(dword_4D5C9C+esi); //lea
	esi = (int32_t)(intptr_t)(dword_4D5C9C+edx); //lea
	eax = ebp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_44B2E0(); esp += 4; //call
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D84E:
	xor_(eax, eax);
	goto loc_44D794;
loc_44D855:
	xor_(eax, eax);
	goto loc_44D7C1;
loc_44D85C:
	xor_(eax, eax);
	goto loc_44D7EA;
loc_44D860:
	xor_(eax, eax);
	goto loc_44D816;
loc_44D864:
	eax = esp; //mov
	ebx = 1; //mov
	edx = 2; //mov
	push32(eax);
	eax = to32i(dword_4D5D50+ecx); //mov
	ecx = (int32_t)(intptr_t)(esp+0x28); //lea
	esp -= 4; _sub_440970(); esp += 4; //call
loc_44D880:
	eax = ebp; //mov
	shl(ebp, (int32_t)4);
	add(ebp, eax);
	shl(ebp, (int32_t)4);
	ecx = to32i(dword_4D5C74+ebp); //mov
	edx = to32i(esp+0x24); //mov
	ecx = to32i(ecx+0x9C); //mov
	add(ecx, edx);
	to32i(esi) = ecx; //mov
	ecx = to32i(dword_4D5C74+ebp); //mov
	ebx = to32i(esp+0x28); //mov
	ecx = to32i(ecx+0xA0); //mov
	add(ecx, ebx);
	to32i(esi+4) = ecx; //mov
	ecx = to32i(dword_4D5C74+ebp); //mov
	edi = to32i(esp+0x2C); //mov
	ecx = to32i(ecx+0xA4); //mov
	add(ecx, edi);
	to32i(esi+8) = ecx; //mov
	ecx = 9; //mov
	esi = esp; //mov
	edi = (int32_t)(intptr_t)(dword_4D5C9C+ebp); //lea
	xor_(eax, eax);
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	to32i(dword_4D5CC0+ebp) = eax; //mov
	to32i(dword_4D5D74+ebp) = eax; //mov
	ebx = 1; //mov
	to32i(dword_4D5D78+ebp) = eax; //mov
	to32i(dword_4D5D68+ebp) = ebx; //mov
	to32i(dword_4D5D64+ebp) = ebx; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44D906:
	ebx = esp; //mov
	eax = edx; //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	esp -= 4; _sub_4408B0(); esp += 4; //call
	eax = to32i(dword_4D5D54+ecx); //mov
	esp -= 4; _sub_440890(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44D880;
	eax = to32i(dword_4D5D54+ecx); //mov
	ebx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_440BC0(); esp += 4; //call
	edi = to32i(dword_512208); //mov
	to32i(dword_4D5D54+ecx) = ebx; //mov
	cmp(edi, (int32_t)1);
	if (jnz())
		goto loc_44D864;
	test(ebp, ebp);
	if (jnz())
		goto loc_44DA0F;
	eax = edi; //mov
loc_44D955:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(eax, ecx);
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(eax, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	to32i(dword_4D5C74+ecx) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_44DA16;
	ecx = 1; //mov
loc_44D982:
	eax = ecx; //mov
	shl(ecx, (int32_t)4);
	add(eax, ecx);
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(eax, (int32_t)4);
	shl(ecx, (int32_t)4);
	eax = to32i(dword_4D5C78+eax); //mov
	to32i(dword_4D5C78+ecx) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_44DA1D;
	eax = 1; //mov
loc_44D9AB:
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(eax, ecx);
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(eax, (int32_t)4);
	shl(ecx, (int32_t)4);
	esi = (int32_t)(intptr_t)(dword_4D5C84+eax); //lea
	edi = (int32_t)(intptr_t)(dword_4D5C84+ecx); //lea
	movsd();
	movsd();
	movsd();
	test(ebp, ebp);
	if (jnz())
		goto loc_44DA21;
	eax = 1; //mov
loc_44D9D7:
	ecx = 9; //mov
	edi = ebp; //mov
	esi = eax; //mov
	shl(edi, (int32_t)4);
	shl(esi, (int32_t)4);
	add(edi, ebp);
	add(esi, eax);
	shl(edi, (int32_t)4);
	shl(esi, (int32_t)4);
	edi = (int32_t)(intptr_t)(dword_4D5C9C+edi); //lea
	esi = (int32_t)(intptr_t)(dword_4D5C9C+esi); //lea
	eax = ebp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_44B2E0(); esp += 4; //call
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44DA0F:
	xor_(eax, eax);
	goto loc_44D955;
loc_44DA16:
	xor_(ecx, ecx);
	goto loc_44D982;
loc_44DA1D:
	xor_(eax, eax);
	goto loc_44D9AB;
loc_44DA21:
	xor_(eax, eax);
	goto loc_44D9D7;
}
Fn(void) Game::_sub_44DA30()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x84);
	ebp = eax; //mov
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	shl(esi, (int32_t)4);
	cmp(to32i(dword_4D5D4C+esi), (int32_t)0);
	if (jz())
		goto loc_44DB9E;
loc_44DA54:
	esi = ebp; //mov
	shl(esi, (int32_t)4);
	add(esi, ebp);
	shl(esi, (int32_t)4);
	cmp(to32i(dword_4D5D54+esi), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44DA78;
	eax = to32i(dword_4D5D50+esi); //mov
	esp -= 4; _sub_440C30(); esp += 4; //call
	to32i(dword_4D5D54+esi) = eax; //mov
loc_44DA78:
	esi = ebp; //mov
	shl(esi, (int32_t)4);
	add(esi, ebp);
	ebx = (int32_t)(intptr_t)(esp+0x24); //lea
	shl(esi, (int32_t)4);
	edx = (int32_t)(intptr_t)(esp+0x6C); //lea
	eax = to32i(dword_4D5D54+esi); //mov
	esp -= 4; _sub_4408B0(); esp += 4; //call
	eax = to32i(dword_4D5D54+esi); //mov
	esp -= 4; _sub_440890(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44DBE1;
	push32(ecx);
	edi = to32i(dword_4D5D50+esi); //mov
	cmp(edi, (int32_t)5);
	if (jnz())
		goto loc_44DC15;
loc_44DAB8:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	ecx = 9; //mov
	esi = to32i(dword_4D5C74+eax); //mov
	edi = (int32_t)(intptr_t)(esp+4); //lea
	ebx = (int32_t)(intptr_t)(esp+0x4C); //lea
	esi = (int32_t)(intptr_t)(esi+0x118); //lea
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	esp -= 4; _sub_49E840(); esp += 4; //call
	ebx = (int32_t)(intptr_t)(esp+0x7C); //lea
	edx = (int32_t)(intptr_t)(esp+4); //lea
	eax = (int32_t)(intptr_t)(esp+0x70); //lea
	esp -= 4; _sub_49EAC8(); esp += 4; //call
loc_44DAFB:
	eax = ebp; //mov
	shl(ebp, (int32_t)4);
	add(ebp, eax);
	shl(ebp, (int32_t)4);
	eax = to32i(dword_4D5C74+ebp); //mov
	edx = to32i(esp+0x7C); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, edx);
	to32i(dword_4D5C84+ebp) = eax; //mov
	eax = to32i(dword_4D5C74+ebp); //mov
	ecx = to32i(esp+0x80); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, ecx);
	to32i(dword_4D5C88+ebp) = eax; //mov
	eax = to32i(dword_4D5C74+ebp); //mov
	ebx = to32i(esp+0x84); //mov
	eax = to32i(eax+0xA4); //mov
	esi = (int32_t)(intptr_t)(esp+0x7C); //lea
	add(eax, ebx);
	edi = (int32_t)(intptr_t)(dword_4D5C90+ebp); //lea
	to32i(dword_4D5C8C+ebp) = eax; //mov
	movsd();
	movsd();
	movsd();
	ecx = 9; //mov
	esi = (int32_t)(intptr_t)(esp+0x4C); //lea
	edi = (int32_t)(intptr_t)(dword_4D5C9C+ebp); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	xor_(esi, esi);
	to32i(dword_4D5CC0+ebp) = esi; //mov
	to32i(dword_4D5D74+ebp) = esi; //mov
	to32i(dword_4D5D78+ebp) = esi; //mov
	to32i(dword_4D5D68+ebp) = esi; //mov
	to32i(dword_4D5D64+ebp) = esi; //mov
	pop32(ecx);
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_44DB9E:
	eax = to32i(dword_4D5D50+esi); //mov
	esp -= 4; _sub_440C30(); esp += 4; //call
	to32i(dword_4D5D54+esi) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44DBD2;
	edi = to32i(dword_511FF0); //mov
	edx = edi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_44DBD2:
	to32i(dword_4D5D4C+esi) = 1; //mov
	goto loc_44DA54;
loc_44DBE1:
	eax = to32i(dword_4D5D54+esi); //mov
	ebx = 0xFFFFFFFF; //mov
	esp -= 4; _sub_440BC0(); esp += 4; //call
	to32i(dword_4D5D54+esi) = ebx; //mov
	esi = to32i(dword_511FF0); //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44B5B0(); esp += 4; //call
	add(esp, (int32_t)0x84);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_44DC15:
	cmp(edi, (int32_t)4);
	if (jz())
		goto loc_44DAB8;
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(esp+0x4C); //lea
	esi = (int32_t)(intptr_t)(esp+0x28); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	edi = (int32_t)(intptr_t)(esp+0x7C); //lea
	esi = (int32_t)(intptr_t)(esp+0x70); //lea
	movsd();
	movsd();
	movsd();
	goto loc_44DAFB;
}
Fn(void) Game::_sub_44DC40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x24);
	ebp = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	edx = to32i(dword_4D5CD4+eax); //mov
	ecx = to32i(dword_4D5C74+eax); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ebx = 1; //mov
	add(ecx, (int32_t)8);
	ax = to16i(edx+eax*4+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	esp -= 4; _sub_44DEF0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44DE8B;
loc_44DC8C:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	cmp(to32i(eax+0xC0), (int32_t)0);
	if (jl())
		goto loc_44DEB9;
	ebx = 1; //mov
loc_44DCAE:
	edx = esp; //mov
	eax = ecx; //mov
	esp -= 4; _sub_449B10(); esp += 4; //call
	edx = eax; //mov
	to32i(esp+0x1C) = eax; //mov
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	cmp(edx, to32i(dword_4D5D48+eax));
	if (jz())
		goto loc_44DCEF;
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(eax, ebp);
	cmp(to32i(dword_5227C0+eax*4), (int32_t)0);
	if (jz())
		goto loc_44DCEF;
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jz())
		goto loc_44DEC0;
loc_44DCEF:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	edi = to32i(esp+0x1C); //mov
	cmp(edi, to32i(dword_4D5D48+eax));
	if (jz())
		goto loc_44DD1A;
	edx = to32i(dword_4D5CC4+eax); //mov
	neg(edx);
	to32i(dword_4D5CC4+eax) = edx; //mov
	xor_(dword_4D5D80[eax], (int8_t)1);
loc_44DD1A:
	push32(esi);
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(ecx, (int32_t)4);
	esi = (int32_t)(intptr_t)(esp+4); //lea
	edi = (int32_t)(intptr_t)(dword_4D5C84+ecx); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(dword_4D5C78+ecx); //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	test(eax, eax);
	if (jle())
		goto loc_44DED0;
	eax = to32i(dword_4D5C78+ecx); //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_45EEB0(); esp += 4; //call
loc_44DD62:
	esi = eax; //mov
	cmp(to32i(dword_4EC648), (int32_t)1);
	if (jnz())
		goto loc_44DD72;
	esp -= 4; _sub_42A2A0(); esp += 4; //call
loc_44DD72:
	eax = (int32_t)(intptr_t)(esp+0x1C); //lea
	ecx = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	eax = ebp; //mov
	esp -= 4; _sub_42A270(); esp += 4; //call
	push32(0);
	push32(0);
	push32(0);
	ecx = to32i(esp+0x28); //mov
	ebx = to32i(esp+0x24); //mov
	push32(0x5A);
	edx = to32i(esp+0x24); //mov
	eax = to32i(esp+0x20); //mov
	esp -= 4; _sub_4808D0(); esp += 4; //call
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	cmp(to32i(dword_4D5D80+eax), (int32_t)0);
	if (jz())
		goto loc_44DE48;
	cmp(esi, (int32_t)0x60000);
	if (jle())
		goto loc_44DE48;
	edx = to32i(dword_4DAC0C); //mov
	imul32(edx, esi);
	ecx = 0x60000; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = to32i(dword_4DAC10); //mov
	imul32(edx, esi);
	to32i(dword_4DAC24) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	edx = 0x1592C; //mov
	to32i(esp+0x24) = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	fild(to32i(esp+0x24));
	fmul(to32f(flt_4CC48C));
	fld(to32f(flt_4D52A4));
	fmul_st(0, 1);
	fld(to32f(flt_4D52A8));
	fchs();
	fmulp_st(2, 0);
	ecx = eax; //mov
	to32i(dword_4DAC28) = eax; //mov
	neg(ecx);
	fxch_st(1);
	fmul(to64f(dbl_4CC494));
	to32i(dword_4DAC28) = ecx; //mov
	fxch_st(1);
	fstp(to32f(dword_4D5294));
	fstp(to32f(flt_4D5298));
loc_44DE48:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	xor_(ebx, ebx);
	to32i(dword_4D5CC0+eax) = ebx; //mov
	edi = 1; //mov
	to32i(dword_4D5D74+eax) = ebx; //mov
	to32i(dword_4D5D78+eax) = edi; //mov
	to32i(dword_4D5D68+eax) = ebx; //mov
	edx = to32i(esp+0x20); //mov
	to32i(dword_4D5D64+eax) = edi; //mov
	to32i(dword_4D5D48+eax) = edx; //mov
	pop32(esi);
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44DE8B:
	edx = to32i(ecx+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	ax = to16i(edx+eax*4+0x18); //mov
	and_(eax, (int32_t)0xFFFF);
	esp -= 4; _sub_44DEF0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_44DC8C;
	goto loc_44DCAE;
loc_44DEB9:
	xor_(ebx, ebx);
	goto loc_44DCAE;
loc_44DEC0:
	eax = ebp; //mov
	esp -= 4; _sub_470050(); esp += 4; //call
	add(esp, (int32_t)0x24);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44DED0:
	eax = to32i(dword_4D5C78+ecx); //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_45EEB0(); esp += 4; //call
	neg(eax);
	goto loc_44DD62;
}
Fn(void) Game::_sub_44DEF0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	dec(eax);
	ebx = edx; //mov
	and_(eax, edx);
	sub(ebx, eax);
	test(dx, dx);
	if (jz())
		goto loc_44DF24;
loc_44DF01:
	xor_(ecx, ecx);
	cx = dx; //mov
	xor_(edx, edx);
	dx = ax; //mov
	sub(ecx, edx);
	xor_(edx, edx);
	dx = bx; //mov
	cmp(ecx, edx);
	if (jnz())
		goto loc_44DF2C;
	ecx = eax; //mov
	edx = eax; //mov
	dec(ecx);
	add(ebx, ebx);
	and_(eax, ecx);
	test(dx, dx);
	if (jnz())
		goto loc_44DF01;
loc_44DF24:
	xor_(ecx, ecx);
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44DF2C:
	ecx = 1; //mov
	eax = ecx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44DF40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ebx = eax; //mov
	ecx = eax; //mov
	shl(ecx, (int32_t)4);
	add(ecx, eax);
	shl(ecx, (int32_t)4);
	esi = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(esi+0x2E8); //mov
	shl(edx, (int32_t)8);
	edi = 0x30; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	sub(eax, (int32_t)0x100);
	edx = 0x32; //mov
	to32i(dword_4D5D60+ecx) = eax; //mov
	to32i(dword_4D5D70+ecx) = edx; //mov
	test(to8i(esi+0x14), (int8_t)1);
	if (jz())
		goto loc_44E091;
	esi = 1; //mov
loc_44DF95:
	ecx = ebx; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebx);
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	shl(ecx, (int32_t)4);
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = to32i(dword_4D5D60+ecx); //mov
	esp -= 4; _sub_49EA20(); esp += 4; //call
	edx = to32i(esp+0x1C); //mov
	imul32(edx, esi);
	eax = 0x60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	to32i(esp) = eax; //mov
	eax = 0x60000; //mov
	ebx = 0x20000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	to32i(esp+4) = ebx; //mov
	edx = to32i(dword_4D5C74+ecx); //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = esp; //mov
	add(edx, (int32_t)0xC4);
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+ecx); //mov
	esi = to32i(esp+0xC); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, esi);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edi = to32i(esp+0x10); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edi);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebp = to32i(esp+0x14); //mov
	eax = to32i(eax+0xA4); //mov
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	add(eax, ebp);
	edi = (int32_t)(intptr_t)(dword_4D5C90+ecx); //lea
	to32i(dword_4D5C8C+ecx) = eax; //mov
	eax = 0x2A; //mov
	movsd();
	movsd();
	movsd();
	xor_(edx, edx);
	to32i(dword_4D5CC0+ecx) = eax; //mov
	to32i(dword_4D5D74+ecx) = edx; //mov
	esi = 1; //mov
	to32i(dword_4D5CC4+ecx) = edx; //mov
	to32i(dword_4D5D78+ecx) = esi; //mov
	to32i(dword_4D5D68+ecx) = esi; //mov
	to32i(dword_4D5D64+ecx) = esi; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44E091:
	esi = 0xFFFFFFFF; //mov
	goto loc_44DF95;
}
Fn(void) Game::_sub_44E0A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	cmp(to32i(dword_4D5EAC), (int32_t)0);
	if (jz())
		goto loc_44E0BB;
	cmp(to32i(dword_4D5EB0), (int32_t)0);
	if (jz())
		goto loc_44E0EF;
loc_44E0BB:
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	xor_(ebx, ebx);
	shl(esi, (int32_t)4);
	edi = to32i(dword_4D5EAC); //mov
	to32i(dword_4D5D5C+esi) = ebx; //mov
	test(edi, edi);
	if (jnz())
		goto loc_44E213;
	cmp(to32i(dword_4D5EB0), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_44E207;
	sub(to32i(dword_4D5D60+esi), (int32_t)6);
loc_44E0EF:
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	shl(esi, (int32_t)4);
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = to32i(dword_4D5D60+esi); //mov
	esp -= 4; _sub_49EA20(); esp += 4; //call
	edx = to32i(esp+0x1C); //mov
	eax = 0x60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	to32i(esp) = eax; //mov
	eax = 0x60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_4D5D60+esi); //mov
	ebx = 3; //mov
	add(edx, edx);
	to32i(esp+8) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
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
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	add(eax, (int32_t)0x20000);
	edx = to32i(dword_4D5C74+esi); //mov
	to32i(esp+4) = eax; //mov
	add(edx, (int32_t)0xC4);
	eax = esp; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+esi); //mov
	edi = to32i(esp+0xC); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, edi);
	to32i(dword_4D5C84+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	ebp = to32i(esp+0x10); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, ebp);
	to32i(dword_4D5C88+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	xor_(ecx, ecx);
	eax = to32i(eax+0xA4); //mov
	to32i(dword_4D5CC0+esi) = ecx; //mov
	to32i(dword_4D5D74+esi) = ecx; //mov
	ebp = 1; //mov
	to32i(dword_4D5CC4+esi) = ecx; //mov
	to32i(dword_4D5D78+esi) = ebp; //mov
	edx = to32i(esp+0x14); //mov
	to32i(dword_4D5D68+esi) = ebp; //mov
	add(eax, edx);
	to32i(dword_4D5D64+esi) = ebp; //mov
	to32i(dword_4D5C8C+esi) = eax; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44E207:
	add(to32i(dword_4D5D60+esi), (int32_t)6);
	goto loc_44E0EF;
loc_44E213:
	edx = to32i(dword_4D5EB0); //mov
	add(to32i(dword_4D5D60+esi), edx);
	goto loc_44E0EF;
}
Fn(void) Game::_sub_44E230()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	ecx = to32i(dword_4D5C74+edx); //mov
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jz())
		goto loc_44E25F;
	cmp(to32i(dword_5227A8), (int32_t)0);
	if (jz())
		goto loc_44E462;
loc_44E25F:
	cmp(to32i(dword_4D965C), (int32_t)0);
	if (jnz())
		goto loc_44E462;
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	ebx = to32i(dword_4D5C74+edx); //mov
	cmp(to32i(ebx+0x100), (int32_t)0xE666);
	if (jge())
		goto loc_44E319;
	cmp(to32i(dword_4D5D7C+edx), (int32_t)0);
	if (jnz())
		goto loc_44E305;
	cmp(to32i(ecx+0x288), (int32_t)0);
	if (jle())
		goto loc_44E46C;
	ebx = 1; //mov
loc_44E2A7:
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	shl(esi, (int32_t)4);
	to32i(dword_4D5D6C+esi) = ebx; //mov
	ebx = to32i(dword_4D5C74+esi); //mov
	edx = to32i(dword_4D5C84+esi); //mov
	ecx = to32i(ebx+0x9C); //mov
	sub(edx, ecx);
	to32i(dword_4D5C90+esi) = edx; //mov
	ebx = to32i(dword_4D5C74+esi); //mov
	edx = to32i(dword_4D5C88+esi); //mov
	edi = to32i(ebx+0xA0); //mov
	sub(edx, edi);
	to32i(dword_4D5C94+esi) = edx; //mov
	ecx = to32i(dword_4D5C74+esi); //mov
	edx = to32i(dword_4D5C8C+esi); //mov
	ebp = to32i(ecx+0xA4); //mov
	sub(edx, ebp);
	to32i(dword_4D5C98+esi) = edx; //mov
loc_44E305:
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	to32i(dword_4D5D7C+edx) = 0x64; //mov
loc_44E319:
	edx = eax; //mov
	shl(edx, (int32_t)4);
	add(edx, eax);
	shl(edx, (int32_t)4);
	ebx = to32i(dword_4D5D7C+edx); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_44E473;
	ebx = to32i(dword_4D5D5C+edx); //mov
	ecx = (int32_t)(intptr_t)(ebx+1); //lea
	to32i(dword_4D5D5C+edx) = ecx; //mov
	cmp(ebx, (int32_t)1);
	if (jle())
		goto loc_44E35A;
	edi = to32i(dword_4D5D60+edx); //mov
	xor_(esi, esi);
	inc(edi);
	to32i(dword_4D5D5C+edx) = esi; //mov
	to32i(dword_4D5D60+edx) = edi; //mov
loc_44E35A:
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	shl(esi, (int32_t)4);
	edx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = to32i(dword_4D5D60+esi); //mov
	esp -= 4; _sub_49EA20(); esp += 4; //call
	edx = to32i(esp+0x1C); //mov
	eax = 0x60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	to32i(esp+0xC) = eax; //mov
	eax = 0x60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_4D5D60+esi); //mov
	ebx = 3; //mov
	add(edx, edx);
	to32i(esp+0x14) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
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
	ebx = esp; //mov
	add(eax, (int32_t)0x20000);
	edx = to32i(dword_4D5C74+esi); //mov
	to32i(esp+0x10) = eax; //mov
	add(edx, (int32_t)0xC4);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+esi); //mov
	ebp = to32i(esp); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, ebp);
	to32i(dword_4D5C84+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	edx = to32i(esp+4); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edx);
	to32i(dword_4D5C88+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	xor_(ebx, ebx);
	eax = to32i(eax+0xA4); //mov
	to32i(dword_4D5CC0+esi) = ebx; //mov
	ebp = 1; //mov
	to32i(dword_4D5D74+esi) = ebx; //mov
	to32i(dword_4D5D78+esi) = ebp; //mov
	ecx = to32i(esp+8); //mov
	to32i(dword_4D5D68+esi) = ebp; //mov
	add(eax, ecx);
	to32i(dword_4D5D64+esi) = ebp; //mov
	to32i(dword_4D5C8C+esi) = eax; //mov
loc_44E462:
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44E46C:
	xor_(ebx, ebx);
	goto loc_44E2A7;
loc_44E473:
	ecx = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(dword_4D5D7C+edx) = ecx; //mov
	esp -= 4; _sub_44EC50(); esp += 4; //call
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44E490()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	ebp = eax; //mov
	edx = 0x3333; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)dword_44B110; //mov
	shl(eax, (int32_t)4);
	ebx = to32i(dword_540F2C); //mov
	add(eax, ebp);
	to32i(esp+0x24) = edx; //mov
	shl(eax, (int32_t)4);
	movsd();
	movsd();
	movsd();
	ecx = to32i(dword_4D5C74+eax); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_44E4D5;
	cmp(to32i(dword_5227A8), (int32_t)0);
	if (jz())
		goto loc_44E72D;
loc_44E4D5:
	edi = to32i(dword_4D965C); //mov
	test(edi, edi);
	if (jnz())
		goto loc_44E72D;
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5CC0+eax) = 0x2A; //mov
	esi = 1; //mov
	to32i(dword_4D5D74+eax) = edi; //mov
	to32i(dword_4D5D78+eax) = esi; //mov
	to32i(dword_4D5D68+eax) = esi; //mov
	edx = to32i(dword_4D5C74+eax); //mov
	to32i(dword_4D5D64+eax) = esi; //mov
	cmp(to32i(edx+0x100), (int32_t)0xE666);
	if (jge())
		goto loc_44E565;
	cmp(to32i(dword_4D5D7C+eax), (int32_t)0);
	if (jnz())
		goto loc_44E551;
	cmp(to32i(ecx+0x288), (int32_t)0);
	if (jle())
		goto loc_44E737;
	edx = 1; //mov
loc_44E541:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5D6C+eax) = edx; //mov
loc_44E551:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5D7C+eax) = 0x64; //mov
loc_44E565:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	ebx = to32i(dword_4D5D7C+eax); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_44E73E;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jl())
		goto loc_44E5AE;
	eax = to32i(ecx+0x10C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(to32i(esp+0x10), eax);
	eax = to32i(ecx+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(to32i(esp+0x14), eax);
loc_44E5AE:
	ebx = to32i(ecx+0x2B0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44E758;
	eax = ebx; //mov
loc_44E5BE:
	esi = to32i(ecx+0x2B8); //mov
	test(esi, esi);
	if (jle())
		goto loc_44E761;
	edx = esi; //mov
loc_44E5CE:
	cmp(eax, edx);
	if (jle())
		goto loc_44E77C;
	ebx = to32i(ecx+0x2B8); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44E76A;
	eax = ebx; //mov
loc_44E5E6:
	esi = to32i(ecx+0x2B0); //mov
	sar(eax, (int32_t)2);
	test(esi, esi);
	if (jle())
		goto loc_44E773;
	edx = esi; //mov
loc_44E5F9:
	add(edx, eax);
	ecx = 0x14; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	cmp(eax, (int32_t)0x60000);
	if (jle())
		goto loc_44E613;
	eax = 0x60000; //mov
loc_44E613:
	edi = to32i(esp+0x14); //mov
	ecx = ebp; //mov
	sub(edi, eax);
	shl(ecx, (int32_t)4);
	to32i(esp+0x14) = edi; //mov
	add(ecx, ebp);
	eax = to32i(dword_5128C8+ebp*4); //mov
	shl(ecx, (int32_t)4);
	test(eax, eax);
	if (jnz())
		goto loc_44E7A0;
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = to32i(dword_4D5C74+ecx); //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	add(edx, (int32_t)0xC4);
	edi = esp; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	esi = (int32_t)(intptr_t)(dword_4D5C90+ecx); //lea
	edx = to32i(dword_4D5D70+ecx); //mov
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jle())
		goto loc_44E676;
	ebx = 0x1999; //mov
	esi = (int32_t)(intptr_t)(edx-1); //lea
	to32i(esp+0x24) = ebx; //mov
	to32i(dword_4D5D70+ecx) = esi; //mov
loc_44E676:
	eax = to32i(esp+0x18); //mov
	edi = to32i(esp); //mov
	edx = to32i(esp+0x24); //mov
	ecx = ebp; //mov
	sub(eax, edi);
	shl(ecx, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, ebp);
	add(eax, edi);
	shl(ecx, (int32_t)4);
	ebx = to32i(esp+4); //mov
	to32i(dword_4D5C90+ecx) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x24); //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	edi = to32i(esp+8); //mov
	to32i(dword_4D5C94+ecx) = eax; //mov
	eax = to32i(esp+0x20); //mov
	edx = to32i(esp+0x24); //mov
	sub(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	to32i(dword_4D5C98+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C90+ecx); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, edx);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebx = to32i(dword_4D5C94+ecx); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, ebx);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	esi = to32i(dword_4D5C98+ecx); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, esi);
	to32i(dword_4D5C8C+ecx) = eax; //mov
loc_44E72D:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44E737:
	xor_(edx, edx);
	goto loc_44E541;
loc_44E73E:
	esi = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(dword_4D5D7C+eax) = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44EC50(); esp += 4; //call
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44E758:
	eax = ebx; //mov
	neg(eax);
	goto loc_44E5BE;
loc_44E761:
	edx = esi; //mov
	neg(edx);
	goto loc_44E5CE;
loc_44E76A:
	eax = ebx; //mov
	neg(eax);
	goto loc_44E5E6;
loc_44E773:
	edx = esi; //mov
loc_44E775:
	neg(edx);
	goto loc_44E5F9;
loc_44E77C:
	edi = to32i(ecx+0x2B0); //mov
	test(edi, edi);
	if (jle())
		goto loc_44E79A;
	eax = edi; //mov
loc_44E788:
	edx = to32i(ecx+0x2B8); //mov
	sar(eax, (int32_t)2);
	test(edx, edx);
	if (jle())
		goto loc_44E775;
	goto loc_44E5F9;
loc_44E79A:
	eax = edi; //mov
	neg(eax);
	goto loc_44E788;
loc_44E7A0:
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = to32i(dword_4D5C74+ecx); //mov
	neg(edi);
	add(edx, (int32_t)0xC4);
	to32i(esp+0x14) = edi; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+ecx); //mov
	ebp = to32i(esp+0x18); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, ebp);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(esp+0x1C); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edx);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebx = to32i(esp+0x20); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, ebx);
	to32i(dword_4D5C8C+ecx) = eax; //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44E820()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	ebp = eax; //mov
	edx = 0x1999; //mov
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)dword_44B104; //mov
	shl(eax, (int32_t)4);
	ebx = to32i(dword_540F2C); //mov
	add(eax, ebp);
	to32i(esp+0x24) = edx; //mov
	shl(eax, (int32_t)4);
	movsd();
	movsd();
	movsd();
	ecx = to32i(dword_4D5C74+eax); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_44E865;
	cmp(to32i(dword_5227A8), (int32_t)0);
	if (jz())
		goto loc_44EA78;
loc_44E865:
	edi = to32i(dword_4D965C); //mov
	test(edi, edi);
	if (jnz())
		goto loc_44EA78;
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5CC0+eax) = 0x2A; //mov
	esi = 1; //mov
	to32i(dword_4D5D74+eax) = edi; //mov
	to32i(dword_4D5D78+eax) = esi; //mov
	to32i(dword_4D5D68+eax) = esi; //mov
	edx = to32i(dword_4D5C74+eax); //mov
	to32i(dword_4D5D64+eax) = esi; //mov
	cmp(to32i(edx+0x100), (int32_t)0xE666);
	if (jge())
		goto loc_44E8F5;
	cmp(to32i(dword_4D5D7C+eax), (int32_t)0);
	if (jnz())
		goto loc_44E8E1;
	cmp(to32i(ecx+0x288), (int32_t)0);
	if (jle())
		goto loc_44EA82;
	edx = 1; //mov
loc_44E8D1:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5D6C+eax) = edx; //mov
loc_44E8E1:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	to32i(dword_4D5D7C+eax) = 0x64; //mov
loc_44E8F5:
	eax = ebp; //mov
	shl(eax, (int32_t)4);
	add(eax, ebp);
	shl(eax, (int32_t)4);
	ebx = to32i(dword_4D5D7C+eax); //mov
	test(ebx, ebx);
	if (jg())
		goto loc_44EA89;
	eax = to32i(ecx+0x21C); //mov
	esi = to32i(eax); //mov
	cmp(esi, (int32_t)9);
	if (jle())
		goto loc_44EAA3;
	eax = 9; //mov
loc_44E923:
	edi = to32i(esp+0x10); //mov
	eax = to32i(dword_4D5EB4+eax*4); //mov
	add(edi, eax);
	to32i(esp+0x10) = edi; //mov
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jl())
		goto loc_44E968;
	eax = to32i(ecx+0x10C); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = (int32_t)(intptr_t)(edi+eax); //lea
	to32i(esp+0x10) = ebx; //mov
	eax = to32i(ecx+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(to32i(esp+0x14), eax);
loc_44E968:
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	edi = to32i(dword_5128C8+ebp*4); //mov
	shl(ecx, (int32_t)4);
	test(edi, edi);
	if (jnz())
		goto loc_44EAAA;
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = to32i(dword_4D5C74+ecx); //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	add(edx, (int32_t)0xC4);
	edi = esp; //mov
	esp -= 4; _sub_480720(); esp += 4; //call
	esi = (int32_t)(intptr_t)(dword_4D5C90+ecx); //lea
	eax = to32i(dword_4D5D70+ecx); //mov
	movsd();
	movsd();
	movsd();
	test(eax, eax);
	if (jle())
		goto loc_44E9C1;
	edx = 0x1999; //mov
	ebx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(esp+0x24) = edx; //mov
	to32i(dword_4D5D70+ecx) = ebx; //mov
loc_44E9C1:
	eax = to32i(esp+0x18); //mov
	esi = to32i(esp); //mov
	edx = to32i(esp+0x24); //mov
	ecx = ebp; //mov
	sub(eax, esi);
	shl(ecx, (int32_t)4);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, ebp);
	add(eax, esi);
	shl(ecx, (int32_t)4);
	ebp = to32i(esp+4); //mov
	to32i(dword_4D5C90+ecx) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	edx = to32i(esp+0x24); //mov
	sub(eax, ebp);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebp);
	ebx = to32i(esp+8); //mov
	to32i(dword_4D5C94+ecx) = eax; //mov
	eax = to32i(esp+0x20); //mov
	edx = to32i(esp+0x24); //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	to32i(dword_4D5C98+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edi = to32i(dword_4D5C90+ecx); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, edi);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebp = to32i(dword_4D5C94+ecx); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, ebp);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C98+ecx); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, edx);
	to32i(dword_4D5C8C+ecx) = eax; //mov
loc_44EA78:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44EA82:
	xor_(edx, edx);
	goto loc_44E8D1;
loc_44EA89:
	edx = (int32_t)(intptr_t)(ebx-1); //lea
	to32i(dword_4D5D7C+eax) = edx; //mov
	eax = ebp; //mov
	esp -= 4; _sub_44EC50(); esp += 4; //call
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44EAA3:
	eax = esi; //mov
	goto loc_44E923;
loc_44EAAA:
	ebx = to32i(esp+0x14); //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = to32i(dword_4D5C74+ecx); //mov
	neg(ebx);
	add(edx, (int32_t)0xC4);
	to32i(esp+0x14) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+ecx); //mov
	esi = to32i(esp+0x18); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, esi);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edi = to32i(esp+0x1C); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edi);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebp = to32i(esp+0x20); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, ebp);
	to32i(dword_4D5C8C+ecx) = eax; //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44EB20()
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
	esi = (int32_t)(intptr_t)dword_44B0F8; //mov
	movsd();
	movsd();
	movsd();
	esi = eax; //mov
	shl(esi, (int32_t)4);
	add(esi, eax);
	shl(esi, (int32_t)4);
	edx = to32i(dword_4D5C78+esi); //mov
	eax = to32i(esp+4); //mov
	edx = to32i(edx+0x100); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_5128C8+ebp*4); //mov
	to32i(esp+4) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_44EB6C;
	neg(to32i(esp+8));
loc_44EB6C:
	esi = ebp; //mov
	shl(esi, (int32_t)4);
	add(esi, ebp);
	shl(esi, (int32_t)4);
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = to32i(dword_4D5C74+esi); //mov
	eax = esp; //mov
	add(edx, (int32_t)0xC4);
	esp -= 4; _sub_480720(); esp += 4; //call
	eax = to32i(dword_4D5C74+esi); //mov
	ebx = to32i(esp+0xC); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, ebx);
	to32i(dword_4D5C84+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	edi = to32i(esp+0x10); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edi);
	to32i(dword_4D5C88+esi) = eax; //mov
	eax = to32i(dword_4D5C74+esi); //mov
	edx = to32i(esp+0x14); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, edx);
	ecx = to32i(dword_5128C8+ebp*4); //mov
	to32i(dword_4D5C8C+esi) = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_44EC3C;
	eax = to32i(dword_4D5C74+esi); //mov
	ecx = 9; //mov
	edi = (int32_t)(intptr_t)(dword_4D5C9C+esi); //lea
	esi = (int32_t)(intptr_t)(eax+0xC4); //lea
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
loc_44EBF9:
	esi = ebp; //mov
	shl(esi, (int32_t)4);
	add(esi, ebp);
	ebx = 0xFFFFFC72; //mov
	shl(esi, (int32_t)4);
	edi = 2; //mov
	to32i(dword_4D5CC0+esi) = ebx; //mov
	xor_(ebp, ebp);
	to32i(dword_4D5D74+esi) = edi; //mov
	eax = 1; //mov
	to32i(dword_4D5D78+esi) = ebp; //mov
	to32i(dword_4D5D68+esi) = eax; //mov
	to32i(dword_4D5D64+esi) = ebp; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44EC3C:
	edx = (int32_t)(intptr_t)dword_4D5C74; //mov
	add(edx, esi);
	eax = ebp; //mov
	add(edx, (int32_t)0x28);
	esp -= 4; _sub_44EE20(); esp += 4; //call
	goto loc_44EBF9;
}
Fn(void) Game::_sub_44EC50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	ebp = eax; //mov
	ecx = eax; //mov
	edi = esp; //mov
	shl(ecx, (int32_t)4);
	esi = (int32_t)(intptr_t)dword_44B0E0; //mov
	add(ecx, eax);
	edx = to32i(dword_512228); //mov
	shl(ecx, (int32_t)4);
	movsd();
	movsd();
	movsd();
	eax = to32i(dword_4D5C74+ecx); //mov
	ecx = to32i(dword_4D5D6C+ecx); //mov
	to32i(esp+0x24) = eax; //mov
	xor_(ecx, edx);
	if (jz())
		goto loc_44EC8D;
	neg(to32i(esp+8));
loc_44EC8D:
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(ecx, (int32_t)4);
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = to32i(dword_4D5C74+ecx); //mov
	eax = esp; //mov
	add(edx, (int32_t)0x118);
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_480720(); esp += 4; //call
	esi = (int32_t)(intptr_t)(dword_4D5C90+ecx); //lea
	movsd();
	movsd();
	movsd();
	eax = to32i(esp+0x18); //mov
	ebx = to32i(esp+0xC); //mov
	edx = 0x51E; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	edi = to32i(esp+0x10); //mov
	to32i(dword_4D5C90+ecx) = eax; //mov
	eax = to32i(esp+0x1C); //mov
	edx = 0x51E; //mov
	sub(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	ebx = to32i(esp+0x14); //mov
	to32i(dword_4D5C94+ecx) = eax; //mov
	eax = to32i(esp+0x20); //mov
	edx = 0x51E; //mov
	sub(eax, ebx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	to32i(dword_4D5C98+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edi = to32i(dword_4D5C90+ecx); //mov
	eax = to32i(eax+0x9C); //mov
	add(eax, edi);
	to32i(dword_4D5C84+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	edx = to32i(dword_4D5C94+ecx); //mov
	eax = to32i(eax+0xA0); //mov
	add(eax, edx);
	to32i(dword_4D5C88+ecx) = eax; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	ebx = to32i(dword_4D5C98+ecx); //mov
	eax = to32i(eax+0xA4); //mov
	add(eax, ebx);
	esi = to32i(dword_4D5D6C+ecx); //mov
	to32i(dword_4D5C8C+ecx) = eax; //mov
	test(esi, esi);
	if (jz())
		goto loc_44EDC2;
	eax = to32i(esp+0x24); //mov
	edi = to32i(eax+0x288); //mov
	test(edi, edi);
	if (jnz())
		goto loc_44EDC2;
	eax = to32i(dword_4D5C74+ecx); //mov
	eax = to32i(eax+0xDC); //mov
	shl(eax, (int32_t)3);
	neg(eax);
	to32i(dword_4D5C90+ecx) = eax; //mov
	to32i(dword_4D5C94+ecx) = 0x10000; //mov
	eax = to32i(dword_4D5C74+ecx); //mov
	eax = to32i(eax+0xE4); //mov
	shl(eax, (int32_t)3);
	to32i(dword_4D5D7C+ecx) = edi; //mov
	neg(eax);
	to32i(dword_4D5C98+ecx) = eax; //mov
loc_44EDC2:
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	shl(ecx, (int32_t)4);
	cmp(to32i(dword_4D5D7C+ecx), (int32_t)0);
	if (jz())
		goto loc_44EE13;
loc_44EDD5:
	ecx = ebp; //mov
	shl(ecx, (int32_t)4);
	add(ecx, ebp);
	edi = 0x2A; //mov
	shl(ecx, (int32_t)4);
	xor_(ebp, ebp);
	to32i(dword_4D5CC0+ecx) = edi; //mov
	eax = 1; //mov
	to32i(dword_4D5D74+ecx) = ebp; //mov
	to32i(dword_4D5D78+ecx) = eax; //mov
	to32i(dword_4D5D68+ecx) = eax; //mov
	to32i(dword_4D5D64+ecx) = eax; //mov
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44EE13:
	to32i(dword_4D5D70+ecx) = 0x32; //mov
	goto loc_44EDD5;
}
Fn(void) Game::_sub_44EE20()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	eax = to32i(dword_4D5C74+eax); //mov
	ecx = to32i(eax+0xC4); //mov
	to32i(edx) = ecx; //mov
	neg(ecx);
	to32i(edx) = ecx; //mov
	ecx = to32i(eax+0xC8); //mov
	ebx = ecx; //mov
	to32i(edx+4) = ecx; //mov
	neg(ebx);
	to32i(edx+4) = ebx; //mov
	ecx = to32i(eax+0xCC); //mov
	esi = ecx; //mov
	to32i(edx+8) = ecx; //mov
	neg(esi);
	to32i(edx+8) = esi; //mov
	ecx = to32i(eax+0xD0); //mov
	to32i(edx+0xC) = ecx; //mov
	ecx = to32i(eax+0xD4); //mov
	to32i(edx+0x10) = ecx; //mov
	ecx = to32i(eax+0xD8); //mov
	to32i(edx+0x14) = ecx; //mov
	ecx = to32i(eax+0xDC); //mov
	edi = ecx; //mov
	to32i(edx+0x18) = ecx; //mov
	neg(edi);
	to32i(edx+0x18) = edi; //mov
	ecx = to32i(eax+0xE0); //mov
	ebp = ecx; //mov
	to32i(edx+0x1C) = ecx; //mov
	neg(ebp);
	to32i(edx+0x1C) = ebp; //mov
	eax = to32i(eax+0xE4); //mov
	to32i(edx+0x20) = eax; //mov
	neg(eax);
	to32i(edx+0x20) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44EEC0()
{
	cmp(edx, (int32_t)1);
	if (jnb())
		goto loc_44EECE;
	test(edx, edx);
	if (jz())
		goto loc_44F010;
locret_44EECD:
	return;
loc_44EECE:
	if (jbe())
		goto loc_44EF60;
	cmp(edx, (int32_t)2);
	if (jnz())
		goto locret_44EECD;
	goto loc_44EEE0;
loc_44EEE0:
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_480730(); esp += 4; //call
	edx = to32i(edx+4); //mov
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	cmp(byte_4D5C7C[eax], (int8_t)5);
	if (jz())
		goto loc_44EF00;
	pop32(edx);
	return;
loc_44EF00:
	fld(to32f(byte_5118C8));
	fld(to32f(flt_5118C4));
	fld(to32f(flt_5118B8));
	fld(to32f(flt_5118B4));
	eax = to32i(dword_5118AC); //mov
	fxch_st(3);
	fstp(to32f(dword_4D5294));
	to32i(dword_4DAC24) = eax; //mov
	eax = to32i(dword_5118B0); //mov
	fxch_st(1);
	fstp(to32f(flt_4D5298));
	to32i(dword_4DAC28) = eax; //mov
	eax = to32i(dword_5118C0); //mov
	fstp(to32f(flt_4D529C));
	to32i(dword_4DAC1C) = eax; //mov
	eax = to32i(dword_5118BC); //mov
	fstp(to32f(flt_4D52A0));
	to32i(dword_4DAC20) = eax; //mov
	pop32(edx);
	return;
loc_44EF60:
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	ecx = to32i(eax+4); //mov
	eax = ecx; //mov
	shl(eax, (int32_t)4);
	add(eax, ecx);
	shl(eax, (int32_t)4);
	bl = (int32_t)(intptr_t)byte_4D5C7C[eax]; //mov
	cmp(bl, (int8_t)5);
	if (jz())
		goto loc_44EF81;
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44EF81:
	fld(to32f(dword_4D5294));
	fld(to32f(flt_4D5298));
	fld(to32f(flt_4D529C));
	fld(to32f(flt_4D52A0));
	bh = 9; //mov
	ecx = to32i(dword_4DAC24); //mov
	fxch_st(3);
	fstp(to32f(byte_5118C8));
	fxch_st(1);
	fstp(to32f(flt_5118C4));
	fstp(to32f(flt_5118B8));
	to32i(dword_5118AC) = ecx; //mov
	ecx = to32i(dword_4DAC28); //mov
	fstp(to32f(flt_5118B4));
	to32i(dword_5118B0) = ecx; //mov
	ecx = to32i(dword_4DAC1C); //mov
	byte_4D5C7C[eax] = bh; //mov
	to32i(dword_5118C0) = ecx; //mov
	ecx = to32i(dword_4DAC20); //mov
	eax = edx; //mov
	to32i(dword_5118BC) = ecx; //mov
	esp -= 4; _sub_480730(); esp += 4; //call
	edx = to32i(edx+4); //mov
	eax = edx; //mov
	shl(eax, (int32_t)4);
	add(eax, edx);
	shl(eax, (int32_t)4);
	byte_4D5C7C[eax] = bl; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F010:
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(eax+8); //lea
	ebx = to32i(eax); //mov
	eax = to32i(eax+4); //mov
	esp -= 4; _sub_44B830(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_480730(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44F070()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x5C);
	esi = 1; //mov
	eax = to32i(dword_511E3C); //mov
	sub(eax, esi);
	edi = 4; //mov
	to32i(esp+0x54) = eax; //mov
	cmp(eax, esi);
	if (jle())
		goto loc_44F0D7;
loc_44F092:
	eax = to32i(dword_511AC8+edi); //mov
	ecx = (int32_t)(intptr_t)(esi-1); //lea
	ebp = eax; //mov
	ebx = to32i(eax+0x14); //mov
	test(ecx, ecx);
	if (jl())
		goto loc_44F0C4;
	eax = (int32_t)(intptr_t)(ecx*4+0); //lea
loc_44F0AB:
	edx = to32i(dword_511AC8+eax); //mov
	cmp(ebx, to32i(edx+0x14));
	if (jge())
		goto loc_44F0C4;
	sub(eax, (int32_t)4);
	dec(ecx);
	to32i(dword_511AD0+eax) = edx; //mov
	test(eax, eax);
	if (jge())
		goto loc_44F0AB;
loc_44F0C4:
	inc(esi);
	to32i(dword_511ACC+ecx*4) = ebp; //mov
	ecx = to32i(esp+0x54); //mov
	add(edi, (int32_t)4);
	cmp(esi, ecx);
	if (jl())
		goto loc_44F092;
loc_44F0D7:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_44F130;
	esi = to32i(dword_511E3C); //mov
	xor_(ecx, ecx);
	test(esi, esi);
	if (jle())
		goto loc_44F10C;
	edx = to32i(dword_511E3C); //mov
	xor_(eax, eax);
loc_44F0F4:
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	sub(ebx, ecx);
	add(eax, (int32_t)4);
	ebx = to32i(dword_511AC8+ebx*4); //mov
	inc(ecx);
	to32i(esp+eax-4) = ebx; //mov
	cmp(ecx, edx);
	if (jl())
		goto loc_44F0F4;
loc_44F10C:
	edi = to32i(dword_511E3C); //mov
	test(edi, edi);
	if (jle())
		goto loc_44F130;
	ecx = (int32_t)(intptr_t)(edi*4+0); //lea
	xor_(eax, eax);
loc_44F11F:
	add(eax, (int32_t)4);
	edx = to32i(esp+eax-4); //mov
	to32i(dword_511AC4+eax) = edx; //mov
	cmp(eax, ecx);
	if (jl())
		goto loc_44F11F;
loc_44F130:
	ebp = to32i(dword_511E3C); //mov
	xor_(eax, eax);
	test(ebp, ebp);
	if (jle())
		goto loc_44F158;
	xor_(edi, edi);
loc_44F13E:
	edx = to32i(dword_511AC8+edi); //mov
	to32i(edx+0x1F0) = eax; //mov
	edx = to32i(dword_511E3C); //mov
	inc(eax);
	add(edi, (int32_t)4);
	cmp(eax, edx);
	if (jl())
		goto loc_44F13E;
loc_44F158:
	edi = 1; //mov
	eax = to32i(dword_511E3C); //mov
	sub(eax, edi);
	ebp = 4; //mov
	to32i(esp+0x50) = eax; //mov
	cmp(eax, edi);
	if (jle())
		goto loc_44F1BC;
loc_44F171:
	edx = (int32_t)(intptr_t)(edi-1); //lea
	eax = to32i(dword_511A88+ebp); //mov
	xor_(esi, esi);
	to32i(esp+0x58) = eax; //mov
	si = to16i(eax+6); //mov
	test(edx, edx);
	if (jl())
		goto loc_44F1A5;
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	ebx = ebp; //mov
loc_44F191:
	ecx = to32i(dword_511A8C+ebx); //mov
	cx = to16i(ecx+6); //mov
	and_(ecx, (int32_t)0xFFFF);
	cmp(esi, ecx);
	if (jl())
		goto loc_44F1C6;
loc_44F1A5:
	eax = to32i(esp+0x58); //mov
	ebx = to32i(esp+0x50); //mov
	add(ebp, (int32_t)4);
	inc(edi);
	to32i(dword_511A8C+edx*4) = eax; //mov
	cmp(edi, ebx);
	if (jl())
		goto loc_44F171;
loc_44F1BC:
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F1C6:
	sub(eax, (int32_t)4);
	ecx = to32i(dword_511A8C+eax); //mov
	dec(edx);
	to32i(dword_511A90+eax) = ecx; //mov
	test(eax, eax);
	if (jge())
		goto loc_44F191;
	goto loc_44F1A5;
}
Fn(void) Game::_sub_44F1E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	edx = to32i(dword_511E3C); //mov
	xor_(ebx, ebx);
	test(edx, edx);
	if (jle())
		goto loc_44F20F;
	xor_(esi, esi);
loc_44F1F2:
	ecx = to32i(dword_511B48+esi); //mov
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jnz())
		goto loc_44F219;
loc_44F201:
	ecx = to32i(dword_511E3C); //mov
	inc(ebx);
	add(esi, (int32_t)4);
	cmp(ebx, ecx);
	if (jl())
		goto loc_44F1F2;
loc_44F20F:
	esp -= 4; _sub_44F070(); esp += 4; //call
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F219:
	eax = ecx; //mov
	esp -= 4; _sub_44F2E0(); esp += 4; //call
	to32i(ecx+0x214) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_45FF80(); esp += 4; //call
	to32i(ecx+0x3AC) = eax; //mov
	edx = to32i(ecx+0x1A8); //mov
	eax = to32i(ecx+0x1A0); //mov
	esp -= 4; _sub_49D7E0(); esp += 4; //call
	dl = to8i(ecx+0x8C); //mov
	to32i(ecx+0x204) = eax; //mov
	cmp(dl, (int8_t)1);
	if (jz())
		goto loc_44F262;
	eax = ecx; //mov
	esp -= 4; _sub_44F280(); esp += 4; //call
	to32i(ecx+0x39C) = eax; //mov
loc_44F262:
	cmp(to16i(ecx+0x74), (int16_t)0);
	if (jz())
		goto loc_44F201;
	eax = ecx; //mov
	esp -= 4; _sub_44F430(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_450DF0(); esp += 4; //call
	goto loc_44F201;
}
Fn(void) Game::_sub_44F280()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = to32i(eax+0x130); //mov
	eax = to32i(eax+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0x134); //mov
	eax = to32i(ecx+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0x138); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44F2E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	edx = to32i(eax+0xC4); //mov
	eax = to32i(eax+0x118); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xC8); //mov
	eax = to32i(ecx+0x11C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xCC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x120); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	edx = to32i(ecx+0x108); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_44F40B;
loc_44F33C:
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xD0); //mov
	eax = to32i(ecx+0x118); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+0xD4); //mov
	eax = to32i(ecx+0x11C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xD8); //mov
	add(esi, eax);
	eax = to32i(ecx+0x120); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	edx = to32i(ecx+0x10C); //mov
	test(eax, eax);
	if (jle())
		goto loc_44F412;
loc_44F39C:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xDC); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x118); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = to32i(ecx+0x11C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(esi, eax);
	eax = to32i(ecx+0x120); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	edx = to32i(ecx+0x110); //mov
	test(eax, eax);
	if (jle())
		goto loc_44F416;
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F40B:
	neg(ebx);
	goto loc_44F33C;
loc_44F412:
	neg(eax);
	goto loc_44F39C;
loc_44F416:
	neg(eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44F430()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	xor_(edx, edx);
	ecx = to32i(eax+0x14); //mov
	dx = to16i(eax+4); //mov
	cmp(edx, ecx);
	if (jz())
		goto loc_44F466;
	push32(esi);
	cmp(to32i(dword_512228), (int32_t)0);
	if (jnz())
		goto loc_44F49B;
	cmp(ecx, (int32_t)0x1F4);
	if (jle())
		goto loc_44F46A;
	test(dx, dx);
	if (jnz())
		goto loc_44F46A;
loc_44F457:
	inc(to32i(eax+0x1FC));
loc_44F45D:
	dx = to16i(eax+0x14); //mov
	to16i(eax+4) = dx; //mov
	pop32(esi);
loc_44F466:
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_44F46A:
	ebp = to32i(eax+0x14); //mov
	test(ebp, ebp);
	if (jl())
		goto loc_44F45D;
	cmp(ebp, (int32_t)0x32);
	if (jg())
		goto loc_44F45D;
	cmp(to16i(eax+4), (int16_t)0x1F4);
	if (jbe())
		goto loc_44F45D;
	ecx = to32i(eax+0x1FC); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_44F493;
	esi = (int32_t)(intptr_t)(ecx-1); //lea
	to32i(eax+0x1FC) = esi; //mov
	goto loc_44F45D;
loc_44F493:
	inc(to32i(eax+0x1F8));
	goto loc_44F45D;
loc_44F49B:
	test(ecx, ecx);
	if (jl())
		goto loc_44F4AB;
	cmp(ecx, (int32_t)0x32);
	if (jg())
		goto loc_44F4AB;
	cmp(dx, (int16_t)0x1F4);
	if (ja())
		goto loc_44F457;
loc_44F4AB:
	cmp(to16i(eax+4), (int16_t)0x32);
	if (ja())
		goto loc_44F45D;
	cmp(to32i(eax+0x14), (int32_t)0x1F4);
	if (jle())
		goto loc_44F45D;
	edx = to32i(eax+0x1FC); //mov
	test(edx, edx);
	if (jle())
		goto loc_44F493;
	push32(ebx);
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(eax+0x1FC) = ebx; //mov
	pop32(ebx);
	dx = to16i(eax+0x14); //mov
	to16i(eax+4) = dx; //mov
	pop32(esi);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_44F4E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edx = to32i(dword_511E3C); //mov
	xor_(esi, esi);
	test(edx, edx);
	if (jle())
		goto loc_44F63F;
	xor_(ecx, ecx);
loc_44F4F8:
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x36C); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x374); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	test(to8i(ebx+0x1F4), (int8_t)1);
	if (jnz())
		goto loc_44F646;
loc_44F537:
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x37C); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x380); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F50); //mov
	edx = to32i(ebx+0x384); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x38C); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	ebx = to32i(dword_511B48+ecx); //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(ebx+0x390); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	eax = to32i(dword_511B48+ecx); //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44F5C9;
	edx = (int32_t)(intptr_t)sub_478360; //mov
	eax = to32i(dword_540F54); //mov
	ebx = to32i(dword_511B48+ecx); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
loc_44F5C9:
	ebx = to32i(dword_511B48+ecx); //mov
	test(to8i(ebx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_44F65B;
	eax = to32i(dword_540F50); //mov
loc_44F5E1:
	edx = to32i(ebx+0x388); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	edx = esi; //mov
	eax = to32i(dword_511B48+ecx); //mov
	esp -= 4; _sub_44FCB0(); esp += 4; //call
	eax = to32i(dword_511B48+ecx); //mov
	xor_(edi, edi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	ebp = to32i(dword_511B88+ecx); //mov
	to32i(dword_511B48+ecx) = edi; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_44F61C;
	to32i(dword_511B88+ecx) = edi; //mov
loc_44F61C:
	cmp(to32i(dword_5118E8+ecx), (int32_t)0);
	if (jz())
		goto loc_44F62D;
	xor_(ebx, ebx);
	to32i(dword_5118E8+ecx) = ebx; //mov
loc_44F62D:
	ebx = to32i(dword_511E3C); //mov
	inc(esi);
	add(ecx, (int32_t)4);
	cmp(esi, ebx);
	if (jl())
		goto loc_44F4F8;
loc_44F63F:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F646:
	eax = to32i(dword_540F50); //mov
	edx = to32i(ebx+0x378); //mov
	esp -= 4; _sub_471430(); esp += 4; //call
	goto loc_44F537;
loc_44F65B:
	eax = to32i(dword_540F54); //mov
	goto loc_44F5E1;
}
Fn(void) Game::_sub_44F670()
{
	push32(edx);
	eax = to32i(dword_4D5EF0); //mov
	xor_(edx, edx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D5EF0) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_44F690()
{
	push32(edx);
	sub(esp, (int32_t)0xFC);
	edx = to32i(dword_513470); //mov
	push32(edx);
	push32(aScardata_viv);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4D5EF0) = eax; //mov
	add(esp, (int32_t)0xFC);
	pop32(edx);
}
Fn(void) Game::_sub_44F6D0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esp -= 4; _sub_44FAA0(); esp += 4; //call
	esp -= 4; _sub_452E40(); esp += 4; //call
	xor_(edi, edi);
	xor_(ebp, ebp);
loc_44F6E4:
	edx = to32i(dword_5126F0); //mov
	esi = to32i(dword_512260); //mov
	add(esi, edx);
	cmp(edi, esi);
	if (jl())
		goto loc_44F811;
	xor_(ebp, ebp);
	xor_(edi, edi);
loc_44F6FE:
	ecx = to32i(dword_5126F0); //mov
	esi = to32i(dword_512260); //mov
	add(esi, ecx);
	cmp(edi, esi);
	if (jge())
		goto loc_44F8A4;
	esi = to32i(dword_511B48+ebp); //mov
	edx = edi; //mov
	eax = esi; //mov
	ecx = 6; //mov
	esp -= 4; _sub_44FCE0(); esp += 4; //call
	ebx = esi; //mov
	eax = to32i(dword_540F54); //mov
	edx = to32i(esi+0x36C); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	ecx = 0x15; //mov
	eax = to32i(dword_540F54); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x374); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	test(to8i(esi+0x1F4), (int8_t)1);
	if (jz())
		goto loc_44F771;
	ecx = 0x19; //mov
	eax = to32i(dword_540F50); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x378); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
loc_44F771:
	ecx = 0x1E; //mov
	eax = to32i(dword_540F54); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x37C); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	ecx = 0x1E; //mov
	eax = to32i(dword_540F54); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x380); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	ecx = 0x28; //mov
	eax = to32i(dword_540F54); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x38C); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	ecx = 0x32; //mov
	eax = to32i(dword_540F54); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x390); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	ecx = 0x1E; //mov
	eax = to32i(dword_540F50); //mov
	ebx = esi; //mov
	edx = to32i(esi+0x384); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_44F895;
	ecx = 0x1E; //mov
	eax = to32i(dword_540F50); //mov
loc_44F7FB:
	ebx = esi; //mov
	edx = to32i(esi+0x388); //mov
	esp -= 4; _sub_4714E0(); esp += 4; //call
	inc(edi);
	add(ebp, (int32_t)4);
	goto loc_44F6FE;
loc_44F811:
	ecx = (int32_t)(intptr_t)aCNfs2seGame_11; //mov
	ebx = 0xAA5; //mov
	edx = 0x684; //mov
	eax = (int32_t)(intptr_t)aCarobj; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	xor_(ebx, ebx);
	to32i(dword_4DB1D8) = ecx; //mov
	esp -= 4; _sub_4844B0(); esp += 4; //call
	edx = 0x684; //mov
	esi = eax; //mov
	ecx = eax; //mov
	esp -= 4; _sub_44F8F0(); esp += 4; //call
	cmp(edi, to32i(dword_512260));
	if (jge())
		goto loc_44F86B;
	eax = (int32_t)(intptr_t)dword_512270; //mov
	add(eax, ebp);
	to32i(esi+0x21C) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_452BD0(); esp += 4; //call
	add(ebp, (int32_t)0x40);
	inc(edi);
	goto loc_44F6E4;
loc_44F86B:
	edx = to32i(dword_512260); //mov
	eax = edi; //mov
	sub(eax, edx);
	imul32(eax, 0x54);
	edx = (int32_t)(intptr_t)dword_5423F0; //mov
	add(edx, eax);
	to32i(esi+0x21C) = edx; //mov
	eax = ecx; //mov
	esp -= 4; _sub_452BD0(); esp += 4; //call
	add(ebp, (int32_t)0x40);
	inc(edi);
	goto loc_44F6E4;
loc_44F895:
	ecx = 0x1E; //mov
	eax = to32i(dword_540F54); //mov
	goto loc_44F7FB;
loc_44F8A4:
	xor_(eax, eax);
	xor_(edx, edx);
	al = to8i(byte_4DB32A); //mov
	dl = to8i(byte_4DB316); //mov
	and_(eax, edx);
	xor_(edx, edx);
	test(eax, edx);
	if (jz())
		goto loc_44F8D2;
	to32i(dword_4D5EF4) = 0x41; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44F8D2:
	to32i(dword_4D5EF4) = 0x1999; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44F8F0()
{
	push32(ecx);
	ecx = edx; //mov
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_44F904;
loc_44F8F9:
	inc(edx);
	to8i(eax) = 0; //mov
	inc(eax);
	cmp(edx, ecx);
	if (jl())
		goto loc_44F8F9;
loc_44F904:
	pop32(ecx);
}
Fn(void) Game::_sub_44F910()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x104);
	esp -= 4; _sub_44F690(); esp += 4; //call
	xor_(ebx, ebx);
loc_44F923:
	add(ebx, (int32_t)4);
	xor_(edx, edx);
	to32i(dword_5118E4+ebx) = edx; //mov
	cmp(ebx, (int32_t)0xE0);
	if (jnz())
		goto loc_44F923;
	to32i(esp+0x100) = edx; //mov
	xor_(ebx, ebx);
loc_44F93F:
	esi = to32i(dword_5126F0); //mov
	ebp = to32i(dword_512260); //mov
	add(ebp, esi);
	cmp(ebx, ebp);
	if (jge())
		goto loc_44FA7C;
	edi = to32i(dword_512260); //mov
	cmp(ebx, edi);
	if (jge())
		goto loc_44F98C;
	ebp = ebx; //mov
	shl(ebp, (int32_t)6);
	add(ebp, (int32_t)(intptr_t)dword_512270);
loc_44F96A:
	cmp(ebx, to32i(dword_512260));
	if (jl())
		goto loc_44F99C;
	cmp(to32i(ebp+0), (int32_t)0xF);
	if (jge())
		goto loc_44F99C;
loc_44F978:
	edi = to32i(esp+0x100); //mov
	add(edi, (int32_t)4);
	inc(ebx);
	to32i(esp+0x100) = edi; //mov
	goto loc_44F93F;
loc_44F98C:
	eax = ebx; //mov
	sub(eax, edi);
	imul32(eax, 0x54);
	ebp = (int32_t)(intptr_t)dword_5423F0; //mov
	add(ebp, eax);
	goto loc_44F96A;
loc_44F99C:
	eax = to32i(ebp+0); //mov
	shl(eax, (int32_t)2);
	ecx = to32i(dword_5118E8+eax); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_44FA6A;
	edi = esp; //mov
	esi = to32i(dword_513494); //mov
	push32(edi);
loc_44F9B9:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44F9D1;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44F9B9;
loc_44F9D1:
	pop32(edi);
	esi = to32i(ebp+0); //mov
	shl(esi, (int32_t)3);
	edi = esp; //mov
	add(esi, (int32_t)(intptr_t)aMcf1);
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
loc_44F9E9:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44FA01;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44F9E9;
loc_44FA01:
	pop32(edi);
	cmp(to32i(ebp+0), (int32_t)0x11);
	if (jge())
		goto loc_44FA63;
	esi = (int32_t)(intptr_t)aA_qfs; //mov
loc_44FA0D:
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
loc_44FA18:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_44FA30;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_44FA18;
loc_44FA30:
	pop32(edi);
	eax = esp; //mov
	xor_(edx, edx);
	esi = to32i(esp+0x100); //mov
	esp -= 4; _sub_488064(); esp += 4; //call
	to32i(dword_511B88+esi) = eax; //mov
	eax = to32i(esp+0x100); //mov
	esi = to32i(ebp+0); //mov
	eax = to32i(dword_511B88+eax); //mov
	to32i(dword_5118E8+esi*4) = eax; //mov
	goto loc_44F978;
loc_44FA63:
	esi = (int32_t)(intptr_t)a_qfs; //mov
	goto loc_44FA0D;
loc_44FA6A:
	esi = to32i(esp+0x100); //mov
	to32i(dword_511B88+esi) = ecx; //mov
	goto loc_44F978;
loc_44FA7C:
	esp -= 4; _sub_458650(); esp += 4; //call
	add(esp, (int32_t)0x104);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44FAA0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x64);
	push32(aSimtune);
	push32(aS_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(dword_4D5EF0); //mov
	ebx = 1; //mov
	esp -= 4; _sub_49D67C(); esp += 4; //call
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_475F80(); esp += 4; //call
	edx = eax; //mov
	xor_(ebx, ebx);
loc_44FADE:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D48+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D4C+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D50+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D54+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D58+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D5C+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D60+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D64+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D68+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D6C+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D70+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D74+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D78+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D7C+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D80+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D84+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D88+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D8C+ebx) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D90+ebx) = eax; //mov
	eax = edx; //mov
	ecx = ebx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D94+ebx) = eax; //mov
	eax = edx; //mov
	esi = (int32_t)(intptr_t)(ebx+0x10); //lea
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D98+ebx) = eax; //mov
loc_44FBF4:
	eax = edx; //mov
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511D9C+ecx) = eax; //mov
	eax = edx; //mov
	add(ecx, (int32_t)4);
	esp -= 4; _sub_475F00(); esp += 4; //call
	to32i(dword_511DA8+ecx) = eax; //mov
	cmp(ecx, esi);
	if (jnz())
		goto loc_44FBF4;
	add(ebx, (int32_t)0x74);
	cmp(ebx, (int32_t)0xE8);
	if (jnz())
		goto loc_44FADE;
	eax = edx; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	add(esp, (int32_t)0x64);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44FC40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	edx = to32i(dword_511E3C); //mov
	test(edx, edx);
	if (jle())
		goto loc_44FC74;
	ebx = (int32_t)(intptr_t)(edx*4+0); //lea
	xor_(eax, eax);
loc_44FC58:
	add(eax, (int32_t)4);
	ecx = to32i(dword_511B44+eax); //mov
	to32i(dword_511AC4+eax) = ecx; //mov
	to32i(dword_511A84+eax) = ecx; //mov
	cmp(eax, ebx);
	if (jl())
		goto loc_44FC58;
loc_44FC74:
	ebx = to32i(dword_511E3C); //mov
	xor_(ecx, ecx);
	test(ebx, ebx);
	if (jle())
		goto loc_44FCA0;
	xor_(ebx, ebx);
loc_44FC82:
	edx = ecx; //mov
	eax = to32i(dword_511B48+ebx); //mov
	esp -= 4; _sub_450000(); esp += 4; //call
	esi = to32i(dword_511E3C); //mov
	inc(ecx);
	add(ebx, (int32_t)4);
	cmp(ecx, esi);
	if (jl())
		goto loc_44FC82;
loc_44FCA0:
	xor_(edi, edi);
	to32i(dword_4D8514) = edi; //mov
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_44FCB0()
{
	push32(ecx);
	ecx = eax; //mov
	edx = to32i(eax+0x2EC); //mov
	test(edx, edx);
	if (jnz())
		goto loc_44FCC6;
	eax = ecx; //mov
	esp -= 4; _sub_46DFB0(); esp += 4; //call
	pop32(ecx);
	return;
loc_44FCC6:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(ecx+0x2EC) = 0; //mov
	eax = ecx; //mov
	esp -= 4; _sub_46DFB0(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_44FCE0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20C);
	ecx = eax; //mov
	edi = edx; //mov
	esp -= 4; _sub_452DD0(); esp += 4; //call
	edx = to32i(dword_512260); //mov
	xor_(ebp, ebp);
	xor_(esi, esi);
	cmp(edi, edx);
	if (jge())
		goto loc_44FDC1;
	eax = to32i(ecx+0x21C); //mov
	cmp(to32i(eax), (int32_t)0xF);
	if (jge())
		goto loc_44FF82;
	eax = (int32_t)(intptr_t)(ecx+0x1DC); //lea
	push32(eax);
loc_44FD1C:
	push32(aS_dat);
	eax = (int32_t)(intptr_t)(esp+0x104); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0xFC); //lea
	eax = to32i(dword_4D5EF0); //mov
	esp -= 4; _sub_49D67C(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_44FD56;
	ebx = 1; //mov
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_475F80(); esp += 4; //call
	esi = eax; //mov
loc_44FD56:
	eax = to32i(ecx+0x21C); //mov
	ebp = to32i(eax); //mov
	cmp(ebp, (int32_t)0xF);
	if (jge())
		goto loc_44FF8C;
	eax = (int32_t)(intptr_t)(ebp*8+0); //lea
	add(eax, (int32_t)(intptr_t)aMcf1);
	push32(eax);
	push32(aPS);
loc_44FD79:
	eax = (int32_t)(intptr_t)(esp+0x200); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
loc_44FD89:
	eax = (int32_t)(intptr_t)(esp+0x1F8); //lea
	push32(eax);
	push32(aS_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = to32i(dword_4D5EF0); //mov
	ebx = 1; //mov
	esp -= 4; _sub_49D67C(); esp += 4; //call
	edx = eax; //mov
	xor_(eax, eax);
	esp -= 4; _sub_475F80(); esp += 4; //call
	ebp = eax; //mov
loc_44FDC1:
	edx = edi; //mov
	eax = ecx; //mov
	esp -= 4; _sub_450000(); esp += 4; //call
	eax = ecx; //mov
	to32i(ecx+0x65C) = 0; //mov
	edx = (int32_t)(intptr_t)(ecx+0x10); //lea
loc_44FDD9:
	add(eax, (int32_t)4);
	to32i(eax+0x634) = 0; //mov
	to32i(eax+0x648) = 0; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_44FDD9;
	cmp(edi, to32i(dword_512260));
	if (jge())
		goto loc_44FE52;
	edx = esi; //mov
	eax = ecx; //mov
	ebx = 0x96C; //mov
	esp -= 4; _sub_43CB60(); esp += 4; //call
	eax = ecx; //mov
	edx = (int32_t)(intptr_t)aCNfs2seGame_11; //mov
	esp -= 4; _sub_43CDD0(); esp += 4; //call
	eax = (int32_t)(intptr_t)aCarspecs; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ebx; //mov
	edx = 0x1DC; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = ebp; //mov
	to32i(ecx+0x2EC) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_46C210(); esp += 4; //call
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_44FE52;
	eax = ecx; //mov
	esp -= 4; _sub_46BE00(); esp += 4; //call
loc_44FE52:
	to32i(ecx+0x370) = (int32_t)(intptr_t)sub_4703D0; //mov
	to32i(ecx+0x374) = (int32_t)(intptr_t)sub_4588D0; //mov
	to32i(ecx+0x378) = (int32_t)(intptr_t)sub_474AF0; //mov
	to32i(ecx+0x37C) = (int32_t)(intptr_t)sub_4679E0; //mov
	to32i(ecx+0x380) = (int32_t)(intptr_t)sub_460030; //mov
	to32i(ecx+0x384) = (int32_t)(intptr_t)sub_462180; //mov
	to32i(ecx+0x388) = (int32_t)(intptr_t)sub_461F50; //mov
	to32i(ecx+0x38C) = (int32_t)(intptr_t)sub_453860; //mov
	to32i(ecx+0x390) = (int32_t)(intptr_t)sub_4505E0; //mov
	bl = to8i(ecx+0x1F4); //mov
	to32i(ecx+0x36C) = (int32_t)(intptr_t)sub_4628B0; //mov
	test(bl, (int8_t)2);
	if (jz())
		goto loc_44FEE9;
	to32i(ecx+0x374) = (int32_t)(intptr_t)sub_4589F0; //mov
	to32i(ecx+0x37C) = (int32_t)(intptr_t)sub_43D920; //mov
	to32i(ecx+0x388) = (int32_t)(intptr_t)sub_461E80; //mov
	to32i(ecx+0x370) = 0; //mov
loc_44FEE9:
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_44FF38;
	to32i(ecx+0x370) = 0; //mov
	to32i(ecx+0x374) = 0; //mov
	to32i(ecx+0x378) = 0; //mov
	to32i(ecx+0x37C) = (int32_t)(intptr_t)sub_4740C0; //mov
	to32i(ecx+0x388) = (int32_t)(intptr_t)sub_461E80; //mov
	to32i(ecx+0x390) = (int32_t)(intptr_t)sub_473E60; //mov
	to32i(ecx+0x2EC) = 0; //mov
loc_44FF38:
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_44FF67;
	cmp(to32i(dword_512210), (int32_t)0);
	if (jz())
		goto loc_44FF67;
	cmp(to32i(dword_512208), (int32_t)1);
	if (jl())
		goto loc_44FF67;
	to32i(ecx+0x388) = (int32_t)(intptr_t)sub_452F50; //mov
	to32i(ecx+0x384) = (int32_t)(intptr_t)sub_453010; //mov
loc_44FF67:
	eax = ecx; //mov
	esp -= 4; _sub_46D3D0(); esp += 4; //call
	cmp(edi, to32i(dword_512260));
	if (jl())
		goto loc_44FFD9;
	add(esp, (int32_t)0x20C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_44FF82:
	push32(aStrd);
	goto loc_44FD1C;
loc_44FF8C:
	cmp(ebp, (int32_t)0x24);
	if (jg())
		goto loc_44FFBF;
	test(to8i(byte_512218), (int8_t)4);
	if (jz())
		goto loc_44FFB4;
	push32(aPjagr);
	eax = (int32_t)(intptr_t)(esp+0x1FC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	goto loc_44FD89;
loc_44FFB4:
	push32(ebp);
	push32(aPtr02d);
	goto loc_44FD79;
loc_44FFBF:
	push32(aPcala);
	eax = (int32_t)(intptr_t)(esp+0x1FC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)8);
	goto loc_44FD89;
loc_44FFD9:
	eax = esi; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_475F50(); esp += 4; //call
	add(esp, (int32_t)0x20C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_450000()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	esi = eax; //mov
	edi = edx; //mov
	esp -= 4; _sub_452DD0(); esp += 4; //call
	cmp(edi, to32i(dword_512260));
	if (jl())
		goto loc_4503B3;
	ecx = to32i(esi+0x110); //mov
	edx = edi; //mov
	push32(ecx);
	ebx = to32i(esi+0x10C); //mov
	eax = esi; //mov
	push32(ebx);
	ebp = to32i(esi+0x108); //mov
	or_(dh, (int8_t)2);
	push32(ebp);
	ecx = 0xF0000; //mov
	ebx = 0xA0000; //mov
loc_450043:
	esp -= 4; _sub_462200(); esp += 4; //call
	cmp(edi, to32i(dword_512260));
	if (jl())
		goto loc_4503DE;
	eax = esi; //mov
	xor_(edi, edi);
	esp -= 4; _sub_473DA0(); esp += 4; //call
	to32i(esp) = edi; //mov
	to32i(esp+4) = edi; //mov
	to32i(esp+8) = edi; //mov
loc_450068:
	edx = to32i(dword_512228); //mov
	to32i(esi+0x1F8) = 0; //mov
	test(edx, edx);
	if (jz())
		goto loc_450403;
	to32i(esi+0x1FC) = 1; //mov
loc_45008A:
	ax = to16i(esi+0x14); //mov
	to16i(esi+4) = ax; //mov
	eax = esi; //mov
	esp -= 4; _sub_450DF0(); esp += 4; //call
	to32i(esi+0x200) = 0; //mov
	to32i(esi+0x204) = 0; //mov
	to32i(esi+0x218) = 0x10000; //mov
	to32i(esi+0x558) = 0x10000; //mov
	to32i(esi+0x55C) = 0; //mov
	to32i(esi+0x284) = 0; //mov
	to32i(esi+0x28C) = 0; //mov
	to32i(esi+0x290) = 0; //mov
	to32i(esi+0x294) = 0; //mov
	to32i(esi+0x298) = 0; //mov
	to32i(esi+0x29C) = 0; //mov
	to32i(esi+0x2A0) = 0; //mov
	to32i(esi+0x2A4) = 0; //mov
	to32i(esi+0x2A8) = 0; //mov
	to32i(esi+0x2AC) = 0; //mov
	to32i(esi+0x2C8) = 0; //mov
	to32i(esi+0x2CC) = 0; //mov
	to32i(esi+0x2D0) = 0; //mov
	to32i(esi+0x2B0) = 0; //mov
	to32i(esi+0x2B4) = 0; //mov
	to32i(esi+0x2B8) = 0; //mov
	to32i(esi+0x2BC) = 0; //mov
	to32i(esi+0x2C0) = 0; //mov
	to32i(esi+0x2C4) = 0; //mov
	to32i(esi+0x308) = 0; //mov
	to32i(esi+0x2F0) = 0; //mov
	to32i(esi+0x2F4) = 0; //mov
	to32i(esi+0x2F8) = 0; //mov
	to32i(esi+0x2FC) = 0; //mov
	to32i(esi+0x300) = 0; //mov
	to32i(esi+0x304) = 0; //mov
	to32i(esi+0x30C) = 0; //mov
	to32i(esi+0x310) = 0; //mov
	to32i(esi+0x364) = 0; //mov
	to32i(esi+0x368) = 0; //mov
	to32i(esi+0x2E8) = 0; //mov
	to8i(esi+0x2D4) = 0; //mov
	to8i(esi+0x2D5) = 0; //mov
	to8i(esi+0x2D6) = 1; //mov
	to32i(esi+0x2E0) = 0; //mov
	to8i(esi+0x2D7) = 0; //mov
	to8i(esi+0x2D8) = 0; //mov
	to32i(esi+0x2E4) = 0; //mov
	to8i(esi+0x2DA) = 1; //mov
	to8i(esi+0x2D9) = 1; //mov
	to8i(esi+0x2DC) = 0; //mov
	to8i(esi+0x2DD) = 0; //mov
	to8i(esi+0x2DE) = 0; //mov
	to32i(esi+0x320) = 0; //mov
	to32i(esi+0x32C) = 0; //mov
	to32i(esi+0x360) = 0; //mov
	to32i(esi+0x324) = 0; //mov
	to32i(esi+0x328) = 0; //mov
	to32i(esi+0x314) = 0; //mov
	to8i(esi+0x318) = 0; //mov
	ecx = to32i(esi+0x1E8); //mov
	to32i(esi+0x31C) = 0; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4502C2;
	test(to8i(byte_512218), (int8_t)0x10);
	if (jz())
		goto loc_4502C2;
	to8i(esi+0x318) = 1; //mov
loc_4502C2:
	cmp(to32i(esi+0x1E8), (int32_t)1);
	if (jnz())
		goto loc_4502DB;
	test(to8i(byte_512218), (int8_t)0x20);
	if (jz())
		goto loc_4502DB;
	to8i(esi+0x318) = 1; //mov
loc_4502DB:
	eax = esi; //mov
	esp -= 4; _sub_43CDD0(); esp += 4; //call
	to32i(esi+0x590) = 0; //mov
	to32i(esi+0x578) = 0; //mov
	to32i(esi+0x57C) = 0; //mov
	to32i(esi+0x580) = 0; //mov
	to32i(esi+0x584) = 0; //mov
	to32i(esi+0x588) = 0; //mov
	to32i(esi+0x58C) = 0; //mov
	to32i(esi+0x17C) = 0; //mov
	to32i(esi+0x660) = 0; //mov
	to32i(esi+0x664) = 0; //mov
	to32i(esi+0x668) = 0; //mov
	to32i(esi+0x66C) = 0; //mov
	to32i(esi+0x670) = 0; //mov
	to32i(esi+0x62C) = 0; //mov
	to32i(esi+0x630) = 0; //mov
	eax = to32i(esi+0x21C); //mov
	to32i(esi+0x634) = 0; //mov
	edi = to32i(eax); //mov
	cmp(edi, (int32_t)0xF);
	if (jge())
		goto loc_45042C;
	eax = to32i(dword_4D5EFC+edi*8); //mov
	ebp = to32i(dword_512204); //mov
	to32i(esi+0x674) = eax; //mov
	test(ebp, ebp);
	if (jz())
		goto loc_45040E;
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4503B3:
	eax = to32i(esi+0x110); //mov
	push32(eax);
	edx = to32i(esi+0x10C); //mov
	ebx = 0xA0000; //mov
	push32(edx);
	ecx = to32i(esi+0x108); //mov
	eax = esi; //mov
	push32(ecx);
	edx = edi; //mov
	ecx = 0xF0000; //mov
	or_(dh, (int8_t)1);
	goto loc_450043;
loc_4503DE:
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = esi; //mov
	esp -= 4; _sub_450440(); esp += 4; //call
	ebx = esp; //mov
	edx = to32i(esp+0xC); //mov
	ecx = to32i(dword_512228); //mov
	eax = esi; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	goto loc_450068;
loc_450403:
	to32i(esi+0x1FC) = edx; //mov
	goto loc_45008A;
loc_45040E:
	edx = 0xA666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+0x674) = eax; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45042C:
	to32i(esi+0x674) = 0; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_450440()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = edx; //mov
	esi = ebx; //mov
	edi = to32i(eax+0x1E8); //mov
	edx = to32i(dword_512228); //mov
	edi = to32i(dword_512670+edi*4); //mov
	test(edx, edx);
	if (jnz())
		goto loc_450526;
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	add(eax, edi);
loc_45046C:
	add(eax, (int32_t)2);
	to32i(ecx) = eax; //mov
	ebp = to32i(dword_512228); //mov
	and_(edi, (int32_t)1);
	test(ebp, ebp);
	if (jz())
		goto loc_45048B;
	test(edi, edi);
	if (jnz())
		goto loc_450545;
	edi = 1; //mov
loc_45048B:
	esp -= 4; _sub_43D860(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_450579;
	edx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	ebx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(ebx, eax);
	al = to8i(ebx+0x1F); //mov
	xor_(edx, edx);
	and_(al, (int8_t)0xF);
	dl = al; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	bl = to8i(ebx+0x21); //mov
	and_(ebx, (int32_t)0xFF);
	shl(ebx, (int32_t)0xF);
	ebp = eax; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	imul32(ebp, ebx);
	test(edi, edi);
	if (jz())
		goto loc_4504E2;
	add(eax, ebx);
loc_4504E2:
	to32i(esi) = eax; //mov
	test(edi, edi);
	if (jz())
		goto loc_45054C;
	edx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	dl = to8i(edx+eax*4+0x21); //mov
	and_(edx, (int32_t)0xFF);
	shl(edx, (int32_t)0xF);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(eax, ebp);
loc_450511:
	to32i(esi) = eax; //mov
	to32i(esi+8) = 0; //mov
	to32i(esi+4) = 0x8000; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_450526:
	ebx = to32i(dword_512268); //mov
	edx = to32i(dword_512264); //mov
	add(edx, ebx);
	dec(edx);
	sub(edx, edi);
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	add(eax, edx);
	goto loc_45046C;
loc_450545:
	xor_(edi, edi);
	goto loc_45048B;
loc_45054C:
	edx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	dl = to8i(edx+eax*4+0x21); //mov
	and_(edx, (int32_t)0xFF);
	shl(edx, (int32_t)0xF);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	sub(ebp, eax);
	eax = ebp; //mov
	goto loc_450511;
loc_450579:
	test(edi, edi);
	if (jz())
		goto loc_4505A9;
	edx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x21); //mov
	shl(edx, (int32_t)0xF);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	goto loc_450511;
loc_4505A9:
	edx = to32i(ecx); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	al = to8i(edx+eax*4+0x20); //mov
	edx = eax; //mov
	and_(edx, (int32_t)0xFF);
	shl(edx, (int32_t)0xF);
	neg(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	goto loc_450511;
}
Fn(void) Game::_sub_4505E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(eax+0x2E8); //mov
	to32i(eax+0x590) = 0; //mov
	test(edx, edx);
	if (jnz())
		goto loc_450626;
loc_4505FC:
	cmp(to8i(ecx+0x8C), (int8_t)0);
	if (jz())
		goto loc_450631;
loc_450605:
	cmp(to32i(ecx+0x578), (int32_t)0);
	if (jg())
		goto loc_450700;
	cmp(to32i(ecx+0x17C), (int32_t)0);
	if (jnz())
		goto loc_450700;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450626:
	ebx = (int32_t)(intptr_t)(edx-1); //lea
	to32i(eax+0x2E8) = ebx; //mov
	goto loc_4505FC;
loc_450631:
	cmp(to8i(ecx+0x8D), (int8_t)0);
	if (jz())
		goto loc_450605;
	eax = ecx; //mov
	esp -= 4; _sub_43D690(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_450910(); esp += 4; //call
	cmp(to32i(ecx+0x88), (int32_t)0x460000);
	if (jge())
		goto loc_45065B;
	eax = ecx; //mov
	esp -= 4; _sub_450890(); esp += 4; //call
loc_45065B:
	cmp(to32i(ecx+0x88), (int32_t)0x640000);
	if (jge())
		goto loc_45066E;
	eax = ecx; //mov
	esp -= 4; _sub_452050(); esp += 4; //call
loc_45066E:
	eax = ecx; //mov
	esp -= 4; _sub_451780(); esp += 4; //call
	cmp(to32i(ecx+0x88), (int32_t)(intptr_t)dword_5A0000);
	if (jge())
		goto loc_450688;
	eax = ecx; //mov
	esp -= 4; _sub_450CD0(); esp += 4; //call
loc_450688:
	cmp(to32i(ecx+0x88), (int32_t)0x3C0000);
	if (jge())
		goto loc_4506E3;
	eax = to32i(ecx+0x2AC); //mov
	ebx = to32i(ecx+0x66C); //mov
	sub(eax, ebx);
	edx = 0x18000; //mov
	cmp(eax, (int32_t)0x8000);
	if (jg())
		goto loc_45071A;
	cmp(eax, (int32_t)0xFFFF8000);
	if (jge())
		goto loc_4506BE;
	esi = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(ecx+0x66C) = esi; //mov
loc_4506BE:
	ebp = to32i(ecx+0x670); //mov
	eax = to32i(ecx+0x2A4); //mov
	sub(eax, ebp);
	cmp(eax, edx);
	if (jle())
		goto loc_450728;
	esi = (int32_t)(intptr_t)(edx+ebp); //lea
	to32i(ecx+0x670) = esi; //mov
loc_4506D9:
	cmp(to16i(ecx+0x14C), (int16_t)0);
	if (jbe())
		goto loc_450747;
loc_4506E3:
	to32i(ecx+0x664) = 0; //mov
	eax = to32i(ecx+0x664); //mov
	to32i(ecx+0x668) = eax; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450700:
	eax = ecx; //mov
	xor_(edx, edx);
	to32i(ecx+0x578) = 0; //mov
	esp -= 4; _sub_4523F0(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45071A:
	edi = (int32_t)(intptr_t)(ebx+0x8000); //lea
	to32i(ecx+0x66C) = edi; //mov
	goto loc_4506BE;
loc_450728:
	ebx = edx; //mov
	neg(ebx);
	cmp(eax, ebx);
	if (jge())
		goto loc_45073C;
	ebx = ebp; //mov
	sub(ebx, edx);
	to32i(ecx+0x670) = ebx; //mov
	goto loc_4506D9;
loc_45073C:
	edx = (int32_t)(intptr_t)(eax+ebp); //lea
	to32i(ecx+0x670) = edx; //mov
	goto loc_4506D9;
loc_450747:
	eax = to32i(ecx+0x588); //mov
	edx = to32i(ecx+0x584); //mov
	edi = to32i(dword_4D61CC+eax*4); //mov
	imul32(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = eax; //mov
	eax = to32i(ecx+0x670); //mov
	add(eax, edx);
	edx = to32i(ecx+0x674); //mov
	to32i(ecx+0x668) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0x668) = eax; //mov
	eax = to32i(ecx+0x580); //mov
	edx = to32i(ecx+0x57C); //mov
	ebp = to32i(dword_4D61CC+eax*4); //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edx = to32i(ecx+0x66C); //mov
	sub(eax, edx);
	edx = to32i(ecx+0x674); //mov
	to32i(ecx+0x664) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0x664) = eax; //mov
	eax = ecx; //mov
	esp -= 4; _sub_450C00(); esp += 4; //call
	eax = to32i(ecx+0x2F8); //mov
	edx = to32i(ecx+0x67C); //mov
	test(eax, eax);
	if (jz())
		goto loc_450862;
loc_4507EE:
	cmp(to32i(dword_512204), (int32_t)0);
	if (jz())
		goto loc_450874;
	ebp = to32i(ecx+0x67C); //mov
	cmp(ebp, (int32_t)0xE666);
	if (jle())
		goto loc_45086D;
	edx = ebp; //mov
loc_45080B:
	esp -= 4; _sub_488074(); esp += 4; //call
	shr(eax, (int32_t)0xC);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xC);
	sbb(eax, edx);
	sar(eax, (int32_t)0xC);
	add(to32i(ecx+0x664), eax);
	edx = to32i(ecx+0x67C); //mov
	esp -= 4; _sub_488074(); esp += 4; //call
	shr(eax, (int32_t)0xC);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xC);
	sbb(eax, edx);
	sar(eax, (int32_t)0xC);
	add(to32i(ecx+0x668), eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450862:
	cmp(to32i(ecx+0x2F4), (int32_t)0);
	if (jnz())
		goto loc_4507EE;
	goto loc_45080B;
loc_45086D:
	edx = 0xE666; //mov
	goto loc_45080B;
loc_450874:
	edi = to32i(ecx+0x67C); //mov
	cmp(edi, (int32_t)0x4CCC);
	if (jle())
		goto loc_450886;
	edx = edi; //mov
	goto loc_45080B;
loc_450886:
	edx = 0x4CCC; //mov
	goto loc_45080B;
}
Fn(void) Game::_sub_450890()
{
	push32(edx);
	push32(ebp);
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_4508C3;
	edx = to32i(eax+0x184); //mov
	cmp(to32i(dword_4D6070+edx*4), (int32_t)0);
	if (jz())
		goto loc_4508C3;
	cmp(to32i(eax+0x128), (int32_t)0xCCCC);
	if (jge())
		goto loc_4508C3;
	cmp(to32i(eax+0x15C), (int32_t)0x7AE);
	if (jle())
		goto loc_4508C6;
loc_4508C3:
	pop32(ebp);
	pop32(edx);
	return;
loc_4508C6:
	push32(edi);
	edi = to32i(eax+0xA8); //mov
	edx = to32i(eax+0x124); //mov
	ebp = to32i(eax+0xB0); //mov
	add(edi, edx);
	edx = to32i(eax+0x12C); //mov
	to32i(eax+0xA8) = edi; //mov
	add(ebp, edx);
	edx = to32i(eax+0xAC); //mov
	to32i(eax+0xB0) = ebp; //mov
	sub(edx, (int32_t)0x14CCC);
	to32i(eax+0xAC) = edx; //mov
	pop32(edi);
	pop32(ebp);
	pop32(edx);
}
Fn(void) Game::_sub_450910()
{
	push32(ecx);
	sub(esp, (int32_t)0x24);
	ecx = eax; //mov
	cmp(to8i(eax+0x8E), (int8_t)0);
	if (jz())
		goto loc_450928;
	cmp(to32i(ecx+0x17C), (int32_t)0);
	if (jz())
		goto loc_45092D;
loc_450928:
	add(esp, (int32_t)0x24);
	pop32(ecx);
	return;
loc_45092D:
	push32(edx);
	push32(ebx);
	edx = to32i(ecx+0xC4); //mov
	eax = to32i(ecx+0xE8); //mov
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
	edx = to32i(ecx+0xD0); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xE8); //mov
	to32i(ecx+0x2BC) = ebx; //mov
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
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512204); //mov
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	to32i(ecx+0x2C4) = ebx; //mov
	edx = to32i(dword_511D54+eax*4); //mov
	eax = to32i(ecx+0x2BC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_512204); //mov
	to32i(ecx+0x2BC) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D4C+eax*4); //mov
	eax = to32i(ecx+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0x2C4) = eax; //mov
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_450B08;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	ebx = to32i(dword_511D58+eax*4); //mov
	eax = to32i(ecx+0x2AC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(ecx+0x2BC); //mov
	edx = to32i(dword_512204); //mov
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	to32i(ecx+0x2BC) = ebx; //mov
	ebx = to32i(dword_511D50+eax*4); //mov
	eax = to32i(ecx+0x2A4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(to32i(ecx+0x2C4), eax);
loc_450B08:
	edx = (int32_t)(intptr_t)(esp+8); //lea
	eax = (int32_t)(intptr_t)(ecx+0xC4); //lea
	esp -= 4; _sub_49D890(); esp += 4; //call
	edx = to32i(esp+8); //mov
	eax = to32i(ecx+0x2BC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xC); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xE8) = ebx; //mov
	eax = to32i(ecx+0x2BC); //mov
	edx = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xEC) = ebx; //mov
	eax = to32i(ecx+0x2BC); //mov
	edx = to32i(esp+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	ebx = eax; //mov
	eax = to32i(ecx+0x2C0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	add(ebx, eax);
	eax = to32i(ecx+0x2C4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(ecx+0xF0) = ebx; //mov
	pop32(ebx);
	pop32(edx);
	add(esp, (int32_t)0x24);
	pop32(ecx);
}
Fn(void) Game::_sub_450C00()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	edx = to32i(ecx+0xBC); //mov
	ebx = to32i(eax+0x21C); //mov
	sar(edx, (int32_t)0x1F);
	eax = to32i(eax+0xBC); //mov
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = to32i(ebx); //mov
	shl(ebx, (int32_t)3);
	edx = to32i(dword_4D5F00+ebx); //mov
	cmp(eax, edx);
	if (jge())
		goto loc_450CB7;
loc_450C37:
	edx = to32i(ecx+0x184); //mov
	shl(edx, (int32_t)2);
	ebx = to32i(dword_4D60B0+edx); //mov
	cmp(eax, ebx);
	if (jge())
		goto loc_450CC2;
	push32(esi);
	eax = to32i(ecx+0xBC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = to32i(ecx+0x21C); //mov
	ebx = to32i(ebx); //mov
	shl(ebx, (int32_t)3);
	esi = to32i(dword_4D5F00+ebx); //mov
	cmp(eax, esi);
	if (jge())
		goto loc_450CBE;
loc_450C77:
	pop32(esi);
loc_450C78:
	edi = to32i(ecx+0xBC); //mov
	to32i(ecx+0x67C) = eax; //mov
	cmp(edi, (int32_t)0x430000);
	if (jle())
		goto loc_450CB1;
	edx = (int32_t)(intptr_t)(edi-0x430000); //lea
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)7);
	sbb(eax, edx);
	sar(eax, (int32_t)7);
	ebp = to32i(ecx+0x67C); //mov
	cmp(eax, ebp);
	if (jge())
		goto loc_450CAB;
	eax = ebp; //mov
loc_450CAB:
	to32i(ecx+0x67C) = eax; //mov
loc_450CB1:
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450CB7:
	eax = edx; //mov
	goto loc_450C37;
loc_450CBE:
	eax = esi; //mov
	goto loc_450C77;
loc_450CC2:
	eax = ebx; //mov
	goto loc_450C78;
}
Fn(void) Game::_sub_450CD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	esi = eax; //mov
	cmp(to32i(eax+0x100), (int32_t)0x3333);
	if (jl())
		goto loc_450D1A;
	test(to8i(eax+0x360), (int8_t)4);
	if (jz())
		goto loc_450D0D;
	push32(0);
	push32(0);
	ecx = 1; //mov
	push32(0);
	ebx = 8; //mov
	edx = 5; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	sub(to32i(esi+0x360), (int32_t)4);
loc_450D0D:
	eax = esi; //mov
	esp -= 4; _sub_450E50(); esp += 4; //call
loc_450D14:
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450D1A:
	ebx = to32i(eax+0x184); //mov
	ecx = to32i(esi+0x15C); //mov
	ebx = to32i(dword_4D6130+ebx*4); //mov
	eax = to32i(eax+0xBC); //mov
	cmp(ecx, (int32_t)0x3333);
	if (jge())
		goto loc_450DC4;
	cmp(eax, (int32_t)0x20000);
	if (jle())
		goto loc_450DC4;
	edi = to32i(esi+0x328); //mov
	push32(0);
	cmp(edi, (int32_t)0xA0000);
	if (jle())
		goto loc_450DBD;
	eax = edi; //mov
loc_450D5C:
	push32(eax);
	ecx = 1; //mov
	edx = 4; //mov
	push32(ebx);
	eax = esi; //mov
	ebx = 8; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	or_(to8i(esi+0x360), (int8_t)4);
	cmp(to32i(esi+0xBC), (int32_t)0x40000);
	if (jle())
		goto loc_450D14;
	eax = to32i(esi+0x180); //mov
	and_(eax, (int32_t)0x3F);
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_450D14;
	ecx = 5; //mov
	eax = (int32_t)(intptr_t)(esi+0xA8); //lea
	edx = 2; //mov
	push32(eax);
	ebx = (int32_t)(intptr_t)(esi+0x9C); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_450DBD:
	eax = 0xA0000; //mov
	goto loc_450D5C;
loc_450DC4:
	push32(0);
	push32(0);
	ecx = 1; //mov
	ebx = 8; //mov
	push32(0);
	edx = 5; //mov
	eax = esi; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	sub(to32i(esi+0x360), (int32_t)4);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_450DF0()
{
	push32(ebx);
	push32(edx);
	cmp(to32i(eax+0x1FC), (int32_t)0);
	if (jle())
		goto loc_450E04;
	to16i(eax+6) = 0; //mov
	pop32(edx);
	pop32(ebx);
	return;
loc_450E04:
	cmp(to32i(dword_512228), (int32_t)0);
	if (jz())
		goto loc_450E33;
	push32(esi);
	push32(ecx);
	cx = to16i(dword_5118A0); //mov
	bx = to16i(eax+0x1F8); //mov
	imul32(ebx, ecx);
	si = to16i(eax+0x14); //mov
	edx = ecx; //mov
	sub(edx, esi);
	add(ebx, edx);
	to16i(eax+6) = bx; //mov
	pop32(ecx);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_450E33:
	bx = to16i(dword_5118A0); //mov
	imul16(bx, to16i(eax+0x1F8));
	dx = to16i(eax+0x14); //mov
	add(ebx, edx);
	to16i(eax+6) = bx; //mov
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_450E50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	esi = eax; //mov
	eax = to32i(eax+0x9C); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(esi+0xA0); //mov
	to32i(esp+0x40) = eax; //mov
	eax = to32i(esi+0xA4); //mov
	to32i(esp+0x44) = eax; //mov
	eax = to32i(esi+0x154); //mov
	edx = to32i(esi+0x88); //mov
	to32i(esp+0x40) = eax; //mov
	cmp(edx, (int32_t)0x3C0000);
	if (jge())
		goto loc_451244;
	cmp(to32i(esi+0x15C), (int32_t)0x6666);
	if (jge())
		goto loc_451244;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_451244;
	eax = to32i(esi+0x2B8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edi = to32i(esi+0x324); //mov
	sub(edi, (int32_t)0x4CCC);
	to32i(esp+0x4C) = edi; //mov
	test(eax, eax);
	if (jle())
		goto loc_45123D;
loc_450EDD:
	ebx = edi; //mov
	sub(ebx, eax);
	eax = to32i(esi+0x328); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ebp = (int32_t)(intptr_t)(eax-0x4CCC); //lea
	to32i(esp+0x48) = ebp; //mov
loc_450EFE:
	eax = to32i(esi+0x184); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(dword_4D6130+eax*4); //mov
	edx = to32i(esp+0x50); //mov
	to32i(esp+0x54) = eax; //mov
	cmp(edx, (int32_t)0xD);
	if (jnz())
		goto loc_451257;
loc_450F20:
	cmp(to32i(esi+0xBC), (int32_t)0xA0000);
	if (jle())
		goto loc_450F31;
	ebp = 0x10000; //mov
loc_450F31:
	test(edi, edi);
	if (jl())
		goto loc_451265;
loc_450F39:
	test(ebx, ebx);
	if (jl())
		goto loc_45126C;
loc_450F41:
	test(ebp, ebp);
	if (jl())
		goto loc_451273;
loc_450F49:
	test(edi, edi);
	if (jz())
		goto loc_45127A;
loc_450F51:
	edx = to32i(esi+0x108); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xC4); //mov
	imul32(edx, eax);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xC8); //mov
	imul32(edx, ecx);
	to32i(esp+0x30) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xCC); //mov
	imul32(edx, ecx);
	to32i(esp+0x34) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0x110); //mov
	to32i(esp+0x38) = eax; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xDC); //mov
	imul32(edx, eax);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xE0); //mov
	imul32(edx, ecx);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xE4); //mov
	imul32(edx, ecx);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0x110); //mov
	add(edx, edx);
	to32i(esp+8) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xDC); //mov
	imul32(edx, eax);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xE0); //mov
	imul32(edx, ecx);
	to32i(esp+0xC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esi+0xE4); //mov
	imul32(edx, ecx);
	to32i(esp+0x10) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x14) = eax; //mov
	cmp(ebp, (int32_t)0xA0000);
	if (jle())
		goto loc_4510C1;
	ebp = 0xA0000; //mov
loc_4510C1:
	cmp(edi, (int32_t)0xA0000);
	if (jle())
		goto loc_4510CE;
	edi = 0xA0000; //mov
loc_4510CE:
	test(edi, edi);
	if (jz())
		goto loc_4512F7;
	eax = to32i(esp+0x3C); //mov
	add(eax, to32i(esp+0x30));
	ecx = to32i(esp+0x34); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x40); //mov
	add(eax, ecx);
	edx = to32i(esp+0x38); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp+0x44); //mov
	add(eax, edx);
	ecx = to32i(esp+0x18); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+0x1C); //mov
	add(ecx, eax);
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x18) = ecx; //mov
	ecx = to32i(esp+0x20); //mov
	add(edx, eax);
	eax = to32i(esp+0x14); //mov
	to32i(esp+0x1C) = edx; //mov
	edx = to32i(esp+0x30); //mov
	add(ecx, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x20) = ecx; //mov
	sub(eax, edx);
	ecx = to32i(esp+0x34); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(esp+0x40); //mov
	sub(eax, ecx);
	edx = to32i(esp+0x38); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x44); //mov
	sub(eax, edx);
	ecx = to32i(esp+0x24); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+0x28); //mov
	add(ecx, eax);
	eax = to32i(esp+0x10); //mov
	to32i(esp+0x24) = ecx; //mov
	ecx = to32i(esp+0x2C); //mov
	add(edx, eax);
	add(ecx, to32i(esp+0x14));
	to32i(esp+0x28) = edx; //mov
	to32i(esp+0x2C) = ecx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_451194;
	ebx = to32i(esp+0x50); //mov
	ecx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = esi; //mov
	push32(ebx);
	xor_(edx, edx);
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_451500(); esp += 4; //call
loc_451194:
	eax = to32i(esp+0x4C); //mov
	test(eax, eax);
	if (jle())
		goto loc_4512AD;
loc_4511A0:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_4512C6;
	test(eax, eax);
	if (jz())
		goto loc_4512B4;
loc_4511B5:
	push32(0);
	ecx = 2; //mov
	push32(edi);
	edi = to32i(esp+0x5C); //mov
	ebx = 6; //mov
	push32(edi);
	eax = esi; //mov
	edx = ecx; //mov
loc_4511CB:
	esp -= 4; _sub_452E80(); esp += 4; //call
	or_(to8i(esi+0x360), (int8_t)1);
loc_4511D7:
	test(ebp, ebp);
	if (jnz())
		goto loc_451377;
	test(to8i(esi+0x32C), (int8_t)2);
	if (jz())
		goto loc_451226;
	test(to8i(esi+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_45121F;
	ecx = 1; //mov
	edx = 2; //mov
	ebx = (int32_t)(intptr_t)(esi+0x348); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ecx = 1; //mov
	edx = 3; //mov
	ebx = (int32_t)(intptr_t)(esi+0x354); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_45121F:
	sub(to32i(esi+0x32C), (int32_t)2);
loc_451226:
	test(to8i(esi+0x360), (int8_t)2);
	if (jnz())
		goto loc_4514D0;
loc_451233:
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45123D:
	neg(eax);
	goto loc_450EDD;
loc_451244:
	xor_(edi, edi);
	xor_(ebp, ebp);
	xor_(ebx, ebx);
	to32i(esp+0x4C) = edi; //mov
	to32i(esp+0x48) = edi; //mov
	goto loc_450EFE;
loc_451257:
	cmp(edx, (int32_t)5);
	if (jz())
		goto loc_450F20;
	goto loc_450F31;
loc_451265:
	xor_(edi, edi);
	goto loc_450F39;
loc_45126C:
	xor_(ebx, ebx);
	goto loc_450F41;
loc_451273:
	xor_(ebp, ebp);
	goto loc_450F49;
loc_45127A:
	test(ebp, ebp);
	if (jnz())
		goto loc_450F51;
	test(to8i(esi+0x32C), (int8_t)1);
	if (jz())
		goto loc_451293;
	test(edi, edi);
	if (jz())
		goto loc_450F51;
loc_451293:
	test(to8i(esi+0x32C), (int8_t)2);
	if (jz())
		goto loc_4510CE;
	test(ebp, ebp);
	if (jz())
		goto loc_450F51;
	goto loc_4510CE;
loc_4512AD:
	xor_(eax, eax);
	goto loc_4511A0;
loc_4512B4:
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jnz())
		goto loc_4511B5;
	goto loc_4511D7;
loc_4512C6:
	test(eax, eax);
	if (jnz())
		goto loc_4512DC;
	eax = to32i(dword_51220C); //mov
	cmp(esi, to32i(dword_511D08+eax*4));
	if (jnz())
		goto loc_4511D7;
loc_4512DC:
	push32(0);
	ebx = to32i(esp+0x58); //mov
	push32(edi);
	ecx = 2; //mov
	eax = esi; //mov
	push32(ebx);
	edx = ecx; //mov
	ebx = 6; //mov
	goto loc_4511CB;
loc_4512F7:
	test(to8i(esi+0x32C), (int8_t)1);
	if (jz())
		goto loc_451340;
	edx = to32i(esi+0x32C); //mov
	dec(edx);
	bl = to8i(esi+0x1F4); //mov
	to32i(esi+0x32C) = edx; //mov
	test(bl, (int8_t)0x10);
	if (jnz())
		goto loc_451340;
	ecx = 1; //mov
	ebx = (int32_t)(intptr_t)(esi+0x330); //lea
	eax = to32i(esi); //mov
	xor_(edx, edx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ecx = 1; //mov
	ebx = (int32_t)(intptr_t)(esi+0x33C); //lea
	eax = to32i(esi); //mov
	edx = ecx; //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_451340:
	test(to8i(esi+0x360), (int8_t)1);
	if (jz())
		goto loc_4511D7;
	push32(0);
	ecx = to32i(esp+0x58); //mov
	push32(0);
	ebx = 6; //mov
	edx = 3; //mov
	push32(ecx);
	eax = esi; //mov
	ecx = 2; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	dec(to32i(esi+0x360));
	goto loc_4511D7;
loc_451377:
	eax = to32i(esp+0x3C); //mov
	add(eax, to32i(esp+0x30));
	ebx = to32i(esp+0x34); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esp+0x40); //mov
	edi = to32i(esp+0x38); //mov
	add(eax, ebx);
	edx = to32i(esp+0x18); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(esp+0x44); //mov
	ecx = to32i(esp+0x1C); //mov
	add(eax, edi);
	edi = to32i(esp+0x30); //mov
	to32i(esp+0x20) = eax; //mov
	eax = to32i(esp); //mov
	ebx = to32i(esp+0x20); //mov
	sub(edx, eax);
	eax = to32i(esp+4); //mov
	to32i(esp+0x18) = edx; //mov
	sub(ecx, eax);
	eax = to32i(esp+8); //mov
	edx = to32i(esp+0x34); //mov
	sub(ebx, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x1C) = ecx; //mov
	sub(eax, edi);
	ecx = to32i(esp+0x38); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(esp+0x40); //mov
	to32i(esp+0x20) = ebx; //mov
	sub(eax, edx);
	ebx = to32i(esp+0x24); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x44); //mov
	edi = to32i(esp+0x28); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x50); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(esp+0x2C); //mov
	push32(ecx);
	sub(ebx, eax);
	eax = to32i(esp+8); //mov
	ecx = (int32_t)(intptr_t)(esp+0x28); //lea
	sub(edi, eax);
	eax = to32i(esp+0xC); //mov
	to32i(esp+0x28) = ebx; //mov
	sub(edx, eax);
	ebx = (int32_t)(intptr_t)(esp+0x1C); //lea
	to32i(esp+0x30) = edx; //mov
	eax = esi; //mov
	edx = 3; //mov
	to32i(esp+0x2C) = edi; //mov
	esp -= 4; _sub_451500(); esp += 4; //call
	ebx = to32i(esp+0x48); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_451487;
	eax = ebx; //mov
loc_45143E:
	cmp(to32i(dword_512208), (int32_t)1);
	if (jnz())
		goto loc_45148B;
	test(eax, eax);
	if (jnz())
		goto loc_451458;
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_451233;
loc_451458:
	push32(0);
	ebx = to32i(esp+0x58); //mov
	push32(ebp);
	ecx = 2; //mov
	edx = 4; //mov
	push32(ebx);
	eax = esi; //mov
	ebx = 8; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	or_(to8i(esi+0x360), (int8_t)2);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_451487:
	xor_(eax, eax);
	goto loc_45143E;
loc_45148B:
	test(eax, eax);
	if (jnz())
		goto loc_4514A1;
	eax = to32i(dword_51220C); //mov
	cmp(esi, to32i(dword_511D08+eax*4));
	if (jnz())
		goto loc_451233;
loc_4514A1:
	push32(0);
	ecx = to32i(esp+0x58); //mov
	push32(ebp);
	ebx = 8; //mov
	edx = 4; //mov
	push32(ecx);
	eax = esi; //mov
	ecx = 2; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	or_(to8i(esi+0x360), (int8_t)2);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4514D0:
	push32(0);
	eax = to32i(esp+0x58); //mov
	push32(0);
	ecx = 2; //mov
	ebx = 8; //mov
	push32(eax);
	edx = 5; //mov
	eax = esi; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
	sub(to32i(esi+0x360), (int32_t)2);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_451500()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	ebp = eax; //mov
	to32i(esp) = ebx; //mov
	to32i(esp+4) = ecx; //mov
	ebx = ebp; //mov
	esi = to32i(eax); //mov
	eax = to32i(esp+0x18); //mov
	add(ebx, (int32_t)0xA8);
	shl(eax, (int32_t)2);
	edi = to32i(dword_4D60F0+eax); //mov
	cmp(edx, (int32_t)2);
	if (jl())
		goto loc_45165F;
	cmp(to32i(dword_4D5FF0+eax), (int32_t)0);
	if (jnz())
		goto loc_45159F;
	test(to8i(ebp+0x32C), (int8_t)2);
	if (jz())
		goto loc_45157F;
	test(to8i(ebp+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_451578;
	ecx = 1; //mov
	edx = 2; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x348); //lea
	eax = esi; //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ecx = 1; //mov
	edx = 3; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x354); //lea
	eax = esi; //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_451578:
	sub(to32i(ebp+0x32C), (int32_t)2);
loc_45157F:
	eax = to32i(esp+0x18); //mov
	edx = to32i(ebp+0xBC); //mov
	cmp(edx, to32i(dword_4D5FB0+eax*4));
	if (jl())
		goto loc_45162B;
loc_451596:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_45159F:
	ecx = 1; //mov
	edx = 2; //mov
	edi = ebx; //mov
	push32(ebx);
	eax = esi; //mov
	ebx = to32i(esp+4); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	ecx = 1; //mov
	eax = edi; //mov
	ebx = to32i(esp+4); //mov
	push32(eax);
	edx = 3; //mov
	eax = esi; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	test(to8i(ebp+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_4515FB;
	ebx = to32i(esp); //mov
	edx = 2; //mov
	eax = esi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	edx = 3; //mov
	eax = esi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_4515FB:
	al = to8i(ebp+0x32C); //mov
	esi = to32i(esp); //mov
	or_(al, (int8_t)2);
	edi = (int32_t)(intptr_t)(ebp+0x348); //lea
	to8i(ebp+0x32C) = al; //mov
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+4); //mov
	edi = (int32_t)(intptr_t)(ebp+0x354); //lea
	movsd();
	movsd();
	movsd();
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_45162B:
	ebx = to32i(esp); //mov
	add(ebp, (int32_t)0xA8);
	edx = 2; //mov
	push32(ebp);
	ecx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	edx = 3; //mov
	push32(ebp);
	ecx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_45165F:
	cmp(to32i(dword_4D5FF0+eax), (int32_t)0);
	if (jnz())
		goto loc_4516F4;
	test(to8i(ebp+0x32C), (int8_t)1);
	if (jz())
		goto loc_4516AC;
	test(to8i(ebp+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_4516A6;
	ecx = 1; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x330); //lea
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ecx = 1; //mov
	ebx = (int32_t)(intptr_t)(ebp+0x33C); //lea
	eax = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_4516A6:
	dec(to32i(ebp+0x32C));
loc_4516AC:
	edx = to32i(esp+0x18); //mov
	eax = to32i(ebp+0xBC); //mov
	cmp(eax, to32i(dword_4D5FB0+edx*4));
	if (jge())
		goto loc_451596;
	ebx = to32i(esp); //mov
	add(ebp, (int32_t)0xA8);
	ecx = edi; //mov
	push32(ebp);
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_475E00(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	edx = 1; //mov
	push32(ebp);
	ecx = edi; //mov
	eax = esi; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_4516F4:
	ecx = 1; //mov
	edi = ebx; //mov
	push32(ebx);
	eax = esi; //mov
	xor_(edx, edx);
	ebx = to32i(esp+4); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	ecx = 1; //mov
	eax = edi; //mov
	ebx = to32i(esp+4); //mov
	push32(eax);
	edx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	test(to8i(ebp+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_451747;
	ebx = to32i(esp); //mov
	eax = esi; //mov
	xor_(ecx, ecx);
	xor_(edx, edx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
	ebx = to32i(esp+4); //mov
	edx = 1; //mov
	eax = esi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_475BA0(); esp += 4; //call
loc_451747:
	bl = to8i(ebp+0x32C); //mov
	esi = to32i(esp); //mov
	or_(bl, (int8_t)1);
	edi = (int32_t)(intptr_t)(ebp+0x330); //lea
	to8i(ebp+0x32C) = bl; //mov
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+4); //mov
	edi = (int32_t)(intptr_t)(ebp+0x33C); //lea
	movsd();
	movsd();
	movsd();
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_451780()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esi = eax; //mov
	cmp(to32i(eax+0x58C), (int32_t)0);
	if (jnz())
		goto loc_451AFC;
loc_451798:
	cmp(to32i(esi+0x160), (int32_t)0);
	if (jz())
		goto loc_451913;
	edi = to32i(esi+0x168); //mov
	ah = to8i(esi+0x1F4); //mov
	and_(edi, (int32_t)0xEFFF0000);
	test(ah, (int8_t)0x40);
	if (jz())
		goto loc_451B23;
	cmp(to32i(esi+0x164), (int32_t)0);
	if (jnz())
		goto loc_451B23;
loc_4517CD:
	cmp(edi, (int32_t)0x40000);
	if (jnz())
		goto loc_451853;
	edx = to32i(esi+0xBC); //mov
	cmp(edx, (int32_t)0x180000);
	if (jle())
		goto loc_451C83;
	ebx = (int32_t)(intptr_t)(esi+0x170); //lea
	ebp = to32i(esi+0x15C); //mov
	eax = (int32_t)(intptr_t)(esi+0xA8); //lea
	cmp(ebp, (int32_t)0x9999);
	if (jge())
		goto loc_451C6F;
	push32(eax);
	eax = to32i(esi+0x168); //mov
	and_(eax, (int32_t)0xFF);
	xor_(edx, edx);
	ecx = to32i(dword_4D6170+eax*4); //mov
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	eax = to32i(esi+0x168); //mov
	and_(eax, (int32_t)0xFF);
	cmp(to32i(dword_4D6170+eax*4), (int32_t)4);
	if (jnz())
		goto loc_451853;
	push32(0);
	push32(0);
	ecx = 1; //mov
	ebx = 0xFFFFFFFF; //mov
	push32(0xC);
	eax = esi; //mov
	edx = ecx; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
loc_451853:
	cmp(to32i(esi+0x160), (int32_t)0xA0000);
	if (jle())
		goto loc_4518F5;
	ebx = to32i(esi+0x588); //mov
	eax = to32i(esi+0x580); //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_451CBB;
loc_451877:
	cmp(eax, (int32_t)0x1E);
	if (jg())
		goto loc_4518F5;
	eax = edi; //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_4D61B0+eax*4); //mov
	to32i(esp) = eax; //mov
	cmp(edi, (int32_t)0x40000);
	if (jnz())
		goto loc_451CC2;
	eax = to32i(esi+0x168); //mov
	and_(eax, (int32_t)0xFF);
	ebp = to32i(dword_4D6190+eax*4); //mov
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	ecx = 8; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = 0x23; //mov
	add(edx, (int32_t)0x10);
	eax = esi; //mov
	esp -= 4; _sub_451FC0(); esp += 4; //call
loc_4518C9:
	eax = to32i(esi+0x160); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	push32(0);
	push32(eax);
	ecx = to32i(esp+8); //mov
	ebx = 0xFFFFFFFF; //mov
	push32(ebp);
	edx = 1; //mov
	eax = esi; //mov
	esp -= 4; _sub_452E80(); esp += 4; //call
loc_4518F5:
	to32i(esi+0x164) = 0; //mov
	to32i(esi+0x168) = 0; //mov
	to32i(esi+0x160) = 0; //mov
loc_451913:
	cmp(to32i(esi+0x578), (int32_t)0);
	if (jle())
		goto loc_451A77;
	cmp(to32i(esi+0x100), (int32_t)0x1999);
	if (jge())
		goto loc_451DEA;
loc_451930:
	dec(to32i(esi+0x578));
loc_451936:
	cmp(to32i(esi+0x15C), (int32_t)0x4CCC);
	if (jge())
		goto loc_451E17;
	cmp(to32i(esi+0x100), (int32_t)0x8000);
	if (jle())
		goto loc_451E17;
	eax = to32i(esi+0xE8); //mov
	test(eax, eax);
	if (jle())
		goto loc_451E09;
loc_451964:
	edx = to32i(esi+0xF0); //mov
	test(edx, edx);
	if (jle())
		goto loc_451E10;
loc_451972:
	ecx = (int32_t)(intptr_t)(eax+edx); //lea
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	cmp(ecx, to32i(dword_511D70+eax*4));
	if (jge())
		goto loc_4519EC;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_4519EC;
	eax = to32i(esi+0xE8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = to32i(esi+0xE8); //mov
	sub(edx, eax);
	eax = to32i(esi+0xF0); //mov
	to32i(esi+0xE8) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	ebp = to32i(esi+0x578); //mov
	sub(ebp, (int32_t)8);
	ecx = to32i(esi+0xF0); //mov
	to32i(esi+0x578) = ebp; //mov
	sub(ecx, eax);
	to32i(esi+0xF0) = ecx; //mov
loc_4519EC:
	ebx = to32i(esi+0xAC); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_451E9C;
	eax = ebx; //mov
loc_4519FC:
	add(eax, to32i(esi+0xBC));
	cmp(eax, (int32_t)0x10000);
	if (jge())
		goto loc_451A19;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_451A19;
	sub(to32i(esi+0x578), (int32_t)8);
loc_451A19:
	cmp(to32i(esi+0x578), (int32_t)0);
	if (jle())
		goto loc_451A57;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(esi+0x578); //mov
	cmp(edx, to32i(dword_511D64+eax*4));
	if (jge())
		goto loc_451A77;
	cmp(to8i(esi+0x2D4), (int8_t)0xC8);
	if (jbe())
		goto loc_451A77;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_451A77;
loc_451A57:
	test(to8i(esi+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_451EA5;
	eax = esi; //mov
	xor_(edx, edx);
	esp -= 4; _sub_4523F0(); esp += 4; //call
loc_451A6D:
	to32i(esi+0x578) = 0; //mov
loc_451A77:
	edi = to32i(esi+0x580); //mov
	test(edi, edi);
	if (jle())
		goto loc_451A8A;
	ebp = (int32_t)(intptr_t)(edi-1); //lea
	to32i(esi+0x580) = ebp; //mov
loc_451A8A:
	eax = to32i(esi+0x588); //mov
	test(eax, eax);
	if (jle())
		goto loc_451A9D;
	edx = (int32_t)(intptr_t)(eax-1); //lea
	to32i(esi+0x588) = edx; //mov
loc_451A9D:
	edx = to32i(esi+0xD0); //mov
	eax = to32i(esi+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(esi+0xD4); //mov
	eax = to32i(esi+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xD8); //mov
	add(ecx, eax);
	eax = to32i(esi+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	cmp(to32i(esi+0x578), (int32_t)0);
	if (jle())
		goto loc_451EB4;
loc_451AF2:
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_451AFC:
	add(eax, (int32_t)0x9C);
	esp -= 4; _sub_475DA0(); esp += 4; //call
	cmp(to16i(esi+0x14C), (int16_t)0);
	if (ja())
		goto loc_451798;
	to32i(esi+0x58C) = 0; //mov
	goto loc_451798;
loc_451B23:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(edx, eax);
	shl(edx, (int32_t)2);
	eax = to32i(esi+0x160); //mov
	cmp(eax, to32i(dword_511D48+edx));
	if (jle())
		goto loc_4517CD;
	eax = esi; //mov
	esp -= 4; _sub_46A3B0(); esp += 4; //call
	eax = to32i(esi+0x27C); //mov
	inc(eax);
	edx = to32i(esi+0x15C); //mov
	to32i(esi+0x27C) = eax; //mov
	cmp(edx, (int32_t)0x10000);
	if (jge())
		goto loc_451BC0;
	edx = 1; //mov
	ecx = to32i(dword_512204); //mov
	eax = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_451B8F;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_451B8F;
	edx = 2; //mov
	eax = edx; //mov
loc_451B8F:
	imul32(edx, to32i(esi+0xEC));
	ebp = to32i(esi+0xF0); //mov
	add(ebp, edx);
	imul32(eax, to32i(esi+0xEC));
	ecx = to32i(esi+0xE8); //mov
	to32i(esi+0xF0) = ebp; //mov
	add(ecx, eax);
	eax = esi; //mov
	to32i(esi+0xE8) = ecx; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
loc_451BC0:
	eax = (int32_t)(intptr_t)(esi+0x9C); //lea
	esp -= 4; _sub_475DA0(); esp += 4; //call
	to32i(esi+0x58C) = 1; //mov
	to32i(esi+0x324) = 0; //mov
	ebx = to32i(esi+0x578); //mov
	to32i(esi+0x328) = 0; //mov
	test(ebx, ebx);
	if (jg())
		goto loc_4517CD;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jz())
		goto loc_451C0F;
	to32i(esi+0x578) = 0x100; //mov
	goto loc_4517CD;
loc_451C0F:
	eax = to32i(dword_512204); //mov
	cmp(eax, (int32_t)1);
	if (jnz())
		goto loc_451C49;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_451C49;
	edx = eax; //mov
	shl(eax, (int32_t)3);
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D60+eax*4); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	to32i(esi+0x578) = eax; //mov
	goto loc_4517CD;
loc_451C49:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	eax = to32i(dword_511D60+eax*4); //mov
	to32i(esi+0x578) = eax; //mov
	goto loc_4517CD;
loc_451C6F:
	ecx = 6; //mov
	push32(eax);
	xor_(edx, edx);
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	goto loc_451853;
loc_451C83:
	cmp(edx, (int32_t)0xF0000);
	if (jg())
		goto loc_451C9B;
	cmp(to32i(esi+0x160), (int32_t)0xF0000);
	if (jle())
		goto loc_451853;
loc_451C9B:
	ecx = 1; //mov
	eax = (int32_t)(intptr_t)(esi+0xA8); //lea
	xor_(edx, edx);
	push32(eax);
	ebx = (int32_t)(intptr_t)(esi+0x170); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	goto loc_451853;
loc_451CBB:
	eax = ebx; //mov
	goto loc_451877;
loc_451CC2:
	cmp(edi, (int32_t)0x30000);
	if (jg())
		goto loc_451D55;
	ebp = to32i(esi+0x168); //mov
	and_(ebp, (int32_t)0xFF);
	ebp = to32i(dword_4D6130+ebp*4); //mov
	cmp(edi, (int32_t)0x20000);
	if (jnz())
		goto loc_451D38;
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	ecx = 8; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = 0x23; //mov
	add(edx, (int32_t)0x10);
	eax = esi; //mov
loc_451D04:
	esp -= 4; _sub_451FC0(); esp += 4; //call
	cmp(edi, (int32_t)0x30000);
	if (jnz())
		goto loc_4518C9;
	cmp(to32i(esi+0x100), (int32_t)0xE666);
	if (jge())
		goto loc_451D28;
	to32i(esp) = 1; //mov
loc_451D28:
	eax = (int32_t)(intptr_t)(esi+0x170); //lea
	esp -= 4; _sub_475DA0(); esp += 4; //call
	goto loc_4518C9;
loc_451D38:
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	ecx = 8; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = (int32_t)(intptr_t)(edx+0x10); //lea
	eax = esi; //mov
	edx = 0x23; //mov
	goto loc_451D04;
loc_451D55:
	ebp = to32i(esi+0x168); //mov
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	ecx = 8; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebx = (int32_t)(intptr_t)(edx+0x10); //lea
	eax = esi; //mov
	edx = 0x23; //mov
	and_(ebp, (int32_t)0xFF);
	esp -= 4; _sub_451FC0(); esp += 4; //call
	cmp(edi, (int32_t)0x50000);
	if (jnz())
		goto loc_4518C9;
	test(to8i(esi+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_451DD4;
loc_451D96:
	ecx = 6; //mov
loc_451D9B:
	eax = (int32_t)(intptr_t)(esi+0xA8); //lea
	xor_(edx, edx);
	push32(eax);
	ebx = (int32_t)(intptr_t)(esi+0x170); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	ecx = 6; //mov
	eax = (int32_t)(intptr_t)(esi+0xA8); //lea
	edx = 1; //mov
	push32(eax);
	ebx = (int32_t)(intptr_t)(esi+0x170); //lea
	eax = to32i(esi); //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	goto loc_4518C9;
loc_451DD4:
	eax = to32i(esi+0x164); //mov
	test(to8i(eax+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_451D96;
	ecx = 4; //mov
	goto loc_451D9B;
loc_451DEA:
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_451930;
	test(to8i(esi+0x1F4), (int8_t)4);
	if (jz())
		goto loc_451930;
	goto loc_451936;
loc_451E09:
	neg(eax);
	goto loc_451964;
loc_451E10:
	neg(edx);
	goto loc_451972;
loc_451E17:
	cmp(to32i(esi+0x15C), (int32_t)0x50000);
	if (jge())
		goto loc_4519EC;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_4519EC;
	eax = to32i(esi+0xE8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = to32i(esi+0xE8); //mov
	sub(ebx, eax);
	eax = to32i(esi+0xEC); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	edi = to32i(esi+0xEC); //mov
	sub(edi, eax);
	eax = to32i(esi+0xF0); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	to32i(esi+0xE8) = ebx; //mov
	ebp = to32i(esi+0xF0); //mov
	to32i(esi+0xEC) = edi; //mov
	sub(ebp, eax);
	to32i(esi+0xF0) = ebp; //mov
	goto loc_4519EC;
loc_451E9C:
	eax = ebx; //mov
	neg(eax);
	goto loc_4519FC;
loc_451EA5:
	to32i(esi+0x58C) = 0; //mov
	goto loc_451A6D;
loc_451EB4:
	cmp(eax, (int32_t)0xC000);
	if (jge())
		goto loc_451F0A;
loc_451EBB:
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jz())
		goto loc_451F2C;
	to32i(esi+0x578) = 0x100; //mov
loc_451ECE:
	cmp(to16i(esi+0x14C), (int16_t)0);
	if (jz())
		goto loc_451AF2;
	ebx = to32i(esi+0xF0); //mov
	ecx = to32i(esi+0xE8); //mov
	add(ebx, (int32_t)0x51E);
	add(ecx, (int32_t)0x28F);
	to32i(esi+0xF0) = ebx; //mov
	to32i(esi+0xE8) = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_451F0A:
	ebx = to32i(esi+0x184); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_451EBB;
	cmp(ebx, (int32_t)0xE);
	if (jz())
		goto loc_451EBB;
	cmp(to32i(esi+0x17C), (int32_t)0);
	if (jnz())
		goto loc_451EBB;
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_451F2C:
	cmp(to32i(dword_512204), (int32_t)1);
	if (jnz())
		goto loc_451F6D;
	test(to8i(esi+0x1F4), (int8_t)8);
	if (jz())
		goto loc_451F6D;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D60+eax*4); //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	to32i(esi+0x578) = eax; //mov
	goto loc_451ECE;
loc_451F6D:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	eax = to32i(dword_511D60+eax*4); //mov
	to32i(esi+0x578) = eax; //mov
	goto loc_451ECE;
}
Fn(void) Game::_sub_451FA0()
{
	to32i(eax+0x17C) = 0; //mov
	to32i(eax+0x58C) = 0; //mov
}
Fn(void) Game::_sub_451FC0()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	to32i(eax+0x580) = edx; //mov
	edx = to32i(eax+0x160); //mov
	sub(edx, (int32_t)0xA0000);
	add(edx, edx);
	cmp(edx, (int32_t)0x2D0000);
	if (jle())
		goto loc_451FE5;
	edx = 0x2D0000; //mov
loc_451FE5:
	to32i(ecx+0x57C) = edx; //mov
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	esi = 0x100; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(esi);
	cmp(edx, (int32_t)0x80);
	if (jle())
		goto loc_45200A;
	neg(to32i(ecx+0x57C));
loc_45200A:
	edx = to32i(ecx+0x57C); //mov
	to32i(ecx+0x588) = ebx; //mov
	to32i(ecx+0x584) = edx; //mov
	esp -= 4; _rand_(); esp += 4; //call
	edx = eax; //mov
	ebx = 0x100; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	cmp(edx, (int32_t)0x80);
	if (jg())
		goto loc_452038;
	pop32(esi);
	pop32(ecx);
	return;
loc_452038:
	neg(to32i(ecx+0x584));
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_452050()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = eax; //mov
	cmp(to8i(eax+0x90), (int8_t)0);
	if (jbe())
		goto loc_452138;
	dec(to8i(ecx+0x90));
	cmp(to32i(ecx+0xBC), (int32_t)0x140000);
	if (jle())
		goto loc_452138;
	eax = to32i(ecx+0x110); //mov
	edx = eax; //mov
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
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x1A8); //mov
	imul32(edx, ebx);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ebx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(ecx+0x9C); //mov
	sub(eax, ebx);
	to32i(esp+0xC) = eax; //mov
	esi = to32i(esp+4); //mov
	eax = to32i(ecx+0xA0); //mov
	sub(eax, esi);
	to32i(esp+0x10) = eax; //mov
	edi = to32i(esp+8); //mov
	eax = to32i(ecx+0xA4); //mov
	sub(eax, edi);
	to32i(esp+0x14) = eax; //mov
	ebp = to32i(ecx+0x184); //mov
	cmp(ebp, (int32_t)1);
	if (jz())
		goto loc_45211F;
	cmp(ebp, (int32_t)4);
	if (jnz())
		goto loc_452142;
loc_45211F:
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = (int32_t)(intptr_t)(ecx+0xA8); //lea
	xor_(edx, edx);
	push32(eax);
	eax = to32i(ecx); //mov
	ecx = 5; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
loc_452138:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_452142:
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	eax = (int32_t)(intptr_t)(ecx+0xA8); //lea
	xor_(edx, edx);
	push32(eax);
	eax = to32i(ecx); //mov
	ecx = 6; //mov
	esp -= 4; _sub_475E00(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_452170()
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
	esi = (int32_t)(intptr_t)(dword_44F050+0xC); //mov
	edx = to32i(dword_512228); //mov
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jz())
		goto loc_45239A;
	eax = 0xFFFFFFFF; //mov
loc_452198:
	ecx = to32i(ebp+0x2E8); //mov
	ebx = eax; //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_452390;
	cmp(to32i(ebp+0x280), (int32_t)2);
	if (jz())
		goto loc_452390;
	cmp(to32i(dword_540F44), (int32_t)0);
	if (jz())
		goto loc_452390;
	test(to8i(ebp+0x1F4), (int8_t)4);
	if (jz())
		goto loc_452390;
	cmp(to32i(ebp+0x17C), (int32_t)0);
	if (jnz())
		goto loc_452390;
	eax = ebp; //mov
	to32i(ebp+0x58C) = ecx; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4521F4;
	xor_(eax, eax);
loc_4521F4:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D6C+eax*4); //mov
	imul32(edx, ebx);
	ecx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	test(edx, edx);
	if (jl())
		goto loc_4523A4;
	ecx = to32i(dword_5118A0); //mov
	cmp(eax, ecx);
	if (jl())
		goto loc_45222C;
	sub(eax, ecx);
loc_45222C:
	esi = eax; //mov
	edi = esi; //mov
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	shl(eax, (int32_t)2);
	to32i(esp+0xC) = eax; //mov
	edx = to32i(esp+0xC); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	ecx = edx; //mov
	xor_(edx, edx);
	sar(ecx, (int32_t)4);
	dl = to8i(eax+0x20); //mov
	and_(ecx, (int32_t)0xF);
	shl(edx, (int32_t)0xF);
	imul32(edx, ecx);
	xor_(ecx, ecx);
	cl = to8i(eax+0x21); //mov
	al = to8i(eax+0x1F); //mov
	shl(ecx, (int32_t)0xF);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, ecx);
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = esp; //mov
	ecx = to32i(dword_512228); //mov
	to32i(esp) = eax; //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	xor_(esi, esi);
	to32i(esp+0x10) = eax; //mov
loc_4522A1:
	ecx = to32i(ebp+0x184); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4523B7;
loc_4522AF:
	edx = to32i(esp+0x10); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(ecx, ecx);
	xor_(ebx, ebx);
	cl = to8i(eax+0x1F); //mov
	bl = to8i(eax+0x20); //mov
	sar(ecx, (int32_t)4);
	shl(ebx, (int32_t)0xF);
	and_(ecx, (int32_t)0xF);
	imul32(ecx, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x21); //mov
	al = to8i(eax+0x1F); //mov
	shl(ebx, (int32_t)0xF);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, ebx);
	cmp(ecx, eax);
	if (jle())
		goto loc_4523DC;
	sub(to32i(esp), (int32_t)0x10000);
loc_4522F4:
	ebx = esp; //mov
	ecx = to32i(dword_512228); //mov
	edx = edi; //mov
	eax = ebp; //mov
	inc(esi);
	esp -= 4; _sub_4624B0(); esp += 4; //call
	cmp(esi, (int32_t)0x14);
	if (jle())
		goto loc_4522A1;
	ecx = to32i(dword_512228); //mov
	edx = edi; //mov
	xor_(ebx, ebx);
	eax = ebp; //mov
	to32i(esp) = ebx; //mov
	ebx = esp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
loc_452321:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D74+eax*4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_449AA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_452349;
	sar(edx, (int32_t)1);
loc_452349:
	to32i(ebp+0xA8) = 0; //mov
	to32i(ebp+0xAC) = 0; //mov
	esi = to32i(ebp+0xA0); //mov
	to32i(ebp+0xB0) = 0; //mov
	add(esi, edx);
	eax = ebp; //mov
	to32i(ebp+0xA0) = esi; //mov
	esp -= 4; _sub_452AC0(); esp += 4; //call
	to32i(ebp+0x16C) = 0x30; //mov
	to32i(ebp+0x2E8) = 0x30; //mov
loc_452390:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45239A:
	eax = 1; //mov
	goto loc_452198;
loc_4523A4:
	test(eax, eax);
	if (jge())
		goto loc_45222C;
	add(eax, to32i(dword_5118A0));
	goto loc_45222C;
loc_4523B7:
	cmp(ecx, (int32_t)0xE);
	if (jz())
		goto loc_4522AF;
	test(to8i(ebp+0x180), (int8_t)0x80);
	if (jnz())
		goto loc_4522AF;
	cmp(to32i(ebp+0x18), (int32_t)0);
	if (jz())
		goto loc_4522AF;
	goto loc_452321;
loc_4523DC:
	inc(to16i(esp+2));
	goto loc_4522F4;
}
Fn(void) Game::_sub_4523F0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x30);
	ebp = eax; //mov
	to32i(esp+0x1C) = edx; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_44F050; //mov
	edx = to32i(dword_512228); //mov
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jz())
		goto loc_452799;
	eax = 0xFFFFFFFF; //mov
loc_45241A:
	to32i(esp+0x24) = eax; //mov
	eax = ebp; //mov
	to32i(ebp+0x58C) = 0; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45243A;
	xor_(eax, eax);
loc_45243A:
	cmp(to32i(esp+0x1C), (int32_t)0);
	if (jz())
		goto loc_4527A3;
loc_452445:
	push32(ebx);
	ebx = to32i(ebp+0x17C); //mov
	ecx = to32i(ebp+0x14); //mov
	test(ebx, ebx);
	if (jz())
		goto loc_452455;
	ecx = ebx; //mov
loc_452455:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	to32i(ebp+0x17C) = 0; //mov
	esi = to32i(esp+0x28); //mov
	edx = to32i(dword_511D6C+eax*4); //mov
	imul32(edx, esi);
	eax = (int32_t)(intptr_t)(ecx+edx); //lea
	test(edx, edx);
	if (jl())
		goto loc_45286A;
	edx = to32i(dword_5118A0); //mov
	cmp(eax, edx);
	if (jl())
		goto loc_452498;
	sub(eax, edx);
loc_452498:
	edi = eax; //mov
	ebx = to32i(dword_512204); //mov
	esi = edi; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_45287D;
	eax = (int32_t)(intptr_t)(edi*8+0); //lea
	add(eax, edi);
	shl(eax, (int32_t)2);
	to32i(esp+0x1C) = eax; //mov
	edx = to32i(esp+0x1C); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	ecx = edx; //mov
	xor_(edx, edx);
	sar(ecx, (int32_t)4);
	dl = to8i(eax+0x20); //mov
	and_(ecx, (int32_t)0xF);
	shl(edx, (int32_t)0xF);
	imul32(ecx, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x21); //mov
	al = to8i(eax+0x1F); //mov
	shl(edx, (int32_t)0xF);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(edx, eax);
	sub(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(dword_512228); //mov
	to32i(esp+4) = eax; //mov
	edx = edi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	eax = to32i(esp+0x1C); //mov
	xor_(edi, edi);
	to32i(esp+0x2C) = eax; //mov
loc_45251E:
	edx = to32i(ebp+0x184); //mov
	test(edx, edx);
	if (jnz())
		goto loc_452A2E;
loc_45252C:
	edx = to32i(esp+0x2C); //mov
	eax = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(ecx, ecx);
	cl = to8i(eax+0x1F); //mov
	ebx = ecx; //mov
	xor_(ecx, ecx);
	sar(ebx, (int32_t)4);
	cl = to8i(eax+0x20); //mov
	and_(ebx, (int32_t)0xF);
	shl(ecx, (int32_t)0xF);
	imul32(ecx, ebx);
	xor_(ebx, ebx);
	bl = to8i(eax+0x21); //mov
	al = to8i(eax+0x1F); //mov
	shl(ebx, (int32_t)0xF);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(eax, ebx);
	cmp(ecx, eax);
	if (jle())
		goto loc_452A53;
	sub(to32i(esp+4), (int32_t)0x10000);
loc_452574:
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(dword_512228); //mov
	edx = esi; //mov
	eax = ebp; //mov
	inc(edi);
	esp -= 4; _sub_4624B0(); esp += 4; //call
	cmp(edi, (int32_t)0x14);
	if (jle())
		goto loc_45251E;
	ecx = to32i(dword_512228); //mov
	edx = esi; //mov
	xor_(ebx, ebx);
	eax = ebp; //mov
	to32i(esp+4) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
loc_4525A1:
	esp -= 4; _sub_4624B0(); esp += 4; //call
loc_4525A6:
	cmp(to32i(esp+0x20), (int32_t)0);
	if (jnz())
		goto loc_4525DB;
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	edx = to32i(dword_511D74+eax*4); //mov
	eax = ebp; //mov
	esp -= 4; _sub_449AA0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4525D5;
	sar(edx, (int32_t)1);
loc_4525D5:
	add(to32i(ebp+0xA0), edx);
loc_4525DB:
	edx = to32i(dword_512204); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)2);
	add(eax, edx);
	ebx = to32i(dword_511D78+eax*4); //mov
	eax = to32i(esp+0x28); //mov
	add(eax, eax);
	edx = eax; //mov
	shl(eax, (int32_t)4);
	sub(eax, edx);
	test(eax, eax);
	if (jl())
		goto loc_452A5D;
	edx = to32i(ebp+0x14); //mov
	ecx = to32i(dword_5118A0); //mov
	add(eax, edx);
	cmp(eax, ecx);
	if (jl())
		goto loc_45261C;
	sub(eax, ecx);
loc_45261C:
	edx = eax; //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	add(eax, edx);
	edx = to32i(eax+0xC); //mov
	sar(edx, (int32_t)0x18);
	shl(edx, (int32_t)9);
	to32i(esp+0x10) = edx; //mov
	edx = to32i(eax+0xD); //mov
	eax = to32i(eax+0xE); //mov
	sar(edx, (int32_t)0x18);
	sar(eax, (int32_t)0x18);
	shl(edx, (int32_t)9);
	shl(eax, (int32_t)9);
	to32i(esp+0x14) = edx; //mov
	to32i(esp+0x18) = eax; //mov
	edx = to32i(ebp+0x130); //mov
	eax = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0x134); //mov
	eax = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x138); //mov
	add(ecx, eax);
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	test(eax, eax);
	if (jle())
		goto loc_452A73;
	eax = to32i(esp+0x10); //mov
	edx = to32i(ebp+0x130); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0x134); //mov
	eax = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x138); //mov
	add(ecx, eax);
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
loc_4526E4:
	edx = ecx; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xDC); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = ecx; //mov
	to32i(ebp+0xA8) = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xE0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = ecx; //mov
	to32i(ebp+0xAC) = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xE4); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ebp+0xB0) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_452AC0(); esp += 4; //call
	pop32(ebx);
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_452799:
	eax = 1; //mov
	goto loc_45241A;
loc_4527A3:
	edx = to32i(ebp+0xD0); //mov
	eax = to32i(ebp+0x124); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0xD4); //mov
	eax = to32i(ebp+0x128); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xD8); //mov
	add(ecx, eax);
	eax = to32i(ebp+0x12C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	cmp(eax, (int32_t)0xC000);
	if (jle())
		goto loc_452445;
	cmp(to32i(ebp+0xE8), (int32_t)0x10000);
	if (jge())
		goto loc_452445;
	cmp(to32i(ebp+0xF0), (int32_t)0x10000);
	if (jge())
		goto loc_452445;
	edi = to32i(ebp+0x184); //mov
	cmp(edi, (int32_t)0xE);
	if (jz())
		goto loc_452445;
	test(edi, edi);
	if (jz())
		goto loc_452445;
	cmp(to32i(ebp+0x17C), (int32_t)0);
	if (jnz())
		goto loc_452445;
	cmp(to16i(ebp+0x14C), (int16_t)5);
	if (ja())
		goto loc_452445;
	cmp(to32i(ebp+0x15C), (int32_t)0x9999);
	if (jge())
		goto loc_452445;
	to32i(ebp+0x58C) = 0; //mov
	add(esp, (int32_t)0x30);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_45286A:
	test(eax, eax);
	if (jge())
		goto loc_452498;
	add(eax, to32i(dword_5118A0));
	goto loc_452498;
loc_45287D:
	ah = to8i(ebp+0x1F4); //mov
	ecx = 8; //mov
	test(ah, (int8_t)4);
	if (jnz())
		goto loc_452892;
	ecx = 0xFFFFFFF8; //mov
loc_452892:
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	ebx = to32i(esp+0x28); //mov
	imul32(ecx, ebx);
	shl(eax, (int32_t)3);
	esi = (int32_t)(intptr_t)(eax+ecx); //lea
	eax = to32i(ebp+0x1E8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	imul32(eax, ebx);
	add(esi, eax);
	ecx = to32i(dword_5118A0); //mov
	edx = esi; //mov
	eax = esi; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	esi = edx; //mov
	test(edx, edx);
	if (jl())
		goto loc_4529BC;
loc_4528DB:
	eax = to32i(ebp+0x1E8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = (int32_t)(intptr_t)(eax+eax); //lea
	eax = (int32_t)(intptr_t)(esi*8+0); //lea
	add(eax, esi);
	ebx = to32i(ebp+0x1E8); //mov
	shl(eax, (int32_t)2);
	cmp(ecx, ebx);
	if (jnz())
		goto loc_4529C3;
	edx = to32i(dword_5118A4); //mov
	add(eax, edx);
	xor_(edx, edx);
	dl = to8i(eax+0x1F); //mov
	sar(edx, (int32_t)4);
	al = to8i(eax+0x20); //mov
	and_(edx, (int32_t)0xF);
	ecx = eax; //mov
	and_(ecx, (int32_t)0xFF);
	shl(ecx, (int32_t)0xF);
	imul32(ecx, edx);
	eax = to32i(ebp+0x108); //mov
	edx = 0x18000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(eax, ecx);
	to32i(esp+4) = eax; //mov
	to32i(esp+0x24) = 1; //mov
loc_45294E:
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(dword_512228); //mov
	edx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_4624B0(); esp += 4; //call
	eax = to32i(esp+0x24); //mov
	shl(eax, (int32_t)0x10);
	xor_(edi, edi);
	to32i(esp+0x30) = eax; //mov
loc_45296E:
	eax = to32i(ebp+0x184); //mov
	test(eax, eax);
	if (jnz())
		goto loc_452A09;
loc_45297C:
	eax = to32i(esp+0x30); //mov
	ebx = to32i(esp+4); //mov
	ecx = to32i(dword_512228); //mov
	add(ebx, eax);
	edx = esi; //mov
	to32i(esp+4) = ebx; //mov
	eax = ebp; //mov
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	inc(edi);
	esp -= 4; _sub_4624B0(); esp += 4; //call
	cmp(edi, (int32_t)0x1E);
	if (jle())
		goto loc_45296E;
	ebx = (int32_t)(intptr_t)(esp+4); //lea
	ecx = to32i(dword_512228); //mov
	edx = esi; //mov
	xor_(edi, edi);
	eax = ebp; //mov
	to32i(esp+4) = edi; //mov
	goto loc_4525A1;
loc_4529BC:
	xor_(esi, edx);
	goto loc_4528DB;
loc_4529C3:
	edx = to32i(dword_5118A4); //mov
	xor_(ecx, ecx);
	cl = to8i(edx+eax+0x21); //mov
	al = to8i(edx+eax+0x1F); //mov
	shl(ecx, (int32_t)0xF);
	and_(al, (int8_t)0xF);
	and_(eax, (int32_t)0xFF);
	imul32(ecx, eax);
	edx = 0x18000; //mov
	eax = to32i(ebp+0x108); //mov
	edi = 0xFFFFFFFF; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x24) = edi; //mov
	to32i(esp+4) = ecx; //mov
	goto loc_45294E;
loc_452A09:
	cmp(eax, (int32_t)0xE);
	if (jz())
		goto loc_45297C;
	test(to8i(ebp+0x180), (int8_t)0x80);
	if (jnz())
		goto loc_45297C;
	cmp(to32i(ebp+0x18), (int32_t)0);
	if (jz())
		goto loc_45297C;
	goto loc_4525A6;
loc_452A2E:
	cmp(edx, (int32_t)0xE);
	if (jz())
		goto loc_45252C;
	test(to8i(ebp+0x180), (int8_t)0x80);
	if (jnz())
		goto loc_45252C;
	cmp(to32i(ebp+0x18), (int32_t)0);
	if (jz())
		goto loc_45252C;
	goto loc_4525A6;
loc_452A53:
	inc(to16i(esp+6));
	goto loc_452574;
loc_452A5D:
	add(eax, to32i(ebp+0x14));
	test(eax, eax);
	if (jge())
		goto loc_45261C;
	add(eax, to32i(dword_5118A0));
	goto loc_45261C;
loc_452A73:
	eax = to32i(esp+0x10); //mov
	edx = to32i(ebp+0x130); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0x134); //mov
	eax = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x138); //mov
	add(ecx, eax);
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	neg(ecx);
	goto loc_4526E4;
}
Fn(void) Game::_sub_452AC0()
{
	push32(ecx);
	push32(edx);
	to32i(eax+0xE8) = 0; //mov
	to32i(eax+0xEC) = 0; //mov
	to32i(eax+0xF0) = 0; //mov
	to32i(eax+0x2BC) = 0; //mov
	to32i(eax+0x2C0) = 0; //mov
	to32i(eax+0x2C4) = 0; //mov
	to32i(eax+0x2A4) = 0; //mov
	to32i(eax+0x2A8) = 0; //mov
	ecx = to32i(dword_512204); //mov
	to32i(eax+0x2AC) = 0; //mov
	edx = (int32_t)(intptr_t)(ecx*8+0); //lea
	to32i(eax+0x2E8) = 0; //mov
	sub(edx, ecx);
	to16i(eax+0x14C) = 1; //mov
	shl(edx, (int32_t)2);
	to32i(eax+0x160) = 0; //mov
	add(edx, ecx);
	to32i(eax+0x164) = 0; //mov
	edx = to32i(dword_511D68+edx*4); //mov
	to32i(eax+0x158) = 0; //mov
	to8i(eax+0x90) = 0; //mov
	to8i(eax+0x8E) = 0; //mov
	to32i(eax+0x58C) = 0; //mov
	to32i(eax+0x17C) = 0; //mov
	to32i(eax+0x660) = 0; //mov
	to32i(eax+0x664) = 0; //mov
	to32i(eax+0x668) = 0; //mov
	to32i(eax+0x66C) = 0; //mov
	to32i(eax+0x670) = 0; //mov
	to32i(eax+0x16C) = edx; //mov
	esp -= 4; _sub_46A210(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_452BD0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = to32i(dword_511E34); //mov
	edx = eax; //mov
	ecx = to32i(eax+0x21C); //mov
	eax = to32i(dword_511E3C); //mov
	ecx = to32i(ecx+4); //mov
	to32i(dword_511B48+eax*4) = edx; //mov
	to32i(dword_511AC8+eax*4) = edx; //mov
	to32i(dword_511A88+eax*4) = edx; //mov
	to32i(edx+0x1F4) = 0; //mov
	to32i(edx+0x1E8) = eax; //mov
	edi = to32i(dword_511E3C); //mov
	eax = to32i(edx+0x21C); //mov
	to32i(edx+0x1EC) = 0xFFFFFFFF; //mov
	inc(edi);
	esi = to32i(eax); //mov
	to32i(dword_511E3C) = edi; //mov
	shl(esi, (int32_t)3);
	edi = (int32_t)(intptr_t)(edx+0x1DC); //lea
	add(esi, (int32_t)(intptr_t)aMcf1);
	push32(edi);
loc_452C40:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_452C58;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_452C40;
loc_452C58:
	pop32(edi);
	test(cl, (int8_t)1);
	if (jnz())
		goto loc_452D4B;
loc_452C62:
	ebx = to32i(dword_511E34); //mov
	test(cl, (int8_t)2);
	if (jz())
		goto loc_452CCB;
	to32i(dword_511BC8+ebx*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)2);
	eax = to32i(dword_511E30); //mov
	to32i(dword_511C48+eax*4) = edx; //mov
	al = to8i(edx+0x1F4); //mov
	esi = to32i(dword_511E30); //mov
	or_(al, (int8_t)8);
	edi = to32i(dword_511E44); //mov
	to8i(edx+0x1F4) = al; //mov
	eax = to32i(dword_511E44); //mov
	inc(ebx);
	inc(esi);
	to32i(dword_511CC8+eax*4) = edx; //mov
	inc(edi);
	ah = to8i(edx+0x1F4); //mov
	to32i(dword_511E30) = esi; //mov
	or_(ah, (int8_t)1);
	to32i(dword_511E44) = edi; //mov
	to8i(edx+0x1F4) = ah; //mov
loc_452CCB:
	test(cl, (int8_t)4);
	if (jz())
		goto loc_452D07;
	to32i(dword_511BC8+ebx*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)2);
	eax = to32i(dword_511E48); //mov
	ebp = to32i(dword_511E48); //mov
	to32i(dword_511C08+eax*4) = edx; //mov
	inc(ebx);
	ah = to8i(edx+0x1F4); //mov
	inc(ebp);
	or_(ah, (int8_t)0x10);
	to32i(dword_511E48) = ebp; //mov
	to8i(edx+0x1F4) = ah; //mov
loc_452D07:
	test(cl, (int8_t)8);
	if (jz())
		goto loc_452D39;
	to32i(dword_511BC8+ebx*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)2);
	eax = to32i(dword_511E38); //mov
	to32i(dword_511B08+eax*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)0x20);
	eax = to32i(dword_511E38); //mov
	inc(eax);
	inc(ebx);
	to32i(dword_511E38) = eax; //mov
loc_452D39:
	test(cl, (int8_t)0x10);
	if (jnz())
		goto loc_452D9B;
	to32i(dword_511E34) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_452D4B:
	eax = to32i(dword_511E40); //mov
	to32i(edx+0x1EC) = eax; //mov
	to32i(dword_511D08+eax*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)4);
	eax = to32i(dword_511E44); //mov
	to32i(dword_511CC8+eax*4) = edx; //mov
	al = to8i(edx+0x1F4); //mov
	or_(al, (int8_t)1);
	ebp = to32i(dword_511E40); //mov
	to8i(edx+0x1F4) = al; //mov
	eax = to32i(dword_511E44); //mov
	inc(ebp);
	inc(eax);
	to32i(dword_511E40) = ebp; //mov
	to32i(dword_511E44) = eax; //mov
	goto loc_452C62;
loc_452D9B:
	eax = to32i(dword_511E4C); //mov
	to32i(dword_511C88+eax*4) = edx; //mov
	or_(to8i(edx+0x1F4), (int8_t)0x40);
	edx = (int32_t)(intptr_t)(eax+1); //lea
	to32i(dword_511E4C) = edx; //mov
	to32i(dword_511E34) = ebx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_452DD0()
{
	push32(ecx);
	push32(edx);
	ecx = (int32_t)(intptr_t)(eax+0x220); //lea
	to32i(ecx) = 0; //mov
	to32i(ecx+4) = 0; //mov
	to32i(ecx+8) = 0; //mov
	to32i(ecx+0xC) = 0; //mov
	to32i(ecx+0x10) = 0; //mov
	eax = ecx; //mov
	to32i(ecx+0x14) = 0x200; //mov
	edx = (int32_t)(intptr_t)(ecx+0x20); //lea
loc_452E06:
	add(eax, (int32_t)4);
	to32i(eax+0x34) = 0; //mov
	to32i(eax+0x14) = 0; //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_452E06;
	to32i(ecx+0x5C) = 0; //mov
	to32i(ecx+0x60) = 0; //mov
	to32i(ecx+0x58) = 0; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_452E40()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_511E44) = edx; //mov
	to32i(dword_511E34) = edx; //mov
	to32i(dword_511E4C) = edx; //mov
	to32i(dword_511E40) = edx; //mov
	to32i(dword_511E30) = edx; //mov
	to32i(dword_511E48) = edx; //mov
	to32i(dword_511E38) = edx; //mov
	to32i(dword_511E3C) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_452E80()
{
	push32(esi);
	push32(edi);
	edi = edx; //mov
	esi = ebx; //mov
	ebx = ecx; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	to32i(eax+edx*8+0x594) = edi; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	to32i(eax+edx*8+0x598) = esi; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	to32i(eax+edx*8+0x59C) = ebx; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	ecx = to32i(esp+0xC); //mov
	to32i(eax+edx*8+0x5A0) = ecx; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	ecx = to32i(esp+0x10); //mov
	to32i(eax+edx*8+0x5A4) = ecx; //mov
	ecx = to32i(eax+0x590); //mov
	edx = (int32_t)(intptr_t)(ecx*4+0); //lea
	sub(edx, ecx);
	ecx = to32i(esp+0x14); //mov
	to32i(eax+edx*8+0x5A8) = ecx; //mov
	inc(to32i(eax+0x590));
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_452F30()
{
	push32(ecx);
	ecx = to32i(eax+0x2EC); //mov
	ecx = to32i(ecx+0xF0); //mov
	to32i(edx) = ecx; //mov
	eax = to32i(eax+0x2EC); //mov
	eax = to32i(eax+0xF4); //mov
	to32i(ebx) = eax; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_452F50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0x28);
	esi = eax; //mov
	add(eax, (int32_t)0x98);
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
	if (jnz())
		goto loc_452FBD;
loc_452FB5:
	add(esp, (int32_t)0x28);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_452FBD:
	eax = (int32_t)(intptr_t)(esi+0xC4); //lea
	edx = esp; //mov
	ebx = eax; //mov
	esp -= 4; _sub_49E840(); esp += 4; //call
	ah = to8i(esi+0x8F); //mov
	dec(ah);
	to8i(esi+0x8F) = ah; //mov
	test(ah, ah);
	if (jbe())
		goto loc_452FE5;
	cmp(to32i(esp+0x24), (int32_t)0);
	if (jz())
		goto loc_452FB5;
loc_452FE5:
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
Fn(void) Game::_sub_453010()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	ecx = eax; //mov
	edx = to32i(eax+0x218); //mov
	eax = to32i(eax+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	add(to32i(ecx+0x9C), eax);
	eax = to32i(ecx+0xAC); //mov
	edx = to32i(ecx+0x218); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ebx = to32i(ecx+0xA0); //mov
	edx = to32i(ecx+0x218); //mov
	add(ebx, eax);
	eax = to32i(ecx+0xB0); //mov
	to32i(ecx+0xA0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	esi = to32i(ecx+0xA4); //mov
	add(esi, eax);
	eax = to32i(ecx+0x218); //mov
	to32i(ecx+0xA4) = esi; //mov
	to32i(ecx+0x94) = eax; //mov
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4530C0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xAC);
	ebp = eax; //mov
	to32i(esp+0xA8) = edx; //mov
	eax = to32i(eax+0x184); //mov
	cmp(to32i(dword_4D6030+eax*4), (int32_t)0);
	if (jz())
		goto loc_453193;
	eax = to32i(ebp+0x24); //mov
	edx = to32i(eax+4); //mov
	eax = to32i(eax+2); //mov
	sar(edx, (int32_t)0x10);
	sar(eax, (int32_t)0x10);
	add(eax, edx);
	cmp(eax, (int32_t)0xFFFFFFFE);
	if (jz())
		goto loc_453200;
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dx = to16i(eax+0x1A); //mov
	shl(edx, (int32_t)8);
	ax = to16i(eax+0x1C); //mov
	and_(eax, (int32_t)0xFFFF);
	shl(eax, (int32_t)8);
	cmp(edx, eax);
	if (jle())
		goto loc_453134;
	eax = edx; //mov
loc_453134:
	ecx = to32i(ebp+0xC0); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_45319F;
	edx = ecx; //mov
loc_453140:
	sub(edx, eax);
	test(edx, edx);
	if (jle())
		goto loc_4531AB;
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(eax, edx);
	xor_(edx, edx);
	dx = to16i(eax+0x1A); //mov
	shl(edx, (int32_t)8);
	ax = to16i(eax+0x1C); //mov
	and_(eax, (int32_t)0xFFFF);
	shl(eax, (int32_t)8);
	cmp(edx, eax);
	if (jle())
		goto loc_453178;
	eax = edx; //mov
loc_453178:
	esi = to32i(ebp+0xC0); //mov
	test(esi, esi);
	if (jle())
		goto loc_4531A5;
	edx = esi; //mov
loc_453184:
	sub(edx, eax);
	eax = edx; //mov
loc_453188:
	cmp(eax, (int32_t)0x30000);
	if (jg())
		goto loc_453200;
loc_453193:
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45319F:
	edx = ecx; //mov
	neg(edx);
	goto loc_453140;
loc_4531A5:
	edx = esi; //mov
	neg(edx);
	goto loc_453184;
loc_4531AB:
	edx = to32i(ebp+0x14); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
	xor_(eax, eax);
	ax = to16i(edx+0x1A); //mov
	shl(eax, (int32_t)8);
	dx = to16i(edx+0x1C); //mov
	and_(edx, (int32_t)0xFFFF);
	shl(edx, (int32_t)8);
	cmp(eax, edx);
	if (jle())
		goto loc_4531F0;
loc_4531DC:
	ebx = to32i(ebp+0xC0); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4531F4;
	edx = ebx; //mov
	sub(edx, eax);
	eax = edx; //mov
	neg(eax);
	goto loc_453188;
loc_4531F0:
	eax = edx; //mov
	goto loc_4531DC;
loc_4531F4:
	edx = ebx; //mov
	neg(edx);
	sub(edx, eax);
	eax = edx; //mov
	neg(eax);
	goto loc_453188;
loc_453200:
	ecx = 0x20; //mov
	xor_(edi, edi);
	esi = (int32_t)(intptr_t)(ebp+8); //lea
	to32i(esp+0xA4) = edi; //mov
	edi = esp; //mov
	while (ecx) //rep
	{
		movsd();
		--ecx;
	};
	eax = to32i(ebp+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xDC); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x8C) = eax; //mov
	eax = to32i(ebp+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xE0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x90) = eax; //mov
	eax = to32i(ebp+0x110); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xE4); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x94) = eax; //mov
	edx = to32i(esp+0x8C); //mov
	eax = to32i(ebp+0x9C); //mov
	add(edx, eax);
	to32i(esp+0x8C) = edx; //mov
	ecx = to32i(esp+0x90); //mov
	eax = to32i(ebp+0xA0); //mov
	add(ecx, eax);
	to32i(esp+0x90) = ecx; //mov
	ebx = to32i(esp+0x94); //mov
	eax = to32i(ebp+0xA4); //mov
	edx = esp; //mov
	add(ebx, eax);
	eax = (int32_t)(intptr_t)(esp+0x8C); //lea
	to32i(esp+0x94) = ebx; //mov
	ebx = 1; //mov
	esp -= 4; _sub_44A6D0(); esp += 4; //call
	esi = to32i(esp+0x10); //mov
	test(esi, esi);
	if (jnz())
		goto loc_45336B;
	cmp(to32i(ebp+0x17C), (int32_t)0);
	if (jnz())
		goto loc_4535A1;
loc_45330F:
	eax = to32i(esp+0x98); //mov
	to32i(esp+0x80) = eax; //mov
	xor_(eax, eax);
	to32i(esp+0x84) = eax; //mov
	eax = to32i(esp+0xA0); //mov
	to32i(esp+0x88) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x80); //lea
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(esp+0x88); //mov
	push32(edx);
	ecx = to32i(esp+0x88); //mov
	push32(ecx);
	ebx = to32i(esp+0x88); //mov
	push32(ebx);
	eax = ebp; //mov
	esp -= 4; _sub_4613E0(); esp += 4; //call
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45336B:
	cmp(to16i(esp+0x6E), (int16_t)0);
	if (jz())
		goto loc_4535A1;
	test(esi, esi);
	if (jz())
		goto loc_4534A9;
	eax = to32i(esp+0x18); //mov
	eax = to16i(eax); //movsx
	add(eax, eax);
loc_453388:
	to32i(esp+0x98) = eax; //mov
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_4534CB;
	eax = to32i(esp+0x18); //mov
	eax = to32i(eax); //mov
	sar(eax, (int32_t)0x10);
	add(eax, eax);
loc_4533A5:
	edx = to32i(esp+0x10); //mov
	to32i(esp+0x9C) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_4534ED;
	ecx = to32i(esp+0x18); //mov
	ecx = to32i(ecx+2); //mov
	sar(ecx, (int32_t)0x10);
	add(ecx, ecx);
loc_4533C4:
	edx = to32i(esp+0xA8); //mov
	eax = to32i(esp+0x98); //mov
	edx = to32i(edx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xA8); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x9C); //mov
	edx = to32i(edx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0xA8); //mov
	add(ebx, eax);
	eax = ecx; //mov
	edx = to32i(edx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+0xA0) = ecx; //mov
	cmp(ebx, (int32_t)0xDEB8);
	if (jl())
		goto loc_453511;
	cmp(ebx, (int32_t)0xFAE1);
	if (jge())
		goto loc_4535A1;
loc_453434:
	edx = to32i(esp+0xA8); //mov
	ebx = to32i(esp+0x98); //mov
	edx = to32i(edx); //mov
	add(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0xA8); //mov
	to32i(edx) = eax; //mov
	esi = to32i(esp+0x9C); //mov
	edx = to32i(edx+4); //mov
	add(edx, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0xA8); //mov
	to32i(edx+4) = eax; //mov
	edi = to32i(esp+0xA0); //mov
	edx = to32i(edx+8); //mov
	add(edx, edi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0xA8); //mov
	to32i(edx+8) = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_45E760(); esp += 4; //call
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4534A9:
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+9); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_453388;
loc_4534CB:
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(eax, edx);
	edx = to32i(dword_5118A4); //mov
	eax = to32i(edx+eax*4+0xA); //mov
	sar(eax, (int32_t)0x18);
	shl(eax, (int32_t)9);
	goto loc_4533A5;
loc_4534ED:
	edx = to32i(esp+0xC); //mov
	eax = (int32_t)(intptr_t)(edx*8+0); //lea
	add(edx, eax);
	eax = to32i(dword_5118A4); //mov
	shl(edx, (int32_t)2);
	ecx = to32i(edx+eax+0xB); //mov
	sar(ecx, (int32_t)0x18);
	shl(ecx, (int32_t)9);
	goto loc_4533C4;
loc_453511:
	edx = to32i(esp+0x98); //mov
	eax = to32i(ebp+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x9C); //mov
	esi = eax; //mov
	eax = to32i(ebp+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	add(esi, eax);
	eax = to32i(ebp+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	test(eax, eax);
	if (jge())
		goto loc_453434;
	eax = to32i(esp+0xA8); //mov
	ecx = to32i(esp+0x9C); //mov
	cmp(ecx, to32i(eax+4));
	if (jge())
		goto loc_453434;
	cmp(to32i(ebp+0xBC), (int32_t)0x1B0000);
	if (jge())
		goto loc_453594;
loc_453582:
	cmp(to32i(ebp+0x2B8), (int32_t)0);
	if (jl())
		goto loc_453434;
	goto loc_45330F;
loc_453594:
	cmp(ebx, (int32_t)0xB333);
	if (jl())
		goto loc_453582;
	goto loc_453434;
loc_4535A1:
	edx = to32i(esp+0xA4); //mov
	cmp(edx, (int32_t)1);
	if (jz())
		goto loc_45330F;
	cmp(edx, (int32_t)2);
	if (jz())
		goto loc_453434;
	add(esp, (int32_t)0xAC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4535D0()
{
	push32(esi);
	push32(edi);
	esi = to32i(esp+0x14); //mov
	edi = to32i(eax+0x2F0); //mov
	to32i(edx) = edi; //mov
	xor_(edx, edx);
	dl = to8i(eax+0x2DA); //mov
	to32i(ebx) = edx; //mov
	edx = to32i(eax+0x2B8); //mov
	to32i(ecx) = edx; //mov
	ecx = to32i(esp+0xC); //mov
	edx = to32i(eax+0x2E4); //mov
	to32i(ecx) = edx; //mov
	ecx = to32i(esp+0x10); //mov
	edx = to32i(eax+0x2AC); //mov
	to32i(ecx) = edx; //mov
	edx = to32i(eax+0x2A4); //mov
	to32i(esi) = edx; //mov
	edx = to32i(eax+0x2B8); //mov
	test(edx, edx);
	if (jle())
		goto loc_453644;
loc_45361A:
	cmp(edx, (int32_t)0x10000);
	if (jl())
		goto loc_453648;
	ecx = to32i(eax+0x2B8); //mov
	test(ecx, ecx);
	if (jle())
		goto loc_45365D;
	edx = ecx; //mov
loc_45362E:
	cmp(edx, (int32_t)0x50000);
	if (jge())
		goto loc_45363F;
	cmp(to8i(eax+0x2D7), (int8_t)0x80);
	if (jb())
		goto loc_453663;
loc_45363F:
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_453644:
	neg(edx);
	goto loc_45361A;
loc_453648:
	eax = to32i(esp+0x10); //mov
	to32i(esi) = 0; //mov
	to32i(eax) = 0; //mov
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_45365D:
	edx = ecx; //mov
	neg(edx);
	goto loc_45362E;
loc_453663:
	to32i(esi) = 0; //mov
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_453670()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	sub(esp, (int32_t)0xC);
	ecx = eax; //mov
	esi = edx; //mov
	test(to8i(eax+0x1F4), (int8_t)0x10);
	if (jnz())
		goto loc_453695;
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_453695;
	cmp(to8i(ecx+0x2D8), (int8_t)0xA);
	if (jb())
		goto loc_45369C;
loc_453695:
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45369C:
	edx = to32i(ecx+0xDC); //mov
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ecx+0xE0); //mov
	eax = 0xFFF60000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xE4); //mov
	add(ebx, eax);
	xor_(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(esp+8) = ebx; //mov
	test(esi, esi);
	if (jz())
		goto loc_4536F6;
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	to32i(esp+8) = eax; //mov
loc_4536F6:
	eax = to32i(esp+8); //mov
	edx = to32i(ecx+0x94); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+8) = eax; //mov
	edx = ebx; //mov
	eax = to32i(ecx+0x2AC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_4D5EF4); //mov
	cmp(eax, edx);
	if (jg())
		goto loc_45375B;
	cmp(to32i(dword_512204), (int32_t)0);
	if (jz())
		goto loc_45375B;
	neg(edx);
	cmp(eax, edx);
	if (jge())
		goto loc_453695;
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	add(to32i(ecx+0x2AC), eax);
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45375B:
	eax = to32i(esp+8); //mov
	add(to32i(ecx+0x2AC), eax);
	add(esp, (int32_t)0xC);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_453780()
{
	cmp(to32i(dword_4D6260), (int32_t)0);
	if (jnz())
		goto loc_45378A;
	return;
loc_45378A:
	push32(ecx);
	xor_(ecx, ecx);
	eax = (int32_t)(intptr_t)sub_4537F0; //mov
	to32i(dword_4D6260) = ecx; //mov
	esp -= 4; _sub_483AC0(); esp += 4; //call
	pop32(ecx);
}
Fn(void) Game::_sub_4537A0()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_511E60) = edx; //mov
	cmp(to32i(dword_4D6260), (int32_t)0);
	if (jz())
		goto loc_4537B4;
	pop32(edx);
	return;
loc_4537B4:
	push32(ebx);
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)sub_4537F0; //mov
	to32i(dword_4D6260) = ebx; //mov
	esp -= 4; _sub_483A70(); esp += 4; //call
	to32i(dword_511E54) = edx; //mov
	to32i(dword_511E58) = edx; //mov
	to32i(dword_511E5C) = edx; //mov
	to32i(dword_512A3C) = edx; //mov
	pop32(ebx);
	pop32(edx);
}
Fn(void) Game::_sub_4537F0()
{
	push32(edx);
	inc(to32i(dword_511E54));
	edx = to32i(dword_511E60); //mov
	inc(to32i(dword_511E60));
	test(to8i(dword_511E54), (int8_t)1);
	if (jnz())
		goto loc_45381B;
	inc(to32i(dword_511E58));
	test(to8i(dword_511E58), (int8_t)1);
	if (jz())
		goto loc_45381D;
loc_45381B:
	pop32(edx);
	return;
loc_45381D:
	push32(esi);
	esi = to32i(dword_511E5C); //mov
	eax = (int32_t)(intptr_t)dword_4EFCC8; //mov
	inc(esi);
	edx = to32i(dword_511E50); //mov
	to32i(dword_511E5C) = esi; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_453840()
{
	esp -= 4; _sub_489E0C(); esp += 4; //call
	to32i(dword_511E50) = eax; //mov
loc_45384A:
	eax = to32i(dword_511E50); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	esp -= 4; _sub_45BB50(); esp += 4; //call
	esp -= 4; _sub_45BAD0(); esp += 4; //call
	goto loc_45384A;
}
Fn(void) Game::_sub_453860()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(ebp);
	sub(esp, (int32_t)0x48);
	ebp = eax; //mov
	edx = 1; //mov
	ecx = to32i(eax+0x16C); //mov
	to32i(esp+0x30) = edx; //mov
	test(ecx, ecx);
	if (jle())
		goto loc_453886;
	ebx = ecx; //mov
	sub(ebx, edx);
	to32i(eax+0x16C) = ebx; //mov
loc_453886:
	cmp(to8i(ebp+0x8C), (int8_t)0);
	if (jnz())
		goto loc_453CD5;
	cmp(to8i(ebp+0x8D), (int8_t)0);
	if (jz())
		goto loc_453CD5;
	cmp(to32i(ebp+0x16C), (int32_t)0);
	if (jnz())
		goto loc_4538B5;
	cmp(to32i(ebp+0x88), (int32_t)0x640000);
	if (jle())
		goto loc_4538BB;
loc_4538B5:
	xor_(eax, eax);
	to32i(esp+0x30) = eax; //mov
loc_4538BB:
	push32(edi);
	push32(esi);
	test(to8i(ebp+0x180), (int8_t)0x40);
	if (jz())
		goto loc_453A91;
	cmp(to32i(esp+0x38), (int32_t)0);
	if (jz())
		goto loc_453A91;
	edx = (int32_t)(intptr_t)(ebp+8); //lea
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_449E10(); esp += 4; //call
	to32i(esp+0x48) = ecx; //mov
	to32i(esp+0x40) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_453A91;
	eax = (int32_t)(intptr_t)(ebp+0x9C); //lea
	to32i(esp+0x3C) = edx; //mov
	to32i(esp+0x44) = eax; //mov
loc_4538FF:
	ecx = (int32_t)(intptr_t)(esp+0x4C); //lea
	ebx = (int32_t)(intptr_t)(esp+0x2C); //lea
	edx = to32i(esp+0x48); //mov
	eax = to32i(esp+0x3C); //mov
	esp -= 4; _sub_449D90(); esp += 4; //call
	edx = to32i(esp+0x44); //mov
	eax = (int32_t)(intptr_t)(esp+0x2C); //lea
	esi = to32i(esp+0x4A); //mov
	esp -= 4; _sub_45EF20(); esp += 4; //call
	sar(esi, (int32_t)0x10);
	edx = to32i(ebp+0x114); //mov
	shl(esi, (int32_t)8);
	add(edx, esi);
	cmp(eax, edx);
	if (jge())
		goto loc_453A7C;
	eax = (int32_t)(intptr_t)(esi+esi); //lea
	cmp(eax, to32i(ebp+0x15C));
	if (jle())
		goto loc_453A7C;
	ecx = (int32_t)(intptr_t)(esp+8); //lea
	edx = (int32_t)(intptr_t)(esp+0x2C); //lea
	ebx = esi; //mov
	eax = ebp; //mov
	esp -= 4; _sub_453D30(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_453A7C;
	edx = to32i(esp+0x48); //mov
	eax = ebp; //mov
	esp -= 4; _sub_4467D0(); esp += 4; //call
	ecx = to32i(esp+0x10); //mov
	ebx = to32i(esp+8); //mov
	edi = eax; //mov
	edx = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_478FD0(); esp += 4; //call
	test(edi, edi);
	if (jle())
		goto loc_453CDD;
	xor_(eax, eax);
	to32i(esp+0x18) = eax; //mov
	edx = to32i(esp+0x2C); //mov
	eax = to32i(ebp+0x9C); //mov
	sub(eax, edx);
	to32i(esp+0x14) = eax; //mov
	ecx = to32i(esp+0x34); //mov
	eax = to32i(ebp+0xA4); //mov
	sub(eax, ecx);
	edx = esi; //mov
	to32i(esp+0x1C) = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	sar(edx, (int32_t)0x1F);
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = esi; //mov
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x14); //mov
	imul32(edx, eax);
	ecx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x18); //mov
	imul32(edx, ecx);
	to32i(esp+0x20) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x1C); //mov
	imul32(edx, ecx);
	to32i(esp+0x24) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ebx = to32i(esp+0x20); //mov
	esi = to32i(esp+0x24); //mov
	edx = (int32_t)(intptr_t)(esp+0x14); //lea
	to32i(esp+0x28) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	edi = to32i(esp+0x28); //mov
	add(ebx, eax);
	eax = to32i(esp+0x30); //mov
	to32i(esp+0x20) = ebx; //mov
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	add(esi, eax);
	eax = to32i(esp+0x34); //mov
	to32i(esp+0x24) = esi; //mov
	add(edi, eax);
	eax = ebp; //mov
	to32i(esp+0x28) = edi; //mov
	esp -= 4; _sub_456420(); esp += 4; //call
	eax = to32i(ebp+0x160); //mov
	test(eax, eax);
	if (jz())
		goto loc_453A7C;
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0x168) = 0x60005; //mov
	edi = (int32_t)(intptr_t)(ebp+0x170); //lea
	esi = (int32_t)(intptr_t)(ebp+0x9C); //lea
	to32i(ebp+0x160) = eax; //mov
loc_453A79:
	movsd();
	movsd();
	movsd();
loc_453A7C:
	ebx = to32i(esp+0x48); //mov
	inc(ebx);
	esi = to32i(esp+0x40); //mov
	to32i(esp+0x48) = ebx; //mov
	cmp(ebx, esi);
	if (jl())
		goto loc_4538FF;
loc_453A91:
	test(to8i(ebp+0x180), (int8_t)0x80);
	if (jz())
		goto loc_453AA8;
	eax = ebp; //mov
	esp -= 4; _sub_4616E0(); esp += 4; //call
	eax = ebp; //mov
	esp -= 4; _sub_4610D0(); esp += 4; //call
loc_453AA8:
	cmp(to32i(esp+0x38), (int32_t)0);
	if (jz())
		goto loc_453CCC;
	eax = to32i(dword_4D62C4); //mov
	xor_(esi, esi);
	to32i(dword_511E64+eax*4) = ebp; //mov
	test(eax, eax);
	if (jle())
		goto loc_453CC6;
	xor_(edi, edi);
loc_453ACB:
	ecx = to32i(dword_511E64+edi); //mov
	eax = to32i(ebp+0xA4); //mov
	sub(eax, to32i(ecx+0xA4));
	test(eax, eax);
	if (jle())
		goto loc_453D12;
	edx = eax; //mov
loc_453AE7:
	ebx = to32i(ecx+0x114); //mov
	eax = to32i(ebp+0x114); //mov
	add(eax, ebx);
	cmp(edx, eax);
	if (jge())
		goto loc_453CB4;
	edx = to32i(ecx+0x9C); //mov
	eax = to32i(ebp+0x9C); //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_453D1B;
	edx = eax; //mov
loc_453B15:
	ebx = to32i(ecx+0x114); //mov
	eax = to32i(ebp+0x114); //mov
	add(eax, ebx);
	cmp(edx, eax);
	if (jge())
		goto loc_453CB4;
	edx = to32i(ecx+0xA0); //mov
	eax = to32i(ebp+0xA0); //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_453D24;
	edx = eax; //mov
loc_453B43:
	ebx = to32i(ecx+0x114); //mov
	eax = to32i(ebp+0x114); //mov
	add(eax, ebx);
	cmp(edx, eax);
	if (jge())
		goto loc_453CB4;
	eax = 0x6487E; //mov
	edx = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0xE8) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	to32i(ebp+0xEC) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ebp+0xF0) = eax; //mov
	eax = 0x6487E; //mov
	edx = to32i(ecx+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xEC); //mov
	to32i(ecx+0xE8) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xF0); //mov
	to32i(ecx+0xEC) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	to32i(ecx+0xF0) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_453F30(); esp += 4; //call
	eax = 0x28BE; //mov
	edx = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0xE8) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	to32i(ebp+0xEC) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ebp+0xF0) = eax; //mov
	eax = 0x28BE; //mov
	edx = to32i(ecx+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xEC); //mov
	to32i(ecx+0xE8) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ecx+0xF0); //mov
	to32i(ecx+0xEC) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ecx+0xF0) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_456BA0(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_456BA0(); esp += 4; //call
loc_453CB4:
	ebx = to32i(dword_4D62C4); //mov
	inc(esi);
	add(edi, (int32_t)4);
	cmp(esi, ebx);
	if (jl())
		goto loc_453ACB;
loc_453CC6:
	inc(to32i(dword_4D62C4));
loc_453CCC:
	eax = ebp; //mov
	esp -= 4; _sub_46A130(); esp += 4; //call
	pop32(esi);
	pop32(edi);
loc_453CD5:
	add(esp, (int32_t)0x48);
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_453CDD:
	if (jge())
		goto loc_453A7C;
	to32i(ebp+0x168) = 0x60005; //mov
	to32i(ebp+0x164) = 0; //mov
	edi = (int32_t)(intptr_t)(ebp+0x170); //lea
	esi = (int32_t)(intptr_t)(ebp+0x9C); //lea
	to32i(ebp+0x160) = 0xF0000; //mov
	goto loc_453A79;
loc_453D12:
	edx = eax; //mov
	neg(edx);
	goto loc_453AE7;
loc_453D1B:
	edx = eax; //mov
	neg(edx);
	goto loc_453B15;
loc_453D24:
	edx = eax; //mov
	neg(edx);
	goto loc_453B43;
}
Fn(void) Game::_sub_453D30()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	eax = to32i(edx); //mov
	edi = to32i(esi+0x9C); //mov
	sub(eax, edi);
	to32i(ecx) = eax; //mov
	eax = to32i(edx+8); //mov
	ebp = to32i(esi+0xA4); //mov
	to32i(ecx+4) = 0; //mov
	sub(eax, ebp);
	to32i(ecx+8) = eax; //mov
	edx = to32i(esi+0xC4); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xC8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xCC); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	test(eax, eax);
	if (jg())
		goto loc_453E84;
	edx = to32i(esi+0xC4); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xC8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xCC); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	neg(eax);
loc_453DDC:
	edx = to32i(esi+0x108); //mov
	add(edx, ebx);
	cmp(eax, edx);
	if (jg())
		goto loc_453E7E;
	edx = to32i(esi+0xDC); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xE0); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xE4); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	test(eax, eax);
	if (jle())
		goto loc_453EC7;
	edx = to32i(esi+0xDC); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xE0); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xE4); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	add(ebx, to32i(esi+0x110));
	cmp(eax, ebx);
	if (jle())
		goto loc_453F17;
loc_453E7E:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_453E84:
	edx = to32i(esi+0xC4); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xC8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xCC); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	goto loc_453DDC;
loc_453EC7:
	edx = to32i(esi+0xDC); //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(esi+0xE0); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esi+0xE4); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, edi);
	neg(eax);
	add(ebx, to32i(esi+0x110));
	cmp(eax, ebx);
	if (jle())
		goto loc_453F17;
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_453F17:
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_453F20()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_4D62C4) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_453F30()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	edi = eax; //mov
	esi = edx; //mov
	ecx = esp; //mov
	to32i(eax+0x160) = 0; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	to32i(edx+0x160) = 0; //mov
	esp -= 4; _sub_4543F0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_453F68;
loc_453F5F:
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_453F68:
	ecx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_455B60(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_453F5F;
	eax = edi; //mov
	esp -= 4; _sub_46A130(); esp += 4; //call
	eax = esi; //mov
	ebp = 8; //mov
	esp -= 4; _sub_46A130(); esp += 4; //call
loc_453F8E:
	ecx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_4543F0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_453FE9;
	test(ebp, ebp);
	if (jle())
		goto loc_453FE9;
	ecx = esp; //mov
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_455B60(); esp += 4; //call
	dec(ebp);
	test(eax, eax);
	if (jz())
		goto loc_453FDB;
	eax = edi; //mov
	esp -= 4; _sub_46A130(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_46A130(); esp += 4; //call
	test(ebp, ebp);
	if (jnz())
		goto loc_453F8E;
	eax = edi; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
	eax = esi; //mov
	esp -= 4; _sub_4540A0(); esp += 4; //call
	goto loc_453F8E;
loc_453FDB:
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_453FE9:
	ecx = esi; //mov
	dl = to8i(edi+0x2DD); //mov
	eax = edi; //mov
	test(dl, dl);
	if (jz())
		goto loc_454068;
loc_453FFB:
	edx = to32i(dword_51221C); //mov
	cmp(edx, (int32_t)6);
	if (jnz())
		goto loc_45407F;
loc_45400A:
	test(to8i(eax+0x1F4), (int8_t)4);
	if (jz())
		goto loc_454032;
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_454032;
	cmp(to32i(eax+0x2B8), (int32_t)0xFFF60000);
	if (jge())
		goto loc_454032;
	to32i(dword_4D8514) = 1; //mov
loc_454032:
	test(to8i(ecx+0x1F4), (int8_t)4);
	if (jz())
		goto loc_45405A;
	test(to8i(eax+0x1F4), (int8_t)0x40);
	if (jz())
		goto loc_45405A;
	cmp(to32i(ecx+0x2B8), (int32_t)0xFFF60000);
	if (jge())
		goto loc_45405A;
	to32i(dword_4D8514) = 1; //mov
loc_45405A:
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_454068:
	cmp(to8i(esi+0x2DD), (int8_t)0);
	if (jnz())
		goto loc_453FFB;
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45407F:
	cmp(edx, (int32_t)7);
	if (jz())
		goto loc_45400A;
	eax = 1; //mov
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4540A0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = eax; //mov
	esi = 1; //mov
	ah = to8i(dword_540F48); //mov
	xor_(edi, edi);
	ebp = esi; //mov
	test(ah, (int8_t)4);
	if (jz())
		goto loc_4540C4;
	esi = 0xFFFFFFFF; //mov
loc_4540C4:
	test(to8i(dword_540F48), (int8_t)8);
	if (jz())
		goto loc_4540D2;
	ebp = 0xFFFFFFFF; //mov
loc_4540D2:
	cmp(to32i(dword_512204), (int32_t)0);
	if (jz())
		goto loc_4540E9;
	test(to8i(ecx+0x1F4), (int8_t)0x40);
	if (jnz())
		goto loc_4540E9;
	edi = 1; //mov
loc_4540E9:
	eax = to32i(dword_4D6290+edi*4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0xE8); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xE8) = eax; //mov
	eax = to32i(dword_4D6290+edi*4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0xEC); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xEC) = eax; //mov
	eax = to32i(dword_4D6290+edi*4); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0xF0); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(ecx+0xF0) = eax; //mov
	edx = to32i(dword_4D6298+edi*4); //mov
	imul32(edx, esi);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x188); //mov
	imul32(edx, eax);
	esi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x18C); //mov
	imul32(edx, esi);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x190); //mov
	imul32(edx, esi);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ebx = to32i(ecx+0xE8); //mov
	esi = to32i(ecx+0xEC); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(ecx+0xF0); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(ecx+0xE8) = ebx; //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	to32i(ecx+0xEC) = esi; //mov
	add(edx, eax);
	to32i(ecx+0xF0) = edx; //mov
	edx = to32i(dword_4D62A0+edi*4); //mov
	imul32(edx, ebp);
	eax = edx; //mov
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
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x1A8); //mov
	imul32(edx, ebx);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	esi = to32i(ecx+0xEC); //mov
	ebp = to32i(ecx+0xF0); //mov
	ebx = to32i(ecx+0xE8); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(esp); //mov
	edx = to32i(ecx+0xBC); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(ecx+0xE8) = ebx; //mov
	add(esi, eax);
	eax = to32i(esp+8); //mov
	to32i(ecx+0xEC) = esi; //mov
	add(ebp, eax);
	sub(edx, (int32_t)0x2C0000);
	to32i(ecx+0xF0) = ebp; //mov
	test(edx, edx);
	if (jle())
		goto loc_4543A7;
loc_4542C3:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	cmp(eax, (int32_t)0xE666);
	if (jle())
		goto loc_4543AE;
	eax = 0xE666; //mov
loc_4542E0:
	edx = to32i(dword_4D62A8+edi*4); //mov
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x194); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x198); //mov
	imul32(edx, ebx);
	to32i(esp+0xC) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ecx+0x19C); //mov
	imul32(edx, ebx);
	to32i(esp+0x10) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	to32i(esp+0x14) = eax; //mov
	edx = to32i(ecx+0xA8); //mov
	eax = to32i(esp+0xC); //mov
	esi = to32i(ecx+0xB0); //mov
	add(edx, eax);
	ebx = to32i(ecx+0xAC); //mov
	to32i(ecx+0xA8) = edx; //mov
	eax = to32i(esp+0x10); //mov
	dx = to16i(ecx+0x14C); //mov
	add(ebx, eax);
	eax = to32i(esp+0x14); //mov
	inc(edx);
	to32i(ecx+0xAC) = ebx; //mov
	add(esi, eax);
	to16i(ecx+0x14C) = dx; //mov
	eax = ecx; //mov
	to32i(ecx+0xB0) = esi; //mov
	esp -= 4; _sub_4784D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4543D4;
	eax = ecx; //mov
	esp -= 4; _sub_460A40(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4543A7:
	neg(edx);
	goto loc_4542C3;
loc_4543AE:
	edx = to32i(ecx+0xBC); //mov
	sub(edx, (int32_t)0x2C0000);
	test(edx, edx);
	if (jle())
		goto loc_4543D0;
loc_4543BE:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	goto loc_4542E0;
loc_4543D0:
	neg(edx);
	goto loc_4543BE;
loc_4543D4:
	eax = 1; //mov
	eax = ecx; //mov
	esp -= 4; _sub_460A40(); esp += 4; //call
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4543F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x68);
	ebp = eax; //mov
	to32i(esp+0x64) = edx; //mov
	to32i(esp+0x54) = ebx; //mov
	to32i(esp+0x58) = ecx; //mov
	edx = to32i(edx+0xC4); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xC8); //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xCC); //mov
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xD0); //mov
	eax = to32i(ebp+0xC4); //mov
	to32i(dword_511F18) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xD4); //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xD8); //mov
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xDC); //mov
	eax = to32i(ebp+0xC4); //mov
	to32i(dword_511F1C) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xE0); //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xE4); //mov
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xC4); //mov
	eax = to32i(ebp+0xD0); //mov
	to32i(dword_511F20) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xC8); //mov
	eax = to32i(ebp+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xCC); //mov
	eax = to32i(ebp+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	xor_(esi, esi);
	to32i(dword_511F24) = ecx; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xD0); //mov
	eax = to32i(ebp+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xD4); //mov
	eax = to32i(ebp+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xD8); //mov
	eax = to32i(ebp+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xDC); //mov
	eax = to32i(ebp+0xD0); //mov
	to32i(dword_511F28) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xE0); //mov
	eax = to32i(ebp+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xE4); //mov
	eax = to32i(ebp+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xC4); //mov
	eax = to32i(ebp+0xDC); //mov
	to32i(dword_511F2C) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xC8); //mov
	eax = to32i(ebp+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xCC); //mov
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xD0); //mov
	eax = to32i(ebp+0xDC); //mov
	to32i(dword_511F30) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xD4); //mov
	eax = to32i(ebp+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xD8); //mov
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	to32i(dword_511F34) = ecx; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(eax+0xDC); //mov
	eax = to32i(ebp+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	ecx = eax; //mov
	edx = to32i(edx+0xE0); //mov
	eax = to32i(ebp+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	edx = to32i(edx+0xE4); //mov
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	add(ecx, eax);
	eax = to32i(dword_511F18); //mov
	edx = to32i(edx+0x108); //mov
	to32i(dword_511F38) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511ECC) = eax; //mov
	eax = to32i(dword_511F1C); //mov
	edx = to32i(edx+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511ED0) = eax; //mov
	eax = to32i(dword_511F20); //mov
	edx = to32i(edx+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511ED4) = eax; //mov
	eax = to32i(dword_511F24); //mov
	edx = to32i(edx+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511ED8) = eax; //mov
	eax = to32i(dword_511F28); //mov
	edx = to32i(edx+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511EDC) = eax; //mov
	eax = to32i(dword_511F2C); //mov
	edx = to32i(edx+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511EE0) = eax; //mov
	eax = to32i(dword_511F30); //mov
	edx = to32i(edx+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(dword_511EE4) = eax; //mov
	eax = to32i(dword_511F34); //mov
	edx = to32i(edx+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511EE8) = eax; //mov
	edx = to32i(esp+0x64); //mov
	eax = to32i(dword_511F38); //mov
	edx = to32i(edx+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511EEC) = eax; //mov
	edx = to32i(ebp+0x108); //mov
	eax = to32i(dword_511F18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511EF4) = eax; //mov
	edx = to32i(ebp+0x108); //mov
	eax = to32i(dword_511F1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511EF8) = eax; //mov
	edx = to32i(ebp+0x108); //mov
	eax = to32i(dword_511F20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511EFC) = eax; //mov
	edx = to32i(ebp+0x10C); //mov
	eax = to32i(dword_511F24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F00) = eax; //mov
	edx = to32i(ebp+0x10C); //mov
	eax = to32i(dword_511F28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F04) = eax; //mov
	edx = to32i(ebp+0x10C); //mov
	eax = to32i(dword_511F2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F08) = eax; //mov
	edx = to32i(ebp+0x110); //mov
	eax = to32i(dword_511F30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F0C) = eax; //mov
	edx = to32i(ebp+0x110); //mov
	eax = to32i(dword_511F34); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F10) = eax; //mov
	edx = to32i(ebp+0x110); //mov
	eax = to32i(dword_511F38); //mov
	to32i(esp+0x60) = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(dword_511F14) = eax; //mov
loc_454928:
	edx = to32i(esp+0x64); //mov
	ecx = to32i(ebp+0x9C); //mov
	edx = to32i(edx+0x9C); //mov
	sub(edx, ecx);
	to32i(esp+0x30) = edx; //mov
	edx = to32i(esp+0x64); //mov
	ebx = to32i(ebp+0xA0); //mov
	edx = to32i(edx+0xA0); //mov
	sub(edx, ebx);
	to32i(esp+0x34) = edx; //mov
	edx = to32i(esp+0x64); //mov
	edi = to32i(ebp+0xA4); //mov
	edx = to32i(edx+0xA4); //mov
	sub(edx, edi);
	eax = to32i(ebp+0xC4); //mov
	to32i(esp+0x38) = edx; //mov
	edx = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xD0); //mov
	to32i(dword_511EB4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xDC); //mov
	to32i(dword_511EB8) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(eax+0xC4); //mov
	to32i(dword_511EBC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x38); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	to32i(dword_511EC0) = ebx; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(eax+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(eax+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x38); //mov
	eax = to32i(eax+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(eax+0xDC); //mov
	to32i(dword_511EC4) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x34); //mov
	eax = to32i(eax+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ebx, eax);
	eax = to32i(esp+0x64); //mov
	edx = to32i(esp+0x38); //mov
	eax = to32i(eax+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	push32(dword_511EB4);
	ecx = to32i(esp+0x5C); //mov
	add(ebx, eax);
	push32(dword_511EF4);
	edx = to32i(esp+0x6C); //mov
	to32i(dword_511EC8) = ebx; //mov
	push32(dword_511ECC);
	eax = ebp; //mov
	ebx = to32i(esp+0x60); //mov
	esp -= 4; _sub_455100(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_454BF1;
	test(esi, esi);
	if (jz())
		goto loc_454BFA;
loc_454B70:
	eax = to32i(esp); //mov
	ebx = to32i(ebp+0x9C); //mov
	edi = to32i(ebp+0xA0); //mov
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	edx = to32i(ebp+0xA4); //mov
	add(edi, eax);
	eax = to32i(esp+8); //mov
	to32i(ebp+0x9C) = ebx; //mov
	add(edx, eax);
	to32i(ebp+0xA4) = edx; //mov
	edx = to32i(esp+0x64); //mov
	to32i(ebp+0xA0) = edi; //mov
	eax = to32i(esp+0x24); //mov
	ecx = to32i(edx+0x9C); //mov
	ebx = to32i(edx+0xA0); //mov
	add(ecx, eax);
	eax = to32i(esp+0x28); //mov
	edi = to32i(edx+0xA4); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	to32i(edx+0x9C) = ecx; //mov
	add(edi, eax);
	eax = to32i(esp+0x60); //mov
	to32i(edx+0xA0) = ebx; //mov
	inc(eax);
	to32i(edx+0xA4) = edi; //mov
	to32i(esp+0x60) = eax; //mov
	cmp(eax, (int32_t)0x20);
	if (jl())
		goto loc_454928;
loc_454BF1:
	eax = esi; //mov
	add(esp, (int32_t)0x68);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_454BFA:
	eax = to32i(esp+0x64); //mov
	edx = to32i(ebp+0xA8); //mov
	esi = to32i(eax+0xA8); //mov
	sub(edx, esi);
	to32i(esp+0x18) = edx; //mov
	edx = to32i(ebp+0xAC); //mov
	edi = to32i(eax+0xAC); //mov
	sub(edx, edi);
	to32i(esp+0x1C) = edx; //mov
	xor_(ebx, ebx);
	edx = to32i(ebp+0xB0); //mov
	esi = to32i(eax+0xB0); //mov
	xor_(ecx, ecx);
	sub(edx, esi);
	edi = to32i(esp+0x18); //mov
	to32i(esp+0x20) = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_454E31;
	edx = edi; //mov
loc_454C46:
	eax = to32i(esp+0x1C); //mov
	test(eax, eax);
	if (jle())
		goto loc_454E3A;
loc_454C52:
	cmp(edx, eax);
	if (jle())
		goto loc_454E41;
loc_454C5A:
	eax = edx; //mov
loc_454C5C:
	esi = to32i(esp+0x20); //mov
	test(esi, esi);
	if (jle())
		goto loc_454E56;
	edx = esi; //mov
loc_454C6A:
	cmp(eax, edx);
	if (jle())
		goto loc_454E5F;
loc_454C72:
	cmp(eax, to32i(dword_4D62B0));
	if (jle())
		goto loc_454FB5;
	esi = to32i(esp+0x30); //mov
	test(esi, esi);
	if (jle())
		goto loc_454E77;
	edx = esi; //mov
loc_454C8C:
	edi = to32i(esp+0x34); //mov
	eax = edx; //mov
	test(edi, edi);
	if (jle())
		goto loc_454E80;
	esi = edi; //mov
loc_454C9C:
	cmp(eax, esi);
	if (jle())
		goto loc_454E89;
loc_454CA4:
	esi = to32i(esp+0x38); //mov
	test(esi, esi);
	if (jle())
		goto loc_454E9C;
loc_454CB0:
	cmp(eax, esi);
	if (jle())
		goto loc_454EA3;
loc_454CB8:
	esi = eax; //mov
	eax = to32i(esp+0x38); //mov
	test(eax, eax);
	if (jle())
		goto loc_454EBB;
loc_454CC6:
	cmp(edx, eax);
	if (jle())
		goto loc_454CD6;
	edx = to32i(esp+0x38); //mov
	test(edx, edx);
	if (jle())
		goto loc_454EC2;
loc_454CD6:
	eax = edx; //mov
loc_454CD8:
	edi = to32i(dword_4D62B4); //mov
	to32i(esp+0x5C) = eax; //mov
	cmp(esi, edi);
	if (jge())
		goto loc_454ED5;
	cmp(to32i(dword_4D6280), (int32_t)0);
	if (jnz())
		goto loc_454ED5;
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_45EB60(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_454ECB;
loc_454D13:
	eax = 0x8000; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	ebx = eax; //mov
loc_454D2F:
	edx = ebx; //mov
	neg(edx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xA8); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xAC); //mov
	imul32(edx, ebx);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(ebp+0xB0); //mov
	imul32(edx, ebx);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x64); //mov
	edx = to32i(edx+0xA8); //mov
	imul32(edx, ebx);
	to32i(esp+8) = eax; //mov
	edi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x64); //mov
	edx = to32i(edx+0xAC); //mov
	imul32(edx, ebx);
	to32i(esp+0x24) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = to32i(esp+0x64); //mov
	edx = to32i(edx+0xB0); //mov
	imul32(edx, ebx);
	to32i(esp+0x28) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	ecx = to32i(esp); //mov
	sar(ecx, (int32_t)5);
	esi = to32i(esp+4); //mov
	to32i(esp) = ecx; //mov
	sar(esi, (int32_t)5);
	sar(edi, (int32_t)5);
	to32i(esp+4) = esi; //mov
	to32i(esp+8) = edi; //mov
	edx = to32i(esp+0x28); //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(esp+0x24); //mov
	ecx = to32i(esp+0x2C); //mov
	sar(edx, (int32_t)5);
	sar(eax, (int32_t)5);
	to32i(esp+0x28) = edx; //mov
	sar(ecx, (int32_t)5);
	to32i(esp+0x24) = eax; //mov
	to32i(esp+0x2C) = ecx; //mov
	esi = 1; //mov
	goto loc_454B70;
loc_454E31:
	edx = edi; //mov
	neg(edx);
	goto loc_454C46;
loc_454E3A:
	neg(eax);
	goto loc_454C52;
loc_454E41:
	edx = to32i(esp+0x1C); //mov
	test(edx, edx);
	if (jg())
		goto loc_454C5A;
	eax = edx; //mov
	neg(eax);
	goto loc_454C5C;
loc_454E56:
	edx = esi; //mov
	neg(edx);
	goto loc_454C6A;
loc_454E5F:
	edi = to32i(esp+0x20); //mov
	test(edi, edi);
	if (jle())
		goto loc_454E6E;
	eax = edi; //mov
	goto loc_454C72;
loc_454E6E:
	eax = edi; //mov
	neg(eax);
	goto loc_454C72;
loc_454E77:
	edx = esi; //mov
	neg(edx);
	goto loc_454C8C;
loc_454E80:
	esi = edi; //mov
	neg(esi);
	goto loc_454C9C;
loc_454E89:
	eax = to32i(esp+0x34); //mov
	test(eax, eax);
	if (jg())
		goto loc_454CA4;
	neg(eax);
	goto loc_454CA4;
loc_454E9C:
	neg(esi);
	goto loc_454CB0;
loc_454EA3:
	edi = to32i(esp+0x38); //mov
	test(edi, edi);
	if (jle())
		goto loc_454EB2;
	eax = edi; //mov
	goto loc_454CB8;
loc_454EB2:
	eax = edi; //mov
	neg(eax);
	goto loc_454CB8;
loc_454EBB:
	neg(eax);
	goto loc_454CC6;
loc_454EC2:
	eax = edx; //mov
	neg(eax);
	goto loc_454CD8;
loc_454ECB:
	ebx = 0x10000; //mov
	goto loc_454D2F;
loc_454ED5:
	edi = (int32_t)(intptr_t)(esp+0x48); //lea
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	movsd();
	movsd();
	movsd();
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)(esp+0x30); //lea
	esp -= 4; _sub_45E810(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_45E760(); esp += 4; //call
	edx = to32i(esp+0xC); //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	esi = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(esi, eax);
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(dword_4D62BC); //mov
	add(eax, esi);
	cmp(eax, edx);
	if (jle())
		goto loc_454F72;
	cmp(to32i(dword_4D6284), (int32_t)0);
	if (jnz())
		goto loc_454F72;
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_45EB60(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_454D13;
	ebx = 0x10000; //mov
	goto loc_454D2F;
loc_454F72:
	cmp(to32i(dword_4D6288), (int32_t)0);
	if (jz())
		goto loc_454FB5;
	cmp(eax, to32i(dword_4D62C0));
	if (jle())
		goto loc_454FB5;
	eax = to32i(esp+0x5C); //mov
	cmp(eax, to32i(dword_4D62B8));
	if (jge())
		goto loc_454FB5;
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	esp -= 4; _sub_45EB60(); esp += 4; //call
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_454D13;
	ebx = 0x10000; //mov
	goto loc_454D2F;
loc_454FB5:
	test(ecx, ecx);
	if (jnz())
		goto loc_454D2F;
	cmp(to32i(dword_4D628C), (int32_t)0);
	if (jnz())
		goto loc_454D2F;
	edi = (int32_t)(intptr_t)(esp+0x3C); //lea
	esi = (int32_t)(intptr_t)(esp+0x30); //lea
	eax = (int32_t)(intptr_t)(esp+0x3C); //lea
	movsd();
	movsd();
	movsd();
	esp -= 4; _sub_45E760(); esp += 4; //call
	eax = to32i(esp+0x64); //mov
	edi = to32i(ebp+0xB4); //mov
	add(edi, to32i(eax+0xB4));
	eax = to32i(ebp+0xB4); //mov
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
	esi = eax; //mov
	eax = to32i(esp+0x64); //mov
	ebx = edi; //mov
	eax = to32i(eax+0xB4); //mov
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
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = to32i(esp+0x3C); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	edx = to32i(esp+0x40); //mov
	imul32(edx, ebx);
	neg(eax);
	sar(eax, (int32_t)5);
	to32i(esp) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	edx = to32i(esp+0x44); //mov
	imul32(edx, ebx);
	neg(eax);
	sar(eax, (int32_t)5);
	to32i(esp+4) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	neg(eax);
	edx = esi; //mov
	sar(eax, (int32_t)5);
	sar(edx, (int32_t)0x1F);
	to32i(esp+8) = eax; //mov
	eax = esi; //mov
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	edx = to32i(esp+0x3C); //mov
	imul32(edx, eax);
	ebx = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	edx = to32i(esp+0x40); //mov
	imul32(edx, ebx);
	sar(eax, (int32_t)5);
	to32i(esp+0x24) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	edx = to32i(esp+0x44); //mov
	imul32(edx, ebx);
	sar(eax, (int32_t)5);
	to32i(esp+0x28) = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0xE);
	sbb(eax, edx);
	sar(eax, (int32_t)0xE);
	sar(eax, (int32_t)5);
	to32i(esp+0x2C) = eax; //mov
	esi = 1; //mov
	goto loc_454B70;
}
Fn(void) Game::_sub_455100()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x64);
	to32i(esp+0x60) = eax; //mov
	ebp = edx; //mov
	to32i(dword_511F40) = eax; //mov
	to32i(dword_511F3C) = edx; //mov
	to32i(dword_511F44) = ebx; //mov
	eax = 1; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	to32i(dword_511EF0) = ecx; //mov
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_455143;
loc_455135:
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455143:
	edx = 1; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	ebx = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	eax = 0xFFFFFFFF; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	edx = 0xFFFFFFFF; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	ebx = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_457CD0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	eax = 1; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	edx = 1; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	ebx = 1; //mov
	xor_(edx, edx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	eax = 0xFFFFFFFF; //mov
	xor_(ebx, ebx);
	xor_(edx, edx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	edx = 0xFFFFFFFF; //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	ebx = 0xFFFFFFFF; //mov
	xor_(edx, edx);
	esp -= 4; _sub_457A10(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455135;
	ebx = 1; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_4553EE;
loc_455223:
	xor_(ebx, ebx);
	esi = to32i(dword_4D6278); //mov
	to32i(dword_511F54) = ebx; //mov
	test(esi, esi);
	if (jz())
		goto loc_4556D8;
loc_455239:
	to32i(dword_511F54) = 1; //mov
loc_455243:
	edi = (int32_t)(intptr_t)(esp+0x30); //lea
	esi = (int32_t)(intptr_t)(ebp+0xA8); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x60); //mov
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = (int32_t)(intptr_t)(esi+0xC4); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x60); //mov
	edi = (int32_t)(intptr_t)(esp+0x54); //lea
	esi = (int32_t)(intptr_t)(esi+0xD0); //lea
	movsd();
	movsd();
	movsd();
	esi = to32i(esp+0x60); //mov
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = (int32_t)(intptr_t)(esi+0xDC); //lea
	movsd();
	movsd();
	movsd();
	cmp(to32i(dword_511F50), (int32_t)0);
	if (jle())
		goto loc_4552AA;
	eax = to32i(esp+0x28); //mov
	edx = to32i(esp+0x2C); //mov
	ebp = to32i(esp+0x24); //mov
	neg(eax);
	neg(edx);
	neg(ebp);
	to32i(esp+0x28) = eax; //mov
	to32i(esp+0x2C) = edx; //mov
	to32i(esp+0x24) = ebp; //mov
loc_4552AA:
	cmp(to32i(dword_511F48), (int32_t)0);
	if (jle())
		goto loc_4552D1;
	edi = to32i(esp+0x58); //mov
	ebp = to32i(esp+0x5C); //mov
	esi = to32i(esp+0x54); //mov
	neg(edi);
	neg(ebp);
	neg(esi);
	to32i(esp+0x58) = edi; //mov
	to32i(esp+0x5C) = ebp; //mov
	to32i(esp+0x54) = esi; //mov
loc_4552D1:
	cmp(to32i(dword_511F4C), (int32_t)0);
	if (jle())
		goto loc_4552F8;
	ebx = to32i(esp+0x1C); //mov
	esi = to32i(esp+0x20); //mov
	edx = to32i(esp+0x18); //mov
	neg(ebx);
	neg(esi);
	neg(edx);
	to32i(esp+0x1C) = ebx; //mov
	to32i(esp+0x20) = esi; //mov
	to32i(esp+0x18) = edx; //mov
loc_4552F8:
	edx = to32i(esp+0x30); //mov
	eax = to32i(esp+0x24); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	add(ebx, eax);
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	esi = eax; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(esi, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	ebp = (int32_t)(intptr_t)(esi+eax); //lea
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	esi = eax; //mov
	eax = to32i(esp+0x1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(esi, eax);
	eax = to32i(esp+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	test(ebx, ebx);
	if (jle())
		goto loc_4557F8;
loc_4553B5:
	test(ebp, ebp);
	if (jle())
		goto loc_4557FF;
loc_4553BD:
	test(eax, eax);
	if (jle())
		goto loc_455806;
loc_4553C5:
	edx = eax; //mov
	cmp(ebx, ebp);
	if (jle())
		goto loc_45580D;
	cmp(ebx, eax);
	if (jle())
		goto loc_45580D;
	esi = (int32_t)(intptr_t)(esp+0x24); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4553EE:
	edx = 1; //mov
	ebx = 0xFFFFFFFF; //mov
	eax = edx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 1; //mov
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 0xFFFFFFFF; //mov
	eax = 1; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 1; //mov
	eax = 0xFFFFFFFF; //mov
	edx = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 0xFFFFFFFF; //mov
	edx = 1; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	edx = 0xFFFFFFFF; //mov
	ebx = 1; //mov
	eax = edx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 0xFFFFFFFF; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_4577D0(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_455223;
	ebx = 1; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_455623;
loc_4554B0:
	xor_(edx, edx);
	ebx = to32i(dword_4D6278); //mov
	to32i(dword_511F54) = edx; //mov
	test(ebx, ebx);
	if (jz())
		goto loc_4558F8;
loc_4554C6:
	to32i(dword_511F54) = 1; //mov
loc_4554D0:
	esi = to32i(esp+0x60); //mov
	edi = (int32_t)(intptr_t)(esp+0x3C); //lea
	esi = (int32_t)(intptr_t)(esi+0xA8); //lea
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x48); //lea
	esi = (int32_t)(intptr_t)(ebp+0xC4); //lea
	movsd();
	movsd();
	movsd();
	edi = esp; //mov
	esi = (int32_t)(intptr_t)(ebp+0xD0); //lea
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)(ebp+0xDC); //lea
	ebx = to32i(dword_511F50); //mov
	movsd();
	movsd();
	movsd();
	test(ebx, ebx);
	if (jl())
		goto loc_455A09;
loc_455514:
	cmp(to32i(dword_511F48), (int32_t)0);
	if (jl())
		goto loc_455A2C;
loc_455521:
	cmp(to32i(dword_511F4C), (int32_t)0);
	if (jl())
		goto loc_455A4D;
loc_45552E:
	edx = to32i(esp+0x3C); //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ebx = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(ebx, eax);
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	ebp = (int32_t)(intptr_t)(ebx+eax); //lea
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ebx = eax; //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(ebx, eax);
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	add(ebx, eax);
	eax = to32i(esp+0xC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	esi = eax; //mov
	eax = to32i(esp+0x10); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(esi, eax);
	eax = to32i(esp+0x14); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, esi);
	test(ebp, ebp);
	if (jle())
		goto loc_455A70;
loc_4555EA:
	test(ebx, ebx);
	if (jle())
		goto loc_455A77;
loc_4555F2:
	test(eax, eax);
	if (jle())
		goto loc_455A7E;
loc_4555FA:
	edx = eax; //mov
	cmp(ebp, ebx);
	if (jle())
		goto loc_455A85;
	cmp(ebp, eax);
	if (jle())
		goto loc_455A85;
	esi = (int32_t)(intptr_t)(esp+0x48); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455623:
	edx = 1; //mov
	ebx = 0xFFFFFFFF; //mov
	eax = edx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	ebx = 1; //mov
	edx = 0xFFFFFFFF; //mov
	eax = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	ebx = 0xFFFFFFFF; //mov
	eax = 1; //mov
	edx = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	ebx = 1; //mov
	eax = 0xFFFFFFFF; //mov
	edx = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	ebx = 0xFFFFFFFF; //mov
	edx = 1; //mov
	eax = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	edx = 0xFFFFFFFF; //mov
	ebx = 1; //mov
	eax = edx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	ebx = 0xFFFFFFFF; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	esp -= 4; _sub_457590(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4554B0;
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4556D8:
	cmp(to32i(dword_4D627C), (int32_t)0);
	if (jz())
		goto loc_45574D;
	edx = to32i(esp+0x60); //mov
	eax = to32i(ebp+0xA8); //mov
	sub(eax, to32i(edx+0xA8));
	test(eax, eax);
	if (jle())
		goto loc_455741;
loc_4556F9:
	edx = to32i(esp+0x60); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xAC); //mov
	sub(eax, to32i(edx+0xAC));
	test(eax, eax);
	if (jle())
		goto loc_455745;
loc_45570F:
	esi = to32i(esp+0x60); //mov
	edx = eax; //mov
	eax = to32i(ebp+0xB0); //mov
	sub(eax, to32i(esi+0xB0));
	test(eax, eax);
	if (jle())
		goto loc_455749;
loc_455725:
	esi = eax; //mov
	eax = ebx; //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_45572F;
	eax = edx; //mov
loc_45572F:
	cmp(esi, eax);
	if (jle())
		goto loc_455735;
	eax = esi; //mov
loc_455735:
	cmp(eax, (int32_t)0xF0000);
	if (jle())
		goto loc_45574D;
	goto loc_455239;
loc_455741:
	neg(eax);
	goto loc_4556F9;
loc_455745:
	neg(eax);
	goto loc_45570F;
loc_455749:
	neg(eax);
	goto loc_455725;
loc_45574D:
	cmp(to32i(dword_511F54), (int32_t)0);
	if (jnz())
		goto loc_455243;
	edx = to32i(dword_511F50); //mov
	test(edx, edx);
	if (jl())
		goto loc_45583F;
	ebp = to32i(esp+0x60); //mov
	ebp = to32i(ebp+0x108); //mov
	sub(ebp, edx);
loc_455774:
	edi = to32i(dword_511F48); //mov
	test(edi, edi);
	if (jl())
		goto loc_455850;
	ebx = to32i(esp+0x60); //mov
	ebx = to32i(ebx+0x10C); //mov
	sub(ebx, edi);
loc_45578E:
	esi = to32i(dword_511F4C); //mov
	test(esi, esi);
	if (jl())
		goto loc_455862;
	eax = to32i(esp+0x60); //mov
	eax = to32i(eax+0x110); //mov
	sub(eax, esi);
loc_4557A8:
	cmp(ebp, ebx);
	if (jge())
		goto loc_455873;
	cmp(ebp, eax);
	if (jge())
		goto loc_455873;
	esi = to32i(esp+0x60); //mov
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(esi+0xC4); //lea
	movsd();
	movsd();
	movsd();
	cmp(to32i(dword_511F50), (int32_t)0);
	if (jle())
		goto loc_455135;
	eax = to32i(ecx+4); //mov
	edx = to32i(ecx+8); //mov
	ebp = to32i(ecx); //mov
	neg(eax);
	neg(edx);
	to32i(ecx+4) = eax; //mov
	neg(ebp);
	to32i(ecx+8) = edx; //mov
	to32i(ecx) = ebp; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4557F8:
	neg(ebx);
	goto loc_4553B5;
loc_4557FF:
	neg(ebp);
	goto loc_4553BD;
loc_455806:
	neg(eax);
	goto loc_4553C5;
loc_45580D:
	cmp(ebp, edx);
	if (jle())
		goto loc_455828;
	esi = (int32_t)(intptr_t)(esp+0x54); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455828:
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_45583F:
	ebp = to32i(esp+0x60); //mov
	ebp = to32i(ebp+0x108); //mov
	add(ebp, edx);
	goto loc_455774;
loc_455850:
	eax = to32i(esp+0x60); //mov
	eax = to32i(eax+0x10C); //mov
	ebx = (int32_t)(intptr_t)(edi+eax); //lea
	goto loc_45578E;
loc_455862:
	eax = to32i(esp+0x60); //mov
	eax = to32i(eax+0x110); //mov
	add(eax, esi);
	goto loc_4557A8;
loc_455873:
	cmp(ebx, eax);
	if (jge())
		goto loc_4558B7;
	esi = to32i(esp+0x60); //mov
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(esi+0xD0); //lea
	eax = to32i(dword_511F48); //mov
	movsd();
	movsd();
	movsd();
	test(eax, eax);
	if (jle())
		goto loc_455135;
	ebx = to32i(ecx+4); //mov
	esi = to32i(ecx+8); //mov
	edx = to32i(ecx); //mov
	neg(ebx);
	neg(esi);
	to32i(ecx+4) = ebx; //mov
	neg(edx);
	to32i(ecx+8) = esi; //mov
	to32i(ecx) = edx; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4558B7:
	esi = to32i(esp+0x60); //mov
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(esi+0xDC); //lea
	ebx = to32i(dword_511F4C); //mov
	movsd();
	movsd();
	movsd();
	test(ebx, ebx);
	if (jle())
		goto loc_455135;
	edi = to32i(ecx+4); //mov
	ebp = to32i(ecx+8); //mov
	esi = to32i(ecx); //mov
	neg(edi);
	neg(ebp);
	to32i(ecx+4) = edi; //mov
	neg(esi);
	to32i(ecx+8) = ebp; //mov
	to32i(ecx) = esi; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_4558F8:
	cmp(to32i(dword_4D627C), (int32_t)0);
	if (jz())
		goto loc_45596D;
	edx = to32i(esp+0x60); //mov
	eax = to32i(ebp+0xA8); //mov
	sub(eax, to32i(edx+0xA8));
	test(eax, eax);
	if (jle())
		goto loc_455961;
loc_455919:
	edx = to32i(esp+0x60); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xAC); //mov
	sub(eax, to32i(edx+0xAC));
	test(eax, eax);
	if (jle())
		goto loc_455965;
loc_45592F:
	esi = to32i(esp+0x60); //mov
	edx = eax; //mov
	eax = to32i(ebp+0xB0); //mov
	sub(eax, to32i(esi+0xB0));
	test(eax, eax);
	if (jle())
		goto loc_455969;
loc_455945:
	esi = eax; //mov
	eax = ebx; //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_45594F;
	eax = edx; //mov
loc_45594F:
	cmp(esi, eax);
	if (jle())
		goto loc_455955;
	eax = esi; //mov
loc_455955:
	cmp(eax, (int32_t)0xF0000);
	if (jle())
		goto loc_45596D;
	goto loc_4554C6;
loc_455961:
	neg(eax);
	goto loc_455919;
loc_455965:
	neg(eax);
	goto loc_45592F;
loc_455969:
	neg(eax);
	goto loc_455945;
loc_45596D:
	cmp(to32i(dword_511F54), (int32_t)0);
	if (jnz())
		goto loc_4554D0;
	edx = to32i(dword_511F50); //mov
	test(edx, edx);
	if (jl())
		goto loc_455AB5;
	ebx = to32i(ebp+0x108); //mov
	sub(ebx, edx);
loc_455990:
	edi = to32i(dword_511F48); //mov
	test(edi, edi);
	if (jl())
		goto loc_455AC2;
	edx = to32i(ebp+0x10C); //mov
	sub(edx, edi);
loc_4559A6:
	edi = to32i(dword_511F4C); //mov
	test(edi, edi);
	if (jl())
		goto loc_455ACF;
	eax = to32i(ebp+0x110); //mov
	sub(eax, edi);
loc_4559BC:
	cmp(ebx, edx);
	if (jge())
		goto loc_455ADC;
	cmp(ebx, eax);
	if (jge())
		goto loc_455ADC;
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(ebp+0xC4); //lea
	edx = to32i(dword_511F50); //mov
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jge())
		goto loc_455135;
	esi = to32i(ecx+4); //mov
	edi = to32i(ecx+8); //mov
	ebx = to32i(ecx); //mov
	neg(esi);
	neg(edi);
	to32i(ecx+4) = esi; //mov
	neg(ebx);
	to32i(ecx+8) = edi; //mov
	to32i(ecx) = ebx; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455A09:
	edi = to32i(esp+0x4C); //mov
	ebp = to32i(esp+0x50); //mov
	esi = to32i(esp+0x48); //mov
	neg(edi);
	neg(ebp);
	neg(esi);
	to32i(esp+0x4C) = edi; //mov
	to32i(esp+0x50) = ebp; //mov
	to32i(esp+0x48) = esi; //mov
	goto loc_455514;
loc_455A2C:
	ebx = to32i(esp+4); //mov
	esi = to32i(esp+8); //mov
	edx = to32i(esp); //mov
	neg(ebx);
	neg(esi);
	neg(edx);
	to32i(esp+4) = ebx; //mov
	to32i(esp+8) = esi; //mov
	to32i(esp) = edx; //mov
	goto loc_455521;
loc_455A4D:
	eax = to32i(esp+0x10); //mov
	edx = to32i(esp+0x14); //mov
	ebp = to32i(esp+0xC); //mov
	neg(eax);
	neg(edx);
	neg(ebp);
	to32i(esp+0x10) = eax; //mov
	to32i(esp+0x14) = edx; //mov
	to32i(esp+0xC) = ebp; //mov
	goto loc_45552E;
loc_455A70:
	neg(ebp);
	goto loc_4555EA;
loc_455A77:
	neg(ebx);
	goto loc_4555F2;
loc_455A7E:
	neg(eax);
	goto loc_4555FA;
loc_455A85:
	cmp(ebx, edx);
	if (jle())
		goto loc_455A9E;
	esi = esp; //mov
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455A9E:
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	edi = ecx; //mov
	movsd();
	movsd();
	movsd();
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455AB5:
	ebx = to32i(ebp+0x108); //mov
	add(ebx, edx);
	goto loc_455990;
loc_455AC2:
	edx = to32i(ebp+0x10C); //mov
	add(edx, edi);
	goto loc_4559A6;
loc_455ACF:
	eax = to32i(ebp+0x110); //mov
	add(eax, edi);
	goto loc_4559BC;
loc_455ADC:
	cmp(edx, eax);
	if (jge())
		goto loc_455B1C;
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(ebp+0xD0); //lea
	movsd();
	movsd();
	movsd();
	cmp(to32i(dword_511F48), (int32_t)0);
	if (jge())
		goto loc_455135;
	ebp = to32i(ecx+4); //mov
	eax = to32i(ecx+8); //mov
	edi = to32i(ecx); //mov
	neg(ebp);
	neg(eax);
	to32i(ecx+4) = ebp; //mov
	neg(edi);
	to32i(ecx+8) = eax; //mov
	to32i(ecx) = edi; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
loc_455B1C:
	edi = ecx; //mov
	esi = (int32_t)(intptr_t)(ebp+0xDC); //lea
	ebp = to32i(dword_511F4C); //mov
	movsd();
	movsd();
	movsd();
	test(ebp, ebp);
	if (jge())
		goto loc_455135;
	edx = to32i(ecx+4); //mov
	ebx = to32i(ecx+8); //mov
	eax = to32i(ecx); //mov
	neg(edx);
	neg(ebx);
	to32i(ecx+4) = edx; //mov
	neg(eax);
	to32i(ecx+8) = ebx; //mov
	to32i(ecx) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)0x64);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 0xC; return;
}
Fn(void) Game::_sub_455B60()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	edi = eax; //mov
	esi = edx; //mov
	ebp = ecx; //mov
	eax = to32i(ebx); //mov
	sub(eax, to32i(edi+0x9C));
	ecx = to32i(edi+0xA0); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebx+4); //mov
	sub(eax, ecx);
	edx = to32i(edi+0xA4); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebx+8); //mov
	sub(eax, edx);
	ecx = to32i(esi+0x9C); //mov
	to32i(esp+8) = eax; //mov
	eax = to32i(ebx); //mov
	sub(eax, ecx);
	edx = to32i(ebx+4); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(esi+0xA0); //mov
	sub(edx, eax);
	to32i(esp+0x1C) = edx; //mov
	eax = to32i(ebx+8); //mov
	edx = to32i(esi+0xA4); //mov
	sub(eax, edx);
	to32i(esp+0x20) = eax; //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0); //mov
	sub(ecx, eax);
	eax = to32i(esp+8); //mov
	to32i(esp+0xC) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+4); //mov
	sub(ecx, eax);
	eax = to32i(esp); //mov
	to32i(esp+0x10) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0); //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+8); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x1C); //mov
	to32i(esp+0x14) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(esp+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x3C) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+8); //mov
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+4); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x18); //mov
	to32i(esp+0x40) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0); //mov
	eax = to32i(esp+0x1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x44) = ecx; //mov
	edx = to32i(ebp+0); //mov
	eax = to32i(esi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+8); //mov
	add(ecx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0); //mov
	ebx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(edi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(edi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+8); //mov
	add(ecx, eax);
	eax = to32i(edi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	edx = to32i(esp+0xC); //mov
	sub(ebx, eax);
	eax = to32i(edi+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	ecx = eax; //mov
	eax = to32i(edi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x14); //mov
	add(ecx, eax);
	eax = to32i(edi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	edx = to32i(esp+0x3C); //mov
	sub(ebx, eax);
	eax = to32i(esi+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ecx = eax; //mov
	eax = to32i(esi+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	add(ecx, eax);
	eax = to32i(esi+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	add(ecx, ebx);
	eax = to32i(edi+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = eax; //mov
	eax = to32i(esi+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ebx, eax);
	edx = to32i(esp+0xC); //mov
	to32i(esp+0x54) = ebx; //mov
	eax = edx; //mov
	ebx = to32i(edi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x10); //mov
	to32i(esp+0x50) = eax; //mov
	eax = edx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	add(edx, eax);
	to32i(esp+0x50) = edx; //mov
	edx = to32i(esp+0x14); //mov
	eax = edx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, to32i(esp+0x50));
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x54); //mov
	sar(eax, (int32_t)1);
	add(edx, eax);
	to32i(esp+0x54) = edx; //mov
	edx = to32i(esp+0x3C); //mov
	eax = edx; //mov
	ebx = to32i(esi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	to32i(esp+0x50) = eax; //mov
	eax = edx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	add(edx, eax);
	to32i(esp+0x50) = edx; //mov
	edx = to32i(esp+0x44); //mov
	eax = edx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, to32i(esp+0x50));
	edx = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = to32i(esp+0x54); //mov
	sar(eax, (int32_t)1);
	add(ebx, eax);
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
	ebx = to32i(esi+0xB4); //mov
	eax = to32i(edi+0xB4); //mov
	add(eax, ebx);
	edx = to32i(ebp+0); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(edi+0xA8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(edi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+8); //mov
	add(ebx, eax);
	eax = to32i(edi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0); //mov
	add(ebx, eax);
	eax = to32i(esi+0xA8); //mov
	to32i(esp+0x54) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = to32i(esi+0xAC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+8); //mov
	add(ebx, eax);
	eax = to32i(esi+0xB0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x54); //mov
	add(eax, ebx);
	sub(edx, eax);
	eax = edx; //mov
	edx = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0x4C) = eax; //mov
	test(ecx, ecx);
	if (jge())
		goto loc_455F7C;
	xor_(eax, eax);
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_455F7C:
	eax = 0x8CCC; //mov
	edx = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	to32i(esp+0x48) = eax; //mov
	edx = to32i(ebp+0); //mov
	to32i(dword_4D6270) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x54) = eax; //mov
	to32i(esp+0x24) = eax; //mov
	edx = to32i(ebp+4); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x50) = eax; //mov
	to32i(esp+0x28) = eax; //mov
	edx = to32i(ebp+8); //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x54); //mov
	ecx = eax; //mov
	to32i(esp+0x2C) = eax; //mov
	eax = to32i(edi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	ebp = eax; //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(edi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x50) = eax; //mov
	to32i(esp+0x34) = eax; //mov
	edx = ecx; //mov
	eax = to32i(edi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x38) = eax; //mov
	edx = to32i(edi+0xA8); //mov
	ecx = to32i(edi+0xAC); //mov
	add(edx, ebp);
	ebp = to32i(edi+0xB0); //mov
	to32i(edi+0xA8) = edx; //mov
	edx = to32i(esp+0x50); //mov
	add(ebp, eax);
	eax = ebx; //mov
	to32i(edi+0xB0) = ebp; //mov
	add(ecx, edx);
	edx = to32i(edi+0xB8); //mov
	to32i(edi+0xAC) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_4563DF;
	eax = ebx; //mov
	edx = to32i(edi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_45607F:
	to32i(edi+0x168) = 0x50001; //mov
	to32i(edi+0x160) = eax; //mov
	to32i(edi+0x164) = esi; //mov
	edx = to32i(esp+0x24); //mov
	eax = to32i(esi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ebx = eax; //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	ecx = eax; //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(esi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x38) = eax; //mov
	edx = to32i(esi+0xA8); //mov
	ebp = to32i(esi+0xB0); //mov
	sub(edx, ebx);
	sub(ebp, eax);
	to32i(esi+0xA8) = edx; //mov
	eax = to32i(esp+0x4C); //mov
	ebx = to32i(esi+0xAC); //mov
	to32i(esi+0xB0) = ebp; //mov
	sub(ebx, ecx);
	edx = to32i(esi+0xB8); //mov
	to32i(esi+0xAC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_4563F8;
	eax = to32i(esp+0x4C); //mov
	edx = to32i(esi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
loc_45613B:
	to32i(esi+0x168) = 0x50001; //mov
	edx = to32i(esp+0x2C); //mov
	to32i(esi+0x160) = eax; //mov
	eax = to32i(esp+4); //mov
	to32i(esi+0x164) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ecx = eax; //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	sub(ecx, eax);
	eax = to32i(esp+8); //mov
	to32i(esp+0x30) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	ecx = eax; //mov
	eax = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	sub(ecx, eax);
	eax = to32i(esp); //mov
	to32i(esp+0x34) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	ecx = eax; //mov
	eax = to32i(esp+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x30); //mov
	sub(ecx, eax);
	eax = to32i(edi+0xF8); //mov
	to32i(esp+0x38) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ecx = eax; //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(edi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	ebx = eax; //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(edi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(edi+0xE8); //mov
	to32i(esp+0x38) = eax; //mov
	add(edx, ecx);
	ecx = to32i(edi+0xEC); //mov
	to32i(edi+0xE8) = edx; //mov
	edx = to32i(esp+0x2C); //mov
	add(ecx, ebx);
	ebx = to32i(edi+0xF0); //mov
	to32i(edi+0xEC) = ecx; //mov
	add(ebx, eax);
	eax = to32i(esp+0x1C); //mov
	to32i(edi+0xF0) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x20); //mov
	to32i(esp+0x30) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x2C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x28); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x18); //mov
	to32i(esp+0x34) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x24); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x38) = ecx; //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(esi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ecx = eax; //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(esi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	ebx = eax; //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(esi+0xF8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = to32i(esi+0xE8); //mov
	sub(ebp, ecx);
	edx = to32i(esi+0xEC); //mov
	to32i(esi+0xE8) = ebp; //mov
	sub(edx, ebx);
	ecx = to32i(esi+0xF0); //mov
	to32i(esi+0xEC) = edx; //mov
	sub(ecx, eax);
	to32i(esi+0xF0) = ecx; //mov
	inc(to16i(edi+0x14C));
	inc(to16i(esi+0x14C));
	edx = to32i(edi+0x9C); //mov
	ebx = to32i(esi+0x9C); //mov
	add(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esi+0x170) = eax; //mov
	to32i(edi+0x170) = eax; //mov
	edx = to32i(edi+0xA0); //mov
	ebp = to32i(esi+0xA0); //mov
	add(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esi+0x174) = eax; //mov
	to32i(edi+0x174) = eax; //mov
	edx = to32i(edi+0xA4); //mov
	eax = to32i(esi+0xA4); //mov
	add(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+0x48); //mov
	push32(edx);
	ecx = to32i(esp+0x30); //mov
	push32(ecx);
	ebx = to32i(esp+0x30); //mov
	to32i(esi+0x178) = eax; //mov
	push32(ebx);
	ebp = to32i(esp+0x30); //mov
	to32i(edi+0x178) = eax; //mov
	push32(ebp);
	edx = esi; //mov
	eax = edi; //mov
	esp -= 4; _sub_478E10(); esp += 4; //call
	eax = 1; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4563DF:
	eax = ebx; //mov
	edx = to32i(edi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	goto loc_45607F;
loc_4563F8:
	eax = to32i(esp+0x4C); //mov
	edx = to32i(esi+0xB8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	neg(eax);
	goto loc_45613B;
}
Fn(void) Game::_sub_456420()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x5C);
	ebp = eax; //mov
	ecx = edx; //mov
	to32i(esp+0x4C) = ebx; //mov
	xor_(edx, edx);
	to32i(esp+0x54) = edx; //mov
	edx = to32i(eax+0xE8); //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0xE8) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	to32i(ebp+0xEC) = eax; //mov
	eax = 0x6487E; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ebp+0xF0) = eax; //mov
	cmp(to32i(ecx), (int32_t)0);
	if (jnz())
		goto loc_45649E;
	cmp(to32i(ecx+4), (int32_t)0);
	if (jnz())
		goto loc_45649E;
	cmp(to32i(ecx+8), (int32_t)0);
	if (jnz())
		goto loc_45649E;
	to32i(ecx+4) = 0x10000; //mov
loc_45649E:
	xor_(eax, eax);
	edx = to32i(ebp+0xC4); //mov
	to32i(dword_4D6268) = eax; //mov
	eax = to32i(ecx); //mov
	ebx = to32i(ebp+0x108); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebp+0xC8); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xCC); //mov
	add(esi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ebx; //mov
	add(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = to32i(ebp+0xD0); //mov
	eax = to32i(ecx); //mov
	edi = to32i(ebp+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	edx = to32i(ebp+0xD4); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xD8); //mov
	add(esi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = edi; //mov
	add(eax, esi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x10) = eax; //mov
	edx = to32i(ebp+0xDC); //mov
	eax = to32i(ecx); //mov
	esi = to32i(ebp+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	edx = to32i(ebp+0xE0); //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xE4); //mov
	add(edi, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = esi; //mov
	add(eax, edi);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x14) = eax; //mov
	test(ebx, ebx);
	if (jl())
		goto loc_4566FD;
	ebx = 0xFFFFFFFF; //mov
loc_4565B0:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jl())
		goto loc_456707;
	esi = 0xFFFFFFFF; //mov
loc_4565C0:
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jl())
		goto loc_456711;
	edi = 0xFFFFFFFF; //mov
loc_4565D0:
	eax = to32i(ebp+0x9C); //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(esp+0x4C); //mov
	edx = to32i(esp+0x58); //mov
	sub(edx, to32i(eax));
	eax = to32i(ebp+0xA0); //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(esp+0x4C); //mov
	to32i(esp+0x30) = edx; //mov
	edx = to32i(esp+0x58); //mov
	sub(edx, to32i(eax+4));
	eax = to32i(ebp+0xA4); //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(esp+0x4C); //mov
	to32i(esp+0x34) = edx; //mov
	edx = to32i(esp+0x58); //mov
	eax = to32i(eax+8); //mov
	sub(edx, eax);
	to32i(esp+0x38) = edx; //mov
	eax = to32i(ecx); //mov
	edx = to32i(esp+0x30); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	to32i(esp+0x58) = eax; //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = to32i(ecx+8); //mov
	edx = to32i(esp+0x38); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	eax = to32i(esp+0x10); //mov
	imul32(eax, esi);
	to32i(esp+0x58) = eax; //mov
	eax = to32i(esp+0xC); //mov
	imul32(eax, ebx);
	to32i(esp+0x48) = edx; //mov
	add(eax, to32i(esp+0x58));
	edx = to32i(esp+0x14); //mov
	imul32(edx, edi);
	add(eax, edx);
	edx = to32i(esp+0x48); //mov
	add(edx, eax);
	to32i(esp+0x50) = edx; //mov
	to32i(dword_4D626C) = edx; //mov
	test(edx, edx);
	if (jl())
		goto loc_45671B;
loc_45669D:
	eax = 0x28BE; //mov
	edx = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0xE8) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xF0); //mov
	to32i(ebp+0xEC) = eax; //mov
	eax = 0x28BE; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(ebp+0xF0) = eax; //mov
	eax = ebp; //mov
	esp -= 4; _sub_456BA0(); esp += 4; //call
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4566FD:
	ebx = 1; //mov
	goto loc_4565B0;
loc_456707:
	esi = 1; //mov
	goto loc_4565C0;
loc_456711:
	edi = 1; //mov
	goto loc_4565D0;
loc_45671B:
	edx = to32i(ebp+0x108); //mov
	eax = to32i(ebp+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(ebp+0x9C); //mov
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = to32i(ebp+0xD0); //mov
	edx = to32i(ebp+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = to32i(ebp+0xDC); //mov
	edx = to32i(ebp+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, edi);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	to32i(esp+0x24) = edx; //mov
	edx = to32i(ebp+0x108); //mov
	eax = to32i(ebp+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(ebp+0xA0); //mov
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = to32i(ebp+0xD4); //mov
	edx = to32i(ebp+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	to32i(esp+0x58) = edx; //mov
	eax = to32i(ebp+0xE0); //mov
	edx = to32i(ebp+0x110); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, edi);
	edx = to32i(esp+0x58); //mov
	add(edx, eax);
	to32i(esp+0x28) = edx; //mov
	edx = to32i(ebp+0x108); //mov
	eax = to32i(ebp+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(ebx, eax);
	edx = to32i(ebp+0xA4); //mov
	eax = to32i(ebp+0xD8); //mov
	add(ebx, edx);
	edx = to32i(ebp+0x10C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	edx = to32i(ebp+0x110); //mov
	add(ebx, eax);
	eax = to32i(ebp+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, edi);
	add(ebx, eax);
	eax = to32i(esp+0x50); //mov
	to32i(esp+0x2C) = ebx; //mov
	ebx = to32i(esp+0x54); //mov
	neg(eax);
	cmp(eax, ebx);
	if (jle())
		goto loc_45685E;
	to32i(esp+0x54) = eax; //mov
loc_45685E:
	cmp(to32i(dword_4D6264), (int32_t)0);
	if (jz())
		goto loc_4568E5;
	edi = to32i(esp+0x54); //mov
	test(edi, edi);
	if (jz())
		goto loc_4568E5;
	edx = edi; //mov
	eax = edi; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	esi = to32i(ecx); //mov
	edx = esi; //mov
	ebx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	to32i(esp) = eax; //mov
	edx = to32i(ecx+4); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	to32i(esp+4) = eax; //mov
	edx = to32i(ecx+8); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0x9C); //mov
	add(edx, esi);
	ebx = to32i(ebp+0xA0); //mov
	to32i(ebp+0x9C) = edx; //mov
	add(ebx, edi);
	esi = to32i(ebp+0xA4); //mov
	to32i(ebp+0xA0) = ebx; //mov
	add(esi, eax);
	to32i(esp+8) = eax; //mov
	to32i(ebp+0xA4) = esi; //mov
loc_4568E5:
	eax = to32i(esp+0x24); //mov
	sub(eax, to32i(ebp+0x9C));
	edx = to32i(ebp+0xA0); //mov
	to32i(esp+0x3C) = eax; //mov
	eax = to32i(esp+0x28); //mov
	sub(eax, edx);
	ebx = to32i(ebp+0xA4); //mov
	to32i(esp+0x40) = eax; //mov
	eax = to32i(esp+0x2C); //mov
	sub(eax, ebx);
	to32i(esp+0x44) = eax; //mov
	edx = to32i(esp+0x44); //mov
	eax = to32i(ebp+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	to32i(esp+0x18) = ebx; //mov
	edx = to32i(esp+0x3C); //mov
	eax = to32i(ebp+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	to32i(esp+0x1C) = ebx; //mov
	edx = to32i(esp+0x40); //mov
	eax = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebx, eax);
	to32i(esp+0x20) = ebx; //mov
	esi = to32i(esp+0x18); //mov
	eax = to32i(ebp+0xA8); //mov
	add(esi, eax);
	to32i(esp+0x18) = esi; //mov
	edi = to32i(esp+0x1C); //mov
	eax = to32i(ebp+0xAC); //mov
	add(edi, eax);
	to32i(esp+0x1C) = edi; //mov
	eax = to32i(ebp+0xB0); //mov
	edx = (int32_t)(intptr_t)(ebx+eax); //lea
	to32i(esp+0x20) = edx; //mov
	edx = esi; //mov
	eax = to32i(ecx); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	eax = to32i(ecx+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ebx, eax);
	eax = to32i(ecx+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ebx);
	test(eax, eax);
	if (jl())
		goto loc_456A91;
loc_456A0E:
	cmp(to32i(dword_4D6264), (int32_t)0);
	if (jz())
		goto loc_45669D;
	cmp(to32i(esp+0x54), (int32_t)0);
	if (jz())
		goto loc_45669D;
	edx = to32i(esp+4); //mov
	test(edx, edx);
	if (jle())
		goto loc_45669D;
	eax = 0x9CCCC; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = (int32_t)(intptr_t)(eax+eax); //lea
	eax = to32i(ebp+0xAC); //mov
	edx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	cmp(ecx, eax);
	if (jg())
		goto loc_456B6F;
	sub(eax, ecx);
	cmp(to32i(ebp+0xAC), (int32_t)0);
	if (jg())
		goto loc_456B7E;
	bsr(ecx, eax);
	if (jz())
		goto loc_456A84;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_456A84:
	neg(eax);
	to32i(ebp+0xAC) = eax; //mov
	goto loc_45669D;
loc_456A91:
	ebx = (int32_t)(intptr_t)(esp+0x18); //lea
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	eax = ebp; //mov
	esp -= 4; _sub_456C40(); esp += 4; //call
	edx = to32i(esp+0x44); //mov
	eax = to32i(ebp+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	ecx = eax; //mov
	eax = to32i(ebp+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x18) = ecx; //mov
	edx = to32i(esp+0x3C); //mov
	eax = to32i(ebp+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	ecx = eax; //mov
	eax = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x1C) = ecx; //mov
	edx = to32i(esp+0x40); //mov
	eax = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	ecx = eax; //mov
	eax = to32i(ebp+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x20) = ecx; //mov
	ecx = to32i(esp+0x18); //mov
	eax = to32i(ebp+0xA8); //mov
	add(ecx, eax);
	to32i(esp+0x18) = ecx; //mov
	ebx = to32i(esp+0x1C); //mov
	eax = to32i(ebp+0xAC); //mov
	add(ebx, eax);
	to32i(esp+0x1C) = ebx; //mov
	esi = to32i(esp+0x20); //mov
	add(esi, to32i(ebp+0xB0));
	edi = (int32_t)(intptr_t)dword_511F58; //mov
	to32i(esp+0x20) = esi; //mov
	esi = (int32_t)(intptr_t)(esp+0x18); //lea
	movsd();
	movsd();
	movsd();
	goto loc_456A0E;
loc_456B6F:
	to32i(ebp+0xAC) = 0; //mov
	goto loc_45669D;
loc_456B7E:
	bsr(ecx, eax);
	if (jz())
		goto loc_456B95;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_456B95:
	to32i(ebp+0xAC) = eax; //mov
	goto loc_45669D;
}
Fn(void) Game::_sub_456BA0()
{
	push32(edx);
	push32(esi);
	edx = to32i(eax+0xE8); //mov
	test(edx, edx);
	if (jl())
		goto loc_456BFC;
	cmp(edx, (int32_t)0x1CCCC);
	if (jle())
		goto loc_456BB9;
	edx = 0x1CCCC; //mov
loc_456BB9:
	to32i(eax+0xE8) = edx; //mov
	esi = to32i(eax+0xEC); //mov
	test(esi, esi);
	if (jl())
		goto loc_456C0B;
	cmp(esi, (int32_t)0x1CCCC);
	if (jle())
		goto loc_456C13;
	edx = 0x1CCCC; //mov
loc_456BD6:
	to32i(eax+0xEC) = edx; //mov
	edx = to32i(eax+0xF0); //mov
	test(edx, edx);
	if (jl())
		goto loc_456C1E;
	cmp(edx, (int32_t)0x1CCCC);
	if (jle())
		goto loc_456BF3;
	edx = 0x1CCCC; //mov
loc_456BF3:
	to32i(eax+0xF0) = edx; //mov
	pop32(esi);
	pop32(edx);
	return;
loc_456BFC:
	cmp(edx, (int32_t)0xFFFE3334);
	if (jg())
		goto loc_456BB9;
	edx = 0xFFFE3334; //mov
	goto loc_456BB9;
loc_456C0B:
	cmp(esi, (int32_t)0xFFFE3334);
	if (jle())
		goto loc_456C17;
loc_456C13:
	edx = esi; //mov
	goto loc_456BD6;
loc_456C17:
	edx = 0xFFFE3334; //mov
	goto loc_456BD6;
loc_456C1E:
	cmp(edx, (int32_t)0xFFFE3334);
	if (jg())
		goto loc_456BF3;
	edx = 0xFFFE3334; //mov
	to32i(eax+0xF0) = edx; //mov
	pop32(esi);
	pop32(edx);
}
Fn(void) Game::_sub_456C40()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x80);
	ebp = eax; //mov
	to32i(esp+0x78) = edx; //mov
	edi = (int32_t)(intptr_t)(esp+0x54); //lea
	esi = ebx; //mov
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x18); //lea
	esi = ecx; //mov
	xor_(edx, edx);
	movsd();
	movsd();
	movsd();
	to32i(esp+0x74) = edx; //mov
	edx = to32i(eax+0xA8); //mov
	eax = to32i(esp+0x18); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = to32i(ebp+0xAC); //mov
	eax = to32i(esp+0x1C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(ebp+0xB0); //mov
	add(ecx, eax);
	eax = to32i(esp+0x20); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(esp+0x78); //mov
	ecx = to32i(ebp+0x9C); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	to32i(esp+0x48) = eax; //mov
	eax = to32i(esp+0x78); //mov
	ebx = to32i(ebp+0xA0); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ebx);
	to32i(esp+0x4C) = eax; //mov
	eax = to32i(esp+0x78); //mov
	edi = to32i(ebp+0xA4); //mov
	eax = to32i(eax+8); //mov
	sub(eax, edi);
	edx = to32i(esp+0x20); //mov
	to32i(esp+0x50) = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x50); //mov
	to32i(esp+0x30) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x48); //mov
	to32i(esp+0x34) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x18); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x38) = ecx; //mov
	edx = to32i(esp+0x30); //mov
	eax = to32i(ebp+0xE8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x34); //mov
	ecx = eax; //mov
	eax = to32i(ebp+0xEC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x38); //mov
	add(ecx, eax);
	eax = to32i(ebp+0xF0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ecx = eax; //mov
	edx = to32i(ebp+0xF8); //mov
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	add(edx, edx);
	esp -= 4; _sub_45EA40(); esp += 4; //call
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	ebx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = (int32_t)(intptr_t)(esi+edi); //lea
	neg(eax);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	edx = 0x6666; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x7C) = eax; //mov
	cmp(to32i(esp+0x1C), (int32_t)0xB333);
	if (jge())
		goto loc_4573E4;
	test(esi, esi);
	if (jle())
		goto loc_4573DD;
loc_456E2D:
	ecx = (int32_t)(intptr_t)(esi*4+0); //lea
	sub(ecx, esi);
	add(ecx, ecx);
	to32i(ebp+0x160) = ecx; //mov
loc_456E3E:
	esi = to32i(esp+0x78); //mov
	eax = to32i(ebp+0x184); //mov
	to32i(ebp+0x164) = 0; //mov
	or_(eax, (int32_t)0x30000);
	edi = (int32_t)(intptr_t)(ebp+0x170); //lea
	to32i(ebp+0x168) = eax; //mov
	edx = to32i(esp+0x54); //mov
	movsd();
	movsd();
	movsd();
	test(edx, edx);
	if (jnz())
		goto loc_457406;
	cmp(to32i(esp+0x58), (int32_t)0);
	if (jnz())
		goto loc_457406;
	cmp(to32i(esp+0x5C), (int32_t)0);
	if (jnz())
		goto loc_457406;
loc_456E88:
	edx = to32i(esp+0x7C); //mov
	eax = 0xCCCC; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	esi = eax; //mov
	ebx = eax; //mov
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x70) = eax; //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x68) = eax; //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x6C) = eax; //mov
	to32i(esp+0x2C) = eax; //mov
	edx = to32i(ebp+0xF8); //mov
	eax = esi; //mov
	add(edx, edx);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x4C); //mov
	edi = eax; //mov
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	sub(edi, eax);
	eax = to32i(esp+0x5C); //mov
	to32i(esp+0x3C) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	edi = eax; //mov
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x4C); //mov
	sub(edi, eax);
	eax = to32i(esp+0x54); //mov
	to32i(esp+0x40) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	edi = eax; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(edi, eax);
	to32i(esp+0x44) = edi; //mov
	edx = to32i(esp+0x50); //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x4C); //mov
	edi = eax; //mov
	eax = to32i(esp+0x44); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	sub(edi, eax);
	eax = to32i(esp+0x44); //mov
	to32i(esp+0x3C) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x50); //mov
	edi = eax; //mov
	eax = to32i(esp+0x3C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x4C); //mov
	sub(edi, eax);
	eax = to32i(esp+0x3C); //mov
	to32i(esp+0x40) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x48); //mov
	edi = eax; //mov
	eax = to32i(esp+0x40); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x3C); //mov
	sub(edi, eax);
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x40); //mov
	to32i(esp+0x60) = eax; //mov
	to32i(esp+0x3C) = eax; //mov
	eax = ecx; //mov
	to32i(esp+0x44) = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x44); //mov
	edi = eax; //mov
	to32i(esp+0x40) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x70); //mov
	ecx = to32i(esp+0x60); //mov
	add(edx, ecx);
	to32i(esp+0x24) = edx; //mov
	edx = to32i(esp+0x68); //mov
	add(edx, edi);
	to32i(esp+0x28) = edx; //mov
	edx = to32i(esp+0x6C); //mov
	add(edx, eax);
	eax = to32i(esp+0x24); //mov
	to32i(esp+0x2C) = edx; //mov
	edx = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x58); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x28); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	add(ecx, eax);
	eax = to32i(esp+0x2C); //mov
	edi = to32i(esp+0x74); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	cmp(eax, edi);
	if (jle())
		goto loc_457123;
	ebx = eax; //mov
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
	edx = eax; //mov
	eax = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
loc_457123:
	edx = to32i(esp+0x54); //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x58); //mov
	edi = eax; //mov
	to32i(esp+0x54) = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	esi = eax; //mov
	to32i(esp+0x58) = eax; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x64) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	test(eax, eax);
	if (jle())
		goto loc_4573D3;
	edx = to32i(esp+0x18); //mov
	to32i(dword_4D6268) = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ebx = eax; //mov
	to32i(esp) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	ecx = eax; //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x64); //mov
	to32i(esp+8) = eax; //mov
	add(edx, eax);
	eax = to32i(ebp+0xB8); //mov
	to32i(esp+8) = edx; //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ebx, edi);
	edx = ebx; //mov
	to32i(esp) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	add(ecx, esi);
	edx = ecx; //mov
	to32i(esp+4) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0xB8); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	edx = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x14) = eax; //mov
	edx = to32i(ebp+0xA8); //mov
	esi = to32i(ebp+0xB0); //mov
	add(edx, ebx);
	add(esi, eax);
	to32i(ebp+0xA8) = edx; //mov
	eax = to32i(esp+0x4C); //mov
	ebx = to32i(ebp+0xAC); //mov
	to32i(ebp+0xB0) = esi; //mov
	add(ebx, ecx);
	edx = to32i(esp+8); //mov
	to32i(ebp+0xAC) = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x50); //mov
	to32i(esp+0xC) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x48); //mov
	to32i(esp+0x10) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	to32i(esp+0x14) = ecx; //mov
	edx = to32i(esp+8); //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x50); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x50); //mov
	to32i(esp+0xC) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+8); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x48); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+4); //mov
	sub(ecx, eax);
	eax = to32i(esp+0x48); //mov
	to32i(esp+0x10) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x4C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ecx, eax);
	eax = to32i(ebp+0xF8); //mov
	edx = to32i(esp+0xC); //mov
	add(eax, eax);
	to32i(esp+0x14) = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+0xF8); //mov
	edx = to32i(esp+0x10); //mov
	add(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0xF8); //mov
	edx = to32i(esp+0x14); //mov
	add(eax, eax);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = to32i(ebp+0xE8); //mov
	add(edi, ecx);
	edx = to32i(ebp+0xEC); //mov
	to32i(ebp+0xE8) = edi; //mov
	add(edx, ebx);
	ecx = to32i(ebp+0xF0); //mov
	to32i(ebp+0xEC) = edx; //mov
	add(ecx, eax);
	to32i(ebp+0xF0) = ecx; //mov
loc_4573D3:
	add(esp, (int32_t)0x80);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_4573DD:
	neg(esi);
	goto loc_456E2D;
loc_4573E4:
	test(esi, esi);
	if (jle())
		goto loc_4573F6;
	shl(esi, (int32_t)2);
	to32i(ebp+0x160) = esi; //mov
	goto loc_456E3E;
loc_4573F6:
	neg(esi);
	shl(esi, (int32_t)2);
	to32i(ebp+0x160) = esi; //mov
	goto loc_456E3E;
loc_457406:
	edx = to32i(esp+0x18); //mov
	eax = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	ecx = eax; //mov
	eax = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	add(ecx, eax);
	eax = to32i(esp+0x5C); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	edx = to32i(esp+0x18); //mov
	eax = ecx; //mov
	esi = to32i(esp+0x54); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x1C); //mov
	sub(esi, eax);
	eax = ecx; //mov
	edi = to32i(esp+0x58); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x20); //mov
	sub(edi, eax);
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(to32i(esp+0x5C), eax);
	eax = esi; //mov
	edx = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = edi; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	add(ecx, eax);
	eax = edx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_4574CB;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_4574CB:
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	to32i(esp+0x74) = eax; //mov
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to32i(esp+0x54) = esi; //mov
	to32i(esp+0x58) = edi; //mov
	test(eax, eax);
	if (jz())
		goto loc_457541;
	ebx = eax; //mov
	eax = 0x8000; //mov
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
	neg(ecx);
	edx = esi; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x54) = eax; //mov
	edx = edi; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	to32i(esp+0x58) = eax; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x5C) = eax; //mov
	goto loc_456E88;
loc_457541:
	eax = 0xFFFF0000; //mov
	edx = esi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x54) = eax; //mov
	edx = edi; //mov
	eax = 0xFFFF0000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = to32i(esp+0x5C); //mov
	to32i(esp+0x58) = eax; //mov
	eax = 0xFFFF0000; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+0x5C) = eax; //mov
	goto loc_456E88;
}
Fn(void) Game::_sub_457590()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(dword_511EF4); //mov
	imul32(eax, ecx);
	edx = to32i(dword_511F00); //mov
	imul32(edx, esi);
	add(edx, eax);
	eax = to32i(dword_511F0C); //mov
	imul32(eax, ebx);
	add(eax, edx);
	edx = to32i(dword_511EC0); //mov
	sub(eax, edx);
	edx = to32i(dword_511EF8); //mov
	imul32(edx, ecx);
	to32i(dword_511F50) = eax; //mov
	eax = to32i(dword_511F04); //mov
	imul32(eax, esi);
	add(edx, eax);
	eax = to32i(dword_511F10); //mov
	imul32(eax, ebx);
	add(eax, edx);
	edx = to32i(dword_511EC4); //mov
	sub(eax, edx);
	edx = to32i(dword_511EFC); //mov
	imul32(edx, ecx);
	to32i(dword_511F48) = eax; //mov
	eax = to32i(dword_511F08); //mov
	imul32(eax, esi);
	add(edx, eax);
	eax = to32i(dword_511F14); //mov
	imul32(eax, ebx);
	add(edx, eax);
	eax = to32i(dword_511EC8); //mov
	sub(edx, eax);
	eax = to32i(dword_511F3C); //mov
	edi = to32i(eax+0x110); //mov
	to32i(dword_511F4C) = edx; //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457669;
	edx = edi; //mov
	ebp = to32i(dword_511F4C); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457669;
	edx = to32i(dword_511F50); //mov
	edi = to32i(eax+0x108); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457669;
	edx = edi; //mov
	ebp = to32i(dword_511F50); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457669;
	edx = to32i(dword_511F48); //mov
	edi = to32i(eax+0x10C); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457669;
	eax = edi; //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_457670;
loc_457669:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_457670:
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F40); //mov
	add(edi, to32i(eax+0x9C));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	add(edi, eax);
	eax = to32i(dword_511F44); //mov
	to32i(eax) = edi; //mov
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F40); //mov
	ebp = to32i(eax+0xA0); //mov
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, ebp);
	add(edi, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, edi);
	to32i(edx+4) = eax; //mov
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(ecx, eax);
	eax = to32i(dword_511F40); //mov
	add(ecx, to32i(eax+0xA4));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(ecx, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	add(ecx, eax);
	eax = to32i(dword_511F44); //mov
	to32i(eax+8) = ecx; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_4577D0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(dword_511ECC); //mov
	imul32(eax, ecx);
	edx = to32i(dword_511ED0); //mov
	imul32(edx, esi);
	add(edx, eax);
	eax = to32i(dword_511ED4); //mov
	imul32(eax, ebx);
	add(eax, edx);
	edx = to32i(dword_511EB4); //mov
	add(eax, edx);
	edx = to32i(dword_511ED8); //mov
	imul32(edx, ecx);
	to32i(dword_511F50) = eax; //mov
	eax = to32i(dword_511EDC); //mov
	imul32(eax, esi);
	add(edx, eax);
	eax = to32i(dword_511EE0); //mov
	imul32(eax, ebx);
	add(eax, edx);
	edx = to32i(dword_511EB8); //mov
	add(eax, edx);
	edx = to32i(dword_511EE4); //mov
	imul32(edx, ecx);
	to32i(dword_511F48) = eax; //mov
	eax = to32i(dword_511EE8); //mov
	imul32(eax, esi);
	add(edx, eax);
	eax = to32i(dword_511EEC); //mov
	imul32(eax, ebx);
	add(edx, eax);
	eax = to32i(dword_511EBC); //mov
	add(edx, eax);
	eax = to32i(dword_511F40); //mov
	edi = to32i(eax+0x110); //mov
	to32i(dword_511F4C) = edx; //mov
	cmp(edx, edi);
	if (jg())
		goto loc_4578A9;
	edx = edi; //mov
	ebp = to32i(dword_511F4C); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_4578A9;
	edx = to32i(dword_511F50); //mov
	edi = to32i(eax+0x108); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_4578A9;
	edx = edi; //mov
	ebp = to32i(dword_511F50); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_4578A9;
	edx = to32i(dword_511F48); //mov
	edi = to32i(eax+0x10C); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_4578A9;
	eax = edi; //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_4578B0;
loc_4578A9:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_4578B0:
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F3C); //mov
	add(edi, to32i(eax+0x9C));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	add(edi, eax);
	eax = to32i(dword_511F44); //mov
	to32i(eax) = edi; //mov
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F3C); //mov
	ebp = to32i(eax+0xA0); //mov
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, ebp);
	add(edi, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, edi);
	to32i(edx+4) = eax; //mov
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(ecx, eax);
	eax = to32i(dword_511F3C); //mov
	add(ecx, to32i(eax+0xA4));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(ecx, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	add(ecx, eax);
	eax = to32i(dword_511F44); //mov
	to32i(eax+8) = ecx; //mov
	eax = 1; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_457A10()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(dword_511EF4); //mov
	imul32(eax, ecx);
	edx = to32i(dword_511F00); //mov
	imul32(edx, esi);
	add(edx, eax);
	eax = to32i(dword_511F0C); //mov
	imul32(eax, ebx);
	add(edx, eax);
	eax = to32i(dword_511EC0); //mov
	sub(edx, eax);
	eax = to32i(dword_511F04); //mov
	imul32(eax, esi);
	to32i(dword_511F50) = edx; //mov
	edx = to32i(dword_511EF8); //mov
	imul32(edx, ecx);
	add(eax, edx);
	edx = to32i(dword_511F10); //mov
	imul32(edx, ebx);
	add(eax, edx);
	edx = to32i(dword_511EC4); //mov
	sub(eax, edx);
	edx = to32i(dword_511F08); //mov
	imul32(edx, esi);
	to32i(dword_511F48) = eax; //mov
	eax = to32i(dword_511EFC); //mov
	imul32(eax, ecx);
	add(edx, eax);
	eax = to32i(dword_511F14); //mov
	imul32(eax, ebx);
	add(edx, eax);
	eax = to32i(dword_511EC8); //mov
	sub(edx, eax);
	eax = to32i(dword_511F3C); //mov
	edi = to32i(eax+0x110); //mov
	to32i(dword_511F4C) = edx; //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457AED;
	edx = edi; //mov
	ebp = to32i(dword_511F4C); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457AED;
	edx = to32i(dword_511F50); //mov
	edi = to32i(eax+0x108); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457AED;
	edx = edi; //mov
	ebp = to32i(dword_511F50); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457AED;
	edx = to32i(dword_511F48); //mov
	edi = to32i(eax+0x10C); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457AED;
	eax = edi; //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_457AF7;
loc_457AED:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_457AF7:
	eax = to32i(dword_511F40); //mov
	edi = to32i(eax+0xC4); //mov
	imul32(edi, ecx);
	edx = to32i(eax+0xD0); //mov
	imul32(edx, esi);
	add(edx, edi);
	edi = to32i(eax+0xDC); //mov
	imul32(edi, ebx);
	add(edi, edx);
	edx = to32i(dword_511EF0); //mov
	neg(edi);
	to32i(edx) = edi; //mov
	edi = to32i(eax+0xC8); //mov
	imul32(edi, ecx);
	to32i(esp) = edi; //mov
	edi = to32i(eax+0xD4); //mov
	imul32(edi, esi);
	ebp = to32i(esp); //mov
	add(ebp, edi);
	edi = to32i(eax+0xE0); //mov
	imul32(edi, ebx);
	add(edi, ebp);
	neg(edi);
	to32i(edx+4) = edi; //mov
	edi = to32i(eax+0xCC); //mov
	imul32(edi, ecx);
	to32i(esp) = edi; //mov
	edi = to32i(eax+0xD8); //mov
	imul32(edi, esi);
	add(edi, to32i(esp));
	ebp = to32i(eax+0xE4); //mov
	imul32(ebp, ebx);
	add(edi, ebp);
	neg(edi);
	to32i(edx+8) = edi; //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F40); //mov
	add(edi, to32i(eax+0x9C));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, edi);
	to32i(edx) = eax; //mov
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC8); //mov
	edi = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(edi, eax);
	eax = to32i(dword_511F40); //mov
	ebp = to32i(eax+0xA0); //mov
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, ebp);
	add(edi, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = (int32_t)(intptr_t)(edi+eax); //lea
	eax = to32i(dword_511F44); //mov
	to32i(eax+4) = edx; //mov
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(ecx, eax);
	eax = to32i(dword_511F40); //mov
	add(ecx, to32i(eax+0xA4));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(ecx, eax);
	eax = to32i(dword_511F40); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, ecx);
	to32i(edx+8) = eax; //mov
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_457CD0()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ecx = eax; //mov
	esi = edx; //mov
	eax = to32i(dword_511ECC); //mov
	imul32(eax, ecx);
	edx = to32i(dword_511ED0); //mov
	imul32(edx, esi);
	add(edx, eax);
	eax = to32i(dword_511ED4); //mov
	imul32(eax, ebx);
	add(edx, eax);
	eax = to32i(dword_511EB4); //mov
	add(edx, eax);
	eax = to32i(dword_511EDC); //mov
	imul32(eax, esi);
	to32i(dword_511F50) = edx; //mov
	edx = to32i(dword_511ED8); //mov
	imul32(edx, ecx);
	add(eax, edx);
	edx = to32i(dword_511EE0); //mov
	imul32(edx, ebx);
	add(edx, eax);
	eax = to32i(dword_511EB8); //mov
	add(edx, eax);
	eax = to32i(dword_511EE8); //mov
	imul32(eax, esi);
	to32i(dword_511F48) = edx; //mov
	edx = to32i(dword_511EE4); //mov
	imul32(edx, ecx);
	add(eax, edx);
	edx = to32i(dword_511EEC); //mov
	imul32(edx, ebx);
	add(edx, eax);
	eax = to32i(dword_511EBC); //mov
	add(edx, eax);
	eax = to32i(dword_511F40); //mov
	edi = to32i(eax+0x110); //mov
	to32i(dword_511F4C) = edx; //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457DAE;
	edx = edi; //mov
	ebp = to32i(dword_511F4C); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457DAE;
	edx = to32i(dword_511F50); //mov
	edi = to32i(eax+0x108); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457DAE;
	edx = edi; //mov
	ebp = to32i(dword_511F50); //mov
	neg(edx);
	cmp(edx, ebp);
	if (jg())
		goto loc_457DAE;
	edx = to32i(dword_511F48); //mov
	edi = to32i(eax+0x10C); //mov
	cmp(edx, edi);
	if (jg())
		goto loc_457DAE;
	eax = edi; //mov
	neg(eax);
	cmp(eax, edx);
	if (jle())
		goto loc_457DB8;
loc_457DAE:
	xor_(eax, eax);
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_457DB8:
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0xC4); //mov
	imul32(edx, ecx);
	edi = to32i(eax+0xD0); //mov
	imul32(edi, esi);
	add(edi, edx);
	edx = to32i(eax+0xDC); //mov
	imul32(edx, ebx);
	add(edi, edx);
	edx = to32i(dword_511EF0); //mov
	to32i(edx) = edi; //mov
	edi = to32i(eax+0xC8); //mov
	imul32(edi, ecx);
	to32i(esp) = edi; //mov
	edi = to32i(eax+0xD4); //mov
	imul32(edi, esi);
	add(edi, to32i(esp));
	ebp = to32i(eax+0xE0); //mov
	imul32(ebp, ebx);
	add(edi, ebp);
	to32i(edx+4) = edi; //mov
	edi = to32i(eax+0xCC); //mov
	imul32(edi, ecx);
	to32i(esp) = edi; //mov
	edi = to32i(eax+0xD8); //mov
	imul32(edi, esi);
	ebp = to32i(esp); //mov
	add(ebp, edi);
	edi = to32i(eax+0xE4); //mov
	imul32(edi, ebx);
	add(edi, ebp);
	to32i(edx+8) = edi; //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edi = eax; //mov
	imul32(edi, ecx);
	eax = to32i(dword_511F3C); //mov
	add(edi, to32i(eax+0x9C));
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xDC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, edi);
	to32i(edx) = eax; //mov
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xC8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = ecx; //mov
	imul32(edx, eax);
	eax = to32i(dword_511F3C); //mov
	edi = to32i(eax+0xA0); //mov
	add(edi, edx);
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(edi, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE0); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = to32i(dword_511F44); //mov
	add(eax, edi);
	to32i(edx+4) = eax; //mov
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x108); //mov
	eax = to32i(eax+0xCC); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(ecx, eax);
	eax = to32i(dword_511F3C); //mov
	edi = to32i(eax+0xA4); //mov
	edx = to32i(eax+0x10C); //mov
	eax = to32i(eax+0xD8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, esi);
	add(ecx, edi);
	add(ecx, eax);
	eax = to32i(dword_511F3C); //mov
	edx = to32i(eax+0x110); //mov
	eax = to32i(eax+0xE4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	imul32(eax, ebx);
	edx = (int32_t)(intptr_t)(ecx+eax); //lea
	eax = to32i(dword_511F44); //mov
	to32i(eax+8) = edx; //mov
	eax = 1; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_457FA8()
{
	static const void *const off_457F90[] = {
		&&loc_45813B,
		&&loc_45814C,
		&&loc_458160,
		&&loc_458171,
		&&loc_458185,
		&&loc_458196,
	};
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = esp; //mov
	sub(esp, (int32_t)0x10);
	and_(esp, (int32_t)0xFFFFFFF8);
	to32i(esp+8) = edx; //mov
	esi = ebx; //mov
	edi = ecx; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_458055;
	test(edx, edx);
	if (jg())
		goto loc_458072;
	eax = to32i(ebp+0x10); //mov
	to32i(ecx) = ebx; //mov
	to32i(eax) = ebx; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = ebx; //mov
loc_457FD7:
	esi = to32i(edi); //mov
	cmp(esi, (int32_t)0x100);
	if (jle())
		goto loc_4581AA;
loc_457FE5:
	eax = to32i(edi); //mov
	cmp(eax, (int32_t)0x100);
	if (jle())
		goto loc_457FF3;
	eax = 0x100; //mov
loc_457FF3:
	to32i(edi) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	edx = to32i(eax); //mov
	cmp(edx, (int32_t)0x100);
	if (jle())
		goto loc_4581B9;
loc_458006:
	eax = to32i(ebp+0x10); //mov
	ecx = to32i(eax); //mov
	cmp(ecx, (int32_t)0x100);
	if (jle())
		goto loc_4581C8;
	eax = 0x100; //mov
loc_45801C:
	edx = to32i(ebp+0x10); //mov
	to32i(edx) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	ebx = to32i(eax); //mov
	cmp(ebx, (int32_t)0x100);
	if (jle())
		goto loc_4581CF;
loc_458032:
	eax = to32i(ebp+0x14); //mov
	esi = to32i(eax); //mov
	cmp(esi, (int32_t)0x100);
	if (jle())
		goto loc_4581E6;
	eax = 0x100; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_458055:
	eax = to32i(ebp+0x10); //mov
	to32i(ecx) = 0; //mov
	to32i(eax) = 0; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = 0; //mov
	goto loc_457FD7;
loc_458072:
	ecx = eax; //mov
	shl(eax, (int32_t)2);
	sub(eax, ecx);
	add(eax, eax);
	sar(eax, (int32_t)8);
	to32i(esp+4) = eax; //mov
	eax = ecx; //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(esp+4); //mov
	fild(to32i(esp+0xC));
	shl(eax, (int32_t)8);
	fmul(to64f(dbl_4CC5C4));
	to32i(esp+0xC) = eax; //mov
	fild(to32i(esp+0xC));
	fsubp_st(1, 0);
	ebx = 0x100; //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(esp+0xC));
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
	ecx = to32i(esp+8); //mov
	ebx = eax; //mov
	eax = 0x100; //mov
	sub(eax, ecx);
	ecx = eax; //mov
	imul32(ecx, esi);
	edx = ebx; //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x100; //mov
	sub(edx, eax);
	eax = edx; //mov
	imul32(eax, esi);
	edx = 0x10000; //mov
	sar(eax, (int32_t)8);
	sub(edx, ebx);
	to32i(esp) = eax; //mov
	eax = to32i(esp+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = 0x100; //mov
	sub(edx, eax);
	eax = edx; //mov
	imul32(eax, esi);
	sar(ecx, (int32_t)8);
	ebx = to32i(esp+4); //mov
	sar(eax, (int32_t)8);
	cmp(ebx, (int32_t)5);
	if (ja())
		goto loc_457FD7;
	edx = ebx; //mov
	goto *off_457F90[edx];
loc_45813B:
	edx = to32i(ebp+0x10); //mov
	to32i(edi) = esi; //mov
	to32i(edx) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = ecx; //mov
	goto loc_457FD7;
loc_45814C:
	eax = to32i(esp); //mov
	to32i(edi) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(eax) = esi; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = ecx; //mov
	goto loc_457FD7;
loc_458160:
	edx = to32i(ebp+0x10); //mov
	to32i(edi) = ecx; //mov
	to32i(edx) = esi; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = eax; //mov
	goto loc_457FD7;
loc_458171:
	edx = to32i(ebp+0x10); //mov
	eax = to32i(esp); //mov
	to32i(edi) = ecx; //mov
	to32i(edx) = eax; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = esi; //mov
	goto loc_457FD7;
loc_458185:
	to32i(edi) = eax; //mov
	eax = to32i(ebp+0x10); //mov
	to32i(eax) = ecx; //mov
	eax = to32i(ebp+0x14); //mov
	to32i(eax) = esi; //mov
	goto loc_457FD7;
loc_458196:
	eax = to32i(ebp+0x10); //mov
	to32i(edi) = esi; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(eax) = ecx; //mov
	eax = to32i(esp); //mov
	to32i(edx) = eax; //mov
	goto loc_457FD7;
loc_4581AA:
	test(esi, esi);
	if (jge())
		goto loc_457FE5;
	xor_(eax, eax);
	goto loc_457FF3;
loc_4581B9:
	test(edx, edx);
	if (jge())
		goto loc_458006;
	xor_(eax, eax);
	goto loc_45801C;
loc_4581C8:
	eax = ecx; //mov
	goto loc_45801C;
loc_4581CF:
	test(ebx, ebx);
	if (jge())
		goto loc_458032;
	xor_(eax, eax);
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_4581E6:
	eax = esi; //mov
	edx = to32i(ebp+0x14); //mov
	to32i(edx) = eax; //mov
	esp = ebp; //mov
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_458200()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	ebp = eax; //mov
	edi = edx; //mov
	esi = ecx; //mov
	cmp(edx, ebx);
	if (jle())
		goto loc_45834D;
	eax = edx; //mov
loc_458216:
	cmp(ebp, eax);
	if (jle())
		goto loc_458354;
	eax = ebp; //mov
loc_458220:
	to32i(esp) = eax; //mov
	cmp(edi, ebx);
	if (jge())
		goto loc_458366;
	eax = edi; //mov
loc_45822D:
	cmp(ebp, eax);
	if (jge())
		goto loc_45836D;
	eax = ebp; //mov
loc_458237:
	ecx = to32i(esp); //mov
	edx = to32i(esp+0x18); //mov
	sub(ecx, eax);
	eax = to32i(esp); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x14); //mov
	to32i(eax) = 0; //mov
	edx = to32i(esp); //mov
	to32i(esi) = 0; //mov
	test(edx, edx);
	if (jz())
		goto loc_4582B3;
	test(ecx, ecx);
	if (jz())
		goto loc_4582B3;
	edx = ecx; //mov
	shl(edx, (int32_t)8);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(to32i(esp));
	edx = to32i(esp+0x14); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp); //mov
	cmp(ebp, eax);
	if (jnz())
		goto loc_45837F;
	eax = edi; //mov
	sub(eax, ebx);
	ebx = ecx; //mov
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
loc_458299:
	to32i(esi) = eax; //mov
	eax = to32i(esi); //mov
	edx = eax; //mov
	ecx = 6; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	to32i(esi) = eax; //mov
	test(eax, eax);
	if (jl())
		goto loc_4583CD;
loc_4582B3:
	eax = 0x100; //mov
	edx = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi) = eax; //mov
	cmp(eax, (int32_t)0x100);
	if (jle())
		goto loc_4583D6;
loc_4582D1:
	edi = to32i(esi); //mov
	cmp(edi, (int32_t)0x100);
	if (jle())
		goto loc_4583E5;
	eax = 0x100; //mov
loc_4582E4:
	to32i(esi) = eax; //mov
	eax = to32i(esp+0x14); //mov
	ebp = to32i(eax); //mov
	cmp(ebp, (int32_t)0x100);
	if (jle())
		goto loc_4583EC;
loc_4582F8:
	eax = to32i(esp+0x14); //mov
	edx = to32i(eax); //mov
	cmp(edx, (int32_t)0x100);
	if (jle())
		goto loc_4583FB;
	eax = 0x100; //mov
loc_45830F:
	edx = to32i(esp+0x14); //mov
	to32i(edx) = eax; //mov
	eax = to32i(esp+0x18); //mov
	ecx = to32i(eax); //mov
	cmp(ecx, (int32_t)0x100);
	if (jle())
		goto loc_458402;
loc_458327:
	eax = to32i(esp+0x18); //mov
	ebx = to32i(eax); //mov
	cmp(ebx, (int32_t)0x100);
	if (jle())
		goto loc_45841B;
	eax = 0x100; //mov
	edx = to32i(esp+0x18); //mov
	to32i(edx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45834D:
	eax = ebx; //mov
	goto loc_458216;
loc_458354:
	cmp(edi, ebx);
	if (jle())
		goto loc_45835F;
	eax = edi; //mov
	goto loc_458220;
loc_45835F:
	eax = ebx; //mov
	goto loc_458220;
loc_458366:
	eax = ebx; //mov
	goto loc_45822D;
loc_45836D:
	cmp(edi, ebx);
	if (jge())
		goto loc_458378;
	eax = edi; //mov
	goto loc_458237;
loc_458378:
	eax = ebx; //mov
	goto loc_458237;
loc_45837F:
	cmp(edi, eax);
	if (jnz())
		goto loc_4583A8;
	eax = ebx; //mov
	ebx = ecx; //mov
	sub(eax, ebp);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	add(eax, (int32_t)0x20000);
	goto loc_458299;
loc_4583A8:
	eax = ebp; //mov
	ebx = ecx; //mov
	sub(eax, edi);
	edx = eax >> 31; //cdq
	idiv32(ebx);
	ecx = eax; //mov
	xor_(eax, eax);
	shrd(eax, edx, 0x10);
	sar(edx, (int32_t)0x10);
	idiv32(ebx);
	shl(ecx, (int32_t)0x10);
	add(eax, ecx);
	add(eax, (int32_t)0x40000);
	goto loc_458299;
loc_4583CD:
	inc(to16i(esi+2));
	goto loc_4582B3;
loc_4583D6:
	test(eax, eax);
	if (jge())
		goto loc_4582D1;
	xor_(eax, eax);
	goto loc_4582E4;
loc_4583E5:
	eax = edi; //mov
	goto loc_4582E4;
loc_4583EC:
	test(ebp, ebp);
	if (jge())
		goto loc_4582F8;
	xor_(eax, eax);
	goto loc_45830F;
loc_4583FB:
	eax = edx; //mov
	goto loc_45830F;
loc_458402:
	test(ecx, ecx);
	if (jge())
		goto loc_458327;
	xor_(eax, eax);
	edx = to32i(esp+0x18); //mov
	to32i(edx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45841B:
	eax = ebx; //mov
	edx = to32i(esp+0x18); //mov
	to32i(edx) = eax; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_458430()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x28);
	edi = eax; //mov
	esi = ebx; //mov
	ebp = ecx; //mov
	eax = edx; //mov
	byte_511F64[eax] = 1; //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	ecx = (int32_t)(intptr_t)(esp+0x20); //lea
	push32(edx);
	ebx = (int32_t)(intptr_t)(esp+0x20); //lea
	edx = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_458670(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	ecx = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = to32i(esp+0x20); //mov
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x14); //lea
	edx = to32i(esp+0x20); //mov
	push32(eax);
	eax = to32i(esp+0x20); //mov
	xor_(edi, edi);
	esp -= 4; _sub_457FA8(); esp += 4; //call
	test(ebp, ebp);
	if (jle())
		goto loc_4584CC;
loc_458483:
	xor_(eax, eax);
	al = to8i(esi); //mov
	to32i(esp) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+1); //mov
	to32i(esp+4) = eax; //mov
	xor_(eax, eax);
	al = to8i(esi+2); //mov
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	cmp(edx, (int32_t)0x56);
	if (jge())
		goto loc_4584C4;
	cmp(to32i(esp+4), (int32_t)0x80);
	if (jl())
		goto loc_4584C4;
	cmp(eax, (int32_t)0x56);
	if (jge())
		goto loc_4584C4;
	ebx = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = to32i(esp+0x24); //mov
	eax = esp; //mov
	ecx = esi; //mov
	esp -= 4; _sub_4584E0(); esp += 4; //call
loc_4584C4:
	inc(edi);
	add(esi, (int32_t)3);
	cmp(edi, ebp);
	if (jl())
		goto loc_458483;
loc_4584CC:
	add(esp, (int32_t)0x28);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_4584E0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esi = eax; //mov
	edi = edx; //mov
	ebp = to32i(eax+4); //mov
	sub(ebp, (int32_t)0x80);
	eax = ebp; //mov
	sub(eax, edx);
	to32i(esp+0x10) = eax; //mov
	test(eax, eax);
	if (jle())
		goto loc_458610;
	eax = to32i(ebx); //mov
	shl(eax, (int32_t)2);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_458514;
	eax = 0xFF; //mov
loc_458514:
	to32i(esp) = eax; //mov
	eax = to32i(ebx+4); //mov
	shl(eax, (int32_t)2);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_458529;
	eax = 0xFF; //mov
loc_458529:
	to32i(esp+4) = eax; //mov
	eax = to32i(ebx+8); //mov
	shl(eax, (int32_t)2);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_458640;
	to32i(esp+0xC) = 0xFF; //mov
loc_458546:
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	sub(edx, to32i(ebx));
	imul32(edx, to32i(esp+0x10));
	eax = 0x7F; //mov
	sub(eax, edi);
	edi = eax; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	add(eax, to32i(ebx));
	to8i(ecx) = al; //mov
	edx = to32i(esp+4); //mov
	sub(edx, to32i(ebx+4));
	eax = to32i(esp+0x10); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	add(eax, to32i(ebx+4));
	to8i(ecx+1) = al; //mov
	edx = to32i(esp+0xC); //mov
	sub(edx, to32i(ebx+8));
	eax = to32i(esp+0x10); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	add(eax, to32i(ebx+8));
loc_45859F:
	to8i(ecx+2) = al; //mov
	ebx = to32i(esi); //mov
	test(ebx, ebx);
	if (jle())
		goto loc_458609;
	cmp(to32i(esi+8), (int32_t)0);
	if (jle())
		goto loc_458609;
	eax = ebx; //mov
	shl(ebx, (int32_t)2);
	sub(ebx, eax);
	xor_(edx, edx);
	eax = ebx; //mov
	dl = to8i(ecx); //mov
	sar(eax, (int32_t)1);
	add(eax, edx);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4585CB;
	eax = 0xFF; //mov
loc_4585CB:
	to8i(ecx) = al; //mov
	xor_(eax, eax);
	sar(ebp, (int32_t)1);
	al = to8i(ecx+1); //mov
	add(eax, ebp);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_4585E2;
	eax = 0xFF; //mov
loc_4585E2:
	to8i(ecx+1) = al; //mov
	eax = to32i(esi+8); //mov
	ebx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(ebx, eax);
	xor_(eax, eax);
	sar(ebx, (int32_t)1);
	al = to8i(ecx+2); //mov
	add(eax, ebx);
	cmp(eax, (int32_t)0xFF);
	if (jle())
		goto loc_458606;
	eax = 0xFF; //mov
loc_458606:
	to8i(ecx+2) = al; //mov
loc_458609:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_458610:
	edx = to32i(ebx); //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to8i(ecx) = al; //mov
	edx = to32i(ebx+4); //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	to8i(ecx+1) = al; //mov
	edx = to32i(ebx+8); //mov
	imul32(edx, ebp);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	goto loc_45859F;
loc_458640:
	to32i(esp+0xC) = eax; //mov
	goto loc_458546;
}
Fn(void) Game::_sub_458650()
{
	push32(edx);
	edx = to32i(dword_4D69BC); //mov
	test(edx, edx);
	if (jnz())
		goto loc_45865D;
	pop32(edx);
	return;
loc_45865D:
	push32(ecx);
	eax = edx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D69BC) = ecx; //mov
	pop32(ecx);
	pop32(edx);
}
Fn(void) Game::_sub_458670()
{
	push32(esi);
	shl(eax, (int32_t)4);
	esi = to32i(dword_4D62C8+eax); //mov
	to32i(edx) = esi; //mov
	edx = to32i(dword_4D62CC+eax); //mov
	to32i(ebx) = edx; //mov
	edx = to32i(dword_4D62D0+eax); //mov
	to32i(ecx) = edx; //mov
	edx = to32i(esp+8); //mov
	eax = to32i(dword_4D62D4+eax); //mov
	to32i(edx) = eax; //mov
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_4586A0()
{
	push32(edx);
	xor_(eax, eax);
loc_4586A3:
	inc(eax);
	xor_(dl, dl);
	byte_511F63[eax] = dl; //mov
	cmp(eax, (int32_t)0x59);
	if (jl())
		goto loc_4586A3;
	pop32(edx);
}
Fn(void) Game::_sub_4586C0()
{
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	cmp(esi, to32i(dword_511FCC));
	if (jnb())
		goto loc_4586D6;
	eax = to32i(ecx+esi*4); //mov
	add(eax, ecx);
	pop32(esi);
	pop32(ecx);
	return;
loc_4586D6:
	eax = to32i(ecx+esi*4); //mov
	add(eax, ecx);
	pop32(esi);
	pop32(ecx);
}
Fn(void) Game::_sub_458700()
{
	cmp(eax, to32i(dword_511FD0));
	if (jnz())
		goto loc_45870E;
	eax = to32i(dword_511FCC); //mov
	return;
loc_45870E:
	eax = to32i(dword_511FCC); //mov
}
Fn(void) Game::_sub_458730()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ecx = eax; //mov
	esi = edx; //mov
	cmp(eax, to32i(dword_511FD0));
	if (jnz())
		goto loc_45873F;
loc_45873F:
	edx = 0x10; //mov
	eax = ecx; //mov
	esp -= 4; _sub_487968(); esp += 4; //call
	ebx = to32i(dword_511FC8); //mov
	edx = esi; //mov
	eax = ecx; //mov
	sub(ebx, (int32_t)0x10);
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_458780()
{
	cmp(eax, to32i(dword_511FD0));
	if (jnz())
		goto loc_45878E;
	eax = to32i(dword_511FC8); //mov
	return;
loc_45878E:
	eax = to32i(dword_511FC8); //mov
}
Fn(void) Game::_sub_4587B0()
{
	push32(ecx);
	ecx = eax; //mov
	cmp(eax, to32i(dword_511FD0));
	if (jnz())
		goto loc_4587CC;
	eax = ecx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_487950(); esp += 4; //call
	to32i(dword_511FD0) = ecx; //mov
	pop32(ecx);
	return;
loc_4587CC:
	eax = ecx; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_487950(); esp += 4; //call
	to32i(dword_511FD0) = ecx; //mov
	pop32(ecx);
}
Fn(void) Game::_sub_458800()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)8);
	esi = eax; //mov
	cmp(to32i(dword_511FD0), (int32_t)0);
	if (jz())
		goto loc_458829;
	push32(aCol_opencolfil);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)4);
	eax = to32i(dword_511FD0); //mov
	esp -= 4; _sub_4587B0(); esp += 4; //call
loc_458829:
	ecx = (int32_t)(intptr_t)(esp+4); //lea
	ebx = esp; //mov
	edx = (int32_t)(intptr_t)dword_511FD0; //mov
	eax = esi; //mov
	esp -= 4; _sub_4877B4(); esp += 4; //call
	ebx = 0x10; //mov
	edx = (int32_t)(intptr_t)dword_511FC0; //mov
	eax = to32i(dword_511FD0); //mov
	esp -= 4; _sub_487958(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_45887D;
	push32(eax);
	push32(aCol_opencolf_0);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)8);
loc_458861:
	eax = to32i(dword_511FD0); //mov
	xor_(ebx, ebx);
	esp -= 4; _sub_487950(); esp += 4; //call
	to32i(dword_511FD0) = ebx; //mov
	xor_(eax, eax);
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45887D:
	ebx = 4; //mov
	edx = (int32_t)(intptr_t)aColl; //mov
	eax = (int32_t)(intptr_t)dword_511FC0; //mov
	esp -= 4; _strncmp_(); esp += 4; //call
	test(eax, eax);
	if (jnz())
		goto loc_4588AB;
	cmp(to32i(dword_511FC4), (int32_t)0xB);
	if (jnz())
		goto loc_4588BA;
	eax = to32i(dword_511FD0); //mov
	add(esp, (int32_t)8);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4588AB:
	push32(aCol_opencolf_1);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_458861;
loc_4588BA:
	push32(aCol_opencolf_2);
	esp -= 4; _sub_48EC20(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_458861;
}
Fn(void) Game::_sub_4588D0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	cmp(to32i(dword_511E34), (int32_t)0);
	if (jle())
		goto loc_4588F9;
	cmp(to32i(eax+0x1E8), (int32_t)0);
	if (jnz())
		goto loc_4588EB;
	esp -= 4; _sub_439360(); esp += 4; //call
loc_4588EB:
	eax = ecx; //mov
	esp -= 4; _sub_439300(); esp += 4; //call
	eax = ecx; //mov
	esp -= 4; _sub_4390F0(); esp += 4; //call
loc_4588F9:
	eax = ecx; //mov
	xor_(edx, edx);
	call(to32i(ecx+0x370));
	dl = to8i(byte_512A39); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	xor_(edx, edx);
	shl(eax, (int32_t)3);
	dl = to8i(byte_512A3A); //mov
	to8i(ecx+0x2D4) = al; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	edx = to32i(dword_512A35); //mov
	shl(eax, (int32_t)3);
	sar(edx, (int32_t)0x18);
	to8i(ecx+0x2D5) = al; //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)2);
	sbb(eax, edx);
	sar(eax, (int32_t)2);
	shl(eax, (int32_t)2);
	to32i(ecx+0x2E0) = eax; //mov
	eax = to32i(ecx+0x1E8); //mov
	shl(eax, (int32_t)6);
	cmp(to32i(dword_512278+eax), (int32_t)1);
	if (jnz())
		goto loc_4589B9;
	xor_(eax, eax);
	al = to8i(ecx+0x2DA); //mov
	esp -= 4; _sub_45BA40(); esp += 4; //call
loc_45897B:
	to8i(ecx+0x2D6) = al; //mov
	test(to8i(byte_512A3B), (int8_t)8);
	if (jz())
		goto loc_4589D1;
	eax = 1; //mov
loc_45898F:
	dl = to8i(byte_512A3B); //mov
	to8i(ecx+0x2DC) = al; //mov
	test(dl, (int8_t)4);
	if (jz())
		goto loc_4589D5;
	eax = 1; //mov
loc_4589A5:
	dh = to8i(byte_512A3B); //mov
	to8i(ecx+0x2DD) = al; //mov
	test(dh, (int8_t)0x40);
	if (jnz())
		goto loc_4589D9;
	pop32(edx);
	pop32(ecx);
	return;
loc_4589B9:
	edx = to32i(ecx+0x2EC); //mov
	xor_(eax, eax);
	edx = to32i(edx+4); //mov
	al = to8i(ecx+0x2DA); //mov
	esp -= 4; _sub_45BA70(); esp += 4; //call
	goto loc_45897B;
loc_4589D1:
	xor_(eax, eax);
	goto loc_45898F;
loc_4589D5:
	xor_(eax, eax);
	goto loc_4589A5;
loc_4589D9:
	eax = ecx; //mov
	esp -= 4; _sub_452170(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4589F0()
{
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_439300(); esp += 4; //call
	eax = edx; //mov
	esp -= 4; _sub_4390F0(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_458A10()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x10);
	edx = esi; //mov
	esi = esp; //mov
	esp -= 4; _sub_477620(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47ADC0(); esp += 4; //call
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	edi = to32i(esp+0xC); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jnz())
		goto loc_458ACA;
loc_458A54:
	cmp(to32i(dword_540D94), (int32_t)2);
	if (jl())
		goto loc_458A83;
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_479510(); esp += 4; //call
	ebp = to32i(esp+0xC); //mov
	push32(ebp);
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
loc_458A83:
	xor_(eax, eax);
	esp -= 4; _sub_4593E0(); esp += 4; //call
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jnz())
		goto loc_458AF5;
loc_458A93:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47B7D0(); esp += 4; //call
	edi = to32i(esp+0xC); //mov
	push32(edi);
	ebp = to32i(esp+0xC); //mov
	push32(ebp);
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	edi = edx; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)0x10);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_458ACA:
	esi = (int32_t)(intptr_t)(esp+8); //lea
	esp -= 4; _sub_47ADA0(); esp += 4; //call
	eax = to32i(esp+0xC); //mov
	push32(eax);
	ecx = to32i(esp+0xC); //mov
	push32(ecx);
	ebx = to32i(esp+0xC); //mov
	push32(ebx);
	esi = to32i(esp+0xC); //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x10); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	goto loc_458A54;
loc_458AF5:
	eax = 1; //mov
	esp -= 4; _sub_4593E0(); esp += 4; //call
	goto loc_458A93;
}
Fn(void) Game::_sub_458B10()
{
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x20);
	ecx = esi; //mov
	edx = eax; //mov
	cmp(to32i(dword_511FE0+eax*4), (int32_t)0);
	if (jnz())
		goto loc_458B3C;
	esi = esp; //mov
	esp -= 4; _sub_46FE50(); esp += 4; //call
	esi = esp; //mov
	edi = ecx; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	return;
loc_458B3C:
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	esp -= 4; _sub_47A180(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x14); //lea
	eax = edx; //mov
	esp -= 4; _sub_4798E0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x1C); //lea
	eax = edx; //mov
	esp -= 4; _sub_479DD0(); esp += 4; //call
	esi = to32i(esp+0x18); //mov
	push32(esi);
	edi = to32i(esp+0x18); //mov
	push32(edi);
	ebp = to32i(esp+0x18); //mov
	push32(ebp);
	eax = to32i(esp+0x18); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x1C); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edx = to32i(esp+0x20); //mov
	push32(edx);
	ebx = to32i(esp+0x20); //mov
	push32(ebx);
	esi = to32i(esp+0x18); //mov
	push32(esi);
	edi = to32i(esp+0x18); //mov
	push32(edi);
	esi = (int32_t)(intptr_t)(esp+0x1C); //lea
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0xC); //lea
	movsd();
	movsd();
	pop32(ebx);
	esi = esp; //mov
	edi = ecx; //mov
	movsd();
	movsd();
	eax = ecx; //mov
	add(esp, (int32_t)0x20);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_458BC0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x110);
	ebp = esi; //mov
	esi = (int32_t)(intptr_t)(esp+0x108); //lea
	esp -= 4; _sub_46FE50(); esp += 4; //call
	xor_(ecx, ecx);
	xor_(edi, edi);
loc_458BDD:
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_458C0F;
	eax = 2; //mov
loc_458BEB:
	cmp(ecx, eax);
	if (jge())
		goto loc_45902E;
	cmp(to32i(dword_512010+edi), (int32_t)0);
	if (jnz())
		goto loc_458C16;
loc_458BFC:
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jnz())
		goto loc_45901B;
	inc(ecx);
	add(edi, (int32_t)4);
	goto loc_458BDD;
loc_458C0F:
	eax = 1; //mov
	goto loc_458BEB;
loc_458C16:
	eax = esp; //mov
	edx = to32i(dword_512024); //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_459050(); esp += 4; //call
	xor_(ebx, ebx);
	eax = esp; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	esi = to32i(esp+0x104); //mov
	push32(esi);
	eax = to32i(esp+0x104); //mov
	push32(eax);
	edx = to32i(esp+0x114); //mov
	push32(edx);
	ebx = to32i(esp+0x114); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edx = ecx; //mov
	eax = 0xC; //mov
	ebx = 7; //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_459970(); esp += 4; //call
	esp -= 4; _sub_47AE50(); esp += 4; //call
	esi = to32i(esp+0x104); //mov
	push32(esi);
	eax = to32i(esp+0x104); //mov
	push32(eax);
	edx = to32i(esp+0x114); //mov
	push32(edx);
	ebx = to32i(esp+0x114); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	cmp(to32i(dword_51200C), (int32_t)0);
	if (jz())
		goto loc_458FD3;
	test(to8i(dword_540F48), (int8_t)0x10);
	if (jz())
		goto loc_458FD3;
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)asc_4CC788; //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	edx = ecx; //mov
loc_458CD7:
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	ebx = to32i(esp+0x104); //mov
	push32(ebx);
	esi = to32i(esp+0x104); //mov
	push32(esi);
	eax = to32i(esp+0x114); //mov
	push32(eax);
	edx = to32i(esp+0x114); //mov
	push32(edx);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = 0xB; //mov
	ebx = 8; //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	edx = ecx; //mov
	esp -= 4; _sub_459970(); esp += 4; //call
	esp -= 4; _sub_47AE50(); esp += 4; //call
	ebx = to32i(esp+0x104); //mov
	push32(ebx);
	esi = to32i(esp+0x104); //mov
	push32(esi);
	eax = to32i(esp+0x114); //mov
	push32(eax);
	edx = to32i(esp+0x114); //mov
	push32(edx);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	ebx = to32i(dword_512048); //mov
	push32(ebx);
	esi = to32i(dword_512044); //mov
	push32(esi);
	push32(a2d2d);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = ecx; //mov
	push32(eax);
	ebx = 2; //mov
	esi = (int32_t)(intptr_t)(esp+0x110); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	add(esp, (int32_t)0x10);
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	push32(eax);
	edx = to32i(esp+0x104); //mov
	push32(edx);
	ebx = to32i(esp+0x114); //mov
	push32(ebx);
	esi = to32i(esp+0x114); //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = to32i(dword_512038); //mov
	push32(eax);
	push32(aD_1);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	edx = ecx; //mov
	push32(eax);
	ebx = 3; //mov
	esi = (int32_t)(intptr_t)(esp+0x10C); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	add(esp, (int32_t)0xC);
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	edx = to32i(esp+0x104); //mov
	push32(edx);
	ebx = to32i(esp+0x104); //mov
	push32(ebx);
	esi = to32i(esp+0x114); //mov
	push32(esi);
	eax = to32i(esp+0x114); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	edx = to32i(dword_51203C); //mov
	eax = to32i(dword_512004); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	push32(eax);
	push32(a3d);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	ebx = 4; //mov
	eax = esp; //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	edx = ecx; //mov
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	edx = to32i(esp+0x104); //mov
	push32(edx);
	ebx = to32i(esp+0x104); //mov
	push32(ebx);
	esi = to32i(esp+0x114); //mov
	push32(esi);
	eax = to32i(esp+0x114); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	ebx = to32i(dword_512034); //mov
	edx = to32i(dword_512030); //mov
	eax = ecx; //mov
	esp -= 4; _sub_47A418(); esp += 4; //call
	edx = to32i(esp+0x10C); //mov
	push32(edx);
	ebx = to32i(esp+0x10C); //mov
	push32(ebx);
	esi = to32i(esp+0x10C); //mov
	push32(esi);
	eax = to32i(esp+0x10C); //mov
	edx = ecx; //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	ebx = 0xC; //mov
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	eax = 0xD; //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_459970(); esp += 4; //call
	esp -= 4; _sub_47AE50(); esp += 4; //call
	edx = to32i(esp+0x104); //mov
	push32(edx);
	ebx = to32i(esp+0x104); //mov
	push32(ebx);
	esi = to32i(esp+0x114); //mov
	push32(esi);
	eax = to32i(esp+0x114); //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	cmp(to32i(dword_51204C), (int32_t)0);
	if (jz())
		goto loc_458F78;
	cmp(to32i(dword_512008), (int32_t)0);
	if (jnz())
		goto loc_459009;
loc_458F2A:
	eax = esp; //mov
	ebx = 0xB; //mov
	edx = to32i(dword_51204C); //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	esp -= 4; _sub_459050(); esp += 4; //call
	eax = esp; //mov
	edx = ecx; //mov
	esp -= 4; _sub_47B2F0(); esp += 4; //call
	esi = to32i(esp+0x104); //mov
	push32(esi);
	eax = to32i(esp+0x104); //mov
	push32(eax);
	edx = to32i(esp+0x114); //mov
	push32(edx);
	ebx = to32i(esp+0x114); //mov
	push32(ebx);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
loc_458F78:
	esi = to32i(dword_511FEC); //mov
	test(esi, esi);
	if (jz())
		goto loc_458BFC;
	ebx = 9; //mov
	edx = ecx; //mov
	eax = to32i(esi+0x21C); //mov
	esi = (int32_t)(intptr_t)(esp+0x100); //lea
	add(eax, (int32_t)0x34);
	esp -= 4; _sub_47AE50(); esp += 4; //call
	eax = to32i(esp+0x104); //mov
	push32(eax);
	edx = to32i(esp+0x104); //mov
	push32(edx);
	ebx = to32i(esp+0x114); //mov
	push32(ebx);
	esi = to32i(esp+0x114); //mov
	push32(esi);
	esi = (int32_t)(intptr_t)(esp+0x118); //lea
	esp -= 4; _sub_46FDA0(); esp += 4; //call
	goto loc_458BFC;
loc_458FD3:
	eax = to32i(dword_51202C); //mov
	push32(eax);
	edx = to32i(dword_512028); //mov
	push32(edx);
	push32(aDD2);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = 1; //mov
	push32(eax);
	esi = (int32_t)(intptr_t)(esp+0x110); //lea
	edx = ecx; //mov
	esp -= 4; _sprintf_(); esp += 4; //call
	eax = (int32_t)(intptr_t)(esp+0x10); //lea
	add(esp, (int32_t)0x10);
	goto loc_458CD7;
loc_459009:
	test(to8i(dword_540F48), (int8_t)0x10);
	if (jz())
		goto loc_458F2A;
	goto loc_458F78;
loc_45901B:
	eax = 1; //mov
	esp -= 4; _sub_459100(); esp += 4; //call
	inc(ecx);
	add(edi, (int32_t)4);
	goto loc_458BDD;
loc_45902E:
	esi = (int32_t)(intptr_t)(esp+0x108); //lea
	edi = ebp; //mov
	movsd();
	movsd();
	eax = ebp; //mov
	add(esp, (int32_t)0x110);
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_459050()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	esi = eax; //mov
	ebx = edx; //mov
	test(edx, edx);
	if (jle())
		goto loc_4590EA;
loc_459061:
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	ecx = eax; //mov
	test(ebx, ebx);
	if (jle())
		goto loc_4590F1;
loc_459074:
	edi = 0x40; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edi = 0x3C; //mov
	ebx = edx; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(edi);
	ebp = 0x3C; //mov
	edi = edx; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	ecx = edx; //mov
	edx = ebx; //mov
	eax = (int32_t)(intptr_t)(edx*4+0); //lea
	sub(eax, edx);
	shl(eax, (int32_t)3);
	add(edx, eax);
	shl(edx, (int32_t)2);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)6);
	sbb(eax, edx);
	sar(eax, (int32_t)6);
	push32(eax);
	push32(ecx);
	eax = to32i(dword_512234); //mov
	push32(edi);
	edx = to32i(off_4D69E0+eax*4); //mov
	push32(edx);
	push32(esi);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4590EA:
	neg(edx);
	goto loc_459061;
loc_4590F1:
	neg(ebx);
	goto loc_459074;
}
Fn(void) Game::_sub_459100()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(ebp);
	edx = eax; //mov
	esp -= 4; _sub_44B2A0(); esp += 4; //call
	ecx = to32i(dword_512208); //mov
	esi = eax; //mov
	cmp(ecx, (int32_t)1);
	if (jnz())
		goto loc_459262;
	eax = ecx; //mov
loc_45911E:
	to32i(dword_511FD4) = eax; //mov
	eax = (int32_t)(intptr_t)dword_512010; //mov
	test(eax, eax);
	if (jz())
		goto loc_45925D;
	push32(edi);
	push32(ebx);
	eax = to32i(esi+0x230); //mov
	inc(eax);
	to32i(dword_512028) = eax; //mov
	eax = to32i(dword_5121FC); //mov
	ebx = to32i(dword_512028); //mov
	to32i(dword_51202C) = eax; //mov
	cmp(ebx, (int32_t)1);
	if (jge())
		goto loc_45915D;
	to32i(dword_512028) = 1; //mov
loc_45915D:
	ebp = to32i(dword_51202C); //mov
	cmp(ebp, to32i(dword_512028));
	if (jge())
		goto loc_459171;
	to32i(dword_512028) = ebp; //mov
loc_459171:
	eax = to32i(dword_540F48); //mov
	cmp(eax, (int32_t)0x200);
	if (jge())
		goto loc_459269;
	xor_(ebx, ebx);
	to32i(dword_512008) = ebx; //mov
	to32i(dword_512024) = ebx; //mov
loc_45918F:
	eax = to32i(dword_540F48); //mov
	sub(eax, to32i(esi+0x234));
	cmp(eax, (int32_t)0x140);
	if (jge())
		goto loc_4593AE;
	ecx = to32i(dword_51202C); //mov
	cmp(ecx, to32i(dword_512028));
	if (jnz())
		goto loc_4593AE;
	to32i(dword_51200C) = 1; //mov
loc_4591C1:
	esp -= 4; _sub_474E30(); esp += 4; //call
	to32i(dword_512048) = eax; //mov
	eax = esi; //mov
	esp -= 4; _sub_474E60(); esp += 4; //call
	ebp = to32i(dword_511FD4); //mov
	to32i(dword_512044) = eax; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_4591F9;
	cmp(to32i(dword_5128C8+edx*4), (int32_t)0);
	if (jnz())
		goto loc_4593BB;
loc_4591EF:
	esp -= 4; _sub_474E10(); esp += 4; //call
	to32i(dword_511FEC) = eax; //mov
loc_4591F9:
	ebx = (int32_t)(intptr_t)dword_512040; //mov
	edx = (int32_t)(intptr_t)dword_512034; //mov
	eax = esi; //mov
	esp -= 4; _sub_452F30(); esp += 4; //call
	push32(dword_512068);
	push32(dword_512064);
	ecx = (int32_t)(intptr_t)dword_51203C; //mov
	ebx = (int32_t)(intptr_t)dword_512038; //mov
	push32(dword_512060);
	edx = (int32_t)(intptr_t)dword_512030; //mov
	eax = esi; //mov
	esp -= 4; _sub_4535D0(); esp += 4; //call
	ebp = to32i(dword_51203C); //mov
	test(ebp, ebp);
	if (jle())
		goto loc_4593D6;
	eax = ebp; //mov
loc_45923F:
	to32i(dword_51203C) = eax; //mov
	eax = to32i(dword_512040); //mov
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	to32i(dword_512040) = eax; //mov
	pop32(ebx);
	pop32(edi);
loc_45925D:
	pop32(ebp);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_459262:
	xor_(eax, eax);
	goto loc_45911E;
loc_459269:
	cmp(to32i(esi+0x230), (int32_t)0);
	if (jz())
		goto loc_45931E;
	sub(eax, to32i(esi+0x234));
	cmp(eax, (int32_t)0x140);
	if (jge())
		goto loc_459311;
loc_459287:
	eax = to32i(esi+0x230); //mov
	eax = to32i(esi+eax*4+0x234); //mov
	edi = to32i(dword_540D94); //mov
	to32i(dword_512024) = eax; //mov
	cmp(edi, (int32_t)2);
	if (jge())
		goto loc_4592BA;
	ebp = to32i(dword_51204C); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_459354;
	cmp(eax, ebp);
	if (jl())
		goto loc_459354;
loc_4592BA:
	ebx = to32i(dword_512024); //mov
	cmp(ebx, to32i(dword_51204C));
	if (jnz())
		goto loc_4592D2;
	to32i(dword_512008) = 1; //mov
loc_4592D2:
	eax = to32i(esi+0x224); //mov
	ebp = to32i(dword_540F48); //mov
	add(eax, (int32_t)0xC0);
	cmp(eax, ebp);
	if (jge())
		goto loc_459373;
	xor_(edi, edi);
	to32i(dword_512008) = edi; //mov
loc_4592F3:
	cmp(to32i(dword_512070), (int32_t)0);
	if (jz())
		goto loc_45918F;
	xor_(eax, eax);
	to32i(dword_512070) = eax; //mov
	esp -= 4; _sub_47CD30(); esp += 4; //call
	goto loc_45918F;
loc_459311:
	cmp(to32i(esi+0x280), (int32_t)2);
	if (jz())
		goto loc_459287;
loc_45931E:
	eax = to32i(dword_540F48); //mov
	ebp = to32i(esi+0x234); //mov
	sub(eax, ebp);
	to32i(dword_512024) = eax; //mov
	xor_(eax, eax);
	ecx = to32i(dword_512070); //mov
	to32i(dword_512008) = eax; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45918F;
	to32i(dword_512070) = eax; //mov
	esp -= 4; _sub_47CD30(); esp += 4; //call
	goto loc_45918F;
loc_459354:
	eax = to32i(dword_512024); //mov
	ecx = 1; //mov
	to32i(dword_51204C) = eax; //mov
	to32i(dword_512008) = ecx; //mov
	esp -= 4; _sub_47CD30(); esp += 4; //call
	goto loc_45918F;
loc_459373:
	cmp(to32i(dword_512008), (int32_t)0);
	if (jz())
		goto loc_4592F3;
	test(to8i(dword_540F48), (int8_t)0x10);
	if (jz())
		goto loc_4592F3;
	cmp(to32i(dword_512070), (int32_t)0);
	if (jnz())
		goto loc_45918F;
	to32i(dword_512070) = 1; //mov
	esp -= 4; _sub_47CD30(); esp += 4; //call
	goto loc_45918F;
loc_4593AE:
	xor_(ebx, ebx);
	to32i(dword_51200C) = ebx; //mov
	goto loc_4591C1;
loc_4593BB:
	cmp(eax, to32i(dword_512048));
	if (jl())
		goto loc_4593CE;
	to32i(dword_511FEC) = ebp; //mov
	goto loc_4591F9;
loc_4593CE:
	add(eax, (int32_t)2);
	goto loc_4591EF;
loc_4593D6:
	eax = ebp; //mov
	neg(eax);
	goto loc_45923F;
}
Fn(void) Game::_sub_4593E0()
{
	push32(ecx);
	push32(edx);
	edx = eax; //mov
	esp -= 4; _sub_44B2A0(); esp += 4; //call
	ecx = to32i(eax+0x288); //mov
	cmp(ecx, (int32_t)0x40);
	if (jge())
		goto loc_459404;
	xor_(eax, eax);
	shl(edx, (int32_t)2);
	cmp(eax, to32i(dword_51201C+edx));
	if (jnz())
		goto loc_459432;
	pop32(edx);
	pop32(ecx);
	return;
loc_459404:
	cmp(ecx, (int32_t)0x94);
	if (jge())
		goto loc_45941F;
	eax = 1; //mov
	shl(edx, (int32_t)2);
	cmp(eax, to32i(dword_51201C+edx));
	if (jnz())
		goto loc_459432;
	pop32(edx);
	pop32(ecx);
	return;
loc_45941F:
	eax = 2; //mov
	shl(edx, (int32_t)2);
	cmp(eax, to32i(dword_51201C+edx));
	if (jnz())
		goto loc_459432;
	pop32(edx);
	pop32(ecx);
	return;
loc_459432:
	to32i(dword_51201C+edx) = eax; //mov
	esp -= 4; _sub_47CD30(); esp += 4; //call
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_459440()
{
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jnz())
		goto locret_45946A;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto locret_45946A;
	cmp(to32i(dword_512054), (int32_t)0);
	if (jnz())
		goto loc_45946B;
	eax = 1; //mov
	to32i(dword_512054) = eax; //mov
	_sub_47C3E0(); return; //jmp
locret_45946A:
	return;
loc_45946B:
	xor_(eax, eax);
	to32i(dword_512054) = eax; //mov
	_sub_47C3E0(); return; //jmp
}
Fn(void) Game::_sub_459480()
{
	push32(esi);
	push32(ebp);
	shl(eax, (int32_t)2);
	cmp(to32i(dword_512010+eax), (int32_t)0);
	if (jz())
		goto loc_4594B0;
	esi = to32i(dword_511FE0+eax); //mov
	test(esi, esi);
	if (jz())
		goto loc_4594A8;
	xor_(ebp, ebp);
	to32i(dword_511FE0+eax) = ebp; //mov
loc_4594A0:
	esp -= 4; _sub_47C3E0(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
	return;
loc_4594A8:
	to32i(dword_512010+eax) = esi; //mov
	goto loc_4594A0;
loc_4594B0:
	push32(ecx);
	ecx = 1; //mov
	to32i(dword_511FE0+eax) = ecx; //mov
	to32i(dword_512010+eax) = ecx; //mov
	pop32(ecx);
	esp -= 4; _sub_47C3E0(); esp += 4; //call
	pop32(ebp);
	pop32(esi);
}
Fn(void) Game::_sub_4594D0()
{
	cmp(to32i(dword_51205C), (int32_t)0);
	if (jge())
	{
		_nullsub_56();
		return;
	}
}
Fn(void) Game::_sub_4594E0()
{
	esp -= 4; _sub_47C2B0(); esp += 4; //call
	push32(ecx);
	push32(edx);
	edx = to32i(dword_4D69DC); //mov
	test(edx, edx);
	if (jnz())
		goto loc_459957;
	xor_(ecx, ecx);
	to32i(dword_4D69DC) = ecx; //mov
	pop32(edx);
	pop32(ecx);
	return;
loc_459957:
	eax = edx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(ecx, ecx);
	to32i(dword_4D69DC) = ecx; //mov
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_4594F0()
{
	esp -= 4; _sub_477730(); esp += 4; //call
	_sub_47CD30(); return; //jmp
}
Fn(void) Game::_sub_459500()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0xFC);
	cmp(to32i(dword_512208), (int32_t)1);
	if (jz())
		goto loc_45952C;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jz())
		goto loc_459539;
loc_45952C:
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_459539:
	ebx = (int32_t)(intptr_t)aCNfs2seGameC_5; //mov
	esi = 0x149; //mov
	edx = 0x98; //mov
	eax = (int32_t)(intptr_t)aHudcon; //mov
	ecx = 0x98; //mov
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	xor_(ebx, ebx);
	esi = (int32_t)(intptr_t)dword_511FD4; //mov
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
	edi = to32i(dword_5134C8); //mov
	push32(edi);
	push32(aShudcon_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	eax = ebp; //mov
	edx = ebp; //mov
	esp -= 4; _sub_484D94(); esp += 4; //call
	ebx = eax; //mov
	eax = esp; //mov
	esp -= 4; _sub_4875B0(); esp += 4; //call
	test(ebp, ebp);
	if (jz())
		goto loc_45952C;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	add(esp, (int32_t)0xFC);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_4595D0()
{
	push32(edx);
	edx = to32i(dword_51205C); //mov
	test(edx, edx);
	if (jge())
		goto loc_4595DD;
	pop32(edx);
	return;
loc_4595DD:
	eax = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_4595F0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1A4);
	xor_(edx, edx);
	to32i(esp+0x1A0) = edx; //mov
	xor_(edx, edx);
	ecx = to32i(dword_512208); //mov
	to32i(esp+0x194) = edx; //mov
	cmp(ecx, (int32_t)1);
	if (jz())
		goto loc_45966F;
	cmp(to32i(dword_512214), (int32_t)1);
	if (jge())
		goto loc_45966F;
	esi = to32i(dword_5134C8); //mov
	push32(esi);
	push32(aShudcon_dat);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	ecx = (int32_t)(intptr_t)(esp+0x1A8); //lea
	ebx = (int32_t)(intptr_t)(esp+0x1A0); //lea
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0xC);
	edx = (int32_t)(intptr_t)(esp+0x198); //lea
	eax = esp; //mov
	esp -= 4; _sub_4877BC(); esp += 4; //call
	edi = to32i(esp+0x198); //mov
	test(edi, edi);
	if (jnz())
		goto loc_4597D2;
	xor_(esi, esi);
	to32i(esp+0x1A0) = esi; //mov
loc_45966F:
	eax = to32i(dword_51220C); //mov
	shl(eax, (int32_t)6);
	ecx = to32i(dword_512270+eax); //mov
	cmp(ecx, (int32_t)0xC);
	if (jge())
		goto loc_45987A;
	to32i(dword_51205C) = ecx; //mov
loc_45968C:
	esi = to32i(dword_512208); //mov
	cmp(esi, (int32_t)1);
	if (jnz())
		goto loc_459889;
	eax = esi; //mov
loc_45969D:
	edi = 0xFFFFFFFF; //mov
	ebp = to32i(dword_512238); //mov
	to32i(dword_511FD4) = eax; //mov
	to32i(dword_511FF4) = edi; //mov
	test(ebp, ebp);
	if (jnz())
		goto loc_459890;
	to32i(dword_512004) = 0x23CA5; //mov
loc_4596C5:
	cmp(to16i(esp+0x1A0), (int16_t)1);
	if (jnz())
		goto loc_45989F;
	ecx = to32i(esp+0x118); //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45989F;
	if (jl())
		goto loc_45989F;
	cmp(ecx, (int32_t)3);
	if (jg())
		goto loc_45989F;
	to32i(dword_511FF0) = ecx; //mov
loc_4596F8:
	ebp = to32i(dword_4D69C0); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_4598BB;
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_4598AE;
	to32i(dword_512054) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp-1); //lea
	to32i(dword_4D69C0) = eax; //mov
loc_459721:
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_45973C;
	xor_(eax, eax);
	ebp = 0xFFFFFFFF; //mov
	to32i(dword_512054) = eax; //mov
	to32i(dword_51205C) = ebp; //mov
loc_45973C:
	cmp(to16i(esp+0x1A0), (int16_t)1);
	if (jnz())
		goto loc_4598FA;
	eax = to32i(esp+0x138); //mov
	to32i(dword_512010) = eax; //mov
	eax = to32i(esp+0x13C); //mov
	to32i(dword_512014) = eax; //mov
loc_459763:
	cmp(to32i(dword_511FD4), (int32_t)0);
	if (jz())
		goto loc_459910;
	xor_(edi, edi);
	to32i(dword_511FE4) = edi; //mov
	to32i(dword_511FE0) = edi; //mov
loc_45977E:
	xor_(eax, eax);
	ebx = to32i(dword_540D94); //mov
	to32i(dword_512020) = eax; //mov
	to32i(dword_512018) = eax; //mov
	to32i(dword_51201C) = eax; //mov
	cmp(ebx, (int32_t)2);
	if (jge())
		goto loc_45979F;
	eax = to32i(dword_51223C); //mov
loc_45979F:
	to32i(dword_51204C) = eax; //mov
	xor_(edi, edi);
	eax = to32i(dword_512234); //mov
	to32i(dword_511FEC) = edi; //mov
	esp -= 4; _sub_459990(); esp += 4; //call
	eax = to32i(dword_51205C); //mov
	esp -= 4; _sub_47C3F0(); esp += 4; //call
	esp -= 4; _sub_47CD80(); esp += 4; //call
	add(esp, (int32_t)0x1A4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4597D2:
	ebp = to32i(esp+0x19C); //mov
	cmp(ebp, (int32_t)0x98);
	if (jz())
		goto loc_4597F6;
	eax = edi; //mov
	xor_(ecx, ecx);
	esp -= 4; _sub_487950(); esp += 4; //call
	to32i(esp+0x1A0) = ecx; //mov
	goto loc_45966F;
loc_4597F6:
	ebx = 1; //mov
	eax = (int32_t)(intptr_t)aCNfs2seGameC_5; //mov
	edx = 0x8C; //mov
	to32i(esp+0x1A0) = ebx; //mov
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = edx; //mov
	eax = (int32_t)(intptr_t)aHudcon; //mov
	edx = ebp; //mov
	xor_(ebx, ebx);
	ecx = 0x98; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	ebx = to32i(esp+0x19C); //mov
	ebp = eax; //mov
	edx = eax; //mov
	eax = to32i(esp+0x198); //mov
	edi = (int32_t)(intptr_t)(esp+0xFC); //lea
	esp -= 4; _sub_487958(); esp += 4; //call
	eax = to32i(esp+0x198); //mov
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
	if (jz())
		goto loc_45966F;
	eax = ebp; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_45966F;
loc_45987A:
	to32i(dword_51205C) = 0xFFFFFFFF; //mov
	goto loc_45968C;
loc_459889:
	xor_(eax, eax);
	goto loc_45969D;
loc_459890:
	to32i(dword_512004) = 0x39999; //mov
	goto loc_4596C5;
loc_45989F:
	to32i(dword_511FF0) = 1; //mov
	goto loc_4596F8;
loc_4598AE:
	xor_(esi, esi);
	to32i(dword_512054) = esi; //mov
	goto loc_459721;
loc_4598BB:
	cmp(to16i(esp+0x1A0), (int16_t)1);
	if (jnz())
		goto loc_4598D7;
	eax = to32i(esp+0x17C); //mov
	to32i(dword_512054) = eax; //mov
	goto loc_459721;
loc_4598D7:
	cmp(to32i(dword_512214), (int32_t)0);
	if (jnz())
		goto loc_4598EF;
	to32i(dword_512054) = 1; //mov
	goto loc_459721;
loc_4598EF:
	to32i(dword_512054) = ebp; //mov
	goto loc_459721;
loc_4598FA:
	edx = 1; //mov
	to32i(dword_512014) = edx; //mov
	to32i(dword_512010) = edx; //mov
	goto loc_459763;
loc_459910:
	cmp(to16i(esp+0x1A0), (int16_t)1);
	if (jnz())
		goto loc_45992C;
	eax = to32i(esp+0x108); //mov
	to32i(dword_511FE0) = eax; //mov
	goto loc_45977E;
loc_45992C:
	to32i(dword_511FE0) = 1; //mov
	goto loc_45977E;
}
Fn(void) Game::_sub_459970()
{
	push32(edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = to32i(dword_4D69DC); //mov
	edx = to16i(edx+eax); //movsx
	add(eax, edx);
	pop32(edx);
}
Fn(void) Game::_sub_459990()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	sub(esp, (int32_t)0xFC);
	edx = eax; //mov
	cmp(eax, (int32_t)6);
	if (jle())
		goto loc_4599A3;
	xor_(edx, eax);
loc_4599A3:
	ecx = to32i(dword_4D69DC); //mov
	test(ecx, ecx);
	if (jnz())
		goto loc_4599E7;
loc_4599AD:
	ebx = to32i(off_4D69C4+edx*4); //mov
	push32(ebx);
	esi = to32i(dword_51349C); //mov
	push32(esi);
	push32(aSS_3);
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	push32(eax);
	esp -= 4; _sprintf_(); esp += 4; //call
	add(esp, (int32_t)0x10);
	xor_(edx, edx);
	eax = esp; //mov
	esp -= 4; _sub_486F40(); esp += 4; //call
	to32i(dword_4D69DC) = eax; //mov
	add(esp, (int32_t)0xFC);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_4599E7:
	eax = ecx; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	goto loc_4599AD;
}
Fn(void) Game::_sub_4599F0()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	ebx = eax; //mov
	ecx = to32i(dword_4D6A60); //mov
	ebx = ~ebx;
	test(ecx, ecx);
	if (jz())
		goto loc_459A18;
	test(ebx, ebx);
	if (jl())
		goto loc_459A18;
	cmp(ebx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459A18;
	shl(ebx, (int32_t)5);
	eax = (int32_t)(intptr_t)(ecx+ebx); //lea
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459A1E;
loc_459A18:
	xor_(eax, eax);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_459A1E:
	push32(esi);
	esi = to32i(eax+0xA); //mov
	sar(esi, (int32_t)0x10);
	eax = to32i(dword_512160+esi*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	push32(0);
	push32(0);
	eax = to32i(dword_4D6A60); //mov
	push32(edx);
	ebp = to32i(ebx+eax); //mov
	push32(ebp);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	edx = to32i(dword_4D6A60); //mov
	to32i(edx+ebx+0x18) = eax; //mov
	eax = to32i(edx+ebx); //mov
	push32(eax);
	eax = SetEndOfFile_wrap(to32i(esp + 0)); esp += 4;
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	to16i(ebx+eax+0xE) = 0; //mov
	eax = to32i(dword_512160+esi*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edx; //mov
	pop32(esi);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_459A80()
{
	cmp(eax, to32i(dword_4D6A64));
	if (jnz())
		goto loc_459ABA;
	push32(ecx);
	ecx = to32i(dword_4D6A68); //mov
	to32i(dword_4D6A68) = edx; //mov
	test(edx, edx);
	if (jz())
		goto loc_459AA2;
	cmp(to32i(dword_5121F4), (int32_t)0);
	if (jnz())
		goto loc_459AA6;
loc_459AA2:
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_459AA6:
	edx = to32i(dword_5121F4); //mov
	eax = (int32_t)(intptr_t)dword_5121E0; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = ecx; //mov
	pop32(ecx);
	return;
loc_459ABA:
	xor_(eax, eax);
}
Fn(void) Game::_sub_459AC0()
{
	push32(edx);
	edx = to32i(dword_4D6A60); //mov
	eax = ~eax;
	test(edx, edx);
	if (jz())
		goto loc_459AF5;
	test(eax, eax);
	if (jl())
		goto loc_459AF5;
	cmp(eax, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459AF5;
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(edx, (int32_t)5);
	add(eax, edx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_459AF5;
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jz())
		goto loc_459AF5;
	eax = to32i(eax+0x14); //mov
	pop32(edx);
	return;
loc_459AF5:
	xor_(eax, eax);
	pop32(edx);
}
Fn(void) Game::_sub_459B00()
{
	push32(edx);
	edx = to32i(dword_4D6A60); //mov
	eax = ~eax;
	test(edx, edx);
	if (jz())
		goto loc_459B23;
	test(eax, eax);
	if (jl())
		goto loc_459B23;
	cmp(eax, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459B23;
	shl(eax, (int32_t)5);
	add(eax, edx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459B27;
loc_459B23:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_459B27:
	eax = to32i(eax+0xA); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = 1; //mov
	pop32(edx);
}
Fn(void) Game::_sub_459B40()
{
	push32(edx);
	edx = to32i(dword_4D6A60); //mov
	eax = ~eax;
	test(edx, edx);
	if (jz())
		goto loc_459B63;
	test(eax, eax);
	if (jl())
		goto loc_459B63;
	cmp(eax, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459B63;
	shl(eax, (int32_t)5);
	add(eax, edx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459B67;
loc_459B63:
	xor_(eax, eax);
	pop32(edx);
	return;
loc_459B67:
	eax = to32i(eax+0xA); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	pop32(edx);
}
Fn(void) Game::_sub_459B80()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebp = eax; //mov
	esi = eax; //mov
	edx = to32i(dword_4D6A60); //mov
	esi = ~esi;
	test(edx, edx);
	if (jz())
		goto loc_459BAE;
	test(esi, esi);
	if (jl())
		goto loc_459BAE;
	cmp(esi, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459BAE;
	edi = esi; //mov
	shl(edi, (int32_t)5);
	ebx = (int32_t)(intptr_t)(edx+edi); //lea
	cmp(to32i(ebx), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459BB6;
loc_459BAE:
	xor_(eax, eax);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_459BB6:
	push32(ecx);
	ebx = to32i(ebx+0xA); //mov
	sar(ebx, (int32_t)0x10);
	eax = to32i(dword_512160+ebx*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(eax, edi);
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jz())
		goto loc_459BF2;
	ecx = to32i(eax+0x14); //mov
	push32(ecx);
	eax = UnmapViewOfFile_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(dword_4D6A60); //mov
	edx = to32i(edi+eax+0x10); //mov
	push32(edx);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
loc_459BF2:
	cmp(ebp, to32i(dword_4D6A64));
	if (jnz())
		goto loc_459C76;
	xor_(edi, edi);
	to32i(dword_4D6A6C) = edi; //mov
	cmp(to32i(dword_5121F4), (int32_t)0);
	if (jz())
		goto loc_459C58;
	edx = to32i(dword_5121F4); //mov
	eax = (int32_t)(intptr_t)dword_5121E0; //mov
	esp -= 4; _sub_489E20(); esp += 4; //call
	eax = to32i(dword_512160+ebx*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(to32i(dword_5121F4), (int32_t)0);
	if (jz())
		goto loc_459C4C;
	edx = 1; //mov
loc_459C39:
	eax = edx; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	cmp(to32i(dword_5121F4), (int32_t)0);
	if (jnz())
		goto loc_459C39;
loc_459C4C:
	eax = to32i(dword_512160+ebx*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
loc_459C58:
	eax = to32i(dword_4D6A70); //mov
	xor_(edi, edi);
	esp -= 4; _sub_4848FC(); esp += 4; //call
	to32i(dword_4D6A74) = edi; //mov
	to32i(dword_4D6A70) = edi; //mov
	to32i(dword_4D6A64) = edi; //mov
loc_459C76:
	eax = to32i(dword_4D6A60); //mov
	shl(esi, (int32_t)5);
	edx = to32i(esi+eax); //mov
	push32(edx);
	eax = CloseHandle_wrap(to32i(esp + 0)); esp += 4;
	eax = to32i(dword_512160+ebx*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	to32i(esi+eax) = 0xFFFFFFFF; //mov
	eax = 1; //mov
	pop32(ecx);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_459CB0()
{
	push32(ebx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	ebx = eax; //mov
	edx = to32i(dword_4D6A60); //mov
	ebx = ~ebx;
	test(edx, edx);
	if (jz())
		goto loc_459CFC;
	test(ebx, ebx);
	if (jl())
		goto loc_459CFC;
	cmp(ebx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459CFC;
	esi = ebx; //mov
	shl(esi, (int32_t)5);
	eax = (int32_t)(intptr_t)(edx+esi); //lea
	edi = to32i(eax); //mov
	cmp(edi, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_459CFC;
	push32(ecx);
	ebp = to32i(eax+0x10); //mov
	test(ebp, ebp);
	if (jz())
		goto loc_459D00;
loc_459CE6:
	eax = ebx; //mov
	edx = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	eax = to32i(edx+eax+0x18); //mov
	pop32(ecx);
loc_459CF6:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ebx);
	return;
loc_459CFC:
	xor_(eax, eax);
	goto loc_459CF6;
loc_459D00:
	push32(1);
	push32(ebp);
	push32(ebp);
	push32(edi);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	to32i(esi+eax+0x18) = edx; //mov
	ecx = to32i(esi+eax+0x18); //mov
	to16i(esi+eax+0xE) = 0; //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459CE6;
	eax = to32i(dword_4D6A60); //mov
	to32i(esi+eax+0x18) = ebp; //mov
	goto loc_459CE6;
}
Fn(void) Game::_sub_459D60()
{
	push32(ebx);
	push32(ecx);
	push32(ebp);
	ebx = eax; //mov
	ecx = to32i(dword_4D6A60); //mov
	ebx = ~ebx;
	test(ecx, ecx);
	if (jz())
		goto loc_459D8E;
	test(ebx, ebx);
	if (jl())
		goto loc_459D8E;
	cmp(ebx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459D8E;
	ecx = ebx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	add(eax, ecx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459D94;
loc_459D8E:
	xor_(eax, eax);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_459D94:
	push32(edi);
	push32(esi);
	esi = to32i(eax+0xA); //mov
	sar(esi, (int32_t)0x10);
	eax = to32i(dword_512160+esi*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(ecx, eax);
	eax = to32i(ecx+8); //mov
	to32i(ecx+0x18) = edx; //mov
	test(eax, eax);
	if (jz())
		goto loc_459DCB;
	eax = edx; //mov
	ebp = to32i(ecx+8); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebp);
	edx = eax; //mov
	imul32(edx, ebp);
	to32i(ecx+0x18) = edx; //mov
loc_459DCB:
	edx = ebx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(edx, (int32_t)5);
	add(edx, eax);
	eax = to32i(edx+0x18); //mov
	ecx = to32i(edx+0x1C); //mov
	cmp(eax, ecx);
	if (jle())
		goto loc_459E30;
	to32i(edx+0x18) = ecx; //mov
loc_459DE4:
	eax = to32i(dword_4D6A60); //mov
	shl(ebx, (int32_t)5);
	add(eax, ebx);
	edx = to32i(eax+0x10); //mov
	test(edx, edx);
	if (jnz())
		goto loc_459E1C;
	push32(edx);
	push32(edx);
	ecx = to32i(eax+0x18); //mov
	push32(ecx);
	edi = to32i(eax); //mov
	push32(edi);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	to16i(ebx+eax+0xE) = 0; //mov
	edi = 1; //mov
	to32i(ebx+eax+0x18) = edx; //mov
loc_459E1C:
	eax = to32i(dword_512160+esi*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = edi; //mov
	pop32(esi);
	pop32(edi);
	pop32(ebp);
	pop32(ecx);
	pop32(ebx);
	return;
loc_459E30:
	test(eax, eax);
	if (jge())
		goto loc_459DE4;
	to32i(edx+0x18) = 0; //mov
	goto loc_459DE4;
}
Fn(void) Game::_sub_459E40()
{
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ecx = eax; //mov
	edi = edx; //mov
	esi = ebx; //mov
	ebx = to32i(dword_4D6A60); //mov
	edx = eax; //mov
	xor_(ebp, ebp);
	edx = ~edx;
	test(ebx, ebx);
	if (jz())
		goto loc_459E7D;
	test(edx, edx);
	if (jl())
		goto loc_459E7D;
	cmp(edx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_459E7D;
	eax = edx; //mov
	shl(eax, (int32_t)5);
	to32i(esp+4) = eax; //mov
	eax = ebx; //mov
	add(eax, to32i(esp+4));
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_459E87;
loc_459E7D:
	xor_(eax, eax);
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_459E87:
	eax = to32i(eax+0xA); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	eax = to32i(dword_512160+eax*4); //mov
	ebx = to32i(esp+4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(eax, ebx);
	ebx = to32i(eax+0x18); //mov
	cmp(ebx, to32i(eax+0x1C));
	if (jle())
		goto loc_459EB6;
	ebx = to32i(eax+0x1C); //mov
	to32i(eax+0x18) = ebx; //mov
loc_459EB6:
	eax = edx; //mov
	ebx = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	add(ebx, eax);
	eax = to32i(ebx+8); //mov
	cmp(eax, (int32_t)0x1000);
	if (jle())
		goto loc_459FCB;
	ebx = eax; //mov
loc_459ED3:
	cmp(ecx, to32i(dword_4D6A64));
	if (jnz())
		goto loc_459EFD;
	ecx = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	eax = 0x2AC; //mov
	push32(aWritewinfileCa);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_459EFD:
	ecx = edx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	add(eax, ecx);
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jnz())
		goto loc_459FD5;
	to32i(esp+0x10) = ecx; //mov
	to32i(esp+0xC) = ecx; //mov
loc_459F1B:
	test(esi, esi);
	if (jz())
		goto loc_45A00C;
	cmp(ebx, esi);
	if (jbe())
		goto loc_459F29;
	ebx = esi; //mov
loc_459F29:
	edx = to32i(esp+0x10); //mov
	eax = to32i(dword_4D6A60); //mov
	push32(0);
	add(eax, edx);
	push32(0);
	ecx = to32i(eax+0x18); //mov
	push32(ecx);
	edx = to32i(eax); //mov
	push32(edx);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	ecx = to32i(esp+0x10); //mov
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	add(eax, ecx);
	push32(0);
	to32i(eax+0x18) = edx; //mov
	edx = (int32_t)(intptr_t)(esp+4); //lea
	push32(edx);
	push32(ebx);
	push32(edi);
	edx = to32i(eax); //mov
	push32(edx);
	to16i(eax+0xE) = 0; //mov
	eax = WriteFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	test(eax, eax);
	if (jz())
		goto loc_45A05E;
	ecx = to32i(esp+0x10); //mov
	edx = to32i(dword_4D6A60); //mov
	add(edx, ecx);
	eax = to32i(esp); //mov
	add(to32i(edx+0x18), eax);
	eax = to32i(esp); //mov
	add(ebp, eax);
	add(edi, eax);
	cmp(ebx, eax);
	if (jbe())
		goto loc_45A026;
	xor_(esi, esi);
loc_459F9A:
	edx = to32i(esp+0xC); //mov
	eax = to32i(dword_4D6A60); //mov
	add(eax, edx);
	edx = to32i(eax+0x18); //mov
	cmp(edx, to32i(eax+0x1C));
	if (jle())
		goto loc_459FB0;
	to32i(eax+0x1C) = edx; //mov
loc_459FB0:
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_459F1B;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_459F1B;
loc_459FCB:
	ebx = 0x1000; //mov
	goto loc_459ED3;
loc_459FD5:
	ecx = to32i(eax+0x18); //mov
	ebx = to32i(eax+0x1C); //mov
	add(ecx, esi);
	cmp(ecx, ebx);
	if (jle())
		goto loc_459FE6;
	esi = ebx; //mov
	sub(esi, to32i(eax+0x18));
loc_459FE6:
	ecx = edx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	edx = to32i(ecx+eax+0x14); //mov
	ebx = to32i(ecx+eax+0x18); //mov
	eax = edi; //mov
	add(edx, ebx);
	ebx = esi; //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(to32i(ecx+eax+0x18), esi);
loc_45A00C:
	eax = to32i(esp+8); //mov
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	return;
loc_45A026:
	sub(esi, eax);
	goto loc_459F9A;
loc_45A05E:
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_459FB0;
}
Fn(void) Game::_sub_45A070()
{
	push32(ecx);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x18);
	ecx = eax; //mov
	to32i(esp+0x14) = edx; //mov
	edi = ebx; //mov
	xor_(edx, edx);
	to32i(esp+0x10) = edx; //mov
	edx = eax; //mov
	ebx = to32i(dword_4D6A60); //mov
	edx = ~edx;
	test(ebx, ebx);
	if (jz())
		goto loc_45A0AF;
	test(edx, edx);
	if (jl())
		goto loc_45A0AF;
	cmp(edx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_45A0AF;
	ebx = edx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ebx, (int32_t)5);
	add(eax, ebx);
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_45A0B8;
loc_45A0AF:
	xor_(eax, eax);
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_45A0B8:
	push32(esi);
	eax = to32i(eax+0xA); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+8) = eax; //mov
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(eax, ebx);
	ebx = to32i(eax+0x18); //mov
	esi = to32i(eax+0x1C); //mov
	cmp(ebx, esi);
	if (jle())
		goto loc_45A0E3;
	to32i(eax+0x18) = esi; //mov
loc_45A0E3:
	ebx = edx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ebx, (int32_t)5);
	add(eax, ebx);
	ebx = to32i(eax+0x18); //mov
	ebp = to32i(eax+0x1C); //mov
	add(ebx, edi);
	cmp(ebx, ebp);
	if (jle())
		goto loc_45A100;
	edi = ebp; //mov
	sub(edi, to32i(eax+0x18));
loc_45A100:
	eax = edx; //mov
	ebp = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	add(ebp, eax);
	esi = to32i(ebp+8); //mov
	cmp(esi, (int32_t)0x1000);
	if (jle())
		goto loc_45A164;
	ebp = esi; //mov
loc_45A11A:
	esi = edx; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(esi, (int32_t)5);
	add(eax, esi);
	cmp(to32i(eax+0x10), (int32_t)0);
	if (jz())
		goto loc_45A16B;
	edx = to32i(eax+0x14); //mov
	eax = to32i(eax+0x18); //mov
	ebx = edi; //mov
	add(eax, edx);
	edx = to32i(esp+0x18); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
	eax = to32i(dword_4D6A60); //mov
	add(to32i(esi+eax+0x18), edi);
loc_45A148:
	eax = to32i(esp+8); //mov
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(esp+0x14); //mov
	pop32(esi);
	add(esp, (int32_t)0x18);
	pop32(ebp);
	pop32(edi);
	pop32(ecx);
	return;
loc_45A164:
	ebp = 0x1000; //mov
	goto loc_45A11A;
loc_45A16B:
	cmp(ecx, to32i(dword_4D6A64));
	if (jnz())
		goto loc_45A2C3;
	eax = 1; //mov
loc_45A17C:
	to32i(esp+0xC) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45A2CA;
loc_45A188:
	esi = edx; //mov
	shl(esi, (int32_t)5);
loc_45A18D:
	test(edi, edi);
	if (jz())
		goto loc_45A148;
	cmp(ebp, edi);
	if (jbe())
		goto loc_45A197;
	ebp = edi; //mov
loc_45A197:
	cmp(to32i(esp+0xC), (int32_t)0);
	if (jz())
		goto loc_45A385;
	ecx = to32i(dword_4D6A60); //mov
	edx = to32i(ecx+esi+0x18); //mov
	ebx = to32i(ecx+esi+8); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	ebx = eax; //mov
	eax = to32i(ecx+esi+8); //mov
	imul32(eax, ebx);
	cmp(eax, to32i(ecx+esi+0x18));
	if (jz())
		goto loc_45A1E8;
	ecx = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	eax = 0x243; //mov
	push32(aReadwinfileNon);
	to32i(dword_4DB1D8) = ecx; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_45A1E8:
	ecx = ebx; //mov
	eax = 1; //mov
	and_(ecx, (int32_t)0x1F);
	shl(eax, cl);
	to32i(esp+0x10) = eax; //mov
	eax = to32i(dword_4D6A74); //mov
	sar(ebx, (int32_t)5);
	edx = to32i(esp+0x10); //mov
	test(to32i(eax+ebx*4), edx);
	if (jz())
		goto loc_45A311;
	edx = to32i(dword_4D6A60); //mov
	add(edx, esi);
	eax = to32i(edx+0x18); //mov
	ebx = to32i(edx+0x1C); //mov
	add(eax, ebp);
	ecx = 1; //mov
	cmp(eax, ebx);
	if (jbe())
		goto loc_45A308;
	eax = ebx; //mov
	ebx = to32i(edx+0x18); //mov
	sub(eax, ebx);
	to32i(esp+4) = eax; //mov
	cmp(eax, to32i(edx+8));
	if (jbe())
		goto loc_45A240;
	xor_(eax, eax);
loc_45A23C:
	to32i(esp+4) = eax; //mov
loc_45A240:
	eax = to32i(dword_4D6A60); //mov
	edx = to32i(dword_4D6A70); //mov
	eax = to32i(esi+eax+0x18); //mov
	ebx = to32i(esp+4); //mov
	add(eax, edx);
	edx = to32i(esp+0x18); //mov
	esp -= 4; _sub_48A980(); esp += 4; //call
loc_45A25E:
	test(ecx, ecx);
	if (jz())
		goto loc_45A411;
	edx = to32i(dword_4D6A60); //mov
	add(edx, esi);
	eax = to32i(esp+4); //mov
	add(to32i(edx+0x18), eax);
	ebx = to32i(esp+0x14); //mov
	eax = to32i(esp+4); //mov
	ecx = to32i(esp+0x18); //mov
	add(ebx, eax);
	add(ecx, eax);
	to32i(esp+0x14) = ebx; //mov
	eax = to32i(edx+0x18); //mov
	ebx = to32i(edx+0x1C); //mov
	to32i(esp+0x18) = ecx; //mov
	cmp(eax, ebx);
	if (jle())
		goto loc_45A29A;
	to32i(edx+0x18) = ebx; //mov
loc_45A29A:
	eax = to32i(esp+4); //mov
	cmp(ebp, eax);
	if (jbe())
		goto loc_45A3D5;
	xor_(edi, edi);
loc_45A2A8:
	xor_(eax, eax);
	esp -= 4; _sub_489BE8(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45A18D;
	xor_(eax, eax);
	esp -= 4; _sub_483EB0(); esp += 4; //call
	goto loc_45A18D;
loc_45A2C3:
	xor_(eax, eax);
	goto loc_45A17C;
loc_45A2CA:
	cmp(to32i(dword_4D6A74), (int32_t)0);
	if (jz())
		goto loc_45A2E0;
	cmp(to32i(dword_4D6A70), (int32_t)0);
	if (jnz())
		goto loc_45A188;
loc_45A2E0:
	ebx = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	esi = 0x237; //mov
	push32(aReadwinfileMir);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = esi; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
	goto loc_45A188;
loc_45A308:
	to32i(esp+4) = ebp; //mov
	goto loc_45A240;
loc_45A311:
	eax = to32i(dword_4D6A60); //mov
	add(eax, esi);
	cmp(to16i(eax+0xE), (int16_t)0);
	if (jz())
		goto loc_45A33D;
	push32(0);
	push32(0);
	ecx = to32i(eax+0x18); //mov
	push32(ecx);
	edx = to32i(eax); //mov
	push32(edx);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	eax = to32i(dword_4D6A60); //mov
	to16i(esi+eax+0xE) = 0; //mov
loc_45A33D:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	eax = to32i(dword_4D6A60); //mov
	ecx = to32i(esi+eax+8); //mov
	edx = to32i(dword_4D6A70); //mov
	push32(ecx);
	add(edx, to32i(esi+eax+0x18));
	push32(edx);
	edx = to32i(esi+eax); //mov
	push32(edx);
	eax = ReadFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	ecx = eax; //mov
	test(eax, eax);
	if (jz())
		goto loc_45A23C;
	eax = to32i(dword_4D6A74); //mov
	edx = to32i(esp+0x10); //mov
	or_(to32i(eax+ebx*4), edx);
	dec(to32i(dword_4D6A6C));
	goto loc_45A240;
loc_45A385:
	eax = to32i(dword_4D6A60); //mov
	add(eax, esi);
	cmp(to16i(eax+0xE), (int16_t)0);
	if (jz())
		goto loc_45A3B1;
	push32(0);
	push32(0);
	edx = to32i(eax+0x18); //mov
	push32(edx);
	ecx = to32i(eax); //mov
	push32(ecx);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	eax = to32i(dword_4D6A60); //mov
	to16i(esi+eax+0xE) = 0; //mov
loc_45A3B1:
	push32(0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	push32(ebp);
	ebx = to32i(esp+0x24); //mov
	eax = to32i(dword_4D6A60); //mov
	push32(ebx);
	edx = to32i(esi+eax); //mov
	push32(edx);
	eax = ReadFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	ecx = eax; //mov
	goto loc_45A25E;
loc_45A3D5:
	sub(edi, eax);
	goto loc_45A2A8;
loc_45A411:
	eax = 1; //mov
	esp -= 4; _sub_489B9C(); esp += 4; //call
	goto loc_45A2A8;
}
Fn(void) Game::_sub_45A420()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	esi = edx; //mov
	ebp = 1; //mov
	edx = eax; //mov
	edi = to32i(dword_4D6A60); //mov
	edx = ~edx;
	test(edi, edi);
	if (jz())
		goto loc_45A45B;
	test(edx, edx);
	if (jl())
		goto loc_45A45B;
	cmp(edx, to32i(dword_4D6A5C));
	if (jge())
		goto loc_45A45B;
	eax = edx; //mov
	shl(eax, (int32_t)5);
	to32i(esp+0x14) = eax; //mov
	eax = edi; //mov
	add(eax, to32i(esp+0x14));
	cmp(to32i(eax), (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_45A466;
loc_45A45B:
	xor_(eax, eax);
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
loc_45A466:
	eax = to32i(eax+0xA); //mov
	sar(eax, (int32_t)0x10);
	to32i(esp+0x18) = eax; //mov
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(esi, esi);
	if (jz())
		goto loc_45A490;
	edi = to32i(esp+0x14); //mov
	eax = to32i(dword_4D6A60); //mov
	add(eax, edi);
	eax = to32i(eax+4); //mov
	to32i(esi) = eax; //mov
loc_45A490:
	test(ebx, ebx);
	if (jz())
		goto loc_45A4A5;
	eax = edx; //mov
	esi = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	eax = to32i(esi+eax+8); //mov
	to32i(ebx) = eax; //mov
loc_45A4A5:
	test(ecx, ecx);
	if (jz())
		goto loc_45A4B7;
	eax = to32i(dword_4D6A60); //mov
	shl(edx, (int32_t)5);
	eax = to32i(edx+eax+0x1C); //mov
	to32i(ecx) = eax; //mov
loc_45A4B7:
	cmp(to32i(esp+0x2C), (int32_t)0);
	if (jz())
		goto loc_45A51E;
	esi = (int32_t)(intptr_t)asc_4CC934; //mov
	edi = (int32_t)(intptr_t)(esp+0x10); //lea
	push32(edi);
loc_45A4C8:
	al = to8i(esi); //mov
	to8i(edi) = al; //mov
	cmp(al, (int8_t)0);
	if (jz())
		goto loc_45A4E0;
	al = to8i(esi+1); //mov
	add(esi, (int32_t)2);
	to8i(edi+1) = al; //mov
	add(edi, (int32_t)2);
	cmp(al, (int8_t)0);
	if (jnz())
		goto loc_45A4C8;
loc_45A4E0:
	pop32(edi);
	al = to8i(esp+0x18); //mov
	add(al, (int8_t)0x41);
	to8i(esp+0x10) = al; //mov
loc_45A51E:
	eax = to32i(esp+0x18); //mov
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = ebp; //mov
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_45A560()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x134);
	ebp = eax; //mov
	to32i(esp+0x130) = edx; //mov
	to32i(esp+0x11C) = ebx; //mov
	to32i(esp+0x118) = ecx; //mov
	ebx = 0x80; //mov
	xor_(edx, edx);
	esi = to32i(dword_4D6A60); //mov
	to32i(esp+0x128) = edx; //mov
	to32i(esp+0x12C) = edx; //mov
	to32i(esp+0x114) = edx; //mov
	to32i(ecx) = edx; //mov
	test(esi, esi);
	if (jnz())
		goto loc_45A5AF;
	xor_(eax, eax);
	esp -= 4; _sub_45AC50(); esp += 4; //call
loc_45A5AF:
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
	cmp(ecx, (int32_t)0x104);
	if (ja())
		goto loc_45A8F7;
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	edi = to32i(dword_4D6A5C); //mov
	xor_(esi, esi);
	test(edi, edi);
	if (jle())
		goto loc_45A5F8;
	edx = to32i(dword_4D6A60); //mov
	ecx = edi; //mov
	xor_(eax, eax);
	shl(ecx, (int32_t)5);
loc_45A5EA:
	cmp(to32i(edx+eax), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_45A5F8;
	add(eax, (int32_t)0x20);
	inc(esi);
	cmp(eax, ecx);
	if (jl())
		goto loc_45A5EA;
loc_45A5F8:
	cmp(esi, to32i(dword_4D6A5C));
	if (jge())
		goto loc_45A612;
	eax = esi; //mov
	edx = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	to32i(edx+eax) = 0; //mov
loc_45A612:
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(esi, to32i(dword_4D6A5C));
	if (jz())
		goto loc_45A8E6;
	test(to8i(esp+0x130), (int8_t)1);
	if (jz())
		goto loc_45A903;
loc_45A636:
	or_(to8i(esp+0x12B), (int8_t)0x80);
loc_45A63E:
	test(to8i(esp+0x130), (int8_t)2);
	if (jz())
		goto loc_45A650;
	or_(to8i(esp+0x12B), (int8_t)0x40);
loc_45A650:
	test(to8i(esp+0x130), (int8_t)4);
	if (jz())
		goto loc_45A662;
	or_(to8i(esp+0x12C), (int8_t)1);
loc_45A662:
	test(to8i(esp+0x130), (int8_t)8);
	if (jz())
		goto loc_45A674;
	or_(to8i(esp+0x12C), (int8_t)2);
loc_45A674:
	cl = to8i(esp+0x130); //mov
	test(cl, (int8_t)1);
	if (jz())
		goto loc_45A916;
	to32i(esp+0x124) = 3; //mov
loc_45A68F:
	test(to8i(esp+0x131), (int8_t)2);
	if (jz())
		goto loc_45A69F;
	or_(ebx, (int32_t)0x8000000);
loc_45A69F:
	test(to8i(esp+0x131), (int8_t)0x10);
	if (jz())
		goto loc_45A6B8;
	cmp(to32i(dword_4D6A64), (int32_t)0);
	if (jnz())
		goto loc_45A6B8;
	or_(ebx, (int32_t)0x20000000);
loc_45A6B8:
	cl = to8i(esp+0x130); //mov
	test(cl, (int8_t)1);
	if (jnz())
		goto loc_45A6D9;
	test(cl, (int8_t)2);
	if (jz())
		goto loc_45A6D9;
	test(to8i(esp+0x131), (int8_t)4);
	if (jz())
		goto loc_45A6D9;
	or_(ebx, (int32_t)0x80000000);
loc_45A6D9:
	ecx = esi; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	edx = to32i(esp+0x130); //mov
	to32i(ecx+eax+4) = edx; //mov
	eax = 0x41; //mov
	edx = to32i(dword_4D6A60); //mov
	add(ecx, edx);
	edi = (int32_t)(intptr_t)(eax-0x41); //lea
	to16i(ecx+0xC) = di; //mov
	edx = (int32_t)(intptr_t)(edi*4+0); //lea
	cmp(to32i(dword_512160+edx), (int32_t)0);
	if (jnz())
		goto loc_45A721;
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_512160+edx) = eax; //mov
loc_45A721:
	eax = to32i(dword_512160+edi*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	to32i(esp+0x108) = 0x800; //mov
	push32(0);
	push32(ebx);
	edx = to32i(esp+0x12C); //mov
	push32(edx);
	push32(0);
	ecx = to32i(esp+0x13C); //mov
	push32(ecx);
	ebx = to32i(esp+0x13C); //mov
	push32(ebx);
	push32(ebp);
	eax = CreateFileA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20), to32i(esp + 24)); esp += 28;
	ecx = esi; //mov
	edx = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	add(ecx, edx);
	to32i(ecx) = eax; //mov
	cmp(eax, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_45A8DA;
	test(to8i(esp+0x131), (int8_t)1);
	if (jz())
		goto loc_45A95F;
	eax = to32i(esp+0x11C); //mov
loc_45A7BA:
	to32i(ecx+8) = eax; //mov
loc_45A7BD:
	ebx = esi; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(ebx, (int32_t)5);
	to32i(ebx+eax+0x10) = 0; //mov
	to32i(ebx+eax+0x14) = 0; //mov
	push32(0);
	ecx = to32i(ebx+eax); //mov
	to32i(ebx+eax+0x18) = 0; //mov
	push32(ecx);
	to16i(ebx+eax+0xE) = 0; //mov
	eax = GetFileSize_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	edx = to32i(dword_4D6A60); //mov
	to32i(edx+ebx+0x1C) = eax; //mov
	dl = to8i(esp+0x131); //mov
	test(dl, (int8_t)8);
	if (jz())
		goto loc_45A9A9;
	ebp = 2; //mov
	ch = to8i(esp+0x131); //mov
	edx = 0x8000000; //mov
	test(ch, (int8_t)0x10);
	if (jz())
		goto loc_45A845;
	eax = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	ecx = 0x1AA; //mov
	push32(aOpenwinfileCan);
	to32i(dword_4DB1D8) = eax; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_45A845:
	al = to8i(esp+0x130); //mov
	test(al, (int8_t)1);
	if (jz())
		goto loc_45A999;
	test(al, (int8_t)2);
	if (jz())
		goto loc_45A98C;
	or_(dl, (int8_t)4);
loc_45A85F:
	push32(0);
	push32(0);
	push32(0);
	eax = to32i(dword_4D6A60); //mov
	ebx = esi; //mov
	push32(edx);
	shl(ebx, (int32_t)5);
	push32(0);
	edx = to32i(ebx+eax); //mov
	push32(edx);
	eax = CreateFileMappingA_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16), to32i(esp + 20)); esp += 24;
	edx = eax; //mov
	eax = to32i(dword_4D6A60); //mov
	add(eax, ebx);
	ecx = edx; //mov
	to32i(eax+0x10) = edx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45A8AA;
	edx = to32i(eax+0x1C); //mov
	push32(edx);
	push32(0);
	push32(0);
	push32(ebp);
	push32(ecx);
	eax = MapViewOfFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	edx = to32i(dword_4D6A60); //mov
	to32i(edx+ebx+0x14) = eax; //mov
loc_45A8AA:
	eax = esi; //mov
	edx = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	add(eax, edx);
	cmp(to32i(eax+0x14), (int32_t)0);
	if (jnz())
		goto loc_45A8C1;
	and_(to8i(eax+5), (int8_t)0xE7);
loc_45A8C1:
	eax = to32i(esp+0x118); //mov
	ebp = 1; //mov
	to32i(eax) = esi; //mov
	esi = ~esi;
	to32i(esp+0x114) = ebp; //mov
	to32i(eax) = esi; //mov
loc_45A8DA:
	eax = to32i(dword_512160+edi*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
loc_45A8E6:
	eax = to32i(esp+0x114); //mov
	add(esp, (int32_t)0x134);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_45A8F7:
	xor_(eax, eax);
	add(esp, (int32_t)0x134);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	return;
loc_45A903:
	test(to8i(esp+0x131), (int8_t)8);
	if (jnz())
		goto loc_45A636;
	goto loc_45A63E;
loc_45A916:
	test(cl, (int8_t)0x10);
	if (jz())
		goto loc_45A938;
	test(cl, (int8_t)0x20);
	if (jz())
		goto loc_45A931;
	eax = 2; //mov
loc_45A925:
	to32i(esp+0x124) = eax; //mov
	goto loc_45A68F;
loc_45A931:
	eax = 1; //mov
	goto loc_45A925;
loc_45A938:
	test(cl, (int8_t)0x20);
	if (jz())
		goto loc_45A94E;
	eax = 5; //mov
	to32i(esp+0x124) = eax; //mov
	goto loc_45A68F;
loc_45A94E:
	eax = 3; //mov
	to32i(esp+0x124) = eax; //mov
	goto loc_45A68F;
loc_45A95F:
	eax = to32i(esp+0x11C); //mov
	edx = to32i(esp+0x108); //mov
	cmp(eax, edx);
	if (jbe())
		goto loc_45A984;
	add(eax, edx);
	ebx = edx; //mov
	dec(eax);
	ebp = ebx; //mov
	xor_(edx, edx);
	div32(ebp);
	imul32(eax, ebx);
	goto loc_45A7BA;
loc_45A984:
	to32i(ecx+8) = edx; //mov
	goto loc_45A7BD;
loc_45A98C:
	ebp = 4; //mov
	or_(dl, (int8_t)2);
	goto loc_45A85F;
loc_45A999:
	test(al, (int8_t)2);
	if (jz())
		goto loc_45A85F;
	or_(dl, (int8_t)8);
	goto loc_45A85F;
loc_45A9A9:
	test(dl, (int8_t)0x10);
	if (jz())
		goto loc_45AB50;
	cmp(to32i(dword_4D6A64), (int32_t)0);
	if (jnz())
		goto loc_45AB50;
	test(to8i(esp+0x130), (int8_t)2);
	if (jz())
		goto loc_45A9EB;
	ebp = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	eax = 0x1C4; //mov
	push32(aOpenwinfileC_0);
	to32i(dword_4DB1D8) = ebp; //mov
	to32i(dword_4DB1DC) = eax; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_45A9EB:
	edx = esi; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(edx, (int32_t)5);
	cmp(to32i(edx+eax+8), (int32_t)0);
	if (jnz())
		goto loc_45AA1F;
	ebx = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	ebp = 0x1C7; //mov
	push32(aOpenwinfileMus);
	to32i(dword_4DB1D8) = ebx; //mov
	to32i(dword_4DB1DC) = ebp; //mov
	esp -= 4; _sub_4840F0(); esp += 4; //call
	add(esp, (int32_t)4);
loc_45AA1F:
	eax = esi; //mov
	ecx = to32i(dword_4D6A60); //mov
	shl(eax, (int32_t)5);
	add(ecx, eax);
	to32i(esp+0x120) = eax; //mov
	eax = to32i(ecx+0x1C); //mov
	add(eax, to32i(ecx+8));
	edx = (int32_t)(intptr_t)(eax-1); //lea
	ebx = to32i(ecx+8); //mov
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ebx);
	to32i(dword_4D6A6C) = eax; //mov
	ebp = to32i(dword_4D6A6C); //mov
	add(ebp, (int32_t)0x7FFF);
	sar(ebp, (int32_t)0xF);
	shl(ebp, (int32_t)0xC);
	edx = to32i(dword_4D6A6C); //mov
	add(edx, (int32_t)0x1F);
	imul32(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)5);
	sbb(eax, edx);
	sar(eax, (int32_t)5);
	ebx = 0x300; //mov
	edx = 0x1CD; //mov
	shl(eax, (int32_t)5);
	to32i(dword_4DB1DC) = edx; //mov
	add(ebp, eax);
	eax = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	edx = ebp; //mov
	to32i(dword_4DB1D8) = eax; //mov
	eax = (int32_t)(intptr_t)aMirror; //mov
	ecx = to32i(esp+0x120); //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	edx = to32i(dword_4D6A60); //mov
	add(edx, ecx);
	to32i(dword_4D6A70) = eax; //mov
	edx = to32i(edx+8); //mov
	imul32(edx, to32i(dword_4D6A6C));
	ecx = (int32_t)(intptr_t)(eax+edx); //lea
	xor_(ebp, ebp);
	to32i(dword_4D6A74) = ecx; //mov
	to32i(dword_4D6A68) = ebp; //mov
	test(eax, eax);
	if (jz())
		goto loc_45AB23;
	eax = to32i(dword_4D6A6C); //mov
	edx = to32i(dword_4D6A6C); //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)3);
	sbb(eax, edx);
	sar(eax, (int32_t)3);
	ebx = esi; //mov
	edx = eax; //mov
	eax = ecx; //mov
	ebx = ~ebx;
	esp -= 4; _sub_48A01C(); esp += 4; //call
	push32(dword_5121E0);
	ecx = 0xFFFFFFFF; //mov
	eax = (int32_t)(intptr_t)sub_45B0E0; //mov
	to32i(dword_4D6A64) = esi; //mov
	xor_(edx, edx);
	to32i(dword_4D6A64) = ebx; //mov
	ebx = 1; //mov
	esp -= 4; _sub_489AE0(); esp += 4; //call
	goto loc_45A8C1;
loc_45AB23:
	esp -= 4; _sub_4848FC(); esp += 4; //call
	ecx = to32i(esp+0x120); //mov
	eax = to32i(dword_4D6A60); //mov
	add(eax, ecx);
	cl = to8i(eax+5); //mov
	to32i(dword_4D6A74) = ebp; //mov
	and_(cl, (int8_t)0xEF);
	to32i(dword_4D6A70) = ebp; //mov
	to8i(eax+5) = cl; //mov
	goto loc_45A8C1;
loc_45AB50:
	edx = esi; //mov
	eax = to32i(dword_4D6A60); //mov
	shl(edx, (int32_t)5);
	and_(to8i(edx+eax+5), (int8_t)0xE7);
	goto loc_45A8C1;
}
Fn(void) Game::_sub_45ABA0()
{
	push32(ecx);
	push32(edx);
	push32(ebp);
	cmp(to32i(dword_4D6A60), (int32_t)0);
	if (jnz())
		goto loc_45ABB0;
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
	return;
loc_45ABB0:
	push32(esi);
	push32(ebx);
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	ecx = to32i(dword_4D6A5C); //mov
	xor_(edx, edx);
	test(ecx, ecx);
	if (jle())
		goto loc_45ABEC;
	xor_(ecx, ecx);
loc_45ABCA:
	eax = to32i(dword_4D6A60); //mov
	cmp(to32i(ecx+eax), (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_45ABDE;
	eax = edx; //mov
	eax = ~eax;
	esp -= 4; _sub_459B80(); esp += 4; //call
loc_45ABDE:
	ebx = to32i(dword_4D6A5C); //mov
	inc(edx);
	add(ecx, (int32_t)0x20);
	cmp(edx, ebx);
	if (jl())
		goto loc_45ABCA;
loc_45ABEC:
	eax = to32i(dword_4D6A60); //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	xor_(esi, esi);
	xor_(edx, edx);
	to32i(dword_4D6A60) = esi; //mov
	xor_(ecx, ecx);
	pop32(ebx);
	pop32(esi);
loc_45AC04:
	ebp = to32i(dword_512160+edx); //mov
	cmp(ecx, ebp);
	if (jz())
		goto loc_45AC1B;
	eax = ebp; //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	to32i(dword_512160+edx) = ecx; //mov
loc_45AC1B:
	add(edx, (int32_t)4);
	cmp(edx, (int32_t)0x80);
	if (jnz())
		goto loc_45AC04;
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F74(); esp += 4; //call
	xor_(eax, eax);
	to32i(dword_4D6A58) = eax; //mov
	pop32(ebp);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_45AC50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	ecx = eax; //mov
	cmp(to32i(dword_4D6A58), (int32_t)0);
	if (jz())
		goto loc_45ACCC;
loc_45AC60:
	cmp(to32i(dword_4D6A60), (int32_t)0);
	if (jz())
		goto loc_45AC6E;
	esp -= 4; _sub_45ABA0(); esp += 4; //call
loc_45AC6E:
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	test(ecx, ecx);
	if (jnz())
		goto loc_45AC81;
	ecx = 0x40; //mov
loc_45AC81:
	esi = (int32_t)(intptr_t)aCNfs2seGameC_0; //mov
	edi = 0x12B; //mov
	to32i(dword_4DB1D8) = esi; //mov
	esi = ecx; //mov
	ebx = 0x300; //mov
	shl(esi, (int32_t)5);
	eax = (int32_t)(intptr_t)aFilehandles; //mov
	edx = esi; //mov
	to32i(dword_4DB1DC) = edi; //mov
#if defined(__powerpc64__) || defined(__PPC64__)
	/* PPC64: _sub_484498 (internal heap allocator) returns 0 because
	   the BSS allocator structures (dword_563D80/563D84) are never
	   initialized (the x86 startup code that sets them up doesn't
	   work on PPC64).  Use calloc_wrap instead — it uses malloc32
	   which allocates from the pool via MAP_FIXED and works on all
	   platforms. */
	eax = calloc_wrap(1, esi);
	to32i(dword_4D6A60) = eax; //mov
	to32i(dword_4D6A5C) = ecx; //mov — ecx still = 0x40
#else
	esp -= 4; _sub_484498(); esp += 4; //call
	to32i(dword_4D6A60) = eax; //mov
	to32i(dword_4D6A5C) = ecx; //mov
#endif
	test(eax, eax);
	if (jnz())
		goto loc_45ACD8;
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45ACCC:
	esp -= 4; _sub_489EF8(); esp += 4; //call
	to32i(dword_4D6A58) = eax; //mov
	goto loc_45AC60;
loc_45ACD8:
	ebx = 0xFF; //mov
	edx = esi; //mov
	esp -= 4; _sub_48A026(); esp += 4; //call
	edx = 0x80; //mov
	eax = (int32_t)(intptr_t)dword_512160; //mov
	esp -= 4; _sub_48A01C(); esp += 4; //call
	eax = to32i(dword_4D6A58); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45AD10()
{
	push32(ecx);
	push32(edx);
	push32(eax);
	push32(0x100);
	eax = GetCurrentDirectoryA_wrap(to32i(esp + 0), to32i(esp + 4)); esp += 8;
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_45B0E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	esp -= 4; _sub_489E0C(); esp += 4; //call
	ecx = to32i(dword_4D6A64); //mov
	ecx = ~ecx;
	ebx = to32i(dword_4D6A60); //mov
	shl(ecx, (int32_t)5);
	to32i(esp+8) = eax; //mov
	add(ebx, ecx);
	to32i(dword_5121F4) = eax; //mov
	esi = to32i(ebx+0x18); //mov
loc_45B10D:
	eax = to32i(ebx+0xA); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F48(); esp += 4; //call
	cmp(esi, to32i(ebx+0x1C));
	if (jle())
		goto loc_45B126;
	xor_(esi, esi);
loc_45B126:
	eax = esi; //mov
	edx = esi; //mov
	ecx = to32i(ebx+8); //mov
	sar(edx, (int32_t)0x1F);
	idiv32(ecx);
	ebp = 1; //mov
	edi = eax; //mov
	ecx = eax; //mov
	sar(edi, (int32_t)5);
	and_(ecx, (int32_t)0x1F);
	eax = (int32_t)(intptr_t)(edi*4+0); //lea
	shl(ebp, cl);
	ecx = to32i(dword_4D6A74); //mov
	add(eax, ecx);
	edx = to32i(eax); //mov
	test(edx, edx);
	if (jnz())
		goto loc_45B237;
	push32(edx);
	push32(edx);
	push32(esi);
	ecx = to32i(ebx); //mov
	push32(ecx);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	cmp(eax, esi);
	if (jnz())
		goto loc_45B1D3;
	push32(0);
	eax = (int32_t)(intptr_t)(esp+4); //lea
	push32(eax);
	eax = to32i(ebx+8); //mov
	shl(eax, (int32_t)5);
	push32(eax);
	eax = to32i(dword_4D6A70); //mov
	add(eax, esi);
	push32(eax);
	ebp = to32i(ebx); //mov
	push32(ebp);
	to16i(ebx+0xE) = 1; //mov
	eax = ReadFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	test(eax, eax);
	if (jz())
		goto loc_45B1B1;
	eax = to32i(ebx+8); //mov
	edx = to32i(esp); //mov
	shl(eax, (int32_t)5);
	cmp(eax, edx);
	if (jnz())
		goto loc_45B223;
loc_45B1A8:
	eax = 1; //mov
loc_45B1AD:
	to32i(esp+0xC) = eax; //mov
loc_45B1B1:
	cmp(to32i(esp+0xC), (int32_t)0);
	if (jz())
		goto loc_45B1CB;
	eax = to32i(dword_4D6A74); //mov
	to32i(eax+edi*4) = 0xFFFFFFFF; //mov
	sub(to32i(dword_4D6A6C), (int32_t)0x20);
loc_45B1CB:
	eax = to32i(ebx+8); //mov
	shl(eax, (int32_t)5);
	add(esi, eax);
loc_45B1D3:
	eax = to32i(ebx+0xA); //mov
	sar(eax, (int32_t)0x10);
	eax = to32i(dword_512160+eax*4); //mov
	esp -= 4; _sub_489F60(); esp += 4; //call
	cmp(to32i(dword_4D6A68), (int32_t)0);
	if (jnz())
		goto loc_45B1FB;
	eax = to32i(dword_5121F4); //mov
	esp -= 4; _sub_489E5C(); esp += 4; //call
	esi = to32i(ebx+0x18); //mov
loc_45B1FB:
	cmp(to32i(dword_4D6A6C), (int32_t)0);
	if (jg())
		goto loc_45B10D;
	xor_(ebx, ebx);
	to32i(dword_5121F4) = ebx; //mov
	eax = to32i(esp+8); //mov
	esp -= 4; _CloseHandleCaller(); esp += 4; //call
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B223:
	ecx = to32i(ebx+0x1C); //mov
	add(eax, esi);
	cmp(eax, ecx);
	if (jg())
		goto loc_45B1A8;
	xor_(eax, eax);
	goto loc_45B1AD;
loc_45B237:
	test(ebp, edx);
	if (jz())
		goto loc_45B258;
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_45B250;
	esi = edi; //mov
	shl(esi, (int32_t)5);
	edx = to32i(ebx+8); //mov
	add(esi, (int32_t)0x20);
	imul32(esi, edx);
	goto loc_45B1D3;
loc_45B250:
	add(esi, to32i(ebx+8));
	goto loc_45B1D3;
loc_45B258:
	push32(0);
	push32(0);
	push32(esi);
	eax = to32i(ebx); //mov
	push32(eax);
	eax = SetFilePointer_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12)); esp += 16;
	cmp(eax, esi);
	if (jnz())
		goto loc_45B2D2;
	push32(0);
	eax = (int32_t)(intptr_t)(esp+8); //lea
	push32(eax);
	edx = to32i(ebx+8); //mov
	eax = to32i(dword_4D6A70); //mov
	push32(edx);
	add(eax, esi);
	push32(eax);
	ecx = to32i(ebx); //mov
	push32(ecx);
	to16i(ebx+0xE) = 1; //mov
	eax = ReadFile_wrap(to32i(esp + 0), to32i(esp + 4), to32i(esp + 8), to32i(esp + 12), to32i(esp + 16)); esp += 20;
	test(eax, eax);
	if (jz())
		goto loc_45B2A6;
	eax = to32i(esp+4); //mov
	edx = to32i(ebx+8); //mov
	cmp(eax, edx);
	if (jnz())
		goto loc_45B2C4;
loc_45B29D:
	eax = 1; //mov
loc_45B2A2:
	to32i(esp+0x10) = eax; //mov
loc_45B2A6:
	cmp(to32i(esp+0x10), (int32_t)0);
	if (jz())
		goto loc_45B2BC;
	ecx = to32i(dword_4D6A74); //mov
	or_(to32i(ecx+edi*4), ebp);
	dec(to32i(dword_4D6A6C));
loc_45B2BC:
	add(esi, to32i(ebx+8));
	goto loc_45B1D3;
loc_45B2C4:
	ecx = to32i(ebx+0x1C); //mov
	eax = (int32_t)(intptr_t)(edx+esi); //lea
	cmp(eax, ecx);
	if (jg())
		goto loc_45B29D;
	xor_(eax, eax);
	goto loc_45B2A2;
loc_45B2D2:
	to16i(ebx+0xE) = 1; //mov
	goto loc_45B1D3;
}
Fn(void) Game::_sub_45B2E0()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	edx = (int32_t)(intptr_t)(eax*4+0); //lea
	sub(edx, eax);
	test(al, (int8_t)1);
	if (jz())
		goto loc_45B357;
loc_45B2F0:
	ebx = eax; //mov
	test(dl, (int8_t)1);
	if (jz())
		goto loc_45B35A;
loc_45B2F7:
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	and_(edx, (int32_t)0xFFFF);
	imul32(edx, ebx);
	ecx = edx; //mov
	and_(ecx, (int32_t)0xFFFF);
	to32i(dword_4D6A7C) = edx; //mov
	to32i(dword_4D6A78) = ecx; //mov
	to32i(dword_4D6A80) = ebx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B357:
	inc(eax);
	goto loc_45B2F0;
loc_45B35A:
	inc(edx);
	goto loc_45B2F7;
}
Fn(void) Game::_sub_45B380()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esp -= 4; _sub_45BD00(); esp += 4; //call
	ecx = to32i(edi); //mov
	edx = edi; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45B3DD;
loc_45B395:
	ebp = to32i(edx); //mov
	cmp(ebp, (int32_t)0x7B);
	if (jl())
		goto loc_45B462;
	eax = (int32_t)(intptr_t)dword_4D6C58; //mov
	esi = to32i(dword_4D6C58); //mov
	xor_(ebx, ebx);
	test(esi, esi);
	if (jz())
		goto loc_45B3C4;
loc_45B3B1:
	esi = to32i(edx); //mov
	cmp(esi, to32i(eax));
	if (jnz())
		goto loc_45B3BA;
	ebx = to32i(eax+4); //mov
loc_45B3BA:
	ecx = to32i(eax+8); //mov
	add(eax, (int32_t)8);
	test(ecx, ecx);
	if (jnz())
		goto loc_45B3B1;
loc_45B3C4:
	test(ebx, ebx);
	if (jz())
		goto loc_45B3D5;
	eax = to32i(edx+4); //mov
	shl(eax, (int32_t)6);
	add(ebx, eax);
	eax = to32i(edx+8); //mov
	to32i(ebx) = eax; //mov
loc_45B3D5:
	add(edx, (int32_t)0xC);
loc_45B3D8:
	cmp(to32i(edx), (int32_t)0);
	if (jnz())
		goto loc_45B395;
loc_45B3DD:
	eax = edi; //mov
	esp -= 4; _sub_4848FC(); esp += 4; //call
	edi = to32i(dword_512260); //mov
	xor_(esi, esi);
	test(edi, edi);
	if (jle())
		goto loc_45B430;
	ecx = (int32_t)(intptr_t)dword_512270; //mov
	edi = (int32_t)(intptr_t)byte_512E84; //mov
	add(ecx, (int32_t)0x34);
loc_45B3FD:
	eax = esi; //mov
	shl(eax, (int32_t)6);
	ebx = to32i(dword_512274+eax); //mov
	cmp(ebx, (int32_t)1);
	if (jnz())
		goto loc_45B50F;
	ebx = 9; //mov
	edx = edi; //mov
	eax = ecx; //mov
loc_45B41A:
	esp -= 4; _strncpy_(); esp += 4; //call
	ebp = to32i(dword_512260); //mov
	add(ecx, (int32_t)0x40);
	inc(esi);
	add(edi, (int32_t)9);
	cmp(esi, ebp);
	if (jl())
		goto loc_45B3FD;
loc_45B430:
	esp -= 4; _sub_477C70(); esp += 4; //call
	cmp(to32i(dword_5121F8), (int32_t)0);
	if (jz())
		goto loc_45B448;
	to32i(dword_512200) = 1; //mov
loc_45B448:
	ah = to8i(byte_512DA9); //mov
	test(ah, ah);
	if (jz())
		goto loc_45B45B;
	cmp(ah, (int8_t)1);
	if (jnz())
		goto loc_45B548;
loc_45B45B:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B462:
	cmp(ebp, (int32_t)0x23);
	if (jl())
		goto loc_45B4A5;
	ecx = (int32_t)(intptr_t)dword_5128D0; //mov
	eax = (int32_t)(intptr_t)(ebp*4+0); //lea
	add(ecx, eax);
	eax = to32i(edx+4); //mov
	to32i(ecx-0x8C) = eax; //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	cmp(to32i(dword_4D98AC+eax), (int32_t)0);
	if (jz())
		goto loc_45B49D;
	ecx = eax; //mov
	eax = to32i(edx+4); //mov
	sar(eax, (int32_t)8);
	call(to32i(dword_4D98AC+ecx));
loc_45B49D:
	add(edx, (int32_t)8);
	goto loc_45B3D8;
loc_45B4A5:
	eax = (int32_t)(intptr_t)dword_4D6C58; //mov
	ecx = to32i(dword_4D6C58); //mov
	xor_(esi, esi);
	test(ecx, ecx);
	if (jz())
		goto loc_45B4C9;
loc_45B4B6:
	ebx = to32i(edx); //mov
	cmp(ebx, to32i(eax));
	if (jnz())
		goto loc_45B4BF;
	esi = to32i(eax+4); //mov
loc_45B4BF:
	ecx = to32i(eax+8); //mov
	add(eax, (int32_t)8);
	test(ecx, ecx);
	if (jnz())
		goto loc_45B4B6;
loc_45B4C9:
	test(esi, esi);
	if (jz())
		goto loc_45B4F3;
	cmp(to32i(edx), (int32_t)0x22);
	if (jl())
		goto loc_45B508;
	ebp = to32i(edx+4); //mov
	xor_(ebx, ebx);
	test(ebp, ebp);
	if (jle())
		goto loc_45B4F3;
	ecx = edx; //mov
	eax = esi; //mov
loc_45B4DF:
	add(eax, (int32_t)4);
	esi = to32i(ecx+8); //mov
	to32i(eax-4) = esi; //mov
	inc(ebx);
	esi = to32i(edx+4); //mov
	add(ecx, (int32_t)4);
	cmp(ebx, esi);
	if (jl())
		goto loc_45B4DF;
loc_45B4F3:
	cmp(to32i(edx), (int32_t)0x22);
	if (jl())
		goto loc_45B500;
	eax = to32i(edx+4); //mov
	shl(eax, (int32_t)2);
	add(edx, eax);
loc_45B500:
	add(edx, (int32_t)8);
	goto loc_45B3D8;
loc_45B508:
	eax = to32i(edx+4); //mov
	to32i(esi) = eax; //mov
	goto loc_45B4F3;
loc_45B50F:
	cmp(ebx, (int32_t)2);
	if (jnz())
		goto loc_45B52D;
	edx = to32i(dword_5122A0+eax); //mov
	ebx = 8; //mov
	eax = ecx; //mov
	edx = to32i(off_4D4A9C+edx*4); //mov
	goto loc_45B41A;
loc_45B52D:
	edx = to32i(dword_512270+eax); //mov
	ebx = 8; //mov
	shl(edx, (int32_t)3);
	eax = ecx; //mov
	add(edx, (int32_t)(intptr_t)aMcf1);
	goto loc_45B41A;
loc_45B548:
	esp -= 4; _sub_472B10(); esp += 4; //call
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45B580()
{
	push32(edx);
	push32(edi);
	sub(esp, (int32_t)8);
	edx = esi; //mov
	esi = esp; //mov
	edi = edx; //mov
	esp -= 4; _sub_42DAF0(); esp += 4; //call
	esi = esp; //mov
	movsd();
	movsd();
	eax = edx; //mov
	add(esp, (int32_t)8);
	pop32(edi);
	pop32(edx);
}
Fn(void) Game::_sub_45B5A0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	edi = eax; //mov
	esi = edx; //mov
	cmp(to32i(esp+0x14), (int32_t)0);
	if (jz())
		goto loc_45B612;
	edx = to32i(esp+0x10); //mov
	xor_(ebp, ebp);
	test(edx, edx);
	if (jle())
		goto loc_45B60C;
loc_45B5B8:
	eax = to32i(esi); //mov
	edx = to32i(ebx); //mov
	sub(edx, eax);
	eax = to32i(ecx); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(esi); //mov
	add(edx, eax);
	to32i(edi) = edx; //mov
	edx = to32i(ebx+4); //mov
	sub(edx, to32i(esi+4));
	eax = to32i(ecx); //mov
	imul32(edx, eax);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	add(esi, (int32_t)8);
	add(ecx, (int32_t)4);
	add(ebx, (int32_t)8);
	edx = to32i(esi-4); //mov
	add(edi, (int32_t)8);
	add(edx, eax);
	inc(ebp);
	to32i(edi-4) = edx; //mov
	edx = to32i(esp+0x10); //mov
	cmp(ebp, edx);
	if (jl())
		goto loc_45B5B8;
loc_45B60C:
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45B612:
	eax = to32i(esp+0x10); //mov
	ecx = to32i(ecx); //mov
	xor_(ebp, ebp);
	test(eax, eax);
	if (jle())
		goto loc_45B60C;
loc_45B61E:
	eax = to32i(esi); //mov
	edx = to32i(ebx); //mov
	sub(edx, eax);
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	edx = to32i(esi); //mov
	add(edx, eax);
	to32i(edi) = edx; //mov
	edx = to32i(ebx+4); //mov
	sub(edx, to32i(esi+4));
	imul32(edx, ecx);
	eax = edx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)0x10);
	sbb(eax, edx);
	sar(eax, (int32_t)0x10);
	add(esi, (int32_t)8);
	edx = to32i(esi-4); //mov
	add(ebx, (int32_t)8);
	add(edx, eax);
	inc(ebp);
	to32i(edi+4) = edx; //mov
	edx = to32i(esp+0x10); //mov
	add(edi, (int32_t)8);
	cmp(ebp, edx);
	if (jl())
		goto loc_45B61E;
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
}
Fn(void) Game::_sub_45B670()
{
	_sub_42E6C0(); return; //jmp
}
Fn(void) Game::_sub_45B680()
{
	_sub_42E6E0(); return; //jmp
}
Fn(void) Game::_sub_45B690()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x38);
	to32i(esp+0x28) = eax; //mov
	to32i(esp+0x34) = edx; //mov
	ebp = ebx; //mov
	to32i(esp+0x2C) = ecx; //mov
	xor_(edx, edx);
	to32i(esp+0x30) = edx; //mov
	test(eax, eax);
	if (jle())
		goto loc_45B82B;
loc_45B6B2:
	eax = to32i(esp+0x34); //mov
	cmp(to32i(eax+8), (int32_t)0);
	if (jnz())
		goto loc_45B6C3;
	to32i(eax+8) = 1; //mov
loc_45B6C3:
	eax = to32i(esp+0x34); //mov
	edx = (int32_t)(intptr_t)(esp+0x24); //lea
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	esi = esp; //mov
	fild(to32i(eax+8));
	eax = (int32_t)(intptr_t)(esp+0x20); //lea
	fstp(to32f(esp+0x20));
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
	ecx = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esp; //mov
	eax = to32i(esp+0x34); //mov
	add(ebp, (int32_t)8);
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
		goto loc_45B7D0;
	cmp(eax, ecx);
	if (jge())
		goto loc_45B7D0;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45B7A4;
	cmp(eax, ecx);
	if (jl())
		goto loc_45B7A4;
	cmp(eax, edx);
	if (jle())
		goto loc_45B7A8;
	or_(ebx, (int32_t)4);
	goto loc_45B7A8;
loc_45B7A4:
	or_(ebx, (int32_t)8);
loc_45B7A8:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45B7CB;
	cmp(eax, ecx);
	if (jl())
		goto loc_45B7CB;
	cmp(eax, edx);
	if (jle())
		goto loc_45B7D5;
	or_(ebx, (int32_t)2);
	goto loc_45B7D5;
loc_45B7CB:
	or_(ebx, (int32_t)1);
	goto loc_45B7D5;
loc_45B7D0:
	ebx = 0x10; //mov
loc_45B7D5:
	to8i(edi) = bl; //mov
	fld(to32f(esp));
	eax = to32i(esp+0x2C); //mov
	esp -= 4; ___CHP(); esp += 4; //call
	fistp(to32i(ebp-8));
	fld(to32f(esp+4));
	esp -= 4; ___CHP(); esp += 4; //call
	ebx = to32i(ebp-8); //mov
	fistp(to32i(ebp-4));
	eax = to32i(eax); //mov
	edi = to32i(esp+0x34); //mov
	add(ebx, eax);
	eax = to32i(esp+0x2C); //mov
	to32i(ebp-8) = ebx; //mov
	edx = to32i(esp+0x28); //mov
	esi = to32i(ebp-4); //mov
	eax = to32i(eax+4); //mov
	add(edi, (int32_t)0xC);
	add(esi, eax);
	eax = to32i(esp+0x30); //mov
	to32i(esp+0x34) = edi; //mov
	inc(eax);
	to32i(ebp-4) = esi; //mov
	to32i(esp+0x30) = eax; //mov
	cmp(eax, edx);
	if (jl())
		goto loc_45B6B2;
loc_45B82B:
	add(esp, (int32_t)0x38);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_45B840()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x1C);
	to32i(esp+0x18) = edx; //mov
	ebp = ebx; //mov
	edi = esp; //mov
	esi = (int32_t)(intptr_t)dword_45B560; //mov
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0xC); //lea
	esi = (int32_t)(intptr_t)dword_45B56C; //mov
	movsd();
	movsd();
	movsd();
	esi = (int32_t)(intptr_t)(eax+0x44); //lea
	ebx = esp; //mov
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	edx = esi; //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	ebx = to32i(esp+0x18); //mov
	edx = esp; //mov
	push32(ecx);
	eax = esi; //mov
	ecx = ebp; //mov
	esp -= 4; _sub_45B890(); esp += 4; //call
	add(esp, (int32_t)0x1C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
}
Fn(void) Game::_sub_45B890()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)8);
	to32i(esp) = eax; //mov
	edi = edx; //mov
	to32i(esp+4) = ebx; //mov
	esi = ecx; //mov
	ecx = to32i(esp+0x18); //mov
	xor_(ebp, ebp);
	test(ebx, ebx);
	if (jle())
		goto loc_45B8E0;
loc_45B8AB:
	edx = to32i(esp); //mov
	ebx = ecx; //mov
	eax = esi; //mov
	esp -= 4; _sub_49EAC8(); esp += 4; //call
	eax = to32i(edi); //mov
	add(to32i(ecx), eax);
	edx = to32i(ecx+4); //mov
	eax = to32i(edi+4); //mov
	add(ecx, (int32_t)0xC);
	add(edx, eax);
	to32i(ecx-8) = edx; //mov
	inc(ebp);
	ebx = to32i(ecx-4); //mov
	eax = to32i(edi+8); //mov
	add(esi, (int32_t)0xC);
	add(ebx, eax);
	eax = to32i(esp+4); //mov
	to32i(ecx-4) = ebx; //mov
	cmp(ebp, eax);
	if (jl())
		goto loc_45B8AB;
loc_45B8E0:
	add(esp, (int32_t)8);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_45B8F0()
{
	eax = to32i(dword_540F4C); //mov
	and_(eax, (int32_t)0x1F);
	eax = to32i(dword_512848+eax*4); //mov
	and_(eax, (int32_t)1);
}
Fn(void) Game::_sub_45B910()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	esi = to32i(dword_512A40); //mov
	ecx = to32i(dword_540F4C); //mov
	and_(ecx, (int32_t)0x1F);
	ebx = (int32_t)(intptr_t)(ecx*4+0); //lea
	cl = al; //mov
	eax = 1; //mov
	shl(eax, cl);
	test(to32i(dword_512848+ebx), eax);
	if (jz())
		goto loc_45B970;
	eax = to32i(dword_540F4C); //mov
	ecx = (int32_t)(intptr_t)(eax-1); //lea
	and_(eax, (int32_t)0x1F);
	and_(ecx, (int32_t)0x1F);
	eax = to32i(dword_512848+eax*4); //mov
	cmp(eax, to32i(dword_512848+ecx*4));
	if (jnz())
		goto loc_45B95F;
	eax = esi; //mov
	inc(esi);
	cmp(eax, edx);
	if (jle())
		goto loc_45B970;
loc_45B95F:
	eax = 1; //mov
	xor_(esi, esi);
	to32i(dword_512A40) = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B970:
	xor_(eax, eax);
	to32i(dword_512A40) = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45B980()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = edx; //mov
	edx = 1; //mov
	esi = to32i(dword_540F4C); //mov
	cl = al; //mov
	and_(esi, (int32_t)0x1F);
	shl(edx, cl);
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	test(ebx, ebx);
	if (jz())
		goto loc_45B9C9;
	ebx = to32i(dword_512848+eax); //mov
	eax = to32i(dword_540F4C); //mov
	dec(eax);
	and_(eax, (int32_t)0x1F);
	eax = to32i(dword_512848+eax*4); //mov
	and_(edx, ebx);
	eax = ~eax;
	test(edx, eax);
	if (jz())
		goto loc_45B9DA;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B9C9:
	test(to32i(dword_512848+eax), edx);
	if (jz())
		goto loc_45B9DA;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45B9DA:
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45B9E0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = edx; //mov
	edx = 1; //mov
	esi = to32i(dword_540F4C); //mov
	cl = al; //mov
	and_(esi, (int32_t)0x1F);
	shl(edx, cl);
	eax = (int32_t)(intptr_t)(esi*4+0); //lea
	test(ebx, ebx);
	if (jz())
		goto loc_45BA29;
	ebx = to32i(dword_5127C8+eax); //mov
	eax = to32i(dword_540F4C); //mov
	dec(eax);
	and_(eax, (int32_t)0x1F);
	eax = to32i(dword_5127C8+eax*4); //mov
	and_(edx, ebx);
	eax = ~eax;
	test(edx, eax);
	if (jz())
		goto loc_45BA3A;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45BA29:
	test(to32i(dword_5127C8+eax), edx);
	if (jz())
		goto loc_45BA3A;
	eax = 1; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45BA3A:
	xor_(eax, eax);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45BA40()
{
	ah = to8i(byte_512A3B); //mov
	test(ah, (int8_t)2);
	if (jz())
		goto loc_45BA59;
	test(al, al);
	if (jnz())
		goto loc_45BA52;
	al = 1; //mov
locret_45BA51:
	return;
loc_45BA52:
	cmp(al, (int8_t)1);
	if (jnz())
		goto locret_45BA51;
	al = 2; //mov
	return;
loc_45BA59:
	test(ah, (int8_t)1);
	if (jz())
		goto locret_45BA51;
	cmp(al, (int8_t)1);
	if (jnz())
		goto loc_45BA65;
	xor_(al, al);
	return;
loc_45BA65:
	if (jbe())
		goto locret_45BA51;
	al = 1; //mov
}
Fn(void) Game::_sub_45BA70()
{
	ah = to8i(byte_512A3B); //mov
	test(ah, (int8_t)2);
	if (jz())
		goto loc_45BA89;
	push32(ecx);
	xor_(ecx, ecx);
	dec(edx);
	cl = al; //mov
	cmp(ecx, edx);
	if (jge())
		goto loc_45BA87;
	inc(al);
loc_45BA87:
	pop32(ecx);
locret_45BA88:
	return;
loc_45BA89:
	test(ah, (int8_t)1);
	if (jz())
		goto locret_45BA88;
	test(al, al);
	if (jbe())
		goto locret_45BA88;
	dec(al);
}
Fn(void) Game::_sub_45BAA0()
{
	push32(ecx);
	push32(edx);
	ecx = eax; //mov
	edx = (int32_t)(intptr_t)(dword_512A35+3); //mov
	esp -= 4; _sub_473800(); esp += 4; //call
	xor_(edx, edx);
	al = to8i(byte_512A3B); //mov
	dl = (int32_t)(intptr_t)byte_5127C0[ecx]; //mov
	and_(al, (int8_t)0x43);
	edx = ~edx;
	byte_5127C0[ecx] = al; //mov
	and_(to8i(byte_512A3B), dl);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_45BAD0()
{
	push32(ebx);
	push32(edx);
	cmp(to32i(dword_512214), (int32_t)1);
	if (jle())
		goto loc_45BAF9;
	cmp(to32i(dword_540F28), (int32_t)0);
	if (jnz())
		goto loc_45BAED;
	cmp(to32i(dword_540F2C), (int32_t)0);
	if (jz())
		goto loc_45BAF0;
loc_45BAED:
	pop32(edx);
	pop32(ebx);
	return;
loc_45BAF0:
	inc(to32i(dword_4D9678));
	pop32(edx);
	pop32(ebx);
	return;
loc_45BAF9:
	cmp(to32i(dword_4D967C), (int32_t)0);
	if (jnz())
		goto loc_45BAED;
	ebx = to32i(dword_512208); //mov
	cmp(ebx, (int32_t)1);
	if (jz())
		goto loc_45BB23;
	test(ebx, ebx);
	if (jnz())
		goto loc_45BB42;
	edx = (int32_t)(intptr_t)dword_512A30; //mov
	eax = to32i(dword_51220C); //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_45BB23:
	edx = (int32_t)(intptr_t)dword_512A30; //mov
	xor_(eax, eax);
	esp -= 4; _sub_473A14(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45BAED;
	edx = (int32_t)(intptr_t)byte_512A34; //mov
	eax = ebx; //mov
	esp -= 4; _sub_473A14(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
	return;
loc_45BB42:
	eax = (int32_t)(intptr_t)dword_512A30; //mov
	esp -= 4; _sub_472A00(); esp += 4; //call
	pop32(edx);
	pop32(ebx);
}
Fn(void) Game::_sub_45BB50()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	esp -= 4; _sub_4779D0(); esp += 4; //call
	ecx = (int32_t)(intptr_t)dword_5128D0; //mov
	edi = (int32_t)(intptr_t)dword_512A30; //mov
	edx = (int32_t)(intptr_t)off_4D98A4; //mov
	xor_(ebp, ebp);
	to32i(esp) = edx; //mov
loc_45BB72:
	eax = to32i(ecx); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	edx = (int32_t)(intptr_t)off_4D98A4; //mov
	add(edx, eax);
	eax = to32i(ecx); //mov
	sar(eax, (int32_t)8);
	call(to32i(edx+4));
	edx = eax; //mov
	eax = to32i(ecx+4); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	ebx = (int32_t)(intptr_t)off_4D98A4; //mov
	add(ebx, eax);
	eax = to32i(ecx+4); //mov
	sar(eax, (int32_t)8);
	call(to32i(ebx+4));
	sub(eax, edx);
	edx = eax; //mov
	sar(edx, (int32_t)0x1F);
	sub(eax, edx);
	sar(eax, (int32_t)1);
	to8i(edi) = al; //mov
	edx = to32i(ecx+8); //mov
	and_(edx, (int32_t)0xFF);
	imul32(edx, 0xC);
	eax = to32i(ecx+8); //mov
	add(edx, (int32_t)(intptr_t)off_4D98A4);
	sar(eax, (int32_t)8);
	call(to32i(edx+4));
	to8i(edi+1) = al; //mov
	eax = to32i(ecx+0xC); //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	add(ecx, (int32_t)4);
	add(ecx, (int32_t)4);
	edx = (int32_t)(intptr_t)off_4D98A4; //mov
	add(ecx, (int32_t)4);
	add(edx, eax);
	eax = to32i(ecx); //mov
	add(ecx, (int32_t)4);
	sar(eax, (int32_t)8);
	xor_(ebx, ebx);
	call(to32i(edx+4));
	xor_(edx, edx);
	to8i(edi+2) = al; //mov
loc_45BC00:
	esi = to32i(ecx); //mov
	add(edx, edx);
	test(esi, esi);
	if (jnz())
		goto loc_45BCD0;
loc_45BC0C:
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, (int32_t)8);
	if (jl())
		goto loc_45BC00;
	add(edi, (int32_t)4);
	eax = to32i(dword_512208); //mov
	to8i(edi-1) = dl; //mov
	cmp(eax, (int32_t)1);
	if (jz())
		goto loc_45BC29;
	inc(ebp);
	add(ecx, (int32_t)0x30);
loc_45BC29:
	inc(ebp);
	cmp(ebp, (int32_t)2);
	if (jl())
		goto loc_45BB72;
	xor_(ebx, ebx);
	xor_(edi, edi);
loc_45BC37:
	esi = to32i(ecx); //mov
	shr(edx, (int32_t)1);
	cmp(edi, esi);
	if (jz())
		goto loc_45BC60;
	eax = esi; //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	esi = to32i(esp); //mov
	add(esi, eax);
	eax = to32i(ecx); //mov
	sar(eax, (int32_t)8);
	call(to32i(esi+4));
	test(eax, eax);
	if (jz())
		goto loc_45BC60;
	or_(edx, (int32_t)0x80000000);
loc_45BC60:
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, (int32_t)0x20);
	if (jl())
		goto loc_45BC37;
	eax = to32i(dword_512A3C); //mov
	inc(eax);
	and_(eax, (int32_t)0x1F);
	xor_(ebx, ebx);
	to32i(dword_512848+eax*4) = edx; //mov
	xor_(edi, edi);
loc_45BC7D:
	ebp = to32i(ecx); //mov
	shr(edx, (int32_t)1);
	cmp(edi, ebp);
	if (jz())
		goto loc_45BCA6;
	eax = ebp; //mov
	and_(eax, (int32_t)0xFF);
	imul32(eax, 0xC);
	esi = to32i(esp); //mov
	add(esi, eax);
	eax = ebp; //mov
	sar(eax, (int32_t)8);
	call(to32i(esi+4));
	test(eax, eax);
	if (jz())
		goto loc_45BCA6;
	or_(edx, (int32_t)0x80000000);
loc_45BCA6:
	inc(ebx);
	add(ecx, (int32_t)4);
	cmp(ebx, (int32_t)0x20);
	if (jl())
		goto loc_45BC7D;
	eax = to32i(dword_512A3C); //mov
	inc(eax);
	ecx = eax; //mov
	and_(ecx, (int32_t)0x1F);
	to32i(dword_512A3C) = eax; //mov
	to32i(dword_5127C8+ecx*4) = edx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45BCD0:
	and_(esi, (int32_t)0xFF);
	imul32(esi, 0xC);
	eax = to32i(ecx); //mov
	add(esi, (int32_t)(intptr_t)off_4D98A4);
	sar(eax, (int32_t)8);
	call(to32i(esi+4));
	test(eax, eax);
	if (jz())
		goto loc_45BC0C;
	or_(dl, (int8_t)1);
	goto loc_45BC0C;
}
Fn(void) Game::_sub_45BD00()
{
	push32(edx);
	esp -= 4; _sub_478060(); esp += 4; //call
	edx = (int32_t)(intptr_t)dword_5128D0; //mov
	xor_(eax, eax);
loc_45BD0D:
	inc(eax);
	to32i(edx) = 0; //mov
	add(edx, (int32_t)4);
	cmp(eax, (int32_t)0x58);
	if (jl())
		goto loc_45BD0D;
	xor_(eax, eax);
loc_45BD1E:
	inc(eax);
	xor_(dl, dl);
	byte_5127BF[eax] = dl; //mov
	cmp(eax, (int32_t)2);
	if (jl())
		goto loc_45BD1E;
	xor_(eax, eax);
	xor_(edx, edx);
loc_45BD30:
	add(eax, (int32_t)4);
	to32i(dword_5127C4+eax) = edx; //mov
	to32i(dword_512844+eax) = edx; //mov
	cmp(eax, (int32_t)0x80);
	if (jnz())
		goto loc_45BD30;
	eax = (int32_t)(intptr_t)dword_5128D0; //mov
	pop32(edx);
}
Fn(void) Game::_sub_45BD70()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
loc_45BD73:
	edx = to32i(dword_512A98); //mov
	dec(edx);
	cmp(edx, (int32_t)0xFFFFFFFF);
	if (jnz())
		goto loc_45BD89;
	to32i(dword_512A98) = edx; //mov
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45BD89:
	push32(1);
	push32(0x40000);
	ecx = to32i(dword_512A48+edx*8); //mov
	push32(ecx);
	ebx = to32i(dword_512A44+edx*8); //mov
	push32(ebx);
	to32i(dword_512A98) = edx; //mov
	esp -= 4; _sub_471280(); esp += 4; //call
	goto loc_45BD73;
}
Fn(void) Game::_sub_45BDB0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x5C);
	to32i(esp+0x58) = eax; //mov
	ebx = edx; //mov
	edx = 0x16440; //mov
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	esp -= 4; _sub_46FE70(); esp += 4; //call
	test(eax, eax);
	if (jz())
		goto loc_45BFC8;
	ecx = (int32_t)(intptr_t)sub_45D960; //mov
	esi = (int32_t)(intptr_t)sub_45D210; //mov
	edi = (int32_t)(intptr_t)sub_45C8F0; //mov
	ebp = (int32_t)(intptr_t)sub_45BFF0; //mov
	edx = (int32_t)(intptr_t)sub_45E050; //mov
	xor_(eax, eax);
	to32i(esp+4) = ecx; //mov
	to32i(dword_512A9C) = eax; //mov
	to32i(dword_512A94) = eax; //mov
	eax = to32i(esp+0x58); //mov
	to32i(esp+8) = esi; //mov
	shl(eax, (int32_t)2);
	to32i(esp+0xC) = ebp; //mov
	ebp = (int32_t)(intptr_t)(eax*8+0); //lea
	to32i(esp+0x10) = edi; //mov
	sub(ebp, eax);
	to32i(esp) = edx; //mov
	add(ebp, ebx);
loc_45BE1E:
	ecx = to32i(esp+0x58); //mov
	dec(ecx);
	sub(ebp, (int32_t)0x1C);
	to32i(esp+0x58) = ecx; //mov
	cmp(ecx, (int32_t)0xFFFFFFFF);
	if (jz())
		goto loc_45BF93;
	eax = to32i(ebp+0x10); //mov
	cl = to8i(dword_4DAB08); //mov
	eax = to32i(eax+8); //mov
	shl(eax, cl);
	esi = ebp; //mov
	cmp(eax, (int32_t)0x6E0000);
	if (jle())
		goto loc_45BF15;
	cmp(to32i(ebp+0), (int32_t)4);
	if (jle())
		goto loc_45BED2;
	ecx = to32i(dword_5222D8); //mov
	eax = (int32_t)(intptr_t)(ecx+0x24); //lea
	edi = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edi, edi);
	if (jnz())
		goto loc_45BEC9;
	to32i(dword_512A9C) = ecx; //mov
loc_45BE76:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ecx; //mov
	eax = to32i(dword_500CF4); //mov
loc_45BE90:
	to32i(ecx+4) = 8; //mov
	to32i(ecx+0x1C) = eax; //mov
	eax = to32i(esi+4); //mov
	to16i(ecx+8) = 1; //mov
	to16i(ecx+0xA) = 1; //mov
	to32i(ecx+0x20) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(ecx+0xC) = eax; //mov
	eax = to32i(esi+0x10); //mov
	to32i(ecx+0x10) = eax; //mov
	eax = to32i(esi+0x14); //mov
	to32i(ecx+0x14) = eax; //mov
	eax = to32i(esi+0x18); //mov
	to32i(ecx+0x18) = eax; //mov
	goto loc_45BE1E;
loc_45BEC9:
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ecx; //mov
	goto loc_45BE76;
loc_45BED2:
	ecx = to32i(dword_5222D8); //mov
	eax = (int32_t)(intptr_t)(ecx+0x24); //lea
	ebx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(ebx, ebx);
	if (jnz())
		goto loc_45BF0C;
	to32i(dword_512A9C) = ecx; //mov
loc_45BEF0:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ecx; //mov
	eax = to32i(dword_500CF0); //mov
	goto loc_45BE90;
loc_45BF0C:
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ecx; //mov
	goto loc_45BEF0;
loc_45BF15:
	edi = (int32_t)(intptr_t)(esp+0x34); //lea
	esi = to32i(ebp+0xC); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x14); //lea
	esi = to32i(ebp+0x10); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x24); //lea
	esi = to32i(ebp+0x14); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	edi = (int32_t)(intptr_t)(esp+0x44); //lea
	esi = to32i(ebp+0x18); //mov
	movsd();
	movsd();
	movsd();
	movsd();
	eax = to32i(ebp+0); //mov
	cmp(eax, (int32_t)4);
	if (jle())
		goto loc_45BF72;
	esi = (int32_t)(intptr_t)(eax*4+0); //lea
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	ecx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	ebx = (int32_t)(intptr_t)(esp+0x38); //lea
	push32(eax);
	edx = 1; //mov
	eax = ebp; //mov
	call(to32i(esp+esi-0xC));
	goto loc_45BE1E;
loc_45BF72:
	esi = eax; //mov
	eax = (int32_t)(intptr_t)(esp+0x44); //lea
	ecx = (int32_t)(intptr_t)(esp+0x14); //lea
	push32(eax);
	eax = (int32_t)(intptr_t)(esp+0x28); //lea
	ebx = (int32_t)(intptr_t)(esp+0x38); //lea
	push32(eax);
	xor_(edx, edx);
	eax = ebp; //mov
	call(to32i(esp+esi*4+8));
	goto loc_45BE1E;
loc_45BF93:
	esi = to32i(dword_512A98); //mov
	cmp(esi, (int32_t)0xA);
	if (jge())
		goto loc_45BFC8;
	ecx = to32i(dword_512A9C); //mov
	to32i(dword_512A44+esi*8) = ecx; //mov
	ecx = to32i(dword_512A94); //mov
	to32i(dword_512A48+esi*8) = ecx; //mov
	test(ecx, ecx);
	if (jz())
		goto loc_45BFC2;
	to32i(ecx) = 0; //mov
loc_45BFC2:
	inc(to32i(dword_512A98));
loc_45BFC8:
	add(esp, (int32_t)0x5C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45BFE0()
{
	push32(edx);
	xor_(edx, edx);
	to32i(dword_512A98) = edx; //mov
	pop32(edx);
}
Fn(void) Game::_sub_45BFF0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	to32i(esp+0x64) = eax; //mov
	edi = ebx; //mov
	esi = ecx; //mov
	eax = to32i(eax+8); //mov
	and_(eax, (int32_t)6);
	or_(eax, edx);
	ebp = to32i(dword_5222D8); //mov
	ecx = to32i(dword_4D6DC0+eax*4); //mov
	eax = (int32_t)(intptr_t)(ebp+0xF0); //lea
	to32i(dword_5222D8) = eax; //mov
	ebx = eax; //mov
	add(eax, (int32_t)0x24);
	edx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_45C8D0;
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
loc_45C03D:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax+4); //mov
	to16i(ebx+8) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = to32i(esp+0x64); //mov
	to16i(ebx+0xA) = 1; //mov
	eax = to32i(eax+0xC); //mov
	to32i(ebx+0xC) = eax; //mov
	to32i(ebx+0x10) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp+0x90); //lea
	to32i(ebx+0x14) = eax; //mov
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax+0x18); //mov
	to32i(ebx+0x18) = eax; //mov
	ebx = to32i(dword_5222D8); //mov
	eax = (int32_t)(intptr_t)(ebx+0x24); //lea
	to32i(dword_5222D8) = eax; //mov
	eax = to32i(dword_512A9C); //mov
	ecx = to32i(dword_4D6DC8+ecx*4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C8DB;
	to32i(dword_512A9C) = ebx; //mov
loc_45C0C1:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax+4); //mov
	to16i(ebx+8) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebx+0xC) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0xC0); //lea
	to32i(ebx+0x10) = eax; //mov
	eax = to32i(esp+0x64); //mov
	to16i(ebx+0xA) = 1; //mov
	eax = to32i(eax+0x14); //mov
	to32i(ebx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x60); //lea
	ecx = to32i(esp+0x7C); //mov
	to32i(ebx+0x18) = eax; //mov
	eax = to32i(esp+0x80); //mov
	ecx = to32i(ecx); //mov
	edx = to32i(eax); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax); //mov
	add(eax, ecx);
	to32i(ebp+0x90) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	to32i(ebp+0x60) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	ecx = to32i(eax+4); //mov
	eax = to32i(esp+0x80); //mov
	ebx = to32i(eax+4); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax+4); //mov
	add(eax, ecx);
	to32i(ebp+0x94) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x64) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	ecx = to32i(eax+8); //mov
	eax = to32i(esp+0x80); //mov
	edx = to32i(eax+8); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax+8); //mov
	add(eax, ecx);
	to32i(ebp+0x98) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	to32i(ebp+0x68) = eax; //mov
	ecx = to32i(esi); //mov
	ebx = to32i(edi); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(ebx+ecx); //lea
	to32i(ebp+0) = eax; //mov
	eax = to32i(esi); //mov
	edx = to32i(ebp+0x60); //mov
	sub(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0x30) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	edx = to32i(esi); //mov
	ecx = to32i(eax); //mov
	eax = (int32_t)(intptr_t)(edx+ecx); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC0) = eax; //mov
	ecx = to32i(esi+4); //mov
	ebx = to32i(edi+4); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(ebx+ecx); //lea
	to32i(ebp+4) = eax; //mov
	eax = to32i(esi+4); //mov
	edx = to32i(ebp+0x64); //mov
	sub(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0x34) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	edx = to32i(esi+4); //mov
	ecx = to32i(eax+4); //mov
	eax = (int32_t)(intptr_t)(edx+ecx); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC4) = eax; //mov
	ecx = to32i(esi+8); //mov
	ebx = to32i(edi+8); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(ebx+ecx); //lea
	to32i(ebp+8) = eax; //mov
	eax = to32i(esi+8); //mov
	edx = to32i(ebp+0x68); //mov
	sub(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0x38) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	edx = to32i(esi+8); //mov
	ecx = to32i(eax+8); //mov
	eax = (int32_t)(intptr_t)(edx+ecx); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC8) = eax; //mov
	ax = to16i(edi+0xC); //mov
	to16i(ebp+0xCC) = ax; //mov
	to16i(ebp+0x9C) = ax; //mov
	to16i(ebp+0x6C) = ax; //mov
	to16i(ebp+0x3C) = ax; //mov
	to16i(ebp+0xC) = ax; //mov
	eax = to32i(ebp+0); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+8); //mov
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C2B7;
	to32i(esp+0x14) = 1; //mov
loc_45C2B7:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x40); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
	fild(to32i(esp+0x68));
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
	edi = (int32_t)(intptr_t)(ebp+0x24); //lea
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
		goto loc_45C3C6;
	cmp(eax, ecx);
	if (jge())
		goto loc_45C3C6;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C39A;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C39A;
	cmp(eax, edx);
	if (jle())
		goto loc_45C39E;
	or_(ebx, (int32_t)4);
	goto loc_45C39E;
loc_45C39A:
	or_(ebx, (int32_t)8);
loc_45C39E:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C3C1;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C3C1;
	cmp(eax, edx);
	if (jle())
		goto loc_45C3CB;
	or_(ebx, (int32_t)2);
	goto loc_45C3CB;
loc_45C3C1:
	or_(ebx, (int32_t)1);
	goto loc_45C3CB;
loc_45C3C6:
	ebx = 0x10; //mov
loc_45C3CB:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(ebp+0x34); //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(ebp+0x38); //mov
	to32i(esp+0x38) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C3EE;
	to32i(esp+0x38) = 1; //mov
loc_45C3EE:
	eax = to32i(esp+0x38); //mov
	edx = (int32_t)(intptr_t)(esp+0x48); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x40); //lea
	fild(to32i(esp+0x68));
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
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x54); //lea
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
		goto loc_45C4FD;
	cmp(eax, ecx);
	if (jge())
		goto loc_45C4FD;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C4D1;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C4D1;
	cmp(eax, edx);
	if (jle())
		goto loc_45C4D5;
	or_(ebx, (int32_t)4);
	goto loc_45C4D5;
loc_45C4D1:
	or_(ebx, (int32_t)8);
loc_45C4D5:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C4F8;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C4F8;
	cmp(eax, edx);
	if (jle())
		goto loc_45C502;
	or_(ebx, (int32_t)2);
	goto loc_45C502;
loc_45C4F8:
	or_(ebx, (int32_t)1);
	goto loc_45C502;
loc_45C4FD:
	ebx = 0x10; //mov
loc_45C502:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x60); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+0x64); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebp+0x68); //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C524;
	to32i(esp+8) = 1; //mov
loc_45C524:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x70); //lea
	fild(to32i(esp+0x68));
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
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x84); //lea
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
		goto loc_45C634;
	cmp(eax, ecx);
	if (jge())
		goto loc_45C634;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C608;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C608;
	cmp(eax, edx);
	if (jle())
		goto loc_45C60C;
	or_(ebx, (int32_t)4);
	goto loc_45C60C;
loc_45C608:
	or_(ebx, (int32_t)8);
loc_45C60C:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C62F;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C62F;
	cmp(eax, edx);
	if (jle())
		goto loc_45C639;
	or_(ebx, (int32_t)2);
	goto loc_45C639;
loc_45C62F:
	or_(ebx, (int32_t)1);
	goto loc_45C639;
loc_45C634:
	ebx = 0x10; //mov
loc_45C639:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x90); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x94); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ebp+0x98); //mov
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C665;
	to32i(esp+0x20) = 1; //mov
loc_45C665:
	eax = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x58); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xA0); //lea
	fild(to32i(esp+0x68));
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	fstp(to32f(esp+0x54));
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
	ecx = (int32_t)(intptr_t)(esp+0x58); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xB4); //lea
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
		goto loc_45C77A;
	cmp(eax, ecx);
	if (jge())
		goto loc_45C77A;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C74E;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C74E;
	cmp(eax, edx);
	if (jle())
		goto loc_45C752;
	or_(ebx, (int32_t)4);
	goto loc_45C752;
loc_45C74E:
	or_(ebx, (int32_t)8);
loc_45C752:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C775;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C775;
	cmp(eax, edx);
	if (jle())
		goto loc_45C77F;
	or_(ebx, (int32_t)2);
	goto loc_45C77F;
loc_45C775:
	or_(ebx, (int32_t)1);
	goto loc_45C77F;
loc_45C77A:
	ebx = 0x10; //mov
loc_45C77F:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0xC0); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+0xC4); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+0xC8); //mov
	to32i(esp+0x2C) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45C7AB;
	to32i(esp+0x2C) = 1; //mov
loc_45C7AB:
	eax = to32i(esp+0x2C); //mov
	edx = (int32_t)(intptr_t)(esp+0x60); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xD0); //lea
	fild(to32i(esp+0x68));
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	fstp(to32f(esp+0x5C));
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
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xE4); //lea
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
		goto loc_45C8C0;
	cmp(eax, ecx);
	if (jge())
		goto loc_45C8C0;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C894;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C894;
	cmp(eax, edx);
	if (jle())
		goto loc_45C898;
	or_(ebx, (int32_t)4);
	goto loc_45C898;
loc_45C894:
	or_(ebx, (int32_t)8);
loc_45C898:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45C8BB;
	cmp(eax, ecx);
	if (jl())
		goto loc_45C8BB;
	cmp(eax, edx);
	if (jle())
		goto loc_45C8C5;
	or_(ebx, (int32_t)2);
	goto loc_45C8C5;
loc_45C8BB:
	or_(ebx, (int32_t)1);
	goto loc_45C8C5;
loc_45C8C0:
	ebx = 0x10; //mov
loc_45C8C5:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45C8D0:
	to32i(dword_512A9C) = ebx; //mov
	goto loc_45C03D;
loc_45C8DB:
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
	goto loc_45C0C1;
}
Fn(void) Game::_sub_45C8F0()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x6C);
	edi = eax; //mov
	esi = ebx; //mov
	to32i(esp+0x64) = ecx; //mov
	eax = to32i(eax+8); //mov
	and_(eax, (int32_t)6);
	or_(eax, edx);
	ebp = to32i(dword_5222D8); //mov
	ecx = to32i(dword_4D6DC0+eax*4); //mov
	eax = (int32_t)(intptr_t)(ebp+0xF0); //lea
	to32i(dword_5222D8) = eax; //mov
	ebx = eax; //mov
	add(eax, (int32_t)0x24);
	edx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_45D1EB;
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
loc_45C93D:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(edi+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0xC0); //lea
	to32i(ebx+0xC) = eax; //mov
	to32i(ebx+0x10) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp+0x90); //lea
	to32i(ebx+0x14) = eax; //mov
	eax = to32i(edi+0x18); //mov
	to32i(ebx+0x18) = eax; //mov
	ebx = to32i(dword_5222D8); //mov
	eax = (int32_t)(intptr_t)(ebx+0x24); //lea
	to32i(dword_5222D8) = eax; //mov
	eax = to32i(dword_512A9C); //mov
	ecx = to32i(dword_4D6DC8+ecx*4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D1F6;
	to32i(dword_512A9C) = ebx; //mov
loc_45C9B8:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(edi+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebx+0xC) = eax; //mov
	eax = to32i(edi+0x10); //mov
	to32i(ebx+0x10) = eax; //mov
	eax = to32i(edi+0x14); //mov
	to32i(ebx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x60); //lea
	ecx = to32i(esp+0x7C); //mov
	to32i(ebx+0x18) = eax; //mov
	eax = to32i(esp+0x80); //mov
	ecx = to32i(ecx); //mov
	edx = to32i(eax); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax); //mov
	add(eax, ecx);
	to32i(ebp+0x90) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	to32i(ebp+0x60) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	ecx = to32i(eax+4); //mov
	eax = to32i(esp+0x80); //mov
	ebx = to32i(eax+4); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax+4); //mov
	add(eax, ecx);
	to32i(ebp+0x94) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x64) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	ecx = to32i(eax+8); //mov
	eax = to32i(esp+0x80); //mov
	edi = to32i(eax+8); //mov
	sub(ecx, edi);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x80); //mov
	eax = to32i(eax+8); //mov
	add(eax, ecx);
	to32i(ebp+0x98) = eax; //mov
	eax = to32i(esp+0x7C); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	to32i(ebp+0x68) = eax; //mov
	eax = to32i(esp+0x64); //mov
	ecx = to32i(eax); //mov
	eax = to32i(esi); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	to32i(ebp+0x30) = eax; //mov
	edx = to32i(esi); //mov
	ebx = to32i(ebp+0x90); //mov
	add(ecx, edx);
	add(ecx, ebx);
	sar(ecx, (int32_t)1);
	to32i(ebp+0) = ecx; //mov
	eax = to32i(esp+0x80); //mov
	edx = to32i(esi); //mov
	edi = to32i(eax); //mov
	eax = (int32_t)(intptr_t)(edx+edi); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC0) = eax; //mov
	eax = to32i(esp+0x64); //mov
	ecx = to32i(eax+4); //mov
	eax = to32i(esi+4); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x34) = eax; //mov
	edx = to32i(esi+4); //mov
	ebx = to32i(ebp+0x94); //mov
	add(ecx, edx);
	add(ecx, ebx);
	sar(ecx, (int32_t)1);
	to32i(ebp+4) = ecx; //mov
	eax = to32i(esp+0x80); //mov
	edx = to32i(esi+4); //mov
	edi = to32i(eax+4); //mov
	eax = (int32_t)(intptr_t)(edx+edi); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC4) = eax; //mov
	eax = to32i(esp+0x64); //mov
	ecx = to32i(eax+8); //mov
	eax = to32i(esi+8); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x64); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	to32i(ebp+0x38) = eax; //mov
	edx = to32i(esi+8); //mov
	ebx = to32i(ebp+0x98); //mov
	add(ecx, edx);
	add(ecx, ebx);
	sar(ecx, (int32_t)1);
	to32i(ebp+8) = ecx; //mov
	eax = to32i(esp+0x80); //mov
	edx = to32i(esi+8); //mov
	edi = to32i(eax+8); //mov
	eax = (int32_t)(intptr_t)(edx+edi); //lea
	sar(eax, (int32_t)1);
	to32i(ebp+0xC8) = eax; //mov
	ax = to16i(esi+0xC); //mov
	to16i(ebp+0xCC) = ax; //mov
	to16i(ebp+0x9C) = ax; //mov
	to16i(ebp+0x6C) = ax; //mov
	to16i(ebp+0x3C) = ax; //mov
	to16i(ebp+0xC) = ax; //mov
	eax = to32i(ebp+0); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+8); //mov
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45CBD2;
	to32i(esp+0x14) = 1; //mov
loc_45CBD2:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x40); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
	fild(to32i(esp+0x68));
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
	edi = (int32_t)(intptr_t)(ebp+0x24); //lea
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
		goto loc_45CCE1;
	cmp(eax, ecx);
	if (jge())
		goto loc_45CCE1;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CCB5;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CCB5;
	cmp(eax, edx);
	if (jle())
		goto loc_45CCB9;
	or_(ebx, (int32_t)4);
	goto loc_45CCB9;
loc_45CCB5:
	or_(ebx, (int32_t)8);
loc_45CCB9:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CCDC;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CCDC;
	cmp(eax, edx);
	if (jle())
		goto loc_45CCE6;
	or_(ebx, (int32_t)2);
	goto loc_45CCE6;
loc_45CCDC:
	or_(ebx, (int32_t)1);
	goto loc_45CCE6;
loc_45CCE1:
	ebx = 0x10; //mov
loc_45CCE6:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0x30) = eax; //mov
	eax = to32i(ebp+0x34); //mov
	to32i(esp+0x34) = eax; //mov
	eax = to32i(ebp+0x38); //mov
	to32i(esp+0x38) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45CD09;
	to32i(esp+0x38) = 1; //mov
loc_45CD09:
	eax = to32i(esp+0x38); //mov
	edx = (int32_t)(intptr_t)(esp+0x48); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x40); //lea
	fild(to32i(esp+0x68));
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
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x54); //lea
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
		goto loc_45CE18;
	cmp(eax, ecx);
	if (jge())
		goto loc_45CE18;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CDEC;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CDEC;
	cmp(eax, edx);
	if (jle())
		goto loc_45CDF0;
	or_(ebx, (int32_t)4);
	goto loc_45CDF0;
loc_45CDEC:
	or_(ebx, (int32_t)8);
loc_45CDF0:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CE13;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CE13;
	cmp(eax, edx);
	if (jle())
		goto loc_45CE1D;
	or_(ebx, (int32_t)2);
	goto loc_45CE1D;
loc_45CE13:
	or_(ebx, (int32_t)1);
	goto loc_45CE1D;
loc_45CE18:
	ebx = 0x10; //mov
loc_45CE1D:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x60); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+0x64); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebp+0x68); //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45CE3F;
	to32i(esp+8) = 1; //mov
loc_45CE3F:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x50); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x70); //lea
	fild(to32i(esp+0x68));
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
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x84); //lea
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
		goto loc_45CF4F;
	cmp(eax, ecx);
	if (jge())
		goto loc_45CF4F;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CF23;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CF23;
	cmp(eax, edx);
	if (jle())
		goto loc_45CF27;
	or_(ebx, (int32_t)4);
	goto loc_45CF27;
loc_45CF23:
	or_(ebx, (int32_t)8);
loc_45CF27:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45CF4A;
	cmp(eax, ecx);
	if (jl())
		goto loc_45CF4A;
	cmp(eax, edx);
	if (jle())
		goto loc_45CF54;
	or_(ebx, (int32_t)2);
	goto loc_45CF54;
loc_45CF4A:
	or_(ebx, (int32_t)1);
	goto loc_45CF54;
loc_45CF4F:
	ebx = 0x10; //mov
loc_45CF54:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x90); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x94); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ebp+0x98); //mov
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45CF80;
	to32i(esp+0x20) = 1; //mov
loc_45CF80:
	eax = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x58); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xA0); //lea
	fild(to32i(esp+0x68));
	eax = (int32_t)(intptr_t)(esp+0x54); //lea
	fstp(to32f(esp+0x54));
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
	ecx = (int32_t)(intptr_t)(esp+0x58); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xB4); //lea
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
		goto loc_45D095;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D095;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D069;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D069;
	cmp(eax, edx);
	if (jle())
		goto loc_45D06D;
	or_(ebx, (int32_t)4);
	goto loc_45D06D;
loc_45D069:
	or_(ebx, (int32_t)8);
loc_45D06D:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D090;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D090;
	cmp(eax, edx);
	if (jle())
		goto loc_45D09A;
	or_(ebx, (int32_t)2);
	goto loc_45D09A;
loc_45D090:
	or_(ebx, (int32_t)1);
	goto loc_45D09A;
loc_45D095:
	ebx = 0x10; //mov
loc_45D09A:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0xC0); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+0xC4); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+0xC8); //mov
	to32i(esp+0x2C) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D0C6;
	to32i(esp+0x2C) = 1; //mov
loc_45D0C6:
	eax = to32i(esp+0x2C); //mov
	edx = (int32_t)(intptr_t)(esp+0x60); //lea
	to32i(esp+0x68) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xD0); //lea
	fild(to32i(esp+0x68));
	eax = (int32_t)(intptr_t)(esp+0x5C); //lea
	fstp(to32f(esp+0x5C));
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
	ecx = (int32_t)(intptr_t)(esp+0x60); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xE4); //lea
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
		goto loc_45D1DB;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D1DB;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D1AF;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D1AF;
	cmp(eax, edx);
	if (jle())
		goto loc_45D1B3;
	or_(ebx, (int32_t)4);
	goto loc_45D1B3;
loc_45D1AF:
	or_(ebx, (int32_t)8);
loc_45D1B3:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D1D6;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D1D6;
	cmp(eax, edx);
	if (jle())
		goto loc_45D1E0;
	or_(ebx, (int32_t)2);
	goto loc_45D1E0;
loc_45D1D6:
	or_(ebx, (int32_t)1);
	goto loc_45D1E0;
loc_45D1DB:
	ebx = 0x10; //mov
loc_45D1E0:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x6C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45D1EB:
	to32i(dword_512A9C) = ebx; //mov
	goto loc_45C93D;
loc_45D1F6:
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
	goto loc_45C9B8;
}
Fn(void) Game::_sub_45D210()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	esi = eax; //mov
	edi = ebx; //mov
	to32i(esp+0x50) = ecx; //mov
	eax = to32i(eax+8); //mov
	and_(eax, (int32_t)6);
	or_(eax, edx);
	ebp = to32i(dword_5222D8); //mov
	ecx = to32i(dword_4D6DC0+eax*4); //mov
	eax = (int32_t)(intptr_t)(ebp+0xC0); //lea
	to32i(dword_5222D8) = eax; //mov
	ebx = eax; //mov
	add(eax, (int32_t)0x24);
	edx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_45D940;
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
loc_45D25D:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esi+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = to32i(esi+0xC); //mov
	to32i(ebx+0xC) = eax; //mov
	to32i(ebx+0x10) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp+0x90); //lea
	to32i(ebx+0x14) = eax; //mov
	eax = to32i(esi+0x18); //mov
	to32i(ebx+0x18) = eax; //mov
	ebx = to32i(dword_5222D8); //mov
	eax = (int32_t)(intptr_t)(ebx+0x24); //lea
	to32i(dword_5222D8) = eax; //mov
	eax = to32i(dword_512A9C); //mov
	ecx = to32i(dword_4D6DC8+ecx*4); //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D94B;
	to32i(dword_512A9C) = ebx; //mov
loc_45D2D5:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esi+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebx+0xC) = eax; //mov
	eax = to32i(esi+0x10); //mov
	to32i(ebx+0x10) = eax; //mov
	eax = to32i(esi+0x14); //mov
	to32i(ebx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x60); //lea
	ecx = to32i(esp+0x50); //mov
	to32i(ebx+0x18) = eax; //mov
	ecx = to32i(ecx); //mov
	edx = to32i(edi); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx+ecx); //lea
	to32i(ebp+0) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x50); //mov
	to32i(ebp+0x30) = eax; //mov
	ecx = to32i(ecx+4); //mov
	ebx = to32i(edi+4); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(ebx+ecx); //lea
	to32i(ebp+4) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x50); //mov
	to32i(ebp+0x34) = eax; //mov
	ecx = to32i(ecx+8); //mov
	esi = to32i(edi+8); //mov
	sub(ecx, esi);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(esi+ecx); //lea
	to32i(ebp+8) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x68); //mov
	to32i(ebp+0x38) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	ecx = to32i(ecx); //mov
	edx = to32i(eax); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax); //mov
	add(eax, ecx);
	to32i(ebp+0x90) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	to32i(ebp+0x60) = eax; //mov
	eax = to32i(esp+0x68); //mov
	ecx = to32i(eax+4); //mov
	eax = to32i(esp+0x6C); //mov
	ebx = to32i(eax+4); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax+4); //mov
	add(eax, ecx);
	to32i(ebp+0x94) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x64) = eax; //mov
	eax = to32i(esp+0x68); //mov
	ecx = to32i(eax+8); //mov
	eax = to32i(esp+0x6C); //mov
	esi = to32i(eax+8); //mov
	sub(ecx, esi);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax+8); //mov
	add(eax, ecx);
	to32i(ebp+0x98) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	to32i(ebp+0x68) = eax; //mov
	ax = to16i(edi+0xC); //mov
	to16i(ebp+0x9C) = ax; //mov
	to16i(ebp+0x6C) = ax; //mov
	to16i(ebp+0x3C) = ax; //mov
	to16i(ebp+0xC) = ax; //mov
	eax = to32i(ebp+0); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebp+8); //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D46C;
	to32i(esp+8) = 1; //mov
loc_45D46C:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x34); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	fstp(to32f(esp+0x30));
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
	ecx = (int32_t)(intptr_t)(esp+0x34); //lea
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x24); //lea
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
		goto loc_45D579;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D579;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D54D;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D54D;
	cmp(eax, edx);
	if (jle())
		goto loc_45D551;
	or_(ebx, (int32_t)4);
	goto loc_45D551;
loc_45D54D:
	or_(ebx, (int32_t)8);
loc_45D551:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D574;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D574;
	cmp(eax, edx);
	if (jle())
		goto loc_45D57E;
	or_(ebx, (int32_t)2);
	goto loc_45D57E;
loc_45D574:
	or_(ebx, (int32_t)1);
	goto loc_45D57E;
loc_45D579:
	ebx = 0x10; //mov
loc_45D57E:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+0x34); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0x38); //mov
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D5A1;
	to32i(esp+0x14) = 1; //mov
loc_45D5A1:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x3C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x40); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x38); //lea
	fstp(to32f(esp+0x38));
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
	ecx = (int32_t)(intptr_t)(esp+0x3C); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x54); //lea
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
		goto loc_45D6B0;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D6B0;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D684;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D684;
	cmp(eax, edx);
	if (jle())
		goto loc_45D688;
	or_(ebx, (int32_t)4);
	goto loc_45D688;
loc_45D684:
	or_(ebx, (int32_t)8);
loc_45D688:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D6AB;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D6AB;
	cmp(eax, edx);
	if (jle())
		goto loc_45D6B5;
	or_(ebx, (int32_t)2);
	goto loc_45D6B5;
loc_45D6AB:
	or_(ebx, (int32_t)1);
	goto loc_45D6B5;
loc_45D6B0:
	ebx = 0x10; //mov
loc_45D6B5:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x60); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x64); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ebp+0x68); //mov
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D6D8;
	to32i(esp+0x20) = 1; //mov
loc_45D6D8:
	eax = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x44); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x70); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	fstp(to32f(esp+0x40));
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
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x84); //lea
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
		goto loc_45D7EA;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D7EA;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D7BE;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D7BE;
	cmp(eax, edx);
	if (jle())
		goto loc_45D7C2;
	or_(ebx, (int32_t)4);
	goto loc_45D7C2;
loc_45D7BE:
	or_(ebx, (int32_t)8);
loc_45D7C2:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D7E5;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D7E5;
	cmp(eax, edx);
	if (jle())
		goto loc_45D7EF;
	or_(ebx, (int32_t)2);
	goto loc_45D7EF;
loc_45D7E5:
	or_(ebx, (int32_t)1);
	goto loc_45D7EF;
loc_45D7EA:
	ebx = 0x10; //mov
loc_45D7EF:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x90); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+0x94); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+0x98); //mov
	to32i(esp+0x2C) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45D81B;
	to32i(esp+0x2C) = 1; //mov
loc_45D81B:
	eax = to32i(esp+0x2C); //mov
	edx = (int32_t)(intptr_t)(esp+0x4C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xA0); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	fstp(to32f(esp+0x48));
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
	ecx = (int32_t)(intptr_t)(esp+0x4C); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xB4); //lea
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
		goto loc_45D930;
	cmp(eax, ecx);
	if (jge())
		goto loc_45D930;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D904;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D904;
	cmp(eax, edx);
	if (jle())
		goto loc_45D908;
	or_(ebx, (int32_t)4);
	goto loc_45D908;
loc_45D904:
	or_(ebx, (int32_t)8);
loc_45D908:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45D92B;
	cmp(eax, ecx);
	if (jl())
		goto loc_45D92B;
	cmp(eax, edx);
	if (jle())
		goto loc_45D935;
	or_(ebx, (int32_t)2);
	goto loc_45D935;
loc_45D92B:
	or_(ebx, (int32_t)1);
	goto loc_45D935;
loc_45D930:
	ebx = 0x10; //mov
loc_45D935:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45D940:
	to32i(dword_512A9C) = ebx; //mov
	goto loc_45D25D;
loc_45D94B:
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
	goto loc_45D2D5;
}
Fn(void) Game::_sub_45D960()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	to32i(esp+0x50) = eax; //mov
	esi = ebx; //mov
	edi = ecx; //mov
	eax = to32i(eax+8); //mov
	and_(eax, (int32_t)6);
	or_(eax, edx);
	ebp = to32i(dword_5222D8); //mov
	ecx = to32i(dword_4D6DC0+eax*4); //mov
	eax = (int32_t)(intptr_t)(ebp+0xC0); //lea
	to32i(dword_5222D8) = eax; //mov
	ebx = eax; //mov
	add(eax, (int32_t)0x24);
	edx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_45E036;
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
loc_45D9AD:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	to32i(ebx+0xC) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebx+0x10) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x60); //lea
	to32i(ebx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x90); //lea
	edx = to32i(esp+0x6C); //mov
	to32i(ebx+0x18) = eax; //mov
	eax = to32i(esp+0x68); //mov
	ecx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	ebx = to32i(esi); //mov
	edx = eax; //mov
	ecx = to32i(edi); //mov
	sar(edx, (int32_t)2);
	sar(eax, (int32_t)4);
	sub(ecx, ebx);
	add(eax, edx);
	edx = ecx; //mov
	sar(edx, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, edx);
	edx = to32i(esp+0x6C); //mov
	edx = to32i(edx); //mov
	add(edx, eax);
	to32i(ebp+0x90) = edx; //mov
	edx = to32i(esp+0x68); //mov
	edx = to32i(edx); //mov
	sub(edx, eax);
	to32i(ebp+0x60) = edx; //mov
	eax = to32i(esi); //mov
	edx = to32i(ebp+0x90); //mov
	add(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0) = eax; //mov
	eax = to32i(edi); //mov
	sub(eax, ecx);
	add(eax, to32i(ebp+0x60));
	sar(eax, (int32_t)1);
	to32i(ebp+0x30) = eax; //mov
	eax = to32i(esp+0x68); //mov
	edx = to32i(eax+4); //mov
	eax = to32i(esp+0x6C); //mov
	ebx = to32i(eax+4); //mov
	sub(edx, ebx);
	eax = edx; //mov
	sar(edx, (int32_t)2);
	sar(eax, (int32_t)4);
	ecx = to32i(edi+4); //mov
	add(eax, edx);
	edx = to32i(esi+4); //mov
	sub(ecx, edx);
	edx = ecx; //mov
	sar(edx, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, edx);
	edx = to32i(esp+0x6C); //mov
	edx = to32i(edx+4); //mov
	add(edx, eax);
	to32i(ebp+0x94) = edx; //mov
	edx = to32i(esp+0x68); //mov
	edx = to32i(edx+4); //mov
	sub(edx, eax);
	to32i(ebp+0x64) = edx; //mov
	eax = to32i(esi+4); //mov
	ebx = to32i(ebp+0x94); //mov
	add(eax, ecx);
	add(eax, ebx);
	sar(eax, (int32_t)1);
	to32i(ebp+4) = eax; //mov
	eax = to32i(edi+4); //mov
	edx = to32i(ebp+0x64); //mov
	sub(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+0x34) = eax; //mov
	eax = to32i(esp+0x68); //mov
	edx = to32i(eax+8); //mov
	eax = to32i(esp+0x6C); //mov
	sub(edx, to32i(eax+8));
	ebx = to32i(esi+8); //mov
	eax = edx; //mov
	ecx = to32i(edi+8); //mov
	sar(edx, (int32_t)2);
	sar(eax, (int32_t)4);
	sub(ecx, ebx);
	add(eax, edx);
	edx = ecx; //mov
	sar(edx, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, edx);
	edx = to32i(esp+0x6C); //mov
	edx = to32i(edx+8); //mov
	add(edx, eax);
	to32i(ebp+0x98) = edx; //mov
	edx = to32i(esp+0x68); //mov
	edx = to32i(edx+8); //mov
	sub(edx, eax);
	to32i(ebp+0x68) = edx; //mov
	eax = to32i(esi+8); //mov
	edx = to32i(ebp+0x98); //mov
	add(eax, ecx);
	add(eax, edx);
	sar(eax, (int32_t)1);
	to32i(ebp+8) = eax; //mov
	eax = to32i(edi+8); //mov
	sub(eax, ecx);
	add(eax, to32i(ebp+0x68));
	sar(eax, (int32_t)1);
	to32i(ebp+0x38) = eax; //mov
	ax = to16i(esi+0xC); //mov
	to16i(ebp+0x9C) = ax; //mov
	to16i(ebp+0x6C) = ax; //mov
	to16i(ebp+0x3C) = ax; //mov
	to16i(ebp+0xC) = ax; //mov
	eax = to32i(ebp+0); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+8); //mov
	to32i(esp+0x2C) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45DB63;
	to32i(esp+0x2C) = 1; //mov
loc_45DB63:
	eax = to32i(esp+0x2C); //mov
	edx = (int32_t)(intptr_t)(esp+0x34); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	fstp(to32f(esp+0x30));
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
	ecx = (int32_t)(intptr_t)(esp+0x34); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x24); //lea
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
		goto loc_45DC72;
	cmp(eax, ecx);
	if (jge())
		goto loc_45DC72;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DC46;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DC46;
	cmp(eax, edx);
	if (jle())
		goto loc_45DC4A;
	or_(ebx, (int32_t)4);
	goto loc_45DC4A;
loc_45DC46:
	or_(ebx, (int32_t)8);
loc_45DC4A:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DC6D;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DC6D;
	cmp(eax, edx);
	if (jle())
		goto loc_45DC77;
	or_(ebx, (int32_t)2);
	goto loc_45DC77;
loc_45DC6D:
	or_(ebx, (int32_t)1);
	goto loc_45DC77;
loc_45DC72:
	ebx = 0x10; //mov
loc_45DC77:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+0x34); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0x38); //mov
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45DC9A;
	to32i(esp+0x14) = 1; //mov
loc_45DC9A:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x3C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x40); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x38); //lea
	fstp(to32f(esp+0x38));
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
	ecx = (int32_t)(intptr_t)(esp+0x3C); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x54); //lea
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
		goto loc_45DDA9;
	cmp(eax, ecx);
	if (jge())
		goto loc_45DDA9;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DD7D;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DD7D;
	cmp(eax, edx);
	if (jle())
		goto loc_45DD81;
	or_(ebx, (int32_t)4);
	goto loc_45DD81;
loc_45DD7D:
	or_(ebx, (int32_t)8);
loc_45DD81:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DDA4;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DDA4;
	cmp(eax, edx);
	if (jle())
		goto loc_45DDAE;
	or_(ebx, (int32_t)2);
	goto loc_45DDAE;
loc_45DDA4:
	or_(ebx, (int32_t)1);
	goto loc_45DDAE;
loc_45DDA9:
	ebx = 0x10; //mov
loc_45DDAE:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x60); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+0x64); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebp+0x68); //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45DDD0;
	to32i(esp+8) = 1; //mov
loc_45DDD0:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x44); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x70); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	fstp(to32f(esp+0x40));
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
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x84); //lea
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
		goto loc_45DEE0;
	cmp(eax, ecx);
	if (jge())
		goto loc_45DEE0;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DEB4;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DEB4;
	cmp(eax, edx);
	if (jle())
		goto loc_45DEB8;
	or_(ebx, (int32_t)4);
	goto loc_45DEB8;
loc_45DEB4:
	or_(ebx, (int32_t)8);
loc_45DEB8:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DEDB;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DEDB;
	cmp(eax, edx);
	if (jle())
		goto loc_45DEE5;
	or_(ebx, (int32_t)2);
	goto loc_45DEE5;
loc_45DEDB:
	or_(ebx, (int32_t)1);
	goto loc_45DEE5;
loc_45DEE0:
	ebx = 0x10; //mov
loc_45DEE5:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x90); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x94); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ebp+0x98); //mov
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45DF11;
	to32i(esp+0x20) = 1; //mov
loc_45DF11:
	eax = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x4C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xA0); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	fstp(to32f(esp+0x48));
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
	ecx = (int32_t)(intptr_t)(esp+0x4C); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xB4); //lea
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
		goto loc_45E026;
	cmp(eax, ecx);
	if (jge())
		goto loc_45E026;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45DFFA;
	cmp(eax, ecx);
	if (jl())
		goto loc_45DFFA;
	cmp(eax, edx);
	if (jle())
		goto loc_45DFFE;
	or_(ebx, (int32_t)4);
	goto loc_45DFFE;
loc_45DFFA:
	or_(ebx, (int32_t)8);
loc_45DFFE:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E021;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E021;
	cmp(eax, edx);
	if (jle())
		goto loc_45E02B;
	or_(ebx, (int32_t)2);
	goto loc_45E02B;
loc_45E021:
	or_(ebx, (int32_t)1);
	goto loc_45E02B;
loc_45E026:
	ebx = 0x10; //mov
loc_45E02B:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45E036:
	to32i(dword_512A9C) = ebx; //mov
	goto loc_45D9AD;
}
Fn(void) Game::_sub_45E050()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x58);
	to32i(esp+0x50) = eax; //mov
	esi = ebx; //mov
	edi = ecx; //mov
	eax = to32i(eax+8); //mov
	and_(eax, (int32_t)6);
	or_(eax, edx);
	ebp = to32i(dword_5222D8); //mov
	ecx = to32i(dword_4D6DC0+eax*4); //mov
	eax = (int32_t)(intptr_t)(ebp+0xC0); //lea
	to32i(dword_5222D8) = eax; //mov
	ebx = eax; //mov
	add(eax, (int32_t)0x24);
	edx = to32i(dword_512A9C); //mov
	to32i(dword_5222D8) = eax; //mov
	test(edx, edx);
	if (jz())
		goto loc_45E6F6;
	eax = to32i(dword_512A94); //mov
	to32i(eax) = ebx; //mov
loc_45E09D:
	edx = 3; //mov
	eax = 1; //mov
	to32i(dword_512A94) = ebx; //mov
	to32i(ebx+4) = 8; //mov
	eax = to32i(dword_500CF0+ecx*4); //mov
	to32i(ebx+0x1C) = eax; //mov
	eax = to32i(esp+0x50); //mov
	eax = to32i(eax+4); //mov
	to16i(ebx+8) = 1; //mov
	to16i(ebx+0xA) = 1; //mov
	to32i(ebx+0x20) = eax; //mov
	to32i(ebx+0xC) = ebp; //mov
	eax = (int32_t)(intptr_t)(ebp+0x30); //lea
	to32i(ebx+0x10) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x60); //lea
	to32i(ebx+0x14) = eax; //mov
	eax = (int32_t)(intptr_t)(ebp+0x90); //lea
	to32i(ebx+0x18) = eax; //mov
	ecx = to32i(edi); //mov
	ebx = to32i(esi); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(ebx+ecx); //lea
	to32i(ebp+0) = eax; //mov
	eax = to32i(edi); //mov
	sub(eax, ecx);
	to32i(ebp+0x30) = eax; //mov
	ecx = to32i(edi+4); //mov
	eax = to32i(esi+4); //mov
	sub(ecx, eax);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esi+4); //mov
	add(eax, ecx);
	to32i(ebp+4) = eax; //mov
	eax = to32i(edi+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x34) = eax; //mov
	ecx = to32i(edi+8); //mov
	edx = to32i(esi+8); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = (int32_t)(intptr_t)(edx+ecx); //lea
	to32i(ebp+8) = eax; //mov
	eax = to32i(edi+8); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x68); //mov
	to32i(ebp+0x38) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	ecx = to32i(ecx); //mov
	ebx = to32i(eax); //mov
	sub(ecx, ebx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax); //mov
	add(eax, ecx);
	to32i(ebp+0x90) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax); //mov
	sub(eax, ecx);
	ecx = to32i(esp+0x68); //mov
	to32i(ebp+0x60) = eax; //mov
	eax = to32i(esp+0x6C); //mov
	ecx = to32i(ecx+4); //mov
	edi = to32i(eax+4); //mov
	sub(ecx, edi);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax+4); //mov
	add(eax, ecx);
	to32i(ebp+0x94) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax+4); //mov
	sub(eax, ecx);
	to32i(ebp+0x64) = eax; //mov
	eax = to32i(esp+0x68); //mov
	ecx = to32i(eax+8); //mov
	eax = to32i(esp+0x6C); //mov
	edx = to32i(eax+8); //mov
	sub(ecx, edx);
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	sar(ecx, (int32_t)4);
	add(ecx, eax);
	eax = to32i(esp+0x6C); //mov
	eax = to32i(eax+8); //mov
	add(eax, ecx);
	to32i(ebp+0x98) = eax; //mov
	eax = to32i(esp+0x68); //mov
	eax = to32i(eax+8); //mov
	sub(eax, ecx);
	to32i(ebp+0x68) = eax; //mov
	ax = to16i(esi+0xC); //mov
	to16i(ebp+0x9C) = ax; //mov
	to16i(ebp+0x6C) = ax; //mov
	to16i(ebp+0x3C) = ax; //mov
	to16i(ebp+0xC) = ax; //mov
	eax = to32i(ebp+0); //mov
	to32i(esp+0x24) = eax; //mov
	eax = to32i(ebp+4); //mov
	to32i(esp+0x28) = eax; //mov
	eax = to32i(ebp+8); //mov
	to32i(esp+0x2C) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45E223;
	to32i(esp+0x2C) = 1; //mov
loc_45E223:
	eax = to32i(esp+0x2C); //mov
	edx = (int32_t)(intptr_t)(esp+0x34); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x10); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x30); //lea
	fstp(to32f(esp+0x30));
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
	ecx = (int32_t)(intptr_t)(esp+0x34); //lea
	eax = (int32_t)(intptr_t)(esp+0x24); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x24); //lea
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
		goto loc_45E332;
	cmp(eax, ecx);
	if (jge())
		goto loc_45E332;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E306;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E306;
	cmp(eax, edx);
	if (jle())
		goto loc_45E30A;
	or_(ebx, (int32_t)4);
	goto loc_45E30A;
loc_45E306:
	or_(ebx, (int32_t)8);
loc_45E30A:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E32D;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E32D;
	cmp(eax, edx);
	if (jle())
		goto loc_45E337;
	or_(ebx, (int32_t)2);
	goto loc_45E337;
loc_45E32D:
	or_(ebx, (int32_t)1);
	goto loc_45E337;
loc_45E332:
	ebx = 0x10; //mov
loc_45E337:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x30); //mov
	to32i(esp) = eax; //mov
	eax = to32i(ebp+0x34); //mov
	to32i(esp+4) = eax; //mov
	eax = to32i(ebp+0x38); //mov
	to32i(esp+8) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45E359;
	to32i(esp+8) = 1; //mov
loc_45E359:
	eax = to32i(esp+8); //mov
	edx = (int32_t)(intptr_t)(esp+0x3C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x40); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x38); //lea
	fstp(to32f(esp+0x38));
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
	ecx = (int32_t)(intptr_t)(esp+0x3C); //lea
	eax = esp; //mov
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x54); //lea
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
		goto loc_45E466;
	cmp(eax, ecx);
	if (jge())
		goto loc_45E466;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E43A;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E43A;
	cmp(eax, edx);
	if (jle())
		goto loc_45E43E;
	or_(ebx, (int32_t)4);
	goto loc_45E43E;
loc_45E43A:
	or_(ebx, (int32_t)8);
loc_45E43E:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E461;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E461;
	cmp(eax, edx);
	if (jle())
		goto loc_45E46B;
	or_(ebx, (int32_t)2);
	goto loc_45E46B;
loc_45E461:
	or_(ebx, (int32_t)1);
	goto loc_45E46B;
loc_45E466:
	ebx = 0x10; //mov
loc_45E46B:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x60); //mov
	to32i(esp+0x18) = eax; //mov
	eax = to32i(ebp+0x64); //mov
	to32i(esp+0x1C) = eax; //mov
	eax = to32i(ebp+0x68); //mov
	to32i(esp+0x20) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45E48E;
	to32i(esp+0x20) = 1; //mov
loc_45E48E:
	eax = to32i(esp+0x20); //mov
	edx = (int32_t)(intptr_t)(esp+0x44); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0x70); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x40); //lea
	fstp(to32f(esp+0x40));
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
	ecx = (int32_t)(intptr_t)(esp+0x44); //lea
	eax = (int32_t)(intptr_t)(esp+0x18); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0x84); //lea
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
		goto loc_45E5A0;
	cmp(eax, ecx);
	if (jge())
		goto loc_45E5A0;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E574;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E574;
	cmp(eax, edx);
	if (jle())
		goto loc_45E578;
	or_(ebx, (int32_t)4);
	goto loc_45E578;
loc_45E574:
	or_(ebx, (int32_t)8);
loc_45E578:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E59B;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E59B;
	cmp(eax, edx);
	if (jle())
		goto loc_45E5A5;
	or_(ebx, (int32_t)2);
	goto loc_45E5A5;
loc_45E59B:
	or_(ebx, (int32_t)1);
	goto loc_45E5A5;
loc_45E5A0:
	ebx = 0x10; //mov
loc_45E5A5:
	to8i(edi) = bl; //mov
	eax = to32i(ebp+0x90); //mov
	to32i(esp+0xC) = eax; //mov
	eax = to32i(ebp+0x94); //mov
	to32i(esp+0x10) = eax; //mov
	eax = to32i(ebp+0x98); //mov
	to32i(esp+0x14) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45E5D1;
	to32i(esp+0x14) = 1; //mov
loc_45E5D1:
	eax = to32i(esp+0x14); //mov
	edx = (int32_t)(intptr_t)(esp+0x4C); //lea
	to32i(esp+0x54) = eax; //mov
	esi = (int32_t)(intptr_t)(ebp+0xA0); //lea
	fild(to32i(esp+0x54));
	eax = (int32_t)(intptr_t)(esp+0x48); //lea
	fstp(to32f(esp+0x48));
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
	ecx = (int32_t)(intptr_t)(esp+0x4C); //lea
	eax = (int32_t)(intptr_t)(esp+0xC); //lea
	ebx = esi; //mov
	edi = (int32_t)(intptr_t)(ebp+0xB4); //lea
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
		goto loc_45E6E6;
	cmp(eax, ecx);
	if (jge())
		goto loc_45E6E6;
	eax = to32i(esi+4); //mov
	ebx = 0; //mov
	ecx = to32i(dword_4F1E10); //mov
	edx = to32i(dword_4F1E0C); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E6BA;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E6BA;
	cmp(eax, edx);
	if (jle())
		goto loc_45E6BE;
	or_(ebx, (int32_t)4);
	goto loc_45E6BE;
loc_45E6BA:
	or_(ebx, (int32_t)8);
loc_45E6BE:
	eax = to32i(esi); //mov
	ecx = to32i(dword_4F1E08); //mov
	edx = to32i(dword_4F1E18); //mov
	test(eax, (int32_t)0x80000000);
	if (jnz())
		goto loc_45E6E1;
	cmp(eax, ecx);
	if (jl())
		goto loc_45E6E1;
	cmp(eax, edx);
	if (jle())
		goto loc_45E6EB;
	or_(ebx, (int32_t)2);
	goto loc_45E6EB;
loc_45E6E1:
	or_(ebx, (int32_t)1);
	goto loc_45E6EB;
loc_45E6E6:
	ebx = 0x10; //mov
loc_45E6EB:
	to8i(edi) = bl; //mov
	add(esp, (int32_t)0x58);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 8; return;
loc_45E6F6:
	to32i(dword_512A9C) = ebx; //mov
	goto loc_45E09D;
}
Fn(void) Game::_sub_45E710()
{
	push32(ecx);
	ecx = eax; //mov
	eax = edx; //mov
	edx = ecx; //mov
	sub(edx, eax);
	test(ecx, ecx);
	if (jl())
		goto loc_45E737;
	test(eax, eax);
	if (jl())
		goto loc_45E725;
loc_45E721:
	eax = edx; //mov
loc_45E723:
	pop32(ecx);
	return;
loc_45E725:
	eax = edx; //mov
	cmp(edx, (int32_t)0x200);
	if (jle())
		goto loc_45E723;
	eax = (int32_t)(intptr_t)(edx-0x400); //lea
	pop32(ecx);
	return;
loc_45E737:
	test(eax, eax);
	if (jl())
		goto loc_45E721;
	sub(eax, ecx);
	cmp(eax, (int32_t)0x200);
	if (jle())
		goto loc_45E74F;
	edx = 0x400; //mov
	sub(edx, eax);
	eax = edx; //mov
	pop32(ecx);
	return;
loc_45E74F:
	neg(eax);
	pop32(ecx);
}
Fn(void) Game::_sub_45E760()
{
	push32(ecx);
	push32(edx);
	push32(esi);
	esi = eax; //mov
	eax = to32i(eax); //mov
	edx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	eax = to32i(esi+4); //mov
	edx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(esi+8); //mov
	edx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_45E7AE;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_45E7AE:
	test(eax, eax);
	if (jnz())
		goto loc_45E7B6;
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	return;
loc_45E7B6:
	push32(ebx);
	ebx = eax; //mov
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
	ecx = eax; //mov
	edx = ecx; //mov
	eax = to32i(esi); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi) = eax; //mov
	edx = ecx; //mov
	eax = to32i(esi+4); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+4) = eax; //mov
	edx = ecx; //mov
	eax = to32i(esi+8); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esi+8) = eax; //mov
	pop32(ebx);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
}
Fn(void) Game::_sub_45E810()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	to32i(esp+4) = eax; //mov
	ebp = to32i(eax+4); //mov
	esi = to32i(eax+8); //mov
	edi = to32i(eax); //mov
loc_45E825:
	test(edi, edi);
	if (jle())
		goto loc_45E83A;
	eax = edi; //mov
loc_45E82B:
	cmp(eax, (int32_t)0x1000000);
	if (jle())
		goto loc_45E840;
loc_45E832:
	sar(ebp, (int32_t)1);
	sar(esi, (int32_t)1);
	sar(edi, (int32_t)1);
	goto loc_45E825;
loc_45E83A:
	eax = edi; //mov
	neg(eax);
	goto loc_45E82B;
loc_45E840:
	test(ebp, ebp);
	if (jle())
		goto loc_45E8D0;
	eax = ebp; //mov
loc_45E84A:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45E832;
	test(esi, esi);
	if (jle())
		goto loc_45E8D9;
	eax = esi; //mov
loc_45E85B:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45E832;
	edx = edi; //mov
	eax = edi; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = ebp; //mov
	eax = ebp; //mov
loc_45E87A:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebx = eax; //mov
	to32i(esp+0x10) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
	shr(ecx, (int32_t)2);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	shr(ebx, (int32_t)2);
	to32i(esp+8) = eax; //mov
	shr(eax, (int32_t)2);
	add(ecx, ebx);
	add(eax, ecx);
	cmp(eax, (int32_t)0x40000000);
	if (jbe())
		goto loc_45E8E2;
	sar(edi, (int32_t)1);
	edx = edi; //mov
	eax = edi; //mov
	sar(ebp, (int32_t)1);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = ebp; //mov
	eax = ebp; //mov
	sar(esi, (int32_t)1);
	goto loc_45E87A;
loc_45E8D0:
	eax = ebp; //mov
	neg(eax);
	goto loc_45E84A;
loc_45E8D9:
	eax = esi; //mov
	neg(eax);
	goto loc_45E85B;
loc_45E8E2:
	eax = to32i(esp+0xC); //mov
	edx = to32i(esp+0x10); //mov
	ecx = to32i(esp+8); //mov
	add(eax, edx);
	add(eax, ecx);
	bsr(ecx, eax);
	if (jz())
		goto loc_45E909;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_45E909:
	to32i(esp) = eax; //mov
	test(eax, eax);
	if (jnz())
		goto loc_45E91A;
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45E91A:
	ebx = eax; //mov
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
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp); //mov
	to32i(ecx) = eax; //mov
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
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp); //mov
	to32i(ecx+4) = eax; //mov
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
	ecx = to32i(esp+4); //mov
	to32i(ecx+8) = eax; //mov
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45E990()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(edi);
	push32(ebp);
	edx = to32i(eax); //mov
	cmp(edx, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45E9F2;
	cmp(edx, (int32_t)0x10000);
	if (jle())
		goto loc_45E9F2;
	edx = 0x10000; //mov
loc_45E9AC:
	ebx = to32i(eax+4); //mov
	to32i(eax) = edx; //mov
	cmp(ebx, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45EA07;
	cmp(ebx, (int32_t)0x10000);
	if (jle())
		goto loc_45EA07;
	edx = 0x10000; //mov
loc_45E9C6:
	edi = to32i(eax+8); //mov
	to32i(eax+4) = edx; //mov
	cmp(edi, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45E9DC;
	cmp(edi, (int32_t)0x10000);
	if (jg())
		goto loc_45EA1F;
loc_45E9DC:
	ebp = to32i(eax+8); //mov
	cmp(ebp, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45EA26;
	edx = ebp; //mov
loc_45E9E9:
	to32i(eax+8) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45E9F2:
	ecx = to32i(eax); //mov
	cmp(ecx, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45EA00;
	edx = ecx; //mov
	goto loc_45E9AC;
loc_45EA00:
	edx = 0xFFFF0000; //mov
	goto loc_45E9AC;
loc_45EA07:
	push32(esi);
	esi = to32i(eax+4); //mov
	cmp(esi, (int32_t)0xFFFF0000);
	if (jle())
		goto loc_45EA18;
	edx = esi; //mov
loc_45EA15:
	pop32(esi);
	goto loc_45E9C6;
loc_45EA18:
	edx = 0xFFFF0000; //mov
	goto loc_45EA15;
loc_45EA1F:
	edx = 0x10000; //mov
	goto loc_45E9E9;
loc_45EA26:
	edx = 0xFFFF0000; //mov
	to32i(eax+8) = edx; //mov
	pop32(ebp);
	pop32(edi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EA40()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebx = to32i(eax); //mov
	ecx = to32i(eax+4); //mov
	esi = to32i(eax+8); //mov
	xor_(edi, edi);
loc_45EA53:
	test(ebx, ebx);
	if (jle())
		goto loc_45EA69;
	eax = ebx; //mov
loc_45EA59:
	cmp(eax, (int32_t)0x1000000);
	if (jle())
		goto loc_45EA6F;
loc_45EA60:
	sar(ecx, (int32_t)1);
	sar(esi, (int32_t)1);
	inc(edi);
	sar(ebx, (int32_t)1);
	goto loc_45EA53;
loc_45EA69:
	eax = ebx; //mov
	neg(eax);
	goto loc_45EA59;
loc_45EA6F:
	test(ecx, ecx);
	if (jle())
		goto loc_45EB1F;
	eax = ecx; //mov
loc_45EA79:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45EA60;
	test(esi, esi);
	if (jle())
		goto loc_45EB28;
	eax = esi; //mov
loc_45EA8A:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45EA60;
	edx = ebx; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	to32i(esp+4) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
loc_45EABE:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	shr(ebp, (int32_t)2);
	edx = to32i(esp); //mov
	to32i(esp+8) = eax; //mov
	shr(edx, (int32_t)2);
	shr(eax, (int32_t)2);
	to32i(esp+0x10) = edx; //mov
	add(ebp, to32i(esp+0x10));
	add(eax, ebp);
	cmp(eax, (int32_t)0x40000000);
	if (jbe())
		goto loc_45EB31;
	sar(ebx, (int32_t)1);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(ecx, (int32_t)1);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp) = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = ecx; //mov
	eax = ecx; //mov
	sar(esi, (int32_t)1);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	to32i(esp+4) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
	inc(edi);
	goto loc_45EABE;
loc_45EB1F:
	eax = ecx; //mov
	neg(eax);
	goto loc_45EA79;
loc_45EB28:
	eax = esi; //mov
	neg(eax);
	goto loc_45EA8A;
loc_45EB31:
	eax = to32i(esp+0xC); //mov
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp+8); //mov
	add(eax, ecx);
	add(eax, ebx);
	test(edi, edi);
	if (jz())
		goto loc_45EB4C;
loc_45EB45:
	shl(eax, (int32_t)2);
	dec(edi);
	if (jnz())
		goto loc_45EB45;
loc_45EB4C:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EB60()
{
	push32(ebx);
	push32(ecx);
	push32(edx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x14);
	ebx = to32i(eax); //mov
	esi = to32i(eax+4); //mov
	ecx = to32i(eax+8); //mov
	xor_(edi, edi);
loc_45EB73:
	test(ebx, ebx);
	if (jle())
		goto loc_45EB89;
	eax = ebx; //mov
loc_45EB79:
	cmp(eax, (int32_t)0x1000000);
	if (jle())
		goto loc_45EB8F;
loc_45EB80:
	sar(esi, (int32_t)1);
	sar(ecx, (int32_t)1);
	inc(edi);
	sar(ebx, (int32_t)1);
	goto loc_45EB73;
loc_45EB89:
	eax = ebx; //mov
	neg(eax);
	goto loc_45EB79;
loc_45EB8F:
	test(esi, esi);
	if (jle())
		goto loc_45EC2A;
	eax = esi; //mov
loc_45EB99:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45EB80;
	test(ecx, ecx);
	if (jle())
		goto loc_45EC33;
	eax = ecx; //mov
loc_45EBAA:
	cmp(eax, (int32_t)0x1000000);
	if (jg())
		goto loc_45EB80;
	edx = ebx; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
loc_45EBC9:
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	shr(ebp, (int32_t)2);
	to32i(esp) = eax; //mov
	to32i(esp+4) = eax; //mov
	edx = ecx; //mov
	to32i(esp+0x10) = ebp; //mov
	eax = ecx; //mov
	ebp = to32i(esp); //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	to32i(esp+8) = eax; //mov
	shr(ebp, (int32_t)2);
	shr(eax, (int32_t)2);
	add(ebp, to32i(esp+0x10));
	add(eax, ebp);
	cmp(eax, (int32_t)0x40000000);
	if (jbe())
		goto loc_45EC3C;
	sar(ebx, (int32_t)1);
	sar(esi, (int32_t)1);
	edx = ebx; //mov
	eax = ebx; //mov
	sar(ecx, (int32_t)1);
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	to32i(esp+0xC) = eax; //mov
	edx = esi; //mov
	eax = esi; //mov
	inc(edi);
	goto loc_45EBC9;
loc_45EC2A:
	eax = esi; //mov
	neg(eax);
	goto loc_45EB99;
loc_45EC33:
	eax = ecx; //mov
	neg(eax);
	goto loc_45EBAA;
loc_45EC3C:
	eax = to32i(esp+0xC); //mov
	ecx = to32i(esp+4); //mov
	ebx = to32i(esp+8); //mov
	add(eax, ecx);
	add(eax, ebx);
	bsr(ecx, eax);
	if (jz())
		goto loc_45EC63;
	mul32(to32i(dword_4DD4AC+ecx*4));
	shrd(eax, edx, 0x10);
	add(eax, to32i(dword_4DD530+ecx*4));
loc_45EC63:
	test(edi, edi);
	if (jz())
		goto loc_45EC6C;
loc_45EC67:
	add(eax, eax);
	dec(edi);
	if (jnz())
		goto loc_45EC67;
loc_45EC6C:
	add(esp, (int32_t)0x14);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EC80()
{
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)4);
	edi = eax; //mov
	esi = edx; //mov
	to32i(esp) = ecx; //mov
	edx = ebx; //mov
	eax = ebx; //mov
	sar(edx, (int32_t)0x1F);
	shl(edx, (int32_t)8);
	sbb(eax, edx);
	sar(eax, (int32_t)8);
	edx = eax; //mov
	esp -= 4; _sub_49C150(); esp += 4; //call
	ecx = eax; //mov
	eax = edx; //mov
	esp -= 4; _sub_49C1C0(); esp += 4; //call
	edx = edi; //mov
	ebx = eax; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ebp = eax; //mov
	edx = esi; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	sub(ebp, eax);
	eax = to32i(esp); //mov
	edx = edi; //mov
	to32i(eax) = ebp; //mov
	eax = ecx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	ecx = eax; //mov
	edx = esi; //mov
	eax = ebx; //mov
	imul32(edx);
	shl(edx, (int32_t)0x10);
	shr(eax, (int32_t)0x10);
	adc(eax, edx);
	add(ecx, eax);
	eax = to32i(esp+0x14); //mov
	to32i(eax) = ecx; //mov
	add(esp, (int32_t)4);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	esp += 4; return;
}
Fn(void) Game::_sub_45ED00()
{
	to32i(eax+4) = 0; //mov
	to32i(eax+8) = 0; //mov
	to32i(eax+0xC) = 0; //mov
	to32i(eax+0x10) = 0x10000; //mov
	to32i(eax+0x14) = 0; //mov
	to32i(eax+0x18) = 0; //mov
	to32i(eax+0x1C) = 0; //mov
	to32i(eax+0x20) = 0x10000; //mov
	to32i(eax) = 0x10000; //mov
}
Fn(void) Game::_sub_45ED40()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	push32(edi);
	push32(ebp);
	sub(esp, (int32_t)0x2C);
	ecx = eax; //mov
	eax = edx; //mov
	cmp(ecx, edx);
	if (jle())
		goto loc_45EE0E;
	edx = ecx; //mov
loc_45ED56:
	ecx = edx; //mov
	sar(ecx, (int32_t)2);
	to32i(esp+4) = ecx; //mov
	ecx = eax; //mov
	sar(ecx, (int32_t)0x10);
	to32i(esp+0xC) = ecx; //mov
	ecx = eax; //mov
	sar(ecx, (int32_t)0xF);
	to32i(esp+0x14) = ecx; //mov
	ecx = eax; //mov
	sar(ecx, (int32_t)0xE);
	to32i(esp+0x20) = ecx; //mov
	ecx = eax; //mov
	sar(ecx, (int32_t)7);
	esi = eax; //mov
	to32i(esp+0x1C) = ecx; //mov
	ecx = eax; //mov
	edi = eax; //mov
	sar(ecx, (int32_t)4);
	sar(esi, (int32_t)9);
	to32i(esp+0x18) = ecx; //mov
	ecx = to32i(esp+4); //mov
	sar(edi, (int32_t)6);
	cmp(eax, ecx);
	if (jl())
		goto loc_45EE15;
	ecx = edx; //mov
	sar(ecx, (int32_t)1);
	to32i(esp+8) = ecx; //mov
	ecx = eax; //mov
	sar(ecx, (int32_t)0xC);
	to32i(esp+0x24) = ecx; //mov
	ecx = eax; //mov
	ebx = eax; //mov
	sar(ecx, (int32_t)8);
	sar(ebx, (int32_t)0xD);
	to32i(esp+0x28) = ecx; //mov
	ecx = eax; //mov
	ebp = to32i(esp+8); //mov
	sar(ecx, (int32_t)5);
	cmp(eax, ebp);
	if (jl())
		goto loc_45EE35;
	add(ebp, to32i(esp+4));
	to32i(esp) = ebp; //mov
	ebp = eax; //mov
	sar(ebp, (int32_t)0xB);
	to32i(esp+0x10) = ebp; //mov
	ebp = eax; //mov
	sar(ebp, (int32_t)2);
	add(edx, ebp);
	cmp(eax, to32i(esp));
	if (jge())
		goto loc_45EE69;
	add(edx, ecx);
	ecx = to32i(esp+0x28); //mov
	sar(eax, (int32_t)0xA);
	add(edx, ecx);
	esi = to32i(esp+0x10); //mov
	add(eax, edx);
	edi = to32i(esp+0x24); //mov
	add(eax, esi);
	add(eax, edi);
loc_45EE03:
	add(eax, ebx);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EE0E:
	eax = ecx; //mov
	goto loc_45ED56;
loc_45EE15:
	add(edx, to32i(esp+0x18));
	eax = to32i(esp+0x1C); //mov
	add(edx, edi);
	add(edx, eax);
	ecx = to32i(esp+0x20); //mov
	add(edx, esi);
	eax = to32i(esp+0x14); //mov
	add(edx, ecx);
	ebx = to32i(esp+0xC); //mov
	add(eax, edx);
	goto loc_45EE03;
loc_45EE35:
	sar(eax, (int32_t)3);
	add(eax, edx);
	add(eax, ecx);
	ebp = to32i(esp+0x1C); //mov
	add(eax, edi);
	edx = to32i(esp+0x28); //mov
	add(eax, ebp);
	add(eax, edx);
	ecx = to32i(esp+0x24); //mov
	add(eax, esi);
	add(eax, ecx);
	add(eax, ebx);
	ebx = to32i(esp+0x20); //mov
	esi = to32i(esp+0xC); //mov
	add(eax, ebx);
	add(eax, esi);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EE69:
	add(edx, to32i(esp+0x18));
	add(edx, ecx);
	ecx = to32i(esp+0x1C); //mov
	add(edx, edi);
	edi = to32i(esp+0x28); //mov
	add(edx, ecx);
	add(edx, edi);
	ebp = to32i(esp+0x10); //mov
	add(esi, edx);
	eax = to32i(esp+0x24); //mov
	add(esi, ebp);
	add(esi, eax);
	eax = to32i(esp+0x20); //mov
	add(ebx, esi);
	edx = to32i(esp+0x14); //mov
	add(eax, ebx);
	add(eax, edx);
	add(esp, (int32_t)0x2C);
	pop32(ebp);
	pop32(edi);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EEB0()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	ebx = to32i(edx); //mov
	ecx = to32i(eax); //mov
	sub(ecx, ebx);
	test(ecx, ecx);
	if (jle())
		goto loc_45EEEF;
loc_45EEBD:
	ebx = ecx; //mov
	esi = to32i(edx+4); //mov
	ecx = to32i(eax+4); //mov
	sub(ecx, esi);
	test(ecx, ecx);
	if (jle())
		goto loc_45EEF3;
loc_45EECB:
	eax = to32i(eax+8); //mov
	sub(eax, to32i(edx+8));
	test(eax, eax);
	if (jle())
		goto loc_45EEF7;
loc_45EED5:
	edx = eax; //mov
	cmp(ebx, ecx);
	if (jle())
		goto loc_45EEFB;
	eax = ecx; //mov
	sar(eax, (int32_t)2);
	add(eax, ebx);
	cmp(eax, edx);
	if (jle())
		goto loc_45EF0F;
	sar(edx, (int32_t)2);
	add(eax, edx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EEEF:
	neg(ecx);
	goto loc_45EEBD;
loc_45EEF3:
	neg(ecx);
	goto loc_45EECB;
loc_45EEF7:
	neg(eax);
	goto loc_45EED5;
loc_45EEFB:
	eax = ebx; //mov
	sar(eax, (int32_t)2);
	add(eax, ecx);
	cmp(eax, edx);
	if (jle())
		goto loc_45EF0F;
	sar(edx, (int32_t)2);
	add(eax, edx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EF0F:
	sar(eax, (int32_t)2);
	add(eax, edx);
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EF20()
{
	push32(ebx);
	push32(ecx);
	ebx = eax; //mov
	ecx = edx; //mov
	edx = to32i(edx); //mov
	eax = to32i(eax); //mov
	sub(eax, edx);
	test(eax, eax);
	if (jle())
		goto loc_45EF48;
loc_45EF30:
	edx = eax; //mov
	eax = to32i(ebx+8); //mov
	sub(eax, to32i(ecx+8));
	test(eax, eax);
	if (jle())
		goto loc_45EF4C;
	cmp(edx, eax);
	if (jle())
		goto loc_45EF5A;
	sar(eax, (int32_t)2);
	add(eax, edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EF48:
	neg(eax);
	goto loc_45EF30;
loc_45EF4C:
	neg(eax);
	cmp(edx, eax);
	if (jle())
		goto loc_45EF5A;
	sar(eax, (int32_t)2);
	add(eax, edx);
	pop32(ecx);
	pop32(ebx);
	return;
loc_45EF5A:
	sar(edx, (int32_t)2);
	add(eax, edx);
	pop32(ecx);
	pop32(ebx);
}
Fn(void) Game::_sub_45EF70()
{
	push32(ebx);
	push32(ecx);
	push32(esi);
	edx = (int32_t)(intptr_t)aCNfs2seGameC_1; //mov
	ecx = 0x310; //mov
	ebx = 0x20; //mov
	eax = (int32_t)(intptr_t)aFeDataStream; //mov
	to32i(dword_4DB1D8) = edx; //mov
	to32i(dword_4DB1DC) = ecx; //mov
	edx = 0x10000; //mov
	esp -= 4; _sub_484498(); esp += 4; //call
	esi = eax; //mov
	edx = (int32_t)(intptr_t)(eax+4); //lea
	to32i(eax) = 0; //mov
	eax = esi; //mov
	sub(edx, esi);
	esp -= 4; _sub_488168(); esp += 4; //call
	eax = esi; //mov
	pop32(esi);
	pop32(ecx);
	pop32(ebx);
}
