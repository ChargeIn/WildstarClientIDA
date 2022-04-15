#include "../winhttp.h"

//----- (00000001408A1020) ----------------------------------------------------
_QWORD* __fastcall sub_1408A1020(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rbx

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 136i64);
	v2 = result;
	if (result)
	{
		*result = off_1409A9CC0;
		sub_1408A1560((__int64)(result + 1));
		v2[15] = 0i64;
		v2[16] = 0i64;
		return v2;
	}
	return result;
}
// 1409A9CC0: using guessed type __int64 (__fastcall *off_1409A9CC0[6])();

