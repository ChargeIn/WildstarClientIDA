#include "../winhttp.h"

//----- (00000001402E3A60) ----------------------------------------------------
_DWORD* __fastcall sub_1402E3A60(__int64 a1, _DWORD* a2)
{
	unsigned __int16* v2; // r8

	v2 = *(unsigned __int16**)(a1 + 32);
	*a2 = v2[30];
	a2[1] = v2[31];
	a2[2] = v2[32];
	a2[3] = v2[33];
	return a2;
}

