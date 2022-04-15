#include "../winhttp.h"

//----- (00000001407B8E80) ----------------------------------------------------
__m128* __fastcall sub_1407B8E80(__m128* a1, __m128* a2, __m128* a3, __m128* a4)
{
	__m128* result; // rax
	__m128 v6; // xmm3
	__m128 v7; // xmm1
	__m128 v8; // xmm4
	__m128 v9; // xmm5
	unsigned __int64 v10; // rax
	__m128 v11; // xmm6
	__m128 v12; // xmm7
	__m128 v13; // xmm10
	__m128* v14; // rcx
	__m128 v15; // xmm1
	__m128 v16; // xmm11
	__m128 v17; // xmm12
	__m128 v18; // xmm9
	float v19; // xmm11_4
	__m128 v20; // xmm0
	__m128 v21; // xmm4
	__m128 v22; // xmm3
	__m128 v23; // xmm1
	float v24; // xmm2_4
	__m128 v25; // xmm4
	__m128 v26; // xmm4
	__m128 v27; // xmm2
	__m128 v28; // xmm0
	__m128 v29; // xmm9
	__m128 v30; // xmm9
	__m128 v31; // xmm1
	float v32; // xmm2_4
	float v33; // xmm0_4
	__m128 v34; // xmm12
	__m128 v35; // xmm2
	__m128 v36; // xmm0
	__m128 v37; // xmm2
	__int64 v38; // rbx
	__m128 v39; // xmm5
	float v40; // xmm7_4
	__m128 v41; // xmm10
	__int64 v42; // r10
	unsigned int v43; // r8d
	__m128* v44; // r9
	__m128 v45; // xmm2
	float v46; // xmm2_4
	__m128 v47; // xmm3
	__m128 v48; // xmm4
	__m128 v49; // xmm3
	__m128 v50; // xmm1
	float v51; // xmm2_4
	float v52; // xmm0_4
	__m128 v53; // xmm4
	__m128 v54; // xmm2
	float v55; // xmm2_4
	__m128 v56; // xmm2

	if (qword_140C7F878)
	{
		v6 = *a3;
		v7 = _mm_mul_ps(v6, v6);
		if ((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) >= *(float*)&dword_140C54B18)
		{
			v8 = a1[51];
			v9 = a1[50];
			v10 = 0i64;
			v11 = a1[52];
			v12 = a1[29];
			v13 = _mm_mul_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v9), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v8)),
					_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v11)),
				v12);
			if (qword_140C7F878)
			{
				v14 = (__m128*)qword_140C7F870;
				do
				{
					v15 = _mm_mul_ps(*v14, v13);
					if ((float)((float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
						+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0]) < 0.0)
						break;
					++v10;
					++v14;
				} while (v10 < qword_140C7F878);
			}
			if (v10 == qword_140C7F878)
			{
				*a2 = v6;
			}
			else
			{
				v16 = _mm_mul_ps(v13, v13);
				v17 = (__m128)0x40400000u;
				v18 = (__m128)0x40400000u;
				v19 = fsqrt(
					(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
					+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
				v20 = _mm_mul_ps(_mm_shuffle_ps(*a4, *a4, 85), v8);
				v21 = (__m128)0x40400000u;
				v22 = _mm_mul_ps(
					_mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a4, *a4, 0), v9), v20),
						_mm_mul_ps(_mm_shuffle_ps(*a4, *a4, 170), v11)),
					v12);
				v23 = _mm_mul_ps(v22, v22);
				v24 = (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
					+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
				v20.m128_f32[0] = fsqrt(v24);
				v21.m128_f32[0] = fmaxf(
					(float)((float)(3.0
						- (float)((float)(v24 * (float)(1.0 / v20.m128_f32[0]))
							* (float)(1.0 / v20.m128_f32[0])))
						* 0.5)
					* (float)(1.0 / v20.m128_f32[0]),
					0.0);
				v25 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v22);
				v26 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v25, v25, 210), _mm_shuffle_ps(v13, v13, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v25, v25, 201), _mm_shuffle_ps(v13, v13, 210)));
				v27 = _mm_mul_ps(v26, v26);
				v27.m128_f32[0] = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
					+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
				v28 = v27;
				v28.m128_f32[0] = 1.0 / fsqrt(v27.m128_f32[0]);
				v18.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v27.m128_f32[0] * v28.m128_f32[0]) * v28.m128_f32[0]))
						* 0.5)
					* v28.m128_f32[0],
					0.0);
				v29 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v26);
				if (qword_140C7F878 == 1)
				{
					v30 = _mm_sub_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v29, v29, 210),
							_mm_shuffle_ps(*(__m128*)qword_140C7F870, *(__m128*)qword_140C7F870, 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(v29, v29, 201),
							_mm_shuffle_ps(*(__m128*)qword_140C7F870, *(__m128*)qword_140C7F870, 210)));
					v31 = _mm_mul_ps(v30, v30);
					v32 = (float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
						+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
					v33 = fsqrt(v32);
					v17.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v32 * (float)(1.0 / v33)) * (float)(1.0 / v33)))
							* 0.5)
						* (float)(1.0 / v33),
						0.0);
					v34 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v30);
					v35 = _mm_mul_ps(v34, v13);
					v36 = _mm_shuffle_ps(v35, v35, 85);
					v36.m128_f32[0] = (float)(v36.m128_f32[0] + v35.m128_f32[0]) + _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
					v37 = _mm_mul_ps(a1[28], _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v34));
					*a2 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v37, v37, 85), a1[47]),
							_mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), a1[46])),
						_mm_mul_ps(_mm_shuffle_ps(v37, v37, 170), a1[48]));
				}
				else
				{
					v28.m128_f32[0] = v19;
					v38 = qword_140C7F898;
					v39 = 0i64;
					v40 = 0.0;
					v41 = _mm_div_ps(v13, _mm_shuffle_ps(v28, v28, 0));
					if (!qword_140C7F898)
						goto LABEL_24;
					v42 = qword_140C7F890;
					do
					{
						if (*(_DWORD*)(v42 + 48))
						{
							v43 = 0;
							v44 = (__m128*)v42;
							do
							{
								++v43;
								v45 = _mm_mul_ps(*v44, v29);
								v46 = (float)(v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0])
									+ _mm_shuffle_ps(v45, v45, 170).m128_f32[0];
								v47 = _mm_mul_ps(*(__m128*)(v42 + 16i64 * (v43 % 3)), v29);
								v47.m128_f32[0] = (float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
									+ _mm_shuffle_ps(v47, v47, 170).m128_f32[0];
								if ((v46 >= 0.0) + (v47.m128_f32[0] >= 0.0) == 1)
								{
									v47.m128_f32[0] = -(float)(v46 / (float)(v47.m128_f32[0] - v46));
									v48 = (__m128)0x40400000u;
									v49 = _mm_add_ps(
										_mm_mul_ps(
											_mm_shuffle_ps(v47, v47, 0),
											_mm_sub_ps(*(__m128*)(v42 + 16i64 * (v43 % 3)), *v44)),
										*v44);
									v50 = _mm_mul_ps(v49, v49);
									v51 = (float)(v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0])
										+ _mm_shuffle_ps(v50, v50, 170).m128_f32[0];
									v52 = fsqrt(v51);
									v48.m128_f32[0] = fmaxf(
										(float)((float)(3.0
											- (float)((float)(v51 * (float)(1.0 / v52)) * (float)(1.0 / v52)))
											* 0.5)
										* (float)(1.0 / v52),
										0.0);
									v53 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v49);
									v54 = _mm_mul_ps(v41, v53);
									v55 = (float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0])
										+ _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
									if (v40 < v55)
									{
										v40 = v55;
										v39.m128_f32[0] = v55 * v19;
										v39 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v53);
									}
								}
								++v44;
							} while (v43 < 3);
						}
						v42 += 64i64;
						--v38;
					} while (v38);
					if (v40 >= 0.0000099999997)
					{
						v56 = _mm_mul_ps(a1[28], v39);
						*a2 = _mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v56, v56, 85), a1[47]),
								_mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), a1[46])),
							_mm_mul_ps(_mm_shuffle_ps(v56, v56, 170), a1[48]));
					}
					else
					{
					LABEL_24:
						*a2 = 0i64;
					}
				}
			}
			return a2;
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
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54B18: using guessed type int dword_140C54B18;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

