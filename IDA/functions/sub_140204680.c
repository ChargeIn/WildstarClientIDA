#include "../winhttp.h"

//----- (0000000140204680) ----------------------------------------------------
__int64 __fastcall sub_140204680(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A788, a1, qword_140C63858);
	if (dword_140C64DB4 || (int)sub_1402043C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63998 + 32i64))(qword_140C63998, a1);
}
// 140A6A788: using guessed type wchar_t *off_140A6A788[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63998: using guessed type __int64 qword_140C63998;
// 140C64DB4: using guessed type int dword_140C64DB4;

