#include "../winhttp.h"

//----- (0000000140215EB0) ----------------------------------------------------
__int64 sub_140215EB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B5F8, qword_140C63858);
	if (dword_140C65454 || (int)sub_140215CA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654D8 + 40i64))(qword_140C654D8);
}
// 140A6B5F8: using guessed type wchar_t *off_140A6B5F8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65454: using guessed type int dword_140C65454;
// 140C654D8: using guessed type __int64 qword_140C654D8;

