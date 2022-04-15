#include "../winhttp.h"

//----- (000000014020B890) ----------------------------------------------------
__int64 sub_14020B890()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AD70, qword_140C63858);
	if (dword_140C63DA4 || (int)sub_14020B680() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BA8 + 40i64))(qword_140C64BA8);
}
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;

