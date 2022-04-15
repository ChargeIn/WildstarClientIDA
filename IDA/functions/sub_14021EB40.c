#include "../winhttp.h"

//----- (000000014021EB40) ----------------------------------------------------
__int64 __fastcall sub_14021EB40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BD30, a1, qword_140C63858);
	if (dword_140C63F78 || (int)sub_14021E8E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64418 + 24i64))(qword_140C64418, a1);
}
// 140A6BD30: using guessed type wchar_t *off_140A6BD30[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F78: using guessed type int dword_140C63F78;
// 140C64418: using guessed type __int64 qword_140C64418;

