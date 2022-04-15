#include "../winhttp.h"

//----- (0000000140234380) ----------------------------------------------------
__int64 __fastcall sub_140234380(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6CEE8, a1, qword_140C63858);
	if (dword_140C64020 || (int)sub_140234120() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643F8 + 24i64))(qword_140C643F8, a1);
}
// 140A6CEE8: using guessed type wchar_t *off_140A6CEE8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64020: using guessed type int dword_140C64020;
// 140C643F8: using guessed type __int64 qword_140C643F8;

