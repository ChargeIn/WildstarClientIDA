#include "../winhttp.h"

//----- (000000014088C150) ----------------------------------------------------
_QWORD* __fastcall sub_14088C150(_QWORD* a1, __int64 a2)
{
	sub_14088B340((__int64)a1, a2);
	*a1 = off_1409A8280;
	a1[3] = off_1409A8330;
	a1[5] = &off_1409A93A0;
	a1[13] = 0i64;
	a1[14] = 0i64;
	return a1;
}
// 1409A8280: using guessed type __int64 (__fastcall *off_1409A8280[5])();
// 1409A8330: using guessed type __int64 (__fastcall *off_1409A8330[3])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

