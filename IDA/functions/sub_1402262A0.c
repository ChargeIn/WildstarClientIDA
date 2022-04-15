#include "../winhttp.h"

//----- (00000001402262A0) ----------------------------------------------------
__int64 __fastcall sub_1402262A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C350, a1, qword_140C63858);
	if (dword_140C64FC4 || (int)sub_140225FE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65078 + 32i64))(qword_140C65078, a1);
}
// 140A6C350: using guessed type wchar_t *off_140A6C350[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FC4: using guessed type int dword_140C64FC4;
// 140C65078: using guessed type __int64 qword_140C65078;

