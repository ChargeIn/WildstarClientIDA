#include "../winhttp.h"

//----- (00000001401E57C0) ----------------------------------------------------
__int64 __fastcall sub_1401E57C0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // ecx
	unsigned int v4; // edx

	v3 = *(_DWORD*)(*(_QWORD*)(a3 + 16 * a1) + 148i64);
	v4 = *(_DWORD*)(*(_QWORD*)(a3 + 16 * a2) + 148i64);
	if (v3 <= v4)
		return v3 < v4;
	else
		return 0xFFFFFFFFi64;
}

