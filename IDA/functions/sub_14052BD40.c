//----- (000000014052BD40) ----------------------------------------------------
__int64 __fastcall sub_14052BD40(__int64 a1)
{
	signed int v1; // r12d
	signed int v2; // r14d
	unsigned int v3; // ebx
	signed int v4; // edi
	int v6; // ecx
	__int64 result; // rax
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__m128 v13; // xmm9
	__m128 v14; // xmm8
	unsigned int* v15; // rax
	__m128i v16; // xmm1
	__m128i v17; // xmm3
	__m128 v18; // xmm2
	_QWORD* v19; // rcx
	unsigned int* v20; // rax
	signed int v21; // r8d
	signed int v22; // edx
	_QWORD* v23; // rcx
	__m128i v24; // xmm1
	__m128i v25; // xmm3
	__m128 v26; // xmm2
	__int64 v27; // rcx
	unsigned __int64 v28; // rbx
	float v29; // xmm0_4
	bool v30; // zf
	__m128i v31; // xmm2
	__m128 v32; // xmm0
	__int64(__fastcall * **v33)(_QWORD); // rcx
	__int64(__fastcall * *v34)(_QWORD); // rax
	int* v35; // rax
	unsigned int v36; // esi
	float v37; // xmm6_4
	unsigned int v38; // r14d
	__int32 v39; // r12d
	unsigned int v40; // r13d
	__int64 v41; // rdi
	__int64(__fastcall * **v42)(_QWORD); // rcx
	unsigned int v43; // eax
	__int64 v44; // r8
	__int64 v45; // rcx
	__int64 v46; // rdx
	__int64 v47; // rcx
	__int64 v48; // rcx
	unsigned int* v49; // rax
	int v50; // r9d
	__m128i v51; // xmm2
	__m128i v52; // xmm1
	__m128i v53; // xmm3
	__m128 v54; // xmm5
	__m128 v55; // xmm2
	signed int v56; // eax
	signed int v57; // ecx
	__m128 v58; // xmm5
	unsigned __int64* v59; // rcx
	__m128* v60; // rcx
	__int64 v61; // rdi
	__int64(__fastcall * **v62)(_QWORD); // rcx
	unsigned int v63; // eax
	__int64 v64; // r8
	__int64 v65; // rcx
	__int64 v66; // rdx
	__m128* v67; // rax
	unsigned __int64* v68; // rcx
	__m128* v69; // rcx
	int* v70; // rax
	__int64 v71; // rcx
	__int64 v72; // rax
	unsigned __int64 v73; // rdx
	__int64 v74; // rsi
	__int64 v75; // r13
	int v76; // edx
	int v77; // eax
	__m128* v78; // rax
	__m128 v79; // xmm3
	__m128 v80; // xmm2
	__m128 v81; // xmm5
	__m128 v82; // xmm2
	int v83; // ecx
	__m128 v84; // xmm1
	__m128 v85; // xmm4
	int v86; // ecx
	float v87; // xmm3_4
	int v88; // ecx
	int v89; // ecx
	int v90; // ecx
	float v91; // xmm3_4
	int v92; // ecx
	__int64 v93; // rcx
	_DWORD* v94; // rax
	__int64 v95; // rax
	__int64 v96; // r10
	__int64 v97; // r9
	double v98; // xmm4_8
	int v99; // ecx
	int v100; // eax
	double v101; // xmm1_8
	__int64 v102; // rax
	int v103; // ebx
	int v104; // edi
	__int32 v105; // edx
	int v106; // r14d
	int v107; // r12d
	__int64 v108; // rcx
	int v109; // eax
	int v110; // ecx
	double v111; // xmm1_8
	__int64 v112; // rax
	int v113; // ebx
	_QWORD* v114; // rcx
	int v115; // edi
	__int64 v116; // rdx
	int v117; // eax
	int v118; // eax
	int v119; // eax
	float* v120; // rax
	int v121; // edx
	float v122; // xmm6_4
	__int64 v123; // rcx
	__int16* v124; // rax
	unsigned __int64 v125; // rbx
	__int64 v126; // rdi
	__int64 v127; // rax
	float v128; // xmm6_4
	__m128 v129; // xmm3
	float v130; // xmm1_4
	int v131; // ecx
	float v132; // xmm2_4
	float v133; // xmm5_4
	float v134; // xmm1_4
	float v135; // xmm0_4
	_QWORD* v136; // rcx
	__int16* v137; // rax
	unsigned int v138; // eax
	_QWORD* v139; // rdi
	unsigned __int64 v140; // rcx
	unsigned __int64 v141; // rsi
	unsigned __int64 v142; // rdx
	unsigned int* v143; // rbx
	int v144; // r12d
	int v145; // r13d
	float* v146; // rax
	unsigned __int64 v147; // rsi
	float v148; // xmm6_4
	unsigned __int64 v149; // rbx
	__int64 v150; // r14
	__int64 v151; // rax
	float v152; // xmm6_4
	__m128 v153; // xmm3
	float v154; // xmm1_4
	int v155; // ecx
	int v156; // eax
	float v157; // xmm1_4
	float v158; // xmm5_4
	float v159; // xmm2_4
	float v160; // xmm0_4
	_QWORD* v161; // rcx
	__int64 v162; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v165; // eax
	__int64 v166; // rdi
	unsigned int v167; // ebx
	__int64 v168; // rcx
	bool v169; // cc
	__m128 v170; // xmm3
	float v171; // xmm6_4
	_QWORD* v172; // rcx
	double v173; // xmm3_8
	float v174; // [rsp+40h] [rbp-C0h] BYREF
	int v175; // [rsp+44h] [rbp-BCh]
	int v176; // [rsp+48h] [rbp-B8h]
	int v177; // [rsp+50h] [rbp-B0h] BYREF
	int v178; // [rsp+54h] [rbp-ACh]
	int v179; // [rsp+58h] [rbp-A8h]
	__m128 v180; // [rsp+60h] [rbp-A0h] BYREF
	float v181; // [rsp+70h] [rbp-90h] BYREF
	unsigned __int64 v182; // [rsp+78h] [rbp-88h] BYREF
	int v183; // [rsp+80h] [rbp-80h] BYREF
	signed int v184; // [rsp+84h] [rbp-7Ch]
	signed int v185; // [rsp+88h] [rbp-78h]
	signed int v186; // [rsp+8Ch] [rbp-74h]
	int v187; // [rsp+90h] [rbp-70h]
	unsigned __int64 v188; // [rsp+98h] [rbp-68h] BYREF
	unsigned __int64 v189; // [rsp+A0h] [rbp-60h] BYREF
	int v190; // [rsp+A8h] [rbp-58h]
	unsigned int v191; // [rsp+ACh] [rbp-54h]
	__m128 v192; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v193; // [rsp+C0h] [rbp-40h]
	__int64 v194; // [rsp+D0h] [rbp-30h] BYREF
	int v195; // [rsp+D8h] [rbp-28h] BYREF
	int v196; // [rsp+DCh] [rbp-24h]
	__m128 v197; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v198; // [rsp+F0h] [rbp-10h]
	__int64 v199; // [rsp+100h] [rbp+0h] BYREF
	__m128 v200; // [rsp+110h] [rbp+10h] BYREF
	__m128 v201; // [rsp+120h] [rbp+20h]
	__int64 v202; // [rsp+130h] [rbp+30h]
	__m128 v203; // [rsp+140h] [rbp+40h] BYREF
	__m128 v204; // [rsp+150h] [rbp+50h]
	__m128 v205; // [rsp+180h] [rbp+80h] BYREF
	__int128 v206[6]; // [rsp+190h] [rbp+90h] BYREF

	v1 = *(_DWORD*)(a1 + 716);
	v2 = *(_DWORD*)(a1 + 720);
	v3 = *(_DWORD*)(a1 + 724);
	v4 = *(_DWORD*)(a1 + 728);
	v176 = v1;
	v179 = v2;
	v187 = v3;
	v175 = v4;
	sub_14052B440(a1, &v183);
	v6 = *(_DWORD*)(a1 + 1216);
	if (!v6
		&& (v183 >= v185
			|| v184 >= v186
			|| *(float*)(a1 + 1296) <= *(float*)(a1 + 1280)
			|| *(float*)(a1 + 1300) <= *(float*)(a1 + 1284)))
	{
		result = qword_140C63650;
		v180 = (__m128)xmmword_140C777D0;
		v8 = *(_QWORD**)(qword_140C63650 + 1848);
		if (v8)
			return sub_140103CF0(
				v8,
				(unsigned int*)&v183,
				&v180,
				0,
				COERCE_INT(
					(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
					* *(float*)(qword_140C63650 + 1860)));
		return result;
	}
	if (v6)
	{
		v9 = *(_QWORD*)(a1 + 16);
		*(_BYTE*)(a1 + 28) |= 2u;
		if (v9)
		{
			if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9))
				sub_1400C88A0(*(_QWORD*)(a1 + 16));
			v10 = *(_QWORD*)(a1 + 16);
			v11 = *(_QWORD*)(v10 + 16);
			*(_BYTE*)(v10 + 29) |= 1u;
			if (v11)
				sub_1400C8870(v11);
		}
	}
	if (*(_DWORD*)(a1 + 1264) == 4 && (v12 = *(_QWORD*)(a1 + 1192)) != 0)
	{
		if (*(_DWORD*)(v12 + 32))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v13 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(0))));
			v193 = v13;
			v14 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(0))));
			v192 = v14;
			v193.m128_f32[0] = (float)v183;
			v15 = sub_140109840((float*)(a1 + 1472), &v180);
			v16 = _mm_cvtsi32_si128(v15[1]);
			v17 = _mm_cvtsi32_si128(*v15);
			v180 = (__m128)xmmword_140B7B240;
			v18 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(0))));
			v19 = *(_QWORD**)(a1 + 1472);
			v193.m128_f32[1] = (float)v186;
			v192.m128_f32[1] = (float)v184;
			v192.m128_f32[0] = v193.m128_f32[0]
				- (float)((float)((float)(v186 - v184) / _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
					* v18.m128_f32[0]);
			if (v19)
				sub_140103E60(
					v19,
					&v192,
					&v180,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1480)) * *(float*)(a1 + 1484)));
			v192 = v14;
			v193 = v13;
			v192.m128_f32[0] = (float)v185;
			v20 = sub_140109840((float*)(a1 + 1520), &v180);
			v21 = v186;
			v22 = v184;
			v23 = *(_QWORD**)(a1 + 1520);
			v24 = _mm_cvtsi32_si128(v20[1]);
			v25 = _mm_cvtsi32_si128(*v20);
			v180 = (__m128)xmmword_140B7B240;
			v26 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(0))));
			v193.m128_f32[1] = (float)v186;
			v192.m128_f32[1] = (float)v184;
			v193.m128_f32[0] = (float)((float)((float)(v186 - v184) / _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
				* v26.m128_f32[0])
				+ v192.m128_f32[0];
			if (v23)
			{
				sub_140103E60(
					v23,
					&v192,
					&v180,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1528)) * *(float*)(a1 + 1532)));
				v21 = v186;
				v22 = v184;
			}
			v27 = *(_QWORD*)(a1 + 1192);
			v180.m128_u64[0] = __PAIR64__(v22, v183);
			v180.m128_u64[1] = __PAIR64__(v21, v185);
			sub_1405286F0(v27, (unsigned int*)&v180);
		}
	}
	else if (*(_QWORD*)(a1 + 1152))
	{
		if (*(_DWORD*)(a1 + 1412) == 2)
		{
			if (*(_QWORD*)(a1 + 1416))
			{
				v47 = *(_QWORD*)(a1 + 1424);
				if (v47)
				{
					if (*(_QWORD*)(a1 + 1432) && *(_QWORD*)(a1 + 1440) && *(_QWORD*)(a1 + 1464))
					{
						if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v47 + 48i64))(v47))
							sub_14052D5C0(a1);
						v48 = *(_QWORD*)(a1 + 1448);
						if (v48
							&& (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v48 + 48i64))(v48) || *(_DWORD*)(a1 + 1568)))
						{
							sub_14052D8A0(a1);
						}
						v194 = *(_QWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1416) + 24i64))(*(_QWORD*)(a1 + 1416))
							+ 4);
						v49 = sub_14052B810(a1, &v197);
						v50 = *(_DWORD*)(a1 + 1264);
						v28 = 0i64;
						v51 = _mm_cvtsi32_si128(0);
						v52 = _mm_cvtsi32_si128(v49[1]);
						v53 = _mm_cvtsi32_si128(*v49);
						v204 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v49[2]), v51),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v49[3]), v51)));
						v54 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v53, v51), _mm_unpacklo_epi32(v52, v51)));
						v203 = v54;
						v201 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v185), v51),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v186), v51)));
						v200 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v183), v51),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v184), v51)));
						if (v50 <= 2)
						{
							v55 = *(__m128*)(a1 + 1248);
							v56 = v185 - v183;
							v57 = v186 - v184;
							v58 = _mm_add_ps(v54, v55);
							v203 = v58;
							if (v50 == 1)
							{
								v58 = _mm_sub_ps(v58, _mm_div_ps(v55, (__m128)xmmword_140B7B2F0));
								v56 = (int)(float)((float)v56 * 0.5);
								v57 = (int)(float)((float)v57 * 0.5);
								v203 = v58;
							}
							v204 = _mm_add_ps(
								_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v56), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(0)))),
								v58);
						}
						v180 = (__m128)xmmword_140B7B240;
						v197.m128_u64[0] = a1;
						v198 = 0i64;
						v197.m128_u64[1] = (unsigned __int64)sub_14052DB00;
						(*(void(__fastcall**)(__int64, __m128*, __int64*, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 248i64))(
							qword_140C65680,
							&v197,
							&v194,
							&v203,
							&v200,
							&v180,
							1);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
						v180 = (__m128)xmmword_140B7B240;
						v197.m128_u64[0] = a1;
						v198 = 0i64;
						v197.m128_u64[1] = (unsigned __int64)sub_14052DE20;
						(*(void(__fastcall**)(__int64, __m128*, __int64*, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 248i64))(
							qword_140C65680,
							&v197,
							&v194,
							&v203,
							&v200,
							&v180,
							1);
						goto LABEL_23;
					}
				}
			}
		}
	}
	v28 = 0i64;
LABEL_23:
	if (*(_QWORD*)(a1 + 1152) && *(_DWORD*)(a1 + 1412) == 2)
	{
		LODWORD(v29) = sub_14052B130(a1).m128_u32[0];
		v30 = *(_DWORD*)(a1 + 1264) == 1;
		v181 = v29;
		if (v30)
			v181 = v29 * 0.5;
		if (*(_QWORD*)(a1 + 1192) && (unsigned int)sub_14052B1A0(a1, (int*)&v189, &v180, &v181))
		{
			v31 = _mm_cvtsi32_si128(0);
			v32 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v183), v31),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v184), v31)));
			if (*(int*)(a1 + 1264) <= 2)
			{
				v33 = *(__int64(__fastcall****)(_QWORD))(a1 + 1152);
				v34 = *v33;
				v197 = _mm_sub_ps(v32, *(__m128*)(a1 + 1248));
				LODWORD(v174) = (*v34)(v33);
				v35 = sub_140538120(a1 + 1376, (int*)&v174);
				*((_OWORD*)v35 + 2) = 0i64;
				v35[4] = 1065353216;
			}
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
			v30 = *(_DWORD*)(a1 + 1264) == 4;
			v36 = v189;
			v37 = v181;
			v38 = HIDWORD(v189);
			v39 = v190;
			v40 = v191;
			*(unsigned __int64*)((char*)v192.m128_u64 + 4) = v189;
			v192.m128_i32[3] = v190;
			v193.m128_u64[0] = v191;
			v192.m128_i32[0] = 0;
			if (v30)
			{
				v41 = *(_QWORD*)(a1 + 1192);
				if (*(_QWORD*)(v41 + 24))
				{
					do
					{
						v42 = *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(v41 + 16) + 8 * v28);
						v43 = (**v42)(v42);
						v44 = *(_QWORD*)(a1 + 1384);
						v45 = *(_QWORD*)(v44 + 8);
						v46 = v44;
						while (v45)
						{
							if (*(_DWORD*)(v45 + 32) < v43)
							{
								v45 = *(_QWORD*)(v45 + 24);
							}
							else
							{
								v46 = v45;
								v45 = *(_QWORD*)(v45 + 16);
							}
						}
						if (v46 == v44 || v43 < *(_DWORD*)(v46 + 32))
						{
							v188 = *(_QWORD*)(a1 + 1384);
							v59 = &v188;
						}
						else
						{
							v189 = v46;
							v59 = &v189;
						}
						v60 = (__m128*) * v59;
						if (v60 != *(__m128**)(a1 + 1384))
							sub_140773080(v60 + 3, &v180, *(float*)v31.m128i_i32, v37, (__int64)&v192);
						++v28;
					} while (v28 < *(_QWORD*)(v41 + 24));
				}
				v28 = 0i64;
			}
			else
			{
				LODWORD(v174) = (***(__int64(__fastcall****)(_QWORD))(a1 + 1152))(*(_QWORD*)(a1 + 1152));
				v67 = (__m128*)sub_140538120(a1 + 1376, (int*)&v174);
				sub_140773080(v67, &v180, *(float*)v31.m128i_i32, v37, (__int64)&v192);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
			v30 = *(_DWORD*)(a1 + 1264) == 4;
			v192.m128_i32[0] = 0;
			*(unsigned __int64*)((char*)v192.m128_u64 + 4) = __PAIR64__(v38, v36);
			v192.m128_i32[3] = v39;
			v193.m128_u64[0] = v40;
			if (v30)
			{
				v61 = *(_QWORD*)(a1 + 1192);
				if (*(_QWORD*)(v61 + 24))
				{
					do
					{
						v62 = *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(v61 + 16) + 8 * v28);
						v63 = (**v62)(v62);
						v64 = *(_QWORD*)(a1 + 1384);
						v65 = *(_QWORD*)(v64 + 8);
						v66 = v64;
						while (v65)
						{
							if (*(_DWORD*)(v65 + 32) < v63)
							{
								v65 = *(_QWORD*)(v65 + 24);
							}
							else
							{
								v66 = v65;
								v65 = *(_QWORD*)(v65 + 16);
							}
						}
						if (v66 == v64 || v63 < *(_DWORD*)(v66 + 32))
						{
							v188 = *(_QWORD*)(a1 + 1384);
							v68 = &v188;
						}
						else
						{
							v189 = v66;
							v68 = &v189;
						}
						v69 = (__m128*) * v68;
						if (v69 != *(__m128**)(a1 + 1384))
							sub_140773320(v69 + 3, &v180, 0.0, v37, (__int64)&v192, 0);
						++v28;
					} while (v28 < *(_QWORD*)(v61 + 24));
				}
			}
			else
			{
				LODWORD(v174) = (***(__int64(__fastcall****)(_QWORD))(a1 + 1152))(*(_QWORD*)(a1 + 1152));
				v78 = (__m128*)sub_140538120(a1 + 1376, (int*)&v174);
				sub_140773320(v78, &v180, 0.0, v37, (__int64)&v192, 0);
			}
			LODWORD(v174) = (***(__int64(__fastcall****)(_QWORD))(a1 + 1152))(*(_QWORD*)(a1 + 1152));
			v70 = sub_140538120(a1 + 1376, (int*)&v174);
			sub_140773A90((__int64)v70, &v180, 0.0, v37, &v192);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			v2 = v179;
			v4 = v175;
			v1 = v176;
		}
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
	if (*(_DWORD*)(a1 + 1340))
	{
		if (*(_DWORD*)(a1 + 1264) != 4)
		{
			v71 = *(_QWORD*)(a1 + 1152);
			if (v71)
			{
				v72 = (*(__int64 (**)(void))(*(_QWORD*)v71 + 128i64))();
				v73 = 0i64;
				v189 = 0i64;
				v188 = v72;
				if (v72)
				{
					v74 = 0i64;
					do
					{
						v75 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 1152) + 120i64))(
							*(_QWORD*)(a1 + 1152),
							v73);
						v180 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(
									_mm_cvtsi32_si128(*(_DWORD*)(v75 + 8)),
									_mm_cvtsi32_si128(*(_DWORD*)(v75 + 16))),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v75 + 12)), _mm_cvtsi32_si128(0))));
						sub_14052AB00(a1, &v177, v180.m128_f32);
						v76 = v177;
						if (*(int*)(a1 + 1264) > 2)
						{
							v77 = v178;
						}
						else
						{
							v76 = v177 - (int)*(float*)(a1 + 1248);
							v77 = v178 - (int)*(float*)(a1 + 1252);
							v177 = v76;
							v178 = v77;
						}
						if (v76 >= v1 && v76 < v187 && v77 >= v2 && v77 < v4)
						{
							v79 = _mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(
										_mm_cvtsi32_si128(*(_DWORD*)(v75 + 8)),
										_mm_cvtsi32_si128(*(_DWORD*)(v75 + 16))),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v75 + 12)), _mm_cvtsi32_si128(0))));
							v80 = _mm_shuffle_ps(v79, v79, 170);
							v79.m128_f32[0] = (float)((float)(v79.m128_f32[0] + *(float*)&dword_140C3B738)
								/ *(float*)&dword_140C66F1C)
								+ 0.5;
							v80.m128_f32[0] = (float)((float)(v80.m128_f32[0] + *(float*)&dword_140C3B738)
								/ *(float*)&dword_140C66F48)
								+ 1.0;
							v205 = _mm_unpacklo_ps(_mm_unpacklo_ps(v79, (__m128)0i64), _mm_unpacklo_ps(v80, (__m128)0i64));
							v81 = _mm_shuffle_ps(v205, v205, 85);
							v82 = v81;
							v83 = (int)v81.m128_f32[0];
							if ((int)v81.m128_f32[0] != 0x80000000 && (float)v83 != v81.m128_f32[0])
								v82 = (__m128)COERCE_UNSIGNED_INT((float)(v83 - (_mm_movemask_ps(_mm_unpacklo_ps(v81, v81)) & 1)));
							v84 = (__m128)v205.m128_u32[0];
							v81.m128_f32[0] = v81.m128_f32[0] * 0.5;
							v85 = v81;
							v85.m128_f32[0] = v81.m128_f32[0] + v205.m128_f32[0];
							v86 = (int)(float)(v81.m128_f32[0] + v205.m128_f32[0]);
							if (v86 != 0x80000000 && (float)v86 != v85.m128_f32[0])
								v85 = (__m128)COERCE_UNSIGNED_INT((float)(v86 - (_mm_movemask_ps(_mm_unpacklo_ps(v81, v81)) & 1)));
							v85.m128_f32[0] = v85.m128_f32[0] - (float)(v82.m128_f32[0] * 2.0);
							v87 = (float)(v85.m128_f32[0] * 0.33333334) + 0.0000099999997;
							v88 = (int)v87;
							if ((int)v87 != 0x80000000 && (float)v88 != v87)
								v87 = (float)(v88 - (_mm_movemask_ps(_mm_unpacklo_ps(v85, v85)) & 1));
							v84.m128_f32[0] = v205.m128_f32[0] - v81.m128_f32[0];
							v89 = (int)(float)(v205.m128_f32[0] - v81.m128_f32[0]);
							if (v89 != 0x80000000 && (float)v89 != v84.m128_f32[0])
								v84 = (__m128)COERCE_UNSIGNED_INT((float)(v89 - (_mm_movemask_ps(_mm_unpacklo_ps(v84, v84)) & 1)));
							v84.m128_f32[0] = (float)((float)((float)((float)((float)(v84.m128_f32[0] - v82.m128_f32[0])
								- (float)(v87 * 3.0))
								+ 1.0)
								+ (float)(v85.m128_f32[0] - (float)(v87 * 3.0)))
								* 0.33333334)
								+ 0.0000099999997;
							v90 = (int)v84.m128_f32[0];
							if ((int)v84.m128_f32[0] != 0x80000000 && (float)v90 != v84.m128_f32[0])
								v84.m128_f32[0] = (float)(v90 - (_mm_movemask_ps(_mm_unpacklo_ps(v84, v84)) & 1));
							v91 = (float)(v87 * 2.0) + v82.m128_f32[0];
							v82.m128_f32[0] = (float)(v82.m128_f32[0] - v84.m128_f32[0]) * 0.5;
							v92 = (int)v82.m128_f32[0];
							v195 = (int)(float)(v91 + v84.m128_f32[0]);
							if ((int)v82.m128_f32[0] != 0x80000000 && (float)v92 != v82.m128_f32[0])
								v82.m128_f32[0] = (float)(v92 - (_mm_movemask_ps(_mm_unpacklo_ps(v82, v82)) & 1));
							v93 = *(_QWORD*)(a1 + 1152);
							v196 = (int)v82.m128_f32[0];
							if (v93)
							{
								if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v93 + 136i64))(v93, &v195))
								{
									v94 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
									if (v195 >= *v94 && v195 < v94[2] && v196 >= v94[1] && v196 < v94[3])
									{
										v95 = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 1152) + 96i64))(
											*(_QWORD*)(a1 + 1152),
											&v195);
										if (v95 != -1)
										{
											if (*(_BYTE*)(v95 + *(_QWORD*)(a1 + 1352)))
											{
												v96 = *(_QWORD*)(a1 + 1200);
												v97 = *(_QWORD*)(v74 + v96);
												if (v97)
													sub_140101470(*(_QWORD**)(v74 + v96), (int*)&v194);
												else
													v194 = 0i64;
												*(_QWORD*)&v98 = (unsigned int)dword_140C63664;
												if (v97)
												{
													if ((int)((__int64)(*(_QWORD*)(v97 + 96) - *(_QWORD*)(v97 + 88)) >> 3) > 0)
														v97 = **(_QWORD**)(v97 + 88);
													*(_QWORD*)&v101 = (unsigned int)dword_140C63664;
													*(float*)&v101 = (float)(*(float*)&dword_140C63664 - *(float*)(v74 + v96 + 8))
														* *(float*)(v74 + v96 + 12);
													v102 = sub_140101180(v97, v101, 0i64);
													v99 = *(_DWORD*)(v102 + 72);
													LODWORD(v199) = v99;
													v100 = *(_DWORD*)(v102 + 76);
													HIDWORD(v199) = v100;
												}
												else
												{
													v99 = 0;
													v199 = 0i64;
													v100 = 0;
												}
												v103 = v177;
												v104 = v178;
												v105 = v177 - v99;
												v106 = v177 - v99 + v194;
												v192.m128_u64[0] = (unsigned __int64)&v177;
												v107 = v178 - v100 + HIDWORD(v194);
												v193.m128_i32[1] = v178 - v100;
												v108 = *(_QWORD*)(v74 + v96);
												v192.m128_u64[1] = (unsigned __int64)&v199;
												v193.m128_i32[0] = v105;
												if (v108)
												{
													if ((int)((__int64)(*(_QWORD*)(v108 + 96) - *(_QWORD*)(v108 + 88)) >> 3) > 0)
														v108 = **(_QWORD**)(v108 + 88);
													HIDWORD(v111) = HIDWORD(v98);
													*(float*)&v111 = (float)(*(float*)&v98 - *(float*)(v74 + v96 + 8))
														* *(float*)(v74 + v96 + 12);
													v112 = sub_140101180(v108, v111, 0i64);
													v104 = v178;
													v103 = v177;
													v110 = *(_DWORD*)(v112 + 72);
													LODWORD(v202) = v110;
													v109 = *(_DWORD*)(v112 + 76);
													HIDWORD(v202) = v109;
												}
												else
												{
													v109 = 0;
													v110 = 0;
													v202 = 0i64;
												}
												v113 = v103 - v110;
												v114 = *(_QWORD**)(v74 + v96);
												v115 = v104 - v109;
												v116 = *(unsigned int*)qword_140C63750;
												if (v114)
												{
													v117 = dword_140C4A160;
													*(float*)&v98 = *(float*)&v98 - *(float*)(v74 + v96 + 8);
													if ((int)v116 < dword_140C4A160)
														v117 = *(_DWORD*)qword_140C63750;
													*(float*)&v98 = *(float*)&v98 * *(float*)(v74 + v96 + 12);
													sub_1401039E0(v114, &v177, &stru_140C4A170[v117], v98);
												}
												if (*(_DWORD*)(a1 + 1328)
													|| (v118 = *(_DWORD*)(a1 + 848), v118 >= v113)
													&& v118 < v106
													&& (v119 = *(_DWORD*)(a1 + 852), v119 >= v115)
													&& v119 < v107)
												{
													v120 = (float*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64)
														+ 32i64))(
															*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
															v116);
													v121 = *(_DWORD*)(v75 + 20);
													v182 = 0i64;
													v122 = *v120;
													v124 = sub_14034BDD0(v123, v121);
													if ((*(int(__fastcall**)(__int64, _QWORD, __int16*, __int64, unsigned __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
														qword_140C65680,
														*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
														v124,
														-1i64,
														&v182) < 0
														|| (v125 = v182,
															v126 = *(_QWORD*)v182,
															v127 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v182 + 72i64))(v182),
															(*(int(__fastcall**)(unsigned __int64, __int64, float*))(v126 + 168))(
																v125,
																v127,
																&v181) < 0))
													{
														v181 = 0.0;
													}
													if (v182)
														(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v182 + 8i64))(v182);
													v129 = (__m128)LODWORD(v181);
													v128 = v122 + 15.0;
													v129.m128_f32[0] = v181 + 40.0;
													v130 = (float)(v181 + 40.0) * 0.5;
													v131 = (int)v130;
													if ((int)v130 != 0x80000000 && (float)v131 != v130)
														v130 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v129, v129)) & 1) + v131);
													v132 = (float)v178;
													v133 = (float)v187;
													v177 -= (int)v130;
													v134 = (float)v177;
													v200.m128_f32[1] = (float)v178;
													v200.m128_f32[0] = (float)v177;
													v201.m128_f32[1] = (float)v178 + v128;
													v201.m128_f32[0] = (float)v177 + v129.m128_f32[0];
													if (v201.m128_f32[0] > (float)v187)
													{
														v201.m128_f32[0] = (float)v187;
														v134 = v133 - v129.m128_f32[0];
														v200.m128_f32[0] = v133 - v129.m128_f32[0];
													}
													v1 = v176;
													if (v134 < (float)v176)
													{
														v200.m128_f32[0] = (float)v176;
														v201.m128_f32[0] = (float)v176 + v129.m128_f32[0];
													}
													v4 = v175;
													v135 = (float)v175;
													if ((float)((float)v178 + v128) > (float)v175)
													{
														v201.m128_f32[1] = (float)v175;
														v132 = v135 - v128;
														v200.m128_f32[1] = v135 - v128;
													}
													v2 = v179;
													if (v132 < (float)v179)
													{
														v200.m128_f32[1] = (float)v179;
														v201.m128_f32[1] = (float)v179 + v128;
													}
													v136 = *(_QWORD**)(a1 + 1080);
													v197 = (__m128)xmmword_140B7B240;
													if (v136)
														sub_140103E60(
															v136,
															&v200,
															&v197,
															0,
															COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1088)) * *(float*)(a1 + 1092)));
													v137 = sub_14034BDD0((__int64)v136, *(_DWORD*)(v75 + 20));
													(*(void(__fastcall**)(__int64, _QWORD, __int16*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680 + 264i64))(
														qword_140C65680,
														*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
														v137,
														-1i64,
														&v200,
														5,
														a1 + 1136,
														1);
												}
												else
												{
													v1 = v176;
													v4 = v175;
													v2 = v179;
												}
											}
										}
									}
								}
							}
						}
						v74 += 48i64;
						v73 = v189 + 1;
						v189 = v73;
					} while (v73 < v188);
				}
				if (*(_DWORD*)(a1 + 1336))
				{
					v138 = (***(__int64(__fastcall****)(_QWORD, unsigned __int64))(a1 + 1152))(*(_QWORD*)(a1 + 1152), v73);
					v139 = *(_QWORD**)(a1 + 1600);
					v140 = v139[1];
					v141 = (unsigned __int64)v139;
					v189 = (unsigned __int64)v139;
					v142 = v140;
					if (v140)
					{
						do
						{
							if (v138 >= *(_DWORD*)(v142 + 32))
							{
								v142 = *(_QWORD*)(v142 + 24);
							}
							else
							{
								v141 = v142;
								v142 = *(_QWORD*)(v142 + 16);
							}
						} while (v142);
						v189 = v141;
						do
						{
							if (*(_DWORD*)(v140 + 32) < v138)
							{
								v140 = *(_QWORD*)(v140 + 24);
							}
							else
							{
								v139 = (_QWORD*)v140;
								v140 = *(_QWORD*)(v140 + 16);
							}
						} while (v140);
					}
					while (v139 != (_QWORD*)v141)
					{
						v143 = (unsigned int*)v139[5];
						v197 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v143[4]), _mm_cvtsi32_si128(v143[5])),
								(__m128i)0i64));
						sub_14052AB00(a1, &v182, v197.m128_f32);
						v144 = v182;
						v145 = HIDWORD(v182);
						if (*(int*)(a1 + 1264) <= 2)
						{
							v144 = v182 - (int)*(float*)(a1 + 1248);
							v145 = HIDWORD(v182) - (int)*(float*)(a1 + 1252);
							v182 = __PAIR64__(v145, v144);
						}
						if (v144 >= v176 && v144 < v187 && v145 >= v2 && v145 < v175)
						{
							sub_14018D540(&v180, (__int64)L"%u - %u", v143[2], v143[3]);
							v146 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
							v147 = v180.m128_u64[0];
							v148 = *v146;
							v188 = 0i64;
							if ((*(int(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, unsigned __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
								qword_140C65680,
								*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
								v180.m128_u64[0],
								-1i64,
								&v188) < 0
								|| (v149 = v188,
									v150 = *(_QWORD*)v188,
									v151 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v188 + 72i64))(v188),
									(*(int(__fastcall**)(unsigned __int64, __int64, float*))(v150 + 168))(v149, v151, &v174) < 0))
							{
								v174 = 0.0;
							}
							if (v188)
								(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v188 + 8i64))(v188);
							v153 = (__m128)LODWORD(v174);
							v152 = v148 + 15.0;
							v153.m128_f32[0] = v174 + 40.0;
							v154 = (float)(v174 + 40.0) * 0.5;
							v155 = (int)v154;
							if ((int)v154 != 0x80000000 && (float)v155 != v154)
								v154 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v153, v153)) & 1) + v155);
							v156 = (int)v154;
							v157 = (float)v145;
							v158 = (float)v187;
							LODWORD(v182) = v144 - v156;
							v203.m128_f32[1] = (float)v145;
							v159 = (float)(v144 - v156);
							v203.m128_f32[0] = v159;
							v204.m128_f32[1] = (float)v145 + v152;
							v204.m128_f32[0] = v159 + v153.m128_f32[0];
							if ((float)(v159 + v153.m128_f32[0]) > (float)v187)
							{
								v204.m128_f32[0] = (float)v187;
								v159 = v158 - v153.m128_f32[0];
								v203.m128_f32[0] = v158 - v153.m128_f32[0];
							}
							if (v159 < (float)v176)
							{
								v203.m128_f32[0] = (float)v176;
								v204.m128_f32[0] = (float)v176 + v153.m128_f32[0];
							}
							v160 = (float)v175;
							if ((float)((float)v145 + v152) > (float)v175)
							{
								v204.m128_f32[1] = (float)v175;
								v157 = v160 - v152;
								v203.m128_f32[1] = v160 - v152;
							}
							v2 = v179;
							if (v157 < (float)v179)
							{
								v203.m128_f32[1] = (float)v179;
								v204.m128_f32[1] = (float)v179 + v152;
							}
							v161 = *(_QWORD**)(a1 + 1080);
							v205 = (__m128)xmmword_140B7B240;
							if (v161)
								sub_140103E60(
									v161,
									&v203,
									&v205,
									0,
									COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1088)) * *(float*)(a1 + 1092)));
							(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680 + 264i64))(
								qword_140C65680,
								*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
								v147,
								-1i64,
								&v203,
								5,
								a1 + 1136,
								1);
							if (v147)
								(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v147 - 16) + 8i64))(v147 - 16);
							v141 = v189;
						}
						v162 = v139[3];
						if (v162)
						{
							v139 = (_QWORD*)v139[3];
							for (i = *(_QWORD**)(v162 + 16); i; i = (_QWORD*)i[2])
								v139 = i;
						}
						else
						{
							for (j = v139[1]; v139 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
								v139 = (_QWORD*)j;
							if (v139[3] != j)
								v139 = (_QWORD*)j;
						}
					}
				}
			}
		}
	}
	if (*(_DWORD*)(a1 + 1332))
	{
		if (qword_140C65898)
		{
			if (*(_QWORD*)(qword_140C65898 + 25744))
			{
				if (*(_QWORD*)(a1 + 1192))
				{
					v165 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
					v166 = *(_QWORD*)(a1 + 1192);
					v167 = v165;
					if (sub_14024ACC0(v165))
					{
						v168 = *(_QWORD*)(v166 + 8);
						if (v168)
						{
							if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v168 + 64i64))(v168, v167))
							{
								sub_14052AB00(a1, &v189, (float*)(a1 + 1312));
								v169 = *(_DWORD*)(a1 + 1264) <= 2;
								v170 = _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(int)v189), (__m128)0i64),
									_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v189)), (__m128)0i64));
								v171 = (float)(*(float*)&dword_140C46348 * 2.0)
									- *(float*)(*(_QWORD*)(qword_140C65898 + 25744) + 4800i64);
								v180 = v170;
								if (v169)
									v180 = _mm_sub_ps(v170, *(__m128*)(a1 + 1248));
								(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
								(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
								v204.m128_f32[0] = v171;
								v203.m128_u64[1] = 0i64;
								v203.m128_i32[0] = 1065353216;
								v204.m128_u64[1] = (unsigned __int64)&v180;
								v206[0] = v203.m128_u64[0];
								v206[1] = (__int128)v204;
								sub_1401B0840((int*)v206, (__int64)&v203);
								(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v203);
								v172 = *(_QWORD**)(a1 + 1032);
								v197 = (__m128)xmmword_140B7B240;
								if (v172)
								{
									*(_QWORD*)&v173 = (unsigned int)dword_140C63664;
									*(float*)&v173 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1040)) * *(float*)(a1 + 1044);
									sub_1401039E0(v172, &qword_140C77760, &v197, v173);
								}
								(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
							}
						}
					}
				}
			}
		}
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 14052D013: conditional instruction was optimized away because rcx.8!=0
// 14052CC07: variable 'v97' is possibly undefined
// 14052CC33: variable 'v96' is possibly undefined
// 14052CCB1: variable 'v98' is possibly undefined
// 14052CD73: variable 'v116' is possibly undefined
// 14052CD86: variable 'v123' is possibly undefined
// 14052CF49: variable 'v136' is possibly undefined
// 140B12FB0: using guessed type wchar_t aUU[8];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140C3B738: using guessed type int dword_140C3B738;
// 140C46348: using guessed type int dword_140C46348;
// 140C4A0A0: using guessed type int dword_140C4A0A0;
// 140C4A160: using guessed type int dword_140C4A160;
// 140C4A170: using guessed type __m128 stru_140C4A170[7];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66F1C: using guessed type int dword_140C66F1C;
// 140C66F48: using guessed type int dword_140C66F48;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 14052BD40: using guessed type __m128 var_160;

