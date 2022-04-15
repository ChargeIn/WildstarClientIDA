#include "../winhttp.h"

//----- (00000001400CC5C0) ----------------------------------------------------
void __fastcall sub_1400CC5C0(__int64 a1, _DWORD* a2)
{
	__int128 v2; // xmm1
	int v4; // edx
	int v5; // eax
	int v6; // eax
	__m128i v7; // [rsp+60h] [rbp-39h]
	__int128 v8[5]; // [rsp+80h] [rbp-19h] BYREF
	int v9; // [rsp+D0h] [rbp+37h]

	v2 = *(_OWORD*)(a1 + 96);
	v4 = *(_DWORD*)(a1 + 144);
	v8[0] = *(_OWORD*)(a1 + 64);
	v9 = v4 | 0x300;
	v8[2] = v2;
	v7 = *(__m128i*)(a1 + 128);
	v5 = *a2 + _mm_cvtsi128_si32(v7);
	v8[1] = *(_OWORD*)(a1 + 80);
	v7.m128i_i32[0] = v5;
	v7.m128i_i32[1] += a2[1];
	v6 = a2[2];
	v8[3] = *(_OWORD*)(a1 + 112);
	v7.m128i_i32[2] += v6;
	v7.m128i_i32[3] += a2[3];
	v8[4] = (__int128)v7;
	sub_1400CC680(a1, (__int64)v8);
}
// 1400CC5C0: using guessed type __m128i var_90;

