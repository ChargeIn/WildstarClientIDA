#include "../winhttp.h"

//----- (000000014024A880) ----------------------------------------------------
__int64 __fastcall sub_14024A880(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E148, a1, qword_140C63858);
	if (dword_140C640C0 || (int)sub_14024A620() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65660 + 24i64))(qword_140C65660, a1);
}
// 140A6E148: using guessed type wchar_t *off_140A6E148[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640C0: using guessed type int dword_140C640C0;
// 140C65660: using guessed type __int64 qword_140C65660;

