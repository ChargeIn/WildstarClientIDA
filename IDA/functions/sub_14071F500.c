//----- (000000014071F500) ----------------------------------------------------
__int64 __fastcall sub_14071F500(__m128* a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rdi
	__m128 v4; // xmm7
	__m128 v5; // xmm6
	__m128 v6; // xmm5
	__m128 v7; // xmm0
	__int64 v8; // rcx
	__m128 v9; // xmm11
	__m128 v10; // xmm7
	__m128 v11; // xmm6
	__m128 v12; // xmm5
	int v13; // eax
	__m128 v14; // xmm8
	float v15; // xmm8_4
	__m128 v16; // xmm9
	float v17; // xmm9_4
	__m128 v18; // xmm10
	__m128 v19; // xmm0
	float v20; // xmm10_4
	__m128 v21; // xmm5
	__m128 v22; // xmm1
	float v23; // xmm2_4
	__m128 v24; // xmm1
	float v25; // xmm0_4
	__m128i v26; // xmm1
	__m128 v27; // xmm2
	__m128 v28; // xmm0
	__m128 v29; // xmm11
	__m128 v30; // xmm2
	__m128i v31; // xmm5
	__m128 v32; // xmm4
	__m128 v33; // xmm5
	__m128 v34; // xmm3
	float v35; // xmm1_4
	__m128i v36; // xmm4
	__m128i v37; // xmm2
	__m128 v38; // xmm0
	__m128 v39; // xmm0
	unsigned __int64 v40; // rcx
	__int64 result; // rax
	unsigned __int64 v42; // rcx
	__m128 v43; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v44; // [rsp+48h] [rbp-C0h]
	__m128 v45; // [rsp+58h] [rbp-B0h]
	__m128 v46; // [rsp+68h] [rbp-A0h]
	__m128 v47; // [rsp+78h] [rbp-90h] BYREF
	int v48[8]; // [rsp+88h] [rbp-80h] BYREF
	__int128 v49[4]; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v50; // [rsp+E8h] [rbp-20h]
	__m128 v51; // [rsp+F8h] [rbp-10h] BYREF

	v2 = a1[14].m128_u64[0];
	v48[7] = 0;
	(*(void(__fastcall**)(unsigned __int64, _QWORD, int*))(*(_QWORD*)v2 + 592i64))(v2, 0i64, v48);
	v3 = (*(__int64(__fastcall**)(unsigned __int64, _QWORD, _QWORD))(*(_QWORD*)a1[14].m128_u64[0] + 424i64))(
		a1[14].m128_u64[0],
		(unsigned int)v48[0],
		(unsigned int)v48[1]);
	v4 = a1[40];
	v5 = a1[41];
	v6 = a1[42];
	v7 = a1[43];
	v43 = v4;
	v44 = v5;
	v45 = v6;
	v46 = v7;
	if ((unsigned int)(*(_DWORD*)(v3 + 12) - 2) <= 1)
	{
		v8 = *(_QWORD*)(qword_140C65898 + 29256);
		v47 = _mm_add_ps(v7, (__m128)xmmword_140B7A480);
		if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __int64, _QWORD))(*(_QWORD*)v8 + 440i64))(
			v8,
			&v47,
			&v51,
			2i64,
			0i64))
		{
			v9 = v51;
		}
		else
		{
			v9 = (__m128)xmmword_140C77870;
			v51 = (__m128)xmmword_140C77870;
		}
		v10 = v43;
		v11 = v44;
		v12 = v45;
		v13 = *(_DWORD*)(v3 + 12);
		v14 = _mm_mul_ps(v43, v43);
		v15 = fsqrt(
			(float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]);
		v16 = _mm_mul_ps(v44, v44);
		v17 = fsqrt(
			(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
		v18 = _mm_mul_ps(v45, v45);
		v19 = _mm_shuffle_ps(v18, v18, 85);
		v20 = fsqrt((float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 170).m128_f32[0]);
		if (v13 == 2)
		{
			v21 = (__m128)0x40400000u;
			v22 = _mm_mul_ps(v43, v43);
			v23 = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
			v24 = (__m128)0x40400000u;
			v25 = fsqrt(v23);
			v24.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v23 * (float)(1.0 / v25)) * (float)(1.0 / v25))) * 0.5)
				* (float)(1.0 / v25),
				0.0);
			v26 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v43);
			v43.m128_u64[0] = v26.m128i_i64[0];
			v43.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
			v10 = v43;
			v27 = _mm_mul_ps(v9, v43);
			v28 = _mm_shuffle_ps(v27, v27, 85);
			v28.m128_f32[0] = (float)(v28.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
			v29 = _mm_sub_ps(v9, _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v43));
			v30 = _mm_mul_ps(v29, v29);
			v30.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
				+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
			v28.m128_f32[0] = 1.0 / fsqrt(v30.m128_f32[0]);
			v21.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v30.m128_f32[0] * v28.m128_f32[0]) * v28.m128_f32[0]))
					* 0.5)
				* v28.m128_f32[0],
				0.0);
			v31 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v29);
			v44.m128_u64[0] = v31.m128i_i64[0];
			v44.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
			v11 = v44;
		}
		else
		{
			if (v13 != 3)
			{
			LABEL_10:
				v19.m128_f32[0] = v15;
				v38 = _mm_shuffle_ps(v19, v19, 0);
				v4 = _mm_mul_ps(v10, v38);
				v38.m128_f32[0] = v17;
				v39 = _mm_shuffle_ps(v38, v38, 0);
				v43 = v4;
				v5 = _mm_mul_ps(v11, v39);
				v39.m128_f32[0] = v20;
				v44 = v5;
				v6 = _mm_mul_ps(v12, _mm_shuffle_ps(v39, v39, 0));
				v7 = v46;
				v45 = v6;
				goto LABEL_11;
			}
			v32 = (__m128)0x40400000u;
			v44.m128_u64[0] = v51.m128_u64[0];
			v44.m128_i32[2] = v51.m128_i32[2];
			v11 = v44;
			v33 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v45, v45, 210), _mm_shuffle_ps(v44, v44, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v45, v45, 201), _mm_shuffle_ps(v44, v44, 210)));
			v34 = _mm_mul_ps(v33, v33);
			v34.m128_f32[0] = (float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
				+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
			v35 = 1.0 / fsqrt(v34.m128_f32[0]);
			v32.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v34.m128_f32[0] * v35) * v35)) * 0.5) * v35, 0.0);
			v36 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v33);
			v43.m128_u64[0] = v36.m128i_i64[0];
			v43.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8));
			v10 = v43;
		}
		v19 = _mm_shuffle_ps(v10, v10, 201);
		v37 = (__m128i)_mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 210), v19),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 201), _mm_shuffle_ps(v10, v10, 210)));
		v45.m128_u64[0] = v37.m128i_i64[0];
		v45.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8));
		v12 = v45;
		goto LABEL_10;
	}
LABEL_11:
	v40 = a1[47].m128_u64[0];
	v49[0] = (__int128)v4;
	v49[1] = (__int128)v5;
	v50 = 0i64;
	v49[2] = (__int128)v6;
	v49[3] = (__int128)v7;
	result = (*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v40 + 320i64))(v40, v49);
	v42 = a1[13].m128_u64[0];
	if (v42)
	{
		if (*(_DWORD*)(v42 + 684))
			return (*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v42 + 528) + 88i64))(
				*(_QWORD*)(v42 + 528),
				&v43);
	}
	return result;
}
// 140B7A480: using guessed type __int128 xmmword_140B7A480;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 14071F500: using guessed type __m128 var_150;

