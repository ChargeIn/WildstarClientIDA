#include "../winhttp.h"

//----- (0000000140268060) ----------------------------------------------------
__int64 __fastcall sub_140268060(__m128* a1, unsigned int* a2)
{
	unsigned int v4; // r10d
	__int64 v5; // r9
	__m128* v6; // r8
	__int64 v7; // r11
	__m128 v8; // xmm2
	int v9; // eax
	__m128 v10; // xmm2
	unsigned int v11; // edx
	__m128* v12; // rcx
	__m128 v13; // xmm2
	__int64 result; // rax
	__m128 v15; // xmm2

	sub_1402672A0(a1, a2 + 2, 0);
	v4 = *a2;
	v5 = 8i64;
	v6 = a1;
	v7 = 8i64;
	do
	{
		v8 = *v6;
		v9 = v4 & 0xF;
		v4 >>= 4;
		++v6;
		v10 = _mm_shuffle_ps(v8, v8, 39);
		v10.m128_f32[0] = (float)v9 * 0.06666667;
		v6[-1] = _mm_shuffle_ps(v10, v10, 39);
		--v7;
	} while (v7);
	v11 = a2[1];
	v12 = a1 + 8;
	do
	{
		v13 = *v12;
		result = v11 & 0xF;
		v11 >>= 4;
		++v12;
		v15 = _mm_shuffle_ps(v13, v13, 39);
		v15.m128_f32[0] = (float)(int)result * 0.06666667;
		v12[-1] = _mm_shuffle_ps(v15, v15, 39);
		--v5;
	} while (v5);
	return result;
}

