#include "../winhttp.h"

//----- (000000014021DE80) ----------------------------------------------------
__int64 __fastcall sub_14021DE80(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BC88, a1, qword_140C63858);
	if (dword_140C63A20 || (int)sub_14021DC20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BF8 + 24i64))(qword_140C64BF8, a1);
}
// 140A6BC88: using guessed type wchar_t *off_140A6BC88[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A20: using guessed type int dword_140C63A20;
// 140C64BF8: using guessed type __int64 qword_140C64BF8;

