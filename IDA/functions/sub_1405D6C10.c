#include "../winhttp.h"

//----- (00000001405D6C10) ----------------------------------------------------
void __fastcall sub_1405D6C10(__int64 a1)
{
	__int128 v1; // xmm6
	__int128 v2; // xmm8
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // r12d
	float v10; // xmm0_4
	__int64 v11; // rcx
	int v12; // r14d
	float v13; // xmm15_4
	double v14; // xmm10_8
	float v15; // xmm13_4
	float v16; // xmm7_4
	float v17; // xmm14_4
	BOOL v18; // r13d
	int v19; // edx
	__int64 v20; // rax
	__m128* v21; // rdi
	__int64 v22; // rsi
	__m128 v23; // xmm12
	float v24; // xmm9_4
	__m128 v25; // xmm0
	__m128 v26; // xmm8
	double v27; // xmm6_8
	float v28; // xmm7_4
	__m128 v29; // xmm8
	__m128 v30; // xmm3
	__m128 v31; // xmm2
	float v32; // xmm2_4
	__m128 v33; // xmm1
	__m128 v34; // xmm0
	unsigned __int64 v35; // rsi
	float v36; // xmm6_4
	__int64 v37; // rax
	__int64 v38; // rdi
	__int64 v39; // rax
	__m128 v40; // xmm12
	double v41; // xmm6_8
	float v42; // xmm7_4
	__m128 v43; // xmm0
	__m128 v44; // xmm4
	__m128 v45; // xmm5
	__m128 v46; // xmm3
	float v47; // xmm1_4
	__m128 v48; // xmm0
	__m128 v49; // xmm6
	__m128 v50; // xmm7
	__m128 v51; // xmm0
	__m128 v52; // xmm1
	__m128 v53; // xmm4
	__m128 v54; // xmm0
	__m128 v55; // xmm8
	__m128 v56; // xmm3
	float v57; // xmm1_4
	unsigned __int64 v58; // rsi
	float v59; // xmm6_4
	__int64 v60; // rax
	__int64 v61; // rdi
	float v62; // xmm9_4
	__int64 v63; // rax
	__m128 v64; // xmm6
	__m128 v65; // xmm8
	__m128 v66; // xmm5
	__m128 v67; // xmm4
	float v68; // xmm1_4
	__m128* v69; // rax
	__m128 v70; // xmm5
	__m128 v71; // xmm1
	__m128 v72; // xmm3
	__m128 v73; // xmm4
	float v74; // xmm1_4
	__m128 v75; // xmm8
	__m128 v76; // xmm3
	__m128 v77; // xmm4
	float v78; // xmm1_4
	__m128 v79; // xmm4
	__m128 v80; // xmm3
	__m128 v81; // xmm5
	float v82; // xmm1_4
	__m128 v83; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v84; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v85; // [rsp+70h] [rbp-90h]
	__m128 v86; // [rsp+80h] [rbp-80h]
	__m128 v87; // [rsp+A0h] [rbp-60h]
	__int128 v88; // [rsp+B0h] [rbp-50h]
	__int128 v89; // [rsp+130h] [rbp+30h]
	__int128 v90; // [rsp+150h] [rbp+50h]
	float v91; // [rsp+1A0h] [rbp+A0h]
	signed int v92; // [rsp+1A8h] [rbp+A8h]

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (!v4)
		return;
	v5 = qword_140C65898;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		goto LABEL_11;
	v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 192));
	if (!v7 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7))
		goto LABEL_10;
	v5 = qword_140C65898;
	if (v4 != *(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_11;
	if (!*(_DWORD*)(sub_14039DFB0() + 3408) || sub_14039DEF0(qword_140C65898))
	{
	LABEL_10:
		v5 = qword_140C65898;
		goto LABEL_11;
	}
	v5 = qword_140C65898;
	if (!*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 196i64))
	{
		v4 = sub_14039DFB0();
		goto LABEL_13;
	}
LABEL_11:
	if (v4 != *(_QWORD*)(v5 + 25744) || !*(_DWORD*)(v4 + 3408))
		return;
LABEL_13:
	v8 = *(_QWORD*)(a1 + 176);
	v9 = *(_DWORD*)(v8 + 64);
	v10 = sub_1401AE760(*(float*)(v8 + 68), *(float*)(v8 + 72));
	v11 = *(_QWORD*)(a1 + 176);
	v12 = *(_DWORD*)(v11 + 84);
	v13 = v10;
	*(_QWORD*)&v14 = *(unsigned int*)(v11 + 88);
	v15 = *(float*)(v11 + 80);
	v16 = *(float*)(v11 + 92);
	v92 = *(_DWORD*)(v11 + 76);
	v17 = (float)v92 * 0.001;
	v91 = *(float*)(v11 + 96);
	if (*(float*)&v14 == 0.0)
	{
		HIDWORD(v14) = 0;
		*(float*)&v14 = (float)((float)(v15 * 0.125) * v17) * v17;
	}
	else
	{
		v15 = (float)(*(float*)&v14 * 8.0) / (float)(v17 * v17);
	}
	if (*(float*)&v14 < 2.0)
		*(_QWORD*)&v14 = 0x40000000i64;
	v18 = v15 != 0.0 || (v12 & 0x10) != 0 || v9 == 10;
	if ((v12 & 1) != 0)
		v19 = *(_DWORD*)(a1 + 88);
	else
		v19 = *(_DWORD*)(*(_QWORD*)(a1 + 80) + 344i64);
	v20 = sub_1403D90D0(qword_140C65898, v19);
	v21 = (__m128*)v20;
	if (!v20)
		goto LABEL_33;
	v22 = qword_140C65898;
	if (v20 == *(_QWORD*)(qword_140C65898 + 120))
	{
		if (!sub_14039DFB0() || !*(_DWORD*)(sub_14039DFB0() + 3408) || sub_14039DEF0(qword_140C65898))
			goto LABEL_33;
		v22 = qword_140C65898;
		if (!*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 196i64))
		{
			v21 = (__m128*)sub_14039DFB0();
		LABEL_33:
			v22 = qword_140C65898;
		}
	}
	v23 = *(__m128*)(v4 + 4576);
	v24 = 0.0;
	v83 = v23;
	v25 = *(__m128*)(v4 + 4416);
	v85 = v23;
	v84 = v25;
	v90 = v1;
	v89 = v2;
	switch (v9)
	{
	case 0:
	case 3:
	case 11:
		if (v21)
		{
			if (v21 != (__m128*)v4)
			{
				v30 = _mm_sub_ps(v21[286], *(__m128*)(v4 + 4576));
				v31 = _mm_mul_ps(v30, v30);
				v32 = (float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
					+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
				if (v32 >= (float)(v13 * v13))
				{
					v33 = 0i64;
					v33.m128_f32[0] = 1.0 / fsqrt(v32);
					v34 = v33;
					v34.m128_f32[0] = (float)((float)((float)((float)(v33.m128_f32[0] * v32) * v33.m128_f32[0]) - 3.0)
						* (float)(v33.m128_f32[0] * -0.5))
						* v13;
					v83 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v30), v23);
				}
				else
				{
					v83 = v21[286];
				}
				v35 = v21[208].m128_u64[1];
				if (v35)
				{
					v36 = sub_14047A940(v21) * *(float*)(v35 + 140);
				}
				else
				{
					v37 = sub_14022D500(v21[13].m128_u32[2]);
					if (v37)
						v36 = *(float*)(v37 + 40);
					else
						v36 = 0.0;
				}
				v38 = *(_QWORD*)(v4 + 3336);
				if (v38)
				{
					v24 = (float)(sub_14047A940((_QWORD*)v4) * *(float*)(v38 + 140)) + v36;
				}
				else
				{
					v39 = sub_14022D500(*(_DWORD*)(v4 + 216));
					if (v39)
						v24 = *(float*)(v39 + 40) + v36;
					else
						v24 = v36 + 0.0;
				}
				goto LABEL_74;
			}
			v25.m128_f32[0] = v13;
			v26 = _mm_mul_ps(v21[276], _mm_shuffle_ps(v25, v25, 0));
			if (v16 != 0.0)
			{
				*(_QWORD*)&v27 = (unsigned int)dword_140C3B438;
				*(float*)&v27 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v16;
				v28 = sub_1408FE3D0(v27);
				v86.m128_i32[3] = 0;
				v87.m128_u64[0] = LODWORD(v28);
				v86.m128_u64[0] = COERCE_UNSIGNED_INT(sub_1408FC950(v27));
				v87.m128_u64[1] = v86.m128_u64[0];
				v88 = xmmword_140C78440;
				v86.m128_f32[2] = -v28;
				v26 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v86),
						_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), (__m128)xmmword_140B7A4B0)),
					_mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v87));
			}
			v29 = _mm_add_ps(v26, v23);
			v83 = v29;
			break;
		}
		return;
	case 1:
	case 4:
	case 12:
		if (v21)
		{
			if (v21 == (__m128*)v4)
			{
				v25.m128_f32[0] = v13;
				v40 = _mm_mul_ps(v21[276], _mm_shuffle_ps(v25, v25, 0));
				if (v16 != 0.0)
				{
					*(_QWORD*)&v41 = (unsigned int)dword_140C3B438;
					*(float*)&v41 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v16;
					v42 = sub_1408FE3D0(v41);
					v86.m128_i32[3] = 0;
					v87.m128_u64[0] = LODWORD(v42);
					v87.m128_u64[1] = COERCE_UNSIGNED_INT(sub_1408FC950(v41));
					v86.m128_u64[0] = v87.m128_u64[1];
					v88 = xmmword_140C78440;
					v86.m128_f32[2] = -v42;
					v40 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v40, v40, 85), (__m128)xmmword_140B7A4B0),
							_mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v86)),
						_mm_mul_ps(_mm_shuffle_ps(v40, v40, 170), v87));
				}
				v29 = _mm_sub_ps(v85, v40);
				v83 = v29;
			}
			else
			{
				v43 = 0i64;
				v44 = (__m128)0x40400000u;
				v45 = _mm_sub_ps(v21[286], *(__m128*)(v4 + 4576));
				v46 = _mm_mul_ps(v45, v45);
				v46.m128_f32[0] = (float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0])
					+ _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
				v47 = 1.0 / fsqrt(v46.m128_f32[0]);
				v44.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v46.m128_f32[0] * v47) * v47)) * 0.5) * v47,
					0.0);
				v43.m128_f32[0] = v13;
				v29 = _mm_sub_ps(v23, _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v45), _mm_shuffle_ps(v43, v43, 0)));
				v83 = v29;
			}
			break;
		}
		return;
	case 2:
	case 5:
	case 13:
		v48 = 0i64;
		v48.m128_f32[0] = sub_1401AE760(0.0, 6.2831855);
		v49 = v48;
		v48.m128_f32[0] = sub_1408FE3D0(*(double*)v48.m128_u64);
		v50 = v48;
		v51 = v49;
		v51.m128_f32[0] = sub_1408FC950(*(double*)v49.m128_u64);
		v52 = 0i64;
		v52.m128_f32[0] = v13;
		v29 = _mm_add_ps(
			*(__m128*)(v4 + 4576),
			_mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v50, v51), (__m128)0i64), _mm_shuffle_ps(v52, v52, 0)));
		v83 = v29;
		goto LABEL_75;
	case 6:
	case 7:
	case 14:
		if ((*(_BYTE*)(v4 + 4208) & 1) != 0)
			return;
		v53 = *(__m128*)(v4 + 4384);
		v54 = 0i64;
		v55 = (__m128)0x40400000u;
		v56 = _mm_mul_ps(v53, v53);
		v56.m128_f32[0] = (float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
			+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0];
		v57 = 1.0 / fsqrt(v56.m128_f32[0]);
		v55.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v56.m128_f32[0] * v57) * v57)) * 0.5) * v57, 0.0);
		v54.m128_f32[0] = v13;
		v29 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v53), _mm_shuffle_ps(v54, v54, 0)), v23);
		v83 = v29;
		break;
	case 8:
	case 9:
	case 10:
	case 15:
		if (!v21)
			return;
		v83 = v21[286];
		v58 = v21[208].m128_u64[1];
		if (v58)
		{
			v59 = sub_14047A940(v21) * *(float*)(v58 + 140);
		}
		else
		{
			v60 = sub_14022D500(v21[13].m128_u32[2]);
			if (v60)
				v59 = *(float*)(v60 + 40);
			else
				v59 = 0.0;
		}
		v61 = *(_QWORD*)(v4 + 3336);
		if (v61)
		{
			v62 = sub_14047A940((_QWORD*)v4) * *(float*)(v61 + 140);
		}
		else
		{
			v63 = sub_14022D500(*(_DWORD*)(v4 + 216));
			if (v63)
				v62 = *(float*)(v63 + 40);
			else
				v62 = 0.0;
		}
		v24 = (float)(v62 + v59) + v13;
	LABEL_74:
		v29 = v83;
	LABEL_75:
		v22 = qword_140C65898;
		break;
	default:
		return;
	}
	if ((v12 & 2) == 0 && v24 != 0.0)
	{
		v64 = *(__m128*)(v4 + 4576);
		v65 = _mm_sub_ps(v29, v64);
		v66 = v65;
		v67 = _mm_mul_ps(v65, v65);
		v68 = fsqrt(
			(float)(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0])
			+ _mm_shuffle_ps(v67, v67, 170).m128_f32[0]);
		v65.m128_f32[0] = 1.0 - (float)(fminf(v24, v68) / v68);
		v29 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v66), v64);
		v83 = v29;
	}
	if ((v12 & 4) != 0)
	{
		v69 = (__m128*)sub_1403D90D0(v22, *(_DWORD*)(a1 + 88));
		if (v69)
		{
			if (v69 != (__m128*)v4)
			{
				v70 = _mm_sub_ps(v69[286], *(__m128*)(v4 + 4576));
				v71 = _mm_mul_ps(v70, v70);
				if ((float)((float)(v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 85).m128_f32[0])
					+ _mm_shuffle_ps(v71, v71, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8)
				{
					v72 = _mm_mul_ps(v70, v70);
					v72.m128_f32[0] = (float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
						+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0];
					v73 = (__m128)0x40400000u;
					v74 = 1.0 / fsqrt(v72.m128_f32[0]);
					v73.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v72.m128_f32[0] * v74) * v74)) * 0.5) * v74,
						0.0);
					v84 = _mm_mul_ps(_mm_shuffle_ps(v73, v73, 0), v70);
				}
			}
		}
		v22 = qword_140C65898;
	}
	else if ((v12 & 8) != 0)
	{
		if (v9 == 1 || v9 == 4 || v9 == 12)
		{
			v79 = _mm_sub_ps(*(__m128*)(v4 + 4576), v29);
			v80 = _mm_mul_ps(v79, v79);
			v80.m128_f32[0] = (float)(v80.m128_f32[0] + _mm_shuffle_ps(v80, v80, 85).m128_f32[0])
				+ _mm_shuffle_ps(v80, v80, 170).m128_f32[0];
			v81 = (__m128)0x40400000u;
			v82 = 1.0 / fsqrt(v80.m128_f32[0]);
			v81.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v80.m128_f32[0] * v82) * v82)) * 0.5) * v82, 0.0);
			v84 = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v79);
		}
		else
		{
			v75 = _mm_sub_ps(v29, *(__m128*)(v4 + 4576));
			v76 = _mm_mul_ps(v75, v75);
			v76.m128_f32[0] = (float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
				+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0];
			v77 = (__m128)0x40400000u;
			v78 = 1.0 / fsqrt(v76.m128_f32[0]);
			v77.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v76.m128_f32[0] * v78) * v78)) * 0.5) * v78, 0.0);
			v84 = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v75);
		}
	}
	switch (v9)
	{
	case 0:
	case 1:
	case 2:
	case 7:
	case 8:
		if (*(_QWORD*)(v22 + 25744))
			sub_14039FB30(v22, (__int64)&v83, v84.m128_f32, v14);
		break;
	case 3:
	case 4:
	case 5:
	case 6:
	case 9:
	case 10:
		if (*(_QWORD*)(v22 + 25744))
			sub_14039FFF0(
				v22,
				(__int128*)&v83,
				v18,
				v92,
				LODWORD(v15),
				v84.m128_f32,
				SLODWORD(v14),
				(float)(v91 * 6.2831855) / v17,
				v12 & 0x20);
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		if (*(_QWORD*)(v22 + 25744))
			sub_1403A0670(v22, &v83, v18, v17, *(float*)&v14, v84.m128_f32);
		break;
	default:
		return;
	}
}
// 1405D6ED1: variable 'v1' is possibly undefined
// 1405D6EE8: variable 'v2' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1405D6C10: using guessed type __m128 var_110;

