#include "../winhttp.h"

//----- (0000000140202810) ----------------------------------------------------
__int64 sub_140202810()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A600, qword_140C63858);
	if (dword_140C63B20 || (int)sub_140202600() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64AA0 + 40i64))(qword_140C64AA0);
}
// 140A6A600: using guessed type wchar_t *off_140A6A600[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B20: using guessed type int dword_140C63B20;
// 140C64AA0: using guessed type __int64 qword_140C64AA0;

