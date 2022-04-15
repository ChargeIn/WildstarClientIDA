#include "../winhttp.h"

//----- (00000001402200E0) ----------------------------------------------------
__int64 __fastcall sub_1402200E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BE48, a1, qword_140C63858);
	if (dword_140C63F88 || (int)sub_14021FE20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B60 + 32i64))(qword_140C64B60, a1);
}
// 140A6BE48: using guessed type wchar_t *off_140A6BE48[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F88: using guessed type int dword_140C63F88;
// 140C64B60: using guessed type __int64 qword_140C64B60;

