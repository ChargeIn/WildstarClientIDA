#include "../winhttp.h"

//----- (0000000140223BB0) ----------------------------------------------------
__int64 sub_140223BB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C158, qword_140C63858);
	if (dword_140C63A10 || (int)sub_1402239A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C652D8 + 40i64))(qword_140C652D8);
}
// 140A6C158: using guessed type wchar_t *off_140A6C158[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A10: using guessed type int dword_140C63A10;
// 140C652D8: using guessed type __int64 qword_140C652D8;

