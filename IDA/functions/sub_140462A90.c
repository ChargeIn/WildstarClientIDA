#include "../winhttp.h"

//----- (0000000140462A90) ----------------------------------------------------
float __fastcall sub_140462A90(__int64 a1)
{
	float v1; // xmm0_4
	float v3; // xmm7_4
	__int64 v4; // rax
	float v5; // xmm6_4

	v3 = *(float*)(a1 + 2556);
	v4 = sub_140200220(0x4F3u);
	if (v4)
		v5 = *(float*)(v4 + 28);
	else
		v5 = 0.5;
	sub_140462AF0(a1);
	return (float)(v1 * v5) + v3;
}
// 140462AD1: variable 'v1' is possibly undefined

