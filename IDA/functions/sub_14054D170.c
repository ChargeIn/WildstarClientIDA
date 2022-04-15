#include "../winhttp.h"

//----- (000000014054D170) ----------------------------------------------------
__int64 __fastcall sub_14054D170(__int64 a1, __int64 a2, float* a3, __int64 a4, __int64 a5)
{
	float v9; // xmm12_4
	__m128 v10; // xmm0
	bool v11; // zf
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__m128 v16; // xmm0
	__int64 result; // rax
	__m128 v18; // xmm7
	__m128 v19; // xmm3
	__m128 v20; // xmm8
	__m128 v21; // xmm6
	__m128 v22; // xmm0
	__int64 v23; // rbx
	__int64 v24; // rcx
	__m128 v25; // xmm8
	unsigned int v26; // edx
	__m128 v27; // xmm6
	__m128 v28; // xmm0
	__m128 v29; // xmm1
	__m128 v30; // xmm0
	__m128 v31; // xmm8
	__m128 v32; // xmm7
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	__m128 v35; // xmm0
	float v36; // xmm1_4
	__m128 v37; // xmm0
	float v38; // xmm6_4
	__m128 v39; // xmm10
	__m128 v40; // xmm11
	float v41; // xmm7_4
	float v42; // xmm9_4
	float v43; // xmm1_4
	float v44; // xmm8_4
	float v45; // xmm0_4
	float v46; // xmm0_4
	int v47; // xmm2_4
	__m128 v48; // xmm2
	float v49; // xmm1_4
	__m128 v50; // xmm0
	float v51; // xmm6_4
	__m128 v52; // xmm8
	__m128 v53; // xmm3
	__m128 v54; // xmm0
	float v55; // xmm1_4
	float v56; // xmm1_4
	__m128 v57; // xmm0
	__m128 v58; // xmm10
	__m128 v59; // xmm11
	__m128 v60; // xmm4
	__m128 v61; // xmm2
	__m128 v62; // xmm0
	float v63; // xmm1_4
	__m128 v64; // xmm6
	__m128 v65; // xmm0
	__m128 v66; // xmm7
	__m128 v67; // xmm0
	__m128 v68; // xmm3
	unsigned __int64 v69; // [rsp+20h] [rbp-A8h]

	v10 = (__m128)(unsigned int)dword_140C3B438;
	v9 = 0.0;
	v10.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(*(_QWORD*)(a1 + 48) + 64i64);
	*(_OWORD*)a4 = 0i64;
	v11 = (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x200) == 0;
	*a3 = v10.m128_f32[0];
	if (v11)
	{
		v12 = *(_QWORD*)(qword_140C65898 + 120);
		v13 = *(_QWORD*)(v12 + 3336);
		if (v13)
		{
			v9 = *(float*)(v13 + 140);
		}
		else
		{
			v14 = sub_14022D500(*(_DWORD*)(v12 + 216));
			if (v14)
				v9 = *(float*)(v14 + 40);
		}
	}
	switch (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 8i64))
	{
	case 0:
		v10.m128_f32[0] = sub_14054DA10(a1, 0, 1.0);
		v15 = a5;
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(_OWORD*)(a5 + 528) = 0i64;
		goto LABEL_8;
	case 1:
		v18 = 0i64;
		v18.m128_f32[0] = fmaxf(sub_14054DA10(a1, 0, -1.0), 0.0);
		v10.m128_f32[0] = sub_14054DA10(a1, 1u, 1.0);
		v15 = a5;
		v19 = (__m128)(unsigned int)dword_140C463A8;
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(__m128*)(a5 + 528) = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v18), _mm_unpacklo_ps(v19, (__m128)0i64));
		goto LABEL_8;
	case 2:
		v23 = a5;
		v24 = a1;
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(_OWORD*)(a5 + 528) = 0i64;
		goto LABEL_12;
	case 3:
		v23 = a5;
		v24 = a1;
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(_OWORD*)(a5 + 528) = 0i64;
		if (a2)
		{
			v10.m128_f32[0] = sub_14054DA10(a1, 0, 2.0);
			v25 = v10;
			v10.m128_f32[0] = sub_14054DA10(a1, 1u, 2.0);
			v26 = 2;
		}
		else
		{
		LABEL_12:
			v10.m128_f32[0] = sub_14054DA10(v24, 2u, 2.0);
			v25 = v10;
			v10.m128_f32[0] = sub_14054DA10(a1, 1u, 2.0);
			v26 = 0;
		}
		v27 = v10;
		v10.m128_f32[0] = sub_14054DA10(a1, v26, 2.0);
		result = 0i64;
		v28 = _mm_mul_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v10, v25), _mm_unpacklo_ps(v27, (__m128)0i64)),
			(__m128)xmmword_140B7AC50);
		*(__m128*)(v23 + 560) = v28;
		v29 = _mm_mul_ps(v28, v28);
		v30 = _mm_shuffle_ps(v29, v29, 85);
		v30.m128_f32[0] = fsqrt((float)(v29.m128_f32[0] + v30.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
		*(__m128*)(v23 + 544) = _mm_shuffle_ps(v30, v30, 0);
		break;
	case 4:
		v36 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * sub_14054DA10(a1, 2u, 0.0);
		v37 = (__m128) * (unsigned int*)(*(_QWORD*)(a1 + 48) + 12i64);
		v37.m128_f32[0] = v37.m128_f32[0] - v9;
		v39 = v37;
		v38 = fmaxf(0.0, fminf(v36, 6.2831855));
		v39.m128_f32[0] = fmaxf(v37.m128_f32[0], 0.0);
		v40 = 0i64;
		v40.m128_f32[0] = fmaxf(sub_14054DA10(a1, 1u, 1.0), v39.m128_f32[0]);
		if ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x200) == 0)
		{
			v41 = fmaxf(v40.m128_f32[0] - v9, v39.m128_f32[0] + v9);
			v42 = fmaxf(1.0, v41 + v9);
			if (v38 < 3.1415927)
				v43 = v38 * 0.5;
			else
				v43 = 3.1415927 - (float)(v38 * 0.5);
			v44 = fmaxf(v43, 0.0099999998);
			v45 = sub_1408FD8A4(v44);
			v46 = sub_140934E10((float)((float)(v45 * v41) + (float)(v9 * 2.0)) / v42);
			if ((dword_140DC33B4 & 1) != 0)
			{
				v47 = dword_140DC33B8;
			}
			else
			{
				dword_140DC33B4 |= 1u;
				*(float*)&v47 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 7.0;
				dword_140DC33B8 = v47;
			}
			v38 = v38 + (float)(fminf(*(float*)&v47, v46 - v44) * 2.0);
		}
		v15 = a5;
		v48 = _mm_unpacklo_ps((__m128)(unsigned int)dword_140C463A8, (__m128)0i64);
		*(float*)(a5 + 608) = v38;
		v10 = v40;
		*(__m128*)(a5 + 528) = _mm_unpacklo_ps(_mm_unpacklo_ps(v39, v39), v48);
	LABEL_8:
		v16 = _mm_shuffle_ps(v10, v10, 0);
		*(__m128*)(v15 + 560) = v16;
		*(__m128*)(v15 + 544) = v16;
		result = 0i64;
		break;
	case 5:
		v49 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * sub_14054DA10(a1, 2u, 0.0);
		v50 = (__m128)0x40C90FDBu;
		v51 = fmaxf(0.0, fminf(6.2831855 - v49, 6.2831855));
		v52 = 0i64;
		v52.m128_f32[0] = fmaxf(sub_14054DA10(a1, 0, -1.0), 0.0);
		v50.m128_f32[0] = sub_14054DA10(a1, 1u, 1.0);
		v53 = (__m128)(unsigned int)dword_140C463A8;
		v54 = _mm_shuffle_ps(v50, v50, 0);
		v55 = *a3;
		*(float*)(a5 + 608) = v51;
		*a3 = v55 + 3.1415927;
		*(__m128*)(a5 + 528) = _mm_unpacklo_ps(_mm_unpacklo_ps(v52, v52), _mm_unpacklo_ps(v53, (__m128)0i64));
		*(__m128*)(a5 + 560) = v54;
		*(__m128*)(a5 + 544) = v54;
		result = 0i64;
		break;
	case 6:
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(_OWORD*)(a5 + 528) = 0i64;
		v10.m128_f32[0] = sub_14054DA10(a1, 2u, 1.0);
		v20 = v10;
		v10.m128_f32[0] = sub_14054DA10(a1, 1u, 1.0);
		v21 = v10;
		v10.m128_f32[0] = sub_14054DA10(a1, 0, 1.0);
		result = 0i64;
		v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, v20), _mm_unpacklo_ps(v21, (__m128)0i64));
		*(__m128*)(a5 + 560) = v22;
		*(__m128*)(a5 + 544) = v22;
		break;
	case 7:
		*(_DWORD*)(a5 + 608) = 1086918619;
		*(_OWORD*)(a5 + 528) = 0i64;
		v10.m128_f32[0] = sub_14054DA10(a1, 2u, 1.0);
		v31 = v10;
		v10.m128_f32[0] = sub_14054DA10(a1, 1u, 2.0);
		v32 = v10;
		v10.m128_f32[0] = sub_14054DA10(a1, 0, 2.0);
		result = 0i64;
		v33 = _mm_mul_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v10, v31), _mm_unpacklo_ps(v32, (__m128)0i64)),
			(__m128)xmmword_140B7AC50);
		*(__m128*)(a5 + 560) = v33;
		v34 = _mm_mul_ps(v33, v33);
		v35 = _mm_shuffle_ps(v34, v34, 85);
		v35.m128_f32[0] = fsqrt((float)(v34.m128_f32[0] + v35.m128_f32[0]) + _mm_shuffle_ps(v34, v34, 170).m128_f32[0]);
		*(__m128*)(a5 + 544) = _mm_shuffle_ps(v35, v35, 0);
		*(float*)(a4 + 8) = -*(float*)(a5 + 568);
		break;
	case 8:
		v56 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * sub_14054DA10(a1, 2u, 0.0);
		v57 = (__m128) * (unsigned int*)(*(_QWORD*)(a1 + 48) + 12i64);
		v57.m128_f32[0] = v57.m128_f32[0] - v9;
		v58 = v57;
		v58.m128_f32[0] = fmaxf(v57.m128_f32[0], 0.0);
		v57.m128_f32[0] = sub_14054DA10(a1, 1u, 1.0);
		v59 = 0i64;
		v60 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 48) + 24i64),
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 48) + 32i64)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(a1 + 48) + 28i64), (__m128)0i64));
		v61 = (__m128)(unsigned int)dword_140C463A8;
		v59.m128_f32[0] = fmaxf(v57.m128_f32[0], v58.m128_f32[0]);
		*(float*)(a5 + 608) = fmaxf(0.0, fminf(v56, 6.2831855));
		v69 = v60.m128_u64[0];
		v62 = v59;
		v63 = *(float*)&dword_140C46468;
		*(__m128*)(a5 + 528) = _mm_unpacklo_ps(_mm_unpacklo_ps(v58, v58), _mm_unpacklo_ps(v61, (__m128)0i64));
		*(__m128*)(a5 + 544) = _mm_unpacklo_ps(_mm_unpacklo_ps(v59, v59), _mm_unpacklo_ps(v59, (__m128)0i64));
		if (_mm_shuffle_ps(v60, v60, 170).m128_f32[0] <= v63)
		{
			v64 = (__m128) * (unsigned int*)(a5 + 552);
		}
		else
		{
			v62.m128_f32[0] = sub_14054DA10(a1, 5u, 2.0);
			v63 = *(float*)&dword_140C46468;
			v64 = v62;
			v64.m128_f32[0] = v62.m128_f32[0] * 0.5;
		}
		v65 = (__m128)HIDWORD(v69);
		if (*((float*)&v69 + 1) <= v63)
		{
			v66 = (__m128) * (unsigned int*)(a5 + 548);
		}
		else
		{
			v65.m128_f32[0] = sub_14054DA10(a1, 4u, 2.0);
			v63 = *(float*)&dword_140C46468;
			v66 = v65;
			v66.m128_f32[0] = v65.m128_f32[0] * 0.5;
		}
		v67 = (__m128)(unsigned int)v69;
		if (*(float*)&v69 <= v63)
		{
			v68 = (__m128) * (unsigned int*)(a5 + 544);
		}
		else
		{
			v67.m128_f32[0] = sub_14054DA10(a1, 3u, 2.0);
			v68 = v67;
			v68.m128_f32[0] = v67.m128_f32[0] * 0.5;
		}
		result = 0i64;
		*(__m128*)(a5 + 560) = _mm_unpacklo_ps(_mm_unpacklo_ps(v68, v64), _mm_unpacklo_ps(v66, (__m128)0i64));
		break;
	default:
		result = 2147500037i64;
		break;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C463A8: using guessed type int dword_140C463A8;
// 140C46468: using guessed type int dword_140C46468;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC33B4: using guessed type int dword_140DC33B4;
// 140DC33B8: using guessed type int dword_140DC33B8;

