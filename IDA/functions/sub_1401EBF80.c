#include "../winhttp.h"

//----- (00000001401EBF80) ----------------------------------------------------
__int64 __fastcall sub_1401EBF80(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69368, a1, qword_140C63858);
	if (dword_140C6545C || (int)sub_1401EBCC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655F0 + 32i64))(qword_140C655F0, a1);
}
// 140A69368: using guessed type wchar_t *off_140A69368[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6545C: using guessed type int dword_140C6545C;
// 140C655F0: using guessed type __int64 qword_140C655F0;

