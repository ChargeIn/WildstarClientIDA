#include "../winhttp.h"

//----- (0000000140120EF0) ----------------------------------------------------
__int64 __fastcall sub_140120EF0(_QWORD* a1)
{
	__int64 v2; // rsi
	char* v3; // rax
	double v4; // xmm7_8
	float v5; // xmm8_4
	double v6; // xmm0_8
	_DWORD* v7; // rax
	float v8; // xmm9_4
	double v9; // xmm0_8
	unsigned int v10; // edi
	_DWORD* v11; // rax
	int v12; // r9d
	unsigned int v13; // ecx
	unsigned __int64 v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rbp
	__int64 v19; // rax
	__int64 v20; // rsi
	float v22; // [rsp+30h] [rbp-88h]
	__int64 v23; // [rsp+50h] [rbp-68h] BYREF
	__int64 v24; // [rsp+58h] [rbp-60h]

	v2 = sub_1400D66A0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v23, v3);
	HIDWORD(v4) = 0;
	*(float*)&v4 = sub_140056C40(a1, 3u);
	v5 = sub_140056C40(a1, 4u);
	v6 = sub_140056C40(a1, 5u);
	v7 = (_DWORD*)(a1[3] + 80i64);
	v8 = v6;
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 88i64) <= 0)
		v9 = 1.0;
	else
		v9 = sub_140056C40(a1, 6u);
	v10 = 0;
	v11 = (_DWORD*)(a1[3] + 96i64);
	if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || *(int*)(a1[3] + 104i64) <= 0)
		v12 = 0;
	else
		v12 = sub_140056D60(a1, 7u);
	v13 = 0;
	v14 = *(_QWORD*)(qword_140C63650 + 768);
	if (v14)
	{
		v15 = *(_QWORD*)(qword_140C63650 + 760);
		v16 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v15 + 8 * v16) + 400i64) != a1)
		{
			v16 = ++v13;
			if (v13 >= v14)
				goto LABEL_15;
		}
		v17 = *(_QWORD*)(v15 + 8i64 * v13);
	}
	else
	{
	LABEL_15:
		v17 = 0i64;
	}
	v18 = v24;
	v22 = v9;
	v19 = sub_140124290(v17, v2, v24, v4, v5, v8, v22, v12, -2, -2);
	v20 = v19;
	if (v19)
	{
		*(_DWORD*)(v19 + 1136) = 1;
		sub_1400D62A0(a1, v19);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		v10 = 1;
	}
	if (v18)
		sub_14018B900(v18, 0);
	return v10;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

