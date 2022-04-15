#include "../winhttp.h"

//----- (000000014085BA90) ----------------------------------------------------
_QWORD* __fastcall sub_14085BA90(__int64* a1, __int64 a2)
{
	__int64* v3; // rcx
	_QWORD* result; // rax

	if (BYTE4(a2))
		v3 = a1 + 17;
	else
		v3 = a1 + 14;
	result = (_QWORD*)sub_1408591D0(v3, a2);
	if (result)
		return (_QWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(*a1 + 96))(a1, *result);
	return result;
}

