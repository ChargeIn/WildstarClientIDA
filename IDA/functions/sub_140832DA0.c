#include "../winhttp.h"

//----- (0000000140832DA0) ----------------------------------------------------
__int64 __fastcall sub_140832DA0(__int64* a1, unsigned __int8 a2)
{
	int v4; // eax
	__int64 result; // rax

	v4 = sub_14085CF90(a1);
	result = sub_140832B90(v4);
	if (!result)
		return sub_140832E30(a1, a2);
	return result;
}

