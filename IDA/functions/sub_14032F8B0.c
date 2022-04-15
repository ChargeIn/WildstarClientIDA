//----- (000000014032F8B0) ----------------------------------------------------
void __fastcall sub_14032F8B0(__int64 a1, _DWORD* a2, int a3, int a4, float a5)
{
	__m128 v6; // xmm7
	__m128 v7; // xmm8
	__m128 v8; // xmm15
	__m128 v9; // xmm10
	__m128 v10; // xmm11
	__m128 v11; // xmm13
	float v12; // xmm8_4
	float v13; // xmm7_4
	float v14; // xmm6_4
	float v15; // xmm0_4
	__m128 v16; // xmm2
	__m128 v17; // xmm5
	__m128 v18; // xmm3
	__m128 v19; // [rsp+28h] [rbp-91h]
	__m128 v20; // [rsp+28h] [rbp-91h]
	__m128 v21; // [rsp+38h] [rbp-81h]
	__m128 v22; // [rsp+38h] [rbp-81h]
	__m128 v23; // [rsp+48h] [rbp-71h]
	__m128 v24; // [rsp+58h] [rbp-61h]

	v6 = (__m128)xmmword_140C78420;
	v7 = (__m128)xmmword_140C78430;
	v8 = (__m128)xmmword_140C78410;
	v9 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*)ymmword_140C78390.m256_f32, 85),
					(__m128)xmmword_140C78420),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*)ymmword_140C78390.m256_f32, 0),
					(__m128)xmmword_140C78410)),
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*)ymmword_140C78390.m256_f32, 170),
				(__m128)xmmword_140C78430)),
		_mm_mul_ps(
			_mm_shuffle_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*)ymmword_140C78390.m256_f32, 255),
			(__m128)xmmword_140B7AF10));
	v10 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*) & ymmword_140C78390.m256_f32[4], *(__m128*) & ymmword_140C78390.m256_f32[4], 85),
					(__m128)xmmword_140C78420),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*) & ymmword_140C78390.m256_f32[4], *(__m128*) & ymmword_140C78390.m256_f32[4], 0),
					(__m128)xmmword_140C78410)),
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*) & ymmword_140C78390.m256_f32[4], *(__m128*) & ymmword_140C78390.m256_f32[4], 170),
				(__m128)xmmword_140C78430)),
		_mm_mul_ps(
			_mm_shuffle_ps(*(__m128*) & ymmword_140C78390.m256_f32[4], *(__m128*) & ymmword_140C78390.m256_f32[4], 255),
			(__m128)xmmword_140B7AF10));
	v19 = v9;
	v21 = v10;
	v11 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps((__m128)xmmword_140C783C0, (__m128)xmmword_140C783C0, 85),
					(__m128)xmmword_140C78420),
				_mm_mul_ps(
					_mm_shuffle_ps((__m128)xmmword_140C783C0, (__m128)xmmword_140C783C0, 0),
					(__m128)xmmword_140C78410)),
			_mm_mul_ps(
				_mm_shuffle_ps((__m128)xmmword_140C783C0, (__m128)xmmword_140C783C0, 170),
				(__m128)xmmword_140C78430)),
		_mm_mul_ps(
			_mm_shuffle_ps((__m128)xmmword_140C783C0, (__m128)xmmword_140C783C0, 255),
			(__m128)xmmword_140B7AF10));
	v24 = v11;
	if (a3)
	{
		v19.m128_i32[0] = v9.m128_i32[0] ^ 0x80000000;
		v21.m128_i32[0] = v10.m128_i32[0] ^ 0x80000000;
		v9 = v19;
		v10 = v21;
		v24.m128_f32[0] = -v11.m128_f32[0];
		v11 = v24;
	}
	if (a4)
	{
		v19.m128_i32[1] ^= 0x80000000;
		v21.m128_i32[1] ^= 0x80000000;
		v9 = v19;
		v10 = v21;
		v24.m128_f32[1] = -v24.m128_f32[1];
		v11 = v24;
	}
	if (a5 != 0.0)
	{
		v12 = sub_1408FE3D0(0.0);
		v13 = sub_1408FC950(0.0);
		v14 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(a5)));
		v15 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)LODWORD(a5)));
		v20.m128_i32[3] = 0;
		v23.m128_i32[3] = 0;
		v20.m128_f32[0] = (float)((float)(v12 * v12) * v14) + (float)(v15 * v13);
		v20.m128_f32[1] = v14 * v13;
		v20.m128_f32[2] = (float)((float)(v13 * v12) * v14) - (float)(v15 * v12);
		v22.m128_f32[0] = (float)((float)(v12 * v12) * v15) - (float)(v14 * v13);
		v22.m128_f32[1] = v15 * v13;
		v22.m128_u64[1] = COERCE_UNSIGNED_INT((float)((float)(v13 * v12) * v15) + (float)(v14 * v12));
		v23.m128_f32[0] = v12 * v13;
		v23.m128_f32[2] = v13 * v13;
		v23.m128_f32[1] = -v12;
		v9 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v22), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v20)),
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v23)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 255), (__m128)xmmword_140C78440));
		v6 = (__m128)xmmword_140C78420;
		v7 = (__m128)xmmword_140C78430;
		v10 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v22), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v20)),
				_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v23)),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 255), (__m128)xmmword_140C78440));
		v11 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v22), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v20)),
				_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v23)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 255), (__m128)xmmword_140C78440));
	}
	v16 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v8)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v7)),
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 255), (__m128)xmmword_140B7ADD0));
	v17 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v8)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v7)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 255), (__m128)xmmword_140B7ADD0));
	v18 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v8)),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v7)),
		_mm_mul_ps(_mm_shuffle_ps(v10, v10, 255), (__m128)xmmword_140B7ADD0));
	a2[2] = v16.m128_i32[0];
	*a2 = v17.m128_i32[0];
	a2[1] = v18.m128_i32[0];
	a2[6] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
	a2[4] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
	a2[5] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
}
// 140B7ADD0: using guessed type __int128 xmmword_140B7ADD0;
// 140B7AF10: using guessed type __int128 xmmword_140B7AF10;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 14032F8B0: using guessed type __m128 var_B0;

