#include "../winhttp.h"

//----- (00000001401F5C60) ----------------------------------------------------
__int64 __fastcall sub_1401F5C60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A69B80, a1, qword_140C63858);
	if (dword_140C63A38 || (int)sub_1401F5A00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F50 + 24i64))(qword_140C64F50, a1);
}
// 140A69B80: using guessed type wchar_t *off_140A69B80[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A38: using guessed type int dword_140C63A38;
// 140C64F50: using guessed type __int64 qword_140C64F50;

