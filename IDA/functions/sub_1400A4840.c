#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A4840) ----------------------------------------------------
__int64 __fastcall sub_1400A4840(__int64 a1, __int64 a2, __int64 a3)
{
	__int64* v3; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // rdi
	__int64 v7; // r8

	v3 = (__int64*)a3;
	if (!a3)
		return 2147500037i64;
	v6 = 0i64;
	while (v3)
	{
		result = sub_14006C120(a1, v3, a3);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, v3 + 1, v7);
			if ((int)result >= 0)
			{
				++v6;
				v3 += 2;
				if (v6 < 2)
					continue;
			}
		}
		return result;
	}
	return 2147500037i64;
}
// 1400A487B: variable 'a3' is possibly undefined
// 1400A488B: variable 'v7' is possibly undefined

