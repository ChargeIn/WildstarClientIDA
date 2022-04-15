#include "../winhttp.h"

//----- (0000000140235D00) ----------------------------------------------------
__int64 __fastcall sub_140235D00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D038, a1, qword_140C63858);
	if (dword_140C65648 || (int)sub_140235AA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D60 + 24i64))(qword_140C63D60, a1);
}
// 140A6D038: using guessed type wchar_t *off_140A6D038[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D60: using guessed type __int64 qword_140C63D60;
// 140C65648: using guessed type int dword_140C65648;

