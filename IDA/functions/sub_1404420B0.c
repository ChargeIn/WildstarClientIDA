#include "../winhttp.h"

//----- (00000001404420B0) ----------------------------------------------------
__int64 __fastcall sub_1404420B0(int* a1, int* a2, __int64 a3)
{
	unsigned int v3; // ebx
	unsigned int v6; // esi
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // rbx
	__int64 v10; // rbp
	__int64 v11; // rax
	unsigned int v12; // ecx
	unsigned int v13; // edx
	unsigned int v15; // ecx
	unsigned int v16; // edx
	__m128 v17; // xmm3
	__m128 v18; // xmm4
	__m128 v19; // xmm4
	float v20; // xmm4_4
	__m128 v21; // xmm3
	__m128 v22; // xmm3
	float v23; // xmm3_4
	float v24; // xmm0_4
	float v25; // xmm1_4

	v3 = *a1;
	v6 = 0;
	if (sub_140444550(a3, *a1))
		v7 = sub_1402096E0(v3);
	else
		v7 = 0i64;
	v8 = *a2;
	if (sub_140444550(a3, *a2))
		v9 = sub_1402096E0(v8);
	else
		v9 = 0i64;
	if (!v7)
		return 0i64;
	if (!v9)
		return 0i64;
	v10 = sub_140243A00(*(_DWORD*)(v7 + 104));
	v11 = sub_140243A00(*(_DWORD*)(v9 + 104));
	if (!v10 || !v11)
		return 0i64;
	v12 = *(_DWORD*)(v10 + 8);
	v13 = *(_DWORD*)(v11 + 8);
	if (v12 > v13)
		return 0xFFFFFFFFi64;
	if (v12 < v13)
		return 1i64;
	v15 = *(_DWORD*)(v7 + 60);
	v16 = *(_DWORD*)(v9 + 60);
	if (v15 > v16)
		return 0xFFFFFFFFi64;
	if (v15 < v16)
		return 1i64;
	v17 = (__m128) * (unsigned int*)(v10 + 12);
	v18 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v17, (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v10 + 16), (__m128)0i64));
	v19 = _mm_mul_ps(v18, v18);
	v20 = v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
	v21 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v17, (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v11 + 16), (__m128)0i64));
	v22 = _mm_mul_ps(v21, v21);
	v23 = v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
	if (v20 > v23)
		return 0xFFFFFFFFi64;
	if (v20 >= v23)
	{
		v24 = *(float*)(v10 + 20);
		v25 = *(float*)(v11 + 20);
		if (v24 <= v25)
		{
			LOBYTE(v6) = v24 < v25;
			return v6;
		}
		return 0xFFFFFFFFi64;
	}
	return 1i64;
}

