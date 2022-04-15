#include "../winhttp.h"

//----- (00000001408D3340) ----------------------------------------------------
_QWORD* __fastcall sub_1408D3340(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 176i64);
	if (result)
		*result = off_1409B17D8;
	return result;
}
// 1409B17D8: using guessed type __int64 (__fastcall *off_1409B17D8[6])();

