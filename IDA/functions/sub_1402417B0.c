#include "../winhttp.h"

//----- (00000001402417B0) ----------------------------------------------------
__int64 sub_1402417B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D9D8, qword_140C63858);
	if (dword_140C64320 || (int)sub_1402415A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AC0 + 40i64))(qword_140C63AC0);
}
// 140A6D9D8: using guessed type wchar_t *off_140A6D9D8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AC0: using guessed type __int64 qword_140C63AC0;
// 140C64320: using guessed type int dword_140C64320;

