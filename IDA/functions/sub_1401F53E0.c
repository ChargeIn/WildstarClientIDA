#include "../winhttp.h"

//----- (00000001401F53E0) ----------------------------------------------------
__int64 __fastcall sub_1401F53E0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A69B10, a1, qword_140C63858);
	if (dword_140C651B0 || (int)sub_1401F5180() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65118 + 24i64))(qword_140C65118, a1);
}
// 140A69B10: using guessed type wchar_t *off_140A69B10[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65118: using guessed type __int64 qword_140C65118;
// 140C651B0: using guessed type int dword_140C651B0;

