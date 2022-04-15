#include "../winhttp.h"

//----- (0000000140203580) ----------------------------------------------------
__int64 __fastcall sub_140203580(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A6A8, a1, qword_140C63858);
	if (dword_140C65654 || (int)sub_1402032C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DC0 + 32i64))(qword_140C64DC0, a1);
}
// 140A6A6A8: using guessed type wchar_t *off_140A6A6A8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64DC0: using guessed type __int64 qword_140C64DC0;
// 140C65654: using guessed type int dword_140C65654;

