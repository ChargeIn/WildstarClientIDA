#include "../winhttp.h"

//----- (000000014085BA10) ----------------------------------------------------
_QWORD* __fastcall sub_14085BA10(__int64* a1, unsigned int a2)
{
	_QWORD* result; // rax

	result = (_QWORD*)sub_1408591D0(a1 + 14, a2);
	if (result)
		return (_QWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(*a1 + 96))(a1, *result);
	return result;
}

