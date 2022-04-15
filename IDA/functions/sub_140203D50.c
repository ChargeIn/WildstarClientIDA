#include "../winhttp.h"

//----- (0000000140203D50) ----------------------------------------------------
__int64 sub_140203D50()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A718, qword_140C63858);
	if (dword_140C646A8 || (int)sub_140203B40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65008 + 40i64))(qword_140C65008);
}
// 140A6A718: using guessed type wchar_t *off_140A6A718[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646A8: using guessed type int dword_140C646A8;
// 140C65008: using guessed type __int64 qword_140C65008;

