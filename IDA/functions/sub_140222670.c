#include "../winhttp.h"

//----- (0000000140222670) ----------------------------------------------------
__int64 sub_140222670()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C040, qword_140C63858);
	if (dword_140C63E60 || (int)sub_140222460() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64028 + 40i64))(qword_140C64028);
}
// 140A6C040: using guessed type wchar_t *off_140A6C040[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E60: using guessed type int dword_140C63E60;
// 140C64028: using guessed type __int64 qword_140C64028;

