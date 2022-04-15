//----- (000000014052E3D0) ----------------------------------------------------
void __fastcall sub_14052E3D0(__m128* a1)
{
	unsigned int* v2; // rax
	__m128i v3; // xmm0
	__m128 v4; // xmm6
	int* v5; // rax
	int v6[4]; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+50h] [rbp+8h] BYREF

	if (a1[72].m128_u64[0])
	{
		if (a1[79].m128_i32[0] <= 2)
		{
			v2 = sub_14052AB00((__int64)a1, &v7, a1[82].m128_f32);
			v3 = _mm_cvtsi32_si128(0);
			v4 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v2), v3),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v2[1]), v3)));
			v5 = sub_14052B440((__int64)a1, v6);
			a1[78] = _mm_sub_ps(
				v4,
				_mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[2] - *v5), v3),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[3] - v5[1]), v3))),
					(__m128)xmmword_140B7AC50));
			sub_14052E280((__int64)a1);
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 14052E3D0: using guessed type int var_28[4];

