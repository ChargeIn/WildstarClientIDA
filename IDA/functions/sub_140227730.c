#include "../winhttp.h"

//----- (0000000140227730) ----------------------------------------------------
__int64 sub_140227730()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C468, qword_140C63858);
	if (dword_140C64A4C || (int)sub_140227520() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64600 + 40i64))(qword_140C64600);
}
// 140A6C468: using guessed type wchar_t *off_140A6C468[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64600: using guessed type __int64 qword_140C64600;
// 140C64A4C: using guessed type int dword_140C64A4C;

