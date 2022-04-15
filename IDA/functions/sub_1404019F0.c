#include "../winhttp.h"

//----- (00000001404019F0) ----------------------------------------------------
void __fastcall sub_1404019F0(__int64* a1)
{
	__int64 i; // rcx
	_QWORD* v3; // rdx
	__int64 j; // rcx
	_QWORD* v5; // rdx
	__int64 v6; // rcx
	int v7; // edi
	__int64* v8; // rbx
	int k; // esi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64* v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx

	for (i = a1[36]; i; i = a1[36])
	{
		if (*(_QWORD*)i)
			**(_QWORD**)i = *(_QWORD*)(i + 8);
		v3 = *(_QWORD**)(i + 8);
		if (v3)
			*v3 = *(_QWORD*)i;
		*(_QWORD*)i = 0i64;
		*(_QWORD*)(i + 8) = 0i64;
		sub_14018B900(i, 0);
	}
	for (j = a1[37]; j; j = a1[37])
	{
		if (*(_QWORD*)j)
			**(_QWORD**)j = *(_QWORD*)(j + 8);
		v5 = *(_QWORD**)(j + 8);
		if (v5)
			*v5 = *(_QWORD*)j;
		*(_QWORD*)j = 0i64;
		*(_QWORD*)(j + 8) = 0i64;
		sub_14018B900(j, 0);
	}
	if (a1[37])
		sub_1401A4A00((const void***)a1 + 37);
	if (a1[36])
		sub_1401A4A00((const void***)a1 + 36);
	v6 = a1[32];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = 1;
	v8 = a1 + 32;
	for (k = 1; k >= 0; --k)
	{
		v10 = *(v8 - 4);
		v8 -= 4;
		if (v10)
			sub_14018B900(v10, 0);
	}
	v11 = a1[20];
	if (v11)
		sub_14018B900(v11, 0);
	v12 = a1[16];
	if (v12)
		sub_14018B900(v12, 0);
	v13 = a1 + 16;
	do
	{
		v14 = *(v13 - 4);
		v13 -= 4;
		if (v14)
			sub_14018B900(v14, 0);
		--v7;
	} while (v7 >= 0);
	v15 = a1[4];
	if (v15)
		sub_14018B900(v15, 0);
}

