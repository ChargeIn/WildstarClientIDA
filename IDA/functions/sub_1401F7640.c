#include "../winhttp.h"

//----- (00000001401F7640) ----------------------------------------------------
__int64 __fastcall sub_1401F7640(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69CD0, a1, qword_140C63858);
	if (dword_140C65514 || (int)sub_1401F7380() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A48 + 32i64))(qword_140C63A48, a1);
}
// 140A69CD0: using guessed type wchar_t *off_140A69CD0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A48: using guessed type __int64 qword_140C63A48;
// 140C65514: using guessed type int dword_140C65514;

