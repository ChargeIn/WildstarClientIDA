#include "../winhttp.h"

//----- (0000000140232570) ----------------------------------------------------
__int64 sub_140232570()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6CD60, qword_140C63858);
	if (dword_140C640C8 || (int)sub_140232360() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B00 + 40i64))(qword_140C63B00);
}
// 140A6CD60: using guessed type wchar_t *off_140A6CD60[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B00: using guessed type __int64 qword_140C63B00;
// 140C640C8: using guessed type int dword_140C640C8;

