#include "../winhttp.h"

//----- (00000001408E8DC0) ----------------------------------------------------
__m128* __fastcall sub_1408E8DC0(int** a1, float* a2, __int64 a3)
{
	__m128* v3; // r9
	_DWORD* v4; // rdi
	__int64 v5; // r11
	int* v6; // r14
	unsigned int v8; // ebx
	float v10; // xmm2_4
	unsigned int v11; // esi
	__int64 v12; // rdx
	__m128 v13; // xmm3
	__int64 v14; // r8
	__int64 v15; // rax
	__m128 v16; // xmm0
	__m128 v17; // xmm4
	__m128 v18; // xmm3
	__m128 v19; // xmm2
	__m128 v20; // xmm0
	__m128 v21; // xmm4

	v3 = (__m128*)a1[1];
	v4 = *a1;
	v5 = **a1;
	v6 = a1[2];
	v8 = 1;
	v10 = *a2 - a2[2 * v5];
	v11 = **a1 / 2;
	v3->m128_f32[0] = *a2 + a2[2 * v5];
	v3->m128_f32[1] = v10;
	if (v11)
	{
		do
		{
			v12 = v8;
			v13 = *(__m128*) & a2[2 * v8];
			v14 = (unsigned int)v5 - v8 - 1;
			v15 = v8 - 1;
			v8 += 2;
			v16 = _mm_mul_ps(_mm_shuffle_ps(*(__m128*) & a2[2 * v14], *(__m128*) & a2[2 * v14], 78), (__m128)xmmword_1409A9FA0);
			v17 = _mm_add_ps(v16, v13);
			v18 = _mm_sub_ps(v13, v16);
			v19 = _mm_add_ps(
				_mm_mul_ps(
					_mm_mul_ps(_mm_shuffle_ps(v18, v18, 245), (__m128)xmmword_1409B44B0),
					_mm_shuffle_ps(*(__m128*) & v6[2 * v15], *(__m128*) & v6[2 * v15], 177)),
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 160), *(__m128*) & v6[2 * v15]));
			v20 = _mm_add_ps(v19, v17);
			v21 = _mm_mul_ps(_mm_sub_ps(v17, v19), (__m128)xmmword_1409A9FA0);
			*(__m128*)((char*)v3 + 8 * v12) = v20;
			*(__m128*)((char*)v3 + 8 * v14) = _mm_shuffle_ps(v21, v21, 78);
		} while (v8 <= v11);
	}
	return sub_1408E90D0((__int64)v4, v3, a3);
}
// 1409A9FA0: using guessed type __int128 xmmword_1409A9FA0;
// 1409B44B0: using guessed type __int128 xmmword_1409B44B0;

