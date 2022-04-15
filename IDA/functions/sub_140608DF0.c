#include "../winhttp.h"

//----- (0000000140608DF0) ----------------------------------------------------
__int64 __fastcall sub_140608DF0(__int64 a1, __int64 a2, __m128* a3, __int64 a4)
{
	float v4; // xmm2_4
	float v5; // xmm1_4
	unsigned int v6; // r10d
	__int128 v10; // xmm0
	int v11; // eax
	__int64 v12; // rbx
	float v13; // xmm7_4
	int v14; // r9d
	__int64 v15; // r8
	__m128 v16; // xmm11
	float v17; // xmm1_4
	__int64 v18; // rdx
	__m128 v19; // xmm0
	float v20; // xmm1_4
	float v21; // xmm8_4
	float v22; // xmm9_4
	float v23; // xmm10_4
	__m128 v24; // xmm3
	__int64 v25; // r8
	float v26; // xmm2_4
	__int64 v27; // rdx
	__m128 v28; // xmm0
	float v29; // xmm6_4
	float v30; // xmm4_4
	float v31; // xmm5_4
	float v32; // xmm7_4
	__int64 v33; // r8
	__m128 v34; // xmm2
	unsigned __int32 v35; // xmm0_4
	__m128 v36; // xmm2
	__m128 v37; // xmm12
	float v38; // xmm1_4
	__int64 v39; // rdx
	float v40; // xmm0_4
	__int64 v41; // r8
	bool v42; // cc
	float v43; // xmm2_4
	__int64 v44; // rdx
	float v45; // xmm0_4
	__int64 v46; // rdx
	float v47; // xmm0_4
	float v48; // xmm12_4
	__int64 v49; // r11
	float v50; // xmm2_4
	float v51; // xmm2_4
	__m128 v53; // [rsp+38h] [rbp-D0h]
	__m128 v54; // [rsp+48h] [rbp-C0h]
	float v55[2]; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v56; // [rsp+68h] [rbp-A0h] BYREF
	int v57; // [rsp+78h] [rbp-90h]
	float v58; // [rsp+7Ch] [rbp-8Ch]
	__int64 v59; // [rsp+80h] [rbp-88h]
	__int128 v60; // [rsp+88h] [rbp-80h]
	__int128 v61; // [rsp+98h] [rbp-70h]
	int* v62; // [rsp+A8h] [rbp-60h] BYREF

	v4 = a3[3].m128_f32[2];
	v5 = a3[2].m128_f32[2];
	v6 = dword_140C636A8;
	v55[0] = (float)(v4 / v5) - 0.0000099999997;
	*(_OWORD*)(a1 + 16) = *(_OWORD*)a2;
	*(_OWORD*)(a1 + 32) = *(_OWORD*)(a2 + 16);
	v10 = *(_OWORD*)(a2 + 32);
	v55[1] = v4 / (float)(v5 + 1.0);
	*(_OWORD*)(a1 + 48) = v10;
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 48);
	v11 = v6 - *(_DWORD*)a1;
	v12 = *(_QWORD*)(a1 + 104);
	*(_DWORD*)a1 = v6;
	v13 = (float)v11 * 0.001;
	if (v12)
	{
		do
		{
			sub_140609D70(v12, (__m128*)a2, a3, a4, v13);
			v12 = *(_QWORD*)(v12 + 440);
		} while (v12);
		v6 = dword_140C636A8;
	}
	v14 = dword_140DC3598;
	if ((dword_140DC3598 & 1) == 0)
	{
		v15 = 0i64;
		v14 = dword_140DC3598 | 1;
		dword_140DC3598 |= 1u;
		v16 = 0i64;
		v54 = _mm_sub_ps((__m128)xmmword_140C77880, (__m128)0i64);
		v53 = _mm_mul_ps(v54, v54);
		LODWORD(v17) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
		if (_mm_shuffle_ps(v53, v53, 85).m128_f32[0] > v53.m128_f32[0])
			v15 = 1i64;
		v18 = 1 - v15;
		if (v17 > v53.m128_f32[v15])
			v15 = 2i64;
		v19 = (__m128)v53.m128_u32[-v18 + 3 - v15];
		v19.m128_f32[0] = (float)(v19.m128_f32[0] + v53.m128_f32[v18]) + v53.m128_f32[v15];
		if (v19.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v24 = 0i64;
			v53 = 0i64;
			v23 = 0.0;
			v22 = 0.0;
			v21 = 0.0;
		}
		else
		{
			v20 = 1.0 / _mm_sqrt_ps(v19).m128_f32[0];
			v21 = v54.m128_f32[0] * v20;
			v22 = v54.m128_f32[1] * v20;
			v23 = v54.m128_f32[2] * v20;
			v53.m128_f32[0] = v54.m128_f32[0] * v20;
			v53.m128_f32[1] = v54.m128_f32[1] * v20;
			v53.m128_f32[2] = v54.m128_f32[2] * v20;
			v24 = v53;
		}
		v25 = 0i64;
		v54 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v24, v24, 210),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(v24, v24, 201),
				_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
		v53 = _mm_mul_ps(v54, v54);
		LODWORD(v26) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
		if (_mm_shuffle_ps(v53, v53, 85).m128_f32[0] > v53.m128_f32[0])
			v25 = 1i64;
		v27 = 1 - v25;
		if (v26 > v53.m128_f32[v25])
			v25 = 2i64;
		v28 = (__m128)v53.m128_u32[-v27 + 3 - v25];
		v28.m128_f32[0] = (float)(v28.m128_f32[0] + v53.m128_f32[v27]) + v53.m128_f32[v25];
		if (v28.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v53 = 0i64;
			v32 = 0.0;
			v31 = 0.0;
			v30 = 0.0;
		}
		else
		{
			v29 = 1.0 / _mm_sqrt_ps(v28).m128_f32[0];
			v30 = v54.m128_f32[0] * v29;
			v31 = v54.m128_f32[1] * v29;
			v32 = v54.m128_f32[2] * v29;
			v53.m128_f32[0] = v54.m128_f32[0] * v29;
			v53.m128_f32[1] = v54.m128_f32[1] * v29;
			v53.m128_f32[2] = v54.m128_f32[2] * v29;
			v16 = v53;
		}
		v33 = 0i64;
		dword_140DC35A0 = LODWORD(v30);
		dword_140DC35A8 = LODWORD(v21);
		dword_140DC35B0 = LODWORD(v31);
		dword_140DC35AC = 0;
		dword_140DC35BC = 0;
		dword_140DC35CC = 0;
		dword_140DC35B8 = LODWORD(v22);
		dword_140DC35C0 = LODWORD(v32);
		dword_140DC35C8 = LODWORD(v23);
		v34 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 210), _mm_shuffle_ps(v24, v24, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 201), _mm_shuffle_ps(v24, v24, 210)));
		dword_140DC35A4 = v34.m128_i32[0];
		v53 = _mm_mul_ps((__m128)xmmword_140C77880, v16);
		dword_140DC35B4 = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
		v35 = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
		v36 = _mm_mul_ps(v34, (__m128)xmmword_140C77880);
		v37 = _mm_mul_ps((__m128)xmmword_140C77880, v24);
		dword_140DC35C4 = v35;
		LODWORD(v38) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
		if (_mm_shuffle_ps(v53, v53, 85).m128_f32[0] > v53.m128_f32[0])
			v33 = 1i64;
		v39 = 1 - v33;
		if (v38 > v53.m128_f32[v33])
			v33 = 2i64;
		v40 = (float)(v53.m128_f32[-v39 + 3 - v33] + v53.m128_f32[v39]) + v53.m128_f32[v33];
		v53 = v36;
		v41 = 0i64;
		*(float*)&dword_140DC35D0 = -v40;
		v42 = _mm_shuffle_ps(v36, v36, 85).m128_f32[0] <= v36.m128_f32[0];
		LODWORD(v43) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
		if (!v42)
			v41 = 1i64;
		v44 = 1 - v41;
		if (v43 > v53.m128_f32[v41])
			v41 = 2i64;
		v45 = v53.m128_f32[-v44 + 3 - v41] + v53.m128_f32[v44];
		v46 = 0i64;
		v47 = v45 + v53.m128_f32[v41];
		v53 = v37;
		*(float*)&dword_140DC35D4 = -v47;
		v42 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0] <= v37.m128_f32[0];
		LODWORD(v48) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
		if (!v42)
			v46 = 1i64;
		v49 = 1 - v46;
		if (v48 > v53.m128_f32[v46])
			v46 = 2i64;
		dword_140DC35DC = 1065353216;
		*(float*)&dword_140DC35D8 = -(float)((float)(v53.m128_f32[-v49 + 3 - v46] + v53.m128_f32[v49]) + v53.m128_f32[v46]);
	}
	if ((v14 & 2) == 0)
	{
		dword_140DC3598 = v14 | 2;
		v62 = &dword_140DC35A0;
		sub_1401AFC20((__int64*)&v62, dbl_140DC35E0);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 80) + 48i64))(*(_QWORD*)(a1 + 80), v6, 0i64);
	(*(void(__fastcall**)(_QWORD, int*, double*, float*, _DWORD))(**(_QWORD**)(a1 + 80) + 80i64))(
		*(_QWORD*)(a1 + 80),
		&dword_140DC35A0,
		dbl_140DC35E0,
		v55,
		0);
	v50 = a3->m128_f32[0];
	v56 = xmmword_140B7A330;
	v51 = (float)(v50 * 2.0) / a3[1].m128_f32[1];
	v60 = xmmword_140B7A850;
	v57 = 0;
	v59 = 0i64;
	v58 = 2.0 / v51;
	v61 = xmmword_140B7B0B0;
	if ((dword_140DC3598 & 4) == 0)
	{
		dword_140DC3598 |= 4u;
		sub_1407E4830(dword_140DC3620, 0i64, 0x310ui64);
	}
	return (*(__int64(__fastcall**)(_QWORD, __int128*, int*))(**(_QWORD**)(a1 + 80) + 136i64))(
		*(_QWORD*)(a1 + 80),
		&v56,
		dword_140DC3620);
}
// 140608EBF: variable 'a4' is possibly undefined
// 14060931C: variable 'v6' is possibly undefined
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A850: using guessed type __int128 xmmword_140B7A850;
// 140B7B0B0: using guessed type __int128 xmmword_140B7B0B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140DC3598: using guessed type int dword_140DC3598;
// 140DC35A0: using guessed type int dword_140DC35A0;
// 140DC35A4: using guessed type int dword_140DC35A4;
// 140DC35A8: using guessed type int dword_140DC35A8;
// 140DC35AC: using guessed type int dword_140DC35AC;
// 140DC35B0: using guessed type int dword_140DC35B0;
// 140DC35B4: using guessed type int dword_140DC35B4;
// 140DC35B8: using guessed type int dword_140DC35B8;
// 140DC35BC: using guessed type int dword_140DC35BC;
// 140DC35C0: using guessed type int dword_140DC35C0;
// 140DC35C4: using guessed type int dword_140DC35C4;
// 140DC35C8: using guessed type int dword_140DC35C8;
// 140DC35CC: using guessed type int dword_140DC35CC;
// 140DC35D0: using guessed type int dword_140DC35D0;
// 140DC35D4: using guessed type int dword_140DC35D4;
// 140DC35D8: using guessed type int dword_140DC35D8;
// 140DC35DC: using guessed type int dword_140DC35DC;
// 140DC35E0: using guessed type double dbl_140DC35E0[8];
// 140DC3620: using guessed type int dword_140DC3620[196];

