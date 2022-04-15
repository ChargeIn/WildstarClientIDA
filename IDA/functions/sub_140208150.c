#include "../winhttp.h"

//----- (0000000140208150) ----------------------------------------------------
__int64 sub_140208150()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AA98, qword_140C63858);
	if (dword_140C64A48 || (int)sub_140207F40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A00 + 40i64))(qword_140C64A00);
}
// 140A6AA98: using guessed type wchar_t *off_140A6AA98[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A00: using guessed type __int64 qword_140C64A00;
// 140C64A48: using guessed type int dword_140C64A48;

