#include "../winhttp.h"

//----- (00000001401DFEE0) ----------------------------------------------------
__int64 __fastcall sub_1401DFEE0(_QWORD* a1, __m128* a2, float* a3, int a4, int a5)
{
	__int64 v5; // r14
	__m128* v9; // rbx
	__m128 v10; // xmm1
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	__int64 result; // rax
	int v14[2]; // [rsp+20h] [rbp-38h] BYREF
	float v15; // [rsp+28h] [rbp-30h]

	v5 = a1[37];
	if (!v5)
		return 0i64;
	v14[1] = a5;
	v14[0] = 0;
	v15 = 2.0 / (float)((float)a4 * a3[5]);
	if (a3[11] != 0.0)
	{
		v9 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 80i64))(v5);
		v10 = *(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 1168i64))(v5) + 32);
		v11 = _mm_sub_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v9[1]),
						_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v9)),
					_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v9[2])),
				v9[3]),
			*a2);
		v12 = _mm_mul_ps(v11, v11);
		v15 = v15
			* fmaxf(
				fsqrt(
					(float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
					+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]),
				a3[14] / a3[10]);
	}
	result = (*(__int64(__fastcall**)(_QWORD*, int*))(*a1 + 56i64))(a1, v14);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

