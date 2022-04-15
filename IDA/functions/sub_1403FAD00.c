#include "../winhttp.h"

//----- (00000001403FAD00) ----------------------------------------------------
int* __fastcall sub_1403FAD00(_QWORD* a1, __int64* a2)
{
	int* v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int* v8; // rdi
	__int64 v10[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+30h] [rbp-28h] BYREF
	__int64 v12; // [rsp+38h] [rbp-20h]
	__int64 v13; // [rsp+40h] [rbp-18h]
	__int64 v14; // [rsp+48h] [rbp-10h]

	v4 = sub_14018B280(16i64, 0);
	v5 = (__int64)v4;
	if (v4)
		*(_WORD*)v4 = 0;
	v6 = *a2;
	v12 = 0i64;
	v13 = 0i64;
	v10[0] = v6;
	v7 = a2[1];
	v14 = 0i64;
	v10[1] = v7;
	sub_14001C1B0(&v11, v4, (__int64)v4);
	v8 = sub_1403FBED0(a1, (unsigned int*)v10) + 4;
	if (v12)
		sub_14018B900(v12, 0);
	if (v5)
		sub_14018B900(v5, 0);
	return v8;
}

