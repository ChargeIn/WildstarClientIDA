#include "../winhttp.h"

//----- (00000001404602F0) ----------------------------------------------------
float __fastcall sub_1404602F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v4; // eax
	int v5; // xmm6_4
	float v6; // xmm7_4
	float v8; // xmm8_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm0_4
	__int64 v13; // rax
	int v14; // xmm0_4
	__int64 v15; // rax
	int v16; // xmm0_4
	__int64 v17; // rax
	__int64 v18; // rax
	int v19; // eax
	int v20; // r8d
	float v21; // xmm0_4
	float v22; // xmm6_4
	__int64 v23; // rax
	int v24; // eax
	int v26; // [rsp+20h] [rbp-68h]

	v4 = dword_140DC2938;
	v5 = 1056964608;
	v6 = *(float*)(a1 + 1524);
	v8 = *(float*)(a1 + 2332);
	if ((dword_140DC2938 & 1) == 0)
	{
		dword_140DC2938 |= 1u;
		v9 = sub_140200220(0x4D5u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 1056964608;
		v4 = dword_140DC2938;
		dword_140DC293C = v10;
	}
	if ((v4 & 2) == 0)
	{
		dword_140DC2938 = v4 | 2;
		v11 = sub_140200220(0x4D5u);
		if (v11)
			v12 = *(_DWORD*)(v11 + 28);
		else
			v12 = 1056964608;
		v4 = dword_140DC2938;
		dword_140DC2940 = v12;
	}
	if ((v4 & 4) == 0)
	{
		dword_140DC2938 = v4 | 4;
		v13 = sub_140200220(0x4D5u);
		if (v13)
			v14 = *(_DWORD*)(v13 + 32);
		else
			v14 = 1056964608;
		v4 = dword_140DC2938;
		dword_140DC2944 = v14;
	}
	if ((v4 & 8) == 0)
	{
		dword_140DC2938 = v4 | 8;
		v15 = sub_140200220(0x4D5u);
		if (v15)
			v16 = *(_DWORD*)(v15 + 36);
		else
			v16 = 1056964608;
		v4 = dword_140DC2938;
		dword_140DC2948 = v16;
	}
	if ((v4 & 0x10) == 0)
	{
		dword_140DC2938 = v4 | 0x10;
		v17 = sub_140200220(0x4D5u);
		if (v17)
			v5 = *(_DWORD*)(v17 + 40);
		v4 = dword_140DC2938;
		dword_140DC294C = v5;
	}
	if ((v4 & 0x20) == 0)
	{
		dword_140DC2938 = v4 | 0x20;
		v18 = sub_140200220(0x4D5u);
		if (v18)
			v19 = *(_DWORD*)(v18 + 8);
		else
			v19 = 1;
		dword_140DC2950 = v19;
	}
	v20 = *(_DWORD*)(a1 + 60);
	if (!v20)
		v20 = *(_DWORD*)(a1 + 56);
	LODWORD(v21) = sub_1404539A0(a1, a2, v20, a4, v26, v8, v6).m128_u32[0];
	v22 = *(float*)(a1 + 1516);
	v23 = sub_140200220(0x58u);
	if (v23)
		v24 = *(_DWORD*)(v23 + 4);
	else
		v24 = 500;
	return (float)((float)v24 * 0.001) * (float)(v22 * v21);
}
// 140460470: variable 'a1' is possibly undefined
// 140460470: variable 'a2' is possibly undefined
// 140460470: variable 'a4' is possibly undefined
// 140460470: variable 'v26' is possibly undefined
// 140DC2938: using guessed type int dword_140DC2938;
// 140DC293C: using guessed type int dword_140DC293C;
// 140DC2940: using guessed type int dword_140DC2940;
// 140DC2944: using guessed type int dword_140DC2944;
// 140DC2948: using guessed type int dword_140DC2948;
// 140DC294C: using guessed type int dword_140DC294C;
// 140DC2950: using guessed type int dword_140DC2950;

