#include "../winhttp.h"

//----- (00000001408A8970) ----------------------------------------------------
void** __fastcall sub_1408A8970(__m128* a1, float* a2, unsigned int a3)
{
	void** result; // rax
	unsigned int v5; // ebp
	float* v6; // rsi
	__int64 v7; // rbx
	unsigned int v8; // eax
	int v9; // r8d
	__m128 v10; // xmm7
	__m128 v11; // xmm6
	__m128 v12; // xmm8
	float* v13; // rcx
	__m128 v14; // xmm5
	__m128 v15; // xmm9
	__m128 v16; // xmm10
	__m128 v17; // xmm11
	__m128 v18; // xmm12
	__m128 v19; // xmm13
	__m128 v20; // xmm14
	__m128 v21; // xmm15
	__m128 v22; // xmm4
	__m128 v23; // xmm2
	__m128 v24; // xmm2
	__m128 v25; // xmm5
	__int32 v26; // [rsp+20h] [rbp-E8h]
	__int32 v27; // [rsp+30h] [rbp-D8h]
	__int32 v28; // [rsp+40h] [rbp-C8h]
	__int32 v29; // [rsp+50h] [rbp-B8h]
	void* retaddr; // [rsp+108h] [rbp+0h] BYREF

	result = &retaddr;
	v5 = a3;
	v6 = a2;
	if (((unsigned __int8)a2 & 0xF) != 0)
	{
		v7 = a3;
		v8 = (16 - ((unsigned __int8)a2 & 0xFu)) >> 2;
		if (v8 < a3)
			v7 = v8;
		result = (void**)sub_1408A8BF0(a1->m128_f32, a2, v7);
		v6 += v7;
		v5 -= v7;
	}
	v9 = v5 & 3;
	v10 = _mm_shuffle_ps((__m128)a1[10].m128_u32[0], (__m128)a1[10].m128_u32[0], 0);
	v11 = _mm_shuffle_ps((__m128)a1[10].m128_u32[1], (__m128)a1[10].m128_u32[1], 0);
	v12 = _mm_shuffle_ps((__m128)a1[10].m128_u32[2], (__m128)a1[10].m128_u32[2], 0);
	v13 = &v6[v5 - v9];
	v26 = v10.m128_i32[0];
	v27 = v11.m128_i32[0];
	v28 = v12.m128_i32[0];
	v14 = _mm_shuffle_ps((__m128)a1[10].m128_u32[3], (__m128)a1[10].m128_u32[3], 0);
	v29 = v14.m128_i32[0];
	if (v6 < v13)
	{
		v15 = a1[4];
		v16 = a1[5];
		v17 = a1[7];
		v18 = a1[6];
		v19 = a1[1];
		v20 = *a1;
		v21 = a1[2];
		do
		{
			v22 = *(__m128*)v6;
			v6 += 4;
			v23 = _mm_mul_ps(v16, v11);
			v11 = _mm_shuffle_ps(v22, v22, 170);
			v24 = _mm_add_ps(v23, _mm_mul_ps(v15, v10));
			v10 = _mm_shuffle_ps(v22, v22, 255);
			v25 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_add_ps(_mm_mul_ps(v14, v17), _mm_mul_ps(v18, v12)), _mm_mul_ps(v19, v11)),
					_mm_add_ps(_mm_mul_ps(v20, v22), v24)),
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), a1[3]), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v21)));
			*((__m128*)v6 - 1) = v25;
			v12 = _mm_shuffle_ps(v25, v25, 255);
			v14 = _mm_shuffle_ps(v25, v25, 170);
		} while (v6 < v13);
		v29 = v14.m128_i32[0];
		v27 = v11.m128_i32[0];
		v26 = v10.m128_i32[0];
		v28 = v12.m128_i32[0];
	}
	a1[10].m128_i32[0] = v26;
	a1[10].m128_i32[1] = v27;
	a1[10].m128_i32[2] = v28;
	a1[10].m128_i32[3] = v29;
	if ((v5 & 3) != 0)
		return (void**)sub_1408A8BF0(a1->m128_f32, v6, v9);
	return result;
}

