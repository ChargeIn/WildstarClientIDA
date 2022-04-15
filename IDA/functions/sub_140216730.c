#include "../winhttp.h"

//----- (0000000140216730) ----------------------------------------------------
__int64 sub_140216730()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B668, qword_140C63858);
	if (dword_140C63DD4 || (int)sub_140216520() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64918 + 40i64))(qword_140C64918);
}
// 140A6B668: using guessed type wchar_t *off_140A6B668[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DD4: using guessed type int dword_140C63DD4;
// 140C64918: using guessed type __int64 qword_140C64918;

