#include "../winhttp.h"

//----- (0000000140235870) ----------------------------------------------------
__int64 sub_140235870()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D000, qword_140C63858);
	if (dword_140C651C0 || (int)sub_140235660() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C652F0 + 40i64))(qword_140C652F0);
}
// 140A6D000: using guessed type wchar_t *off_140A6D000[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C651C0: using guessed type int dword_140C651C0;
// 140C652F0: using guessed type __int64 qword_140C652F0;

