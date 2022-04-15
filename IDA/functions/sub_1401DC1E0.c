#include "../winhttp.h"

//----- (00000001401DC1E0) ----------------------------------------------------
__int64 __fastcall sub_1401DC1E0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // r9d
	unsigned int v4; // ecx

	v3 = *(_DWORD*)(a3 + 4 * a1);
	v4 = *(_DWORD*)(a3 + 4 * a2);
	if (v3 >= v4)
		return v4 < v3;
	else
		return 0xFFFFFFFFi64;
}

