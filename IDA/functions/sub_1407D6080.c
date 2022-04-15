//----- (00000001407D6080) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407D6080(_QWORD* a1, unsigned int a2, char a3, __int64 a4, __m128* a5)
{
	unsigned __int64 result; // rax
	__int64 v9; // rdi
	__int64 v10; // rdi
	__int64* v11; // rbx
	__int64 v12; // rax
	int v13; // r14d
	__int64 v14; // rax
	int v15; // edx
	unsigned int v16; // edx
	__int64 v17; // rax
	double v18; // xmm7_8
	double v19; // xmm6_8
	float v20; // xmm9_4
	float v21; // xmm10_4
	float v22; // xmm8_4
	float v23; // xmm0_4
	__m128* v24; // rdi
	__int64 v25; // rax
	__m128* v26; // r8
	__m128 v27; // xmm9
	__int64 v28; // rdx
	__m128* v29; // rcx
	__m128 v30; // xmm10
	__m128 v31; // xmm5
	__m128 v32; // xmm2
	__m128 v33; // xmm7
	__m128 v34; // xmm1
	__m128 v35; // xmm8
	float v36; // xmm4_4
	__m128 v37; // xmm6
	__m128 v38; // xmm2
	float v39; // xmm4_4
	float v40; // xmm9_4
	float v41; // xmm8_4
	float v42; // xmm0_4
	float v43; // xmm1_4
	float v44; // xmm7_4
	float v45; // xmm6_4
	float v46; // xmm1_4
	float v47; // xmm0_4
	float v48; // xmm4_4
	float v49; // xmm3_4
	float v50; // xmm2_4
	float v51; // xmm0_4
	float v52; // xmm1_4
	float v53; // xmm5_4
	float v54; // xmm1_4
	float v55; // xmm0_4
	float v56; // xmm4_4
	float v57; // xmm3_4
	float v58; // xmm1_4
	float v59; // xmm2_4
	float v60; // xmm2_4
	float v61; // xmm0_4
	float v62; // xmm3_4
	float v63; // xmm0_4
	float v64; // xmm1_4
	float v65; // xmm10_4
	float v66; // xmm0_4
	float v67; // xmm3_4
	float v68; // xmm2_4
	float v69; // xmm0_4
	float v70; // xmm1_4
	float v71; // xmm1_4
	float v72; // xmm0_4
	float v73; // xmm10_4
	float v74; // xmm3_4
	float v75; // xmm2_4
	float v76; // xmm0_4
	float v77; // xmm1_4
	float v78; // xmm3_4
	float v79; // xmm1_4
	float v80; // xmm9_4
	float v81; // xmm8_4
	float v82; // xmm0_4
	float v83; // xmm1_4
	float v84; // xmm2_4
	float v85; // xmm7_4
	float v86; // xmm6_4
	float v87; // xmm0_4
	float v88; // xmm1_4
	float v89; // xmm2_4
	float v90; // xmm5_4
	float v91; // xmm4_4
	float v92; // xmm0_4
	float v93; // xmm1_4
	__m128 v94; // xmm2
	__m128 v95; // xmm1
	__m128 v96; // [rsp+20h] [rbp-E0h] BYREF
	int v97; // [rsp+30h] [rbp-D0h]
	__int64 v98; // [rsp+34h] [rbp-CCh]
	int v99; // [rsp+3Ch] [rbp-C4h]
	__m128 v100; // [rsp+40h] [rbp-C0h]
	__m128 v101; // [rsp+50h] [rbp-B0h] BYREF
	float v102; // [rsp+60h] [rbp-A0h]
	float v103; // [rsp+64h] [rbp-9Ch]
	float v104; // [rsp+68h] [rbp-98h]
	int v105; // [rsp+6Ch] [rbp-94h]
	float v106; // [rsp+70h] [rbp-90h]
	float v107; // [rsp+74h] [rbp-8Ch]
	float v108; // [rsp+78h] [rbp-88h]
	int v109; // [rsp+7Ch] [rbp-84h]
	__int128 v110; // [rsp+80h] [rbp-80h]
	__int128 v111[4]; // [rsp+90h] [rbp-70h] BYREF
	__m128* v112[10]; // [rsp+D0h] [rbp-30h] BYREF

	result = a1[38];
	if (result)
	{
		if (result < a1[36])
			return result;
		result = a1[37];
		v9 = *(unsigned int*)(result + 4i64 * a2);
	}
	else
	{
		v9 = a2;
	}
	v10 = a1[35] + 32 * v9;
	v11 = *(__int64**)v10;
	if (*(_QWORD*)v10)
	{
		v12 = *v11;
		v13 = 0;
		v96.m128_i32[0] = 0;
		result = (*(__int64(__fastcall**)(__int64*, __m128*, _QWORD))(v12 + 16))(v11, &v96, 0i64);
		if ((_DWORD)result)
		{
			if ((a3 & 0x80) == 0)
			{
				if ((a3 & 0x20) == 0 && ((*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 192i64))(a1, a2) & 2) != 0)
				{
					v14 = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(*v11 + 424))(v11, 150i64, 0i64);
					v15 = *(_DWORD*)(a1[3] + 1312i64);
					v96.m128_u64[0] = 150i64;
					v96.m128_i32[2] = 0;
					v97 = 0;
					v98 = 3i64;
					v16 = *(_DWORD*)(v14 + 20) * v15;
					v99 = 0;
					v17 = *v11;
					v96.m128_i32[3] = v16 / 0x15180;
					(*(void(__fastcall**)(__int64*, _QWORD, __m128*))(v17 + 584))(v11, 0i64, &v96);
				}
				*(_QWORD*)&v18 = (unsigned int)dword_140C3B438;
				*(float*)&v18 = *(float*)&dword_140C3B438 * 0.0055555557;
				v19 = v18;
				*(float*)&v18 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v10 + 12);
				*(float*)&v19 = *(float*)&v19 * *(float*)(v10 + 8);
				v20 = sub_1408FE3D0(v19);
				v21 = sub_1408FC950(v19);
				LODWORD(v19) = sub_1408FE3D0(v18);
				v22 = sub_1408FC950(v18);
				LODWORD(v18) = sub_1408FE3D0(0.0);
				v23 = sub_1408FC950(0.0);
				v101.m128_i32[3] = 0;
				v105 = 0;
				v109 = 0;
				v101.m128_f32[1] = *(float*)&v18 * v22;
				v101.m128_f32[0] = v23 * v22;
				v101.m128_f32[2] = -*(float*)&v19;
				v102 = (float)((float)(v23 * *(float*)&v19) * v20) - (float)(*(float*)&v18 * v21);
				v103 = (float)(v23 * v21) + (float)((float)(*(float*)&v18 * *(float*)&v19) * v20);
				v106 = (float)((float)(v23 * *(float*)&v19) * v21) + (float)(*(float*)&v18 * v20);
				v110 = xmmword_140C78440;
				v107 = (float)((float)(*(float*)&v18 * *(float*)&v19) * v21) - (float)(v23 * v20);
				v104 = v22 * v20;
				v108 = v22 * v21;
				if ((a3 & 2) != 0)
				{
					v96.m128_u64[0] = (unsigned __int64)&v101;
					v111[3] = xmmword_140C78440;
					v96.m128_u64[1] = (unsigned __int64)v111;
					v111[0] = (__int128)_mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, (__m128)xmmword_140B7B240);
					v112[1] = (__m128*)v111;
					v111[1] = (__int128)_mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], (__m128)xmmword_140B7B5B0);
					v111[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
					v112[0] = &v101;
					sub_1401AFB10(v112, &v101);
				}
				(*(void(__fastcall**)(__int64*, __m128*))(*v11 + 72))(v11, &v101);
				(*(void(__fastcall**)(__int64*))(*v11 + 112))(v11);
				(*(void(__fastcall**)(__int64*, __int64))(*v11 + 176))(v11, v10 + 16);
				(*(void(__fastcall**)(__int64*, __int64))(*v11 + 240))(v11, a1[3] + 2972i64);
			}
			v24 = (__m128*)(*(__int64(__fastcall**)(__int64*))(*v11 + 1160))(v11);
			v25 = (*(__int64(__fastcall**)(__int64*))(*v11 + 80))(v11);
			v26 = a5;
			v27 = 0i64;
			v28 = v25;
			v29 = a5;
			v30 = *(__m128*)(v25 + 32);
			v31 = *(__m128*)(v25 + 16);
			v32 = _mm_mul_ps(*(__m128*)v25, *(__m128*)v25);
			v33 = _mm_mul_ps(v30, v30);
			v34 = _mm_mul_ps(v31, v31);
			v27.m128_f32[0] = fmaxf(
				(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
				+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0],
				(float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
				+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0]);
			v35 = v27;
			v35.m128_f32[0] = fmaxf(
				v27.m128_f32[0],
				(float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
				+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0]);
			v36 = _mm_sqrt_ps(v35).m128_f32[0] * v24[3].m128_f32[0];
			v37 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v24[2], v24[2], 0), *(__m128*)v25),
						_mm_mul_ps(_mm_shuffle_ps(v24[2], v24[2], 85), v31)),
					_mm_mul_ps(_mm_shuffle_ps(v24[2], v24[2], 170), v30)),
				*(__m128*)(v25 + 48));
			result = 0i64;
			while (1)
			{
				v38 = _mm_mul_ps(v37, *v29);
				if ((float)((float)((float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
					+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0])
					+ v29->m128_f32[3]) > v36)
					break;
				++result;
				++v29;
				if (result >= 6)
				{
					v39 = *(float*)v28;
					v40 = v24->m128_f32[0];
					v41 = v24[1].m128_f32[0];
					v100 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v28 + 48), (__m128) * (unsigned int*)(v28 + 56)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v28 + 52), (__m128)0i64));
					v96 = v100;
					if (v39 <= 0.0)
					{
						v42 = v41;
						v43 = v40;
					}
					else
					{
						v42 = v40;
						v43 = v41;
					}
					v44 = v24->m128_f32[1];
					v45 = v24[1].m128_f32[1];
					v46 = v43 * v39;
					v47 = v42 * v39;
					v48 = *(float*)(v28 + 16);
					v49 = v100.m128_f32[0] + v46;
					v50 = v100.m128_f32[0] + v47;
					if (v48 <= 0.0)
					{
						v51 = v24[1].m128_f32[1];
						v52 = v24->m128_f32[1];
					}
					else
					{
						v51 = v24->m128_f32[1];
						v52 = v24[1].m128_f32[1];
					}
					v53 = v24->m128_f32[2];
					v54 = v52 * v48;
					v55 = v51 * v48;
					v56 = v24[1].m128_f32[2];
					v57 = v49 + v54;
					v58 = *(float*)(v28 + 32);
					v59 = v50 + v55;
					if (v58 <= 0.0)
					{
						v60 = v59 + (float)(v56 * v58);
						v61 = v24->m128_f32[2];
					}
					else
					{
						v60 = v59 + (float)(v53 * v58);
						v61 = v24[1].m128_f32[2];
					}
					v100.m128_f32[0] = v60;
					v96.m128_f32[0] = v57 + (float)(v61 * v58);
					v62 = *(float*)(v28 + 4);
					if (v62 <= 0.0)
					{
						v63 = v41;
						v64 = v40;
					}
					else
					{
						v63 = v40;
						v64 = v41;
					}
					v65 = *(float*)(v28 + 20);
					v66 = v63 * v62;
					v67 = v96.m128_f32[1] + (float)(v64 * v62);
					v68 = v100.m128_f32[1] + v66;
					if (v65 <= 0.0)
					{
						v69 = v45;
						v70 = v44;
					}
					else
					{
						v69 = v44;
						v70 = v45;
					}
					v71 = v70 * v65;
					v72 = v69 * v65;
					v73 = *(float*)(v28 + 36);
					v74 = v67 + v71;
					v75 = v68 + v72;
					if (v73 <= 0.0)
					{
						v76 = v56;
						v77 = v53;
					}
					else
					{
						v76 = v53;
						v77 = v56;
					}
					v78 = v74 + (float)(v77 * v73);
					v79 = *(float*)(v28 + 8);
					v80 = v40 * v79;
					v81 = v41 * v79;
					v96.m128_f32[1] = v78;
					v100.m128_f32[1] = v75 + (float)(v76 * v73);
					if (v79 <= 0.0)
					{
						v82 = v100.m128_f32[2] + v81;
						v83 = v96.m128_f32[2] + v80;
					}
					else
					{
						v82 = v100.m128_f32[2] + v80;
						v83 = v96.m128_f32[2] + v81;
					}
					v84 = *(float*)(v28 + 24);
					v85 = v44 * v84;
					v86 = v45 * v84;
					if (v84 <= 0.0)
					{
						v87 = v82 + v86;
						v88 = v83 + v85;
					}
					else
					{
						v87 = v82 + v85;
						v88 = v83 + v86;
					}
					v89 = *(float*)(v28 + 40);
					v90 = v53 * v89;
					v91 = v56 * v89;
					if (v89 <= 0.0)
					{
						v92 = v87 + v91;
						v93 = v88 + v90;
					}
					else
					{
						v92 = v87 + v90;
						v93 = v88 + v91;
					}
					v96.m128_f32[2] = v93;
					v100.m128_f32[2] = v92;
					result = 0i64;
					while (1)
					{
						v94 = _mm_cmplt_ps((__m128)0i64, *v26);
						v95 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v94, v96), _mm_and_ps(v94, v100)), *v26);
						if ((float)((float)((float)(v95.m128_f32[0] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0])
							+ _mm_shuffle_ps(v95, v95, 170).m128_f32[0])
							+ v26->m128_f32[3]) > 0.0)
							goto LABEL_48;
						++result;
						++v26;
						if (result >= 6)
						{
							v13 = 1;
							goto LABEL_48;
						}
					}
				}
			}
		LABEL_48:
			if ((a3 & 0x80) != 0)
				goto LABEL_52;
			if (v13 || (a3 & 0x20) != 0)
			{
				result = (*(__int64(__fastcall**)(__int64*, __int64))(*v11 + 296))(v11, 1i64);
			LABEL_52:
				if (v13)
					return (*(__int64(__fastcall**)(__int64*, __int64))(*v11 + 320))(v11, 1i64);
			}
		}
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140B7B5B0: using guessed type __int128 xmmword_140B7B5B0;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

