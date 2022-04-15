#include "../winhttp.h"

//----- (00000001408295C0) ----------------------------------------------------
float __fastcall sub_1408295C0(float a1, float a2, float a3, float a4, float a5)
{
	if (a5 <= a1)
		return a2;
	if (a5 < a3)
		return (float)((float)((float)(a5 - a1) / (float)(a3 - a1)) * (float)(a4 - a2)) + a2;
	return a4;
}

