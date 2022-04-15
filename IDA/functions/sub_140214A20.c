#include "../winhttp.h"

//----- (0000000140214A20) ----------------------------------------------------
__int64 __fastcall sub_140214A20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B4E0, a1, qword_140C63858);
	if (dword_140C652CC || (int)sub_140214760() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65580 + 32i64))(qword_140C65580, a1);
}
// 140A6B4E0: using guessed type wchar_t *off_140A6B4E0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C652CC: using guessed type int dword_140C652CC;
// 140C65580: using guessed type __int64 qword_140C65580;

