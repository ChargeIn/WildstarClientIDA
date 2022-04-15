#include "../winhttp.h"

//----- (000000014016B140) ----------------------------------------------------
__int64 __fastcall sub_14016B140(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rbx
	_QWORD* v8; // rcx
	_DWORD* v9; // rax
	double v10; // xmm0_8
	float v11; // xmm0_4

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
	v7 = v6;
	if (v6 && (*(_BYTE*)(v6 + 432) & 8) != 0)
	{
		v8 = *(_QWORD**)(v1 + 400);
		v9 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v9 >= v8[2] || v9 == dword_140A12138 || *(int*)(v8[3] + 24i64) <= 0)
			v10 = 0.0;
		else
			v10 = sub_140056C40(v8, 2u);
		v11 = v10;
		*(float*)(v7 + 1332) = v11 * 0.017453292;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

