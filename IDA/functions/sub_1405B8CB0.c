#include "../winhttp.h"

//----- (00000001405B8CB0) ----------------------------------------------------
__int64 __fastcall sub_1405B8CB0(__m128* a1, __m128* a2, __int64 a3, float a4)
{
	int v4; // esi
	unsigned __int64 v7; // rax
	__int64 v8; // rax
	unsigned __int64 v9; // rax
	__int64 v10; // rax
	int v11; // edx
	int v12; // ecx
	int v13; // eax
	int v14; // ecx
	unsigned __int64 v15; // r14
	float v16; // xmm7_4
	float v17; // xmm0_4
	__int64 v18; // rax
	unsigned __int64 v19; // r14
	float v20; // xmm4_4
	__int64 v21; // rax
	float v22; // xmm3_4
	float v23; // xmm0_4
	__m128 v24; // xmm8
	float v25; // xmm2_4
	float v26; // xmm3_4
	__m128 v27; // xmm1
	__m128 v28; // xmm10
	float v29; // xmm10_4
	__m128 v30; // xmm3
	float v31; // xmm0_4
	__m128 v32; // xmm8
	float v33; // xmm4_4
	float v34; // xmm0_4
	float v35; // xmm4_4
	float v36; // xmm0_4
	__m128 v37; // xmm3
	float v38; // xmm5_4
	__m128 v39; // xmm0
	int v40; // edx
	int v41; // eax
	unsigned __int64 v42; // rcx
	__int64 v43; // rax
	int v44; // xmm0_4
	int v45; // xmm1_4
	__m128 v46; // xmm3
	__int64 v47; // rdx
	int v48; // xmm0_4
	__m128 v50; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v51; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v52[2]; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v53; // [rsp+78h] [rbp-90h]
	__int64 v54; // [rsp+80h] [rbp-88h]
	int v55; // [rsp+88h] [rbp-80h]
	int v56; // [rsp+8Ch] [rbp-7Ch]
	int v57; // [rsp+90h] [rbp-78h]
	__m128 v58; // [rsp+98h] [rbp-70h]
	int v59; // [rsp+A8h] [rbp-60h]
	float v60; // [rsp+ACh] [rbp-5Ch]
	float v61; // [rsp+B0h] [rbp-58h]
	float v62; // [rsp+B4h] [rbp-54h]
	float v63; // [rsp+B8h] [rbp-50h]
	float v64; // [rsp+BCh] [rbp-4Ch]
	float v65; // [rsp+C0h] [rbp-48h]
	float v66; // [rsp+C4h] [rbp-44h]

	v4 = 0;
	v7 = *(_QWORD*)(a3 + 8);
	v50 = *a2;
	if (v7)
	{
		if (v7 <= qword_140C3FE70)
			v8 = qword_140C3FE68 + v7;
		else
			v8 = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v52[0] = v8;
	v9 = *(_QWORD*)(a3 + 16);
	if (v9)
	{
		if (v9 <= qword_140C3FE70)
			v10 = qword_140C3FE68 + v9;
		else
			v10 = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = *(_DWORD*)(a3 + 36);
	v12 = *(_DWORD*)(a3 + 32);
	v52[1] = v10;
	if ((int)(float)((float)(int)sub_1401AE6F0(v12, v11) * a4))
		v13 = (int)(float)((float)(int)sub_1401AE6F0(*(_DWORD*)(a3 + 32), *(_DWORD*)(a3 + 36)) * a4);
	else
		v13 = 1;
	v14 = *(_DWORD*)(a3 + 32);
	v59 = v13;
	if (!v14)
		v14 = 1;
	v15 = a1[208].m128_u64[1];
	LODWORD(v53) = 0;
	v16 = (float)v13 / (float)v14;
	if (v15)
	{
		v17 = sub_14047A940(a1) * *(float*)(v15 + 140);
	}
	else
	{
		v18 = sub_14022D500(a1[13].m128_u32[2]);
		if (v18)
			v17 = *(float*)(v18 + 40);
		else
			v17 = 0.0;
	}
	v19 = a1[208].m128_u64[1];
	v61 = (float)(v17 * *(float*)(a3 + 40)) * a1[300].m128_f32[1];
	if (v19)
	{
		v20 = sub_14047A940(a1) * *(float*)(v19 + 140);
	}
	else
	{
		v21 = sub_14022D500(a1[13].m128_u32[2]);
		if (v21)
			v20 = *(float*)(v21 + 40);
		else
			v20 = 0.0;
	}
	v22 = a1[300].m128_f32[1];
	v23 = *(float*)(a3 + 48);
	v24 = (__m128)0x40400000u;
	v25 = (float)((float)((float)((float)(*(float*)(a3 + 44) - *(float*)(a3 + 40)) * v16) + *(float*)(a3 + 40)) * v20)
		* v22;
	v26 = v22 * a1[87].m128_f32[0];
	v27 = (__m128)0x3F000000u;
	v62 = v25;
	v64 = *(float*)(a3 + 52);
	v65 = v26;
	v63 = (float)((float)(v23 - v64) * v16) + v64;
	v66 = v26 + 0.5;
	v51 = a1[274];
	v51.m128_i32[1] = 0;
	v28 = _mm_mul_ps(v51, v51);
	v29 = fsqrt(
		(float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
		+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0]);
	v30 = _mm_mul_ps(v51, v51);
	v30.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
		+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
	v31 = 1.0 / fsqrt(v30.m128_f32[0]);
	v24.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v30.m128_f32[0] * v31) * v31)) * 0.5) * v31, 0.0);
	v32 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v51);
	v51 = v32;
	if (v32.m128_f32[0] == 0.0 && v32.m128_f32[2] == 0.0)
	{
		v33 = a1[300].m128_f32[0];
	}
	else
	{
		LODWORD(v34) = sub_1408FCCB0(-v32.m128_f32[0]).m128_u32[0];
		v35 = v34;
		if (v32.m128_f32[2] < 0.0)
			v35 = -v34;
		v36 = *(float*)(a3 + 80);
		v33 = v35 + 1.5707964;
		if (v36 == 0.0)
		{
			v37 = v50;
		}
		else
		{
			v27.m128_f32[0] = v36;
			v37 = _mm_add_ps(_mm_mul_ps(v32, _mm_shuffle_ps(v27, v27, 0)), v50);
			v50 = v37;
		}
		v38 = *(float*)(a3 + 76);
		if (v38 != 0.0)
		{
			v39 = v32;
			v39.m128_f32[0] = v38;
			v50 = _mm_add_ps(
				_mm_mul_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(_mm_xor_ps((__m128)v32.m128_u32[2], (__m128)0x80000000), v32),
						(__m128)0i64),
					_mm_shuffle_ps(v39, v39, 0)),
				v37);
		}
	}
	if ((*(_BYTE*)(a3 + 4) & 1) != 0)
	{
		v40 = dword_140C4D4C0;
		v41 = dword_140C4D4C0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D4C0)
			v41 = *(_DWORD*)qword_140C63750;
		if ((float)(v29 / *((float*)&off_140C4D4B0 + v41 + 8)) >= 2.0)
		{
			v60 = 2.0;
		}
		else
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C4D4C0)
				v40 = *(_DWORD*)qword_140C63750;
			v60 = v29 / *((float*)&off_140C4D4B0 + v40 + 8);
		}
	}
	else
	{
		v60 = 1.0;
	}
	v42 = *(_QWORD*)(a3 + 24);
	if (v42 && v42 <= qword_140C3FE70)
		v43 = v42 + qword_140C3FE68;
	else
		v43 = 0i64;
	v44 = *(_DWORD*)(a3 + 56);
	v45 = *(_DWORD*)(a3 + 60);
	v46 = (__m128) * (unsigned int*)(a3 + 68);
	v47 = a1->m128_u32[2];
	v54 = v43;
	v51 = 0i64;
	v55 = v44;
	v48 = *(_DWORD*)(a3 + 64);
	v56 = v45;
	v57 = v48;
	v58 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v46, (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 72), (__m128)0i64));
	LOBYTE(v4) = *(_QWORD*)(qword_140C65898 + 25744) == (_QWORD)a1;
	return (*(__int64(__fastcall**)(_QWORD, __int64, __m128*, __m128*, float, __int64*, int))(**(_QWORD**)(qword_140C65898 + 29256)
		+ 248i64))(
			*(_QWORD*)(qword_140C65898 + 29256),
			v47,
			&v50,
			&v51,
			COERCE_FLOAT(LODWORD(v33)),
			v52,
			v4);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C4D4B0: using guessed type __int64 (__fastcall **off_140C4D4B0)();
// 140C4D4C0: using guessed type int dword_140C4D4C0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

