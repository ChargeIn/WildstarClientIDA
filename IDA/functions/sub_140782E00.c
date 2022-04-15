#include "../winhttp.h"

//----- (0000000140782E00) ----------------------------------------------------
void __fastcall sub_140782E00(__m128* a1, __m128* a2, __int64 a3, _DWORD* a4)
{
	__m128 v5; // xmm3
	__m128 v6; // xmm2
	float v7; // xmm2_4
	__m128 v8; // xmm1
	__m128 v9; // xmm0
	_DWORD* v10; // rax
	char v11[16]; // [rsp+20h] [rbp-28h] BYREF
	__m128 v12; // [rsp+30h] [rbp-18h] BYREF

	v5 = _mm_sub_ps(a1[4], a2[247]);
	v6 = _mm_mul_ps(v5, v5);
	v7 = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]) + _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	if (v7 >= *(float*)&dword_140C4B928)
	{
		v8 = 0i64;
		v8.m128_f32[0] = 1.0 / fsqrt(v7);
		v9 = v8;
		v9.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] * v7) * v8.m128_f32[0]) - 3.0)
			* (float)(v8.m128_f32[0] * -0.5);
		v12 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v5);
		v10 = (_DWORD*)sub_1401B3170((__int64)v11, v12.m128_f32);
		*a4 = *v10;
		a4[1] = v10[1];
		a4[2] = v10[2];
	}
}
// 140C4B928: using guessed type int dword_140C4B928;
// 140782E00: using guessed type __m128 var_18;
// 140782E00: using guessed type char var_28[16];

