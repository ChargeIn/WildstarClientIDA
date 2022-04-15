#include "../winhttp.h"

//----- (00000001407A5230) ----------------------------------------------------
__m128* __fastcall sub_1407A5230(__int64 a1, __int64 a2, int a3, __m128* a4, float a5, __m128* a6, float a7)
{
	__m128 v7; // xmm2
	__m128* result; // rax
	float v11; // xmm9_4
	__m128 v12; // xmm8
	__m128 v13; // xmm3
	__m128 v14; // xmm4
	__m128 v15; // xmm0
	__m128 v16; // xmm6
	__m128 v17; // xmm5
	__m128 v18; // xmm1
	__m128 v19; // xmm1
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	float v22; // xmm2_4
	__m128 v23; // xmm6
	float v24; // xmm6_4
	unsigned int v25; // xmm0_4
	int v26; // r8d
	__m128 v27; // [rsp+40h] [rbp-88h] BYREF
	_QWORD v28[2]; // [rsp+50h] [rbp-78h] BYREF
	int v29; // [rsp+60h] [rbp-68h]
	void* retaddr; // [rsp+C8h] [rbp+0h] BYREF

	result = (__m128*) & retaddr;
	v11 = v7.m128_f32[0];
	if (a7 >= 0.0000099999997)
	{
		v12 = v7;
		v12.m128_f32[0] = (float)(v7.m128_f32[0] + a5) * 0.5;
		result = (__m128*)(*(_QWORD*)(a1 + 24) + 112 * a2);
		v13 = v12;
		v13.m128_f32[0] = v12.m128_f32[0] * v12.m128_f32[0];
		v14 = v13;
		v15 = v13;
		v14.m128_f32[0] = (float)(v12.m128_f32[0] * v12.m128_f32[0]) * v12.m128_f32[0];
		v16 = v14;
		v17 = v14;
		v14.m128_f32[0] = v14.m128_f32[0] * 2.0;
		v16.m128_f32[0] = v16.m128_f32[0] - (float)(v12.m128_f32[0] * v12.m128_f32[0]);
		v17.m128_f32[0] = (float)(v17.m128_f32[0] - (float)((float)(v12.m128_f32[0] * v12.m128_f32[0]) * 2.0))
			+ v12.m128_f32[0];
		v13.m128_f32[0] = (float)(v12.m128_f32[0] * v12.m128_f32[0]) * 3.0;
		v18 = v13;
		v18.m128_f32[0] = v13.m128_f32[0] - v14.m128_f32[0];
		v15.m128_f32[0] = (float)(v14.m128_f32[0] - v13.m128_f32[0]) + 1.0;
		v27 = _mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), result[9]),
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), result[1]),
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), result[7]),
					_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), *result))));
		v19 = _mm_sub_ps(v27, *a4);
		v20 = _mm_mul_ps(v19, v19);
		v21 = _mm_sub_ps(*a6, v27);
		v22 = fsqrt(
			(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
			+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
		v23 = _mm_mul_ps(v21, v21);
		v24 = fsqrt(
			(float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
			+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0]);
		if ((float)(v24 + v22) <= (float)(a7 + 0.1))
		{
			*(float*)(a1 + 16) = a7 + *(float*)(a1 + 16);
		}
		else
		{
			sub_1407A5230(a1, a2, a3, (_DWORD)a4, (float)(v11 + a5) * 0.5, (__int64)&v27, LODWORD(v22));
			v25 = *(_DWORD*)(a1 + 16);
			v29 = v12.m128_i32[0];
			v28[0] = v25;
			v28[1] = a2;
			sub_14063A590((__int64*)(a1 + 40), v28);
			return (__m128*)sub_1407A5230(a1, a2, v26, (unsigned int)&v27, LODWORD(a5), (__int64)a6, LODWORD(v24));
		}
	}
	else
	{
		*(float*)(a1 + 16) = a7 + *(float*)(a1 + 16);
	}
	return result;
}
// 1407A525E: variable 'v7' is possibly undefined
// 1407A5414: variable 'v26' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

