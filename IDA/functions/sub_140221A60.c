#include "../winhttp.h"

//----- (0000000140221A60) ----------------------------------------------------
__int64 __fastcall sub_140221A60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BF98, a1, qword_140C63858);
	if (dword_140C650B0 || (int)sub_1402217A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64660 + 32i64))(qword_140C64660, a1);
}
// 140A6BF98: using guessed type wchar_t *off_140A6BF98[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64660: using guessed type __int64 qword_140C64660;
// 140C650B0: using guessed type int dword_140C650B0;

