#include "../winhttp.h"

//----- (000000014022B300) ----------------------------------------------------
__int64 __fastcall sub_14022B300(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C778, a1, qword_140C63858);
	if (dword_140C6389C || (int)sub_14022B0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D08 + 24i64))(qword_140C63D08, a1);
}
// 140A6C778: using guessed type wchar_t *off_140A6C778[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6389C: using guessed type int dword_140C6389C;
// 140C63D08: using guessed type __int64 qword_140C63D08;

