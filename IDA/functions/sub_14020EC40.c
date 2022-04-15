#include "../winhttp.h"

//----- (000000014020EC40) ----------------------------------------------------
__int64 __fastcall sub_14020EC40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B010, a1, qword_140C63858);
	if (dword_140C64B2C || (int)sub_14020E980() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64298 + 32i64))(qword_140C64298, a1);
}
// 140A6B010: using guessed type wchar_t *off_140A6B010[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64298: using guessed type __int64 qword_140C64298;
// 140C64B2C: using guessed type int dword_140C64B2C;

