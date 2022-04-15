#include "../winhttp.h"

//----- (00000001408F4DF0) ----------------------------------------------------
void __fastcall sub_1408F4DF0(__int64 a1, float a2)
{
	double v3; // xmm0_8
	float v4; // xmm0_4

	v3 = sub_1408FBFC0(
		COERCE_DOUBLE(0x40000000i64),
		(float)((float)(*(float*)(*(_QWORD*)(a1 + 8) + 32i64) + *(float*)(a1 + 84)) + a2) * 0.00083333335);
	v4 = *(float*)&v3 * 8.0;
	if (v4 > 2.0)
		*(float*)(a1 + 68) = v4;
	else
		*(_DWORD*)(a1 + 68) = 0x40000000;
}

