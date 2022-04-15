#include "../winhttp.h"

//----- (00000001400DA340) ----------------------------------------------------
__int64 __fastcall sub_1400DA340(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64* v6; // rdi
	_QWORD* v7; // rbx
	char* v8; // rdx
	_DWORD* v9; // rax
	__int64 v10; // rbx
	_WORD* i; // rdx
	__int64 v12; // rax
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15; // [rsp+28h] [rbp-40h]
	__int64 v16; // [rsp+40h] [rbp-28h] BYREF
	_WORD* v17; // [rsp+48h] [rbp-20h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = (__int64*)sub_1400D66A0(a1, 1u);
	if (v6)
	{
		v7 = *(_QWORD**)(v1 + 400);
		v8 = (char*)sub_14018F0E0(&v14, word_1409D3324)[1];
		v9 = (_DWORD*)(v7[3] + 16i64);
		if ((unsigned __int64)v9 < v7[2] && v9 != dword_140A12138 && *(int*)(v7[3] + 24i64) > 0)
			v8 = (char*)sub_140056BB0(v7, 2u, 0i64);
		sub_14018F2D0(&v16, v8);
		if (v15)
			sub_14018B900(v15, 0);
		v10 = (__int64)v17;
		for (i = v17; *i == 32 || (unsigned __int16)(*i - 9) <= 4u; ++i)
			;
		v12 = *v6;
		if (*i == 60)
			(*(void(__fastcall**)(__int64*))(v12 + 88))(v6);
		else
			(*(void(__fastcall**)(__int64*, _WORD*))(v12 + 80))(v6, v17);
		if (v10)
			sub_14018B900(v10, 0);
	}
	return 0i64;
}
// 1409D3324: using guessed type unsigned __int16 word_1409D3324[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

