#include "../winhttp.h"

//----- (000000014024D6F0) ----------------------------------------------------
__int64 sub_14024D6F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E3B0, qword_140C63858);
	if (dword_140C63980 || (int)sub_14024D4E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65330 + 40i64))(qword_140C65330);
}
// 140A6E3B0: using guessed type wchar_t *off_140A6E3B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63980: using guessed type int dword_140C63980;
// 140C65330: using guessed type __int64 qword_140C65330;

