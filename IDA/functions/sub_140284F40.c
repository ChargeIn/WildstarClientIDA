#include "../winhttp.h"

//----- (0000000140284F40) ----------------------------------------------------
__int64 __fastcall sub_140284F40(__int64 a1, __int64 a2, __int64 a3, __m128* a4, __int64 a5, unsigned __int64* a6)
{
	_QWORD* v7; // r15
	__int64 v10; // rbp
	__int64 v11; // rdi
	__int64 i; // rsi
	__int64 v13; // r8
	unsigned __int64 v14; // r9
	__m128 v15; // xmm4
	__m128 v16; // xmm1
	__m128 v17; // xmm7
	__m128 v18; // xmm4
	float v19; // xmm4_4
	__m128* v20; // r8
	__m128* v21; // r10
	__int64 result; // rax
	__m128* v23; // r11
	__m128 v24; // xmm3
	__int64 v25; // rcx
	__m128 v26; // xmm2
	__m128* v27; // rcx
	__int64 v28; // rdx
	__m128 v29; // xmm1
	__m128 v30; // xmm2

	v7 = (_QWORD*)(a1 + 312);
	sub_1402877C0((__int64*)(a1 + 312), 2 * *a6);
	v10 = a5;
	v11 = 0i64;
	for (i = 4i64; ; i = v14)
	{
		v13 = v11++;
		if (v11 == a3)
			v11 = 0i64;
		v14 = 0i64;
		v15 = (__m128) * (unsigned int*)(a2 + 16 * v13 + 4);
		v15.m128_f32[0] = v15.m128_f32[0] - *(float*)(a2 + 16 * v11 + 4);
		v16 = (__m128) * (unsigned int*)(a2 + 16 * v11);
		v16.m128_f32[0] = v16.m128_f32[0] - *(float*)(a2 + 16 * v13);
		v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, (__m128)0i64), _mm_unpacklo_ps(v16, (__m128)0i64));
		v18 = _mm_mul_ps(*(__m128*)(a2 + 16 * v13), v17);
		v19 = v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
		if (v11 || !v10)
			v20 = (__m128*)(*v7 + 32 * *a6 * (v13 & 1));
		else
			v20 = (__m128*)v10;
		v21 = v20;
		result = 0i64;
		v23 = v20 + 1;
		v24 = _mm_mul_ps(*a4, v17);
		v24.m128_f32[0] = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]) - v19;
		do
		{
			v25 = result++;
			v26 = v24;
			if (result == i)
				result = 0i64;
			v27 = &a4[2 * v25];
			v28 = 2 * result;
			v29 = _mm_mul_ps(a4[2 * result], v17);
			v29.m128_f32[0] = (float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0]) - v19;
			v24 = v29;
			if (v26.m128_f32[0] <= 0.0000099999997)
			{
				++v14;
				v21 += 2;
				v21[-2] = *v27;
				v23 += 2;
				v23[-2] = v27[1];
			}
			if (v26.m128_f32[0] <= 0.0 && v29.m128_f32[0] > 0.0000099999997
				|| v29.m128_f32[0] <= 0.0 && v26.m128_f32[0] > 0.0000099999997)
			{
				++v14;
				v21 += 2;
				v23 += 2;
				v26.m128_f32[0] = v26.m128_f32[0] / (float)(v26.m128_f32[0] - v29.m128_f32[0]);
				v30 = _mm_shuffle_ps(v26, v26, 0);
				v21[-2] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[v28], *v27), v30), *v27);
				v23[-2] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[v28 + 1], v27[1]), v30), v27[1]);
			}
		} while (result);
		v10 = a5;
		if (v14 < 3)
			break;
		if (!v11)
		{
			*a6 = v14;
			return result;
		}
		a4 = v20;
	}
	*a6 = 0i64;
	return result;
}
// 140285117: conditional instruction was optimized away because r9.8>=3u

