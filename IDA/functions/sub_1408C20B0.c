#include "../winhttp.h"

//----- (00000001408C20B0) ----------------------------------------------------
_QWORD* __fastcall sub_1408C20B0(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 40i64);
	if (result)
		*result = off_1409AA4D0;
	return result;
}
// 1409AA4D0: using guessed type __int64 (__fastcall *off_1409AA4D0[12])();

