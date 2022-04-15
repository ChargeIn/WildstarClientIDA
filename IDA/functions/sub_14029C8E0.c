#include "../winhttp.h"

//----- (000000014029C8E0) ----------------------------------------------------
_QWORD* __fastcall sub_14029C8E0(_QWORD* a1, char a2)
{
	*a1 = off_140B61C38;
	sub_14029CA70((__int64)a1);
	sub_14029CD30((__int64)a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B61C38: using guessed type __int64 (__fastcall *off_140B61C38[5])();

