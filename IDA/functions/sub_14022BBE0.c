#include "../winhttp.h"

//----- (000000014022BBE0) ----------------------------------------------------
__int64 __fastcall sub_14022BBE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C7E8, a1, qword_140C63858);
	if (dword_140C63A18 || (int)sub_14022B920() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D00 + 32i64))(qword_140C63D00, a1);
}
// 140A6C7E8: using guessed type wchar_t *off_140A6C7E8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A18: using guessed type int dword_140C63A18;
// 140C63D00: using guessed type __int64 qword_140C63D00;

