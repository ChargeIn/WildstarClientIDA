#include "../winhttp.h"

//----- (000000014021B7F0) ----------------------------------------------------
__int64 sub_14021B7F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BA90, qword_140C63858);
	if (dword_140C653C8 || (int)sub_14021B5E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D90 + 40i64))(qword_140C63D90);
}
// 140A6BA90: using guessed type wchar_t *off_140A6BA90[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D90: using guessed type __int64 qword_140C63D90;
// 140C653C8: using guessed type int dword_140C653C8;

