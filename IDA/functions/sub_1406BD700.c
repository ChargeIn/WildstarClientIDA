//----- (00000001406BD700) ----------------------------------------------------
int* __fastcall sub_1406BD700(__m128* a1)
{
	__int64 v2; // rcx
	__m128 v3; // xmm12
	__int64 v4; // rax
	unsigned __int64 v5; // rbx
	__int64 v6; // r14
	int* result; // rax
	unsigned __int64 v8; // rcx
	__m128 v9; // xmm6
	__m128 v10; // xmm3
	__m128 v11; // xmm3
	unsigned int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64* v15; // rcx
	__int64 v16; // rax
	__m128 v17; // xmm7
	float v18; // xmm8_4
	float v19; // xmm6_4
	float v20; // xmm0_4
	float v21; // xmm7_4
	float v22; // xmm1_4
	float v23; // xmm8_4
	__m128* v24; // rax
	__int64 v25; // r8
	__m128 v26; // xmm1
	__m128 v27; // xmm2
	__m128 v28; // xmm10
	float v29; // xmm1_4
	__int64 v30; // rdx
	__m128 v31; // xmm0
	float v32; // xmm1_4
	float v33; // xmm7_4
	float v34; // xmm8_4
	float v35; // xmm9_4
	__m128 v36; // xmm3
	__int64 v37; // r8
	float v38; // xmm2_4
	__int64 v39; // rdx
	__m128 v40; // xmm0
	float v41; // xmm1_4
	float v42; // xmm4_4
	float v43; // xmm5_4
	float v44; // xmm6_4
	__m128 v45; // xmm11
	__int64 v46; // r8
	__m128 v47; // xmm1
	__m128 v48; // xmm0
	__m128 v49; // xmm3
	__m128 v50; // xmm2
	__m128 v51; // xmm2
	float v52; // xmm11_4
	__int64 v53; // rdx
	float v54; // xmm0_4
	__int64 v55; // r8
	bool v56; // cc
	float v57; // xmm2_4
	__int64 v58; // rdx
	float v59; // xmm0_4
	__int64 v60; // r8
	float v61; // xmm3_4
	__int64 v62; // rdx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64 v65; // rax
	float v66; // xmm11_4
	float v67; // xmm10_4
	float v68; // xmm6_4
	int v69; // ecx
	__int32 v70; // xmm2_4
	__m128 v71; // xmm7
	__m128 v72; // xmm6
	__m128 v73; // xmm2
	__m128 v74; // xmm0
	__m128 v75; // xmm9
	__m128 v76; // xmm8
	__m128 v77; // xmm7
	__m128 v78; // xmm6
	__m128* v79; // rax
	__m128* v80; // rdx
	char* v81; // rcx
	__m128 v82; // xmm3
	__int64 v83; // r15
	__m128* v84; // rax
	__int64 v85; // rcx
	__m128 v86; // xmm3
	__m128 v87; // xmm2
	__m128 v88; // xmm0
	__int128* v89; // rdx
	int* v90; // rcx
	__int64 v91; // rax
	__int128 v92; // xmm0
	__int128 v93; // xmm1
	__int128 v94; // xmm0
	__int128 v95; // xmm1
	__int128 v96; // xmm0
	__int128 v97; // xmm1
	__int128 v98; // xmm0
	__int128 v99; // xmm1
	__int64 v100; // rdi
	__int64 v101; // rcx
	_QWORD* v102; // rdx
	__int64 v103; // rdx
	__int64 i; // rcx
	_QWORD* v105; // rdx
	__int64 v106; // rdx
	__int64 j; // rcx
	_QWORD* v108; // rdx
	__int64 v109; // rdx
	__int128 v110; // xmm0
	__int128* v111; // rdx
	int* v112; // rcx
	__int64 v113; // rax
	__int128 v114; // xmm0
	__int128 v115; // xmm1
	__int128 v116; // xmm0
	__int128 v117; // xmm1
	__int128 v118; // xmm0
	__int128 v119; // xmm1
	__int128 v120; // xmm0
	__int128 v121; // xmm1
	__m128 v122; // xmm1
	char* v123; // rax
	__m128 v124; // xmm0
	__int128 v125; // xmm1
	__int128 v126; // xmm0
	__int128 v127; // xmm1
	__int128 v128; // xmm0
	__int128 v129; // xmm0
	__int64 v130; // rbx
	__int64 v131; // rax
	__m128 v132; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v133; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v134; // [rsp+60h] [rbp-A0h] BYREF
	__int128* v135; // [rsp+70h] [rbp-90h]
	__m128 v136; // [rsp+80h] [rbp-80h] BYREF
	__m128 v137; // [rsp+90h] [rbp-70h]
	__m128 v138; // [rsp+A0h] [rbp-60h]
	__m128 v139; // [rsp+B0h] [rbp-50h]
	__m256i v140; // [rsp+C0h] [rbp-40h] BYREF
	__m256i v141; // [rsp+E0h] [rbp-20h]
	__int128 v142; // [rsp+100h] [rbp+0h] BYREF
	__int128 v143; // [rsp+110h] [rbp+10h] BYREF
	__int128 v144; // [rsp+120h] [rbp+20h] BYREF
	double v145[8]; // [rsp+130h] [rbp+30h] BYREF
	__m128 v146[2]; // [rsp+170h] [rbp+70h] BYREF
	int v147; // [rsp+190h] [rbp+90h]
	__int128 v148; // [rsp+1A0h] [rbp+A0h]
	__int128 v149; // [rsp+1B0h] [rbp+B0h]
	int v150; // [rsp+1C0h] [rbp+C0h]
	__int128 v151; // [rsp+1D0h] [rbp+D0h]
	__int128 v152; // [rsp+1E0h] [rbp+E0h]
	int v153; // [rsp+1F0h] [rbp+F0h]
	__int128 v154[6]; // [rsp+200h] [rbp+100h] BYREF
	__int128 v155[2]; // [rsp+260h] [rbp+160h] BYREF
	int v156; // [rsp+280h] [rbp+180h]
	__int128 v157; // [rsp+290h] [rbp+190h]
	__int128 v158; // [rsp+2A0h] [rbp+1A0h]
	int v159; // [rsp+2B0h] [rbp+1B0h]
	__int128 v160; // [rsp+2C0h] [rbp+1C0h]
	__int128 v161; // [rsp+2D0h] [rbp+1D0h]
	int v162; // [rsp+2E0h] [rbp+1E0h]
	__int128 v163; // [rsp+2F0h] [rbp+1F0h]
	__int128 v164; // [rsp+300h] [rbp+200h]
	__m128 v165; // [rsp+310h] [rbp+210h]
	int v166; // [rsp+510h] [rbp+410h]
	__m128 v167; // [rsp+570h] [rbp+470h]
	__m128 v168; // [rsp+580h] [rbp+480h]
	__m128 v169; // [rsp+590h] [rbp+490h]
	__m128 v170; // [rsp+5A0h] [rbp+4A0h]
	__m256i v171; // [rsp+5B0h] [rbp+4B0h]
	__m256i v172; // [rsp+5D0h] [rbp+4D0h]
	char v173[96]; // [rsp+5F0h] [rbp+4F0h] BYREF
	unsigned __int64 v174; // [rsp+650h] [rbp+550h]
	int v175[196]; // [rsp+660h] [rbp+560h] BYREF
	__int64 v176[22]; // [rsp+970h] [rbp+870h] BYREF
	int v177[44]; // [rsp+A20h] [rbp+920h] BYREF
	__m128 v178; // [rsp+AD0h] [rbp+9D0h]
	__m128 v179; // [rsp+AF0h] [rbp+9F0h]
	__m128 v180[10]; // [rsp+C90h] [rbp+B90h] BYREF

	v2 = *(_QWORD*)(qword_140C65898 + 29256);
	v3 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64);
	v133 = v3;
	v132 = _mm_add_ps((__m128)xmmword_140B7A450, v3);
	v4 = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v2 + 456i64))(v2, &v132);
	v5 = 0i64;
	if (v4)
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	else
		v6 = 0i64;
	result = (int*)(*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 384))(a1);
	v8 = a1[146].m128_u64[1];
	if (v8)
	{
		v9 = 0i64;
		v9.m128_f32[0] = (float)*(int*)((*(__int64 (**)(void))(*(_QWORD*)v8 + 24i64))() + 8);
		result = (int*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[146].m128_u64[1] + 24i64))(a1[146].m128_u64[1]);
		v10 = 0i64;
		v10.m128_f32[0] = (float)result[1];
		v11 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, (__m128)0i64), _mm_unpacklo_ps(v9, (__m128)0i64));
		a1[148] = _mm_mul_ps((__m128)xmmword_140B7AC00, v11);
		a1[149] = _mm_mul_ps((__m128)xmmword_140B7ACC0, v11);
		if (v6)
		{
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 216i64))(v6);
			v14 = sub_14043ED60(v13, v12);
			if (v14 && (result = *(int**)(v14 + 8), (result[7] & 0x800) != 0))
			{
				v6 = 0i64;
			}
			else if (v6 == a1[151].m128_u64[0]
				&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[146].m128_u64[1] + 48i64))(a1[146].m128_u64[1])
				&& (v15 = (__int64*)a1[146].m128_u64[1],
					v16 = *v15,
					v17 = _mm_div_ps(
						_mm_sub_ps(v3, a1[150]),
						_mm_shuffle_ps((__m128)a1[117].m128_u32[0], (__m128)a1[117].m128_u32[0], 0)),
					v132 = v17,
					fabs(v17.m128_f32[0]) < (float)((float)*(int*)((*(__int64(__fastcall**)(__int64*))(v16 + 24))(v15)
						+ 4)
						* 0.23999999))
				&& (v18 = v132.m128_f32[2],
					v19 = fabs(v132.m128_f32[2]),
					result = (int*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[146].m128_u64[1] + 24i64))(a1[146].m128_u64[1]),
					v19 < (float)((float)result[2] * 0.23999999)))
			{
				v20 = v17.m128_f32[0];
				v21 = v17.m128_f32[0] + a1[149].m128_f32[0];
				v22 = v18 + a1[148].m128_f32[1];
				v23 = v18 + a1[149].m128_f32[1];
				a1[148].m128_f32[0] = v20 + a1[148].m128_f32[0];
				a1[148].m128_f32[1] = v22;
				a1[149].m128_f32[0] = v21;
				a1[149].m128_f32[1] = v23;
			}
			else
			{
				v24 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 112i64))(v6);
				v25 = 0i64;
				v26 = (__m128)v24[1].m128_u32[1];
				v134 = _mm_sub_ps(v24[1], *v24);
				v27 = (__m128)v24->m128_u32[1];
				v28 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v133.m128_u32[0], (__m128)v133.m128_u32[2]),
					_mm_unpacklo_ps(v26, (__m128)0i64));
				v134 = v28;
				v133 = _mm_sub_ps(
					v28,
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v133.m128_u32[0], (__m128)v133.m128_u32[2]),
						_mm_unpacklo_ps(v27, (__m128)0i64)));
				v132 = _mm_mul_ps(v133, v133);
				LODWORD(v29) = _mm_shuffle_ps(v132, v132, 170).m128_u32[0];
				if (_mm_shuffle_ps(v132, v132, 85).m128_f32[0] > v132.m128_f32[0])
					v25 = 1i64;
				v30 = 1 - v25;
				if (v29 > v132.m128_f32[v25])
					v25 = 2i64;
				v31 = (__m128)v132.m128_u32[-v30 + 3 - v25];
				v31.m128_f32[0] = (float)(v31.m128_f32[0] + v132.m128_f32[v30]) + v132.m128_f32[v25];
				if (v31.m128_f32[0] <= *(float*)&dword_140C3D7D8)
				{
					v36 = 0i64;
					v132 = 0i64;
					v35 = 0.0;
					v34 = 0.0;
					v33 = 0.0;
				}
				else
				{
					v32 = 1.0 / _mm_sqrt_ps(v31).m128_f32[0];
					v33 = v133.m128_f32[0] * v32;
					v34 = v133.m128_f32[1] * v32;
					v35 = v133.m128_f32[2] * v32;
					v132.m128_f32[0] = v133.m128_f32[0] * v32;
					v132.m128_f32[1] = v133.m128_f32[1] * v32;
					v132.m128_f32[2] = v133.m128_f32[2] * v32;
					v36 = v132;
				}
				v37 = 0i64;
				v133 = _mm_sub_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v36, v36, 210),
						_mm_shuffle_ps((__m128)xmmword_140B7A8C0, (__m128)xmmword_140B7A8C0, 201)),
					_mm_mul_ps(
						_mm_shuffle_ps(v36, v36, 201),
						_mm_shuffle_ps((__m128)xmmword_140B7A8C0, (__m128)xmmword_140B7A8C0, 210)));
				v132 = _mm_mul_ps(v133, v133);
				LODWORD(v38) = _mm_shuffle_ps(v132, v132, 170).m128_u32[0];
				if (_mm_shuffle_ps(v132, v132, 85).m128_f32[0] > v132.m128_f32[0])
					v37 = 1i64;
				v39 = 1 - v37;
				if (v38 > v132.m128_f32[v37])
					v37 = 2i64;
				v40 = (__m128)v132.m128_u32[-v39 + 3 - v37];
				v40.m128_f32[0] = (float)(v40.m128_f32[0] + v132.m128_f32[v39]) + v132.m128_f32[v37];
				if (v40.m128_f32[0] <= *(float*)&dword_140C3D7D8)
				{
					v45 = 0i64;
					v132 = 0i64;
					v44 = 0.0;
					v43 = 0.0;
					v42 = 0.0;
				}
				else
				{
					v41 = 1.0 / _mm_sqrt_ps(v40).m128_f32[0];
					v42 = v133.m128_f32[0] * v41;
					v43 = v133.m128_f32[1] * v41;
					v44 = v133.m128_f32[2] * v41;
					v132.m128_f32[0] = v133.m128_f32[0] * v41;
					v132.m128_f32[1] = v133.m128_f32[1] * v41;
					v132.m128_f32[2] = v133.m128_f32[2] * v41;
					v45 = v132;
				}
				v46 = 0i64;
				v136.m128_f32[0] = v42;
				v136.m128_u64[1] = LODWORD(v33);
				v137.m128_f32[0] = v43;
				v137.m128_u64[1] = LODWORD(v34);
				v138.m128_f32[0] = v44;
				v138.m128_u64[1] = LODWORD(v35);
				v47 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 201), _mm_shuffle_ps(v36, v36, 210));
				v132 = _mm_mul_ps(v45, v28);
				v48 = _mm_shuffle_ps(v36, v36, 201);
				v49 = _mm_mul_ps(v36, v28);
				v50 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 210), v48), v47);
				v136.m128_i32[1] = v50.m128_i32[0];
				v137.m128_i32[1] = _mm_shuffle_ps(v50, v50, 85).m128_u32[0];
				v48.m128_i32[0] = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
				v51 = _mm_mul_ps(v50, v28);
				v138.m128_i32[1] = v48.m128_i32[0];
				LODWORD(v52) = _mm_shuffle_ps(v132, v132, 170).m128_u32[0];
				if (_mm_shuffle_ps(v132, v132, 85).m128_f32[0] > v132.m128_f32[0])
					v46 = 1i64;
				v53 = 1 - v46;
				if (v52 > v132.m128_f32[v46])
					v46 = 2i64;
				v54 = (float)(v132.m128_f32[-v53 + 3 - v46] + v132.m128_f32[v53]) + v132.m128_f32[v46];
				v132 = v51;
				v55 = 0i64;
				v139.m128_f32[0] = -v54;
				v56 = _mm_shuffle_ps(v51, v51, 85).m128_f32[0] <= v51.m128_f32[0];
				LODWORD(v57) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
				if (!v56)
					v55 = 1i64;
				v58 = 1 - v55;
				if (v57 > v132.m128_f32[v55])
					v55 = 2i64;
				v59 = (float)(v132.m128_f32[-v58 + 3 - v55] + v132.m128_f32[v58]) + v132.m128_f32[v55];
				v132 = v49;
				v60 = 0i64;
				v139.m128_f32[1] = -v59;
				v56 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0] <= v49.m128_f32[0];
				LODWORD(v61) = _mm_shuffle_ps(v49, v49, 170).m128_u32[0];
				if (!v56)
					v60 = 1i64;
				v62 = 1 - v60;
				if (v61 > v132.m128_f32[v60])
					v60 = 2i64;
				v139.m128_i32[3] = 1065353216;
				v63 = *(_QWORD*)v6;
				v139.m128_f32[2] = -(float)((float)(v132.m128_f32[-v62 + 3 - v60] + v132.m128_f32[v62]) + v132.m128_f32[v60]);
				v64 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(v63 + 16))(v6, v62, v60, 2i64);
				v65 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v64 + 248i64))(v64);
				v66 = v134.m128_f32[1] - *(float*)(v65 + 4);
				v67 = v134.m128_f32[1] - *(float*)(v65 + 20);
				v68 = (float)*(int*)((*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[146].m128_u64[1] + 24i64))(a1[146].m128_u64[1])
					+ 8)
					* a1[117].m128_f32[0];
				v69 = *(_DWORD*)((*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[146].m128_u64[1] + 24i64))(a1[146].m128_u64[1])
					+ 4);
				*(_OWORD*)((char*)v140.m256i_i64 + 4) = 0ui64;
				*(float*)&v70 = 2.0 / v68;
				v140.m256i_i64[3] = 0i64;
				v141.m256i_i64[0] = 0i64;
				*(__int64*)((char*)&v141.m256i_i64[1] + 4) = 0i64;
				v71 = _mm_unpacklo_ps(v136, v137);
				v72 = _mm_unpackhi_ps(v136, v137);
				v140.m256i_i32[5] = v70;
				v141.m256i_i32[5] = 0;
				v141.m256i_i32[7] = 1065353216;
				*(float*)v140.m256i_i32 = 2.0 / (float)((float)v69 * a1[117].m128_f32[0]);
				v73 = _mm_unpackhi_ps(v138, v139);
				*(float*)&v141.m256i_i32[2] = 1.0 / (float)(v67 - v66);
				v74 = _mm_unpacklo_ps(v138, v139);
				v75 = _mm_shuffle_ps(v72, v73, 68);
				*(float*)&v141.m256i_i32[6] = *(float*)&v141.m256i_i32[2] * v67;
				v76 = _mm_shuffle_ps(v71, v74, 68);
				v77 = _mm_shuffle_ps(v71, v74, 238);
				v78 = _mm_shuffle_ps(v72, v73, 238);
				v79 = sub_1401B20F0(v146, (__m128*) & v140);
				v80 = v79 + 6;
				if (v79 < &v79[6])
				{
					v81 = (char*)((char*)v154 - (char*)v79);
					do
					{
						_mm_prefetch(&v79[1].m128_i8[8], 0);
						v82 = *v79++;
						_mm_stream_ps(
							(float*)&v81[(_QWORD)v79 - 16],
							_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v82, v82, 85), v77),
										_mm_mul_ps(_mm_shuffle_ps(v82, v82, 0), v76)),
									_mm_mul_ps(_mm_shuffle_ps(v82, v82, 170), v75)),
								_mm_mul_ps(_mm_shuffle_ps(v82, v82, 255), v78)));
					} while (v79 < v80);
				}
				_mm_sfence();
				v83 = 6i64;
				v84 = (__m128*)v154;
				v85 = 6i64;
				do
				{
					v86 = *v84++;
					v87 = _mm_mul_ps(v86, v86);
					v87.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v87.m128_f32[0] + _mm_shuffle_ps(v87, v87, 85).m128_f32[0])
							+ _mm_shuffle_ps(v87, v87, 170).m128_f32[0]);
					v84[-1] = _mm_mul_ps(_mm_shuffle_ps(v87, v87, 0), v86);
					--v85;
				} while (v85);
				v88 = (__m128)(unsigned int)dword_140C3B438;
				v88.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 24.75;
				v88.m128_f32[0] = sub_1408FE3D0(*(double*)v88.m128_u64);
				v144 = xmmword_140B7A4B0;
				v142 = xmmword_140B7B070;
				v143 = xmmword_140B7AFE0;
				sub_1407E4830((int*)v155, 0i64, 0x310ui64);
				v134.m128_u64[0] = (unsigned __int64)&v142;
				v176[0] = (__int64)&v142;
				v134.m128_u64[1] = (unsigned __int64)&v143;
				v135 = &v144;
				v176[1] = (__int64)&v143;
				v176[2] = (__int64)&v144;
				sub_1401AEFA0((__int64)v176, (__int64)v146);
				v163 = xmmword_140B7B0C0;
				v156 = v147;
				v89 = v155;
				v155[0] = (__int128)v146[0];
				v155[1] = (__int128)v146[1];
				v159 = v150;
				v90 = v177;
				v157 = v148;
				v162 = v153;
				v158 = v149;
				v160 = v151;
				v166 = 1098907648;
				v161 = v152;
				v164 = xmmword_140B7B1A0;
				v165 = _mm_unpacklo_ps((__m128)xmmword_140B7A490, _mm_unpacklo_ps(v88, (__m128)0i64));
				if ((((unsigned __int8)v177 | (unsigned __int8)v155) & 0xF) != 0)
				{
					sub_1407DB590(v177, (int*)v155, 0x310ui64);
				}
				else
				{
					v91 = 6i64;
					do
					{
						v92 = *v89;
						v93 = v89[1];
						v90 += 32;
						v89 += 8;
						*((_OWORD*)v90 - 8) = v92;
						v94 = *(v89 - 6);
						*((_OWORD*)v90 - 7) = v93;
						v95 = *(v89 - 5);
						*((_OWORD*)v90 - 6) = v94;
						v96 = *(v89 - 4);
						*((_OWORD*)v90 - 5) = v95;
						v97 = *(v89 - 3);
						*((_OWORD*)v90 - 4) = v96;
						v98 = *(v89 - 2);
						*((_OWORD*)v90 - 3) = v97;
						v99 = *(v89 - 1);
						*((_OWORD*)v90 - 2) = v98;
						*((_OWORD*)v90 - 1) = v99;
						--v91;
					} while (v91);
					*(_OWORD*)v90 = *v89;
				}
				v146[0].m128_u64[0] = (unsigned __int64)&v136;
				sub_1401AFC20((__int64*)v146, v145);
				v133.m128_u64[0] = (unsigned __int64)v177;
				v133.m128_u64[1] = (unsigned __int64)&v136;
				sub_1401AE910((__int128**)&v133, v177);
				v133.m128_u64[0] = (unsigned __int64)v145;
				v133.m128_u64[1] = (unsigned __int64)v180;
				v146[0].m128_u64[0] = (unsigned __int64)v145;
				v178 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v178, v178, 0), v136),
						_mm_mul_ps(_mm_shuffle_ps(v178, v178, 85), v137)),
					_mm_mul_ps(_mm_shuffle_ps(v178, v178, 170), v138));
				v146[0].m128_u64[1] = (unsigned __int64)v180;
				sub_1401AFB10((__m128**)v146, v180);
				v179 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v179, v179, 0), v136),
							_mm_mul_ps(_mm_shuffle_ps(v179, v179, 85), v137)),
						_mm_mul_ps(_mm_shuffle_ps(v179, v179, 170), v138)),
					v139);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
				v134.m128_u64[1] = a1[146].m128_u64[1];
				v134.m128_i32[0] = 1;
				HIDWORD(v135) = 0;
				(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
					qword_140C65670,
					&v134,
					&unk_140C3FE88,
					&unk_140C3FE88,
					&unk_140C3FE88);
				v134.m128_u64[1] = a1[147].m128_u64[0];
				v134.m128_i32[0] = 1;
				HIDWORD(v135) = 0;
				(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
					qword_140C65670,
					&v134,
					1i64);
				v134 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
					qword_140C65670,
					3i64,
					&v134);
				v100 = qword_140C657F0;
				if (qword_140C657F0)
				{
					if (*(_QWORD*)(qword_140C657F0 + 1240))
					{
						do
						{
							v101 = *(_QWORD*)(v100 + 1240);
							v102 = *(_QWORD**)(v101 + 520);
							if (v102)
								*v102 = *(_QWORD*)(v101 + 528);
							v103 = *(_QWORD*)(v101 + 528);
							if (v103)
								*(_QWORD*)(v103 + 520) = *(_QWORD*)(v101 + 520);
							*(_QWORD*)(v101 + 520) = 0i64;
							*(_QWORD*)(v101 + 528) = 0i64;
						} while (*(_QWORD*)(v100 + 1240));
					}
					for (i = *(_QWORD*)(v100 + 1248); i; i = *(_QWORD*)(v100 + 1248))
					{
						v105 = *(_QWORD**)(i + 392);
						if (v105)
							*v105 = *(_QWORD*)(i + 400);
						v106 = *(_QWORD*)(i + 400);
						if (v106)
							*(_QWORD*)(v106 + 392) = *(_QWORD*)(i + 392);
						*(_QWORD*)(i + 392) = 0i64;
						*(_QWORD*)(i + 400) = 0i64;
					}
					for (j = *(_QWORD*)(v100 + 1256); j; j = *(_QWORD*)(v100 + 1256))
					{
						v108 = *(_QWORD**)(j + 368);
						if (v108)
							*v108 = *(_QWORD*)(j + 376);
						v109 = *(_QWORD*)(j + 376);
						if (v109)
							*(_QWORD*)(v109 + 368) = *(_QWORD*)(j + 368);
						*(_QWORD*)(j + 368) = 0i64;
						*(_QWORD*)(j + 376) = 0i64;
					}
					v167 = v136;
					v168 = v137;
					v169 = v138;
					v170 = v139;
					v171 = v140;
					v172 = v141;
					do
					{
						v110 = v154[v5 / 2];
						v5 += 2i64;
						*(_OWORD*)&v172.m256i_u64[v5 + 2] = v110;
					} while (v5 < 12);
					v111 = v155;
					v112 = v175;
					v174 = __PAIR64__(LODWORD(v66), LODWORD(v67));
					if ((((unsigned __int8)v175 | (unsigned __int8)v155) & 0xF) != 0)
					{
						sub_1407DB590(v175, (int*)v155, 0x310ui64);
					}
					else
					{
						v113 = 6i64;
						do
						{
							v114 = *v111;
							v115 = v111[1];
							v112 += 32;
							v111 += 8;
							*((_OWORD*)v112 - 8) = v114;
							v116 = *(v111 - 6);
							*((_OWORD*)v112 - 7) = v115;
							v117 = *(v111 - 5);
							*((_OWORD*)v112 - 6) = v116;
							v118 = *(v111 - 4);
							*((_OWORD*)v112 - 5) = v117;
							v119 = *(v111 - 3);
							*((_OWORD*)v112 - 4) = v118;
							v120 = *(v111 - 2);
							*((_OWORD*)v112 - 3) = v119;
							v121 = *(v111 - 1);
							*((_OWORD*)v112 - 2) = v120;
							*((_OWORD*)v112 - 1) = v121;
							--v113;
						} while (v113);
						*(_OWORD*)v112 = *v111;
					}
					v122 = v169;
					v123 = v173;
					*(__m128*)(v100 + 176) = v167;
					*(__m128*)(v100 + 192) = v168;
					v124 = v170;
					*(__m128*)(v100 + 208) = v122;
					v125 = *(_OWORD*)v171.m256i_i8;
					*(__m128*)(v100 + 224) = v124;
					v126 = *(_OWORD*)&v171.m256i_u64[2];
					*(_OWORD*)(v100 + 240) = v125;
					v127 = *(_OWORD*)v172.m256i_i8;
					*(_OWORD*)(v100 + 256) = v126;
					v128 = *(_OWORD*)&v172.m256i_u64[2];
					*(_OWORD*)(v100 + 272) = v127;
					*(_OWORD*)(v100 + 288) = v128;
					do
					{
						v129 = *(_OWORD*)v123;
						v123 += 16;
						*(_OWORD*)&v123[v100 + 304 - (_QWORD)v173 - 16] = v129;
						--v83;
					} while (v83);
					*(_QWORD*)(v100 + 400) = v174;
					sub_1402C8730(v100 + 416, (__int64)v175);
					v130 = *(_QWORD*)v6;
					v131 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
					(*(void(__fastcall**)(__int64, __int128*, _QWORD))(v130 + 240))(v6, v154, *(unsigned int*)(v131 + 416));
					sub_1402C8AE0(v100, (__int64)v155);
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
				a1[150] = v3;
			}
		}
		a1[151].m128_u64[0] = v6;
	}
	return result;
}
// 1406BD826: variable 'v13' is possibly undefined
// 140B7A450: using guessed type __int128 xmmword_140B7A450;
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A8C0: using guessed type __int128 xmmword_140B7A8C0;
// 140B7AC00: using guessed type __int128 xmmword_140B7AC00;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7ACC0: using guessed type __int128 xmmword_140B7ACC0;
// 140B7AFE0: using guessed type __int128 xmmword_140B7AFE0;
// 140B7B070: using guessed type __int128 xmmword_140B7B070;
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B1A0: using guessed type __int128 xmmword_140B7B1A0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406BD700: using guessed type int var_3B0[44];
// 1406BD700: using guessed type double var_CA0[8];
// 1406BD700: using guessed type __m128 var_140[10];
// 1406BD700: using guessed type int var_770[196];

