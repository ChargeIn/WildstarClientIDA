#include "../winhttp.h"

//----- (0000000140161890) ----------------------------------------------------
__int64 __fastcall sub_140161890(__int64 a1)
{
	_DWORD* v1; // r9
	int v2; // r8d
	int v3; // eax

	if (*(_DWORD*)(a1 + 1144) == 1)
	{
		v1 = **(_DWORD***)(a1 + 1136);
		v2 = v1[3];
		v3 = v1[2];
		if (*(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716) < v2)
			v2 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
		if (v3 < v2)
			v3 = v2;
		v1[1] = v3;
	}
	sub_14015F180(a1);
	return 0i64;
}

