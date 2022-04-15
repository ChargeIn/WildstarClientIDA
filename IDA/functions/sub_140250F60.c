#include "../winhttp.h"

//----- (0000000140250F60) ----------------------------------------------------
__m128* __fastcall sub_140250F60(__m128* a1, __int64 a2, int a3, __m128* a4)
{
	__m128 v4; // xmm7
	__m128 v5; // xmm8
	__m128i v9; // xmm2
	__int64 v10; // rsi
	char v11; // bl
	__int64 v12; // rdi
	char v13; // bp
	__m128 v14; // xmm6
	__m128 v15; // xmm10
	__m128 v16; // xmm7
	__m128 v17; // xmm9
	__m128 v18; // xmm8
	__m128 v19; // xmm0
	__m128 v20; // xmm9
	__m128 v21; // xmm9
	__m128 v22; // xmm6
	__m128* result; // rax
	__m128 v24; // xmm0
	__m128 v25; // xmm6
	__m128 v26[4]; // [rsp+20h] [rbp-88h] BYREF
	signed int v27; // [rsp+B0h] [rbp+8h]
	signed int v28; // [rsp+B4h] [rbp+Ch]

	v27 = (int)a4->m128_f32[0];
	v28 = (int)a4->m128_f32[1];
	v9 = _mm_cvtsi32_si128(0);
	v10 = (unsigned int)(a3 * ((v28 + HIDWORD(qword_140C77768)) >> 2));
	v11 = 4 * ((v28 + BYTE4(qword_140C77768)) & 3);
	v12 = 8 * ((__int64)(v27 + (int)qword_140C77768) >> 2);
	v13 = (v27 + qword_140C77768) & 3;
	v14 = _mm_sub_ps(
		*a4,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), v9),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v9))));
	v15 = _mm_sub_ps((__m128)xmmword_140B7B240, v14);
	sub_140250D30(v26, (unsigned __int16*)(a2 + v12 + v10), v11 | v13);
	v4.m128_f32[0] = v14.m128_f32[0];
	v16 = _mm_shuffle_ps(v4, v4, 0);
	v17 = _mm_mul_ps(v26[0], v16);
	sub_140250D30(v26, (unsigned __int16*)(a2 + v10 + 8 * ((__int64)v27 >> 2)), v11 | v27 & 3);
	v5.m128_f32[0] = v15.m128_f32[0];
	v18 = _mm_shuffle_ps(v5, v5, 0);
	v19 = _mm_mul_ps(v26[0], v18);
	v20 = _mm_add_ps(v17, v19);
	v19.m128_f32[0] = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
	v21 = _mm_mul_ps(v20, _mm_shuffle_ps(v19, v19, 0));
	sub_140250D30(v26, (unsigned __int16*)(a2 + v12 + (unsigned int)(a3 * (v28 >> 2))), v13 | (4 * (v28 & 3)));
	v22 = _mm_mul_ps(v26[0], v16);
	sub_140250D30(
		v26,
		(unsigned __int16*)(a2 + (unsigned int)(a3 * (v28 >> 2)) + 8 * ((__int64)v27 >> 2)),
		v27 & 3 | (4 * (v28 & 3)));
	result = a1;
	v24 = _mm_mul_ps(v26[0], v18);
	v25 = _mm_add_ps(v22, v24);
	v24.m128_f32[0] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
	*a1 = _mm_add_ps(v21, _mm_mul_ps(v25, _mm_shuffle_ps(v24, v24, 0)));
	return result;
}
// 140251059: variable 'v4' is possibly undefined
// 140251086: variable 'v5' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C77768: using guessed type __int64 qword_140C77768;

