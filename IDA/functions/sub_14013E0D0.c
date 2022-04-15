#include "../winhttp.h"

//----- (000000014013E0D0) ----------------------------------------------------
void __fastcall sub_14013E0D0(__int64 a1, float a2)
{
	float v2; // xmm0_4

	v2 = a2 + *(float*)(a1 + 96);
	*(float*)(a1 + 112) = a2 + *(float*)(a1 + 112);
	*(float*)(a1 + 96) = v2;
}

