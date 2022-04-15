#include "../winhttp.h"

//----- (0000000140243130) ----------------------------------------------------
__int64 sub_140243130()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DB28, qword_140C63858);
	if (dword_140C64B14 || (int)sub_140242F20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63E50 + 40i64))(qword_140C63E50);
}
// 140A6DB28: using guessed type wchar_t *off_140A6DB28[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E50: using guessed type __int64 qword_140C63E50;
// 140C64B14: using guessed type int dword_140C64B14;

