#include "../winhttp.h"

//----- (000000014022AA30) ----------------------------------------------------
__int64 sub_14022AA30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C708, qword_140C63858);
	if (dword_140C64D18 || (int)sub_14022A820() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C642A8 + 40i64))(qword_140C642A8);
}
// 140A6C708: using guessed type wchar_t *off_140A6C708[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642A8: using guessed type __int64 qword_140C642A8;
// 140C64D18: using guessed type int dword_140C64D18;

