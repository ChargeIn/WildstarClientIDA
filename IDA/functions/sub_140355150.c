#include "../winhttp.h"

//----- (0000000140355150) ----------------------------------------------------
__int64 __fastcall sub_140355150(__m128* a1)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm1
	int v4; // edx
	__m128 v5; // xmm2
	int v6; // r10d
	__m128 v7; // xmm1
	int v8; // ecx
	__int32 v9; // ebx
	int v10; // r11d
	int v11; // edx
	int v12; // r10d
	__int32 v13; // r9d
	__int32 v14; // r9d
	__int64 result; // rax
	unsigned __int64 v16; // [rsp+20h] [rbp-18h] BYREF
	__int64 v17; // [rsp+28h] [rbp-10h]
	__int64 v18; // [rsp+40h] [rbp+8h]
	int v19; // [rsp+40h] [rbp+8h]

	v2 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0);
	v3 = _mm_mul_ps(
		_mm_add_ps((__m128)xmmword_140B7AC50, _mm_mul_ps(_mm_shuffle_ps(a1[54], a1[54], 136), v2)),
		(__m128)xmmword_140B7B480);
	v4 = (int)_mm_shuffle_ps(v3, v3, 85).m128_f32[0];
	LODWORD(v18) = (int)v3.m128_f32[0];
	HIDWORD(v18) = v4;
	if (a1[150].m128_u64[0] != v18)
	{
		a1[150].m128_i32[0] = (int)v3.m128_f32[0];
		a1[150].m128_i32[1] = v4;
		a1[154].m128_i32[0] = 0;
		a1[155].m128_i32[0] = 0;
	}
	v5 = _mm_mul_ps(
		_mm_add_ps((__m128)xmmword_140B7AC50, _mm_mul_ps(_mm_shuffle_ps(a1[54], a1[54], 136), v2)),
		(__m128)xmmword_140B7B480);
	v6 = (int)v5.m128_f32[0];
	a1[150].m128_i32[0] = (int)v5.m128_f32[0];
	a1[150].m128_i32[1] = (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0];
	v7 = (__m128)a1[8].m128_u32[3];
	v7.m128_f32[0] = v7.m128_f32[0] / *(float*)&dword_140C44078;
	v8 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v8 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1) + v8);
	v19 = (int)v7.m128_f32[0] + 2;
	v9 = v19 + a1[150].m128_i32[1];
	v10 = v19 + v6;
	v11 = (int)v7.m128_f32[0] + 1;
	v12 = v6 - v11;
	v13 = a1[150].m128_i32[1];
	LODWORD(v17) = v10;
	a1[152].m128_i32[0] = v12 + qword_140C77768;
	v14 = v13 - v11;
	v16 = __PAIR64__(v14, v12);
	a1[152].m128_i32[1] = v14 + HIDWORD(qword_140C77768);
	HIDWORD(v17) = v9;
	a1[152].m128_i32[2] = v10 - qword_140C77768;
	a1[152].m128_i32[3] = v9 - HIDWORD(qword_140C77768);
	if (a1[150].m128_i32[2] >= v12)
		LODWORD(v17) = v10 + 1;
	else
		LODWORD(v16) = v12 - 1;
	if (a1[150].m128_i32[3] >= v14)
		HIDWORD(v17) = v9 + 1;
	else
		HIDWORD(v16) = v14 - 1;
	if (v16 == a1[150].m128_u64[1] && v17 == a1[151].m128_u64[0])
		return 0i64;
	result = sub_140355800((__int64)a1, (int*)&v16);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B480: using guessed type __int128 xmmword_140B7B480;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44078: using guessed type int dword_140C44078;
// 140C77768: using guessed type __int64 qword_140C77768;

