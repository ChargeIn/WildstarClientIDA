#include "../winhttp.h"

//----- (00000001403DB920) ----------------------------------------------------
__int64 __fastcall sub_1403DB920(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rcx
	__int16* v5; // rax
	int v7; // [rsp+20h] [rbp-28h]
	unsigned int v8; // [rsp+28h] [rbp-20h]

	if (sub_1403D90D0(a1, *a2))
	{
		if (a2[1] == 4)
		{
			v5 = sub_14034BDD0(v4, 391517);
			if (v5)
			{
				v8 = a2[1];
				v7 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "UnitEvaded", "UUiS", *a2, v7, v8, v5);
			}
		}
	}
	return 0i64;
}
// 1403DB947: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

