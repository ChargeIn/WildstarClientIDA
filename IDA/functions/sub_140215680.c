#include "../winhttp.h"

//----- (0000000140215680) ----------------------------------------------------
__int64 __fastcall sub_140215680(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B588, a1, qword_140C63858);
	if (dword_140C6558C || (int)sub_140215420() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D10 + 24i64))(qword_140C64D10, a1);
}
// 140A6B588: using guessed type wchar_t *off_140A6B588[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D10: using guessed type __int64 qword_140C64D10;
// 140C6558C: using guessed type int dword_140C6558C;

