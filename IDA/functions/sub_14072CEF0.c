#include "../winhttp.h"

//----- (000000014072CEF0) ----------------------------------------------------
__int64 __fastcall sub_14072CEF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_1401F1860(*(_DWORD*)(v3 + 8))) != 0)
	{
		sub_1403D3470(a1, (int*)(v4 + 16));
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

