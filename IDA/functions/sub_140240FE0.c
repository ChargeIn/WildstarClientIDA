#include "../winhttp.h"

//----- (0000000140240FE0) ----------------------------------------------------
__int64 __fastcall sub_140240FE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D968, a1, qword_140C63858);
	if (dword_140C642C0 || (int)sub_140240D20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B30 + 32i64))(qword_140C64B30, a1);
}
// 140A6D968: using guessed type wchar_t *off_140A6D968[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642C0: using guessed type int dword_140C642C0;
// 140C64B30: using guessed type __int64 qword_140C64B30;

