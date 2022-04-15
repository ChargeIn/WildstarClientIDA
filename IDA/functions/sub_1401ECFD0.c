#include "../winhttp.h"

//----- (00000001401ECFD0) ----------------------------------------------------
__int64 sub_1401ECFD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69448, qword_140C63858);
	if (dword_140C65434 || (int)sub_1401ECDC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64830 + 40i64))(qword_140C64830);
}
// 140A69448: using guessed type wchar_t *off_140A69448[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64830: using guessed type __int64 qword_140C64830;
// 140C65434: using guessed type int dword_140C65434;

