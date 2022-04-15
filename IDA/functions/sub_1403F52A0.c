//----- (00000001403F52A0) ----------------------------------------------------
_QWORD* __fastcall sub_1403F52A0(__int64 a1, __int64 a2, __m128* a3, __int64 a4)
{
	_QWORD* result; // rax
	__int64 v7; // rdi
	__m128** v8; // rcx
	__m128* v9; // rbx
	__m128 v10; // xmm13
	int v11; // xmm8_4
	__m128 v12; // xmm12
	int v13; // xmm9_4
	__int64 v14; // rcx
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	int v18; // eax
	float* v19; // rax
	__m128 v20; // xmm4
	__m128 v21; // xmm2
	__m128 v22; // xmm0
	__int64 v23; // r8
	int v24; // eax
	__int64 v25; // rdx
	float v26; // xmm1_4
	float v27; // xmm2_4
	float v28; // xmm1_4
	__m128 v29; // xmm1
	int v30; // eax
	float v31; // xmm2_4
	float v32; // xmm0_4
	int v33; // eax
	float v34; // xmm5_4
	float v35; // xmm4_4
	float v36; // xmm2_4
	float v37; // xmm3_4
	__m128 v38; // xmm3
	__m128 v39; // xmm2
	double v40; // xmm6_8
	__int128 v41; // xmm15
	__int128 v42; // xmm14
	__m128 v43; // xmm1
	__m128 v44; // xmm0
	__int128 v45; // xmm13
	__m128 v46; // xmm4
	__m128 v47; // xmm3
	__m128 v48; // xmm12
	float v49; // xmm7_4
	float v50; // xmm5_4
	float v51; // xmm10_4
	float v52; // xmm11_4
	float v53; // xmm9_4
	float v54; // xmm7_4
	float v55; // xmm8_4
	float v56; // xmm4_4
	__m128 v57; // xmm3
	float* v58; // rcx
	int v59; // r9d
	int v60; // r10d
	int v61; // edx
	int v62; // r8d
	__int64 v63; // rax
	__m128 v64; // xmm4
	__m128 v65; // xmm6
	__m128 v66; // xmm3
	__m128 v67; // xmm2
	__m128 v68; // xmm10
	__m128 v69; // xmm9
	__m128 v70; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v71; // [rsp+58h] [rbp-B0h]
	int v72; // [rsp+68h] [rbp-A0h] BYREF
	int v73; // [rsp+6Ch] [rbp-9Ch]
	int v74; // [rsp+70h] [rbp-98h]
	int v75; // [rsp+74h] [rbp-94h]
	int v76; // [rsp+78h] [rbp-90h]
	int v77; // [rsp+7Ch] [rbp-8Ch]
	__m128 v78; // [rsp+88h] [rbp-80h] BYREF
	__m128 v79; // [rsp+98h] [rbp-70h]
	__m128 v80; // [rsp+A8h] [rbp-60h]
	__int128 v81; // [rsp+B8h] [rbp-50h]
	__m128 v82; // [rsp+C8h] [rbp-40h]
	__m128* v83; // [rsp+D8h] [rbp-30h]
	__m128* v84; // [rsp+E0h] [rbp-28h]
	__m128* v85; // [rsp+E8h] [rbp-20h]
	__m128* v86; // [rsp+F0h] [rbp-18h]
	__m128* v87; // [rsp+F8h] [rbp-10h]
	__int128* v88; // [rsp+100h] [rbp-8h]
	__m128* v89; // [rsp+108h] [rbp+0h]
	__int128* v90; // [rsp+110h] [rbp+8h]
	__m128 v91; // [rsp+118h] [rbp+10h]
	__m128 v92; // [rsp+128h] [rbp+20h] BYREF
	__m128 v93; // [rsp+138h] [rbp+30h]
	__m128 v94; // [rsp+148h] [rbp+40h]
	__int128 v95; // [rsp+158h] [rbp+50h]
	__int128 v96; // [rsp+168h] [rbp+60h] BYREF
	__int128 v97; // [rsp+178h] [rbp+70h]
	__int128 v98; // [rsp+188h] [rbp+80h]
	__m128 v99; // [rsp+198h] [rbp+90h]
	__m128 v100; // [rsp+1A8h] [rbp+A0h] BYREF
	__m128 v101; // [rsp+1B8h] [rbp+B0h]
	float v102[4]; // [rsp+1C8h] [rbp+C0h] BYREF
	__m128 v103[4]; // [rsp+1D8h] [rbp+D0h] BYREF
	float v104; // [rsp+218h] [rbp+110h]
	int v105; // [rsp+21Ch] [rbp+114h]
	int v106; // [rsp+220h] [rbp+118h]
	__int128 v107; // [rsp+228h] [rbp+120h] BYREF
	__int128 v108; // [rsp+238h] [rbp+130h]
	__int128 v109; // [rsp+248h] [rbp+140h]
	__m128 v110; // [rsp+258h] [rbp+150h]
	__m128* v111; // [rsp+268h] [rbp+160h] BYREF
	__m128* v112; // [rsp+270h] [rbp+168h]
	__m128 v113[4]; // [rsp+278h] [rbp+170h] BYREF
	__m128* v114; // [rsp+2B8h] [rbp+1B0h] BYREF
	__int128* v115; // [rsp+2C0h] [rbp+1B8h]
	int v116; // [rsp+308h] [rbp+200h]
	int v117; // [rsp+30Ch] [rbp+204h]
	int v118; // [rsp+310h] [rbp+208h]
	int v119; // [rsp+314h] [rbp+20Ch]
	int v120; // [rsp+488h] [rbp+380h]
	int v121; // [rsp+48Ch] [rbp+384h]
	int v122; // [rsp+490h] [rbp+388h]
	int v123; // [rsp+494h] [rbp+38Ch]

	result = *(_QWORD**)(a4 + 8);
	if ((_QWORD*)*result != result)
	{
		v7 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		v8 = *(__m128***)(a4 + 8);
		v9 = *v8;
		if (*v8 != (__m128*)v8)
		{
			v10 = 0i64;
			*(float*)&v11 = sub_1408FE3D0(0.0);
			v76 = v11;
			v12 = (__m128)0x3F800000u;
			*(float*)&v13 = sub_1408FC950(0.0);
			v85 = (__m128*) & v107;
			v77 = v13;
			v86 = &v78;
			v87 = v113;
			v88 = &v96;
			v83 = (__m128*) & v107;
			v84 = &v92;
			v89 = v113;
			v90 = &v96;
			do
			{
				v14 = v9[1].m128_i64[0];
				v15 = _mm_shuffle_ps((__m128)v9[4].m128_u32[3], (__m128)v9[4].m128_u32[3], 0);
				v92 = _mm_mul_ps((__m128)xmmword_140C78410, v15);
				v94 = _mm_mul_ps((__m128)xmmword_140C78430, v15);
				v93 = _mm_mul_ps((__m128)xmmword_140C78420, v15);
				v95 = xmmword_140C78440;
				if (v9[5].m128_i32[1])
				{
					v16 = v9[7];
					DWORD2(v95) = v9[4].m128_i32[2];
					v17 = v9[6];
					v71 = v16;
					v70 = v17;
					if (v14)
						sub_140141100(v14, v71.m128_f32[0] - v70.m128_f32[0]);
				}
				else
				{
					if (v14)
					{
						v18 = dword_140C44F30;
						if (*(_DWORD*)qword_140C63750 < dword_140C44F30)
							v18 = *(_DWORD*)qword_140C63750;
						sub_140141100(v14, (float)*(int*)(v7 + 8) * *((float*)&off_140C44F20 + v18 + 8));
						v19 = sub_140141910(v9[1].m128_i64[0], v102);
						v20 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)*v19), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v19[1]), _mm_cvtsi32_si128(0))));
						v21 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(qword_140C77760), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_140C77760)), _mm_cvtsi32_si128(0))));
						v22 = _mm_div_ps(_mm_sub_ps(v20, v21), (__m128)xmmword_140B7B2F0);
						v70 = _mm_sub_ps(v21, v22);
						v71 = _mm_sub_ps(v20, v22);
					}
					else
					{
						v23 = v9[2].m128_i64[1];
						v24 = dword_140C44F30;
						v25 = v9[1].m128_i64[1];
						v26 = (float)*(int*)(v7 + 8);
						v27 = v26 * 0.5;
						if (*(_DWORD*)qword_140C63750 < dword_140C44F30)
							v24 = *(_DWORD*)qword_140C63750;
						v28 = (float)(v26 * *((float*)&off_140C44F20 + v24 + 8)) * 0.5;
						v71.m128_u64[0] = COERCE_UNSIGNED_INT(v28 + v27);
						v70.m128_u64[0] = COERCE_UNSIGNED_INT(v27 - v28);
						(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, int, __m128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
							qword_140C65680,
							v25,
							v23,
							-1i64,
							&v70,
							1041,
							v9 + 9,
							1);
					}
					v29 = v9[8];
					v30 = *(_DWORD*)(v7 + 8);
					v91 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), a3[1]),
								_mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), *a3)),
							_mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), a3[2])),
						a3[3]);
					v31 = v12.m128_f32[0] / _mm_shuffle_ps(v91, v91, 255).m128_f32[0];
					v32 = (float)v30;
					v33 = *(_DWORD*)(v7 + 12);
					v34 = (float)(v91.m128_f32[0] * 0.5) * v31;
					*((float*)&v95 + 2) = v31 * v91.m128_f32[2];
					v35 = (float)((float)(0.5 - (float)((float)(v91.m128_f32[1] * 0.5) * v31)) * (float)v33) + 0.5;
					v36 = (float)(v71.m128_f32[0] - v70.m128_f32[0])
						+ (float)((float)(int)(float)((float)((float)(v34 + 0.5) * v32) + 0.5)
							- (float)((float)(v71.m128_f32[0] - v70.m128_f32[0]) * 0.5));
					v70.m128_f32[0] = (float)(int)(float)((float)((float)(v34 + 0.5) * v32) + 0.5)
						- (float)((float)(v71.m128_f32[0] - v70.m128_f32[0]) * 0.5);
					v71.m128_f32[0] = v36;
					v37 = (float)(v71.m128_f32[1] - v70.m128_f32[1])
						+ (float)((float)(int)v35 - (float)(v71.m128_f32[1] - v70.m128_f32[1]));
					v70.m128_f32[1] = (float)(int)v35 - (float)(v71.m128_f32[1] - v70.m128_f32[1]);
					v71.m128_f32[1] = v37;
				}
				v38 = (__m128)v9[7].m128_u32[0];
				v39 = (__m128)v9[7].m128_u32[1];
				*(_QWORD*)&v40 = (unsigned int)dword_140C3B438;
				v41 = xmmword_140C78410;
				v42 = xmmword_140C78420;
				v43 = v10;
				v39.m128_f32[0] = v39.m128_f32[0] - v9[6].m128_f32[1];
				v38.m128_f32[0] = v38.m128_f32[0] - v9[6].m128_f32[0];
				v44 = v10;
				v45 = xmmword_140C78430;
				v96 = xmmword_140C78410;
				v39.m128_f32[0] = (float)(v39.m128_f32[0] * 0.5) + v9[6].m128_f32[1];
				v38.m128_f32[0] = (float)(v38.m128_f32[0] * 0.5) + v9[6].m128_f32[0];
				v97 = xmmword_140C78420;
				v98 = xmmword_140C78430;
				v46 = v38;
				v47 = v12;
				v101 = _mm_unpacklo_ps(_mm_unpacklo_ps(v46, v44), _mm_unpacklo_ps(v39, v43));
				v48 = _mm_shuffle_ps(v101, v101, 85);
				*(float*)&v40 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(v9[5].m128_f32[0] * -1.0))
					* 0.5;
				v99 = _mm_unpacklo_ps(_mm_unpacklo_ps(v101, v43), _mm_unpacklo_ps(v48, v47));
				v49 = sub_1408FE3D0(v40);
				v44.m128_f32[0] = sub_1408FC950(v40);
				v82.m128_f32[0] = (float)(v44.m128_f32[0] * (float)(*(float*)&v13 * *(float*)&v11))
					+ (float)(v49 * (float)(*(float*)&v11 * *(float*)&v13));
				v82.m128_f32[1] = (float)(v44.m128_f32[0] * (float)(*(float*)&v11 * *(float*)&v13))
					- (float)(v49 * (float)(*(float*)&v13 * *(float*)&v11));
				v82.m128_f32[2] = (float)(v49 * (float)(*(float*)&v13 * *(float*)&v13))
					- (float)(v44.m128_f32[0] * (float)(*(float*)&v11 * *(float*)&v11));
				v82.m128_f32[3] = (float)(v49 * (float)(*(float*)&v11 * *(float*)&v11))
					+ (float)(v44.m128_f32[0] * (float)(*(float*)&v13 * *(float*)&v13));
				v50 = _mm_shuffle_ps(v82, v82, 85).m128_f32[0];
				v48.m128_f32[0] = v48.m128_f32[0] * -1.0;
				v43.m128_f32[0] = _mm_shuffle_ps(v82, v82, 170).m128_f32[0];
				v109 = v45;
				v78.m128_i32[3] = 0;
				v79.m128_i32[3] = 0;
				v80.m128_i32[3] = 0;
				v105 = v48.m128_i32[0];
				v39.m128_f32[0] = (float)(v50 * 2.0) * v82.m128_f32[0];
				v51 = (float)(v82.m128_f32[0] * 2.0) * v82.m128_f32[0];
				v52 = (float)(v50 * 2.0) * v50;
				v107 = v41;
				v108 = v42;
				v10 = 0i64;
				v44.m128_f32[0] = _mm_shuffle_ps(v82, v82, 255).m128_f32[0];
				v47.m128_f32[0] = (float)(v43.m128_f32[0] * 2.0) * v44.m128_f32[0];
				v53 = (float)(v82.m128_f32[0] * 2.0) * v44.m128_f32[0];
				v54 = (float)(v50 * 2.0) * v44.m128_f32[0];
				v55 = (float)(v43.m128_f32[0] * 2.0) * v43.m128_f32[0];
				v56 = (float)(v43.m128_f32[0] * 2.0) * v50;
				v43.m128_f32[0] = (float)(v43.m128_f32[0] * 2.0) * v82.m128_f32[0];
				v80.m128_f32[0] = v43.m128_f32[0] + v54;
				v78.m128_f32[2] = v43.m128_f32[0] - v54;
				v78.m128_f32[0] = (float)(1.0 - v52) - v55;
				v44.m128_f32[0] = v39.m128_f32[0] + v47.m128_f32[0];
				v39.m128_f32[0] = v39.m128_f32[0] - v47.m128_f32[0];
				v79.m128_f32[2] = v56 + v53;
				v57 = v101;
				v57.m128_f32[0] = v101.m128_f32[0] * -1.0;
				v78.m128_i32[1] = v44.m128_i32[0];
				v79.m128_i32[0] = v39.m128_i32[0];
				v104 = v101.m128_f32[0] * -1.0;
				v80.m128_f32[1] = v56 - v53;
				v79.m128_f32[1] = (float)(1.0 - v51) - v55;
				v80.m128_f32[2] = (float)(1.0 - v51) - v52;
				v81 = xmmword_140B7AD00;
				v106 = 0;
				v111 = v85;
				v112 = v86;
				v110 = _mm_unpacklo_ps(_mm_unpacklo_ps(v57, (__m128)0i64), _mm_unpacklo_ps(v48, (__m128)0x3F800000u));
				sub_1401AFB10(&v111, v113);
				v114 = v87;
				v115 = v88;
				sub_1401AFB10(&v114, v103);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v103);
				v58 = (float*)v9[4].m128_u64[0];
				if (v58)
				{
					v59 = (int)v71.m128_f32[0];
					v60 = (int)v71.m128_f32[1];
					v61 = (int)v70.m128_f32[0];
					v72 = (int)v70.m128_f32[0];
					v74 = (int)v71.m128_f32[0];
					v75 = (int)v71.m128_f32[1];
					v62 = (int)v70.m128_f32[1];
					v73 = (int)v70.m128_f32[1];
					if (*(_QWORD*)v58)
					{
						sub_140109C00(v58);
						v60 = v75;
						v59 = v74;
						v62 = v73;
						v61 = v72;
					}
					v79 = v93;
					v78 = v92;
					v81 = v95;
					v80 = v94;
					*((float*)&v81 + 2) = *((float*)&v95 + 2) + 0.0000099999997;
					v72 = v61 - (v118 - v116);
					v73 = v62 - (v119 - v117);
					v74 = v122 - v120 + v59;
					v75 = v123 - v121 + v60;
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v78);
					v63 = v9[4].m128_i64[0];
					if (*(_QWORD*)v63)
						sub_140103CF0(
							*(_QWORD**)v63,
							(unsigned int*)&v72,
							v9 + 10,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v63 + 8)) * *(float*)(v63 + 12)));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				}
				v64 = (__m128)v71.m128_u32[1];
				v65 = (__m128)v71.m128_u32[0];
				v12 = (__m128)0x3F800000u;
				v96 = xmmword_140C78410;
				v106 = 0;
				v97 = xmmword_140C78420;
				v98 = xmmword_140C78430;
				v107 = xmmword_140C78410;
				v64.m128_f32[0] = (float)(v71.m128_f32[1] - v70.m128_f32[1]) * 0.5;
				v65.m128_f32[0] = (float)(v71.m128_f32[0] - v70.m128_f32[0]) * 0.5;
				v66 = v65;
				v67 = v64;
				v108 = xmmword_140C78420;
				v66.m128_f32[0] = v65.m128_f32[0] + v70.m128_f32[0];
				v68 = _mm_xor_ps((__m128)v70.m128_u32[0], (__m128)xmmword_140B7B530);
				v67.m128_f32[0] = v64.m128_f32[0] + v70.m128_f32[1];
				v69 = _mm_xor_ps((__m128)v70.m128_u32[1], (__m128)xmmword_140B7B530);
				v109 = xmmword_140C78430;
				v68.m128_f32[0] = v68.m128_f32[0] - v65.m128_f32[0];
				v69.m128_f32[0] = v69.m128_f32[0] - v64.m128_f32[0];
				v104 = v68.m128_f32[0];
				v105 = v69.m128_i32[0];
				v99 = _mm_unpacklo_ps(_mm_unpacklo_ps(v66, (__m128)0i64), _mm_unpacklo_ps(v67, (__m128)0x3F800000u));
				v111 = v83;
				v112 = v84;
				v110 = _mm_unpacklo_ps(_mm_unpacklo_ps(v68, (__m128)0i64), _mm_unpacklo_ps(v69, (__m128)0x3F800000u));
				sub_1401AFB10(&v111, v113);
				v114 = v89;
				v115 = v90;
				sub_1401AFB10(&v114, &v78);
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v78);
				if (v9[1].m128_u64[0])
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
					v100 = _mm_unpacklo_ps(
						(__m128)xmmword_140B7A4C0,
						_mm_unpacklo_ps((__m128)0x3F800000u, (__m128)v9[9].m128_u32[3]));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 168i64))(qword_140C65680, &v100);
					sub_140141820(v9[1].m128_i64[0], (__int128*)&v70, *(float*)(v9[1].m128_u64[0] + 828) + 1.0);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				}
				else
				{
					(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64, __m128*, int, __m128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
						qword_140C65680,
						v9[1].m128_u64[1],
						v9[2].m128_u64[1],
						(__int64)(v9[3].m128_u64[0] - v9[2].m128_u64[1]) >> 1,
						v9 + 6,
						273,
						v9 + 9,
						1);
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				v9 = (__m128*)v9->m128_u64[0];
				v11 = v76;
				v13 = v77;
			} while (v9 != *(__m128**)(a4 + 8));
		}
		return (_QWORD*)sub_1403FE1B0(a4);
	}
	return result;
}
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C44F20: using guessed type __int64 (__fastcall **off_140C44F20)();
// 140C44F30: using guessed type int dword_140C44F30;
// 140C63664: using guessed type int dword_140C63664;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1403F52A0: using guessed type __m128 var_2F0[4];
// 1403F52A0: using guessed type float var_3A0[4];
// 1403F52A0: using guessed type __m128 var_390[4];

