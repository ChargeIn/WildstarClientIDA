#include "../winhttp.h"

//----- (0000000140224870) ----------------------------------------------------
__int64 sub_140224870()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C200, qword_140C63858);
	if (dword_140C64284 || (int)sub_140224660() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B28 + 40i64))(qword_140C63B28);
}
// 140A6C200: using guessed type wchar_t *off_140A6C200[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B28: using guessed type __int64 qword_140C63B28;
// 140C64284: using guessed type int dword_140C64284;

