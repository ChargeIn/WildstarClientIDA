//----- (000000014013DFD0) ----------------------------------------------------
void __fastcall sub_14013DFD0(__m128* a1, __m128* a2, float a3)
{
	float* v3; // rbx
	__m128 v4; // xmm2
	unsigned int* v5; // rax
	__m128i v6; // xmm2
	__m128 v7; // xmm2
	float v8; // xmm2_4
	_QWORD* v9; // rcx
	__m128 v10; // [rsp+30h] [rbp-38h] BYREF
	__m128 v11; // [rsp+40h] [rbp-28h] BYREF
	__m128 v12; // [rsp+50h] [rbp-18h]
	int v13; // [rsp+70h] [rbp+8h] BYREF

	if (a3 >= (float)(a1[7].m128_f32[0] - a1[6].m128_f32[0]))
	{
		v3 = &a1[2].m128_f32[2];
		v4 = _mm_add_ps(a1[7], *a2);
		v11 = _mm_add_ps(a1[6], *a2);
		v12 = v4;
		v5 = sub_140109840(&a1[2].m128_f32[2], &v13);
		v6 = _mm_cvtsi32_si128(0);
		v7 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v5), v6),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[1]), v6)));
		v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
		if (v8 < (float)(v12.m128_f32[1] - v11.m128_f32[1]))
			v11.m128_f32[1] = v11.m128_f32[1] + (float)((float)((float)(v12.m128_f32[1] - v11.m128_f32[1]) - v8) * 0.5);
		v9 = *(_QWORD**)v3;
		v10 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		if (v9)
			sub_140103E60(v9, &v11, &v10, 0, COERCE_INT((float)(*(float*)&dword_140C63664 - v3[2]) * v3[3]));
	}
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63664: using guessed type int dword_140C63664;

