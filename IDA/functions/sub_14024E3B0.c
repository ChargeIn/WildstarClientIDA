#include "../winhttp.h"

//----- (000000014024E3B0) ----------------------------------------------------
__int64 sub_14024E3B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E458, qword_140C63858);
	if (dword_140C63A50 || (int)sub_14024E1A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F98 + 40i64))(qword_140C64F98);
}
// 140A6E458: using guessed type wchar_t *off_140A6E458[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A50: using guessed type int dword_140C63A50;
// 140C64F98: using guessed type __int64 qword_140C64F98;

