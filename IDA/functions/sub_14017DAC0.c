#include "../winhttp.h"

//----- (000000014017DAC0) ----------------------------------------------------
__int64 __fastcall sub_14017DAC0(__int64 a1, int* a2, int a3)
{
	__int64 v5; // rcx
	__m128 v6; // xmm8
	float v7; // xmm7_4
	float v8; // xmm10_4
	float v9; // xmm0_4
	__m128 v10; // xmm9
	float v11; // xmm1_4
	float v12; // xmm6_4
	__int64 v13; // rdi
	float v14; // xmm6_4
	float v15; // xmm7_4
	float v16; // xmm1_4
	__m128 v17; // xmm6
	__m128 v18; // xmm11
	__m128* v19; // rax
	__int64 v20; // r8
	float v21; // xmm1_4
	__int64 v22; // rdx
	__m128 v23; // xmm0
	float v24; // xmm1_4
	float v25; // xmm8_4
	float v26; // xmm9_4
	float v27; // xmm10_4
	__m128 v28; // xmm4
	__int64 v29; // r8
	float v30; // xmm2_4
	__int64 v31; // rdx
	__m128 v32; // xmm0
	float v33; // xmm3_4
	float v34; // xmm5_4
	float v35; // xmm6_4
	float v36; // xmm7_4
	__m128 v37; // xmm3
	__int64 v38; // r8
	__m128 v39; // xmm2
	__m128 v40; // xmm1
	unsigned __int32 v41; // xmm0_4
	__m128 v42; // xmm2
	__m128 v43; // xmm11
	bool v44; // cc
	float v45; // xmm1_4
	__int64 v46; // rdx
	float v47; // xmm0_4
	__int64 v48; // r8
	float v49; // xmm2_4
	__int64 v50; // rdx
	float v51; // xmm0_4
	float v52; // xmm11_4
	__int64 v53; // r9
	__int64 v54; // rdx
	__int64 result; // rax
	__m128 v56; // xmm6
	float v57; // xmm0_4
	float v58; // xmm6_4
	float v59; // xmm1_4
	__m128 v60; // xmm4
	__m128 v61; // xmm5
	__m128 v62; // xmm3
	__m128 v63; // xmm1
	__m128i v64; // xmm1
	__m128 v65; // [rsp+48h] [rbp-C0h]
	__m128 v66; // [rsp+58h] [rbp-B0h]
	__int64 v67[10]; // [rsp+68h] [rbp-A0h] BYREF

	if (*(char*)(a1 + 28) >= 0 || (*(_BYTE*)(a1 + 664) & 2) != 0)
		return sub_1400D2660(a1, a2, a3);
	v5 = *(_QWORD*)(a1 + 2136);
	if (!v5)
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 1056i64))(v5, *(unsigned int*)(a1 + 2048))
		&& !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2136) + 1056i64))(
			*(_QWORD*)(a1 + 2136),
			*(unsigned int*)(a1 + 2052)))
	{
		v6 = (__m128) * (unsigned int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2136) + 1208i64))(*(_QWORD*)(a1 + 2136))
			+ 48);
		v6.m128_f32[0] = fmaxf(v6.m128_f32[0], 2.0);
		v7 = (float)(v6.m128_f32[0] * 500.0) + 25.0;
		v8 = v7 * 0.000099999997;
		v6.m128_f32[0] = v6.m128_f32[0] / sub_140934E10(0.39269909);
		v9 = *(float*)(a1 + 2176);
		v10 = v6;
		v10.m128_f32[0] = fmaxf(v6.m128_f32[0], v7 * 0.000099999997);
		v11 = v10.m128_f32[0] * 3.0;
		if (a3 >= 0)
			*(float*)(a1 + 2176) = fmaxf(v10.m128_f32[0] * -0.5, fminf(v9 - 2.0, v11));
		else
			*(float*)(a1 + 2176) = fmaxf(v10.m128_f32[0] * -0.5, fminf(v9 + 2.0, v11));
		v10.m128_f32[0] = v10.m128_f32[0] + *(float*)(a1 + 2176);
		v12 = sub_1408FC950(COERCE_DOUBLE(1053364187i64));
		v13 = 0i64;
		v14 = v12 / sub_1408FE3D0(COERCE_DOUBLE(1053364187i64));
		v15 = v7 / (float)(v8 - v7);
		v16 = v14 / *(float*)(a1 + 1056);
		*(float*)(a1 + 1240) = v15;
		*(float*)(a1 + 1220) = v14;
		*(_QWORD*)(a1 + 1204) = 0i64;
		*(_QWORD*)(a1 + 1212) = 0i64;
		*(_QWORD*)(a1 + 1224) = 0i64;
		*(_QWORD*)(a1 + 1232) = 0i64;
		*(_DWORD*)(a1 + 1244) = -1082130432;
		*(_QWORD*)(a1 + 1248) = 0i64;
		*(_DWORD*)(a1 + 1260) = 0;
		*(float*)(a1 + 1200) = v16;
		*(float*)(a1 + 1256) = v15 * v8;
		v17 = (__m128)xmmword_140C77870;
		v18 = _mm_add_ps((__m128)xmmword_140C77870, _mm_mul_ps((__m128)xmmword_140C77880, _mm_shuffle_ps(v10, v10, 0)));
		v19 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2136) + 1208i64))(*(_QWORD*)(a1 + 2136));
		v20 = 0i64;
		v66 = _mm_sub_ps(v18, v19[2]);
		v65 = _mm_mul_ps(v66, v66);
		LODWORD(v21) = _mm_shuffle_ps(v65, v65, 170).m128_u32[0];
		if (_mm_shuffle_ps(v65, v65, 85).m128_f32[0] > v65.m128_f32[0])
			v20 = 1i64;
		v22 = 1 - v20;
		if (v21 > v65.m128_f32[v20])
			v20 = 2i64;
		v23 = (__m128)v65.m128_u32[-v22 + 3 - v20];
		v23.m128_f32[0] = (float)(v23.m128_f32[0] + v65.m128_f32[v22]) + v65.m128_f32[v20];
		if (v23.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v28 = 0i64;
			v65 = 0i64;
			v27 = 0.0;
			v26 = 0.0;
			v25 = 0.0;
		}
		else
		{
			v24 = 1.0 / _mm_sqrt_ps(v23).m128_f32[0];
			v25 = v66.m128_f32[0] * v24;
			v26 = v66.m128_f32[1] * v24;
			v27 = v66.m128_f32[2] * v24;
			v65.m128_f32[0] = v66.m128_f32[0] * v24;
			v65.m128_f32[1] = v66.m128_f32[1] * v24;
			v65.m128_f32[2] = v66.m128_f32[2] * v24;
			v28 = v65;
		}
		v29 = 0i64;
		v66 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v28, v28, 210), _mm_shuffle_ps(v17, v17, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v28, v28, 201), _mm_shuffle_ps(v17, v17, 210)));
		v65 = _mm_mul_ps(v66, v66);
		LODWORD(v30) = _mm_shuffle_ps(v65, v65, 170).m128_u32[0];
		if (_mm_shuffle_ps(v65, v65, 85).m128_f32[0] > v65.m128_f32[0])
			v29 = 1i64;
		v31 = 1 - v29;
		if (v30 > v65.m128_f32[v29])
			v29 = 2i64;
		v32 = (__m128)v65.m128_u32[-v31 + 3 - v29];
		v32.m128_f32[0] = (float)(v32.m128_f32[0] + v65.m128_f32[v31]) + v65.m128_f32[v29];
		if (v32.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v37 = 0i64;
			v65 = 0i64;
			v36 = 0.0;
			v35 = 0.0;
			v34 = 0.0;
		}
		else
		{
			v33 = 1.0 / _mm_sqrt_ps(v32).m128_f32[0];
			v34 = v66.m128_f32[0] * v33;
			v35 = v66.m128_f32[1] * v33;
			v36 = v66.m128_f32[2] * v33;
			v65.m128_f32[0] = v66.m128_f32[0] * v33;
			v65.m128_f32[1] = v66.m128_f32[1] * v33;
			v65.m128_f32[2] = v66.m128_f32[2] * v33;
			v37 = v65;
		}
		v38 = 0i64;
		*(_DWORD*)(a1 + 1084) = 0;
		*(float*)(a1 + 1072) = v34;
		*(float*)(a1 + 1080) = v25;
		*(_DWORD*)(a1 + 1100) = 0;
		*(float*)(a1 + 1088) = v35;
		*(float*)(a1 + 1096) = v26;
		*(float*)(a1 + 1104) = v36;
		*(_DWORD*)(a1 + 1116) = 0;
		*(float*)(a1 + 1112) = v27;
		v39 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v37, v37, 210), _mm_shuffle_ps(v28, v28, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v37, v37, 201), _mm_shuffle_ps(v28, v28, 210)));
		*(_DWORD*)(a1 + 1076) = v39.m128_i32[0];
		v40 = _mm_mul_ps(v18, v37);
		v65 = v40;
		*(_DWORD*)(a1 + 1092) = _mm_shuffle_ps(v39, v39, 85).m128_u32[0];
		v41 = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
		v42 = _mm_mul_ps(v39, v18);
		v43 = _mm_mul_ps(v18, v28);
		*(_DWORD*)(a1 + 1108) = v41;
		v44 = _mm_shuffle_ps(v40, v40, 85).m128_f32[0] <= v40.m128_f32[0];
		LODWORD(v45) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
		if (!v44)
			v38 = 1i64;
		v46 = 1 - v38;
		if (v45 > v65.m128_f32[v38])
			v38 = 2i64;
		v47 = (float)(v65.m128_f32[-v46 + 3 - v38] + v65.m128_f32[v46]) + v65.m128_f32[v38];
		v65 = v42;
		v48 = 0i64;
		*(float*)(a1 + 1120) = -v47;
		v44 = _mm_shuffle_ps(v42, v42, 85).m128_f32[0] <= v42.m128_f32[0];
		LODWORD(v49) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
		if (!v44)
			v48 = 1i64;
		v50 = 1 - v48;
		if (v49 > v65.m128_f32[v48])
			v48 = 2i64;
		v51 = (float)(v65.m128_f32[-v50 + 3 - v48] + v65.m128_f32[v50]) + v65.m128_f32[v48];
		v65 = v43;
		*(float*)(a1 + 1124) = -v51;
		v44 = _mm_shuffle_ps(v43, v43, 85).m128_f32[0] <= v43.m128_f32[0];
		LODWORD(v52) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
		if (!v44)
			v13 = 1i64;
		v53 = 1 - v13;
		if (v52 > v65.m128_f32[v13])
			v13 = 2i64;
		*(_DWORD*)(a1 + 1132) = 1065353216;
		v67[0] = a1 + 1072;
		*(float*)(a1 + 1128) = -(float)((float)(v65.m128_f32[-v53 + 3 - v13] + v65.m128_f32[v53]) + v65.m128_f32[v13]);
		sub_1401AFC20(v67, (double*)(a1 + 1136));
		return 0i64;
	}
	if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2136) + 1056i64))(
		*(_QWORD*)(a1 + 2136),
		*(unsigned int*)(a1 + 2048)))
	{
		v54 = *(unsigned int*)(a1 + 2048);
	}
	else
	{
		v54 = *(unsigned int*)(a1 + 2052);
	}
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 2136) + 1064i64))(
		*(_QWORD*)(a1 + 2136),
		v54,
		a1 + 1072,
		0i64,
		0i64,
		a1 + 1072,
		a1 + 1136,
		a1 + 1200);
	if ((int)result >= 0)
	{
		v56 = _mm_mul_ps(*(__m128*)(a1 + 1120), *(__m128*)(a1 + 1120));
		v57 = *(float*)(a1 + 2176);
		v58 = fsqrt(
			(float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
			+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0]);
		v59 = v58 * 3.0;
		if (a3 >= 0)
			*(float*)(a1 + 2176) = fmaxf(v58 * -0.5, fminf(v57 - 2.0, v59));
		else
			*(float*)(a1 + 2176) = fmaxf(v58 * -0.5, fminf(v57 + 2.0, v59));
		v60 = *(__m128*)(a1 + 1120);
		v61 = (__m128)0x40400000u;
		v62 = _mm_mul_ps(v60, v60);
		v62.m128_f32[0] = (float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])
			+ _mm_shuffle_ps(v62, v62, 170).m128_f32[0];
		v63 = v62;
		v63.m128_f32[0] = 1.0 / fsqrt(v62.m128_f32[0]);
		v61.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v62.m128_f32[0] * v63.m128_f32[0]) * v63.m128_f32[0])) * 0.5)
			* v63.m128_f32[0];
		v63.m128_f32[0] = v58 + *(float*)(a1 + 2176);
		v61.m128_f32[0] = fmaxf(v61.m128_f32[0], 0.0);
		v64 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v63, v63, 0), _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v60));
		*(_DWORD*)(a1 + 1120) = _mm_cvtsi128_si32(v64);
		*(_DWORD*)(a1 + 1124) = _mm_cvtsi128_si32(_mm_srli_si128(v64, 4));
		*(_DWORD*)(a1 + 1128) = _mm_cvtsi128_si32(_mm_srli_si128(v64, 8));
		return 0i64;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 14017DAC0: using guessed type __int64 anonymous_0[10];

