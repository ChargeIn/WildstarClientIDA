#include "../winhttp.h"

//----- (0000000140315E90) ----------------------------------------------------
__int64 __fastcall sub_140315E90(
	__int64 a1,
	__m128* a2,
	__m128* a3,
	__int64 a4,
	__m128* a5,
	__m128* a6,
	unsigned int* a7,
	__int64 a8,
	_DWORD* a9,
	__int16 a10,
	__int64 a11,
	int a12)
{
	bool v12; // zf
	__int64 v13; // r13
	__int64 result; // rax
	__int64 v15; // r14
	__int64 v19; // r15
	int v20; // xmm9_4
	char v21; // r12
	__int64 v22; // rcx
	__m128 v23; // xmm11
	__int64 v24; // rax
	__m128 v25; // xmm0
	unsigned __int64 v26; // rdi
	int v27; // xmm6_4
	__int64 v28; // rcx
	__m128 v29; // xmm14
	__m128 v30; // xmm15
	__m128 v31; // xmm13
	__m128 v32; // xmm1
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	__m128 v35; // xmm12
	float v36; // xmm12_4
	int v37; // eax
	__int64 v38; // r9
	__int64 v39; // r10
	__int64 v40; // r11
	int v41; // xmm10_4
	__int64 v42; // rsi
	__m128 v43; // xmm2
	__m128 v44; // xmm5
	__m128 v45; // xmm4
	__m128 v46; // xmm2
	__m128 v47; // xmm3
	__m128 v48; // xmm4
	__m128 v49; // xmm3
	__m128 v50; // xmm1
	__m128 v51; // xmm8
	__m128 v52; // xmm1
	__m128 v53; // xmm0
	__m128 v54; // xmm0
	__m128 v55; // xmm1
	__m128 v56; // xmm8
	__m128 v57; // xmm5
	__m128 v58; // xmm3
	__m128 v59; // xmm1
	__m128 v60; // xmm0
	__m128 v61; // xmm8
	__m128 v62; // xmm1
	__m128 v63; // xmm0
	__m128 v64; // xmm1
	__m128 v65; // xmm14
	__m128 v66; // xmm0
	__int64 v67; // rcx
	int v68; // eax
	int v69; // eax
	int v70; // xmm0_4
	int v71; // xmm0_4
	int v72; // xmm0_4
	unsigned __int64 i; // r8
	__int64 v74; // r8
	float* v75; // r15
	unsigned __int64 j; // r14
	float* v77; // r15
	unsigned __int64 k; // r14
	unsigned __int64 v79; // r14
	float* v80; // r15
	_OWORD* v81; // r15
	unsigned __int64 m; // r14
	_OWORD* v83; // r15
	unsigned __int64 n; // r14
	float* v85; // r15
	unsigned __int64 ii; // r14
	unsigned __int64* v87; // r15
	unsigned __int64 jj; // r14
	float* v89; // r15
	unsigned __int64 kk; // r14
	float* v91; // r15
	unsigned __int64 mm; // r14
	float* v93; // r15
	unsigned __int64 nn; // r14
	float* v95; // r15
	unsigned __int64 i1; // r14
	float* v97; // r14
	unsigned __int64 i2; // rsi
	__int64 v99; // rax
	__int64 v100; // r11
	int v101; // r8d
	BOOL v102; // r12d
	int v103; // esi
	int v104; // ecx
	int v105; // ecx
	__int64 v106; // rax
	__int64 v107; // rsi
	float v108; // xmm0_4
	float v109; // xmm1_4
	__m128* v110; // rdx
	unsigned int* v111; // rax
	__m128 v112; // xmm0
	__m128 v113; // xmm2
	__m128 v114; // xmm3
	__int64 v115; // rcx
	int v116; // xmm1_4
	int v117; // xmm0_4
	float v118; // xmm1_4
	float v119; // xmm0_4
	_DWORD* v120; // rcx
	__m128* v121; // rax
	__m128 v122; // xmm0
	__int64 v123; // rdx
	int v124; // edx
	int v125; // edx
	int v126; // edx
	__int64 v127; // rdx
	__int64 v128; // r8
	__int64 v129; // r8
	__int64 v130; // rdx
	__int64 v131; // r8
	__int64 v132; // rdx
	__int64 v133; // r9
	__int64 v134; // r8
	__int64 v135; // r8
	__int64 v136; // rdx
	int* v137; // rax
	__int64 v138; // rdx
	__int64 v139; // r8
	int* v140; // r9
	__int64 v141; // rcx
	__m128 v142; // [rsp+60h] [rbp-A0h]
	__m128 v143; // [rsp+70h] [rbp-90h] BYREF
	__m128 v144; // [rsp+80h] [rbp-80h] BYREF
	__m128 v145; // [rsp+90h] [rbp-70h]
	__m128 v146; // [rsp+A0h] [rbp-60h]
	__m128 v147; // [rsp+B0h] [rbp-50h]
	unsigned int* v148; // [rsp+C0h] [rbp-40h]
	__int64 v149; // [rsp+C8h] [rbp-38h]
	__m128 v150; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v151; // [rsp+E0h] [rbp-20h]
	__m128 v152; // [rsp+F0h] [rbp-10h]
	__m128 v153; // [rsp+100h] [rbp+0h]
	__m128 v154; // [rsp+110h] [rbp+10h]
	__m128 v155; // [rsp+120h] [rbp+20h]
	__m128 v156[3]; // [rsp+130h] [rbp+30h] BYREF
	int v157; // [rsp+164h] [rbp+64h]
	__m128 v158; // [rsp+1A0h] [rbp+A0h]
	__m128 v159[3]; // [rsp+1B0h] [rbp+B0h] BYREF
	int v160; // [rsp+1E4h] [rbp+E4h]
	__m128* v161; // [rsp+1F0h] [rbp+F0h] BYREF
	__m128* v162; // [rsp+1F8h] [rbp+F8h]
	char v163[32]; // [rsp+240h] [rbp+140h] BYREF
	int v164; // [rsp+260h] [rbp+160h]

	v12 = *(_QWORD*)(a1 + 40) == 0i64;
	v13 = a8;
	result = (__int64)a7;
	v15 = a4;
	v149 = a4;
	v148 = a7;
	if (v12)
		result = sub_14018CDF0();
	if (*(_QWORD*)(a1 + 1128))
	{
		v19 = a11;
		if (*(_WORD*)(a11 + 52))
		{
			v20 = 0;
			if (*(float*)(a11 + 32) != 0.0 || *(float*)(a11 + 36) != 0.0)
			{
				v21 = a12;
				v22 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 1432i64);
				if (!v22
					|| (result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 32i64))(v22),
						((unsigned int)result & a12) != 0))
				{
					if (!*(_QWORD*)(a1 + 1152))
						sub_1403135B0(a1);
					v23 = a3[3];
					v24 = *(_QWORD*)(a1 + 8);
					v155 = *a3;
					v154 = a3[1];
					v25 = a3[2];
					v26 = 0i64;
					v142 = v25;
					v158 = v23;
					if (!*(_DWORD*)(v24 + 40) || *(_DWORD*)(v24 + 8) == 2)
					{
						v31 = *a2;
						v32 = a5[1];
						v30 = a2[1];
						v29 = a2[2];
						v143 = a2[3];
						v33 = *a5;
						v145 = v32;
						v34 = a5[3];
						v144 = v33;
						v146 = a5[2];
						v147 = v34;
					}
					else
					{
						v161 = (__m128*)v15;
						sub_1401AFC20((__int64*)&v161, (double*)v150.m128_u64);
						v161 = a2;
						v162 = &v150;
						sub_1401AFB10(&v161, v159);
						v161 = (__m128*)v15;
						sub_1401AFC20((__int64*)&v161, (double*)v150.m128_u64);
						v161 = a5;
						v162 = &v150;
						sub_1401AFB10(&v161, v156);
						v27 = 0;
						v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 488i64);
						if (v28)
						{
							v143 = _mm_add_ps(v23, (__m128)xmmword_140C77870);
							if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64, _QWORD))(*(_QWORD*)v28 + 440i64))(
								v28,
								&v143,
								v163,
								1i64,
								0i64))
							{
								v27 = v164;
							}
						}
						v160 = v27;
						v158.m128_i32[1] = v27;
						v157 = v27;
						v162 = (__m128*)v15;
						v161 = v159;
						sub_1401AFB10(&v161, &v150);
						v161 = v156;
						v162 = (__m128*)v15;
						sub_1401AFB10(&v161, &v144);
						v23 = v158;
						v29 = v152;
						v30 = v151;
						v31 = v150;
						v143 = v153;
					}
					v161 = &v144;
					sub_1401AFC20((__int64*)&v161, (double*)v150.m128_u64);
					v35 = _mm_mul_ps(v31, v31);
					v36 = fsqrt(
						(float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0])
						+ _mm_shuffle_ps(v35, v35, 170).m128_f32[0]);
					v37 = sub_140315E40(a1);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(v40 + 320))(
						v39,
						*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) + 2088i64),
						((*(_DWORD*)(v38 + 3784) >> 11) & 1)
						+ 2
						* (*(unsigned __int8*)(v38 + 1)
							+ 5
							* (*(unsigned __int16*)(v38 + 2052)
								+ 3
								* ((*(_BYTE*)(v38 + 2136) != 0)
									+ 2
									* (5
										* (*(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 24i64) + 3
											* (unsigned int)*(unsigned __int16*)(v38 + 2456))
										+ v37)))));
					v41 = 1065353216;
					v42 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
						qword_140C65670,
						3536i64,
						0i64,
						0i64,
						0);
					if (v42)
					{
						v43 = a6[2];
						v44 = _mm_unpackhi_ps(*a6, a6[1]);
						v45 = _mm_unpackhi_ps(v43, a6[3]);
						v46 = _mm_unpacklo_ps(v43, a6[3]);
						v47 = _mm_unpacklo_ps(*a6, a6[1]);
						*(__m128*)v42 = _mm_shuffle_ps(v47, v46, 68);
						*(__m128*)(v42 + 16) = _mm_shuffle_ps(v47, v46, 238);
						*(__m128*)(v42 + 32) = _mm_shuffle_ps(v44, v45, 68);
						*(__m128*)(v42 + 48) = _mm_shuffle_ps(v44, v45, 238);
						v48 = *(__m128*)(v15 + 16);
						v49 = *(__m128*)(v15 + 48);
						v50 = *(__m128*)(v15 + 32);
						v51 = _mm_shuffle_ps(_mm_unpackhi_ps(*(__m128*)v15, v48), _mm_unpackhi_ps(v50, v49), 68);
						v52 = _mm_unpacklo_ps(v50, v49);
						v53 = _mm_unpacklo_ps(*(__m128*)v15, v48);
						*(__m128*)(v42 + 64) = _mm_shuffle_ps(v53, v52, 68);
						*(__m128*)(v42 + 80) = _mm_shuffle_ps(v53, v52, 238);
						*(__m128*)(v42 + 96) = v51;
						v54 = _mm_unpacklo_ps(v144, v145);
						v55 = _mm_unpacklo_ps(v146, v147);
						v56 = _mm_shuffle_ps(_mm_unpackhi_ps(v144, v145), _mm_unpackhi_ps(v146, v147), 68);
						v57 = v152;
						v58 = v155;
						*(__m128*)(v42 + 112) = _mm_shuffle_ps(v54, v55, 68);
						*(__m128*)(v42 + 128) = _mm_shuffle_ps(v54, v55, 238);
						*(__m128*)(v42 + 144) = v56;
						v59 = _mm_unpacklo_ps(v57, v153);
						v60 = _mm_unpacklo_ps(v150, v151);
						v61 = _mm_shuffle_ps(_mm_unpackhi_ps(v150, v151), _mm_unpackhi_ps(v57, v153), 68);
						*(__m128*)(v42 + 160) = _mm_shuffle_ps(v60, v59, 68);
						*(__m128*)(v42 + 176) = _mm_shuffle_ps(v60, v59, 238);
						*(__m128*)(v42 + 192) = v61;
						v62 = _mm_unpacklo_ps(v142, v23);
						v63 = _mm_unpacklo_ps(v58, v154);
						*(__m128*)(v42 + 208) = _mm_shuffle_ps(v63, v62, 68);
						*(__m128*)(v42 + 224) = _mm_shuffle_ps(v63, v62, 238);
						v64 = _mm_unpacklo_ps(v29, v143);
						v65 = _mm_unpackhi_ps(v29, v143);
						v66 = _mm_unpacklo_ps(v31, v30);
						*(__m128*)(v42 + 240) = _mm_shuffle_ps(_mm_unpackhi_ps(v58, v154), _mm_unpackhi_ps(v142, v23), 68);
						*(__m128*)(v42 + 256) = _mm_shuffle_ps(v66, v64, 68);
						*(__m128*)(v42 + 272) = _mm_shuffle_ps(v66, v64, 238);
						*(__m128*)(v42 + 288) = _mm_shuffle_ps(_mm_unpackhi_ps(v31, v30), v65, 68);
						*(_OWORD*)(v42 + 304) = *(_OWORD*)(a1 + 1088);
						*(_OWORD*)(v42 + 320) = *(_OWORD*)(a1 + 1104);
						*(__m128*)(v42 + 336) = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_shuffle_ps(*(__m128*)(a1 + 960), *(__m128*)(a1 + 960), 85),
										v145),
									_mm_mul_ps(
										_mm_shuffle_ps(*(__m128*)(a1 + 960), *(__m128*)(a1 + 960), 0),
										v144)),
								_mm_mul_ps(
									_mm_shuffle_ps(*(__m128*)(a1 + 960), *(__m128*)(a1 + 960), 170),
									v146)),
							v147);
						*(_DWORD*)(v42 + 352) = *a9;
						*(_DWORD*)(v42 + 356) = a9[1];
						*(_DWORD*)(v42 + 360) = a9[2];
						*(_DWORD*)(v42 + 364) = 0;
						sub_140262D50((float*)a8, (__m128*)(v42 + 368));
						*(_OWORD*)(v42 + 480) = *(_OWORD*)(a8 + 176);
						*(_DWORD*)(v42 + 496) = *(_DWORD*)(a8 + 144);
						*(_DWORD*)(v42 + 500) = *(_DWORD*)(a8 + 148);
						*(_DWORD*)(v42 + 504) = *(_DWORD*)(a8 + 152);
						*(_DWORD*)(v42 + 508) = *(_DWORD*)(a8 + 692);
						*(_DWORD*)(v42 + 512) = *(_DWORD*)(a8 + 160);
						*(_DWORD*)(v42 + 516) = *(_DWORD*)(a8 + 164);
						*(_DWORD*)(v42 + 520) = *(_DWORD*)(a8 + 168);
						*(_DWORD*)(v42 + 524) = *(_DWORD*)(a8 + 688);
						sub_140262750(v67, v42 + 528, (_DWORD*)v15);
						*(_DWORD*)(v42 + 576) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2148i64);
						*(_DWORD*)(v42 + 580) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2152i64);
						*(_QWORD*)(v42 + 584) = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 3708i64);
						*(float*)(v42 + 592) = fmaxf((float)*(int*)(*(_QWORD*)(a1 + 416) + 3704i64), 1.0);
						*(float*)(v42 + 596) = (float)*(int*)(*(_QWORD*)(a1 + 416) + 3724i64);
						v68 = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 3724i64);
						if (v68)
							v69 = v68 - 1;
						else
							v69 = 0;
						*(float*)(v42 + 600) = (float)v69;
						*(float*)(v42 + 604) = (float)(1 << *(_DWORD*)(*(_QWORD*)(a1 + 416) + 3716i64));
						*(_OWORD*)(v42 + 608) = *(_OWORD*)(a1 + 944);
						*(float*)(v42 + 624) = v36;
						*(_DWORD*)(v42 + 628) = *(_DWORD*)(a1 + 1160);
						*(_DWORD*)(v42 + 640) = *(_DWORD*)(*(_QWORD*)(a1 + 1048) + 32i64);
						*(float*)(v42 + 656) = (float)(*(_BYTE*)(*(_QWORD*)(a1 + 416) + 2136i64) == 2);
						*(float*)(v42 + 660) = (float)(*(_BYTE*)(*(_QWORD*)(a1 + 416) + 2136i64) == 1);
						if ((*(_DWORD*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x1000) != 0)
							v70 = 1065353216;
						else
							v70 = 0;
						*(_DWORD*)(v42 + 664) = v70;
						if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 4) != 0)
							v71 = 1065353216;
						else
							v71 = 0;
						*(_DWORD*)(v42 + 668) = v71;
						if ((*(_DWORD*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x100) != 0)
							v72 = 1065353216;
						else
							v72 = 0;
						*(_DWORD*)(v42 + 672) = v72;
						for (i = 0i64; i < 0x800; i = v74 + 64)
							sub_140313A00(i + v42 + 688, (_DWORD*)(i + *(_QWORD*)(a1 + 1152)));
						v75 = (float*)(v42 + 2736);
						for (j = 0i64; j < 0x28; j += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + j),
								*(_QWORD*)(a1 + 1240),
								*(_QWORD*)(a1 + 1232),
								v75,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1024i64));
							v75 += 4;
						}
						v77 = (float*)(v42 + 2740);
						for (k = 0i64; k < 0x28; k += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + k),
								*(_QWORD*)(a1 + 1192),
								*(_QWORD*)(a1 + 1184),
								v77,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1272i64));
							v77 += 4;
						}
						v79 = 0i64;
						v80 = (float*)(v42 + 2744);
						do
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + v79),
								*(_QWORD*)(a1 + 1208),
								*(_QWORD*)(a1 + 1200),
								v80,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1520i64));
							v79 += 4i64;
							v80 += 4;
						} while (v79 < 0x28);
						if (*(_WORD*)(*(_QWORD*)(a1 + 416) + 660i64))
						{
							v81 = (_OWORD*)(v42 + 3216);
							for (m = 0i64; m < 0x28; m += 4i64)
								sub_140318930(
									*(float*)((char*)&unk_140AF1490 + m),
									*(_QWORD*)(a1 + 1224),
									*(_QWORD*)(a1 + 1216),
									v81++,
									*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 660i64));
							v83 = (_OWORD*)(v42 + 3376);
							for (n = 0i64; n < 0x28; n += 4i64)
								sub_140318930(
									*(float*)((char*)&unk_140AF1490 + n),
									*(_QWORD*)(a1 + 1224),
									*(_QWORD*)(a1 + 1216) + 32i64 * *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 660i64),
									v83++,
									*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 660i64));
						}
						v85 = (float*)(v42 + 2748);
						for (ii = 0i64; ii < 0x28; ii += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + ii),
								*(_QWORD*)(a1 + 1272),
								*(_QWORD*)(a1 + 1264),
								v85,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2156i64));
							v85 += 4;
						}
						if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 8) != 0)
						{
							v87 = (unsigned __int64*)(v42 + 2896);
							for (jj = 0i64; jj < 0x28; jj += 4i64)
							{
								sub_140318A40(
									*(float*)((char*)&unk_140AF1490 + jj),
									*(_QWORD*)(a1 + 1256),
									*(_QWORD*)(a1 + 1248),
									v87,
									*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1768i64));
								v87 += 2;
							}
						}
						else
						{
							*(_QWORD*)(v42 + 2896) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2912) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2928) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2944) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2960) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2976) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 2992) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 3008) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 3024) = 0x3F0000003F000000i64;
							*(_QWORD*)(v42 + 3040) = 0x3F0000003F000000i64;
						}
						v89 = (float*)(v42 + 2908);
						for (kk = 0i64; kk < 0x28; kk += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + kk),
								*(_QWORD*)(a1 + 1352),
								*(_QWORD*)(a1 + 1344),
								v89,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 3448i64));
							v89 += 4;
						}
						v91 = (float*)(v42 + 3056);
						for (mm = 0i64; mm < 0x28; mm += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + mm),
								*(_QWORD*)(a1 + 1288),
								*(_QWORD*)(a1 + 1280),
								v91,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2460i64));
							v91 += 4;
						}
						v93 = (float*)(v42 + 3060);
						for (nn = 0i64; nn < 0x28; nn += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + nn),
								*(_QWORD*)(a1 + 1304),
								*(_QWORD*)(a1 + 1296),
								v93,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2704i64));
							v93 += 4;
						}
						v95 = (float*)(v42 + 3064);
						for (i1 = 0i64; i1 < 0x28; i1 += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + i1),
								*(_QWORD*)(a1 + 1320),
								*(_QWORD*)(a1 + 1312),
								v95,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2952i64));
							v95 += 4;
						}
						v13 = a8;
						v97 = (float*)(v42 + 3068);
						for (i2 = 0i64; i2 < 0x28; i2 += 4i64)
						{
							sub_140318840(
								*(float*)((char*)&unk_140AF1490 + i2),
								*(_QWORD*)(a1 + 1336),
								*(_QWORD*)(a1 + 1328),
								v97,
								*(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 3200i64));
							v97 += 4;
						}
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
						v21 = a12;
						v15 = v149;
						v19 = a11;
					}
					v99 = *(_QWORD*)(a1 + 416);
					v100 = *(_QWORD*)(a1 + 8);
					v101 = 0;
					v102 = (v21 & 1) == 0;
					if (!*(_DWORD*)(v100 + 20)
						|| (v103 = 1, (**(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) & 1) != 0))
					{
						v103 = 0;
					}
					LOBYTE(v101) = (a10 & 0x224) != 0;
					v104 = ((*(_DWORD*)(v99 + 3784) >> 2) & 1) + 2 * (*(unsigned __int16*)(v99 + 2456) + 2 * v101 + v101);
					v105 = *(unsigned __int16*)(v100 + 24) + 2 * v104 + v104;
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) + 2096i64),
						*(_DWORD*)(v100 + 28)
						+ 4
						* (v103
							+ 2
							* (v102
								+ 2
								* ((*(float*)(v13 + 756) > 0.0) + 2 * ((unsigned int)*(unsigned __int16*)(v99 + 2436) + 4 * v105 + v105)))));
					v106 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
						+ 272i64))(
							qword_140C65670,
							336i64,
							0i64,
							0i64,
							0);
					v107 = v106;
					if (v106)
					{
						*(_DWORD*)v106 = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2440i64);
						v108 = *(float*)(*(_QWORD*)(a1 + 416) + 2444i64) - *(float*)(*(_QWORD*)(a1 + 416) + 2440i64);
						if (v108 == 0.0)
							v109 = 0.0;
						else
							v109 = 1.0 / v108;
						*(float*)(v106 + 4) = v109;
						v110 = (__m128*)(v106 + 48);
						*(_DWORD*)(v106 + 8) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 656i64);
						v111 = v148;
						*(_DWORD*)(v107 + 12) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2016i64);
						v112 = (__m128)v111[1];
						v113 = (__m128) * v111;
						v114 = v113;
						v113.m128_f32[0] = v113.m128_f32[0] - v112.m128_f32[0];
						v114.m128_f32[0] = v114.m128_f32[0] * v112.m128_f32[0];
						*(__m128*)(v107 + 32) = _mm_unpacklo_ps(_mm_unpacklo_ps(v114, v112), _mm_unpacklo_ps(v113, (__m128)0i64));
						*(_QWORD*)(v107 + 16) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1360i64);
						*(_QWORD*)(v107 + 24) = _mm_mul_ps(
							*(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1360i64),
							(__m128)xmmword_140B7AC50).m128_u64[0];
						sub_140262D50((float*)v13, v110);
						*(_OWORD*)(v107 + 160) = *(_OWORD*)(v13 + 176);
						*(_DWORD*)(v107 + 176) = *(_DWORD*)(v13 + 144);
						*(_DWORD*)(v107 + 180) = *(_DWORD*)(v13 + 148);
						*(_DWORD*)(v107 + 184) = *(_DWORD*)(v13 + 152);
						*(_DWORD*)(v107 + 188) = *(_DWORD*)(v13 + 692);
						*(_DWORD*)(v107 + 192) = *(_DWORD*)(v13 + 160);
						*(_DWORD*)(v107 + 196) = *(_DWORD*)(v13 + 164);
						*(_DWORD*)(v107 + 200) = *(_DWORD*)(v13 + 168);
						*(_DWORD*)(v107 + 204) = *(_DWORD*)(v13 + 688);
						sub_140262750(v115, v107 + 208, (_DWORD*)v15);
						v116 = -1082130432;
						*(_OWORD*)(v107 + 256) = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1376i64);
						if (*(_WORD*)(*(_QWORD*)(a1 + 416) + 2432i64))
							v117 = -1082130432;
						else
							v117 = 1065353216;
						*(_DWORD*)(v107 + 272) = v117;
						if (!*(_WORD*)(*(_QWORD*)(a1 + 416) + 2434i64))
							v116 = 1065353216;
						*(_DWORD*)(v107 + 276) = v116;
						*(_DWORD*)(v107 + 280) = *(_DWORD*)(v19 + 44);
						v118 = *(float*)(*(_QWORD*)(a1 + 8) + 136i64);
						if (fabs(v118) > 0.0000099999997)
							v119 = 1.0 / v118;
						else
							v119 = 10000000.0;
						*(float*)(v107 + 284) = v119;
						v120 = *(_DWORD**)(a1 + 416);
						*(_DWORD*)(v107 + 288) = v120[508];
						*(_DWORD*)(v107 + 292) = v120[509];
						*(_DWORD*)(v107 + 296) = v120[510];
						v121 = *(__m128**)(a1 + 40);
						if (v121[16].m128_f32[3] == 0.0)
							v122 = (__m128)xmmword_140B7A740;
						else
							v122 = v121[16];
						*(__m128*)(v107 + 320) = _mm_mul_ps(
							v122,
							_mm_shuffle_ps(
								(__m128) * (unsigned int*)(a1 + 96),
								(__m128) * (unsigned int*)(a1 + 96),
								0));
						*(_DWORD*)(v107 + 300) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2048i64);
						if (**(_BYTE**)(a1 + 416) == 2)
							v41 = -1096111445;
						*(_DWORD*)(v107 + 304) = v41;
						if (**(_BYTE**)(a1 + 416) == 2)
							v20 = 1079334229;
						*(_DWORD*)(v107 + 308) = v20;
						*(_DWORD*)(v107 + 312) = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 2448i64);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					}
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(
						qword_140C65670,
						*(unsigned int*)(*(_QWORD*)(a1 + 8) + 36i64));
					v123 = 7i64;
					if (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 32i64))
						v123 = 1i64;
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v123);
					v124 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 28i64);
					if (v124)
					{
						v125 = v124 - 1;
						if (!v125)
						{
							v128 = 0i64;
							v127 = 8i64;
							goto LABEL_96;
						}
						v126 = v125 - 1;
						if (v126)
						{
							if (v126 != 1)
							{
							LABEL_97:
								v129 = *(_QWORD*)(a1 + 40);
								v130 = *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2424i64);
								if ((unsigned int)v130 >= *(_DWORD*)(*(_QWORD*)(v129 + 64) + 448i64))
									(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
										qword_140C65670,
										0i64,
										0i64,
										0i64,
										0i64);
								else
									(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
										qword_140C65670,
										0i64,
										*(_QWORD*)(*(_QWORD*)(v129 + 1056) + 24 * v130 + 16),
										0i64);
								v131 = *(_QWORD*)(a1 + 40);
								v132 = *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2452i64);
								if ((unsigned int)v132 >= *(_DWORD*)(*(_QWORD*)(v131 + 64) + 448i64))
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
										qword_140C65670,
										1i64,
										0i64,
										0i64,
										0i64);
								else
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
										qword_140C65670,
										1i64,
										*(_QWORD*)(*(_QWORD*)(v131 + 1056) + 24 * v132 + 16),
										0i64);
								v133 = *(_QWORD*)(a1 + 40);
								v134 = *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2454i64);
								if ((unsigned int)v134 >= *(_DWORD*)(*(_QWORD*)(v133 + 64) + 448i64))
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
										qword_140C65670,
										2i64,
										0i64,
										0i64,
										0i64);
								else
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
										qword_140C65670,
										2i64,
										*(_QWORD*)(*(_QWORD*)(v133 + 1056) + 24 * v134 + 16),
										0i64);
								v135 = *(_QWORD*)(a1 + 40);
								v136 = *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2458i64);
								if ((unsigned int)v136 >= *(_DWORD*)(*(_QWORD*)(v135 + 64) + 448i64))
									(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
										qword_140C65670,
										4i64);
								else
									(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
										qword_140C65670,
										4i64,
										*(_QWORD*)(*(_QWORD*)(v135 + 1056) + 24 * v136 + 16));
								v137 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670
									+ 224i64))(
										qword_140C65670,
										28 * (unsigned int)*(_QWORD*)(a1 + 1128),
										12i64,
										1i64);
								v140 = v137;
								if (v137)
								{
									if (*(_DWORD*)(a1 + 1072))
									{
										if (*(_QWORD*)(a1 + 1128))
										{
											do
											{
												v141 = *(_QWORD*)(a1 + 1120);
												++v26;
												v140 += 7;
												v138 = 28i64 * *(unsigned int*)(*(_QWORD*)(a1 + 1136) + 4 * v26 - 4);
												*(v140 - 7) = *(_DWORD*)(v138 + v141);
												*(v140 - 6) = *(_DWORD*)(v138 + v141 + 4);
												*(v140 - 5) = *(_DWORD*)(v138 + v141 + 8);
												*(v140 - 4) = *(_DWORD*)(v138 + v141 + 12);
												*(v140 - 3) = *(_DWORD*)(v138 + v141 + 16);
												*(v140 - 2) = *(_DWORD*)(v138 + v141 + 20);
												*(v140 - 1) = *(_DWORD*)(v138 + v141 + 24);
											} while (v26 < *(_QWORD*)(a1 + 1128));
										}
									}
									else
									{
										sub_1407DB590(v137, *(int**)(a1 + 1120), 28i64 * *(_QWORD*)(a1 + 1128));
									}
									(*(void(__fastcall**)(__int64, __int64, __int64, int*))(*(_QWORD*)qword_140C65670 + 232i64))(
										qword_140C65670,
										v138,
										v139,
										v140);
								}
								(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
									qword_140C65670,
									*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 56i64) + 16i64) + 2232i64),
									12i64);
								return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 648i64))(
									qword_140C65670,
									4i64,
									0i64);
							}
							v127 = 8i64;
							v128 = 2i64;
						LABEL_96:
							(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
								qword_140C65670,
								v127,
								v128,
								0i64);
							goto LABEL_97;
						}
						v128 = 1i64;
					}
					else
					{
						v128 = 5i64;
					}
					v127 = 4i64;
					goto LABEL_96;
				}
			}
		}
	}
	return result;
}
// 1403162DB: variable 'v40' is possibly undefined
// 1403162DB: variable 'v39' is possibly undefined
// 1403162B4: variable 'v38' is possibly undefined
// 1403165D3: variable 'v67' is possibly undefined
// 1403167CB: variable 'v74' is possibly undefined
// 140316FA2: variable 'v115' is possibly undefined
// 140317403: variable 'v138' is possibly undefined
// 140317403: variable 'v139' is possibly undefined
// 140317403: variable 'v140' is possibly undefined
// 140B7A740: using guessed type __int128 xmmword_140B7A740;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140315E90: using guessed type __m128 var_250[3];
// 140315E90: using guessed type __m128 var_2D0[3];
// 140315E90: using guessed type char var_1C0[32];

