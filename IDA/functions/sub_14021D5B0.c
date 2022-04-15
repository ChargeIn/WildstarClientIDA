#include "../winhttp.h"

//----- (000000014021D5B0) ----------------------------------------------------
__int64 sub_14021D5B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BC18, qword_140C63858);
	if (dword_140C6467C || (int)sub_14021D3A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F68 + 40i64))(qword_140C64F68);
}
// 140A6BC18: using guessed type wchar_t *off_140A6BC18[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6467C: using guessed type int dword_140C6467C;
// 140C64F68: using guessed type __int64 qword_140C64F68;

