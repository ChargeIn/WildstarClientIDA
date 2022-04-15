#include "../winhttp.h"

//----- (0000000140238BC0) ----------------------------------------------------
__int64 __fastcall sub_140238BC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D2A0, a1, qword_140C63858);
	if (dword_140C6461C || (int)sub_140238960() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F40 + 24i64))(qword_140C63F40, a1);
}
// 140A6D2A0: using guessed type wchar_t *off_140A6D2A0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F40: using guessed type __int64 qword_140C63F40;
// 140C6461C: using guessed type int dword_140C6461C;

