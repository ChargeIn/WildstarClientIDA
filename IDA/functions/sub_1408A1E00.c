#include "../winhttp.h"

//----- (00000001408A1E00) ----------------------------------------------------
_QWORD* __fastcall sub_1408A1E00(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 80i64);
	if (result)
	{
		*result = off_1409A9D50;
		result[1] = 0i64;
		result[2] = 0i64;
		result[6] = 0i64;
	}
	return result;
}
// 1409A9D50: using guessed type __int64 (__fastcall *off_1409A9D50[6])();

