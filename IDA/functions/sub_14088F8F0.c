#include "../winhttp.h"

//----- (000000014088F8F0) ----------------------------------------------------
__int64 __fastcall sub_14088F8F0(__int64 a1, __int64 a2)
{
	sub_14088C150((_QWORD*)a1, a2);
	*(_QWORD*)a1 = off_1409A8400;
	*(_QWORD*)(a1 + 24) = off_1409A84D0;
	*(_QWORD*)(a1 + 40) = &off_1409A93A0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	return a1;
}
// 1409A8400: using guessed type __int64 (__fastcall *off_1409A8400[5])();
// 1409A84D0: using guessed type __int64 (__fastcall *off_1409A84D0[6])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

