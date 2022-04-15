#include "../winhttp.h"

//----- (000000014005B880) ----------------------------------------------------
__int64 __fastcall sub_14005B880(__int64 a1, int* a2)
{
	char v3; // cl

	if (a2[2] == 1)
		return *(_QWORD*)(a1 + 32) + 40 * (*a2 & (unsigned __int64)(int)((1i64 << *(_BYTE*)(a1 + 11)) - 1));
	if (a2[2] == 2)
	{
		v3 = *(_BYTE*)(a1 + 11);
		return *(_QWORD*)(a1 + 32) + 40 * ((unsigned int)*a2 % (((1i64 << v3) - 1) | 1));
	}
	if (a2[2] != 3)
	{
		v3 = *(_BYTE*)(a1 + 11);
		if (a2[2] == 4)
			return *(_QWORD*)(a1 + 32) + 40 * (*(int*)(*(_QWORD*)a2 + 12i64) & (unsigned __int64)(int)((1i64 << v3) - 1));
		return *(_QWORD*)(a1 + 32) + 40 * ((unsigned int)*a2 % (((1i64 << v3) - 1) | 1));
	}
	if (*(double*)a2 == 0.0)
		return *(_QWORD*)(a1 + 32);
	else
		return *(_QWORD*)(a1 + 32)
		+ 40 * ((unsigned int)(*(_QWORD*)a2 + HIDWORD(*(_QWORD*)a2)) % (((1i64 << *(_BYTE*)(a1 + 11)) - 1) | 1));
}

