#include "../winhttp.h"

//----- (000000014023ED30) ----------------------------------------------------
__int64 sub_14023ED30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D7A8, qword_140C63858);
	if (dword_140C63C1C || (int)sub_14023EB20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64570 + 40i64))(qword_140C64570);
}
// 140A6D7A8: using guessed type wchar_t *off_140A6D7A8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C1C: using guessed type int dword_140C63C1C;
// 140C64570: using guessed type __int64 qword_140C64570;

