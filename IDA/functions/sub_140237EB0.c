#include "../winhttp.h"

//----- (0000000140237EB0) ----------------------------------------------------
__int64 sub_140237EB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D1F8, qword_140C63858);
	if (dword_140C642EC || (int)sub_140237CA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65590 + 40i64))(qword_140C65590);
}
// 140A6D1F8: using guessed type wchar_t *off_140A6D1F8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642EC: using guessed type int dword_140C642EC;
// 140C65590: using guessed type __int64 qword_140C65590;

