#include "../winhttp.h"

//----- (00000001404604D0) ----------------------------------------------------
__int64 __fastcall sub_1404604D0(float* a1, __int64 a2, __int64 a3, __int64 a4)
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
	int v22; // [rsp+20h] [rbp-68h]

	v4 = dword_140DC2954;
	v5 = 1056964608;
	v6 = a1[381];
	v8 = a1[583];
	if ((dword_140DC2954 & 1) == 0)
	{
		dword_140DC2954 |= 1u;
		v9 = sub_140200220(0x4D5u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 1056964608;
		v4 = dword_140DC2954;
		dword_140DC2958 = v10;
	}
	if ((v4 & 2) == 0)
	{
		dword_140DC2954 = v4 | 2;
		v11 = sub_140200220(0x4D5u);
		if (v11)
			v12 = *(_DWORD*)(v11 + 28);
		else
			v12 = 1056964608;
		v4 = dword_140DC2954;
		dword_140DC295C = v12;
	}
	if ((v4 & 4) == 0)
	{
		dword_140DC2954 = v4 | 4;
		v13 = sub_140200220(0x4D5u);
		if (v13)
			v14 = *(_DWORD*)(v13 + 32);
		else
			v14 = 1056964608;
		v4 = dword_140DC2954;
		dword_140DC2960 = v14;
	}
	if ((v4 & 8) == 0)
	{
		dword_140DC2954 = v4 | 8;
		v15 = sub_140200220(0x4D5u);
		if (v15)
			v16 = *(_DWORD*)(v15 + 36);
		else
			v16 = 1056964608;
		v4 = dword_140DC2954;
		dword_140DC2964 = v16;
	}
	if ((v4 & 0x10) == 0)
	{
		dword_140DC2954 = v4 | 0x10;
		v17 = sub_140200220(0x4D5u);
		if (v17)
			v5 = *(_DWORD*)(v17 + 40);
		v4 = dword_140DC2954;
		dword_140DC2968 = v5;
	}
	if ((v4 & 0x20) == 0)
	{
		dword_140DC2954 = v4 | 0x20;
		v18 = sub_140200220(0x4D5u);
		if (v18)
			v19 = *(_DWORD*)(v18 + 8);
		else
			v19 = 1;
		dword_140DC296C = v19;
	}
	v20 = *((_DWORD*)a1 + 15);
	if (!v20)
		v20 = *((_DWORD*)a1 + 14);
	return sub_140453A80((__int64)a1, a2, v20, a4, v22, v8, v6);
}
// 140460650: variable 'a1' is possibly undefined
// 140460650: variable 'a2' is possibly undefined
// 140460650: variable 'a4' is possibly undefined
// 140460650: variable 'v22' is possibly undefined
// 140DC2954: using guessed type int dword_140DC2954;
// 140DC2958: using guessed type int dword_140DC2958;
// 140DC295C: using guessed type int dword_140DC295C;
// 140DC2960: using guessed type int dword_140DC2960;
// 140DC2964: using guessed type int dword_140DC2964;
// 140DC2968: using guessed type int dword_140DC2968;
// 140DC296C: using guessed type int dword_140DC296C;

