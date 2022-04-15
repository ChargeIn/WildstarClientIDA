#include "../winhttp.h"

//----- (0000000140512010) ----------------------------------------------------
__int64 __fastcall sub_140512010(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rbx
	char* v7; // rdx
	_DWORD* v8; // rax
	int* v9; // rbx
	__int64 v11; // [rsp+30h] [rbp-48h] BYREF
	__int64 v12; // [rsp+38h] [rbp-40h]
	__int64 v13; // [rsp+50h] [rbp-28h] BYREF
	int* v14; // [rsp+58h] [rbp-20h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	if (!qword_140C658A0)
		return 0i64;
	v6 = *(_QWORD**)(v5 + 400);
	v7 = (char*)sub_14018F0E0(&v11, 0i64)[1];
	v8 = (_DWORD*)v6[3];
	if ((unsigned __int64)v8 < v6[2] && v8 != dword_140A12138 && (int)v8[2] > 0)
		v7 = (char*)sub_140056BB0(v6, 1u, 0i64);
	sub_14018F2D0(&v13, v7);
	if (v12)
		sub_14018B900(v12, 0);
	v9 = v14;
	sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v14, 0, 0i64);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C658A0: using guessed type __int64 qword_140C658A0;

