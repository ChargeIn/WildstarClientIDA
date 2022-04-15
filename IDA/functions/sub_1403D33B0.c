#include "../winhttp.h"

//----- (00000001403D33B0) ----------------------------------------------------
__int64 __fastcall sub_1403D33B0(_DWORD* a1, _DWORD* a2)
{
	if (*a1 >= *a2)
		return *a2 < *a1;
	else
		return 0xFFFFFFFFi64;
}

