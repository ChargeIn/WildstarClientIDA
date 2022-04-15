#include "../winhttp.h"

//----- (00000001404D6380) ----------------------------------------------------
void __fastcall sub_1404D6380(_QWORD* a1)
{
	unsigned __int64 i; // rdi
	unsigned __int64 j; // rdi
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	unsigned __int64 k; // rsi
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int64 m; // rsi
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rcx

	for (i = 0i64; i < a1[1]; ++i)
		sub_14018B900(*(_QWORD*)(*a1 + 8 * i), 0);
	for (j = 0i64; j < a1[13]; ++j)
	{
		v4 = *(_QWORD*)(a1[12] + 8 * j);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 8);
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			sub_14018B900(v4, 0);
		}
	}
	v6 = a1[12];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	for (k = 0i64; k < a1[8]; ++k)
	{
		v8 = a1[9] + 8 * k;
		while (*(_QWORD*)v8)
		{
			v9 = *(_QWORD*)v8;
			*(_QWORD*)v8 = *(_QWORD*)(*(_QWORD*)v8 + 8i64);
			sub_14018B900(v9, 0);
		}
	}
	v10 = a1[9];
	a1[7] = 0i64;
	sub_14018B900(v10, 0);
	a1[9] = 0i64;
	for (m = 0i64; m < a1[3]; ++m)
	{
		v12 = a1[4] + 8 * m;
		while (*(_QWORD*)v12)
		{
			v13 = *(_QWORD*)v12;
			*(_QWORD*)v12 = *(_QWORD*)(*(_QWORD*)v12 + 8i64);
			sub_14018B900(v13, 0);
		}
	}
	v14 = a1[4];
	a1[2] = 0i64;
	sub_14018B900(v14, 0);
	a1[4] = 0i64;
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
}

