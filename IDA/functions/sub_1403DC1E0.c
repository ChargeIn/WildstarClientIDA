#include "../winhttp.h"

//----- (00000001403DC1E0) ----------------------------------------------------
__int64 __fastcall sub_1403DC1E0(__int64 a1, int* a2)
{
	int v3; // edx
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // edx

	v3 = *a2;
	if (v3)
	{
		v6 = sub_1403D90D0(a1, v3);
		if (v6)
		{
			v8 = sub_1403D90D0(a1, a2[1]);
			v10 = a2[1];
			if (v10 && !v8)
			{
				sub_1403A1090(v9, v10, a2);
				return 0i64;
			}
			sub_14047FC40(v6, v10);
		}
		else if (a2[2])
		{
			sub_1403A1090(v5, *a2, a2);
			return 0i64;
		}
	}
	return 0i64;
}
// 1403DC212: variable 'v5' is possibly undefined
// 1403DC243: variable 'v9' is possibly undefined

