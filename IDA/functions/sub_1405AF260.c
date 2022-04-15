//----- (00000001405AF260) ----------------------------------------------------
__int64 __fastcall sub_1405AF260(__int64 a1)
{
	__int64 v2; // r12
	__int64 v3; // rax
	_QWORD* v4; // rsi
	__int64 v5; // rcx
	__int64* v6; // r13
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // rax
	unsigned int v11; // ecx
	unsigned int* v12; // rax
	__m128 v13; // xmm0
	__m128 v14; // xmm2
	__m128 v15; // xmm4
	__m128 v16; // xmm4
	float v17; // xmm5_4
	float v18; // xmm1_4
	float v19; // xmm10_4
	float v20; // xmm9_4
	float v21; // xmm7_4
	float v22; // xmm3_4
	float v23; // xmm8_4
	float v24; // xmm11_4
	__m128 v25; // xmm0
	__m128 v26; // xmm13
	__int64 v27; // rax
	__int64 v28; // r8
	unsigned int v29; // eax
	unsigned int v30; // r12d
	unsigned __int64 v31; // rbx
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rax
	_DWORD* v36; // rax
	unsigned int v37; // r14d
	unsigned int v38; // ecx
	int v39; // esi
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rbx
	float v43; // eax
	_QWORD* v44; // rdx
	__m128 v45; // xmm10
	int v46; // r14d
	int v47; // r12d
	__m128 v48; // xmm2
	__m128 v49; // xmm4
	__m128 v50; // xmm8
	__m128 v51; // xmm7
	float v52; // xmm0_4
	__m128 v53; // xmm7
	float v54; // xmm0_4
	__m128 v55; // xmm7
	__m128 v56; // xmm0
	__m128 v57; // xmm4
	__m128 v58; // xmm0
	__m128 v59; // xmm5
	__int64 v60; // rax
	int* v61; // rdx
	__int64 v62; // rbx
	int v63; // eax
	_QWORD* i; // rsi
	__int64 v65; // rbx
	int v66; // eax
	__int64 v67; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v68; // [rsp+48h] [rbp-C0h]
	unsigned int v69; // [rsp+58h] [rbp-B0h]
	unsigned int v70; // [rsp+5Ch] [rbp-ACh]
	unsigned __int64 v71; // [rsp+60h] [rbp-A8h]
	__int64 v72; // [rsp+68h] [rbp-A0h]
	__int64 v73; // [rsp+70h] [rbp-98h] BYREF
	__m256 v74; // [rsp+78h] [rbp-90h] BYREF
	__int128 v75; // [rsp+98h] [rbp-70h]
	__m128 v76; // [rsp+A8h] [rbp-60h]
	__m256 v77; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v78; // [rsp+D8h] [rbp-30h]
	__m128 v79; // [rsp+E8h] [rbp-20h]
	__m128* v80; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v81; // [rsp+100h] [rbp-8h]
	__int64 v82; // [rsp+108h] [rbp+0h]
	__int64 v83; // [rsp+110h] [rbp+8h]
	__m128* v84; // [rsp+118h] [rbp+10h]
	__m256* v85; // [rsp+120h] [rbp+18h]
	__int64* v86; // [rsp+128h] [rbp+20h]
	__int64 v87; // [rsp+130h] [rbp+28h] BYREF
	__m128 v88[4]; // [rsp+138h] [rbp+30h] BYREF
	__m128* v89; // [rsp+178h] [rbp+70h] BYREF
	__m256* v90; // [rsp+180h] [rbp+78h]
	__m128 v91[4]; // [rsp+188h] [rbp+80h] BYREF
	__m128 v92; // [rsp+1C8h] [rbp+C0h] BYREF
	__int128 v93[4]; // [rsp+1D8h] [rbp+D0h] BYREF
	__m128* v94; // [rsp+218h] [rbp+110h] BYREF
	__m256* v95; // [rsp+220h] [rbp+118h]
	__m128 v96[4]; // [rsp+228h] [rbp+120h] BYREF
	__m128* v97[10]; // [rsp+268h] [rbp+160h] BYREF

	v86 = *(__int64**)(qword_140C65898 + 29256);
	v2 = (__int64)v86;
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
	v4 = (_QWORD*)(a1 + 288);
	v5 = *(_QWORD*)(a1 + 288);
	v6 = (__int64*)v3;
	if (v5 || *(_QWORD*)(a1 + 296))
	{
		(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)v5
			+ 648i64))(
				v5,
				sub_1405B0190,
				a1);
		v62 = *v4;
		v63 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		LODWORD(v77.m256_f32[0]) = 1334;
		memset(&v77.m256_f32[3], 0, 20);
		LODWORD(v77.m256_f32[1]) = (int)((double)v63 * 2.328306436538696e-10 * 4294967296.0);
		v77.m256_f32[2] = 1.0;
		(*(void(__fastcall**)(__int64, _QWORD, __m256*))(*(_QWORD*)v62 + 584i64))(v62, 0i64, &v77);
		for (i = *(_QWORD**)(a1 + 312); i != *(_QWORD**)(a1 + 320); ++i)
		{
			v65 = *i;
			if (*i)
				(**(void(__fastcall***)(_QWORD))v65)(*i);
			(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)v65 + 648i64))(
				v65,
				sub_1405B0190,
				a1);
			v66 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
			LODWORD(v77.m256_f32[0]) = 1334;
			*(_OWORD*)&v77.m256_f32[2] = 0x40000000ui64;
			*(_QWORD*)&v77.m256_f32[6] = 0i64;
			LODWORD(v77.m256_f32[1]) = (int)((double)v66 * 2.328306436538696e-10 * 4294967296.0);
			(*(void(__fastcall**)(__int64, _QWORD, __m256*))(*(_QWORD*)v65 + 584i64))(v65, 0i64, &v77);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v65 + 8i64))(v65);
		}
		return 0i64;
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)v3 + 40i64))(
		v3,
		L"Art\\FX\\Model\\Props\\CylinderForcefield_AQU\\CylinderForcefield_100_AQU.m3",
		a1 + 288,
		0i64) < 0)
		return 2147500037i64;
	if (*v4)
	{
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)*v4
			+ 648i64))(
				*v4,
				sub_1405B0190,
				a1);
		v8 = *v4;
		v9 = sub_1401AE6F0(0, -1);
		LODWORD(v80) = 1334;
		v81 = 1065353216i64;
		v82 = 0i64;
		v83 = 0i64;
		HIDWORD(v80) = v9;
		(*(void(__fastcall**)(__int64, _QWORD, __m128**))(*(_QWORD*)v8 + 584i64))(v8, 0i64, &v80);
	}
	v10 = sub_1402070A0(*(_DWORD*)(a1 + 64));
	if (!v10)
		return 2147500037i64;
	v11 = *(_DWORD*)(v10 + 24);
	if (!v11)
		return 2147500037i64;
	v12 = (unsigned int*)sub_14024B980(v11);
	if (!v12)
		return 2147500037i64;
	v13 = (__m128)v12[5];
	v14 = (__m128)v12[4];
	v15 = (__m128)v12[3];
	v74.m256_f32[3] = 0.0;
	v16 = _mm_sub_ps(
		_mm_unpacklo_ps(_mm_unpacklo_ps(v15, v13), _mm_unpacklo_ps(v14, (__m128)0i64)),
		(__m128)xmmword_140B7A530);
	v17 = _mm_shuffle_ps((__m128)xmmword_140C78450, (__m128)xmmword_140C78450, 85).m128_f32[0];
	v79 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v16, _mm_shuffle_ps(v16, v16, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v16, v16, 85), (__m128)0x3F800000u));
	v18 = _mm_shuffle_ps((__m128)xmmword_140C78450, (__m128)xmmword_140C78450, 170).m128_f32[0];
	v19 = (float)(*(float*)&xmmword_140C78450 * 2.0) * *(float*)&xmmword_140C78450;
	v13.m128_f32[0] = _mm_shuffle_ps((__m128)xmmword_140C78450, (__m128)xmmword_140C78450, 255).m128_f32[0];
	v77 = ymmword_140C78410;
	v20 = (float)(*(float*)&xmmword_140C78450 * 2.0) * v13.m128_f32[0];
	v21 = (float)(v17 * 2.0) * v13.m128_f32[0];
	v22 = (float)(v18 * 2.0) * v13.m128_f32[0];
	v78 = xmmword_140C78430;
	v23 = (float)(v18 * 2.0) * v18;
	v24 = (float)(v17 * 2.0) * v17;
	v16.m128_f32[0] = (float)(v18 * 2.0) * v17;
	v74.m256_f32[2] = (float)((float)(v18 * 2.0) * *(float*)&xmmword_140C78450) - v21;
	v74.m256_f32[0] = (float)(1.0 - v24) - v23;
	v74.m256_f32[6] = v16.m128_f32[0] + v20;
	v13.m128_f32[0] = (float)(v17 * 2.0) * *(float*)&xmmword_140C78450;
	v74.m256_f32[4] = v13.m128_f32[0] - v22;
	v74.m256_f32[1] = v13.m128_f32[0] + v22;
	v74.m256_f32[5] = (float)(1.0 - v19) - v23;
	v76 = (__m128)xmmword_140B7AD00;
	v92.m128_i32[0] = 1067030938;
	v93[0] = (__int128)_mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, (__m128)xmmword_140B7B2B0);
	v74.m256_f32[7] = 0.0;
	*(unsigned __int64*)((char*)v92.m128_u64 + 4) = 0x3F99999A3F4CCCCDi64;
	v25 = _mm_shuffle_ps((__m128)0x3F4CCCCDu, (__m128)0x3F4CCCCDu, 0);
	v26 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v25);
	HIDWORD(v75) = 0;
	v25.m128_f32[0] = 1.2;
	*(float*)&v75 = (float)((float)(v18 * 2.0) * *(float*)&xmmword_140C78450) + v21;
	v93[1] = (__int128)v26;
	*((float*)&v75 + 1) = v16.m128_f32[0] - v20;
	*((float*)&v75 + 2) = (float)(1.0 - v19) - v24;
	v90 = &v74;
	v93[3] = xmmword_140C78440;
	v93[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v25, v25, 0));
	v89 = (__m128*)v93;
	sub_1401AFB10(&v89, v91);
	*(_QWORD*)&v68 = v91;
	*((_QWORD*)&v68 + 1) = &v77;
	v94 = v91;
	v95 = &v77;
	sub_1401AFB10(&v94, v88);
	v27 = *(_QWORD*)v2;
	v28 = *v4;
	v73 = 0i64;
	if ((*(int(__fastcall**)(__int64, __m128*, __int64, __int64*, __int64, _QWORD))(v27 + 200))(
		v2,
		v88,
		v28,
		&v73,
		a1 + 296,
		0i64) < 0)
		return 2147500037i64;
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 296) + 296i64))(*(_QWORD*)(a1 + 296), 0i64);
	v29 = 0;
	v70 = 0;
	if (!*(_DWORD*)(a1 + 272))
		return 0i64;
	v30 = v68;
	v69 = v68;
	v71 = *((_QWORD*)&v68 + 1);
	LODWORD(v72) = DWORD1(v68);
	while (1)
	{
		v31 = v29;
		v32 = v29 >= (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 256) - *(_QWORD*)(a1 + 248)) >> 3)
			? 0i64
			: *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8i64 * v29);
		v33 = sub_140206C60(*(_DWORD*)(v32 + 4));
		if (v33)
		{
			if (*(_DWORD*)(v33 + 208) == 2)
				break;
		}
	LABEL_52:
		v29 = v70 + 1;
		v70 = v29;
		if (v29 >= *(_DWORD*)(a1 + 272))
			return 0i64;
	}
	if (v31 >= (__int64)(*(_QWORD*)(a1 + 256) - *(_QWORD*)(a1 + 248)) >> 3)
		v34 = 0i64;
	else
		v34 = *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8 * v31);
	v35 = sub_140205FA0(*(_DWORD*)(v34 + 12));
	if (v35)
	{
		v36 = (_DWORD*)sub_14024C200(*(_DWORD*)(v35 + 4));
		if (v36)
		{
			v30 = v36[2];
			v37 = v36[5];
			LODWORD(v72) = v36[3];
			v38 = v36[4];
			v69 = v30;
			v71 = __PAIR64__(v37, v38);
		}
	}
	v39 = 0;
	while (1)
	{
		v40 = *v6;
		v67 = 0i64;
		if ((*(int(__fastcall**)(__int64*, const wchar_t*, __int64*, _QWORD))(v40 + 40))(
			v6,
			L"Art\\FX\\Model\\Props\\Forcefield_AQU\\Forcefield_01_AQU.m3",
			&v67,
			0i64) < 0)
			break;
		v41 = v67;
		if (!v67)
			goto LABEL_34;
		(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)v67
			+ 648i64))(
				v67,
				sub_1405B0190,
				a1);
		v42 = v67;
		LODWORD(v43) = sub_1401AE6F0(0, -1);
		LODWORD(v77.m256_f32[0]) = 1334;
		*(_OWORD*)&v77.m256_f32[2] = 0x3F800000ui64;
		*(_QWORD*)&v77.m256_f32[6] = 0i64;
		v77.m256_f32[1] = v43;
		(*(void(__fastcall**)(__int64, _QWORD, __m256*))(*(_QWORD*)v42 + 584i64))(v42, 0i64, &v77);
		v44 = *(_QWORD**)(a1 + 320);
		if (v44 != *(_QWORD**)(a1 + 328))
		{
			if (!v44)
				goto LABEL_31;
			*v44 = v67;
			v41 = v67;
			if (v67)
			{
				(**(void(__fastcall***)(__int64))v67)(v67);
			LABEL_31:
				v41 = v67;
			}
			*(_QWORD*)(a1 + 320) += 8i64;
			goto LABEL_34;
		}
		sub_1405B1D60((_QWORD*)(a1 + 304), v44, &v67);
		v41 = v67;
	LABEL_34:
		v45 = (__m128)xmmword_140C78440;
		v46 = v71 - v30;
		v47 = HIDWORD(v71) - v72;
		v49 = (__m128)COERCE_UNSIGNED_INT((float)(HIDWORD(v71) - v72));
		v50 = (__m128)COERCE_UNSIGNED_INT((float)v46);
		v48 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v69), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v72), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v49.m128_f32[0] = (float)(v49.m128_f32[0] * *(float*)&dword_140C4A148) * 0.5;
		v50.m128_f32[0] = (float)(v50.m128_f32[0] * *(float*)&dword_140C4A148) * 0.5;
		v74 = ymmword_140C78390;
		v51 = _mm_add_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v50, v49), (__m128)0i64),
			_mm_unpacklo_ps(_mm_unpacklo_ps(v48, _mm_shuffle_ps(v48, v48, 85)), (__m128)xmmword_140B7A3C0));
		v75 = xmmword_140C783B0;
		v68 = xmmword_140B7A750;
		v76 = (__m128)xmmword_140C783C0;
		if (v39)
		{
			if (v39 == 1)
			{
				v53 = _mm_sub_ps(v51, _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v49), (__m128)0i64));
			}
			else if (v39 == 2)
			{
				sub_1408FE3D0(COERCE_DOUBLE(1070141403i64));
				v54 = sub_1408FC950(COERCE_DOUBLE(1070141403i64));
				*(_QWORD*)&v75 = 1070141403i64;
				*(_QWORD*)v74.m256_f32 = LODWORD(v54);
				*((_QWORD*)&v75 + 1) = LODWORD(v54);
				v76 = v45;
				*(_QWORD*)&v74.m256_f32[2] = 3217625051i64;
				*(_OWORD*)&v74.m256_f32[4] = xmmword_140B7A4B0;
				v53 = _mm_add_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v50, (__m128)0i64), (__m128)0i64), v51);
				if (v46 != v47)
					v68 = xmmword_140B7A7A0;
			}
			else
			{
				v53 = _mm_add_ps(_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v49), (__m128)0i64), v51);
			}
		}
		else
		{
			sub_1408FE3D0(COERCE_DOUBLE(1070141403i64));
			v52 = sub_1408FC950(COERCE_DOUBLE(1070141403i64));
			*(_QWORD*)&v75 = 1070141403i64;
			*(_QWORD*)v74.m256_f32 = LODWORD(v52);
			*((_QWORD*)&v75 + 1) = LODWORD(v52);
			v76 = v45;
			*(_QWORD*)&v74.m256_f32[2] = 3217625051i64;
			*(_OWORD*)&v74.m256_f32[4] = xmmword_140B7A4B0;
			v53 = _mm_sub_ps(v51, _mm_unpacklo_ps(_mm_unpacklo_ps(v50, (__m128)0i64), (__m128)0i64));
			if (v46 != v47)
				v68 = xmmword_140B7A7A0;
		}
		v55 = _mm_sub_ps(v53, (__m128)xmmword_140B7A4F0);
		v84 = v91;
		v85 = &v74;
		v77 = ymmword_140C78410;
		v89 = (__m128*)v68;
		v78 = xmmword_140C78430;
		v91[3] = v45;
		v56 = _mm_shuffle_ps((__m128)(unsigned int)v68, (__m128)(unsigned int)v68, 0);
		v57 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v56);
		v79 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v55, _mm_shuffle_ps(v55, v55, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v55, v55, 85), (__m128)0x3F800000u));
		v56.m128_f32[0] = *((float*)&v68 + 1);
		v58 = _mm_shuffle_ps(v56, v56, 0);
		v91[0] = v57;
		v95 = &v74;
		v59 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v58);
		v58.m128_f32[0] = *((float*)&v68 + 2);
		LODWORD(v90) = DWORD2(v68);
		v91[1] = v59;
		v94 = v91;
		v91[2] = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v58, v58, 0));
		sub_1401AFB10(&v94, v96);
		v80 = v96;
		v97[0] = v96;
		v81 = (__int64)&v77;
		v97[1] = (__m128*) & v77;
		sub_1401AFB10(v97, &v92);
		v60 = *v86;
		v87 = 0i64;
		if ((*(int(__fastcall**)(__int64*, __m128*, __int64, __int64*, __int64*, _QWORD))(v60 + 200))(
			v86,
			&v92,
			v41,
			&v87,
			&v73,
			0i64) < 0)
			break;
		v61 = *(int**)(a1 + 352);
		if (v61 == *(int**)(a1 + 360))
		{
			sub_1400B9430((_QWORD*)(a1 + 336), v61, &v73);
		}
		else
		{
			if (v61)
				*(_QWORD*)v61 = v73;
			*(_QWORD*)(a1 + 352) += 8i64;
		}
		if (v67)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v67 + 8i64))(v67);
		v30 = v69;
		if ((unsigned int)++v39 >= 4)
			goto LABEL_52;
	}
	if (v67)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v67 + 8i64))(v67);
	return 2147500037i64;
}
// 1405AFA65: conditional instruction was optimized away because esi.4==3
// 140B21140: using guessed type wchar_t aArtFxModelProp_18[72];
// 140B211D0: using guessed type wchar_t aArtFxModelProp_19[55];
// 140B7A3C0: using guessed type __int128 xmmword_140B7A3C0;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A4F0: using guessed type __int128 xmmword_140B7A4F0;
// 140B7A530: using guessed type __int128 xmmword_140B7A530;
// 140B7A750: using guessed type __int128 xmmword_140B7A750;
// 140B7A7A0: using guessed type __int128 xmmword_140B7A7A0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B2B0: using guessed type __int128 xmmword_140B7B2B0;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A148: using guessed type int dword_140C4A148;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 1405AF260: using guessed type __m128 var_250[4];
// 1405AF260: using guessed type __m128 var_160[4];

