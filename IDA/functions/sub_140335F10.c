#include "../winhttp.h"

//----- (0000000140335F10) ----------------------------------------------------
_QWORD* __fastcall sub_140335F10(_QWORD* a1, unsigned int a2)
{
	int* v3; // rcx
	__int64 v4; // r8

	if (a2 < 3)
	{
		sub_14018EE90(a1, (__int64)"Base Message Id #%d", a2);
		return a1;
	}
	else if (a2 < dword_140C1E564 && (v3 = *(int**)(qword_140C65828 + 16i64 * (a2 - 3) + 8)) != 0i64)
	{
		v4 = -1i64;
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		do
			++v4;
		while (*((_BYTE*)v3 + v4));
		sub_14001B240(a1, v3, (__int64)v3 + v4);
		return a1;
	}
	else
	{
		sub_14018EE90(a1, (__int64)"Invalid or foreign Message Id #%d", a2);
		return a1;
	}
}
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65828: using guessed type __int64 qword_140C65828;

