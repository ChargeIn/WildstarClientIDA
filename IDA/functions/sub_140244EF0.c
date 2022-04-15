#include "../winhttp.h"

//----- (0000000140244EF0) ----------------------------------------------------
__int64 sub_140244EF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DCB0, qword_140C63858);
	if (dword_140C63F58 || (int)sub_140244CE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63978 + 40i64))(qword_140C63978);
}
// 140A6DCB0: using guessed type wchar_t *off_140A6DCB0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63978: using guessed type __int64 qword_140C63978;
// 140C63F58: using guessed type int dword_140C63F58;

