#include "../winhttp.h"

//----- (0000000140243DF0) ----------------------------------------------------
__int64 sub_140243DF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DBD0, qword_140C63858);
	if (dword_140C65174 || (int)sub_140243BE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E30 + 40i64))(qword_140C64E30);
}
// 140A6DBD0: using guessed type wchar_t *off_140A6DBD0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E30: using guessed type __int64 qword_140C64E30;
// 140C65174: using guessed type int dword_140C65174;

