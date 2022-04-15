#include "../winhttp.h"

//----- (000000014089C670) ----------------------------------------------------
_QWORD* __fastcall sub_14089C670(_QWORD* a1, char a2)
{
	_QWORD* v4; // rbx
	int v5; // edi

	v4 = a1 + 40;
	v5 = 2;
	*a1 = off_1409A9AC0;
	do
	{
		v4 = (_QWORD*)((char*)v4 - 36);
		nullsub_1(v4);
		--v5;
	} while (v5 >= 0);
	*a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409A9AC0: using guessed type __int64 (__fastcall *off_1409A9AC0[6])();

