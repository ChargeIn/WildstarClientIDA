#include "../winhttp.h"

//----- (000000014024A440) ----------------------------------------------------
__int64 __fastcall sub_14024A440(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E110, a1, qword_140C63858);
	if (dword_140C64BC0 || (int)sub_14024A1E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65460 + 24i64))(qword_140C65460, a1);
}
// 140A6E110: using guessed type wchar_t *off_140A6E110[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64BC0: using guessed type int dword_140C64BC0;
// 140C65460: using guessed type __int64 qword_140C65460;

