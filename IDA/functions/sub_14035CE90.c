#include "../winhttp.h"

//----- (000000014035CE90) ----------------------------------------------------
__int64 __fastcall sub_14035CE90(__int64 a1)
{
	__int128 v2; // xmm8
	__int128 v3; // xmm11
	__int128 v4; // xmm7
	float v5; // eax
	__int128 v6; // xmm10
	__int128 v7; // xmm6
	__int128 v8; // xmm9
	__m128 v9; // xmm14
	__m128 v10; // xmm6
	__m128 v11; // xmm15
	unsigned int v12; // xmm0_4
	__m128 v13; // xmm13
	__m128 v14; // xmm9
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	float v17; // xmm0_4
	__m128 v18; // xmm9
	double v19; // xmm6_8
	float v20; // xmm10_4
	float v21; // xmm12_4
	__m128 v22; // xmm2
	float v23; // xmm0_4
	__m128 v24; // xmm13
	float v25; // xmm5_4
	float v26; // xmm7_4
	float v27; // xmm4_4
	unsigned int v28; // ebx
	__int32* v29; // rdi
	__int128 v30; // xmm1
	__int128 v31; // xmm0
	__int128 v32; // xmm1
	__m128 v33; // xmm5
	__m128 v34; // xmm4
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	__int64 v37; // r8
	__m128 v38; // xmm5
	__m128 v39; // xmm3
	__m128 v40; // xmm2
	__m128 v41; // xmm4
	__m128* v42; // rax
	__m128* v43; // r15
	__int64 v44; // rdx
	int* v45; // rbx
	__int128 v46; // xmm0
	__int128 v47; // xmm1
	int v48; // ecx
	int v49; // ecx
	int v50; // ecx
	double v51; // xmm0_8
	int v52; // ecx
	int v53; // ecx
	int v54; // ecx
	float v55; // xmm0_4
	int v56; // ecx
	int* v57; // rax
	__m128 v58; // xmm3
	unsigned int v59; // ebx
	__int64* v60; // rsi
	_OWORD* m128_f32; // rdi
	__m128 v62; // xmm4
	__int64 v63; // r8
	__int64 v64; // rax
	__int64 v65; // rdi
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64* v68; // rbx
	__int64* v69; // rbx
	__int64 v70; // rdi
	__m128 v72; // [rsp+48h] [rbp-C0h]
	__m128 v73; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v74; // [rsp+68h] [rbp-A0h]
	__m128 v75; // [rsp+78h] [rbp-90h]
	__m128 v76; // [rsp+88h] [rbp-80h]
	__int64 v77[6]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v78; // [rsp+C8h] [rbp-40h]
	__int128 v79; // [rsp+D8h] [rbp-30h]
	__int128 v80[3]; // [rsp+E8h] [rbp-20h] BYREF
	int v81; // [rsp+118h] [rbp+10h]
	__int64 v82; // [rsp+11Ch] [rbp+14h]
	int v83; // [rsp+124h] [rbp+1Ch]
	__m128 v84; // [rsp+128h] [rbp+20h] BYREF
	__m128 v85; // [rsp+138h] [rbp+30h]
	__m128 v86; // [rsp+148h] [rbp+40h]
	__m128 v87; // [rsp+158h] [rbp+50h]
	__int128 v88; // [rsp+168h] [rbp+60h] BYREF
	__int128 v89; // [rsp+178h] [rbp+70h]
	float v90; // [rsp+188h] [rbp+80h]
	__int128 v91; // [rsp+198h] [rbp+90h]
	__int128 v92; // [rsp+1A8h] [rbp+A0h]
	float v93; // [rsp+1B8h] [rbp+B0h]
	float v94; // [rsp+1C8h] [rbp+C0h]
	float v95; // [rsp+1CCh] [rbp+C4h]
	float v96; // [rsp+1D0h] [rbp+C8h]
	float v97; // [rsp+1D4h] [rbp+CCh]
	__int128 v98; // [rsp+1D8h] [rbp+D0h]
	float v99; // [rsp+1E8h] [rbp+E0h]
	__m128* v100; // [rsp+1F8h] [rbp+F0h] BYREF
	__int64 v101; // [rsp+200h] [rbp+F8h]
	float v102; // [rsp+208h] [rbp+100h]
	float v103; // [rsp+20Ch] [rbp+104h]
	float v104; // [rsp+210h] [rbp+108h]
	float v105; // [rsp+214h] [rbp+10Ch]
	float v106; // [rsp+218h] [rbp+110h]
	float v107; // [rsp+228h] [rbp+120h]
	float v108; // [rsp+22Ch] [rbp+124h]
	float v109; // [rsp+230h] [rbp+128h]
	float v110; // [rsp+234h] [rbp+12Ch]
	float v111; // [rsp+238h] [rbp+130h]
	float v112; // [rsp+23Ch] [rbp+134h]
	float v113; // [rsp+240h] [rbp+138h]
	float v114; // [rsp+244h] [rbp+13Ch]
	float v115; // [rsp+248h] [rbp+140h]
	float v116; // [rsp+258h] [rbp+150h]
	float v117; // [rsp+25Ch] [rbp+154h]
	float v118; // [rsp+260h] [rbp+158h]
	float v119; // [rsp+264h] [rbp+15Ch]
	float v120; // [rsp+268h] [rbp+160h]
	float v121; // [rsp+26Ch] [rbp+164h]
	float v122; // [rsp+270h] [rbp+168h]
	float v123; // [rsp+274h] [rbp+16Ch]
	float v124; // [rsp+278h] [rbp+170h]
	__m128* v125; // [rsp+288h] [rbp+180h] BYREF
	__int128* v126; // [rsp+290h] [rbp+188h]
	__m128 v127[9]; // [rsp+298h] [rbp+190h] BYREF
	char v128[80]; // [rsp+328h] [rbp+220h] BYREF
	__m128 v129; // [rsp+378h] [rbp+270h]
	__int128 v130; // [rsp+388h] [rbp+280h]
	__int128 v131; // [rsp+398h] [rbp+290h]
	char v132; // [rsp+3C0h] [rbp+2B8h] BYREF

	(*(void(__fastcall**)(__int64, __int64, char*, __int64, _QWORD))(*(_QWORD*)a1 + 440i64))(
		a1,
		a1 + 912,
		v128,
		3584i64,
		0i64);
	v2 = *(_OWORD*)(a1 + 2720);
	v3 = *(_OWORD*)(a1 + 2736);
	v4 = *(_OWORD*)(a1 + 2768);
	v90 = *(float*)(a1 + 2752);
	v5 = *(float*)(a1 + 2800);
	v88 = v2;
	v89 = v3;
	v91 = v4;
	v93 = v5;
	v6 = *(_OWORD*)(a1 + 2784);
	v7 = *(_OWORD*)(a1 + 2816);
	v8 = *(_OWORD*)(a1 + 2832);
	v99 = *(float*)(a1 + 2848);
	v92 = v6;
	v98 = v8;
	v72.m128_u64[0] = a1 + 2864;
	v72.m128_u64[1] = a1 + 2896;
	v125 = (__m128*)(a1 + 2864);
	v126 = (__int128*)(a1 + 2896);
	sub_1401AF0B0((__int64)&v125, (float*)&v100);
	*((float*)&v88 + 1) = *((float*)&v2 + 1) + *((float*)&v100 + 1);
	*((float*)&v91 + 1) = *((float*)&v4 + 1) + v108;
	*(float*)&v88 = *(float*)&v2 + *(float*)&v100;
	v95 = *((float*)&v7 + 1) + v117;
	*((float*)&v88 + 2) = *((float*)&v2 + 2) + *(float*)&v101;
	*(float*)&v91 = *(float*)&v4 + v107;
	*((float*)&v91 + 2) = *((float*)&v4 + 2) + v109;
	v96 = *((float*)&v7 + 2) + v118;
	*((float*)&v88 + 3) = *((float*)&v2 + 3) + *((float*)&v101 + 1);
	v94 = *(float*)&v7 + v116;
	*((float*)&v91 + 3) = *((float*)&v4 + 3) + v110;
	v97 = *((float*)&v7 + 3) + v119;
	*(float*)&v89 = *(float*)&v3 + v102;
	*(float*)&v92 = *(float*)&v6 + v111;
	*(float*)&v98 = *(float*)&v8 + v120;
	v9 = *(__m128*)(a1 + 2896);
	v10 = 0i64;
	v11 = (__m128)0x3F800000u;
	*((float*)&v89 + 1) = *((float*)&v3 + 1) + v103;
	*((float*)&v92 + 1) = *((float*)&v6 + 1) + v112;
	*((float*)&v98 + 1) = *((float*)&v8 + 1) + v121;
	*((float*)&v89 + 2) = *((float*)&v3 + 2) + v104;
	*((float*)&v92 + 2) = *((float*)&v6 + 2) + v113;
	*((float*)&v98 + 2) = *((float*)&v8 + 2) + v122;
	*((float*)&v89 + 3) = *((float*)&v3 + 3) + v105;
	*((float*)&v92 + 3) = *((float*)&v6 + 3) + v114;
	*((float*)&v98 + 3) = *((float*)&v8 + 3) + v123;
	v90 = v90 + v106;
	v93 = v93 + v115;
	v12 = *(_DWORD*)(a1 + 2864);
	v99 = v99 + v124;
	*(_QWORD*)&v78 = __PAIR64__(*(_DWORD*)(a1 + 2868), v12);
	*((_QWORD*)&v78 + 1) = __PAIR64__(*(_DWORD*)(a1 + 3412), *(_DWORD*)(a1 + 2872));
	*(_QWORD*)&v79 = *(_QWORD*)(a1 + 2880);
	*((_QWORD*)&v79 + 1) = __PAIR64__(*(_DWORD*)(a1 + 3408), *(_DWORD*)(a1 + 2888));
	v73 = *(__m128*)ymmword_140C78390.m256_f32;
	v75 = (__m128)xmmword_140C783B0;
	v74 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v76 = (__m128)xmmword_140C783C0;
	if (v9.m128_f32[0] != 0.0 || _mm_shuffle_ps(v9, v9, 170).m128_f32[0] != 0.0)
	{
		v13 = (__m128)0x40400000u;
		v14 = (__m128)0x40400000u;
		v15 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210),
				_mm_shuffle_ps(v9, v9, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201),
				_mm_shuffle_ps(v9, v9, 210)));
		v16 = _mm_mul_ps(v15, v15);
		v16.m128_f32[0] = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
		v17 = 1.0 / fsqrt(v16.m128_f32[0]);
		v14.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v16.m128_f32[0] * v17) * v17)) * 0.5) * v17, 0.0);
		v18 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v15);
		*(_QWORD*)&v19 = sub_1408FCCB0(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]).m128_u64[0] ^ 0x8000000080000000ui64;
		v102 = *(float*)&v19;
		v20 = sub_1408FE3D0(v19);
		v21 = sub_1408FC950(v19);
		v22 = _mm_mul_ps(v18, v18);
		v15.m128_f32[0] = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
			+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
		v23 = fsqrt(v15.m128_f32[0]);
		v13.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v15.m128_f32[0] * (float)(1.0 / v23)) * (float)(1.0 / v23)))
				* 0.5)
			* (float)(1.0 / v23),
			0.0);
		v24 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v18);
		v25 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
		v26 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
		v15.m128_f32[0] = (float)(v25 * v24.m128_f32[0]) * (float)(1.0 - v21);
		*(float*)&v19 = (float)(v26 * v25) * (float)(1.0 - v21);
		v27 = (float)(v26 * v24.m128_f32[0]) * (float)(1.0 - v21);
		v73.m128_f32[0] = (float)((float)(v24.m128_f32[0] * v24.m128_f32[0]) * (float)(1.0 - v21)) + v21;
		v24.m128_f32[0] = v24.m128_f32[0] * v20;
		v73.m128_i32[3] = 0;
		v75.m128_i32[3] = 0;
		v74.m128_f32[1] = (float)((float)(v25 * v25) * (float)(1.0 - v21)) + v21;
		v73.m128_f32[1] = (float)(v26 * v20) + v15.m128_f32[0];
		v74.m128_f32[0] = v15.m128_f32[0] - (float)(v26 * v20);
		v75.m128_f32[2] = (float)((float)(v26 * v26) * (float)(1.0 - v21)) + v21;
		v73.m128_f32[2] = v27 - (float)(v25 * v20);
		v75.m128_f32[0] = v27 + (float)(v25 * v20);
		v74.m128_u64[1] = COERCE_UNSIGNED_INT(*(float*)&v19 + v24.m128_f32[0]);
		v75.m128_f32[1] = *(float*)&v19 - v24.m128_f32[0];
		v10 = 0i64;
		v76 = (__m128)xmmword_140B7AD00;
	}
	v28 = 0;
	v29 = (__int32*)&v132;
	memset(v77, 0, 32);
	while ((int)sub_140354AA0(a1, *v29, (__m128**) & v77[v28]) >= 0)
	{
		++v28;
		++v29;
		if (v28 >= 4)
		{
			if ((*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
				qword_140C65670,
				192i64,
				0i64,
				0i64,
				0))
			{
				v30 = *(_OWORD*)(a1 + 976);
				v80[0] = *(_OWORD*)(a1 + 960);
				v31 = *(_OWORD*)(a1 + 992);
				v80[1] = v30;
				v32 = *(_OWORD*)(a1 + 1008);
				v80[2] = v31;
				v125 = &v73;
				v83 = HIDWORD(v32);
				v82 = 0i64;
				v81 = 0;
				v126 = v80;
				sub_1401AFB10(&v125, v127);
				v72.m128_u64[0] = (unsigned __int64)v127;
				v100 = v127;
				v72.m128_u64[1] = a1 + 1280;
				v101 = a1 + 1280;
				sub_1401AFB10(&v100, &v84);
				v33 = _mm_unpackhi_ps(v84, v85);
				v34 = _mm_unpackhi_ps(v86, v87);
				v35 = _mm_unpacklo_ps(v84, v85);
				v36 = _mm_unpacklo_ps(v86, v87);
				*(__m128*)v37 = _mm_shuffle_ps(v35, v36, 68);
				*(__m128*)(v37 + 16) = _mm_shuffle_ps(v35, v36, 238);
				*(__m128*)(v37 + 32) = _mm_shuffle_ps(v33, v34, 68);
				*(__m128*)(v37 + 48) = _mm_shuffle_ps(v33, v34, 238);
				v38 = _mm_unpackhi_ps(v73, v74);
				v39 = _mm_unpacklo_ps(v73, v74);
				v40 = _mm_unpacklo_ps(v75, v76);
				v41 = _mm_unpackhi_ps(v75, v76);
				*(__m128*)(v37 + 64) = _mm_shuffle_ps(v39, v40, 68);
				*(__m128*)(v37 + 80) = _mm_shuffle_ps(v39, v40, 238);
				*(__m128*)(v37 + 96) = _mm_shuffle_ps(v38, v41, 68);
				*(__m128*)(v37 + 112) = _mm_shuffle_ps(v38, v41, 238);
				*(_OWORD*)(v37 + 128) = 0i64;
				*(_OWORD*)(v37 + 144) = *(_OWORD*)(a1 + 912);
				*(_OWORD*)(v37 + 160) = v130;
				*(_OWORD*)(v37 + 176) = v131;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
			v42 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
				+ 272i64))(
					qword_140C65670,
					400i64,
					0i64,
					0i64,
					0);
			v43 = v42;
			if (v42)
			{
				sub_140262D50((float*)&v88, v42);
				v45 = (int*)qword_140C63750;
				v46 = v78;
				v47 = v79;
				*(__m128*)(v44 + 112) = v9;
				*(_OWORD*)(v44 + 128) = v46;
				*(_OWORD*)(v44 + 144) = v47;
				*(_DWORD*)(v44 + 160) = 1065353216;
				v48 = dword_140C43F70;
				if (*v45 < dword_140C43F70)
					v48 = *v45;
				*(_DWORD*)(v44 + 164) = dword_140C43F80[v48];
				v49 = dword_140C43FD0;
				if (*v45 < dword_140C43FD0)
					v49 = *v45;
				*(_DWORD*)(v44 + 168) = dword_140C43FE0[v49];
				v50 = dword_140C44030;
				if (*v45 < dword_140C44030)
					v50 = *v45;
				*(_QWORD*)&v51 = (unsigned int)dword_140C44040[v50];
				*(float*)&v51 = *(float*)&v51 * 3.1415927;
				*(float*)&v51 = sub_1408FC950(v51);
				v43[10].m128_i32[3] = LODWORD(v51);
				v43[11].m128_f32[0] = 1.0 / (float)(1.0 - *(float*)&v51);
				v52 = dword_140C44090;
				if (*v45 < dword_140C44090)
					v52 = *v45;
				v43[11].m128_i32[1] = dword_140C440A0[v52];
				v53 = dword_140C440F0;
				if (*v45 < dword_140C440F0)
					v53 = *v45;
				v43[11].m128_i32[2] = dword_140C44100[v53];
				v43[11].m128_i32[3] = *(_DWORD*)(a1 + 3476);
				v54 = dword_140C44150;
				if (*v45 < dword_140C44150)
					v54 = *v45;
				v43[12].m128_f32[0] = 1.0 / dword_140C44160[v54];
				v55 = sub_1408FC950(COERCE_DOUBLE(1061752795i64));
				v43[12].m128_f32[1] = v55;
				v43[12].m128_f32[2] = 1.0 / (float)(1.0 - v55);
				v56 = dword_140C441B0;
				if (*v45 < dword_140C441B0)
					v56 = *v45;
				v43[12].m128_i32[3] = dword_140C441C0[v56];
				v43[13].m128_i32[0] = *(_DWORD*)(a1 + 4288);
				v43[13].m128_i32[1] = 0;
				v57 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 560i64))(qword_140C65670);
				v58 = (__m128)0x3F800000u;
				v58.m128_f32[0] = 1.0 / (float)*v57;
				v59 = 0;
				v60 = v77;
				m128_f32 = (_OWORD*)v43[16].m128_f32;
				v11.m128_f32[0] = 1.0 / (float)v57[1];
				v62 = _mm_unpacklo_ps(_mm_unpacklo_ps(v58, v10), _mm_unpacklo_ps(v11, v10));
				v43[14].m128_u64[0] = v62.m128_u64[0];
				v72 = _mm_mul_ps(v62, (__m128)xmmword_140B7AC50);
				v43[14].m128_u64[1] = v72.m128_u64[0];
				v43[15] = v129;
				do
				{
					v63 = *v60;
					*m128_f32 = *(_OWORD*)(*v60 + 128);
					m128_f32[1] = *(_OWORD*)(v63 + 144);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						v59++,
						*(_QWORD*)(v63 + 88),
						0i64,
						0i64);
					m128_f32 += 2;
					++v60;
				} while (v59 < 4);
				v43[24] = *(__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			v64 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
			v65 = 4i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				4i64,
				*(_QWORD*)(v64 + 56),
				0i64,
				0i64);
			v66 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
			v67 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				5i64,
				*(_QWORD*)(v67 + 72),
				0i64,
				v66);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 400i64),
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 408i64),
				1i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
				qword_140C65670,
				0i64,
				2i64,
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 304i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 416i64),
				3i64,
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 432i64));
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int, unsigned __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 656i64))(
				qword_140C65670,
				3i64,
				0i64,
				*(unsigned int*)(*(_QWORD*)(a1 + 16) + 440i64),
				0,
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 424i64),
				0,
				1,
				v72.m128_u64[0],
				v72.m128_u64[1]);
			v68 = v77;
			do
			{
				if (*v68)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)*v68 + 8i64))(*v68);
					*v68 = 0i64;
				}
				++v68;
				--v65;
			} while (v65);
			return 0i64;
		}
	}
	v69 = v77;
	v70 = 4i64;
	do
	{
		if (*v69)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*v69 + 8i64))(*v69);
			*v69 = 0i64;
		}
		++v69;
		--v70;
	} while (v70);
	return 0i64;
}
// 14035D692: variable 'v37' is possibly undefined
// 14035D793: variable 'v44' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43F70: using guessed type int dword_140C43F70;
// 140C43F80: using guessed type int dword_140C43F80[14];
// 140C43FD0: using guessed type int dword_140C43FD0;
// 140C43FE0: using guessed type int dword_140C43FE0[14];
// 140C44030: using guessed type int dword_140C44030;
// 140C44040: using guessed type int dword_140C44040[14];
// 140C44090: using guessed type int dword_140C44090;
// 140C440A0: using guessed type int dword_140C440A0[14];
// 140C440F0: using guessed type int dword_140C440F0;
// 140C44100: using guessed type int dword_140C44100[14];
// 140C44150: using guessed type int dword_140C44150;
// 140C44160: using guessed type float dword_140C44160[14];
// 140C441B0: using guessed type int dword_140C441B0;
// 140C441C0: using guessed type int dword_140C441C0[17];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 14035CE90: using guessed type char var_1B0[80];
// 14035CE90: using guessed type __m128 var_240[9];

