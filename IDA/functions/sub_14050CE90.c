#include "../winhttp.h"

//----- (000000014050CE90) ----------------------------------------------------
__int64 __fastcall sub_14050CE90(__int64 a1)
{
	bool v2; // bl
	int* v3; // rax
	__int64 v4; // rax
	_DWORD* v5; // rdx

	v2 = 0;
	v3 = (int*)sub_1406622C0(a1, 1);
	if (v3)
	{
		v4 = sub_1403D90D0(qword_140C65898, *v3);
		if (v4)
			v2 = *(_DWORD*)(v4 + 14040) != 0;
	}
	v5 = *(_DWORD**)(a1 + 16);
	v5[2] = 1;
	*v5 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

