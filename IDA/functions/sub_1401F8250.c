#include "../winhttp.h"

//----- (00000001401F8250) ----------------------------------------------------
__int64 sub_1401F8250()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69D78, qword_140C63858);
	if (dword_140C64534 || (int)sub_1401F8040() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65420 + 40i64))(qword_140C65420);
}
// 140A69D78: using guessed type wchar_t *off_140A69D78[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64534: using guessed type int dword_140C64534;
// 140C65420: using guessed type __int64 qword_140C65420;

