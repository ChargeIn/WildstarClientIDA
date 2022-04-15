//----- (00000001404B5D10) ----------------------------------------------------
__int64 __fastcall sub_1404B5D10(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
	__int64 v3; // rdi
	__int64 v5; // rbx
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v10; // rax
	__int64 v11; // r14
	unsigned int v12; // ebx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rax
	int v20; // eax
	__int64* v21; // rsi
	__m128 v22; // xmm4
	__m128 v23; // xmm5
	__m128 v24; // xmm6
	__m128 v25; // xmm2
	float v26; // xmm3_4
	float v27; // xmm1_4
	__m128 v28; // xmm5
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128 v31; // xmm2
	__m128 v32; // xmm3
	__int64 v33; // rcx
	__int64 v34; // rax
	__m128* v35; // rax
	__m128 v36; // xmm1
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // r8
	unsigned __int64 v40; // r15
	int v41; // edx
	__int64 v42; // rax
	__int32 v43; // eax
	__m128 v44; // xmm4
	__m128 v45; // xmm2
	__int64 v46; // rax
	__m128* v47; // rax
	__m128 v48; // xmm1
	__int64* v49; // rdi
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64* v54; // rdi
	__int64 v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rax
	__int64* v58; // rsi
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v61; // rax
	__int64 v62; // rax
	_OWORD* v63; // rax
	__int64 v64; // rcx
	__m128* v65; // rax
	__m128 v66; // xmm1
	__int64 v67; // rcx
	__int64 v68; // rcx
	__int64 v69; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v70; // [rsp+38h] [rbp-C8h]
	__m128 v71; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v72; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v73; // [rsp+60h] [rbp-A0h] BYREF
	int v74[4]; // [rsp+70h] [rbp-90h] BYREF
	double v75[8]; // [rsp+80h] [rbp-80h] BYREF
	__m256 v76[2]; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v77[4]; // [rsp+100h] [rbp+0h] BYREF
	__m128* v78[10]; // [rsp+140h] [rbp+40h] BYREF
	__m128 v79[5]; // [rsp+190h] [rbp+90h] BYREF

	v3 = qword_140C659F0;
	if (a2 < 0x200)
		return 1i64;
	v5 = qword_140C65898;
	if (!sub_1400E6570(*(_DWORD**)(qword_140C65898 + 29504), a2, a3, &v69, v74))
		return 1i64;
	if (v6 == 512)
	{
		if (!sub_1405B1510(&qword_140C7DFB0)
			|| (v7 = *(_QWORD*)(qword_140C659F8 + 200)) == 0
			|| (v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 112i64))(v7),
				!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 56i64))(v8)))
		{
			if (!*(_DWORD*)(v3 + 4))
				return 1i64;
		}
		v5 = qword_140C65898;
	}
	if (!(unsigned int)((__int64)(*(_QWORD*)(*(_QWORD*)(v3 + 824) + 24i64) - *(_QWORD*)(*(_QWORD*)(v3 + 824) + 16i64)) >> 3))
		return 1i64;
	v10 = *(_QWORD*)(v5 + 120);
	if (v10)
	{
		if (*(_DWORD*)(v10 + 592))
			return 1i64;
	}
	v11 = sub_1405B1510(&qword_140C7DFB0);
	if (!v11 || !*(_DWORD*)v3)
		return 1i64;
	v12 = 0;
	if (a2 == 513)
	{
		if (!(unsigned int)sub_1404B6AE0())
		{
			if (sub_1404B6A30((_DWORD*)v3))
			{
				if (*(_DWORD*)v3)
				{
					v13 = *(_QWORD*)(qword_140C659F8 + 200);
					if (v13)
					{
						v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 112i64))(v13);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v14 + 48i64))(v14, 1i64);
					}
				}
				v15 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v15)
				{
					v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 152i64))(v15);
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"HousingFreePlaceDecorMoveBegin",
						byte_1409EBD2C,
						*(unsigned int*)(v16 + 496));
					return 0i64;
				}
				return 0i64;
			}
			goto LABEL_28;
		}
	LABEL_37:
		if ((unsigned int)sub_1404B6AE0())
		{
			if (*(_DWORD*)v3)
			{
				v33 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v33)
				{
					v34 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 112i64))(v33);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 32i64))(v34);
					return 0i64;
				}
			}
			return 0i64;
		}
		if (a2 == 517)
		{
			if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 30088) + 184i64))(*(_QWORD*)(qword_140C65898 + 30088))
				|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 30088) + 184i64))(*(_QWORD*)(qword_140C65898 + 30088))
				&& (v35 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(qword_140C65898 + 30088) + 232i64))(
					*(_QWORD*)(qword_140C65898 + 30088),
					&v72),
					v36 = _mm_mul_ps(*v35, *v35),
					(float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0]) <= 25.0))
			{
				if (*(_QWORD*)(v3 + 144))
				{
					v37 = *(_QWORD*)(qword_140C659F8 + 200);
					if (v37 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v37 + 120i64))(v37))
						return 1i64;
					v38 = *(_QWORD*)(v3 + 144);
					if (v38)
					{
						if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v38 + 344i64))(v38))
							goto LABEL_62;
					}
					v39 = *(_QWORD*)(v3 + 144);
					v69 = 0i64;
					sub_1404CB140(v38, (__int64*)&v71, v39, &v69);
					v40 = v71.m128_u64[1];
					if (!v71.m128_u64[1]
						&& (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 144) + 328i64))(*(_QWORD*)(v3 + 144))
						&& (v41 = *(_DWORD*)(v3 + 156)) != 0)
					{
						v42 = sub_1405B15C0((__int64)&qword_140C7DFB0, v41);
						if (v42)
						{
							v71 = *(__m128*)(v42 + 8);
						}
						else
						{
							v71.m128_i32[0] = 0;
							v71.m128_u64[1] = 0i64;
						}
						v40 = v71.m128_u64[1];
						v43 = v71.m128_i32[0];
					}
					else
					{
						v43 = v71.m128_i32[0];
					}
					if (v43 == *(_DWORD*)(v11 + 8) && v40 == *(_QWORD*)(v11 + 16)
						|| !v40 && sub_1405B16C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v3 + 152), 0) == v11)
					{
					LABEL_62:
						*(_OWORD*)(v3 + 176) = *(_OWORD*)(v3 + 80);
						*(_OWORD*)(v3 + 192) = *(_OWORD*)(v3 + 96);
						*(_OWORD*)(v3 + 208) = *(_OWORD*)(v3 + 112);
						*(_OWORD*)(v3 + 224) = *(_OWORD*)(v3 + 128);
						sub_1405AD3B0(v11, *(_QWORD*)(v3 + 144));
						return 1i64;
					}
				}
			}
		}
		goto LABEL_28;
	}
	if (a2 != 514 || !(unsigned int)sub_1404B6AE0())
		goto LABEL_37;
	sub_1404B6AA0((_DWORD*)v3, 0);
	v17 = qword_140C659F8;
	v18 = *(_QWORD*)(qword_140C659F8 + 200);
	if (!v18)
		goto LABEL_29;
	v19 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v18 + 152i64))(*(_QWORD*)(qword_140C659F8 + 200));
	sub_1400EA3E0(
		*(_QWORD*)(qword_140C65898 + 29504),
		"HousingFreePlaceDecorMoveEnd",
		byte_1409EBE6C,
		*(unsigned int*)(v19 + 496));
LABEL_28:
	v17 = qword_140C659F8;
LABEL_29:
	if (*(_DWORD*)(v11 + 192) != 4)
	{
		if (a2 == 514)
		{
			if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 30088) + 184i64))(*(_QWORD*)(qword_140C65898 + 30088)))
				return 1i64;
			v65 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(qword_140C65898 + 30088) + 232i64))(
				*(_QWORD*)(qword_140C65898 + 30088),
				&v73);
			v66 = _mm_mul_ps(*v65, *v65);
			if ((float)(v66.m128_f32[0] + _mm_shuffle_ps(v66, v66, 85).m128_f32[0]) > 25.0)
				return 1i64;
			v17 = qword_140C659F8;
		}
		else if (a2 != 513 || !*(_DWORD*)(qword_140C65898 + 28848))
		{
			return 1i64;
		}
		v67 = *(_QWORD*)(v17 + 200);
		if (v67)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v67 + 144i64))(v67))
			{
				sub_1404B8110(v68, 1, 0);
				LOBYTE(v12) = *(_DWORD*)(qword_140C65898 + 28848) == 0;
				return v12;
			}
			sub_1403CC530(qword_140C65898, 0x67u);
			*(_DWORD*)(v3 + 4) = 0;
		}
		return 1i64;
	}
	v20 = *(_DWORD*)(v3 + 4);
	if (v20 && a2 == 512)
	{
		v21 = *(__int64**)(v17 + 200);
		if (v21 && (!qword_140C7DFE0 || !sub_1404CB280(v17, *(_QWORD*)(v3 + 144))))
		{
			v22 = *(__m128*)(v3 + 96);
			v23 = (__m128)0x40400000u;
			v24 = *(__m128*)(v3 + 16);
			v25 = _mm_mul_ps(v22, v22);
			v26 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
				+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
			v27 = fsqrt(v26);
			v23.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v26 * (float)(1.0 / v27)) * (float)(1.0 / v27))) * 0.5)
				* (float)(1.0 / v27),
				0.0);
			v28 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v22);
			v29 = _mm_mul_ps(v28, v24);
			v30 = _mm_mul_ps(*(__m128*)(v3 + 48), v28);
			if (fabs(
				(float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
				+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0]) >= fabs(
					(float)(v30.m128_f32[0]
						+ _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
					+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0]))
			{
				v44 = _mm_sub_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(*(__m128*)(v3 + 48), *(__m128*)(v3 + 48), 210),
						_mm_shuffle_ps(v28, v28, 201)),
					_mm_mul_ps(
						_mm_shuffle_ps(*(__m128*)(v3 + 48), *(__m128*)(v3 + 48), 201),
						_mm_shuffle_ps(v28, v28, 210)));
				v45 = _mm_mul_ps(v44, v44);
				v45.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0])
						+ _mm_shuffle_ps(v45, v45, 170).m128_f32[0]);
				v72 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v44);
				v71 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 210), _mm_shuffle_ps(v72, v72, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 201), _mm_shuffle_ps(v72, v72, 210)));
			}
			else
			{
				v31 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 210), _mm_shuffle_ps(v24, v24, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v28, v28, 201), _mm_shuffle_ps(v24, v24, 210)));
				v32 = _mm_mul_ps(v31, v31);
				v32.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
						+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
				v71 = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31);
				v72 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v71, v71, 210), _mm_shuffle_ps(v28, v28, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v71, v71, 201), _mm_shuffle_ps(v28, v28, 210)));
			}
			*(_DWORD*)(v3 + 80) = v72.m128_i32[0];
			*(_QWORD*)(v3 + 84) = *(unsigned __int64*)((char*)v72.m128_u64 + 4);
			*(_QWORD*)(v3 + 112) = v71.m128_u64[0];
			*(_DWORD*)(v3 + 120) = v71.m128_i32[2];
			sub_1405B0600(v11, v76);
			v78[0] = (__m128*)v76;
			sub_1401AFC20((__int64*)v78, v75);
			v71.m128_u64[0] = v3 + 80;
			v79[0].m128_u64[0] = v3 + 80;
			v71.m128_u64[1] = (unsigned __int64)v75;
			v79[0].m128_u64[1] = (unsigned __int64)v75;
			sub_1401AFB10((__m128**)v79, v77);
			v78[0] = (__m128*)v76;
			sub_1401AFC20((__int64*)v78, v75);
			v71.m128_u64[0] = v3 + 80;
			v78[0] = (__m128*)(v3 + 80);
			v71.m128_u64[1] = (unsigned __int64)v75;
			v78[1] = (__m128*)v75;
			sub_1401AFB10(v78, v79);
			v46 = *v21;
			v73 = v79[3];
			(*(void(__fastcall**)(__int64*, __m128*))(v46 + 48))(v21, &v73);
			sub_1401B2ED0((__int64)&v69, v77[0].m128_f32);
			(*(void(__fastcall**)(__int64*, __int64*))(*v21 + 56))(v21, &v69);
			return 0i64;
		}
		return 1i64;
	}
	if (a2 != 514)
	{
		if (a2 == 513 && !*(_DWORD*)(qword_140C65898 + 28848))
		{
			v58 = *(__int64**)(v17 + 200);
			v59 = sub_1404CB280(v17, *(_QWORD*)(v3 + 144));
			if (v58)
			{
				if (!*(_DWORD*)(v3 + 4)
					&& v59
					&& (*(unsigned int(__fastcall**)(__int64*, _QWORD))(*v58 + 120))(v58, *(_QWORD*)(v59 + 288)))
				{
					*(_DWORD*)(v3 + 4) = 1;
					v60 = *v58;
					v70 = 0i64;
					v69 = 0i64;
					(*(void(__fastcall**)(__int64*, __int64*))(v60 + 136))(v58, &v69);
					if (v70)
						sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"HousingFreePlaceDecorMoveBegin",
							byte_1409EBD2C,
							*(unsigned int*)(*(_QWORD*)v69 + 496i64));
					v61 = (*(__int64(__fastcall**)(__int64*))(*v58 + 112))(v58);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v61 + 120i64))(v61, 0i64);
					v62 = (*(__int64(__fastcall**)(__int64*))(*v58 + 152))(v58);
					v63 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)v62 + 144i64))(
						v62,
						v77,
						0i64);
					v64 = v69;
					*(_OWORD*)(v3 + 16) = *v63;
					*(_OWORD*)(v3 + 32) = v63[1];
					*(_OWORD*)(v3 + 48) = v63[2];
					*(_OWORD*)(v3 + 64) = v63[3];
					*(_DWORD*)(v3 + 64) = _mm_cvtsi128_si32((__m128i)0i64);
					*(_DWORD*)(v3 + 68) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 4));
					*(_DWORD*)(v3 + 72) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
					if (v64)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v64 - 16) + 8i64))(v64 - 16);
					return 0i64;
				}
			}
		}
		return 1i64;
	}
	if (v20)
		goto LABEL_83;
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 30088) + 184i64))(*(_QWORD*)(qword_140C65898 + 30088))
		|| (v47 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(qword_140C65898 + 30088) + 232i64))(
			*(_QWORD*)(qword_140C65898 + 30088),
			&v73),
			v48 = _mm_mul_ps(*v47, *v47),
			(float)(v48.m128_f32[0] + _mm_shuffle_ps(v48, v48, 85).m128_f32[0]) > 25.0))
	{
		v17 = qword_140C659F8;
	LABEL_83:
		*(_DWORD*)(v3 + 4) = 0;
		v54 = *(__int64**)(v17 + 200);
		if (!v54)
			return 1i64;
		v55 = *v54;
		v56 = *(_QWORD*)(v17 + 200);
		v70 = 0i64;
		v69 = 0i64;
		(*(void(__fastcall**)(__int64, __int64*))(v55 + 136))(v56, &v69);
		if (v70)
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingFreePlaceDecorMoveEnd",
				byte_1409EBE6C,
				*(unsigned int*)(*(_QWORD*)v69 + 496i64));
		v57 = (*(__int64(__fastcall**)(__int64*))(*v54 + 112))(v54);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v57 + 120i64))(v57, 32i64);
		goto LABEL_77;
	}
	v49 = *(__int64**)(qword_140C659F8 + 200);
	if (!v49)
		return 1i64;
	v50 = *v49;
	v51 = *(_QWORD*)(qword_140C659F8 + 200);
	v70 = 0i64;
	v69 = 0i64;
	(*(void(__fastcall**)(__int64, __int64*))(v50 + 136))(v51, &v69);
	v52 = v69;
	if (!v70 || *(_DWORD*)(*(_QWORD*)v69 + 304i64))
	{
	LABEL_78:
		if (v52)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
		return 1i64;
	}
	if (!(*(unsigned int(__fastcall**)(__int64*))(*v49 + 144))(v49))
	{
		sub_1403CC530(qword_140C65898, 0x67u);
	LABEL_77:
		v52 = v69;
		goto LABEL_78;
	}
	sub_1404B8110(v53, 1, 0);
	LOBYTE(v12) = *(_DWORD*)(qword_140C65898 + 28848) == 0;
	if (v69)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v69 - 16) + 8i64))(v69 - 16);
	return v12;
}
// 1404B5D75: variable 'v6' is possibly undefined
// 1404B61D8: variable 'v38' is possibly undefined
// 1404B650D: variable 'v53' is possibly undefined
// 1404B681F: variable 'v68' is possibly undefined
// 1409EBD2C: using guessed type _BYTE byte_1409EBD2C[72];
// 1409EBE6C: using guessed type _BYTE byte_1409EBE6C[184];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 1404B5D10: using guessed type int var_1A0[4];
// 1404B5D10: using guessed type __m256 var_150[2];
// 1404B5D10: using guessed type double var_190[8];
// 1404B5D10: using guessed type __m128 var_110[4];

