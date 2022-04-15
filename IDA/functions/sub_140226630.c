#include "../winhttp.h"

//----- (0000000140226630) ----------------------------------------------------
__int64 sub_140226630()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6C388, qword_140C63858);
	if (dword_140C65280 || (int)sub_140226420() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64AD8 + 40i64))(qword_140C64AD8);
}
// 140A6C388: using guessed type wchar_t *off_140A6C388[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64AD8: using guessed type __int64 qword_140C64AD8;
// 140C65280: using guessed type int dword_140C65280;

