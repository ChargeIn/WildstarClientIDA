#include "../winhttp.h"

//----- (00000001403D33D0) ----------------------------------------------------
__int64 __fastcall sub_1403D33D0(__int64* a1, int* a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v7; // rbp
	int* v8; // rsi

	v3 = a1[1];
	if (a3)
	{
		v7 = v3 + a3;
		v8 = sub_14018DB00(*a1, v3 + a3, 2i64);
		sub_1407DB590((int*)((char*)v8 + 2 * v3), a2, 2 * a3);
		if ((int*)*a1 != v8)
		{
			sub_1407DB590(v8, (int*)*a1, 2 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v8;
		}
		a1[1] = v7;
	}
	return v3;
}

