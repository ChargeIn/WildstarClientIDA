#include "../winhttp.h"

//----- (000000014024CAE0) ----------------------------------------------------
__int64 __fastcall sub_14024CAE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E308, a1, qword_140C63858);
	if (dword_140C64B50 || (int)sub_14024C820() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65110 + 32i64))(qword_140C65110, a1);
}
// 140A6E308: using guessed type wchar_t *off_140A6E308[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B50: using guessed type int dword_140C64B50;
// 140C65110: using guessed type __int64 qword_140C65110;

