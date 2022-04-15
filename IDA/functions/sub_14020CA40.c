#include "../winhttp.h"

//----- (000000014020CA40) ----------------------------------------------------
__int64 __fastcall sub_14020CA40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6AE50, a1, qword_140C63858);
	if (dword_140C64868 || (int)sub_14020C780() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F00 + 32i64))(qword_140C63F00, a1);
}
// 140A6AE50: using guessed type wchar_t *off_140A6AE50[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F00: using guessed type __int64 qword_140C63F00;
// 140C64868: using guessed type int dword_140C64868;

