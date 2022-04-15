#include "../winhttp.h"

//----- (0000000140245820) ----------------------------------------------------
__int64 __fastcall sub_140245820(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DD20, a1, qword_140C63858);
	if (dword_140C63DE8 || (int)sub_140245560() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64828 + 32i64))(qword_140C64828, a1);
}
// 140A6DD20: using guessed type wchar_t *off_140A6DD20[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DE8: using guessed type int dword_140C63DE8;
// 140C64828: using guessed type __int64 qword_140C64828;

