#include "../winhttp.h"

//----- (0000000140212C00) ----------------------------------------------------
__int64 __fastcall sub_140212C00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B358, a1, qword_140C63858);
	if (dword_140C63E08 || (int)sub_1402129A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AB8 + 24i64))(qword_140C63AB8, a1);
}
// 140A6B358: using guessed type wchar_t *off_140A6B358[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AB8: using guessed type __int64 qword_140C63AB8;
// 140C63E08: using guessed type int dword_140C63E08;

