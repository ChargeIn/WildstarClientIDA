#include "../winhttp.h"

//----- (00000001401F4720) ----------------------------------------------------
__int64 __fastcall sub_1401F4720(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A69A68, a1, qword_140C63858);
	if (dword_140C6539C || (int)sub_1401F44C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65158 + 24i64))(qword_140C65158, a1);
}
// 140A69A68: using guessed type wchar_t *off_140A69A68[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65158: using guessed type __int64 qword_140C65158;
// 140C6539C: using guessed type int dword_140C6539C;

