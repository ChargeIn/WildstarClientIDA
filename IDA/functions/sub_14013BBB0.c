#include "../winhttp.h"

//----- (000000014013BBB0) ----------------------------------------------------
__int64 __fastcall sub_14013BBB0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	_QWORD* v6; // rbp
	_DWORD* v7; // rcx
	char* v8; // rdx
	int* v9; // rsi
	_QWORD* v10; // rax
	__int64 v11; // rbx
	_QWORD* v12; // rdi
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	int* v15; // [rsp+28h] [rbp-20h]

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
		v6 = *(_QWORD**)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = dword_140A12138;
	if (a1[3] < a1[2])
		v7 = (_DWORD*)a1[3];
	if (v7[2] == 4)
		goto LABEL_16;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v7))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = dword_140A12138;
		if (a1[3] < a1[2])
			v7 = (_DWORD*)a1[3];
	LABEL_16:
		v8 = (char*)(*(_QWORD*)v7 + 32i64);
		goto LABEL_17;
	}
	v8 = 0i64;
LABEL_17:
	sub_14018F2D0(&v14, v8);
	v9 = v15;
	v10 = (_QWORD*)sub_14013A630((__int64)(v6 + 312), v15);
	v11 = (__int64)v10;
	if (v10 && (int)((__int64)(v10[65] - v10[64]) >> 5) > 0)
	{
		v12 = v10 + 35;
		if (v10[37])
		{
			sub_140044CA0((__int64)(v10 + 35), *(_QWORD**)(v10[36] + 8i64));
			*(_QWORD*)(v12[1] + 16i64) = v12[1];
			*(_QWORD*)(v12[1] + 8i64) = 0i64;
			*(_QWORD*)(v12[1] + 24i64) = v12[1];
			v12[2] = 0i64;
		}
		*(_DWORD*)(v11 + 268) = 0;
		sub_1400ED370(v6, v11);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

