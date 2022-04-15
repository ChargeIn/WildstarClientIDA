#include "../winhttp.h"

//----- (0000000140251170) ----------------------------------------------------
__m128* __fastcall sub_140251170(__m128* a1, __int64 a2, int a3, __m128* a4)
{
	__m128i v7; // xmm2
	char v8; // di
	char v9; // r13
	__int64 v10; // rax
	__int64 v11; // r12
	__int64 v12; // r15
	__m128* v13; // rax
	__int64 v14; // r11
	__m128 v15; // xmm5
	__m128 v16; // xmm9
	__m128 v17; // xmm7
	__m128* v18; // rax
	__int64 v19; // r11
	__m128 v20; // xmm5
	__m128 v21; // xmm11
	__m128 v22; // xmm7
	__m128* v23; // rax
	__int64 v24; // r11
	__m128 v25; // xmm5
	__m128 v26; // xmm6
	__m128* v27; // rax
	__int64 v28; // r11
	__m128 v29; // xmm5
	__m128 v30; // xmm0
	__m128 v31; // xmm2
	__m128 v32; // xmm3
	__m128* result; // rax
	__m128 v34; // [rsp+20h] [rbp-D8h] BYREF
	__m128 v35; // [rsp+30h] [rbp-C8h]
	__m128 v36; // [rsp+40h] [rbp-B8h] BYREF
	__m128 v37; // [rsp+50h] [rbp-A8h] BYREF
	__m128 v38; // [rsp+60h] [rbp-98h] BYREF
	signed int v39; // [rsp+100h] [rbp+8h]
	signed int v40; // [rsp+104h] [rbp+Ch]

	v39 = (int)a4->m128_f32[0];
	v40 = (int)a4->m128_f32[1];
	v7 = _mm_cvtsi32_si128(0);
	v8 = 4 * ((v40 + BYTE4(qword_140C77768)) & 3);
	v9 = (v39 + qword_140C77768) & 3;
	v10 = (unsigned int)(a3 * ((v40 + HIDWORD(qword_140C77768)) >> 2));
	v11 = 16 * ((__int64)(v39 + (int)qword_140C77768) >> 2);
	v12 = (unsigned int)v10;
	v34 = _mm_sub_ps(
		*a4,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), v7),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), v7))));
	v35 = _mm_sub_ps((__m128)xmmword_140B7B240, v34);
	v13 = sub_140250D30(&v36, (unsigned __int16*)(a2 + v11 + v10 + 8), v8 | v9);
	v15 = 0i64;
	v15.m128_f32[0] = (float)(int)v14;
	if (v14 < 0)
		v15.m128_f32[0] = v15.m128_f32[0] + 1.8446744e19;
	v15.m128_f32[0] = v15.m128_f32[0] * 0.06666667;
	v16 = _mm_shuffle_ps((__m128)v34.m128_u32[0], (__m128)v34.m128_u32[0], 0);
	v17 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v13->m128_u32[0], (__m128)v13->m128_u32[2]),
			_mm_unpacklo_ps((__m128)v13->m128_u32[1], v15)),
		v16);
	v18 = sub_140250D30(
		&v37,
		(unsigned __int16*)(a2 + v12 + 16 * ((__int64)v39 >> 2) + 8),
		v8 | (unsigned __int8)(v39 & 3));
	v20 = 0i64;
	v20.m128_f32[0] = (float)(int)v19;
	if (v19 < 0)
		v20.m128_f32[0] = v20.m128_f32[0] + 1.8446744e19;
	v20.m128_f32[0] = v20.m128_f32[0] * 0.06666667;
	v21 = _mm_shuffle_ps((__m128)v35.m128_u32[0], (__m128)v35.m128_u32[0], 0);
	v22 = _mm_mul_ps(
		_mm_add_ps(
			v17,
			_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v18->m128_u32[0], (__m128)v18->m128_u32[2]),
					_mm_unpacklo_ps((__m128)v18->m128_u32[1], v20)),
				v21)),
		_mm_shuffle_ps((__m128)v34.m128_u32[1], (__m128)v34.m128_u32[1], 0));
	v23 = sub_140250D30(
		&v34,
		(unsigned __int16*)(a2 + v11 + (unsigned int)(a3 * (v40 >> 2)) + 8),
		v9 | (unsigned __int8)(4 * (v40 & 3)));
	v25 = 0i64;
	v25.m128_f32[0] = (float)(int)v24;
	if (v24 < 0)
		v25.m128_f32[0] = v25.m128_f32[0] + 1.8446744e19;
	v25.m128_f32[0] = v25.m128_f32[0] * 0.06666667;
	v26 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v23->m128_u32[0], (__m128)v23->m128_u32[2]),
			_mm_unpacklo_ps((__m128)v23->m128_u32[1], v25)),
		v16);
	v27 = sub_140250D30(
		&v38,
		(unsigned __int16*)(a2 + (unsigned int)(a3 * (v40 >> 2)) + 16 * ((__int64)v39 >> 2) + 8),
		v39 & 3 | (4 * (v40 & 3u)));
	v29 = 0i64;
	v29.m128_f32[0] = (float)(int)v28;
	if (v28 < 0)
		v29.m128_f32[0] = v29.m128_f32[0] + 1.8446744e19;
	v30 = (__m128)v27->m128_u32[2];
	v31 = (__m128)v27->m128_u32[1];
	v32 = (__m128)v27->m128_u32[0];
	v29.m128_f32[0] = v29.m128_f32[0] * 0.06666667;
	result = a1;
	*a1 = _mm_add_ps(
		v22,
		_mm_mul_ps(
			_mm_add_ps(v26, _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v32, v30), _mm_unpacklo_ps(v31, v29)), v21)),
			_mm_shuffle_ps((__m128)v35.m128_u32[1], (__m128)v35.m128_u32[1], 0)));
	return result;
}
// 140251277: variable 'v14' is possibly undefined
// 140251301: variable 'v19' is possibly undefined
// 140251394: variable 'v24' is possibly undefined
// 140251422: variable 'v28' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C77768: using guessed type __int64 qword_140C77768;

