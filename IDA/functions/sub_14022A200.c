#include "../winhttp.h"

//----- (000000014022A200) ----------------------------------------------------
__int64 __fastcall sub_14022A200(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C698, a1, qword_140C63858);
	if (dword_140C65308 || (int)sub_140229FA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655B0 + 24i64))(qword_140C655B0, a1);
}
// 140A6C698: using guessed type wchar_t *off_140A6C698[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65308: using guessed type int dword_140C65308;
// 140C655B0: using guessed type __int64 qword_140C655B0;

