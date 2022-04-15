#include "../winhttp.h"

//----- (0000000140656960) ----------------------------------------------------
__int64 __fastcall sub_140656960(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
		v5 = *(_DWORD*)(v4 + 44);
	else
		v5 = 0;
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)v5;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

