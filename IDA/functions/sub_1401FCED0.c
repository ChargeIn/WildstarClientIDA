#include "../winhttp.h"

//----- (00000001401FCED0) ----------------------------------------------------
__int64 sub_1401FCED0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A168, qword_140C63858);
	if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AE0 + 40i64))(qword_140C63AE0);
}
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;

