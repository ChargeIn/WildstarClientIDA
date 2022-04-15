#include "../winhttp.h"

//----- (0000000140870280) ----------------------------------------------------
float __fastcall sub_140870280(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r8d
	unsigned int v3; // r10d
	__int64 v5; // rax
	__m128 v6; // xmm0
	__m128 v7; // xmm1
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm1_4
	float result; // xmm0_4
	__m128 v12; // [rsp+0h] [rbp-28h]
	float v13; // [rsp+10h] [rbp-18h]

	v2 = 1;
	v3 = *(_WORD*)(a1 + 54) & 7;
	v5 = (a2 + 1i64) << 6;
	v6 = *(__m128*)(v5 + a1);
	v7 = *(__m128*)(v5 + a1 + 16);
	v12 = v6;
	v13 = v7.m128_f32[0];
	if (v3 > 1)
	{
		do
		{
			v8 = v2 + a2;
			++v2;
			v9 = (v8 + 1) << 6;
			v6 = _mm_add_ps(v6, *(__m128*)(v9 + a1));
			v7 = _mm_add_ps(v7, *(__m128*)(v9 + a1 + 16));
		} while (v2 < v3);
		v12 = v6;
		v13 = v7.m128_f32[0];
	}
	v10 = v12.m128_f32[0];
	if (v12.m128_f32[0] <= v12.m128_f32[1])
		v10 = v12.m128_f32[1];
	if (v10 <= v12.m128_f32[3])
		v10 = v12.m128_f32[3];
	if (v10 <= v13)
		v10 = v13;
	result = 0.0;
	if (v10 != 0.0)
		return 1.0 / v10;
	return result;
}

