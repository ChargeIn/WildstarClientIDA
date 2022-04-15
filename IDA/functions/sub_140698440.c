#include "../winhttp.h"

//----- (0000000140698440) ----------------------------------------------------
__int64 __fastcall sub_140698440(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rax
	__int64* v6; // rdi
	__int64 v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v6 = v5) != 0i64)
		&& sub_140580040(v5))
	{
		v7 = sub_140580040(v6);
		sub_140433380(a1, v7);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140698470: variable 'v3' is possibly undefined

