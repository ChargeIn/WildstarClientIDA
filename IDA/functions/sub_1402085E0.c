#include "../winhttp.h"

//----- (00000001402085E0) ----------------------------------------------------
__int64 __fastcall sub_1402085E0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AAD0, a1, qword_140C63858);
	if (dword_140C65488 || (int)sub_140208380() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638D8 + 24i64))(qword_140C638D8, a1);
}
// 140A6AAD0: using guessed type wchar_t *off_140A6AAD0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638D8: using guessed type __int64 qword_140C638D8;
// 140C65488: using guessed type int dword_140C65488;

