#include "../winhttp.h"

//----- (00000001407B89B0) ----------------------------------------------------
__m128* __fastcall sub_1407B89B0(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm4
	__m128* result; // rax
	__m128 v6; // xmm3
	__m128 v7; // xmm1
	__m128 v8; // xmm9
	__m128 v9; // xmm2
	float v10; // xmm2_4
	__m128 v11; // xmm0
	__m128 v12; // xmm2
	unsigned __int64 v13; // rax
	__m128* v14; // rcx
	__m128 v15; // xmm1
	__int64 v16; // rbx
	__m128 v17; // xmm10
	__m128 v18; // xmm5
	__m128 v19; // xmm0
	float v20; // xmm7_4
	float v21; // xmm10_4
	__m128 v22; // xmm9
	__int64 v23; // r10
	unsigned int v24; // r9d
	__m128* v25; // r8
	__m128 v26; // xmm8
	__m128 v27; // xmm11
	__m128 v28; // xmm2
	__m128 v29; // xmm3
	__m128 v30; // xmm1
	float v31; // xmm2_4
	__m128 v32; // xmm1
	float v33; // xmm1_4
	__m128 v34; // xmm6
	__m128 v35; // xmm3
	float v36; // xmm1_4
	__m128 v37; // xmm6
	__m128 v38; // xmm2
	float v39; // xmm2_4
	__m128 v40; // xmm2
	float v41; // xmm2_4
	__m128 v42; // xmm2

	if (qword_140C7F878)
	{
		v6 = *a3;
		v7 = _mm_mul_ps(v6, v6);
		if ((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) >= *(float*)&dword_140C54B18)
		{
			v8 = _mm_mul_ps(
				a1[29],
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), a1[51]), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), a1[50])),
					_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), a1[52])));
			if (qword_140C7F878 == 1)
			{
				result = a2;
				v9 = _mm_mul_ps(v8, *(__m128*)qword_140C7F870);
				v10 = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
				v11 = 0i64;
				if (v10 < 0.0)
				{
					v11.m128_f32[0] = v10;
					v12 = _mm_mul_ps(a1[28], _mm_sub_ps(v8, _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *(__m128*)qword_140C7F870)));
					*a2 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), a1[47]),
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), a1[46])),
						_mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), a1[48]));
				}
				else
				{
					*a2 = v6;
				}
			}
			else
			{
				v13 = 0i64;
				if (qword_140C7F878)
				{
					v14 = (__m128*)qword_140C7F870;
					do
					{
						v15 = _mm_mul_ps(*v14, v8);
						if ((float)((float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
							+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0]) < 0.0)
							break;
						++v13;
						++v14;
					} while (v13 < qword_140C7F878);
				}
				if (v13 == qword_140C7F878)
				{
					*a2 = v6;
					return a2;
				}
				else
				{
					v16 = qword_140C7F898;
					v17 = _mm_mul_ps(v8, v8);
					v18 = 0i64;
					v19 = _mm_shuffle_ps(v17, v17, 85);
					v20 = 0.0;
					v21 = fsqrt((float)(v17.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v17, v17, 170).m128_f32[0]);
					v19.m128_f32[0] = v21;
					v22 = _mm_div_ps(v8, _mm_shuffle_ps(v19, v19, 0));
					if (!qword_140C7F898)
						goto LABEL_28;
					v23 = qword_140C7F890;
					do
					{
						if (*(_DWORD*)(v23 + 48))
						{
							v24 = 0;
							v25 = (__m128*)v23;
							do
							{
								v26 = *v25;
								v27 = *(__m128*)(v23 + 16i64 * (++v24 % 3));
								v28 = _mm_sub_ps(
									_mm_mul_ps(_mm_shuffle_ps(v27, v27, 210), _mm_shuffle_ps(*v25, *v25, 201)),
									_mm_mul_ps(_mm_shuffle_ps(v27, v27, 201), _mm_shuffle_ps(v26, v26, 210)));
								v29 = _mm_sub_ps(
									_mm_mul_ps(_mm_shuffle_ps(v22, v22, 210), _mm_shuffle_ps(v28, v28, 201)),
									_mm_mul_ps(_mm_shuffle_ps(v22, v22, 201), _mm_shuffle_ps(v28, v28, 210)));
								v30 = _mm_mul_ps(*v25, v29);
								v31 = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
									+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
								v32 = _mm_mul_ps(v29, v27);
								v33 = (float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
									+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
								if ((v31 >= 0.0) + (v33 >= 0.0) == 1)
								{
									v34 = 0i64;
									v3.m128_f32[0] = -(float)(v31 / (float)(v33 - v31));
									v3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v27, v26)), v26);
									v35 = _mm_mul_ps(v3, v3);
									v35.m128_f32[0] = (float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0])
										+ _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
									v36 = 1.0 / fsqrt(v35.m128_f32[0]);
									v34.m128_f32[0] = fmaxf(
										(float)((float)(3.0 - (float)((float)(v35.m128_f32[0] * v36) * v36)) * 0.5) * v36,
										0.0);
									v37 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v3);
									v38 = _mm_mul_ps(v37, v22);
									v39 = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
										+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
									if (v20 < v39)
									{
										v20 = v39;
										v18.m128_f32[0] = v39 * v21;
										v18 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v37);
									}
								}
								else
								{
									v40 = _mm_mul_ps(v26, v22);
									v41 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
										+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
									if (v20 < v41)
									{
										v20 = v41;
										v18.m128_f32[0] = v41 * v21;
										v18 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v26);
									}
								}
								++v25;
							} while (v24 < 3);
						}
						v23 += 64i64;
						--v16;
					} while (v16);
					if (v20 >= 0.0000099999997)
					{
						v42 = _mm_mul_ps(a1[28], v18);
						*a2 = _mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v42, v42, 85), a1[47]),
								_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), a1[46])),
							_mm_mul_ps(_mm_shuffle_ps(v42, v42, 170), a1[48]));
					}
					else
					{
					LABEL_28:
						*a2 = 0i64;
					}
					return a2;
				}
			}
		}
		else
		{
			*a2 = v6;
			return a2;
		}
	}
	else
	{
		result = a2;
		*a2 = *a3;
	}
	return result;
}
// 1407B8D06: variable 'v3' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54B18: using guessed type int dword_140C54B18;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

