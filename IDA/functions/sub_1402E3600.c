#include "../winhttp.h"

//----- (00000001402E3600) ----------------------------------------------------
__int64 __fastcall sub_1402E3600(__int64 a1, __int64* a2)
{
	unsigned int v3; // r9d
	int v4; // eax
	unsigned int v5; // ecx

	if (!a2)
		return 2147942487i64;
	v3 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
	if (v3)
	{
		v4 = sub_1402DC230(*(__int64**)(a1 + 16), v3, a2);
		v5 = 0;
		if (v4 < 0)
			return (unsigned int)v4;
		return v5;
	}
	else
	{
		*a2 = 0i64;
		return 1i64;
	}
}

