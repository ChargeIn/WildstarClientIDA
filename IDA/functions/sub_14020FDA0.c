#include "../winhttp.h"

//----- (000000014020FDA0) ----------------------------------------------------
__int64 __fastcall sub_14020FDA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B0F0, a1, qword_140C63858);
	if (dword_140C64FBC || (int)sub_14020FAE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C10 + 32i64))(qword_140C63C10, a1);
}
// 140A6B0F0: using guessed type wchar_t *off_140A6B0F0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C10: using guessed type __int64 qword_140C63C10;
// 140C64FBC: using guessed type int dword_140C64FBC;

