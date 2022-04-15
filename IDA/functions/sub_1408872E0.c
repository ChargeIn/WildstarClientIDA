#include "../winhttp.h"

//----- (00000001408872E0) ----------------------------------------------------
_QWORD* __fastcall sub_1408872E0(_QWORD* a1, char a2)
{
	*a1 = off_1409A7FD0;
	a1[15] = off_1409A8030;
	a1[25] = 0i64;
	a1[26] = 0i64;
	a1[27] = 0i64;
	sub_140883790((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A7FD0: using guessed type __int64 (__fastcall *off_1409A7FD0[4])();
// 1409A8030: using guessed type __int64 (__fastcall *off_1409A8030[17])();

