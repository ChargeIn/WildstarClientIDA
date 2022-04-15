#include "../winhttp.h"

//----- (00000001405CDD70) ----------------------------------------------------
void __fastcall sub_1405CDD70(__int64 a1, int* a2)
{
	int v2; // eax
	__m128 v3; // xmm3
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128 v6; // xmm2
	int v7; // xmm0_4
	__m128 v8; // xmm3
	__m128 v9; // xmm3
	int v10; // xmm0_4
	int v11[18]; // [rsp+20h] [rbp-48h] BYREF

	v2 = 5;
	v3 = _mm_unpacklo_ps((__m128)(unsigned int)a2[1], (__m128)(unsigned int)a2[3]);
	v4 = _mm_unpacklo_ps((__m128)(unsigned int)a2[2], (__m128)0i64);
	if (a2[7])
		v2 = 8;
	v11[0] = v2;
	v5 = _mm_unpacklo_ps(v3, v4);
	v11[1] = *a2;
	v6 = _mm_unpacklo_ps((__m128)(unsigned int)a2[5], (__m128)0i64);
	v11[2] = v5.m128_i32[0];
	v7 = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
	v11[4] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
	v8 = (__m128)(unsigned int)a2[4];
	v11[3] = v7;
	v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)(unsigned int)a2[6]), v6);
	v11[5] = v9.m128_i32[0];
	v10 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
	v9.m128_u64[0] = _mm_shuffle_ps(v9, v9, 170).m128_u64[0];
	v11[7] = v9.m128_i32[0];
	v11[6] = v10;
	sub_1405CCF20(a1, (__int64)v11, (_QWORD*)8, *(double*)v9.m128_u64);
}

