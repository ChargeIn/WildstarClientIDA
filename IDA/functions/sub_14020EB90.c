#include "../winhttp.h"

//----- (000000014020EB90) ----------------------------------------------------
__int64 sub_14020EB90()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B010, qword_140C63858);
	if (dword_140C64B2C || (int)sub_14020E980() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64298 + 40i64))(qword_140C64298);
}
// 140A6B010: using guessed type wchar_t *off_140A6B010[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64298: using guessed type __int64 qword_140C64298;
// 140C64B2C: using guessed type int dword_140C64B2C;

