#include "../winhttp.h"

//----- (000000014089B870) ----------------------------------------------------
__int64 __fastcall sub_14089B870(_DWORD* a1, __int16 a2, _DWORD* a3)
{
	if (!a3)
		return 31i64;
	if (a2)
	{
		if (a2 == 1)
		{
			a1[3] = *a3;
			return 1i64;
		}
		else
		{
			if (a2 != 2)
				return 31i64;
			a1[4] = *a3;
			return 1i64;
		}
	}
	else
	{
		a1[2] = *a3;
		return 1i64;
	}
}

