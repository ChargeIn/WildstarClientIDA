#include "../winhttp.h"

//----- (00000001402371F0) ----------------------------------------------------
__int64 sub_1402371F0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6D150, qword_140C63858);
	if (dword_140C64798 || (int)sub_140236FE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BD0 + 40i64))(qword_140C64BD0);
}
// 140A6D150: using guessed type wchar_t *off_140A6D150[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64798: using guessed type int dword_140C64798;
// 140C64BD0: using guessed type __int64 qword_140C64BD0;

