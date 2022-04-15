#include "../winhttp.h"

//----- (000000014011C970) ----------------------------------------------------
__int64 __fastcall sub_14011C970(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r14
	int* v8; // rax
	int* v9; // rdi
	char* v10; // rdx
	_DWORD* v11; // rax
	_DWORD* v12; // rax
	int* v13; // rbp
	char* v14; // rax
	__int64 v15; // rcx
	__int64 v17; // rax
	__int64 v19; // [rsp+20h] [rbp-78h] BYREF
	int* v20; // [rsp+28h] [rbp-70h]
	int* v21; // [rsp+30h] [rbp-68h]
	int* v22; // [rsp+38h] [rbp-60h]
	__int64 v23; // [rsp+40h] [rbp-58h] BYREF
	__int64 v24; // [rsp+48h] [rbp-50h]
	__int64 v25; // [rsp+60h] [rbp-38h] BYREF
	int* v26; // [rsp+68h] [rbp-30h]

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
	v8 = sub_14018B280(16i64, 0);
	v9 = v8;
	v20 = v8;
	v21 = v8;
	v22 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v10 = (char*)sub_14018F0E0(&v23, word_1409D65A4)[1];
	v11 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v11 < a1[2] && v11 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v10 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v25, v10);
	if (v24)
		sub_14018B900(v24, 0);
	v12 = (_DWORD*)a1[3];
	v13 = v26;
	if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || (unsigned int)(v12[2] - 3) > 1)
	{
		while (aXmldoc_0[++v1] != 0)
			;
		if ((2 * v1) >> 1)
		{
			sub_14001C310(&v19, (int*)L"XMLDoc", (int*)&aXmldoc_0[v1]);
			v9 = v20;
		}
		else
		{
			sub_1407DB590(v9, (int*)L"XMLDoc", 0i64);
		}
		v17 = sub_14012A990((__int64)a1, 1);
		if (v17)
			sub_140109200((__int64*)(v7 + 240), v17, v13);
	}
	else
	{
		v14 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v25, v14);
		v15 = (__int64)v9;
		v9 = v26;
		if (v15)
			sub_14018B900(v15, 0);
		sub_140109290((__int64*)(v7 + 240), (WCHAR*)v9, v13);
	}
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 0i64;
}
// 1409D65A4: using guessed type unsigned __int16 word_1409D65A4[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A1E370: using guessed type wchar_t aXmldoc_0[7];
// 140C63650: using guessed type __int64 qword_140C63650;

