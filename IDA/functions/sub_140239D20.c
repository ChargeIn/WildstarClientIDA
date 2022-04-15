#include "../winhttp.h"

//----- (0000000140239D20) ----------------------------------------------------
__int64 __fastcall sub_140239D20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D380, a1, qword_140C63858);
	if (dword_140C64628 || (int)sub_140239A60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D98 + 32i64))(qword_140C64D98, a1);
}
// 140A6D380: using guessed type wchar_t *off_140A6D380[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64628: using guessed type int dword_140C64628;
// 140C64D98: using guessed type __int64 qword_140C64D98;

