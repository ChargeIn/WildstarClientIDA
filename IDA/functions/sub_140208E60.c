#include "../winhttp.h"

//----- (0000000140208E60) ----------------------------------------------------
__int64 __fastcall sub_140208E60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AB40, a1, qword_140C63858);
	if (dword_140C639AC || (int)sub_140208C00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644F8 + 24i64))(qword_140C644F8, a1);
}
// 140A6AB40: using guessed type wchar_t *off_140A6AB40[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639AC: using guessed type int dword_140C639AC;
// 140C644F8: using guessed type __int64 qword_140C644F8;

