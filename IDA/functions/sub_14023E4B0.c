#include "../winhttp.h"

//----- (000000014023E4B0) ----------------------------------------------------
__int64 sub_14023E4B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D738, qword_140C63858);
	if (dword_140C63B9C || (int)sub_14023E2A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646F0 + 40i64))(qword_140C646F0);
}
// 140A6D738: using guessed type wchar_t *off_140A6D738[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B9C: using guessed type int dword_140C63B9C;
// 140C646F0: using guessed type __int64 qword_140C646F0;

