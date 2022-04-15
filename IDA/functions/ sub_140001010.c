#include "../winhttp.h"

//----- (0000000140001010) ----------------------------------------------------
_QWORD* __fastcall sub_140001010(_QWORD* a1, __int64 a2)
{
	char v3; // di
	__int64 v4; // rcx

	v3 = a2;
	*a1 = off_140B54E10;
	v4 = a1[132];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[132] = 0i64;
	}
	sub_1400C6030((__int64)a1, a2);
	if ((v3 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140001049: variable 'a2' is possibly undefined
// 140B54E10: using guessed type __int64 (__fastcall *off_140B54E10[25])();

