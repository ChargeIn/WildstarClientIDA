#include "../winhttp.h"

//----- (0000000140245BB0) ----------------------------------------------------
__int64 sub_140245BB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DD58, qword_140C63858);
	if (dword_140C654F8 || (int)sub_1402459A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
}
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;

