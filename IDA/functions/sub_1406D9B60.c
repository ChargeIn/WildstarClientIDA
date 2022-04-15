#include "../winhttp.h"

//----- (00000001406D9B60) ----------------------------------------------------
_QWORD* __fastcall sub_1406D9B60(_QWORD* a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	*a1 = off_140B71570;
	sub_1400C6030((__int64)a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B71570: using guessed type __int64 (__fastcall *off_140B71570[25])();

