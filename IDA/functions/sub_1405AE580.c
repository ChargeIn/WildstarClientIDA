#include "../winhttp.h"

//----- (00000001405AE580) ----------------------------------------------------
void __fastcall sub_1405AE580(__int64 a1, unsigned __int64 a2, unsigned int a3, __m128* a4, int a5)
{
	__m128 v5; // xmm3
	__m128 v10; // xmm8
	__m128 v11; // xmm1
	__m128 v12; // xmm9
	__m128 v13; // xmm7
	__m128 v14; // xmm4
	float v15; // xmm2_4
	float v16; // xmm0_4
	__m128 v17; // xmm9
	__m128 v18; // xmm3
	__m128 v19; // xmm1
	float v20; // xmm2_4
	float v21; // xmm0_4
	__m128 v22; // xmm7
	__m128 v23; // xmm3
	__m128 v24; // xmm1
	float v25; // xmm2_4
	float v26; // xmm0_4
	__m128 v27; // xmm4
	__m128 v28; // xmm1
	float v29; // xmm2_4
	float v30; // xmm0_4
	__m128 v31; // xmm8
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rbx
	_DWORD* v36; // rdi
	__m128 v37; // xmm1
	__int128 v38; // xmm0
	__int128 v39; // [rsp+28h] [rbp-91h] BYREF
	unsigned __int64 v40; // [rsp+38h] [rbp-81h]
	__int64 v41; // [rsp+40h] [rbp-79h]
	unsigned __int64 v42; // [rsp+48h] [rbp-71h]
	unsigned __int64 v43; // [rsp+50h] [rbp-69h]
	__int64 v44; // [rsp+58h] [rbp-61h]
	__int64 v45; // [rsp+60h] [rbp-59h]
	unsigned int v46; // [rsp+68h] [rbp-51h] BYREF
	__int64 v47; // [rsp+6Ch] [rbp-4Dh]
	int v48; // [rsp+74h] [rbp-45h]
	__m128 v49; // [rsp+78h] [rbp-41h]
	__m128 v50[8]; // [rsp+88h] [rbp-31h] BYREF

	v5 = a4[3];
	v10 = (__m128)0x40400000u;
	v11 = _mm_mul_ps(v5, v5);
	v39 = 0ui64;
	v41 = 0i64;
	v42 = 0i64;
	v43 = 0i64;
	v12 = (__m128)0x40400000u;
	v13 = (__m128)0x40400000u;
	v14 = (__m128)0x40400000u;
	v15 = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
	v44 = 0i64;
	v45 = 0i64;
	v40 = a2;
	v16 = fsqrt(v15);
	v12.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16))) * 0.5)
		* (float)(1.0 / v16),
		0.0);
	v17 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v5);
	v18 = a4[2];
	v19 = _mm_mul_ps(v18, v18);
	v20 = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]) + _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
	v21 = fsqrt(v20);
	v13.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v20 * (float)(1.0 / v21)) * (float)(1.0 / v21))) * 0.5)
		* (float)(1.0 / v21),
		0.0);
	v22 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v18);
	v23 = a4[1];
	v24 = _mm_mul_ps(v23, v23);
	v25 = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]) + _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
	v26 = fsqrt(v25);
	v14.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v25 * (float)(1.0 / v26)) * (float)(1.0 / v26))) * 0.5)
		* (float)(1.0 / v26),
		0.0);
	v27 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v23);
	v28 = _mm_mul_ps(*a4, *a4);
	v29 = (float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0]) + _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
	v30 = fsqrt(v29);
	v10.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v29 * (float)(1.0 / v30)) * (float)(1.0 / v30))) * 0.5)
		* (float)(1.0 / v30),
		0.0);
	v31 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *a4);
	v50[0] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v31, _mm_shuffle_ps(v31, v31, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v31, v31, 85), (__m128)0i64));
	v50[1] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v27, _mm_shuffle_ps(v27, v27, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v27, v27, 85), (__m128)0i64));
	v50[2] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v22, _mm_shuffle_ps(v22, v22, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v22, v22, 85), (__m128)0i64));
	v50[3] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)0x3F800000u));
	sub_1401B1D60((float*)&v46, v50[0].m128_f32);
	v49 = a4[3];
	v32 = sub_140203DA0(a3);
	if (v32)
	{
		LODWORD(v41) = a3;
		if ((*(_BYTE*)(v32 + 16) & 4) != 0)
		{
			v34 = sub_1404C9E20(v33, *(_DWORD*)(a1 + 188), a2);
			v35 = v34;
			if (v34)
			{
				v36 = (_DWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v34 + 104));
				if (v36)
				{
					(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)v35 + 144i64))(v35, v50, 0i64);
					v36[936] = 0;
					v37 = _mm_mul_ps(v50[0], v50[0]);
					v37.m128_f32[0] = fsqrt(
						(float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
						+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0]);
					v36[933] = v37.m128_i32[0];
					v36[931] = v37.m128_i32[0];
				}
			}
		}
		v38 = *(_OWORD*)(a1 + 8);
		HIDWORD(v41) = a5;
		v39 = v38;
		v42 = v49.m128_u64[0];
		v43 = __PAIR64__(v46, v49.m128_u32[2]);
		v44 = v47;
		LODWORD(v45) = v48;
		sub_1403F4900(qword_140C65898, 0x4E6u, (__int64)&v39);
	}
}
// 1405AE7E6: variable 'v33' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

