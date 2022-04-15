#include "../winhttp.h"

//----- (0000000140236530) ----------------------------------------------------
__int64 sub_140236530()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D0A8, qword_140C63858);
	if (dword_140C64D94 || (int)sub_140236320() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
}
// 140A6D0A8: using guessed type wchar_t *off_140A6D0A8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D94: using guessed type int dword_140C64D94;
// 140C653F0: using guessed type __int64 qword_140C653F0;

