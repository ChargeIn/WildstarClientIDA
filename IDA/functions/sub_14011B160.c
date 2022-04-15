#include "../winhttp.h"

//----- (000000014011B160) ----------------------------------------------------
__int64 __fastcall sub_14011B160(__int64 a1)
{
	_QWORD* v1; // rsi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	int* v7; // rbx
	int* v8; // rbp
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rax
	int v11; // r14d
	_DWORD* v12; // rcx
	int* v13; // rdi
	int* v14; // r9
	int* v15; // rdi
	__int64 v17; // [rsp+30h] [rbp-48h] BYREF
	int* v18; // [rsp+38h] [rbp-40h]
	int* v19; // [rsp+40h] [rbp-38h]
	__int64 v20; // [rsp+50h] [rbp-28h] BYREF
	int* v21; // [rsp+58h] [rbp-20h]
	int* v22; // [rsp+60h] [rbp-18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD**)(v5 + 8i64 * v4);
	}
LABEL_7:
	sub_1400F2540((__int64)(v1 + 48), &v17, 1);
	sub_1400F2540((__int64)(v1 + 48), &v20, 2);
	v7 = v18;
	v8 = v21;
	if (v19 != v18 && v22 != v21)
	{
		v9 = *(_QWORD*)(a1 + 16);
		v10 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
		v11 = -2;
		if ((unsigned __int64)v10 < v9)
		{
			v12 = dword_140A12138;
			if (v10 != dword_140A12138 && *(_DWORD*)(*(_QWORD*)(a1 + 24) + 40i64) == 5)
			{
				if ((unsigned __int64)v10 < v9)
					v12 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
				*(_QWORD*)v9 = *(_QWORD*)v12;
				*(_DWORD*)(v9 + 8) = v12[2];
				*(_QWORD*)(a1 + 16) += 16i64;
				v11 = sub_1400578C0(a1);
			}
		}
		v13 = *(int**)(qword_140C63650 + 784);
		if (v7)
		{
			sub_1400E2DB0(&v20, v7);
			v14 = v13;
			v15 = v21;
			sub_1400EB7D0(v1, v21, v8, v14, v11);
			if (v15)
				sub_14018B900((__int64)v15, 0);
		}
	}
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

