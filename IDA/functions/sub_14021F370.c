#include "../winhttp.h"

//----- (000000014021F370) ----------------------------------------------------
__int64 sub_14021F370()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BDA0, qword_140C63858);
	if (dword_140C64EC8 || (int)sub_14021F160() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E80 + 40i64))(qword_140C64E80);
}
// 140A6BDA0: using guessed type wchar_t *off_140A6BDA0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E80: using guessed type __int64 qword_140C64E80;
// 140C64EC8: using guessed type int dword_140C64EC8;

