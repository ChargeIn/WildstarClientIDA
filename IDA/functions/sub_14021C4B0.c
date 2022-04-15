#include "../winhttp.h"

//----- (000000014021C4B0) ----------------------------------------------------
__int64 sub_14021C4B0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6BB38, qword_140C63858);
	if (dword_140C65518 || (int)sub_14021C2A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65138 + 40i64))(qword_140C65138);
}
// 140A6BB38: using guessed type wchar_t *off_140A6BB38[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65138: using guessed type __int64 qword_140C65138;
// 140C65518: using guessed type int dword_140C65518;

