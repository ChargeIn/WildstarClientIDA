#include "../winhttp.h"

//----- (000000014087C620) ----------------------------------------------------
char __fastcall sub_14087C620(__int64 a1, int a2, _WORD* a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // r10
	__int16 v5; // r9

	v3 = *(_DWORD**)(a1 + 8);
	v4 = *(_DWORD**)(a1 + 16);
	v5 = 0;
	if (v3 == v4)
		return 0;
	while (*v3 != a2)
	{
		v3 += 2;
		++v5;
		if (v3 == v4)
			return 0;
	}
	*a3 = v5;
	return 1;
}

