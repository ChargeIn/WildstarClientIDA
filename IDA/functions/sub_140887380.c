#include "../winhttp.h"

//----- (0000000140887380) ----------------------------------------------------
_QWORD* __fastcall sub_140887380(_QWORD* a1, char a2)
{
	*a1 = off_1409A7E88;
	a1[15] = &off_1409A7EC0;
	a1[23] = 0i64;
	a1[24] = 0i64;
	a1[25] = 0i64;
	sub_140883820((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A7E88: using guessed type __int64 (__fastcall *off_1409A7E88[4])();
// 1409A7EC0: using guessed type __int64 (__fastcall *off_1409A7EC0)();

