#include "../winhttp.h"

//----- (000000014011A5F0) ----------------------------------------------------
__int64 __fastcall sub_14011A5F0(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	_QWORD* v7; // rdi
	char* v8; // rdx
	_DWORD* v9; // rax
	int* v10; // rdi
	_DWORD* v11; // rax
	_DWORD* v12; // rdx
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	int* v15; // [rsp+28h] [rbp-40h]
	int* v16; // [rsp+30h] [rbp-38h]
	__int64 v17; // [rsp+40h] [rbp-28h] BYREF
	__int64 v18; // [rsp+48h] [rbp-20h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = *(_QWORD**)(v6 + 400);
	v8 = (char*)sub_14018F0E0(&v17, 0i64)[1];
	v9 = (_DWORD*)v7[3];
	if ((unsigned __int64)v9 < v7[2] && v9 != dword_140A12138 && (int)v9[2] > 0)
		v8 = (char*)sub_140056BB0(v7, 1u, 0i64);
	sub_14018F2D0(&v14, v8);
	if (v18)
		sub_14018B900(v18, 0);
	v10 = v15;
	if (v15 == v16 || !sub_140151C50(v6 + 2584, v15))
	{
		v11 = *(_DWORD**)(a1 + 16);
		*v11 = 0;
		v11[2] = 1;
	}
	else
	{
		v12 = *(_DWORD**)(a1 + 16);
		*v12 = 1;
		v12[2] = 1;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

