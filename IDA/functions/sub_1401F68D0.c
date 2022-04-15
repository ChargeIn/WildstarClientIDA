#include "../winhttp.h"

//----- (00000001401F68D0) ----------------------------------------------------
__int64 sub_1401F68D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69C28, qword_140C63858);
	if (dword_140C648E4 || (int)sub_1401F66C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C650A0 + 40i64))(qword_140C650A0);
}
// 140A69C28: using guessed type wchar_t *off_140A69C28[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C648E4: using guessed type int dword_140C648E4;
// 140C650A0: using guessed type __int64 qword_140C650A0;

