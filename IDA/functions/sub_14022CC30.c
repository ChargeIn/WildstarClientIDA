#include "../winhttp.h"

//----- (000000014022CC30) ----------------------------------------------------
__int64 sub_14022CC30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C8C8, qword_140C63858);
	if (dword_140C6494C || (int)sub_14022CA20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B78 + 40i64))(qword_140C63B78);
}
// 140A6C8C8: using guessed type wchar_t *off_140A6C8C8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B78: using guessed type __int64 qword_140C63B78;
// 140C6494C: using guessed type int dword_140C6494C;

