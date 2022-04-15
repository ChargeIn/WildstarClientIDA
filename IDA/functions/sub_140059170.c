#include "../winhttp.h"

//----- (0000000140059170) ----------------------------------------------------
__int64 __fastcall sub_140059170(_QWORD* a1, unsigned __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[5];
	if (v4 == a1[10])
		v5 = a1[15];
	else
		v5 = *(_QWORD*)(**(_QWORD**)(v4 + 8) + 24i64);
	v6 = sub_1400627D0((__int64)a1, a2, v5);
	v7 = a1[2];
	*(_QWORD*)v7 = v6;
	*(_DWORD*)(v7 + 8) = 7;
	a1[2] += 16i64;
	return v6 + 48;
}

