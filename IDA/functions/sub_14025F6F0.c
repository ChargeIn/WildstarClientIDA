//----- (000000014025F6F0) ----------------------------------------------------
__int64 __fastcall sub_14025F6F0(__int64 a1, float* a2, float* a3, unsigned int* a4, __m128* a5)
{
	__m128 v5; // xmm8
	__m128 v6; // xmm7
	__m128 v7; // xmm6
	__m128 v8; // xmm3
	__m128 v9; // xmm1
	__m128 v10; // xmm0
	__m128 v12; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v13; // [rsp+48h] [rbp-C0h]
	__m128 v14; // [rsp+58h] [rbp-B0h]
	__m128 v15; // [rsp+68h] [rbp-A0h]
	_OWORD v16[3]; // [rsp+78h] [rbp-90h] BYREF
	__int128 v17[4]; // [rsp+A8h] [rbp-60h] BYREF
	__m128* v18[10]; // [rsp+E8h] [rbp-20h] BYREF

	v5 = (__m128) * (unsigned int*)a2;
	v6 = (__m128) * ((unsigned int*)a2 + 1);
	v7 = (__m128) * a4;
	v5.m128_f32[0] = fminf(v5.m128_f32[0], *a3);
	v6.m128_f32[0] = fminf(v6.m128_f32[0], a3[1]);
	v13.m128_u64[0] = __PAIR64__(COERCE_UNSIGNED_INT(fmaxf(a2[5], a3[5])), COERCE_UNSIGNED_INT(fmaxf(a2[4], a3[4])));
	v13.m128_i32[2] = a4[1];
	v12.m128_u64[0] = __PAIR64__(v6.m128_u32[0], v5.m128_u32[0]);
	v12.m128_i32[2] = v7.m128_i32[0];
	v8 = _mm_sub_ps(v13, v12);
	v12.m128_u64[0] = (unsigned __int64)v17;
	v12.m128_u64[1] = (unsigned __int64)a5;
	v17[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)0i64), (__m128)0i64);
	v17[1] = (__int128)_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_shuffle_ps(v8, v8, 85), (__m128)0i64));
	v18[0] = (__m128*)v17;
	v17[2] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps(v8, v8, 170)), (__m128)0i64);
	v18[1] = a5;
	v17[3] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v5, v7), _mm_unpacklo_ps(v6, (__m128)0x3F800000u));
	sub_1401AFB10(v18, &v12);
	v9 = _mm_unpacklo_ps(v14, v15);
	v10 = _mm_unpacklo_ps(v12, v13);
	v16[0] = _mm_shuffle_ps(v10, v9, 68);
	v16[1] = _mm_shuffle_ps(v10, v9, 238);
	v16[2] = _mm_shuffle_ps(_mm_unpackhi_ps(v12, v13), _mm_unpackhi_ps(v14, v15), 68);
	return (*(__int64(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 328i64))(
		qword_140C65670,
		48i64,
		v16);
}
// 140C65670: using guessed type __int64 qword_140C65670;

