#include "../winhttp.h"

//----- (000000014016B380) ----------------------------------------------------
__int64 __fastcall sub_14016B380(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	float* v7; // rbx
	_QWORD* v8; // rcx
	double v9; // xmm6_8
	_DWORD* v10; // rax
	double v11; // xmm0_8
	_QWORD* v12; // rcx
	float v13; // xmm7_4
	_DWORD* v14; // rax
	float v15; // xmm5_4
	float v16; // xmm3_4

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400D66A0(a1, 1u);
	v7 = (float*)v6;
	if (v6 && (*(_BYTE*)(v6 + 432) & 8) != 0)
	{
		v8 = *(_QWORD**)(v1 + 400);
		v9 = 0.0;
		v10 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v10 >= v8[2] || v10 == dword_140A12138 || *(int*)(v8[3] + 24i64) <= 0)
			v11 = 0.0;
		else
			v11 = sub_140056C40(v8, 2u);
		v12 = *(_QWORD**)(v1 + 400);
		v13 = v11;
		v14 = (_DWORD*)(v12[3] + 32i64);
		if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && *(int*)(v12[3] + 40i64) > 0)
			v9 = sub_140056C40(v12, 3u);
		v15 = v9;
		if (v15 <= 0.0)
		{
			v16 = fmaxf(0.0, fminf(v13, v7[329]));
			v7[330] = v16;
			v7[328] = v16;
		}
		else
		{
			v7[331] = v15;
			v7[330] = fmaxf(0.0, fminf(v13, v7[329]));
		}
		sub_1401689B0((__int64)v7);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

