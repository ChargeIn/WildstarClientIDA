#include "../winhttp.h"

//----- (0000000140879C10) ----------------------------------------------------
__int64 __fastcall sub_140879C10(__int64 a1, unsigned int a2, _DWORD* a3, _DWORD* a4)
{
	unsigned int v4; // edx

	v4 = a2 >> 6;
	*a3 = v4 << 6;
	*a4 = *(_DWORD*)(a1 + 52) + v4 * *(_DWORD*)(a1 + 128);
	return 1i64;
}

