#include "../winhttp.h"

//----- (000000014020D210) ----------------------------------------------------
__int64 sub_14020D210()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AEC0, qword_140C63858);
	if (dword_140C63F84 || (int)sub_14020D000() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64608 + 40i64))(qword_140C64608);
}
// 140A6AEC0: using guessed type wchar_t *off_140A6AEC0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F84: using guessed type int dword_140C63F84;
// 140C64608: using guessed type __int64 qword_140C64608;

