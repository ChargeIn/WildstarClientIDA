#include "../winhttp.h"

//----- (0000000140241370) ----------------------------------------------------
__int64 sub_140241370()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D9A0, qword_140C63858);
	if (dword_140C6497C || (int)sub_140241160() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64968 + 40i64))(qword_140C64968);
}
// 140A6D9A0: using guessed type wchar_t *off_140A6D9A0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64968: using guessed type __int64 qword_140C64968;
// 140C6497C: using guessed type int dword_140C6497C;

