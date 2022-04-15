#include "../winhttp.h"

//----- (00000001405D9760) ----------------------------------------------------
_QWORD* __fastcall sub_1405D9760(_QWORD* a1, char a2)
{
	*a1 = off_140B6E0A0;
	sub_1405D97C0((__int64)a1);
	sub_1405D6680((__int64)a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6E0A0: using guessed type __int64 (__fastcall *off_140B6E0A0[31])();

