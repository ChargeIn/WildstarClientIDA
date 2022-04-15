#include "../winhttp.h"

//----- (0000000140242CF0) ----------------------------------------------------
__int64 sub_140242CF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DAF0, qword_140C63858);
	if (dword_140C64D70 || (int)sub_140242AE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64068 + 40i64))(qword_140C64068);
}
// 140A6DAF0: using guessed type wchar_t *off_140A6DAF0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64068: using guessed type __int64 qword_140C64068;
// 140C64D70: using guessed type int dword_140C64D70;

