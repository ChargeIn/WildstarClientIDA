#include "../winhttp.h"

//----- (00000001404A4E30) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A4E30(__int64 a1, unsigned int* a2, int a3, int a4, int a5)
{
	float v9; // xmm7_4
	double v10; // xmm0_8
	__int64 v11; // rcx

	if (!a2)
		return 0i64;
	v9 = COERCE_FLOAT(sub_140466520((__int64)a2, a4)) * 100.0;
	v10 = sub_1404667C0(a2, a4);
	return sub_1404A2010(v11, a3, v9 / *(float*)&v10, (float)a5);
}
// 1404A4EBA: variable 'v11' is possibly undefined

