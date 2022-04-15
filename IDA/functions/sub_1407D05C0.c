#include "../winhttp.h"

//----- (00000001407D05C0) ----------------------------------------------------
_OWORD* __fastcall sub_1407D05C0(__int64 a1, _OWORD* a2, unsigned int a3)
{
	_OWORD* result; // rax
	__int64 v4; // rax
	__int128 v5; // xmm0

	if (a3 < 8)
	{
		v4 = 32 * (a3 + 170i64);
		*a2 = *(_OWORD*)(v4 + a1);
		v5 = *(_OWORD*)(v4 + a1 + 16);
		result = a2;
		a2[1] = v5;
	}
	else
	{
		result = a2;
		*a2 = xmmword_140C777D0;
		a2[1] = xmmword_140B7B240;
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

