#include "../winhttp.h"

//----- (00000001400C4740) ----------------------------------------------------
bool __fastcall sub_1400C4740(__int64 a1, int a2)
{
	int v2; // r8d
	int v3; // eax
	int v4; // edx
	int v5; // edx

	v2 = *(_DWORD*)(a1 + 1300);
	v3 = v2 + a2;
	v4 = *(_DWORD*)(a1 + 1296);
	*(_DWORD*)(a1 + 1300) = v3;
	if (v3 > v4)
		*(_DWORD*)(a1 + 1300) = v4;
	v5 = *(_DWORD*)(a1 + 1300);
	if (v5 < 0)
		v5 = 0;
	*(_BYTE*)(a1 + 1392) |= 0x10u;
	*(_DWORD*)(a1 + 1300) = v5;
	return v5 != v2;
}

