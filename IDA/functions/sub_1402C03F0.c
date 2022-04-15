#include "../winhttp.h"

//----- (00000001402C03F0) ----------------------------------------------------
__int64 __fastcall sub_1402C03F0(__int64 a1, __int16* a2, unsigned __int64 a3)
{
	_QWORD* v3; // rax
	unsigned __int64 v4; // r10
	unsigned __int64 v6; // rcx
	int v7; // edx

	v3 = *(_QWORD**)(a1 + 840);
	*a2 = 0;
	v4 = 0i64;
	if (a3)
	{
		while (1)
		{
			if (v3[3] > 7ui64)
			{
				v6 = ++v3[2];
				v3[3] = 0i64;
				if (v6 >= v3[1])
					return 2147500037i64;
			}
			*a2 *= 2;
			++v4;
			*a2 |= (*(unsigned __int8*)v3[2] << v3[3]++ >> 7) & 1;
			if (v4 >= a3)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v7 = *a2;
		if (v7 < 1 << (a3 - 1))
			LOWORD(v7) = v7 - (1 << a3) + 1;
		*a2 = v7;
		return 0i64;
	}
}

