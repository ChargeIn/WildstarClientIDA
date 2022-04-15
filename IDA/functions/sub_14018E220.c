#include "../winhttp.h"

//----- (000000014018E220) ----------------------------------------------------
__int64 __fastcall sub_14018E220(_WORD* a1, unsigned __int16* a2)
{
	int v2; // r9d
	__int64 v3; // r10
	unsigned int v4; // r8d
	int v5; // eax

	LOWORD(v2) = *a1;
	v3 = 0i64;
	v4 = (unsigned __int16)*a1 - *a2;
	if (v4)
		return v4;
	while ((_WORD)v2)
	{
		v2 = (unsigned __int16)a1[v3 + 1];
		v5 = a2[++v3];
		v4 = v2 - v5;
		if (v2 != v5)
			return v4;
	}
	return 0i64;
}

