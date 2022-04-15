#include "../winhttp.h"

//----- (00000001405CE040) ----------------------------------------------------
void __fastcall sub_1405CE040(__int64 a1, __int64 a2, _QWORD* a3)
{
	__m128 v3; // xmm0
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	int v6; // eax
	__m128 v7; // xmm3
	int v8; // eax
	int v9; // eax
	int v10[10]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v11; // [rsp+48h] [rbp-20h]
	int v12; // [rsp+50h] [rbp-18h]
	float v13; // [rsp+54h] [rbp-14h]

	v3 = (__m128) * (unsigned int*)(a2 + 28);
	v4 = (__m128) * (unsigned int*)(a2 + 24);
	v10[1] = *(_DWORD*)a2;
	v5 = (__m128) * (unsigned int*)(a2 + 20);
	v10[2] = *(unsigned __int16*)(a2 + 4);
	v6 = *(_DWORD*)(a2 + 8);
	v10[0] = 18;
	v7 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v3), _mm_unpacklo_ps(v4, (__m128)0i64));
	v10[6] = v6;
	v8 = *(_DWORD*)(a2 + 12);
	v10[3] = v7.m128_i32[0];
	v3.m128_i32[0] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
	v7.m128_u64[0] = _mm_shuffle_ps(v7, v7, 170).m128_u64[0];
	v10[7] = v8;
	v9 = *(_DWORD*)(a2 + 16);
	v10[4] = v3.m128_i32[0];
	v10[5] = v7.m128_i32[0];
	v10[8] = v9;
	v11 = *(_QWORD*)(a2 + 32);
	v12 = *(_DWORD*)(a2 + 40);
	v13 = -(float)*(__int16*)(a2 + 6);
	sub_1405CCF20(a1, (__int64)v10, a3, *(double*)v7.m128_u64);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

