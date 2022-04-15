#include "../winhttp.h"

//----- (000000014011F020) ----------------------------------------------------
__int64 __fastcall sub_14011F020(_QWORD* a1)
{
	int v2; // ebp
	char* v3; // rdx
	_DWORD* v4; // rax
	_DWORD* v5; // rdi
	_DWORD* v6; // rax
	double v7; // xmm0_8
	__int64 v8; // rsi
	_DWORD* v9; // rax
	float v10; // xmm6_4
	int v11; // r10d
	unsigned __int64 v12; // rcx
	bool v13; // r9
	_DWORD* v14; // rax
	int v15; // eax
	int* v16; // rdi
	unsigned int v17; // ecx
	unsigned __int64 v18; // rdx
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v22; // [rsp+30h] [rbp-58h] BYREF
	__int64 v23; // [rsp+38h] [rbp-50h]
	__int64 v24; // [rsp+50h] [rbp-38h] BYREF
	int* v25; // [rsp+58h] [rbp-30h]

	v2 = 1;
	v3 = (char*)sub_14018F0E0(&v22, word_1409D687C)[1];
	v4 = (_DWORD*)a1[3];
	v5 = dword_140A12138;
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && (int)v4[2] > 0)
		v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v24, v3);
	if (v23)
		sub_14018B900(v23, 0);
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 0.0;
	else
		v7 = sub_140056C40(a1, 2u);
	v8 = 0i64;
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v11 = 0;
	else
		v11 = sub_140056D60(a1, 3u);
	v12 = a1[2];
	v13 = 1;
	v14 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v14 < v12 && v14 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 1)
	{
		if ((unsigned __int64)v14 < v12)
			v5 = (_DWORD*)(a1[3] + 48i64);
		v15 = v5[2];
		if (!v15 || v15 == 1 && !*v5)
			v2 = 0;
		v13 = v2 != 0;
	}
	v16 = v25;
	if (*(_WORD*)v25)
	{
		v17 = 0;
		v18 = *(_QWORD*)(qword_140C63650 + 768);
		if (v18)
		{
			v19 = *(_QWORD*)(qword_140C63650 + 760);
			v20 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v19 + 8 * v20) + 400i64) != a1)
			{
				v20 = ++v17;
				if (v17 >= v18)
					goto LABEL_34;
			}
			v8 = *(_QWORD*)(v19 + 8i64 * v17);
		}
	LABEL_34:
		v10 = v7;
		sub_14014E400(v8 + 2648, v25, v10, v11, v13);
	}
	sub_14018B900((__int64)v16, 0);
	return 0i64;
}
// 1409D687C: using guessed type unsigned __int16 word_1409D687C[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

