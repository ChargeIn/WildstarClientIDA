#include "../winhttp.h"

//----- (0000000140387000) ----------------------------------------------------
__int64 __fastcall sub_140387000(__int64 a1, __m128* a2, __m128* a3, char a4)
{
	__m128 v6; // xmm4
	unsigned int v7; // edx
	__m128 v8; // xmm3
	__int64 result; // rax
	__m128i v10; // xmm0
	unsigned int v11; // r8d
	unsigned int v12; // r10d
	unsigned int v13; // ebx
	unsigned int v14; // edi
	unsigned int v15; // ebp
	__m128 v16; // xmm4
	__m128 v17; // xmm3
	__m128 v18; // xmm2
	__int64 v19; // rcx
	float v20; // xmm7_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm0_4
	float v24; // xmm0_4
	float v25; // xmm0_4
	__m128 v26; // xmm0
	__m128 v27; // xmm2
	__m128 v28; // xmm3
	__m128 v29; // xmm0
	__m128 v30; // xmm1
	__m128 v31; // xmm3
	__m128 v32; // xmm2
	unsigned __int64 v33; // [rsp+0h] [rbp-38h]

	v6 = _mm_mul_ps(*a2, (__m128)xmmword_140B7B3F0);
	v7 = (int)v6.m128_f32[0];
	v8 = _mm_shuffle_ps(v6, v6, 85);
	result = (unsigned int)(int)v8.m128_f32[0];
	if ((int)v6.m128_f32[0] > 15)
		v7 = 15;
	v10 = _mm_cvtsi32_si128(v7);
	if ((int)result > 15)
		result = 15i64;
	v6.m128_f32[0] = v6.m128_f32[0] - _mm_cvtepi32_ps(v10).m128_f32[0];
	v11 = v7 + 33 * result;
	v12 = v11 + 1;
	v8.m128_f32[0] = v8.m128_f32[0] - (float)(int)result;
	v13 = v11 + 17;
	v14 = v11 + 33;
	v15 = v11 + 34;
	v16 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0i64), _mm_unpacklo_ps(v8, (__m128)0i64));
	v17 = v16;
	v18 = _mm_shuffle_ps(v16, v16, 85);
	v17.m128_f32[0] = v16.m128_f32[0] + v18.m128_f32[0];
	v18.m128_f32[0] = v18.m128_f32[0] - v16.m128_f32[0];
	v17.m128_f32[0] = v17.m128_f32[0] - 1.0;
	v33 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v18, (__m128)0i64)).m128_u64[0];
	if ((a4 & 1) != 0)
	{
		v19 = *(_QWORD*)(a1 + 152);
		v20 = *(float*)(v19 + 16i64 * v11 + 12);
		v21 = *(float*)(v19 + 16i64 * v13 + 12);
		result = 2i64 * v15;
		v22 = *(float*)(v19 + 16i64 * v15 + 12);
		if (*((float*)&v33 + 1) >= 0.0)
		{
			if (*(float*)&v33 >= 0.0)
				v25 = v22 - v21;
			else
				v25 = v21 - v20;
			v24 = (float)((float)(v25 * *(float*)&v33) + v21)
				+ (float)((float)(*(float*)(v19 + 16i64 * v14 + 12) - v21) * *((float*)&v33 + 1));
		}
		else
		{
			if (*(float*)&v33 >= 0.0)
				v23 = (float)((float)(v22 - v21) * *(float*)&v33) + v21;
			else
				v23 = (float)((float)(v21 - v20) * *(float*)&v33) + v21;
			v24 = v23 + (float)((float)(v21 - *(float*)(v19 + 16i64 * v12 + 12)) * *((float*)&v33 + 1));
		}
		a3[2].m128_f32[0] = v24;
	}
	if ((a4 & 2) != 0)
	{
		result = *(_QWORD*)(a1 + 152);
		v26 = _mm_shuffle_ps((__m128)HIDWORD(v33), (__m128)HIDWORD(v33), 0);
		v27 = *(__m128*)(result + 16i64 * v13);
		if (*((float*)&v33 + 1) >= 0.0)
		{
			v28 = _mm_mul_ps(_mm_sub_ps(*(__m128*)(result + 16i64 * v14), v27), v26);
			v26.m128_f32[0] = *(float*)&v33;
			v29 = _mm_shuffle_ps(v26, v26, 0);
			if (*(float*)&v33 < 0.0)
				goto LABEL_19;
		}
		else
		{
			v28 = _mm_mul_ps(_mm_sub_ps(v27, *(__m128*)(result + 16i64 * v12)), v26);
			v26.m128_f32[0] = *(float*)&v33;
			v29 = _mm_shuffle_ps(v26, v26, 0);
			if (*(float*)&v33 < 0.0)
			{
			LABEL_19:
				v30 = _mm_sub_ps(v27, *(__m128*)(result + 16i64 * v11));
			LABEL_22:
				v31 = _mm_add_ps(v28, _mm_add_ps(_mm_mul_ps(v30, v29), v27));
				v32 = _mm_mul_ps(v31, v31);
				v32.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
						+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
				*a3 = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31);
				return result;
			}
		}
		v30 = _mm_sub_ps(*(__m128*)(result + 16i64 * v15), v27);
		goto LABEL_22;
	}
	return result;
}
// 140B7B3F0: using guessed type __int128 xmmword_140B7B3F0;

