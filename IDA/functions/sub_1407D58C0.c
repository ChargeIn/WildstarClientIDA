#include "../winhttp.h"

//----- (00000001407D58C0) ----------------------------------------------------
__int64 __fastcall sub_1407D58C0(__int64 a1, unsigned int a2, _OWORD* a3, _OWORD* a4)
{
	__int64 result; // rax

	if (a2 < 8)
	{
		*a3 = *(_OWORD*)(a1 + 48i64 * a2 + 2816);
		result = 6 * (a2 + 59i64);
		*a4 = *(_OWORD*)(a1 + 48 * (a2 + 59i64));
	}
	else
	{
		*a3 = xmmword_140C777D0;
		*a4 = xmmword_140B7B240;
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

