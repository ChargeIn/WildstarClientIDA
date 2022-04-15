#include "../winhttp.h"

//----- (0000000140622A40) ----------------------------------------------------
void __fastcall sub_140622A40(__m128* a1)
{
	__int64 v2; // rdi
	__m128* v3; // rax
	__m128* v4; // rax
	__m128 v5; // xmm5
	__m128 v6; // xmm4
	__m128 v7; // xmm3
	float v8; // xmm1_4
	char v9[72]; // [rsp+20h] [rbp-48h] BYREF

	if (a1[56].m128_i8[0] < 0)
	{
		v2 = sub_1403D90D0(qword_140C65898, a1[56].m128_i32[1]);
		v3 = (__m128*)sub_1403D90D0(qword_140C65898, a1[56].m128_i32[2]);
		if (v2)
		{
			v4 = (__m128*)sub_1405B4520(v2, (__int64)v9);
			a1[30] = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 210), _mm_shuffle_ps(a1[33], a1[33], 201)),
				_mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 201), _mm_shuffle_ps(a1[33], a1[33], 210)));
		}
		else if (v3)
		{
			a1[30] = _mm_sub_ps(
				(__m128)0i64,
				_mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v3[283], v3[283], 210), _mm_shuffle_ps(a1[33], a1[33], 201)),
					_mm_mul_ps(_mm_shuffle_ps(v3[283], v3[283], 201), _mm_shuffle_ps(a1[33], a1[33], 210))));
		}
		v5 = a1[30];
		v6 = (__m128)0x40400000u;
		v7 = _mm_mul_ps(v5, v5);
		v7.m128_f32[0] = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
		v8 = 1.0 / fsqrt(v7.m128_f32[0]);
		v6.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v7.m128_f32[0] * v8) * v8)) * 0.5) * v8, 0.0);
		a1[30] = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v5);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140622A40: using guessed type char var_48[72];

