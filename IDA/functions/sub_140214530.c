#include "../winhttp.h"

//----- (0000000140214530) ----------------------------------------------------
__int64 sub_140214530()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B4A8, qword_140C63858);
	if (dword_140C64CE4 || (int)sub_140214320() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C38 + 40i64))(qword_140C63C38);
}
// 140A6B4A8: using guessed type wchar_t *off_140A6B4A8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C38: using guessed type __int64 qword_140C63C38;
// 140C64CE4: using guessed type int dword_140C64CE4;

