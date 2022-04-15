#include "../winhttp.h"

//----- (000000014038C5D0) ----------------------------------------------------
__int64 __fastcall sub_14038C5D0(__int64 a1, __int64 a2)
{
	unsigned int v2; // eax
	unsigned int v3; // r8d
	float v5; // xmm0_4
	float v6; // xmm1_4

	v2 = *(_DWORD*)(a1 + 968);
	v3 = *(_DWORD*)(a2 + 968);
	if (v2 > v3)
		return 0xFFFFFFFFi64;
	if (v2 < v3)
		return 1i64;
	v5 = *(float*)(a1 + 964);
	v6 = *(float*)(a2 + 964);
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	return v5 > v6;
}

