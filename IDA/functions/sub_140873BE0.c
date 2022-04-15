#include "../winhttp.h"

//----- (0000000140873BE0) ----------------------------------------------------
_QWORD* __fastcall sub_140873BE0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_1409A6098;
	v4 = a1[10];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A6098: using guessed type __int64 (__fastcall *off_1409A6098[5])();

