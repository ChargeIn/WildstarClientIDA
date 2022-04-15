#include "../winhttp.h"

//----- (00000001405C50A0) ----------------------------------------------------
__int64 __fastcall sub_1405C50A0(__int64* a1, _QWORD* a2)
{
	__int64 v2; // rsi
	int* v5; // r14
	int* v6; // r8

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 72i64);
	v6 = &v5[18 * v2];
	*(_QWORD*)v6 = *a2;
	*((_QWORD*)v6 + 1) = a2[1];
	*((_QWORD*)v6 + 2) = a2[2];
	*((_QWORD*)v6 + 3) = a2[3];
	*((_QWORD*)v6 + 4) = a2[4];
	*((_QWORD*)v6 + 5) = a2[5];
	*((_QWORD*)v6 + 6) = a2[6];
	*((_QWORD*)v6 + 7) = a2[7];
	*((_QWORD*)v6 + 8) = a2[8];
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 72 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

