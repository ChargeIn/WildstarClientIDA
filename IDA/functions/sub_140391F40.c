#include "../winhttp.h"

//----- (0000000140391F40) ----------------------------------------------------
__int64 __fastcall sub_140391F40(__m128* a1, __int64 a2, __m128* a3, __int32* a4, __m128* a5)
{
	__int64 result; // rax
	__int32 v7; // ecx
	int* v10; // rax
	__int16 v11; // bx
	int v12; // r13d
	__m128 v13; // xmm3
	unsigned __int64 v14; // rax
	__m128 v15; // xmm2
	__m128 v16; // xmm7
	float v17; // xmm8_4
	unsigned int v18; // xmm6_4
	float v19; // xmm4_4
	int v20; // xmm8_4
	__m128 v21; // xmm0
	__m128 v22; // xmm5
	__m128 v23; // xmm0
	__m128 v24; // xmm1
	__m128 v25; // xmm7
	__m128 v26; // xmm7
	float v27; // xmm9_4
	_WORD* v28; // r10
	__int16 v29; // di
	unsigned int v30; // edx
	unsigned int v31; // edx
	int v32; // xmm0_4
	unsigned int v33; // edx
	unsigned int v34; // edx
	__int64 v35; // rbx
	__int32 v36; // xmm0_4
	__int32 v37; // xmm1_4
	float v38; // xmm10_4
	_WORD* v39; // r10
	unsigned int v40; // edx
	unsigned int v41; // edx
	__int16 v42; // r15
	int v43; // xmm0_4
	unsigned int v44; // edx
	unsigned int v45; // edx
	float v46; // xmm9_4
	__int32 v47; // xmm0_4
	__int32 v48; // xmm2_4
	_WORD* v49; // r10
	unsigned int v50; // edx
	unsigned int v51; // edx
	int v52; // xmm0_4
	unsigned int v53; // edx
	unsigned int v54; // edx
	__int32 v55; // xmm0_4
	__int32 v56; // xmm2_4
	_WORD* v57; // r10
	unsigned int v58; // edx
	unsigned int v59; // edx
	unsigned int v60; // ecx
	int v61; // edx
	__m128 v62; // xmm4
	__m128 v63; // xmm1
	__m128 v64; // xmm0
	__m128 v65; // xmm6
	__m128 v66; // xmm2
	__m128 v67; // xmm0
	__m128 v68; // xmm5
	__m128 v69; // xmm3
	__m128 v70; // xmm8
	__m128 v71; // xmm10
	__int32* v72; // r9
	float v73; // xmm7_4
	_WORD* v74; // r10
	__m128 v75; // xmm2
	__m128 v76; // xmm3
	__m128 v77; // xmm4
	__m128 v78; // xmm1
	__m128 v79; // xmm6
	_WORD* v80; // rax
	int v81; // ebx
	_WORD* v82; // r10
	_WORD* v83; // r10
	__m128 v84; // xmm2
	__m128 v85; // xmm3
	__m128 v86; // xmm4
	__m128 v87; // xmm6
	__m128 v88; // xmm1
	_WORD* v89; // r10
	float v90; // xmm7_4
	_WORD* v91; // r10
	__m128 v92; // xmm2
	__m128 v93; // xmm3
	__m128 v94; // xmm4
	__m128 v95; // xmm6
	__m128 v96; // xmm1
	_WORD* v97; // r10
	_WORD* v98; // r10
	__m128 v99; // xmm2
	__m128 v100; // xmm3
	__m128 v101; // xmm4
	__m128 v102; // xmm6
	__m128 v103; // xmm1
	__int16 v104; // cx
	_WORD* v105; // r10
	int v106; // [rsp+28h] [rbp-71h] BYREF
	int v107; // [rsp+2Ch] [rbp-6Dh] BYREF
	__int16 v108; // [rsp+30h] [rbp-69h] BYREF
	__int16 v109; // [rsp+32h] [rbp-67h] BYREF
	__int16 v110; // [rsp+34h] [rbp-65h] BYREF
	__int16 v111; // [rsp+36h] [rbp-63h] BYREF
	__int16 v112; // [rsp+38h] [rbp-61h] BYREF
	__int16 v113; // [rsp+3Ah] [rbp-5Fh] BYREF
	__int16 v114; // [rsp+3Ch] [rbp-5Dh] BYREF
	__int16 v115; // [rsp+3Eh] [rbp-5Bh] BYREF
	__int16 v116; // [rsp+40h] [rbp-59h] BYREF
	__int16 v117; // [rsp+42h] [rbp-57h] BYREF
	__int16 v118; // [rsp+44h] [rbp-55h] BYREF
	__int16 v119; // [rsp+46h] [rbp-53h] BYREF
	__int16 v120; // [rsp+48h] [rbp-51h] BYREF
	__int16 v121[7]; // [rsp+4Ah] [rbp-4Fh] BYREF
	__m128 v122; // [rsp+58h] [rbp-41h] BYREF
	__m128 v123; // [rsp+68h] [rbp-31h]
	void* retaddr; // [rsp+F0h] [rbp+57h] BYREF
	unsigned int v125; // [rsp+F8h] [rbp+5Fh] BYREF

	result = (__int64)&retaddr;
	v7 = a1->m128_i32[0];
	if (v7)
	{
		if (v7 != 1)
			return result;
		v10 = &dword_140C7974C;
		if (!a1[3].m128_i32[1])
			v10 = &a1[11].m128_i32[3];
		v11 = *((_WORD*)v10 + 2);
		v12 = *v10;
		v13 = (__m128)a1[1].m128_u32[0];
		v14 = a1[9].m128_u64[0];
		v15 = (__m128)a1[1].m128_u32[2];
		v16 = *a3;
		v17 = a1[11].m128_f32[2];
		v18 = 1065353216;
		LOWORD(v125) = v11;
		v19 = *(float*)(v14 + 5508);
		*(float*)&v20 = v17 * a1[3].m128_f32[2];
		v13.m128_f32[0] = (float)(v13.m128_f32[0] - a5->m128_f32[0]) * v19;
		v15.m128_f32[0] = (float)(v15.m128_f32[0] - a5->m128_f32[1]) * v19;
		v21 = *a5;
		v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0i64));
		v21.m128_f32[0] = v19;
		v23 = _mm_shuffle_ps(v21, v21, 0);
		v24 = _mm_mul_ps(_mm_sub_ps(a3[1], *a5), v23);
		v25 = _mm_mul_ps(_mm_sub_ps(v16, *a5), v23);
		v23.m128_i32[0] = *a4;
		v26 = _mm_sub_ps(v25, v22);
		v123 = _mm_sub_ps(v24, v22);
		v24.m128_i32[0] = a4[1];
		*(_DWORD*)a2 = v23.m128_i32[0];
		LODWORD(v27) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
		*(_DWORD*)(a2 + 12) = 1065353216;
		*(_DWORD*)(a2 + 4) = v24.m128_i32[0];
		*(_DWORD*)(a2 + 8) = 1065353216;
		sub_1401C96D0(&v112, v27);
		LOWORD(v106) = *sub_1401C96D0(&v111, v26.m128_f32[0]);
		HIWORD(v106) = *v28;
		*(_DWORD*)(a2 + 16) = v106;
		sub_140325540((_WORD*)(a2 + 20), (unsigned int*)&a1[11]);
		v29 = 0;
		v107 = v20;
		v30 = v20 & 0x7FFFFFFF;
		if ((v20 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v30 > 0x387FEFFF)
			{
				if (v30 > 0x47FFEFFF)
					LOWORD(v31) = 17407;
				else
					v31 = (v30 - 939520000) >> 13;
			}
			else
			{
				v31 = (((v20 & 0x7FFFFF | 0x800000u) >> (113 - (v30 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v31) = 0;
		}
		*(_WORD*)(a2 + 22) = HIWORD(v20) & 0x8000 | v31;
		*(_DWORD*)(a2 + 24) = v12;
		*(_WORD*)(a2 + 28) = v11;
		if (a1[3].m128_i32[1])
			v32 = 1065353216;
		else
			v32 = 0;
		v107 = v32;
		v33 = v32 & 0x7FFFFFFF;
		if ((v32 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v33 > 0x387FEFFF)
			{
				if (v33 > 0x47FFEFFF)
					LOWORD(v34) = 17407;
				else
					v34 = (v33 - 939520000) >> 13;
			}
			else
			{
				v34 = (((v32 & 0x7FFFFF | 0x800000u) >> (113 - (v33 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v34) = 0;
		}
		v35 = a2 + 32;
		*(_WORD*)(a2 + 30) = HIWORD(v32) & 0x8000 | v34;
		v36 = a4[4];
		v37 = a4[1];
		*(_DWORD*)(a2 + 44) = 1065353216;
		*(_DWORD*)(a2 + 32) = v36;
		*(_DWORD*)(a2 + 36) = v37;
		*(_DWORD*)(a2 + 40) = 1065353216;
		sub_1401C96D0(&v114, v27);
		v38 = v123.m128_f32[0];
		LOWORD(v106) = *sub_1401C96D0(&v113, v123.m128_f32[0]);
		HIWORD(v106) = *v39;
		*(_DWORD*)(a2 + 48) = v106;
		sub_140325540((_WORD*)(a2 + 52), (unsigned int*)&a1[11]);
		v107 = v20;
		v40 = v20 & 0x7FFFFFFF;
		if ((v20 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v40 > 0x387FEFFF)
			{
				if (v40 > 0x47FFEFFF)
					LOWORD(v41) = 17407;
				else
					v41 = (v40 - 939520000) >> 13;
			}
			else
			{
				v41 = (((v20 & 0x7FFFFF | 0x800000u) >> (113 - (v40 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v41) = 0;
		}
		v42 = v125;
		*(_WORD*)(v35 + 22) = HIWORD(v20) & 0x8000 | v41;
		*(_DWORD*)(v35 + 24) = v12;
		*(_WORD*)(v35 + 28) = v42;
		if (a1[3].m128_i32[1])
			v43 = 1065353216;
		else
			v43 = 0;
		v125 = v43;
		v44 = v43 & 0x7FFFFFFF;
		if ((v43 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v44 > 0x387FEFFF)
			{
				if (v44 > 0x47FFEFFF)
					LOWORD(v45) = 17407;
				else
					v45 = (v44 - 939520000) >> 13;
			}
			else
			{
				v45 = (((v43 & 0x7FFFFF | 0x800000u) >> (113 - (v44 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v45) = 0;
		}
		v46 = v123.m128_f32[1];
		*(_WORD*)(v35 + 30) = HIWORD(v43) & 0x8000 | v45;
		v47 = *a4;
		v48 = a4[5];
		*(_DWORD*)(v35 + 44) = 1065353216;
		*(_DWORD*)(v35 + 32) = v47;
		*(_DWORD*)(v35 + 36) = v48;
		*(_DWORD*)(v35 + 40) = 1065353216;
		sub_1401C96D0(&v125, v46);
		LOWORD(v106) = *sub_1401C96D0(&v108, v26.m128_f32[0]);
		HIWORD(v106) = *v49;
		*(_DWORD*)(v35 + 48) = v106;
		sub_140325540((_WORD*)(v35 + 52), (unsigned int*)&a1[11]);
		v107 = v20;
		v50 = v20 & 0x7FFFFFFF;
		if ((v20 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v50 > 0x387FEFFF)
			{
				if (v50 > 0x47FFEFFF)
					LOWORD(v51) = 17407;
				else
					v51 = (v50 - 939520000) >> 13;
			}
			else
			{
				v51 = (((v20 & 0x7FFFFF | 0x800000u) >> (113 - (v50 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v51) = 0;
		}
		*(_WORD*)(v35 + 54) = HIWORD(v20) & 0x8000 | v51;
		*(_DWORD*)(v35 + 56) = v12;
		*(_WORD*)(v35 + 60) = v42;
		if (a1[3].m128_i32[1])
			v52 = 1065353216;
		else
			v52 = 0;
		v107 = v52;
		v53 = v52 & 0x7FFFFFFF;
		if ((v52 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v53 > 0x387FEFFF)
			{
				if (v53 > 0x47FFEFFF)
					LOWORD(v54) = 17407;
				else
					v54 = (v53 - 939520000) >> 13;
			}
			else
			{
				v54 = (((v52 & 0x7FFFFF | 0x800000u) >> (113 - (v53 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v54) = 0;
		}
		*(_WORD*)(v35 + 62) = HIWORD(v52) & 0x8000 | v54;
		v55 = a4[4];
		v56 = a4[5];
		*(_DWORD*)(v35 + 76) = 1065353216;
		*(_DWORD*)(v35 + 64) = v55;
		*(_DWORD*)(v35 + 68) = v56;
		*(_DWORD*)(v35 + 72) = 1065353216;
		sub_1401C96D0(&v109, v46);
		LOWORD(v106) = *sub_1401C96D0(&v110, v38);
		HIWORD(v106) = *v57;
		*(_DWORD*)(v35 + 80) = v106;
		result = sub_140325540((_WORD*)(v35 + 84), (unsigned int*)&a1[11]);
		v125 = v20;
		v58 = v20 & 0x7FFFFFFF;
		if ((v20 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v58 > 0x387FEFFF)
			{
				if (v58 > 0x47FFEFFF)
					LOWORD(v59) = 17407;
				else
					v59 = (v58 - 939520000) >> 13;
			}
			else
			{
				result = v58 >> 23;
				v59 = (((v20 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v59) = 0;
		}
		*(_WORD*)(v35 + 86) = HIWORD(v20) & 0x8000 | v59;
		*(_DWORD*)(v35 + 88) = v12;
		*(_WORD*)(v35 + 92) = v42;
		if (!a1[3].m128_i32[1])
			v18 = 0;
		v125 = v18;
		v60 = v18 & 0x7FFFFFFF;
		v61 = HIWORD(v18) & 0x8000;
		if ((v18 & 0x7FFFFFFF) >= 0x33800000)
		{
			if (v60 <= 0x387FEFFF)
			{
				result = v60 >> 23;
				*(_WORD*)(v35 + 94) = v61 | ((((v18 & 0x7FFFFF | 0x800000) >> (113 - result)) + 4096) >> 13);
				return result;
			}
			if (v60 <= 0x47FFEFFF)
			{
				*(_WORD*)(v35 + 94) = v61 | ((v60 - 939520000) >> 13);
				return result;
			}
			v29 = 17407;
		}
		*(_WORD*)(v35 + 94) = v61 | v29;
	}
	else
	{
		v62 = (__m128)a1[1].m128_u32[0];
		v63 = (__m128)a1[1].m128_u32[2];
		v62.m128_f32[0] = v62.m128_f32[0] - a5->m128_f32[0];
		v63.m128_f32[0] = v63.m128_f32[0] - a5->m128_f32[1];
		v64 = *a5;
		v65 = (__m128) * (unsigned int*)(a1[9].m128_u64[0] + 5508);
		v66 = (__m128)a1[3].m128_u32[1];
		v64.m128_f32[0] = v65.m128_f32[0];
		v67 = _mm_shuffle_ps(v64, v64, 0);
		v68 = _mm_mul_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v62, (__m128)0i64), _mm_unpacklo_ps(v63, (__m128)0i64)),
			_mm_shuffle_ps(v65, v65, 0));
		v69 = (__m128)a1[3].m128_u32[2];
		v70 = _mm_sub_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a5), v67), v68);
		v71 = _mm_sub_ps(_mm_mul_ps(_mm_sub_ps(a3[1], *a5), v67), v68);
		v69.m128_f32[0] = v69.m128_f32[0] - v66.m128_f32[0];
		v66.m128_f32[0] = v66.m128_f32[0] + a1[3].m128_f32[2];
		v122 = _mm_mul_ps(
			_mm_shuffle_ps((__m128)a1[11].m128_u32[2], (__m128)a1[11].m128_u32[2], 0),
			_mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v69, (__m128)0i64), _mm_unpacklo_ps(v66, (__m128)0i64)),
				(__m128)xmmword_140B7AC50));
		sub_1401C95B0(&v107, (__m128i*) & v122);
		v63.m128_i32[0] = v72[1];
		v67.m128_i32[0] = *v72;
		*(_DWORD*)(a2 + 12) = 1065353216;
		v73 = _mm_shuffle_ps(v70, v70, 85).m128_f32[0];
		*(_DWORD*)a2 = v67.m128_i32[0];
		*(_DWORD*)(a2 + 4) = v63.m128_i32[0];
		*(_DWORD*)(a2 + 8) = 1065353216;
		sub_1401C96D0(&v125, v73);
		LOWORD(v106) = *sub_1401C96D0(&v110, v70.m128_f32[0]);
		HIWORD(v106) = *v74;
		*(_DWORD*)(a2 + 16) = v106;
		v75 = (__m128)a1[10].m128_u32[3];
		v76 = v75;
		v75.m128_f32[0] = v75.m128_f32[0] * v73;
		v76.m128_f32[0] = v76.m128_f32[0] * v70.m128_f32[0];
		v77 = _mm_unpacklo_ps(_mm_unpacklo_ps(v76, (__m128)0x3F800000u), _mm_unpacklo_ps(v75, (__m128)0i64));
		v78 = _mm_mul_ps(a1[8], v77);
		v79 = _mm_mul_ps(a1[7], v77);
		sub_1401C96D0(
			&v109,
			(float)(v78.m128_f32[0] + _mm_shuffle_ps(v78, v78, 85).m128_f32[0]) + _mm_shuffle_ps(v78, v78, 170).m128_f32[0]);
		v80 = sub_1401C96D0(
			&v108,
			(float)(v79.m128_f32[0] + _mm_shuffle_ps(v79, v79, 85).m128_f32[0])
			+ _mm_shuffle_ps(v79, v79, 170).m128_f32[0]);
		v81 = v107;
		LOWORD(v106) = *v80;
		HIWORD(v106) = *v82;
		*(_DWORD*)(a2 + 20) = v106;
		*(_DWORD*)(a2 + 24) = v81;
		*(_DWORD*)(a2 + 28) = a1[11].m128_i32[3];
		*(_WORD*)(a2 + 32) = a1[12].m128_i16[0];
		sub_140325540((_WORD*)(a2 + 34), (unsigned int*)&a1[11]);
		v78.m128_i32[0] = a4[1];
		*(_DWORD*)(a2 + 36) = a4[4];
		*(_DWORD*)(a2 + 40) = v78.m128_i32[0];
		*(_DWORD*)(a2 + 48) = 1065353216;
		*(_DWORD*)(a2 + 44) = 1065353216;
		sub_1401C96D0(&v113, v73);
		LOWORD(v106) = *sub_1401C96D0(&v114, v71.m128_f32[0]);
		HIWORD(v106) = *v83;
		*(_DWORD*)(a2 + 52) = v106;
		v84 = (__m128)a1[10].m128_u32[3];
		v85 = v84;
		v84.m128_f32[0] = v84.m128_f32[0] * v73;
		v85.m128_f32[0] = v85.m128_f32[0] * v71.m128_f32[0];
		v86 = _mm_unpacklo_ps(_mm_unpacklo_ps(v85, (__m128)0x3F800000u), _mm_unpacklo_ps(v84, (__m128)0i64));
		v87 = _mm_mul_ps(a1[7], v86);
		v88 = _mm_mul_ps(a1[8], v86);
		sub_1401C96D0(
			&v111,
			(float)(v88.m128_f32[0] + _mm_shuffle_ps(v88, v88, 85).m128_f32[0]) + _mm_shuffle_ps(v88, v88, 170).m128_f32[0]);
		LOWORD(v106) = *sub_1401C96D0(
			&v112,
			(float)(v87.m128_f32[0] + _mm_shuffle_ps(v87, v87, 85).m128_f32[0])
			+ _mm_shuffle_ps(v87, v87, 170).m128_f32[0]);
		HIWORD(v106) = *v89;
		*(_DWORD*)(a2 + 56) = v106;
		*(_DWORD*)(a2 + 60) = v81;
		*(_DWORD*)(a2 + 64) = a1[11].m128_i32[3];
		*(_WORD*)(a2 + 68) = a1[12].m128_i16[0];
		sub_140325540((_WORD*)(a2 + 70), (unsigned int*)&a1[11]);
		v88.m128_i32[0] = a4[5];
		v90 = _mm_shuffle_ps(v71, v71, 85).m128_f32[0];
		*(_DWORD*)(a2 + 72) = *a4;
		*(_DWORD*)(a2 + 76) = v88.m128_i32[0];
		*(_DWORD*)(a2 + 84) = 1065353216;
		*(_DWORD*)(a2 + 80) = 1065353216;
		sub_1401C96D0(&v118, v90);
		LOWORD(v106) = *sub_1401C96D0(&v115, v70.m128_f32[0]);
		HIWORD(v106) = *v91;
		*(_DWORD*)(a2 + 88) = v106;
		v92 = (__m128)a1[10].m128_u32[3];
		v93 = v92;
		v92.m128_f32[0] = v92.m128_f32[0] * v90;
		v93.m128_f32[0] = v93.m128_f32[0] * v70.m128_f32[0];
		v94 = _mm_unpacklo_ps(_mm_unpacklo_ps(v93, (__m128)0x3F800000u), _mm_unpacklo_ps(v92, (__m128)0i64));
		v95 = _mm_mul_ps(a1[7], v94);
		v96 = _mm_mul_ps(a1[8], v94);
		sub_1401C96D0(
			&v120,
			(float)(v96.m128_f32[0] + _mm_shuffle_ps(v96, v96, 85).m128_f32[0]) + _mm_shuffle_ps(v96, v96, 170).m128_f32[0]);
		LOWORD(v106) = *sub_1401C96D0(
			&v117,
			(float)(v95.m128_f32[0] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0])
			+ _mm_shuffle_ps(v95, v95, 170).m128_f32[0]);
		HIWORD(v106) = *v97;
		*(_DWORD*)(a2 + 92) = v106;
		*(_DWORD*)(a2 + 96) = v81;
		*(_DWORD*)(a2 + 100) = a1[11].m128_i32[3];
		*(_WORD*)(a2 + 104) = a1[12].m128_i16[0];
		sub_140325540((_WORD*)(a2 + 106), (unsigned int*)&a1[11]);
		v96.m128_i32[0] = a4[5];
		*(_DWORD*)(a2 + 108) = a4[4];
		*(_DWORD*)(a2 + 112) = v96.m128_i32[0];
		*(_DWORD*)(a2 + 120) = 1065353216;
		*(_DWORD*)(a2 + 116) = 1065353216;
		sub_1401C96D0(v121, v90);
		LOWORD(v106) = *sub_1401C96D0(&v119, v71.m128_f32[0]);
		HIWORD(v106) = *v98;
		*(_DWORD*)(a2 + 124) = v106;
		v99 = (__m128)a1[10].m128_u32[3];
		v100 = v99;
		v99.m128_f32[0] = v99.m128_f32[0] * v90;
		v100.m128_f32[0] = v100.m128_f32[0] * v71.m128_f32[0];
		v101 = _mm_unpacklo_ps(_mm_unpacklo_ps(v100, (__m128)0x3F800000u), _mm_unpacklo_ps(v99, (__m128)0i64));
		v102 = _mm_mul_ps(a1[7], v101);
		v103 = _mm_mul_ps(a1[8], v101);
		sub_1401C96D0(
			&v116,
			(float)(v103.m128_f32[0] + _mm_shuffle_ps(v103, v103, 85).m128_f32[0])
			+ _mm_shuffle_ps(v103, v103, 170).m128_f32[0]);
		v104 = *sub_1401C96D0(
			&v106,
			(float)(v102.m128_f32[0] + _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
			+ _mm_shuffle_ps(v102, v102, 170).m128_f32[0]);
		HIWORD(v107) = *v105;
		LOWORD(v107) = v104;
		*(_DWORD*)(a2 + 128) = v107;
		*(_DWORD*)(a2 + 132) = v81;
		*(_DWORD*)(a2 + 136) = a1[11].m128_i32[3];
		*(_WORD*)(a2 + 140) = a1[12].m128_i16[0];
		return sub_140325540((_WORD*)(a2 + 142), (unsigned int*)&a1[11]);
	}
	return result;
}
// 140392091: variable 'v28' is possibly undefined
// 1403921FC: variable 'v39' is possibly undefined
// 14039235F: variable 'v49' is possibly undefined
// 1403924B9: variable 'v57' is possibly undefined
// 140392698: variable 'v72' is possibly undefined
// 1403926FC: variable 'v74' is possibly undefined
// 14039279B: variable 'v82' is possibly undefined
// 140392821: variable 'v83' is possibly undefined
// 1403928B9: variable 'v89' is possibly undefined
// 140392947: variable 'v91' is possibly undefined
// 1403929D4: variable 'v97' is possibly undefined
// 140392A65: variable 'v98' is possibly undefined
// 140392AF5: variable 'v105' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C7974C: using guessed type int dword_140C7974C;
// 140391F40: using guessed type __m128 var_80;
// 140391F40: using guessed type __int16 var_9E[7];

