#include "../winhttp.h"

//----- (0000000140482310) ----------------------------------------------------
__int64 __fastcall sub_140482310(__int64* a1, int a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax

	v2 = a1[1];
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v4 = *a1;
	v5 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v4 + 8 * v5) + 8i64) != a2)
	{
		v3 = (unsigned int)(v3 + 1);
		v5 = (unsigned int)v3;
		if ((unsigned int)v3 >= v2)
			return 0i64;
	}
	return *(_QWORD*)(v4 + 8 * v3);
}

