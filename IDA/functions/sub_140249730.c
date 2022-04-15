#include "../winhttp.h"

//----- (0000000140249730) ----------------------------------------------------
__int64 sub_140249730()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E068, qword_140C63858);
	if (dword_140C64A78 || (int)sub_140249520() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BA0 + 40i64))(qword_140C64BA0);
}
// 140A6E068: using guessed type wchar_t *off_140A6E068[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A78: using guessed type int dword_140C64A78;
// 140C64BA0: using guessed type __int64 qword_140C64BA0;

