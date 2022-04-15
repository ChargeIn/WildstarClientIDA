//----- (0000000140485FA0) ----------------------------------------------------
_BOOL8 __fastcall sub_140485FA0(unsigned int a1, unsigned int a2)
{
	__int64 v4; // rbx
	float v6; // xmm5_4
	float v7; // xmm1_4
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm1
	__m128 v11; // [rsp+20h] [rbp-28h]
	__m128 v12; // [rsp+30h] [rbp-18h] BYREF

	v4 = sub_14024B980(a1);
	if (!v4)
		return 0i64;
	if (a2 && (unsigned int)sub_14043E6D0(qword_140C65898, a2, a1, v12.m128_f32))
		return sub_1404860D0(&v12, *(float*)(v4 + 4), *(float*)(v4 + 8));
	v6 = *(float*)(v4 + 4);
	v7 = *(float*)(v4 + 8);
	v8 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 12), (__m128) * (unsigned int*)(v4 + 20)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 16), (__m128)0i64));
	v12 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
	v11 = v8;
	if (v7 > 0.0 && fabs(v12.m128_f32[1] - v8.m128_f32[1]) > v7)
		return 0i64;
	v11.m128_i32[1] = 0;
	v12.m128_i32[1] = 0;
	v9 = _mm_sub_ps(v11, v12);
	v10 = _mm_mul_ps(v9, v9);
	return (float)(v6 * v6) >= (float)((float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
		+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140485FA0: using guessed type __m128 var_18;

