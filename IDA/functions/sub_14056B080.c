#include "../winhttp.h"

//----- (000000014056B080) ----------------------------------------------------
__int64 __fastcall sub_14056B080(__int64 a1, __int64* a2)
{
	__int64 result; // rax

	result = *a2;
	*(_QWORD*)(a1 + 32) = *a2;
	return result;
}

