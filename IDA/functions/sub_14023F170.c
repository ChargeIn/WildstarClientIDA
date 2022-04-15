#include "../winhttp.h"

//----- (000000014023F170) ----------------------------------------------------
__int64 sub_14023F170()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D7E0, qword_140C63858);
	if (dword_140C647B4 || (int)sub_14023EF60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B18 + 40i64))(qword_140C63B18);
}
// 140A6D7E0: using guessed type wchar_t *off_140A6D7E0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B18: using guessed type __int64 qword_140C63B18;
// 140C647B4: using guessed type int dword_140C647B4;

