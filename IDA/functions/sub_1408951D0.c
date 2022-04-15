#include "../winhttp.h"

//----- (00000001408951D0) ----------------------------------------------------
_QWORD* __fastcall sub_1408951D0(_QWORD* a1, __int64 a2, __int64 a3)
{
	sub_14088F8F0((__int64)a1, a3);
	a1[19] = a2;
	*a1 = off_1409A92C0;
	a1[3] = off_1409A9390;
	a1[5] = &off_1409A93A0;
	if (a2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	return a1;
}
// 1409A92C0: using guessed type __int64 (__fastcall *off_1409A92C0[5])();
// 1409A9390: using guessed type __int64 (__fastcall *off_1409A9390[3])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

