#include "../winhttp.h"

//----- (000000014021DE30) ----------------------------------------------------
__int64 sub_14021DE30()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BC88, qword_140C63858);
	if (dword_140C63A20 || (int)sub_14021DC20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BF8 + 40i64))(qword_140C64BF8);
}
// 140A6BC88: using guessed type wchar_t *off_140A6BC88[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A20: using guessed type int dword_140C63A20;
// 140C64BF8: using guessed type __int64 qword_140C64BF8;

