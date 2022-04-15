#include "../winhttp.h"

//----- (00000001408A0FD0) ----------------------------------------------------
_QWORD* __fastcall sub_1408A0FD0(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 1;
	*(v3 - 1) = off_1409A9CC0;
	nullsub_1(v3);
	*a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409A9CC0: using guessed type __int64 (__fastcall *off_1409A9CC0[6])();

