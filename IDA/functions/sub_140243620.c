#include "../winhttp.h"

//----- (0000000140243620) ----------------------------------------------------
__int64 __fastcall sub_140243620(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DB60, a1, qword_140C63858);
	if (dword_140C63D5C || (int)sub_140243360() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643A0 + 32i64))(qword_140C643A0, a1);
}
// 140A6DB60: using guessed type wchar_t *off_140A6DB60[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D5C: using guessed type int dword_140C63D5C;
// 140C643A0: using guessed type __int64 qword_140C643A0;

