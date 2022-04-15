#include "../winhttp.h"

//----- (00000001408C8FA0) ----------------------------------------------------
_QWORD* __fastcall sub_1408C8FA0(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 200i64);
	if (result)
		*result = off_1409B1570;
	return result;
}
// 1409B1570: using guessed type __int64 (__fastcall *off_1409B1570[6])();

