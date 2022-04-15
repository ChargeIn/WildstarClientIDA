#include "../winhttp.h"

//----- (000000014011AAC0) ----------------------------------------------------
__int64 __fastcall sub_14011AAC0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	_DWORD* v7; // rcx
	char* v8; // rdx
	_WORD* v9; // rdi
	__int64 v10; // rax
	unsigned int v11; // ebx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	_WORD* v14; // [rsp+28h] [rbp-20h]

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
	v7 = dword_140A12138;
	if (a1[3] < a1[2])
		v7 = (_DWORD*)a1[3];
	if (v7[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v7))
		{
			v8 = 0i64;
			goto LABEL_17;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = dword_140A12138;
		if (a1[3] < a1[2])
			v7 = (_DWORD*)a1[3];
	}
	v8 = (char*)(*(_QWORD*)v7 + 32i64);
LABEL_17:
	sub_14018F2D0(&v13, v8);
	v9 = v14;
	v10 = sub_1400E8FA0(v6, v14);
	if (v10)
	{
		v11 = sub_140156DC0(v10, a1);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		v11 = 1;
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return v11;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

