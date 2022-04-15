#include "../winhttp.h"

//----- (0000000140223330) ----------------------------------------------------
__int64 sub_140223330()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C0E8, qword_140C63858);
	if (dword_140C65530 || (int)sub_140223120() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65210 + 40i64))(qword_140C65210);
}
// 140A6C0E8: using guessed type wchar_t *off_140A6C0E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65210: using guessed type __int64 qword_140C65210;
// 140C65530: using guessed type int dword_140C65530;

