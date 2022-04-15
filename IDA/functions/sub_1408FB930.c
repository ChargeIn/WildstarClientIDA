//----- (00000001408FB930) ----------------------------------------------------
__int64 __fastcall sub_1408FB930(unsigned int* a1, __int64* a2, unsigned int a3, unsigned int a4)
{
	__int64 result; // rax
	unsigned int v5; // r8d
	__int64 v6; // rdx
	__m128 v7; // xmm3
	__m128 v8; // xmm4
	__m128 v9; // xmm5
	__m128 v10; // xmm6
	__m128 v11; // xmm7
	__m128 v12; // xmm10
	__m128 v13; // xmm8
	__m128 i; // xmm9
	__m128 v15; // xmm2
	__m128 v16; // xmm1

	result = *a2;
	v5 = a3 >> 2;
	v6 = *a2 + 4i64 * a4;
	v7 = _mm_shuffle_ps((__m128)a1[25], (__m128)a1[25], 0);
	v8 = _mm_shuffle_ps((__m128)a1[26], (__m128)a1[26], 0);
	v9 = _mm_shuffle_ps((__m128)a1[27], (__m128)a1[27], 0);
	v10 = _mm_shuffle_ps((__m128)a1[28], (__m128)a1[28], 0);
	v11 = _mm_shuffle_ps((__m128)a1[29], (__m128)a1[29], 0);
	v12 = _mm_shuffle_ps((__m128)a1[32], (__m128)a1[32], 0);
	v13 = _mm_shuffle_ps((__m128)a1[30], (__m128)a1[30], 0);
	for (i = _mm_shuffle_ps((__m128)a1[31], (__m128)a1[31], 0); v5; --v5)
	{
		v15 = *(__m128*)v6;
		v7 = _mm_add_ps(v7, v11);
		v8 = _mm_add_ps(v8, v13);
		v16 = *(__m128*)v6;
		v6 += 16i64;
		v9 = _mm_add_ps(v9, i);
		v10 = _mm_add_ps(v10, v12);
		*(__m128*)(v6 - 16) = _mm_mul_ps(v15, v7);
		*(__m128*)(v6 + 4080) = _mm_mul_ps(v15, v8);
		*(__m128*)(v6 + 8176) = _mm_mul_ps(v16, v9);
		*(__m128*)(v6 + 12272) = _mm_mul_ps(v15, v10);
	}
	return result;
}

