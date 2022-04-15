#include "../winhttp.h"

//----- (0000000140898B30) ----------------------------------------------------
_QWORD* __fastcall sub_140898B30(_QWORD* a1, char a2)
{
	*a1 = off_1409A9830;
	sub_14087BAE0((__int64)a1);
	sub_14087B9B0(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A9830: using guessed type __int64 (__fastcall *off_1409A9830[7])();

