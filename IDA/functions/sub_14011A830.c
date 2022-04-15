#include "../winhttp.h"

//----- (000000014011A830) ----------------------------------------------------
__int64 __fastcall sub_14011A830(_QWORD* a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	_DWORD* v7; // rcx
	char* v8; // rdx
	int* v9; // rdi
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	int* v12; // [rsp+28h] [rbp-20h]
	int* v13; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0i64;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v3 = (unsigned int)(v3 + 1);
			v5 = (unsigned int)v3;
			if ((unsigned int)v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v3);
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
	sub_14018F2D0(&v11, v8);
	v9 = v12;
	if (v12 == v13)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		sub_1400EAE30(v6, (__int64)a1, v12);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

