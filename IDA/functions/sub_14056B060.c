#include "../winhttp.h"

//----- (000000014056B060) ----------------------------------------------------
__int64 __fastcall sub_14056B060(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = *a2;
	result = a2[1];
	*(_QWORD*)(a1 + 16) = result;
	return result;
}

