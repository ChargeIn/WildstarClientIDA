#include "../winhttp.h"

//----- (0000000140221EA0) ----------------------------------------------------
__int64 __fastcall sub_140221EA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BFD0, a1, qword_140C63858);
	if (dword_140C64500 || (int)sub_140221BE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64300 + 32i64))(qword_140C64300, a1);
}
// 140A6BFD0: using guessed type wchar_t *off_140A6BFD0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64300: using guessed type __int64 qword_140C64300;
// 140C64500: using guessed type int dword_140C64500;

