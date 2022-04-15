#include "../winhttp.h"

//----- (000000014001DE70) ----------------------------------------------------
int* __fastcall sub_14001DE70(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	char v8[8]; // [rsp+20h] [rbp-50h] BYREF
	int* v9; // [rsp+28h] [rbp-48h]
	__int64 v10; // [rsp+30h] [rbp-40h]
	int v11; // [rsp+40h] [rbp-30h] BYREF
	char v12[8]; // [rsp+48h] [rbp-28h] BYREF
	__int64 v13; // [rsp+50h] [rbp-20h]
	__int64 v14; // [rsp+58h] [rbp-18h]
	int* v15; // [rsp+90h] [rbp+20h] BYREF
	int* v16; // [rsp+A0h] [rbp+30h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = (int*)v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < (unsigned int)*a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == (int*)v2 || *a2 < (unsigned int)v6[8])
	{
		v9 = sub_14018B280(56i64, 0);
		v10 = 0i64;
		*(_BYTE*)v9 = 0;
		*((_QWORD*)v9 + 1) = 0i64;
		*((_QWORD*)v9 + 2) = v9;
		*((_QWORD*)v9 + 3) = v9;
		v11 = *a2;
		sub_14001E2B0((__int64)v12, (__int64)v8);
		v15 = v6;
		sub_14001EEA0(a1, &v16, (__int64*)&v15, &v11);
		v6 = v16;
		if (v14)
		{
			sub_14001EA50((__int64)v12, *(_QWORD**)(v13 + 8));
			*(_QWORD*)(v13 + 16) = v13;
			*(_QWORD*)(v13 + 8) = 0i64;
			*(_QWORD*)(v13 + 24) = v13;
			v14 = 0i64;
		}
		sub_14018B900(v13, 0);
		if (v10)
		{
			sub_14001EA50((__int64)v8, *((_QWORD**)v9 + 1));
			*((_QWORD*)v9 + 2) = v9;
			*((_QWORD*)v9 + 1) = 0i64;
			*((_QWORD*)v9 + 3) = v9;
			v10 = 0i64;
		}
		sub_14018B900((__int64)v9, 0);
	}
	return v6 + 10;
}
// 14001DE70: using guessed type char var_50[8];
// 14001DE70: using guessed type char var_28[8];

