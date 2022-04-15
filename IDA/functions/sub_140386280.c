#include "../winhttp.h"

//----- (0000000140386280) ----------------------------------------------------
__int64 __fastcall sub_140386280(__int64 a1, float* a2, __int64 a3, int a4, __int64 a5)
{
	unsigned __int64 v5; // rdi
	__int64 v9; // r15
	__int64 v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	HANDLE EventW; // rcx
	float v14; // xmm9_4
	bool v15; // cc
	__int64 v16; // rcx
	__m128 v17; // xmm1
	__m128 v18; // xmm2
	__m128 v19; // xmm7
	unsigned int v20; // ecx
	__m128i v21; // xmm2
	__m128i v22; // xmm3
	signed int v23; // eax
	__m128i v24; // xmm0
	__m128 v25; // xmm7
	int v26; // eax
	__m128 v27; // xmm8
	int v28; // ecx
	__int64 v29; // rax
	int v30; // ebx
	unsigned int v31; // edx
	__int64 v32; // rax
	unsigned int v33; // r9d
	__int64 v34; // rbx
	__int64 v35; // rdx
	__m128 v36; // xmm4
	float v37; // xmm7_4
	__int64 v38; // rcx
	__m128 v39; // xmm4
	__int64 v40; // r8
	__m128 v41; // xmm3
	float v42; // xmm0_4
	__int64 v43; // r9
	__m128 v44; // xmm2
	float v45; // xmm1_4
	__m128 v46; // xmm4
	float v47; // xmm3_4
	__m128 v48; // xmm4
	float v49; // xmm2_4
	float v50; // xmm5_4
	float v51; // xmm4_4
	float v52; // xmm1_4
	float v53; // xmm1_4
	float v54; // xmm2_4
	float v55; // xmm1_4
	float v56; // xmm2_4
	__m128 v57; // xmm0
	__int64 v58; // rax
	__m128 v59; // xmm0
	__m128 v60; // xmm2
	__m128 v61; // xmm3
	__m128 v62; // xmm3
	__m128 v63; // xmm1
	__m128 v64; // xmm2
	__m128 v65; // xmm2
	__m128 v66; // xmm1
	__m128 v67; // xmm3
	__m128 v68; // xmm2
	__m128 v69; // xmm3
	__m128 v70; // xmm3
	__m128 v71; // xmm1
	__m128 v72; // xmm2
	__m128 v73; // xmm1
	__m128 v74; // xmm3
	__m128 v75; // xmm2
	float v76; // xmm0_4
	__int64 v77; // rbx
	__int64 i; // r12
	_DWORD* v79; // rsi
	__int64 v80; // rbx
	int v81; // edx
	__int64 v82; // rcx
	__int64 v83; // rax
	HANDLE v84; // rcx
	float* v85; // rax
	float v86; // xmm0_4
	__int64* j; // rsi
	__int64 v88; // rbx
	int v89; // edx
	__int64 v90; // rcx
	__int64 v91; // rax
	HANDLE v92; // rcx
	float* v93; // rax
	float v94; // xmm0_4
	__int64 v95; // rax
	__int64 v96; // r15
	_QWORD* v97; // rsi
	__int64 v98; // rbx
	int v99; // edx
	__int64 v100; // rcx
	__int64 v101; // rax
	HANDLE v102; // rcx
	float* v103; // rax
	float v104; // xmm0_4
	__int64 v105; // rbx
	int* v106; // rax
	int* v107; // r12
	__int64 result; // rax
	__int64 v109; // rdx
	int v110; // r8d
	unsigned __int64 v111; // rbx
	__int64 v112; // [rsp+28h] [rbp-E0h] BYREF
	int v113[2]; // [rsp+30h] [rbp-D8h] BYREF
	int v114[2]; // [rsp+38h] [rbp-D0h] BYREF
	_DWORD v115[2]; // [rsp+40h] [rbp-C8h] BYREF
	__int64 v116[2]; // [rsp+48h] [rbp-C0h] BYREF
	float v117; // [rsp+58h] [rbp-B0h]
	int v118; // [rsp+60h] [rbp-A8h]
	int v119; // [rsp+64h] [rbp-A4h]
	__int64 v120; // [rsp+68h] [rbp-A0h]
	__int64 v121; // [rsp+70h] [rbp-98h]
	__int64 v122; // [rsp+78h] [rbp-90h]
	int v123; // [rsp+80h] [rbp-88h]
	__int64 v124; // [rsp+88h] [rbp-80h]
	int* v125; // [rsp+90h] [rbp-78h]
	__int64 v126; // [rsp+98h] [rbp-70h]
	__int64 v127; // [rsp+A0h] [rbp-68h]
	__m128 v128; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v129[2]; // [rsp+C8h] [rbp-40h] BYREF
	int v130[4]; // [rsp+E8h] [rbp-20h] BYREF
	int v131[4]; // [rsp+F8h] [rbp-10h] BYREF
	int v132[4]; // [rsp+108h] [rbp+0h] BYREF
	int v133[4]; // [rsp+118h] [rbp+10h] BYREF
	_DWORD* v134; // [rsp+128h] [rbp+20h]
	int* v135; // [rsp+130h] [rbp+28h]
	int* v136; // [rsp+140h] [rbp+38h]
	int* v137; // [rsp+148h] [rbp+40h]
	__m128 v138; // [rsp+158h] [rbp+50h]
	__m128 v139; // [rsp+168h] [rbp+60h]
	__int128 v140; // [rsp+178h] [rbp+70h]
	__m128 v141; // [rsp+188h] [rbp+80h]
	__int128 v142; // [rsp+198h] [rbp+90h]
	__m128 v143; // [rsp+1A8h] [rbp+A0h]
	__m128 v144; // [rsp+1B8h] [rbp+B0h]
	__m128 v145; // [rsp+1C8h] [rbp+C0h]
	__m128 v146; // [rsp+1D8h] [rbp+D0h]
	__m128 v147; // [rsp+1E8h] [rbp+E0h]
	__m128 v148; // [rsp+1F8h] [rbp+F0h]
	__m128 v149; // [rsp+208h] [rbp+100h]
	__m128 v150; // [rsp+218h] [rbp+110h]
	__m128 v151; // [rsp+228h] [rbp+120h]
	__m128 v152; // [rsp+238h] [rbp+130h]
	__m128 v153; // [rsp+248h] [rbp+140h]
	__m128 v154; // [rsp+258h] [rbp+150h]
	__m128 v155; // [rsp+268h] [rbp+160h]
	__m128 v156; // [rsp+278h] [rbp+170h]
	__m128 v157; // [rsp+288h] [rbp+180h]
	__m128 v158; // [rsp+298h] [rbp+190h]
	__m128 v159; // [rsp+2A8h] [rbp+1A0h]
	__m128 v160; // [rsp+2B8h] [rbp+1B0h]
	__m128 v161; // [rsp+2C8h] [rbp+1C0h]
	__m128 v162; // [rsp+2D8h] [rbp+1D0h]
	__m128 v163; // [rsp+2E8h] [rbp+1E0h]
	__int128 v164; // [rsp+2F8h] [rbp+1F0h]
	__m128 v165; // [rsp+308h] [rbp+200h]
	__m128 v166; // [rsp+318h] [rbp+210h]
	__m128 v167; // [rsp+328h] [rbp+220h]
	__m128 v168; // [rsp+338h] [rbp+230h]
	__m128 v169; // [rsp+348h] [rbp+240h]
	__m128 v170; // [rsp+358h] [rbp+250h]
	__m128 v171; // [rsp+368h] [rbp+260h]
	__m128 v172; // [rsp+378h] [rbp+270h]
	__m128 v173; // [rsp+388h] [rbp+280h]
	__m128 v174; // [rsp+398h] [rbp+290h]
	__m128 v175; // [rsp+3A8h] [rbp+2A0h]
	__m128 v176; // [rsp+3B8h] [rbp+2B0h]
	__m128 v177; // [rsp+3C8h] [rbp+2C0h]
	unsigned int v178; // [rsp+468h] [rbp+360h]
	int v179; // [rsp+470h] [rbp+368h] BYREF
	int v180; // [rsp+474h] [rbp+36Ch]
	__int64 v181; // [rsp+478h] [rbp+370h]
	int v182; // [rsp+480h] [rbp+378h]

	v182 = a4;
	v181 = a3;
	v5 = 0i64;
	v9 = a3;
	if (*(_QWORD*)(a1 + 1448))
	{
		v10 = *(_QWORD*)a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v10 + 48) == CurrentThreadId)
		{
			++* (_QWORD*)(v10 + 56);
		}
		else
		{
			v12 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v12 >= 0x400)
				{
					sub_14019FB60(v10 + 48, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v10 + 48) = CurrentThreadId;
		}
	LABEL_9:
		v133[0] = -1;
		if (*(_QWORD*)(a1 + 1448))
			sub_14037CC30(a1, (__int64)v133);
		if (*(_QWORD*)(v10 + 56) <= 1ui64)
		{
			*(_DWORD*)(v10 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v10 + 56), 0i64);
			if (*(_QWORD*)(v10 + 64))
			{
				if (!*(_QWORD*)(v10 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v10 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v10 + 56);
		}
	}
	v178 = a4;
	v14 = 1.0;
	v15 = *(float*)(a1 + 196) <= a2[1];
	v129[0] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)a2, (__m128) * ((unsigned int*)a2 + 2)),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C7ACA4, (__m128)0i64));
	if (v15)
	{
		v16 = *(_QWORD*)(a1 + 16);
		v112 = 0i64;
		if ((*(int(__fastcall**)(__int64, _QWORD, __int64*, __int64))(*(_QWORD*)v16 + 72i64))(v16, 0i64, &v112, 1i64) >= 0)
		{
			v17 = *(__m128*)a2;
			v114[0] = 2047;
			v114[1] = 2047;
			v134 = v115;
			v164 = xmmword_140B7AC50;
			v135 = v114;
			v173 = _mm_shuffle_ps(v17, v17, 136);
			v142 = 0i64;
			v175 = _mm_mul_ps(
				v173,
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C44580, (__m128)(unsigned int)dword_140C44580, 0));
			v136 = &v179;
			v137 = v113;
			v140 = xmmword_140B7B490;
			v177 = _mm_add_ps((__m128)xmmword_140B7AC50, v175);
			v18 = _mm_min_ps(_mm_mul_ps(v177, (__m128)xmmword_140B7B490), (__m128)xmmword_140B7B490);
			v19 = _mm_max_ps((__m128)0i64, v18);
			v20 = (int)v19.m128_f32[0];
			v168 = v18;
			v21 = _mm_cvtsi32_si128(0);
			v160 = v19;
			v144 = v19;
			if ((int)v19.m128_f32[0] > 2047)
				v20 = 2047;
			v115[0] = v20;
			v22 = _mm_cvtsi32_si128(v20);
			v23 = (int)_mm_shuffle_ps(v19, v19, 85).m128_f32[0];
			v24 = _mm_cvtsi32_si128(0);
			if (v23 > 2047)
				v23 = 2047;
			v115[1] = v23;
			v113[0] = 15;
			v113[1] = 15;
			v176 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v22, v24), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v21)));
			v128 = _mm_sub_ps(v19, v176);
			v25 = _mm_mul_ps(v128, (__m128)xmmword_140B7B3F0);
			v26 = (int)v25.m128_f32[0];
			v146 = v25;
			v27 = _mm_shuffle_ps(v25, v25, 85);
			v28 = (int)v27.m128_f32[0];
			if ((int)v25.m128_f32[0] > 15)
				v26 = 15;
			v179 = v26;
			if (v28 > 15)
				v28 = 15;
			v180 = v28;
			v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v112 + 16i64))(v112);
			v30 = v179 * *(_DWORD*)(v29 + 40) + v180 * *(_DWORD*)(v29 + 44);
			if (*(__int16*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v112 + 24i64))(v112) + v30) >= 0)
			{
				v31 = v179 + 33 * v180;
				v32 = *(_QWORD*)(a1 + 152);
				v33 = v31 + 17;
				v34 = 2i64 * v31;
				v25.m128_f32[0] = v25.m128_f32[0] - (float)v179;
				v27.m128_f32[0] = v27.m128_f32[0] - (float)v180;
				v35 = 2i64 * (v31 + 1);
				v36 = v25;
				v37 = *(float*)(v32 + 16i64 * (unsigned int)(v179 + 33 * v180) + 12);
				v38 = 2i64 * v33;
				v39 = _mm_unpacklo_ps(_mm_unpacklo_ps(v36, (__m128)0i64), _mm_unpacklo_ps(v27, (__m128)0i64));
				v40 = 2i64 * (v33 + 16);
				v41 = v39;
				v162 = v39;
				v42 = *(float*)(v32 + 16i64 * v33 + 12);
				v43 = 2i64 * (v33 + 17);
				v44 = _mm_shuffle_ps(v39, v39, 85);
				v41.m128_f32[0] = v39.m128_f32[0] + v44.m128_f32[0];
				v44.m128_f32[0] = v44.m128_f32[0] - v39.m128_f32[0];
				v45 = *(float*)(v32 + 8 * v43 + 12);
				v41.m128_f32[0] = v41.m128_f32[0] - 1.0;
				v46 = v41;
				v47 = *(float*)(v32 + 8 * v35 + 12);
				v48 = _mm_unpacklo_ps(_mm_unpacklo_ps(v46, (__m128)0i64), _mm_unpacklo_ps(v44, (__m128)0i64));
				v49 = *(float*)(v32 + 8 * v40 + 12);
				v129[1] = (__int128)v48;
				v50 = v48.m128_f32[0];
				v51 = _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
				if (v51 >= 0.0)
				{
					v54 = (float)(v49 - v42) * v51;
					v55 = v50 >= 0.0 ? v45 - v42 : v42 - v37;
					v53 = (float)((float)(v55 * v50) + v42) + v54;
				}
				else
				{
					v52 = v50 >= 0.0 ? (float)((float)(v45 - v42) * v50) + v42 : (float)((float)(v42 - v37) * v50) + v42;
					v53 = v52 + (float)((float)(v42 - v47) * v51);
				}
				v56 = a2[1];
				if (v56 >= v53)
				{
					v57 = (__m128)DWORD1(v129[0]);
					v14 = (float)(v53 - v56) / (float)(*((float*)v129 + 1) - v56);
					if ((a4 & 1) != 0)
						*(float*)(v9 + 32) = v53;
					if ((a4 & 2) != 0)
					{
						v58 = *(_QWORD*)(a1 + 152);
						v57.m128_f32[0] = v51;
						v59 = _mm_shuffle_ps(v57, v57, 0);
						v60 = *(__m128*)(v58 + 8 * v38);
						if (v51 >= 0.0)
						{
							v69 = _mm_sub_ps(*(__m128*)(v58 + 8 * v40), v60);
							if (v50 >= 0.0)
							{
								v73 = *(__m128*)(v58 + 8 * v43);
								v159 = v69;
								v74 = _mm_mul_ps(v69, v59);
								v59.m128_f32[0] = v50;
								v161 = v74;
								v163 = _mm_sub_ps(v73, v60);
								v165 = _mm_mul_ps(v163, _mm_shuffle_ps(v59, v59, 0));
								v167 = _mm_add_ps(v165, v60);
								v169 = _mm_add_ps(v74, v167);
								v75 = _mm_mul_ps(v169, v169);
								v75.m128_f32[0] = 1.0
									/ fsqrt(
										(float)(v75.m128_f32[0] + _mm_shuffle_ps(v75, v75, 85).m128_f32[0])
										+ _mm_shuffle_ps(v75, v75, 170).m128_f32[0]);
								v65 = _mm_mul_ps(_mm_shuffle_ps(v75, v75, 0), v169);
								v171 = v65;
							}
							else
							{
								v145 = v69;
								v70 = _mm_mul_ps(v69, v59);
								v59.m128_f32[0] = v50;
								v71 = _mm_sub_ps(v60, *(__m128*)(v58 + 8 * v34));
								v147 = v70;
								v149 = v71;
								v151 = _mm_mul_ps(v71, _mm_shuffle_ps(v59, v59, 0));
								v153 = _mm_add_ps(v151, v60);
								v155 = _mm_add_ps(v70, v153);
								v72 = _mm_mul_ps(v155, v155);
								v72.m128_f32[0] = 1.0
									/ fsqrt(
										(float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
										+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0]);
								v65 = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0), v155);
								v157 = v65;
							}
						}
						else
						{
							v61 = _mm_sub_ps(v60, *(__m128*)(v58 + 8 * v35));
							if (v50 >= 0.0)
							{
								v66 = *(__m128*)(v58 + 8 * v43);
								v166 = v61;
								v67 = _mm_mul_ps(v61, v59);
								v59.m128_f32[0] = v50;
								v156 = v67;
								v172 = _mm_sub_ps(v66, v60);
								v158 = _mm_mul_ps(v172, _mm_shuffle_ps(v59, v59, 0));
								v139 = _mm_add_ps(v158, v60);
								v141 = _mm_add_ps(v67, v139);
								v68 = _mm_mul_ps(v141, v141);
								v68.m128_f32[0] = 1.0
									/ fsqrt(
										(float)(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0])
										+ _mm_shuffle_ps(v68, v68, 170).m128_f32[0]);
								v65 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v141);
								v143 = v65;
							}
							else
							{
								v148 = v61;
								v62 = _mm_mul_ps(v61, v59);
								v59.m128_f32[0] = v50;
								v63 = _mm_sub_ps(v60, *(__m128*)(v58 + 8 * v34));
								v170 = v62;
								v150 = v63;
								v138 = _mm_mul_ps(v63, _mm_shuffle_ps(v59, v59, 0));
								v152 = _mm_add_ps(v138, v60);
								v174 = _mm_add_ps(v62, v152);
								v64 = _mm_mul_ps(v174, v174);
								v64.m128_f32[0] = 1.0
									/ fsqrt(
										(float)(v64.m128_f32[0] + _mm_shuffle_ps(v64, v64, 85).m128_f32[0])
										+ _mm_shuffle_ps(v64, v64, 170).m128_f32[0]);
								v65 = _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0), v174);
								v154 = v65;
							}
						}
						*(__m128*)v9 = v65;
					}
					if ((a4 & 0xC) != 0)
						sub_140387270(a1, &v128, v9);
					if ((a4 & 0x10) != 0)
						sub_140387600((__int64*)a1, &v128, v9);
					if ((a4 & 0x80000) != 0)
						*(_DWORD*)(v9 + 60) = 0;
				}
			}
			if ((a4 & 0x20) != 0)
			{
				sub_140387780((__int64*)a1, &v128, v9);
				v178 = a4 & 0xFFFFFFDF;
			}
		}
		if (v112)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v112 + 8i64))(v112);
	}
	v76 = *(float*)(a1 + 916);
	v77 = a5;
	v117 = v14;
	v116[0] = (__int64)a2;
	v116[1] = (__int64)v129;
	v118 = 16449;
	LODWORD(v120) = 0;
	v121 = 0i64;
	v15 = v76 <= a2[1];
	v122 = 0i64;
	v123 = 0;
	v124 = 0i64;
	v119 = a4 & 0x8003F;
	v126 = 0i64;
	v125 = 0i64;
	v127 = 0i64;
	if (v15)
	{
		for (i = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48i64); i; i = *(_QWORD*)(i + 24))
		{
			v79 = *(_DWORD**)(i + 8);
			if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v79 + 288i64))(v79) && v79 != (_DWORD*)v77)
			{
				if (!v79[19])
				{
					v80 = *(_QWORD*)a1;
					v81 = GetCurrentThreadId();
					if (*(_DWORD*)(v80 + 48) == v81)
					{
						++* (_QWORD*)(v80 + 56);
					}
					else
					{
						v82 = 0i64;
						while (_InterlockedCompareExchange64((volatile signed __int64*)(v80 + 56), 1i64, 0i64))
						{
							_mm_pause();
							if ((unsigned __int64)++v82 >= 0x400)
							{
								sub_14019FB60(v80 + 48, v81);
								goto LABEL_72;
							}
						}
						*(_DWORD*)(v80 + 48) = v81;
					}
				LABEL_72:
					v83 = *(_QWORD*)v79;
					v131[0] = -1;
					(*(void(__fastcall**)(_DWORD*, int*))(v83 + 32))(v79, v131);
					if (*(_QWORD*)(v80 + 56) <= 1ui64)
					{
						*(_DWORD*)(v80 + 48) = 0;
						_InterlockedExchange64((volatile __int64*)(v80 + 56), 0i64);
						if (*(_QWORD*)(v80 + 64))
						{
							if (!*(_QWORD*)(v80 + 72))
							{
								v84 = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v80 + 72), (signed __int64)v84, 0i64))
									CloseHandle(v84);
							}
							SetEvent(*(HANDLE*)(v80 + 72));
						}
					}
					else
					{
						--* (_QWORD*)(v80 + 56);
					}
					v77 = a5;
				}
				v85 = (float*)(*(__int64(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v79 + 80i64))(v79, 2i64);
				if (*a2 >= *v85 && *a2 <= v85[4] && v85[1] <= a2[1])
				{
					v86 = a2[2];
					if (v86 >= v85[2] && v86 <= v85[6])
						sub_140386040((__int64)v116, (void(__fastcall***)(_QWORD))v79);
				}
			}
		}
	}
	for (j = *(__int64**)(*(_QWORD*)a1 + 5256i64); j; j = (__int64*)j[129])
	{
		if ((*(unsigned int(__fastcall**)(__int64*))(*j + 288))(j) && j != (__int64*)v77)
		{
			if (j[146])
			{
				v88 = *(_QWORD*)a1;
				v89 = GetCurrentThreadId();
				if (*(_DWORD*)(v88 + 48) == v89)
				{
					++* (_QWORD*)(v88 + 56);
				}
				else
				{
					v90 = 0i64;
					while (_InterlockedCompareExchange64((volatile signed __int64*)(v88 + 56), 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v90 >= 0x400)
						{
							sub_14019FB60(v88 + 48, v89);
							goto LABEL_98;
						}
					}
					*(_DWORD*)(v88 + 48) = v89;
				}
			LABEL_98:
				v91 = *j;
				v132[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v91 + 32))(j, v132);
				if (*(_QWORD*)(v88 + 56) <= 1ui64)
				{
					*(_DWORD*)(v88 + 48) = 0;
					_InterlockedExchange64((volatile __int64*)(v88 + 56), 0i64);
					if (*(_QWORD*)(v88 + 64))
					{
						if (!*(_QWORD*)(v88 + 72))
						{
							v92 = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v88 + 72), (signed __int64)v92, 0i64))
								CloseHandle(v92);
						}
						SetEvent(*(HANDLE*)(v88 + 72));
					}
				}
				else
				{
					--* (_QWORD*)(v88 + 56);
				}
				v77 = a5;
			}
			v93 = (float*)(*(__int64(__fastcall**)(__int64*, __int64))(*j + 80))(j, 2i64);
			if (*a2 >= *v93 && *a2 <= v93[4] && v93[1] <= a2[1])
			{
				v94 = a2[2];
				if (v94 >= v93[2] && v94 <= v93[6])
					sub_140386040((__int64)v116, (void(__fastcall***)(_QWORD))j);
			}
		}
	}
	v95 = *(_QWORD*)(a1 + 24);
	if (*(_QWORD*)(v95 + 64))
	{
		v96 = *(_QWORD*)(v95 + 64);
		do
		{
			v97 = *(_QWORD**)(v96 + 8);
			if ((*(unsigned int(__fastcall**)(_QWORD*))(*v97 + 288i64))(v97) && v97 != (_QWORD*)v77)
			{
				if (v97[146])
				{
					v98 = *(_QWORD*)a1;
					v99 = GetCurrentThreadId();
					if (*(_DWORD*)(v98 + 48) == v99)
					{
						++* (_QWORD*)(v98 + 56);
					}
					else
					{
						v100 = 0i64;
						while (_InterlockedCompareExchange64((volatile signed __int64*)(v98 + 56), 1i64, 0i64))
						{
							_mm_pause();
							if ((unsigned __int64)++v100 >= 0x400)
							{
								sub_14019FB60(v98 + 48, v99);
								goto LABEL_125;
							}
						}
						*(_DWORD*)(v98 + 48) = v99;
					}
				LABEL_125:
					v101 = *v97;
					v130[0] = -1;
					(*(void(__fastcall**)(_QWORD*, int*))(v101 + 32))(v97, v130);
					if (*(_QWORD*)(v98 + 56) <= 1ui64)
					{
						*(_DWORD*)(v98 + 48) = 0;
						_InterlockedExchange64((volatile __int64*)(v98 + 56), 0i64);
						if (*(_QWORD*)(v98 + 64))
						{
							if (!*(_QWORD*)(v98 + 72))
							{
								v102 = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v98 + 72), (signed __int64)v102, 0i64))
									CloseHandle(v102);
							}
							SetEvent(*(HANDLE*)(v98 + 72));
						}
					}
					else
					{
						--* (_QWORD*)(v98 + 56);
					}
				}
				v103 = (float*)(*(__int64(__fastcall**)(_QWORD*, __int64))(*v97 + 80i64))(v97, 2i64);
				if (*a2 >= *v103 && *a2 <= v103[4] && v103[1] <= a2[1])
				{
					v104 = a2[2];
					if (v104 >= v103[2] && v104 <= v103[6])
					{
						(*(void(__fastcall**)(_QWORD*)) * v97)(v97);
						v105 = v126;
						v106 = sub_14018DB00((__int64)v125, v126 + 1, 8i64);
						v107 = v106;
						*(_QWORD*)&v106[2 * v105] = v97;
						if (v125 != v106)
						{
							sub_1407DB590(v106, v125, 8 * v126);
							if (v125)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v125 - 2) + 8i64))(v125 - 4);
							v125 = v107;
						}
						v126 = v105 + 1;
					}
				}
			}
			v96 = *(_QWORD*)(v96 + 24);
			v77 = a5;
		} while (v96);
		v9 = v181;
	}
	result = sub_1403860E0((__int64)v116);
	if (result)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 40i64))(result);
		v110 = v182;
		v109 = result;
		if ((v182 & 1) != 0)
			*(_DWORD*)(v9 + 32) = *(_DWORD*)(result + 32);
		if ((v110 & 2) != 0)
			*(_OWORD*)v9 = *(_OWORD*)result;
		if ((v110 & 4) != 0)
		{
			*(_DWORD*)(v9 + 36) = *(_DWORD*)(result + 36);
			*(_DWORD*)(v9 + 40) = *(_DWORD*)(result + 40);
			*(_DWORD*)(v9 + 44) = *(_DWORD*)(result + 44);
			result = *(unsigned int*)(result + 48);
			*(_DWORD*)(v9 + 48) = result;
		}
		if ((v110 & 8) != 0)
			*(_OWORD*)(v9 + 16) = *(_OWORD*)(v109 + 16);
		if ((v110 & 0x10) != 0)
		{
			result = *(unsigned int*)(v109 + 52);
			*(_DWORD*)(v9 + 52) = result;
		}
		if ((v110 & 0x20) != 0)
		{
			result = *(unsigned int*)(v109 + 56);
			*(_DWORD*)(v9 + 56) = result;
		}
		if ((v110 & 0x80000) != 0)
		{
			result = *(unsigned int*)(v109 + 60);
			*(_DWORD*)(v9 + 60) = result;
		}
	}
	else if (v14 >= 1.0)
	{
		result = v178;
		if ((v178 & 1) != 0)
			*(_DWORD*)(v9 + 32) = dword_140C7ACA4;
		if ((v178 & 2) != 0)
			*(_OWORD*)v9 = xmmword_140C77870;
		if ((v178 & 4) != 0)
		{
			*(_QWORD*)(v9 + 36) = 0i64;
			*(_QWORD*)(v9 + 44) = 0i64;
		}
		if ((v178 & 8) != 0)
		{
			*(_QWORD*)(v9 + 16) = 0i64;
			*(_QWORD*)(v9 + 24) = 0i64;
		}
		if ((v178 & 0x10) != 0)
			*(_DWORD*)(v9 + 52) = 1065353216;
		if ((v178 & 0x20) != 0)
			*(_DWORD*)(v9 + 56) = 0;
		if ((v178 & 0x80000) != 0)
			*(_DWORD*)(v9 + 60) = 0;
	}
	v111 = v126;
	if (v126)
	{
		do
		{
			result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)&v125[2 * v5] + 8i64))(
				*(_QWORD*)&v125[2 * v5],
				v109);
			++v5;
		} while (v5 < v111);
	}
	if (v127)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v127 + 8i64))(v127, v109);
	if (v125)
		return (*(__int64(__fastcall**)(int*, __int64))(*((_QWORD*)v125 - 2) + 8i64))(v125 - 4, v109);
	return result;
}
// 140386FAB: variable 'v109' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B3F0: using guessed type __int128 xmmword_140B7B3F0;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C44580: using guessed type int dword_140C44580;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C7ACA4: using guessed type int dword_140C7ACA4;
// 140386280: using guessed type int var_340[4];
// 140386280: using guessed type int var_360[4];
// 140386280: using guessed type int var_350[4];
// 140386280: using guessed type int var_370[4];

