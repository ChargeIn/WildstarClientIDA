#include "../winhttp.h"

//----- (000000014013DDB0) ----------------------------------------------------
void __fastcall sub_14013DDB0(__int64 a1, float a2)
{
	float v2; // xmm0_4

	v2 = a2 + *(float*)(a1 + 80);
	*(float*)(a1 + 96) = a2 + *(float*)(a1 + 96);
	*(float*)(a1 + 80) = v2;
}

