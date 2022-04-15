#include "../winhttp.h"

//----- (000000014020B500) ----------------------------------------------------
__int64 __fastcall sub_14020B500(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6AD38, a1, qword_140C63858);
	if (dword_140C6480C || (int)sub_14020B240() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D8 + 32i64))(qword_140C644D8, a1);
}
// 140A6AD38: using guessed type wchar_t *off_140A6AD38[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D8: using guessed type __int64 qword_140C644D8;
// 140C6480C: using guessed type int dword_140C6480C;

