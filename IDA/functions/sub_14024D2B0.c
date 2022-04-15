#include "../winhttp.h"

//----- (000000014024D2B0) ----------------------------------------------------
__int64 sub_14024D2B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E378, qword_140C63858);
	if (dword_140C645DC || (int)sub_14024D0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A00 + 40i64))(qword_140C63A00);
}
// 140A6E378: using guessed type wchar_t *off_140A6E378[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A00: using guessed type __int64 qword_140C63A00;
// 140C645DC: using guessed type int dword_140C645DC;

