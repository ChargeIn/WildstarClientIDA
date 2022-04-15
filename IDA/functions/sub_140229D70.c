#include "../winhttp.h"

//----- (0000000140229D70) ----------------------------------------------------
__int64 sub_140229D70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C660, qword_140C63858);
	if (dword_140C63D4C || (int)sub_140229B60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C649A8 + 40i64))(qword_140C649A8);
}
// 140A6C660: using guessed type wchar_t *off_140A6C660[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D4C: using guessed type int dword_140C63D4C;
// 140C649A8: using guessed type __int64 qword_140C649A8;

