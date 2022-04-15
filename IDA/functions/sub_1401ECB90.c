#include "../winhttp.h"

//----- (00000001401ECB90) ----------------------------------------------------
__int64 sub_1401ECB90()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69410, qword_140C63858);
	if (dword_140C650B4 || (int)sub_1401EC980() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64650 + 40i64))(qword_140C64650);
}
// 140A69410: using guessed type wchar_t *off_140A69410[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64650: using guessed type __int64 qword_140C64650;
// 140C650B4: using guessed type int dword_140C650B4;

