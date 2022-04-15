#include "../winhttp.h"

//----- (0000000140231030) ----------------------------------------------------
__int64 sub_140231030()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CC48, qword_140C63858);
	if (dword_140C64C80 || (int)sub_140230E20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D60 + 40i64))(qword_140C64D60);
}
// 140A6CC48: using guessed type wchar_t *off_140A6CC48[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C80: using guessed type int dword_140C64C80;
// 140C64D60: using guessed type __int64 qword_140C64D60;

