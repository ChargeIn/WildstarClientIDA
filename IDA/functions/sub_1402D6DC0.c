#include "../winhttp.h"

//----- (00000001402D6DC0) ----------------------------------------------------
__int64 __fastcall sub_1402D6DC0(__int64 a1, __m128* a2, __m128* a3, float* a4, int a5, float* a6)
{
	__int64 result; // rax
	__m128 v11; // xmm4
	__m128 v12; // xmm3
	__m128 v13; // xmm5
	__m128 v14; // [rsp+30h] [rbp-28h] BYREF
	__m128 v15; // [rsp+40h] [rbp-18h] BYREF

	result = sub_1401C9B90(a1 + 80, a2, a3, 0i64);
	if ((_DWORD)result)
	{
		v11 = *(__m128*)(a1 + 192);
		v12 = *(__m128*)(a1 + 176);
		v13 = *(__m128*)(a1 + 208);
		v15 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), v12), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v11)),
				_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v13)),
			*(__m128*)(a1 + 224));
		v14 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v12), _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v11)),
				_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 170), v13)),
			*(__m128*)(a1 + 224));
		return sub_1402D6EA0(a1, &v15, &v14, a4, a6);
	}
	return result;
}
// 1402D6DC0: using guessed type __m128 var_18;

