#include "../winhttp.h"

//----- (000000014023F9F0) ----------------------------------------------------
__int64 sub_14023F9F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D850, qword_140C63858);
	if (dword_140C63F5C || (int)sub_14023F7E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C650E0 + 40i64))(qword_140C650E0);
}
// 140A6D850: using guessed type wchar_t *off_140A6D850[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F5C: using guessed type int dword_140C63F5C;
// 140C650E0: using guessed type __int64 qword_140C650E0;

