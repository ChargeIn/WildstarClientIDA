#include "../winhttp.h"

//----- (00000001406EAD80) ----------------------------------------------------
__int64 __fastcall sub_1406EAD80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r11
	unsigned __int64 v4; // r10
	__int64 v5; // rdi
	unsigned int v6; // edx
	__int64 v7; // r9
	__int64 v8; // r8
	_QWORD* v9; // rbx
	char* v10; // rdx
	_DWORD* v11; // rax
	__int64 v12; // rdx
	__m128i* v13; // rbx
	__int64 v15; // [rsp+30h] [rbp-48h] BYREF
	__int64 v16; // [rsp+38h] [rbp-40h]
	__int64 v17; // [rsp+50h] [rbp-28h] BYREF
	__m128i* v18; // [rsp+58h] [rbp-20h]

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = v2;
	v6 = 0;
	if (v4)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v4)
				goto LABEL_7;
		}
		v3 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_7:
	v9 = *(_QWORD**)(v3 + 400);
	v10 = (char*)sub_14018F0E0(&v15, 0i64)[1];
	v11 = (_DWORD*)(v9[3] + 32i64);
	if ((unsigned __int64)v11 < v9[2] && v11 != dword_140A12138 && *(int*)(v9[3] + 40i64) > 0)
		v10 = (char*)sub_140056BB0(v9, 3u, 0i64);
	sub_14018F2D0(&v17, v10);
	if (v16)
		sub_14018B900(v16, 0);
	v12 = *(_QWORD*)(v5 + 32);
	v13 = v18;
	if (v12)
		sub_140109710((__int64*)(v5 + 1336), v12 + 240, v18, 0);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

