#include "../winhttp.h"

//----- (00000001405E7080) ----------------------------------------------------
__int64 __fastcall sub_1405E7080(__int64* a1, int* a2)
{
	__int64 v2; // r14
	int* v5; // rdi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rdx
	int* v9; // rcx

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 12i64);
	v6 = &v5[3 * v2];
	if (v6)
	{
		*v6 = *a2;
		v6[1] = a2[1];
		v6[2] = a2[2];
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5;
			do
			{
				if (v8)
				{
					v9 = (int*)(*a1 + (char*)v8 - (char*)v5);
					*v8 = *v9;
					v8[1] = v9[1];
					v8[2] = v9[2];
				}
				++v7;
				v8 += 3;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

