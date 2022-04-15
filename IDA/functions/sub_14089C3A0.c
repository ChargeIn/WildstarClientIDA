#include "../winhttp.h"

//----- (000000014089C3A0) ----------------------------------------------------
void __fastcall sub_14089C3A0(__int64 a1, __m128* a2, unsigned int a3, double a4, float a5)
{
	__m128 v5; // xmm5
	float v6; // xmm1_4
	__m128* v7; // r9
	__m128 v8; // xmm7
	__m128 v9; // xmm8
	float v10; // xmm0_4
	__m128 v12; // xmm9
	__m128* v13; // r10
	float v14; // xmm0_4
	float v15; // xmm0_4
	float v16; // xmm1_4
	__m128 v17; // xmm4
	__m128 v18; // xmm5
	__m128 v19; // xmm2
	__m128 v20; // xmm1
	__m128 v21; // xmm3
	__m128 v22; // xmm0
	__m128 v23; // xmm1
	__m128 v24; // xmm3
	__m128 v25; // xmm0
	__m128 v26; // xmm3
	__m128 v27; // xmm1
	__m128 v28; // [rsp+20h] [rbp-78h]

	v6 = *(float*)(a1 + 4);
	v7 = a2;
	v28.m128_i32[0] = *(_DWORD*)a1;
	v8 = _mm_shuffle_ps((__m128)0xBE2A84B5, (__m128)0xBE2A84B5, 0);
	v9 = _mm_shuffle_ps((__m128)0x3C0658EEu, (__m128)0x3C0658EEu, 0);
	v10 = *(float*)a1 + v6;
	v12 = _mm_shuffle_ps((__m128)0xB92951DE, (__m128)0xB92951DE, 0);
	v28.m128_f32[1] = v10;
	v13 = (__m128*)((char*)a2 + 4 * a3);
	if (v10 >= 3.1415925)
	{
		v10 = v10 + -6.2831855;
		v28.m128_f32[1] = v10;
	}
	v14 = v10 + v6;
	v28.m128_f32[2] = v14;
	if (v14 >= 3.1415925)
	{
		v14 = v14 + -6.2831855;
		v28.m128_f32[2] = v14;
	}
	v15 = v14 + v6;
	v28.m128_f32[3] = v15;
	if (v15 >= 3.1415925)
		v28.m128_f32[3] = v15 + -6.2831855;
	v16 = v6 * 4.0;
	if (v16 >= 6.2831855)
		v16 = v16 + -6.2831855;
	v17 = v28;
	v5.m128_f32[0] = v16;
	v18 = _mm_shuffle_ps(v5, v5, 0);
	if (a2 < v13)
	{
		do
		{
			++v7;
			v19 = _mm_mul_ps(v17, v17);
			v20 = _mm_mul_ps(v19, v17);
			v21 = _mm_add_ps(_mm_mul_ps(v20, v8), v17);
			v22 = _mm_mul_ps(v20, v19);
			v23 = _mm_mul_ps(_mm_mul_ps(v22, v19), v12);
			v24 = _mm_add_ps(v21, _mm_mul_ps(v22, v9));
			v25 = _mm_add_ps(v17, v18);
			v26 = _mm_add_ps(v24, v23);
			v27 = _mm_cmple_ps((__m128)xmmword_1409A9A90, v25);
			v7[-1] = v26;
			v17 = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v25, (__m128)xmmword_140B7B3B0), v27), _mm_andnot_ps(v27, v25));
		} while (v7 < v13);
		v28.m128_i32[0] = v17.m128_i32[0];
	}
	*(_DWORD*)a1 = v28.m128_i32[0];
	if (a5 == *(float*)&a4)
		sub_14089C180(a2, a4, a3);
	else
		sub_14089C250(a2, *(float*)&a4, COERCE_DOUBLE((unsigned __int64)LODWORD(a5)), a3);
}
// 14089C498: variable 'v5' is possibly undefined
// 1409A9A90: using guessed type __int128 xmmword_1409A9A90;
// 140B7B3B0: using guessed type __int128 xmmword_140B7B3B0;

