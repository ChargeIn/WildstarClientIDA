#include "../winhttp.h"

//----- (00000001405EEF90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1405EEF90(float* a1, float* a2, float* a3, _QWORD* a4)
{
	unsigned __int64 v4; // rbx
	unsigned int v5; // r11d
	float v6; // xmm3_4
	unsigned int v9; // r10d
	float v10; // xmm1_4
	__m128 v11; // xmm2
	__int64 v12; // rax
	__m128i v13; // xmm0
	__m128 v14; // xmm1
	__int64 i; // rax
	__m128i v16; // xmm0
	float v17; // xmm2_4
	float v18; // xmm5_4
	float v19; // xmm7_4
	unsigned int v20; // ecx
	float v21; // xmm4_4
	float v22; // xmm5_4
	float v23; // xmm6_4
	float v24; // xmm4_4
	__int64 v25; // rdx
	__m128i v26; // xmm1
	int v27; // eax
	float v28; // xmm2_4
	float v29; // xmm5_4
	float v30; // xmm4_4
	unsigned __int64 v31; // rcx
	__int64 v32; // rax
	__m128i v33; // xmm1
	int v34; // eax
	float v35; // xmm0_4
	unsigned __int64 result; // rax
	float v37; // xmm0_4

	v4 = a4[1];
	v5 = 0;
	v6 = 0.0;
	v9 = 0;
	v10 = 0.0;
	if (v4 >= 4)
	{
		v11 = 0i64;
		v12 = 0i64;
		do
		{
			v13 = _mm_loadu_si128((const __m128i*)(*a4 + 4 * v12));
			v9 += 4;
			v12 = v9;
			v11 = _mm_add_ps(v11, _mm_cvtepi32_ps(v13));
		} while (v9 < v4 - (a4[1] & 3i64));
		v14 = _mm_add_ps(_mm_movehl_ps(v11, v11), v11);
		v10 = v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 245).m128_f32[0];
	}
	for (i = v9; v9 < v4; v10 = v10 + _mm_cvtepi32_ps(v16).m128_f32[0])
	{
		v16 = _mm_cvtsi32_si128(*(_DWORD*)(*a4 + 4 * i));
		i = ++v9;
	}
	v17 = (float)((int)v4 - 1);
	if ((__int64)(v4 - 1) < 0)
		v17 = v17 + 1.8446744e19;
	v18 = (float)(int)v4;
	if ((v4 & 0x8000000000000000ui64) != 0i64)
		v18 = v18 + 1.8446744e19;
	v19 = 0.0;
	v20 = 0;
	v21 = 1.0 / v18;
	v22 = 0.0;
	v23 = (float)((float)((float)(v17 + 1.0) * v17) * 0.5) * v21;
	v24 = v21 * v10;
	if (v4)
	{
		v25 = 0i64;
		do
		{
			v26 = _mm_cvtsi32_si128(*(_DWORD*)(*a4 + 4 * v25));
			v27 = v20++;
			v25 = v20;
			v28 = (float)v27 - v23;
			v19 = v19 + (float)(v28 * v28);
			v22 = v22 + (float)((float)(_mm_cvtepi32_ps(v26).m128_f32[0] - v24) * v28);
		} while (v20 < v4);
	}
	v29 = v22 / v19;
	*a2 = v29;
	v30 = v24 - (float)(v29 * v23);
	*a1 = v30;
	v31 = a4[1];
	if (v31)
	{
		v32 = 0i64;
		do
		{
			v33 = _mm_cvtsi32_si128(*(_DWORD*)(*a4 + 4 * v32));
			v34 = v5++;
			v35 = (float)v34;
			v32 = v5;
			*(float*)v33.m128i_i32 = _mm_cvtepi32_ps(v33).m128_f32[0];
			v6 = v6
				+ (float)((float)(*(float*)v33.m128i_i32 - (float)((float)(v35 * *a2) + v30))
					* (float)(*(float*)v33.m128i_i32 - (float)((float)(v35 * *a2) + v30)));
		} while (v5 < v31);
	}
	result = v31 - 2;
	v37 = (float)((int)v31 - 2);
	if ((__int64)(v31 - 2) < 0)
		v37 = v37 + 1.8446744e19;
	*a3 = fsqrt(v6 / v37);
	return result;
}

