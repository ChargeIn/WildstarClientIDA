#include "../winhttp.h"

//----- (000000014076EFC0) ----------------------------------------------------
__int64 __fastcall sub_14076EFC0(_DWORD* a1, _DWORD* a2)
{
	int v3; // ecx
	int v4; // edx

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

