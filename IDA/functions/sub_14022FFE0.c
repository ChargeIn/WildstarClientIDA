#include "../winhttp.h"

//----- (000000014022FFE0) ----------------------------------------------------
__int64 __fastcall sub_14022FFE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CB68, a1, qword_140C63858);
	if (dword_140C63898 || (int)sub_14022FD20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64480 + 32i64))(qword_140C64480, a1);
}
// 140A6CB68: using guessed type wchar_t *off_140A6CB68[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63898: using guessed type int dword_140C63898;
// 140C64480: using guessed type __int64 qword_140C64480;

