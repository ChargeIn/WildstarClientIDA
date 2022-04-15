#include "../winhttp.h"

//----- (0000000140248EB0) ----------------------------------------------------
__int64 sub_140248EB0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6DFF8, qword_140C63858);
	if (dword_140C64C04 || (int)sub_140248CA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B40 + 40i64))(qword_140C63B40);
}
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;

