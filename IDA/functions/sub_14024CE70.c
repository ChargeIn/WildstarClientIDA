#include "../winhttp.h"

//----- (000000014024CE70) ----------------------------------------------------
__int64 sub_14024CE70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E340, qword_140C63858);
	if (dword_140C650C0 || (int)sub_14024CC60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C643C0 + 40i64))(qword_140C643C0);
}
// 140A6E340: using guessed type wchar_t *off_140A6E340[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C643C0: using guessed type __int64 qword_140C643C0;
// 140C650C0: using guessed type int dword_140C650C0;

