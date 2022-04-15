#include "../winhttp.h"

//----- (00000001402439B0) ----------------------------------------------------
__int64 sub_1402439B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DB98, qword_140C63858);
	if (dword_140C64E9C || (int)sub_1402437A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64CB0 + 40i64))(qword_140C64CB0);
}
// 140A6DB98: using guessed type wchar_t *off_140A6DB98[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64CB0: using guessed type __int64 qword_140C64CB0;
// 140C64E9C: using guessed type int dword_140C64E9C;

