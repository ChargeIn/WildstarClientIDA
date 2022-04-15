#include "../winhttp.h"

//----- (00000001401C31D0) ----------------------------------------------------
__int64 __fastcall sub_1401C31D0(__int64* a1, __int64 a2)
{
	__int64 v2; // rsi
	int* v5; // r14
	int* v6; // r8

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 20i64);
	v6 = &v5[5 * v2];
	*(_QWORD*)v6 = *(_QWORD*)a2;
	*((_QWORD*)v6 + 1) = *(_QWORD*)(a2 + 8);
	v6[4] = *(_DWORD*)(a2 + 16);
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 20 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

