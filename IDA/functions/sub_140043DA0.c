#include "../winhttp.h"

//----- (0000000140043DA0) ----------------------------------------------------
__int64 __fastcall sub_140043DA0(_QWORD* a1)
{
	__int64 v2; // r14
	_DWORD* v3; // rax
	_DWORD* v4; // rsi
	_DWORD* v5; // rcx
	int v6; // edi
	char* v7; // rdx
	__int64 v8; // rdx
	int v9; // eax
	BOOL v10; // eax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int* v13; // [rsp+28h] [rbp-20h]

	if (!qword_140C65898)
		return 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 29504);
	v3 = (_DWORD*)a1[3];
	v4 = dword_140A12138;
	v5 = dword_140A12138;
	if ((unsigned __int64)v3 < a1[2])
		v5 = v3;
	v6 = 0;
	if (v5[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v5))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = dword_140A12138;
		if (a1[3] < a1[2])
			v5 = (_DWORD*)a1[3];
	LABEL_11:
		v7 = (char*)(*(_QWORD*)v5 + 32i64);
		goto LABEL_12;
	}
	v7 = 0i64;
LABEL_12:
	sub_14018F2D0(&v12, v7);
	v8 = sub_14013A630(v2 + 2496, v13);
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v9 = v4[2];
	v10 = v9 && (v9 != 1 || *v4);
	if (v8)
	{
		LOBYTE(v6) = v10;
		*(_DWORD*)(v8 + 268) = v6;
		sub_1400437C0();
	}
	if (v13)
		sub_14018B900((__int64)v13, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

