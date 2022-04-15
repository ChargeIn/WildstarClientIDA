#include "../winhttp.h"

//----- (00000001406215D0) ----------------------------------------------------
void __fastcall sub_1406215D0(__m128* a1, __int64 a2)
{
	__int64 i; // rsi
	unsigned int v4; // ebx
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	__int64* v8; // rcx
	__int64 v9; // rax
	__m128* v10; // r14
	__int64 v11; // rbx
	__m128 v12; // xmm1
	__int64 v13; // rbx
	__int64 v14; // rcx
	__m128 v15; // xmm0
	__m128 v16; // xmm11
	__m128 v17; // xmm3
	__m128 v18; // xmm6
	__m128 v19; // xmm5
	__m128 v20; // xmm8
	__m128 v21; // xmm1
	float v22; // xmm2_4
	float v23; // xmm0_4
	__m128 v24; // xmm3
	__m128 v25; // xmm1
	__m128 v26; // xmm4
	__m128 v27; // xmm3
	__m128 v28; // xmm4
	__m128 v29; // xmm2
	float v30; // xmm4_4
	float v31; // xmm7_4
	__m128 v32; // xmm8
	__m128 v33; // xmm0
	__m128 v34; // xmm3
	float v35; // xmm1_4
	__m128 v36; // xmm4
	float v37; // xmm6_4
	__m128 v38; // xmm1
	float v39; // xmm2_4
	__m128 v40; // xmm3
	__m128 v41; // xmm1
	__m128 v42; // xmm1
	double v43; // xmm6_8
	__m128 v44; // xmm7
	float v45; // xmm9_4
	float v46; // xmm10_4
	__m128 v47; // xmm2
	__m128 v48; // xmm8
	__m128 v49; // xmm8
	float v50; // xmm5_4
	float v51; // xmm4_4
	float v52; // xmm4_4
	__m128 v53; // xmm1
	__m128 v54; // xmm2
	__m128 v55; // xmm3
	__m128 v56; // xmm2
	unsigned int v57; // [rsp+28h] [rbp-E0h] BYREF
	__m128 v58; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v59; // [rsp+48h] [rbp-C0h] BYREF
	unsigned __int64 v60; // [rsp+50h] [rbp-B8h] BYREF
	__m128 v61; // [rsp+58h] [rbp-B0h] BYREF
	_OWORD v62[4]; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v63; // [rsp+A8h] [rbp-60h]
	__m128 v64; // [rsp+B8h] [rbp-50h]
	__m128 v65; // [rsp+C8h] [rbp-40h]

	for (i = a2; i; i = *(_QWORD*)(i + 40))
	{
		v4 = *(_DWORD*)(i + 64);
		v57 = v4;
		if (v4 != a1[56].m128_i32[1])
		{
			v5 = a1[94].m128_u64[0];
			v6 = v5;
			v7 = *(_QWORD*)(v5 + 8);
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < v4)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v6 == v5 || v4 < *(_DWORD*)(v6 + 32))
			{
				v59 = a1[94].m128_i64[0];
				v8 = &v59;
			}
			else
			{
				v60 = v6;
				v8 = (__int64*)&v60;
			}
			if (*v8 == v5)
			{
				sub_1400293C0((__int64)&a1[93].m128_i64[1], (__int64)&v61, (int*)&v57);
				v9 = sub_1403D90D0(qword_140C65898, v4);
				v10 = (__m128*)v9;
				if (v9)
				{
					v11 = *(_QWORD*)(v9 + 5864);
					if (v11
						&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v11 + 848i64))(
							*(_QWORD*)(v9 + 5864),
							a1[59].m128_u32[0]))
					{
						(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD, unsigned int))(*(_QWORD*)v11 + 872i64))(
							v11,
							a1[59].m128_u32[0],
							&v58,
							0i64,
							v57);
						v12 = v58;
					}
					else
					{
						v12 = v10[291];
						v58 = v12;
					}
					a1[96] = _mm_add_ps(a1[96], v12);
				}
			}
		}
	}
	v13 = sub_1403D90D0(qword_140C65898, a1[56].m128_i32[1]);
	if (v13)
	{
		v14 = a1[94].m128_i64[1];
		if (v14)
		{
			v15 = 0i64;
			v15.m128_f32[0] = (float)(int)v14;
			if (v14 < 0)
				v15.m128_f32[0] = v15.m128_f32[0] + 1.8446744e19;
			v16 = (__m128)0x40400000u;
			v17 = (__m128)0x40400000u;
			a1[97] = _mm_div_ps(a1[96], _mm_shuffle_ps(v15, v15, 0));
			v18 = a1[49];
			v19 = _mm_sub_ps(a1[22], v18);
			v20 = a1[97];
			v21 = _mm_mul_ps(v19, v19);
			v22 = (float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
				+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
			v23 = fsqrt(v22);
			v17.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v22 * (float)(1.0 / v23)) * (float)(1.0 / v23))) * 0.5)
				* (float)(1.0 / v23),
				0.0);
			v24 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v19);
			v25 = _mm_mul_ps(v24, v18);
			v25.m128_f32[0] = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
				+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
			v26 = _mm_sub_ps(_mm_shuffle_ps(v18, v18, 136), _mm_shuffle_ps(v20, v20, 136));
			v27 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v24, _mm_shuffle_ps(v24, v24, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v24, v24, 85), _mm_xor_ps(v25, (__m128)xmmword_140B7B530)));
			v28 = _mm_mul_ps(v26, v26);
			v29 = _mm_mul_ps(v20, v27);
			v30 = v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
			if ((float)((float)((float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
				+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0])
				+ _mm_shuffle_ps(v27, v27, 255).m128_f32[0]) > 0.0)
			{
				v31 = 1.0;
				if (v30 < 25.0)
					v31 = v30 * 0.039999999;
				v32 = _mm_sub_ps(v20, v18);
				v33 = v19;
				v34 = (__m128)0x40400000u;
				v61 = v19;
				v35 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
				v33.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] * v35)
					+ (float)(v32.m128_f32[0] * v19.m128_f32[0]))
					/ (float)((float)(v35 * v35) + (float)(v19.m128_f32[0] * v19.m128_f32[0]));
				v58 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v19), v18);
				v58.m128_i32[1] = a1[97].m128_i32[1];
				v36 = _mm_sub_ps(v58, v18);
				v37 = a1[32].m128_f32[0];
				v38 = _mm_mul_ps(v36, v36);
				v39 = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
					+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
				v33.m128_f32[0] = fsqrt(v39);
				v34.m128_f32[0] = fmaxf(
					(float)((float)(3.0
						- (float)((float)(v39 * (float)(1.0 / v33.m128_f32[0]))
							* (float)(1.0 / v33.m128_f32[0])))
						* 0.5)
					* (float)(1.0 / v33.m128_f32[0]),
					0.0);
				v40 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v36);
				v41 = _mm_shuffle_ps(v40, v40, 136);
				v42 = _mm_mul_ps(v41, v41);
				a1[32].m128_f32[0] = (float)((float)(sub_1408FD190(
					_mm_shuffle_ps(v40, v40, 85).m128_f32[0],
					fsqrt(v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0]))
					- v37)
					* v31)
					+ v37;
				sub_1405B4520(v13, (__int64)v62);
				v44 = (__m128)v62[0];
				v64.m128_i32[0] = a1[32].m128_i32[0];
				*(_QWORD*)&v43 = v64.m128_u32[0];
				v45 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v64.m128_u32[0]));
				v46 = sub_1408FC950(v43);
				v47 = _mm_mul_ps(v44, v44);
				v40.m128_f32[0] = (float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
					+ _mm_shuffle_ps(v47, v47, 170).m128_f32[0];
				v33.m128_f32[0] = fsqrt(v40.m128_f32[0]);
				v48 = (__m128)0x40400000u;
				v63.m128_i32[3] = 0;
				v64.m128_i32[3] = 0;
				v65.m128_i32[3] = 0;
				v48.m128_f32[0] = fmaxf(
					(float)((float)(3.0
						- (float)((float)(v40.m128_f32[0] * (float)(1.0 / v33.m128_f32[0]))
							* (float)(1.0 / v33.m128_f32[0])))
						* 0.5)
					* (float)(1.0 / v33.m128_f32[0]),
					0.0);
				v49 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v44);
				v50 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
				v44.m128_f32[0] = _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
				v63.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v49.m128_f32[0]) * (float)(1.0 - v46)) + v46;
				v40.m128_f32[0] = v50 * v49.m128_f32[0];
				v51 = v44.m128_f32[0] * v49.m128_f32[0];
				v49.m128_f32[0] = v49.m128_f32[0] * v45;
				v40.m128_f32[0] = v40.m128_f32[0] * (float)(1.0 - v46);
				v52 = v51 * (float)(1.0 - v46);
				*(float*)&v43 = (float)(v44.m128_f32[0] * v50) * (float)(1.0 - v46);
				v53 = _mm_sub_ps((__m128)0i64, (__m128)v62[2]);
				v63.m128_f32[1] = (float)(v44.m128_f32[0] * v45) + v40.m128_f32[0];
				v64.m128_f32[0] = v40.m128_f32[0] - (float)(v44.m128_f32[0] * v45);
				v63.m128_f32[2] = v52 - (float)(v50 * v45);
				v65.m128_f32[0] = (float)(v50 * v45) + v52;
				v64.m128_f32[1] = (float)((float)(v50 * v50) * (float)(1.0 - v46)) + v46;
				v64.m128_f32[2] = v49.m128_f32[0] + *(float*)&v43;
				v65.m128_f32[2] = (float)((float)(v44.m128_f32[0] * v44.m128_f32[0]) * (float)(1.0 - v46)) + v46;
				v65.m128_f32[1] = *(float*)&v43 - v49.m128_f32[0];
				v54 = _mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v53, v53, 85), v64), _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v63)),
					_mm_mul_ps(_mm_shuffle_ps(v53, v53, 170), v65));
				a1[30] = v54;
				v55 = v54;
				v56 = _mm_mul_ps(v54, v54);
				v56.m128_f32[0] = (float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
					+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0];
				v33.m128_f32[0] = 1.0 / fsqrt(v56.m128_f32[0]);
				v16.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v56.m128_f32[0] * v33.m128_f32[0]) * v33.m128_f32[0]))
						* 0.5)
					* v33.m128_f32[0],
					0.0);
				a1[30] = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v55);
			}
		}
	}
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;

