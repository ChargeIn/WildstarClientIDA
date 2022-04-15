#include "../winhttp.h"

//----- (000000014022FBA0) ----------------------------------------------------
__int64 __fastcall sub_14022FBA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CB30, a1, qword_140C63858);
	if (dword_140C64948 || (int)sub_14022F8E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D0 + 32i64))(qword_140C644D0, a1);
}
// 140A6CB30: using guessed type wchar_t *off_140A6CB30[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D0: using guessed type __int64 qword_140C644D0;
// 140C64948: using guessed type int dword_140C64948;

