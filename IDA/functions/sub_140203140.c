#include "../winhttp.h"

//----- (0000000140203140) ----------------------------------------------------
__int64 __fastcall sub_140203140(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A670, a1, qword_140C63858);
	if (dword_140C63B5C || (int)sub_140202E80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65030 + 32i64))(qword_140C65030, a1);
}
// 140A6A670: using guessed type wchar_t *off_140A6A670[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B5C: using guessed type int dword_140C63B5C;
// 140C65030: using guessed type __int64 qword_140C65030;

