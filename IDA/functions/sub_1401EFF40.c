#include "../winhttp.h"

//----- (00000001401EFF40) ----------------------------------------------------
__int64 __fastcall sub_1401EFF40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A696B0, a1, qword_140C63858);
	if (dword_140C64324 || (int)sub_1401EFC80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(qword_140C63F68, a1);
}
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;

