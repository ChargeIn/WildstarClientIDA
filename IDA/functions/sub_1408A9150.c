#include "../winhttp.h"

//----- (00000001408A9150) ----------------------------------------------------
void __fastcall sub_1408A9150(__int64 a1, int a2, float a3, float a4, char a5)
{
	double v6; // xmm0_8
	float v7; // xmm0_4

	*(_DWORD*)a1 = a2;
	*(float*)(a1 + 4) = a3;
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1103626240i64), a3 * 0.0099999998);
	*(float*)(a1 + 20) = a4;
	v7 = (float)(*(float*)&v6 * 4.0) - 3.0;
	*(float*)(a1 + 12) = v7;
	if (a5)
	{
		*(float*)(a1 + 8) = a3;
		*(float*)(a1 + 16) = v7;
		*(float*)(a1 + 24) = a4;
	}
}

