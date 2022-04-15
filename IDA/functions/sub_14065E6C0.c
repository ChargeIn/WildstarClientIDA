#include "../winhttp.h"

//----- (000000014065E6C0) ----------------------------------------------------
__int64 __fastcall sub_14065E6C0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	unsigned int v4; // eax
	__int64 v5; // rcx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *v2);
		if (v3)
		{
			v4 = sub_140056D60(a1, 2u);
			if (v4)
				sub_1404ACFA0(v5, v3, v4);
		}
	}
	return 0i64;
}
// 14065E709: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

