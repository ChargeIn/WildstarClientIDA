#include "../winhttp.h"

//----- (00000001401ED4C0) ----------------------------------------------------
__int64 __fastcall sub_1401ED4C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69480, a1, qword_140C63858);
	if (dword_140C64C7C || (int)sub_1401ED200() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63DF8 + 32i64))(qword_140C63DF8, a1);
}
// 140A69480: using guessed type wchar_t *off_140A69480[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DF8: using guessed type __int64 qword_140C63DF8;
// 140C64C7C: using guessed type int dword_140C64C7C;

