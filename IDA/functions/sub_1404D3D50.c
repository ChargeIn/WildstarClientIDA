#include "../winhttp.h"

//----- (00000001404D3D50) ----------------------------------------------------
_QWORD* __fastcall sub_1404D3D50(_QWORD* a1, char a2)
{
	*a1 = off_140B690A0;
	sub_14018B900(a1[2], 0);
	*a1 = &off_140B690D0;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B690A0: using guessed type __int64 (__fastcall *off_140B690A0[7])();
// 140B690D0: using guessed type __int64 (__fastcall *off_140B690D0)();

