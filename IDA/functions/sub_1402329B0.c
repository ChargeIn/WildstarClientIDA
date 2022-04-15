#include "../winhttp.h"

//----- (00000001402329B0) ----------------------------------------------------
__int64 sub_1402329B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CD98, qword_140C63858);
	if (dword_140C64740 || (int)sub_1402327A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EF0 + 40i64))(qword_140C63EF0);
}
// 140A6CD98: using guessed type wchar_t *off_140A6CD98[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EF0: using guessed type __int64 qword_140C63EF0;
// 140C64740: using guessed type int dword_140C64740;

