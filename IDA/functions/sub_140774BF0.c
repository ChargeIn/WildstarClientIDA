#include "../winhttp.h"

//----- (0000000140774BF0) ----------------------------------------------------
__int64 sub_140774BF0(__m128* a1, _QWORD* a2, unsigned int* a3, float a4, __int64 a5, int a6, int a7, int a8, ...)
{
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // r12d
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // xmm12_8
	__m128* v17; // r14
	float v18; // xmm9_4
	float v19; // xmm9_4
	unsigned int v20; // xmm0_4
	__int64 v21; // rcx
	__m128 v22; // xmm6
	double v23; // xmm1_8
	__int64 v24; // rax
	__m128i v25; // xmm2
	unsigned int* v26; // rax
	__m128 v27; // xmm0
	__m128 v28; // xmm6
	double v29; // xmm1_8
	__int64 v30; // rax
	unsigned int v31; // r11d
	unsigned int* v32; // rax
	__m128i v33; // xmm2
	__m128 v34; // xmm0
	float v35; // xmm0_4
	bool v36; // cf
	float v37; // xmm0_4
	float v38; // xmm5_4
	float v39; // xmm0_4
	float v40; // xmm0_4
	float v41; // xmm3_4
	float v42; // xmm1_4
	float v43; // xmm5_4
	__int64 v44; // rax
	__int64 v45; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__m128 v49; // [rsp+40h] [rbp-C0h]
	__m128 v50; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v52; // [rsp+50h] [rbp-B0h]
	__m128 v53; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v54; // [rsp+70h] [rbp-90h] BYREF
	__m128 v55; // [rsp+80h] [rbp-80h] BYREF
	__m128 v56; // [rsp+90h] [rbp-70h]
	__m128 v57; // [rsp+A0h] [rbp-60h]
	__m128 v58; // [rsp+B0h] [rbp-50h] BYREF
	int v59[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v60; // [rsp+180h] [rbp+80h] BYREF
	int v61; // [rsp+188h] [rbp+88h] BYREF
	float v62; // [rsp+198h] [rbp+98h] BYREF
	va_list va; // [rsp+1C0h] [rbp+C0h] BYREF

	va_start(va, a8);
	v62 = a4;
	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v11 = a2[2];
	v12 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	v13 = 0;
	*(_QWORD*)v11 = v12;
	a2[2] += 16i64;
	v14 = (_QWORD*)a1[51].m128_u64[1];
	v15 = (_QWORD*)v14[2];
	if (v15 != v14)
	{
		v16 = (unsigned int)dword_140C63664;
		do
		{
			v17 = (__m128*)v15[5];
			v18 = v17[3].m128_f32[0];
			v55 = v17[1];
			v19 = v18 * v18;
			v20 = a1[1].m128_u32[0];
			v62 = 0.0;
			sub_1407711C0(&v53, &v55, a1 + 2, 0.0, v20, a5, (int*)va, &v62);
			v58 = v17[2];
			sub_1407711C0(&v54, &v58, a1 + 2, 0.0, a1[1].m128_u32[0], a5, &v60, &v62);
			if (a6)
			{
				v21 = v17[8].m128_i64[0];
				if (v21)
				{
					v22 = v53;
					if ((int)((__int64)(*(_QWORD*)(v21 + 96) - *(_QWORD*)(v21 + 88)) >> 3) > 0)
						v21 = **(_QWORD**)(v21 + 88);
					HIDWORD(v23) = HIDWORD(v16);
					*(float*)&v23 = (float)(*(float*)&v16 - v17[8].m128_f32[2]) * v17[8].m128_f32[3];
					v24 = sub_140101180(v21, v23, 0i64);
					v25 = _mm_cvtsi32_si128(0);
					v49 = _mm_sub_ps(
						v22,
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v24 + 72)), v25),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v24 + 76)), v25))));
					v26 = sub_140109840(v17[8].m128_f32, &v61);
					v51 = _mm_add_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v26), v25),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v26[1]), v25))),
						v49).m128_u64[0];
					v27 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), v25),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1]), v25)));
					v56 = v27;
					if (v27.m128_f32[0] >= v49.m128_f32[0]
						&& v27.m128_f32[0] < *(float*)&v51
						&& v56.m128_f32[1] >= v49.m128_f32[1]
						&& v56.m128_f32[1] < *((float*)&v51 + 1))
					{
						goto LABEL_44;
					}
				}
			}
			if (a7)
			{
				v21 = v17[11].m128_i64[0];
				if (v21)
				{
					v28 = v54;
					if ((int)((__int64)(*(_QWORD*)(v21 + 96) - *(_QWORD*)(v21 + 88)) >> 3) > 0)
						v21 = **(_QWORD**)(v21 + 88);
					HIDWORD(v29) = HIDWORD(v16);
					*(float*)&v29 = (float)(*(float*)&v16 - v17[11].m128_f32[2]) * v17[11].m128_f32[3];
					v30 = sub_140101180(v21, v29, 0i64);
					v50 = _mm_sub_ps(
						v28,
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 72)), _mm_cvtsi32_si128(v31)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 76)), _mm_cvtsi32_si128(v31)))));
					v32 = sub_140109840(v17[11].m128_f32, v59);
					v21 = 0i64;
					v33 = _mm_cvtsi32_si128(0);
					v52 = _mm_add_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v32), v33),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v32[1]), v33))),
						v50).m128_u64[0];
					v34 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), v33),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1]), v33)));
					v57 = v34;
					if (v34.m128_f32[0] >= v50.m128_f32[0]
						&& v34.m128_f32[0] < *(float*)&v52
						&& v57.m128_f32[1] >= v50.m128_f32[1]
						&& v57.m128_f32[1] < *((float*)&v52 + 1))
					{
						goto LABEL_44;
					}
				}
			}
			if (a8)
			{
				if (v53.m128_f32[0] == v54.m128_f32[0])
				{
					v35 = (float)(int)a3[1];
					if ((v35 < v53.m128_f32[1] || v35 > v54.m128_f32[1]) && (v35 < v54.m128_f32[1] || v35 > v53.m128_f32[1]))
						goto LABEL_45;
					v36 = fabs((float)(int)*a3 - v53.m128_f32[0]) < 0.0;
				}
				else if (v53.m128_f32[1] == v54.m128_f32[1])
				{
					v37 = (float)(int)*a3;
					if ((v37 < v53.m128_f32[0] || v37 > v54.m128_f32[0]) && (v37 < v54.m128_f32[0] || v37 > v53.m128_f32[0]))
						goto LABEL_45;
					v36 = fabs((float)(int)a3[1] - v53.m128_f32[1]) < 0.0;
				}
				else
				{
					v38 = (float)(int)*a3;
					if (v38 < v53.m128_f32[0] || v38 > v54.m128_f32[0])
					{
						if (v38 < v54.m128_f32[0]
							|| v38 > v53.m128_f32[0]
							|| (v39 = (float)(int)a3[1], v39 < v53.m128_f32[1])
							|| v39 > v54.m128_f32[1])
						{
							v40 = (float)(int)a3[1];
							if (v40 < v54.m128_f32[1] || v40 > v53.m128_f32[1])
								goto LABEL_45;
						}
					}
					v41 = (float)(int)a3[1];
					v42 = (float)((float)((float)(v54.m128_f32[1] - v53.m128_f32[1]) / (float)(v54.m128_f32[0] - v53.m128_f32[0]))
						* (float)(v38 - v53.m128_f32[0]))
						+ v53.m128_f32[1];
					v43 = v38
						- (float)((float)((float)((float)(v54.m128_f32[0] - v53.m128_f32[0])
							/ (float)(v54.m128_f32[1] - v53.m128_f32[1]))
							* (float)(v41 - v53.m128_f32[1]))
							+ v53.m128_f32[0]);
					v36 = (float)((float)((float)((float)((float)(v41 - v42) * (float)(v41 - v42)) * v43) * v43)
						/ (float)((float)(v43 * v43) + (float)((float)(v41 - v42) * (float)(v41 - v42)))) < v19;
				}
				if (v36)
				{
				LABEL_44:
					v44 = a2[2];
					++v13;
					*(_DWORD*)(v44 + 8) = 3;
					*(double*)v44 = (double)v13;
					a2[2] += 16i64;
					sub_140774A40(v21, a2, (__int64)v17);
					sub_14005EA50(
						(__int64)a2,
						(__int64*)(a2[2] - 48i64),
						(int*)(a2[2] - 32i64),
						(unsigned int*)(a2[2] - 16i64));
					a2[2] -= 32i64;
					v16 = (unsigned int)dword_140C63664;
				}
			}
		LABEL_45:
			v45 = v15[3];
			if (v45)
			{
				v15 = (_QWORD*)v15[3];
				for (i = *(_QWORD**)(v45 + 16); i; i = (_QWORD*)i[2])
					v15 = i;
			}
			else
			{
				for (j = v15[1]; v15 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v15 = (_QWORD*)j;
				if (v15[3] != j)
					v15 = (_QWORD*)j;
			}
		} while (v15 != (_QWORD*)a1[51].m128_u64[1]);
	}
	return 1i64;
}
// 140774EF8: variable 'v31' is possibly undefined
// 14077512D: variable 'v21' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C63664: using guessed type int dword_140C63664;
// 140774BF0: using guessed type int var_B0[4];

