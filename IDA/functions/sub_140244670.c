#include "../winhttp.h"

//----- (0000000140244670) ----------------------------------------------------
__int64 sub_140244670()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DC40, qword_140C63858);
	if (dword_140C64F94 || (int)sub_140244460() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64B38 + 40i64))(qword_140C64B38);
}
// 140A6DC40: using guessed type wchar_t *off_140A6DC40[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B38: using guessed type __int64 qword_140C64B38;
// 140C64F94: using guessed type int dword_140C64F94;

