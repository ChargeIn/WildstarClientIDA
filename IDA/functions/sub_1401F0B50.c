#include "../winhttp.h"

//----- (00000001401F0B50) ----------------------------------------------------
__int64 sub_1401F0B50()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69758, qword_140C63858);
	if (dword_140C65200 || (int)sub_1401F0940() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63FD8 + 40i64))(qword_140C63FD8);
}
// 140A69758: using guessed type wchar_t *off_140A69758[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD8: using guessed type __int64 qword_140C63FD8;
// 140C65200: using guessed type int dword_140C65200;

