#include "../winhttp.h"

//----- (00000001408ABE60) ----------------------------------------------------
_QWORD* __fastcall sub_1408ABE60(_QWORD* a1, char a2)
{
	_QWORD* v4; // rbx
	int v5; // edi

	v4 = a1 + 239;
	v5 = 1;
	*a1 = off_1409A9F20;
	do
	{
		v4 -= 118;
		nullsub_3(v4);
		--v5;
	} while (v5 >= 0);
	*a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1408AC800: using guessed type __int64 __fastcall nullsub_3(_QWORD);
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409A9F20: using guessed type __int64 (__fastcall *off_1409A9F20[6])();

