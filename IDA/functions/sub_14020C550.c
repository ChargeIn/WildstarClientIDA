#include "../winhttp.h"

//----- (000000014020C550) ----------------------------------------------------
__int64 sub_14020C550()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AE18, qword_140C63858);
	if (dword_140C63F8C || (int)sub_14020C340() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653B8 + 40i64))(qword_140C653B8);
}
// 140A6AE18: using guessed type wchar_t *off_140A6AE18[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F8C: using guessed type int dword_140C63F8C;
// 140C653B8: using guessed type __int64 qword_140C653B8;

