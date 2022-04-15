#include "../winhttp.h"

//----- (00000001408C5760) ----------------------------------------------------
__int64 __fastcall sub_1408C5760(__int64 a1, __int64 a2, int* a3, unsigned int a4, unsigned int a5)
{
	__int64 result; // rax
	unsigned __int8 i; // si
	__m128* v10; // rdi
	unsigned int v11; // eax
	float* v12; // rdx
	__int64 v13; // rbx
	unsigned int v14; // eax
	int v15; // r8d
	__m128 v16; // xmm6
	__m128 v17; // xmm5
	__m128 v18; // xmm0
	float* v19; // rcx
	__m128 v20; // xmm4
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm4
	__int32 v24; // [rsp+40h] [rbp-68h]
	__int32 v25; // [rsp+50h] [rbp-58h]
	__int32 v26; // [rsp+60h] [rbp-48h]
	__int32 v27; // [rsp+70h] [rbp-38h]

	sub_1408CB8F0(
		a2,
		a4,
		a5,
		a3,
		*(_DWORD*)(a2 + 8),
		*(float*)(*(_QWORD*)(a1 + 328) + 120i64),
		*(float*)(*(_QWORD*)(a1 + 328) + 124i64));
	result = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(result + 152))
	{
		for (i = 0; i < *(_BYTE*)(a1 + 296); ++i)
		{
			result = i;
			v10 = (__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * i);
			if (v10[11].m128_i32[0] == 3)
			{
				v11 = a4;
				v12 = (float*)a3;
				if (((unsigned __int8)a3 & 0xF) != 0)
				{
					v13 = a4;
					v14 = (16 - ((unsigned __int8)a3 & 0xFu)) >> 2;
					if (v14 < a4)
						v13 = v14;
					sub_1408A8BF0((float*)(*(_QWORD*)(a1 + 312) + 192i64 * i), (float*)a3, v13);
					v12 = (float*)&a3[v13];
					v11 = a4 - v13;
				}
				v15 = v11 & 3;
				result = v11 - v15;
				v16 = _mm_shuffle_ps((__m128)v10[10].m128_u32[0], (__m128)v10[10].m128_u32[0], 0);
				v17 = _mm_shuffle_ps((__m128)v10[10].m128_u32[1], (__m128)v10[10].m128_u32[1], 0);
				v18 = _mm_shuffle_ps((__m128)v10[10].m128_u32[2], (__m128)v10[10].m128_u32[2], 0);
				v19 = &v12[result];
				v24 = v16.m128_i32[0];
				v25 = v17.m128_i32[0];
				v26 = v18.m128_i32[0];
				v20 = _mm_shuffle_ps((__m128)v10[10].m128_u32[3], (__m128)v10[10].m128_u32[3], 0);
				v27 = v20.m128_i32[0];
				if (v12 < v19)
				{
					do
					{
						v21 = *(__m128*)v12;
						v12 += 4;
						v22 = _mm_add_ps(_mm_mul_ps(v10[5], v17), _mm_mul_ps(v10[4], v16));
						v17 = _mm_shuffle_ps(v21, v21, 170);
						v16 = _mm_shuffle_ps(v21, v21, 255);
						v23 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(_mm_add_ps(_mm_mul_ps(v20, v10[7]), _mm_mul_ps(v18, v10[6])), _mm_mul_ps(v10[1], v17)),
								_mm_add_ps(v22, _mm_mul_ps(v21, *v10))),
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v10[2]),
								_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v10[3])));
						*((__m128*)v12 - 1) = v23;
						v18 = _mm_shuffle_ps(v23, v23, 255);
						v20 = _mm_shuffle_ps(v23, v23, 170);
					} while (v12 < v19);
					v27 = v20.m128_i32[0];
					v26 = v18.m128_i32[0];
					v25 = v17.m128_i32[0];
					v24 = v16.m128_i32[0];
				}
				v10[10].m128_i32[0] = v24;
				v10[10].m128_i32[1] = v25;
				v10[10].m128_i32[2] = v26;
				v10[10].m128_i32[3] = v27;
				if (v15)
					result = sub_1408A8BF0(v10->m128_f32, v12, v15);
			}
		}
	}
	return result;
}

