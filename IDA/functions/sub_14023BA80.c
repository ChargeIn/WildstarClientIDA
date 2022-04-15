#include "../winhttp.h"

//----- (000000014023BA80) ----------------------------------------------------
__int64 __fastcall sub_14023BA80(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D508, a1, qword_140C63858);
	if (dword_140C64E68 || (int)sub_14023B820() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B98 + 24i64))(qword_140C64B98, a1);
}
// 140A6D508: using guessed type wchar_t *off_140A6D508[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B98: using guessed type __int64 qword_140C64B98;
// 140C64E68: using guessed type int dword_140C64E68;

