#include "../winhttp.h"

//----- (0000000140228830) ----------------------------------------------------
__int64 sub_140228830()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C548, qword_140C63858);
	if (dword_140C651A4 || (int)sub_140228620() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64C68 + 40i64))(qword_140C64C68);
}
// 140A6C548: using guessed type wchar_t *off_140A6C548[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C68: using guessed type __int64 qword_140C64C68;
// 140C651A4: using guessed type int dword_140C651A4;

