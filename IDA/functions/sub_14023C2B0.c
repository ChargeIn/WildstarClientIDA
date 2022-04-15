#include "../winhttp.h"

//----- (000000014023C2B0) ----------------------------------------------------
__int64 sub_14023C2B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D578, qword_140C63858);
	if (dword_140C654A0 || (int)sub_14023C0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A88 + 40i64))(qword_140C63A88);
}
// 140A6D578: using guessed type wchar_t *off_140A6D578[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A88: using guessed type __int64 qword_140C63A88;
// 140C654A0: using guessed type int dword_140C654A0;

