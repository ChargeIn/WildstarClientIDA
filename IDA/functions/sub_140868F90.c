#include "../winhttp.h"

//----- (0000000140868F90) ----------------------------------------------------
_QWORD* __fastcall sub_140868F90(_QWORD* a1, char a2)
{
	__int64 v4; // rdx

	*a1 = off_1409A48D0;
	v4 = a1[4];
	if (v4)
		sub_140881720(dword_140C10F20, v4);
	a1[4] = 0i64;
	sub_140865E30(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A48D0: using guessed type __int64 (__fastcall *off_1409A48D0[8])();
// 140C10F20: using guessed type int dword_140C10F20;

