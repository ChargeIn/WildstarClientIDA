#include "../winhttp.h"

//----- (00000001408C59D0) ----------------------------------------------------
__int64 __fastcall sub_1408C59D0(__int64 a1, float* a2, unsigned int a3)
{
	__int64 result; // rax
	unsigned __int8 i; // si
	__m128* v8; // rdi
	unsigned int v9; // eax
	float* v10; // rdx
	__int64 v11; // rbx
	unsigned int v12; // eax
	int v13; // r8d
	__m128 v14; // xmm7
	__m128 v15; // xmm6
	__m128 v16; // xmm8
	float* v17; // rcx
	__m128 v18; // xmm5
	__m128 v19; // xmm4
	__m128 v20; // xmm2
	__m128 v21; // xmm5
	__int32 v22; // [rsp+20h] [rbp-88h]
	__int32 v23; // [rsp+30h] [rbp-78h]
	__int32 v24; // [rsp+40h] [rbp-68h]
	__int32 v25; // [rsp+50h] [rbp-58h]

	result = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(result + 152))
	{
		for (i = 0; i < *(_BYTE*)(a1 + 296); ++i)
		{
			result = i;
			v8 = (__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * i);
			if (v8[11].m128_i32[0] == 2)
			{
				v9 = a3;
				v10 = a2;
				if (((unsigned __int8)a2 & 0xF) != 0)
				{
					v11 = a3;
					v12 = (16 - ((unsigned __int8)a2 & 0xFu)) >> 2;
					if (v12 < a3)
						v11 = v12;
					sub_1408A8BF0((float*)(*(_QWORD*)(a1 + 312) + 192i64 * i), a2, v11);
					v10 = &a2[v11];
					v9 = a3 - v11;
				}
				v13 = v9 & 3;
				result = v9 - v13;
				v14 = _mm_shuffle_ps((__m128)v8[10].m128_u32[0], (__m128)v8[10].m128_u32[0], 0);
				v15 = _mm_shuffle_ps((__m128)v8[10].m128_u32[1], (__m128)v8[10].m128_u32[1], 0);
				v16 = _mm_shuffle_ps((__m128)v8[10].m128_u32[2], (__m128)v8[10].m128_u32[2], 0);
				v17 = &v10[result];
				v22 = v14.m128_i32[0];
				v23 = v15.m128_i32[0];
				v24 = v16.m128_i32[0];
				v18 = _mm_shuffle_ps((__m128)v8[10].m128_u32[3], (__m128)v8[10].m128_u32[3], 0);
				v25 = v18.m128_i32[0];
				if (v10 < v17)
				{
					do
					{
						v19 = *(__m128*)v10;
						v10 += 4;
						v20 = _mm_add_ps(_mm_mul_ps(v8[5], v15), _mm_mul_ps(v8[4], v14));
						v15 = _mm_shuffle_ps(v19, v19, 170);
						v14 = _mm_shuffle_ps(v19, v19, 255);
						v21 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(_mm_add_ps(_mm_mul_ps(v18, v8[7]), _mm_mul_ps(v8[6], v16)), _mm_mul_ps(v8[1], v15)),
								_mm_add_ps(_mm_mul_ps(*v8, v19), v20)),
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v8[3]),
								_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v8[2])));
						*((__m128*)v10 - 1) = v21;
						v16 = _mm_shuffle_ps(v21, v21, 255);
						v18 = _mm_shuffle_ps(v21, v21, 170);
					} while (v10 < v17);
					v25 = v18.m128_i32[0];
					v23 = v15.m128_i32[0];
					v22 = v14.m128_i32[0];
					v24 = v16.m128_i32[0];
				}
				v8[10].m128_i32[0] = v22;
				v8[10].m128_i32[1] = v23;
				v8[10].m128_i32[2] = v24;
				v8[10].m128_i32[3] = v25;
				if (v13)
					result = sub_1408A8BF0(v8->m128_f32, v10, v13);
			}
		}
	}
	return result;
}

