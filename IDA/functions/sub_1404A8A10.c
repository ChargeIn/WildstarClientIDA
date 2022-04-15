#include "../winhttp.h"

//----- (00000001404A8A10) ----------------------------------------------------
int* __fastcall sub_1404A8A10(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	char v8[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v9; // [rsp+28h] [rbp-50h]
	__int64 v10; // [rsp+30h] [rbp-48h]
	int v11; // [rsp+40h] [rbp-38h] BYREF
	char v12[8]; // [rsp+48h] [rbp-30h] BYREF
	__int64 v13; // [rsp+50h] [rbp-28h]
	int* v14; // [rsp+80h] [rbp+8h] BYREF
	int* v15; // [rsp+90h] [rbp+18h] BYREF

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
		v9 = sub_14018B280(48i64, 0);
		v10 = 0i64;
		*(_BYTE*)v9 = 0;
		*((_QWORD*)v9 + 1) = 0i64;
		*((_QWORD*)v9 + 2) = v9;
		*((_QWORD*)v9 + 3) = v9;
		v11 = *a2;
		sub_14048B2A0((__int64)v12, (__int64)v8);
		v14 = v6;
		sub_1404A8B20(a1, &v15, (__int64*)&v14, &v11);
		v6 = v15;
		sub_140008410((__int64)v12);
		sub_14018B900(v13, 0);
		sub_140008410((__int64)v8);
		sub_14018B900((__int64)v9, 0);
	}
	return v6 + 10;
}
// 1404A8A10: using guessed type char var_58[8];
// 1404A8A10: using guessed type char var_30[8];

