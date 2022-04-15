#include "../winhttp.h"

//----- (00000001405E4740) ----------------------------------------------------
void __fastcall sub_1405E4740(__int64* a1)
{
	int* v2; // rax
	int* v3; // rdi

	if ((unsigned __int64)a1[1] > 5)
	{
		a1[1] = 5i64;
	}
	else
	{
		v2 = sub_14018DB00(*a1, 5ui64, 8i64);
		v3 = v2;
		if ((int*)*a1 != v2)
		{
			sub_1407DB590(v2, (int*)*a1, 8 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v3;
		}
		a1[1] = 5i64;
	}
}

