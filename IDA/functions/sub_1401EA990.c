#include "../winhttp.h"

//----- (00000001401EA990) ----------------------------------------------------
__int64 sub_1401EA990()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69250, qword_140C63858);
	if (dword_140C64434 || (int)sub_1401EA780() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F08 + 40i64))(qword_140C63F08);
}
// 140A69250: using guessed type wchar_t *off_140A69250[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F08: using guessed type __int64 qword_140C63F08;
// 140C64434: using guessed type int dword_140C64434;

