#include "../winhttp.h"

//----- (000000014011CD50) ----------------------------------------------------
__int64 __fastcall sub_14011CD50(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rsi
	char* v7; // rax
	_DWORD* v8; // rax
	_DWORD* v9; // rdx
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__m128i* v12; // [rsp+28h] [rbp-20h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
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
	v7 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v11, v7);
	if ((int)sub_140152230(*(_QWORD*)(v6 + 376), v12, 1) >= 0)
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 1;
		v9[2] = 1;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	if (v12)
		sub_14018B900((__int64)v12, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

