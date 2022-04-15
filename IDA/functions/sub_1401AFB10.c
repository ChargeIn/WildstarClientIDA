#include "../winhttp.h"

//----- (00000001401AFB10) ----------------------------------------------------
__m128* __fastcall sub_1401AFB10(__m128** a1, __m128* a2)
{
	__m128* v2; // rax
	__m128 v3; // xmm6
	__m128 v4; // xmm7
	__m128 v5; // xmm5
	__m128 v6; // xmm4
	__m128 v7; // xmm2
	__m128 v8; // xmm3
	__m128 v9; // xmm3
	__m128* result; // rax
	__m128 v11; // xmm3

	v2 = a1[1];
	v3 = v2[2];
	v4 = v2[3];
	v5 = *v2;
	v6 = v2[1];
	v7 = **a1;
	*a2 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *v2)),
			_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v3)),
		_mm_mul_ps(_mm_shuffle_ps(v7, v7, 255), v4));
	v8 = (*a1)[1];
	a2[1] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v5)),
			_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), v3)),
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 255), v4));
	v9 = (*a1)[2];
	a2[2] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v5)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v3)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 255), v4));
	result = *a1;
	v11 = (*a1)[3];
	a2[3] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v5)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v3)),
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 255), v4));
	return result;
}

