#include "../winhttp.h"

//----- (000000014022AEC0) ----------------------------------------------------
__int64 __fastcall sub_14022AEC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C740, a1, qword_140C63858);
	if (dword_140C64A1C || (int)sub_14022AC60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F70 + 24i64))(qword_140C64F70, a1);
}
// 140A6C740: using guessed type wchar_t *off_140A6C740[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A1C: using guessed type int dword_140C64A1C;
// 140C64F70: using guessed type __int64 qword_140C64F70;

