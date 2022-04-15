#include "../winhttp.h"

//----- (0000000140825250) ----------------------------------------------------
_BOOL8 __fastcall sub_140825250(unsigned __int16* a1)
{
	if (!a1)
		return 0i64;
	if (*a1 == 92 || *a1 == 47)
		return 1i64;
	return (unsigned int)sub_1407DE778(*a1) && a1[1] == 58 && (a1[2] == 92 || a1[2] == 47);
}

