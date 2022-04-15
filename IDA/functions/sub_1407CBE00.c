#include "../winhttp.h"

//----- (00000001407CBE00) ----------------------------------------------------
__int64 __fastcall sub_1407CBE00(__int64 a1, __int64 a2, __int64 a3, __int128* a4, __m128* a5, unsigned int a6)
{
	bool v6; // zf
	__m128* v7; // r14
	float v8; // xmm2_4
	float v9; // xmm1_4
	__int64 v12; // r12
	__int64 v13; // rdx
	_QWORD* i; // rbx
	__int128 v15; // xmm0
	__int64 v16; // rcx
	__int128 v17; // xmm1
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int128 v21; // xmm1
	__int128 v22; // xmm0
	int v23; // ebx
	const void*** v24; // rdx
	__int64 v25; // rdi
	int v26; // r12d
	__int64* v27; // r14
	__int64 v28; // rax
	__m128* v29; // rbx
	__int64 v30; // rax
	__m128* v31; // rcx
	__m128 v32; // xmm9
	__int64 v33; // rdx
	__m128 v34; // xmm10
	__m128 v35; // xmm5
	__m128 v36; // xmm2
	__m128 v37; // xmm7
	__m128 v38; // xmm1
	__m128 v39; // xmm8
	float v40; // xmm4_4
	__m128 v41; // xmm6
	unsigned __int64 v42; // rax
	__m128 v43; // xmm2
	float v44; // xmm4_4
	float v45; // xmm8_4
	float v46; // xmm0_4
	float v47; // xmm9_4
	float v48; // xmm0_4
	float v49; // xmm4_4
	float v50; // xmm3_4
	float v51; // xmm6_4
	float v52; // xmm7_4
	float v53; // xmm1_4
	float v54; // xmm2_4
	float v55; // xmm0_4
	float v56; // xmm3_4
	float v57; // xmm4_4
	float v58; // xmm5_4
	float v59; // xmm2_4
	float v60; // xmm3_4
	float v61; // xmm1_4
	float v62; // xmm0_4
	float v63; // xmm3_4
	float v64; // xmm2_4
	float v65; // xmm3_4
	float v66; // xmm0_4
	float v67; // xmm3_4
	float v68; // xmm2_4
	float v69; // xmm3_4
	float v70; // xmm1_4
	float v71; // xmm0_4
	float v72; // xmm3_4
	float v73; // xmm2_4
	float v74; // xmm3_4
	float v75; // xmm1_4
	float v76; // xmm0_4
	float v77; // xmm3_4
	float v78; // xmm2_4
	float v79; // xmm3_4
	float v80; // xmm0_4
	float v81; // xmm3_4
	float v82; // xmm2_4
	float v83; // xmm3_4
	float v84; // xmm1_4
	float v85; // xmm0_4
	float v86; // xmm3_4
	float v87; // xmm2_4
	float v88; // xmm3_4
	float v89; // xmm1_4
	float v90; // xmm0_4
	float v91; // xmm3_4
	unsigned __int64 v92; // rax
	__m128* v93; // rcx
	__m128 v94; // xmm2
	__m128 v95; // xmm1
	int v96; // ebx
	__int64 v97; // rdx
	__int128* v98; // rcx
	int v99; // edi
	__int64 v100; // rax
	__int128 v101; // xmm0
	__int128 v102; // xmm1
	__int128 v103; // xmm0
	__int128 v104; // xmm1
	__int128 v105; // xmm0
	__int128 v106; // xmm1
	__int128 v107; // xmm0
	__int128 v108; // xmm1
	__int128 v109; // xmm0
	__int128 v110; // xmm1
	int v111; // eax
	__int128 v112; // xmm0
	__int128 v113; // xmm1
	__int128 v114; // xmm1
	__m128 v115; // xmm1
	__int64 v116; // rdx
	__int64* v117; // r8
	__int64 j; // rcx
	_QWORD* v119; // rdx
	const void*** v120; // rbx
	__m128 v122; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v123; // [rsp+50h] [rbp-B0h]
	int v124[2]; // [rsp+60h] [rbp-A0h] BYREF
	int v125; // [rsp+68h] [rbp-98h]
	__int128* v126; // [rsp+70h] [rbp-90h]
	__int64 v127; // [rsp+78h] [rbp-88h]
	__m128* v128; // [rsp+88h] [rbp-78h]
	__int128 v129[3]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v130; // [rsp+C0h] [rbp-40h]
	int v131[4]; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v132[3]; // [rsp+E0h] [rbp-20h] BYREF
	int v133; // [rsp+110h] [rbp+10h]
	__int64 v134; // [rsp+114h] [rbp+14h]
	int v135; // [rsp+11Ch] [rbp+1Ch]
	_QWORD v136[7]; // [rsp+130h] [rbp+30h] BYREF
	char v137; // [rsp+168h] [rbp+68h] BYREF
	__int64 v138; // [rsp+198h] [rbp+98h]
	__int64 v139; // [rsp+1A8h] [rbp+A8h]
	__int128 v140[2]; // [rsp+1C0h] [rbp+C0h] BYREF
	int v141; // [rsp+1E0h] [rbp+E0h]
	__int128 v142; // [rsp+1F0h] [rbp+F0h]
	__int128 v143; // [rsp+200h] [rbp+100h]
	int v144; // [rsp+210h] [rbp+110h]
	__int128 v145; // [rsp+220h] [rbp+120h]
	__int128 v146; // [rsp+230h] [rbp+130h]
	int v147; // [rsp+240h] [rbp+140h]
	__m128 v148; // [rsp+270h] [rbp+170h]
	__m128 v149; // [rsp+290h] [rbp+190h]
	__m128 v150[10]; // [rsp+430h] [rbp+330h] BYREF

	v6 = *(_DWORD*)(a1 + 6240) == 0;
	*(_DWORD*)(a1 + 24) = a6;
	v126 = a4;
	v7 = (__m128*)a3;
	v8 = *(float*)(a2 + 56);
	v9 = *(float*)(a2 + 40);
	v128 = (__m128*)a3;
	v127 = a2;
	*(float*)v124 = (float)(v8 / v9) - 0.0000099999997;
	*(float*)&v124[1] = v8 / (float)(v9 + 1.0);
	if (v6)
		*(_DWORD*)(a1 + 6240) = 1;
	v12 = 7i64;
	v125 = a6 & 0x20;
	if ((a6 & 0x20) != 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			7i64,
			1i64,
			0i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	if ((*(_BYTE*)(a1 + 24) & 4) != 0)
		(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)a1 + 112i64))(a1, a2, v7);
	if ((a6 & 8) != 0)
	{
		if ((a6 & 0x80) == 0)
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984) + 48i64))(
				*(_QWORD*)(a1 + 2984),
				*(unsigned int*)(a1 + 1320),
				0i64);
		for (i = *(_QWORD**)(a1 + 1328); i; i = (_QWORD*)i[17])
			(*(void(__fastcall**)(_QWORD*, __int64, __m128*, _QWORD))(*i + 144i64))(i, v13, a5, a6);
		if ((a6 & 0x80) == 0)
		{
			v15 = (__int128)*v7;
			v16 = *(_QWORD*)(a1 + 2984);
			v129[1] = (__int128)v7[1];
			v17 = (__int128)v7[3];
			v129[0] = v15;
			v18 = (__int128)v7[2];
			v130 = v17;
			v19 = v126[1];
			*(_QWORD*)((char*)&v130 + 4) = 0i64;
			LODWORD(v130) = 0;
			v129[2] = v18;
			v20 = *v126;
			v132[1] = v19;
			v21 = v126[3];
			v132[0] = v20;
			v22 = v126[2];
			v135 = HIDWORD(v21);
			v132[2] = v22;
			v134 = 0i64;
			v133 = 0;
			(*(void(__fastcall**)(__int64, __int128*, __int128*, int*, _DWORD))(*(_QWORD*)v16 + 80i64))(
				v16,
				v129,
				v132,
				v124,
				0);
		}
		v23 = 32;
		if ((a6 & 0x40) != 0)
			v23 = 288;
		sub_1407C1FE0(v136);
		(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, int, int, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984)
			+ 120i64))(
				*(_QWORD*)(a1 + 2984),
				v136,
				v127,
				a1 + 1344,
				v23,
				3,
				*(_QWORD*)(a1 + 6080),
				0i64);
		if (v138)
			sub_1407C2170(v136, 5, 0xFFFFFFFF);
		sub_1407C20B0((__int64)v136, v24);
	}
	if ((*(_BYTE*)(a1 + 24) & 0x10) != 0)
	{
		if ((a6 & 0x80) == 0)
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2992) + 48i64))(
				*(_QWORD*)(a1 + 2992),
				*(unsigned int*)(a1 + 1320),
				0i64);
		v25 = *(_QWORD*)(a1 + 6320);
		if (v25)
		{
			v26 = v125;
			while (1)
			{
				v27 = *(__int64**)(v25 + 64);
				v28 = *v27;
				v131[0] = 0;
				if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v28 + 16))(v27, v131, 0i64))
				{
					v29 = (__m128*)(*(__int64(__fastcall**)(__int64*))(*v27 + 1160))(v27);
					v30 = (*(__int64(__fastcall**)(__int64*))(*v27 + 80))(v27);
					v31 = a5;
					v32 = 0i64;
					v33 = v30;
					v34 = *(__m128*)(v30 + 32);
					v35 = *(__m128*)(v30 + 16);
					v36 = _mm_mul_ps(*(__m128*)v30, *(__m128*)v30);
					v37 = _mm_mul_ps(v34, v34);
					v38 = _mm_mul_ps(v35, v35);
					v32.m128_f32[0] = fmaxf(
						(float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
						+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0],
						(float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
						+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0]);
					v39 = v32;
					v39.m128_f32[0] = fmaxf(
						v32.m128_f32[0],
						(float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
						+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0]);
					v40 = _mm_sqrt_ps(v39).m128_f32[0] * v29[3].m128_f32[0];
					v41 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v29[2], v29[2], 0), *(__m128*)v30),
								_mm_mul_ps(_mm_shuffle_ps(v29[2], v29[2], 85), v35)),
							_mm_mul_ps(_mm_shuffle_ps(v29[2], v29[2], 170), v34)),
						*(__m128*)(v30 + 48));
					v42 = 0i64;
					while (1)
					{
						v43 = _mm_mul_ps(v41, *v31);
						if ((float)((float)((float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
							+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0])
							+ v31->m128_f32[3]) > v40)
							break;
						++v42;
						++v31;
						if (v42 >= 6)
						{
							v44 = *(float*)v33;
							v45 = v29->m128_f32[0];
							v46 = *(float*)v33;
							v47 = v29[1].m128_f32[0];
							v123 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v33 + 48), (__m128) * (unsigned int*)(v33 + 56)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v33 + 52), (__m128)0i64));
							v122 = v123;
							if (v44 <= 0.0)
							{
								v48 = v46 * v47;
								v49 = v44 * v45;
							}
							else
							{
								v48 = v46 * v45;
								v49 = v44 * v47;
							}
							v50 = *(float*)(v33 + 16);
							v51 = v29->m128_f32[1];
							v52 = v29[1].m128_f32[1];
							v53 = v123.m128_f32[0] + v48;
							v54 = v123.m128_f32[0] + v49;
							if (v50 <= 0.0)
							{
								v55 = v50 * v52;
								v56 = v50 * v51;
							}
							else
							{
								v55 = v50 * v51;
								v56 = v50 * v52;
							}
							v57 = v29->m128_f32[2];
							v58 = v29[1].m128_f32[2];
							v59 = v54 + v56;
							v60 = *(float*)(v33 + 32);
							v61 = v53 + v55;
							if (v60 <= 0.0)
							{
								v62 = v60 * v58;
								v63 = v60 * v57;
							}
							else
							{
								v62 = v60 * v57;
								v63 = v60 * v58;
							}
							v64 = v59 + v63;
							v65 = *(float*)(v33 + 4);
							v122.m128_f32[0] = v64;
							v123.m128_f32[0] = v61 + v62;
							if (v65 <= 0.0)
							{
								v66 = v65 * v47;
								v67 = v65 * v45;
							}
							else
							{
								v66 = v65 * v45;
								v67 = v65 * v47;
							}
							v68 = v122.m128_f32[1] + v67;
							v69 = *(float*)(v33 + 20);
							v70 = v123.m128_f32[1] + v66;
							if (v69 <= 0.0)
							{
								v71 = v69 * v52;
								v72 = v69 * v51;
							}
							else
							{
								v71 = v69 * v51;
								v72 = v69 * v52;
							}
							v73 = v68 + v72;
							v74 = *(float*)(v33 + 36);
							v75 = v70 + v71;
							if (v74 <= 0.0)
							{
								v76 = v74 * v58;
								v77 = v74 * v57;
							}
							else
							{
								v76 = v74 * v57;
								v77 = v74 * v58;
							}
							v78 = v73 + v77;
							v79 = *(float*)(v33 + 8);
							v122.m128_f32[1] = v78;
							v123.m128_f32[1] = v75 + v76;
							if (v79 <= 0.0)
							{
								v80 = v79 * v47;
								v81 = v79 * v45;
							}
							else
							{
								v80 = v79 * v45;
								v81 = v79 * v47;
							}
							v82 = v122.m128_f32[2] + v81;
							v83 = *(float*)(v33 + 24);
							v84 = v123.m128_f32[2] + v80;
							if (v83 <= 0.0)
							{
								v85 = v83 * v52;
								v86 = v83 * v51;
							}
							else
							{
								v85 = v83 * v51;
								v86 = v83 * v52;
							}
							v87 = v82 + v86;
							v88 = *(float*)(v33 + 40);
							v89 = v84 + v85;
							if (v88 <= 0.0)
							{
								v90 = v88 * v58;
								v91 = v88 * v57;
							}
							else
							{
								v90 = v88 * v57;
								v91 = v88 * v58;
							}
							v92 = 0i64;
							v93 = a5;
							v122.m128_f32[2] = v87 + v91;
							v123.m128_f32[2] = v89 + v90;
							while (1)
							{
								v94 = _mm_cmplt_ps((__m128)0i64, *v93);
								v95 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v94, v122), _mm_and_ps(v94, v123)), *v93);
								if ((float)((float)((float)(v95.m128_f32[0] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0])
									+ _mm_shuffle_ps(v95, v95, 170).m128_f32[0])
									+ v93->m128_f32[3]) > 0.0)
									goto LABEL_60;
								++v92;
								++v93;
								if (v92 >= 6)
								{
									v96 = 1;
									goto LABEL_61;
								}
							}
						}
					}
				LABEL_60:
					v96 = 0;
				LABEL_61:
					if ((a6 & 0x80) != 0)
						goto LABEL_65;
					if (v96 || v26)
						break;
				}
			LABEL_67:
				v25 = *(_QWORD*)(v25 + 88);
				if (!v25)
				{
					v7 = v128;
					v12 = 7i64;
					goto LABEL_69;
				}
			}
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v25 + 64) + 296i64))(*(_QWORD*)(v25 + 64), 1i64);
		LABEL_65:
			if (v96)
				(*(void(__fastcall**)(__int64*, __int64))(*v27 + 320))(v27, 1i64);
			goto LABEL_67;
		}
	LABEL_69:
		if ((a6 & 0x80) == 0)
			(*(void(__fastcall**)(_QWORD, __m128*, __int128*, int*, _DWORD))(**(_QWORD**)(a1 + 2992) + 80i64))(
				*(_QWORD*)(a1 + 2992),
				v7,
				v126,
				v124,
				0);
		v97 = a1 + 3008;
		v98 = v140;
		v99 = 6;
		if ((((unsigned __int8)v140 | (unsigned __int8)(a1 - 64)) & 0xF) != 0)
		{
			sub_1407DB590((int*)v140, (int*)v97, 0x310ui64);
		}
		else
		{
			v100 = 6i64;
			do
			{
				v101 = *(_OWORD*)v97;
				v102 = *(_OWORD*)(v97 + 16);
				v98 += 8;
				v97 += 128i64;
				*(v98 - 8) = v101;
				v103 = *(_OWORD*)(v97 - 96);
				*(v98 - 7) = v102;
				v104 = *(_OWORD*)(v97 - 80);
				*(v98 - 6) = v103;
				v105 = *(_OWORD*)(v97 - 64);
				*(v98 - 5) = v104;
				v106 = *(_OWORD*)(v97 - 48);
				*(v98 - 4) = v105;
				v107 = *(_OWORD*)(v97 - 32);
				*(v98 - 3) = v106;
				v108 = *(_OWORD*)(v97 - 16);
				*(v98 - 2) = v107;
				*(v98 - 1) = v108;
				--v100;
			} while (v100);
			*v98 = *(_OWORD*)v97;
		}
		v109 = *(_OWORD*)(a1 + 4080);
		v110 = *(_OWORD*)(a1 + 4096);
		v141 = *(_DWORD*)(a1 + 4112);
		v111 = *(_DWORD*)(a1 + 4160);
		v140[0] = v109;
		v140[1] = v110;
		v144 = v111;
		v112 = *(_OWORD*)(a1 + 4128);
		v113 = *(_OWORD*)(a1 + 4144);
		v147 = *(_DWORD*)(a1 + 4208);
		*(_QWORD*)&v132[0] = v7;
		v142 = v112;
		v143 = v113;
		v114 = *(_OWORD*)(a1 + 4192);
		v145 = *(_OWORD*)(a1 + 4176);
		v146 = v114;
		sub_1401AFC20((__int64*)v132, (double*)v129);
		v122.m128_u64[1] = (unsigned __int64)v7;
		v122.m128_u64[0] = (unsigned __int64)v140;
		sub_1401AE910((__int128**)&v122, v140);
		v122.m128_u64[0] = (unsigned __int64)v129;
		v122.m128_u64[1] = (unsigned __int64)v150;
		v115 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 0), *v7),
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 85), v7[1])),
			_mm_mul_ps(_mm_shuffle_ps(v148, v148, 170), v7[2]));
		*(_QWORD*)&v132[0] = v129;
		v148 = v115;
		*((_QWORD*)&v132[0] + 1) = v150;
		sub_1401AFB10((__m128**)v132, v150);
		v149 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v149, v149, 0), *v7),
					_mm_mul_ps(_mm_shuffle_ps(v149, v149, 85), v7[1])),
				_mm_mul_ps(_mm_shuffle_ps(v149, v149, 170), v7[2])),
			v7[3]);
		sub_1407C1FE0(v136);
		(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int128*, int, int, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2992)
			+ 120i64))(
				*(_QWORD*)(a1 + 2992),
				v136,
				v127,
				v140,
				96,
				3,
				*(_QWORD*)(a1 + 6080),
				0i64);
		if (v138)
			sub_1407C2170(v136, 5, 0xFFFFFFFF);
		v117 = v136;
		do
		{
			for (j = *v117; *v117; j = *v117)
			{
				v119 = *(_QWORD**)(j + 32);
				if (v119)
					*v119 = *(_QWORD*)(j + 40);
				v116 = *(_QWORD*)(j + 40);
				if (v116)
					*(_QWORD*)(v116 + 32) = *(_QWORD*)(j + 32);
				*(_QWORD*)(j + 32) = 0i64;
				*(_QWORD*)(j + 40) = 0i64;
			}
			++v117;
			--v12;
		} while (v12);
		if (v139)
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)(v139 - 16) + 8i64))(v139 - 16, v116, v117);
		v120 = (const void***)&v137;
		do
		{
			if (*--v120)
				sub_1401A4A00(v120);
			--v99;
		} while (v99 >= 0);
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 168i64))(qword_140C65688, a1 + 3008);
}
// 1407CBF74: variable 'v13' is possibly undefined
// 1407CC08F: variable 'v24' is possibly undefined
// 1407CC7EE: variable 'v116' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 1407CBE00: using guessed type _QWORD var_460[7];
// 1407CBE00: using guessed type int var_4C0[4];
// 1407CBE00: using guessed type __m128 var_160[10];

