#include "../winhttp.h"

//----- (000000014022C3B0) ----------------------------------------------------
__int64 sub_14022C3B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C858, qword_140C63858);
	if (dword_140C64B74 || (int)sub_14022C1A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C638F8 + 40i64))(qword_140C638F8);
}
// 140A6C858: using guessed type wchar_t *off_140A6C858[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638F8: using guessed type __int64 qword_140C638F8;
// 140C64B74: using guessed type int dword_140C64B74;

