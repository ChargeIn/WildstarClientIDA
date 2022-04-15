#include "../winhttp.h"

//----- (00000001402078D0) ----------------------------------------------------
__int64 sub_1402078D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AA28, qword_140C63858);
	if (dword_140C6542C || (int)sub_1402076C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E88 + 40i64))(qword_140C64E88);
}
// 140A6AA28: using guessed type wchar_t *off_140A6AA28[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E88: using guessed type __int64 qword_140C64E88;
// 140C6542C: using guessed type int dword_140C6542C;

