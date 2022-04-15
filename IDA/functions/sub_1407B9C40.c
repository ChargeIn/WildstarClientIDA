#include "../winhttp.h"

//----- (00000001407B9C40) ----------------------------------------------------
__int64 __fastcall sub_1407B9C40(__m128* a1, __int64 a2, __int64 a3, __m128* a4, __m128* a5)
{
	__m128 v5; // xmm6
	__m128 v6; // xmm4
	__m128 v8; // xmm5
	__m128 v9; // xmm3
	float v10; // xmm1_4
	__m128* v11; // r10
	float* v12; // r11
	__m128 v13; // xmm5
	float v14; // xmm7_4
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128 v17; // xmm3
	__m128 v18; // xmm1
	__m128 v19; // xmm10
	__m128 v20; // xmm3
	__m128 v21; // xmm10
	__m128 v22; // xmm2
	__m128 v23; // xmm3
	__m128 v24; // xmm2
	__m128 v25; // xmm4
	float v26; // xmm4_4
	__m128 v27; // xmm3
	__m128 v28; // xmm1
	float v29; // xmm1_4
	__m128 v30; // xmm3
	float v31; // xmm3_4
	float v32; // xmm2_4
	float v33; // xmm1_4
	float v34; // xmm4_4
	float v35; // xmm0_4
	float v36; // xmm3_4
	__int64 result; // rax
	float v38; // xmm7_4
	__m128 v39; // xmm5
	__m128 v40; // xmm2
	__m128 v41; // xmm4
	__m128 v42; // xmm4
	__m128 v43; // xmm2
	float v44; // xmm2_4
	__m128 v45; // xmm0
	__m128 v46; // xmm4
	__m128 v47; // xmm1
	__m128 v48; // [rsp+20h] [rbp-78h] BYREF
	__m128 v49; // [rsp+30h] [rbp-68h] BYREF
	__m128 v50; // [rsp+40h] [rbp-58h] BYREF

	v6 = (__m128)0x40400000u;
	v8 = _mm_sub_ps(*a5, *a4);
	v9 = _mm_mul_ps(v8, v8);
	v9.m128_f32[0] = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	v10 = 1.0 / fsqrt(v9.m128_f32[0]);
	v6.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v9.m128_f32[0] * v10) * v10)) * 0.5) * v10, 0.0);
	v48 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v8);
	sub_1401AE000(&v50, &v49, &v48);
	v13 = v49;
	v14 = v12[1];
	v5.m128_f32[0] = v14;
	v15 = _mm_sub_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps((__m128) * (unsigned int*)v12, (__m128) * (unsigned int*)v12, 0), a1[25]),
			a1[23]),
		*v11);
	v16 = _mm_mul_ps(v49, v15);
	v16.m128_f32[0] = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
		+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
	v17 = _mm_mul_ps(v50, v15);
	v17.m128_f32[0] = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
		+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
	v18 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), a1[25]), a1[23]), *v11);
	v19 = _mm_unpacklo_ps(v17, (__m128)0i64);
	v20 = _mm_mul_ps(v18, v50);
	v21 = _mm_unpacklo_ps(v19, _mm_unpacklo_ps(v16, (__m128)0i64));
	v22 = _mm_mul_ps(v18, v49);
	v22.m128_f32[0] = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
		+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
	v20.m128_f32[0] = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
		+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
	v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0i64), _mm_unpacklo_ps(v22, (__m128)0i64));
	v24 = _mm_sub_ps(v21, (__m128)xmmword_140C79930);
	v25 = _mm_mul_ps(v24, v24);
	v26 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
		- (float)(*(float*)&dword_140C79940 * *(float*)&dword_140C79940);
	if (v26 <= 0.0)
	{
		v36 = 0.0;
	}
	else
	{
		v27 = _mm_sub_ps(v23, v21);
		v28 = _mm_mul_ps(v27, v27);
		v29 = v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
		if (v29 < *(float*)&dword_140C3EA78)
			return 0i64;
		v30 = _mm_mul_ps(v27, v24);
		v31 = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]) * 2.0;
		v32 = (float)(v31 * v31) - (float)((float)(v29 * 4.0) * v26);
		if (v32 < 0.0)
			return 0i64;
		v33 = v29 * 2.0;
		v13 = (__m128)0x3F800000u;
		v34 = fsqrt(v32);
		v35 = (float)(v34 - v31) * (float)(1.0 / v33);
		if (v35 < 0.0)
			return 0i64;
		v36 = (float)((float)-v31 - v34) * (float)(1.0 / v33);
		if (v36 > 1.0)
			return 0i64;
		if (v36 < 0.0)
			v36 = v35;
	}
	v38 = (float)((float)(v14 - *v12) * v36) + *v12;
	v13.m128_f32[0] = v38;
	v39 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), a1[25]), a1[23]);
	v40 = _mm_sub_ps(v39, *v11);
	v41 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v48, v48, 210), _mm_shuffle_ps(v40, v40, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v48, v48, 201), _mm_shuffle_ps(v40, v40, 210)));
	v42 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v41, v41, 210), _mm_shuffle_ps(v48, v48, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v41, v41, 201), _mm_shuffle_ps(v48, v48, 210)));
	v43 = _mm_mul_ps(v42, v42);
	v44 = (float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0]) + _mm_shuffle_ps(v43, v43, 170).m128_f32[0];
	if (v44 < *(float*)&dword_140C54B18)
		return 0i64;
	v45 = 0i64;
	v45.m128_f32[0] = fsqrt(v44);
	v46 = _mm_div_ps(v42, _mm_shuffle_ps(v45, v45, 0));
	v47 = _mm_mul_ps(_mm_sub_ps(a1[24], v39), v46);
	if ((float)((float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
		+ _mm_shuffle_ps(v47, v47, 170).m128_f32[0]) > -0.0000099999997)
		return 0i64;
	a1[72].m128_f32[0] = v38;
	result = 1i64;
	a1[73] = v46;
	return result;
}
// 1407B9CE6: variable 'v12' is possibly undefined
// 1407B9D14: variable 'v11' is possibly undefined
// 1407B9D02: variable 'v5' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3EA78: using guessed type int dword_140C3EA78;
// 140C54B18: using guessed type int dword_140C54B18;
// 140C79930: using guessed type __int128 xmmword_140C79930;
// 140C79940: using guessed type int dword_140C79940;

