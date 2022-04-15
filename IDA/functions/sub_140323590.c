#include "../winhttp.h"

//----- (0000000140323590) ----------------------------------------------------
__int64 __fastcall sub_140323590(__int64 a1, __m128* a2)
{
	__m128* v2; // rsi
	unsigned __int64 v3; // rdi
	__m128 v6; // xmm3
	__m128 v7; // xmm11
	__m128 v8; // xmm12
	__int64 v9; // rdx
	__m128i v10; // xmm14
	char v11; // al
	float v12; // xmm8_4
	unsigned __int64 v13; // xmm14_8
	float* v14; // r14
	int v15; // eax
	double v16; // xmm10_8
	double v17; // xmm0_8
	double v18; // xmm0_8
	__int64* v19; // rcx
	__int64 v20; // rax
	double v21; // xmm0_8
	__int64* v22; // rcx
	__int64 v23; // rax
	double v24; // xmm0_8
	float v25; // xmm6_4
	double v26; // xmm0_8
	float v27; // xmm7_4
	double v28; // xmm0_8
	float v29; // xmm3_4
	float v30; // xmm4_4
	float v31; // xmm5_4
	double v32; // xmm15_8
	double v33; // xmm2_8
	float v34; // xmm7_4
	float v35; // xmm0_4
	float v36; // xmm6_4
	float v37; // xmm6_4
	float v38; // xmm0_4
	double v39; // xmm0_8
	__int64 v40; // rax
	float v41; // xmm4_4
	float v42; // xmm1_4
	__int64 v43; // rax
	float v44; // xmm2_4
	float v45; // xmm2_4
	__int64 result; // rax
	__m128 v47; // xmm7
	__int64 v48; // rbp
	__m128 v49; // xmm3
	__m128 v50; // xmm4
	__m128i v51; // xmm2
	__m128 v52; // xmm0
	__m128 v53; // xmm0
	__m128i v54; // xmm1
	__m128i v55; // xmm1
	__m128 v56; // xmm3
	__m128 v57; // xmm2
	unsigned int v58; // edx
	unsigned int v59; // edx
	__int64 v60; // rax
	__m128 v61; // xmm1
	__m128 v62; // xmm3
	__m128 v63; // xmm4
	__m128 v64; // xmm6
	__m128 v65; // xmm6
	__m128 v66; // xmm2
	__m128 v67; // xmm3
	float v68; // [rsp+20h] [rbp-108h]
	__m128 v69; // [rsp+30h] [rbp-F8h] BYREF
	__m128 v70; // [rsp+40h] [rbp-E8h] BYREF
	float* v71; // [rsp+130h] [rbp+8h] BYREF
	float v72; // [rsp+138h] [rbp+10h]
	float v73; // [rsp+140h] [rbp+18h] BYREF
	unsigned int v74; // [rsp+148h] [rbp+20h] BYREF

	v2 = (__m128*)a2->m128_u64[1];
	v3 = a2->m128_u64[0];
	v6 = (__m128)v2->m128_u32[1];
	v7 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v2[2].m128_u32[0], (__m128)v2[2].m128_u32[2]),
		_mm_unpacklo_ps((__m128)v2[2].m128_u32[1], v6));
	v8 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v2[3].m128_u32[0], (__m128)v2[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)v2[3].m128_u32[1], v6));
	if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 24i64) && *(_WORD*)(*(_QWORD*)(a1 + 1256) + 1028i64) != 1)
	{
		v7 = _mm_mul_ps(v7, a2[1]);
		v8 = _mm_mul_ps(v8, a2[1]);
	}
	v9 = *(_QWORD*)(a1 + 1256);
	v10 = _mm_cvtsi32_si128(v2[1].m128_u32[2]);
	v74 = 0;
	v11 = *(_BYTE*)(v9 + 1072);
	v13 = _mm_cvtepi32_ps(v10).m128_u64[0];
	v12 = 0.0;
	*(float*)&v13 = *(float*)&v13 * *(float*)(a1 + 1524);
	LODWORD(v71) = 0;
	if (v11)
	{
		if (v11 == 1)
		{
			v14 = (float*)&v71;
		}
		else if (v11 == 2)
		{
			v14 = (float*)&v74;
		}
		else
		{
			v14 = v71;
		}
		v15 = *(_DWORD*)(v9 + 40);
		v16 = *(double*)&v13;
		if ((v15 & 0x1000) == 0)
			*(float*)&v16 = *(float*)&v13 * *(float*)(a1 + 1392);
		if ((v15 & 0x800) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56), v2[1].m128_u32[1]);
			v17 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v68 = *(float*)&v17;
			v18 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v19 = *(__int64**)(a1 + 56);
			v20 = *v19;
			v72 = *(float*)&v18;
			v21 = (*(double(__fastcall**)(__int64*))(v20 + 56))(v19);
			v22 = *(__int64**)(a1 + 56);
			v23 = *v22;
			v73 = *(float*)&v21;
			v24 = (*(double(__fastcall**)(__int64*))(v23 + 56))(v22);
			v25 = *(float*)&v24;
			v26 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v27 = *(float*)&v26;
			v28 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v29 = *(float*)(a1 + 1200);
			v32 = v16;
			HIDWORD(v33) = HIDWORD(v13);
			v30 = *(float*)&v28;
			LODWORD(v28) = *(_DWORD*)(a1 + 1232);
			v31 = (float)*(int*)(a1 + 1336);
			*(float*)&v33 = (float)((float)(*(float*)&v16 * 1.5) * v29) + v27;
			*(float*)&v16 = (float)((float)((float)(*(float*)&v16 * 0.89999998) * v29) + v30)
				+ (float)((float)(*(float*)&v28 * 0.89999998) * v31);
			*(float*)&v32 = (float)((float)((float)(*(float*)&v32 * 2.0) * v29) + v25)
				+ (float)((float)(*(float*)&v28 * 2.0) * v31);
			*(float*)&v33 = *(float*)&v33 + (float)((float)(*(float*)&v28 * 1.5) * v31);
			v34 = (float)(v72 + v68) + v73;
			if (v34 == 0.0)
			{
				*v14 = 0.0;
			}
			else
			{
				v35 = sub_1408FE3D0(v33);
				v36 = v35 * v72;
				v37 = v36 + (float)(sub_1408FE3D0(v32) * v68);
				v38 = sub_1408FE3D0(v16);
				*v14 = (float)((float)(v37 + (float)(v38 * v73)) * *(float*)(a1 + 1216)) / v34;
			}
		}
		else
		{
			HIDWORD(v39) = 0;
			*(float*)&v39 = (float)((float)*(int*)(a1 + 1336) * *(float*)(a1 + 1232))
				+ (float)(*(float*)&v16 * *(float*)(a1 + 1200));
			*v14 = sub_1408FE3D0(v39) * *(float*)(a1 + 1216);
		}
		v40 = *(_QWORD*)(a1 + 1256);
		v41 = *v14;
		if ((*(_DWORD*)(v40 + 40) & 0x2000) != 0)
		{
			v42 = *(float*)(v40 + 948) == 0.0
				? 0.0
				: fabs((float)(v2->m128_f32[3] - *(float*)(*(_QWORD*)(a1 + 1416) + 12i64)) * *(float*)(a1 + 1528));
			if (v42 < *(float*)(a1 + 1184))
				*v14 = fmaxf(0.0, fminf(v42 * *(float*)(a1 + 1520), 1.0)) * v41;
		}
		v43 = *(_QWORD*)(a1 + 1256);
		if ((*(_DWORD*)(v43 + 40) & 0x4000) != 0)
		{
			v44 = *(float*)(v43 + 948) == 0.0
				? 0.0
				: fabs((float)(v2->m128_f32[3] - *(float*)(*(_QWORD*)(a1 + 1424) + 12i64)) * *(float*)(a1 + 1528));
			if (v44 < *(float*)(a1 + 1184))
			{
				v45 = fmaxf(0.0, fminf(v44 * *(float*)(a1 + 1520), 1.0)) * v41;
				if (fabs(v45) < fabs(*v14))
					*v14 = v45;
			}
		}
		v12 = *(float*)&v71;
	}
	result = *(_QWORD*)(a1 + 1256);
	if (*(_BYTE*)(result + 1072) == 2)
		v47 = _mm_mul_ps(
			_mm_sub_ps(v2[(unsigned int)(*(_DWORD*)(a1 + 1372) - 1) + 7], v2[7]),
			_mm_shuffle_ps((__m128)v74, (__m128)v74, 0));
	else
		v47 = 0i64;
	v48 = 0i64;
	if (*(_DWORD*)(a1 + 1372))
	{
		v49 = (__m128)xmmword_140B7B470;
		v50 = (__m128)xmmword_140B7AC50;
		do
		{
			v51 = (__m128i)_mm_add_ps(
				_mm_mul_ps(
					_mm_mul_ps(
						_mm_sub_ps(_mm_sub_ps(v2[v48 + 7], v47), v2[5]),
						_mm_shuffle_ps((__m128)v2->m128_u32[2], (__m128)v2->m128_u32[2], 0)),
					_mm_shuffle_ps((__m128)a2[2].m128_u32[0], (__m128)a2[2].m128_u32[0], 0)),
				v2[5]);
			*(_DWORD*)v3 = _mm_cvtsi128_si32(v51);
			*(_DWORD*)(v3 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v51, 4));
			*(_DWORD*)(v3 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v51, 8));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
			{
				v52 = 0i64;
				v52.m128_f32[0] = (float)(int)v48;
				v53 = _mm_max_ps(
					(__m128)0i64,
					_mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 1536), (__m128) * (unsigned int*)(a1 + 1536), 0),
							_mm_mul_ps(_mm_sub_ps(v8, v7), _mm_shuffle_ps(v52, v52, 0))),
						v7));
			}
			else
			{
				v53 = _mm_max_ps((__m128)0i64, v7);
			}
			v54 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_min_ps(v53, (__m128)xmmword_140B7B240), v49), v50)),
				198);
			v55 = _mm_packus_epi16(v54, v54);
			*(_DWORD*)(v3 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v55, v55));
			v56 = (__m128) * (unsigned int*)(a1 + 1396);
			v56.m128_f32[0] = v56.m128_f32[0] + v2->m128_f32[3];
			v57 = (__m128) * (unsigned int*)(*(_QWORD*)(a1 + 1376) + 4 * v48);
			v57.m128_f32[0] = (float)((float)(v57.m128_f32[0] * *(float*)(*(_QWORD*)(a1 + 1256) + 952i64))
				+ *(float*)(a1 + 1400))
				+ v12;
			v69 = _mm_unpacklo_ps(_mm_unpacklo_ps(v56, (__m128)0i64), _mm_unpacklo_ps(v57, (__m128)0i64));
			sub_1401C95B0(&v71, (__m128i*) & v69);
			*(_DWORD*)(v3 + 16) = (_DWORD)v71;
			v72 = *(float*)&v13;
			v58 = v13 & 0x7FFFFFFF;
			if ((v13 & 0x7FFFFFFF) >= 0x33800000)
			{
				if (v58 > 0x387FEFFF)
				{
					if (v58 > 0x47FFEFFF)
						LOWORD(v59) = 17407;
					else
						v59 = (v58 - 939520000) >> 13;
				}
				else
				{
					v59 = (((v13 & 0x7FFFFF | 0x800000) >> (113 - (unsigned __int8)(v58 >> 23))) + 4096) >> 13;
				}
			}
			else
			{
				LOWORD(v59) = 0;
			}
			*(_WORD*)(v3 + 20) = WORD1(v13) & 0x8000 | v59;
			v60 = *(_QWORD*)(a1 + 1256);
			if (*(_WORD*)(v60 + 1028))
			{
				v61 = 0i64;
				v61.m128_f32[0] = (float)(int)v48 * *(float*)(a1 + 1536);
				v62 = _mm_unpacklo_ps(v61, (__m128)0i64);
				if ((*(_BYTE*)(v60 + 40) & 4) != 0)
				{
					v63 = (__m128)v2->m128_u32[3];
					v63.m128_f32[0] = (float)(v63.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
					v64 = v63;
				}
				else
				{
					v64 = (__m128)v2->m128_u32[3];
				}
				v65 = _mm_unpacklo_ps(_mm_unpacklo_ps(v64, (__m128)0x3F800000u), v62);
				sub_140325540((_WORD*)(v3 + 22), (unsigned int*)(a1 + 1168));
				v66 = _mm_mul_ps(*(__m128*)(a1 + 1456), v65);
				v66.m128_f32[0] = (float)(v66.m128_f32[0] + _mm_shuffle_ps(v66, v66, 85).m128_f32[0])
					+ _mm_shuffle_ps(v66, v66, 170).m128_f32[0];
				v67 = _mm_mul_ps(*(__m128*)(a1 + 1440), v65);
				v67.m128_f32[0] = (float)(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0])
					+ _mm_shuffle_ps(v67, v67, 170).m128_f32[0];
				v70 = _mm_unpacklo_ps(_mm_unpacklo_ps(v67, (__m128)0i64), _mm_unpacklo_ps(v66, (__m128)0i64));
				sub_1401C95B0(&v73, (__m128i*) & v70);
				*(float*)(v3 + 24) = v73;
			}
			result = *(unsigned int*)(a1 + 1432);
			v49 = (__m128)xmmword_140B7B470;
			v50 = (__m128)xmmword_140B7AC50;
			v48 = (unsigned int)(v48 + 1);
			v3 += result;
		} while ((unsigned int)v48 < *(_DWORD*)(a1 + 1372));
	}
	a2->m128_u64[0] = v3;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

