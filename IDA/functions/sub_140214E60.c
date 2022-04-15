#include "../winhttp.h"

//----- (0000000140214E60) ----------------------------------------------------
__int64 __fastcall sub_140214E60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B518, a1, qword_140C63858);
	if (dword_140C6417C || (int)sub_140214BA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E0 + 32i64))(qword_140C652E0, a1);
}
// 140A6B518: using guessed type wchar_t *off_140A6B518[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6417C: using guessed type int dword_140C6417C;
// 140C652E0: using guessed type __int64 qword_140C652E0;

