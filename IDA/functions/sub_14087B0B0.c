#include "../winhttp.h"

//----- (000000014087B0B0) ----------------------------------------------------
__int64 __fastcall sub_14087B0B0(float* a1, __int64 a2, __int64* a3)
{
	__int64 v3; // r9
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128* v6; // r8
	__m128 v7; // xmm4
	__m128* v8; // rdx
	__int64 result; // rax
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	unsigned int v14; // [rsp+Ch] [rbp+Ch]

	v3 = *a3;
	*(float*)&v14 = (float)(*(float*)(a2 + 24) - *(float*)(a2 + 28)) * a1[1];
	LODWORD(xmmword_140C628E0) = *(_DWORD*)(a2 + 28);
	v4 = (__m128)v14;
	v4.m128_f32[0] = *(float*)&v14 * 2.0;
	*((float*)&xmmword_140C628E0 + 1) = *(float*)&v14 + *(float*)&xmmword_140C628E0;
	*((float*)&xmmword_140C628E0 + 3) = (float)(*(float*)&v14 * 3.0) + *(float*)&xmmword_140C628E0;
	v5 = _mm_shuffle_ps(v4, v4, 0);
	*((float*)&xmmword_140C628E0 + 2) = (float)(*(float*)&v14 * 2.0) + *(float*)&xmmword_140C628E0;
	v6 = *(__m128**)a2;
	v7 = (__m128)xmmword_140C628E0;
	v8 = (__m128*)(*(_QWORD*)a2 + 4i64 * *(unsigned __int16*)(a2 + 16));
	for (result = *(unsigned __int16*)a1 >> 2; (_DWORD)result; result = (unsigned int)(result - 1))
	{
		v10 = *v6;
		v11 = *v8;
		v3 += 32i64;
		++v6;
		++v8;
		v12 = _mm_mul_ps(v10, v7);
		v13 = _mm_mul_ps(v11, v7);
		v7 = _mm_add_ps(v7, v5);
		*(__m128*)(v3 - 32) = _mm_unpacklo_ps(v12, v13);
		*(__m128*)(v3 - 16) = _mm_unpackhi_ps(v12, v13);
	}
	return result;
}
// 140C628E0: using guessed type __int128 xmmword_140C628E0;

