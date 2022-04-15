#include "../winhttp.h"

//----- (00000001408D8E70) ----------------------------------------------------
__int64 __fastcall sub_1408D8E70(__int64 a1, double* a2, __int64 a3, int a4)
{
	__int64 result; // rax
	float v5; // xmm0_4
	float v6; // xmm1_4
	float v7; // xmm0_4

	result = a4;
	v5 = *a2;
	*(float*)(a3 + 4i64 * a4) = v5;
	v6 = a2[1];
	*(float*)(a3 + 4i64 * a4 + 4) = v6;
	v7 = a2[2];
	*(float*)(a3 + 4i64 * a4 + 8) = v7;
	*(float*)(a3 + 4i64 * a4 + 12) = a2[4];
	*(float*)(a3 + 4i64 * a4 + 16) = a2[5];
	return result;
}

