#include "../winhttp.h"

//----- (000000014024B980) ----------------------------------------------------
__int64 __fastcall sub_14024B980(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E228, a1, qword_140C63858);
	if (dword_140C63E98 || (int)sub_14024B720() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, a1);
}
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;

