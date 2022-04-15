#include "../winhttp.h"

//----- (0000000140728000) ----------------------------------------------------
__int64 __fastcall sub_140728000(__int64 a1, double a2, float a3)
{
	unsigned int v3; // ebx
	int v7; // edx
	int v8; // eax
	__int64 result; // rax
	int v10; // eax
	unsigned int v11; // eax
	int* v12; // rdx
	__int64 v13; // rax
	int v14; // edx
	__int64 v15; // rax
	unsigned int v16; // edi
	__int64 v17; // rdi
	__int64 v18; // rcx
	_QWORD* v19; // rcx
	int v20; // eax
	int v21; // ecx
	unsigned int v22; // eax
	unsigned int v23; // ecx
	__int64* v24; // rcx
	__int64 v25; // rdx
	__int64* v26; // rax
	__int64* v27; // rcx
	__int64 v28; // rdx
	__int64* v29; // rax
	float v30; // xmm2_4
	float v31; // xmm1_4
	float v32; // xmm3_4
	float v33; // xmm2_4
	__m128* v34; // rbx
	float v35; // xmm0_4
	__m128 v36; // xmm1
	float v37; // xmm4_4
	__m128 v38; // xmm6
	__m128 v39; // xmm3
	__m128 v40; // xmm2
	float v41; // xmm2_4
	__m128 v42; // xmm2
	__m128 v43; // xmm0
	float v44; // xmm1_4
	_QWORD* v45; // rbx
	_QWORD* v46; // r14
	__int64 v47; // xmm0_8
	double v48; // xmm7_8
	__int64 v49; // rbx
	float v50; // xmm6_4
	float v51; // xmm0_4
	float v52; // xmm6_4
	int v53; // xmm1_4
	float v54; // xmm7_4
	float v55; // xmm0_4
	float v56; // xmm7_4
	__int64 v57; // rax
	__int64 v58; // rcx
	__m128 v59; // xmm5
	float v60; // xmm0_4
	int v61; // eax
	float v62; // xmm1_4
	__m128 v63; // xmm2
	__m128 v64; // xmm1
	__m128 v65; // xmm2
	__m128 v66; // xmm5
	float v67; // xmm0_4
	int v68; // eax
	__m128 v69; // xmm2
	__m128 v70; // xmm1
	__m128 v71; // xmm2
	__int64 v72; // rcx
	double v73; // xmm6_8
	__int64 v74; // rbx
	float v75; // xmm0_4
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rcx
	__int64 v79; // rcx
	__int64 v80; // [rsp+58h] [rbp-B0h] BYREF
	float v81; // [rsp+60h] [rbp-A8h]
	__m128 v82; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v83; // [rsp+78h] [rbp-90h] BYREF
	__m128 v84; // [rsp+88h] [rbp-80h] BYREF
	__int64 v85[10]; // [rsp+98h] [rbp-70h] BYREF

	v3 = dword_140C636A8;
	if (*(_DWORD*)(a1 + 20) == 1)
	{
		v7 = *(_DWORD*)(a1 + 24);
		if (v7 != -1)
		{
			v8 = dword_140C54650;
			if (*(_DWORD*)qword_140C63750 < dword_140C54650)
				v8 = *(_DWORD*)qword_140C63750;
			if (dword_140C636A8 >= (unsigned int)(v7 + dword_140C54660[v8]))
			{
				*(_DWORD*)(a1 + 20) = 11;
				return 0i64;
			}
		}
		if (!*(_DWORD*)(a1 + 12))
		{
			v84.m128_i32[0] = 0;
			if (*(_QWORD*)(a1 + 1168))
			{
				if (sub_14072AA70(a1, (__int64)&v84))
					*(_DWORD*)(a1 + 12) = 1;
			}
		}
		if (*(_DWORD*)(a1 + 16) && *(_DWORD*)(a1 + 12))
		{
			sub_14072ABC0(a1);
			v10 = dword_140C54730;
			if (*(_DWORD*)qword_140C63750 < dword_140C54730)
				v10 = *(_DWORD*)qword_140C63750;
			*(_DWORD*)(a1 + 1192) = dword_140C636A8 + dword_140C54740[v10];
		}
	}
	if (*(_BYTE*)(a1 + 1232))
	{
		*(_BYTE*)(a1 + 1232) = 0;
		sub_14072C180((_QWORD*)a1, 1);
	}
	if (*(_DWORD*)(a1 + 20) == 4)
	{
		v11 = *(_DWORD*)(a1 + 1192);
		if (v11 != -1 && v3 >= v11)
		{
			if (*(_DWORD*)(a1 + 1360))
			{
				if (dword_140C4B5A8)
				{
					v12 = &dword_140C4B5A8;
				LABEL_26:
					sub_14072AFA0(a1, v12);
				}
			}
			else if (dword_140C4B368)
			{
				v12 = &dword_140C4B368;
				goto LABEL_26;
			}
			*(_DWORD*)(a1 + 1192) = -1;
		}
	}
	v13 = *(_QWORD*)(a1 + 1472);
	if (*(_QWORD*)v13 != v13)
	{
		v14 = *(_DWORD*)(a1 + 1456);
		if (!v14 || !*(_DWORD*)(*(_QWORD*)v13 + 16i64))
		{
			v15 = *(_QWORD*)(a1 + 1472);
			v16 = *(_DWORD*)(*(_QWORD*)v15 + 16i64);
			if (v16)
			{
				if (*(_DWORD*)(a1 + 1480) <= v3 || (*(_BYTE*)(*(_QWORD*)v15 + 20i64) & 1) != 0)
				{
					v19 = *(_QWORD**)(a1 + 1440);
					*(_DWORD*)(a1 + 1456) = v14 + 1;
					sub_140712A40(v19, v16, (__int64)sub_14072AF70, a1);
					*(_DWORD*)(a1 + 1460) = v16;
					if (v16 != dword_140C4B5A8 && v16 != dword_140C4B368)
					{
						v20 = dword_140C54730;
						if (*(_DWORD*)qword_140C63750 < dword_140C54730)
							v20 = *(_DWORD*)qword_140C63750;
						v21 = dword_140C54740[v20];
						v22 = *(_DWORD*)(a1 + 1192);
						v23 = v3 + v21;
						if (v22 == -1)
						{
							*(_DWORD*)(a1 + 1192) = v23;
						}
						else
						{
							if (v22 < v23)
								v22 = v23;
							*(_DWORD*)(a1 + 1192) = v22;
						}
					}
				}
			}
			else
			{
				v17 = *(_QWORD*)(a1 + 1440);
				v18 = *(_QWORD*)(v17 + 56);
				if (v18 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 80i64))(v18))
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v17 + 56) + 72i64))(
						*(_QWORD*)(v17 + 56),
						100i64,
						2i64);
				*(_DWORD*)(a1 + 1460) = 0;
			}
			v24 = **(__int64***)(a1 + 1472);
			v25 = *v24;
			v26 = (__int64*)v24[1];
			*v26 = *v24;
			*(_QWORD*)(v25 + 8) = v26;
			sub_14018B900((__int64)v24, 0);
		}
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 1144) + 48i64))(*(_QWORD*)(a1 + 1144), v3, 0i64);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1160) + 296i64))(*(_QWORD*)(a1 + 1160), 1i64);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1160) + 320i64))(*(_QWORD*)(a1 + 1160), 1i64);
	while (**(_QWORD**)(a1 + 1496) != *(_QWORD*)(a1 + 1496))
	{
		if (*(_DWORD*)(**(_QWORD**)(a1 + 1496) + 16i64) > v3)
			break;
		sub_1400EA3E0(*(_QWORD*)(a1 + 1424), "TickClaimCount", byte_1409D15BF);
		v27 = **(__int64***)(a1 + 1496);
		v28 = *v27;
		v29 = (__int64*)v27[1];
		*v29 = *v27;
		*(_QWORD*)(v28 + 8) = v29;
		sub_14018B900((__int64)v27, 0);
	}
	(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 1160) + 872i64))(
		*(_QWORD*)(a1 + 1160),
		23i64,
		&v82);
	if (*(_DWORD*)(a1 + 1360))
	{
		v30 = *(float*)(a1 + 1304);
		v31 = *(float*)(a1 + 1320) - v30;
		if (fabs(v31) >= 0.0000099999997)
			v32 = (float)(v82.m128_f32[2] - v30) / v31;
		else
			v32 = 0.0;
		v33 = *(float*)(a1 + 1300);
		v34 = (__m128*)(a1 + 1376);
		v35 = *(float*)(a1 + 1316);
		v82.m128_f32[0] = (float)((float)(*(float*)(a1 + 1312) - *(float*)(a1 + 1296)) * v32) + *(float*)(a1 + 1296);
		v36 = *(__m128*)(a1 + 1344);
		v82.m128_f32[1] = (float)((float)(v35 - v33) * v32) + v33;
		*(__m128*)(a1 + 1376) = _mm_add_ps(v36, v82);
	}
	else if ((unsigned int)(*(_DWORD*)(a1 + 20) - 5) <= 1 || *(_DWORD*)(*(_QWORD*)(a1 + 1368) + 80i64) == 10)
	{
		v34 = (__m128*)(a1 + 1376);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 1160) + 872i64))(
			*(_QWORD*)(a1 + 1160),
			71i64,
			a1 + 1376);
	}
	else
	{
		v34 = (__m128*)(a1 + 1376);
		v37 = *(float*)&a2 * 3.0;
		v38 = *(__m128*)(a1 + 1376);
		v39 = _mm_sub_ps(v82, v38);
		v40 = _mm_mul_ps(v39, v39);
		v41 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
			+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
		if ((float)(v37 * v37) >= v41 || v41 <= 0.0000099999997)
		{
			*v34 = v82;
		}
		else
		{
			v42 = _mm_mul_ps(v39, v39);
			v43 = _mm_shuffle_ps(v42, v42, 85);
			v44 = _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
			v42.m128_f32[0] = v42.m128_f32[0] + v43.m128_f32[0];
			v43.m128_f32[0] = v37;
			v42.m128_f32[0] = 1.0 / fsqrt(v42.m128_f32[0] + v44);
			*v34 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v39), _mm_shuffle_ps(v43, v43, 0)), v38);
		}
	}
	*(__m128*)(*(_QWORD*)(a1 + 1368) + 64i64) = *v34;
	v45 = *(_QWORD**)(a1 + 1208);
	if (v45)
	{
		while (1)
		{
			result = (*(__int64(__fastcall**)(_QWORD*))(*v45 + 8i64))(v45);
			if ((int)result < 0)
				break;
			v45 = (_QWORD*)v45[2];
			if (!v45)
				goto LABEL_66;
		}
	}
	else
	{
	LABEL_66:
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1160) + 1056i64))(
			*(_QWORD*)(a1 + 1160),
			6i64))
		{
			v46 = (_QWORD*)(a1 + 1136);
			(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64*, __int64, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 1160) + 1064i64))(
				*(_QWORD*)(a1 + 1160),
				6i64,
				a1 + 944,
				&v80,
				a1 + 1136,
				a1 + 880,
				a1 + 944,
				0i64);
			if (a3 >= 1.7777778)
			{
				*(_QWORD*)&v48 = (unsigned int)v80;
			}
			else
			{
				v47 = (unsigned int)v80;
				*(float*)&v47 = sub_1408FD8A4(*(float*)&v80 * 0.5);
				HIDWORD(v48) = HIDWORD(v47);
				*(float*)&v48 = sub_140934E10(*(float*)&v47 * (float)(1.7777778 / a3)) * 2.0;
			}
			*(float*)&v48 = *(float*)&v48 * 0.5;
			v49 = a1 + 1008;
			v50 = sub_1408FC950(v48);
			v51 = sub_1408FE3D0(v48);
			*(_DWORD*)(a1 + 1048) = -1082129873;
			*(_DWORD*)(a1 + 1064) = -1138501162;
			v52 = v50 / v51;
			*(float*)(a1 + 1028) = v52;
			*(float*)(a1 + 1008) = v52 / a3;
			v53 = 1125515264;
		}
		else
		{
			v49 = a1 + 1008;
			v54 = sub_1408FC950(COERCE_DOUBLE(1048969216i64));
			v55 = sub_1408FE3D0(COERCE_DOUBLE(1048969216i64));
			*(_DWORD*)(a1 + 1048) = -1082130426;
			*(_DWORD*)(a1 + 1064) = -1138501871;
			v46 = (_QWORD*)(a1 + 1136);
			v56 = v54 / v55;
			*(float*)(a1 + 1028) = v56;
			*(float*)(a1 + 1008) = v56 / a3;
			v53 = 1181376512;
		}
		*(_QWORD*)(v49 + 4) = 0i64;
		*(_QWORD*)(v49 + 12) = 0i64;
		*(_QWORD*)(v49 + 24) = 0i64;
		*(_QWORD*)(v49 + 32) = 0i64;
		*(_DWORD*)(v49 + 44) = -1082130432;
		HIDWORD(v80) = v53;
		LODWORD(v80) = 1008981770;
		v57 = v80;
		*(_QWORD*)(v49 + 48) = 0i64;
		*(_DWORD*)(v49 + 60) = 0;
		v85[0] = v49;
		*v46 = v57;
		sub_1401AFC20(v85, (double*)(a1 + 1072));
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 80i64))(qword_140C65848, a1 + 944);
		(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD*, _DWORD))(**(_QWORD**)(a1 + 1144) + 80i64))(
			*(_QWORD*)(a1 + 1144),
			a1 + 880,
			a1 + 944,
			v46,
			0);
		v58 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v59 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 1328)), (__m128)0i64),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 1332)), (__m128)0i64));
		v60 = (float)*(int*)(v58 + 4);
		v61 = *(_DWORD*)(v58 + 12);
		v84.m128_f32[0] = (float)((float)((float)(v59.m128_f32[0] - (float)*(int*)v58) / (float)*(int*)(v58 + 8)) * 2.0)
			- 1.0;
		v62 = _mm_shuffle_ps(v59, v59, 85).m128_f32[0];
		v59.m128_f32[0] = _mm_shuffle_ps(v59, v59, 170).m128_f32[0] - *(float*)(v58 + 16);
		v84.m128_f32[1] = 1.0 - (float)((float)((float)(v62 - v60) / (float)v61) * 2.0);
		v84.m128_f32[2] = v59.m128_f32[0] / (float)(*(float*)(v58 + 20) - *(float*)(v58 + 16));
		v63 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v84, v84, 85), *(__m128*)(a1 + 1088)),
					_mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), *(__m128*)(a1 + 1072))),
				_mm_mul_ps(_mm_shuffle_ps(v84, v84, 170), *(__m128*)(a1 + 1104))),
			*(__m128*)(a1 + 1120));
		v64 = _mm_shuffle_ps(v63, v63, 255);
		v65 = _mm_div_ps(v63, _mm_shuffle_ps(v64, v64, 0));
		*(__m128*)(a1 + 1296) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), *(__m128*)(a1 + 944)),
					_mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), *(__m128*)(a1 + 960))),
				_mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), *(__m128*)(a1 + 976))),
			*(__m128*)(a1 + 992));
		v66 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 1328)), (__m128)0x3F800000u),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 1332)), (__m128)0i64));
		v67 = (float)*(int*)(v58 + 4);
		v68 = *(_DWORD*)(v58 + 12);
		v84.m128_f32[0] = (float)((float)((float)(v66.m128_f32[0] - (float)*(int*)v58) / (float)*(int*)(v58 + 8)) * 2.0)
			- 1.0;
		v64.m128_f32[0] = _mm_shuffle_ps(v66, v66, 85).m128_f32[0];
		v66.m128_f32[0] = _mm_shuffle_ps(v66, v66, 170).m128_f32[0] - *(float*)(v58 + 16);
		v84.m128_f32[1] = 1.0 - (float)((float)((float)(v64.m128_f32[0] - v67) / (float)v68) * 2.0);
		v84.m128_f32[2] = v66.m128_f32[0] / (float)(*(float*)(v58 + 20) - *(float*)(v58 + 16));
		v69 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v84, v84, 85), *(__m128*)(a1 + 1088)),
					_mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), *(__m128*)(a1 + 1072))),
				_mm_mul_ps(_mm_shuffle_ps(v84, v84, 170), *(__m128*)(a1 + 1104))),
			*(__m128*)(a1 + 1120));
		v70 = _mm_shuffle_ps(v69, v69, 255);
		v71 = _mm_div_ps(v69, _mm_shuffle_ps(v70, v70, 0));
		*(__m128*)(a1 + 1312) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v71, v71, 0), *(__m128*)(a1 + 944)),
					_mm_mul_ps(_mm_shuffle_ps(v71, v71, 85), *(__m128*)(a1 + 960))),
				_mm_mul_ps(_mm_shuffle_ps(v71, v71, 170), *(__m128*)(a1 + 976))),
			*(__m128*)(a1 + 992));
		v72 = *(_QWORD*)(a1 + 1248);
		if (v72)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v72 + 112i64))(v72, 0i64);
		if (!*(_QWORD*)(a1 + 1240))
			goto LABEL_76;
		*(_QWORD*)&v73 = (unsigned int)dword_140C3B438;
		v84.m128_u64[0] = 1065353216i64;
		v84.m128_i32[2] = 0;
		v80 = 0i64;
		v81 = 0.0;
		*(float*)&v73 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 60.0;
		v74 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v75 = sub_1408FE3D0(v73);
		v76 = *(_QWORD*)(a1 + 1240);
		v81 = (float)(v75 * 2.0) / (float)*(int*)(v74 + 12);
		v83 = 0i64;
		result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __m128*, __m128*, _DWORD, __int64*, __int128*, _DWORD))(*(_QWORD*)v76 + 56i64))(
			v76,
			(unsigned int)dword_140C636A8,
			43200i64,
			&v84,
			&v84,
			0,
			&v80,
			&v83,
			0);
		if ((int)result >= 0)
		{
		LABEL_76:
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1240) + 152i64))(*(_QWORD*)(a1 + 1240), a1 + 96);
			sub_1400E74A0(*(_QWORD*)(a1 + 1424), a2);
			v77 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v77)
			{
				if (*(_DWORD*)(v77 + 684))
				{
					sub_1407898E0(*(_QWORD*)(a1 + 1368));
					v78 = *(_QWORD*)(a1 + 1424);
					*(_DWORD*)(a1 + 20) = 13;
					sub_1400EA3E0(v78, "HideGachaUI", byte_1409D15F3);
					sub_14072B120(v79);
				}
			}
			return 0i64;
		}
	}
	return result;
}
// 140728A6A: variable 'v79' is possibly undefined
// 1409D15BF: using guessed type _BYTE byte_1409D15BF[52];
// 1409D15F3: using guessed type _BYTE byte_1409D15F3[26];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4B368: using guessed type int dword_140C4B368;
// 140C4B5A8: using guessed type int dword_140C4B5A8;
// 140C54650: using guessed type int dword_140C54650;
// 140C54660: using guessed type int dword_140C54660[16];
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140728000: using guessed type __int64 var_D0[10];

