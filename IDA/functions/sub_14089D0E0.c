#include "../winhttp.h"

//----- (000000014089D0E0) ----------------------------------------------------
_QWORD* __fastcall sub_14089D0E0(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 80i64);
	if (result)
		*result = off_1409A9B38;
	return result;
}
// 1409A9B38: using guessed type __int64 (__fastcall *off_1409A9B38[6])();

