#include "../winhttp.h"

//----- (00000001401E9890) ----------------------------------------------------
__int64 sub_1401E9890()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69170, qword_140C63858);
	if (dword_140C638BC || (int)sub_1401E9680() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64768 + 40i64))(qword_140C64768);
}
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;

