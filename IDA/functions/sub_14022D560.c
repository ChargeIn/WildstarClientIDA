#include "../winhttp.h"

//----- (000000014022D560) ----------------------------------------------------
__int64 __fastcall sub_14022D560(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C938, a1, qword_140C63858);
	if (dword_140C64C3C || (int)sub_14022D2A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63918 + 32i64))(qword_140C63918, a1);
}
// 140A6C938: using guessed type wchar_t *off_140A6C938[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63918: using guessed type __int64 qword_140C63918;
// 140C64C3C: using guessed type int dword_140C64C3C;

