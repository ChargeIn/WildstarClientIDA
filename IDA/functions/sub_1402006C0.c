#include "../winhttp.h"

//----- (00000001402006C0) ----------------------------------------------------
__int64 __fastcall sub_1402006C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A440, a1, qword_140C63858);
	if (dword_140C64898 || (int)sub_140200400() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654C0 + 32i64))(qword_140C654C0, a1);
}
// 140A6A440: using guessed type wchar_t *off_140A6A440[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64898: using guessed type int dword_140C64898;
// 140C654C0: using guessed type __int64 qword_140C654C0;

