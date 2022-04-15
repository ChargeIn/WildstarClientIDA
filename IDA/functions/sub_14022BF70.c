#include "../winhttp.h"

//----- (000000014022BF70) ----------------------------------------------------
__int64 sub_14022BF70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C820, qword_140C63858);
	if (dword_140C649E4 || (int)sub_14022BD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65188 + 40i64))(qword_140C65188);
}
// 140A6C820: using guessed type wchar_t *off_140A6C820[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C649E4: using guessed type int dword_140C649E4;
// 140C65188: using guessed type __int64 qword_140C65188;

