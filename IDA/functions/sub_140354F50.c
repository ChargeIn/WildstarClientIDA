#include "../winhttp.h"

//----- (0000000140354F50) ----------------------------------------------------
__int64 __fastcall sub_140354F50(__int64 a1, __int64 a2, _DWORD* a3)
{
	int v3; // r10d
	int v4; // r11d
	int v5; // ecx

	v3 = *(_DWORD*)(a1 + 12) - a3[1];
	v4 = *(_DWORD*)(a1 + 8) - *a3;
	v5 = *(_DWORD*)(a2 + 12) - a3[1];
	return (unsigned int)(v4 * v4 + v3 * v3 - v5 * v5 - (*(_DWORD*)(a2 + 8) - *a3) * (*(_DWORD*)(a2 + 8) - *a3));
}

