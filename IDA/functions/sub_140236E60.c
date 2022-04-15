#include "../winhttp.h"

//----- (0000000140236E60) ----------------------------------------------------
__int64 __fastcall sub_140236E60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D118, a1, qword_140C63858);
	if (dword_140C64510 || (int)sub_140236BA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E0 + 32i64))(qword_140C654E0, a1);
}
// 140A6D118: using guessed type wchar_t *off_140A6D118[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64510: using guessed type int dword_140C64510;
// 140C654E0: using guessed type __int64 qword_140C654E0;

