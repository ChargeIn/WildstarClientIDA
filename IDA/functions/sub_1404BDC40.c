#include "../winhttp.h"

//----- (00000001404BDC40) ----------------------------------------------------
_QWORD* __fastcall sub_1404BDC40(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B687F0;
	v4 = a1[2];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 104i64))(v4);
	a1[4] = off_140B68A90;
	sub_140626760((__int64)(a1 + 4));
	a1[4] = off_140B6FB70;
	sub_140626760((__int64)(a1 + 4));
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B687F0: using guessed type __int64 (__fastcall *off_140B687F0[21])();
// 140B68A90: using guessed type __int64 (__fastcall *off_140B68A90[17])();
// 140B6FB70: using guessed type __int64 (__fastcall *off_140B6FB70[30])();

