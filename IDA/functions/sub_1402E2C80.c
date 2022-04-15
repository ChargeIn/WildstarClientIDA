#include "../winhttp.h"

//----- (00000001402E2C80) ----------------------------------------------------
_QWORD* __fastcall sub_1402E2C80(_QWORD* a1)
{
	__int64 v2; // rcx

	*a1 = off_140B63120;
	v2 = a1[4];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	else
		sub_14018B900(a1[3], 0);
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B63120: using guessed type __int64 (__fastcall *off_140B63120[7])();

