#include "../winhttp.h"

//----- (0000000140043C90) ----------------------------------------------------
__int64 __fastcall sub_140043C90(_QWORD* a1)
{
	__int64 v2; // rsi
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	__int64 v5; // rbx
	char* v6; // rdx
	int* v7; // rdi
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int* v10; // [rsp+28h] [rbp-20h]

	if (!qword_140C65898)
		return 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 29504);
	v3 = (_DWORD*)a1[3];
	v4 = dword_140A12138;
	if ((unsigned __int64)v3 < a1[2])
		v4 = v3;
	v5 = 0i64;
	if (v4[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	LABEL_11:
		v6 = (char*)(*(_QWORD*)v4 + 32i64);
		goto LABEL_12;
	}
	v6 = 0i64;
LABEL_12:
	sub_14018F2D0(&v9, v6);
	v7 = v10;
	if (sub_14013A630(v2 + 2496, v10))
	{
		if (*(_WORD*)v7)
		{
			do
				++v5;
			while (*((_WORD*)v7 + v5));
		}
		sub_14001C480(*(_QWORD*)(qword_140C65898 + 29504) + 3680i64, v7, (int*)((char*)v7 + 2 * v5));
		sub_140016480(qword_140C65678);
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65678: using guessed type __int64 qword_140C65678;
// 140C65898: using guessed type __int64 qword_140C65898;

