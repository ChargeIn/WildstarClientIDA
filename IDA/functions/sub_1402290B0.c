#include "../winhttp.h"

//----- (00000001402290B0) ----------------------------------------------------
__int64 sub_1402290B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C5B8, qword_140C63858);
	if (dword_140C63DDC || (int)sub_140228EA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64C98 + 40i64))(qword_140C64C98);
}
// 140A6C5B8: using guessed type wchar_t *off_140A6C5B8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DDC: using guessed type int dword_140C63DDC;
// 140C64C98: using guessed type __int64 qword_140C64C98;

