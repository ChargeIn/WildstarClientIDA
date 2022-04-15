#include "../winhttp.h"

//----- (000000014013C9C0) ----------------------------------------------------
__int64 __fastcall sub_14013C9C0(_QWORD* a1)
{
	char* v1; // rdi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	_DWORD* v8; // rax
	unsigned __int64 v9; // rdx
	__int64 v10; // rsi
	__int64 v11; // rsi
	_DWORD* v12; // rcx
	char* v13; // rdx
	_DWORD* v14; // rcx
	int* v15; // rbx
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	int* v18; // [rsp+28h] [rbp-20h]

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
	v8 = (_DWORD*)a1[3];
	v9 = a1[2];
	v10 = v7 + 2496;
	if ((unsigned __int64)v8 < v9 && v8 != dword_140A12138 && v8[2] == 5)
	{
		v11 = sub_14013A580(v7 + 2496, (__int64)a1, 1);
		goto LABEL_23;
	}
	v12 = dword_140A12138;
	if ((unsigned __int64)v8 < v9)
		v12 = (_DWORD*)a1[3];
	if (v12[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v12))
		{
			v13 = 0i64;
			goto LABEL_21;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v12 = dword_140A12138;
		if (a1[3] < a1[2])
			v12 = (_DWORD*)a1[3];
	}
	v13 = (char*)(*(_QWORD*)v12 + 32i64);
LABEL_21:
	sub_14018F2D0(&v17, v13);
	v11 = sub_14013A630(v10, v18);
	if (v18)
		sub_14018B900((__int64)v18, 0);
LABEL_23:
	if (!v11)
		return 0i64;
	v14 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v14 = (_DWORD*)(a1[3] + 16i64);
	if (v14[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v14))
			goto LABEL_33;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v14 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v14 = (_DWORD*)(a1[3] + 16i64);
	}
	v1 = (char*)(*(_QWORD*)v14 + 32i64);
LABEL_33:
	sub_14018F2D0(&v17, v1);
	v15 = v18;
	sub_140137280(v11, v18);
	if (v15)
		sub_14018B900((__int64)v15, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

