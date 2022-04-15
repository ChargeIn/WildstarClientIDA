#include "../winhttp.h"

//----- (00000001401D79D0) ----------------------------------------------------
__int64 __fastcall sub_1401D79D0(__m128* a1, unsigned int a2, unsigned int a3, float* a4)
{
	unsigned __int64 v4; // rsi
	float v5; // xmm6_4
	float v6; // xmm7_4
	__int64 result; // rax
	__int64 v9; // r10
	__int64 v10; // rdi
	__int64 v11; // rcx
	unsigned int* v12; // r8
	unsigned int* v13; // rdx
	unsigned __int64 v14; // r9
	float v15; // xmm12_4
	__m128 v16; // xmm11
	__m128 v17; // xmm10
	__m128 v18; // xmm9
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	__m128 v21; // xmm5
	float v22; // xmm5_4
	__m128 v23; // xmm4
	__m128 v24; // xmm2
	float v25; // xmm2_4
	__m128 v26; // xmm3
	__m128 v27; // xmm4
	float v28; // xmm4_4
	__m128 v29; // xmm1
	float v30; // xmm1_4
	unsigned int v31; // ecx
	float v32; // xmm0_4
	unsigned int v33; // ebp
	float v34; // xmm8_4
	__int64 v35; // rdx
	float* v36; // r9
	__int64 v37; // rdx
	float v38; // [rsp+B0h] [rbp+8h] BYREF
	float v39; // [rsp+B4h] [rbp+Ch]
	float v40; // [rsp+C8h] [rbp+20h] BYREF
	float v41; // [rsp+CCh] [rbp+24h]

	v4 = a1[1].m128_u64[1];
	v5 = *a4;
	v6 = a4[1];
	result = a2;
	v9 = a3;
	v10 = 5i64 * a2;
	v38 = *a4;
	v39 = v6;
	v11 = *(unsigned int*)(v4 + 20i64 * a2 + 8);
	if ((_DWORD)v11)
	{
		result = a1[1].m128_i64[0];
		v12 = (unsigned int*)(result + 4i64 * *(unsigned int*)(v4 + 20i64 * a2 + 4));
		v13 = &v12[v11];
		if (v12 < v13)
		{
			v14 = a1->m128_u64[1];
			v15 = *(float*)&dword_140C3ED18;
			do
			{
				v16 = a1[4];
				result = *v12;
				v17 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v14 + 12 * result),
						(__m128) * (unsigned int*)(v14 + 12 * result + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 12 * result + 4), (__m128)0i64));
				v18 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v14 + 12i64 * v12[2]),
							(__m128) * (unsigned int*)(v14 + 12i64 * v12[2] + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 12i64 * v12[2] + 4), (__m128)0i64)),
					v17);
				v19 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v14 + 12i64 * v12[1]),
							(__m128) * (unsigned int*)(v14 + 12i64 * v12[1] + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 12i64 * v12[1] + 4), (__m128)0i64)),
					v17);
				v20 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v18, v18, 210), _mm_shuffle_ps(v16, v16, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v18, v18, 201), _mm_shuffle_ps(v16, v16, 210)));
				v21 = _mm_mul_ps(v19, v20);
				v22 = (float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
					+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
				if (v22 >= v15)
				{
					v23 = _mm_sub_ps(a1[2], v17);
					v24 = _mm_mul_ps(v23, v20);
					v25 = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
						+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
					if (v25 >= 0.0 && v25 <= v22)
					{
						v26 = _mm_sub_ps(
							_mm_mul_ps(_mm_shuffle_ps(v19, v19, 210), _mm_shuffle_ps(v23, v23, 201)),
							_mm_mul_ps(_mm_shuffle_ps(v19, v19, 201), _mm_shuffle_ps(v23, v23, 210)));
						v27 = _mm_mul_ps(v26, v16);
						v28 = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
							+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
						if (v28 >= 0.0 && (float)(v25 + v28) <= v22)
						{
							v29 = _mm_mul_ps(v26, v18);
							v30 = (float)((float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
								+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0])
								/ v22;
							if (v30 >= v5 && v30 < v6)
							{
								result = a1->m128_u64[0];
								v6 = v30;
								a1[5].m128_f32[0] = v30;
								a1[6].m128_u64[0] = result;
								v39 = v30;
								a1[5].m128_u64[1] = (unsigned __int64)v12;
							}
						}
					}
				}
				v12 += 3;
			} while (v12 < v13);
		}
	}
	v31 = *(_DWORD*)(v4 + 4 * v10 + 12);
	if (v31 || *(_DWORD*)(v4 + 4 * v10 + 16))
	{
		v32 = a1[4].m128_f32[v9];
		result = 3 * (((int)v9 + 1) / 3u);
		v33 = ((int)v9 + 1) % 3u;
		if (v32 <= 0.0000099999997)
		{
			if (v32 >= -0.0000099999997)
			{
				if (*(float*)(v4 + 4 * v10) <= a1[2].m128_f32[v9])
				{
					v35 = *(unsigned int*)(v4 + 4 * v10 + 16);
					if (!(_DWORD)v35)
						return result;
				}
				else
				{
					if (!v31)
						return result;
					v35 = v31;
				}
				v36 = &v38;
				return sub_1401D79D0(a1, v35, v33, v36);
			}
			v37 = *(unsigned int*)(v4 + 4 * v10 + 16);
			v34 = (float)(*(float*)(v4 + 4 * v10) - a1[2].m128_f32[v9]) / v32;
			if ((_DWORD)v37)
			{
				v40 = v5;
				v41 = fminf(v34 + 0.0000099999997, v6);
				if (v5 < v41)
				{
					result = sub_1401D79D0(a1, v37, v33, &v40);
					v5 = v38;
					v6 = fminf(a1[5].m128_f32[0], v39);
					v39 = v6;
				}
			}
			v35 = *(unsigned int*)(v4 + 4 * v10 + 12);
		}
		else
		{
			v34 = (float)(*(float*)(v4 + 4 * v10) - a1[2].m128_f32[v9]) / v32;
			if (v31)
			{
				v40 = v5;
				v41 = fminf(v34 + 0.0000099999997, v6);
				if (v5 < v41)
				{
					result = sub_1401D79D0(a1, v31, v33, &v40);
					v5 = v38;
					v6 = fminf(a1[5].m128_f32[0], v39);
					v39 = v6;
				}
			}
			v35 = *(unsigned int*)(v4 + 4 * v10 + 16);
		}
		if ((_DWORD)v35)
		{
			v41 = v6;
			v40 = fmaxf(v34 - 0.0000099999997, v5);
			if (v40 < v6)
			{
				v36 = &v40;
				return sub_1401D79D0(a1, v35, v33, v36);
			}
		}
	}
	return result;
}
// 140C3ED18: using guessed type int dword_140C3ED18;

