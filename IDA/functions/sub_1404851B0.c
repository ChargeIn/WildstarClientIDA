#include "../winhttp.h"

//----- (00000001404851B0) ----------------------------------------------------
__int64 __fastcall sub_1404851B0(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax

	if (*a1 == *a2)
		return 0i64;
	result = 1i64;
	if (*a1 < *a2)
		return 0xFFFFFFFFi64;
	return result;
}

