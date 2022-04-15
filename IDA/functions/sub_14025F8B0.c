#include "../winhttp.h"

//----- (000000014025F8B0) ----------------------------------------------------
__int64 __fastcall sub_14025F8B0(__int64 a1, __int64 a2, __m128* a3)
{
	__m128* v3; // rax
	__m128 v4; // xmm4
	__m128 v5; // xmm3
	__m128 v6; // xmm2
	__m128 v7; // xmm1
	__int128 v9[3]; // [rsp+40h] [rbp-128h] BYREF
	__int128 v10[4]; // [rsp+70h] [rbp-F8h] BYREF
	__m128 v11; // [rsp+B0h] [rbp-B8h] BYREF
	__m128 v12; // [rsp+C0h] [rbp-A8h]
	__m128 v13; // [rsp+D0h] [rbp-98h]
	__m128 v14; // [rsp+E0h] [rbp-88h]
	__m128* v15[10]; // [rsp+F0h] [rbp-78h] BYREF

	v3 = *(__m128**)(a2 + 32);
	v4 = _mm_sub_ps(*v3, (__m128)xmmword_140B7B2F0);
	v5 = _mm_sub_ps(_mm_add_ps(v3[1], (__m128)xmmword_140B7B2F0), v4);
	v10[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), (__m128)0i64);
	v10[1] = (__int128)_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_shuffle_ps(v5, v5, 85), (__m128)0i64));
	v10[2] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps(v5, v5, 170)), (__m128)0i64);
	v15[1] = a3;
	v10[3] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v4, _mm_shuffle_ps(v4, v4, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v4, v4, 85), (__m128)0x3F800000u));
	v15[0] = (__m128*)v10;
	sub_1401AFB10(v15, &v11);
	v6 = _mm_unpacklo_ps(v11, v12);
	v7 = _mm_unpacklo_ps(v13, v14);
	v9[2] = (__int128)_mm_shuffle_ps(_mm_unpackhi_ps(v11, v12), _mm_unpackhi_ps(v13, v14), 68);
	v9[0] = (__int128)_mm_shuffle_ps(v6, v7, 68);
	v9[1] = (__int128)_mm_shuffle_ps(v6, v7, 238);
	return (*(__int64(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 328i64))(
		qword_140C65670,
		48i64,
		v9);
}
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140C65670: using guessed type __int64 qword_140C65670;

