#include "../winhttp.h"

//----- (00000001401EA110) ----------------------------------------------------
__int64 sub_1401EA110()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A691E0, qword_140C63858);
	if (dword_140C64C44 || (int)sub_1401E9F00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65020 + 40i64))(qword_140C65020);
}
// 140A691E0: using guessed type wchar_t *off_140A691E0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C44: using guessed type int dword_140C64C44;
// 140C65020: using guessed type __int64 qword_140C65020;

