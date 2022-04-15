#include "../winhttp.h"

//----- (000000014021F420) ----------------------------------------------------
__int64 __fastcall sub_14021F420(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BDA0, a1, qword_140C63858);
	if (dword_140C64EC8 || (int)sub_14021F160() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E80 + 32i64))(qword_140C64E80, a1);
}
// 140A6BDA0: using guessed type wchar_t *off_140A6BDA0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E80: using guessed type __int64 qword_140C64E80;
// 140C64EC8: using guessed type int dword_140C64EC8;

