#include "../winhttp.h"

//----- (00000001401EB210) ----------------------------------------------------
__int64 sub_1401EB210()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A692C0, qword_140C63858);
	if (dword_140C63DC4 || (int)sub_1401EB000() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D80 + 40i64))(qword_140C64D80);
}
// 140A692C0: using guessed type wchar_t *off_140A692C0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DC4: using guessed type int dword_140C63DC4;
// 140C64D80: using guessed type __int64 qword_140C64D80;

