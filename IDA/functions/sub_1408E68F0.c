#include "../winhttp.h"

//----- (00000001408E68F0) ----------------------------------------------------
_QWORD* __fastcall sub_1408E68F0(_QWORD* a1, char a2)
{
	*a1 = off_1409B4300;
	nullsub_5();
	*a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1408E71D0: using guessed type __int64 nullsub_5(void);
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409B4300: using guessed type __int64 (__fastcall *off_1409B4300[6])();

