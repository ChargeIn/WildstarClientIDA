#include "../winhttp.h"

//----- (00000001404CEC80) ----------------------------------------------------
_QWORD* __fastcall sub_1404CEC80(_QWORD* a1, char a2)
{
	*a1 = off_140B68FE0;
	sub_1404CED10((__int64)a1);
	sub_140008410((__int64)(a1 + 6));
	sub_14018B900(a1[7], 0);
	sub_1404CE740(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B68FE0: using guessed type __int64 (__fastcall *off_140B68FE0[31])();

