#include "../winhttp.h"

//----- (00000001402140F0) ----------------------------------------------------
__int64 sub_1402140F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B470, qword_140C63858);
	if (dword_140C6431C || (int)sub_140213EE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64998 + 40i64))(qword_140C64998);
}
// 140A6B470: using guessed type wchar_t *off_140A6B470[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6431C: using guessed type int dword_140C6431C;
// 140C64998: using guessed type __int64 qword_140C64998;

