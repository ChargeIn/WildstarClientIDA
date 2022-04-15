#include "../winhttp.h"

//----- (000000014031B080) ----------------------------------------------------
void __fastcall sub_14031B080(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __m128* a4)
{
	__int64* v5; // rcx
	__int64 v7; // rax
	__m128* v8; // r13
	__int64 v10; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm0
	__int32 v13; // xmm6_4
	__int64 v14; // rcx
	__m128 v15; // xmm1
	int v16; // ebx
	__m128 v17; // xmm2
	__m128 v18; // xmm0
	__m128 v19; // xmm1
	__int64 v20; // r9
	__m128 v21; // xmm1
	__int64 v22; // r10
	__int64 v23; // r11
	__int64 v24; // rax
	__m128 v25; // xmm4
	__m128 v26; // xmm3
	__m128 v27; // xmm5
	__m128 v28; // xmm1
	__int64 v29; // r8
	__m128 v30; // xmm1
	int** v31; // r15
	__int64 v32; // rbx
	__int64 v33; // rsi
	__int64 v34; // rdi
	__int64 v35; // rbx
	int* v36; // r8
	__int64 v37; // rax
	__int64 v38; // rbx
	__int64 v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rdx
	__int64 v42; // rbx
	int i; // edi
	__int64 j; // rbx
	float v45; // xmm0_4
	int v46; // eax
	int* v47; // r9
	int v48; // edx
	_DWORD* v49; // r8
	__m128 v50; // xmm6
	int v51; // ecx
	__int64 v52; // rax
	float v53; // xmm1_4
	int v54; // edx
	int v55; // r8d
	int v56; // eax
	float v57; // xmm0_4
	int v58; // eax
	int v59; // ecx
	int v60; // ecx
	int v61; // eax
	unsigned int v62; // edx
	unsigned int v63; // r15d
	unsigned int v64; // eax
	__int64 v65; // rax
	__m128 v66; // xmm1
	__m128 v67; // xmm0
	unsigned int v68; // r12d
	__m128 v69; // xmm9
	__m128 v70; // xmm0
	__m128* v71; // rax
	int v72; // eax
	int v73; // esi
	double v74; // xmm0_8
	__int64 v75; // rdi
	int v76; // xmm8_4
	__int64 v77; // rax
	__m128 v78; // xmm0
	__m128 v79; // xmm7
	__int64 v80; // rdi
	__m128 v81; // xmm1
	__m128 v82; // xmm0
	float v83; // xmm3_4
	float v84; // xmm2_4
	__m128 v85; // xmm3
	__m128 v86; // xmm1
	float v87; // xmm2_4
	__m128 v88; // xmm1
	__m128 v89; // xmm3
	__m128 v90; // xmm2
	int v91; // eax
	int v92; // eax
	int v93; // [rsp+50h] [rbp-B0h]
	__m128 v94; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v95; // [rsp+70h] [rbp-90h] BYREF
	__int64 v96; // [rsp+80h] [rbp-80h]
	__m128 v97; // [rsp+90h] [rbp-70h] BYREF
	__m128 v98; // [rsp+A0h] [rbp-60h]
	__m128 v99; // [rsp+B0h] [rbp-50h]
	__m128 v100; // [rsp+C0h] [rbp-40h]
	__int128 v101; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v102; // [rsp+E0h] [rbp-20h] BYREF
	__m128 v103[4]; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v104[4]; // [rsp+130h] [rbp+30h] BYREF
	__m128* v105; // [rsp+170h] [rbp+70h] BYREF
	__m128 v106; // [rsp+180h] [rbp+80h] BYREF
	__m128 v107; // [rsp+190h] [rbp+90h]
	__m128 v108; // [rsp+1A0h] [rbp+A0h]
	__m128 v109; // [rsp+1B0h] [rbp+B0h]
	__m128* v110[10]; // [rsp+1C0h] [rbp+C0h] BYREF
	char v111[32]; // [rsp+210h] [rbp+110h] BYREF
	int v112; // [rsp+230h] [rbp+130h]
	__int128 v113[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
	__int128 v114[4]; // [rsp+330h] [rbp+230h] BYREF

	v5 = *(__int64**)(a1 + 1080);
	v7 = *v5;
	v8 = (__m128*)a3;
	v95.m128_u64[0] = a3;
	v96 = a2;
	*(_BYTE*)(a1 + 1062) = (*(__int64(__fastcall**)(__int64*))(v7 + 56))(v5) & 1;
	v10 = *(_QWORD*)(a1 + 8);
	v11 = *(__m128*)(a2 + 48);
	v97 = *(__m128*)a2;
	v12 = *(__m128*)(a2 + 16);
	v100 = v11;
	v98 = v12;
	v99 = *(__m128*)(a2 + 32);
	if (*(_DWORD*)(v10 + 40))
	{
		v13 = 0;
		v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 488i64);
		if (v14)
		{
			v94 = _mm_add_ps(v11, (__m128)xmmword_140C77870);
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64, _QWORD))(*(_QWORD*)v14 + 440i64))(
				v14,
				&v94,
				v111,
				1i64,
				0i64))
			{
				v13 = v112;
			}
		}
		v100.m128_i32[1] = v13;
	}
	sub_14031A8B0(a1);
	sub_14032FE20((__m128*)a1, &v97, (__int64)v8, a4);
	v110[0] = &v97;
	sub_1401AFC20((__int64*)v110, (double*)v104[0].m128_u64);
	v15 = *(__m128*)(a1 + 880);
	v16 = 100;
	v17 = _mm_shuffle_ps(v15, v15, 85);
	v18 = _mm_shuffle_ps(v15, v15, 0);
	v19 = _mm_shuffle_ps(v15, v15, 170);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 1456i64) < 0x64u)
		v16 = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 1456i64);
	v20 = 0i64;
	v93 = v16;
	*(__m128*)(a1 + 960) = _mm_add_ps(
		_mm_add_ps(_mm_add_ps(_mm_mul_ps(v17, v98), _mm_mul_ps(v18, v97)), _mm_mul_ps(v19, v99)),
		v100);
	v21 = *(__m128*)(a1 + 720);
	for (*(__m128*)(a1 + 944) = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), a4[1]),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), *a4)),
		_mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), a4[2]));
		(unsigned int)v20 < *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 64i64) + 776i64);
		v20 = (unsigned int)(v20 + 1))
	{
		v22 = *(_QWORD*)(a1 + 40);
		v23 = *(_QWORD*)(*(_QWORD*)(v22 + 64) + 784i64);
		if (*(_WORD*)(v23 + 80 * v20 + 2))
		{
			if (*(_WORD*)(v23 + 80 * v20 + 2) == 1)
			{
				v24 = *(unsigned __int16*)(v23 + 80 * v20);
				v94.m128_u64[1] = (unsigned __int64)v8;
				v110[1] = v8;
				v94.m128_u64[0] = *(_QWORD*)(v22 + 824) + (v24 << 6);
				v110[0] = (__m128*)v94.m128_u64[0];
				sub_1401AFB10(v110, v103);
				v105 = v103;
				sub_1401AFC20((__int64*)&v105, (double*)v106.m128_u64);
				v25 = _mm_unpackhi_ps(v106, v107);
				v26 = _mm_unpackhi_ps(v108, v109);
				v27 = _mm_unpacklo_ps(v106, v107);
				v28 = _mm_unpacklo_ps(v108, v109);
				v103[0] = _mm_shuffle_ps(v27, v28, 68);
				v114[v29] = (__int128)_mm_shuffle_ps(v27, v28, 238);
				v103[2] = _mm_shuffle_ps(v25, v26, 68);
				v103[3] = _mm_shuffle_ps(v25, v26, 238);
			}
		}
		else
		{
			v30 = *(__m128*)(((unsigned __int64)*(unsigned __int16*)(v23 + 80 * v20) << 6) + *(_QWORD*)(v22 + 824) + 48);
			v113[(unsigned int)v20] = (__int128)_mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v8[1]),
						_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), *v8)),
					_mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), v8[2])),
				v8[3]);
		}
	}
	if (v16)
	{
		v31 = (int**)(a1 + 1104);
		v32 = *(_QWORD*)(a1 + 1104);
		if (v32)
		{
			do
			{
				sub_14031BCA0(a1, v32, v93, (__int64)v113, (__int64)v114);
				v32 = *(_QWORD*)(v32 + 120);
			} while (v32);
			v31 = (int**)(a1 + 1104);
		}
		v33 = *(_QWORD*)(a1 + 1096);
		if (v33)
		{
			v34 = 112 * v33;
			do
			{
				v34 -= 112i64;
				v35 = v34 + *(_QWORD*)(a1 + 1088);
				--v33;
				sub_14031BCA0(a1, v35, v93, (__int64)v113, (__int64)v114);
				if (*(int*)(v35 + 88) <= 0)
				{
					if (*(_QWORD*)(v35 + 80))
					{
						v36 = sub_14018B280(128i64, 0);
						if (v36)
						{
							*((_QWORD*)v36 + 14) = 0i64;
							*((_QWORD*)v36 + 15) = 0i64;
						}
						else
						{
							v36 = 0i64;
						}
						*(_OWORD*)v36 = *(_OWORD*)v35;
						*((_OWORD*)v36 + 1) = *(_OWORD*)(v35 + 16);
						*((_OWORD*)v36 + 2) = *(_OWORD*)(v35 + 32);
						*((_OWORD*)v36 + 3) = *(_OWORD*)(v35 + 48);
						*((_OWORD*)v36 + 4) = *(_OWORD*)(v35 + 64);
						*((_QWORD*)v36 + 10) = *(_QWORD*)(v35 + 80);
						v36[22] = *(_DWORD*)(v35 + 88);
						v36[23] = *(_DWORD*)(v35 + 92);
						v36[24] = *(_DWORD*)(v35 + 96);
						v36[25] = *(_DWORD*)(v35 + 100);
						v36[26] = *(_DWORD*)(v35 + 104);
						*((_BYTE*)v36 + 108) = *(_BYTE*)(v35 + 108);
						*((_WORD*)v36 + 55) = *(_WORD*)(v35 + 110);
						if (!*((_QWORD*)v36 + 14))
						{
							*((_QWORD*)v36 + 14) = v31;
							*((_QWORD*)v36 + 15) = *v31;
							*v31 = v36;
							v37 = *((_QWORD*)v36 + 15);
							if (v37)
								*(_QWORD*)(v37 + 112) = v36 + 30;
						}
						v38 = *(_QWORD*)(v35 + 80);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v38 + 1120i64))(v38, sub_14031A850);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 1112i64))(v38);
					}
					v39 = *(_QWORD*)(a1 + 1096);
					if (v33 != v39 - 1)
					{
						v40 = *(_QWORD*)(a1 + 1088);
						v41 = 112 * v39;
						*(_OWORD*)(v40 + v34) = *(_OWORD*)(v41 + v40 - 112);
						*(_OWORD*)(v40 + v34 + 16) = *(_OWORD*)(v41 + v40 - 96);
						*(_OWORD*)(v40 + v34 + 32) = *(_OWORD*)(v41 + v40 - 80);
						*(_OWORD*)(v40 + v34 + 48) = *(_OWORD*)(v41 + v40 - 64);
						*(_OWORD*)(v40 + v34 + 64) = *(_OWORD*)(v41 + v40 - 48);
						*(_QWORD*)(v40 + v34 + 80) = *(_QWORD*)(v41 + v40 - 32);
						*(_DWORD*)(v40 + v34 + 88) = *(_DWORD*)(v41 + v40 - 24);
						*(_DWORD*)(v40 + v34 + 92) = *(_DWORD*)(v41 + v40 - 20);
						*(_DWORD*)(v40 + v34 + 96) = *(_DWORD*)(v41 + v40 - 16);
						*(_DWORD*)(v40 + v34 + 100) = *(_DWORD*)(v41 + v40 - 12);
						*(_DWORD*)(v40 + v34 + 104) = *(_DWORD*)(v41 + v40 - 8);
						*(_BYTE*)(v40 + v34 + 108) = *(_BYTE*)(v41 + v40 - 4);
						*(_WORD*)(v40 + v34 + 110) = *(_WORD*)(v41 + v40 - 2);
					}
					sub_14031CD00((__int64*)(a1 + 1088), *(_QWORD*)(a1 + 1096) - 1i64);
				}
			} while (v33);
			v8 = (__m128*)v95.m128_u64[0];
		}
	}
	if (!(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)a1 + 72i64))(a1))
		goto LABEL_89;
	sub_14031AA90(a1);
	v42 = *(_QWORD*)(a1 + 392);
	for (i = *(_DWORD*)(a1 + 80); v42; v42 = *(_QWORD*)(v42 + 16))
		(**(void(__fastcall***)(__int64, _QWORD))v42)(v42, *(_QWORD*)(a1 + 48));
	if (!*(_DWORD*)(a1 + 80))
		goto LABEL_89;
	sub_14031AB20(a1);
	for (j = *(_QWORD*)(a1 + 1064); j; j = *(_QWORD*)(j + 16))
		(**(void(__fastcall***)(__int64, _QWORD))j)(j, *(_QWORD*)(a1 + 48));
	if (!i)
	{
		v45 = *(float*)(a1 + 1056);
		if (v45 <= 1.0)
			v45 = 1.0;
		*(float*)(a1 + 1056) = v45;
	}
	if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
		*(_QWORD*)(a1 + 56),
		*(unsigned int*)(a1 + 512),
		*(unsigned int*)(a1 + 528)) >= 1)
		v46 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
			*(_QWORD*)(a1 + 56),
			*(unsigned int*)(a1 + 512),
			*(unsigned int*)(a1 + 528));
	else
		v46 = 1;
	v47 = (int*)qword_140C63750;
	v48 = dword_140C42500;
	v49 = *(_DWORD**)(a1 + 40);
	v50 = 0i64;
	v51 = v49[364];
	if ((unsigned int)v51 > 0x64)
		v51 = 100;
	if (*(_DWORD*)qword_140C63750 < dword_140C42500)
		v48 = *(_DWORD*)qword_140C63750;
	v50.m128_f32[0] = (float)v51 / (float)v46;
	if (byte_140C42510[v48])
	{
		v52 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v49 + 248i64))(*(_QWORD*)(a1 + 40));
		v47 = (int*)qword_140C63750;
		v53 = *(float*)(v52 + 8);
		if (v53 > 0.0000099999997)
		{
			v54 = *(_DWORD*)qword_140C63750;
			v55 = dword_140C42540;
			v56 = dword_140C42540;
			v57 = *(float*)(a1 + 916) / v53;
			if (*(_DWORD*)qword_140C63750 < dword_140C42540)
				v56 = *(_DWORD*)qword_140C63750;
			if (v57 >= dword_140C42550[v56])
			{
				v58 = dword_140C425A0;
				if (v54 < dword_140C425A0)
					v58 = *(_DWORD*)qword_140C63750;
				if (v57 < dword_140C425B0[v58])
				{
					if (v54 < dword_140C42540)
						v55 = *(_DWORD*)qword_140C63750;
					v50.m128_f32[0] = v50.m128_f32[0] * (float)((float)(v57 - dword_140C42550[v55]) * *(float*)&dword_140C79E08);
				}
			}
			else
			{
				v50 = 0i64;
			}
		}
	}
	if (!*(_BYTE*)(a1 + 1062))
	{
		v59 = dword_140C42600;
		if (*v47 < dword_140C42600)
			v59 = *v47;
		v50.m128_f32[0] = v50.m128_f32[0] * *((float*)&xmmword_140C42610 + v59);
	}
	v50.m128_f32[0] = v50.m128_f32[0] + *(float*)(a1 + 1056);
	v60 = (int)v50.m128_f32[0];
	*(_DWORD*)(a1 + 1056) = v50.m128_i32[0];
	if ((int)v50.m128_f32[0] != 0x80000000 && (float)v60 != v50.m128_f32[0])
		v50.m128_f32[0] = (float)(v60 - (_mm_movemask_ps(_mm_unpacklo_ps(v50, v50)) & 1));
	v61 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 56) + 64i64))(
		*(_QWORD*)(a1 + 56),
		*(unsigned int*)(a1 + 480),
		*(unsigned int*)(a1 + 496),
		v47);
	v62 = *(_DWORD*)(a1 + 608);
	v63 = (int)v50.m128_f32[0] * v61;
	if (v62 > 0x400)
		v62 = 1024;
	*(float*)(a1 + 1056) = *(float*)(a1 + 1056) - v50.m128_f32[0];
	if (*(_QWORD*)(a1 + 1096) + (unsigned __int64)v63 > v62)
	{
		v64 = *(_DWORD*)(a1 + 1096);
		if (v62 <= v64)
			v63 = 0;
		else
			v63 = v62 - v64;
	}
	v65 = *(_QWORD*)(a1 + 416);
	if ((*(_BYTE*)(v65 + 10) & 1) != 0)
	{
		if (*(_WORD*)(v65 + 8) == 1)
		{
			*(float*)(a1 + 980) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
		}
		else if (*(_WORD*)(v65 + 8) == 5)
		{
			*(float*)(a1 + 980) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(float*)(a1 + 984) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
		}
	}
	v66 = v100;
	v67 = 0i64;
	v68 = 0;
	v67.m128_f32[0] = (float)(int)v63;
	v69 = _mm_div_ps(_mm_sub_ps(*(__m128*)(a1 + 928), v100), _mm_shuffle_ps(v67, v67, 0));
	if (v63)
	{
		do
		{
			v70 = 0i64;
			if (*(_DWORD*)(a1 + 912))
			{
				v70.m128_f32[0] = (float)(int)(v63 - v68 - 1);
				v71 = &v102;
				v102 = _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0), v69);
			}
			else
			{
				v101 = 0i64;
				v71 = (__m128*) & v101;
			}
			if ((unsigned int)sub_14032DA00(a1, v68, v63, &v94, &v95, &v97, v104, v8, v71))
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					*(unsigned int*)(a1 + 576),
					*(unsigned int*)(a1 + 592));
				v73 = v72;
				v74 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
				v75 = *(_QWORD*)(a1 + 1096);
				v76 = LODWORD(v74);
				sub_14031CD00((__int64*)(a1 + 1088), v75 + 1);
				v77 = v96;
				v78 = v95;
				v79 = 0i64;
				v80 = *(_QWORD*)(a1 + 1088) + 112 * v75;
				v79.m128_f32[0] = 3.0;
				*(__m128*)v80 = v94;
				*(__m128*)(v80 + 16) = v78;
				v81 = _mm_mul_ps(*(__m128*)v77, *(__m128*)v77);
				v82 = v79;
				v83 = (float)(v81.m128_f32[0] + _mm_shuffle_ps(v81, v81, 85).m128_f32[0])
					+ _mm_shuffle_ps(v81, v81, 170).m128_f32[0];
				v84 = fsqrt(v83);
				v82.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v83 * (float)(1.0 / v84)) * (float)(1.0 / v84))) * 0.5)
					* (float)(1.0 / v84),
					0.0);
				*(__m128*)(v80 + 32) = _mm_mul_ps(_mm_shuffle_ps(v82, v82, 0), *(__m128*)v77);
				v85 = *(__m128*)(v77 + 16);
				v86 = _mm_mul_ps(v85, v85);
				v87 = (float)(v86.m128_f32[0] + _mm_shuffle_ps(v86, v86, 85).m128_f32[0])
					+ _mm_shuffle_ps(v86, v86, 170).m128_f32[0];
				v88 = v79;
				v82.m128_f32[0] = fsqrt(v87);
				v88.m128_f32[0] = fmaxf(
					(float)((float)(3.0
						- (float)((float)(v87 * (float)(1.0 / v82.m128_f32[0]))
							* (float)(1.0 / v82.m128_f32[0])))
						* 0.5)
					* (float)(1.0 / v82.m128_f32[0]),
					0.0);
				*(__m128*)(v80 + 48) = _mm_mul_ps(_mm_shuffle_ps(v88, v88, 0), v85);
				v89 = *(__m128*)(v77 + 32);
				v90 = _mm_mul_ps(v89, v89);
				v90.m128_f32[0] = (float)(v90.m128_f32[0] + _mm_shuffle_ps(v90, v90, 85).m128_f32[0])
					+ _mm_shuffle_ps(v90, v90, 170).m128_f32[0];
				v82.m128_f32[0] = 1.0 / fsqrt(v90.m128_f32[0]);
				v79.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v90.m128_f32[0] * v82.m128_f32[0]) * v82.m128_f32[0]))
						* 0.5)
					* v82.m128_f32[0],
					0.0);
				*(__m128*)(v80 + 64) = _mm_mul_ps(_mm_shuffle_ps(v79, v79, 0), v89);
				*(_DWORD*)(v80 + 96) = v76;
				*(_QWORD*)(v80 + 80) = 0i64;
				*(_DWORD*)(v80 + 88) = v73;
				*(_DWORD*)(v80 + 92) = v73;
				*(_QWORD*)(v80 + 100) = 0i64;
				*(_BYTE*)(v80 + 108) = 1;
				*(_WORD*)(v80 + 110) = *(_WORD*)(a1 + 1060);
				v91 = *(_DWORD*)(a1 + 376);
				++* (_WORD*)(a1 + 1060);
				if (v91 != -1)
				{
					v92 = v91 - 1;
					*(_DWORD*)(a1 + 376) = v92;
					if (!v92)
						break;
				}
			}
			++v68;
		} while (v68 < v63);
	LABEL_89:
		v66 = v100;
	}
	*(_DWORD*)(a1 + 912) = 1;
	*(__m128*)(a1 + 928) = v66;
}
// 14031B302: variable 'v29' is possibly undefined
// 14031B36E: variable 'v20' is possibly undefined
// 14031BA46: variable 'v72' is possibly undefined
// 140C42500: using guessed type int dword_140C42500;
// 140C42510: using guessed type _BYTE byte_140C42510[32];
// 140C42540: using guessed type int dword_140C42540;
// 140C42550: using guessed type float dword_140C42550[12];
// 140C425A0: using guessed type int dword_140C425A0;
// 140C425B0: using guessed type float dword_140C425B0[12];
// 140C42600: using guessed type int dword_140C42600;
// 140C42610: using guessed type __int128 xmmword_140C42610;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C79E08: using guessed type int dword_140C79E08;
// 14031B080: using guessed type char var_210[32];
// 14031B080: using guessed type __m128 var_2F0[4];
// 14031B080: using guessed type __int128 var_F0[4];
// 14031B080: using guessed type __int128 var_130[4];

