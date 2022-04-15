#include "../winhttp.h"

//----- (000000014009DDD0) ----------------------------------------------------
__int64 __fastcall sub_14009DDD0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // rdi
	__int64 result; // rax
	unsigned __int64 i; // rbx

	v2 = (__int64)(a2 + 12);
	result = sub_1403360D0(a1, a2, (__int64)(a2 + 12));
	if ((int)result >= 0)
	{
		for (i = 0i64; i < 6; ++i)
		{
			result = sub_14009D0A0(a1, v2);
			if ((int)result < 0)
				break;
			v2 += 104i64;
		}
	}
	return result;
}

