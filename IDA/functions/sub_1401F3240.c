#include "../winhttp.h"

//----- (00000001401F3240) ----------------------------------------------------
__int64 __fastcall sub_1401F3240(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69950, a1, qword_140C63858);
	if (dword_140C65254 || (int)sub_1401F2F80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 32i64))(qword_140C63C28, a1);
}
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C65254: using guessed type int dword_140C65254;

