#include "../winhttp.h"

//----- (0000000140200610) ----------------------------------------------------
__int64 sub_140200610()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A440, qword_140C63858);
	if (dword_140C64898 || (int)sub_140200400() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654C0 + 40i64))(qword_140C654C0);
}
// 140A6A440: using guessed type wchar_t *off_140A6A440[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64898: using guessed type int dword_140C64898;
// 140C654C0: using guessed type __int64 qword_140C654C0;

