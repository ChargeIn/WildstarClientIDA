#include "../winhttp.h"

//----- (000000014087C8C0) ----------------------------------------------------
__int64 __fastcall sub_14087C8C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v4; // r10
	unsigned int v5; // r12d
	unsigned int v8; // esi
	const __m128i* v9; // r8
	unsigned int v10; // ebx
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // r13
	unsigned int v15; // r10d
	const __m128i* v16; // rdi
	unsigned int v17; // edx
	__int64 v18; // rbp
	__int64 v19; // rcx
	__int64 v20; // r10
	__m128i v21; // xmm1
	__m128 v22; // xmm0
	__m128i v23; // xmm1
	__m128 v24; // xmm0
	__m128i v25; // xmm1
	__m128 v26; // xmm0
	__m128i v27; // xmm1
	unsigned int v28; // eax
	__m128i v29; // xmm0
	int v30; // eax
	__int64 v32; // [rsp+0h] [rbp-48h]
	__int64 v33; // [rsp+50h] [rbp+8h]
	__int64 v34; // [rsp+58h] [rbp+10h]

	v4 = *(unsigned int*)(a4 + 28);
	v5 = *(unsigned __int16*)(a1 + 18);
	v8 = a3 - v4;
	v9 = (const __m128i*)(*(_QWORD*)a1 + 2i64 * (unsigned int)(2 * *(_DWORD*)(a4 + 24)));
	v10 = v5;
	if (v8 < v5)
		v10 = v8;
	v12 = *(_QWORD*)a2 + 4 * v4;
	v13 = (int)(v10 - 1);
	*(_WORD*)a4 = v9->m128i_i16[2 * v13];
	*(_WORD*)(a4 + 2) = v9->m128i_i16[2 * v13 + 1];
	v14 = *(unsigned __int16*)(a2 + 16);
	v15 = (unsigned int)v14 >> 2;
	v16 = &v9[4 * (v10 >> 4)];
	v17 = v10 - 16 * (v10 >> 4);
	if (v9 < v16)
	{
		v18 = v12 - (_QWORD)v9;
		v33 = v12 + 16i64 * v15 - (_QWORD)v9 - 16;
		v34 = 16i64 * (v15 + 1) - (_QWORD)v9 + v12 - 16;
		v19 = 16i64 * (v15 + 3);
		v20 = 16i64 * (v15 + 2) - (_QWORD)v9 + v12 - 16;
		v32 = v19 - (_QWORD)v9 + v12 - 16;
		do
		{
			v21 = _mm_loadu_si128(v9);
			v9 += 4;
			v12 += 64i64;
			*(__m128*)(v12 - 64) = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_srai_epi32(_mm_slli_epi32(v21, 0x10u), 0x10u)),
				(__m128)xmmword_140B7AB00);
			v22 = _mm_cvtepi32_ps(_mm_srai_epi32(v21, 0x10u));
			v23 = _mm_loadu_si128(v9 - 3);
			*(__m128*)((char*)&v9[-3] + v33) = _mm_mul_ps(v22, (__m128)xmmword_140B7AB00);
			*(__m128*)((char*)&v9[-3] + v18) = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_srai_epi32(_mm_slli_epi32(v23, 0x10u), 0x10u)),
				(__m128)xmmword_140B7AB00);
			v24 = _mm_cvtepi32_ps(_mm_srai_epi32(v23, 0x10u));
			v25 = _mm_loadu_si128(v9 - 2);
			*(__m128*)((char*)&v9[-3] + v34) = _mm_mul_ps(v24, (__m128)xmmword_140B7AB00);
			*(__m128*)((char*)&v9[-2] + v18) = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_srai_epi32(_mm_slli_epi32(v25, 0x10u), 0x10u)),
				(__m128)xmmword_140B7AB00);
			v26 = _mm_cvtepi32_ps(_mm_srai_epi32(v25, 0x10u));
			v27 = _mm_loadu_si128(v9 - 1);
			*(__m128*)((char*)&v9[-3] + v20) = _mm_mul_ps(v26, (__m128)xmmword_140B7AB00);
			*(__m128*)((char*)&v9[-1] + v18) = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_srai_epi32(_mm_slli_epi32(v27, 0x10u), 0x10u)),
				(__m128)xmmword_140B7AB00);
			*(__m128*)((char*)&v9[-3] + v32) = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_srai_epi32(v27, 0x10u)),
				(__m128)xmmword_140B7AB00);
		} while (v9 < v16);
		v14 = *(unsigned __int16*)(a2 + 16);
	}
	for (; v17; --v17)
	{
		v28 = v9->m128i_i16[0];
		v12 += 4i64;
		v9 = (const __m128i*)((char*)v9 + 4);
		v29 = _mm_cvtsi32_si128(v28);
		v30 = v9[-1].m128i_i16[7];
		*(float*)(v12 - 4) = _mm_cvtepi32_ps(v29).m128_f32[0] * 0.000030517578;
		*(float*)(v12 + 4 * v14 - 4) = (float)v30 * 0.000030517578;
	}
	*(_WORD*)(a1 + 18) -= v10;
	*(_WORD*)(a2 + 18) = *(_WORD*)(a4 + 28) + v10;
	*(_DWORD*)(a4 + 32) = 0x10000;
	if (v10 == v5)
		*(_DWORD*)(a4 + 24) = 0;
	else
		*(_DWORD*)(a4 + 24) += v10;
	if (v10 == v8)
		return 45i64;
	*(_DWORD*)(a4 + 28) += v10;
	return 43i64;
}
// 140B7AB00: using guessed type __int128 xmmword_140B7AB00;

