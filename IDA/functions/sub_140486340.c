#include "../winhttp.h"

//----- (0000000140486340) ----------------------------------------------------
__int64 __fastcall sub_140486340(__int64* a1, __m128* a2)
{
	__m128 v2; // xmm5
	__m128 v4; // xmm6
	__m128 v5; // xmm7
	__m128 v6; // xmm7
	__m128 v7; // xmm6
	__m128 v8; // xmm1
	float v9; // xmm2_4
	__m128 v10; // xmm1
	float v11; // xmm0_4
	__m128 v12; // xmm4
	__m128i v13; // xmm3
	__m128 v14; // xmm3
	__m128 v15; // xmm1
	float v16; // xmm2_4
	__m128 v17; // xmm1
	float v18; // xmm0_4
	__m128i v19; // xmm1
	__m128 v20; // xmm3
	__m128 v21; // xmm2
	float v22; // xmm0_4
	__m128i v23; // xmm5
	__int64 v24; // rax
	__m128i v25; // xmm4
	__int64 result; // rax
	int v27; // eax
	__int64 v28; // rax
	__m128 v29; // xmm2
	float v30; // xmm2_4
	__m128i v31; // [rsp+28h] [rbp-39h]
	__m128 v32; // [rsp+38h] [rbp-29h] BYREF
	__m128 v33; // [rsp+48h] [rbp-19h]
	__m128 v34; // [rsp+58h] [rbp-9h]
	__int128 v35; // [rsp+68h] [rbp+7h]

	v2 = (__m128)0x40400000u;
	v4 = *a2;
	v5 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64);
	v33 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v6 = _mm_add_ps(v5, (__m128)xmmword_140B7A4E0);
	v7 = _mm_sub_ps(v4, v6);
	v35 = xmmword_140C783C0;
	v32 = *(__m128*)ymmword_140C78390.m256_f32;
	v8 = _mm_mul_ps(v7, v7);
	v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	v10 = (__m128)0x40400000u;
	v11 = 1.0 / fsqrt(v9);
	v10.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v9 * v11) * v11)) * 0.5) * v11, 0.0);
	v31 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v7);
	v34.m128_u64[0] = v31.m128i_i64[0];
	v34.m128_u64[1] = __PAIR64__(HIDWORD(xmmword_140C783B0), _mm_cvtsi128_si32(_mm_srli_si128(v31, 8)));
	if (fabs(*(float*)v31.m128i_i32) > 0.0000099999997 || fabs(*(float*)&v31.m128i_i32[2]) > 0.0000099999997)
	{
		v12 = v34;
		v14 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v34, v34, 210),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(v34, v34, 201),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
		v15 = _mm_mul_ps(v14, v14);
		v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
			+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
		v17 = (__m128)0x40400000u;
		v18 = fsqrt(v16);
		v17.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v16 * (float)(1.0 / v18)) * (float)(1.0 / v18))) * 0.5)
			* (float)(1.0 / v18),
			0.0);
		v19 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v14);
		v32.m128_u64[0] = v19.m128i_i64[0];
		v32.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
		v20 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v32, v32, 210), _mm_shuffle_ps(v34, v34, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v32, v32, 201), _mm_shuffle_ps(v34, v34, 210)));
		v21 = _mm_mul_ps(v20, v20);
		v21.m128_f32[0] = (float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
			+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
		v22 = 1.0 / fsqrt(v21.m128_f32[0]);
		v2.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v21.m128_f32[0] * v22) * v22)) * 0.5) * v22, 0.0);
		v23 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), v20);
		v33.m128_u64[0] = v23.m128i_i64[0];
		v33.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
	}
	else
	{
		v12 = v34;
		v33.m128_u64[0] = 1065353216i64;
		v33.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A330, 8));
		v13 = (__m128i)_mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v34, v34, 210), _mm_shuffle_ps(v33, v33, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v34, v34, 201), _mm_shuffle_ps(v33, v33, 210)));
		v32.m128_u64[0] = v13.m128i_i64[0];
		v32.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
	}
	v24 = *a1;
	v25 = (__m128i)_mm_add_ps(v12, v6);
	*(_QWORD*)&v35 = v25.m128i_i64[0];
	DWORD2(v35) = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
	result = (*(__int64(__fastcall**)(__int64*, __m128*))(v24 + 24))(a1, &v32);
	if ((int)result >= 0)
	{
		v27 = dword_140C49E10;
		if (*(_DWORD*)qword_140C63750 < dword_140C49E10)
			v27 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C49E20 + v27))
		{
			v28 = a1[13];
			v29 = _mm_mul_ps(v7, v7);
			v30 = fsqrt(
				(float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
				+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
			if (v28)
				v30 = fmaxf(0.0, v30 - *(float*)(v28 + 4));
			Apollo_LUAEvent(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HintArrowDistanceUpdate",
				byte_1409E9E64,
				v30,
				v31.m128i_i64[0]);
		}
		return 0i64;
	}
	return result;
}
// 1409E9E64: using guessed type _BYTE byte_1409E9E64[48];
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4E0: using guessed type __int128 xmmword_140B7A4E0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C49E10: using guessed type int dword_140C49E10;
// 140C49E20: using guessed type int dword_140C49E20;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

