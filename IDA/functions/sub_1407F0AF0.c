#include "../winhttp.h"

//----- (00000001407F0AF0) ----------------------------------------------------
__int64 __fastcall sub_1407F0AF0(signed int a1, __int16* a2, unsigned __int64 a3, unsigned int a4)
{
	if (a4 == 10 && a1 < 0)
		return sub_1407F0B18(a1, a2, a3, 0xAu, 1);
	else
		return sub_1407F0B18(a1, a2, a3, a4, 0);
}

