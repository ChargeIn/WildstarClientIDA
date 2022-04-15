#include "../winhttp.h"

//----- (0000000140230CA0) ----------------------------------------------------
__int64 __fastcall sub_140230CA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CC10, a1, qword_140C63858);
	if (dword_140C64CAC || (int)sub_1402309E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64718 + 32i64))(qword_140C64718, a1);
}
// 140A6CC10: using guessed type wchar_t *off_140A6CC10[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64718: using guessed type __int64 qword_140C64718;
// 140C64CAC: using guessed type int dword_140C64CAC;

