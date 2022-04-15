#include "../winhttp.h"

//----- (00000001401EE0D0) ----------------------------------------------------
__int64 sub_1401EE0D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69528, qword_140C63858);
	if (dword_140C639B0 || (int)sub_1401EDEC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A08 + 40i64))(qword_140C63A08);
}
// 140A69528: using guessed type wchar_t *off_140A69528[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639B0: using guessed type int dword_140C639B0;
// 140C63A08: using guessed type __int64 qword_140C63A08;

