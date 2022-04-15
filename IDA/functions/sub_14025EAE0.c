#include "../winhttp.h"

//----- (000000014025EAE0) ----------------------------------------------------
__int64 __fastcall sub_14025EAE0(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	__int64 v3; // rcx
	__m128 v4; // xmm2
	__m128 v5; // xmm1
	__m128 v6; // xmm6
	__int64 v7; // r9
	_OWORD* v8; // rax
	__m128 v9; // xmm1
	__m128* v10; // r10
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128i v13; // xmm2
	__m128 v15; // [rsp+20h] [rbp-B8h] BYREF
	__m128 v16; // [rsp+30h] [rbp-A8h]
	__m128 v17; // [rsp+40h] [rbp-98h]
	__m128 v18; // [rsp+50h] [rbp-88h]
	__int64 v19[10]; // [rsp+60h] [rbp-78h] BYREF

	v19[0] = a2;
	sub_1401AFC20(v19, (double*)v15.m128_u64);
	v3 = *v2;
	v4 = _mm_unpacklo_ps(v15, v16);
	v5 = _mm_unpacklo_ps(v17, v18);
	v6 = _mm_shuffle_ps(_mm_unpackhi_ps(v15, v16), _mm_unpackhi_ps(v17, v18), 68);
	*(__m128*)v3 = _mm_shuffle_ps(v4, v5, 68);
	*(__m128*)(v3 + 16) = _mm_shuffle_ps(v4, v5, 238);
	*(__m128*)(v3 + 32) = v6;
	v8 = *(_OWORD**)(v7 + 32);
	*(_OWORD*)(v3 + 48) = *v8;
	*(_OWORD*)(v3 + 64) = v8[1];
	v9 = *(__m128*) * (_QWORD*)(v7 + 40);
	v11 = _mm_add_ps(
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v10[1]), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *v10)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v10[2]));
	v12 = _mm_mul_ps(v11, v11);
	v12.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]);
	v13 = (__m128i)_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v11), (__m128)xmmword_140B7AC50);
	*(_DWORD*)(v3 + 80) = _mm_cvtsi128_si32(v13);
	*(_DWORD*)(v3 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
	*(_DWORD*)(v3 + 88) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
	*(_DWORD*)(v3 + 92) = 1056964608;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
}
// 14025EB1B: variable 'v2' is possibly undefined
// 14025EB5C: variable 'v7' is possibly undefined
// 14025EB91: variable 'v10' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14025EAE0: using guessed type __int64 var_78[10];

