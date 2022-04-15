#include "../winhttp.h"

//----- (000000014019E590) ----------------------------------------------------
__int64 __fastcall sub_14019E590(__int64 a1, __int64 a2)
{
	char* v2; // rax
	_BYTE* v3; // r9
	int v4; // r8d
	unsigned int v5; // edx
	__int64 v6; // r9
	int v7; // ecx

	v2 = *(char**)(a2 + 8);
	v3 = *(_BYTE**)(a1 + 8);
	LOBYTE(v4) = *v3;
	v5 = (char)*v3 - *v2;
	if (v5)
		return v5;
	v6 = v3 - v2;
	while ((_BYTE)v4)
	{
		v4 = v2[v6 + 1];
		v7 = *++v2;
		v5 = v4 - v7;
		if (v4 != v7)
			return v5;
	}
	return 0i64;
}

