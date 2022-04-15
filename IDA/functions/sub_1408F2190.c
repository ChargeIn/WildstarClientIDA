#include "../winhttp.h"

//----- (00000001408F2190) ----------------------------------------------------
double __fastcall sub_1408F2190(__int64 a1)
{
	float v2; // xmm1_4

	v2 = (double)(int)sub_1407DDB28() * 0.00003051850947599719;
	return sub_1408FBFC0(
		COERCE_DOUBLE(0x40000000i64),
		(float)((float)((float)((float)(v2 * 2.0) - 1.0) * *(float*)(a1 + 28)) + *(float*)(a1 + 24)) * 0.0099999998);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

