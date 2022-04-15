#include "../winhttp.h"

//----- (0000000140210180) ----------------------------------------------------
__int64 __fastcall sub_140210180(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B128, a1, qword_140C63858);
	if (dword_140C64C54 || (int)sub_14020FF20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64550 + 24i64))(qword_140C64550, a1);
}
// 140A6B128: using guessed type wchar_t *off_140A6B128[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64550: using guessed type __int64 qword_140C64550;
// 140C64C54: using guessed type int dword_140C64C54;

