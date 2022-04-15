#include "../winhttp.h"

//----- (0000000140846E00) ----------------------------------------------------
_QWORD* __fastcall sub_140846E00(_QWORD* a1, char a2)
{
	sub_140871840(a1 + 122);
	a1[120] = off_1409A2F80;
	sub_140871840(a1 + 90);
	a1[88] = off_1409A2F80;
	nullsub_1(a1 + 62);
	a1[60] = off_1409A2F80;
	sub_140846CD0((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409A2F80: using guessed type __int64 (__fastcall *off_1409A2F80[2])();

