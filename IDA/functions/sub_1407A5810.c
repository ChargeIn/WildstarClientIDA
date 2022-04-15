#include "../winhttp.h"

//----- (00000001407A5810) ----------------------------------------------------
__m128 __fastcall sub_1407A5810(
	__m128* a1,
	__m128* a2,
	__m128* a3,
	__m128* a4,
	float a5,
	__m128* a6,
	float a7,
	__m128* a8,
	float a9)
{
	__m128* v9; // rbx
	__m128 v10; // xmm7
	int v11; // ebp
	int v12; // edi
	int v13; // esi
	__m128* v14; // rax
	__m128 v15; // xmm1
	__m128 v16; // xmm8
	__m128 v17; // xmm3
	__m128 v18; // xmm4
	__m128 v19; // xmm6
	__m128 v20; // xmm5
	__m128 v21; // xmm1
	__m128 v22; // xmm9
	__m128 v23; // xmm1
	float v24; // xmm9_4
	__m128 v25; // xmm2
	__m128 v26; // xmm0
	float v27; // xmm2_4
	__m128 v28; // xmm6
	double v29; // xmm0_8
	__m128 v31[7]; // [rsp+50h] [rbp-78h] BYREF
	int v32; // [rsp+D8h] [rbp+10h]

	v32 = (int)a2;
	v9 = a6;
	v10 = (__m128)LODWORD(a9);
	if (!a6)
		v9 = a1;
	v11 = (int)a4;
	v12 = (int)a3;
	v13 = (int)a1;
	v14 = a8;
	if (!a8)
		v14 = a3;
	if (a9 == 0.0)
	{
		v15 = _mm_sub_ps(*v14, *v9);
		v10 = _mm_mul_ps(v15, v15);
		v10.m128_f32[0] = fsqrt(
			(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
	}
	v16 = (__m128)LODWORD(a5);
	v16.m128_f32[0] = (float)(a5 + a7) * 0.5;
	v17 = v16;
	v17.m128_f32[0] = v16.m128_f32[0] * v16.m128_f32[0];
	v18 = v17;
	v18.m128_f32[0] = (float)(v16.m128_f32[0] * v16.m128_f32[0]) * v16.m128_f32[0];
	v19 = v18;
	v20 = v18;
	v18.m128_f32[0] = v18.m128_f32[0] * 2.0;
	v19.m128_f32[0] = v19.m128_f32[0] - (float)(v16.m128_f32[0] * v16.m128_f32[0]);
	v20.m128_f32[0] = (float)(v20.m128_f32[0] - (float)((float)(v16.m128_f32[0] * v16.m128_f32[0]) * 2.0))
		+ v16.m128_f32[0];
	v17.m128_f32[0] = (float)(v16.m128_f32[0] * v16.m128_f32[0]) * 3.0;
	v26 = v17;
	v26.m128_f32[0] = v17.m128_f32[0] - v18.m128_f32[0];
	v18.m128_f32[0] = (float)(v18.m128_f32[0] - v17.m128_f32[0]) + 1.0;
	v31[0] = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), *a4),
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *a2),
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), *a3), _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), *a1))));
	v21 = _mm_sub_ps(v31[0], *v9);
	v22 = _mm_mul_ps(v21, v21);
	v23 = _mm_sub_ps(*v14, v31[0]);
	v24 = fsqrt(
		(float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
		+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]);
	v25 = _mm_mul_ps(v23, v23);
	v26.m128_u64[1] = v10.m128_u64[1];
	v27 = fsqrt(
		(float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
		+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0]);
	if ((float)(v27 + v24) <= (float)(v10.m128_f32[0] + 0.1))
	{
		return v10;
	}
	else
	{
		*(double*)v26.m128_u64 = sub_1407A5810(
			(_DWORD)a1,
			(_DWORD)a2,
			(_DWORD)a3,
			(_DWORD)a4,
			(float)(a5 + a7) * 0.5,
			(__int64)v31,
			LODWORD(a7),
			(__int64)v14,
			LODWORD(v27));
		v28 = v26;
		v29 = sub_1407A5810(v13, v32, v12, v11, LODWORD(a5), (__int64)v9, v16.m128_i32[0], (__int64)v31, LODWORD(v24));
		v28.m128_f32[0] = v28.m128_f32[0] + *(float*)&v29;
		return v28;
	}
}

