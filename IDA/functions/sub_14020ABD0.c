#include "../winhttp.h"

//----- (000000014020ABD0) ----------------------------------------------------
__int64 sub_14020ABD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6ACC8, qword_140C63858);
	if (dword_140C65004 || (int)sub_14020A9C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63FD0 + 40i64))(qword_140C63FD0);
}
// 140A6ACC8: using guessed type wchar_t *off_140A6ACC8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD0: using guessed type __int64 qword_140C63FD0;
// 140C65004: using guessed type int dword_140C65004;

