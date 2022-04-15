#include "../winhttp.h"

//----- (00000001403966C0) ----------------------------------------------------
__m128* __fastcall sub_1403966C0(__int64 a1, __m128* a2)
{
	__m128* v3; // rax
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128* result; // rax
	__m128 v7; // xmm1
	char v8[16]; // [rsp+20h] [rbp-28h] BYREF
	float v9; // [rsp+30h] [rbp-18h]

	v3 = (__m128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 104i64))(a1, v8);
	v4 = _mm_sub_ps(v3[1], *v3);
	v5 = _mm_add_ps(*v3, v3[1]);
	result = a2;
	v7 = _mm_mul_ps(v4, v4);
	*a2 = _mm_mul_ps(v5, (__m128)xmmword_140B7AC50);
	v9 = fsqrt((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0]) + _mm_shuffle_ps(v7, v7, 170).m128_f32[0])
		* 0.5;
	a2[1].m128_f32[0] = v9;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 1403966C0: using guessed type char var_28[16];

