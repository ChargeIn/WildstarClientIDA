#include "../winhttp.h"

//----- (00000001402D1E80) ----------------------------------------------------
__int64 __fastcall sub_1402D1E80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 i; // rdi

	for (i = a2; i; --i)
	{
		if (a1)
			sub_1402D1B70(a1, a3);
		a1 += 192i64;
	}
	return a1;
}

