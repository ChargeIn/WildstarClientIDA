#include "../winhttp.h"

//----- (0000000140200AA0) ----------------------------------------------------
__int64 __fastcall sub_140200AA0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A478, a1, qword_140C63858);
	if (dword_140C642F8 || (int)sub_140200840() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64460 + 24i64))(qword_140C64460, a1);
}
// 140A6A478: using guessed type wchar_t *off_140A6A478[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642F8: using guessed type int dword_140C642F8;
// 140C64460: using guessed type __int64 qword_140C64460;

