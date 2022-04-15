#include "../winhttp.h"

//----- (000000014023DC30) ----------------------------------------------------
__int64 sub_14023DC30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D6C8, qword_140C63858);
	if (dword_140C65494 || (int)sub_14023DA20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D48 + 40i64))(qword_140C64D48);
}
// 140A6D6C8: using guessed type wchar_t *off_140A6D6C8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D48: using guessed type __int64 qword_140C64D48;
// 140C65494: using guessed type int dword_140C65494;

