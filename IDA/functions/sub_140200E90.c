#include "../winhttp.h"

//----- (0000000140200E90) ----------------------------------------------------
__int64 sub_140200E90()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A4B0, qword_140C63858);
	if (dword_140C63FA0 || (int)sub_140200C80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A28 + 40i64))(qword_140C63A28);
}
// 140A6A4B0: using guessed type wchar_t *off_140A6A4B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A28: using guessed type __int64 qword_140C63A28;
// 140C63FA0: using guessed type int dword_140C63FA0;

