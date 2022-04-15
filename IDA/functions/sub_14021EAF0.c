#include "../winhttp.h"

//----- (000000014021EAF0) ----------------------------------------------------
__int64 sub_14021EAF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BD30, qword_140C63858);
	if (dword_140C63F78 || (int)sub_14021E8E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64418 + 40i64))(qword_140C64418);
}
// 140A6BD30: using guessed type wchar_t *off_140A6BD30[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F78: using guessed type int dword_140C63F78;
// 140C64418: using guessed type __int64 qword_140C64418;

