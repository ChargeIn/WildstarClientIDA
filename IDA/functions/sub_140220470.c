#include "../winhttp.h"

//----- (0000000140220470) ----------------------------------------------------
__int64 sub_140220470()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BE80, qword_140C63858);
	if (dword_140C65038 || (int)sub_140220260() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D80 + 40i64))(qword_140C63D80);
}
// 140A6BE80: using guessed type wchar_t *off_140A6BE80[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D80: using guessed type __int64 qword_140C63D80;
// 140C65038: using guessed type int dword_140C65038;

