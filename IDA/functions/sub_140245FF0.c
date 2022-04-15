#include "../winhttp.h"

//----- (0000000140245FF0) ----------------------------------------------------
__int64 sub_140245FF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DD90, qword_140C63858);
	if (dword_140C64D74 || (int)sub_140245DE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B08 + 40i64))(qword_140C63B08);
}
// 140A6DD90: using guessed type wchar_t *off_140A6DD90[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B08: using guessed type __int64 qword_140C63B08;
// 140C64D74: using guessed type int dword_140C64D74;

