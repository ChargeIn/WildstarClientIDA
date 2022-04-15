#include "../winhttp.h"

//----- (00000001402CF1B0) ----------------------------------------------------
__int64 __fastcall sub_1402CF1B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 i; // rdi

	for (i = a2; i; --i)
	{
		if (a1)
			sub_1402CEE00(a1, a3);
		a1 += 368i64;
	}
	return a1;
}

