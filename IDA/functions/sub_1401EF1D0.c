#include "../winhttp.h"

//----- (00000001401EF1D0) ----------------------------------------------------
__int64 sub_1401EF1D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69608, qword_140C63858);
	if (dword_140C64470 || (int)sub_1401EEFC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C645B8 + 40i64))(qword_140C645B8);
}
// 140A69608: using guessed type wchar_t *off_140A69608[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64470: using guessed type int dword_140C64470;
// 140C645B8: using guessed type __int64 qword_140C645B8;

