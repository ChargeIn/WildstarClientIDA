#include "../winhttp.h"

//----- (0000000140833A10) ----------------------------------------------------
void __fastcall sub_140833A10(__int64 a1, float a2)
{
	float v2; // xmm1_4
	float v3; // xmm0_4

	*(float*)(a1 + 788) = a2;
	v2 = a2 * 0.050000001;
	if (v2 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v3 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v3 = 27866352.0;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		*(float*)(a1 + 780) = (float)((float)((float)((float)(COERCE_FLOAT(
			((int)(float)((float)(v2 * v3) + 1065353200.0) & 0x7FFFFF)
			+ 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v2 * v3) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v2 * v3) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		*(_DWORD*)(a1 + 780) = 0;
	}
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

