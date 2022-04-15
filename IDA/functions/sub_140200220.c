#include "../winhttp.h"

//----- (0000000140200220) ----------------------------------------------------
__int64 __fastcall sub_140200220(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A408, a1, qword_140C63858);
	if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, a1);
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;

