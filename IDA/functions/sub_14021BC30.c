#include "../winhttp.h"

//----- (000000014021BC30) ----------------------------------------------------
__int64 sub_14021BC30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BAC8, qword_140C63858);
	if (dword_140C645C0 || (int)sub_14021BA20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64748 + 40i64))(qword_140C64748);
}
// 140A6BAC8: using guessed type wchar_t *off_140A6BAC8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C645C0: using guessed type int dword_140C645C0;
// 140C64748: using guessed type __int64 qword_140C64748;

