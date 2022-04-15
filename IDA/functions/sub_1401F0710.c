#include "../winhttp.h"

//----- (00000001401F0710) ----------------------------------------------------
__int64 sub_1401F0710()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69720, qword_140C63858);
	if (dword_140C6548C || (int)sub_1401F0500() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A08 + 40i64))(qword_140C64A08);
}
// 140A69720: using guessed type wchar_t *off_140A69720[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A08: using guessed type __int64 qword_140C64A08;
// 140C6548C: using guessed type int dword_140C6548C;

