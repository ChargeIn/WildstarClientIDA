#include "../winhttp.h"

//----- (00000001401FA450) ----------------------------------------------------
__int64 sub_1401FA450()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69F38, qword_140C63858);
	if (dword_140C64A64 || (int)sub_1401FA240() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C640D8 + 40i64))(qword_140C640D8);
}
// 140A69F38: using guessed type wchar_t *off_140A69F38[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640D8: using guessed type __int64 qword_140C640D8;
// 140C64A64: using guessed type int dword_140C64A64;

