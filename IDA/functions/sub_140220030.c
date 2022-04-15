#include "../winhttp.h"

//----- (0000000140220030) ----------------------------------------------------
__int64 sub_140220030()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BE48, qword_140C63858);
	if (dword_140C63F88 || (int)sub_14021FE20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64B60 + 40i64))(qword_140C64B60);
}
// 140A6BE48: using guessed type wchar_t *off_140A6BE48[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F88: using guessed type int dword_140C63F88;
// 140C64B60: using guessed type __int64 qword_140C64B60;

