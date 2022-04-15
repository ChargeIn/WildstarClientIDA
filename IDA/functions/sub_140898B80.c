#include "../winhttp.h"

//----- (0000000140898B80) ----------------------------------------------------
_QWORD* __fastcall sub_140898B80(_QWORD* a1, char a2)
{
	*a1 = off_1409A9750;
	a1[3] = off_1409A9820;
	a1[5] = &off_1409A93A0;
	sub_14088F940(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();
// 1409A9750: using guessed type __int64 (__fastcall *off_1409A9750[5])();
// 1409A9820: using guessed type __int64 (__fastcall *off_1409A9820[9])();

