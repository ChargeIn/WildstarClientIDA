#include "../winhttp.h"

//----- (0000000140200A50) ----------------------------------------------------
__int64 sub_140200A50()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A478, qword_140C63858);
	if (dword_140C642F8 || (int)sub_140200840() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64460 + 40i64))(qword_140C64460);
}
// 140A6A478: using guessed type wchar_t *off_140A6A478[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642F8: using guessed type int dword_140C642F8;
// 140C64460: using guessed type __int64 qword_140C64460;

