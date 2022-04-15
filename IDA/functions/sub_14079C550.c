#include "../winhttp.h"

//----- (000000014079C550) ----------------------------------------------------
__int64 __fastcall sub_14079C550(__int64 a1, int* a2, int a3)
{
	int v5; // r8d

	if (a3)
	{
		v5 = a3 - 1;
		if (v5)
		{
			if (v5 == 1)
			{
				sub_14079BD20(a1 + 120, a2);
				sub_14079BD20(a1 + 64, a2);
				sub_14079BD20(a1 + 8, a2);
				return 0i64;
			}
			else
			{
				return 2147500037i64;
			}
		}
		else
		{
			sub_14079BD20(a1 + 64, a2);
			sub_14079BD20(a1 + 8, a2);
			return 0i64;
		}
	}
	else
	{
		sub_14079BD20(a1 + 8, a2);
		return 0i64;
	}
}

