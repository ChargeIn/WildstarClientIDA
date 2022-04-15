//----- (000000014047DAA0) ----------------------------------------------------
__m128* __fastcall sub_14047DAA0(__m128* a1, __m128* a2, __m128* a3, int a4)
{
	unsigned __int64 v4; // rsi
	float v8; // xmm1_4
	__int64 v9; // rax
	float v10; // xmm0_4
	__m128 v11; // xmm4
	__m128* result; // rax
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__m128 v17; // xmm1
	__m128 v18; // xmm1
	__m128 v19; // xmm0
	__m128 v20; // xmm1
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm2
	__m128 v24; // xmm1
	__m128 v25; // xmm1
	__m128 v26; // xmm1
	__m128 v27; // xmm0
	__m128 v28; // xmm2
	__m128 v29; // xmm2
	__m128 v30; // xmm1
	__m128 v31; // xmm1
	__m128 v32; // [rsp+20h] [rbp-18h]
	__m128 v33; // [rsp+20h] [rbp-18h]
	__m128 v34; // [rsp+20h] [rbp-18h]

	v4 = a1[208].m128_u64[1];
	v32 = a1[286];
	if (v4)
	{
		v8 = sub_14047A940(a1) * *(float*)(v4 + 140);
	}
	else
	{
		v9 = sub_14022D500(a1[13].m128_u32[2]);
		if (v9)
			v8 = *(float*)(v9 + 40);
		else
			v8 = 0.0;
	}
	v11 = (__m128)0x40000000u;
	v11.m128_f32[0] = fmaxf(2.0, v8);
	v10 = v32.m128_f32[1] + v11.m128_f32[0];
	v11.m128_f32[0] = (float)(v11.m128_f32[0] * 2.0) * 0.33333334;
	v32.m128_f32[1] = v10;
	if (a4 == 2)
	{
		v28 = _mm_sub_ps(*a3, v32);
		v29 = _mm_shuffle_ps(v28, v28, 136);
		v30 = _mm_mul_ps(v29, v29);
		v30.m128_f32[0] = 1.0 / fsqrt(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]);
		v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v29);
		v20 = _mm_add_ps(
			_mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v31, _mm_shuffle_ps(v31, v31, 85)), (__m128)0i64),
				_mm_shuffle_ps(v11, v11, 0)),
			v32);
		goto LABEL_13;
	}
	if (a4 == 4)
	{
		v21 = v32;
		v22 = _mm_sub_ps(*a3, v32);
		v23 = _mm_shuffle_ps(v22, v22, 136);
		v24 = _mm_mul_ps(v23, v23);
		v24.m128_f32[0] = 1.0 / fsqrt(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]);
		v25 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v23);
		v26 = _mm_unpacklo_ps(_mm_unpacklo_ps(v25, _mm_shuffle_ps(v25, v25, 85)), (__m128)0i64);
		v34 = v26;
		v27 = _mm_shuffle_ps(v26, v26, 170);
		v34.m128_i32[0] = v27.m128_i32[0];
		v27.m128_f32[0] = v11.m128_f32[0];
		v34.m128_f32[2] = -v26.m128_f32[0];
		v20 = _mm_add_ps(_mm_mul_ps(v34, _mm_shuffle_ps(v27, v27, 0)), v21);
	LABEL_13:
		result = a2;
		goto LABEL_14;
	}
	result = a2;
	if (a4 != 8)
	{
		*a2 = v32;
		return result;
	}
	v13 = v32;
	v14 = _mm_sub_ps(*a3, v32);
	v15 = _mm_shuffle_ps(v14, v14, 136);
	v16 = _mm_mul_ps(v15, v15);
	v16.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0]);
	v17 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15);
	v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 85)), (__m128)0i64);
	v33 = v18;
	v33.m128_i32[2] = v18.m128_i32[0];
	v19 = _mm_xor_ps(_mm_shuffle_ps(v18, v18, 170), (__m128)xmmword_140B7B530);
	v33.m128_i32[0] = v19.m128_i32[0];
	v19.m128_f32[0] = v11.m128_f32[0];
	v20 = _mm_add_ps(_mm_mul_ps(v33, _mm_shuffle_ps(v19, v19, 0)), v13);
LABEL_14:
	*a2 = v20;
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 14047DAA0: using guessed type __m128 var_18;

