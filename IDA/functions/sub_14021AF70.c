#include "../winhttp.h"

//----- (000000014021AF70) ----------------------------------------------------
__int64 sub_14021AF70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BA20, qword_140C63858);
	if (dword_140C640B0 || (int)sub_14021AD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EE8 + 40i64))(qword_140C63EE8);
}
// 140A6BA20: using guessed type wchar_t *off_140A6BA20[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EE8: using guessed type __int64 qword_140C63EE8;
// 140C640B0: using guessed type int dword_140C640B0;

