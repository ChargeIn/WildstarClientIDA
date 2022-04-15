#include "../winhttp.h"

//----- (00000001401E9CD0) ----------------------------------------------------
__int64 sub_1401E9CD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A691A8, qword_140C63858);
	if (dword_140C65614 || (int)sub_1401E9AC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64588 + 40i64))(qword_140C64588);
}
// 140A691A8: using guessed type wchar_t *off_140A691A8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64588: using guessed type __int64 qword_140C64588;
// 140C65614: using guessed type int dword_140C65614;

