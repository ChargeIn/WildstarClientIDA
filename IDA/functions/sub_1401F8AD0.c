#include "../winhttp.h"

//----- (00000001401F8AD0) ----------------------------------------------------
__int64 sub_1401F8AD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69DE8, qword_140C63858);
	if (dword_140C6550C || (int)sub_1401F88C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A40 + 40i64))(qword_140C64A40);
}
// 140A69DE8: using guessed type wchar_t *off_140A69DE8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A40: using guessed type __int64 qword_140C64A40;
// 140C6550C: using guessed type int dword_140C6550C;

