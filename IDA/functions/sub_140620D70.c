#include "../winhttp.h"

//----- (0000000140620D70) ----------------------------------------------------
void __fastcall sub_140620D70(__int64 a1)
{
	__int64 v2; // r8
	_QWORD* v3; // rdx
	__int64 v4; // rcx
	unsigned int v5; // edx

	if (*(_QWORD*)(a1 + 16))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		if (v2)
		{
			v3 = *(_QWORD**)(a1 + 16);
			if (v3)
				*v3 = *(_QWORD*)(a1 + 24);
			v4 = *(_QWORD*)(a1 + 24);
			if (v4)
				*(_QWORD*)(v4 + 16) = *(_QWORD*)(a1 + 16);
			v5 = *(_DWORD*)(a1 + 1000);
			*(_QWORD*)(a1 + 16) = 0i64;
			*(_QWORD*)(a1 + 24) = 0i64;
			sub_14046C1B0(v2, v5);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

