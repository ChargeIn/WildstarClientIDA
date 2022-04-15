#include "../winhttp.h"

//----- (000000014001DCF0) ----------------------------------------------------
int* __fastcall sub_14001DCF0(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	int v7; // r8d
	int v8; // edx
	int v9; // ecx
	char v11[8]; // [rsp+20h] [rbp-50h] BYREF
	int* v12; // [rsp+28h] [rbp-48h]
	__int64 v13; // [rsp+30h] [rbp-40h]
	__int64 v14; // [rsp+40h] [rbp-30h] BYREF
	char v15[8]; // [rsp+48h] [rbp-28h] BYREF
	__int64 v16; // [rsp+50h] [rbp-20h]
	__int64 v17; // [rsp+58h] [rbp-18h]
	int* v18; // [rsp+90h] [rbp+20h] BYREF
	int* v19; // [rsp+A0h] [rbp+30h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = (int*)v2;
	if (v5)
	{
		v7 = *a2;
		do
		{
			v8 = *(_DWORD*)(v5 + 32);
			if (v8 < v7 || v7 >= v8 && *(_DWORD*)(v5 + 36) < a2[1])
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v6 = (int*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v6 == (int*)v2 || (v9 = v6[8], *a2 < v9) || v9 >= *a2 && a2[1] < v6[9])
	{
		v12 = sub_14018B280(72i64, 0);
		v13 = 0i64;
		*(_BYTE*)v12 = 0;
		*((_QWORD*)v12 + 1) = 0i64;
		*((_QWORD*)v12 + 2) = v12;
		*((_QWORD*)v12 + 3) = v12;
		v14 = *(_QWORD*)a2;
		sub_14001E1E0((__int64)v15, (__int64)v11);
		v18 = v6;
		sub_14001E650(a1, &v19, (__int64*)&v18, (int*)&v14);
		v6 = v19;
		if (v17)
		{
			sub_14001EE00((__int64)v15, *(_QWORD**)(v16 + 8));
			*(_QWORD*)(v16 + 16) = v16;
			*(_QWORD*)(v16 + 8) = 0i64;
			*(_QWORD*)(v16 + 24) = v16;
			v17 = 0i64;
		}
		sub_14018B900(v16, 0);
		if (v13)
		{
			sub_14001EE00((__int64)v11, *((_QWORD**)v12 + 1));
			*((_QWORD*)v12 + 2) = v12;
			*((_QWORD*)v12 + 1) = 0i64;
			*((_QWORD*)v12 + 3) = v12;
			v13 = 0i64;
		}
		sub_14018B900((__int64)v12, 0);
	}
	return v6 + 10;
}
// 14001DCF0: using guessed type char var_50[8];
// 14001DCF0: using guessed type char var_28[8];

