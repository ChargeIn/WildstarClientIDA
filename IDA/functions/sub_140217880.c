#include "../winhttp.h"

//----- (0000000140217880) ----------------------------------------------------
__int64 __fastcall sub_140217880(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B748, a1, qword_140C63858);
	if (dword_140C639F0 || (int)sub_140217620() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64220 + 24i64))(qword_140C64220, a1);
}
// 140A6B748: using guessed type wchar_t *off_140A6B748[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639F0: using guessed type int dword_140C639F0;
// 140C64220: using guessed type __int64 qword_140C64220;

