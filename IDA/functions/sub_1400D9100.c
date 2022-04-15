#include "../winhttp.h"

//----- (00000001400D9100) ----------------------------------------------------
__int64 __fastcall sub_1400D9100(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 result; // rax
	__int64 v10; // rsi
	__int64 v11; // r14
	_QWORD* v12; // rcx
	float v13; // xmm6_4
	_DWORD* v14; // rax
	double v15; // xmm0_8
	float v16; // xmm7_4
	int v17; // ebx
	int* v18; // rax

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	result = sub_1400D66A0(a1, 1u);
	v10 = result;
	if (result)
	{
		v11 = sub_14014EBC0((__int64)a1, 2);
		if (!v11)
			sub_140056570(a1, 2u, "must be a window location");
		v12 = *(_QWORD**)(v8 + 16);
		v13 = 4.0;
		v14 = (_DWORD*)(v12[3] + 32i64);
		if ((unsigned __int64)v14 >= v12[2] || v14 == dword_140A12138 || *(int*)(v12[3] + 40i64) <= 0)
			v15 = 0.0;
		else
			v15 = sub_140056C40(v12, 3u);
		v16 = v15;
		v17 = sub_1400F26A0(v8, 4);
		if (v17 >= 26)
			v17 = 1;
		if (v16 > 0.0)
			v13 = 1.0 / v16;
		if (!*(_QWORD*)(v10 + 440))
		{
			v18 = sub_14018B280(256i64, 0);
			if (v18)
				v1 = sub_1400C5220((__int64)v18);
			*(_QWORD*)(v10 + 440) = v1;
		}
		sub_1400C5310(*(_QWORD*)(v10 + 440), v11, v10 + 64, v13, v17);
		return 0i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

