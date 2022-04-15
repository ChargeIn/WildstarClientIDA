#include "../winhttp.h"

//----- (000000014024B4F0) ----------------------------------------------------
__int64 sub_14024B4F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E1F0, qword_140C63858);
	if (dword_140C651F0 || (int)sub_14024B2E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63E90 + 40i64))(qword_140C63E90);
}
// 140A6E1F0: using guessed type wchar_t *off_140A6E1F0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E90: using guessed type __int64 qword_140C63E90;
// 140C651F0: using guessed type int dword_140C651F0;

