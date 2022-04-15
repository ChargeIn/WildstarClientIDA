#include "../winhttp.h"

//----- (00000001402C10B0) ----------------------------------------------------
bool __fastcall sub_1402C10B0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // rax

	v3 = *a3;
	v4 = 1i64;
	if (*a3 <= 1)
	{
		if (v3)
		{
		LABEL_12:
			*a3 = v4;
			return 1;
		}
		while (1)
		{
			if (a2 > 1)
			{
				a2 >>= 1;
				if (a1 <= 1)
					goto LABEL_16;
			}
			else if (a1 <= 1)
			{
				goto LABEL_12;
			}
			a1 >>= 1;
		LABEL_16:
			++v4;
		}
	}
	while (1)
	{
		if (a2 > 1)
		{
			a2 >>= 1;
			if (a1 <= 1)
				goto LABEL_8;
			goto LABEL_7;
		}
		if (a1 <= 1)
			break;
	LABEL_7:
		a1 >>= 1;
	LABEL_8:
		++v4;
	}
	return v3 <= v4;
}

