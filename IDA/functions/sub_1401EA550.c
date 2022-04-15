#include "../winhttp.h"

//----- (00000001401EA550) ----------------------------------------------------
__int64 sub_1401EA550()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69218, qword_140C63858);
	if (dword_140C64AA8 || (int)sub_1401EA340() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A90 + 40i64))(qword_140C63A90);
}
// 140A69218: using guessed type wchar_t *off_140A69218[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A90: using guessed type __int64 qword_140C63A90;
// 140C64AA8: using guessed type int dword_140C64AA8;

