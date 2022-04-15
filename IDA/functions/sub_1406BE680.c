//----- (00000001406BE680) ----------------------------------------------------
__int64 __fastcall sub_1406BE680(__int64 a1)
{
	__m128 v2; // xmm11
	__m128i* v3; // rax
	__m128i v4; // xmm2
	__int128 v5; // xmm1
	__int128 v6; // xmm0
	int v7; // r13d
	int v8; // eax
	__int64 v9; // rcx
	double v10; // xmm15_8
	int v11; // edi
	int v12; // ebx
	__m128 v13; // xmm3
	float v14; // xmm2_4
	int v15; // ecx
	__m128 v16; // xmm0
	float v17; // xmm13_4
	__m128 v18; // xmm14
	float v19; // xmm1_4
	float v20; // xmm2_4
	float v21; // xmm9_4
	float v22; // xmm8_4
	float v23; // xmm10_4
	float v24; // xmm11_4
	float v25; // xmm12_4
	__m128 v26; // xmm4
	__m128 v27; // xmm5
	__m128 v28; // xmm6
	__m128 v29; // xmm3
	__m128 v30; // xmm1
	__m128 v31; // xmm2
	__m128 v32; // xmm10
	__m128 v33; // xmm11
	_QWORD* v34; // r14
	__int64 v35; // r15
	__m128 v36; // xmm6
	__m128 v37; // xmm7
	_QWORD* v38; // rbx
	__int64 v39; // rdi
	__int64 v40; // rcx
	__m128 v41; // xmm8
	__m128 v42; // xmm9
	__int64 v43; // rax
	__m128 v44; // xmm4
	__m128 v45; // xmm5
	__m128 v46; // xmm3
	__m128i v47; // xmm1
	__m128 v48; // xmm3
	__m128i v49; // xmm1
	__m128 v50; // xmm3
	__m128i v51; // xmm1
	__m128 v52; // xmm3
	__m128i v53; // xmm1
	__m128 v54; // xmm2
	__m128 v55; // xmm2
	__m128 v56; // xmm6
	__m128 v57; // xmm3
	int v58; // ecx
	float v59; // xmm6_4
	_QWORD* v60; // rcx
	double v61; // xmm3_8
	__int64 v62; // rcx
	float v63; // xmm6_4
	_QWORD* v64; // rcx
	double v65; // xmm3_8
	__m128 v66; // xmm0
	_QWORD* v67; // rcx
	__m128i v68; // xmm1
	__m128i v69; // xmm1
	__int64 v70; // r8
	_QWORD* v71; // rcx
	__m128 v73; // [rsp+38h] [rbp-D0h] BYREF
	int v74; // [rsp+4Ch] [rbp-BCh]
	__m128 v75; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v76; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v77; // [rsp+78h] [rbp-90h]
	__m128 v78; // [rsp+88h] [rbp-80h] BYREF
	__int64 v79; // [rsp+98h] [rbp-70h]
	int v80; // [rsp+A0h] [rbp-68h]
	int v81; // [rsp+A4h] [rbp-64h]
	__m128 v82; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v83; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v84; // [rsp+C8h] [rbp-40h]
	__m128 v85; // [rsp+D8h] [rbp-30h]
	__m128 v86; // [rsp+E8h] [rbp-20h]
	__m128 v87; // [rsp+F8h] [rbp-10h] BYREF
	float v88; // [rsp+108h] [rbp+0h]
	float v89; // [rsp+10Ch] [rbp+4h]
	__int128 v90[4]; // [rsp+118h] [rbp+10h] BYREF
	__m128 v91; // [rsp+158h] [rbp+50h]
	__int128 v92; // [rsp+168h] [rbp+60h] BYREF
	__m128 v93; // [rsp+178h] [rbp+70h]
	__int128 v94; // [rsp+1C8h] [rbp+C0h] BYREF
	__m128 v95; // [rsp+1D8h] [rbp+D0h]
	int v96[36]; // [rsp+228h] [rbp+120h] BYREF
	__m128 v97; // [rsp+2B8h] [rbp+1B0h]

	(*(void (**)(void))(*(_QWORD*)a1 + 384i64))();
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	v73.m128_u64[1] = *(_QWORD*)(a1 + 2328);
	v73.m128_i32[0] = 1;
	v74 = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v73,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v2 = (__m128)0x3F800000u;
	v75 = (__m128)xmmword_140C777D0;
	(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v75);
	v3 = (__m128i*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2320) + 24i64))(*(_QWORD*)(a1 + 2320));
	v4 = *v3;
	v5 = (__int128)v3[2];
	v90[1] = (__int128)v3[1];
	v90[0] = (__int128)v4;
	v90[2] = v5;
	v6 = (__int128)v3[3];
	v79 = 0i64;
	v80 = v4.m128i_i32[1];
	v7 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
	v81 = v7;
	v90[3] = v6;
	v8 = *(_DWORD*)(a1 + 2300);
	v82 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4.m128i_i32[1] >> 1), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7 >> 1), _mm_cvtsi32_si128(0))));
	if (v8 == 2)
	{
		v9 = *(_QWORD*)(qword_140C65898 + 29096);
		if (!v9)
			v9 = *(_QWORD*)(qword_140C65898 + 29088);
		v10 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	}
	else if (v8 == 1)
	{
		*(_QWORD*)&v10 = *(unsigned int*)(*(_QWORD*)(qword_140C65898 + 25744) + 4800i64);
	}
	else
	{
		v10 = 0.0;
	}
	v77.m128_i32[0] = LODWORD(v10);
	LODWORD(v76) = 1065353216;
	*((_QWORD*)&v76 + 1) = &v82;
	v77.m128_u64[1] = 0i64;
	v92 = v76;
	v93 = (__m128)v77.m128_u64[0];
	sub_1401B0840((int*)&v92, (__int64)&v83);
	v11 = ((int)v79 + v80) >> 1;
	v12 = (HIDWORD(v79) + v81) >> 1;
	v73 = _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, sub_1400C9D10((_QWORD*)a1)));
	v13 = (__m128)0x3F800000u;
	v13.m128_f32[0] = 1.0 / *(float*)(a1 + 1872);
	v75 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(0))));
	v14 = (float)((float)(v13.m128_f32[0] / (float)(512.0 / *(float*)&dword_140C4AD08)) * 512.0) + 0.5;
	v15 = (int)v14;
	if ((int)v14 != 0x80000000 && (float)v15 != v14)
		v14 = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
	v16 = _mm_sub_ps(*(__m128*)(a1 + 1920), *(__m128*)(a1 + 1888));
	v18 = (__m128)COERCE_UNSIGNED_INT((float)(int)v14);
	v17 = (float)((float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] * v13.m128_f32[0]) + v75.m128_f32[1]) + 0.5;
	*(float*)&v76 = (float)((float)(v16.m128_f32[0] * v13.m128_f32[0]) + v75.m128_f32[0]) + 0.5;
	v16.m128_f32[0] = *(float*)&v76 + v18.m128_f32[0];
	v18.m128_f32[0] = v18.m128_f32[0] + v17;
	*((float*)&v76 + 1) = v17;
	v77.m128_u64[0] = __PAIR64__(v18.m128_u32[0], v16.m128_u32[0]);
	if (!*(_QWORD*)(a1 + 2416))
	{
		sub_1407E4830(v96, 0i64, 0x310ui64);
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(qword_140C65898 + 29256) + 40i64))(
			*(_QWORD*)(qword_140C65898 + 29256),
			v96);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2424),
			1i64);
		v78.m128_i32[3] = HIDWORD(xmmword_140C777D0);
		v19 = _mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 170).m128_f32[0];
		v20 = _mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 85).m128_f32[0];
		v21 = (float)(v19 * v20) * -1.0925485;
		v22 = (float)(*(float*)&xmmword_140C77870 * v20) * 1.0925485;
		v23 = (float)((float)((float)(v19 * 3.0) * v19) - 1.0) * 0.31539157;
		v24 = (float)(*(float*)&xmmword_140C77870 * v19) * -1.0925485;
		v25 = (float)((float)(*(float*)&xmmword_140C77870 * *(float*)&xmmword_140C77870) - (float)(v20 * v20))
			* 0.54627424;
		v78.m128_f32[0] = (float)((float)((float)((float)((float)((float)((float)((float)(*(float*)&xmmword_140C777D0
			+ (float)(*(float*)v96 * 0.28209481))
			+ (float)(*(float*)&v96[1]
				* (float)(v20 * -0.48860252)))
			+ (float)(*(float*)&v96[2]
				* (float)(v19 * 0.48860252)))
			+ (float)(*(float*)&v96[3]
				* (float)(*(float*)&xmmword_140C77870 * -0.48860252)))
			+ (float)(*(float*)&v96[4] * v22))
			+ (float)(*(float*)&v96[5] * v21))
			+ (float)(*(float*)&v96[6] * v23))
			+ (float)(*(float*)&v96[7] * v24))
			+ (float)(*(float*)&v96[8] * v25);
		v78.m128_f32[1] = (float)((float)((float)((float)((float)((float)((float)((float)(*((float*)&xmmword_140C777D0 + 1)
			+ (float)(*(float*)&v96[12]
				* 0.28209481))
			+ (float)(*(float*)&v96[13]
				* (float)(v20 * -0.48860252)))
			+ (float)(*(float*)&v96[14]
				* (float)(v19 * 0.48860252)))
			+ (float)(*(float*)&v96[15]
				* (float)(*(float*)&xmmword_140C77870 * -0.48860252)))
			+ (float)(*(float*)&v96[16] * v22))
			+ (float)(*(float*)&v96[17] * v21))
			+ (float)(*(float*)&v96[18] * v23))
			+ (float)(*(float*)&v96[19] * v24))
			+ (float)(*(float*)&v96[20] * v25);
		v78.m128_f32[2] = (float)((float)((float)((float)((float)((float)((float)((float)(*((float*)&xmmword_140C777D0 + 2)
			+ (float)(*(float*)&v96[24]
				* 0.28209481))
			+ (float)(*(float*)&v96[25]
				* (float)(v20 * -0.48860252)))
			+ (float)(*(float*)&v96[26]
				* (float)(v19 * 0.48860252)))
			+ (float)(*(float*)&v96[27]
				* (float)(*(float*)&xmmword_140C77870 * -0.48860252)))
			+ (float)(*(float*)&v96[28] * v22))
			+ (float)(*(float*)&v96[29] * v21))
			+ (float)(*(float*)&v96[30] * v23))
			+ (float)(*(float*)&v96[31] * v24))
			+ (float)(*(float*)&v96[32] * v25);
		v26 = _mm_add_ps(v97, v78);
		v27 = _mm_shuffle_ps(v26, v26, 170);
		v28 = _mm_shuffle_ps(v26, v26, 85);
		v75 = v26;
		v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v27), _mm_unpacklo_ps(v28, (__m128)0i64));
		v30 = _mm_mul_ps(v29, v29);
		if ((float)((float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
			+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0]) <= 0.028899999)
		{
			v27.m128_i32[0] = 1053609165;
			v28.m128_i32[0] = 1053609165;
			v26.m128_i32[0] = 1053609165;
		}
		v75.m128_i32[0] = fsqrt(v26.m128_f32[0]);
		*(unsigned __int64*)((char*)v75.m128_u64 + 4) = __PAIR64__(
			COERCE_UNSIGNED_INT(fsqrt(v27.m128_f32[0])),
			COERCE_UNSIGNED_INT(fsqrt(v28.m128_f32[0])));
		(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 384i64))(
			qword_140C65670,
			16i64,
			&v75);
		if ((dword_140DC4B98 & 1) == 0)
		{
			dword_140DC4B98 |= 1u;
			v31 = (__m128)(unsigned int)dword_140C4AE28;
			v31.m128_f32[0] = *(float*)&dword_140C4AE28 + *(float*)&dword_140C4ADC8;
			xmmword_140DC4BA0 = (__int128)_mm_shuffle_ps(
				(__m128)(unsigned int)dword_140C4AE28,
				(__m128)(unsigned int)dword_140C4AE28,
				0);
			xmmword_140DC4BB0 = (__int128)_mm_shuffle_ps(v31, v31, 0);
		}
		v32 = v77;
		v33 = (__m128)v76;
		v34 = (_QWORD*)(a1 + 2208);
		v35 = 3i64;
		while (1)
		{
			v36 = v33;
			v37 = v32;
			v38 = v34;
			v39 = 3i64;
			v34 += 3;
			v92 = (__int128)v33;
			v93 = v32;
			do
			{
				v40 = *v38;
				v41 = (__m128)v93.m128_u32[0];
				v42 = (__m128)(unsigned int)v92;
				if (*v38)
				{
					v78.m128_i32[0] = 0;
					if ((*(unsigned int(__fastcall**)(__int64, __m128*))(*(_QWORD*)v40 + 32i64))(v40, &v78))
					{
						v43 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
							qword_140C65670,
							112i64,
							0i64);
						if (v43)
						{
							v44 = _mm_shuffle_ps(v36, v36, 85);
							v45 = _mm_shuffle_ps(v37, v37, 85);
							v46 = _mm_unpacklo_ps(_mm_unpacklo_ps(v42, (__m128)0i64), _mm_unpacklo_ps(v44, (__m128)0i64));
							v47 = (__m128i)_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v84),
										_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v83)),
									_mm_mul_ps(_mm_shuffle_ps(v46, v46, 170), v85)),
								v86);
							*(_DWORD*)v43 = _mm_cvtsi128_si32(v47);
							*(_DWORD*)(v43 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v47, 4));
							*(_DWORD*)(v43 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v47, 8));
							*(_DWORD*)(v43 + 12) = 1065353216;
							*(_QWORD*)(v43 + 20) = xmmword_140DC4BA0;
							v48 = _mm_unpacklo_ps(_mm_unpacklo_ps(v42, (__m128)0i64), _mm_unpacklo_ps(v45, (__m128)0i64));
							v49 = (__m128i)_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v84),
										_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v83)),
									_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v85)),
								v86);
							*(_DWORD*)(v43 + 28) = _mm_cvtsi128_si32(v49);
							*(_DWORD*)(v43 + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v49, 4));
							*(_DWORD*)(v43 + 36) = _mm_cvtsi128_si32(_mm_srli_si128(v49, 8));
							*(_DWORD*)(v43 + 40) = 1065353216;
							v91 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)(unsigned int)xmmword_140DC4BA0, (__m128)0i64),
								_mm_unpacklo_ps((__m128)DWORD1(xmmword_140DC4BB0), (__m128)0i64));
							*(_QWORD*)(v43 + 48) = v91.m128_u64[0];
							v50 = _mm_unpacklo_ps(_mm_unpacklo_ps(v41, (__m128)0i64), _mm_unpacklo_ps(v44, (__m128)0i64));
							v51 = (__m128i)_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v50, v50, 85), v84),
										_mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), v83)),
									_mm_mul_ps(_mm_shuffle_ps(v50, v50, 170), v85)),
								v86);
							*(_DWORD*)(v43 + 56) = _mm_cvtsi128_si32(v51);
							*(_DWORD*)(v43 + 60) = _mm_cvtsi128_si32(_mm_srli_si128(v51, 4));
							*(_DWORD*)(v43 + 64) = _mm_cvtsi128_si32(_mm_srli_si128(v51, 8));
							*(_DWORD*)(v43 + 68) = 1065353216;
							v73 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)(unsigned int)xmmword_140DC4BB0, (__m128)0i64),
								_mm_unpacklo_ps((__m128)DWORD1(xmmword_140DC4BA0), (__m128)0i64));
							*(_QWORD*)(v43 + 76) = v73.m128_u64[0];
							v52 = _mm_unpacklo_ps(_mm_unpacklo_ps(v41, (__m128)0i64), _mm_unpacklo_ps(v45, (__m128)0i64));
							v53 = (__m128i)_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v52, v52, 85), v84),
										_mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v83)),
									_mm_mul_ps(_mm_shuffle_ps(v52, v52, 170), v85)),
								v86);
							*(_DWORD*)(v43 + 84) = _mm_cvtsi128_si32(v53);
							*(_DWORD*)(v43 + 88) = _mm_cvtsi128_si32(_mm_srli_si128(v53, 4));
							*(_DWORD*)(v43 + 92) = _mm_cvtsi128_si32(_mm_srli_si128(v53, 8));
							*(_DWORD*)(v43 + 96) = 1065353216;
							*(_QWORD*)(v43 + 104) = xmmword_140DC4BB0;
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
								qword_140C65670,
								0i64,
								*v38,
								0i64,
								0i64);
							(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 648i64))(
								qword_140C65670,
								4i64,
								0i64);
						}
					}
				}
				v41.m128_f32[0] = v41.m128_f32[0] - v42.m128_f32[0];
				++v38;
				v54 = _mm_unpacklo_ps(_mm_unpacklo_ps(v41, (__m128)0i64), (__m128)0i64);
				v36 = _mm_add_ps(v36, v54);
				v37 = _mm_add_ps(v37, v54);
				v92 = (__int128)v36;
				v93 = v37;
				--v39;
			} while (v39);
			v18.m128_f32[0] = v18.m128_f32[0] - v17;
			v55 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v18, (__m128)0i64));
			v33 = _mm_add_ps(v33, v55);
			v32 = _mm_add_ps(v32, v55);
			v76 = (__int128)v33;
			v77 = v32;
			if (!--v35)
				break;
			v18 = (__m128)v77.m128_u32[1];
			v17 = *((float*)&v76 + 1);
		}
		v2 = (__m128)0x3F800000u;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	if (*(_QWORD*)(a1 + 2416))
	{
		v56 = 0i64;
		v56.m128_f32[0] = (float)*(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 24i64))(*(_QWORD*)(a1 + 2328))
			+ 8);
		v57 = 0i64;
		v58 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 24i64))(*(_QWORD*)(a1 + 2328)) + 4);
		v76 = 0i64;
		v57.m128_f32[0] = (float)v58;
		v77 = _mm_unpacklo_ps(_mm_unpacklo_ps(v57, (__m128)0i64), _mm_unpacklo_ps(v56, (__m128)0i64));
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 65i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 208i64))(qword_140C65680, 0i64);
		v93.m128_i32[0] = LODWORD(v10);
		LODWORD(v92) = 1065353216;
		v93.m128_u64[1] = 0i64;
		*((_QWORD*)&v92 + 1) = &v82;
		v94 = v92;
		v95 = (__m128)v93.m128_u64[0];
		sub_1401B0840((int*)&v94, (__int64)&v92);
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v92);
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2344) + 48i64))(*(_QWORD*)(a1 + 2344)))
		{
			v73 = (__m128)xmmword_140B7B240;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
				qword_140C65680,
				*(_QWORD*)(a1 + 2344),
				a1 + 2368,
				&v76,
				&v73,
				1);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	}
	sub_140773320((__m128*)(a1 + 1024), (__m128*)(a1 + 1888), v10, *(float*)(a1 + 1872), a1 + 2280, 0);
	sub_140773A90(a1 + 1024, (__m128*)(a1 + 1888), v10, *(float*)(a1 + 1872), (_DWORD*)(a1 + 2280));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v59 = *(float*)(*(_QWORD*)(qword_140C65898 + 25744) + 4800i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 65i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 208i64))(qword_140C65680, 0i64);
	LODWORD(v92) = 1065353216;
	*((_QWORD*)&v92 + 1) = 0i64;
	v93.m128_u64[1] = (unsigned __int64)&v82;
	v93.m128_f32[0] = *(float*)&v10 - v59;
	v94 = (unsigned __int64)v92;
	v95 = v93;
	sub_1401B0840((int*)&v94, (__int64)&v92);
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v92);
	v60 = *(_QWORD**)(a1 + 2448);
	v73 = (__m128)xmmword_140B7B240;
	if (v60)
	{
		*(_QWORD*)&v61 = (unsigned int)dword_140C63664;
		*(float*)&v61 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2456)) * *(float*)(a1 + 2460);
		sub_1401039E0(v60, &qword_140C77760, &v73, v61);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v62 = *(_QWORD*)(qword_140C65898 + 29096);
	if (!v62)
		v62 = *(_QWORD*)(qword_140C65898 + 29088);
	v63 = *(float*)&v10 - (*(float(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v62);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 65i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 208i64))(qword_140C65680, 1i64);
	v93.m128_f32[0] = v63;
	LODWORD(v92) = 1065353216;
	*((_QWORD*)&v92 + 1) = 0i64;
	v93.m128_u64[1] = (unsigned __int64)&v82;
	v95 = v93;
	v94 = (unsigned __int64)v92;
	sub_1401B0840((int*)&v94, (__int64)&v92);
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v92);
	v64 = *(_QWORD**)(a1 + 2496);
	v73 = (__m128)xmmword_140B7B240;
	if (v64)
	{
		*(_QWORD*)&v65 = (unsigned int)dword_140C63664;
		*(float*)&v65 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2504)) * *(float*)(a1 + 2508);
		sub_1401039E0(v64, &qword_140C77760, &v73, v65);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	v87.m128_f32[0] = (float)SDWORD1(v90[0]) * -0.5;
	v88 = (float)SDWORD1(v90[0]) * 0.5;
	v89 = (float)v7 * 0.5;
	v87.m128_f32[1] = (float)v7 * -0.5;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 65i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 208i64))(qword_140C65680, 0i64);
	v93.m128_i32[0] = LODWORD(v10);
	v93.m128_u64[1] = (unsigned __int64)&v82;
	LODWORD(v92) = 1065353216;
	*((_QWORD*)&v92 + 1) = 0i64;
	v66 = (__m128)(unsigned __int64)v92;
	v95 = v93;
	v94 = (unsigned __int64)v92;
	sub_1401B0840((int*)&v94, (__int64)v90);
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v90);
	v67 = *(_QWORD**)(a1 + 2544);
	v73 = (__m128)xmmword_140B7B240;
	if (v67)
	{
		v66 = (__m128)(unsigned int)dword_140C63664;
		sub_140103E60(
			v67,
			&v87,
			&v73,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2552)) * *(float*)(a1 + 2556)));
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v73.m128_u64[1] = *(_QWORD*)(a1 + 2320);
	v73.m128_i32[0] = 1;
	v74 = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v73,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	*(double*)v66.m128_u64 = (*(double(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v73 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v73);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 2336),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 2328));
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 2312));
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2432),
		0i64);
	v66.m128_f32[0] = sub_1400C9C30(*(_QWORD*)(a1 + 16));
	v68 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(
						_mm_max_ps((__m128)0i64, _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps(v2, v66))),
						(__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v69 = _mm_packus_epi16(v68, v68);
	(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v69, v69)),
		v70,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 65i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 208i64))(qword_140C65680, 0i64);
	v93.m128_i32[0] = LODWORD(v10);
	v93.m128_u64[1] = (unsigned __int64)&v82;
	LODWORD(v92) = 1065353216;
	*((_QWORD*)&v92 + 1) = 0i64;
	v95 = v93;
	v94 = (unsigned __int64)v92;
	sub_1401B0840((int*)&v94, (__int64)v90);
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v90);
	v71 = *(_QWORD**)(a1 + 2592);
	v73 = (__m128)xmmword_140B7B240;
	if (v71)
		sub_140103E60(
			v71,
			&v87,
			&v73,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2600)) * *(float*)(a1 + 2604)));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	sub_140773320((__m128*)(a1 + 1024), (__m128*)(a1 + 1888), v10, *(float*)(a1 + 1872), a1 + 2280, 1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
}
// 1406BF7BC: variable 'v70' is possibly undefined
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C4AD08: using guessed type int dword_140C4AD08;
// 140C4ADC8: using guessed type int dword_140C4ADC8;
// 140C4AE28: using guessed type int dword_140C4AE28;
// 140C63664: using guessed type int dword_140C63664;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140DC4B98: using guessed type int dword_140DC4B98;
// 140DC4BA0: using guessed type __int128 xmmword_140DC4BA0;
// 140DC4BB0: using guessed type __int128 xmmword_140DC4BB0;
// 1406BE680: using guessed type __m128 var_490;

