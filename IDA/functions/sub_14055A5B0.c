#include "../winhttp.h"

//----- (000000014055A5B0) ----------------------------------------------------
__int64 __fastcall sub_14055A5B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rcx
	__int64 v4; // rdx
	unsigned int v5; // eax
	unsigned int v6; // r8d
	float v8; // xmm0_4
	float v9; // xmm1_4

	v3 = a3 + 32 * a1;
	v4 = a3 + 32 * a2;
	v5 = *(_DWORD*)(v3 + 24);
	v6 = *(_DWORD*)(v4 + 24);
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	if (v5 > v6)
		return 1i64;
	v8 = *(float*)(v3 + 28);
	v9 = *(float*)(v4 + 28);
	if (v8 < v9)
		return 0xFFFFFFFFi64;
	return v8 > v9;
}

