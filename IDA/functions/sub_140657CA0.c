#include "../winhttp.h"

//----- (0000000140657CA0) ----------------------------------------------------
__int64 __fastcall sub_140657CA0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rcx
	int* v8; // r8
	__int64 result; // rax
	int v10; // edx
	_DWORD* v11; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v5 = *(_DWORD*)(v3 + 14120);
	if (v5 && (v6 = sub_140432A10(v4, v5)) != 0)
	{
		v7 = *(_QWORD*)(v6 + 24);
		v8 = (int*)a1[2];
		result = 1i64;
		v10 = *(_DWORD*)(v7 + 8);
		v8[2] = 1;
		*v8 = v10 & 1;
		a1[2] += 16i64;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140657CD5: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

