#include "../winhttp.h"

//----- (00000001401F0380) ----------------------------------------------------
__int64 __fastcall sub_1401F0380(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A696E8, a1, qword_140C63858);
	if (dword_140C64804 || (int)sub_1401F00C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64370 + 32i64))(qword_140C64370, a1);
}
// 140A696E8: using guessed type wchar_t *off_140A696E8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64370: using guessed type __int64 qword_140C64370;
// 140C64804: using guessed type int dword_140C64804;

