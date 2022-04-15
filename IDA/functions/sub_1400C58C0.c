#include "../winhttp.h"

//----- (00000001400C58C0) ----------------------------------------------------
_QWORD* __fastcall sub_1400C58C0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B56558;
	v4 = a1[1];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[1] = 0i64;
	}
	*a1 = &off_140B567A8;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B56558: using guessed type __int64 (__fastcall *off_140B56558[2])();
// 140B567A8: using guessed type __int64 (__fastcall *off_140B567A8)();

