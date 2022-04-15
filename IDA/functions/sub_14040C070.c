#include "../winhttp.h"

//----- (000000014040C070) ----------------------------------------------------
__int64 __fastcall sub_14040C070(_DWORD* a1, _DWORD* a2)
{
	if (!a2)
		return 0i64;
	if (!a1[32] && !a1[33])
	{
		a1[33] = a2[3];
		a1[32] = a2[4];
		if (a2[4])
			a1[31] = a2[1];
		return 0i64;
	}
	return 149i64;
}

