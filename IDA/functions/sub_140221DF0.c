#include "../winhttp.h"

//----- (0000000140221DF0) ----------------------------------------------------
__int64 sub_140221DF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BFD0, qword_140C63858);
	if (dword_140C64500 || (int)sub_140221BE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64300 + 40i64))(qword_140C64300);
}
// 140A6BFD0: using guessed type wchar_t *off_140A6BFD0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64300: using guessed type __int64 qword_140C64300;
// 140C64500: using guessed type int dword_140C64500;

