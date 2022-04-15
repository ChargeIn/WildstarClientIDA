#include "../winhttp.h"

//----- (00000001400DB060) ----------------------------------------------------
__int64 __fastcall sub_1400DB060(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rdi
	_QWORD* v7; // rcx
	_DWORD* v8; // rax
	double v9; // xmm0_8
	_QWORD* v10; // rcx
	float v11; // xmm6_4
	_DWORD* v12; // rax
	double v13; // xmm0_8
	float v14; // xmm2_4

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
	if (v6)
	{
		v7 = *(_QWORD**)(v1 + 400);
		v8 = (_DWORD*)(v7[3] + 16i64);
		if ((unsigned __int64)v8 >= v7[2] || v8 == dword_140A12138 || *(int*)(v7[3] + 24i64) <= 0)
			v9 = 1.0;
		else
			v9 = sub_140056C40(v7, 2u);
		v10 = *(_QWORD**)(v1 + 400);
		v11 = v9;
		v12 = (_DWORD*)(v10[3] + 32i64);
		if ((unsigned __int64)v12 >= v10[2] || v12 == dword_140A12138 || *(int*)(v10[3] + 40i64) <= 0)
			v13 = -1.0;
		else
			v13 = sub_140056C40(v10, 3u);
		v14 = v13;
		if (v14 <= 0.0)
			v14 = -1.0;
		sub_1400CA960(v6, v11, v14);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

