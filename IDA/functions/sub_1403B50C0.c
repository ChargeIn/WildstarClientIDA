//----- (00000001403B50C0) ----------------------------------------------------
__m128 __fastcall sub_1403B50C0(__m128* a1)
{
	__m128 v1; // xmm1
	__m128 v2; // xmm2
	__m128 v3; // xmm5
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	__m128 v6; // xmm5
	__m128 v7; // xmm4
	__m128 v8; // xmm5
	__m128 v9; // xmm4
	__m128 v10; // xmm1
	__m128 v11; // xmm2
	__m128 v12; // xmm3
	__m128 v13; // xmm4
	__m128 v15[4]; // [rsp+30h] [rbp-A8h] BYREF
	__m128* v16[10]; // [rsp+70h] [rbp-68h] BYREF

	v16[0] = a1 + 283;
	v16[1] = a1 + 287;
	sub_1401AFB10(v16, v15);
	v1 = _mm_sub_ps(v15[1], (__m128)xmmword_140C78420);
	v2 = _mm_sub_ps(v15[2], (__m128)xmmword_140C78430);
	v3 = _mm_sub_ps(v15[0], (__m128)xmmword_140C78410);
	v4 = _mm_mul_ps(v1, v1);
	v5 = _mm_mul_ps(v2, v2);
	v6 = _mm_mul_ps(v3, v3);
	v7 = _mm_sub_ps(v15[3], (__m128)xmmword_140C78440);
	v8 = _mm_add_ps(v6, _mm_shuffle_ps(v6, v6, 78));
	v9 = _mm_mul_ps(v7, v7);
	v10 = _mm_add_ps(v4, _mm_shuffle_ps(v4, v4, 78));
	v11 = _mm_add_ps(v5, _mm_shuffle_ps(v5, v5, 78));
	v12 = _mm_add_ps(_mm_shuffle_ps(v10, v10, 177), v10);
	v13 = _mm_add_ps(v9, _mm_shuffle_ps(v9, v9, 78));
	v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 177).m128_f32[0] + v8.m128_f32[0]))
		+ (float)(_mm_shuffle_ps(v11, v11, 177).m128_f32[0] + v11.m128_f32[0]))
		+ (float)(_mm_shuffle_ps(v13, v13, 177).m128_f32[0] + v13.m128_f32[0]);
	return v12;
}
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

