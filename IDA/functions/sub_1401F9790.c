#include "../winhttp.h"

//----- (00000001401F9790) ----------------------------------------------------
__int64 sub_1401F9790()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69E90, qword_140C63858);
	if (dword_140C64974 || (int)sub_1401F9580() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64398 + 40i64))(qword_140C64398);
}
// 140A69E90: using guessed type wchar_t *off_140A69E90[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64398: using guessed type __int64 qword_140C64398;
// 140C64974: using guessed type int dword_140C64974;

