#include "../winhttp.h"

//----- (0000000140249FB0) ----------------------------------------------------
__int64 sub_140249FB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6E0D8, qword_140C63858);
	if (dword_140C64E18 || (int)sub_140249DA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C642B0 + 40i64))(qword_140C642B0);
}
// 140A6E0D8: using guessed type wchar_t *off_140A6E0D8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642B0: using guessed type __int64 qword_140C642B0;
// 140C64E18: using guessed type int dword_140C64E18;

