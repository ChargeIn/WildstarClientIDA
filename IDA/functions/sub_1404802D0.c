#include "../winhttp.h"

//----- (00000001404802D0) ----------------------------------------------------
int* __fastcall sub_1404802D0(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	int* v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // r8
	char v13[8]; // [rsp+30h] [rbp-48h] BYREF
	int* v14; // [rsp+38h] [rbp-40h]
	int v15; // [rsp+40h] [rbp-38h] BYREF
	char v16[8]; // [rsp+48h] [rbp-30h] BYREF
	int* v17; // [rsp+50h] [rbp-28h]
	__int64 v18; // [rsp+80h] [rbp+8h] BYREF
	int* v19; // [rsp+90h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = (int*)v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == (int*)v2 || *a2 < v6[8])
	{
		v7 = sub_14018B280(128i64, 0);
		*(_QWORD*)v7 = v7;
		*((_QWORD*)v7 + 1) = v7;
		v15 = *a2;
		v8 = v7;
		v14 = v7;
		v9 = sub_14018B280(128i64, 0);
		*(_QWORD*)v9 = v9;
		*((_QWORD*)v9 + 1) = v9;
		v10 = *(_QWORD*)v9;
		v11 = *(_QWORD**)v8;
		v17 = v9;
		v18 = v10;
		sub_140481E00(v10, &v18, v11, v8);
		v18 = (__int64)v6;
		sub_1404815C0(a1, &v19, &v18, &v15);
		v6 = v19;
		sub_1403FE250((__int64)v16);
		sub_14018B900((__int64)v17, 0);
		sub_1403FE250((__int64)v13);
		sub_14018B900((__int64)v8, 0);
	}
	return v6 + 10;
}
// 1404802D0: using guessed type char var_30[8];
// 1404802D0: using guessed type char var_48[8];

