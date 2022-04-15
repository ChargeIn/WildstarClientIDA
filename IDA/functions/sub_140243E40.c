#include "../winhttp.h"

//----- (0000000140243E40) ----------------------------------------------------
__int64 __fastcall sub_140243E40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DBD0, a1, qword_140C63858);
	if (dword_140C65174 || (int)sub_140243BE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E30 + 24i64))(qword_140C64E30, a1);
}
// 140A6DBD0: using guessed type wchar_t *off_140A6DBD0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E30: using guessed type __int64 qword_140C64E30;
// 140C65174: using guessed type int dword_140C65174;

