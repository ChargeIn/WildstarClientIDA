#include "../winhttp.h"

//----- (00000001400200E0) ----------------------------------------------------
__int64 __fastcall sub_1400200E0(_DWORD* a1, _DWORD* a2)
{
	unsigned int v3; // ecx
	unsigned int v4; // edx

	if (*a1 < *a2)
		return 0xFFFFFFFFi64;
	if (*a1 > *a2)
		return 1i64;
	v3 = a1[1];
	v4 = a2[1];
	if (v3 < v4)
		return 0xFFFFFFFFi64;
	return v3 > v4;
}

