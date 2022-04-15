#include "../winhttp.h"

//----- (000000014025D7F0) ----------------------------------------------------
__int64 __fastcall sub_14025D7F0(__int64 a1, __int64 a2, __m128* a3)
{
	BOOL v6; // ebx
	BOOL v7; // r13d
	__int64 v8; // rcx
	int v9; // esi
	int v10; // r12d
	__int64 result; // rax
	__int64 v12; // rbx
	__int128 v13; // xmm0
	__int128 v14; // xmm2
	__int128 v15; // xmm3
	__m128 v16; // xmm9
	__m128 v17; // xmm1
	__m128 v18; // xmm2
	float v19; // xmm11_4
	__m128 v20; // xmm2
	__m128 v21; // xmm9
	int v22; // eax
	__m128 v23; // xmm0
	__m128 v24; // xmm6
	__m128 v25; // xmm0
	__m128 v26; // xmm6
	__m128 v27; // xmm1
	__m128 v28; // xmm0
	__m128 v29; // xmm6
	__m128 v30; // xmm2
	__m128 v31; // xmm2
	__m128 v32; // xmm1
	__m128i v33; // xmm2
	__m128i v34; // xmm1
	float v35; // xmm1_4
	float v36; // xmm3_4
	float v37; // xmm1_4
	float v38; // xmm1_4
	float v39; // xmm3_4
	float v40; // xmm1_4
	float v41; // xmm1_4
	float v42; // xmm3_4
	float v43; // xmm1_4
	float v44; // xmm6_4
	float v45; // xmm0_4
	float v46; // xmm2_4
	float v47; // xmm6_4
	float v48; // xmm0_4
	float v49; // xmm2_4
	float v50; // xmm6_4
	float v51; // xmm0_4
	float v52; // xmm2_4
	float v53; // xmm1_4
	float v54; // xmm3_4
	float v55; // xmm1_4
	float v56; // xmm1_4
	float v57; // xmm3_4
	float v58; // xmm1_4
	int v59; // esi
	float v60; // xmm7_4
	float v61; // xmm6_4
	float v62; // xmm1_4
	float v63; // xmm0_4
	float v64; // xmm1_4
	float v65; // xmm0_4
	float v66; // xmm1_4
	float v67; // xmm0_4
	float v68; // xmm1_4
	__m128 v69; // xmm2
	float v70; // xmm0_4
	__m128 v71; // xmm1
	double* v72; // rcx
	__int128* v73; // rax
	float v74; // xmm0_4
	__m128 v75; // xmm3
	__int32 v76; // xmm1_4
	__int32 v77; // xmm0_4
	int v78; // xmm1_4
	int v79; // xmm0_4
	int v80; // xmm1_4
	float v81; // xmm0_4
	int v82; // xmm1_4
	int v83; // xmm0_4
	int v84; // xmm1_4
	float v85; // xmm0_4
	int v86; // xmm1_4
	__int32 v87; // xmm1_4
	float v88; // xmm0_4
	int v89; // xmm1_4
	float v90; // xmm0_4
	int v91; // xmm1_4
	float v92; // xmm0_4
	float v93; // xmm1_4
	float v94; // xmm0_4
	float v95; // xmm3_4
	float v96; // xmm2_4
	float v97; // xmm10_4
	__m128 v98; // xmm2
	__m128 v99; // [rsp+38h] [rbp-D0h] BYREF
	float v100; // [rsp+48h] [rbp-C0h]
	float v101; // [rsp+4Ch] [rbp-BCh]
	float v102; // [rsp+50h] [rbp-B8h]
	int v103; // [rsp+54h] [rbp-B4h]
	float v104; // [rsp+58h] [rbp-B0h]
	float v105; // [rsp+5Ch] [rbp-ACh]
	float v106; // [rsp+60h] [rbp-A8h]
	int v107; // [rsp+64h] [rbp-A4h]
	float v108; // [rsp+68h] [rbp-A0h]
	float v109; // [rsp+6Ch] [rbp-9Ch]
	float v110; // [rsp+70h] [rbp-98h]
	int v111; // [rsp+74h] [rbp-94h]
	double* v112; // [rsp+78h] [rbp-90h]
	__int128* v113; // [rsp+80h] [rbp-88h]
	int v114; // [rsp+88h] [rbp-80h]
	__int128 v115[4]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v116[4]; // [rsp+D8h] [rbp-30h] BYREF
	__m128* v117[10]; // [rsp+118h] [rbp+10h] BYREF
	__m128* v118; // [rsp+168h] [rbp+60h] BYREF
	double v119[8]; // [rsp+178h] [rbp+70h] BYREF
	__m128* v120; // [rsp+1B8h] [rbp+B0h] BYREF
	double v121[8]; // [rsp+1C8h] [rbp+C0h] BYREF

	v6 = *(float*)(a1 + 332) == 0.0;
	v7 = *(_DWORD*)(a1 + 48) == 17;
	v114 = dword_140B60438[*(int*)(a2 + 72)];
	v8 = *(_QWORD*)(a2 + 160);
	v9 = 0;
	if (v8)
	{
		if (*(_QWORD*)(a2 + 168))
		{
			v10 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8);
			if (v10 == *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 168) + 24i64))(*(_QWORD*)(a2 + 168)))
			{
				if (v10)
				{
					if (v10 == 2)
						v9 = 1;
				}
				else
				{
					v9 = 2;
				}
			}
		}
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2176),
		(unsigned int)(v7 + 2 * (v9 + 2 * (v114 + 4 * v6 + v6) + v114 + 4 * v6 + v6)));
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		352i64,
		0i64,
		0i64,
		0);
	v12 = result;
	if (result)
	{
		*(_OWORD*)result = *(_OWORD*)(a1 + 544);
		*(_OWORD*)(result + 16) = *(_OWORD*)(a1 + 560);
		*(_OWORD*)(result + 32) = *(_OWORD*)(a1 + 592);
		v13 = *(_OWORD*)(a1 + 1840);
		v14 = *(_OWORD*)(a1 + 1872);
		v15 = *(_OWORD*)(a1 + 1888);
		*(_OWORD*)(result + 48) = *(_OWORD*)(a1 + 1824);
		*(_OWORD*)(result + 64) = v13;
		*(_OWORD*)(result + 80) = v14;
		*(_OWORD*)(result + 96) = v15;
		v16 = a3[2];
		v17 = _mm_mul_ps(v16, v16);
		v18 = _mm_shuffle_ps(v17, v17, 170);
		v19 = 1.0 / fsqrt((float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0]) + v18.m128_f32[0]);
		v18.m128_f32[0] = v19;
		v20 = _mm_shuffle_ps(v18, v18, 0);
		v21 = _mm_mul_ps(v16, v20);
		*(__m128*)(result + 144) = _mm_mul_ps(*a3, v20);
		*(__m128*)(result + 160) = _mm_mul_ps(a3[1], v20);
		*(__m128*)(result + 176) = v21;
		v22 = *(_DWORD*)(a2 + 72);
		if (v22)
		{
			if (v22 <= 0)
				goto LABEL_17;
			if (v22 > 2)
			{
				if (v22 <= 4)
				{
					v23 = (__m128) * (unsigned int*)(a2 + 68);
					v23.m128_f32[0] = sub_1408FD8A4(v23.m128_f32[0]);
					v24 = v23;
					v25 = (__m128) * (unsigned int*)(a2 + 64);
					v26 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), a3[1]);
					v25.m128_f32[0] = sub_1408FD8A4(v25.m128_f32[0]);
					v27 = _mm_sub_ps((__m128)0i64, a3[2]);
					v28 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), *a3);
					*(_DWORD*)(v12 + 112) = a3[3].m128_i32[0];
					*(_DWORD*)(v12 + 116) = a3[3].m128_i32[1];
					*(_DWORD*)(v12 + 120) = a3[3].m128_i32[2];
					v29 = _mm_add_ps(v26, _mm_add_ps(v28, v27));
					v30 = _mm_mul_ps(v29, v29);
					v30.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
							+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0]);
					v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v29);
					*(_DWORD*)(v12 + 128) = _mm_cvtsi128_si32((__m128i)v31);
					*(_DWORD*)(v12 + 132) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v31, 4));
					v32 = _mm_mul_ps(v31, v21);
					*(_DWORD*)(v12 + 136) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v31, 8));
					*(float*)(v12 + 140) = -1.0
						/ (float)((float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
							+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
				}
			LABEL_17:
				*(_OWORD*)(v12 + 192) = *(_OWORD*)(a2 + 80);
				*(_OWORD*)(v12 + 208) = *(_OWORD*)(a2 + 96);
				*(_OWORD*)(v12 + 224) = *(_OWORD*)(a2 + 112);
				*(_DWORD*)(v12 + 124) = *(_DWORD*)(a2 + 76);
				switch (*(_DWORD*)(a2 + 72))
				{
				case 1:
					v50 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 132)));
					v51 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 128)));
					if (v51 == 0.0 && v50 == 0.0)
					{
						*(_DWORD*)(v12 + 240) = 0;
						*(_DWORD*)(v12 + 244) = 1065353216;
					}
					else
					{
						v52 = fmaxf(v51 - v50, 0.001);
						*(float*)(v12 + 240) = 1.0 / v52;
						*(float*)(v12 + 244) = -(float)(v50 * (float)(1.0 / v52));
					}
					break;
				case 2:
					v44 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 132)));
					v45 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 128)));
					if (v45 == 0.0 && v44 == 0.0)
					{
						*(_DWORD*)(v12 + 240) = 0;
						*(_DWORD*)(v12 + 244) = 1065353216;
					}
					else
					{
						v46 = fmaxf(v45 - v44, 0.001);
						*(float*)(v12 + 240) = 1.0 / v46;
						*(float*)(v12 + 244) = -(float)(v44 * (float)(1.0 / v46));
					}
					v47 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 140)));
					v48 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 136)));
					if (v48 == 0.0 && v47 == 0.0)
					{
						*(_DWORD*)(v12 + 248) = 0;
						*(_DWORD*)(v12 + 252) = 1065353216;
					}
					else
					{
						v49 = fmaxf(v48 - v47, 0.001);
						*(float*)(v12 + 248) = 1.0 / v49;
						*(float*)(v12 + 252) = -(float)(v47 * (float)(1.0 / v49));
					}
					break;
				case 3:
					v41 = *(float*)(a2 + 128);
					v42 = *(float*)(a2 + 132);
					if (v41 == 0.0 && v42 == 0.0)
					{
						*(_QWORD*)(v12 + 240) = 0i64;
					}
					else
					{
						v43 = 1.0 / fminf(v41 - v42, -0.001);
						*(float*)(v12 + 240) = v43 * v19;
						*(float*)(v12 + 244) = -(float)(v42 * v43);
					}
					break;
				case 4:
					v35 = *(float*)(a2 + 128);
					v36 = *(float*)(a2 + 132);
					if (v35 == 0.0 && v36 == 0.0)
					{
						*(_QWORD*)(v12 + 240) = 0i64;
					}
					else
					{
						v37 = 1.0 / fminf(v35 - v36, -0.001);
						*(float*)(v12 + 240) = v37 * v19;
						*(float*)(v12 + 244) = -(float)(v36 * v37);
					}
					v38 = *(float*)(a2 + 136);
					v39 = *(float*)(a2 + 140);
					if (v38 == 0.0 && v39 == 0.0)
					{
						*(_QWORD*)(v12 + 248) = 0i64;
					}
					else
					{
						v40 = 1.0 / fminf(v38 - v39, -0.001);
						*(float*)(v12 + 248) = v40 * v19;
						*(float*)(v12 + 252) = -(float)(v39 * v40);
					}
					break;
				}
				v53 = *(float*)(a2 + 148);
				v54 = *(float*)(a2 + 144);
				if (v53 == 0.0 && v54 == 0.0)
				{
					*(_DWORD*)(v12 + 256) = 0;
					*(_DWORD*)(v12 + 260) = 1065353216;
				}
				else
				{
					v55 = 1.0 / fmaxf(v53 - v54, 0.001);
					*(float*)(v12 + 256) = v55 * v19;
					*(float*)(v12 + 260) = -(float)(v54 * v55);
				}
				v56 = *(float*)(a2 + 152);
				v57 = *(float*)(a2 + 156);
				if (v56 == 0.0 && v57 == 0.0)
				{
					*(_QWORD*)(v12 + 264) = 0i64;
				}
				else
				{
					v58 = 1.0 / fminf(v56 - v57, -0.001);
					*(float*)(v12 + 264) = v58 * v19;
					*(float*)(v12 + 268) = -(float)(v57 * v58);
				}
				if (!v9)
					goto LABEL_72;
				v59 = v9 - 1;
				if (!v59)
				{
					if (*(_DWORD*)(a2 + 72) <= 2u)
					{
						v117[0] = a3;
						sub_1401AFC20((__int64*)v117, (double*)v99.m128_u64);
						v87 = v99.m128_i32[1];
						*(_DWORD*)(v12 + 288) = v99.m128_i32[0];
						v88 = v99.m128_f32[2];
						*(_DWORD*)(v12 + 304) = v87;
						v89 = LODWORD(v101);
						*(float*)(v12 + 320) = -v88;
						*(float*)(v12 + 292) = v100;
						v90 = v102;
						*(_DWORD*)(v12 + 308) = v89;
						v91 = LODWORD(v105);
						*(float*)(v12 + 324) = -v90;
						*(float*)(v12 + 296) = v104;
						v92 = v106;
						*(_DWORD*)(v12 + 312) = v91;
						v93 = v109;
						*(float*)(v12 + 328) = -v92;
						*(float*)(v12 + 300) = v108;
						v94 = v110;
						*(float*)(v12 + 316) = v93;
						*(float*)(v12 + 332) = -v94;
					}
					goto LABEL_68;
				}
				if (v59 != 1)
					goto LABEL_68;
				if (*(_DWORD*)(a2 + 72) == 1)
				{
					v74 = sub_1408FD8A4(*(float*)(a2 + 132));
					v75 = (__m128)0x3F800000u;
					v120 = a3;
					v75.m128_f32[0] = 1.0 / v74;
					v116[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v75, (__m128)0i64), (__m128)0i64);
					v116[2] = xmmword_140B7B5A0;
					v116[3] = 0i64;
					v116[1] = (__int128)_mm_unpacklo_ps(
						(__m128)0i64,
						_mm_unpacklo_ps(_mm_xor_ps(v75, (__m128)0x80000000), (__m128)0i64));
					sub_1401AFC20((__int64*)&v120, v121);
					v72 = v121;
					v73 = v116;
				}
				else
				{
					if (*(_DWORD*)(a2 + 72) != 2)
					{
						if (*(_DWORD*)(a2 + 72) == 3)
						{
							v61 = 1.0 / *(float*)(a2 + 132);
							v60 = -v61;
							goto LABEL_62;
						}
						if (*(_DWORD*)(a2 + 72) == 4)
						{
							v60 = -1.0 / *(float*)(a2 + 140);
							v61 = 1.0 / *(float*)(a2 + 132);
						LABEL_62:
							v117[0] = a3;
							sub_1401AFC20((__int64*)v117, (double*)v99.m128_u64);
							v62 = v99.m128_f32[1] * v60;
							*(float*)(v12 + 288) = v99.m128_f32[0] * v61;
							v63 = v100;
							*(float*)(v12 + 304) = v62;
							v64 = v101;
							*(float*)(v12 + 292) = v63 * v61;
							v65 = v104 * v61;
							*(float*)(v12 + 308) = v64 * v60;
							v66 = v105;
							*(float*)(v12 + 296) = v65;
							v67 = v108;
							*(float*)(v12 + 312) = v66 * v60;
							v68 = v109 * v60;
							*(float*)(v12 + 300) = v67 * v61;
							*(float*)(v12 + 316) = v68;
						}
					LABEL_68:
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							6i64,
							*(_QWORD*)(a2 + 160));
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							7i64,
							*(_QWORD*)(a2 + 168));
						v95 = *(float*)(a2 + 156);
						v96 = *(float*)(a2 + 144);
						if (v95 == 0.0 && v96 == 0.0)
						{
							*(_DWORD*)(v12 + 272) = 0;
							*(_DWORD*)(v12 + 276) = 1065353216;
						}
						else
						{
							v97 = 1.0 / fmaxf(v95 - v96, 0.001);
							*(float*)(v12 + 272) = v97 * v19;
							*(float*)(v12 + 276) = -(float)(v96 * v97);
						}
					LABEL_72:
						v98 = 0i64;
						v98.m128_f32[0] = (float)*(int*)(a1 + 2436);
						*(__m128*)(v12 + 336) = _mm_unpacklo_ps(_mm_unpacklo_ps(v98, (__m128)0i64), (__m128)0i64);
						*(_QWORD*)(v12 + 280) = 1065353216i64;
						return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					}
					v69 = (__m128)0x3F800000u;
					v69.m128_f32[0] = 1.0 / sub_1408FD8A4(*(float*)(a2 + 132));
					v70 = *(float*)(a2 + 140);
					v115[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v69, (__m128)0i64), (__m128)0i64);
					v71 = (__m128)0x3F800000u;
					v71.m128_f32[0] = 1.0 / sub_1408FD8A4(v70);
					v118 = a3;
					v115[2] = xmmword_140B7B5A0;
					v115[3] = 0i64;
					v115[1] = (__int128)_mm_unpacklo_ps(
						(__m128)0i64,
						_mm_unpacklo_ps(_mm_xor_ps(v71, (__m128)0x80000000), (__m128)0i64));
					sub_1401AFC20((__int64*)&v118, v119);
					v72 = v119;
					v73 = v115;
				}
				v112 = v72;
				v113 = v73;
				v117[0] = (__m128*)v72;
				v117[1] = (__m128*)v73;
				sub_1401AFB10(v117, &v99);
				v76 = v99.m128_i32[1];
				*(_DWORD*)(v12 + 288) = v99.m128_i32[0];
				v77 = v99.m128_i32[3];
				*(_DWORD*)(v12 + 304) = v76;
				v78 = LODWORD(v100);
				*(_DWORD*)(v12 + 320) = v77;
				v79 = LODWORD(v101);
				*(_DWORD*)(v12 + 292) = v78;
				v80 = v103;
				*(_DWORD*)(v12 + 308) = v79;
				v81 = v104;
				*(_DWORD*)(v12 + 324) = v80;
				v82 = LODWORD(v105);
				*(float*)(v12 + 296) = v81;
				v83 = v107;
				*(_DWORD*)(v12 + 312) = v82;
				v84 = LODWORD(v108);
				*(_DWORD*)(v12 + 328) = v83;
				v85 = v109;
				*(_DWORD*)(v12 + 300) = v84;
				v86 = v111;
				*(float*)(v12 + 316) = v85;
				*(_DWORD*)(v12 + 332) = v86;
				goto LABEL_68;
			}
			v33 = (__m128i)_mm_add_ps(
				a3[3],
				_mm_mul_ps(
					a3[2],
					_mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 64), (__m128) * (unsigned int*)(a2 + 64), 0)));
			*(_DWORD*)(v12 + 112) = _mm_cvtsi128_si32(v33);
			*(_DWORD*)(v12 + 116) = _mm_cvtsi128_si32(_mm_srli_si128(v33, 4));
			*(_DWORD*)(v12 + 120) = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
		}
		else
		{
			*(_DWORD*)(v12 + 112) = a3[3].m128_i32[0];
			*(_DWORD*)(v12 + 116) = a3[3].m128_i32[1];
			*(_DWORD*)(v12 + 120) = a3[3].m128_i32[2];
		}
		v34 = (__m128i)_mm_sub_ps((__m128)0i64, v21);
		*(_DWORD*)(v12 + 128) = _mm_cvtsi128_si32(v34);
		*(_DWORD*)(v12 + 132) = _mm_cvtsi128_si32(_mm_srli_si128(v34, 4));
		*(_DWORD*)(v12 + 136) = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
		*(_DWORD*)(v12 + 140) = 1065353216;
		goto LABEL_17;
	}
	return result;
}
// 140B60438: using guessed type _DWORD dword_140B60438[6];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140B7B5A0: using guessed type __int128 xmmword_140B7B5A0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14025D7F0: using guessed type double var_150[8];
// 14025D7F0: using guessed type double var_100[8];

