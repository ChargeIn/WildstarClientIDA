#include "../winhttp.h"

//----- (00000001405AA240) ----------------------------------------------------
void __fastcall sub_1405AA240(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rsi
	__int64 v4; // r14
	__int64 v5; // rdi
	int i; // esi
	__int64* j; // rdi
	int* v8; // rsi
	int* v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	_QWORD* k; // rdi
	_QWORD* m; // rdi
	int* v15; // rsi
	int* v16; // rdi
	__int64 v17; // rcx
	unsigned __int64 n; // rsi
	__int64 v19; // rdi
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	_QWORD* v23; // rsi
	_QWORD* ii; // rdi
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx

	*a1 = &off_140B6D000;
	v2 = a1[29];
	if (v2)
	{
		v3 = *(int*)(v2 - 8);
		v4 = v2 - 8;
		v5 = v2 + 192 * v3;
		for (i = v3 - 1; i >= 0; --i)
		{
			v5 -= 192i64;
			sub_1405A9880(v5);
		}
		sub_14018B900(v4, 0);
	}
	for (j = (__int64*)a1[31]; j != (__int64*)a1[32]; ++j)
		sub_14018B900(*j, 0);
	v8 = (int*)a1[32];
	v9 = (int*)a1[31];
	sub_1407DB590(v9, v8, 0i64);
	a1[32] += -8 * (((char*)v8 - (char*)v9) >> 3);
	sub_1405AE130(a1);
	v10 = a1[37];
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[37] = 0i64;
	}
	v11 = a1[36];
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		a1[36] = 0i64;
	}
	v12 = a1[35];
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		a1[35] = 0i64;
	}
	for (k = (_QWORD*)a1[39]; k != (_QWORD*)a1[40]; ++k)
	{
		if (*k)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*k + 8i64))(*k);
			*k = 0i64;
		}
	}
	sub_1405B1C90((__int64)(a1 + 38), (_QWORD*)a1[39], a1[40]);
	for (m = (_QWORD*)a1[43]; m != (_QWORD*)a1[44]; ++m)
	{
		if (*m)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*m + 8i64))(*m);
			*m = 0i64;
		}
	}
	v15 = (int*)a1[44];
	v16 = (int*)a1[43];
	sub_1407DB590(v16, v15, 0i64);
	a1[44] += -8 * (((char*)v15 - (char*)v16) >> 3);
	sub_14018B900(a1[7], 0);
	sub_14018B900(a1[60], 0);
	sub_14018B900(a1[61], 0);
	sub_14077DA50(a1 + 55);
	v17 = a1[52];
	if (v17)
		sub_14018B900(v17, 0);
	for (n = 0i64; n < a1[47]; ++n)
	{
		v19 = a1[48] + 8 * n;
		while (*(_QWORD*)v19)
		{
			v20 = *(_QWORD*)v19;
			*(_QWORD*)v19 = *(_QWORD*)(*(_QWORD*)v19 + 8i64);
			sub_14018B900(v20, 0);
		}
	}
	v21 = a1[48];
	a1[46] = 0i64;
	sub_14018B900(v21, 0);
	a1[48] = 0i64;
	v22 = a1[43];
	if (v22)
		sub_14018B900(v22, 0);
	v23 = (_QWORD*)a1[40];
	for (ii = (_QWORD*)a1[39]; ii != v23; ++ii)
	{
		if (*ii)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*ii + 8i64))(*ii);
	}
	v25 = a1[39];
	if (v25)
		sub_14018B900(v25, 0);
	v26 = a1[36];
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
	v27 = a1[35];
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = a1[31];
	if (v28)
		sub_14018B900(v28, 0);
	v29 = a1[26];
	if (v29)
		sub_14018B900(v29, 0);
}
// 140B6D000: using guessed type __int64 (__fastcall *off_140B6D000)();

