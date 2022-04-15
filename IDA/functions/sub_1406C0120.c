#include "../winhttp.h"

//----- (00000001406C0120) ----------------------------------------------------
void __fastcall sub_1406C0120(__int64 a1)
{
	float v2; // xmm1_4
	double v3; // xmm0_8

	v2 = fmaxf(*(float*)(a1 + 1876) - 0.25, -1.0);
	*(float*)(a1 + 1876) = v2;
	v3 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v2);
	*(_DWORD*)(a1 + 1872) = LODWORD(v3);
	sub_1406BFD00(a1);
}

