#include "../winhttp.h"

//----- (000000014049C840) ----------------------------------------------------
__int64 __fastcall sub_14049C840(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // ecx
	bool v5; // zf
	int v6; // edx
	int v7; // r8d

	v4 = 0;
	if (*(_DWORD*)(a2 + 484) || (v5 = *(_DWORD*)(a2 + 684) == 0, v6 = 0, !v5))
		v6 = 1;
	v7 = a3 - 1;
	if (v7)
	{
		if (v7 == 1)
		{
			LOBYTE(v4) = v6 != a4;
			return v4;
		}
	}
	else
	{
		LOBYTE(v4) = v6 == a4;
	}
	return v4;
}

