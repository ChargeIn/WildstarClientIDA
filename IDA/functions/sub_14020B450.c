#include "../winhttp.h"

//----- (000000014020B450) ----------------------------------------------------
__int64 sub_14020B450()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AD38, qword_140C63858);
	if (dword_140C6480C || (int)sub_14020B240() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C644D8 + 40i64))(qword_140C644D8);
}
// 140A6AD38: using guessed type wchar_t *off_140A6AD38[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D8: using guessed type __int64 qword_140C644D8;
// 140C6480C: using guessed type int dword_140C6480C;

