#include "../winhttp.h"

//----- (00000001401FCB40) ----------------------------------------------------
__int64 __fastcall sub_1401FCB40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A130, a1, qword_140C63858);
	if (dword_140C64920 || (int)sub_1401FC880() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65540 + 32i64))(qword_140C65540, a1);
}
// 140A6A130: using guessed type wchar_t *off_140A6A130[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64920: using guessed type int dword_140C64920;
// 140C65540: using guessed type __int64 qword_140C65540;

