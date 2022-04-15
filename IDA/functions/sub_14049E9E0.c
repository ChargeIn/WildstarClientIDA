#include "../winhttp.h"

//----- (000000014049E9E0) ----------------------------------------------------
__int64 __fastcall sub_14049E9E0(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // ecx
	BOOL v5; // edx
	int v6; // r8d

	if (!a2)
		return a3 == 2;
	v4 = 0;
	v5 = *(_QWORD*)(a2 + 168) != 0i64;
	v6 = a3 - 1;
	if (v6)
	{
		if (v6 == 1)
		{
			LOBYTE(v4) = !v5;
			return v4;
		}
	}
	else
	{
		return v5;
	}
	return v4;
}

