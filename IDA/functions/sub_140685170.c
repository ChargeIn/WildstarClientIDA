#include "../winhttp.h"

//----- (0000000140685170) ----------------------------------------------------
__int64 __fastcall sub_140685170(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // edx
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = *(_DWORD*)(v4 + 4);
		result = 1i64;
		if (v5 == 5)
			v5 = 4;
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)v5;
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

