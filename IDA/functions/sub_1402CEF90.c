#include "../winhttp.h"

//----- (00000001402CEF90) ----------------------------------------------------
__int64 __fastcall sub_1402CEF90(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v5; // rdi

	v3 = a3;
	if (a1 != a2)
	{
		v5 = a1 - a3;
		do
		{
			if (v3)
				sub_1402CEE00(v3, v5 + v3);
			v3 += 368i64;
		} while (v5 + v3 != a2);
	}
	return v3;
}

