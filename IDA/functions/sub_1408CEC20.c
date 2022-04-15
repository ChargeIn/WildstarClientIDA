#include "../winhttp.h"

//----- (00000001408CEC20) ----------------------------------------------------
__int64 __fastcall sub_1408CEC20(_DWORD* a1, __int64 a2)
{
	double v3; // xmm0_8
	__int64 result; // rax

	a1[2] = *(_DWORD*)a2;
	a1[3] = *(_DWORD*)(a2 + 4);
	a1[4] = *(_DWORD*)(a2 + 8);
	v3 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 12) * 0.050000001);
	result = 1i64;
	a1[5] = LODWORD(v3);
	return result;
}

