#include "../winhttp.h"

//----- (000000014020D6A0) ----------------------------------------------------
__int64 __fastcall sub_14020D6A0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AEF8, a1, qword_140C63858);
	if (dword_140C655C0 || (int)sub_14020D440() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65560 + 24i64))(qword_140C65560, a1);
}
// 140A6AEF8: using guessed type wchar_t *off_140A6AEF8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65560: using guessed type __int64 qword_140C65560;
// 140C655C0: using guessed type int dword_140C655C0;

