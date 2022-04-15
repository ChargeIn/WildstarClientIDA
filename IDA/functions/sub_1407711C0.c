#include "../winhttp.h"

//----- (00000001407711C0) ----------------------------------------------------
__m128* __fastcall sub_1407711C0(
	__m128* a1,
	__m128* a2,
	__m128* a3,
	double a4,
	unsigned int a5,
	__int64 a6,
	_DWORD* a7,
	float* a8)
{
	__m128 v9; // xmm8
	float v10; // xmm6_4
	float v11; // xmm0_4
	float v12; // xmm3_4
	int* v13; // rdx
	int v14; // r15d
	int* v15; // r8
	__m128i v16; // xmm2
	__m128 v17; // xmm7
	int v18; // ebx
	int v19; // ebp
	int v20; // esi
	float v21; // xmm8_4
	int v22; // edi
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm3_4
	__m128 v26; // xmm2
	__m128 v27; // xmm1
	float v28; // xmm4_4
	float v29; // xmm0_4
	float v30; // xmm4_4
	float v31; // xmm0_4
	float v32; // xmm5_4
	__m128 v33; // xmm2
	float v34; // xmm4_4
	float v35; // xmm0_4
	float v36; // xmm2_4
	float v37; // xmm3_4
	float v38; // xmm0_4
	float v39; // xmm8_4
	__m128 v41; // [rsp+20h] [rbp-A8h]

	v9 = _mm_sub_ps(*a2, *a3);
	v10 = sub_1408FC950(COERCE_DOUBLE(*(_QWORD*)&a4 ^ 0x80000000i64));
	v11 = sub_1408FE3D0(COERCE_DOUBLE(*(_QWORD*)&a4 ^ 0x80000000i64));
	v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	v13 = (int*)(a6 + 4);
	v14 = 0;
	v15 = (int*)(a6 + 12);
	v41.m128_i32[1] = 0;
	v16 = _mm_cvtsi32_si128(0);
	*a1 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((*(_DWORD*)(a6 + 4) + *(_DWORD*)(a6 + 12)) >> 1), v16),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((*(_DWORD*)(a6 + 16) + *(_DWORD*)(a6 + 8)) >> 1), v16)));
	*a7 = 0;
	if (*(_DWORD*)(a6 + 12) - *(_DWORD*)(a6 + 4) > 0 && *(_DWORD*)(a6 + 16) - *(_DWORD*)(a6 + 8) > 0)
	{
		*a7 = 0;
		v41.m128_f32[0] = (float)(v12 * v11) + (float)(v9.m128_f32[0] * v10);
		v41.m128_f32[2] = (float)(v12 * v10) - (float)(v9.m128_f32[0] * v11);
		v17 = _mm_div_ps(v41, _mm_shuffle_ps((__m128)a5, (__m128)a5, 0));
		if (*(_DWORD*)a6)
		{
			v18 = *v15;
			v19 = *(_DWORD*)(a6 + 8);
			v20 = *(_DWORD*)(a6 + 16);
			v21 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
			v22 = *v13;
			v23 = sub_1408FD190(v17.m128_f32[0], -v21);
			v24 = (float)(*(float*)&dword_140C4B868 * 0.5) + v23;
			*a8 = v23;
			v25 = sub_1408FD8A4(v24);
			v26 = (__m128)COERCE_UNSIGNED_INT((float)(v18 - v22));
			v26.m128_f32[0] = (float)(v26.m128_f32[0] * *(float*)(a6 + 24)) * 0.5;
			v27 = v26;
			v28 = (float)((float)(v20 - v19) * *(float*)(a6 + 24)) * 0.5;
			v29 = v28 * v28;
			v30 = v28 * v26.m128_f32[0];
			v27.m128_f32[0] = (float)((float)((float)(v26.m128_f32[0] * v26.m128_f32[0]) * v25) * v25) + v29;
			v31 = 1.0 / _mm_sqrt_ps(v27).m128_f32[0];
			v32 = v31 * v30;
			v33 = _mm_mul_ps(v17, v17);
			v34 = (float)(v30 * v25) * v31;
			if ((float)((float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
				+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0]) >= (float)((float)(v34 * v34) + (float)(v32 * v32)))
			{
				*a7 = 1;
				if (v17.m128_f32[0] < 0.0 != v32 < 0.0)
					v32 = -v32;
				v17.m128_f32[0] = v32;
				LOBYTE(v14) = v21 < 0.0;
				if (v14 != v34 < 0.0)
					v34 = -v34;
				v21 = v34;
			}
			goto LABEL_17;
		}
		v21 = v17.m128_f32[2];
		v35 = fabs(v17.m128_f32[2]);
		v36 = (float)((float)(*(_DWORD*)(a6 + 16) - *(_DWORD*)(a6 + 8)) * 0.5) - 20.0;
		v37 = (float)((float)(*v15 - *v13) * 0.5) - 20.0;
		if (v35 <= v36 || fabs((float)(v36 / v35) * v17.m128_f32[0]) > v37)
		{
			v38 = fabs(v17.m128_f32[0]);
			if (v38 <= v37 || fabs((float)(v36 / v38) * v17.m128_f32[2]) > v36)
				goto LABEL_17;
			v17.m128_f32[0] = v17.m128_f32[0] * (float)(v36 / v38);
			v21 = (float)(v36 / v38) * v17.m128_f32[2];
		}
		else
		{
			v17.m128_f32[0] = (float)(v36 / v35) * v17.m128_f32[0];
			v21 = v17.m128_f32[2] * (float)(v36 / v35);
		}
		*a7 = 1;
		*a8 = sub_1408FD190(v17.m128_f32[0], -v21);
	LABEL_17:
		v39 = v21 + a1->m128_f32[1];
		a1->m128_f32[0] = v17.m128_f32[0] + a1->m128_f32[0];
		a1->m128_f32[1] = v39;
	}
	return a1;
}
// 1407712EC: variable 'v41' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4B868: using guessed type int dword_140C4B868;

