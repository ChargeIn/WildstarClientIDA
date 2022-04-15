#include "../winhttp.h"

//----- (0000000140542F50) ----------------------------------------------------
__int64 __fastcall sub_140542F50(__int64 a1, __int64 a2)
{
	float v2; // xmm0_4
	float v3; // xmm1_4

	v2 = *(float*)(a1 + 424);
	v3 = *(float*)(a2 + 424);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

