#include "../winhttp.h"

//----- (00000001401F1420) ----------------------------------------------------
__int64 __fastcall sub_1401F1420(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A697C8, a1, qword_140C63858);
	if (dword_140C64FA4 || (int)sub_1401F11C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FD0 + 24i64))(qword_140C64FD0, a1);
}
// 140A697C8: using guessed type wchar_t *off_140A697C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FA4: using guessed type int dword_140C64FA4;
// 140C64FD0: using guessed type __int64 qword_140C64FD0;

