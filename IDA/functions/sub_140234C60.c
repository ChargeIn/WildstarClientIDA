#include "../winhttp.h"

//----- (0000000140234C60) ----------------------------------------------------
__int64 __fastcall sub_140234C60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CF58, a1, qword_140C63858);
	if (dword_140C649A4 || (int)sub_1402349A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64240 + 32i64))(qword_140C64240, a1);
}
// 140A6CF58: using guessed type wchar_t *off_140A6CF58[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64240: using guessed type __int64 qword_140C64240;
// 140C649A4: using guessed type int dword_140C649A4;

