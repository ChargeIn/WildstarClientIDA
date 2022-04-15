#include "../winhttp.h"

//----- (0000000140657B40) ----------------------------------------------------
__int64 __fastcall sub_140657B40(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	double v8; // xmm0_8

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
	{
		if (*(_QWORD*)(qword_140C65898 + 120)
			&& *(_DWORD*)(v3 + 128) == 5
			&& (v5 = sub_140244B00(*(_DWORD*)(v4 + 168))) != 0
			&& (v6 = sub_140246480(*(_DWORD*)(v5 + 4))) != 0)
		{
			v7 = a1[2];
			v8 = (double)*(int*)(v6 + 8);
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = v8;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
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

