//----- (00000001400E7B00) ----------------------------------------------------
__int64 __fastcall sub_1400E7B00(__int64 a1)
{
	__m128 v1; // xmm3
	__m128 v2; // xmm2
	__m128 v3; // xmm1
	__m128* v5; // r8
	__int64 v6; // r8
	__int64 result; // rax
	__int128 v8[4]; // [rsp+30h] [rbp-D0h] BYREF
	int v9; // [rsp+70h] [rbp-90h]
	int v10; // [rsp+74h] [rbp-8Ch]
	int v11; // [rsp+78h] [rbp-88h]
	__int128 v12[4]; // [rsp+80h] [rbp-80h] BYREF
	__m128* v13[10]; // [rsp+C0h] [rbp-40h] BYREF

	v1 = (__m128) * (unsigned int*)(a1 + 3048);
	v2 = (__m128) * (unsigned int*)(a1 + 3052);
	v3 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 88), (__m128) * (unsigned int*)(a1 + 88), 0);
	v12[0] = xmmword_140C78410;
	v12[1] = xmmword_140C78420;
	v9 = v1.m128_i32[0];
	v10 = v2.m128_i32[0];
	v8[0] = (__int128)_mm_mul_ps((__m128)xmmword_140C78410, v3);
	v8[1] = (__int128)_mm_mul_ps((__m128)xmmword_140C78420, v3);
	v12[2] = xmmword_140C78430;
	v8[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
	v13[1] = (__m128*)v8;
	v8[3] = xmmword_140C78440;
	v11 = 0;
	v13[0] = (__m128*)v12;
	v12[3] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v1, (__m128)0i64), _mm_unpacklo_ps(v2, (__m128)0x3F800000u));
	sub_1401AFB10(v13, (__m128*)(a1 + 3072));
	v13[0] = v5;
	sub_1401AFC20((__int64*)v13, (double*)(a1 + 3136));
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 80i64))(qword_140C65680, v6);
	*(_BYTE*)(a1 + 53) = 1;
	return result;
}
// 1400E7BFF: variable 'v5' is possibly undefined
// 1400E7C15: variable 'v6' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

