#include "../winhttp.h"

//----- (00000001405D5190) ----------------------------------------------------
__int64 __fastcall sub_1405D5190(__int64 a1, __int64* a2, double a3, float a4)
{
	unsigned int v4; // esi
	int v7; // eax
	int v8; // eax
	float v9; // xmm0_4
	float v10; // xmm1_4
	__m128 v11; // xmm7
	__int128 v12; // xmm10
	__m128* v13; // rbx
	__m128* v14; // rsi
	__m128 v15; // xmm13
	__int64 v16; // r8
	float v17; // xmm2_4
	__int64 v18; // rdx
	__m128 v19; // xmm0
	float v20; // xmm1_4
	__m128 v21; // xmm0
	__m128i v22; // xmm1
	__m128i v23; // xmm3
	__m128 v24; // xmm4
	__m128 v25; // xmm5
	__m128 v26; // xmm3
	float v27; // xmm1_4
	__m128i v28; // xmm4
	__m128i v29; // xmm2
	__m128 v30; // xmm0
	unsigned int v31; // xmm12_4
	float v32; // xmm1_4
	float v33; // xmm5_4
	float v34; // xmm7_4
	float v35; // xmm9_4
	float v36; // xmm2_4
	float v37; // xmm3_4
	float v38; // xmm6_4
	float v39; // xmm8_4
	float v40; // xmm11_4
	float v41; // xmm4_4
	float v42; // xmm2_4
	__m128 v43; // xmm0
	float v44; // xmm6_4
	float v45; // xmm2_4
	__m128 v46; // xmm0
	__m128 v47; // xmm2
	__m128 v48; // xmm1
	__m128 v49; // xmm2
	int* v50; // rax
	int v51; // ecx
	int v52; // eax
	__m128 v53; // xmm11
	double v54; // xmm4_8
	__m128 v55; // xmm8
	__m128 v56; // xmm3
	__m128 v57; // xmm2
	__m128 v58; // xmm12
	__m128 v59; // xmm1
	float v60; // xmm0_4
	__m128 v61; // xmm0
	__m128 v62; // xmm6
	__m128 v63; // xmm0
	__m128i v64; // xmm6
	__m128 v65; // xmm3
	__m128 v66; // xmm2
	float v67; // xmm0_4
	float v68; // xmm11_4
	float v69; // xmm0_4
	double v70; // xmm6_8
	float v71; // xmm10_4
	float v72; // xmm7_4
	float v73; // xmm0_4
	double v74; // xmm15_8
	float v75; // xmm9_4
	float v76; // xmm0_4
	float v77; // xmm5_4
	float v78; // xmm1_4
	float v79; // xmm9_4
	float v80; // xmm10_4
	float v81; // xmm8_4
	float v82; // xmm7_4
	float v83; // xmm4_4
	float v84; // xmm9_4
	float v85; // xmm7_4
	float v86; // xmm2_4
	float v87; // xmm11_4
	float v88; // xmm5_4
	float v89; // xmm10_4
	float v90; // xmm8_4
	float v91; // xmm0_4
	__m128 v92; // xmm3
	__m128 v93; // xmm1
	float v94; // xmm2_4
	__m128 v95; // xmm1
	float v96; // xmm0_4
	__m128i v97; // xmm1
	__m128 v98; // xmm2
	__int64 v99; // rax
	__m128i v100; // xmm12
	__m128 v101; // xmm1
	__int64 v102; // rax
	__m128 v103; // xmm0
	float v104; // xmm1_4
	__m128 v105; // xmm1
	unsigned __int64 v106; // rcx
	__m128 v107; // xmm1
	__m128* v108; // r9
	__m128i v109; // xmm1
	__m128i v110; // xmm1
	__m128i v111; // xmm1
	__int64 v112; // r8
	float v113; // xmm13_4
	__int64 v114; // rdx
	__m128 v115; // xmm0
	float v116; // xmm1_4
	__m128 v117; // xmm0
	__int64 v118; // r8
	__m128i v119; // xmm1
	float v120; // xmm3_4
	__int64 v121; // rdx
	__m128 v122; // xmm0
	float v123; // xmm14_4
	float v124; // xmm1_4
	float v125; // xmm0_4
	float v126; // xmm2_4
	__m128i v127; // xmm3
	__int64 v128; // r8
	__int32 v129; // eax
	__int32 v130; // eax
	__int32 v131; // eax
	float v132; // xmm1_4
	__int64 v133; // rdx
	float v134; // xmm0_4
	__int64 v135; // r8
	float v136; // xmm1_4
	__int64 v137; // rdx
	float v138; // xmm0_4
	__int64 v139; // r8
	float v140; // xmm1_4
	__int64 v141; // r14
	bool v142; // cc
	int v143; // ebx
	__m128 v145; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v146; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v147; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v148; // [rsp+78h] [rbp-90h] BYREF
	__int128 v149; // [rsp+88h] [rbp-80h]
	__m128 v150; // [rsp+98h] [rbp-70h]
	__int128 v151; // [rsp+A8h] [rbp-60h]
	float v152; // [rsp+B8h] [rbp-50h]
	__int64 TlsValue; // [rsp+C8h] [rbp-40h] BYREF
	char v154[24]; // [rsp+D0h] [rbp-38h]
	__m128 v155; // [rsp+E8h] [rbp-20h]
	__m128 v156; // [rsp+F8h] [rbp-10h]
	__m128 v157; // [rsp+108h] [rbp+0h] BYREF
	char v158[24]; // [rsp+118h] [rbp+10h] BYREF

	v4 = dword_140C636A8;
	v147.m128_f32[0] = a4;
	v7 = dword_140C4DAA0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4DAA0)
		v7 = *(_DWORD*)qword_140C63750;
	if (byte_140C4DAB0[v7])
	{
		v8 = dword_140C4D980;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D980)
			v8 = *(_DWORD*)qword_140C63750;
		v9 = dword_140C4D990[v8];
		if (v9 <= 0.0000099999997)
		{
			v10 = 0.0;
			goto LABEL_11;
		}
	}
	else
	{
		v9 = *(float*)(a1 + 48);
		if (v9 <= 0.0000099999997)
		{
			v10 = 0.0;
			goto LABEL_11;
		}
	}
	*(float*)&a3 = (float)(*(float*)&a3 * -0.69314718) / v9;
	v10 = sub_1408FC7F0(a3);
LABEL_11:
	v11 = (__m128)0x40400000u;
	v12 = 0x3F000000u;
	v152 = 1.0 - v10;
	if (*(_DWORD*)(a1 + 1044))
	{
		if (*(_DWORD*)(a1 + 1148) > v4)
		{
			if (*(_DWORD*)(a1 + 1052) == 1)
			{
				sub_1405D49D0(
					a1,
					(__m128*)(a1 + 944),
					(__m128*)(a1 + 1088),
					(__m128*)(a1 + 992),
					(__m128*) & TlsValue,
					&v145,
					(__int128*)v158);
				v16 = 0i64;
				v148 = *(__m128*)ymmword_140C78390.m256_f32;
				v146 = _mm_mul_ps(v145, v145);
				v150 = (__m128)xmmword_140C783B0;
				v149 = *(_OWORD*)&ymmword_140C78390.m256_f32[4];
				LODWORD(v17) = _mm_shuffle_ps(v146, v146, 170).m128_u32[0];
				v151 = xmmword_140C783C0;
				if (_mm_shuffle_ps(v146, v146, 85).m128_f32[0] > v146.m128_f32[0])
					v16 = 1i64;
				v18 = 1 - v16;
				if (v17 > v146.m128_f32[v16])
					v16 = 2i64;
				v19 = (__m128)v146.m128_u32[-v18 + 3 - v16];
				v19.m128_f32[0] = (float)(v19.m128_f32[0] + v146.m128_f32[v18]) + v146.m128_f32[v16];
				if (v19.m128_f32[0] <= *(float*)&dword_140C3D7D8)
				{
					v21 = 0i64;
				}
				else
				{
					v20 = 1.0 / _mm_sqrt_ps(v19).m128_f32[0];
					v146.m128_f32[2] = v20 * v145.m128_f32[2];
					v146.m128_f32[0] = v20 * v145.m128_f32[0];
					v146.m128_f32[1] = v20 * v145.m128_f32[1];
					v21 = v146;
				}
				v22 = (__m128i)_mm_sub_ps((__m128)0i64, v21);
				v150.m128_u64[0] = v22.m128i_i64[0];
				v157 = (__m128)v22;
				v150.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
				if (fabs(*(float*)v22.m128i_i32) > 0.0000099999997 || fabs(v157.m128_f32[2]) > 0.0000099999997)
				{
					v24 = (__m128)0x40400000u;
					v25 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v150, v150, 210), _mm_shuffle_ps(*(__m128*)v158, *(__m128*)v158, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v150, v150, 201), _mm_shuffle_ps(*(__m128*)v158, *(__m128*)v158, 210)));
					v26 = _mm_mul_ps(v25, v25);
					v26.m128_f32[0] = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
						+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
					v27 = 1.0 / fsqrt(v26.m128_f32[0]);
					v24.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v26.m128_f32[0] * v27) * v27)) * 0.5) * v27,
						0.0);
					v28 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v25);
					v148.m128_u64[0] = v28.m128i_i64[0];
					v148.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8));
					v29 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v148, v148, 210), _mm_shuffle_ps(v150, v150, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v148, v148, 201), _mm_shuffle_ps(v150, v150, 210)));
					*(_QWORD*)&v149 = v29.m128i_i64[0];
					DWORD2(v149) = _mm_cvtsi128_si32(_mm_srli_si128(v29, 8));
				}
				else
				{
					v148.m128_u64[0] = xmmword_140C77860;
					v148.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140C77860, 8));
					v23 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v148, v148, 210), _mm_shuffle_ps(v150, v150, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v148, v148, 201), _mm_shuffle_ps(v150, v150, 210)));
					*(_QWORD*)&v149 = v23.m128i_i64[0];
					DWORD2(v149) = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
				}
				*(_OWORD*)(a1 + 1120) = *(_OWORD*)sub_1401B1D60((float*)v158, v148.m128_f32);
				v30 = 0i64;
				v30.m128_f32[0] = fmaxf(0.0, fminf((float)(int)(v4 - *(_DWORD*)(a1 + 1144)) * *(float*)(a1 + 1152), 1.0))
					* 3.1415927;
				v14 = (__m128*)(a1 + 32);
				*(float*)&v31 = 1.0 - (float)((float)(sub_1408FC950(*(double*)v30.m128_u64) + 1.0) * 0.5);
				v30.m128_f32[0] = *(float*)&v31;
				*(__m128*)(a1 + 32) = _mm_add_ps(
					_mm_mul_ps(
						_mm_sub_ps(*(__m128*)(a1 + 1088), *(__m128*)(a1 + 1072)),
						_mm_shuffle_ps(v30, v30, 0)),
					*(__m128*)(a1 + 1072));
				sub_1401B1EE0(
					(__m128*)v158,
					(__m128*)(a1 + 1104),
					(__m128*)(a1 + 1120),
					COERCE_DOUBLE((unsigned __int64)v31));
				v148.m128_i32[3] = 0;
				v32 = _mm_shuffle_ps(*(__m128*)v158, *(__m128*)v158, 170).m128_f32[0];
				v33 = _mm_shuffle_ps(*(__m128*)v158, *(__m128*)v158, 85).m128_f32[0];
				v30.m128_f32[0] = _mm_shuffle_ps(*(__m128*)v158, *(__m128*)v158, 255).m128_f32[0];
				v34 = (float)(v33 * 2.0) * v30.m128_f32[0];
				v35 = (float)(*(float*)v158 * 2.0) * v30.m128_f32[0];
				v36 = (float)(v33 * 2.0) * *(float*)v158;
				v37 = (float)(v32 * 2.0) * v30.m128_f32[0];
				v38 = (float)(v32 * 2.0) * *(float*)v158;
				v39 = (float)(v32 * 2.0) * v32;
				v40 = (float)(v33 * 2.0) * v33;
				v41 = (float)(v32 * 2.0) * v33;
				v148.m128_f32[2] = v38 - v34;
				v148.m128_f32[0] = (float)(1.0 - v40) - v39;
				*(float*)&v149 = v36 - v37;
				v148.m128_f32[1] = v36 + v37;
				v42 = 1.0 - (float)((float)(*(float*)v158 * 2.0) * *(float*)v158);
				*((float*)&v149 + 1) = v42 - v39;
				v12 = 0x3F000000u;
				v151 = xmmword_140B7AD00;
				v43 = *(__m128*)(a1 + 32);
				v150.m128_i32[3] = 0;
				v13 = (__m128*)(a1 + 64);
				HIDWORD(v149) = 0;
				v150.m128_f32[2] = v42 - v40;
				v44 = v38 + v34;
				v11 = (__m128)0x40400000u;
				v150.m128_f32[0] = v44;
				*((float*)&v149 + 2) = v41 + v35;
				v150.m128_f32[1] = v41 - v35;
				v15 = _mm_sub_ps((__m128)0i64, v150);
				v145 = v15;
				*(__m128*)(a1 + 64) = _mm_add_ps(v43, v15);
				*(_OWORD*)(a1 + 704) = v149;
				v45 = (float)((float)(*(float*)(a1 + 1140) - *(float*)(a1 + 1136)) * *(float*)&v31) + *(float*)(a1 + 1136);
				*(float*)(a1 + 16) = v45;
				*(float*)(a1 + 20) = v45;
			}
			else
			{
				v14 = (__m128*)(a1 + 32);
				v13 = (__m128*)(a1 + 64);
				*(_OWORD*)(a1 + 32) = *(_OWORD*)(a1 + 768);
				v46 = *(__m128*)(a1 + 816);
				*(__m128*)(a1 + 64) = v46;
				v15 = _mm_sub_ps(v46, *(__m128*)(a1 + 32));
				v145 = v15;
			}
		}
		else
		{
			if (*(_DWORD*)(a1 + 688))
			{
				*(_DWORD*)(a1 + 680) = 1;
			}
			else
			{
				*(_DWORD*)(a1 + 1044) = 0;
				*(_DWORD*)(a1 + 752) = *(_DWORD*)(a1 + 944);
				*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 960);
				*(_OWORD*)(a1 + 784) = *(_OWORD*)(a1 + 976);
				*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
				*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
				*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
				*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
				*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
				*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
				*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
				*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
				*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 976);
				*(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 992);
				*(_OWORD*)(a1 + 816) = *(_OWORD*)(a1 + 1008);
				*(_OWORD*)(a1 + 832) = *(_OWORD*)(a1 + 1024);
				*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
				*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
				*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
				*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
				*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
				*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
				*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
				*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
				*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 1024);
			}
			v13 = (__m128*)(a1 + 64);
			v14 = (__m128*)(a1 + 32);
			v15 = _mm_sub_ps(*(__m128*)(a1 + 64), *(__m128*)(a1 + 32));
			v145 = v15;
		}
	}
	else
	{
		v14 = (__m128*)(a1 + 32);
		v13 = (__m128*)(a1 + 64);
		sub_1405D49D0(
			a1,
			(__m128*)(a1 + 752),
			(__m128*)(a1 + 32),
			(__m128*)(a1 + 800),
			(__m128*)(a1 + 64),
			&v145,
			(__int128*)(a1 + 704));
		v15 = v145;
		*(_DWORD*)(a1 + 20) = *(_DWORD*)(a1 + 16);
	}
	v47 = _mm_sub_ps(*v14, *(__m128*)(a1 + 1200));
	v48 = _mm_mul_ps(v47, v47);
	v49 = _mm_shuffle_ps(v48, v48, 170);
	*(_DWORD*)(a1 + 516) = *(float*)&dword_140C3C7A8 > (float)((float)(v48.m128_f32[0]
		+ _mm_shuffle_ps(v48, v48, 85).m128_f32[0])
		+ v49.m128_f32[0]);
	v50 = (int*)qword_140C63750;
	*(__m128*)(a1 + 1200) = *v14;
	v51 = *v50;
	v52 = dword_140C4DBE0;
	if (v51 < dword_140C4DBE0)
		v52 = v51;
	if (*((_BYTE*)&dword_140C4DBF0 + v52))
	{
		v53 = (__m128) * (unsigned int*)(a1 + 52);
		*(_QWORD*)&v54 = *(unsigned int*)(a1 + 60);
		v55 = 0i64;
		v56 = _mm_sub_ps(*v14, *v13);
		v149 = *(_OWORD*)&ymmword_140C78390.m256_f32[4];
		v148 = *(__m128*)ymmword_140C78390.m256_f32;
		v151 = xmmword_140C783C0;
		v57 = _mm_mul_ps(v56, v56);
		v58 = v11;
		v57.m128_f32[0] = (float)(v57.m128_f32[0] + _mm_shuffle_ps(v57, v57, 85).m128_f32[0])
			+ _mm_shuffle_ps(v57, v57, 170).m128_f32[0];
		v59 = v11;
		v157 = (__m128)v12;
		v60 = 1.0 / fsqrt(v57.m128_f32[0]);
		v59.m128_f32[0] = fmaxf(
			(float)((float)(v11.m128_f32[0] - (float)((float)(v57.m128_f32[0] * v60) * v60)) * *(float*)&v12)
			* v60,
			0.0);
		*(__m128*)v158 = _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v56);
		v150.m128_u64[0] = *(_QWORD*)v158;
		v150.m128_u64[1] = __PAIR64__(HIDWORD(xmmword_140C783B0), _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i*)v158, 8)));
		if (fabs(*(float*)v158) > 0.0000099999997 || fabs(*(float*)&v158[8]) > 0.0000099999997)
		{
			*(float*)&v54 = *(float*)&v54 * *(float*)&v12;
			v146.m128_i32[0] = LODWORD(v54);
			v68 = sub_1408FE3D0(v54);
			v69 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v146.m128_u32[0]));
			*(_QWORD*)&v70 = *(unsigned int*)(a1 + 56);
			*(float*)&v70 = *(float*)&v70 * 0.5;
			v71 = v69;
			v72 = sub_1408FE3D0(v70);
			v73 = sub_1408FC950(v70);
			*(_QWORD*)&v74 = *(unsigned int*)(a1 + 52);
			*(float*)&v74 = *(float*)&v74 * 0.5;
			*(float*)&v70 = v73;
			v75 = sub_1408FE3D0(v74);
			v76 = sub_1408FC950(v74);
			v77 = v75 * *(float*)&v70;
			v78 = v68 * (float)(v75 * *(float*)&v70);
			v79 = v75 * v72;
			v146.m128_f32[0] = (float)(v71 * (float)(v76 * v72)) + v78;
			v146.m128_f32[1] = (float)(v71 * v77) - (float)(v68 * (float)(v76 * v72));
			v146.m128_f32[2] = (float)(v68 * (float)(v76 * *(float*)&v70)) - (float)(v71 * v79);
			v146.m128_f32[3] = (float)(v68 * v79) + (float)(v71 * (float)(v76 * *(float*)&v70));
			v80 = _mm_shuffle_ps(v146, v146, 85).m128_f32[0];
			v81 = _mm_shuffle_ps(v146, v146, 170).m128_f32[0];
			v82 = _mm_shuffle_ps(v146, v146, 255).m128_f32[0];
			v83 = v146.m128_f32[0] * (float)(v146.m128_f32[0] * 2.0);
			v84 = v82 * (float)(v146.m128_f32[0] * 2.0);
			*(float*)&v70 = v82 * (float)(v81 * 2.0);
			v85 = v82 * (float)(v80 * 2.0);
			v86 = v146.m128_f32[0] * (float)(v80 * 2.0);
			v87 = v146.m128_f32[0] * (float)(v81 * 2.0);
			v88 = v80 * (float)(v80 * 2.0);
			v89 = v80 * (float)(v81 * 2.0);
			v90 = v81 * (float)(v81 * 2.0);
			*(_DWORD*)&v154[20] = 0;
			*(_QWORD*)v154 = COERCE_UNSIGNED_INT(v87 - v85);
			*(float*)&TlsValue = (float)(1.0 - v88) - v90;
			v155.m128_f32[0] = v87 + v85;
			*(float*)&v154[16] = v89 + v84;
			*(float*)&v154[8] = v86 - *(float*)&v70;
			*((float*)&TlsValue + 1) = v86 + *(float*)&v70;
			v91 = (float)(1.0 - v83) - v90;
			v155.m128_f32[1] = v89 - v84;
			v55 = 0i64;
			*(float*)&v154[12] = v91;
			v155.m128_u64[1] = COERCE_UNSIGNED_INT((float)(1.0 - v83) - v88);
			v156 = (__m128)xmmword_140B7AD00;
			v92 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v150, v150, 210), _mm_shuffle_ps(*(__m128*) & v154[8], *(__m128*) & v154[8], 201)),
				_mm_mul_ps(_mm_shuffle_ps(v150, v150, 201), _mm_shuffle_ps(*(__m128*) & v154[8], *(__m128*) & v154[8], 210)));
			v93 = _mm_mul_ps(v92, v92);
			v94 = (float)(v93.m128_f32[0] + _mm_shuffle_ps(v93, v93, 85).m128_f32[0])
				+ _mm_shuffle_ps(v93, v93, 170).m128_f32[0];
			v95 = v58;
			v96 = fsqrt(v94);
			v95.m128_f32[0] = fmaxf(
				(float)((float)(v58.m128_f32[0]
					- (float)((float)(v94 * (float)(1.0 / v96)) * (float)(1.0 / v96)))
					* v157.m128_f32[0])
				* (float)(1.0 / v96),
				0.0);
			v97 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v95, v95, 0), v92);
			v148.m128_u64[0] = v97.m128i_i64[0];
			v148.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v97, 8));
			v65 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 210), _mm_shuffle_ps(v150, v150, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 201), _mm_shuffle_ps(v150, v150, 210)));
			v98 = _mm_mul_ps(v65, v65);
			v98.m128_f32[0] = (float)(v98.m128_f32[0] + _mm_shuffle_ps(v98, v98, 85).m128_f32[0])
				+ _mm_shuffle_ps(v98, v98, 170).m128_f32[0];
			v67 = 1.0 / fsqrt(v98.m128_f32[0]);
			v58.m128_f32[0] = (float)(v58.m128_f32[0] - (float)((float)(v98.m128_f32[0] * v67) * v67)) * v157.m128_f32[0];
		}
		else
		{
			v61 = v53;
			v61.m128_f32[0] = sub_1408FC950(*(double*)v53.m128_u64);
			v62 = v61;
			v63 = v53;
			v63.m128_f32[0] = sub_1408FE3D0(*(double*)v53.m128_u64);
			v64 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v62, _mm_xor_ps(v63, (__m128)0x80000000)), (__m128)0i64);
			v148.m128_u64[0] = v64.m128i_i64[0];
			v148.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v64, 8));
			v65 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 210), _mm_shuffle_ps(v150, v150, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v148, v148, 201), _mm_shuffle_ps(v150, v150, 210)));
			v66 = _mm_mul_ps(v65, v65);
			v66.m128_f32[0] = (float)(v66.m128_f32[0] + _mm_shuffle_ps(v66, v66, 85).m128_f32[0])
				+ _mm_shuffle_ps(v66, v66, 170).m128_f32[0];
			v67 = 1.0 / fsqrt(v66.m128_f32[0]);
			v58.m128_f32[0] = (float)(v11.m128_f32[0] - (float)((float)(v66.m128_f32[0] * v67) * v67)) * *(float*)&v12;
		}
		v99 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)&v151 = v14->m128_u64[0];
		v58.m128_f32[0] = fmaxf(v58.m128_f32[0] * v67, v55.m128_f32[0]);
		v100 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v65);
		DWORD2(v151) = v14->m128_i32[2];
		*(_QWORD*)&v149 = v100.m128i_i64[0];
		DWORD2(v149) = _mm_cvtsi128_si32(_mm_srli_si128(v100, 8));
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v99 + 24) + 72i64))(*(_QWORD*)(v99 + 24), &v148);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 16i64) + 48i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
			(unsigned int)dword_140C636A8,
			0i64);
		v49 = (__m128)v147.m128_u32[0];
		if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, __m128*, _QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 24i64) + 1064i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64),
			2i64,
			**(_QWORD**)(*(_QWORD*)(a1 + 8) + 24i64),
			&v146,
			0i64,
			0i64,
			&TlsValue,
			a1 + 224) >= 0)
		{
			v15 = _mm_sub_ps(v55, v155);
			v101 = v156;
			*v14 = v156;
			v145 = v15;
			*v13 = _mm_add_ps(v101, v15);
		}
	}
	if ((*(_BYTE*)(a1 + 684) & 2) != 0)
	{
		v102 = *a2;
		v103 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v14, *v13), (__m128)xmmword_140B7B2C0), *v13);
		v147.m128_u64[0] = 0i64;
		TlsValue = 16405i64;
		v157 = v103;
		*(_DWORD*)v154 = 0;
		*(_QWORD*)&v154[8] = 0i64;
		*(_QWORD*)&v154[16] = 0i64;
		v155.m128_i32[0] = 0;
		v155.m128_u64[1] = 0i64;
		v146.m128_u64[0] = 0x3F80000000000000i64;
		if ((*(unsigned int(__fastcall**)(__int64*, __m128*, __m128*, __m128*, __m128*, __int64*))(v102 + 424))(
			a2,
			v13,
			&v157,
			&v146,
			&v147,
			&TlsValue))
		{
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v147.m128_u64[0] + 16i64))(v147.m128_u64[0]);
		}
		else
		{
			v103.m128_i32[0] = 1065353216;
		}
		v104 = *(float*)(a1 + 80);
		if (v104 <= v103.m128_f32[0])
			v103.m128_f32[0] = (float)((float)(v103.m128_f32[0] - v104) * v152) + v104;
		v105 = v157;
		v106 = v147.m128_u64[0];
		*(_DWORD*)(a1 + 80) = v103.m128_i32[0];
		v49.m128_f32[0] = v103.m128_f32[0] * 0.80000001;
		v146 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v49, v49, 0), _mm_sub_ps(v105, *v13)), *v13);
		if (v106)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v106 + 8i64))(v106);
	}
	else
	{
		v146 = *v14;
	}
	v107 = _mm_mul_ps(v15, v15);
	if ((float)((float)(v107.m128_f32[0] + _mm_shuffle_ps(v107, v107, 85).m128_f32[0])
		+ _mm_shuffle_ps(v107, v107, 170).m128_f32[0]) > *(float*)&dword_140C4A6C8)
	{
		if (v145.m128_f32[0] == 0.0 && v145.m128_f32[2] == 0.0)
		{
			v109 = (__m128i)xmmword_140C77870;
			v108 = (__m128*)(a1 + 160);
			*(_DWORD*)(a1 + 192) = _mm_cvtsi128_si32((__m128i)xmmword_140C77870);
			*(_DWORD*)(a1 + 196) = _mm_cvtsi128_si32(_mm_srli_si128(v109, 4));
			*(_DWORD*)(a1 + 200) = _mm_cvtsi128_si32(_mm_srli_si128(v109, 8));
			v110 = (__m128i)_mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77880);
			*(_DWORD*)(a1 + 176) = _mm_cvtsi128_si32(v110);
			*(_DWORD*)(a1 + 180) = _mm_cvtsi128_si32(_mm_srli_si128(v110, 4));
			*(_DWORD*)(a1 + 184) = _mm_cvtsi128_si32(_mm_srli_si128(v110, 8));
			v111 = (__m128i)xmmword_140C77860;
			*(_DWORD*)(a1 + 160) = _mm_cvtsi128_si32((__m128i)xmmword_140C77860);
			*(_DWORD*)(a1 + 164) = _mm_cvtsi128_si32(_mm_srli_si128(v111, 4));
			*(_DWORD*)(a1 + 168) = _mm_cvtsi128_si32(_mm_srli_si128(v111, 8));
		}
		else
		{
			v112 = 0i64;
			v147 = _mm_mul_ps(v15, v15);
			LODWORD(v113) = _mm_shuffle_ps(v147, v147, 170).m128_u32[0];
			if (_mm_shuffle_ps(v147, v147, 85).m128_f32[0] > v147.m128_f32[0])
				v112 = 1i64;
			v114 = 1 - v112;
			if (v113 > v147.m128_f32[v112])
				v112 = 2i64;
			v115 = (__m128)v147.m128_u32[-v114 + 3 - v112];
			v115.m128_f32[0] = (float)(v115.m128_f32[0] + v147.m128_f32[v114]) + v147.m128_f32[v112];
			if (v115.m128_f32[0] <= *(float*)&dword_140C3D7D8)
			{
				v117 = 0i64;
			}
			else
			{
				v116 = 1.0 / _mm_sqrt_ps(v115).m128_f32[0];
				v147.m128_f32[0] = v145.m128_f32[0] * v116;
				v147.m128_f32[1] = v145.m128_f32[1] * v116;
				v147.m128_f32[2] = v145.m128_f32[2] * v116;
				v117 = v147;
			}
			v118 = 0i64;
			v119 = (__m128i)_mm_sub_ps((__m128)0i64, v117);
			*(_DWORD*)(a1 + 192) = _mm_cvtsi128_si32(v119);
			*(_DWORD*)(a1 + 196) = _mm_cvtsi128_si32(_mm_srli_si128(v119, 4));
			*(_DWORD*)(a1 + 200) = _mm_cvtsi128_si32(_mm_srli_si128(v119, 8));
			v147 = _mm_sub_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(a1 + 192), *(__m128*)(a1 + 192), 210),
					_mm_shuffle_ps(*(__m128*)(a1 + 704), *(__m128*)(a1 + 704), 201)),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(a1 + 192), *(__m128*)(a1 + 192), 201),
					_mm_shuffle_ps(*(__m128*)(a1 + 704), *(__m128*)(a1 + 704), 210)));
			v145 = _mm_mul_ps(v147, v147);
			LODWORD(v120) = _mm_shuffle_ps(v145, v145, 170).m128_u32[0];
			if (_mm_shuffle_ps(v145, v145, 85).m128_f32[0] > v145.m128_f32[0])
				v118 = 1i64;
			v121 = 1 - v118;
			if (v120 > v145.m128_f32[v118])
				v118 = 2i64;
			v122 = (__m128)v145.m128_u32[-v121 + 3 - v118];
			v122.m128_f32[0] = (float)(v122.m128_f32[0] + v145.m128_f32[v121]) + v145.m128_f32[v118];
			if (v122.m128_f32[0] <= *(float*)&dword_140C3D7D8)
			{
				v145 = 0i64;
				v126 = 0.0;
				v125 = 0.0;
				v124 = 0.0;
			}
			else
			{
				v123 = 1.0 / _mm_sqrt_ps(v122).m128_f32[0];
				v124 = v147.m128_f32[0] * v123;
				v125 = v147.m128_f32[1] * v123;
				v126 = v147.m128_f32[2] * v123;
			}
			v108 = (__m128*)(a1 + 160);
			*(float*)(a1 + 160) = v124;
			*(float*)(a1 + 164) = v125;
			*(float*)(a1 + 168) = v126;
			v127 = (__m128i)_mm_sub_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(a1 + 160), *(__m128*)(a1 + 160), 210),
					_mm_shuffle_ps(*(__m128*)(a1 + 192), *(__m128*)(a1 + 192), 201)),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(a1 + 160), *(__m128*)(a1 + 160), 201),
					_mm_shuffle_ps(*(__m128*)(a1 + 192), *(__m128*)(a1 + 192), 210)));
			*(_DWORD*)(a1 + 176) = _mm_cvtsi128_si32(v127);
			*(_DWORD*)(a1 + 180) = _mm_cvtsi128_si32(_mm_srli_si128(v127, 4));
			*(_DWORD*)(a1 + 184) = _mm_cvtsi128_si32(_mm_srli_si128(v127, 8));
		}
		v128 = 0i64;
		*(_QWORD*)(a1 + 208) = v146.m128_u64[0];
		*(_DWORD*)(a1 + 216) = v146.m128_i32[2];
		*(_DWORD*)(a1 + 96) = v108->m128_i32[0];
		*(_DWORD*)(a1 + 100) = v108[1].m128_i32[0];
		v129 = v108[2].m128_i32[0];
		*(_DWORD*)(a1 + 108) = 0;
		*(_DWORD*)(a1 + 104) = v129;
		*(_DWORD*)(a1 + 112) = v108->m128_i32[1];
		*(_DWORD*)(a1 + 116) = v108[1].m128_i32[1];
		v130 = v108[2].m128_i32[1];
		*(_DWORD*)(a1 + 124) = 0;
		*(_DWORD*)(a1 + 120) = v130;
		*(_DWORD*)(a1 + 128) = v108->m128_i32[2];
		*(_DWORD*)(a1 + 132) = v108[1].m128_i32[2];
		v131 = v108[2].m128_i32[2];
		*(_DWORD*)(a1 + 140) = 0;
		*(_DWORD*)(a1 + 136) = v131;
		v145 = _mm_mul_ps(*v108, v108[3]);
		LODWORD(v132) = _mm_shuffle_ps(v145, v145, 170).m128_u32[0];
		if (_mm_shuffle_ps(v145, v145, 85).m128_f32[0] > v145.m128_f32[0])
			v128 = 1i64;
		v133 = 1 - v128;
		if (v132 > v145.m128_f32[v128])
			v128 = 2i64;
		v134 = (float)(v145.m128_f32[-v133 + 3 - v128] + v145.m128_f32[v133]) + v145.m128_f32[v128];
		v135 = 0i64;
		*(float*)(a1 + 144) = -v134;
		v145 = _mm_mul_ps(v108[3], v108[1]);
		LODWORD(v136) = _mm_shuffle_ps(v145, v145, 170).m128_u32[0];
		if (_mm_shuffle_ps(v145, v145, 85).m128_f32[0] > v145.m128_f32[0])
			v135 = 1i64;
		v137 = 1 - v135;
		if (v136 > v145.m128_f32[v135])
			v135 = 2i64;
		v138 = (float)(v145.m128_f32[-v137 + 3 - v135] + v145.m128_f32[v137]) + v145.m128_f32[v135];
		v139 = 0i64;
		*(float*)(a1 + 148) = -v138;
		v145 = _mm_mul_ps(v108[3], v108[2]);
		LODWORD(v140) = _mm_shuffle_ps(v145, v145, 170).m128_u32[0];
		if (_mm_shuffle_ps(v145, v145, 85).m128_f32[0] > v145.m128_f32[0])
			v139 = 1i64;
		v141 = 1 - v139;
		v142 = v140 <= v145.m128_f32[v139];
		*(_DWORD*)(a1 + 156) = 1065353216;
		if (!v142)
			v139 = 2i64;
		*(float*)(a1 + 152) = -(float)((float)(v145.m128_f32[-v141 + 3 - v139] + v145.m128_f32[v141]) + v145.m128_f32[v139]);
	}
	else
	{
		v108 = (__m128*)(a1 + 160);
		*(__m256*)(a1 + 160) = ymmword_140C78390;
		*(_OWORD*)(a1 + 192) = xmmword_140C783B0;
		*(_OWORD*)(a1 + 208) = xmmword_140C783C0;
		*(_OWORD*)(a1 + 96) = *(_OWORD*)(a1 + 160);
		*(_OWORD*)(a1 + 112) = *(_OWORD*)(a1 + 176);
		*(_OWORD*)(a1 + 128) = *(_OWORD*)(a1 + 192);
		*(_OWORD*)(a1 + 144) = *(_OWORD*)(a1 + 208);
	}
	if (!sub_1405CFB60(v108->m128_f32))
	{
		*(_QWORD*)v154 = 0i64;
		TlsValue = (__int64)&off_140B5E648;
		*(_QWORD*)&v154[8] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		*(_QWORD*)v158 = TlsValue;
		v147.m128_u64[0] = 0x141E1CBD8i64;
		*(_OWORD*)&v158[8] = *(_OWORD*)v154;
		v143 = sub_1401971E0(&dword_140C8AFB0, 22, &v147, v158);
		TlsValue = (__int64)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&v154[8]);
		if (v143)
			DebugBreak();
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B2C0: using guessed type __int128 xmmword_140B7B2C0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C4A6C8: using guessed type int dword_140C4A6C8;
// 140C4D980: using guessed type int dword_140C4D980;
// 140C4D990: using guessed type float dword_140C4D990[16];
// 140C4DAA0: using guessed type int dword_140C4DAA0;
// 140C4DAB0: using guessed type _BYTE byte_140C4DAB0[32];
// 140C4DBE0: using guessed type int dword_140C4DBE0;
// 140C4DBF0: using guessed type int dword_140C4DBF0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8AFB0: using guessed type _DWORD dword_140C8AFB0;

