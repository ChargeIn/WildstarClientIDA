//----- (000000014036D7F0) ----------------------------------------------------
void __fastcall sub_14036D7F0(__m128* a1, __m128* a2, __m128* a3, int a4)
{
	unsigned __int64 i; // rbp
	__m128* v9; // r14
	__m128 v10; // xmm11
	__m128 v11; // xmm11
	__m128 v12; // xmm1
	__m128 v13; // xmm11
	__m128 v14; // xmm3
	__m128 v15; // xmm8
	__m128 v16; // xmm9
	__m128* v17; // rbx
	float v18; // xmm7_4
	double v19; // xmm0_8
	__m128 v20; // xmm1
	float v21; // xmm6_4
	unsigned __int64 v22; // xmm9_8
	__m128* v23; // r11
	unsigned __int64 j; // rbx
	__m128* v25; // r10
	__m128 v26; // xmm5
	__m128 v27; // xmm5
	__m128 v28; // xmm6
	float v29; // xmm6_4
	__m128 v30; // xmm4
	__m128 v31; // xmm3
	float v32; // xmm2_4
	__m128 v33; // xmm4
	__m128 v34; // xmm4
	__m128 v35; // xmm1
	__m128* v36; // rax
	unsigned __int64 v37; // [rsp+20h] [rbp-C8h]
	unsigned __int64 v38; // [rsp+20h] [rbp-C8h]
	__m128 v39; // [rsp+30h] [rbp-B8h] BYREF

	*a3 = 0i64;
	for (i = 0i64; i < a1[303].m128_u64[1]; ++i)
	{
		v9 = *(__m128**)(a1[303].m128_u64[0] + 8 * i);
		if (_bittest(&a4, v9->m128_u32[1]))
		{
			v10 = _mm_sub_ps(*a2, v9[1]);
			v11 = _mm_shuffle_ps(v10, v10, 136);
			v37 = v11.m128_u64[0];
			v12 = _mm_mul_ps(v11, v11);
			if ((float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0]) < v9[11].m128_f32[1])
			{
				v13 = _mm_mul_ps(v11, v11);
				v14 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)(unsigned int)v37, (__m128)0x3F800000u),
					_mm_unpacklo_ps((__m128)HIDWORD(v37), (__m128)0i64));
				v15 = _mm_mul_ps(v9[7], v14);
				v16 = _mm_mul_ps(v9[8], v14);
				v17 = (__m128*)sub_1401ADB90((__m128i*) & v39, &v9[11].m128_u16[6]);
				v18 = 1.0
					- fmaxf(
						0.0,
						fminf(
							(float)(fsqrt(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0]) * v9[11].m128_f32[0])
							* a1[344].m128_f32[1],
							1.0));
				HIDWORD(v19) = v15.m128_i32[1];
				*(float*)&v19 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
					+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
				v20 = _mm_shuffle_ps(v16, v16, 85);
				v21 = sub_1408FC950(v19);
				HIDWORD(v19) = v16.m128_i32[1];
				*(float*)&v19 = (float)(v16.m128_f32[0] + v20.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
				v20.m128_f32[0] = v18
					* (float)((float)((float)((float)((float)(v21 * sub_1408FC950(v19)) + 1.0) * 0.5)
						* (float)(v9[3].m128_f32[2] - v9[3].m128_f32[1]))
						+ v9[3].m128_f32[1]);
				*a3 = _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *v17));
			}
		}
	}
	v22 = _mm_shuffle_ps(*a2, *a2, 136).m128_u64[0];
	if (*(float*)&v22 >= a1[306].m128_f32[0]
		&& *(float*)&v22 < a1[307].m128_f32[0]
		&& *((float*)&v22 + 1) >= a1[306].m128_f32[1]
		&& *((float*)&v22 + 1) < a1[307].m128_f32[1])
	{
		v23 = a1 + 305;
		if (a1 != (__m128*) - 4880i64)
		{
			do
			{
				for (j = 0i64; j < v23[4].m128_u64[0]; ++j)
				{
					v25 = *(__m128**)(v23[3].m128_u64[1] + 8 * j);
					if (_bittest(&a4, v25->m128_u32[1]))
					{
						v26 = _mm_sub_ps(*a2, v25[1]);
						v27 = _mm_shuffle_ps(v26, v26, 136);
						v28 = _mm_mul_ps(v27, v27);
						v29 = v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
						if (v29 < v25[11].m128_f32[1])
						{
							if (v25[3].m128_i32[1])
							{
								v30 = 0i64;
								v31 = _mm_mul_ps(v27, v27);
								v31.m128_f32[0] = v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
								v32 = 1.0 / fsqrt(v31.m128_f32[0]);
								v30.m128_f32[0] = fmaxf(
									(float)((float)(3.0 - (float)((float)(v31.m128_f32[0] * v32) * v32)) * 0.5) * v32,
									0.0);
								v33 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v27);
								v34 = _mm_unpacklo_ps(_mm_unpacklo_ps(v33, _mm_shuffle_ps(v33, v33, 85)), (__m128)0i64);
							}
							else
							{
								sub_1401ADB90((__m128i*) & v39, &v25[11].m128_u16[6]);
								v34 = v39;
							}
							v35 = 0i64;
							v35.m128_f32[0] = (float)(1.0
								- fmaxf(
									0.0,
									fminf((float)(fsqrt(v29) * v25[11].m128_f32[0]) * a1[344].m128_f32[1], 1.0)))
								* (float)(v25[11].m128_f32[2] * v25[3].m128_f32[2]);
							*a3 = _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v34));
						}
					}
				}
				v36 = (__m128*)v23[3].m128_u64[0];
				if (!v36)
					break;
				v38 = _mm_mul_ps(_mm_add_ps(v23[2], v23[1]), (__m128)xmmword_140B7AC50).m128_u64[0];
				if (*(float*)&v22 >= *(float*)&v38)
				{
					v23 = v36 + 10;
					if (*((float*)&v22 + 1) >= *((float*)&v38 + 1))
						v23 = v36 + 15;
				}
				else
				{
					v23 = *((float*)&v22 + 1) >= *((float*)&v38 + 1) ? &v36[5] : (__m128*)v23[3].m128_u64[0];
				}
			} while (v23);
		}
	}
}
// 14036DA80: variable 'v23' is possibly undefined
// 14036DB41: variable 'v25' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

