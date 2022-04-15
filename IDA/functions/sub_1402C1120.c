#include "../winhttp.h"

//----- (00000001402C1120) ----------------------------------------------------
bool __fastcall sub_1402C1120(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64* a4)
{
	unsigned __int64 v4; // r10
	unsigned __int64 i; // rax
	__int64 v7; // rax

	v4 = *a4;
	if ((unsigned __int64)*a4 <= 1)
	{
		if (v4 || !a1 || ((a1 - 1) & a1) != 0 || !a2 || ((a2 - 1) & a2) != 0 || !a3 || ((a3 - 1) & a3) != 0)
		{
			v7 = 1i64;
		LABEL_39:
			*a4 = v7;
			return 1;
		}
		v7 = 1i64;
		while (a2 <= 1)
		{
			if (a1 <= 1)
			{
				if (a3 <= 1)
					goto LABEL_39;
			LABEL_33:
				if (a1 <= 1)
					goto LABEL_35;
			}
			a1 >>= 1;
		LABEL_35:
			if (a3 > 1)
				a3 >>= 1;
			++v7;
		}
		a2 >>= 1;
		goto LABEL_33;
	}
	if (!a1 || ((a1 - 1) & a1) != 0 || !a2 || ((a2 - 1) & a2) != 0 || !a3 || ((a3 - 1) & a3) != 0)
		return 0;
	for (i = 1i64; ; ++i)
	{
		if (a2 > 1)
		{
			a2 >>= 1;
		LABEL_15:
			if (a1 <= 1)
				goto LABEL_17;
			goto LABEL_16;
		}
		if (a1 <= 1)
			break;
	LABEL_16:
		a1 >>= 1;
	LABEL_17:
		if (a3 > 1)
			a3 >>= 1;
	}
	if (a3 > 1)
		goto LABEL_15;
	return v4 <= i;
}

