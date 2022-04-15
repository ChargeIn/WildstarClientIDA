#include "../winhttp.h"

//----- (0000000140203910) ----------------------------------------------------
__int64 sub_140203910()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A6E0, qword_140C63858);
	if (dword_140C64EB8 || (int)sub_140203700() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A10 + 40i64))(qword_140C64A10);
}
// 140A6A6E0: using guessed type wchar_t *off_140A6A6E0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A10: using guessed type __int64 qword_140C64A10;
// 140C64EB8: using guessed type int dword_140C64EB8;

