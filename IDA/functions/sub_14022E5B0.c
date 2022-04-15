#include "../winhttp.h"

//----- (000000014022E5B0) ----------------------------------------------------
__int64 sub_14022E5B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CA18, qword_140C63858);
	if (dword_140C63DAC || (int)sub_14022E3A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C655E0 + 40i64))(qword_140C655E0);
}
// 140A6CA18: using guessed type wchar_t *off_140A6CA18[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DAC: using guessed type int dword_140C63DAC;
// 140C655E0: using guessed type __int64 qword_140C655E0;

