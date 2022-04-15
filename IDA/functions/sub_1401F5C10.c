#include "../winhttp.h"

//----- (00000001401F5C10) ----------------------------------------------------
__int64 sub_1401F5C10()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69B80, qword_140C63858);
	if (dword_140C63A38 || (int)sub_1401F5A00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F50 + 40i64))(qword_140C64F50);
}
// 140A69B80: using guessed type wchar_t *off_140A69B80[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A38: using guessed type int dword_140C63A38;
// 140C64F50: using guessed type __int64 qword_140C64F50;

