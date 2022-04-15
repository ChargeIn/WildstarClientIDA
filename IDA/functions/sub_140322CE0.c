#include "../winhttp.h"

//----- (0000000140322CE0) ----------------------------------------------------
__int64 __fastcall sub_140322CE0(__int64 a1, __int64 a2, __m128* a3, __m128* a4, float a5, float a6, __m128* a7)
{
	__m128 v7; // xmm8
	__m128 v8; // xmm4
	__m128 v13; // xmm8
	__m128 v14; // xmm11
	__m128 v15; // xmm3
	__m128 v16; // xmm14
	__m128 v17; // xmm3
	__m128 v18; // xmm6
	__int64 v19; // rdx
	char v20; // al
	float v21; // xmm4_4
	__m128 v22; // xmm2
	__m128* v23; // rsi
	int v24; // eax
	double v25; // xmm10_8
	double v26; // xmm0_8
	float v27; // xmm15_4
	double v28; // xmm0_8
	__int64* v29; // rcx
	__int64 v30; // rax
	double v31; // xmm0_8
	__int64* v32; // rcx
	__int64 v33; // rax
	double v34; // xmm0_8
	float v35; // xmm6_4
	double v36; // xmm0_8
	float v37; // xmm7_4
	double v38; // xmm0_8
	float v39; // xmm3_4
	float v40; // xmm4_4
	float v41; // xmm5_4
	float v42; // xmm8_4
	float v43; // xmm7_4
	double v44; // xmm13_8
	double v45; // xmm2_8
	float v46; // xmm6_4
	float v47; // xmm6_4
	float v48; // xmm0_4
	double v49; // xmm0_8
	__int64 v50; // rax
	float v51; // xmm4_4
	float v52; // xmm1_4
	__int64 v53; // rax
	float v54; // xmm2_4
	float v55; // xmm2_4
	__int64 result; // rax
	__int64 v57; // rcx
	__m128 v58; // xmm7
	__int64 v59; // rsi
	__m128 v60; // xmm2
	_DWORD* v61; // rcx
	__m128i v62; // xmm1
	__m128 v63; // xmm0
	__m128 v64; // xmm0
	__m128 v65; // xmm3
	__m128i v66; // xmm1
	__m128i v67; // xmm1
	__m128 v68; // xmm2
	unsigned int v69; // edx
	unsigned int v70; // edx
	__int64 v71; // rax
	__m128 v72; // xmm1
	__m128 v73; // xmm3
	__m128 v74; // xmm4
	__m128 v75; // xmm6
	__m128 v76; // xmm2
	__m128 v77; // xmm3
	__m128 v78; // [rsp+20h] [rbp-128h]
	__m128 v79; // [rsp+30h] [rbp-118h]
	__m128 v80; // [rsp+40h] [rbp-108h]
	__m128 v81; // [rsp+50h] [rbp-F8h] BYREF
	__m128 v82; // [rsp+60h] [rbp-E8h] BYREF
	__m128 v83; // [rsp+70h] [rbp-D8h]
	unsigned __int32 v84; // [rsp+150h] [rbp+8h]
	unsigned int v85; // [rsp+160h] [rbp+18h] BYREF
	float v86; // [rsp+168h] [rbp+20h]

	v8 = (__m128)a3->m128_u32[1];
	v7.m128_f32[0] = a5;
	v13 = _mm_shuffle_ps(v7, v7, 0);
	v14 = (__m128)a4->m128_u32[3];
	v78 = v13;
	v79 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[5], a3[5]), v13), a3[5]);
	v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] - a3->m128_f32[3]) * a5) + a3->m128_f32[3];
	v15 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a3[2].m128_u32[0], (__m128)a3[2].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a3[2].m128_u32[1], v8));
	v16 = _mm_mul_ps(
		_mm_add_ps(
			_mm_mul_ps(
				_mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)a4[2].m128_u32[0], (__m128)a4[2].m128_u32[2]),
						_mm_unpacklo_ps((__m128)a4[2].m128_u32[1], (__m128)a4->m128_u32[1])),
					v15),
				v13),
			v15),
		*a7);
	v17 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a3[3].m128_u32[0], (__m128)a3[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a3[3].m128_u32[1], v8));
	v22 = (__m128)a4->m128_u32[2];
	v22.m128_f32[0] = (float)(v22.m128_f32[0] - a3->m128_f32[2]) * a5;
	v80 = _mm_mul_ps(
		_mm_add_ps(
			_mm_mul_ps(
				_mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)a4[3].m128_u32[0], (__m128)a4[3].m128_u32[2]),
						_mm_unpacklo_ps((__m128)a4[3].m128_u32[1], (__m128)a4->m128_u32[1])),
					v17),
				v13),
			v17),
		*a7);
	v18.m128_u64[0] = COERCE_UNSIGNED_INT((float)(a4[1].m128_i32[2] - a3[1].m128_i32[2]));
	v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] * a5) + (float)a3[1].m128_i32[2]) * *(float*)(a1 + 1524);
	LODWORD(a7) = v18.m128_i32[0];
	v22.m128_f32[0] = v22.m128_f32[0] + a3->m128_f32[2];
	v19 = *(_QWORD*)(a1 + 1256);
	v85 = 0;
	v20 = *(_BYTE*)(v19 + 1072);
	v21 = 0.0;
	v22.m128_f32[0] = v22.m128_f32[0] * a6;
	a5 = 0.0;
	v84 = v22.m128_i32[0];
	if (v20)
	{
		if (v20 == 1)
		{
			v23 = (__m128*) & a5;
		}
		else if (v20 == 2)
		{
			v23 = (__m128*) & v85;
		}
		else
		{
			v23 = a7;
		}
		v24 = *(_DWORD*)(v19 + 40);
		v25 = *(double*)v18.m128_u64;
		if ((v24 & 0x1000) == 0)
			*(float*)&v25 = v18.m128_f32[0] * *(float*)(a1 + 1392);
		if ((v24 & 0x800) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56), a4[1].m128_u32[1]);
			v26 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v27 = *(float*)&v26;
			v28 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v29 = *(__int64**)(a1 + 56);
			v30 = *v29;
			v86 = *(float*)&v28;
			v31 = (*(double(__fastcall**)(__int64*))(v30 + 56))(v29);
			v32 = *(__int64**)(a1 + 56);
			v33 = *v32;
			a6 = *(float*)&v31;
			v34 = (*(double(__fastcall**)(__int64*))(v33 + 56))(v32);
			v35 = *(float*)&v34;
			v36 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v37 = *(float*)&v36;
			v38 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v39 = *(float*)(a1 + 1200);
			v44 = v25;
			HIDWORD(v45) = HIDWORD(v25);
			v40 = *(float*)&v38;
			LODWORD(v38) = *(_DWORD*)(a1 + 1232);
			v41 = (float)*(int*)(a1 + 1336);
			*(float*)&v45 = (float)((float)(*(float*)&v25 * 1.5) * v39) + v37;
			*(float*)&v25 = (float)((float)((float)(*(float*)&v25 * 0.89999998) * v39) + v40)
				+ (float)((float)(*(float*)&v38 * 0.89999998) * v41);
			v42 = v86;
			v43 = (float)(v86 + v27) + a6;
			*(float*)&v44 = (float)((float)((float)(*(float*)&v44 * 2.0) * v39) + v35)
				+ (float)((float)(*(float*)&v38 * 2.0) * v41);
			*(float*)&v45 = *(float*)&v45 + (float)((float)(*(float*)&v38 * 1.5) * v41);
			if (v43 == 0.0)
			{
				v18.m128_i32[0] = (int)a7;
				v13 = v78;
				v23->m128_i32[0] = 0;
			}
			else
			{
				v46 = sub_1408FE3D0(v45) * v42;
				v47 = v46 + (float)(sub_1408FE3D0(v44) * v27);
				v48 = sub_1408FE3D0(v25);
				v13 = v78;
				v23->m128_f32[0] = (float)((float)(v47 + (float)(v48 * a6)) * *(float*)(a1 + 1216)) / v43;
				v18.m128_i32[0] = (int)a7;
			}
		}
		else
		{
			HIDWORD(v49) = 0;
			*(float*)&v49 = (float)((float)*(int*)(a1 + 1336) * *(float*)(a1 + 1232))
				+ (float)(*(float*)&v25 * *(float*)(a1 + 1200));
			v23->m128_f32[0] = sub_1408FE3D0(v49) * *(float*)(a1 + 1216);
		}
		v50 = *(_QWORD*)(a1 + 1256);
		v51 = v23->m128_f32[0];
		if ((*(_DWORD*)(v50 + 40) & 0x2000) != 0)
		{
			v52 = *(float*)(v50 + 948) == 0.0
				? 0.0
				: fabs((float)(v14.m128_f32[0] - *(float*)(*(_QWORD*)(a1 + 1416) + 12i64)) * *(float*)(a1 + 1528));
			if (v52 < *(float*)(a1 + 1184))
				v23->m128_f32[0] = fmaxf(0.0, fminf(v52 * *(float*)(a1 + 1520), 1.0)) * v51;
		}
		v53 = *(_QWORD*)(a1 + 1256);
		if ((*(_DWORD*)(v53 + 40) & 0x4000) != 0)
		{
			v54 = *(float*)(v53 + 948) == 0.0
				? 0.0
				: fabs((float)(v14.m128_f32[0] - *(float*)(*(_QWORD*)(a1 + 1424) + 12i64)) * *(float*)(a1 + 1528));
			if (v54 < *(float*)(a1 + 1184))
			{
				v55 = fmaxf(0.0, fminf(v54 * *(float*)(a1 + 1520), 1.0)) * v51;
				if (fabs(v55) < fabs(v23->m128_f32[0]))
					v23->m128_f32[0] = v55;
			}
		}
		v22 = (__m128)v84;
		v21 = a5;
	}
	result = *(_QWORD*)(a1 + 1256);
	if (*(_BYTE*)(result + 1072) == 2)
	{
		v57 = (unsigned int)(*(_DWORD*)(a1 + 1372) - 1) + 7i64;
		v58 = _mm_mul_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_add_ps(_mm_sub_ps(_mm_sub_ps(a4[v57], a3[v57]), a4[7]), a3[7]), v13),
				_mm_sub_ps(a3[v57], a3[7])),
			_mm_shuffle_ps((__m128)v85, (__m128)v85, 0));
	}
	else
	{
		v58 = 0i64;
	}
	v59 = 0i64;
	if (*(_DWORD*)(a1 + 1372))
	{
		v60 = _mm_shuffle_ps(v22, v22, 0);
		v83 = v60;
		do
		{
			v61 = *(_DWORD**)a2;
			v62 = (__m128i)_mm_add_ps(
				_mm_mul_ps(
					_mm_sub_ps(
						_mm_sub_ps(
							_mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[v59 + 7], a3[v59 + 7]), v78), a3[v59 + 7]),
							v58),
						v79),
					v60),
				v79);
			*v61 = _mm_cvtsi128_si32(v62);
			v61[1] = _mm_cvtsi128_si32(_mm_srli_si128(v62, 4));
			v61[2] = _mm_cvtsi128_si32(_mm_srli_si128(v62, 8));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
			{
				v63 = 0i64;
				v63.m128_f32[0] = (float)(int)v59;
				v64 = _mm_max_ps(
					(__m128)0i64,
					_mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 1536), (__m128) * (unsigned int*)(a1 + 1536), 0),
							_mm_mul_ps(_mm_sub_ps(v80, v16), _mm_shuffle_ps(v63, v63, 0))),
						v16));
			}
			else
			{
				v64 = _mm_max_ps((__m128)0i64, v16);
			}
			v65 = v14;
			v66 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(_mm_min_ps(v64, (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v67 = _mm_packus_epi16(v66, v66);
			*(_DWORD*)(*(_QWORD*)a2 + 12i64) = _mm_cvtsi128_si32(_mm_packus_epi16(v67, v67));
			v65.m128_f32[0] = v14.m128_f32[0] + *(float*)(a1 + 1396);
			v68 = (__m128) * (unsigned int*)(*(_QWORD*)(a1 + 1376) + 4 * v59);
			v68.m128_f32[0] = (float)((float)(v68.m128_f32[0] * *(float*)(*(_QWORD*)(a1 + 1256) + 952i64))
				+ *(float*)(a1 + 1400))
				+ v21;
			v81 = _mm_unpacklo_ps(_mm_unpacklo_ps(v65, (__m128)0i64), _mm_unpacklo_ps(v68, (__m128)0i64));
			sub_1401C95B0(&a6, (__m128i*) & v81);
			*(float*)(*(_QWORD*)a2 + 16i64) = a6;
			v69 = v18.m128_i32[0] & 0x7FFFFFFF;
			if ((v18.m128_i32[0] & 0x7FFFFFFFu) >= 0x33800000)
			{
				if (v69 > 0x387FEFFF)
				{
					if (v69 > 0x47FFEFFF)
						LOWORD(v70) = 17407;
					else
						v70 = (v69 - 939520000) >> 13;
				}
				else
				{
					v70 = (((v18.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v69 >> 23))) + 4096) >> 13;
				}
			}
			else
			{
				LOWORD(v70) = 0;
			}
			*(_WORD*)(*(_QWORD*)a2 + 20i64) = v18.m128_i16[1] & 0x8000 | v70;
			v71 = *(_QWORD*)(a1 + 1256);
			if (*(_WORD*)(v71 + 1028))
			{
				v72 = 0i64;
				v72.m128_f32[0] = (float)(int)v59 * *(float*)(a1 + 1536);
				v73 = _mm_unpacklo_ps(v72, (__m128)0i64);
				if ((*(_BYTE*)(v71 + 40) & 4) != 0)
				{
					v74 = v14;
					v74.m128_f32[0] = (float)(v14.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
					v75 = v74;
				}
				else
				{
					v75 = v14;
				}
				v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v75, (__m128)0x3F800000u), v73);
				sub_140325540((_WORD*)(*(_QWORD*)a2 + 22i64), (unsigned int*)(a1 + 1168));
				v76 = _mm_mul_ps(*(__m128*)(a1 + 1456), v18);
				v76.m128_f32[0] = (float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
					+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0];
				v77 = _mm_mul_ps(*(__m128*)(a1 + 1440), v18);
				v77.m128_f32[0] = (float)(v77.m128_f32[0] + _mm_shuffle_ps(v77, v77, 85).m128_f32[0])
					+ _mm_shuffle_ps(v77, v77, 170).m128_f32[0];
				v82 = _mm_unpacklo_ps(_mm_unpacklo_ps(v77, (__m128)0i64), _mm_unpacklo_ps(v76, (__m128)0i64));
				sub_1401C95B0(&v85, (__m128i*) & v82);
				v18.m128_i32[0] = (int)a7;
				*(_DWORD*)(*(_QWORD*)a2 + 24i64) = v85;
			}
			result = *(unsigned int*)(a1 + 1432);
			v60 = v83;
			v21 = a5;
			*(_QWORD*)a2 += result;
			v59 = (unsigned int)(v59 + 1);
		} while ((unsigned int)v59 < *(_DWORD*)(a1 + 1372));
	}
	return result;
}
// 140322D7F: variable 'v7' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

