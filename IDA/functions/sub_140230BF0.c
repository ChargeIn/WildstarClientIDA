#include "../winhttp.h"

//----- (0000000140230BF0) ----------------------------------------------------
__int64 sub_140230BF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CC10, qword_140C63858);
	if (dword_140C64CAC || (int)sub_1402309E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64718 + 40i64))(qword_140C64718);
}
// 140A6CC10: using guessed type wchar_t *off_140A6CC10[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64718: using guessed type __int64 qword_140C64718;
// 140C64CAC: using guessed type int dword_140C64CAC;

