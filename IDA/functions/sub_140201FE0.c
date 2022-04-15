#include "../winhttp.h"

//----- (0000000140201FE0) ----------------------------------------------------
__int64 __fastcall sub_140201FE0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A590, a1, qword_140C63858);
	if (dword_140C63CF0 || (int)sub_140201D80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BA8 + 24i64))(qword_140C63BA8, a1);
}
// 140A6A590: using guessed type wchar_t *off_140A6A590[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BA8: using guessed type __int64 qword_140C63BA8;
// 140C63CF0: using guessed type int dword_140C63CF0;

