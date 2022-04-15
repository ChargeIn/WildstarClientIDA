#include "../winhttp.h"

//----- (00000001407BA560) ----------------------------------------------------
__m128* __fastcall sub_1407BA560(__m128* a1, __m128* a2, __m128* a3, __m128* a4)
{
	__m128 v4; // xmm3
	unsigned int i; // r15d
	__m128 v9; // xmm7
	__m128 v10; // xmm8
	int v11; // ebp
	__m128 v12; // xmm9
	unsigned __int64 v13; // rbx
	__m128 v14; // xmm1
	float v15; // xmm2_4
	__m128 v16; // xmm1
	float v17; // xmm0_4
	__m128 v18; // xmm2
	__m128 v19; // xmm6
	int* v20; // rsi
	__m128* result; // rax
	unsigned __int64 v22; // rdx
	int* v23; // rcx
	unsigned __int64 v24; // rcx
	__m128* v25; // [rsp+E8h] [rbp+10h]

	v25 = a2;
	for (i = 0; i < 3; ++i)
	{
		if (i)
		{
			if (i == 1)
			{
				v9 = *a3;
				v10 = *a4;
			}
			else
			{
				v9 = *a4;
				v10 = *a2;
			}
		}
		else
		{
			v9 = *a2;
			v10 = *a3;
		}
		v11 = 0;
		v12 = _mm_sub_ps(v10, v9);
		do
		{
			v13 = a1[76].m128_u64[1];
			v4.m128_f32[0] = (float)v11 * 0.06666667;
			v4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v12), v9);
			v14 = _mm_mul_ps(v4, v4);
			v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
				+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
			v16 = (__m128)0x40400000u;
			v17 = fsqrt(v15);
			v16.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v17)) * (float)(1.0 / v17))) * 0.5)
				* (float)(1.0 / v17),
				0.0);
			v18 = _mm_add_ps(a1[26], _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v4));
			v19 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), a1[31]),
						_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), a1[30])),
					_mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), a1[32])),
				a1[33]);
			v20 = sub_14018DB00(a1[76].m128_i64[0], v13 + 1, 16i64);
			result = (__m128*) & v20[4 * v13];
			if (result)
				*result = v19;
			if ((int*)a1[76].m128_u64[0] != v20)
			{
				v22 = 0i64;
				if (a1[76].m128_u64[1])
				{
					v23 = v20;
					do
					{
						if (v23)
						{
							result = (__m128*)(a1[76].m128_u64[0] - (_QWORD)v20);
							*(_OWORD*)v23 = *(_OWORD*)((char*)v23 + (_QWORD)result);
						}
						++v22;
						v23 += 4;
					} while (v22 < a1[76].m128_u64[1]);
				}
				v24 = a1[76].m128_u64[0];
				if (v24)
					result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
				a1[76].m128_u64[0] = (unsigned __int64)v20;
			}
			++v11;
			a1[76].m128_u64[1] = v13 + 1;
		} while ((unsigned int)v11 < 0x10);
		a2 = v25;
	}
	return result;
}
// 1407BA5F0: conditional instruction was optimized away because r15d.4==2
// 1407BA64E: variable 'v4' is possibly undefined

