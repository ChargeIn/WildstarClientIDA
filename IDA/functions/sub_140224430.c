#include "../winhttp.h"

//----- (0000000140224430) ----------------------------------------------------
__int64 sub_140224430()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C1C8, qword_140C63858);
	if (dword_140C63E5C || (int)sub_140224220() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C647F0 + 40i64))(qword_140C647F0);
}
// 140A6C1C8: using guessed type wchar_t *off_140A6C1C8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E5C: using guessed type int dword_140C63E5C;
// 140C647F0: using guessed type __int64 qword_140C647F0;

