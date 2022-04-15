#include "../winhttp.h"

//----- (0000000140147F20) ----------------------------------------------------
__int64 __fastcall sub_140147F20(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128* v3; // rax
	__int64 v4; // rcx
	__m128 v5; // xmm2
	__int64 result; // rax
	__m128 v7; // xmm2

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = a1[2];
	v5 = *v3;
	result = 1i64;
	v7 = _mm_mul_ps(v5, *v2);
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
		+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]);
	a1[2] += 16i64;
	return result;
}

