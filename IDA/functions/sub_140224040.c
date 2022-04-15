#include "../winhttp.h"

//----- (0000000140224040) ----------------------------------------------------
__int64 __fastcall sub_140224040(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C190, a1, qword_140C63858);
	if (dword_140C648D8 || (int)sub_140223DE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64548 + 24i64))(qword_140C64548, a1);
}
// 140A6C190: using guessed type wchar_t *off_140A6C190[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64548: using guessed type __int64 qword_140C64548;
// 140C648D8: using guessed type int dword_140C648D8;

