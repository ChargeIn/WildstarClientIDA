#include "../winhttp.h"

//----- (000000014017E490) ----------------------------------------------------
__int64 __fastcall sub_14017E490(__int64 a1, _WORD* a2)
{
	__int64 v2; // rsi
	__int64* v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // r15
	int* v8; // rax
	int v9; // r15d
	__int64 result; // rax
	int v11; // r14d
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdx
	__m128 v15; // xmm8
	unsigned int v16; // xmm12_4
	float v17; // xmm10_4
	float v18; // xmm0_4
	__m128 v19; // xmm11
	float v20; // xmm6_4
	float v21; // xmm6_4
	float v22; // xmm12_4
	float v23; // xmm1_4
	__m128 v24; // xmm6
	__m128 v25; // xmm11
	__m128* v26; // rax
	__int64 v27; // r8
	float v28; // xmm1_4
	__int64 v29; // rdx
	__m128 v30; // xmm0
	float v31; // xmm1_4
	float v32; // xmm8_4
	float v33; // xmm9_4
	float v34; // xmm10_4
	__m128 v35; // xmm4
	__int64 v36; // r8
	float v37; // xmm2_4
	__int64 v38; // rdx
	__m128 v39; // xmm0
	float v40; // xmm3_4
	float v41; // xmm5_4
	float v42; // xmm6_4
	float v43; // xmm7_4
	__m128 v44; // xmm3
	__int64 v45; // r8
	__m128 v46; // xmm2
	__m128 v47; // xmm1
	unsigned __int32 v48; // xmm0_4
	__m128 v49; // xmm2
	__m128 v50; // xmm11
	bool v51; // cc
	float v52; // xmm1_4
	__int64 v53; // rdx
	float v54; // xmm0_4
	__int64 v55; // r8
	float v56; // xmm2_4
	__int64 v57; // rdx
	float v58; // xmm0_4
	float v59; // xmm11_4
	__int64 v60; // rdi
	__int64 v61; // rdx
	__m128 v62; // [rsp+40h] [rbp-C0h]
	__int64* v63; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v64; // [rsp+60h] [rbp-A0h]
	__int64 v65[10]; // [rsp+70h] [rbp-90h] BYREF

	v2 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v63 = 0i64;
	if (a2 && *a2)
	{
		v7 = qword_140C65800;
		v8 = sub_14018B280(1616i64, 0);
		if (v8)
			v6 = sub_14030FE50((__int64)v8);
		v9 = sub_1403102B0(v6, v7);
		if (v9 < 0)
		{
			if (v6)
			{
				sub_14030FFF0(v6);
				sub_14018B900(v6, 0);
			}
			return (unsigned int)v9;
		}
		v11 = (*(__int64(__fastcall**)(__int64, _WORD*, __int64**, _QWORD))(*(_QWORD*)v6 + 40i64))(v6, a2, &v63, 0i64);
		if (v11 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			return (unsigned int)v11;
		}
		(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64*, __int64, __int64, int, int, _DWORD*), __int64))(*v63 + 648))(
			v63,
			sub_1401800B0,
			a1);
		sub_140180B70((_DWORD*)a1, v63);
		v5 = v63;
	}
	v12 = *(_QWORD*)(a1 + 2136);
	if (v12)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v12 + 8i64))(*(_QWORD*)(a1 + 2136));
		v5 = v63;
		*(_QWORD*)(a1 + 2136) = 0i64;
	}
	v13 = *(_QWORD*)(a1 + 2128);
	if (v13)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v13 + 8i64))(*(_QWORD*)(a1 + 2128));
		v5 = v63;
		*(_QWORD*)(a1 + 2128) = 0i64;
	}
	v14 = *(unsigned int*)(a1 + 2048);
	*(_QWORD*)(a1 + 2128) = v6;
	*(_QWORD*)(a1 + 2136) = v5;
	*(_QWORD*)(a1 + 1024) = 1i64;
	if (!(*(unsigned int(__fastcall**)(__int64*, __int64))(*v5 + 1056))(v5, v14)
		&& !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2136) + 1056i64))(
			*(_QWORD*)(a1 + 2136),
			*(unsigned int*)(a1 + 2052)))
	{
		v15 = (__m128) * (unsigned int*)((*(__int64 (**)(void))(**(_QWORD**)(a1 + 2136) + 1208i64))() + 48);
		v15.m128_f32[0] = fmaxf(v15.m128_f32[0], 2.0);
		*(float*)&v16 = (float)(v15.m128_f32[0] * 500.0) + 25.0;
		v17 = *(float*)&v16 * 0.000099999997;
		v18 = sub_140934E10(0.39269909);
		v62.m128_u64[0] = __PAIR64__(v16, *(float*)&v16 * 0.000099999997);
		*(_DWORD*)(a1 + 1964) = v16;
		*(_QWORD*)(a1 + 1060) = __PAIR64__(v16, *(float*)&v16 * 0.000099999997);
		v15.m128_f32[0] = v15.m128_f32[0] / v18;
		v19 = v15;
		v19.m128_f32[0] = fmaxf(v15.m128_f32[0], *(float*)&v16 * 0.000099999997);
		v20 = sub_1408FC950(COERCE_DOUBLE(1053364187i64));
		v21 = v20 / sub_1408FE3D0(COERCE_DOUBLE(1053364187i64));
		v22 = *(float*)&v16 / (float)((float)(*(float*)&v16 * 0.000099999997) - *(float*)&v16);
		v23 = v21 / *(float*)(a1 + 1056);
		*(float*)(a1 + 1240) = v22;
		*(float*)(a1 + 1220) = v21;
		*(_QWORD*)(a1 + 1204) = 0i64;
		*(_QWORD*)(a1 + 1212) = 0i64;
		*(_QWORD*)(a1 + 1224) = 0i64;
		*(_QWORD*)(a1 + 1232) = 0i64;
		*(_DWORD*)(a1 + 1244) = -1082130432;
		*(_QWORD*)(a1 + 1248) = 0i64;
		*(_DWORD*)(a1 + 1260) = 0;
		*(float*)(a1 + 1200) = v23;
		*(float*)(a1 + 1256) = v22 * v17;
		v24 = (__m128)xmmword_140C77870;
		v25 = _mm_add_ps((__m128)xmmword_140C77870, _mm_mul_ps((__m128)xmmword_140C77880, _mm_shuffle_ps(v19, v19, 0)));
		v26 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2136) + 1208i64))(*(_QWORD*)(a1 + 2136));
		v27 = 0i64;
		v64 = _mm_sub_ps(v25, v26[2]);
		v62 = _mm_mul_ps(v64, v64);
		LODWORD(v28) = _mm_shuffle_ps(v62, v62, 170).m128_u32[0];
		if (_mm_shuffle_ps(v62, v62, 85).m128_f32[0] > v62.m128_f32[0])
			v27 = 1i64;
		v29 = 1 - v27;
		if (v28 > v62.m128_f32[v27])
			v27 = 2i64;
		v30 = (__m128)v62.m128_u32[-v29 + 3 - v27];
		v30.m128_f32[0] = (float)(v30.m128_f32[0] + v62.m128_f32[v29]) + v62.m128_f32[v27];
		if (v30.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v35 = 0i64;
			v62 = 0i64;
			v34 = 0.0;
			v33 = 0.0;
			v32 = 0.0;
		}
		else
		{
			v31 = 1.0 / _mm_sqrt_ps(v30).m128_f32[0];
			v32 = v64.m128_f32[0] * v31;
			v33 = v64.m128_f32[1] * v31;
			v34 = v64.m128_f32[2] * v31;
			v62.m128_f32[0] = v64.m128_f32[0] * v31;
			v62.m128_f32[1] = v64.m128_f32[1] * v31;
			v62.m128_f32[2] = v64.m128_f32[2] * v31;
			v35 = v62;
		}
		v36 = 0i64;
		v64 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v35, v35, 210), _mm_shuffle_ps(v24, v24, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v35, v35, 201), _mm_shuffle_ps(v24, v24, 210)));
		v62 = _mm_mul_ps(v64, v64);
		LODWORD(v37) = _mm_shuffle_ps(v62, v62, 170).m128_u32[0];
		if (_mm_shuffle_ps(v62, v62, 85).m128_f32[0] > v62.m128_f32[0])
			v36 = 1i64;
		v38 = 1 - v36;
		if (v37 > v62.m128_f32[v36])
			v36 = 2i64;
		v39 = (__m128)v62.m128_u32[-v38 + 3 - v36];
		v39.m128_f32[0] = (float)(v39.m128_f32[0] + v62.m128_f32[v38]) + v62.m128_f32[v36];
		if (v39.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v44 = 0i64;
			v62 = 0i64;
			v43 = 0.0;
			v42 = 0.0;
			v41 = 0.0;
		}
		else
		{
			v40 = 1.0 / _mm_sqrt_ps(v39).m128_f32[0];
			v41 = v64.m128_f32[0] * v40;
			v42 = v64.m128_f32[1] * v40;
			v43 = v64.m128_f32[2] * v40;
			v62.m128_f32[0] = v64.m128_f32[0] * v40;
			v62.m128_f32[1] = v64.m128_f32[1] * v40;
			v62.m128_f32[2] = v64.m128_f32[2] * v40;
			v44 = v62;
		}
		v45 = 0i64;
		*(_DWORD*)(a1 + 1084) = 0;
		*(float*)(a1 + 1072) = v41;
		*(float*)(a1 + 1080) = v32;
		*(_DWORD*)(a1 + 1100) = 0;
		*(float*)(a1 + 1088) = v42;
		*(float*)(a1 + 1096) = v33;
		*(float*)(a1 + 1104) = v43;
		*(_DWORD*)(a1 + 1116) = 0;
		*(float*)(a1 + 1112) = v34;
		v46 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v44, v44, 210), _mm_shuffle_ps(v35, v35, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v44, v44, 201), _mm_shuffle_ps(v35, v35, 210)));
		*(_DWORD*)(a1 + 1076) = v46.m128_i32[0];
		v47 = _mm_mul_ps(v25, v44);
		v62 = v47;
		*(_DWORD*)(a1 + 1092) = _mm_shuffle_ps(v46, v46, 85).m128_u32[0];
		v48 = _mm_shuffle_ps(v46, v46, 170).m128_u32[0];
		v49 = _mm_mul_ps(v46, v25);
		v50 = _mm_mul_ps(v25, v35);
		*(_DWORD*)(a1 + 1108) = v48;
		v51 = _mm_shuffle_ps(v47, v47, 85).m128_f32[0] <= v47.m128_f32[0];
		LODWORD(v52) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
		if (!v51)
			v45 = 1i64;
		v53 = 1 - v45;
		if (v52 > v62.m128_f32[v45])
			v45 = 2i64;
		v54 = (float)(v62.m128_f32[-v53 + 3 - v45] + v62.m128_f32[v53]) + v62.m128_f32[v45];
		v62 = v49;
		v55 = 0i64;
		*(float*)(a1 + 1120) = -v54;
		v51 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0] <= v49.m128_f32[0];
		LODWORD(v56) = _mm_shuffle_ps(v49, v49, 170).m128_u32[0];
		if (!v51)
			v55 = 1i64;
		v57 = 1 - v55;
		if (v56 > v62.m128_f32[v55])
			v55 = 2i64;
		v58 = (float)(v62.m128_f32[-v57 + 3 - v55] + v62.m128_f32[v57]) + v62.m128_f32[v55];
		v62 = v50;
		*(float*)(a1 + 1124) = -v58;
		v51 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0] <= v50.m128_f32[0];
		LODWORD(v59) = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
		if (!v51)
			v2 = 1i64;
		v60 = 1 - v2;
		if (v59 > v62.m128_f32[v2])
			v2 = 2i64;
		*(_DWORD*)(a1 + 1132) = 1065353216;
		v65[0] = a1 + 1072;
		*(float*)(a1 + 1128) = -(float)((float)(v62.m128_f32[-v60 + 3 - v2] + v62.m128_f32[v60]) + v62.m128_f32[v2]);
		sub_1401AFC20(v65, (double*)(a1 + 1136));
		return 0i64;
	}
	if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2136) + 1056i64))(
		*(_QWORD*)(a1 + 2136),
		*(unsigned int*)(a1 + 2048)))
	{
		v61 = *(unsigned int*)(a1 + 2048);
	}
	else
	{
		v61 = *(unsigned int*)(a1 + 2052);
	}
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD**)(a1 + 2136) + 1064i64))(
		*(_QWORD*)(a1 + 2136),
		v61,
		a1 + 1060,
		0i64,
		a1 + 1060,
		a1 + 1072,
		a1 + 1136,
		a1 + 1200);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 1964) = *(_DWORD*)(a1 + 1064);
		return 0i64;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C65800: using guessed type __int64 qword_140C65800;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 14017E490: using guessed type __int64 var_F0[10];

