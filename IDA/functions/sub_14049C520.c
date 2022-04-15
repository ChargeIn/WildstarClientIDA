#include "../winhttp.h"

//----- (000000014049C520) ----------------------------------------------------
__int64 __fastcall sub_14049C520(__int64 a1, __int64 a2, int a3, int a4)
{
	int* v6; // rax
	unsigned int v7; // ecx
	int v8; // r9d
	int v9; // r8d

	if (!a2)
		return 0i64;
	v6 = *(int**)(a2 + 208);
	v7 = 0;
	if (v6)
		v8 = *v6;
	else
		v8 = 0;
	v9 = a3 - 1;
	if (v9)
	{
		if (v9 == 1)
		{
			LOBYTE(v7) = v8 != a4;
			return v7;
		}
	}
	else
	{
		return v8 == a4;
	}
	return v7;
}

