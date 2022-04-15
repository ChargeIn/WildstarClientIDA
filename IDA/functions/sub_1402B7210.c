#include "../winhttp.h"

//----- (00000001402B7210) ----------------------------------------------------
__int64 __fastcall sub_1402B7210(int a1)
{
	int v1; // ecx

	v1 = a1 & 0xF00000;
	if (v1 == 0x100000)
		return 0i64;
	if (v1 == 0x200000)
		return 1i64;
	return (unsigned int)(v1 != 3145728) + 2;
}

