#include "../winhttp.h"

//----- (00000001402174A0) ----------------------------------------------------
__int64 __fastcall sub_1402174A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B710, a1, qword_140C63858);
	if (dword_140C6565C || (int)sub_1402171E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65548 + 32i64))(qword_140C65548, a1);
}
// 140A6B710: using guessed type wchar_t *off_140A6B710[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65548: using guessed type __int64 qword_140C65548;
// 140C6565C: using guessed type int dword_140C6565C;

