#include "../winhttp.h"

//----- (000000014020CDD0) ----------------------------------------------------
__int64 sub_14020CDD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AE88, qword_140C63858);
	if (dword_140C64F20 || (int)sub_14020CBC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D38 + 40i64))(qword_140C63D38);
}
// 140A6AE88: using guessed type wchar_t *off_140A6AE88[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D38: using guessed type __int64 qword_140C63D38;
// 140C64F20: using guessed type int dword_140C64F20;

