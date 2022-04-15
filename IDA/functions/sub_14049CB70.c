#include "../winhttp.h"

//----- (000000014049CB70) ----------------------------------------------------
__int64 __fastcall sub_14049CB70(__int64 a1, _DWORD* a2, int a3)
{
	unsigned int v3; // ecx
	bool v4; // zf
	unsigned int v5; // edx
	int v6; // r8d

	v3 = 0;
	if (!a2[853] || !a2[852] || (v4 = a2[893] == 1, v5 = 1, !v4))
		v5 = 0;
	v6 = a3 - 1;
	if (!v6)
		return v5;
	if (v6 == 1)
		LOBYTE(v3) = v5 == 0;
	return v3;
}

