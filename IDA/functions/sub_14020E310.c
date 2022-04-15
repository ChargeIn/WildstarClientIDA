#include "../winhttp.h"

//----- (000000014020E310) ----------------------------------------------------
__int64 sub_14020E310()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6AFA0, qword_140C63858);
	if (dword_140C63BEC || (int)sub_14020E100() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65040 + 40i64))(qword_140C65040);
}
// 140A6AFA0: using guessed type wchar_t *off_140A6AFA0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BEC: using guessed type int dword_140C63BEC;
// 140C65040: using guessed type __int64 qword_140C65040;

