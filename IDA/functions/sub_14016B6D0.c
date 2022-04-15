#include "../winhttp.h"

//----- (000000014016B6D0) ----------------------------------------------------
__int64 __fastcall sub_14016B6D0(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rdi
	_QWORD* v8; // rbx
	char* v9; // rdx
	_DWORD* v10; // rax
	__int64 v11; // rdx
	__m128i* v12; // rbx
	__int64 v14; // [rsp+30h] [rbp-48h] BYREF
	__int64 v15; // [rsp+38h] [rbp-40h]
	__int64 v16; // [rsp+50h] [rbp-28h] BYREF
	__m128i* v17; // [rsp+58h] [rbp-20h]

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
	v6 = sub_1400D66A0(a1, 1u);
	v7 = v6;
	if (v6 && (*(_BYTE*)(v6 + 432) & 8) != 0)
	{
		v8 = *(_QWORD**)(v1 + 400);
		v9 = (char*)sub_14018F0E0(&v14, word_1409DCD54)[1];
		v10 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && *(int*)(v8[3] + 24i64) > 0)
			v9 = (char*)sub_140056BB0(v8, 2u, 0i64);
		sub_14018F2D0(&v16, v9);
		if (v15)
			sub_14018B900(v15, 0);
		v11 = *(_QWORD*)(v7 + 32);
		v12 = v17;
		if (v11)
			sub_140109710((__int64*)(v7 + 1072), v11 + 240, v17, 0);
		if (v12)
			sub_14018B900((__int64)v12, 0);
	}
	return 0i64;
}
// 1409DCD54: using guessed type unsigned __int16 word_1409DCD54[48];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

