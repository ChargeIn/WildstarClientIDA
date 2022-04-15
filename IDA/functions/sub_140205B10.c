#include "../winhttp.h"

//----- (0000000140205B10) ----------------------------------------------------
__int64 sub_140205B10()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A8A0, qword_140C63858);
	if (dword_140C64FC0 || (int)sub_140205900() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C90 + 40i64))(qword_140C63C90);
}
// 140A6A8A0: using guessed type wchar_t *off_140A6A8A0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C90: using guessed type __int64 qword_140C63C90;
// 140C64FC0: using guessed type int dword_140C64FC0;

