#include "../winhttp.h"

//----- (000000014024DF70) ----------------------------------------------------
__int64 sub_14024DF70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E420, qword_140C63858);
	if (dword_140C64E0C || (int)sub_14024DD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63988 + 40i64))(qword_140C63988);
}
// 140A6E420: using guessed type wchar_t *off_140A6E420[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63988: using guessed type __int64 qword_140C63988;
// 140C64E0C: using guessed type int dword_140C64E0C;

