#include "../winhttp.h"

//----- (00000001408C2430) ----------------------------------------------------
_QWORD* __fastcall sub_1408C2430(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rbx

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 584i64);
	v2 = result;
	if (result)
	{
		result[1] = 0i64;
		*result = off_1409AA500;
		result[2] = 0i64;
		sub_1408C2DB0((__int64)(result + 3));
		return v2;
	}
	return result;
}
// 1409AA500: using guessed type __int64 (__fastcall *off_1409AA500[6])();

