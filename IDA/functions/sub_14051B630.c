#include "../winhttp.h"

//----- (000000014051B630) ----------------------------------------------------
_QWORD* __fastcall sub_14051B630(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B6B1E0;
	v4 = a1[3];
	if (v4)
		sub_14018B900(v4, 0);
	*a1 = &off_140B6B770;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6B1E0: using guessed type __int64 (__fastcall *off_140B6B1E0[41])();
// 140B6B770: using guessed type __int64 (__fastcall *off_140B6B770)();

