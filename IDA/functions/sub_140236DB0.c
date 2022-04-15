#include "../winhttp.h"

//----- (0000000140236DB0) ----------------------------------------------------
__int64 sub_140236DB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D118, qword_140C63858);
	if (dword_140C64510 || (int)sub_140236BA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654E0 + 40i64))(qword_140C654E0);
}
// 140A6D118: using guessed type wchar_t *off_140A6D118[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64510: using guessed type int dword_140C64510;
// 140C654E0: using guessed type __int64 qword_140C654E0;

