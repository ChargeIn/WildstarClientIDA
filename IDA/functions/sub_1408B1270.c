#include "../winhttp.h"

//----- (00000001408B1270) ----------------------------------------------------
__int64 __fastcall sub_1408B1270(__m128* a1, int a2)
{
	__int64 result; // rax
	__m128* v3; // r8
	unsigned __int64 v4; // rdx
	__m128 v5; // xmm9
	__m128 v6; // xmm1
	__m128 v7; // xmm7
	__m128 v8; // xmm5
	__m128 v9; // xmm9
	__m128 v10; // xmm8
	__m128 v11; // xmm8
	__m128 v12; // xmm7
	__m128 v13; // xmm4
	__m128 v14; // xmm6
	__m128 v15; // xmm1
	__m128 v16; // xmm7
	__m128 v17; // xmm0
	__m128 v18; // xmm1

	result = (unsigned int)(2 * a2);
	v3 = a1;
	v4 = (unsigned __int64)a1->m128_u64 + 4 * result;
	if ((unsigned __int64)a1 < v4)
	{
		do
		{
			v5 = *v3;
			v3 += 2;
			v6 = _mm_shuffle_ps(v5, v3[-1], 136);
			v7 = _mm_shuffle_ps(v5, v3[-1], 221);
			v8 = _mm_cmple_ps((__m128)0i64, v7);
			v9 = _mm_mul_ps(v7, v7);
			v10 = _mm_cmpeq_ps(v6, (__m128)0i64);
			v11 = _mm_or_ps(_mm_andnot_ps(v10, v6), _mm_and_ps(v10, (__m128)xmmword_1409AA020));
			v12 = _mm_div_ps(v7, v11);
			v13 = _mm_cmple_ps((__m128)0i64, v11);
			v14 = _mm_cmple_ps(_mm_andnot_ps((__m128)0i64, v12), (__m128)xmmword_140B7B240);
			v15 = _mm_sqrt_ps(_mm_add_ps(v9, _mm_mul_ps(v11, v11)));
			v16 = _mm_xor_ps(
				_mm_add_ps(
					_mm_div_ps(
						v12,
						_mm_mul_ps(
							_mm_add_ps(
								_mm_or_ps(
									_mm_and_ps(v14, (__m128)xmmword_1409AA060),
									_mm_andnot_ps(v14, (__m128)xmmword_1409AA040)),
								_mm_mul_ps(v12, v12)),
							_mm_or_ps(_mm_and_ps(v14, (__m128)xmmword_1409AA040), _mm_andnot_ps(v14, (__m128)xmmword_140B7B5B0)))),
					_mm_mul_ps(
						_mm_or_ps(
							_mm_and_ps(
								_mm_or_ps(_mm_andnot_ps(v13, (__m128)xmmword_140B7B360), _mm_and_ps(v13, (__m128)0i64)),
								v14),
							_mm_andnot_ps(v14, (__m128)xmmword_140B7B2E0)),
						_mm_or_ps(_mm_and_ps(v8, (__m128)xmmword_140B7B240), _mm_andnot_ps(v8, (__m128)xmmword_140B7B5B0)))),
				(__m128)0i64);
			v17 = _mm_shuffle_ps(v15, v16, 68);
			v18 = _mm_shuffle_ps(v15, v16, 238);
			v3[-2] = _mm_shuffle_ps(v17, v17, 216);
			v3[-1] = _mm_shuffle_ps(v18, v18, 216);
		} while ((unsigned __int64)v3 < v4);
	}
	return result;
}
// 1409AA020: using guessed type __int128 xmmword_1409AA020;
// 1409AA040: using guessed type __int128 xmmword_1409AA040;
// 1409AA060: using guessed type __int128 xmmword_1409AA060;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2E0: using guessed type __int128 xmmword_140B7B2E0;
// 140B7B360: using guessed type __int128 xmmword_140B7B360;
// 140B7B5B0: using guessed type __int128 xmmword_140B7B5B0;

