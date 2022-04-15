#include "../winhttp.h"

//----- (00000001402096E0) ----------------------------------------------------
__int64 __fastcall sub_1402096E0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6ABB0, a1, qword_140C63858);
	if (dword_140C649FC || (int)sub_140209480() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 24i64))(qword_140C640E8, a1);
}
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C649FC: using guessed type int dword_140C649FC;

