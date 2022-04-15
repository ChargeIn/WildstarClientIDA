#include "../winhttp.h"

//----- (0000000140624CC0) ----------------------------------------------------
__int64 __fastcall sub_140624CC0(__int64 a1)
{
	__m128 v1; // xmm4
	__m128 v3; // xmm3
	__m128 v4; // xmm3
	__m128 v5; // xmm14
	__m128 v6; // xmm1
	int v7; // xmm12_4
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	float v10; // xmm0_4
	__m128i v11; // xmm1
	unsigned int v12; // xmm1_4
	__m128i v13; // xmm13
	__m128 v14; // xmm3
	__m128 v15; // xmm4
	__m128i v16; // xmm2
	__m128 v17; // xmm5
	float v18; // xmm9_4
	__m128 v19; // xmm8
	float v20; // xmm11_4
	__m128 v21; // xmm2
	float v22; // xmm3_4
	float v23; // xmm0_4
	__m128 v24; // xmm8
	float v25; // xmm5_4
	float v26; // xmm7_4
	float v27; // xmm3_4
	float v28; // xmm4_4
	float v29; // xmm6_4
	__m128i v30; // xmm2
	__m128 v31; // xmm3
	__m128 v32; // xmm1
	float v33; // xmm0_4
	__m128i v34; // xmm14
	__m128i v35; // xmm2
	unsigned int v36; // xmm0_4
	unsigned int v37; // xmm1_4
	__int64 v38; // rcx
	float v39; // xmm6_4
	__m128 v40; // xmm4
	__m128 v41; // xmm1
	__m128 v42; // xmm5
	float v43; // xmm5_4
	__m128 v44; // xmm3
	__m128 v45; // xmm1
	__m128 v46; // xmm1
	float v47; // xmm1_4
	float v48; // xmm2_4
	__int64 v49; // rcx
	__int64 result; // rax
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64 v54; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v55; // [rsp+30h] [rbp-D8h]
	float v56; // [rsp+38h] [rbp-D0h]
	__int64 v57; // [rsp+3Ch] [rbp-CCh]
	__m128 v58; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v59; // [rsp+58h] [rbp-B0h]
	__m128 v60; // [rsp+68h] [rbp-A0h]
	__int128 v61; // [rsp+78h] [rbp-90h]
	__int64 v62; // [rsp+88h] [rbp-80h]
	__m128 v63; // [rsp+98h] [rbp-70h] BYREF
	__m128 v64; // [rsp+A8h] [rbp-60h]
	__m128 v65; // [rsp+B8h] [rbp-50h]
	__int128 v66; // [rsp+C8h] [rbp-40h]
	__m128 v67; // [rsp+E8h] [rbp-20h] BYREF
	int v68; // [rsp+F8h] [rbp-10h]
	__int64 v69; // [rsp+128h] [rbp+20h]

	v1 = *(__m128*)(a1 + 352);
	v3 = *(__m128*)(a1 + 464);
	v64 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v4 = _mm_sub_ps(v3, v1);
	v63 = *(__m128*)ymmword_140C78390.m256_f32;
	v66 = xmmword_140C783C0;
	v65 = (__m128)xmmword_140C783B0;
	v5 = (__m128)0x40400000u;
	v6 = _mm_mul_ps(v4, v4);
	if ((float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]) + _mm_shuffle_ps(v6, v6, 170).m128_f32[0]) <= *(float*)&dword_140C4A8A8)
		v4 = _mm_sub_ps(*(__m128*)(a1 + 336), v1);
	v7 = 1065353216;
	v8 = _mm_mul_ps(v4, v4);
	v8.m128_f32[0] = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
		+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	v9 = (__m128)0x40400000u;
	v10 = 1.0 / fsqrt(v8.m128_f32[0]);
	v9.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v8.m128_f32[0] * v10) * v10)) * 0.5) * v10, 0.0);
	v11 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v4);
	v65.m128_u64[0] = v11.m128i_i64[0];
	v65.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
	if (*(float*)v11.m128i_i32 == 0.0 && v65.m128_f32[2] == 0.0)
	{
		if (v65.m128_f32[1] <= 0.0)
		{
			v13 = (__m128i)_mm_sub_ps((__m128)0i64, *(__m128*)(a1 + 576));
			v64.m128_u64[0] = v13.m128i_i64[0];
			v64.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
		}
		else
		{
			v12 = *(_DWORD*)(a1 + 580);
			v64.m128_i32[0] = *(_DWORD*)(a1 + 576);
			*(unsigned __int64*)((char*)v64.m128_u64 + 4) = __PAIR64__(*(_DWORD*)(a1 + 584), v12);
		}
		v14 = v64;
		v15 = v65;
		v16 = (__m128i)_mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v64, v64, 210), _mm_shuffle_ps(v65, v65, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v64, v64, 201), _mm_shuffle_ps(v65, v65, 210)));
		v63.m128_u64[0] = v16.m128i_i64[0];
		v63.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
		v17 = v63;
	}
	else
	{
		v68 = *(_DWORD*)(a1 + 916);
		v18 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v68));
		v19 = (__m128)0x40400000u;
		v58.m128_i32[3] = 0;
		v20 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v68));
		v21 = _mm_mul_ps(v65, v65);
		v22 = (float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
			+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
		v23 = fsqrt(v22);
		v19.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v22 * (float)(1.0 / v23)) * (float)(1.0 / v23))) * 0.5)
			* (float)(1.0 / v23),
			0.0);
		v24 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v65);
		v25 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
		v26 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
		v58.m128_f32[0] = (float)((float)(v24.m128_f32[0] * v24.m128_f32[0]) * (float)(1.0 - v20)) + v20;
		v27 = (float)(v25 * v24.m128_f32[0]) * (float)(1.0 - v20);
		v28 = (float)(v26 * v24.m128_f32[0]) * (float)(1.0 - v20);
		v24.m128_f32[0] = v24.m128_f32[0] * v18;
		v58.m128_f32[1] = (float)(v26 * v18) + v27;
		v59.m128_f32[0] = v27 - (float)(v26 * v18);
		v29 = (float)(v26 * v25) * (float)(1.0 - v20);
		v58.m128_f32[2] = v28 - (float)(v25 * v18);
		v60.m128_f32[0] = (float)(v25 * v18) + v28;
		v60.m128_f32[1] = v29 - v24.m128_f32[0];
		v59.m128_f32[1] = (float)((float)(v25 * v25) * (float)(1.0 - v20)) + v20;
		v59.m128_u64[1] = COERCE_UNSIGNED_INT(v24.m128_f32[0] + v29);
		v15 = v65;
		v60.m128_f32[2] = (float)((float)(v26 * v26) * (float)(1.0 - v20)) + v20;
		v60.m128_i32[3] = 0;
		v61 = xmmword_140B7AD00;
		v30 = (__m128i)_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 85), v59),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 0), v58)),
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 170), v60));
		v64.m128_u64[0] = v30.m128i_i64[0];
		v64.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
		v31 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v65, v65, 210), _mm_shuffle_ps(v64, v64, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v65, v65, 201), _mm_shuffle_ps(v64, v64, 210)));
		v32 = _mm_mul_ps(v31, v31);
		*(float*)v30.m128i_i32 = (float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
			+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
		v33 = fsqrt(*(float*)v30.m128i_i32);
		v5.m128_f32[0] = fmaxf(
			(float)((float)(3.0
				- (float)((float)(*(float*)v30.m128i_i32 * (float)(1.0 / v33)) * (float)(1.0 / v33)))
				* 0.5)
			* (float)(1.0 / v33),
			0.0);
		v34 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v31);
		v63.m128_u64[0] = v34.m128i_i64[0];
		v63.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
		v17 = v63;
		v35 = (__m128i)_mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v63, v63, 210), _mm_shuffle_ps(v65, v65, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v63, v63, 201), _mm_shuffle_ps(v65, v65, 210)));
		v64.m128_u64[0] = v35.m128i_i64[0];
		v64.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v35, 8));
		v14 = v64;
	}
	v36 = *(_DWORD*)(a1 + 432);
	v37 = *(_DWORD*)(a1 + 436);
	v38 = *(_QWORD*)(a1 + 128);
	v58 = v17;
	v59 = v14;
	v60 = v15;
	v62 = 0i64;
	*(_QWORD*)&v66 = __PAIR64__(v37, v36);
	DWORD2(v66) = *(_DWORD*)(a1 + 440);
	v61 = v66;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v38 + 320i64))(v38, &v58);
	v39 = *(float*)(a1 + 1012);
	v40 = _mm_sub_ps(*(__m128*)(a1 + 432), *(__m128*)(a1 + 336));
	v41 = _mm_mul_ps(v40, v40);
	if ((float)((float)((float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
		+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0])
		* v39) >= 1.0)
	{
		v43 = 1.0;
	}
	else
	{
		v42 = _mm_mul_ps(v40, v40);
		v43 = (float)((float)(v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0])
			+ _mm_shuffle_ps(v42, v42, 170).m128_f32[0])
			* v39;
	}
	v44 = _mm_sub_ps(*(__m128*)(a1 + 432), *(__m128*)(a1 + 352));
	v45 = _mm_mul_ps(v44, v44);
	if ((float)((float)((float)(v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0])
		+ _mm_shuffle_ps(v45, v45, 170).m128_f32[0])
		* v39) >= 1.0)
	{
		v47 = 1.0;
	}
	else
	{
		v46 = _mm_mul_ps(v44, v44);
		v47 = (float)((float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0])
			+ _mm_shuffle_ps(v46, v46, 170).m128_f32[0])
			* v39;
	}
	if (v43 > v47)
	{
		if (v47 < 1.0)
		{
			*(_DWORD*)(a1 + 692) = 1;
			v7 = LODWORD(v47);
		}
	}
	else if (v43 < 1.0)
	{
		v7 = LODWORD(v43);
	}
	v48 = fsqrt(*(float*)&v7);
	if ((*(_BYTE*)(a1 + 896) & 4) != 0)
		v48 = fsqrt(v48);
	v49 = *(_QWORD*)(a1 + 88);
	v56 = v48;
	v54 = 154i64;
	v55 = 1065353216i64;
	v57 = 1i64;
	result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v49 + 600i64))(v49, 0i64, &v54);
	if (!*(_DWORD*)(a1 + 692) || (*(_BYTE*)(a1 + 896) & 1) != 0)
	{
		v53 = *(_QWORD*)(a1 + 48);
		if (v53)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v53 + 72i64))(v53, a1 + 208);
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 88) + 888i64))(
			*(_QWORD*)(a1 + 88),
			67i64,
			&v58);
		*(_OWORD*)(a1 + 432) = v61;
		v51 = *(_QWORD*)(a1 + 48);
		if (v51)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v51 + 936i64))(v51);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 112) + 336i64))(
				*(_QWORD*)(a1 + 112),
				*(_QWORD*)(a1 + 48));
			v54 = a1 + 208;
			v63.m128_u64[0] = a1 + 208;
			v55 = (__int64)&v58;
			v63.m128_u64[1] = (unsigned __int64)&v58;
			sub_1401AFB10((__m128**) & v63, &v67);
			v52 = *(_QWORD*)(a1 + 112);
			v69 = 0i64;
			return (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v52 + 320i64))(v52, &v67);
		}
	}
	return result;
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C4A8A8: using guessed type int dword_140C4A8A8;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

