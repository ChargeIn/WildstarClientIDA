#include "../winhttp.h"

//----- (0000000140231CF0) ----------------------------------------------------
__int64 sub_140231CF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CCF0, qword_140C63858);
	if (dword_140C647D8 || (int)sub_140231AE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63920 + 40i64))(qword_140C63920);
}
// 140A6CCF0: using guessed type wchar_t *off_140A6CCF0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63920: using guessed type __int64 qword_140C63920;
// 140C647D8: using guessed type int dword_140C647D8;

