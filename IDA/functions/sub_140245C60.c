#include "../winhttp.h"

//----- (0000000140245C60) ----------------------------------------------------
__int64 __fastcall sub_140245C60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DD58, a1, qword_140C63858);
	if (dword_140C654F8 || (int)sub_1402459A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(qword_140C63868, a1);
}
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;

