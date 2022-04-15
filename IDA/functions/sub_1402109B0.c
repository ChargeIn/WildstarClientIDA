#include "../winhttp.h"

//----- (00000001402109B0) ----------------------------------------------------
__int64 sub_1402109B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B198, qword_140C63858);
	if (dword_140C639D0 || (int)sub_1402107A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B68 + 40i64))(qword_140C63B68);
}
// 140A6B198: using guessed type wchar_t *off_140A6B198[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639D0: using guessed type int dword_140C639D0;
// 140C63B68: using guessed type __int64 qword_140C63B68;

