#include "../winhttp.h"

//----- (0000000140894250) ----------------------------------------------------
__int64 __fastcall sub_140894250(__int64 a1)
{
	int v2; // edx
	int v3; // ecx

	LOWORD(v2) = 0;
	v3 = *(_DWORD*)(a1 + 252) - 1;
	if (!v3)
	{
		if (*(_DWORD*)(a1 + 216))
			return (unsigned __int16)((unsigned int)sub_1407DDB28() % *(_DWORD*)(a1 + 216));
		return (unsigned __int16)v2;
	}
	if (v3 != 1)
		return (unsigned __int16)v2;
	if ((unsigned int)(unsigned __int16)++ * (_WORD*)(a1 + 256) >= *(_DWORD*)(a1 + 216))
		*(_WORD*)(a1 + 256) = 0;
	return *(unsigned __int16*)(a1 + 256);
}

