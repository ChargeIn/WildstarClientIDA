#include "../winhttp.h"

//----- (00000001403E0AE0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403E0AE0(int a1)
{
	__int64 v1; // rdx

	if ((unsigned __int16)a1 < 0x1Fu)
		return 0i64;
	if ((unsigned __int16)(a1 - 127) <= 0x2Eu)
	{
		v1 = 0x400200000001i64;
		if (_bittest64(&v1, (unsigned int)(a1 - 127)))
			return 0i64;
	}
	return (unsigned __int16)(a1 - 8232) > 1u
		&& (unsigned __int16)(a1 - 128) > 0x1Fu
		&& (_WORD)a1 != 3338
		&& (unsigned __int16)a1 < 0xFFFEu
		&& (_WORD)a1 != 0xFEFF
		&& (unsigned __int16)(a1 + 560) > 0x1Fu;
}

