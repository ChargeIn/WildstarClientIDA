#include "../winhttp.h"

//----- (0000000140217C70) ----------------------------------------------------
__int64 sub_140217C70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B780, qword_140C63858);
	if (dword_140C64C4C || (int)sub_140217A60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65358 + 40i64))(qword_140C65358);
}
// 140A6B780: using guessed type wchar_t *off_140A6B780[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C4C: using guessed type int dword_140C64C4C;
// 140C65358: using guessed type __int64 qword_140C65358;

