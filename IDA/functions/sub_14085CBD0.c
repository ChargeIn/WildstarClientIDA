#include "../winhttp.h"

//----- (000000014085CBD0) ----------------------------------------------------
__int64 __fastcall sub_14085CBD0(__int64 a1, unsigned int* a2)
{
	DWORD TickCount; // eax
	unsigned int v5; // edx
	DWORD v6; // ecx
	unsigned int v8; // eax

	TickCount = GetTickCount();
	v5 = *(_DWORD*)(a1 + 24);
	v6 = TickCount;
	if (TickCount >= v5)
	{
		v8 = (TickCount - v5) / *(_DWORD*)(a1 + 28);
		*a2 = v8;
		if (v8)
			*(_DWORD*)(a1 + 24) = v6;
		return 1i64;
	}
	else
	{
		*a2 = 1;
		*(_DWORD*)(a1 + 24) = TickCount;
		return 1i64;
	}
}

