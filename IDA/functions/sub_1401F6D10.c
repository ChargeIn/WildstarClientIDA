#include "../winhttp.h"

//----- (00000001401F6D10) ----------------------------------------------------
__int64 sub_1401F6D10()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69C60, qword_140C63858);
	if (dword_140C63EC0 || (int)sub_1401F6B00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D10 + 40i64))(qword_140C63D10);
}
// 140A69C60: using guessed type wchar_t *off_140A69C60[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D10: using guessed type __int64 qword_140C63D10;
// 140C63EC0: using guessed type int dword_140C63EC0;

