#include "../winhttp.h"

//----- (00000001402479C0) ----------------------------------------------------
__int64 __fastcall sub_1402479C0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DEE0, a1, qword_140C63858);
	if (dword_140C64070 || (int)sub_140247760() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 24i64))(qword_140C64930, a1);
}
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;

