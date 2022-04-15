#include "../winhttp.h"

//----- (00000001408D3800) ----------------------------------------------------
void __fastcall sub_1408D3800(__int64 a1, __int64 a2)
{
	__m128d v4; // xmm1
	double v5; // xmm6_8
	__int64 i; // rsi
	double v7[6]; // [rsp+20h] [rbp-78h] BYREF
	double v8[6]; // [rsp+50h] [rbp-48h] BYREF

	if (*(_BYTE*)(a2 + 20))
	{
		sub_1408D8F20(v8);
		sub_1408D8F20(v7);
	}
	else
	{
		v4 = (__m128d) * (unsigned __int64*)(a2 + 8);
		v4.m128d_f64[0] = v4.m128d_f64[0] * 0.01;
		if (v4.m128d_f64[0] > 0.0)
			*(_QWORD*)&v4.m128d_f64[0] = *(_OWORD*)&_mm_sqrt_pd(v4);
		v5 = (1.0 - v4.m128d_f64[0] * 0.8) * 1.414;
		sub_1408D9480(*(_DWORD*)a1, *(double*)a2, v5, v8);
		if (*(_DWORD*)(a2 + 16) == 1)
			sub_1408D9480(*(_DWORD*)a1, *(double*)a2, v5, v7);
		else
			sub_1408D8F20(v7);
	}
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 4); i = (unsigned int)(i + 1))
	{
		sub_1408D8E70(a1, v8, 192 * i + *(_QWORD*)(a1 + 8), 10);
		sub_1408D8E70(a1, v7, 192 * i + *(_QWORD*)(a1 + 8), 15);
	}
}
// 1408D3800: using guessed type double var_48[6];
// 1408D3800: using guessed type double var_78[6];

