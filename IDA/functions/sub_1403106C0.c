#include "../winhttp.h"

//----- (00000001403106C0) ----------------------------------------------------
__int64 __fastcall sub_1403106C0(_DWORD* a1, int a2, int a3)
{
	if (a1[54])
	{
		if (a3)
		{
		LABEL_5:
			++a1[55];
			goto LABEL_6;
		}
		if (a2 - a1[53] > 0)
		{
			a1[52] += a2 - a1[53];
			goto LABEL_5;
		}
	}
LABEL_6:
	a1[53] = a2;
	a1[54] = 1;
	return 0i64;
}

