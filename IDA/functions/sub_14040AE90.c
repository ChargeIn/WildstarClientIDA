#include "../winhttp.h"

//----- (000000014040AE90) ----------------------------------------------------
void __fastcall sub_14040AE90(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 104i64);
		v5 = v4;
		if ((int*)*a1 != v4)
		{
			sub_1407DB590(v4, (int*)*a1, 104 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}

