#include "../winhttp.h"

//----- (0000000140713560) ----------------------------------------------------
__int64 __fastcall sub_140713560(__int64 a1, __int64 a2)
{
	__int64 v2; // r8

	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)a2 = 0i64;
	if (v2)
	{
		*(_DWORD*)a2 = *(_DWORD*)(v2 + 32);
		*(_DWORD*)(a2 + 4) = *(_DWORD*)(v2 + 36);
	}
	return a2;
}

