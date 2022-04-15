#include "../winhttp.h"

//----- (0000000140045A00) ----------------------------------------------------
__int64 __fastcall sub_140045A00(__int64 a1, _DWORD* a2)
{
	int v4; // eax
	int v5; // eax
	__int64 v6; // rcx
	__int16* v7; // rax

	if (!a2)
		return 2147942487i64;
	v4 = *(_DWORD*)(a1 + 168);
	if (v4 != 3)
	{
		if (v4 == 5)
			return 0i64;
		if (*a2 == 24)
		{
			*(_DWORD*)(a1 + 168) = 5;
			v5 = sub_1400A7A10(a2[10]);
			v7 = sub_14034BDD0(v6, v5);
			sub_1400481B0(a1, (__int64)v7, 0i64);
			return 0i64;
		}
	}
	return 1i64;
}
// 140045A42: variable 'v6' is possibly undefined

