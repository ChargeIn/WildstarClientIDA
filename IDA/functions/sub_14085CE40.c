#include "../winhttp.h"

//----- (000000014085CE40) ----------------------------------------------------
__int64 __fastcall sub_14085CE40(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (v2)
	{
		result = sub_1408773F0(v2);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return result;
}

