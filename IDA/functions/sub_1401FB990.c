#include "../winhttp.h"

//----- (00000001401FB990) ----------------------------------------------------
__int64 sub_1401FB990()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A050, qword_140C63858);
	if (dword_140C648B0 || (int)sub_1401FB780() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C645A0 + 40i64))(qword_140C645A0);
}
// 140A6A050: using guessed type wchar_t *off_140A6A050[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C645A0: using guessed type __int64 qword_140C645A0;
// 140C648B0: using guessed type int dword_140C648B0;

