#include "../winhttp.h"

//----- (0000000140575210) ----------------------------------------------------
unsigned __int64 __fastcall sub_140575210(
	int* a1,
	__int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(int*, int*))
{
	int* v8; // rbx
	int v10[4]; // [rsp+30h] [rbp-38h] BYREF

	sub_1405754A0((__int64)a1, a2, a5);
	v8 = (int*)a2;
	if (a2 < a3)
	{
		do
		{
			if (a5(v8, a1))
			{
				v10[0] = *v8;
				v10[1] = v8[1];
				v10[2] = v8[2];
				v10[3] = v8[3];
				*v8 = *a1;
				v8[1] = a1[1];
				v8[2] = a1[2];
				v8[3] = a1[3];
				sub_140575620((__int64)a1, 0i64, (a2 - (__int64)a1) >> 4, v10, a5);
			}
			v8 += 4;
		} while ((unsigned __int64)v8 < a3);
	}
	return sub_1405753D0(a1, a2, a5);
}

