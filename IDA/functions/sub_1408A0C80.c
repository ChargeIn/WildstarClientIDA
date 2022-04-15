#include "../winhttp.h"

//----- (00000001408A0C80) ----------------------------------------------------
_QWORD* __fastcall sub_1408A0C80(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 32i64);
	if (result)
		*result = off_1409A9C88;
	return result;
}
// 1409A9C88: using guessed type __int64 (__fastcall *off_1409A9C88[6])();

