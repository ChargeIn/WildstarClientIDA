#include "../winhttp.h"

//----- (0000000140086520) ----------------------------------------------------
__int64 __fastcall sub_140086520(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax

	result = sub_140085170(a1, a2);
	if ((int)result >= 0)
		return sub_140085E30(a1, (__int64)(a2 + 4));
	return result;
}

