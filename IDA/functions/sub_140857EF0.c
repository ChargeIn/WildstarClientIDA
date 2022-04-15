#include "../winhttp.h"

//----- (0000000140857EF0) ----------------------------------------------------
_QWORD* __fastcall sub_140857EF0(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = (__int64)(a1 + 21);
	*(_QWORD*)(v3 - 168) = off_1409A3A60;
	sub_1408562D0(v3);
	sub_14086FC60(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A3A60: using guessed type __int64 (__fastcall *off_1409A3A60[4])();

