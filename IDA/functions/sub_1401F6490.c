#include "../winhttp.h"

//----- (00000001401F6490) ----------------------------------------------------
__int64 sub_1401F6490()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69BF0, qword_140C63858);
	if (dword_140C65620 || (int)sub_1401F6280() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64688 + 40i64))(qword_140C64688);
}
// 140A69BF0: using guessed type wchar_t *off_140A69BF0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64688: using guessed type __int64 qword_140C64688;
// 140C65620: using guessed type int dword_140C65620;

