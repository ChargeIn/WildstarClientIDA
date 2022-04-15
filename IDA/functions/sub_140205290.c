#include "../winhttp.h"

//----- (0000000140205290) ----------------------------------------------------
__int64 sub_140205290()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A830, qword_140C63858);
	if (dword_140C639F8 || (int)sub_140205080() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646E8 + 40i64))(qword_140C646E8);
}
// 140A6A830: using guessed type wchar_t *off_140A6A830[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639F8: using guessed type int dword_140C639F8;
// 140C646E8: using guessed type __int64 qword_140C646E8;

