#include "../winhttp.h"

//----- (00000001402523A0) ----------------------------------------------------
void __fastcall sub_1402523A0(__m128* a1, __int64 a2)
{
	double v4; // xmm11_8
	float v5; // xmm9_4
	float v6; // xmm0_4
	__m128 v7; // xmm2
	__m128 v8; // xmm3
	float v9; // xmm3_4
	float v10; // xmm7_4
	float v11; // xmm0_4
	__m128 v12; // xmm2
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm8
	__m128 v17; // [rsp+20h] [rbp-78h]
	__m128 v18; // [rsp+30h] [rbp-68h]

	*(__m128*)(a2 + 16) = _mm_min_ps(a1[34], a1[35]);
	*(__m128*)a2 = _mm_sub_ps((__m128)0i64, *(__m128*)(a2 + 16));
	*(_QWORD*)&v4 = a1[38].m128_u32[0];
	if (*(float*)&v4 >= 3.1415827)
	{
		if (*(float*)&v4 >= 6.2831755)
		{
			*(_OWORD*)(a2 + 32) = 0i64;
			v16 = _mm_mul_ps(*(__m128*)(a2 + 16), *(__m128*)(a2 + 16));
			*(float*)(a2 + 48) = fminf(
				fmaxf(a1[34].m128_f32[0], fmaxf(a1[34].m128_f32[1], a1[34].m128_f32[2])),
				fsqrt(
					(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
					+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]));
			goto LABEL_18;
		}
		v9 = a1[34].m128_f32[1];
		v10 = a1[34].m128_f32[2];
		v17.m128_f32[0] = -a1[34].m128_f32[0];
		*(float*)&v4 = *(float*)&v4 * 0.5;
		v17.m128_i32[1] = LODWORD(v9) ^ 0x80000000;
		v18.m128_i32[0] = a1[34].m128_i32[0];
		v18.m128_f32[1] = v9;
		v11 = sub_1408FC950(v4);
		v17.m128_f32[2] = -v10;
		v12 = _mm_max_ps(v17, *(__m128*)a2);
		v18.m128_f32[2] = -(float)(fmaxf(v18.m128_f32[0], fmaxf(v9, v10)) * v11);
		v13 = _mm_min_ps(v18, *(__m128*)(a2 + 16));
		if (v12.m128_f32[0] >= v13.m128_f32[0]
			|| _mm_shuffle_ps(v12, v12, 85).m128_f32[0] >= _mm_shuffle_ps(v13, v13, 85).m128_f32[0]
			|| _mm_shuffle_ps(v12, v12, 170).m128_f32[0] >= _mm_shuffle_ps(v13, v13, 170).m128_f32[0])
		{
			*(_OWORD*)a2 = xmmword_140C798A0;
			*(_OWORD*)(a2 + 16) = xmmword_140C798B0;
		}
		else if (a2)
		{
			*(__m128*)a2 = v12;
			*(__m128*)(a2 + 16) = v13;
		}
	}
	else
	{
		*(float*)&v4 = *(float*)&v4 * 0.5;
		v18.m128_f32[0] = sub_1408FE3D0(v4) * a1[34].m128_f32[0];
		v5 = fminf(a1[33].m128_f32[0], fminf(a1[33].m128_f32[1], a1[33].m128_f32[2]));
		v17.m128_f32[0] = -v18.m128_f32[0];
		v18.m128_i32[1] = a1[34].m128_i32[1];
		v17.m128_i32[1] = v18.m128_i32[1] ^ 0x80000000;
		v6 = sub_1408FC950(v4);
		v17.m128_f32[2] = -a1[34].m128_f32[2];
		v7 = _mm_max_ps(v17, *(__m128*)a2);
		v18.m128_f32[2] = v5 * v6;
		v8 = _mm_min_ps(v18, *(__m128*)(a2 + 16));
		if (v7.m128_f32[0] >= v8.m128_f32[0]
			|| _mm_shuffle_ps(v7, v7, 85).m128_f32[0] >= _mm_shuffle_ps(v8, v8, 85).m128_f32[0]
			|| _mm_shuffle_ps(v7, v7, 170).m128_f32[0] >= _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
		{
			*(_OWORD*)a2 = xmmword_140C798A0;
			*(_OWORD*)(a2 + 16) = xmmword_140C798B0;
		}
		else if (a2)
		{
			*(__m128*)a2 = v7;
			*(__m128*)(a2 + 16) = v8;
		}
	}
	v14 = _mm_sub_ps(*(__m128*)(a2 + 16), *(__m128*)a2);
	v15 = _mm_mul_ps(v14, v14);
	*(__m128*)(a2 + 32) = _mm_mul_ps(_mm_add_ps(*(__m128*)a2, *(__m128*)(a2 + 16)), (__m128)xmmword_140B7AC50);
	*(float*)(a2 + 48) = fsqrt(
		(float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
		+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0])
		* 0.5;
LABEL_18:
	*(float*)(a2 + 48) = a1[40].m128_f32[1] + *(float*)(a2 + 48);
}
// 140252492: variable 'v17' is possibly undefined
// 1402524A1: variable 'v18' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 1402523A0: using guessed type __m128 var_68;

