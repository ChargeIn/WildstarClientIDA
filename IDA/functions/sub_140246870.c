#include "../winhttp.h"

//----- (0000000140246870) ----------------------------------------------------
__int64 sub_140246870()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DE00, qword_140C63858);
	if (dword_140C63A30 || (int)sub_140246660() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65608 + 40i64))(qword_140C65608);
}
// 140A6DE00: using guessed type wchar_t *off_140A6DE00[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A30: using guessed type int dword_140C63A30;
// 140C65608: using guessed type __int64 qword_140C65608;

