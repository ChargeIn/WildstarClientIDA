#include "../winhttp.h"

//----- (000000014023AE20) ----------------------------------------------------
__int64 __fastcall sub_14023AE20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D460, a1, qword_140C63858);
	if (dword_140C65554 || (int)sub_14023AB60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D78 + 32i64))(qword_140C64D78, a1);
}
// 140A6D460: using guessed type wchar_t *off_140A6D460[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D78: using guessed type __int64 qword_140C64D78;
// 140C65554: using guessed type int dword_140C65554;

