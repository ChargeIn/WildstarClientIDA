#include "../winhttp.h"

//----- (00000001407BE0E0) ----------------------------------------------------
float __fastcall sub_1407BE0E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // rbx
	__int64 v5; // r11
	__int64 v6; // rdx
	__int64 v7; // r9
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8
	__m128 v12; // xmm1
	__m128 v13; // xmm3
	__m128 v14; // xmm4
	__m128 v15; // xmm4
	__m128 v16; // xmm0

	v2 = *(_QWORD*)(a2 + 8);
	if (!v2)
		return 3.4028235e38;
	v4 = *(_QWORD*)(a2 + 16);
	if (!v4)
		return 3.4028235e38;
	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(unsigned int*)(v2 + 4);
	v7 = *(_QWORD*)(a1 + 8);
	v8 = *(_DWORD*)(v7 + 4 * v6);
	v9 = 3 * v6;
	v10 = *(unsigned int*)(a2 + 4);
	v11 = *(unsigned int*)(v4 + 4);
	v12 = 0i64;
	v13 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 4 * v9), (__m128) * (unsigned int*)(v5 + 4 * v9 + 8)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 4 * v9 + 4), (__m128)0i64));
	v12.m128_f32[0] = (float)((float)*(int*)(v7 + 4 * v10) - (float)v8)
		/ (float)((float)*(int*)(v7 + 4 * v11) - (float)v8);
	v14 = _mm_add_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v12, v12, 0),
			_mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12 * v11), (__m128) * (unsigned int*)(v5 + 12 * v11 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12 * v11 + 4), (__m128)0i64)),
				v13)),
		v13);
	v15 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v14, _mm_shuffle_ps(v14, v14, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v14, v14, 85), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12 * v10), (__m128) * (unsigned int*)(v5 + 12 * v10 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12 * v10 + 4), (__m128)0i64)));
	v16 = _mm_mul_ps(v15, v15);
	return (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0]) + _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
}

