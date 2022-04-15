#include "../winhttp.h"

//----- (000000014035DBE0) ----------------------------------------------------
__int64 __fastcall sub_14035DBE0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	int* v6; // rcx
	int v7; // edx
	int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // r8
	__m128 v11; // xmm4
	__m128 v12; // xmm1
	__m128 v13; // xmm9
	float v14; // xmm14_4
	__m128 v15; // xmm10
	float v16; // xmm0_4
	__m128 v17; // xmm8
	__m128 v18; // xmm4
	__m128 v19; // xmm7
	__m128 v20; // xmm1
	__m128 v21; // xmm5
	__m128 v22; // xmm4
	__m128 v23; // xmm5
	__m128 v24; // xmm4
	__m128 v25; // xmm11
	float v26; // xmm4_4
	int v27; // eax
	__m128 v28; // xmm8
	float v29; // xmm9_4
	__m128 v30; // xmm6
	__m128 v31; // xmm7
	float v32; // xmm3_4
	float v33; // xmm2_4
	int v34; // eax
	__m128 v35; // xmm6
	__m128 v36; // xmm7
	float v37; // xmm3_4
	float v38; // xmm2_4
	float v39; // xmm1_4
	int v40; // eax
	__m128 v41; // xmm6
	__m128 v42; // xmm7
	float v43; // xmm3_4
	float v44; // xmm2_4
	float v45; // xmm1_4
	__m128 v46; // xmm6
	__m128 v47; // xmm7
	float v48; // xmm3_4
	float v49; // xmm2_4
	float v50; // xmm0_4
	float* v51; // rax
	int v52; // ecx
	float v53; // xmm1_4
	__int64 v54; // rax
	__int64 v55; // r8
	__int64 v56; // r8
	__m128 v58; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v59; // [rsp+48h] [rbp-C0h]
	__m128 v60[2]; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v61; // [rsp+78h] [rbp-90h] BYREF
	__int128 v62; // [rsp+88h] [rbp-80h]
	int v63; // [rsp+98h] [rbp-70h] BYREF
	unsigned int v64; // [rsp+9Ch] [rbp-6Ch]
	int v65[2]; // [rsp+A0h] [rbp-68h] BYREF
	__m128 v66; // [rsp+A8h] [rbp-60h]
	__m128 v67; // [rsp+B8h] [rbp-50h]
	__m128 v68; // [rsp+C8h] [rbp-40h]
	__int128 v69; // [rsp+D8h] [rbp-30h]
	__m128 v70; // [rsp+E8h] [rbp-20h]
	__int128 v71; // [rsp+F8h] [rbp-10h]
	__m128 v72; // [rsp+108h] [rbp+0h]
	__m128 v73; // [rsp+118h] [rbp+10h]
	__m128 v74; // [rsp+128h] [rbp+20h]
	__int128 v75; // [rsp+138h] [rbp+30h]
	__m128 v76; // [rsp+148h] [rbp+40h]
	__int128 v77; // [rsp+158h] [rbp+50h]
	__m128 v78; // [rsp+168h] [rbp+60h]
	__m128 v79; // [rsp+178h] [rbp+70h]
	__m128 v80; // [rsp+188h] [rbp+80h]
	__m128 v81; // [rsp+198h] [rbp+90h]
	int v82; // [rsp+1A8h] [rbp+A0h] BYREF
	__int64 v83; // [rsp+1B0h] [rbp+A8h]
	int v84; // [rsp+1BCh] [rbp+B4h]
	int v85; // [rsp+1C0h] [rbp+B8h] BYREF
	__int64 v86; // [rsp+1C8h] [rbp+C0h]
	int v87; // [rsp+1D4h] [rbp+CCh]
	int v88; // [rsp+1D8h] [rbp+D0h] BYREF
	__int64 v89; // [rsp+1E0h] [rbp+D8h]
	int v90; // [rsp+1ECh] [rbp+E4h]
	int v91; // [rsp+1F0h] [rbp+E8h] BYREF
	__int64 v92; // [rsp+1F8h] [rbp+F0h]
	int v93; // [rsp+204h] [rbp+FCh]
	int v94; // [rsp+208h] [rbp+100h] BYREF
	__int64 v95; // [rsp+210h] [rbp+108h]
	int v96; // [rsp+21Ch] [rbp+114h]
	int v97; // [rsp+220h] [rbp+118h] BYREF
	__int64 v98; // [rsp+228h] [rbp+120h]
	int v99; // [rsp+234h] [rbp+12Ch]
	__int128 v100; // [rsp+238h] [rbp+130h] BYREF
	int* v101; // [rsp+248h] [rbp+140h]
	int* v102; // [rsp+250h] [rbp+148h]
	__int128 v103; // [rsp+268h] [rbp+160h]
	__int128 v104; // [rsp+278h] [rbp+170h]
	__m128 v105; // [rsp+288h] [rbp+180h]
	__m128 v106; // [rsp+298h] [rbp+190h]
	__int128 v107; // [rsp+2A8h] [rbp+1A0h]
	__m128 v108; // [rsp+2B8h] [rbp+1B0h]
	__m128 v109; // [rsp+2C8h] [rbp+1C0h]
	__m128 v110; // [rsp+2D8h] [rbp+1D0h]
	__m128 v111; // [rsp+2E8h] [rbp+1E0h]
	__m128 v112; // [rsp+2F8h] [rbp+1F0h]
	__m128 v113; // [rsp+308h] [rbp+200h]
	__m128 v114; // [rsp+318h] [rbp+210h]
	__m128 v115; // [rsp+328h] [rbp+220h]
	__int128 v116; // [rsp+338h] [rbp+230h]
	__int128 v117; // [rsp+348h] [rbp+240h]
	__int128 v118; // [rsp+358h] [rbp+250h]
	__m128 v119; // [rsp+368h] [rbp+260h]
	__m128 v120; // [rsp+378h] [rbp+270h]
	__m128 v121; // [rsp+388h] [rbp+280h]
	__m128 v122; // [rsp+398h] [rbp+290h]
	__m128 v123; // [rsp+3A8h] [rbp+2A0h]
	__int128 v124; // [rsp+3B8h] [rbp+2B0h]
	__m128 v125; // [rsp+3C8h] [rbp+2C0h]
	int v126; // [rsp+3D8h] [rbp+2D0h] BYREF
	int v127; // [rsp+3DCh] [rbp+2D4h]
	int v128; // [rsp+3E0h] [rbp+2D8h]
	int v129; // [rsp+3E4h] [rbp+2DCh]
	int v130; // [rsp+3E8h] [rbp+2E0h]
	int v131; // [rsp+3ECh] [rbp+2E4h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5544) + 48i64))(*(_QWORD*)(a1 + 5544)))
	{
		v2 = *(_QWORD*)(a1 + 5528);
		v85 = 1;
		v86 = v2;
		v3 = *(_QWORD*)(a1 + 5536);
		v87 = 0;
		v89 = v3;
		v4 = *(_QWORD*)(a1 + 5544);
		v88 = 1;
		v90 = 0;
		v97 = 1;
		v99 = 0;
		v98 = v4;
		(*(void(__fastcall**)(__int64, int*, int*, int*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v97,
			&v88,
			&v85,
			&unk_140C3FE88);
		v100 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v100);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	}
	v5 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v5)
	{
		v6 = (int*)qword_140C63750;
		*(_DWORD*)v5 = 1065353216;
		v7 = *v6;
		v8 = dword_140C44440;
		if (v7 < dword_140C44440)
			v8 = v7;
		*(float*)(v5 + 4) = dword_140C44450[v8] * -1.0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	v9 = *(_QWORD*)(a1 + 5528);
	v94 = 1;
	v95 = v9;
	v96 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v94,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 5544),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 480i64),
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v10,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		1i64,
		0i64);
	v130 = 0;
	v131 = 1065353216;
	v11 = (__m128) * (unsigned int*)(a1 + 912);
	v12 = (__m128) * (unsigned int*)(a1 + 920);
	v13 = (__m128)(unsigned int)dword_140C43FB8;
	v14 = *(float*)(a1 + 5504);
	v15 = (__m128)(unsigned int)dword_140C43FB8;
	v11.m128_f32[0] = v11.m128_f32[0] - (float)(v14 * 0.5);
	v12.m128_f32[0] = v12.m128_f32[0] - (float)(v14 * 0.5);
	v16 = *(float*)(a1 + 5520);
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0i64), _mm_unpacklo_ps(v12, (__m128)0i64));
	v18 = (__m128)LODWORD(v16);
	v105 = v17;
	v19 = _mm_shuffle_ps(v17, v17, 85);
	v15.m128_f32[0] = (float)(*(float*)&dword_140C43FB8 * v17.m128_f32[0]) + 0.5;
	v18.m128_f32[0] = v16 * v15.m128_f32[0];
	v13.m128_f32[0] = (float)(*(float*)&dword_140C43FB8 * v19.m128_f32[0]) + 0.5;
	v20 = v13;
	v20.m128_f32[0] = v13.m128_f32[0] * v16;
	v15.m128_f32[0] = v15.m128_f32[0] * 131072.0;
	v65[0] = 1;
	v13.m128_f32[0] = v13.m128_f32[0] * 131072.0;
	v65[1] = 1;
	v101 = &v63;
	v102 = v65;
	v21 = v18;
	v118 = xmmword_140B7AC50;
	v22 = (__m128) * (unsigned int*)(a1 + 5524);
	v104 = xmmword_140B7AC50;
	v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0i64), _mm_unpacklo_ps(v20, (__m128)0i64));
	v24 = _mm_shuffle_ps(v22, v22, 0);
	v63 = (int)v23.m128_f32[0];
	v109 = v23;
	v117 = xmmword_140B7AC50;
	v64 = (int)_mm_shuffle_ps(v23, v23, 85).m128_f32[0];
	v112 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v23.m128_f32[0] + 1), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v64 + 1), _mm_cvtsi32_si128(0))));
	v106 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v23.m128_f32[0]), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(0))));
	v122 = _mm_mul_ps(v112, v24);
	v108 = _mm_mul_ps(v106, v24);
	v114 = _mm_sub_ps(v122, (__m128)xmmword_140B7AC50);
	v111 = _mm_sub_ps(v108, (__m128)xmmword_140B7AC50);
	v25 = _mm_mul_ps(v111, (__m128)xmmword_140B7B4B0);
	v120 = _mm_mul_ps(v114, (__m128)xmmword_140B7B4B0);
	v60[1] = v120;
	v17.m128_f32[0] = v17.m128_f32[0] - v25.m128_f32[0];
	v113 = v25;
	v26 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
	v60[0] = v25;
	v19.m128_f32[0] = v19.m128_f32[0] - v26;
	v115 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v19, (__m128)0i64));
	v119 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, (__m128)0i64), _mm_unpacklo_ps(v13, (__m128)0i64));
	v27 = *(_DWORD*)(a1 + 5512);
	v121 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v119.m128_f32[0]), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128((int)_mm_shuffle_ps(v119, v119, 85).m128_f32[0]),
				_mm_cvtsi32_si128(0))));
	v123 = _mm_div_ps(v121, (__m128)xmmword_140B7B4D0);
	v125 = _mm_sub_ps(v123, (__m128)xmmword_140B7AC50);
	v28 = _mm_mul_ps(v125, (__m128)xmmword_140B7B4B0);
	v110 = v28;
	v29 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
	v66.m128_f32[0] = (float)(int)(float)((float)(v28.m128_f32[0] - v25.m128_f32[0]) * 2.0);
	v66.m128_f32[1] = (float)(int)(float)((float)(v29 - v26) * 2.0);
	v30 = v66;
	v67.m128_f32[0] = (float)v27;
	v67.m128_f32[1] = (float)v27;
	v31 = v67;
	if (v66.m128_f32[0] < (float)v27)
	{
		v32 = _mm_shuffle_ps(v66, v66, 85).m128_f32[0];
		v33 = _mm_shuffle_ps(v67, v67, 85).m128_f32[0];
		if (v32 < v33)
		{
			v68.m128_u64[0] = __PAIR64__(LODWORD(v29), v28.m128_u32[0]);
			v126 = (int)v66.m128_f32[0];
			*(float*)&v69 = v14 + v25.m128_f32[0];
			v61 = v68;
			v127 = (int)v32;
			*((float*)&v69 + 1) = v14 + v26;
			v62 = v69;
			v128 = (int)(float)(v67.m128_f32[0] - v66.m128_f32[0]);
			v129 = (int)(float)(v33 - v32);
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v126);
			v103 = xmmword_140B7AC50;
			v58 = _mm_sub_ps(v30, (__m128)xmmword_140B7AC50);
			v59 = _mm_sub_ps(v31, (__m128)xmmword_140B7AC50);
			sub_14035E960((_QWORD*)a1, &v61, (__int32*)&v58, v60);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			v26 = v60[0].m128_f32[1];
			v25.m128_i32[0] = v60[0].m128_i32[0];
		}
	}
	v34 = *(_DWORD*)(a1 + 5512);
	v72.m128_i32[0] = 0;
	v72.m128_f32[1] = (float)(int)(float)((float)(v29 - v26) * 2.0);
	v35 = v72;
	v73.m128_f32[1] = (float)v34;
	v73.m128_f32[0] = (float)(int)(float)((float)(v28.m128_f32[0] - v25.m128_f32[0]) * 2.0);
	v36 = v73;
	if (v73.m128_f32[0] > 0.0)
	{
		v37 = _mm_shuffle_ps(v72, v72, 85).m128_f32[0];
		v38 = _mm_shuffle_ps(v73, v73, 85).m128_f32[0];
		if (v37 < v38)
		{
			v39 = *(float*)(a1 + 5504);
			v126 = (int)v72.m128_f32[0];
			*(float*)&v77 = v28.m128_f32[0] + v39;
			v127 = (int)v37;
			v76.m128_f32[0] = v25.m128_f32[0] + v39;
			v76.m128_f32[1] = v29;
			v61 = v76;
			*((float*)&v77 + 1) = v26 + v39;
			v62 = v77;
			v128 = (int)(float)(v73.m128_f32[0] - v72.m128_f32[0]);
			v129 = (int)(float)(v38 - v37);
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v126);
			v116 = xmmword_140B7AC50;
			v58 = _mm_sub_ps(v35, (__m128)xmmword_140B7AC50);
			v59 = _mm_sub_ps(v36, (__m128)xmmword_140B7AC50);
			sub_14035E960((_QWORD*)a1, &v61, (__int32*)&v58, v60);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			v26 = v60[0].m128_f32[1];
			v25.m128_i32[0] = v60[0].m128_i32[0];
		}
	}
	v40 = *(_DWORD*)(a1 + 5512);
	v80.m128_i32[1] = 0;
	v80.m128_f32[0] = (float)(int)(float)((float)(v28.m128_f32[0] - v25.m128_f32[0]) * 2.0);
	v41 = v80;
	v81.m128_f32[0] = (float)v40;
	v81.m128_f32[1] = (float)(int)(float)((float)(v29 - v26) * 2.0);
	v42 = v81;
	if (v80.m128_f32[0] < (float)v40)
	{
		v43 = _mm_shuffle_ps(v80, v80, 85).m128_f32[0];
		v44 = _mm_shuffle_ps(v81, v81, 85).m128_f32[0];
		if (v43 < v44)
		{
			v45 = *(float*)(a1 + 5504);
			v126 = (int)v80.m128_f32[0];
			*((float*)&v71 + 1) = v29 + v45;
			v70.m128_f32[1] = v26 + v45;
			v127 = (int)v43;
			v70.m128_i32[0] = v28.m128_i32[0];
			v61 = v70;
			*(float*)&v71 = v25.m128_f32[0] + v45;
			v62 = v71;
			v128 = (int)(float)(v81.m128_f32[0] - v80.m128_f32[0]);
			v129 = (int)(float)(v44 - v43);
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v126);
			v107 = xmmword_140B7AC50;
			v58 = _mm_sub_ps(v41, (__m128)xmmword_140B7AC50);
			v59 = _mm_sub_ps(v42, (__m128)xmmword_140B7AC50);
			sub_14035E960((_QWORD*)a1, &v61, (__int32*)&v58, v60);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			v26 = v60[0].m128_f32[1];
			v25.m128_i32[0] = v60[0].m128_i32[0];
		}
	}
	v78.m128_u64[0] = 0i64;
	v46 = v78;
	v58 = v78;
	v79.m128_f32[0] = (float)(int)(float)((float)(v28.m128_f32[0] - v25.m128_f32[0]) * 2.0);
	v79.m128_f32[1] = (float)(int)(float)((float)(v29 - v26) * 2.0);
	v47 = v79;
	v59 = v79;
	if (v79.m128_f32[0] > 0.0)
	{
		v48 = _mm_shuffle_ps(v78, v78, 85).m128_f32[0];
		v49 = _mm_shuffle_ps(v79, v79, 85).m128_f32[0];
		if (v48 < v49)
		{
			v50 = *(float*)(a1 + 5504);
			v126 = (int)v78.m128_f32[0];
			v74.m128_f32[1] = v26 + v50;
			v127 = (int)v48;
			v74.m128_f32[0] = v25.m128_f32[0] + v50;
			*(float*)&v75 = v28.m128_f32[0] + v50;
			v61 = v74;
			*((float*)&v75 + 1) = v29 + v50;
			v62 = v75;
			v128 = (int)(float)(v79.m128_f32[0] - v78.m128_f32[0]);
			v129 = (int)(float)(v49 - v48);
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v126);
			v124 = xmmword_140B7AC50;
			v58 = _mm_sub_ps(v46, (__m128)xmmword_140B7AC50);
			v59 = _mm_sub_ps(v47, (__m128)xmmword_140B7AC50);
			sub_14035E960((_QWORD*)a1, &v61, (__int32*)&v58, v60);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		}
	}
	v51 = (float*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v51)
	{
		v52 = dword_140C444A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C444A0)
			v52 = *(_DWORD*)qword_140C63750;
		*v51 = 1.0 - dword_140C444B0[v52];
		v53 = *(float*)(a1 + 892);
		if (v53 >= 0.050000001)
			v53 = 0.050000001;
		v51[1] = v53;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	v54 = *(_QWORD*)(a1 + 5536);
	v91 = 1;
	v92 = v54;
	v93 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v91,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 5528),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 1i64, 4i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 480i64),
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v55,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v83 = *(_QWORD*)(a1 + 5544);
	v82 = 1;
	v84 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v82,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 5536),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 1i64, 4i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v56,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	return 0i64;
}
// 14035DEA5: variable 'v10' is possibly undefined
// 14035E815: variable 'v55' is possibly undefined
// 14035E8C5: variable 'v56' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B4D0: using guessed type __int128 xmmword_140B7B4D0;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44440: using guessed type int dword_140C44440;
// 140C44450: using guessed type float dword_140C44450[16];
// 140C444A0: using guessed type int dword_140C444A0;
// 140C444B0: using guessed type float dword_140C444B0[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

