#include "../winhttp.h"

//----- (0000000140653CC0) ----------------------------------------------------
__int64 __fastcall sub_140653CC0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rcx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_140056D60(a1, 2u);
		if (v4 < 28)
		{
			v6 = sub_14045E3D0(v3, v4);
			v7 = a1[2];
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = (float)((float)v6 * 0.001);
		}
		else
		{
			v5 = a1[2];
			*(_QWORD*)v5 = 0i64;
			*(_DWORD*)(v5 + 8) = 3;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

