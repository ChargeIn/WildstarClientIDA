#include "../winhttp.h"

//----- (0000000140213CB0) ----------------------------------------------------
__int64 sub_140213CB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B438, qword_140C63858);
	if (dword_140C63900 || (int)sub_140213AA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C645E8 + 40i64))(qword_140C645E8);
}
// 140A6B438: using guessed type wchar_t *off_140A6B438[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63900: using guessed type int dword_140C63900;
// 140C645E8: using guessed type __int64 qword_140C645E8;

