#include "../winhttp.h"

//----- (000000014023C6F0) ----------------------------------------------------
__int64 sub_14023C6F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D5B0, qword_140C63858);
	if (dword_140C65130 || (int)sub_14023C4E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BD8 + 40i64))(qword_140C63BD8);
}
// 140A6D5B0: using guessed type wchar_t *off_140A6D5B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BD8: using guessed type __int64 qword_140C63BD8;
// 140C65130: using guessed type int dword_140C65130;

