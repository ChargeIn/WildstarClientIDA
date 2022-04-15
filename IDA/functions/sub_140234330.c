#include "../winhttp.h"

//----- (0000000140234330) ----------------------------------------------------
__int64 sub_140234330()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CEE8, qword_140C63858);
	if (dword_140C64020 || (int)sub_140234120() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C643F8 + 40i64))(qword_140C643F8);
}
// 140A6CEE8: using guessed type wchar_t *off_140A6CEE8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64020: using guessed type int dword_140C64020;
// 140C643F8: using guessed type __int64 qword_140C643F8;

