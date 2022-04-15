#include "../winhttp.h"

//----- (00000001401F3A10) ----------------------------------------------------
__int64 sub_1401F3A10()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A699C0, qword_140C63858);
	if (dword_140C64030 || (int)sub_1401F3800() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64CF0 + 40i64))(qword_140C64CF0);
}
// 140A699C0: using guessed type wchar_t *off_140A699C0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64030: using guessed type int dword_140C64030;
// 140C64CF0: using guessed type __int64 qword_140C64CF0;

