#include "../winhttp.h"

//----- (0000000140464930) ----------------------------------------------------
float __fastcall sub_140464930(float* a1, int a2)
{
	int v2; // eax
	int v3; // xmm6_4
	__int64 v6; // rax
	int v7; // xmm0_4
	__int64 v8; // rax
	int v9; // xmm6_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	double v13; // xmm0_8
	float v14; // xmm2_4
	int v15; // xmm0_4
	int v16; // xmm1_4

	v2 = dword_140DC2D44;
	v3 = 1051931443;
	if ((dword_140DC2D44 & 1) == 0)
	{
		dword_140DC2D44 |= 1u;
		v6 = sub_140200220(0x47Au);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1051931443;
		v2 = dword_140DC2D44;
		dword_140DC2D48 = v7;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC2D44 = v2 | 2;
		v8 = sub_140200220(0x47Bu);
		if (v8)
			v3 = *(_DWORD*)(v8 + 24);
		v2 = dword_140DC2D44;
		dword_140DC2D4C = v3;
	}
	v9 = 1065353216;
	if ((v2 & 4) == 0)
	{
		dword_140DC2D44 = v2 | 4;
		v10 = sub_140200220(0x47Cu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 24);
		else
			v11 = 1065353216;
		v2 = dword_140DC2D44;
		dword_140DC2D50 = v11;
	}
	if ((v2 & 8) == 0)
	{
		dword_140DC2D44 = v2 | 8;
		v12 = sub_140200220(0x47Cu);
		if (v12)
			v9 = *(_DWORD*)(v12 + 28);
		dword_140DC2D54 = v9;
	}
	v13 = (*(double(__fastcall**)(float*, __int64))(*(_QWORD*)a1 + 168i64))(a1, 1i64);
	v14 = *(float*)&v13;
	if (a2)
	{
		v15 = dword_140DC2D54;
		v16 = dword_140DC2D4C;
	}
	else
	{
		v15 = dword_140DC2D50;
		v16 = dword_140DC2D48;
	}
	return (float)((float)(*(float*)&v15 - *(float*)&v16) - (float)(*(float*)&v16 * v14)) - a1[703];
}
// 140DC2D44: using guessed type int dword_140DC2D44;
// 140DC2D48: using guessed type int dword_140DC2D48;
// 140DC2D4C: using guessed type int dword_140DC2D4C;
// 140DC2D50: using guessed type int dword_140DC2D50;
// 140DC2D54: using guessed type int dword_140DC2D54;

