#include "../winhttp.h"

//----- (0000000140242470) ----------------------------------------------------
__int64 sub_140242470()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DA80, qword_140C63858);
	if (dword_140C65238 || (int)sub_140242260() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65120 + 40i64))(qword_140C65120);
}
// 140A6DA80: using guessed type wchar_t *off_140A6DA80[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65120: using guessed type __int64 qword_140C65120;
// 140C65238: using guessed type int dword_140C65238;

