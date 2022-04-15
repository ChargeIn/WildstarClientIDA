#include "../winhttp.h"

//----- (0000000140222280) ----------------------------------------------------
__int64 __fastcall sub_140222280(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C008, a1, qword_140C63858);
	if (dword_140C64874 || (int)sub_140222020() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650B8 + 24i64))(qword_140C650B8, a1);
}
// 140A6C008: using guessed type wchar_t *off_140A6C008[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64874: using guessed type int dword_140C64874;
// 140C650B8: using guessed type __int64 qword_140C650B8;

