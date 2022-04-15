#include "../winhttp.h"

//----- (00000001402DDE00) ----------------------------------------------------
_QWORD* __fastcall sub_1402DDE00(_QWORD* a1)
{
	__int64 v2; // rcx

	*a1 = off_140B62E50;
	v2 = a1[6];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[6] = 0i64;
	}
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B62E50: using guessed type __int64 (__fastcall *off_140B62E50[49])();

