#include "../winhttp.h"

//----- (0000000140420DD0) ----------------------------------------------------
__int64 __fastcall sub_140420DD0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a3 += 8i64;
	result = sub_140200AA0(*(_DWORD*)(*a3 - 8i64));
	if (result)
		return sub_1406A2B80(a2, result);
	return result;
}

