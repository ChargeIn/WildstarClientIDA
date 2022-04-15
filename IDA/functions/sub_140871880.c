#include "../winhttp.h"

//----- (0000000140871880) ----------------------------------------------------
_QWORD* __fastcall sub_140871880(_QWORD* a1, char a2)
{
	__int64 v4; // rdx

	*a1 = &off_1409A6080;
	v4 = a1[22];
	if (v4)
	{
		sub_140881720(dword_140C10F28, v4);
		a1[22] = 0i64;
	}
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A6080: using guessed type __int64 (__fastcall *off_1409A6080)();
// 140C10F28: using guessed type int dword_140C10F28;

