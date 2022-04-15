#include "../winhttp.h"

//----- (00000001402185A0) ----------------------------------------------------
__int64 __fastcall sub_1402185A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B7F0, a1, qword_140C63858);
	if (dword_140C65094 || (int)sub_1402182E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64878 + 32i64))(qword_140C64878, a1);
}
// 140A6B7F0: using guessed type wchar_t *off_140A6B7F0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64878: using guessed type __int64 qword_140C64878;
// 140C65094: using guessed type int dword_140C65094;

