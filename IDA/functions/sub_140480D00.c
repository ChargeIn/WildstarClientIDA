#include "../winhttp.h"

//----- (0000000140480D00) ----------------------------------------------------
__int64 __fastcall sub_140480D00(__int64* a1, int* a2)
{
	__int64 v2; // rsi
	int* v5; // r14
	int* v6; // r8

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 12i64);
	v6 = &v5[3 * v2];
	*v6 = *a2;
	v6[1] = a2[1];
	v6[2] = a2[2];
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 12 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

