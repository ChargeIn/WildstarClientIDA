#include "../winhttp.h"

//----- (000000014006AB60) ----------------------------------------------------
__int64 __fastcall sub_14006AB60(__int64 a1, int* a2)
{
	int v4; // r8d

	sub_14006A700(a1, a2);
	if (*a2 != 12)
	{
	LABEL_5:
		sub_14006AAE0(a1, a2);
		return (unsigned int)a2[2];
	}
	if (a2[4] != a2[5])
	{
		v4 = a2[2];
		if (v4 >= *(unsigned __int8*)(a1 + 74))
		{
			sub_14006A980(a1, a2, v4);
			return (unsigned int)a2[2];
		}
		goto LABEL_5;
	}
	return (unsigned int)a2[2];
}

