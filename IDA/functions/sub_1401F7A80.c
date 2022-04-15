#include "../winhttp.h"

//----- (00000001401F7A80) ----------------------------------------------------
__int64 __fastcall sub_1401F7A80(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69D08, a1, qword_140C63858);
	if (dword_140C65448 || (int)sub_1401F77C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65640 + 32i64))(qword_140C65640, a1);
}
// 140A69D08: using guessed type wchar_t *off_140A69D08[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65448: using guessed type int dword_140C65448;
// 140C65640: using guessed type __int64 qword_140C65640;

