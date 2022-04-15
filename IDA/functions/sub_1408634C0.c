#include "../winhttp.h"

//----- (00000001408634C0) ----------------------------------------------------
__int64 __fastcall sub_1408634C0(__int64 a1)
{
	unsigned int i; // ebx
	unsigned int v3; // eax
	unsigned int v4; // ebp
	char v5; // al

	for (i = 0; i < 4; ++i)
	{
		v3 = sub_140863540(a1, (__int64*)(a1 + 1056), i);
		v4 = v3;
	}
	*(_BYTE*)(a1 + 1072) = 1;
	v5 = sub_14085CE70((__int64*)(a1 + 1056));
	*(_BYTE*)(a1 + 1048) &= ~1u;
	*(_BYTE*)(a1 + 1048) |= v5 & 1;
	return v4;
}

