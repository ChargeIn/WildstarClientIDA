#include "../winhttp.h"

//----- (0000000140440A50) ----------------------------------------------------
int* __fastcall sub_140440A50(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	int* v6; // rbx
	int* v7; // rsi
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // r8
	int* v11; // r14
	int* v12; // rdi
	__int64 v13; // rcx
	int* v14; // rdi
	__int64 v15; // rcx
	unsigned int v17[4]; // [rsp+30h] [rbp-38h] BYREF
	int* v18; // [rsp+40h] [rbp-28h]
	__int64 v19; // [rsp+70h] [rbp+8h] BYREF
	int* v20; // [rsp+80h] [rbp+18h] BYREF

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
		v7 = sub_14018B280(32i64, 0);
		*(_QWORD*)v7 = v7;
		*((_QWORD*)v7 + 1) = v7;
		v17[0] = *a2;
		v8 = sub_14018B280(32i64, 0);
		*(_QWORD*)v8 = v8;
		*((_QWORD*)v8 + 1) = v8;
		v9 = *(_QWORD*)v8;
		v10 = *(int**)v7;
		v18 = v8;
		v19 = v9;
		sub_140441830(v9, &v19, v10, v7);
		v19 = (__int64)v6;
		sub_140441080(a1, &v20, &v19, v17);
		v11 = v18;
		v6 = v20;
		v12 = *(int**)v18;
		while (v12 != v11)
		{
			v13 = (__int64)v12;
			v12 = *(int**)v12;
			sub_14018B900(v13, 0);
		}
		*(_QWORD*)v11 = v11;
		*((_QWORD*)v11 + 1) = v11;
		sub_14018B900((__int64)v11, 0);
		v14 = *(int**)v7;
		while (v14 != v7)
		{
			v15 = (__int64)v14;
			v14 = *(int**)v14;
			sub_14018B900(v15, 0);
		}
		*(_QWORD*)v7 = v7;
		*((_QWORD*)v7 + 1) = v7;
		sub_14018B900((__int64)v7, 0);
	}
	return v6 + 10;
}
// 140440A50: using guessed type unsigned int var_38[4];

