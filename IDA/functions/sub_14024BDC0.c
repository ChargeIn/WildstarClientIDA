#include "../winhttp.h"

//----- (000000014024BDC0) ----------------------------------------------------
__int64 __fastcall sub_14024BDC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E260, a1, qword_140C63858);
	if (dword_140C649D8 || (int)sub_14024BB60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64CD0 + 24i64))(qword_140C64CD0, a1);
}
// 140A6E260: using guessed type wchar_t *off_140A6E260[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C649D8: using guessed type int dword_140C649D8;
// 140C64CD0: using guessed type __int64 qword_140C64CD0;

