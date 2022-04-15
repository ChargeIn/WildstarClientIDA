#include "../winhttp.h"

//----- (00000001404BCB00) ----------------------------------------------------
__int64 __fastcall sub_1404BCB00(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned int a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	__m128* a11,
	__int64 a12,
	int a13)
{
	__int64 v15; // rax
	float v16; // xmm9_4
	float v17; // xmm8_4
	double v18; // xmm6_8
	float v19; // xmm7_4
	float v20; // xmm0_4
	__int64 v21; // rax
	__int64 v22; // rax
	double v23; // xmm8_8
	float v24; // xmm13_4
	double v25; // xmm7_8
	__m128 v26; // xmm0
	__m128 v27; // xmm2
	__m128 v28; // xmm3
	unsigned int v29; // xmm6_4
	float v30; // xmm12_4
	float v31; // xmm11_4
	float v32; // xmm9_4
	float v33; // xmm10_4
	float v34; // xmm6_4
	__int128 v36; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v38; // [rsp+38h] [rbp-C8h]
	__int128 v39; // [rsp+40h] [rbp-C0h]
	float v40; // [rsp+50h] [rbp-B0h]
	float v41; // [rsp+54h] [rbp-ACh]
	float v42; // [rsp+58h] [rbp-A8h]
	int v43; // [rsp+5Ch] [rbp-A4h]
	__int128 v44; // [rsp+60h] [rbp-A0h]
	__m128 v45; // [rsp+70h] [rbp-90h] BYREF
	__int128 v46[6]; // [rsp+80h] [rbp-80h] BYREF

	*(_DWORD*)(a1 + 20) = a5;
	*(_DWORD*)(a1 + 24) = a10;
	*(_DWORD*)(a1 + 36) = a6;
	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 40) = a7;
	*(_QWORD*)(a1 + 8) = a3;
	*(_DWORD*)(a1 + 16) = a4;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_DWORD*)(a1 + 44) = a8;
	*(_DWORD*)(a1 + 48) = a9;
	sub_1404BD000(a1 + 64, (__m128*) & ymmword_140C78390);
	*(__m256*)(a1 + 96) = ymmword_140C78390;
	*(_OWORD*)(a1 + 128) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 144) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 160) = a12;
	*(_DWORD*)(a1 + 168) = a13;
	if (a9 == 4)
	{
		*(_DWORD*)(a1 + 28) = a4;
	}
	else if (a9 <= 4 || a9 > 6 && (unsigned int)(a9 - 9) > 1)
	{
		v21 = sub_140203DA0(a4);
		if (v21)
		{
			*(_DWORD*)(a1 + 28) = *(_DWORD*)(v21 + 20);
			*(_DWORD*)(a1 + 32) = *(_DWORD*)(v21 + 8);
		}
	}
	else
	{
		v15 = sub_140203DA0(a4);
		if (v15)
			LODWORD(v15) = *(_DWORD*)(v15 + 20);
		*(_DWORD*)(a1 + 28) = v15;
		if (a11)
		{
			*(__m128*)(a1 + 64) = *a11;
			*(_DWORD*)(a1 + 80) = a11[1].m128_i32[0];
			*(_DWORD*)(a1 + 84) = a11[1].m128_i32[1];
			*(_DWORD*)(a1 + 88) = a11[1].m128_i32[2];
			*(_DWORD*)(a1 + 92) = a11[1].m128_i32[3];
			if (a9 == 6)
			{
				v16 = sub_1408FE3D0(0.0);
				v17 = sub_1408FC950(0.0);
				*(_QWORD*)&v18 = *(unsigned int*)sub_1401B2FE0((__int64)&v36, a11);
				*(float*)&v18 = *(float*)&v18 * 0.5;
				v19 = sub_1408FE3D0(v18);
				v20 = sub_1408FC950(v18);
				*(float*)&v36 = (float)((float)(v20 * v16) * v17) + (float)((float)(v19 * v17) * v16);
				*((float*)&v36 + 2) = (float)((float)(v20 * v17) * v16) - (float)((float)(v19 * v16) * v17);
				*((float*)&v36 + 1) = (float)((float)(v19 * v17) * v17) - (float)((float)(v20 * v16) * v16);
				*((float*)&v36 + 3) = (float)((float)(v19 * v16) * v16) + (float)((float)(v20 * v17) * v17);
				*(_OWORD*)(a1 + 64) = v36;
				*(_DWORD*)(a1 + 92) = 1065353216;
			}
			else if (a9 == 10)
			{
				*(_DWORD*)(a1 + 92) = 1065353216;
			}
		}
	}
	v22 = sub_140203520(*(_DWORD*)(a1 + 28));
	if (v22)
	{
		*(_QWORD*)&v23 = (unsigned int)dword_140C3B438;
		*(float*)&v23 = *(float*)&dword_140C3B438 * 0.0055555557;
		v24 = 1.0 / *(float*)(v22 + 16);
		v25 = v23;
		v26 = (__m128) * (unsigned int*)(v22 + 40);
		v27 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v22 + 36), (__m128)0i64);
		v45 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v22 + 20), (__m128) * (unsigned int*)(v22 + 28)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v22 + 24), (__m128)0i64));
		v28 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)(v22 + 32), v26), v27);
		*(float*)&v29 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v28.m128_f32[0];
		*(float*)&v23 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
		*(float*)&v25 = *(float*)&v25 * _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
		v30 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v29));
		v31 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v29));
		v32 = sub_1408FE3D0(v25);
		v33 = sub_1408FC950(v25);
		v34 = sub_1408FE3D0(v23);
		v26.m128_f32[0] = sub_1408FC950(v23);
		*((float*)&v37 + 1) = v34;
		HIDWORD(v39) = 0;
		*(float*)&v37 = v26.m128_f32[0] * v33;
		*(float*)&v39 = (float)(v32 * v30) - (float)((float)(v34 * v33) * v31);
		v38 = COERCE_UNSIGNED_INT(-(float)(v26.m128_f32[0] * v32));
		*((float*)&v39 + 1) = v26.m128_f32[0] * v31;
		v40 = (float)((float)(v34 * v33) * v30) + (float)(v32 * v31);
		*((float*)&v39 + 2) = (float)(v33 * v30) + (float)((float)(v34 * v32) * v31);
		v43 = 0;
		v44 = xmmword_140C78440;
		v41 = -(float)(v26.m128_f32[0] * v30);
		v42 = (float)(v33 * v31) - (float)((float)(v34 * v32) * v30);
		sub_1401B1D60((float*)&v36, (float*)&v37);
		v38 = 0i64;
		*(float*)&v37 = v24;
		*(_QWORD*)&v39 = &v36;
		v46[0] = v37;
		*((_QWORD*)&v39 + 1) = &v45;
		v46[1] = v39;
		sub_1401B0590((int*)v46, a1 + 96);
	}
	return a1;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78440: using guessed type __int128 xmmword_140C78440;

