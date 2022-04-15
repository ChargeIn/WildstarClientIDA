#include "../winhttp.h"

//----- (00000001406AE730) ----------------------------------------------------
__int64 __fastcall sub_1406AE730(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 result; // rax
	__int64 v8; // r14
	__int64 v9; // r13
	__int64 v10; // rax
	__int64 v11; // rcx
	__m128 v12; // xmm1
	__m128* v13; // rax
	__m128 v14; // xmm2
	__m128 v15; // xmm0
	__m128 v16; // xmm2
	float v17; // xmm12_4
	float v18; // xmm11_4
	float v19; // xmm6_4
	__int64 v20; // rcx
	BOOL v21; // r12d
	int v22; // r15d
	_DWORD* v23; // rcx
	int v24; // edx
	__m128 v25; // xmm8
	__m128 v26; // xmm10
	__m128 v27; // xmm1
	float v28; // xmm2_4
	float v29; // xmm0_4
	__m128 v30; // xmm10
	__m128 v31; // xmm1
	__m128 v32; // xmm6
	__m128 v33; // xmm5
	__m128 v34; // xmm4
	float v35; // xmm2_4
	float v36; // xmm0_4
	__m128 v37; // xmm5
	__m128 v38; // xmm1
	float v39; // xmm2_4
	__m128 v40; // xmm1
	float v41; // xmm0_4
	float v42; // xmm2_4
	float v43; // xmm0_4
	__m128 v44; // xmm4
	__m128 v45; // xmm8
	__m128 v46; // xmm6
	float v47; // xmm7_4
	__int64 v48; // rbx
	__int64 v49; // rax
	int v50; // r14d
	_QWORD* v51; // rax
	__int64 v52; // rdx
	int v53; // r10d
	_QWORD* v54; // rax
	__int64 v55; // r10
	__int64 v56; // rdx
	int v57; // r11d
	_QWORD* v58; // rax
	__int64 v59; // r10
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // rbx
	unsigned __int64 v62; // r8
	_DWORD* v63; // rcx
	__int64* v64; // rax
	_QWORD* v65; // rax
	__int64 v66; // r10
	unsigned __int64* v67; // rdx
	unsigned __int64 v68; // r8
	BOOL* v69; // rcx
	__int64* v70; // rax
	float v71; // xmm6_4
	_QWORD* v72; // rax
	__int64 v73; // r10
	unsigned __int64* v74; // rdx
	unsigned __int64 v75; // r8
	__int64 v76; // rax
	__int64* v77; // rax
	float v78; // xmm6_4
	_QWORD* v79; // rax
	__int64 v80; // r10
	unsigned __int64* v81; // rdx
	unsigned __int64 v82; // r8
	__int64 v83; // rax
	__int64* v84; // rax
	_QWORD* v85; // rax
	__int64 v86; // r10
	unsigned __int64* v87; // rdx
	unsigned __int64 v88; // r8
	__int64 v89; // rax
	__int64* v90; // rax
	_QWORD* v91; // rax
	__int64 v92; // r10
	unsigned __int64* v93; // rdx
	unsigned __int64 v94; // r8
	__int64 v95; // rax
	double v96; // xmm0_8
	__int64* v97; // rax
	_QWORD* v98; // rax
	__int64 v99; // r10
	unsigned __int64* v100; // rdx
	unsigned __int64 v101; // r8
	__int64 v102; // rax
	double v103; // xmm0_8
	__int64* v104; // rax
	_QWORD* v105; // rax
	__int64 v106; // r10
	unsigned __int64* v107; // rdx
	unsigned __int64 v108; // r8
	__int64 v109; // rax
	double v110; // xmm0_8
	__int64* v111; // rax
	float v112; // xmm7_4
	_QWORD* v113; // rax
	__int64 v114; // r10
	unsigned __int64* v115; // rdx
	unsigned __int64 v116; // r8
	__int64 v117; // rax
	__int64* v118; // rax
	float v119; // xmm7_4
	_QWORD* v120; // rax
	__int64 v121; // r10
	unsigned __int64* v122; // rdx
	unsigned __int64 v123; // r8
	__int64 v124; // rax
	__int64* v125; // rax
	float v126; // xmm6_4
	_QWORD* v127; // rax
	__int64 v128; // r10
	unsigned __int64* v129; // rdx
	__int64 v130; // rax
	__int64* v131; // rax
	__int64* v132; // rax
	__int64 v133; // rdx
	__int64 v134; // r10
	__m128* v135; // [rsp+20h] [rbp-E0h] BYREF
	double* v136; // [rsp+28h] [rbp-D8h]
	__m128 v137; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v138; // [rsp+40h] [rbp-C0h]
	__m128 v139; // [rsp+50h] [rbp-B0h]
	__m128 v140; // [rsp+60h] [rbp-A0h]
	__int128 v141; // [rsp+70h] [rbp-90h]
	int v142; // [rsp+80h] [rbp-80h]
	int v143; // [rsp+84h] [rbp-7Ch]
	double v144[8]; // [rsp+90h] [rbp-70h] BYREF
	__m256 v145; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v146; // [rsp+100h] [rbp+0h]
	__m256 v147[2]; // [rsp+110h] [rbp+10h] BYREF
	__m128* v148[10]; // [rsp+150h] [rbp+50h] BYREF
	__m128* v149[10]; // [rsp+1A0h] [rbp+A0h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			(v6 = v5) != 0))
	{
		result = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		v8 = result;
		if (result)
		{
			v9 = sub_140203DA0(*(_DWORD*)(v6 + 96));
			if (v9)
			{
				v10 = (*(__int64(__fastcall**)(__int64, __m256*, __int64))(*(_QWORD*)v6 + 128i64))(v6, &v145, 1i64);
				v11 = *(_QWORD*)(qword_140C65898 + 29096);
				v12 = *(__m128*)(v10 + 48);
				if (!v11)
					v11 = *(_QWORD*)(qword_140C65898 + 29088);
				v13 = *(__m128**)(qword_140C65898 + 29096);
				if (!v13)
					v13 = *(__m128**)(qword_140C65898 + 29088);
				v14 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v13[23]),
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v13[22])),
						_mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), v13[24])),
					v13[25]);
				v15 = _mm_and_ps(_mm_shuffle_ps(v14, v14, 255), (__m128)xmmword_140B7B500);
				v16 = _mm_div_ps(v14, _mm_shuffle_ps(v15, v15, 0));
				v17 = (float)((float)((float)(v16.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v11 + 488))
					+ (float)*(int*)(v11 + 480);
				v18 = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] * 0.5)) * (float)*(int*)(v11 + 492))
					+ (float)*(int*)(v11 + 484);
				v19 = (float)((float)(*(float*)(v11 + 500) - *(float*)(v11 + 496)) * _mm_shuffle_ps(v16, v16, 170).m128_f32[0])
					+ *(float*)(v11 + 496);
				sub_14034BDD0(v11, *(_DWORD*)(v9 + 12));
				v20 = *(_QWORD*)(v6 + 288);
				if (v20)
					v21 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v20 + 264i64))(v20, 0i64, 1i64) != 1;
				else
					v21 = 0;
				v22 = 1;
				v23 = *(_DWORD**)(qword_140C65898 + 29096);
				if (!v23)
					v23 = *(_DWORD**)(qword_140C65898 + 29088);
				v24 = v23[122];
				LODWORD(v141) = v23[120];
				*(_QWORD*)((char*)&v141 + 4) = __PAIR64__(v24, v23[121]);
				HIDWORD(v141) = v23[123];
				v142 = v23[124];
				v143 = v23[125];
				if (v17 <= 0.0 || v17 >= (float)v24)
					v22 = 0;
				if (v18 <= 0.0 || v18 >= (float)SHIDWORD(v141))
					v22 = 0;
				if (v19 <= 0.0)
					v22 = 0;
				v148[0] = (__m128*)sub_1405B0600(v8, &v145);
				sub_1401AFC20((__int64*)v148, v144);
				v135 = (__m128*)(*(__int64(__fastcall**)(__int64, __m256*, _QWORD))(*(_QWORD*)v6 + 144i64))(v6, v147, 0i64);
				v136 = v144;
				v149[0] = v135;
				v149[1] = (__m128*)v144;
				sub_1401AFB10(v149, &v137);
				v148[0] = (__m128*)sub_1405B0600(v8, v147);
				sub_1401AFC20((__int64*)v148, v144);
				v135 = (__m128*)(*(__int64(__fastcall**)(__int64, __m128**, __int64))(*(_QWORD*)v6 + 144i64))(
					v6,
					v149,
					1i64);
				v136 = v144;
				v148[0] = v135;
				v148[1] = (__m128*)v144;
				sub_1401AFB10(v148, (__m128*) & v145);
				v25 = (__m128)0x40400000u;
				v140.m128_u64[0] = 0i64;
				v141 = v146;
				v26 = (__m128)0x40400000u;
				v140.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
				v27 = _mm_mul_ps(v140, v140);
				v28 = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
					+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
				v29 = fsqrt(v28);
				v26.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v28 * (float)(1.0 / v29)) * (float)(1.0 / v29))) * 0.5)
					* (float)(1.0 / v29),
					0.0);
				v30 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v140);
				v31 = _mm_mul_ps(v139, v139);
				v32 = v137;
				v33 = (__m128)0x40400000u;
				v34 = (__m128)0x40400000u;
				v35 = (float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
					+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
				v36 = fsqrt(v35);
				v33.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v35 * (float)(1.0 / v36)) * (float)(1.0 / v36))) * 0.5)
					* (float)(1.0 / v36),
					0.0);
				v37 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v139);
				v38 = _mm_mul_ps(v138, v138);
				v39 = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
					+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
				v40 = _mm_mul_ps(v137, v137);
				v41 = 1.0 / fsqrt(v39);
				v34.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v39 * v41) * v41)) * 0.5) * v41, 0.0);
				v42 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
					+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
				v43 = fsqrt(v42);
				v44 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v138);
				v25.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v42 * (float)(1.0 / v43)) * (float)(1.0 / v43))) * 0.5)
					* (float)(1.0 / v43),
					0.0);
				v45 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v137);
				v137 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v45, _mm_shuffle_ps(v45, v45, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v45, v45, 85), (__m128)0i64));
				v138 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v44, _mm_shuffle_ps(v44, v44, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v44, v44, 85), (__m128)0i64));
				v139 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v37, _mm_shuffle_ps(v37, v37, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v37, v37, 85), (__m128)0i64));
				v140 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v30, _mm_shuffle_ps(v30, v30, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v30, v30, 85), (__m128)0x3F800000u));
				sub_1401B2ED0((__int64)&v135, v137.m128_f32);
				v46 = _mm_mul_ps(v32, v32);
				v47 = fsqrt(
					(float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0])
					+ _mm_shuffle_ps(v46, v46, 170).m128_f32[0]);
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v48 = a1[2];
				v49 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v48 + 8) = 5;
				*(_QWORD*)v48 = v49;
				a1[2] += 16i64;
				v50 = sub_1400578C0((__int64)a1);
				v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				v52 = a1[2];
				*(_QWORD*)v52 = *v51;
				*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v52, L"nScreenPosX", v53);
				a1[2] -= 16i64;
				v54 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v55 = *v54;
				*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v56, L"nScreenPosY", v57);
				a1[2] -= 16i64;
				v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v59 = *v58;
				*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
				a1[2] += 16i64;
				v60 = (unsigned __int64*)sub_14018F0E0(&v137, L"bOnScreen")[1];
				v61 = -1i64;
				if (v60)
				{
					v62 = -1i64;
					do
						++v62;
					while (*((_BYTE*)v60 + v62));
					sub_140058710((__int64)a1, v60, v62);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v63 = (_DWORD*)a1[2];
				v63[2] = 1;
				*v63 = v22 != 0;
				a1[2] += 16i64;
				v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v66 = *v65;
				*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
				a1[2] += 16i64;
				v67 = (unsigned __int64*)sub_14018F0E0(&v137, L"bWasDrawn")[1];
				if (v67)
				{
					v68 = -1i64;
					do
						++v68;
					while (*((_BYTE*)v67 + v68));
					sub_140058710((__int64)a1, v67, v68);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v69 = (BOOL*)a1[2];
				v69[2] = 1;
				*v69 = v21;
				a1[2] += 16i64;
				v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v71 = *(float*)(v9 + 64);
				v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v73 = *v72;
				*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
				a1[2] += 16i64;
				v74 = (unsigned __int64*)sub_14018F0E0(&v137, L"fScaleMin")[1];
				if (v74)
				{
					v75 = -1i64;
					do
						++v75;
					while (*((_BYTE*)v74 + v75));
					sub_140058710((__int64)a1, v74, v75);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v76 = a1[2];
				*(_DWORD*)(v76 + 8) = 3;
				*(double*)v76 = v71;
				a1[2] += 16i64;
				v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v78 = *(float*)(v9 + 68);
				v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v80 = *v79;
				*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
				a1[2] += 16i64;
				v81 = (unsigned __int64*)sub_14018F0E0(&v137, L"fScaleMax")[1];
				if (v81)
				{
					v82 = -1i64;
					do
						++v82;
					while (*((_BYTE*)v81 + v82));
					sub_140058710((__int64)a1, v81, v82);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v83 = a1[2];
				*(_DWORD*)(v83 + 8) = 3;
				*(double*)v83 = v78;
				a1[2] += 16i64;
				v84 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v84, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v85 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v86 = *v85;
				*(_DWORD*)(v86 + 8) = *((_DWORD*)v85 + 2);
				a1[2] += 16i64;
				v87 = (unsigned __int64*)sub_14018F0E0(&v137, L"fScaleCurrent")[1];
				if (v87)
				{
					v88 = -1i64;
					do
						++v88;
					while (*((_BYTE*)v87 + v88));
					sub_140058710((__int64)a1, v87, v88);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v89 = a1[2];
				*(_DWORD*)(v89 + 8) = 3;
				*(double*)v89 = v47;
				a1[2] += 16i64;
				v90 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v90, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v91 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v92 = *v91;
				*(_DWORD*)(v92 + 8) = *((_DWORD*)v91 + 2);
				a1[2] += 16i64;
				v93 = (unsigned __int64*)sub_14018F0E0(&v137, L"fWorldPosX")[1];
				if (v93)
				{
					v94 = -1i64;
					do
						++v94;
					while (*((_BYTE*)v93 + v94));
					sub_140058710((__int64)a1, v93, v94);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v95 = a1[2];
				v96 = *(float*)&v141;
				*(_DWORD*)(v95 + 8) = 3;
				*(double*)v95 = v96;
				a1[2] += 16i64;
				v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v98 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v99 = *v98;
				*(_DWORD*)(v99 + 8) = *((_DWORD*)v98 + 2);
				a1[2] += 16i64;
				v100 = (unsigned __int64*)sub_14018F0E0(&v137, L"fWorldPosY")[1];
				if (v100)
				{
					v101 = -1i64;
					do
						++v101;
					while (*((_BYTE*)v100 + v101));
					sub_140058710((__int64)a1, v100, v101);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v102 = a1[2];
				v103 = *((float*)&v141 + 1);
				*(_DWORD*)(v102 + 8) = 3;
				*(double*)v102 = v103;
				a1[2] += 16i64;
				v104 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v104, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v105 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v106 = *v105;
				*(_DWORD*)(v106 + 8) = *((_DWORD*)v105 + 2);
				a1[2] += 16i64;
				v107 = (unsigned __int64*)sub_14018F0E0(&v137, L"fWorldPosZ")[1];
				if (v107)
				{
					v108 = -1i64;
					do
						++v108;
					while (*((_BYTE*)v107 + v108));
					sub_140058710((__int64)a1, v107, v108);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v109 = a1[2];
				v110 = *((float*)&v141 + 2);
				*(_DWORD*)(v109 + 8) = 3;
				*(double*)v109 = v110;
				a1[2] += 16i64;
				v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v112 = (float)(180.0 / *(float*)&dword_140C3C018) * *((float*)&v135 + 1);
				v113 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v114 = *v113;
				*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
				a1[2] += 16i64;
				v115 = (unsigned __int64*)sub_14018F0E0(&v137, L"fPitch")[1];
				if (v115)
				{
					v116 = -1i64;
					do
						++v116;
					while (*((_BYTE*)v115 + v116));
					sub_140058710((__int64)a1, v115, v116);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v117 = a1[2];
				*(_DWORD*)(v117 + 8) = 3;
				*(double*)v117 = v112;
				a1[2] += 16i64;
				v118 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v118, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v119 = (float)(180.0 / *(float*)&dword_140C3C018) * *(float*)&v136;
				v120 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v121 = *v120;
				*(_DWORD*)(v121 + 8) = *((_DWORD*)v120 + 2);
				a1[2] += 16i64;
				v122 = (unsigned __int64*)sub_14018F0E0(&v137, L"fRoll")[1];
				if (v122)
				{
					v123 = -1i64;
					do
						++v123;
					while (*((_BYTE*)v122 + v123));
					sub_140058710((__int64)a1, v122, v123);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v124 = a1[2];
				*(_DWORD*)(v124 + 8) = 3;
				*(double*)v124 = v119;
				a1[2] += 16i64;
				v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v126 = (float)(180.0 / *(float*)&dword_140C3C018) * *(float*)&v135;
				v127 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				*(_QWORD*)v128 = *v127;
				*(_DWORD*)(v128 + 8) = *((_DWORD*)v127 + 2);
				a1[2] += 16i64;
				v129 = (unsigned __int64*)sub_14018F0E0(&v137, L"fYaw")[1];
				if (v129)
				{
					do
						++v61;
					while (*((_BYTE*)v129 + v61));
					sub_140058710((__int64)a1, v129, v61);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v137.m128_u64[1])
					sub_14018B900(v137.m128_i64[1], 0);
				v130 = a1[2];
				*(_DWORD*)(v130 + 8) = 3;
				*(double*)v130 = v126;
				a1[2] += 16i64;
				v131 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v131, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v132 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v50);
				v133 = *v132;
				*(_QWORD*)v134 = *v132;
				*(_DWORD*)(v134 + 8) = *((_DWORD*)v132 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v133, v50);
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406AE789: variable 'v3' is possibly undefined
// 1406AEE5B: variable 'v53' is possibly undefined
// 1406AEE8E: variable 'v55' is possibly undefined
// 1406AEEA0: variable 'v56' is possibly undefined
// 1406AEEA0: variable 'v57' is possibly undefined
// 1406AEECB: variable 'v59' is possibly undefined
// 1406AEF9B: variable 'v66' is possibly undefined
// 1406AF063: variable 'v73' is possibly undefined
// 1406AF12E: variable 'v80' is possibly undefined
// 1406AF1E9: variable 'v86' is possibly undefined
// 1406AF2A8: variable 'v92' is possibly undefined
// 1406AF36A: variable 'v99' is possibly undefined
// 1406AF42A: variable 'v106' is possibly undefined
// 1406AF503: variable 'v114' is possibly undefined
// 1406AF5CF: variable 'v121' is possibly undefined
// 1406AF698: variable 'v128' is possibly undefined
// 1406AF759: variable 'v134' is possibly undefined
// 140B36AE0: using guessed type wchar_t aFyaw[5];
// 140B36AF0: using guessed type wchar_t aFpitch[7];
// 140B36B00: using guessed type wchar_t aFroll[6];
// 140B36B10: using guessed type wchar_t aFworldposy[11];
// 140B36B28: using guessed type wchar_t aFworldposz[11];
// 140B36B40: using guessed type wchar_t aFscalecurrent[14];
// 140B36B60: using guessed type wchar_t aFworldposx[11];
// 140B36B78: using guessed type wchar_t aFscalemin[10];
// 140B36B90: using guessed type wchar_t aFscalemax[10];
// 140B36BA8: using guessed type wchar_t aBonscreen[10];
// 140B36BC0: using guessed type wchar_t aBwasdrawn[10];
// 140B36BD8: using guessed type wchar_t aNscreenposx[12];
// 140B36BF0: using guessed type wchar_t aNscreenposy[12];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3C018: using guessed type int dword_140C3C018;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1406AE730: using guessed type __m256 var_1D0;
// 1406AE730: using guessed type double var_210[8];
// 1406AE730: using guessed type __m256 var_190[2];

