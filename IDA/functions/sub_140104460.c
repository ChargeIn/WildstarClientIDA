#include "../winhttp.h"

//----- (0000000140104460) ----------------------------------------------------
int* __fastcall sub_140104460(_QWORD* a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rbx
	int* result; // rax
	int* v7; // rdx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v4 = sub_14018B280(184i64, 0);
	if (v4)
		v5 = sub_140104E80((__int64)v4, (__int64)a1);
	else
		v5 = 0i64;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 40i64))(v5, a2);
	result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 56i64))(v5);
	v7 = (int*)a1[9];
	v8 = v5;
	if (v7 == (int*)a1[10])
		return sub_1400B9430(a1 + 7, v7, &v8);
	if (v7)
		*(_QWORD*)v7 = v5;
	a1[9] += 8i64;
	return result;
}

