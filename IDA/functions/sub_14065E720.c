#include "../winhttp.h"

//----- (000000014065E720) ----------------------------------------------------
__int64 __fastcall sub_14065E720(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rax
	__int64 v3; // rcx

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *v1);
		if (v2)
			sub_1404AD250(v3, v2);
	}
	return 0i64;
}
// 14065E749: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

