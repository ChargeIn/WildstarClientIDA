#include "../winhttp.h"

//----- (00000001401EF6C0) ----------------------------------------------------
__int64 __fastcall sub_1401EF6C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69640, a1, qword_140C63858);
	if (dword_140C63878 || (int)sub_1401EF400() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63860 + 32i64))(qword_140C63860, a1);
}
// 140A69640: using guessed type wchar_t *off_140A69640[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63860: using guessed type __int64 qword_140C63860;
// 140C63878: using guessed type int dword_140C63878;

