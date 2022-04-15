#include "../winhttp.h"

//----- (000000014023F220) ----------------------------------------------------
__int64 __fastcall sub_14023F220(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D7E0, a1, qword_140C63858);
	if (dword_140C647B4 || (int)sub_14023EF60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B18 + 32i64))(qword_140C63B18, a1);
}
// 140A6D7E0: using guessed type wchar_t *off_140A6D7E0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B18: using guessed type __int64 qword_140C63B18;
// 140C647B4: using guessed type int dword_140C647B4;

