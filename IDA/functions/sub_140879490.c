#include "../winhttp.h"

//----- (0000000140879490) ----------------------------------------------------
_QWORD* __fastcall sub_140879490(_QWORD* a1, char a2)
{
	*a1 = off_1409A6E80;
	sub_140879A50(a1);
	*a1 = off_1409A2F80;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A2F80: using guessed type __int64 (__fastcall *off_1409A2F80[2])();
// 1409A6E80: using guessed type __int64 (__fastcall *off_1409A6E80[20])();

