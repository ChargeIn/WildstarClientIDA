#include "../winhttp.h"

//----- (0000000140886220) ----------------------------------------------------
_QWORD* __fastcall sub_140886220(_QWORD* a1, char a2)
{
	*a1 = off_1409A7C58;
	a1[15] = off_1409A7C90;
	sub_140883820((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A7C58: using guessed type __int64 (__fastcall *off_1409A7C58[13])();
// 1409A7C90: using guessed type __int64 (__fastcall *off_1409A7C90[6])();

