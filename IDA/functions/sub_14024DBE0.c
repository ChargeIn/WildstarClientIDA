#include "../winhttp.h"

//----- (000000014024DBE0) ----------------------------------------------------
__int64 __fastcall sub_14024DBE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E3E8, a1, qword_140C63858);
	if (dword_140C64634 || (int)sub_14024D920() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 32i64))(qword_140C64270, a1);
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

