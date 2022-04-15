#include "../winhttp.h"

//----- (00000001408759B0) ----------------------------------------------------
__int64 __fastcall sub_1408759B0(__int64 a1, _DWORD** a2)
{
	int v2; // r8d
	int v3; // r8d

	v2 = *(*a2)++;
	*(_DWORD*)(a1 + 64) = v2;
	v3 = *(*a2)++;
	*(_DWORD*)(a1 + 68) = v3;
	return 1i64;
}

