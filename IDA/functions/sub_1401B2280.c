#include "../winhttp.h"

//----- (00000001401B2280) ----------------------------------------------------
__int64 __fastcall sub_1401B2280(__int64 a1)
{
	unsigned __int64 v2; // r9
	unsigned int* v3; // rax
	unsigned int* v4; // rcx
	unsigned int* v5; // r8
	__m128 v6; // xmm0
	__m128 v7; // xmm7
	__m128 v8; // xmm4
	__m128 v9; // xmm2
	__m128 v10; // xmm5
	__m128 v11; // xmm10
	__m128 v12; // xmm11
	__m128 v13; // xmm8
	__m128 v14; // xmm6
	__m128 v15; // xmm12
	__m128 v16; // xmm9
	__int64 result; // rax
	__int64 v18; // r9
	_OWORD* v19; // r10
	__int128 v20[4]; // [rsp+20h] [rbp-158h] BYREF
	double v21[6]; // [rsp+60h] [rbp-118h] BYREF
	__int128 v22; // [rsp+90h] [rbp-E8h]
	__int128* v23; // [rsp+A0h] [rbp-D8h] BYREF

	v2 = 0i64;
	do
	{
		v3 = (unsigned int*)(a1 + 16i64 * *(int*)((char*)&unk_140B5F090 + v2 + 8));
		v4 = (unsigned int*)(a1 + 16i64 * *(int*)((char*)&unk_140B5F090 + v2 + 4));
		v5 = (unsigned int*)(a1 + 16i64 * *(int*)((char*)&unk_140B5F090 + v2));
		v6 = (__m128) * v3;
		v7 = (__m128)v3[2];
		v8 = (__m128)v3[1];
		v9 = (__m128) * v4;
		v10 = (__m128)v4[1];
		v11 = (__m128)v3[3];
		v23 = v20;
		v12 = (__m128)v4[3];
		v13 = (__m128)v4[2];
		v14 = (__m128)v5[1];
		v15 = (__m128)v5[3];
		v16 = (__m128)v5[2];
		v20[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * v5, v6), _mm_unpacklo_ps(v9, (__m128)0i64));
		v20[1] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v14, v8), _mm_unpacklo_ps(v10, (__m128)0i64));
		v20[2] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v16, v7), _mm_unpacklo_ps(v13, (__m128)0i64));
		v20[3] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v15, v11), _mm_unpacklo_ps(v12, (__m128)0x3F800000u));
		result = sub_1401AFC20((__int64*)&v23, v21);
		v2 = v18 + 12;
		*v19 = v22;
	} while (v2 < 0x60);
	return result;
}
// 1401B23BA: variable 'v18' is possibly undefined
// 1401B23C2: variable 'v19' is possibly undefined
// 1401B2280: using guessed type double var_118[6];

