#include "../winhttp.h"

//----- (00000001407A8170) ----------------------------------------------------
__int64 __fastcall sub_1407A8170(__int64 a1, __int64* a2)
{
	__int64 result; // rax

	result = *a2;
	*(_QWORD*)(a1 + 24) = *a2;
	return result;
}

