#include "../winhttp.h"

//----- (0000000140020710) ----------------------------------------------------
__int64 __fastcall sub_140020710(_DWORD* a1, _DWORD* a2)
{
	if (*a1 >= *a2)
		return *a1 > *a2;
	else
		return 0xFFFFFFFFi64;
}

