#include "../winhttp.h"

//----- (0000000140241BF0) ----------------------------------------------------
__int64 sub_140241BF0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DA10, qword_140C63858);
	if (dword_140C63F48 || (int)sub_1402419E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C649B0 + 40i64))(qword_140C649B0);
}
// 140A6DA10: using guessed type wchar_t *off_140A6DA10[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F48: using guessed type int dword_140C63F48;
// 140C649B0: using guessed type __int64 qword_140C649B0;

