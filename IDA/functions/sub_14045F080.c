//----- (000000014045F080) ----------------------------------------------------
void __fastcall sub_14045F080(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rsi
	unsigned int v13; // r13d
	unsigned __int64 v14; // rbx
	__int64 v15; // r12
	__int64 v16; // r15
	__int64(__fastcall * v17)(__int64, __int64, double, double); // r14
	unsigned __int64 v18; // rcx
	_QWORD* v19; // rax
	unsigned __int64 v20; // rcx
	_QWORD* v21; // rax
	unsigned __int64 v22; // rcx
	_QWORD* v23; // rax
	unsigned int v24; // edx
	__m128* v25; // r8
	int* v26; // rcx
	__int64 v27; // rax
	int* v28; // rbx
	int v29; // ecx
	int v30; // eax
	unsigned int v31; // r12d
	int v32; // eax
	int v33; // edx
	int v34; // eax
	bool v35; // zf
	__int64 v36; // rax
	float v37; // xmm11_4
	__int64 v38; // rsi
	__int64 v39; // r15
	float v40; // xmm10_4
	__int64 v41; // rax
	int v42; // edx
	__int64 v43; // rax
	__int64 v44; // rsi
	__int64 v45; // rax
	unsigned int v46; // ecx
	int v47; // eax
	__int64 v48; // rsi
	__m128* v49; // rax
	__m128 v50; // xmm8
	__m128 v51; // xmm1
	__m128* v52; // rax
	__m128 v53; // xmm0
	__m128 v54; // xmm2
	__int64 v55; // rax
	__m128 v56; // xmm1
	__m128* v57; // r15
	int v58; // ecx
	__m128 v59; // xmm9
	float v60; // xmm0_4
	float v61; // xmm8_4
	__m128 v62; // xmm0
	__int64 v63; // rax
	float v64; // xmm7_4
	__m128 v65; // xmm6
	__m128 v66; // xmm6
	__m128 v67; // xmm0
	int v68; // xmm7_4
	__m128 v69; // xmm0
	__m128 v70; // xmm6
	__m128 v71; // xmm10
	__int64 v72; // r15
	__int64 v73; // rax
	float v74; // xmm10_4
	int v75; // ecx
	bool v76; // cc
	__m128 v77; // xmm0
	float v78; // xmm6_4
	int v79; // r8d
	int* v80; // r9
	__m128 v81; // xmm6
	int v82; // eax
	int v83; // eax
	__int64 v84; // rax
	__m128 v85; // xmm0
	__int64 v86; // rax
	int* v87; // rax
	__int64 v88; // r8
	unsigned int v89; // r9d
	__int64 v90; // rax
	int* v91; // rax
	__int64(__fastcall * v92)(__int64, __int64, double, double); // rdx
	__int64 v93; // rcx
	int v94; // eax
	unsigned int v95; // r9d
	__int64 v96; // rax
	int* v97; // rax
	__int64(__fastcall * v98)(__int64, __int64, double, double); // rdx
	__int64 v99; // rcx
	int v100; // eax
	_DWORD* v101; // rax
	unsigned int v102; // edx
	__int64 v103; // rax
	int* v104; // rax
	__int64(__fastcall * v105)(__int64, __int64, double, double); // r8
	signed int v106; // esi
	__int64 v107; // rcx
	__int64 v108; // rax
	__int64 v109; // rax
	int v110; // eax
	unsigned int v111; // r10d
	__int64 v112; // rax
	int* v113; // rax
	__int64(__fastcall * v114)(__int64, __int64, double, double); // rdx
	unsigned int v115; // r8d
	__int64 v116; // rcx
	__int16 v117; // ax
	unsigned int v118; // r14d
	__int64 v119; // rax
	__int64 v120; // rax
	int v121; // eax
	__int64 v122; // rax
	__int64 v123; // rcx
	__int64 v124; // r9
	unsigned int v125; // r8d
	__m128* v126; // rbx
	unsigned int v127; // edx
	__int128 v128; // [rsp+60h] [rbp-A0h] BYREF
	__int64(__fastcall * v129)(__int64, __int64, double, double); // [rsp+70h] [rbp-90h]
	unsigned __int64 v130; // [rsp+78h] [rbp-88h]
	__m128 v131; // [rsp+80h] [rbp-80h] BYREF
	__m128i v132; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * v133)(__int64, __int64, double, double); // [rsp+A0h] [rbp-60h]
	__int64 v134; // [rsp+A8h] [rbp-58h]
	__m128 v135; // [rsp+B0h] [rbp-50h] BYREF
	__int64(__fastcall * *v136)(); // [rsp+C0h] [rbp-40h]
	__int64 v137; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v138; // [rsp+D0h] [rbp-30h]
	int v139; // [rsp+D8h] [rbp-28h]
	__int128 v140; // [rsp+E0h] [rbp-20h]
	int v141; // [rsp+F0h] [rbp-10h]
	int v142; // [rsp+F4h] [rbp-Ch]
	int v143; // [rsp+F8h] [rbp-8h]
	int v144; // [rsp+FCh] [rbp-4h]
	__int64 v145; // [rsp+100h] [rbp+0h]
	int v146; // [rsp+108h] [rbp+8h]
	__int64 v147; // [rsp+110h] [rbp+10h]
	__m128 v148; // [rsp+120h] [rbp+20h] BYREF
	__m128* v149; // [rsp+1D0h] [rbp+D0h] BYREF
	int v150; // [rsp+1D8h] [rbp+D8h]

	v1 = *(_DWORD*)(a1 + 8);
	if ((v1 & 0xC0000000) == 0x40000000)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29080);
		if (v3)
		{
			v4 = sub_1405CCE50(v3, v1);
			v5 = v4;
			if (v4)
			{
				v6 = *(_QWORD**)(v4 + 32);
				if (v6)
					*v6 = *(_QWORD*)(v5 + 40);
				v7 = *(_QWORD*)(v5 + 40);
				if (v7)
					*(_QWORD*)(v7 + 32) = *(_QWORD*)(v5 + 32);
				*(_QWORD*)(v5 + 32) = 0i64;
				*(_QWORD*)(v5 + 40) = 0i64;
			}
		}
	}
	v8 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v8)
		sub_1406015C0(v8, a1);
	v9 = *(_QWORD*)(a1 + 248);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 + 336);
		if (v10)
		{
			v11 = *(unsigned int*)(v10 + 16);
			if ((!(_DWORD)v11
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						0i64,
						v11,
						0i64,
						0i64,
						0))
				&& !*(_DWORD*)(a1 + 592)
				&& !*(_DWORD*)(a1 + 596))
			{
				v12 = qword_140C65918;
				v13 = **(_DWORD**)(*(_QWORD*)(a1 + 248) + 336i64);
				sub_140482A00(
					(__int64)&v128,
					v13,
					*(_DWORD*)(a1 + 684) != 0,
					0,
					*(_QWORD*)(qword_140C65918 + 64),
					*(unsigned int*)(qword_140C65918 + 72));
				v14 = v130;
				v15 = *((_QWORD*)&v128 + 1);
				v16 = v128;
				v17 = v129;
				v18 = 0i64;
				if (v130)
				{
					v19 = (_QWORD*)((char*)v129 + 32);
					do
					{
						if (*((_DWORD*)v19 - 5))
							break;
						if (*v19)
							goto LABEL_33;
						++v18;
						v19 += 6;
					} while (v18 < v130);
				}
				sub_140482A00((__int64)&v128, v13, 2u, 0, *(_QWORD*)(v12 + 64), *(unsigned int*)(v12 + 72));
				v14 = v130;
				v15 = *((_QWORD*)&v128 + 1);
				v16 = v128;
				v17 = v129;
				v20 = 0i64;
				if (v130)
				{
					v21 = (_QWORD*)((char*)v129 + 32);
					do
					{
						if (*((_DWORD*)v21 - 5))
							break;
						if (*v21)
							goto LABEL_33;
						++v20;
						v21 += 6;
					} while (v20 < v130);
				}
				sub_140482A00(
					(__int64)&v128,
					v13,
					*(_DWORD*)(a1 + 684) != 0,
					6u,
					*(_QWORD*)(v12 + 64),
					*(unsigned int*)(v12 + 72));
				v14 = v130;
				v15 = *((_QWORD*)&v128 + 1);
				v16 = v128;
				v17 = v129;
				v22 = 0i64;
				if (v130)
				{
					v23 = (_QWORD*)((char*)v129 + 32);
					do
					{
						if (*((_DWORD*)v23 - 5))
							break;
						if (*v23)
							goto LABEL_33;
						++v22;
						v23 += 6;
					} while (v22 < v130);
				}
				sub_140482A00((__int64)&v128, v13, 2u, 6u, *(_QWORD*)(v12 + 64), *(unsigned int*)(v12 + 72));
				v15 = *((_QWORD*)&v128 + 1);
				v16 = v128;
				v17 = v129;
				v14 = v130;
			LABEL_33:
				if (!*(_QWORD*)(a1 + 5344)
					|| (_DWORD)v16 != *(_DWORD*)(a1 + 5320)
					|| __PAIR64__(v15, HIDWORD(v16)) != *(_QWORD*)(a1 + 5324))
				{
					sub_140195D70(a1 + 5440);
					sub_140195D70(a1 + 5368);
					*(_QWORD*)(a1 + 5320) = v16;
					*(_QWORD*)(a1 + 5328) = v15;
					*(_QWORD*)(a1 + 5336) = v17;
					*(_DWORD*)(a1 + 5316) = 0;
					*(_QWORD*)(a1 + 5344) = v14;
					while (*(_QWORD*)(a1 + 1424))
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1424) + 32i64))(*(_QWORD*)(a1 + 1424));
					sub_14047CAB0(a1);
				}
			}
		}
	}
	v24 = *(_DWORD*)(a1 + 8);
	v25 = *(__m128**)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v26 = (int*)v25;
	v27 = v25->m128_i64[1];
	while (v27)
	{
		if (*(_DWORD*)(v27 + 32) < v24)
		{
			v27 = *(_QWORD*)(v27 + 24);
		}
		else
		{
			v26 = (int*)v27;
			v27 = *(_QWORD*)(v27 + 16);
		}
	}
	if (v26 == (int*)v25 || (v149 = (__m128*)v26, v24 < v26[8]))
		v149 = v25;
	if (v149 == v25)
	{
		v28 = 0i64;
	}
	else
	{
		v28 = &v149[2].m128_i32[2];
		if (v149 != (__m128*) - 40i64)
			goto LABEL_52;
	}
	if (*(_DWORD*)(a1 + 128) == 18)
	{
		LODWORD(v128) = 0;
		*((_QWORD*)&v128 + 1) = a1;
		v129 = sub_14045EF50;
		v130 = 0i64;
		sub_140195960(a1 + 13904, 0, (__int64)&v128, 4);
	}
LABEL_52:
	if (!*(_DWORD*)(a1 + 13896) || !v28)
	{
	LABEL_164:
		v127 = *(_DWORD*)(a1 + 460);
		if (v127)
			sub_140474660(a1, v127);
		return;
	}
	sub_14045BF30(a1, 4, 0);
	v29 = *(_DWORD*)qword_140C63750;
	if (v28[18])
	{
		v30 = dword_140C47D30;
		if (v29 < dword_140C47D30)
			v30 = *(_DWORD*)qword_140C63750;
		v31 = dword_140C47D40[v30];
	}
	else
	{
		v32 = dword_140C47CD0;
		if (v29 < dword_140C47CD0)
			v32 = *(_DWORD*)qword_140C63750;
		v33 = dword_140C47CE0[v32];
		v34 = dword_140C47C70;
		if (v29 < dword_140C47C70)
			v34 = *(_DWORD*)qword_140C63750;
		v31 = sub_1401AE6F0(dword_140C47C80[v34], v33);
	}
	v132.m128i_i32[0] = 0;
	v132.m128i_i64[1] = a1;
	v133 = sub_14045EF50;
	v134 = 0i64;
	sub_140195960(a1 + 13904, v31, (__int64)&v132, 4);
	v35 = *(_QWORD*)(a1 + 5864) == 0i64;
	*(_DWORD*)(a1 + 13896) = 0;
	if (!v35)
	{
		v36 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 13840));
		v37 = 0.0;
		v38 = v36;
		if (!v36)
			goto LABEL_69;
		v39 = *(_QWORD*)(v36 + 3336);
		if (v39)
		{
			v40 = sub_14047A940((_QWORD*)v36) * *(float*)(v39 + 140);
			goto LABEL_70;
		}
		v41 = sub_14022D500(*(_DWORD*)(v36 + 216));
		if (v41)
			v40 = *(float*)(v41 + 40);
		else
			LABEL_69:
		v40 = 0.0;
	LABEL_70:
		if (v38)
		{
			v42 = *(_DWORD*)(v38 + 13992);
			if (v42)
			{
				v43 = sub_1403D90D0(qword_140C65898, v42);
				if (v43)
				{
					v44 = *(_QWORD*)(v43 + 3336);
					if (v44)
					{
						v40 = sub_14047A940((_QWORD*)v43) * *(float*)(v44 + 140);
					}
					else
					{
						v45 = sub_14022D500(*(_DWORD*)(v43 + 216));
						if (v45)
							v40 = *(float*)(v45 + 40);
						else
							v40 = 0.0;
					}
				}
			}
		}
		*(float*)&v149 = v40;
		v150 = 0;
		v46 = 0;
		if (v40 < 0.0)
			v46 = 0x80000000;
		if ((int)abs32(v46 - LODWORD(v40)) <= 84)
		{
			v47 = qword_140C47D90;
			if (*(_DWORD*)qword_140C63750 < (int)qword_140C47D90)
				v47 = *(_DWORD*)qword_140C63750;
			v40 = *((float*)&xmmword_140C47DA0 + v47);
		}
		v48 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 28640) + 24i64))(*(_QWORD*)(qword_140C65898 + 28640));
		sub_1407E4830((int*)v48, 0i64, 0xC0ui64);
		v49 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 80i64))(*(_QWORD*)(a1 + 5864));
		v50 = _mm_mul_ps(*v49, *v49);
		v51 = _mm_shuffle_ps(v50, v50, 170);
		v52 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 1216i64))(*(_QWORD*)(a1 + 5864));
		v51.m128_f32[0] = fsqrt((float)(v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0]) + v51.m128_f32[0]);
		v53 = *v52;
		v54 = v52[1];
		v55 = qword_140C65898;
		v56 = _mm_shuffle_ps(v51, v51, 0);
		*(__m128*)v48 = _mm_mul_ps(v53, v56);
		*(__m128*)(v48 + 16) = _mm_mul_ps(v54, v56);
		v57 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v55 + 28640) + 32i64))(*(_QWORD*)(v55 + 28640));
		v149 = v57;
		sub_1407E4830((int*)v57, 0i64, 0x80ui64);
		v59 = (__m128)(unsigned int)dword_140C3B438;
		v58 = dword_140C47C10;
		v59.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
		if (*(_DWORD*)qword_140C63750 < dword_140C47C10)
			v58 = *(_DWORD*)qword_140C63750;
		v57[1] = _mm_unpacklo_ps(
			(__m128)0i64,
			_mm_unpacklo_ps(
				_mm_xor_ps((__m128)(unsigned int)dword_140C47C20[v58], (__m128)xmmword_140B7B530),
				(__m128)0i64));
		v60 = sub_1408FD8A4(v59.m128_f32[0] * 50.0);
		v59.m128_f32[0] = v59.m128_f32[0] * 45.0;
		v61 = v60;
		v62 = v59;
		v57[3].m128_f32[0] = v61;
		v62.m128_f32[0] = sub_1408FD8A4(v59.m128_f32[0]);
		v63 = qword_140C65898;
		v64 = v62.m128_f32[0];
		v62.m128_f32[0] = v40;
		v67 = _mm_shuffle_ps(v62, v62, 0);
		v57[3].m128_f32[1] = fminf(v64, v61);
		v65 = _mm_mul_ps(*(__m128*)(a1 + 4416), v67);
		v131 = *(__m128*)(a1 + 4576);
		v66 = _mm_add_ps(v65, v131);
		*(__m128*)(v48 + 32) = v66;
		v67.m128_f32[0] = (*(float(__fastcall**)(_QWORD, __m128*, __int64))(**(_QWORD**)(v63 + 28640) + 72i64))(
			*(_QWORD*)(v63 + 28640),
			&v131,
			65i64);
		v68 = 1065353216;
		if (v67.m128_f32[0] < 1.0)
		{
			v67.m128_f32[0] = v67.m128_f32[0] * 0.99000001;
			v69 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), _mm_sub_ps(v131, v66)), v66);
			v70 = _mm_sub_ps(v66, v69);
			v131 = v69;
			v71 = _mm_mul_ps(v70, v70);
			v40 = fsqrt(
				(float)(v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 85).m128_f32[0])
				+ _mm_shuffle_ps(v71, v71, 170).m128_f32[0]);
		}
		v72 = *(_QWORD*)(a1 + 3336);
		if (v72)
		{
			v37 = sub_14047A940((_QWORD*)a1) * *(float*)(v72 + 140);
		}
		else
		{
			v73 = sub_14022D500(*(_DWORD*)(a1 + 216));
			if (v73)
				v37 = *(float*)(v73 + 40);
		}
		v74 = v40 + v37;
		if (v28[18])
		{
			v75 = qword_140C47E80;
			v143 = dword_140C47EA8;
			v76 = *(_DWORD*)qword_140C63750 < (int)qword_140C47E80;
			v140 = xmmword_140C47E90;
			v142 = dword_140C47EA4;
			v77 = (__m128)(unsigned int)dword_140C47EAC;
			v138 = qword_140C47E80;
			if (v76)
				v75 = *(_DWORD*)qword_140C63750;
			v144 = dword_140C47EAC;
			v139 = dword_140C47E88;
			v137 = qword_140C47E78;
			v136 = off_140B55190;
			v141 = dword_140C47EA0;
			v145 = qword_140C47EB0;
			v146 = dword_140C47EB8;
			v147 = qword_140C47EC0;
			v78 = fmaxf(v74, *((float*)&v140 + v75));
			v136 = &off_140B5E6E8;
			if (qword_140C47E78)
				sub_14019D990(qword_140C63750 + 8, &v137);
		}
		else
		{
			v79 = qword_140C47D90;
			v80 = (int*)qword_140C63750;
			v81 = 0i64;
			v143 = dword_140C47DB8;
			v76 = *(_DWORD*)qword_140C63750 < (int)qword_140C47D90;
			v140 = xmmword_140C47DA0;
			v142 = dword_140C47DB4;
			v137 = qword_140C47D88;
			v138 = qword_140C47D90;
			v144 = dword_140C47DBC;
			v139 = dword_140C47D98;
			v136 = off_140B55190;
			v141 = dword_140C47DB0;
			v145 = qword_140C47DC0;
			v146 = dword_140C47DC8;
			v147 = qword_140C47DD0;
			v82 = qword_140C47D90;
			if (v76)
				v82 = *(_DWORD*)qword_140C63750;
			v81.m128_f32[0] = fmaxf(v74, *((float*)&v140 + v82));
			v136 = &off_140B5E6E8;
			if (qword_140C47D88)
			{
				sub_14019D990(qword_140C63750 + 8, &v137);
				v79 = qword_140C47D90;
				v80 = (int*)qword_140C63750;
			}
			v83 = dword_140C47DF0;
			v77 = v81;
			if (*v80 < dword_140C47DF0)
				v83 = *v80;
			if (*v80 < v79)
				v79 = *v80;
			v78 = sub_1401AE760(
				v81.m128_f32[0],
				(float)(dword_140C47E00[v83] - *((float*)&xmmword_140C47DA0 + v79)) + v81.m128_f32[0]);
		}
		v77.m128_f32[0] = v78;
		v135 = _mm_add_ps(_mm_mul_ps(*(__m128*)(a1 + 4416), _mm_shuffle_ps(v77, v77, 0)), v131);
		v84 = qword_140C65898;
		v85 = _mm_add_ps(_mm_mul_ps(v149[1], (__m128)xmmword_140B7AC50), v135);
		v148 = v85;
		*(__m128*)(v48 + 32) = v135;
		v85.m128_f32[0] = (*(float(__fastcall**)(_QWORD, __m128*, __int64))(**(_QWORD**)(v84 + 28640) + 72i64))(
			*(_QWORD*)(v84 + 28640),
			&v148,
			65i64);
		if (v85.m128_f32[0] < 1.0)
		{
			v85.m128_f32[0] = v85.m128_f32[0] * 0.99000001;
			v135 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v85, v85, 0), _mm_sub_ps(v148, v135)), v135);
		}
		v86 = qword_140C65898;
		*(__m128*)(v48 + 32) = v131;
		if ((*(unsigned int(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v86 + 28640) + 56i64))(
			*(_QWORD*)(v86 + 28640),
			&v135))
		{
			v135 = *(__m128*)(v48 + 32);
		}
		*(__m128*)(v48 + 32) = v131;
		LODWORD(v128) = 0;
		*(_QWORD*)((char*)&v128 + 4) = 8i64;
		v129 = 0i64;
		v87 = sub_14018C320(0i64, 0x240ui64, 8u);
		v129 = (__int64(__fastcall*)(__int64, __int64, double, double))v87;
		v88 = 9i64 * (unsigned int)v128;
		LODWORD(v128) = v128 + 1;
		v87[2 * v88] = 1;
		v87[2 * v88 + 2] = 0;
		(*(void(__fastcall**)(_QWORD, __m128*, __int64, _QWORD, __int128*, int))(**(_QWORD**)(qword_140C65898 + 28640)
			+ 64i64))(
				*(_QWORD*)(qword_140C65898 + 28640),
				&v135,
				1i64,
				v31,
				&v128,
				dword_140C636A8);
		v132 = 0i64;
		sub_1401C9800(&v149, &v132);
		v89 = v128;
		if ((_DWORD)v128 == DWORD1(v128))
		{
			if (DWORD1(v128))
				v90 = (unsigned int)(2 * DWORD1(v128));
			else
				v90 = 8i64;
			DWORD1(v128) = v90;
			v91 = sub_14018C320((__int64)v129, 72 * v90, 8u);
			v89 = v128;
			v92 = (__int64(__fastcall*)(__int64, __int64, double, double))v91;
			v129 = (__int64(__fastcall*)(__int64, __int64, double, double))v91;
		}
		else
		{
			v92 = v129;
		}
		v132 = 0i64;
		v93 = 9i64 * v89;
		v94 = (int)v149;
		LODWORD(v128) = v89 + 1;
		*((_DWORD*)v92 + 2 * v93) = 8;
		*((_DWORD*)v92 + 2 * v93 + 2) = v94;
		*((_WORD*)v92 + 4 * v93 + 6) = WORD2(v149);
		*((_DWORD*)v92 + 2 * v93 + 4) = 0;
		sub_1401C9800(&v149, &v132);
		v95 = v128;
		if ((_DWORD)v128 == DWORD1(v128))
		{
			if (DWORD1(v128))
				v96 = (unsigned int)(2 * DWORD1(v128));
			else
				v96 = 8i64;
			DWORD1(v128) = v96;
			v97 = sub_14018C320((__int64)v129, 72 * v96, 8u);
			v95 = v128;
			v98 = (__int64(__fastcall*)(__int64, __int64, double, double))v97;
			v129 = (__int64(__fastcall*)(__int64, __int64, double, double))v97;
		}
		else
		{
			v98 = v129;
		}
		v99 = 9i64 * v95;
		v100 = (int)v149;
		LODWORD(v128) = v95 + 1;
		*((_DWORD*)v98 + 2 * v99) = 11;
		*((_DWORD*)v98 + 2 * v99 + 2) = v100;
		*((_WORD*)v98 + 4 * v99 + 6) = WORD2(v149);
		*((_DWORD*)v98 + 2 * v99 + 4) = 0;
		v101 = (_DWORD*)sub_1401B3170((__int64)&v132, (float*)(a1 + 4416));
		sub_14079A780((unsigned int*)&v128, v101, 0);
		v102 = v128;
		if ((_DWORD)v128 == DWORD1(v128))
		{
			if (DWORD1(v128))
				v103 = (unsigned int)(2 * DWORD1(v128));
			else
				v103 = 8i64;
			DWORD1(v128) = v103;
			v104 = sub_14018C320((__int64)v129, 72 * v103, 8u);
			v102 = v128;
			v105 = (__int64(__fastcall*)(__int64, __int64, double, double))v104;
			v129 = (__int64(__fastcall*)(__int64, __int64, double, double))v104;
		}
		else
		{
			v105 = v129;
		}
		v106 = 0;
		v107 = 9i64 * v102;
		LODWORD(v128) = v102 + 1;
		*((_DWORD*)v105 + 2 * v107) = 27;
		*((_DWORD*)v105 + 2 * v107 + 2) = 0;
		v108 = *((_QWORD*)v28 + 2);
		if (v108)
		{
			v106 = *(_DWORD*)(v108 + 344);
		}
		else
		{
			v109 = *((_QWORD*)v28 + 5);
			if (v109)
			{
				v106 = *(_DWORD*)(v109 + 28);
			}
			else if (v28[3] == 9)
			{
				v110 = v28[2];
				if (v110 == 6)
				{
					v106 = 7;
				}
				else
				{
					v106 = 4;
					if (v110 != 9)
						v106 = 0;
				}
			}
		}
		if (v28[9] && *((_BYTE*)v28 + 38))
			v106 = *((unsigned __int8*)v28 + 38);
		if (v106 && v106 < *(_DWORD*)(qword_140C658F0 + 360))
			v68 = *(_DWORD*)(*(_QWORD*)(qword_140C658F0 + 352) + 4i64 * v106);
		sub_1401C96D0(&v149, *(float*)&v68);
		v111 = v128;
		if ((_DWORD)v128 == DWORD1(v128))
		{
			if (DWORD1(v128))
				v112 = (unsigned int)(2 * DWORD1(v128));
			else
				v112 = 8i64;
			DWORD1(v128) = v112;
			v113 = sub_14018C320((__int64)v129, 72 * v112, 8u);
			v111 = v128;
			v114 = (__int64(__fastcall*)(__int64, __int64, double, double))v113;
			v129 = (__int64(__fastcall*)(__int64, __int64, double, double))v113;
		}
		else
		{
			v114 = v129;
		}
		v115 = dword_140C636A8;
		v116 = 9i64 * v111;
		v117 = (__int16)v149;
		LODWORD(v128) = v111 + 1;
		*((_DWORD*)v114 + 2 * v116) = 22;
		*((_WORD*)v114 + 4 * v116 + 4) = v117;
		*((_DWORD*)v114 + 2 * v116 + 3) = 0;
		sub_1405B3B80(a1, (__int64)&v128, v115, 0, a1 + 3568);
		v118 = 13824;
		v119 = sub_14020CE20(v106);
		if (v119)
			v118 = *(_DWORD*)(v119 + 20);
		v120 = *((_QWORD*)v28 + 2);
		if (v120 && *(_DWORD*)(v120 + 320) == 24)
		{
			v118 = 15360;
		}
		else if (*((_QWORD*)v28 + 5))
		{
			v121 = v118;
			if (!v106)
				v121 = 15360;
			v118 = v121;
		}
		v122 = sub_140248F00(v118);
		if (v122)
		{
			v125 = *(_DWORD*)(a1 + 8);
			v132 = 0i64;
			sub_1405787D0((__int64)&v132, 0, v125, v124, v122, 0i64, 0i64, 0, 0i64, (__int128*)v132.m128i_i8, 0);
		}
		sub_1403DA9C0(v123, v28[3], v28[2], &v132, *((unsigned __int8*)v28 + 38));
		v149 = 0i64;
		sub_1402D9B70(1ui64, v132.m128i_i32, (int**)&v149);
		v126 = v149;
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 13976) + 384i64))(*(_QWORD*)(a1 + 13976), v149);
		if (v126)
			(*(void(__fastcall**)(__m128*))(v126->m128_u64[0] + 8))(v126);
		sub_14079A4F0((__int64)&v128);
		sub_14018B900((__int64)v129, 0);
		goto LABEL_164;
	}
}
// 14045FF0B: variable 'v124' is possibly undefined
// 14045FF23: variable 'v123' is possibly undefined
// 140B55190: using guessed type __int64 (__fastcall *off_140B55190[35])();
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C47C10: using guessed type int dword_140C47C10;
// 140C47C20: using guessed type int dword_140C47C20[14];
// 140C47C70: using guessed type int dword_140C47C70;
// 140C47C80: using guessed type int dword_140C47C80[14];
// 140C47CD0: using guessed type int dword_140C47CD0;
// 140C47CE0: using guessed type int dword_140C47CE0[14];
// 140C47D30: using guessed type int dword_140C47D30;
// 140C47D40: using guessed type int dword_140C47D40[14];
// 140C47D88: using guessed type __int64 qword_140C47D88;
// 140C47D90: using guessed type __int64 qword_140C47D90;
// 140C47D98: using guessed type int dword_140C47D98;
// 140C47DA0: using guessed type __int128 xmmword_140C47DA0;
// 140C47DB0: using guessed type int dword_140C47DB0;
// 140C47DB4: using guessed type int dword_140C47DB4;
// 140C47DB8: using guessed type int dword_140C47DB8;
// 140C47DBC: using guessed type int dword_140C47DBC;
// 140C47DC0: using guessed type __int64 qword_140C47DC0;
// 140C47DC8: using guessed type int dword_140C47DC8;
// 140C47DD0: using guessed type __int64 qword_140C47DD0;
// 140C47DF0: using guessed type int dword_140C47DF0;
// 140C47E00: using guessed type float dword_140C47E00[28];
// 140C47E78: using guessed type __int64 qword_140C47E78;
// 140C47E80: using guessed type __int64 qword_140C47E80;
// 140C47E88: using guessed type int dword_140C47E88;
// 140C47E90: using guessed type __int128 xmmword_140C47E90;
// 140C47EA0: using guessed type int dword_140C47EA0;
// 140C47EA4: using guessed type int dword_140C47EA4;
// 140C47EA8: using guessed type int dword_140C47EA8;
// 140C47EAC: using guessed type int dword_140C47EAC;
// 140C47EB0: using guessed type __int64 qword_140C47EB0;
// 140C47EB8: using guessed type int dword_140C47EB8;
// 140C47EC0: using guessed type __int64 qword_140C47EC0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;

