#include "../winhttp.h"

//----- (000000014087A1E0) ----------------------------------------------------
__int64 __fastcall sub_14087A1E0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax

	result = sub_1408810F0(a1, a2);
	if (a2 <= 1)
	{
		result = 0i64;
		*(_WORD*)(a1 + 360) = 0;
	}
	return result;
}

