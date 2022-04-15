#include "../winhttp.h"

//----- (000000014022E1C0) ----------------------------------------------------
__int64 __fastcall sub_14022E1C0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C9E0, a1, qword_140C63858);
	if (dword_140C63CDC || (int)sub_14022DF60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D00 + 24i64))(qword_140C64D00, a1);
}
// 140A6C9E0: using guessed type wchar_t *off_140A6C9E0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CDC: using guessed type int dword_140C63CDC;
// 140C64D00: using guessed type __int64 qword_140C64D00;

