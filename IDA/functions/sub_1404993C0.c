#include "../winhttp.h"

//----- (00000001404993C0) ----------------------------------------------------
_QWORD* __fastcall sub_1404993C0(_QWORD* a1, char a2)
{
	sub_140008410((__int64)(a1 + 10));
	sub_14018B900(a1[11], 0);
	*a1 = off_140B676E8;
	sub_140008410((__int64)(a1 + 6));
	sub_14018B900(a1[7], 0);
	sub_140008410((__int64)(a1 + 2));
	sub_14018B900(a1[3], 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B676E8: using guessed type __int64 (__fastcall *off_140B676E8[14])();

