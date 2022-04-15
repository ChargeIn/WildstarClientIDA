#include "../winhttp.h"

//----- (00000001402162F0) ----------------------------------------------------
__int64 sub_1402162F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B630, qword_140C63858);
	if (dword_140C655EC || (int)sub_1402160E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A78 + 40i64))(qword_140C63A78);
}
// 140A6B630: using guessed type wchar_t *off_140A6B630[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A78: using guessed type __int64 qword_140C63A78;
// 140C655EC: using guessed type int dword_140C655EC;

