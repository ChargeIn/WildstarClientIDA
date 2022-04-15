#include "../winhttp.h"

//----- (000000014087CB80) ----------------------------------------------------
__int64 __fastcall sub_14087CB80(__int64 a1, __int64 a2, int a3, int* a4)
{
	unsigned int v4; // ebp
	int v6; // r8d
	unsigned int v7; // esi
	int v9; // edx
	unsigned int v10; // edi
	unsigned int i; // r10d
	const __m128i* v14; // rdx
	__int64 v15; // r9
	unsigned int v16; // eax
	const __m128i* v17; // rcx
	int j; // r8d
	__m128i v19; // xmm3
	__m128i v20; // xmm5
	__m128i v21; // xmm1
	__m128i v22; // xmm4
	int v23; // eax
	int* v24; // rdx

	v4 = *(unsigned __int16*)(a1 + 18);
	v6 = a4[7];
	v7 = a3 - v6;
	v9 = *(_DWORD*)(a1 + 8);
	v10 = v4;
	if (v7 < v4)
		v10 = v7;
	for (i = 0; v9; v9 &= v9 - 1)
		++i;
	v14 = (const __m128i*)(*(_QWORD*)a1 + 2i64 * i * a4[6]);
	v15 = *(_QWORD*)a2 + 4i64 * i * v6;
	v16 = (v10 * i) >> 4;
	v17 = &v14[2 * v16];
	for (j = v10 * i - 16 * v16;
		v14 < v17;
		*(__m128*)(v15 - 16) = _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v20, v22)), (__m128)xmmword_140B7AB00))
	{
		v19 = _mm_loadu_si128(v14);
		v20 = _mm_loadu_si128(v14 + 1);
		v14 += 2;
		v15 += 64i64;
		v21 = _mm_cmpgt_epi16((__m128i)0i64, v19);
		v22 = _mm_cmpgt_epi16((__m128i)0i64, v20);
		*(__m128*)(v15 - 64) = _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v19, v21)), (__m128)xmmword_140B7AB00);
		*(__m128*)(v15 - 48) = _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpackhi_epi16(v19, v21)), (__m128)xmmword_140B7AB00);
		*(__m128*)(v15 - 32) = _mm_mul_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(v20, v22)), (__m128)xmmword_140B7AB00);
	}
	for (; j; --j)
	{
		v23 = v14->m128i_i16[0];
		v14 = (const __m128i*)((char*)v14 + 2);
		v15 += 4i64;
		*(float*)(v15 - 4) = (float)v23 * 0.000030517578;
	}
	v24 = (__int32*)((char*)v14->m128i_i32 - 2 * i);
	if (i)
		sub_1407DB590(a4, v24, 2i64 * i);
	*(_WORD*)(a1 + 18) -= v10;
	*(_WORD*)(a2 + 18) = *((_WORD*)a4 + 14) + v10;
	a4[8] = 0x10000;
	if (v10 == v4)
		a4[6] = 0;
	else
		a4[6] += v10;
	if (v10 == v7)
		return 45i64;
	a4[7] += v10;
	return 43i64;
}
// 140B7AB00: using guessed type __int128 xmmword_140B7AB00;

