#include "../winhttp.h"

//----- (0000000140892960) ----------------------------------------------------
_QWORD* __fastcall sub_140892960(_QWORD* a1, char a2)
{
	*a1 = off_1409A8AA0;
	sub_140892E60((__int64)a1);
	sub_140896790((__int64)(a1 + 31));
	sub_1408957E0((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A8AA0: using guessed type __int64 (__fastcall *off_1409A8AA0[4])();

