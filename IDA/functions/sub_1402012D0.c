#include "../winhttp.h"

//----- (00000001402012D0) ----------------------------------------------------
__int64 sub_1402012D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A4E8, qword_140C63858);
	if (dword_140C64C20 || (int)sub_1402010C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E50 + 40i64))(qword_140C64E50);
}
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;

