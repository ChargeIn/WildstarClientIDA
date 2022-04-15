#include "../winhttp.h"

//----- (000000014055A580) ----------------------------------------------------
__int64 __fastcall sub_14055A580(__int64 a1, __int64 a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4

	v3 = *(float*)(32 * a1 + a3 + 20);
	v4 = *(float*)(32 * a2 + a3 + 20);
	if (v3 <= v4)
		return v4 > v3;
	else
		return 0xFFFFFFFFi64;
}

