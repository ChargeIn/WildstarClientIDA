#include "../winhttp.h"

//----- (00000001404869D0) ----------------------------------------------------
__int64 __fastcall sub_1404869D0(__m128* a1, float a2)
{
	__m128 v2; // xmm0
	__int64 v5; // rax
	float v6; // xmm0_4
	__int64 v7; // rcx
	__m128* v8; // rdi
	float v9; // xmm6_4
	__m128 v10; // xmm3
	unsigned __int64 v11; // rax
	__m128 v12; // xmm3
	__int128 v13; // [rsp+70h] [rbp-78h] BYREF
	__m256 v14; // [rsp+80h] [rbp-68h] BYREF
	__int128 v15; // [rsp+A0h] [rbp-48h]
	__m128 v16; // [rsp+B0h] [rbp-38h]

	if (a1[6].m128_i32[0])
		return (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[2].m128_u64[1] + 616i64))(
			a1[2].m128_i64[1],
			0i64) != 0
		? 0x80004005
		: 0;
	if (a1[6].m128_i32[1])
	{
		if (a1[10].m128_f32[0] >= 1.0)
		{
			(*(void(__fastcall**)(__m128*))(a1->m128_u64[0] + 8))(a1);
			return 0i64;
		}
		v5 = sub_140200220(0x1D9u);
		if (v5)
			v6 = *(float*)(v5 + 24);
		else
			v6 = 0.0;
		v7 = a1[6].m128_i64[1];
		v8 = a1 + 7;
		v13 = 0i64;
		a1[10].m128_f32[0] = (float)((float)(a2 * 0.001) * v6) + a1[10].m128_f32[0];
		if ((*(int(__fastcall**)(__int64, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128*, int))(*(_QWORD*)v7 + 144i64))(
			v7,
			0i64,
			a1 + 7,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64,
			0,
			&v13,
			-1082130432) < 0)
			return 2147500037i64;
	}
	else
	{
		v8 = a1 + 7;
		v9 = (float)(a2 * a1[10].m128_f32[2]) + a1[10].m128_f32[1];
		a1[10].m128_f32[1] = v9;
		v2.m128_f32[0] = v9;
		a1[7] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a1[9], a1[8]), _mm_shuffle_ps(v2, v2, 0)), a1[8]);
		if (a1[10].m128_f32[1] >= 1.0)
			a1[6].m128_i32[1] = 1;
	}
	v10 = (__m128)v8->m128_u32[0];
	v11 = a1->m128_u64[0];
	v14 = ymmword_140C78410;
	v12 = _mm_unpacklo_ps(v10, (__m128)v8->m128_u32[2]);
	v15 = xmmword_140C78430;
	v16 = _mm_unpacklo_ps(v12, _mm_unpacklo_ps((__m128)v8->m128_u32[1], (__m128)0x3F800000u));
	return (*(__int64(__fastcall**)(__m128*, __m256*))(v11 + 24))(a1, &v14);
}
// 140486B24: variable 'v2' is possibly undefined
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;

