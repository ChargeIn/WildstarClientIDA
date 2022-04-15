#include "../winhttp.h"

//----- (00000001401F2580) ----------------------------------------------------
__int64 __fastcall sub_1401F2580(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A698A8, a1, qword_140C63858);
	if (dword_140C63ED4 || (int)sub_1401F22C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FE8 + 32i64))(qword_140C63FE8, a1);
}
// 140A698A8: using guessed type wchar_t *off_140A698A8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63ED4: using guessed type int dword_140C63ED4;
// 140C63FE8: using guessed type __int64 qword_140C63FE8;

