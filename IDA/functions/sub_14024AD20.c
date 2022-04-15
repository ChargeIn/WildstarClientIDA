#include "../winhttp.h"

//----- (000000014024AD20) ----------------------------------------------------
__int64 __fastcall sub_14024AD20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E180, a1, qword_140C63858);
	if (dword_140C64698 || (int)sub_14024AA60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 32i64))(qword_140C63C08, a1);
}
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;

