#include "../winhttp.h"

//----- (0000000140682AA0) ----------------------------------------------------
__int64 __fastcall sub_140682AA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdx

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_140617410(v4, *(_DWORD*)(v4 + 4))) != 0
		&& (v6 = *(_QWORD*)(v5 + 152), *(_DWORD*)(v6 + 4) == 4)
		&& *(_DWORD*)v5 == 1)
	{
		sub_1404331C0(a1, v6);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

