#include "../winhttp.h"

//----- (000000014023CF70) ----------------------------------------------------
__int64 sub_14023CF70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D620, qword_140C63858);
	if (dword_140C64680 || (int)sub_14023CD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64558 + 40i64))(qword_140C64558);
}
// 140A6D620: using guessed type wchar_t *off_140A6D620[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64558: using guessed type __int64 qword_140C64558;
// 140C64680: using guessed type int dword_140C64680;

