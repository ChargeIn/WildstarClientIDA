#include "../winhttp.h"

//----- (0000000140631600) ----------------------------------------------------
int* __fastcall sub_140631600(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	__int64 v8[11]; // [rsp+20h] [rbp-C8h] BYREF
	int v9; // [rsp+78h] [rbp-70h] BYREF
	__int64 v10[12]; // [rsp+80h] [rbp-68h] BYREF
	int* v11; // [rsp+F0h] [rbp+8h] BYREF
	int* v12; // [rsp+100h] [rbp+18h] BYREF

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
		memset(&v8[1], 0, 80);
		sub_1406325E0(v8, 0i64);
		v9 = *a2;
		sub_1406317F0(v10, v8);
		v11 = v6;
		sub_1406323D0(a1, &v12, (__int64*)&v11, &v9);
		v6 = v12;
		sub_140631770(v10);
		sub_140631770(v8);
	}
	return v6 + 10;
}
// 140631600: using guessed type __int64 var_68[12];

