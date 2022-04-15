#include "../winhttp.h"

//----- (000000014021AB30) ----------------------------------------------------
__int64 sub_14021AB30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B9E8, qword_140C63858);
	if (dword_140C6556C || (int)sub_14021A920() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63CB0 + 40i64))(qword_140C63CB0);
}
// 140A6B9E8: using guessed type wchar_t *off_140A6B9E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CB0: using guessed type __int64 qword_140C63CB0;
// 140C6556C: using guessed type int dword_140C6556C;

