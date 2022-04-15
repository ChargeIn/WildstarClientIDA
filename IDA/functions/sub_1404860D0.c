//----- (00000001404860D0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404860D0(__m128* a1, float a2, float a3)
{
	float v4; // xmm4_4
	__m128 v5; // xmm2
	__m128 v6; // xmm1
	__m128 v7; // [rsp+0h] [rbp-28h]
	__m128 v8; // [rsp+10h] [rbp-18h]

	v7 = *a1;
	v8 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
	if (a3 > 0.0 && fabs(v8.m128_f32[1] - v7.m128_f32[1]) > a3)
		return 0i64;
	v7.m128_i32[1] = 0;
	v8.m128_i32[1] = 0;
	v4 = a2 * a2;
	v5 = _mm_sub_ps(v7, v8);
	v6 = _mm_mul_ps(v5, v5);
	return v4 >= (float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0]);
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404860D0: using guessed type __m128 var_18;

