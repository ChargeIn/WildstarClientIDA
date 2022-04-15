#include "../winhttp.h"

//----- (00000001401ADE90) ----------------------------------------------------
__int64 __fastcall sub_1401ADE90(__int64 a1, __int64 a2, __m128* a3, __int64 a4, __m128* a5, __int64 a6)
{
	__int64 v6; // r10
	__m128* v7; // r11
	unsigned __int64 v8; // rdx
	__m128 v9; // xmm3
	__m128 v10; // xmm4
	__m128 v11; // xmm5
	__m128 v12; // xmm6
	__m128 v13; // xmm1
	__int64 result; // rax

	v6 = a1;
	v7 = (__m128*)((char*)a3 + a6 * a4);
	v8 = (unsigned __int64)(a6 * a4) >> 2;
	if (v8 > 0x400)
		v8 = 1024i64;
	v9 = *a5;
	v10 = a5[1];
	v11 = a5[2];
	v12 = a5[3];
	while (a3 < v7)
	{
		_mm_prefetch((const char*)a3 + v8, 0);
		v13 = *a3;
		a3 = (__m128*)((char*)a3 + a4);
		a1 += 16i64;
		_mm_stream_ps(
			(float*)(a1 - 16),
			_mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v9)),
					_mm_mul_ps(_mm_shuffle_ps(v13, v13, 170), v11)),
				v12));
	}
	result = v6;
	_mm_sfence();
	return result;
}

