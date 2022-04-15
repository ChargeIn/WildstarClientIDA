#include "../winhttp.h"

//----- (0000000140779D00) ----------------------------------------------------
_QWORD* __fastcall sub_140779D00(_QWORD* a1, char a2)
{
	*a1 = off_140B76A50;
	sub_140779580((__int64)a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B76A50: using guessed type __int64 (__fastcall *off_140B76A50[18])();

