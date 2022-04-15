#include "../winhttp.h"

//----- (000000014068DB80) ----------------------------------------------------
__int64 __fastcall sub_14068DB80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // r8
	int v6; // edx
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = a1[2];
		v6 = **(_DWORD**)(v4 + 8);
		*(_DWORD*)(v5 + 8) = 3;
		result = 1i64;
		*(double*)v5 = (double)v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

