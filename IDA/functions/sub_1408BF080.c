#include "../winhttp.h"

//----- (00000001408BF080) ----------------------------------------------------
_QWORD* __fastcall sub_1408BF080(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 104i64);
	if (result)
	{
		result[9] = 0i64;
		result[11] = 0i64;
		*result = off_1409AA400;
	}
	return result;
}
// 1409AA400: using guessed type __int64 (__fastcall *off_1409AA400[6])();

