#include "../winhttp.h"

//----- (00000001401FD750) ----------------------------------------------------
__int64 sub_1401FD750()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A1D8, qword_140C63858);
	if (dword_140C65444 || (int)sub_1401FD540() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653A0 + 40i64))(qword_140C653A0);
}
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;

