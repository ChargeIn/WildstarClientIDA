#include "../winhttp.h"

//----- (000000014063A760) ----------------------------------------------------
__int64 __fastcall sub_14063A760(__int64* a1, int* a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v7; // rbp
	int* v8; // r14

	v3 = a1[1];
	if (a3)
	{
		v7 = v3 + a3;
		v8 = sub_14018DB00(*a1, v3 + a3, 20i64);
		sub_1407DB590(&v8[5 * v3], a2, 20 * a3);
		if ((int*)*a1 != v8)
		{
			sub_1407DB590(v8, (int*)*a1, 20 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v8;
		}
		a1[1] = v7;
	}
	return v3;
}

