#include "../winhttp.h"

//----- (0000000140214580) ----------------------------------------------------
__int64 __fastcall sub_140214580(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B4A8, a1, qword_140C63858);
	if (dword_140C64CE4 || (int)sub_140214320() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C38 + 24i64))(qword_140C63C38, a1);
}
// 140A6B4A8: using guessed type wchar_t *off_140A6B4A8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C38: using guessed type __int64 qword_140C63C38;
// 140C64CE4: using guessed type int dword_140C64CE4;

