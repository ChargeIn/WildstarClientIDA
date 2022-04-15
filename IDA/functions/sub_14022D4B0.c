#include "../winhttp.h"

//----- (000000014022D4B0) ----------------------------------------------------
__int64 sub_14022D4B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C938, qword_140C63858);
	if (dword_140C64C3C || (int)sub_14022D2A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63918 + 40i64))(qword_140C63918);
}
// 140A6C938: using guessed type wchar_t *off_140A6C938[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63918: using guessed type __int64 qword_140C63918;
// 140C64C3C: using guessed type int dword_140C64C3C;

