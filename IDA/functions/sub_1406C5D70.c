#include "../winhttp.h"

//----- (00000001406C5D70) ----------------------------------------------------
__m128* __fastcall sub_1406C5D70(__int64 a1, __m128* a2)
{
	__m128i v4; // xmm2
	__m128 v5; // xmm4
	__int64 v6; // rdx
	_WORD* v7; // rcx
	unsigned __int64 v8; // rax
	float v9; // xmm6_4
	double v10; // xmm0_8
	float v11; // xmm7_4
	float v12; // xmm6_4
	double v13; // xmm0_8
	float v14; // xmm8_4
	float v15; // xmm3_4
	unsigned int v16; // eax
	__m128* result; // rax
	float v18; // xmm3_4
	float v19; // xmm2_4
	unsigned __int64 v20; // [rsp+20h] [rbp-88h]
	int v21[3]; // [rsp+30h] [rbp-78h]
	__int64 v22; // [rsp+3Ch] [rbp-6Ch]
	int v23; // [rsp+44h] [rbp-64h]
	int v24; // [rsp+48h] [rbp-60h]
	int v25; // [rsp+4Ch] [rbp-5Ch]

	v4 = _mm_cvtsi32_si128(0);
	v5 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v4),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v4)));
	*a2 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), v4),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), v4)));
	a2[1] = v5;
	if ((*(_DWORD*)(a1 + 664) & 0x2000i64) != 0)
	{
		v6 = *(_QWORD*)(a1 + 3064);
		v7 = *(_WORD**)(a1 + 1512);
		v8 = 0i64;
		if (*v7)
		{
			do
				++v8;
			while (v7[v8]);
			if (v8 > 1)
				v6 = *(_QWORD*)(a1 + 3056);
		}
		if (v6)
			a2[1].m128_f32[1] = a2[1].m128_f32[1] - *(float*)(v6 + 92);
	}
	v9 = a2[1].m128_f32[0] - a2->m128_f32[0];
	v10 = (**(double(__fastcall***)(__int64))(a1 + 1568))(a1 + 1568);
	v11 = *(float*)&v10 * v9;
	v12 = a2[1].m128_f32[1] - a2->m128_f32[1];
	v13 = (**(double(__fastcall***)(__int64))(a1 + 1568))(a1 + 1568);
	v14 = *(float*)&v13 * v12;
	v20 = _mm_mul_ps(_mm_add_ps(a2[1], *a2), (__m128)xmmword_140B7AC50).m128_u64[0];
	v15 = *(float*)&v20;
	if ((**(float(__fastcall***)(__int64))(a1 + 1728))(a1 + 1728) > 0.0)
	{
		v16 = ++ * (_DWORD*)(a1 + 1792);
		v21[0] = 0;
		v21[1] = -1073741824;
		v21[2] = 0;
		if (v16 >= 8)
			v16 = 0;
		v22 = 0x40000000i64;
		v23 = -1073741824;
		*(_DWORD*)(a1 + 1792) = v16;
		v24 = 0;
		v25 = 0x40000000;
		v15 = *(float*)&v20 + *(float*)&v21[v16];
	}
	result = a2;
	v18 = v15 - (float)(v11 * 0.5);
	a2->m128_f32[0] = v18;
	v19 = *((float*)&v20 + 1) - (float)(v14 * 0.5);
	a2[1].m128_f32[0] = v18 + v11;
	a2->m128_f32[1] = v19;
	a2[1].m128_f32[1] = v19 + v14;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

