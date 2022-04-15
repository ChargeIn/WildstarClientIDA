#include "../winhttp.h"

//----- (00000001406F7410) ----------------------------------------------------
__int64 __fastcall sub_1406F7410(__int64 a1, __int64 a2, double a3, double a4)
{
	int* v5; // rax
	int v6; // edx
	_DWORD* v7; // rcx
	__int64 result; // rax

	v5 = (int*)sub_1406622C0(a1, 1);
	if (v5)
		v5 = (int*)sub_1403D90D0(qword_140C65898, *v5);
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	if (v5)
		v6 = v5[2];
	else
		v6 = 0;
	sub_14055B0E0(qword_140C65898, v6, a3, a4);
	v7 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	*v7 = 1;
	v7[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

