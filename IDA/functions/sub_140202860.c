#include "../winhttp.h"

//----- (0000000140202860) ----------------------------------------------------
__int64 __fastcall sub_140202860(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A600, a1, qword_140C63858);
	if (dword_140C63B20 || (int)sub_140202600() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AA0 + 24i64))(qword_140C64AA0, a1);
}
// 140A6A600: using guessed type wchar_t *off_140A6A600[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B20: using guessed type int dword_140C63B20;
// 140C64AA0: using guessed type __int64 qword_140C64AA0;

