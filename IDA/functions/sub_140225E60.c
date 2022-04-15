#include "../winhttp.h"

//----- (0000000140225E60) ----------------------------------------------------
__int64 __fastcall sub_140225E60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C318, a1, qword_140C63858);
	if (dword_140C64F10 || (int)sub_140225BA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64758 + 32i64))(qword_140C64758, a1);
}
// 140A6C318: using guessed type wchar_t *off_140A6C318[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64758: using guessed type __int64 qword_140C64758;
// 140C64F10: using guessed type int dword_140C64F10;

