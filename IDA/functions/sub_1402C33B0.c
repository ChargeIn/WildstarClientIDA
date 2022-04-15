#include "../winhttp.h"

//----- (00000001402C33B0) ----------------------------------------------------
char __fastcall sub_1402C33B0(int* a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
	__m128 v5; // xmm0
	unsigned __int64 v6; // rsi
	char* v7; // rdi
	int* v8; // rbx
	char result; // al
	unsigned __int64 v10; // rdx
	int* v11; // r14
	__m128 v12; // xmm0
	__m128 v13; // xmm2
	__m128i v14; // xmm0
	unsigned __int64 i; // rbp
	char* v16; // rax
	unsigned __int64 v17; // rbp
	int* v18; // rdi
	__m128 v19; // xmm0
	__m128 v20; // xmm3
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	unsigned __int64 j; // rbp
	char* v24; // rax
	unsigned __int16* v25; // r15
	__int64 v26; // r12
	float v27; // xmm0_4
	__m128d v28; // xmm0
	__m128 v29; // xmm1
	__m128d v30; // xmm0
	__m128 v31; // xmm1
	__m128d v32; // xmm0
	__m128 v33; // xmm1
	__m128d v34; // xmm0
	__m128 v35; // xmm1
	unsigned __int64 k; // rbp
	char* v37; // rax
	unsigned __int64 m; // rbp
	__m128 v39; // xmm0
	__m128 v40; // xmm2
	__m128 v41; // xmm2
	__m128 v42; // xmm0
	unsigned __int64 n; // rbp
	char* v44; // rax
	unsigned __int64 ii; // rbp
	int v46; // eax
	__m128 v47; // xmm2
	__m128 v48; // xmm0
	unsigned int v49; // ecx
	__m128 v50; // xmm0
	unsigned __int64 v51; // rbp
	__m128 v52; // xmm0
	__m128 v53; // xmm0
	__m128 v54; // xmm0
	__m128 v55; // xmm0
	__m128 v56; // xmm0
	unsigned __int64 v57; // rbp
	float v58; // xmm0_4
	unsigned __int64 jj; // rbp
	__m128 v60; // xmm0
	__m128i v61; // xmm0
	unsigned __int64 kk; // rbp
	__m128 v63; // xmm0
	__m128i v64; // xmm0
	unsigned __int64 mm; // rbp
	__m128 v66; // xmm0
	__m128i v67; // xmm0
	unsigned __int64 nn; // rbp
	__m128 v69; // xmm0
	__m128i v70; // xmm0
	unsigned __int64 i1; // rbp
	char* v72; // rax
	unsigned __int64 i2; // rbp
	__m128 v74; // xmm2
	__m128 v75; // xmm0
	unsigned __int64 i3; // rbp
	char* v77; // rax
	unsigned __int64 v78; // rbp
	unsigned int v79; // eax
	__m128 v80; // xmm3
	unsigned __int64 v81; // rbp
	int v82; // eax
	unsigned __int64 v83; // rbp
	int v84; // eax
	unsigned __int64 v85; // rbp
	unsigned __int64 v86; // rbp
	int v87; // eax
	__int64 v88; // r15
	int v89; // eax
	__m128 v90; // xmm1
	int v91; // eax
	int v92; // eax
	__m128 v93; // xmm1
	int v94; // eax
	int v95; // eax
	__m128 v96; // xmm1
	int v97; // eax
	int v98; // eax
	__m128 v99; // xmm1
	int v100; // eax
	int v101; // eax
	__m128 v102; // xmm0
	__int64 v103; // rdx
	__m128 v104; // xmm1
	unsigned __int64 v105; // rbp
	unsigned __int64 i4; // rbp
	__m128 v107; // xmm0
	__m128 v108; // xmm1
	int* v109; // rbx
	__m128 v110; // xmm2
	unsigned __int64 i5; // rbp
	__m128 v112; // xmm0
	__m128 v113; // xmm1
	int* v114; // rbx
	__m128 v115; // xmm2
	unsigned __int64 v116; // rbp
	__m128 v117; // xmm4
	__m128 v118; // xmm0
	__m128 v119; // xmm1
	unsigned __int64 v120; // rbp
	__m128 v121; // xmm2
	__m128 v122; // xmm0
	__m128 v123; // xmm1
	unsigned __int64 i6; // rbp
	__m128 v125; // xmm0
	__m128 v126; // xmm1
	unsigned __int64 i7; // rbp
	__m128 v128; // xmm0
	__m128 v129; // xmm1
	unsigned __int64 v130; // rbp
	__m128 v131; // xmm2
	__m128 v132; // xmm0
	__m128 v133; // xmm1
	__int128 v134; // [rsp+20h] [rbp-68h]
	__int128 v135; // [rsp+20h] [rbp-68h]
	__m128 v136; // [rsp+20h] [rbp-68h]
	__m128 v137; // [rsp+20h] [rbp-68h]
	__m128 v138; // [rsp+20h] [rbp-68h]
	__m128 v139; // [rsp+20h] [rbp-68h]
	__int128 v140; // [rsp+20h] [rbp-68h]
	float v141; // [rsp+90h] [rbp+8h]

	v6 = a4;
	v7 = (char*)a3;
	v8 = a1;
	if (!a1)
		return 0;
	v10 = 16 * a2;
	v11 = &a1[v10 / 4];
	switch (a5)
	{
	case 2:
		if (a4 > v10)
			v6 = v10;
		sub_1407E15B8(a1, v10, (int*)a3, v6);
		result = 1;
		break;
	case 3:
		if (a4 < 0x10)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v12 = (__m128)_mm_loadu_si128((const __m128i*)((char*)v8 + a3 - (_QWORD)a1));
			v8 += 4;
			v13 = _mm_and_ps(v12, (__m128)xmmword_140B609E0);
			*((__m128*)v8 - 1) = _mm_add_ps(
				_mm_and_ps((__m128)_mm_srai_epi32((__m128i)v13, 0x1Fu), (__m128)xmmword_140B609A0),
				_mm_cvtepi32_ps((__m128i)_mm_xor_ps(v13, v12)));
		} while ((char*)v8 - (char*)a1 < a4);
		result = 1;
		break;
	case 4:
		if (a4 < 0x10)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v14 = _mm_loadu_si128((const __m128i*)((char*)v8 + a3 - (_QWORD)a1));
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_cvtepi32_ps(v14);
		} while ((char*)v8 - (char*)a1 < a4);
		result = 1;
		break;
	case 6:
		if (a4 < 0xC)
			goto LABEL_261;
		for (i = 0i64; i < a4; i += 12i64)
		{
			v16 = v7;
			v7 += 12;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_movelh_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)v16, (__m128) * ((unsigned int*)v16 + 1)),
						(__m128) * ((unsigned int*)v16 + 2)),
					(__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 7:
		if (a4 < 0xC)
			goto LABEL_261;
		v17 = 0i64;
		v18 = (int*)(a3 + 8);
		do
		{
			v19 = (__m128)(unsigned int) * (v18 - 1);
			v20 = (__m128)(unsigned int) * (v18 - 2);
			v18 += 3;
			v21 = _mm_movelh_ps(_mm_unpacklo_ps(v20, v19), (__m128)(unsigned int) * (v18 - 3));
			v22 = _mm_and_ps(v21, (__m128)xmmword_140B609E0);
			if (v8 >= v11)
				goto LABEL_260;
			v17 += 12i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_add_ps(
						_mm_and_ps((__m128)_mm_srai_epi32((__m128i)v22, 0x1Fu), (__m128)xmmword_140B609A0),
						_mm_cvtepi32_ps((__m128i)_mm_xor_ps(v22, v21))),
					(__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		} while (v17 < a4);
		result = 1;
		break;
	case 8:
		if (a4 < 0xC)
			goto LABEL_261;
		for (j = 0i64; j < a4; j += 12i64)
		{
			v24 = v7;
			v7 += 12;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_cvtepi32_ps((__m128i)_mm_movelh_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)v24,
							(__m128) * ((unsigned int*)v24 + 1)),
						(__m128) * ((unsigned int*)v24 + 2))),
					(__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 10:
		if (a4 < 8)
			goto LABEL_261;
		v25 = (unsigned __int16*)(a3 + 4);
		v26 = -4 - a3;
		do
		{
			if (v8 >= v11)
				break;
			LODWORD(v134) = sub_1402C24E0(*(v25 - 2));
			DWORD1(v134) = sub_1402C24E0(*(v25 - 1));
			DWORD2(v134) = sub_1402C24E0(*v25);
			v27 = sub_1402C24E0(v25[1]);
			v25 += 4;
			v8 += 4;
			*((float*)&v134 + 3) = v27;
			*((_OWORD*)v8 - 1) = v134;
		} while ((unsigned __int64)v25 + v26 < v6);
		result = 1;
		break;
	case 11:
		if (a4 < 8)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v28 = (__m128d) * (unsigned __int64*)v7;
			v7 += 8;
			v8 += 4;
			v29 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps((__m128)_mm_shuffle_pd(v28, v28, 0), (__m128)xmmword_140B60A60),
						(__m128)xmmword_140B60A20)),
					(__m128)xmmword_140B625F0),
				(__m128)xmmword_140B626E0);
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v29, v29, 216);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 12:
		if (a4 < 8)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v30 = (__m128d) * (unsigned __int64*)v7;
			v7 += 8;
			v8 += 4;
			v31 = _mm_add_ps(
				_mm_mul_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps((__m128)_mm_shuffle_pd(v30, v30, 0), (__m128)xmmword_140B60A60),
						(__m128)xmmword_140B60A20)),
					(__m128)xmmword_140B60960),
				(__m128)xmmword_140B625E0);
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v31, v31, 216);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 13:
		if (a4 < 8)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v32 = (__m128d) * (unsigned __int64*)v7;
			v7 += 8;
			v8 += 4;
			v33 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps((__m128)_mm_shuffle_pd(v32, v32, 0), (__m128)xmmword_140B60A60),
						(__m128)xmmword_140B60990)),
					(__m128)xmmword_140B60930),
				(__m128)xmmword_140B60910);
			*((__m128*)v8 - 1) = _mm_max_ps(_mm_shuffle_ps(v33, v33, 216), (__m128)xmmword_140B608F0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 14:
		if (a4 < 8)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v34 = (__m128d) * (unsigned __int64*)v7;
			v7 += 8;
			v8 += 4;
			v35 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps((__m128)_mm_shuffle_pd(v34, v34, 0), (__m128)xmmword_140B60A60),
						(__m128)xmmword_140B60990)),
					(__m128)xmmword_140B60930),
				(__m128)xmmword_140B60960);
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v35, v35, 216);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 16:
		if (a4 < 8)
			goto LABEL_261;
		for (k = 0i64; k < a4; k += 8i64)
		{
			v37 = v7;
			v7 += 8;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)v37, (__m128) * ((unsigned int*)v37 + 1)),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 17:
		if (a4 < 8)
			goto LABEL_261;
		for (m = 0i64; m < a4; m += 8i64)
		{
			v39 = (__m128) * ((unsigned int*)v7 + 1);
			v40 = (__m128) * (unsigned int*)v7;
			v7 += 8;
			v41 = _mm_unpacklo_ps(v40, v39);
			v42 = _mm_and_ps(v41, (__m128)xmmword_140B609E0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_add_ps(
						_mm_and_ps((__m128)_mm_srai_epi32((__m128i)v42, 0x1Fu), (__m128)xmmword_140B609A0),
						_mm_cvtepi32_ps((__m128i)_mm_xor_ps(v42, v41))),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 18:
		if (a4 < 8)
			goto LABEL_261;
		for (n = 0i64; n < a4; n += 8i64)
		{
			v44 = v7;
			v7 += 8;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_cvtepi32_ps((__m128i)_mm_unpacklo_ps(
						(__m128) * (unsigned int*)v44,
						(__m128) * ((unsigned int*)v44 + 1))),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 20:
		if (a4 < 8)
			goto LABEL_261;
		for (ii = 0i64; ii < a4; ii += 8i64)
		{
			if (v8 >= v11)
				goto LABEL_260;
			v46 = *(unsigned __int8*)(a3 + ii + 4);
			v47 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + ii), (__m128)0i64);
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				v47,
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v46), (__m128)0x3F800000u));
		}
		result = 1;
		break;
	case 24:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v48 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(
							_mm_shuffle_ps(v48, v48, 0),
							(__m128)xmmword_140B60950),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B626C0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 25:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v50 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(
							_mm_shuffle_ps(v50, v50, 0),
							(__m128)xmmword_140B60950),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B60890);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 26:
		if (a4 < 4)
			goto LABEL_261;
		v51 = 0i64;
		do
		{
			v52 = sub_1402C2650((unsigned int*)v7);
			v7 += 4;
			if (v8 >= v11)
				goto LABEL_260;
			v51 += 4i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(v52, (__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		} while (v51 < v6);
		result = 1;
		break;
	case 28:
	case 29:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v53 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(
							_mm_shuffle_ps(v53, v53, 0),
							(__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62740);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 30:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v54 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(
							_mm_shuffle_ps(v54, v54, 0),
							(__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62720);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 31:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v55 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_max_ps(
				_mm_mul_ps(
					_mm_add_ps(
						_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
							_mm_and_ps(
								_mm_shuffle_ps(v55, v55, 0),
								(__m128)xmmword_140B60A40),
							(__m128)xmmword_140B609B0)),
						(__m128)xmmword_140B60940),
					(__m128)xmmword_140B62670),
				(__m128)xmmword_140B608F0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 32:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v56 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(
							_mm_shuffle_ps(v56, v56, 0),
							(__m128)xmmword_140B60A40),
						(__m128)xmmword_140B609B0)),
					(__m128)xmmword_140B60940),
				(__m128)xmmword_140B62720);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 34:
		if (a4 < 4)
			goto LABEL_261;
		v57 = 0i64;
		v136.m128_u64[1] = 0i64;
		do
		{
			v136.m128_i32[0] = sub_1402C24E0(*(_WORD*)v7);
			v58 = sub_1402C24E0(*((_WORD*)v7 + 1));
			v7 += 4;
			v136.m128_f32[1] = v58;
			if (v8 >= v11)
				goto LABEL_260;
			v57 += 4i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900),
				_mm_and_ps((__m128)xmmword_140B60980, v136));
		} while (v57 < v6);
		result = 1;
		break;
	case 35:
		if (a4 < 4)
			goto LABEL_261;
		for (jj = 0i64; jj < a4; jj += 4i64)
		{
			v60 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v61 = (__m128i)_mm_xor_ps(
				_mm_and_ps(_mm_shuffle_ps(v60, v60, 0), (__m128)xmmword_140B608A0),
				(__m128)xmmword_140B609F0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_mul_ps(
						_mm_add_ps(_mm_cvtepi32_ps(v61), (__m128)xmmword_140B62620),
						(__m128)xmmword_140B625D0),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 36:
		if (a4 < 4)
			goto LABEL_261;
		for (kk = 0i64; kk < a4; kk += 4i64)
		{
			v63 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v64 = (__m128i)_mm_xor_ps(
				_mm_and_ps(_mm_shuffle_ps(v63, v63, 0), (__m128)xmmword_140B608A0),
				(__m128)xmmword_140B609F0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_cvtepi32_ps(v64), (__m128)xmmword_140B60870),
						(__m128)xmmword_140B62650),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 37:
		if (a4 < 4)
			goto LABEL_261;
		for (mm = 0i64; mm < a4; mm += 4i64)
		{
			v66 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v67 = (__m128i)_mm_xor_ps(
				_mm_and_ps(_mm_shuffle_ps(v66, v66, 0), (__m128)xmmword_140B608A0),
				(__m128)xmmword_140B608D0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_max_ps(
						_mm_mul_ps(
							_mm_add_ps(_mm_cvtepi32_ps(v67), (__m128)xmmword_140B60A50),
							(__m128)xmmword_140B60A00),
						(__m128)xmmword_140B608F0),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 38:
		if (a4 < 4)
			goto LABEL_261;
		for (nn = 0i64; nn < a4; nn += 4i64)
		{
			v69 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v70 = (__m128i)_mm_xor_ps(
				_mm_and_ps(_mm_shuffle_ps(v69, v69, 0), (__m128)xmmword_140B608A0),
				(__m128)xmmword_140B608D0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_mul_ps(
						_mm_add_ps(_mm_cvtepi32_ps(v70), (__m128)xmmword_140B60A50),
						(__m128)xmmword_140B60870),
					(__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 40:
	case 41:
		if (a4 < 4)
			goto LABEL_261;
		for (i1 = 0i64; i1 < a4; i1 += 4i64)
		{
			v72 = v7;
			v7 += 4;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps((__m128) * (unsigned int*)v72, (__m128)xmmword_140B60970),
				_mm_andnot_ps((__m128)xmmword_140B60970, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 42:
		if (a4 < 4)
			goto LABEL_261;
		for (i2 = 0i64; i2 < a4; i2 += 4i64)
		{
			v74 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v75 = _mm_and_ps(v74, (__m128)xmmword_140B609E0);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_mul_ps(
						_mm_add_ps(
							_mm_and_ps((__m128)_mm_srai_epi32((__m128i)v75, 0x1Fu), (__m128)xmmword_140B609A0),
							_mm_cvtepi32_ps((__m128i)_mm_xor_ps(v74, v75))),
						(__m128)xmmword_140B7B240),
					(__m128)xmmword_140B60970),
				_mm_andnot_ps((__m128)xmmword_140B60970, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 43:
		if (a4 < 4)
			goto LABEL_261;
		for (i3 = 0i64; i3 < a4; i3 += 4i64)
		{
			v77 = v7;
			v7 += 4;
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(
					_mm_mul_ps(_mm_cvtepi32_ps((__m128i) * (unsigned int*)v77), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B60970),
				_mm_andnot_ps((__m128)xmmword_140B60970, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 45:
		if (a4 < 4)
			goto LABEL_261;
		v78 = 0i64;
		do
		{
			v79 = *(_DWORD*)v7;
			v80 = 0i64;
			v7 += 4;
			if (v8 >= v11)
				goto LABEL_260;
			v78 += 4i64;
			v8 += 4;
			v80.m128_f32[0] = (float)(v79 & 0xFFFFFF) * 0.000000059604652;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v80, (__m128)0i64),
				_mm_unpacklo_ps(
					(__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)*(v7 - 1)),
					(__m128)0x3F800000u));
		} while (v78 < a4);
		result = 1;
		break;
	case 49:
		if (a4 < 2)
			goto LABEL_261;
		v81 = 0i64;
		v137.m128_u64[1] = 0i64;
		do
		{
			v82 = (unsigned __int8)*v7;
			v7 += 2;
			if (v8 >= v11)
				goto LABEL_260;
			v81 += 2i64;
			v8 += 4;
			v137.m128_f32[1] = (float)(unsigned __int8)*(v7 - 1) * 0.0039215689;
			v137.m128_f32[0] = (float)v82 * 0.0039215689;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(v137, (__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		} while (v81 < a4);
		result = 1;
		break;
	case 50:
		if (a4 < 2)
			goto LABEL_261;
		v83 = 0i64;
		v138.m128_u64[1] = 0i64;
		do
		{
			v84 = (unsigned __int8)*v7;
			v7 += 2;
			if (v8 >= v11)
				goto LABEL_260;
			v83 += 2i64;
			v8 += 4;
			v138.m128_f32[1] = (float)(unsigned __int8)*(v7 - 1);
			v138.m128_f32[0] = (float)v84;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(v138, (__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		} while (v83 < a4);
		result = 1;
		break;
	case 51:
		if (a4 < 2)
			goto LABEL_261;
		v85 = 0i64;
		do
		{
			*(double*)v5.m128_u64 = sub_1402C25D0(v7);
			v7 += 2;
			if (v8 >= v11)
				goto LABEL_260;
			v85 += 2i64;
			v8 += 4;
			v5 = _mm_or_ps(
				_mm_and_ps(v5, (__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
			*((__m128*)v8 - 1) = v5;
		} while (v85 < v6);
		result = 1;
		break;
	case 52:
		if (a4 < 2)
			goto LABEL_261;
		v86 = 0i64;
		v139.m128_u64[1] = 0i64;
		do
		{
			v87 = *v7;
			v7 += 2;
			if (v8 >= v11)
				goto LABEL_260;
			v86 += 2i64;
			v8 += 4;
			v139.m128_f32[1] = (float)*(v7 - 1);
			v139.m128_f32[0] = (float)v87;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(v139, (__m128)xmmword_140B60980),
				_mm_andnot_ps((__m128)xmmword_140B60980, (__m128)xmmword_140B60900));
		} while (v86 < a4);
		result = 1;
		break;
	case 54:
		if (a4 < 2)
			goto LABEL_261;
		v88 = -a3;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v5.m128_f32[0] = sub_1402C24E0(*(_WORD*)v7);
			v7 += 2;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), (__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[v88] < v6);
		result = 1;
		break;
	case 55:
	case 56:
		if (a4 < 2)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v89 = *(unsigned __int16*)v7;
			v7 += 2;
			v8 += 4;
			v90 = (__m128)COERCE_UNSIGNED_INT((float)v89);
			v90.m128_f32[0] = v90.m128_f32[0] * 0.000015259022;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v90, (__m128)0i64), (__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 57:
		if (a4 < 2)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v91 = *(unsigned __int16*)v7;
			v7 += 2;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v91), (__m128)0i64),
				(__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 58:
		if (a4 < 2)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v92 = *(__int16*)v7;
			v7 += 2;
			v8 += 4;
			v93 = (__m128)COERCE_UNSIGNED_INT((float)v92);
			v93.m128_f32[0] = v93.m128_f32[0] * 0.000030518509;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v93, (__m128)0i64), (__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 59:
		if (a4 < 2)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v94 = *(__int16*)v7;
			v7 += 2;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v94), (__m128)0i64),
				(__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 61:
		if (!a4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v95 = (unsigned __int8)*v7++;
			v8 += 4;
			v96 = (__m128)COERCE_UNSIGNED_INT((float)v95);
			v96.m128_f32[0] = v96.m128_f32[0] * 0.0039215689;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v96, (__m128)0i64), (__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 62:
		if (!a4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v97 = (unsigned __int8)*v7++;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v97), (__m128)0i64),
				(__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 63:
		if (!a4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v98 = *v7++;
			v8 += 4;
			v99 = (__m128)COERCE_UNSIGNED_INT((float)v98);
			v99.m128_f32[0] = v99.m128_f32[0] * 0.0078740157;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v99, (__m128)0i64), (__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 64:
		if (!a4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v100 = *v7++;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v100), (__m128)0i64),
				(__m128)xmmword_140B7A4B0);
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 65:
		if (!a4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v101 = (unsigned __int8)*v7++;
			v8 += 4;
			v102 = (__m128)COERCE_UNSIGNED_INT((float)v101);
			v102.m128_f32[0] = v102.m128_f32[0] * 0.0039215689;
			*((__m128*)v8 - 1) = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, v102));
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 66:
		if (!a4)
			goto LABEL_261;
		do
		{
			v103 = 8i64;
			do
			{
				if (v8 >= v11)
					break;
				v104 = (((unsigned __int8)*v7 >> (v103 - 1)) & 1) != 0 ? (__m128)0x3F800000u : 0i64;
				v8 += 4;
				*((__m128*)v8 - 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v104, (__m128)0i64), (__m128)xmmword_140B7A4B0);
				--v103;
			} while (v103);
			++v7;
			--v6;
		} while (v6);
		result = 1;
		break;
	case 67:
		if (a4 < 4)
			goto LABEL_261;
		v105 = 0i64;
		LODWORD(v141) = ((*(_DWORD*)a3 >> 4) & 0xF800000) + 864026624;
		*(float*)&v140 = (float)(*(_DWORD*)a3 & 0x1FF) * v141;
		*((float*)&v140 + 1) = (float)((*(_DWORD*)a3 >> 9) & 0x1FF) * v141;
		*((float*)&v140 + 2) = (float)((*(_DWORD*)a3 >> 18) & 0x1FF) * v141;
		HIDWORD(v140) = 1065353216;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v105 += 4i64;
			*(_OWORD*)v8 = v140;
			v8 += 4;
		} while (v105 < a4);
		result = 1;
		break;
	case 68:
		if (a4 < 4)
			goto LABEL_261;
		for (i4 = 0i64; i4 < a4; i4 += 4i64)
		{
			v107 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v108 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(_mm_shuffle_ps(v107, v107, 0), (__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62740);
			if (v8 >= v11)
				goto LABEL_260;
			v109 = v8 + 4;
			v110 = _mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900);
			*((__m128*)v109 - 1) = _mm_or_ps(_mm_and_ps(v108, (__m128)xmmword_140B608C0), v110);
			if (v109 >= v11)
				goto LABEL_260;
			v8 = v109 + 4;
			*((__m128*)v8 - 1) = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v108, v108, 108), (__m128)xmmword_140B608C0), v110);
		}
		result = 1;
		break;
	case 69:
		if (a4 < 4)
			goto LABEL_261;
		for (i5 = 0i64; i5 < a4; i5 += 4i64)
		{
			v112 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v113 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(_mm_shuffle_ps(v112, v112, 0), (__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62740);
			if (v8 >= v11)
				goto LABEL_260;
			v114 = v8 + 4;
			v115 = _mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900);
			*((__m128*)v114 - 1) = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v113, v113, 177), (__m128)xmmword_140B608C0), v115);
			if (v114 >= v11)
				goto LABEL_260;
			v8 = v114 + 4;
			*((__m128*)v8 - 1) = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v113, v113, 57), (__m128)xmmword_140B608C0), v115);
		}
		result = 1;
		break;
	case 85:
		if (a4 < 2)
			goto LABEL_261;
		v116 = 0i64;
		v117 = (__m128)xmmword_140C58AB0;
		do
		{
			v118 = (__m128) * (unsigned int*)v7;
			v7 += 2;
			v119 = _mm_mul_ps(
				_mm_mul_ps(
					_mm_cvtepi32_ps((__m128i)_mm_and_ps(_mm_shuffle_ps(v118, v118, 0), (__m128)xmmword_140B60D90)),
					(__m128)xmmword_140B60DE0),
				v117);
			if (v8 >= v11)
				goto LABEL_260;
			v116 += 2i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(_mm_shuffle_ps(v119, v119, 198), (__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		} while (v116 < a4);
		result = 1;
		break;
	case 86:
		if (a4 < 2)
			goto LABEL_261;
		v120 = 0i64;
		v121 = (__m128)xmmword_140C58AF0;
		do
		{
			v122 = (__m128) * (unsigned int*)v7;
			v7 += 2;
			v123 = _mm_mul_ps(
				_mm_mul_ps(
					_mm_cvtepi32_ps((__m128i)_mm_and_ps(_mm_shuffle_ps(v122, v122, 0), (__m128)xmmword_140B62680)),
					(__m128)xmmword_140B62730),
				v121);
			if (v8 >= v11)
				goto LABEL_260;
			v120 += 2i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v123, v123, 198);
		} while (v120 < a4);
		result = 1;
		break;
	case 87:
	case 91:
		if (a4 < 4)
			goto LABEL_261;
		for (i6 = 0i64; i6 < a4; i6 += 4i64)
		{
			v125 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v126 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(_mm_shuffle_ps(v125, v125, 0), (__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62740);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v126, v126, 198);
		}
		result = 1;
		break;
	case 88:
	case 93:
		if (a4 < 4)
			goto LABEL_261;
		for (i7 = 0i64; i7 < a4; i7 += 4i64)
		{
			v128 = (__m128) * (unsigned int*)v7;
			v7 += 4;
			v129 = _mm_mul_ps(
				_mm_add_ps(
					_mm_cvtepi32_ps((__m128i)_mm_xor_ps(
						_mm_and_ps(_mm_shuffle_ps(v128, v128, 0), (__m128)xmmword_140B60A40),
						(__m128)xmmword_140B60920)),
					(__m128)xmmword_140B60A30),
				(__m128)xmmword_140B62740);
			if (v8 >= v11)
				goto LABEL_260;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_or_ps(
				_mm_and_ps(_mm_shuffle_ps(v129, v129, 198), (__m128)xmmword_140B608C0),
				_mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900));
		}
		result = 1;
		break;
	case 89:
		if (a4 < 4)
			goto LABEL_261;
		do
		{
			if (v8 >= v11)
				goto LABEL_260;
			v49 = *(_DWORD*)v7;
			v7 += 4;
			v8 += 4;
			*(float*)&v135 = (float)(int)((v49 & 0x3FF) - 384) * 0.0019607844;
			*((float*)&v135 + 1) = (float)(int)(((v49 >> 10) & 0x3FF) - 384) * 0.0019607844;
			*((float*)&v135 + 2) = (float)(int)(((v49 >> 20) & 0x3FF) - 384) * 0.0019607844;
			*((float*)&v135 + 3) = (float)(v49 >> 30) * 0.33333334;
			*((_OWORD*)v8 - 1) = v135;
		} while ((unsigned __int64)&v7[-a3] < a4);
		result = 1;
		break;
	case 115:
		if (a4 < 2)
			goto LABEL_261;
		v130 = 0i64;
		v131 = (__m128)xmmword_140C58B00;
		do
		{
			v132 = (__m128) * (unsigned int*)v7;
			v7 += 2;
			v133 = _mm_mul_ps(
				_mm_mul_ps(
					_mm_cvtepi32_ps((__m128i)_mm_and_ps(_mm_shuffle_ps(v132, v132, 0), (__m128)xmmword_140B62640)),
					(__m128)xmmword_140B625A0),
				v131);
			if (v8 >= v11)
				break;
			v130 += 2i64;
			v8 += 4;
			*((__m128*)v8 - 1) = _mm_shuffle_ps(v133, v133, 198);
		} while (v130 < a4);
	LABEL_260:
		result = 1;
		break;
	default:
	LABEL_261:
		result = 0;
		break;
	}
	return result;
}
// 1402C3455: conditional instruction was optimized away because r9.8>=10u
// 1402C34C3: conditional instruction was optimized away because r9.8>=10u
// 1402C350D: conditional instruction was optimized away because r9.8>=Cu
// 1402C3587: conditional instruction was optimized away because r9.8>=Cu
// 1402C3620: conditional instruction was optimized away because r9.8>=Cu
// 1402C3698: conditional instruction was optimized away because r9.8>=8u
// 1402C372E: conditional instruction was optimized away because r9.8>=8u
// 1402C37A4: conditional instruction was optimized away because r9.8>=8u
// 1402C381E: conditional instruction was optimized away because r9.8>=8u
// 1402C38A1: conditional instruction was optimized away because r9.8>=8u
// 1402C3920: conditional instruction was optimized away because r9.8>=8u
// 1402C398F: conditional instruction was optimized away because r9.8>=8u
// 1402C3A27: conditional instruction was optimized away because r9.8>=8u
// 1402C3A90: conditional instruction was optimized away because r9.8>=8u
// 1402C3AEE: conditional instruction was optimized away because r9.8>=4u
// 1402C3B5F: conditional instruction was optimized away because r9.8>=4u
// 1402C3C31: conditional instruction was optimized away because r9.8>=4u
// 1402C3CAB: conditional instruction was optimized away because r9.8>=4u
// 1402C3D06: conditional instruction was optimized away because r9.8>=4u
// 1402C3D79: conditional instruction was optimized away because r9.8>=4u
// 1402C3DEA: conditional instruction was optimized away because r9.8>=4u
// 1402C3E6C: conditional instruction was optimized away because r9.8>=4u
// 1402C3EDF: conditional instruction was optimized away because r9.8>=4u
// 1402C3F5A: conditional instruction was optimized away because r9.8>=4u
// 1402C3FE7: conditional instruction was optimized away because r9.8>=4u
// 1402C4077: conditional instruction was optimized away because r9.8>=4u
// 1402C410B: conditional instruction was optimized away because r9.8>=4u
// 1402C4197: conditional instruction was optimized away because r9.8>=4u
// 1402C41F7: conditional instruction was optimized away because r9.8>=4u
// 1402C4286: conditional instruction was optimized away because r9.8>=4u
// 1402C42F1: conditional instruction was optimized away because r9.8>=4u
// 1402C4371: conditional instruction was optimized away because r9.8>=2u
// 1402C440E: conditional instruction was optimized away because r9.8>=2u
// 1402C4496: conditional instruction was optimized away because r9.8>=2u
// 1402C44F8: conditional instruction was optimized away because r9.8>=2u
// 1402C4575: conditional instruction was optimized away because r9.8>=2u
// 1402C45CB: conditional instruction was optimized away because r9.8>=2u
// 1402C4630: conditional instruction was optimized away because r9.8>=2u
// 1402C4689: conditional instruction was optimized away because r9.8>=2u
// 1402C46F0: conditional instruction was optimized away because r9.8>=2u
// 1402C4749: conditional instruction was optimized away because r9.8!=0
// 1402C47AF: conditional instruction was optimized away because r9.8!=0
// 1402C4808: conditional instruction was optimized away because r9.8!=0
// 1402C486F: conditional instruction was optimized away because r9.8!=0
// 1402C48C8: conditional instruction was optimized away because r9.8!=0
// 1402C492B: conditional instruction was optimized away because r9.8!=0
// 1402C4996: conditional instruction was optimized away because r9.8>=4u
// 1402C4A51: conditional instruction was optimized away because r9.8>=4u
// 1402C4B06: conditional instruction was optimized away because r9.8>=4u
// 1402C4BBA: conditional instruction was optimized away because r9.8>=2u
// 1402C4C48: conditional instruction was optimized away because r9.8>=2u
// 1402C4CBC: conditional instruction was optimized away because r9.8>=4u
// 1402C4D2F: conditional instruction was optimized away because r9.8>=4u
// 1402C4DB4: conditional instruction was optimized away because r9.8>=2u
// 1402C44C8: variable 'v5' is possibly undefined
// 140B60870: using guessed type __int128 xmmword_140B60870;
// 140B60890: using guessed type __int128 xmmword_140B60890;
// 140B608A0: using guessed type __int128 xmmword_140B608A0;
// 140B608C0: using guessed type __int128 xmmword_140B608C0;
// 140B608D0: using guessed type __int128 xmmword_140B608D0;
// 140B608F0: using guessed type __int128 xmmword_140B608F0;
// 140B60900: using guessed type __int128 xmmword_140B60900;
// 140B60910: using guessed type __int128 xmmword_140B60910;
// 140B60920: using guessed type __int128 xmmword_140B60920;
// 140B60930: using guessed type __int128 xmmword_140B60930;
// 140B60940: using guessed type __int128 xmmword_140B60940;
// 140B60950: using guessed type __int128 xmmword_140B60950;
// 140B60960: using guessed type __int128 xmmword_140B60960;
// 140B60970: using guessed type __int128 xmmword_140B60970;
// 140B60980: using guessed type __int128 xmmword_140B60980;
// 140B60990: using guessed type __int128 xmmword_140B60990;
// 140B609A0: using guessed type __int128 xmmword_140B609A0;
// 140B609B0: using guessed type __int128 xmmword_140B609B0;
// 140B609E0: using guessed type __int128 xmmword_140B609E0;
// 140B609F0: using guessed type __int128 xmmword_140B609F0;
// 140B60A00: using guessed type __int128 xmmword_140B60A00;
// 140B60A20: using guessed type __int128 xmmword_140B60A20;
// 140B60A30: using guessed type __int128 xmmword_140B60A30;
// 140B60A40: using guessed type __int128 xmmword_140B60A40;
// 140B60A50: using guessed type __int128 xmmword_140B60A50;
// 140B60A60: using guessed type __int128 xmmword_140B60A60;
// 140B60D90: using guessed type __int128 xmmword_140B60D90;
// 140B60DE0: using guessed type __int128 xmmword_140B60DE0;
// 140B625A0: using guessed type __int128 xmmword_140B625A0;
// 140B625D0: using guessed type __int128 xmmword_140B625D0;
// 140B625E0: using guessed type __int128 xmmword_140B625E0;
// 140B625F0: using guessed type __int128 xmmword_140B625F0;
// 140B62620: using guessed type __int128 xmmword_140B62620;
// 140B62640: using guessed type __int128 xmmword_140B62640;
// 140B62650: using guessed type __int128 xmmword_140B62650;
// 140B62670: using guessed type __int128 xmmword_140B62670;
// 140B62680: using guessed type __int128 xmmword_140B62680;
// 140B626C0: using guessed type __int128 xmmword_140B626C0;
// 140B626E0: using guessed type __int128 xmmword_140B626E0;
// 140B62720: using guessed type __int128 xmmword_140B62720;
// 140B62730: using guessed type __int128 xmmword_140B62730;
// 140B62740: using guessed type __int128 xmmword_140B62740;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C58AB0: using guessed type __int128 xmmword_140C58AB0;
// 140C58AF0: using guessed type __int128 xmmword_140C58AF0;
// 140C58B00: using guessed type __int128 xmmword_140C58B00;

