#include "../winhttp.h"

//----- (0000000140661C40) ----------------------------------------------------
__int64 __fastcall sub_140661C40(__int64 a1)
{
	int* v2; // rax
	int v3; // ecx
	__int64 v4; // r8
	__int64 result; // rax
	int v6; // ecx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && sub_1403D90D0(qword_140C65898, *v2))
	{
		v3 = dword_140C45DE0;
		v4 = *(_QWORD*)(a1 + 16);
		if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
			v3 = *(_DWORD*)qword_140C63750;
		result = 1i64;
		v6 = dword_140C45DF0[v3];
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)v6;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

