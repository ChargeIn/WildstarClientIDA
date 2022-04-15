#include "../winhttp.h"

//----- (000000014020BCD0) ----------------------------------------------------
__int64 sub_14020BCD0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6ADA8, qword_140C63858);
	if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654E8 + 40i64))(qword_140C654E8);
}
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C654E8: using guessed type __int64 qword_140C654E8;

