#include "../winhttp.h"

//----- (0000000140516100) ----------------------------------------------------
_QWORD* __fastcall sub_140516100(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B6B630;
	v4 = a1[7];
	if (v4)
		sub_14018B900(v4, 0);
	*a1 = &off_140B6B770;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6B630: using guessed type __int64 (__fastcall *off_140B6B630[31])();
// 140B6B770: using guessed type __int64 (__fastcall *off_140B6B770)();

