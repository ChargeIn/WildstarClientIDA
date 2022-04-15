//----- (000000014061F3D0) ----------------------------------------------------
__int64 __fastcall sub_14061F3D0(__int64 a1, __int64 a2, __m128* a3, __m128* a4, _DWORD* a5)
{
	__m128 v5; // xmm4
	__m128 v6; // xmm3
	__m128 v7; // xmm1
	float v8; // xmm2_4
	__m128 v9; // xmm1
	float v10; // xmm0_4
	__m128i v11; // xmm1
	__m128i v12; // xmm3
	__m128 v13; // xmm3
	__m128 v14; // xmm1
	float v15; // xmm2_4
	__m128 v16; // xmm1
	float v17; // xmm0_4
	__m128i v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	float v21; // xmm0_4
	__m128i v22; // xmm4

	v5 = (__m128)0x40400000u;
	*(_OWORD*)a2 = xmmword_140C78390;
	*(_OWORD*)(a2 + 16) = xmmword_140C783A0;
	*(_OWORD*)(a2 + 32) = xmmword_140C783B0;
	*(_OWORD*)(a2 + 48) = xmmword_140C783C0;
	v6 = _mm_sub_ps(*a4, *a3);
	v7 = _mm_mul_ps(v6, v6);
	v8 = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0]) + _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
	v9 = (__m128)0x40400000u;
	v10 = 1.0 / fsqrt(v8);
	v9.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v8 * v10) * v10)) * 0.5) * v10, 0.0);
	v11 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v6);
	*(_DWORD*)(a2 + 32) = _mm_cvtsi128_si32(v11);
	*(_DWORD*)(a2 + 36) = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
	*(_DWORD*)(a2 + 40) = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
	if (fabs(*(float*)(a2 + 32)) > 0.0000099999997 || fabs(*(float*)(a2 + 40)) > 0.0000099999997)
	{
		v13 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 210),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 201),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
		v14 = _mm_mul_ps(v13, v13);
		v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
		v16 = (__m128)0x40400000u;
		v17 = fsqrt(v15);
		v16.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v17)) * (float)(1.0 / v17))) * 0.5)
			* (float)(1.0 / v17),
			0.0);
		v18 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v13);
		*(_DWORD*)a2 = _mm_cvtsi128_si32(v18);
		*(_DWORD*)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
		*(_DWORD*)(a2 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
		v19 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)a2, *(__m128*)a2, 210),
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)a2, *(__m128*)a2, 201),
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 210)));
		v20 = _mm_mul_ps(v19, v19);
		v20.m128_f32[0] = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
			+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
		v21 = 1.0 / fsqrt(v20.m128_f32[0]);
		v5.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v20.m128_f32[0] * v21) * v21)) * 0.5) * v21, 0.0);
		v22 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v19);
		*(_DWORD*)(a2 + 16) = _mm_cvtsi128_si32(v22);
		*(_DWORD*)(a2 + 20) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
		*(_DWORD*)(a2 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
	}
	else
	{
		*(_DWORD*)(a2 + 16) = _mm_cvtsi128_si32((__m128i)xmmword_140B7A330);
		*(_DWORD*)(a2 + 20) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A330, 4));
		*(_DWORD*)(a2 + 24) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A330, 8));
		v12 = (__m128i)_mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 210),
				_mm_shuffle_ps(*(__m128*)(a2 + 16), *(__m128*)(a2 + 16), 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)(a2 + 32), *(__m128*)(a2 + 32), 201),
				_mm_shuffle_ps(*(__m128*)(a2 + 16), *(__m128*)(a2 + 16), 210)));
		*(_DWORD*)a2 = _mm_cvtsi128_si32(v12);
		*(_DWORD*)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
		*(_DWORD*)(a2 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
	}
	*(_DWORD*)(a2 + 48) = *a5;
	*(_DWORD*)(a2 + 52) = a5[1];
	*(_DWORD*)(a2 + 56) = a5[2];
	return a2;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

