#include "../winhttp.h"

//----- (0000000140657C10) ----------------------------------------------------
__int64 __fastcall sub_140657C10(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rcx
	bool v5; // zf
	__int64 result; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = (_DWORD*)a1[2];
	v5 = *(_DWORD*)(v3 + 14120) == 0;
	v4[2] = 1;
	result = 1i64;
	*v4 = !v5;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

