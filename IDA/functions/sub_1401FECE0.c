#include "../winhttp.h"

//----- (00000001401FECE0) ----------------------------------------------------
__int64 __fastcall sub_1401FECE0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A2F0, a1, qword_140C63858);
	if (dword_140C654CC || (int)sub_1401FEA80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63958 + 24i64))(qword_140C63958, a1);
}
// 140A6A2F0: using guessed type wchar_t *off_140A6A2F0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63958: using guessed type __int64 qword_140C63958;
// 140C654CC: using guessed type int dword_140C654CC;

