#include "../winhttp.h"

//----- (000000014022B7A0) ----------------------------------------------------
__int64 __fastcall sub_14022B7A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C7B0, a1, qword_140C63858);
	if (dword_140C6462C || (int)sub_14022B4E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DF0 + 32i64))(qword_140C64DF0, a1);
}
// 140A6C7B0: using guessed type wchar_t *off_140A6C7B0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6462C: using guessed type int dword_140C6462C;
// 140C64DF0: using guessed type __int64 qword_140C64DF0;

