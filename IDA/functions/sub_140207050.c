#include "../winhttp.h"

//----- (0000000140207050) ----------------------------------------------------
__int64 sub_140207050()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A9B8, qword_140C63858);
	if (dword_140C64B88 || (int)sub_140206E40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64DE8 + 40i64))(qword_140C64DE8);
}
// 140A6A9B8: using guessed type wchar_t *off_140A6A9B8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B88: using guessed type int dword_140C64B88;
// 140C64DE8: using guessed type __int64 qword_140C64DE8;

