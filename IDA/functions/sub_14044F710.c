#include "../winhttp.h"

//----- (000000014044F710) ----------------------------------------------------
__int64 __fastcall sub_14044F710(__int64* a1)
{
	unsigned __int64 i; // rdi
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 j; // rdi
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rcx

	for (i = 0i64; i < a1[50]; ++i)
	{
		v3 = *(_QWORD*)(a1[49] + 8 * i);
		*(_DWORD*)(v3 + 12) = (*(int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v3 + 64) + 40i64))(
			*(_QWORD*)(v3 + 64),
			0i64) >= 0;
		v4 = *(_QWORD*)(v3 + 64);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(v3 + 64) = 0i64;
		}
		v5 = *(_QWORD*)(v3 + 72);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(v3 + 72) = 0i64;
		}
	}
	for (j = 0i64; j < a1[48]; ++j)
	{
		v7 = a1[47];
		v8 = *(_QWORD*)(v7 + 8 * j);
		if (v8)
		{
			sub_1404511E0(*(_QWORD*)(v7 + 8 * j));
			sub_14018B900(v8, 0);
		}
	}
	sub_1403D86E0(a1 + 47, (__int64)(a1 + 49));
	v9 = qword_140C65898;
	a1[50] = 0i64;
	if (v9)
	{
		sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(v9 + 32736) + 96i64), "StoreBannersReady", byte_1409D140F);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "StoreBannersReady", &unk_1409D13AA);
	}
	v10 = a1[52];
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[52] = 0i64;
	}
	return 0i64;
}
// 1409D140F: using guessed type _BYTE byte_1409D140F[23];
// 140C65898: using guessed type __int64 qword_140C65898;

