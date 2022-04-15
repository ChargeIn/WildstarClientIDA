#include "../winhttp.h"

//----- (000000014019F340) ----------------------------------------------------
void __fastcall sub_14019F340(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
	int* v6; // rax
	unsigned __int64 v7; // r9
	int* i; // rsi

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v6 = sub_14018DB00(*a1, a2, 8i64);
		v7 = a1[1];
		for (i = v6; v7 < a2; *(_QWORD*)&v6[2 * v7 - 2] = *a3)
			++v7;
		if ((int*)*a1 != v6)
		{
			sub_1407DB590(v6, (int*)*a1, 8 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)i;
		}
		a1[1] = a2;
	}
}

