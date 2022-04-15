#include "../winhttp.h"

//----- (000000014049C800) ----------------------------------------------------
__int64 __fastcall sub_14049C800(__int64 a1, _DWORD* a2, int a3, int a4)
{
	unsigned int v4; // ecx
	bool v5; // zf
	int v6; // edx
	int v7; // r8d

	v4 = 0;
	if (a2[148] || a2[149] || (v5 = a2[32] == 23, v6 = 0, v5))
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

