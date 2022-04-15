#include "../winhttp.h"

//----- (000000014065C700) ----------------------------------------------------
__int64 __fastcall sub_14065C700(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2), (v4 = v3) != 0))
	{
		if (v3 == *(_QWORD*)(qword_140C65898 + 120))
			sub_1403A7C50(qword_140C65898);
		v5 = *(_QWORD*)(a1 + 16);
		*(double*)v5 = *(float*)(v4 + 3404);
		*(_DWORD*)(v5 + 8) = 3;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

