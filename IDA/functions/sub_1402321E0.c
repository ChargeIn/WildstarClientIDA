#include "../winhttp.h"

//----- (00000001402321E0) ----------------------------------------------------
__int64 __fastcall sub_1402321E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CD28, a1, qword_140C63858);
	if (dword_140C63A9C || (int)sub_140231F20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63990 + 32i64))(qword_140C63990, a1);
}
// 140A6CD28: using guessed type wchar_t *off_140A6CD28[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63990: using guessed type __int64 qword_140C63990;
// 140C63A9C: using guessed type int dword_140C63A9C;

