//----- (0000000140372FE0) ----------------------------------------------------
__int64 __fastcall sub_140372FE0(__m128* a1)
{
	__int64 v2; // rax
	float v4; // xmm6_4
	float v5; // xmm1_4
	float v6; // xmm5_4
	float v7; // xmm7_4

	v2 = sub_140350CD0(*(_QWORD*)(a1[1].m128_u64[0] + 16), a1->m128_u32[3]);
	if (!v2)
		return 2147500037i64;
	v4 = fminf(1.0, 16777216.0);
	a1[3] = _mm_mul_ps(
		(__m128)xmmword_140B7B270,
		_mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v2 + 88)), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70));
	a1[5].m128_f32[2] = fmaxf(*(float*)(v2 + 16), 0.0);
	a1[5].m128_i32[3] = *(_DWORD*)(v2 + 20);
	a1[6].m128_i32[0] = *(_DWORD*)(v2 + 24);
	a1[6].m128_i32[1] = *(_DWORD*)(v2 + 28);
	v5 = 1.0 / *(float*)(v2 + 32);
	a1[6].m128_f32[2] = v5;
	v6 = (float)(v5 * *(float*)(v2 + 92)) * 0.001;
	a1[4].m128_f32[0] = v6;
	v7 = (float)(*(float*)(v2 + 96) * v5) * 0.001;
	a1[4].m128_f32[1] = v7;
	a1[5].m128_i32[0] = (int)fmaxf(1.0 / fabs(v6), v4);
	a1[5].m128_i32[1] = (int)fmaxf(1.0 / fabs(v7), v4);
	a1[2] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v2 + 56)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	a1[6].m128_f32[3] = (float)(a1[2].m128_f32[3] * a1[5].m128_f32[2]) + a1[5].m128_f32[3];
	a1[7].m128_i32[0] = *(_DWORD*)(v2 + 60);
	a1[7].m128_i32[1] = *(_DWORD*)(v2 + 64);
	a1[7].m128_i32[2] = *(_DWORD*)(v2 + 68);
	a1[7].m128_i32[3] = *(_DWORD*)(v2 + 72);
	a1[8].m128_i32[0] = *(_DWORD*)(v2 + 76);
	a1[8].m128_i32[1] = *(_DWORD*)(v2 + 80);
	return 0i64;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B270: using guessed type __int128 xmmword_140B7B270;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

